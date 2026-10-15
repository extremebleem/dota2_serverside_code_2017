// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/particlesystemquery.cpp:124
class CParticleSystemQuery : public IParticleSystemQuery {
public:

private:

	WorldGroupId_t m_worldGroupId;  // +0x8
	CParticleSystemQuery(CParticleSystemQuery &);
	CParticleSystemQuery(const CParticleSystemQuery &);
	virtual bool IsEditor();
	virtual void GetLightingAtPoint(const Vector &, Color &);
	virtual void TraceLine(const Vector &, const Vector &, uint64, const CBaseEntity *, int, CBaseTrace *, bool);
	virtual void GetClosestControllingObjectHitBox(IParticleCollection *, int, int, float, Vector *, Vector *, int *, int, const char *);
	virtual matrix3x4_t GetControllingObjectBoneTransform(IParticleCollection *, int, int);
	virtual int GetRayTraceEnvironmentFromName(const char *);
	virtual int GetCollisionGroupFromName(const char *);
	virtual int GetControllingObjectHitBoxTransforms(IParticleCollection *, int, const CHitBoxSet *, int, matrix3x4a_t *);
	virtual int GetControllingObjectBoneInfo(IParticleCollection *, int, int, ModelHitBoxInfo_t *);
	virtual bool ArePointsInControllingObjectHitBoxes(IParticleCollection *, int, int, Vector *, bool *, bool, const char *);
	virtual void GetControllingObjectOBBox(IParticleCollection *, int, Vector &, Vector &);
	virtual void GetControllingObjectRenderBounds(IParticleCollection *, int, Vector *, Vector *, matrix3x4_t *);
	virtual void TraceAgainstRayTraceEnv(int, const FourRays &, fltx4, fltx4, RayTracingResult_t *, int32);
	virtual Vector GetLocalPlayerPos();
	virtual void GetLocalPlayerEyeVectors(Vector *, Vector *, Vector *);
	virtual int GetActivityCount();
	virtual const char * GetActivityNameFromIndex(int);
	virtual HSequence GetActivityNumber(HModel, const char *);
	virtual HSequence GetSequenceFromModel(IParticleCollection *, int, float *);
	virtual float GetScaleFromCPObject(IParticleCollection *, int);
	virtual float GetPointVisibilityPercentage(Vector &, float &);
	virtual void GetModelFromCPObject(IParticleCollection *, int, int, bool, ParticleModelQueryInfo_t *);
	virtual void DebugDrawLine(const Vector &, const Vector &, int, int, int, bool, float);
	virtual void UpdateProjectedTexture(const ParticleProjectedTextureInfo_t &, HProjectedTexture &);
	virtual void DeleteProjectedTexture(HProjectedTexture);
	virtual CSceneObject * UpdateDeferredLight(ISceneWorld *, HRenderTexture, Vector &, float, Vector4D &, float, float, float, Vector, float, float, float, float, float, HDeferredLight &);
	virtual void DeleteDeferredLight(HDeferredLight);
	virtual void UpdateSoundPatch(const char *, Vector &, float, float, float, float, int, void * &);
	virtual void DeleteParticleSound(void * &);
	virtual void ScreenShakeGlobal(const Vector &, float, float, float, float);
	virtual void ScreenShakeLocal(Vector, float, float, float, IParticleCollection *, int);
	virtual int GetEconLoadoutTypeCount();
	virtual const char * GetEconSlotName(int);
	virtual int GetEconLoadoutSlotType(const char *);
	virtual Vector GetWindVelocityAtLocation(const Vector &);
	virtual bool IsPointUnderWater(IParticleCollection *, Vector, float &);
	virtual float32 GetAnimDecodeRealTime();
	virtual Vector GetTimeOfDayValue(CUtlStringToken, const Vector &);
	virtual void AddGrassFlattenEvent(ISceneWorld *, const Vector &, float, const Vector &, float);
	virtual void AddShakeTreesInRadiusEvent(const Vector &, const Vector &, float, float, float, float, float, float, float);
	CParticleSystemQuery(WorldGroupId_t);
	void PreSimulate();
	void PostSimulate();
	void LevelShutdown();

	// vtable[0] IsEditor
	// vtable[1] GetLightingAtPoint
	// vtable[2] TraceLine
	// vtable[6] GetClosestControllingObjectHitBox
	// vtable[10] GetControllingObjectBoneTransform
	// vtable[4] GetRayTraceEnvironmentFromName
	// vtable[5] GetCollisionGroupFromName
	// vtable[7] GetControllingObjectHitBoxTransforms
	// vtable[8] GetControllingObjectBoneInfo
	// vtable[3] ArePointsInControllingObjectHitBoxes
	// vtable[9] GetControllingObjectOBBox
	// vtable[39] GetControllingObjectRenderBounds
	// vtable[11] TraceAgainstRayTraceEnv
	// vtable[12] GetLocalPlayerPos
	// vtable[13] GetLocalPlayerEyeVectors
	// vtable[14] GetActivityCount
	// vtable[15] GetActivityNameFromIndex
	// vtable[16] GetActivityNumber
	// vtable[17] GetSequenceFromModel
	// vtable[18] GetScaleFromCPObject
	// vtable[19] GetPointVisibilityPercentage
	// vtable[21] GetModelFromCPObject
	// vtable[20] DebugDrawLine
	// vtable[22] UpdateProjectedTexture
	// vtable[23] DeleteProjectedTexture
	// vtable[24] UpdateDeferredLight
	// vtable[25] DeleteDeferredLight
	// vtable[26] UpdateSoundPatch
	// vtable[27] DeleteParticleSound
	// vtable[31] ScreenShakeGlobal
	// vtable[32] ScreenShakeLocal
	// vtable[33] GetEconLoadoutTypeCount
	// vtable[34] GetEconSlotName
	// vtable[35] GetEconLoadoutSlotType
	// vtable[36] GetWindVelocityAtLocation
	// vtable[40] IsPointUnderWater
	// vtable[37] GetAnimDecodeRealTime
	// vtable[38] GetTimeOfDayValue
	// vtable[41] AddGrassFlattenEvent
	// vtable[42] AddShakeTreesInRadiusEvent
	// sizeof = 16
};

// src/game/shared/particlesystemquery.cpp:277
class CParticleSystemQueryGameSystem : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

	struct QueryInfo_t {
		int m_nRefCount;  // +0x8
		QueryInfo_t();

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	typedef CAutoGameSystem BaseClass;
	CParticleSystemQueryGameSystem(CParticleSystemQueryGameSystem &);
	CParticleSystemQueryGameSystem(const CParticleSystemQueryGameSystem &);
	CParticleSystemQueryGameSystem();

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CParticleSystemQueryGameSystem *);
	virtual void PreSpawnGroupLoad(const EventPreSpawnGroupLoad_t &);
	virtual void PostSpawnGroupUnload(const EventPostSpawnGroupUnload_t &);
	virtual void PostRender(const EventClientPostRender_t &);
	IParticleSystemQuery * GetQueryForWorld(WorldGroupId_t);
	void PreSimulate();
	void PostSimulate();
	virtual ~CParticleSystemQueryGameSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[14] PreSpawnGroupLoad
	// vtable[17] PostSpawnGroupUnload
	// vtable[23] PostRender
	// sizeof = 160
};

// src/game/shared/particlesystemquery.cpp:904
struct RayTraceEnvironmentNameRecord_t {
	const char * m_pszGroupName;  // +0x0
	int m_nGroupID;  // +0x8

	// sizeof = 16
};

// src/game/shared/particlesystemquery.cpp:929
struct CollisionGroupNameRecord_t {
	const char * m_pszGroupName;  // +0x0
	int m_nGroupID;  // +0x8

	// sizeof = 16
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CParticleSystemQuery::IsEditor  (line 127, @0x0000000002302fc0, libserver.so)
bool __fastcall CParticleSystemQuery::IsEditor(CParticleSystemQuery *const this)
{
  return 0;
}


// CParticleSystemQuery::GetAnimDecodeRealTime  (line 225, @0x0000000002302fd0, libserver.so)
float32 __fastcall CParticleSystemQuery::GetAnimDecodeRealTime(const CParticleSystemQuery *const this)
{
  return 0.0;
}


// CParticleSystemQuery::GetTimeOfDayValue  (line 232, @0x0000000002302fe0, libserver.so)
Vector __fastcall CParticleSystemQuery::GetTimeOfDayValue(
        const CParticleSystemQuery *const this,
        CUtlStringToken token,
        const Vector *const vDefault)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&vDefault->x;
  result.z = vDefault->z;
  return result;
}


// CParticleSystemQueryGameSystem::~CParticleSystemQueryGameSystem  (line 277, @0x00000000023187d0, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CUtlFixedLinkedList, ~CUtlFixedMemory, ~CUtlHashtable, ~CUtlLinkedList, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlHashtable<CUtlStringToken, long long int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, long long int>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, long long int>, int>::Purge, CUtlLinkedList<CParticleSystemQueryGameSystem::QueryInfo_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t, long long int> > >::RemoveAll, CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t, long long int> >::Purge, IGameSystem::~IGameSystem, CUtlMemory<CParticleSystemQuery*, int>::Purge
void __fastcall CParticleSystemQueryGameSystem::~CParticleSystemQueryGameSystem(
        CParticleSystemQueryGameSystem *const this)
{
  bool v2; // zf
  CUtlVectorBase<CParticleSystemQuery*,CUtlMemory<CParticleSystemQuery*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_queuedQueryDeletions.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_40740B0;
  this->m_queuedQueryDeletions.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_queuedQueryDeletions.m_Memory;
    CUtlMemory<CParticleSystemQuery *,int>::Purge(&this->m_queuedQueryDeletions.m_Memory);
    if ( (this->m_queuedQueryDeletions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CParticleSystemQuery *,int>::Purge(p_m_Memory);
  }
  CUtlHashtable<CUtlStringToken,long long,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long>,int>>::RemoveAll(&this->m_lookup);
  if ( (this->m_lookup.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long>,int>::Purge(&this->m_lookup.m_table);
  CUtlLinkedList<CParticleSystemQueryGameSystem::QueryInfo_t,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t,long long>>>::RemoveAll(&this->m_queries);
  CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t,long long>>::Purge(&this->m_queries.m_Memory);
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CParticleSystemQueryGameSystem::~CParticleSystemQueryGameSystem  (line 277, @0x0000000002318870, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CParticleSystemQueryGameSystem, ~CUtlFixedLinkedList, ~CUtlFixedMemory, ~CUtlHashtable, ~CUtlLinkedList, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlHashtable<CUtlStringToken, long long int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, long long int>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, long long int>, int>::Purge, CUtlLinkedList<CParticleSystemQueryGameSystem::QueryInfo_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t, long long int> > >::RemoveAll, CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t, long long int> >::Purge, IGameSystem::~IGameSystem, operator delete, CUtlMemory<CParticleSystemQuery*, int>::Purge
void __fastcall CParticleSystemQueryGameSystem::~CParticleSystemQueryGameSystem(
        CParticleSystemQueryGameSystem *const this)
{
  bool v2; // zf
  CUtlVectorBase<CParticleSystemQuery*,CUtlMemory<CParticleSystemQuery*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_queuedQueryDeletions.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_40740B0;
  this->m_queuedQueryDeletions.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_queuedQueryDeletions.m_Memory;
    CUtlMemory<CParticleSystemQuery *,int>::Purge(&this->m_queuedQueryDeletions.m_Memory);
    if ( (this->m_queuedQueryDeletions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CParticleSystemQuery *,int>::Purge(p_m_Memory);
  }
  CUtlHashtable<CUtlStringToken,long long,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long>,int>>::RemoveAll(&this->m_lookup);
  if ( (this->m_lookup.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long>,int>::Purge(&this->m_lookup.m_table);
  CUtlLinkedList<CParticleSystemQueryGameSystem::QueryInfo_t,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t,long long>>>::RemoveAll(&this->m_queries);
  CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t,long long>>::Purge(&this->m_queries.m_Memory);
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CParticleSystemQueryGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 279, @0x0000000002303000, libserver.so)
void __fastcall CParticleSystemQueryGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CParticleSystemQueryGameSystem *const this)
{
  ;
}


// CParticleSystemQueryGameSystem::DoesGameSystemReallocate  (line 279, @0x0000000002303010, libserver.so)
// globals: CParticleSystemQueryGameSystem::sm_Factory
bool __fastcall CParticleSystemQueryGameSystem::DoesGameSystemReallocate(
        const CParticleSystemQueryGameSystem *const this)
{
  return (*(CParticleSystemQueryGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CParticleSystemQueryGameSystem::sm_Factory);
}


// CParticleSystemQueryGameSystem::SetGameSystemGlobalPtrs  (line 279, @0x0000000002303030, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CParticleSystemQueryGameSystem::sm_Factory
void __fastcall CParticleSystemQueryGameSystem::SetGameSystemGlobalPtrs(
        CParticleSystemQueryGameSystem *const this,
        void *pValue)
{
  if ( CParticleSystemQueryGameSystem::sm_Factory != 0 )
    (*(CParticleSystemQueryGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(
      CParticleSystemQueryGameSystem::sm_Factory,
      pValue);
}


// CParticleSystemQueryGameSystem::PreSpawnGroupLoad  (line 282, @0x000000000231ae30, libserver.so)  // inlines: AddToTail, CParticleSystemQuery, CUtlKeyValuePair<CUtlStringToken, long long int>, Construct<CParticleSystemQueryGameSystem::QueryInfo_t>, Construct<CUtlKeyValuePair<CUtlStringToken, long long int>, CUtlStringToken, long long int>, DoInsert<const CUtlStringToken&>, DoLookup<const CUtlStringToken&>, Element, Find, GetPtr, HashItem<unsigned int>, Insert, InsertBefore, InternalElement, LinkBefore, QueryInfo_t, operator(), operator[]
// calls: CSpawnGroupMgrGameSystem::GetWorldGroupId, MurmurHash2, CUtlLinkedList<CParticleSystemQueryGameSystem::QueryInfo_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t, long long int> > >::AllocInternal, operator new, CUtlHashtable<CUtlStringToken, long long int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, long long int>, int> >::DoInsertUnconstructed, CUtlHashtable<CUtlStringToken, long long int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, long long int>, int> >::DoLookup<const CUtlStringToken&>, CUtlLinkedList<CParticleSystemQueryGameSystem::QueryInfo_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t, long long int> > >::Unlink
void __fastcall CParticleSystemQueryGameSystem::PreSpawnGroupLoad(
        CParticleSystemQueryGameSystem *const this,
        const EventPreSpawnGroupLoad_t *const msg)
{
  CUtlHashtable<CUtlStringToken,long long int,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long int>,int> > *p_m_lookup; // r13
  uint32 v4; // eax
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // r14
  _DWORD *v8; // rax
  uint32 v9; // eax
  unsigned int v10; // r15d
  CUtlHashtableEntry<CUtlStringToken,long long int> *v11; // rax
  uint32 v12; // edx
  UtlHashHandle_t v13; // eax
  CUtlHashtableEntry<CUtlStringToken,long long int> *v14; // rax
  __int64 m_Tail; // rax
  uint32 m_nHashCode; // [rsp+8h] [rbp-48h]
  WorldGroupId_t id; // [rsp+10h] [rbp-40h] BYREF

  p_m_lookup = &this->m_lookup;
  id.m_nHashCode = CSpawnGroupMgrGameSystem::GetWorldGroupId(g_pSpawnGroupMgr, msg->m_SpawnGroupHandle).m_nHashCode;
  v4 = MurmurHash2(&id, 4, 0x3501A674u);
  if ( this->m_lookup.m_nUsed == 0
    || (v13 = CUtlHashtable<CUtlStringToken,long long,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long>,int>>::DoLookup<CUtlStringToken const&>(
                p_m_lookup,
                &id,
                v4,
                0)) == -1
    || (v14 = &this->m_lookup.m_table.m_pMemory[v13]) == -12LL )
  {
    v5 = 0;
    v6 = CUtlLinkedList<CParticleSystemQueryGameSystem::QueryInfo_t,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t,long long>>>::AllocInternal(
           &this->m_queries,
           0);
    v7 = v6;
    if ( v6 != 0 )
    {
      v5 = v6;
      CUtlLinkedList<CParticleSystemQueryGameSystem::QueryInfo_t,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t,long long>>>::Unlink(
        &this->m_queries,
        v6);
      *(v7 + 24) = 0;
      m_Tail = this->m_queries.m_Tail;
      *(v7 + 16) = m_Tail;
      this->m_queries.m_Tail = v7;
      if ( m_Tail != 0 )
        *(m_Tail + 24) = v7;
      else
        this->m_queries.m_Head = v7;
      ++this->m_queries.m_ElementCount;
      *v7 = 0;
      *(v7 + 8) = 0;
    }
    m_nHashCode = id.m_nHashCode;
    v8 = operator new(0x10u);
    *v8 = &off_4074270;
    v8[2] = m_nHashCode;
    *v5 = v8;
    *(v5 + 8) = 1;
    v9 = MurmurHash2(&id, 4, 0x3501A674u);
    v10 = v9;
    if ( this->m_lookup.m_nUsed == 0
      || CUtlHashtable<CUtlStringToken,long long,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long>,int>>::DoLookup<CUtlStringToken const&>(
           p_m_lookup,
           &id,
           v9,
           0) == -1 )
    {
      v11 = &this->m_lookup.m_table.m_pMemory[CUtlHashtable<CUtlStringToken,long long,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long>,int>>::DoInsertUnconstructed(
                                                p_m_lookup,
                                                v10,
                                                1)];
      if ( v11 != -4LL )
      {
        v12 = id.m_nHashCode;
        *&v11->data[2] = v7;
        v11->data[0] = v12;
      }
    }
  }
  else
  {
    ++*(*&v14->data[2] + 8LL);
  }
}


// CParticleSystemQueryGameSystem::PostSpawnGroupUnload  (line 300, @0x0000000002318620, libserver.so)  // inlines: AddToTail, CopyConstruct<CParticleSystemQuery*>, DoLookup<const CUtlStringToken&>, Element, Find, Free, GetPtr, GrowMemory, HashItem<unsigned int>, Remove, operator(), operator[]
// calls: CSpawnGroupMgrGameSystem::GetWorldGroupId, MurmurHash2, CUtlHashtable<CUtlStringToken, long long int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, long long int>, int> >::DoLookup<const CUtlStringToken&>, CUtlLinkedList<CParticleSystemQueryGameSystem::QueryInfo_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t, long long int> > >::Unlink, CUtlHashtable<CUtlStringToken, long long int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, long long int>, int> >::DoRemove<const CUtlStringToken&>, CUtlMemory<CParticleSystemQuery*, int>::Grow
void __fastcall CParticleSystemQueryGameSystem::PostSpawnGroupUnload(
        CParticleSystemQueryGameSystem *const this,
        const EventPostSpawnGroupUnload_t *const msg)
{
  uint32 v3; // eax
  UtlHashHandle_t v4; // eax
  CUtlHashtableEntry<CUtlStringToken,long long int> *v5; // r15
  __int64 v6; // r12
  int v7; // eax
  bool v8; // zf
  __int64 m_Size; // rax
  int v10; // edx
  CParticleSystemQuery **v11; // rax
  __int64 v12; // r12
  uint32 v13; // eax
  int v14; // [rsp+Ch] [rbp-44h]
  WorldGroupId_t id; // [rsp+10h] [rbp-40h] BYREF

  id.m_nHashCode = CSpawnGroupMgrGameSystem::GetWorldGroupId(g_pSpawnGroupMgr, msg->m_SpawnGroupHandle).m_nHashCode;
  v3 = MurmurHash2(&id, 4, 0x3501A674u);
  if ( this->m_lookup.m_nUsed != 0 )
  {
    v4 = CUtlHashtable<CUtlStringToken,long long,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long>,int>>::DoLookup<CUtlStringToken const&>(
           &this->m_lookup,
           &id,
           v3,
           0);
    if ( v4 != -1 )
    {
      v5 = &this->m_lookup.m_table.m_pMemory[v4];
      if ( v5 != -12LL )
      {
        v6 = *&v5->data[2];
        v7 = *(v6 + 8) - 1;
        v8 = *(v6 + 8) == 1;
        *(v6 + 8) = v7;
        if ( v7 < 0 || v8 )
        {
          m_Size = this->m_queuedQueryDeletions.m_Size;
          v10 = this->m_queuedQueryDeletions.m_Size;
          if ( m_Size == this->m_queuedQueryDeletions.m_Memory.m_nAllocationCount )
          {
            v14 = this->m_queuedQueryDeletions.m_Size;
            CUtlMemory<CParticleSystemQuery *,int>::Grow(&this->m_queuedQueryDeletions.m_Memory, 1);
            v10 = this->m_queuedQueryDeletions.m_Size;
            m_Size = v14;
          }
          this->m_queuedQueryDeletions.m_Size = v10 + 1;
          v11 = &this->m_queuedQueryDeletions.m_Memory.m_pMemory[m_Size];
          if ( v11 != 0 )
            *v11 = *v6;
          v12 = *&v5->data[2];
          CUtlLinkedList<CParticleSystemQueryGameSystem::QueryInfo_t,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CParticleSystemQueryGameSystem::QueryInfo_t,long long>>>::Unlink(
            &this->m_queries,
            v12);
          *(v12 + 24) = this->m_queries.m_FirstFree;
          this->m_queries.m_FirstFree = v12;
          v13 = MurmurHash2(&id, 4, 0x3501A674u);
          CUtlHashtable<CUtlStringToken,long long,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long>,int>>::DoRemove<CUtlStringToken const&>(
            &this->m_lookup,
            &id,
            v13);
        }
      }
    }
  }
}


// CParticleSystemQueryGameSystem::PostRender  (line 323, @0x0000000002308220, libserver.so)  // inlines: RemoveAll
// calls: operator delete
void __fastcall CParticleSystemQueryGameSystem::PostRender(
        CParticleSystemQueryGameSystem *const this,
        const EventClientPostRender_t *const msg)
{
  int m_Size; // eax
  unsigned __int64 v4; // rbx
  __int64 v5; // r13
  CParticleSystemQuery *v6; // rdi

  m_Size = this->m_queuedQueryDeletions.m_Size;
  if ( m_Size > 0 )
  {
    v4 = 0;
    v5 = 8LL * (m_Size - 1) + 8;
    do
    {
      v6 = this->m_queuedQueryDeletions.m_Memory.m_pMemory[v4 / 8];
      v4 += 8LL;
      operator delete(v6);
    }
    while ( v4 != v5 );
  }
  this->m_queuedQueryDeletions.m_Size = 0;
}


// CParticleSystemQueryGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 372, @0x00000000022ca7a0, libserver.so)
void __cdecl CParticleSystemQueryGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// ParticleSystemQuery_PreSimulate  (line 374, @0x00000000022ca7b0, libserver.so)  // inlines: Next, PreSimulate
void __cdecl ParticleSystemQuery_PreSimulate()
{
  __int64 i; // rax

  for ( i = s_ParticleSystemQueryGameSystem.m_queries.m_Head; i != 0; i = *(i + 24) )
    ;
}


// ParticleSystemQuery_PostSimulate  (line 379, @0x00000000022ca7d0, libserver.so)  // inlines: Next, PostSimulate
void __cdecl ParticleSystemQuery_PostSimulate()
{
  __int64 i; // rax

  for ( i = s_ParticleSystemQueryGameSystem.m_queries.m_Head; i != 0; i = *(i + 24) )
    ;
}


// ParticleSystemQuery_GetQueryForWorld  (line 384, @0x00000000022ca7f0, libserver.so)  // inlines: DoLookup<const CUtlStringToken&>, Element, Find, GetPtr, GetQueryForWorld, HashItem<unsigned int>, operator(), operator[]
// calls: MurmurHash2, CUtlHashtable<CUtlStringToken, long long int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, long long int>, int> >::DoLookup<const CUtlStringToken&>
IParticleSystemQuery *__fastcall ParticleSystemQuery_GetQueryForWorld(WorldGroupId_t id)
{
  uint32 v1; // eax
  UtlHashHandle_t v3; // eax
  CUtlHashtableEntry<CUtlStringToken,long long int> *v4; // rax
  CUtlStringToken key[8]; // [rsp+0h] [rbp-20h] BYREF

  key[0] = id;
  v1 = MurmurHash2(key, 4, 0x3501A674u);
  if ( s_ParticleSystemQueryGameSystem.m_lookup.m_nUsed == 0 )
    return 0;
  v3 = CUtlHashtable<CUtlStringToken,long long,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long>,int>>::DoLookup<CUtlStringToken const&>(
         &s_ParticleSystemQueryGameSystem.m_lookup,
         key,
         v1,
         0);
  if ( v3 == -1 )
    return 0;
  v4 = &s_ParticleSystemQueryGameSystem.m_lookup.m_table.m_pMemory[v3];
  if ( v4 == -12LL )
    return 0;
  else
    return **&v4->data[2];
}


// CParticleSystemQuery::CParticleSystemQuery  (line 401, @0x00000000022ca870, libserver.so)
void __fastcall CParticleSystemQuery::CParticleSystemQuery(CParticleSystemQuery *const this, WorldGroupId_t id)
{
  this->_vptr_IParticleSystemQuery = &off_4074270;
  this->m_worldGroupId = id;
}


// CParticleSystemQuery::LevelShutdown  (line 405, @0x00000000022ca890, libserver.so)
void __fastcall CParticleSystemQuery::LevelShutdown(CParticleSystemQuery *const this)
{
  ;
}


// CParticleSystemQuery::GetLightingAtPoint  (line 430, @0x00000000022b7510, libserver.so)  // inlines: SetColor
void __fastcall CParticleSystemQuery::GetLightingAtPoint(
        CParticleSystemQuery *const this,
        const Vector *const vecOrigin,
        Color *const cTint)
{
  cTint->_color[0] = -1;
  cTint->_color[1] = -1;
  cTint->_color[2] = -1;
  cTint->_color[3] = -1;
}


// CParticleSystemQuery::IsPointUnderWater  (line 468, @0x00000000022b7530, libserver.so)
__int64 __fastcall CParticleSystemQuery::IsPointUnderWater(
        CParticleSystemQuery *const this,
        IParticleCollection *pParticles,
        float *const flWaterHeight)
{
  return 0;
}


// CParticleSystemQuery::TraceLine  (line 514, @0x00000000022bdca0, libserver.so)  // inlines: Dot, DotProduct, Init, RemapValClamped, VectorAdd, VectorMultiply, VectorSubtract, clamp<float, float>, operator*, operator+, operator-, operator=
// calls: VectorNormalize
void __fastcall CParticleSystemQuery::TraceLine(
        CParticleSystemQuery *const this,
        const Vector *const vecAbsStart,
        const Vector *const vecAbsEnd,
        uint64 mask,
        const CBaseEntity *ignore,
        int collisionGroup,
        CBaseTrace *ptr,
        bool bRequiresNormal)
{
  float z; // xmm1_4
  float v9; // xmm2_4
  float x; // xmm0_4
  float y; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm5_4
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  __m128 v19; // xmm6
  vec_t v20; // xmm3_4
  vec_t v21; // xmm2_4
  vec_t v22; // xmm1_4

  if ( this->m_worldGroupId.m_nHashCode != 0 && (z = vecAbsStart->z) != 0.0 && (v9 = vecAbsEnd->z, (z * v9) <= 0.0) )
  {
    v13 = v9 - z;
    v14 = vecAbsEnd->x - vecAbsStart->x;
    v15 = vecAbsEnd->y - vecAbsStart->y;
    if ( z == v9 )
    {
      v19.m128_f32[0] = 0.0 - v9;
      LODWORD(v17) = _mm_cmple_ss(0LL, v19).m128_u32[0] & 0x3F800000;
    }
    else
    {
      v16 = 0.0 - z;
      v17 = 0.0;
      v18 = v16 / v13;
      if ( v18 >= 0.0 )
      {
        v17 = 1.0;
        if ( v18 <= 1.0 )
          v17 = v18 + 0.0;
      }
    }
    ptr->fraction = v17;
    ptr->plane.normal.x = 0.0;
    ptr->plane.normal.y = 0.0;
    ptr->plane.normal.z = 1.0;
    v20 = (v15 * v17) + vecAbsStart->y;
    v21 = vecAbsStart->x + (v14 * v17);
    v22 = (v17 * v13) + vecAbsStart->z;
    ptr->contents = 0;
    ptr->endpos.y = v20;
    ptr->endpos.x = v21;
    ptr->endpos.z = v22;
    ptr->startsolid = 0;
    ptr->plane.dist = ((v21 * 0.0) + (0.0 * v20)) + v22;
  }
  else
  {
    ptr->startpos = *vecAbsStart;
    ptr->endpos = *vecAbsEnd;
    ptr->plane.normal.x = vecAbsStart->x - vecAbsEnd->x;
    ptr->plane.normal.y = vecAbsStart->y - vecAbsEnd->y;
    ptr->plane.normal.z = vecAbsStart->z - vecAbsEnd->z;
    VectorNormalize(&ptr->plane.normal);
    x = ptr->endpos.x;
    ptr->startsolid = 0;
    y = ptr->endpos.y;
    ptr->contents = 0;
    v12 = x * ptr->plane.normal.x;
    ptr->fraction = 1.0;
    ptr->plane.dist = (v12 + (y * ptr->plane.normal.y)) + (ptr->endpos.z * ptr->plane.normal.z);
  }
}


// CParticleSystemQuery::GetClosestControllingObjectHitBox  (line 593, @0x00000000022b7540, libserver.so)  // inlines: Init
void __fastcall CParticleSystemQuery::GetClosestControllingObjectHitBox(
        CParticleSystemQuery *const this,
        IParticleCollection *pParticles,
        int nControlPointNumber,
        int nNumPtsIn,
        float flBBoxScale,
        Vector *pPntsIn,
        Vector *pHitBoxRelativeCoordOut,
        int *pHitBoxIndexOut)
{
  __int64 v8; // rdx
  Vector *i; // rax

  v8 = 0;
  for ( i = pHitBoxRelativeCoordOut; nNumPtsIn > v8; ++i )
  {
    if ( pHitBoxIndexOut != 0 )
      pHitBoxIndexOut[v8] = 0;
    if ( pHitBoxRelativeCoordOut != 0 )
    {
      i->x = 0.0;
      i->y = 0.0;
      i->z = 0.0;
    }
    ++v8;
  }
}


// CParticleSystemQuery::GetControllingObjectHitBoxTransforms  (line 675, @0x00000000022b7590, libserver.so)
int __fastcall CParticleSystemQuery::GetControllingObjectHitBoxTransforms(
        CParticleSystemQuery *const this,
        IParticleCollection *pParticles,
        int nControlPointNumber,
        const CHitBoxSet *pSet,
        int nMaxTransforms,
        matrix3x4a_t *pHitBoxToWorldTransforms)
{
  return 0;
}


// CParticleSystemQuery::GetControllingObjectBoneInfo  (line 698, @0x00000000022b75a0, libserver.so)
int __fastcall CParticleSystemQuery::GetControllingObjectBoneInfo(
        CParticleSystemQuery *const this,
        IParticleCollection *pParticles,
        int nControlPointNumber,
        int nBufSize,
        ModelHitBoxInfo_t *pHitBoxOutputBuffer)
{
  return 0;
}


// CParticleSystemQuery::GetControllingObjectBoneTransform  (line 731, @0x00000000022b75b0, libserver.so)
matrix3x4_t *__fastcall CParticleSystemQuery::GetControllingObjectBoneTransform(
        matrix3x4_t *__return_ptr retstr,
        CParticleSystemQuery *const this,
        IParticleCollection *pParticles,
        int nControlPointNumber,
        int nBone)
{
  __int64 v6; // rdx

  *&retstr->m_flMatVal[0][0] = *&g_MatrixIdentity.m_flMatVal[0][0];
  *&retstr->m_flMatVal[0][2] = *&g_MatrixIdentity.m_flMatVal[0][2];
  *&retstr->m_flMatVal[1][0] = *&g_MatrixIdentity.m_flMatVal[1][0];
  v6 = *&g_MatrixIdentity.m_flMatVal[2][2];
  *&retstr->m_flMatVal[2][0] = *&g_MatrixIdentity.m_flMatVal[2][0];
  *&retstr->m_flMatVal[2][2] = v6;
  return retstr;
}


// CParticleSystemQuery::ArePointsInControllingObjectHitBoxes  (line 757, @0x00000000022b75f0, libserver.so)
bool __fastcall CParticleSystemQuery::ArePointsInControllingObjectHitBoxes(
        CParticleSystemQuery *const this,
        IParticleCollection *pParticles,
        int nControlPointNumber,
        int nNumPtsIn,
        Vector *pPntsIn,
        bool *pInside,
        bool bBBoxOnly,
        const char *pszHitboxSetName)
{
  return 0;
}


// CParticleSystemQuery::GetControllingObjectOBBox  (line 854, @0x00000000022b7600, libserver.so)  // inlines: operator=
void __fastcall CParticleSystemQuery::GetControllingObjectOBBox(
        CParticleSystemQuery *const this,
        IParticleCollection *pParticles,
        int nControlPointNumber,
        Vector *const vecMin,
        Vector *const vecMax)
{
  vec_t x; // xmm0_4
  vec_t z; // xmm1_4

  x = vec3_origin.x;
  vecMax->y = vec3_origin.y;
  z = vec3_origin.z;
  vecMax->x = x;
  vecMax->z = z;
  vecMin->x = x;
  vecMin->y = vecMax->y;
  vecMin->z = vecMax->z;
}


// CParticleSystemQuery::GetControllingObjectRenderBounds  (line 870, @0x00000000022b7650, libserver.so)  // inlines: operator=
void __fastcall CParticleSystemQuery::GetControllingObjectRenderBounds(
        CParticleSystemQuery *const this,
        IParticleCollection *pParticles,
        int nControlPointNumber,
        Vector *pVecOBBMin,
        Vector *pVecOBBMax,
        matrix3x4_t *pObjectToWorld)
{
  vec_t x; // xmm0_4
  vec_t z; // xmm1_4
  __int64 v8; // rdx
  __int64 v9; // rax

  x = vec3_origin.x;
  pVecOBBMax->y = vec3_origin.y;
  z = vec3_origin.z;
  pVecOBBMax->x = x;
  pVecOBBMax->z = z;
  pVecOBBMin->x = x;
  v8 = *&g_MatrixIdentity.m_flMatVal[0][0];
  pVecOBBMin->y = pVecOBBMax->y;
  pVecOBBMin->z = pVecOBBMax->z;
  *&pObjectToWorld->m_flMatVal[0][0] = v8;
  *&pObjectToWorld->m_flMatVal[0][2] = *&g_MatrixIdentity.m_flMatVal[0][2];
  *&pObjectToWorld->m_flMatVal[1][0] = *&g_MatrixIdentity.m_flMatVal[1][0];
  v9 = *&g_MatrixIdentity.m_flMatVal[2][2];
  *&pObjectToWorld->m_flMatVal[2][0] = *&g_MatrixIdentity.m_flMatVal[2][0];
  *&pObjectToWorld->m_flMatVal[2][2] = v9;
}


// CParticleSystemQuery::TraceAgainstRayTraceEnv  (line 890, @0x00000000022b76d0, libserver.so)
void __fastcall CParticleSystemQuery::TraceAgainstRayTraceEnv(
        const CParticleSystemQuery *const this,
        int envnumber,
        const FourRays *const rays,
        fltx4_0 TMin,
        fltx4_0 TMax,
        RayTracingResult_t *rslt_out,
        int32 skip_id)
{
  ;
}


// CParticleSystemQuery::GetRayTraceEnvironmentFromName  (line 917, @0x00000000022b8460, libserver.so)
// calls: V_stricmp_fast
// strings: "PRECIPITATION", "PRECIPITATIONBLOCKER"
// globals: s_RtEnvNameMap
int __fastcall CParticleSystemQuery::GetRayTraceEnvironmentFromName(
        CParticleSystemQuery *const this,
        const char *pszRtEnvName)
{
  int v3; // eax
  int v4; // edx
  int v6; // eax

  if ( V_stricmp_fast("PRECIPITATION", pszRtEnvName) == 0 )
  {
    v6 = 0;
    return s_RtEnvNameMap[v6].m_nGroupID;
  }
  v3 = V_stricmp_fast("PRECIPITATIONBLOCKER", pszRtEnvName);
  v4 = 0;
  if ( v3 == 0 )
  {
    v6 = 1;
    return s_RtEnvNameMap[v6].m_nGroupID;
  }
  return v4;
}


// CParticleSystemQuery::GetCollisionGroupFromName  (line 952, @0x00000000022b84c0, libserver.so)
// calls: V_stricmp_fast
// globals: s_NameMap
int __fastcall CParticleSystemQuery::GetCollisionGroupFromName(
        CParticleSystemQuery *const this,
        const char *pszCollisionGroupName)
{
  int v3; // r12d
  const CollisionGroupNameRecord_t *i; // rbx

  v3 = 0;
  for ( i = s_NameMap; V_stricmp_fast(i->m_pszGroupName, pszCollisionGroupName) != 0; ++i )
  {
    if ( ++v3 == 6 )
      return 4;
  }
  return s_NameMap[v3].m_nGroupID;
}


// CParticleSystemQuery::GetLocalPlayerPos  (line 962, @0x00000000022bbfd0, libserver.so)  // inlines: AI_GetSinglePlayer
// calls: UTIL_GetLocalPlayer
Vector __fastcall CParticleSystemQuery::GetLocalPlayerPos(CParticleSystemQuery *const this)
{
  CBasePlayer *LocalPlayer; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( this->m_worldGroupId.m_nHashCode != 0 )
  {
    *&result.x = *&vec3_origin.x;
    result.z = vec3_origin.z;
  }
  else if ( gpGlobals->maxClients <= 1 && (LocalPlayer = UTIL_GetLocalPlayer()) != 0 )
  {
    *&result.x = (*(LocalPlayer->_vptr_IHandleEntity + 62))(LocalPlayer);
  }
  else
  {
    result.z = vec3_origin.z;
    *&result.x = *&vec3_origin.x;
  }
  return result;
}


// CParticleSystemQuery::GetLocalPlayerEyeVectors  (line 988, @0x00000000022bc070, libserver.so)  // inlines: AI_GetSinglePlayer, operator=
// calls: UTIL_GetLocalPlayer, CBasePlayer::EyeVectors
void __fastcall CParticleSystemQuery::GetLocalPlayerEyeVectors(
        CParticleSystemQuery *const this,
        Vector *pForward,
        Vector *pRight,
        Vector *pUp)
{
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  CBasePlayer *LocalPlayer; // rax
  Vector *pUpa; // [rsp+0h] [rbp-20h]
  Vector *pRighta; // [rsp+8h] [rbp-18h]
  Vector *pForwarda; // [rsp+10h] [rbp-10h]

  if ( this->m_worldGroupId.m_nHashCode != 0
    || gpGlobals->maxClients > 1
    || (pUpa = pUp,
        pRighta = pRight,
        pForwarda = pForward,
        LocalPlayer = UTIL_GetLocalPlayer(),
        pForward = pForwarda,
        pRight = pRighta,
        pUp = pUpa,
        LocalPlayer == 0) )
  {
    x = vec3_origin.x;
    y = vec3_origin.y;
    z = vec3_origin.z;
    pForward->x = vec3_origin.x;
    pForward->y = y;
    pForward->z = z;
    pRight->x = x;
    pRight->y = y;
    pRight->z = z;
    pUp->x = x;
    pUp->y = y;
    pUp->z = z;
  }
  else
  {
    CBasePlayer::EyeVectors(LocalPlayer, pForwarda, pRighta, pUpa);
  }
}


// CParticleSystemQuery::DebugDrawLine  (line 1028, @0x00000000022b76e0, libserver.so)
void __fastcall CParticleSystemQuery::DebugDrawLine(
        CParticleSystemQuery *const this,
        const Vector *const origin,
        const Vector *const target,
        __int64 r,
        __int64 g,
        __int64 b,
        float duration,
        bool noDepthTest)
{
  (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(debugoverlay, origin, target, r, g, b, duration);
}


// CParticleSystemQuery::GetModelFromCPObject  (line 1033, @0x00000000022b8440, libserver.so)  // inlines: Init, operator=
void __fastcall CParticleSystemQuery::GetModelFromCPObject(
        CParticleSystemQuery *const this,
        IParticleCollection *pParticles,
        int nControlPointNumber,
        int nEconSlot,
        bool bOriginalModel,
        ParticleModelQueryInfo_t *pInfoOut)
{
  pInfoOut->m_meshGroupMask = -1;
  pInfoOut->m_hModel.m_pBinding = 0;
}


// CParticleSystemQuery::GetSequenceFromModel  (line 1135, @0x00000000022b7710, libserver.so)
HSequence __fastcall CParticleSystemQuery::GetSequenceFromModel(
        CParticleSystemQuery *const this,
        IParticleCollection *pParticles,
        int nControlPoint,
        float *flAnimTime)
{
  return -1;
}


// CParticleSystemQuery::GetScaleFromCPObject  (line 1152, @0x00000000022b7720, libserver.so)
float __fastcall CParticleSystemQuery::GetScaleFromCPObject(
        CParticleSystemQuery *const this,
        IParticleCollection *pParticles,
        int nControlPointNumber)
{
  return 1.0;
}


// CParticleSystemQuery::PreSimulate  (line 1169, @0x00000000022ca8a0, libserver.so)
void __fastcall CParticleSystemQuery::PreSimulate(CParticleSystemQuery *const this)
{
  ;
}


// CParticleSystemQuery::PostSimulate  (line 1180, @0x00000000022ca8b0, libserver.so)
void __fastcall CParticleSystemQuery::PostSimulate(CParticleSystemQuery *const this)
{
  ;
}


// CParticleSystemQuery::UpdateProjectedTexture  (line 1232, @0x00000000022b7730, libserver.so)
void __fastcall CParticleSystemQuery::UpdateProjectedTexture(
        CParticleSystemQuery *const this,
        const ParticleProjectedTextureInfo_t *const info,
        HProjectedTexture *const hTextureHandle)
{
  ;
}


// CParticleSystemQuery::DeleteProjectedTexture  (line 1244, @0x00000000022b7740, libserver.so)
void __fastcall CParticleSystemQuery::DeleteProjectedTexture(
        CParticleSystemQuery *const this,
        HProjectedTexture hTextureHandle)
{
  ;
}


// CParticleSystemQuery::UpdateDeferredLight  (line 1256, @0x00000000022b7750, libserver.so)
CSceneObject *__fastcall CParticleSystemQuery::UpdateDeferredLight(
        CParticleSystemQuery *const this,
        ISceneWorld *pSceneWorld,
        HRenderTexture hTexture,
        Vector *const vOrigin,
        float flRadius,
        Vector4D *const vColor,
        float flLightDistance,
        float flStartFalloff,
        float flDistanceFalloff,
        Vector vDirection,
        float flSpotFoV,
        float flAlphaPoint,
        HDeferredLight *const hLightHandle)
{
  return 0;
}


// CParticleSystemQuery::DeleteDeferredLight  (line 1273, @0x00000000022b7760, libserver.so)
void __fastcall CParticleSystemQuery::DeleteDeferredLight(
        CParticleSystemQuery *const this,
        HDeferredLight hLightHandle)
{
  ;
}


// CParticleSystemQuery::UpdateSoundPatch  (line 1286, @0x00000000022b7770, libserver.so)
void __fastcall CParticleSystemQuery::UpdateSoundPatch(
        CParticleSystemQuery *const this,
        const char *pSoundName,
        Vector *const vOrigin,
        float flSoundLevel,
        float flPitch,
        float flVolume,
        float flLifespan,
        int nChannel,
        void **const pUserVar)
{
  ;
}


// CParticleSystemQuery::DeleteParticleSound  (line 1313, @0x00000000022b7780, libserver.so)
void __fastcall CParticleSystemQuery::DeleteParticleSound(CParticleSystemQuery *const this, void **const pUserVar)
{
  ;
}


// CParticleSystemQuery::ScreenShakeGlobal  (line 1324, @0x00000000022b7790, libserver.so)
void __fastcall CParticleSystemQuery::ScreenShakeGlobal(
        CParticleSystemQuery *const this,
        const Vector *const center,
        double a3,
        float amplitude,
        float frequency,
        float duration,
        float radius)
{
  ;
}


// CParticleSystemQuery::ScreenShakeLocal  (line 1385, @0x00000000022b77a0, libserver.so)
void __fastcall CParticleSystemQuery::ScreenShakeLocal(
        CParticleSystemQuery *const this,
        IParticleCollection *pParticles,
        int nControlPointNumber,
        double a4,
        double a5,
        double a6,
        float localAmplitude,
        float frequency,
        float duration)
{
  ;
}


// CParticleSystemQuery::GetActivityCount  (line 1431, @0x00000000022b77b0, libserver.so)  // inlines: ActivityList_HighestIndex
int __fastcall CParticleSystemQuery::GetActivityCount(CParticleSystemQuery *const this)
{
  if ( g_pAnimationSystem != 0 )
    return (*(*g_pAnimationSystem + 320LL))(g_pAnimationSystem);
  else
    return 0;
}


// CParticleSystemQuery::GetActivityNameFromIndex  (line 1436, @0x00000000022b77e0, libserver.so)  // inlines: ActivityList_NameForIndex
const char *__fastcall CParticleSystemQuery::GetActivityNameFromIndex(
        CParticleSystemQuery *const this,
        int nActivityIndex)
{
  if ( g_pAnimationSystem != 0 )
    return (*(*g_pAnimationSystem + 312LL))(g_pAnimationSystem, nActivityIndex);
  else
    return 0;
}


// CParticleSystemQuery::GetActivityNumber  (line 1441, @0x00000000022b8f50, libserver.so)  // inlines: ResourceHandleToData<InfoForResourceTypeCModel>, operator int, operator==
// calls: LookupActivity, SelectWeightedSequence
HSequence __fastcall CParticleSystemQuery::GetActivityNumber(
        CParticleSystemQuery *const this,
        HModel hModel,
        const char *pszActivityName)
{
  const CModel **m_pData; // rax
  const CModel *v4; // rbx
  Activity v5; // eax

  m_pData = hModel.m_pBinding->m_pData;
  if ( hModel.m_pBinding->m_pData == 0 )
    return -1;
  v4 = 0;
  if ( *(m_pData + 6) > 0 )
    v4 = *m_pData;
  v5 = LookupActivity(v4, pszActivityName);
  return SelectWeightedSequence(v4, v5, -1);
}


// CParticleSystemQuery::GetPointVisibilityPercentage  (line 1455, @0x00000000022bbcc0, libserver.so)
// calls: CDOTAFogOfWarSystem::GetFoW, CFoW::GetLocationVisibilityDegree
// strings: "CParticleSystemQuery::GetPointVisibilityPercentage"
float __fastcall CParticleSystemQuery::GetPointVisibilityPercentage(
        CParticleSystemQuery *const this,
        Vector *const vecPosition,
        float *const flRadius)
{
  CFoW *FoW; // rax
  float v6; // [rsp-1Ch] [rbp-1Ch]

  if ( this->m_worldGroupId.m_nHashCode != 0 )
    return 1.0;
  v6 = *flRadius;
  FoW = CDOTAFogOfWarSystem::GetFoW(&g_DOTAFogOfWarSystem, 0);
  return CFoW::GetLocationVisibilityDegree(
           FoW,
           0,
           vecPosition,
           0,
           v6,
           "CParticleSystemQuery::GetPointVisibilityPercentage");
}


// CParticleSystemQuery::GetEconLoadoutTypeCount  (line 1467, @0x00000000022b7810, libserver.so)
int __fastcall CParticleSystemQuery::GetEconLoadoutTypeCount(CParticleSystemQuery *const this)
{
  return 45;
}


// CParticleSystemQuery::GetEconSlotName  (line 1477, @0x00000000022b7820, libserver.so)  // inlines: GetDOTASlotName
// globals: GetDOTALoadoutTypeStrings(void)::s_szDOTALoadoutTypeStrings
const char *__fastcall CParticleSystemQuery::GetEconSlotName(CParticleSystemQuery *const this, int nSlotType)
{
  if ( nSlotType > 0x2C )
    return 0;
  else
    return *(&GetDOTALoadoutTypeStrings(void)::s_szDOTALoadoutTypeStrings + nSlotType);
}


// CParticleSystemQuery::GetEconLoadoutSlotType  (line 1487, @0x00000000022be520, libserver.so)  // inlines: GetDOTASlotType, _V_strcmp
// calls: strcmp
// globals: GetDOTALoadoutTypeStrings(void)::s_szDOTALoadoutTypeStrings
int __fastcall CParticleSystemQuery::GetEconLoadoutSlotType(CParticleSystemQuery *const this, const char *pszName)
{
  __int64 v3; // rbx

  if ( pszName == 0 )
    return -1;
  v3 = 0;
  while ( strcmp(*(&GetDOTALoadoutTypeStrings(void)::s_szDOTALoadoutTypeStrings + v3), pszName) != 0 )
  {
    if ( ++v3 == 45 )
      return -1;
  }
  return v3;
}


// CParticleSystemQuery::GetWindVelocityAtLocation  (line 1497, @0x00000000022bbd20, libserver.so)
Vector __fastcall CParticleSystemQuery::GetWindVelocityAtLocation(
        CParticleSystemQuery *const this,
        const Vector *const vecPosition)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( this->m_worldGroupId.m_nHashCode != 0 )
  {
    result.z = vec3_origin.z;
    *&result.x = *&vec3_origin.x;
  }
  else
  {
    *&result.x = *&vec3_origin.x;
    result.z = vec3_origin.z;
  }
  return result;
}


// CParticleSystemQuery::AddGrassFlattenEvent  (line 1510, @0x00000000022b7850, libserver.so)
void __fastcall CParticleSystemQuery::AddGrassFlattenEvent(
        CParticleSystemQuery *const this,
        ISceneWorld *pSceneWorld,
        const Vector *const vPositionWs,
        float flRadius,
        const Vector *const vDirectionWs,
        float flAmount)
{
  ;
}


// CParticleSystemQuery::AddShakeTreesInRadiusEvent  (line 1521, @0x00000000022b7860, libserver.so)
void __fastcall CParticleSystemQuery::AddShakeTreesInRadiusEvent(
        CParticleSystemQuery *const this,
        const Vector *const vCenterPosition,
        const Vector *const vLinearDirection,
        float flLinearInfluence,
        float flRadialInfluence,
        float flTwistInfluence,
        float flRadius,
        float flStrength,
        float flShakeDuration,
        float flInfluence)
{
  ;
}


