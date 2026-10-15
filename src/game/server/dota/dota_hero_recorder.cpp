// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_hero_recorder.cpp:23
class C_CDOTA_Hero_Recorder_MapInstall {
	C_CDOTA_Hero_Recorder_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// HeroRecorder  (line 11, @0x000000000259a6a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// callers: CDOTA_Speech::CanSpeak
// globals: g_hHeroRecorder, CEntityHandle::gm_pEntityList
CDOTA_Hero_Recorder *__cdecl HeroRecorder()
{
  CDOTA_Hero_Recorder *result; // rax
  CEntityIdentity *v1; // rcx
  CEntityIdentity *v2; // rcx

  result = 0;
  if ( g_hHeroRecorder.m_Index + 2 > 1 )
  {
    v1 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(g_hHeroRecorder.m_Index) >> 9) & 0x3F];
    if ( v1 != 0 )
    {
      v2 = &v1[g_hHeroRecorder.m_Index & 0x1FF];
      if ( v2 != 0 && g_hHeroRecorder.m_Index == v2->m_EHandle.m_Index )
        return v2->m_pInstance;
    }
  }
  return result;
}


// CDOTA_Hero_Recorder::YouForgotToImplementOrDeclareServerClass  (line 23, @0x0000000002593550, libserver.so)
int __fastcall CDOTA_Hero_Recorder::YouForgotToImplementOrDeclareServerClass(CDOTA_Hero_Recorder *const this)
{
  return 0;
}


// CDOTA_Hero_Recorder::GetServerClass  (line 23, @0x0000000002599650, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Hero_Recorder::GetServerClass(CDOTA_Hero_Recorder *const this)
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


// CDOTA_Hero_Recorder::CDOTA_Hero_Recorder  (line 25, @0x000000000259a700, libserver.so)  // inlines: CEntityHandle, CNetworkHandleBase, CNetworkVarBase, EnsureValidValue<bool>
// calls: CBaseEntity::CBaseEntity
// callers: CDOTA_Hero_Recorder::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CDOTA_Hero_Recorder::CDOTA_Hero_Recorder(CDOTA_Hero_Recorder *const this)
{
  CBaseEntity::CBaseEntity(this);
  this->m_bStartRecording.m_Value = 0;
  this->_vptr_IHandleEntity = &off_4101070;
  this->m_hHero.m_Value.m_Index = -1;
  this->m_hPlayer.m_Value.m_Index = -1;
  this->m_flStartRecordingTime = 0.0;
}


// CDOTA_Hero_Recorder::~CDOTA_Hero_Recorder  (line 30, @0x0000000002593810, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CDOTA_Hero_Recorder::~CDOTA_Hero_Recorder(CDOTA_Hero_Recorder *const this)
{
  this->_vptr_IHandleEntity = &off_4101070;
  CBaseEntity::~CBaseEntity(this);
}


// CDOTA_Hero_Recorder::~CDOTA_Hero_Recorder  (line 30, @0x0000000002593830, libserver.so)  // inlines: ~CDOTA_Hero_Recorder
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CDOTA_Hero_Recorder::~CDOTA_Hero_Recorder(CDOTA_Hero_Recorder *const this)
{
  this->_vptr_IHandleEntity = &off_4101070;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Hero_Recorder::Spawn  (line 34, @0x0000000002597910, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, curtime, operator=
// calls: CBaseEntity::Spawn, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// globals: g_hHeroRecorder, CDOTA_Hero_Recorder::RecorderThink(void)
void __fastcall CDOTA_Hero_Recorder::Spawn(CDOTA_Hero_Recorder *const this, const CEntityKeyValues *pKeyValues)
{
  CEntityIdentity *m_pEntity; // rdx
  int v4; // eax
  __int16 v5; // cx
  double v6; // xmm1_8
  double v7; // xmm0_8
  CGlobalVars *v8; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  if ( this != 0 && (m_pEntity = this->m_pEntity) != 0 )
  {
    v4 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v5 = 0x7FFF;
    else
      v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(g_hHeroRecorder.m_Index) = v5 | g_hHeroRecorder.m_Index & 0x8000;
    g_hHeroRecorder.m_Index = (v4 << 15) | g_hHeroRecorder.m_Index & 0x7FFF;
  }
  else
  {
    g_hHeroRecorder.m_Index = -1;
  }
  CBaseEntity::Spawn(this, pKeyValues);
  CBaseEntity::ThinkSet(this, CDOTA_Hero_Recorder::RecorderThink, 0.0, 0, 0);
  v7 = 0.0;
  v8 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v7 = LODWORD(v8->m_flCurrentTime);
  }
  CBaseEntity::SetNextThink(this, v7, v6, 0);
}


// PostHeroRecorderSpawnCallback  (line 44, @0x0000000002599030, libserver.so)  // inlines: AssignTo<long long unsigned int>, Base, Element, FindKeyHash, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetPtrValue, GetSerialNumber, GetValue, GetValue<long long unsigned int>, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, curtime, operator!=, operator=, operator[]
// calls: VariantFieldTypeName, Warning
// strings: "uint64", "No free conversion of %s variant to %s right now\n"
// globals: jpt_2599104, CEntityKeyValues::sm_EmptyVariant, CEntityHandle::gm_pEntityList
void __fastcall PostHeroRecorderSpawnCallback(CDOTA_BaseNPC *pSpawned, const CEntityKeyValues *pEntityKeyValues)
{
  __int64 v2; // r9
  __int64 m_nCount; // r8
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  double m_float64; // rbx
  CEntityVariant *p_m_value; // rdx
  int16 m_type; // ax
  int v12; // eax
  CDOTA_BaseNPC *m_pInstance; // rcx
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CGlobalVars *v16; // r12
  void (__fastcall *m_pfnWarningFunc)(__int64); // rax
  CEntityIdentity *m_pEntity; // rdx
  int v19; // eax
  __int16 v20; // cx
  const char *v21; // rax
  double v22; // xmm0_8
  float m_float; // xmm0_4

  m_nCount = pEntityKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount > 0 )
  {
    m_nAllocated = pEntityKeyValues->m_keyHashes.m_nAllocated;
    v6 = 0;
    v2 = m_nAllocated;
    do
    {
      if ( m_nAllocated != 0 )
      {
        m_pElements = (&pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( m_nAllocated > 9 )
          m_pElements = pEntityKeyValues->m_keyHashes.m_pElements;
        if ( m_pElements[v6] == -707484789 )
        {
LABEL_9:
          if ( pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
            v8 = pEntityKeyValues->m_keyValues.m_pElements;
          else
            v8 = 0;
          m_float64 = 0.0;
          p_m_value = &v8[v6].m_value;
          m_type = p_m_value->m_type;
          if ( m_type != 0 )
            goto LABEL_12;
          goto LABEL_19;
        }
      }
      else if ( *(4 * v6) == -707484789 )
      {
        goto LABEL_9;
      }
      ++v6;
    }
    while ( m_nCount > v6 );
  }
  p_m_value = &CEntityKeyValues::sm_EmptyVariant;
  m_float64 = 0.0;
  m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( m_type != 0 )
  {
LABEL_12:
    if ( m_type == 33 )
    {
LABEL_39:
      m_float64 = p_m_value->m_float64;
    }
    else if ( (m_type & 0xFFFD) == 0x19 || (m_type - 3) <= 1u || m_type == 39 || m_type == 30 )
    {
      v21 = VariantFieldTypeName(m_type);
      Warning("No free conversion of %s variant to %s right now\n", v21, "uint64");
LABEL_38:
      m_float64 = 0.0;
    }
    else
    {
      switch ( m_type )
      {
        case 1:
          m_float = p_m_value->m_float;
          if ( p_m_value->m_float >= 9.223372e18 )
            *&m_float64 = (m_float - 9.223372e18) ^ 0x8000000000000000LL;
          else
            *&m_float64 = m_float;
          break;
        case 5:
          *&m_float64 = p_m_value->m_int;
          break;
        case 6:
          *&m_float64 = p_m_value->m_char;
          break;
        case 8:
          *&m_float64 = p_m_value->m_char;
          break;
        case 26:
          goto LABEL_39;
        case 34:
          v22 = p_m_value->m_float64;
          if ( p_m_value->m_float64 >= 9.223372036854776e18 )
            *&m_float64 = (v22 - 9.223372036854776e18) ^ 0x8000000000000000LL;
          else
            *&m_float64 = v22;
          break;
        case 37:
          *&m_float64 = p_m_value->m_uint;
          break;
        default:
          goto LABEL_38;
      }
    }
  }
LABEL_19:
  v12 = *(*&m_float64 + 780LL);
  m_pInstance = 0;
  if ( (v12 + 2) > 1 )
  {
    v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*(*&m_float64 + 780LL) >> 9) & 0x3F];
    if ( v14 != 0 )
    {
      v15 = &v14[*(*&m_float64 + 780LL) & 0x1FF];
      if ( v15 != 0 && v12 == v15->m_EHandle.m_Index )
        m_pInstance = v15->m_pInstance;
    }
  }
  if ( pSpawned == m_pInstance )
  {
LABEL_25:
    v16 = gpGlobals;
    if ( gpGlobals != 0 )
      goto LABEL_26;
LABEL_36:
    *(*&m_float64 + 788LL) = 1065353216;
    return;
  }
  (*(**&m_float64 + 176LL))(COERCE_DOUBLE(*&m_float64), 780, 0xFFFFFFFFLL, 0xFFFFFFFFLL, m_nCount, v2);
  if ( pSpawned == 0 || (m_pEntity = pSpawned->m_pEntity) == 0 )
  {
    *(*&m_float64 + 780LL) = -1;
    goto LABEL_25;
  }
  v19 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  if ( m_pEntity->m_EHandle.m_Index == -1 )
    v20 = 0x7FFF;
  else
    v20 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  *(*&m_float64 + 780LL) = v20 | *(*&m_float64 + 780LL) & 0x8000;
  *(*&m_float64 + 780LL) = (v19 << 15) | *(*&m_float64 + 780LL) & 0x7FFF;
  v16 = gpGlobals;
  if ( gpGlobals == 0 )
    goto LABEL_36;
LABEL_26:
  if ( !v16->m_bEnableAssertions && !v16->m_bInSimulation )
  {
    m_pfnWarningFunc = v16->m_pfnWarningFunc;
    if ( m_pfnWarningFunc != 0 )
      m_pfnWarningFunc(1);
  }
  *(*&m_float64 + 788LL) = v16->m_flCurrentTime + 1.0;
}


// CDOTA_Hero_Recorder::SetHeroClass  (line 51, @0x00000000025b0130, libserver.so)  // inlines: AddKeyValue<long long unsigned int>, AddToTail, Base, Bind, CDotaNPCSpawnerContext, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawnerContext, CEntitySpawnerContextBase, CEntitySpawnerContextModifyScope, CUtlDelegate, Convert<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const, void (detail::GenericClass::*)()>, CopyFrom<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void> >, Element, FastDelegate2, FindKeyHash, Free, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, NetworkStateChanged, Set, SetMementoFrom, SetPtrValue, SetValue<long long unsigned int>, UtlMakeDelegate<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, bindmemfunc<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const>, bindstaticfunc<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const>, operator!=, operator=, operator=<bool>, operator[], ~CDotaNPCSpawnerContext, ~CEntityKeyValuesModifyScope, ~CEntitySpawnerContext, ~CEntitySpawnerContextBase, ~CEntitySpawnerContextModifyScope
// calls: CEntityKeyValues::CEntityKeyValues, CEntityKeyValuesModifyScope::BeginModify, CEntityKeyValuesModifyScope::Release, CDOTA_PlayerResource::SetHeroSpawnGroup, DOTA_Hero_Spawn, CEntityKeyValues::~CEntityKeyValues, CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int>::AddToTailGetPtr, CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, Warning, __stack_chk_fail, _Unwind_Resume, UTIL_Remove
// callers: CDOTA_Hero_Recorder::ChangeHero, dota_preview_hero, dota_record_hero
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n"
// globals: FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction(CDOTA_BaseNPC *,CEntityKeyValues const*), PostHeroRecorderSpawnCallback(CDOTA_BaseNPC *,CEntityKeyValues const*), CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Hero_Recorder::SetHeroClass(
        CDOTA_Hero_Recorder *const this,
        const char *pszScriptName,
        CDOTAPlayer *pPlayer)
{
  unsigned __int16 v6; // dx
  int v7; // esi
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  int v11; // eax
  uint32 m_Index; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CEntityIdentity *m_pEntity; // rdx
  int v16; // eax
  __int16 v17; // cx
  __int64 v18; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v19; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v21; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v22; // rax
  uint16 m_flags; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v24; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  uint16 v28; // ax
  __int64 v29; // [rsp+8h] [rbp-F8h]
  CDotaNPCSpawnerContextModifyScope sg; // [rsp+10h] [rbp-F0h] BYREF
  CDotaNPCSpawnerContext ctx; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v32; // [rsp+C8h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  if ( this->m_hHero.m_Value.m_Index == -1 )
  {
    v6 = 0x7FFF;
    v7 = 0x7FFF;
  }
  else
  {
    v6 = this->m_hHero.m_Value.m_Index & 0x7FFF;
    v7 = v6;
  }
  v8 = (this->m_hHero.m_Value.m_Index >> 15 << 15) | v6 & 0x7FFF;
  LODWORD(sg.m_sg.m_pKeyValues) = v8;
  if ( v8 + 2 > 1 )
  {
    v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
    if ( v9 != 0 )
    {
      v10 = &v9[v7 & 0x1FF];
      if ( v10 != 0 && v8 == v10->m_EHandle.m_Index && v10->m_pInstance != 0 )
        UTIL_Remove(v10->m_pInstance);
    }
  }
  sg.m_pContext = 0;
  sg.m_sg.m_pPrevAllocator = FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction;
  CEntityKeyValues::CEntityKeyValues(&ctx.m_entityKeyValues);
  ctx.m_pParent = 0;
  ctx.m_pCompletionListener = 0;
  sg.m_sg.m_pKeyValues = 0;
  ctx.m_callback.m_Closure.m_pFunction = *&sg.m_sg.m_pPrevAllocator;
  ctx.m_callback.m_Closure.m_pthis = PostHeroRecorderSpawnCallback;
  sg.m_sg.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&sg.m_sg, &ctx.m_entityKeyValues);
  sg.m_pContext = &ctx;
  if ( ctx.m_entityKeyValues.m_nQueuedForSpawnCount <= 0 )
  {
    if ( ctx.m_entityKeyValues.m_keyHashes.m_nCount <= 0 )
    {
LABEL_28:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&ctx.m_entityKeyValues.m_keyHashes);
      if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated != 0 )
      {
        m_pElements = (&ctx.m_entityKeyValues.m_keyHashes.m_nAllocAllocated + 1);
        if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated >= 0xA )
          m_pElements = ctx.m_entityKeyValues.m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      v29 = (ctx.m_entityKeyValues.m_keyHashes.m_nCount - 1);
      m_pElements[v29] = -707484789;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&ctx.m_entityKeyValues.m_keyValues);
      if ( ctx.m_entityKeyValues.m_keyValues.m_nAllocated != 0 )
        v21 = ctx.m_entityKeyValues.m_keyValues.m_pElements;
      else
        v21 = 0;
      v22 = &v21[v29];
      m_flags = v22->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v22->m_value.m_flags = m_flags & 0xFFFE;
      v22->m_value.m_uint64 = this;
      v22->m_value.m_type = 33;
      if ( ctx.m_entityKeyValues.m_keyValues.m_nAllocated != 0 )
        v24 = ctx.m_entityKeyValues.m_keyValues.m_pElements;
      else
        v24 = 0;
      v24[v29].m_pAttributeName = 0;
      goto LABEL_8;
    }
    v18 = 0;
    while ( 1 )
    {
      if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated != 0 )
      {
        v19 = (&ctx.m_entityKeyValues.m_keyHashes.m_nAllocAllocated + 1);
        if ( ctx.m_entityKeyValues.m_keyHashes.m_nAllocated > 9 )
          v19 = ctx.m_entityKeyValues.m_keyHashes.m_pElements;
      }
      else
      {
        v19 = 0;
      }
      if ( v19[v18] == -707484789 )
        break;
      if ( ctx.m_entityKeyValues.m_keyHashes.m_nCount <= ++v18 )
        goto LABEL_28;
    }
    if ( ctx.m_entityKeyValues.m_keyValues.m_nAllocated != 0 )
    {
      v25 = ctx.m_entityKeyValues.m_keyValues.m_pElements;
      v26 = v18;
      v27 = &ctx.m_entityKeyValues.m_keyValues.m_pElements[v26];
      if ( ctx.m_entityKeyValues.m_keyValues.m_pElements[v26].m_pAttributeName != 0 )
      {
LABEL_40:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v25[v26].m_pAttributeName);
        goto LABEL_8;
      }
    }
    else
    {
      v26 = v18;
      v25 = 0;
      v27 = v26 * 24;
      if ( *(v26 * 24 + 16) != 0 )
        goto LABEL_40;
    }
    v28 = *(v27 + 10);
    if ( (v28 & 1) != 0 )
      *(v27 + 10) = v28 & 0xFFFE;
    *v27 = this;
    *(v27 + 8) = 33;
  }
LABEL_8:
  CEntityKeyValuesModifyScope::Release(&sg.m_sg);
  v11 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
  CDOTA_PlayerResource::SetHeroSpawnGroup(g_pDOTAPlayerResource, v11, 0);
  DOTA_Hero_Spawn(pszScriptName, pPlayer, &ctx);
  m_Index = this->m_hPlayer.m_Value.m_Index;
  if ( m_Index + 2 <= 1
    || (v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPlayer.m_Value.m_Index) >> 9) & 0x3F]) == 0
    || (v14 = &v13[this->m_hPlayer.m_Value.m_Index & 0x1FF]) == 0
    || m_Index != v14->m_EHandle.m_Index
    || pPlayer != v14->m_pInstance )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 784, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_pEntity = pPlayer->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v16 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v17 = 0x7FFF;
      else
        v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hPlayer.m_Value.m_Index) = v17 | this->m_hPlayer.m_Value.m_Index & 0x8000;
      this->m_hPlayer.m_Value.m_Index = (v16 << 15) | this->m_hPlayer.m_Value.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hPlayer.m_Value.m_Index = -1;
    }
  }
  if ( this->m_bStartRecording.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bStartRecording.m_Value = 0;
  }
  CEntityKeyValues::~CEntityKeyValues(&ctx.m_entityKeyValues);
}


// CDOTA_Hero_Recorder::RecorderThink  (line 71, @0x0000000002598060, libserver.so)  // inlines: NetworkStateChanged, Set, curtime, operator=<bool>
// calls: CBaseEntity::SetNextThink
void __fastcall CDOTA_Hero_Recorder::RecorderThink(CDOTA_Hero_Recorder *const this)
{
  double v1; // xmm1_8
  float m_flStartRecordingTime; // xmm0_4
  CGlobalVars *v4; // r12
  double v5; // xmm0_8
  FnGlobalVarsWarningFunc v6; // rax
  CGlobalVars *v7; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  bool m_Value; // zf

  m_flStartRecordingTime = this->m_flStartRecordingTime;
  if ( m_flStartRecordingTime != 0.0 )
  {
    v7 = gpGlobals;
    v1 = 0.0;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          (m_pfnWarningFunc)(1, m_flStartRecordingTime, 0.0);
          m_flStartRecordingTime = this->m_flStartRecordingTime;
        }
      }
      *&v1 = LODWORD(v7->m_flCurrentTime);
    }
    if ( *&v1 >= m_flStartRecordingTime )
    {
      m_Value = this->m_bStartRecording.m_Value;
      this->m_flStartRecordingTime = 0.0;
      if ( !m_Value )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_bStartRecording.m_Value = 1;
      }
    }
  }
  v4 = gpGlobals;
  v5 = 0.0;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v6 = gpGlobals->m_pfnWarningFunc;
      if ( v6 != 0 )
        (v6)(1, 0.0);
    }
    *&v5 = LODWORD(v4->m_flCurrentTime);
  }
  CBaseEntity::SetNextThink(this, v5, v1, 0);
}


// CDOTA_Hero_Recorder::ChangeHero  (line 81, @0x00000000025b0600, libserver.so)  // inlines: CEntityHandle, GetBool, GetClassNameAsCStr, GetClassname, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, String, operator!
// calls: CDOTA_Hero_Recorder::SetHeroClass, DOTAGameManager, CDOTAGameManager::GetHeroIDByName, CDOTAGameManager::GetHighestHeroID, CDOTAGameManager::GetHeroDataByHeroID, KeyValues::GetInt, KeyValues::GetName
// callers: dota_record_hero_prev, dota_record_hero_next
// strings: "npc_dota_hero_antimage"
void __fastcall CDOTA_Hero_Recorder::ChangeHero(CDOTA_Hero_Recorder *const this, CDOTAPlayer *pPlayer, int nOffset)
{
  unsigned __int16 v5; // dx
  int v6; // esi
  uint32 v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTAPlayer *v10; // rdx
  const char *v11; // rsi
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rbx
  CDOTAGameManager *v14; // rax
  int HeroIDByName; // ebx
  CDOTAGameManager *v16; // rax
  int v17; // ebx
  int HighestHeroID; // r13d
  CDOTAGameManager *v19; // rax
  KeyValues *HeroDataByHeroID; // rax
  const KeyValues *v21; // r15
  const char *Name; // rax

  if ( this->m_hHero.m_Value.m_Index == -1 )
  {
    v5 = 0x7FFF;
    v6 = 0x7FFF;
  }
  else
  {
    v5 = this->m_hHero.m_Value.m_Index & 0x7FFF;
    v6 = v5;
  }
  v7 = (this->m_hHero.m_Value.m_Index >> 15 << 15) | v5 & 0x7FFF;
  if ( v7 + 2 <= 1 )
    goto LABEL_7;
  v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9];
  if ( v8 == 0 )
    goto LABEL_7;
  v9 = &v8[v6 & 0x1FF];
  if ( v9 == 0 || v7 != v9->m_EHandle.m_Index || v9->m_pInstance == 0 )
    goto LABEL_7;
  m_pEntity = v9->m_pInstance->m_pEntity;
  m_pAsString = "";
  if ( m_pEntity->m_designerName.u.m_Id != 0 )
    m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
  v14 = DOTAGameManager();
  HeroIDByName = CDOTAGameManager::GetHeroIDByName(v14, m_pAsString);
  if ( HeroIDByName != -1 )
  {
    v16 = DOTAGameManager();
    v17 = nOffset + HeroIDByName;
    HighestHeroID = CDOTAGameManager::GetHighestHeroID(v16);
    while ( v17 >= 0 && HighestHeroID >= v17 )
    {
      v19 = DOTAGameManager();
      HeroDataByHeroID = CDOTAGameManager::GetHeroDataByHeroID(v19, v17);
      v21 = HeroDataByHeroID;
      if ( HeroDataByHeroID != 0 && KeyValues::GetInt(HeroDataByHeroID, "Enabled", 0) != 0 )
      {
        Name = KeyValues::GetName(v21);
        v10 = pPlayer;
        v11 = Name;
        goto LABEL_8;
      }
      v17 += nOffset;
    }
  }
  else
  {
LABEL_7:
    v10 = pPlayer;
    v11 = "npc_dota_hero_antimage";
LABEL_8:
    CDOTA_Hero_Recorder::SetHeroClass(this, v11, v10);
  }
}


// dota_preview_hero  (line 118, @0x00000000025b38f0, libserver.so)  // inlines: AddKeyValue<char const*>, AddToTail, Allocate, Arg, Base, CEntityHandle, CHandle, CVProfScope, CopyData, Element, FindKeyHash, Free, Get, GetClassInfo, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, HeroRecorder, IndexToIdentity, InvokeCallbacks, IsEmpty, IsEnabled, IsValid, LookupEntity, Set, SetClassName, SetValue, SetValue<CDOTAPlayer*>, Spawn, V_strcpy_safe<256ul>, _V_strstr, memcpy, operator CEntityInstance*, operator!, operator(), operator=, operator[], strstr, ~CEntitySpawner, ~CVProfScope
// calls: CommandLine, Msg, UTIL_GetCommandClient, __dynamic_cast, strstr, _V_strncpy, CEntitySpawner<CDOTA_Hero_Recorder>::CEntitySpawner, CEntitySystem::FindClassByDesignName, CEntityKeyValues::SetValue<CDOTAPlayer*>, CEntityKeyValues::HasValue, CEntityKeyValues::SetValue, CEntityKeyValuesModifyScope::Release (29 total)
// strings: "-herorecorder_preview", "Must run dota with -herorecorder_preview to use this feature.\n", "npc_dota_hero_", "dota_hero_recorder", "Usage: dota_record_hero [hero class]\n", "npc_dota_hero_%s" (9 total)
// globals: g_hHeroRecorder, CEntityHandle::gm_pEntityList
void __fastcall dota_preview_hero(const CCommandContext *const ctx, const CCommand *const args)
{
  __int64 v3; // rax
  CBasePlayer *CommandClient; // rax
  CDOTAPlayer *v5; // rax
  bool v6; // cc
  const char *SelectedHeroName; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rcx
  CEntityKeyValues *m_pEntityKeyValues; // r12
  CEntityKeyValues *v12; // rdi
  int m_enabled; // r10d
  const char *m_pszClassname; // rdx
  EntityNetworkingMode_t m_nMode; // r14d
  const char *v16; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v18; // r14
  CEntityIdentity *m_pEntity; // rax
  __int16 v20; // si
  CEntitySpawnerContext<CDOTA_Hero_Recorder> *m_pContext; // r12
  CEntityKeyValues *i; // r15
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v25; // rdi
  uint32 v26; // eax
  CEntityIdentity *v27; // rsi
  CEntityIdentity *v28; // rdx
  int v29; // eax
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v31; // cx
  __int64 v32; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v33; // rdx
  __int16 v34; // r15
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v37; // r14
  __int64 v38; // r15
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v39; // r14
  uint16 m_flags; // ax
  char *v41; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v42; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v43; // rdx
  __int64 v44; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v45; // r12
  uint16 v46; // ax
  char *v47; // rax
  bool v48; // [rsp+1Fh] [rbp-201h]
  int v49; // [rsp+20h] [rbp-200h]
  CDOTAPlayer *pPlayer; // [rsp+28h] [rbp-1F8h] BYREF
  _QWORD v51[2]; // [rsp+30h] [rbp-1F0h] BYREF
  CEntitySpawner<CDOTA_Hero_Recorder> spawner; // [rsp+40h] [rbp-1E0h] BYREF
  char szHero[256]; // [rsp+E0h] [rbp-140h] BYREF
  unsigned __int64 v54; // [rsp+1E8h] [rbp-38h]

  v54 = __readfsqword(0x28u);
  v3 = CommandLine(ctx);
  if ( (*(*v3 + 64LL))(v3, "-herorecorder_preview") == 0 )
  {
    Msg("Must run dota with -herorecorder_preview to use this feature.\n");
    return;
  }
  CommandClient = UTIL_GetCommandClient();
  if ( CommandClient == 0 )
  {
    pPlayer = 0;
    if ( args->m_nArgc > 1 )
      goto LABEL_6;
    goto LABEL_46;
  }
  v5 = __dynamic_cast(CommandClient, &`typeinfo for'CBasePlayer, &`typeinfo for'CDOTAPlayer, 0);
  v6 = args->m_nArgc <= 1;
  pPlayer = v5;
  if ( !v6 )
  {
LABEL_6:
    SelectedHeroName = args->m_ppArgv[1];
    goto LABEL_7;
  }
  if ( v5 == 0 || !CDOTAPlayer::HasSelectedHero(v5) )
  {
LABEL_46:
    Msg("Usage: dota_record_hero [hero class]\n");
    return;
  }
  v29 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
  SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, v29);
LABEL_7:
  if ( strstr(SelectedHeroName, "npc_dota_hero_") != 0 )
    _V_strncpy(szHero, SelectedHeroName, 256);
  else
    V_sprintf_safe<256ul>(szHero, "npc_dota_hero_%s", SelectedHeroName);
  m_Index = g_hHeroRecorder.m_Index;
  if ( g_hHeroRecorder.m_Index + 2 > 1 )
  {
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(g_hHeroRecorder.m_Index) >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[g_hHeroRecorder.m_Index & 0x1FF];
      if ( v10 != 0 && g_hHeroRecorder.m_Index == v10->m_EHandle.m_Index && v10->m_pInstance != 0 )
      {
        v28 = &v9[g_hHeroRecorder.m_Index & 0x1FF];
LABEL_39:
        if ( m_Index == v28->m_EHandle.m_Index && v28->m_pInstance != 0 )
          CDOTA_Hero_Recorder::SetHeroClass(v28->m_pInstance, szHero, pPlayer);
        return;
      }
    }
  }
  CEntitySpawner<CDOTA_Hero_Recorder>::CEntitySpawner(&spawner, 0, 0);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount <= 0 )
  {
    m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_59:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
      v34 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
      m_nAllocated = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      if ( m_nAllocated != 0 )
      {
        if ( m_nAllocated <= 9 )
          m_pElements = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        else
          m_pElements = m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      m_pElements[v34] = -971301790;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v37 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v37 = 0;
      v38 = v34;
      v39 = &v37[v38];
      m_flags = v39->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v39->m_value.m_flags = m_flags & 0xFFFE;
      v39->m_value.m_uint64 = 0;
      v39->m_value.m_type = 30;
      v41 = CEntityVariantAllocator::Allocate(0x13u);
      v39->m_value.m_uint64 = v41;
      strcpy(v41, "dota_hero_recorder");
      v39->m_value.m_flags |= 1u;
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v42 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v42 = 0;
      v42[v38].m_pAttributeName = 0;
      goto LABEL_14;
    }
    v31 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v32 = 0;
    while ( 1 )
    {
      if ( v31 != 0 )
      {
        v33 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v31 > 9 )
          v33 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v33 = 0;
      }
      if ( v33[v32] == -971301790 )
        break;
      if ( m_nCount <= ++v32 )
        goto LABEL_59;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v43 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v44 = v32;
      if ( v43[v44].m_pAttributeName != 0 )
      {
LABEL_71:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v43[v44].m_pAttributeName);
        goto LABEL_14;
      }
    }
    else
    {
      v44 = v32;
      v43 = 0;
      if ( *(v44 * 24 + 16) != 0 )
        goto LABEL_71;
    }
    v45 = &v43[v44];
    v46 = v43[v44].m_value.m_flags;
    if ( (v46 & 1) != 0 )
      v45->m_value.m_flags = v46 & 0xFFFE;
    v45->m_value.m_uint64 = 0;
    v45->m_value.m_type = 30;
    v47 = CEntityVariantAllocator::Allocate(0x13u);
    v45->m_value.m_uint64 = v47;
    strcpy(v47, "dota_hero_recorder");
    v45->m_value.m_flags |= 1u;
  }
LABEL_14:
  spawner.m_pEntityClass = CEntitySystem::FindClassByDesignName(
                             g_pEntitySystem,
                             "dota_hero_recorder",
                             &spawner.m_scriptClassName);
  CEntityKeyValues::SetValue<CDOTAPlayer *>(spawner.m_pEntityKeyValues, -1104771937, &pPlayer);
  v12 = spawner.m_pEntityKeyValues;
  v49 = -1;
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    m_enabled = g_VProfCurrentProfile.m_enabled;
    v48 = m_enabled != 0;
    if ( m_enabled != 0 )
    {
      CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
      v12 = spawner.m_pEntityKeyValues;
    }
    if ( !CEntityKeyValues::HasValue(v12, -971301790) )
    {
      m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
      if ( m_pszClassname != 0 )
        CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
    }
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    m_nMode = spawner.m_nMode;
    v16 = CUtlString::Get(&spawner.m_scriptClassName);
    Entity = CEntitySystem::CreateEntity(
               g_pEntitySystem,
               spawner.m_hSpawnGroupHandle,
               spawner.m_pEntityClass,
               v16,
               m_nMode,
               -1,
               -1,
               0,
               0);
    v18 = Entity;
    if ( Entity != 0 )
    {
      m_pEntity = Entity->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v20 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v20 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v49 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v20 & 0x7FFF;
      }
      v51[0] = m_pEntity;
      v51[1] = spawner.m_pEntityKeyValues;
      (*(*g_pGameResourceService + 280LL))(
        g_pGameResourceService,
        spawner.m_hSpawnGroupHandle,
        1,
        v51,
        &spawner.m_mSpawnGroupToWorld);
      CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v18, spawner.m_pEntityKeyValues);
      if ( spawner.m_pSpawnBatch == 0 )
        CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
      m_pContext = spawner.m_pContext;
      for ( i = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
      {
        m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
        pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
        if ( m_pthis != 0 || pfn != 0 )
        {
          v25 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
          if ( (pfn & 1) != 0 )
            pfn = *(pfn + *v25 - 1);
          (pfn)(v25, v18, i);
        }
      }
    }
    if ( v48 )
      CVProfile::ExitScope(&g_VProfCurrentProfile);
    v26 = v49;
  }
  else
  {
    v26 = -1;
  }
  g_hHeroRecorder.m_Index = v26;
  spawner._vptr_CEntitySpawnerBase = off_4101730;
  CEntitySpawnerBase<CDOTA_Hero_Recorder>::~CEntitySpawnerBase(&spawner);
  m_Index = g_hHeroRecorder.m_Index;
  if ( g_hHeroRecorder.m_Index + 2 > 1 )
  {
    v27 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(g_hHeroRecorder.m_Index) >> 9) & 0x3F];
    if ( v27 != 0 )
    {
      v28 = &v27[g_hHeroRecorder.m_Index & 0x1FF];
      if ( v28 != 0 )
        goto LABEL_39;
    }
  }
}


// dota_record_hero  (line 173, @0x00000000025b5080, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddKeyValue<CDOTAPlayer*>, AddToTail, Arg, Base, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CUtlString, CVProfScope, Element, FindKeyHash, Free, Get, GetClassInfo, GetEHandle, GetEntityClass, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, HeroRecorder, IndexToIdentity, Init, InvokeCallbacks, IsEmpty, IsEnabled, IsValid, LookupEntity, OverrideAllocator, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, SetClassName, SetValue, SetValue<CDOTAPlayer*>, Spawn, operator CEntityInstance*, operator!, operator(), operator=, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CUtlString, ~CVProfScope
// calls: CommandLine, Msg, UTIL_GetCommandClient, __dynamic_cast, CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::SetValue, CEntitySystem::FindClassByDesignName, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get (29 total)
// strings: "-herorecorder", "Must run dota with -herorecorder to use this feature.\n", "dota_hero_recorder", "Usage: dota_record_hero [hero class]\n", "Server Simulation", "Spawn" (7 total)
// globals: g_hHeroRecorder, CEntityHandle::gm_pEntityList, CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __fastcall dota_record_hero(const CCommandContext *const ctx, const CCommand *const args)
{
  __int64 v3; // rax
  CBasePlayer *CommandClient; // rax
  CDOTAPlayer *v5; // rax
  CDOTAPlayer *v6; // r12
  const char *SelectedHeroName; // r14
  uint32 m_Index; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rcx
  CEntitySystem *v11; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v13; // rdx
  char v14; // al
  CEntityClass *ClassByDesignName; // rax
  CEntityKeyValues *m_pEntityKeyValues; // rbx
  int m_enabled; // r9d
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v19; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v21; // si
  CEntitySpawnerContext<CDOTA_Hero_Recorder> *m_pContext; // rbx
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v25; // rdi
  uint32 v26; // eax
  CUtlScratchMemoryPool *v27; // rdi
  CEntityKeyValues *v28; // rbx
  CEntityIdentity *v30; // rsi
  CEntityIdentity *v31; // rdx
  CDOTA_Hero_Recorder *m_pInstance; // rdi
  int v33; // eax
  const char *m_pszClassname; // rdx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v36; // cx
  __int64 v37; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v38; // rdx
  int m_nEntitySpawnerDataUseCount; // ecx
  __int16 v40; // dx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v43; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v44; // rax
  uint16 m_flags; // dx
  int v46; // edx
  CEntityIdentity *v47; // rcx
  __int16 v48; // di
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v49; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int16 v53; // ax
  int v54; // eax
  CEntityIdentity *v55; // rdx
  __int16 v56; // si
  bool v57; // [rsp+1Fh] [rbp-101h]
  CEntityKeyValues *i; // [rsp+20h] [rbp-100h]
  CEntityInstance *pEntity; // [rsp+28h] [rbp-F8h]
  CEntityInstance *pEntitya; // [rsp+28h] [rbp-F8h]
  int v61; // [rsp+30h] [rbp-F0h]
  _QWORD v62[2]; // [rsp+40h] [rbp-E0h] BYREF
  CEntitySpawner<CDOTA_Hero_Recorder> spawner; // [rsp+50h] [rbp-D0h] BYREF

  v3 = CommandLine(ctx);
  if ( (*(*v3 + 64LL))(v3, "-herorecorder") == 0 )
  {
    Msg("Must run dota with -herorecorder to use this feature.\n");
    return;
  }
  CommandClient = UTIL_GetCommandClient();
  if ( CommandClient != 0 )
  {
    v5 = __dynamic_cast(CommandClient, &`typeinfo for'CBasePlayer, &`typeinfo for'CDOTAPlayer, 0);
    v6 = v5;
    if ( args->m_nArgc > 1 )
    {
LABEL_5:
      SelectedHeroName = args->m_ppArgv[1];
LABEL_6:
      m_Index = g_hHeroRecorder.m_Index;
      if ( g_hHeroRecorder.m_Index + 2 > 1 )
      {
        v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(g_hHeroRecorder.m_Index) >> 9) & 0x3F];
        if ( v9 != 0 )
        {
          v10 = &v9[g_hHeroRecorder.m_Index & 0x1FF];
          if ( v10 != 0 && g_hHeroRecorder.m_Index == v10->m_EHandle.m_Index && v10->m_pInstance != 0 )
          {
            v31 = &v9[g_hHeroRecorder.m_Index & 0x1FF];
LABEL_42:
            if ( m_Index == v31->m_EHandle.m_Index )
            {
              m_pInstance = v31->m_pInstance;
              goto LABEL_44;
            }
LABEL_43:
            m_pInstance = 0;
LABEL_44:
            CDOTA_Hero_Recorder::SetHeroClass(m_pInstance, SelectedHeroName, v6);
            return;
          }
        }
      }
      spawner.m_modifyScope.m_pKeyValues = 0;
      spawner.m_modifyScope.m_pPrevAllocator = 0;
      CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
      spawner._vptr_CEntitySpawnerBase = off_4101730;
      spawner.m_scriptClassName.m_pString = 0;
      spawner.m_pContext = 0;
      v11 = g_pEntitySystem;
      spawner.m_pSpawnBatch = 0;
      spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
      ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
      CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v11->m_entitySpawnerData;
      spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v11);
      SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
      *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
      v13 = *&SpawnOriginOffset->m_flMatVal[0][2];
      spawner.m_pEntityKeyValues = 0;
      *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v13;
      *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
      *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
      spawner.m_pEntityClass = g_pEntityCDOTA_Hero_RecorderClass;
      if ( g_pApplication != 0 )
        v14 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
      else
        v14 = 0;
      spawner.m_bValidateKeys = v14;
      spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
      (*spawner._vptr_CEntitySpawnerBase)(&spawner);
      CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, "dota_hero_recorder");
      ClassByDesignName = CEntitySystem::FindClassByDesignName(
                            g_pEntitySystem,
                            "dota_hero_recorder",
                            &spawner.m_scriptClassName);
      m_pEntityKeyValues = spawner.m_pEntityKeyValues;
      spawner.m_pEntityClass = ClassByDesignName;
      if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
      {
        v61 = -1;
LABEL_14:
        m_enabled = g_VProfCurrentProfile.m_enabled;
        v57 = m_enabled != 0;
        if ( m_enabled != 0 )
        {
          CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
          m_pEntityKeyValues = spawner.m_pEntityKeyValues;
        }
        if ( !CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790) )
        {
          m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
          if ( m_pszClassname != 0 )
            CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
        }
        CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
        m_nMode = spawner.m_nMode;
        v19 = CUtlString::Get(&spawner.m_scriptClassName);
        pEntity = CEntitySystem::CreateEntity(
                    g_pEntitySystem,
                    spawner.m_hSpawnGroupHandle,
                    spawner.m_pEntityClass,
                    v19,
                    m_nMode,
                    -1,
                    -1,
                    0,
                    0);
        if ( pEntity != 0 )
        {
          m_pEntity = pEntity->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v21 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            v61 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v21 & 0x7FFF;
          }
          v62[0] = pEntity->m_pEntity;
          v62[1] = spawner.m_pEntityKeyValues;
          (*(*g_pGameResourceService + 280LL))(
            g_pGameResourceService,
            spawner.m_hSpawnGroupHandle,
            1,
            v62,
            &spawner.m_mSpawnGroupToWorld);
          CEntitySystem::QueueSpawnEntity(g_pEntitySystem, pEntity, spawner.m_pEntityKeyValues);
          if ( spawner.m_pSpawnBatch == 0 )
            CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
          m_pContext = spawner.m_pContext;
          for ( i = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
          {
            m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
            pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
            if ( m_pthis != 0 || pfn != 0 )
            {
              v25 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
              if ( (pfn & 1) != 0 )
                pfn = *(pfn + *v25 - 1);
              (pfn)(v25, pEntity, i);
            }
          }
        }
        if ( v57 )
          CVProfile::ExitScope(&g_VProfCurrentProfile);
        v26 = v61;
LABEL_33:
        g_hHeroRecorder.m_Index = v26;
        v27 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
        spawner._vptr_CEntitySpawnerBase = off_4101710;
        CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
        if ( v27 == &g_pEntitySystem->m_entitySpawnerData )
        {
          m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
          g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
          if ( m_nEntitySpawnerDataUseCount == 1 )
            CUtlScratchMemoryPool::FreeAll(v27);
        }
        if ( spawner.m_pEntityKeyValues != 0 )
        {
          CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
          v28 = spawner.m_pEntityKeyValues;
          if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
          {
            CEntityKeyValues::~CEntityKeyValues(v28);
            operator delete(v28);
          }
        }
        if ( spawner.m_scriptClassName.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
        CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
        m_Index = g_hHeroRecorder.m_Index;
        if ( g_hHeroRecorder.m_Index + 2 <= 1 )
          goto LABEL_43;
        v30 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(g_hHeroRecorder.m_Index) >> 9) & 0x3F];
        if ( v30 == 0 )
          goto LABEL_43;
        v31 = &v30[g_hHeroRecorder.m_Index & 0x1FF];
        if ( v31 == 0 )
          goto LABEL_43;
        goto LABEL_42;
      }
      m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
      if ( m_nCount <= 0 )
      {
LABEL_67:
        CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
        v40 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
        m_nAllocated = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
        if ( m_nAllocated != 0 )
        {
          if ( m_nAllocated <= 9 )
            m_pElements = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          else
            m_pElements = m_pEntityKeyValues->m_keyHashes.m_pElements;
        }
        else
        {
          m_pElements = 0;
        }
        m_pElements[(m_pEntityKeyValues->m_keyHashes.m_nCount - 1)] = -1104771937;
        pEntitya = v40;
        CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
        if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
          v43 = m_pEntityKeyValues->m_keyValues.m_pElements;
        else
          v43 = 0;
        v44 = &v43[pEntitya];
        m_flags = v44->m_value.m_flags;
        if ( (m_flags & 1) != 0 )
          v44->m_value.m_flags = m_flags & 0xFFFE;
        v44->m_value.m_uint64 = 0;
        v44->m_value.m_type = 13;
        v46 = -1;
        if ( v6 != 0 )
        {
          v47 = v6->m_pEntity;
          if ( v47 != 0 )
          {
            v48 = 0x7FFF;
            if ( v47->m_EHandle.m_Index != -1 )
              v48 = v47->m_EHandle.m_Index & 0x7FFF;
            v46 = (((v47->m_EHandle.m_Index >> 15) - (v47->m_flags & 1)) << 15) | v48 & 0x7FFF;
            LODWORD(v62[0]) = v46;
          }
        }
        v44->m_value.m_int = v46;
        if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
          v49 = m_pEntityKeyValues->m_keyValues.m_pElements;
        else
          v49 = 0;
        v49[pEntitya].m_pAttributeName = 0;
        m_pEntityKeyValues = spawner.m_pEntityKeyValues;
LABEL_82:
        v26 = -1;
        v61 = -1;
        if ( m_pEntityKeyValues == 0 )
          goto LABEL_33;
        goto LABEL_14;
      }
      v36 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      v37 = 0;
      while ( 1 )
      {
        if ( v36 != 0 )
        {
          v38 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v36 > 9 )
            v38 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
        }
        else
        {
          v38 = 0;
        }
        if ( v38[v37] == -1104771937 )
          break;
        if ( m_nCount <= ++v37 )
          goto LABEL_67;
      }
      if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      {
        v50 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
        v51 = v37;
        v52 = &v50[v51];
        if ( v50[v51].m_pAttributeName != 0 )
        {
LABEL_86:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v50[v51].m_pAttributeName);
LABEL_87:
          m_pEntityKeyValues = spawner.m_pEntityKeyValues;
          goto LABEL_82;
        }
      }
      else
      {
        v51 = v37;
        v50 = 0;
        v52 = v51 * 24;
        if ( *(v51 * 24 + 16) != 0 )
          goto LABEL_86;
      }
      v53 = *(v52 + 10);
      if ( (v53 & 1) != 0 )
        *(v52 + 10) = v53 & 0xFFFE;
      *v52 = 0;
      *(v52 + 8) = 13;
      v54 = -1;
      if ( v6 != 0 )
      {
        v55 = v6->m_pEntity;
        if ( v55 != 0 )
        {
          v56 = 0x7FFF;
          if ( v55->m_EHandle.m_Index != -1 )
            v56 = v55->m_EHandle.m_Index & 0x7FFF;
          v54 = (((v55->m_EHandle.m_Index >> 15) - (v55->m_flags & 1)) << 15) | v56 & 0x7FFF;
          LODWORD(v62[0]) = v54;
        }
      }
      *v52 = v54;
      goto LABEL_87;
    }
    if ( v5 != 0 && CDOTAPlayer::HasSelectedHero(v5) )
    {
      v33 = (*(v6->_vptr_IHandleEntity + 393))(v6);
      SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, v33);
      goto LABEL_6;
    }
  }
  else if ( args->m_nArgc > 1 )
  {
    v6 = 0;
    goto LABEL_5;
  }
  Msg("Usage: dota_record_hero [hero class]\n");
}


// dota_record_hero_next  (line 213, @0x00000000025b0890, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, HeroRecorder, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: UTIL_GetCommandClient, __dynamic_cast, CDOTA_Hero_Recorder::ChangeHero
// globals: g_hHeroRecorder, CEntityHandle::gm_pEntityList
void __fastcall dota_record_hero_next(const CCommandContext *const ctx, const CCommand *const args)
{
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CBasePlayer *CommandClient; // rax
  CDOTAPlayer *v5; // rsi
  CDOTA_Hero_Recorder *m_pInstance; // rdi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx

  if ( g_hHeroRecorder.m_Index + 2 > 1 )
  {
    v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(g_hHeroRecorder.m_Index) >> 9) & 0x3F];
    if ( v2 != 0 )
    {
      v3 = &v2[g_hHeroRecorder.m_Index & 0x1FF];
      if ( v3 != 0 && g_hHeroRecorder.m_Index == v3->m_EHandle.m_Index && v3->m_pInstance != 0 )
      {
        CommandClient = UTIL_GetCommandClient();
        if ( CommandClient != 0 )
          v5 = __dynamic_cast(CommandClient, &`typeinfo for'CBasePlayer, &`typeinfo for'CDOTAPlayer, 0);
        else
          v5 = 0;
        m_pInstance = 0;
        if ( g_hHeroRecorder.m_Index + 2 > 1 )
        {
          v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(g_hHeroRecorder.m_Index) >> 9) & 0x3F];
          if ( v7 != 0 )
          {
            v8 = &v7[g_hHeroRecorder.m_Index & 0x1FF];
            if ( v8 != 0 && g_hHeroRecorder.m_Index == v8->m_EHandle.m_Index )
              m_pInstance = v8->m_pInstance;
          }
        }
        CDOTA_Hero_Recorder::ChangeHero(m_pInstance, v5, 1);
      }
    }
  }
}


// dota_record_hero_prev  (line 222, @0x00000000025b07a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, HeroRecorder, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: UTIL_GetCommandClient, __dynamic_cast, CDOTA_Hero_Recorder::ChangeHero
// globals: g_hHeroRecorder, CEntityHandle::gm_pEntityList
void __fastcall dota_record_hero_prev(const CCommandContext *const ctx, const CCommand *const args)
{
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CBasePlayer *CommandClient; // rax
  CDOTAPlayer *v5; // rsi
  CDOTA_Hero_Recorder *m_pInstance; // rdi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx

  if ( g_hHeroRecorder.m_Index + 2 > 1 )
  {
    v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(g_hHeroRecorder.m_Index) >> 9) & 0x3F];
    if ( v2 != 0 )
    {
      v3 = &v2[g_hHeroRecorder.m_Index & 0x1FF];
      if ( v3 != 0 && g_hHeroRecorder.m_Index == v3->m_EHandle.m_Index && v3->m_pInstance != 0 )
      {
        CommandClient = UTIL_GetCommandClient();
        if ( CommandClient != 0 )
          v5 = __dynamic_cast(CommandClient, &`typeinfo for'CBasePlayer, &`typeinfo for'CDOTAPlayer, 0);
        else
          v5 = 0;
        m_pInstance = 0;
        if ( g_hHeroRecorder.m_Index + 2 > 1 )
        {
          v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(g_hHeroRecorder.m_Index) >> 9) & 0x3F];
          if ( v7 != 0 )
          {
            v8 = &v7[g_hHeroRecorder.m_Index & 0x1FF];
            if ( v8 != 0 && g_hHeroRecorder.m_Index == v8->m_EHandle.m_Index )
              m_pInstance = v8->m_pInstance;
          }
        }
        CDOTA_Hero_Recorder::ChangeHero(m_pInstance, v5, -1);
      }
    }
  }
}


