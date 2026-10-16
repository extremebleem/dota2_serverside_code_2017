// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/physicsgamesystem.cpp:1356
class CLegacyCollisionData : public IPhysicsCollisionData {
public:

protected:

	HPhysicsBody m_hBody1;  // +0x20
	HPhysicsBody m_hBody2;  // +0x28
	int m_nFirstValidManifold;  // +0x54
	~CLegacyCollisionData();
	CLegacyCollisionData(CLegacyCollisionData &);
	CLegacyCollisionData(const CLegacyCollisionData &);
	CLegacyCollisionData();
	CLegacyCollisionData(const VPhysIntersectionNotification_t &);
	int FindFirstValidManifold();
	const Manifold_t * GetFirstValidManifold();
	void Init(const VPhysIntersectionNotification_t &);
	virtual void GetSurfaceNormal(Vector &);
	virtual void GetContactPoint(Vector &);
	virtual void GetContactSpeed(Vector &);
	float GetContactNormalSpeed();

	// vtable[0] GetSurfaceNormal
	// vtable[1] GetContactPoint
	// vtable[2] GetContactSpeed
	// sizeof = 88
};

// src/game/shared/physicsgamesystem.cpp:1453
class CGameEventStartTouchAdaptor : public CLegacyCollisionData {
public:

	uint32 m_nReason;  // +0xf8
	~CGameEventStartTouchAdaptor();
	CGameEventStartTouchAdaptor(CGameEventStartTouchAdaptor &);
	CGameEventStartTouchAdaptor(const CGameEventStartTouchAdaptor &);
	CGameEventStartTouchAdaptor();
	void Prepare(const VPhysIntersectionNotification_t &, CBaseEntity *, CBaseEntity *);
	void Execute();

	// sizeof = 256
};

// src/game/shared/physicsgamesystem.cpp:1510
class CGameEventTouchAdaptor {
protected:

	uint32 m_nNotificationReason;  // +0x18
	void Prepare(const VPhysIntersectionNotification_t &, CBaseEntity *, CBaseEntity *);
	void Execute();

	// sizeof = 32
};

// src/game/shared/physicsgamesystem.cpp:2955
struct Source1_Ray_t {
	const matrix3x4_t * m_pWorldAxisTransform;  // +0x40
	bool m_IsRay;  // +0x48
	bool m_IsSwept;  // +0x49
	Source1_Ray_t();
	Ray_t operator Ray_t();

	// sizeof = 80
};

// src/game/shared/physicsgamesystem.cpp:3007
class CDebugInfoMap {
	typedef CUtlMap<IPhysAggregateInstance*, int, short unsigned int, bool (*)(IPhysAggregateInstance* const&, IPhysAggregateInstance* const&)> AggCountMap;

	AggCountMap m_AggCounts;  // +0x0
	int m_nDuplicates;  // +0x28
	CDebugInfoMap();
	bool AppendLog(IPhysAggregateInstance *, CUtlString &);
	~CDebugInfoMap();

	// sizeof = 48
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// InitManifestDesc<PhysicsGameSystemManifest::CTemplateArg>  (line 107, @0x0000000001f362c0, libserver.so)  // inlines: ResourceManifestEntry_t
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: __static_initialization_and_destruction_0
// globals: `guard variable for'InitManifestDesc<PhysicsGameSystemManifest::CTemplateArg>(PhysicsGameSystemManifest::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<PhysicsGameSystemManifest::CTemplateArg>(PhysicsGameSystemManifest::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<PhysicsGameSystemManifest::CTemplateArg>(PhysicsGameSystemManifest::CTemplateArg &)::s_Manifest, g_pCollisionGeometry, _ZGRZ16InitManifestDescIN25PhysicsGameSystemManifest12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries2, g_pWireframeMaterial, g_pHiddenWireframeMaterial, g_pDefaultMaterial (9 total)
ResourceManifestDesc_t *__fastcall InitManifestDesc<PhysicsGameSystemManifest::CTemplateArg>(
        PhysicsGameSystemManifest::CTemplateArg *const def)
{
  if ( `guard variable for'ResourceManifestDesc_t * InitManifestDesc<PhysicsGameSystemManifest::CTemplateArg>(PhysicsGameSystemManifest::CTemplateArg &)::s_pManifestEntries == 0
    && __cxa_guard_acquire(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<PhysicsGameSystemManifest::CTemplateArg>(PhysicsGameSystemManifest::CTemplateArg &)::s_pManifestEntries) != 0 )
  {
    byte_4AAA668 = 0;
    qword_4AAA670 = 0;
    qword_4AAA678 = 0;
    dword_4AAA680 = 0;
    ZGRZ16InitManifestDescIN25PhysicsGameSystemManifest12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries2 = g_pCollisionGeometry;
    byte_4AAA690 = 0;
    qword_4AAA698 = 0;
    qword_4AAA6A0 = 0;
    qword_4AAA688 = g_pWireframeMaterial;
    dword_4AAA6A8 = 0;
    byte_4AAA6B8 = 0;
    qword_4AAA6C0 = 0;
    qword_4AAA6B0 = g_pHiddenWireframeMaterial;
    qword_4AAA6C8 = 0;
    dword_4AAA6D0 = 0;
    byte_4AAA6E0 = 0;
    qword_4AAA6D8 = g_pDefaultMaterial;
    ZGRZ16InitManifestDescIN25PhysicsGameSystemManifest12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries1 = &ZGRZ16InitManifestDescIN25PhysicsGameSystemManifest12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries2;
    InitManifestDesc<PhysicsGameSystemManifest::CTemplateArg>(PhysicsGameSystemManifest::CTemplateArg &)::s_pManifestEntries._M_array = &ZGRZ16InitManifestDescIN25PhysicsGameSystemManifest12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries1;
    qword_4AAA6E8 = 0;
    qword_4AAA6F0 = 0;
    dword_4AAA6F8 = 0;
    qword_4AAA708 = 4;
    __cxa_guard_release(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<PhysicsGameSystemManifest::CTemplateArg>(PhysicsGameSystemManifest::CTemplateArg &)::s_pManifestEntries);
  }
  InitManifestDesc<PhysicsGameSystemManifest::CTemplateArg>(PhysicsGameSystemManifest::CTemplateArg &)::s_Manifest.m_pEntryGroups = &InitManifestDesc<PhysicsGameSystemManifest::CTemplateArg>(PhysicsGameSystemManifest::CTemplateArg &)::s_pManifestEntries;
  return &InitManifestDesc<PhysicsGameSystemManifest::CTemplateArg>(PhysicsGameSystemManifest::CTemplateArg &)::s_Manifest;
}


// CPhysicsGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 115, @0x0000000001f36410, libserver.so)
void __cdecl CPhysicsGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// TimescaleChanged  (line 126, @0x0000000001f548b0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetFloat, Purge, end, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CPhysicsGameSystem::GetLevelWorldList, CPhysicsGameSystem::GetExistingLevelWorld, CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::RemoveAll, CUtlMemory<CUtlStringToken, int>::Purge, Warning, CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "Cannot change physics timescale - no level!\n"
// globals: g_pPhysicsGameSystem
void __fastcall TimescaleChanged(IConVar *var, const char *pOldString, float a3, float flOldValue)
{
  CUtlStringToken *m_pMemory; // rbx
  unsigned int v5; // r14d
  CUtlStringToken *v6; // r12
  IVPhysics2World *ExistingLevelWorld; // rax
  __m128 m_fValue_low; // xmm1
  __m128 v9; // xmm0
  CUtlVector<CUtlStringToken,CUtlMemory<CUtlStringToken,int> > vecSceneWorlds; // [rsp+10h] [rbp-40h] BYREF

  if ( g_pPhysicsGameSystem != 0 )
  {
    if ( a3 > 0.0099999998 )
    {
      vecSceneWorlds.m_Size = 0;
      vecSceneWorlds.m_Memory.m_pMemory = 0;
      vecSceneWorlds.m_Memory.m_nAllocationCount = 0;
      vecSceneWorlds.m_Memory.m_nGrowSize = 0;
      CPhysicsGameSystem::GetLevelWorldList(g_pPhysicsGameSystem, &vecSceneWorlds);
      m_pMemory = vecSceneWorlds.m_Memory.m_pMemory;
      v5 = _mm_cvtsi128_si32(0x41200000u);
      v6 = &vecSceneWorlds.m_Memory.m_pMemory[vecSceneWorlds.m_Size];
      if ( vecSceneWorlds.m_Memory.m_pMemory != v6 )
      {
        do
        {
          ExistingLevelWorld = CPhysicsGameSystem::GetExistingLevelWorld(g_pPhysicsGameSystem, m_pMemory->m_nHashCode);
          m_fValue_low = LODWORD(phys_timescale.m_pParent->m_Value.m_fValue);
          m_fValue_low.m128_f32[0] = m_fValue_low.m128_f32[0] / a3;
          v9 = _mm_cmplt_ss(_mm_cvtsi32_si128(v5), m_fValue_low);
          (*(*ExistingLevelWorld + 1288LL))(
            ExistingLevelWorld,
            COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*_mm_andnot_ps(v9, m_fValue_low).m128_u64) | v9.m128_i32[0] & 0x41200000));
          ++m_pMemory;
        }
        while ( v6 != m_pMemory );
      }
      CUtlVectorBase<CUtlStringToken,CUtlMemory<CUtlStringToken,int>>::RemoveAll(&vecSceneWorlds);
      if ( (vecSceneWorlds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CUtlStringToken,int>::Purge(&vecSceneWorlds.m_Memory);
        if ( (vecSceneWorlds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CUtlStringToken,int>::Purge(&vecSceneWorlds.m_Memory);
      }
    }
  }
  else
  {
    Warning("Cannot change physics timescale - no level!\n", pOldString);
  }
}


// IPhysicsBody::GetGameData  (line 152, @0x0000000001f36420, libserver.so)  // inlines: CEntityHandle, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, LookupEntity, operator CBaseEntity*
// callers: PropBreakableCreateAll, CreateGibsFromList, CBaseEntity::VPhysicsUpdatePusher, PhysTeleportConstrainedEntity, PhysHasContactWithOtherInDirection, GetSpringAttachments, CPhysBox::VPhysicsCollision, CalculateObjectStress, CPhysicsProp::ShouldDisableMotionOnFreeze, CPhysicsProp::VPhysicsCollision, CFuncTrackTrain::Blocked
// globals: CEntityHandle::gm_pEntityList
void *__fastcall IPhysicsBody::GetGameData(const IPhysicsBody *const this)
{
  int v1; // eax
  unsigned int v2; // ecx
  int v3; // edx
  void *result; // rax
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx
  unsigned __int16 hEntity; // [rsp+0h] [rbp-10h]

  v1 = (*(*this + 1328LL))(this);
  v2 = v1 + 2;
  v3 = v1;
  hEntity = v1;
  result = 0;
  if ( v2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(hEntity >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[hEntity & 0x1FF];
      if ( v6 != 0 && v3 == v6->m_EHandle.m_Index )
        return v6->m_pInstance;
    }
  }
  return result;
}


// CPhysicsGameSystem::CPhysicsGameSystem  (line 165, @0x0000000001f543a0, libserver.so)  // inlines: CStrongHandle, CUtlHashtable, CUtlMap, CUtlMemory, CUtlRBTree, CUtlVector, CUtlVectorBase, Init, Purge, RemoveAll, ResetDbgInfo, ~CStrongHandle, ~CUtlMap, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<physicssound::breaksound_t, CUtlMemory<physicssound::breaksound_t, int> >::RemoveAll, CUtlVectorBase<physicssound::impactsound_t, CUtlMemory<physicssound::impactsound_t, int> >::RemoveAll, CUtlVectorBase<CSkeletonInstance*, CUtlMemory<CSkeletonInstance*, int> >::~CUtlVectorBase, CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*, IPhysicsJoint*>, int> >::~CUtlHashtable, CUtlVectorBase<CGameSceneNodeHandle, CUtlMemory<CGameSceneNodeHandle, int> >::RemoveAll, CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CUtlRBTree<CUtlMap<CUtlStringToken, CPhysicsGameSystem::PhysicsWorld_t>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, CPhysicsGameSystem::PhysicsWorld_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, CPhysicsGameSystem::PhysicsWorld_t>::Node_t, short unsigned int>, short unsigned int> >::~CUtlRBTree, CUtlRBTree<CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t, short unsigned int, CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t, short unsigned int>, short unsigned int> >::~CUtlRBTree, IGameSystem::~IGameSystem, _Unwind_Resume, CUtlMemory<physicssound::friction_t, int>::Purge, CUtlMemory<CGameSceneNodeHandle, int>::Purge (14 total)
// callers: CGameSystemReallocatingFactory<CPhysicsGameSystem, CPhysicsGameSystem>::CreateGameSystem
// globals: CDefOps<uint>::LessFunc(uint const&,uint const&), CDefOps<CUtlStringToken>::LessFunc(CUtlStringToken const&,CUtlStringToken const&), g_vDebugTriggerColor, g_vDebugWireframeColor, g_vDebugWireframeColorVec
void __fastcall CPhysicsGameSystem::CPhysicsGameSystem(CPhysicsGameSystem *const this)
{
  PhysicsGlobalProfiler::Stats_t *v2; // rax

  this->_vptr_IGameSystem = off_3FCDAD0;  // vptr: CPhysicsGameSystem
  this->m_PhysicsSpawnGroups.m_Tree.m_Elements.m_pMemory = 0;
  this->_vptr_IPhysicsWorldEventListener = &off_3FCDC28;
  this->m_PhysicsSpawnGroups.m_Tree.m_LessFunc.m_LessFunc = CDefOps<unsigned int>::LessFunc;
  this->m_PhysicsSpawnGroups.m_Tree.m_NumElements = 0;
  this->m_PhysicsSpawnGroups.m_Tree.m_FirstFree = -1;
  this->m_PhysicsSpawnGroups.m_Tree.m_LastAlloc.index = -1;
  this->m_mapLevelWorlds.m_Tree.m_LessFunc.m_LessFunc = CDefOps<CUtlStringToken>::LessFunc;
  this->m_mapLevelWorlds.m_Tree.m_Root = -1;
  this->m_mapLevelWorlds.m_Tree.m_NumElements = 0;
  this->m_mapLevelWorlds.m_Tree.m_FirstFree = -1;
  this->m_PhysicsSpawnGroups.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_PhysicsSpawnGroups.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_PhysicsSpawnGroups.m_Tree.m_Root = -1;
  this->m_PhysicsSpawnGroups.m_Tree.m_pElements = 0;
  this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory = 0;
  this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_mapLevelWorlds.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_mapLevelWorlds.m_Tree.m_LastAlloc.index = -1;
  this->m_mapLevelWorlds.m_Tree.m_pElements = 0;
  this->m_hMatWireframe.m_pBinding = 0;
  this->m_hMatHiddenWireframe.m_pBinding = 0;
  this->m_hMatDefault.m_pBinding = 0;
  this->m_hMatCollisionGeometry.m_pBinding = 0;
  this->m_flImpactSoundTime = 0.0;
  this->m_dirtyScales.m_Size = 0;
  this->m_dirtyScales.m_Memory.m_pMemory = 0;
  this->m_dirtyScales.m_Memory.m_nAllocationCount = 0;
  this->m_dirtyScales.m_Memory.m_nGrowSize = 0;
  this->m_pResourceManifestPrerequisite = 0;
  this->m_HierarchyConstraints.m_table.m_pMemory = 0;
  this->m_HierarchyConstraints.m_table.m_nAllocationCount = 0;
  this->m_HierarchyConstraints.m_table.m_nGrowSize = 0;
  this->m_HierarchyConstraints.m_nUsed = 0;
  this->m_HierarchyConstraints.m_nMinSize = 32;
  this->m_HierarchyConstraints.m_bSizeLocked = 0;
  this->m_kinematicsToUpdate.m_Size = 0;
  this->m_kinematicsToUpdate.m_Memory.m_pMemory = 0;
  this->m_kinematicsToUpdate.m_Memory.m_nAllocationCount = 0;
  this->m_kinematicsToUpdate.m_Memory.m_nGrowSize = 0;
  this->m_hierarchyJointsToUpdate.m_Size = 0;
  this->m_hierarchyJointsToUpdate.m_Memory.m_pMemory = 0;
  this->m_hierarchyJointsToUpdate.m_Memory.m_nAllocationCount = 0;
  this->m_hierarchyJointsToUpdate.m_Memory.m_nGrowSize = 0;
  this->m_impactSounds.m_Size = 0;
  this->m_impactSounds.m_Memory.m_pMemory = 0;
  this->m_impactSounds.m_Memory.m_nAllocationCount = 0;
  this->m_impactSounds.m_Memory.m_nGrowSize = 0;
  this->m_breakSounds.m_Size = 0;
  this->m_breakSounds.m_Memory.m_pMemory = 0;
  this->m_breakSounds.m_Memory.m_nAllocationCount = 0;
  this->m_breakSounds.m_Memory.m_nGrowSize = 0;
  this->m_scrapeSounds.m_Size = 0;
  this->m_scrapeSounds.m_Memory.m_pMemory = 0;
  this->m_scrapeSounds.m_Memory.m_nAllocationCount = 0;
  this->m_scrapeSounds.m_Memory.m_nGrowSize = 0;
  v2 = (*(g_pVPhysics2->_vptr_IAppSystem + 42))(g_pVPhysics2);
  *(this + 360) &= ~1u;
  this->m_GlobalProfilerStats = v2;
  this->m_IONotificationKey = 0;
  g_vDebugTriggerColor.color = -16744193;
  g_vDebugWireframeColor.color = -32768;
  g_vDebugWireframeColorVec.x = 0.0;
  g_vDebugWireframeColorVec.y = 0.5;
  g_vDebugWireframeColorVec.z = 1.0;
}


// CPhysicsGameSystem::InitializeStandardCollisionNames  (line 192, @0x0000000001f3f820, libserver.so)  // inlines: AcquirePreindexedCollisionGroupName<10>, AcquirePreindexedCollisionGroupName<12>, AcquirePreindexedCollisionGroupName<14>, AcquirePreindexedCollisionGroupName<16>, AcquirePreindexedCollisionGroupName<19>, AcquirePreindexedCollisionGroupName<4>, AcquirePreindexedCollisionGroupName<6>, AcquirePreindexedCollisionGroupName<7>, AcquirePreindexedCollisionGroupName<8>, AcquirePreindexedCollisionGroupName<9>, AcquirePreindexedInteractionLayer<10>, AcquirePreindexedInteractionLayer<12>, AcquirePreindexedInteractionLayer<13>, AcquirePreindexedInteractionLayer<18>, AcquirePreindexedInteractionLayer<4>, AcquirePreindexedInteractionLayer<5>, AcquirePreindexedInteractionLayer<6>, AcquirePreindexedInteractionLayer<8>, AcquirePreindexedInteractionLayer<9>, CUtlStringToken, GetIntersectionDictionary
// calls: IPhysIntersectionDictionary::AcquirePreindexedCollisionGroupName<11>, IPhysIntersectionDictionary::AcquirePreindexedCollisionGroupName<13>, IPhysIntersectionDictionary::AcquirePreindexedInteractionLayer<11>, IPhysIntersectionDictionary::AcquirePreindexedInteractionLayer<7>, IPhysIntersectionDictionary::AcquirePreindexedInteractionLayer<14>
// callers: CPhysicsGameSystem::StaticInit, CGameSystemReallocatingFactory<CPhysicsGameSystem, CPhysicsGameSystem>::Init
// strings: "interactive_debris", "interactive", "breakable_glass", "player_movement", "in_vehicle", "vehicle_clip" (26 total)
void __cdecl CPhysicsGameSystem::InitializeStandardCollisionNames()
{
  IPhysIntersectionDictionary *v0; // rbx
  void (__fastcall *v1)(IPhysIntersectionDictionary *, _DWORD *, char *, __int64); // rax
  void (__fastcall *v2)(IPhysIntersectionDictionary *, _DWORD *, char *, __int64); // rax
  void (__fastcall *v3)(IPhysIntersectionDictionary *, _DWORD *, char *, __int64); // rax
  void (__fastcall *v4)(IPhysIntersectionDictionary *, _DWORD *, const char *, __int64); // rax
  void (__fastcall *v5)(IPhysIntersectionDictionary *, _DWORD *, const char *, __int64); // rax
  void (__fastcall *v6)(IPhysIntersectionDictionary *, _DWORD *, const char *, __int64); // rax
  void (__fastcall *v7)(IPhysIntersectionDictionary *, _DWORD *, const char *, __int64); // rax
  void (__fastcall *v8)(IPhysIntersectionDictionary *, _DWORD *, const char *, __int64); // rax
  void (__fastcall *v9)(IPhysIntersectionDictionary *, _DWORD *, const char *, __int64); // rax
  void (__fastcall *v10)(IPhysIntersectionDictionary *, _DWORD *, char *, __int64); // rax
  void (__fastcall *v11)(IPhysIntersectionDictionary *, _DWORD *, const char *, __int64); // rax
  void (__fastcall *v12)(IPhysIntersectionDictionary *, _DWORD *, const char *, __int64); // rax
  void (__fastcall *v13)(IPhysIntersectionDictionary *, _DWORD *, const char *, __int64); // rax
  void (__fastcall *v14)(IPhysIntersectionDictionary *, _DWORD *, const char *, __int64); // rax
  void (__fastcall *v15)(IPhysIntersectionDictionary *, _DWORD *, char *, __int64); // rax
  void (__fastcall *v16)(IPhysIntersectionDictionary *, _DWORD *, const char *, __int64); // rax
  void (__fastcall *v17)(IPhysIntersectionDictionary *, _DWORD *, const char *, __int64); // rax
  void (__fastcall *v18)(IPhysIntersectionDictionary *, _DWORD *, char *, __int64); // rax
  void (__fastcall *v19)(IPhysIntersectionDictionary *, _DWORD *, const char *, __int64); // rax
  void (__fastcall *v20)(IPhysIntersectionDictionary *, _DWORD *, const char *, __int64); // rax
  void (__fastcall *v21)(IPhysIntersectionDictionary *, _DWORD *, const char *, __int64); // rax
  void (__fastcall *v22)(IPhysIntersectionDictionary *, _DWORD *, char *, __int64); // rax
  void (__fastcall *v23)(IPhysIntersectionDictionary *, _DWORD *, const char *, __int64); // rax
  void (__fastcall *v24)(IPhysIntersectionDictionary *, _DWORD *, const char *, __int64); // rax
  void (__fastcall *v25)(IPhysIntersectionDictionary *, _DWORD *, const char *, __int64); // rax
  void (__fastcall *v26)(IPhysIntersectionDictionary *, _DWORD *, char *, __int64); // rax
  void (__fastcall *v27)(IPhysIntersectionDictionary *, _DWORD *, const char *, __int64); // rax
  void (__fastcall *v28)(IPhysIntersectionDictionary *, _DWORD *, const char *, __int64); // rax
  void (__fastcall *v29)(IPhysIntersectionDictionary *, _DWORD *, const char *, __int64); // rax
  void (__fastcall *v30)(IPhysIntersectionDictionary *, _DWORD *, char *, __int64); // rax
  _DWORD v31[8]; // [rsp+0h] [rbp-20h] BYREF

  v0 = (*(g_pVPhysics2->_vptr_IAppSystem + 19))(g_pVPhysics2);
  v1 = *(v0->_vptr_IPhysIntersectionDictionary + 12);
  v31[0] = 1977497166;
  v1(v0, v31, "Default", 4);
  v2 = *(v0->_vptr_IPhysIntersectionDictionary + 12);
  v31[0] = -2061387591;
  v2(v0, v31, "Player", 8);
  v3 = *(v0->_vptr_IPhysIntersectionDictionary + 12);
  v31[0] = 1570658204;
  v3(v0, v31, "debris", 5);
  v4 = *(v0->_vptr_IPhysIntersectionDictionary + 12);
  v31[0] = 1564715058;
  v4(v0, v31, "interactive_debris", 6);
  v5 = *(v0->_vptr_IPhysIntersectionDictionary + 12);
  v31[0] = 891250816;
  v5(v0, v31, "interactive", 7);
  v6 = *(v0->_vptr_IPhysIntersectionDictionary + 12);
  v31[0] = -1781434853;
  v6(v0, v31, "breakable_glass", 9);
  v7 = *(v0->_vptr_IPhysIntersectionDictionary + 12);
  v31[0] = -984533194;
  v7(v0, v31, "vehicle", 10);
  v8 = *(v0->_vptr_IPhysIntersectionDictionary + 12);
  v31[0] = -1052777746;
  v8(v0, v31, "player_movement", 11);
  v9 = *(v0->_vptr_IPhysIntersectionDictionary + 12);
  v31[0] = 1851004272;
  v9(v0, v31, "npc", 12);
  IPhysIntersectionDictionary::AcquirePreindexedCollisionGroupName<11>(v0, "in_vehicle", 13);
  v10 = *(v0->_vptr_IPhysIntersectionDictionary + 12);
  v31[0] = -337761517;
  v10(v0, v31, "weapon", 14);
  IPhysIntersectionDictionary::AcquirePreindexedCollisionGroupName<13>(v0, "vehicle_clip", 15);
  IPhysIntersectionDictionary::AcquirePreindexedCollisionGroupName<11>(v0, "Projectile", 16);
  IPhysIntersectionDictionary::AcquirePreindexedCollisionGroupName<13>(v0, "door_blocker", 17);
  v11 = *(v0->_vptr_IPhysIntersectionDictionary + 12);
  v31[0] = -600484414;
  v11(v0, v31, "passable_door", 18);
  IPhysIntersectionDictionary::AcquirePreindexedCollisionGroupName<11>(v0, "dissolving", 19);
  v12 = *(v0->_vptr_IPhysIntersectionDictionary + 12);
  v31[0] = -807086929;
  v12(v0, v31, "pushaway", 20);
  v13 = *(v0->_vptr_IPhysIntersectionDictionary + 12);
  v31[0] = -1759527004;
  v13(v0, v31, "npc_actor", 21);
  IPhysIntersectionDictionary::AcquirePreindexedCollisionGroupName<13>(v0, "npc_scripted", 22);
  v14 = *(v0->_vptr_IPhysIntersectionDictionary + 12);
  v31[0] = 1167877397;
  v14(v0, v31, "pz_clip", 23);
  v15 = *(v0->_vptr_IPhysIntersectionDictionary + 12);
  v31[0] = 979726035;
  v15(v0, v31, "props", 24);
  IPhysIntersectionDictionary::AcquirePreindexedInteractionLayer<11>(v0, "playerclip", 4);
  v16 = *(v0->_vptr_IPhysIntersectionDictionary + 13);
  v31[0] = 286764971;
  v16(v0, v31, "npcclip", 5);
  v17 = *(v0->_vptr_IPhysIntersectionDictionary + 13);
  v31[0] = 1514777866;
  v17(v0, v31, "blocklos", 6);
  IPhysIntersectionDictionary::AcquirePreindexedInteractionLayer<11>(v0, "blocklight", 7);
  IPhysIntersectionDictionary::AcquirePreindexedInteractionLayer<7>(v0, "ladder", 8);
  IPhysIntersectionDictionary::AcquirePreindexedInteractionLayer<7>(v0, "pickup", 9);
  v18 = *(v0->_vptr_IPhysIntersectionDictionary + 13);
  v31[0] = -933734725;
  v18(v0, v31, "PlayerUse", 10);
  IPhysIntersectionDictionary::AcquirePreindexedInteractionLayer<7>(v0, "nodraw", 11);
  IPhysIntersectionDictionary::AcquirePreindexedInteractionLayer<7>(v0, "window", 12);
  v19 = *(v0->_vptr_IPhysIntersectionDictionary + 13);
  v31[0] = 1702216732;
  v19(v0, v31, "water", 15);
  v20 = *(v0->_vptr_IPhysIntersectionDictionary + 13);
  v31[0] = -1705426682;
  v20(v0, v31, "slime", 16);
  v21 = *(v0->_vptr_IPhysIntersectionDictionary + 13);
  v31[0] = -873941653;
  v21(v0, v31, "passbullets", 13);
  v22 = *(v0->_vptr_IPhysIntersectionDictionary + 13);
  v31[0] = -846116128;
  v22(v0, v31, "moveable", 14);
  v23 = *(v0->_vptr_IPhysIntersectionDictionary + 13);
  v31[0] = -1192345967;
  v23(v0, v31, "touchall", 17);
  IPhysIntersectionDictionary::AcquirePreindexedInteractionLayer<7>(v0, "player", 18);
  v24 = *(v0->_vptr_IPhysIntersectionDictionary + 13);
  v31[0] = 1851004272;
  v24(v0, v31, "npc", 19);
  IPhysIntersectionDictionary::AcquirePreindexedInteractionLayer<7>(v0, "debris", 20);
  v25 = *(v0->_vptr_IPhysIntersectionDictionary + 13);
  v31[0] = 642410294;
  v25(v0, v31, "physics_prop", 21);
  v26 = *(v0->_vptr_IPhysIntersectionDictionary + 13);
  v31[0] = 2070649566;
  v26(v0, v31, "HMDAvatar", 22);
  IPhysIntersectionDictionary::AcquirePreindexedInteractionLayer<14>(v0, "CarriedObject", 24);
  IPhysIntersectionDictionary::AcquirePreindexedInteractionLayer<14>(v0, "GraspedObject", 23);
  v27 = *(v0->_vptr_IPhysIntersectionDictionary + 13);
  v31[0] = -1718412509;
  v27(v0, v31, "teleportclip", 25);
  v28 = *(v0->_vptr_IPhysIntersectionDictionary + 13);
  v31[0] = 791291623;
  v28(v0, v31, "teleportinterrupt", 26);
  IPhysIntersectionDictionary::AcquirePreindexedInteractionLayer<14>(v0, "CarriedWeapon", 27);
  v29 = *(v0->_vptr_IPhysIntersectionDictionary + 13);
  v31[0] = 175318241;
  v29(v0, v31, "StaticLevel", 28);
  v30 = *(v0->_vptr_IPhysIntersectionDictionary + 13);
  v31[0] = 1070880376;
  v30(v0, v31, "tree", 29);
  IPhysIntersectionDictionary::AcquirePreindexedInteractionLayer<11>(v0, "selectable", 30);
}


// CPhysicsGameSystem::InitializeStandardCollisionRules  (line 283, @0x0000000001f679c0, libserver.so)  // inlines: SetDefaultCollisionFlags
// calls: CPhysicsGameSystem::GetIntersectionController
// callers: CPhysicsGameSystem::GameInit
void __fastcall CPhysicsGameSystem::InitializeStandardCollisionRules(CPhysicsGameSystem *const this)
{
  unsigned int v1; // r12d
  IPhysIntersectionController *IntersectionController; // rbx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned int i; // r12d
  __int64 v21; // rdx

  v1 = 4;
  IntersectionController = CPhysicsGameSystem::GetIntersectionController(this);
  do
  {
    v3 = v1++;
    (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 8, v3, 1);
  }
  while ( v1 != 25 );
  LOBYTE(v1) = 4;
  do
  {
    v4 = v1++;
    (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 7, v4, 1);
  }
  while ( v1 != 25 );
  LOBYTE(v1) = 4;
  do
  {
    v5 = v1++;
    (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 6, v5, 1);
  }
  while ( v1 != 25 );
  LOBYTE(v1) = 4;
  do
  {
    v6 = v1++;
    (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 9, v6, 1);
  }
  while ( v1 != 25 );
  LOBYTE(v1) = 4;
  do
  {
    v7 = v1++;
    (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 10, v7, 1);
  }
  while ( v1 != 25 );
  LOBYTE(v1) = 4;
  do
  {
    v8 = v1++;
    (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 14, v8, 1);
  }
  while ( v1 != 25 );
  LOBYTE(v1) = 4;
  do
  {
    v9 = v1++;
    (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 16, v9, 1);
  }
  while ( v1 != 25 );
  LOBYTE(v1) = 4;
  do
  {
    v10 = v1++;
    (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 18, v10, 1);
  }
  while ( v1 != 25 );
  LOBYTE(v1) = 4;
  do
  {
    v11 = v1++;
    (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 20, v11, 1);
  }
  while ( v1 != 25 );
  LOBYTE(v1) = 4;
  do
  {
    v12 = v1++;
    (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 5, v12, 0);
  }
  while ( v1 != 25 );
  LOBYTE(v1) = 4;
  do
  {
    v13 = v1++;
    (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 19, v13, 0);
  }
  while ( v1 != 25 );
  LOBYTE(v1) = 4;
  (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 5, 20, 1);
  do
  {
    v14 = v1++;
    (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 3, v14, 1);
  }
  while ( v1 != 25 );
  LOBYTE(v1) = 4;
  (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 3, 3, 1);
  (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 7, 6, 0);
  (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 16, 16, 0);
  (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 9, 9, 0);
  (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 6, 6, 0);
  (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 6, 8, 0);
  do
  {
    v15 = v1++;
    (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 4, v15, 1);
  }
  while ( v1 != 25 );
  LOBYTE(v1) = 4;
  (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 4, 8, 21);
  do
  {
    v16 = v1++;
    (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 23, v16, 0);
  }
  while ( v1 != 25 );
  LOBYTE(v1) = 4;
  (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 8, 18, 0);
  (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 8, 20, 0);
  (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 8, 23, 1);
  do
  {
    v17 = v1++;
    (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 13, v17, 0);
  }
  while ( v1 != 25 );
  LOBYTE(v1) = 4;
  (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 14, 10, 20);
  (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 14, 8, 20);
  (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 14, 16, 0);
  (*(IntersectionController->_vptr_IPhysIntersectionController + 8))(IntersectionController, 12, 8);
  do
  {
    v18 = v1++;
    (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 17, v18, 0);
  }
  while ( v1 != 25 );
  LOBYTE(v1) = 4;
  (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 17, 20, 1);
  (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 12, 17, 1);
  (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 12, 18, 1);
  (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 12, 20, 1);
  (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 12, 6, 1);
  (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 12, 14, 20);
  (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 12, 23, 0);
  (*(IntersectionController->_vptr_IPhysIntersectionController + 8))(IntersectionController, 21, 12);
  (*(IntersectionController->_vptr_IPhysIntersectionController + 8))(IntersectionController, 22, 12);
  (*(IntersectionController->_vptr_IPhysIntersectionController + 8))(IntersectionController, 11, 8);
  (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 18, 11, 1);
  (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 22, 22, 0);
  do
  {
    v19 = v1++;
    (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 15, v19, 0);
  }
  while ( v1 != 25 );
  (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 15, 10, 1);
  (*(IntersectionController->_vptr_IPhysIntersectionController + 8))(IntersectionController, 24, 4);
  if ( g_pGameRules != 0 )
    (*(g_pGameRules->_vptr_CGameRules + 34))(g_pGameRules, IntersectionController);
  for ( i = 4; i != 25; ++i )
  {
    v21 = i;
    (*(IntersectionController->_vptr_IPhysIntersectionController + 2))(IntersectionController, 1, v21, 0);
  }
}


// CPhysicsGameSystem::StaticInit  (line 379, @0x0000000001f3fdc0, libserver.so)
// calls: CPhysicsGameSystem::InitializeStandardCollisionNames
bool __cdecl CPhysicsGameSystem::StaticInit()
{
  CPhysicsGameSystem::InitializeStandardCollisionNames();
  return 1;
}


// SoftbodyReloadCallback  (line 386, @0x0000000001f2ae70, libserver.so)
// calls: CSkeletonInstance::OnClothReloaded
void __fastcall SoftbodyReloadCallback(HPhysicsSoftbody hSoftbody)
{
  CSkeletonInstance *v2; // rax

  v2 = (*(*hSoftbody + 1256LL))(hSoftbody, 0);
  if ( v2 != 0 )
    CSkeletonInstance::OnClothReloaded(v2, hSoftbody);
}


// GravityChanged  (line 395, @0x0000000001f66e40, libserver.so)  // inlines: GetFloat, Vector
// calls: CPhysicsGameSystem::GetOrCreateLevelWorld
// globals: g_pPhysicsGameSystem
void __fastcall GravityChanged(IConVar *var, const char *pOldValue, double a3, float flOldValue)
{
  IVPhysics2World *LevelWorld; // rax
  __int64 v5; // rdx
  void (__fastcall *v6)(IVPhysics2World *, float *); // rdx
  float v7[4]; // [rsp+0h] [rbp-10h] BYREF

  LevelWorld = CPhysicsGameSystem::GetOrCreateLevelWorld(g_pPhysicsGameSystem, 0, 0);
  if ( LevelWorld != 0 )
  {
    v5 = *LevelWorld;
    v7[0] = 0.0;
    v7[1] = 0.0;
    v6 = *(v5 + 176);
    v7[2] = -sv_gravity.m_pParent->m_Value.m_fValue;
    v6(LevelWorld, v7);
  }
}


// CPhysicsGameSystem::GameInit  (line 404, @0x0000000001f68fc0, libserver.so)  // inlines: AddToTail, CopyConstruct<HResourceManifest__*>, Element, GrowMemory, LoadResourceManifestNamed, RemoveAll, RemoveAllManifests, operator[]
// calls: LoggingSystem_IsChannelEnabled, CPhysicsGameSystem::InitSubSteps, CPhysicsGameSystem::CreateLevelWorld, ConVar::RemoveChangeCallback, ConVar::InstallChangeCallback, SetTraceResultsEmptySurfaceProp, CPhysicsGameSystem::InitializeStandardCollisionRules, LoggingSystem_Log, operator new, CUtlMemory<HResourceManifest__*, int>::Grow
// strings: "CPhysicsGameSystem::GameWorldInit", "PhysicsGameSystemManifest_server", "SV GameInit", "SV", "%s:  CPhysicsGameSystem::GameInit\n"
// globals: GravityChanged(IConVar *,char const*,float)
void __fastcall CPhysicsGameSystem::GameInit(CPhysicsGameSystem *const this, const EventGameInit_t *const msg)
{
  CResourceManifestPrerequisite *m_pResourceManifestPrerequisite; // r15
  int m_Size; // eax
  unsigned __int64 v5; // rbx
  __int64 v6; // r12
  HResourceManifest__ *v7; // rsi
  IResourceSystem *v8; // rdi
  CResourceManifestPrerequisite *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r12
  int v12; // edx
  __int64 *v13; // rdx
  __int64 v14; // rax
  const CPhysSurfaceProperties *v15; // rax
  CResourceManifestPrerequisite *v16; // rax
  __int64 v17; // [rsp+0h] [rbp-40h]

  if ( LoggingSystem_IsChannelEnabled(LOG_PHYSICS, 0) != 0 )
    LoggingSystem_Log(LOG_PHYSICS, 0, "%s:  CPhysicsGameSystem::GameInit\n", "SV");
  CPhysicsGameSystem::InitSubSteps(this);
  m_pResourceManifestPrerequisite = this->m_pResourceManifestPrerequisite;
  if ( m_pResourceManifestPrerequisite == 0 )
  {
    v16 = operator new(0x28u);  // new CResourceManifestPrerequisite (size matches)
    v16->_vptr_IPrerequisite = off_3FCABD0;  // vptr: CResourceManifestPrerequisite
    v16->m_nRefCount = 0;
    v16->m_hResourceManifests.m_Size = 0;
    v16->m_hResourceManifests.m_Memory.m_pMemory = 0;
    v16->m_hResourceManifests.m_Memory.m_nAllocationCount = 0;
    v16->m_hResourceManifests.m_Memory.m_nGrowSize = 0;
    this->m_pResourceManifestPrerequisite = v16;
    (*(v16->_vptr_IPrerequisite + 2))(v16);
    m_pResourceManifestPrerequisite = this->m_pResourceManifestPrerequisite;
  }
  m_Size = m_pResourceManifestPrerequisite->m_hResourceManifests.m_Size;
  if ( m_Size > 0 )
  {
    v5 = 0;
    v6 = 8LL * (m_Size - 1) + 8;
    do
    {
      v7 = m_pResourceManifestPrerequisite->m_hResourceManifests.m_Memory.m_pMemory[v5 / 8];
      v5 += 8LL;
      (*(*g_pResourceSystem + 216LL))(g_pResourceSystem, v7);
    }
    while ( v5 != v6 );
  }
  v8 = g_pResourceSystem;
  m_pResourceManifestPrerequisite->m_hResourceManifests.m_Size = 0;
  v9 = this->m_pResourceManifestPrerequisite;
  v10 = (*(*v8 + 184LL))(v8, "PhysicsGameSystemManifest_server", 0, "CPhysicsGameSystem::GameWorldInit", 0xFFFFFFFFLL);
  if ( v10 != 0 )
  {
    v11 = v9->m_hResourceManifests.m_Size;
    v12 = v9->m_hResourceManifests.m_Size;
    if ( v11 == v9->m_hResourceManifests.m_Memory.m_nAllocationCount )
    {
      v17 = v10;
      CUtlMemory<HResourceManifest__ *,int>::Grow(&v9->m_hResourceManifests.m_Memory, 1);
      v12 = v9->m_hResourceManifests.m_Size;
      v10 = v17;
    }
    v9->m_hResourceManifests.m_Size = v12 + 1;
    v13 = &v9->m_hResourceManifests.m_Memory.m_pMemory[v11];
    if ( v13 != 0 )
      *v13 = v10;
  }
  (**msg->m_pRegistry)(msg->m_pRegistry, this->m_pResourceManifestPrerequisite);
  CPhysicsGameSystem::CreateLevelWorld(this, 0, "SV GameInit");
  ConVar::RemoveChangeCallback(&sv_gravity, GravityChanged);
  ConVar::InstallChangeCallback(&sv_gravity, GravityChanged, 1);
  v14 = (*(g_pVPhysics2->_vptr_IAppSystem + 18))(g_pVPhysics2);
  v15 = (*(*v14 + 16LL))(v14, 1977497166, 0);
  SetTraceResultsEmptySurfaceProp(v15);
  CPhysicsGameSystem::InitializeStandardCollisionRules(this);
}


// CPhysicsGameSystem::InitSubSteps  (line 438, @0x0000000001f36490, libserver.so)  // inlines: GetSimulationTimestep
// calls: floorf
// callers: CPhysicsGameSystem::GameInit
void __fastcall CPhysicsGameSystem::InitSubSteps(CPhysicsGameSystem *const this)
{
  CGlobalVars *v2; // r12
  int v3; // edx
  int v4; // eax
  float v5; // xmm1_4

  v2 = gpGlobals;
  v3 = floorf((30.0 * gpGlobals->interval_per_tick) + 0.5);
  if ( v3 <= 0 )
  {
    v5 = 1.0;
    v4 = 1;
  }
  else
  {
    v4 = 3;
    if ( v3 <= 3 )
      v4 = v3;
    v5 = v4;
  }
  this->m_nSubStepCount = v4;
  this->m_flSubStepInterval = v2->interval_per_tick / v5;
}


// CPhysicsGameSystem::GetSimulationTimestep  (line 449, @0x0000000001f36510, libserver.so)
// callers: CalculateObjectStress
float __cdecl CPhysicsGameSystem::GetSimulationTimestep()
{
  return gpGlobals->interval_per_tick;
}


// CPhysicsGameSystem::ShouldGroupsCollide  (line 455, @0x0000000001f67f40, libserver.so)
// calls: CPhysicsGameSystem::GetIntersectionController
// callers: CBaseEntity::IsSolidTo, ShouldGroupsCollide
bool __fastcall CPhysicsGameSystem::ShouldGroupsCollide(
        CPhysicsGameSystem *const this,
        int nCollisionGroup0,
        int nCollisionGroup1)
{
  IPhysIntersectionController *IntersectionController; // rax

  IntersectionController = CPhysicsGameSystem::GetIntersectionController(this);
  return (*(IntersectionController->_vptr_IPhysIntersectionController + 3))(
           IntersectionController,
           nCollisionGroup0,
           nCollisionGroup1)
       & 1;
}


// CPhysicsGameSystem::ShouldHitQuery  (line 465, @0x0000000001f67f90, libserver.so)
// calls: CPhysicsGameSystem::GetIntersectionController
// callers: CHitboxSystem::TestHitboxes, CHitboxSystem::OverlapHitboxes, CHitboxSystem::TestHitboxesMultiple, CGamePhysicsQueryInterface::EntitiesInBox, CGamePhysicsQueryInterface::EntitiesInSphere
bool __fastcall CPhysicsGameSystem::ShouldHitQuery(
        CPhysicsGameSystem *const this,
        const RnQueryShapeAttr_t *const queryAttribute,
        const RnCollisionAttr_t *const shapeAttribute)
{
  IPhysIntersectionController *IntersectionController; // rax

  IntersectionController = CPhysicsGameSystem::GetIntersectionController(this);
  return (*(IntersectionController->_vptr_IPhysIntersectionController + 12))(
           IntersectionController,
           queryAttribute,
           shapeAttribute) != 0;
}


// ShouldGroupsCollide  (line 472, @0x0000000001f67f70, libserver.so)
// calls: CPhysicsGameSystem::ShouldGroupsCollide
// callers: CGameRules::ShouldCollide
// globals: g_pPhysicsGameSystem
bool __fastcall ShouldGroupsCollide(int n0, int n1)
{
  return CPhysicsGameSystem::ShouldGroupsCollide(g_pPhysicsGameSystem, n0, n1);
}


// CPhysicsGameSystem::GameShutdown  (line 478, @0x0000000001f668c0, libserver.so)  // inlines: Destruct<CUtlMap<CUtlStringToken, CPhysicsGameSystem::PhysicsWorld_t>::Node_t>, Element, FreeNode, IsIdxValid, IsValidIndex, LeftChild, RemoveAll, RemoveAllManifests, RemoveAt, SetLeftChild, SetRightChild, operator[], ~Node_t, ~PhysicsWorld_t
// calls: LoggingSystem_IsChannelEnabled, CGamePhysicsQueryInterface::GetWorld, CUtlRBTree<CUtlMap<CUtlStringToken, CPhysicsGameSystem::PhysicsWorld_t>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, CPhysicsGameSystem::PhysicsWorld_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, CPhysicsGameSystem::PhysicsWorld_t>::Node_t, short unsigned int>, short unsigned int> >::Unlink, LoggingSystem_Log, CGamePhysicsQueryInterface::SetWorld
// strings: "SV", "%s:  CPhysicsGameSystem::GameShutdown\n"
void __fastcall CPhysicsGameSystem::GameShutdown(CPhysicsGameSystem *const this, const EventGameShutdown_t *const msg)
{
  CResourceManifestPrerequisite *m_pResourceManifestPrerequisite; // r14
  int m_Size; // eax
  unsigned __int64 v5; // rbx
  __int64 v6; // r13
  HResourceManifest__ *v7; // rsi
  int m_nAllocationCount; // eax
  __int64 v9; // r14
  int v10; // ebx
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t>::Node_t,short unsigned int> *m_pMemory; // r13
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t>::Node_t,short unsigned int> *v12; // r13
  IVPhysics2World *World; // rax
  IVPhysics2World *v14; // rcx
  ISceneWorld *pDebugSceneWorld; // rdi
  IVPhysics2World *pPhysicsWorld; // [rsp+8h] [rbp-38h]

  if ( LoggingSystem_IsChannelEnabled(LOG_PHYSICS, 0) != 0 )
    LoggingSystem_Log(LOG_PHYSICS, 0, "%s:  CPhysicsGameSystem::GameShutdown\n", "SV");
  m_pResourceManifestPrerequisite = this->m_pResourceManifestPrerequisite;
  if ( m_pResourceManifestPrerequisite != 0 )
  {
    m_Size = m_pResourceManifestPrerequisite->m_hResourceManifests.m_Size;
    if ( m_Size > 0 )
    {
      v5 = 0;
      v6 = 8LL * (m_Size - 1) + 8;
      do
      {
        v7 = m_pResourceManifestPrerequisite->m_hResourceManifests.m_Memory.m_pMemory[v5 / 8];
        v5 += 8LL;
        (*(*g_pResourceSystem + 216LL))(g_pResourceSystem, v7);
      }
      while ( v5 != v6 );
    }
    m_pResourceManifestPrerequisite->m_hResourceManifests.m_Size = 0;
    (*(this->m_pResourceManifestPrerequisite->_vptr_IPrerequisite + 3))(this->m_pResourceManifestPrerequisite);
    this->m_pResourceManifestPrerequisite = 0;
  }
  m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
  v9 = 0;
  v10 = 0;
  if ( m_nAllocationCount != 0 )
  {
    do
    {
      if ( v10 < m_nAllocationCount && v10 <= this->m_mapLevelWorlds.m_Tree.m_LastAlloc.index )
      {
        m_pMemory = this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory;
        if ( m_pMemory[v10].m_Left != v10 )
        {
          v12 = &m_pMemory[v9];
          pPhysicsWorld = v12->m_Data.elem.pPhysicsWorld;
          World = CGamePhysicsQueryInterface::GetWorld(g_pPhysicsQuery);
          v14 = pPhysicsWorld;
          if ( pPhysicsWorld == World )
          {
            CGamePhysicsQueryInterface::SetWorld(g_pPhysicsQuery, 0);
            v14 = pPhysicsWorld;
          }
          (*(g_pVPhysics2->_vptr_IAppSystem + 14))(g_pVPhysics2, v14);
          pDebugSceneWorld = v12->m_Data.elem.pDebugSceneWorld;
          if ( pDebugSceneWorld != 0 )
            (*(*pDebugSceneWorld + 8LL))(pDebugSceneWorld);
          CUtlRBTree<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short,CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short>,unsigned short>>::Unlink(
            &this->m_mapLevelWorlds.m_Tree,
            v10);
          this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory[v9].m_Data.elem._vptr_PhysicsWorld_t = off_3FCADD0;
          this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory[v9].m_Left = v10;
          this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory[v9].m_Right = this->m_mapLevelWorlds.m_Tree.m_FirstFree;
          --this->m_mapLevelWorlds.m_Tree.m_NumElements;
          this->m_mapLevelWorlds.m_Tree.m_FirstFree = v10;
          m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
        }
      }
      ++v10;
      ++v9;
    }
    while ( m_nAllocationCount > v10 );
  }
}


// CPhysicsGameSystem::LoadSpawnGroupPhysics  (line 514, @0x0000000001f66ea0, libserver.so)  // inlines: CEntityHandle, CStrongHandle, CStrongHandleCopyable, CTransform, Element, EnableInteractsAs, FindExistingResourceByName, FindExistingResourceByName<495958126710ull>, FindInsertionPosition, GetPartCount, Init, InitFromMatrix, Insert, InsertAt, LeftChild, MatrixQuaternion, Node_t, PhysicsSpawnGroups_t, RightChild, SetToIdentity, VectorAligned, _V_strcmp, operator const RuntimeClass_t*, operator(), operator=, operator[], ~CStrongHandle, ~CStrongHandleCopyable, ~Node_t, ~PhysicsSpawnGroups_t
// calls: CSpawnGroupMgrGameSystem::GetWorldGroupId, CSpawnGroupMgrGameSystem::GetSpawnGroupName, V_snprintf, CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Init, CSpawnGroupMgrGameSystem::GetWorldReference, CSpawnGroupMgrGameSystem::GetSpawnGroupWorldOffset, MatrixQuaternion, CPhysicsGameSystem::GetOrCreateLevelWorld, CFmtStrN<256, false>::CFmtStrN, CUtlRBTree<CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t, short unsigned int, CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t, short unsigned int, CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Shutdown (14 total)
// callers: CPhysicsGameSystem::PreSpawnGroupLoad
// strings: "<empty>", "maps/%s/world_physics.vphys", "Server Level(%s)"
// globals: g_pSpawnGroupMgr
bool __fastcall CPhysicsGameSystem::LoadSpawnGroupPhysics(
        CPhysicsGameSystem *const this,
        SpawnGroupHandle_t hSpawnGroup)
{
  WorldGroupId_t v3; // r12d
  const char *SpawnGroupName; // rsi
  bool result; // al
  IResourceSystem *v6; // r13
  const ResourceBinding_t<InfoForResourceTypeCPhysAggregateData> *v7; // rax
  void *m_pData; // r13
  vec_t y; // xmm1_4
  vec_t z; // xmm1_4
  vec_t v11; // xmm2_4
  const matrix3x4a_t *SpawnGroupWorldOffset; // rbx
  vec_t v13; // xmm1_4
  vec_t v14; // xmm0_4
  IVPhysics2World *LevelWorld; // rax
  IPhysAggregateInstance *v16; // rax
  int i; // r15d
  __int64 v18; // r12
  int j; // r13d
  __int64 v20; // rbx
  uint64 *v21; // rax
  uint64 v22; // rax
  void (__fastcall *v23)(IPhysAggregateInstance *, char *); // r12
  unsigned __int16 m_Root; // bx
  unsigned __int16 m_Right; // ax
  bool v26; // zf
  UtlRBTreeNode_t<CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t,short unsigned int> *m_pMemory; // rax
  unsigned __int16 v28; // ax
  bool v29; // r13
  const char *v30; // [rsp+8h] [rbp-328h]
  Quaternion q; // [rsp+30h] [rbp-300h] BYREF
  CPhysicsGameSystem::PhysicsSpawnGroups_t group; // [rsp+40h] [rbp-2F0h] BYREF
  RnCollisionAttr_t attr; // [rsp+80h] [rbp-2B0h] BYREF
  bool m_bLevelDebugRenderCreated; // [rsp+A0h] [rbp-290h]
  CSceneAnimatableObject *m_pLevelDebugGeo; // [rsp+A8h] [rbp-288h]
  Vector v38; // [rsp+B0h] [rbp-280h]
  int v39; // [rsp+BCh] [rbp-274h]
  QuaternionAligned m_orientation; // [rsp+C0h] [rbp-270h]
  char pPhysicsWorld[272]; // [rsp+D0h] [rbp-260h] BYREF
  CFmtStrN<256,false> v42; // [rsp+1E0h] [rbp-150h] BYREF
  unsigned __int64 v43; // [rsp+2F8h] [rbp-38h]

  v43 = __readfsqword(0x28u);
  v3.m_nHashCode = CSpawnGroupMgrGameSystem::GetWorldGroupId(g_pSpawnGroupMgr, hSpawnGroup).m_nHashCode;
  SpawnGroupName = CSpawnGroupMgrGameSystem::GetSpawnGroupName(g_pSpawnGroupMgr, hSpawnGroup);
  v30 = SpawnGroupName;
  result = 1;
  if ( strcmp(SpawnGroupName, "<empty>") != 0 )
  {
    V_snprintf(pPhysicsWorld, 260, "maps/%s/world_physics.vphys", SpawnGroupName);
    v6 = g_pResourceSystem;
    if ( (*(*g_pResourceSystem + 448LL))(g_pResourceSystem, pPhysicsWorld) != 0
      && (v7 = (*(*v6 + 256LL))(v6, pPhysicsWorld, 0x7379687076LL, 0)) != 0
      && (m_pData = v7->m_pData, v7->m_pData != 0) )
    {
      memset(&group, 0, 17);
      group.m_pLevelDebugGeo = 0;
      group.m_WorldOffset.m_vPosition.w = 0.0;
      CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Init(&group.m_hPhysicsLevel, v7);
      group.m_WorldOffset.m_vPosition.w = 0.0;
      y = vec3_origin.y;
      group.m_WorldOffset.m_vPosition.z = vec3_origin.z;
      group.m_WorldOffset.m_vPosition.y = y;
      group.m_WorldOffset.m_vPosition.x = vec3_origin.x;
      z = quat_identity.z;
      v11 = quat_identity.y;
      group.m_WorldOffset.m_orientation.w = quat_identity.w;
      group.m_WorldOffset.m_orientation.z = z;
      group.m_WorldOffset.m_orientation.y = v11;
      group.m_WorldOffset.m_orientation.x = quat_identity.x;
      if ( CSpawnGroupMgrGameSystem::GetWorldReference(g_pSpawnGroupMgr, hSpawnGroup) != 0 )
      {
        SpawnGroupWorldOffset = CSpawnGroupMgrGameSystem::GetSpawnGroupWorldOffset(g_pSpawnGroupMgr, hSpawnGroup);
        MatrixQuaternion(SpawnGroupWorldOffset, &q);
        group.m_WorldOffset.m_orientation = q;
        v13 = SpawnGroupWorldOffset->m_flMatVal[1][3];
        v14 = SpawnGroupWorldOffset->m_flMatVal[2][3];
        group.m_WorldOffset.m_vPosition.x = SpawnGroupWorldOffset->m_flMatVal[0][3];
        group.m_WorldOffset.m_vPosition.y = v13;
        group.m_WorldOffset.m_vPosition.z = v14;
        group.m_WorldOffset.m_vPosition.w = 0.0;
      }
      LevelWorld = CPhysicsGameSystem::GetOrCreateLevelWorld(this, v3, hSpawnGroup);
      v16 = (*(*LevelWorld + 120LL))(LevelWorld, m_pData, &group.m_WorldOffset, 0x8000, 2, 1.0);
      group.m_pLevelAggregateInstance = v16;
      if ( v16 != 0 )
      {
        (*(v16->_vptr_IPhysAggregateInstance + 54))(v16, &g_PhysDefaultObjectParams);
        for ( i = 0;
              i < (*(group.m_pLevelAggregateInstance->_vptr_IPhysAggregateInstance + 9))(group.m_pLevelAggregateInstance);
              ++i )
        {
          v18 = (*(group.m_pLevelAggregateInstance->_vptr_IPhysAggregateInstance + 17))(
                  group.m_pLevelAggregateInstance,
                  i);
          for ( j = 0; j < (*(*v18 + 48LL))(v18); ++j )
          {
            v20 = (*(*v18 + 56LL))(v18, j);
            v21 = (*(*v20 + 128LL))(v20);
            attr.m_nInteractsAs = *v21;
            attr.m_nInteractsWith = v21[1];
            attr.m_nInteractsExclude = v21[2];
            v22 = v21[3];
            attr.m_nInteractsAs |= 0x10000000uLL;
            *&attr.m_nEntityId = v22;
            (*(*v20 + 112LL))(v20, &attr);
          }
        }
        if ( group.m_pLevelAggregateInstance != 0 )
        {
          v23 = *(group.m_pLevelAggregateInstance->_vptr_IPhysAggregateInstance + 36);
          CFmtStrN<256,false>::CFmtStrN(&v42, "Server Level(%s)", v30);
          v23(group.m_pLevelAggregateInstance, v42.m_szBuf);
        }
      }
      attr.m_nInteractsExclude = 0;
      *&attr.m_nEntityId = 0;
      m_bLevelDebugRenderCreated = 0;
      m_pLevelDebugGeo = 0;
      v39 = 0;
      LODWORD(attr.m_nInteractsAs) = hSpawnGroup;
      CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Init(
        &attr.m_nInteractsExclude,
        group.m_hPhysicsLevel.m_pBinding);
      v38 = group.m_WorldOffset.m_vPosition.Vector;
      *&attr.m_nEntityId = group.m_pLevelAggregateInstance;
      m_bLevelDebugRenderCreated = group.m_bLevelDebugRenderCreated;
      m_orientation = group.m_WorldOffset.m_orientation;
      m_pLevelDebugGeo = group.m_pLevelDebugGeo;
      m_Root = this->m_PhysicsSpawnGroups.m_Tree.m_Root;
      if ( m_Root != 0xFFFF )
      {
        while ( 1 )
        {
          v26 = !this->m_PhysicsSpawnGroups.m_Tree.m_LessFunc.m_LessFunc(
                   &attr,
                   &this->m_PhysicsSpawnGroups.m_Tree.m_Elements.m_pMemory[m_Root].m_Data);
          m_pMemory = this->m_PhysicsSpawnGroups.m_Tree.m_Elements.m_pMemory;
          if ( v26 )
          {
            m_Right = m_pMemory[m_Root].m_Right;
            v29 = 0;
            if ( m_Right == 0xFFFF )
              goto LABEL_22;
          }
          else
          {
            m_Right = m_pMemory[m_Root].m_Left;
            v29 = 1;
            if ( m_Right == 0xFFFF )
              goto LABEL_22;
          }
          m_Root = m_Right;
        }
      }
      v29 = 0;
LABEL_22:
      v28 = CUtlRBTree<CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
              &this->m_PhysicsSpawnGroups.m_Tree,
              &attr);
      CUtlRBTree<CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
        &this->m_PhysicsSpawnGroups.m_Tree,
        v28,
        m_Root,
        v29);
      ++this->m_PhysicsSpawnGroups.m_Tree.m_NumElements;
      CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Shutdown(&attr.m_nInteractsExclude);
      CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Shutdown(&group.m_hPhysicsLevel);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


// CPhysicsGameSystem::UnloadSpawnGroupPhysics  (line 598, @0x0000000001f67610, libserver.so)  // inlines: CStrongHandle, CStrongHandleCopyable, CTransform, Destruct<CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t>, Element, Find, FreeNode, Node_t, PhysicsSpawnGroups_t, RemoveAt, SetLeftChild, SetRightChild, VectorAligned, _V_strcmp, operator=, operator[], ~CStrongHandle, ~CStrongHandleCopyable, ~Node_t, ~PhysicsSpawnGroups_t
// calls: CSpawnGroupMgrGameSystem::GetSpawnGroupName, CUtlRBTree<CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t, short unsigned int, CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t, short unsigned int>, short unsigned int> >::Find, CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Shutdown, CSpawnGroupMgrGameSystem::GetWorldGroupId, CPhysicsGameSystem::GetOrCreateLevelWorld, CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Init, CUtlRBTree<CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t, short unsigned int, CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t, short unsigned int>, short unsigned int> >::Unlink, _Unwind_Resume
// callers: CPhysicsGameSystem::PostSpawnGroupUnload
// strings: "<empty>"
// globals: g_pSpawnGroupMgr
bool __fastcall CPhysicsGameSystem::UnloadSpawnGroupPhysics(
        CPhysicsGameSystem *const this,
        SpawnGroupHandle_t hSpawnGroup)
{
  bool result; // al
  unsigned __int16 v5; // r13
  __int64 v6; // r14
  UtlRBTreeNode_t<CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t,short unsigned int> *v7; // r15
  WorldGroupId_t v8; // eax
  IVPhysics2World *LevelWorld; // rax
  CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t search; // [rsp+10h] [rbp-80h] BYREF

  if ( strcmp(CSpawnGroupMgrGameSystem::GetSpawnGroupName(g_pSpawnGroupMgr, hSpawnGroup), "<empty>") == 0 )
    return 1;
  memset(&search.elem, 0, 17);
  search.elem.m_pLevelDebugGeo = 0;
  search.elem.m_WorldOffset.m_vPosition.w = 0.0;
  search.key = hSpawnGroup;
  v5 = CUtlRBTree<CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_PhysicsSpawnGroups.m_Tree,
         &search);
  CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Shutdown(&search.elem.m_hPhysicsLevel);
  result = 0;
  if ( v5 != 0xFFFF )
  {
    v6 = v5;
    v7 = &this->m_PhysicsSpawnGroups.m_Tree.m_Elements.m_pMemory[v6];
    v8.m_nHashCode = CSpawnGroupMgrGameSystem::GetWorldGroupId(g_pSpawnGroupMgr, hSpawnGroup).m_nHashCode;
    LevelWorld = CPhysicsGameSystem::GetOrCreateLevelWorld(this, v8, hSpawnGroup);
    if ( LevelWorld != 0 && v7->m_Data.elem.m_pLevelAggregateInstance != 0 )
    {
      (*(*LevelWorld + 136LL))(LevelWorld);
      v7->m_Data.elem.m_pLevelAggregateInstance = 0;
    }
    if ( v7->m_Data.elem.m_pLevelDebugGeo != 0 )
      (*(g_pVPhysics2->_vptr_IAppSystem + 54))(g_pVPhysics2);
    CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Init(&v7->m_Data.elem.m_hPhysicsLevel, 0);
    if ( v5 != 0xFFFF )
    {
      CUtlRBTree<CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Unlink(
        &this->m_PhysicsSpawnGroups.m_Tree,
        v5);
      CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Shutdown(&this->m_PhysicsSpawnGroups.m_Tree.m_Elements.m_pMemory[v6].m_Data.elem.m_hPhysicsLevel);
      this->m_PhysicsSpawnGroups.m_Tree.m_Elements.m_pMemory[v5].m_Left = v5;
      this->m_PhysicsSpawnGroups.m_Tree.m_Elements.m_pMemory[v6].m_Right = this->m_PhysicsSpawnGroups.m_Tree.m_FirstFree;
      --this->m_PhysicsSpawnGroups.m_Tree.m_NumElements;
      this->m_PhysicsSpawnGroups.m_Tree.m_FirstFree = v5;
    }
    return 1;
  }
  return result;
}


// CPhysicsGameSystem::PreSpawnGroupLoad  (line 628, @0x0000000001f67490, libserver.so)  // inlines: CStrongHandle, CStrongHandleCopyable, CTransform, CUtlString, DescribeSpawnGroupHandle, Find, IsClientOnlySpawnGroup, IsEmpty, Node_t, PhysicsSpawnGroups_t, SpawnGroupHasWorldGeomemtry, String, VectorAligned, ~CStrongHandle, ~CStrongHandleCopyable, ~CUtlString, ~Node_t, ~PhysicsSpawnGroups_t
// calls: LoggingSystem_IsChannelEnabled, CUtlString::Get, CUtlString::Format, LoggingSystem_Log, CUtlString::FreeMemoryBlock, CUtlRBTree<CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t, short unsigned int, CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t, short unsigned int>, short unsigned int> >::Find, CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Shutdown, CPhysicsGameSystem::LoadSpawnGroupPhysics, _Unwind_Resume
// strings: "SV", "%s:  CPhysicsGameSystem::PreSpawnGroupLoad(%s: %s)\n"
void __fastcall CPhysicsGameSystem::PreSpawnGroupLoad(
        CPhysicsGameSystem *const this,
        const EventPreSpawnGroupLoad_t *const msg)
{
  char *m_pString; // rax
  const char *v5; // r15
  SpawnGroupHandle_t m_SpawnGroupHandle; // eax
  const char *v7; // rax
  SpawnGroupHandle_t v8; // eax
  CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t v9; // [rsp+0h] [rbp-80h] BYREF

  if ( msg->m_SpawnGroupName.m_pString != 0 && *msg->m_SpawnGroupName.m_pString != 0 )
  {
    m_pString = msg->m_EntityLumpName.m_pString;
    if ( m_pString == 0 || *m_pString == 0 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_PHYSICS, 0) != 0 )
      {
        *&v9.key = 0;
        v5 = CUtlString::Get(&msg->m_SpawnGroupName);
        m_SpawnGroupHandle = msg->m_SpawnGroupHandle;
        if ( m_SpawnGroupHandle + 0x80000000 > 0x7FFFFFFE )
          CUtlString::Format(&v9, "%u", m_SpawnGroupHandle);
        else
          CUtlString::Format(&v9, &stru_32D9EEC.m_mapLevelWorlds.m_Tree.m_Elements.m_nGrowSize + 3);
        v7 = CUtlString::Get(&v9);
        LoggingSystem_Log(LOG_PHYSICS, 0, "%s:  CPhysicsGameSystem::PreSpawnGroupLoad(%s: %s)\n", "SV", v7, v5);
        if ( *&v9.key != 0 )
          CUtlString::FreeMemoryBlock(&v9);
      }
      v8 = msg->m_SpawnGroupHandle;
      memset(&v9.elem, 0, 17);
      v9.elem.m_pLevelDebugGeo = 0;
      v9.elem.m_WorldOffset.m_vPosition.w = 0.0;
      v9.key = v8;
      CUtlRBTree<CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
        &this->m_PhysicsSpawnGroups.m_Tree,
        &v9);
      CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Shutdown(&v9.elem.m_hPhysicsLevel);
      CPhysicsGameSystem::LoadSpawnGroupPhysics(this, msg->m_SpawnGroupHandle);
    }
  }
}


// CPhysicsGameSystem::PostSpawnGroupUnload  (line 647, @0x0000000001f677b0, libserver.so)  // inlines: CUtlString, DescribeSpawnGroupHandle, IsClientOnlySpawnGroup, IsEmpty, SpawnGroupHasWorldGeomemtry, String, ~CUtlString
// calls: LoggingSystem_IsChannelEnabled, CUtlString::Get, CUtlString::Format, LoggingSystem_Log, CUtlString::FreeMemoryBlock, CPhysicsGameSystem::UnloadSpawnGroupPhysics, _Unwind_Resume
// strings: "SV", "%s:  CPhysicsGameSystem::PostSpawnGroupUnload(%s: %s)\n"
void __fastcall CPhysicsGameSystem::PostSpawnGroupUnload(
        CPhysicsGameSystem *const this,
        const EventPostSpawnGroupUnload_t *const msg)
{
  char *m_pString; // rax
  const char *v5; // r15
  SpawnGroupHandle_t m_SpawnGroupHandle; // eax
  const char *v7; // rax
  CUtlString v8; // [rsp+0h] [rbp-40h] BYREF

  if ( msg->m_SpawnGroupName.m_pString != 0 && *msg->m_SpawnGroupName.m_pString != 0 )
  {
    m_pString = msg->m_EntityLumpName.m_pString;
    if ( m_pString == 0 || *m_pString == 0 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_PHYSICS, 0) != 0 )
      {
        v8.m_pString = 0;
        v5 = CUtlString::Get(&msg->m_SpawnGroupName);
        m_SpawnGroupHandle = msg->m_SpawnGroupHandle;
        if ( m_SpawnGroupHandle + 0x80000000 > 0x7FFFFFFE )
          CUtlString::Format(&v8, "%u", m_SpawnGroupHandle);
        else
          CUtlString::Format(&v8, &stru_32D9EEC.m_mapLevelWorlds.m_Tree.m_Elements.m_nGrowSize + 3);
        v7 = CUtlString::Get(&v8);
        LoggingSystem_Log(LOG_PHYSICS, 0, "%s:  CPhysicsGameSystem::PostSpawnGroupUnload(%s: %s)\n", "SV", v7, v5);
        if ( v8.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&v8);
      }
      CPhysicsGameSystem::UnloadSpawnGroupPhysics(this, msg->m_SpawnGroupHandle);
    }
  }
}


// CPhysicsGameSystem::ActiveSpawnGroupChanged  (line 656, @0x0000000001f2a130, libserver.so)
void __fastcall CPhysicsGameSystem::ActiveSpawnGroupChanged(
        CPhysicsGameSystem *const this,
        const EventActiveSpawnGroupChanged_t *const msg)
{
  ;
}


// CPhysicsGameSystem::GameActivate  (line 675, @0x0000000001f41590, libserver.so)  // inlines: CUtlDelegate<CPhysicsGameSystem, CPhysicsGameSystem>, Convert<CPhysicsGameSystem, void (CPhysicsGameSystem::*)(CCallQueue&), void (detail::GenericClass::*)()>, FastDelegate1<CPhysicsGameSystem, CPhysicsGameSystem>, UtlMakeDelegate<CPhysicsGameSystem, CPhysicsGameSystem, CCallQueue&, void>, bindmemfunc<CPhysicsGameSystem, void (CPhysicsGameSystem::*)(CCallQueue&)>, operator=
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CStrongHandle<InfoForResourceTypeIMaterial2>::Init
// strings: "SV", "%s:  CPhysicsGameSystem::GameActivate\n"
// globals: g_pCollisionGeometry, g_pWireframeMaterial, g_pHiddenWireframeMaterial, g_pDefaultMaterial, CPhysicsGameSystem::UpdateSceneObjects(CCallQueue &)
void __fastcall CPhysicsGameSystem::GameActivate(CPhysicsGameSystem *const this, const EventGameActivate_t *const msg)
{
  void (__fastcall *v3)(IDebugDrawQueueMgr *, CStrongHandle<InfoForResourceTypeIMaterial2>::ResourceHandleTyped_t *); // rax
  CStrongHandle<InfoForResourceTypeIMaterial2>::ResourceHandleTyped_t hResource[8]; // [rsp+0h] [rbp-40h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_PHYSICS, 0) != 0 )
    LoggingSystem_Log(LOG_PHYSICS, 0, "%s:  CPhysicsGameSystem::GameActivate\n", "SV");
  (*(*g_pMaterialSystem2 + 112LL))(hResource, g_pMaterialSystem2, g_pCollisionGeometry);
  CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&this->m_hMatCollisionGeometry, hResource[0]);
  (*(*g_pMaterialSystem2 + 112LL))(hResource, g_pMaterialSystem2, g_pWireframeMaterial);
  CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&this->m_hMatWireframe, hResource[0]);
  (*(*g_pMaterialSystem2 + 112LL))(hResource, g_pMaterialSystem2, g_pHiddenWireframeMaterial);
  CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&this->m_hMatHiddenWireframe, hResource[0]);
  (*(*g_pMaterialSystem2 + 112LL))(hResource, g_pMaterialSystem2, g_pDefaultMaterial);
  CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&this->m_hMatDefault, hResource[0]);
  v3 = *(*g_pDebugDrawQueueMgr + 88LL);
  hResource[0] = this;
  hResource[1] = CPhysicsGameSystem::UpdateSceneObjects;
  hResource[2] = 0;
  v3(g_pDebugDrawQueueMgr, hResource);
}


// CPhysicsGameSystem::GameDeactivate  (line 695, @0x0000000001f678e0, libserver.so)  // inlines: CUtlDelegate<CPhysicsGameSystem, CPhysicsGameSystem>, Convert<CPhysicsGameSystem, void (CPhysicsGameSystem::*)(CCallQueue&), void (detail::GenericClass::*)()>, FastDelegate1<CPhysicsGameSystem, CPhysicsGameSystem>, UtlMakeDelegate<CPhysicsGameSystem, CPhysicsGameSystem, CCallQueue&, void>, bindmemfunc<CPhysicsGameSystem, void (CPhysicsGameSystem::*)(CCallQueue&)>
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CPhysicsGameSystem::GetOrCreateLevelWorld
// strings: "SV", "%s:  CPhysicsGameSystem::GameDeactivate\n"
// globals: CPhysicsGameSystem::UpdateSceneObjects(CCallQueue &)
void __fastcall CPhysicsGameSystem::GameDeactivate(
        CPhysicsGameSystem *const this,
        const EventGameDeactivate_t *const msg)
{
  __int64 v3; // rax
  IVPhysics2World *LevelWorld; // rax
  _QWORD v5[6]; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_PHYSICS, 0) != 0 )
    LoggingSystem_Log(LOG_PHYSICS, 0, "%s:  CPhysicsGameSystem::GameDeactivate\n", "SV");
  v3 = *g_pDebugDrawQueueMgr;
  v5[1] = CPhysicsGameSystem::UpdateSceneObjects;
  v5[0] = this;
  v5[2] = 0;
  (*(v3 + 96))(g_pDebugDrawQueueMgr, v5);
  LevelWorld = CPhysicsGameSystem::GetOrCreateLevelWorld(this, 0, 0);
  (*(*LevelWorld + 1384LL))(LevelWorld, 0);
}


// CPhysicsGameSystem::OnWorldRequiresDebugRendering  (line 716, @0x0000000001f36820, libserver.so)  // inlines: Element, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: CPhysicsGameSystem::UpdateDebugSceneSession
void __fastcall CPhysicsGameSystem::OnWorldRequiresDebugRendering(
        CPhysicsGameSystem *const this,
        IVPhysXWorld *pWorld,
        bool bEnableDraw)
{
  int m_nAllocationCount; // r10d
  __int64 v4; // rcx
  int v5; // eax
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t>::Node_t,short unsigned int> *m_pMemory; // r9
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t>::Node_t,short unsigned int> *v7; // r9

  m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
  if ( m_nAllocationCount != 0 )
  {
    v4 = 0;
    v5 = 0;
    while ( 1 )
    {
      if ( v5 < m_nAllocationCount && v5 <= this->m_mapLevelWorlds.m_Tree.m_LastAlloc.index )
      {
        m_pMemory = this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory;
        if ( m_pMemory[v5].m_Left != v5 )
        {
          v7 = &m_pMemory[v4];
          if ( v7->m_Data.elem.pPhysicsWorld == pWorld && v7->m_Data.elem.bNeedsDebugDraw != bEnableDraw )
            break;
        }
      }
      ++v5;
      ++v4;
      if ( v5 == m_nAllocationCount )
        return;
    }
    v7->m_Data.elem.bNeedsDebugDraw = bEnableDraw;
    CPhysicsGameSystem::UpdateDebugSceneSession(this, &v7->m_Data.elem);
  }
}


// CPhysicsGameSystem::CreateLevelWorld  (line 735, @0x0000000001f66a90, libserver.so)  // inlines: Element, FindInsertionPosition, GetFloat, Insert, InsertAt, LeftChild, Node_t, PhysicsWorld_t, RightChild, Vector, operator(), operator=, operator[]
// calls: CPhysicsGameSystem::UpdateLevelDebugRender, CUtlRBTree<CUtlMap<CUtlStringToken, CPhysicsGameSystem::PhysicsWorld_t>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, CPhysicsGameSystem::PhysicsWorld_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, CPhysicsGameSystem::PhysicsWorld_t>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<CUtlStringToken, CPhysicsGameSystem::PhysicsWorld_t>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, CPhysicsGameSystem::PhysicsWorld_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, CPhysicsGameSystem::PhysicsWorld_t>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, CGamePhysicsQueryInterface::SetWorld
// callers: CPhysicsGameSystem::GetOrCreateLevelWorld, CPhysicsGameSystem::GameInit
// strings: "Physics Debug World"
// globals: SoftbodyReloadCallback(IPhysicsSoftbody *)
IVPhysics2World *__fastcall CPhysicsGameSystem::CreateLevelWorld(
        CPhysicsGameSystem *const this,
        WorldGroupId_t id,
        const char *pDebugName)
{
  IVPhysics2World *v6; // r15
  void (__fastcall *v7)(IVPhysics2World *, CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t,short unsigned int,bool (*)(const CUtlStringToken&,const CUtlStringToken&)>::Node_t *); // rax
  float m_fValue; // xmm0_4
  const char *v9; // rsi
  ISceneWorld *v10; // r13
  unsigned __int16 m_Root; // r13
  unsigned __int16 m_Right; // ax
  char v13; // cl
  bool v14; // zf
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t>::Node_t,short unsigned int> *m_pMemory; // rax
  unsigned __int16 v16; // ax
  bool v18; // bl
  CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t,short unsigned int,bool (*)(const CUtlStringToken&,const CUtlStringToken&)>::Node_t pCopyFrom; // [rsp+10h] [rbp-60h] BYREF

  v6 = (*(g_pVPhysics2->_vptr_IAppSystem + 13))(g_pVPhysics2, id.m_nHashCode == 0 ? 2 : 10);
  (*(*v6 + 464LL))(v6, &this->IPhysicsWorldEventListener);
  (*(*v6 + 1632LL))(v6, SoftbodyReloadCallback);
  v7 = *(*v6 + 176LL);
  m_fValue = sv_gravity.m_pParent->m_Value.m_fValue;
  pCopyFrom.key.m_nHashCode = 0;
  *(&pCopyFrom.key + 1) = 0;
  *&pCopyFrom.elem._vptr_PhysicsWorld_t = -m_fValue;
  v7(v6, &pCopyFrom);
  if ( id.m_nHashCode == 0 )
    CGamePhysicsQueryInterface::SetWorld(g_pPhysicsQuery, v6);
  v9 = pDebugName;
  v10 = 0;
  (*(*v6 + 1448LL))(v6, v9);
  if ( g_pSceneSystem != 0 )
  {
    v10 = (*(*g_pSceneSystem + 304LL))(g_pSceneSystem, "Physics Debug World");
    (*(*v6 + 1384LL))(v6, v10);
    CPhysicsGameSystem::UpdateLevelDebugRender(this);
  }
  pCopyFrom.elem.pDebugSceneWorld = v10;
  m_Root = this->m_mapLevelWorlds.m_Tree.m_Root;
  pCopyFrom.elem._vptr_PhysicsWorld_t = off_3FCADD0;
  pCopyFrom.elem.bNeedsDebugDraw = 0;
  pCopyFrom.key = id;
  pCopyFrom.elem.pPhysicsWorld = v6;
  if ( m_Root != 0xFFFF )
  {
    while ( 1 )
    {
      v14 = !this->m_mapLevelWorlds.m_Tree.m_LessFunc.m_LessFunc(
               &pCopyFrom,
               &this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory[m_Root].m_Data);
      m_pMemory = this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory;
      if ( v14 )
      {
        m_Right = m_pMemory[m_Root].m_Right;
        v13 = 0;
        if ( m_Right == 0xFFFF )
        {
LABEL_11:
          v18 = v13;
          goto LABEL_12;
        }
      }
      else
      {
        m_Right = m_pMemory[m_Root].m_Left;
        v13 = 1;
        if ( m_Right == 0xFFFF )
          goto LABEL_11;
      }
      m_Root = m_Right;
    }
  }
  m_Root = -1;
  v18 = 0;
LABEL_12:
  v16 = CUtlRBTree<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short,CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
          &this->m_mapLevelWorlds.m_Tree,
          &pCopyFrom);
  CUtlRBTree<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short,CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
    &this->m_mapLevelWorlds.m_Tree,
    v16,
    m_Root,
    v18);
  ++this->m_mapLevelWorlds.m_Tree.m_NumElements;
  return v6;
}


// CPhysicsGameSystem::GetOrCreateLevelWorld  (line 774, @0x0000000001f66c70, libserver.so)  // inlines: CUtlString, DescribeSpawnGroupHandle, Element, Find, IsClientOnlySpawnGroup, Node_t, PhysicsWorld_t, SetPtr, operator=, operator[], ~CUtlString
// calls: CUtlRBTree<CUtlMap<CUtlStringToken, CPhysicsGameSystem::PhysicsWorld_t>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, CPhysicsGameSystem::PhysicsWorld_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, CPhysicsGameSystem::PhysicsWorld_t>::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlString::Format, CUtlString::FreeMemoryBlock, CSpawnGroupMgrGameSystem::GetSpawnGroupName, CUtlString::operator+=, CUtlString::operator=, CUtlString::Get, CPhysicsGameSystem::CreateLevelWorld, _Unwind_Resume
// callers: GravityChanged, CPhysicsGameSystem::LoadSpawnGroupPhysics, CPhysicsGameSystem::UnloadSpawnGroupPhysics, CPhysicsGameSystem::GameDeactivate, CPhysicsGameSystem::GetOrCreateLevelWorld, CEntityDebugGrab::GetWorld, CPhysicsGameSystem::GetIntersectionController, CEntityDebugGrab::~CEntityDebugGrab, ent_ungrab, StopDebugEntGrab, CUtlVectorBase<CEntityDebugGrab*, CUtlMemory<CEntityDebugGrab*, int> >::PurgeAndDeleteElements, ent_grab (14 total)
// strings: "SV"
// globals: g_pSpawnGroupMgr
IVPhysics2World *__fastcall CPhysicsGameSystem::GetOrCreateLevelWorld(
        CPhysicsGameSystem *const this,
        WorldGroupId_t id,
        SpawnGroupHandle_t hSpawnGroup)
{
  unsigned __int16 v6; // ax
  IVPhysics2World *result; // rax
  const char *SpawnGroupName; // rax
  const char *v9; // r13
  const char *v10; // rax
  IVPhysics2World *v11; // [rsp+8h] [rbp-78h]
  CUtlString name; // [rsp+10h] [rbp-70h] BYREF
  CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t,short unsigned int,bool (*)(const CUtlStringToken&,const CUtlStringToken&)>::Node_t search; // [rsp+20h] [rbp-60h] BYREF

  search.key = id;
  search.elem._vptr_PhysicsWorld_t = off_3FCADD0;
  memset(&search.elem.pPhysicsWorld, 0, 17);
  v6 = CUtlRBTree<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short,CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_mapLevelWorlds.m_Tree,
         &search);
  if ( v6 != 0xFFFF )
    return this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory[v6].m_Data.elem.pPhysicsWorld;
  name.m_pString = 0;
  if ( hSpawnGroup != 0 )
  {
    *&search.key.m_nHashCode = 0;
    if ( hSpawnGroup + 0x80000000 > 0x7FFFFFFE )
      CUtlString::Format(&search, "%u", hSpawnGroup);
    else
      CUtlString::Format(&search, &stru_32D9EEC.m_mapLevelWorlds.m_Tree.m_Elements.m_nGrowSize + 3);
    name.m_pString = *&search.key.m_nHashCode;
    SpawnGroupName = CSpawnGroupMgrGameSystem::GetSpawnGroupName(g_pSpawnGroupMgr, hSpawnGroup);
    v9 = SpawnGroupName;
    if ( SpawnGroupName != 0 && *SpawnGroupName != 0 )
    {
      CUtlString::operator+=(&name, ", ");
      CUtlString::operator+=(&name, v9);
    }
  }
  else
  {
    CUtlString::operator=(&name, "SV");
  }
  v10 = CUtlString::Get(&name);
  result = CPhysicsGameSystem::CreateLevelWorld(this, id, v10);
  if ( name.m_pString != 0 )
  {
    v11 = result;
    CUtlString::FreeMemoryBlock(&name);
    return v11;
  }
  return result;
}


// CPhysicsGameSystem::GetExistingLevelWorld  (line 800, @0x0000000001f41dc0, libserver.so)  // inlines: Element, Find, Node_t, PhysicsWorld_t, operator[]
// calls: CUtlRBTree<CUtlMap<CUtlStringToken, CPhysicsGameSystem::PhysicsWorld_t>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, CPhysicsGameSystem::PhysicsWorld_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, CPhysicsGameSystem::PhysicsWorld_t>::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CPhysicsGameSystem::OnBeginProcessing, CPhysicsGameSystem::OnEndProcessing, CPhysicsGameSystem::DestroyHierarchyConstraint, TimescaleChanged, phys_wakeup, phys_sleep, IterateActivePhysicsEntities, phys_list, CPhysicsGameSystem::CreateHierarchyConstraint, ray_bench, UTIL_TraceRayVerticalGroundHeight
IVPhysics2World *__fastcall CPhysicsGameSystem::GetExistingLevelWorld(
        CPhysicsGameSystem *const this,
        WorldGroupId_t id)
{
  unsigned __int16 v3; // ax
  CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t,short unsigned int,bool (*)(const CUtlStringToken&,const CUtlStringToken&)>::Node_t search; // [rsp+0h] [rbp-40h] BYREF

  search.key = id;
  search.elem._vptr_PhysicsWorld_t = off_3FCADD0;
  memset(&search.elem.pPhysicsWorld, 0, 17);
  v3 = CUtlRBTree<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short,CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_mapLevelWorlds.m_Tree,
         &search);
  if ( v3 == 0xFFFF )
    return 0;
  else
    return this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory[v3].m_Data.elem.pPhysicsWorld;
}


// CPhysicsGameSystem::GetOrCreateLevelWorld  (line 813, @0x0000000001f67970, libserver.so)  // inlines: GetSpawnGroupHandle
// calls: CPhysicsGameSystem::GetOrCreateLevelWorld
// callers: CBaseEntity::VPhysicsWorld
IVPhysics2World *__fastcall CPhysicsGameSystem::GetOrCreateLevelWorld(
        CPhysicsGameSystem *const this,
        const CBaseEntity *pEntity)
{
  CEntityIdentity *m_pEntity; // rax

  m_pEntity = pEntity->m_pEntity;
  if ( m_pEntity != 0 )
    return CPhysicsGameSystem::GetOrCreateLevelWorld(this, pEntity->m_worldGroupId, m_pEntity->m_hSpawnGroup);
  else
    return CPhysicsGameSystem::GetOrCreateLevelWorld(this, pEntity->m_worldGroupId, 0);
}


// CPhysicsGameSystem::GetLevelWorldList  (line 818, @0x0000000001f547e0, libserver.so)  // inlines: AddToTail, CopyConstruct<CUtlStringToken>, Element, GrowMemory, IsIdxValid, IsValidIndex, Key, LeftChild, operator[]
// calls: CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::RemoveAll, CUtlMemory<CUtlStringToken, int>::Grow
// callers: TimescaleChanged, phys_wakeup, phys_sleep, IterateActivePhysicsEntities, phys_list
void __fastcall CPhysicsGameSystem::GetLevelWorldList(
        CPhysicsGameSystem *const this,
        CUtlVector<CUtlStringToken,CUtlMemory<CUtlStringToken,int> > *pvecLevelWorlds)
{
  __int64 v4; // r12
  int v5; // ebx
  int m_nAllocationCount; // eax
  CUtlVectorBase<CUtlStringToken,CUtlMemory<CUtlStringToken,int> >::CAllocator *p_m_Memory; // r8
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t>::Node_t,short unsigned int> *m_pMemory; // rcx
  __int64 m_Size; // r15
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t>::Node_t,short unsigned int> *v10; // rcx
  int v11; // eax
  CUtlStringToken *v12; // rax
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t>::Node_t,short unsigned int> *v13; // [rsp+0h] [rbp-40h]
  CUtlVectorBase<CUtlStringToken,CUtlMemory<CUtlStringToken,int> >::CAllocator *v14; // [rsp+8h] [rbp-38h]

  v4 = 0;
  v5 = 0;
  CUtlVectorBase<CUtlStringToken,CUtlMemory<CUtlStringToken,int>>::RemoveAll(pvecLevelWorlds);
  m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
  p_m_Memory = &pvecLevelWorlds->m_Memory;
  if ( m_nAllocationCount != 0 )
  {
    do
    {
      if ( m_nAllocationCount > v5 && v5 <= this->m_mapLevelWorlds.m_Tree.m_LastAlloc.index )
      {
        m_pMemory = this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory;
        if ( m_pMemory[v5].m_Left != v5 )
        {
          m_Size = pvecLevelWorlds->m_Size;
          v10 = &m_pMemory[v4];
          v11 = pvecLevelWorlds->m_Size;
          if ( m_Size == pvecLevelWorlds->m_Memory.m_nAllocationCount )
          {
            v13 = v10;
            v14 = p_m_Memory;
            CUtlMemory<CUtlStringToken,int>::Grow(p_m_Memory, 1);
            v11 = pvecLevelWorlds->m_Size;
            v10 = v13;
            p_m_Memory = v14;
          }
          pvecLevelWorlds->m_Size = v11 + 1;
          v12 = &pvecLevelWorlds->m_Memory.m_pMemory[m_Size];
          if ( v12 != 0 )
            v12->m_nHashCode = v10->m_Data.key;
          m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
        }
      }
      ++v5;
      ++v4;
    }
    while ( m_nAllocationCount > v5 );
  }
}


// CPhysicsGameSystem::GetDebugSceneWorld  (line 828, @0x0000000001f41f10, libserver.so)  // inlines: Element, Find, Node_t, PhysicsWorld_t, operator[]
// calls: CUtlRBTree<CUtlMap<CUtlStringToken, CPhysicsGameSystem::PhysicsWorld_t>::Node_t, short unsigned int, CUtlMap<CUtlStringToken, CPhysicsGameSystem::PhysicsWorld_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, CPhysicsGameSystem::PhysicsWorld_t>::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CPhysicsGameSystem::CreateDebugRenderBuffers
ISceneWorld *__fastcall CPhysicsGameSystem::GetDebugSceneWorld(CPhysicsGameSystem *const this, WorldGroupId_t id)
{
  unsigned __int16 v3; // ax
  CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t,short unsigned int,bool (*)(const CUtlStringToken&,const CUtlStringToken&)>::Node_t search; // [rsp+0h] [rbp-40h] BYREF

  search.key = id;
  search.elem._vptr_PhysicsWorld_t = off_3FCADD0;
  memset(&search.elem.pPhysicsWorld, 0, 17);
  v3 = CUtlRBTree<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short,CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t,unsigned short,bool (*)(CUtlStringToken const&,CUtlStringToken const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_mapLevelWorlds.m_Tree,
         &search);
  if ( v3 == 0xFFFF )
    return 0;
  else
    return this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory[v3].m_Data.elem.pDebugSceneWorld;
}


// CPhysicsGameSystem::IsLevelAggregateInstance  (line 836, @0x0000000001f41f80, libserver.so)  // inlines: Element, FirstInorder, LeftChild, NextInorder, operator[]
// calls: CUtlRBTree<CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t, short unsigned int, CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t, short unsigned int>, short unsigned int> >::NextInorder
// callers: phys_list
bool __fastcall CPhysicsGameSystem::IsLevelAggregateInstance(
        const CPhysicsGameSystem *const this,
        IPhysAggregateInstance *pAgg)
{
  unsigned __int16 m_Root; // ax
  UtlRBTreeNode_t<CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t,short unsigned int> *m_pMemory; // rbx
  UtlRBTreeNode_t<CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t,short unsigned int> *v5; // rdx
  unsigned __int16 m_Left; // cx
  CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)> *p_m_PhysicsSpawnGroups; // r13

  m_Root = this->m_PhysicsSpawnGroups.m_Tree.m_Root;
  if ( m_Root == 0xFFFF )
    return 0;
  m_pMemory = this->m_PhysicsSpawnGroups.m_Tree.m_Elements.m_pMemory;
  v5 = &m_pMemory[m_Root];
  m_Left = v5->m_Left;
  if ( v5->m_Left != 0xFFFF )
  {
    while ( m_pMemory[m_Left].m_Left != 0xFFFF )
      m_Left = m_pMemory[m_Left].m_Left;
    v5 = &m_pMemory[m_Left];
    m_Root = m_Left;
  }
  if ( v5->m_Data.elem.m_pLevelAggregateInstance == pAgg )
    return 1;
  p_m_PhysicsSpawnGroups = &this->m_PhysicsSpawnGroups;
  while ( 1 )
  {
    m_Root = CUtlRBTree<CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
               &p_m_PhysicsSpawnGroups->m_Tree,
               m_Root);
    if ( m_Root == 0xFFFF )
      break;
    if ( m_pMemory[m_Root].m_Data.elem.m_pLevelAggregateInstance == pAgg )
      return 1;
  }
  return 0;
}


// CPhysicsGameSystem::GetLevelAggregateInstance  (line 846, @0x0000000001f42050, libserver.so)  // inlines: Element, FirstInorder, LeftChild, NextInorder, operator[]
// calls: CUtlRBTree<CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t, short unsigned int, CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t, short unsigned int>, short unsigned int> >::NextInorder
// callers: CEntity2SaveRestore::IsReadyToSave, CPhysSaveRestoreBlockHandler::Save, CPhysicsSpring::GetSpringObjectConnections, CPhysConstraint::GetConstraintObjects, CPhysSaveRestoreBlockHandler::Restore
IPhysAggregateInstance *__fastcall CPhysicsGameSystem::GetLevelAggregateInstance(const CPhysicsGameSystem *const this)
{
  IPhysAggregateInstance *m_pLevelAggregateInstance; // r13
  unsigned __int16 m_Root; // si
  UtlRBTreeNode_t<CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t,short unsigned int> *m_pMemory; // rbx
  UtlRBTreeNode_t<CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t,short unsigned int> *v4; // rax
  unsigned __int16 m_Left; // cx
  CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)> *p_m_PhysicsSpawnGroups; // r12
  IPhysAggregateInstance *result; // rax

  m_pLevelAggregateInstance = 0;
  m_Root = this->m_PhysicsSpawnGroups.m_Tree.m_Root;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = this->m_PhysicsSpawnGroups.m_Tree.m_Elements.m_pMemory;
    v4 = &m_pMemory[m_Root];
    m_Left = v4->m_Left;
    if ( v4->m_Left != 0xFFFF )
    {
      while ( 1 )
      {
        v4 = &m_pMemory[m_Left];
        if ( v4->m_Left == 0xFFFF )
          break;
        m_Left = v4->m_Left;
      }
      m_Root = m_Left;
    }
    m_pLevelAggregateInstance = v4->m_Data.elem.m_pLevelAggregateInstance;
    if ( m_pLevelAggregateInstance == 0 )
    {
      p_m_PhysicsSpawnGroups = &this->m_PhysicsSpawnGroups;
      while ( 1 )
      {
        m_Root = CUtlRBTree<CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                   &p_m_PhysicsSpawnGroups->m_Tree,
                   m_Root);
        if ( m_Root == 0xFFFF )
          break;
        result = m_pMemory[m_Root].m_Data.elem.m_pLevelAggregateInstance;
        if ( result != 0 )
          return result;
      }
    }
  }
  return m_pLevelAggregateInstance;
}


// CPhysicsGameSystem::GetIntersectionController  (line 857, @0x0000000001f679a0, libserver.so)
// calls: CPhysicsGameSystem::GetOrCreateLevelWorld
// callers: CPhysicsGameSystem::InitializeStandardCollisionRules, CPhysicsGameSystem::ShouldGroupsCollide, CPhysicsGameSystem::ShouldHitQuery, phys_dump_intersection_controller
IPhysIntersectionController *__fastcall CPhysicsGameSystem::GetIntersectionController(CPhysicsGameSystem *const this)
{
  IVPhysics2World *LevelWorld; // rax

  LevelWorld = CPhysicsGameSystem::GetOrCreateLevelWorld(this, 0, 0);
  return (*(*LevelWorld + 144LL))(LevelWorld);
}


// CPhysicsGameSystem::GetIntersectionDictionary  (line 864, @0x0000000001f36530, libserver.so)
// callers: CFuncInteractionLayerClip::CreateVPhysics
IPhysIntersectionDictionary *__cdecl CPhysicsGameSystem::GetIntersectionDictionary()
{
  return (*(g_pVPhysics2->_vptr_IAppSystem + 19))(g_pVPhysics2);
}


// CPhysicsGameSystem::PullKinematicTransformsWorker  (line 877, @0x0000000001f56270, libserver.so)  // inlines: Add, CVProfScope, CalcAbsolutePosition, GetAbsOrigin, GetBool, GetDebugName, GetInt, GetString, GetTimebaseRegister, IsEnabled, Load, MarkForKinematicUpdate, PLAT_CPU_TIME, UpdateDebugRenderables, ~CVProfScope
// calls: UpdateDirtySpatialPartitionEntities, CEntityIdentity::GetDebugName, V_stristr_fast(char const*,char const*), CGameSceneNode::CalcAbsolutePositionWhenDirty, Msg, CSkeletonInstance::SetupBones, CPhysicsGameSystem::ForceUpdateIfKeyframed, CVProfile::ExitScope, CHitboxSystem::DebugDrawHitboxes, CVProfile::EnterScope, _Unwind_Resume
// callers: CPhysicsGameSystem::OnSimulate
// strings: "FCVAR_NEVER_AS_STRING", "Pulling Kinematic %s {%g,%g,%g}\n", "Server Physics", "CPhysicsGameSystem::PullKinematicTransformsWorker"
int __fastcall CPhysicsGameSystem::PullKinematicTransformsWorker(
        CPhysicsGameSystem *const this,
        int nWorkCount,
        CSkeletonInstance **ppSkeletonInstances)
{
  int m_enabled; // r10d
  char *m_pszString; // rax
  CSkeletonInstance **v6; // rbx
  CEntityInstance *m_pOwner; // rax
  const char *DebugName; // r13
  float *v9; // r12
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r12
  CSkeletonInstance *v12; // rsi
  unsigned __int64 v13; // rax
  PhysicsGlobalProfiler::Stats_t *m_GlobalProfilerStats; // rcx
  uint64 m_numTimeBaseTicks; // rsi
  bool VProf_879; // [rsp+Bh] [rbp-45h]
  char *v20; // [rsp+18h] [rbp-38h]

  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_879 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(
      &g_VProfCurrentProfile,
      "CPhysicsGameSystem::PullKinematicTransformsWorker",
      0,
      "Server Physics",
      0,
      4);
  UpdateDirtySpatialPartitionEntities();
  v20 = "FCVAR_NEVER_AS_STRING";
  if ( (phys_tracker.m_nFlags & 0x1000) == 0 )
  {
    m_pszString = phys_tracker.m_pParent->m_Value.m_pszString;
    if ( m_pszString == 0 )
      m_pszString = "";
    v20 = m_pszString;
  }
  if ( *v20 != 0 && nWorkCount > 0 )
  {
    v6 = ppSkeletonInstances;
    do
    {
      m_pOwner = (*v6)->m_pOwner;
      if ( m_pOwner != 0 )
      {
        DebugName = CEntityIdentity::GetDebugName(m_pOwner->m_pEntity);
        if ( V_stristr_fast(DebugName, v20) != 0 )
        {
          v9 = *v6;
          if ( (*v6)->m_bDirtyAbsTransform.m_value )
            CGameSceneNode::CalcAbsolutePositionWhenDirty(*v6);
          Msg("Pulling Kinematic %s {%g,%g,%g}\n", DebugName, v9[54], v9[55], v9[56]);
        }
      }
      ++v6;
    }
    while ( v6 != &ppSkeletonInstances[(nWorkCount - 1) + 1] );
  }
  CSkeletonInstance::SetupBones(nWorkCount, ppSkeletonInstances, CModelSkeleton::BoneFlags_t::FLAG_PHYSICS, 1);
  if ( nWorkCount > 0 )
  {
    v10 = 0;
    do
    {
      v11 = __rdtsc();
      v12 = ppSkeletonInstances[v10 / 8];
      *(v12 + 722) &= ~8u;
      CPhysicsGameSystem::ForceUpdateIfKeyframed(
        this,
        v12,
        CPhysicsGameSystem::anim_update_t::UPDATE_ANIMATED_OBJECTS,
        0);
      v13 = __rdtsc();
      m_GlobalProfilerStats = this->m_GlobalProfilerStats;
      v10 += 8LL;
      m_numTimeBaseTicks = m_GlobalProfilerStats->m_profilers[24].m_numTimeBaseTicks;
      m_GlobalProfilerStats->m_profilers[24].m_numCalls += nWorkCount;
      m_GlobalProfilerStats->m_profilers[24].m_numTimeBaseTicks = m_numTimeBaseTicks
                                                                - v11
                                                                + (v13 | (HIDWORD(v13) << 32));
    }
    while ( v10 != 8LL * (nWorkCount - 1) + 8 );
  }
  if ( sv_hitbox_debug.m_pParent->m_Value.m_nValue != 0 )
    CHitboxSystem::DebugDrawHitboxes(&g_HitboxSystem);
  if ( VProf_879 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  return nWorkCount;
}


// CPhysicsGameSystem::UpdateDebugRenderables  (line 926, @0x0000000001f36550, libserver.so)  // inlines: GetBool, GetInt
// calls: CHitboxSystem::DebugDrawHitboxes
void __fastcall CPhysicsGameSystem::UpdateDebugRenderables(
        CPhysicsGameSystem *const this,
        int nWorkCount,
        CSkeletonInstance **ppSkeletonInstances)
{
  if ( sv_hitbox_debug.m_pParent->m_Value.m_nValue != 0 )
    CHitboxSystem::DebugDrawHitboxes(&g_HitboxSystem);
}


// DiffFromIdentity  (line 939, @0x0000000001f36580, libserver.so)
float __fastcall DiffFromIdentity(const matrix3x4_t *const m)
{
  int v1; // edx
  float result; // xmm0_4
  __int64 i; // rax
  float v4; // xmm1_4

  v1 = 0;
  result = 0.0;
  do
  {
    for ( i = 0; i != 4; ++i )
    {
      v4 = m->m_flMatVal[0][i];
      if ( v1 == i )
        v4 = v4 - 1.0;
      result = fmaxf(result, fabs(v4));
    }
    ++v1;
    m = (m + 16);
  }
  while ( v1 != 3 );
  return result;
}


// CPhysicsGameSystem::PushDynamicTransformsWorker  (line 958, @0x0000000001f566d0, libserver.so)  // inlines: Add, AddToTail, CTransform, CUtlMemory, CUtlVector, CUtlVectorBase, CalcAbsolutePosition, CopyConstruct<CSkeletonInstance*>, Element, GetAbsScale, GetBool, GetInt, GetTimebaseRegister, GrowMemory, Load, PLAT_CPU_TIME, Purge, RemoveAll, ScaleUpper3x3Matrix, TransformMatrix, UpdateDebugRenderables, Vector, VectorAligned, memcpy, operator*, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CSkeletonInstance::FindBoneIndexForPhysicsBoneIndex, CSkeletonInstance::GetAnimationStateWorldSpaceTransform, MatrixInvertTR, TransformMatrix, ConcatTransforms, CGameSceneNode::SetNodeToWorldTransform, CGameSceneNode::CalcAbsolutePositionWhenDirty, QuaternionMatrix, CUtlMemory<CSkeletonInstance*, int>::Grow, CHitboxSystem::DebugDrawHitboxes, CUtlMemory<CSkeletonInstance*, int>::Purge, CUtlVectorBase<CSkeletonInstance*, CUtlMemory<CSkeletonInstance*, int> >::~CUtlVectorBase (13 total)
// callers: CPhysicsGameSystem::OnSimulate
void __fastcall CPhysicsGameSystem::PushDynamicTransformsWorker(
        CPhysicsGameSystem *const this,
        VPhysXWorldStepResults *pResults)
{
  int m_Size; // ebx
  __int64 v4; // r15
  CSkeletonInstance *v5; // r12
  IPhysAggregateInstance *m_pVPhysicsAggregate; // rbx
  __int64 v7; // r13
  int v8; // eax
  CSkeletonInstance **v9; // rax
  __int64 v10; // rax
  int m_nAllocationCount; // eax
  int BoneIndexForPhysicsBoneIndex; // r13d
  float m_flAbsScale; // xmm0_4
  matrix3x4a_t *p_mEntityToWorld; // rax
  float v15; // xmm1_4
  unsigned __int64 v16; // rax
  PhysicsGlobalProfiler::Stats_t *m_GlobalProfilerStats; // rcx
  uint64 m_numTimeBaseTicks; // rsi
  bool v19; // zf
  unsigned __int64 v21; // [rsp+10h] [rbp-190h]
  const CPhysAggregateData *pData; // [rsp+30h] [rbp-170h]
  int nSkeleton; // [rsp+3Ch] [rbp-164h]
  CUtlVector<CSkeletonInstance*,CUtlMemory<CSkeletonInstance*,int> > dynamic_updaters; // [rsp+40h] [rbp-160h] BYREF
  CTransform physBoneToWorld; // [rsp+60h] [rbp-140h] BYREF
  matrix3x4a_t rootToWorld; // [rsp+80h] [rbp-120h]
  matrix3x4a_t animBoneToRoot; // [rsp+B0h] [rbp-F0h] BYREF
  matrix3x4a_t animRootToBone; // [rsp+E0h] [rbp-C0h] BYREF
  CTransform entityToWorld; // [rsp+110h] [rbp-90h] BYREF
  matrix3x4a_t mEntityToWorld; // [rsp+140h] [rbp-60h] BYREF
  char v31; // [rsp+170h] [rbp-30h] BYREF

  m_Size = pResults->m_awake.m_Size;
  dynamic_updaters.m_Size = 0;
  v21 = __rdtsc();
  dynamic_updaters.m_Memory.m_pMemory = 0;
  dynamic_updaters.m_Memory.m_nAllocationCount = 0;
  dynamic_updaters.m_Memory.m_nGrowSize = 0;
  if ( m_Size > 0 )
  {
    v4 = 0;
    nSkeleton = 0;
    do
    {
      v5 = pResults->m_awake.m_Memory.m_pMemory[v4];
      m_pVPhysicsAggregate = v5->m_modelState.m_pVPhysicsAggregate;
      pData = (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 41))(m_pVPhysicsAggregate);
      if ( (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 26))(m_pVPhysicsAggregate) != 2 )
      {
        v7 = dynamic_updaters.m_Size;
        v8 = dynamic_updaters.m_Size;
        if ( dynamic_updaters.m_Size == dynamic_updaters.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CSkeletonInstance *,int>::Grow(&dynamic_updaters.m_Memory, 1);
          v8 = dynamic_updaters.m_Size;
        }
        dynamic_updaters.m_Size = v8 + 1;
        v9 = &dynamic_updaters.m_Memory.m_pMemory[v7];
        if ( v9 != 0 )
          *v9 = v5;
        if ( v5->m_nHierarchyType == 0 )
        {
          v10 = (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 10))(m_pVPhysicsAggregate, 0);
          if ( (*(*v10 + 40LL))(v10) == 2 )
          {
            m_nAllocationCount = pData->m_BonesHash.m_nAllocationCount;
            if ( m_nAllocationCount != 0 )
            {
              if ( m_nAllocationCount == 1 )
              {
                BoneIndexForPhysicsBoneIndex = CSkeletonInstance::FindBoneIndexForPhysicsBoneIndex(v5, 0);
                if ( BoneIndexForPhysicsBoneIndex < 0 )
                {
                  entityToWorld.m_vPosition.w = 0.0;
                  (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 37))(m_pVPhysicsAggregate, &entityToWorld);
                  if ( v5->m_bDirtyAbsTransform.m_value )
                    CGameSceneNode::CalcAbsolutePositionWhenDirty(v5);
                  animRootToBone.m_flMatVal[0][0] = v5->m_flAbsScale;
                  animRootToBone.m_flMatVal[0][1] = animRootToBone.m_flMatVal[0][0];
                  animRootToBone.m_flMatVal[0][2] = animRootToBone.m_flMatVal[0][0];
                  QuaternionMatrix(
                    &entityToWorld.m_orientation,
                    &entityToWorld.m_vPosition,
                    &animRootToBone,
                    &mEntityToWorld);
                  CGameSceneNode::SetNodeToWorldTransform(v5, &mEntityToWorld, 0);
                }
                else
                {
                  physBoneToWorld.m_vPosition.w = 0.0;
                  (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 37))(m_pVPhysicsAggregate, &physBoneToWorld);
                  CSkeletonInstance::GetAnimationStateWorldSpaceTransform(
                    &animBoneToRoot,
                    v5,
                    &g_MatrixIdentity,
                    BoneIndexForPhysicsBoneIndex);
                  MatrixInvertTR(&animBoneToRoot, &animRootToBone);
                  TransformMatrix(&physBoneToWorld, &entityToWorld);
                  ConcatTransforms(&entityToWorld, &animRootToBone, &mEntityToWorld);
                  rootToWorld = mEntityToWorld;
                  if ( v5->m_bDirtyAbsTransform.m_value )
                    CGameSceneNode::CalcAbsolutePositionWhenDirty(v5);
                  m_flAbsScale = v5->m_flAbsScale;
                  mEntityToWorld = rootToWorld;
                  p_mEntityToWorld = &mEntityToWorld;
                  do
                  {
                    v15 = p_mEntityToWorld->m_flMatVal[0][0];
                    p_mEntityToWorld = (p_mEntityToWorld + 16);
                    p_mEntityToWorld[-1].m_flMatVal[2][0] = v15 * m_flAbsScale;
                    p_mEntityToWorld[-1].m_flMatVal[2][1] = p_mEntityToWorld[-1].m_flMatVal[2][1] * m_flAbsScale;
                    p_mEntityToWorld[-1].m_flMatVal[2][2] = p_mEntityToWorld[-1].m_flMatVal[2][2] * m_flAbsScale;
                  }
                  while ( p_mEntityToWorld != &v31 );
                  CGameSceneNode::SetNodeToWorldTransform(v5, &mEntityToWorld, 0);
                }
              }
            }
            else
            {
              entityToWorld.m_vPosition.w = 0.0;
              (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 37))(m_pVPhysicsAggregate, &entityToWorld);
              if ( v5->m_bDirtyAbsTransform.m_value )
                CGameSceneNode::CalcAbsolutePositionWhenDirty(v5);
              animBoneToRoot.m_flMatVal[0][0] = v5->m_flAbsScale;
              animBoneToRoot.m_flMatVal[0][1] = animBoneToRoot.m_flMatVal[0][0];
              animBoneToRoot.m_flMatVal[0][2] = animBoneToRoot.m_flMatVal[0][0];
              QuaternionMatrix(
                &entityToWorld.m_orientation,
                &entityToWorld.m_vPosition,
                &animBoneToRoot,
                &mEntityToWorld);
              CGameSceneNode::SetNodeToWorldTransform(v5, &mEntityToWorld, 0);
            }
          }
        }
        if ( *((*(v5->m_modelState.m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 41))(v5->m_modelState.m_pVPhysicsAggregate)
             + 32) > 1 )
          (*(v5->_vptr_CGameSceneNode + 11))(v5, 128);
      }
      ++nSkeleton;
      ++v4;
    }
    while ( pResults->m_awake.m_Size > nSkeleton );
  }
  if ( sv_hitbox_debug.m_pParent->m_Value.m_nValue != 0 )
    CHitboxSystem::DebugDrawHitboxes(&g_HitboxSystem);
  v16 = __rdtsc();
  m_GlobalProfilerStats = this->m_GlobalProfilerStats;
  m_numTimeBaseTicks = m_GlobalProfilerStats->m_profilers[23].m_numTimeBaseTicks;
  m_GlobalProfilerStats->m_profilers[23].m_numCalls += dynamic_updaters.m_Size;
  v19 = (dynamic_updaters.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  m_GlobalProfilerStats->m_profilers[23].m_numTimeBaseTicks = m_numTimeBaseTicks - v21 + (v16 | (HIDWORD(v16) << 32));
  if ( v19 )
  {
    CUtlMemory<CSkeletonInstance *,int>::Purge(&dynamic_updaters.m_Memory);
    if ( (dynamic_updaters.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CSkeletonInstance *,int>::Purge(&dynamic_updaters.m_Memory);
  }
}


// RunDiagnosticsCallbacks  (line 1078, @0x0000000001f365d0, libserver.so)  // inlines: Purge, RemoveAll
// calls: CUtlMemory<void (*)(), int>::Purge
// callers: CPhysicsGameSystem::OnSimulate
// globals: g_DiagnosticsCallbacks
void __cdecl RunDiagnosticsCallbacks()
{
  __int64 v0; // r12
  int i; // ebx

  v0 = 0;
  for ( i = 0; g_DiagnosticsCallbacks.m_Size > i; ++v0 )
  {
    ++i;
    g_DiagnosticsCallbacks.m_Memory.m_pMemory[v0]();
  }
  g_DiagnosticsCallbacks.m_Size = 0;
  if ( (g_DiagnosticsCallbacks.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<void (*)(void),int>::Purge(&g_DiagnosticsCallbacks.m_Memory);
}


// CPhysicsGameSystem::ProcessQueuedBecomeRagdollOnClientRequests  (line 1099, @0x0000000001f36640, libserver.so)
void __fastcall CPhysicsGameSystem::ProcessQueuedBecomeRagdollOnClientRequests(CPhysicsGameSystem *const this)
{
  ;
}


// CPhysicsGameSystem::FrameBoundary  (line 1122, @0x0000000001f41ef0, libserver.so)  // inlines: OnBeginProcessing, OnEndProcessing
// calls: CPhysicsGameSystem::OnEndProcessing, CPhysicsGameSystem::OnBeginProcessing
void __fastcall CPhysicsGameSystem::FrameBoundary(
        CPhysicsGameSystem *const this,
        const EventGameFrameBoundary_t *const msg)
{
  WorldGroupId_t *v3; // rsi

  CPhysicsGameSystem::OnEndProcessing(this, msg);
  CPhysicsGameSystem::OnBeginProcessing(this, v3);
}


// CPhysicsGameSystem::FrameUpdatePostEntityThink  (line 1131, @0x0000000001f6c3c0, libserver.so)
// calls: CPhysicsGameSystem::OnSimulate
void __fastcall CPhysicsGameSystem::FrameUpdatePostEntityThink(
        CPhysicsGameSystem *const this,
        const EventServerPostEntityThink_t *const msg)
{
  CPhysicsGameSystem::OnSimulate(this, msg->m_bFirstTick, msg->m_bLastTick);
}


// CPhysicsGameSystem::Update  (line 1136, @0x0000000001f6c3e0, libserver.so)
// calls: CPhysicsGameSystem::OnSimulate
void __fastcall CPhysicsGameSystem::Update(CPhysicsGameSystem *const this, const EventClientUpdate_t *const msg)
{
  CPhysicsGameSystem::OnSimulate(this, msg->m_bFirstTick, msg->m_bLastTick);
}


// CPhysicsGameSystem::OnSimulate  (line 1141, @0x0000000001f6c060, libserver.so)  // inlines: Add, CUtlMemory, CUtlVector, CUtlVectorBase, CVProfScope, GetBool, GetInt, GetTimebaseRegister, IsEnabled, IsIdxValid, IsValidIndex, LeftChild, PLAT_CPU_TIME, Purge, RemoveAll, VPhysXWorldStepResults, end, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVProfScope, ~VPhysXWorldStepResults
// calls: CPhysicsGameSystem::ProcessScaleChanges, UpdateDebugEntGrab, CPhysicsGameSystem::OnBatchClear, UpdateDirtySpatialPartitionEntities, CPhysicsGameSystem::PullKinematicTransformsWorker, CPhysicsGameSystem::UpdateHierarchyJoint, RunDiagnosticsCallbacks, CPhysicsGameSystem::PullSoftbodyTransforms, CPhysicsGameSystem::StartSimulateFrame, CPhysicsGameSystem::FinishSimulateFrame, CPhysicsGameSystem::PushDynamicTransformsWorker, CPhysicsGameSystem::ProcessUpdaterStatusChanges (17 total)
// callers: CPhysicsGameSystem::FrameUpdatePostEntityThink, CPhysicsGameSystem::Update
// strings: "Server Physics", "CPhysicsGameSystem::OnSimulate"
void __fastcall CPhysicsGameSystem::OnSimulate(CPhysicsGameSystem *const this, bool bFirstTick, bool bLastTick)
{
  int m_enabled; // ebx
  bool v5; // r15
  unsigned __int64 v6; // r14
  int m_nAllocationCount; // eax
  __int64 v8; // r12
  int v9; // ebx
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t>::Node_t,short unsigned int> *m_pMemory; // rcx
  __int64 v11; // rax
  __int64 m_Size; // r12
  CSkeletonInstance **v13; // rbx
  CSkeletonInstance **i; // r12
  unsigned __int64 v15; // rax
  PhysicsGlobalProfiler::Stats_t *m_GlobalProfilerStats; // rcx
  uint64 m_numTimeBaseTicks; // rsi
  VPhysXWorldStepResults simulationResults; // [rsp+10h] [rbp-80h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v5 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CPhysicsGameSystem::OnSimulate", 0, "Server Physics", 0, 4);
  v6 = __rdtsc();
  CPhysicsGameSystem::ProcessScaleChanges(this);
  UpdateDebugEntGrab();
  CPhysicsGameSystem::OnBatchClear(this);
  m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
  v8 = 0;
  v9 = 0;
  if ( m_nAllocationCount != 0 )
  {
    do
    {
      if ( m_nAllocationCount > v9 && v9 <= this->m_mapLevelWorlds.m_Tree.m_LastAlloc.index )
      {
        m_pMemory = this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory;
        if ( m_pMemory[v9].m_Left != v9 )
        {
          v11 = *m_pMemory[v8].m_Data.elem.pPhysicsWorld;
          if ( phys_sleep_enable.m_pParent->m_Value.m_nValue != 0 )
            (*(v11 + 624))();
          else
            (*(v11 + 632))();
          m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
        }
      }
      ++v9;
      ++v8;
    }
    while ( m_nAllocationCount > v9 );
  }
  m_Size = 0;
  if ( gpGlobals != 0 )
  {
    UpdateDirtySpatialPartitionEntities();
    CPhysicsGameSystem::PullKinematicTransformsWorker(
      this,
      this->m_kinematicsToUpdate.m_Size,
      this->m_kinematicsToUpdate.m_Memory.m_pMemory);
    v13 = this->m_hierarchyJointsToUpdate.m_Memory.m_pMemory;
    this->m_kinematicsToUpdate.m_Size = 0;
    for ( i = &v13[this->m_hierarchyJointsToUpdate.m_Size]; i != v13; ++v13 )
      CPhysicsGameSystem::UpdateHierarchyJoint(this, *v13);
    this->m_hierarchyJointsToUpdate.m_Size = 0;
    RunDiagnosticsCallbacks();
    CPhysicsGameSystem::PullSoftbodyTransforms(this);
    CPhysicsGameSystem::StartSimulateFrame(this);
    simulationResults.m_wokeup.m_Size = 0;
    memset(&simulationResults.m_wokeup.m_Memory, 0, 20);
    memset(&simulationResults.m_asleep.m_Memory, 0, 20);
    simulationResults.m_awake.m_Memory.m_pMemory = 0;
    simulationResults.m_awake.m_Memory.m_nAllocationCount = 0;
    simulationResults.m_awake.m_Memory.m_nGrowSize = 0;
    CPhysicsGameSystem::FinishSimulateFrame(this, &simulationResults);
    CPhysicsGameSystem::PushDynamicTransformsWorker(this, &simulationResults);
    CPhysicsGameSystem::ProcessUpdaterStatusChanges(this, &simulationResults);
    m_Size = simulationResults.m_awake.m_Size;
    CPhysicsGameSystem::OnBatchClear(this);
    simulationResults.m_awake.m_Size = 0;
    if ( (simulationResults.m_awake.m_Memory.m_nGrowSize & 0xC0000000) != 0
      || (CUtlMemory<void *,int>::Purge(&simulationResults.m_awake.m_Memory),
          (simulationResults.m_awake.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
    {
      simulationResults.m_asleep.m_Size = 0;
      if ( (simulationResults.m_asleep.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
        goto LABEL_18;
    }
    else
    {
      CUtlMemory<void *,int>::Purge(&simulationResults.m_awake.m_Memory);
      simulationResults.m_asleep.m_Size = 0;
      if ( (simulationResults.m_asleep.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
        goto LABEL_18;
    }
    CUtlMemory<void *,int>::Purge(&simulationResults.m_asleep.m_Memory);
    if ( (simulationResults.m_asleep.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<void *,int>::Purge(&simulationResults.m_asleep.m_Memory);
      simulationResults.m_wokeup.m_Size = 0;
      if ( (simulationResults.m_wokeup.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
        goto LABEL_19;
      goto LABEL_22;
    }
LABEL_18:
    simulationResults.m_wokeup.m_Size = 0;
    if ( (simulationResults.m_wokeup.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      goto LABEL_19;
LABEL_22:
    CUtlMemory<void *,int>::Purge(&simulationResults.m_wokeup.m_Memory);
    if ( (simulationResults.m_wokeup.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<void *,int>::Purge(&simulationResults.m_wokeup.m_Memory);
  }
LABEL_19:
  v15 = __rdtsc();
  m_GlobalProfilerStats = this->m_GlobalProfilerStats;
  m_numTimeBaseTicks = m_GlobalProfilerStats->m_profilers[25].m_numTimeBaseTicks;
  m_GlobalProfilerStats->m_profilers[25].m_numCalls += m_Size;
  m_GlobalProfilerStats->m_profilers[25].m_numTimeBaseTicks = m_numTimeBaseTicks - v6 + (v15 | (HIDWORD(v15) << 32));
  if ( v5 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// PlaySoundEventAtPosition  (line 1215, @0x0000000001f6cef0, libserver.so)  // inlines: AllocateData, CPASFilter, CSosFieldData, CSosFieldDataFloat, CSosFieldDataFloat3, ClearData, CopyData, GetDataPtr, Init, SetValue, V_memcpy, memcpy, ~CPASFilter, ~CSosFieldData, ~CSosFieldDataFloat, ~CSosFieldDataFloat3
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CSoundOpGameSystem::StartSoundEvent, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CRecipientFilter::~CRecipientFilter, operator new [], __stack_chk_fail, CSosFieldData::ClearData, _Unwind_Resume
// callers: CPhysicsGameSystem::PreClientUpdate
// strings: "volume_atten"
// globals: g_pSoundOpGameSystem
SndOpEventGuid_t __fastcall PlaySoundEventAtPosition(const char *pSoundEvent, const Vector *const vPos, float flVolume)
{
  __m128i z_low; // xmm1
  SndOpEventGuid_t v6; // r12
  __m128i y_low; // xmm2
  vec_t x; // xmm3_4
  int v9; // r14d
  int v10; // r15d
  SosFieldValueMem_t *v11; // rax
  vec_t v12; // [rsp+Ch] [rbp-1B4h]
  CSosFieldData v13; // [rsp+10h] [rbp-1B0h] BYREF
  CSosFieldData fieldData; // [rsp+30h] [rbp-190h] BYREF
  CPASFilter filter; // [rsp+50h] [rbp-170h] BYREF
  unsigned __int64 v16; // [rsp+188h] [rbp-38h]
  SndOpEventGuid_t started; // 0:rax.8

  v16 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(&filter, vPos);
  started = CSoundOpGameSystem::StartSoundEvent(g_pSoundOpGameSystem, &filter, pSoundEvent, 0, -1, 0.0);
  z_low = LODWORD(vPos->z);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  v6 = started;
  y_low = LODWORD(vPos->y);
  fieldData.m_nAllocSize = 0;
  x = vPos->x;
  v9 = _mm_cvtsi128_si32(z_low);
  fieldData.m_pData = 0;
  v10 = _mm_cvtsi128_si32(y_low);
  v12 = x;
  fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 10);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT_3;
  v11 = operator new[](0xCu);
  fieldData.m_pData = v11;
  fieldData.m_nAllocSize = 12;
  *(v11 + 1) = v10;
  *(v11 + 2) = v9;
  *v11 = v12;
  CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, &filter, v6, "position", &fieldData, 0, 0);
  if ( fieldData.m_nAllocSize > 8 && fieldData.m_pData != 0 )
    operator delete[](fieldData.m_pData);
  v13.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  v13.m_nAllocSize = 0;
  v13.m_pData = 0;
  v13.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
  v13.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
  v13.m_nAllocSize = 4;
  LODWORD(v13.m_pData) = 1065353216;
  CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, &filter, v6, "volume_atten", &v13, 0, 0);
  if ( v13.m_nAllocSize > 8 && v13.m_pData != 0 )
    operator delete[](v13.m_pData);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
  return v6;
}


// PlayImpactSoundEventAtPosition  (line 1224, @0x0000000001f6a580, libserver.so)  // inlines: AllocateData, CPASFilter, CSosFieldData, CSosFieldDataFloat, CSosFieldDataFloat3, ClearData, CopyData, GetDataPtr, Init, SetValue, V_memcpy, memcpy, ~CPASFilter, ~CSosFieldData, ~CSosFieldDataFloat, ~CSosFieldDataFloat3
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CSoundOpGameSystem::StartSoundEvent, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CRecipientFilter::~CRecipientFilter, operator new [], __stack_chk_fail, CSosFieldData::ClearData, _Unwind_Resume
// callers: CPhysicsGameSystem::PreClientUpdate
// strings: "volume_atten", "impact_speed_input", "impact_surface_hardness_input"
// globals: g_pSoundOpGameSystem
SndOpEventGuid_t __fastcall PlayImpactSoundEventAtPosition(
        const char *pSoundEvent,
        const Vector *const vPos,
        float a3,
        float flVolume,
        float flImpactSpeed,
        float flSurfaceHardness)
{
  __m128i z_low; // xmm3
  SndOpEventGuid_t v9; // r14
  vec_t y; // xmm4_4
  int v11; // r15d
  float *m_pData; // rax
  float *p_m_pData; // rax
  float *v14; // rax
  SosFieldValueMem_t *v15; // rax
  vec_t v19; // [rsp+1Ch] [rbp-1F4h]
  CSosFieldData fieldData; // [rsp+20h] [rbp-1F0h] BYREF
  CSosFieldData v21; // [rsp+40h] [rbp-1D0h] BYREF
  CSosFieldData v22; // [rsp+60h] [rbp-1B0h] BYREF
  CSosFieldData v23; // [rsp+80h] [rbp-190h] BYREF
  CPASFilter filter; // [rsp+A0h] [rbp-170h] BYREF
  unsigned __int64 v25; // [rsp+1D8h] [rbp-38h]
  SndOpEventGuid_t started; // 0:rax.8

  v25 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(&filter, vPos);
  started = CSoundOpGameSystem::StartSoundEvent(g_pSoundOpGameSystem, &filter, pSoundEvent, 0, -1, 0.0);
  z_low = LODWORD(vPos->z);
  v9 = started;
  y = vPos->y;
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  *&pSoundEvent = vPos->x;
  v11 = _mm_cvtsi128_si32(z_low);
  fieldData.m_nAllocSize = 0;
  v19 = y;
  fieldData.m_pData = 0;
  fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 10);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT_3;
  v15 = operator new[](0xCu);
  fieldData.m_pData = v15;
  fieldData.m_nAllocSize = 12;
  *v15 = pSoundEvent;
  *(v15 + 2) = v11;
  *(v15 + 1) = v19;
  CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, &filter, v9, "position", &fieldData, 0, 0);
  if ( fieldData.m_nAllocSize > 8 && fieldData.m_pData != 0 )
    operator delete[](fieldData.m_pData);
  v21.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  v21.m_nAllocSize = 0;
  v21.m_pData = 0;
  v21.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
  v21.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
  if ( v21.m_nAllocSize <= 3 )
  {
    v21.m_nAllocSize = 4;
  }
  else if ( v21.m_nAllocSize > 8 )
  {
    m_pData = v21.m_pData;
    if ( v21.m_pData == 0 )
      goto LABEL_8;
    goto LABEL_7;
  }
  m_pData = &v21.m_pData;
LABEL_7:
  *m_pData = a3;
LABEL_8:
  CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, &filter, v9, "volume_atten", &v21, 0, 0);
  if ( v21.m_nAllocSize > 8 && v21.m_pData != 0 )
    operator delete[](v21.m_pData);
  v22.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  v22.m_nAllocSize = 0;
  v22.m_pData = 0;
  v22.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
  v22.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
  if ( v22.m_nAllocSize <= 3 )
  {
    v22.m_nAllocSize = 4;
  }
  else if ( v22.m_nAllocSize > 8 )
  {
    p_m_pData = v22.m_pData;
    if ( v22.m_pData == 0 )
      goto LABEL_15;
    goto LABEL_14;
  }
  p_m_pData = &v22.m_pData;
LABEL_14:
  *p_m_pData = flVolume;
LABEL_15:
  CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, &filter, v9, "impact_speed_input", &v22, 0, 1);
  if ( v22.m_nAllocSize > 8 && v22.m_pData != 0 )
    operator delete[](v22.m_pData);
  v23.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  v23.m_nAllocSize = 0;
  v23.m_pData = 0;
  v23.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
  v23.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
  if ( v23.m_nAllocSize <= 3 )
  {
    v23.m_nAllocSize = 4;
  }
  else if ( v23.m_nAllocSize > 8 )
  {
    v14 = v23.m_pData;
    if ( v23.m_pData == 0 )
      goto LABEL_22;
    goto LABEL_21;
  }
  v14 = &v23.m_pData;
LABEL_21:
  *v14 = flImpactSpeed;
LABEL_22:
  CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, &filter, v9, "impact_surface_hardness_input", &v23, 0, 1);
  if ( v23.m_nAllocSize > 8 && v23.m_pData != 0 )
    operator delete[](v23.m_pData);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
  return v9;
}


// CPhysicsGameSystem::PreClientUpdate  (line 1237, @0x0000000001f6d770, libserver.so)  // inlines: Element, operator char const*, operator[]
// calls: CPhysicsGameSystem::UpdateFrictionSounds, CUtlString::Get, PlayImpactSoundEventAtPosition, CUtlVectorBase<physicssound::impactsound_t, CUtlMemory<physicssound::impactsound_t, int> >::RemoveAll, PlaySoundEventAtPosition, CUtlVectorBase<physicssound::breaksound_t, CUtlMemory<physicssound::breaksound_t, int> >::RemoveAll
void __fastcall CPhysicsGameSystem::PreClientUpdate(
        CPhysicsGameSystem *const this,
        const EventServerPreClientUpdate_t *const msg)
{
  float v3; // xmm0_4
  int v4; // edx
  unsigned __int64 v5; // r12
  physicssound::impactsound_t *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  const char *v10; // rax
  float v11; // xmm3_4
  const char *v12; // rdx
  const char *v13; // rax
  float m_hardnessFactor; // xmm2_4
  float v15; // xmm0_4
  float m_flImpactSpeed; // xmm1_4
  int m_Size; // r12d
  int v18; // r12d
  __int64 v19; // rbx
  physicssound::breaksound_t *v20; // r13
  __int64 v21; // rax
  const CUtlString *v22; // rax
  const char *v23; // rax
  float v24; // xmm0_4
  const char *pSound; // [rsp+0h] [rbp-50h]
  unsigned __int64 v26; // [rsp+8h] [rbp-48h]
  const CPhysSurfaceProperties *pHit; // [rsp+18h] [rbp-38h]

  CPhysicsGameSystem::UpdateFrictionSounds(this);
  v3 = this->m_flImpactSoundTime + gpGlobals->frametime;
  this->m_flImpactSoundTime = v3;
  if ( v3 > 0.050000001 )
  {
    v4 = this->m_impactSounds.m_Size - 1;
    if ( v4 >= 0 )
    {
      v5 = 36LL * v4;
      v26 = 36 * (v4 - v4) - 36;
      while ( 1 )
      {
        v6 = &this->m_impactSounds.m_Memory.m_pMemory[v5 / 0x24];
        v7 = (*(g_pVPhysics2->_vptr_IAppSystem + 18))(g_pVPhysics2);
        v8 = (*(*v7 + 16LL))(v7, v6->m_nSurfaceProps.m_nHashCode, 0);
        if ( CUtlString::Get((v8 + 88)) != 0 )
          break;
LABEL_13:
        v5 -= 36LL;
        if ( v5 == v26 )
          goto LABEL_14;
      }
      v9 = (*(g_pVPhysics2->_vptr_IAppSystem + 18))(g_pVPhysics2);
      pHit = (*(*v9 + 16LL))(v9, v6->m_nSurfacePropsHit.m_nHashCode, 0);
      v10 = CUtlString::Get((v8 + 88));
      v12 = v10;
      if ( pHit != 0 )
      {
        pSound = v10;
        v13 = CUtlString::Get((v8 + 80));
        v12 = pSound;
        if ( v13 != 0 )
        {
          m_hardnessFactor = pHit->m_audioParams.m_hardnessFactor;
          if ( *(v8 + 160) <= m_hardnessFactor )
          {
            v15 = *(v8 + 164);
            v11 = 0.0;
            m_flImpactSpeed = v6->m_flImpactSpeed;
            if ( v15 <= 0.0 || v15 <= m_flImpactSpeed )
              goto LABEL_12;
          }
          v12 = CUtlString::Get((v8 + 80));
        }
      }
      m_flImpactSpeed = v6->m_flImpactSpeed;
      m_hardnessFactor = pHit->m_audioParams.m_hardnessFactor;
LABEL_12:
      PlayImpactSoundEventAtPosition(v12, &v6->m_vOrigin, v6->m_flVolume, m_flImpactSpeed, m_hardnessFactor, v11);
      goto LABEL_13;
    }
LABEL_14:
    CUtlVectorBase<physicssound::impactsound_t,CUtlMemory<physicssound::impactsound_t,int>>::RemoveAll(&this->m_impactSounds);
    m_Size = this->m_breakSounds.m_Size;
    this->m_flImpactSoundTime = 0.0;
    v18 = m_Size - 1;
    if ( v18 >= 0 )
    {
      v19 = v18;
      do
      {
        --v18;
        v20 = &this->m_breakSounds.m_Memory.m_pMemory[v19--];
        v21 = (*(g_pVPhysics2->_vptr_IAppSystem + 18))(g_pVPhysics2);
        v22 = (*(*v21 + 16LL))(v21, v20->m_nSurfacePropsBreak.m_nHashCode, 0);
        v23 = CUtlString::Get(v22 + 16);
        PlaySoundEventAtPosition(v23, &v20->m_vOrigin, v24);
      }
      while ( v18 != -1 );
    }
    CUtlVectorBase<physicssound::breaksound_t,CUtlMemory<physicssound::breaksound_t,int>>::RemoveAll(&this->m_breakSounds);
  }
}


// CPhysicsGameSystem::OnBeginProcessing  (line 1280, @0x0000000001f2f390, libserver.so)  // inlines: IsIdxValid, IsValidIndex, LeftChild
// callers: CPhysicsGameSystem::OnBeginProcessing, CPhysicsGameSystem::FrameBoundary
void __fastcall CPhysicsGameSystem::OnBeginProcessing(CPhysicsGameSystem *const this, WorldGroupId_t *pWorldGroupId)
{
  __int64 v3; // r12
  int v4; // ebx
  int m_nAllocationCount; // eax
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t>::Node_t,short unsigned int> *m_pMemory; // rcx

  v3 = 0;
  v4 = 0;
  m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
  if ( m_nAllocationCount != 0 )
  {
    do
    {
      if ( m_nAllocationCount > v4 && v4 <= this->m_mapLevelWorlds.m_Tree.m_LastAlloc.index )
      {
        m_pMemory = this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory;
        if ( m_pMemory[v4].m_Left != v4 )
        {
          (*(*m_pMemory[v3].m_Data.elem.pPhysicsWorld + 920LL))(m_pMemory[v3].m_Data.elem.pPhysicsWorld, pWorldGroupId);
          m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
        }
      }
      ++v4;
      ++v3;
    }
    while ( v4 < m_nAllocationCount );
  }
}


// CPhysicsGameSystem::OnBeginProcessing  (line 1280, @0x0000000001f41e30, libserver.so)
// calls: CPhysicsGameSystem::GetExistingLevelWorld, CPhysicsGameSystem::OnBeginProcessing
// callers: CPhysicsGameSystemChangeScope::CPhysicsGameSystemChangeScope, CSpawnGroupMgrGameSystem::SpawnGroupActuallySpawnEntities
void __fastcall CPhysicsGameSystem::OnBeginProcessing(CPhysicsGameSystem *const this, WorldGroupId_t *pWorldGroupId)
{
  IVPhysics2World *ExistingLevelWorld; // rax

  if ( pWorldGroupId != 0 )
  {
    ExistingLevelWorld = CPhysicsGameSystem::GetExistingLevelWorld(this, pWorldGroupId->m_nHashCode);
    if ( ExistingLevelWorld != 0 )
      (*(*ExistingLevelWorld + 920LL))(ExistingLevelWorld);
  }
  else
  {
    CPhysicsGameSystem::OnBeginProcessing(this, 0);
  }
}


// CPhysicsGameSystem::OnEndProcessing  (line 1299, @0x0000000001f2f400, libserver.so)  // inlines: IsIdxValid, IsValidIndex, LeftChild
// callers: CPhysicsGameSystem::OnEndProcessing, CPhysicsGameSystem::FrameBoundary
void __fastcall CPhysicsGameSystem::OnEndProcessing(CPhysicsGameSystem *const this, WorldGroupId_t *pWorldGroupId)
{
  __int64 v3; // r12
  int v4; // ebx
  int m_nAllocationCount; // eax
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t>::Node_t,short unsigned int> *m_pMemory; // rcx

  v3 = 0;
  v4 = 0;
  m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
  if ( m_nAllocationCount != 0 )
  {
    do
    {
      if ( m_nAllocationCount > v4 && v4 <= this->m_mapLevelWorlds.m_Tree.m_LastAlloc.index )
      {
        m_pMemory = this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory;
        if ( m_pMemory[v4].m_Left != v4 )
        {
          (*(*m_pMemory[v3].m_Data.elem.pPhysicsWorld + 928LL))(m_pMemory[v3].m_Data.elem.pPhysicsWorld, pWorldGroupId);
          m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
        }
      }
      ++v4;
      ++v3;
    }
    while ( v4 < m_nAllocationCount );
  }
}


// CPhysicsGameSystem::OnEndProcessing  (line 1299, @0x0000000001f41e90, libserver.so)
// calls: CPhysicsGameSystem::GetExistingLevelWorld, CPhysicsGameSystem::OnEndProcessing
// callers: CPhysicsGameSystemChangeScope::~CPhysicsGameSystemChangeScope, CSpawnGroupMgrGameSystem::SpawnGroupActuallySpawnEntities
void __fastcall CPhysicsGameSystem::OnEndProcessing(CPhysicsGameSystem *const this, WorldGroupId_t *pWorldGroupId)
{
  IVPhysics2World *ExistingLevelWorld; // rax

  if ( pWorldGroupId != 0 )
  {
    ExistingLevelWorld = CPhysicsGameSystem::GetExistingLevelWorld(this, pWorldGroupId->m_nHashCode);
    if ( ExistingLevelWorld != 0 )
      (*(*ExistingLevelWorld + 928LL))(ExistingLevelWorld);
  }
  else
  {
    CPhysicsGameSystem::OnEndProcessing(this, 0);
  }
}


// ConvertContactToTrace  (line 1319, @0x0000000001f36650, libserver.so)  // inlines: DotProduct, operator=
// callers: CBaseEntity::VPhysicsStartTouch
void __fastcall ConvertContactToTrace(trace_t *pTraceOut, const Manifold_t *pManifold)
{
  float x; // xmm0_4
  float y; // xmm2_4
  float z; // xmm1_4

  if ( pManifold != 0 )
  {
    x = pManifold->m_Points[0].m_vPosition.x;
    pTraceOut->endpos.x = x;
    y = pManifold->m_Points[0].m_vPosition.y;
    pTraceOut->endpos.y = y;
    z = pManifold->m_Points[0].m_vPosition.z;
    pTraceOut->endpos.z = z;
    pTraceOut->plane.dist = ((x * pManifold->m_vNormal.x) + (y * pManifold->m_vNormal.y)) + (z * pManifold->m_vNormal.z);
    pTraceOut->plane.normal = pManifold->m_vNormal;
  }
  else
  {
    pTraceOut->plane.normal.x = 0.0;
    pTraceOut->plane.normal.y = 0.0;
    pTraceOut->plane.normal.z = 1.0;
    pTraceOut->plane.dist = 0.0;
    pTraceOut->endpos = vec3_origin;
  }
}


// CLegacyCollisionData::GetSurfaceNormal  (line 1413, @0x0000000001f721d0, libserver.so)  // inlines: operator=
void __fastcall CLegacyCollisionData::GetSurfaceNormal(CLegacyCollisionData *const this, Vector *const out)
{
  *out = this->m_vNormal;
}


// CLegacyCollisionData::GetContactPoint  (line 1418, @0x0000000001f72200, libserver.so)  // inlines: operator=
void __fastcall CLegacyCollisionData::GetContactPoint(CLegacyCollisionData *const this, Vector *const out)
{
  *out = this->m_vPoint;
}


// CLegacyCollisionData::GetContactSpeed  (line 1423, @0x0000000001f72230, libserver.so)  // inlines: operator=
void __fastcall CLegacyCollisionData::GetContactSpeed(CLegacyCollisionData *const this, Vector *const out)
{
  *out = this->m_vRelSpeed;
}


// CPhysicsGameSystem::ObjectSound  (line 1556, @0x0000000001f60fb0, libserver.so)  // inlines: CEntityHandle, Count, DotProduct, Empty, Get, GetContactNormalSpeed, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, LookupEntity, operator CBaseEntity*, operator bool
// calls: CPhysicsGameSystem::AddImpactSound
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPhysicsGameSystem::ObjectSound(
        CPhysicsGameSystem *const this,
        CLegacyCollisionData *const legacyCollisionData,
        const VPhysIntersectionNotification_t *const notification,
        int nIndex)
{
  float v4; // xmm1_4
  CUtlSharedArray<Manifold_t,UtlSharedArrayTraits_t> *m_pObj; // rax
  char *v7; // r14
  uint32 m_nHashCode; // r12d
  uint32 v9; // r13d
  int v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  float v13; // xmm0_4
  float v15; // [rsp-4h] [rbp-44h]

  v4 = fabs(
         ((legacyCollisionData->m_vRelSpeed.x * legacyCollisionData->m_vNormal.x)
        + (legacyCollisionData->m_vRelSpeed.y * legacyCollisionData->m_vNormal.y))
       + (legacyCollisionData->m_vRelSpeed.z * legacyCollisionData->m_vNormal.z));
  if ( v4 > 70.0 )
  {
    m_pObj = notification->m_Contact.m_Manifolds.m_pObj;
    if ( m_pObj != 0 && m_pObj->m_nElementCount != 0 )
    {
      v15 = v4;
      if ( (*(*notification->m_hBody[0] + 40LL))(notification->m_hBody[0]) == 2 )
      {
        v7 = notification + 8 * nIndex;
        m_nHashCode = notification->m_MaterialIndex[nIndex].m_nHashCode;
        v9 = notification->m_MaterialIndex[1 - nIndex].m_nHashCode;
        v10 = (*(**(v7 + 1) + 1328LL))(*(v7 + 1));
        if ( (v10 + 2) > 1 )
        {
          v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v10 >> 9) & 0x3F];
          if ( v11 != 0 )
          {
            v12 = &v11[v10 & 0x1FF];
            if ( v12 != 0 && v10 == v12->m_EHandle.m_Index )
            {
              v13 = fminf(1.0, 0.0000097656248 * (v15 * v15));
              if ( m_nHashCode != 0 )
                CPhysicsGameSystem::AddImpactSound(
                  this,
                  v12->m_pInstance,
                  0,
                  *(v7 + 1),
                  m_nHashCode,
                  v9,
                  v13,
                  v15 * v15);
            }
          }
        }
      }
    }
  }
}


// CPhysicsGameSystem::PhysicsImpactSound  (line 1586, @0x0000000001f61120, libserver.so)  // inlines: entindex
// calls: CEntityInstance::GetEntityIndex, CPhysicsGameSystem::AddImpactSound
// callers: CPhysicsGameSystem::PhysCollisionSound
void __fastcall CPhysicsGameSystem::PhysicsImpactSound(
        CPhysicsGameSystem *const this,
        CBaseEntity *pEntity,
        IPhysicsObject *pPhysObject,
        CUtlStringToken surfaceProps,
        CUtlStringToken surfacePropsHit,
        float volume,
        float impactSpeed)
{
  CEntityIndex v12; // eax

  v12.m_Data = CEntityInstance::GetEntityIndex(pEntity).m_Data;
  CPhysicsGameSystem::AddImpactSound(
    this,
    pEntity,
    v12,
    pPhysObject,
    surfaceProps,
    surfacePropsHit,
    volume,
    impactSpeed);
}


// CPhysicsGameSystem::AddImpactSound  (line 1591, @0x0000000001f60c90, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, CEntityHandle, CEntityIndex, CUtlStringToken, Construct<physicssound::impactsound_t>, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Set, impactsound_t, operator=, operator[]
// calls: CUtlMemory<physicssound::impactsound_t, int>::Grow
// callers: CPhysicsGameSystem::ObjectSound, CPhysicsGameSystem::PhysicsImpactSound
void __fastcall CPhysicsGameSystem::AddImpactSound(
        CPhysicsGameSystem *const this,
        CBaseEntity *pEntity,
        CEntityIndex entityIndex,
        IPhysicsObject *pObject,
        CUtlStringToken surfaceProps,
        CUtlStringToken surfacePropsHit,
        float volume,
        float impactSpeed)
{
  __m128d v8; // xmm1
  float v9; // xmm3_4
  __int64 m_Size; // r15
  float v14; // xmm2_4
  int v15; // r10d
  physicssound::impactsound_t *m_pMemory; // rdi
  __int64 v17; // rax
  physicssound::impactsound_t *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // r8
  float m_flVolume; // xmm1_4
  int v23; // eax
  physicssound::impactsound_t *v24; // rax
  physicssound::impactsound_t *v25; // rbx
  CEntityIdentity *v26; // rsi
  int v27; // eax
  __int16 v28; // di
  vec_t v29; // xmm1_4
  double v30; // xmm0_8
  vec_t v31; // xmm1_4
  CEntityIdentity *m_pEntity; // rcx
  int v33; // eax
  __int16 v34; // si
  uint32 m_nHashCode; // [rsp-4h] [rbp-5Ch]
  float volumec; // [rsp+0h] [rbp-58h]
  IPhysicsObject *volumeb; // [rsp+0h] [rbp-58h]
  uint32 volumea; // [rsp+0h] [rbp-58h]
  uint32 pObjectc; // [rsp+8h] [rbp-50h]
  int32 pObjectb; // [rsp+8h] [rbp-50h]
  int32 pObjecta; // [rsp+8h] [rbp-50h]
  float pObject_4a; // [rsp+Ch] [rbp-4Ch]
  float pObject_4; // [rsp+Ch] [rbp-4Ch]
  float pObject_4b; // [rsp+Ch] [rbp-4Ch]

  v8.m128d_f64[1] = impactSpeed;
  v9 = volume;
  m_Size = this->m_impactSounds.m_Size;
  v8.m128d_f64[0] = impactSpeed + 0.0001;
  v14 = _mm_movedup_pd(v8).m128d_f64[0];
  v15 = this->m_impactSounds.m_Size - 1;
  if ( v15 >= 0 )
  {
    m_pMemory = this->m_impactSounds.m_Memory.m_pMemory;
    v17 = v15;
    v18 = &m_pMemory[v17];
    if ( surfaceProps.m_nHashCode == m_pMemory[v17].m_nSurfaceProps.m_nHashCode || m_Size > 4 )
    {
LABEL_7:
      m_flVolume = v18->m_flVolume;
      if ( volume > m_flVolume )
      {
        volumea = surfacePropsHit.m_nHashCode;
        pObjecta = entityIndex.m_Data;
        pObject_4b = v14;
        v30 = (*(*pObject + 368LL))(pObject);
        v14 = pObject_4b;
        *&v18->m_vOrigin.x = v30;
        v9 = volume;
        v18->m_vOrigin.z = v31;
        if ( pEntity != 0 && (m_pEntity = pEntity->m_pEntity) != 0 )
        {
          v33 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v34 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v34 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(v18->m_hEntity.m_Index) = v34 | v18->m_hEntity.m_Index & 0x8000;
          v18->m_hEntity.m_Index = (v33 << 15) | v18->m_hEntity.m_Index & 0x7FFF;
        }
        else
        {
          v18->m_hEntity.m_Index = -1;
        }
        v18->m_nEntityIndex.m_Data = pObjecta;
        m_flVolume = v18->m_flVolume;
        v18->m_nSurfacePropsHit.m_nHashCode = volumea;
      }
      v18->m_flImpactSpeed = fmaxf(v14, v18->m_flImpactSpeed);
      v18->m_flVolume = m_flVolume + v9;
      return;
    }
    v19 = &m_pMemory[v17 - 1];
    v20 = v19 + 16;
    v21 = -36LL * v15 - m_pMemory;
    while ( --v15 != -1 )
    {
      v18 = v19;
      v19 -= 36;
      if ( surfaceProps.m_nHashCode == *(v21 + v19 + v20 + 72) )
        goto LABEL_7;
    }
  }
  v23 = m_Size;
  if ( m_Size == this->m_impactSounds.m_Memory.m_nAllocationCount )
  {
    m_nHashCode = surfacePropsHit.m_nHashCode;
    volumeb = pObject;
    pObjectb = entityIndex.m_Data;
    pObject_4 = v14;
    CUtlMemory<physicssound::impactsound_t,int>::Grow(&this->m_impactSounds.m_Memory, 1);
    v23 = this->m_impactSounds.m_Size;
    v9 = volume;
    surfacePropsHit.m_nHashCode = m_nHashCode;
    pObject = volumeb;
    entityIndex.m_Data = pObjectb;
    v14 = pObject_4;
  }
  this->m_impactSounds.m_Size = v23 + 1;
  v24 = &this->m_impactSounds.m_Memory.m_pMemory[m_Size];
  if ( v24 != 0 )
  {
    v24->m_hEntity.m_Index = -1;
    v24->m_nEntityIndex.m_Data = -1;
    v24->m_nSurfaceProps.m_nHashCode = 0;
    v24->m_nSurfacePropsHit.m_nHashCode = 0;
    v25 = &this->m_impactSounds.m_Memory.m_pMemory[m_Size];
  }
  else
  {
    v25 = 0;
  }
  if ( pEntity != 0 && (v26 = pEntity->m_pEntity) != 0 )
  {
    v27 = (v26->m_EHandle.m_Index >> 15) - (v26->m_flags & 1);
    v28 = 0x7FFF;
    if ( v26->m_EHandle.m_Index != -1 )
      v28 = v26->m_EHandle.m_Index & 0x7FFF;
    LOWORD(v25->m_hEntity.m_Index) = v28 | v25->m_hEntity.m_Index & 0x8000;
    v25->m_hEntity.m_Index = (v27 << 15) | v25->m_hEntity.m_Index & 0x7FFF;
  }
  else
  {
    v25->m_hEntity.m_Index = -1;
  }
  v25->m_nEntityIndex = entityIndex;
  volumec = v9;
  pObjectc = surfacePropsHit.m_nHashCode;
  pObject_4a = v14;
  *&v25->m_vOrigin.x = (*(*pObject + 368LL))(pObject);
  v25->m_nSurfaceProps = surfaceProps;
  v25->m_nSurfacePropsHit.m_nHashCode = pObjectc;
  v25->m_vOrigin.z = v29;
  v25->m_flVolume = volumec;
  v25->m_flImpactSpeed = pObject_4a;
}


// CPhysicsGameSystem::FindFriction  (line 1627, @0x0000000001f36710, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator==
// callers: CPhysicsGameSystem::PhysFrictionSound
// globals: CEntityHandle::gm_pEntityList
physicssound::friction_t *__fastcall CPhysicsGameSystem::FindFriction(
        CPhysicsGameSystem *const this,
        CBaseEntity *pEntity)
{
  int m_Size; // edx
  physicssound::friction_t *result; // rax
  physicssound::friction_t *v4; // r9
  CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx

  m_Size = this->m_scrapeSounds.m_Size;
  if ( m_Size <= 0 )
    return 0;
  result = this->m_scrapeSounds.m_Memory.m_pMemory;
  v4 = &result[(m_Size - 1) + 1];
  while ( 1 )
  {
    m_pInstance = 0;
    if ( result->m_hEntity.m_Index + 2 > 1 )
    {
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(result->m_hEntity.m_Index) >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[result->m_hEntity.m_Index & 0x1FF];
        if ( v7 != 0 && result->m_hEntity.m_Index == v7->m_EHandle.m_Index )
          m_pInstance = v7->m_pInstance;
      }
    }
    if ( pEntity == m_pInstance )
      break;
    if ( ++result == v4 )
      return 0;
  }
  return result;
}


// CPhysicsGameSystem::PhysFrictionSound  (line 1640, @0x0000000001f6aa90, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, AllocateData, Approach, CEntityHandle, CPASFilter, CSosFieldData, CSosFieldDataFloat, CSosFieldDataFloat3, ClearData, Construct<physicssound::friction_t>, CopyData, Element, GetDataPtr, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, InValidate, Init, Set, SetValue, SndOpEventGuid_t, SoundEventGuid_t, V_memcpy, curtime, friction_t, memcpy, operator char const*, operator=, operator[], ~CPASFilter, ~CSosFieldData, ~CSosFieldDataFloat, ~CSosFieldDataFloat3
// calls: CUtlString::Get, CPhysicsGameSystem::FindFriction, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CRecipientFilter::~CRecipientFilter, operator new [], CSoundOpGameSystem::StartSoundEvent, CSosFieldDataFloat::CSosFieldDataFloat, CSosFieldData::ClearData, CUtlMemory<physicssound::friction_t, int>::Grow (14 total)
// callers: CPhysicsGameSystem::DispatchCallbacks, CBaseEntity::VPhysicsFriction
// strings: "volume_atten", "scrape_amount_input", "scrape_surface_roughness_input"
// globals: g_pSoundOpGameSystem
void __fastcall CPhysicsGameSystem::PhysFrictionSound(
        CPhysicsGameSystem *const this,
        CBaseEntity *pEntity,
        IPhysicsObject *pObject,
        float flEnergy,
        CUtlStringToken nSurfaceProps,
        CUtlStringToken nSurfacePropsHit)
{
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r12
  physicssound::friction_t *v14; // rax
  __int64 v15; // xmm0_8
  physicssound::friction_t *Friction; // r12
  vec_t v17; // xmm1_4
  float m_flLastVolume; // xmm1_4
  float v19; // xmm0_4
  int v20; // r15d
  SosFieldValueMem_t *m_pData; // rax
  float v22; // xmm3_4
  float *p_m_pData; // rax
  float *v24; // rax
  CEntityIdentity *m_pEntity; // rax
  int v26; // edx
  __int16 v27; // cx
  CGlobalVars *v28; // rbx
  CGlobalVars *v29; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  CGlobalVars *v31; // r14
  void (__fastcall *v32)(__int64); // rax
  float m_flCurrentTime; // xmm0_4
  float v34; // xmm1_4
  __int64 m_Size; // r12
  int v36; // eax
  physicssound::friction_t *m_pMemory; // rdx
  __int64 v38; // r12
  physicssound::friction_t *v39; // rax
  const char *pSoundName; // [rsp+8h] [rbp-218h]
  vec_t pSoundNamea; // [rsp+8h] [rbp-218h]
  vec_t y; // [rsp+10h] [rbp-210h]
  float v45; // [rsp+10h] [rbp-210h]
  float flVolumea; // [rsp+1Ch] [rbp-204h]
  Vector vPos; // [rsp+20h] [rbp-200h] BYREF
  CSosFieldDataFloat v49; // [rsp+30h] [rbp-1F0h] BYREF
  CSosFieldData fieldData; // [rsp+50h] [rbp-1D0h] BYREF
  CSosFieldData v51; // [rsp+70h] [rbp-1B0h] BYREF
  CSosFieldData v52; // [rsp+90h] [rbp-190h] BYREF
  CPASFilter filter; // [rsp+B0h] [rbp-170h] BYREF
  unsigned __int64 v54; // [rsp+1E8h] [rbp-38h]

  v54 = __readfsqword(0x28u);
  if ( pEntity == 0 )
    return;
  if ( flEnergy < 75.0 )
    return;
  if ( nSurfaceProps.m_nHashCode == 0 )
    return;
  v9 = (*(g_pVPhysics2->_vptr_IAppSystem + 18))(g_pVPhysics2);
  v10 = (*(*v9 + 16LL))(v9, nSurfacePropsHit.m_nHashCode, 0);
  v11 = (*(g_pVPhysics2->_vptr_IAppSystem + 18))(g_pVPhysics2);
  v12 = (*(*v11 + 16LL))(v11, nSurfaceProps.m_nHashCode, 0);
  v13 = v12;
  if ( *(v10 + 176) == 88 || *(v12 + 176) == 88 )
    return;
  flVolumea = (flEnergy * 0.000064516127) * (flEnergy * 0.000064516127);
  pSoundName = CUtlString::Get((v12 + 104));
  if ( CUtlString::Get((v13 + 96)) != 0 && *(v13 + 156) > *(v10 + 152) )
    pSoundName = CUtlString::Get((v13 + 96));
  if ( flVolumea <= 1.0 )
  {
    Friction = CPhysicsGameSystem::FindFriction(this, pEntity);
    if ( Friction != 0 )
      goto LABEL_14;
    if ( flVolumea <= 0.050000001 )
      return;
  }
  else
  {
    flVolumea = 1.0;
    v14 = CPhysicsGameSystem::FindFriction(this, pEntity);
    v15 = 1065353216;
    Friction = v14;
    if ( v14 != 0 )
      goto LABEL_14;
    flVolumea = 1.0;
  }
  m_Size = this->m_scrapeSounds.m_Size;
  v36 = this->m_scrapeSounds.m_Size;
  if ( m_Size == this->m_scrapeSounds.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<physicssound::friction_t,int>::Grow(&this->m_scrapeSounds.m_Memory, 1);
    v36 = this->m_scrapeSounds.m_Size;
  }
  m_pMemory = this->m_scrapeSounds.m_Memory.m_pMemory;
  this->m_scrapeSounds.m_Size = v36 + 1;
  v38 = m_Size;
  v39 = &m_pMemory[v38];
  if ( &m_pMemory[v38] != 0 )
  {
    v39->m_hEntity.m_Index = -1;
    v39->m_nSound.m_nGuid.m_Data = 0;
    v39->m_nSound.m_hStackHash = -1;
    v39->m_flLastUpdateTime = 0.0;
    v39->m_flLastEffectTime = 0.0;
    v39->m_flLastVolume = 0.0;
    m_pMemory = this->m_scrapeSounds.m_Memory.m_pMemory;
  }
  Friction = &m_pMemory[v38];
  Friction->m_flLastVolume = flVolumea;
LABEL_14:
  *&vPos.x = (*(*pObject + 368LL))(pObject, *&v15);
  vPos.z = v17;
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(&filter, &vPos);
  if ( Friction->m_nSound.m_nGuid.m_Data != 0 )
  {
    m_flLastVolume = Friction->m_flLastVolume;
    v19 = 10.0 * gpGlobals->frametime;
    if ( (m_flLastVolume - flVolumea) > v19 )
    {
      m_flLastVolume = flVolumea + v19;
    }
    else if ( -v19 > (m_flLastVolume - flVolumea) )
    {
      m_flLastVolume = flVolumea - v19;
    }
    Friction->m_flLastVolume = m_flLastVolume;
  }
  else
  {
    Friction->m_nSound = CSoundOpGameSystem::StartSoundEvent(g_pSoundOpGameSystem, &filter, pSoundName, 0, -1, 0.0);
    CSosFieldDataFloat::CSosFieldDataFloat(&v49, *(v10 + 152), v34);
    CSoundOpGameSystem::SetSoundEventParam(
      g_pSoundOpGameSystem,
      &filter,
      Friction->m_nSound,
      "scrape_surface_roughness_input",
      &v49,
      0,
      1);
    CSosFieldData::ClearData(&v49);
    Friction->m_flLastVolume = flVolumea;
  }
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  fieldData.m_nAllocSize = 0;
  fieldData.m_pData = 0;
  y = vPos.y;
  pSoundNamea = vPos.x;
  v20 = _mm_cvtsi128_si32(LODWORD(vPos.z));
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
  *(m_pData + 2) = v20;
  *m_pData = pSoundNamea;
  *(m_pData + 1) = y;
  CSoundOpGameSystem::SetSoundEventParam(
    g_pSoundOpGameSystem,
    &filter,
    Friction->m_nSound,
    "position",
    &fieldData,
    0,
    0);
  if ( fieldData.m_nAllocSize > 8 && fieldData.m_pData != 0 )
    operator delete[](fieldData.m_pData);
  v51.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  v22 = Friction->m_flLastVolume;
  v51.m_nAllocSize = 0;
  v51.m_pData = 0;
  v45 = v22;
  v51.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
  v51.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
  if ( v51.m_nAllocSize <= 3 )
  {
    v51.m_nAllocSize = 4;
    goto LABEL_59;
  }
  if ( v51.m_nAllocSize <= 8 )
  {
LABEL_59:
    p_m_pData = &v51.m_pData;
    goto LABEL_27;
  }
  p_m_pData = v51.m_pData;
  if ( v51.m_pData != 0 )
LABEL_27:
    *p_m_pData = v45;
  CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, &filter, Friction->m_nSound, "volume_atten", &v51, 0, 0);
  if ( v51.m_nAllocSize > 8 && v51.m_pData != 0 )
    operator delete[](v51.m_pData);
  v52.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  v52.m_nAllocSize = 0;
  v52.m_pData = 0;
  v52.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
  v52.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
  if ( v52.m_nAllocSize <= 3 )
  {
    v52.m_nAllocSize = 4;
  }
  else if ( v52.m_nAllocSize > 8 )
  {
    v24 = v52.m_pData;
    if ( v52.m_pData == 0 )
      goto LABEL_35;
    goto LABEL_34;
  }
  v24 = &v52.m_pData;
LABEL_34:
  *v24 = flVolumea;
LABEL_35:
  CSoundOpGameSystem::SetSoundEventParam(
    g_pSoundOpGameSystem,
    &filter,
    Friction->m_nSound,
    "scrape_amount_input",
    &v52,
    0,
    1);
  if ( v52.m_nAllocSize > 8 && v52.m_pData != 0 )
    operator delete[](v52.m_pData);
  m_pEntity = pEntity->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v26 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v27 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v27 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(Friction->m_hEntity.m_Index) = v27 | Friction->m_hEntity.m_Index & 0x8000;
    Friction->m_hEntity.m_Index = (v26 << 15) | Friction->m_hEntity.m_Index & 0x7FFF;
  }
  else
  {
    Friction->m_hEntity.m_Index = -1;
  }
  v28 = gpGlobals;
  v29 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( gpGlobals->m_bEnableAssertions
      || gpGlobals->m_bInSimulation
      || (m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc) == 0 )
    {
      v31 = gpGlobals;
    }
    else
    {
      m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      v31 = gpGlobals;
      v29 = gpGlobals;
    }
    Friction->m_flLastEffectTime = v28->m_flCurrentTime;
    if ( v29 != 0 )
    {
      if ( !v31->m_bEnableAssertions && !v31->m_bInSimulation )
      {
        v32 = v31->m_pfnWarningFunc;
        if ( v32 != 0 )
          v32(1);
      }
      m_flCurrentTime = v31->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
  }
  else
  {
    m_flCurrentTime = 0.0;
    Friction->m_flLastEffectTime = 0.0;
  }
  Friction->m_flLastUpdateTime = m_flCurrentTime;
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CPhysicsGameSystem::UpdateFrictionSounds  (line 1708, @0x0000000001f6d530, libserver.so)  // inlines: AllocateData, Approach, CSosFieldData, CSosFieldDataFloat, ClearData, CopyData, GetDataPtr, Init, V_memcpy, curtime, memcpy, operator[], ~CSosFieldData, ~CSosFieldDataFloat
// calls: CSoundOpGameSystem::SetSoundEventParam, operator delete [], CSoundOpGameSystem::StopSoundEvent, CUtlVectorBase<physicssound::friction_t, CUtlMemory<physicssound::friction_t, int> >::FastRemove, CSosFieldData::ClearData, _Unwind_Resume
// callers: CPhysicsGameSystem::PreClientUpdate
// strings: "volume_atten"
// globals: g_pSoundOpGameSystem
void __fastcall CPhysicsGameSystem::UpdateFrictionSounds(CPhysicsGameSystem *const this)
{
  CGlobalVars *v2; // rbx
  int m_Size; // r12d
  __int64 i; // rbx
  char *v5; // rsi
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  physicssound::friction_t *m_pMemory; // rax
  int v10; // xmm6_4
  _DWORD *m_pData; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  int v13; // [rsp+8h] [rbp-58h]
  float flLastUpdateTime; // [rsp+Ch] [rbp-54h]
  CSosFieldData fieldData; // [rsp+10h] [rbp-50h] BYREF

  v2 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    flLastUpdateTime = v2->m_flCurrentTime - 0.1;
  }
  else
  {
    flLastUpdateTime = -0.1;
  }
  m_Size = this->m_scrapeSounds.m_Size;
  for ( i = 24LL * m_Size - 24; --m_Size >= 0; i -= 24 )
  {
    v5 = this->m_scrapeSounds.m_Memory.m_pMemory + i;
    if ( flLastUpdateTime <= *(v5 + 3) )
      continue;
    v6 = *(v5 + 5);
    if ( v6 <= 0.0 )
    {
      CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, (v5 + 4));
      CUtlVectorBase<physicssound::friction_t,CUtlMemory<physicssound::friction_t,int>>::FastRemove(
        &this->m_scrapeSounds,
        m_Size);
      continue;
    }
    v7 = 10.0 * gpGlobals->frametime;
    if ( (0.0 - v6) <= v7 )
    {
      if ( -v7 <= (0.0 - v6) )
        v8 = 0.0;
      else
        v8 = v6 - v7;
    }
    else
    {
      v8 = v6 + v7;
    }
    *(v5 + 5) = v8;
    m_pMemory = this->m_scrapeSounds.m_Memory.m_pMemory;
    fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
    fieldData.m_nAllocSize = 0;
    v10 = *(&m_pMemory->m_flLastVolume + i);
    fieldData.m_pData = 0;
    v13 = v10;
    fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
    fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
    if ( fieldData.m_nAllocSize <= 3 )
    {
      fieldData.m_nAllocSize = 4;
    }
    else if ( fieldData.m_nAllocSize > 8 )
    {
      m_pData = fieldData.m_pData;
      if ( fieldData.m_pData == 0 )
        goto LABEL_15;
      goto LABEL_14;
    }
    m_pData = &fieldData.m_pData;
LABEL_14:
    *m_pData = v13;
LABEL_15:
    CSoundOpGameSystem::SetSoundEventParam(
      g_pSoundOpGameSystem,
      *(&this->m_scrapeSounds.m_Memory.m_pMemory->m_nSound + i),
      "volume_atten",
      &fieldData,
      0);
    if ( fieldData.m_nAllocSize > 8 && fieldData.m_pData != 0 )
      operator delete[](fieldData.m_pData);
  }
}


// CPhysicsGameSystem::ShutdownFrictionSounds  (line 1730, @0x0000000001f6d460, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsValid, LookupEntity, operator==, operator[]
// calls: CSoundOpGameSystem::StopSoundEvent, CUtlVectorBase<physicssound::friction_t, CUtlMemory<physicssound::friction_t, int> >::FastRemove
// callers: CBaseEntity::~CBaseEntity, CPhysicsPropRespawnable::Event_Killed
// globals: CEntityHandle::gm_pEntityList, g_pSoundOpGameSystem
void __fastcall CPhysicsGameSystem::ShutdownFrictionSounds(CPhysicsGameSystem *const this, CBaseEntity *pEntity)
{
  int m_Size; // ebx
  CUtlVector<physicssound::friction_t,CUtlMemory<physicssound::friction_t,int> > *p_m_scrapeSounds; // r13
  __int64 i; // r12
  unsigned __int16 *v7; // rax
  CEntityIdentity *v8; // rcx
  CEntityIdentity *v9; // rcx

  if ( pEntity != 0 )
  {
    m_Size = this->m_scrapeSounds.m_Size;
    p_m_scrapeSounds = &this->m_scrapeSounds;
    for ( i = 24LL * m_Size - 24; --m_Size >= 0; i -= 24 )
    {
      v7 = (this->m_scrapeSounds.m_Memory.m_pMemory + i);
      if ( (*v7 + 2) > 1 )
      {
        v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v7 >> 9) & 0x3F];
        if ( v8 != 0 )
        {
          v9 = &v8[*v7 & 0x1FF];
          if ( v9 != 0 && *v7 == v9->m_EHandle.m_Index && pEntity == v9->m_pInstance )
          {
            CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, (v7 + 2));
            CUtlVectorBase<physicssound::friction_t,CUtlMemory<physicssound::friction_t,int>>::FastRemove(
              p_m_scrapeSounds,
              m_Size);
          }
        }
      }
    }
  }
}


// CPhysicsGameSystem::PhysCollisionSound  (line 1745, @0x0000000001f61190, libserver.so)
// calls: CPhysicsGameSystem::PhysicsImpactSound
// callers: CBaseEntity::VPhysicsCollision
void __fastcall CPhysicsGameSystem::PhysCollisionSound(
        CPhysicsGameSystem *const this,
        CBaseEntity *pEntity,
        IPhysicsObject *pPhysObject,
        CUtlStringToken surfaceProps,
        CUtlStringToken surfacePropsHit,
        float speed)
{
  CPhysicsGameSystem::PhysicsImpactSound(
    this,
    pEntity,
    pPhysObject,
    surfaceProps,
    surfacePropsHit,
    fminf(1.0, (speed * speed) * 0.0000097656248),
    speed);
}


// CPhysicsGameSystem::PhysBreakSound  (line 1754, @0x0000000001f56bf0, libserver.so)  // inlines: AddToTail, CopyConstruct<physicssound::breaksound_t>, Element, GrowMemory, VectorAdd, VectorMultiply, operator char const*, operator*, operator+, operator=, operator[]
// calls: CUtlString::Get, CUtlString::operator[], CUtlMemory<physicssound::breaksound_t, int>::Grow
// callers: CBreakableProp::Break, CPropDoorRotatingBreakable::Event_Killed, CPropDoorRotatingBreakable::OnTakeDamage
void __fastcall CPhysicsGameSystem::PhysBreakSound(
        CPhysicsGameSystem *const this,
        CBaseEntity *pEntity,
        IPhysicsObject *pPhysObject,
        Vector vecOrigin)
{
  float v5; // r15d
  float v6; // r14d
  uint32 v7; // ebx
  __int64 v8; // rax
  const CUtlString *v9; // r13
  char v10; // al
  float v11; // xmm1_4
  __int64 m_Size; // r13
  int v13; // edx
  CUtlStringToken *p_m_nSurfacePropsBreak; // rax
  float *p_m_nHashCode; // rcx
  float v16; // xmm1_4
  float v17; // xmm0_4
  int v18; // eax
  __int64 v19; // r13
  bool v20; // zf
  physicssound::breaksound_t *v21; // r13
  float z; // [rsp+Ch] [rbp-44h]

  z = vecOrigin.z;
  if ( pPhysObject != 0 )
  {
    v5 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(vecOrigin.x)));
    v6 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(vecOrigin.y)));
    v7 = (*(*pPhysObject + 1192LL))(pPhysObject, pEntity);
    v8 = (*(g_pVPhysics2->_vptr_IAppSystem + 18))(g_pVPhysics2);
    v9 = ((*(*v8 + 16LL))(v8, v7, 0) + 128);
    if ( CUtlString::Get(v9) != 0 )
    {
      v10 = CUtlString::operator[](v9, 0);
      v11 = z;
      if ( v10 != 0 )
      {
        m_Size = this->m_breakSounds.m_Size;
        v13 = this->m_breakSounds.m_Size - 1;
        if ( v13 < 0 )
        {
LABEL_11:
          v18 = this->m_breakSounds.m_Size;
          if ( m_Size == this->m_breakSounds.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<physicssound::breaksound_t,int>::Grow(&this->m_breakSounds.m_Memory, 1);
            v18 = this->m_breakSounds.m_Size;
            v11 = z;
          }
          v19 = m_Size;
          v20 = &this->m_breakSounds.m_Memory.m_pMemory[v19] == 0;
          v21 = &this->m_breakSounds.m_Memory.m_pMemory[v19];
          this->m_breakSounds.m_Size = v18 + 1;
          if ( !v20 )
          {
            v21->m_vOrigin.x = v5;
            v21->m_vOrigin.y = v6;
            v21->m_vOrigin.z = v11;
            v21->m_nSurfacePropsBreak.m_nHashCode = v7;
          }
        }
        else
        {
          p_m_nSurfacePropsBreak = &this->m_breakSounds.m_Memory.m_pMemory[v13].m_nSurfacePropsBreak;
          while ( 1 )
          {
            if ( m_Size > 2 )
            {
              p_m_nHashCode = &p_m_nSurfacePropsBreak[-3].m_nHashCode;
              if ( v7 == p_m_nSurfacePropsBreak->m_nHashCode )
                break;
            }
            --v13;
            p_m_nSurfacePropsBreak -= 4;
            if ( v13 == -1 )
              goto LABEL_11;
          }
          v16 = (z + p_m_nHashCode[2]) * 0.5;
          v17 = (v5 + *p_m_nHashCode) * 0.5;
          p_m_nHashCode[1] = (v6 + p_m_nHashCode[1]) * 0.5;
          p_m_nHashCode[2] = v16;
          *p_m_nHashCode = v17;
        }
      }
    }
  }
}


// CPhysicsGameSystem::OnBatchExecute  (line 1781, @0x0000000001f367b0, libserver.so)
void __fastcall CPhysicsGameSystem::OnBatchExecute(CPhysicsGameSystem *const this)
{
  ;
}


// CPhysicsGameSystem::OnBatchClear  (line 1786, @0x0000000001f6bfc0, libserver.so)  // inlines: IsIdxValid, IsValidIndex, LeftChild
// calls: CPhysicsGameSystem::DispatchCallbacks
// callers: CPhysicsGameSystem::OnSimulate, CGameEntitySystem::CleanupDeleteList
void __fastcall CPhysicsGameSystem::OnBatchClear(CPhysicsGameSystem *const this)
{
  int v1; // r13d
  __int64 v2; // r12
  int m_nAllocationCount; // edx
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t>::Node_t,short unsigned int> *m_pMemory; // rax
  bool v6; // zf

  v1 = 0;
  v2 = 0;
  m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
  if ( m_nAllocationCount != 0 )
  {
    do
    {
      if ( v1 < m_nAllocationCount && v1 <= this->m_mapLevelWorlds.m_Tree.m_LastAlloc.index )
      {
        m_pMemory = this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory;
        if ( m_pMemory[v1].m_Left != v1 )
        {
          do
          {
            (*(*m_pMemory[v2].m_Data.elem.pPhysicsWorld + 248LL))(m_pMemory[v2].m_Data.elem.pPhysicsWorld);
            v6 = !CPhysicsGameSystem::DispatchCallbacks(this);
            m_pMemory = this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory;
          }
          while ( !v6 );
          (*(*m_pMemory[v2].m_Data.elem.pPhysicsWorld + 256LL))(m_pMemory[v2].m_Data.elem.pPhysicsWorld);
          m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
        }
      }
      ++v1;
      ++v2;
    }
    while ( m_nAllocationCount > v1 );
  }
}


// DebugCallbackEntities  (line 1808, @0x0000000001f611c0, libserver.so)  // inlines: CEntityHandle, CUtlKeyValuePair<unsigned int>, ComputeImpactStrength, Construct<CUtlKeyValuePair<unsigned int, empty_t>, unsigned int>, DoInsert<unsigned int>, DoLookup<unsigned int>, Find, GetBool, GetClassNameAsCStr, GetDebugName, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, IndexToIdentity, Insert, IsValid, LookupEntity, Purge, String, ToCStr, operator CBaseEntity*, operator(), operator[]
// calls: CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> >::DoInsertUnconstructed, CEntityIdentity::GetDebugName, CBaseEntity::GetModelName, Msg, CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> >::DoLookup<unsigned int>, CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge
// callers: CPhysicsGameSystem::DispatchCallbacks
// strings: "Impact T = %g, N = %g"
// globals: s_DebugCallbackEntities, CEntityHandle::gm_pEntityList
void __fastcall DebugCallbackEntities(
        const CUtlVector<VPhysIntersectionNotification_t,CUtlMemory<VPhysIntersectionNotification_t,int> > *const intersectionNotifications)
{
  unsigned __int64 v1; // rbx
  VPhysIntersectionNotification_t *v2; // r13
  uint32 v3; // eax
  IPhysicsBody *v4; // rdi
  uint32 v5; // eax
  CEntityHandle *v6; // r10
  CEntityHandle *v7; // r15
  CEntityHandle *i; // r14
  CUtlHashtable<unsigned int,empty_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int> >::handle_t *m_Index; // rcx
  unsigned int v10; // edx
  unsigned int v11; // r8d
  int inserted; // eax
  CEntityHandle *v13; // r10
  CUtlHashtableEntry<unsigned int,empty_t> *v14; // rax
  uint32 v15; // eax
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  const char *m_pInstance; // rdx
  CEntityIdentity *v19; // rcx
  CEntityIdentity *v20; // rcx
  const char *m_pAsString; // r15
  const CEntityIdentity *m_pEntity; // rdi
  CEntityHandle *v23; // r10
  const char *DebugName; // rax
  const char *v25; // r8
  double v26; // xmm0_8
  int v27; // eax
  CEntityHandle *v28; // [rsp+8h] [rbp-98h]
  CEntityHandle *v29; // [rsp+8h] [rbp-98h]
  CEntityHandle *v30; // [rsp+8h] [rbp-98h]
  const char *pOtherEntityName; // [rsp+10h] [rbp-90h]
  const char *pOtherEntityNamea; // [rsp+10h] [rbp-90h]
  unsigned int pOtherEntityNameb; // [rsp+10h] [rbp-90h]
  int pDebugName; // [rsp+18h] [rbp-88h]
  const char *pDebugNamea; // [rsp+18h] [rbp-88h]
  uint32 pDebugNameb; // [rsp+18h] [rbp-88h]
  __int64 v38; // [rsp+38h] [rbp-68h]
  char hasInfo; // [rsp+40h] [rbp-60h]
  CEntityHandle *hasInfob; // [rsp+40h] [rbp-60h]
  const CBaseEntity *hasInfoa; // [rsp+40h] [rbp-60h]
  CEntityHandle hEnt[2]; // [rsp+50h] [rbp-50h] BYREF
  __int64 v43; // [rsp+58h] [rbp-48h] BYREF
  const char *v44; // [rsp+60h] [rbp-40h] BYREF

  if ( phys_debug_callback_entities.m_pParent->m_Value.m_nValue != 0 )
  {
    if ( intersectionNotifications->m_Size > 0 )
    {
      v1 = 0;
      v38 = 32 * (5LL * (intersectionNotifications->m_Size - 1) + 5);
      while ( 1 )
      {
        v2 = &intersectionNotifications->m_Memory.m_pMemory[v1 / 0xA0];
        v3 = (*(*v2->m_hBody[0] + 1328LL))(v2->m_hBody[0]);
        v4 = v2->m_hBody[1];
        hEnt[0].m_Index = v3;
        v5 = (*(*v4 + 1328LL))(v4);
        v6 = &hEnt[1];
        hasInfo = 0;
        v7 = hEnt;
        hEnt[1].m_Index = v5;
        for ( i = &hEnt[1]; ; ++i )
        {
          m_Index = v7->m_Index;
          if ( m_Index != -1 )
          {
            v10 = 33 * (((4097 * m_Index + 2127912214) >> 19) ^ (4097 * m_Index + 2127912214) ^ 0xC761C23C);
            v11 = ((9 * ((v10 - 369570787) ^ ((v10 + 374761393) << 9)) - 42973499) >> 16)
                ^ (9 * ((v10 - 369570787) ^ ((v10 + 374761393) << 9)) - 42973499)
                ^ 0xB55A4F09;
            if ( s_DebugCallbackEntities.m_nUsed == 0
              || (v30 = v6,
                  pOtherEntityNameb = ((9 * ((v10 - 369570787) ^ ((v10 + 374761393) << 9)) - 42973499) >> 16)
                                    ^ (9 * ((v10 - 369570787) ^ ((v10 + 374761393) << 9)) - 42973499)
                                    ^ 0xB55A4F09,
                  pDebugNameb = v7->m_Index,
                  v27 = CUtlHashtable<unsigned int,empty_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int>>::DoLookup<unsigned int>(
                          &s_DebugCallbackEntities,
                          m_Index,
                          v11,
                          m_Index),
                  LODWORD(m_Index) = pDebugNameb,
                  v11 = pOtherEntityNameb,
                  v6 = v30,
                  v27 == -1) )
            {
              hasInfob = v6;
              pDebugName = m_Index;
              inserted = CUtlHashtable<unsigned int,empty_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int>>::DoInsertUnconstructed(
                           &s_DebugCallbackEntities,
                           v11,
                           1);
              v13 = hasInfob;
              v14 = &s_DebugCallbackEntities.m_table.m_pMemory[inserted];
              if ( v14 != -4LL )
                v14->data[0] = pDebugName;
              v15 = v7->m_Index;
              hasInfoa = 0;
              if ( v7->m_Index != -1 && v15 != -2 )
              {
                v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_Index) >> 9) & 0x3F];
                if ( v16 != 0 )
                {
                  v17 = &v16[v7->m_Index & 0x1FF];
                  if ( v17 != 0 && v15 == v17->m_EHandle.m_Index )
                    hasInfoa = v17->m_pInstance;
                }
              }
              m_pInstance = 0;
              if ( v13->m_Index + 2 > 1 )
              {
                v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v13->m_Index) >> 9) & 0x3F];
                if ( v19 != 0 )
                {
                  v20 = &v19[v13->m_Index & 0x1FF];
                  if ( v20 != 0 && v13->m_Index == v20->m_EHandle.m_Index )
                    m_pInstance = v20->m_pInstance;
                }
              }
              m_pAsString = "";
              m_pEntity = hasInfoa->m_pEntity;
              if ( m_pEntity->m_designerName.u.m_Id != 0 )
                m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
              v28 = v13;
              pOtherEntityName = m_pInstance;
              pDebugNamea = CEntityIdentity::GetDebugName(m_pEntity);
              v23 = v28;
              DebugName = "NULL";
              if ( pOtherEntityName != 0 )
              {
                DebugName = CEntityIdentity::GetDebugName(*(pOtherEntityName + 1));
                v23 = v28;
              }
              v29 = v23;
              pOtherEntityNamea = DebugName;
              CBaseEntity::GetModelName(&v44, hasInfoa);
              v25 = "";
              if ( v44 != 0 )
                v25 = v44;
              Msg(&stru_32DB07A.m_GlobalProfilerStats + 3, pOtherEntityNamea, m_pAsString, pDebugNamea, v25);
              v6 = v29;
              hasInfo = 1;
            }
          }
          --v6;
          v7 = i;
          if ( i == &v43 )
            break;
        }
        v26 = (*(g_pVPhysics2->_vptr_IAppSystem + 75))(g_pVPhysics2, v2);
        if ( *&v26 != 0.0 || *(&v26 + 1) != 0.0 )
          break;
        if ( hasInfo != 0 )
          goto LABEL_35;
LABEL_32:
        v1 += 160LL;
        if ( v1 == v38 )
          return;
      }
      Msg("Impact T = %g, N = %g", *&v26, *(&v26 + 1));
LABEL_35:
      Msg("\n");
      goto LABEL_32;
    }
  }
  else
  {
    CUtlHashtable<unsigned int,empty_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int>>::RemoveAll(&s_DebugCallbackEntities);
    if ( (s_DebugCallbackEntities.m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int>::Purge(&s_DebugCallbackEntities.m_table);
  }
}


// CPhysicsGameSystem::DispatchCallbacks  (line 1857, @0x0000000001f6b300, libserver.so)  // inlines: AddRef, AddRef<CUtlSharedArray<Manifold_t> >, AddToTail, AddToTail<CUtlVector<CGameEventTouchAdaptor> >, CEntityHandle, CGameEventStartTouchAdaptor, CLegacyCollisionData, CSmartPtr, CUtlMemory, CUtlSharedArrayRef, CUtlStringToken, CUtlVector, CUtlVectorBase, ComputeImpactStrength, Count, CrossProduct, DispatchEndTouch, DispatchPersistTouch, DispatchStartTouch, DotProduct, Element, Empty, Execute, FindFirstValidManifold, Get, GetContactNormalSpeed, GetEntityIdentity, GetEntryIndex, GetFirstValidManifold, GetInstance, GetInt, GetString, GetTimebaseRegister, GrowMemory, IndexToIdentity, Init, IsIdxValid, IsValidIndex, LeftChild, LookupEntity, PLAT_CPU_TIME, PhysicsContact_t, Prepare, Purge, Release, Release<CUtlSharedArray<Manifold_t> >, RemoveAll, VectorAdd, VectorMultiply, VectorSubtract, gamevcollisionevent_t, operator CBaseEntity*, operator*, operator+, operator-, operator=, operator[], vcollisionevent_t, ~CGameEventStartTouchAdaptor, ~CLegacyCollisionData, ~CSmartPtr, ~CUtlMemory, ~CUtlSharedArrayRef, ~CUtlVector, ~CUtlVectorBase, ~PhysicsContact_t, ~gamevcollisionevent_t, ~vcollisionevent_t
// calls: CMemAllocSystemInitialize, DebugCallbackEntities, operator new, CUtlMemory<CGameEventTouchAdaptor, int>::Grow, CPhysicsGameSystem::PhysFrictionSound, CBaseEntity::VPhysicsEndTouch, CBaseEntity::PhysicsTouch, CBaseEntity::VPhysicsStartTouch, operator delete, V_stristr_fast(char const*,char const*), Msg, CUtlMemory<CGameEventTouchAdaptor, int>::Purge (13 total)
// callers: CPhysicsGameSystem::OnBatchClear
// strings: "FCVAR_NEVER_AS_STRING", "VPhysicsCollision( %s, %s )\n"
// globals: CEntityHandle::gm_pEntityList, g_pPhysicsGameSystem
bool __fastcall CPhysicsGameSystem::DispatchCallbacks(CPhysicsGameSystem *const this)
{
  int m_nAllocationCount; // eax
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t>::Node_t,short unsigned int> *m_pMemory; // rcx
  int m_Size; // eax
  unsigned __int64 v4; // r14
  __int64 i; // rax
  bool v6; // bl
  char *v7; // r13
  __int64 v8; // r13
  int v9; // eax
  CGameEventTouchAdaptor *v10; // r13
  CConcreteEntityList *v11; // r8
  VPhysIntersectionNotification_t *v12; // r12
  unsigned int v13; // edx
  CBaseEntity *m_pInstance; // rsi
  CEntityIdentity *v15; // rcx
  CEntityIdentity *v16; // rcx
  CGameEventStartTouchAdaptor *v17; // rbx
  CUtlSharedArray<Manifold_t,UtlSharedArrayTraits_t> *v18; // rsi
  CUtlSharedArray<Manifold_t,UtlSharedArrayTraits_t> *m_pObj; // r15
  bool v20; // zf
  IPhysicsBody *v21; // rdi
  CUtlSharedArray<Manifold_t,UtlSharedArrayTraits_t> *v22; // rdx
  int v23; // eax
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  CUtlSharedArray<Manifold_t,UtlSharedArrayTraits_t> *v27; // r15
  float v28; // xmm1_4
  float v29; // xmm0_4
  float v30; // xmm10_4
  float v31; // xmm1_4
  float v32; // xmm3_4
  float v33; // xmm4_4
  float v34; // xmm7_4
  float v35; // xmm8_4
  float v36; // xmm2_4
  float v37; // xmm6_4
  float v38; // xmm9_4
  vec_t v39; // xmm1_4
  float v40; // xmm4_4
  float v41; // xmm3_4
  float v42; // xmm0_4
  float v43; // xmm2_4
  vec_t v44; // xmm1_4
  vec_t v45; // xmm0_4
  vec_t v46; // xmm0_4
  vec_t v47; // xmm2_4
  vec_t v48; // xmm1_4
  vec_t v49; // xmm1_4
  float v50; // xmm1_4
  float v51; // xmm1_4
  float v52; // xmm0_4
  float v53; // xmm0_4
  CUtlSharedArray<Manifold_t,UtlSharedArrayTraits_t> *v54; // rsi
  CUtlSharedArray<Manifold_t,UtlSharedArrayTraits_t> *v55; // r12
  float v56; // xmm0_4
  int v57; // eax
  __int64 v58; // r13
  int j; // r12d
  CGameEventTouchAdaptor *v60; // rbx
  uint32 m_nNotificationReason; // eax
  CBaseEntity *v62; // r14
  CBaseEntity *v63; // r15
  CGameEventStartTouchAdaptor *m_pStartTouchAdaptor; // r14
  const Manifold_t *v65; // rdx
  CUtlSharedArray<Manifold_t,UtlSharedArrayTraits_t> *v66; // rax
  char *m_pszString; // r15
  CGameEventStartTouchAdaptor *v68; // r14
  CUtlSharedArray<Manifold_t,UtlSharedArrayTraits_t> *v69; // rsi
  CUtlSharedArray<Manifold_t,UtlSharedArrayTraits_t> *v70; // rsi
  unsigned __int64 v72; // [rsp+0h] [rbp-110h]
  IVPhysics2World *pLevelWorld; // [rsp+8h] [rbp-108h]
  int v74; // [rsp+14h] [rbp-FCh]
  __int64 v75; // [rsp+18h] [rbp-F8h]
  int iLevel; // [rsp+30h] [rbp-E0h]
  float v78; // [rsp+34h] [rbp-DCh]
  float v79; // [rsp+38h] [rbp-D8h]
  float v80; // [rsp+3Ch] [rbp-D4h]
  float v81; // [rsp+40h] [rbp-D0h]
  const CUtlVector<VPhysIntersectionNotification_t,CUtlMemory<VPhysIntersectionNotification_t,int> > *intersectionNotifications; // [rsp+58h] [rbp-B8h]
  char *v83; // [rsp+60h] [rbp-B0h]
  char *v84; // [rsp+60h] [rbp-B0h]
  char *v85; // [rsp+68h] [rbp-A8h]
  char *v86; // [rsp+68h] [rbp-A8h]
  double v87; // [rsp+70h] [rbp-A0h]
  double v88; // [rsp+80h] [rbp-90h]
  double v89; // [rsp+90h] [rbp-80h]
  double hEnt; // [rsp+A0h] [rbp-70h]
  CBaseEntity *pEntity[2]; // [rsp+B0h] [rbp-60h]
  CUtlVector<CGameEventTouchAdaptor,CUtlMemory<CGameEventTouchAdaptor,int> > gameeventAdaptors; // [rsp+C0h] [rbp-50h] BYREF

  m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
  if ( m_nAllocationCount == 0 )
    goto LABEL_61;
  v75 = 0;
  iLevel = 0;
  while ( 1 )
  {
    if ( iLevel >= m_nAllocationCount )
      goto LABEL_60;
    if ( iLevel > this->m_mapLevelWorlds.m_Tree.m_LastAlloc.index )
      goto LABEL_60;
    m_pMemory = this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory;
    if ( m_pMemory[iLevel].m_Left == iLevel )
      goto LABEL_60;
    pLevelWorld = m_pMemory[v75].m_Data.elem.pPhysicsWorld;
    intersectionNotifications = (*(*pLevelWorld + 152LL))(pLevelWorld);
    m_Size = intersectionNotifications->m_Size;
    v74 = intersectionNotifications->m_Size;
    if ( intersectionNotifications->m_Size == 0 )
      return m_Size;
    gameeventAdaptors.m_Size = 0;
    v72 = __rdtsc();
    gameeventAdaptors.m_Memory.m_pMemory = 0;
    gameeventAdaptors.m_Memory.m_nGrowSize = 0;
    gameeventAdaptors.m_Memory.m_nAllocationCount = v74;
    CMemAllocSystemInitialize();
    gameeventAdaptors.m_Memory.m_pMemory = (**g_pMemAlloc)(
                                             g_pMemAlloc,
                                             32LL * gameeventAdaptors.m_Memory.m_nAllocationCount);
    DebugCallbackEntities(intersectionNotifications);
    if ( v74 <= 0 )
      goto LABEL_64;
    v4 = 0;
    while ( 2 )
    {
      v11 = CEntityHandle::gm_pEntityList;
      v12 = &intersectionNotifications->m_Memory.m_pMemory[v4 / 0xA0];
      for ( i = 0; i != 2; ++i )
      {
        v13 = v12->m_nEntityHandle[i];
        m_pInstance = 0;
        if ( v13 + 2 > 1 )
        {
          v15 = v11->m_pIdentityChunks[(v13 >> 9) & 0x3F];
          if ( v15 != 0 )
          {
            v16 = &v15[v13 & 0x1FF];
            if ( v16 != 0 && v13 == v16->m_EHandle.m_Index )
              m_pInstance = v16->m_pInstance;
          }
        }
        pEntity[i] = m_pInstance;
      }
      v85 = pEntity[0];
      if ( pEntity[0] == 0 )
        goto LABEL_19;
      v83 = pEntity[1];
      if ( pEntity[1] == 0 )
        goto LABEL_19;
      if ( (v12->m_Reason & 8) != 0 )
      {
        v6 = (*(*v12->m_hBody[0] + 40LL))(v12->m_hBody[0]) != 2;
        v7 = v12 + 8 * v6;
        if ( (*(**(v7 + 1) + 1464LL))(*(v7 + 1)) == 0 && (*(**(v7 + 1) + 40LL))(*(v7 + 1)) == 2 )
        {
          v81 = (*(g_pVPhysics2->_vptr_IAppSystem + 75))(g_pVPhysics2, v12);
          v56 = (*(**(v7 + 1) + 1600LL))(*(v7 + 1)) * v81;
          if ( v56 > 75.0 )
            CPhysicsGameSystem::PhysFrictionSound(
              g_pPhysicsGameSystem,
              pEntity[v6],
              *(v7 + 1),
              v56,
              v12->m_MaterialIndex[v6],
              v12->m_MaterialIndex[!v6]);
        }
      }
      v8 = gameeventAdaptors.m_Size;
      v9 = gameeventAdaptors.m_Size;
      if ( gameeventAdaptors.m_Size == gameeventAdaptors.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CGameEventTouchAdaptor,int>::Grow(&gameeventAdaptors.m_Memory, 1);
        v9 = gameeventAdaptors.m_Size;
      }
      gameeventAdaptors.m_Size = v9 + 1;
      v10 = &gameeventAdaptors.m_Memory.m_pMemory[v8];
      v10->m_nNotificationReason = v12->m_Reason;
      if ( (v12->m_Reason & 4) == 0 )
      {
        v10->m_pStartTouchAdaptor = 0;
        goto LABEL_18;
      }
      v17 = operator new(0x100u);  // new CGameEventStartTouchAdaptor (size matches)
      v17->m_Contact.m_pShape1 = 0;
      v17->m_Contact.m_pShape2 = 0;
      v17->m_Contact.m_Manifolds.m_pObj = 0;
      v17->_vptr_IPhysicsCollisionData = off_3FCDC90;  // vptr: CGameEventStartTouchAdaptor
      v17->m_Event.surfaceProps[0].m_nHashCode = 0;
      v17->m_Event.surfaceProps[1].m_nHashCode = 0;
      v17->m_Event.m_Contact.m_pShape1 = 0;
      v17->m_Event.m_Contact.m_pShape2 = 0;
      v17->m_Event.m_Contact.m_Manifolds.m_pObj = 0;
      v10->m_pStartTouchAdaptor = v17;
      if ( &v12->m_Contact == &v17->m_Contact )
      {
        m_pObj = v17->m_Contact.m_Manifolds.m_pObj;
      }
      else
      {
        v18 = v17->m_Contact.m_Manifolds.m_pObj;
        v17->m_Contact.m_pShape1 = v12->m_Contact.m_pShape1;
        v17->m_Contact.m_pShape2 = v12->m_Contact.m_pShape2;
        m_pObj = v12->m_Contact.m_Manifolds.m_pObj;
        if ( m_pObj != v18 )
        {
          if ( m_pObj != 0 )
          {
            ++m_pObj->m_nRefCount;
            v18 = v17->m_Contact.m_Manifolds.m_pObj;
          }
          if ( v18 != 0 )
          {
            v20 = v18->m_nRefCount-- == 1;
            if ( v20 )
              (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
          }
          v17->m_Contact.m_Manifolds.m_pObj = m_pObj;
        }
      }
      v21 = v12->m_hBody[0];
      v22 = m_pObj;
      v17->m_hBody1 = v21;
      v17->m_hBody2 = v12->m_hBody[1];
      v23 = 0;
      while ( m_pObj != 0 )
      {
        if ( v23 >= m_pObj->m_nElementCount )
          goto LABEL_40;
LABEL_36:
        v22 += 34;
        if ( v22[-33].m_nRefCount > 0 )
          goto LABEL_41;
        ++v23;
      }
      if ( v23 < 0 )
        goto LABEL_36;
LABEL_40:
      v23 = 0;
LABEL_41:
      v17->m_nFirstValidManifold = v23;
      v17->m_vNormal.x = 0.0;
      v17->m_vNormal.y = 0.0;
      v17->m_vNormal.z = 1.0;
      x = vec3_origin.x;
      y = vec3_origin.y;
      z = vec3_origin.z;
      v17->m_vRelSpeed.x = vec3_origin.x;
      v17->m_vRelSpeed.y = y;
      v17->m_vRelSpeed.z = z;
      v17->m_vPoint.x = x;
      v17->m_vPoint.y = y;
      v17->m_vPoint.z = z;
      if ( m_pObj != 0 && m_pObj->m_nElementCount != 0 )
      {
        v27 = &m_pObj[34 * v23 + 1];
        if ( v27 != 0 )
        {
          LODWORD(v17->m_vPoint.x) = v27->m_nElementCount;
          LODWORD(v17->m_vPoint.y) = v27[1].m_nRefCount;
          LODWORD(v17->m_vPoint.z) = v27[1].m_nElementCount;
          hEnt = (*(*v21 + 288LL))(v21);
          v80 = v17->m_vPoint.x - *&hEnt;
          v79 = v17->m_vPoint.y - *(&hEnt + 1);
          v78 = v17->m_vPoint.z - v28;
          v89 = (*(*v17->m_hBody2 + 288LL))(v17->m_hBody2);
          v29 = v12->m_vAngularVelocityBefore[0].x;
          v30 = v12->m_vAngularVelocityBefore[0].z;
          v32 = v17->m_vPoint.z - v31;
          v33 = v12->m_vAngularVelocityBefore[1].x;
          v34 = v17->m_vPoint.x - *&v89;
          v35 = v12->m_vAngularVelocityBefore[1].z;
          v36 = v12->m_vAngularVelocityBefore[0].y;
          v37 = v17->m_vPoint.y - *(&v89 + 1);
          v38 = v12->m_vAngularVelocityBefore[1].y;
          v39 = (((v80 * v30) - (v78 * v29)) + v12->m_vLinearVelocityBefore[0].y)
              - (((v34 * v35) - (v32 * v33)) + v12->m_vLinearVelocityBefore[1].y);
          v40 = ((v33 * v37) - (v34 * v38)) + v12->m_vLinearVelocityBefore[1].z;
          v41 = ((v32 * v38) - (v37 * v35)) + v12->m_vLinearVelocityBefore[1].x;
          v42 = ((v29 * v79) - (v80 * v36)) + v12->m_vLinearVelocityBefore[0].z;
          v43 = ((v36 * v78) - (v30 * v79)) + v12->m_vLinearVelocityBefore[0].x;
          v17->m_vRelSpeed.y = v39;
          v17->m_vRelSpeed.z = v42 - v40;
          v17->m_vRelSpeed.x = v43 - v41;
          LODWORD(v17->m_vNormal.x) = v27[28].m_nRefCount;
          LODWORD(v17->m_vNormal.y) = v27[28].m_nElementCount;
          LODWORD(v17->m_vNormal.z) = v27[29].m_nRefCount;
        }
      }
      v17->m_nReason = v12->m_Reason;
      v17->m_Event.pEntities[0] = v85;
      v17->m_Event.pEntities[1] = v83;
      v17->m_Event.pObjects[0] = v12->m_hBody[0];
      v17->m_Event.pObjects[1] = v12->m_hBody[1];
      v17->m_Event.surfaceProps[0].m_nHashCode = v12->m_MaterialIndex[0].m_nHashCode;
      v17->m_Event.surfaceProps[1].m_nHashCode = v12->m_MaterialIndex[1].m_nHashCode;
      v17->m_Event.preVelocity[0].x = v12->m_vLinearVelocityBefore[0].x;
      v17->m_Event.preVelocity[0].y = v12->m_vLinearVelocityBefore[0].y;
      v17->m_Event.preVelocity[0].z = v12->m_vLinearVelocityBefore[0].z;
      v17->m_Event.preVelocity[1].x = v12->m_vLinearVelocityBefore[1].x;
      v17->m_Event.preVelocity[1].y = v12->m_vLinearVelocityBefore[1].y;
      v17->m_Event.preVelocity[1].z = v12->m_vLinearVelocityBefore[1].z;
      v44 = 57.295776 * v12->m_vAngularVelocityBefore[0].y;
      v45 = 57.295776 * v12->m_vAngularVelocityBefore[0].z;
      v17->m_Event.preAngularVelocity[0].x = 57.295776 * v12->m_vAngularVelocityBefore[0].x;
      v17->m_Event.preAngularVelocity[0].y = v44;
      v17->m_Event.preAngularVelocity[0].z = v45;
      v46 = 57.295776 * v12->m_vAngularVelocityBefore[1].z;
      v47 = 57.295776 * v12->m_vAngularVelocityBefore[1].x;
      v17->m_Event.preAngularVelocity[1].y = 57.295776 * v12->m_vAngularVelocityBefore[1].y;
      v17->m_Event.preAngularVelocity[1].z = v46;
      v17->m_Event.preAngularVelocity[1].x = v47;
      v88 = (*(*v12->m_hBody[0] + 560LL))(v12->m_hBody[0]);
      v17->m_Event.postVelocity[0].z = v48;
      *&v17->m_Event.postVelocity[0].x = v88;
      v87 = (*(*v12->m_hBody[1] + 560LL))(v12->m_hBody[1]);
      v17->m_Event.postVelocity[1].z = v49;
      v50 = v17->m_vRelSpeed.y;
      v17->m_Event.postVelocity[1].x = *&v87;
      v51 = v50 * v17->m_vNormal.y;
      v17->m_Event.isCollision = 1;
      v17->m_Event.postVelocity[1].y = *(&v87 + 1);
      v52 = v17->m_vRelSpeed.x;
      v17->m_Event.isShadowCollision = 0;
      v17->m_Event.deltaCollisionTime = 10.0;
      v53 = v52 * v17->m_vNormal.x;
      v17->m_Event.pInternalData = v17;
      v17->m_Event.collisionSpeed = fabs((v53 + v51) + (v17->m_vRelSpeed.z * v17->m_vNormal.z));
      if ( &v12->m_Contact != &v17->m_Event.m_Contact )
      {
        v54 = v17->m_Event.m_Contact.m_Manifolds.m_pObj;
        v17->m_Event.m_Contact.m_pShape1 = v12->m_Contact.m_pShape1;
        v17->m_Event.m_Contact.m_pShape2 = v12->m_Contact.m_pShape2;
        v55 = v12->m_Contact.m_Manifolds.m_pObj;
        if ( v55 != v54 )
        {
          if ( v55 != 0 )
          {
            ++v55->m_nRefCount;
            v54 = v17->m_Event.m_Contact.m_Manifolds.m_pObj;
          }
          if ( v54 != 0 )
          {
            v20 = v54->m_nRefCount-- == 1;
            if ( v20 )
              (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
          }
          v17->m_Event.m_Contact.m_Manifolds.m_pObj = v55;
        }
      }
LABEL_18:
      v10->m_pEntity[0] = v85;
      v10->m_pEntity[1] = v83;
LABEL_19:
      v4 += 160LL;
      if ( v4 != 32 * (5LL * (v74 - 1) + 5) )
        continue;
      break;
    }
LABEL_64:
    v58 = 0;
    for ( j = 0; gameeventAdaptors.m_Size > j; ++v58 )
    {
      v60 = &gameeventAdaptors.m_Memory.m_pMemory[v58];
      m_nNotificationReason = gameeventAdaptors.m_Memory.m_pMemory[v58].m_nNotificationReason;
      if ( (m_nNotificationReason & 4) != 0 )
      {
        m_pStartTouchAdaptor = v60->m_pStartTouchAdaptor;
        v65 = 0;
        v66 = m_pStartTouchAdaptor->m_Contact.m_Manifolds.m_pObj;
        if ( v66 != 0 && v66->m_nElementCount != 0 )
          v65 = &v66[34 * m_pStartTouchAdaptor->m_nFirstValidManifold + 1];
        CBaseEntity::VPhysicsStartTouch(
          m_pStartTouchAdaptor->m_Event.pEntities[0],
          m_pStartTouchAdaptor->m_Event.pEntities[1],
          v65);
        if ( phys_callbacks.m_pParent->m_Value.m_nValue != 0 && (m_pStartTouchAdaptor->m_nReason & 1) != 0 )
        {
          m_pszString = "FCVAR_NEVER_AS_STRING";
          if ( (phys_stop_at_collision.m_nFlags & 0x1000) == 0 )
          {
            m_pszString = phys_stop_at_collision.m_pParent->m_Value.m_pszString;
            if ( m_pszString == 0 )
              m_pszString = "";
          }
          if ( *m_pszString != 0 )
          {
            v86 = (*(*m_pStartTouchAdaptor->m_hBody1 + 1256LL))(m_pStartTouchAdaptor->m_hBody1);
            v84 = (*(*m_pStartTouchAdaptor->m_hBody2 + 1256LL))(m_pStartTouchAdaptor->m_hBody2);
            if ( V_stristr_fast(v86, m_pszString) != 0 || V_stristr_fast(v84, m_pszString) != 0 )
              Msg("VPhysicsCollision( %s, %s )\n", v86, v84);
          }
          (*(m_pStartTouchAdaptor->m_Event.pEntities[0]->_vptr_IHandleEntity + 57))(
            m_pStartTouchAdaptor->m_Event.pEntities[0],
            0,
            &m_pStartTouchAdaptor->m_Event);
          (*(m_pStartTouchAdaptor->m_Event.pEntities[1]->_vptr_IHandleEntity + 57))(
            m_pStartTouchAdaptor->m_Event.pEntities[1],
            1,
            &m_pStartTouchAdaptor->m_Event);
        }
        v68 = v60->m_pStartTouchAdaptor;
        if ( v68 != 0 )
        {
          v69 = v68->m_Event.m_Contact.m_Manifolds.m_pObj;
          v68->_vptr_IPhysicsCollisionData = off_3FCDC90;  // vptr: CGameEventStartTouchAdaptor
          if ( v69 != 0 )
          {
            v20 = v69->m_nRefCount-- == 1;
            if ( v20 )
              (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
          }
          v70 = v68->m_Contact.m_Manifolds.m_pObj;
          v68->_vptr_IPhysicsCollisionData = off_3FCDC50;  // vptr: CLegacyCollisionData
          if ( v70 != 0 )
          {
            v20 = v70->m_nRefCount-- == 1;
            if ( v20 )
              (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
          }
          operator delete(v68);
        }
        v60->m_pStartTouchAdaptor = 0;
        m_nNotificationReason = v60->m_nNotificationReason;
      }
      if ( (m_nNotificationReason & 8) != 0 )
      {
        v62 = v60->m_pEntity[1];
        v63 = v60->m_pEntity[0];
        CBaseEntity::PhysicsTouch(v60->m_pEntity[0], v62);
        CBaseEntity::PhysicsTouch(v62, v63);
        m_nNotificationReason = v60->m_nNotificationReason;
      }
      if ( (m_nNotificationReason & 0x10) != 0 )
        CBaseEntity::VPhysicsEndTouch(v60->m_pEntity[0], v60->m_pEntity[1]);
      ++j;
    }
    v57 = 0;
    if ( v74 + this->m_IONotificationKey <= 0x3FFFFFFF )
      v57 = v74 + this->m_IONotificationKey;
    this->m_IONotificationKey = v57;
    (*(*pLevelWorld + 160LL))(pLevelWorld, 23, __rdtsc() - v72);
    (*(*pLevelWorld + 168LL))(pLevelWorld);
    gameeventAdaptors.m_Size = 0;
    if ( (gameeventAdaptors.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CGameEventTouchAdaptor,int>::Purge(&gameeventAdaptors.m_Memory);
      if ( (gameeventAdaptors.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CGameEventTouchAdaptor,int>::Purge(&gameeventAdaptors.m_Memory);
    }
    m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
LABEL_60:
    ++iLevel;
    ++v75;
    if ( m_nAllocationCount <= iLevel )
    {
LABEL_61:
      LOBYTE(m_Size) = 1;
      return m_Size;
    }
  }
}


// CPhysicsGameSystem::NotifyAggregateInitialized  (line 1959, @0x0000000001f55b00, libserver.so)  // inlines: GetBool, GetInt, LogUpdater, MarkForKinematicUpdate
// calls: CPhysicsGameSystem::ActivateKinematicTransformUpdater, CPhysicsGameSystem::LogUpdater
// callers: CModelState::SetupPhysics
void __fastcall CPhysicsGameSystem::NotifyAggregateInitialized(
        CPhysicsGameSystem *const this,
        CSkeletonInstance *pSkeletonInstance,
        IPhysAggregateInstance *pAggregateInstance)
{
  int (**vptr_IPhysAggregateInstance)(...); // rax
  IPhysAggregateInstance *v6; // [rsp-20h] [rbp-20h]

  if ( pAggregateInstance != 0 )
  {
    *(pSkeletonInstance + 722) &= ~8u;
    if ( phys_log_updaters.m_pParent->m_Value.m_nValue != 0 )
    {
      v6 = pAggregateInstance;
      CPhysicsGameSystem::LogUpdater(&stru_32DB07A, pSkeletonInstance, pAggregateInstance);
      pAggregateInstance = v6;
    }
    vptr_IPhysAggregateInstance = pAggregateInstance->_vptr_IPhysAggregateInstance;
    pAggregateInstance->m_pSkeleton = pSkeletonInstance;
    if ( ((vptr_IPhysAggregateInstance[26])(pAggregateInstance) & 2) != 0 )
      CPhysicsGameSystem::ActivateKinematicTransformUpdater(this, pSkeletonInstance);
  }
}


// CPhysicsGameSystem::NotifyAggregateShutdown  (line 1977, @0x0000000001f42820, libserver.so)  // inlines: DeactivateKinematicTransformUpdater, GetBool, GetInt, LogUpdater, MarkForKinematicUpdate
// calls: CPhysicsGameSystem::DestroyHierarchyConstraint, CUtlVectorBase<CSkeletonInstance*, CUtlMemory<CSkeletonInstance*, int> >::FindAndFastRemove, CPhysicsGameSystem::LogUpdater
// callers: CModelState::CleanupPhysics
void __fastcall CPhysicsGameSystem::NotifyAggregateShutdown(
        CPhysicsGameSystem *const this,
        CSkeletonInstance *pSkeleton)
{
  CSkeletonInstance *v2; // rdx
  CGameSceneNode *i; // rbx
  CSkeletonInstance *v6; // rax
  bool v7; // zf
  CSkeletonInstance *src; // [rsp+8h] [rbp-28h] BYREF

  if ( phys_log_updaters.m_pParent->m_Value.m_nValue != 0 )
    CPhysicsGameSystem::LogUpdater(&stru_32D9EEC, pSkeleton, v2);
  CPhysicsGameSystem::DestroyHierarchyConstraint(this, pSkeleton);
  for ( i = pSkeleton->m_pChild; i != 0; i = i->m_pNextSibling )
  {
    v6 = (*(i->_vptr_CGameSceneNode + 9))(i);
    if ( v6 != 0 )
      CPhysicsGameSystem::DestroyHierarchyConstraint(this, v6);
  }
  v7 = (*(pSkeleton + 722) & 8) == 0;
  src = pSkeleton;
  if ( !v7 )
  {
    CUtlVectorBase<CSkeletonInstance *,CUtlMemory<CSkeletonInstance *,int>>::FindAndFastRemove(
      &this->m_kinematicsToUpdate,
      &src);
    *(src + 722) &= ~8u;
  }
}


// CPhysicsGameSystem::TeleportToAnimationState  (line 1997, @0x0000000001f55c00, libserver.so)  // inlines: CTransform, CalcAbsolutePosition, Load, MatrixTransform, NodeToWorldTransform, TransformNormalize, VectorAligned
// calls: CSkeletonInstance::GetWorldSpaceTransform, MatrixTransform, CSkeletonInstance::FindBoneIndexForPhysicsBoneIndex, MatrixCopy, CPhysicsGameSystem::MarkChanged, QuaternionNormalize, CGameSceneNode::CalcAbsolutePositionWhenDirty
void __fastcall CPhysicsGameSystem::TeleportToAnimationState(
        CPhysicsGameSystem *const this,
        CSkeletonInstance *pSkeleton)
{
  IPhysAggregateInstance *m_pVPhysicsAggregate; // rbx
  unsigned int v4; // r12d
  int v5; // eax
  unsigned int v6; // r12d
  const matrix3x4a_t *WorldSpaceTransform; // rax
  __int64 v8; // rsi
  int16 BoneIndexForPhysicsBoneIndex; // ax
  float v10; // xmm0_4
  __int64 v11; // rax
  __int64 v12; // r15
  HPhysicsBody hBody; // [rsp+20h] [rbp-A0h]
  int nParts; // [rsp+2Ch] [rbp-94h]
  Vector v16; // [rsp+30h] [rbp-90h] BYREF
  CTransform t; // [rsp+40h] [rbp-80h] BYREF
  CTransform rootToWorld; // [rsp+60h] [rbp-60h] BYREF
  __int64 v19; // [rsp+80h] [rbp-40h]
  __int64 v20; // [rsp+88h] [rbp-38h]

  m_pVPhysicsAggregate = pSkeleton->m_modelState.m_pVPhysicsAggregate;
  if ( m_pVPhysicsAggregate != 0 )
  {
    v4 = *((*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 41))(pSkeleton->m_modelState.m_pVPhysicsAggregate)
         + 32);
    v5 = (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 9))(m_pVPhysicsAggregate);
    nParts = v5;
    if ( v4 != 0 )
    {
      t.m_vPosition.w = 0.0;
      if ( v5 > 0 )
      {
        v6 = 0;
        do
        {
          BoneIndexForPhysicsBoneIndex = CSkeletonInstance::FindBoneIndexForPhysicsBoneIndex(pSkeleton, v6);
          if ( BoneIndexForPhysicsBoneIndex >= 0 )
          {
            WorldSpaceTransform = CSkeletonInstance::GetWorldSpaceTransform(pSkeleton, BoneIndexForPhysicsBoneIndex);
            rootToWorld = *&WorldSpaceTransform->m_flMatVal[0][0];
            v19 = *&WorldSpaceTransform->m_flMatVal[2][0];
            v20 = *&WorldSpaceTransform->m_flMatVal[2][2];
          }
          else
          {
            if ( pSkeleton->m_bDirtyAbsTransform.m_value )
              CGameSceneNode::CalcAbsolutePositionWhenDirty(pSkeleton);
            MatrixCopy(&pSkeleton->m_mNodeToWorld, &rootToWorld);
          }
          MatrixTransform(&rootToWorld, &t, &v16);
          v8 = v6++;
          hBody = (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 10))(m_pVPhysicsAggregate, v8);
          (*(*hBody + 432LL))(hBody, &t);
          (*(*hBody + 856LL))(hBody);
        }
        while ( v6 != nParts );
      }
    }
    else if ( v5 > 0 )
    {
      do
      {
        v11 = (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 10))(m_pVPhysicsAggregate, v4);
        rootToWorld.m_vPosition.w = 0.0;
        v12 = v11;
        if ( pSkeleton->m_bDirtyAbsTransform.m_value )
          CGameSceneNode::CalcAbsolutePositionWhenDirty(pSkeleton);
        ++v4;
        MatrixTransform(&pSkeleton->m_mNodeToWorld, &rootToWorld);
        v10 = QuaternionNormalize(&rootToWorld.m_orientation);
        (*(*v12 + 432LL))(v12, &rootToWorld, v10);
        (*(*v12 + 856LL))(v12);
      }
      while ( v4 != nParts );
    }
    CPhysicsGameSystem::MarkChanged(this, pSkeleton);
  }
}


// CPhysicsGameSystem::UpdateLevelDebugRender  (line 2053, @0x0000000001f368b0, libserver.so)  // inlines: Element, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: CPhysicsGameSystem::UpdateDebugSceneSession
// callers: CPhysicsGameSystem::CreateLevelWorld
void __fastcall CPhysicsGameSystem::UpdateLevelDebugRender(CPhysicsGameSystem *const this)
{
  __int64 v2; // r12
  int v3; // ebx
  int m_nAllocationCount; // eax
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t>::Node_t,short unsigned int> *m_pMemory; // rcx
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t>::Node_t,short unsigned int> *v6; // r14

  v2 = 0;
  v3 = 0;
  m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
  if ( m_nAllocationCount != 0 )
  {
    do
    {
      if ( v3 < m_nAllocationCount && v3 <= this->m_mapLevelWorlds.m_Tree.m_LastAlloc.index )
      {
        m_pMemory = this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory;
        if ( m_pMemory[v3].m_Left != v3 )
        {
          v6 = &m_pMemory[v2];
          CPhysicsGameSystem::UpdateDebugSceneSession(this, &m_pMemory[v2].m_Data.elem);
          if ( !v6->m_Data.elem.bNeedsDebugDraw )
            (*(*v6->m_Data.elem.pPhysicsWorld + 1400LL))(v6->m_Data.elem.pPhysicsWorld, 0);
          m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
        }
      }
      ++v3;
      ++v2;
    }
    while ( m_nAllocationCount > v3 );
  }
}


// CPhysicsGameSystem::UpdateDebugSceneSession  (line 2067, @0x0000000001f367c0, libserver.so)
// callers: CPhysicsGameSystem::OnWorldRequiresDebugRendering, CPhysicsGameSystem::UpdateLevelDebugRender
void __fastcall CPhysicsGameSystem::UpdateDebugSceneSession(
        CPhysicsGameSystem *const this,
        const CPhysicsGameSystem::PhysicsWorld_t *const physWorld)
{
  __int64 *v3; // rax
  __int64 v4; // rdx
  ISceneWorld *pDebugSceneWorld; // rsi

  v3 = g_pLoopModeGameSharedState->GetWorldSession();
  if ( v3 != 0 )
  {
    v4 = *v3;
    pDebugSceneWorld = physWorld->pDebugSceneWorld;
    if ( physWorld->bNeedsDebugDraw )
      (*(v4 + 88))(v3, pDebugSceneWorld);
    else
      (*(v4 + 96))(v3, pDebugSceneWorld);
  }
}


// CPhysicsGameSystem::FlushClothUpdates  (line 2082, @0x0000000001f36940, libserver.so)  // inlines: IsIdxValid, IsValidIndex, LeftChild
// calls: CSkeletonInstance::FlushClothUpdates
void __fastcall CPhysicsGameSystem::FlushClothUpdates(CPhysicsGameSystem *const this, bool bTeleport)
{
  __int64 v3; // r13
  int v4; // r12d
  int m_nAllocationCount; // eax
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t>::Node_t,short unsigned int> *m_pMemory; // rcx
  unsigned int v7; // ebx
  IVPhysics2World *pPhysicsWorld; // rdi
  IPhysicsSoftbody *v9; // r15
  CSkeletonInstance *v10; // rax
  int nSoftbodyCount; // [rsp+Ch] [rbp-34h]

  v3 = 0;
  v4 = 0;
  m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
  if ( m_nAllocationCount != 0 )
  {
    do
    {
      if ( v4 < m_nAllocationCount && v4 <= this->m_mapLevelWorlds.m_Tree.m_LastAlloc.index )
      {
        m_pMemory = this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory;
        if ( m_pMemory[v4].m_Left != v4 )
        {
          v7 = 0;
          nSoftbodyCount = (*(*m_pMemory[v3].m_Data.elem.pPhysicsWorld + 744LL))(m_pMemory[v3].m_Data.elem.pPhysicsWorld);
          if ( nSoftbodyCount > 0 )
          {
            do
            {
              pPhysicsWorld = this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory[v3].m_Data.elem.pPhysicsWorld;
              v9 = (*(*pPhysicsWorld + 752LL))(pPhysicsWorld, v7);
              v10 = (*(*v9 + 1256LL))(v9, 0);
              if ( v10 != 0 )
                CSkeletonInstance::FlushClothUpdates(v10, v9, bTeleport);
              ++v7;
            }
            while ( v7 != nSoftbodyCount );
          }
          m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
        }
      }
      ++v4;
      ++v3;
    }
    while ( m_nAllocationCount > v4 );
  }
}


// CPhysicsGameSystem::FindSkeletonInstance  (line 2099, @0x0000000001f36a20, libserver.so)  // inlines: IsIdxValid, IsValidIndex, LeftChild
bool __fastcall CPhysicsGameSystem::FindSkeletonInstance(CPhysicsGameSystem *const this, CSkeletonInstance *pInstance)
{
  int v3; // r13d
  __int64 v4; // r12
  int m_nAllocationCount; // eax
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t>::Node_t,short unsigned int> *m_pMemory; // rsi
  unsigned int v7; // ebx
  int v8; // r14d
  IVPhysics2World *pPhysicsWorld; // rdi
  __int64 v10; // rax

  v3 = 0;
  v4 = 0;
  m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
  if ( m_nAllocationCount == 0 )
    return 0;
  while ( 1 )
  {
    if ( m_nAllocationCount > v3 )
    {
      if ( v3 > this->m_mapLevelWorlds.m_Tree.m_LastAlloc.index )
        goto LABEL_11;
      m_pMemory = this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory;
      if ( m_pMemory[v3].m_Left == v3 )
        goto LABEL_11;
      v7 = 0;
      v8 = (*(*m_pMemory[v4].m_Data.elem.pPhysicsWorld + 744LL))(m_pMemory[v4].m_Data.elem.pPhysicsWorld);
      if ( v8 > 0 )
        break;
LABEL_10:
      m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
    }
LABEL_11:
    ++v3;
    ++v4;
    if ( m_nAllocationCount <= v3 )
      return 0;
  }
  while ( 1 )
  {
    pPhysicsWorld = this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory[v4].m_Data.elem.pPhysicsWorld;
    v10 = (*(*pPhysicsWorld + 752LL))(pPhysicsWorld, v7);
    if ( (*(*v10 + 1256LL))(v10, 0) == pInstance )
      return 1;
    if ( ++v7 == v8 )
      goto LABEL_10;
  }
}


// CPhysicsGameSystem::PullSoftbodyTransforms  (line 2117, @0x0000000001f36b10, libserver.so)  // inlines: CVProfScope, IsEnabled, IsIdxValid, IsValidIndex, LeftChild, ~CVProfScope
// calls: CSkeletonInstance::HasRenderedSinceLastClientTick, CSkeletonInstance::CopyTransformsToCloth, CSkeletonInstance::FlushClothUpdates, CVProfile::ExitScope, CVProfile::EnterScope, _Unwind_Resume
// callers: CPhysicsGameSystem::OnSimulate
// strings: "Server Physics", "CPhysicsGameSystem::PullSoftbodyTransforms"
void __fastcall CPhysicsGameSystem::PullSoftbodyTransforms(CPhysicsGameSystem *const this)
{
  int m_enabled; // edx
  int m_nAllocationCount; // eax
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t>::Node_t,short unsigned int> *m_pMemory; // rcx
  unsigned int v5; // r12d
  IVPhysics2World *pPhysicsWorld; // rdi
  IPhysicsSoftbody *v7; // rbx
  const CSkeletonInstance *v8; // rax
  CSkeletonInstance *v9; // r13
  bool HasRenderedSinceLastClientTick; // r14
  bool VProf_2119; // [rsp+Fh] [rbp-41h]
  int iLevel; // [rsp+10h] [rbp-40h]
  int v13; // [rsp+14h] [rbp-3Ch]
  __int64 v14; // [rsp+18h] [rbp-38h]

  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_2119 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(
      &g_VProfCurrentProfile,
      "CPhysicsGameSystem::PullSoftbodyTransforms",
      0,
      "Server Physics",
      0,
      4);
  m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
  if ( m_nAllocationCount != 0 )
  {
    v14 = 0;
    for ( iLevel = 0; m_nAllocationCount > iLevel; ++iLevel )
    {
      if ( iLevel < m_nAllocationCount && iLevel <= this->m_mapLevelWorlds.m_Tree.m_LastAlloc.index )
      {
        m_pMemory = this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory;
        if ( m_pMemory[iLevel].m_Left != iLevel )
        {
          v13 = (*(*m_pMemory[v14].m_Data.elem.pPhysicsWorld + 744LL))(m_pMemory[v14].m_Data.elem.pPhysicsWorld);
          if ( v13 > 0 )
          {
            v5 = 0;
            while ( 1 )
            {
              pPhysicsWorld = this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory[v14].m_Data.elem.pPhysicsWorld;
              v7 = (*(*pPhysicsWorld + 752LL))(pPhysicsWorld, v5);
              v8 = (*(*v7 + 1256LL))(v7, 0);
              v9 = v8;
              if ( v8 == 0 )
                goto LABEL_11;
              HasRenderedSinceLastClientTick = CSkeletonInstance::HasRenderedSinceLastClientTick(v8);
              if ( (*(*v7 + 800LL))(v7) != 0 )
              {
                if ( HasRenderedSinceLastClientTick )
                {
                  (*(*v7 + 608LL))(v7);
                  CSkeletonInstance::FlushClothUpdates(v9, v7, 1);
                  goto LABEL_15;
                }
LABEL_11:
                if ( ++v5 == v13 )
                  break;
              }
              else
              {
                if ( !HasRenderedSinceLastClientTick )
                {
                  (*(*v7 + 808LL))(v7);
                  goto LABEL_11;
                }
LABEL_15:
                CSkeletonInstance::CopyTransformsToCloth(v9, v7);
                if ( ++v5 == v13 )
                  break;
              }
            }
          }
          m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
        }
      }
      ++v14;
    }
  }
  if ( VProf_2119 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CPhysicsGameSystem::StartSimulateFrame  (line 2174, @0x0000000001f36d00, libserver.so)  // inlines: IsIdxValid, IsValidIndex, LeftChild, curtime
// calls: __stack_chk_fail
// callers: CPhysicsGameSystem::OnSimulate
void __fastcall CPhysicsGameSystem::StartSimulateFrame(CPhysicsGameSystem *const this)
{
  int m_NumElements; // r14d
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v4; // r13
  int m_nAllocationCount; // ecx
  __int64 v6; // r8
  __int64 v7; // r9
  void *v8; // rsp
  int v9; // eax
  unsigned __int64 v10; // rsi
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t>::Node_t,short unsigned int> *m_pMemory; // r10
  __int64 v12; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  PhysicsWorldUpdateConCommParams_t params; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-28h]
  __int64 v16; // [rsp+10h] [rbp-20h] BYREF

  v15 = __readfsqword(0x28u);
  m_NumElements = this->m_mapLevelWorlds.m_Tree.m_NumElements;
  if ( m_NumElements != 0 )
  {
    m_flCurrentTime = 0.0;
    v4 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      m_flCurrentTime = v4->m_flCurrentTime;
    }
    params.m_flCurrentGameTime = m_flCurrentTime;
    (*(g_pVPhysics2->_vptr_IAppSystem + 74))(g_pVPhysics2, &params);
    m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
    v6 = 0;
    v7 = 0;
    v8 = alloca((((8 * m_NumElements + 31) & 0xFFFFFFF0) + 30) & 0x3FFFF0);
    v9 = 0;
    v10 = &v16 & 0xFFFFFFFFFFFFFFEFLL;
    if ( m_nAllocationCount != 0 )
    {
      do
      {
        if ( v9 < m_nAllocationCount && v9 <= this->m_mapLevelWorlds.m_Tree.m_LastAlloc.index )
        {
          m_pMemory = this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory;
          if ( m_pMemory[v9].m_Left != v9 )
          {
            v12 = v7;
            v7 = (v7 + 1);
            *(v10 + 8 * v12) = m_pMemory[v6].m_Data.elem.pPhysicsWorld;
            m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
          }
        }
        ++v9;
        ++v6;
      }
      while ( m_nAllocationCount > v9 );
    }
    (*(g_pVPhysics2->_vptr_IAppSystem + 80))(
      g_pVPhysics2,
      v10,
      m_NumElements,
      this->m_nSubStepCount,
      v6 * 48,
      v7,
      this->m_flSubStepInterval * phys_timescale.m_pParent->m_Value.m_fValue);
  }
}


// CPhysicsGameSystem::FinishSimulateFrame  (line 2196, @0x0000000001f3fdd0, libserver.so)  // inlines: Axis, CalcAbsolutePosition, Element, GetAbsOrigin, GetBool, GetClassNameAsCStr, GetEntityNameAsCStr, GetInt, GetTimebaseRegister, IsIdxValid, IsValidIndex, LeftChild, Load, PLAT_CPU_TIME, String, Text, VertexColor_t, operator[]
// calls: AngleMatrix, CGameSceneNode::GetOwnerEntity, V_sprintf_safe<512ul>, CGameSceneNode::CalcAbsolutePositionWhenDirty, __stack_chk_fail
// callers: CPhysicsGameSystem::OnSimulate
void __fastcall CPhysicsGameSystem::FinishSimulateFrame(
        CPhysicsGameSystem *const this,
        VPhysXWorldStepResults *pResults)
{
  int m_nAllocationCount; // eax
  int v4; // r14d
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t>::Node_t,short unsigned int> *m_pMemory; // rcx
  int v6; // r13d
  CBaseEntity *OwnerEntity; // rax
  const char *m_pAsString; // rcx
  CEntityIdentity *m_pEntity; // rax
  const char *v10; // rdx
  void (__fastcall *v11)(ISceneViewDebugOverlays *, Vector *, _QWORD, char *, matrix3x4_t *, double, double); // rax
  void **v12; // rax
  CGameSceneNode *v13; // rbx
  unsigned __int64 v14; // [rsp+10h] [rbp-2B0h]
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t>::Node_t,short unsigned int> *v15; // [rsp+18h] [rbp-2A8h]
  __int64 v16; // [rsp+20h] [rbp-2A0h]
  ISceneViewDebugOverlays *v18; // [rsp+30h] [rbp-290h]
  __int64 v19; // [rsp+40h] [rbp-280h]
  matrix3x4_t v20; // [rsp+50h] [rbp-270h] BYREF
  char pEntDesc[512]; // [rsp+80h] [rbp-240h] BYREF
  unsigned __int64 v22; // [rsp+288h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  if ( this->m_mapLevelWorlds.m_Tree.m_NumElements != 0 )
  {
    m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
    if ( m_nAllocationCount != 0 )
    {
      v16 = 0;
      v4 = 0;
      do
      {
        if ( m_nAllocationCount > v4 && v4 <= this->m_mapLevelWorlds.m_Tree.m_LastAlloc.index )
        {
          m_pMemory = this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory;
          if ( m_pMemory[v4].m_Left != v4 )
          {
            v14 = __rdtsc();
            v15 = &m_pMemory[v16];
            (*(*v15->m_Data.elem.pPhysicsWorld + 200LL))(v15->m_Data.elem.pPhysicsWorld, pResults);
            if ( phys_visualize_awake.m_pParent->m_Value.m_nValue != 0 && pResults->m_awake.m_Size > 0 )
            {
              v6 = 0;
              v19 = 0;
              do
              {
                v12 = pResults->m_awake.m_Memory.m_pMemory;
                v13 = v12[v19];
                if ( v13->m_bDirtyAbsTransform.m_value )
                  CGameSceneNode::CalcAbsolutePositionWhenDirty(v12[v19]);
                v18 = debugoverlay;
                AngleMatrix(&vec3_angle, &v13->m_vecAbsOrigin, &v20);
                (*(v18->_vptr_ISceneViewDebugOverlays + 27))(v18, &v20, 1, 4.0, 0.0);
                OwnerEntity = CGameSceneNode::GetOwnerEntity(v13);
                m_pAsString = "";
                m_pEntity = OwnerEntity->m_pEntity;
                if ( m_pEntity->m_designerName.u.m_Id != 0 )
                  m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
                v10 = "";
                if ( m_pEntity->m_name.u.m_Id != 0 )
                  v10 = m_pEntity->m_name.u.m_pAsString;
                V_sprintf_safe<512ul>(pEntDesc, "%s (%s)", v10, m_pAsString);
                if ( v13->m_bDirtyAbsTransform.m_value )
                  CGameSceneNode::CalcAbsolutePositionWhenDirty(v13);
                ++v6;
                v11 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 25);
                v20.m_flMatVal[0][0] = NAN;
                v11(debugoverlay, &v13->m_vecAbsOrigin, 0, pEntDesc, &v20, 0.0, 0.0);
                ++v19;
              }
              while ( pResults->m_awake.m_Size > v6 );
            }
            if ( v15->m_Data.elem.bNeedsDebugDraw )
            {
              (*(*v15->m_Data.elem.pPhysicsWorld + 272LL))(v15->m_Data.elem.pPhysicsWorld, g_pDebugOverlay);
              *(this + 360) |= 1u;
            }
            (*(*v15->m_Data.elem.pPhysicsWorld + 160LL))(v15->m_Data.elem.pPhysicsWorld, 36, __rdtsc() - v14, 1);
            m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
          }
        }
        ++v16;
        ++v4;
      }
      while ( m_nAllocationCount > v4 );
    }
  }
}


// CPhysicsGameSystem::UpdateSceneObjects  (line 2239, @0x0000000001f2f470, libserver.so)  // inlines: IsIdxValid, IsValidIndex, LeftChild
void __fastcall CPhysicsGameSystem::UpdateSceneObjects(CPhysicsGameSystem *const this, CCallQueue *const workList)
{
  int m_nAllocationCount; // eax
  __int64 v4; // r12
  int v5; // ebx
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t>::Node_t,short unsigned int> *m_pMemory; // rcx

  if ( (*(this + 360) & 1) != 0 )
  {
    m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
    v4 = 0;
    v5 = 0;
    if ( m_nAllocationCount != 0 )
    {
      do
      {
        if ( m_nAllocationCount > v5 && v5 <= this->m_mapLevelWorlds.m_Tree.m_LastAlloc.index )
        {
          m_pMemory = this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory;
          if ( m_pMemory[v5].m_Left != v5 )
          {
            (*(*m_pMemory[v4].m_Data.elem.pPhysicsWorld + 280LL))(m_pMemory[v4].m_Data.elem.pPhysicsWorld, workList);
            m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
          }
        }
        ++v5;
        ++v4;
      }
      while ( v5 < m_nAllocationCount );
    }
    *(this + 360) &= ~1u;
  }
}


// CPhysicsGameSystem::ProcessUpdaterStatusChanges  (line 2252, @0x0000000001f36e70, libserver.so)  // inlines: GetTimebaseRegister, IsIdxValid, IsValidIndex, LeftChild, PLAT_CPU_TIME
// calls: CGameSceneNode::GetOwnerEntity
// callers: CPhysicsGameSystem::OnSimulate
void __fastcall CPhysicsGameSystem::ProcessUpdaterStatusChanges(
        CPhysicsGameSystem *const this,
        VPhysXWorldStepResults *pResults)
{
  int m_nAllocationCount; // eax
  UtlRBTreeNode_t<CUtlMap<CUtlStringToken,CPhysicsGameSystem::PhysicsWorld_t>::Node_t,short unsigned int> *m_pMemory; // rsi
  int m_Size; // ecx
  __int64 v6; // r12
  int v7; // ebx
  __int64 v8; // r13
  __int64 v9; // rax
  const CGameSceneNode *v10; // r13
  CBaseEntity *OwnerEntity; // rax
  CBaseEntity *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // [rsp+0h] [rbp-50h]
  __int64 v16; // [rsp+8h] [rbp-48h]
  int iLevel; // [rsp+1Ch] [rbp-34h]

  m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
  v16 = 0;
  iLevel = 0;
  if ( m_nAllocationCount != 0 )
  {
    do
    {
      if ( m_nAllocationCount > iLevel && iLevel <= this->m_mapLevelWorlds.m_Tree.m_LastAlloc.index )
      {
        m_pMemory = this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory;
        if ( m_pMemory[iLevel].m_Left != iLevel )
        {
          m_Size = pResults->m_awake.m_Size;
          v15 = __rdtsc();
          if ( m_Size > 0 )
          {
            v6 = 0;
            v7 = 0;
            do
            {
              v10 = pResults->m_awake.m_Memory.m_pMemory[v6];
              OwnerEntity = CGameSceneNode::GetOwnerEntity(v10);
              v12 = OwnerEntity;
              if ( OwnerEntity != 0 && OwnerEntity->m_pCollision != 0 )
              {
                v13 = (*(OwnerEntity->_vptr_IHandleEntity + 29))(OwnerEntity);
                if ( (*(*v13 + 184LL))(v13) != 0 )
                {
                  v14 = (*(v12->_vptr_IHandleEntity + 29))(v12);
                  (*(*v14 + 200LL))(v14);
                }
                v8 = *&v10[1].m_angAbsRotation.y;
                if ( v8 != 0 && (*(*v8 + 72LL))(v8) > 0 )
                {
                  v9 = (*(*v8 + 80LL))(v8, 0);
                  (*(v12->_vptr_IHandleEntity + 52))(v12, v9);
                }
              }
              ++v7;
              ++v6;
            }
            while ( pResults->m_awake.m_Size > v7 );
            m_pMemory = this->m_mapLevelWorlds.m_Tree.m_Elements.m_pMemory;
          }
          (*(*m_pMemory[v16].m_Data.elem.pPhysicsWorld + 160LL))(
            m_pMemory[v16].m_Data.elem.pPhysicsWorld,
            33,
            __rdtsc() - v15);
          m_nAllocationCount = this->m_mapLevelWorlds.m_Tree.m_Elements.m_nAllocationCount;
        }
      }
      ++iLevel;
      ++v16;
    }
    while ( m_nAllocationCount > iLevel );
  }
}


// CPhysicsGameSystem::UpdateShadowController  (line 2360, @0x0000000001f37010, libserver.so)
void __fastcall CPhysicsGameSystem::UpdateShadowController(
        CPhysicsGameSystem *const this,
        IPhysicsObject *pActiveObject,
        CBaseEntity *pEntity)
{
  ;
}


// CPhysicsGameSystem::SetPhysGroupMask  (line 2426, @0x0000000001f564b0, libserver.so)  // inlines: CTransform, GetModelData, GetMotionType, MatrixTransform, Release<CPhysAggregateData>, VectorAligned, operator const RuntimeClass_t*, ~CSmartPtr
// calls: CModel::AcquirePhysicsRef, CSkeletonInstance::GetWorldSpaceTransform, MatrixTransform, CSkeletonInstance::RecomputePhysicsBoneMap, CPhysicsGameSystem::MarkChanged, CPhysAggregateData::Release, _Unwind_Resume
// callers: CModelState::OnMeshGroupMaskChanged
bool __fastcall CPhysicsGameSystem::SetPhysGroupMask(
        CPhysicsGameSystem *const this,
        CSkeletonInstance *pSkeleton,
        MeshGroupMask_t nMeshGroupMask,
        const RnCollisionAttr_t *const collisionAttributes)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  const CModel *m_pData; // rsi
  IPhysAggregateInstance *m_pVPhysicsAggregate; // r12
  bool v9; // bl
  const CPhysAggregateData *physModel; // [rsp+10h] [rbp-A0h]
  Vector vScaleOut; // [rsp+20h] [rbp-90h] BYREF
  CTransform tm; // [rsp+30h] [rbp-80h] BYREF
  matrix3x4a_t skeletonToWorld; // [rsp+50h] [rbp-60h] BYREF

  m_pBinding = pSkeleton->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding != 0 )
    m_pData = m_pBinding->m_pData;
  else
    m_pData = 0;
  CModel::AcquirePhysicsRef(m_pData);
  if ( physModel == 0 )
    return 0;
  m_pVPhysicsAggregate = pSkeleton->m_modelState.m_pVPhysicsAggregate;
  CSkeletonInstance::GetWorldSpaceTransform(pSkeleton, &skeletonToWorld);
  tm.m_vPosition.w = 0.0;
  MatrixTransform(&skeletonToWorld, &tm, &vScaleOut);
  (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 40))(
    m_pVPhysicsAggregate,
    physModel,
    &tm,
    pSkeleton->m_modelState.m_nIdealMotionType.m_Value);
  (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 23))(m_pVPhysicsAggregate, collisionAttributes);
  CSkeletonInstance::RecomputePhysicsBoneMap(pSkeleton);
  if ( (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 9))(m_pVPhysicsAggregate) != 0 )
  {
    CPhysicsGameSystem::MarkChanged(this, pSkeleton);
    v9 = 1;
  }
  else
  {
    CPhysicsGameSystem::MarkChanged(this, pSkeleton, 0);
    v9 = 0;
  }
  CPhysAggregateData::Release(physModel);
  return v9;
}


// CPhysicsGameSystem::Validate  (line 2459, @0x0000000001f37020, libserver.so)
void __fastcall CPhysicsGameSystem::Validate(CPhysicsGameSystem *const this)
{
  ;
}


// CPhysicsGameSystem::CreateDebugRenderBuffers  (line 2466, @0x0000000001f42110, libserver.so)  // inlines: AddRef<CPhysAggregateData>, CEntityHandle, CSmartPtr, DebugMeshParams_t, DebugSceneObjectParams_t, Element, FirstInorder, FromUntypedHandleUnchecked, GetCurrentMeshGroupMask, GetData, GetEntityIdentity, GetEntryIndex, GetHandle, GetInstance, GetSceneObjectData, IndexToIdentity, InitUntypedUnchecked, IsValid, LeftChild, LookupEntity, NextInorder, Release<CPhysAggregateData>, ResourceHandleToNonConstData<CPhysAggregateData>, SetBounds, SetTransform, UpdateBoundingBoxToMatchTransform, Vector, VectorMax, VectorMin, VertexColor_t, fpmax, fpmin, memcpy, operator CBaseEntity*, operator CWeakHandle<InfoForResourceTypeIMaterial2>, operator int, operator=, operator[], ~CSmartPtr, ~DebugMeshParams_t, ~DebugSceneObjectParams_t
// calls: SetIdentityMatrix, CUtlRBTree<CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t, short unsigned int, CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CPhysAggregateData::AddRef, CPhysAggregateData::Release, CPhysicsGameSystem::GetDebugSceneWorld, TransformMatrix, CModel::HasMesh, TransformAABB, CModel::GetMeshData, _Unwind_Resume
// globals: g_vDebugWireframeColor, CEntityHandle::gm_pEntityList
void __fastcall CPhysicsGameSystem::CreateDebugRenderBuffers(CPhysicsGameSystem *const this)
{
  unsigned __int16 m_Root; // bx
  UtlRBTreeNode_t<CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t,short unsigned int> *m_pMemory; // r12
  __int64 v4; // rax
  unsigned __int16 m_Left; // cx
  UtlRBTreeNode_t<CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t,short unsigned int> *v6; // r12
  const ResourceBindingBase_t *m_pBinding; // rax
  CPhysAggregateData *m_pData; // r14
  float v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  WorldGroupId_t *m_pInstance; // rdx
  __int64 (__fastcall *v13)(ISceneSystem *, ISceneWorld *, matrix3x4_t *, SceneObjectBuffers_t *, __int64, __int64); // r14
  ISceneWorld *DebugSceneWorld; // rax
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // r12
  unsigned __int8 v18; // al
  __int64 v19; // rdx
  __int64 v20; // rax
  const CModel *const *v21; // rax
  const Vector *p_m_vMinBounds; // rsi
  __int64 v23; // rax
  const CModel *const *v24; // rax
  const CRenderMesh *MeshData; // rax
  __int64 v26; // rdi
  int v27; // xmm0_4
  int v28; // xmm2_4
  char v29; // [rsp+17h] [rbp-189h]
  float v30; // [rsp+30h] [rbp-170h] BYREF
  float v31; // [rsp+34h] [rbp-16Ch]
  float v32; // [rsp+38h] [rbp-168h]
  float v33; // [rsp+40h] [rbp-160h] BYREF
  float v34; // [rsp+44h] [rbp-15Ch]
  float v35; // [rsp+48h] [rbp-158h]
  Vector v36; // [rsp+50h] [rbp-150h] BYREF
  Vector v37; // [rsp+60h] [rbp-140h] BYREF
  _DWORD v38[4]; // [rsp+70h] [rbp-130h] BYREF
  matrix3x4a_t mIdentity; // [rsp+80h] [rbp-120h] BYREF
  matrix3x4_t out; // [rsp+B0h] [rbp-F0h] BYREF
  SceneObjectBuffers_t dso; // [rsp+E0h] [rbp-C0h] BYREF
  DebugSceneObjectParams_t params; // [rsp+120h] [rbp-80h] BYREF

  SetIdentityMatrix(&mIdentity);
  m_Root = this->m_PhysicsSpawnGroups.m_Tree.m_Root;
  if ( m_Root == 0xFFFF )
    return;
  m_pMemory = this->m_PhysicsSpawnGroups.m_Tree.m_Elements.m_pMemory;
  v4 = m_Root;
  m_Left = m_pMemory[m_Root].m_Left;
  if ( m_Left != 0xFFFF )
  {
    while ( 1 )
    {
      v4 = m_Left;
      if ( m_pMemory[m_Left].m_Left == 0xFFFF )
        break;
      m_Left = m_pMemory[m_Left].m_Left;
    }
    m_Root = m_Left;
  }
  while ( 2 )
  {
    v6 = &m_pMemory[v4];
    if ( v6->m_Data.elem.m_bLevelDebugRenderCreated )
      goto LABEL_7;
    v6->m_Data.elem.m_bLevelDebugRenderCreated = 1;
    LODWORD(dso.m_hDebugIndexBuffer) = -64;
    params.m_nFlags = 0;
    params.m_nSortPoseCount = 0;
    params.m_pScaleVector = 0;
    params.m_vColorSelectedCollision.color = -1;
    params.m_pCollisionMesh.m_pObj = 0;
    params.m_pMasterSkeleton = 0;
    params.m_flConstraintScale = 4.0;
    params.m_vColorStaticCollision.color = -64;
    params.m_nConstraintAlpha = 0x80;
    params.m_nSelectedConstraintAlpha = -1;
    params.m_nSelectedConstraint = -1;
    params.m_vColorCollision = g_vDebugWireframeColor;
    m_pBinding = v6->m_Data.elem.m_hPhysicsLevel.m_pBinding;
    params.m_nSelectedPart = -1;
    if ( m_pBinding != 0 && m_pBinding->m_nRefCount.m_value > 0 )
    {
      m_pData = m_pBinding->m_pData;
      if ( m_pBinding->m_pData != 0 )
      {
        CPhysAggregateData::AddRef(m_pBinding->m_pData);
        if ( params.m_pCollisionMesh.m_pObj != 0 )
          CPhysAggregateData::Release(params.m_pCollisionMesh.m_pObj);
        params.m_pCollisionMesh.m_pObj = m_pData;
      }
    }
    v6->m_Data.elem.m_pLevelDebugGeo = 0;
    if ( v6->m_Data.elem.m_pLevelAggregateInstance == 0 )
      goto LABEL_22;
    if ( (*(g_pVPhysics2->_vptr_IAppSystem + 53))(g_pVPhysics2, &params, &dso) == 0 )
      goto LABEL_22;
    LODWORD(v9) = (*(v6->m_Data.elem.m_pLevelAggregateInstance->_vptr_IPhysAggregateInstance + 4))(v6->m_Data.elem.m_pLevelAggregateInstance);
    out.m_flMatVal[0][0] = v9;
    if ( (LODWORD(v9) + 2) <= 1 )
      goto LABEL_22;
    v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(out.m_flMatVal[0][0]) >> 9) & 0x3F];
    if ( v10 == 0 )
      goto LABEL_22;
    v11 = &v10[LOWORD(out.m_flMatVal[0][0]) & 0x1FF];
    if ( v11 == 0 )
      goto LABEL_22;
    if ( LODWORD(v9) != v11->m_EHandle.m_Index )
      goto LABEL_22;
    m_pInstance = v11->m_pInstance;
    if ( m_pInstance == 0 )
      goto LABEL_22;
    v13 = *(*g_pSceneSystem + 856LL);
    *&out.m_flMatVal[0][0] = this->m_hMatWireframe.m_pBinding;
    DebugSceneWorld = CPhysicsGameSystem::GetDebugSceneWorld(this, m_pInstance[8]);
    v15 = v13(g_pSceneSystem, DebugSceneWorld, &out, &dso, 2, 1);
    v6->m_Data.elem.m_pLevelDebugGeo = v15;
    v16 = v15;
    TransformMatrix(&v6->m_Data.elem.m_WorldOffset, &out);
    *(v16 + 64) = out;
    if ( (*(v16 + 40) & 4) == 0 )
    {
      v26 = *(v16 + 16);
      if ( v26 != 0 )
        (*(*v26 + 112LL))(v26, v16);
      goto LABEL_42;
    }
    if ( (*(v16 + 48) & 0x10) != 0 )
      goto LABEL_42;
    v29 = 0;
    v32 = 3.4028235e38;
    v35 = -3.4028235e38;
    v17 = *(v16 + 8);
    v30 = 3.4028235e38;
    v31 = 3.4028235e38;
    v33 = -3.4028235e38;
    v34 = -3.4028235e38;
    if ( v17 == 0 )
      goto LABEL_51;
    do
    {
      while ( 1 )
      {
        v18 = *(v16 + 47);
        v19 = v18;
        if ( v18 == 0 )
        {
          v20 = *(v16 + 120);
          v19 = -1;
          if ( v20 != 0 )
            v19 = *(v20 + 1000);
        }
        if ( (*(v17 + 48) & v19) == 0 )
          goto LABEL_30;
        v21 = *(v17 + 8);
        if ( v21 == 0 || !CModel::HasMesh(*v21, *(v17 + 16)) )
        {
          p_m_vMinBounds = *(v17 + 24);
          goto LABEL_38;
        }
        v24 = *(v17 + 8);
        if ( v24 != 0 )
        {
          MeshData = CModel::GetMeshData(*v24, *(v17 + 16));
          if ( MeshData == 0 )
            goto LABEL_30;
          p_m_vMinBounds = *(v17 + 24);
          if ( p_m_vMinBounds != 0 )
            break;
          p_m_vMinBounds = &MeshData->m_sceneObjects.m_Memory.m_pMemory[*(v17 + 76)].m_vMinBounds;
LABEL_38:
          if ( p_m_vMinBounds != 0 )
            break;
        }
LABEL_30:
        v17 = *(v17 + 56);
        if ( v17 == 0 )
          goto LABEL_40;
      }
      TransformAABB((v16 + 64), p_m_vMinBounds, p_m_vMinBounds + 1, &v36, &v37);
      v29 = 1;
      v17 = *(v17 + 56);
      v30 = fminf(v36.x, v30);
      v31 = fminf(v36.y, v31);
      v32 = fminf(v36.z, v32);
      v33 = fmaxf(v37.x, v33);
      v34 = fmaxf(v37.y, v34);
      v35 = fmaxf(v37.z, v35);
    }
    while ( v17 != 0 );
LABEL_40:
    if ( v29 != 0 )
    {
      (*(*g_pSceneSystem + 232LL))(g_pSceneSystem, v16, &v30, &v33);
      goto LABEL_42;
    }
LABEL_51:
    v27 = *(v16 + 108);
    v38[1] = *(v16 + 92);
    v28 = *(v16 + 76);
    v38[2] = v27;
    v38[0] = v28;
    (*(*g_pSceneSystem + 232LL))(g_pSceneSystem, v16, v38, v38);
LABEL_42:
    v23 = *(v16 + 120);
    if ( v23 != 0 && *(v23 + 960) != 0 )
      (*(*g_pSceneSystem + 1040LL))(g_pSceneSystem, v16);
LABEL_22:
    if ( params.m_pCollisionMesh.m_pObj != 0 )
      CPhysAggregateData::Release(params.m_pCollisionMesh.m_pObj);
LABEL_7:
    m_Root = CUtlRBTree<CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CPhysicsGameSystem::PhysicsSpawnGroups_t,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
               &this->m_PhysicsSpawnGroups.m_Tree,
               m_Root);
    if ( m_Root != 0xFFFF )
    {
      m_pMemory = this->m_PhysicsSpawnGroups.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
      continue;
    }
    break;
  }
}


// CPhysicsGameSystem::MarkChanged  (line 2501, @0x0000000001f55bd0, libserver.so)
// calls: CPhysicsGameSystem::MarkChanged
// callers: CPhysicsGameSystem::TeleportToAnimationState, CPhysicsGameSystem::ForceUpdateIfKeyframed, CPhysicsGameSystem::SetPhysGroupMask, CModelState::UpdateMotionTypeOfAggregate
void __fastcall CPhysicsGameSystem::MarkChanged(CPhysicsGameSystem *const this, CSkeletonInstance *pSkeleton)
{
  uint v4; // eax

  v4 = (*(pSkeleton->m_modelState.m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 26))(pSkeleton->m_modelState.m_pVPhysicsAggregate);
  CPhysicsGameSystem::MarkChanged(this, pSkeleton, v4);
}


// CPhysicsGameSystem::MarkChanged  (line 2509, @0x0000000001f55b80, libserver.so)  // inlines: DeactivateKinematicTransformUpdater, MarkForKinematicUpdate
// calls: CUtlVectorBase<CSkeletonInstance*, CUtlMemory<CSkeletonInstance*, int> >::FindAndFastRemove, CPhysicsGameSystem::ActivateKinematicTransformUpdater
// callers: CPhysicsGameSystem::MarkChanged, CPhysicsGameSystem::SetPhysGroupMask
void __fastcall CPhysicsGameSystem::MarkChanged(
        CPhysicsGameSystem *const this,
        CSkeletonInstance *pSkeleton,
        uint nTransformState)
{
  bool v3; // zf
  CSkeletonInstance *src; // [rsp+8h] [rbp-8h] BYREF

  if ( (nTransformState & 2) != 0 )
  {
    CPhysicsGameSystem::ActivateKinematicTransformUpdater(this, pSkeleton);
  }
  else
  {
    v3 = (*(pSkeleton + 722) & 8) == 0;
    src = pSkeleton;
    if ( !v3 )
    {
      CUtlVectorBase<CSkeletonInstance *,CUtlMemory<CSkeletonInstance *,int>>::FindAndFastRemove(
        &this->m_kinematicsToUpdate,
        &src);
      *(src + 722) &= ~8u;
    }
  }
}


// CPhysicsGameSystem::MarkChanged  (line 2522, @0x0000000001f56600, libserver.so)  // inlines: DeactivateKinematicTransformUpdater, MarkForKinematicUpdate
// calls: CPhysicsGameSystem::UpdateHierarchyConstraint, CPhysicsGameSystem::ActivateKinematicTransformUpdater, CUtlVectorBase<CSkeletonInstance*, CUtlMemory<CSkeletonInstance*, int> >::FindAndFastRemove
// callers: CSkeletonInstance::PerformInvalidatePhysicsRecursive
void __fastcall CPhysicsGameSystem::MarkChanged(
        CPhysicsGameSystem *const this,
        uint nChangeFlags,
        CSkeletonInstance *pSkeleton)
{
  IPhysAggregateInstance *m_pVPhysicsAggregate; // r12
  char v7; // r13
  bool v8; // zf
  int v9; // eax
  CSkeletonInstance *src; // [rsp+8h] [rbp-38h] BYREF

  m_pVPhysicsAggregate = pSkeleton->m_modelState.m_pVPhysicsAggregate;
  v7 = (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 26))(m_pVPhysicsAggregate);
  if ( (v7 & 2) != 0 )
  {
    v9 = -((*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 7))(m_pVPhysicsAggregate) == 0);
    LOBYTE(v9) = v9 & 0x30;
    if ( (nChangeFlags & (v9 + 211)) != 0 )
      CPhysicsGameSystem::ActivateKinematicTransformUpdater(this, pSkeleton);
  }
  else
  {
    v8 = (*(pSkeleton + 722) & 8) == 0;
    src = pSkeleton;
    if ( !v8 )
    {
      CUtlVectorBase<CSkeletonInstance *,CUtlMemory<CSkeletonInstance *,int>>::FindAndFastRemove(
        &this->m_kinematicsToUpdate,
        &src);
      *(src + 722) &= ~8u;
    }
  }
  if ( (v7 & 1) != 0 && (nChangeFlags & 3) != 0 )
    CPhysicsGameSystem::UpdateHierarchyConstraint(this, pSkeleton, 1);
}


// CPhysicsGameSystem::QueueScaleChanged  (line 2553, @0x0000000001f56da0, libserver.so)  // inlines: AddToTail, CEntityHandle, CGameSceneNodeHandle, CNetworkVarBase, CUtlStringToken, CopyConstruct<CGameSceneNodeHandle>, Element, EnsureValidValue<CEntityHandle>, GetEHandle, GetEntryIndex, GetName, GetSerialNumber, GrowMemory, Init, Set, operator=, operator=<CEntityInstance*>, operator[]
// calls: CUtlMemory<CGameSceneNodeHandle, int>::Grow
// callers: CSkeletonInstance::PerformInvalidatePhysicsRecursive
void __fastcall CPhysicsGameSystem::QueueScaleChanged(
        CPhysicsGameSystem *const this,
        CSkeletonInstance *pSkeletonInstance)
{
  CEntityInstance *m_pOwner; // rdx
  int v4; // r14d
  CEntityIdentity *m_pEntity; // rdx
  __int16 v6; // cx
  uint32 m_nHashCode; // r13d
  int m_Size; // r12d
  int v9; // edx
  CGameSceneNodeHandle *v10; // rdx

  if ( pSkeletonInstance != 0 )
  {
    m_pOwner = pSkeletonInstance->m_pOwner;
    v4 = -1;
    if ( m_pOwner != 0 )
    {
      m_pEntity = m_pOwner->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v6 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v4 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
      }
    }
    m_nHashCode = pSkeletonInstance->m_name.m_Value.m_nHashCode;
  }
  else
  {
    m_nHashCode = 0;
    v4 = -1;
  }
  m_Size = this->m_dirtyScales.m_Size;
  v9 = m_Size;
  if ( m_Size == this->m_dirtyScales.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CGameSceneNodeHandle,int>::Grow(&this->m_dirtyScales.m_Memory, 1);
    v9 = this->m_dirtyScales.m_Size;
  }
  this->m_dirtyScales.m_Size = v9 + 1;
  v10 = &this->m_dirtyScales.m_Memory.m_pMemory[m_Size];
  if ( v10 != 0 )
  {
    v10->m_hOwner.m_Value.m_Index = -1;
    v10->_vptr_CGameSceneNodeHandle = off_3FB43F0;  // vptr: CGameSceneNodeHandle
    v10->m_name.m_Value.m_nHashCode = 0;
    if ( v4 != -1 )
      v10->m_hOwner.m_Value.m_Index = v4;
    if ( m_nHashCode != 0 )
      v10->m_name.m_Value.m_nHashCode = m_nHashCode;
  }
}


// CPhysicsGameSystem::ProcessScaleChanges  (line 2558, @0x0000000001f400f0, libserver.so)  // inlines: operator[]
// calls: CGameSceneNodeHandle::Get, CSkeletonInstance::UpdatePhysicsScale, CUtlVectorBase<CGameSceneNodeHandle, CUtlMemory<CGameSceneNodeHandle, int> >::RemoveAll
// callers: CPhysicsGameSystem::OnSimulate
void __fastcall CPhysicsGameSystem::ProcessScaleChanges(CPhysicsGameSystem *const this)
{
  int m_Size; // r13d
  unsigned __int64 v3; // rbx
  __int64 v4; // r13
  CGameSceneNode *v5; // rax
  CSkeletonInstance *v6; // rax

  m_Size = this->m_dirtyScales.m_Size;
  if ( m_Size > 0 )
  {
    v3 = 0;
    v4 = 16 * ((m_Size - 1) + 1LL);
    do
    {
      v5 = CGameSceneNodeHandle::Get(&this->m_dirtyScales.m_Memory.m_pMemory[v3 / 0x10]);
      if ( v5 != 0 )
      {
        v6 = (*(v5->_vptr_CGameSceneNode + 9))(v5);
        if ( v6 != 0 )
          CSkeletonInstance::UpdatePhysicsScale(v6);
      }
      v3 += 16LL;
    }
    while ( v3 != v4 );
  }
  CUtlVectorBase<CGameSceneNodeHandle,CUtlMemory<CGameSceneNodeHandle,int>>::RemoveAll(&this->m_dirtyScales);
}


// IsAnimatedPhysics  (line 2574, @0x0000000001f2abc0, libserver.so)  // inlines: GetModelData, operator const RuntimeClass_t*
// calls: CModel::NumBones
// callers: CPhysicsGameSystem::ActivateKinematicTransformUpdater, CPhysicsGameSystem::ForceUpdateIfKeyframed
bool __fastcall IsAnimatedPhysics(CSkeletonInstance *pSkeleton)
{
  IPhysAggregateInstance *m_pVPhysicsAggregate; // rbx
  const ResourceBindingBase_t *m_pBinding; // rax
  const CModel *m_pData; // r12
  __int64 v5; // r13
  bool v6; // bl

  m_pVPhysicsAggregate = pSkeleton->m_modelState.m_pVPhysicsAggregate;
  if ( m_pVPhysicsAggregate == 0
    || ((*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 26))(pSkeleton->m_modelState.m_pVPhysicsAggregate) & 2) == 0 )
  {
    return 0;
  }
  m_pBinding = pSkeleton->m_modelState.m_hModel.m_Value.m_pBinding;
  if ( m_pBinding == 0 )
  {
    (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 41))(m_pVPhysicsAggregate);
    return 0;
  }
  m_pData = m_pBinding->m_pData;
  v5 = (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 41))(m_pVPhysicsAggregate);
  v6 = m_pData != 0 && v5 != 0;
  if ( !v6 || CModel::NumBones(m_pData) <= 0 || *(v5 + 32) <= 0 )
    return 0;
  return v6;
}


// CPhysicsGameSystem::ForceUpdateIfKeyframed  (line 2591, @0x0000000001f55e40, libserver.so)  // inlines: Add, CBoneAccessor, CTransform, CalcAbsolutePosition, Cleanup, GetAbsOrigin, GetFloat, GetPhysicsBoneIndexToBoneIndex, GetSimulationTimestep, GetTimebaseRegister, GetWorldSpaceBones, GetWorldSpaceState, Init, Load, MatrixTransform, NodeToWorldTransform, PLAT_CPU_TIME, TransformNormalize, VectorAligned, operator=, operator[], ~CBoneAccessor
// calls: IsAnimatedPhysics, MatrixTransform, QuaternionNormalize, CPhysicsGameSystem::MarkChanged, CSkeletonInstance::CalcWorldSpaceBones, operator delete [], CGameSceneNode::CalcAbsolutePositionWhenDirty, CBoneAccessor<matrix3x4a_t>::Cleanup, _Unwind_Resume
// callers: CPhysicsGameSystem::PullKinematicTransformsWorker, CBaseEntity::Teleport, CCollisionProperty::UpdatePartition
void __fastcall CPhysicsGameSystem::ForceUpdateIfKeyframed(
        CPhysicsGameSystem *const this,
        CSkeletonInstance *pSkeleton,
        CPhysicsGameSystem::anim_update_t nAnimatedObjectUpdate,
        bool bIsTeleport)
{
  IPhysAggregateInstance *m_pVPhysicsAggregate; // r13
  bool v8; // r14
  unsigned __int64 v9; // rax
  PhysicsGlobalProfiler::Stats_t *m_GlobalProfilerStats; // rcx
  uint64 m_numTimeBaseTicks; // rsi
  vec_t v12; // xmm1_4
  vec_t x; // xmm2_4
  vec_t v14; // xmm1_4
  vec_t v15; // xmm2_4
  __int64 v16; // r14
  uint32 *m_pReadableBones; // rdx
  int m_nBoneCount; // eax
  matrix3x4a_t *m_pTransforms; // rcx
  __int64 m_nTotalBoneCount; // rdx
  __int16 *m_pMemory; // rax
  unsigned int v22; // ebx
  __int64 v23; // r12
  __int64 v24; // rax
  double v25; // xmm0_8
  vec_t z; // xmm1_4
  vec_t y; // xmm2_4
  __int64 v28; // rax
  __int64 v29; // [rsp+18h] [rbp-A8h]
  __int64 v30; // [rsp+20h] [rbp-A0h]
  const int16 *pPhysToSimBone; // [rsp+28h] [rbp-98h]
  Vector v33; // [rsp+40h] [rbp-80h] BYREF
  CBoneAccessor<matrix3x4a_t> simulationWorldTransforms; // [rsp+50h] [rbp-70h] BYREF
  CTransform xForm; // [rsp+70h] [rbp-50h] BYREF

  m_pVPhysicsAggregate = pSkeleton->m_modelState.m_pVPhysicsAggregate;
  if ( m_pVPhysicsAggregate != 0 )
  {
    v8 = IsAnimatedPhysics(pSkeleton);
    if ( !v8 || nAnimatedObjectUpdate != CPhysicsGameSystem::anim_update_t::DEFER_ANIMATED_OBJECTS )
    {
      v9 = __rdtsc();
      v30 = v9;
      v29 = HIDWORD(v9);
      if ( ((*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 25))(m_pVPhysicsAggregate) & 8) != 0 )
      {
        if ( v8 )
        {
          v16 = (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 41))(m_pVPhysicsAggregate);
          CSkeletonInstance::CalcWorldSpaceBones(pSkeleton, CModelSkeleton::BoneFlags_t::FLAG_PHYSICS);
          m_pReadableBones = pSkeleton->m_modelState.m_simulationState.m_pReadableBones;
          simulationWorldTransforms.m_bOwnsMemory = 0;
          m_nBoneCount = pSkeleton->m_modelState.m_simulationState.m_nBoneCount;
          m_pTransforms = pSkeleton->m_modelState.m_simulationState.m_pTransforms;
          simulationWorldTransforms.m_pReadableBones = m_pReadableBones;
          m_nTotalBoneCount = pSkeleton->m_modelState.m_nTotalBoneCount;
          simulationWorldTransforms.m_nBones = m_nBoneCount;
          m_pMemory = pSkeleton->m_modelState.m_SkeletonBoneToPhysicsBone.m_Memory.m_pMemory;
          simulationWorldTransforms.m_pBones = m_pTransforms;
          pPhysToSimBone = &m_pMemory[m_nTotalBoneCount];
          if ( *(v16 + 32) != 0 )
          {
            v22 = 0;
            do
            {
              v23 = (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 10))(m_pVPhysicsAggregate, v22);
              if ( (*(*v23 + 40LL))(v23) == 1 )
              {
                v24 = pPhysToSimBone[v22];
                if ( (v24 & 0x8000u) == 0LL )
                {
                  xForm.m_vPosition.w = 0.0;
                  MatrixTransform(&simulationWorldTransforms.m_pBones[v24], &xForm, &v33);
                  *&v25 = QuaternionNormalize(&xForm.m_orientation);
                  if ( m_pVPhysicsAggregate->m_bIsAxisAligned )
                  {
                    *&v25 = LODWORD(quat_identity.w);
                    z = quat_identity.z;
                    y = quat_identity.y;
                    xForm.m_orientation.w = quat_identity.w;
                    xForm.m_orientation.z = z;
                    xForm.m_orientation.y = y;
                    xForm.m_orientation.x = quat_identity.x;
                  }
                  v28 = (*(*v23 + 16LL))(v23, v25);
                  if ( bIsTeleport )
                  {
                    (*(*v28 + 1480LL))(v28, v23);
                    (*(*v23 + 392LL))(v23, &xForm);
                  }
                  else
                  {
                    (*(*v28 + 1472LL))(v28, v23, &xForm, gpGlobals->interval_per_tick);
                  }
                }
              }
              ++v22;
            }
            while ( *(v16 + 32) > v22 );
            if ( simulationWorldTransforms.m_bOwnsMemory )
            {
              if ( simulationWorldTransforms.m_pBones != 0 )
                operator delete[](simulationWorldTransforms.m_pBones);
              if ( simulationWorldTransforms.m_pReadableBones != 0 )
                operator delete[](simulationWorldTransforms.m_pReadableBones);
            }
          }
        }
        else if ( m_pVPhysicsAggregate->m_bIsAxisAligned )
        {
          xForm.m_vPosition.w = 0.0;
          if ( pSkeleton->m_bDirtyAbsTransform.m_value )
            CGameSceneNode::CalcAbsolutePositionWhenDirty(pSkeleton);
          xForm.m_vPosition.w = 0.0;
          v12 = pSkeleton->m_vecAbsOrigin.y;
          x = pSkeleton->m_vecAbsOrigin.x;
          xForm.m_vPosition.z = pSkeleton->m_vecAbsOrigin.z;
          xForm.m_vPosition.y = v12;
          xForm.m_vPosition.x = x;
          v14 = quat_identity.z;
          v15 = quat_identity.y;
          xForm.m_orientation.w = quat_identity.w;
          xForm.m_orientation.z = v14;
          xForm.m_orientation.y = v15;
          xForm.m_orientation.x = quat_identity.x;
          (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 32))(
            m_pVPhysicsAggregate,
            &xForm,
            (gpGlobals->interval_per_tick * phys_timescale.m_pParent->m_Value.m_fValue)
          * phys_continuous_kinematic_update.m_pParent->m_Value.m_fValue);
        }
        else
        {
          if ( pSkeleton->m_bDirtyAbsTransform.m_value )
            CGameSceneNode::CalcAbsolutePositionWhenDirty(pSkeleton);
          xForm.m_vPosition.w = 0.0;
          MatrixTransform(&pSkeleton->m_mNodeToWorld, &xForm, &simulationWorldTransforms);
          QuaternionNormalize(&xForm.m_orientation);
          (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 32))(
            m_pVPhysicsAggregate,
            &xForm,
            (gpGlobals->interval_per_tick * phys_timescale.m_pParent->m_Value.m_fValue)
          * phys_continuous_kinematic_update.m_pParent->m_Value.m_fValue);
        }
        m_GlobalProfilerStats = this->m_GlobalProfilerStats;
        m_numTimeBaseTicks = m_GlobalProfilerStats->m_profilers[26].m_numTimeBaseTicks;
        ++m_GlobalProfilerStats->m_profilers[26].m_numCalls;
        m_GlobalProfilerStats->m_profilers[26].m_numTimeBaseTicks = m_numTimeBaseTicks - (v30 | (v29 << 32)) + __rdtsc();
      }
    }
    else
    {
      CPhysicsGameSystem::MarkChanged(this, pSkeleton);
    }
  }
}


// CPhysicsGameSystem::ActivateKinematicTransformUpdater  (line 2680, @0x0000000001f55a60, libserver.so)  // inlines: AddToTail, CopyConstruct<CSkeletonInstance*>, Element, GrowMemory, MarkForKinematicUpdate, operator[]
// calls: IsAnimatedPhysics, CUtlMemory<CSkeletonInstance*, int>::Grow
// callers: CPhysicsGameSystem::NotifyAggregateInitialized, CPhysicsGameSystem::MarkChanged
void __fastcall CPhysicsGameSystem::ActivateKinematicTransformUpdater(
        CPhysicsGameSystem *const this,
        CSkeletonInstance *pSkeleton)
{
  __int64 m_Size; // r13
  CSkeletonInstance **v5; // rax

  if ( (*(pSkeleton + 722) & 8) == 0 && IsAnimatedPhysics(pSkeleton) )
  {
    *(pSkeleton + 722) |= 8u;
    m_Size = this->m_kinematicsToUpdate.m_Size;
    if ( m_Size == this->m_kinematicsToUpdate.m_Memory.m_nAllocationCount )
      CUtlMemory<CSkeletonInstance *,int>::Grow(&this->m_kinematicsToUpdate.m_Memory, 1);
    ++this->m_kinematicsToUpdate.m_Size;
    v5 = &this->m_kinematicsToUpdate.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = pSkeleton;
  }
}


// FilterSubstr  (line 2697, @0x0000000001f37030, libserver.so)  // inlines: V_memcpy, memcpy
// calls: __memcpy_chk, V_stristr_fast(char const*,char const*), __stack_chk_fail
// callers: CPhysicsGameSystem::LogUpdater
const char *__fastcall FilterSubstr(const char *pString, const char *pFilterListUserInput)
{
  char v2; // al
  const char *v4; // rbx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  int v7; // ecx
  unsigned int v8; // ecx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r14
  const char *result; // rax
  char pFilterWord[136]; // [rsp+0h] [rbp-B0h] BYREF
  unsigned __int64 v14; // [rsp+88h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  v2 = *pFilterListUserInput;
  if ( *pFilterListUserInput == 0 )
    return 0;
  while ( 1 )
  {
    if ( v2 != 0 )
    {
      v5 = v2 - 9;
      if ( v5 > 0x17 || ((1LL << v5) & 0x80001F) == 0 )
        break;
      while ( 1 )
      {
        v2 = *++pFilterListUserInput;
        if ( *pFilterListUserInput == 0 )
          break;
        v6 = v2 - 9;
        if ( v6 > 0x17 || ((1LL << v6) & 0x80001F) == 0 )
          goto LABEL_12;
      }
    }
    v4 = pFilterListUserInput;
LABEL_4:
    v2 = *v4;
    if ( *v4 == 0 )
      return 0;
    pFilterListUserInput = v4;
  }
LABEL_12:
  v7 = v2;
  v4 = pFilterListUserInput;
  while ( 1 )
  {
    v8 = v7 - 9;
    if ( v8 <= 0x17 && ((1LL << v8) & 0x80001F) != 0 )
      break;
    v7 = *++v4;
    if ( *v4 == 0 )
    {
      v9 = v4 - pFilterListUserInput;
      if ( (v4 - pFilterListUserInput) <= 0x7E )
        goto LABEL_21;
LABEL_16:
      v10 = 127;
      v11 = 127;
      goto LABEL_17;
    }
  }
  v9 = v4 - pFilterListUserInput;
  if ( (v4 - pFilterListUserInput) > 0x7E )
    goto LABEL_16;
LABEL_21:
  v11 = v9;
  if ( v9 == 0 )
    goto LABEL_4;
  v10 = v9;
LABEL_17:
  __memcpy_chk(pFilterWord, pFilterListUserInput, v10, 128);
  pFilterWord[v11] = 0;
  result = V_stristr_fast(pString, pFilterWord);
  if ( result == 0 )
    goto LABEL_4;
  return result;
}


// CPhysicsGameSystem::LogUpdater  (line 2732, @0x0000000001f37190, libserver.so)  // inlines: GetModelData, GetString, operator const RuntimeClass_t*
// calls: CModel::pszName, FilterSubstr, Msg
// callers: CPhysicsGameSystem::LogUpdater, CPhysicsGameSystem::NotifyAggregateShutdown, CPhysicsGameSystem::NotifyAggregateInitialized
// strings: "FCVAR_NEVER_AS_STRING", "%s skel=%p agg=%p[%d] %s\n"
void __fastcall CPhysicsGameSystem::LogUpdater(
        CPhysicsGameSystem *const this,
        const char *pMsg,
        CSkeletonInstance *pSkeleton)
{
  char *v4; // r12
  const CModel *const *v6; // rax
  char *m_pszString; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdi
  const void *v11; // rcx
  int v12; // r8d
  int v13; // eax
  char *v14; // rsi

  v4 = "NULL";
  v6 = *(pMsg + 60);
  if ( v6 != 0 && *v6 != 0 )
    v4 = CModel::pszName(*v6);
  m_pszString = "FCVAR_NEVER_AS_STRING";
  if ( (phys_log_updaters_include.m_nFlags & 0x1000) == 0 )
  {
    m_pszString = "";
    if ( phys_log_updaters_include.m_pParent->m_Value.m_pszString != 0 )
      m_pszString = phys_log_updaters_include.m_pParent->m_Value.m_pszString;
  }
  if ( FilterSubstr(v4, m_pszString) != 0 )
    goto LABEL_8;
  v14 = "FCVAR_NEVER_AS_STRING";
  if ( (phys_log_updaters_exclude.m_nFlags & 0x1000) == 0 )
  {
    v14 = "";
    if ( phys_log_updaters_exclude.m_pParent->m_Value.m_pszString != 0 )
      v14 = phys_log_updaters_exclude.m_pParent->m_Value.m_pszString;
  }
  if ( FilterSubstr(v4, v14) == 0 )
  {
LABEL_8:
    v10 = *(pMsg + 67);
    v11 = 0;
    v12 = 0;
    if ( v10 != 0 )
    {
      v13 = (*(*v10 + 72LL))(v10, v9, v8, 0, 0);
      v11 = *(pMsg + 67);
      v12 = v13;
    }
    Msg("%s skel=%p agg=%p[%d] %s\n", this, pMsg, v11, v12, v4);
  }
}


// CPhysicsGameSystem::LogUpdater  (line 2732, @0x0000000001f37290, libserver.so)  // inlines: GetBool, GetInt
// calls: CPhysicsGameSystem::LogUpdater
void __fastcall CPhysicsGameSystem::LogUpdater(
        CPhysicsGameSystem *const this,
        const char *pMsg,
        CSkeletonInstance *pSkeleton)
{
  if ( phys_log_updaters.m_pParent->m_Value.m_nValue != 0 )
    CPhysicsGameSystem::LogUpdater(pMsg, pSkeleton, pSkeleton);
}


// CPhysicsGameSystem::DeactivateKinematicTransformUpdater  (line 2752, @0x0000000001f40170, libserver.so)  // inlines: MarkForKinematicUpdate
// calls: CUtlVectorBase<CSkeletonInstance*, CUtlMemory<CSkeletonInstance*, int> >::FindAndFastRemove
void __fastcall CPhysicsGameSystem::DeactivateKinematicTransformUpdater(
        CPhysicsGameSystem *const this,
        CSkeletonInstance *pSkeleton)
{
  bool v2; // zf
  CSkeletonInstance *pSkeletona; // [rsp+8h] [rbp-8h] BYREF

  v2 = (*(pSkeleton + 722) & 8) == 0;
  pSkeletona = pSkeleton;
  if ( !v2 )
  {
    CUtlVectorBase<CSkeletonInstance *,CUtlMemory<CSkeletonInstance *,int>>::FindAndFastRemove(
      &this->m_kinematicsToUpdate,
      &pSkeletona);
    *(pSkeletona + 722) &= ~8u;
  }
}


// CPhysicsGameSystem::DestroyHierarchyConstraint  (line 2762, @0x0000000001f42710, libserver.so)  // inlines: DoLookup<CSkeletonInstance*>, Find, IsValidHandle, RemoveByHandle, operator(), operator[]
// calls: CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*, IPhysicsJoint*>, int> >::DoLookup<CSkeletonInstance*>, CGameSceneNode::GetWorldGroupId, CPhysicsGameSystem::GetExistingLevelWorld, CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*, IPhysicsJoint*>, int> >::DoRemove<CSkeletonInstance*>
// callers: CPhysicsGameSystem::NotifyAggregateShutdown, CPhysicsGameSystem::CreateHierarchyConstraint, CModelState::UpdateMotionTypeOfAggregate
void __fastcall CPhysicsGameSystem::DestroyHierarchyConstraint(
        CPhysicsGameSystem *const this,
        CSkeletonInstance *pInstance)
{
  CUtlHashtable<CSkeletonInstance*,IPhysicsJoint*,PointerHashFunctor,PointerEqualFunctor,undefined_t,CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*>,int> > *p_m_HierarchyConstraints; // r13
  unsigned int v5; // edx
  unsigned int v6; // edx
  UtlHashHandle_t v7; // eax
  __int64 v8; // r14
  CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*> *v9; // rax
  int flags_and_hash; // edx
  __int64 v11; // r15
  WorldGroupId_t v12; // eax
  IVPhysics2World *ExistingLevelWorld; // rax

  if ( this->m_HierarchyConstraints.m_nUsed != 0 )
  {
    p_m_HierarchyConstraints = &this->m_HierarchyConstraints;
    v5 = 33 * (((4097 * pInstance + 2127912214) >> 19) ^ (4097 * pInstance + 2127912214) ^ 0xC761C23C);
    v6 = 9 * ((v5 - 369570787) ^ ((v5 + 374761393) << 9)) - 42973499;
    v7 = CUtlHashtable<CSkeletonInstance *,IPhysicsJoint *,PointerHashFunctor,PointerEqualFunctor,undefined_t,CUtlMemory<CUtlHashtableEntry<CSkeletonInstance *,IPhysicsJoint *>,int>>::DoLookup<CSkeletonInstance *>(
           &this->m_HierarchyConstraints,
           pInstance,
           HIWORD(v6) ^ v6 ^ 0xB55A4F09,
           0);
    if ( this->m_HierarchyConstraints.m_table.m_nAllocationCount > v7 )
    {
      v8 = v7;
      v9 = &this->m_HierarchyConstraints.m_table.m_pMemory[v8];
      flags_and_hash = v9->flags_and_hash;
      if ( v9->flags_and_hash >= 0 )
      {
        v11 = *&v9->data[2];
        if ( v11 != 0 )
        {
          v12.m_nHashCode = CGameSceneNode::GetWorldGroupId(pInstance).m_nHashCode;
          ExistingLevelWorld = CPhysicsGameSystem::GetExistingLevelWorld(this, v12);
          (*(*ExistingLevelWorld + 904LL))(ExistingLevelWorld, v11);
          v9 = &this->m_HierarchyConstraints.m_table.m_pMemory[v8];
          flags_and_hash = v9->flags_and_hash;
        }
        CUtlHashtable<CSkeletonInstance *,IPhysicsJoint *,PointerHashFunctor,PointerEqualFunctor,undefined_t,CUtlMemory<CUtlHashtableEntry<CSkeletonInstance *,IPhysicsJoint *>,int>>::DoRemove<CSkeletonInstance *>(
          p_m_HierarchyConstraints,
          *v9->data,
          flags_and_hash & 0x3FFFFFFF);
      }
    }
  }
}


// EntityBodyTransform  (line 2787, @0x0000000001f372c0, libserver.so)  // inlines: CalcAbsolutePosition, GetAbsOrigin, GetBool, GetInt, Load, NodeToWorldTransformUnscaled, ScaleUpper3x3Matrix, SetOrigin, SetToIdentity, memcpy, operator=
// calls: SetIdentityMatrix, CSkeletonInstance::FindBoneIndexForPhysicsBoneIndex, CSkeletonInstance::GetAnimationStateWorldSpaceTransform, CGameSceneNode::CalcAbsolutePositionWhenDirty
// callers: CPhysicsGameSystem::UpdateHierarchyJoint, CPhysicsGameSystem::CreateHierarchyConstraint
matrix3x4_t *__fastcall EntityBodyTransform(
        matrix3x4_t *__return_ptr retstr,
        CSkeletonInstance *pSkeletonInstance,
        IPhysAggregateInstance *pAggregateInstance)
{
  float m_flAbsScale; // xmm1_4
  float v8; // xmm0_4
  matrix3x4a_t *p_tm; // rax
  float v10; // xmm1_4
  int BoneIndexForPhysicsBoneIndex; // ecx
  matrix3x4a_t v12; // [rsp+0h] [rbp-B0h] BYREF
  matrix3x4a_t m_mNodeToWorld; // [rsp+30h] [rbp-80h]
  matrix3x4a_t tm; // [rsp+60h] [rbp-50h] BYREF
  char v15; // [rsp+90h] [rbp-20h] BYREF

  if ( pAggregateInstance->m_bIsAxisAligned )
  {
    SetIdentityMatrix(&tm);
    if ( pSkeletonInstance->m_bDirtyAbsTransform.m_value )
      CGameSceneNode::CalcAbsolutePositionWhenDirty(pSkeletonInstance);
    tm.m_flMatVal[0][3] = pSkeletonInstance->m_vecAbsOrigin.x;
    tm.m_flMatVal[1][3] = pSkeletonInstance->m_vecAbsOrigin.y;
    tm.m_flMatVal[2][3] = pSkeletonInstance->m_vecAbsOrigin.z;
    if ( phys_animated_hierarchy.m_pParent->m_Value.m_nValue == 0 )
      goto LABEL_5;
LABEL_13:
    if ( *((*(pAggregateInstance->_vptr_IPhysAggregateInstance + 41))(pAggregateInstance) + 32) == 1 )
    {
      BoneIndexForPhysicsBoneIndex = CSkeletonInstance::FindBoneIndexForPhysicsBoneIndex(pSkeletonInstance, 0);
      if ( BoneIndexForPhysicsBoneIndex >= 0 )
      {
        CSkeletonInstance::GetAnimationStateWorldSpaceTransform(
          &v12,
          pSkeletonInstance,
          &tm,
          BoneIndexForPhysicsBoneIndex);
        tm = v12;
      }
    }
    goto LABEL_5;
  }
  if ( pSkeletonInstance->m_bDirtyAbsTransform.m_value )
    CGameSceneNode::CalcAbsolutePositionWhenDirty(pSkeletonInstance);
  m_flAbsScale = pSkeletonInstance->m_flAbsScale;
  if ( m_flAbsScale == 1.0 )
  {
    m_mNodeToWorld = pSkeletonInstance->m_mNodeToWorld;
  }
  else
  {
    tm = pSkeletonInstance->m_mNodeToWorld;
    v8 = 1.0 / m_flAbsScale;
    p_tm = &tm;
    do
    {
      v10 = p_tm->m_flMatVal[0][0];
      p_tm = (p_tm + 16);
      p_tm[-1].m_flMatVal[2][0] = v10 * v8;
      p_tm[-1].m_flMatVal[2][1] = p_tm[-1].m_flMatVal[2][1] * v8;
      p_tm[-1].m_flMatVal[2][2] = p_tm[-1].m_flMatVal[2][2] * v8;
    }
    while ( p_tm != &v15 );
    m_mNodeToWorld = tm;
  }
  tm = m_mNodeToWorld;
  if ( phys_animated_hierarchy.m_pParent->m_Value.m_nValue != 0 )
    goto LABEL_13;
LABEL_5:
  *retstr = tm.matrix3x4_t;
  return retstr;
}


// CPhysicsGameSystem::CreateHierarchyConstraint  (line 2820, @0x0000000001f615d0, libserver.so)  // inlines: CTransform, CUtlAbstractDelegate, CUtlDelegate, CUtlKeyValuePair<CSkeletonInstance*, IPhysicsJoint*>, ClosurePtr, ConcatRotations, Construct<CUtlKeyValuePair<CSkeletonInstance*, IPhysicsJoint*>, CSkeletonInstance*, IPhysicsJoint*>, DoInsert<CSkeletonInstance*>, DoLookup<CSkeletonInstance*>, Element, FastDelegate1, GetEntityNameAsCStr, GetHierarchyAttachName, GetParentSkeletonInstance, Insert, MatrixQuaternion, MatrixTransform, PhysicsJointDesc_t, PhysicsWeldJointDesc_t, String, Transposed, UpdateHierarchyConstraint, VectorAligned, VectorITransform, matrix3x4a_t, memcpy, operator(), operator=, operator[]
// calls: CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*, IPhysicsJoint*>, int> >::DoInsertUnconstructed, CGameSceneNode::GetWorldGroupId, CPhysicsGameSystem::GetExistingLevelWorld, EntityBodyTransform, VectorITransform, MatrixTranspose, ConcatRotations, MatrixQuaternion, MatrixTransform, CPhysicsGameSystem::DestroyHierarchyConstraint, CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*, IPhysicsJoint*>, int> >::DoLookup<CSkeletonInstance*>, Warning
// callers: CModelState::UpdateMotionTypeOfAggregate
// strings: "Cannot create hierarchy constraint between %s and %s because the parent has no physics ag
HPhysicsJoint __fastcall CPhysicsGameSystem::CreateHierarchyConstraint(
        CPhysicsGameSystem *const this,
        CSkeletonInstance *pInstance)
{
  CGameSceneNode *m_pParent; // rdi
  unsigned int v5; // edx
  unsigned int v6; // r12d
  CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*> *m_pMemory; // rdx
  __int64 v8; // rax
  CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*> *v9; // rcx
  CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*> *v10; // r15
  WorldGroupId_t v11; // eax
  IVPhysics2World *ExistingLevelWorld; // rax
  CGameSceneNode *v13; // rdi
  __int64 v14; // r11
  uint32 m_nHashCode; // r12d
  IPhysAggregateInstance *m_pVPhysicsAggregate; // r14
  __int64 v17; // r9
  IPhysicsBody *v18; // r12
  IPhysicsBody *v19; // rax
  __int64 v20; // rdx
  vec_t z; // esi
  WorldGroupId_t v22; // eax
  IVPhysics2World *v23; // rax
  __int64 v24; // rax
  IPhysicsJoint *v25; // rbx
  void (__fastcall *v26)(IPhysicsBody *, matrix3x4_t *); // r13
  const char *m_pAsString; // rdx
  CEntityIdentity *m_pEntity; // rax
  const char *v30; // rsi
  CEntityIdentity *v31; // rax
  IPhysAggregateInstance *pAggregateInstance; // [rsp+0h] [rbp-1C0h]
  IPhysicsBody *v33; // [rsp+8h] [rbp-1B8h]
  CSkeletonInstance *pParentSkeletonInstance; // [rsp+20h] [rbp-1A0h]
  Quaternion q; // [rsp+30h] [rbp-190h] BYREF
  matrix3x4a_t childToWorld; // [rsp+40h] [rbp-180h] BYREF
  matrix3x4a_t parentToWorld; // [rsp+70h] [rbp-150h] BYREF
  matrix3x4_t in1; // [rsp+A0h] [rbp-120h] BYREF
  matrix3x4_t out; // [rsp+D0h] [rbp-F0h] BYREF
  int v40; // [rsp+100h] [rbp-C0h] BYREF
  HPhysicsBody hReferenceBody; // [rsp+108h] [rbp-B8h]
  HPhysicsBody hAttachBody; // [rsp+110h] [rbp-B0h]
  __int64 v43; // [rsp+118h] [rbp-A8h]
  float v44; // [rsp+120h] [rbp-A0h]
  Quaternion v45; // [rsp+124h] [rbp-9Ch]
  Vector v46; // [rsp+134h] [rbp-8Ch]
  Quaternion v47; // [rsp+140h] [rbp-80h]
  char v48; // [rsp+150h] [rbp-70h]
  int v49; // [rsp+154h] [rbp-6Ch]
  int v50; // [rsp+158h] [rbp-68h]
  int v51; // [rsp+15Ch] [rbp-64h]
  __int64 v52; // [rsp+160h] [rbp-60h]
  __int64 v53; // [rsp+168h] [rbp-58h]
  __int64 v54; // [rsp+170h] [rbp-50h]
  int v55; // [rsp+178h] [rbp-48h]
  int v56; // [rsp+17Ch] [rbp-44h]
  int v57; // [rsp+180h] [rbp-40h]
  int v58; // [rsp+184h] [rbp-3Ch]
  int v59; // [rsp+188h] [rbp-38h]
  int v60; // [rsp+18Ch] [rbp-34h]

  m_pParent = pInstance->m_pParent;
  if ( m_pParent != 0 && (*(m_pParent->_vptr_CGameSceneNode + 9))(m_pParent) != 0 )
  {
    v5 = 33 * (((4097 * pInstance + 2127912214) >> 19) ^ (4097 * pInstance + 2127912214) ^ 0xC761C23C);
    v6 = ((9 * ((v5 - 369570787) ^ ((v5 + 374761393) << 9)) - 42973499) >> 16)
       ^ (9 * ((v5 - 369570787) ^ ((v5 + 374761393) << 9)) - 42973499)
       ^ 0xB55A4F09;
    if ( this->m_HierarchyConstraints.m_nUsed == 0
      || (LODWORD(v8) = CUtlHashtable<CSkeletonInstance *,IPhysicsJoint *,PointerHashFunctor,PointerEqualFunctor,undefined_t,CUtlMemory<CUtlHashtableEntry<CSkeletonInstance *,IPhysicsJoint *>,int>>::DoLookup<CSkeletonInstance *>(
                          &this->m_HierarchyConstraints,
                          pInstance,
                          v6,
                          0),
          v8 == -1) )
    {
      LODWORD(v8) = CUtlHashtable<CSkeletonInstance *,IPhysicsJoint *,PointerHashFunctor,PointerEqualFunctor,undefined_t,CUtlMemory<CUtlHashtableEntry<CSkeletonInstance *,IPhysicsJoint *>,int>>::DoInsertUnconstructed(
                      &this->m_HierarchyConstraints,
                      v6,
                      1);
      m_pMemory = this->m_HierarchyConstraints.m_table.m_pMemory;
      v8 = v8;
      v9 = &m_pMemory[v8];
      if ( v9 != -4LL )
      {
        *v9->data = pInstance;
        *&v9->data[2] = 0;
        m_pMemory = this->m_HierarchyConstraints.m_table.m_pMemory;
      }
    }
    else
    {
      m_pMemory = this->m_HierarchyConstraints.m_table.m_pMemory;
      v8 = v8;
    }
    v10 = &m_pMemory[v8];
    if ( *&v10->data[2] != 0 )
    {
      v11.m_nHashCode = CGameSceneNode::GetWorldGroupId(pInstance).m_nHashCode;
      ExistingLevelWorld = CPhysicsGameSystem::GetExistingLevelWorld(this, v11);
      (*(*ExistingLevelWorld + 904LL))(ExistingLevelWorld, *&v10->data[2]);
    }
    v13 = pInstance->m_pParent;
    v14 = 0;
    m_nHashCode = pInstance->m_hierarchyAttachName.m_Value.m_nHashCode;
    m_pVPhysicsAggregate = pInstance->m_modelState.m_pVPhysicsAggregate;
    if ( v13 != 0 )
      v14 = (*(v13->_vptr_CGameSceneNode + 9))(v13);
    v17 = *(v14 + 536);
    pParentSkeletonInstance = v14;
    if ( v17 != 0 )
    {
      pAggregateInstance = *(v14 + 536);
      v18 = (*(*v17 + 168LL))(v17, m_nHashCode);
      v19 = (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 10))(m_pVPhysicsAggregate, 0);
      v48 = 0;
      hAttachBody = v19;
      v33 = v19;
      hReferenceBody = v18;
      v20 = *&quat_identity.z;
      z = vec3_origin.z;
      v40 = 6;
      v49 = 0;
      *&v45.z = v20;
      v43 = *&vec3_origin.x;
      v44 = z;
      *&v46.x = *&vec3_origin.x;
      v46.z = z;
      *&v47.z = v20;
      *&v45.x = *&quat_identity.x;
      *&v47.x = *&quat_identity.x;
      v50 = 0;
      v51 = 0;
      v52 = 0;
      v53 = 0;
      v54 = 0;
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v58 = 0;
      v59 = 0;
      v60 = 0;
      EntityBodyTransform(&out, pInstance, m_pVPhysicsAggregate);
      childToWorld = out;
      EntityBodyTransform(&out, pParentSkeletonInstance, pAggregateInstance);
      *&in1.m_flMatVal[0][0] = __PAIR64__(
                                 LODWORD(childToWorld.m_flMatVal[1][3]),
                                 LODWORD(childToWorld.m_flMatVal[0][3]));
      parentToWorld = out;
      in1.m_flMatVal[0][2] = childToWorld.m_flMatVal[2][3];
      VectorITransform(&in1, &parentToWorld, &out);
      v43 = *&out.m_flMatVal[0][0];
      v44 = out.m_flMatVal[0][2];
      v46 = vec3_origin;
      MatrixTranspose(&parentToWorld, &in1);
      ConcatRotations(&in1, &childToWorld, &out);
      MatrixQuaternion(&out, &q);
      v45 = q;
      v47 = quat_identity;
      v22.m_nHashCode = CGameSceneNode::GetWorldGroupId(pInstance).m_nHashCode;
      v23 = CPhysicsGameSystem::GetExistingLevelWorld(this, v22);
      v24 = (*(*v23 + 864LL))(v23, &v40);
      *&v10->data[2] = v24;
      v25 = v24;
      (*(*v24 + 440LL))(v24, 1);
      v26 = *(*v33 + 432LL);
      out.m_flMatVal[0][3] = 0.0;
      MatrixTransform(&childToWorld, &out);
      v26(v33, &out);
      return v25;
    }
    else
    {
      m_pAsString = "";
      m_pEntity = pInstance->m_pParent->CGameSceneNode::m_pOwner->m_pEntity;
      if ( m_pEntity->m_name.u.m_Id != 0 )
        m_pAsString = m_pEntity->m_name.u.m_pAsString;
      v30 = "";
      v31 = pInstance->m_pOwner->m_pEntity;
      if ( v31->m_name.u.m_Id != 0 )
        v30 = v31->m_name.u.m_pAsString;
      Warning(
        "Cannot create hierarchy constraint between %s and %s because the parent has no physics aggregate\n",
        v30,
        m_pAsString);
      return 0;
    }
  }
  else
  {
    CPhysicsGameSystem::DestroyHierarchyConstraint(this, pInstance);
    return 0;
  }
}


// CPhysicsGameSystem::UpdateHierarchyConstraint  (line 2879, @0x0000000001f555e0, libserver.so)  // inlines: AddToTail, CopyConstruct<CSkeletonInstance*>, DoLookup<CSkeletonInstance*>, Element, Find, GrowMemory, IsMarkedForHierarchyJointUpdate, MarkForHierarchyJointUpdate, UpdateHierarchyConstraint, operator IPhysicsJoint*, operator(), operator[]
// calls: CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*, IPhysicsJoint*>, int> >::DoLookup<CSkeletonInstance*>, CFnPhysicsJoint<IFnPhysicsWeldJoint>::CFnPhysicsJoint, CUtlMemory<CSkeletonInstance*, int>::Grow, __stack_chk_fail
// callers: CPhysicsGameSystem::MarkChanged, CSkeletonInstance::CollisionRulesChanged
void __fastcall CPhysicsGameSystem::UpdateHierarchyConstraint(
        CPhysicsGameSystem *const this,
        CSkeletonInstance *pInstance,
        bool bUpdateWeldTransform)
{
  unsigned int v6; // edx
  int v7; // edx
  UtlHashHandle_t v8; // eax
  CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*> *v9; // rax
  __int64 v10; // rbx
  char v11; // al
  __int64 m_Size; // rbx
  CSkeletonInstance **v13; // rax
  CFnPhysicsWeldJoint weldJoint; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  if ( this->m_HierarchyConstraints.m_nUsed != 0 )
  {
    v6 = 33 * (((4097 * pInstance + 2127912214) >> 19) ^ (4097 * pInstance + 2127912214) ^ 0xC761C23C);
    v7 = 9 * ((v6 - 369570787) ^ ((v6 + 374761393) << 9)) - 42973499;
    v8 = CUtlHashtable<CSkeletonInstance *,IPhysicsJoint *,PointerHashFunctor,PointerEqualFunctor,undefined_t,CUtlMemory<CUtlHashtableEntry<CSkeletonInstance *,IPhysicsJoint *>,int>>::DoLookup<CSkeletonInstance *>(
           &this->m_HierarchyConstraints,
           pInstance,
           HIWORD(v7) ^ v7 ^ 0xB55A4F09,
           0);
    if ( v8 != -1 )
    {
      v9 = &this->m_HierarchyConstraints.m_table.m_pMemory[v8];
      v10 = *&v9->data[2];
      if ( v10 != 0 )
      {
        CFnPhysicsJoint<IFnPhysicsWeldJoint>::CFnPhysicsJoint(&weldJoint, *&v9->data[2]);
        if ( (*(*weldJoint.m_Buffer + 8LL))(&weldJoint) != 0 )
        {
          (*(*v10 + 136LL))(v10);
          (*(*v10 + 440LL))(v10, 1);
          if ( bUpdateWeldTransform )
          {
            v11 = *(pInstance + 722);
            if ( (v11 & 0x10) == 0 )
            {
              *(pInstance + 722) = v11 | 0x10;
              m_Size = this->m_hierarchyJointsToUpdate.m_Size;
              if ( m_Size == this->m_hierarchyJointsToUpdate.m_Memory.m_nAllocationCount )
                CUtlMemory<CSkeletonInstance *,int>::Grow(&this->m_hierarchyJointsToUpdate.m_Memory, 1);
              ++this->m_hierarchyJointsToUpdate.m_Size;
              v13 = &this->m_hierarchyJointsToUpdate.m_Memory.m_pMemory[m_Size];
              if ( v13 != 0 )
                *v13 = pInstance;
            }
          }
        }
      }
    }
  }
}


// CPhysicsGameSystem::UpdateHierarchyJoint  (line 2904, @0x0000000001f37580, libserver.so)  // inlines: ConcatRotations, DoLookup<CSkeletonInstance*>, Element, Find, GetParentSkeletonInstance, MarkForHierarchyJointUpdate, MatrixQuaternion, Transposed, VectorITransform, matrix3x4a_t, memcpy, operator IPhysicsJoint*, operator(), operator=, operator[]
// calls: CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*, IPhysicsJoint*>, int> >::DoLookup<CSkeletonInstance*>, CFnPhysicsJoint<IFnPhysicsWeldJoint>::CFnPhysicsJoint, EntityBodyTransform, VectorITransform, MatrixTranspose, ConcatRotations, MatrixQuaternion, __stack_chk_fail
// callers: CPhysicsGameSystem::OnSimulate
void __fastcall CPhysicsGameSystem::UpdateHierarchyJoint(CPhysicsGameSystem *const this, CSkeletonInstance *pInstance)
{
  unsigned int v4; // edx
  unsigned int v5; // edx
  UtlHashHandle_t v6; // eax
  IPhysicsJoint *v7; // rsi
  CGameSceneNode *m_pParent; // rdi
  __int64 v9; // rax
  IPhysAggregateInstance *v10; // r15
  CSkeletonInstance *pParentSkeletonInstance; // [rsp+8h] [rbp-138h]
  Vector vLocalOrigin1; // [rsp+10h] [rbp-130h] BYREF
  Quaternion qLocalBasis1; // [rsp+20h] [rbp-120h] BYREF
  matrix3x4a_t childToWorld; // [rsp+30h] [rbp-110h] BYREF
  matrix3x4a_t parentToWorld; // [rsp+60h] [rbp-E0h] BYREF
  matrix3x4_t in1; // [rsp+90h] [rbp-B0h] BYREF
  matrix3x4_t out; // [rsp+C0h] [rbp-80h] BYREF
  CFnPhysicsWeldJoint weldJoint; // [rsp+F0h] [rbp-50h] BYREF
  unsigned __int64 v19; // [rsp+108h] [rbp-38h]

  *(pInstance + 722) &= ~0x10u;
  v19 = __readfsqword(0x28u);
  if ( this->m_HierarchyConstraints.m_nUsed != 0 )
  {
    v4 = 33 * (((4097 * pInstance + 2127912214) >> 19) ^ (4097 * pInstance + 2127912214) ^ 0xC761C23C);
    v5 = 9 * ((v4 - 369570787) ^ ((v4 + 374761393) << 9)) - 42973499;
    v6 = CUtlHashtable<CSkeletonInstance *,IPhysicsJoint *,PointerHashFunctor,PointerEqualFunctor,undefined_t,CUtlMemory<CUtlHashtableEntry<CSkeletonInstance *,IPhysicsJoint *>,int>>::DoLookup<CSkeletonInstance *>(
           &this->m_HierarchyConstraints,
           pInstance,
           HIWORD(v5) ^ v5 ^ 0xB55A4F09,
           0);
    if ( v6 != -1 )
    {
      v7 = *&this->m_HierarchyConstraints.m_table.m_pMemory[v6].data[2];
      if ( v7 != 0 )
      {
        CFnPhysicsJoint<IFnPhysicsWeldJoint>::CFnPhysicsJoint(&weldJoint, v7);
        if ( (*(*weldJoint.m_Buffer + 8LL))(&weldJoint) != 0 )
        {
          m_pParent = pInstance->m_pParent;
          v9 = 0;
          if ( m_pParent != 0 )
            v9 = (*(m_pParent->_vptr_CGameSceneNode + 9))(m_pParent);
          v10 = *(v9 + 536);
          pParentSkeletonInstance = v9;
          EntityBodyTransform(&out, pInstance, pInstance->m_modelState.m_pVPhysicsAggregate);
          childToWorld = out;
          EntityBodyTransform(&out, pParentSkeletonInstance, v10);
          *&in1.m_flMatVal[0][0] = __PAIR64__(
                                     LODWORD(childToWorld.m_flMatVal[1][3]),
                                     LODWORD(childToWorld.m_flMatVal[0][3]));
          parentToWorld = out;
          in1.m_flMatVal[0][2] = childToWorld.m_flMatVal[2][3];
          VectorITransform(&in1, &parentToWorld, &out);
          vLocalOrigin1 = *&out.m_flMatVal[0][0];
          MatrixTranspose(&parentToWorld, &in1);
          ConcatRotations(&in1, &childToWorld, &out);
          MatrixQuaternion(&out, &qLocalBasis1);
          (*(*weldJoint.m_Buffer + 64LL))(&weldJoint, &vLocalOrigin1, &qLocalBasis1);
        }
      }
    }
  }
}


// CPhysicsGameSystem::UpdateHierarchyConstraint  (line 2928, @0x0000000001f37820, libserver.so)
void __fastcall CPhysicsGameSystem::UpdateHierarchyConstraint(
        CPhysicsGameSystem *const this,
        HPhysicsJoint hWeldJoint,
        HPhysicsBody hAttachBody)
{
  (*(*hWeldJoint + 440LL))(hWeldJoint, 1, hAttachBody);
}


// CPhysicsGameSystemChangeScope::CPhysicsGameSystemChangeScope  (line 2937, @0x0000000001f41e70, libserver.so)
// calls: CPhysicsGameSystem::OnBeginProcessing
// globals: g_pPhysicsGameSystem
void __fastcall CPhysicsGameSystemChangeScope::CPhysicsGameSystemChangeScope(
        CPhysicsGameSystemChangeScope *const this,
        WorldGroupId_t nWorldGroupId)
{
  this->m_nWorldGroupId = nWorldGroupId;
  CPhysicsGameSystem::OnBeginProcessing(g_pPhysicsGameSystem, &this->m_nWorldGroupId);
}


// CPhysicsGameSystemChangeScope::~CPhysicsGameSystemChangeScope  (line 2943, @0x0000000001f41ed0, libserver.so)
// calls: CPhysicsGameSystem::OnEndProcessing
// globals: g_pPhysicsGameSystem
void __fastcall CPhysicsGameSystemChangeScope::~CPhysicsGameSystemChangeScope(
        CPhysicsGameSystemChangeScope *const this)
{
  CPhysicsGameSystem::OnEndProcessing(g_pPhysicsGameSystem, &this->m_nWorldGroupId);
}


// phys_dump_intersection_controller  (line 3041, @0x0000000001f67fc0, libserver.so)
// calls: CPhysicsGameSystem::GetIntersectionController
// globals: g_pPhysicsGameSystem
void __fastcall phys_dump_intersection_controller(const CCommandContext *const ctx, const CCommand *const args)
{
  IPhysIntersectionController *IntersectionController; // rax

  IntersectionController = CPhysicsGameSystem::GetIntersectionController(g_pPhysicsGameSystem);
  (*(IntersectionController->_vptr_IPhysIntersectionController + 11))(IntersectionController);
}


// phys_list  (line 3047, @0x0000000001f55100, libserver.so)  // inlines: Arg, CDebugInfoMap, CUtlMap, CUtlMemory, CUtlRBTree, CUtlString, CUtlVector, CUtlVectorBase, Element, Find, GetClassNameAsCStr, GetEntityNameAsCStr, LeftChild, ResetDbgInfo, RightChild, String, end, operator(), operator[], ~CDebugInfoMap, ~CUtlMap, ~CUtlString, ~CUtlVector
// calls: V_stricmp_fast, CPhysicsGameSystem::GetLevelWorldList, CPhysicsGameSystem::GetExistingLevelWorld, CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::~CUtlVectorBase, CUtlString::operator+=, CUtlString::FreeMemoryBlock, CPhysicsGameSystem::IsLevelAggregateInstance, CUtlString::Get, Msg, _Unwind_Resume, CUtlRBTree<CUtlMap<IPhysAggregateInstance*, int>::Node_t, short unsigned int, CUtlMap<IPhysAggregateInstance*, int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<IPhysAggregateInstance*, int>::Node_t, short unsigned int>, short unsigned int> >::~CUtlRBTree
// strings: "-allents", "-classes", "-sdk", "Level: %s\n", "Non-entity Aggregate: %s", "Unique Aggregates: %u\n"
// globals: g_pPhysicsGameSystem, CDefOps<IPhysAggregateInstance *>::LessFunc(IPhysAggregateInstance * const&,IPhysAggregateInstance * const&)
void __fastcall phys_list(const CCommandContext *const ctx, const CCommand *const args)
{
  int v3; // r12d
  char v4; // r13
  char *v5; // r14
  const char *v6; // rdi
  const char *v7; // rdi
  const char *v8; // rdi
  CUtlStringToken *m_pMemory; // r12
  CUtlStringToken *v10; // r14
  IVPhysics2World *ExistingLevelWorld; // rax
  CEntityIdentity *i; // rbx
  const char *m_pAsString; // rsi
  const char *v14; // rsi
  IVPhysics2World *v15; // r15
  char *v16; // rax
  IPhysAggregateInstance *v17; // r14
  __int64 m_nHashCode_low; // rax
  CUtlStringToken *v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // r12
  const char *v22; // rax
  const char *v23; // rax
  WorldGroupId_t *v24; // [rsp+0h] [rbp-B0h]
  WorldGroupId_t *v25; // [rsp+8h] [rbp-A8h]
  uint nAggregateCount; // [rsp+18h] [rbp-98h]
  int v27; // [rsp+1Ch] [rbp-94h]
  CUtlString line_0; // [rsp+20h] [rbp-90h] BYREF
  CUtlString line; // [rsp+30h] [rbp-80h] BYREF
  WorldGroupId_t *v30; // [rsp+38h] [rbp-78h]
  int v31; // [rsp+40h] [rbp-70h]
  int v32; // [rsp+44h] [rbp-6Ch]
  CUtlVector<CUtlStringToken,CUtlMemory<CUtlStringToken,int> > list; // [rsp+50h] [rbp-60h] BYREF
  unsigned __int16 v34; // [rsp+68h] [rbp-48h]
  __int16 v35; // [rsp+6Ah] [rbp-46h]
  __int16 v36; // [rsp+6Ch] [rbp-44h]
  __int16 v37; // [rsp+6Eh] [rbp-42h]
  __int64 v38; // [rsp+70h] [rbp-40h]
  int v39; // [rsp+78h] [rbp-38h]

  if ( args->m_nArgc > 1 )
  {
    v3 = 1;
    v4 = 0;
    while ( 1 )
    {
      v5 = args + 8 * v3;
      if ( V_stricmp_fast(*(v5 + 129), "-allents") != 0 )
      {
        v6 = "";
        if ( args->m_nArgc > v3 )
          v6 = *(v5 + 129);
        if ( V_stricmp_fast(v6, "-classes") != 0 )
        {
          v7 = "";
          if ( args->m_nArgc > v3 )
            v7 = *(v5 + 129);
          if ( V_stricmp_fast(v7, "-sdk") == 0 )
          {
            (*(g_pVPhysics2->_vptr_IAppSystem + 17))(g_pVPhysics2, args);
            return;
          }
          v8 = "";
          if ( args->m_nArgc > v3 )
            v8 = *(v5 + 129);
          if ( V_stricmp_fast(v8, "-world") == 0 )
          {
            list.m_Size = 0;
            list.m_Memory.m_pMemory = 0;
            list.m_Memory.m_nAllocationCount = 0;
            list.m_Memory.m_nGrowSize = 0;
            CPhysicsGameSystem::GetLevelWorldList(g_pPhysicsGameSystem, &list);
            m_pMemory = list.m_Memory.m_pMemory;
            v10 = &list.m_Memory.m_pMemory[list.m_Size];
            if ( list.m_Memory.m_pMemory != v10 )
            {
              do
              {
                ExistingLevelWorld = CPhysicsGameSystem::GetExistingLevelWorld(
                                       g_pPhysicsGameSystem,
                                       m_pMemory->m_nHashCode);
                (*(*ExistingLevelWorld + 32LL))(ExistingLevelWorld, args);
                ++m_pMemory;
              }
              while ( v10 != m_pMemory );
            }
            CUtlVectorBase<CUtlStringToken,CUtlMemory<CUtlStringToken,int>>::~CUtlVectorBase(&list);
            return;
          }
        }
        else
        {
          v4 = 1;
        }
      }
      if ( args->m_nArgc <= ++v3 )
        goto LABEL_20;
    }
  }
  v4 = 0;
LABEL_20:
  *&list.m_Size = CDefOps<IPhysAggregateInstance *>::LessFunc;
  list.m_Memory.m_pMemory = 0;
  list.m_Memory.m_nAllocationCount = 0;
  list.m_Memory.m_nGrowSize = 0;
  v34 = -1;
  v35 = 0;
  v36 = -1;
  v37 = -1;
  v38 = 0;
  v39 = 0;
  for ( i = g_pEntitySystem->m_EntityList.m_pFirstActiveEntity; i != 0; i = i->m_pNext )
  {
    line.m_pString = 0;
    if ( v4 != 0 )
    {
      m_pAsString = "";
      if ( i->m_designerName.u.m_Id != 0 )
        m_pAsString = i->m_designerName.u.m_pAsString;
      CUtlString::operator+=(&line, m_pAsString);
      CUtlString::operator+=(&line, ": ");
    }
    v14 = "";
    if ( i->m_name.u.m_Id != 0 )
      v14 = i->m_name.u.m_pAsString;
    CUtlString::operator+=(&line, v14);
    if ( line.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&line);
  }
  if ( g_pPhysicsGameSystem != 0 )
  {
    LODWORD(line.m_pString) = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    CPhysicsGameSystem::GetLevelWorldList(g_pPhysicsGameSystem, &line);
    v24 = &v30[SLODWORD(line.m_pString)];
    if ( v30 == v24 )
    {
      Msg("Unique Aggregates: %u\n", 0);
    }
    else
    {
      v25 = v30;
      nAggregateCount = 0;
      do
      {
        v27 = 0;
        v15 = CPhysicsGameSystem::GetExistingLevelWorld(g_pPhysicsGameSystem, v25->m_nHashCode);
        while ( v27 < (*(*v15 + 96LL))(v15) )
        {
          v16 = (*(*v15 + 112LL))(v15, v27);
          v17 = v16;
          if ( v16 != 0 )
          {
            line_0.m_pString = v16;
            m_nHashCode_low = v34;
            if ( v34 == 0xFFFF )
            {
LABEL_42:
              line_0.m_pString = 0;
              (*(v17->_vptr_IPhysAggregateInstance + 49))(v17, &line_0);
              if ( CPhysicsGameSystem::IsLevelAggregateInstance(g_pPhysicsGameSystem, v17) )
              {
                v22 = CUtlString::Get(&line_0);
                Msg("Level: %s\n", v22);
              }
              else
              {
                v23 = CUtlString::Get(&line_0);
                Msg("Non-entity Aggregate: %s", v23);
              }
              if ( line_0.m_pString != 0 )
                CUtlString::FreeMemoryBlock(&line_0);
              ++nAggregateCount;
            }
            else
            {
              v19 = list.m_Memory.m_pMemory;
              while ( 1 )
              {
                while ( 1 )
                {
                  v20 = 3 * m_nHashCode_low;
                  v21 = 6 * m_nHashCode_low;
                  if ( (*&list.m_Size)(&line_0, &v19[6 * m_nHashCode_low + 2]) == 0 )
                    break;
                  v19 = list.m_Memory.m_pMemory;
                  m_nHashCode_low = LOWORD(list.m_Memory.m_pMemory[2 * v20].m_nHashCode);
                  if ( m_nHashCode_low == 0xFFFF )
                    goto LABEL_42;
                }
                if ( (*&list.m_Size)(&list.m_Memory.m_pMemory[v21 + 2], &line_0) == 0 )
                  break;
                v19 = list.m_Memory.m_pMemory;
                m_nHashCode_low = HIWORD(list.m_Memory.m_pMemory[v21].m_nHashCode);
                if ( m_nHashCode_low == 0xFFFF )
                  goto LABEL_42;
              }
            }
          }
          ++v27;
        }
        ++v25;
      }
      while ( v24 != v25 );
      Msg("Unique Aggregates: %u\n", nAggregateCount);
    }
    CUtlVectorBase<CUtlStringToken,CUtlMemory<CUtlStringToken,int>>::~CUtlVectorBase(&line);
    CUtlRBTree<CUtlMap<IPhysAggregateInstance *,int,unsigned short,bool (*)(IPhysAggregateInstance * const&,IPhysAggregateInstance * const&)>::Node_t,unsigned short,CUtlMap<IPhysAggregateInstance *,int,unsigned short,bool (*)(IPhysAggregateInstance * const&,IPhysAggregateInstance * const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<IPhysAggregateInstance *,int,unsigned short,bool (*)(IPhysAggregateInstance * const&,IPhysAggregateInstance * const&)>::Node_t,unsigned short>,unsigned short>>::~CUtlRBTree(&list);
  }
  else
  {
    CUtlRBTree<CUtlMap<IPhysAggregateInstance *,int,unsigned short,bool (*)(IPhysAggregateInstance * const&,IPhysAggregateInstance * const&)>::Node_t,unsigned short,CUtlMap<IPhysAggregateInstance *,int,unsigned short,bool (*)(IPhysAggregateInstance * const&,IPhysAggregateInstance * const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<IPhysAggregateInstance *,int,unsigned short,bool (*)(IPhysAggregateInstance * const&,IPhysAggregateInstance * const&)>::Node_t,unsigned short>,unsigned short>>::~CUtlRBTree(&list);
  }
}


// phys_sleep  (line 3176, @0x0000000001f54b20, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, end, ~CUtlVector
// calls: CPhysicsGameSystem::GetLevelWorldList, CPhysicsGameSystem::GetExistingLevelWorld, CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: g_pPhysicsGameSystem
void __fastcall phys_sleep(const CCommandContext *const ctx, const CCommand *const args)
{
  CUtlStringToken *m_pMemory; // r13
  CUtlStringToken *v3; // r14
  IVPhysics2World *ExistingLevelWorld; // rbx
  int i; // r12d
  __int64 v6; // rax
  int j; // r12d
  __int64 v8; // rax
  CUtlVector<CUtlStringToken,CUtlMemory<CUtlStringToken,int> > worldList; // [rsp+0h] [rbp-50h] BYREF

  worldList.m_Size = 0;
  worldList.m_Memory.m_pMemory = 0;
  worldList.m_Memory.m_nAllocationCount = 0;
  worldList.m_Memory.m_nGrowSize = 0;
  CPhysicsGameSystem::GetLevelWorldList(g_pPhysicsGameSystem, &worldList);
  m_pMemory = worldList.m_Memory.m_pMemory;
  v3 = &worldList.m_Memory.m_pMemory[worldList.m_Size];
  if ( worldList.m_Memory.m_pMemory != v3 )
  {
    do
    {
      ExistingLevelWorld = CPhysicsGameSystem::GetExistingLevelWorld(g_pPhysicsGameSystem, m_pMemory->m_nHashCode);
      for ( i = 0; i < (*(*ExistingLevelWorld + 96LL))(ExistingLevelWorld); ++i )
      {
        v6 = (*(*ExistingLevelWorld + 112LL))(ExistingLevelWorld, i);
        (*(*v6 + 240LL))(v6);
      }
      for ( j = 0; j < (*(*ExistingLevelWorld + 744LL))(ExistingLevelWorld); ++j )
      {
        v8 = (*(*ExistingLevelWorld + 752LL))(ExistingLevelWorld, j);
        (*(*v8 + 808LL))(v8);
      }
      ++m_pMemory;
    }
    while ( v3 != m_pMemory );
  }
  CUtlVectorBase<CUtlStringToken,CUtlMemory<CUtlStringToken,int>>::~CUtlVectorBase(&worldList);
}


// phys_wakeup  (line 3195, @0x0000000001f54a00, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, end, ~CUtlVector
// calls: CPhysicsGameSystem::GetLevelWorldList, CPhysicsGameSystem::GetExistingLevelWorld, CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: g_pPhysicsGameSystem
void __fastcall phys_wakeup(const CCommandContext *const ctx, const CCommand *const args)
{
  CUtlStringToken *m_pMemory; // r13
  CUtlStringToken *v3; // r14
  IVPhysics2World *ExistingLevelWorld; // rbx
  int i; // r12d
  __int64 v6; // rax
  int j; // r12d
  __int64 v8; // rax
  CUtlVector<CUtlStringToken,CUtlMemory<CUtlStringToken,int> > worldList; // [rsp+0h] [rbp-50h] BYREF

  worldList.m_Size = 0;
  worldList.m_Memory.m_pMemory = 0;
  worldList.m_Memory.m_nAllocationCount = 0;
  worldList.m_Memory.m_nGrowSize = 0;
  CPhysicsGameSystem::GetLevelWorldList(g_pPhysicsGameSystem, &worldList);
  m_pMemory = worldList.m_Memory.m_pMemory;
  v3 = &worldList.m_Memory.m_pMemory[worldList.m_Size];
  if ( worldList.m_Memory.m_pMemory != v3 )
  {
    do
    {
      ExistingLevelWorld = CPhysicsGameSystem::GetExistingLevelWorld(g_pPhysicsGameSystem, m_pMemory->m_nHashCode);
      for ( i = 0; i < (*(*ExistingLevelWorld + 96LL))(ExistingLevelWorld); ++i )
      {
        v6 = (*(*ExistingLevelWorld + 112LL))(ExistingLevelWorld, i);
        (*(*v6 + 232LL))(v6);
      }
      for ( j = 0; j < (*(*ExistingLevelWorld + 744LL))(ExistingLevelWorld); ++j )
      {
        v8 = (*(*ExistingLevelWorld + 752LL))(ExistingLevelWorld, j);
        (*(*v8 + 608LL))(v8);
      }
      ++m_pMemory;
    }
    while ( v3 != m_pMemory );
  }
  CUtlVectorBase<CUtlStringToken,CUtlMemory<CUtlStringToken,int>>::~CUtlVectorBase(&worldList);
}


// ray_bench  (line 3215, @0x0000000001f6ea10, libserver.so)  // inlines: AddMultipleToTail, CGameQueryAttributes, CGameTrace, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<Source1_Ray_t>, DidHit, EnsureCount, GrowMemory, GrowVector, HitStaticOnlyByContents, Init, InsertMultipleBefore, Purge, RemoveAll, RnCollisionAttr_t, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnore, SetInteractsWith, SetObjectSetMask, Source1_Ray_t, TraceRay, VectorAligned, operator Ray_t, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: Msg, CUtlVectorBase<Ray_t, CUtlMemory<Ray_t, int> >::SetCount, CPhysicsGameSystem::GetExistingLevelWorld, Plat_FloatTime, CGameTrace::Init, EntityIDFromBaseEntity, HierarchyIDFromBaseEntity, CGamePhysicsQueryInterface::TraceRay, CUtlMemory<Source1_Ray_t, int>::Purge, CUtlMemory<Ray_t, int>::Purge, Warning, CUtlMemory<Source1_Ray_t, int>::Grow (13 total)
// strings: "rays.bin", "Loaded %d rays\n", "RAY TEST: %d hits, %d misses, %.2fms   (%d rays, %d sweeps against %d aggregates)\n", "Main level world does not exist?!\n"
// globals: g_pPhysicsGameSystem
void __fastcall ray_bench(const CCommandContext *const ctx, const CCommand *const args)
{
  __int64 v2; // rbx
  int x_low; // r14d
  Source1_Ray_t *m_pMemory; // rsi
  __int64 v5; // rdx
  int i; // ecx
  vec_t z; // xmm0_4
  vec_t v8; // xmm11_4
  vec_t y; // xmm10_4
  vec_t v10; // xmm9_4
  vec_t v11; // xmm8_4
  vec_t v12; // xmm7_4
  vec_t v13; // xmm6_4
  vec_t v14; // xmm5_4
  vec_t v15; // xmm4_4
  vec_t v16; // xmm3_4
  vec_t v17; // xmm2_4
  vec_t v18; // xmm1_4
  bool m_IsRay; // di
  bool m_IsSwept; // si
  __int64 v21; // rax
  char *v22; // rax
  int m_pSurfaceProperties; // xmm0_4
  IVPhysics2World *ExistingLevelWorld; // rax
  double v25; // xmm0_8
  unsigned int v26; // eax
  int m_Size; // ebx
  double v28; // xmm0_8
  unsigned int v29; // r12d
  __int64 v30; // r13
  unsigned __int64 v31; // rbx
  __int64 v32; // r13
  float v33; // xmm0_4
  Ray_t *v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rcx
  Ray_t *j; // rax
  vec_t x; // r13d
  int v39; // eax
  __int64 v40; // rdi
  _DWORD *p_x; // rdx
  __int64 v42; // [rsp+0h] [rbp-170h]
  double tStart; // [rsp+8h] [rbp-168h]
  unsigned int nAggregateCount; // [rsp+10h] [rbp-160h]
  unsigned int miss; // [rsp+14h] [rbp-15Ch]
  CUtlVector<Source1_Ray_t,CUtlMemory<Source1_Ray_t,int> > benchmarkSource1Rays; // [rsp+20h] [rbp-150h] BYREF
  CUtlVector<Ray_t,CUtlMemory<Ray_t,int> > benchmarkRays; // [rsp+40h] [rbp-130h] BYREF
  CGameQueryAttributes filter; // [rsp+60h] [rbp-110h] BYREF
  trace_t trace; // [rsp+90h] [rbp-E0h] BYREF

  benchmarkSource1Rays.m_Memory.m_pMemory = 0;
  benchmarkSource1Rays.m_Memory.m_nAllocationCount = 0;
  benchmarkSource1Rays.m_Memory.m_nGrowSize = 0;
  benchmarkSource1Rays.m_Size = 0;
  v2 = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 2))(&g_pFullFileSystem->IBaseFileSystem, "rays.bin", "rb", 0);
  if ( v2 != 0 )
  {
    trace.startpos.x = 0.0;
    (*g_pFullFileSystem->_vptr_IBaseFileSystem)(&g_pFullFileSystem->IBaseFileSystem, &trace, 4, v2);
    x_low = LODWORD(trace.startpos.x);
    if ( LODWORD(trace.startpos.x) != 0 )
    {
      if ( SLODWORD(trace.startpos.x) > 0 )
      {
        x = trace.startpos.x;
        CUtlMemory<Source1_Ray_t,int>::Grow(
          &benchmarkSource1Rays.m_Memory,
          LODWORD(trace.startpos.x) - benchmarkSource1Rays.m_Memory.m_nAllocationCount);
        benchmarkSource1Rays.m_Size = x_low;
        m_pMemory = benchmarkSource1Rays.m_Memory.m_pMemory;
        v39 = 0;
        v40 = 0;
        do
        {
          p_x = &m_pMemory[v40].m_Start.x;
          if ( &m_pMemory[v40] != 0 )
          {
            p_x[3] = 0;
            m_pMemory = benchmarkSource1Rays.m_Memory.m_pMemory;
            p_x[7] = 0;
            p_x[11] = 0;
            p_x[15] = 0;
          }
          ++v39;
          ++v40;
        }
        while ( SLODWORD(x) > v39 );
        x_low = LODWORD(trace.startpos.x);
      }
      else
      {
        m_pMemory = benchmarkSource1Rays.m_Memory.m_pMemory;
      }
      (*g_pFullFileSystem->_vptr_IBaseFileSystem)(&g_pFullFileSystem->IBaseFileSystem, m_pMemory, (80 * x_low), v2);
    }
    (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 3))(&g_pFullFileSystem->IBaseFileSystem, v2);
  }
  Msg("Loaded %d rays\n", benchmarkSource1Rays.m_Size);
  benchmarkRays.m_Size = 0;
  benchmarkRays.m_Memory.m_pMemory = 0;
  benchmarkRays.m_Memory.m_nAllocationCount = 0;
  benchmarkRays.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<Ray_t,CUtlMemory<Ray_t,int>>::SetCount(&benchmarkRays, benchmarkSource1Rays.m_Size);
  v5 = 0;
  for ( i = 0; benchmarkSource1Rays.m_Size > i; *(v22 + 16) = m_pSurfaceProperties )
  {
    ++i;
    z = benchmarkSource1Rays.m_Memory.m_pMemory[v5].m_Extents.z;
    v8 = benchmarkSource1Rays.m_Memory.m_pMemory[v5].m_Start.x;
    y = benchmarkSource1Rays.m_Memory.m_pMemory[v5].m_Start.y;
    v10 = benchmarkSource1Rays.m_Memory.m_pMemory[v5].m_Start.z;
    v11 = benchmarkSource1Rays.m_Memory.m_pMemory[v5].m_Delta.x;
    v12 = benchmarkSource1Rays.m_Memory.m_pMemory[v5].m_Delta.y;
    v13 = benchmarkSource1Rays.m_Memory.m_pMemory[v5].m_Delta.z;
    v14 = benchmarkSource1Rays.m_Memory.m_pMemory[v5].m_StartOffset.x;
    v15 = benchmarkSource1Rays.m_Memory.m_pMemory[v5].m_StartOffset.y;
    v16 = benchmarkSource1Rays.m_Memory.m_pMemory[v5].m_StartOffset.z;
    v17 = benchmarkSource1Rays.m_Memory.m_pMemory[v5].m_Extents.x;
    v18 = benchmarkSource1Rays.m_Memory.m_pMemory[v5].m_Extents.y;
    m_IsRay = benchmarkSource1Rays.m_Memory.m_pMemory[v5].m_IsRay;
    m_IsSwept = benchmarkSource1Rays.m_Memory.m_pMemory[v5].m_IsSwept;
    v21 = v5 * 80;
    ++v5;
    v22 = benchmarkRays.m_Memory.m_pMemory + v21;
    *v22 = v8;
    *(v22 + 1) = y;
    *(v22 + 2) = v10;
    *(v22 + 4) = v11;
    *(v22 + 5) = v12;
    *(v22 + 6) = v13;
    *(v22 + 8) = v14;
    *(v22 + 9) = v15;
    *(v22 + 10) = v16;
    *(v22 + 12) = v17;
    *(v22 + 13) = v18;
    *(v22 + 14) = z;
    m_pSurfaceProperties = trace.m_pSurfaceProperties;
    v22[68] = m_IsRay;
    v22[69] = m_IsSwept;
  }
  ExistingLevelWorld = CPhysicsGameSystem::GetExistingLevelWorld(g_pPhysicsGameSystem, 0);
  if ( ExistingLevelWorld != 0 )
  {
    v25 = (*(*ExistingLevelWorld + 96LL))(ExistingLevelWorld);
    nAggregateCount = v26;
    tStart = Plat_FloatTime(v25);
    memset(&trace.m_ShapeAttributes, 0, 31);
    trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    CGameTrace::Init(&trace);
    m_Size = benchmarkRays.m_Size;
    filter.m_nInteractsExclude = 0;
    filter.m_nInteractsAs = 0;
    filter.m_nEntityIdToIgnore = -1;
    filter.m_nHierarchyId = 0;
    filter.m_nCollisionGroup = 3;
    *(&filter.RnQueryShapeAttr_t + 31) = *(&filter.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
    filter.m_nObjectSetMask = 1;
    filter.m_nInteractsWith = 552961;
    filter.m_nEntityIdToIgnore = EntityIDFromBaseEntity(0);
    filter.m_nHierarchyId = HierarchyIDFromBaseEntity(0);
    if ( m_Size > 0 )
    {
      v29 = 0;
      miss = 0;
      v30 = 5LL * (m_Size - 1) + 5;
      v31 = 0;
      v32 = 16 * v30;
      CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, benchmarkRays.m_Memory.m_pMemory, &filter, &trace);
      while ( 1 )
      {
        if ( trace.fraction < 1.0 || trace.startsolid )
        {
          v31 += 80LL;
          ++v29;
          if ( v31 == v32 )
            goto LABEL_17;
        }
        else
        {
          ++miss;
          v31 += 80LL;
          if ( v31 == v32 )
            goto LABEL_17;
        }
        CGamePhysicsQueryInterface::TraceRay(
          g_pPhysicsQuery,
          &benchmarkRays.m_Memory.m_pMemory[v31 / 0x50],
          &filter,
          &trace);
      }
    }
    miss = 0;
    v29 = 0;
LABEL_17:
    v33 = (Plat_FloatTime(v28) - tStart) * 1000.0;
    if ( benchmarkRays.m_Size <= 0 )
    {
      v36 = 0;
      v35 = 0;
    }
    else
    {
      v34 = benchmarkRays.m_Memory.m_pMemory;
      LODWORD(v35) = 0;
      LODWORD(v36) = 0;
      for ( j = benchmarkRays.m_Memory.m_pMemory + 1; ; ++j )
      {
        v35 = v34->m_IsSwept + v35;
        v36 = v34->m_IsRay + v36;
        v34 = j;
        if ( j == &benchmarkRays.m_Memory.m_pMemory[(benchmarkRays.m_Size - 1) + 1] )
          break;
      }
    }
    Msg(
      "RAY TEST: %d hits, %d misses, %.2fms   (%d rays, %d sweeps against %d aggregates)\n",
      v29,
      miss,
      v36,
      v35,
      nAggregateCount,
      v33,
      &benchmarkRays);
    benchmarkRays.m_Size = 0;
    if ( (benchmarkRays.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<Ray_t,int>::Purge((v42 + 8));
      if ( (benchmarkRays.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<Ray_t,int>::Purge((v42 + 8));
    }
    if ( (benchmarkSource1Rays.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<Source1_Ray_t,int>::Purge(&benchmarkSource1Rays.m_Memory);
      if ( (benchmarkSource1Rays.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        goto LABEL_30;
    }
  }
  else
  {
    Warning("Main level world does not exist?!\n");
    benchmarkRays.m_Size = 0;
    if ( (benchmarkRays.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<Ray_t,int>::Purge(&benchmarkRays.m_Memory);
      if ( (benchmarkRays.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<Ray_t,int>::Purge(&benchmarkRays.m_Memory);
    }
    if ( (benchmarkSource1Rays.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<Source1_Ray_t,int>::Purge(&benchmarkSource1Rays.m_Memory);
      if ( (benchmarkSource1Rays.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
LABEL_30:
        CUtlMemory<Source1_Ray_t,int>::Purge(&benchmarkSource1Rays.m_Memory);
    }
  }
}


// IterateActivePhysicsEntities  (line 3335, @0x0000000001f54c40, libserver.so)  // inlines: CEntityHandle, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, GetEntityIdentity, GetEntryIndex, GetInstance, GetValidBoneFlags, IndexToIdentity, Load, LookupEntity, Purge, RemoveAll, end, operator CBaseEntity*, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CPhysicsGameSystem::GetLevelWorldList, CPhysicsGameSystem::GetExistingLevelWorld, CUtlString::FreeMemoryBlock, CGameSceneNode::GetOwnerEntity, Msg, CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::~CUtlVectorBase, CUtlString::operator=, CUtlMemory<IPhysicsBody*, int>::Purge, _Unwind_Resume
// callers: PhysicsReportActive, PhysicsReportActiveExtra, PhysicsHighlightActive, PhysicsUnhighlightActive
// strings: "World id %u: %d active entities enumerated (with possible duplicates). %d of them have so, " (Dirty Animation)"
// globals: g_pPhysicsGameSystem, CEntityHandle::gm_pEntityList
void __fastcall IterateActivePhysicsEntities(EntityCallbackFunction func, bool bExtraDebugLine)
{
  WorldGroupId_t v2; // eax
  IVPhysics2World *ExistingLevelWorld; // r13
  CConcreteEntityList *v4; // rsi
  __int64 v5; // rbx
  int v6; // r12d
  int v7; // eax
  CEntityIdentity *v8; // rdx
  __int64 v9; // rcx
  CEntityIdentity *v10; // rdx
  CBaseEntity *m_pInstance; // r14
  unsigned int v12; // ebx
  int v13; // r14d
  __int64 v14; // r12
  const CGameSceneNode *v15; // rax
  CUtlVectorBase<CUtlStringToken,CUtlMemory<CUtlStringToken,int> >::iterator __for_end; // [rsp+20h] [rbp-D0h]
  WorldGroupId_t id; // [rsp+2Ch] [rbp-C4h]
  _DWORD *p_m_nHashCode; // [rsp+30h] [rbp-C0h]
  CBaseEntity *pEntity; // [rsp+38h] [rbp-B8h]
  CSkeletonInstance *pSkel; // [rsp+40h] [rbp-B0h]
  int nSoftbodies; // [rsp+48h] [rbp-A8h]
  int nBodies; // [rsp+4Ch] [rbp-A4h]
  int v25; // [rsp+5Ch] [rbp-94h]
  CUtlString debugLine; // [rsp+70h] [rbp-80h] BYREF
  CUtlVectorBase<CUtlStringToken,CUtlMemory<CUtlStringToken,int> >::iterator __for_begin; // [rsp+80h] [rbp-70h] BYREF
  CUtlStringToken *v28; // [rsp+88h] [rbp-68h]
  int v29; // [rsp+90h] [rbp-60h]
  int v30; // [rsp+94h] [rbp-5Ch]
  CUtlVector<IPhysicsBody*,CUtlMemory<IPhysicsBody*,int> > bodies; // [rsp+A0h] [rbp-50h] BYREF

  LODWORD(__for_begin) = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  CPhysicsGameSystem::GetLevelWorldList(g_pPhysicsGameSystem, &__for_begin);
  __for_end = &v28[__for_begin];
  if ( v28 == __for_end )
    goto LABEL_31;
  p_m_nHashCode = &v28->m_nHashCode;
  do
  {
    v2.m_nHashCode = *p_m_nHashCode;
    bodies.m_Size = 0;
    bodies.m_Memory.m_pMemory = 0;
    bodies.m_Memory.m_nAllocationCount = 0;
    bodies.m_Memory.m_nGrowSize = 0;
    id.m_nHashCode = v2.m_nHashCode;
    ExistingLevelWorld = CPhysicsGameSystem::GetExistingLevelWorld(g_pPhysicsGameSystem, v2);
    (*(*ExistingLevelWorld + 1584LL))(ExistingLevelWorld, &bodies);
    if ( bodies.m_Size <= 0 )
    {
      nBodies = 0;
    }
    else
    {
      nBodies = 0;
      v5 = 0;
      v6 = 0;
      do
      {
        while ( 1 )
        {
          v7 = (*(*bodies.m_Memory.m_pMemory[v5] + 1328LL))(bodies.m_Memory.m_pMemory[v5]);
          v4 = CEntityHandle::gm_pEntityList;
          if ( (v7 + 2) > 1 )
          {
            v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v7 >> 9) & 0x3F];
            if ( v8 != 0 )
            {
              v9 = v7 & 0x1FF;
              v4 = (8 * v9);
              v10 = &v8[v9];
              if ( v10 != 0 && v7 == v10->m_EHandle.m_Index )
              {
                m_pInstance = v10->m_pInstance;
                if ( v10->m_pInstance != 0 )
                {
                  debugLine.m_pString = 0;
                  if ( bExtraDebugLine )
                    (*(*bodies.m_Memory.m_pMemory[v5] + 1264LL))(bodies.m_Memory.m_pMemory[v5], &debugLine);
                  func(m_pInstance, &debugLine);
                  ++nBodies;
                  if ( debugLine.m_pString != 0 )
                    break;
                }
              }
            }
          }
          ++v6;
          ++v5;
          if ( bodies.m_Size <= v6 )
            goto LABEL_15;
        }
        ++v6;
        ++v5;
        CUtlString::FreeMemoryBlock(&debugLine);
      }
      while ( bodies.m_Size > v6 );
    }
LABEL_15:
    v25 = (*(*ExistingLevelWorld + 744LL))(ExistingLevelWorld, v4);
    if ( v25 <= 0 )
    {
      Msg(
        "World id %u: %d active entities enumerated (with possible duplicates). %d of them have softbodies, %d have rigid"
        " bodies. %d more softbodies were dormant.\n",
        id.m_nHashCode,
        nBodies,
        0,
        nBodies,
        0);
      goto LABEL_29;
    }
    nSoftbodies = 0;
    v12 = 0;
    v13 = 0;
    do
    {
      while ( 1 )
      {
        v14 = (*(*ExistingLevelWorld + 752LL))(ExistingLevelWorld, v12);
        if ( (*(*v14 + 800LL))(v14) == 0 )
          break;
        ++v13;
LABEL_18:
        if ( ++v12 == v25 )
          goto LABEL_28;
      }
      v15 = (*(*v14 + 1256LL))(v14, 0);
      if ( v15 == 0 )
        goto LABEL_18;
      pSkel = v15;
      pEntity = CGameSceneNode::GetOwnerEntity(v15);
      if ( pEntity == 0 )
        goto LABEL_18;
      debugLine.m_pString = 0;
      if ( (pSkel->m_animationParentSpaceValidBoneFlags.m_value & 8) == 0 )
        CUtlString::operator=(&debugLine, " (Dirty Animation)");
      if ( bExtraDebugLine )
        (*(*v14 + 1232LL))(v14, &debugLine);
      func(pEntity, &debugLine);
      ++nSoftbodies;
      if ( debugLine.m_pString == 0 )
        goto LABEL_18;
      ++v12;
      CUtlString::FreeMemoryBlock(&debugLine);
    }
    while ( v12 != v25 );
LABEL_28:
    Msg(
      "World id %u: %d active entities enumerated (with possible duplicates). %d of them have softbodies, %d have rigid b"
      "odies. %d more softbodies were dormant.\n",
      id.m_nHashCode,
      nSoftbodies + nBodies,
      nSoftbodies,
      nBodies,
      v13);
LABEL_29:
    bodies.m_Size = 0;
    if ( (bodies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<IPhysicsBody *,int>::Purge(&bodies.m_Memory);
      if ( (bodies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<IPhysicsBody *,int>::Purge(&bodies.m_Memory);
    }
    ++p_m_nHashCode;
  }
  while ( __for_end != p_m_nHashCode );
LABEL_31:
  CUtlVectorBase<CUtlStringToken,CUtlMemory<CUtlStringToken,int>>::~CUtlVectorBase(&__for_begin);
}


// CallbackHighlight  (line 3390, @0x0000000001f2c010, libserver.so)
// calls: CBaseEntity::SetDebugBits
void __fastcall CallbackHighlight(CBaseEntity *pEntity, const CUtlString *const debugLine)
{
  CBaseEntity::SetDebugBits(pEntity, 0x28u);
}


// CallbackUnhighlight  (line 3400, @0x0000000001f2c020, libserver.so)
// calls: CBaseEntity::ClearDebugBits
void __fastcall CallbackUnhighlight(CBaseEntity *pEntity, const CUtlString *const debugLine)
{
  CBaseEntity::ClearDebugBits(pEntity, 0x28u);
}


// CallbackReport  (line 3410, @0x0000000001f2acc0, libserver.so)  // inlines: CUtlSymbolLarge, GetClassNameAsCStr, GetClassname, GetEntityName, String, ToCStr, V_strlen
// calls: CBaseEntity::GetModelName, LoggingSystem_IsChannelEnabled, strlen, CUtlString::Get, LoggingSystem_Log
// strings: "%s - %s %s\n"
void __fastcall CallbackReport(CBaseEntity *pEntity, const CUtlString *const debugLine)
{
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // r13
  const char *v6; // rax
  CEntityIdentity *v7; // rdx
  const char *v8; // rcx
  const char *v9; // [rsp+0h] [rbp-30h] BYREF

  m_pEntity = pEntity->m_pEntity;
  if ( m_pEntity->m_name.u.m_Id == 0 || (m_pAsString = m_pEntity->m_name.u.m_pAsString, strlen(m_pAsString) == 0) )
  {
    CBaseEntity::GetModelName(&v9, pEntity);
    m_pAsString = "";
    if ( v9 != 0 )
      m_pAsString = v9;
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_PHYSICS, 1) != 0 )
  {
    v6 = CUtlString::Get(debugLine);
    v7 = pEntity->m_pEntity;
    v8 = "";
    if ( v7->m_designerName.u.m_Id != 0 )
      v8 = v7->m_designerName.u.m_pAsString;
    LoggingSystem_Log(LOG_PHYSICS, 1, "%s - %s %s\n", v8, m_pAsString, v6);
  }
}


// PhysicsHighlightActive  (line 3421, @0x0000000001f550c0, libserver.so)
// calls: IterateActivePhysicsEntities
// globals: CallbackHighlight(CBaseEntity *,CUtlString const&)
void __cdecl PhysicsHighlightActive()
{
  IterateActivePhysicsEntities(CallbackHighlight, 0);
}


// PhysicsUnhighlightActive  (line 3427, @0x0000000001f550e0, libserver.so)
// calls: IterateActivePhysicsEntities
// globals: CallbackUnhighlight(CBaseEntity *,CUtlString const&)
void __cdecl PhysicsUnhighlightActive()
{
  IterateActivePhysicsEntities(CallbackUnhighlight, 0);
}


// PhysicsReportActive  (line 3433, @0x0000000001f55080, libserver.so)
// calls: IterateActivePhysicsEntities
// globals: CallbackReport(CBaseEntity *,CUtlString const&)
void __cdecl PhysicsReportActive()
{
  IterateActivePhysicsEntities(CallbackReport, 0);
}


// PhysicsReportActiveExtra  (line 3439, @0x0000000001f550a0, libserver.so)
// calls: IterateActivePhysicsEntities
// globals: CallbackReport(CBaseEntity *,CUtlString const&)
void __cdecl PhysicsReportActiveExtra()
{
  IterateActivePhysicsEntities(CallbackReport, 1);
}


// physics_highlight_active  (line 3445, @0x0000000001f56ec0, libserver.so)  // inlines: AddToTail, Arg, CopyConstruct<void (*)()>, Element, GrowMemory, operator[]
// calls: V_stricmp_fast, CUtlMemory<void (*)(), int>::Grow
// globals: PhysicsHighlightActive(void), g_DiagnosticsCallbacks, PhysicsUnhighlightActive(void)
void __fastcall physics_highlight_active(const CCommandContext *const ctx, const CCommand *const args)
{
  char v2; // r13
  int v4; // ebx
  void (__cdecl *v5)(); // r12
  __int64 m_Size; // rbx
  int v7; // eax
  void (**v8)(void); // rax

  v2 = 0;
  v4 = 1;
  if ( args->m_nArgc <= 1 )
    goto LABEL_6;
  do
  {
    if ( V_stricmp_fast(args->m_ppArgv[v4], "0") == 0 )
      v2 = 1;
    ++v4;
  }
  while ( args->m_nArgc > v4 );
  if ( v2 != 0 )
    v5 = PhysicsUnhighlightActive;
  else
LABEL_6:
    v5 = PhysicsHighlightActive;
  m_Size = g_DiagnosticsCallbacks.m_Size;
  v7 = g_DiagnosticsCallbacks.m_Size;
  if ( g_DiagnosticsCallbacks.m_Size == g_DiagnosticsCallbacks.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<void (*)(void),int>::Grow(&g_DiagnosticsCallbacks.m_Memory, 1);
    v7 = g_DiagnosticsCallbacks.m_Size;
  }
  g_DiagnosticsCallbacks.m_Size = v7 + 1;
  v8 = &g_DiagnosticsCallbacks.m_Memory.m_pMemory[m_Size];
  if ( v8 != 0 )
    *v8 = v5;
}


// physics_report_active  (line 3462, @0x0000000001f56f80, libserver.so)  // inlines: AddToTail, Arg, CopyConstruct<void (*)()>, Element, GrowMemory, operator[]
// calls: V_stricmp_fast, CUtlMemory<void (*)(), int>::Grow
// globals: PhysicsReportActive(void), g_DiagnosticsCallbacks, PhysicsReportActiveExtra(void)
void __fastcall physics_report_active(const CCommandContext *const ctx, const CCommand *const args)
{
  char v2; // r13
  int v4; // ebx
  void (__cdecl *v5)(); // r12
  __int64 m_Size; // rbx
  int v7; // eax
  void (**v8)(void); // rax

  v2 = 0;
  v4 = 1;
  if ( args->m_nArgc <= 1 )
    goto LABEL_6;
  do
  {
    if ( V_stricmp_fast(args->m_ppArgv[v4], &stru_32DB07A._vptr_IPhysicsWorldEventListener + 1) == 0 )
      v2 = 1;
    ++v4;
  }
  while ( args->m_nArgc > v4 );
  if ( v2 != 0 )
    v5 = PhysicsReportActiveExtra;
  else
LABEL_6:
    v5 = PhysicsReportActive;
  m_Size = g_DiagnosticsCallbacks.m_Size;
  v7 = g_DiagnosticsCallbacks.m_Size;
  if ( g_DiagnosticsCallbacks.m_Size == g_DiagnosticsCallbacks.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<void (*)(void),int>::Grow(&g_DiagnosticsCallbacks.m_Memory, 1);
    v7 = g_DiagnosticsCallbacks.m_Size;
  }
  g_DiagnosticsCallbacks.m_Size = v7 + 1;
  v8 = &g_DiagnosticsCallbacks.m_Memory.m_pMemory[m_Size];
  if ( v8 != 0 )
    *v8 = v5;
}


