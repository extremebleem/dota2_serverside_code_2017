// Reconstructed from DWARF by pahole; not original source.

// src/game/server/soundscape.cpp:469
class CTriggerSoundscape : public CBaseTrigger {
public:

private:

	static datamap_t m_DataMap;

	string_t m_SoundscapeName;  // +0x5c8
	typedef CBaseTrigger BaseClass;

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
	CTriggerSoundscape(CTriggerSoundscape &);
	CTriggerSoundscape(CTriggerSoundscape &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CTriggerSoundscape();
	virtual void StartTouch(CBaseEntity *);
	virtual void EndTouch(CBaseEntity *);

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	void PlayerUpdateThink();
	virtual ~CTriggerSoundscape();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[111] StartTouch
	// vtable[113] EndTouch
	// vtable[8] Spawn
	// vtable[10] Activate
	// sizeof = 1512
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnvSoundscapeProxy::GetDataDescMap  (line 24, @0x0000000002381080, libserver.so)
// globals: CEnvSoundscapeProxy::m_DataMap
datamap_t *__fastcall CEnvSoundscapeProxy::GetDataDescMap(CEnvSoundscapeProxy *const this)
{
  return &CEnvSoundscapeProxy::m_DataMap;
}


// CEnvSoundscapeProxy::AddDatadescMetadataKeys  (line 24, @0x0000000002397300, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvSoundscapeProxy::GetEntityClass(void)
void __fastcall CEnvSoundscapeProxy::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvSoundscapeProxy::GetEntityClass);
}


// CEnvSoundscapeProxy::GetBaseMap  (line 24, @0x0000000002397320, libserver.so)
// globals: CEnvSoundscape::m_DataMap
datamap_t *__cdecl CEnvSoundscapeProxy::GetBaseMap()
{
  return &CEnvSoundscape::m_DataMap;
}


// DataMapInit<CEnvSoundscapeProxy>  (line 24, @0x0000000002397330, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "CEnvSoundscapeProxy"
// globals: `guard variable for'DataMapInit<CEnvSoundscapeProxy>(CEnvSoundscapeProxy *)::nameHolder, CEnvSoundscape::m_DataMap, CEnvSoundscapeProxy::GetEntityClass(void), CEnvSoundscapeProxy::m_DataMap, DataMapInit<CEnvSoundscapeProxy>(CEnvSoundscapeProxy *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvSoundscapeProxy>(CEnvSoundscapeProxy *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEnvSoundscapeProxy>(CEnvSoundscapeProxy *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvSoundscapeProxy>(CEnvSoundscapeProxy *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvSoundscapeProxy>(CEnvSoundscapeProxy *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvSoundscapeProxy>(CEnvSoundscapeProxy *)::nameHolder.m_pszBase = "CEnvSoundscapeProxy";
    DataMapInit<CEnvSoundscapeProxy>(CEnvSoundscapeProxy *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvSoundscapeProxy>(CEnvSoundscapeProxy *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvSoundscapeProxy>(CEnvSoundscapeProxy *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvSoundscapeProxy>(CEnvSoundscapeProxy *)::nameHolder.m_nLenBase = 19;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvSoundscapeProxy>(CEnvSoundscapeProxy *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvSoundscapeProxy>(CEnvSoundscapeProxy *)::nameHolder,
      &_dso_handle);
  }
  CEnvSoundscapeProxy::m_DataMap.dataNumFields = 1;
  CEnvSoundscapeProxy::m_DataMap.baseMap = &CEnvSoundscape::m_DataMap;
  CEnvSoundscapeProxy::m_DataMap.dataDesc = &DataMapInit<CEnvSoundscapeProxy>(CEnvSoundscapeProxy *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvSoundscapeProxy::m_DataMap, CEnvSoundscapeProxy::GetEntityClass);
  return &CEnvSoundscapeProxy::m_DataMap;
}


// CEnvSoundscapeProxy::CEnvSoundscapeProxy  (line 31, @0x00000000023975f0, libserver.so)  // inlines: CUtlSymbolLarge
// calls: CEnvSoundscape::CEnvSoundscape
// callers: CEnvSoundscapeProxy::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CEnvSoundscapeProxy::CEnvSoundscapeProxy(CEnvSoundscapeProxy *const this)
{
  CEnvSoundscape::CEnvSoundscape(this);
  this->m_MainSoundscapeName.u.m_Id = 0;
  this->_vptr_IHandleEntity = &off_40AC850;
}


// CEnvSoundscapeProxy::Activate  (line 37, @0x00000000023a49f0, libserver.so)  // inlines: CUtlSymbolLarge, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, LookupEntity, Set, String, ToCStr, operator CEntityInstance*, operator bool, operator!=, operator->, operator=
// calls: Warning, CEnvSoundscape::Activate, CGameEntitySystem::FindEntityByName, __dynamic_cast
// strings: "env_soundscape_proxy can't find target soundscape: '%s'\n"
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CEnvSoundscape
void __fastcall CEnvSoundscapeProxy::Activate(CEnvSoundscapeProxy *const this, ActivateType_t activateType)
{
  uint32 m_Index; // edx
  unsigned int v5; // eax
  CConcreteEntityList *v6; // r9
  CEntityIdentity *v7; // rax
  CEntityIdentity *v8; // rax
  const char *m_pAsString; // rsi
  CBaseEntity *EntityByName; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdx
  int v13; // eax
  __int16 v14; // cx
  __int64 v15; // rax
  CEntityInstance *m_pInstance; // rdi
  CEntityIdentity *v17; // rcx
  CEntityIdentity *v18; // rcx
  string_t iszName; // [rsp+10h] [rbp-20h] BYREF

  if ( this->m_MainSoundscapeName.u.m_Id != 0
    && (iszName.u.m_Id = this->m_MainSoundscapeName.u.m_Id,
        (EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0)) != 0) )
  {
    v11 = __dynamic_cast(EntityByName, &`typeinfo for'CBaseEntity, &`typeinfo for'CEnvSoundscape, 0);
    if ( v11 == 0 || (v12 = v11[1]) == 0 )
    {
      this->m_hProxySoundscape.m_Index = -1;
LABEL_7:
      m_pAsString = "";
      if ( this->m_MainSoundscapeName.u.m_Id != 0 )
        m_pAsString = this->m_MainSoundscapeName.u.m_pAsString;
      Warning("env_soundscape_proxy can't find target soundscape: '%s'\n", m_pAsString);
      goto LABEL_10;
    }
    v13 = (*(v12 + 16) >> 15) - (*(v12 + 48) & 1);
    v14 = 0x7FFF;
    if ( *(v12 + 16) != -1 )
      v14 = *(v12 + 16) & 0x7FFF;
    LOWORD(this->m_hProxySoundscape.m_Index) = v14 | this->m_hProxySoundscape.m_Index & 0x8000;
    m_Index = (v13 << 15) | this->m_hProxySoundscape.m_Index & 0x7FFF;
    this->m_hProxySoundscape.m_Index = m_Index;
    v5 = m_Index + 2;
  }
  else
  {
    m_Index = this->m_hProxySoundscape.m_Index;
    v5 = m_Index + 2;
  }
  v6 = CEntityHandle::gm_pEntityList;
  if ( v5 <= 1 )
    goto LABEL_7;
  v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hProxySoundscape.m_Index) >> 9) & 0x3F];
  if ( v7 == 0 )
    goto LABEL_7;
  v8 = &v7[this->m_hProxySoundscape.m_Index & 0x1FF];
  if ( v8 == 0 || v8->m_EHandle.m_Index != m_Index )
    goto LABEL_7;
  this->m_soundscapeIndex = v8->m_pInstance[17]._vptr_IHandleEntity;
  v15 = 0;
  while ( 1 )
  {
    m_pInstance = 0;
    if ( m_Index + 2 > 1 )
    {
      v17 = v6->m_pIdentityChunks[(LOWORD(this->m_hProxySoundscape.m_Index) >> 9) & 0x3F];
      if ( v17 != 0 )
      {
        v18 = &v17[this->m_hProxySoundscape.m_Index & 0x1FF];
        if ( v18 != 0 && v18->m_EHandle.m_Index == m_Index )
          m_pInstance = v18->m_pInstance;
      }
    }
    this->m_positionNames[v15].u.m_Id = *(&m_pInstance[17].m_pEntity + v15);
    if ( ++v15 == 8 )
      break;
    v6 = CEntityHandle::gm_pEntityList;
    m_Index = this->m_hProxySoundscape.m_Index;
  }
LABEL_10:
  CEnvSoundscape::Activate(this, activateType);
}


// CEnvSoundscape::GetDataDescMap  (line 69, @0x0000000002381090, libserver.so)
// globals: CEnvSoundscape::m_DataMap
datamap_t *__fastcall CEnvSoundscape::GetDataDescMap(CEnvSoundscape *const this)
{
  return &CEnvSoundscape::m_DataMap;
}


// CEnvSoundscape::AddDatadescMetadataKeys  (line 69, @0x0000000002397400, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvSoundscape::GetEntityClass(void)
void __fastcall CEnvSoundscape::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvSoundscape::GetEntityClass);
}


// CEnvSoundscape::GetBaseMap  (line 69, @0x0000000002397420, libserver.so)
datamap_t *__cdecl CEnvSoundscape::GetBaseMap()
{
  return &CServerOnlyEntity::m_DataMap;
}


// DataMapInit<CEnvSoundscape>  (line 69, @0x0000000002397430, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "CEnvSoundscape"
// globals: `guard variable for'DataMapInit<CEnvSoundscape>(CEnvSoundscape *)::nameHolder, `guard variable for'DataMapInit<CEnvSoundscape>(CEnvSoundscape *)::dataDesc, CEnvSoundscape::GetEntityClass(void), CEnvSoundscape::m_DataMap, DataMapInit<CEnvSoundscape>(CEnvSoundscape *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvSoundscape>(CEnvSoundscape *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEnvSoundscape>(CEnvSoundscape *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvSoundscape>(CEnvSoundscape *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvSoundscape>(CEnvSoundscape *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvSoundscape>(CEnvSoundscape *)::nameHolder.m_pszBase = "CEnvSoundscape";
    DataMapInit<CEnvSoundscape>(CEnvSoundscape *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvSoundscape>(CEnvSoundscape *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvSoundscape>(CEnvSoundscape *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvSoundscape>(CEnvSoundscape *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvSoundscape>(CEnvSoundscape *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvSoundscape>(CEnvSoundscape *)::nameHolder,
      &_dso_handle);
  }
  CEnvSoundscape::m_DataMap.baseMap = &CServerOnlyEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CEnvSoundscape>(CEnvSoundscape *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvSoundscape>(CEnvSoundscape *)::dataDesc) != 0 )
  {
    DataMapInit<CEnvSoundscape>(CEnvSoundscape *)::dataDesc[6].fieldSize = 8;
    DataMapInit<CEnvSoundscape>(CEnvSoundscape *)::dataDesc[11].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvSoundscape>(CEnvSoundscape *)::dataDesc);
  }
  CEnvSoundscape::m_DataMap.dataNumFields = 11;
  CEnvSoundscape::m_DataMap.dataDesc = &DataMapInit<CEnvSoundscape>(CEnvSoundscape *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvSoundscape::m_DataMap, CEnvSoundscape::GetEntityClass);
  return &CEnvSoundscape::m_DataMap;
}


// CEnvSoundscape::CEnvSoundscape  (line 92, @0x0000000002397560, libserver.so)  // inlines: CEntityHandle, CEntityIOOutput, CHandle, CServerOnlyEntity, CUtlSymbolLarge, operator=
// calls: CBaseEntity::CBaseEntity
// callers: CEnvSoundscape::CEntityInstanceEntityClass::ConstructInstance, CEnvSoundscapeProxy::CEnvSoundscapeProxy, CEnvSoundscapeTriggerable::CEnvSoundscapeTriggerable
void __fastcall CEnvSoundscape::CEnvSoundscape(CEnvSoundscape *const this)
{
  CEnvSoundscape *m_positionNames; // rax

  CBaseEntity::CBaseEntity(this);
  this->m_soundscapeName.u.m_Id = 0;
  this->_vptr_IHandleEntity = &off_40ACEF0;
  this->m_OnPlay._vptr_CEntityIOOutput = off_3F7C190;
  m_positionNames = this->m_positionNames;
  do
  {
    m_positionNames->_vptr_IHandleEntity = 0;
    m_positionNames = (m_positionNames + 8);
  }
  while ( m_positionNames != &this->m_hProxySoundscape );
  this->m_hProxySoundscape.m_Index = -1;
  this->m_soundscapeName.u.m_Id = 0;
  this->m_soundscapeIndex = -1;
  this->m_soundscapeEntityListId = -1;
  this->m_bDisabled = 0;
}


// CEnvSoundscape::~CEnvSoundscape  (line 100, @0x0000000002381550, libserver.so)  // inlines: ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CEnvSoundscape::~CEnvSoundscape(CEnvSoundscape *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CEnvSoundscape::~CEnvSoundscape  (line 100, @0x0000000002381570, libserver.so)  // inlines: ~CEnvSoundscape, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CEnvSoundscape::~CEnvSoundscape(CEnvSoundscape *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvSoundscape::InputEnable  (line 104, @0x00000000023821d0, libserver.so)  // inlines: Enable, IsEnabled
// calls: CEnvSoundscape::IsEnabled
void __fastcall CEnvSoundscape::InputEnable(CEnvSoundscape *const this, inputdata_t *const inputdata)
{
  if ( this->m_bDisabled )
  {
    this->m_bDisabled = 0;
  }
  else if ( !CEnvSoundscape::IsEnabled(this) )
  {
    this->m_bDisabled = 0;
  }
}


// CEnvSoundscape::InputDisable  (line 112, @0x0000000002382190, libserver.so)  // inlines: Disable, IsEnabled
// calls: CEnvSoundscape::IsEnabled
void __fastcall CEnvSoundscape::InputDisable(CEnvSoundscape *const this, inputdata_t *const inputdata)
{
  if ( !this->m_bDisabled && CEnvSoundscape::IsEnabled(this) )
    this->m_bDisabled = 1;
}


// CEnvSoundscape::InputToggleEnabled  (line 120, @0x0000000002382210, libserver.so)  // inlines: Disable, Enable, IsEnabled
// calls: CEnvSoundscape::IsEnabled
void __fastcall CEnvSoundscape::InputToggleEnabled(CEnvSoundscape *const this, inputdata_t *const inputdata)
{
  this->m_bDisabled = !this->m_bDisabled && CEnvSoundscape::IsEnabled(this);
}


// CEnvSoundscape::IsEnabled  (line 135, @0x0000000002382170, libserver.so)
// callers: CEnvSoundscape::InputDisable, CEnvSoundscape::InputEnable, CEnvSoundscape::InputToggleEnabled, CEnvSoundscape::IsEnabled, CEnvSoundscape::UpdateForPlayer
bool __fastcall CEnvSoundscape::IsEnabled(const CEnvSoundscape *const this)
{
  return (*(g_pGameRules->_vptr_CGameRules + 126))(g_pGameRules);
}


// CEnvSoundscape::IsEnabled  (line 135, @0x0000000002397620, libserver.so)
// calls: CEnvSoundscape::IsEnabled
bool __fastcall CEnvSoundscape::IsEnabled(const CEnvSoundscape *const this)
{
  return !this->m_bDisabled && CEnvSoundscape::IsEnabled(this);
}


// CEnvSoundscape::Disable  (line 144, @0x0000000002397640, libserver.so)
void __fastcall CEnvSoundscape::Disable(CEnvSoundscape *const this)
{
  this->m_bDisabled = 1;
}


// CEnvSoundscape::Enable  (line 155, @0x0000000002397650, libserver.so)
void __fastcall CEnvSoundscape::Enable(CEnvSoundscape *const this)
{
  this->m_bDisabled = 0;
}


// CEnvSoundscape::InRangeOfPlayer  (line 165, @0x0000000002397660, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, FastSqrt, GetFloat, Init, Length2D, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAligned, VectorClear, VectorCopy, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay
// callers: CEnvSoundscape::UpdateForPlayer
bool __fastcall CEnvSoundscape::InRangeOfPlayer(CEnvSoundscape *const this, CBasePlayer *pTarget)
{
  vec_t v4; // xmm1_4
  double v5; // xmm0_8
  float v6; // xmm1_4
  float m_flRadius; // xmm6_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  bool result; // al
  float v11; // [rsp+Ch] [rbp-194h]
  vec_t v12; // [rsp+10h] [rbp-190h]
  vec_t v13; // [rsp+18h] [rbp-188h]
  float vecSpot2_8; // [rsp+38h] [rbp-168h]
  CTraceFilterSimple v16; // [rsp+40h] [rbp-160h] BYREF
  Ray_t ray; // [rsp+80h] [rbp-120h] BYREF
  trace_t tr; // [rsp+D0h] [rbp-D0h] BYREF
  Vector vecSpot1; // 0:^20.12

  *&vecSpot1.x = (*(this->_vptr_IHandleEntity + 167))(this);
  vecSpot1.z = v4;
  v5 = (*(pTarget->_vptr_IHandleEntity + 167))(pTarget);
  vecSpot2_8 = v6;
  m_flRadius = this->m_flRadius;
  v8 = *&v5 - vecSpot1.x;
  v9 = *(&v5 + 1) - vecSpot1.y;
  if ( m_flRadius <= fsqrt((v8 * v8) + (v9 * v9)) && m_flRadius != -1.0 )
    return 0;
  v11 = (v8 * v8) + (v9 * v9);
  v12 = *(&v5 + 1) - vecSpot1.y;
  v13 = *&v5 - vecSpot1.x;
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  ray.m_Delta.x = v13;
  ray.m_Delta.y = v12;
  ray.m_Start.w = 0.0;
  memset(&ray.m_Delta.w, 0, 36);
  ray.m_Delta.z = vecSpot2_8 - vecSpot1.z;
  ray.m_flRadius = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  ray.m_Start.Vector = vecSpot1;
  ray.m_IsRay = 1;
  ray.m_IsSwept = ((ray.m_Delta.z * ray.m_Delta.z) + v11) != 0.0;
  CTraceFilterSimple::CTraceFilterSimple(&v16, pTarget, 4, 0);
  v16.m_attr.m_nInteractsWith |= 0x1F001uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v16, &tr);
  if ( tr.fraction != 1.0 )
    return 0;
  result = 1;
  if ( tr.startsolid )
    return 0;
  return result;
}


// CEnvSoundscape::WriteAudioParamsTo  (line 193, @0x000000000239c330, libserver.so)  // inlines: CUtlSymbolLarge, CVariantBase, FireOutput, Free, NetworkStateChanged, Set, operator!=, operator=, operator=<int>, operator|=<int>, ~CVariantBase
// calls: CGameEntitySystem::FindEntityByName, CBaseEntity::GetAbsOrigin, memcmp, CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CEnvSoundscape::UpdateForPlayer, CEnvSoundscapeTriggerable::DelegateEndTouch, CEnvSoundscapeTriggerable::DelegateStartTouch
void __fastcall CEnvSoundscape::WriteAudioParamsTo(CEnvSoundscape *const this, audioparams_t *const audio)
{
  int m_soundscapeEntityListId; // ebx
  int m_soundscapeIndex; // ebx
  __int64 v6; // rbx
  CNetworkArrayBase<Vector,8,audioparams_t::NetworkVar_localSound> *p_localSound; // r12
  const CBaseEntity *EntityByName; // rax
  int m_Value; // edx
  __int64 v10; // rdx
  CBaseEntity *pEntity; // [rsp+8h] [rbp-58h]
  int v12; // [rsp+10h] [rbp-50h]
  const Vector *AbsOrigin; // [rsp+10h] [rbp-50h]
  CVariant v14[4]; // [rsp+20h] [rbp-40h] BYREF

  m_soundscapeEntityListId = this->m_soundscapeEntityListId;
  if ( m_soundscapeEntityListId != audio->soundscapeEntityListIndex.m_Value )
  {
    (*(audio->_vptr_audioparams_t + 2))(audio, 112, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    audio->soundscapeEntityListIndex.m_Value = m_soundscapeEntityListId;
  }
  m_soundscapeIndex = this->m_soundscapeIndex;
  if ( m_soundscapeIndex != audio->soundscapeIndex.m_Value )
  {
    (*(audio->_vptr_audioparams_t + 2))(audio, 104, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    audio->soundscapeIndex.m_Value = m_soundscapeIndex;
  }
  if ( audio->localBits.m_Value != 0 )
  {
    (*(audio->_vptr_audioparams_t + 2))(audio, 108, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    audio->localBits.m_Value = 0;
  }
  v6 = 0;
  p_localSound = &audio->localSound;
  do
  {
    while ( 1 )
    {
      if ( this->m_positionNames[v6].u.m_Id != 0 )
      {
        v14[0].m_uint64 = this->m_positionNames[v6].u.m_Id;
        EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, v14, this, this, 0, 0);
        if ( EntityByName != 0 )
        {
          m_Value = audio->localBits.m_Value;
          v12 = m_Value | (1 << v6);
          if ( m_Value != (m_Value | (1 << v6)) )
          {
            pEntity = EntityByName;
            (*(audio->_vptr_audioparams_t + 2))(audio, 108, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            EntityByName = pEntity;
            audio->localBits.m_Value = v12;
          }
          AbsOrigin = CBaseEntity::GetAbsOrigin(EntityByName);
          if ( memcmp(p_localSound, AbsOrigin, 0xCu) != 0 )
            break;
        }
      }
      ++v6;
      p_localSound = (p_localSound + 12);
      if ( v6 == 8 )
        goto LABEL_15;
    }
    v10 = v6++;
    p_localSound = (p_localSound + 12);
    (*(audio->_vptr_audioparams_t + 2))(audio, 8, v10, 0xFFFFFFFFLL);
    p_localSound[-1].m_Value[7].x = AbsOrigin->x;
    p_localSound[-1].m_Value[7].y = AbsOrigin->y;
    p_localSound[-1].m_Value[7].z = AbsOrigin->z;
  }
  while ( v6 != 8 );
LABEL_15:
  v14[0].m_flags = 0;
  v14[0].m_type = 0;
  v14[0].m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnPlay, this, this, v14, 0.0);
  if ( (v14[0].m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v14[0].m_uint64);
}


// CEnvSoundscape::UpdateForPlayer  (line 226, @0x000000000239c560, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, FastSqrt, GetBool, GetFloat, GetInt, Init, IsEnabled, Length2D, LengthSqr, Ray_t, RnCollisionAttr_t, String, ToCStr, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, Vector, VectorAligned, VectorClear, VectorCopy, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CEnvSoundscape::IsEnabled, CBaseEntity::GetAbsOrigin, NDebugOverlay::Box, CEnvSoundscape::InRangeOfPlayer, NDebugOverlay::Line, NDebugOverlay::EntityTextAtPosition, CEnvSoundscape::WriteAudioParamsTo, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CGlobalVarsBase::curtime, sin (14 total)
// callers: CSoundscapeSystem::FrameUpdatePreEntityThink
void __fastcall CEnvSoundscape::UpdateForPlayer(CEnvSoundscape *const this, ss_update_t *const update)
{
  float v4; // xmm1_4
  float v5; // xmm0_4
  const Vector *AbsOrigin; // rax
  CBasePlayer *v7; // r13
  CBasePlayer *v8; // rsi
  bool v9; // zf
  int (**v10)(...); // rax
  vec_t v11; // xmm1_4
  const Vector *v12; // rax
  const char *m_pAsString; // r12
  const Vector *v14; // rax
  float v15; // xmm2_4
  CBasePlayer *v16; // rsi
  vec_t v17; // xmm1_4
  const Vector *v18; // rax
  float m_flRadius; // xmm2_4
  float z; // xmm5_4
  CBasePlayer *pPlayer; // rsi
  float m_fValue; // xmm2_4
  float x; // xmm2_4
  float v24; // xmm6_4
  CBasePlayer *v25; // rsi
  float v26; // xmm5_4
  float v27; // xmm5_4
  int (**vptr_IHandleEntity)(...); // rax
  vec_t v29; // xmm1_4
  const Vector *v30; // rax
  int m_Value; // r14d
  long double v32; // fst6
  char v34; // c2
  const Vector *v35; // r13
  int v36; // r12d
  double v37; // xmm0_8
  __m128d v38; // xmm0
  const Vector *v39; // rax
  vec_t v40; // xmm1_4
  const Vector *v41; // rax
  float v42; // [rsp+14h] [rbp-19Ch]
  float range; // [rsp+18h] [rbp-198h]
  float rangea; // [rsp+18h] [rbp-198h]
  float periodica; // [rsp+20h] [rbp-190h]
  float periodic; // [rsp+20h] [rbp-190h]
  double v47; // [rsp+30h] [rbp-180h]
  Vector target; // [rsp+38h] [rbp-178h] BYREF
  __int64 v49; // [rsp+48h] [rbp-168h]
  Ray_t mins; // [rsp+80h] [rbp-130h] BYREF
  trace_t tr; // [rsp+D0h] [rbp-E0h] BYREF

  if ( this->m_bDisabled || !CEnvSoundscape::IsEnabled(this) )
  {
    if ( update->pCurrentSoundscape == this )
    {
      update->pCurrentSoundscape = 0;
      update->currentDistance = 0.0;
      update->bInRange = 0;
    }
    return;
  }
  v47 = (*(this->_vptr_IHandleEntity + 167))(this);
  v5 = fsqrt(
         ((update->playerPosition.x - *&v47) * (update->playerPosition.x - *&v47))
       + ((update->playerPosition.y - *(&v47 + 1)) * (update->playerPosition.y - *(&v47 + 1))));
  if ( update->pCurrentSoundscape == this )
  {
    update->currentDistance = v5;
    update->bInRange = 0;
    m_flRadius = this->m_flRadius;
    if ( m_flRadius > v5 || m_flRadius == -1.0 )
    {
      range = v4;
      memset(&tr.m_ShapeAttributes, 0, 31);
      tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
      CGameTrace::Init(&tr);
      ++update->traceCount;
      z = update->playerPosition.z;
      pPlayer = update->pPlayer;
      m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
      mins.m_Delta.y = update->playerPosition.y - *(&v47 + 1);
      mins.m_flRadius = m_fValue;
      x = update->playerPosition.x;
      mins.m_Delta.z = z - range;
      mins.m_Start.w = 0.0;
      memset(&mins.m_Delta.w, 0, 36);
      mins.m_Delta.x = x - *&v47;
      *&mins.m_Start.x = v47;
      mins.m_Start.z = range;
      mins.m_IsRay = 1;
      mins.m_IsSwept = (((mins.m_Delta.x * mins.m_Delta.x) + (mins.m_Delta.y * mins.m_Delta.y))
                      + (mins.m_Delta.z * mins.m_Delta.z)) != 0.0;
      CTraceFilterSimple::CTraceFilterSimple(&target.z, pPlayer, 4, 0);
      v49 |= 0x1F001uLL;
      CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &mins, &target.z, &tr);
      if ( tr.fraction == 1.0 && !tr.startsolid )
        update->bInRange = 1;
    }
    goto LABEL_9;
  }
  if ( !update->bInRange || update->currentDistance > v5 )
  {
    v15 = this->m_flRadius;
    if ( v15 > v5 || v15 == -1.0 )
    {
      v16 = update->pPlayer;
      if ( (update->pPlayer->m_afPhysicsFlags & 8) != 0 )
      {
LABEL_20:
        periodica = v5;
        CEnvSoundscape::WriteAudioParamsTo(this, &v16->m_Local.m_audio);
        update->pCurrentSoundscape = this;
        update->bInRange = 1;
        update->currentDistance = periodica;
        goto LABEL_9;
      }
      rangea = v5;
      v42 = v4;
      memset(&tr.m_ShapeAttributes, 0, 31);
      tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
      CGameTrace::Init(&tr);
      ++update->traceCount;
      v24 = update->playerPosition.z;
      v25 = update->pPlayer;
      v26 = phys_traceline_radius.m_pParent->m_Value.m_fValue;
      mins.m_Delta.y = update->playerPosition.y - *(&v47 + 1);
      mins.m_flRadius = v26;
      v27 = update->playerPosition.x;
      mins.m_Delta.z = v24 - v42;
      mins.m_Start.z = v42;
      mins.m_Start.w = 0.0;
      memset(&mins.m_Delta.w, 0, 36);
      mins.m_Delta.x = v27 - *&v47;
      *&mins.m_Start.x = v47;
      mins.m_IsRay = 1;
      mins.m_IsSwept = (((mins.m_Delta.x * mins.m_Delta.x) + (mins.m_Delta.y * mins.m_Delta.y))
                      + (mins.m_Delta.z * mins.m_Delta.z)) != 0.0;
      CTraceFilterSimple::CTraceFilterSimple(&target.z, v25, 4, 0);
      v49 |= 0x1F001uLL;
      CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &mins, &target.z, &tr);
      v5 = rangea;
      if ( tr.fraction == 1.0 && !tr.startsolid )
      {
        v16 = update->pPlayer;
        goto LABEL_20;
      }
    }
  }
LABEL_9:
  if ( soundscape_debug.m_pParent->m_Value.m_nValue != 0 )
  {
    tr.startpos.x = 10.0;
    tr.startpos.y = 10.0;
    tr.startpos.z = 10.0;
    mins.m_Start.x = -10.0;
    mins.m_Start.y = -10.0;
    mins.m_Start.z = -10.0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    NDebugOverlay::Box(AbsOrigin, &mins.m_Start, &tr.startpos, 0xFFu, 0, 255, 0.01023, 64);
    v7 = update->pPlayer;
    if ( update->pPlayer != 0 )
    {
      v8 = update->pPlayer;
      if ( this->m_soundscapeEntityListId == v7->m_Local.m_audio.soundscapeEntityListIndex.m_Value )
      {
        v9 = !CEnvSoundscape::InRangeOfPlayer(this, v8);
        vptr_IHandleEntity = update->pPlayer->_vptr_IHandleEntity;
        if ( v9 )
        {
          *&tr.startpos.x = (vptr_IHandleEntity[62])();
          tr.startpos.z = v40;
          v41 = CBaseEntity::GetAbsOrigin(this);
          NDebugOverlay::Line(v41, &tr.startpos, 0xFFu, 0xAAu, 0, 1, 0.01023);
        }
        else
        {
          *&tr.startpos.x = (vptr_IHandleEntity[62])();
          tr.startpos.z = v29;
          v30 = CBaseEntity::GetAbsOrigin(this);
          NDebugOverlay::Line(v30, &tr.startpos, 0, 0xFFu, 0, 1, 0.01023);
        }
        m_Value = v7->m_Local.m_audio.localBits.m_Value;
        v32 = CGlobalVarsBase::curtime(gpGlobals, 0);
        do
          v32 = __FPREM__(v32, 2.0);
        while ( v34 != 0 );
        v35 = v7->m_Local.m_audio.localSound.m_Value;
        v36 = 0;
        v37 = sin((v32 - 1.0) * 3.141592653589793);
        v38.m128d_f64[0] = v37 + v37;
        periodic = _mm_movedup_pd(v38).m128d_f64[0];
        do
        {
          if ( (m_Value & (1 << v36)) != 0 )
          {
            v39 = CBaseEntity::GetAbsOrigin(this);
            NDebugOverlay::Line(v39, v35, 0, 0x20u, 0xFFu, 0, 0.01023);
            NDebugOverlay::Cross3D(v35, periodic + 16.0, 0, 0, 0xFFu, 0, 0.01023);
          }
          ++v36;
          ++v35;
        }
        while ( v36 != 8 );
      }
      else
      {
        v9 = !CEnvSoundscape::InRangeOfPlayer(this, v8);
        v10 = update->pPlayer->_vptr_IHandleEntity;
        if ( v9 )
        {
          *&tr.startpos.x = (v10[62])();
          tr.startpos.z = v17;
          v18 = CBaseEntity::GetAbsOrigin(this);
          NDebugOverlay::Line(v18, &tr.startpos, 0xFFu, 0, 0, 1, 0.01023);
        }
        else
        {
          *&tr.startpos.x = (v10[62])();
          tr.startpos.z = v11;
          v12 = CBaseEntity::GetAbsOrigin(this);
          NDebugOverlay::Line(v12, &tr.startpos, 0xFFu, 0xFFu, 0xFFu, 1, 0.01023);
        }
      }
    }
    m_pAsString = "";
    if ( this->m_soundscapeName.u.m_Id != 0 )
      m_pAsString = this->m_soundscapeName.u.m_pAsString;
    v14 = CBaseEntity::GetAbsOrigin(this);
    NDebugOverlay::EntityTextAtPosition(v14, 0, m_pAsString, 0.01023, 255, 255, 255, 255);
  }
}


// CEnvSoundscape::Spawn  (line 344, @0x00000000023980e0, libserver.so)  // inlines: String, ToCStr
// calls: CBaseEntity::Spawn, CSoundscapeSystem::GetSoundscapeIndex
// globals: g_pSoundscapeSystem
void __fastcall CEnvSoundscape::Spawn(CEnvSoundscape *const this, const CEntityKeyValues *pKeyValues)
{
  const char *m_pAsString; // rsi

  CBaseEntity::Spawn(this, pKeyValues);
  m_pAsString = "";
  if ( this->m_soundscapeName.u.m_Id != 0 )
    m_pAsString = this->m_soundscapeName.u.m_pAsString;
  this->m_soundscapeIndex = CSoundscapeSystem::GetSoundscapeIndex(g_pSoundscapeSystem, m_pAsString);
}


// CEnvSoundscape::Precache  (line 351, @0x00000000023a8930, libserver.so)  // inlines: GetDebugName, Precache
// calls: CEntityInstance::Precache, CEntityIdentity::GetDebugName, DevMsg(char const*,...)
// strings: "Found soundscape entity \"%s\" with no soundscape name.\n"
void __fastcall CEnvSoundscape::Precache(CEnvSoundscape *const this, const CEntityPrecacheContext *pContext)
{
  const char *DebugName; // rax

  CEntityInstance::Precache(this, pContext);
  if ( this->m_soundscapeName.u.m_Id == 0 )
  {
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    DevMsg("Found soundscape entity \"%s\" with no soundscape name.\n", DebugName);
  }
}


// CEnvSoundscape::Activate  (line 363, @0x00000000023a49c0, libserver.so)
// calls: CBaseEntity::Activate, CSoundscapeSystem::AddSoundscapeEntity
// callers: CEnvSoundscapeProxy::Activate
// globals: g_pSoundscapeSystem
void __fastcall CEnvSoundscape::Activate(CEnvSoundscape *const this, ActivateType_t activateType)
{
  CBaseEntity::Activate(this, activateType);
  CSoundscapeSystem::AddSoundscapeEntity(g_pSoundscapeSystem, this);
}


// CEnvSoundscape::UpdateOnRemove  (line 369, @0x000000000239b2f0, libserver.so)
// calls: CSoundscapeSystem::RemoveSoundscapeEntity, CBaseEntity::UpdateOnRemove
// globals: g_pSoundscapeSystem
void __fastcall CEnvSoundscape::UpdateOnRemove(CEnvSoundscape *const this)
{
  CSoundscapeSystem::RemoveSoundscapeEntity(g_pSoundscapeSystem, this);
  CBaseEntity::UpdateOnRemove(this);
}


// CEnvSoundscape::RecomputeSoundscapeIndex  (line 375, @0x0000000002398130, libserver.so)  // inlines: String, ToCStr
// calls: CSoundscapeSystem::GetSoundscapeIndex
// callers: CSoundscapeSystem::ReassignSoundscapeIndicesForEntities
// globals: g_pSoundscapeSystem
void __fastcall CEnvSoundscape::RecomputeSoundscapeIndex(CEnvSoundscape *const this)
{
  const char *m_pAsString; // rsi

  m_pAsString = "";
  if ( this->m_soundscapeName.u.m_Id != 0 )
    m_pAsString = this->m_soundscapeName.u.m_pAsString;
  this->m_soundscapeIndex = CSoundscapeSystem::GetSoundscapeIndex(g_pSoundscapeSystem, m_pAsString);
}


// CEnvSoundscape::DrawEntityDebugOverlays  (line 380, @0x0000000002381b60, libserver.so)
// calls: CBaseEntity::DrawEntityDebugOverlays, UTIL_GetListenServerHost, CBaseEntity::GetAbsOrigin, NDebugOverlay::Line
void __fastcall CEnvSoundscape::DrawEntityDebugOverlays(CEnvSoundscape *const this, uint64 nDebugOverlayBits)
{
  CBasePlayer *ListenServerHost; // rax
  __int64 v5; // rax
  vec_t v6; // xmm1_4
  const Vector *AbsOrigin; // rax
  Vector target; // [rsp+0h] [rbp-20h] BYREF

  if ( (nDebugOverlayBits & 0x2C) != 0 )
  {
    ListenServerHost = UTIL_GetListenServerHost();
    if ( ListenServerHost != 0
      && this->m_soundscapeEntityListId != ListenServerHost->m_Local.m_audio.soundscapeEntityListIndex.m_Value )
    {
      v5 = (*(ListenServerHost->_vptr_IHandleEntity + 423))(ListenServerHost);
      if ( v5 != 0 )
      {
        *&target.x = (*(*v5 + 496LL))(v5);
        target.z = v6;
        AbsOrigin = CBaseEntity::GetAbsOrigin(this);
        NDebugOverlay::Line(AbsOrigin, &target, 0xFFu, 0, 0xFFu, 0, 0.0);
      }
    }
  }
  CBaseEntity::DrawEntityDebugOverlays(this, nDebugOverlayBits);
}


// CEnvSoundscapeTriggerable::GetDataDescMap  (line 406, @0x00000000023810a0, libserver.so)
// globals: CEnvSoundscapeTriggerable::m_DataMap
datamap_t *__fastcall CEnvSoundscapeTriggerable::GetDataDescMap(CEnvSoundscapeTriggerable *const this)
{
  return &CEnvSoundscapeTriggerable::m_DataMap;
}


// CEnvSoundscapeTriggerable::AddDatadescMetadataKeys  (line 406, @0x0000000002397900, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvSoundscapeTriggerable::GetEntityClass(void)
void __fastcall CEnvSoundscapeTriggerable::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvSoundscapeTriggerable::GetEntityClass);
}


// CEnvSoundscapeTriggerable::GetBaseMap  (line 406, @0x0000000002397920, libserver.so)
// globals: CEnvSoundscape::m_DataMap
datamap_t *__cdecl CEnvSoundscapeTriggerable::GetBaseMap()
{
  return &CEnvSoundscape::m_DataMap;
}


// DataMapInit<CEnvSoundscapeTriggerable>  (line 406, @0x0000000002397930, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "CEnvSoundscapeTriggerable"
// globals: `guard variable for'DataMapInit<CEnvSoundscapeTriggerable>(CEnvSoundscapeTriggerable *)::nameHolder, CEnvSoundscape::m_DataMap, CEnvSoundscapeTriggerable::GetEntityClass(void), DataMapInit<CEnvSoundscapeTriggerable>(CEnvSoundscapeTriggerable *)::dataDesc, CEnvSoundscapeTriggerable::m_DataMap, DataMapInit<CEnvSoundscapeTriggerable>(CEnvSoundscapeTriggerable *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvSoundscapeTriggerable>(CEnvSoundscapeTriggerable *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEnvSoundscapeTriggerable>(CEnvSoundscapeTriggerable *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvSoundscapeTriggerable>(CEnvSoundscapeTriggerable *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvSoundscapeTriggerable>(CEnvSoundscapeTriggerable *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvSoundscapeTriggerable>(CEnvSoundscapeTriggerable *)::nameHolder.m_pszBase = "CEnvSoundscapeTriggerable";
    DataMapInit<CEnvSoundscapeTriggerable>(CEnvSoundscapeTriggerable *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvSoundscapeTriggerable>(CEnvSoundscapeTriggerable *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvSoundscapeTriggerable>(CEnvSoundscapeTriggerable *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvSoundscapeTriggerable>(CEnvSoundscapeTriggerable *)::nameHolder.m_nLenBase = 25;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvSoundscapeTriggerable>(CEnvSoundscapeTriggerable *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvSoundscapeTriggerable>(CEnvSoundscapeTriggerable *)::nameHolder,
      &_dso_handle);
  }
  CEnvSoundscapeTriggerable::m_DataMap.dataNumFields = 1;
  CEnvSoundscapeTriggerable::m_DataMap.baseMap = &CEnvSoundscape::m_DataMap;
  CEnvSoundscapeTriggerable::m_DataMap.dataDesc = DataMapInit<CEnvSoundscapeTriggerable>(CEnvSoundscapeTriggerable *)::dataDesc;
  AddDatadescMetadataKeys(&CEnvSoundscapeTriggerable::m_DataMap, CEnvSoundscapeTriggerable::GetEntityClass);
  return &CEnvSoundscapeTriggerable::m_DataMap;
}


// CEnvSoundscapeTriggerable::CEnvSoundscapeTriggerable  (line 410, @0x0000000002397a00, libserver.so)
// calls: CEnvSoundscape::CEnvSoundscape
// callers: CEnvSoundscapeTriggerable::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CEnvSoundscapeTriggerable::CEnvSoundscapeTriggerable(CEnvSoundscapeTriggerable *const this)
{
  CEnvSoundscape::CEnvSoundscape(this);
  this->_vptr_IHandleEntity = &off_40AD590;
}


// CEnvSoundscapeTriggerable::DelegateStartTouch  (line 415, @0x00000000023a42f0, libserver.so)  // inlines: AddToHead, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, GetEHandle, GetEntryIndex, GetSerialNumber, InsertBefore, Set
// calls: __dynamic_cast, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::FindAndRemove, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::GrowVector, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::ShiftElementsRight, CEnvSoundscape::WriteAudioParamsTo
// callers: CTriggerSoundscape::StartTouch
void __fastcall CEnvSoundscapeTriggerable::DelegateStartTouch(CEnvSoundscapeTriggerable *const this, CBaseEntity *pEnt)
{
  char *v3; // rax
  char *v4; // r13
  CEntityIdentity *m_pEntity; // rax
  __int16 v6; // si
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *v7; // r12
  CEntityIdentity *v8; // rax
  __int16 v9; // si
  CHandle<CBaseEntity> *v10; // rax
  CHandle<CBaseEntity> src; // [rsp+0h] [rbp-30h] BYREF

  if ( pEnt != 0 )
  {
    v3 = __dynamic_cast(pEnt, &`typeinfo for'CBaseEntity, &`typeinfo for'CBasePlayer, 0);
    v4 = v3;
    if ( v3 != 0 )
    {
      src.m_Index = -1;
      if ( this != 0 )
      {
        m_pEntity = this->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v6 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
        }
        v7 = (v4 + 2488);
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FindAndRemove((v4 + 2488), &src);
        v8 = this->m_pEntity;
        src.m_Index = -1;
        if ( v8 != 0 )
        {
          v9 = 0x7FFF;
          if ( v8->m_EHandle.m_Index != -1 )
            v9 = v8->m_EHandle.m_Index & 0x7FFF;
          src.m_Index = (((v8->m_EHandle.m_Index >> 15) - (v8->m_flags & 1)) << 15) | v9 & 0x7FFF;
        }
      }
      else
      {
        v7 = (v3 + 2488);
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FindAndRemove((v3 + 2488), &src);
        src.m_Index = -1;
      }
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::GrowVector(v7, 1);
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::ShiftElementsRight(v7, 0, 1);
      v10 = *(v4 + 312);
      if ( v10 != 0 )
        v10->m_Index = src.m_Index;
      CEnvSoundscape::WriteAudioParamsTo(this, (v4 + 2176));
    }
  }
}


// CEnvSoundscapeTriggerable::DelegateEndTouch  (line 431, @0x000000000239ebb0, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator CEntityInstance*, operator=<int>
// calls: __dynamic_cast, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::FindAndRemove, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove, CEnvSoundscape::WriteAudioParamsTo
// callers: CTriggerSoundscape::EndTouch
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CEnvSoundscapeTriggerable
void __fastcall CEnvSoundscapeTriggerable::DelegateEndTouch(CEnvSoundscapeTriggerable *const this, CBaseEntity *pEnt)
{
  char *v3; // rbx
  CEntityIdentity *m_pEntity; // rdx
  __int16 v5; // cx
  unsigned __int16 *v6; // rcx
  int v7; // edx
  unsigned __int64 v8; // rcx
  CEntityIdentity *v9; // rax
  CEntityIdentity *v10; // rax
  CEnvSoundscape *v11; // rax
  CHandle<CBaseEntity> src; // [rsp+0h] [rbp-30h] BYREF

  if ( pEnt != 0 )
  {
    v3 = __dynamic_cast(pEnt, &`typeinfo for'CBaseEntity, &`typeinfo for'CBasePlayer, 0);
    if ( v3 != 0 )
    {
      src.m_Index = -1;
      if ( this != 0 )
      {
        m_pEntity = this->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v5 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v5 & 0x7FFF;
        }
      }
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FindAndRemove((v3 + 2488), &src);
      if ( *(v3 + 622) > 0 )
      {
        while ( 1 )
        {
          v6 = *(v3 + 312);
          v7 = *v6;
          if ( (*v6 + 2) > 1 )
          {
            v8 = *v6;
            v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v8 >> 9) & 0x3F];
            if ( v9 != 0 )
            {
              v10 = &v9[v8 & 0x1FF];
              if ( v10 != 0 && v7 == v10->m_EHandle.m_Index && v10->m_pInstance != 0 )
              {
                v11 = __dynamic_cast(
                        v10->m_pInstance,
                        &`typeinfo for'CBaseEntity,
                        &`typeinfo for'CEnvSoundscapeTriggerable,
                        0);
                if ( v11 != 0 )
                  break;
              }
            }
          }
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove((v3 + 2488), 0);
          if ( *(v3 + 622) <= 0 )
            goto LABEL_19;
        }
        CEnvSoundscape::WriteAudioParamsTo(v11, (v3 + 2176));
      }
      else
      {
LABEL_19:
        if ( *(v3 + 572) != 0 )
        {
          (*(*(v3 + 272) + 16LL))(v3 + 2176, 112, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          *(v3 + 572) = 0;
        }
      }
    }
  }
}


// CEnvSoundscapeTriggerable::Think  (line 459, @0x00000000023810b0, libserver.so)
void __fastcall CEnvSoundscapeTriggerable::Think(CEnvSoundscapeTriggerable *const this)
{
  ;
}


// CTriggerSoundscape::~CTriggerSoundscape  (line 469, @0x00000000023b0470, libserver.so)  // inlines: Purge, RemoveAll, ~CBaseToggle, ~CBaseTrigger, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBasePlayer>, CUtlMemory<CHandle<CBasePlayer>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBasePlayer>, int>::Purge, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerSoundscape::~CTriggerSoundscape(CTriggerSoundscape *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_40ADCB0;
  CUtlVectorBase<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int>>::RemoveAll(&this->m_spectators);
  if ( (this->m_spectators.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBasePlayer>,int>::Purge(&this->m_spectators.m_Memory);
    if ( (this->m_spectators.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBasePlayer>,int>::Purge(&this->m_spectators.m_Memory);
  }
  this->m_hTouchingEntities.m_Size = 0;
  v2 = (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_40BE1B0;
  if ( v2 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CTriggerSoundscape::~CTriggerSoundscape  (line 469, @0x00000000023b0530, libserver.so)  // inlines: Purge, RemoveAll, ~CBaseToggle, ~CBaseTrigger, ~CTriggerSoundscape, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBasePlayer>, CUtlMemory<CHandle<CBasePlayer>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBasePlayer>, int>::Purge, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerSoundscape::~CTriggerSoundscape(CTriggerSoundscape *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_40ADCB0;
  CUtlVectorBase<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int>>::RemoveAll(&this->m_spectators);
  if ( (this->m_spectators.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBasePlayer>,int>::Purge(&this->m_spectators.m_Memory);
    if ( (this->m_spectators.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBasePlayer>,int>::Purge(&this->m_spectators.m_Memory);
  }
  this->m_hTouchingEntities.m_Size = 0;
  v2 = (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_40BE1B0;
  if ( v2 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CTriggerSoundscape::GetEntityClass  (line 471, @0x00000000023a95f0, libserver.so)
CEntityClass *__cdecl CTriggerSoundscape::GetEntityClass()
{
  return g_pEntityCTriggerSoundscapeClass;
}


// CTriggerSoundscape::Schema_DynamicBinding  (line 471, @0x00000000023a9600, libserver.so)
// globals: CTriggerSoundscape::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerSoundscape::Schema_DynamicBinding(
        const CTriggerSoundscape *const this)
{
  return CTriggerSoundscape::s_pSchemaBinding;
}


// CTriggerSoundscape::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 471, @0x00000000023a9610, libserver.so)
// globals: CTriggerSoundscape::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerSoundscape::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTriggerSoundscape::CEntityInstanceEntityClass *const this)
{
  return CTriggerSoundscape::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTriggerSoundscape::CEntityInstanceEntityClass::DestructInstance  (line 471, @0x00000000023a9620, libserver.so)  // inlines: Destruct<CTriggerSoundscape>
void __fastcall CTriggerSoundscape::CEntityInstanceEntityClass::DestructInstance(
        CTriggerSoundscape::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTriggerSoundscape::CEntityInstanceEntityClass::FreeInstance  (line 471, @0x00000000023a9640, libserver.so)
void __fastcall CTriggerSoundscape::CEntityInstanceEntityClass::FreeInstance(
        CTriggerSoundscape::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTriggerSoundscape::CEntityInstanceEntityClass::CanAllocate  (line 471, @0x00000000023a9660, libserver.so)
bool __fastcall CTriggerSoundscape::CEntityInstanceEntityClass::CanAllocate(
        const CTriggerSoundscape::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTriggerSoundscape::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 471, @0x00000000023a9670, libserver.so)
// globals: CTriggerSoundscape::s_pSchemaBinding
const ISchemaBinding *__fastcall CTriggerSoundscape::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTriggerSoundscape::CEntityInstanceEntityClass *const this)
{
  return CTriggerSoundscape::s_pSchemaBinding;
}


// CTriggerSoundscape::CEntityInstanceEntityClass::AllocateInstance  (line 471, @0x00000000023aa9b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTriggerSoundscape::CEntityInstanceEntityClass::AllocateInstance(
        CTriggerSoundscape::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1512);
  memset(v1, 0, 0x5E8u);
  return v1;
}


// CTriggerSoundscape::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 471, @0x00000000023acb10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTriggerSoundscape::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerSoundscape::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CTriggerSoundscape::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 471, @0x00000000023acb30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTriggerSoundscape::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerSoundscape::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTriggerSoundscape::CEntityInstanceEntityClass::ConstructInstance  (line 471, @0x00000000023af600, libserver.so)  // inlines: Construct<CTriggerSoundscape>
// calls: CTriggerSoundscape::CTriggerSoundscape
CEntityInstance *__fastcall CTriggerSoundscape::CEntityInstanceEntityClass::ConstructInstance(
        CTriggerSoundscape::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CTriggerSoundscape::CTriggerSoundscape(p);
  return p;
}


// CTriggerSoundscape::GetEntityClassInternal  (line 471, @0x00000000023b3be0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseTrigger::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseToggle::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "trigger_soundscape", "CTriggerSoundscape", "CBaseTrigger"
// globals: `guard variable for'CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass, CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CTriggerSoundscape::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTriggerSoundscape::GetEntityClassInfo(void)::g_EntityCTriggerSoundscapeClassInfo, CTriggerSoundscape::GetEntityClassInfo(void)::g_EntityCTriggerSoundscapeClassInfo, `guard variable for'CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo (9 total)
CEntityClass *__cdecl CTriggerSoundscape::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass) != 0 )
  {
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_designerName.u.m_Id = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass._vptr_CEntityClass = off_3F79390;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_ComponentOffsets.m_Size = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_AllHelpers.m_Size = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_instanceUnserializer.m_atomicFields,
      4);
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_classInputs.m_Size = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_classInputs.m_Memory.m_pMemory = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_classOutputs.m_Size = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_requiredEHandle.m_Index = -1;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_hNetworkSerializer = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_pBaseClassInfo = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_pClassInfo = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_flags = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_nAllHelpersFlags = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_pScriptClassDesc = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_pInputs = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_nInputCount = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_pOutputs = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_nOutputCount = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_pGameClass = 0;
    CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass._vptr_CEntityClass = off_40ADC30;
    __cxa_guard_release(&`guard variable for'CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass);
    __cxa_atexit(
      CTriggerSoundscape::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass,
      &_dso_handle);
  }
  if ( g_pEntityCTriggerSoundscapeClass != 0 )
    return &CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass;
  if ( `guard variable for'CTriggerSoundscape::GetEntityClassInfo(void)::g_EntityCTriggerSoundscapeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerSoundscape::GetEntityClassInfo(void)::g_EntityCTriggerSoundscapeClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo) != 0 )
    {
      EntityClassInfo = CBaseToggle::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo,
        "CBaseTrigger",
        "trigger",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTriggerSoundscape::GetEntityClassInfo(void)::g_EntityCTriggerSoundscapeClassInfo,
      "CTriggerSoundscape",
      "trigger_soundscape",
      0,
      &CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo);
    __cxa_guard_release(&`guard variable for'CTriggerSoundscape::GetEntityClassInfo(void)::g_EntityCTriggerSoundscapeClassInfo);
  }
  CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_pClassInfo = &CTriggerSoundscape::GetEntityClassInfo(void)::g_EntityCTriggerSoundscapeClassInfo;
  CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_pBaseClassInfo = CTriggerSoundscape::GetEntityClassInfo(void)::g_EntityCTriggerSoundscapeClassInfo.m_pBaseClassInfo;
  g_pEntityCTriggerSoundscapeClass = &CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass;
  CTriggerSoundscape::GetEntityClassInfo(void)::g_EntityCTriggerSoundscapeClassInfo.m_pClass = &CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass;
  CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass.m_pScriptClassDesc = CBaseTrigger::InitScriptDesc();
  g_pEntityCTriggerSoundscapeClass->m_pComponentOverrides = 0;
  return &CTriggerSoundscape::GetEntityClassInternal(void)::g_EntityCTriggerSoundscapeClass;
}


// CTriggerSoundscape::GetDataDescMap  (line 494, @0x00000000023810c0, libserver.so)
// globals: CTriggerSoundscape::m_DataMap
datamap_t *__fastcall CTriggerSoundscape::GetDataDescMap(CTriggerSoundscape *const this)
{
  return &CTriggerSoundscape::m_DataMap;
}


// CTriggerSoundscape::AddDatadescMetadataKeys  (line 494, @0x0000000002397a30, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CTriggerSoundscape::GetEntityClass(void)
void __fastcall CTriggerSoundscape::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CTriggerSoundscape::GetEntityClass);
}


// CTriggerSoundscape::GetBaseMap  (line 494, @0x0000000002397a50, libserver.so)
datamap_t *__cdecl CTriggerSoundscape::GetBaseMap()
{
  return &CBaseTrigger::m_DataMap;
}


// DataMapInit<CTriggerSoundscape>  (line 494, @0x000000000239f550, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorDataOps, CopyConstruct<char*>, Element, GenerateName, GetDataOps<CUtlVector<CHandle<CBasePlayer> > >, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "CTriggerSoundscape"
// globals: `guard variable for'DataMapInit<CTriggerSoundscape>(CTriggerSoundscape *)::nameHolder, `guard variable for'DataMapInit<CTriggerSoundscape>(CTriggerSoundscape *)::dataDesc, CTriggerSoundscape::GetEntityClass(void), CTriggerSoundscape::m_DataMap, DataMapInit<CTriggerSoundscape>(CTriggerSoundscape *)::nameHolder, `guard variable for'CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int>>>(CUtlVector<CHandle<CBas, CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int>>>(CUtlVector<CHandle<CBasePlayer>,CUtlMemory<, __dso_handle (9 total)
datamap_t *__fastcall DataMapInit<CTriggerSoundscape>(CTriggerSoundscape *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CTriggerSoundscape>(CTriggerSoundscape *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTriggerSoundscape>(CTriggerSoundscape *)::nameHolder) != 0 )
  {
    DataMapInit<CTriggerSoundscape>(CTriggerSoundscape *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CTriggerSoundscape>(CTriggerSoundscape *)::nameHolder.m_pszBase = "CTriggerSoundscape";
    DataMapInit<CTriggerSoundscape>(CTriggerSoundscape *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CTriggerSoundscape>(CTriggerSoundscape *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CTriggerSoundscape>(CTriggerSoundscape *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CTriggerSoundscape>(CTriggerSoundscape *)::nameHolder.m_nLenBase = 18;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTriggerSoundscape>(CTriggerSoundscape *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CTriggerSoundscape>(CTriggerSoundscape *)::nameHolder,
      &_dso_handle);
  }
  CTriggerSoundscape::m_DataMap.baseMap = &CBaseTrigger::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CTriggerSoundscape>(CTriggerSoundscape *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTriggerSoundscape>(CTriggerSoundscape *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CTriggerSoundscape>(CTriggerSoundscape *)::nameHolder.m_nLenBase + 18);
    strcpy(stpcpy(v2, DataMapInit<CTriggerSoundscape>(CTriggerSoundscape *)::nameHolder.m_pszBase), "PlayerUpdateThink");
    m_Size = DataMapInit<CTriggerSoundscape>(CTriggerSoundscape *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CTriggerSoundscape>(CTriggerSoundscape *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CTriggerSoundscape>(CTriggerSoundscape *)::nameHolder.m_Names.m_Size == DataMapInit<CTriggerSoundscape>(CTriggerSoundscape *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(
        &DataMapInit<CTriggerSoundscape>(CTriggerSoundscape *)::nameHolder.m_Names.m_Memory,
        1);
      v4 = DataMapInit<CTriggerSoundscape>(CTriggerSoundscape *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CTriggerSoundscape>(CTriggerSoundscape *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CTriggerSoundscape>(CTriggerSoundscape *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CTriggerSoundscape>(CTriggerSoundscape *)::dataDesc[1].fieldName = v2;
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int>>>(CUtlVector<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int>> *)::ops == 0
      && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int>>>(CUtlVector<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int>> *)::ops) != 0 )
    {
      CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int>>>(CUtlVector<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int>> *)::ops = off_40AE7D0;
      __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int>>>(CUtlVector<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int>> *)::ops);
    }
    DataMapInit<CTriggerSoundscape>(CTriggerSoundscape *)::dataDesc[4].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int>>>(CUtlVector<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int>> *)::ops;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTriggerSoundscape>(CTriggerSoundscape *)::dataDesc);
  }
  CTriggerSoundscape::m_DataMap.dataNumFields = 4;
  CTriggerSoundscape::m_DataMap.dataDesc = &DataMapInit<CTriggerSoundscape>(CTriggerSoundscape *)::dataDesc[1];
  AddDatadescMetadataKeys(&CTriggerSoundscape::m_DataMap, CTriggerSoundscape::GetEntityClass);
  return &CTriggerSoundscape::m_DataMap;
}


// CTriggerSoundscape::CTriggerSoundscape  (line 502, @0x000000000239a190, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase
// calls: CBaseTrigger::CBaseTrigger
// callers: CTriggerSoundscape::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CTriggerSoundscape::CTriggerSoundscape(CTriggerSoundscape *const this)
{
  CBaseTrigger::CBaseTrigger(this);
  this->m_hSoundscape.m_Index = -1;
  this->_vptr_IHandleEntity = &off_40ADCB0;
  this->m_SoundscapeName.u.m_Id = 0;
  this->m_spectators.m_Size = 0;
  this->m_spectators.m_Memory.m_pMemory = 0;
  this->m_spectators.m_Memory.m_nAllocationCount = 0;
  this->m_spectators.m_Memory.m_nGrowSize = 0;
}


// CTriggerSoundscape::StartTouch  (line 507, @0x00000000023a4460, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsValid, LookupEntity, operator bool
// calls: CBaseTrigger::StartTouch, CEnvSoundscapeTriggerable::DelegateStartTouch
// globals: CEntityHandle::gm_pEntityList
void __fastcall CTriggerSoundscape::StartTouch(CTriggerSoundscape *const this, CBaseEntity *pOther)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx

  m_Index = this->m_hSoundscape.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hSoundscape.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[this->m_hSoundscape.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        CEnvSoundscapeTriggerable::DelegateStartTouch(v6->m_pInstance, pOther);
    }
  }
  CBaseTrigger::StartTouch(this, pOther);
}


// CTriggerSoundscape::EndTouch  (line 516, @0x000000000239ed60, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsValid, LookupEntity, operator bool
// calls: CBaseTrigger::EndTouch, CEnvSoundscapeTriggerable::DelegateEndTouch
// globals: CEntityHandle::gm_pEntityList
void __fastcall CTriggerSoundscape::EndTouch(CTriggerSoundscape *const this, CBaseEntity *pOther)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx

  m_Index = this->m_hSoundscape.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hSoundscape.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[this->m_hSoundscape.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        CEnvSoundscapeTriggerable::DelegateEndTouch(v6->m_pInstance, pOther);
    }
  }
  CBaseTrigger::EndTouch(this, pOther);
}


// CTriggerSoundscape::Spawn  (line 525, @0x0000000002383c10, libserver.so)  // inlines: curtime
// calls: CBaseTrigger::Spawn, CBaseTrigger::InitTrigger, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// globals: CTriggerSoundscape::PlayerUpdateThink(void)
void __fastcall CTriggerSoundscape::Spawn(CTriggerSoundscape *const this, const CEntityKeyValues *pKeyValues)
{
  double v4; // xmm1_8
  CGlobalVars *v5; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CBaseTrigger::Spawn(this, pKeyValues);
  CBaseTrigger::InitTrigger(this, pKeyValues);
  CBaseEntity::ThinkSet(this, CTriggerSoundscape::PlayerUpdateThink, 0.0, 0, 0);
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    CBaseEntity::SetNextThink(this, v5->m_flCurrentTime + 0.2, v4, 0);
  }
  else
  {
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(1045220557), v4, 0);
  }
}


// CTriggerSoundscape::Activate  (line 535, @0x0000000002381630, libserver.so)  // inlines: CUtlSymbolLarge, GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// calls: CGameEntitySystem::FindEntityByName, __dynamic_cast, CBaseTrigger::Activate
// globals: `typeinfo for'CEnvSoundscapeTriggerable
void __fastcall CTriggerSoundscape::Activate(CTriggerSoundscape *const this, ActivateType_t activateType)
{
  CBaseEntity *EntityByName; // rax
  _QWORD *v5; // rax
  __int64 v6; // rdx
  int v7; // eax
  __int16 v8; // cx
  string_t iszName; // [rsp+10h] [rbp-20h] BYREF

  iszName.u.m_Id = this->m_SoundscapeName.u.m_Id;
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
  if ( EntityByName != 0
    && (v5 = __dynamic_cast(EntityByName, &`typeinfo for'CBaseEntity, &`typeinfo for'CEnvSoundscapeTriggerable, 0)) != 0
    && (v6 = v5[1]) != 0 )
  {
    v7 = (*(v6 + 16) >> 15) - (*(v6 + 48) & 1);
    if ( *(v6 + 16) == -1 )
      v8 = 0x7FFF;
    else
      v8 = *(v6 + 16) & 0x7FFF;
    LOWORD(this->m_hSoundscape.m_Index) = v8 | this->m_hSoundscape.m_Index & 0x8000;
    this->m_hSoundscape.m_Index = (v7 << 15) | this->m_hSoundscape.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hSoundscape.m_Index = -1;
  }
  CBaseTrigger::Activate(this, activateType);
}


// CTriggerSoundscape::PlayerUpdateThink  (line 543, @0x00000000023a44e0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBasePlayer> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GrowMemory, HasElement, IndexToIdentity, IsValid, LookupEntity, Purge, Set, operator CBasePlayer*, operator CEntityInstance*, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CGlobalVarsBase::curtime, CBaseEntity::SetNextThink, CUtlVectorBase<CHandle<CBasePlayer>, CUtlMemory<CHandle<CBasePlayer>, int> >::SetCount, CUtlVectorBase<CHandle<CBasePlayer>, CUtlMemory<CHandle<CBasePlayer>, int> >::RemoveAll, UTIL_PlayerByIndex, CBaseEntity::Intersects, CUtlVectorBase<CHandle<CBasePlayer>, CUtlMemory<CHandle<CBasePlayer>, int> >::Find, CUtlMemory<CHandle<CBasePlayer>, int>::Grow, CUtlMemory<CHandle<CBasePlayer>, int>::Purge, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CTriggerSoundscape::PlayerUpdateThink(CTriggerSoundscape *const this)
{
  CUtlVector<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int> > *p_m_spectators; // r14
  float v3; // xmm0_4
  double v4; // xmm1_8
  int m_Size; // ebx
  unsigned __int64 v6; // rax
  int v7; // ebx
  CBasePlayer *v8; // rax
  CBaseEntity *v9; // r12
  CEntityIdentity *m_pEntity; // rdx
  __int16 v11; // si
  int v12; // eax
  int v13; // eax
  CEntityIdentity *v14; // rdx
  int v15; // eax
  __int16 v16; // cx
  __int64 v17; // r12
  int v18; // eax
  CHandle<CBasePlayer> *v19; // rax
  __int64 i; // rbx
  CHandle<CBasePlayer> *v21; // rdx
  uint32 m_Index; // eax
  __int16 v23; // cx
  CEntityIdentity *v24; // rdx
  CEntityIdentity *v25; // rdx
  CEntityInstance *m_pInstance; // r12
  CEntityIdentity *v27; // rax
  int v28; // edx
  __int16 v29; // cx
  CEntityIdentity *v30; // [rsp+18h] [rbp-68h]
  CHandle<CBasePlayer> v31; // [rsp+20h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int> > oldSpectators; // [rsp+30h] [rbp-50h] BYREF

  p_m_spectators = &this->m_spectators;
  v3 = CGlobalVarsBase::curtime(gpGlobals, 0);
  CBaseEntity::SetNextThink(this, v3 + 0.2, v4, 0);
  oldSpectators.m_Size = 0;
  oldSpectators.m_Memory.m_pMemory = 0;
  oldSpectators.m_Memory.m_nAllocationCount = 0;
  oldSpectators.m_Memory.m_nGrowSize = 0;
  if ( p_m_spectators != &oldSpectators )
  {
    m_Size = this->m_spectators.m_Size;
    CUtlVectorBase<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int>>::SetCount(&oldSpectators, m_Size);
    if ( m_Size > 0 )
    {
      v6 = 0;
      do
      {
        oldSpectators.m_Memory.m_pMemory[v6 / 4].m_Index = this->m_spectators.m_Memory.m_pMemory[v6 / 4].m_Index;
        v6 += 4LL;
      }
      while ( v6 != 4LL * (m_Size - 1) + 4 );
    }
  }
  CUtlVectorBase<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int>>::RemoveAll(p_m_spectators);
  if ( gpGlobals->maxClients > 0 )
  {
    v7 = 1;
    do
    {
      while ( 1 )
      {
        v8 = UTIL_PlayerByIndex(v7);
        v9 = v8;
        if ( v8 != 0 && (*(v8->_vptr_IHandleEntity + 139))(v8) == 0 && CBaseEntity::Intersects(this, v9) )
        {
          v31.m_Index = -1;
          m_pEntity = v9->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v11 = 0x7FFF;
            v12 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(v31.m_Index) = v11 | v31.m_Index & 0x8000;
            v31.m_Index = (v12 << 15) | v31.m_Index & 0x7FFF;
          }
          v30 = m_pEntity;
          v13 = CUtlVectorBase<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int>>::Find(&oldSpectators, &v31);
          v14 = v30;
          if ( v13 < 0 )
          {
            (*(this->_vptr_IHandleEntity + 111))(this, v9, v30);
            v14 = v9->m_pEntity;
          }
          v31.m_Index = -1;
          if ( v14 != 0 )
          {
            v15 = (v14->m_EHandle.m_Index >> 15) - (v14->m_flags & 1);
            v16 = 0x7FFF;
            if ( v14->m_EHandle.m_Index != -1 )
              v16 = v14->m_EHandle.m_Index & 0x7FFF;
            LOWORD(v31.m_Index) = v16 | v31.m_Index & 0x8000;
            v31.m_Index = (v15 << 15) | v31.m_Index & 0x7FFF;
          }
          v17 = this->m_spectators.m_Size;
          v18 = this->m_spectators.m_Size;
          if ( v17 == this->m_spectators.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CHandle<CBasePlayer>,int>::Grow(&this->m_spectators.m_Memory, 1);
            v18 = this->m_spectators.m_Size;
          }
          this->m_spectators.m_Size = v18 + 1;
          v19 = &this->m_spectators.m_Memory.m_pMemory[v17];
          if ( v19 != 0 )
            break;
        }
        if ( gpGlobals->maxClients < ++v7 )
          goto LABEL_25;
      }
      ++v7;
      v19->m_Index = v31.m_Index;
    }
    while ( gpGlobals->maxClients >= v7 );
  }
LABEL_25:
  for ( i = 0; oldSpectators.m_Size > i; ++i )
  {
    while ( 1 )
    {
      v21 = &oldSpectators.m_Memory.m_pMemory[i];
      m_Index = v21->m_Index;
      if ( v21->m_Index + 2 > 1 )
      {
        v23 = v21->m_Index;
        v24 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v21->m_Index) >> 9) & 0x3F];
        if ( v24 != 0 )
        {
          v25 = &v24[v23 & 0x1FF];
          if ( v25 != 0 && m_Index == v25->m_EHandle.m_Index )
          {
            m_pInstance = v25->m_pInstance;
            if ( v25->m_pInstance != 0 )
            {
              v31.m_Index = -1;
              v27 = m_pInstance->m_pEntity;
              if ( v27 != 0 )
              {
                v28 = (v27->m_EHandle.m_Index >> 15) - (v27->m_flags & 1);
                v29 = 0x7FFF;
                if ( v27->m_EHandle.m_Index != -1 )
                  v29 = v27->m_EHandle.m_Index & 0x7FFF;
                LOWORD(v31.m_Index) = v29 | v31.m_Index & 0x8000;
                v31.m_Index = (v28 << 15) | v31.m_Index & 0x7FFF;
              }
              if ( CUtlVectorBase<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int>>::Find(p_m_spectators, &v31) < 0 )
                break;
            }
          }
        }
      }
      if ( oldSpectators.m_Size <= ++i )
        goto LABEL_39;
    }
    (*(this->_vptr_IHandleEntity + 113))(this, m_pInstance);
  }
LABEL_39:
  CUtlVectorBase<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int>>::RemoveAll(&oldSpectators);
  if ( (oldSpectators.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBasePlayer>,int>::Purge(&oldSpectators.m_Memory);
    if ( (oldSpectators.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBasePlayer>,int>::Purge(&oldSpectators.m_Memory);
  }
}


