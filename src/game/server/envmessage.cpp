// Reconstructed from DWARF by pahole; not original source.

// src/game/server/envmessage.cpp:153
class CCredits : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;

	COutputEvent m_OnCreditsDone;  // +0x308
	bool m_bRolledOutroCredits;  // +0x320

	float m_flLogoLength;  // +0x324
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
	CCredits(CCredits &);
	CCredits(CCredits &);
	CCredits();
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
	void InputRollCredits(inputdata_t &);
	void InputRollOutroCredits(inputdata_t &);
	void InputShowLogo(inputdata_t &);
	void InputSetLogoLength(inputdata_t &);
	virtual void OnRestore();
	void RollOutroCredits();
	virtual ~CCredits();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[18] OnRestore
	// sizeof = 808
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CMessage::GetDataDescMap  (line 23, @0x00000000021ee5c0, libserver.so)
// globals: CMessage::m_DataMap
datamap_t *__fastcall CMessage::GetDataDescMap(CMessage *const this)
{
  return &CMessage::m_DataMap;
}


// CMessage::AddDatadescMetadataKeys  (line 23, @0x00000000021f92c0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CMessage::GetEntityClass(void)
void __fastcall CMessage::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CMessage::GetEntityClass);
}


// CMessage::GetBaseMap  (line 23, @0x00000000021f92e0, libserver.so)
datamap_t *__cdecl CMessage::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CMessage>  (line 23, @0x00000000021f92f0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CMessage"
// globals: `guard variable for'DataMapInit<CMessage>(CMessage *)::nameHolder, `guard variable for'DataMapInit<CMessage>(CMessage *)::dataDesc, CMessage::GetEntityClass(void), CMessage::m_DataMap, DataMapInit<CMessage>(CMessage *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CMessage>(CMessage *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CMessage>(CMessage *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CMessage>(CMessage *)::nameHolder) != 0 )
  {
    DataMapInit<CMessage>(CMessage *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CMessage>(CMessage *)::nameHolder.m_pszBase = "CMessage";
    DataMapInit<CMessage>(CMessage *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CMessage>(CMessage *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CMessage>(CMessage *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CMessage>(CMessage *)::nameHolder.m_nLenBase = 8;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CMessage>(CMessage *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CMessage>(CMessage *)::nameHolder,
      &_dso_handle);
  }
  CMessage::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CMessage>(CMessage *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CMessage>(CMessage *)::dataDesc) != 0 )
  {
    DataMapInit<CMessage>(CMessage *)::dataDesc[7].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CMessage>(CMessage *)::dataDesc);
  }
  CMessage::m_DataMap.dataNumFields = 7;
  CMessage::m_DataMap.dataDesc = &DataMapInit<CMessage>(CMessage *)::dataDesc[1];
  AddDatadescMetadataKeys(&CMessage::m_DataMap, CMessage::GetEntityClass);
  return &CMessage::m_DataMap;
}


// CMessage::Spawn  (line 43, @0x00000000021ef310, libserver.so)
// calls: CPointEntity::Spawn, CBaseEntity::SetMoveType
void __fastcall CMessage::Spawn(CMessage *const this, const CEntityKeyValues *pKeyValues)
{
  int m_MessageAttenuation; // eax
  __m128 m_MessageVolume_low; // xmm0
  __m128d v5; // xmm0
  __m128 v6; // xmm2
  __m128 v7; // rt1
  __m128 v8; // xmm0

  CPointEntity::Spawn(this, pKeyValues);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  m_MessageAttenuation = this->m_MessageAttenuation;
  switch ( m_MessageAttenuation )
  {
    case 2:
      this->m_Radius = 0.80000001;
      break;
    case 3:
      this->m_Radius = 0.0;
      break;
    case 1:
      this->m_Radius = 1.25;
      break;
    default:
      this->m_Radius = 60.0;
      break;
  }
  m_MessageVolume_low = LODWORD(this->m_MessageVolume);
  this->m_MessageAttenuation = 0;
  v5 = _mm_cvtps_pd(m_MessageVolume_low);
  v5.m128d_f64[0] = v5.m128d_f64[0] * 0.1;
  v6 = _mm_cvtpd_ps(_mm_movedup_pd(v5));
  v7.m128_i32[0] = 0;
  v8 = _mm_cmple_ss(v6, v7);
  LODWORD(this->m_MessageVolume) = _mm_andnot_ps(v8, v6).m128_u32[0] | v8.m128_i32[0] & 0x3F800000;
}


// CMessage::Precache  (line 81, @0x000000000220d3a0, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheScriptSound
void __fastcall CMessage::Precache(CMessage *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  if ( this->m_sNoise.u.m_Id != 0 )
    CBaseEntity::PrecacheScriptSound(this->m_sNoise.u.m_pAsString, pContext);
}


// CMessage::InputShowMessage  (line 94, @0x0000000002203d90, libserver.so)  // inlines: CEntityIndex, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, EmitSound_t, FireOutput, Free, Purge, RemoveAll, SetSoundName, SoundEventGuid_t, String, ToBasePlayer, ToCStr, entindex, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase, ~EmitSound_t
// calls: UTIL_ShowMessageAll, UTIL_Remove, CEntityIOOutput::FireOutputInternal, UTIL_ShowMessage, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, CRecipientFilter::~CRecipientFilter, UTIL_GetLocalPlayer, CUtlMemory<Vector, int>::Purge (16 total)
// callers: CMessage::Use
void __fastcall CMessage::InputShowMessage(CMessage *const this, inputdata_t *const inputdata)
{
  const char *m_pAsString; // rdi
  CBaseEntity *v5; // rsi
  CBasePlayer *pActivator; // r12
  char v7; // al
  const char *v8; // rdi
  CBasePlayer *v9; // rsi
  int v10; // xmm1_4
  float v11; // xmm1_4
  bool v12; // zf
  const char *v13; // rax
  float m_Radius; // xmm1_4
  soundlevel_t v15; // eax
  CEntityIndex v16; // eax
  EmitSound_t ep; // [rsp+0h] [rbp-1D0h] BYREF
  CPASAttenuationFilter filter; // [rsp+60h] [rbp-170h] BYREF
  unsigned __int64 v19; // [rsp+198h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  if ( (this->m_spawnflags.m_Value & 2) != 0 )
  {
    m_pAsString = "";
    if ( this->m_iszMessage.u.m_Id != 0 )
      m_pAsString = this->m_iszMessage.u.m_pAsString;
    UTIL_ShowMessageAll(m_pAsString);
    goto LABEL_5;
  }
  if ( inputdata->pActivator != 0 && (*(inputdata->pActivator->_vptr_IHandleEntity + 140))(inputdata->pActivator) != 0 )
  {
    pActivator = inputdata->pActivator;
  }
  else
  {
    if ( gpGlobals->maxClients > 1 )
      goto LABEL_5;
    pActivator = UTIL_GetLocalPlayer();
  }
  if ( pActivator == 0 || (*(pActivator->_vptr_IHandleEntity + 140))(pActivator) == 0 )
  {
LABEL_5:
    if ( this->m_sNoise.u.m_Id == 0 )
      goto LABEL_6;
    goto LABEL_21;
  }
  v7 = (*(pActivator->_vptr_IHandleEntity + 140))(pActivator);
  v8 = "";
  v9 = 0;
  if ( v7 != 0 )
    v9 = pActivator;
  if ( this->m_iszMessage.u.m_Id != 0 )
    v8 = this->m_iszMessage.u.m_pAsString;
  UTIL_ShowMessage(v8, v9);
  if ( this->m_sNoise.u.m_Id != 0 )
  {
LABEL_21:
    *&ep.m_nChannel = (*(this->_vptr_IHandleEntity + 186))(this);
    LODWORD(ep.m_pSoundName) = v10;
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::AddRecipientsByPAS(&filter, &ep);
    filter._vptr_IRecipientFilter = &off_3FECD70;
    *&ep.m_nChannel = (*(this->_vptr_IHandleEntity + 186))(this);
    *&ep.m_pSoundName = v11;
    CPASAttenuationFilter::Filter(&filter, &ep, 0.80000001, v11);
    v12 = this->m_sNoise.u.m_Id == 0;
    ep.m_nFlags = 0;
    v13 = "";
    ep.m_nPitch = 100;
    ep.m_pOrigin = 0;
    ep.m_flSoundTime = 0.0;
    ep.m_pflSoundDuration = 0;
    ep.m_bEmitCloseCaption = 1;
    ep.m_bWarnOnMissingCloseCaption = 0;
    ep.m_bWarnOnDirectWaveReference = 0;
    ep.m_nSpeakerEntity.m_Data = -1;
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
    ep.m_nChannel = 4;
    if ( !v12 )
      v13 = this->m_sNoise.u.m_pAsString;
    m_Radius = this->m_Radius;
    ep.m_pSoundName = v13;
    ep.m_flVolume = this->m_MessageVolume;
    if ( m_Radius == 0.0 )
      v15 = soundlevel_t::SNDLVL_NONE;
    else
      v15 = ((20.0 / m_Radius) + 50.0);
    ep.m_SoundLevel = v15;
    v16.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    CBaseEntity::EmitSound(&filter, v16, &ep);
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
      if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
    }
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
LABEL_6:
  if ( (this->m_spawnflags.m_Value & 1) != 0 )
    UTIL_Remove(this);
  v5 = inputdata->pActivator;
  LODWORD(ep.m_pSoundName) = 0;
  *&ep.m_nChannel = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnShowMessage, v5, this, &ep, 0.0);
  if ( (BYTE2(ep.m_pSoundName) & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&ep.m_nChannel);
}


// CMessage::Use  (line 141, @0x00000000022041c0, libserver.so)  // inlines: CVariantBase, Free, inputdata_t, ~CVariantBase, ~inputdata_t
// calls: CMessage::InputShowMessage, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CMessage::Use(
        CMessage *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  inputdata_t inputdata; // [rsp+0h] [rbp-40h] BYREF

  memset(&inputdata, 0, 28);
  CMessage::InputShowMessage(this, &inputdata);
  if ( (inputdata.value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, inputdata.value.m_uint64);
}


// CCredits::~CCredits  (line 153, @0x0000000002210730, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CCredits::~CCredits(CCredits *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CCredits::~CCredits  (line 153, @0x0000000002210750, libserver.so)  // inlines: ~CCredits, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CCredits::~CCredits(CCredits *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CCredits::GetEntityClass  (line 155, @0x000000000220df50, libserver.so)
CEntityClass *__cdecl CCredits::GetEntityClass()
{
  return g_pEntityCCreditsClass;
}


// CCredits::Schema_DynamicBinding  (line 155, @0x000000000220df60, libserver.so)
// globals: CCredits::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CCredits::Schema_DynamicBinding(const CCredits *const this)
{
  return CCredits::s_pSchemaBinding;
}


// CCredits::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 155, @0x000000000220df70, libserver.so)
// globals: CCredits::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CCredits::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CCredits::CEntityInstanceEntityClass *const this)
{
  return CCredits::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CCredits::CEntityInstanceEntityClass::DestructInstance  (line 155, @0x000000000220df80, libserver.so)  // inlines: Destruct<CCredits>
void __fastcall CCredits::CEntityInstanceEntityClass::DestructInstance(
        CCredits::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CCredits::CEntityInstanceEntityClass::FreeInstance  (line 155, @0x000000000220dfa0, libserver.so)
void __fastcall CCredits::CEntityInstanceEntityClass::FreeInstance(
        CCredits::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CCredits::CEntityInstanceEntityClass::CanAllocate  (line 155, @0x000000000220dfc0, libserver.so)
bool __fastcall CCredits::CEntityInstanceEntityClass::CanAllocate(
        const CCredits::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CCredits::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 155, @0x000000000220dfd0, libserver.so)
// globals: CCredits::s_pSchemaBinding
const ISchemaBinding *__fastcall CCredits::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CCredits::CEntityInstanceEntityClass *const this)
{
  return CCredits::s_pSchemaBinding;
}


// CCredits::CEntityInstanceEntityClass::AllocateInstance  (line 155, @0x000000000220faa0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CCredits::CEntityInstanceEntityClass::AllocateInstance(
        CCredits::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 808);
  memset(v1, 0, 0x328u);
  return v1;
}


// CCredits::CEntityInstanceEntityClass::ConstructInstance  (line 155, @0x0000000002210000, libserver.so)  // inlines: CCredits, CEntityIOOutput, CPointEntity, Construct<CCredits>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CCredits::CEntityInstanceEntityClass::ConstructInstance(
        CCredits::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_402F2B0;
    *(p + 97) = off_3F7C190;
  }
  return p;
}


// CCredits::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 155, @0x0000000002212350, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CCredits::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CCredits::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CCredits::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 155, @0x0000000002212370, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CCredits::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CCredits::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CCredits::GetEntityClassInternal  (line 155, @0x0000000002215a40, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "env_credits", "CCredits"
// globals: `guard variable for'CCredits::GetEntityClassInternal(void)::g_EntityCCreditsClass, CCredits::GetEntityClassInternal(void)::g_EntityCCreditsClass, __dso_handle, CCredits::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CCredits::GetEntityClassInfo(void)::g_EntityCCreditsClassInfo, CCredits::GetEntityClassInfo(void)::g_EntityCCreditsClassInfo
CEntityClass *__cdecl CCredits::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CCredits::GetEntityClassInternal(void)::g_EntityCCreditsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CCredits::GetEntityClassInternal(void)::g_EntityCCreditsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CCredits::GetEntityClassInternal(void)::g_EntityCCreditsClass);
    CCredits::GetEntityClassInternal(void)::g_EntityCCreditsClass._vptr_CEntityClass = off_402F230;
    __cxa_guard_release(&`guard variable for'CCredits::GetEntityClassInternal(void)::g_EntityCCreditsClass);
    __cxa_atexit(
      CCredits::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CCredits::GetEntityClassInternal(void)::g_EntityCCreditsClass,
      &_dso_handle);
  }
  if ( g_pEntityCCreditsClass != 0 )
    return &CCredits::GetEntityClassInternal(void)::g_EntityCCreditsClass;
  if ( `guard variable for'CCredits::GetEntityClassInfo(void)::g_EntityCCreditsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CCredits::GetEntityClassInfo(void)::g_EntityCCreditsClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CCredits::GetEntityClassInfo(void)::g_EntityCCreditsClassInfo,
      "CCredits",
      "env_credits",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CCredits::GetEntityClassInfo(void)::g_EntityCCreditsClassInfo);
  }
  CCredits::GetEntityClassInternal(void)::g_EntityCCreditsClass.m_pClassInfo = &CCredits::GetEntityClassInfo(void)::g_EntityCCreditsClassInfo;
  CCredits::GetEntityClassInternal(void)::g_EntityCCreditsClass.m_pBaseClassInfo = CCredits::GetEntityClassInfo(void)::g_EntityCCreditsClassInfo.m_pBaseClassInfo;
  g_pEntityCCreditsClass = &CCredits::GetEntityClassInternal(void)::g_EntityCCreditsClass;
  CCredits::GetEntityClassInfo(void)::g_EntityCCreditsClassInfo.m_pClass = &CCredits::GetEntityClassInternal(void)::g_EntityCCreditsClass;
  CCredits::GetEntityClassInternal(void)::g_EntityCCreditsClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCCreditsClass->m_pComponentOverrides = 0;
  return &CCredits::GetEntityClassInternal(void)::g_EntityCCreditsClass;
}


// CCredits::GetDataDescMap  (line 176, @0x00000000021ee5d0, libserver.so)
// globals: CCredits::m_DataMap
datamap_t *__fastcall CCredits::GetDataDescMap(CCredits *const this)
{
  return &CCredits::m_DataMap;
}


// CCredits::AddDatadescMetadataKeys  (line 176, @0x00000000021f9410, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CCredits::GetEntityClass(void)
void __fastcall CCredits::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CCredits::GetEntityClass);
}


// CCredits::GetBaseMap  (line 176, @0x00000000021f9430, libserver.so)
datamap_t *__cdecl CCredits::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CCredits>  (line 176, @0x00000000021f9440, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CCredits"
// globals: `guard variable for'DataMapInit<CCredits>(CCredits *)::nameHolder, `guard variable for'DataMapInit<CCredits>(CCredits *)::dataDesc, CCredits::GetEntityClass(void), CCredits::m_DataMap, DataMapInit<CCredits>(CCredits *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CCredits>(CCredits *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CCredits>(CCredits *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CCredits>(CCredits *)::nameHolder) != 0 )
  {
    DataMapInit<CCredits>(CCredits *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CCredits>(CCredits *)::nameHolder.m_pszBase = "CCredits";
    DataMapInit<CCredits>(CCredits *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CCredits>(CCredits *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CCredits>(CCredits *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CCredits>(CCredits *)::nameHolder.m_nLenBase = 8;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CCredits>(CCredits *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CCredits>(CCredits *)::nameHolder,
      &_dso_handle);
  }
  CCredits::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CCredits>(CCredits *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CCredits>(CCredits *)::dataDesc) != 0 )
  {
    DataMapInit<CCredits>(CCredits *)::dataDesc[5].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CCredits>(CCredits *)::dataDesc);
  }
  CCredits::m_DataMap.dataNumFields = 7;
  CCredits::m_DataMap.dataDesc = &DataMapInit<CCredits>(CCredits *)::dataDesc[1];
  AddDatadescMetadataKeys(&CCredits::m_DataMap, CCredits::GetEntityClass);
  return &CCredits::m_DataMap;
}


// CCredits::Spawn  (line 187, @0x00000000021ef3e0, libserver.so)
// calls: CPointEntity::Spawn, CBaseEntity::SetMoveType
void __fastcall CCredits::Spawn(CCredits *const this, const CEntityKeyValues *pKeyValues)
{
  CPointEntity::Spawn(this, pKeyValues);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
}


// CreditsDone_f  (line 196, @0x0000000002203550, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CGameEntitySystem::FindEntityByClassname, CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "env_credits"
void __cdecl CreditsDone_f()
{
  CBaseEntity *EntityByClassname; // rax
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, 0, "env_credits");
  if ( EntityByClassname != 0 )
  {
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&EntityByClassname[1], EntityByClassname, EntityByClassname, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  }
}


// CCredits::OnRestore  (line 212, @0x00000000021efc10, libserver.so)  // inlines: RollOutroCredits
// calls: CBaseEntity::OnRestore, ConVar::SetValue
void __fastcall CCredits::OnRestore(CCredits *const this)
{
  CBaseEntity::OnRestore(this);
  if ( this->m_bRolledOutroCredits )
    ConVar::SetValue(&sv_unlockedchapters, "15");
}


// CCredits::RollOutroCredits  (line 224, @0x00000000021f9560, libserver.so)
// calls: ConVar::SetValue
void __fastcall CCredits::RollOutroCredits(CCredits *const this)
{
  ConVar::SetValue(&sv_unlockedchapters, "15");
}


// CCredits::InputRollOutroCredits  (line 240, @0x00000000021ef470, libserver.so)  // inlines: RollOutroCredits
// calls: ConVar::SetValue
void __fastcall CCredits::InputRollOutroCredits(CCredits *const this, inputdata_t *const inputdata)
{
  ConVar::SetValue(&sv_unlockedchapters, "15");
  this->m_bRolledOutroCredits = 1;
  (*(gamestats->_vptr_CBaseGameStats + 24))(gamestats);
}


// CCredits::InputShowLogo  (line 250, @0x00000000021ee5e0, libserver.so)
void __fastcall CCredits::InputShowLogo(CCredits *const this, inputdata_t *const inputdata)
{
  ;
}


// CCredits::InputSetLogoLength  (line 268, @0x00000000021ee5f0, libserver.so)  // inlines: Float, operator float
void __fastcall CCredits::InputSetLogoLength(CCredits *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  this->m_flLogoLength = m_float64;
}


// CCredits::InputRollCredits  (line 273, @0x00000000021ee630, libserver.so)
void __fastcall CCredits::InputRollCredits(CCredits *const this, inputdata_t *const inputdata)
{
  ;
}


