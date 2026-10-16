// Reconstructed from DWARF by pahole; not original source.

// src/game/server/soundent.cpp:794
class CAISound : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;

	int m_iSoundType;  // +0x308
	int m_iSoundContext;  // +0x30c
	int m_iVolume;  // +0x310
	int m_iSoundIndex;  // +0x314
	float m_flDuration;  // +0x318

	string_t m_iszProxyEntityName;  // +0x320
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
	CAISound(CAISound &);
	CAISound(CAISound &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CAISound();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	void InputInsertSound(inputdata_t &);
	void InputEmitAISound(inputdata_t &);
	void InputStopAISound(inputdata_t &);
	virtual ~CAISound();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// sizeof = 808
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSoundEnt::CEntityInstanceEntityClass::InitOptionalTables  (line 24, @0x00000000023a0af0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, GetEntityClassInternal, SetClassInfo, SetFlag, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CSoundEnt::SetupEntClassInputs, CSoundEnt::SetupEntClassComponentOverrides, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort (13 total)
// strings: "soundent", "CSoundEnt"
// globals: `guard variable for'CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass, CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CSoundEnt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CSoundEnt::GetEntityClassInfo(void)::g_EntityCSoundEntClassInfo, CSoundEnt::GetEntityClassInfo(void)::g_EntityCSoundEntClassInfo
bool __cdecl CSoundEnt::CEntityInstanceEntityClass::InitOptionalTables()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass == 0
    && __cxa_guard_acquire(&`guard variable for'CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass) != 0 )
  {
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_designerName.u.m_Id = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass._vptr_CEntityClass = off_3F79390;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_ComponentOffsets.m_Size = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_AllHelpers.m_Size = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_instanceUnserializer.m_atomicFields,
      4);
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_classInputs.m_Size = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_classInputs.m_Memory.m_pMemory = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_classOutputs.m_Size = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_requiredEHandle.m_Index = -1;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_hNetworkSerializer = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_pBaseClassInfo = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_pClassInfo = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_flags = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_nAllHelpersFlags = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_pScriptClassDesc = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_pInputs = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_nInputCount = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_pOutputs = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_nOutputCount = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_pGameClass = 0;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass._vptr_CEntityClass = off_3FDE5B0;
    __cxa_guard_release(&`guard variable for'CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass);
    __cxa_atexit(
      CSoundEnt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass,
      &_dso_handle);
  }
  if ( g_pEntityCSoundEntClass == 0 )
  {
    if ( `guard variable for'CSoundEnt::GetEntityClassInfo(void)::g_EntityCSoundEntClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CSoundEnt::GetEntityClassInfo(void)::g_EntityCSoundEntClassInfo) != 0 )
    {
      EntityClassInfo = CPointEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CSoundEnt::GetEntityClassInfo(void)::g_EntityCSoundEntClassInfo,
        "CSoundEnt",
        "soundent",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CSoundEnt::GetEntityClassInfo(void)::g_EntityCSoundEntClassInfo);
    }
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_pClassInfo = &CSoundEnt::GetEntityClassInfo(void)::g_EntityCSoundEntClassInfo;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_pBaseClassInfo = CSoundEnt::GetEntityClassInfo(void)::g_EntityCSoundEntClassInfo.m_pBaseClassInfo;
    g_pEntityCSoundEntClass = &CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass;
    CSoundEnt::GetEntityClassInfo(void)::g_EntityCSoundEntClassInfo.m_pClass = &CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass;
    CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
    CSoundEnt::SetupEntClassInputs(g_pEntityCSoundEntClass);
    CSoundEnt::SetupEntClassComponentOverrides(g_pEntityCSoundEntClass);
  }
  CSoundEnt::GetEntityClassInternal(void)::g_EntityCSoundEntClass.m_flags |= 4u;
  return 1;
}


// CSound::AddDatadescMetadataKeys  (line 30, @0x0000000002392fb0, libserver.so)
void __fastcall CSound::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CSound::GetBaseMap  (line 30, @0x0000000002392fc0, libserver.so)
datamap_t *__cdecl CSound::GetBaseMap()
{
  return 0;
}


// DataMapInit<CSound>  (line 30, @0x0000000002392fd0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "CSound"
// globals: `guard variable for'DataMapInit<CSound>(CSound *)::nameHolder, CSound::m_DataMap, DataMapInit<CSound>(CSound *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CSound>(CSound *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CSound>(CSound *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CSound>(CSound *)::nameHolder) != 0 )
  {
    DataMapInit<CSound>(CSound *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CSound>(CSound *)::nameHolder.m_pszBase = "CSound";
    DataMapInit<CSound>(CSound *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CSound>(CSound *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CSound>(CSound *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CSound>(CSound *)::nameHolder.m_nLenBase = 6;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CSound>(CSound *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CSound>(CSound *)::nameHolder,
      &_dso_handle);
  }
  CSound::m_DataMap.baseMap = 0;
  CSound::m_DataMap.dataDesc = &DataMapInit<CSound>(CSound *)::dataDesc[1];
  CSound::m_DataMap.dataNumFields = 12;
  return &CSound::m_DataMap;
}


// CSound::Clear  (line 54, @0x0000000002393090, libserver.so)  // inlines: operator=
void __fastcall CSound::Clear(CSound *const this)
{
  vec_t x; // xmm0_4

  this->m_iType = 0;
  this->m_iVolume = 0;
  this->m_bNoExpirationTime = 0;
  x = vec3_origin.x;
  this->m_iNext = -1;
  this->m_iNextAudible = -1;
  this->m_vecOrigin.x = x;
  this->m_vecOrigin.y = vec3_origin.y;
  this->m_vecOrigin.z = vec3_origin.z;
  this->m_flOcclusionScale = 0.0;
  this->m_flExpireTime = 0.0;
}


// CSound::Reset  (line 70, @0x00000000023930f0, libserver.so)  // inlines: operator=
// callers: CSource2GameClients::ClientDisconnect, CBasePlayer::Event_Killed
void __fastcall CSound::Reset(CSound *const this)
{
  this->m_iType = 0;
  this->m_iVolume = 0;
  this->m_iNext = -1;
  this->m_vecOrigin = vec3_origin;
}


// CSound::SetDuration  (line 80, @0x0000000002383950, libserver.so)  // inlines: curtime
// callers: CSound::SetDuration, CSoundEnt::UpdateSound, CSoundEnt::InsertSound
void __fastcall CSound::SetDuration(CSound *const this, double a2, float flDuration)
{
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v5; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  int v7; // [rsp-14h] [rbp-1Ch]

  m_flCurrentTime = 0.0;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v7 = LODWORD(a2);
        (m_pfnWarningFunc)(1, a2, 0.0);
        LODWORD(a2) = v7;
      }
    }
    m_flCurrentTime = v5->m_flCurrentTime;
  }
  this->m_bNoExpirationTime = 0;
  this->m_flExpireTime = *&a2 + m_flCurrentTime;
}


// CSound::SetDuration  (line 80, @0x0000000002393140, libserver.so)
// calls: CSound::SetDuration
void __fastcall CSound::SetDuration(CSound *const this, double a2, float flDuration)
{
  if ( *&a2 == 3.4028235e38 )
  {
    this->m_flExpireTime = 3.4028235e38;
    this->m_bNoExpirationTime = 1;
  }
  else
  {
    CSound::SetDuration(this, a2, flDuration);
  }
}


// CSound::FIsSound  (line 98, @0x0000000002393170, libserver.so)  // inlines: SoundTypeNoContext
bool __fastcall CSound::FIsSound(const CSound *const this)
{
  int v1; // eax

  v1 = this->m_iType & 0xFFFFF;
  if ( v1 == 512 )
    return 1;
  if ( (this->m_iType & 0xFFFFFu) <= 0x200 )
  {
    if ( v1 != 4 )
    {
      if ( (this->m_iType & 0xFFFFFu) <= 4 )
        return (v1 - 1) <= 1;
      if ( v1 != 16 && v1 != 256 && v1 != 8 )
        return 0;
    }
    return 1;
  }
  if ( v1 == 4096 )
    return 1;
  if ( (this->m_iType & 0xFFFFFu) > 0x1000 )
    return v1 == 0x20000 || v1 == 0x40000 || v1 == 0x2000;
  return v1 == 1024 || v1 == 2048;
}


// CSound::FIsScent  (line 127, @0x0000000002393210, libserver.so)
bool __fastcall CSound::FIsScent(const CSound *const this)
{
  int m_iType; // eax

  m_iType = this->m_iType;
  return m_iType == 64 || m_iType == 128 || m_iType == 32;
}


// CSound::GetSoundOrigin  (line 145, @0x0000000002393240, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CBaseEntity::GetAbsOrigin
// callers: CEnvMicrophone::CanHearSound, CSound::GetSoundReactOrigin, CSoundEnt::Think, CSoundEnt::GetLoudestSoundOfType
// globals: CEntityHandle::gm_pEntityList
const Vector *__fastcall CSound::GetSoundOrigin(const CSound *const this)
{
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx

  if ( this->m_iType < 0
    && this->m_hOwner.m_Index + 2 > 1
    && (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hOwner.m_Index) >> 9) & 0x3F]) != 0
    && (v3 = &v2[this->m_hOwner.m_Index & 0x1FF]) != 0
    && this->m_hOwner.m_Index == v3->m_EHandle.m_Index
    && v3->m_pInstance != 0 )
  {
    return CBaseEntity::GetAbsOrigin(v3->m_pInstance);
  }
  else
  {
    return &this->m_vecOrigin;
  }
}


// CSound::GetSoundReactOrigin  (line 166, @0x00000000023932b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CSound::GetSoundOrigin
// globals: CEntityHandle::gm_pEntityList
const Vector *__fastcall CSound::GetSoundReactOrigin(const CSound *const this)
{
  int m_iType; // eax
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx
  const CBaseEntity *m_pInstance; // rdi
  CEntityInstance *v6; // rax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx

  m_iType = this->m_iType;
  if ( m_iType == 16 || m_iType == 1024 )
  {
    if ( this->m_hOwner.m_Index + 2 > 1 )
    {
      v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hOwner.m_Index) >> 9) & 0x3F];
      if ( v8 != 0 )
      {
        v9 = &v8[this->m_hOwner.m_Index & 0x1FF];
        if ( v9 != 0 && this->m_hOwner.m_Index == v9->m_EHandle.m_Index )
        {
          m_pInstance = v9->m_pInstance;
          if ( v9->m_pInstance != 0 )
            return CBaseEntity::GetAbsOrigin(m_pInstance);
        }
      }
    }
  }
  else
  {
    if ( (m_iType & 0x1000000) != 0 && this->m_hOwner.m_Index + 2 > 1 )
    {
      v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hOwner.m_Index) >> 9) & 0x3F];
      if ( v3 != 0 )
      {
        v4 = &v3[this->m_hOwner.m_Index & 0x1FF];
        if ( v4 != 0 && this->m_hOwner.m_Index == v4->m_EHandle.m_Index )
        {
          m_pInstance = v4->m_pInstance;
          if ( v4->m_pInstance != 0 )
            return CBaseEntity::GetAbsOrigin(m_pInstance);
        }
      }
    }
    if ( (m_iType & 0x100008) == &off_100008 )
    {
      v6 = CEntityHandle::operator CEntityInstance *(&this->m_hOwner);
      if ( v6 != 0 )
      {
        m_pInstance = v6;
        return CBaseEntity::GetAbsOrigin(m_pInstance);
      }
    }
  }
  return CSound::GetSoundOrigin(this);
}


// CSoundEnt::GetDataDescMap  (line 221, @0x0000000002380fc0, libserver.so)
// globals: CSoundEnt::m_DataMap
datamap_t *__fastcall CSoundEnt::GetDataDescMap(CSoundEnt *const this)
{
  return &CSoundEnt::m_DataMap;
}


// CSoundEnt::AddDatadescMetadataKeys  (line 221, @0x00000000023933c0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CSoundEnt::GetEntityClass(void)
void __fastcall CSoundEnt::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CSoundEnt::GetEntityClass);
}


// CSoundEnt::GetBaseMap  (line 221, @0x00000000023933e0, libserver.so)
datamap_t *__cdecl CSoundEnt::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CSoundEnt>  (line 221, @0x00000000023933f0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "CSoundEnt"
// globals: `guard variable for'DataMapInit<CSoundEnt>(CSoundEnt *)::nameHolder, CSoundEnt::GetEntityClass(void), CSoundEnt::m_DataMap, DataMapInit<CSoundEnt>(CSoundEnt *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CSoundEnt>(CSoundEnt *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CSoundEnt>(CSoundEnt *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CSoundEnt>(CSoundEnt *)::nameHolder) != 0 )
  {
    DataMapInit<CSoundEnt>(CSoundEnt *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CSoundEnt>(CSoundEnt *)::nameHolder.m_pszBase = "CSoundEnt";
    DataMapInit<CSoundEnt>(CSoundEnt *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CSoundEnt>(CSoundEnt *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CSoundEnt>(CSoundEnt *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CSoundEnt>(CSoundEnt *)::nameHolder.m_nLenBase = 9;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CSoundEnt>(CSoundEnt *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CSoundEnt>(CSoundEnt *)::nameHolder,
      &_dso_handle);
  }
  CSoundEnt::m_DataMap.dataNumFields = 4;
  CSoundEnt::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  CSoundEnt::m_DataMap.dataDesc = &DataMapInit<CSoundEnt>(CSoundEnt *)::dataDesc[1];
  AddDatadescMetadataKeys(&CSoundEnt::m_DataMap, CSoundEnt::GetEntityClass);
  return &CSoundEnt::m_DataMap;
}


// CSoundEnt::InitSoundEnt  (line 234, @0x00000000023934c0, libserver.so)
// calls: CBaseEntity::Create, Warning
// callers: CGameRulesGameSystem::GameActivate
// strings: "soundent", "**COULD NOT CREATE SOUNDENT**\n"
// globals: g_pSoundEnt
bool __cdecl CSoundEnt::InitSoundEnt()
{
  bool result; // al

  g_pSoundEnt = CBaseEntity::Create("soundent", &vec3_origin, &vec3_angle, 0);
  result = 1;
  if ( g_pSoundEnt == 0 )
  {
    Warning("**COULD NOT CREATE SOUNDENT**\n");
    return 0;
  }
  return result;
}


// CSoundEnt::ShutdownSoundEnt  (line 246, @0x0000000002393520, libserver.so)
// calls: UTIL_Remove
// callers: CGameRulesGameSystem::GameDeactivate
// globals: g_pSoundEnt
void __cdecl CSoundEnt::ShutdownSoundEnt()
{
  if ( g_pSoundEnt != 0 )
  {
    UTIL_Remove(g_pSoundEnt);
    g_pSoundEnt = 0;
  }
}


// CSoundEnt::CSoundEnt  (line 259, @0x0000000002393550, libserver.so)  // inlines: CEntityHandle, CHandle, CPointEntity, CSound
// calls: CBaseEntity::CBaseEntity
// callers: CSoundEnt::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CSoundEnt::CSoundEnt(CSoundEnt *const this)
{
  CSoundEnt *m_SoundPool; // rax
  CSoundEnt *v3; // rdx

  CBaseEntity::CBaseEntity(this);
  this->_vptr_IHandleEntity = &off_40AAAB0;
  m_SoundPool = this->m_SoundPool;
  do
  {
    LODWORD(m_SoundPool->_vptr_IHandleEntity) = -1;
    v3 = m_SoundPool;
    m_SoundPool = (m_SoundPool + 52);
    HIDWORD(v3->_vptr_IHandleEntity) = -1;
  }
  while ( m_SoundPool != &this->m_SoundPool[128] );
}


// CSoundEnt::~CSoundEnt  (line 263, @0x0000000002381500, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CSoundEnt::~CSoundEnt(CSoundEnt *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CSoundEnt::~CSoundEnt  (line 263, @0x0000000002381520, libserver.so)  // inlines: ~CPointEntity, ~CSoundEnt
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CSoundEnt::~CSoundEnt(CSoundEnt *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CSoundEnt::Spawn  (line 271, @0x0000000002394140, libserver.so)  // inlines: curtime
// calls: CPointEntity::Spawn, CSoundEnt::Initialize, CBaseEntity::SetNextThink
void __fastcall CSoundEnt::Spawn(CSoundEnt *const this, const CEntityKeyValues *pKeyValues)
{
  double v3; // xmm1_8
  CGlobalVars *v4; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CPointEntity::Spawn(this, pKeyValues);
  CSoundEnt::Initialize(this);
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(COERCE_UNSIGNED_INT(v4->m_flCurrentTime + 1.0)), v3, 0);
  }
  else
  {
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(1065353216), v3, 0);
  }
}


// CSoundEnt::OnRestore  (line 280, @0x0000000002381a70, libserver.so)
// calls: CBaseEntity::OnRestore, UTIL_Remove
// globals: g_pSoundEnt
void __fastcall CSoundEnt::OnRestore(CSoundEnt *const this)
{
  CBaseEntity::OnRestore(this);
  if ( g_pSoundEnt != 0 )
    UTIL_Remove(g_pSoundEnt);
  g_pSoundEnt = this;
}


// CSoundEnt::Think  (line 299, @0x0000000002394220, libserver.so)  // inlines: FreeSound, Get, GetBool, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, IndexToIdentity, IsSoundType, IsValid, LookupEntity, OccludedVolume, ValidateOwner, VectorAdd, VectorMultiply, VectorSubtract, curtime, operator CEntityInstance*, operator*, operator+, operator-
// calls: CBaseEntity::SetNextThink, CSoundEnt::ISoundsInList, DevMsg, Msg, CSound::GetSoundOrigin, NDebugOverlay::Line
// strings: "Soundlist: %d / %d  (%d)\n", "  Removed Danger Sound: %d (time:%f)\n", "  Removed Sound: %d (Time:%f)\n"
// globals: g_pSoundEnt, CEntityHandle::gm_pEntityList
void __fastcall CSoundEnt::Think(CSoundEnt *const this)
{
  double v1; // xmm1_8
  CGlobalVars *v3; // rbx
  double v4; // xmm0_8
  __int64 m_nValue; // rsi
  int m_iActiveSound; // r13d
  int v7; // r15d
  ConVar *v8; // r11
  int m_iNext; // r14d
  int v10; // eax
  CSoundEnt *v11; // rax
  float m_flCurrentTime; // xmm1_4
  float m_flExpireTime; // xmm0_4
  CGlobalVars *v14; // r14
  FnGlobalVarsWarningFunc v15; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v17; // rax
  __int64 v18; // rcx
  CEntityIdentity *v19; // rax
  __int64 v20; // r11
  int v21; // eax
  int v22; // edx
  int v23; // r14d
  int v24; // r15d
  int v25; // eax
  int v26; // eax
  CGlobalVars *v27; // rax
  FnGlobalVarsWarningFunc v28; // rcx
  double v29; // xmm0_8
  double v30; // xmm0_8
  CGlobalVars *v31; // rax
  float m_iVolume; // xmm0_4
  __m128i x_low; // xmm3
  float v34; // r15d
  const Vector *SoundOrigin; // rax
  vec_t v36; // xmm2_4
  vec_t v37; // xmm0_4
  const Vector *v38; // rax
  float v39; // xmm0_4
  const Vector *v40; // rax
  vec_t v41; // xmm2_4
  vec_t v42; // xmm0_4
  const Vector *v43; // rax
  float v44; // xmm0_4
  const Vector *v45; // rax
  vec_t v46; // xmm1_4
  vec_t v47; // xmm0_4
  const Vector *v48; // rax
  float v49; // xmm0_4
  const Vector *v50; // rax
  vec_t v51; // xmm2_4
  vec_t v52; // xmm0_4
  const Vector *v53; // rax
  float v54; // xmm0_4
  const Vector *v55; // rax
  vec_t v56; // xmm1_4
  vec_t v57; // xmm0_4
  const Vector *v58; // rax
  float v59; // xmm0_4
  const Vector *v60; // rax
  vec_t v61; // xmm0_4
  vec_t v62; // xmm2_4
  const Vector *v63; // rax
  float m_flOcclusionScale; // xmm0_4
  float v65; // xmm1_4
  const Vector *v66; // rax
  vec_t v67; // xmm2_4
  vec_t v68; // xmm0_4
  const Vector *v69; // rax
  float v70; // xmm0_4
  const Vector *v71; // rax
  vec_t v72; // xmm2_4
  vec_t v73; // xmm0_4
  const Vector *v74; // rax
  float v75; // xmm0_4
  const Vector *v76; // rax
  vec_t v77; // xmm2_4
  vec_t v78; // xmm0_4
  const Vector *v79; // rax
  float v80; // xmm0_4
  const Vector *v81; // rax
  vec_t v82; // xmm2_4
  vec_t v83; // xmm0_4
  const Vector *v84; // rax
  float v85; // xmm0_4
  const Vector *v86; // rax
  vec_t v87; // xmm2_4
  vec_t v88; // xmm0_4
  const Vector *v89; // rax
  float v90; // xmm0_4
  const Vector *v91; // rax
  vec_t v92; // xmm0_4
  vec_t v93; // xmm2_4
  const Vector *v94; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  FnGlobalVarsWarningFunc v96; // rdx
  __int64 v97; // [rsp+8h] [rbp-98h]
  float v98; // [rsp+10h] [rbp-90h]
  float v99; // [rsp+10h] [rbp-90h]
  float v100; // [rsp+10h] [rbp-90h]
  float v101; // [rsp+10h] [rbp-90h]
  float v102; // [rsp+10h] [rbp-90h]
  ConVar *v103; // [rsp+18h] [rbp-88h]
  float v104; // [rsp+18h] [rbp-88h]
  float v105; // [rsp+18h] [rbp-88h]
  float v106; // [rsp+18h] [rbp-88h]
  float v107; // [rsp+18h] [rbp-88h]
  float v108; // [rsp+18h] [rbp-88h]
  float v109; // [rsp+18h] [rbp-88h]
  float v110; // [rsp+18h] [rbp-88h]
  float v111; // [rsp+18h] [rbp-88h]
  float v112; // [rsp+18h] [rbp-88h]
  float v113; // [rsp+18h] [rbp-88h]
  float v114; // [rsp+18h] [rbp-88h]
  float v115; // [rsp+18h] [rbp-88h]
  ConVar *v116; // [rsp+20h] [rbp-80h]
  CGlobalVars *v117; // [rsp+20h] [rbp-80h]
  float v118; // [rsp+20h] [rbp-80h]
  float v119; // [rsp+20h] [rbp-80h]
  float v120; // [rsp+20h] [rbp-80h]
  float v121; // [rsp+20h] [rbp-80h]
  float v122; // [rsp+20h] [rbp-80h]
  float v123; // [rsp+20h] [rbp-80h]
  float v124; // [rsp+20h] [rbp-80h]
  float v125; // [rsp+20h] [rbp-80h]
  float v126; // [rsp+20h] [rbp-80h]
  float v127; // [rsp+20h] [rbp-80h]
  float v128; // [rsp+20h] [rbp-80h]
  float v129; // [rsp+20h] [rbp-80h]
  ConVar *v130; // [rsp+20h] [rbp-80h]
  float ga; // [rsp+28h] [rbp-78h]
  int g[2]; // [rsp+28h] [rbp-78h]
  int gb[2]; // [rsp+28h] [rbp-78h]
  int gc[2]; // [rsp+28h] [rbp-78h]
  int gd[2]; // [rsp+28h] [rbp-78h]
  unsigned int ge; // [rsp+28h] [rbp-78h]
  float gf; // [rsp+28h] [rbp-78h]
  float gg; // [rsp+28h] [rbp-78h]
  float gh; // [rsp+28h] [rbp-78h]
  float gi; // [rsp+28h] [rbp-78h]
  float gj; // [rsp+28h] [rbp-78h]
  float gk; // [rsp+28h] [rbp-78h]
  CGlobalVars *gl; // [rsp+28h] [rbp-78h]
  Vector forward; // [rsp+30h] [rbp-70h] BYREF
  Vector right; // [rsp+40h] [rbp-60h] BYREF
  Vector up; // [rsp+50h] [rbp-50h] BYREF
  Vector target; // [rsp+60h] [rbp-40h] BYREF

  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    v4 = v3->m_flCurrentTime + 0.1;
  }
  else
  {
    *&v4 = 1036831949;
  }
  CBaseEntity::SetNextThink(this, v4, v1, 0);
  m_iActiveSound = this->m_iActiveSound;
  if ( m_iActiveSound != -1 )
  {
    v7 = -1;
    v8 = &displaysoundlist;
    do
    {
      while ( 1 )
      {
        m_flCurrentTime = 0.0;
        m_flExpireTime = this->m_SoundPool[m_iActiveSound].m_flExpireTime;
        v14 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            v15 = gpGlobals->m_pfnWarningFunc;
            if ( v15 != 0 )
            {
              v116 = v8;
              ga = this->m_SoundPool[m_iActiveSound].m_flExpireTime;
              (v15)(1, m_flExpireTime, 0.0);
              v8 = v116;
              m_flExpireTime = ga;
            }
          }
          m_flCurrentTime = v14->m_flCurrentTime;
        }
        if ( m_flCurrentTime >= m_flExpireTime && !this->m_SoundPool[m_iActiveSound].m_bNoExpirationTime )
          break;
        if ( this->m_SoundPool[m_iActiveSound].m_bHasOwner )
        {
          m_Index = this->m_SoundPool[m_iActiveSound].m_hOwner.m_Index;
          m_nValue = CEntityHandle::gm_pEntityList;
          if ( m_Index + 2 <= 1 )
            break;
          v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_SoundPool[m_iActiveSound].m_hOwner.m_Index) >> 9)
                                                               & 0x3F];
          if ( v17 == 0 )
            break;
          v18 = this->m_SoundPool[m_iActiveSound].m_hOwner.m_Index & 0x1FF;
          m_nValue = 8 * v18;
          v19 = &v17[v18];
          if ( v19 == 0 || m_Index != v19->m_EHandle.m_Index || v19->m_pInstance == 0 )
            break;
        }
        m_nValue = v8->m_pParent->m_Value.m_nValue;
        if ( m_nValue != 0 )
        {
          *g = v8;
          (*(this->_vptr_IHandleEntity + 61))(this, &forward, &right, &up);
          v20 = *g;
          v21 = this->m_SoundPool[m_iActiveSound].m_iType & 8;
          v22 = *(*(*g + 56LL) + 88LL);
          if ( v22 == 1 || v22 == 2 && v21 != 0 )
          {
            m_iVolume = this->m_SoundPool[m_iActiveSound].m_iVolume;
            x_low = LODWORD(forward.x);
            v97 = *g;
            *x_low.m128i_i32 = forward.x * m_iVolume;
            ge = -(v21 == 0);
            v34 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
            v104 = forward.y * m_iVolume;
            v118 = m_iVolume * forward.z;
            SoundOrigin = CSound::GetSoundOrigin(&this->m_SoundPool[m_iActiveSound]);
            v36 = v34 + SoundOrigin->x;
            v37 = v118 + SoundOrigin->z;
            target.y = v104 + SoundOrigin->y;
            target.x = v36;
            target.z = v37;
            v38 = CSound::GetSoundOrigin(&this->m_SoundPool[m_iActiveSound]);
            NDebugOverlay::Line(v38, &target, 0xFFu, ge, 0, 0, 0.1);
            v39 = this->m_SoundPool[m_iActiveSound].m_iVolume;
            v119 = forward.x * v39;
            v105 = forward.y * v39;
            v98 = v39 * forward.z;
            v40 = CSound::GetSoundOrigin(&this->m_SoundPool[m_iActiveSound]);
            v41 = v40->x - v119;
            v42 = v40->z - v98;
            target.y = v40->y - v105;
            target.x = v41;
            target.z = v42;
            v43 = CSound::GetSoundOrigin(&this->m_SoundPool[m_iActiveSound]);
            NDebugOverlay::Line(v43, &target, 0xFFu, ge, 0, 0, 0.1);
            v44 = this->m_SoundPool[m_iActiveSound].m_iVolume;
            v99 = right.x * v44;
            v106 = right.y * v44;
            v120 = v44 * right.z;
            v45 = CSound::GetSoundOrigin(&this->m_SoundPool[m_iActiveSound]);
            v46 = v99 + v45->x;
            v47 = v120 + v45->z;
            target.y = v106 + v45->y;
            target.x = v46;
            target.z = v47;
            v48 = CSound::GetSoundOrigin(&this->m_SoundPool[m_iActiveSound]);
            NDebugOverlay::Line(v48, &target, 0xFFu, ge, 0, 0, 0.1);
            v49 = this->m_SoundPool[m_iActiveSound].m_iVolume;
            v121 = right.x * v49;
            v107 = right.y * v49;
            v100 = v49 * right.z;
            v50 = CSound::GetSoundOrigin(&this->m_SoundPool[m_iActiveSound]);
            v51 = v50->x - v121;
            v52 = v50->z - v100;
            target.y = v50->y - v107;
            target.x = v51;
            target.z = v52;
            v53 = CSound::GetSoundOrigin(&this->m_SoundPool[m_iActiveSound]);
            NDebugOverlay::Line(v53, &target, 0xFFu, ge, 0, 0, 0.1);
            v54 = this->m_SoundPool[m_iActiveSound].m_iVolume;
            v101 = up.x * v54;
            v108 = up.y * v54;
            v122 = v54 * up.z;
            v55 = CSound::GetSoundOrigin(&this->m_SoundPool[m_iActiveSound]);
            v56 = v101 + v55->x;
            v57 = v122 + v55->z;
            target.y = v108 + v55->y;
            target.x = v56;
            target.z = v57;
            v58 = CSound::GetSoundOrigin(&this->m_SoundPool[m_iActiveSound]);
            NDebugOverlay::Line(v58, &target, 0xFFu, ge, 0, 0, 0.1);
            v59 = this->m_SoundPool[m_iActiveSound].m_iVolume;
            v123 = up.x * v59;
            v109 = up.y * v59;
            v102 = v59 * up.z;
            v60 = CSound::GetSoundOrigin(&this->m_SoundPool[m_iActiveSound]);
            v61 = v60->z - v102;
            v62 = v60->x - v123;
            target.y = v60->y - v109;
            target.z = v61;
            target.x = v62;
            v63 = CSound::GetSoundOrigin(&this->m_SoundPool[m_iActiveSound]);
            NDebugOverlay::Line(v63, &target, 0xFFu, ge, 0, 0, 0.1);
            m_flOcclusionScale = this->m_SoundPool[m_iActiveSound].m_flOcclusionScale;
            v20 = v97;
            if ( m_flOcclusionScale != 1.0 )
            {
              v65 = this->m_SoundPool[m_iActiveSound].m_iVolume * m_flOcclusionScale;
              v110 = forward.x * v65;
              v124 = forward.y * v65;
              gf = v65 * forward.z;
              v66 = CSound::GetSoundOrigin(&this->m_SoundPool[m_iActiveSound]);
              v67 = v110 + v66->x;
              v68 = v124 + v66->y;
              target.z = gf + v66->z;
              target.x = v67;
              target.y = v68;
              v69 = CSound::GetSoundOrigin(&this->m_SoundPool[m_iActiveSound]);
              NDebugOverlay::Line(v69, &target, 0, 0x96u, 0xFFu, 0, 0.1);
              v70 = this->m_SoundPool[m_iActiveSound].m_iVolume * this->m_SoundPool[m_iActiveSound].m_flOcclusionScale;
              v125 = forward.y * v70;
              gg = forward.x * v70;
              v111 = v70 * forward.z;
              v71 = CSound::GetSoundOrigin(&this->m_SoundPool[m_iActiveSound]);
              v72 = v71->x - gg;
              v73 = v71->z - v111;
              target.y = v71->y - v125;
              target.x = v72;
              target.z = v73;
              v74 = CSound::GetSoundOrigin(&this->m_SoundPool[m_iActiveSound]);
              NDebugOverlay::Line(v74, &target, 0, 0x96u, 0xFFu, 0, 0.1);
              v75 = this->m_SoundPool[m_iActiveSound].m_iVolume * this->m_SoundPool[m_iActiveSound].m_flOcclusionScale;
              v112 = right.x * v75;
              v126 = right.y * v75;
              gh = v75 * right.z;
              v76 = CSound::GetSoundOrigin(&this->m_SoundPool[m_iActiveSound]);
              v77 = v112 + v76->x;
              v78 = gh + v76->z;
              target.y = v126 + v76->y;
              target.x = v77;
              target.z = v78;
              v79 = CSound::GetSoundOrigin(&this->m_SoundPool[m_iActiveSound]);
              NDebugOverlay::Line(v79, &target, 0, 0x96u, 0xFFu, 0, 0.1);
              v80 = this->m_SoundPool[m_iActiveSound].m_iVolume * this->m_SoundPool[m_iActiveSound].m_flOcclusionScale;
              v127 = right.y * v80;
              gi = right.x * v80;
              v113 = v80 * right.z;
              v81 = CSound::GetSoundOrigin(&this->m_SoundPool[m_iActiveSound]);
              v82 = v81->x - gi;
              v83 = v81->z - v113;
              target.y = v81->y - v127;
              target.x = v82;
              target.z = v83;
              v84 = CSound::GetSoundOrigin(&this->m_SoundPool[m_iActiveSound]);
              NDebugOverlay::Line(v84, &target, 0, 0x96u, 0xFFu, 0, 0.1);
              v85 = this->m_SoundPool[m_iActiveSound].m_iVolume * this->m_SoundPool[m_iActiveSound].m_flOcclusionScale;
              v114 = up.x * v85;
              v128 = up.y * v85;
              gj = v85 * up.z;
              v86 = CSound::GetSoundOrigin(&this->m_SoundPool[m_iActiveSound]);
              v87 = v114 + v86->x;
              v88 = gj + v86->z;
              target.y = v128 + v86->y;
              target.x = v87;
              target.z = v88;
              v89 = CSound::GetSoundOrigin(&this->m_SoundPool[m_iActiveSound]);
              NDebugOverlay::Line(v89, &target, 0, 0x96u, 0xFFu, 0, 0.1);
              v90 = this->m_SoundPool[m_iActiveSound].m_iVolume * this->m_SoundPool[m_iActiveSound].m_flOcclusionScale;
              gk = up.x * v90;
              v129 = up.y * v90;
              v115 = v90 * up.z;
              v91 = CSound::GetSoundOrigin(&this->m_SoundPool[m_iActiveSound]);
              v92 = v91->z - v115;
              v93 = v91->x - gk;
              target.y = v91->y - v129;
              target.z = v92;
              target.x = v93;
              v94 = CSound::GetSoundOrigin(&this->m_SoundPool[m_iActiveSound]);
              NDebugOverlay::Line(v94, &target, 0, 0x96u, 0xFFu, 0, 0.1);
              v20 = v97;
            }
          }
          *gb = v20;
          v23 = CSoundEnt::ISoundsInList(this, 2) - this->m_cLastActiveSounds;
          v24 = CSoundEnt::ISoundsInList(this, 1);
          v25 = CSoundEnt::ISoundsInList(this, 2);
          DevMsg(2, "Soundlist: %d / %d  (%d)\n", v25, v24, v23);
          v26 = CSoundEnt::ISoundsInList(this, 2);
          v8 = *gb;
          this->m_cLastActiveSounds = v26;
        }
        v7 = m_iActiveSound;
        m_iActiveSound = this->m_SoundPool[m_iActiveSound].m_iNext;
        if ( m_iActiveSound == -1 )
          return;
      }
      m_iNext = this->m_SoundPool[m_iActiveSound].m_iNext;
      v10 = v8->m_pParent->m_Value.m_nValue;
      if ( v10 == 1 )
      {
        v30 = 0.0;
        v31 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            v96 = gpGlobals->m_pfnWarningFunc;
            if ( v96 != 0 )
            {
              v130 = v8;
              gl = gpGlobals;
              (v96)(1, m_nValue, 0.0);
              v8 = v130;
              v31 = gl;
            }
          }
          v30 = v31->m_flCurrentTime;
        }
        *gd = v8;
        Msg("  Removed Sound: %d (Time:%f)\n", this->m_SoundPool[m_iActiveSound].m_iType, v30);
        v8 = *gd;
        v10 = *(*(*gd + 56LL) + 88LL);
      }
      if ( v10 == 2 && ((m_nValue = this->m_SoundPool[m_iActiveSound].m_iType) & 8) != 0 )
      {
        v27 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            v28 = gpGlobals->m_pfnWarningFunc;
            if ( v28 != 0 )
            {
              v103 = v8;
              v117 = gpGlobals;
              v28(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
              v8 = v103;
              v27 = v117;
              LODWORD(m_nValue) = this->m_SoundPool[m_iActiveSound].m_iType;
            }
          }
          v29 = v27->m_flCurrentTime;
        }
        else
        {
          v29 = 0.0;
        }
        *gc = v8;
        Msg("  Removed Danger Sound: %d (time:%f)\n", m_nValue, v29);
        v11 = g_pSoundEnt;
        v8 = *gc;
        if ( g_pSoundEnt != 0 )
        {
LABEL_10:
          if ( v7 == -1 )
          {
            v11->m_iActiveSound = v11->m_SoundPool[m_iActiveSound].m_iNext;
          }
          else
          {
            m_nValue = 3LL * v7;
            v11->m_SoundPool[v7].m_iNext = v11->m_SoundPool[m_iActiveSound].m_iNext;
          }
          v11->m_SoundPool[m_iActiveSound].m_iNext = v11->m_iFreeSound;
          v11->m_iFreeSound = m_iActiveSound;
          m_iActiveSound = m_iNext;
          continue;
        }
      }
      else
      {
        v11 = g_pSoundEnt;
        if ( g_pSoundEnt != 0 )
          goto LABEL_10;
      }
      m_iActiveSound = m_iNext;
    }
    while ( m_iActiveSound != -1 );
  }
}


// CSoundEnt::FreeSound  (line 394, @0x00000000023935b0, libserver.so)
// globals: g_pSoundEnt
void __fastcall CSoundEnt::FreeSound(int iSound, int iPrevious)
{
  CSoundEnt *v2; // rax

  v2 = g_pSoundEnt;
  if ( g_pSoundEnt != 0 )
  {
    if ( iPrevious == -1 )
      g_pSoundEnt->m_iActiveSound = g_pSoundEnt->m_SoundPool[iSound].m_iNext;
    else
      g_pSoundEnt->m_SoundPool[iPrevious].m_iNext = g_pSoundEnt->m_SoundPool[iSound].m_iNext;
    v2->m_SoundPool[iSound].m_iNext = v2->m_iFreeSound;
    v2->m_iFreeSound = iSound;
  }
}


// CSoundEnt::FreeSound  (line 420, @0x0000000002393620, libserver.so)  // inlines: FreeSound
// calls: Warning
// callers: CEntityFlame::UpdateOnRemove, CAISound::InputStopAISound
// strings: "Attempted to free unknown sound %d!\n"
// globals: g_pSoundEnt
void __fastcall CSoundEnt::FreeSound(int iSound)
{
  CSoundEnt *v1; // r8
  int m_iActiveSound; // edx
  int m_iNext; // eax
  __int64 v4; // rax

  v1 = g_pSoundEnt;
  if ( g_pSoundEnt == 0 || iSound == -1 )
    return;
  m_iActiveSound = g_pSoundEnt->m_iActiveSound;
  if ( m_iActiveSound == -1 )
  {
LABEL_9:
    Warning("Attempted to free unknown sound %d!\n", iSound);
    return;
  }
  if ( iSound != m_iActiveSound )
  {
    while ( 1 )
    {
      m_iNext = g_pSoundEnt->m_SoundPool[m_iActiveSound].m_iNext;
      if ( m_iNext == -1 )
        goto LABEL_9;
      if ( iSound == m_iNext )
      {
        v4 = iSound;
        g_pSoundEnt->m_SoundPool[m_iActiveSound].m_iNext = g_pSoundEnt->m_SoundPool[iSound].m_iNext;
        goto LABEL_11;
      }
      m_iActiveSound = g_pSoundEnt->m_SoundPool[m_iActiveSound].m_iNext;
    }
  }
  v4 = iSound;
  g_pSoundEnt->m_iActiveSound = g_pSoundEnt->m_SoundPool[iSound].m_iNext;
LABEL_11:
  v1->m_SoundPool[v4].m_iNext = v1->m_iFreeSound;
  v1->m_iFreeSound = iSound;
}


// CSoundEnt::IAllocSound  (line 444, @0x0000000002382130, libserver.so)  // inlines: GetInt
// calls: Msg
// callers: CSoundEnt::IAllocSound, CSoundEnt::FindOrAllocateSound, CSoundEnt::InsertSound, CSoundEnt::Initialize
// strings: "Free Sound List is full!\n"
__int64 __fastcall CSoundEnt::IAllocSound(CSoundEnt *const this)
{
  if ( developer.m_pParent->m_Value.m_nValue > 1 )
    Msg("Free Sound List is full!\n");
  return 0xFFFFFFFFLL;
}


// CSoundEnt::IAllocSound  (line 444, @0x00000000023936f0, libserver.so)
// calls: CSoundEnt::IAllocSound
int __fastcall CSoundEnt::IAllocSound(CSoundEnt *const this)
{
  int result; // eax

  result = this->m_iFreeSound;
  if ( result == -1 )
    return CSoundEnt::IAllocSound(this);
  this->m_iFreeSound = this->m_SoundPool[result].m_iNext;
  this->m_SoundPool[result].m_iNext = this->m_iActiveSound;
  this->m_iActiveSound = result;
  return result;
}


// CSoundEnt::InsertSound  (line 479, @0x0000000002393910, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetInt, GetSerialNumber, IAllocSound, Set, SetDuration, SetSoundOrigin, curtime, operator=
// calls: CSound::SetDuration, CSoundEnt::FindOrAllocateSound, Msg, CSoundEnt::IAllocSound, DevMsg(char const*,...)
// callers: CBaseEntity::FireBullets, CBreakableProp::Ignite, CBreakableProp::Break, RadiusDamage, CBaseCombatWeapon::WeaponSound, PerformMeleeAttackTest, CEntityFlame::FlameThink, CBasePlayer::OnTakeDamage_Alive, CBasePlayer::PostThink, CPhysicsProp::OnTakeDamage, CBasePropDoor::OnStartOpeningFromClosed, CBasePropDoor::DoorClose (16 total)
// strings: "  Added Danger Sound! Duration:%f (Time:%f)\n", "  Added Sound! Type:%d  Duration:%f (Time:%f)\n", "Could not AllocSound() for InsertSound() (Game DLL)\n"
// globals: g_pSoundEnt
__int64 __fastcall CSoundEnt::InsertSound(
        int iType,
        const Vector *const vecOrigin,
        int iVolume,
        double flDuration,
        CBaseEntity *pOwner,
        __int64 soundChannelIndex,
        CBaseEntity *pSoundTarget,
        double a8)
{
  CSoundEnt *v9; // rdi
  double v12; // xmm2_8
  __int64 v13; // rdx
  __int64 v14; // r11
  CSoundEnt *v15; // r10
  __int64 v16; // r12
  __int64 v17; // rbx
  double v18; // xmm0_8
  CEntityIdentity *m_pEntity; // rsi
  int v20; // eax
  __int16 v21; // di
  CEntityIdentity *v22; // rsi
  int v23; // eax
  __int16 v24; // di
  int m_nValue; // ecx
  __int64 result; // rax
  unsigned int Sound; // eax
  __int64 v28; // rsi
  double v29; // xmm0_8
  CGlobalVars *v30; // rbx
  FnGlobalVarsWarningFunc v31; // rax
  double v32; // xmm1_8
  double m_flCurrentTime; // xmm1_8
  CGlobalVars *v34; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  unsigned int v36; // eax
  CBaseEntity *v37; // [rsp+8h] [rbp-58h]
  int pSoundTargeta; // [rsp+10h] [rbp-50h]
  CBaseEntity *pSoundTargetb; // [rsp+10h] [rbp-50h]
  CBaseEntity *pSoundTargetc; // [rsp+10h] [rbp-50h]
  CBaseEntity *flDurationa; // [rsp+18h] [rbp-48h]
  unsigned int flDurationb; // [rsp+18h] [rbp-48h]
  int iThisSound; // [rsp+20h] [rbp-40h]
  unsigned int iThisSounda; // [rsp+20h] [rbp-40h]
  int iThisSoundb; // [rsp+20h] [rbp-40h]
  int iThisSoundc; // [rsp+20h] [rbp-40h]
  int iThisSoundd; // [rsp+20h] [rbp-40h]
  CBaseEntity *iThisSounde; // [rsp+20h] [rbp-40h]
  int pOwnera; // [rsp+28h] [rbp-38h]
  CBaseEntity *pOwnerb; // [rsp+28h] [rbp-38h]
  int pOwnerc; // [rsp+28h] [rbp-38h]
  unsigned int pOwnerd; // [rsp+28h] [rbp-38h]
  int pOwnere; // [rsp+28h] [rbp-38h]
  int pOwnerf; // [rsp+28h] [rbp-38h]
  unsigned int pOwnerg; // [rsp+28h] [rbp-38h]

  v9 = g_pSoundEnt;
  if ( g_pSoundEnt == 0 )
    return 0xFFFFFFFFLL;
  v12 = flDuration;
  if ( soundChannelIndex != 0 )
  {
    pSoundTargetb = pSoundTarget;
    iThisSounda = soundChannelIndex;
    pOwnerb = pOwner;
    flDurationb = LODWORD(flDuration);
    Sound = CSoundEnt::FindOrAllocateSound(g_pSoundEnt, pOwner, soundChannelIndex);
    pSoundTarget = pSoundTargetb;
    soundChannelIndex = iThisSounda;
    v13 = Sound;
    pOwner = pOwnerb;
    *&v12 = flDurationb;
  }
  else
  {
    LODWORD(v13) = g_pSoundEnt->m_iFreeSound;
    if ( v13 != -1 )
    {
      v14 = v13;
      v15 = g_pSoundEnt;
      g_pSoundEnt->m_iFreeSound = g_pSoundEnt->m_SoundPool[v13].m_iNext;
      v9->m_SoundPool[v13].m_iNext = v9->m_iActiveSound;
      v9->m_iActiveSound = v13;
      goto LABEL_5;
    }
    pSoundTargetc = pSoundTarget;
    iThisSounde = pOwner;
    pOwnerg = LODWORD(flDuration);
    v36 = CSoundEnt::IAllocSound(g_pSoundEnt);
    *&v12 = pOwnerg;
    v13 = v36;
    pOwner = iThisSounde;
    soundChannelIndex = 0;
    pSoundTarget = pSoundTargetc;
  }
  if ( v13 == -1 )
  {
    DevMsg(
      "Could not AllocSound() for InsertSound() (Game DLL)\n",
      v28,
      v13,
      pOwner,
      soundChannelIndex,
      pSoundTarget,
      v29,
      a8,
      v12);
    return 0xFFFFFFFFLL;
  }
  v15 = g_pSoundEnt;
  v14 = v13;
LABEL_5:
  v16 = (&v15->m_cLastActiveSounds + 13 * v14);
  v17 = &v15->m_SoundPool[v14];
  *(v17 + 36) = vecOrigin->x;
  *(v17 + 40) = vecOrigin->y;
  *&v18 = LODWORD(vecOrigin->z);
  *(v17 + 16) = iType;
  *(v17 + 8) = iVolume;
  *(v17 + 44) = LODWORD(v18);
  *(v17 + 12) = 1056964608;
  if ( *&v12 == 3.4028235e38 )
  {
    v15->m_SoundPool[v14].m_flExpireTime = 3.4028235e38;
    v15->m_SoundPool[v14].m_bNoExpirationTime = 1;
    if ( pOwner == 0 )
      goto LABEL_19;
  }
  else
  {
    v37 = pSoundTarget;
    pSoundTargeta = soundChannelIndex;
    flDurationa = pOwner;
    iThisSound = v13;
    pOwnera = LODWORD(v12);
    CSound::SetDuration(&v15->m_SoundPool[v14], v12, *&a8);
    pOwner = flDurationa;
    LODWORD(v12) = pOwnera;
    LODWORD(v13) = iThisSound;
    LODWORD(soundChannelIndex) = pSoundTargeta;
    pSoundTarget = v37;
    if ( flDurationa == 0 )
    {
LABEL_19:
      *(v16 + 4) = -1;
      if ( pSoundTarget == 0 )
        goto LABEL_20;
      goto LABEL_11;
    }
  }
  m_pEntity = pOwner->m_pEntity;
  if ( m_pEntity == 0 )
    goto LABEL_19;
  v20 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  v21 = 0x7FFF;
  if ( m_pEntity->m_EHandle.m_Index != -1 )
    v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  *(v16 + 4) = v21 | *(v16 + 4) & 0x8000;
  *(v16 + 4) = (v20 << 15) | *(v16 + 4) & 0x7FFF;
  if ( pSoundTarget != 0 )
  {
LABEL_11:
    v22 = pSoundTarget->m_pEntity;
    if ( v22 != 0 )
    {
      v23 = (v22->m_EHandle.m_Index >> 15) - (v22->m_flags & 1);
      v24 = 0x7FFF;
      if ( v22->m_EHandle.m_Index != -1 )
        v24 = v22->m_EHandle.m_Index & 0x7FFF;
      *(v17 + 4) = v24 | *(v17 + 4) & 0x8000;
      *(v17 + 4) = (v23 << 15) | *(v17 + 4) & 0x7FFF;
      goto LABEL_15;
    }
  }
LABEL_20:
  *(v17 + 4) = -1;
LABEL_15:
  *(v17 + 32) = soundChannelIndex;
  *(v17 + 48) = pOwner != 0;
  m_nValue = displaysoundlist.m_pParent->m_Value.m_nValue;
  if ( m_nValue == 1 )
  {
    m_flCurrentTime = 0.0;
    v34 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          iThisSoundc = LODWORD(v12);
          pOwnere = v13;
          (m_pfnWarningFunc)(1, v18, 0.0);
          LODWORD(v13) = pOwnere;
          LODWORD(v12) = iThisSoundc;
        }
      }
      m_flCurrentTime = v34->m_flCurrentTime;
    }
    iThisSoundd = v13;
    pOwnerf = LODWORD(v12);
    Msg("  Added Sound! Type:%d  Duration:%f (Time:%f)\n", *(v17 + 16), *&v12, m_flCurrentTime);
    LODWORD(v13) = iThisSoundd;
    LODWORD(v12) = pOwnerf;
    m_nValue = displaysoundlist.m_pParent->m_Value.m_nValue;
  }
  result = v13;
  if ( m_nValue == 2 && (iType & 8) != 0 )
  {
    v30 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v31 = gpGlobals->m_pfnWarningFunc;
        if ( v31 != 0 )
        {
          iThisSoundb = LODWORD(v12);
          pOwnerc = v13;
          v31(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          LODWORD(v13) = pOwnerc;
          LODWORD(v12) = iThisSoundb;
        }
      }
      v32 = v30->m_flCurrentTime;
    }
    else
    {
      v32 = 0.0;
    }
    pOwnerd = v13;
    Msg("  Added Danger Sound! Duration:%f (Time:%f)\n", *&v12, v32);
    return pOwnerd;
  }
  return result;
}


// CSoundEnt::UpdateSound  (line 545, @0x0000000002393740, libserver.so)  // inlines: SetDuration, SetSoundOrigin, operator=
// calls: CSound::SetDuration
// callers: CAISound::InputEmitAISound
// globals: g_pSoundEnt
void __fastcall CSoundEnt::UpdateSound(int iSound, const Vector *const vecOrigin, int iVolume, double flDuration)
{
  CSound *v4; // rdi
  float z; // xmm1_4

  v4 = &g_pSoundEnt->m_SoundPool[iSound];
  v4->m_iVolume = iVolume;
  v4->m_vecOrigin.x = vecOrigin->x;
  v4->m_vecOrigin.y = vecOrigin->y;
  z = vecOrigin->z;
  v4->m_vecOrigin.z = z;
  if ( *&flDuration == 3.4028235e38 )
  {
    v4->m_flExpireTime = 3.4028235e38;
    v4->m_bNoExpirationTime = 1;
  }
  else
  {
    CSound::SetDuration(v4, flDuration, z);
  }
}


// CSoundEnt::FindSound  (line 556, @0x00000000023937b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator==
// callers: CAISound::InputStopAISound, CSoundEnt::FindOrAllocateSound, CAISound::InputEmitAISound
// globals: CEntityHandle::gm_pEntityList
int __fastcall CSoundEnt::FindSound(CSoundEnt *const this, CBaseEntity *pOwner, int soundChannelIndex)
{
  int result; // eax
  uint32 m_Index; // r9d
  CBaseEntity *m_pInstance; // r10
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx

  for ( result = this->m_iActiveSound; result != -1; result = this->m_SoundPool[result].m_iNext )
  {
    if ( soundChannelIndex == 0 || this->m_SoundPool[result].m_ownerChannelIndex == soundChannelIndex )
    {
      m_Index = this->m_SoundPool[result].m_hOwner.m_Index;
      m_pInstance = 0;
      if ( m_Index + 2 > 1 )
      {
        v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_SoundPool[result].m_hOwner.m_Index) >> 9)
                                                            & 0x3F];
        if ( v6 != 0 )
        {
          v7 = &v6[this->m_SoundPool[result].m_hOwner.m_Index & 0x1FF];
          if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
            m_pInstance = v7->m_pInstance;
        }
      }
      if ( pOwner == m_pInstance )
        break;
    }
  }
  return result;
}


// CSoundEnt::FindOrAllocateSound  (line 579, @0x00000000023938a0, libserver.so)  // inlines: IAllocSound
// calls: CSoundEnt::FindSound, CSoundEnt::IAllocSound
// callers: CSoundEnt::InsertSound
int __fastcall CSoundEnt::FindOrAllocateSound(CSoundEnt *const this, CBaseEntity *pOwner, int soundChannelIndex)
{
  int result; // eax
  CSoundEnt *v5; // rdi

  result = CSoundEnt::FindSound(this, pOwner, soundChannelIndex);
  if ( result == -1 )
  {
    result = this->m_iFreeSound;
    if ( result == -1 )
    {
      return CSoundEnt::IAllocSound(v5);
    }
    else
    {
      this->m_iFreeSound = this->m_SoundPool[result].m_iNext;
      this->m_SoundPool[result].m_iNext = this->m_iActiveSound;
      this->m_iActiveSound = result;
    }
  }
  return result;
}


// CSoundEnt::Initialize  (line 593, @0x0000000002393fa0, libserver.so)  // inlines: Clear, IAllocSound, operator=
// calls: CSoundEnt::IAllocSound, DevMsg(char const*,...), Warning
// callers: CSoundEnt::Spawn
// strings: "Could not AllocSound() for Client Reserve! (DLL)\n", "CSoundEnt pool is low on sounds due to high number of clients.\n"
void __fastcall CSoundEnt::Initialize(CSoundEnt *const this)
{
  int v2; // ebx
  CGlobalVars *v3; // rdi
  int maxClients; // eax
  Vector *p_m_vecOrigin; // rdx
  __int64 v6; // rcx
  int *p_m_iType; // rax
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  int v11; // ebx
  __int64 v12; // rdx
  int m_iFreeSound; // eax
  int v14; // eax

  v2 = 64;
  this->m_iFreeSound = 0;
  this->m_iActiveSound = -1;
  v3 = gpGlobals;
  maxClients = gpGlobals->maxClients;
  if ( maxClients > 1 )
  {
    LOBYTE(v2) = 0x80;
    if ( maxClients <= 96 )
      v2 = maxClients + 32;
  }
  if ( v2 <= maxClients + 15 )
  {
    Warning("CSoundEnt pool is low on sounds due to high number of clients.\n");
    v3 = gpGlobals;
  }
  p_m_vecOrigin = &this->m_SoundPool[0].m_vecOrigin;
  v6 = 0;
  p_m_iType = &this->m_SoundPool[0].m_iType;
  x = vec3_origin.x;
  y = vec3_origin.y;
  z = vec3_origin.z;
  while ( 1 )
  {
    p_m_vecOrigin->x = x;
    p_m_iType += 13;
    p_m_vecOrigin->y = y;
    p_m_vecOrigin = (p_m_vecOrigin + 52);
    p_m_vecOrigin[-4].y = z;
    *(p_m_iType - 20) = v6 + 1;
    *(p_m_iType - 13) = 0;
    *(p_m_iType - 15) = 0;
    *(p_m_iType - 14) = 0;
    *(p_m_iType - 11) = 0;
    *(p_m_iType - 38) = 0;
    *(p_m_iType - 12) = -1;
    if ( v2 <= v6 + 1 )
      break;
    v6 = v6 + 1;
  }
  v11 = 0;
  this->m_SoundPool[v6].m_iNext = -1;
  if ( v3->maxClients > 0 )
  {
    do
    {
      m_iFreeSound = this->m_iFreeSound;
      if ( m_iFreeSound == -1 )
      {
        v14 = CSoundEnt::IAllocSound(v3);
        if ( v14 == -1 )
        {
          DevMsg("Could not AllocSound() for Client Reserve! (DLL)\n");
          return;
        }
        v12 = v14;
      }
      else
      {
        v12 = m_iFreeSound;
        this->m_iFreeSound = this->m_SoundPool[m_iFreeSound].m_iNext;
        this->m_SoundPool[m_iFreeSound].m_iNext = this->m_iActiveSound;
        this->m_iActiveSound = m_iFreeSound;
      }
      ++v11;
      this->m_SoundPool[v12].m_bNoExpirationTime = 1;
    }
    while ( gpGlobals->maxClients > v11 );
  }
}


// CSoundEnt::ISoundsInList  (line 642, @0x00000000023941c0, libserver.so)
// calls: Msg
// callers: CSoundEnt::Think
// strings: "Unknown Sound List Type!\n"
int __fastcall CSoundEnt::ISoundsInList(CSoundEnt *const this, int iListType)
{
  int result; // eax
  __int64 m_iFreeSound; // rdx

  if ( iListType == 1 )
  {
    m_iFreeSound = this->m_iFreeSound;
  }
  else
  {
    if ( iListType != 2 )
    {
      Msg("Unknown Sound List Type!\n");
      return 0;
    }
    m_iFreeSound = this->m_iActiveSound;
  }
  for ( result = 0; m_iFreeSound != -1; LODWORD(m_iFreeSound) = this->m_SoundPool[m_iFreeSound].m_iNext )
    ++result;
  return result;
}


// CSoundEnt::ActiveList  (line 680, @0x0000000002394e20, libserver.so)
// callers: CEnvMicrophone::Think
// globals: g_pSoundEnt
int __cdecl CSoundEnt::ActiveList()
{
  if ( g_pSoundEnt != 0 )
    return g_pSoundEnt->m_iActiveSound;
  else
    return -1;
}


// CSoundEnt::FreeList  (line 693, @0x0000000002394e40, libserver.so)
// globals: g_pSoundEnt
int __cdecl CSoundEnt::FreeList()
{
  if ( g_pSoundEnt != 0 )
    return g_pSoundEnt->m_iFreeSound;
  else
    return -1;
}


// CSoundEnt::SoundPointerForIndex  (line 707, @0x0000000002394e60, libserver.so)
// calls: Msg
// callers: CEnvMicrophone::Think, CSource2GameClients::ClientDisconnect, CBasePlayer::UpdatePlayerSound, CBasePlayer::Event_Killed, CSoundEnt::GetLoudestSoundOfType
// strings: "SoundPointerForIndex() - Index too large!\n", "SoundPointerForIndex() - Index < 0!\n"
// globals: g_pSoundEnt
CSound *__fastcall CSoundEnt::SoundPointerForIndex(CPlayerSlot iIndex)
{
  if ( g_pSoundEnt == 0 )
    return 0;
  if ( iIndex.m_Data > 127 )
  {
    Msg("SoundPointerForIndex() - Index too large!\n");
    return 0;
  }
  else if ( iIndex.m_Data < 0 )
  {
    Msg("SoundPointerForIndex() - Index < 0!\n");
    return 0;
  }
  else
  {
    return &g_pSoundEnt->m_SoundPool[iIndex.m_Data];
  }
}


// CSoundEnt::ClientSoundIndex  (line 735, @0x0000000002394ed0, libserver.so)  // inlines: CPlayerSlot, entindex
// calls: CEntityInstance::GetEntityIndex
// callers: CSource2GameClients::ClientDisconnect, CBasePlayer::UpdatePlayerSound, CBasePlayer::Event_Killed
CPlayerSlot __fastcall CSoundEnt::ClientSoundIndex(CBaseEntity *pClient)
{
  CPlayerSlot result; // eax

  result.m_Data = -1;
  if ( pClient != 0 )
    return (CEntityInstance::GetEntityIndex(pClient).m_Data - 1);
  return result;
}


// CSoundEnt::GetLoudestSoundOfType  (line 752, @0x0000000002394ef0, libserver.so)  // inlines: ActiveList, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, Length, LookupEntity, ValidateOwner, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CEntityInstance*, operator-
// calls: CSoundEnt::SoundPointerForIndex, CSound::GetSoundOrigin
// globals: g_pSoundEnt, CEntityHandle::gm_pEntityList
CSound *__fastcall CSoundEnt::GetLoudestSoundOfType(int iType, const Vector *const vecEarPosition)
{
  int m_iActiveSound; // edi
  CSound *v5; // r14
  float v6; // r15d
  CSound *v7; // rax
  const CSound *v8; // rbx
  uint32 m_Index; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  const Vector *SoundOrigin; // rax
  __m128i v13; // xmm0
  float v15; // [rsp+Ch] [rbp-34h]

  if ( g_pSoundEnt == 0 )
    return 0;
  m_iActiveSound = g_pSoundEnt->m_iActiveSound;
  if ( m_iActiveSound == -1 )
    return 0;
  v5 = 0;
  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(0x4D800000u));
  do
  {
    while ( 1 )
    {
      v7 = CSoundEnt::SoundPointerForIndex(m_iActiveSound);
      v8 = v7;
      if ( v7 != 0
        && v7->m_iType == iType
        && (!v7->m_bHasOwner
         || (m_Index = v7->m_hOwner.m_Index) + 2 > 1
         && (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_hOwner.m_Index) >> 9) & 0x3F]) != 0
         && (v11 = &v10[v8->m_hOwner.m_Index & 0x1FF]) != 0
         && m_Index == v11->m_EHandle.m_Index
         && v11->m_pInstance != 0) )
      {
        SoundOrigin = CSound::GetSoundOrigin(v8);
        v15 = (((SoundOrigin->x - vecEarPosition->x) * (SoundOrigin->x - vecEarPosition->x))
             + ((SoundOrigin->y - vecEarPosition->y) * (SoundOrigin->y - vecEarPosition->y)))
            + ((SoundOrigin->z - vecEarPosition->z) * (SoundOrigin->z - vecEarPosition->z));
        v13 = LODWORD(v15);
        *v13.m128i_i32 = fsqrt(v15);
        if ( v8->m_iVolume >= *v13.m128i_i32 && v6 > *v13.m128i_i32 )
          break;
      }
      m_iActiveSound = v8->m_iNext;
      if ( m_iActiveSound == -1 )
        return v5;
    }
    m_iActiveSound = v8->m_iNext;
    v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v13));
    v5 = v8;
  }
  while ( m_iActiveSound != -1 );
  return v5;
}


// CAISound::~CAISound  (line 794, @0x00000000023aaba0, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CAISound::~CAISound(CAISound *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CAISound::~CAISound  (line 794, @0x00000000023aabc0, libserver.so)  // inlines: ~CAISound, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CAISound::~CAISound(CAISound *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CAISound::GetEntityClass  (line 796, @0x00000000023a92e0, libserver.so)
CEntityClass *__cdecl CAISound::GetEntityClass()
{
  return g_pEntityCAISoundClass;
}


// CAISound::Schema_DynamicBinding  (line 796, @0x00000000023a92f0, libserver.so)
// globals: CAISound::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CAISound::Schema_DynamicBinding(const CAISound *const this)
{
  return CAISound::s_pSchemaBinding;
}


// CAISound::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 796, @0x00000000023a9300, libserver.so)
// globals: CAISound::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CAISound::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CAISound::CEntityInstanceEntityClass *const this)
{
  return CAISound::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CAISound::CEntityInstanceEntityClass::DestructInstance  (line 796, @0x00000000023a9310, libserver.so)  // inlines: Destruct<CAISound>
void __fastcall CAISound::CEntityInstanceEntityClass::DestructInstance(
        CAISound::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CAISound::CEntityInstanceEntityClass::FreeInstance  (line 796, @0x00000000023a9330, libserver.so)
void __fastcall CAISound::CEntityInstanceEntityClass::FreeInstance(
        CAISound::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CAISound::CEntityInstanceEntityClass::CanAllocate  (line 796, @0x00000000023a9350, libserver.so)
bool __fastcall CAISound::CEntityInstanceEntityClass::CanAllocate(
        const CAISound::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CAISound::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 796, @0x00000000023a9360, libserver.so)
// globals: CAISound::s_pSchemaBinding
const ISchemaBinding *__fastcall CAISound::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CAISound::CEntityInstanceEntityClass *const this)
{
  return CAISound::s_pSchemaBinding;
}


// CAISound::CEntityInstanceEntityClass::AllocateInstance  (line 796, @0x00000000023aa930, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CAISound::CEntityInstanceEntityClass::AllocateInstance(
        CAISound::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 808);
  memset(v1, 0, 0x328u);
  return v1;
}


// CAISound::CEntityInstanceEntityClass::ConstructInstance  (line 796, @0x00000000023aaa80, libserver.so)  // inlines: CAISound, CPointEntity, CUtlSymbolLarge, Construct<CAISound>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CAISound::CEntityInstanceEntityClass::ConstructInstance(
        CAISound::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 100) = 0;
    *p = &off_40AB1D0;
    *(p + 195) = 0;
    *(p + 196) = 0;
    *(p + 198) = 1050253722;
    *(p + 197) = -1;
  }
  return p;
}


// CAISound::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 796, @0x00000000023acac0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CAISound::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CAISound::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CAISound::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 796, @0x00000000023acae0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CAISound::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CAISound::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CAISound::GetEntityClassInternal  (line 796, @0x00000000023b34c0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "ai_sound", "CAISound"
// globals: `guard variable for'CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass, CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CAISound::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CAISound::GetEntityClassInfo(void)::g_EntityCAISoundClassInfo, CAISound::GetEntityClassInfo(void)::g_EntityCAISoundClassInfo
CEntityClass *__cdecl CAISound::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass == 0
    && __cxa_guard_acquire(&`guard variable for'CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass) != 0 )
  {
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_designerName.u.m_Id = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass._vptr_CEntityClass = off_3F79390;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_ComponentOffsets.m_Size = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_AllHelpers.m_Size = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_instanceUnserializer.m_atomicFields,
      4);
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_classInputs.m_Size = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_classInputs.m_Memory.m_pMemory = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_classOutputs.m_Size = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_requiredEHandle.m_Index = -1;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_hNetworkSerializer = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_pBaseClassInfo = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_pClassInfo = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_flags = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_nAllHelpersFlags = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_pScriptClassDesc = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_pInputs = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_nInputCount = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_pOutputs = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_nOutputCount = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_pGameClass = 0;
    CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass._vptr_CEntityClass = off_40AB150;
    __cxa_guard_release(&`guard variable for'CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass);
    __cxa_atexit(
      CAISound::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass,
      &_dso_handle);
  }
  if ( g_pEntityCAISoundClass != 0 )
    return &CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass;
  if ( `guard variable for'CAISound::GetEntityClassInfo(void)::g_EntityCAISoundClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CAISound::GetEntityClassInfo(void)::g_EntityCAISoundClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CAISound::GetEntityClassInfo(void)::g_EntityCAISoundClassInfo,
      "CAISound",
      "ai_sound",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CAISound::GetEntityClassInfo(void)::g_EntityCAISoundClassInfo);
  }
  CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_pClassInfo = &CAISound::GetEntityClassInfo(void)::g_EntityCAISoundClassInfo;
  CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_pBaseClassInfo = CAISound::GetEntityClassInfo(void)::g_EntityCAISoundClassInfo.m_pBaseClassInfo;
  g_pEntityCAISoundClass = &CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass;
  CAISound::GetEntityClassInfo(void)::g_EntityCAISoundClassInfo.m_pClass = &CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass;
  CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCAISoundClass->m_pComponentOverrides = 0;
  return &CAISound::GetEntityClassInternal(void)::g_EntityCAISoundClass;
}


// CAISound::GetDataDescMap  (line 825, @0x0000000002380fd0, libserver.so)
// globals: CAISound::m_DataMap
datamap_t *__fastcall CAISound::GetDataDescMap(CAISound *const this)
{
  return &CAISound::m_DataMap;
}


// CAISound::AddDatadescMetadataKeys  (line 825, @0x0000000002395060, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CAISound::GetEntityClass(void)
void __fastcall CAISound::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CAISound::GetEntityClass);
}


// CAISound::GetBaseMap  (line 825, @0x0000000002395080, libserver.so)
datamap_t *__cdecl CAISound::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CAISound>  (line 825, @0x0000000002395090, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "CAISound"
// globals: `guard variable for'DataMapInit<CAISound>(CAISound *)::nameHolder, CAISound::GetEntityClass(void), CAISound::m_DataMap, DataMapInit<CAISound>(CAISound *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CAISound>(CAISound *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CAISound>(CAISound *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CAISound>(CAISound *)::nameHolder) != 0 )
  {
    DataMapInit<CAISound>(CAISound *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CAISound>(CAISound *)::nameHolder.m_pszBase = "CAISound";
    DataMapInit<CAISound>(CAISound *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CAISound>(CAISound *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CAISound>(CAISound *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CAISound>(CAISound *)::nameHolder.m_nLenBase = 8;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CAISound>(CAISound *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CAISound>(CAISound *)::nameHolder,
      &_dso_handle);
  }
  CAISound::m_DataMap.dataNumFields = 9;
  CAISound::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  CAISound::m_DataMap.dataDesc = &DataMapInit<CAISound>(CAISound *)::dataDesc[1];
  AddDatadescMetadataKeys(&CAISound::m_DataMap, CAISound::GetEntityClass);
  return &CAISound::m_DataMap;
}


// CAISound::InputInsertSound  (line 843, @0x0000000002393d10, libserver.so)  // inlines: CUtlSymbolLarge, Int, String, ToCStr, operator int, operator!=, operator=
// calls: CBaseEntity::GetAbsOrigin, CSoundEnt::InsertSound, CGameEntitySystem::FindEntityByName, DevWarning(char const*,...)
// strings: "Warning- ai_sound cannot find proxy entity named '%s'. Using self.\n"
void __fastcall CAISound::InputInsertSound(CAISound *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  int m_float; // r13d
  double v6; // xmm1_8
  const CBaseEntity *EntityByName; // rax
  const char *m_pAsString; // rsi
  string_t iszName; // [rsp+10h] [rbp-40h] BYREF
  Vector vecLocation; // [rsp+20h] [rbp-30h] BYREF

  m_type = inputdata->value.m_type;
  if ( m_type == 1 )
  {
    m_float = inputdata->value.m_float;
  }
  else if ( m_type == 34 )
  {
    m_float = inputdata->value.m_float64;
  }
  else
  {
    m_float = inputdata->value.m_int;
  }
  vecLocation = *CBaseEntity::GetAbsOrigin(this);
  if ( this->m_iszProxyEntityName.u.m_Id != 0 )
  {
    iszName.u.m_Id = this->m_iszProxyEntityName.u.m_Id;
    EntityByName = CGameEntitySystem::FindEntityByName(
                     g_pGameEntitySystem,
                     0,
                     &iszName,
                     this,
                     inputdata->pActivator,
                     inputdata->pCaller,
                     0);
    if ( EntityByName != 0 )
    {
      vecLocation = *CBaseEntity::GetAbsOrigin(EntityByName);
    }
    else
    {
      m_pAsString = "";
      if ( this->m_iszProxyEntityName.u.m_Id != 0 )
        m_pAsString = this->m_iszProxyEntityName.u.m_pAsString;
      DevWarning("Warning- ai_sound cannot find proxy entity named '%s'. Using self.\n", m_pAsString);
    }
  }
  CSoundEnt::InsertSound(
    this->m_iSoundType,
    &vecLocation,
    m_float,
    COERCE_DOUBLE(LODWORD(this->m_flDuration)),
    this,
    0,
    0,
    v6);
}


// CAISound::InputEmitAISound  (line 871, @0x0000000002393e40, libserver.so)  // inlines: CUtlSymbolLarge, String, ToCStr, operator!=, operator=
// calls: CBaseEntity::GetAbsOrigin, CSoundEnt::FindSound, CSoundEnt::InsertSound, CGameEntitySystem::FindEntityByName, CSoundEnt::UpdateSound, DevWarning(char const*,...)
// strings: "Warning- ai_sound cannot find proxy entity named '%s'. Using self.\n"
// globals: g_pSoundEnt
void __fastcall CAISound::InputEmitAISound(CAISound *const this, inputdata_t *const inputdata)
{
  double v4; // xmm1_8
  int m_iSoundIndex; // r12d
  const CBaseEntity *EntityByName; // rax
  const char *m_pAsString; // rsi
  string_t iszName; // [rsp+10h] [rbp-30h] BYREF
  Vector vecLocation; // [rsp+20h] [rbp-20h] BYREF

  vecLocation = *CBaseEntity::GetAbsOrigin(this);
  if ( this->m_iszProxyEntityName.u.m_Id != 0 )
  {
    iszName.u.m_Id = this->m_iszProxyEntityName.u.m_Id;
    EntityByName = CGameEntitySystem::FindEntityByName(
                     g_pGameEntitySystem,
                     0,
                     &iszName,
                     this,
                     inputdata->pActivator,
                     inputdata->pCaller,
                     0);
    if ( EntityByName != 0 )
    {
      vecLocation = *CBaseEntity::GetAbsOrigin(EntityByName);
    }
    else
    {
      m_pAsString = "";
      if ( this->m_iszProxyEntityName.u.m_Id != 0 )
        m_pAsString = this->m_iszProxyEntityName.u.m_pAsString;
      DevWarning("Warning- ai_sound cannot find proxy entity named '%s'. Using self.\n", m_pAsString);
    }
  }
  m_iSoundIndex = this->m_iSoundIndex;
  if ( m_iSoundIndex != -1 && m_iSoundIndex == CSoundEnt::FindSound(g_pSoundEnt, this, 0) )
    CSoundEnt::UpdateSound(m_iSoundIndex, &vecLocation, this->m_iVolume, COERCE_DOUBLE(LODWORD(this->m_flDuration)));
  else
    this->m_iSoundIndex = CSoundEnt::InsertSound(
                            this->m_iSoundType | this->m_iSoundContext,
                            &vecLocation,
                            this->m_iVolume,
                            COERCE_DOUBLE(LODWORD(this->m_flDuration)),
                            this,
                            0,
                            0,
                            v4);
}


// CAISound::InputStopAISound  (line 904, @0x0000000002393860, libserver.so)
// calls: CSoundEnt::FindSound, CSoundEnt::FreeSound
// globals: g_pSoundEnt
void __fastcall CAISound::InputStopAISound(CAISound *const this, inputdata_t *const inputdata)
{
  int m_iSoundIndex; // ebx

  m_iSoundIndex = this->m_iSoundIndex;
  if ( m_iSoundIndex != -1 && m_iSoundIndex == CSoundEnt::FindSound(g_pSoundEnt, this, 0) )
    CSoundEnt::FreeSound(m_iSoundIndex);
}


// Script_EmitAISound  (line 919, @0x0000000002395160, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToEnt
// calls: GetScriptDesc<CEntityInstance>, CSoundEnt::InsertSound
__int64 __fastcall Script_EmitAISound(
        int iType,
        int iVolume,
        HSCRIPT hOwner,
        unsigned int soundChannelIndex,
        HSCRIPT hSoundTarget,
        double a6,
        double a7,
        double a8,
        float flDuration)
{
  __int64 (__fastcall *v12)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax
  __int64 v14; // rax
  CBaseEntity *v15; // r9
  __int64 (__fastcall *v16)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *v17; // rax
  __int64 v18; // rax
  CBaseEntity *v19; // rcx
  unsigned int v21; // [rsp+Ch] [rbp-54h]
  unsigned int flDurationa; // [rsp+10h] [rbp-50h]
  CBaseEntity *flDurationb; // [rsp+10h] [rbp-50h]
  Vector vecOrigina; // [rsp+20h] [rbp-40h] BYREF

  *&vecOrigina.x = a6;
  vecOrigina.z = *&a7;
  if ( hSoundTarget != 0 )
  {
    flDurationa = LODWORD(a8);
    v12 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v14 = v12(g_pScriptVM, hSoundTarget, Script);
    *&a8 = flDurationa;
    v15 = v14;
  }
  else
  {
    v15 = 0;
  }
  if ( hOwner != 0 )
  {
    v21 = LODWORD(a8);
    flDurationb = v15;
    v16 = *(*g_pScriptVM + 208LL);
    v17 = GetScriptDesc<CEntityInstance>(0);
    v18 = v16(g_pScriptVM, hOwner, v17);
    v15 = flDurationb;
    *&a8 = v21;
    v19 = v18;
  }
  else
  {
    v19 = 0;
  }
  return CSoundEnt::InsertSound(iType, &vecOrigina, iVolume, a8, v19, soundChannelIndex, v15, a7);
}


