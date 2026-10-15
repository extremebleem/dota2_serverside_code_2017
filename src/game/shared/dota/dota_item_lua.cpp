// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_item_lua.cpp:12
class C_CDOTA_Item_Lua_MapInstall {
	C_CDOTA_Item_Lua_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Lua::YouForgotToImplementOrDeclareServerClass  (line 12, @0x00000000025937c0, libserver.so)
int __fastcall CDOTA_Item_Lua::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_Lua *const this)
{
  return 0;
}


// CDOTA_Item_Lua::GetServerClass  (line 12, @0x0000000002599610, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Lua::GetServerClass(CDOTA_Item_Lua *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CDOTA_Item_Lua::CDOTA_Item_Lua  (line 21, @0x00000000025a82b0, libserver.so)  // inlines: CUtlString
// calls: CDOTA_Item::CDOTA_Item
void __fastcall CDOTA_Item_Lua::CDOTA_Item_Lua(CDOTA_Item_Lua *const this)
{
  CDOTA_Item::CDOTA_Item(this);
  this->m_szAbilityTextureName.m_pString = 0;
  this->_vptr_IHandleEntity = &off_410FBB0;
  this->m_szIntrinsicModifierName.m_pString = 0;
  this->m_szAssociatedPrimaryAbilities.m_pString = 0;
  this->m_szAssociatedSecondaryAbilities.m_pString = 0;
  this->m_szCastError.m_pString = 0;
  this->m_szCastErrorTarget.m_pString = 0;
  this->m_szCastErrorLocation.m_pString = 0;
  this->m_pszScriptFile = 0;
}


// CDOTA_Item_Lua::~CDOTA_Item_Lua  (line 28, @0x0000000002593a00, libserver.so)  // inlines: ~CDOTA_Item, ~CUtlString
// calls: CUtlString::FreeMemoryBlock, CDOTABaseAbility::~CDOTABaseAbility
// callers: CDOTA_Item_Lua::~CDOTA_Item_Lua
void __fastcall CDOTA_Item_Lua::~CDOTA_Item_Lua(CDOTA_Item_Lua *const this)
{
  this->_vptr_IHandleEntity = &off_410FBB0;
  if ( this->m_szCastErrorLocation.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szCastErrorLocation);
  if ( this->m_szCastErrorTarget.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szCastErrorTarget);
  if ( this->m_szCastError.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szCastError);
  if ( this->m_szAssociatedSecondaryAbilities.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szAssociatedSecondaryAbilities);
  if ( this->m_szAssociatedPrimaryAbilities.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szAssociatedPrimaryAbilities);
  if ( this->m_szIntrinsicModifierName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szIntrinsicModifierName);
  if ( this->m_szAbilityTextureName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szAbilityTextureName);
  this->_vptr_IHandleEntity = &off_410B330;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Item_Lua::~CDOTA_Item_Lua  (line 28, @0x0000000002593ad0, libserver.so)
// calls: CDOTA_Item_Lua::~CDOTA_Item_Lua, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Lua::~CDOTA_Item_Lua(CDOTA_Item_Lua *const this)
{
  CDOTA_Item_Lua::~CDOTA_Item_Lua(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Lua::InitLuaScope  (line 33, @0x00000000025af4d0, libserver.so)  // inlines: CVariantBase, EntityToHScript, Get, GetAbilityData, GetAbilityKeyValues, GetAbilityName, GetPublicScriptScope, GetVM, ToHScript, operator=, ~CVariantBase
// calls: KeyValues::GetString, CVariantBase<CVariantDefaultAllocator>::Free, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CEntityInstance::CreatePublicScriptScope, CDOTABaseAbility::LoadAbilityData, _Unwind_Resume
// callers: CDOTA_Item_Lua::ReloadPrivateScripts, CDOTA_Item_Lua::Spawn
// strings: "<NoAbilityName>", "ExtendInstance", "Item script %s failed to find class named %s.\n", "Filename %s of item %s was not found!\n"
void __fastcall CDOTA_Item_Lua::InitLuaScope(CDOTA_Item_Lua *const this)
{
  IScriptVM *v2; // r12
  DOTAAbilityData_t *m_pAbilityData; // rax
  KeyValues *m_pKVData; // rdi
  const char *String; // rax
  __int64 v6; // r14
  const char *v7; // rdx
  DOTAAbilityData_t *v8; // rax
  const char *m_pszAbilityName; // rax
  __int64 v10; // r15
  HSCRIPT m_hScope; // rbx
  DOTAAbilityData_t *v12; // rax
  const char *v13; // r8
  const char *v14; // rax
  const char *m_pszScriptFile; // r13
  DOTAAbilityData_t *v16; // rax
  const char *v17; // r8
  const char *v18; // rax
  ScriptVariant_t hClass; // [rsp+10h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> args[2]; // [rsp+20h] [rbp-50h] BYREF

  if ( this->m_pEntity->m_hPublicScope.m_hScope == 0 )
    CEntityInstance::CreatePublicScriptScope(this, 0);
  v2 = g_pScriptVM;
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData != 0
    || (CDOTABaseAbility::LoadAbilityData(this, 0),
        m_pAbilityData = this->m_pAbilityData,
        m_pKVData = 0,
        m_pAbilityData != 0) )
  {
    m_pKVData = m_pAbilityData->m_pKVData;
  }
  String = KeyValues::GetString(m_pKVData, "ScriptFile", 0, 0, 0);
  this->m_pszScriptFile = String;
  v6 = (*(g_pVScriptGameSystem->_vptr_IVScriptGameSystem + 9))(g_pVScriptGameSystem, String);
  if ( v6 != 0 )
  {
    hClass.m_uint64 = 0;
    hClass.m_type = 0;
    v7 = "<NoAbilityName>";
    hClass.m_flags = 0;
    v8 = this->m_pAbilityData;
    if ( v8 != 0 )
    {
      m_pszAbilityName = v8->m_pszAbilityName;
      if ( m_pszAbilityName != 0 )
        v7 = m_pszAbilityName;
    }
    (*(*v2 + 312LL))(v2, v6, v7, &hClass);
    if ( hClass.m_type != 0 )
    {
      v10 = (*(*v2 + 144LL))(v2, "ExtendInstance", v6, 0);
      if ( v10 != 0 )
      {
        args[0].m_type = 0;
        args[0].m_flags = 0;
        args[0].m_uint64 = 0;
        args[1].m_type = 0;
        args[1].m_flags = 0;
        args[1].m_uint64 = 0;
        if ( this != 0 )
        {
          if ( this->m_pEntity->m_hPublicScope.m_hScope == 0 )
            CEntityInstance::CreatePublicScriptScope(this, 0);
          m_hScope = this->m_pEntity->m_hPublicScope.m_hScope;
        }
        else
        {
          m_hScope = 0;
        }
        CVariantBase<CVariantDefaultAllocator>::Free(args);
        args[0].m_uint64 = m_hScope;
        args[0].m_type = 31;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&hClass, &args[1]);
        (*(*v2 + 160LL))(v2, v10, args, 2, 0, 0, 1);
        CVariantBase<CVariantDefaultAllocator>::Free(&args[1]);
        CVariantBase<CVariantDefaultAllocator>::Free(args);
      }
      (*(*v2 + 344LL))(v2, &hClass);
      CVariantBase<CVariantDefaultAllocator>::Free(&hClass);
    }
    else
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
      {
        v12 = this->m_pAbilityData;
        v13 = "<NoAbilityName>";
        if ( v12 != 0 )
        {
          v14 = v12->m_pszAbilityName;
          if ( v14 != 0 )
            v13 = v14;
        }
        LoggingSystem_Log(LOG_SERVER, 2, "Item script %s failed to find class named %s.\n", this->m_pszScriptFile, v13);
      }
      CVariantBase<CVariantDefaultAllocator>::Free(&hClass);
    }
  }
  else
  {
    m_pszScriptFile = this->m_pszScriptFile;
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
    {
      v16 = this->m_pAbilityData;
      v17 = "<NoAbilityName>";
      if ( v16 != 0 )
      {
        v18 = v16->m_pszAbilityName;
        if ( v18 != 0 )
          v17 = v18;
      }
      LoggingSystem_Log(LOG_SERVER, 2, "Filename %s of item %s was not found!\n", m_pszScriptFile, v17);
    }
  }
}


// CDOTA_Item_Lua::ReloadPrivateScripts  (line 72, @0x00000000025af800, libserver.so)
// calls: CEntityInstance::ReloadPrivateScripts, CDOTA_Item_Lua::InitLuaScope
void __fastcall CDOTA_Item_Lua::ReloadPrivateScripts(CDOTA_Item_Lua *const this)
{
  CEntityInstance::ReloadPrivateScripts(this);
  CDOTA_Item_Lua::InitLuaScope(this);
}


// CDOTA_Item_Lua::Spawn  (line 124, @0x00000000025af820, libserver.so)  // inlines: Call, GetPublicScriptScope, GetVM
// calls: CDOTA_Item_Lua::InitLuaScope, CDOTA_Item::Spawn
void __fastcall CDOTA_Item_Lua::Spawn(CDOTA_Item_Lua *const this, const CEntityKeyValues *pKeyValues)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v5; // rax
  __int64 v6; // r12

  CDOTA_Item_Lua::InitLuaScope(this);
  CDOTA_Item::Spawn(this, pKeyValues);
  m_pEntity = this->m_pEntity;
  v5 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "Spawn", m_pEntity->m_hPublicScope.m_hScope, 0);
  v6 = v5;
  if ( v5 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v5, 0, 0, 0, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v6);
  }
}


// CDOTA_Item_Lua::OnToggle  (line 134, @0x00000000025988b0, libserver.so)  // inlines: Call, GetPublicScriptScope, GetVM
// calls: CDOTABaseAbility::OnToggle
void __fastcall CDOTA_Item_Lua::OnToggle(CDOTA_Item_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v3; // rax
  __int64 v4; // r12

  CDOTABaseAbility::OnToggle(this);
  m_pEntity = this->m_pEntity;
  v3 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "OnToggle", m_pEntity->m_hPublicScope.m_hScope, 0);
  v4 = v3;
  if ( v3 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v3, 0, 0, 0, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v4);
  }
}


// CDOTA_Item_Lua::OnSpellStart  (line 142, @0x00000000025985e0, libserver.so)  // inlines: Call, GetPublicScriptScope, GetVM
void __fastcall CDOTA_Item_Lua::OnSpellStart(CDOTA_Item_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v2; // rax
  __int64 v3; // r12

  m_pEntity = this->m_pEntity;
  v2 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "OnSpellStart", m_pEntity->m_hPublicScope.m_hScope, 0);
  v3 = v2;
  if ( v2 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v2, 0, 0, 0, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v3);
  }
}


// CDOTA_Item_Lua::OnAbilityPhaseStart  (line 149, @0x00000000025aa670, libserver.so)  // inlines: CVariantBase, Call, Free, GetPublicScriptScope, GetVM, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
bool __fastcall CDOTA_Item_Lua::OnAbilityPhaseStart(CDOTA_Item_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v2; // rax
  __int64 v3; // rbx
  bool result; // al
  char m_char; // [rsp+Ch] [rbp-34h]
  ScriptVariant_t v6; // [rsp+10h] [rbp-30h] BYREF

  v6.m_type = 0;
  v6.m_flags = 0;
  m_pEntity = this->m_pEntity;
  v6.m_uint64 = 0;
  v2 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "OnAbilityPhaseStart", m_pEntity->m_hPublicScope.m_hScope, 0);
  v3 = v2;
  if ( v2 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v2, 0, 0, &v6, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v3);
  }
  result = v6.m_char;
  if ( (v6.m_flags & 1) != 0 )
  {
    m_char = v6.m_char;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v6.m_uint64);
    return m_char;
  }
  return result;
}


// CDOTA_Item_Lua::OnAbilityPhaseInterrupted  (line 158, @0x0000000002598700, libserver.so)  // inlines: Call, GetPublicScriptScope, GetVM
// strings: "OnAbilityPhaseInterrupted"
void __fastcall CDOTA_Item_Lua::OnAbilityPhaseInterrupted(CDOTA_Item_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v2; // rax
  __int64 v3; // r12

  m_pEntity = this->m_pEntity;
  v2 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "OnAbilityPhaseInterrupted", m_pEntity->m_hPublicScope.m_hScope, 0);
  v3 = v2;
  if ( v2 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v2, 0, 0, 0, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v3);
  }
}


// CDOTA_Item_Lua::OnChannelThink  (line 165, @0x00000000025ab2f0, libserver.so)  // inlines: CVariantBase, Call<float>, Free, GetPublicScriptScope, GetVM, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CDOTA_Item_Lua::OnChannelThink(CDOTA_Item_Lua *const this, double a2, float flInterval)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v4; // rax
  __int64 v5; // rbx
  ScriptVariant_t result; // [rsp+10h] [rbp-50h] BYREF
  __int64 v7; // [rsp+20h] [rbp-40h] BYREF
  __int16 v8; // [rsp+28h] [rbp-38h]
  __int16 v9; // [rsp+2Ah] [rbp-36h]

  result.m_type = 0;
  v9 = 0;
  m_pEntity = this->m_pEntity;
  v8 = 1;
  result.m_flags = 0;
  result.m_uint64 = 0;
  v7 = LODWORD(a2);
  v4 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "OnChannelThink", m_pEntity->m_hPublicScope.m_hScope, 0, a2, flInterval);
  v5 = v4;
  if ( v4 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v4, &v7, 1, &result, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v5);
  }
  if ( (v9 & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v7);
  if ( (result.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, result.m_uint64);
}


// CDOTA_Item_Lua::OnChannelFinish  (line 173, @0x00000000025ab400, libserver.so)  // inlines: CVariantBase, Call<bool>, Free, GetPublicScriptScope, GetVM, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CDOTA_Item_Lua::OnChannelFinish(CDOTA_Item_Lua *const this, bool bInterrupted)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v3; // rax
  __int64 v4; // rbx
  ScriptVariant_t result; // [rsp+10h] [rbp-50h] BYREF
  _BOOL8 v6; // [rsp+20h] [rbp-40h] BYREF
  __int16 v7; // [rsp+28h] [rbp-38h]
  __int16 v8; // [rsp+2Ah] [rbp-36h]

  v6 = bInterrupted;
  m_pEntity = this->m_pEntity;
  result.m_type = 0;
  result.m_flags = 0;
  result.m_uint64 = 0;
  v8 = 0;
  v7 = 6;
  v3 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "OnChannelFinish", m_pEntity->m_hPublicScope.m_hScope, 0);
  v4 = v3;
  if ( v3 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v3, &v6, 1, &result, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v4);
  }
  if ( (v8 & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v6);
  if ( (result.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, result.m_uint64);
}


// CDOTA_Item_Lua::OnProjectileHit  (line 181, @0x00000000025ad9b0, libserver.so)  // inlines: CVariantBase, Call<HSCRIPT__*, Vector>, CopyData<Vector>, EntityToHScript, Free, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPublicScriptScope, GetVM, IndexToIdentity, IsValid, LookupEntity, ToHScript, operator CEntityInstance*, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume, CEntityInstance::CreatePublicScriptScope
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Item_Lua::OnProjectileHit(
        CDOTA_Item_Lua *const this,
        unsigned __int16 *hTarget,
        const Vector *const vLocation)
{
  int v5; // eax
  CEntityIdentity *v6; // rdx
  uint64 m_hScope; // r13
  CEntityIdentity *v8; // rdx
  __int64 v9; // rax
  CEntityIdentity *m_pEntity; // r15
  HSCRIPT v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r13
  CVariantBase<CVariantDefaultAllocator> *v14; // rbx
  unsigned int m_char; // r12d
  CEntityInstance *m_pInstance; // r14
  __int64 v18; // [rsp+10h] [rbp-70h] BYREF
  vec_t z; // [rsp+18h] [rbp-68h]
  ScriptVariant_t v20; // [rsp+20h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v21; // [rsp+30h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v22[4]; // [rsp+40h] [rbp-40h] BYREF

  v20.m_type = 0;
  v20.m_flags = 0;
  v5 = *hTarget;
  v20.m_uint64 = 0;
  if ( (v5 + 2) > 1 && (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F]) != 0 )
  {
    m_hScope = 0;
    v8 = &v6[*hTarget & 0x1FF];
    if ( v8 != 0 && v5 == v8->m_EHandle.m_Index )
    {
      m_pInstance = v8->m_pInstance;
      if ( v8->m_pInstance != 0 )
      {
        m_hScope = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
        if ( m_hScope == 0 )
        {
          CEntityInstance::CreatePublicScriptScope(v8->m_pInstance, 0);
          m_hScope = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
        }
      }
    }
  }
  else
  {
    m_hScope = 0;
  }
  v9 = *&vLocation->x;
  v21.m_uint64 = 0;
  m_pEntity = this->m_pEntity;
  v22[0].m_uint64 = 0;
  v18 = v9;
  z = vLocation->z;
  v21.m_type = 0;
  v21.m_flags = 0;
  v22[0].m_type = 0;
  v22[0].m_flags = 0;
  CVariantBase<CVariantDefaultAllocator>::Free(&v21);
  v21.m_uint64 = m_hScope;
  v21.m_type = 31;
  CVariantBase<CVariantDefaultAllocator>::Free(v22);
  v22[0].m_uint64 = &v18;
  v11 = m_pEntity->m_hPublicScope.m_hScope;
  v22[0].m_type = 3;
  v12 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "OnProjectileHit", v11, 0);
  v13 = v12;
  if ( v12 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v12, &v21, 2, &v20, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v13);
  }
  v14 = v22;
  do
  {
    if ( (v14->m_flags & 1) != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v14->m_uint64);
      v14->m_flags &= ~1u;
    }
    --v14;
    v14[1].m_uint64 = 0;
    v14[1].m_type = 0;
  }
  while ( v14 != &v20 );
  m_char = v20.m_char;
  CVariantBase<CVariantDefaultAllocator>::Free(v14);
  return m_char;
}


// CDOTA_Item_Lua::OnProjectileThink  (line 190, @0x00000000025ae150, libserver.so)  // inlines: CVariantBase, Call<Vector>, CopyData<Vector>, Free, GetPublicScriptScope, GetVM, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CDOTA_Item_Lua::OnProjectileThink(CDOTA_Item_Lua *const this, const Vector *const vLocation)
{
  __int64 v2; // rax
  CEntityIdentity *m_pEntity; // r13
  HSCRIPT m_hScope; // rdx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // [rsp+10h] [rbp-60h] BYREF
  vec_t z; // [rsp+18h] [rbp-58h]
  ScriptVariant_t result; // [rsp+20h] [rbp-50h] BYREF
  __int64 *v10; // [rsp+30h] [rbp-40h] BYREF
  __int16 v11; // [rsp+38h] [rbp-38h]
  __int16 v12; // [rsp+3Ah] [rbp-36h]

  result.m_type = 0;
  v2 = *&vLocation->x;
  result.m_flags = 0;
  m_pEntity = this->m_pEntity;
  result.m_uint64 = 0;
  v7 = v2;
  m_hScope = m_pEntity->m_hPublicScope.m_hScope;
  z = vLocation->z;
  v12 = 0;
  v11 = 3;
  v10 = &v7;
  v5 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "OnProjectileThink", m_hScope, 0);
  v6 = v5;
  if ( v5 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v5, &v10, 1, &result, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v6);
  }
  if ( (v12 & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v10);
  if ( (result.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, result.m_uint64);
}


// CDOTA_Item_Lua::OnOwnerSpawned  (line 198, @0x00000000025983a0, libserver.so)  // inlines: Call, GetPublicScriptScope, GetVM
void __fastcall CDOTA_Item_Lua::OnOwnerSpawned(CDOTA_Item_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v2; // rax
  __int64 v3; // r12

  m_pEntity = this->m_pEntity;
  v2 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "OnOwnerSpawned", m_pEntity->m_hPublicScope.m_hScope, 0);
  v3 = v2;
  if ( v2 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v2, 0, 0, 0, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v3);
  }
}


// CDOTA_Item_Lua::OnOwnerDied  (line 205, @0x0000000002598790, libserver.so)  // inlines: Call, GetPublicScriptScope, GetVM
void __fastcall CDOTA_Item_Lua::OnOwnerDied(CDOTA_Item_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v2; // rax
  __int64 v3; // r12

  m_pEntity = this->m_pEntity;
  v2 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "OnOwnerDied", m_pEntity->m_hPublicScope.m_hScope, 0);
  v3 = v2;
  if ( v2 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v2, 0, 0, 0, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v3);
  }
}


// CDOTA_Item_Lua::OnUpgrade  (line 212, @0x00000000025984c0, libserver.so)  // inlines: Call, GetPublicScriptScope, GetVM
void __fastcall CDOTA_Item_Lua::OnUpgrade(CDOTA_Item_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v2; // rax
  __int64 v3; // r12

  m_pEntity = this->m_pEntity;
  v2 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "OnUpgrade", m_pEntity->m_hPublicScope.m_hScope, 0);
  v3 = v2;
  if ( v2 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v2, 0, 0, 0, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v3);
  }
}


// CDOTA_Item_Lua::GetIntrinsicModifierName  (line 219, @0x00000000025acce0, libserver.so)  // inlines: CVariantBase, Call, Free, GetPublicScriptScope, GetVM, TempString, ~CVariantBase
// calls: CUtlString::Set, CUtlString::Get, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "GetIntrinsicModifierName"
const char *__fastcall CDOTA_Item_Lua::GetIntrinsicModifierName(CDOTA_Item_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r14
  __int64 v3; // rax
  __int64 v4; // r12
  const char *result; // rax
  CUtlString *p_m_szIntrinsicModifierName; // r15
  const char *v7; // [rsp+8h] [rbp-48h]
  ScriptVariant_t v8; // [rsp+10h] [rbp-40h] BYREF

  v8.m_type = 0;
  v8.m_flags = 0;
  m_pEntity = this->m_pEntity;
  v8.m_uint64 = 0;
  v3 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "GetIntrinsicModifierName", m_pEntity->m_hPublicScope.m_hScope, 0);
  v4 = v3;
  if ( v3 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v3, 0, 0, &v8, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v4);
  }
  if ( v8.m_type == 30 && *v8.m_pszString != 0 )
  {
    p_m_szIntrinsicModifierName = &this->m_szIntrinsicModifierName;
    CUtlString::Set(p_m_szIntrinsicModifierName, v8.m_pszString);
    result = CUtlString::Get(p_m_szIntrinsicModifierName);
  }
  else
  {
    result = 0;
  }
  if ( (v8.m_flags & 1) != 0 )
  {
    v7 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8.m_uint64);
    return v7;
  }
  return result;
}


// CDOTA_Item_Lua::OnHeroLevelUp  (line 236, @0x0000000002598430, libserver.so)  // inlines: Call, GetPublicScriptScope, GetVM
void __fastcall CDOTA_Item_Lua::OnHeroLevelUp(CDOTA_Item_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v2; // rax
  __int64 v3; // r12

  m_pEntity = this->m_pEntity;
  v2 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "OnHeroLevelUp", m_pEntity->m_hPublicScope.m_hScope, 0);
  v3 = v2;
  if ( v2 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v2, 0, 0, 0, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v3);
  }
}


// CDOTA_Item_Lua::OnHeroDiedNearby  (line 243, @0x00000000025af8c0, libserver.so)  // inlines: CVariantBase, Call<CVariantBase<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator> >, CreateTableFromKeyValues, EntityToHScript, Get, GetPublicScriptScope, GetVM, LookupFunction, ReleaseFunction, ReleaseValue, ToHScript, operator=, ~CVariantBase
// calls: KeyValues::GetPtr, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>::Free, Recursive_ConvertKeyValuesToTable, CEntityInstance::CreatePublicScriptScope, _Unwind_Resume
void __fastcall CDOTA_Item_Lua::OnHeroDiedNearby(CDOTA_Item_Lua *const this, KeyValues *pKV)
{
  CEntityInstance *Ptr; // rax
  uint64 m_hScope; // rdx
  CEntityInstance *v6; // rax
  CEntityInstance *v7; // r14
  uint64 v8; // rax
  IScriptVM *v9; // r14
  CEntityIdentity *m_pEntity; // r14
  CVariantBase<CVariantDefaultAllocator> *v11; // rax
  __int64 v12; // rax
  HSCRIPT v13; // r9
  __int64 v14; // r14
  HSCRIPT hFunction; // [rsp+10h] [rbp-100h]
  CVariantBase<CVariantDefaultAllocator> *v16; // [rsp+38h] [rbp-D8h]
  ScriptVariant_t vUnit; // [rsp+40h] [rbp-D0h] BYREF
  ScriptVariant_t vAttacker; // [rsp+50h] [rbp-C0h] BYREF
  ScriptVariant_t vKV; // [rsp+60h] [rbp-B0h] BYREF
  ScriptVariant_t result; // [rsp+70h] [rbp-A0h] BYREF
  CVariantBase<CVariantDefaultAllocator> v21; // [rsp+80h] [rbp-90h] BYREF
  CVariantBase<CVariantDefaultAllocator> v22; // [rsp+90h] [rbp-80h] BYREF
  CVariantBase<CVariantDefaultAllocator> pDest; // [rsp+A0h] [rbp-70h] BYREF
  CVariantBase<CVariantDefaultAllocator> v24; // [rsp+B0h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v25; // [rsp+C0h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v26; // [rsp+D0h] [rbp-40h] BYREF
  char v27; // [rsp+E0h] [rbp-30h] BYREF

  hFunction = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "OnHeroDiedNearby", this->m_pEntity->m_hPublicScope.m_hScope, 0);
  if ( hFunction != 0 )
  {
    Ptr = KeyValues::GetPtr(pKV, "unit", 0);
    m_hScope = 0;
    if ( Ptr != 0 )
    {
      m_hScope = Ptr->m_pEntity->m_hPublicScope.m_hScope;
      if ( m_hScope == 0 )
      {
        v16 = Ptr;
        CEntityInstance::CreatePublicScriptScope(Ptr, 0);
        m_hScope = *(*&v16->m_type + 40LL);
      }
    }
    vUnit.m_uint64 = m_hScope;
    vUnit.m_type = 31;
    vUnit.m_flags = 0;
    v6 = KeyValues::GetPtr(pKV, "attacker", 0);
    v7 = v6;
    if ( v6 != 0 )
    {
      v8 = v6->m_pEntity->m_hPublicScope.m_hScope;
      if ( v8 == 0 )
      {
        CEntityInstance::CreatePublicScriptScope(v7, 0);
        v8 = v7->m_pEntity->m_hPublicScope.m_hScope;
      }
    }
    else
    {
      v8 = 0;
    }
    v9 = g_pScriptVM;
    vKV.m_type = 0;
    vKV.m_flags = 0;
    vAttacker.m_type = 31;
    vAttacker.m_flags = 0;
    vAttacker.m_uint64 = v8;
    vKV.m_uint64 = 0;
    (*(*g_pScriptVM + 264LL))(g_pScriptVM, &vKV);
    if ( pKV != 0 && vKV.m_uint64 != 0 )
      Recursive_ConvertKeyValuesToTable(pKV, v9, vKV.m_hScript);
    pDest.m_flags = 0;
    pDest.m_type = 0;
    result.m_flags = 0;
    result.m_type = 0;
    result.m_uint64 = 0;
    CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&vKV, &pDest);
    v22.m_type = 0;
    v22.m_flags = 0;
    CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&vAttacker, &v22);
    v21.m_type = 0;
    v21.m_flags = 0;
    CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&vUnit, &v21);
    m_pEntity = this->m_pEntity;
    v11 = &v24;
    do
    {
      v11->m_uint64 = 0;
      v11->m_type = 0;
      ++v11;
      v11[-1].m_flags = 0;
    }
    while ( v11 != &v27 );
    CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &v24);
    CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v22, &v25);
    CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&pDest, &v26);
    v12 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "OnHeroDiedNearby", m_pEntity->m_hPublicScope.m_hScope, 0);
    if ( v12 != 0 )
    {
      v13 = m_pEntity->m_hPublicScope.m_hScope;
      v14 = v12;
      (*(*g_pScriptVM + 160LL))(g_pScriptVM, v12, &v24, 3, &result, v13, 1);
      (*(*g_pScriptVM + 152LL))(g_pScriptVM, v14);
    }
    CVariantBase<CVariantDefaultAllocator>::Free(&v26);
    CVariantBase<CVariantDefaultAllocator>::Free(&v25);
    CVariantBase<CVariantDefaultAllocator>::Free(&v24);
    CVariantBase<CVariantDefaultAllocator>::Free(&v21);
    CVariantBase<CVariantDefaultAllocator>::Free(&v22);
    CVariantBase<CVariantDefaultAllocator>::Free(&pDest);
    (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vKV);
    CVariantBase<CVariantDefaultAllocator>::Free(&result);
    CVariantBase<CVariantDefaultAllocator>::Free(&vKV);
    CVariantBase<CVariantDefaultAllocator>::Free(&vAttacker);
    CVariantBase<CVariantDefaultAllocator>::Free(&vUnit);
  }
  (*(*g_pScriptVM + 152LL))(g_pScriptVM, hFunction);
}


// CDOTA_Item_Lua::Script_OnHeroDiedNearby  (line 261, @0x00000000025acdf0, libserver.so)  // inlines: AssignTo, CVariantBase, Float, GetVM, TempString, ToString, operator float, ~CVariantBase
// calls: KeyValues::KeyValues, KeyValues::SetString, V_snprintf, VariantFieldTypeName, Warning, KeyValues::SetFloat, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "ability_lua", "%g %g %g %g", "No conversion from %s to string at the moment!\n", "false", "true", "%d %d %d %d"
// globals: jpt_25ACF43, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, jpt_25AD20B
void __fastcall CDOTA_Item_Lua::Script_OnHeroDiedNearby(
        CDOTA_Item_Lua *const this,
        HSCRIPT unit,
        HSCRIPT attacker,
        HSCRIPT table)
{
  int v5; // ebx
  unsigned int v6; // r14d
  float v7; // xmm1_4
  const char *v8; // rsi
  const char *v9; // rax
  const char *v10; // rcx
  double m_float64; // xmm0_8
  const char *m_uint64; // rsi
  const char *v13; // rax
  const char *v14; // rax
  double m_float; // xmm0_8
  const char *v16; // rcx
  char *value; // [rsp+18h] [rbp-88h]
  int v18; // [rsp+24h] [rbp-7Ch]
  ScriptVariant_t vKey; // [rsp+30h] [rbp-70h] BYREF
  ScriptVariant_t vValue; // [rsp+40h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v23; // [rsp+68h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "ability_lua");
  vKey.m_type = 0;
  vValue.m_type = 0;
  vKey.m_flags = 0;
  vKey.m_uint64 = 0;
  vValue.m_flags = 0;
  vValue.m_uint64 = 0;
  v18 = (*(*g_pScriptVM + 280LL))(g_pScriptVM, table);
  if ( v18 > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v6 = (*(*g_pScriptVM + 296LL))(g_pScriptVM, table, v6, &vKey, &vValue);
      if ( vValue.m_type == 30 )
      {
        value = vValue.m_uint64;
      }
      else
      {
        if ( vValue.m_type != 2 )
        {
          if ( vValue.m_type == 34 )
          {
            if ( vKey.m_type == 30 )
            {
              m_uint64 = vKey.m_uint64;
            }
            else
            {
              switch ( vKey.m_type )
              {
                case 0:
                  goto LABEL_40;
                case 1:
                  m_float = vKey.m_float;
                  goto LABEL_42;
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
                  v16 = "true";
                  if ( vKey.m_char == 0 )
                    v16 = "false";
                  V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v16);
                  break;
                case 8:
                  V_snprintf(
                    &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                    512,
                    "%c",
                    vKey.m_char);
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
                  m_float = vKey.m_float64;
LABEL_42:
                  V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
                  break;
                case 0x25:
                  V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vKey.m_int);
                  break;
                default:
                  v14 = VariantFieldTypeName(vKey.m_type);
                  Warning("No conversion from %s to string at the moment!\n", v14);
LABEL_40:
                  CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
                  break;
              }
              m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
            }
            KeyValues::SetFloat(&kv, m_uint64, v7);
          }
          goto LABEL_5;
        }
        v13 = VariantFieldTypeName(2);
        Warning("No conversion from %s to string at the moment!\n", v13);
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        value = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
      }
      if ( vKey.m_type == 30 )
      {
        v8 = vKey.m_uint64;
      }
      else
      {
        switch ( vKey.m_type )
        {
          case 0:
            goto LABEL_16;
          case 1:
            m_float64 = vKey.m_float;
            goto LABEL_22;
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
            v10 = "true";
            if ( vKey.m_char == 0 )
              v10 = "false";
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v10);
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
            m_float64 = vKey.m_float64;
LABEL_22:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float64);
            break;
          case 0x25:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vKey.m_int);
            break;
          default:
            v9 = VariantFieldTypeName(vKey.m_type);
            Warning("No conversion from %s to string at the moment!\n", v9);
LABEL_16:
            CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
            break;
        }
        v8 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
      }
      KeyValues::SetString(&kv, v8, value);
LABEL_5:
      (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vValue);
      ++v5;
    }
    while ( v5 != v18 );
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&vValue);
  CVariantBase<CVariantDefaultAllocator>::Free(&vKey);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Item_Lua::OnInventoryContentsChanged  (line 287, @0x0000000002598670, libserver.so)  // inlines: Call, GetPublicScriptScope, GetVM
// strings: "OnInventoryContentsChanged"
void __fastcall CDOTA_Item_Lua::OnInventoryContentsChanged(CDOTA_Item_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v2; // rax
  __int64 v3; // r12

  m_pEntity = this->m_pEntity;
  v2 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "OnInventoryContentsChanged", m_pEntity->m_hPublicScope.m_hScope, 0);
  v3 = v2;
  if ( v2 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v2, 0, 0, 0, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v3);
  }
}


// CDOTA_Item_Lua::OnItemEquipped  (line 294, @0x00000000025ae3c0, libserver.so)  // inlines: CVariantBase, Call<HSCRIPT__*>, EntityToHScript, Free, Get, GetPublicScriptScope, GetVM, ToHScript, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, CEntityInstance::CreatePublicScriptScope, _Unwind_Resume
void __fastcall CDOTA_Item_Lua::OnItemEquipped(CDOTA_Item_Lua *const this, CDOTA_Item *pItem)
{
  HSCRIPT m_hScope; // rax
  CEntityIdentity *m_pEntity; // r14
  __int64 v6; // rax
  __int64 v7; // r12
  ScriptVariant_t result; // [rsp+10h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v9; // [rsp+20h] [rbp-40h] BYREF

  result.m_type = 0;
  result.m_flags = 0;
  result.m_uint64 = 0;
  if ( pItem != 0 )
  {
    m_hScope = pItem->m_pEntity->m_hPublicScope.m_hScope;
    if ( m_hScope == 0 )
    {
      CEntityInstance::CreatePublicScriptScope(pItem, 0);
      m_hScope = pItem->m_pEntity->m_hPublicScope.m_hScope;
    }
  }
  else
  {
    m_hScope = 0;
  }
  m_pEntity = this->m_pEntity;
  v9.m_flags = 0;
  v9.m_type = 31;
  v9.m_uint64 = m_hScope;
  v6 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "OnItemEquipped", m_pEntity->m_hPublicScope.m_hScope, 0);
  v7 = v6;
  if ( v6 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v6, &v9, 1, &result, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v7);
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&v9);
  if ( (result.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, result.m_uint64);
}


// CDOTA_Item_Lua::OnHeroCalculateStatBonus  (line 302, @0x0000000002598550, libserver.so)  // inlines: Call, GetPublicScriptScope, GetVM
// strings: "OnHeroCalculateStatBonus"
void __fastcall CDOTA_Item_Lua::OnHeroCalculateStatBonus(CDOTA_Item_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v2; // rax
  __int64 v3; // r12

  m_pEntity = this->m_pEntity;
  v2 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "OnHeroCalculateStatBonus", m_pEntity->m_hPublicScope.m_hScope, 0);
  v3 = v2;
  if ( v2 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v2, 0, 0, 0, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v3);
  }
}


// CDOTA_Item_Lua::GetAssociatedPrimaryAbilities  (line 309, @0x00000000025ad4f0, libserver.so)  // inlines: CVariantBase, Call, Free, GetPublicScriptScope, GetVM, TempString, ~CVariantBase
// calls: CUtlString::Set, CUtlString::Get, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "GetAssociatedPrimaryAbilities"
const char *__fastcall CDOTA_Item_Lua::GetAssociatedPrimaryAbilities(CDOTA_Item_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r14
  __int64 v3; // rax
  __int64 v4; // r12
  const char *result; // rax
  CUtlString *p_m_szAssociatedPrimaryAbilities; // r15
  const char *v7; // [rsp+8h] [rbp-48h]
  ScriptVariant_t v8; // [rsp+10h] [rbp-40h] BYREF

  v8.m_type = 0;
  v8.m_flags = 0;
  m_pEntity = this->m_pEntity;
  v8.m_uint64 = 0;
  v3 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "GetAssociatedPrimaryAbilities", m_pEntity->m_hPublicScope.m_hScope, 0);
  v4 = v3;
  if ( v3 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v3, 0, 0, &v8, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v4);
  }
  if ( v8.m_type == 30 && *v8.m_pszString != 0 )
  {
    p_m_szAssociatedPrimaryAbilities = &this->m_szAssociatedPrimaryAbilities;
    CUtlString::Set(p_m_szAssociatedPrimaryAbilities, v8.m_pszString);
    result = CUtlString::Get(p_m_szAssociatedPrimaryAbilities);
  }
  else
  {
    result = 0;
  }
  if ( (v8.m_flags & 1) != 0 )
  {
    v7 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8.m_uint64);
    return v7;
  }
  return result;
}


// CDOTA_Item_Lua::GetAssociatedSecondaryAbilities  (line 326, @0x00000000025ad600, libserver.so)  // inlines: CVariantBase, Call, Free, GetPublicScriptScope, GetVM, TempString, ~CVariantBase
// calls: CUtlString::Set, CUtlString::Get, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "GetAssociatedSecondaryAbilities"
const char *__fastcall CDOTA_Item_Lua::GetAssociatedSecondaryAbilities(CDOTA_Item_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r14
  __int64 v3; // rax
  __int64 v4; // r12
  const char *result; // rax
  CUtlString *p_m_szAssociatedSecondaryAbilities; // r15
  const char *v7; // [rsp+8h] [rbp-48h]
  ScriptVariant_t v8; // [rsp+10h] [rbp-40h] BYREF

  v8.m_type = 0;
  v8.m_flags = 0;
  m_pEntity = this->m_pEntity;
  v8.m_uint64 = 0;
  v3 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "GetAssociatedSecondaryAbilities", m_pEntity->m_hPublicScope.m_hScope, 0);
  v4 = v3;
  if ( v3 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v3, 0, 0, &v8, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v4);
  }
  if ( v8.m_type == 30 && *v8.m_pszString != 0 )
  {
    p_m_szAssociatedSecondaryAbilities = &this->m_szAssociatedSecondaryAbilities;
    CUtlString::Set(p_m_szAssociatedSecondaryAbilities, v8.m_pszString);
    result = CUtlString::Get(p_m_szAssociatedSecondaryAbilities);
  }
  else
  {
    result = 0;
  }
  if ( (v8.m_flags & 1) != 0 )
  {
    v7 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8.m_uint64);
    return v7;
  }
  return result;
}


// CDOTA_Item_Lua::IsStealable  (line 343, @0x00000000025aa740, libserver.so)  // inlines: CVariantBase, Call, Free, GetPublicScriptScope, GetVM, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
bool __fastcall CDOTA_Item_Lua::IsStealable(CDOTA_Item_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v2; // rax
  __int64 v3; // rbx
  bool result; // al
  char m_char; // [rsp+Ch] [rbp-34h]
  ScriptVariant_t v6; // [rsp+10h] [rbp-30h] BYREF

  v6.m_type = 0;
  v6.m_flags = 0;
  m_pEntity = this->m_pEntity;
  v6.m_uint64 = 0;
  v2 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "IsStealable", m_pEntity->m_hPublicScope.m_hScope, 0);
  v3 = v2;
  if ( v2 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v2, 0, 0, &v6, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v3);
  }
  result = v6.m_char;
  if ( (v6.m_flags & 1) != 0 )
  {
    m_char = v6.m_char;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v6.m_uint64);
    return m_char;
  }
  return result;
}


// CDOTA_Item_Lua::IsHiddenWhenStolen  (line 352, @0x00000000025aa810, libserver.so)  // inlines: CVariantBase, Call, Free, GetPublicScriptScope, GetVM, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
bool __fastcall CDOTA_Item_Lua::IsHiddenWhenStolen(CDOTA_Item_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v2; // rax
  __int64 v3; // rbx
  bool result; // al
  char m_char; // [rsp+Ch] [rbp-34h]
  ScriptVariant_t v6; // [rsp+10h] [rbp-30h] BYREF

  v6.m_type = 0;
  v6.m_flags = 0;
  m_pEntity = this->m_pEntity;
  v6.m_uint64 = 0;
  v2 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "IsHiddenWhenStolen", m_pEntity->m_hPublicScope.m_hScope, 0);
  v3 = v2;
  if ( v2 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v2, 0, 0, &v6, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v3);
  }
  result = v6.m_char;
  if ( (v6.m_flags & 1) != 0 )
  {
    m_char = v6.m_char;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v6.m_uint64);
    return m_char;
  }
  return result;
}


// CDOTA_Item_Lua::OnStolen  (line 361, @0x00000000025afd70, libserver.so)  // inlines: CVariantBase, Call<CVariantBase<CVariantDefaultAllocator> >, EntityToHScript, Get, GetPublicScriptScope, GetVM, ToHScript, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>::Free, CEntityInstance::CreatePublicScriptScope, _Unwind_Resume
void __fastcall CDOTA_Item_Lua::OnStolen(CDOTA_Item_Lua *const this, CDOTABaseAbility *pSourceAbility)
{
  HSCRIPT m_hScope; // rax
  CEntityIdentity *m_pEntity; // r15
  __int64 v6; // rax
  __int64 v7; // r14
  ScriptVariant_t *p_sourceAbility; // [rsp+8h] [rbp-78h]
  ScriptVariant_t result; // [rsp+10h] [rbp-70h] BYREF
  ScriptVariant_t sourceAbility; // [rsp+20h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> pDest; // [rsp+30h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v12; // [rsp+40h] [rbp-40h] BYREF

  result.m_type = 0;
  result.m_flags = 0;
  result.m_uint64 = 0;
  if ( pSourceAbility != 0 )
  {
    m_hScope = pSourceAbility->m_pEntity->m_hPublicScope.m_hScope;
    if ( m_hScope == 0 )
    {
      CEntityInstance::CreatePublicScriptScope(pSourceAbility, 0);
      m_hScope = pSourceAbility->m_pEntity->m_hPublicScope.m_hScope;
    }
  }
  else
  {
    m_hScope = 0;
  }
  sourceAbility.m_uint64 = m_hScope;
  sourceAbility.m_flags = 0;
  sourceAbility.m_type = 31;
  pDest.m_type = 0;
  pDest.m_flags = 0;
  p_sourceAbility = &sourceAbility;
  CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&sourceAbility, &pDest);
  m_pEntity = this->m_pEntity;
  v12.m_type = 0;
  v12.m_flags = 0;
  v12.m_uint64 = 0;
  CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&pDest, &v12);
  v6 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "IsHiddenWhenStolen", m_pEntity->m_hPublicScope.m_hScope, 0);
  v7 = v6;
  if ( v6 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v6, &v12, 1, &result, m_pEntity->m_hPublicScope.m_hScope, 1, &sourceAbility);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v7);
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&v12);
  CVariantBase<CVariantDefaultAllocator>::Free(&pDest);
  CVariantBase<CVariantDefaultAllocator>::Free(p_sourceAbility);
  CVariantBase<CVariantDefaultAllocator>::Free(&result);
}


// CDOTA_Item_Lua::OnUnStolen  (line 370, @0x0000000002598820, libserver.so)  // inlines: Call, GetPublicScriptScope, GetVM
void __fastcall CDOTA_Item_Lua::OnUnStolen(CDOTA_Item_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v2; // rax
  __int64 v3; // r12

  m_pEntity = this->m_pEntity;
  v2 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "OnUnStolen", m_pEntity->m_hPublicScope.m_hScope, 0);
  v3 = v2;
  if ( v2 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v2, 0, 0, 0, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v3);
  }
}


// CDOTA_Item_Lua::IsRefreshable  (line 376, @0x00000000025aa8e0, libserver.so)  // inlines: CVariantBase, Call, Free, GetPublicScriptScope, GetVM, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
bool __fastcall CDOTA_Item_Lua::IsRefreshable(CDOTA_Item_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v2; // rax
  __int64 v3; // rbx
  bool result; // al
  char m_char; // [rsp+Ch] [rbp-34h]
  ScriptVariant_t v6; // [rsp+10h] [rbp-30h] BYREF

  v6.m_type = 0;
  v6.m_flags = 0;
  m_pEntity = this->m_pEntity;
  v6.m_uint64 = 0;
  v2 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "IsRefreshable", m_pEntity->m_hPublicScope.m_hScope, 0);
  v3 = v2;
  if ( v2 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v2, 0, 0, &v6, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v3);
  }
  result = v6.m_char;
  if ( (v6.m_flags & 1) != 0 )
  {
    m_char = v6.m_char;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v6.m_uint64);
    return m_char;
  }
  return result;
}


// CDOTA_Item_Lua::IsHiddenAbilityCastable  (line 385, @0x00000000025aa9b0, libserver.so)  // inlines: CVariantBase, Call, Free, GetPublicScriptScope, GetVM, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "IsHiddenAbilityCastable"
bool __fastcall CDOTA_Item_Lua::IsHiddenAbilityCastable(CDOTA_Item_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v2; // rax
  __int64 v3; // rbx
  bool result; // al
  char m_char; // [rsp+Ch] [rbp-34h]
  ScriptVariant_t v6; // [rsp+10h] [rbp-30h] BYREF

  v6.m_type = 0;
  m_pEntity = this->m_pEntity;
  v6.m_flags = 0;
  v6.m_uint64 = 0;
  v2 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "IsHiddenAbilityCastable", m_pEntity->m_hPublicScope.m_hScope, 0);
  v3 = v2;
  if ( v2 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v2, 0, 0, &v6, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v3);
  }
  result = v6.m_char;
  if ( (v6.m_flags & 1) != 0 )
  {
    m_char = v6.m_char;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v6.m_uint64);
    return m_char;
  }
  return result;
}


// CDOTA_Item_Lua::ProcsMagicStick  (line 394, @0x00000000025aaa80, libserver.so)  // inlines: CVariantBase, Call, Free, GetPublicScriptScope, GetVM, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
bool __fastcall CDOTA_Item_Lua::ProcsMagicStick(CDOTA_Item_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v2; // rax
  __int64 v3; // rbx
  bool result; // al
  char m_char; // [rsp+Ch] [rbp-34h]
  ScriptVariant_t v6; // [rsp+10h] [rbp-30h] BYREF

  v6.m_type = 0;
  v6.m_flags = 0;
  m_pEntity = this->m_pEntity;
  v6.m_uint64 = 0;
  v2 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "ProcsMagicStick", m_pEntity->m_hPublicScope.m_hScope, 0);
  v3 = v2;
  if ( v2 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v2, 0, 0, &v6, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v3);
  }
  result = v6.m_char;
  if ( (v6.m_flags & 1) != 0 )
  {
    m_char = v6.m_char;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v6.m_uint64);
    return m_char;
  }
  return result;
}


// CDOTA_Item_Lua::GetPlaybackRateOverride  (line 403, @0x00000000025aab60, libserver.so)  // inlines: CVariantBase, Call, Float, Free, GetPublicScriptScope, GetVM, operator float, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "GetPlaybackRateOverride"
float __fastcall CDOTA_Item_Lua::GetPlaybackRateOverride(CDOTA_Item_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v2; // rax
  __int64 v3; // rbx
  float result; // xmm0_4
  float v5; // [rsp+Ch] [rbp-34h]
  ScriptVariant_t v6; // [rsp+10h] [rbp-30h] BYREF

  v6.m_type = 0;
  v6.m_flags = 0;
  m_pEntity = this->m_pEntity;
  v6.m_uint64 = 0;
  v2 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "GetPlaybackRateOverride", m_pEntity->m_hPublicScope.m_hScope, 0);
  v3 = v2;
  if ( v2 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v2, 0, 0, &v6, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v3);
  }
  result = v6.m_float;
  if ( v6.m_type == 34 )
    result = v6.m_float64;
  if ( (v6.m_flags & 1) != 0 )
  {
    v5 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v6.m_uint64);
    return v5;
  }
  return result;
}


// CDOTA_Item_Lua::GetConceptRecipientType  (line 412, @0x00000000025aac50, libserver.so)  // inlines: CVariantBase, Call, Free, GetPublicScriptScope, GetVM, Int, operator int, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "GetConceptRecipientType"
int __fastcall CDOTA_Item_Lua::GetConceptRecipientType(CDOTA_Item_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v2; // rax
  __int64 v3; // rbx
  int result; // eax
  int v5; // [rsp+Ch] [rbp-34h]
  ScriptVariant_t v6; // [rsp+10h] [rbp-30h] BYREF

  v6.m_type = 0;
  v6.m_flags = 0;
  m_pEntity = this->m_pEntity;
  v6.m_uint64 = 0;
  v2 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "GetConceptRecipientType", m_pEntity->m_hPublicScope.m_hScope, 0);
  v3 = v2;
  if ( v2 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v2, 0, 0, &v6, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v3);
  }
  if ( v6.m_type == 1 )
  {
    result = v6.m_float;
  }
  else
  {
    result = v6.m_int;
    if ( v6.m_type == 34 )
      result = v6.m_float64;
  }
  if ( (v6.m_flags & 1) != 0 )
  {
    v5 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v6.m_uint64);
    return v5;
  }
  return result;
}


// CDOTA_Item_Lua::SpeakTrigger  (line 421, @0x00000000025aad50, libserver.so)  // inlines: CVariantBase, Call, Free, GetPublicScriptScope, GetVM, Int, operator int, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
DOTAAbilitySpeakTrigger_t __fastcall CDOTA_Item_Lua::SpeakTrigger(CDOTA_Item_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v2; // rax
  __int64 v3; // rbx
  DOTAAbilitySpeakTrigger_t result; // eax
  DOTAAbilitySpeakTrigger_t v5; // [rsp+Ch] [rbp-34h]
  ScriptVariant_t v6; // [rsp+10h] [rbp-30h] BYREF

  v6.m_type = 0;
  v6.m_flags = 0;
  m_pEntity = this->m_pEntity;
  v6.m_uint64 = 0;
  v2 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "SpeakTrigger", m_pEntity->m_hPublicScope.m_hScope, 0);
  v3 = v2;
  if ( v2 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v2, 0, 0, &v6, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v3);
  }
  if ( v6.m_type == 1 )
  {
    result = v6.m_float;
  }
  else
  {
    result = v6.m_int;
    if ( v6.m_type == 34 )
      result = v6.m_float64;
  }
  if ( (v6.m_flags & 1) != 0 )
  {
    v5 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v6.m_uint64);
    return v5;
  }
  return result;
}


// CDOTA_Item_Lua::GetBehavior  (line 433, @0x00000000025aae50, libserver.so)  // inlines: CVariantBase, Call, Free, GetAbilityData, GetBehavior, GetPublicScriptScope, GetVM, Int, operator HSCRIPT, operator int, ~CVariantBase
// calls: CDOTABaseAbility::LoadAbilityData, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
int __fastcall CDOTA_Item_Lua::GetBehavior(CDOTA_Item_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r13
  HSCRIPT m_hScope; // rdx
  __int64 v4; // rax
  __int64 v5; // rbx
  int result; // eax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int v8; // [rsp+Ch] [rbp-34h]
  ScriptVariant_t v9; // [rsp+10h] [rbp-30h] BYREF

  m_pEntity = this->m_pEntity;
  m_hScope = m_pEntity->m_hPublicScope.m_hScope;
  if ( m_hScope != 0 )
  {
    v9.m_type = 0;
    v9.m_flags = 0;
    v9.m_uint64 = 0;
    v4 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "GetBehavior", m_hScope, 0);
    v5 = v4;
    if ( v4 != 0 )
    {
      (*(*g_pScriptVM + 160LL))(g_pScriptVM, v4, 0, 0, &v9, m_pEntity->m_hPublicScope.m_hScope, 1);
      (*(*g_pScriptVM + 152LL))(g_pScriptVM, v5);
    }
    if ( v9.m_type == 1 )
    {
      result = v9.m_float;
      if ( (v9.m_flags & 1) != 0 )
        goto LABEL_8;
    }
    else
    {
      result = v9.m_int;
      if ( v9.m_type != 34 )
      {
        if ( (v9.m_flags & 1) == 0 )
          return result;
LABEL_8:
        v8 = result;
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v9.m_uint64);
        return v8;
      }
      result = v9.m_float64;
      if ( (v9.m_flags & 1) != 0 )
        goto LABEL_8;
    }
  }
  else
  {
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(this, 0);
      m_pAbilityData = this->m_pAbilityData;
    }
    return m_pAbilityData->m_iAbilityBehavior;
  }
  return result;
}


// CDOTA_Item_Lua::CastFilterResult  (line 446, @0x00000000025ae510, libserver.so)  // inlines: CVariantBase, Call<HSCRIPT__*>, EntityToHScript, Free, Get, GetPublicScriptScope, GetVM, Int, ToHScript, operator int, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, CEntityInstance::CreatePublicScriptScope, _Unwind_Resume
int __fastcall CDOTA_Item_Lua::CastFilterResult(CDOTA_Item_Lua *const this, CDOTA_BaseNPC *pTarget)
{
  HSCRIPT m_hScope; // rax
  CEntityIdentity *m_pEntity; // r14
  __int64 v6; // rax
  __int64 v7; // r12
  int result; // eax
  int v9; // [rsp+Ch] [rbp-54h]
  ScriptVariant_t v10; // [rsp+10h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v11; // [rsp+20h] [rbp-40h] BYREF

  v10.m_type = 0;
  v10.m_flags = 0;
  v10.m_uint64 = 0;
  if ( pTarget != 0 )
  {
    m_hScope = pTarget->m_pEntity->m_hPublicScope.m_hScope;
    if ( m_hScope == 0 )
    {
      CEntityInstance::CreatePublicScriptScope(pTarget, 0);
      m_hScope = pTarget->m_pEntity->m_hPublicScope.m_hScope;
    }
  }
  else
  {
    m_hScope = 0;
  }
  m_pEntity = this->m_pEntity;
  v11.m_flags = 0;
  v11.m_type = 31;
  v11.m_uint64 = m_hScope;
  v6 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "CastFilterResultTarget", m_pEntity->m_hPublicScope.m_hScope, 0);
  v7 = v6;
  if ( v6 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v6, &v11, 1, &v10, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v7);
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&v11);
  if ( v10.m_type == 1 )
  {
    result = v10.m_float;
  }
  else
  {
    result = v10.m_int;
    if ( v10.m_type == 34 )
      result = v10.m_float64;
  }
  if ( (v10.m_flags & 1) != 0 )
  {
    v9 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v10.m_uint64);
    return v9;
  }
  return result;
}


// CDOTA_Item_Lua::CastFilterResult  (line 455, @0x00000000025ae270, libserver.so)  // inlines: CVariantBase, Call<Vector>, CopyData<Vector>, Free, GetPublicScriptScope, GetVM, Int, operator int, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "CastFilterResultLocation"
int __fastcall CDOTA_Item_Lua::CastFilterResult(CDOTA_Item_Lua *const this, const Vector *const vLocation)
{
  __int64 v2; // rax
  CEntityIdentity *m_pEntity; // r13
  HSCRIPT m_hScope; // rdx
  __int64 v5; // rax
  __int64 v6; // rbx
  int m_float; // ebx
  __int64 v9; // [rsp+10h] [rbp-60h] BYREF
  vec_t z; // [rsp+18h] [rbp-58h]
  ScriptVariant_t v11; // [rsp+20h] [rbp-50h] BYREF
  __int64 *v12; // [rsp+30h] [rbp-40h] BYREF
  __int16 v13; // [rsp+38h] [rbp-38h]
  __int16 v14; // [rsp+3Ah] [rbp-36h]

  v11.m_type = 0;
  v11.m_flags = 0;
  v2 = *&vLocation->x;
  v11.m_uint64 = 0;
  m_pEntity = this->m_pEntity;
  v9 = v2;
  m_hScope = m_pEntity->m_hPublicScope.m_hScope;
  z = vLocation->z;
  v14 = 0;
  v13 = 3;
  v12 = &v9;
  v5 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "CastFilterResultLocation", m_hScope, 0);
  v6 = v5;
  if ( v5 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v5, &v12, 1, &v11, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v6);
  }
  if ( (v14 & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v12);
  if ( v11.m_type == 1 )
  {
    m_float = v11.m_float;
  }
  else
  {
    m_float = v11.m_int;
    if ( v11.m_type == 34 )
      m_float = v11.m_float64;
  }
  if ( (v11.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v11.m_uint64);
  return m_float;
}


// CDOTA_Item_Lua::CastFilterResult  (line 464, @0x00000000025aafc0, libserver.so)  // inlines: CVariantBase, Call, Free, GetPublicScriptScope, GetVM, Int, operator int, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
int __fastcall CDOTA_Item_Lua::CastFilterResult(CDOTA_Item_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v2; // rax
  __int64 v3; // rbx
  int result; // eax
  int v5; // [rsp+Ch] [rbp-34h]
  ScriptVariant_t v6; // [rsp+10h] [rbp-30h] BYREF

  v6.m_type = 0;
  v6.m_flags = 0;
  m_pEntity = this->m_pEntity;
  v6.m_uint64 = 0;
  v2 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "CastFilterResult", m_pEntity->m_hPublicScope.m_hScope, 0);
  v3 = v2;
  if ( v2 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v2, 0, 0, &v6, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v3);
  }
  if ( v6.m_type == 1 )
  {
    result = v6.m_float;
  }
  else
  {
    result = v6.m_int;
    if ( v6.m_type == 34 )
      result = v6.m_float64;
  }
  if ( (v6.m_flags & 1) != 0 )
  {
    v5 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v6.m_uint64);
    return v5;
  }
  return result;
}


// CDOTA_Item_Lua::GetCustomCastError  (line 473, @0x00000000025ad710, libserver.so)  // inlines: CVariantBase, Call<HSCRIPT__*>, EntityToHScript, Get, GetPublicScriptScope, GetVM, TempString, ToHScript, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, CUtlString::Set, CUtlString::Get, CEntityInstance::CreatePublicScriptScope, _Unwind_Resume
// strings: "GetCustomCastErrorTarget"
const char *__fastcall CDOTA_Item_Lua::GetCustomCastError(CDOTA_Item_Lua *const this, CDOTA_BaseNPC *pTarget)
{
  HSCRIPT m_hScope; // r13
  CEntityIdentity *m_pEntity; // r15
  __int64 v5; // rax
  __int64 v6; // r13
  const char *v7; // rax
  const char *thisb; // [rsp+8h] [rbp-58h]
  ScriptVariant_t v11; // [rsp+10h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v12; // [rsp+20h] [rbp-40h] BYREF

  v11.m_type = 0;
  v11.m_flags = 0;
  v11.m_uint64 = 0;
  if ( pTarget != 0 )
  {
    if ( pTarget->m_pEntity->m_hPublicScope.m_hScope == 0 )
      CEntityInstance::CreatePublicScriptScope(pTarget, 0);
    m_hScope = pTarget->m_pEntity->m_hPublicScope.m_hScope;
  }
  else
  {
    m_hScope = 0;
  }
  v12.m_type = 0;
  v12.m_flags = 0;
  v12.m_uint64 = 0;
  m_pEntity = this->m_pEntity;
  CVariantBase<CVariantDefaultAllocator>::Free(&v12);
  v12.m_uint64 = m_hScope;
  v12.m_type = 31;
  v5 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "GetCustomCastErrorTarget", m_pEntity->m_hPublicScope.m_hScope, 0);
  v6 = v5;
  if ( v5 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v5, &v12, 1, &v11, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v6);
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&v12);
  v7 = 0;
  if ( v11.m_type == 30 && *v11.m_pszString != 0 )
  {
    CUtlString::Set(&this->m_szCastErrorTarget, v11.m_pszString);
    v7 = CUtlString::Get(&this->m_szCastErrorTarget);
  }
  thisb = v7;
  CVariantBase<CVariantDefaultAllocator>::Free(&v11);
  return thisb;
}


// CDOTA_Item_Lua::GetCustomCastError  (line 490, @0x00000000025adbd0, libserver.so)  // inlines: CVariantBase, Call<Vector>, CopyData<Vector>, GetPublicScriptScope, GetVM, TempString, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, CUtlString::Set, CUtlString::Get, _Unwind_Resume
// strings: "GetCustomCastErrorLocation"
const char *__fastcall CDOTA_Item_Lua::GetCustomCastError(CDOTA_Item_Lua *const this, const Vector *const vLocation)
{
  CEntityIdentity *m_pEntity; // r15
  __int64 v3; // rax
  HSCRIPT m_hScope; // rdx
  __int64 v5; // rax
  __int64 v6; // r13
  const char *v7; // rax
  const char *thisb; // [rsp+8h] [rbp-68h]
  __int64 v11; // [rsp+10h] [rbp-60h] BYREF
  int v12; // [rsp+18h] [rbp-58h]
  ScriptVariant_t v13; // [rsp+20h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v14; // [rsp+30h] [rbp-40h] BYREF

  m_pEntity = this->m_pEntity;
  v13.m_flags = 0;
  v3 = *&vLocation->x;
  v13.m_type = 0;
  v13.m_uint64 = 0;
  v14.m_type = 0;
  v14.m_flags = 0;
  v11 = v3;
  *&v3 = vLocation->z;
  v14.m_uint64 = 0;
  v12 = v3;
  CVariantBase<CVariantDefaultAllocator>::Free(&v14);
  v14.m_type = 3;
  m_hScope = m_pEntity->m_hPublicScope.m_hScope;
  v14.m_uint64 = &v11;
  v5 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "GetCustomCastErrorLocation", m_hScope, 0);
  v6 = v5;
  if ( v5 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v5, &v14, 1, &v13, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v6);
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&v14);
  v7 = 0;
  if ( v13.m_type == 30 && *v13.m_pszString != 0 )
  {
    CUtlString::Set(&this->m_szCastErrorLocation, v13.m_pszString);
    v7 = CUtlString::Get(&this->m_szCastErrorLocation);
  }
  thisb = v7;
  CVariantBase<CVariantDefaultAllocator>::Free(&v13);
  return thisb;
}


// CDOTA_Item_Lua::GetCustomCastError  (line 507, @0x00000000025ad8a0, libserver.so)  // inlines: CVariantBase, Call, Free, GetPublicScriptScope, GetVM, TempString, ~CVariantBase
// calls: CUtlString::Set, CUtlString::Get, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
const char *__fastcall CDOTA_Item_Lua::GetCustomCastError(CDOTA_Item_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r14
  __int64 v3; // rax
  __int64 v4; // r12
  const char *result; // rax
  CUtlString *p_m_szCastError; // r15
  const char *v7; // [rsp+8h] [rbp-48h]
  ScriptVariant_t v8; // [rsp+10h] [rbp-40h] BYREF

  v8.m_type = 0;
  v8.m_flags = 0;
  m_pEntity = this->m_pEntity;
  v8.m_uint64 = 0;
  v3 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "GetCustomCastError", m_pEntity->m_hPublicScope.m_hScope, 0);
  v4 = v3;
  if ( v3 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v3, 0, 0, &v8, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v4);
  }
  if ( v8.m_type == 30 && *v8.m_pszString != 0 )
  {
    p_m_szCastError = &this->m_szCastError;
    CUtlString::Set(p_m_szCastError, v8.m_pszString);
    result = CUtlString::Get(p_m_szCastError);
  }
  else
  {
    result = 0;
  }
  if ( (v8.m_flags & 1) != 0 )
  {
    v7 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8.m_uint64);
    return v7;
  }
  return result;
}


// CDOTA_Item_Lua::GetCastRange  (line 524, @0x00000000025add30, libserver.so)  // inlines: CVariantBase, Call<Vector, HSCRIPT__*>, CopyData<Vector>, EntityToHScript, Free, Get, GetPublicScriptScope, GetVM, Int, ToHScript, operator int, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, CEntityInstance::CreatePublicScriptScope, _Unwind_Resume
int __fastcall CDOTA_Item_Lua::GetCastRange(
        CDOTA_Item_Lua *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  HSCRIPT m_hScope; // r13
  __int64 v7; // rax
  CEntityIdentity *m_pEntity; // r15
  __int64 v9; // rax
  __int64 v10; // r13
  ScriptVariant_t *v11; // rbx
  int m_float; // ebx
  __int64 v14; // [rsp+10h] [rbp-70h] BYREF
  vec_t z; // [rsp+18h] [rbp-68h]
  ScriptVariant_t v16; // [rsp+20h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v17; // [rsp+30h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v18[4]; // [rsp+40h] [rbp-40h] BYREF

  v16.m_type = 0;
  v16.m_flags = 0;
  v16.m_uint64 = 0;
  if ( pTarget != 0 )
  {
    if ( pTarget->m_pEntity->m_hPublicScope.m_hScope != 0 )
    {
      m_hScope = pTarget->m_pEntity->m_hPublicScope.m_hScope;
    }
    else
    {
      CEntityInstance::CreatePublicScriptScope(pTarget, 0);
      m_hScope = pTarget->m_pEntity->m_hPublicScope.m_hScope;
    }
  }
  else
  {
    m_hScope = 0;
  }
  v7 = *&vLocation->x;
  m_pEntity = this->m_pEntity;
  v17.m_uint64 = 0;
  v18[0].m_flags = 0;
  v18[0].m_uint64 = 0;
  v14 = v7;
  z = vLocation->z;
  v17.m_type = 0;
  v17.m_flags = 0;
  v18[0].m_type = 0;
  CVariantBase<CVariantDefaultAllocator>::Free(&v17);
  v17.m_type = 3;
  v17.m_uint64 = &v14;
  CVariantBase<CVariantDefaultAllocator>::Free(v18);
  v18[0].m_uint64 = m_hScope;
  v18[0].m_type = 31;
  v9 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "GetCastRange", m_pEntity->m_hPublicScope.m_hScope, 0);
  v10 = v9;
  if ( v9 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v9, &v17, 2, &v16, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v10);
  }
  v11 = v18;
  do
  {
    if ( (v11->m_flags & 1) != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v11->m_uint64);
      v11->m_flags &= ~1u;
    }
    --v11;
    v11[1].m_uint64 = 0;
    v11[1].m_type = 0;
  }
  while ( v11 != &v16 );
  if ( v16.m_type == 1 )
  {
    m_float = v16.m_float;
  }
  else
  {
    m_float = v16.m_int;
    if ( v16.m_type == 34 )
      m_float = v16.m_float64;
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&v16);
  return m_float;
}


// CDOTA_Item_Lua::GetManaCost  (line 533, @0x00000000025ae920, libserver.so)  // inlines: CVariantBase, Call<int>, Free, GetPublicScriptScope, GetVM, Int, operator int, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
int __fastcall CDOTA_Item_Lua::GetManaCost(CDOTA_Item_Lua *const this, int iLevel)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v3; // rax
  __int64 v4; // rbx
  int m_float; // ebx
  ScriptVariant_t v7; // [rsp+10h] [rbp-50h] BYREF
  __int64 v8; // [rsp+20h] [rbp-40h] BYREF
  __int16 v9; // [rsp+28h] [rbp-38h]
  __int16 v10; // [rsp+2Ah] [rbp-36h]

  v7.m_type = 0;
  v7.m_flags = 0;
  m_pEntity = this->m_pEntity;
  v10 = 0;
  v7.m_uint64 = 0;
  v8 = iLevel;
  v9 = 5;
  v3 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "GetManaCost", m_pEntity->m_hPublicScope.m_hScope, 0);
  v4 = v3;
  if ( v3 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v3, &v8, 1, &v7, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v4);
  }
  if ( (v10 & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8);
  if ( v7.m_type == 1 )
  {
    m_float = v7.m_float;
  }
  else
  {
    m_float = v7.m_int;
    if ( v7.m_type == 34 )
      m_float = v7.m_float64;
  }
  if ( (v7.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v7.m_uint64);
  return m_float;
}


// CDOTA_Item_Lua::GetChannelledManaCostPerSecond  (line 542, @0x00000000025ab1b0, libserver.so)  // inlines: CVariantBase, Call<int>, Free, GetPublicScriptScope, GetVM, Int, operator int, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "GetChannelledManaCostPerSecond"
int __fastcall CDOTA_Item_Lua::GetChannelledManaCostPerSecond(CDOTA_Item_Lua *const this, int iLevel)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v3; // rax
  __int64 v4; // rbx
  int m_float; // ebx
  ScriptVariant_t v7; // [rsp+10h] [rbp-50h] BYREF
  __int64 v8; // [rsp+20h] [rbp-40h] BYREF
  __int16 v9; // [rsp+28h] [rbp-38h]
  __int16 v10; // [rsp+2Ah] [rbp-36h]

  v7.m_type = 0;
  v7.m_flags = 0;
  m_pEntity = this->m_pEntity;
  v10 = 0;
  v7.m_uint64 = 0;
  v8 = iLevel;
  v9 = 5;
  v3 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "GetChannelledManaCostPerSecond", m_pEntity->m_hPublicScope.m_hScope, 0);
  v4 = v3;
  if ( v3 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v3, &v8, 1, &v7, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v4);
  }
  if ( (v10 & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8);
  if ( v7.m_type == 1 )
  {
    m_float = v7.m_float;
  }
  else
  {
    m_float = v7.m_int;
    if ( v7.m_type == 34 )
      m_float = v7.m_float64;
  }
  if ( (v7.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v7.m_uint64);
  return m_float;
}


// CDOTA_Item_Lua::GetGoldCost  (line 551, @0x00000000025ae7e0, libserver.so)  // inlines: CVariantBase, Call<int>, Free, GetPublicScriptScope, GetVM, Int, operator int, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
int __fastcall CDOTA_Item_Lua::GetGoldCost(CDOTA_Item_Lua *const this, int iLevel)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v3; // rax
  __int64 v4; // rbx
  int m_float; // ebx
  ScriptVariant_t v7; // [rsp+10h] [rbp-50h] BYREF
  __int64 v8; // [rsp+20h] [rbp-40h] BYREF
  __int16 v9; // [rsp+28h] [rbp-38h]
  __int16 v10; // [rsp+2Ah] [rbp-36h]

  v7.m_type = 0;
  v7.m_flags = 0;
  m_pEntity = this->m_pEntity;
  v10 = 0;
  v7.m_uint64 = 0;
  v8 = iLevel;
  v9 = 5;
  v3 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "GetGoldCost", m_pEntity->m_hPublicScope.m_hScope, 0);
  v4 = v3;
  if ( v3 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v3, &v8, 1, &v7, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v4);
  }
  if ( (v10 & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8);
  if ( v7.m_type == 1 )
  {
    m_float = v7.m_float;
  }
  else
  {
    m_float = v7.m_int;
    if ( v7.m_type == 34 )
      m_float = v7.m_float64;
  }
  if ( (v7.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v7.m_uint64);
  return m_float;
}


// CDOTA_Item_Lua::GetCooldown  (line 560, @0x00000000025ae6a0, libserver.so)  // inlines: CVariantBase, Call<int>, Float, Free, GetPublicScriptScope, GetVM, operator float, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
float __fastcall CDOTA_Item_Lua::GetCooldown(CDOTA_Item_Lua *const this, int iLevel)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v3; // rax
  __int64 v4; // rbx
  float result; // xmm0_4
  float v6; // [rsp+Ch] [rbp-54h]
  ScriptVariant_t v7; // [rsp+10h] [rbp-50h] BYREF
  __int64 v8; // [rsp+20h] [rbp-40h] BYREF
  __int16 v9; // [rsp+28h] [rbp-38h]
  __int16 v10; // [rsp+2Ah] [rbp-36h]

  v8 = iLevel;
  m_pEntity = this->m_pEntity;
  v7.m_type = 0;
  v7.m_flags = 0;
  v7.m_uint64 = 0;
  v10 = 0;
  v9 = 5;
  v3 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "GetCooldown", m_pEntity->m_hPublicScope.m_hScope, 0);
  v4 = v3;
  if ( v3 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v3, &v8, 1, &v7, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v4);
  }
  if ( (v10 & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8);
  result = v7.m_float;
  if ( v7.m_type == 34 )
    result = v7.m_float64;
  if ( (v7.m_flags & 1) != 0 )
  {
    v6 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v7.m_uint64);
    return v6;
  }
  return result;
}


// CDOTA_Item_Lua::GetChannelTime  (line 569, @0x00000000025ab0c0, libserver.so)  // inlines: CVariantBase, Call, Float, Free, GetPublicScriptScope, GetVM, operator float, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
float __fastcall CDOTA_Item_Lua::GetChannelTime(CDOTA_Item_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v2; // rax
  __int64 v3; // rbx
  float result; // xmm0_4
  float v5; // [rsp+Ch] [rbp-34h]
  ScriptVariant_t v6; // [rsp+10h] [rbp-30h] BYREF

  v6.m_type = 0;
  v6.m_flags = 0;
  m_pEntity = this->m_pEntity;
  v6.m_uint64 = 0;
  v2 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "GetChannelTime", m_pEntity->m_hPublicScope.m_hScope, 0);
  v3 = v2;
  if ( v2 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v2, 0, 0, &v6, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v3);
  }
  result = v6.m_float;
  if ( v6.m_type == 34 )
    result = v6.m_float64;
  if ( (v6.m_flags & 1) != 0 )
  {
    v5 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v6.m_uint64);
    return v5;
  }
  return result;
}


