
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// InterfaceReg::InterfaceReg  (line 16, @0x0000000002f73b10, libserver.so)
// callers: __static_initialization_and_destruction_0, _GLOBAL__sub_I__unity_base_05.cpp, _GLOBAL__sub_I__unity_dota_03.cpp, _GLOBAL__sub_I__unity_dota_04.cpp
// globals: s_pInterfaceRegs
void __fastcall InterfaceReg::InterfaceReg(InterfaceReg *const this, InstantiateInterfaceFn fn, const char *pName)
{
  InterfaceReg *v3; // rax

  this->m_CreateFn = fn;
  v3 = s_pInterfaceRegs;
  this->m_pName = pName;
  s_pInterfaceRegs = this;
  this->m_pNext = v3;
}


// CreateInterfaceInternal  (line 36, @0x0000000002f73a90, libserver.so)
// calls: strcmp
// callers: CreateInterface
// globals: s_pInterfaceRegs
void *__fastcall CreateInterfaceInternal(const char *pName, int *pReturnCode)
{
  InterfaceReg *v4; // rbx

  v4 = s_pInterfaceRegs;
  if ( s_pInterfaceRegs != 0 )
  {
    while ( strcmp(v4->m_pName, pName) != 0 )
    {
      v4 = v4->m_pNext;
      if ( v4 == 0 )
        goto LABEL_8;
    }
    if ( pReturnCode != 0 )
      *pReturnCode = 0;
    return v4->m_CreateFn();
  }
  else
  {
LABEL_8:
    if ( pReturnCode != 0 )
      *pReturnCode = 1;
    return 0;
  }
}


// CreateInterface  (line 59, @0x0000000002f73b30, libserver.so)
// calls: CreateInterfaceInternal
void *__fastcall CreateInterface(const char *pName, int *pReturnCode)
{
  return CreateInterfaceInternal(pName, pReturnCode);
}


// Sys_GetFactoryThis  (line 68, @0x0000000002f73b40, libserver.so)
// globals: CreateInterfaceInternal(char const*,int *)
CreateInterfaceFn __cdecl Sys_GetFactoryThis()
{
  return CreateInterfaceInternal;
}


