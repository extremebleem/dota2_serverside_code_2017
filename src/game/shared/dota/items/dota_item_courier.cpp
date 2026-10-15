// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_courier.cpp:32
class CDOTA_Item_Courier : public CDOTA_Item {
public:

private:

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CDOTA_Item_Courier(CDOTA_Item_Courier &);
	CDOTA_Item_Courier(CDOTA_Item_Courier &);
	CDOTA_Item_Courier();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnPurchase(int, const char *);
	virtual void OnSpellStart();
	virtual ~CDOTA_Item_Courier();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[335] OnPurchase
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_courier.cpp:137
class CDOTA_Item_Flying_Courier : public CDOTA_Item {
public:

private:

	float m_fNextThinkTime;  // +0x3e8
	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CDOTA_Item_Flying_Courier(CDOTA_Item_Flying_Courier &);
	CDOTA_Item_Flying_Courier(CDOTA_Item_Flying_Courier &);
	CDOTA_Item_Flying_Courier();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnPurchase(int, const char *);
	virtual void Think();
	virtual ~CDOTA_Item_Flying_Courier();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[335] OnPurchase
	// vtable[117] Think
	// sizeof = 1008
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Courier::~CDOTA_Item_Courier  (line 32, @0x0000000002d86040, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Courier::~CDOTA_Item_Courier(CDOTA_Item_Courier *const this)
{
  this->_vptr_IHandleEntity = &off_46BD830;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Courier::~CDOTA_Item_Courier  (line 32, @0x0000000002d86060, libserver.so)  // inlines: ~CDOTA_Item_Courier
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Courier::~CDOTA_Item_Courier(CDOTA_Item_Courier *const this)
{
  this->_vptr_IHandleEntity = &off_46BD830;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Courier::Schema_DynamicBinding  (line 34, @0x0000000002d810c0, libserver.so)
// globals: CDOTA_Item_Courier::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Courier::Schema_DynamicBinding(
        const CDOTA_Item_Courier *const this)
{
  return CDOTA_Item_Courier::s_pSchemaBinding;
}


// CDOTA_Item_Courier::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 34, @0x0000000002d810d0, libserver.so)
// globals: CDOTA_Item_Courier::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Courier::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Courier::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Courier::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Courier::CEntityInstanceEntityClass::DestructInstance  (line 34, @0x0000000002d810e0, libserver.so)  // inlines: Destruct<CDOTA_Item_Courier>
void __fastcall CDOTA_Item_Courier::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Courier::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Courier::CEntityInstanceEntityClass::FreeInstance  (line 34, @0x0000000002d81100, libserver.so)
void __fastcall CDOTA_Item_Courier::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Courier::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Courier::CEntityInstanceEntityClass::CanAllocate  (line 34, @0x0000000002d81120, libserver.so)
bool __fastcall CDOTA_Item_Courier::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Courier::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Courier::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 34, @0x0000000002d81130, libserver.so)
// globals: CDOTA_Item_Courier::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Courier::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Courier::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Courier::s_pSchemaBinding;
}


// CDOTA_Item_Courier::CEntityInstanceEntityClass::AllocateInstance  (line 34, @0x0000000002d83770, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Courier::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Courier::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Courier::CEntityInstanceEntityClass::ConstructInstance  (line 34, @0x0000000002d84ce0, libserver.so)  // inlines: CDOTA_Item_Courier, Construct<CDOTA_Item_Courier>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Courier::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Courier::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46BD830;
  }
  return p;
}


// CDOTA_Item_Courier::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 34, @0x0000000002d886b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Courier::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Courier::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Courier::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 34, @0x0000000002d886d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Courier::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Courier::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Courier::GetEntityClassInternal  (line 34, @0x0000000002d90440, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "item_courier", "CDOTA_Item_Courier"
// globals: `guard variable for'CDOTA_Item_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CourierClass, CDOTA_Item_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CourierClass, __dso_handle, CDOTA_Item_Courier::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Courier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CourierClassInfo, CDOTA_Item_Courier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CourierClassInfo
CEntityClass *__cdecl CDOTA_Item_Courier::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CourierClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CourierClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CourierClass);
    CDOTA_Item_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CourierClass._vptr_CEntityClass = off_46BD7B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CourierClass);
    __cxa_atexit(
      CDOTA_Item_Courier::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CourierClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_CourierClass != 0 )
    return &CDOTA_Item_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CourierClass;
  if ( `guard variable for'CDOTA_Item_Courier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CourierClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Courier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CourierClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Courier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CourierClassInfo,
      "CDOTA_Item_Courier",
      "item_courier",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Courier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CourierClassInfo);
  }
  CDOTA_Item_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CourierClass.m_pClassInfo = &CDOTA_Item_Courier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CourierClassInfo;
  CDOTA_Item_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CourierClass.m_pBaseClassInfo = CDOTA_Item_Courier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CourierClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_CourierClass = &CDOTA_Item_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CourierClass;
  CDOTA_Item_Courier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CourierClassInfo.m_pClass = &CDOTA_Item_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CourierClass;
  CDOTA_Item_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CourierClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_CourierClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CourierClass;
}


// CDOTA_Item_Courier::OnPurchase  (line 48, @0x0000000002d72a50, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPlayerOwnerID, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_PlayerResource::GetTeam, CDOTA_PlayerResource::GetNumCouriersForTeam, CDOTA_Item::OnPurchase, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, EconEntity_OnOwnerKillEaterEvent
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Item_Courier::OnPurchase(
        CDOTA_Item_Courier *const this,
        int nCombineType,
        const char *pszRecipeItemName)
{
  int m_Value; // r12d
  int Team; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityInstance *m_pInstance; // rdi
  int v10[12]; // [rsp+0h] [rbp-30h] BYREF

  m_Value = this->m_iPlayerOwnerID.m_Value;
  if ( m_Value != -1 )
  {
    Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, m_Value);
    if ( CDOTA_PlayerResource::GetNumCouriersForTeam(g_pDOTAPlayerResource, Team) == 0 )
    {
      CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(v10, g_pDOTAPlayerResource, m_Value);
      if ( (v10[0] + 2) > 1 )
      {
        v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10[0]) >> 9) & 0x3F];
        if ( v7 != 0 )
        {
          v8 = &v7[v10[0] & 0x1FF];
          if ( v8 != 0 && v10[0] == v8->m_EHandle.m_Index )
          {
            m_pInstance = v8->m_pInstance;
            if ( v8->m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
            {
              EconEntity_OnOwnerKillEaterEvent(
                m_pInstance,
                0,
                kill_eater_event_t::kKillEaterEventType_Couriers_Purchased,
                1,
                INVALID_ITEM_DEF_INDEX);
            }
          }
        }
      }
    }
  }
  CDOTA_Item::OnPurchase(this, nCombineType, 0);
}


// OnCourierSpawn  (line 72, @0x0000000002d738f0, libserver.so)  // inlines: AssignTo, Base, CEntityHandle, Element, FindKeyHash, GetEntityIdentity, GetEntryIndex, GetInstance, GetValue, GetValue<CEntityHandle>, IndexToIdentity, LookupEntity, VectorAdd, operator CBaseEntity*, operator+, operator[]
// calls: RandomFloat, CBaseEntity::GetAbsOrigin, FindClearSpaceForUnit, CDOTA_BaseNPC::SetControllableByPlayer, CDOTA_PlayerResource::IncrementCouriersDeployed, VariantFieldTypeName, Warning
// strings: "No free conversion of %s variant to EHANDLE2 right now\n"
// globals: CEntityHandle::gm_pEntityList, CEntityKeyValues::sm_EmptyVariant
void __fastcall OnCourierSpawn(CDOTA_BaseNPC *pEntity, const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // edi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v5; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v7; // rdx
  CEntityVariant *p_m_value; // rax
  int16 m_type; // dx
  int m_int; // ecx
  CEntityInstance *m_pInstance; // r12
  CEntityIdentity *v12; // rax
  CEntityIdentity *v13; // rax
  const Vector *AbsOrigin; // rax
  const char *v15; // rax
  float v16; // [rsp+8h] [rbp-28h]
  float v17; // [rsp+Ch] [rbp-24h]
  __int64 vPos; // [rsp+10h] [rbp-20h]
  Vector v19; // 0:xmm0_8.8,8:xmm1_4.4

  if ( pEntity == 0 )
    return;
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_19:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( m_type != 0 )
      goto LABEL_13;
    goto LABEL_20;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v5 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v5) == -1542362667 )
      goto LABEL_10;
LABEL_7:
    if ( m_nCount <= ++v5 )
      goto LABEL_19;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v5] != -1542362667 )
    goto LABEL_7;
LABEL_10:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v7 = pKeyValues->m_keyValues.m_pElements;
  else
    v7 = 0;
  p_m_value = &v7[v5].m_value;
  m_type = p_m_value->m_type;
  if ( m_type == 0 )
  {
LABEL_20:
    m_pInstance = 0;
    goto LABEL_21;
  }
LABEL_13:
  m_int = p_m_value->m_int;
  if ( m_type != 13 )
  {
    v15 = VariantFieldTypeName(m_type);
    Warning("No free conversion of %s variant to EHANDLE2 right now\n", v15);
    goto LABEL_20;
  }
  m_pInstance = 0;
  if ( (m_int + 2) > 1 )
  {
    v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_int >> 9) & 0x3F];
    if ( v12 != 0 )
    {
      v13 = &v12[m_int & 0x1FF];
      if ( v13 != 0 && m_int == v13->m_EHandle.m_Index )
        m_pInstance = v13->m_pInstance;
    }
  }
LABEL_21:
  v16 = RandomFloat(100.0, 200.0);
  v17 = RandomFloat(100.0, 200.0);
  AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
  v19.z = AbsOrigin->z + 0.0;
  *(&vPos + 1) = v16 + AbsOrigin->y;
  *&vPos = v17 + AbsOrigin->x;
  *&v19.x = vPos;
  FindClearSpaceForUnit(pEntity, v19, 1);
  CDOTA_BaseNPC::SetControllableByPlayer(pEntity, m_pInstance[61].m_iszPrivateVScripts.u.m_Id, 0);
  CDOTA_PlayerResource::IncrementCouriersDeployed(g_pDOTAPlayerResource, m_pInstance[61].m_iszPrivateVScripts.u.m_Id);
}


// CDOTA_Item_Courier::OnSpellStart  (line 88, @0x0000000002d7eae0, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, Add, AddKeyValue<CBaseEntity*>, AddKeyValue<CEntityHandle>, AddNPCKeyValuesForUnit, AddToTail, ApplyContextKeys, Base, Bind, CDotaNPCSpawner, CDotaNPCSpawnerAsync, CDotaNPCSpawnerContext, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerAsync, CEntitySpawnerAsyncBase, CEntitySpawnerBase, CEntitySpawnerContext, CEntitySpawnerContextBase, CMicroProfilerGuard, CMicroProfilerSample, CUtlAbstractDelegate, CUtlDelegate, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CVProfScope, Convert<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const, void (detail::GenericClass::*)()>, CopyFrom<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void> >, CopyFrom<FastDelegate2<CEntityInstance*, const CEntityKeyValues*, void> >, Element, EnterScope, EntitySpawnerAsyncDesc_t, FastDelegate2, FilterSpawnGroupEntity, FindKeyHash, Free, Get, GetClassInfo, GetEHandle, GetElapsed, GetEntityClass, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, GetTeamNumber, GetTimebaseRegister, InTargetThread, IndexToIdentity, Init, InvokeCallbacks, IsEmpty, IsEnabled, IsRealHero, LookupEntity, OverrideAllocator, PLAT_CPU_TIME, Purge, QueueContextCallbacks, Release, ReleaseEntitySpawnerEntityVariantAllocator, RemoveAll, SetClassName, SetMementoFrom, SetToIdentity, SetValue, SetValue<CBaseEntity*>, SetValue<CEntityHandle>, SetValue<int>, Spawn, SpawnInternal, UtlMakeDelegate<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, bindmemfunc<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const>, bindstaticfunc<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const>, operator!, operator(), operator=, operator[], ~CDotaNPCSpawner, ~CDotaNPCSpawnerAsync, ~CDotaNPCSpawnerContext, ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerAsync, ~CEntitySpawnerAsyncBase, ~CEntitySpawnerBase, ~CEntitySpawnerContext, ~CEntitySpawnerContextBase, ~CMicroProfilerGuard, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~CVProfScope
// calls: CDOTABaseAbility::GetCaster, CEntityKeyValues::CEntityKeyValues, __dynamic_cast, CDOTA_BaseNPC_Hero::HasChangedCourierSincePrecache, CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::SetValue, AppendNPCKeyValues, CEntityKeyValues::CopyFrom, CEntitySystem::FindClassByDesignName, CEntityKeyValues::SetValue<int> (38 total)
// strings: "npc_dota_courier", "Attempted to set attribute %s as if it was a non-attribute key!\n", "Spawn", "Server Simulation"
// globals: FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction(CDOTA_BaseNPC *,CEntityKeyValues const*), OnCourierSpawn(CDOTA_BaseNPC *,CEntityKeyValues const*), CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __fastcall CDOTA_Item_Courier::OnSpellStart(CDOTA_Item_Courier *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v2; // r12
  unsigned __int16 v3; // dx
  int v4; // esi
  CEntityInstance *m_pInstance; // r15
  int v6; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  uint32 m_iUnitType; // eax
  CDOTA_BaseNPC_Hero *v10; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v12; // si
  CEntitySystem *v13; // rdi
  CUtlScratchMemoryPool *v14; // rax
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v16; // rax
  char v17; // al
  CEntitySpawnerContext<CDOTA_BaseNPC> *i; // rbx
  CEntityKeyValues *m_pEntityKeyValues; // rbx
  int m_enabled; // r9d
  const char *m_pszClassname; // rdx
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v23; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v25; // r12
  CEntitySpawnerContext<CDOTA_BaseNPC> *m_pContext; // rbx
  CEntityKeyValues *j; // r15
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v30; // rdi
  CUtlScratchMemoryPool *v31; // rdi
  CEntityKeyValues *v32; // rbx
  bool v33; // cc
  CEntitySpawnerContext<CDOTA_BaseNPC> *k; // rbx
  CEntityKeyValues *v35; // rbx
  bool HasValue; // al
  const char *v37; // rdx
  CEntityKeyValues *v38; // rbx
  bool v39; // zf
  CEntityInstance *v40; // r14
  CEntitySpawnerContext<CDOTA_BaseNPC> *v41; // r12
  SpawnGroupHandle_t m; // r15d
  __int64 delta; // rcx
  CEntityInstance *m_pCompletionListener; // r8
  __int64 v45; // rdx
  int v46; // esi
  unsigned __int16 v47; // dx
  int v48; // edi
  int v49; // eax
  CEntityIdentity *v50; // rdx
  CEntityIdentity *v51; // rdx
  __int16 v52; // r12
  unsigned __int64 v53; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v54; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v55; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v56; // rax
  uint16 v57; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v58; // rax
  CUtlScratchMemoryPool *v59; // rdi
  CEntityKeyValues *v60; // rbx
  int v61; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v62; // cx
  __int64 v63; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v64; // rdx
  ThreadId_t m_TargetThreadId; // r12
  unsigned __int64 v66; // rbx
  uint64 m_numTimeBaseTicks; // rcx
  uint64 v68; // rcx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v70; // cx
  __int64 v71; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v72; // rdx
  int m_nEntitySpawnerDataUseCount; // ecx
  int v74; // ecx
  __int16 v75; // r12
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v78; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v79; // rax
  uint16 m_flags; // dx
  int v81; // edx
  CEntityIdentity *v82; // rcx
  int v83; // edx
  __int16 v84; // si
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v85; // rax
  int v86; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v87; // cx
  __int64 v88; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v89; // rdx
  __int16 v90; // r12
  unsigned __int64 v91; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v92; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v93; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v94; // rax
  uint16 v95; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v96; // rax
  __int16 v97; // r12
  unsigned __int64 v98; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v99; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v100; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v101; // rax
  uint16 v102; // dx
  int v103; // edx
  CEntityIdentity *v104; // rcx
  int v105; // edx
  __int16 v106; // si
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v107; // rax
  int v108; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v109; // cx
  __int64 v110; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v111; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v112; // rdx
  __int64 v113; // rax
  __int64 v114; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v115; // rdx
  __int64 v116; // rax
  __int64 v117; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v118; // rdx
  __int64 v119; // rax
  __int64 v120; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v121; // rdx
  __int64 v122; // rax
  __int64 v123; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v125; // rax
  __int16 v126; // ax
  int v127; // eax
  CEntityIdentity *v128; // rdx
  int v129; // eax
  __int16 v130; // si
  __int16 v131; // ax
  __int16 v132; // ax
  __int16 v133; // ax
  int v134; // eax
  CEntityIdentity *v135; // rdx
  int v136; // eax
  __int16 v137; // si
  int v139; // [rsp+20h] [rbp-240h]
  bool v140; // [rsp+20h] [rbp-240h]
  CEntityKeyValues *v141; // [rsp+30h] [rbp-230h] BYREF
  CEntityKeyValues *v142; // [rsp+38h] [rbp-228h] BYREF
  _QWORD v143[2]; // [rsp+40h] [rbp-220h] BYREF
  int v144; // [rsp+50h] [rbp-210h] BYREF
  CUtlMemory<const CEntityKeyValues*,int> v145; // [rsp+58h] [rbp-208h] BYREF
  int v146; // [rsp+70h] [rbp-1F0h] BYREF
  CUtlMemory<const CEntityKeyValues*,int> v147; // [rsp+78h] [rbp-1E8h] BYREF
  __int64 v148[4]; // [rsp+90h] [rbp-1D0h] BYREF
  matrix3x4_t value; // [rsp+B0h] [rbp-1B0h] BYREF
  CDotaNPCSpawner<CDOTA_BaseNPC> spawner; // [rsp+E0h] [rbp-180h] BYREF
  __int64 v151; // [rsp+180h] [rbp-E0h]
  CDotaNPCSpawnerContext ctx; // [rsp+190h] [rbp-D0h] BYREF
  unsigned __int64 v153; // [rsp+228h] [rbp-38h]

  v153 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  v2 = Caster;
  if ( Caster->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = Caster->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v4 = v3;
  }
  m_pInstance = 0;
  v6 = (Caster->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v3 & 0x7FFF;
  LODWORD(spawner._vptr_CEntitySpawnerBase) = v6;
  if ( (v6 + 2) > 1 )
  {
    v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
    if ( v7 != 0 )
    {
      v8 = &v7[v4 & 0x1FF];
      if ( v8 != 0 && v6 == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  m_iUnitType = v2->m_iUnitType;
  if ( ((m_iUnitType & 1) == 0 || v2->m_bIsIllusion.m_Value) && (m_iUnitType & 0x100) == 0 && m_pInstance != 0 )
  {
    v46 = HIDWORD(m_pInstance[11].m_pEntity) >> 15;
    if ( HIDWORD(m_pInstance[11].m_pEntity) == -1 )
    {
      v47 = 0x7FFF;
      v48 = 0x7FFF;
    }
    else
    {
      v47 = WORD2(m_pInstance[11].m_pEntity) & 0x7FFF;
      v48 = v47;
    }
    m_pInstance = 0;
    v49 = (v46 << 15) | v47 & 0x7FFF;
    LODWORD(spawner._vptr_CEntitySpawnerBase) = v49;
    if ( (v49 + 2) > 1 )
    {
      v50 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v48 >> 9];
      if ( v50 != 0 )
      {
        v51 = &v50[v48 & 0x1FF];
        if ( v51 != 0 && v49 == v51->m_EHandle.m_Index )
          m_pInstance = v51->m_pInstance;
      }
    }
  }
  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_pEntityKeyValues = FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction;
  CEntityKeyValues::CEntityKeyValues(&ctx.m_entityKeyValues);
  ctx.m_pParent = 0;
  ctx.m_pCompletionListener = 0;
  ctx.m_callback.m_Closure.m_pFunction.__delta = 0;
  ctx.m_callback.m_Closure.m_pFunction.__pfn = FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction;
  ctx.m_callback.m_Closure.m_pthis = OnCourierSpawn;
  v10 = __dynamic_cast(v2, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_BaseNPC_Hero, 0);
  m_pEntity = v2->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v12 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v139 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v12 & 0x7FFF;
  }
  else
  {
    v139 = -1;
  }
  if ( v10 != 0 && !CDOTA_BaseNPC_Hero::HasChangedCourierSincePrecache(v10) )
  {
    spawner.m_modifyScope.m_pKeyValues = 0;
    spawner.m_modifyScope.m_pPrevAllocator = 0;
    CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
    spawner.m_scriptClassName.m_pString = 0;
    spawner.m_pSpawnBatch = 0;
    spawner.m_pContext = &ctx;
    spawner._vptr_CEntitySpawnerBase = off_40FC030;
    v13 = g_pEntitySystem;
    v14 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
    ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v13->m_entitySpawnerData;
    spawner.m_pPrevAllocator = v14;
    spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v13);
    SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
    *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
    qmemcpy(spawner.m_mSpawnGroupToWorld.m_flMatVal[1], SpawnOriginOffset->m_flMatVal[1], 24);
    v16 = *&SpawnOriginOffset->m_flMatVal[2][2];
    spawner.m_pEntityKeyValues = 0;
    *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][2] = v16;
    spawner.m_pEntityClass = g_pEntityCDOTA_BaseNPCClass;
    if ( g_pApplication != 0 )
      v17 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
    else
      v17 = 0;
    spawner.m_bValidateKeys = v17;
    spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
    (*spawner._vptr_CEntitySpawnerBase)(&spawner);
    spawner._vptr_CEntitySpawnerBase = off_40FC050;
    CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -782893907, "npc_dota_courier");
    AppendNPCKeyValues("npc_dota_courier", spawner.m_pEntityKeyValues, 0);
    for ( i = spawner.m_pContext; i != 0; i = i->m_pParent )
      CEntityKeyValues::CopyFrom(spawner.m_pEntityKeyValues, &i->m_entityKeyValues, 0);
    CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, "npc_dota_courier");
    spawner.m_pEntityClass = CEntitySystem::FindClassByDesignName(
                               g_pEntitySystem,
                               "npc_dota_courier",
                               &spawner.m_scriptClassName);
    LODWORD(value.m_flMatVal[0][0]) = v2->m_iTeamNum.m_Value;
    CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, -175874245, &value);
    LODWORD(value.m_flMatVal[0][0]) = (*(v2->_vptr_IHandleEntity + 414))(v2);
    CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, 2034954718, &value);
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
    if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
      goto LABEL_21;
    m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_125:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
      v75 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
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
      m_pElements[v75] = -1104771937;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v78 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v78 = 0;
      v79 = &v78[v75];
      m_flags = v79->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v79->m_value.m_flags = m_flags & 0xFFFE;
      v79->m_value.m_uint64 = 0;
      v79->m_value.m_type = 13;
      v81 = -1;
      if ( m_pInstance != 0 )
      {
        v82 = m_pInstance->m_pEntity;
        if ( v82 != 0 )
        {
          v83 = (v82->m_EHandle.m_Index >> 15) - (v82->m_flags & 1);
          v84 = 0x7FFF;
          if ( v82->m_EHandle.m_Index != -1 )
            v84 = v82->m_EHandle.m_Index & 0x7FFF;
          LOWORD(value.m_flMatVal[0][0]) = v84 | LOWORD(value.m_flMatVal[0][0]) & 0x8000;
          v81 = (v83 << 15) | LOWORD(value.m_flMatVal[0][0]) & 0x7FFF;
          LODWORD(value.m_flMatVal[0][0]) = v81;
        }
      }
      v79->m_value.m_int = v81;
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v85 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v85 = 0;
      v85[v75].m_pAttributeName = 0;
    }
    else
    {
      v70 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      v71 = 0;
      while ( 1 )
      {
        if ( v70 != 0 )
        {
          v72 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v70 > 9 )
            v72 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
        }
        else
        {
          v72 = 0;
        }
        if ( v72[v71] == -1104771937 )
          break;
        if ( m_nCount <= ++v71 )
          goto LABEL_125;
      }
      if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      {
        v121 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
        v122 = v71;
        v123 = &v121[v122];
        if ( v121[v122].m_pAttributeName != 0 )
        {
LABEL_198:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v121[v122].m_pAttributeName);
          goto LABEL_140;
        }
      }
      else
      {
        v122 = v71;
        v121 = 0;
        v123 = v122 * 24;
        if ( *(v122 * 24 + 16) != 0 )
          goto LABEL_198;
      }
      v133 = *(v123 + 10);
      if ( (v133 & 1) != 0 )
        *(v123 + 10) = v133 & 0xFFFE;
      *v123 = 0;
      *(v123 + 8) = 13;
      v134 = -1;
      if ( m_pInstance != 0 )
      {
        v135 = m_pInstance->m_pEntity;
        if ( v135 != 0 )
        {
          v136 = (v135->m_EHandle.m_Index >> 15) - (v135->m_flags & 1);
          v137 = 0x7FFF;
          if ( v135->m_EHandle.m_Index != -1 )
            v137 = v135->m_EHandle.m_Index & 0x7FFF;
          LOWORD(value.m_flMatVal[0][0]) = v137 | LOWORD(value.m_flMatVal[0][0]) & 0x8000;
          v134 = (v136 << 15) | LOWORD(value.m_flMatVal[0][0]) & 0x7FFF;
          LODWORD(value.m_flMatVal[0][0]) = v134;
        }
      }
      *v123 = v134;
    }
LABEL_140:
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
    if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
      goto LABEL_21;
    v86 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( v86 <= 0 )
    {
LABEL_149:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
      v90 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
      v91 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      if ( v91 != 0 )
      {
        if ( v91 <= 9 )
          v92 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        else
          v92 = m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v92 = 0;
      }
      v92[v90] = -1542362667;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v93 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v93 = 0;
      v94 = &v93[v90];
      v95 = v94->m_value.m_flags;
      if ( (v95 & 1) != 0 )
        v94->m_value.m_flags = v95 & 0xFFFE;
      v94->m_value.m_uint64 = 0;
      v94->m_value.m_type = 13;
      v94->m_value.m_int = v139;
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v96 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v96 = 0;
      v96[v90].m_pAttributeName = 0;
      m_pEntityKeyValues = spawner.m_pEntityKeyValues;
LABEL_159:
      if ( m_pEntityKeyValues == 0 )
      {
LABEL_36:
        v31 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
        spawner._vptr_CEntitySpawnerBase = off_40FBED0;
        CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
        if ( v31 == &g_pEntitySystem->m_entitySpawnerData )
        {
          m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
          g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
          if ( m_nEntitySpawnerDataUseCount == 1 )
            CUtlScratchMemoryPool::FreeAll(v31);
        }
        if ( spawner.m_pEntityKeyValues != 0 )
        {
          CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
          v32 = spawner.m_pEntityKeyValues;
          v33 = --spawner.m_pEntityKeyValues->m_nRefCount <= 0;
          if ( v33 )
          {
            CEntityKeyValues::~CEntityKeyValues(v32);
            operator delete(v32);
          }
        }
        if ( spawner.m_scriptClassName.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
        CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
        goto LABEL_89;
      }
LABEL_21:
      m_enabled = g_VProfCurrentProfile.m_enabled;
      v140 = m_enabled != 0;
      if ( m_enabled != 0 )
      {
        m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
        v66 = __rdtsc();
        if ( m_TargetThreadId == ThreadGetCurrentId() )
        {
          m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
          if ( m_pCurNode->m_pszName != "Spawn" )
          {
            m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "Spawn", 0, "Server Simulation", 4);
            g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
          }
          v125 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
          v125->m_BudgetFlags |= 4u;
          CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
          g_VProfCurrentProfile.m_fAtRoot = 0;
        }
        m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
        ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
        v68 = m_numTimeBaseTicks - v66;
        m_pEntityKeyValues = spawner.m_pEntityKeyValues;
        g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v68 + __rdtsc();
      }
      if ( !CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790) )
      {
        m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
        if ( m_pszClassname != 0 )
          CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
      }
      CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
      m_nMode = spawner.m_nMode;
      v23 = CUtlString::Get(&spawner.m_scriptClassName);
      Entity = CEntitySystem::CreateEntity(
                 g_pEntitySystem,
                 spawner.m_hSpawnGroupHandle,
                 spawner.m_pEntityClass,
                 v23,
                 m_nMode,
                 -1,
                 -1,
                 0,
                 0);
      v25 = Entity;
      if ( Entity != 0 )
      {
        v143[0] = Entity->m_pEntity;
        v143[1] = spawner.m_pEntityKeyValues;
        (*(*g_pGameResourceService + 280LL))(
          g_pGameResourceService,
          spawner.m_hSpawnGroupHandle,
          1,
          v143,
          &spawner.m_mSpawnGroupToWorld);
        CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v25, spawner.m_pEntityKeyValues);
        if ( spawner.m_pSpawnBatch == 0 )
          CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
        m_pContext = spawner.m_pContext;
        for ( j = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
        {
          m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
          pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
          if ( m_pthis != 0 || pfn != 0 )
          {
            v30 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
            if ( (pfn & 1) != 0 )
              pfn = *(pfn + *v30 - 1);
            (pfn)(v30, v25, j);
          }
        }
      }
      if ( v140 )
        CVProfile::ExitScope(&g_VProfCurrentProfile);
      goto LABEL_36;
    }
    v87 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v88 = 0;
    while ( 1 )
    {
      if ( v87 != 0 )
      {
        v89 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v87 > 9 )
          v89 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v89 = 0;
      }
      if ( v89[v88] == -1542362667 )
        break;
      if ( v86 <= ++v88 )
        goto LABEL_149;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v118 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v119 = v88;
      v120 = &v118[v119];
      if ( v118[v119].m_pAttributeName != 0 )
      {
LABEL_194:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v118[v119].m_pAttributeName);
LABEL_195:
        m_pEntityKeyValues = spawner.m_pEntityKeyValues;
        goto LABEL_159;
      }
    }
    else
    {
      v119 = v88;
      v118 = 0;
      v120 = v119 * 24;
      if ( *(v119 * 24 + 16) != 0 )
        goto LABEL_194;
    }
    v131 = *(v120 + 10);
    if ( (v131 & 1) != 0 )
      *(v120 + 10) = v131 & 0xFFFE;
    *v120 = 0;
    *(v120 + 8) = 13;
    *v120 = v139;
    goto LABEL_195;
  }
  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  spawner._vptr_CEntitySpawnerBase = off_40FBED0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner.m_scriptClassName.m_pString = 0;
  v151 = 0;
  spawner._vptr_CEntitySpawnerBase = off_40FBF10;
  spawner.m_pContext = &ctx;
  *&value.m_flMatVal[0][0] = 0xFFFFFFFF00000000LL;
  *&value.m_flMatVal[1][2] = 0;
  *&value.m_flMatVal[2][0] = 0xFFFFFFFEFFFFFFFFLL;
  LOBYTE(value.m_flMatVal[2][2]) = 0;
  value.m_flMatVal[2][3] = 0.0;
  value.m_flMatVal[0][2] = 30.0;
  *&value.m_flMatVal[1][0] = &ctx;
  CEntitySpawnerAsync<CDOTA_BaseNPC>::Init(&spawner, &value);
  spawner._vptr_CEntitySpawnerBase = off_40FBF30;
  CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -782893907, "npc_dota_courier");
  AppendNPCKeyValues("npc_dota_courier", spawner.m_pEntityKeyValues, 0);
  for ( k = spawner.m_pContext; k != 0; k = k->m_pParent )
    CEntityKeyValues::CopyFrom(spawner.m_pEntityKeyValues, &k->m_entityKeyValues, 0);
  CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, "npc_dota_courier");
  spawner.m_pEntityClass = CEntitySystem::FindClassByDesignName(
                             g_pEntitySystem,
                             "npc_dota_courier",
                             &spawner.m_scriptClassName);
  LODWORD(value.m_flMatVal[0][0]) = v2->m_iTeamNum.m_Value;
  CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, -175874245, &value);
  LODWORD(value.m_flMatVal[0][0]) = (*(v2->_vptr_IHandleEntity + 414))(v2);
  CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, 2034954718, &value);
  v35 = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_46;
  v61 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v61 <= 0 )
  {
LABEL_161:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    v97 = v35->m_keyHashes.m_nCount - 1;
    v98 = v35->m_keyHashes.m_nAllocated;
    if ( v98 != 0 )
    {
      if ( v98 <= 9 )
        v99 = (&v35->m_keyHashes.m_nAllocAllocated + 1);
      else
        v99 = v35->m_keyHashes.m_pElements;
    }
    else
    {
      v99 = 0;
    }
    v99[v97] = -1104771937;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v35->m_keyValues);
    if ( v35->m_keyValues.m_nAllocated != 0 )
      v100 = v35->m_keyValues.m_pElements;
    else
      v100 = 0;
    v101 = &v100[v97];
    v102 = v101->m_value.m_flags;
    if ( (v102 & 1) != 0 )
      v101->m_value.m_flags = v102 & 0xFFFE;
    v101->m_value.m_uint64 = 0;
    v101->m_value.m_type = 13;
    v103 = -1;
    if ( m_pInstance != 0 )
    {
      v104 = m_pInstance->m_pEntity;
      if ( v104 != 0 )
      {
        v105 = (v104->m_EHandle.m_Index >> 15) - (v104->m_flags & 1);
        v106 = 0x7FFF;
        if ( v104->m_EHandle.m_Index != -1 )
          v106 = v104->m_EHandle.m_Index & 0x7FFF;
        LOWORD(value.m_flMatVal[0][0]) = v106 | LOWORD(value.m_flMatVal[0][0]) & 0x8000;
        v103 = (v105 << 15) | LOWORD(value.m_flMatVal[0][0]) & 0x7FFF;
        LODWORD(value.m_flMatVal[0][0]) = v103;
      }
    }
    v101->m_value.m_int = v103;
    if ( v35->m_keyValues.m_nAllocated != 0 )
      v107 = v35->m_keyValues.m_pElements;
    else
      v107 = 0;
    v107[v97].m_pAttributeName = 0;
  }
  else
  {
    v62 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v63 = 0;
    while ( 1 )
    {
      if ( v62 != 0 )
      {
        v64 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v62 > 9 )
          v64 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v64 = 0;
      }
      if ( v64[v63] == -1104771937 )
        break;
      if ( v61 <= ++v63 )
        goto LABEL_161;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v115 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v116 = v63;
      v117 = &v115[v116];
      if ( v115[v116].m_pAttributeName != 0 )
      {
LABEL_191:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v115[v116].m_pAttributeName);
        goto LABEL_176;
      }
    }
    else
    {
      v116 = v63;
      v115 = 0;
      v117 = v116 * 24;
      if ( *(v116 * 24 + 16) != 0 )
        goto LABEL_191;
    }
    v126 = *(v117 + 10);
    if ( (v126 & 1) != 0 )
      *(v117 + 10) = v126 & 0xFFFE;
    *v117 = 0;
    *(v117 + 8) = 13;
    v127 = -1;
    if ( m_pInstance != 0 )
    {
      v128 = m_pInstance->m_pEntity;
      if ( v128 != 0 )
      {
        v129 = (v128->m_EHandle.m_Index >> 15) - (v128->m_flags & 1);
        v130 = 0x7FFF;
        if ( v128->m_EHandle.m_Index != -1 )
          v130 = v128->m_EHandle.m_Index & 0x7FFF;
        LOWORD(value.m_flMatVal[0][0]) = v130 | LOWORD(value.m_flMatVal[0][0]) & 0x8000;
        v127 = (v129 << 15) | LOWORD(value.m_flMatVal[0][0]) & 0x7FFF;
        LODWORD(value.m_flMatVal[0][0]) = v127;
      }
    }
    *v117 = v127;
  }
LABEL_176:
  v35 = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_46;
  v108 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v108 > 0 )
  {
    v109 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v110 = 0;
    while ( 1 )
    {
      if ( v109 != 0 )
      {
        v111 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v109 > 9 )
          v111 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v111 = 0;
      }
      if ( v111[v110] == -1542362667 )
        break;
      if ( v108 <= ++v110 )
        goto LABEL_71;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v112 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v113 = v110;
      v114 = &v112[v113];
      if ( v112[v113].m_pAttributeName != 0 )
      {
LABEL_187:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v112[v113].m_pAttributeName);
LABEL_188:
        v35 = spawner.m_pEntityKeyValues;
        goto LABEL_81;
      }
    }
    else
    {
      v113 = v110;
      v112 = 0;
      v114 = v113 * 24;
      if ( *(v113 * 24 + 16) != 0 )
        goto LABEL_187;
    }
    v132 = *(v114 + 10);
    if ( (v132 & 1) != 0 )
      *(v114 + 10) = v132 & 0xFFFE;
    *v114 = 0;
    *(v114 + 8) = 13;
    *v114 = v139;
    goto LABEL_188;
  }
LABEL_71:
  CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
  v52 = v35->m_keyHashes.m_nCount - 1;
  v53 = v35->m_keyHashes.m_nAllocated;
  if ( v53 != 0 )
  {
    if ( v53 <= 9 )
      v54 = (&v35->m_keyHashes.m_nAllocAllocated + 1);
    else
      v54 = v35->m_keyHashes.m_pElements;
  }
  else
  {
    v54 = 0;
  }
  v54[v52] = -1542362667;
  CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v35->m_keyValues);
  if ( v35->m_keyValues.m_nAllocated != 0 )
    v55 = v35->m_keyValues.m_pElements;
  else
    v55 = 0;
  v56 = &v55[v52];
  v57 = v56->m_value.m_flags;
  if ( (v57 & 1) != 0 )
    v56->m_value.m_flags = v57 & 0xFFFE;
  v56->m_value.m_uint64 = 0;
  v56->m_value.m_type = 13;
  v56->m_value.m_int = v139;
  if ( v35->m_keyValues.m_nAllocated != 0 )
    v58 = v35->m_keyValues.m_pElements;
  else
    v58 = 0;
  v58[v52].m_pAttributeName = 0;
  v35 = spawner.m_pEntityKeyValues;
LABEL_81:
  if ( v35 == 0 )
    goto LABEL_82;
LABEL_46:
  if ( spawner.m_pEntityClass == 0 )
  {
    CEntityKeyValues::HasValue(v35, -971301790);
    goto LABEL_82;
  }
  HasValue = CEntityKeyValues::HasValue(v35, -971301790);
  v37 = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
  if ( !HasValue && v37 != 0 )
  {
    CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, v37);
    v37 = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
  }
  (*(*engine + 464LL))(engine, spawner.m_hSpawnGroupHandle, v37);
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  v38 = spawner.m_pEntityKeyValues;
  if ( v151 == 0 )
  {
LABEL_54:
    SetIdentityMatrix(&value);
    v40 = (*(*(&spawner.m_pSpawnBatch)[1] + 72LL))(
            (&spawner.m_pSpawnBatch)[1],
            HIDWORD(spawner.m_pSpawnBatch),
            &value,
            1,
            v38);
    if ( v40 != 0 )
    {
      v41 = spawner.m_pContext;
      for ( m = spawner.m_hSpawnGroupHandle; v41 != 0; v41 = v41->m_pParent )
      {
        v45 = v41->m_callback.m_Closure.m_pFunction.__pfn;
        if ( v41->m_callback.m_Closure.m_pthis != 0 || v45 != 0 )
        {
          v148[0] = v41->m_callback.m_Closure.m_pthis;
          delta = v41->m_callback.m_Closure.m_pFunction.__delta;
          v148[1] = v45;
          m_pCompletionListener = v41->m_pCompletionListener;
          v148[2] = delta;
          CGameEntitySystem::ListenForEntityInSpawnGroupToFinish(
            g_pGameEntitySystem,
            m,
            v40,
            v38,
            m_pCompletionListener,
            v148);
        }
      }
    }
    goto LABEL_82;
  }
  v141 = spawner.m_pEntityKeyValues;
  v145.m_pMemory = &v141;
  v142 = 0;
  v144 = 1;
  v145.m_nAllocationCount = 1;
  v145.m_nGrowSize = 0x40000000;
  v146 = 0;
  v147.m_pMemory = &v142;
  v147.m_nAllocationCount = 1;
  v147.m_nGrowSize = 0x40000000;
  (*(*v151 + 16LL))(v151, spawner.m_hSpawnGroupHandle, LODWORD(spawner.m_pSpawnBatch) == 2, &v144, &v146);
  v38 = 0;
  v39 = v146 == 1;
  v146 = 0;
  if ( v39 )
    v38 = v142;
  if ( (v147.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityKeyValues const*,int>::Purge(&v147);
    if ( (v147.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityKeyValues const*,int>::Purge(&v147);
  }
  v144 = 0;
  if ( (v145.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CEntityKeyValues const*,int>::Purge(&v145), (v145.m_nGrowSize & 0xC0000000) != 0) )
  {
    if ( v38 == 0 )
      goto LABEL_82;
    goto LABEL_54;
  }
  CUtlMemory<CEntityKeyValues const*,int>::Purge(&v145);
  if ( v38 != 0 )
    goto LABEL_54;
LABEL_82:
  v59 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  spawner._vptr_CEntitySpawnerBase = off_40FBED0;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v59 == &g_pEntitySystem->m_entitySpawnerData )
  {
    v74 = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = v74 - 1;
    if ( v74 == 1 )
      CUtlScratchMemoryPool::FreeAll(v59);
  }
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v60 = spawner.m_pEntityKeyValues;
    v33 = --spawner.m_pEntityKeyValues->m_nRefCount <= 0;
    if ( v33 )
    {
      CEntityKeyValues::~CEntityKeyValues(v60);
      operator delete(v60);
    }
  }
  if ( spawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
LABEL_89:
  UTIL_Remove(this);
  CEntityKeyValues::~CEntityKeyValues(&ctx.m_entityKeyValues);
}


// CDOTA_Item_Flying_Courier::~CDOTA_Item_Flying_Courier  (line 137, @0x0000000002d86090, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Flying_Courier::~CDOTA_Item_Flying_Courier(CDOTA_Item_Flying_Courier *const this)
{
  this->_vptr_IHandleEntity = &off_46BE430;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Flying_Courier::~CDOTA_Item_Flying_Courier  (line 137, @0x0000000002d860b0, libserver.so)  // inlines: ~CDOTA_Item_Flying_Courier
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Flying_Courier::~CDOTA_Item_Flying_Courier(CDOTA_Item_Flying_Courier *const this)
{
  this->_vptr_IHandleEntity = &off_46BE430;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Flying_Courier::Schema_DynamicBinding  (line 139, @0x0000000002d81140, libserver.so)
// globals: CDOTA_Item_Flying_Courier::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Flying_Courier::Schema_DynamicBinding(
        const CDOTA_Item_Flying_Courier *const this)
{
  return CDOTA_Item_Flying_Courier::s_pSchemaBinding;
}


// CDOTA_Item_Flying_Courier::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 139, @0x0000000002d81150, libserver.so)
// globals: CDOTA_Item_Flying_Courier::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Flying_Courier::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Flying_Courier::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Flying_Courier::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Flying_Courier::CEntityInstanceEntityClass::DestructInstance  (line 139, @0x0000000002d81160, libserver.so)  // inlines: Destruct<CDOTA_Item_Flying_Courier>
void __fastcall CDOTA_Item_Flying_Courier::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Flying_Courier::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Flying_Courier::CEntityInstanceEntityClass::FreeInstance  (line 139, @0x0000000002d81180, libserver.so)
void __fastcall CDOTA_Item_Flying_Courier::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Flying_Courier::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Flying_Courier::CEntityInstanceEntityClass::CanAllocate  (line 139, @0x0000000002d811a0, libserver.so)
bool __fastcall CDOTA_Item_Flying_Courier::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Flying_Courier::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Flying_Courier::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 139, @0x0000000002d811b0, libserver.so)
// globals: CDOTA_Item_Flying_Courier::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Flying_Courier::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Flying_Courier::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Flying_Courier::s_pSchemaBinding;
}


// CDOTA_Item_Flying_Courier::CEntityInstanceEntityClass::AllocateInstance  (line 139, @0x0000000002d837b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Flying_Courier::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Flying_Courier::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1008);
  memset(v1, 0, 0x3F0u);
  return v1;
}


// CDOTA_Item_Flying_Courier::CEntityInstanceEntityClass::ConstructInstance  (line 139, @0x0000000002d84d10, libserver.so)  // inlines: CDOTA_Item_Flying_Courier, Construct<CDOTA_Item_Flying_Courier>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Flying_Courier::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Flying_Courier::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46BE430;
  }
  return p;
}


// CDOTA_Item_Flying_Courier::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 139, @0x0000000002d88700, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Flying_Courier::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Flying_Courier::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Flying_Courier::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 139, @0x0000000002d88720, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Flying_Courier::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Flying_Courier::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Flying_Courier::GetEntityClassInternal  (line 139, @0x0000000002d90590, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "item_flying_courier", "CDOTA_Item_Flying_Courier"
// globals: `guard variable for'CDOTA_Item_Flying_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Flying_CourierClass, CDOTA_Item_Flying_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Flying_CourierClass, __dso_handle, CDOTA_Item_Flying_Courier::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Flying_Courier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Flying_CourierClassInfo, CDOTA_Item_Flying_Courier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Flying_CourierClassInfo
CEntityClass *__cdecl CDOTA_Item_Flying_Courier::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Flying_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Flying_CourierClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Flying_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Flying_CourierClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Flying_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Flying_CourierClass);
    CDOTA_Item_Flying_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Flying_CourierClass._vptr_CEntityClass = off_46BE3B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Flying_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Flying_CourierClass);
    __cxa_atexit(
      CDOTA_Item_Flying_Courier::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Flying_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Flying_CourierClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Flying_CourierClass != 0 )
    return &CDOTA_Item_Flying_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Flying_CourierClass;
  if ( `guard variable for'CDOTA_Item_Flying_Courier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Flying_CourierClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Flying_Courier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Flying_CourierClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Flying_Courier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Flying_CourierClassInfo,
      "CDOTA_Item_Flying_Courier",
      "item_flying_courier",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Flying_Courier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Flying_CourierClassInfo);
  }
  CDOTA_Item_Flying_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Flying_CourierClass.m_pClassInfo = &CDOTA_Item_Flying_Courier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Flying_CourierClassInfo;
  CDOTA_Item_Flying_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Flying_CourierClass.m_pBaseClassInfo = CDOTA_Item_Flying_Courier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Flying_CourierClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Flying_CourierClass = &CDOTA_Item_Flying_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Flying_CourierClass;
  CDOTA_Item_Flying_Courier::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Flying_CourierClassInfo.m_pClass = &CDOTA_Item_Flying_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Flying_CourierClass;
  CDOTA_Item_Flying_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Flying_CourierClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Flying_CourierClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Flying_Courier::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Flying_CourierClass;
}


// CDOTA_Item_Flying_Courier::OnPurchase  (line 154, @0x0000000002d6f8a0, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// calls: CDOTA_Item::OnPurchase
void __fastcall CDOTA_Item_Flying_Courier::OnPurchase(
        CDOTA_Item_Flying_Courier *const this,
        int nCombineType,
        const char *pszRecipeItemName)
{
  float v4; // xmm0_4

  CDOTA_Item::OnPurchase(this, nCombineType, 0);
  v4 = 0.0;
  if ( g_pGameRules != 0 )
    v4 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_fNextThinkTime = v4;
}


// CDOTA_Item_Flying_Courier::Think  (line 162, @0x0000000002d6fb50, libserver.so)  // inlines: DOTAGameRules, GetGameMode, GetGameTime, GetTeamNumber, IsAddOnGame, IsFreeCourierMode
// calls: CDOTA_Item::Think, CDOTABaseAbility::GetCaster, CDOTA_PlayerResource::GetNumCouriersForTeam, CDOTA_PlayerResource::GetNthCourierForTeam, CDOTA_Unit_Courier::UpgradeToFlyingCourier, UTIL_Remove, CDOTA_PlayerResource::GetCourier
void __fastcall CDOTA_Item_Flying_Courier::Think(CDOTA_Item_Flying_Courier *const this)
{
  CGameRules *v2; // rax
  float v3; // xmm0_4
  int i; // ebx
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_Unit_Courier *NthCourierForTeam; // rax
  CDOTA_Unit_Courier *v8; // r12
  int v9; // eax
  CDOTA_BaseNPC *Caster; // rax
  int v11; // eax
  CDOTA_Unit_Courier *Courier; // rbx

  CDOTA_Item::Think(this);
  if ( CDOTABaseAbility::GetCaster(this) == 0 || CDOTABaseAbility::GetCaster(this)->m_bIsIllusion.m_Value )
    return;
  v2 = g_pGameRules;
  if ( g_pGameRules != 0 )
  {
    v3 = *&g_pGameRules[18].m_szQuestName[20];
    if ( v3 < this->m_fNextThinkTime )
      return;
    this->m_fNextThinkTime = v3 + 1.0;
    if ( v2[5].m_szQuestName[114] != 0 )
    {
      v9 = *&v2[6].m_szQuestName[68];
      if ( v9 != 15 && v9 != 19 )
      {
        Caster = CDOTABaseAbility::GetCaster(this);
        v11 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
        Courier = CDOTA_PlayerResource::GetCourier(g_pDOTAPlayerResource, v11);
        if ( Courier != 0
          && (*(Courier->_vptr_IHandleEntity + 492))(Courier) == 0
          && (*(Courier->_vptr_IHandleEntity + 408))(Courier) != 0
          && CDOTA_Unit_Courier::UpgradeToFlyingCourier(Courier) )
        {
LABEL_13:
          UTIL_Remove(this);
        }
        return;
      }
    }
  }
  else
  {
    if ( this->m_fNextThinkTime > 0.0 )
      return;
    this->m_fNextThinkTime = 1.0;
  }
  for ( i = 0; ; ++i )
  {
    v5 = CDOTABaseAbility::GetCaster(this);
    if ( i >= CDOTA_PlayerResource::GetNumCouriersForTeam(g_pDOTAPlayerResource, v5->m_iTeamNum.m_Value) )
      break;
    v6 = CDOTABaseAbility::GetCaster(this);
    NthCourierForTeam = CDOTA_PlayerResource::GetNthCourierForTeam(g_pDOTAPlayerResource, i, v6->m_iTeamNum.m_Value);
    v8 = NthCourierForTeam;
    if ( NthCourierForTeam != 0
      && (*(NthCourierForTeam->_vptr_IHandleEntity + 492))(NthCourierForTeam) == 0
      && (*(v8->_vptr_IHandleEntity + 408))(v8) != 0
      && CDOTA_Unit_Courier::UpgradeToFlyingCourier(v8) )
    {
      goto LABEL_13;
    }
  }
}


