// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_ability_lua.cpp:12
class C_CDOTA_Ability_Lua_MapInstall {
	C_CDOTA_Ability_Lua_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Ability_Lua::YouForgotToImplementOrDeclareServerClass  (line 12, @0x000000000241f320, libserver.so)
int __fastcall CDOTA_Ability_Lua::YouForgotToImplementOrDeclareServerClass(CDOTA_Ability_Lua *const this)
{
  return 0;
}


// CDOTA_Ability_Lua::GetServerClass  (line 12, @0x0000000002423030, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Lua::GetServerClass(CDOTA_Ability_Lua *const this)
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


// CDOTA_Ability_Lua::CDOTA_Ability_Lua  (line 21, @0x0000000002428f00, libserver.so)  // inlines: CUtlString
// calls: CDOTABaseAbility::CDOTABaseAbility
void __fastcall CDOTA_Ability_Lua::CDOTA_Ability_Lua(CDOTA_Ability_Lua *const this)
{
  CDOTABaseAbility::CDOTABaseAbility(this);
  this->m_szAbilityTextureName.m_pString = 0;
  this->_vptr_IHandleEntity = &off_40D6170;
  this->m_szIntrinsicModifierName.m_pString = 0;
  this->m_szAssociatedPrimaryAbilities.m_pString = 0;
  this->m_szAssociatedSecondaryAbilities.m_pString = 0;
  this->m_szCastError.m_pString = 0;
  this->m_szCastErrorTarget.m_pString = 0;
  this->m_szCastErrorLocation.m_pString = 0;
  this->m_pszScriptFile = 0;
}


// CDOTA_Ability_Lua::~CDOTA_Ability_Lua  (line 28, @0x00000000024208b0, libserver.so)  // inlines: ~CUtlString
// calls: CUtlString::FreeMemoryBlock, CDOTABaseAbility::~CDOTABaseAbility
// callers: CDOTA_Ability_Lua::~CDOTA_Ability_Lua
void __fastcall CDOTA_Ability_Lua::~CDOTA_Ability_Lua(CDOTA_Ability_Lua *const this)
{
  this->_vptr_IHandleEntity = &off_40D6170;
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
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Lua::~CDOTA_Ability_Lua  (line 28, @0x0000000002420970, libserver.so)
// calls: CDOTA_Ability_Lua::~CDOTA_Ability_Lua, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Lua::~CDOTA_Ability_Lua(CDOTA_Ability_Lua *const this)
{
  CDOTA_Ability_Lua::~CDOTA_Ability_Lua(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Lua::InitLuaScope  (line 33, @0x000000000243a200, libserver.so)  // inlines: CVariantBase, Call, EntityToHScript, Get, GetAbilityData, GetAbilityKeyValues, GetAbilityName, GetPublicScriptScope, GetVM, ToHScript, operator=, ~CVariantBase
// calls: KeyValues::GetString, CVariantBase<CVariantDefaultAllocator>::Free, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CDOTABaseAbility::LoadAbilityData, CEntityInstance::CreatePublicScriptScope, _Unwind_Resume
// callers: CDOTA_Ability_Lua::ReloadPrivateScripts, CDOTA_Ability_Lua::Spawn
// strings: "<NoAbilityName>", "ExtendInstance", "Ability script %s failed to find class named %s.\n", "Filename %s of ability %s was not found!\n"
void __fastcall CDOTA_Ability_Lua::InitLuaScope(CDOTA_Ability_Lua *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rax
  IScriptVM *v3; // r12
  KeyValues *m_pKVData; // rdi
  const char *String; // rax
  __int64 v6; // r15
  const char *v7; // rdx
  DOTAAbilityData_t *v8; // rax
  const char *m_pszAbilityName; // rax
  HSCRIPT m_hScope; // rax
  CEntityIdentity *m_pEntity; // r12
  __int64 v12; // rax
  __int64 v13; // rbx
  DOTAAbilityData_t *v14; // rax
  const char *v15; // r8
  const char *v16; // rax
  const char *m_pszScriptFile; // r13
  DOTAAbilityData_t *v18; // rax
  const char *v19; // r8
  const char *v20; // rax
  uint64 v21; // [rsp+10h] [rbp-70h]
  HSCRIPT hFunction; // [rsp+18h] [rbp-68h]
  ScriptVariant_t hClass; // [rsp+20h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> args[2]; // [rsp+30h] [rbp-50h] BYREF

  m_pAbilityData = this->m_pAbilityData;
  v3 = g_pScriptVM;
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
    (*(*v3 + 312LL))(v3, v6, v7, &hClass);
    if ( hClass.m_type != 0 )
    {
      hFunction = (*(*v3 + 144LL))(v3, "ExtendInstance", v6, 0);
      if ( hFunction != 0 )
      {
        args[0].m_type = 0;
        args[0].m_flags = 0;
        args[0].m_uint64 = 0;
        args[1].m_type = 0;
        args[1].m_flags = 0;
        args[1].m_uint64 = 0;
        if ( this != 0 )
        {
          m_hScope = this->m_pEntity->m_hPublicScope.m_hScope;
          if ( m_hScope == 0 )
          {
            CEntityInstance::CreatePublicScriptScope(this, 0);
            m_hScope = this->m_pEntity->m_hPublicScope.m_hScope;
          }
          v21 = m_hScope;
        }
        else
        {
          v21 = 0;
        }
        CVariantBase<CVariantDefaultAllocator>::Free(args);
        args[0].m_type = 31;
        args[0].m_uint64 = v21;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&hClass, &args[1]);
        (*(*v3 + 160LL))(v3, hFunction, args, 2, 0, 0, 1);
        CVariantBase<CVariantDefaultAllocator>::Free(&args[1]);
        CVariantBase<CVariantDefaultAllocator>::Free(args);
      }
      (*(*v3 + 344LL))(v3, &hClass);
      m_pEntity = this->m_pEntity;
      v12 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "Init", m_pEntity->m_hPublicScope.m_hScope, 0);
      v13 = v12;
      if ( v12 != 0 )
      {
        (*(*g_pScriptVM + 160LL))(g_pScriptVM, v12, 0, 0, 0, m_pEntity->m_hPublicScope.m_hScope, 1);
        (*(*g_pScriptVM + 152LL))(g_pScriptVM, v13);
      }
      CVariantBase<CVariantDefaultAllocator>::Free(&hClass);
    }
    else
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
      {
        v14 = this->m_pAbilityData;
        v15 = "<NoAbilityName>";
        if ( v14 != 0 )
        {
          v16 = v14->m_pszAbilityName;
          if ( v16 != 0 )
            v15 = v16;
        }
        LoggingSystem_Log(
          LOG_SERVER,
          2,
          "Ability script %s failed to find class named %s.\n",
          this->m_pszScriptFile,
          v15);
      }
      CVariantBase<CVariantDefaultAllocator>::Free(&hClass);
    }
  }
  else
  {
    m_pszScriptFile = this->m_pszScriptFile;
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
    {
      v18 = this->m_pAbilityData;
      v19 = "<NoAbilityName>";
      if ( v18 != 0 )
      {
        v20 = v18->m_pszAbilityName;
        if ( v20 != 0 )
          v19 = v20;
      }
      LoggingSystem_Log(LOG_SERVER, 2, "Filename %s of ability %s was not found!\n", m_pszScriptFile, v19);
    }
  }
}


// CDOTA_Ability_Lua::ReloadPrivateScripts  (line 74, @0x000000000243a570, libserver.so)
// calls: CEntityInstance::ReloadPrivateScripts, CDOTA_Ability_Lua::InitLuaScope
void __fastcall CDOTA_Ability_Lua::ReloadPrivateScripts(CDOTA_Ability_Lua *const this)
{
  CEntityInstance::ReloadPrivateScripts(this);
  CDOTA_Ability_Lua::InitLuaScope(this);
}


// CDOTA_Ability_Lua::Spawn  (line 126, @0x000000000243a590, libserver.so)
// calls: CDOTABaseAbility::Spawn, CDOTA_Ability_Lua::InitLuaScope
void __fastcall CDOTA_Ability_Lua::Spawn(CDOTA_Ability_Lua *const this, const CEntityKeyValues *pKeyValues)
{
  CDOTABaseAbility::Spawn(this, pKeyValues);
  CDOTA_Ability_Lua::InitLuaScope(this);
}


// CDOTA_Ability_Lua::OnToggle  (line 135, @0x0000000002421ac0, libserver.so)  // inlines: Call, GetPublicScriptScope, GetVM
// calls: CDOTABaseAbility::OnToggle
void __fastcall CDOTA_Ability_Lua::OnToggle(CDOTA_Ability_Lua *const this)
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


// CDOTA_Ability_Lua::OnSpellStart  (line 143, @0x0000000002421910, libserver.so)  // inlines: Call, GetPublicScriptScope, GetVM
void __fastcall CDOTA_Ability_Lua::OnSpellStart(CDOTA_Ability_Lua *const this)
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


// CDOTA_Ability_Lua::OnAbilityPhaseStart  (line 150, @0x0000000002432c10, libserver.so)  // inlines: CVariantBase, Call, Free, GetPublicScriptScope, GetVM, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
bool __fastcall CDOTA_Ability_Lua::OnAbilityPhaseStart(CDOTA_Ability_Lua *const this)
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


// CDOTA_Ability_Lua::OnAbilityPhaseInterrupted  (line 159, @0x00000000024219a0, libserver.so)  // inlines: Call, GetPublicScriptScope, GetVM
// strings: "OnAbilityPhaseInterrupted"
void __fastcall CDOTA_Ability_Lua::OnAbilityPhaseInterrupted(CDOTA_Ability_Lua *const this)
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


// CDOTA_Ability_Lua::OnChannelThink  (line 166, @0x0000000002433c00, libserver.so)  // inlines: CVariantBase, Call<float>, GetPublicScriptScope, GetVM, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CDOTA_Ability_Lua::OnChannelThink(CDOTA_Ability_Lua *const this, __m128i a2, float flInterval)
{
  int v3; // r13d
  CEntityIdentity *m_pEntity; // r15
  __int64 v5; // rax
  __int64 v6; // r13
  ScriptVariant_t result; // [rsp+10h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v8; // [rsp+20h] [rbp-40h] BYREF

  v3 = _mm_cvtsi128_si32(a2);
  result.m_type = 0;
  m_pEntity = this->m_pEntity;
  result.m_flags = 0;
  v8.m_flags = 0;
  result.m_uint64 = 0;
  v8.m_type = 0;
  v8.m_uint64 = 0;
  CVariantBase<CVariantDefaultAllocator>::Free(&v8);
  v8.m_int = v3;
  v8.m_type = 1;
  v5 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "OnChannelThink", m_pEntity->m_hPublicScope.m_hScope, 0);
  v6 = v5;
  if ( v5 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v5, &v8, 1, &result, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v6);
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&v8);
  CVariantBase<CVariantDefaultAllocator>::Free(&result);
}


// CDOTA_Ability_Lua::OnChannelFinish  (line 174, @0x0000000002433d00, libserver.so)  // inlines: CVariantBase, Call<bool>, GetPublicScriptScope, GetVM, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CDOTA_Ability_Lua::OnChannelFinish(CDOTA_Ability_Lua *const this, bool bInterrupted)
{
  CEntityIdentity *m_pEntity; // r15
  HSCRIPT m_hScope; // rdx
  __int64 v5; // rax
  __int64 v6; // r13
  ScriptVariant_t result; // [rsp+10h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v8; // [rsp+20h] [rbp-40h] BYREF

  v8.m_flags = 0;
  m_pEntity = this->m_pEntity;
  result.m_type = 0;
  result.m_flags = 0;
  result.m_uint64 = 0;
  v8.m_type = 0;
  v8.m_uint64 = 0;
  CVariantBase<CVariantDefaultAllocator>::Free(&v8);
  v8.m_type = 6;
  m_hScope = m_pEntity->m_hPublicScope.m_hScope;
  v8.m_char = bInterrupted;
  v5 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "OnChannelFinish", m_hScope, 0);
  v6 = v5;
  if ( v5 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v5, &v8, 1, &result, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v6);
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&v8);
  CVariantBase<CVariantDefaultAllocator>::Free(&result);
}


// CDOTA_Ability_Lua::OnProjectileHit  (line 182, @0x00000000024376f0, libserver.so)  // inlines: CVariantBase, Call<HSCRIPT__*, Vector>, CopyData<Vector>, EntityToHScript, Free, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPublicScriptScope, GetVM, IndexToIdentity, IsValid, LookupEntity, ToHScript, operator CEntityInstance*, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume, CEntityInstance::CreatePublicScriptScope
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Lua::OnProjectileHit(
        CDOTA_Ability_Lua *const this,
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

  v20.m_flags = 0;
  v5 = *hTarget;
  v20.m_type = 0;
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
  v22[0].m_flags = 0;
  v22[0].m_uint64 = 0;
  v18 = v9;
  z = vLocation->z;
  v21.m_type = 0;
  v21.m_flags = 0;
  v22[0].m_type = 0;
  CVariantBase<CVariantDefaultAllocator>::Free(&v21);
  v21.m_uint64 = m_hScope;
  v21.m_type = 31;
  CVariantBase<CVariantDefaultAllocator>::Free(v22);
  v22[0].m_type = 3;
  v11 = m_pEntity->m_hPublicScope.m_hScope;
  v22[0].m_uint64 = &v18;
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


// CDOTA_Ability_Lua::OnProjectileHit_ExtraData  (line 191, @0x0000000002439610, libserver.so)  // inlines: CVariantBase, Call<HSCRIPT__*, Vector, CVariantBase<CVariantDefaultAllocator> >, CopyData<Vector>, CreateTableFromKeyValues, EntityToHScript, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPublicScriptScope, GetVM, IndexToIdentity, IsValid, LookupEntity, ReleaseValue, ToHScript, operator CEntityInstance*, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>::Free, Recursive_ConvertKeyValuesToTable, _Unwind_Resume, CEntityInstance::CreatePublicScriptScope
// strings: "OnProjectileHit_ExtraData"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Lua::OnProjectileHit_ExtraData(
        CDOTA_Ability_Lua *const this,
        _WORD *hTarget,
        const Vector *const vLocation,
        KeyValues *pExtraData)
{
  IScriptVM *v6; // r12
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *m_pEntity; // r15
  CVariantBase<CVariantDefaultAllocator> *v10; // rax
  __int64 v11; // rax
  HSCRIPT v12; // r9
  __int64 v13; // r15
  unsigned int m_char; // ebx
  CEntityInstance *m_pInstance; // r12
  HSCRIPT m_hScope; // rax
  uint64 v19; // [rsp+10h] [rbp-B0h]
  __int64 v21; // [rsp+20h] [rbp-A0h] BYREF
  vec_t z; // [rsp+28h] [rbp-98h]
  ScriptVariant_t vKV; // [rsp+30h] [rbp-90h] BYREF
  ScriptVariant_t v24; // [rsp+40h] [rbp-80h] BYREF
  CVariantBase<CVariantDefaultAllocator> pDest; // [rsp+50h] [rbp-70h] BYREF
  CVariantBase<CVariantDefaultAllocator> v26; // [rsp+60h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v27; // [rsp+70h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v28; // [rsp+80h] [rbp-40h] BYREF
  char v29; // [rsp+90h] [rbp-30h] BYREF

  vKV.m_flags = 0;
  vKV.m_type = 0;
  vKV.m_uint64 = 0;
  v6 = g_pScriptVM;
  (*(*g_pScriptVM + 264LL))(g_pScriptVM, &vKV);
  if ( pExtraData != 0 && vKV.m_uint64 != 0 )
    Recursive_ConvertKeyValuesToTable(pExtraData, v6, vKV.m_hScript);
  v24.m_type = 0;
  v24.m_flags = 0;
  v24.m_uint64 = 0;
  pDest.m_type = 0;
  pDest.m_flags = 0;
  CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&vKV, &pDest);
  if ( (*hTarget + 2) > 1 && (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F]) != 0 )
  {
    v19 = 0;
    v8 = &v7[*hTarget & 0x1FF];
    if ( v8 != 0 && *hTarget == v8->m_EHandle.m_Index )
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
        v19 = m_hScope;
      }
    }
  }
  else
  {
    v19 = 0;
  }
  m_pEntity = this->m_pEntity;
  v21 = *&vLocation->x;
  z = vLocation->z;
  v10 = &v26;
  do
  {
    v10->m_uint64 = 0;
    v10->m_type = 0;
    ++v10;
    v10[-1].m_flags = 0;
  }
  while ( v10 != &v29 );
  CVariantBase<CVariantDefaultAllocator>::Free(&v26);
  v26.m_type = 31;
  v26.m_uint64 = v19;
  CVariantBase<CVariantDefaultAllocator>::Free(&v27);
  v27.m_type = 3;
  v27.m_uint64 = &v21;
  CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&pDest, &v28);
  v11 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "OnProjectileHit_ExtraData", m_pEntity->m_hPublicScope.m_hScope, 0);
  if ( v11 != 0 )
  {
    v12 = m_pEntity->m_hPublicScope.m_hScope;
    v13 = v11;
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v11, &v26, 3, &v24, v12, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v13);
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&v28);
  CVariantBase<CVariantDefaultAllocator>::Free(&v27);
  CVariantBase<CVariantDefaultAllocator>::Free(&v26);
  CVariantBase<CVariantDefaultAllocator>::Free(&pDest);
  (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vKV);
  m_char = v24.m_char;
  CVariantBase<CVariantDefaultAllocator>::Free(&v24);
  CVariantBase<CVariantDefaultAllocator>::Free(&vKV);
  return m_char;
}


// CDOTA_Ability_Lua::Script_OnProjectileHit_ExtraData  (line 204, @0x0000000002435230, libserver.so)  // inlines: AssignTo, CVariantBase, Float, GetVM, HScriptToEntity<CBaseEntity>, SetBool, TempString, ToEnt, ToString, operator float, ~CVariantBase
// calls: GetScriptDesc<CEntityInstance>, KeyValues::KeyValues, KeyValues::SetString, V_snprintf, VariantFieldTypeName, Warning, KeyValues::SetInt, KeyValues::SetFloat, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "false", "true", "%d %d %d %d"
// globals: jpt_24353BB, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, jpt_243567B, jpt_24356D3
bool __fastcall CDOTA_Ability_Lua::Script_OnProjectileHit_ExtraData(
        CDOTA_Ability_Lua *const this,
        HSCRIPT hTarget,
        const Vector *const vLocation,
        HSCRIPT table)
{
  void (__fastcall *v5)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax
  int v7; // ebx
  unsigned int i; // eax
  float v9; // xmm1_4
  unsigned int v10; // r14d
  const char *v11; // r15
  const char *v12; // rsi
  const char *v13; // rax
  double v14; // xmm0_8
  const char *v15; // rcx
  unsigned __int8 m_char; // r15
  const char *v17; // rsi
  const char *m_uint64; // rsi
  const char *v20; // rax
  const char *v21; // rax
  double m_float; // xmm0_8
  const char *v23; // rcx
  const char *v24; // rax
  double m_float64; // xmm0_8
  const char *v26; // rcx
  int v27; // [rsp+1Ch] [rbp-84h]
  ScriptVariant_t vKey; // [rsp+30h] [rbp-70h] BYREF
  ScriptVariant_t vValue; // [rsp+40h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v32; // [rsp+68h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  if ( hTarget != 0 )
  {
    v5 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v5(g_pScriptVM, hTarget, Script);
  }
  KeyValues::KeyValues(&kv, "extra_data");
  vKey.m_type = 0;
  vKey.m_flags = 0;
  vKey.m_uint64 = 0;
  vValue.m_type = 0;
  vValue.m_flags = 0;
  vValue.m_uint64 = 0;
  v27 = (*(*g_pScriptVM + 280LL))(g_pScriptVM, table);
  if ( v27 > 0 )
  {
    v7 = 0;
    for ( i = (*(*g_pScriptVM + 296LL))(g_pScriptVM, table, 0, &vKey, &vValue);
          ;
          i = (*(*g_pScriptVM + 296LL))(g_pScriptVM, table, v10, &vKey, &vValue) )
    {
      v10 = i;
      if ( vValue.m_type == 30 )
        break;
      switch ( vValue.m_type )
      {
        case 2:
          v20 = VariantFieldTypeName(2);
          Warning("No conversion from %s to string at the moment!\n", v20);
          CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
          v11 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          goto LABEL_12;
        case 0x22:
          if ( vKey.m_type == 30 )
          {
            m_uint64 = vKey.m_uint64;
          }
          else
          {
            switch ( vKey.m_type )
            {
              case 0:
                goto LABEL_51;
              case 1:
                m_float = vKey.m_float;
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
                v23 = "true";
                if ( vKey.m_char == 0 )
                  v23 = "false";
                V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v23);
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
                m_float = vKey.m_float64;
LABEL_54:
                V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
                break;
              case 0x25:
                V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vKey.m_int);
                break;
              default:
                v21 = VariantFieldTypeName(vKey.m_type);
                Warning("No conversion from %s to string at the moment!\n", v21);
LABEL_51:
                CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
                break;
            }
            m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          }
          KeyValues::SetFloat(&kv, m_uint64, v9);
          break;
        case 6:
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
                goto LABEL_66;
              case 1:
                m_float64 = vKey.m_float;
                goto LABEL_72;
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
                v26 = "true";
                if ( vKey.m_char == 0 )
                  v26 = "false";
                V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v26);
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
LABEL_72:
                V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float64);
                break;
              case 0x25:
                V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vKey.m_int);
                break;
              default:
                v24 = VariantFieldTypeName(vKey.m_type);
                Warning("No conversion from %s to string at the moment!\n", v24);
LABEL_66:
                CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
                break;
            }
            v17 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          }
          KeyValues::SetInt(&kv, v17, m_char);
          break;
        default:
          break;
      }
LABEL_8:
      (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vValue);
      if ( ++v7 == v27 )
        goto LABEL_42;
    }
    v11 = vValue.m_uint64;
LABEL_12:
    if ( vKey.m_type == 30 )
    {
      v12 = vKey.m_uint64;
    }
    else
    {
      switch ( vKey.m_type )
      {
        case 0:
          goto LABEL_20;
        case 1:
          v14 = vKey.m_float;
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
          v14 = vKey.m_float64;
LABEL_22:
          V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", v14);
          break;
        case 0x25:
          V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vKey.m_int);
          break;
        default:
          v13 = VariantFieldTypeName(vKey.m_type);
          Warning("No conversion from %s to string at the moment!\n", v13);
LABEL_20:
          CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
          break;
      }
      v12 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
    }
    KeyValues::SetString(&kv, v12, v11);
    goto LABEL_8;
  }
LABEL_42:
  CVariantBase<CVariantDefaultAllocator>::Free(&vValue);
  CVariantBase<CVariantDefaultAllocator>::Free(&vKey);
  KeyValues::~KeyValues(&kv);
  return 0;
}


// CDOTA_Ability_Lua::OnProjectileThink  (line 235, @0x0000000002437e90, libserver.so)  // inlines: CVariantBase, Call<Vector>, CopyData<Vector>, GetPublicScriptScope, GetVM, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CDOTA_Ability_Lua::OnProjectileThink(CDOTA_Ability_Lua *const this, const Vector *const vLocation)
{
  __int64 v2; // rax
  CEntityIdentity *m_pEntity; // r15
  HSCRIPT m_hScope; // rdx
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // [rsp+10h] [rbp-60h] BYREF
  vec_t z; // [rsp+18h] [rbp-58h]
  ScriptVariant_t result; // [rsp+20h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v10; // [rsp+30h] [rbp-40h] BYREF

  result.m_flags = 0;
  v2 = *&vLocation->x;
  result.m_type = 0;
  m_pEntity = this->m_pEntity;
  result.m_uint64 = 0;
  v10.m_uint64 = 0;
  v7 = v2;
  z = vLocation->z;
  v10.m_type = 0;
  v10.m_flags = 0;
  CVariantBase<CVariantDefaultAllocator>::Free(&v10);
  m_hScope = m_pEntity->m_hPublicScope.m_hScope;
  v10.m_type = 3;
  v10.m_uint64 = &v7;
  v5 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "OnProjectileThink", m_hScope, 0);
  v6 = v5;
  if ( v5 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v5, &v10, 1, &result, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v6);
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&v10);
  CVariantBase<CVariantDefaultAllocator>::Free(&result);
}


// CDOTA_Ability_Lua::OnProjectileThink_ExtraData  (line 243, @0x0000000002439950, libserver.so)  // inlines: CVariantBase, Call<Vector, CVariantBase<CVariantDefaultAllocator> >, CopyData<Vector>, CreateTableFromKeyValues, GetPublicScriptScope, GetVM, ReleaseValue, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>::Free, Recursive_ConvertKeyValuesToTable, _Unwind_Resume
// strings: "OnProjectileThink_ExtraData"
void __fastcall CDOTA_Ability_Lua::OnProjectileThink_ExtraData(
        CDOTA_Ability_Lua *const this,
        const Vector *const vLocation,
        KeyValues *pExtraData)
{
  IScriptVM *v5; // rbx
  CEntityIdentity *m_pEntity; // r15
  __int64 v7; // rax
  HSCRIPT m_hScope; // r9
  __int64 v9; // r15
  __int64 v11; // [rsp+20h] [rbp-90h] BYREF
  vec_t z; // [rsp+28h] [rbp-88h]
  ScriptVariant_t vKV; // [rsp+30h] [rbp-80h] BYREF
  ScriptVariant_t result; // [rsp+40h] [rbp-70h] BYREF
  CVariantBase<CVariantDefaultAllocator> pDest; // [rsp+50h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v16; // [rsp+60h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v17[4]; // [rsp+70h] [rbp-40h] BYREF

  vKV.m_type = 0;
  vKV.m_flags = 0;
  vKV.m_uint64 = 0;
  v5 = g_pScriptVM;
  (*(*g_pScriptVM + 264LL))(g_pScriptVM, &vKV);
  if ( pExtraData != 0 && vKV.m_uint64 != 0 )
    Recursive_ConvertKeyValuesToTable(pExtraData, v5, vKV.m_hScript);
  result.m_type = 0;
  pDest.m_flags = 0;
  result.m_flags = 0;
  result.m_uint64 = 0;
  pDest.m_type = 0;
  CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&vKV, &pDest);
  v16.m_uint64 = 0;
  v17[0].m_uint64 = 0;
  m_pEntity = this->m_pEntity;
  v11 = *&vLocation->x;
  z = vLocation->z;
  v16.m_type = 0;
  v16.m_flags = 0;
  v17[0].m_type = 0;
  v17[0].m_flags = 0;
  CVariantBase<CVariantDefaultAllocator>::Free(&v16);
  v16.m_type = 3;
  v16.m_uint64 = &v11;
  CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&pDest, v17);
  v7 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "OnProjectileThink_ExtraData", m_pEntity->m_hPublicScope.m_hScope, 0);
  if ( v7 != 0 )
  {
    m_hScope = m_pEntity->m_hPublicScope.m_hScope;
    v9 = v7;
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v7, &v16, 2, &result, m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v9);
  }
  CVariantBase<CVariantDefaultAllocator>::Free(v17);
  CVariantBase<CVariantDefaultAllocator>::Free(&v16);
  CVariantBase<CVariantDefaultAllocator>::Free(&pDest);
  (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vKV);
  CVariantBase<CVariantDefaultAllocator>::Free(&result);
  CVariantBase<CVariantDefaultAllocator>::Free(&vKV);
}


// CDOTA_Ability_Lua::Script_OnProjectileThink_ExtraData  (line 255, @0x0000000002435bf0, libserver.so)  // inlines: AssignTo, CVariantBase, Float, GetVM, SetBool, TempString, ToString, operator float, ~CVariantBase
// calls: KeyValues::KeyValues, KeyValues::SetString, V_snprintf, VariantFieldTypeName, Warning, KeyValues::SetInt, KeyValues::SetFloat, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "false", "true", "%d %d %d %d"
// globals: jpt_2435D4B, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, jpt_243600B, jpt_2436063
void __fastcall CDOTA_Ability_Lua::Script_OnProjectileThink_ExtraData(
        CDOTA_Ability_Lua *const this,
        const Vector *const vLocation,
        HSCRIPT table)
{
  int v4; // ebx
  unsigned int i; // eax
  float v6; // xmm1_4
  unsigned int v7; // r14d
  const char *v8; // r15
  const char *v9; // rsi
  const char *v10; // rax
  double v11; // xmm0_8
  const char *v12; // rcx
  unsigned __int8 m_char; // r15
  const char *v14; // rsi
  const char *m_uint64; // rsi
  const char *v16; // rax
  const char *v17; // rax
  double m_float; // xmm0_8
  const char *v19; // rcx
  const char *v20; // rax
  double m_float64; // xmm0_8
  const char *v22; // rcx
  int v23; // [rsp+1Ch] [rbp-84h]
  ScriptVariant_t vKey; // [rsp+30h] [rbp-70h] BYREF
  ScriptVariant_t vValue; // [rsp+40h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+68h] [rbp-38h]

  v28 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "extra_data");
  vKey.m_type = 0;
  vKey.m_flags = 0;
  vValue.m_type = 0;
  vKey.m_uint64 = 0;
  vValue.m_flags = 0;
  vValue.m_uint64 = 0;
  v23 = (*(*g_pScriptVM + 280LL))(g_pScriptVM, table);
  if ( v23 > 0 )
  {
    v4 = 0;
    for ( i = (*(*g_pScriptVM + 296LL))(g_pScriptVM, table, 0, &vKey, &vValue);
          ;
          i = (*(*g_pScriptVM + 296LL))(g_pScriptVM, table, v7, &vKey, &vValue) )
    {
      v7 = i;
      if ( vValue.m_type == 30 )
        break;
      switch ( vValue.m_type )
      {
        case 2:
          v16 = VariantFieldTypeName(2);
          Warning("No conversion from %s to string at the moment!\n", v16);
          CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
          v8 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          goto LABEL_10;
        case 0x22:
          if ( vKey.m_type == 30 )
          {
            m_uint64 = vKey.m_uint64;
          }
          else
          {
            switch ( vKey.m_type )
            {
              case 0:
                goto LABEL_49;
              case 1:
                m_float = vKey.m_float;
                goto LABEL_52;
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
                v19 = "true";
                if ( vKey.m_char == 0 )
                  v19 = "false";
                V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v19);
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
                m_float = vKey.m_float64;
LABEL_52:
                V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
                break;
              case 0x25:
                V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vKey.m_int);
                break;
              default:
                v17 = VariantFieldTypeName(vKey.m_type);
                Warning("No conversion from %s to string at the moment!\n", v17);
LABEL_49:
                CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
                break;
            }
            m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          }
          KeyValues::SetFloat(&kv, m_uint64, v6);
          break;
        case 6:
          m_char = vValue.m_char;
          if ( vKey.m_type == 30 )
          {
            v14 = vKey.m_uint64;
          }
          else
          {
            switch ( vKey.m_type )
            {
              case 0:
                goto LABEL_64;
              case 1:
                m_float64 = vKey.m_float;
                goto LABEL_70;
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
LABEL_70:
                V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float64);
                break;
              case 0x25:
                V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vKey.m_int);
                break;
              default:
                v20 = VariantFieldTypeName(vKey.m_type);
                Warning("No conversion from %s to string at the moment!\n", v20);
LABEL_64:
                CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
                break;
            }
            v14 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          }
          KeyValues::SetInt(&kv, v14, m_char);
          break;
        default:
          break;
      }
LABEL_6:
      (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vValue);
      if ( ++v4 == v23 )
        goto LABEL_40;
    }
    v8 = vValue.m_uint64;
LABEL_10:
    if ( vKey.m_type == 30 )
    {
      v9 = vKey.m_uint64;
    }
    else
    {
      switch ( vKey.m_type )
      {
        case 0:
          goto LABEL_18;
        case 1:
          v11 = vKey.m_float;
          goto LABEL_20;
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
          v12 = "true";
          if ( vKey.m_char == 0 )
            v12 = "false";
          V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v12);
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
          v11 = vKey.m_float64;
LABEL_20:
          V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", v11);
          break;
        case 0x25:
          V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vKey.m_int);
          break;
        default:
          v10 = VariantFieldTypeName(vKey.m_type);
          Warning("No conversion from %s to string at the moment!\n", v10);
LABEL_18:
          CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
          break;
      }
      v9 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
    }
    KeyValues::SetString(&kv, v9, v8);
    goto LABEL_6;
  }
LABEL_40:
  CVariantBase<CVariantDefaultAllocator>::Free(&vValue);
  CVariantBase<CVariantDefaultAllocator>::Free(&vKey);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Lua::OnOwnerSpawned  (line 284, @0x0000000002421c50, libserver.so)  // inlines: Call, GetPublicScriptScope, GetVM, OnOwnerSpawned
void __fastcall CDOTA_Ability_Lua::OnOwnerSpawned(CDOTA_Ability_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v3; // rax
  __int64 v4; // r12

  (*(this->_vptr_IHandleEntity + 262))(this);
  m_pEntity = this->m_pEntity;
  v3 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "OnOwnerSpawned", m_pEntity->m_hPublicScope.m_hScope, 0);
  v4 = v3;
  if ( v3 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v3, 0, 0, 0, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v4);
  }
}


// CDOTA_Ability_Lua::OnOwnerDied  (line 292, @0x00000000024217f0, libserver.so)  // inlines: Call, GetPublicScriptScope, GetVM
void __fastcall CDOTA_Ability_Lua::OnOwnerDied(CDOTA_Ability_Lua *const this)
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


// CDOTA_Ability_Lua::OnUpgrade  (line 299, @0x000000000242e4d0, libserver.so)  // inlines: Call, GetPublicScriptScope, GetVM
// calls: CDOTABaseAbility::OnUpgrade
void __fastcall CDOTA_Ability_Lua::OnUpgrade(CDOTA_Ability_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v3; // rax
  __int64 v4; // r12

  CDOTABaseAbility::OnUpgrade(this);
  m_pEntity = this->m_pEntity;
  v3 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "OnUpgrade", m_pEntity->m_hPublicScope.m_hScope, 0);
  v4 = v3;
  if ( v3 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v3, 0, 0, 0, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v4);
  }
}


// CDOTA_Ability_Lua::GetIntrinsicModifierName  (line 307, @0x0000000002436580, libserver.so)  // inlines: CVariantBase, Call, GetPublicScriptScope, GetVM, TempString, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, CUtlString::Set, CUtlString::Get, _Unwind_Resume
// strings: "GetIntrinsicModifierName"
const char *__fastcall CDOTA_Ability_Lua::GetIntrinsicModifierName(CDOTA_Ability_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r14
  __int64 v3; // rax
  __int64 v4; // r12
  const char *v5; // rax
  CUtlString *p_m_szIntrinsicModifierName; // r15
  const char *v8; // [rsp+8h] [rbp-48h]
  ScriptVariant_t v9; // [rsp+10h] [rbp-40h] BYREF

  v9.m_type = 0;
  v9.m_flags = 0;
  m_pEntity = this->m_pEntity;
  v9.m_uint64 = 0;
  v3 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "GetIntrinsicModifierName", m_pEntity->m_hPublicScope.m_hScope, 0);
  v4 = v3;
  if ( v3 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v3, 0, 0, &v9, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v4);
  }
  if ( v9.m_type == 30 && *v9.m_pszString != 0 )
  {
    p_m_szIntrinsicModifierName = &this->m_szIntrinsicModifierName;
    CUtlString::Set(p_m_szIntrinsicModifierName, v9.m_pszString);
    v5 = CUtlString::Get(p_m_szIntrinsicModifierName);
  }
  else
  {
    v5 = 0;
  }
  v8 = v5;
  CVariantBase<CVariantDefaultAllocator>::Free(&v9);
  return v8;
}


// CDOTA_Ability_Lua::OnHeroLevelUp  (line 324, @0x0000000002421a30, libserver.so)  // inlines: Call, GetPublicScriptScope, GetVM
void __fastcall CDOTA_Ability_Lua::OnHeroLevelUp(CDOTA_Ability_Lua *const this)
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


// CDOTA_Ability_Lua::OnHeroDiedNearby  (line 331, @0x0000000002439b90, libserver.so)  // inlines: CVariantBase, Call<CVariantBase<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator> >, CreateTableFromKeyValues, EntityToHScript, Get, GetPublicScriptScope, GetVM, LookupFunction, ReleaseFunction, ReleaseValue, ToHScript, operator=, ~CVariantBase
// calls: KeyValues::GetPtr, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>::Free, Recursive_ConvertKeyValuesToTable, CEntityInstance::CreatePublicScriptScope, _Unwind_Resume
void __fastcall CDOTA_Ability_Lua::OnHeroDiedNearby(CDOTA_Ability_Lua *const this, KeyValues *pKV)
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
    result.m_type = 0;
    result.m_flags = 0;
    pDest.m_type = 0;
    pDest.m_flags = 0;
    result.m_uint64 = 0;
    CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&vKV, &pDest);
    v22.m_flags = 0;
    v22.m_type = 0;
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


// CDOTA_Ability_Lua::Script_OnHeroDiedNearby  (line 349, @0x0000000002436680, libserver.so)  // inlines: AssignTo, CVariantBase, Float, GetVM, SetBool, TempString, ToString, operator float, ~CVariantBase
// calls: KeyValues::KeyValues, KeyValues::SetString, V_snprintf, VariantFieldTypeName, Warning, KeyValues::SetInt, KeyValues::SetFloat, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "ability_lua", "%g %g %g %g", "No conversion from %s to string at the moment!\n", "false", "true", "%d %d %d %d"
// globals: jpt_24367DB, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, jpt_2436A9B, jpt_2436AF3
void __fastcall CDOTA_Ability_Lua::Script_OnHeroDiedNearby(
        CDOTA_Ability_Lua *const this,
        HSCRIPT unit,
        HSCRIPT attacker,
        HSCRIPT table)
{
  int v5; // ebx
  unsigned int i; // eax
  float v7; // xmm1_4
  unsigned int v8; // r14d
  const char *v9; // r15
  const char *v10; // rsi
  const char *v11; // rax
  double v12; // xmm0_8
  const char *v13; // rcx
  unsigned __int8 m_char; // r15
  const char *v15; // rsi
  const char *m_uint64; // rsi
  const char *v17; // rax
  const char *v18; // rax
  double m_float; // xmm0_8
  const char *v20; // rcx
  const char *v21; // rax
  double m_float64; // xmm0_8
  const char *v23; // rcx
  int v24; // [rsp+1Ch] [rbp-84h]
  ScriptVariant_t vKey; // [rsp+30h] [rbp-70h] BYREF
  ScriptVariant_t vValue; // [rsp+40h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v29; // [rsp+68h] [rbp-38h]

  v29 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "ability_lua");
  vValue.m_flags = 0;
  vKey.m_flags = 0;
  vValue.m_type = 0;
  vKey.m_type = 0;
  vKey.m_uint64 = 0;
  vValue.m_uint64 = 0;
  v24 = (*(*g_pScriptVM + 280LL))(g_pScriptVM, table);
  if ( v24 > 0 )
  {
    v5 = 0;
    for ( i = (*(*g_pScriptVM + 296LL))(g_pScriptVM, table, 0, &vKey, &vValue);
          ;
          i = (*(*g_pScriptVM + 296LL))(g_pScriptVM, table, v8, &vKey, &vValue) )
    {
      v8 = i;
      if ( vValue.m_type == 30 )
        break;
      switch ( vValue.m_type )
      {
        case 2:
          v17 = VariantFieldTypeName(2);
          Warning("No conversion from %s to string at the moment!\n", v17);
          CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
          v9 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          goto LABEL_10;
        case 0x22:
          if ( vKey.m_type == 30 )
          {
            m_uint64 = vKey.m_uint64;
          }
          else
          {
            switch ( vKey.m_type )
            {
              case 0:
                goto LABEL_49;
              case 1:
                m_float = vKey.m_float;
                goto LABEL_52;
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
                v20 = "true";
                if ( vKey.m_char == 0 )
                  v20 = "false";
                V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v20);
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
                m_float = vKey.m_float64;
LABEL_52:
                V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
                break;
              case 0x25:
                V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vKey.m_int);
                break;
              default:
                v18 = VariantFieldTypeName(vKey.m_type);
                Warning("No conversion from %s to string at the moment!\n", v18);
LABEL_49:
                CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
                break;
            }
            m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          }
          KeyValues::SetFloat(&kv, m_uint64, v7);
          break;
        case 6:
          m_char = vValue.m_char;
          if ( vKey.m_type == 30 )
          {
            v15 = vKey.m_uint64;
          }
          else
          {
            switch ( vKey.m_type )
            {
              case 0:
                goto LABEL_64;
              case 1:
                m_float64 = vKey.m_float;
                goto LABEL_70;
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
                v23 = "true";
                if ( vKey.m_char == 0 )
                  v23 = "false";
                V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v23);
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
LABEL_70:
                V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float64);
                break;
              case 0x25:
                V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vKey.m_int);
                break;
              default:
                v21 = VariantFieldTypeName(vKey.m_type);
                Warning("No conversion from %s to string at the moment!\n", v21);
LABEL_64:
                CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
                break;
            }
            v15 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          }
          KeyValues::SetInt(&kv, v15, m_char);
          break;
        default:
          break;
      }
LABEL_6:
      (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vValue);
      if ( ++v5 == v24 )
        goto LABEL_40;
    }
    v9 = vValue.m_uint64;
LABEL_10:
    if ( vKey.m_type == 30 )
    {
      v10 = vKey.m_uint64;
    }
    else
    {
      switch ( vKey.m_type )
      {
        case 0:
          goto LABEL_18;
        case 1:
          v12 = vKey.m_float;
          goto LABEL_20;
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
          v13 = "true";
          if ( vKey.m_char == 0 )
            v13 = "false";
          V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v13);
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
          v12 = vKey.m_float64;
LABEL_20:
          V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", v12);
          break;
        case 0x25:
          V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vKey.m_int);
          break;
        default:
          v11 = VariantFieldTypeName(vKey.m_type);
          Warning("No conversion from %s to string at the moment!\n", v11);
LABEL_18:
          CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
          break;
      }
      v10 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
    }
    KeyValues::SetString(&kv, v10, v9);
    goto LABEL_6;
  }
LABEL_40:
  CVariantBase<CVariantDefaultAllocator>::Free(&vValue);
  CVariantBase<CVariantDefaultAllocator>::Free(&vKey);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Lua::OnInventoryContentsChanged  (line 379, @0x0000000002421760, libserver.so)  // inlines: Call, GetPublicScriptScope, GetVM
// strings: "OnInventoryContentsChanged"
void __fastcall CDOTA_Ability_Lua::OnInventoryContentsChanged(CDOTA_Ability_Lua *const this)
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


// CDOTA_Ability_Lua::OnItemEquipped  (line 386, @0x00000000024382c0, libserver.so)  // inlines: CVariantBase, Call<HSCRIPT__*>, EntityToHScript, Get, GetPublicScriptScope, GetVM, ToHScript, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, CEntityInstance::CreatePublicScriptScope, _Unwind_Resume
void __fastcall CDOTA_Ability_Lua::OnItemEquipped(CDOTA_Ability_Lua *const this, CDOTA_Item *pItem)
{
  HSCRIPT m_hScope; // r13
  CEntityIdentity *m_pEntity; // r15
  HSCRIPT v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r13
  ScriptVariant_t result; // [rsp+10h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v10; // [rsp+20h] [rbp-40h] BYREF

  result.m_type = 0;
  result.m_flags = 0;
  result.m_uint64 = 0;
  if ( pItem != 0 )
  {
    if ( pItem->m_pEntity->m_hPublicScope.m_hScope != 0 )
    {
      m_hScope = pItem->m_pEntity->m_hPublicScope.m_hScope;
    }
    else
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
  v10.m_uint64 = 0;
  v10.m_type = 0;
  v10.m_flags = 0;
  CVariantBase<CVariantDefaultAllocator>::Free(&v10);
  v10.m_uint64 = m_hScope;
  v6 = m_pEntity->m_hPublicScope.m_hScope;
  v10.m_type = 31;
  v7 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "OnItemEquipped", v6, 0);
  v8 = v7;
  if ( v7 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v7, &v10, 1, &result, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v8);
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&v10);
  CVariantBase<CVariantDefaultAllocator>::Free(&result);
}


// CDOTA_Ability_Lua::OnHeroCalculateStatBonus  (line 394, @0x00000000024216d0, libserver.so)  // inlines: Call, GetPublicScriptScope, GetVM
// strings: "OnHeroCalculateStatBonus"
void __fastcall CDOTA_Ability_Lua::OnHeroCalculateStatBonus(CDOTA_Ability_Lua *const this)
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


// CDOTA_Ability_Lua::GetAssociatedPrimaryAbilities  (line 401, @0x0000000002437010, libserver.so)  // inlines: CVariantBase, Call, GetPublicScriptScope, GetVM, TempString, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, CUtlString::Set, CUtlString::Get, _Unwind_Resume
// strings: "GetAssociatedPrimaryAbilities"
const char *__fastcall CDOTA_Ability_Lua::GetAssociatedPrimaryAbilities(CDOTA_Ability_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r14
  __int64 v3; // rax
  __int64 v4; // r12
  const char *v5; // rax
  CUtlString *p_m_szAssociatedPrimaryAbilities; // r15
  const char *v8; // [rsp+8h] [rbp-48h]
  ScriptVariant_t v9; // [rsp+10h] [rbp-40h] BYREF

  v9.m_type = 0;
  v9.m_flags = 0;
  m_pEntity = this->m_pEntity;
  v9.m_uint64 = 0;
  v3 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "GetAssociatedPrimaryAbilities", m_pEntity->m_hPublicScope.m_hScope, 0);
  v4 = v3;
  if ( v3 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v3, 0, 0, &v9, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v4);
  }
  if ( v9.m_type == 30 && *v9.m_pszString != 0 )
  {
    p_m_szAssociatedPrimaryAbilities = &this->m_szAssociatedPrimaryAbilities;
    CUtlString::Set(p_m_szAssociatedPrimaryAbilities, v9.m_pszString);
    v5 = CUtlString::Get(p_m_szAssociatedPrimaryAbilities);
  }
  else
  {
    v5 = 0;
  }
  v8 = v5;
  CVariantBase<CVariantDefaultAllocator>::Free(&v9);
  return v8;
}


// CDOTA_Ability_Lua::GetAssociatedSecondaryAbilities  (line 418, @0x0000000002437110, libserver.so)  // inlines: CVariantBase, Call, GetPublicScriptScope, GetVM, TempString, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, CUtlString::Set, CUtlString::Get, _Unwind_Resume
// strings: "GetAssociatedSecondaryAbilities"
const char *__fastcall CDOTA_Ability_Lua::GetAssociatedSecondaryAbilities(CDOTA_Ability_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r14
  __int64 v3; // rax
  __int64 v4; // r12
  const char *v5; // rax
  CUtlString *p_m_szAssociatedSecondaryAbilities; // r15
  const char *v8; // [rsp+8h] [rbp-48h]
  ScriptVariant_t v9; // [rsp+10h] [rbp-40h] BYREF

  v9.m_type = 0;
  v9.m_flags = 0;
  m_pEntity = this->m_pEntity;
  v9.m_uint64 = 0;
  v3 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "GetAssociatedSecondaryAbilities", m_pEntity->m_hPublicScope.m_hScope, 0);
  v4 = v3;
  if ( v3 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v3, 0, 0, &v9, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v4);
  }
  if ( v9.m_type == 30 && *v9.m_pszString != 0 )
  {
    p_m_szAssociatedSecondaryAbilities = &this->m_szAssociatedSecondaryAbilities;
    CUtlString::Set(p_m_szAssociatedSecondaryAbilities, v9.m_pszString);
    v5 = CUtlString::Get(p_m_szAssociatedSecondaryAbilities);
  }
  else
  {
    v5 = 0;
  }
  v8 = v5;
  CVariantBase<CVariantDefaultAllocator>::Free(&v9);
  return v8;
}


// CDOTA_Ability_Lua::IsStealable  (line 435, @0x0000000002432ce0, libserver.so)  // inlines: CVariantBase, Call, Free, GetPublicScriptScope, GetVM, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
bool __fastcall CDOTA_Ability_Lua::IsStealable(CDOTA_Ability_Lua *const this)
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


// CDOTA_Ability_Lua::IsHiddenWhenStolen  (line 444, @0x0000000002432db0, libserver.so)  // inlines: CVariantBase, Call, Free, GetPublicScriptScope, GetVM, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
bool __fastcall CDOTA_Ability_Lua::IsHiddenWhenStolen(CDOTA_Ability_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v2; // rax
  __int64 v3; // rbx
  bool result; // al
  char m_char; // [rsp+Ch] [rbp-34h]
  ScriptVariant_t v6; // [rsp+10h] [rbp-30h] BYREF

  v6.m_flags = 0;
  v6.m_type = 0;
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


// CDOTA_Ability_Lua::OnStolen  (line 453, @0x000000000243a040, libserver.so)  // inlines: CVariantBase, Call<CVariantBase<CVariantDefaultAllocator> >, EntityToHScript, Get, GetPublicScriptScope, GetVM, ToHScript, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>::Free, CEntityInstance::CreatePublicScriptScope, _Unwind_Resume
void __fastcall CDOTA_Ability_Lua::OnStolen(CDOTA_Ability_Lua *const this, CDOTABaseAbility *pSourceAbility)
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


// CDOTA_Ability_Lua::OnUnStolen  (line 462, @0x0000000002421880, libserver.so)  // inlines: Call, GetPublicScriptScope, GetVM
void __fastcall CDOTA_Ability_Lua::OnUnStolen(CDOTA_Ability_Lua *const this)
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


// CDOTA_Ability_Lua::IsRefreshable  (line 468, @0x0000000002432e80, libserver.so)  // inlines: CVariantBase, Call, Free, GetPublicScriptScope, GetVM, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
bool __fastcall CDOTA_Ability_Lua::IsRefreshable(CDOTA_Ability_Lua *const this)
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


// CDOTA_Ability_Lua::IsHiddenAbilityCastable  (line 477, @0x0000000002432f50, libserver.so)  // inlines: CVariantBase, Call, Free, GetPublicScriptScope, GetVM, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "IsHiddenAbilityCastable"
bool __fastcall CDOTA_Ability_Lua::IsHiddenAbilityCastable(CDOTA_Ability_Lua *const this)
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


// CDOTA_Ability_Lua::ProcsMagicStick  (line 486, @0x0000000002433030, libserver.so)  // inlines: CVariantBase, Call, Free, GetPublicScriptScope, GetVM, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
bool __fastcall CDOTA_Ability_Lua::ProcsMagicStick(CDOTA_Ability_Lua *const this)
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


// CDOTA_Ability_Lua::GetPlaybackRateOverride  (line 495, @0x0000000002433110, libserver.so)  // inlines: CVariantBase, Call, Float, Free, GetPublicScriptScope, GetVM, operator float, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "GetPlaybackRateOverride"
float __fastcall CDOTA_Ability_Lua::GetPlaybackRateOverride(CDOTA_Ability_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v2; // rax
  __int64 v3; // rbx
  float result; // xmm0_4
  float v5; // [rsp+Ch] [rbp-34h]
  ScriptVariant_t v6; // [rsp+10h] [rbp-30h] BYREF

  v6.m_flags = 0;
  v6.m_type = 0;
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


// CDOTA_Ability_Lua::GetConceptRecipientType  (line 504, @0x0000000002433200, libserver.so)  // inlines: CVariantBase, Call, Free, GetPublicScriptScope, GetVM, Int, operator int, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "GetConceptRecipientType"
int __fastcall CDOTA_Ability_Lua::GetConceptRecipientType(CDOTA_Ability_Lua *const this)
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


// CDOTA_Ability_Lua::SpeakTrigger  (line 513, @0x0000000002433300, libserver.so)  // inlines: CVariantBase, Call, Free, GetPublicScriptScope, GetVM, Int, operator int, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
DOTAAbilitySpeakTrigger_t __fastcall CDOTA_Ability_Lua::SpeakTrigger(CDOTA_Ability_Lua *const this)
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


// CDOTA_Ability_Lua::GetCastAnimation  (line 522, @0x0000000002433400, libserver.so)  // inlines: CVariantBase, Call, Free, GetPublicScriptScope, GetVM, Int, operator int, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
Activity __fastcall CDOTA_Ability_Lua::GetCastAnimation(CDOTA_Ability_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v2; // rax
  __int64 v3; // rbx
  Activity result; // eax
  Activity v5; // [rsp+Ch] [rbp-34h]
  ScriptVariant_t v6; // [rsp+10h] [rbp-30h] BYREF

  v6.m_type = 0;
  v6.m_flags = 0;
  m_pEntity = this->m_pEntity;
  v6.m_uint64 = 0;
  v2 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "GetCastAnimation", m_pEntity->m_hPublicScope.m_hScope, 0);
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


// CDOTA_Ability_Lua::GetChannelAnimation  (line 531, @0x0000000002433500, libserver.so)  // inlines: CVariantBase, Call, Free, GetPublicScriptScope, GetVM, Int, operator int, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
Activity __fastcall CDOTA_Ability_Lua::GetChannelAnimation(CDOTA_Ability_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r13
  __int64 v2; // rax
  __int64 v3; // rbx
  Activity result; // eax
  Activity v5; // [rsp+Ch] [rbp-34h]
  ScriptVariant_t v6; // [rsp+10h] [rbp-30h] BYREF

  v6.m_type = 0;
  v6.m_flags = 0;
  m_pEntity = this->m_pEntity;
  v6.m_uint64 = 0;
  v2 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "GetChannelAnimation", m_pEntity->m_hPublicScope.m_hScope, 0);
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


// CDOTA_Ability_Lua::GetBehavior  (line 542, @0x0000000002433600, libserver.so)  // inlines: CVariantBase, Call, Free, GetPublicScriptScope, GetVM, Int, operator int, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
int __fastcall CDOTA_Ability_Lua::GetBehavior(CDOTA_Ability_Lua *const this)
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
  v2 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "GetBehavior", m_pEntity->m_hPublicScope.m_hScope, 0);
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


// CDOTA_Ability_Lua::CastFilterResult  (line 551, @0x0000000002438410, libserver.so)  // inlines: CVariantBase, Call<HSCRIPT__*>, EntityToHScript, Get, GetPublicScriptScope, GetVM, Int, ToHScript, operator int, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, CEntityInstance::CreatePublicScriptScope, _Unwind_Resume
int __fastcall CDOTA_Ability_Lua::CastFilterResult(CDOTA_Ability_Lua *const this, CDOTA_BaseNPC *pTarget)
{
  HSCRIPT m_hScope; // r13
  CEntityIdentity *m_pEntity; // r15
  __int64 v6; // rax
  __int64 v7; // r13
  int m_float; // r12d
  ScriptVariant_t v10; // [rsp+10h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v11; // [rsp+20h] [rbp-40h] BYREF

  v10.m_type = 0;
  v10.m_flags = 0;
  v10.m_uint64 = 0;
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
  m_pEntity = this->m_pEntity;
  v11.m_uint64 = 0;
  v11.m_type = 0;
  v11.m_flags = 0;
  CVariantBase<CVariantDefaultAllocator>::Free(&v11);
  v11.m_uint64 = m_hScope;
  v11.m_type = 31;
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
    m_float = v10.m_float;
  }
  else
  {
    m_float = v10.m_int;
    if ( v10.m_type == 34 )
      m_float = v10.m_float64;
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&v10);
  return m_float;
}


// CDOTA_Ability_Lua::CastFilterResult  (line 560, @0x0000000002437fa0, libserver.so)  // inlines: CVariantBase, Call<Vector>, CopyData<Vector>, GetPublicScriptScope, GetVM, Int, operator int, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "CastFilterResultLocation"
int __fastcall CDOTA_Ability_Lua::CastFilterResult(CDOTA_Ability_Lua *const this, const Vector *const vLocation)
{
  __int64 v2; // rax
  CEntityIdentity *m_pEntity; // r15
  HSCRIPT m_hScope; // rdx
  __int64 v5; // rax
  __int64 v6; // r13
  int m_float; // r12d
  __int64 v9; // [rsp+10h] [rbp-60h] BYREF
  vec_t z; // [rsp+18h] [rbp-58h]
  ScriptVariant_t v11; // [rsp+20h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v12; // [rsp+30h] [rbp-40h] BYREF

  v11.m_type = 0;
  v11.m_flags = 0;
  v2 = *&vLocation->x;
  m_pEntity = this->m_pEntity;
  v11.m_uint64 = 0;
  v12.m_uint64 = 0;
  v9 = v2;
  z = vLocation->z;
  v12.m_type = 0;
  v12.m_flags = 0;
  CVariantBase<CVariantDefaultAllocator>::Free(&v12);
  v12.m_type = 3;
  m_hScope = m_pEntity->m_hPublicScope.m_hScope;
  v12.m_uint64 = &v9;
  v5 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "CastFilterResultLocation", m_hScope, 0);
  v6 = v5;
  if ( v5 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v5, &v12, 1, &v11, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v6);
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&v12);
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
  CVariantBase<CVariantDefaultAllocator>::Free(&v11);
  return m_float;
}


// CDOTA_Ability_Lua::CastFilterResult  (line 569, @0x0000000002433700, libserver.so)  // inlines: CVariantBase, Call, Free, GetPublicScriptScope, GetVM, Int, operator int, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
int __fastcall CDOTA_Ability_Lua::CastFilterResult(CDOTA_Ability_Lua *const this)
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


// CDOTA_Ability_Lua::GetCustomCastError  (line 578, @0x0000000002437210, libserver.so)  // inlines: CVariantBase, Call<HSCRIPT__*>, EntityToHScript, Get, GetPublicScriptScope, GetVM, TempString, ToHScript, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, CUtlString::Set, CUtlString::Get, CEntityInstance::CreatePublicScriptScope, _Unwind_Resume
// strings: "GetCustomCastErrorTarget"
const char *__fastcall CDOTA_Ability_Lua::GetCustomCastError(CDOTA_Ability_Lua *const this, CDOTA_BaseNPC *pTarget)
{
  HSCRIPT m_hScope; // r13
  CEntityIdentity *m_pEntity; // r15
  HSCRIPT v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r13
  const char *v8; // rax
  const char *thisb; // [rsp+8h] [rbp-58h]
  ScriptVariant_t v12; // [rsp+10h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v13; // [rsp+20h] [rbp-40h] BYREF

  v12.m_type = 0;
  v12.m_flags = 0;
  v12.m_uint64 = 0;
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
  v13.m_uint64 = 0;
  m_pEntity = this->m_pEntity;
  v13.m_type = 0;
  v13.m_flags = 0;
  CVariantBase<CVariantDefaultAllocator>::Free(&v13);
  v13.m_uint64 = m_hScope;
  v5 = m_pEntity->m_hPublicScope.m_hScope;
  v13.m_type = 31;
  v6 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "GetCustomCastErrorTarget", v5, 0);
  v7 = v6;
  if ( v6 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v6, &v13, 1, &v12, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v7);
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&v13);
  v8 = 0;
  if ( v12.m_type == 30 && *v12.m_pszString != 0 )
  {
    CUtlString::Set(&this->m_szCastErrorTarget, v12.m_pszString);
    v8 = CUtlString::Get(&this->m_szCastErrorTarget);
  }
  thisb = v8;
  CVariantBase<CVariantDefaultAllocator>::Free(&v12);
  return thisb;
}


// CDOTA_Ability_Lua::GetCustomCastError  (line 597, @0x0000000002437910, libserver.so)  // inlines: CVariantBase, Call<Vector>, CopyData<Vector>, GetPublicScriptScope, GetVM, TempString, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, CUtlString::Set, CUtlString::Get, _Unwind_Resume
// strings: "GetCustomCastErrorLocation"
const char *__fastcall CDOTA_Ability_Lua::GetCustomCastError(
        CDOTA_Ability_Lua *const this,
        const Vector *const vLocation)
{
  __int64 v2; // rax
  CEntityIdentity *m_pEntity; // r15
  HSCRIPT m_hScope; // rdx
  __int64 v5; // rax
  __int64 v6; // r13
  const char *v7; // rax
  const char *thisb; // [rsp+8h] [rbp-68h]
  __int64 v11; // [rsp+10h] [rbp-60h] BYREF
  int v12; // [rsp+18h] [rbp-58h]
  ScriptVariant_t v13; // [rsp+20h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v14; // [rsp+30h] [rbp-40h] BYREF

  v2 = *&vLocation->x;
  v14.m_flags = 0;
  m_pEntity = this->m_pEntity;
  v13.m_type = 0;
  v13.m_flags = 0;
  v13.m_uint64 = 0;
  v11 = v2;
  *&v2 = vLocation->z;
  v14.m_type = 0;
  v14.m_uint64 = 0;
  v12 = v2;
  CVariantBase<CVariantDefaultAllocator>::Free(&v14);
  v14.m_uint64 = &v11;
  m_hScope = m_pEntity->m_hPublicScope.m_hScope;
  v14.m_type = 3;
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


// CDOTA_Ability_Lua::GetCustomCastError  (line 616, @0x00000000024373a0, libserver.so)  // inlines: CVariantBase, Call, GetPublicScriptScope, GetVM, TempString, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, CUtlString::Set, CUtlString::Get, _Unwind_Resume
const char *__fastcall CDOTA_Ability_Lua::GetCustomCastError(CDOTA_Ability_Lua *const this)
{
  CEntityIdentity *m_pEntity; // r14
  __int64 v3; // rax
  __int64 v4; // r12
  const char *v5; // rax
  CUtlString *p_m_szCastError; // r15
  const char *v8; // [rsp+8h] [rbp-48h]
  ScriptVariant_t v9; // [rsp+10h] [rbp-40h] BYREF

  v9.m_type = 0;
  v9.m_flags = 0;
  m_pEntity = this->m_pEntity;
  v9.m_uint64 = 0;
  v3 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "GetCustomCastError", m_pEntity->m_hPublicScope.m_hScope, 0);
  v4 = v3;
  if ( v3 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v3, 0, 0, &v9, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v4);
  }
  if ( v9.m_type == 30 && *v9.m_pszString != 0 )
  {
    p_m_szCastError = &this->m_szCastError;
    CUtlString::Set(p_m_szCastError, v9.m_pszString);
    v5 = CUtlString::Get(p_m_szCastError);
  }
  else
  {
    v5 = 0;
  }
  v8 = v5;
  CVariantBase<CVariantDefaultAllocator>::Free(&v9);
  return v8;
}


// CDOTA_Ability_Lua::GetCastRange  (line 635, @0x0000000002437a70, libserver.so)  // inlines: CVariantBase, Call<Vector, HSCRIPT__*>, CopyData<Vector>, EntityToHScript, Free, Get, GetPublicScriptScope, GetVM, Int, ToHScript, operator int, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, CEntityInstance::CreatePublicScriptScope, _Unwind_Resume
int __fastcall CDOTA_Ability_Lua::GetCastRange(
        CDOTA_Ability_Lua *const this,
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


// CDOTA_Ability_Lua::GetManaCost  (line 644, @0x00000000024386b0, libserver.so)  // inlines: CVariantBase, Call<int>, GetPublicScriptScope, GetVM, Int, operator int, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
int __fastcall CDOTA_Ability_Lua::GetManaCost(CDOTA_Ability_Lua *const this, int iLevel)
{
  CEntityIdentity *m_pEntity; // r15
  __int64 v4; // rax
  __int64 v5; // r13
  int m_float; // r12d
  ScriptVariant_t v8; // [rsp+10h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v9; // [rsp+20h] [rbp-40h] BYREF

  v8.m_type = 0;
  v8.m_flags = 0;
  m_pEntity = this->m_pEntity;
  v9.m_type = 0;
  v8.m_uint64 = 0;
  v9.m_flags = 0;
  v9.m_uint64 = 0;
  CVariantBase<CVariantDefaultAllocator>::Free(&v9);
  v9.m_int = iLevel;
  v9.m_type = 5;
  v4 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "GetManaCost", m_pEntity->m_hPublicScope.m_hScope, 0);
  v5 = v4;
  if ( v4 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v4, &v9, 1, &v8, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v5);
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&v9);
  if ( v8.m_type == 1 )
  {
    m_float = v8.m_float;
  }
  else
  {
    m_float = v8.m_int;
    if ( v8.m_type == 34 )
      m_float = v8.m_float64;
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&v8);
  return m_float;
}


// CDOTA_Ability_Lua::GetChannelledManaCostPerSecond  (line 653, @0x0000000002433ad0, libserver.so)  // inlines: CVariantBase, Call<int>, GetPublicScriptScope, GetVM, Int, operator int, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "GetChannelledManaCostPerSecond"
int __fastcall CDOTA_Ability_Lua::GetChannelledManaCostPerSecond(CDOTA_Ability_Lua *const this, int iLevel)
{
  CEntityIdentity *m_pEntity; // r15
  __int64 v4; // rax
  __int64 v5; // r13
  int m_float; // r12d
  ScriptVariant_t v8; // [rsp+10h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v9; // [rsp+20h] [rbp-40h] BYREF

  v8.m_type = 0;
  v8.m_flags = 0;
  m_pEntity = this->m_pEntity;
  v9.m_type = 0;
  v8.m_uint64 = 0;
  v9.m_flags = 0;
  v9.m_uint64 = 0;
  CVariantBase<CVariantDefaultAllocator>::Free(&v9);
  v9.m_int = iLevel;
  v9.m_type = 5;
  v4 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "GetChannelledManaCostPerSecond", m_pEntity->m_hPublicScope.m_hScope, 0);
  v5 = v4;
  if ( v4 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v4, &v9, 1, &v8, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v5);
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&v9);
  if ( v8.m_type == 1 )
  {
    m_float = v8.m_float;
  }
  else
  {
    m_float = v8.m_int;
    if ( v8.m_type == 34 )
      m_float = v8.m_float64;
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&v8);
  return m_float;
}


// CDOTA_Ability_Lua::GetGoldCost  (line 662, @0x00000000024387e0, libserver.so)  // inlines: CVariantBase, Call<int>, GetPublicScriptScope, GetVM, Int, operator int, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
int __fastcall CDOTA_Ability_Lua::GetGoldCost(CDOTA_Ability_Lua *const this, int iLevel)
{
  CEntityIdentity *m_pEntity; // r15
  __int64 v4; // rax
  __int64 v5; // r13
  int m_float; // r12d
  ScriptVariant_t v8; // [rsp+10h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v9; // [rsp+20h] [rbp-40h] BYREF

  v8.m_type = 0;
  v8.m_flags = 0;
  m_pEntity = this->m_pEntity;
  v9.m_type = 0;
  v8.m_uint64 = 0;
  v9.m_flags = 0;
  v9.m_uint64 = 0;
  CVariantBase<CVariantDefaultAllocator>::Free(&v9);
  v9.m_int = iLevel;
  v9.m_type = 5;
  v4 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "GetGoldCost", m_pEntity->m_hPublicScope.m_hScope, 0);
  v5 = v4;
  if ( v4 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v4, &v9, 1, &v8, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v5);
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&v9);
  if ( v8.m_type == 1 )
  {
    m_float = v8.m_float;
  }
  else
  {
    m_float = v8.m_int;
    if ( v8.m_type == 34 )
      m_float = v8.m_float64;
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&v8);
  return m_float;
}


// CDOTA_Ability_Lua::GetCooldown  (line 671, @0x0000000002438590, libserver.so)  // inlines: CVariantBase, Call<int>, Float, GetPublicScriptScope, GetVM, operator float, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
float __fastcall CDOTA_Ability_Lua::GetCooldown(CDOTA_Ability_Lua *const this, int iLevel)
{
  CEntityIdentity *m_pEntity; // r15
  __int64 v4; // rax
  __int64 v5; // r13
  float m_float; // xmm0_4
  float v8; // [rsp+Ch] [rbp-54h]
  ScriptVariant_t v9; // [rsp+10h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v10; // [rsp+20h] [rbp-40h] BYREF

  v9.m_type = 0;
  m_pEntity = this->m_pEntity;
  v9.m_flags = 0;
  v10.m_flags = 0;
  v9.m_uint64 = 0;
  v10.m_type = 0;
  v10.m_uint64 = 0;
  CVariantBase<CVariantDefaultAllocator>::Free(&v10);
  v10.m_int = iLevel;
  v10.m_type = 5;
  v4 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "GetCooldown", m_pEntity->m_hPublicScope.m_hScope, 0);
  v5 = v4;
  if ( v4 != 0 )
  {
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, v4, &v10, 1, &v9, m_pEntity->m_hPublicScope.m_hScope, 1);
    (*(*g_pScriptVM + 152LL))(g_pScriptVM, v5);
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&v10);
  m_float = v9.m_float;
  if ( v9.m_type == 34 )
    m_float = v9.m_float64;
  v8 = m_float;
  CVariantBase<CVariantDefaultAllocator>::Free(&v9);
  return v8;
}


// CDOTA_Ability_Lua::GetChannelTime  (line 680, @0x0000000002433800, libserver.so)  // inlines: CVariantBase, Call, Float, Free, GetPublicScriptScope, GetVM, operator float, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
float __fastcall CDOTA_Ability_Lua::GetChannelTime(CDOTA_Ability_Lua *const this)
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


