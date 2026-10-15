
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_schemabindings.cpp  (line 0, @0x0000000001a6ac70, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_schemabindings_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CSchemaRegistration::RegisterAllModuleData  (line 20, @0x000000000312dee0, libserver.so)
// calls: GetNameOfModule
// callers: InstallSchemaBindings, InstallModuleSchemaBindings_SuppressVerification
// globals: CSchemaRegistration::s_pSchemaRegistrationList
void __fastcall CSchemaRegistration::RegisterAllModuleData(ISchemaSystem *pSchemaSystem)
{
  unsigned int i; // r12d
  CSchemaRegistration *j; // rbx
  void (__fastcall *v4)(ISchemaSystem *, const char *); // rbx
  const char *NameOfModule; // rax

  for ( i = 0; i != 2; ++i )
  {
    for ( j = CSchemaRegistration::s_pSchemaRegistrationList; j != 0; j = j->m_pNext )
      (*j->_vptr_CSchemaRegistration)(j, pSchemaSystem, i);
  }
  v4 = *(*pSchemaSystem + 200LL);
  NameOfModule = GetNameOfModule();
  v4(pSchemaSystem, NameOfModule);
}


// InstallSchemaBindings  (line 36, @0x000000000312df50, libserver.so)  // inlines: _V_strcmp
// calls: CSchemaRegistration::RegisterAllModuleData
// strings: "SchemaSystem_001"
// globals: s_bSchemaBindingsInstalled
bool __fastcall InstallSchemaBindings(const char *pSchemaSystemInterfaceVersion, ISchemaSystem *pSchemaSystem)
{
  bool result; // al

  result = 0;
  if ( strcmp("SchemaSystem_001", pSchemaSystemInterfaceVersion) == 0 )
  {
    result = 1;
    if ( !s_bSchemaBindingsInstalled )
    {
      g_pSchemaSystem = pSchemaSystem;
      CSchemaRegistration::RegisterAllModuleData(pSchemaSystem);
      s_bSchemaBindingsInstalled = 1;
      return 1;
    }
  }
  return result;
}


// InstallModuleSchemaBindings_SuppressVerification  (line 61, @0x000000000312dfb0, libserver.so)
// calls: CSchemaRegistration::RegisterAllModuleData
// callers: CSchemaInstallCallback::OnConnect, InstallModuleSchemaBindings
// globals: s_bSchemaBindingsInstalled
void __cdecl InstallModuleSchemaBindings_SuppressVerification()
{
  if ( g_pSchemaSystem != 0 && !s_bSchemaBindingsInstalled )
  {
    CSchemaRegistration::RegisterAllModuleData(g_pSchemaSystem);
    s_bSchemaBindingsInstalled = 1;
  }
}


// InstallModuleSchemaBindings  (line 71, @0x000000000312dff0, libserver.so)
// calls: InstallModuleSchemaBindings_SuppressVerification
void __cdecl InstallModuleSchemaBindings()
{
  void (__fastcall *v0)(ISchemaSystem *, _QWORD); // r12
  unsigned __int8 v1; // al

  InstallModuleSchemaBindings_SuppressVerification();
  if ( g_pSchemaSystem != 0 )
  {
    v0 = *(*g_pSchemaSystem + 176LL);
    v1 = (*(g_pApplication->_vptr_IAppSystem + 23))(g_pApplication);
    v0(g_pSchemaSystem, v1);
  }
}


