
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// LinkLuaModifier  (line 34, @0x0000000002623880, libserver.so)  // inlines: assign, length, set_has_modifier_filename, set_has_modifier_type, set_modifier_filename, set_modifier_type
// calls: ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, CDOTALuaModifierEntry::CDOTALuaModifierEntry, strlen, std::string::assign(char const*,ulong), CDOTALuaModifierEntry::ByteSize, CDOTALuaModifierEntry::SerializeWithCachedSizesToArray, CDOTALuaModifierEntry::~CDOTALuaModifierEntry, Warning, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_lua_vertical_motion", "modifier_lua_motion_both", "modifier_lua", "modifier_lua_horizontal_motion", "Unexpected issue serializing buff!\n"
// globals: g_pLuaModifierStringTable
void __fastcall LinkLuaModifier(const char *pszLuaModifierName, const char *pszFileName, int nType)
{
  const char *v5; // rbx
  CModifieractoryDictionary *v7; // rax
  IModifierFactory *Factory; // rbx
  CModifieractoryDictionary *v9; // rax
  size_t v10; // rax
  unsigned int v11; // r14d
  void *v12; // rsp
  CModifieractoryDictionary *v13; // rax
  _BYTE v14[15]; // [rsp+0h] [rbp-50h] BYREF
  int v15; // [rsp+10h] [rbp-40h] BYREF
  std::string *v16; // [rsp+18h] [rbp-38h]
  int v17; // [rsp+20h] [rbp-30h]
  unsigned __int64 v18; // [rsp+28h] [rbp-28h]

  v18 = __readfsqword(0x28u);
  if ( g_pLuaModifierStringTable != 0 )
  {
    v5 = "modifier_lua_vertical_motion";
    if ( nType != 2 )
    {
      v5 = "modifier_lua_motion_both";
      if ( nType != 3 )
      {
        v5 = "modifier_lua";
        if ( nType == 1 )
          v5 = "modifier_lua_horizontal_motion";
      }
    }
    v7 = ModifierFactoryDictionary();
    Factory = CModifieractoryDictionary::FindFactory(v7, v5);
    if ( Factory != 0 )
    {
      v9 = ModifierFactoryDictionary();
      if ( CModifieractoryDictionary::FindFactory(v9, pszLuaModifierName) == 0 )
      {
        v13 = ModifierFactoryDictionary();
        v13->InstallFactory(Factory, pszLuaModifierName);
      }
      CDOTALuaModifierEntry::CDOTALuaModifierEntry(v14);
      v15 |= 2u;
      v10 = strlen(pszFileName);
      std::string::assign(v16, pszFileName, v10);
      v15 |= 1u;
      v17 = nType;
      v11 = CDOTALuaModifierEntry::ByteSize(v14);
      v12 = alloca(((v11 + 31) & 0xFFFFFFF0) + 16LL);
      if ( CDOTALuaModifierEntry::SerializeWithCachedSizesToArray(v14, (&v15 & 0xFFFFFFFFFFFFFFEFLL)) == 0 )
        Warning("Unexpected issue serializing buff!\n");
      (*(g_pLuaModifierStringTable->_vptr_INetworkStringTable + 8))(
        g_pLuaModifierStringTable,
        1,
        pszLuaModifierName,
        v11,
        &v15 & 0xFFFFFFFFFFFFFFEFLL);
      CDOTALuaModifierEntry::~CDOTALuaModifierEntry(v14);
    }
  }
}


// OnStringTableLuaModifiersChanged  (line 126, @0x00000000025f0a10, libserver.so)
void __fastcall OnStringTableLuaModifiersChanged(
        void *object,
        INetworkStringTable *stringTable,
        int stringNumber,
        const char *newString,
        const void *newData)
{
  ;
}


// CDOTA_Modifier_Lua::CDOTA_Modifier_Lua  (line 131, @0x0000000002621c90, libserver.so)  // inlines: CUtlMemory, CUtlString, CUtlStringMap, CUtlVector, CUtlVectorBase, Purge, RemoveAll, ~CUtlMemory, ~CUtlString, ~CUtlStringMap, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::CDOTA_Buff, CMemAllocSystemInitialize, CUtlSymbolTable::CUtlSymbolTable, CUtlString::Clear, CUtlSymbolTable::~CUtlSymbolTable, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase, CUtlString::FreeMemoryBlock, CDOTA_Buff::~CDOTA_Buff, _Unwind_Resume, CUtlMemory<modifierfunction, int>::Purge
// callers: CModifierFactory<CDOTA_Modifier_Lua>::Create, CModifierFactory<CDOTA_Modifier_Lua_Motion_Both>::Create, CModifierFactory<CDOTA_Modifier_Lua_Vertical_Motion>::Create, CModifierFactory<CDOTA_Modifier_Lua_Horizontal_Motion>::Create
void __fastcall CDOTA_Modifier_Lua::CDOTA_Modifier_Lua(CDOTA_Modifier_Lua *const this)
{
  IScriptVM *v2; // rax

  CDOTA_Buff::CDOTA_Buff(this);
  this->m_szScriptFile.m_pString = 0;
  this->_vptr_CDOTA_Buff = &off_412C0D0;
  this->m_szModifierAura.m_pString = 0;
  this->m_szEffectName.m_pString = 0;
  this->m_szStatusEffectName.m_pString = 0;
  this->m_szHeroEffectName.m_pString = 0;
  this->m_szTextureName.m_pString = 0;
  this->m_mapPropertyFnStrings.m_Vector.m_Size = 0;
  this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_pMemory = 0;
  this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_nAllocationCount = 32;
  this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_nGrowSize = 0;
  CMemAllocSystemInitialize();
  this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_pMemory = (**g_pMemAlloc)(
                                                               g_pMemAlloc,
                                                               8LL
                                                             * this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_nAllocationCount);
  CUtlSymbolTable::CUtlSymbolTable(&this->m_mapPropertyFnStrings.m_SymbolTable, 0, 32, 1);
  this->m_LinkedFunctions.m_Size = 0;
  this->m_LinkedFunctions.m_Memory.m_pMemory = 0;
  this->m_LinkedFunctions.m_Memory.m_nAllocationCount = 0;
  this->m_LinkedFunctions.m_Memory.m_nGrowSize = 0;
  if ( g_pVScriptGameSystem != 0 )
    v2 = (*(g_pVScriptGameSystem->_vptr_IVScriptGameSystem + 4))(g_pVScriptGameSystem);
  else
    v2 = 0;
  this->m_pVM = v2;
  CUtlString::Clear(&this->m_szScriptFile);
}


// CDOTA_Modifier_Lua::DoCreate  (line 139, @0x0000000002623a00, libserver.so)  // inlines: AddToTail, CVariantBase, CopyConstruct<modifierfunction>, Element, GetName, GrowMemory, Int, IsEmpty, RemoveAll, String, ToCStr, ToHScript, _M_data, c_str, operator int, operator=, operator[], ~CVariantBase
// calls: CDOTALuaModifierEntry::CDOTALuaModifierEntry, google::protobuf::MessageLite::ParseFromArray(void const*,int), Warning, CDOTALuaModifierEntry::~CDOTALuaModifierEntry, CUtlString::Set, CUtlString::Get, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CVariantBase<CVariantDefaultAllocator>::Free, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CDOTA_Buff::DoCreate, CUtlMemory<modifierfunction, int>::Grow (13 total)
// strings: "Error parsing lua modifier from string table!\n", "Lua Modifier Registration not found in string table, aborting modifier creation", "Modifier script %s failed to find class named %s.\n", "No filename associated with this modifier!\n", "No data associated with modifier name in table\n", "Lua Modifier String Table not found!\n" (9 total)
// globals: g_pLuaModifierStringTable
void __fastcall CDOTA_Modifier_Lua::DoCreate(CDOTA_Modifier_Lua *const this, KeyValues *pKV)
{
  __int64 (__fastcall *v3)(INetworkStringTable *, const char *); // rax
  unsigned int v4; // eax
  const void *v5; // r13
  char *m_pString; // rax
  __int64 (__fastcall *v7)(IVScriptGameSystem *, const char *); // r15
  const char *v8; // rax
  __int64 v9; // r14
  IScriptVM *m_pVM; // rdi
  bool v11; // zf
  const char *m_pAsString; // rdx
  const char *v13; // r14
  const char *v14; // rax
  __int64 v15; // r13
  int (**vptr_CDOTA_Buff)(...); // rax
  uint64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rsi
  IScriptVM *v20; // rdi
  IScriptVM *v21; // rdi
  int v22; // r15d
  unsigned int i; // eax
  int m_float; // r14d
  __int64 m_Size; // r13
  int v26; // eax
  modifierfunction *v27; // rax
  const char *v28; // r13
  const char *v29; // r8
  HSCRIPT hDeclareFunction; // [rsp+18h] [rbp-C8h]
  int v32; // [rsp+30h] [rbp-B0h]
  unsigned int nIter; // [rsp+34h] [rbp-ACh]
  int dataLength; // [rsp+4Ch] [rbp-94h] BYREF
  ScriptVariant_t hClass; // [rsp+50h] [rbp-90h] BYREF
  ScriptVariant_t result; // [rsp+60h] [rbp-80h] BYREF
  ScriptVariant_t vKey; // [rsp+70h] [rbp-70h] BYREF
  ScriptVariant_t vValue; // [rsp+80h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v39[5]; // [rsp+90h] [rbp-50h] BYREF

  if ( g_pLuaModifierStringTable == 0 )
  {
    Warning("Lua Modifier String Table not found!\n");
    return;
  }
  v3 = *(g_pLuaModifierStringTable->_vptr_INetworkStringTable + 12);
  if ( this->m_name.u.m_Id == 0 )
  {
    v4 = v3(g_pLuaModifierStringTable, "");
    if ( v4 != 0xFFFF )
      goto LABEL_4;
LABEL_9:
    Warning("Lua Modifier Registration not found in string table, aborting modifier creation");
    return;
  }
  v4 = v3(g_pLuaModifierStringTable, this->m_name.u.m_pAsString);
  if ( v4 == 0xFFFF )
    goto LABEL_9;
LABEL_4:
  dataLength = 0;
  v5 = (*(g_pLuaModifierStringTable->_vptr_INetworkStringTable + 11))(g_pLuaModifierStringTable, v4, &dataLength);
  if ( v5 == 0 )
  {
    Warning("No data associated with modifier name in table\n");
    return;
  }
  CDOTALuaModifierEntry::CDOTALuaModifierEntry(&vValue);
  if ( google::protobuf::MessageLite::ParseFromArray(&vValue, v5, dataLength) == 0 )
  {
    Warning("Error parsing lua modifier from string table!\n");
    CDOTALuaModifierEntry::~CDOTALuaModifierEntry(&vValue);
    return;
  }
  CUtlString::Set(&this->m_szScriptFile, **&v39[0].m_type);
  CDOTALuaModifierEntry::~CDOTALuaModifierEntry(&vValue);
  m_pString = this->m_szScriptFile.m_pString;
  if ( m_pString == 0 || *m_pString == 0 )
  {
    Warning("No filename associated with this modifier!\n");
    return;
  }
  this->m_LinkedFunctions.m_Size = 0;
  v7 = *(g_pVScriptGameSystem->_vptr_IVScriptGameSystem + 9);
  v8 = CUtlString::Get(&this->m_szScriptFile);
  v9 = v7(g_pVScriptGameSystem, v8);
  if ( v9 != 0 )
  {
    m_pVM = this->m_pVM;
    hClass.m_type = 0;
    v11 = this->m_name.u.m_Id == 0;
    m_pAsString = "";
    hClass.m_flags = 0;
    hClass.m_uint64 = 0;
    if ( !v11 )
      m_pAsString = this->m_name.u.m_pAsString;
    (*(*m_pVM + 312LL))(m_pVM, v9, m_pAsString);
    if ( hClass.m_type == 0 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
      {
        v13 = "";
        if ( this->m_name.u.m_Id != 0 )
          v13 = this->m_name.u.m_pAsString;
        v14 = CUtlString::Get(&this->m_szScriptFile);
        LoggingSystem_Log(LOG_SERVER, 2, "Modifier script %s failed to find class named %s.\n", v14, v13);
      }
      CVariantBase<CVariantDefaultAllocator>::Free(&hClass);
      return;
    }
    v15 = (*(*this->m_pVM + 144LL))(this->m_pVM, "ExtendInstance", v9, 0);
    if ( v15 != 0 )
    {
      vptr_CDOTA_Buff = this->_vptr_CDOTA_Buff;
      *&v39[0].m_type = 0;
      vValue.m_type = 0;
      vValue.m_flags = 0;
      vValue.m_uint64 = 0;
      v39[0].m_uint64 = 0;
      v17 = (vptr_CDOTA_Buff[87])(this);
      CVariantBase<CVariantDefaultAllocator>::Free(&vValue);
      vValue.m_uint64 = v17;
      vValue.m_type = 31;
      CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&hClass, v39);
      (*(*this->m_pVM + 160LL))(this->m_pVM, v15, &vValue, 2, 0, 0, 1);
      CVariantBase<CVariantDefaultAllocator>::Free(v39);
      CVariantBase<CVariantDefaultAllocator>::Free(&vValue);
    }
    (*(*this->m_pVM + 344LL))(this->m_pVM, &hClass);
    v18 = (*(this->_vptr_CDOTA_Buff + 87))(this);
    v19 = (*(*this->m_pVM + 144LL))(this->m_pVM, "DeclareFunctions", v18, 0);
    hDeclareFunction = v19;
    if ( v19 == 0 )
    {
LABEL_29:
      (*(*this->m_pVM + 152LL))(this->m_pVM, hDeclareFunction);
      CDOTA_Buff::DoCreate(this, pKV);
      CVariantBase<CVariantDefaultAllocator>::Free(&hClass);
      return;
    }
    v20 = this->m_pVM;
    result.m_type = 0;
    result.m_flags = 0;
    result.m_uint64 = 0;
    (*(*v20 + 160LL))(v20, v19, 0, 0, &result, 0, 1);
    if ( result.m_type != 31 )
    {
LABEL_28:
      CVariantBase<CVariantDefaultAllocator>::Free(&result);
      goto LABEL_29;
    }
    vKey.m_uint64 = 0;
    vKey.m_type = 0;
    v21 = this->m_pVM;
    vKey.m_flags = 0;
    vValue.m_type = 0;
    vValue.m_flags = 0;
    vValue.m_uint64 = 0;
    v32 = (*(*v21 + 280LL))(v21, result.m_uint64);
    if ( v32 <= 0 )
    {
LABEL_45:
      CVariantBase<CVariantDefaultAllocator>::Free(&vValue);
      CVariantBase<CVariantDefaultAllocator>::Free(&vKey);
      goto LABEL_28;
    }
    v22 = 0;
    for ( i = (*(*this->m_pVM + 296LL))(this->m_pVM, result.m_uint64, 0, &vKey, &vValue);
          ;
          i = (*(*this->m_pVM + 296LL))(this->m_pVM, result.m_uint64, nIter, &vKey, &vValue) )
    {
      nIter = i;
      if ( vValue.m_type == 1 )
      {
        m_float = vValue.m_float;
        if ( vValue.m_float > 0xAC )
          goto LABEL_38;
      }
      else if ( vValue.m_type == 34 )
      {
        m_float = vValue.m_float64;
        if ( vValue.m_float64 > 0xAC )
          goto LABEL_38;
      }
      else
      {
        m_float = vValue.m_int;
        if ( vValue.m_int > 0xACu )
          goto LABEL_38;
      }
      m_Size = this->m_LinkedFunctions.m_Size;
      v26 = this->m_LinkedFunctions.m_Size;
      if ( m_Size == this->m_LinkedFunctions.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<modifierfunction,int>::Grow(&this->m_LinkedFunctions.m_Memory, 1);
        v26 = this->m_LinkedFunctions.m_Size;
      }
      this->m_LinkedFunctions.m_Size = v26 + 1;
      v27 = &this->m_LinkedFunctions.m_Memory.m_pMemory[m_Size];
      if ( v27 != 0 )
        *v27 = m_float;
LABEL_38:
      (*(*this->m_pVM + 344LL))(this->m_pVM, &vKey);
      (*(*this->m_pVM + 344LL))(this->m_pVM, &vValue);
      if ( ++v22 == v32 )
        goto LABEL_45;
    }
  }
  v28 = CUtlString::Get(&this->m_szScriptFile);
  if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
  {
    v29 = "";
    if ( this->m_name.u.m_Id != 0 )
      v29 = this->m_name.u.m_pAsString;
    LoggingSystem_Log(LOG_SERVER, 2, "Filename %s of modifier %s was not found!\n", v28, v29);
  }
}


// CDOTA_Modifier_Lua::DeclareFunctions  (line 244, @0x00000000025f1100, libserver.so)  // inlines: SetFunction
// calls: CDOTA_Modifier_Lua::GetModifierFunc
void __fastcall CDOTA_Modifier_Lua::DeclareFunctions(CDOTA_Modifier_Lua *const this)
{
  __int64 v1; // r13
  int i; // r12d
  __int64 v4; // r14

  v1 = 0;
  for ( i = 0; this->m_LinkedFunctions.m_Size > i; this->m_Functions[v4] = CDOTA_Modifier_Lua::GetModifierFunc(this, v4) )
  {
    ++i;
    v4 = this->m_LinkedFunctions.m_Memory.m_pMemory[v1++];
  }
}


// CDOTA_Modifier_Lua::OnIntervalThink  (line 252, @0x00000000026027f0, libserver.so)  // inlines: CVariantBase, Free, ToHScript, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CDOTA_Modifier_Lua::OnIntervalThink(CDOTA_Modifier_Lua *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  ScriptVariant_t args; // [rsp+10h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "OnIntervalThink", v1, 0);
  v4 = v3;
  if ( v3 != 0 )
  {
    m_pVM = this->m_pVM;
    args.m_uint64 = v1;
    args.m_type = 31;
    args.m_flags = 0;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, 0, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
}


// CDOTA_Modifier_Lua::OnCreated  (line 267, @0x0000000002607920, libserver.so)  // inlines: CVariantBase, CreateTableFromKeyValues, Free, ToHScript, operator=, ~CVariantBase
// calls: Recursive_ConvertKeyValuesToTable, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CDOTA_Modifier_Lua::OnCreated(CDOTA_Modifier_Lua *const this, KeyValues *pKV)
{
  uint64 v4; // rbx
  __int64 v5; // r13
  IScriptVM *m_pVM; // r15
  CVariantBase<CVariantDefaultAllocator> *v7; // rbx
  int v8; // [rsp+0h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> args[2]; // [rsp+10h] [rbp-50h] BYREF

  v4 = 0;
  if ( this != 0 )
    v4 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v5 = (*(*this->m_pVM + 144LL))(this->m_pVM, "OnCreated", v4, 0);
  if ( v5 != 0 )
  {
    args[0].m_uint64 = v4;
    args[0].m_flags = 0;
    m_pVM = this->m_pVM;
    args[1].m_type = 0;
    args[1].m_flags = 0;
    args[1].m_uint64 = 0;
    args[0].m_type = 31;
    (*(*m_pVM + 264LL))(m_pVM, &args[1]);
    if ( pKV != 0 && args[1].m_uint64 != 0 )
      Recursive_ConvertKeyValuesToTable(pKV, m_pVM, args[1].m_hScript);
    (*(*this->m_pVM + 160LL))(this->m_pVM, v5, args, 2, 0, 0, 1);
    v7 = &args[1];
    do
    {
      if ( (v7->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v7->m_uint64);
        v7->m_flags &= ~1u;
      }
      --v7;
      v7[1].m_uint64 = 0;
      v7[1].m_type = 0;
    }
    while ( v7 != &v8 );
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v5);
}


// CDOTA_Modifier_Lua::Script_OnCreated  (line 284, @0x0000000002605b40, libserver.so)  // inlines: AssignTo, CVariantBase, Float, SetBool, TempString, ToString, operator float, ~CVariantBase
// calls: KeyValues::KeyValues, KeyValues::SetString, KeyValues::SetFloat, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::~KeyValues, V_snprintf, VariantFieldTypeName, Warning, KeyValues::SetInt, _Unwind_Resume, __stack_chk_fail
// strings: "modifier_lua", "%g %g %g %g", "No conversion from %s to string at the moment!\n", "false", "true", "%d %d %d %d"
// globals: jpt_2605D13, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, jpt_2605FC3, jpt_2606093
void __fastcall CDOTA_Modifier_Lua::Script_OnCreated(CDOTA_Modifier_Lua *const this, HSCRIPT table)
{
  IScriptVM *m_pVM; // rdi
  int v5; // ebx
  unsigned int i; // eax
  float v7; // xmm1_4
  unsigned int v8; // r12d
  int16 m_type; // ax
  const char *m_uint64; // r15
  const char *v11; // rsi
  const char *v12; // rsi
  const char *v13; // rax
  double m_float; // xmm0_8
  const char *v15; // rcx
  unsigned __int8 m_char; // r15
  const char *v17; // rsi
  const char *v18; // rax
  const char *v19; // rax
  const char *v20; // rax
  double m_float64; // xmm0_8
  const char *v22; // rcx
  double v23; // xmm0_8
  const char *v24; // rcx
  int v25; // [rsp+14h] [rbp-8Ch]
  ScriptVariant_t vKey; // [rsp+30h] [rbp-70h] BYREF
  ScriptVariant_t vValue; // [rsp+40h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+68h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_lua");
  m_pVM = this->m_pVM;
  vKey.m_type = 0;
  vKey.m_flags = 0;
  vKey.m_uint64 = 0;
  vValue.m_type = 0;
  vValue.m_flags = 0;
  vValue.m_uint64 = 0;
  v25 = (*(*m_pVM + 280LL))(m_pVM, table);
  if ( v25 > 0 )
  {
    v5 = 0;
    for ( i = (*(*this->m_pVM + 296LL))(this->m_pVM, table, 0, &vKey, &vValue);
          ;
          i = (*(*this->m_pVM + 296LL))(this->m_pVM, table, v8, &vKey, &vValue) )
    {
      v8 = i;
      m_type = vValue.m_type;
      switch ( vValue.m_type )
      {
        case 0x1E:
          m_uint64 = vValue.m_uint64;
          break;
        case 2:
          v20 = VariantFieldTypeName(2);
          Warning("No conversion from %s to string at the moment!\n", v20);
          CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
          m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 0x22:
          goto LABEL_13;
        default:
          goto LABEL_5;
      }
      if ( vKey.m_type == 30 )
      {
        v11 = vKey.m_uint64;
      }
      else
      {
        switch ( vKey.m_type )
        {
          case 0:
            goto LABEL_22;
          case 1:
            m_float = vKey.m_float;
            goto LABEL_24;
          case 3:
          case 0x27:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g %g",
              *vKey.m_pszString,
              *(vKey.m_uint64 + 4),
              *(vKey.m_uint64 + 8));
            break;
          case 4:
          case 0x1B:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g %g %g",
              *vKey.m_pszString,
              *(vKey.m_uint64 + 4),
              *(vKey.m_uint64 + 8),
              *(vKey.m_uint64 + 12));
            break;
          case 5:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", vKey.m_int);
            break;
          case 6:
            v15 = "true";
            if ( vKey.m_char == 0 )
              v15 = "false";
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v15);
            break;
          case 8:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", vKey.m_char);
            break;
          case 9:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%d %d %d %d",
              vKey.m_char,
              BYTE1(vKey.m_int),
              BYTE2(vKey.m_uint),
              HIBYTE(vKey.m_float));
            break;
          case 0x19:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g",
              *vKey.m_pszString,
              *(vKey.m_uint64 + 4));
            break;
          case 0x1A:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%lld", vKey.m_uint64);
            break;
          case 0x21:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%llu", vKey.m_uint64);
            break;
          case 0x22:
            m_float = vKey.m_float64;
LABEL_24:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
            break;
          case 0x25:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vKey.m_int);
            break;
          default:
            v13 = VariantFieldTypeName(vKey.m_type);
            Warning("No conversion from %s to string at the moment!\n", v13);
LABEL_22:
            CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
            break;
        }
        v11 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
      }
      KeyValues::SetString(&kv, v11, m_uint64);
      m_type = vValue.m_type;
      if ( vValue.m_type == 34 )
      {
LABEL_13:
        if ( vKey.m_type == 30 )
        {
          v12 = vKey.m_uint64;
        }
        else
        {
          switch ( vKey.m_type )
          {
            case 0:
              goto LABEL_50;
            case 1:
              m_float64 = vKey.m_float;
              goto LABEL_54;
            case 3:
            case 0x27:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g %g",
                *vKey.m_pszString,
                *(vKey.m_uint64 + 4),
                *(vKey.m_uint64 + 8));
              break;
            case 4:
            case 0x1B:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g %g %g",
                *vKey.m_pszString,
                *(vKey.m_uint64 + 4),
                *(vKey.m_uint64 + 8),
                *(vKey.m_uint64 + 12));
              break;
            case 5:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", vKey.m_int);
              break;
            case 6:
              v22 = "true";
              if ( vKey.m_char == 0 )
                v22 = "false";
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v22);
              break;
            case 8:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", vKey.m_char);
              break;
            case 9:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%d %d %d %d",
                vKey.m_char,
                BYTE1(vKey.m_int),
                BYTE2(vKey.m_uint),
                HIBYTE(vKey.m_float));
              break;
            case 0x19:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g",
                *vKey.m_pszString,
                *(vKey.m_uint64 + 4));
              break;
            case 0x1A:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%lld",
                vKey.m_uint64);
              break;
            case 0x21:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%llu",
                vKey.m_uint64);
              break;
            case 0x22:
              m_float64 = vKey.m_float64;
LABEL_54:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float64);
              break;
            case 0x25:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vKey.m_int);
              break;
            default:
              v19 = VariantFieldTypeName(vKey.m_type);
              Warning("No conversion from %s to string at the moment!\n", v19);
LABEL_50:
              CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
              break;
          }
          v12 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        }
        KeyValues::SetFloat(&kv, v12, v7);
        if ( ++v5 == v25 )
          break;
        continue;
      }
LABEL_5:
      if ( m_type == 6 )
      {
        m_char = vValue.m_char;
        if ( vKey.m_type == 30 )
        {
          v17 = vKey.m_uint64;
        }
        else
        {
          switch ( vKey.m_type )
          {
            case 0:
              goto LABEL_44;
            case 1:
              v23 = vKey.m_float;
              goto LABEL_67;
            case 3:
            case 0x27:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g %g",
                *vKey.m_pszString,
                *(vKey.m_uint64 + 4),
                *(vKey.m_uint64 + 8));
              break;
            case 4:
            case 0x1B:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g %g %g",
                *vKey.m_pszString,
                *(vKey.m_uint64 + 4),
                *(vKey.m_uint64 + 8),
                *(vKey.m_uint64 + 12));
              break;
            case 5:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", vKey.m_int);
              break;
            case 6:
              v24 = "true";
              if ( vKey.m_char == 0 )
                v24 = "false";
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v24);
              break;
            case 8:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", vKey.m_char);
              break;
            case 9:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%d %d %d %d",
                vKey.m_char,
                BYTE1(vKey.m_int),
                BYTE2(vKey.m_uint),
                HIBYTE(vKey.m_float));
              break;
            case 0x19:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g",
                *vKey.m_pszString,
                *(vKey.m_uint64 + 4));
              break;
            case 0x1A:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%lld",
                vKey.m_uint64);
              break;
            case 0x21:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%llu",
                vKey.m_uint64);
              break;
            case 0x22:
              v23 = vKey.m_float64;
LABEL_67:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", v23);
              break;
            case 0x25:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vKey.m_int);
              break;
            default:
              v18 = VariantFieldTypeName(vKey.m_type);
              Warning("No conversion from %s to string at the moment!\n", v18);
LABEL_44:
              CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
              break;
          }
          v17 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        }
        KeyValues::SetInt(&kv, v17, m_char);
      }
      if ( ++v5 == v25 )
        break;
    }
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&vValue);
  CVariantBase<CVariantDefaultAllocator>::Free(&vKey);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Lua::OnRefresh  (line 312, @0x0000000002607a90, libserver.so)  // inlines: CVariantBase, CreateTableFromKeyValues, Free, ToHScript, operator=, ~CVariantBase
// calls: Recursive_ConvertKeyValuesToTable, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CDOTA_Modifier_Lua::OnRefresh(CDOTA_Modifier_Lua *const this, KeyValues *pKV)
{
  uint64 v4; // rbx
  __int64 v5; // r13
  IScriptVM *m_pVM; // r15
  CVariantBase<CVariantDefaultAllocator> *v7; // rbx
  int v8; // [rsp+0h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> args[2]; // [rsp+10h] [rbp-50h] BYREF

  v4 = 0;
  if ( this != 0 )
    v4 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v5 = (*(*this->m_pVM + 144LL))(this->m_pVM, "OnRefresh", v4, 0);
  if ( v5 != 0 )
  {
    m_pVM = this->m_pVM;
    args[0].m_flags = 0;
    args[0].m_uint64 = v4;
    args[1].m_type = 0;
    args[1].m_flags = 0;
    args[1].m_uint64 = 0;
    args[0].m_type = 31;
    (*(*m_pVM + 264LL))(m_pVM, &args[1]);
    if ( pKV != 0 && args[1].m_uint64 != 0 )
      Recursive_ConvertKeyValuesToTable(pKV, m_pVM, args[1].m_hScript);
    (*(*this->m_pVM + 160LL))(this->m_pVM, v5, args, 2, 0, 0, 1);
    v7 = &args[1];
    do
    {
      if ( (v7->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v7->m_uint64);
        v7->m_flags &= ~1u;
      }
      --v7;
      v7[1].m_uint64 = 0;
      v7[1].m_type = 0;
    }
    while ( v7 != &v8 );
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v5);
}


// CDOTA_Modifier_Lua::Script_OnRefresh  (line 329, @0x00000000026064c0, libserver.so)  // inlines: AssignTo, CVariantBase, Float, SetBool, TempString, ToString, operator float, ~CVariantBase
// calls: KeyValues::KeyValues, KeyValues::SetString, KeyValues::SetFloat, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::~KeyValues, V_snprintf, VariantFieldTypeName, Warning, KeyValues::SetInt, _Unwind_Resume, __stack_chk_fail
// strings: "modifier_lua", "%g %g %g %g", "No conversion from %s to string at the moment!\n", "false", "true", "%d %d %d %d"
// globals: jpt_260668B, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, jpt_2606943, jpt_2606A13
void __fastcall CDOTA_Modifier_Lua::Script_OnRefresh(CDOTA_Modifier_Lua *const this, HSCRIPT table)
{
  IScriptVM *m_pVM; // rdi
  int v5; // ebx
  unsigned int i; // eax
  float v7; // xmm1_4
  unsigned int v8; // r12d
  int16 m_type; // ax
  const char *m_uint64; // r15
  const char *v11; // rsi
  const char *v12; // rsi
  const char *v13; // rax
  double m_float; // xmm0_8
  const char *v15; // rcx
  unsigned __int8 m_char; // r15
  const char *v17; // rsi
  const char *v18; // rax
  const char *v19; // rax
  const char *v20; // rax
  double m_float64; // xmm0_8
  const char *v22; // rcx
  double v23; // xmm0_8
  const char *v24; // rcx
  int v25; // [rsp+14h] [rbp-8Ch]
  ScriptVariant_t vKey; // [rsp+30h] [rbp-70h] BYREF
  ScriptVariant_t vValue; // [rsp+40h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+68h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_lua");
  m_pVM = this->m_pVM;
  vValue.m_type = 0;
  vKey.m_type = 0;
  vKey.m_flags = 0;
  vKey.m_uint64 = 0;
  vValue.m_flags = 0;
  vValue.m_uint64 = 0;
  v25 = (*(*m_pVM + 280LL))(m_pVM, table);
  if ( v25 > 0 )
  {
    v5 = 0;
    for ( i = (*(*this->m_pVM + 296LL))(this->m_pVM, table, 0, &vKey, &vValue);
          ;
          i = (*(*this->m_pVM + 296LL))(this->m_pVM, table, v8, &vKey, &vValue) )
    {
      v8 = i;
      m_type = vValue.m_type;
      switch ( vValue.m_type )
      {
        case 0x1E:
          m_uint64 = vValue.m_uint64;
          break;
        case 2:
          v20 = VariantFieldTypeName(2);
          Warning("No conversion from %s to string at the moment!\n", v20);
          CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
          m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 0x22:
          goto LABEL_13;
        default:
          goto LABEL_5;
      }
      if ( vKey.m_type == 30 )
      {
        v11 = vKey.m_uint64;
      }
      else
      {
        switch ( vKey.m_type )
        {
          case 0:
            goto LABEL_22;
          case 1:
            m_float = vKey.m_float;
            goto LABEL_24;
          case 3:
          case 0x27:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g %g",
              *vKey.m_pszString,
              *(vKey.m_uint64 + 4),
              *(vKey.m_uint64 + 8));
            break;
          case 4:
          case 0x1B:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g %g %g",
              *vKey.m_pszString,
              *(vKey.m_uint64 + 4),
              *(vKey.m_uint64 + 8),
              *(vKey.m_uint64 + 12));
            break;
          case 5:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", vKey.m_int);
            break;
          case 6:
            v15 = "true";
            if ( vKey.m_char == 0 )
              v15 = "false";
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v15);
            break;
          case 8:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", vKey.m_char);
            break;
          case 9:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%d %d %d %d",
              vKey.m_char,
              BYTE1(vKey.m_int),
              BYTE2(vKey.m_uint),
              HIBYTE(vKey.m_float));
            break;
          case 0x19:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g",
              *vKey.m_pszString,
              *(vKey.m_uint64 + 4));
            break;
          case 0x1A:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%lld", vKey.m_uint64);
            break;
          case 0x21:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%llu", vKey.m_uint64);
            break;
          case 0x22:
            m_float = vKey.m_float64;
LABEL_24:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
            break;
          case 0x25:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vKey.m_int);
            break;
          default:
            v13 = VariantFieldTypeName(vKey.m_type);
            Warning("No conversion from %s to string at the moment!\n", v13);
LABEL_22:
            CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
            break;
        }
        v11 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
      }
      KeyValues::SetString(&kv, v11, m_uint64);
      m_type = vValue.m_type;
      if ( vValue.m_type == 34 )
      {
LABEL_13:
        if ( vKey.m_type == 30 )
        {
          v12 = vKey.m_uint64;
        }
        else
        {
          switch ( vKey.m_type )
          {
            case 0:
              goto LABEL_50;
            case 1:
              m_float64 = vKey.m_float;
              goto LABEL_54;
            case 3:
            case 0x27:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g %g",
                *vKey.m_pszString,
                *(vKey.m_uint64 + 4),
                *(vKey.m_uint64 + 8));
              break;
            case 4:
            case 0x1B:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g %g %g",
                *vKey.m_pszString,
                *(vKey.m_uint64 + 4),
                *(vKey.m_uint64 + 8),
                *(vKey.m_uint64 + 12));
              break;
            case 5:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", vKey.m_int);
              break;
            case 6:
              v22 = "true";
              if ( vKey.m_char == 0 )
                v22 = "false";
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v22);
              break;
            case 8:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", vKey.m_char);
              break;
            case 9:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%d %d %d %d",
                vKey.m_char,
                BYTE1(vKey.m_int),
                BYTE2(vKey.m_uint),
                HIBYTE(vKey.m_float));
              break;
            case 0x19:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g",
                *vKey.m_pszString,
                *(vKey.m_uint64 + 4));
              break;
            case 0x1A:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%lld",
                vKey.m_uint64);
              break;
            case 0x21:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%llu",
                vKey.m_uint64);
              break;
            case 0x22:
              m_float64 = vKey.m_float64;
LABEL_54:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float64);
              break;
            case 0x25:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vKey.m_int);
              break;
            default:
              v19 = VariantFieldTypeName(vKey.m_type);
              Warning("No conversion from %s to string at the moment!\n", v19);
LABEL_50:
              CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
              break;
          }
          v12 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        }
        KeyValues::SetFloat(&kv, v12, v7);
        if ( ++v5 == v25 )
          break;
        continue;
      }
LABEL_5:
      if ( m_type == 6 )
      {
        m_char = vValue.m_char;
        if ( vKey.m_type == 30 )
        {
          v17 = vKey.m_uint64;
        }
        else
        {
          switch ( vKey.m_type )
          {
            case 0:
              goto LABEL_44;
            case 1:
              v23 = vKey.m_float;
              goto LABEL_67;
            case 3:
            case 0x27:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g %g",
                *vKey.m_pszString,
                *(vKey.m_uint64 + 4),
                *(vKey.m_uint64 + 8));
              break;
            case 4:
            case 0x1B:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g %g %g",
                *vKey.m_pszString,
                *(vKey.m_uint64 + 4),
                *(vKey.m_uint64 + 8),
                *(vKey.m_uint64 + 12));
              break;
            case 5:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", vKey.m_int);
              break;
            case 6:
              v24 = "true";
              if ( vKey.m_char == 0 )
                v24 = "false";
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v24);
              break;
            case 8:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", vKey.m_char);
              break;
            case 9:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%d %d %d %d",
                vKey.m_char,
                BYTE1(vKey.m_int),
                BYTE2(vKey.m_uint),
                HIBYTE(vKey.m_float));
              break;
            case 0x19:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g",
                *vKey.m_pszString,
                *(vKey.m_uint64 + 4));
              break;
            case 0x1A:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%lld",
                vKey.m_uint64);
              break;
            case 0x21:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%llu",
                vKey.m_uint64);
              break;
            case 0x22:
              v23 = vKey.m_float64;
LABEL_67:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", v23);
              break;
            case 0x25:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vKey.m_int);
              break;
            default:
              v18 = VariantFieldTypeName(vKey.m_type);
              Warning("No conversion from %s to string at the moment!\n", v18);
LABEL_44:
              CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
              break;
          }
          v17 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        }
        KeyValues::SetInt(&kv, v17, m_char);
      }
      if ( ++v5 == v25 )
        break;
    }
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&vValue);
  CVariantBase<CVariantDefaultAllocator>::Free(&vKey);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Lua::OnDestroy  (line 358, @0x00000000026028d0, libserver.so)  // inlines: CVariantBase, Free, ToHScript, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CDOTA_Modifier_Lua::OnDestroy(CDOTA_Modifier_Lua *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  ScriptVariant_t args; // [rsp+10h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "OnDestroy", v1, 0);
  v4 = v3;
  if ( v3 != 0 )
  {
    m_pVM = this->m_pVM;
    args.m_uint64 = v1;
    args.m_type = 31;
    args.m_flags = 0;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, 0, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
}


// CDOTA_Modifier_Lua::OnRemoved  (line 373, @0x00000000026029b0, libserver.so)  // inlines: CVariantBase, Free, ToHScript, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CDOTA_Modifier_Lua::OnRemoved(CDOTA_Modifier_Lua *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  ScriptVariant_t args; // [rsp+10h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "OnRemoved", v1, 0);
  v4 = v3;
  if ( v3 != 0 )
  {
    m_pVM = this->m_pVM;
    args.m_uint64 = v1;
    args.m_type = 31;
    args.m_flags = 0;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, 0, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
}


// CDOTA_Modifier_Lua::CheckState  (line 388, @0x0000000002602a90, libserver.so)  // inlines: CVariantBase, Disable, Enable, Int, ToHScript, operator int, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "CheckState"
void __fastcall CDOTA_Modifier_Lua::CheckState(CDOTA_Modifier_Lua *const this, CDOTABuffState *const buffState)
{
  uint64 v3; // r12
  __int64 v5; // rax
  IScriptVM *m_pVM; // rdi
  IScriptVM *v7; // rdi
  int v8; // r12d
  unsigned int i; // eax
  int m_float; // edx
  int v11; // ecx
  unsigned int v12; // r15d
  int m_float64; // ecx
  HSCRIPT hFunction; // [rsp+18h] [rbp-88h]
  int v15; // [rsp+24h] [rbp-7Ch]
  ScriptVariant_t result; // [rsp+30h] [rbp-70h] BYREF
  ScriptVariant_t args; // [rsp+40h] [rbp-60h] BYREF
  ScriptVariant_t vKey; // [rsp+50h] [rbp-50h] BYREF
  ScriptVariant_t vValue; // [rsp+60h] [rbp-40h] BYREF

  v3 = 0;
  if ( this != 0 )
    v3 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v5 = (*(*this->m_pVM + 144LL))(this->m_pVM, "CheckState", v3, 0);
  hFunction = v5;
  result.m_type = 0;
  result.m_flags = 0;
  result.m_uint64 = 0;
  if ( v5 != 0 )
  {
    m_pVM = this->m_pVM;
    args.m_uint64 = v3;
    args.m_type = 31;
    args.m_flags = 0;
    (*(*m_pVM + 160LL))(m_pVM, v5, &args, 1, &result, 0, 1);
    if ( result.m_type != 31 )
    {
LABEL_5:
      CVariantBase<CVariantDefaultAllocator>::Free(&args);
      goto LABEL_6;
    }
    v7 = this->m_pVM;
    vKey.m_type = 0;
    vKey.m_flags = 0;
    vValue.m_type = 0;
    vKey.m_uint64 = 0;
    vValue.m_flags = 0;
    vValue.m_uint64 = 0;
    v15 = (*(*v7 + 280LL))(v7, result.m_uint64);
    if ( v15 <= 0 )
    {
LABEL_30:
      (*(*this->m_pVM + 344LL))(this->m_pVM, &result);
      CVariantBase<CVariantDefaultAllocator>::Free(&vValue);
      CVariantBase<CVariantDefaultAllocator>::Free(&vKey);
      goto LABEL_5;
    }
    v8 = 0;
    for ( i = (*(*this->m_pVM + 296LL))(this->m_pVM, result.m_uint64, 0, &vKey, &vValue);
          ;
          i = (*(*this->m_pVM + 296LL))(this->m_pVM, result.m_uint64, v12, &vKey, &vValue) )
    {
      v12 = i;
      if ( vKey.m_type == 1 )
      {
        m_float = vKey.m_float;
        if ( vKey.m_float > 34 )
          goto LABEL_17;
      }
      else if ( vKey.m_type == 34 )
      {
        m_float = vKey.m_float64;
        if ( vKey.m_float64 > 34 )
          goto LABEL_17;
      }
      else
      {
        m_float = vKey.m_int;
        if ( vKey.m_int > 34 )
          goto LABEL_17;
      }
      if ( m_float >= 0 )
      {
        if ( vValue.m_char != 0 )
        {
          if ( vKey.m_type == 1 )
          {
            m_float64 = vKey.m_float;
          }
          else
          {
            LOBYTE(m_float64) = vKey.m_char;
            if ( vKey.m_type == 34 )
              m_float64 = vKey.m_float64;
          }
          buffState->m_nEnabledStateMask |= 1LL << m_float64;
          buffState->m_nDisabledStateMask &= ~(1LL << m_float64);
        }
        else
        {
          if ( vKey.m_type == 1 )
          {
            v11 = vKey.m_float;
          }
          else
          {
            LOBYTE(v11) = vKey.m_char;
            if ( vKey.m_type == 34 )
              v11 = vKey.m_float64;
          }
          buffState->m_nDisabledStateMask |= 1LL << v11;
          buffState->m_nEnabledStateMask &= ~(1LL << v11);
        }
      }
LABEL_17:
      (*(*this->m_pVM + 344LL))(this->m_pVM, &vKey);
      (*(*this->m_pVM + 344LL))(this->m_pVM, &vValue);
      if ( ++v8 == v15 )
        goto LABEL_30;
    }
  }
LABEL_6:
  (*(*this->m_pVM + 152LL))(this->m_pVM, hFunction);
  CVariantBase<CVariantDefaultAllocator>::Free(&result);
}


// CDOTA_Modifier_Lua::OnStackCountChanged  (line 432, @0x0000000002604ed0, libserver.so)  // inlines: CVariantBase, Free, ToHScript, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CDOTA_Modifier_Lua::OnStackCountChanged(CDOTA_Modifier_Lua *const this, int iOldCount)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r13
  IScriptVM *m_pVM; // rdi
  ScriptVariant_t *p_iOldCounta; // rbx
  ScriptVariant_t result; // [rsp+10h] [rbp-50h] BYREF
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  __int16 v11; // [rsp+28h] [rbp-38h]
  __int16 v12; // [rsp+2Ah] [rbp-36h]
  __int64 iOldCounta; // [rsp+30h] [rbp-30h] BYREF
  __int16 v14; // [rsp+38h] [rbp-28h]
  __int16 v15; // [rsp+3Ah] [rbp-26h]

  v4 = 0;
  if ( this != 0 )
    v4 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v5 = (*(*this->m_pVM + 144LL))(this->m_pVM, "OnStackCountChanged", v4, 0);
  result.m_uint64 = 0;
  v6 = v5;
  result.m_type = 0;
  result.m_flags = 0;
  if ( v5 != 0 )
  {
    m_pVM = this->m_pVM;
    v10 = v4;
    v12 = 0;
    v15 = 0;
    v11 = 31;
    iOldCounta = iOldCount;
    v14 = 5;
    (*(*m_pVM + 160LL))(m_pVM, v5, &v10, 2, &result, 0, 1);
    p_iOldCounta = &iOldCounta;
    do
    {
      if ( (p_iOldCounta->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p_iOldCounta->m_uint64);
        p_iOldCounta->m_flags &= ~1u;
      }
      --p_iOldCounta;
      p_iOldCounta[1].m_uint64 = 0;
      p_iOldCounta[1].m_type = 0;
    }
    while ( p_iOldCounta != &result );
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v6);
  if ( (result.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, result.m_uint64);
}


// CDOTA_Modifier_Lua::IsDebuff  (line 452, @0x0000000002602df0, libserver.so)  // inlines: CVariantBase, Free, ToHScript, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
bool __fastcall CDOTA_Modifier_Lua::IsDebuff(CDOTA_Modifier_Lua *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  bool result; // al
  char m_char; // [rsp+Ch] [rbp-44h]
  ScriptVariant_t v8; // [rsp+10h] [rbp-40h] BYREF
  ScriptVariant_t args; // [rsp+20h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "IsDebuff", v1, 0);
  v4 = v3;
  v8.m_type = 0;
  v8.m_flags = 0;
  v8.m_uint64 = 0;
  if ( v3 != 0 )
  {
    args.m_uint64 = v1;
    args.m_flags = 0;
    m_pVM = this->m_pVM;
    args.m_type = 31;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, &v8, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
  result = v8.m_char;
  if ( (v8.m_flags & 1) != 0 )
  {
    m_char = v8.m_char;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8.m_uint64);
    return m_char;
  }
  return result;
}


// CDOTA_Modifier_Lua::IsHidden  (line 470, @0x0000000002602f20, libserver.so)  // inlines: CVariantBase, Free, ToHScript, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
bool __fastcall CDOTA_Modifier_Lua::IsHidden(CDOTA_Modifier_Lua *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  bool result; // al
  char m_char; // [rsp+Ch] [rbp-44h]
  ScriptVariant_t v8; // [rsp+10h] [rbp-40h] BYREF
  ScriptVariant_t args; // [rsp+20h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "IsHidden", v1, 0);
  v8.m_type = 0;
  v4 = v3;
  v8.m_uint64 = 0;
  v8.m_flags = 0;
  if ( v3 != 0 )
  {
    m_pVM = this->m_pVM;
    args.m_uint64 = v1;
    args.m_type = 31;
    args.m_flags = 0;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, &v8, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
  result = v8.m_char;
  if ( (v8.m_flags & 1) != 0 )
  {
    m_char = v8.m_char;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8.m_uint64);
    return m_char;
  }
  return result;
}


// CDOTA_Modifier_Lua::IsPurgable  (line 488, @0x0000000002603050, libserver.so)  // inlines: CVariantBase, Free, ToHScript, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
bool __fastcall CDOTA_Modifier_Lua::IsPurgable(CDOTA_Modifier_Lua *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  bool result; // al
  char m_char; // [rsp+Ch] [rbp-44h]
  ScriptVariant_t v8; // [rsp+10h] [rbp-40h] BYREF
  ScriptVariant_t args; // [rsp+20h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "IsPurgable", v1, 0);
  v8.m_uint64 = 0;
  v4 = v3;
  v8.m_type = 0;
  v8.m_flags = 0;
  if ( v3 != 0 )
  {
    m_pVM = this->m_pVM;
    args.m_uint64 = v1;
    args.m_type = 31;
    args.m_flags = 0;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, &v8, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
  result = v8.m_char;
  if ( (v8.m_flags & 1) != 0 )
  {
    m_char = v8.m_char;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8.m_uint64);
    return m_char;
  }
  return result;
}


// CDOTA_Modifier_Lua::IsPurgeException  (line 506, @0x0000000002603180, libserver.so)  // inlines: CVariantBase, Free, ToHScript, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
bool __fastcall CDOTA_Modifier_Lua::IsPurgeException(CDOTA_Modifier_Lua *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  bool result; // al
  char m_char; // [rsp+Ch] [rbp-44h]
  ScriptVariant_t v8; // [rsp+10h] [rbp-40h] BYREF
  ScriptVariant_t args; // [rsp+20h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "IsPurgeException", v1, 0);
  v4 = v3;
  v8.m_type = 0;
  v8.m_flags = 0;
  v8.m_uint64 = 0;
  if ( v3 != 0 )
  {
    m_pVM = this->m_pVM;
    args.m_flags = 0;
    args.m_uint64 = v1;
    args.m_type = 31;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, &v8, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
  result = v8.m_char;
  if ( (v8.m_flags & 1) != 0 )
  {
    m_char = v8.m_char;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8.m_uint64);
    return m_char;
  }
  return result;
}


// CDOTA_Modifier_Lua::IsStunDebuff  (line 525, @0x00000000026032b0, libserver.so)  // inlines: CVariantBase, Free, ToHScript, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
bool __fastcall CDOTA_Modifier_Lua::IsStunDebuff(CDOTA_Modifier_Lua *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  bool result; // al
  char m_char; // [rsp+Ch] [rbp-44h]
  ScriptVariant_t v8; // [rsp+10h] [rbp-40h] BYREF
  ScriptVariant_t args; // [rsp+20h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "IsStunDebuff", v1, 0);
  v4 = v3;
  v8.m_type = 0;
  v8.m_flags = 0;
  v8.m_uint64 = 0;
  if ( v3 != 0 )
  {
    args.m_uint64 = v1;
    args.m_type = 31;
    m_pVM = this->m_pVM;
    args.m_flags = 0;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, &v8, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
  result = v8.m_char;
  if ( (v8.m_flags & 1) != 0 )
  {
    m_char = v8.m_char;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8.m_uint64);
    return m_char;
  }
  return result;
}


// CDOTA_Modifier_Lua::IsAura  (line 543, @0x00000000026033e0, libserver.so)  // inlines: CVariantBase, Free, ToHScript, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
bool __fastcall CDOTA_Modifier_Lua::IsAura(CDOTA_Modifier_Lua *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  bool result; // al
  char m_char; // [rsp+Ch] [rbp-44h]
  ScriptVariant_t v8; // [rsp+10h] [rbp-40h] BYREF
  ScriptVariant_t args; // [rsp+20h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "IsAura", v1, 0);
  v8.m_uint64 = 0;
  v4 = v3;
  v8.m_type = 0;
  v8.m_flags = 0;
  if ( v3 != 0 )
  {
    m_pVM = this->m_pVM;
    args.m_flags = 0;
    args.m_uint64 = v1;
    args.m_type = 31;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, &v8, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
  result = v8.m_char;
  if ( (v8.m_flags & 1) != 0 )
  {
    m_char = v8.m_char;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8.m_uint64);
    return m_char;
  }
  return result;
}


// CDOTA_Modifier_Lua::IsPermanent  (line 561, @0x0000000002603510, libserver.so)  // inlines: CVariantBase, Free, ToHScript, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
bool __fastcall CDOTA_Modifier_Lua::IsPermanent(CDOTA_Modifier_Lua *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  bool result; // al
  char m_char; // [rsp+Ch] [rbp-44h]
  ScriptVariant_t v8; // [rsp+10h] [rbp-40h] BYREF
  ScriptVariant_t args; // [rsp+20h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "IsPermanent", v1, 0);
  v8.m_uint64 = 0;
  v4 = v3;
  v8.m_type = 0;
  v8.m_flags = 0;
  if ( v3 != 0 )
  {
    m_pVM = this->m_pVM;
    args.m_uint64 = v1;
    args.m_type = 31;
    args.m_flags = 0;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, &v8, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
  result = v8.m_char;
  if ( (v8.m_flags & 1) != 0 )
  {
    m_char = v8.m_char;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8.m_uint64);
    return m_char;
  }
  return result;
}


// CDOTA_Modifier_Lua::AllowIllusionDuplicate  (line 579, @0x0000000002603640, libserver.so)  // inlines: CVariantBase, Free, ToHScript, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
bool __fastcall CDOTA_Modifier_Lua::AllowIllusionDuplicate(CDOTA_Modifier_Lua *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  bool result; // al
  char m_char; // [rsp+Ch] [rbp-44h]
  ScriptVariant_t v8; // [rsp+10h] [rbp-40h] BYREF
  ScriptVariant_t args; // [rsp+20h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "AllowIllusionDuplicate", v1, 0);
  v4 = v3;
  v8.m_type = 0;
  v8.m_flags = 0;
  v8.m_uint64 = 0;
  if ( v3 != 0 )
  {
    m_pVM = this->m_pVM;
    args.m_type = 31;
    args.m_flags = 0;
    args.m_uint64 = v1;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, &v8, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
  result = v8.m_char;
  if ( (v8.m_flags & 1) != 0 )
  {
    m_char = v8.m_char;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8.m_uint64);
    return m_char;
  }
  return result;
}


// CDOTA_Modifier_Lua::RemoveOnDeath  (line 597, @0x0000000002603770, libserver.so)  // inlines: CVariantBase, Free, ToHScript, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
bool __fastcall CDOTA_Modifier_Lua::RemoveOnDeath(CDOTA_Modifier_Lua *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  bool result; // al
  char m_char; // [rsp+Ch] [rbp-44h]
  ScriptVariant_t v8; // [rsp+10h] [rbp-40h] BYREF
  ScriptVariant_t args; // [rsp+20h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "RemoveOnDeath", v1, 0);
  v4 = v3;
  v8.m_type = 0;
  v8.m_flags = 0;
  v8.m_uint64 = 0;
  if ( v3 != 0 )
  {
    m_pVM = this->m_pVM;
    args.m_type = 31;
    args.m_flags = 0;
    args.m_uint64 = v1;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, &v8, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
  result = v8.m_char;
  if ( (v8.m_flags & 1) != 0 )
  {
    m_char = v8.m_char;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8.m_uint64);
    return m_char;
  }
  return result;
}


// CDOTA_Modifier_Lua::IsAuraActiveOnDeath  (line 615, @0x00000000026038a0, libserver.so)  // inlines: CVariantBase, Free, ToHScript, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
bool __fastcall CDOTA_Modifier_Lua::IsAuraActiveOnDeath(CDOTA_Modifier_Lua *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  bool result; // al
  char m_char; // [rsp+Ch] [rbp-44h]
  ScriptVariant_t v8; // [rsp+10h] [rbp-40h] BYREF
  ScriptVariant_t args; // [rsp+20h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "IsAuraActiveOnDeath", v1, 0);
  v8.m_uint64 = 0;
  v4 = v3;
  v8.m_type = 0;
  v8.m_flags = 0;
  if ( v3 != 0 )
  {
    m_pVM = this->m_pVM;
    args.m_type = 31;
    args.m_uint64 = v1;
    args.m_flags = 0;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, &v8, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
  result = v8.m_char;
  if ( (v8.m_flags & 1) != 0 )
  {
    m_char = v8.m_char;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8.m_uint64);
    return m_char;
  }
  return result;
}


// CDOTA_Modifier_Lua::DestroyOnExpire  (line 634, @0x00000000026039d0, libserver.so)  // inlines: CVariantBase, Free, ToHScript, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
bool __fastcall CDOTA_Modifier_Lua::DestroyOnExpire(CDOTA_Modifier_Lua *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  bool result; // al
  char m_char; // [rsp+Ch] [rbp-44h]
  ScriptVariant_t v8; // [rsp+10h] [rbp-40h] BYREF
  ScriptVariant_t args; // [rsp+20h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "DestroyOnExpire", v1, 0);
  v8.m_uint64 = 0;
  v4 = v3;
  v8.m_flags = 0;
  v8.m_type = 0;
  if ( v3 != 0 )
  {
    m_pVM = this->m_pVM;
    args.m_uint64 = v1;
    args.m_type = 31;
    args.m_flags = 0;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, &v8, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
  result = v8.m_char;
  if ( (v8.m_flags & 1) != 0 )
  {
    m_char = v8.m_char;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8.m_uint64);
    return m_char;
  }
  return result;
}


// CDOTA_Modifier_Lua::GetModifierAura  (line 652, @0x0000000002606e40, libserver.so)  // inlines: CVariantBase, Free, ToHScript, ~CVariantBase
// calls: CUtlString::Set, CUtlString::Get, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
const char *__fastcall CDOTA_Modifier_Lua::GetModifierAura(CDOTA_Modifier_Lua *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  CUtlString *p_m_szModifierAura; // rbx
  const char *result; // rax
  const char *v8; // [rsp+8h] [rbp-48h]
  ScriptVariant_t v9; // [rsp+10h] [rbp-40h] BYREF
  ScriptVariant_t args; // [rsp+20h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "GetModifierAura", v1, 0);
  v9.m_uint64 = 0;
  v4 = v3;
  v9.m_type = 0;
  v9.m_flags = 0;
  if ( v3 != 0 )
  {
    m_pVM = this->m_pVM;
    args.m_uint64 = v1;
    args.m_type = 31;
    args.m_flags = 0;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, &v9, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
  if ( v9.m_type == 30 )
  {
    p_m_szModifierAura = &this->m_szModifierAura;
    CUtlString::Set(p_m_szModifierAura, v9.m_pszString);
    result = CUtlString::Get(p_m_szModifierAura);
  }
  else
  {
    result = 0;
  }
  if ( (v9.m_flags & 1) != 0 )
  {
    v8 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v9.m_uint64);
    return v8;
  }
  return result;
}


// CDOTA_Modifier_Lua::GetEffectName  (line 682, @0x0000000002606f90, libserver.so)  // inlines: CVariantBase, Free, ToHScript, ~CVariantBase
// calls: CUtlString::Set, CUtlString::Get, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
const char *__fastcall CDOTA_Modifier_Lua::GetEffectName(CDOTA_Modifier_Lua *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  CUtlString *p_m_szEffectName; // rbx
  const char *result; // rax
  const char *v8; // [rsp+8h] [rbp-48h]
  ScriptVariant_t v9; // [rsp+10h] [rbp-40h] BYREF
  ScriptVariant_t args; // [rsp+20h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "GetEffectName", v1, 0);
  v4 = v3;
  v9.m_type = 0;
  v9.m_flags = 0;
  v9.m_uint64 = 0;
  if ( v3 != 0 )
  {
    m_pVM = this->m_pVM;
    args.m_type = 31;
    args.m_flags = 0;
    args.m_uint64 = v1;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, &v9, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
  if ( v9.m_type == 30 )
  {
    p_m_szEffectName = &this->m_szEffectName;
    CUtlString::Set(p_m_szEffectName, v9.m_pszString);
    result = CUtlString::Get(p_m_szEffectName);
  }
  else
  {
    result = 0;
  }
  if ( (v9.m_flags & 1) != 0 )
  {
    v8 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v9.m_uint64);
    return v8;
  }
  return result;
}


// CDOTA_Modifier_Lua::GetEffectAttachType  (line 712, @0x0000000002603b00, libserver.so)  // inlines: CVariantBase, Free, Int, ToHScript, operator int, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
int __fastcall CDOTA_Modifier_Lua::GetEffectAttachType(CDOTA_Modifier_Lua *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  int result; // eax
  int v7; // [rsp+Ch] [rbp-44h]
  ScriptVariant_t v8; // [rsp+10h] [rbp-40h] BYREF
  ScriptVariant_t args; // [rsp+20h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "GetEffectAttachType", v1, 0);
  v8.m_uint64 = 0;
  v4 = v3;
  v8.m_type = 0;
  v8.m_flags = 0;
  if ( v3 != 0 )
  {
    m_pVM = this->m_pVM;
    args.m_uint64 = v1;
    args.m_type = 31;
    args.m_flags = 0;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, &v8, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
  if ( v8.m_type == 1 )
  {
    result = v8.m_float;
  }
  else
  {
    result = v8.m_int;
    if ( v8.m_type == 34 )
      result = v8.m_float64;
  }
  if ( (v8.m_flags & 1) != 0 )
  {
    v7 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8.m_uint64);
    return v7;
  }
  return result;
}


// CDOTA_Modifier_Lua::GetAttributes  (line 730, @0x0000000002603c50, libserver.so)  // inlines: CVariantBase, Free, Int, ToHScript, operator int, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
int __fastcall CDOTA_Modifier_Lua::GetAttributes(CDOTA_Modifier_Lua *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  int result; // eax
  int v7; // [rsp+Ch] [rbp-44h]
  ScriptVariant_t v8; // [rsp+10h] [rbp-40h] BYREF
  ScriptVariant_t args; // [rsp+20h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "GetAttributes", v1, 0);
  v8.m_uint64 = 0;
  v4 = v3;
  v8.m_type = 0;
  v8.m_flags = 0;
  if ( v3 != 0 )
  {
    m_pVM = this->m_pVM;
    args.m_uint64 = v1;
    args.m_type = 31;
    args.m_flags = 0;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, &v8, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
  if ( v8.m_type == 1 )
  {
    result = v8.m_float;
  }
  else
  {
    result = v8.m_int;
    if ( v8.m_type == 34 )
      result = v8.m_float64;
  }
  if ( (v8.m_flags & 1) != 0 )
  {
    v7 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8.m_uint64);
    return v7;
  }
  return result;
}


// CDOTA_Modifier_Lua::GetPriority  (line 748, @0x0000000002603da0, libserver.so)  // inlines: CVariantBase, Free, Int, ToHScript, operator int, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
int __fastcall CDOTA_Modifier_Lua::GetPriority(CDOTA_Modifier_Lua *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  int result; // eax
  int v7; // [rsp+Ch] [rbp-44h]
  ScriptVariant_t v8; // [rsp+10h] [rbp-40h] BYREF
  ScriptVariant_t args; // [rsp+20h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "GetPriority", v1, 0);
  v8.m_uint64 = 0;
  v4 = v3;
  v8.m_type = 0;
  v8.m_flags = 0;
  if ( v3 != 0 )
  {
    m_pVM = this->m_pVM;
    args.m_uint64 = v1;
    args.m_type = 31;
    args.m_flags = 0;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, &v8, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
  if ( v8.m_type == 1 )
  {
    result = v8.m_float;
  }
  else
  {
    result = v8.m_int;
    if ( v8.m_type == 34 )
      result = v8.m_float64;
  }
  if ( (v8.m_flags & 1) != 0 )
  {
    v7 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8.m_uint64);
    return v7;
  }
  return result;
}


// CDOTA_Modifier_Lua::GetStatusEffectName  (line 766, @0x00000000026070e0, libserver.so)  // inlines: CVariantBase, Free, ToHScript, ~CVariantBase
// calls: CUtlString::Set, CUtlString::Get, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
const char *__fastcall CDOTA_Modifier_Lua::GetStatusEffectName(CDOTA_Modifier_Lua *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  CUtlString *p_m_szStatusEffectName; // rbx
  const char *result; // rax
  const char *v8; // [rsp+8h] [rbp-48h]
  ScriptVariant_t v9; // [rsp+10h] [rbp-40h] BYREF
  ScriptVariant_t args; // [rsp+20h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "GetStatusEffectName", v1, 0);
  v4 = v3;
  v9.m_type = 0;
  v9.m_flags = 0;
  v9.m_uint64 = 0;
  if ( v3 != 0 )
  {
    m_pVM = this->m_pVM;
    args.m_type = 31;
    args.m_flags = 0;
    args.m_uint64 = v1;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, &v9, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
  if ( v9.m_type == 30 )
  {
    p_m_szStatusEffectName = &this->m_szStatusEffectName;
    CUtlString::Set(p_m_szStatusEffectName, v9.m_pszString);
    result = CUtlString::Get(p_m_szStatusEffectName);
  }
  else
  {
    result = 0;
  }
  if ( (v9.m_flags & 1) != 0 )
  {
    v8 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v9.m_uint64);
    return v8;
  }
  return result;
}


// CDOTA_Modifier_Lua::StatusEffectPriority  (line 797, @0x0000000002603ef0, libserver.so)  // inlines: CVariantBase, Free, Int, ToHScript, operator int, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
int __fastcall CDOTA_Modifier_Lua::StatusEffectPriority(CDOTA_Modifier_Lua *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  int result; // eax
  int v7; // [rsp+Ch] [rbp-44h]
  ScriptVariant_t v8; // [rsp+10h] [rbp-40h] BYREF
  ScriptVariant_t args; // [rsp+20h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "StatusEffectPriority", v1, 0);
  v8.m_uint64 = 0;
  v4 = v3;
  v8.m_type = 0;
  v8.m_flags = 0;
  if ( v3 != 0 )
  {
    m_pVM = this->m_pVM;
    args.m_uint64 = v1;
    args.m_type = 31;
    args.m_flags = 0;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, &v8, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
  if ( v8.m_type == 1 )
  {
    result = v8.m_float;
  }
  else
  {
    result = v8.m_int;
    if ( v8.m_type == 34 )
      result = v8.m_float64;
  }
  if ( (v8.m_flags & 1) != 0 )
  {
    v7 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8.m_uint64);
    return v7;
  }
  return result;
}


// CDOTA_Modifier_Lua::GetHeroEffectName  (line 815, @0x0000000002607240, libserver.so)  // inlines: CVariantBase, Free, ToHScript, ~CVariantBase
// calls: CUtlString::Set, CUtlString::Get, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
const char *__fastcall CDOTA_Modifier_Lua::GetHeroEffectName(CDOTA_Modifier_Lua *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  CUtlString *p_m_szHeroEffectName; // rbx
  const char *result; // rax
  const char *v8; // [rsp+8h] [rbp-48h]
  ScriptVariant_t v9; // [rsp+10h] [rbp-40h] BYREF
  ScriptVariant_t args; // [rsp+20h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "GetHeroEffectName", v1, 0);
  v9.m_uint64 = 0;
  v4 = v3;
  v9.m_type = 0;
  v9.m_flags = 0;
  if ( v3 != 0 )
  {
    m_pVM = this->m_pVM;
    args.m_type = 31;
    args.m_uint64 = v1;
    args.m_flags = 0;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, &v9, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
  if ( v9.m_type == 30 )
  {
    p_m_szHeroEffectName = &this->m_szHeroEffectName;
    CUtlString::Set(p_m_szHeroEffectName, v9.m_pszString);
    result = CUtlString::Get(p_m_szHeroEffectName);
  }
  else
  {
    result = 0;
  }
  if ( (v9.m_flags & 1) != 0 )
  {
    v8 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v9.m_uint64);
    return v8;
  }
  return result;
}


// CDOTA_Modifier_Lua::HeroEffectPriority  (line 846, @0x0000000002604040, libserver.so)  // inlines: CVariantBase, Free, Int, ToHScript, operator int, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
int __fastcall CDOTA_Modifier_Lua::HeroEffectPriority(CDOTA_Modifier_Lua *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  int result; // eax
  int v7; // [rsp+Ch] [rbp-44h]
  ScriptVariant_t v8; // [rsp+10h] [rbp-40h] BYREF
  ScriptVariant_t args; // [rsp+20h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "HeroEffectPriority", v1, 0);
  v8.m_uint64 = 0;
  v4 = v3;
  v8.m_type = 0;
  v8.m_flags = 0;
  if ( v3 != 0 )
  {
    m_pVM = this->m_pVM;
    args.m_uint64 = v1;
    args.m_type = 31;
    args.m_flags = 0;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, &v8, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
  if ( v8.m_type == 1 )
  {
    result = v8.m_float;
  }
  else
  {
    result = v8.m_int;
    if ( v8.m_type == 34 )
      result = v8.m_float64;
  }
  if ( (v8.m_flags & 1) != 0 )
  {
    v7 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8.m_uint64);
    return v7;
  }
  return result;
}


// CDOTA_Modifier_Lua::GetAuraDuration  (line 864, @0x0000000002604190, libserver.so)  // inlines: CVariantBase, Float, Free, ToHScript, operator float, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
float __fastcall CDOTA_Modifier_Lua::GetAuraDuration(CDOTA_Modifier_Lua *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  float result; // xmm0_4
  float v7; // [rsp+Ch] [rbp-44h]
  ScriptVariant_t v8; // [rsp+10h] [rbp-40h] BYREF
  ScriptVariant_t args; // [rsp+20h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "GetAuraDuration", v1, 0);
  v4 = v3;
  v8.m_type = 0;
  v8.m_flags = 0;
  v8.m_uint64 = 0;
  if ( v3 != 0 )
  {
    m_pVM = this->m_pVM;
    args.m_uint64 = v1;
    args.m_type = 31;
    args.m_flags = 0;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, &v8, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
  result = v8.m_float;
  if ( v8.m_type == 34 )
    result = v8.m_float64;
  if ( (v8.m_flags & 1) != 0 )
  {
    v7 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8.m_uint64);
    return v7;
  }
  return result;
}


// CDOTA_Modifier_Lua::GetAuraSearchTeam  (line 882, @0x00000000026042d0, libserver.so)  // inlines: CVariantBase, Free, Int, ToHScript, operator int, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
int __fastcall CDOTA_Modifier_Lua::GetAuraSearchTeam(CDOTA_Modifier_Lua *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  int result; // eax
  int v7; // [rsp+Ch] [rbp-44h]
  ScriptVariant_t v8; // [rsp+10h] [rbp-40h] BYREF
  ScriptVariant_t args; // [rsp+20h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "GetAuraSearchTeam", v1, 0);
  v8.m_uint64 = 0;
  v4 = v3;
  v8.m_type = 0;
  v8.m_flags = 0;
  if ( v3 != 0 )
  {
    m_pVM = this->m_pVM;
    args.m_uint64 = v1;
    args.m_type = 31;
    args.m_flags = 0;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, &v8, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
  if ( v8.m_type == 1 )
  {
    result = v8.m_float;
  }
  else
  {
    result = v8.m_int;
    if ( v8.m_type == 34 )
      result = v8.m_float64;
  }
  if ( (v8.m_flags & 1) != 0 )
  {
    v7 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8.m_uint64);
    return v7;
  }
  return result;
}


// CDOTA_Modifier_Lua::GetAuraSearchType  (line 900, @0x0000000002604420, libserver.so)  // inlines: CVariantBase, Free, Int, ToHScript, operator int, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
int __fastcall CDOTA_Modifier_Lua::GetAuraSearchType(CDOTA_Modifier_Lua *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  int result; // eax
  int v7; // [rsp+Ch] [rbp-44h]
  ScriptVariant_t v8; // [rsp+10h] [rbp-40h] BYREF
  ScriptVariant_t args; // [rsp+20h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "GetAuraSearchType", v1, 0);
  v8.m_uint64 = 0;
  v4 = v3;
  v8.m_type = 0;
  v8.m_flags = 0;
  if ( v3 != 0 )
  {
    m_pVM = this->m_pVM;
    args.m_uint64 = v1;
    args.m_type = 31;
    args.m_flags = 0;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, &v8, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
  if ( v8.m_type == 1 )
  {
    result = v8.m_float;
  }
  else
  {
    result = v8.m_int;
    if ( v8.m_type == 34 )
      result = v8.m_float64;
  }
  if ( (v8.m_flags & 1) != 0 )
  {
    v7 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8.m_uint64);
    return v7;
  }
  return result;
}


// CDOTA_Modifier_Lua::GetAuraSearchFlags  (line 918, @0x0000000002604570, libserver.so)  // inlines: CVariantBase, Free, Int, ToHScript, operator int, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
int __fastcall CDOTA_Modifier_Lua::GetAuraSearchFlags(CDOTA_Modifier_Lua *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  int result; // eax
  int v7; // [rsp+Ch] [rbp-44h]
  ScriptVariant_t v8; // [rsp+10h] [rbp-40h] BYREF
  ScriptVariant_t args; // [rsp+20h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "GetAuraSearchFlags", v1, 0);
  v8.m_uint64 = 0;
  v4 = v3;
  v8.m_type = 0;
  v8.m_flags = 0;
  if ( v3 != 0 )
  {
    m_pVM = this->m_pVM;
    args.m_uint64 = v1;
    args.m_type = 31;
    args.m_flags = 0;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, &v8, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
  if ( v8.m_type == 1 )
  {
    result = v8.m_float;
  }
  else
  {
    result = v8.m_int;
    if ( v8.m_type == 34 )
      result = v8.m_float64;
  }
  if ( (v8.m_flags & 1) != 0 )
  {
    v7 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8.m_uint64);
    return v7;
  }
  return result;
}


// CDOTA_Modifier_Lua::GetAuraRadius  (line 936, @0x00000000026046c0, libserver.so)  // inlines: CVariantBase, Free, Int, ToHScript, operator int, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
int __fastcall CDOTA_Modifier_Lua::GetAuraRadius(CDOTA_Modifier_Lua *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  int result; // eax
  int v7; // [rsp+Ch] [rbp-44h]
  ScriptVariant_t v8; // [rsp+10h] [rbp-40h] BYREF
  ScriptVariant_t args; // [rsp+20h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "GetAuraRadius", v1, 0);
  v8.m_uint64 = 0;
  v4 = v3;
  v8.m_type = 0;
  v8.m_flags = 0;
  if ( v3 != 0 )
  {
    m_pVM = this->m_pVM;
    args.m_uint64 = v1;
    args.m_type = 31;
    args.m_flags = 0;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, &v8, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
  if ( v8.m_type == 1 )
  {
    result = v8.m_float;
  }
  else
  {
    result = v8.m_int;
    if ( v8.m_type == 34 )
      result = v8.m_float64;
  }
  if ( (v8.m_flags & 1) != 0 )
  {
    v7 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8.m_uint64);
    return v7;
  }
  return result;
}


// CDOTA_Modifier_Lua::GetAuraEntityReject  (line 954, @0x0000000002604cd0, libserver.so)  // inlines: CVariantBase, EntityToHScript, Free, Get, GetPublicScriptScope, ToHScript, operator=, ~CVariantBase
// calls: CEntityInstance::CreatePublicScriptScope, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
bool __fastcall CDOTA_Modifier_Lua::GetAuraEntityReject(CDOTA_Modifier_Lua *const this, CDOTA_BaseNPC *pNPC)
{
  uint64 v4; // rbx
  __int64 v5; // r14
  HSCRIPT m_hScope; // rax
  IScriptVM *m_pVM; // rdi
  ScriptVariant_t *v8; // rbx
  bool result; // al
  char m_char; // [rsp+Ch] [rbp-64h]
  ScriptVariant_t v11; // [rsp+10h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> args[2]; // [rsp+20h] [rbp-50h] BYREF

  v4 = 0;
  if ( this != 0 )
    v4 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v5 = (*(*this->m_pVM + 144LL))(this->m_pVM, "GetAuraEntityReject", v4, 0);
  v11.m_type = 0;
  v11.m_flags = 0;
  v11.m_uint64 = 0;
  if ( v5 != 0 )
  {
    args[0].m_flags = 0;
    args[1].m_type = 0;
    args[1].m_flags = 0;
    args[1].m_uint64 = 0;
    args[0].m_type = 31;
    args[0].m_uint64 = v4;
    if ( pNPC != 0 )
    {
      if ( pNPC->m_pEntity->m_hPublicScope.m_hScope == 0 )
        CEntityInstance::CreatePublicScriptScope(pNPC, 0);
      m_hScope = pNPC->m_pEntity->m_hPublicScope.m_hScope;
    }
    else
    {
      m_hScope = 0;
    }
    m_pVM = this->m_pVM;
    args[1].m_type = 31;
    args[1].m_uint64 = m_hScope;
    (*(*m_pVM + 160LL))(m_pVM, v5, args, 2, &v11, 0, 1);
    v8 = &args[1];
    do
    {
      if ( (v8->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8->m_uint64);
        v8->m_flags &= ~1u;
      }
      --v8;
      v8[1].m_uint64 = 0;
      v8[1].m_type = 0;
    }
    while ( v8 != &v11 );
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v5);
  result = v11.m_char;
  if ( (v11.m_flags & 1) != 0 )
  {
    m_char = v11.m_char;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v11.m_uint64);
    return m_char;
  }
  return result;
}


// CDOTA_Modifier_Lua::GetTexture  (line 974, @0x0000000002607390, libserver.so)  // inlines: CVariantBase, Free, ToHScript, ~CVariantBase
// calls: CUtlString::Set, CUtlString::Get, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
const char *__fastcall CDOTA_Modifier_Lua::GetTexture(CDOTA_Modifier_Lua *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  CUtlString *p_m_szTextureName; // rbx
  const char *result; // rax
  const char *v8; // [rsp+8h] [rbp-48h]
  ScriptVariant_t v9; // [rsp+10h] [rbp-40h] BYREF
  ScriptVariant_t args; // [rsp+20h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "GetTexture", v1, 0);
  v9.m_uint64 = 0;
  v4 = v3;
  v9.m_flags = 0;
  v9.m_type = 0;
  if ( v3 != 0 )
  {
    m_pVM = this->m_pVM;
    args.m_uint64 = v1;
    args.m_type = 31;
    args.m_flags = 0;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, &v9, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
  if ( v9.m_type == 30 )
  {
    p_m_szTextureName = &this->m_szTextureName;
    CUtlString::Set(p_m_szTextureName, v9.m_pszString);
    result = CUtlString::Get(p_m_szTextureName);
  }
  else
  {
    result = 0;
  }
  if ( (v9.m_flags & 1) != 0 )
  {
    v8 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v9.m_uint64);
    return v8;
  }
  return result;
}


// CDOTA_Modifier_Lua::AddCustomTransmiterData  (line 1008, @0x00000000025e53d0, libserver.so)  // inlines: String, ToCStr, assign, length, set_has_lua_name, set_lua_name
// calls: strlen, std::string::assign(char const*,ulong)
void __fastcall CDOTA_Modifier_Lua::AddCustomTransmiterData(
        CDOTA_Modifier_Lua *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  const char *m_pAsString; // rbx
  size_t v4; // rax

  m_pAsString = "";
  if ( this->m_name.u.m_Id != 0 )
    m_pAsString = this->m_name.u.m_pAsString;
  *(entry + 4) |= 0x80000000;
  v4 = strlen(m_pAsString);
  std::string::assign(*(entry + 21), m_pAsString, v4);
}


// CDOTA_Modifier_Lua::GetModifierFunc  (line 1018, @0x00000000025f0a20, libserver.so)
// callers: CDOTA_Modifier_Lua::DeclareFunctions
// globals: jpt_25F0A40, CDOTA_Modifier_Lua::GetVisualZDelta(CModifierParams const&), CDOTA_Modifier_Lua::GetModifierCanAttackTrees(CModifierParams const&), CDOTA_Modifier_Lua::OnAttackFinished(CModifierParams const&), CDOTA_Modifier_Lua::OnDominated(CModifierParams const&), CDOTA_Modifier_Lua::GetModifierAbilityLayout(CModifierParams const&), CDOTA_Modifier_Lua::GetModifierChangeAbilityValue(CModifierParams const&), CDOTA_Modifier_Lua::GetModifierIgnoreCastAngle(CModifierParams const&) (40 total)
MODIFIERPTR __fastcall CDOTA_Modifier_Lua::GetModifierFunc(CDOTA_Modifier_Lua *const this, modifierfunction eFunction)
{
  MODIFIERPTR result; // rax

  switch ( eFunction )
  {
    case modifierfunction::MODIFIER_PROPERTY_PREATTACK_BONUS_DAMAGE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierPreAttack_BonusDamage;
      break;
    case modifierfunction::MODIFIER_PROPERTY_PREATTACK_BONUS_DAMAGE_POST_CRIT:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierPreAttack_BonusDamagePostCrit;
      break;
    case modifierfunction::MODIFIER_PROPERTY_BASEATTACK_BONUSDAMAGE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierBaseAttack_BonusDamage;
      break;
    case modifierfunction::MODIFIER_PROPERTY_PROCATTACK_BONUS_DAMAGE_PHYSICAL:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierProcAttack_BonusDamage_Physical;
      break;
    case modifierfunction::MODIFIER_PROPERTY_PROCATTACK_BONUS_DAMAGE_MAGICAL:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierProcAttack_BonusDamage_Magical;
      break;
    case modifierfunction::MODIFIER_PROPERTY_PROCATTACK_BONUS_DAMAGE_PURE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierProcAttack_BonusDamage_Pure;
      break;
    case modifierfunction::MODIFIER_PROPERTY_PROCATTACK_FEEDBACK:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierProcAttack_Feedback;
      break;
    case modifierfunction::MODIFIER_PROPERTY_PRE_ATTACK:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierPreAttack;
      break;
    case modifierfunction::MODIFIER_PROPERTY_INVISIBILITY_LEVEL:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierInvisibilityLevel;
      break;
    case modifierfunction::MODIFIER_PROPERTY_PERSISTENT_INVISIBILITY:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierPersistentInvisibility;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MOVESPEED_BONUS_CONSTANT:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierMoveSpeedBonus_Constant;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MOVESPEED_BASE_OVERRIDE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierMoveSpeedOverride;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MOVESPEED_BONUS_PERCENTAGE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierMoveSpeedBonus_Percentage;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MOVESPEED_BONUS_PERCENTAGE_UNIQUE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierMoveSpeedBonus_Percentage_Unique;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MOVESPEED_BONUS_UNIQUE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierMoveSpeedBonus_Special_Boots;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MOVESPEED_ABSOLUTE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierMoveSpeed_Absolute;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MOVESPEED_LIMIT:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierMoveSpeed_Limit;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MOVESPEED_MAX:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierMoveSpeed_Max;
      break;
    case modifierfunction::MODIFIER_PROPERTY_ATTACKSPEED_BASE_OVERRIDE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierAttackSpeedBaseOverride;
      break;
    case modifierfunction::MODIFIER_PROPERTY_ATTACKSPEED_BONUS_CONSTANT:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierAttackSpeedBonus_Constant;
      break;
    case modifierfunction::MODIFIER_PROPERTY_COOLDOWN_REDUCTION_CONSTANT:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierCooldownReduction_Constant;
      break;
    case modifierfunction::MODIFIER_PROPERTY_BASE_ATTACK_TIME_CONSTANT:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierBaseAttackTimeConstant;
      break;
    case modifierfunction::MODIFIER_PROPERTY_ATTACK_POINT_CONSTANT:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierAttackPointConstant;
      break;
    case modifierfunction::MODIFIER_PROPERTY_DAMAGEOUTGOING_PERCENTAGE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierDamageOutgoing_Percentage;
      break;
    case modifierfunction::MODIFIER_PROPERTY_DAMAGEOUTGOING_PERCENTAGE_ILLUSION:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierDamageOutgoing_Percentage_Illusion;
      break;
    case modifierfunction::MODIFIER_PROPERTY_TOTALDAMAGEOUTGOING_PERCENTAGE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierTotalDamageOutgoing_Percentage;
      break;
    case modifierfunction::MODIFIER_PROPERTY_SPELL_AMPLIFY_PERCENTAGE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierSpellAmplify_Percentage;
      break;
    case modifierfunction::MODIFIER_PROPERTY_HEAL_AMPLIFY_PERCENTAGE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierHealAmplify_Percentage;
      break;
    case modifierfunction::MODIFIER_PROPERTY_BASEDAMAGEOUTGOING_PERCENTAGE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierBaseDamageOutgoing_Percentage;
      break;
    case modifierfunction::MODIFIER_PROPERTY_INCOMING_DAMAGE_PERCENTAGE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierIncomingDamage_Percentage;
      break;
    case modifierfunction::MODIFIER_PROPERTY_INCOMING_PHYSICAL_DAMAGE_PERCENTAGE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierIncomingPhysicalDamage_Percentage;
      break;
    case modifierfunction::MODIFIER_PROPERTY_INCOMING_SPELL_DAMAGE_CONSTANT:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierIncomingSpellDamageConstant;
      break;
    case modifierfunction::MODIFIER_PROPERTY_EVASION_CONSTANT:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierEvasion_Constant;
      break;
    case modifierfunction::MODIFIER_PROPERTY_AVOID_DAMAGE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierAvoidDamage;
      break;
    case modifierfunction::MODIFIER_PROPERTY_AVOID_SPELL:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierAvoidSpell;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MISS_PERCENTAGE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierMiss_Percentage;
      break;
    case modifierfunction::MODIFIER_PROPERTY_PHYSICAL_ARMOR_BONUS:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierPhysicalArmorBonus;
      break;
    case modifierfunction::MODIFIER_PROPERTY_PHYSICAL_ARMOR_BONUS_UNIQUE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierPhysicalArmorBonusUnique;
      break;
    case modifierfunction::MODIFIER_PROPERTY_PHYSICAL_ARMOR_BONUS_UNIQUE_ACTIVE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierPhysicalArmorBonusUniqueActive;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MAGICAL_RESISTANCE_BONUS:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierMagicalResistanceBonus;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MAGICAL_RESISTANCE_DECREPIFY_UNIQUE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierMagicalResistanceDecrepifyUnique;
      break;
    case modifierfunction::MODIFIER_PROPERTY_BASE_MANA_REGEN:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierBaseManaRegen;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MANA_REGEN_CONSTANT:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierConstantManaRegen;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MANA_REGEN_CONSTANT_UNIQUE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierConstantManaRegenUnique;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MANA_REGEN_PERCENTAGE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierPercentageManaRegen;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MANA_REGEN_TOTAL_PERCENTAGE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierTotalPercentageManaRegen;
      break;
    case modifierfunction::MODIFIER_PROPERTY_HEALTH_REGEN_CONSTANT:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierConstantHealthRegen;
      break;
    case modifierfunction::MODIFIER_PROPERTY_HEALTH_REGEN_PERCENTAGE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierHealthRegenPercentage;
      break;
    case modifierfunction::MODIFIER_PROPERTY_HEALTH_BONUS:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierHealthBonus;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MANA_BONUS:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierManaBonus;
      break;
    case modifierfunction::MODIFIER_PROPERTY_EXTRA_STRENGTH_BONUS:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierExtraStrengthBonus;
      break;
    case modifierfunction::MODIFIER_PROPERTY_EXTRA_HEALTH_BONUS:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierExtraHealthBonus;
      break;
    case modifierfunction::MODIFIER_PROPERTY_EXTRA_MANA_BONUS:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierExtraManaBonus;
      break;
    case modifierfunction::MODIFIER_PROPERTY_EXTRA_HEALTH_PERCENTAGE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierExtraHealthPercentage;
      break;
    case modifierfunction::MODIFIER_PROPERTY_STATS_STRENGTH_BONUS:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierBonusStats_Strength;
      break;
    case modifierfunction::MODIFIER_PROPERTY_STATS_AGILITY_BONUS:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierBonusStats_Agility;
      break;
    case modifierfunction::MODIFIER_PROPERTY_STATS_INTELLECT_BONUS:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierBonusStats_Intellect;
      break;
    case modifierfunction::MODIFIER_PROPERTY_CAST_RANGE_BONUS:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierCastRangeBonus;
      break;
    case modifierfunction::MODIFIER_PROPERTY_CAST_RANGE_BONUS_STACKING:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierCastRangeBonusStacking;
      break;
    case modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierAttackRangeBonus;
      break;
    case modifierfunction::MODIFIER_PROPERTY_PROJECTILE_SPEED_BONUS:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierProjectileSpeedBonus;
      break;
    case modifierfunction::MODIFIER_PROPERTY_REINCARNATION:
      result.__pfn = CDOTA_Modifier_Lua::ReincarnateTime;
      break;
    case modifierfunction::MODIFIER_PROPERTY_RESPAWNTIME:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierConstantRespawnTime;
      break;
    case modifierfunction::MODIFIER_PROPERTY_RESPAWNTIME_PERCENTAGE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierPercentageRespawnTime;
      break;
    case modifierfunction::MODIFIER_PROPERTY_RESPAWNTIME_STACKING:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierStackingRespawnTime;
      break;
    case modifierfunction::MODIFIER_PROPERTY_COOLDOWN_PERCENTAGE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierPercentageCooldown;
      break;
    case modifierfunction::MODIFIER_PROPERTY_COOLDOWN_PERCENTAGE_STACKING:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierPercentageCooldownStacking;
      break;
    case modifierfunction::MODIFIER_PROPERTY_CASTTIME_PERCENTAGE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierPercentageCasttime;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MANACOST_PERCENTAGE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierPercentageManacost;
      break;
    case modifierfunction::MODIFIER_PROPERTY_DEATHGOLDCOST:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierConstantDeathGoldCost;
      break;
    case modifierfunction::MODIFIER_PROPERTY_EXP_RATE_BOOST:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierPercentageExpRateBoost;
      break;
    case modifierfunction::MODIFIER_PROPERTY_PREATTACK_CRITICALSTRIKE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierPreAttack_CriticalStrike;
      break;
    case modifierfunction::MODIFIER_PROPERTY_PHYSICAL_CONSTANT_BLOCK:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierPhysical_ConstantBlock;
      break;
    case modifierfunction::MODIFIER_PROPERTY_TOTAL_CONSTANT_BLOCK_UNAVOIDABLE_PRE_ARMOR:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierPhysical_ConstantBlockUnavoidablePreArmor;
      break;
    case modifierfunction::MODIFIER_PROPERTY_TOTAL_CONSTANT_BLOCK:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierTotal_ConstantBlock;
      break;
    case modifierfunction::MODIFIER_PROPERTY_OVERRIDE_ANIMATION:
      result.__pfn = CDOTA_Modifier_Lua::GetOverrideAnimation;
      break;
    case modifierfunction::MODIFIER_PROPERTY_OVERRIDE_ANIMATION_WEIGHT:
      result.__pfn = CDOTA_Modifier_Lua::GetOverrideAnimationWeight;
      break;
    case modifierfunction::MODIFIER_PROPERTY_OVERRIDE_ANIMATION_RATE:
      result.__pfn = CDOTA_Modifier_Lua::GetOverrideAnimationRate;
      break;
    case modifierfunction::MODIFIER_PROPERTY_ABSORB_SPELL:
      result.__pfn = CDOTA_Modifier_Lua::GetAbsorbSpell;
      break;
    case modifierfunction::MODIFIER_PROPERTY_REFLECT_SPELL:
      result.__pfn = CDOTA_Modifier_Lua::GetReflectSpell;
      break;
    case modifierfunction::MODIFIER_PROPERTY_DISABLE_AUTOATTACK:
      result.__pfn = CDOTA_Modifier_Lua::GetDisableAutoAttack;
      break;
    case modifierfunction::MODIFIER_PROPERTY_BONUS_DAY_VISION:
      result.__pfn = CDOTA_Modifier_Lua::GetBonusDayVision;
      break;
    case modifierfunction::MODIFIER_PROPERTY_BONUS_NIGHT_VISION:
      result.__pfn = CDOTA_Modifier_Lua::GetBonusNightVision;
      break;
    case modifierfunction::MODIFIER_PROPERTY_BONUS_VISION_PERCENTAGE:
      result.__pfn = CDOTA_Modifier_Lua::GetBonusVisionPercentage;
      break;
    case modifierfunction::MODIFIER_PROPERTY_FIXED_DAY_VISION:
      result.__pfn = CDOTA_Modifier_Lua::GetFixedDayVision;
      break;
    case modifierfunction::MODIFIER_PROPERTY_FIXED_NIGHT_VISION:
      result.__pfn = CDOTA_Modifier_Lua::GetFixedNightVision;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MIN_HEALTH:
      result.__pfn = CDOTA_Modifier_Lua::GetMinHealth;
      break;
    case modifierfunction::MODIFIER_PROPERTY_ABSOLUTE_NO_DAMAGE_PHYSICAL:
      result.__pfn = CDOTA_Modifier_Lua::GetAbsoluteNoDamagePhysical;
      break;
    case modifierfunction::MODIFIER_PROPERTY_ABSOLUTE_NO_DAMAGE_MAGICAL:
      result.__pfn = CDOTA_Modifier_Lua::GetAbsoluteNoDamageMagical;
      break;
    case modifierfunction::MODIFIER_PROPERTY_ABSOLUTE_NO_DAMAGE_PURE:
      result.__pfn = CDOTA_Modifier_Lua::GetAbsoluteNoDamagePure;
      break;
    case modifierfunction::MODIFIER_PROPERTY_IS_ILLUSION:
      result.__pfn = CDOTA_Modifier_Lua::GetIsIllusion;
      break;
    case modifierfunction::MODIFIER_PROPERTY_ILLUSION_LABEL:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierIllusionLabel;
      break;
    case modifierfunction::MODIFIER_PROPERTY_TURN_RATE_PERCENTAGE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierTurnRate_Percentage;
      break;
    case modifierfunction::MODIFIER_PROPERTY_DISABLE_HEALING:
      result.__pfn = CDOTA_Modifier_Lua::GetDisableHealing;
      break;
    case modifierfunction::MODIFIER_PROPERTY_OVERRIDE_ATTACK_MAGICAL:
      result.__pfn = CDOTA_Modifier_Lua::GetOverrideAttackMagical;
      break;
    case modifierfunction::MODIFIER_PROPERTY_UNIT_STATS_NEEDS_REFRESH:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierUnitStatsNeedsRefresh;
      break;
    case modifierfunction::MODIFIER_PROPERTY_BOUNTY_CREEP_MULTIPLIER:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierBountyCreepMultiplier;
      break;
    case modifierfunction::MODIFIER_PROPERTY_BOUNTY_OTHER_MULTIPLIER:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierBountyOtherMultiplier;
      break;
    case modifierfunction::MODIFIER_EVENT_ON_ATTACK_RECORD:
      result.__pfn = CDOTA_Modifier_Lua::OnAttackRecord;
      break;
    case modifierfunction::MODIFIER_EVENT_ON_ATTACK_START:
      result.__pfn = CDOTA_Modifier_Lua::OnAttackStart;
      break;
    case modifierfunction::MODIFIER_EVENT_ON_ATTACK:
      result.__pfn = CDOTA_Modifier_Lua::OnAttack;
      break;
    case modifierfunction::MODIFIER_EVENT_ON_ATTACK_LANDED:
      result.__pfn = CDOTA_Modifier_Lua::OnAttackLanded;
      break;
    case modifierfunction::MODIFIER_EVENT_ON_ATTACK_FAIL:
      result.__pfn = CDOTA_Modifier_Lua::OnAttackFail;
      break;
    case modifierfunction::MODIFIER_EVENT_ON_ATTACK_ALLIED:
      result.__pfn = CDOTA_Modifier_Lua::OnAttackAllied;
      break;
    case modifierfunction::MODIFIER_EVENT_ON_PROJECTILE_DODGE:
      result.__pfn = CDOTA_Modifier_Lua::OnProjectileDodge;
      break;
    case modifierfunction::MODIFIER_EVENT_ON_ORDER:
      result.__pfn = CDOTA_Modifier_Lua::OnOrder;
      break;
    case modifierfunction::MODIFIER_EVENT_ON_UNIT_MOVED:
      result.__pfn = CDOTA_Modifier_Lua::OnUnitMoved;
      break;
    case modifierfunction::MODIFIER_EVENT_ON_ABILITY_START:
      result.__pfn = CDOTA_Modifier_Lua::OnAbilityStart;
      break;
    case modifierfunction::MODIFIER_EVENT_ON_ABILITY_EXECUTED:
      result.__pfn = CDOTA_Modifier_Lua::OnAbilityExecuted;
      break;
    case modifierfunction::MODIFIER_EVENT_ON_ABILITY_FULLY_CAST:
      result.__pfn = CDOTA_Modifier_Lua::OnAbilityFullyCast;
      break;
    case modifierfunction::MODIFIER_EVENT_ON_BREAK_INVISIBILITY:
      result.__pfn = CDOTA_Modifier_Lua::OnBreakInvisibility;
      break;
    case modifierfunction::MODIFIER_EVENT_ON_ABILITY_END_CHANNEL:
      result.__pfn = CDOTA_Modifier_Lua::OnAbilityEndChannel;
      break;
    case modifierfunction::MODIFIER_EVENT_ON_TAKEDAMAGE:
      result.__pfn = CDOTA_Modifier_Lua::OnTakeDamage;
      break;
    case modifierfunction::MODIFIER_EVENT_ON_STATE_CHANGED:
      result.__pfn = CDOTA_Modifier_Lua::OnStateChanged;
      break;
    case modifierfunction::MODIFIER_EVENT_ON_ATTACKED:
      result.__pfn = CDOTA_Modifier_Lua::OnAttacked;
      break;
    case modifierfunction::MODIFIER_EVENT_ON_DEATH:
      result.__pfn = CDOTA_Modifier_Lua::OnDeath;
      break;
    case modifierfunction::MODIFIER_EVENT_ON_RESPAWN:
      result.__pfn = CDOTA_Modifier_Lua::OnRespawn;
      break;
    case modifierfunction::MODIFIER_EVENT_ON_SPENT_MANA:
      result.__pfn = CDOTA_Modifier_Lua::OnSpentMana;
      break;
    case modifierfunction::MODIFIER_EVENT_ON_TELEPORTING:
      result.__pfn = CDOTA_Modifier_Lua::OnTeleporting;
      break;
    case modifierfunction::MODIFIER_EVENT_ON_TELEPORTED:
      result.__pfn = CDOTA_Modifier_Lua::OnTeleported;
      break;
    case modifierfunction::MODIFIER_EVENT_ON_SET_LOCATION:
      result.__pfn = CDOTA_Modifier_Lua::OnSetLocation;
      break;
    case modifierfunction::MODIFIER_EVENT_ON_HEALTH_GAINED:
      result.__pfn = CDOTA_Modifier_Lua::OnHealthGained;
      break;
    case modifierfunction::MODIFIER_EVENT_ON_MANA_GAINED:
      result.__pfn = CDOTA_Modifier_Lua::OnManaGained;
      break;
    case modifierfunction::MODIFIER_EVENT_ON_TAKEDAMAGE_KILLCREDIT:
      result.__pfn = CDOTA_Modifier_Lua::OnTakeDamageKillCredit;
      break;
    case modifierfunction::MODIFIER_EVENT_ON_HERO_KILLED:
      result.__pfn = CDOTA_Modifier_Lua::OnHeroKilled;
      break;
    case modifierfunction::MODIFIER_EVENT_ON_HEAL_RECEIVED:
      result.__pfn = CDOTA_Modifier_Lua::OnHealReceived;
      break;
    case modifierfunction::MODIFIER_EVENT_ON_BUILDING_KILLED:
      result.__pfn = CDOTA_Modifier_Lua::OnBuildingKilled;
      break;
    case modifierfunction::MODIFIER_EVENT_ON_MODEL_CHANGED:
      result.__pfn = CDOTA_Modifier_Lua::OnModelChanged;
      break;
    case modifierfunction::MODIFIER_PROPERTY_TOOLTIP:
      result.__pfn = CDOTA_Modifier_Lua::OnTooltip;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MODEL_CHANGE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierModelChange;
      break;
    case modifierfunction::MODIFIER_PROPERTY_MODEL_SCALE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierModelScale;
      break;
    case modifierfunction::MODIFIER_PROPERTY_IS_SCEPTER:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierScepter;
      break;
    case modifierfunction::MODIFIER_PROPERTY_TRANSLATE_ACTIVITY_MODIFIERS:
      result.__pfn = CDOTA_Modifier_Lua::GetActivityTranslationModifiers;
      break;
    case modifierfunction::MODIFIER_PROPERTY_TRANSLATE_ATTACK_SOUND:
      result.__pfn = CDOTA_Modifier_Lua::GetAttackSound;
      break;
    case modifierfunction::MODIFIER_PROPERTY_LIFETIME_FRACTION:
      result.__pfn = CDOTA_Modifier_Lua::GetUnitLifetimeFraction;
      break;
    case modifierfunction::MODIFIER_PROPERTY_PROVIDES_FOW_POSITION:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierProvidesFOWVision;
      break;
    case modifierfunction::MODIFIER_PROPERTY_SPELLS_REQUIRE_HP:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierSpellsRequireHP;
      break;
    case modifierfunction::MODIFIER_PROPERTY_FORCE_DRAW_MINIMAP:
      result.__pfn = CDOTA_Modifier_Lua::GetForceDrawOnMinimap;
      break;
    case modifierfunction::MODIFIER_PROPERTY_DISABLE_TURNING:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierDisableTurning;
      break;
    case modifierfunction::MODIFIER_PROPERTY_IGNORE_CAST_ANGLE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierIgnoreCastAngle;
      break;
    case modifierfunction::MODIFIER_PROPERTY_CHANGE_ABILITY_VALUE:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierChangeAbilityValue;
      break;
    case modifierfunction::MODIFIER_PROPERTY_ABILITY_LAYOUT:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierAbilityLayout;
      break;
    case modifierfunction::MODIFIER_EVENT_ON_DOMINATED:
      result.__pfn = CDOTA_Modifier_Lua::OnDominated;
      break;
    case modifierfunction::MODIFIER_EVENT_ON_ATTACK_FINISHED:
      result.__pfn = CDOTA_Modifier_Lua::OnAttackFinished;
      break;
    case modifierfunction::MODIFIER_PROPERTY_CAN_ATTACK_TREES:
      result.__pfn = CDOTA_Modifier_Lua::GetModifierCanAttackTrees;
      break;
    case modifierfunction::MODIFIER_PROPERTY_VISUAL_Z_DELTA:
      result.__pfn = CDOTA_Modifier_Lua::GetVisualZDelta;
      break;
    default:
      result.__pfn = 0;
      break;
  }
  result.__delta = 0;
  return result;
}


// CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction  (line 1324, @0x0000000002618000, libserver.so)  // inlines: AddMultipleToTail, AddToTail, AssignTo, CUtlString, CVariantBase, Construct<CUtlString>, CopyConstruct<CUtlString>, Element, EnsureCount, Float, Free, GrowMemory, GrowVector, Insert, InsertMultipleBefore, TempString, ToHScript, ToString, operator const UtlSymId_t, operator float, operator[], ~CUtlString, ~CVariantBase
// calls: CModifierParams::FillOutScriptTableFromModifierParams, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, VariantFieldTypeName, Warning, CUtlString::Set, CUtlSymbolTable::AddString, CUtlString::operator=, CUtlString::FreeMemoryBlock, CUtlString::Get, CUtlMemory<CUtlString, int>::Grow, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CDOTA_Modifier_Lua::GetModifierPreAttack_BonusDamage, CDOTA_Modifier_Lua::GetModifierPreAttack_BonusDamagePostCrit, CDOTA_Modifier_Lua::GetModifierBaseAttack_BonusDamage, CDOTA_Modifier_Lua::GetModifierProcAttack_BonusDamage_Physical, CDOTA_Modifier_Lua::GetModifierProcAttack_BonusDamage_Magical, CDOTA_Modifier_Lua::GetModifierProcAttack_BonusDamage_Pure, CDOTA_Modifier_Lua::GetModifierProcAttack_Feedback, CDOTA_Modifier_Lua::GetModifierPreAttack, CDOTA_Modifier_Lua::GetModifierInvisibilityLevel, CDOTA_Modifier_Lua::GetModifierPersistentInvisibility, CDOTA_Modifier_Lua::GetModifierMoveSpeedBonus_Constant, CDOTA_Modifier_Lua::GetModifierMoveSpeedOverride (150 total)
// strings: "No conversion from %s to string at the moment!\n"
// globals: CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(
        CDOTA_Modifier_Lua *const this,
        const char *pszFunctionName,
        const CModifierParams *const params)
{
  uint64 v4; // r14
  __int64 v6; // r13
  IScriptVM *m_pVM; // rdi
  ScriptVariant_t *v8; // r14
  __m128i v9; // xmm1
  const char *m_uint64; // rsi
  __m128i m_uint; // xmm0
  const char *v13; // rax
  __int64 m_uint_low; // r13
  __int64 m_Size; // r12
  int v16; // r15d
  CUtlString *m_pMemory; // rax
  __int64 v18; // r13
  int v19; // eax
  CUtlString *v20; // r12
  const char *v21; // rax
  int m_nAllocationCount; // eax
  int v23; // ecx
  __int64 v24; // rdx
  const char *m_szVal; // [rsp+10h] [rbp-80h]
  const CModifierParams *paramsc; // [rsp+18h] [rbp-78h]
  int paramsb; // [rsp+18h] [rbp-78h]
  ScriptVariant_t v29; // [rsp+20h] [rbp-70h] BYREF
  ScriptVariant_t varModifierParams; // [rsp+30h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> args[2]; // [rsp+40h] [rbp-50h] BYREF
  ModifierVariant_t result; // 0:rax.16

  v4 = 0;
  if ( this != 0 )
    v4 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v6 = (*(*this->m_pVM + 144LL))(this->m_pVM, pszFunctionName, v4, 0);
  v29.m_type = 0;
  v29.m_flags = 0;
  v29.m_uint64 = 0;
  if ( v6 != 0 )
  {
    varModifierParams.m_uint64 = 0;
    varModifierParams.m_flags = 0;
    m_pVM = this->m_pVM;
    varModifierParams.m_type = 0;
    (*(*m_pVM + 264LL))(m_pVM, &varModifierParams);
    CModifierParams::FillOutScriptTableFromModifierParams(params, varModifierParams.m_hScript);
    args[0].m_uint64 = v4;
    args[0].m_type = 31;
    args[1].m_type = 0;
    args[0].m_flags = 0;
    args[1].m_flags = 0;
    CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&varModifierParams, &args[1]);
    (*(*this->m_pVM + 160LL))(this->m_pVM, v6, args, 2, &v29, 0, 1);
    (*(*this->m_pVM + 136LL))(this->m_pVM, varModifierParams.m_uint64);
    v8 = &args[1];
    do
    {
      if ( (v8->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8->m_uint64);
        v8->m_flags &= ~1u;
      }
      --v8;
      v8[1].m_uint64 = 0;
      v8[1].m_type = 0;
    }
    while ( v8 != &varModifierParams );
    if ( (varModifierParams.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, varModifierParams.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v6);
  if ( v29.m_type == 5 || v29.m_type == 26 )
  {
    *v9.m128i_i32 = v29.m_int;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v9) << 32) | 1;
    goto LABEL_18;
  }
  if ( v29.m_type == 2 )
  {
    v13 = VariantFieldTypeName(2);
    Warning("No conversion from %s to string at the moment!\n", v13);
    CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
    m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
LABEL_22:
    args[0].m_uint64 = 0;
    CUtlString::Set(args, m_uint64);
    CUtlSymbolTable::AddString(&this->m_mapPropertyFnStrings.m_SymbolTable, pszFunctionName);
    m_uint_low = LOWORD(varModifierParams.m_uint);
    m_Size = this->m_mapPropertyFnStrings.m_Vector.m_Size;
    if ( m_Size <= LOWORD(varModifierParams.m_uint) )
    {
      if ( m_Size != LOWORD(varModifierParams.m_uint) )
      {
        v16 = LOWORD(varModifierParams.m_uint) + 1;
        if ( m_Size >= v16 )
          goto LABEL_25;
        paramsb = v16 - m_Size;
        if ( v16 == m_Size )
          goto LABEL_25;
        m_nAllocationCount = this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_nAllocationCount;
        if ( v16 > m_nAllocationCount )
          CUtlMemory<CUtlString,int>::Grow(&this->m_mapPropertyFnStrings.m_Vector.m_Memory, v16 - m_nAllocationCount);
        this->m_mapPropertyFnStrings.m_Vector.m_Size = v16;
        if ( paramsb <= 0 )
        {
LABEL_25:
          m_pMemory = this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_pMemory;
        }
        else
        {
          m_pMemory = this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_pMemory;
          v23 = 0;
          v24 = m_Size;
          do
          {
            if ( &m_pMemory[v24] != 0 )
            {
              m_pMemory[v24].m_pString = 0;
              m_pMemory = this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_pMemory;
            }
            ++v23;
            ++v24;
          }
          while ( paramsb > v23 );
        }
        v18 = m_uint_low;
        CUtlString::operator=(&m_pMemory[v18], args);
        goto LABEL_27;
      }
      v19 = this->m_mapPropertyFnStrings.m_Vector.m_Size;
      if ( m_Size == this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CUtlString,int>::Grow(&this->m_mapPropertyFnStrings.m_Vector.m_Memory, 1);
        v19 = this->m_mapPropertyFnStrings.m_Vector.m_Size;
      }
      this->m_mapPropertyFnStrings.m_Vector.m_Size = v19 + 1;
      v20 = &this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_pMemory[m_Size];
      if ( v20 != 0 )
      {
        v20->m_pString = 0;
        v21 = CUtlString::Get(args);
        CUtlString::Set(v20, v21);
      }
    }
    v18 = m_uint_low;
LABEL_27:
    if ( args[0].m_uint64 != 0 )
      CUtlString::FreeMemoryBlock(args);
    result.m_szVal = CUtlString::Get(&this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_pMemory[v18]);
    *&result.m_eType = 2;
    goto LABEL_18;
  }
  m_uint64 = v29.m_uint64;
  if ( v29.m_type == 30 )
    goto LABEL_22;
  if ( v29.m_type == 1 )
  {
    m_uint = v29.m_uint;
  }
  else
  {
    result = 1uLL;
    if ( v29.m_type != 34 )
      goto LABEL_18;
    m_uint = _mm_cvtpd_ps(v29.m_uint64);
  }
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(m_uint) << 32) | 1;
LABEL_18:
  if ( (v29.m_flags & 1) != 0 )
  {
    m_szVal = result.m_szVal;
    paramsc = *&result.m_eType;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v29.m_uint64);
    *&result.m_eType = paramsc;
    result.m_szVal = m_szVal;
  }
  return result;
}


// CDOTA_Modifier_Lua::GetModifierPreAttack_BonusDamage  (line 1359, @0x0000000002618460, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierPreAttack_BonusDamage"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierPreAttack_BonusDamage", params);
}


// CDOTA_Modifier_Lua::GetModifierPreAttack_BonusDamagePostCrit  (line 1366, @0x0000000002618480, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierPreAttack_BonusDamagePostCrit"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierPreAttack_BonusDamagePostCrit(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(
           this,
           "GetModifierPreAttack_BonusDamagePostCrit",
           params);
}


// CDOTA_Modifier_Lua::GetModifierBaseAttack_BonusDamage  (line 1373, @0x00000000026184a0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierBaseAttack_BonusDamage"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierBaseAttack_BonusDamage(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierBaseAttack_BonusDamage", params);
}


// CDOTA_Modifier_Lua::GetModifierProcAttack_BonusDamage_Physical  (line 1380, @0x00000000026184c0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierProcAttack_BonusDamage_Physical"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierProcAttack_BonusDamage_Physical(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(
           this,
           "GetModifierProcAttack_BonusDamage_Physical",
           params);
}


// CDOTA_Modifier_Lua::GetModifierProcAttack_BonusDamage_Magical  (line 1387, @0x00000000026184e0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierProcAttack_BonusDamage_Magical"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierProcAttack_BonusDamage_Magical(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(
           this,
           "GetModifierProcAttack_BonusDamage_Magical",
           params);
}


// CDOTA_Modifier_Lua::GetModifierProcAttack_BonusDamage_Pure  (line 1394, @0x0000000002618500, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierProcAttack_BonusDamage_Pure"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierProcAttack_BonusDamage_Pure(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierProcAttack_BonusDamage_Pure", params);
}


// CDOTA_Modifier_Lua::GetModifierProcAttack_Feedback  (line 1401, @0x0000000002618520, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierProcAttack_Feedback"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierProcAttack_Feedback(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierProcAttack_Feedback", params);
}


// CDOTA_Modifier_Lua::GetModifierPreAttack  (line 1408, @0x0000000002618540, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierPreAttack"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierPreAttack(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierPreAttack", params);
}


// CDOTA_Modifier_Lua::GetModifierInvisibilityLevel  (line 1415, @0x0000000002618560, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierInvisibilityLevel"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierInvisibilityLevel(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierInvisibilityLevel", params);
}


// CDOTA_Modifier_Lua::GetModifierPersistentInvisibility  (line 1422, @0x0000000002618580, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierPersistentInvisibility"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierPersistentInvisibility(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierPersistentInvisibility", params);
}


// CDOTA_Modifier_Lua::GetModifierMoveSpeedBonus_Constant  (line 1429, @0x00000000026185a0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierMoveSpeedBonus_Constant"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierMoveSpeedBonus_Constant(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierMoveSpeedBonus_Constant", params);
}


// CDOTA_Modifier_Lua::GetModifierMoveSpeedOverride  (line 1436, @0x00000000026185c0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierMoveSpeedOverride"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierMoveSpeedOverride(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierMoveSpeedOverride", params);
}


// CDOTA_Modifier_Lua::GetModifierMoveSpeedBonus_Percentage  (line 1443, @0x00000000026185e0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierMoveSpeedBonus_Percentage"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierMoveSpeedBonus_Percentage", params);
}


// CDOTA_Modifier_Lua::GetModifierMoveSpeedBonus_Percentage_Unique  (line 1450, @0x0000000002618600, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierMoveSpeedBonus_Percentage_Unique"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierMoveSpeedBonus_Percentage_Unique(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(
           this,
           "GetModifierMoveSpeedBonus_Percentage_Unique",
           params);
}


// CDOTA_Modifier_Lua::GetModifierMoveSpeedBonus_Special_Boots  (line 1457, @0x0000000002618620, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierMoveSpeedBonus_Special_Boots"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierMoveSpeedBonus_Special_Boots(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierMoveSpeedBonus_Special_Boots", params);
}


// CDOTA_Modifier_Lua::GetModifierMoveSpeed_Absolute  (line 1464, @0x0000000002618640, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierMoveSpeed_Absolute"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierMoveSpeed_Absolute(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierMoveSpeed_Absolute", params);
}


// CDOTA_Modifier_Lua::GetModifierMoveSpeed_Limit  (line 1471, @0x0000000002618660, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierMoveSpeed_Limit"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierMoveSpeed_Limit(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierMoveSpeed_Limit", params);
}


// CDOTA_Modifier_Lua::GetModifierMoveSpeed_Max  (line 1478, @0x0000000002618680, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierMoveSpeed_Max"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierMoveSpeed_Max(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierMoveSpeed_Max", params);
}


// CDOTA_Modifier_Lua::GetModifierAttackSpeedBaseOverride  (line 1485, @0x00000000026186a0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierAttackSpeedBaseOverride"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierAttackSpeedBaseOverride(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierAttackSpeedBaseOverride", params);
}


// CDOTA_Modifier_Lua::GetModifierAttackSpeedBonus_Constant  (line 1492, @0x00000000026186c0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierAttackSpeedBonus_Constant"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierAttackSpeedBonus_Constant", params);
}


// CDOTA_Modifier_Lua::GetModifierAttackSpeedBonus_Constant_PowerTreads  (line 1499, @0x00000000026186e0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierAttackSpeedBonus_Constant_PowerTreads"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierAttackSpeedBonus_Constant_PowerTreads(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(
           this,
           "GetModifierAttackSpeedBonus_Constant_PowerTreads",
           params);
}


// CDOTA_Modifier_Lua::GetModifierAttackSpeedBonus_Constant_Secondary  (line 1506, @0x0000000002618700, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierAttackSpeedBonus_Constant_Secondary"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierAttackSpeedBonus_Constant_Secondary(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(
           this,
           "GetModifierAttackSpeedBonus_Constant_Secondary",
           params);
}


// CDOTA_Modifier_Lua::GetModifierCooldownReduction_Constant  (line 1513, @0x0000000002618720, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierCooldownReduction_Constant"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierCooldownReduction_Constant(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierCooldownReduction_Constant", params);
}


// CDOTA_Modifier_Lua::GetModifierPercentageCooldownStacking  (line 1520, @0x0000000002618740, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierPercentageCooldownStacking"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierPercentageCooldownStacking(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierPercentageCooldownStacking", params);
}


// CDOTA_Modifier_Lua::GetModifierBaseAttackTimeConstant  (line 1527, @0x0000000002618760, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierBaseAttackTimeConstant"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierBaseAttackTimeConstant(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierBaseAttackTimeConstant", params);
}


// CDOTA_Modifier_Lua::GetModifierAttackPointConstant  (line 1534, @0x0000000002618780, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierAttackPointConstant"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierAttackPointConstant(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierAttackPointConstant", params);
}


// CDOTA_Modifier_Lua::GetModifierDamageOutgoing_Percentage  (line 1541, @0x00000000026187a0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierDamageOutgoing_Percentage"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierDamageOutgoing_Percentage(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierDamageOutgoing_Percentage", params);
}


// CDOTA_Modifier_Lua::GetModifierDamageOutgoing_Percentage_Illusion  (line 1548, @0x00000000026187c0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierDamageOutgoing_Percentage_Illusion"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierDamageOutgoing_Percentage_Illusion(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(
           this,
           "GetModifierDamageOutgoing_Percentage_Illusion",
           params);
}


// CDOTA_Modifier_Lua::GetModifierTotalDamageOutgoing_Percentage  (line 1555, @0x00000000026187e0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierTotalDamageOutgoing_Percentage"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierTotalDamageOutgoing_Percentage(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(
           this,
           "GetModifierTotalDamageOutgoing_Percentage",
           params);
}


// CDOTA_Modifier_Lua::GetModifierBaseDamageOutgoing_Percentage  (line 1562, @0x0000000002618800, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierBaseDamageOutgoing_Percentage"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierBaseDamageOutgoing_Percentage(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(
           this,
           "GetModifierBaseDamageOutgoing_Percentage",
           params);
}


// CDOTA_Modifier_Lua::GetModifierIncomingDamage_Percentage  (line 1569, @0x0000000002618820, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierIncomingDamage_Percentage"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierIncomingDamage_Percentage(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierIncomingDamage_Percentage", params);
}


// CDOTA_Modifier_Lua::GetModifierIncomingPhysicalDamage_Percentage  (line 1576, @0x0000000002618840, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierIncomingPhysicalDamage_Percentage"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierIncomingPhysicalDamage_Percentage(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(
           this,
           "GetModifierIncomingPhysicalDamage_Percentage",
           params);
}


// CDOTA_Modifier_Lua::GetModifierIncomingSpellDamageConstant  (line 1583, @0x0000000002618860, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierIncomingSpellDamageConstant"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierIncomingSpellDamageConstant(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierIncomingSpellDamageConstant", params);
}


// CDOTA_Modifier_Lua::GetModifierEvasion_Constant  (line 1590, @0x0000000002618880, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierEvasion_Constant"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierEvasion_Constant(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierEvasion_Constant", params);
}


// CDOTA_Modifier_Lua::GetModifierAvoidDamage  (line 1597, @0x00000000026188a0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierAvoidDamage"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierAvoidDamage(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierAvoidDamage", params);
}


// CDOTA_Modifier_Lua::GetModifierAvoidSpell  (line 1604, @0x00000000026188c0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierAvoidSpell"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierAvoidSpell(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierAvoidSpell", params);
}


// CDOTA_Modifier_Lua::GetModifierMiss_Percentage  (line 1611, @0x00000000026188e0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierMiss_Percentage"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierMiss_Percentage(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierMiss_Percentage", params);
}


// CDOTA_Modifier_Lua::GetModifierPhysicalArmorBonus  (line 1618, @0x0000000002618900, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierPhysicalArmorBonus"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierPhysicalArmorBonus", params);
}


// CDOTA_Modifier_Lua::GetModifierPhysicalArmorBonusIllusions  (line 1625, @0x0000000002618920, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierPhysicalArmorBonusIllusions"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierPhysicalArmorBonusIllusions(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierPhysicalArmorBonusIllusions", params);
}


// CDOTA_Modifier_Lua::GetModifierPhysicalArmorBonusUnique  (line 1632, @0x0000000002618940, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierPhysicalArmorBonusUnique"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierPhysicalArmorBonusUnique(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierPhysicalArmorBonusUnique", params);
}


// CDOTA_Modifier_Lua::GetModifierPhysicalArmorBonusUniqueActive  (line 1639, @0x0000000002618960, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierPhysicalArmorBonusUniqueActive"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierPhysicalArmorBonusUniqueActive(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(
           this,
           "GetModifierPhysicalArmorBonusUniqueActive",
           params);
}


// CDOTA_Modifier_Lua::GetModifierMagicalResistanceBonus  (line 1646, @0x0000000002618980, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierMagicalResistanceBonus"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierMagicalResistanceBonus(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierMagicalResistanceBonus", params);
}


// CDOTA_Modifier_Lua::GetModifierMagicalResistanceItemUnique  (line 1653, @0x00000000026189a0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierMagicalResistanceItemUnique"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierMagicalResistanceItemUnique(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierMagicalResistanceItemUnique", params);
}


// CDOTA_Modifier_Lua::GetModifierMagicalResistanceDecrepifyUnique  (line 1660, @0x00000000026189c0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierMagicalResistanceDecrepifyUnique"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierMagicalResistanceDecrepifyUnique(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(
           this,
           "GetModifierMagicalResistanceDecrepifyUnique",
           params);
}


// CDOTA_Modifier_Lua::GetModifierSpellAmplify_Percentage  (line 1667, @0x00000000026189e0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierSpellAmplify_Percentage"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierSpellAmplify_Percentage(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierSpellAmplify_Percentage", params);
}


// CDOTA_Modifier_Lua::GetModifierHealAmplify_Percentage  (line 1674, @0x0000000002618a00, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierHealAmplify_Percentage"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierHealAmplify_Percentage(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierHealAmplify_Percentage", params);
}


// CDOTA_Modifier_Lua::GetModifierBaseManaRegen  (line 1681, @0x0000000002618a20, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierBaseManaRegen"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierBaseManaRegen(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierBaseManaRegen", params);
}


// CDOTA_Modifier_Lua::GetModifierConstantManaRegen  (line 1688, @0x0000000002618a40, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierConstantManaRegen"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierConstantManaRegen(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierConstantManaRegen", params);
}


// CDOTA_Modifier_Lua::GetModifierConstantManaRegenUnique  (line 1695, @0x0000000002618a60, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierConstantManaRegenUnique"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierConstantManaRegenUnique(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierConstantManaRegenUnique", params);
}


// CDOTA_Modifier_Lua::GetModifierPercentageManaRegen  (line 1702, @0x0000000002618a80, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierPercentageManaRegen"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierPercentageManaRegen(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierPercentageManaRegen", params);
}


// CDOTA_Modifier_Lua::GetModifierTotalPercentageManaRegen  (line 1709, @0x0000000002618aa0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierTotalPercentageManaRegen"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierTotalPercentageManaRegen(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierTotalPercentageManaRegen", params);
}


// CDOTA_Modifier_Lua::GetModifierConstantHealthRegen  (line 1716, @0x0000000002618ac0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierConstantHealthRegen"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierConstantHealthRegen", params);
}


// CDOTA_Modifier_Lua::GetModifierHealthRegenPercentage  (line 1723, @0x0000000002618ae0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierHealthRegenPercentage"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierHealthRegenPercentage(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierHealthRegenPercentage", params);
}


// CDOTA_Modifier_Lua::GetModifierHealthBonus  (line 1730, @0x0000000002618b00, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierHealthBonus"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierHealthBonus(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierHealthBonus", params);
}


// CDOTA_Modifier_Lua::GetModifierManaBonus  (line 1737, @0x0000000002618b20, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierManaBonus"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierManaBonus(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierManaBonus", params);
}


// CDOTA_Modifier_Lua::GetModifierExtraStrengthBonus  (line 1744, @0x0000000002618b40, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierExtraStrengthBonus"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierExtraStrengthBonus(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierExtraStrengthBonus", params);
}


// CDOTA_Modifier_Lua::GetModifierExtraHealthBonus  (line 1751, @0x0000000002618b60, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierExtraHealthBonus"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierExtraHealthBonus(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierExtraHealthBonus", params);
}


// CDOTA_Modifier_Lua::GetModifierExtraManaBonus  (line 1758, @0x0000000002618b80, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierExtraManaBonus"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierExtraManaBonus(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierExtraManaBonus", params);
}


// CDOTA_Modifier_Lua::GetModifierExtraHealthPercentage  (line 1765, @0x0000000002618ba0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierExtraHealthPercentage"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierExtraHealthPercentage(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierExtraHealthPercentage", params);
}


// CDOTA_Modifier_Lua::GetModifierBonusStats_Strength  (line 1772, @0x0000000002618bc0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierBonusStats_Strength"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierBonusStats_Strength", params);
}


// CDOTA_Modifier_Lua::GetModifierBonusStats_Agility  (line 1779, @0x0000000002618be0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierBonusStats_Agility"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierBonusStats_Agility(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierBonusStats_Agility", params);
}


// CDOTA_Modifier_Lua::GetModifierBonusStats_Intellect  (line 1786, @0x0000000002618c00, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierBonusStats_Intellect"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierBonusStats_Intellect", params);
}


// CDOTA_Modifier_Lua::GetModifierCastRangeBonus  (line 1793, @0x0000000002618c20, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierCastRangeBonus"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierCastRangeBonus(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierCastRangeBonus", params);
}


// CDOTA_Modifier_Lua::GetModifierCastRangeBonusStacking  (line 1800, @0x0000000002618c40, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierCastRangeBonusStacking"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierCastRangeBonusStacking(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierCastRangeBonusStacking", params);
}


// CDOTA_Modifier_Lua::GetModifierAttackRangeBonus  (line 1807, @0x0000000002618c60, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierAttackRangeBonus"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierAttackRangeBonus(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierAttackRangeBonus", params);
}


// CDOTA_Modifier_Lua::GetModifierProjectileSpeedBonus  (line 1814, @0x0000000002618c80, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierProjectileSpeedBonus"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierProjectileSpeedBonus(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierProjectileSpeedBonus", params);
}


// CDOTA_Modifier_Lua::ReincarnateTime  (line 1821, @0x0000000002618ca0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "ReincarnateTime"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::ReincarnateTime(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "ReincarnateTime", params);
}


// CDOTA_Modifier_Lua::GetModifierConstantRespawnTime  (line 1828, @0x0000000002618cc0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierConstantRespawnTime"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierConstantRespawnTime(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierConstantRespawnTime", params);
}


// CDOTA_Modifier_Lua::GetModifierPercentageRespawnTime  (line 1835, @0x0000000002618ce0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierPercentageRespawnTime"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierPercentageRespawnTime(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierPercentageRespawnTime", params);
}


// CDOTA_Modifier_Lua::GetModifierStackingRespawnTime  (line 1842, @0x0000000002618d00, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierStackingRespawnTime"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierStackingRespawnTime(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierStackingRespawnTime", params);
}


// CDOTA_Modifier_Lua::GetModifierPercentageCooldown  (line 1849, @0x0000000002618d20, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierPercentageCooldown"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierPercentageCooldown(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierPercentageCooldown", params);
}


// CDOTA_Modifier_Lua::GetModifierPercentageCasttime  (line 1856, @0x0000000002618d40, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierPercentageCasttime"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierPercentageCasttime(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierPercentageCasttime", params);
}


// CDOTA_Modifier_Lua::GetModifierPercentageManacost  (line 1863, @0x0000000002618d60, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierPercentageManacost"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierPercentageManacost(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierPercentageManacost", params);
}


// CDOTA_Modifier_Lua::GetModifierConstantDeathGoldCost  (line 1870, @0x0000000002618d80, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierConstantDeathGoldCost"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierConstantDeathGoldCost(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierConstantDeathGoldCost", params);
}


// CDOTA_Modifier_Lua::GetModifierPercentageExpRateBoost  (line 1877, @0x0000000002618da0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierPercentageExpRateBoost"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierPercentageExpRateBoost(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierPercentageExpRateBoost", params);
}


// CDOTA_Modifier_Lua::GetModifierPreAttack_CriticalStrike  (line 1884, @0x0000000002618dc0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierPreAttack_CriticalStrike"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierPreAttack_CriticalStrike(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierPreAttack_CriticalStrike", params);
}


// CDOTA_Modifier_Lua::GetModifierPhysical_ConstantBlock  (line 1891, @0x0000000002618de0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierPhysical_ConstantBlock"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierPhysical_ConstantBlock(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierPhysical_ConstantBlock", params);
}


// CDOTA_Modifier_Lua::GetModifierPhysical_ConstantBlockUnavoidablePreArmor  (line 1898, @0x0000000002618e00, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierPhysical_ConstantBlockUnavoidablePreArmor"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierPhysical_ConstantBlockUnavoidablePreArmor(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(
           this,
           "GetModifierPhysical_ConstantBlockUnavoidablePreArmor",
           params);
}


// CDOTA_Modifier_Lua::GetModifierTotal_ConstantBlock  (line 1905, @0x0000000002618e20, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierTotal_ConstantBlock"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierTotal_ConstantBlock(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierTotal_ConstantBlock", params);
}


// CDOTA_Modifier_Lua::GetOverrideAnimation  (line 1912, @0x0000000002618e40, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetOverrideAnimation"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetOverrideAnimation(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetOverrideAnimation", params);
}


// CDOTA_Modifier_Lua::GetOverrideAnimationWeight  (line 1919, @0x0000000002618e60, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetOverrideAnimationWeight"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetOverrideAnimationWeight(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetOverrideAnimationWeight", params);
}


// CDOTA_Modifier_Lua::GetOverrideAnimationRate  (line 1926, @0x0000000002618e80, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetOverrideAnimationRate"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetOverrideAnimationRate(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetOverrideAnimationRate", params);
}


// CDOTA_Modifier_Lua::GetAbsorbSpell  (line 1933, @0x0000000002618ea0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetAbsorbSpell"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetAbsorbSpell(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetAbsorbSpell", params);
}


// CDOTA_Modifier_Lua::GetReflectSpell  (line 1940, @0x0000000002618ec0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetReflectSpell"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetReflectSpell(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetReflectSpell", params);
}


// CDOTA_Modifier_Lua::GetDisableAutoAttack  (line 1947, @0x0000000002618ee0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetDisableAutoAttack"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetDisableAutoAttack(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetDisableAutoAttack", params);
}


// CDOTA_Modifier_Lua::GetBonusDayVision  (line 1954, @0x0000000002618f00, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetBonusDayVision"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetBonusDayVision(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetBonusDayVision", params);
}


// CDOTA_Modifier_Lua::GetBonusNightVision  (line 1961, @0x0000000002618f20, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetBonusNightVision"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetBonusNightVision(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetBonusNightVision", params);
}


// CDOTA_Modifier_Lua::GetBonusVisionPercentage  (line 1968, @0x0000000002618f40, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetBonusVisionPercentage"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetBonusVisionPercentage(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetBonusVisionPercentage", params);
}


// CDOTA_Modifier_Lua::GetFixedDayVision  (line 1975, @0x0000000002618f60, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetFixedDayVision"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetFixedDayVision(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetFixedDayVision", params);
}


// CDOTA_Modifier_Lua::GetFixedNightVision  (line 1982, @0x0000000002618f80, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetFixedNightVision"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetFixedNightVision(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetFixedNightVision", params);
}


// CDOTA_Modifier_Lua::GetMinHealth  (line 1989, @0x0000000002618fa0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetMinHealth"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetMinHealth(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetMinHealth", params);
}


// CDOTA_Modifier_Lua::GetAbsoluteNoDamagePhysical  (line 1996, @0x0000000002618fc0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetAbsoluteNoDamagePhysical"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetAbsoluteNoDamagePhysical(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetAbsoluteNoDamagePhysical", params);
}


// CDOTA_Modifier_Lua::GetAbsoluteNoDamageMagical  (line 2003, @0x0000000002618fe0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetAbsoluteNoDamageMagical"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetAbsoluteNoDamageMagical(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetAbsoluteNoDamageMagical", params);
}


// CDOTA_Modifier_Lua::GetAbsoluteNoDamagePure  (line 2010, @0x0000000002619000, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetAbsoluteNoDamagePure"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetAbsoluteNoDamagePure(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetAbsoluteNoDamagePure", params);
}


// CDOTA_Modifier_Lua::GetIsIllusion  (line 2017, @0x0000000002619020, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetIsIllusion"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetIsIllusion(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetIsIllusion", params);
}


// CDOTA_Modifier_Lua::GetModifierIllusionLabel  (line 2024, @0x0000000002619040, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierIllusionLabel"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierIllusionLabel(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierIllusionLabel", params);
}


// CDOTA_Modifier_Lua::GetModifierTurnRate_Percentage  (line 2031, @0x0000000002619060, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierTurnRate_Percentage"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierTurnRate_Percentage(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierTurnRate_Percentage", params);
}


// CDOTA_Modifier_Lua::GetDisableHealing  (line 2038, @0x0000000002619080, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetDisableHealing"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetDisableHealing(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetDisableHealing", params);
}


// CDOTA_Modifier_Lua::GetOverrideAttackMagical  (line 2045, @0x00000000026190a0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetOverrideAttackMagical"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetOverrideAttackMagical(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetOverrideAttackMagical", params);
}


// CDOTA_Modifier_Lua::GetModifierUnitStatsNeedsRefresh  (line 2052, @0x00000000026190c0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierUnitStatsNeedsRefresh"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierUnitStatsNeedsRefresh(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierUnitStatsNeedsRefresh", params);
}


// CDOTA_Modifier_Lua::GetModifierBountyCreepMultiplier  (line 2059, @0x00000000026190e0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierBountyCreepMultiplier"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierBountyCreepMultiplier(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierBountyCreepMultiplier", params);
}


// CDOTA_Modifier_Lua::GetModifierBountyOtherMultiplier  (line 2066, @0x0000000002619100, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierBountyOtherMultiplier"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierBountyOtherMultiplier(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierBountyOtherMultiplier", params);
}


// CDOTA_Modifier_Lua::OnAttackRecord  (line 2073, @0x0000000002619120, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "OnAttackRecord"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnAttackRecord(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnAttackRecord", params);
}


// CDOTA_Modifier_Lua::OnAttackStart  (line 2080, @0x0000000002619140, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "OnAttackStart"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnAttackStart(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnAttackStart", params);
}


// CDOTA_Modifier_Lua::OnAttack  (line 2087, @0x0000000002619160, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnAttack(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnAttack", params);
}


// CDOTA_Modifier_Lua::OnAttackLanded  (line 2094, @0x0000000002619180, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "OnAttackLanded"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnAttackLanded(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnAttackLanded", params);
}


// CDOTA_Modifier_Lua::OnAttackFail  (line 2101, @0x00000000026191a0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "OnAttackFail"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnAttackFail(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnAttackFail", params);
}


// CDOTA_Modifier_Lua::OnAttackAllied  (line 2108, @0x00000000026191c0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "OnAttackAllied"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnAttackAllied(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnAttackAllied", params);
}


// CDOTA_Modifier_Lua::OnProjectileDodge  (line 2115, @0x00000000026191e0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "OnProjectileDodge"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnProjectileDodge(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnProjectileDodge", params);
}


// CDOTA_Modifier_Lua::OnOrder  (line 2122, @0x0000000002619200, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "OnOrder"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnOrder(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnOrder", params);
}


// CDOTA_Modifier_Lua::OnUnitMoved  (line 2129, @0x0000000002619220, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "OnUnitMoved"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnUnitMoved(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnUnitMoved", params);
}


// CDOTA_Modifier_Lua::OnAbilityStart  (line 2136, @0x0000000002619240, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "OnAbilityStart"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnAbilityStart(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnAbilityStart", params);
}


// CDOTA_Modifier_Lua::OnAbilityExecuted  (line 2143, @0x0000000002619260, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "OnAbilityExecuted"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnAbilityExecuted(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnAbilityExecuted", params);
}


// CDOTA_Modifier_Lua::OnAbilityFullyCast  (line 2150, @0x0000000002619280, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "OnAbilityFullyCast"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnAbilityFullyCast(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnAbilityFullyCast", params);
}


// CDOTA_Modifier_Lua::OnBreakInvisibility  (line 2157, @0x00000000026192a0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "OnBreakInvisibility"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnBreakInvisibility(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnBreakInvisibility", params);
}


// CDOTA_Modifier_Lua::OnAbilityEndChannel  (line 2164, @0x00000000026192c0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "OnAbilityEndChannel"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnAbilityEndChannel(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnAbilityEndChannel", params);
}


// CDOTA_Modifier_Lua::OnTakeDamage  (line 2171, @0x00000000026192e0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnTakeDamage(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnTakeDamage", params);
}


// CDOTA_Modifier_Lua::OnStateChanged  (line 2178, @0x0000000002619300, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "OnStateChanged"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnStateChanged(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnStateChanged", params);
}


// CDOTA_Modifier_Lua::OnAttacked  (line 2185, @0x0000000002619320, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "OnAttacked"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnAttacked(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnAttacked", params);
}


// CDOTA_Modifier_Lua::OnDeath  (line 2192, @0x0000000002619340, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnDeath(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnDeath", params);
}


// CDOTA_Modifier_Lua::OnRespawn  (line 2199, @0x0000000002619360, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnRespawn(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnRespawn", params);
}


// CDOTA_Modifier_Lua::OnSpentMana  (line 2206, @0x0000000002619380, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "OnSpentMana"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnSpentMana(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnSpentMana", params);
}


// CDOTA_Modifier_Lua::OnTeleporting  (line 2213, @0x00000000026193a0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "OnTeleporting"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnTeleporting(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnTeleporting", params);
}


// CDOTA_Modifier_Lua::OnTeleported  (line 2220, @0x00000000026193c0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "OnTeleported"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnTeleported(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnTeleported", params);
}


// CDOTA_Modifier_Lua::OnSetLocation  (line 2227, @0x00000000026193e0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "OnSetLocation"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnSetLocation(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnSetLocation", params);
}


// CDOTA_Modifier_Lua::OnHealthGained  (line 2234, @0x0000000002619400, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "OnHealthGained"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnHealthGained(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnHealthGained", params);
}


// CDOTA_Modifier_Lua::OnManaGained  (line 2241, @0x0000000002619420, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "OnManaGained"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnManaGained(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnManaGained", params);
}


// CDOTA_Modifier_Lua::OnTakeDamageKillCredit  (line 2248, @0x0000000002619440, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "OnTakeDamageKillCredit"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnTakeDamageKillCredit(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnTakeDamageKillCredit", params);
}


// CDOTA_Modifier_Lua::OnHeroKilled  (line 2255, @0x0000000002619460, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "OnHeroKilled"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnHeroKilled(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnHeroKilled", params);
}


// CDOTA_Modifier_Lua::OnHealReceived  (line 2262, @0x0000000002619480, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "OnHealReceived"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnHealReceived(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnHealReceived", params);
}


// CDOTA_Modifier_Lua::OnBuildingKilled  (line 2269, @0x00000000026194a0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "OnBuildingKilled"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnBuildingKilled(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnBuildingKilled", params);
}


// CDOTA_Modifier_Lua::OnModelChanged  (line 2276, @0x00000000026194c0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "OnModelChanged"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnModelChanged(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnModelChanged", params);
}


// CDOTA_Modifier_Lua::OnTooltip  (line 2283, @0x00000000026194e0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "OnTooltip"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnTooltip(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnTooltip", params);
}


// CDOTA_Modifier_Lua::GetModifierModelChange  (line 2290, @0x0000000002619500, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierModelChange"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierModelChange(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierModelChange", params);
}


// CDOTA_Modifier_Lua::GetModifierModelScale  (line 2297, @0x0000000002619520, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierModelScale"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierModelScale(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierModelScale", params);
}


// CDOTA_Modifier_Lua::GetModifierScepter  (line 2304, @0x0000000002619540, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierScepter"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierScepter(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierScepter", params);
}


// CDOTA_Modifier_Lua::GetActivityTranslationModifiers  (line 2311, @0x0000000002619560, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetActivityTranslationModifiers"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetActivityTranslationModifiers(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetActivityTranslationModifiers", params);
}


// CDOTA_Modifier_Lua::GetAttackSound  (line 2318, @0x0000000002619580, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetAttackSound"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetAttackSound(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetAttackSound", params);
}


// CDOTA_Modifier_Lua::GetUnitLifetimeFraction  (line 2325, @0x00000000026195a0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetUnitLifetimeFraction"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetUnitLifetimeFraction(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetUnitLifetimeFraction", params);
}


// CDOTA_Modifier_Lua::GetModifierProvidesFOWVision  (line 2332, @0x00000000026195c0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierProvidesFOWVision"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierProvidesFOWVision(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierProvidesFOWVision", params);
}


// CDOTA_Modifier_Lua::GetModifierSpellsRequireHP  (line 2339, @0x00000000026195e0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierSpellsRequireHP"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierSpellsRequireHP(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierSpellsRequireHP", params);
}


// CDOTA_Modifier_Lua::GetForceDrawOnMinimap  (line 2346, @0x0000000002619600, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetForceDrawOnMinimap"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetForceDrawOnMinimap(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetForceDrawOnMinimap", params);
}


// CDOTA_Modifier_Lua::GetModifierDisableTurning  (line 2353, @0x0000000002619620, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierDisableTurning"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierDisableTurning(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierDisableTurning", params);
}


// CDOTA_Modifier_Lua::GetModifierIgnoreCastAngle  (line 2360, @0x0000000002619640, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierIgnoreCastAngle"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierIgnoreCastAngle(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierIgnoreCastAngle", params);
}


// CDOTA_Modifier_Lua::GetModifierChangeAbilityValue  (line 2367, @0x0000000002619660, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierChangeAbilityValue"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierChangeAbilityValue(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierChangeAbilityValue", params);
}


// CDOTA_Modifier_Lua::GetModifierAbilityLayout  (line 2374, @0x0000000002619680, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierAbilityLayout"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierAbilityLayout(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierAbilityLayout", params);
}


// CDOTA_Modifier_Lua::OnDominated  (line 2381, @0x00000000026196a0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "OnDominated"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnDominated(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnDominated", params);
}


// CDOTA_Modifier_Lua::GetVisualZDelta  (line 2388, @0x00000000026196c0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetVisualZDelta"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetVisualZDelta(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetVisualZDelta", params);
}


// CDOTA_Modifier_Lua::GetModifierCanAttackTrees  (line 2395, @0x00000000026196e0, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "GetModifierCanAttackTrees"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::GetModifierCanAttackTrees(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "GetModifierCanAttackTrees", params);
}


// CDOTA_Modifier_Lua::OnAttackFinished  (line 2402, @0x0000000002619700, libserver.so)
// calls: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "OnAttackFinished"
ModifierVariant_t __fastcall CDOTA_Modifier_Lua::OnAttackFinished(
        CDOTA_Modifier_Lua *const this,
        const CModifierParams *const params)
{
  return CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction(this, "OnAttackFinished", params);
}


// CDOTA_Modifier_Lua_Horizontal_Motion::UpdateHorizontalMotion  (line 2409, @0x0000000002605040, libserver.so)  // inlines: CVariantBase, EntityToHScript, Free, Get, GetPublicScriptScope, ToHScript, operator=, ~CVariantBase
// calls: CEntityInstance::CreatePublicScriptScope, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CDOTA_Modifier_Lua_Horizontal_Motion::UpdateHorizontalMotion(
        CDOTA_Modifier_Lua_Horizontal_Motion *const this,
        CDOTA_BaseNPC *me,
        double a3,
        double dt)
{
  uint64 v5; // r14
  __int64 v7; // r13
  _BYTE *v8; // rdx
  CVariantBase<CVariantDefaultAllocator> *v9; // rax
  HSCRIPT m_hScope; // r14
  IScriptVM *m_pVM; // rdi
  ScriptVariant_t *v12; // r14
  unsigned int dta; // [rsp+14h] [rbp-7Ch]
  ScriptVariant_t result; // [rsp+20h] [rbp-70h] BYREF
  CVariantBase<CVariantDefaultAllocator> args[3]; // [rsp+30h] [rbp-60h] BYREF
  _BYTE v16[48]; // [rsp+60h] [rbp-30h] BYREF

  v5 = 0;
  dta = LODWORD(a3);
  if ( this != 0 )
    v5 = (*(this->_vptr_CDOTA_Buff + 87))(this, a3, *&dt);
  v7 = (*(*this->m_pVM + 144LL))(this->m_pVM, "UpdateHorizontalMotion", v5, 0, a3, dt);
  result.m_type = 0;
  result.m_flags = 0;
  result.m_uint64 = 0;
  if ( v7 != 0 )
  {
    v8 = v16;
    v9 = args;
    do
    {
      v9->m_uint64 = 0;
      v9->m_type = 0;
      ++v9;
      v9[-1].m_flags = 0;
    }
    while ( v9 != v16 );
    if ( (args[0].m_flags & 1) != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args[0].m_uint64);
      args[0].m_flags &= ~1u;
    }
    args[0].m_uint64 = v5;
    args[0].m_type = 31;
    if ( me != 0 )
    {
      m_hScope = me->m_pEntity->m_hPublicScope.m_hScope;
      if ( m_hScope == 0 )
      {
        CEntityInstance::CreatePublicScriptScope(me, 0);
        m_hScope = me->m_pEntity->m_hPublicScope.m_hScope;
      }
    }
    else
    {
      m_hScope = 0;
    }
    if ( (args[1].m_flags & 1) != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args[1].m_uint64);
      args[1].m_flags &= ~1u;
    }
    args[1].m_uint64 = m_hScope;
    args[1].m_type = 31;
    if ( (args[2].m_flags & 1) != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args[2].m_uint64, v8);
      args[2].m_flags &= ~1u;
    }
    m_pVM = this->m_pVM;
    args[2].m_type = 1;
    args[2].m_uint64 = dta;
    (*(*m_pVM + 160LL))(m_pVM, v7, args, 3, &result, 0, 1);
    v12 = &args[2];
    do
    {
      if ( (v12->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v12->m_uint64);
        v12->m_flags &= ~1u;
      }
      --v12;
      v12[1].m_uint64 = 0;
      v12[1].m_type = 0;
    }
    while ( v12 != &result );
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v7);
  if ( (result.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, result.m_uint64);
}


// CDOTA_Modifier_Lua_Horizontal_Motion::OnHorizontalMotionInterrupted  (line 2428, @0x0000000002604810, libserver.so)  // inlines: CVariantBase, Free, ToHScript, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "OnHorizontalMotionInterrupted"
void __fastcall CDOTA_Modifier_Lua_Horizontal_Motion::OnHorizontalMotionInterrupted(
        CDOTA_Modifier_Lua_Horizontal_Motion *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  ScriptVariant_t result; // [rsp+10h] [rbp-40h] BYREF
  ScriptVariant_t args; // [rsp+20h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "OnHorizontalMotionInterrupted", v1, 0);
  v4 = v3;
  result.m_type = 0;
  result.m_flags = 0;
  result.m_uint64 = 0;
  if ( v3 != 0 )
  {
    m_pVM = this->m_pVM;
    args.m_uint64 = v1;
    args.m_type = 31;
    args.m_flags = 0;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, &result, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
  if ( (result.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, result.m_uint64);
}


// CDOTA_Modifier_Lua_Vertical_Motion::UpdateVerticalMotion  (line 2444, @0x0000000002605300, libserver.so)  // inlines: CVariantBase, EntityToHScript, Free, Get, GetPublicScriptScope, ToHScript, operator=, ~CVariantBase
// calls: CEntityInstance::CreatePublicScriptScope, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CDOTA_Modifier_Lua_Vertical_Motion::UpdateVerticalMotion(
        CDOTA_Modifier_Lua_Vertical_Motion *const this,
        CDOTA_BaseNPC *me,
        double a3,
        double dt)
{
  uint64 v5; // r14
  __int64 v7; // r13
  _BYTE *v8; // rdx
  CVariantBase<CVariantDefaultAllocator> *v9; // rax
  HSCRIPT m_hScope; // r14
  IScriptVM *m_pVM; // rdi
  ScriptVariant_t *v12; // r14
  unsigned int dta; // [rsp+14h] [rbp-7Ch]
  ScriptVariant_t result; // [rsp+20h] [rbp-70h] BYREF
  CVariantBase<CVariantDefaultAllocator> args[3]; // [rsp+30h] [rbp-60h] BYREF
  _BYTE v16[48]; // [rsp+60h] [rbp-30h] BYREF

  v5 = 0;
  dta = LODWORD(a3);
  if ( this != 0 )
    v5 = (*(this->_vptr_CDOTA_Buff + 87))(this, a3, *&dt);
  v7 = (*(*this->m_pVM + 144LL))(this->m_pVM, "UpdateVerticalMotion", v5, 0, a3, dt);
  result.m_type = 0;
  result.m_flags = 0;
  result.m_uint64 = 0;
  if ( v7 != 0 )
  {
    v8 = v16;
    v9 = args;
    do
    {
      v9->m_uint64 = 0;
      v9->m_type = 0;
      ++v9;
      v9[-1].m_flags = 0;
    }
    while ( v9 != v16 );
    if ( (args[0].m_flags & 1) != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args[0].m_uint64);
      args[0].m_flags &= ~1u;
    }
    args[0].m_uint64 = v5;
    args[0].m_type = 31;
    if ( me != 0 )
    {
      m_hScope = me->m_pEntity->m_hPublicScope.m_hScope;
      if ( m_hScope == 0 )
      {
        CEntityInstance::CreatePublicScriptScope(me, 0);
        m_hScope = me->m_pEntity->m_hPublicScope.m_hScope;
      }
    }
    else
    {
      m_hScope = 0;
    }
    if ( (args[1].m_flags & 1) != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args[1].m_uint64);
      args[1].m_flags &= ~1u;
    }
    args[1].m_uint64 = m_hScope;
    args[1].m_type = 31;
    if ( (args[2].m_flags & 1) != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args[2].m_uint64, v8);
      args[2].m_flags &= ~1u;
    }
    m_pVM = this->m_pVM;
    args[2].m_type = 1;
    args[2].m_uint64 = dta;
    (*(*m_pVM + 160LL))(m_pVM, v7, args, 3, &result, 0, 1);
    v12 = &args[2];
    do
    {
      if ( (v12->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v12->m_uint64);
        v12->m_flags &= ~1u;
      }
      --v12;
      v12[1].m_uint64 = 0;
      v12[1].m_type = 0;
    }
    while ( v12 != &result );
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v7);
  if ( (result.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, result.m_uint64);
}


// CDOTA_Modifier_Lua_Vertical_Motion::OnVerticalMotionInterrupted  (line 2463, @0x0000000002604940, libserver.so)  // inlines: CVariantBase, Free, ToHScript, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "OnVerticalMotionInterrupted"
void __fastcall CDOTA_Modifier_Lua_Vertical_Motion::OnVerticalMotionInterrupted(
        CDOTA_Modifier_Lua_Vertical_Motion *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  ScriptVariant_t result; // [rsp+10h] [rbp-40h] BYREF
  ScriptVariant_t args; // [rsp+20h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "OnVerticalMotionInterrupted", v1, 0);
  v4 = v3;
  result.m_type = 0;
  result.m_flags = 0;
  result.m_uint64 = 0;
  if ( v3 != 0 )
  {
    args.m_uint64 = v1;
    args.m_flags = 0;
    m_pVM = this->m_pVM;
    args.m_type = 31;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, &result, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
  if ( (result.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, result.m_uint64);
}


// CDOTA_Modifier_Lua_Motion_Both::UpdateHorizontalMotion  (line 2479, @0x00000000026055c0, libserver.so)  // inlines: CVariantBase, EntityToHScript, Free, Get, GetPublicScriptScope, ToHScript, operator=, ~CVariantBase
// calls: CEntityInstance::CreatePublicScriptScope, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CDOTA_Modifier_Lua_Motion_Both::UpdateHorizontalMotion(
        CDOTA_Modifier_Lua_Motion_Both *const this,
        CDOTA_BaseNPC *me,
        double a3,
        double dt)
{
  uint64 v5; // r14
  __int64 v7; // r13
  _BYTE *v8; // rdx
  CVariantBase<CVariantDefaultAllocator> *v9; // rax
  HSCRIPT m_hScope; // r14
  IScriptVM *m_pVM; // rdi
  ScriptVariant_t *v12; // r14
  unsigned int dta; // [rsp+14h] [rbp-7Ch]
  ScriptVariant_t result; // [rsp+20h] [rbp-70h] BYREF
  CVariantBase<CVariantDefaultAllocator> args[3]; // [rsp+30h] [rbp-60h] BYREF
  _BYTE v16[48]; // [rsp+60h] [rbp-30h] BYREF

  v5 = 0;
  dta = LODWORD(a3);
  if ( this != 0 )
    v5 = (*(this->_vptr_CDOTA_Buff + 87))(this, a3, *&dt);
  v7 = (*(*this->m_pVM + 144LL))(this->m_pVM, "UpdateHorizontalMotion", v5, 0, a3, dt);
  result.m_type = 0;
  result.m_flags = 0;
  result.m_uint64 = 0;
  if ( v7 != 0 )
  {
    v8 = v16;
    v9 = args;
    do
    {
      v9->m_uint64 = 0;
      v9->m_type = 0;
      ++v9;
      v9[-1].m_flags = 0;
    }
    while ( v9 != v16 );
    if ( (args[0].m_flags & 1) != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args[0].m_uint64);
      args[0].m_flags &= ~1u;
    }
    args[0].m_uint64 = v5;
    args[0].m_type = 31;
    if ( me != 0 )
    {
      m_hScope = me->m_pEntity->m_hPublicScope.m_hScope;
      if ( m_hScope == 0 )
      {
        CEntityInstance::CreatePublicScriptScope(me, 0);
        m_hScope = me->m_pEntity->m_hPublicScope.m_hScope;
      }
    }
    else
    {
      m_hScope = 0;
    }
    if ( (args[1].m_flags & 1) != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args[1].m_uint64);
      args[1].m_flags &= ~1u;
    }
    args[1].m_uint64 = m_hScope;
    args[1].m_type = 31;
    if ( (args[2].m_flags & 1) != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args[2].m_uint64, v8);
      args[2].m_flags &= ~1u;
    }
    m_pVM = this->m_pVM;
    args[2].m_type = 1;
    args[2].m_uint64 = dta;
    (*(*m_pVM + 160LL))(m_pVM, v7, args, 3, &result, 0, 1);
    v12 = &args[2];
    do
    {
      if ( (v12->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v12->m_uint64);
        v12->m_flags &= ~1u;
      }
      --v12;
      v12[1].m_uint64 = 0;
      v12[1].m_type = 0;
    }
    while ( v12 != &result );
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v7);
  if ( (result.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, result.m_uint64);
}


// CDOTA_Modifier_Lua_Motion_Both::OnHorizontalMotionInterrupted  (line 2498, @0x0000000002604a70, libserver.so)  // inlines: CVariantBase, Free, ToHScript, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "OnHorizontalMotionInterrupted"
void __fastcall CDOTA_Modifier_Lua_Motion_Both::OnHorizontalMotionInterrupted(
        CDOTA_Modifier_Lua_Motion_Both *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  ScriptVariant_t result; // [rsp+10h] [rbp-40h] BYREF
  ScriptVariant_t args; // [rsp+20h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "OnHorizontalMotionInterrupted", v1, 0);
  result.m_type = 0;
  v4 = v3;
  result.m_uint64 = 0;
  result.m_flags = 0;
  if ( v3 != 0 )
  {
    m_pVM = this->m_pVM;
    args.m_uint64 = v1;
    args.m_type = 31;
    args.m_flags = 0;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, &result, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
  if ( (result.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, result.m_uint64);
}


// CDOTA_Modifier_Lua_Motion_Both::UpdateVerticalMotion  (line 2514, @0x0000000002605880, libserver.so)  // inlines: CVariantBase, EntityToHScript, Free, Get, GetPublicScriptScope, ToHScript, operator=, ~CVariantBase
// calls: CEntityInstance::CreatePublicScriptScope, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CDOTA_Modifier_Lua_Motion_Both::UpdateVerticalMotion(
        CDOTA_Modifier_Lua_Motion_Both *const this,
        CDOTA_BaseNPC *me,
        double a3,
        double dt)
{
  uint64 v5; // r14
  __int64 v7; // r13
  _BYTE *v8; // rdx
  CVariantBase<CVariantDefaultAllocator> *v9; // rax
  HSCRIPT m_hScope; // r14
  IScriptVM *m_pVM; // rdi
  ScriptVariant_t *v12; // r14
  unsigned int dta; // [rsp+14h] [rbp-7Ch]
  ScriptVariant_t result; // [rsp+20h] [rbp-70h] BYREF
  CVariantBase<CVariantDefaultAllocator> args[3]; // [rsp+30h] [rbp-60h] BYREF
  _BYTE v16[48]; // [rsp+60h] [rbp-30h] BYREF

  v5 = 0;
  dta = LODWORD(a3);
  if ( this != 0 )
    v5 = (*(this->_vptr_CDOTA_Buff + 87))(this, a3, *&dt);
  v7 = (*(*this->m_pVM + 144LL))(this->m_pVM, "UpdateVerticalMotion", v5, 0, a3, dt);
  result.m_type = 0;
  result.m_flags = 0;
  result.m_uint64 = 0;
  if ( v7 != 0 )
  {
    v8 = v16;
    v9 = args;
    do
    {
      v9->m_uint64 = 0;
      v9->m_type = 0;
      ++v9;
      v9[-1].m_flags = 0;
    }
    while ( v9 != v16 );
    if ( (args[0].m_flags & 1) != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args[0].m_uint64);
      args[0].m_flags &= ~1u;
    }
    args[0].m_uint64 = v5;
    args[0].m_type = 31;
    if ( me != 0 )
    {
      m_hScope = me->m_pEntity->m_hPublicScope.m_hScope;
      if ( m_hScope == 0 )
      {
        CEntityInstance::CreatePublicScriptScope(me, 0);
        m_hScope = me->m_pEntity->m_hPublicScope.m_hScope;
      }
    }
    else
    {
      m_hScope = 0;
    }
    if ( (args[1].m_flags & 1) != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args[1].m_uint64);
      args[1].m_flags &= ~1u;
    }
    args[1].m_uint64 = m_hScope;
    args[1].m_type = 31;
    if ( (args[2].m_flags & 1) != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args[2].m_uint64, v8);
      args[2].m_flags &= ~1u;
    }
    m_pVM = this->m_pVM;
    args[2].m_type = 1;
    args[2].m_uint64 = dta;
    (*(*m_pVM + 160LL))(m_pVM, v7, args, 3, &result, 0, 1);
    v12 = &args[2];
    do
    {
      if ( (v12->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v12->m_uint64);
        v12->m_flags &= ~1u;
      }
      --v12;
      v12[1].m_uint64 = 0;
      v12[1].m_type = 0;
    }
    while ( v12 != &result );
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v7);
  if ( (result.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, result.m_uint64);
}


// CDOTA_Modifier_Lua_Motion_Both::OnVerticalMotionInterrupted  (line 2533, @0x0000000002604ba0, libserver.so)  // inlines: CVariantBase, Free, ToHScript, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "OnVerticalMotionInterrupted"
void __fastcall CDOTA_Modifier_Lua_Motion_Both::OnVerticalMotionInterrupted(CDOTA_Modifier_Lua_Motion_Both *const this)
{
  uint64 v1; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  IScriptVM *m_pVM; // rdi
  ScriptVariant_t result; // [rsp+10h] [rbp-40h] BYREF
  ScriptVariant_t args; // [rsp+20h] [rbp-30h] BYREF

  v1 = 0;
  if ( this != 0 )
    v1 = (*(this->_vptr_CDOTA_Buff + 87))(this);
  v3 = (*(*this->m_pVM + 144LL))(this->m_pVM, "OnVerticalMotionInterrupted", v1, 0);
  result.m_uint64 = 0;
  v4 = v3;
  result.m_type = 0;
  result.m_flags = 0;
  if ( v3 != 0 )
  {
    m_pVM = this->m_pVM;
    args.m_uint64 = v1;
    args.m_type = 31;
    args.m_flags = 0;
    (*(*m_pVM + 160LL))(m_pVM, v3, &args, 1, &result, 0, 1);
    if ( (args.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args.m_uint64);
  }
  (*(*this->m_pVM + 152LL))(this->m_pVM, v4);
  if ( (result.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, result.m_uint64);
}


