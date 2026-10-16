// Reconstructed from DWARF by pahole; not original source.

// src/game/server/env_entity_maker.cpp:32
class CEnvEntityMaker : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;

	EHANDLE m_hCurrentInstance;  // +0x320
	EHANDLE m_hCurrentBlocker;  // +0x324
	float m_flPostSpawnDirectionVariance;  // +0x340
	float m_flPostSpawnSpeed;  // +0x344
	bool m_bPostSpawnUseAngles;  // +0x348

	string_t m_iszTemplate;  // +0x350
	COutputEvent m_pOutputOnSpawned;  // +0x358
	COutputEvent m_pOutputOnFailedSpawn;  // +0x370
	typedef CPointEntity BaseClass;

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
	CEnvEntityMaker(CEnvEntityMaker &);
	CEnvEntityMaker(CEnvEntityMaker &);
	CEnvEntityMaker();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	void SpawnEntity(Vector, QAngle);
	void CheckSpawnThink();
	void InputForceSpawn(inputdata_t &);
	void InputForceSpawnAtEntityOrigin(inputdata_t &);
	void SpawnEntityFromScript();
	void SpawnEntityAtEntityOriginFromScript(HSCRIPT);
	void SpawnEntityAtNamedEntityOriginFromScript(const char *);
	void SpawnEntityAtLocationFromScript(const Vector &, const Vector &);
	void OnEntitiesSpawned(SpawnGroupHandle_t, const CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > &);
	CPointTemplate * FindTemplate();
	bool HasRoomToSpawn();
	bool IsPlayerLooking();
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	virtual ~CEnvEntityMaker();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[4] GetScriptDesc
	// sizeof = 904
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnvEntityMaker::~CEnvEntityMaker  (line 32, @0x00000000021e1270, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CEnvEntityMaker::~CEnvEntityMaker(CEnvEntityMaker *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CEnvEntityMaker::~CEnvEntityMaker  (line 32, @0x00000000021e1290, libserver.so)  // inlines: ~CEnvEntityMaker, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CEnvEntityMaker::~CEnvEntityMaker(CEnvEntityMaker *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvEntityMaker::GetEntityClass  (line 34, @0x00000000021df290, libserver.so)
CEntityClass *__cdecl CEnvEntityMaker::GetEntityClass()
{
  return g_pEntityCEnvEntityMakerClass;
}


// CEnvEntityMaker::Schema_DynamicBinding  (line 34, @0x00000000021df2a0, libserver.so)
// globals: CEnvEntityMaker::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvEntityMaker::Schema_DynamicBinding(const CEnvEntityMaker *const this)
{
  return CEnvEntityMaker::s_pSchemaBinding;
}


// CEnvEntityMaker::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 34, @0x00000000021df2b0, libserver.so)
// globals: CEnvEntityMaker::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvEntityMaker::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvEntityMaker::CEntityInstanceEntityClass *const this)
{
  return CEnvEntityMaker::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvEntityMaker::CEntityInstanceEntityClass::DestructInstance  (line 34, @0x00000000021df2c0, libserver.so)  // inlines: Destruct<CEnvEntityMaker>
void __fastcall CEnvEntityMaker::CEntityInstanceEntityClass::DestructInstance(
        CEnvEntityMaker::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvEntityMaker::CEntityInstanceEntityClass::FreeInstance  (line 34, @0x00000000021df2e0, libserver.so)
void __fastcall CEnvEntityMaker::CEntityInstanceEntityClass::FreeInstance(
        CEnvEntityMaker::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvEntityMaker::CEntityInstanceEntityClass::CanAllocate  (line 34, @0x00000000021df300, libserver.so)
bool __fastcall CEnvEntityMaker::CEntityInstanceEntityClass::CanAllocate(
        const CEnvEntityMaker::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvEntityMaker::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 34, @0x00000000021df310, libserver.so)
// globals: CEnvEntityMaker::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvEntityMaker::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvEntityMaker::CEntityInstanceEntityClass *const this)
{
  return CEnvEntityMaker::s_pSchemaBinding;
}


// CEnvEntityMaker::CEntityInstanceEntityClass::AllocateInstance  (line 34, @0x00000000021e0a40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvEntityMaker::CEntityInstanceEntityClass::AllocateInstance(
        CEnvEntityMaker::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 904);
  memset(v1, 0, 0x388u);
  return v1;
}


// CEnvEntityMaker::CEntityInstanceEntityClass::ConstructInstance  (line 34, @0x00000000021e0d50, libserver.so)  // inlines: CEntityHandle, CEntityIOOutput, CEnvEntityMaker, CHandle, CPointEntity, CUtlSymbolLarge, Construct<CEnvEntityMaker>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CEnvEntityMaker::CEntityInstanceEntityClass::ConstructInstance(
        CEnvEntityMaker::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 200) = -1;
    *p = &off_4026A10;
    *(p + 201) = -1;
    *(p + 106) = 0;
    *(p + 107) = off_3F7C190;
    *(p + 110) = off_3F7C190;
  }
  return p;
}


// CEnvEntityMaker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 34, @0x00000000021e2930, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvEntityMaker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvEntityMaker::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CEnvEntityMaker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 34, @0x00000000021e2950, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvEntityMaker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvEntityMaker::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvEntityMaker::GetEntityClassInternal  (line 34, @0x00000000021eca40, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CEnvEntityMaker>, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "env_entity_maker", "CEnvEntityMaker"
// globals: `guard variable for'CEnvEntityMaker::GetEntityClassInternal(void)::g_EntityCEnvEntityMakerClass, CEnvEntityMaker::GetEntityClassInternal(void)::g_EntityCEnvEntityMakerClass, __dso_handle, CEnvEntityMaker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvEntityMaker::GetEntityClassInfo(void)::g_EntityCEnvEntityMakerClassInfo, CEnvEntityMaker::GetEntityClassInfo(void)::g_EntityCEnvEntityMakerClassInfo
CEntityClass *__cdecl CEnvEntityMaker::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvEntityMaker::GetEntityClassInternal(void)::g_EntityCEnvEntityMakerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvEntityMaker::GetEntityClassInternal(void)::g_EntityCEnvEntityMakerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvEntityMaker::GetEntityClassInternal(void)::g_EntityCEnvEntityMakerClass);
    CEnvEntityMaker::GetEntityClassInternal(void)::g_EntityCEnvEntityMakerClass._vptr_CEntityClass = off_4026990;
    __cxa_guard_release(&`guard variable for'CEnvEntityMaker::GetEntityClassInternal(void)::g_EntityCEnvEntityMakerClass);
    __cxa_atexit(
      CEnvEntityMaker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvEntityMaker::GetEntityClassInternal(void)::g_EntityCEnvEntityMakerClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvEntityMakerClass != 0 )
    return &CEnvEntityMaker::GetEntityClassInternal(void)::g_EntityCEnvEntityMakerClass;
  if ( `guard variable for'CEnvEntityMaker::GetEntityClassInfo(void)::g_EntityCEnvEntityMakerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvEntityMaker::GetEntityClassInfo(void)::g_EntityCEnvEntityMakerClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvEntityMaker::GetEntityClassInfo(void)::g_EntityCEnvEntityMakerClassInfo,
      "CEnvEntityMaker",
      "env_entity_maker",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvEntityMaker::GetEntityClassInfo(void)::g_EntityCEnvEntityMakerClassInfo);
  }
  CEnvEntityMaker::GetEntityClassInternal(void)::g_EntityCEnvEntityMakerClass.m_pClassInfo = &CEnvEntityMaker::GetEntityClassInfo(void)::g_EntityCEnvEntityMakerClassInfo;
  CEnvEntityMaker::GetEntityClassInternal(void)::g_EntityCEnvEntityMakerClass.m_pBaseClassInfo = CEnvEntityMaker::GetEntityClassInfo(void)::g_EntityCEnvEntityMakerClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvEntityMakerClass = &CEnvEntityMaker::GetEntityClassInternal(void)::g_EntityCEnvEntityMakerClass;
  CEnvEntityMaker::GetEntityClassInfo(void)::g_EntityCEnvEntityMakerClassInfo.m_pClass = &CEnvEntityMaker::GetEntityClassInternal(void)::g_EntityCEnvEntityMakerClass;
  CEnvEntityMaker::GetEntityClassInternal(void)::g_EntityCEnvEntityMakerClass.m_pScriptClassDesc = GetScriptDesc<CEnvEntityMaker>(0);
  g_pEntityCEnvEntityMakerClass->m_pComponentOverrides = 0;
  return &CEnvEntityMaker::GetEntityClassInternal(void)::g_EntityCEnvEntityMakerClass;
}


// CEnvEntityMaker::GetDataDescMap  (line 86, @0x00000000021bafe0, libserver.so)
// globals: CEnvEntityMaker::m_DataMap
datamap_t *__fastcall CEnvEntityMaker::GetDataDescMap(CEnvEntityMaker *const this)
{
  return &CEnvEntityMaker::m_DataMap;
}


// CEnvEntityMaker::AddDatadescMetadataKeys  (line 86, @0x00000000021d0990, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvEntityMaker::GetEntityClass(void)
void __fastcall CEnvEntityMaker::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvEntityMaker::GetEntityClass);
}


// CEnvEntityMaker::GetBaseMap  (line 86, @0x00000000021d09b0, libserver.so)
datamap_t *__cdecl CEnvEntityMaker::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CEnvEntityMaker>  (line 86, @0x00000000021d90e0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CEnvEntityMaker"
// globals: `guard variable for'DataMapInit<CEnvEntityMaker>(CEnvEntityMaker *)::nameHolder, `guard variable for'DataMapInit<CEnvEntityMaker>(CEnvEntityMaker *)::dataDesc, CEnvEntityMaker::GetEntityClass(void), CEnvEntityMaker::m_DataMap, DataMapInit<CEnvEntityMaker>(CEnvEntityMaker *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvEntityMaker>(CEnvEntityMaker *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CEnvEntityMaker>(CEnvEntityMaker *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvEntityMaker>(CEnvEntityMaker *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvEntityMaker>(CEnvEntityMaker *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvEntityMaker>(CEnvEntityMaker *)::nameHolder.m_pszBase = "CEnvEntityMaker";
    DataMapInit<CEnvEntityMaker>(CEnvEntityMaker *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvEntityMaker>(CEnvEntityMaker *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvEntityMaker>(CEnvEntityMaker *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvEntityMaker>(CEnvEntityMaker *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvEntityMaker>(CEnvEntityMaker *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvEntityMaker>(CEnvEntityMaker *)::nameHolder,
      &_dso_handle);
  }
  CEnvEntityMaker::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CEnvEntityMaker>(CEnvEntityMaker *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvEntityMaker>(CEnvEntityMaker *)::dataDesc) != 0 )
  {
    DataMapInit<CEnvEntityMaker>(CEnvEntityMaker *)::dataDesc[11].pSaveRestoreOps = eventFuncs;
    DataMapInit<CEnvEntityMaker>(CEnvEntityMaker *)::dataDesc[12].pSaveRestoreOps = eventFuncs;
    v2 = operator new[](DataMapInit<CEnvEntityMaker>(CEnvEntityMaker *)::nameHolder.m_nLenBase + 16);
    strcpy(stpcpy(v2, DataMapInit<CEnvEntityMaker>(CEnvEntityMaker *)::nameHolder.m_pszBase), "CheckSpawnThink");
    m_Size = DataMapInit<CEnvEntityMaker>(CEnvEntityMaker *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CEnvEntityMaker>(CEnvEntityMaker *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CEnvEntityMaker>(CEnvEntityMaker *)::nameHolder.m_Names.m_Size == DataMapInit<CEnvEntityMaker>(CEnvEntityMaker *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CEnvEntityMaker>(CEnvEntityMaker *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CEnvEntityMaker>(CEnvEntityMaker *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CEnvEntityMaker>(CEnvEntityMaker *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CEnvEntityMaker>(CEnvEntityMaker *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CEnvEntityMaker>(CEnvEntityMaker *)::dataDesc[15].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvEntityMaker>(CEnvEntityMaker *)::dataDesc);
  }
  CEnvEntityMaker::m_DataMap.dataNumFields = 15;
  CEnvEntityMaker::m_DataMap.dataDesc = &DataMapInit<CEnvEntityMaker>(CEnvEntityMaker *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvEntityMaker::m_DataMap, CEnvEntityMaker::GetEntityClass);
  return &CEnvEntityMaker::m_DataMap;
}


// CEnvEntityMaker::Spawn  (line 116, @0x00000000021bb730, libserver.so)  // inlines: Set, operator=
// calls: CPointEntity::Spawn
void __fastcall CEnvEntityMaker::Spawn(CEnvEntityMaker *const this, const CEntityKeyValues *pKeyValues)
{
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4

  CPointEntity::Spawn(this, pKeyValues);
  this->m_hCurrentInstance.m_Index = -1;
  this->m_hCurrentBlocker.m_Index = -1;
  x = vec3_origin.x;
  y = vec3_origin.y;
  z = vec3_origin.z;
  this->m_vecEntityMins.x = vec3_origin.x;
  this->m_vecEntityMins.y = y;
  this->m_vecEntityMins.z = z;
  this->m_vecEntityMaxs.x = x;
  this->m_vecEntityMaxs.y = y;
  this->m_vecEntityMaxs.z = z;
  this->m_vecBlockerOrigin.x = x;
  this->m_vecBlockerOrigin.y = y;
  this->m_vecBlockerOrigin.z = z;
}


// CEnvEntityMaker::Activate  (line 130, @0x00000000021d0c30, libserver.so)  // inlines: CUtlSymbolLarge, GetEntityName
// calls: CBaseEntity::Activate, Warning, UTIL_Remove, CEnvEntityMaker::SpawnEntity
// strings: "env_entity_maker %s has no template entity!\n"
void __fastcall CEnvEntityMaker::Activate(CEnvEntityMaker *const this, ActivateType_t activateType)
{
  const char *m_pAsString; // rsi

  CBaseEntity::Activate(this, activateType);
  if ( this->m_iszTemplate.u.m_Id != 0 )
  {
    if ( (this->m_spawnflags.m_Value & 1) != 0 )
      CEnvEntityMaker::SpawnEntity(this, vec3_invalid, vec3_angle);
  }
  else
  {
    m_pAsString = "";
    if ( this->m_pEntity->m_name.u.m_Id != 0 )
      m_pAsString = this->m_pEntity->m_name.u.m_pAsString;
    Warning("env_entity_maker %s has no template entity!\n", m_pAsString);
    UTIL_Remove(this);
  }
}


// CEnvEntityMaker::FindTemplate  (line 152, @0x00000000021d09c0, libserver.so)  // inlines: CUtlSymbolLarge, GetEntityName, String, ToCStr
// calls: CGameEntitySystem::FindEntityByName, __dynamic_cast, Warning
// callers: CEnvEntityMaker::SpawnEntity, CEnvEntityMaker::InputForceSpawn
// strings: "env_entity_maker %s failed to find template %s.\n"
CPointTemplate *__fastcall CEnvEntityMaker::FindTemplate(CEnvEntityMaker *const this)
{
  const char *m_pAsString; // rdx
  CBaseEntity *EntityByName; // rax
  CPointTemplate *result; // rax
  const char *v5; // rdx
  const char *v6; // rsi

  m_pAsString = "";
  if ( this->m_iszTemplate.u.m_Id != 0 )
    m_pAsString = this->m_iszTemplate.u.m_pAsString;
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, m_pAsString, this, 0, 0, 0);
  if ( EntityByName == 0
    || (result = __dynamic_cast(EntityByName, &`typeinfo for'CBaseEntity, &`typeinfo for'CPointTemplate, 0)) == 0 )
  {
    v5 = "";
    if ( this->m_iszTemplate.u.m_Id != 0 )
      v5 = this->m_iszTemplate.u.m_pAsString;
    v6 = "";
    if ( this->m_pEntity->m_name.u.m_Id != 0 )
      v6 = this->m_pEntity->m_name.u.m_pAsString;
    Warning("env_entity_maker %s failed to find template %s.\n", v6, v5);
    return 0;
  }
  return result;
}


// CEnvEntityMaker::OnEntitiesSpawned  (line 168, @0x00000000021d42b0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, VectorMultiply, WorldSpaceAABB, operator CEntityInstance*, operator*, operator*=, operator+=, operator-=, operator->, operator=, operator==, operator[], ~CVariantBase
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CEntityIOOutput::FireOutputInternal, CGameSceneNode::GetOwnerEntity, CBaseEntity::GetAbsAngles, AngleVectors, VectorNormalize, CBaseEntity::VPhysicsGetObject, CCollisionProperty::CollisionAABBToWorldAABB, CBaseEntity::SetAbsVelocity, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CEnvEntityMaker::OnEntitiesSpawned
// globals: CEntityHandle::gm_pEntityList
void __fastcall CEnvEntityMaker::OnEntitiesSpawned(
        CEnvEntityMaker *const this,
        __int64 hSpawnGroup,
        const CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *const hNewEntities)
{
  CEntityInstance *v5; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v7; // eax
  __int16 v8; // cx
  uint32 v9; // eax
  const CBaseEntity *v10; // rax
  __int64 v11; // r12
  int v12; // r13d
  unsigned __int16 *v13; // rdx
  int v14; // eax
  __int16 v15; // cx
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  bool v18; // zf
  CGameSceneNode *m_pParent; // rdi
  CGameSceneNode *v20; // rdi
  CBaseEntity *OwnerEntity; // rax
  CEnvEntityMaker *v22; // rdi
  const QAngle *AbsAngles; // rax
  float m_flPostSpawnDirectionVariance; // xmm3_4
  float v25; // xmm0_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  float v28; // xmm0_4
  vec_t v29; // xmm2_4
  float v30; // xmm0_4
  float v31; // xmm2_4
  float v32; // xmm1_4
  float v33; // xmm0_4
  vec_t v34; // xmm2_4
  float v35; // xmm0_4
  float m_flPostSpawnSpeed; // xmm0_4
  IPhysicsObject *Object; // rax
  const CBaseEntity *v38; // rax
  const CCollisionProperty *m_pCollision; // rdi
  const CBaseEntity *v40; // rax
  const Vector *v41; // rax
  const CBaseEntity *v42; // rax
  const Vector *v43; // rax
  const Vector *AbsOrigin; // rax
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  CBaseEntity *m_pInstance; // [rsp+8h] [rbp-B8h]
  float pWorldMaxs; // [rsp+38h] [rbp-88h]
  float pWorldMaxsa; // [rsp+38h] [rbp-88h]
  float pWorldMaxsb; // [rsp+38h] [rbp-88h]
  Vector vForward; // [rsp+40h] [rbp-80h] BYREF
  Vector vRight; // [rsp+50h] [rbp-70h] BYREF
  Vector vUp; // [rsp+60h] [rbp-60h] BYREF
  QAngle angSpawnDir; // [rsp+70h] [rbp-50h] BYREF
  Vector vShootDir; // [rsp+80h] [rbp-40h] BYREF

  v5 = CEntityHandle::operator CEntityInstance *(*(hSpawnGroup + 8));
  if ( v5 != 0 && (m_pEntity = v5->m_pEntity) != 0 )
  {
    v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v8 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hCurrentInstance.m_Index) = v8 | this->m_hCurrentInstance.m_Index & 0x8000;
    v9 = (v7 << 15) | this->m_hCurrentInstance.m_Index & 0x7FFF;
    this->m_hCurrentInstance.m_Index = v9;
  }
  else
  {
    this->m_hCurrentInstance.m_Index = -1;
    v9 = -1;
  }
  this->m_hCurrentBlocker.m_Index = v9;
  v10 = CEntityHandle::operator CEntityInstance *(&this->m_hCurrentBlocker);
  this->m_vecBlockerOrigin = *CBaseEntity::GetAbsOrigin(v10);
  if ( vec3_origin.x == this->m_vecEntityMins.x
    && vec3_origin.y == this->m_vecEntityMins.y
    && vec3_origin.z == this->m_vecEntityMins.z )
  {
    v38 = CEntityHandle::operator CEntityInstance *(&this->m_hCurrentInstance);
    m_pCollision = v38->m_pCollision;
    if ( m_pCollision != 0 )
    {
      CCollisionProperty::CollisionAABBToWorldAABB(
        m_pCollision,
        &m_pCollision->m_vecMins.m_Value,
        &m_pCollision->m_vecMaxs.m_Value,
        &this->m_vecEntityMins,
        &this->m_vecEntityMaxs);
    }
    else
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(v38);
      x = AbsOrigin->x;
      this->m_vecEntityMins.x = AbsOrigin->x;
      y = AbsOrigin->y;
      this->m_vecEntityMins.y = y;
      z = AbsOrigin->z;
      this->m_vecEntityMaxs.x = x;
      this->m_vecEntityMaxs.y = y;
      this->m_vecEntityMins.z = z;
      this->m_vecEntityMaxs.z = z;
    }
    v40 = CEntityHandle::operator CEntityInstance *(&this->m_hCurrentInstance);
    v41 = CBaseEntity::GetAbsOrigin(v40);
    this->m_vecEntityMins.x = this->m_vecEntityMins.x - v41->x;
    this->m_vecEntityMins.y = this->m_vecEntityMins.y - v41->y;
    this->m_vecEntityMins.z = this->m_vecEntityMins.z - v41->z;
    v42 = CEntityHandle::operator CEntityInstance *(&this->m_hCurrentInstance);
    v43 = CBaseEntity::GetAbsOrigin(v42);
    this->m_vecEntityMaxs.x = this->m_vecEntityMaxs.x - v43->x;
    this->m_vecEntityMaxs.y = this->m_vecEntityMaxs.y - v43->y;
    this->m_vecEntityMaxs.z = this->m_vecEntityMaxs.z - v43->z;
  }
  vShootDir.z = 0.0;
  *&vShootDir.x = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_pOutputOnSpawned, this, this, &vShootDir, 0.0);
  if ( (BYTE2(vShootDir.z) & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&vShootDir.x);
  if ( this->m_flPostSpawnSpeed != 0.0 )
  {
    v11 = 0;
    v12 = 0;
    if ( *hSpawnGroup > 0 )
    {
      while ( 1 )
      {
        v13 = (*(hSpawnGroup + 8) + v11);
        v14 = *v13;
        if ( (*v13 + 2) <= 1 )
          goto LABEL_12;
        v15 = *v13;
        v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v13 >> 9) & 0x3F];
        if ( v16 == 0 )
          goto LABEL_12;
        v17 = &v16[v15 & 0x1FF];
        if ( v17 == 0 )
          goto LABEL_12;
        if ( v14 != v17->m_EHandle.m_Index )
          goto LABEL_12;
        m_pInstance = v17->m_pInstance;
        if ( v17->m_pInstance == 0 || BYTE5(v17->m_pInstance[7]._vptr_IHandleEntity) == 0 )
          goto LABEL_12;
        v18 = !this->m_bPostSpawnUseAngles;
        angSpawnDir = this->m_angPostSpawnDirection;
        if ( !v18 )
        {
          m_pParent = this->m_pGameSceneNode->m_pParent;
          if ( m_pParent != 0 && CGameSceneNode::GetOwnerEntity(m_pParent) != 0 )
          {
            v20 = this->m_pGameSceneNode->m_pParent;
            OwnerEntity = 0;
            if ( v20 != 0 )
              OwnerEntity = CGameSceneNode::GetOwnerEntity(v20);
            v22 = OwnerEntity;
          }
          else
          {
            v22 = this;
          }
          AbsAngles = CBaseEntity::GetAbsAngles(v22);
          angSpawnDir.x = angSpawnDir.x + AbsAngles->x;
          angSpawnDir.y = angSpawnDir.y + AbsAngles->y;
          angSpawnDir.z = angSpawnDir.z + AbsAngles->z;
        }
        AngleVectors(&angSpawnDir, &vForward, &vRight, &vUp);
        m_flPostSpawnDirectionVariance = this->m_flPostSpawnDirectionVariance;
        vShootDir = vForward;
        pWorldMaxs = m_flPostSpawnDirectionVariance;
        v25 = (*(*random_valve + 8LL))(random_valve, -1.0, 1.0);
        v26 = vRight.y * v25;
        v27 = (vRight.z * v25) * pWorldMaxs;
        v28 = (v25 * vRight.x) * pWorldMaxs;
        v29 = (v26 * pWorldMaxs) + vShootDir.y;
        pWorldMaxsa = this->m_flPostSpawnDirectionVariance;
        vShootDir.y = v29;
        vShootDir.z = v27 + vShootDir.z;
        vShootDir.x = v28 + vShootDir.x;
        v30 = (*(*random_valve + 8LL))(random_valve, -1.0, 1.0);
        v31 = vForward.y * v30;
        v32 = (vForward.z * v30) * pWorldMaxsa;
        v33 = (v30 * vForward.x) * pWorldMaxsa;
        v34 = (v31 * pWorldMaxsa) + vShootDir.y;
        pWorldMaxsb = this->m_flPostSpawnDirectionVariance;
        vShootDir.y = v34;
        vShootDir.z = v32 + vShootDir.z;
        vShootDir.x = v33 + vShootDir.x;
        v35 = (*(*random_valve + 8LL))(random_valve, -1.0, 1.0);
        vShootDir.y = ((vUp.y * v35) * pWorldMaxsb) + vShootDir.y;
        vShootDir.z = ((vUp.z * v35) * pWorldMaxsb) + vShootDir.z;
        vShootDir.x = ((v35 * vUp.x) * pWorldMaxsb) + vShootDir.x;
        VectorNormalize(&vShootDir);
        m_flPostSpawnSpeed = this->m_flPostSpawnSpeed;
        vShootDir.x = vShootDir.x * m_flPostSpawnSpeed;
        vShootDir.y = vShootDir.y * m_flPostSpawnSpeed;
        vShootDir.z = m_flPostSpawnSpeed * vShootDir.z;
        Object = CBaseEntity::VPhysicsGetObject(m_pInstance);
        if ( Object != 0 )
        {
          ++v12;
          v11 += 4;
          (*(*Object + 552LL))(Object, &vShootDir);
          if ( v12 >= *hSpawnGroup )
            return;
        }
        else
        {
          CBaseEntity::SetAbsVelocity(m_pInstance, &vShootDir);
LABEL_12:
          ++v12;
          v11 += 4;
          if ( v12 >= *hSpawnGroup )
            return;
        }
      }
    }
  }
}


// CEnvEntityMaker::OnEntitiesSpawned  (line 168, @0x00000000021d4930, libserver.so)
// calls: CEnvEntityMaker::OnEntitiesSpawned
void __fastcall CEnvEntityMaker::OnEntitiesSpawned(
        CEnvEntityMaker *const this,
        SpawnGroupHandle_t hSpawnGroup,
        const CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *const hNewEntities)
{
  if ( hNewEntities->m_Size != 0 )
    CEnvEntityMaker::OnEntitiesSpawned(this, hNewEntities, hNewEntities);
}


// CEnvEntityMaker::SpawnEntity  (line 267, @0x00000000021d0a80, libserver.so)  // inlines: CUtlDelegate<CEnvEntityMaker, CEnvEntityMaker>, Convert<CEnvEntityMaker, void (CEnvEntityMaker::*)(unsigned int, const CUtlVector<CEntityHandle>&), void (detail::GenericClass::*)()>, FastDelegate2<CEnvEntityMaker, CEnvEntityMaker>, UtlMakeDelegate<CEnvEntityMaker, CEnvEntityMaker, unsigned int, const CUtlVector<CEntityHandle>&, void>, bindmemfunc<CEnvEntityMaker, void (CEnvEntityMaker::*)(unsigned int, const CUtlVector<CEntityHandle>&)>, curtime, operator!=, operator=
// calls: CEnvEntityMaker::FindTemplate, CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles, CPointTemplate::CreateInstance, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// callers: CEnvEntityMaker::Activate, CEnvEntityMaker::SpawnEntityFromScript, CEnvEntityMaker::SpawnEntityAtEntityOriginFromScript, CEnvEntityMaker::SpawnEntityAtNamedEntityOriginFromScript, CEnvEntityMaker::SpawnEntityAtLocationFromScript, CEnvEntityMaker::InputForceSpawnAtEntityOrigin, CEnvEntityMaker::CheckSpawnThink, CEnvEntityMaker::InputForceSpawn
// globals: CEnvEntityMaker::OnEntitiesSpawned(uint,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int>> const&), CEnvEntityMaker::CheckSpawnThink(void)
void __fastcall CEnvEntityMaker::SpawnEntity(
        CEnvEntityMaker *const this,
        Vector vecAlternateOrigin,
        QAngle vecAlternateAngles)
{
  float v4; // r14d
  CPointTemplate *Template; // r12
  double v6; // xmm1_8
  CGlobalVars *v7; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v9; // xmm0_8
  _BYTE v10[28]; // [rsp+0h] [rbp-90h]
  float x; // [rsp+20h] [rbp-70h]
  Vector vecSpawnOrigin; // [rsp+30h] [rbp-60h] BYREF
  QAngle vecSpawnAngles; // [rsp+40h] [rbp-50h] BYREF
  CEnvEntityMaker *v14; // [rsp+50h] [rbp-40h]
  void (__fastcall *v15)(CEnvEntityMaker *const, SpawnGroupHandle_t, const CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *const); // [rsp+58h] [rbp-38h]
  __int64 v16; // [rsp+60h] [rbp-30h]

  x = vecAlternateOrigin.x;
  *&v10[12] = vecAlternateOrigin.z;
  *&v10[16] = vecAlternateAngles;
  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(vecAlternateOrigin.y)));
  Template = CEnvEntityMaker::FindTemplate(this);
  if ( Template != 0 )
  {
    vecSpawnOrigin = *CBaseEntity::GetAbsOrigin(this);
    vecSpawnAngles = *CBaseEntity::GetAbsAngles(this);
    if ( x != vec3_invalid.x || v4 != vec3_invalid.y || *&v10[12] != vec3_invalid.z )
    {
      vecSpawnOrigin.x = x;
      vecSpawnOrigin.y = v4;
      vecSpawnAngles = *&v10[16];
      vecSpawnOrigin.z = *&v10[12];
    }
    v15 = CEnvEntityMaker::OnEntitiesSpawned;
    v16 = 0;
    v14 = this;
    CPointTemplate::CreateInstance(Template, &vecSpawnOrigin, &vecSpawnAngles, this, *v10);
    if ( (this->m_spawnflags.m_Value & 1) != 0 )
    {
      CBaseEntity::ThinkSet(this, CEnvEntityMaker::CheckSpawnThink, 0.0, 0, 0);
      v7 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
            m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        }
        HIDWORD(v9) = 0;
        *&v9 = v7->m_flCurrentTime + 0.5;
      }
      else
      {
        *&v9 = 1056964608;
      }
      CBaseEntity::SetNextThink(this, v9, v6, 0);
    }
  }
}


// CEnvEntityMaker::SpawnEntityFromScript  (line 299, @0x00000000021d0cc0, libserver.so)
// calls: CEnvEntityMaker::SpawnEntity
void __fastcall CEnvEntityMaker::SpawnEntityFromScript(CEnvEntityMaker *const this)
{
  CEnvEntityMaker::SpawnEntity(this, vec3_invalid, vec3_angle);
}


// CEnvEntityMaker::SpawnEntityAtEntityOriginFromScript  (line 307, @0x00000000021d0cf0, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToEnt
// calls: GetScriptDesc<CEntityInstance>, CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsOrigin, CEnvEntityMaker::SpawnEntity
void __fastcall CEnvEntityMaker::SpawnEntityAtEntityOriginFromScript(CEnvEntityMaker *const this, HSCRIPT hEntity)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  const CBaseEntity *v6; // rax
  const CBaseEntity *v7; // rbx
  QAngle *AbsAngles; // r12
  Vector *AbsOrigin; // rax

  if ( hEntity != 0 )
  {
    v4 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v6 = v4(g_pScriptVM, hEntity, Script);
    v7 = v6;
    if ( v6 != 0 )
    {
      AbsAngles = CBaseEntity::GetAbsAngles(v6);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
      CEnvEntityMaker::SpawnEntity(this, *AbsOrigin, *AbsAngles);
    }
  }
}


// CEnvEntityMaker::SpawnEntityAtNamedEntityOriginFromScript  (line 319, @0x00000000021d0d80, libserver.so)
// calls: CGameEntitySystem::FindEntityByName, CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsOrigin, CEnvEntityMaker::SpawnEntity
void __fastcall CEnvEntityMaker::SpawnEntityAtNamedEntityOriginFromScript(
        CEnvEntityMaker *const this,
        const char *pszName)
{
  CBaseEntity *EntityByName; // rax
  const CBaseEntity *v4; // rbx
  QAngle *AbsAngles; // r13
  Vector *AbsOrigin; // rax

  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, pszName, this, 0, 0, 0);
  v4 = EntityByName;
  if ( EntityByName != 0 )
  {
    AbsAngles = CBaseEntity::GetAbsAngles(EntityByName);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
    CEnvEntityMaker::SpawnEntity(this, *AbsOrigin, *AbsAngles);
  }
}


// CEnvEntityMaker::SpawnEntityAtLocationFromScript  (line 332, @0x00000000021d0e10, libserver.so)
// calls: CEnvEntityMaker::SpawnEntity
void __fastcall CEnvEntityMaker::SpawnEntityAtLocationFromScript(
        CEnvEntityMaker *const this,
        const Vector *const vecAlternateOrigin,
        const Vector *const vecAlternateAngles)
{
  CEnvEntityMaker::SpawnEntity(this, *vecAlternateOrigin, *vecAlternateAngles);
}


// CEnvEntityMaker::HasRoomToSpawn  (line 341, @0x00000000021d1140, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, GetEHandle, GetEntityIdentity, GetEntryIndex, GetSerialNumber, IndexToIdentity, Init, IsValid, LengthSqr, LookupEntity, Ray_t, RnCollisionAttr_t, Set, TraceRay, UTIL_TraceHull, VectorAdd, VectorAligned, VectorSubtract, operator bool, operator*=, operator=, operator==
// calls: CGameTrace::Init, CBaseEntity::GetAbsOrigin, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay
// callers: CEnvEntityMaker::CheckSpawnThink, CEnvEntityMaker::InputForceSpawn
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CEnvEntityMaker::HasRoomToSpawn(CEnvEntityMaker *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  const Vector *v5; // r12
  const Vector *v6; // rax
  float y; // xmm7_4
  float v8; // xmm6_4
  float x; // xmm9_4
  float v10; // xmm8_4
  float z; // xmm5_4
  float v12; // xmm1_4
  CEntityIdentity *m_pEntity; // rdx
  int v14; // eax
  __int16 v15; // cx
  CConcreteEntityList *v16; // rsi
  uint32 v17; // eax
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  bool result; // al
  const Vector *AbsOrigin; // rax
  CTraceFilterSimple v22; // [rsp+0h] [rbp-160h] BYREF
  Ray_t ray; // [rsp+40h] [rbp-120h] BYREF
  trace_t tr; // [rsp+90h] [rbp-D0h] BYREF

  m_Index = this->m_hCurrentBlocker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hCurrentBlocker.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hCurrentBlocker.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(v4->m_pInstance);
        if ( AbsOrigin->x == this->m_vecBlockerOrigin.x
          && AbsOrigin->y == this->m_vecBlockerOrigin.y
          && AbsOrigin->z == this->m_vecBlockerOrigin.z )
        {
          return 0;
        }
      }
    }
  }
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  v5 = CBaseEntity::GetAbsOrigin(this);
  v6 = CBaseEntity::GetAbsOrigin(this);
  ray.m_Start.w = 0.0;
  y = this->m_vecEntityMaxs.y;
  ray.m_Delta.w = 0.0;
  v8 = this->m_vecEntityMins.y;
  ray.m_StartOffset.w = 0.0;
  x = this->m_vecEntityMaxs.x;
  ray.m_Extents.w = 0.0;
  v10 = this->m_vecEntityMins.x;
  ray.m_flRadius = 0.0;
  z = this->m_vecEntityMaxs.z;
  ray.m_Delta.x = v5->x - v6->x;
  ray.m_Delta.y = v5->y - v6->y;
  ray.m_Delta.z = v5->z - v6->z;
  v12 = this->m_vecEntityMins.z;
  ray.m_Extents.x = (x - v10) * 0.5;
  ray.m_Extents.y = (y - v8) * 0.5;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  ray.m_Extents.z = (z - v12) * 0.5;
  ray.m_StartOffset.z = (v12 + z) * 0.5;
  ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.y * ray.m_Extents.y))
               + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
  ray.m_StartOffset.y = (y + v8) * 0.5;
  ray.m_StartOffset.x = (x + v10) * 0.5;
  ray.m_Start.x = v6->x + ray.m_StartOffset.x;
  ray.m_Start.y = v6->y + ray.m_StartOffset.y;
  ray.m_Start.z = v6->z + ray.m_StartOffset.z;
  ray.m_StartOffset.x = -ray.m_StartOffset.x;
  ray.m_StartOffset.y = -ray.m_StartOffset.y;
  ray.m_StartOffset.z = -ray.m_StartOffset.z;
  CTraceFilterSimple::CTraceFilterSimple(&v22, this, 4, 0);
  v22.m_attr.m_nInteractsWith |= 0x87001uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v22, &tr);
  if ( tr.m_pEnt != 0 )
  {
    m_pEntity = tr.m_pEnt->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v14 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v15 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v16 = CEntityHandle::gm_pEntityList;
      LOWORD(this->m_hCurrentBlocker.m_Index) = v15 | this->m_hCurrentBlocker.m_Index & 0x8000;
      v17 = (v14 << 15) | this->m_hCurrentBlocker.m_Index & 0x7FFF;
      this->m_hCurrentBlocker.m_Index = v17;
      if ( v17 + 2 > 1 )
      {
        v18 = v16->m_pIdentityChunks[(LOWORD(this->m_hCurrentBlocker.m_Index) >> 9) & 0x3F];
        if ( v18 != 0 )
        {
          v19 = &v18[this->m_hCurrentBlocker.m_Index & 0x1FF];
          if ( v19 != 0 && v17 == v19->m_EHandle.m_Index )
            this->m_vecBlockerOrigin = *CBaseEntity::GetAbsOrigin(v19->m_pInstance);
        }
      }
      return 0;
    }
    goto LABEL_17;
  }
  result = 1;
  if ( tr.startsolid )
  {
LABEL_17:
    this->m_hCurrentBlocker.m_Index = -1;
    return 0;
  }
  return result;
}


// CEnvEntityMaker::IsPlayerLooking  (line 375, @0x00000000021d1560, libserver.so)  // inlines: DotProduct, VectorSubtract, operator-
// calls: UTIL_PlayerByIndex, CBaseEntity::GetAbsOrigin, VectorNormalize
// callers: CEnvEntityMaker::CheckSpawnThink, CEnvEntityMaker::InputForceSpawn
bool __fastcall CEnvEntityMaker::IsPlayerLooking(CEnvEntityMaker *const this)
{
  CEntityIndex v2; // r12d
  CBasePlayer *v3; // rax
  CBasePlayer *v4; // rbx
  float v5; // xmm1_4
  float v6; // xmm1_4
  const Vector *AbsOrigin; // rax
  vec_t v8; // xmm0_4
  vec_t v9; // xmm2_4
  double vLookDir; // [rsp+0h] [rbp-60h]
  float vLookDir_8; // [rsp+8h] [rbp-58h]
  Vector vTargetDir; // [rsp+10h] [rbp-50h] BYREF
  double v14; // [rsp+20h] [rbp-40h]
  float v15; // [rsp+28h] [rbp-38h]

  v2.m_Data = 1;
  if ( gpGlobals->maxClients <= 0 )
    return 0;
  while ( 1 )
  {
    v3 = UTIL_PlayerByIndex(v2);
    v4 = v3;
    if ( v3 != 0 )
    {
      vLookDir = (*(v3->_vptr_IHandleEntity + 277))(v3);
      vLookDir_8 = v5;
      v14 = (*(v4->_vptr_IHandleEntity + 164))(v4);
      v15 = v6;
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      v8 = AbsOrigin->z - v15;
      v9 = AbsOrigin->x - *&v14;
      vTargetDir.y = AbsOrigin->y - *(&v14 + 1);
      vTargetDir.z = v8;
      vTargetDir.x = v9;
      VectorNormalize(&vTargetDir);
      if ( (((*&vLookDir * vTargetDir.x) + (*(&vLookDir + 1) * vTargetDir.y)) + (vLookDir_8 * vTargetDir.z)) > 0.0 )
        break;
    }
    if ( gpGlobals->maxClients < ++v2.m_Data )
      return 0;
  }
  return 1;
}


// CEnvEntityMaker::CheckSpawnThink  (line 400, @0x00000000021d1690, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsValid, LookupEntity, curtime, operator bool
// calls: CBaseEntity::SetNextThink, CEnvEntityMaker::HasRoomToSpawn, CEnvEntityMaker::SpawnEntity, CEnvEntityMaker::IsPlayerLooking
// globals: CEntityHandle::gm_pEntityList
void __fastcall CEnvEntityMaker::CheckSpawnThink(CEnvEntityMaker *const this)
{
  double v1; // xmm1_8
  CGlobalVars *v3; // r12
  double v4; // xmm0_8
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v4) = 0;
    *&v4 = v3->m_flCurrentTime + 0.5;
  }
  else
  {
    *&v4 = 1056964608;
  }
  CBaseEntity::SetNextThink(this, v4, v1, 0);
  m_Index = this->m_hCurrentInstance.m_Index;
  if ( (m_Index + 2 <= 1
     || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hCurrentInstance.m_Index) >> 9) & 0x3F]) == 0
     || (v7 = &v6[this->m_hCurrentInstance.m_Index & 0x1FF]) == 0
     || m_Index != v7->m_EHandle.m_Index
     || (this->m_spawnflags.m_Value & 2) == 0)
    && CEnvEntityMaker::HasRoomToSpawn(this)
    && ((this->m_spawnflags.m_Value & 4) != 0 || !CEnvEntityMaker::IsPlayerLooking(this)) )
  {
    CEnvEntityMaker::SpawnEntity(this, vec3_invalid, vec3_angle);
  }
}


// CEnvEntityMaker::InputForceSpawn  (line 428, @0x00000000021d6820, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CEnvEntityMaker::FindTemplate, CEnvEntityMaker::SpawnEntity, CEnvEntityMaker::HasRoomToSpawn, CEntityIOOutput::FireOutputInternal, CEnvEntityMaker::IsPlayerLooking, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CEnvEntityMaker::InputForceSpawn(CEnvEntityMaker *const this, inputdata_t *const inputdata)
{
  unsigned int m_Value; // eax
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  if ( CEnvEntityMaker::FindTemplate(this) == 0 )
    return;
  m_Value = this->m_spawnflags.m_Value;
  if ( (m_Value & 8) != 0 )
  {
    if ( !CEnvEntityMaker::HasRoomToSpawn(this) )
    {
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_pOutputOnFailedSpawn, this, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        goto LABEL_11;
      return;
    }
    m_Value = this->m_spawnflags.m_Value;
  }
  if ( (m_Value & 0x10) != 0 && CEnvEntityMaker::IsPlayerLooking(this) )
  {
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_pOutputOnFailedSpawn, this, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
LABEL_11:
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  }
  else
  {
    CEnvEntityMaker::SpawnEntity(this, vec3_invalid, vec3_angle);
  }
}


// CEnvEntityMaker::InputForceSpawnAtEntityOrigin  (line 452, @0x00000000021d0e30, libserver.so)  // inlines: AssignTo, TempString, ToString
// calls: CGameEntitySystem::FindEntityByName, CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsOrigin, CEnvEntityMaker::SpawnEntity, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "true", "false", "%d %d %d %d"
// globals: jpt_21D0E6C, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CEnvEntityMaker::InputForceSpawnAtEntityOrigin(
        CEnvEntityMaker *const this,
        inputdata_t *const inputdata)
{
  int16 m_type; // ax
  CBaseEntity *pCaller; // r13
  CBaseEntity *pActivator; // rbx
  char *m_pszString; // rdx
  CBaseEntity *EntityByName; // rax
  const CBaseEntity *v8; // rbx
  QAngle *AbsAngles; // r13
  Vector *AbsOrigin; // rax
  const char *v11; // rax
  double m_float; // xmm0_8
  const char *v13; // rcx

  m_type = inputdata->value.m_type;
  pCaller = inputdata->pCaller;
  pActivator = inputdata->pActivator;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_10;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_12;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_14;
      case 6:
        v13 = "true";
        if ( inputdata->value.m_char == 0 )
          v13 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v13);
        goto LABEL_18;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_14;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_18;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_18:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_12:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_14:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v11 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v11);
LABEL_10:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, m_pszString, this, pActivator, pCaller, 0);
  v8 = EntityByName;
  if ( EntityByName != 0 )
  {
    AbsAngles = CBaseEntity::GetAbsAngles(EntityByName);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
    CEnvEntityMaker::SpawnEntity(this, *AbsOrigin, *AbsAngles);
  }
}


