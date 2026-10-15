// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/soundenvelope.cpp:30
class CSoundEnvelope {
private:

	static datamap_t m_DataMap;

	float m_current;  // +0x0
	float m_target;  // +0x4
	float m_rate;  // +0x8
	bool m_forceupdate;  // +0xc

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	CSoundEnvelope();
	void SetTarget(float, float);
	void SetValue(float);
	bool ShouldUpdate();
	void Update(float);
	float Value();

	// sizeof = 16
};

// src/game/shared/soundenvelope.cpp:140
class CCopyRecipientFilter : public IRecipientFilter {
	enum {
		FLAG_ACTIVE = 0x1,
		FLAG_RELIABLE = 0x2,
		FLAG_INIT_MESSAGE = 0x4,
	};

public:

private:

	static datamap_t m_DataMap;

	int m_Flags;  // +0x8

	CCopyRecipientFilter(CCopyRecipientFilter &);
	CCopyRecipientFilter(const CCopyRecipientFilter &);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	CCopyRecipientFilter();
	void Init(IRecipientFilter *);
	virtual NetChannelBufType_t GetNetworkBufType();
	bool IsActive();
	virtual int GetRecipientCount();
	virtual CEntityIndex GetRecipientIndex(int);
	virtual bool IsInitMessage();
	virtual bool AddRecipient(CBasePlayer *);
	virtual ~CCopyRecipientFilter();
	CCopyRecipientFilter & operator=(const CCopyRecipientFilter &);

	// vtable[0] Schema_DynamicBinding
	// vtable[3] GetNetworkBufType
	// vtable[5] GetRecipientCount
	// vtable[6] GetRecipientIndex
	// vtable[4] IsInitMessage
	// vtable[7] AddRecipient
	// sizeof = 40
};

// src/game/shared/soundenvelope.cpp:241
class CSoundPatch {
	int ()() * * _vptr.CSoundPatch;  // +0x0
private:

	static datamap_t m_DataMap;

	static int g_SoundPatchCount;

	float m_shutdownTime;  // +0x30
	float m_flLastTime;  // +0x34
	string_t m_iszSoundName;  // +0x38
	string_t m_iszSoundScriptName;  // +0x40
	EHANDLE m_hEnt;  // +0x48
	int m_entityChannel;  // +0x4c
	int m_flags;  // +0x60
	int m_baseFlags;  // +0x64
	int m_isPlaying;  // +0x68

	float m_flCloseCaptionDuration;  // +0x98

	string_t m_iszClassName;  // +0xa0

	static CUtlMemoryPool<CSoundPatch> s_Allocator;
	CSoundPatch(const CSoundPatch &);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	CSoundPatch();
	~CSoundPatch();
	void Init(IRecipientFilter *, CBaseEntity *, int, const char *, const Vector *, float);
	void ChangePitch(float, float);
	void ChangeVolume(float, float);
	void FadeOut(float, bool);
	float GetPitch();
	float GetVolume();
	string_t GetName();
	string_t GetScriptName();
	void Shutdown();
	bool Update(float, float);
	void Reset();
	void StartSound(float);
	void ResumeSound();
	int IsPlaying();
	float GetShutdownTime();
	void AddPlayerPost(CBasePlayer *);
	void SetCloseCaptionDuration(float);
	void SetBaseFlags(int);
	void SetOrigin(const Vector *);
	CEntityIndex EntIndex();
	float GetVolumeForEngine();
	void * operator new(size_t);
	void * operator new(size_t, int, const char *, int);
	void operator delete(void *);
	void operator delete(void *, int, const char *, int);

	// vtable[0] Schema_DynamicBinding
	// sizeof = 168
};

// src/game/shared/soundenvelope.cpp:759
struct SoundCommand_t {
	float m_time;  // +0x8
	float m_deltaTime;  // +0xc
	float m_value;  // +0x14

	static datamap_t m_DataMap;

private:

	static CUtlMemoryPool<SoundCommand_t> s_Allocator;
	SoundCommand_t();
	SoundCommand_t(CSoundPatch *, float, soundcommands_t, float, float);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	void * operator new(size_t);
	void * operator new(size_t, int, const char *, int);
	void operator delete(void *);
	void operator delete(void *, int, const char *, int);

	// sizeof = 32
};

// src/game/shared/soundenvelope.cpp:803
class CSoundControllerImp : public CSoundEnvelopeController, public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	float m_flLastTime;  // +0x58
	typedef CAutoGameSystem BaseClass;
	CSoundControllerImp(CSoundControllerImp &);
	CSoundControllerImp(const CSoundControllerImp &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CSoundControllerImp *);
	CSoundControllerImp();
	void ProcessCommand(SoundCommand_t *);
	void RemoveFromList(CSoundPatch *);
	void SaveSoundPatch(CSoundPatch *, ISave *);
	void RestoreSoundPatch(CSoundPatch * *, IRestore *);
	virtual void RestoreGame(const EventRestoreGame_t &);
	virtual void Play(CSoundPatch *, float, float, float);
	virtual void CommandAdd(CSoundPatch *, float, soundcommands_t, float, float);
	virtual void SystemReset();
	virtual void SystemUpdate();
	virtual void CommandClear(CSoundPatch *);
	virtual void ShutdownSoundPatch(CSoundPatch *);
	virtual CSoundPatch * SoundCreate(IRecipientFilter &, CEntityIndex, const char *);
	virtual CSoundPatch * SoundCreate(IRecipientFilter &, CEntityIndex, int, const char *, float, float);
	virtual CSoundPatch * SoundCreate(IRecipientFilter &, CEntityIndex, int, const char *, float, const Vector *, float);
	virtual CSoundPatch * SoundCreate(IRecipientFilter &, CEntityIndex, int, const char *);
	virtual CSoundPatch * SoundCreate(IRecipientFilter &, CEntityIndex, const EmitSound_t &);
	virtual void SoundDestroy(CSoundPatch *);
	virtual void SoundChangePitch(CSoundPatch *, float, float);
	virtual void SoundChangeVolume(CSoundPatch *, float, float);
	virtual void SoundFadeOut(CSoundPatch *, float, bool);
	virtual float SoundGetPitch(CSoundPatch *);
	virtual float SoundGetVolume(CSoundPatch *);
	virtual string_t SoundGetName(CSoundPatch *);
	virtual string_t SoundGetScriptName(CSoundPatch *);
	virtual void SoundSetCloseCaptionDuration(CSoundPatch *, float);
	virtual float SoundPlayEnvelope(CSoundPatch *, soundcommands_t, envelopePoint_t *, int);
	virtual float SoundPlayEnvelope(CSoundPatch *, soundcommands_t, envelopeDescription_t *);
	virtual void CheckLoopingSoundsForPlayer(CBasePlayer *);
	void CommandInsert(SoundCommand_t *);
	virtual void SoundSetOrigin(CSoundPatch *, const Vector *);
	virtual void PreClientUpdate(const EventServerPreClientUpdate_t &);
	virtual void GameDeactivate(const EventGameDeactivate_t &);
	virtual ~CSoundControllerImp();

	// vtable[24] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[25] DoesGameSystemReallocate
	// vtable[26] SetGameSystemGlobalPtrs
	// vtable[27] RestoreGame
	// vtable[2] Play
	// vtable[3] CommandAdd
	// vtable[0] SystemReset
	// vtable[1] SystemUpdate
	// vtable[4] CommandClear
	// vtable[5] ShutdownSoundPatch
	// vtable[6] SoundCreate
	// vtable[7] SoundCreate
	// vtable[8] SoundCreate
	// vtable[9] SoundCreate
	// vtable[10] SoundCreate
	// vtable[11] SoundDestroy
	// vtable[12] SoundChangePitch
	// vtable[13] SoundChangeVolume
	// vtable[14] SoundFadeOut
	// vtable[15] SoundGetPitch
	// vtable[16] SoundGetVolume
	// vtable[20] SoundGetName
	// vtable[21] SoundGetScriptName
	// vtable[22] SoundSetCloseCaptionDuration
	// vtable[17] SoundPlayEnvelope
	// vtable[18] SoundPlayEnvelope
	// vtable[19] CheckLoopingSoundsForPlayer
	// vtable[23] SoundSetOrigin
	// vtable[28] PreClientUpdate
	// vtable[29] GameDeactivate
	// sizeof = 96
};

// src/game/shared/soundenvelope.cpp:1410
class CSoundPatchSaveRestoreOps : public CClassPtrSaveRestoreOps {
public:

	CSoundPatchSaveRestoreOps(CSoundPatchSaveRestoreOps &);
	CSoundPatchSaveRestoreOps(const CSoundPatchSaveRestoreOps &);
	CSoundPatchSaveRestoreOps();
	virtual void Save(const SaveRestoreFieldInfo_t &, ISave *);
	virtual void Restore(const SaveRestoreFieldInfo_t &, IRestore *);

	// vtable[0] Save
	// vtable[1] Restore
	// sizeof = 8
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSoundEnvelope::AddDatadescMetadataKeys  (line 59, @0x00000000023954b0, libserver.so)
void __fastcall CSoundEnvelope::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CSoundEnvelope::GetBaseMap  (line 59, @0x00000000023954c0, libserver.so)
datamap_t *__cdecl CSoundEnvelope::GetBaseMap()
{
  return 0;
}


// DataMapInit<CSoundEnvelope>  (line 59, @0x00000000023954d0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "CSoundEnvelope"
// globals: `guard variable for'DataMapInit<CSoundEnvelope>(CSoundEnvelope *)::nameHolder, CSoundEnvelope::m_DataMap, DataMapInit<CSoundEnvelope>(CSoundEnvelope *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CSoundEnvelope>(CSoundEnvelope *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CSoundEnvelope>(CSoundEnvelope *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CSoundEnvelope>(CSoundEnvelope *)::nameHolder) != 0 )
  {
    DataMapInit<CSoundEnvelope>(CSoundEnvelope *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CSoundEnvelope>(CSoundEnvelope *)::nameHolder.m_pszBase = "CSoundEnvelope";
    DataMapInit<CSoundEnvelope>(CSoundEnvelope *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CSoundEnvelope>(CSoundEnvelope *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CSoundEnvelope>(CSoundEnvelope *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CSoundEnvelope>(CSoundEnvelope *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CSoundEnvelope>(CSoundEnvelope *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CSoundEnvelope>(CSoundEnvelope *)::nameHolder,
      &_dso_handle);
  }
  CSoundEnvelope::m_DataMap.baseMap = 0;
  CSoundEnvelope::m_DataMap.dataDesc = &DataMapInit<CSoundEnvelope>(CSoundEnvelope *)::dataDesc[1];
  CSoundEnvelope::m_DataMap.dataNumFields = 4;
  return &CSoundEnvelope::m_DataMap;
}


// CSoundEnvelope::SetTarget  (line 73, @0x0000000002395590, libserver.so)  // inlines: SetValue
// callers: CSoundPatch::ChangePitch, CSoundPatch::ChangeVolume, CSoundPatch::FadeOut
void __fastcall CSoundEnvelope::SetTarget(CSoundEnvelope *const this, float a2, float target, float deltaTime)
{
  float v4; // xmm4_4
  float v5; // xmm4_4

  v4 = a2 - this->m_current;
  if ( v4 == 0.0 || target <= 0.0 )
  {
    if ( this->m_current != a2 )
      this->m_forceupdate = 1;
    if ( a2 != this->m_target )
      this->m_forceupdate = 1;
    this->m_target = a2;
    this->m_current = a2;
    this->m_rate = 0.0;
  }
  else
  {
    this->m_target = a2;
    v5 = fabs(v4 / target);
    if ( v5 < 0.1 )
      v5 = 0.1;
    this->m_rate = v5;
  }
}


// CSoundEnvelope::SetValue  (line 98, @0x0000000002395620, libserver.so)
void __fastcall CSoundEnvelope::SetValue(CSoundEnvelope *const this, float a2, float value)
{
  if ( a2 != this->m_target )
    this->m_forceupdate = 1;
  this->m_target = a2;
  this->m_current = a2;
  this->m_rate = 0.0;
}


// CSoundEnvelope::ShouldUpdate  (line 114, @0x0000000002395650, libserver.so)
bool __fastcall CSoundEnvelope::ShouldUpdate(CSoundEnvelope *const this)
{
  bool result; // al

  result = this->m_forceupdate;
  if ( !result )
    return this->m_current != this->m_target;
  this->m_forceupdate = 0;
  return result;
}


// CSoundEnvelope::Update  (line 135, @0x0000000002395680, libserver.so)  // inlines: Approach
void __fastcall CSoundEnvelope::Update(CSoundEnvelope *const this, float a2, float deltaTime)
{
  float m_target; // xmm1_4
  float m_current; // xmm2_4
  float v5; // xmm0_4

  m_target = this->m_target;
  m_current = this->m_current;
  v5 = a2 * this->m_rate;
  if ( (m_target - this->m_current) > v5 )
  {
    this->m_current = v5 + m_current;
  }
  else
  {
    if ( -v5 > (m_target - m_current) )
      m_target = m_current - v5;
    this->m_current = m_target;
  }
}


// CCopyRecipientFilter::~CCopyRecipientFilter  (line 140, @0x00000000023ac660, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IRecipientFilter
// calls: CUtlMemory<CEntityIndex, int>::Purge
void __fastcall CCopyRecipientFilter::~CCopyRecipientFilter(CCopyRecipientFilter *const this)
{
  bool v2; // zf
  CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_Recipients.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IRecipientFilter = &off_40ABA90;
  this->m_Recipients.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_Recipients.m_Memory,
        CUtlMemory<CEntityIndex,int>::Purge(&this->m_Recipients.m_Memory),
        (this->m_Recipients.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    this->_vptr_IRecipientFilter = &off_3FCAC70;
  }
  else
  {
    CUtlMemory<CEntityIndex,int>::Purge(p_m_Memory);
    this->_vptr_IRecipientFilter = &off_3FCAC70;
  }
}


// CCopyRecipientFilter::~CCopyRecipientFilter  (line 140, @0x00000000023ac6d0, libserver.so)  // inlines: Purge, RemoveAll, ~CCopyRecipientFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IRecipientFilter
// calls: operator delete, CUtlMemory<CEntityIndex, int>::Purge
void __fastcall CCopyRecipientFilter::~CCopyRecipientFilter(CCopyRecipientFilter *const this)
{
  bool v2; // zf
  CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_Recipients.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IRecipientFilter = &off_40ABA90;
  this->m_Recipients.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_Recipients.m_Memory;
    CUtlMemory<CEntityIndex,int>::Purge(&this->m_Recipients.m_Memory);
    if ( (this->m_Recipients.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(p_m_Memory);
  }
  this->_vptr_IRecipientFilter = &off_3FCAC70;
  operator delete(this);
}


// CCopyRecipientFilter::Schema_DynamicBinding  (line 142, @0x00000000023a9370, libserver.so)
// globals: CCopyRecipientFilter::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CCopyRecipientFilter::Schema_DynamicBinding(
        const CCopyRecipientFilter *const this)
{
  return CCopyRecipientFilter::s_pSchemaBinding;
}


// CCopyRecipientFilter::GetNetworkBufType  (line 171, @0x00000000023a9380, libserver.so)
NetChannelBufType_t __fastcall CCopyRecipientFilter::GetNetworkBufType(const CCopyRecipientFilter *const this)
{
  return (this->m_Flags & 2) != 0;
}


// CCopyRecipientFilter::GetRecipientCount  (line 187, @0x00000000023a9390, libserver.so)
int __fastcall CCopyRecipientFilter::GetRecipientCount(const CCopyRecipientFilter *const this)
{
  return this->m_Recipients.m_Size;
}


// CCopyRecipientFilter::GetRecipientIndex  (line 192, @0x00000000023abb30, libserver.so)  // inlines: operator[]
CEntityIndex __fastcall CCopyRecipientFilter::GetRecipientIndex(const CCopyRecipientFilter *const this, int slot)
{
  return this->m_Recipients.m_Memory.m_pMemory[slot].m_Data;
}


// CCopyRecipientFilter::IsInitMessage  (line 197, @0x00000000023a93a0, libserver.so)
bool __fastcall CCopyRecipientFilter::IsInitMessage(const CCopyRecipientFilter *const this)
{
  return (this->m_Flags & 4) != 0;
}


// CCopyRecipientFilter::AddRecipient  (line 202, @0x00000000023b4a30, libserver.so)  // inlines: AddToTail, CopyConstruct<CEntityIndex>, Element, GrowMemory, entindex, operator[]
// calls: CEntityInstance::GetEntityIndex, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::Find, CUtlMemory<CEntityIndex, int>::Grow
bool __fastcall CCopyRecipientFilter::AddRecipient(CCopyRecipientFilter *const this, CBasePlayer *player)
{
  bool v2; // r12
  __int64 m_Size; // r12
  int v6; // eax
  CEntityIndex *v7; // rax
  CEntityIndex index; // [rsp+0h] [rbp-20h] BYREF

  v2 = 0;
  index.m_Data = CEntityInstance::GetEntityIndex(player).m_Data;
  if ( index.m_Data < 0
    || CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::Find(&this->m_Recipients, &index) != -1 )
  {
    return v2;
  }
  m_Size = this->m_Recipients.m_Size;
  v6 = this->m_Recipients.m_Size;
  if ( m_Size == this->m_Recipients.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CEntityIndex,int>::Grow(&this->m_Recipients.m_Memory, 1);
    v6 = this->m_Recipients.m_Size;
  }
  this->m_Recipients.m_Size = v6 + 1;
  v7 = &this->m_Recipients.m_Memory.m_pMemory[m_Size];
  if ( v7 == 0 )
    return 1;
  v7->m_Data = index.m_Data;
  return 1;
}


// CCopyRecipientFilter::AddDatadescMetadataKeys  (line 231, @0x00000000023956d0, libserver.so)
void __fastcall CCopyRecipientFilter::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CCopyRecipientFilter::GetBaseMap  (line 231, @0x00000000023956e0, libserver.so)
datamap_t *__cdecl CCopyRecipientFilter::GetBaseMap()
{
  return 0;
}


// DataMapInit<CCopyRecipientFilter>  (line 231, @0x00000000023956f0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorDataOps, GetDataOps<CUtlVector<CEntityIndex, CUtlMemory<CEntityIndex, int> > >
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "CCopyRecipientFilter"
// globals: `guard variable for'DataMapInit<CCopyRecipientFilter>(CCopyRecipientFilter *)::nameHolder, `guard variable for'DataMapInit<CCopyRecipientFilter>(CCopyRecipientFilter *)::dataDesc, CCopyRecipientFilter::m_DataMap, `guard variable for'CUtlVectorDataopsInstantiator<5>::GetDataOps<CUtlVector<CEntityIndex,CUtlMemory<CEntityIndex,int>>>(CUtlVector<CEntityIndex,CUtlMemory<CEnti, CUtlVectorDataopsInstantiator<5>::GetDataOps<CUtlVector<CEntityIndex,CUtlMemory<CEntityIndex,int>>>(CUtlVector<CEntityIndex,CUtlMemory<CEntityIndex,int>> *)::op, DataMapInit<CCopyRecipientFilter>(CCopyRecipientFilter *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CCopyRecipientFilter>(CCopyRecipientFilter *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CCopyRecipientFilter>(CCopyRecipientFilter *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CCopyRecipientFilter>(CCopyRecipientFilter *)::nameHolder) != 0 )
  {
    DataMapInit<CCopyRecipientFilter>(CCopyRecipientFilter *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CCopyRecipientFilter>(CCopyRecipientFilter *)::nameHolder.m_pszBase = "CCopyRecipientFilter";
    DataMapInit<CCopyRecipientFilter>(CCopyRecipientFilter *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CCopyRecipientFilter>(CCopyRecipientFilter *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CCopyRecipientFilter>(CCopyRecipientFilter *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CCopyRecipientFilter>(CCopyRecipientFilter *)::nameHolder.m_nLenBase = 20;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CCopyRecipientFilter>(CCopyRecipientFilter *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CCopyRecipientFilter>(CCopyRecipientFilter *)::nameHolder,
      &_dso_handle);
  }
  CCopyRecipientFilter::m_DataMap.baseMap = 0;
  if ( `guard variable for'datamap_t * DataMapInit<CCopyRecipientFilter>(CCopyRecipientFilter *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CCopyRecipientFilter>(CCopyRecipientFilter *)::dataDesc) != 0 )
  {
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<5>::GetDataOps<CUtlVector<CEntityIndex,CUtlMemory<CEntityIndex,int>>>(CUtlVector<CEntityIndex,CUtlMemory<CEntityIndex,int>> *)::ops == 0
      && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<5>::GetDataOps<CUtlVector<CEntityIndex,CUtlMemory<CEntityIndex,int>>>(CUtlVector<CEntityIndex,CUtlMemory<CEntityIndex,int>> *)::ops) != 0 )
    {
      CUtlVectorDataopsInstantiator<5>::GetDataOps<CUtlVector<CEntityIndex,CUtlMemory<CEntityIndex,int>>>(CUtlVector<CEntityIndex,CUtlMemory<CEntityIndex,int>> *)::ops = off_40AE790;
      __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<5>::GetDataOps<CUtlVector<CEntityIndex,CUtlMemory<CEntityIndex,int>>>(CUtlVector<CEntityIndex,CUtlMemory<CEntityIndex,int>> *)::ops);
    }
    DataMapInit<CCopyRecipientFilter>(CCopyRecipientFilter *)::dataDesc[2].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<5>::GetDataOps<CUtlVector<CEntityIndex,CUtlMemory<CEntityIndex,int>>>(CUtlVector<CEntityIndex,CUtlMemory<CEntityIndex,int>> *)::ops;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CCopyRecipientFilter>(CCopyRecipientFilter *)::dataDesc);
  }
  CCopyRecipientFilter::m_DataMap.dataNumFields = 2;
  CCopyRecipientFilter::m_DataMap.dataDesc = &DataMapInit<CCopyRecipientFilter>(CCopyRecipientFilter *)::dataDesc[1];
  return &CCopyRecipientFilter::m_DataMap;
}


// CSoundPatch::Schema_DynamicBinding  (line 243, @0x00000000023a93b0, libserver.so)
// globals: CSoundPatch::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CSoundPatch::Schema_DynamicBinding(const CSoundPatch *const this)
{
  return CSoundPatch::s_pSchemaBinding;
}


// CSoundPatch::operator delete  (line 336, @0x00000000023aec90, libserver.so)  // inlines: Free
// calls: CUtlMemoryPoolBase::Free
// globals: CSoundPatch::s_Allocator
void __fastcall CSoundPatch::operator delete(void *p)
{
  CUtlMemoryPoolBase::Free(&CSoundPatch::s_Allocator, p);
}


// report_soundpatch  (line 345, @0x0000000002381250, libserver.so)
// calls: Msg
// strings: "Current sound patches: %d\n"
// globals: CSoundPatch::g_SoundPatchCount
void __fastcall report_soundpatch(const CCommandContext *const ctx, const CCommand *const args)
{
  Msg("Current sound patches: %d\n", CSoundPatch::g_SoundPatchCount);
}


// CSoundPatch::AddDatadescMetadataKeys  (line 353, @0x0000000002395840, libserver.so)
void __fastcall CSoundPatch::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CSoundPatch::GetBaseMap  (line 353, @0x0000000002395850, libserver.so)
datamap_t *__cdecl CSoundPatch::GetBaseMap()
{
  return 0;
}


// DataMapInit<CSoundPatch>  (line 353, @0x0000000002395860, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "CSoundPatch"
// globals: `guard variable for'DataMapInit<CSoundPatch>(CSoundPatch *)::nameHolder, CSoundPatch::m_DataMap, DataMapInit<CSoundPatch>(CSoundPatch *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CSoundPatch>(CSoundPatch *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CSoundPatch>(CSoundPatch *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CSoundPatch>(CSoundPatch *)::nameHolder) != 0 )
  {
    DataMapInit<CSoundPatch>(CSoundPatch *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CSoundPatch>(CSoundPatch *)::nameHolder.m_pszBase = "CSoundPatch";
    DataMapInit<CSoundPatch>(CSoundPatch *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CSoundPatch>(CSoundPatch *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CSoundPatch>(CSoundPatch *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CSoundPatch>(CSoundPatch *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CSoundPatch>(CSoundPatch *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CSoundPatch>(CSoundPatch *)::nameHolder,
      &_dso_handle);
  }
  CSoundPatch::m_DataMap.baseMap = 0;
  CSoundPatch::m_DataMap.dataDesc = &DataMapInit<CSoundPatch>(CSoundPatch *)::dataDesc[1];
  CSoundPatch::m_DataMap.dataNumFields = 17;
  return &CSoundPatch::m_DataMap;
}


// CSoundPatch::Init  (line 385, @0x00000000023a1580, libserver.so)  // inlines: AddToTail, CopyConstruct<CEntityIndex>, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Init, Set, SetValue, entindex, operator=, operator[]
// calls: CEntityInstance::GetEntityIndex, AllocPooledString, CUtlMemory<CEntityIndex, int>::Grow, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// callers: CSoundControllerImp::SoundCreate
// strings: "CSoundPatch::Init called with NULL pEnt, playing from world instead\n"
// globals: CSoundPatch::Init(IRecipientFilter *,CBaseEntity *,int,char const*,Vector const*,float)::__executeCount
void __fastcall CSoundPatch::Init(
        CSoundPatch *const this,
        IRecipientFilter *pFilter,
        CBaseEntity *pEnt,
        int channel,
        const char *pSoundName,
        const Vector *pSoundOrigin,
        float scriptVolume)
{
  CEntityIdentity *m_pEntity; // rsi
  int v13; // eax
  __int16 v14; // di
  bool v15; // zf
  int i; // r13d
  int v17; // eax
  __int64 m_Size; // rdx
  int v19; // ecx
  CEntityIndex *v20; // rdx
  int v21; // eax
  int v22; // [rsp+8h] [rbp-48h]
  int v23; // [rsp+Ch] [rbp-44h]
  _QWORD v24[8]; // [rsp+10h] [rbp-40h] BYREF

  if ( pEnt != 0 )
  {
    m_pEntity = pEnt->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v14 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hEnt.m_Index) = v14 | this->m_hEnt.m_Index & 0x8000;
      this->m_hEnt.m_Index = (v13 << 15) | this->m_hEnt.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hEnt.m_Index = -1;
    }
    this->m_soundEntityIndex = CEntityInstance::GetEntityIndex(pEnt);
  }
  else
  {
    v21 = CSoundPatch::Init(IRecipientFilter *,CBaseEntity *,int,char const*,Vector const*,float)::__executeCount;
    this->m_hEnt.m_Index = -1;
    if ( v21 <= 0 )
    {
      CSoundPatch::Init(IRecipientFilter *,CBaseEntity *,int,char const*,Vector const*,float)::__executeCount = v21 + 1;
      if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
        LoggingSystem_Log(LOG_SERVER, 2, "CSoundPatch::Init called with NULL pEnt, playing from world instead\n");
    }
    this->m_soundEntityIndex.m_Data = 0;
  }
  this->m_entityChannel = channel;
  AllocPooledString(v24, pSoundName);
  this->m_iszSoundScriptName.u.m_Id = v24[0];
  AllocPooledString(v24, pSoundName);
  v15 = this->m_volume.m_target == 0.0;
  this->m_iszSoundName.u.m_Id = v24[0];
  if ( !v15 )
    this->m_volume.m_forceupdate = 1;
  v15 = this->m_pitch.m_target == 0.0;
  this->m_volume.m_target = 0.0;
  this->m_volume.m_current = 0.0;
  this->m_volume.m_rate = 0.0;
  if ( !v15 )
    this->m_pitch.m_forceupdate = 1;
  this->m_pitch.m_target = 0.0;
  this->m_pitch.m_current = 0.0;
  this->m_pitch.m_rate = 0.0;
  this->m_isPlaying = 0;
  this->m_shutdownTime = 0.0;
  this->m_flLastTime = 0.0;
  this->m_Filter.m_Flags = 1;
  if ( ((*(pFilter->_vptr_IRecipientFilter + 3))(pFilter) & 1) != 0 )
    this->m_Filter.m_Flags |= 2u;
  if ( (*(pFilter->_vptr_IRecipientFilter + 4))(pFilter) != 0 )
    this->m_Filter.m_Flags |= 4u;
  for ( i = 0; i < (*(pFilter->_vptr_IRecipientFilter + 5))(pFilter); ++i )
  {
    v17 = (*(pFilter->_vptr_IRecipientFilter + 6))(pFilter, i);
    if ( v17 >= 0 )
    {
      m_Size = this->m_Filter.m_Recipients.m_Size;
      v19 = this->m_Filter.m_Recipients.m_Size;
      if ( m_Size == this->m_Filter.m_Recipients.m_Memory.m_nAllocationCount )
      {
        v22 = v17;
        v23 = this->m_Filter.m_Recipients.m_Size;
        CUtlMemory<CEntityIndex,int>::Grow(&this->m_Filter.m_Recipients.m_Memory, 1);
        v19 = this->m_Filter.m_Recipients.m_Size;
        v17 = v22;
        m_Size = v23;
      }
      this->m_Filter.m_Recipients.m_Size = v19 + 1;
      v20 = &this->m_Filter.m_Recipients.m_Memory.m_pMemory[m_Size];
      if ( v20 != 0 )
        v20->m_Data = v17;
    }
  }
  this->m_baseFlags = 0;
  if ( pSoundOrigin != 0 )
  {
    this->m_soundOrigin.x = pSoundOrigin->x;
    this->m_soundOrigin.y = pSoundOrigin->y;
    this->m_soundOrigin.z = pSoundOrigin->z;
  }
}


// CSoundPatch::ChangePitch  (line 431, @0x0000000002395920, libserver.so)  // inlines: SetValue
// calls: CSoundEnvelope::SetTarget
// callers: CSoundControllerImp::SoundChangePitch, CSoundControllerImp::ProcessCommand, CSoundControllerImp::SoundCreate, CSoundControllerImp::Play
void __fastcall CSoundPatch::ChangePitch(CSoundPatch *const this, float a2, float pitchTarget, float deltaTime)
{
  CSoundEnvelope *p_m_pitch; // r12

  p_m_pitch = &this->m_pitch;
  this->m_flags |= 2u;
  CSoundEnvelope::SetTarget(&this->m_pitch, a2, pitchTarget, a2);
  if ( pitchTarget == 0.0 )
  {
    if ( a2 != this->m_pitch.m_target )
      this->m_pitch.m_forceupdate = 1;
    this->m_pitch.m_target = a2;
    this->m_pitch.m_current = a2;
    this->m_pitch.m_rate = 0.0;
  }
  else
  {
    CSoundEnvelope::SetTarget(p_m_pitch, a2, pitchTarget, a2);
  }
}


// CSoundPatch::ChangeVolume  (line 452, @0x00000000023959c0, libserver.so)  // inlines: SetValue
// calls: CSoundEnvelope::SetTarget
// callers: CSoundControllerImp::SoundChangeVolume, CSoundControllerImp::ProcessCommand, CSoundControllerImp::SoundCreate, CSoundControllerImp::Play
void __fastcall CSoundPatch::ChangeVolume(CSoundPatch *const this, float a2, float volumeTarget, float deltaTime)
{
  float v4; // xmm2_4

  this->m_flags |= 1u;
  v4 = fminf(1.0, a2);
  if ( volumeTarget == 0.0 )
  {
    if ( v4 != this->m_volume.m_target )
      this->m_volume.m_forceupdate = 1;
    this->m_volume.m_target = v4;
    this->m_volume.m_current = v4;
    this->m_volume.m_rate = 0.0;
  }
  else
  {
    CSoundEnvelope::SetTarget(&this->m_volume, v4, volumeTarget, v4);
  }
}


// CSoundPatch::FadeOut  (line 473, @0x0000000002395a30, libserver.so)  // inlines: ChangeVolume, SetValue
// calls: CSoundEnvelope::SetTarget
// callers: CSoundControllerImp::SoundFadeOut, CSoundControllerImp::ProcessCommand
void __fastcall CSoundPatch::FadeOut(CSoundPatch *const this, float a2, float deltaTime, bool destroyOnFadeout)
{
  float v4; // xmm3_4
  bool v6; // [rsp-18h] [rbp-20h]

  v4 = a2;
  this->m_flags |= 1u;
  if ( a2 == 0.0 )
  {
    if ( this->m_volume.m_target != 0.0 )
      this->m_volume.m_forceupdate = 1;
    this->m_volume.m_target = 0.0;
    this->m_volume.m_current = 0.0;
    this->m_volume.m_rate = 0.0;
  }
  else
  {
    v6 = destroyOnFadeout;
    CSoundEnvelope::SetTarget(&this->m_volume, 0.0, a2, 0.0);
    destroyOnFadeout = v6;
    v4 = a2;
  }
  if ( !destroyOnFadeout )
    this->m_shutdownTime = (*(g_pEffects->_vptr_IPredictionSystem + 28))(g_pEffects) + v4;
}


// CSoundPatch::GetPitch  (line 485, @0x0000000002395b70, libserver.so)
float __fastcall CSoundPatch::GetPitch(CSoundPatch *const this)
{
  return this->m_pitch.m_current;
}


// CSoundPatch::GetVolume  (line 493, @0x0000000002395b80, libserver.so)
float __fastcall CSoundPatch::GetVolume(CSoundPatch *const this)
{
  return this->m_volume.m_current;
}


// CSoundPatch::EntIndex  (line 523, @0x00000000023aecc0, libserver.so)  // inlines: CEntityIndex, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, entindex, operator CEntityInstance*
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CEntityInstance::GetEntityIndex
// callers: CSoundPatch::Update, CSoundPatch::StartSound, CSoundPatch::ResumeSound, CSoundPatch::AddPlayerPost
// strings: "CSoundPatch:  invalid entity on sound %s"
// globals: CEntityHandle::gm_pEntityList
CEntityIndex __fastcall CSoundPatch::EntIndex(const CSoundPatch *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rcx
  __int64 v4; // rsi
  CEntityIdentity *v5; // rdx
  const char *m_pAsString; // rcx
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rdx

  m_Index = this->m_hEnt.m_Index;
  if ( m_Index != -1 )
  {
    if ( m_Index != -2
      && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEnt.m_Index) >> 9) & 0x3F]) != 0
      && (v4 = this->m_hEnt.m_Index & 0x1FF, (v5 = &v3[v4]) != 0)
      && m_Index == v5->m_EHandle.m_Index
      && v5->m_pInstance != 0 )
    {
      v8 = &v3[v4];
    }
    else
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
      {
        m_pAsString = "";
        if ( this->m_iszSoundScriptName.u.m_Id != 0 )
          m_pAsString = this->m_iszSoundScriptName.u.m_pAsString;
        LoggingSystem_Log(LOG_SERVER, 2, "CSoundPatch:  invalid entity on sound %s", m_pAsString);
      }
      m_Index = this->m_hEnt.m_Index;
      if ( m_Index + 2 <= 1 )
        return -1;
      v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEnt.m_Index) >> 9) & 0x3F];
      if ( v7 == 0 )
        return -1;
      v8 = &v7[this->m_hEnt.m_Index & 0x1FF];
      if ( v8 == 0 )
        return -1;
    }
    if ( m_Index == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
      return CEntityInstance::GetEntityIndex(v8->m_pInstance);
  }
  return -1;
}


// CSoundPatch::GetVolumeForEngine  (line 538, @0x0000000002395b90, libserver.so)
float __fastcall CSoundPatch::GetVolumeForEngine(CSoundPatch *const this)
{
  return this->m_volume.m_current;
}


// CSoundPatch::Shutdown  (line 546, @0x0000000002388560, libserver.so)  // inlines: EntIndex, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, StopSound, entindex, operator CEntityInstance*
// calls: CSoundOpGameSystem::StopSoundEvent, CEntityInstance::GetEntityIndex
// callers: CSoundControllerImp::SystemReset, CSoundPatch::Shutdown, CSoundPatch::Update, CSoundControllerImp::RemoveFromList, CSoundControllerImp::ShutdownSoundPatch, CSoundControllerImp::ProcessCommand
// globals: CEntityHandle::gm_pEntityList
void __fastcall CSoundPatch::Shutdown(CSoundPatch *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  int32 m_Data; // eax

  m_Index = this->m_hEnt.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEnt.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = &v3[this->m_hEnt.m_Index & 0x1FF]) != 0
    && m_Index == v4->m_EHandle.m_Index
    && v4->m_pInstance != 0 )
  {
    m_Data = CEntityInstance::GetEntityIndex(v4->m_pInstance).m_Data;
  }
  else
  {
    m_Data = this->m_soundEntityIndex.m_Data;
  }
  if ( m_Data >= 0 && this->m_guid.m_nGuid.m_Data != 0 )
    CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, &this->m_guid);
  this->m_isPlaying = 0;
}


// CSoundPatch::Shutdown  (line 546, @0x0000000002395ba0, libserver.so)
// calls: CSoundPatch::Shutdown
void __fastcall CSoundPatch::Shutdown(CSoundPatch *const this)
{
  if ( this->m_isPlaying != 0 )
    CSoundPatch::Shutdown(this);
}


// CSoundPatch::Update  (line 582, @0x0000000002395bc0, libserver.so)  // inlines: AllocateData, Approach, CSosFieldData, CSosFieldDataFloat, CSosFieldDataFloat3, ClearData, CopyData, EntIndex, Get, GetDataPtr, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, Init, IsValid, LookupEntity, SetValue, ShouldUpdate, Shutdown, String, ToCStr, Update, V_memcpy, entindex, memcpy, operator CEntityInstance*, ~CSosFieldData, ~CSosFieldDataFloat, ~CSosFieldDataFloat3
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log, DevWarning(char const*,...), CSoundPatch::Shutdown, CEntityInstance::GetEntityIndex, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CSoundPatch::EntIndex, operator new [], CSosFieldData::ClearData, _Unwind_Resume
// callers: CSoundControllerImp::SystemUpdate
// strings: "CSoundPatch:  invalid entity on sound %s", "CSoundPatch::Update:  Removing CSoundPatch (%s) with NULL EHandle\n", "volume_atten"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CSoundPatch::Update(CSoundPatch *const this, float a2, float time, float deltaTime)
{
  float m_shutdownTime; // xmm2_4
  __int64 result; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rcx
  __int64 v9; // rsi
  CEntityIdentity *v10; // rdx
  char IsChannelEnabled; // al
  const char *m_pAsString; // rcx
  CEntityIdentity *v13; // rcx
  CEntityIdentity *v14; // rdx
  const char *v15; // rsi
  CEntityIndex v16; // eax
  __m128i v17; // xmm1
  float m_current; // xmm0_4
  float m_target; // xmm2_4
  float v20; // xmm3_4
  int m_flags; // eax
  int v22; // eax
  __m128i m_current_low; // xmm0
  float v24; // r12d
  unsigned int v25; // edx
  __m128i x_low; // xmm6
  vec_t z; // r12d
  vec_t y; // r13d
  int v29; // r14d
  SosFieldValueMem_t *m_pData; // rax
  float deltaTimea; // [rsp+Ch] [rbp-44h]
  float deltaTimeb; // [rsp+Ch] [rbp-44h]
  CSosFieldData fieldData; // [rsp+10h] [rbp-40h] BYREF

  m_shutdownTime = this->m_shutdownTime;
  if ( m_shutdownTime != 0.0 && a2 > m_shutdownTime )
  {
    if ( this->m_isPlaying == 0 )
      return 0;
LABEL_23:
    CSoundPatch::Shutdown(this);
    return 0;
  }
  m_Index = this->m_hEnt.m_Index;
  if ( m_Index == -1 )
    goto LABEL_20;
  if ( m_Index != -2 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEnt.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = this->m_hEnt.m_Index & 0x1FF;
      v10 = &v8[v9];
      if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index && v10->m_pInstance != 0 )
      {
        v14 = &v8[v9];
        goto LABEL_19;
      }
    }
  }
  deltaTimea = time;
  IsChannelEnabled = LoggingSystem_IsChannelEnabled(LOG_SERVER, 2);
  time = deltaTimea;
  if ( IsChannelEnabled != 0 )
  {
    m_pAsString = "";
    if ( this->m_iszSoundScriptName.u.m_Id != 0 )
      m_pAsString = this->m_iszSoundScriptName.u.m_pAsString;
    LoggingSystem_Log(LOG_SERVER, 2, "CSoundPatch:  invalid entity on sound %s", m_pAsString);
    time = deltaTimea;
  }
  m_Index = this->m_hEnt.m_Index;
  if ( m_Index + 2 <= 1
    || (v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEnt.m_Index) >> 9) & 0x3F]) == 0
    || (v14 = &v13[this->m_hEnt.m_Index & 0x1FF]) == 0 )
  {
LABEL_20:
    v15 = "";
    if ( this->m_iszSoundName.u.m_Id != 0 )
      v15 = this->m_iszSoundName.u.m_pAsString;
    DevWarning("CSoundPatch::Update:  Removing CSoundPatch (%s) with NULL EHandle\n", v15);
    if ( this->m_isPlaying == 0 )
      return 0;
    goto LABEL_23;
  }
LABEL_19:
  if ( m_Index != v14->m_EHandle.m_Index )
    goto LABEL_20;
  deltaTimeb = time;
  if ( v14->m_pInstance == 0 )
    goto LABEL_20;
  v16.m_Data = CEntityInstance::GetEntityIndex(v14->m_pInstance).m_Data;
  v17 = LODWORD(deltaTimeb);
  if ( v16.m_Data < 0 )
    goto LABEL_20;
  if ( this->m_pitch.m_forceupdate )
  {
    m_current = this->m_pitch.m_current;
    this->m_pitch.m_forceupdate = 0;
  }
  else
  {
    m_current = this->m_pitch.m_current;
    if ( m_current == this->m_pitch.m_target )
    {
      v22 = this->m_flags & 0xFFFFFFFD;
      this->m_flags = v22;
      goto LABEL_31;
    }
  }
  m_target = this->m_pitch.m_target;
  v20 = this->m_pitch.m_rate * deltaTimeb;
  if ( (m_target - m_current) <= v20 )
  {
    if ( -v20 > (m_target - m_current) )
      m_target = m_current - v20;
  }
  else
  {
    m_target = v20 + m_current;
  }
  m_flags = this->m_flags;
  this->m_pitch.m_current = m_target;
  v22 = m_flags | 2;
  this->m_flags = v22;
LABEL_31:
  if ( this->m_volume.m_forceupdate )
  {
    m_current_low = LODWORD(this->m_volume.m_current);
    this->m_volume.m_forceupdate = 0;
LABEL_33:
    v24 = this->m_volume.m_target;
    *v17.m128i_i32 = deltaTimeb * this->m_volume.m_rate;
    if ( (v24 - *m_current_low.m128i_i32) <= *v17.m128i_i32 )
    {
      if ( -*v17.m128i_i32 > (v24 - *m_current_low.m128i_i32) )
      {
        *m_current_low.m128i_i32 = *m_current_low.m128i_i32 - *v17.m128i_i32;
        v24 = COERCE_FLOAT(_mm_cvtsi128_si32(m_current_low));
      }
    }
    else
    {
      *v17.m128i_i32 = *v17.m128i_i32 + *m_current_low.m128i_i32;
      v24 = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
    }
    this->m_volume.m_current = v24;
    this->m_flags = v22 | 1;
    fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
    fieldData.m_nAllocSize = 0;
    fieldData.m_pData = 0;
    fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
    fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
    fieldData.m_nAllocSize = 4;
    *&fieldData.m_pData = v24;
    CSoundOpGameSystem::SetSoundEventParam(
      g_pSoundOpGameSystem,
      &this->m_Filter,
      this->m_guid,
      "volume_atten",
      &fieldData,
      0,
      0);
    if ( fieldData.m_nAllocSize > 8 && fieldData.m_pData != 0 )
      operator delete[](fieldData.m_pData);
    v25 = this->m_flags;
    goto LABEL_39;
  }
  m_current_low = LODWORD(this->m_volume.m_current);
  if ( *m_current_low.m128i_i32 != this->m_volume.m_target )
    goto LABEL_33;
  v25 = v22 & 0xFFFFFFFE;
  this->m_flags = v22 & 0xFFFFFFFE;
LABEL_39:
  result = 1;
  if ( v25 != 0 )
  {
    if ( CSoundPatch::EntIndex(this).m_Data == 0 )
    {
      fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
      fieldData.m_nAllocSize = 0;
      x_low = LODWORD(this->m_soundOrigin.x);
      fieldData.m_pData = 0;
      z = this->m_soundOrigin.z;
      y = this->m_soundOrigin.y;
      v29 = _mm_cvtsi128_si32(x_low);
      fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 10);
      fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT_3;
      if ( fieldData.m_nAllocSize <= 0xB )
      {
        if ( fieldData.m_pData != 0 && fieldData.m_nAllocSize > 8 )
          operator delete[](fieldData.m_pData);
        m_pData = operator new[](0xCu);
        fieldData.m_pData = m_pData;
        fieldData.m_nAllocSize = 12;
      }
      else
      {
        m_pData = fieldData.m_pData;
      }
      *(m_pData + 1) = y;
      *m_pData = v29;
      *(m_pData + 2) = z;
      CSoundOpGameSystem::SetSoundEventParam(
        g_pSoundOpGameSystem,
        &this->m_Filter,
        this->m_guid,
        "position",
        &fieldData,
        0,
        0);
      if ( fieldData.m_nAllocSize > 8 && fieldData.m_pData != 0 )
        operator delete[](fieldData.m_pData);
    }
    this->m_flags = 0;
    return 1;
  }
  return result;
}


// CSoundPatch::Reset  (line 647, @0x00000000023960b0, libserver.so)
void __fastcall CSoundPatch::Reset(CSoundPatch *const this)
{
  this->m_shutdownTime = 0.0;
}


// CSoundPatch::StartSound  (line 655, @0x0000000002399a50, libserver.so)  // inlines: AllocateData, CEntityIndex, CSosFieldData, CSosFieldDataFloat, CUtlMemory, CUtlVector, CUtlVectorBase, ClearData, CopyData, EmitSound_t, EntIndex, Get, GetDataPtr, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, Init, IsValid, LookupEntity, Purge, RemoveAll, SetSoundName, SoundEventGuid_t, String, ToCStr, V_memcpy, entindex, memcpy, operator CEntityInstance*, ~CSosFieldData, ~CSosFieldDataFloat, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CSoundPatch::EntIndex, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CBaseEntity::EmitSound, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CUtlMemory<Vector, int>::Purge, CSosFieldData::ClearData, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, _Unwind_Resume, CEntityInstance::GetEntityIndex
// callers: CSoundControllerImp::Play
// strings: "CSoundPatch:  invalid entity on sound %s", "volume_atten"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CSoundPatch::StartSound(CSoundPatch *const this, __m128i a2, float flStartTime)
{
  int m_entityChannel; // eax
  float v5; // r14d
  bool v6; // zf
  const char *m_pAsString; // rax
  float m_current; // xmm0_4
  int m_baseFlags; // eax
  float v10; // xmm0_4
  uint32 m_Index; // eax
  CEntityIdentity *v12; // rcx
  __int64 v13; // rsi
  CEntityIdentity *v14; // rdx
  const char *v15; // rcx
  CEntityIdentity *v16; // rcx
  CEntityIdentity *v17; // rcx
  int32 m_Data; // esi
  __m128i m_flVolume_low; // xmm1
  int v20; // r15d
  CSosFieldData fieldData; // [rsp+10h] [rbp-B0h] BYREF
  EmitSound_t ep; // [rsp+30h] [rbp-90h] BYREF
  SndOpEventGuid_t v23; // 0:rax.8

  this->m_flags = 0;
  if ( (this->m_Filter.m_Flags & 1) == 0 )
    goto LABEL_2;
  m_entityChannel = this->m_entityChannel;
  v5 = COERCE_FLOAT(_mm_cvtsi128_si32(a2));
  ep.m_SoundLevel = soundlevel_t::SNDLVL_NONE;
  v6 = this->m_iszSoundName.u.m_Id == 0;
  ep.m_nFlags = 0;
  ep.m_nPitch = 100;
  ep.m_pOrigin = 0;
  ep.m_nChannel = m_entityChannel;
  m_pAsString = "";
  ep.m_flSoundTime = 0.0;
  ep.m_pflSoundDuration = 0;
  ep.m_bEmitCloseCaption = 1;
  ep.m_bWarnOnMissingCloseCaption = 0;
  ep.m_bWarnOnDirectWaveReference = 0;
  ep.m_nSpeakerEntity.m_Data = -1;
  ep.m_UtlVecSoundOrigin.m_Size = 0;
  memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
  if ( !v6 )
    m_pAsString = this->m_iszSoundName.u.m_pAsString;
  m_current = this->m_volume.m_current;
  ep.m_pSoundName = m_pAsString;
  ep.m_flVolume = m_current;
  if ( CSoundPatch::EntIndex(this).m_Data == 0 )
    ep.m_pOrigin = &this->m_soundOrigin;
  m_baseFlags = this->m_baseFlags;
  ep.m_bEmitCloseCaption = 0;
  v10 = this->m_pitch.m_current;
  ep.m_nFlags = m_baseFlags;
  ep.m_nPitch = v10;
  if ( v5 != 0.0 )
    ep.m_flSoundTime = v5;
  m_Index = this->m_hEnt.m_Index;
  if ( m_Index == -1 )
    goto LABEL_22;
  if ( m_Index != -2
    && (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEnt.m_Index) >> 9) & 0x3F]) != 0
    && (v13 = this->m_hEnt.m_Index & 0x1FF, (v14 = &v12[v13]) != 0)
    && m_Index == v14->m_EHandle.m_Index
    && v14->m_pInstance != 0 )
  {
    v17 = &v12[v13];
  }
  else
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
    {
      v15 = "";
      if ( this->m_iszSoundScriptName.u.m_Id != 0 )
        v15 = this->m_iszSoundScriptName.u.m_pAsString;
      LoggingSystem_Log(LOG_SERVER, 2, "CSoundPatch:  invalid entity on sound %s", v15);
    }
    m_Index = this->m_hEnt.m_Index;
    if ( m_Index + 2 <= 1 )
      goto LABEL_22;
    v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEnt.m_Index) >> 9) & 0x3F];
    if ( v16 == 0 )
      goto LABEL_22;
    v17 = &v16[this->m_hEnt.m_Index & 0x1FF];
    if ( v17 == 0 )
      goto LABEL_22;
  }
  if ( m_Index != v17->m_EHandle.m_Index || v17->m_pInstance == 0 )
  {
LABEL_22:
    m_Data = -1;
    goto LABEL_23;
  }
  m_Data = CEntityInstance::GetEntityIndex(v17->m_pInstance).m_Data;
LABEL_23:
  v23 = CBaseEntity::EmitSound(&this->m_Filter, m_Data, &ep);
  m_flVolume_low = LODWORD(ep.m_flVolume);
  this->m_guid = v23;
  v20 = _mm_cvtsi128_si32(m_flVolume_low);
  if ( *m_flVolume_low.m128i_i32 != 1.0 )
  {
    fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
    fieldData.m_nAllocSize = 0;
    fieldData.m_pData = 0;
    fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
    fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
    fieldData.m_nAllocSize = 4;
    LODWORD(fieldData.m_pData) = v20;
    CSoundOpGameSystem::SetSoundEventParam(
      g_pSoundOpGameSystem,
      &this->m_Filter,
      this->m_guid,
      "volume_atten",
      &fieldData,
      0,
      0);
    if ( fieldData.m_nAllocSize > 8 && fieldData.m_pData != 0 )
      operator delete[](fieldData.m_pData);
  }
  ep.m_UtlVecSoundOrigin.m_Size = 0;
  if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
    if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
  }
LABEL_2:
  this->m_isPlaying = 1;
}


// CSoundPatch::ResumeSound  (line 696, @0x0000000002399e40, libserver.so)  // inlines: CEntityIndex, CUtlMemory, CUtlVector, CUtlVectorBase, EmitSound_t, EntIndex, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, SetSoundName, SoundEventGuid_t, String, ToCStr, entindex, operator CEntityInstance*, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CEntityInstance::GetEntityIndex, CSoundPatch::EntIndex, CBaseEntity::EmitSound, CUtlMemory<Vector, int>::Purge, LoggingSystem_IsChannelEnabled, DevWarning(char const*,...), LoggingSystem_Log, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CSoundControllerImp::RestoreGame
// strings: "CSoundPatch::ResumeSound: Lost EHAndle on restore - destroy the sound patch in your entit, "CSoundPatch:  invalid entity on sound %s"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CSoundPatch::ResumeSound(CSoundPatch *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rcx
  __int64 v4; // rsi
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rcx
  int m_entityChannel; // eax
  bool v8; // zf
  const char *v9; // rax
  float m_current; // xmm1_4
  int v11; // eax
  CEntityIndex v12; // eax
  CEntityIdentity *v13; // rdx
  const char *v14; // rsi
  const char *m_pAsString; // rcx
  EmitSound_t ep; // [rsp+0h] [rbp-70h] BYREF
  SndOpEventGuid_t v17; // 0:rax.8

  if ( this->m_isPlaying == 0 || (this->m_Filter.m_Flags & 1) == 0 )
    return;
  m_Index = this->m_hEnt.m_Index;
  if ( m_Index == -1 )
    goto LABEL_25;
  if ( m_Index != -2
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEnt.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = this->m_hEnt.m_Index & 0x1FF, (v5 = &v3[v4]) != 0)
    && m_Index == v5->m_EHandle.m_Index
    && v5->m_pInstance != 0 )
  {
    v6 = &v3[v4];
  }
  else
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
    {
      m_pAsString = "";
      if ( this->m_iszSoundScriptName.u.m_Id != 0 )
        m_pAsString = this->m_iszSoundScriptName.u.m_pAsString;
      LoggingSystem_Log(LOG_SERVER, 2, "CSoundPatch:  invalid entity on sound %s", m_pAsString);
    }
    m_Index = this->m_hEnt.m_Index;
    if ( m_Index + 2 <= 1 )
      goto LABEL_25;
    v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEnt.m_Index) >> 9) & 0x3F];
    if ( v13 == 0 )
      goto LABEL_25;
    v6 = &v13[this->m_hEnt.m_Index & 0x1FF];
    if ( v6 == 0 )
      goto LABEL_25;
  }
  if ( m_Index != v6->m_EHandle.m_Index
    || v6->m_pInstance == 0
    || CEntityInstance::GetEntityIndex(v6->m_pInstance).m_Data < 0 )
  {
LABEL_25:
    v14 = "";
    if ( this->m_iszSoundName.u.m_Id != 0 )
      v14 = this->m_iszSoundName.u.m_pAsString;
    DevWarning(
      "CSoundPatch::ResumeSound: Lost EHAndle on restore - destroy the sound patch in your entity's StopLoopingSounds! (%s)\n",
      v14);
    return;
  }
  m_entityChannel = this->m_entityChannel;
  ep.m_SoundLevel = soundlevel_t::SNDLVL_NONE;
  v8 = this->m_iszSoundName.u.m_Id == 0;
  ep.m_pOrigin = 0;
  ep.m_flSoundTime = 0.0;
  ep.m_pflSoundDuration = 0;
  ep.m_nChannel = m_entityChannel;
  v9 = "";
  ep.m_bEmitCloseCaption = 1;
  ep.m_bWarnOnMissingCloseCaption = 0;
  ep.m_bWarnOnDirectWaveReference = 0;
  ep.m_nSpeakerEntity.m_Data = -1;
  ep.m_UtlVecSoundOrigin.m_Size = 0;
  memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
  if ( !v8 )
    v9 = this->m_iszSoundName.u.m_pAsString;
  ep.m_pSoundName = v9;
  m_current = this->m_pitch.m_current;
  v11 = this->m_baseFlags | 3;
  ep.m_flVolume = this->m_volume.m_current;
  ep.m_nFlags = v11;
  ep.m_nPitch = m_current;
  if ( CSoundPatch::EntIndex(this).m_Data == 0 )
    ep.m_pOrigin = &this->m_soundOrigin;
  v12.m_Data = CSoundPatch::EntIndex(this).m_Data;
  v17 = CBaseEntity::EmitSound(&this->m_Filter, v12, &ep);
  v8 = (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_guid = v17;
  ep.m_UtlVecSoundOrigin.m_Size = 0;
  if ( v8 )
  {
    CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
    if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
  }
}


// CSoundPatch::AddPlayerPost  (line 730, @0x00000000023a1180, libserver.so)  // inlines: AddRecipient, AddToTail, CEntityIndex, CSingleUserRecipientFilter, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, EmitSound_t, EntIndex, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, SetSoundName, String, ToCStr, entindex, operator CEntityInstance*, operator[], ~CSingleUserRecipientFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CEntityInstance::GetEntityIndex, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::Find, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CSoundPatch::EntIndex, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CBaseEntity::EmitSound, CRecipientFilter::~CRecipientFilter, CUtlMemory<Vector, int>::Purge, CUtlMemory<CEntityIndex, int>::Grow, __stack_chk_fail (14 total)
// callers: CSoundControllerImp::CheckLoopingSoundsForPlayer
// strings: "CSoundPatch:  invalid entity on sound %s"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CSoundPatch::AddPlayerPost(CSoundPatch *const this, CBasePlayer *pPlayer)
{
  __int64 m_Size; // r13
  int v5; // eax
  CEntityIndex *v6; // rax
  int m_entityChannel; // eax
  bool v8; // zf
  const char *m_pAsString; // rax
  int m_baseFlags; // eax
  float m_current; // xmm0_4
  uint32 m_Index; // eax
  CEntityIdentity *v13; // rcx
  __int64 v14; // rsi
  CEntityIdentity *v15; // rdx
  const char *v16; // rcx
  CEntityIdentity *v17; // rcx
  CEntityIdentity *v18; // rcx
  int32 m_Data; // esi
  EmitSound_t ep; // [rsp+0h] [rbp-1C0h] BYREF
  CSingleUserRecipientFilter filter; // [rsp+60h] [rbp-160h] BYREF
  unsigned __int64 v22; // [rsp+198h] [rbp-28h]
  SndOpEventGuid_t v23; // 0:rax.8

  v22 = __readfsqword(0x28u);
  if ( (this->m_Filter.m_Flags & 1) == 0 )
    return;
  ep.m_nChannel = CEntityInstance::GetEntityIndex(pPlayer).m_Data;
  if ( ep.m_nChannel < 0
    || CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::Find(&this->m_Filter.m_Recipients, &ep) != -1 )
  {
    return;
  }
  m_Size = this->m_Filter.m_Recipients.m_Size;
  v5 = this->m_Filter.m_Recipients.m_Size;
  if ( m_Size == this->m_Filter.m_Recipients.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CEntityIndex,int>::Grow(&this->m_Filter.m_Recipients.m_Memory, 1);
    v5 = this->m_Filter.m_Recipients.m_Size;
  }
  this->m_Filter.m_Recipients.m_Size = v5 + 1;
  v6 = &this->m_Filter.m_Recipients.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
    v6->m_Data = ep.m_nChannel;
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB0D0;
  CRecipientFilter::AddRecipient(&filter, pPlayer);
  m_entityChannel = this->m_entityChannel;
  ep.m_SoundLevel = soundlevel_t::SNDLVL_NONE;
  v8 = this->m_iszSoundName.u.m_Id == 0;
  ep.m_pOrigin = 0;
  ep.m_flSoundTime = 0.0;
  ep.m_pflSoundDuration = 0;
  ep.m_nChannel = m_entityChannel;
  m_pAsString = "";
  ep.m_bEmitCloseCaption = 1;
  ep.m_bWarnOnMissingCloseCaption = 0;
  ep.m_bWarnOnDirectWaveReference = 0;
  ep.m_nSpeakerEntity.m_Data = -1;
  ep.m_UtlVecSoundOrigin.m_Size = 0;
  ep.m_UtlVecSoundOrigin.m_Memory.m_pMemory = 0;
  ep.m_UtlVecSoundOrigin.m_Memory.m_nAllocationCount = 0;
  ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize = 0;
  ep.m_SpeakerGender = gender_t::GENDER_NONE;
  if ( !v8 )
    m_pAsString = this->m_iszSoundName.u.m_pAsString;
  ep.m_pSoundName = m_pAsString;
  m_baseFlags = this->m_baseFlags;
  ep.m_flVolume = this->m_volume.m_current;
  m_current = this->m_pitch.m_current;
  ep.m_nFlags = m_baseFlags | 1;
  ep.m_nPitch = m_current;
  ep.m_nForceGuid.m_Data = this->m_guid.m_nGuid.m_Data;
  if ( CSoundPatch::EntIndex(this).m_Data == 0 )
    ep.m_pOrigin = &this->m_soundOrigin;
  m_Index = this->m_hEnt.m_Index;
  if ( m_Index == -1 )
    goto LABEL_26;
  if ( m_Index != -2
    && (v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEnt.m_Index) >> 9) & 0x3F]) != 0
    && (v14 = this->m_hEnt.m_Index & 0x1FF, (v15 = &v13[v14]) != 0)
    && m_Index == v15->m_EHandle.m_Index
    && v15->m_pInstance != 0 )
  {
    v18 = &v13[v14];
  }
  else
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
    {
      v16 = "";
      if ( this->m_iszSoundScriptName.u.m_Id != 0 )
        v16 = this->m_iszSoundScriptName.u.m_pAsString;
      LoggingSystem_Log(LOG_SERVER, 2, "CSoundPatch:  invalid entity on sound %s", v16);
    }
    m_Index = this->m_hEnt.m_Index;
    if ( m_Index + 2 <= 1 )
      goto LABEL_26;
    v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEnt.m_Index) >> 9) & 0x3F];
    if ( v17 == 0 )
      goto LABEL_26;
    v18 = &v17[this->m_hEnt.m_Index & 0x1FF];
    if ( v18 == 0 )
      goto LABEL_26;
  }
  if ( m_Index == v18->m_EHandle.m_Index && v18->m_pInstance != 0 )
  {
    m_Data = CEntityInstance::GetEntityIndex(v18->m_pInstance).m_Data;
    goto LABEL_27;
  }
LABEL_26:
  m_Data = -1;
LABEL_27:
  v23 = CBaseEntity::EmitSound(&filter, m_Data, &ep);
  v8 = (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_guid = v23;
  ep.m_UtlVecSoundOrigin.m_Size = 0;
  if ( v8 )
  {
    CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
    if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
  }
  filter._vptr_IRecipientFilter = &off_3FCB0D0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// SoundCommand_t::AddDatadescMetadataKeys  (line 780, @0x00000000023960c0, libserver.so)
void __fastcall SoundCommand_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// SoundCommand_t::GetBaseMap  (line 780, @0x00000000023960d0, libserver.so)
datamap_t *__cdecl SoundCommand_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<SoundCommand_t>  (line 780, @0x00000000023960e0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "SoundCommand_t"
// globals: `guard variable for'DataMapInit<SoundCommand_t>(SoundCommand_t *)::nameHolder, SoundCommand_t::m_DataMap, DataMapInit<SoundCommand_t>(SoundCommand_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<SoundCommand_t>(SoundCommand_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<SoundCommand_t>(SoundCommand_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<SoundCommand_t>(SoundCommand_t *)::nameHolder) != 0 )
  {
    DataMapInit<SoundCommand_t>(SoundCommand_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<SoundCommand_t>(SoundCommand_t *)::nameHolder.m_pszBase = "SoundCommand_t";
    DataMapInit<SoundCommand_t>(SoundCommand_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<SoundCommand_t>(SoundCommand_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<SoundCommand_t>(SoundCommand_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<SoundCommand_t>(SoundCommand_t *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<SoundCommand_t>(SoundCommand_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<SoundCommand_t>(SoundCommand_t *)::nameHolder,
      &_dso_handle);
  }
  SoundCommand_t::m_DataMap.baseMap = 0;
  SoundCommand_t::m_DataMap.dataDesc = &DataMapInit<SoundCommand_t>(SoundCommand_t *)::dataDesc[1];
  SoundCommand_t::m_DataMap.dataNumFields = 4;
  return &SoundCommand_t::m_DataMap;
}


// SoundCommandLessFunc  (line 795, @0x0000000002380fe0, libserver.so)
bool __fastcall SoundCommandLessFunc(const SOUNDCOMMANDPTR *const lhs, const SOUNDCOMMANDPTR *const rhs)
{
  return (*lhs)->m_time > (*rhs)->m_time;
}


// CSoundControllerImp::~CSoundControllerImp  (line 803, @0x00000000023ac1b0, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CUtlMemory, ~CUtlPriorityQueue, ~CUtlVector, ~CUtlVectorBase
// calls: IGameSystem::~IGameSystem, CUtlMemory<SoundCommand_t*, int>::Purge, CUtlMemory<CSoundPatch*, int>::Purge
void __fastcall CSoundControllerImp::~CSoundControllerImp(CSoundControllerImp *const this)
{
  bool v2; // zf
  CUtlVectorBase<SoundCommand_t*,CUtlMemory<SoundCommand_t*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_commandList.m_heap.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CSoundEnvelopeController = off_40ABB10;
  this->_vptr_IGameSystem = off_40ABC20;
  this->m_commandList.m_heap.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_commandList.m_heap.m_Memory,
        CUtlMemory<SoundCommand_t *,int>::Purge(&this->m_commandList.m_heap.m_Memory),
        (this->m_commandList.m_heap.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v2 = (this->m_soundList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_soundList.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  else
  {
    CUtlMemory<SoundCommand_t *,int>::Purge(p_m_Memory);
    v2 = (this->m_soundList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_soundList.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  CUtlMemory<CSoundPatch *,int>::Purge(&this->m_soundList.m_Memory);
  if ( (this->m_soundList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CSoundPatch *,int>::Purge(&this->m_soundList.m_Memory);
LABEL_3:
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(&this->CAutoGameSystem);
}


// CSoundControllerImp::~CSoundControllerImp  (line 803, @0x00000000023ac270, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CSoundControllerImp, ~CUtlMemory, ~CUtlPriorityQueue, ~CUtlVector, ~CUtlVectorBase
// calls: IGameSystem::~IGameSystem, operator delete, CUtlMemory<SoundCommand_t*, int>::Purge, CUtlMemory<CSoundPatch*, int>::Purge
void __fastcall CSoundControllerImp::~CSoundControllerImp(CSoundControllerImp *const this)
{
  bool v2; // zf
  CUtlVectorBase<SoundCommand_t*,CUtlMemory<SoundCommand_t*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_commandList.m_heap.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CSoundEnvelopeController = off_40ABB10;
  this->_vptr_IGameSystem = off_40ABC20;
  this->m_commandList.m_heap.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_commandList.m_heap.m_Memory,
        CUtlMemory<SoundCommand_t *,int>::Purge(&this->m_commandList.m_heap.m_Memory),
        (this->m_commandList.m_heap.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v2 = (this->m_soundList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_soundList.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  else
  {
    CUtlMemory<SoundCommand_t *,int>::Purge(p_m_Memory);
    v2 = (this->m_soundList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_soundList.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  CUtlMemory<CSoundPatch *,int>::Purge(&this->m_soundList.m_Memory);
  if ( (this->m_soundList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CSoundPatch *,int>::Purge(&this->m_soundList.m_Memory);
LABEL_3:
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(&this->CAutoGameSystem);
  operator delete(this);
}


// CSoundControllerImp::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 805, @0x00000000023a93c0, libserver.so)
void __fastcall CSoundControllerImp::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CSoundControllerImp *const this)
{
  ;
}


// CSoundControllerImp::DoesGameSystemReallocate  (line 805, @0x00000000023a93e0, libserver.so)
// globals: CSoundControllerImp::sm_Factory
bool __fastcall CSoundControllerImp::DoesGameSystemReallocate(const CSoundControllerImp *const this)
{
  return (*(CSoundControllerImp::sm_Factory->_vptr_IGameSystemFactory + 8))(CSoundControllerImp::sm_Factory);
}


// CSoundControllerImp::SetGameSystemGlobalPtrs  (line 805, @0x00000000023a9410, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CSoundControllerImp::sm_Factory
void __fastcall CSoundControllerImp::SetGameSystemGlobalPtrs(CSoundControllerImp *const this, void *pValue)
{
  if ( CSoundControllerImp::sm_Factory != 0 )
    (*(CSoundControllerImp::sm_Factory->_vptr_IGameSystemFactory + 7))(CSoundControllerImp::sm_Factory, pValue);
}


// CSoundControllerImp::SoundGetName  (line 861, @0x00000000023a9450, libserver.so)  // inlines: CUtlSymbolLarge, GetName
string_t __fastcall CSoundControllerImp::SoundGetName(
        UtlSymLargeId_t *a1,
        CSoundControllerImp *const this,
        CSoundPatch *pSound)
{
  *a1 = pSound->m_iszSoundName.u.m_Id;
  return a1;
}


// CSoundControllerImp::SoundGetScriptName  (line 862, @0x00000000023a9460, libserver.so)  // inlines: CUtlSymbolLarge, GetScriptName
string_t __fastcall CSoundControllerImp::SoundGetScriptName(
        UtlSymLargeId_t *a1,
        CSoundControllerImp *const this,
        CSoundPatch *pSound)
{
  *a1 = pSound->m_iszSoundScriptName.u.m_Id;
  return a1;
}


// CSoundControllerImp::SoundSetCloseCaptionDuration  (line 863, @0x00000000023a9470, libserver.so)  // inlines: SetCloseCaptionDuration
void __fastcall CSoundControllerImp::SoundSetCloseCaptionDuration(
        CSoundControllerImp *const this,
        CSoundPatch *pSound,
        float a3,
        float flDuration)
{
  pSound->m_flCloseCaptionDuration = a3;
}


// CSoundControllerImp::PreClientUpdate  (line 882, @0x00000000023a9480, libserver.so)
void __fastcall CSoundControllerImp::PreClientUpdate(
        CSoundControllerImp *const this,
        const EventServerPreClientUpdate_t *const msg)
{
  (*(this->_vptr_CSoundEnvelopeController + 1))(this, msg);
}


// CSoundControllerImp::GameDeactivate  (line 888, @0x00000000023a94a0, libserver.so)
void __fastcall CSoundControllerImp::GameDeactivate(
        CSoundControllerImp *const this,
        const EventGameDeactivate_t *const msg)
{
  (*this->_vptr_CSoundEnvelopeController)(this, msg);
}


// CSoundControllerImp::ProcessCommand  (line 902, @0x00000000023962a0, libserver.so)  // inlines: Free, Purge, RemoveAll, Shutdown, operator delete, ~CCopyRecipientFilter, ~CSoundPatch, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IRecipientFilter
// calls: CSoundControllerImp::RemoveFromList, CUtlMemoryPoolBase::Free, CSoundPatch::FadeOut, CSoundPatch::ChangeVolume, CSoundPatch::ChangePitch, CSoundPatch::Shutdown, CUtlMemory<CEntityIndex, int>::Purge
// callers: CSoundControllerImp::SystemUpdate
// globals: jpt_23962CB, CSoundPatch::g_SoundPatchCount, CSoundPatch::s_Allocator
void __fastcall CSoundControllerImp::ProcessCommand(CSoundControllerImp *const this, SoundCommand_t *pCmd)
{
  float v2; // xmm1_4
  float v3; // xmm2_4
  CSoundPatch *m_pPatch; // r12

  switch ( pCmd->m_command )
  {
    case soundcommands_t::SOUNDCTRL_CHANGE_VOLUME:
      CSoundPatch::ChangeVolume(pCmd->m_pPatch, pCmd->m_value, pCmd->m_deltaTime, v3);
      break;
    case soundcommands_t::SOUNDCTRL_CHANGE_PITCH:
      CSoundPatch::ChangePitch(pCmd->m_pPatch, pCmd->m_value, pCmd->m_deltaTime, v3);
      break;
    case soundcommands_t::SOUNDCTRL_STOP:
      if ( pCmd->m_pPatch->m_isPlaying != 0 )
        CSoundPatch::Shutdown(pCmd->m_pPatch);
      break;
    case soundcommands_t::SOUNDCTRL_DESTROY:
      CSoundControllerImp::RemoveFromList(this, pCmd->m_pPatch);
      m_pPatch = pCmd->m_pPatch;
      if ( pCmd->m_pPatch != 0 )
      {
        m_pPatch->m_Filter.m_Recipients.m_Size = 0;
        m_pPatch->_vptr_CSoundPatch = &off_40ABAE0;
        --CSoundPatch::g_SoundPatchCount;
        m_pPatch->m_Filter._vptr_IRecipientFilter = &off_40ABA90;
        if ( (m_pPatch->m_Filter.m_Recipients.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CEntityIndex,int>::Purge(&m_pPatch->m_Filter.m_Recipients.m_Memory);
          if ( (m_pPatch->m_Filter.m_Recipients.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CEntityIndex,int>::Purge(&m_pPatch->m_Filter.m_Recipients.m_Memory);
        }
        m_pPatch->m_Filter._vptr_IRecipientFilter = &off_3FCAC70;
        CUtlMemoryPoolBase::Free(&CSoundPatch::s_Allocator, m_pPatch);
      }
      pCmd->m_pPatch = 0;
      break;
    case soundcommands_t::SOUNDCTRL_FADEOUT:
      CSoundPatch::FadeOut(pCmd->m_pPatch, pCmd->m_deltaTime, v2, pCmd->m_value != 0.0);
      break;
    default:
      return;
  }
}


// CSoundControllerImp::RemoveFromList  (line 934, @0x00000000023961a0, libserver.so)  // inlines: Element, Find, FindAndRemove, Remove, ShiftElementsLeft, Shutdown, V_memmove, memmove, operator[]
// calls: memmove, CSoundPatch::Shutdown
// callers: CSoundControllerImp::ShutdownSoundPatch, CSoundControllerImp::ProcessCommand
void __fastcall CSoundControllerImp::RemoveFromList(CSoundControllerImp *const this, CSoundPatch *pSound)
{
  int m_Size; // ecx
  CSoundPatch **m_pMemory; // rdi
  CSoundPatch **v6; // rdx
  int v7; // eax

  m_Size = this->m_soundList.m_Size;
  if ( m_Size <= 0 )
    goto LABEL_6;
  m_pMemory = this->m_soundList.m_Memory.m_pMemory;
  if ( *m_pMemory != pSound )
  {
    v6 = m_pMemory + 1;
    v7 = 0;
    while ( ++v7 != m_Size )
    {
      if ( *v6++ == pSound )
      {
        if ( v7 == -1 )
          break;
        goto LABEL_9;
      }
    }
LABEL_6:
    if ( pSound->m_isPlaying == 0 )
      return;
LABEL_12:
    CSoundPatch::Shutdown(pSound);
    return;
  }
  v7 = 0;
LABEL_9:
  if ( m_Size - v7 - 1 > 0 )
  {
    memmove(&m_pMemory[v7], &m_pMemory[v7 + 1], 8LL * (m_Size - v7 - 1));
    m_Size = this->m_soundList.m_Size;
  }
  this->m_soundList.m_Size = m_Size - 1;
  if ( pSound->m_isPlaying != 0 )
    goto LABEL_12;
}


// CSoundControllerImp::Play  (line 944, @0x00000000023a4210, libserver.so)  // inlines: AddToTail, CopyConstruct<CSoundPatch*>, Element, GrowMemory, Reset, operator[]
// calls: CSoundPatch::ChangeVolume, CSoundPatch::ChangePitch, CSoundPatch::StartSound, CUtlMemory<CSoundPatch*, int>::Grow
void __fastcall CSoundControllerImp::Play(
        CSoundControllerImp *const this,
        CSoundPatch *pSound,
        float a3,
        __m128i volume,
        float pitch,
        float flStartTime)
{
  float v6; // r13d
  float v9; // xmm2_4
  double v10; // xmm0_8
  double v11; // xmm1_8
  __m128i v12; // xmm2
  __int64 m_Size; // r13
  int v14; // eax
  CSoundPatch **v15; // rax

  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(volume));
  pSound->m_shutdownTime = 0.0;
  CSoundPatch::ChangeVolume(pSound, a3, 0.0, pitch);
  CSoundPatch::ChangePitch(pSound, v6, 0.0, v9);
  v12 = LODWORD(pitch);
  if ( pSound->m_isPlaying != 0 )
  {
    (*(this->_vptr_CSoundEnvelopeController + 4))(this, pSound, v10, v11, pitch);
  }
  else
  {
    m_Size = this->m_soundList.m_Size;
    v14 = this->m_soundList.m_Size;
    if ( m_Size == this->m_soundList.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CSoundPatch *,int>::Grow(&this->m_soundList.m_Memory, 1);
      v14 = this->m_soundList.m_Size;
      v12 = LODWORD(pitch);
    }
    this->m_soundList.m_Size = v14 + 1;
    v15 = &this->m_soundList.m_Memory.m_pMemory[m_Size];
    if ( v15 != 0 )
      *v15 = pSound;
    CSoundPatch::StartSound(pSound, v12, *&v11);
  }
}


// CSoundControllerImp::CommandInsert  (line 968, @0x00000000023a51a0, libserver.so)  // inlines: AddToTail, GrowMemory, Insert, PercolateUp, Swap, operator(), operator[]
// calls: CUtlMemory<SoundCommand_t*, int>::Grow
void __fastcall CSoundControllerImp::CommandInsert(CSoundControllerImp *const this, SoundCommand_t *pCommand)
{
  int m_Size; // r13d
  int v5; // eax
  __int64 v6; // r12
  SoundCommand_t **m_pMemory; // rax
  SoundCommand_t **v8; // r14
  SoundCommand_t *v9; // rdx
  __int64 v10; // r14

  m_Size = this->m_commandList.m_heap.m_Size;
  v5 = m_Size;
  if ( m_Size == this->m_commandList.m_heap.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<SoundCommand_t *,int>::Grow(&this->m_commandList.m_heap.m_Memory, 1);
    v5 = this->m_commandList.m_heap.m_Size;
  }
  v6 = m_Size;
  this->m_commandList.m_heap.m_Size = v5 + 1;
  this->m_commandList.m_heap.m_Memory.m_pMemory[m_Size] = pCommand;
  if ( this->m_commandList.m_heap.m_Size > m_Size && m_Size != 0 )
  {
    while ( 1 )
    {
      m_Size = (m_Size + 1) / 2 - 1;
      v10 = m_Size;
      if ( this->m_commandList.m_LessFunc(
             &this->m_commandList.m_heap.m_Memory.m_pMemory[v6],
             &this->m_commandList.m_heap.m_Memory.m_pMemory[v10]) )
      {
        break;
      }
      m_pMemory = this->m_commandList.m_heap.m_Memory.m_pMemory;
      v8 = &m_pMemory[v10];
      v9 = *v8;
      *v8 = m_pMemory[v6];
      this->m_commandList.m_heap.m_Memory.m_pMemory[v6] = v9;
      if ( m_Size == 0 )
        break;
      v6 = m_Size;
    }
  }
}


// CSoundControllerImp::CommandAdd  (line 983, @0x00000000023a5280, libserver.so)  // inlines: AddToTail, Alloc, CommandInsert, GrowMemory, Insert, PercolateUp, SoundCommand_t, Swap, operator new, operator(), operator[]
// calls: CUtlMemoryPoolBase::Alloc, CUtlMemory<SoundCommand_t*, int>::Grow
// globals: SoundCommand_t::s_Allocator
void __fastcall CSoundControllerImp::CommandAdd(
        CSoundControllerImp *const this,
        CSoundPatch *pSound,
        float executeDeltaTime,
        soundcommands_t command,
        __m128i commandTime,
        __m128i commandValue)
{
  int v7; // r14d
  int v9; // r12d
  float *v11; // rax
  int m_Size; // r13d
  int v13; // edx
  __int64 v14; // r12
  SoundCommand_t **m_pMemory; // rax
  SoundCommand_t **v16; // r14
  SoundCommand_t *v17; // rdx
  __int64 v18; // r14
  float executeDeltaTimea; // [rsp+0h] [rbp-38h]
  float *executeDeltaTimeb; // [rsp+0h] [rbp-38h]

  v7 = _mm_cvtsi128_si32(commandTime);
  v9 = _mm_cvtsi128_si32(commandValue);
  executeDeltaTimea = executeDeltaTime + (*(g_pEffects->_vptr_IPredictionSystem + 28))(g_pEffects);
  v11 = CUtlMemoryPoolBase::Alloc(&SoundCommand_t::s_Allocator);
  if ( v11 != 0 )
  {
    *v11 = pSound;
    *(v11 + 3) = v7;
    v11[2] = executeDeltaTimea;
    *(v11 + 4) = command;
    *(v11 + 5) = v9;
  }
  m_Size = this->m_commandList.m_heap.m_Size;
  v13 = m_Size;
  if ( m_Size == this->m_commandList.m_heap.m_Memory.m_nAllocationCount )
  {
    executeDeltaTimeb = v11;
    CUtlMemory<SoundCommand_t *,int>::Grow(&this->m_commandList.m_heap.m_Memory, 1);
    v13 = this->m_commandList.m_heap.m_Size;
    v11 = executeDeltaTimeb;
  }
  v14 = m_Size;
  this->m_commandList.m_heap.m_Size = v13 + 1;
  this->m_commandList.m_heap.m_Memory.m_pMemory[m_Size] = v11;
  if ( this->m_commandList.m_heap.m_Size > m_Size && m_Size != 0 )
  {
    while ( 1 )
    {
      m_Size = (m_Size + 1) / 2 - 1;
      v18 = m_Size;
      if ( this->m_commandList.m_LessFunc(
             &this->m_commandList.m_heap.m_Memory.m_pMemory[v14],
             &this->m_commandList.m_heap.m_Memory.m_pMemory[v18]) )
      {
        break;
      }
      m_pMemory = this->m_commandList.m_heap.m_Memory.m_pMemory;
      v16 = &m_pMemory[v18];
      v17 = *v16;
      *v16 = m_pMemory[v14];
      this->m_commandList.m_heap.m_Memory.m_pMemory[v14] = v17;
      if ( m_Size == 0 )
        break;
      v14 = m_Size;
    }
  }
}


// CSoundControllerImp::SystemReset  (line 990, @0x0000000002388600, libserver.so)  // inlines: Purge, RemoveAll, Shutdown
// calls: CSoundPatch::Shutdown, CUtlMemory<CSoundPatch*, int>::Purge
void __fastcall CSoundControllerImp::SystemReset(CSoundControllerImp *const this)
{
  int v2; // eax
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r13
  CSoundPatch *v5; // rdi
  bool v6; // zf

  v2 = this->m_soundList.m_Size - 1;
  if ( v2 >= 0 )
  {
    v3 = 8LL * v2;
    v4 = 8 * (v2 - v2) - 8;
    do
    {
      while ( 1 )
      {
        v5 = this->m_soundList.m_Memory.m_pMemory[v3 / 8];
        if ( v5->m_isPlaying != 0 )
          break;
        v3 -= 8LL;
        if ( v3 == v4 )
          goto LABEL_6;
      }
      CSoundPatch::Shutdown(v5);
      v3 -= 8LL;
    }
    while ( v3 != v4 );
  }
LABEL_6:
  v6 = (this->m_soundList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_soundList.m_Size = 0;
  if ( v6 )
    CUtlMemory<CSoundPatch *,int>::Purge(&this->m_soundList.m_Memory);
  this->m_commandList.m_heap.m_Size = 0;
}


// CSoundControllerImp::SystemUpdate  (line 1011, @0x000000000239e780, libserver.so)  // inlines: Element, FastRemove, Free, PercolateDown, RemoveAtHead, Reset, Swap, memcpy, operator delete, operator(), operator[]
// calls: CUtlVectorBase<SoundCommand_t*, CUtlMemory<SoundCommand_t*, int> >::FastRemove, CSoundControllerImp::ProcessCommand, CUtlMemoryPoolBase::Free, CSoundPatch::Update
// globals: SoundCommand_t::s_Allocator
void __fastcall CSoundControllerImp::SystemUpdate(CSoundControllerImp *const this)
{
  double v2; // xmm0_8
  float v3; // xmm2_4
  int m_Size; // r8d
  float v5; // xmm3_4
  int v6; // r14d
  int v7; // r13d
  int v8; // r15d
  SoundCommand_t **m_pMemory; // rcx
  SoundCommand_t **v10; // rdx
  SoundCommand_t *v11; // rsi
  int v12; // r12d
  int v13; // r12d
  __int64 v14; // r13
  CSoundPatch *v15; // r14
  int v16; // eax
  int v17; // eax
  float deltaTime; // [rsp+4h] [rbp-4Ch]
  SoundCommand_t *pCmd; // [rsp+10h] [rbp-40h]
  float time; // [rsp+18h] [rbp-38h]

  v2 = (*(g_pEffects->_vptr_IPredictionSystem + 28))(g_pEffects);
  m_Size = this->m_commandList.m_heap.m_Size;
  time = *&v2;
  v5 = *&v2 - this->m_flLastTime;
  this->m_flLastTime = *&v2;
  deltaTime = fmaxf(0.0, v5);
  if ( m_Size != 0 )
  {
    while ( 1 )
    {
      v3 = time;
      pCmd = *this->m_commandList.m_heap.m_Memory.m_pMemory;
      if ( time < pCmd->m_time )
        goto LABEL_17;
      v6 = 0;
      CUtlVectorBase<SoundCommand_t *,CUtlMemory<SoundCommand_t *,int>>::FastRemove(&this->m_commandList.m_heap, 0);
      v7 = this->m_commandList.m_heap.m_Size;
      if ( v7 / 2 > 0 )
        break;
LABEL_16:
      CSoundControllerImp::ProcessCommand(this, pCmd);
      CUtlMemoryPoolBase::Free(&SoundCommand_t::s_Allocator, pCmd);
      if ( this->m_commandList.m_heap.m_Size == 0 )
        goto LABEL_17;
    }
    while ( 1 )
    {
      v12 = 2 * v6 + 2;
      v8 = 2 * v6 + 1;
      if ( v7 <= v8 )
      {
        v8 = v6;
        if ( v7 <= v12 )
          goto LABEL_6;
      }
      else
      {
        if ( !this->m_commandList.m_LessFunc(
                &this->m_commandList.m_heap.m_Memory.m_pMemory[v6],
                &this->m_commandList.m_heap.m_Memory.m_pMemory[v8]) )
          v8 = v6;
        if ( v7 <= v12 )
        {
LABEL_6:
          if ( v6 == v8 )
            goto LABEL_16;
          goto LABEL_7;
        }
      }
      if ( this->m_commandList.m_LessFunc(
             &this->m_commandList.m_heap.m_Memory.m_pMemory[v8],
             &this->m_commandList.m_heap.m_Memory.m_pMemory[v12]) )
      {
        v8 = 2 * v6 + 2;
      }
      if ( v6 == v8 )
        goto LABEL_16;
LABEL_7:
      m_pMemory = this->m_commandList.m_heap.m_Memory.m_pMemory;
      v10 = &m_pMemory[v6];
      v11 = *v10;
      *v10 = m_pMemory[v8];
      this->m_commandList.m_heap.m_Memory.m_pMemory[v8] = v11;
      if ( v7 / 2 <= v8 )
        goto LABEL_16;
      v6 = v8;
    }
  }
LABEL_17:
  v13 = this->m_soundList.m_Size - 1;
  v14 = v13;
  if ( v13 >= 0 )
  {
    do
    {
      while ( 1 )
      {
        v15 = this->m_soundList.m_Memory.m_pMemory[v14];
        if ( CSoundPatch::Update(v15, time, deltaTime, v3) == 0 )
        {
          v15->m_shutdownTime = 0.0;
          v16 = this->m_soundList.m_Size;
          if ( v16 > 0 )
            break;
        }
        --v13;
        --v14;
        if ( v13 == -1 )
          return;
      }
      v17 = v16 - 1;
      if ( v13 != v17 )
      {
        this->m_soundList.m_Memory.m_pMemory[v14] = this->m_soundList.m_Memory.m_pMemory[v17];
        v17 = this->m_soundList.m_Size - 1;
      }
      --v13;
      --v14;
      this->m_soundList.m_Size = v17;
    }
    while ( v13 != -1 );
  }
}


// CSoundControllerImp::CommandClear  (line 1060, @0x000000000239e990, libserver.so)  // inlines: Free, PercolateDown, PercolateUp, RemoveAt, RevaluateElement, Swap, operator delete, operator(), operator[]
// calls: CUtlVectorBase<SoundCommand_t*, CUtlMemory<SoundCommand_t*, int> >::FastRemove, CUtlMemoryPoolBase::Free
// globals: SoundCommand_t::s_Allocator
void __fastcall CSoundControllerImp::CommandClear(CSoundControllerImp *const this, CSoundPatch *pSound)
{
  int v3; // r12d
  __int64 v4; // r13
  SoundCommand_t *v5; // r14
  int m_Size; // r15d
  __int64 j; // rcx
  int v8; // edx
  SoundCommand_t **v9; // rsi
  SoundCommand_t **v10; // rcx
  SoundCommand_t *v11; // rdi
  int v12; // r8d
  int v13; // edx
  bool v14; // al
  bool v15; // al
  int v16; // r10d
  __int64 i; // r15
  SoundCommand_t **m_pMemory; // rax
  SoundCommand_t *v19; // rsi
  CUtlPriorityQueue<SoundCommand_t*,CDefUtlPriorityQueueLessFunc<SoundCommand_t*>,CUtlMemory<SoundCommand_t*,int>,CDefUtlPriorityQueueSetIndexFunc<SoundCommand_t*> > *p_m_commandList; // [rsp+8h] [rbp-58h]
  int v21; // [rsp+14h] [rbp-4Ch]
  int v22; // [rsp+14h] [rbp-4Ch]
  int v23; // [rsp+18h] [rbp-48h]
  int v24; // [rsp+18h] [rbp-48h]
  int v25; // [rsp+1Ch] [rbp-44h]
  int v26; // [rsp+1Ch] [rbp-44h]

  v3 = this->m_commandList.m_heap.m_Size - 1;
  v4 = v3;
  p_m_commandList = &this->m_commandList;
  if ( v3 < 0 )
    return;
  do
  {
    v5 = this->m_commandList.m_heap.m_Memory.m_pMemory[v4];
    if ( v5->m_pPatch != pSound )
      goto LABEL_3;
    CUtlVectorBase<SoundCommand_t *,CUtlMemory<SoundCommand_t *,int>>::FastRemove(&p_m_commandList->m_heap, v3);
    m_Size = this->m_commandList.m_heap.m_Size;
    if ( m_Size / 2 <= v3 )
    {
      v16 = this->m_commandList.m_heap.m_Size;
LABEL_21:
      if ( v3 < v16 && v3 != 0 )
      {
        for ( i = v3;
              !this->m_commandList.m_LessFunc(
                 &this->m_commandList.m_heap.m_Memory.m_pMemory[i],
                 &this->m_commandList.m_heap.m_Memory.m_pMemory[(i + 1) / 2 - 1]);
              i = (i + 1) / 2 - 1 )
        {
          m_pMemory = this->m_commandList.m_heap.m_Memory.m_pMemory;
          v19 = m_pMemory[(i + 1) / 2 - 1];
          m_pMemory[(i + 1) / 2 - 1] = m_pMemory[i];
          this->m_commandList.m_heap.m_Memory.m_pMemory[i] = v19;
          if ( (i + 1) / 2 == 1 )
            break;
        }
      }
      goto LABEL_19;
    }
    for ( j = v3; ; j = v8 )
    {
      v12 = 2 * j + 2;
      v13 = 2 * j + 1;
      if ( m_Size <= v13 )
      {
        v8 = j;
        if ( m_Size <= v12 )
          goto LABEL_8;
      }
      else
      {
        v21 = 2 * j + 2;
        v23 = 2 * j + 1;
        v25 = j;
        v14 = this->m_commandList.m_LessFunc(
                &this->m_commandList.m_heap.m_Memory.m_pMemory[j],
                &this->m_commandList.m_heap.m_Memory.m_pMemory[v13]);
        j = v25;
        v8 = v23;
        v12 = v21;
        if ( !v14 )
          v8 = v25;
        if ( m_Size <= v21 )
        {
LABEL_8:
          if ( j == v8 )
            goto LABEL_18;
          goto LABEL_9;
        }
      }
      v22 = j;
      v24 = v12;
      v26 = v8;
      v15 = this->m_commandList.m_LessFunc(
              &this->m_commandList.m_heap.m_Memory.m_pMemory[v8],
              &this->m_commandList.m_heap.m_Memory.m_pMemory[v12]);
      v8 = v26;
      j = v22;
      if ( v15 )
        v8 = v24;
      if ( v22 == v8 )
      {
LABEL_18:
        if ( v3 != j )
          goto LABEL_19;
        goto LABEL_20;
      }
LABEL_9:
      v9 = this->m_commandList.m_heap.m_Memory.m_pMemory;
      v10 = &v9[j];
      v11 = *v10;
      *v10 = v9[v8];
      this->m_commandList.m_heap.m_Memory.m_pMemory[v8] = v11;
      if ( m_Size / 2 <= v8 )
        break;
    }
    if ( v3 == v8 )
    {
LABEL_20:
      v16 = this->m_commandList.m_heap.m_Size;
      goto LABEL_21;
    }
LABEL_19:
    CUtlMemoryPoolBase::Free(&SoundCommand_t::s_Allocator, v5);
LABEL_3:
    --v3;
    --v4;
  }
  while ( v3 != -1 );
}


// CSoundControllerImp::SaveSoundPatch  (line 1077, @0x0000000002396430, libserver.so)  // inlines: WriteAll<CSoundPatch>, WriteAll<SoundCommand_t>
// callers: CSoundPatchSaveRestoreOps::Save
// globals: CSoundPatch::m_DataMap, SoundCommand_t::m_DataMap
void __fastcall CSoundControllerImp::SaveSoundPatch(
        CSoundControllerImp *const this,
        CSoundPatch *pSoundPatch,
        ISave *pSave)
{
  int m_Size; // eax
  int v7; // eax
  unsigned __int64 v8; // rsi
  SoundCommand_t **v9; // rdx
  unsigned __int64 v10; // rax
  int v11; // eax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  SoundCommand_t *v14; // r13
  unsigned __int64 v15; // [rsp+8h] [rbp-48h]
  int nCount[13]; // [rsp+1Ch] [rbp-34h] BYREF

  (*(pSave->_vptr_ISave + 8))(pSave);
  (*(pSave->_vptr_ISave + 5))(pSave, pSoundPatch, &CSoundPatch::m_DataMap);
  (*(pSave->_vptr_ISave + 9))(pSave);
  m_Size = this->m_commandList.m_heap.m_Size;
  nCount[0] = 0;
  v7 = m_Size - 1;
  if ( v7 >= 0 )
  {
    v8 = 8 * ~v7;
    v9 = &this->m_commandList.m_heap.m_Memory.m_pMemory[v7];
    v10 = 0;
    do
    {
      while ( v9[v10 / 8]->m_pPatch != pSoundPatch )
      {
        v10 -= 8LL;
        if ( v10 == v8 )
          goto LABEL_6;
      }
      ++nCount[0];
      v10 -= 8LL;
    }
    while ( v10 != v8 );
  }
LABEL_6:
  (*(pSave->_vptr_ISave + 8))(pSave);
  (*(pSave->_vptr_ISave + 11))(pSave, nCount, 1);
  v11 = this->m_commandList.m_heap.m_Size - 1;
  if ( v11 >= 0 )
  {
    v12 = 8LL * v11;
    v13 = 8 * (v11 - v11) - 8;
    do
    {
      v14 = this->m_commandList.m_heap.m_Memory.m_pMemory[v12 / 8];
      if ( v14->m_pPatch == pSoundPatch )
      {
        v15 = v13;
        (*(pSave->_vptr_ISave + 8))(pSave);
        (*(pSave->_vptr_ISave + 5))(pSave, v14, &SoundCommand_t::m_DataMap);
        (*(pSave->_vptr_ISave + 9))(pSave);
        v13 = v15;
      }
      v12 -= 8LL;
    }
    while ( v12 != v13 );
  }
  (*(pSave->_vptr_ISave + 9))(pSave);
}


// CSoundControllerImp::RestoreSoundPatch  (line 1118, @0x00000000023a4e30, libserver.so)  // inlines: AddToTail, Alloc, CCopyRecipientFilter, CEntityHandle, CEntityIndex, CHandle, CSoundEnvelope, CSoundPatch, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, CommandInsert, CopyConstruct<CSoundPatch*>, Element, GetFloat, GrowMemory, InValidate, Init, Insert, PercolateUp, ReadAll<CSoundPatch>, ReadAll<SoundCommand_t>, SndOpEventGuid_t, SoundCommand_t, SoundEventGuid_t, Swap, memset, operator new, operator(), operator[]
// calls: CUtlMemoryPoolBase::Alloc, CUtlMemory<SoundCommand_t*, int>::Grow, CUtlMemory<CSoundPatch*, int>::Grow
// callers: CSoundPatchSaveRestoreOps::Restore
// globals: CSoundPatch::s_Allocator, CSoundPatch::g_SoundPatchCount, CSoundPatch::m_DataMap, SoundCommand_t::s_Allocator, SoundCommand_t::m_DataMap
void __fastcall CSoundControllerImp::RestoreSoundPatch(
        CSoundControllerImp *const this,
        CSoundPatch **ppSoundPatch,
        IRestore *pRestore)
{
  CSoundPatch *v5; // rax
  CSoundPatch *v6; // r12
  ConVar *m_pParent; // rax
  float m_fValue; // xmm0_4
  int v9; // r15d
  __int64 m_Size; // r15
  CSoundPatch **v11; // rax
  SoundCommand_t *v12; // rax
  SoundCommand_t *v13; // r14
  int v14; // eax
  int v15; // edx
  SoundCommand_t **m_pMemory; // rsi
  __int64 v17; // r15
  SoundCommand_t **v18; // rax
  SoundCommand_t *v19; // rsi
  __int64 v20; // r14
  int v22; // [rsp+14h] [rbp-4Ch]
  int v23; // [rsp+18h] [rbp-48h]
  int nCount[13]; // [rsp+2Ch] [rbp-34h] BYREF

  v5 = CUtlMemoryPoolBase::Alloc(&CSoundPatch::s_Allocator);
  v6 = v5;
  if ( v5 != 0 )
  {
    v5->m_pitch.m_forceupdate = 0;
    v5->_vptr_CSoundPatch = &off_40ABAE0;
    v5->m_pitch.m_current = 0.0;
    v5->m_pitch.m_target = 0.0;
    v5->m_pitch.m_rate = 0.0;
    v5->m_volume.m_current = 0.0;
    v5->m_volume.m_target = 0.0;
    v5->m_volume.m_rate = 0.0;
    v5->m_volume.m_forceupdate = 0;
    v5->m_guid.m_nGuid.m_Data = 0;
    v5->m_guid.m_hStackHash = -1;
    v5->m_iszSoundName.u.m_Id = 0;
    v5->m_Filter._vptr_IRecipientFilter = &off_40ABA90;
    m_pParent = soundpatch_captionlength.m_pParent;
    v6->m_iszSoundScriptName.u.m_Id = 0;
    v6->m_hEnt.m_Index = -1;
    v6->m_soundEntityIndex.m_Data = -1;
    v6->m_Filter.m_Flags = 0;
    v6->m_Filter.m_Recipients.m_Size = 0;
    v6->m_Filter.m_Recipients.m_Memory.m_pMemory = 0;
    v6->m_Filter.m_Recipients.m_Memory.m_nAllocationCount = 0;
    v6->m_Filter.m_Recipients.m_Memory.m_nGrowSize = 0;
    v6->m_iszClassName.u.m_Id = 0;
    ++CSoundPatch::g_SoundPatchCount;
    m_fValue = m_pParent->m_Value.m_fValue;
    v6->m_soundOrigin.x = 0.0;
    v6->m_flCloseCaptionDuration = m_fValue;
    v6->m_soundOrigin.y = 0.0;
    v6->m_soundOrigin.z = 0.0;
  }
  (*(pRestore->_vptr_IRestore + 7))(pRestore);
  v9 = (*(pRestore->_vptr_IRestore + 2))(pRestore, v6, &CSoundPatch::m_DataMap);
  (*(pRestore->_vptr_IRestore + 8))(pRestore);
  if ( v9 != 0 && v6->m_isPlaying != 0 )
  {
    m_Size = this->m_soundList.m_Size;
    if ( m_Size == this->m_soundList.m_Memory.m_nAllocationCount )
      CUtlMemory<CSoundPatch *,int>::Grow(&this->m_soundList.m_Memory, 1);
    ++this->m_soundList.m_Size;
    v11 = &this->m_soundList.m_Memory.m_pMemory[m_Size];
    if ( v11 != 0 )
      *v11 = v6;
    (*(pRestore->_vptr_IRestore + 7))(pRestore);
    (*(pRestore->_vptr_IRestore + 24))(pRestore, nCount, 1, 0);
    --nCount[0];
    for ( ; nCount[0] >= 0; --nCount[0] )
    {
      v12 = CUtlMemoryPoolBase::Alloc(&SoundCommand_t::s_Allocator);
      v13 = v12;
      if ( v12 != 0 )
      {
        v12->m_pPatch = 0;
        *&v12->m_time = 0;
        *&v12->m_command = 0;
        v12->m_pNext = 0;
      }
      (*(pRestore->_vptr_IRestore + 7))(pRestore);
      if ( (*(pRestore->_vptr_IRestore + 2))(pRestore, v13, &SoundCommand_t::m_DataMap) != 0 )
      {
        v13->m_pPatch = v6;
        v14 = this->m_commandList.m_heap.m_Size;
        v15 = v14;
        if ( v14 == this->m_commandList.m_heap.m_Memory.m_nAllocationCount )
        {
          v23 = this->m_commandList.m_heap.m_Size;
          CUtlMemory<SoundCommand_t *,int>::Grow(&this->m_commandList.m_heap.m_Memory, 1);
          v15 = this->m_commandList.m_heap.m_Size;
          v14 = v23;
        }
        m_pMemory = this->m_commandList.m_heap.m_Memory.m_pMemory;
        v17 = v14;
        this->m_commandList.m_heap.m_Size = v15 + 1;
        m_pMemory[v14] = v13;
        if ( this->m_commandList.m_heap.m_Size > v14 && v14 != 0 )
        {
          while ( 1 )
          {
            v20 = (v14 + 1) / 2 - 1;
            v22 = (v14 + 1) / 2 - 1;
            if ( this->m_commandList.m_LessFunc(
                   &this->m_commandList.m_heap.m_Memory.m_pMemory[v17],
                   &this->m_commandList.m_heap.m_Memory.m_pMemory[v20]) )
            {
              break;
            }
            v18 = this->m_commandList.m_heap.m_Memory.m_pMemory;
            v19 = v18[v20];
            v18[v20] = v18[v17];
            this->m_commandList.m_heap.m_Memory.m_pMemory[v17] = v19;
            if ( v22 == 0 )
              break;
            v14 = v22;
            v17 = v20;
          }
        }
      }
      (*(pRestore->_vptr_IRestore + 8))(pRestore);
    }
  }
  else
  {
    (*(pRestore->_vptr_IRestore + 7))(pRestore);
  }
  (*(pRestore->_vptr_IRestore + 8))(pRestore);
  *ppSoundPatch = v6;
}


// CSoundControllerImp::ShutdownSoundPatch  (line 1164, @0x0000000002396250, libserver.so)  // inlines: Shutdown
// calls: CSoundControllerImp::RemoveFromList, CSoundPatch::Shutdown
void __fastcall CSoundControllerImp::ShutdownSoundPatch(CSoundControllerImp *const this, CSoundPatch *pSound)
{
  if ( pSound != 0 )
  {
    if ( pSound->m_isPlaying != 0 )
      CSoundPatch::Shutdown(pSound);
    (*(this->_vptr_CSoundEnvelopeController + 4))(this, pSound);
    CSoundControllerImp::RemoveFromList(this, pSound);
  }
}


// CSoundControllerImp::SoundCreate  (line 1174, @0x00000000023a1810, libserver.so)  // inlines: Alloc, CCopyRecipientFilter, CEntityHandle, CEntityIndex, CHandle, CSoundEnvelope, CSoundPatch, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, GetFloat, GetInstance, InValidate, IndexToIdentity, Init, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, SndOpEventGuid_t, SoundEventGuid_t, operator new
// calls: CUtlMemoryPoolBase::Alloc, CSoundPatch::Init
// globals: CSoundPatch::s_Allocator, CSoundPatch::g_SoundPatchCount
CSoundPatch *__fastcall CSoundControllerImp::SoundCreate(
        CSoundControllerImp *const this,
        IRecipientFilter *const filter,
        CEntityIndex nEntIndex,
        const char *pSoundName)
{
  _DWORD *v7; // rax
  ConVar *m_pParent; // rdx
  float m_fValue; // xmm0_4
  CBaseEntity *m_pInstance; // rdx
  CEntityIdentity *v11; // rsi
  CEntityIdentity *v12; // rcx
  CSoundPatch *v14; // [rsp+8h] [rbp-28h]

  v7 = CUtlMemoryPoolBase::Alloc(&CSoundPatch::s_Allocator);
  if ( v7 != 0 )
  {
    v7[2] = 0;
    *v7 = &off_40ABAE0;
    v7[3] = 0;
    v7[4] = 0;
    *(v7 + 20) = 0;
    v7[6] = 0;
    v7[7] = 0;
    v7[8] = 0;
    *(v7 + 36) = 0;
    v7[10] = 0;
    v7[11] = -1;
    *(v7 + 7) = 0;
    m_pParent = soundpatch_captionlength.m_pParent;
    *(v7 + 8) = 0;
    v7[18] = -1;
    v7[20] = -1;
    *(v7 + 14) = &off_40ABA90;
    v7[30] = 0;
    v7[32] = 0;
    *(v7 + 17) = 0;
    v7[36] = 0;
    v7[37] = 0;
    *(v7 + 20) = 0;
    ++CSoundPatch::g_SoundPatchCount;
    m_fValue = m_pParent->m_Value.m_fValue;
    v7[21] = 0;
    *(v7 + 38) = m_fValue;
    v7[22] = 0;
    v7[23] = 0;
  }
  m_pInstance = 0;
  if ( nEntIndex.m_Data <= 0x7FFE )
  {
    v11 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nEntIndex.m_Data >> 9];
    if ( v11 != 0 )
    {
      v12 = &v11[nEntIndex.m_Data & 0x1FF];
      if ( v12 != 0 && (v12->m_EHandle.m_Index & 0x7FFF) == nEntIndex.m_Data )
        m_pInstance = v12->m_pInstance;
    }
  }
  v14 = v7;
  CSoundPatch::Init(v7, filter, m_pInstance, 0, pSoundName, 0, 1.0);
  return v14;
}


// CSoundControllerImp::SoundCreate  (line 1184, @0x00000000023a19c0, libserver.so)  // inlines: Alloc, CCopyRecipientFilter, CEntityHandle, CEntityIndex, CHandle, CSoundEnvelope, CSoundPatch, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, GetFloat, GetInstance, InValidate, IndexToIdentity, Init, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, SndOpEventGuid_t, SoundEventGuid_t, operator new
// calls: CUtlMemoryPoolBase::Alloc, CSoundPatch::Init
// globals: CSoundPatch::s_Allocator, CSoundPatch::g_SoundPatchCount
CSoundPatch *__fastcall CSoundControllerImp::SoundCreate(
        CSoundControllerImp *const this,
        IRecipientFilter *const filter,
        CEntityIndex nEntIndex,
        int channel,
        const char *pSoundName,
        float attenuation,
        __m128i scriptVolume)
{
  float v7; // r15d
  _DWORD *v12; // rax
  ConVar *m_pParent; // rdx
  float m_fValue; // xmm0_4
  CBaseEntity *m_pInstance; // rdx
  CEntityIdentity *v16; // rsi
  CEntityIdentity *v17; // rcx
  _DWORD *v19; // [rsp+0h] [rbp-38h]

  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(scriptVolume));
  v12 = CUtlMemoryPoolBase::Alloc(&CSoundPatch::s_Allocator);
  if ( v12 != 0 )
  {
    v12[2] = 0;
    *v12 = &off_40ABAE0;
    v12[3] = 0;
    v12[4] = 0;
    *(v12 + 20) = 0;
    v12[6] = 0;
    v12[7] = 0;
    v12[8] = 0;
    *(v12 + 36) = 0;
    v12[10] = 0;
    v12[11] = -1;
    *(v12 + 7) = 0;
    m_pParent = soundpatch_captionlength.m_pParent;
    *(v12 + 8) = 0;
    v12[18] = -1;
    v12[20] = -1;
    *(v12 + 14) = &off_40ABA90;
    v12[30] = 0;
    v12[32] = 0;
    *(v12 + 17) = 0;
    v12[36] = 0;
    v12[37] = 0;
    *(v12 + 20) = 0;
    ++CSoundPatch::g_SoundPatchCount;
    m_fValue = m_pParent->m_Value.m_fValue;
    v12[21] = 0;
    *(v12 + 38) = m_fValue;
    v12[22] = 0;
    v12[23] = 0;
  }
  m_pInstance = 0;
  if ( nEntIndex.m_Data <= 0x7FFE )
  {
    v16 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nEntIndex.m_Data >> 9];
    if ( v16 != 0 )
    {
      v17 = &v16[nEntIndex.m_Data & 0x1FF];
      if ( v17 != 0 && (v17->m_EHandle.m_Index & 0x7FFF) == nEntIndex.m_Data )
        m_pInstance = v17->m_pInstance;
    }
  }
  v19 = v12;
  CSoundPatch::Init(v12, filter, m_pInstance, channel, pSoundName, 0, v7);
  return v19;
}


// CSoundControllerImp::SoundCreate  (line 1193, @0x00000000023a1b80, libserver.so)  // inlines: Alloc, CCopyRecipientFilter, CEntityHandle, CEntityIndex, CHandle, CSoundEnvelope, CSoundPatch, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, GetFloat, GetInstance, InValidate, IndexToIdentity, Init, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, SndOpEventGuid_t, SoundEventGuid_t, operator new
// calls: CUtlMemoryPoolBase::Alloc, CSoundPatch::Init
// globals: CSoundPatch::s_Allocator, CSoundPatch::g_SoundPatchCount
CSoundPatch *__fastcall CSoundControllerImp::SoundCreate(
        CSoundControllerImp *const this,
        IRecipientFilter *const filter,
        CEntityIndex nEntIndex,
        int channel,
        const char *pSoundName,
        float attenuation,
        const Vector *pSoundOrigin,
        float scriptVolume)
{
  _DWORD *v13; // rax
  ConVar *m_pParent; // rdx
  float m_fValue; // xmm0_4
  CBaseEntity *m_pInstance; // rdx
  CEntityIdentity *v17; // rsi
  CEntityIdentity *v18; // rcx
  float v19; // xmm0_4
  _DWORD *scriptVolumeb; // [rsp+18h] [rbp-38h]

  v13 = CUtlMemoryPoolBase::Alloc(&CSoundPatch::s_Allocator);
  if ( v13 != 0 )
  {
    v13[2] = 0;
    *v13 = &off_40ABAE0;
    v13[3] = 0;
    v13[4] = 0;
    *(v13 + 20) = 0;
    v13[6] = 0;
    v13[7] = 0;
    v13[8] = 0;
    *(v13 + 36) = 0;
    v13[10] = 0;
    v13[11] = -1;
    *(v13 + 7) = 0;
    m_pParent = soundpatch_captionlength.m_pParent;
    *(v13 + 8) = 0;
    v13[18] = -1;
    v13[20] = -1;
    *(v13 + 14) = &off_40ABA90;
    v13[30] = 0;
    v13[32] = 0;
    *(v13 + 17) = 0;
    v13[36] = 0;
    v13[37] = 0;
    *(v13 + 20) = 0;
    ++CSoundPatch::g_SoundPatchCount;
    m_fValue = m_pParent->m_Value.m_fValue;
    v13[21] = 0;
    *(v13 + 38) = m_fValue;
    v13[22] = 0;
    v13[23] = 0;
  }
  m_pInstance = 0;
  if ( nEntIndex.m_Data <= 0x7FFE )
  {
    v17 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nEntIndex.m_Data >> 9];
    if ( v17 != 0 )
    {
      v18 = &v17[nEntIndex.m_Data & 0x1FF];
      if ( v18 != 0 && (v18->m_EHandle.m_Index & 0x7FFF) == nEntIndex.m_Data )
        m_pInstance = v18->m_pInstance;
    }
  }
  v19 = scriptVolume;
  scriptVolumeb = v13;
  CSoundPatch::Init(v13, filter, m_pInstance, channel, pSoundName, pSoundOrigin, v19);
  return scriptVolumeb;
}


// CSoundControllerImp::SoundCreate  (line 1201, @0x00000000023a1d40, libserver.so)  // inlines: Alloc, CCopyRecipientFilter, CEntityHandle, CEntityIndex, CHandle, CSoundEnvelope, CSoundPatch, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, GetFloat, GetInstance, InValidate, IndexToIdentity, Init, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, SndOpEventGuid_t, SoundEventGuid_t, operator new
// calls: CUtlMemoryPoolBase::Alloc, CSoundPatch::Init
// globals: CSoundPatch::s_Allocator, CSoundPatch::g_SoundPatchCount
CSoundPatch *__fastcall CSoundControllerImp::SoundCreate(
        CSoundControllerImp *const this,
        IRecipientFilter *const filter,
        CEntityIndex nEntIndex,
        int channel,
        const char *pSoundName)
{
  _DWORD *v9; // rax
  ConVar *m_pParent; // rdx
  float m_fValue; // xmm0_4
  CBaseEntity *m_pInstance; // rdx
  CEntityIdentity *v13; // rsi
  CEntityIdentity *v14; // rcx
  CSoundPatch *v16; // [rsp+8h] [rbp-28h]

  v9 = CUtlMemoryPoolBase::Alloc(&CSoundPatch::s_Allocator);
  if ( v9 != 0 )
  {
    v9[2] = 0;
    *v9 = &off_40ABAE0;
    v9[3] = 0;
    v9[4] = 0;
    *(v9 + 20) = 0;
    v9[6] = 0;
    v9[7] = 0;
    v9[8] = 0;
    *(v9 + 36) = 0;
    v9[10] = 0;
    v9[11] = -1;
    *(v9 + 7) = 0;
    m_pParent = soundpatch_captionlength.m_pParent;
    *(v9 + 8) = 0;
    v9[18] = -1;
    v9[20] = -1;
    *(v9 + 14) = &off_40ABA90;
    v9[30] = 0;
    v9[32] = 0;
    *(v9 + 17) = 0;
    v9[36] = 0;
    v9[37] = 0;
    *(v9 + 20) = 0;
    ++CSoundPatch::g_SoundPatchCount;
    m_fValue = m_pParent->m_Value.m_fValue;
    v9[21] = 0;
    *(v9 + 38) = m_fValue;
    v9[22] = 0;
    v9[23] = 0;
  }
  m_pInstance = 0;
  if ( nEntIndex.m_Data <= 0x7FFE )
  {
    v13 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nEntIndex.m_Data >> 9];
    if ( v13 != 0 )
    {
      v14 = &v13[nEntIndex.m_Data & 0x1FF];
      if ( v14 != 0 && (v14->m_EHandle.m_Index & 0x7FFF) == nEntIndex.m_Data )
        m_pInstance = v14->m_pInstance;
    }
  }
  v16 = v9;
  CSoundPatch::Init(v9, filter, m_pInstance, channel, pSoundName, 0, 1.0);
  return v16;
}


// CSoundControllerImp::SoundCreate  (line 1210, @0x00000000023a1ef0, libserver.so)  // inlines: Alloc, CCopyRecipientFilter, CEntityHandle, CEntityIndex, CHandle, CSoundEnvelope, CSoundPatch, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, GetFloat, GetInstance, InValidate, IndexToIdentity, Init, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, SetBaseFlags, SndOpEventGuid_t, SoundEventGuid_t, operator new
// calls: CUtlMemoryPoolBase::Alloc, CSoundPatch::Init, CSoundPatch::ChangeVolume, CSoundPatch::ChangePitch
// globals: CSoundPatch::s_Allocator, CSoundPatch::g_SoundPatchCount
CSoundPatch *__fastcall CSoundControllerImp::SoundCreate(
        CSoundControllerImp *const this,
        IRecipientFilter *const filter,
        CEntityIndex nEntIndex,
        const EmitSound_t *const es_0)
{
  CSoundPatch *v7; // rax
  CSoundPatch *v8; // rbx
  ConVar *m_pParent; // rax
  float m_fValue; // xmm0_4
  CBaseEntity *m_pInstance; // rdx
  CEntityIdentity *v12; // rsi
  CEntityIdentity *v13; // rax
  float v14; // xmm2_4
  float v15; // xmm2_4

  v7 = CUtlMemoryPoolBase::Alloc(&CSoundPatch::s_Allocator);
  v8 = v7;
  if ( v7 != 0 )
  {
    v7->m_pitch.m_current = 0.0;
    v7->_vptr_CSoundPatch = &off_40ABAE0;
    v7->m_pitch.m_target = 0.0;
    v7->m_pitch.m_rate = 0.0;
    v7->m_pitch.m_forceupdate = 0;
    v7->m_volume.m_current = 0.0;
    v7->m_volume.m_target = 0.0;
    v7->m_volume.m_rate = 0.0;
    v7->m_volume.m_forceupdate = 0;
    v7->m_guid.m_nGuid.m_Data = 0;
    v7->m_guid.m_hStackHash = -1;
    v7->m_iszSoundName.u.m_Id = 0;
    v7->m_Filter._vptr_IRecipientFilter = &off_40ABA90;
    m_pParent = soundpatch_captionlength.m_pParent;
    v8->m_iszSoundScriptName.u.m_Id = 0;
    v8->m_hEnt.m_Index = -1;
    v8->m_soundEntityIndex.m_Data = -1;
    v8->m_Filter.m_Flags = 0;
    v8->m_Filter.m_Recipients.m_Size = 0;
    v8->m_Filter.m_Recipients.m_Memory.m_pMemory = 0;
    v8->m_Filter.m_Recipients.m_Memory.m_nAllocationCount = 0;
    v8->m_Filter.m_Recipients.m_Memory.m_nGrowSize = 0;
    v8->m_iszClassName.u.m_Id = 0;
    ++CSoundPatch::g_SoundPatchCount;
    m_fValue = m_pParent->m_Value.m_fValue;
    v8->m_soundOrigin.x = 0.0;
    v8->m_flCloseCaptionDuration = m_fValue;
    v8->m_soundOrigin.y = 0.0;
    v8->m_soundOrigin.z = 0.0;
  }
  m_pInstance = 0;
  if ( nEntIndex.m_Data <= 0x7FFE )
  {
    v12 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nEntIndex.m_Data >> 9];
    if ( v12 != 0 )
    {
      v13 = &v12[nEntIndex.m_Data & 0x1FF];
      if ( v13 != 0 && (v13->m_EHandle.m_Index & 0x7FFF) == nEntIndex.m_Data )
        m_pInstance = v13->m_pInstance;
    }
  }
  CSoundPatch::Init(v8, filter, m_pInstance, es_0->m_nChannel, es_0->m_pSoundName, es_0->m_pOrigin, 1.0);
  CSoundPatch::ChangeVolume(v8, es_0->m_flVolume, 0.0, v14);
  CSoundPatch::ChangePitch(v8, es_0->m_nPitch, 0.0, v15);
  if ( SLOBYTE(es_0->m_nFlags) < 0 )
    v8->m_baseFlags = 128;
  return v8;
}


// CSoundControllerImp::SoundDestroy  (line 1227, @0x0000000002383ae0, libserver.so)  // inlines: Free, Purge, RemoveAll, operator delete, ~CCopyRecipientFilter, ~CSoundPatch, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IRecipientFilter
// calls: CUtlMemoryPoolBase::Free, CUtlMemory<CEntityIndex, int>::Purge
// globals: CSoundPatch::g_SoundPatchCount, CSoundPatch::s_Allocator
void __fastcall CSoundControllerImp::SoundDestroy(CSoundControllerImp *const this, CSoundPatch *pSound)
{
  if ( pSound != 0 )
  {
    (*(this->_vptr_CSoundEnvelopeController + 5))(this);
    pSound->m_Filter.m_Recipients.m_Size = 0;
    pSound->_vptr_CSoundPatch = &off_40ABAE0;
    --CSoundPatch::g_SoundPatchCount;
    pSound->m_Filter._vptr_IRecipientFilter = &off_40ABA90;
    if ( (pSound->m_Filter.m_Recipients.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CEntityIndex,int>::Purge(&pSound->m_Filter.m_Recipients.m_Memory);
      if ( (pSound->m_Filter.m_Recipients.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CEntityIndex,int>::Purge(&pSound->m_Filter.m_Recipients.m_Memory);
    }
    pSound->m_Filter._vptr_IRecipientFilter = &off_3FCAC70;
    CUtlMemoryPoolBase::Free(&CSoundPatch::s_Allocator, pSound);
  }
}


// CSoundControllerImp::SoundChangePitch  (line 1236, @0x00000000023959b0, libserver.so)
// calls: CSoundPatch::ChangePitch
void __fastcall CSoundControllerImp::SoundChangePitch(
        CSoundControllerImp *const this,
        CSoundPatch *pSound,
        float a3,
        float pitchTarget,
        float deltaTime)
{
  CSoundPatch::ChangePitch(pSound, a3, pitchTarget, deltaTime);
}


// CSoundControllerImp::SoundChangeVolume  (line 1242, @0x0000000002395a20, libserver.so)
// calls: CSoundPatch::ChangeVolume
void __fastcall CSoundControllerImp::SoundChangeVolume(
        CSoundControllerImp *const this,
        CSoundPatch *pSound,
        float a3,
        float volumeTarget,
        float deltaTime)
{
  CSoundPatch::ChangeVolume(pSound, a3, volumeTarget, deltaTime);
}


// CSoundControllerImp::SoundSetOrigin  (line 1247, @0x0000000002381000, libserver.so)  // inlines: SetOrigin
void __fastcall CSoundControllerImp::SoundSetOrigin(
        CSoundControllerImp *const this,
        CSoundPatch *pSound,
        const Vector *pSoundOrigin)
{
  if ( pSoundOrigin != 0 )
    pSound->m_soundOrigin = *pSoundOrigin;
}


// CSoundControllerImp::SoundGetPitch  (line 1271, @0x0000000002381030, libserver.so)
float __fastcall CSoundControllerImp::SoundGetPitch(CSoundControllerImp *const this, CSoundPatch *pSound)
{
  return pSound->m_pitch.m_current;
}


// CSoundControllerImp::SoundGetVolume  (line 1276, @0x0000000002381040, libserver.so)
float __fastcall CSoundControllerImp::SoundGetVolume(CSoundControllerImp *const this, CSoundPatch *pSound)
{
  return pSound->m_volume.m_current;
}


// CSoundControllerImp::SoundFadeOut  (line 1281, @0x0000000002395ad0, libserver.so)
// calls: CSoundPatch::FadeOut
void __fastcall CSoundControllerImp::SoundFadeOut(
        CSoundControllerImp *const this,
        CSoundPatch *pSound,
        float deltaTime,
        bool destroyOnFadeout,
        float a5)
{
  if ( deltaTime == 0.0 && destroyOnFadeout )
  {
    (*(this->_vptr_CSoundEnvelopeController + 11))(this);
  }
  else
  {
    CSoundPatch::FadeOut(pSound, deltaTime, a5, destroyOnFadeout);
    if ( destroyOnFadeout )
      (*(this->_vptr_CSoundEnvelopeController + 3))(this, pSound, 3, deltaTime, 0.0);
  }
}


// CSoundControllerImp::SoundPlayEnvelope  (line 1304, @0x00000000023810d0, libserver.so)
// calls: Msg
// strings: "Invalid starting amplitude value in envelope!  (Cannot be -1)\n", "Invalid starting duration value in envelope! (Cannot be -1)\n"
float __fastcall CSoundControllerImp::SoundPlayEnvelope(
        CSoundControllerImp *const this,
        CSoundPatch *pSound,
        soundcommands_t soundCommand,
        envelopePoint_t *points,
        int numPoints)
{
  envelopePoint_t *v9; // r15
  int v10; // ebx
  double v11; // xmm0_8
  double v12; // xmm1_8
  float amplitude; // [rsp+4h] [rbp-3Ch]
  float duration; // [rsp+8h] [rbp-38h]
  float totalDuration; // [rsp+Ch] [rbp-34h]

  (*(this->_vptr_CSoundEnvelopeController + 4))(this);
  if ( numPoints <= 0 )
    return 0.0;
  v9 = points;
  totalDuration = 0.0;
  v10 = 0;
  duration = 0.0;
  amplitude = 0.0;
  do
  {
    if ( v9->amplitudeMin == -1.0 && v9->amplitudeMax == -1.0 )
    {
      if ( v10 == 0 )
        Msg("Invalid starting amplitude value in envelope!  (Cannot be -1)\n");
    }
    else
    {
      amplitude = (*(*random_valve + 8LL))(random_valve);
    }
    *&v11 = LODWORD(v9->durationMin);
    *&v12 = LODWORD(v9->durationMax);
    if ( *&v11 == -1.0 && *&v12 == -1.0 )
    {
      if ( v10 == 0 )
        Msg("Invalid starting duration value in envelope! (Cannot be -1)\n");
    }
    else
    {
      duration = (*(*random_valve + 8LL))(random_valve, v11, v12);
    }
    ++v10;
    ++v9;
    (*(this->_vptr_CSoundEnvelopeController + 3))(this, pSound, soundCommand, totalDuration, duration, amplitude);
    totalDuration = totalDuration + duration;
  }
  while ( v10 != numPoints );
  return totalDuration;
}


// CSoundControllerImp::SoundPlayEnvelope  (line 1358, @0x0000000002381050, libserver.so)
float __fastcall CSoundControllerImp::SoundPlayEnvelope(
        CSoundControllerImp *const this,
        CSoundPatch *pSound,
        soundcommands_t soundCommand,
        envelopeDescription_t *envelope)
{
  return (*(this->_vptr_CSoundEnvelopeController + 17))(
           this,
           pSound,
           soundCommand,
           envelope->pPoints,
           envelope->nNumPoints);
}


// CSoundControllerImp::CheckLoopingSoundsForPlayer  (line 1368, @0x00000000023a1520, libserver.so)
// calls: CSoundPatch::AddPlayerPost
void __fastcall CSoundControllerImp::CheckLoopingSoundsForPlayer(CSoundControllerImp *const this, CBasePlayer *pPlayer)
{
  int v3; // eax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r13
  CSoundPatch *v7; // rdi

  v3 = this->m_soundList.m_Size - 1;
  if ( v3 >= 0 )
  {
    v5 = 8LL * v3;
    v6 = 8 * (v3 - v3) - 8;
    do
    {
      v7 = this->m_soundList.m_Memory.m_pMemory[v5 / 8];
      v5 -= 8LL;
      CSoundPatch::AddPlayerPost(v7, pPlayer);
    }
    while ( v5 != v6 );
  }
}


// CSoundControllerImp::RestoreGame  (line 1380, @0x000000000239a0e0, libserver.so)
// calls: CSoundPatch::ResumeSound
void __fastcall CSoundControllerImp::RestoreGame(CSoundControllerImp *const this, const EventRestoreGame_t *const msg)
{
  int v3; // eax
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r13
  CSoundPatch *v6; // rdi

  v3 = this->m_soundList.m_Size - 1;
  if ( v3 >= 0 )
  {
    v4 = 8LL * v3;
    v5 = 8 * (v3 - v3) - 8;
    do
    {
      v6 = this->m_soundList.m_Memory.m_pMemory[v4 / 8];
      if ( v6 != 0 && v6->m_isPlaying != 0 )
        CSoundPatch::ResumeSound(v6);
      v4 -= 8LL;
    }
    while ( v4 != v5 );
  }
}


// CSoundControllerImp::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 1399, @0x0000000002396560, libserver.so)
void __cdecl CSoundControllerImp::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CSoundEnvelopeController::GetController  (line 1401, @0x0000000002396570, libserver.so)
// callers: CEnvWindShared::UpdateWindSound, CEnvWindShared::~CEnvWindShared, CSource2GameClients::ClientActive, CTankTrainAI::~CTankTrainAI, CTankTrainAI::SoundEngineStop, CTankTrainAI::Activate, CTankTrainAI::SoundEngineStart, CTankTrainAI::SoundShutdown, CBasePlatTrain::StopMovingSound, CBasePlatTrain::PlayMovingSound, CBaseServerVehicle::SoundShutdown, CBaseServerVehicle::StopLoopingSound (13 total)
// globals: g_Controller
CSoundEnvelopeController *__cdecl CSoundEnvelopeController::GetController()
{
  return &g_Controller;
}


// CSoundPatchSaveRestoreOps::Save  (line 1413, @0x00000000023aede0, libserver.so)
// calls: CSoundControllerImp::SaveSoundPatch
// globals: g_Controller
void __fastcall CSoundPatchSaveRestoreOps::Save(
        CSoundPatchSaveRestoreOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  typedescription_t *pTypeDesc; // rax
  CSoundPatch **pField; // rbx
  int fieldSize; // eax
  __int64 v8; // r13
  CSoundPatch *v9; // rsi

  (*(pSave->_vptr_ISave + 8))(pSave);
  pTypeDesc = fieldInfo->pTypeDesc;
  pField = fieldInfo->pField;
  fieldSize = pTypeDesc->fieldSize;
  if ( fieldSize != 0 )
  {
    v8 = &pField[(fieldSize - 1) + 1];
    do
    {
      v9 = *pField++;
      CSoundControllerImp::SaveSoundPatch(&g_Controller, v9, pSave);
    }
    while ( pField != v8 );
  }
  (*(pSave->_vptr_ISave + 9))(pSave);
}


// CSoundPatchSaveRestoreOps::Restore  (line 1429, @0x00000000023b6b50, libserver.so)
// calls: CSoundControllerImp::RestoreSoundPatch
// globals: g_Controller
void __fastcall CSoundPatchSaveRestoreOps::Restore(
        CSoundPatchSaveRestoreOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  typedescription_t *pTypeDesc; // rax
  CSoundPatch **pField; // rbx
  int fieldSize; // eax
  __int64 v8; // r13

  (*(pRestore->_vptr_IRestore + 7))(pRestore);
  pTypeDesc = fieldInfo->pTypeDesc;
  pField = fieldInfo->pField;
  fieldSize = pTypeDesc->fieldSize;
  if ( fieldSize != 0 )
  {
    v8 = &pField[(fieldSize - 1) + 1];
    do
      CSoundControllerImp::RestoreSoundPatch(&g_Controller, pField++, pRestore);
    while ( pField != v8 );
  }
  (*(pRestore->_vptr_IRestore + 8))(pRestore);
}


// GetSoundSaveRestoreOps  (line 1447, @0x0000000002396580, libserver.so)
// callers: DataMapInit<CTankTrainAI>, DataMapInit<CBasePlatTrain>, DataMapInit<CBaseServerVehicle>
// globals: s_SoundPatchSaveRestoreOps
ISaveRestoreOps *__cdecl GetSoundSaveRestoreOps()
{
  return &s_SoundPatchSaveRestoreOps;
}


