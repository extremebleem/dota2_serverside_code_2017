
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CItemGeneric::GetDataDescMap  (line 31, @0x00000000022543e0, libserver.so)
// globals: CItemGeneric::m_DataMap
datamap_t *__fastcall CItemGeneric::GetDataDescMap(CItemGeneric *const this)
{
  return &CItemGeneric::m_DataMap;
}


// CItemGeneric::AddDatadescMetadataKeys  (line 31, @0x000000000226b080, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CItemGeneric::GetEntityClass(void)
void __fastcall CItemGeneric::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CItemGeneric::GetEntityClass);
}


// CItemGeneric::GetBaseMap  (line 31, @0x000000000226b0a0, libserver.so)
// globals: CItem::m_DataMap
datamap_t *__cdecl CItemGeneric::GetBaseMap()
{
  return &CItem::m_DataMap;
}


// DataMapInit<CItemGeneric>  (line 31, @0x000000000226f870, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_06.cpp
// strings: "CItemGeneric"
// globals: `guard variable for'DataMapInit<CItemGeneric>(CItemGeneric *)::nameHolder, `guard variable for'DataMapInit<CItemGeneric>(CItemGeneric *)::dataDesc, CItem::m_DataMap, CItemGeneric::GetEntityClass(void), CItemGeneric::m_DataMap, DataMapInit<CItemGeneric>(CItemGeneric *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CItemGeneric>(CItemGeneric *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CItemGeneric>(CItemGeneric *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CItemGeneric>(CItemGeneric *)::nameHolder) != 0 )
  {
    DataMapInit<CItemGeneric>(CItemGeneric *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CItemGeneric>(CItemGeneric *)::nameHolder.m_pszBase = "CItemGeneric";
    DataMapInit<CItemGeneric>(CItemGeneric *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CItemGeneric>(CItemGeneric *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CItemGeneric>(CItemGeneric *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CItemGeneric>(CItemGeneric *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CItemGeneric>(CItemGeneric *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CItemGeneric>(CItemGeneric *)::nameHolder,
      &_dso_handle);
  }
  CItemGeneric::m_DataMap.baseMap = &CItem::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CItemGeneric>(CItemGeneric *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CItemGeneric>(CItemGeneric *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CItemGeneric>(CItemGeneric *)::nameHolder.m_nLenBase + 17);
    strcpy(stpcpy(v2, DataMapInit<CItemGeneric>(CItemGeneric *)::nameHolder.m_pszBase), "ItemGenericTouch");
    m_Size = DataMapInit<CItemGeneric>(CItemGeneric *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CItemGeneric>(CItemGeneric *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CItemGeneric>(CItemGeneric *)::nameHolder.m_Names.m_Size == DataMapInit<CItemGeneric>(CItemGeneric *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CItemGeneric>(CItemGeneric *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CItemGeneric>(CItemGeneric *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CItemGeneric>(CItemGeneric *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CItemGeneric>(CItemGeneric *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CItemGeneric>(CItemGeneric *)::dataDesc[1].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CItemGeneric>(CItemGeneric *)::dataDesc);
  }
  CItemGeneric::m_DataMap.dataNumFields = 38;
  CItemGeneric::m_DataMap.dataDesc = &DataMapInit<CItemGeneric>(CItemGeneric *)::dataDesc[1];
  AddDatadescMetadataKeys(&CItemGeneric::m_DataMap, CItemGeneric::GetEntityClass);
  return &CItemGeneric::m_DataMap;
}


// CItemGeneric::CItemGeneric  (line 85, @0x000000000226b0b0, libserver.so)  // inlines: CEntityHandle, CEntityIOOutput, CHandle, CItem, CStrongHandle, CUtlSymbolLarge, InValidate, SetColor, SndOpEventGuid_t, SoundEventGuid_t
// calls: CBaseAnimating::CBaseAnimating
// callers: CItemGeneric::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CItemGeneric::CItemGeneric(CItemGeneric *const this)
{
  CBaseAnimating::CBaseAnimating(this);
  this->m_OnPlayerTouch._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnCacheInteraction._vptr_CEntityIOOutput = off_3F7C190;
  this->m_bActivateWhenAtRest = 0;
  this->_vptr_IHandleEntity = &off_4053EF0;
  this->_vptr_IPlayerPickupVPhysics = &off_4054718;
  this->m_hAmbientSound.m_nGuid.m_Data = 0;
  this->m_hAmbientSound.m_hStackHash = -1;
  this->m_hSpawnParticleEffect.m_pBinding = 0;
  this->m_pAmbientSoundEffect.u.m_Id = 0;
  this->m_pSpawnScriptFunction.u.m_Id = 0;
  this->m_hPickupParticleEffect.m_pBinding = 0;
  this->m_pPickupSoundEffect.u.m_Id = 0;
  this->m_pPickupScriptFunction.u.m_Id = 0;
  this->m_hTimeoutParticleEffect.m_pBinding = 0;
  this->m_pTimeoutSoundEffect.u.m_Id = 0;
  this->m_pTimeoutScriptFunction.u.m_Id = 0;
  this->m_pPickupFilterName.u.m_Id = 0;
  this->m_hPickupFilter.m_Index = -1;
  this->m_OnPickup._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnTimeout._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnTriggerStartTouch._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnTriggerTouch._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnTriggerEndTouch._vptr_CEntityIOOutput = off_3F7C190;
  this->m_pAllowPickupScriptFunction.u.m_Id = 0;
  this->m_pTriggerSoundEffect.u.m_Id = 0;
  this->m_hTriggerHelper.m_Index = -1;
  this->m_bHasTriggerRadius = 0;
  this->m_bHasPickupRadius = 0;
  this->m_bAutoStartAmbientSound = 1;
  this->m_bPlayerCounterListenerAdded = 0;
  this->m_bPlayerInTriggerRadius = 0;
  this->m_flPickupRadiusSqr = 0.0;
  this->m_flTriggerRadiusSqr = 0.0;
  this->m_glowColor._color[0] = -1;
  this->m_glowColor._color[1] = -1;
  this->m_glowColor._color[2] = -1;
  this->m_glowColor._color[3] = -1;
  this->m_flLastPickupCheck = 0.0;
  this->m_bPhysStartAsleep = 0;
  this->m_bGlowWhenInTrigger = 1;
}


// CItemGeneric::Spawn  (line 107, @0x00000000022705a0, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, Add, AddKeyValue<QAngle>, AddKeyValue<Vector>, AddToTail, Allocate<QAngle>, Allocate<Vector>, AssignTo, Base, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CUtlString, CUtlSymbolLarge, CVProfScope, CopyData<QAngle>, CopyData<Vector>, Element, EnterScope, FindKeyHash, Free, FromUntypedHandleUnchecked, Get, GetClassInfo, GetEHandle, GetElapsed, GetEntityClass, GetEntityIdentity, GetEntityNameAsCStr, GetEntryIndex, GetInstance, GetSerialNumber, GetSkeletonInstance, GetTimebaseRegister, GetValue, GetValue<float>, InTargetThread, IndexToIdentity, Init, InitUntypedUnchecked, InvokeCallbacks, IsEmpty, IsEnabled, LookupEntity, OverrideAllocator, PLAT_CPU_TIME, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, SetClassName, SetValue, SetValue<QAngle>, SetValue<Vector>, SetWorldTransform, Spawn, String, atof, operator CEntityInstance*, operator CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>, operator!, operator!=, operator(), operator->, operator=, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CMicroProfilerGuard, ~CUtlString, ~CVProfScope
// calls: CItem::Spawn, CBaseModelEntity::SetModelFromKeyValues, CCollisionProperty::SetupPhysicsFromUnscaledModel, DevWarning(char const*,...), CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::SetValue, CEntitySystem::FindClassByDesignName, CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsOrigin, CEntityKeyValues::HasValue (42 total)
// strings: "WARNING: item_generic '%s' - cannot have a trigger radius without a pickup radius - disab, "item_generic_trigger_helper", "WARNING: item_generic '%s' - pickup radius of %f is larger than trigger radius of %f - di, "Attempted to set attribute %s as if it was a non-attribute key!\n", "No conversion from %s to float now\n", "Spawn" (7 total)
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_227074B, CEntityKeyValuesModifyScope::sm_pAllocatorOverride, CEntityHandle::gm_pEntityList, jpt_2270CFB, jpt_2270F23, CItemGeneric::AutoRemoveThink(void)
void __fastcall CItemGeneric::Spawn(CItemGeneric *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r13
  bool m_bPhysStartAsleep; // r14
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // r8
  int m_nCount; // edx
  __int64 v10; // r13
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // si
  __int64 v12; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v14; // rcx
  CEntityVariant *p_m_value; // rcx
  int16 m_type; // ax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v17; // si
  __int64 v18; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v19; // rdx
  CEntityVariant *v20; // rdx
  unsigned __int16 v21; // ax
  __int64 v22; // rsi
  float m_flTriggerRadius; // xmm1_4
  float m_flPickupRadius; // xmm0_4
  bool m_bHasPickupRadius; // cl
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rsi
  CUtlScratchMemoryPool *v28; // rax
  CEntitySystem *v29; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v31; // rax
  char v32; // al
  const Vector *AbsOrigin; // rax
  __int64 v34; // rdi
  CEntityKeyValues *m_pEntityKeyValues; // r13
  int m_enabled; // edx
  const char *m_pszClassname; // rdx
  EntityNetworkingMode_t m_nMode; // r13d
  const char *v39; // rax
  float v40; // xmm1_4
  CEntityIdentity *v41; // rax
  __int16 v42; // si
  CEntitySpawnerContext<CItemGenericTriggerHelper> *m_pContext; // r13
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v46; // rdi
  CConcreteEntityList *v47; // rsi
  CEntityIdentity *v48; // rdx
  CItemGenericTriggerHelper *m_pInstance; // rdi
  CEntityIdentity *v50; // rdx
  CUtlScratchMemoryPool *v51; // rdi
  CEntityKeyValues *v52; // r13
  int v54; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v55; // cx
  __int64 j; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v57; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v58; // rdx
  CEntityVariant *v59; // rdx
  int16 v60; // ax
  const QAngle *AbsAngles; // rbx
  const Vector *v62; // rax
  CEntityIdentity *v63; // rax
  double v64; // xmm1_8
  double v65; // xmm0_8
  const char *v66; // rsi
  bool v67; // cl
  CBaseEntity *EntityByName; // rax
  _QWORD *v69; // rax
  __int64 v70; // rdx
  int v71; // eax
  __int16 v72; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v73; // rdx
  __int64 v74; // rax
  __int64 v75; // r13
  unsigned __int64 v76; // r13
  uint64 m_numTimeBaseTicks; // rcx
  uint64 v78; // rcx
  int v79; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v80; // cx
  __int64 v81; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v82; // rdx
  int m_nEntitySpawnerDataUseCount; // esi
  __int16 v84; // dx
  unsigned __int64 v85; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v86; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v87; // rax
  uint16 m_flags; // ax
  _DWORD *v89; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v90; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v91; // rdx
  __int64 v92; // rax
  __int64 v93; // r13
  int v94; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v95; // cx
  __int64 v96; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v97; // rdx
  __int16 v98; // dx
  unsigned __int64 v99; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v100; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v101; // rax
  uint16 v102; // ax
  _DWORD *v103; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v104; // rax
  const char *v105; // rax
  float m_int; // xmm0_4
  const char *m_uint64; // rax
  float m_float; // xmm0_4
  __int64 v109; // rdx
  const char *v110; // rax
  double v111; // xmm0_8
  double v112; // xmm1_8
  __m128d v113; // xmm0
  __int64 v114; // rdx
  const char *v115; // rax
  const char *v116; // rax
  const char *v117; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v119; // rax
  bool v120; // zf
  __int16 v121; // ax
  _DWORD *v122; // rax
  __int16 v123; // ax
  _DWORD *v124; // rax
  __int64 v125; // [rsp+18h] [rbp-118h]
  bool v126; // [rsp+20h] [rbp-110h]
  __int64 v127; // [rsp+20h] [rbp-110h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v128; // [rsp+20h] [rbp-110h]
  __int64 v129; // [rsp+20h] [rbp-110h]
  _DWORD *p_x; // [rsp+28h] [rbp-108h]
  CEntityKeyValues *i; // [rsp+28h] [rbp-108h]
  __int64 v132; // [rsp+28h] [rbp-108h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v133; // [rsp+28h] [rbp-108h]
  float flMaxRadius; // [rsp+30h] [rbp-100h]
  float flMaxRadiusa; // [rsp+30h] [rbp-100h]
  CEntityInstance *pEntity; // [rsp+38h] [rbp-F8h]
  CEntityInstance *pEntitya; // [rsp+38h] [rbp-F8h]
  CEntityInstance *pEntityc; // [rsp+38h] [rbp-F8h]
  float pEntityb; // [rsp+38h] [rbp-F8h]
  uint32 v140; // [rsp+40h] [rbp-F0h]
  _QWORD v141[2]; // [rsp+50h] [rbp-E0h] BYREF
  CEntitySpawner<CItemGenericTriggerHelper> triggerSpawner; // [rsp+60h] [rbp-D0h] BYREF

  p_m_Collision = &this->m_Collision;
  CItem::Spawn(this, pKeyValues);
  this->m_flPickupRadiusSqr = this->m_flPickupRadius * this->m_flPickupRadius;
  this->m_flTriggerRadiusSqr = this->m_flTriggerRadius * this->m_flTriggerRadius;
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  m_bPhysStartAsleep = this->m_bPhysStartAsleep;
  v6 = (*(this->m_Collision._vptr_ICollideable + 9))(p_m_Collision);
  CCollisionProperty::SetupPhysicsFromUnscaledModel(
    p_m_Collision,
    VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_DYNAMIC,
    v6,
    m_bPhysStartAsleep);
  v7 = (*(this->m_CBodyComponent->m_pSceneNode->_vptr_CGameSceneNode + 9))(this->m_CBodyComponent->m_pSceneNode);
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  v10 = *(v7 + 536);
  if ( m_nCount <= 0 )
  {
LABEL_12:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_13;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v12 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v12) == -1784370260 )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v12 )
      goto LABEL_12;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v12] != -1784370260 )
    goto LABEL_6;
LABEL_9:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v14 = pKeyValues->m_keyValues.m_pElements;
  else
    v14 = 0;
  p_m_value = &v14[v12].m_value;
LABEL_13:
  m_type = p_m_value->m_type;
  if ( m_type != 0 )
  {
    switch ( m_type )
    {
      case 1:
        m_float = p_m_value->m_float;
        goto LABEL_172;
      case 5:
        m_float = p_m_value->m_int;
        goto LABEL_172;
      case 6:
        m_float = p_m_value->m_char;
        goto LABEL_172;
      case 26:
        m_float = p_m_value->m_uint64;
        goto LABEL_172;
      case 30:
        m_float = strtod(p_m_value->m_pszString, 0);
        goto LABEL_172;
      case 33:
        m_uint64 = p_m_value->m_uint64;
        if ( p_m_value->m_int64 >= 0 )
          goto LABEL_171;
        v109 = p_m_value->m_uint64 & 1 | (p_m_value->m_uint64 >> 1);
        m_float = v109 + v109;
        goto LABEL_172;
      case 34:
        m_float = p_m_value->m_float64;
        goto LABEL_172;
      case 37:
        LODWORD(m_uint64) = p_m_value->m_int;
LABEL_171:
        m_float = m_uint64;
LABEL_172:
        if ( m_float > 0.0 )
          (*(*v10 + 448LL))(v10);
        m_nCount = pKeyValues->m_keyHashes.m_nCount;
        break;
      default:
        v117 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to float now\n", v117);
        m_nCount = pKeyValues->m_keyHashes.m_nCount;
        break;
    }
  }
  if ( m_nCount > 0 )
  {
    v17 = pKeyValues->m_keyHashes.m_nAllocated;
    v18 = 0;
    v8 = v17;
    do
    {
      if ( v17 != 0 )
      {
        p_m_value = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v17 > 9 )
          p_m_value = pKeyValues->m_keyHashes.m_pElements;
        if ( *(&p_m_value->m_int + v18) == -1090886830 )
        {
LABEL_22:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v19 = pKeyValues->m_keyValues.m_pElements;
          else
            v19 = 0;
          v20 = &v19[v18].m_value;
          v21 = v20->m_type;
          if ( v21 != 0 )
            goto LABEL_25;
          goto LABEL_27;
        }
      }
      else
      {
        p_m_value = 0;
        if ( *(4 * v18) == -1090886830 )
          goto LABEL_22;
      }
      ++v18;
    }
    while ( m_nCount > v18 );
  }
  v20 = &CEntityKeyValues::sm_EmptyVariant;
  v21 = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( v21 != 0 )
  {
LABEL_25:
    v22 = v21;
    switch ( v21 )
    {
      case 1u:
        m_int = v20->m_float;
        goto LABEL_160;
      case 5u:
        m_int = v20->m_int;
        goto LABEL_160;
      case 6u:
        m_int = v20->m_char;
        goto LABEL_160;
      case 0x1Au:
        m_int = v20->m_uint64;
        goto LABEL_160;
      case 0x1Eu:
        m_int = strtod(v20->m_pszString, 0);
        goto LABEL_160;
      case 0x21u:
        v105 = v20->m_uint64;
        if ( v20->m_int64 >= 0 )
          goto LABEL_159;
        v20 = (v20->m_uint64 & 1 | (v20->m_uint64 >> 1));
        m_int = v20 + v20;
        goto LABEL_160;
      case 0x22u:
        m_int = v20->m_float64;
        goto LABEL_160;
      case 0x25u:
        LODWORD(v105) = v20->m_int;
LABEL_159:
        m_int = v105;
LABEL_160:
        if ( m_int > 0.0 )
          (*(*v10 + 464LL))(v10, v22, v20, p_m_value, v8);
        break;
      default:
        v115 = VariantFieldTypeName(v21);
        Warning("No conversion from %s to float now\n", v115);
        break;
    }
  }
LABEL_27:
  m_flTriggerRadius = this->m_flTriggerRadius;
  m_flPickupRadius = this->m_flPickupRadius;
  this->m_bHasTriggerRadius = m_flTriggerRadius > 0.0;
  m_bHasPickupRadius = m_flPickupRadius > 0.0;
  this->m_bHasPickupRadius = m_flPickupRadius > 0.0;
  if ( m_flTriggerRadius <= 0.0 )
  {
LABEL_32:
    if ( m_bHasPickupRadius )
      goto LABEL_33;
    goto LABEL_69;
  }
  if ( m_flPickupRadius <= 0.0 )
  {
    m_pEntity = this->m_pEntity;
    m_pAsString = "";
    if ( m_pEntity->m_name.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_name.u.m_pAsString;
    DevWarning(
      "WARNING: item_generic '%s' - cannot have a trigger radius without a pickup radius - disabling trigger behavior!\n",
      m_pAsString);
    m_bHasPickupRadius = this->m_bHasPickupRadius;
    this->m_bHasTriggerRadius = 0;
    goto LABEL_32;
  }
  if ( m_flPickupRadius <= m_flTriggerRadius )
  {
    flMaxRadius = m_flTriggerRadius;
LABEL_34:
    triggerSpawner.m_modifyScope.m_pKeyValues = 0;
    triggerSpawner.m_modifyScope.m_pPrevAllocator = 0;
    flMaxRadiusa = fmaxf(m_flPickupRadius, flMaxRadius);
    CEntityKeyValuesModifyScope::BeginModify(&triggerSpawner.m_modifyScope, 0);
    triggerSpawner._vptr_CEntitySpawnerBase = off_40547B0;
    v28 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
    triggerSpawner.m_scriptClassName.m_pString = 0;
    triggerSpawner.m_pContext = 0;
    v29 = g_pEntitySystem;
    triggerSpawner.m_pSpawnBatch = 0;
    ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    triggerSpawner.m_pPrevAllocator = v28;
    CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v29->m_entitySpawnerData;
    triggerSpawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v29);
    SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
    *&triggerSpawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
    qmemcpy(triggerSpawner.m_mSpawnGroupToWorld.m_flMatVal[1], SpawnOriginOffset->m_flMatVal[1], 24);
    v31 = *&SpawnOriginOffset->m_flMatVal[2][2];
    triggerSpawner.m_pEntityKeyValues = 0;
    *&triggerSpawner.m_mSpawnGroupToWorld.m_flMatVal[2][2] = v31;
    triggerSpawner.m_pEntityClass = g_pEntityCItemGenericTriggerHelperClass;
    if ( g_pApplication != 0 )
      v32 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
    else
      v32 = 0;
    triggerSpawner.m_bValidateKeys = v32;
    triggerSpawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
    (*triggerSpawner._vptr_CEntitySpawnerBase)(&triggerSpawner);
    CEntityKeyValues::SetValue(triggerSpawner.m_pEntityKeyValues, -971301790, "item_generic_trigger_helper");
    triggerSpawner.m_pEntityClass = CEntitySystem::FindClassByDesignName(
                                      g_pEntitySystem,
                                      "item_generic_trigger_helper",
                                      &triggerSpawner.m_scriptClassName);
    pEntity = CBaseEntity::GetAbsAngles(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    m_pEntityKeyValues = triggerSpawner.m_pEntityKeyValues;
    p_x = &AbsOrigin->x;
    if ( triggerSpawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
      goto LABEL_37;
    v79 = triggerSpawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( v79 <= 0 )
    {
LABEL_125:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&triggerSpawner.m_pEntityKeyValues->m_keyHashes);
      v84 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
      v85 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      if ( v85 != 0 )
      {
        if ( v85 <= 9 )
          v86 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        else
          v86 = m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v86 = 0;
      }
      v86[(m_pEntityKeyValues->m_keyHashes.m_nCount - 1)] = -467664362;
      v127 = v84;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v87 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v87 = 0;
      v125 = v127;
      v128 = &v87[v127];
      m_flags = v128->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v128->m_value.m_flags = m_flags & 0xFFFE;
      v128->m_value.m_uint64 = 0;
      v128->m_value.m_type = 3;
      v89 = CEntityVariantAllocator::Allocate(0xCu);
      v128->m_value.m_uint64 = v89;
      *v89 = *p_x;
      v89[1] = p_x[1];
      v89[2] = p_x[2];
      v128->m_value.m_flags |= 1u;
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v90 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v90 = 0;
      v90[v125].m_pAttributeName = 0;
    }
    else
    {
      v80 = triggerSpawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      v81 = 0;
      while ( 1 )
      {
        if ( v80 != 0 )
        {
          v82 = (&triggerSpawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v80 > 9 )
            v82 = triggerSpawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
        }
        else
        {
          v82 = 0;
        }
        if ( v82[v81] == -467664362 )
          break;
        if ( v79 <= ++v81 )
          goto LABEL_125;
      }
      if ( triggerSpawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      {
        v91 = triggerSpawner.m_pEntityKeyValues->m_keyValues.m_pElements;
        v92 = v81;
        v93 = &v91[v92];
        if ( v91[v92].m_pAttributeName != 0 )
        {
LABEL_137:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v91[v92].m_pAttributeName);
          goto LABEL_138;
        }
      }
      else
      {
        v91 = 0;
        v93 = 24 * v81;
        v120 = *(&stru_10.m_Lock.gap0 + 3 * v81) == 0;
        v92 = v81;
        if ( !v120 )
          goto LABEL_137;
      }
      v121 = *(v93 + 10);
      if ( (v121 & 1) != 0 )
        *(v93 + 10) = v121 & 0xFFFE;
      *v93 = 0;
      *(v93 + 8) = 3;
      v122 = CEntityVariantAllocator::Allocate(0xCu);
      *v93 = v122;
      *v122 = *p_x;
      v122[1] = p_x[1];
      v122[2] = p_x[2];
      *(v93 + 10) |= 1u;
    }
LABEL_138:
    m_pEntityKeyValues = triggerSpawner.m_pEntityKeyValues;
    if ( triggerSpawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    {
LABEL_37:
      v140 = -1;
      goto LABEL_38;
    }
    v94 = triggerSpawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( v94 <= 0 )
    {
LABEL_147:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&triggerSpawner.m_pEntityKeyValues->m_keyHashes);
      v98 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
      v99 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      if ( v99 != 0 )
      {
        if ( v99 <= 9 )
          v100 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        else
          v100 = m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v100 = 0;
      }
      v100[(m_pEntityKeyValues->m_keyHashes.m_nCount - 1)] = -1164387633;
      v132 = v98;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v101 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v101 = 0;
      v129 = v132;
      v133 = &v101[v132];
      v102 = v133->m_value.m_flags;
      if ( (v102 & 1) != 0 )
        v133->m_value.m_flags = v102 & 0xFFFE;
      v133->m_value.m_uint64 = 0;
      v133->m_value.m_type = 39;
      v103 = CEntityVariantAllocator::Allocate(0xCu);
      v133->m_value.m_uint64 = v103;
      *v103 = pEntity->_vptr_IHandleEntity;
      v103[1] = HIDWORD(pEntity->_vptr_IHandleEntity);
      v103[2] = pEntity->m_pEntity;
      v133->m_value.m_flags |= 1u;
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v104 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v104 = 0;
      v104[v129].m_pAttributeName = 0;
      m_pEntityKeyValues = triggerSpawner.m_pEntityKeyValues;
LABEL_108:
      v140 = -1;
      if ( m_pEntityKeyValues == 0 )
      {
        this->m_hTriggerHelper.m_Index = -1;
        goto LABEL_110;
      }
LABEL_38:
      m_enabled = g_VProfCurrentProfile.m_enabled;
      v126 = m_enabled != 0;
      if ( m_enabled != 0 )
      {
        v76 = __rdtsc();
        pEntityc = g_VProfCurrentProfile.m_TargetThreadId;
        if ( pEntityc == ThreadGetCurrentId(v34) )
        {
          m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
          if ( m_pCurNode->m_pszName != "Spawn" )
          {
            m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "Spawn", 0, "Server Simulation", 4);
            g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
          }
          v119 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
          v119->m_BudgetFlags |= 4u;
          CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
          g_VProfCurrentProfile.m_fAtRoot = 0;
        }
        m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
        ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
        v78 = m_numTimeBaseTicks - v76;
        m_pEntityKeyValues = triggerSpawner.m_pEntityKeyValues;
        g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v78 + __rdtsc();
      }
      if ( !CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790) )
      {
        m_pszClassname = triggerSpawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
        if ( m_pszClassname != 0 )
          CEntityKeyValues::SetValue(triggerSpawner.m_pEntityKeyValues, -971301790, m_pszClassname);
      }
      CEntityKeyValuesModifyScope::Release(&triggerSpawner.m_modifyScope);
      m_nMode = triggerSpawner.m_nMode;
      v39 = CUtlString::Get(&triggerSpawner.m_scriptClassName);
      pEntitya = CEntitySystem::CreateEntity(
                   g_pEntitySystem,
                   triggerSpawner.m_hSpawnGroupHandle,
                   triggerSpawner.m_pEntityClass,
                   v39,
                   m_nMode,
                   -1,
                   -1,
                   0,
                   0);
      if ( pEntitya != 0 )
      {
        v41 = pEntitya->m_pEntity;
        if ( v41 != 0 )
        {
          v42 = 0x7FFF;
          if ( v41->m_EHandle.m_Index != -1 )
            v42 = v41->m_EHandle.m_Index & 0x7FFF;
          v140 = (((v41->m_EHandle.m_Index >> 15) - (v41->m_flags & 1)) << 15) | v42 & 0x7FFF;
        }
        v141[0] = pEntitya->m_pEntity;
        v141[1] = triggerSpawner.m_pEntityKeyValues;
        (*(*g_pGameResourceService + 280LL))(
          g_pGameResourceService,
          triggerSpawner.m_hSpawnGroupHandle,
          1,
          v141,
          &triggerSpawner.m_mSpawnGroupToWorld);
        CEntitySystem::QueueSpawnEntity(g_pEntitySystem, pEntitya, triggerSpawner.m_pEntityKeyValues);
        if ( triggerSpawner.m_pSpawnBatch == 0 )
          CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
        m_pContext = triggerSpawner.m_pContext;
        for ( i = triggerSpawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
        {
          m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
          pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
          if ( m_pthis != 0 || pfn != 0 )
          {
            v46 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
            if ( (pfn & 1) != 0 )
              pfn = *(pfn + *v46 - 1);
            (pfn)(v46, pEntitya, i);
          }
        }
      }
      if ( v126 )
        CVProfile::ExitScope(&g_VProfCurrentProfile);
      v47 = CEntityHandle::gm_pEntityList;
      this->m_hTriggerHelper.m_Index = v140;
      if ( v140 + 2 > 1 )
      {
        v48 = v47->m_pIdentityChunks[(LOWORD(this->m_hTriggerHelper.m_Index) >> 9) & 0x3F];
        if ( v48 != 0 )
        {
          m_pInstance = 0;
          v50 = &v48[this->m_hTriggerHelper.m_Index & 0x1FF];
          if ( v50 != 0 && v50->m_EHandle.m_Index == v140 )
            m_pInstance = v50->m_pInstance;
          goto LABEL_62;
        }
      }
LABEL_110:
      m_pInstance = 0;
LABEL_62:
      CItemGenericTriggerHelper::InitTriggerHelper(m_pInstance, this, flMaxRadiusa, v40);
      v51 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
      triggerSpawner._vptr_CEntitySpawnerBase = off_4054790;
      CEntityKeyValuesModifyScope::sm_pAllocatorOverride = triggerSpawner.m_pPrevAllocator;
      if ( v51 == &g_pEntitySystem->m_entitySpawnerData )
      {
        m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
        g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
        if ( m_nEntitySpawnerDataUseCount == 1 )
          CUtlScratchMemoryPool::FreeAll(v51);
      }
      if ( triggerSpawner.m_pEntityKeyValues != 0 )
      {
        CEntityKeyValuesModifyScope::Release(&triggerSpawner.m_modifyScope);
        v52 = triggerSpawner.m_pEntityKeyValues;
        if ( --triggerSpawner.m_pEntityKeyValues->m_nRefCount <= 0 )
        {
          CEntityKeyValues::~CEntityKeyValues(v52);
          operator delete(v52);
        }
      }
      if ( triggerSpawner.m_scriptClassName.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&triggerSpawner.m_scriptClassName);
      CEntityKeyValuesModifyScope::Release(&triggerSpawner.m_modifyScope);
      goto LABEL_69;
    }
    v95 = triggerSpawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v96 = 0;
    while ( 1 )
    {
      if ( v95 != 0 )
      {
        v97 = (&triggerSpawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v95 > 9 )
          v97 = triggerSpawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v97 = 0;
      }
      if ( v97[v96] == -1164387633 )
        break;
      if ( v94 <= ++v96 )
        goto LABEL_147;
    }
    if ( triggerSpawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v73 = triggerSpawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v74 = v96;
      v75 = &v73[v74];
      if ( v73[v74].m_pAttributeName != 0 )
      {
LABEL_106:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v73[v74].m_pAttributeName);
LABEL_107:
        m_pEntityKeyValues = triggerSpawner.m_pEntityKeyValues;
        goto LABEL_108;
      }
    }
    else
    {
      v73 = 0;
      v75 = 24 * v96;
      v120 = *(&stru_10.m_Lock.gap0 + 3 * v96) == 0;
      v74 = v96;
      if ( !v120 )
        goto LABEL_106;
    }
    v123 = *(v75 + 10);
    if ( (v123 & 1) != 0 )
      *(v75 + 10) = v123 & 0xFFFE;
    *v75 = 0;
    *(v75 + 8) = 39;
    v124 = CEntityVariantAllocator::Allocate(0xCu);
    *v75 = v124;
    *v124 = pEntity->_vptr_IHandleEntity;
    v124[1] = HIDWORD(pEntity->_vptr_IHandleEntity);
    v124[2] = pEntity->m_pEntity;
    *(v75 + 10) |= 1u;
    goto LABEL_107;
  }
  v63 = this->m_pEntity;
  v64 = m_flTriggerRadius;
  v65 = m_flPickupRadius;
  v66 = "";
  if ( v63->m_name.u.m_Id != 0 )
    v66 = v63->m_name.u.m_pAsString;
  DevWarning(
    "WARNING: item_generic '%s' - pickup radius of %f is larger than trigger radius of %f - disabling trigger behavior!\n",
    v66,
    v65,
    v64);
  v67 = this->m_bHasPickupRadius;
  this->m_bHasTriggerRadius = 0;
  if ( v67 )
  {
LABEL_33:
    m_flPickupRadius = this->m_flPickupRadius;
    flMaxRadius = this->m_flTriggerRadius;
    goto LABEL_34;
  }
LABEL_69:
  v54 = pKeyValues->m_keyHashes.m_nCount;
  if ( v54 > 0 )
  {
    v55 = pKeyValues->m_keyHashes.m_nAllocated;
    for ( j = 0; v54 > j; ++j )
    {
      if ( v55 != 0 )
      {
        v57 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v55 > 9 )
          v57 = pKeyValues->m_keyHashes.m_pElements;
        if ( v57[j] == 1700570587 )
        {
LABEL_77:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v58 = pKeyValues->m_keyValues.m_pElements;
          else
            v58 = 0;
          v59 = &v58[j].m_value;
          v60 = v59->m_type;
          if ( v60 != 0 )
            goto LABEL_80;
          goto LABEL_82;
        }
      }
      else if ( *(4 * j) == 1700570587 )
      {
        goto LABEL_77;
      }
    }
  }
  v59 = &CEntityKeyValues::sm_EmptyVariant;
  v60 = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( v60 != 0 )
  {
LABEL_80:
    switch ( v60 )
    {
      case 1:
        pEntityb = v59->m_float;
        goto LABEL_185;
      case 5:
        pEntityb = v59->m_int;
        goto LABEL_185;
      case 6:
        pEntityb = v59->m_char;
        goto LABEL_185;
      case 26:
        pEntityb = v59->m_uint64;
        goto LABEL_185;
      case 30:
        v113.m128d_f64[0] = strtod(v59->m_pszString, 0);
        pEntityb = _mm_movedup_pd(v113).m128d_f64[0];
        goto LABEL_185;
      case 33:
        v110 = v59->m_uint64;
        if ( v59->m_int64 >= 0 )
          goto LABEL_184;
        v114 = v59->m_uint64 & 1 | (v59->m_uint64 >> 1);
        pEntityb = v114 + v114;
        goto LABEL_185;
      case 34:
        pEntityb = v59->m_float64;
        goto LABEL_185;
      case 37:
        LODWORD(v110) = v59->m_int;
LABEL_184:
        pEntityb = v110;
LABEL_185:
        if ( pEntityb > 0.0 )
        {
          CBaseEntity::ThinkSet(this, CItemGeneric::AutoRemoveThink, 0.0, 0, 0);
          *&v111 = CGlobalVarsBase::curtime(gpGlobals, 0) + pEntityb;
          CBaseEntity::SetNextThink(this, v111, v112, 0);
        }
        break;
      default:
        v116 = VariantFieldTypeName(v60);
        Warning("No conversion from %s to float now\n", v116);
        break;
    }
  }
LABEL_82:
  if ( this->m_hSpawnParticleEffect.m_pBinding != 0 )
  {
    AbsAngles = CBaseEntity::GetAbsAngles(this);
    v62 = CBaseEntity::GetAbsOrigin(this);
    triggerSpawner._vptr_CEntitySpawnerBase = this->m_hSpawnParticleEffect.m_pBinding;
    DispatchParticleEffect(&triggerSpawner, v62, AbsAngles, ParticleAttachment_t::PATTACH_ABSORIGIN_FOLLOW, this, -1);
  }
  if ( this->m_bAutoStartAmbientSound )
    CItemGeneric::StartAmbientSound(this);
  if ( this->m_pSpawnScriptFunction.u.m_Id != 0 )
    CEntityInstance::CallScriptFunction(
      this,
      CallScriptFunctionBehavior_t::CALL_SCRIPT_FUNCTION_PRIVATE_AND_GLOBAL,
      this->m_pSpawnScriptFunction.u.m_pAsString,
      0,
      0);
  if ( this->m_pPickupFilterName.u.m_Id != 0 )
  {
    triggerSpawner._vptr_CEntitySpawnerBase = this->m_pPickupFilterName.u.m_Id;
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &triggerSpawner, this, 0, 0, 0);
    if ( EntityByName != 0
      && (v69 = __dynamic_cast(EntityByName, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseFilter, 0)) != 0
      && (v70 = v69[1]) != 0 )
    {
      v71 = (*(v70 + 16) >> 15) - (*(v70 + 48) & 1);
      v72 = 0x7FFF;
      if ( *(v70 + 16) != -1 )
        v72 = *(v70 + 16) & 0x7FFF;
      LOWORD(this->m_hPickupFilter.m_Index) = v72 | this->m_hPickupFilter.m_Index & 0x8000;
      this->m_hPickupFilter.m_Index = (v71 << 15) | this->m_hPickupFilter.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hPickupFilter.m_Index = -1;
    }
  }
}


// CItemGeneric::Activate  (line 198, @0x000000000226b570, libserver.so)
// calls: CItemGeneric::UpdateDerivedGlowState, CBaseAnimating::Activate
void __fastcall CItemGeneric::Activate(CItemGeneric *const this, ActivateType_t activateType)
{
  CItemGeneric::UpdateDerivedGlowState(this);
  CBaseAnimating::Activate(this, activateType);
}


// CItemGeneric::PostClientActive  (line 207, @0x000000000226b5a0, libserver.so)
// calls: CItemGeneric::UpdateDerivedGlowState, CBaseEntity::PostClientActive
void __fastcall CItemGeneric::PostClientActive(CItemGeneric *const this)
{
  CItemGeneric::UpdateDerivedGlowState(this);
  CBaseEntity::PostClientActive(this);
}


// CItemGeneric::AddPlayerCounterListener  (line 217, @0x000000000226b240, libserver.so)
void __fastcall CItemGeneric::AddPlayerCounterListener(CItemGeneric *const this)
{
  ;
}


// CItemGeneric::Precache  (line 243, @0x0000000002279b30, libserver.so)  // inlines: Precache, String, ToCStr
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheScriptSound, CBaseEntity::PrecacheModelFromKeyValues
// strings: "Item.Materialize"
void __fastcall CItemGeneric::Precache(CItemGeneric *const this, const CEntityPrecacheContext *pContext)
{
  const char *m_pAsString; // rdi
  const char *v5; // rdi
  const char *v6; // rdi
  const char *v7; // rdi

  CEntityInstance::Precache(this, pContext);
  CBaseEntity::PrecacheScriptSound("Item.Materialize", pContext);
  CBaseEntity::PrecacheModelFromKeyValues(this, pContext, 0, 0);
  m_pAsString = "";
  if ( this->m_pPickupSoundEffect.u.m_Id != 0 )
    m_pAsString = this->m_pPickupSoundEffect.u.m_pAsString;
  CBaseEntity::PrecacheScriptSound(m_pAsString, pContext);
  v5 = "";
  if ( this->m_pAmbientSoundEffect.u.m_Id != 0 )
    v5 = this->m_pAmbientSoundEffect.u.m_pAsString;
  CBaseEntity::PrecacheScriptSound(v5, pContext);
  v6 = "";
  if ( this->m_pTimeoutSoundEffect.u.m_Id != 0 )
    v6 = this->m_pTimeoutSoundEffect.u.m_pAsString;
  CBaseEntity::PrecacheScriptSound(v6, pContext);
  v7 = "";
  if ( this->m_pTriggerSoundEffect.u.m_Id != 0 )
    v7 = this->m_pTriggerSoundEffect.u.m_pAsString;
  CBaseEntity::PrecacheScriptSound(v7, pContext);
}


// CItemGeneric::SetupTouchFunction  (line 258, @0x00000000022543f0, libserver.so)
// globals: CItemGeneric::ItemGenericTouch(CBaseEntity *)
void __fastcall CItemGeneric::SetupTouchFunction(CItemGeneric *const this)
{
  if ( !this->m_bUseable )
  {
    this->m_pfnTouch.__delta = 0;
    this->m_pfnTouch.__pfn = CItemGeneric::ItemGenericTouch;
  }
}


// CItemGeneric::OnHelperStartTrigger  (line 267, @0x000000000226ef60, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CBaseEntity::StartTouch, CItemGeneric::ConsiderForPickup, CEntityIOOutput::FireOutputInternal, CBaseEntity::EmitSound, CItemGeneric::UpdateDerivedGlowState, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CItemGenericTriggerHelper::StartTouch
void __fastcall CItemGeneric::OnHelperStartTrigger(CItemGeneric *const this, CBaseEntity *pOther)
{
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  CBaseEntity::StartTouch(this, pOther);
  if ( this->m_bHasTriggerRadius && CItemGeneric::ConsiderForPickup(this, pOther) )
  {
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnTriggerStartTouch, pOther, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    if ( this->m_pTriggerSoundEffect.u.m_Id != 0 )
      CBaseEntity::EmitSound(this, this->m_pTriggerSoundEffect.u.m_pAsString, 0.0, 0);
    this->m_bPlayerInTriggerRadius = 1;
    CItemGeneric::UpdateDerivedGlowState(this);
  }
}


// CItemGeneric::OnHelperEndTrigger  (line 288, @0x000000000226e780, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CBaseEntity::EndTouch, CItemGeneric::ConsiderForPickup, CEntityIOOutput::FireOutputInternal, CItemGeneric::UpdateDerivedGlowState, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CItemGenericTriggerHelper::EndTouch
void __fastcall CItemGeneric::OnHelperEndTrigger(CItemGeneric *const this, CBaseEntity *pOther)
{
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  CBaseEntity::EndTouch(this, pOther);
  if ( this->m_bHasTriggerRadius && CItemGeneric::ConsiderForPickup(this, pOther) )
  {
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnTriggerEndTouch, pOther, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    this->m_bPlayerInTriggerRadius = 0;
    CItemGeneric::UpdateDerivedGlowState(this);
  }
}


// CItemGeneric::ItemGenericTouch  (line 305, @0x000000000226ec10, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator==<CItemGenericTriggerHelper>
// calls: CItemGeneric::ConsiderForPickup, CItemGeneric::AllowPickup, CItemGeneric::DoPickup
// globals: CEntityHandle::gm_pEntityList
void __fastcall CItemGeneric::ItemGenericTouch(CItemGeneric *const this, CBaseEntity *pOther)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx

  m_Index = this->m_hTriggerHelper.m_Index;
  if ( (m_Index + 2 <= 1
     || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTriggerHelper.m_Index) >> 9) & 0x3F]) == 0
     || (v6 = &v5[this->m_hTriggerHelper.m_Index & 0x1FF]) == 0
     || m_Index != v6->m_EHandle.m_Index
     || v6->m_pInstance == 0)
    && CItemGeneric::ConsiderForPickup(this, pOther)
    && CItemGeneric::AllowPickup(this, pOther) )
  {
    CItemGeneric::DoPickup(this, pOther);
  }
}


// CItemGeneric::OnHelperTrigger  (line 327, @0x000000000226ecb0, libserver.so)  // inlines: CVariantBase, CalcNearestPoint, FireOutput, Free, LengthSqr, VectorSubtract, curtime, operator-, operator=, ~CVariantBase
// calls: CItemGeneric::ConsiderForPickup, CBaseEntity::GetAbsOrigin, CCollisionProperty::CalcNearestPoint, CEntityIOOutput::FireOutputInternal, CItemGeneric::AllowPickup, CItemGeneric::DoPickup, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CItemGenericTriggerHelper::ItemGenericTriggerHelperTouch
void __fastcall CItemGeneric::OnHelperTrigger(CItemGeneric *const this, CBaseEntity *pOther)
{
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v5; // r13
  float v6; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CGlobalVars *v8; // r13
  float v9; // xmm0_4
  const Vector *AbsOrigin; // rax
  CCollisionProperty *m_pCollision; // rdi
  const Vector *v12; // rax
  float v13; // xmm0_4
  FnGlobalVarsWarningFunc v14; // rax
  float flNextPickupCheck; // [rsp+Ch] [rbp-44h]
  Vector vNearestPoint; // [rsp+10h] [rbp-40h] BYREF
  CVariant value; // [rsp+20h] [rbp-30h] BYREF

  if ( CItemGeneric::ConsiderForPickup(this, pOther) )
  {
    m_flCurrentTime = 0.0;
    v5 = gpGlobals;
    v6 = this->m_flLastPickupCheck + pickup_check_period.m_pParent->m_Value.m_fValue;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          flNextPickupCheck = this->m_flLastPickupCheck + pickup_check_period.m_pParent->m_Value.m_fValue;
          (m_pfnWarningFunc)(1, v6, 0.0);
          v6 = flNextPickupCheck;
        }
      }
      m_flCurrentTime = v5->m_flCurrentTime;
    }
    if ( v6 <= m_flCurrentTime )
    {
      v8 = gpGlobals;
      v9 = 0.0;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v14 = gpGlobals->m_pfnWarningFunc;
          if ( v14 != 0 )
            (v14)(1, 0.0);
        }
        v9 = v8->m_flCurrentTime;
      }
      this->m_flLastPickupCheck = v9;
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      m_pCollision = pOther->m_pCollision;
      if ( m_pCollision != 0 )
        CCollisionProperty::CalcNearestPoint(m_pCollision, AbsOrigin, &vNearestPoint);
      else
        vNearestPoint = *CBaseEntity::GetAbsOrigin(pOther);
      v12 = CBaseEntity::GetAbsOrigin(this);
      if ( this->m_bHasTriggerRadius
        && this->m_bHasPickupRadius
        && (v13 = (((v12->x - vNearestPoint.x) * (v12->x - vNearestPoint.x))
                 + ((v12->y - vNearestPoint.y) * (v12->y - vNearestPoint.y)))
                + ((v12->z - vNearestPoint.z) * (v12->z - vNearestPoint.z))) > this->m_flPickupRadiusSqr )
      {
        if ( this->m_flTriggerRadiusSqr > v13 )
        {
          value.m_type = 0;
          value.m_flags = 0;
          value.m_uint64 = 0;
          CEntityIOOutput::FireOutputInternal(&this->m_OnTriggerTouch, pOther, this, &value, 0.0);
          if ( (value.m_flags & 1) != 0 )
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
        }
      }
      else if ( CItemGeneric::AllowPickup(this, pOther) )
      {
        CItemGeneric::DoPickup(this, pOther);
      }
    }
  }
}


// CItemGeneric::InputStartAmbientSound  (line 372, @0x000000000226b290, libserver.so)
// calls: CItemGeneric::StartAmbientSound
void __fastcall CItemGeneric::InputStartAmbientSound(CItemGeneric *const this, inputdata_t *const inputdata)
{
  CItemGeneric::StartAmbientSound(this);
}


// CItemGeneric::InputStopAmbientSound  (line 380, @0x00000000022582c0, libserver.so)  // inlines: InValidate, StopAmbientSound
// calls: CBaseEntity::StopSound
void __fastcall CItemGeneric::InputStopAmbientSound(CItemGeneric *const this, inputdata_t *const inputdata)
{
  if ( this->m_hAmbientSound.m_nGuid.m_Data != 0 )
  {
    CBaseEntity::StopSound(&this->m_hAmbientSound);
    this->m_hAmbientSound.m_nGuid.m_Data = 0;
    this->m_hAmbientSound.m_hStackHash = -1;
  }
}


// CItemGeneric::InputToggleAmbientSound  (line 388, @0x000000000226b2a0, libserver.so)  // inlines: InValidate, StopAmbientSound
// calls: CBaseEntity::StopSound, CItemGeneric::StartAmbientSound
void __fastcall CItemGeneric::InputToggleAmbientSound(CItemGeneric *const this, inputdata_t *const inputdata)
{
  if ( this->m_hAmbientSound.m_nGuid.m_Data != 0 )
  {
    CBaseEntity::StopSound(&this->m_hAmbientSound);
    this->m_hAmbientSound.m_nGuid.m_Data = 0;
    this->m_hAmbientSound.m_hStackHash = -1;
  }
  else
  {
    CItemGeneric::StartAmbientSound(this);
  }
}


// CItemGeneric::StartAmbientSound  (line 405, @0x000000000226b250, libserver.so)
// calls: CBaseEntity::EmitSound
// callers: CItemGeneric::InputStartAmbientSound, CItemGeneric::InputToggleAmbientSound, CItemGeneric::Spawn
void __fastcall CItemGeneric::StartAmbientSound(CItemGeneric *const this)
{
  if ( this->m_pAmbientSoundEffect.u.m_Id != 0 )
    this->m_hAmbientSound = CBaseEntity::EmitSound(this, this->m_pAmbientSoundEffect.u.m_pAsString, 0.0, 0);
}


// CItemGeneric::StopAmbientSound  (line 416, @0x000000000226b2f0, libserver.so)  // inlines: InValidate
// calls: CBaseEntity::StopSound
void __fastcall CItemGeneric::StopAmbientSound(CItemGeneric *const this)
{
  if ( this->m_hAmbientSound.m_nGuid.m_Data != 0 )
  {
    CBaseEntity::StopSound(&this->m_hAmbientSound);
    this->m_hAmbientSound.m_nGuid.m_Data = 0;
    this->m_hAmbientSound.m_hStackHash = -1;
  }
}


// CItemGeneric::ConsiderForPickup  (line 428, @0x000000000226b330, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator bool
// calls: CBaseFilter::PassesFilter
// callers: CItemGeneric::OnHelperEndTrigger, CItemGeneric::ItemGenericTouch, CItemGeneric::OnHelperTrigger, CItemGeneric::OnHelperStartTrigger
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CItemGeneric::ConsiderForPickup(CItemGeneric *const this, CBaseEntity *pOther)
{
  CBaseEntity *m_pInstance; // rcx
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  char v8; // al
  CBaseEntity *v9; // rdx
  bool v10; // zf
  uint32 v11; // eax
  CEntityIdentity *v12; // rcx
  CEntityIdentity *v13; // rcx

  m_pInstance = 0;
  m_Index = this->m_hTriggerHelper.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTriggerHelper.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[this->m_hTriggerHelper.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( pOther == m_pInstance )
    return 0;
  v8 = (*(pOther->_vptr_IHandleEntity + 140))(pOther);
  v9 = 0;
  v10 = v8 == 0;
  v11 = this->m_hPickupFilter.m_Index;
  if ( !v10 )
    v9 = pOther;
  if ( v11 + 2 > 1
    && (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPickupFilter.m_Index) >> 9) & 0x3F]) != 0
    && (v13 = &v12[this->m_hPickupFilter.m_Index & 0x1FF]) != 0
    && v11 == v13->m_EHandle.m_Index )
  {
    return CBaseFilter::PassesFilter(v13->m_pInstance, this, pOther);
  }
  else
  {
    return v9 != 0;
  }
}


// CItemGeneric::AllowPickup  (line 453, @0x000000000226e1b0, libserver.so)  // inlines: AssignTo, CVariantBase, Call<HSCRIPT__*>, EntityToHScript, Free, Get, GetEntityNameAsCStr, GetPublicScriptScope, GetVM, ItemCanBeTouchedByPlayer, LookupFunction, String, ToCStr, ToHScript, _V_strcmp, operator=, ~CVariantBase
// calls: Warning, DevWarning(char const*,...), UTIL_ItemCanBeTouchedByPlayer, CEntityInstance::CreatePublicScriptScope, VariantFieldTypeName, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CItemGeneric::ItemGenericTouch, CItemGeneric::OnHelperTrigger
// strings: "true", "Invalid conversion : CString '%s' to bool\n", "WARNING: item_generic '%s' - allowpickup callback '%s' should return a bool!\n", "WARNING: item_generic '%s' - allowpickup callback '%s' not found!\n", "false", "No conversion from %s to bool now\n"
// globals: jpt_226E2C3
bool __fastcall CItemGeneric::AllowPickup(CItemGeneric *const this, CBaseEntity *pOther)
{
  __int64 v4; // r13
  CEntityIdentity *v5; // rax
  HSCRIPT m_hScope; // rax
  const char *v7; // rdx
  CEntityIdentity *v8; // rax
  const char *v9; // rsi
  bool result; // al
  char m_char; // bl
  const char *m_pAsString; // rdx
  CEntityIdentity *m_pEntity; // rax
  const char *v14; // rsi
  const char *v15; // rax
  ScriptVariant_t allowReturnValue; // [rsp+10h] [rbp-50h] BYREF
  HSCRIPT v17; // [rsp+20h] [rbp-40h] BYREF
  __int16 v18; // [rsp+28h] [rbp-38h]
  __int16 v19; // [rsp+2Ah] [rbp-36h]

  if ( (*(pOther->_vptr_IHandleEntity + 140))(pOther) == 0 || (result = UTIL_ItemCanBeTouchedByPlayer(this, pOther)) )
  {
    if ( this->m_pAllowPickupScriptFunction.u.m_Id != 0 )
    {
      v4 = (*(*g_pScriptVM + 144LL))(
             g_pScriptVM,
             this->m_pAllowPickupScriptFunction.u.m_Id,
             this->m_hPrivateScope.m_hScope,
             0);
      if ( v4 == 0 )
      {
        m_pAsString = "";
        if ( this->m_pAllowPickupScriptFunction.u.m_Id != 0 )
          m_pAsString = this->m_pAllowPickupScriptFunction.u.m_pAsString;
        m_pEntity = this->m_pEntity;
        v14 = "";
        if ( m_pEntity->m_name.u.m_Id != 0 )
          v14 = m_pEntity->m_name.u.m_pAsString;
        DevWarning("WARNING: item_generic '%s' - allowpickup callback '%s' not found!\n", v14, m_pAsString);
        return 1;
      }
      v5 = pOther->m_pEntity;
      allowReturnValue.m_type = 0;
      allowReturnValue.m_flags = 0;
      allowReturnValue.m_uint64 = 0;
      m_hScope = v5->m_hPublicScope.m_hScope;
      if ( m_hScope == 0 )
      {
        CEntityInstance::CreatePublicScriptScope(pOther, 0);
        m_hScope = pOther->m_pEntity->m_hPublicScope.m_hScope;
      }
      v19 = 0;
      v18 = 31;
      v17 = m_hScope;
      (*(*g_pScriptVM + 160LL))(g_pScriptVM, v4, &v17, 1, &allowReturnValue, this->m_hPrivateScope.m_hScope, 1);
      if ( (v19 & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v17);
      (*(*g_pScriptVM + 152LL))(g_pScriptVM, v4);
      switch ( allowReturnValue.m_type )
      {
        case 0:
          goto LABEL_12;
        case 1:
          m_char = allowReturnValue.m_float != 0.0;
          goto LABEL_22;
        case 5:
        case 0x25:
          m_char = allowReturnValue.m_int != 0;
          goto LABEL_22;
        case 6:
          m_char = allowReturnValue.m_char;
          goto LABEL_22;
        case 0x1A:
        case 0x21:
          m_char = allowReturnValue.m_uint64 != 0;
          goto LABEL_22;
        case 0x1E:
          if ( strcmp(allowReturnValue.m_pszString, "0") == 0
            || strcmp(allowReturnValue.m_pszString, "false") == 0
            || strcmp(allowReturnValue.m_pszString, "no") == 0 )
          {
            m_char = 0;
          }
          else
          {
            if ( strcmp(allowReturnValue.m_pszString, "1") != 0
              && strcmp(allowReturnValue.m_pszString, "true") != 0
              && strcmp(allowReturnValue.m_pszString, "yes") != 0 )
            {
              Warning("Invalid conversion : CString '%s' to bool\n", allowReturnValue.m_pszString);
LABEL_12:
              v7 = "";
              if ( this->m_pAllowPickupScriptFunction.u.m_Id != 0 )
                v7 = this->m_pAllowPickupScriptFunction.u.m_pAsString;
              v8 = this->m_pEntity;
              v9 = "";
              if ( v8->m_name.u.m_Id != 0 )
                v9 = v8->m_name.u.m_pAsString;
              DevWarning("WARNING: item_generic '%s' - allowpickup callback '%s' should return a bool!\n", v9, v7);
              if ( (allowReturnValue.m_flags & 1) != 0 )
                (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, allowReturnValue.m_uint64);
              return 1;
            }
            m_char = 1;
          }
LABEL_22:
          if ( (allowReturnValue.m_flags & 1) != 0 )
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, allowReturnValue.m_uint64);
          return m_char;
        case 0x22:
          m_char = allowReturnValue.m_float64 != 0.0;
          goto LABEL_22;
        default:
          v15 = VariantFieldTypeName(allowReturnValue.m_type);
          Warning("No conversion from %s to bool now\n", v15);
          goto LABEL_12;
      }
    }
    return 1;
  }
  return result;
}


// CItemGeneric::DoPickup  (line 519, @0x000000000226eac0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, FromUntypedHandleUnchecked, InValidate, InitUntypedUnchecked, StopAmbientSound, operator CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>, ~CVariantBase
// calls: CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsOrigin, DispatchParticleEffect, CEntityInstance::CallScriptFunction, CEntityIOOutput::FireOutputInternal, UTIL_Remove, CBaseEntity::StopSound, CBaseEntity::EmitSound, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CItemGeneric::ItemGenericTouch, CItemGeneric::OnHelperTrigger
void __fastcall CItemGeneric::DoPickup(CItemGeneric *const this, CBaseEntity *pPickupBy)
{
  const QAngle *AbsAngles; // r14
  const Vector *AbsOrigin; // rax
  CVariant nEffectIndex[3]; // [rsp+0h] [rbp-30h] BYREF

  if ( this->m_hPickupParticleEffect.m_pBinding != 0 )
  {
    AbsAngles = CBaseEntity::GetAbsAngles(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    nEffectIndex[0].m_uint64 = this->m_hPickupParticleEffect.m_pBinding;
    DispatchParticleEffect(nEffectIndex, AbsOrigin, AbsAngles, ParticleAttachment_t::PATTACH_ABSORIGIN, 0, -1);
  }
  if ( this->m_hAmbientSound.m_nGuid.m_Data != 0 )
  {
    CBaseEntity::StopSound(&this->m_hAmbientSound);
    this->m_hAmbientSound.m_nGuid.m_Data = 0;
    this->m_hAmbientSound.m_hStackHash = -1;
  }
  if ( this->m_pPickupScriptFunction.u.m_Id != 0 )
    CEntityInstance::CallScriptFunction(
      this,
      CallScriptFunctionBehavior_t::CALL_SCRIPT_FUNCTION_PRIVATE_AND_GLOBAL,
      this->m_pPickupScriptFunction.u.m_pAsString,
      0,
      0);
  if ( this->m_pPickupSoundEffect.u.m_Id != 0 )
    CBaseEntity::EmitSound(this, this->m_pPickupSoundEffect.u.m_pAsString, 0.0, 0);
  nEffectIndex[0].m_type = 0;
  nEffectIndex[0].m_flags = 0;
  nEffectIndex[0].m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnPickup, pPickupBy, this, nEffectIndex, 0.0);
  if ( (nEffectIndex[0].m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, nEffectIndex[0].m_uint64);
  UTIL_Remove(this);
}


// CItemGeneric::AutoRemoveThink  (line 577, @0x000000000226e8c0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, FromUntypedHandleUnchecked, InitUntypedUnchecked, operator CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>, ~CVariantBase
// calls: CEntityInstance::CallScriptFunction, CEntityIOOutput::FireOutputInternal, CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsOrigin, DispatchParticleEffect, CBaseEntity::EmitSound, UTIL_Remove, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CItemGeneric::AutoRemoveThink(CItemGeneric *const this)
{
  const QAngle *AbsAngles; // r13
  const Vector *AbsOrigin; // rax
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  if ( this->m_pTimeoutScriptFunction.u.m_Id != 0 )
    CEntityInstance::CallScriptFunction(
      this,
      CallScriptFunctionBehavior_t::CALL_SCRIPT_FUNCTION_PRIVATE_AND_GLOBAL,
      this->m_pTimeoutScriptFunction.u.m_pAsString,
      0,
      0);
  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnTimeout, this, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  if ( this->m_hTimeoutParticleEffect.m_pBinding != 0 )
  {
    AbsAngles = CBaseEntity::GetAbsAngles(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    value.m_uint64 = this->m_hTimeoutParticleEffect.m_pBinding;
    DispatchParticleEffect(&value, AbsOrigin, AbsAngles, ParticleAttachment_t::PATTACH_ABSORIGIN, 0, -1);
  }
  if ( this->m_pTimeoutSoundEffect.u.m_Id != 0 )
    CBaseEntity::EmitSound(this, this->m_pTimeoutSoundEffect.u.m_pAsString, 0.0, 0);
  UTIL_Remove(this);
}


// CItemGeneric::UpdateOnRemove  (line 602, @0x0000000002258300, libserver.so)  // inlines: InValidate, StopAmbientSound
// calls: CBaseEntity::StopSound, CBaseAnimating::UpdateOnRemove
void __fastcall CItemGeneric::UpdateOnRemove(CItemGeneric *const this)
{
  if ( this->m_hAmbientSound.m_nGuid.m_Data != 0 )
  {
    CBaseEntity::StopSound(&this->m_hAmbientSound);
    this->m_hAmbientSound.m_nGuid.m_Data = 0;
    this->m_hAmbientSound.m_hStackHash = -1;
  }
  CBaseAnimating::UpdateOnRemove(this);
}


// CItemGeneric::GetUseType  (line 627, @0x0000000002254420, libserver.so)
CBaseEntity::UseType __fastcall CItemGeneric::GetUseType(CItemGeneric *const this, CBaseEntity *pActivator)
{
  if ( pActivator == 0 )
    return CBaseEntity::UseType::USE_DUPLICATE;
  if ( (*(pActivator->_vptr_IHandleEntity + 140))(pActivator) != 0 )
    return CBaseEntity::UseType::USE_NORMAL;
  return CBaseEntity::UseType::USE_DUPLICATE;
}


// CItemGeneric::GetUsePriority  (line 638, @0x0000000002254460, libserver.so)
UsePriorityType __fastcall CItemGeneric::GetUsePriority(CItemGeneric *const this, CBaseEntity *pActivator)
{
  return ((this->m_fEffects.m_Value >> 5) ^ 1) & 1;
}


// CItemGeneric::ObjectCaps  (line 651, @0x0000000002256f90, libserver.so)  // inlines: ObjectCaps
// calls: CBaseEntity::ObjectCaps
int __fastcall CItemGeneric::ObjectCaps(CItemGeneric *const this)
{
  int result; // eax

  result = 1073741985;
  if ( !this->m_bUseable )
    return CBaseEntity::ObjectCaps(this) | 0x40000821;
  return result;
}


// CItemGeneric::Use  (line 662, @0x0000000002254480, libserver.so)
void __fastcall CItemGeneric::Use(
        CItemGeneric *const this,
        CBaseEntity *activator,
        CBaseEntity *caller,
        USE_TYPE useType,
        float value)
{
  ;
}


// CItemGeneric::UpdateDerivedGlowState  (line 687, @0x000000000226b440, libserver.so)  // inlines: NetworkStateChanged, Set, SetGlowColorOverride, SetRawColor, StartGlowing, StopGlowing, operator=
// calls: CGlowProperty::SetGlowState, CGlowProperty::SetGlowRange, CGlowProperty::SetGlowRangeMin
// callers: CItemGeneric::Activate, CItemGeneric::PostClientActive, CItemGeneric::OnHelperEndTrigger, CItemGeneric::OnHelperStartTrigger
void __fastcall CItemGeneric::UpdateDerivedGlowState(CItemGeneric *const this)
{
  CBaseModelEntity::NetworkVar_m_Glow *p_m_Glow; // r12
  CNetworkColorBase<Color,CGlowProperty::NetworkVar_m_glowColorOverride> m_glowColor; // r13d

  if ( this->m_bGlowWhenInTrigger && this->m_bPlayerInTriggerRadius )
  {
    p_m_Glow = &this->m_Glow;
    CGlowProperty::SetGlowState(&this->m_Glow, 3);
    CGlowProperty::SetGlowRange(p_m_Glow, (this->m_flTriggerRadius + this->m_flTriggerRadius));
    CGlowProperty::SetGlowRangeMin(p_m_Glow, 0);
    m_glowColor = this->m_glowColor;
    if ( m_glowColor != *&this->m_Glow.m_glowColorOverride )
    {
      (*(this->m_Glow._vptr_CGlowProperty + 2))(p_m_Glow, 60, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_Glow.m_glowColorOverride = m_glowColor;
    }
    this->m_Glow.m_bGlowing = 1;
  }
  else
  {
    CGlowProperty::SetGlowState(&this->m_Glow, 0);
    CGlowProperty::SetGlowRange(&this->m_Glow, 0);
    CGlowProperty::SetGlowRangeMin(&this->m_Glow, 0);
    if ( *&this->m_Glow.m_glowColorOverride != 0 )
    {
      (*(this->m_Glow._vptr_CGlowProperty + 2))(&this->m_Glow, 60, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_Glow.m_glowColorOverride = 0;
    }
    this->m_Glow.m_bGlowing = 0;
  }
}


// CItemGenericTriggerHelper::GetDataDescMap  (line 740, @0x0000000002254490, libserver.so)
// globals: CItemGenericTriggerHelper::m_DataMap
datamap_t *__fastcall CItemGenericTriggerHelper::GetDataDescMap(CItemGenericTriggerHelper *const this)
{
  return &CItemGenericTriggerHelper::m_DataMap;
}


// CItemGenericTriggerHelper::AddDatadescMetadataKeys  (line 740, @0x000000000226b5c0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CItemGenericTriggerHelper::GetEntityClass(void)
void __fastcall CItemGenericTriggerHelper::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CItemGenericTriggerHelper::GetEntityClass);
}


// CItemGenericTriggerHelper::GetBaseMap  (line 740, @0x000000000226b5e0, libserver.so)
datamap_t *__cdecl CItemGenericTriggerHelper::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CItemGenericTriggerHelper>  (line 740, @0x000000000226f690, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_06.cpp
// strings: "CItemGenericTriggerHelper"
// globals: `guard variable for'DataMapInit<CItemGenericTriggerHelper>(CItemGenericTriggerHelper *)::nameHolder, `guard variable for'DataMapInit<CItemGenericTriggerHelper>(CItemGenericTriggerHelper *)::dataDesc, CItemGenericTriggerHelper::GetEntityClass(void), CItemGenericTriggerHelper::m_DataMap, DataMapInit<CItemGenericTriggerHelper>(CItemGenericTriggerHelper *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CItemGenericTriggerHelper>(CItemGenericTriggerHelper *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CItemGenericTriggerHelper>(CItemGenericTriggerHelper *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CItemGenericTriggerHelper>(CItemGenericTriggerHelper *)::nameHolder) != 0 )
  {
    DataMapInit<CItemGenericTriggerHelper>(CItemGenericTriggerHelper *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CItemGenericTriggerHelper>(CItemGenericTriggerHelper *)::nameHolder.m_pszBase = "CItemGenericTriggerHelper";
    DataMapInit<CItemGenericTriggerHelper>(CItemGenericTriggerHelper *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CItemGenericTriggerHelper>(CItemGenericTriggerHelper *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CItemGenericTriggerHelper>(CItemGenericTriggerHelper *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CItemGenericTriggerHelper>(CItemGenericTriggerHelper *)::nameHolder.m_nLenBase = 25;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CItemGenericTriggerHelper>(CItemGenericTriggerHelper *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CItemGenericTriggerHelper>(CItemGenericTriggerHelper *)::nameHolder,
      &_dso_handle);
  }
  CItemGenericTriggerHelper::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CItemGenericTriggerHelper>(CItemGenericTriggerHelper *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CItemGenericTriggerHelper>(CItemGenericTriggerHelper *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CItemGenericTriggerHelper>(CItemGenericTriggerHelper *)::nameHolder.m_nLenBase + 30);
    strcpy(
      stpcpy(v2, DataMapInit<CItemGenericTriggerHelper>(CItemGenericTriggerHelper *)::nameHolder.m_pszBase),
      "ItemGenericTriggerHelperTouch");
    m_Size = DataMapInit<CItemGenericTriggerHelper>(CItemGenericTriggerHelper *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CItemGenericTriggerHelper>(CItemGenericTriggerHelper *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CItemGenericTriggerHelper>(CItemGenericTriggerHelper *)::nameHolder.m_Names.m_Size == DataMapInit<CItemGenericTriggerHelper>(CItemGenericTriggerHelper *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(
        &DataMapInit<CItemGenericTriggerHelper>(CItemGenericTriggerHelper *)::nameHolder.m_Names.m_Memory,
        1);
      v4 = DataMapInit<CItemGenericTriggerHelper>(CItemGenericTriggerHelper *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CItemGenericTriggerHelper>(CItemGenericTriggerHelper *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CItemGenericTriggerHelper>(CItemGenericTriggerHelper *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CItemGenericTriggerHelper>(CItemGenericTriggerHelper *)::dataDesc[1].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CItemGenericTriggerHelper>(CItemGenericTriggerHelper *)::dataDesc);
  }
  CItemGenericTriggerHelper::m_DataMap.dataNumFields = 2;
  CItemGenericTriggerHelper::m_DataMap.dataDesc = &DataMapInit<CItemGenericTriggerHelper>(CItemGenericTriggerHelper *)::dataDesc[1];
  AddDatadescMetadataKeys(&CItemGenericTriggerHelper::m_DataMap, CItemGenericTriggerHelper::GetEntityClass);
  return &CItemGenericTriggerHelper::m_DataMap;
}


// CItemGenericTriggerHelper::CItemGenericTriggerHelper  (line 750, @0x000000000226b5f0, libserver.so)  // inlines: CEntityHandle, CHandle
// calls: CBaseModelEntity::CBaseModelEntity
// callers: CItemGenericTriggerHelper::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CItemGenericTriggerHelper::CItemGenericTriggerHelper(CItemGenericTriggerHelper *const this)
{
  CBaseModelEntity::CBaseModelEntity(this);
  this->m_hParentItem.m_Index = -1;
  this->_vptr_IHandleEntity = &off_40547D0;
}


// CItemGenericTriggerHelper::InitTriggerHelper  (line 757, @0x000000000226b620, libserver.so)  // inlines: CCollisionAttributeWriter, CNetworkVarBase, Compare, DisableInteractsWith, EnableInteractsWith, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, GetEHandle, GetEntryIndex, GetForModify, GetSerialNumber, NetworkStateChanged, Release, Set, VPhysicsCollisionAttribute_t, Vector, operator=, ~CCollisionAttributeWriter
// calls: CCollisionProperty::SetupPhysicsFromUnscaledAABB, CBaseEntity::VPhysicsGetAggregate, CBaseEntity::SetParent, _Unwind_Resume
// callers: CItemGeneric::Spawn
// globals: CItemGenericTriggerHelper::ItemGenericTriggerHelperTouch(CBaseEntity *)
void __fastcall CItemGenericTriggerHelper::InitTriggerHelper(
        CItemGenericTriggerHelper *const this,
        CItemGeneric *pParentItem,
        float a3,
        float flMaxRadius)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r15
  IPhysAggregateInstance *Aggregate; // rax
  IPhysAggregateInstance *v8; // r14
  unsigned __int64 m_Value; // rax
  unsigned __int64 v10; // rax
  CCollisionProperty *m_pCollisionProp; // r13
  CEntityIdentity *m_pEntity; // rdx
  int v13; // eax
  __int16 v14; // cx
  CCollisionProperty *v15; // rbx
  IPhysAggregateInstance *pAgg; // [rsp+0h] [rbp-90h]
  char bParentAsleep; // [rsp+Fh] [rbp-81h]
  Vector vMins; // [rsp+10h] [rbp-80h] BYREF
  CCollisionAttributeWriter<RnCollisionAttr_t> writer; // [rsp+20h] [rbp-70h] BYREF

  p_m_Collision = &this->m_Collision;
  *&writer.m_pCollisionProp = a3;
  *(&writer.m_pCollisionProp + 1) = a3;
  *&writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = a3;
  vMins.x = -a3;
  vMins.y = -a3;
  vMins.z = -a3;
  pAgg = CCollisionProperty::SetupPhysicsFromUnscaledAABB(
           &this->m_Collision,
           VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED,
           2,
           &vMins,
           &writer);
  Aggregate = CBaseEntity::VPhysicsGetAggregate(pParentItem);
  bParentAsleep = 0;
  v8 = Aggregate;
  if ( Aggregate != 0 )
    bParentAsleep = (*(Aggregate->_vptr_IPhysAggregateInstance + 31))(Aggregate);
  writer.m_pCollisionProp = p_m_Collision;
  writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
  m_Value = this->m_Collision.m_collisionAttribute.m_nInteractsAs.m_Value;
  memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
  if ( m_Value != 0 )
    writer.m_OriginalState.m_nInteractsAs.m_Value = m_Value;
  v10 = this->m_Collision.m_collisionAttribute.m_nInteractsWith.m_Value;
  if ( v10 != 0 )
  {
    writer.m_OriginalState.m_nInteractsWith.m_Value = this->m_Collision.m_collisionAttribute.m_nInteractsWith.m_Value;
    v10 = writer.m_OriginalState.m_nInteractsExclude.m_Value;
  }
  if ( this->m_Collision.m_collisionAttribute.m_nInteractsExclude.m_Value != v10 )
  {
    (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_OriginalState,
      24,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    writer.m_OriginalState.m_nInteractsExclude.m_Value = this->m_Collision.m_collisionAttribute.m_nInteractsExclude.m_Value;
  }
  if ( writer.m_OriginalState.m_nEntityId.m_Value != this->m_Collision.m_collisionAttribute.m_nEntityId.m_Value )
  {
    (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_OriginalState,
      32,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    writer.m_OriginalState.m_nEntityId.m_Value = this->m_Collision.m_collisionAttribute.m_nEntityId.m_Value;
  }
  if ( writer.m_OriginalState.m_nHierarchyId.m_Value != this->m_Collision.m_collisionAttribute.m_nHierarchyId.m_Value )
  {
    (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_OriginalState,
      36,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    writer.m_OriginalState.m_nHierarchyId.m_Value = this->m_Collision.m_collisionAttribute.m_nHierarchyId.m_Value;
  }
  if ( writer.m_OriginalState.m_nCollisionGroup.m_Value != this->m_Collision.m_collisionAttribute.m_nCollisionGroup.m_Value )
  {
    (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_OriginalState,
      38,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    writer.m_OriginalState.m_nCollisionGroup.m_Value = this->m_Collision.m_collisionAttribute.m_nCollisionGroup.m_Value;
  }
  if ( writer.m_OriginalState.m_nCollisionFunctionMask.m_Value != this->m_Collision.m_collisionAttribute.m_nCollisionFunctionMask.m_Value )
  {
    (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_OriginalState,
      39,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    writer.m_OriginalState.m_nCollisionFunctionMask.m_Value = this->m_Collision.m_collisionAttribute.m_nCollisionFunctionMask.m_Value;
  }
  m_pCollisionProp = writer.m_pCollisionProp;
  writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value = writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value
                                                                         & 0xFFFFFFFFFFF1FFFFLL
                                                                         | 0xC0000;
  if ( !writer.m_bReleased )
  {
    writer.m_bReleased = 1;
    if ( m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
      (*(m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &m_pCollisionProp->m_collisionAttribute,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
      (*(m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &m_pCollisionProp->m_collisionAttribute,
        16,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( m_pCollisionProp->m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
      (*(m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &m_pCollisionProp->m_collisionAttribute,
        24,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( m_pCollisionProp->m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
      (*(m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &m_pCollisionProp->m_collisionAttribute,
        32,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( m_pCollisionProp->m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
      (*(m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &m_pCollisionProp->m_collisionAttribute,
        36,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
      (*(m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &m_pCollisionProp->m_collisionAttribute,
        38,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value != writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
      (*(m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &m_pCollisionProp->m_collisionAttribute,
        39,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
  }
  this->m_pfnTouch.__pfn = CItemGenericTriggerHelper::ItemGenericTriggerHelperTouch;
  this->m_pfnTouch.__delta = 0;
  CBaseEntity::SetParent(this, pParentItem, 0, 0);
  if ( pParentItem != 0 && (m_pEntity = pParentItem->m_pEntity) != 0 )
  {
    v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v14 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hParentItem.m_Index) = v14 | this->m_hParentItem.m_Index & 0x8000;
    this->m_hParentItem.m_Index = (v13 << 15) | this->m_hParentItem.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hParentItem.m_Index = -1;
  }
  if ( bParentAsleep != 0 )
  {
    (*(v8->_vptr_IPhysAggregateInstance + 30))(v8);
    if ( pAgg != 0 )
      (*(pAgg->_vptr_IPhysAggregateInstance + 30))(pAgg);
  }
  if ( !writer.m_bReleased )
  {
    v15 = writer.m_pCollisionProp;
    writer.m_bReleased = 1;
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( v15->m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
      (*(v15->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &v15->m_collisionAttribute,
        16,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( v15->m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
      (*(v15->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &v15->m_collisionAttribute,
        24,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( v15->m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
      (*(v15->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &v15->m_collisionAttribute,
        32,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( v15->m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
      (*(v15->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &v15->m_collisionAttribute,
        36,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( v15->m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
      (*(v15->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &v15->m_collisionAttribute,
        38,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( v15->m_collisionAttribute.m_nCollisionFunctionMask.m_Value != writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
      (*(v15->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &v15->m_collisionAttribute,
        39,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
  }
}


// CItemGenericTriggerHelper::StartTouch  (line 788, @0x000000000226f040, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator bool
// calls: CBaseEntity::StartTouch, CItemGeneric::OnHelperStartTrigger
// globals: CEntityHandle::gm_pEntityList
void __fastcall CItemGenericTriggerHelper::StartTouch(CItemGenericTriggerHelper *const this, CBaseEntity *pOther)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx

  CBaseEntity::StartTouch(this, pOther);
  m_Index = this->m_hParentItem.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParentItem.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[this->m_hParentItem.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index && pOther != v6->m_pInstance )
        CItemGeneric::OnHelperStartTrigger(v6->m_pInstance, pOther);
    }
  }
}


// CItemGenericTriggerHelper::EndTouch  (line 800, @0x000000000226e840, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator bool
// calls: CBaseEntity::EndTouch, CItemGeneric::OnHelperEndTrigger
// globals: CEntityHandle::gm_pEntityList
void __fastcall CItemGenericTriggerHelper::EndTouch(CItemGenericTriggerHelper *const this, CBaseEntity *pOther)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx

  CBaseEntity::EndTouch(this, pOther);
  m_Index = this->m_hParentItem.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParentItem.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[this->m_hParentItem.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index && pOther != v6->m_pInstance )
        CItemGeneric::OnHelperEndTrigger(v6->m_pInstance, pOther);
    }
  }
}


// CItemGenericTriggerHelper::ItemGenericTriggerHelperTouch  (line 813, @0x000000000226eef0, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator bool
// calls: CItemGeneric::OnHelperTrigger
// globals: CEntityHandle::gm_pEntityList
void __fastcall CItemGenericTriggerHelper::ItemGenericTriggerHelperTouch(
        CItemGenericTriggerHelper *const this,
        CBaseEntity *pOther)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  m_Index = this->m_hParentItem.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParentItem.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hParentItem.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index && pOther != v4->m_pInstance )
        CItemGeneric::OnHelperTrigger(v4->m_pInstance, pOther);
    }
  }
}


