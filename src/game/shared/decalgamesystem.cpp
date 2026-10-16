// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/decalgamesystem.cpp:63
class ClearWorldDecalsEvent_t : public CNetMessagePB<202, CMsgClearWorldDecalsEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true> {
public:

	ClearWorldDecalsEvent_t(ClearWorldDecalsEvent_t &);
	ClearWorldDecalsEvent_t(const ClearWorldDecalsEvent_t &);
	ClearWorldDecalsEvent_t();
	virtual ~ClearWorldDecalsEvent_t();

	// sizeof = 32
};

// src/game/shared/decalgamesystem.cpp:64
class ClearEntityDecalsEvent_t : public CNetMessagePB<203, CMsgClearEntityDecalsEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true> {
public:

	ClearEntityDecalsEvent_t(ClearEntityDecalsEvent_t &);
	ClearEntityDecalsEvent_t(const ClearEntityDecalsEvent_t &);
	ClearEntityDecalsEvent_t();
	virtual ~ClearEntityDecalsEvent_t();

	// sizeof = 32
};

// src/game/shared/decalgamesystem.cpp:65
class ClearDecalsForSkeletonInstanceEvent_t : public CNetMessagePB<204, CMsgClearDecalsForSkeletonInstanceEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true> {
public:

	ClearDecalsForSkeletonInstanceEvent_t(ClearDecalsForSkeletonInstanceEvent_t &);
	ClearDecalsForSkeletonInstanceEvent_t(const ClearDecalsForSkeletonInstanceEvent_t &);
	ClearDecalsForSkeletonInstanceEvent_t();
	virtual ~ClearDecalsForSkeletonInstanceEvent_t();

	// sizeof = 40
};

// src/game/shared/decalgamesystem.cpp:1797
class CDecalSaveRestoreBlockHandler : public CDefSaveRestoreBlockHandler {
public:

private:

	bool m_bDoLoad;  // +0x8
	CDecalSaveRestoreBlockHandler(CDecalSaveRestoreBlockHandler &);
	CDecalSaveRestoreBlockHandler(const CDecalSaveRestoreBlockHandler &);
	CDecalSaveRestoreBlockHandler();
	virtual const char * GetBlockName();
	virtual void WriteSaveHeaders(ISave *);
	virtual void ReadRestoreHeaders(IRestore *);
	virtual void Save(ISave *);
	virtual void Restore(IRestore *, SpawnGroupHandle_t, bool);

	// vtable[0] GetBlockName
	// vtable[3] WriteSaveHeaders
	// vtable[6] ReadRestoreHeaders
	// vtable[2] Save
	// vtable[7] Restore
	// sizeof = 16
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// InitManifestDesc<DecalGameSystemManifest::CTemplateArg>  (line 53, @0x0000000001f323a0, libserver.so)
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: __static_initialization_and_destruction_0
// globals: `guard variable for'InitManifestDesc<DecalGameSystemManifest::CTemplateArg>(DecalGameSystemManifest::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<DecalGameSystemManifest::CTemplateArg>(DecalGameSystemManifest::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<DecalGameSystemManifest::CTemplateArg>(DecalGameSystemManifest::CTemplateArg &)::s_Manifest
ResourceManifestDesc_t *__fastcall InitManifestDesc<DecalGameSystemManifest::CTemplateArg>(
        DecalGameSystemManifest::CTemplateArg *const def)
{
  if ( `guard variable for'ResourceManifestDesc_t * InitManifestDesc<DecalGameSystemManifest::CTemplateArg>(DecalGameSystemManifest::CTemplateArg &)::s_pManifestEntries == 0
    && __cxa_guard_acquire(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<DecalGameSystemManifest::CTemplateArg>(DecalGameSystemManifest::CTemplateArg &)::s_pManifestEntries) != 0 )
  {
    __cxa_guard_release(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<DecalGameSystemManifest::CTemplateArg>(DecalGameSystemManifest::CTemplateArg &)::s_pManifestEntries);
  }
  InitManifestDesc<DecalGameSystemManifest::CTemplateArg>(DecalGameSystemManifest::CTemplateArg &)::s_Manifest.m_pEntryGroups = &InitManifestDesc<DecalGameSystemManifest::CTemplateArg>(DecalGameSystemManifest::CTemplateArg &)::s_pManifestEntries;
  return &InitManifestDesc<DecalGameSystemManifest::CTemplateArg>(DecalGameSystemManifest::CTemplateArg &)::s_Manifest;
}


// ClearWorldDecalsEvent_t::~ClearWorldDecalsEvent_t  (line 63, @0x0000000001f74530, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgClearWorldDecalsEvent::~CMsgClearWorldDecalsEvent
void __fastcall ClearWorldDecalsEvent_t::~ClearWorldDecalsEvent_t(ClearWorldDecalsEvent_t *const this)
{
  *this = &off_3FCBDB0;
  CMsgClearWorldDecalsEvent::~CMsgClearWorldDecalsEvent(this);
}


// ClearWorldDecalsEvent_t::~ClearWorldDecalsEvent_t  (line 63, @0x0000000001f74550, libserver.so)  // inlines: ~CNetMessagePB, ~ClearWorldDecalsEvent_t
// calls: CMsgClearWorldDecalsEvent::~CMsgClearWorldDecalsEvent, operator delete
void __fastcall ClearWorldDecalsEvent_t::~ClearWorldDecalsEvent_t(ClearWorldDecalsEvent_t *const this)
{
  *this = &off_3FCBDB0;
  CMsgClearWorldDecalsEvent::~CMsgClearWorldDecalsEvent(this);
  operator delete(this);
}


// ClearEntityDecalsEvent_t::~ClearEntityDecalsEvent_t  (line 64, @0x0000000001f745d0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgClearEntityDecalsEvent::~CMsgClearEntityDecalsEvent
void __fastcall ClearEntityDecalsEvent_t::~ClearEntityDecalsEvent_t(ClearEntityDecalsEvent_t *const this)
{
  *this = &off_3FCBFB0;
  CMsgClearEntityDecalsEvent::~CMsgClearEntityDecalsEvent(this);
}


// ClearEntityDecalsEvent_t::~ClearEntityDecalsEvent_t  (line 64, @0x0000000001f745f0, libserver.so)  // inlines: ~CNetMessagePB, ~ClearEntityDecalsEvent_t
// calls: CMsgClearEntityDecalsEvent::~CMsgClearEntityDecalsEvent, operator delete
void __fastcall ClearEntityDecalsEvent_t::~ClearEntityDecalsEvent_t(ClearEntityDecalsEvent_t *const this)
{
  *this = &off_3FCBFB0;
  CMsgClearEntityDecalsEvent::~CMsgClearEntityDecalsEvent(this);
  operator delete(this);
}


// ClearDecalsForSkeletonInstanceEvent_t::~ClearDecalsForSkeletonInstanceEvent_t  (line 65, @0x0000000001f74490, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgClearDecalsForSkeletonInstanceEvent::~CMsgClearDecalsForSkeletonInstanceEvent
void __fastcall ClearDecalsForSkeletonInstanceEvent_t::~ClearDecalsForSkeletonInstanceEvent_t(
        ClearDecalsForSkeletonInstanceEvent_t *const this)
{
  *this = &off_3FCC1B0;
  CMsgClearDecalsForSkeletonInstanceEvent::~CMsgClearDecalsForSkeletonInstanceEvent(this);
}


// ClearDecalsForSkeletonInstanceEvent_t::~ClearDecalsForSkeletonInstanceEvent_t  (line 65, @0x0000000001f744b0, libserver.so)  // inlines: ~CNetMessagePB, ~ClearDecalsForSkeletonInstanceEvent_t
// calls: CMsgClearDecalsForSkeletonInstanceEvent::~CMsgClearDecalsForSkeletonInstanceEvent, operator delete
void __fastcall ClearDecalsForSkeletonInstanceEvent_t::~ClearDecalsForSkeletonInstanceEvent_t(
        ClearDecalsForSkeletonInstanceEvent_t *const this)
{
  *this = &off_3FCC1B0;
  CMsgClearDecalsForSkeletonInstanceEvent::~CMsgClearDecalsForSkeletonInstanceEvent(this);
  operator delete(this);
}


// SkeletonInstanceDecalList_CompareFunc  (line 83, @0x0000000001f29e90, libserver.so)
bool __fastcall SkeletonInstanceDecalList_CompareFunc(
        const SkeletonInstanceDecalList_t *const a,
        const SkeletonInstanceDecalList_t *const b)
{
  bool result; // al

  result = 0;
  if ( a->m_nEntityHandle.m_Index == b->m_nEntityHandle.m_Index )
    return a->m_nSkeletonInstanceHash == b->m_nSkeletonInstanceHash;
  return result;
}


// SkeletonInstanceDecalList_KeyFunc  (line 88, @0x0000000001f2fcf0, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsValid, LookupEntity, operator bool
// globals: CEntityHandle::gm_pEntityList
unsigned int __fastcall SkeletonInstanceDecalList_KeyFunc(const SkeletonInstanceDecalList_t *const a)
{
  unsigned int result; // eax
  CEntityIdentity *v2; // rcx
  CEntityIdentity *v3; // rcx

  result = 0;
  if ( a->m_nEntityHandle.m_Index + 2 > 1 )
  {
    v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(a->m_nEntityHandle.m_Index) >> 9) & 0x3F];
    if ( v2 != 0 )
    {
      v3 = &v2[a->m_nEntityHandle.m_Index & 0x1FF];
      if ( v3 != 0 )
        return a->m_nEntityHandle.m_Index == v3->m_EHandle.m_Index;
    }
  }
  return result;
}


// NameToMaterialParam_CompareFunc  (line 93, @0x0000000001f29eb0, libserver.so)
bool __fastcall NameToMaterialParam_CompareFunc(
        const NameToDecalMaterialParamsMapping_t *const a,
        const NameToDecalMaterialParamsMapping_t *const b)
{
  return a->m_nNameHash.m_nHashCode == b->m_nNameHash.m_nHashCode;
}


// NameToMaterialParam_KeyFunc  (line 98, @0x0000000001f29ec0, libserver.so)
unsigned int __fastcall NameToMaterialParam_KeyFunc(const NameToDecalMaterialParamsMapping_t *const a)
{
  return a->m_nNameHash.m_nHashCode;
}


// CDecalMaterialParams::CDecalMaterialParams  (line 104, @0x0000000001f323f0, libserver.so)
void __fastcall CDecalMaterialParams::CDecalMaterialParams(CDecalMaterialParams *const this)
{
  this->m_flMappingDepth = 16.0;
  this->m_flMappingWidth = 64.0;
  this->m_flMappingHeight = 64.0;
  this->m_flDecalScale = 1.0;
  this->m_flDecalScaleVariation = 0.25;
  this->m_flDecalStartFadeTime = 10.0;
  this->m_flDecalFadeDuration = 3.0;
  this->m_flSpecExp = 50.0;
}


// CDecalMaterialParams::ComputeDecalSize  (line 118, @0x0000000001f32440, libserver.so)
// calls: RandomFloat
// callers: CDecalGameSystem::AddDecalAndAssignToSlot
void __fastcall CDecalMaterialParams::ComputeDecalSize(
        CDecalMaterialParams *const this,
        float *const flWidth,
        float *const flHeight,
        float *const flDepth)
{
  float m_flDecalScaleVariation; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm0_4

  m_flDecalScaleVariation = this->m_flDecalScaleVariation;
  if ( m_flDecalScaleVariation > 0.99000001 )
  {
    v9 = -0.99000001;
    m_flDecalScaleVariation = 0.99000001;
  }
  else if ( m_flDecalScaleVariation < 0.0 )
  {
    v9 = -0.0;
    m_flDecalScaleVariation = 0.0;
  }
  else
  {
    v9 = -m_flDecalScaleVariation;
  }
  v10 = (RandomFloat(v9, m_flDecalScaleVariation) + 1.0) * this->m_flDecalScale;
  *flWidth = this->m_flMappingWidth * v10;
  *flHeight = v10 * this->m_flMappingHeight;
  *flDepth = this->m_flMappingDepth;
}


// CDecalGameSystem::CDecalGameSystem  (line 131, @0x0000000001f6f800, libserver.so)  // inlines: CCommandMemberInitializer_OnClearAllEntityDecals, CCommandMemberInitializer_OnClearEntityDecals, CCommandMemberInitializer_OnClearWorldDecals, CCommandMemberInitializer_OnPrintDecalInfo, CCommandMemberInitializer_OnShootDecal, CCommandMemberInitializer_OnToggleVisualizer, CConCommandMemberAccessor, CCopyableLock, CThreadFastMutex, CUtlHash, CUtlIntrusiveDListWithTailPtr, CUtlMemory, CUtlSlot, CUtlVector, CUtlVectorBase, CUtlVectorMT, Purge, RemoveAll, SetGrowSize, SetOwner, operator[], ~CAutoGameSystem, ~CCommandMemberInitializer_OnClearAllEntityDecals, ~CCommandMemberInitializer_OnClearEntityDecals, ~CCommandMemberInitializer_OnClearWorldDecals, ~CCommandMemberInitializer_OnPrintDecalInfo, ~CCommandMemberInitializer_OnShootDecal, ~CCommandMemberInitializer_OnToggleVisualizer, ~CUtlHash, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: ConCommand::ConCommand, CUtlVectorBase<CUtlVector<NameToDecalMaterialParamsMapping_t, CUtlMemory<NameToDecalMaterialParamsMapping_t, int> >, CUtlMemory<CUtlVector<NameToDecalMaterialParamsMapping_t, CUtlMemory<NameToDecalMaterialParamsMapping_t, int> >, int> >::SetCount, CUtlVectorBase<NameToDecalMaterialParamsMapping_t, CUtlMemory<NameToDecalMaterialParamsMapping_t, int> >::SetCount, CUtlHash<SkeletonInstanceDecalList_t, bool (*)(const SkeletonInstanceDecalList_t&, const SkeletonInstanceDecalList_t&), unsigned int (*)(const SkeletonInstanceDecalList_t&)>::CUtlHash, CUtlSlot::~CUtlSlot, IGameSystem::~IGameSystem, _Unwind_Resume, CUtlHash<SkeletonInstanceDecalList_t, bool (*)(const SkeletonInstanceDecalList_t&, const SkeletonInstanceDecalList_t&), unsigned int (*)(const SkeletonInstanceDecalList_t&)>::Purge, CUtlVectorBase<CUtlVector<SkeletonInstanceDecalList_t, CUtlMemory<SkeletonInstanceDecalList_t, int> >, CUtlMemory<CUtlVector<SkeletonInstanceDecalList_t, CUtlMemory<SkeletonInstanceDecalList_t, int> >, int> >::~CUtlVectorBase, CUtlMemory<NameToDecalMaterialParamsMapping_t, int>::Purge, CUtlVectorBase<CUtlVector<NameToDecalMaterialParamsMapping_t, CUtlMemory<NameToDecalMaterialParamsMapping_t, int> >, CUtlMemory<CUtlVector<NameToDecalMaterialParamsMapping_t, CUtlMemory<NameToDecalMaterialParamsMapping_t, int> >, int> >::~CUtlVectorBase, CConCommandMemberAccessor<CDecalGameSystem>::~CConCommandMemberAccessor (13 total)
// callers: CGameSystemReallocatingFactory<CDecalGameSystem, CDecalGameSystem>::CreateGameSystem
// strings: "Toggles server decal debug visualization", "sv_decal_debug", "Shoots a server-side decal", "sv_decal_shoot", "Clears decals from the targetted entity", "sv_decal_clear_from_entity" (12 total)
// globals: CDecalGameSystem::OnToggleVisualizer(CCommandContext const&,CCommand const&), CDecalGameSystem::OnShootDecal(CCommandContext const&,CCommand const&), CDecalGameSystem::OnClearEntityDecals(CCommandContext const&,CCommand const&), CDecalGameSystem::OnClearWorldDecals(CCommandContext const&,CCommand const&), CDecalGameSystem::OnClearAllEntityDecals(CCommandContext const&,CCommand const&), CDecalGameSystem::OnPrintDecalInfo(CCommandContext const&,CCommand const&), NameToMaterialParam_CompareFunc(NameToDecalMaterialParamsMapping_t const&,NameToDecalMaterialParamsMapping_t const&), NameToMaterialParam_KeyFunc(NameToDecalMaterialParamsMapping_t const&) (10 total)
void __fastcall CDecalGameSystem::CDecalGameSystem(CDecalGameSystem *const this)
{
  __int64 i; // r12
  __int64 v3; // rax
  CDecalGameSystem *m_VBSlotUsed; // rax
  CUtlVectorBase<CDecalInfo*,CUtlMemory<CDecalInfo*,int> >::CAllocator *p_m_Memory; // rcx
  CDecalGameSystem *v6; // rdx
  signed __int64 v7; // rdx

  this->_vptr_IGameSystem = off_3FCC330;  // vptr: CDecalGameSystem
  this->m_ConnectedSignallers.m_Size = 0;
  this->m_ConnectedSignallers.m_Memory.m_pMemory = 0;
  this->m_ConnectedSignallers.m_Memory.m_nAllocationCount = 0;
  this->m_ConnectedSignallers.m_Memory.m_nGrowSize = 0;
  this->m_ConnectedSignallers.m_ownerID = 0;
  this->m_ConnectedSignallers.m_depth = 0;
  this->m_ConnectedSignallers.Mutex_t.m_ownerID = 0;
  this->m_ConnectedSignallers.Mutex_t.m_depth = 0;
  ConCommand::ConCommand(
    &this->m_OnToggleVisualizer_register.m_ConCommandAccessor,
    "sv_decal_debug",
    &this->m_OnToggleVisualizer_register.m_ConCommandAccessor.ICommandCallback,
    "Toggles server decal debug visualization",
    0,
    0);
  this->m_OnToggleVisualizer_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCBC50;
  this->m_OnToggleVisualizer_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCBCF8;
  this->m_OnToggleVisualizer_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCBD10;
  this->m_OnToggleVisualizer_register.m_ConCommandAccessor.m_Func.__pfn = CDecalGameSystem::OnToggleVisualizer;
  this->m_OnToggleVisualizer_register.m_ConCommandAccessor.m_Func.__delta = 0;
  this->m_OnToggleVisualizer_register.m_ConCommandAccessor.m_pOwner = this;
  this->m_OnToggleVisualizer_register.m_ConCommandAccessor.m_CompletionFunc.__pfn = 0;
  this->m_OnToggleVisualizer_register.m_ConCommandAccessor.m_CompletionFunc.__delta = 0;
  ConCommand::ConCommand(
    &this->m_OnShootDecal_register.m_ConCommandAccessor,
    "sv_decal_shoot",
    &this->m_OnShootDecal_register.m_ConCommandAccessor.ICommandCallback,
    "Shoots a server-side decal",
    0,
    0);
  this->m_OnShootDecal_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCBC50;
  this->m_OnShootDecal_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCBCF8;
  this->m_OnShootDecal_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCBD10;
  this->m_OnShootDecal_register.m_ConCommandAccessor.m_Func.__pfn = CDecalGameSystem::OnShootDecal;
  this->m_OnShootDecal_register.m_ConCommandAccessor.m_Func.__delta = 0;
  this->m_OnShootDecal_register.m_ConCommandAccessor.m_pOwner = this;
  this->m_OnShootDecal_register.m_ConCommandAccessor.m_CompletionFunc.__pfn = 0;
  this->m_OnShootDecal_register.m_ConCommandAccessor.m_CompletionFunc.__delta = 0;
  ConCommand::ConCommand(
    &this->m_OnClearEntityDecals_register.m_ConCommandAccessor,
    "sv_decal_clear_from_entity",
    &this->m_OnClearEntityDecals_register.m_ConCommandAccessor.ICommandCallback,
    "Clears decals from the targetted entity",
    0,
    0);
  this->m_OnClearEntityDecals_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCBC50;
  this->m_OnClearEntityDecals_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCBCF8;
  this->m_OnClearEntityDecals_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCBD10;
  this->m_OnClearEntityDecals_register.m_ConCommandAccessor.m_Func.__pfn = CDecalGameSystem::OnClearEntityDecals;
  this->m_OnClearEntityDecals_register.m_ConCommandAccessor.m_Func.__delta = 0;
  this->m_OnClearEntityDecals_register.m_ConCommandAccessor.m_pOwner = this;
  this->m_OnClearEntityDecals_register.m_ConCommandAccessor.m_CompletionFunc.__pfn = 0;
  this->m_OnClearEntityDecals_register.m_ConCommandAccessor.m_CompletionFunc.__delta = 0;
  ConCommand::ConCommand(
    &this->m_OnClearWorldDecals_register.m_ConCommandAccessor,
    "sv_decal_clear_world",
    &this->m_OnClearWorldDecals_register.m_ConCommandAccessor.ICommandCallback,
    "Clears world decals",
    0,
    0);
  this->m_OnClearWorldDecals_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCBC50;
  this->m_OnClearWorldDecals_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCBCF8;
  this->m_OnClearWorldDecals_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCBD10;
  this->m_OnClearWorldDecals_register.m_ConCommandAccessor.m_Func.__delta = 0;
  this->m_OnClearWorldDecals_register.m_ConCommandAccessor.m_Func.__pfn = CDecalGameSystem::OnClearWorldDecals;
  this->m_OnClearWorldDecals_register.m_ConCommandAccessor.m_pOwner = this;
  this->m_OnClearWorldDecals_register.m_ConCommandAccessor.m_CompletionFunc.__pfn = 0;
  this->m_OnClearWorldDecals_register.m_ConCommandAccessor.m_CompletionFunc.__delta = 0;
  ConCommand::ConCommand(
    &this->m_OnClearAllEntityDecals_register.m_ConCommandAccessor,
    "sv_decal_clear_all_entities",
    &this->m_OnClearAllEntityDecals_register.m_ConCommandAccessor.ICommandCallback,
    "Clears decals from all entities",
    0,
    0);
  this->m_OnClearAllEntityDecals_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCBC50;
  this->m_OnClearAllEntityDecals_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCBCF8;
  this->m_OnClearAllEntityDecals_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCBD10;
  this->m_OnClearAllEntityDecals_register.m_ConCommandAccessor.m_Func.__delta = 0;
  this->m_OnClearAllEntityDecals_register.m_ConCommandAccessor.m_Func.__pfn = CDecalGameSystem::OnClearAllEntityDecals;
  this->m_OnClearAllEntityDecals_register.m_ConCommandAccessor.m_pOwner = this;
  this->m_OnClearAllEntityDecals_register.m_ConCommandAccessor.m_CompletionFunc.__pfn = 0;
  this->m_OnClearAllEntityDecals_register.m_ConCommandAccessor.m_CompletionFunc.__delta = 0;
  ConCommand::ConCommand(
    &this->m_OnPrintDecalInfo_register.m_ConCommandAccessor,
    "sv_printdecalinfo",
    &this->m_OnPrintDecalInfo_register.m_ConCommandAccessor.ICommandCallback,
    "(server) Prints info about decals currently in the scene",
    0,
    0);
  this->m_OnPrintDecalInfo_register.m_ConCommandAccessor.m_Func.__delta = 0;
  this->m_OnPrintDecalInfo_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCBC50;
  this->m_OnPrintDecalInfo_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCBCF8;
  this->m_OnPrintDecalInfo_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCBD10;
  this->m_OnPrintDecalInfo_register.m_ConCommandAccessor.m_Func.__pfn = CDecalGameSystem::OnPrintDecalInfo;
  this->m_nameToParamMapping.m_CompareFunc = NameToMaterialParam_CompareFunc;
  this->m_OnPrintDecalInfo_register.m_ConCommandAccessor.m_CompletionFunc.__pfn = 0;
  this->m_OnPrintDecalInfo_register.m_ConCommandAccessor.m_CompletionFunc.__delta = 0;
  this->m_OnPrintDecalInfo_register.m_ConCommandAccessor.m_pOwner = this;
  this->m_decalMaterialParams.m_Size = 0;
  this->m_decalMaterialParams.m_Memory.m_pMemory = 0;
  this->m_decalMaterialParams.m_Memory.m_nAllocationCount = 0;
  this->m_decalMaterialParams.m_Memory.m_nGrowSize = 0;
  this->m_nameToParamMapping.m_Buckets.m_Size = 0;
  this->m_nameToParamMapping.m_Buckets.m_Memory.m_pMemory = 0;
  this->m_nameToParamMapping.m_Buckets.m_Memory.m_nAllocationCount = 0;
  this->m_nameToParamMapping.m_Buckets.m_Memory.m_nGrowSize = 0;
  this->m_nameToParamMapping.m_KeyFunc = NameToMaterialParam_KeyFunc;
  CUtlVectorBase<CUtlVector<NameToDecalMaterialParamsMapping_t,CUtlMemory<NameToDecalMaterialParamsMapping_t,int>>,CUtlMemory<CUtlVector<NameToDecalMaterialParamsMapping_t,CUtlMemory<NameToDecalMaterialParamsMapping_t,int>>,int>>::SetCount(
    &this->m_nameToParamMapping.m_Buckets,
    64);
  for ( i = 0; i != 64; ++i )
  {
    CUtlVectorBase<NameToDecalMaterialParamsMapping_t,CUtlMemory<NameToDecalMaterialParamsMapping_t,int>>::SetCount(
      &this->m_nameToParamMapping.m_Buckets.m_Memory.m_pMemory[i],
      0);
    v3 = i * 24;
    *(&this->m_nameToParamMapping.m_Buckets.m_Memory.m_pMemory->m_Memory.m_nGrowSize + v3) &= 0xC0000000;
  }
  this->m_nameToParamMapping.m_bPowerOfTwo = 1;
  this->m_nameToParamMapping.m_ModMask = 63;
  this->m_worldDecals.m_pHead = 0;
  this->m_worldDecals.m_pTailPtr = 0;
  CUtlHash<SkeletonInstanceDecalList_t,bool (*)(SkeletonInstanceDecalList_t const&,SkeletonInstanceDecalList_t const&),unsigned int (*)(SkeletonInstanceDecalList_t const&)>::CUtlHash(
    &this->m_rigidEntityDecals,
    1024,
    0,
    0,
    SkeletonInstanceDecalList_CompareFunc,
    SkeletonInstanceDecalList_KeyFunc);
  CUtlHash<SkeletonInstanceDecalList_t,bool (*)(SkeletonInstanceDecalList_t const&,SkeletonInstanceDecalList_t const&),unsigned int (*)(SkeletonInstanceDecalList_t const&)>::CUtlHash(
    &this->m_skinnedEntityDecals,
    128,
    0,
    0,
    SkeletonInstanceDecalList_CompareFunc,
    SkeletonInstanceDecalList_KeyFunc);
  m_VBSlotUsed = this->m_VBSlotUsed;
  p_m_Memory = &this->m_VBSlotUsed[0].m_Memory;
  do
  {
    LODWORD(m_VBSlotUsed->_vptr_IGameSystem) = 0;
    v6 = m_VBSlotUsed;
    m_VBSlotUsed = (m_VBSlotUsed + 24);
    v7 = v6 - this->m_VBSlotUsed;
    *(&p_m_Memory->m_pMemory + v7) = 0;
    *(&p_m_Memory->m_nAllocationCount + v7) = 0;
    *(&p_m_Memory->m_nGrowSize + v7) = 0;
  }
  while ( m_VBSlotUsed != this->m_nNextSlotToSearch );
  this->m_S1ToS2DecalMapping.m_Size = 0;
  this->m_S1ToS2DecalMapping.m_Memory.m_pMemory = 0;
  this->m_S1ToS2DecalMapping.m_Memory.m_nAllocationCount = 0;
  this->m_S1ToS2DecalMapping.m_Memory.m_nGrowSize = 0;
  this->m_bS1ToS2MappingsLoaded = 0;
  this->m_pResourceManifestPrerequisite = 0;
}


// CDecalGameSystem::~CDecalGameSystem  (line 149, @0x0000000001f319c0, libserver.so)  // inlines: Destruct<CUtlVector<NameToDecalMaterialParamsMapping_t, CUtlMemory<NameToDecalMaterialParamsMapping_t, int> > >, Destruct<CUtlVector<SkeletonInstanceDecalList_t, CUtlMemory<SkeletonInstanceDecalList_t, int> > >, Element, Purge, RemoveAll, operator[], ~CAutoGameSystem, ~CCommandMemberInitializer_OnClearAllEntityDecals, ~CCommandMemberInitializer_OnClearEntityDecals, ~CCommandMemberInitializer_OnClearWorldDecals, ~CCommandMemberInitializer_OnPrintDecalInfo, ~CCommandMemberInitializer_OnShootDecal, ~CCommandMemberInitializer_OnToggleVisualizer, ~CConCommandMemberAccessor, ~CUtlHash, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CDecalInfo*, int>::Purge, CUtlMemory<SkeletonInstanceDecalList_t, int>::Purge, CUtlMemory<NameToDecalMaterialParamsMapping_t, int>::Purge, ConCommandBase::Shutdown, ConCommand::~ConCommand, CUtlSlot::~CUtlSlot, IGameSystem::~IGameSystem, CUtlMemory<CUtlVector<SkeletonInstanceDecalList_t, CUtlMemory<SkeletonInstanceDecalList_t, int> >, int>::Purge, CUtlMemory<CDecalMaterialParams, int>::Purge, CUtlMemory<CUtlVector<NameToDecalMaterialParamsMapping_t, CUtlMemory<NameToDecalMaterialParamsMapping_t, int> >, int>::Purge, CUtlMemory<int, int>::Purge
// callers: CDecalGameSystem::~CDecalGameSystem
void __fastcall CDecalGameSystem::~CDecalGameSystem(CDecalGameSystem *const this)
{
  bool v2; // zf
  CUtlVector<CDecalInfo*,CUtlMemory<CDecalInfo*,int> > *m_VBSlotUsed; // r13
  int *m_nNextSlotToSearch; // r12
  CUtlMemory<CDecalInfo*,int> *v5; // rdi
  int m_Size; // r13d
  unsigned __int64 v7; // r12
  __int64 v8; // r13
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *v9; // rdi
  __int64 i; // r14
  char *v11; // r12
  int v12; // r13d
  unsigned __int64 v13; // r12
  __int64 v14; // r13
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *v15; // rdi
  __int64 j; // r14
  char *v17; // r12
  int v18; // r13d
  unsigned __int64 v19; // r12
  __int64 v20; // r13
  CUtlVector<NameToDecalMaterialParamsMapping_t,CUtlMemory<NameToDecalMaterialParamsMapping_t,int> > *v21; // rdi
  __int64 k; // r14
  char *v23; // r12
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // r12

  this->_vptr_IGameSystem = off_3FCC330;  // vptr: CDecalGameSystem
  v2 = (this->m_S1ToS2DecalMapping.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_S1ToS2DecalMapping.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_S1ToS2DecalMapping.m_Memory;
    CUtlMemory<int,int>::Purge(&this->m_S1ToS2DecalMapping.m_Memory);
    if ( (this->m_S1ToS2DecalMapping.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(p_m_Memory);
  }
  m_VBSlotUsed = this->m_VBSlotUsed;
  m_nNextSlotToSearch = this->m_nNextSlotToSearch;
  do
  {
    while ( 1 )
    {
      v2 = (*(m_nNextSlotToSearch - 1) & 0xC0000000) == 0;
      *(m_nNextSlotToSearch - 6) = 0;
      if ( v2 )
      {
        CUtlMemory<CDecalInfo *,int>::Purge(m_nNextSlotToSearch - 1);
        if ( (*(m_nNextSlotToSearch - 1) & 0xC0000000) == 0 )
          break;
      }
      m_nNextSlotToSearch -= 6;
      if ( m_VBSlotUsed == m_nNextSlotToSearch )
        goto LABEL_7;
    }
    v5 = (m_nNextSlotToSearch - 4);
    m_nNextSlotToSearch -= 6;
    CUtlMemory<CDecalInfo *,int>::Purge(v5);
  }
  while ( m_VBSlotUsed != m_nNextSlotToSearch );
LABEL_7:
  m_Size = this->m_skinnedEntityDecals.m_Buckets.m_Size;
  if ( m_Size > 0 )
  {
    v7 = 0;
    v8 = 8 * (3LL * (m_Size - 1) + 3);
    do
    {
      v9 = &this->m_skinnedEntityDecals.m_Buckets.m_Memory.m_pMemory[v7 / 0x18];
      v2 = (v9->m_Memory.m_nGrowSize & 0xC0000000) == 0;
      v9->m_Size = 0;
      if ( v2 )
        CUtlMemory<SkeletonInstanceDecalList_t,int>::Purge(&v9->m_Memory);
      v7 += 24LL;
    }
    while ( v7 != v8 );
    m_Size = this->m_skinnedEntityDecals.m_Buckets.m_Size;
  }
  for ( i = 24LL * m_Size - 24; --m_Size >= 0; i -= 24 )
  {
    v11 = this->m_skinnedEntityDecals.m_Buckets.m_Memory.m_pMemory + i;
    v2 = (*(v11 + 5) & 0xC0000000) == 0;
    *v11 = 0;
    if ( v2 )
    {
      CUtlMemory<SkeletonInstanceDecalList_t,int>::Purge((v11 + 8));
      if ( (*(v11 + 5) & 0xC0000000) == 0 )
        CUtlMemory<SkeletonInstanceDecalList_t,int>::Purge((v11 + 8));
    }
  }
  v2 = (this->m_skinnedEntityDecals.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_skinnedEntityDecals.m_Buckets.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int>>,int>::Purge(&this->m_skinnedEntityDecals.m_Buckets.m_Memory);
    if ( (this->m_skinnedEntityDecals.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int>>,int>::Purge(&this->m_skinnedEntityDecals.m_Buckets.m_Memory);
  }
  v12 = this->m_rigidEntityDecals.m_Buckets.m_Size;
  if ( v12 > 0 )
  {
    v13 = 0;
    v14 = 8 * (3LL * (v12 - 1) + 3);
    do
    {
      v15 = &this->m_rigidEntityDecals.m_Buckets.m_Memory.m_pMemory[v13 / 0x18];
      v2 = (v15->m_Memory.m_nGrowSize & 0xC0000000) == 0;
      v15->m_Size = 0;
      if ( v2 )
        CUtlMemory<SkeletonInstanceDecalList_t,int>::Purge(&v15->m_Memory);
      v13 += 24LL;
    }
    while ( v13 != v14 );
    v12 = this->m_rigidEntityDecals.m_Buckets.m_Size;
  }
  for ( j = 24LL * v12 - 24; --v12 >= 0; j -= 24 )
  {
    v17 = this->m_rigidEntityDecals.m_Buckets.m_Memory.m_pMemory + j;
    v2 = (*(v17 + 5) & 0xC0000000) == 0;
    *v17 = 0;
    if ( v2 )
    {
      CUtlMemory<SkeletonInstanceDecalList_t,int>::Purge((v17 + 8));
      if ( (*(v17 + 5) & 0xC0000000) == 0 )
        CUtlMemory<SkeletonInstanceDecalList_t,int>::Purge((v17 + 8));
    }
  }
  v2 = (this->m_rigidEntityDecals.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_rigidEntityDecals.m_Buckets.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int>>,int>::Purge(&this->m_rigidEntityDecals.m_Buckets.m_Memory);
    if ( (this->m_rigidEntityDecals.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int>>,int>::Purge(&this->m_rigidEntityDecals.m_Buckets.m_Memory);
  }
  v18 = this->m_nameToParamMapping.m_Buckets.m_Size;
  if ( v18 > 0 )
  {
    v19 = 0;
    v20 = 8 * (3LL * (v18 - 1) + 3);
    do
    {
      v21 = &this->m_nameToParamMapping.m_Buckets.m_Memory.m_pMemory[v19 / 0x18];
      v2 = (v21->m_Memory.m_nGrowSize & 0xC0000000) == 0;
      v21->m_Size = 0;
      if ( v2 )
        CUtlMemory<NameToDecalMaterialParamsMapping_t,int>::Purge(&v21->m_Memory);
      v19 += 24LL;
    }
    while ( v19 != v20 );
    v18 = this->m_nameToParamMapping.m_Buckets.m_Size;
  }
  for ( k = 24LL * v18 - 24; --v18 >= 0; k -= 24 )
  {
    v23 = this->m_nameToParamMapping.m_Buckets.m_Memory.m_pMemory + k;
    v2 = (*(v23 + 5) & 0xC0000000) == 0;
    *v23 = 0;
    if ( v2 )
    {
      CUtlMemory<NameToDecalMaterialParamsMapping_t,int>::Purge((v23 + 8));
      if ( (*(v23 + 5) & 0xC0000000) == 0 )
        CUtlMemory<NameToDecalMaterialParamsMapping_t,int>::Purge((v23 + 8));
    }
  }
  v2 = (this->m_nameToParamMapping.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_nameToParamMapping.m_Buckets.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CUtlVector<NameToDecalMaterialParamsMapping_t,CUtlMemory<NameToDecalMaterialParamsMapping_t,int>>,int>::Purge(&this->m_nameToParamMapping.m_Buckets.m_Memory);
    if ( (this->m_nameToParamMapping.m_Buckets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<NameToDecalMaterialParamsMapping_t,CUtlMemory<NameToDecalMaterialParamsMapping_t,int>>,int>::Purge(&this->m_nameToParamMapping.m_Buckets.m_Memory);
  }
  v2 = (this->m_decalMaterialParams.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_decalMaterialParams.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CDecalMaterialParams,int>::Purge(&this->m_decalMaterialParams.m_Memory);
    if ( (this->m_decalMaterialParams.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDecalMaterialParams,int>::Purge(&this->m_decalMaterialParams.m_Memory);
  }
  this->m_OnPrintDecalInfo_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCBC50;
  this->m_OnPrintDecalInfo_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCBCF8;
  this->m_OnPrintDecalInfo_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCBD10;
  ConCommandBase::Shutdown(&this->m_OnPrintDecalInfo_register.m_ConCommandAccessor);
  ConCommand::~ConCommand(&this->m_OnPrintDecalInfo_register.m_ConCommandAccessor);
  this->m_OnClearAllEntityDecals_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCBC50;
  this->m_OnClearAllEntityDecals_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCBCF8;
  this->m_OnClearAllEntityDecals_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCBD10;
  ConCommandBase::Shutdown(&this->m_OnClearAllEntityDecals_register.m_ConCommandAccessor);
  ConCommand::~ConCommand(&this->m_OnClearAllEntityDecals_register.m_ConCommandAccessor);
  this->m_OnClearWorldDecals_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCBC50;
  this->m_OnClearWorldDecals_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCBCF8;
  this->m_OnClearWorldDecals_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCBD10;
  ConCommandBase::Shutdown(&this->m_OnClearWorldDecals_register.m_ConCommandAccessor);
  ConCommand::~ConCommand(&this->m_OnClearWorldDecals_register.m_ConCommandAccessor);
  this->m_OnClearEntityDecals_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCBC50;
  this->m_OnClearEntityDecals_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCBCF8;
  this->m_OnClearEntityDecals_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCBD10;
  ConCommandBase::Shutdown(&this->m_OnClearEntityDecals_register.m_ConCommandAccessor);
  ConCommand::~ConCommand(&this->m_OnClearEntityDecals_register.m_ConCommandAccessor);
  this->m_OnShootDecal_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCBC50;
  this->m_OnShootDecal_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCBCF8;
  this->m_OnShootDecal_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCBD10;
  ConCommandBase::Shutdown(&this->m_OnShootDecal_register.m_ConCommandAccessor);
  ConCommand::~ConCommand(&this->m_OnShootDecal_register.m_ConCommandAccessor);
  this->m_OnToggleVisualizer_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCBC50;
  this->m_OnToggleVisualizer_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCBCF8;
  this->m_OnToggleVisualizer_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCBD10;
  ConCommandBase::Shutdown(&this->m_OnToggleVisualizer_register.m_ConCommandAccessor);
  ConCommand::~ConCommand(&this->m_OnToggleVisualizer_register.m_ConCommandAccessor);
  CUtlSlot::~CUtlSlot(&this->CUtlSlot);
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CDecalGameSystem::~CDecalGameSystem  (line 149, @0x0000000001f31f90, libserver.so)
// calls: CDecalGameSystem::~CDecalGameSystem, operator delete
void __fastcall CDecalGameSystem::~CDecalGameSystem(CDecalGameSystem *const this)
{
  CDecalGameSystem::~CDecalGameSystem(this);
  operator delete(this);
}


// CDecalGameSystem::GameInit  (line 155, @0x0000000001f44df0, libserver.so)  // inlines: AddToTail, CopyConstruct<HResourceManifest__*>, Element, GrowMemory, LoadResourceManifestNamed, operator[]
// calls: operator new, CUtlMemory<HResourceManifest__*, int>::Grow
// strings: "DecalGameSystemManifest_server"
void __fastcall CDecalGameSystem::GameInit(CDecalGameSystem *const this, const EventGameInit_t *const msg)
{
  CResourceManifestPrerequisite *v4; // rax
  CResourceManifestPrerequisite *v5; // rbx
  __int64 v6; // rax
  __int64 m_Size; // r13
  int v8; // edx
  __int64 *v9; // rdx
  __int64 v10; // [rsp+8h] [rbp-28h]

  v4 = operator new(0x28u);  // new CResourceManifestPrerequisite (size matches)
  v4->m_nRefCount = 0;
  v5 = v4;
  v4->m_hResourceManifests.m_Size = 0;
  v4->m_hResourceManifests.m_Memory.m_pMemory = 0;
  v4->m_hResourceManifests.m_Memory.m_nAllocationCount = 0;
  v4->m_hResourceManifests.m_Memory.m_nGrowSize = 0;
  v4->_vptr_IPrerequisite = off_3FCABD0;  // vptr: CResourceManifestPrerequisite
  this->m_pResourceManifestPrerequisite = v4;
  v6 = (*(*g_pResourceSystem + 184LL))(
         g_pResourceSystem,
         "DecalGameSystemManifest_server",
         0,
         &stru_32D9EEC.m_HierarchyConstraints.m_table.m_nAllocationCount + 3,
         0xFFFFFFFFLL);
  if ( v6 != 0 )
  {
    m_Size = v5->m_hResourceManifests.m_Size;
    v8 = v5->m_hResourceManifests.m_Size;
    if ( m_Size == v5->m_hResourceManifests.m_Memory.m_nAllocationCount )
    {
      v10 = v6;
      CUtlMemory<HResourceManifest__ *,int>::Grow(&v5->m_hResourceManifests.m_Memory, 1);
      v8 = v5->m_hResourceManifests.m_Size;
      v6 = v10;
    }
    v5->m_hResourceManifests.m_Size = v8 + 1;
    v9 = &v5->m_hResourceManifests.m_Memory.m_pMemory[m_Size];
    if ( v9 != 0 )
      *v9 = v6;
  }
  (**msg->m_pRegistry)(msg->m_pRegistry, this->m_pResourceManifestPrerequisite);
  (*(this->m_pResourceManifestPrerequisite->_vptr_IPrerequisite + 2))(this->m_pResourceManifestPrerequisite);
}


// CDecalGameSystem::GameShutdown  (line 163, @0x0000000001f29ed0, libserver.so)
void __fastcall CDecalGameSystem::GameShutdown(CDecalGameSystem *const this, const EventGameShutdown_t *const msg)
{
  CResourceManifestPrerequisite *m_pResourceManifestPrerequisite; // rdi

  m_pResourceManifestPrerequisite = this->m_pResourceManifestPrerequisite;
  if ( m_pResourceManifestPrerequisite != 0 )
  {
    (*(m_pResourceManifestPrerequisite->_vptr_IPrerequisite + 3))(m_pResourceManifestPrerequisite, msg);
    this->m_pResourceManifestPrerequisite = 0;
  }
}


// CDecalGameSystem::GameActivate  (line 173, @0x0000000001f52fd0, libserver.so)  // inlines: CUtlDelegate<CDecalGameSystem, CDecalGameSystem>, Convert<CDecalGameSystem, bool (CDecalGameSystem::*)(const ClearDecalsForSkeletonInstanceEvent_t&), void (detail::GenericClass::*)()>, Convert<CDecalGameSystem, bool (CDecalGameSystem::*)(const ClearEntityDecalsEvent_t&), void (detail::GenericClass::*)()>, Convert<CDecalGameSystem, bool (CDecalGameSystem::*)(const ClearWorldDecalsEvent_t&), void (detail::GenericClass::*)()>, Convert<CDecalGameSystem, bool (CDecalGameSystem::*)(const PlaceDecalEvent_t&), void (detail::GenericClass::*)()>, FastDelegate1<CDecalGameSystem, CDecalGameSystem>, RegisterGameEventHandler<ClearDecalsForSkeletonInstanceEvent_t>, RegisterGameEventHandler<ClearEntityDecalsEvent_t>, RegisterGameEventHandler<ClearWorldDecalsEvent_t>, RegisterGameEventHandler<PlaceDecalEvent_t>, UtlMakeDelegate<CDecalGameSystem, CDecalGameSystem, const ClearDecalsForSkeletonInstanceEvent_t&, bool>, UtlMakeDelegate<CDecalGameSystem, CDecalGameSystem, const ClearEntityDecalsEvent_t&, bool>, UtlMakeDelegate<CDecalGameSystem, CDecalGameSystem, const ClearWorldDecalsEvent_t&, bool>, UtlMakeDelegate<CDecalGameSystem, CDecalGameSystem, const PlaceDecalEvent_t&, bool>, bindmemfunc<CDecalGameSystem, bool (CDecalGameSystem::*)(const ClearDecalsForSkeletonInstanceEvent_t&)>, bindmemfunc<CDecalGameSystem, bool (CDecalGameSystem::*)(const ClearEntityDecalsEvent_t&)>, bindmemfunc<CDecalGameSystem, bool (CDecalGameSystem::*)(const ClearWorldDecalsEvent_t&)>, bindmemfunc<CDecalGameSystem, bool (CDecalGameSystem::*)(const PlaceDecalEvent_t&)>
// globals: CDecalGameSystem::OnPlaceDecalEvent(PlaceDecalEvent_t const&), IGameEventSystem::FindOrCreateGameEvent<PlaceDecalEvent_t>(bool)::s_hEvent, CDecalGameSystem::OnClearDecalsForSkeletonInstanceEvent(ClearDecalsForSkeletonInstanceEvent_t const&), IGameEventSystem::FindOrCreateGameEvent<ClearDecalsForSkeletonInstanceEvent_t>(bool)::s_hEvent, CDecalGameSystem::OnClearWorldDecalsEvent(ClearWorldDecalsEvent_t const&), IGameEventSystem::FindOrCreateGameEvent<ClearWorldDecalsEvent_t>(bool)::s_hEvent, CDecalGameSystem::OnClearEntityDecalsEvent(ClearEntityDecalsEvent_t const&), IGameEventSystem::FindOrCreateGameEvent<ClearEntityDecalsEvent_t>(bool)::s_hEvent
void __fastcall CDecalGameSystem::GameActivate(CDecalGameSystem *const this, const EventGameActivate_t *const msg)
{
  CUtlSlot *v2; // r12
  CDecalGameSystem *v4; // [rsp+0h] [rbp-40h] BYREF
  bool (__fastcall *v5)(CDecalGameSystem *const, const PlaceDecalEvent_t *const); // [rsp+8h] [rbp-38h]
  __int64 v6; // [rsp+10h] [rbp-30h]

  v2 = &this->CUtlSlot;
  v4 = this;
  v5 = CDecalGameSystem::OnPlaceDecalEvent;
  v6 = 0;
  (*(*g_pGameEventSystem + 96LL))(
    g_pGameEventSystem,
    &this->CUtlSlot,
    &v4,
    IGameEventSystem::FindOrCreateGameEvent<PlaceDecalEvent_t>(bool)::s_hEvent,
    0);
  v4 = this;
  v5 = CDecalGameSystem::OnClearDecalsForSkeletonInstanceEvent;
  v6 = 0;
  (*(*g_pGameEventSystem + 96LL))(
    g_pGameEventSystem,
    v2,
    &v4,
    IGameEventSystem::FindOrCreateGameEvent<ClearDecalsForSkeletonInstanceEvent_t>(bool)::s_hEvent,
    0);
  v4 = this;
  v5 = CDecalGameSystem::OnClearWorldDecalsEvent;
  v6 = 0;
  (*(*g_pGameEventSystem + 96LL))(
    g_pGameEventSystem,
    v2,
    &v4,
    IGameEventSystem::FindOrCreateGameEvent<ClearWorldDecalsEvent_t>(bool)::s_hEvent,
    0);
  v4 = this;
  v5 = CDecalGameSystem::OnClearEntityDecalsEvent;
  v6 = 0;
  (*(*g_pGameEventSystem + 96LL))(
    g_pGameEventSystem,
    v2,
    &v4,
    IGameEventSystem::FindOrCreateGameEvent<ClearEntityDecalsEvent_t>(bool)::s_hEvent,
    0);
}


// CDecalGameSystem::GameDeactivate  (line 193, @0x0000000001f71320, libserver.so)  // inlines: CUtlDelegate<CDecalGameSystem, CDecalGameSystem>, Convert<CDecalGameSystem, bool (CDecalGameSystem::*)(const ClearDecalsForSkeletonInstanceEvent_t&), void (detail::GenericClass::*)()>, Convert<CDecalGameSystem, bool (CDecalGameSystem::*)(const ClearEntityDecalsEvent_t&), void (detail::GenericClass::*)()>, Convert<CDecalGameSystem, bool (CDecalGameSystem::*)(const ClearWorldDecalsEvent_t&), void (detail::GenericClass::*)()>, Convert<CDecalGameSystem, bool (CDecalGameSystem::*)(const PlaceDecalEvent_t&), void (detail::GenericClass::*)()>, FastDelegate1<CDecalGameSystem, CDecalGameSystem>, UnregisterGameEventHandler<ClearDecalsForSkeletonInstanceEvent_t>, UnregisterGameEventHandler<ClearEntityDecalsEvent_t>, UnregisterGameEventHandler<ClearWorldDecalsEvent_t>, UnregisterGameEventHandler<PlaceDecalEvent_t>, UtlMakeDelegate<CDecalGameSystem, CDecalGameSystem, const ClearDecalsForSkeletonInstanceEvent_t&, bool>, UtlMakeDelegate<CDecalGameSystem, CDecalGameSystem, const ClearEntityDecalsEvent_t&, bool>, UtlMakeDelegate<CDecalGameSystem, CDecalGameSystem, const ClearWorldDecalsEvent_t&, bool>, UtlMakeDelegate<CDecalGameSystem, CDecalGameSystem, const PlaceDecalEvent_t&, bool>, bindmemfunc<CDecalGameSystem, bool (CDecalGameSystem::*)(const ClearDecalsForSkeletonInstanceEvent_t&)>, bindmemfunc<CDecalGameSystem, bool (CDecalGameSystem::*)(const ClearEntityDecalsEvent_t&)>, bindmemfunc<CDecalGameSystem, bool (CDecalGameSystem::*)(const ClearWorldDecalsEvent_t&)>, bindmemfunc<CDecalGameSystem, bool (CDecalGameSystem::*)(const PlaceDecalEvent_t&)>
// calls: CDecalGameSystem::ClearWorldDecals, CDecalGameSystem::ClearEntityDecals
// globals: CDecalGameSystem::OnPlaceDecalEvent(PlaceDecalEvent_t const&), IGameEventSystem::FindOrCreateGameEvent<PlaceDecalEvent_t>(bool)::s_hEvent, CDecalGameSystem::OnClearDecalsForSkeletonInstanceEvent(ClearDecalsForSkeletonInstanceEvent_t const&), IGameEventSystem::FindOrCreateGameEvent<ClearDecalsForSkeletonInstanceEvent_t>(bool)::s_hEvent, CDecalGameSystem::OnClearWorldDecalsEvent(ClearWorldDecalsEvent_t const&), IGameEventSystem::FindOrCreateGameEvent<ClearWorldDecalsEvent_t>(bool)::s_hEvent, CDecalGameSystem::OnClearEntityDecalsEvent(ClearEntityDecalsEvent_t const&), IGameEventSystem::FindOrCreateGameEvent<ClearEntityDecalsEvent_t>(bool)::s_hEvent
void __fastcall CDecalGameSystem::GameDeactivate(CDecalGameSystem *const this, const EventGameDeactivate_t *const msg)
{
  CUtlSlot *v2; // r12
  __int64 v4; // rax
  CDecalGameSystemDebugVisualizer *m_pDebugVisualizer; // rdi
  CDecalGameSystem *v6; // [rsp+0h] [rbp-40h] BYREF
  bool (__fastcall *v7)(CDecalGameSystem *const, const PlaceDecalEvent_t *const); // [rsp+8h] [rbp-38h]
  __int64 v8; // [rsp+10h] [rbp-30h]

  v2 = &this->CUtlSlot;
  v6 = this;
  v7 = CDecalGameSystem::OnPlaceDecalEvent;
  v8 = 0;
  (*(*g_pGameEventSystem + 104LL))(
    g_pGameEventSystem,
    &this->CUtlSlot,
    &v6,
    IGameEventSystem::FindOrCreateGameEvent<PlaceDecalEvent_t>(bool)::s_hEvent);
  v7 = CDecalGameSystem::OnClearDecalsForSkeletonInstanceEvent;
  v8 = 0;
  v6 = this;
  (*(*g_pGameEventSystem + 104LL))(
    g_pGameEventSystem,
    v2,
    &v6,
    IGameEventSystem::FindOrCreateGameEvent<ClearDecalsForSkeletonInstanceEvent_t>(bool)::s_hEvent);
  v7 = CDecalGameSystem::OnClearWorldDecalsEvent;
  v8 = 0;
  v6 = this;
  (*(*g_pGameEventSystem + 104LL))(
    g_pGameEventSystem,
    v2,
    &v6,
    IGameEventSystem::FindOrCreateGameEvent<ClearWorldDecalsEvent_t>(bool)::s_hEvent);
  v7 = CDecalGameSystem::OnClearEntityDecalsEvent;
  v8 = 0;
  v6 = this;
  (*(*g_pGameEventSystem + 104LL))(
    g_pGameEventSystem,
    v2,
    &v6,
    IGameEventSystem::FindOrCreateGameEvent<ClearEntityDecalsEvent_t>(bool)::s_hEvent);
  if ( this->m_pDebugVisualizer != 0 )
  {
    v4 = (*(*g_pEngineServiceMgr + 224LL))(g_pEngineServiceMgr);
    (*(*v4 + 16LL))(v4, 3051093416LL);
    m_pDebugVisualizer = this->m_pDebugVisualizer;
    if ( m_pDebugVisualizer != 0 )
      (*(m_pDebugVisualizer->_vptr_IDebugVisualizer + 1))(m_pDebugVisualizer);
  }
  this->m_pDebugVisualizer = 0;
  CDecalGameSystem::ClearWorldDecals(this, 0xFFFFFFFF);
  CDecalGameSystem::ClearEntityDecals(this, 0xFFFFFFFF);
}


// CDecalGameSystem::EnsureS1toS2Mappings  (line 219, @0x0000000001f324f0, libserver.so)
void __fastcall CDecalGameSystem::EnsureS1toS2Mappings(CDecalGameSystem *const this)
{
  ;
}


// CDecalGameSystem::DecalShoot  (line 239, @0x0000000001f32500, libserver.so)
void __fastcall CDecalGameSystem::DecalShoot(
        CDecalGameSystem *const this,
        int nInDecalMaterialIndex,
        uint32 nFlags,
        const Vector *const vPosition,
        const Vector *const vNormal,
        const Color *const rgbaColor,
        const Vector *pSAxis,
        CSkeletonInstance *pSkeletonInstance,
        int nBoneIndex)
{
  ;
}


// CDecalGameSystem::DecalShoot  (line 306, @0x0000000001f32c50, libserver.so)
// calls: CDecalGameSystem::LookupDecalMaterialIndex, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "Decal material with hash %X cannot be found.\n"
// globals: LOG_DECALGAMESYSTEM
void __fastcall CDecalGameSystem::DecalShoot(
        CDecalGameSystem *const this,
        const CUtlStringToken *const pDecalMaterial,
        uint32 nFlags,
        const Vector *const vPosition,
        const Vector *const vNormal,
        const Color *const rgbaColor,
        const Vector *pSAxis,
        CSkeletonInstance *pSkeletonInstance,
        int nBoneIndex)
{
  if ( CDecalGameSystem::LookupDecalMaterialIndex(this, pDecalMaterial) < 0
    && LoggingSystem_IsChannelEnabled(LOG_DECALGAMESYSTEM, 2) != 0 )
  {
    LoggingSystem_Log(
      LOG_DECALGAMESYSTEM,
      2,
      "Decal material with hash %X cannot be found.\n",
      pDecalMaterial->m_nHashCode);
  }
}


// CDecalGameSystem::ClearDecalsForSkeletonInstance  (line 325, @0x0000000001f70d50, libserver.so)  // inlines: CEntityHandle, CNetMessagePB, ClearDecalsForSkeletonInstanceEvent_t, FindGameEvent<ClearDecalsForSkeletonInstanceEvent_t>, FindOrCreateGameEvent<ClearDecalsForSkeletonInstanceEvent_t>, GetEHandle, GetEntryIndex, GetName, GetSerialNumber, Init, PostEvent<ClearDecalsForSkeletonInstanceEvent_t>, set_entityhandleindex, set_flagstoclear, set_has_entityhandleindex, set_has_flagstoclear, set_skeletoninstancehash, ~CNetMessagePB, ~ClearDecalsForSkeletonInstanceEvent_t
// calls: CMsgClearDecalsForSkeletonInstanceEvent::CMsgClearDecalsForSkeletonInstanceEvent, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CRecipientFilter::~CRecipientFilter, CMsgClearDecalsForSkeletonInstanceEvent::~CMsgClearDecalsForSkeletonInstanceEvent, CDecalGameSystem::DestroyDecalsForSkeletonInstance, __stack_chk_fail, _Unwind_Resume
// callers: CDecalGameSystem::OnClearEntityDecals
// globals: IGameEventSystem::FindOrCreateGameEvent<ClearDecalsForSkeletonInstanceEvent_t>(bool)::s_hEvent
void __fastcall CDecalGameSystem::ClearDecalsForSkeletonInstance(
        CDecalGameSystem *const this,
        CSkeletonInstance *pSkeletonInstance,
        uint32 nDecalFlagsToClear)
{
  uint32 v3; // r13d
  CEntityIdentity *m_pEntity; // rax
  __int16 v5; // cx
  uint32 m_nHashCode; // r15d
  IGameEventSystem *v7; // r14
  __int64 v9; // [rsp+18h] [rbp-1C8h]
  void (__fastcall *v10)(IGameEventSystem *, __int64, _QWORD, CRecipientFilter *, __int64, CEntityHandle *, __int64); // [rsp+20h] [rbp-1C0h]
  CEntityHandle v12[2]; // [rsp+40h] [rbp-1A0h] BYREF
  int v13; // [rsp+50h] [rbp-190h]
  uint32 v14; // [rsp+58h] [rbp-188h]
  uint32 v15; // [rsp+5Ch] [rbp-184h]
  uint32 v16; // [rsp+60h] [rbp-180h]
  CRecipientFilter filter; // [rsp+70h] [rbp-170h] BYREF
  unsigned __int64 v18; // [rsp+1A8h] [rbp-38h]

  v3 = -1;
  v18 = __readfsqword(0x28u);
  m_pEntity = pSkeletonInstance->m_pOwner->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v5 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v3 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v5 & 0x7FFF;
  }
  m_nHashCode = pSkeletonInstance->m_name.m_Value.m_nHashCode;
  CMsgClearDecalsForSkeletonInstanceEvent::CMsgClearDecalsForSkeletonInstanceEvent(v12);
  *&v12[0].m_Index = off_3FCC270;
  v15 = v3;
  v16 = m_nHashCode;
  v13 |= 7u;
  v14 = nDecalFlagsToClear;
  CRecipientFilter::CRecipientFilter(&filter);
  CRecipientFilter::AddAllPlayers(&filter);
  CRecipientFilter::MakeReliable(&filter);
  v7 = g_pGameEventSystem;
  v9 = IGameEventSystem::FindOrCreateGameEvent<ClearDecalsForSkeletonInstanceEvent_t>(bool)::s_hEvent;
  v10 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(g_pNetworkMessages);
  v10(v7, 0xFFFFFFFFLL, 0, &filter, v9, v12, 40);
  CRecipientFilter::~CRecipientFilter(&filter);
  *&v12[0].m_Index = &off_3FCC1B0;
  CMsgClearDecalsForSkeletonInstanceEvent::~CMsgClearDecalsForSkeletonInstanceEvent(v12);
  v12[0].m_Index = v3;
  CDecalGameSystem::DestroyDecalsForSkeletonInstance(this, &v12[0].m_Index, m_nHashCode, nDecalFlagsToClear);
}


// CDecalGameSystem::ClearWorldDecals  (line 352, @0x0000000001f71030, libserver.so)  // inlines: CNetMessagePB, ClearWorldDecalsEvent_t, DestroyWorldDecals, FindGameEvent<ClearWorldDecalsEvent_t>, FindOrCreateGameEvent<ClearWorldDecalsEvent_t>, PostEvent<ClearWorldDecalsEvent_t>, set_flagstoclear, set_has_flagstoclear, ~CNetMessagePB, ~ClearWorldDecalsEvent_t
// calls: CMsgClearWorldDecalsEvent::CMsgClearWorldDecalsEvent, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CRecipientFilter::~CRecipientFilter, CMsgClearWorldDecalsEvent::~CMsgClearWorldDecalsEvent, CDecalGameSystem::DestroyDecalList, __stack_chk_fail, _Unwind_Resume
// callers: CDecalGameSystem::OnClearWorldDecals, CDecalGameSystem::GameDeactivate
// globals: IGameEventSystem::FindOrCreateGameEvent<ClearWorldDecalsEvent_t>(bool)::s_hEvent
void __fastcall CDecalGameSystem::ClearWorldDecals(CDecalGameSystem *const this, uint32 nDecalFlagsToClear)
{
  IGameEventSystem *v4; // r14
  __int64 v5; // [rsp+10h] [rbp-1A0h]
  void (__fastcall *v6)(IGameEventSystem *, __int64, _QWORD, CRecipientFilter *, __int64, _QWORD *, __int64); // [rsp+18h] [rbp-198h]
  _QWORD v7[2]; // [rsp+20h] [rbp-190h] BYREF
  int v8; // [rsp+30h] [rbp-180h]
  uint32 v9; // [rsp+38h] [rbp-178h]
  CRecipientFilter filter; // [rsp+40h] [rbp-170h] BYREF
  unsigned __int64 v11; // [rsp+178h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  CMsgClearWorldDecalsEvent::CMsgClearWorldDecalsEvent(v7);
  v8 |= 1u;
  v7[0] = off_3FCBE70;
  v9 = nDecalFlagsToClear;
  CRecipientFilter::CRecipientFilter(&filter);
  CRecipientFilter::AddAllPlayers(&filter);
  CRecipientFilter::MakeReliable(&filter);
  v4 = g_pGameEventSystem;
  v6 = *(*g_pGameEventSystem + 128LL);
  v5 = IGameEventSystem::FindOrCreateGameEvent<ClearWorldDecalsEvent_t>(bool)::s_hEvent;
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<ClearWorldDecalsEvent_t>(bool)::s_hEvent);
  v6(v4, 0xFFFFFFFFLL, 0, &filter, v5, v7, 32);
  CRecipientFilter::~CRecipientFilter(&filter);
  v7[0] = &off_3FCBDB0;
  CMsgClearWorldDecalsEvent::~CMsgClearWorldDecalsEvent(v7);
  CDecalGameSystem::DestroyDecalList(this, &this->m_worldDecals, nDecalFlagsToClear);
}


// CDecalGameSystem::ClearEntityDecals  (line 373, @0x0000000001f711b0, libserver.so)  // inlines: CNetMessagePB, ClearEntityDecalsEvent_t, FindGameEvent<ClearEntityDecalsEvent_t>, FindOrCreateGameEvent<ClearEntityDecalsEvent_t>, PostEvent<ClearEntityDecalsEvent_t>, set_flagstoclear, set_has_flagstoclear, ~CNetMessagePB, ~ClearEntityDecalsEvent_t
// calls: CMsgClearEntityDecalsEvent::CMsgClearEntityDecalsEvent, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CRecipientFilter::~CRecipientFilter, CMsgClearEntityDecalsEvent::~CMsgClearEntityDecalsEvent, CDecalGameSystem::DestroyRigidEntityDecals, CDecalGameSystem::DestroySkinnedEntityDecals, __stack_chk_fail, _Unwind_Resume
// callers: CDecalGameSystem::GameDeactivate, CDecalGameSystem::OnClearAllEntityDecals
// globals: IGameEventSystem::FindOrCreateGameEvent<ClearEntityDecalsEvent_t>(bool)::s_hEvent
void __fastcall CDecalGameSystem::ClearEntityDecals(CDecalGameSystem *const this, uint32 nDecalFlagsToClear)
{
  __int64 v3; // r15
  IGameEventSystem *v4; // r14
  void (__fastcall *v6)(IGameEventSystem *, __int64, _QWORD, CRecipientFilter *, __int64, _QWORD *, __int64); // [rsp+18h] [rbp-198h]
  _QWORD v7[2]; // [rsp+20h] [rbp-190h] BYREF
  int v8; // [rsp+30h] [rbp-180h]
  uint32 v9; // [rsp+38h] [rbp-178h]
  CRecipientFilter filter; // [rsp+40h] [rbp-170h] BYREF
  unsigned __int64 v11; // [rsp+178h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  CMsgClearEntityDecalsEvent::CMsgClearEntityDecalsEvent(v7);
  v8 |= 1u;
  v7[0] = off_3FCC070;
  v9 = nDecalFlagsToClear;
  CRecipientFilter::CRecipientFilter(&filter);
  CRecipientFilter::AddAllPlayers(&filter);
  CRecipientFilter::MakeReliable(&filter);
  v3 = IGameEventSystem::FindOrCreateGameEvent<ClearEntityDecalsEvent_t>(bool)::s_hEvent;
  v4 = g_pGameEventSystem;
  v6 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<ClearEntityDecalsEvent_t>(bool)::s_hEvent);
  v6(v4, 0xFFFFFFFFLL, 0, &filter, v3, v7, 32);
  CRecipientFilter::~CRecipientFilter(&filter);
  v7[0] = &off_3FCBFB0;
  CMsgClearEntityDecalsEvent::~CMsgClearEntityDecalsEvent(v7);
  CDecalGameSystem::DestroyRigidEntityDecals(this, nDecalFlagsToClear);
  CDecalGameSystem::DestroySkinnedEntityDecals(this, nDecalFlagsToClear);
}


// CDecalGameSystem::CreateSource1ToSource2Mapping  (line 396, @0x0000000001f5e6b0, libserver.so)  // inlines: FillWithValue, MakeStringToken, operator[]
// calls: CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount, CDecalGameSystem::LookupDecalMaterialIndex, CUtlString::Get, MurmurHash2LowerCase, RegisterStringToken
void __fastcall CDecalGameSystem::CreateSource1ToSource2Mapping(
        CDecalGameSystem *const this,
        const CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const decalNames,
        const CUtlVector<int,CUtlMemory<int,int> > *const precacheIndices)
{
  int *m_pMemory; // rdi
  __int64 v6; // rax
  int v7; // esi
  int v8; // esi
  __int64 v9; // rdx
  int i; // eax
  __int64 v11; // rbx
  int v12; // r12d
  int v13; // eax
  __int64 v14; // r14
  const char *v15; // r9
  uint32 v16; // eax
  const char *v17; // rsi
  const char *pDecalName; // [rsp+8h] [rbp-58h]
  uint32 pDecalNamea; // [rsp+8h] [rbp-58h]
  CUtlStringToken v21; // [rsp+20h] [rbp-40h] BYREF

  if ( precacheIndices->m_Size <= 0 )
  {
    v8 = 1;
  }
  else
  {
    m_pMemory = precacheIndices->m_Memory.m_pMemory;
    v6 = 0;
    v7 = 0;
    do
    {
      if ( v7 < m_pMemory[v6] )
        v7 = m_pMemory[v6];
      ++v6;
    }
    while ( precacheIndices->m_Size > v6 );
    v8 = v7 + 1;
  }
  CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(&this->m_S1ToS2DecalMapping, v8);
  v9 = 0;
  for ( i = 0; i < this->m_S1ToS2DecalMapping.m_Size; ++v9 )
  {
    ++i;
    this->m_S1ToS2DecalMapping.m_Memory.m_pMemory[v9] = -1;
  }
  if ( precacheIndices->m_Size > 0 )
  {
    v11 = 0;
    v12 = 0;
    do
    {
      v14 = precacheIndices->m_Memory.m_pMemory[v11];
      v15 = CUtlString::Get(&decalNames->m_Memory.m_pMemory[v11]);
      v16 = 0;
      if ( v15 != 0 && *v15 != 0 )
      {
        pDecalName = v15;
        v16 = MurmurHash2LowerCase(v15, 0x31415926u);
        if ( g_bUpdateStringTokenDatabase )
        {
          v17 = pDecalName;
          pDecalNamea = v16;
          RegisterStringToken(v16, v17, 0, 1);
          v16 = pDecalNamea;
        }
      }
      v21.m_nHashCode = v16;
      v13 = CDecalGameSystem::LookupDecalMaterialIndex(this, &v21);
      if ( v13 == -1 )
        v13 = 0;
      ++v12;
      ++v11;
      this->m_S1ToS2DecalMapping.m_Memory.m_pMemory[v14] = v13;
    }
    while ( precacheIndices->m_Size > v12 );
  }
}


// CDecalGameSystem::OnPlaceDecalEvent  (line 425, @0x0000000001f71560, libserver.so)  // inlines: curtime
// calls: CDecalGameSystem::PlaceDecal
bool __fastcall CDecalGameSystem::OnPlaceDecalEvent(CDecalGameSystem *const this, const PlaceDecalEvent_t *const msg)
{
  float v2; // xmm1_4
  double v3; // xmm0_8
  CGlobalVars *v5; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  const PlaceDecalEvent_t *v8; // [rsp-18h] [rbp-20h]

  v3 = 0.0;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v8 = msg;
        (m_pfnWarningFunc)(1, 0.0);
        msg = v8;
      }
    }
    *&v3 = LODWORD(v5->m_flCurrentTime);
  }
  CDecalGameSystem::PlaceDecal(this, msg, v3, v2);
  return 1;
}


// CDecalGameSystem::OnClearDecalsForSkeletonInstanceEvent  (line 440, @0x0000000001f342f0, libserver.so)  // inlines: CEntityHandle
// calls: CDecalGameSystem::DestroyDecalsForSkeletonInstance
bool __fastcall CDecalGameSystem::OnClearDecalsForSkeletonInstanceEvent(
        CDecalGameSystem *const this,
        const ClearDecalsForSkeletonInstanceEvent_t *const msg)
{
  uint32 v2; // ecx
  uint32 v3; // edx
  CEntityHandle nEntityHandle; // [rsp+0h] [rbp-10h] BYREF

  v2 = *(msg + 6);
  v3 = *(msg + 8);
  nEntityHandle.m_Index = *(msg + 7);
  CDecalGameSystem::DestroyDecalsForSkeletonInstance(this, &nEntityHandle.m_Index, v3, v2);
  return 1;
}


// CDecalGameSystem::OnClearWorldDecalsEvent  (line 451, @0x0000000001f33fa0, libserver.so)  // inlines: DestroyWorldDecals
// calls: CDecalGameSystem::DestroyDecalList
bool __fastcall CDecalGameSystem::OnClearWorldDecalsEvent(
        CDecalGameSystem *const this,
        const ClearWorldDecalsEvent_t *const msg)
{
  CDecalGameSystem::DestroyDecalList(this, &this->m_worldDecals, *(msg + 6));
  return 1;
}


// CDecalGameSystem::OnClearEntityDecalsEvent  (line 460, @0x0000000001f34220, libserver.so)
// calls: CDecalGameSystem::DestroyRigidEntityDecals, CDecalGameSystem::DestroySkinnedEntityDecals
bool __fastcall CDecalGameSystem::OnClearEntityDecalsEvent(
        CDecalGameSystem *const this,
        const ClearEntityDecalsEvent_t *const msg)
{
  CDecalGameSystem::DestroyRigidEntityDecals(this, *(msg + 6));
  CDecalGameSystem::DestroySkinnedEntityDecals(this, *(msg + 6));
  return 1;
}


// CDecalGameSystem::FrameBoundary  (line 471, @0x0000000001f3a680, libserver.so)  // inlines: Head, UpdateWorldDecals, curtime
// calls: CDecalGameSystem::OptionallyRetireDecal, CDecalGameSystem::UpdateRigidEntityDecals, CDecalGameSystem::UpdateSkinnedEntityDecals
void __fastcall CDecalGameSystem::FrameBoundary(
        CDecalGameSystem *const this,
        const EventGameFrameBoundary_t *const msg)
{
  CGlobalVars *v2; // rbx
  CDecalInfo *m_pHead; // rsi
  __m128i m_flCurrentTime_low; // xmm1
  float v6; // r14d
  CDecalInfo *v7; // rbx
  float v8; // xmm1_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float flAlpha[9]; // [rsp+Ch] [rbp-24h] BYREF

  v2 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( *&gpGlobals->m_bInSimulation == 0 )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, msg);
    }
    m_pHead = this->m_worldDecals.m_pHead;
    m_flCurrentTime_low = LODWORD(v2->m_flCurrentTime);
    v6 = COERCE_FLOAT(_mm_cvtsi128_si32(m_flCurrentTime_low));
    if ( m_pHead != 0 )
    {
      while ( 1 )
      {
        v7 = *(m_pHead + 5);
        CDecalGameSystem::OptionallyRetireDecal(this, m_pHead, v6, flAlpha);
        if ( v7 == 0 )
          break;
        m_pHead = v7;
      }
    }
    CDecalGameSystem::UpdateRigidEntityDecals(this, v6, *m_flCurrentTime_low.m128i_i32, 0);
    CDecalGameSystem::UpdateSkinnedEntityDecals(this, v6, v8, 0);
  }
}


// CDecalGameSystem::PlaceDecal  (line 532, @0x0000000001f71480, libserver.so)  // inlines: FindGameEvent<PlaceDecalEvent_t>, FindOrCreateGameEvent<PlaceDecalEvent_t>, PostEvent<PlaceDecalEvent_t>
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CDecalGameSystem::OnPlaceDecalEvent, CDecalSaveRestoreBlockHandler::Restore
// globals: IGameEventSystem::FindOrCreateGameEvent<PlaceDecalEvent_t>(bool)::s_hEvent
void __fastcall CDecalGameSystem::PlaceDecal(
        CDecalGameSystem *const this,
        const PlaceDecalEvent_t *msg,
        double a3,
        float flPlacementTime)
{
  __int64 v5; // r13
  IGameEventSystem *v6; // r12
  void (__fastcall *v7)(IGameEventSystem *, __int64, _QWORD, CRecipientFilter *, __int64, const PlaceDecalEvent_t *const, __int64); // r14
  CRecipientFilter filter; // [rsp+10h] [rbp-170h] BYREF
  unsigned __int64 v9; // [rsp+148h] [rbp-38h]

  v9 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  CRecipientFilter::AddAllPlayers(&filter);
  CRecipientFilter::MakeReliable(&filter);
  v5 = IGameEventSystem::FindOrCreateGameEvent<PlaceDecalEvent_t>(bool)::s_hEvent;
  v6 = g_pGameEventSystem;
  v7 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<PlaceDecalEvent_t>(bool)::s_hEvent);
  v7(v6, 0xFFFFFFFFLL, 0, &filter, v5, msg, 88);
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDecalGameSystem::FindSkeletonInstanceDecalList  (line 567, @0x0000000001f32510, libserver.so)  // inlines: BuildHandle, CUtlIntrusiveDListWithTailPtr, DoFind, Element, Find, GetBucketIndex, SkeletonInstanceDecalList_t, operator[]
// callers: CDecalGameSystem::FreeRigidEntityDecal, CDecalGameSystem::FreeSkinnedEntityDecal, CDecalGameSystem::DestroyDecalsForSkeletonInstance
SkeletonInstanceDecalList_t *__fastcall CDecalGameSystem::FindSkeletonInstanceDecalList(
        CDecalGameSystem *const this,
        uint32 *nEntityHandle,
        uint32 nSkeletonInstanceHash,
        CUtlHash<SkeletonInstanceDecalList_t,bool (*)(const SkeletonInstanceDecalList_t&,const SkeletonInstanceDecalList_t&),unsigned int (*)(const SkeletonInstanceDecalList_t&)> *const hashTable)
{
  uint32 v5; // eax
  unsigned int v6; // eax
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *v7; // r13
  int m_Size; // r12d
  __int64 v9; // r14
  int v10; // r15d
  unsigned int v12; // [rsp+4h] [rbp-5Ch]
  SkeletonInstanceDecalList_t list; // [rsp+10h] [rbp-50h] BYREF

  list.m_decalList.m_pHead = 0;
  v5 = *nEntityHandle;
  list.m_decalList.m_pTailPtr = 0;
  list.m_nSkeletonInstanceHash = nSkeletonInstanceHash;
  list.m_nEntityHandle.m_Index = v5;
  v6 = hashTable->m_KeyFunc(&list);
  if ( hashTable->m_bPowerOfTwo )
    v12 = hashTable->m_ModMask & v6;
  else
    v12 = v6 % hashTable->m_Buckets.m_Size;
  v7 = &hashTable->m_Buckets.m_Memory.m_pMemory[v12];
  m_Size = v7->m_Size;
  if ( v7->m_Size <= 0 )
  {
    v10 = 0;
  }
  else
  {
    v9 = 0;
    v10 = 0;
    while ( !hashTable->m_CompareFunc(&v7->m_Memory.m_pMemory[v9], &list) )
    {
      ++v10;
      ++v9;
      if ( v10 == m_Size )
        return 0;
    }
  }
  if ( m_Size == v10 || (v10 | (v12 << 16)) == 0xFFFFFFFF )
    return 0;
  else
    return &hashTable->m_Buckets.m_Memory.m_pMemory[(v10 | (v12 << 16)) >> 16].m_Memory.m_pMemory[v10];
}


// CDecalGameSystem::FindOrCreateSkeletonInstanceDecalList  (line 582, @0x0000000001f5f0e0, libserver.so)  // inlines: AddToTail, BuildHandle, CEntityHandle, CUtlIntrusiveDListWithTailPtr, CopyConstruct<SkeletonInstanceDecalList_t>, DoFind, Element, Find, GetBucketIndex, GrowMemory, Insert, SkeletonInstanceDecalList_t, operator[]
// calls: CUtlMemory<SkeletonInstanceDecalList_t, int>::Grow
// callers: CDecalGameSystem::AddRigidEntityDecal, CDecalGameSystem::AddSkinnedEntityDecal
SkeletonInstanceDecalList_t *__fastcall CDecalGameSystem::FindOrCreateSkeletonInstanceDecalList(
        CDecalGameSystem *const this,
        uint32 *nEntityHandle,
        uint32 nSkeletonInstanceHash,
        CUtlHash<SkeletonInstanceDecalList_t,bool (*)(const SkeletonInstanceDecalList_t&,const SkeletonInstanceDecalList_t&),unsigned int (*)(const SkeletonInstanceDecalList_t&)> *const hashTable)
{
  uint32 v5; // eax
  unsigned int v6; // eax
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *v7; // r14
  __int64 v8; // r13
  int v9; // r15d
  unsigned int v10; // esi
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *m_pMemory; // rcx
  unsigned int v13; // eax
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *v14; // r14
  __int64 v15; // r15
  int v16; // r13d
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *v17; // r12
  int v18; // r13d
  int v19; // eax
  SkeletonInstanceDecalList_t *v20; // rax
  __int64 v21; // [rsp+0h] [rbp-60h]
  unsigned int v22; // [rsp+8h] [rbp-58h]
  signed int v23; // [rsp+8h] [rbp-58h]
  int m_Size; // [rsp+Ch] [rbp-54h]
  int v25; // [rsp+Ch] [rbp-54h]
  SkeletonInstanceDecalList_t list; // [rsp+10h] [rbp-50h] BYREF

  list.m_decalList.m_pHead = 0;
  v5 = *nEntityHandle;
  list.m_decalList.m_pTailPtr = 0;
  list.m_nSkeletonInstanceHash = nSkeletonInstanceHash;
  list.m_nEntityHandle.m_Index = v5;
  v6 = hashTable->m_KeyFunc(&list);
  if ( hashTable->m_bPowerOfTwo )
    v22 = hashTable->m_ModMask & v6;
  else
    v22 = v6 % hashTable->m_Buckets.m_Size;
  v7 = &hashTable->m_Buckets.m_Memory.m_pMemory[v22];
  m_Size = v7->m_Size;
  if ( v7->m_Size <= 0 )
  {
    v9 = 0;
  }
  else
  {
    v8 = 0;
    v9 = 0;
    while ( !hashTable->m_CompareFunc(&v7->m_Memory.m_pMemory[v8], &list) )
    {
      ++v9;
      ++v8;
      if ( v9 == m_Size )
        goto LABEL_12;
    }
  }
  if ( m_Size == v9 || (v10 = v9 | (v22 << 16)) == -1 )
  {
LABEL_12:
    v13 = hashTable->m_KeyFunc(&list);
    if ( hashTable->m_bPowerOfTwo )
      v23 = hashTable->m_ModMask & v13;
    else
      v23 = v13 % hashTable->m_Buckets.m_Size;
    m_pMemory = hashTable->m_Buckets.m_Memory.m_pMemory;
    v14 = &m_pMemory[v23];
    v21 = v23;
    v25 = v14->m_Size;
    if ( v14->m_Size <= 0 )
    {
      v16 = 0;
LABEL_19:
      if ( v25 != v16 )
      {
        v10 = v16 | (v23 << 16);
        return &m_pMemory[HIWORD(v10)].m_Memory.m_pMemory[v10];
      }
    }
    else
    {
      v15 = 0;
      v16 = 0;
      do
      {
        if ( hashTable->m_CompareFunc(&v14->m_Memory.m_pMemory[v15], &list) )
        {
          m_pMemory = hashTable->m_Buckets.m_Memory.m_pMemory;
          goto LABEL_19;
        }
        ++v16;
        ++v15;
      }
      while ( v16 != v25 );
      m_pMemory = hashTable->m_Buckets.m_Memory.m_pMemory;
    }
    v17 = &m_pMemory[v21];
    v18 = m_pMemory[v23].m_Size;
    if ( v18 == m_pMemory[v21].m_Memory.m_nAllocationCount )
    {
      CUtlMemory<SkeletonInstanceDecalList_t,int>::Grow(&v17->m_Memory, 1);
      v19 = v17->m_Size;
    }
    else
    {
      v19 = m_pMemory[v23].m_Size;
    }
    v17->m_Size = v19 + 1;
    v20 = &v17->m_Memory.m_pMemory[v18];
    if ( v20 != 0 )
      *v20 = list;
    m_pMemory = hashTable->m_Buckets.m_Memory.m_pMemory;
    v10 = v18 | (v23 << 16);
  }
  else
  {
    m_pMemory = hashTable->m_Buckets.m_Memory.m_pMemory;
  }
  return &m_pMemory[HIWORD(v10)].m_Memory.m_pMemory[v10];
}


// CDecalGameSystem::LoadDecalMaterialParamsFromSheet  (line 598, @0x0000000001f5f800, libserver.so)  // inlines: CWeakHandle, FindFloatParam, GetPtr, GetRawPtr, Init, ResolveOffset, Vector2DSubtract, operator-, operator[]
// calls: V_stricmp_fast, CDecalGameSystem::AddDecalMaterialParams
void __fastcall CDecalGameSystem::LoadDecalMaterialParamsFromSheet(
        CDecalGameSystem *const this,
        HRenderTexture hRenderTexture)
{
  __int64 (__fastcall *v3)(IRenderDevice *, _QWORD *); // rax
  __int64 v4; // r14
  __int64 (__fastcall *v5)(IRenderDevice *, _QWORD *); // rax
  int v6; // eax
  __int64 v7; // r13
  char *v8; // rbx
  int *v9; // rbx
  __int64 v10; // rax
  int *v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rcx
  char *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // eax
  int *v18; // r12
  __int64 v19; // r15
  __int64 v20; // r14
  int v21; // edx
  char *v22; // rax
  const char *v23; // rsi
  char *v24; // rax
  __int64 v25; // rdx
  const char *v26; // rdx
  int v27; // ecx
  char *v28; // rax
  int v29; // eax
  __int64 v30; // r15
  __int64 v31; // r14
  int v32; // edx
  char *v33; // rax
  const char *v34; // rsi
  char *v35; // rax
  __int64 v36; // rdx
  const char *v37; // rdx
  int v38; // ecx
  char *v39; // rax
  int v40; // eax
  __int64 v41; // r15
  __int64 v42; // r14
  int v43; // edx
  char *v44; // rax
  const char *v45; // rsi
  char *v46; // rax
  __int64 v47; // rdx
  const char *v48; // rdx
  int v49; // ecx
  char *v50; // rax
  int v51; // eax
  __int64 v52; // r15
  __int64 v53; // r14
  int v54; // edx
  char *v55; // rax
  const char *v56; // rsi
  char *v57; // rax
  __int64 v58; // rdx
  const char *v59; // rdx
  int v60; // ecx
  char *v61; // rax
  int v62; // eax
  __int64 v63; // r15
  __int64 v64; // r14
  int v65; // edx
  char *v66; // rax
  const char *v67; // rsi
  char *v68; // rax
  __int64 v69; // rdx
  const char *v70; // rdx
  int v71; // ecx
  char *v72; // rax
  int v73; // eax
  __int64 v74; // r15
  __int64 v75; // r14
  int v76; // edx
  char *v77; // rax
  const char *v78; // rsi
  char *v79; // rax
  __int64 v80; // rdx
  const char *v81; // rdx
  int v82; // ecx
  char *v83; // rax
  int v84; // eax
  __int64 v85; // r15
  __int64 v86; // r14
  int v87; // edx
  char *v88; // rax
  const char *v89; // rsi
  char *v90; // rax
  __int64 v91; // rdx
  const char *v92; // rdx
  int v93; // ecx
  char *v94; // rax
  int v95; // eax
  __int64 v96; // r15
  __int64 v97; // r14
  int v98; // edx
  char *v99; // rax
  const char *v100; // rsi
  char *v101; // rax
  __int64 v102; // rdx
  const char *v103; // rdx
  int v104; // ecx
  char *v105; // rax
  __int64 v106; // rax
  const char *v107; // rsi
  __int64 v108; // rax
  char *v109; // rcx
  const CTextureDesc *pDesc; // [rsp+18h] [rbp-88h]
  float flDecalScaleVariation; // [rsp+28h] [rbp-78h]
  float flAnimationScale; // [rsp+2Ch] [rbp-74h]
  float flSpecExp; // [rsp+30h] [rbp-70h]
  float flMappingDepth; // [rsp+34h] [rbp-6Ch]
  float flDecalScale; // [rsp+38h] [rbp-68h]
  float flMappingHeight; // [rsp+3Ch] [rbp-64h]
  float flMappingWidth; // [rsp+40h] [rbp-60h]
  float flAnimationLifeSpan; // [rsp+44h] [rbp-5Ch]
  float flDecalFadeDuration; // [rsp+48h] [rbp-58h]
  float flDecalStartFadeTime; // [rsp+4Ch] [rbp-54h]
  __int64 v122; // [rsp+50h] [rbp-50h]
  const Sheet_t *pSheet; // [rsp+58h] [rbp-48h]
  _QWORD v124[8]; // [rsp+60h] [rbp-40h] BYREF

  v3 = *(*g_pRenderDevice + 480LL);
  v124[0] = hRenderTexture.m_pBinding->m_pData;
  v4 = v3(g_pRenderDevice, v124);
  pSheet = v4;
  if ( v4 != 0 )
  {
    v5 = *(*g_pRenderDevice + 544LL);
    v124[0] = hRenderTexture.m_pBinding->m_pData;
    pDesc = v5(g_pRenderDevice, v124);
    v6 = *(v4 + 4);
    if ( v6 > 0 )
    {
      v7 = 0;
      v122 = 32 * ((v6 - 1) + 1LL);
      while ( 1 )
      {
        v8 = 0;
        if ( pSheet->m_Sequences.m_nOffset != 0 )
          v8 = pSheet + pSheet->m_Sequences.m_nOffset;
        v9 = &v8[v7];
        if ( v9[3] == 0 )
          goto LABEL_113;
        v10 = v9[2];
        v11 = v9 + 2;
        if ( v10 == 0 )
          goto LABEL_113;
        v109 = v11 + v10;
        if ( *(v109 + 2) == 0 )
          goto LABEL_113;
        v12 = *(v109 + 1);
        v13 = 0;
        if ( v12 != 0 )
          v13 = v11 + v10 + v12 + 4;
        v14 = v11 + v10;
        v15 = *(v11 + v10 + 4);
        v16 = 0;
        if ( v15 != 0 )
          v16 = &v14[v15 + 4];
        v17 = v9[7];
        flMappingWidth = (*(v16 + 24) - *(v13 + 16)) * pDesc->m_nWidth;
        flMappingHeight = (*(v16 + 28) - *(v13 + 20)) * pDesc->m_nHeight;
        if ( v17 <= 0 )
          break;
        v18 = v9 + 6;
        v19 = 0;
        v20 = 8LL * (v17 - 1) + 8;
        while ( 1 )
        {
          v21 = v9[6];
          v22 = 0;
          if ( v21 != 0 )
            v22 = v18 + v21;
          v23 = "";
          v24 = &v22[v19];
          v25 = *v24;
          if ( v25 != 0 )
          {
            v26 = &v24[v25];
            if ( v26 != 0 )
              v23 = v26;
          }
          if ( V_stricmp_fast(&stru_32DB07A.m_HierarchyConstraints.m_hash, v23) == 0 )
            break;
          v19 += 8;
          if ( v19 == v20 )
          {
            flDecalScale = 1.0;
            goto LABEL_25;
          }
        }
        v27 = v9[6];
        v28 = 0;
        if ( v27 != 0 )
          v28 = v18 + v27;
        flDecalScale = *&v28[v19 + 4];
LABEL_25:
        v29 = v9[7];
        if ( v29 <= 0 )
          goto LABEL_125;
        v30 = 0;
        v31 = 8LL * (v29 - 1) + 8;
        while ( 1 )
        {
          v32 = v9[6];
          v33 = 0;
          if ( v32 != 0 )
            v33 = v18 + v32;
          v34 = "";
          v35 = &v33[v30];
          v36 = *v35;
          if ( v36 != 0 )
          {
            v37 = &v35[v36];
            if ( v37 != 0 )
              v34 = v37;
          }
          if ( V_stricmp_fast(&stru_32DB07A.m_kinematicsToUpdate.m_Size + 5, v34) == 0 )
            break;
          v30 += 8;
          if ( v30 == v31 )
          {
            flMappingDepth = 4.0;
            goto LABEL_37;
          }
        }
        v38 = v9[6];
        v39 = 0;
        if ( v38 != 0 )
          v39 = v18 + v38;
        flMappingDepth = *&v39[v30 + 4];
LABEL_37:
        v40 = v9[7];
        if ( v40 <= 0 )
          goto LABEL_126;
        v41 = 0;
        v42 = 8LL * (v40 - 1) + 8;
        while ( 1 )
        {
          v43 = v9[6];
          v44 = 0;
          if ( v43 != 0 )
            v44 = v18 + v43;
          v45 = "";
          v46 = &v44[v41];
          v47 = *v46;
          if ( v47 != 0 )
          {
            v48 = &v46[v47];
            if ( v48 != 0 )
              v45 = v48;
          }
          if ( V_stricmp_fast(&stru_32DB07A.m_kinematicsToUpdate.m_Memory.m_nAllocationCount, v45) == 0 )
            break;
          v41 += 8;
          if ( v41 == v42 )
          {
            flDecalScaleVariation = 0.25;
            goto LABEL_49;
          }
        }
        v49 = v9[6];
        v50 = 0;
        if ( v49 != 0 )
          v50 = v18 + v49;
        flDecalScaleVariation = *&v50[v41 + 4];
LABEL_49:
        v51 = v9[7];
        if ( v51 <= 0 )
          goto LABEL_127;
        v52 = 0;
        v53 = 8LL * (v51 - 1) + 8;
        while ( 1 )
        {
          v54 = v9[6];
          v55 = 0;
          if ( v54 != 0 )
            v55 = v18 + v54;
          v56 = "";
          v57 = &v55[v52];
          v58 = *v57;
          if ( v58 != 0 )
          {
            v59 = &v57[v58];
            if ( v59 != 0 )
              v56 = v59;
          }
          if ( V_stricmp_fast(&stru_32DB07A.m_hierarchyJointsToUpdate.m_Memory.m_pMemory + 4, v56) == 0 )
            break;
          v52 += 8;
          if ( v52 == v53 )
          {
            flDecalStartFadeTime = 10.0;
            goto LABEL_61;
          }
        }
        v60 = v9[6];
        v61 = 0;
        if ( v60 != 0 )
          v61 = v18 + v60;
        flDecalStartFadeTime = *&v61[v52 + 4];
LABEL_61:
        v62 = v9[7];
        if ( v62 <= 0 )
        {
          flAnimationLifeSpan = flDecalStartFadeTime + 3.0;
          goto LABEL_128;
        }
        v63 = 0;
        v64 = 8LL * (v62 - 1) + 8;
        while ( 1 )
        {
          v65 = v9[6];
          v66 = 0;
          if ( v65 != 0 )
            v66 = v18 + v65;
          v67 = "";
          v68 = &v66[v63];
          v69 = *v68;
          if ( v69 != 0 )
          {
            v70 = &v68[v69];
            if ( v70 != 0 )
              v67 = v70;
          }
          if ( V_stricmp_fast(&stru_32DB07A.m_impactSounds.m_Size + 7, v67) == 0 )
            break;
          v63 += 8;
          if ( v63 == v64 )
          {
            flDecalFadeDuration = 3.0;
            goto LABEL_73;
          }
        }
        v71 = v9[6];
        v72 = 0;
        if ( v71 != 0 )
          v72 = v18 + v71;
        flDecalFadeDuration = *&v72[v63 + 4];
LABEL_73:
        v73 = v9[7];
        if ( v73 <= 0 )
        {
          flAnimationLifeSpan = flDecalStartFadeTime + flDecalFadeDuration;
          goto LABEL_129;
        }
        v74 = 0;
        v75 = 8LL * (v73 - 1) + 8;
        while ( 1 )
        {
          v76 = v9[6];
          v77 = 0;
          if ( v76 != 0 )
            v77 = v18 + v76;
          v78 = "";
          v79 = &v77[v74];
          v80 = *v79;
          if ( v80 != 0 )
          {
            v81 = &v79[v80];
            if ( v81 != 0 )
              v78 = v81;
          }
          if ( V_stricmp_fast(&stru_32DB07A.m_breakSounds.m_Size + 1, v78) == 0 )
            break;
          v74 += 8;
          if ( v74 == v75 )
          {
            flSpecExp = 100.0;
            goto LABEL_85;
          }
        }
        v82 = v9[6];
        v83 = 0;
        if ( v82 != 0 )
          v83 = v18 + v82;
        flSpecExp = *&v83[v74 + 4];
LABEL_85:
        v84 = v9[7];
        if ( v84 > 0 )
        {
          v85 = 0;
          v86 = 8LL * (v84 - 1) + 8;
          while ( 1 )
          {
            v87 = v9[6];
            v88 = 0;
            if ( v87 != 0 )
              v88 = v18 + v87;
            v89 = "";
            v90 = &v88[v85];
            v91 = *v90;
            if ( v91 != 0 )
            {
              v92 = &v90[v91];
              if ( v92 != 0 )
                v89 = v92;
            }
            if ( V_stricmp_fast(&stru_32DB07A.m_breakSounds.m_Memory.m_nAllocationCount + 2, v89) == 0 )
              break;
            v85 += 8;
            if ( v85 == v86 )
            {
              flAnimationScale = 1.0;
              goto LABEL_97;
            }
          }
          v93 = v9[6];
          v94 = 0;
          if ( v93 != 0 )
            v94 = v18 + v93;
          flAnimationScale = *&v94[v85 + 4];
LABEL_97:
          v95 = v9[7];
          flAnimationLifeSpan = flDecalStartFadeTime + flDecalFadeDuration;
          if ( v95 > 0 )
          {
            v96 = 0;
            v97 = 8LL * (v95 - 1) + 8;
            while ( 1 )
            {
              v98 = v9[6];
              v99 = 0;
              if ( v98 != 0 )
                v99 = v18 + v98;
              v100 = "";
              v101 = &v99[v96];
              v102 = *v101;
              if ( v102 != 0 )
              {
                v103 = &v101[v102];
                if ( v103 != 0 )
                  v100 = v103;
              }
              if ( V_stricmp_fast(&stru_32DB07A.m_scrapeSounds.m_Memory.m_pMemory + 1, v100) == 0 )
                break;
              v96 += 8;
              if ( v96 == v97 )
                goto LABEL_109;
            }
            v104 = v9[6];
            v105 = 0;
            if ( v104 != 0 )
              v105 = v18 + v104;
            flAnimationLifeSpan = *&v105[v96 + 4];
          }
          goto LABEL_109;
        }
        flAnimationLifeSpan = flDecalStartFadeTime + flDecalFadeDuration;
LABEL_130:
        flAnimationScale = 1.0;
LABEL_109:
        v106 = v9[5];
        v107 = "";
        if ( v106 != 0 )
        {
          v108 = v9 + v106 + 20;
          if ( v108 != 0 )
            v107 = v108;
        }
        CDecalGameSystem::AddDecalMaterialParams(
          this,
          v107,
          flMappingWidth,
          flMappingHeight,
          flMappingDepth,
          flDecalScale,
          flDecalScaleVariation,
          flDecalStartFadeTime,
          flDecalFadeDuration,
          flSpecExp,
          flAnimationScale,
          flAnimationLifeSpan);
LABEL_113:
        v7 += 32;
        if ( v7 == v122 )
          return;
      }
      flDecalScale = 1.0;
LABEL_125:
      flMappingDepth = 4.0;
LABEL_126:
      flDecalScaleVariation = 0.25;
LABEL_127:
      flAnimationLifeSpan = 13.0;
      flDecalStartFadeTime = 10.0;
LABEL_128:
      flDecalFadeDuration = 3.0;
LABEL_129:
      flSpecExp = 100.0;
      goto LABEL_130;
    }
  }
}


// CDecalGameSystem::UpdateSheetDataForSceneObjects  (line 640, @0x0000000001f32610, libserver.so)  // inlines: AddToHead, AddToHead<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 4, CRenderAttributes::TextureAttrForStorage_t>::OverflowChunk_t, CUtlAttributeList<CRenderAttributes::TextureAttr_t, 4, CRenderAttributes::TextureAttrForStorage_t>::OverflowChunk_t>, CUtlAttributeListChunk, CWeakHandle, Clear, CmpEqSIMD<(ESIMDLevel)20u>, EnsureExtraData, FindIndexOfMatch, FromUntypedHandleUnchecked, Head, Init, OverflowChunk_t, ReleaseValueFromAttribute<CRenderAttributes::TextureAttrForStorage_t>, SetTextureValue, SetValue, StaticInvalidHandle, StoreAlignedIntSIMD<(ESIMDLevel)20u>, TestSignSIMD<(ESIMDLevel)20u>, TextureAttrForStorage_t, _mm_cmpeq_epi32, _mm_movemask_ps, _mm_store_ps, begin, memset, operator CWeakHandle<InfoForResourceTypeCTextureBase>, operator++, operator=
// calls: operator new
// globals: g_hDecalAlbedoTexture, g_hDecalNormalTexture
void __fastcall CDecalGameSystem::UpdateSheetDataForSceneObjects(CDecalGameSystem *const this)
{
  const __m128i *v1; // rdx
  fltx4_0 *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __m128i v5; // xmm0
  __int64 v7; // rbx
  __m128i si128; // xmm4
  __m128i v9; // xmm3
  CSceneObject *v10; // r15
  const ResourceBindingBase_t *m_pBinding; // r14
  const __m128i *m_pExtraData; // r13
  __m128i v13; // xmm1
  int v14; // eax
  __int64 v15; // rdi
  const __m128i *v16; // rax
  const __m128i *v17; // rdx
  __int64 v18; // rsi
  const __m128i *v19; // r13
  fltx4_0 *v20; // rcx
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  const __m128i *v24; // r13
  __int64 v25; // rax
  CSceneObject *v26; // r15
  const ResourceBindingBase_t *v27; // r14
  const __m128i *v28; // r13
  __m128i v29; // xmm1
  int v30; // eax
  __int64 v31; // rdi
  const __m128i *v32; // rax
  __int64 v33; // rsi
  const __m128i *v34; // r13
  int v35; // eax
  int v36; // eax
  __int64 v37; // rcx
  const __m128i *v38; // r13
  __int64 v39; // rax
  fltx4_0 *v40; // rax
  fltx4_0 *v41; // rdi
  fltx4_0 *v42; // rsi
  __int64 v43; // rsi
  fltx4_0 *v44; // rdx
  fltx4_0 *v45; // rax
  fltx4_0 *v46; // rdi
  fltx4_0 *v47; // rsi
  __int64 v48; // rsi
  fltx4_0 *v49; // rdx
  __m128i v50; // [rsp+0h] [rbp-60h] BYREF
  __m128i v51; // [rsp+10h] [rbp-50h] BYREF
  __m128i v52[4]; // [rsp+20h] [rbp-40h] BYREF

  v5 = 0;
  v7 = 0;
  si128 = _mm_load_si128(&xmmword_32E8970);
  v9 = _mm_load_si128(&xmmword_32E8980);
  do
  {
    while ( 1 )
    {
      v10 = this->m_pSceneObjects[v7];
      m_pBinding = g_hDecalAlbedoTexture.m_pBinding;
      m_pExtraData = v10->m_pExtraData;
      if ( m_pExtraData == 0 )
      {
        (*(*g_pSceneSystem + 952LL))(
          g_pSceneSystem,
          v10,
          v1,
          v2,
          v3,
          v4,
          v5.m128i_i64[0],
          v5.m128i_i64[1],
          v9.m128i_i64[0],
          v9.m128i_i64[1],
          si128.m128i_i64[0],
          si128.m128i_i64[1]);
        m_pExtraData = v10->m_pExtraData;
        v5 = _mm_load_si128(&v50);
        v9 = _mm_load_si128(&v51);
        si128 = _mm_load_si128(v52);
      }
      v13 = _mm_load_si128(m_pExtraData + 29);
      v14 = _mm_movemask_ps(_mm_cmpeq_epi32(v13, si128));
      if ( v14 != 0 )
      {
        v17 = g_nSIMDBitMaskToIndex;
        v18 = g_nSIMDBitMaskToIndex[v14];
        if ( v18 != -1 )
        {
          v19 = m_pExtraData + 29;
LABEL_11:
          v20 = &v19[v18 + 1];
          v20->m128_u64[0] = m_pBinding;
          v20->m128_i32[2] = -1;
          goto LABEL_23;
        }
      }
      v15 = m_pExtraData[34].m128i_i64[1];
      if ( v15 != 0 )
      {
        v16 = m_pExtraData[34].m128i_i64[1];
        while ( 1 )
        {
          LODWORD(v17) = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(v16 + 1), si128));
          if ( v17 != 0 )
          {
            v17 = v17;
            v18 = g_nSIMDBitMaskToIndex[v17];
            if ( v18 != -1 )
              break;
          }
          v16 = v16->m128i_i64[0];
          if ( v16 == 0 )
            goto LABEL_12;
        }
        v19 = v16 + 1;
        goto LABEL_11;
      }
LABEL_12:
      v21 = _mm_movemask_ps(_mm_cmpeq_epi32(v13, v5));
      if ( v21 == 0 || (v17 = g_nSIMDBitMaskToIndex, (v23 = g_nSIMDBitMaskToIndex[v21]) == -1) )
      {
        if ( v15 == 0 )
        {
LABEL_56:
          v50 = v5;
          v51 = v9;
          v52[0] = si128;
          v45 = operator new(0x60u);
          v5 = _mm_load_si128(&v50);
          v20 = v45 + 2;
          v9 = _mm_load_si128(&v51);
          si128 = _mm_load_si128(v52);
          v46 = v45 + 1;
          v47 = v45 + 2;
          do
          {
            v47->m128_u64[0] = 0;
            ++v47;
            v47[-1].m128_i32[2] = -1;
          }
          while ( v47 != &v45[6] );
          v45[1].m128_u64[0] = 0;
          v48 = 0;
          v45[1].m128_u64[1] = 0;
          do
          {
            v4 = v46->m128_u32[v48];
            if ( v4 != 0 )
              v45[v48 + 2].m128_u64[0] = 0;
            ++v48;
          }
          while ( v48 != 4 );
          if ( v46 != v20 )
          {
            v49 = v45 + 1;
            do
              *v49++ = Four_Zeros;
            while ( v20 != v49 );
          }
          v17 = m_pExtraData[34].m128i_i64[1];
          v45->m128_u64[0] = v17;
          m_pExtraData[34].m128i_i64[1] = v45;
          v24 = &v45[1];
          v25 = 0;
          goto LABEL_22;
        }
        v17 = m_pExtraData[34].m128i_i64[1];
        while ( 1 )
        {
          v22 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(v17 + 1), v5));
          if ( v22 != 0 )
          {
            v23 = g_nSIMDBitMaskToIndex[v22];
            if ( v23 != -1 )
              break;
          }
          v17 = v17->m128i_i64[0];
          if ( v17 == 0 )
            goto LABEL_56;
        }
        v24 = v17 + 1;
      }
      else
      {
        v24 = m_pExtraData + 29;
      }
      v25 = v23;
      v20 = &v24[v23 + 1];
LABEL_22:
      v24->m128i_i32[v25] = -989679603;
      v20->m128_u64[0] = m_pBinding;
      v20->m128_i32[2] = -1;
LABEL_23:
      v26 = this->m_pSceneObjects[v7];
      v27 = g_hDecalNormalTexture.m_pBinding;
      v28 = v26->m_pExtraData;
      if ( v28 == 0 )
      {
        (*(*g_pSceneSystem + 952LL))(
          g_pSceneSystem,
          v26,
          v17,
          v20,
          v3,
          v4,
          v5.m128i_i64[0],
          v5.m128i_i64[1],
          v9.m128i_i64[0],
          v9.m128i_i64[1],
          si128.m128i_i64[0],
          si128.m128i_i64[1]);
        v28 = v26->m_pExtraData;
        v5 = _mm_load_si128(&v50);
        v9 = _mm_load_si128(&v51);
        si128 = _mm_load_si128(v52);
      }
      v29 = _mm_load_si128(v28 + 29);
      v30 = _mm_movemask_ps(_mm_cmpeq_epi32(v29, v9));
      if ( v30 == 0 )
        break;
      v1 = g_nSIMDBitMaskToIndex;
      v33 = g_nSIMDBitMaskToIndex[v30];
      if ( v33 == -1 )
        break;
      v34 = v28 + 29;
LABEL_32:
      ++v7;
      v2 = &v34[v33 + 1];
      v2->m128_u64[0] = v27;
      v2->m128_i32[2] = -1;
      if ( v7 == 3 )
        return;
    }
    v31 = v28[34].m128i_i64[1];
    if ( v31 != 0 )
    {
      v32 = v28[34].m128i_i64[1];
      while ( 1 )
      {
        LODWORD(v1) = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(v32 + 1), v9));
        if ( v1 != 0 )
        {
          v1 = v1;
          v33 = g_nSIMDBitMaskToIndex[v1];
          if ( v33 != -1 )
            break;
        }
        v32 = v32->m128i_i64[0];
        if ( v32 == 0 )
          goto LABEL_34;
      }
      v34 = v32 + 1;
      goto LABEL_32;
    }
LABEL_34:
    v35 = _mm_movemask_ps(_mm_cmpeq_epi32(v29, v5));
    if ( v35 != 0 )
    {
      v1 = g_nSIMDBitMaskToIndex;
      v37 = g_nSIMDBitMaskToIndex[v35];
      if ( v37 != -1 )
      {
        v38 = v28 + 29;
LABEL_43:
        v39 = v37;
        v2 = &v38[v37 + 1];
        goto LABEL_44;
      }
    }
    if ( v31 != 0 )
    {
      v1 = v28[34].m128i_i64[1];
      while ( 1 )
      {
        v36 = _mm_movemask_ps(_mm_cmpeq_epi32(_mm_load_si128(v1 + 1), v5));
        if ( v36 != 0 )
        {
          v37 = g_nSIMDBitMaskToIndex[v36];
          if ( v37 != -1 )
            break;
        }
        v1 = v1->m128i_i64[0];
        if ( v1 == 0 )
          goto LABEL_46;
      }
      v38 = v1 + 1;
      goto LABEL_43;
    }
LABEL_46:
    v50 = v5;
    v51 = v9;
    v52[0] = si128;
    v40 = operator new(0x60u);
    v5 = _mm_load_si128(&v50);
    v2 = v40 + 2;
    v9 = _mm_load_si128(&v51);
    si128 = _mm_load_si128(v52);
    v41 = v40 + 1;
    v42 = v40 + 2;
    do
    {
      v42->m128_u64[0] = 0;
      ++v42;
      v42[-1].m128_i32[2] = -1;
    }
    while ( v42 != &v40[6] );
    v40[1].m128_u64[0] = 0;
    v43 = 0;
    v40[1].m128_u64[1] = 0;
    do
    {
      v3 = v41->m128_u32[v43];
      if ( v3 != 0 )
        v40[v43 + 2].m128_u64[0] = 0;
      ++v43;
    }
    while ( v43 != 4 );
    if ( v41 != v2 )
    {
      v44 = v40 + 1;
      do
        *v44++ = Four_Zeros;
      while ( v2 != v44 );
    }
    v1 = v28[34].m128i_i64[1];
    v40->m128_u64[0] = v1;
    v28[34].m128i_i64[1] = v40;
    v38 = &v40[1];
    v39 = 0;
LABEL_44:
    v38->m128i_i32[v39] = -1113614206;
    ++v7;
    v2->m128_u64[0] = v27;
    v2->m128_i32[2] = -1;
  }
  while ( v7 != 3 );
}


// CDecalGameSystem::AddDecalMaterialParams  (line 650, @0x0000000001f5f3f0, libserver.so)  // inlines: AddToTail, CDecalMaterialParams, Construct<CDecalMaterialParams>, CopyConstruct<NameToDecalMaterialParamsMapping_t>, DoFind, Element, GrowMemory, Insert, MakeStringToken, operator[]
// calls: CDecalGameSystem::LookupDecalMaterialIndex, LoggingSystem_IsChannelEnabled, MurmurHash2LowerCase, RegisterStringToken, LoggingSystem_Log, CUtlMemory<CDecalMaterialParams, int>::Grow, CUtlMemory<NameToDecalMaterialParamsMapping_t, int>::Grow
// callers: CDecalGameSystem::LoadDecalMaterialParamsFromSheet
// strings: "Trying to add duplicate decal material %s.\n"
// globals: LOG_DECALGAMESYSTEM
void __fastcall CDecalGameSystem::AddDecalMaterialParams(
        CDecalGameSystem *const this,
        const char *pName,
        float flMappingWidth,
        float flMappingHeight,
        float flMappingDepth,
        float flDecalScale,
        float flDecalScaleVariation,
        float flDecalStartFadeTime,
        float flDecalFadeDuration,
        float flSpecExp,
        float flAnimationScale,
        float flAnimationLifeSpan)
{
  uint32 v12; // eax
  int v15; // eax
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm3_4
  float v20; // xmm4_4
  float v21; // xmm5_4
  float v22; // xmm6_4
  float v23; // xmm7_4
  int m_Size; // r12d
  int v25; // eax
  CDecalMaterialParams *v26; // rdx
  CDecalMaterialParams *v27; // rax
  unsigned int v28; // eax
  signed int v29; // edx
  CUtlVector<NameToDecalMaterialParamsMapping_t,CUtlMemory<NameToDecalMaterialParamsMapping_t,int> > *v30; // r13
  int v31; // r12d
  __int64 v32; // r14
  int v33; // r12d
  int v34; // r15d
  int v35; // eax
  int v36; // r15d
  CUtlVector<NameToDecalMaterialParamsMapping_t,CUtlMemory<NameToDecalMaterialParamsMapping_t,int> > *v37; // r15
  __int64 v38; // rbx
  NameToDecalMaterialParamsMapping_t *v39; // rax
  float v40; // [rsp+4h] [rbp-7Ch]
  float flSpecExpa; // [rsp+8h] [rbp-78h]
  float flSpecExpb; // [rsp+8h] [rbp-78h]
  float flSpecExpc; // [rsp+8h] [rbp-78h]
  float flDecalFadeDurationa; // [rsp+Ch] [rbp-74h]
  float flDecalFadeDurationb; // [rsp+Ch] [rbp-74h]
  float flDecalFadeDurationc; // [rsp+Ch] [rbp-74h]
  float flDecalStartFadeTimea; // [rsp+10h] [rbp-70h]
  float flDecalStartFadeTimeb; // [rsp+10h] [rbp-70h]
  float flDecalStartFadeTimec; // [rsp+10h] [rbp-70h]
  float flDecalScaleVariationa; // [rsp+14h] [rbp-6Ch]
  float flDecalScaleVariationb; // [rsp+14h] [rbp-6Ch]
  float flDecalScaleVariationc; // [rsp+14h] [rbp-6Ch]
  float flDecalScalea; // [rsp+18h] [rbp-68h]
  float flDecalScaleb; // [rsp+18h] [rbp-68h]
  float flDecalScalec; // [rsp+18h] [rbp-68h]
  float flMappingDeptha; // [rsp+1Ch] [rbp-64h]
  float flMappingDepthb; // [rsp+1Ch] [rbp-64h]
  float flMappingDepthc; // [rsp+1Ch] [rbp-64h]
  float flMappingHeighta; // [rsp+20h] [rbp-60h]
  float flMappingHeightb; // [rsp+20h] [rbp-60h]
  float flMappingHeightd; // [rsp+20h] [rbp-60h]
  __int64 flMappingHeightc; // [rsp+20h] [rbp-60h]
  float flMappingWidtha; // [rsp+28h] [rbp-58h]
  float flMappingWidthb; // [rsp+28h] [rbp-58h]
  uint32 flMappingWidthc; // [rsp+28h] [rbp-58h]
  CUtlStringToken nameToken; // [rsp+30h] [rbp-50h] BYREF
  NameToDecalMaterialParamsMapping_t pair; // [rsp+40h] [rbp-40h] BYREF

  v12 = 0;
  if ( pName != 0 && *pName != 0 )
  {
    flSpecExpb = flSpecExp;
    flDecalFadeDurationb = flDecalFadeDuration;
    flDecalStartFadeTimeb = flDecalStartFadeTime;
    flDecalScaleVariationb = flDecalScaleVariation;
    flDecalScaleb = flDecalScale;
    flMappingDepthb = flMappingDepth;
    flMappingHeightb = flMappingHeight;
    flMappingWidthb = flMappingWidth;
    v12 = MurmurHash2LowerCase(pName, 0x31415926u);
    flMappingWidth = flMappingWidthb;
    flMappingHeight = flMappingHeightb;
    flMappingDepth = flMappingDepthb;
    flDecalScale = flDecalScaleb;
    flDecalScaleVariation = flDecalScaleVariationb;
    flDecalStartFadeTime = flDecalStartFadeTimeb;
    flDecalFadeDuration = flDecalFadeDurationb;
    flSpecExp = flSpecExpb;
    if ( g_bUpdateStringTokenDatabase )
    {
      v40 = flSpecExpb;
      flSpecExpc = flDecalFadeDurationb;
      flDecalFadeDurationc = flDecalStartFadeTimeb;
      flDecalStartFadeTimec = flDecalScaleVariationb;
      flDecalScaleVariationc = flDecalScaleb;
      flDecalScalec = flMappingDepthb;
      flMappingDepthc = flMappingHeightb;
      flMappingHeightd = flMappingWidthb;
      flMappingWidthc = v12;
      RegisterStringToken(v12, pName, 0, 1);
      flSpecExp = v40;
      flDecalFadeDuration = flSpecExpc;
      flDecalStartFadeTime = flDecalFadeDurationc;
      flDecalScaleVariation = flDecalStartFadeTimec;
      flDecalScale = flDecalScaleVariationc;
      flMappingDepth = flDecalScalec;
      flMappingHeight = flMappingDepthc;
      flMappingWidth = flMappingHeightd;
      v12 = flMappingWidthc;
    }
  }
  flSpecExpa = flSpecExp;
  flDecalFadeDurationa = flDecalFadeDuration;
  flDecalStartFadeTimea = flDecalStartFadeTime;
  flDecalScaleVariationa = flDecalScaleVariation;
  flDecalScalea = flDecalScale;
  flMappingDeptha = flMappingDepth;
  flMappingHeighta = flMappingHeight;
  flMappingWidtha = flMappingWidth;
  nameToken.m_nHashCode = v12;
  v15 = CDecalGameSystem::LookupDecalMaterialIndex(this, &nameToken);
  v16 = flMappingWidtha;
  v17 = flMappingHeighta;
  v18 = flMappingDeptha;
  v19 = flDecalScalea;
  v20 = flDecalScaleVariationa;
  v21 = flDecalStartFadeTimea;
  v22 = flDecalFadeDurationa;
  v23 = flSpecExpa;
  if ( v15 < 0 )
  {
    m_Size = this->m_decalMaterialParams.m_Size;
    v25 = m_Size;
    if ( m_Size == this->m_decalMaterialParams.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CDecalMaterialParams,int>::Grow(&this->m_decalMaterialParams.m_Memory, 1);
      v25 = this->m_decalMaterialParams.m_Size;
      v23 = flSpecExpa;
      v22 = flDecalFadeDurationa;
      v21 = flDecalStartFadeTimea;
      v20 = flDecalScaleVariationa;
      v19 = flDecalScalea;
      v18 = flMappingDeptha;
      v17 = flMappingHeighta;
      v16 = flMappingWidtha;
    }
    this->m_decalMaterialParams.m_Size = v25 + 1;
    v26 = &this->m_decalMaterialParams.m_Memory.m_pMemory[m_Size];
    if ( v26 != 0 )
    {
      v26->m_flMappingWidth = 64.0;
      v26->m_flMappingHeight = 64.0;
      v26->m_flMappingDepth = 16.0;
      v26->m_flDecalScale = 1.0;
      v26->m_flDecalScaleVariation = 0.25;
      v26->m_flDecalStartFadeTime = 10.0;
      v26->m_flDecalFadeDuration = 3.0;
      v26->m_flSpecExp = 50.0;
      v27 = &this->m_decalMaterialParams.m_Memory.m_pMemory[m_Size];
    }
    else
    {
      v27 = 0;
    }
    v27->m_flMappingWidth = v16;
    v27->m_flMappingHeight = v17;
    v27->m_flAnimationScale = flAnimationScale;
    v27->m_flMappingDepth = v18;
    v27->m_flDecalScale = v19;
    v27->m_flDecalScaleVariation = v20;
    v27->m_flDecalStartFadeTime = v21;
    v27->m_flDecalFadeDuration = v22;
    v27->m_flSpecExp = v23;
    v27->m_flAnimationLifeSpan = flAnimationLifeSpan;
    pair.m_nMaterialParamIndex = m_Size;
    pair.m_nNameHash = nameToken;
    v28 = this->m_nameToParamMapping.m_KeyFunc(&pair);
    if ( this->m_nameToParamMapping.m_bPowerOfTwo )
      v29 = this->m_nameToParamMapping.m_ModMask & v28;
    else
      v29 = v28 % this->m_nameToParamMapping.m_Buckets.m_Size;
    flMappingHeightc = v29;
    v30 = &this->m_nameToParamMapping.m_Buckets.m_Memory.m_pMemory[flMappingHeightc];
    v31 = v30->m_Size;
    if ( v30->m_Size <= 0 )
    {
      v36 = 0;
    }
    else
    {
      v32 = 0;
      v33 = 0;
      v34 = v30->m_Size;
      while ( !this->m_nameToParamMapping.m_CompareFunc(&v30->m_Memory.m_pMemory[v32], &pair) )
      {
        ++v33;
        ++v32;
        if ( v33 == v34 )
          goto LABEL_21;
      }
      v35 = v34;
      v36 = v33;
      v31 = v35;
    }
    if ( v31 == v36 )
    {
LABEL_21:
      v37 = &this->m_nameToParamMapping.m_Buckets.m_Memory.m_pMemory[flMappingHeightc];
      v38 = v37->m_Size;
      if ( v38 == v37->m_Memory.m_nAllocationCount )
        CUtlMemory<NameToDecalMaterialParamsMapping_t,int>::Grow(&v37->m_Memory, 1);
      ++v37->m_Size;
      v39 = &v37->m_Memory.m_pMemory[v38];
      if ( v39 != 0 )
        *v39 = pair;
    }
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_DECALGAMESYSTEM, 2) != 0 )
  {
    LoggingSystem_Log(LOG_DECALGAMESYSTEM, 2, "Trying to add duplicate decal material %s.\n", pName);
  }
}


// CDecalGameSystem::LookupDecalMaterialIndex  (line 681, @0x0000000001f32b40, libserver.so)  // inlines: BuildHandle, DoFind, Element, Find, GetBucketIndex, operator[]
// callers: CDecalGameSystem::DecalShoot, CDecalGameSystem::CreateSource1ToSource2Mapping, CDecalGameSystem::AddDecalMaterialParams
int __fastcall CDecalGameSystem::LookupDecalMaterialIndex(
        CDecalGameSystem *const this,
        const CUtlStringToken *const pDecalMaterial)
{
  unsigned int v3; // eax
  CUtlVector<NameToDecalMaterialParamsMapping_t,CUtlMemory<NameToDecalMaterialParamsMapping_t,int> > *v4; // r13
  int m_Size; // r12d
  __int64 v6; // r14
  int v7; // r15d
  unsigned int v9; // [rsp+4h] [rbp-4Ch]
  NameToDecalMaterialParamsMapping_t pair; // [rsp+10h] [rbp-40h] BYREF

  pair.m_nMaterialParamIndex = 0;
  pair.m_nNameHash = pDecalMaterial->m_nHashCode;
  v3 = this->m_nameToParamMapping.m_KeyFunc(&pair);
  if ( this->m_nameToParamMapping.m_bPowerOfTwo )
    v9 = this->m_nameToParamMapping.m_ModMask & v3;
  else
    v9 = v3 % this->m_nameToParamMapping.m_Buckets.m_Size;
  v4 = &this->m_nameToParamMapping.m_Buckets.m_Memory.m_pMemory[v9];
  m_Size = v4->m_Size;
  if ( v4->m_Size <= 0 )
  {
    v7 = 0;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    while ( !this->m_nameToParamMapping.m_CompareFunc(&v4->m_Memory.m_pMemory[v6], &pair) )
    {
      ++v7;
      ++v6;
      if ( v7 == m_Size )
        return -1;
    }
  }
  if ( m_Size == v7 )
    return -1;
  if ( (v7 | (v9 << 16)) == 0xFFFFFFFF )
    return -1;
  return this->m_nameToParamMapping.m_Buckets.m_Memory.m_pMemory[(v7 | (v9 << 16)) >> 16].m_Memory.m_pMemory[v7].m_nMaterialParamIndex;
}


// CDecalGameSystem::GetVBTypeForDecal  (line 695, @0x0000000001f32cb0, libserver.so)
__int64 __fastcall CDecalGameSystem::GetVBTypeForDecal(
        CDecalGameSystem *const this,
        bool bTranslucent,
        _DWORD *nEntityHandleIndex)
{
  __int64 result; // rax

  result = 2;
  if ( !bTranslucent )
    return *nEntityHandleIndex != -1;
  return result;
}


// CDecalGameSystem::AddDecalAndAssignToSlot  (line 711, @0x0000000001f339b0, libserver.so)  // inlines: CDecalInfo, CEntityHandle, CNetMessagePB, FromIndex, GetModel, GetVBTypeForDecal, PlaceDecalEvent_t, ResourceHandleToData<InfoForResourceTypeCModel>, operator CWeakHandle<InfoForResourceTypeCModel>, operator int, operator[], set_depth, set_has_depth, set_has_width, set_height, set_width, ~CDecalInfo, ~CNetMessagePB, ~PlaceDecalEvent_t
// calls: operator new, CMsgPlaceDecalEvent::CMsgPlaceDecalEvent, CMsgPlaceDecalEvent::CopyFrom, CDecalGameSystem::GetSkeletonInstance, CModel::NumBones, CMsgPlaceDecalEvent::~CMsgPlaceDecalEvent, operator delete, CDecalMaterialParams::ComputeDecalSize, CDecalGameSystem::AssignToFreeVBSlot, CDecalInfo::~CDecalInfo, _Unwind_Resume
// callers: CDecalGameSystem::AddWorldDecal, CDecalGameSystem::AddRigidEntityDecal, CDecalGameSystem::AddSkinnedEntityDecal
CDecalInfo *__fastcall CDecalGameSystem::AddDecalAndAssignToSlot(
        CDecalGameSystem *const this,
        const CMsgPlaceDecalEvent *msg,
        __m128i a3,
        float flPlacementTime)
{
  int v4; // r14d
  _DWORD *v7; // rax
  CMsgPlaceDecalEvent *v8; // r15
  _DWORD *v9; // rbx
  int v10; // eax
  DecalVBType_t v11; // r14d
  __int64 v12; // rax
  _DWORD *v13; // r14
  CUtlStringToken v14; // edx
  CSkeletonInstance *SkeletonInstance; // rax
  const ResourceBindingBase_t *m_pBinding; // rax
  const CModel *m_pData; // rdi
  int v18; // r12d
  __int64 v20; // rax
  int v21; // edx
  float v22; // xmm0_4
  CDecalMaterialParams *v23; // rax
  __int64 v24; // [rsp+0h] [rbp-58h]
  float w; // [rsp+10h] [rbp-48h] BYREF
  float h; // [rsp+14h] [rbp-44h] BYREF
  float d[16]; // [rsp+18h] [rbp-40h] BYREF

  v4 = _mm_cvtsi128_si32(a3);
  v7 = operator new(0x98u);
  v8 = (v7 + 14);
  *v7 = 0;
  v9 = v7;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v7[6] = 0;
  v7[7] = -1;
  *(v7 + 4) = 0;
  *(v7 + 5) = 0;
  *(v7 + 6) = 0;
  CMsgPlaceDecalEvent::CMsgPlaceDecalEvent((v7 + 14));
  *(v9 + 7) = off_3FB1CF0;
  v9[36] = -1;
  CMsgPlaceDecalEvent::CopyFrom(v8, msg);
  v10 = *(msg + 12);
  v9[3] = v4;
  v11 = DecalVBType_t::DECAL_VB_TRANSLUCENT;
  *(v9 + 4) = 0;
  v9[36] = v10;
  if ( *(msg + 84) == 0 )
    v11 = *(msg + 18) != -1;
  v12 = *(msg + 12);
  if ( v12 >= this->m_S1ToS2DecalMapping.m_Size
    || (v20 = this->m_S1ToS2DecalMapping.m_Memory.m_pMemory[v12]) < 0
    || v20 >= this->m_decalMaterialParams.m_Size )
  {
    v9[4] = 2139095039;
    v9[5] = 0;
    *v9 = 0;
    v9[1] = 0;
    v9[2] = 0;
  }
  else
  {
    v9[36] = v20;
    v24 = v20;
    CDecalMaterialParams::ComputeDecalSize(&this->m_decalMaterialParams.m_Memory.m_pMemory[v20], &w, &h, d);
    v21 = v9[18];
    v9[29] = LODWORD(w);
    v9[30] = LODWORD(h);
    v22 = d[0];
    v9[18] = v21 | 0x1C0;
    *(v9 + 31) = v22;
    v23 = &this->m_decalMaterialParams.m_Memory.m_pMemory[v24];
    v9[4] = LODWORD(v23->m_flDecalStartFadeTime);
    v9[5] = LODWORD(v23->m_flDecalFadeDuration);
    *v9 = LODWORD(v23->m_flSpecExp);
    v9[1] = LODWORD(v23->m_flAnimationScale);
    v9[2] = LODWORD(v23->m_flAnimationLifeSpan);
    CDecalGameSystem::AssignToFreeVBSlot(this, v9, v11);
  }
  v9[7] = -1;
  v13 = v9;
  if ( *(msg + 18) != -1 && *(msg + 20) >= 0 )
  {
    v14.m_nHashCode = *(msg + 19);
    d[0] = *(msg + 18);
    SkeletonInstance = CDecalGameSystem::GetSkeletonInstance(this, d, v14);
    if ( SkeletonInstance == 0 )
    {
      CDecalInfo::~CDecalInfo(v9);
      v13 = 0;
      operator delete(v9);
      return v13;
    }
    m_pBinding = SkeletonInstance->m_modelState.m_hModel.m_Value.m_pBinding;
    if ( m_pBinding == 0
      || m_pBinding->m_nRefCount.m_value <= 0
      || (m_pData = m_pBinding->m_pData, m_pBinding->m_pData == 0) )
    {
      if ( *(v9 + 4) == 0 )
        goto LABEL_14;
      goto LABEL_13;
    }
    v18 = *(msg + 20);
    v13 = v9;
    v9[7] = v18;
    if ( v18 >= CModel::NumBones(m_pData) )
    {
      if ( *(v9 + 4) == 0 )
      {
LABEL_14:
        v13 = 0;
        *(v9 + 7) = &off_3FB1C30;
        CMsgPlaceDecalEvent::~CMsgPlaceDecalEvent(v8);
        operator delete(v9);
        return v13;
      }
LABEL_13:
      (*(*g_pMeshSystem + 144LL))(g_pMeshSystem);
      goto LABEL_14;
    }
  }
  return v13;
}


// CDecalGameSystem::DeleteDecalAndFreeSlot  (line 834, @0x0000000001f32cd0, libserver.so)  // inlines: GetVBTypeForDecal, operator[], ~CDecalInfo, ~CNetMessagePB, ~PlaceDecalEvent_t
// calls: CMsgPlaceDecalEvent::~CMsgPlaceDecalEvent, operator delete
// callers: CDecalGameSystem::FreeWorldDecal, CDecalGameSystem::FreeRigidEntityDecal, CDecalGameSystem::FreeSkinnedEntityDecal, CDecalGameSystem::FreeDecal, CDecalGameSystem::DestroyDecalList
void __fastcall CDecalGameSystem::DeleteDecalAndFreeSlot(CDecalGameSystem *const this, CDecalInfo *pDecal)
{
  __int64 v2; // rax

  v2 = 2;
  if ( *(pDecal + 140) == 0 )
    v2 = *(pDecal + 32) != -1;
  this->m_VBSlotUsed[v2].m_Memory.m_pMemory[*(pDecal + 6)] = 0;
  if ( *(pDecal + 4) != 0 )
    (*(*g_pMeshSystem + 144LL))(g_pMeshSystem);
  *(pDecal + 7) = &off_3FB1C30;
  CMsgPlaceDecalEvent::~CMsgPlaceDecalEvent((pDecal + 56));
  operator delete(pDecal);
}


// CDecalGameSystem::AddWorldDecal  (line 842, @0x0000000001f33cd0, libserver.so)  // inlines: AddToDTailWithTailPtr<CDecalInfo>, AddToTail
// calls: CDecalGameSystem::AddDecalAndAssignToSlot
void __fastcall CDecalGameSystem::AddWorldDecal(
        CDecalGameSystem *const this,
        const CMsgPlaceDecalEvent *msg,
        __m128i a3,
        float flPlacementTime)
{
  CDecalInfo *v5; // rax
  bool v6; // zf

  v5 = CDecalGameSystem::AddDecalAndAssignToSlot(this, msg, a3, flPlacementTime);
  if ( v5 != 0 )
  {
    v6 = this->m_worldDecals.m_pTailPtr == 0;
    *(v5 + 5) = 0;
    if ( v6 )
    {
      *(v5 + 6) = 0;
      this->m_worldDecals.m_pHead = v5;
    }
    else
    {
      *(v5 + 6) = this->m_worldDecals.m_pTailPtr;
      *(this->m_worldDecals.m_pTailPtr + 5) = v5;
    }
    this->m_worldDecals.m_pTailPtr = v5;
  }
}


// CDecalGameSystem::AddRigidEntityDecal  (line 852, @0x0000000001f5f2d0, libserver.so)  // inlines: AddToDTailWithTailPtr<CDecalInfo>, AddToTail, CEntityHandle, FromIndex
// calls: CDecalGameSystem::AddDecalAndAssignToSlot, CDecalGameSystem::FindOrCreateSkeletonInstanceDecalList
void __fastcall CDecalGameSystem::AddRigidEntityDecal(
        CDecalGameSystem *const this,
        uint32 *msg,
        __m128i a3,
        float flPlacementTime)
{
  CDecalInfo *v6; // rbx
  uint32 v7; // edx
  SkeletonInstanceDecalList_t *SkeletonInstanceDecalList; // rax
  bool v9; // zf
  CEntityHandle nEntityHandle; // [rsp+0h] [rbp-30h] BYREF

  v6 = CDecalGameSystem::AddDecalAndAssignToSlot(this, msg, a3, flPlacementTime);
  if ( v6 != 0 )
  {
    v7 = msg[19];
    nEntityHandle.m_Index = msg[18];
    SkeletonInstanceDecalList = CDecalGameSystem::FindOrCreateSkeletonInstanceDecalList(
                                  this,
                                  &nEntityHandle.m_Index,
                                  v7,
                                  &this->m_rigidEntityDecals);
    v9 = SkeletonInstanceDecalList->m_decalList.m_pTailPtr == 0;
    *(v6 + 5) = 0;
    if ( v9 )
    {
      *(v6 + 6) = 0;
      SkeletonInstanceDecalList->m_decalList.m_pHead = v6;
    }
    else
    {
      *(v6 + 6) = SkeletonInstanceDecalList->m_decalList.m_pTailPtr;
      *(SkeletonInstanceDecalList->m_decalList.m_pTailPtr + 5) = v6;
    }
    SkeletonInstanceDecalList->m_decalList.m_pTailPtr = v6;
  }
}


// CDecalGameSystem::AddSkinnedEntityDecal  (line 863, @0x0000000001f5f360, libserver.so)  // inlines: AddToDTailWithTailPtr<CDecalInfo>, AddToTail, CEntityHandle, FromIndex
// calls: CDecalGameSystem::AddDecalAndAssignToSlot, CDecalGameSystem::FindOrCreateSkeletonInstanceDecalList
void __fastcall CDecalGameSystem::AddSkinnedEntityDecal(
        CDecalGameSystem *const this,
        uint32 *msg,
        __m128i a3,
        float flPlacementTime)
{
  CDecalInfo *v6; // rbx
  uint32 v7; // edx
  SkeletonInstanceDecalList_t *SkeletonInstanceDecalList; // rax
  bool v9; // zf
  CEntityHandle nEntityHandle; // [rsp+0h] [rbp-30h] BYREF

  v6 = CDecalGameSystem::AddDecalAndAssignToSlot(this, msg, a3, flPlacementTime);
  if ( v6 != 0 )
  {
    v7 = msg[19];
    nEntityHandle.m_Index = msg[18];
    SkeletonInstanceDecalList = CDecalGameSystem::FindOrCreateSkeletonInstanceDecalList(
                                  this,
                                  &nEntityHandle.m_Index,
                                  v7,
                                  &this->m_skinnedEntityDecals);
    v9 = SkeletonInstanceDecalList->m_decalList.m_pTailPtr == 0;
    *(v6 + 5) = 0;
    if ( v9 )
    {
      *(v6 + 6) = 0;
      SkeletonInstanceDecalList->m_decalList.m_pHead = v6;
    }
    else
    {
      *(v6 + 6) = SkeletonInstanceDecalList->m_decalList.m_pTailPtr;
      *(SkeletonInstanceDecalList->m_decalList.m_pTailPtr + 5) = v6;
    }
    SkeletonInstanceDecalList->m_decalList.m_pTailPtr = v6;
  }
}


// CDecalGameSystem::OptionallyRetireDecal  (line 874, @0x0000000001f33800, libserver.so)
// calls: CDecalGameSystem::FreeDecal
// callers: CDecalGameSystem::UpdateWorldDecals, CDecalGameSystem::UpdateRigidEntityDecals, CDecalGameSystem::UpdateSkinnedEntityDecals, CDecalGameSystem::FrameBoundary
__int64 __fastcall CDecalGameSystem::OptionallyRetireDecal(
        CDecalGameSystem *const this,
        CDecalInfo *pDecal,
        float flTime,
        float *const flAlpha)
{
  float v4; // xmm0_4
  float v5; // xmm0_4

  v4 = (flTime - *(pDecal + 3)) - *(pDecal + 4);
  if ( v4 <= 0.0 )
  {
    *flAlpha = 1.0;
    return 0;
  }
  else
  {
    v5 = v4 / *(pDecal + 5);
    *flAlpha = 1.0 - v5;
    if ( (1.0 - v5) < 0.0 )
    {
      CDecalGameSystem::FreeDecal(this, pDecal);
      return 1;
    }
    else
    {
      return 0;
    }
  }
}


// CDecalGameSystem::AddDecalToBuffer  (line 896, @0x0000000001f32d50, libserver.so)
void __fastcall CDecalGameSystem::AddDecalToBuffer(
        CDecalGameSystem *const this,
        CDecalInfo *pDecal,
        VertexUpdateContext_t *pContext,
        const matrix3x4a_t *pTransform,
        float flAlpha,
        float flCurrentTime)
{
  ;
}


// CDecalGameSystem::GetSkeletonInstance  (line 917, @0x0000000001f32d60, libserver.so)  // inlines: GetComponent<CBodyComponent>, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, LookupSkeletonInstance, operator CEntityInstance*, operator[]
// calls: CBodyComponent::LookupGameSceneNode
// callers: CDecalGameSystem::AddDecalAndAssignToSlot, CDecalGameSystem::UpdateRigidEntityDecals, CDecalGameSystem::RenderDebuggingData, CDecalGameSystem::UpdateSkinnedEntityDecals
// globals: CEntityHandle::gm_pEntityList
CSkeletonInstance *__fastcall CDecalGameSystem::GetSkeletonInstance(
        CDecalGameSystem *const this,
        unsigned __int16 *nEntityHandleIndex,
        CUtlStringToken nSkeletonInstanceHash)
{
  int v3; // eax
  unsigned __int64 v4; // rsi
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rcx
  __int64 m_nBaseOffset; // rax
  CBodyComponent *v11; // rdi
  CGameSceneNode *v12; // rax

  v3 = *nEntityHandleIndex;
  if ( (*nEntityHandleIndex + 2) <= 1 )
    return 0;
  v4 = *nEntityHandleIndex;
  v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v4 >> 9) & 0x3F];
  if ( v5 == 0 )
    return 0;
  v6 = &v5[v4 & 0x1FF];
  if ( v6 == 0 )
    return 0;
  if ( v3 != v6->m_EHandle.m_Index )
    return 0;
  if ( v6->m_pInstance == 0 )
    return 0;
  m_pEntity = v6->m_pInstance->m_pEntity;
  m_pInstance = m_pEntity->m_pInstance;
  if ( m_pEntity->m_pInstance == 0 )
    return 0;
  m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
  if ( m_nBaseOffset == 0xFFFF )
    return 0;
  v11 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
  if ( v11 == 0 )
    return 0;
  v12 = CBodyComponent::LookupGameSceneNode(v11, nSkeletonInstanceHash);
  if ( v12 != 0 )
    return (*(v12->_vptr_CGameSceneNode + 9))(v12);
  else
    return 0;
}


// CDecalGameSystem::UpdateWorldDecals  (line 934, @0x0000000001f33850, libserver.so)  // inlines: Head
// calls: CDecalGameSystem::OptionallyRetireDecal
void __fastcall CDecalGameSystem::UpdateWorldDecals(
        CDecalGameSystem *const this,
        float a2,
        float flTime,
        VertexUpdateContext_t *pContext)
{
  CDecalInfo *m_pHead; // rsi
  CDecalInfo *v6; // rbx
  float flAlpha[9]; // [rsp+1Ch] [rbp-24h] BYREF

  m_pHead = this->m_worldDecals.m_pHead;
  if ( m_pHead != 0 )
  {
    while ( 1 )
    {
      v6 = *(m_pHead + 5);
      CDecalGameSystem::OptionallyRetireDecal(this, m_pHead, a2, flAlpha);
      if ( v6 == 0 )
        break;
      m_pHead = v6;
    }
  }
}


// CDecalGameSystem::UpdateRigidEntityDecals  (line 955, @0x0000000001f33e00, libserver.so)  // inlines: BuildHandle, CEntityHandle, CalcAbsolutePosition, Element, GetBucketIndex, GetFirstHandle, GetKeyDataIndex, GetNextHandle, Head, Load, NodeToWorldTransform, operator[]
// calls: CDecalGameSystem::GetSkeletonInstance, CGameSceneNode::CalcAbsolutePositionWhenDirty, CDecalGameSystem::OptionallyRetireDecal, CDecalGameSystem::DestroyDecalList
// callers: CDecalGameSystem::FrameBoundary
void __fastcall CDecalGameSystem::UpdateRigidEntityDecals(
        CDecalGameSystem *const this,
        float a2,
        float flTime,
        VertexUpdateContext_t *pContext)
{
  int m_Size; // edx
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *m_pMemory; // rsi
  int v7; // r15d
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *v8; // rax
  int v9; // r13d
  int v10; // r8d
  signed int v11; // eax
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // r15
  __int64 v15; // rcx
  SkeletonInstanceDecalList_t *v16; // rax
  CDecalInfo *m_pHead; // r14
  CUtlStringToken v18; // edx
  CSkeletonInstance *SkeletonInstance; // rax
  CDecalInfo *v20; // r15
  int v21; // r15d
  __int64 v22; // [rsp+0h] [rbp-50h]
  uint32 flAlpha[16]; // [rsp+10h] [rbp-40h] BYREF

  m_Size = this->m_rigidEntityDecals.m_Buckets.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_rigidEntityDecals.m_Buckets.m_Memory.m_pMemory;
    v7 = 0;
    v8 = m_pMemory + 1;
    if ( m_pMemory->m_Size <= 0 )
    {
      while ( ++v7 != m_Size )
      {
        ++v8;
        if ( v8[-1].m_Size > 0 )
        {
          v21 = v7 << 16;
          goto LABEL_8;
        }
      }
    }
    else
    {
      v21 = 0;
      while ( 1 )
      {
LABEL_8:
        v9 = -1;
        v10 = (v21 + 1);
        v11 = (v21 + 1) >> 16;
        if ( m_Size > v11 )
        {
          v12 = &m_pMemory[v11 + 1];
          if ( m_pMemory[v11].m_Size <= v10 )
          {
            do
            {
              if ( ++v11 == m_Size )
              {
                v9 = -1;
                goto LABEL_14;
              }
              ++v12;
            }
            while ( v12[-1].m_Size <= 0 );
            v10 = 0;
          }
          v9 = v10 | (v11 << 16);
        }
LABEL_14:
        v13 = v21;
        v14 = v21;
        v15 = HIWORD(v13);
        v16 = &m_pMemory[v15].m_Memory.m_pMemory[v14];
        v22 = v15 * 24;
        m_pHead = v16->m_decalList.m_pHead;
        if ( m_pHead != 0 )
        {
          v18.m_nHashCode = v16->m_nSkeletonInstanceHash;
          flAlpha[0] = v16->m_nEntityHandle.m_Index;
          SkeletonInstance = CDecalGameSystem::GetSkeletonInstance(this, flAlpha, v18);
          if ( SkeletonInstance != 0 )
          {
            if ( SkeletonInstance->m_bDirtyAbsTransform.m_value )
              CGameSceneNode::CalcAbsolutePositionWhenDirty(SkeletonInstance);
            while ( 1 )
            {
              v20 = *(m_pHead + 5);
              CDecalGameSystem::OptionallyRetireDecal(this, m_pHead, a2, flAlpha);
              if ( v20 == 0 )
                break;
              m_pHead = v20;
            }
          }
          else
          {
            CDecalGameSystem::DestroyDecalList(
              this,
              &(*(&this->m_rigidEntityDecals.m_Buckets.m_Memory.m_pMemory->m_Memory.m_pMemory + v22))[v14].m_decalList,
              0xFFFFFFFF);
          }
        }
        if ( v9 == -1 )
          break;
        m_Size = this->m_rigidEntityDecals.m_Buckets.m_Size;
        v21 = v9;
        m_pMemory = this->m_rigidEntityDecals.m_Buckets.m_Memory.m_pMemory;
      }
    }
  }
}


// CDecalGameSystem::UpdateSkinnedEntityDecals  (line 1002, @0x0000000001f3a440, libserver.so)  // inlines: BuildHandle, CBoneAccessor, CEntityHandle, Cleanup, Element, GetBucketIndex, GetFirstHandle, GetKeyDataIndex, GetNextHandle, GetWorldSpaceBones, GetWorldSpaceState, Head, operator[], ~CBoneAccessor
// calls: CDecalGameSystem::GetSkeletonInstance, CSkeletonInstance::GetNumBones, CSkeletonInstance::CalcWorldSpaceBones, CDecalGameSystem::OptionallyRetireDecal, operator delete [], CDecalGameSystem::DestroyDecalList, CBoneAccessor<matrix3x4a_t>::Cleanup, _Unwind_Resume
// callers: CDecalGameSystem::FrameBoundary
void __fastcall CDecalGameSystem::UpdateSkinnedEntityDecals(
        CDecalGameSystem *const this,
        float a2,
        float flTime,
        VertexUpdateContext_t *pContext)
{
  int m_Size; // ecx
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *m_pMemory; // rsi
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *v7; // rax
  int v8; // ebx
  int v9; // ebx
  int v10; // r14d
  int v11; // r8d
  signed int v12; // eax
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // r8
  SkeletonInstanceDecalList_t *v17; // rax
  CUtlStringToken v18; // edx
  CSkeletonInstance *SkeletonInstance; // rax
  CSkeletonInstance *v20; // r15
  const uint32 *m_pReadableBones; // rsi
  int m_nBoneCount; // eax
  const matrix3x4a_t *m_pTransforms; // rdx
  CDecalInfo *v24; // rcx
  CDecalInfo *v25; // rbx
  __int64 v26; // [rsp+8h] [rbp-78h]
  CDecalInfo *pDecal; // [rsp+10h] [rbp-70h]
  float flAlpha; // [rsp+2Ch] [rbp-54h] BYREF
  CBoneAccessor<matrix3x4a_t> boneToWorld; // [rsp+30h] [rbp-50h] BYREF

  m_Size = this->m_skinnedEntityDecals.m_Buckets.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_skinnedEntityDecals.m_Buckets.m_Memory.m_pMemory;
    if ( m_pMemory->m_Size > 0 )
    {
      v9 = 0;
      while ( 1 )
      {
LABEL_8:
        v10 = -1;
        v11 = (v9 + 1);
        v12 = (v9 + 1) >> 16;
        if ( m_Size > v12 )
        {
          v13 = &m_pMemory[v12 + 1];
          if ( m_pMemory[v12].m_Size <= v11 )
          {
            do
            {
              if ( ++v12 == m_Size )
              {
                v10 = -1;
                goto LABEL_14;
              }
              ++v13;
            }
            while ( v13[-1].m_Size <= 0 );
            v11 = 0;
          }
          v10 = v11 | (v12 << 16);
        }
LABEL_14:
        v14 = v9;
        v15 = v9;
        v16 = HIWORD(v14);
        v17 = &m_pMemory[v16].m_Memory.m_pMemory[v15];
        v26 = v16 * 24;
        pDecal = v17->m_decalList.m_pHead;
        if ( pDecal != 0 )
        {
          v18.m_nHashCode = v17->m_nSkeletonInstanceHash;
          LODWORD(boneToWorld.m_pBones) = v17->m_nEntityHandle.m_Index;
          SkeletonInstance = CDecalGameSystem::GetSkeletonInstance(this, &boneToWorld, v18);
          v20 = SkeletonInstance;
          if ( SkeletonInstance != 0 )
          {
            if ( CSkeletonInstance::GetNumBones(SkeletonInstance) > 0 )
            {
              CSkeletonInstance::CalcWorldSpaceBones(v20, CModelSkeleton::BoneFlags_t::FLAG_MESH);
              m_pReadableBones = v20->m_modelState.m_simulationState.m_pReadableBones;
              m_nBoneCount = v20->m_modelState.m_simulationState.m_nBoneCount;
              m_pTransforms = v20->m_modelState.m_simulationState.m_pTransforms;
              boneToWorld.m_bOwnsMemory = 0;
              v24 = pDecal;
              boneToWorld.m_pReadableBones = m_pReadableBones;
              boneToWorld.m_nBones = m_nBoneCount;
              boneToWorld.m_pBones = m_pTransforms;
              while ( 1 )
              {
                v25 = *(v24 + 5);
                CDecalGameSystem::OptionallyRetireDecal(this, v24, a2, &flAlpha);
                if ( v25 == 0 )
                  break;
                v24 = v25;
              }
              if ( boneToWorld.m_bOwnsMemory )
              {
                if ( boneToWorld.m_pBones != 0 )
                  operator delete[](boneToWorld.m_pBones);
                if ( boneToWorld.m_pReadableBones != 0 )
                  operator delete[](boneToWorld.m_pReadableBones);
              }
            }
          }
          else
          {
            CDecalGameSystem::DestroyDecalList(
              this,
              &(*(&this->m_skinnedEntityDecals.m_Buckets.m_Memory.m_pMemory->m_Memory.m_pMemory + v26))[v15].m_decalList,
              0xFFFFFFFF);
          }
        }
        if ( v10 == -1 )
          break;
        m_Size = this->m_skinnedEntityDecals.m_Buckets.m_Size;
        v9 = v10;
        m_pMemory = this->m_skinnedEntityDecals.m_Buckets.m_Memory.m_pMemory;
      }
    }
    else
    {
      v7 = m_pMemory + 1;
      v8 = 0;
      while ( ++v8 != m_Size )
      {
        ++v7;
        if ( v7[-1].m_Size > 0 )
        {
          v9 = v8 << 16;
          goto LABEL_8;
        }
      }
    }
  }
}


// CDecalGameSystem::FillVertexDataForDecal  (line 1055, @0x0000000001f32e10, libserver.so)  // inlines: CrossProduct, FillVertexDataForDecal, Init, NormalizeInPlace, VectorAdd, VectorDivide, VectorMultiply, VectorRotate, VectorSubtract, VectorTransform, normal, operator*, operator+, operator-, operator/, operator=, position, saxis
// calls: VectorTransform, VectorRotate, VectorNormalize
void __fastcall CDecalGameSystem::FillVertexDataForDecal(
        CDecalGameSystem *const this,
        DecalVertex_t *pVertices,
        CDecalInfo *pDecal,
        const matrix3x4a_t *pTransform,
        float flAlpha,
        float flCurrentTime)
{
  const google::protobuf::Descriptor *containing_type; // rax
  int v9; // xmm8_4
  int v10; // r14d
  float v11; // xmm10_4
  float v12; // xmm13_4
  float v13; // xmm14_4
  const google::protobuf::MessageOptions *options; // rax
  float z; // xmm2_4
  vec_t v16; // xmm3_4
  float x; // xmm11_4
  float *v18; // rax
  float v19; // xmm6_4
  float v20; // xmm12_4
  float v21; // xmm4_4
  float v22; // xmm9_4
  float v23; // xmm5_4
  float *v24; // rbx
  float y; // xmm10_4
  float v26; // xmm0_4
  float v27; // xmm5_4
  DecalVertex_t *v28; // rdx
  Vector4D *p_m_vCornerAndSpecExp; // r8
  Vector4D *p_m_vSDirectionAndAlpha; // rdi
  Vector4D *p_m_vTDirectionAndDepth; // rsi
  __m128i x_low; // xmm11
  float v33; // xmm1_4
  float v34; // xmm8_4
  Vector4D *p_m_vWorldSpaceClipDistancesOrSequenceData; // rcx
  float v36; // xmm7_4
  float v37; // xmm3_4
  __m128i v38; // xmm0
  float v39; // xmm13_4
  float v40; // xmm2_4
  float v41; // xmm12_4
  float v42; // xmm10_4
  float v43; // xmm11_4
  float v44; // xmm4_4
  float v45; // xmm9_4
  float v46; // xmm12_4
  float v47; // xmm13_4
  float v48; // xmm0_4
  vec_t v49; // xmm6_4
  DecalVertex_t *v50; // rax
  signed __int64 v51; // rax
  float v52; // [rsp+8h] [rbp-108h]
  float flCurrentTimea; // [rsp+Ch] [rbp-104h]
  float flCurrentTimeb; // [rsp+Ch] [rbp-104h]
  float v55; // [rsp+10h] [rbp-100h]
  int v56; // [rsp+10h] [rbp-100h]
  float v57; // [rsp+14h] [rbp-FCh]
  int v59; // [rsp+1Ch] [rbp-F4h]
  float v60; // [rsp+20h] [rbp-F0h]
  float v61; // [rsp+24h] [rbp-ECh]
  float v62; // [rsp+28h] [rbp-E8h]
  float v63; // [rsp+28h] [rbp-E8h]
  float v64; // [rsp+2Ch] [rbp-E4h]
  float in1; // [rsp+30h] [rbp-E0h] BYREF
  float v66; // [rsp+34h] [rbp-DCh]
  float v67; // [rsp+38h] [rbp-D8h]
  Vector v68; // [rsp+40h] [rbp-D0h] BYREF
  float v69; // [rsp+50h] [rbp-C0h] BYREF
  float v70; // [rsp+54h] [rbp-BCh]
  float v71; // [rsp+58h] [rbp-B8h]
  float out[4]; // [rsp+60h] [rbp-B0h] BYREF
  Vector vec; // [rsp+70h] [rbp-A0h] BYREF
  float v74; // [rsp+80h] [rbp-90h] BYREF
  float v75; // [rsp+84h] [rbp-8Ch]
  float v76; // [rsp+88h] [rbp-88h]
  float v77; // [rsp+8Ch] [rbp-84h]
  float v78; // [rsp+90h] [rbp-80h]
  float v79; // [rsp+94h] [rbp-7Ch]
  float v80; // [rsp+98h] [rbp-78h]
  float v81; // [rsp+9Ch] [rbp-74h]
  float v82; // [rsp+A0h] [rbp-70h]
  float v83; // [rsp+A4h] [rbp-6Ch]
  float v84; // [rsp+A8h] [rbp-68h]
  float v85; // [rsp+ACh] [rbp-64h]
  float v86; // [rsp+B0h] [rbp-60h]
  float v87; // [rsp+B4h] [rbp-5Ch]
  float v88; // [rsp+B8h] [rbp-58h]
  float v89; // [rsp+BCh] [rbp-54h]
  float v90; // [rsp+C0h] [rbp-50h]
  float v91; // [rsp+C4h] [rbp-4Ch]
  float v92; // [rsp+C8h] [rbp-48h]
  float v93; // [rsp+CCh] [rbp-44h]
  float v94; // [rsp+D0h] [rbp-40h]
  float v95; // [rsp+D4h] [rbp-3Ch]
  float v96; // [rsp+D8h] [rbp-38h]
  float v97; // [rsp+DCh] [rbp-34h]

  containing_type = *(pDecal + 10);
  v9 = *(pDecal + 1);
  v61 = *(pDecal + 3);
  v10 = *(pDecal + 36);
  v60 = *(pDecal + 2);
  if ( containing_type == 0 )
    containing_type = CMsgPlaceDecalEvent::default_instance_->containing_type_;
  v11 = *&containing_type->options_;
  v12 = *(&containing_type->containing_type_ + 1);
  v13 = *&containing_type->containing_type_;
  options = *(pDecal + 11);
  if ( options == 0 )
    options = CMsgPlaceDecalEvent::default_instance_->options_;
  z = *(options + 8);
  v16 = *(options + 7);
  x = *(options + 6);
  v18 = *(pDecal + 12);
  if ( v18 == 0 )
    v18 = *&CMsgPlaceDecalEvent::default_instance_->is_placeholder_;
  v19 = *(pDecal + 30);
  v20 = v18[8];
  v21 = v18[7];
  v59 = *pDecal;
  v22 = v18[6];
  v23 = *(pDecal + 31);
  v64 = *(pDecal + 29);
  if ( v19 != 0.0 && *(pDecal + 29) != 0.0 )
  {
    in1 = v13;
    v66 = v12;
    v67 = v11;
    v68.x = x;
    v68.y = v16;
    v68.z = z;
    v69 = v22;
    v70 = v21;
    v71 = v20;
    if ( pTransform != 0 )
    {
      flCurrentTimea = flCurrentTime;
      v55 = v19;
      v57 = v23;
      v24 = &v74;
      VectorTransform(&in1, pTransform, out);
      VectorRotate(&v68.x, pTransform, &vec.x);
      VectorRotate(&v69, pTransform, &v74);
      x = vec.x;
      in1 = out[0];
      y = vec.y;
      v68 = vec;
      v66 = out[1];
      z = vec.z;
      v67 = out[2];
      v22 = v74;
      v26 = v75;
      v20 = v76;
      v69 = v74;
      v23 = v57;
      v70 = v75;
      v71 = v76;
      v19 = v55;
      flCurrentTime = flCurrentTimea;
    }
    else
    {
      v26 = v21;
      y = v16;
      v24 = &v74;
    }
    v52 = flCurrentTime;
    flCurrentTimeb = v19;
    v62 = v23;
    v56 = v9;
    vec.x = (y * v20) - (z * v26);
    vec.y = (z * v22) - (v20 * x);
    vec.z = (v26 * x) - (v22 * y);
    VectorNormalize(&vec);
    v27 = v62;
    v28 = pVertices;
    p_m_vCornerAndSpecExp = &pVertices->m_vCornerAndSpecExp;
    p_m_vSDirectionAndAlpha = &pVertices->m_vSDirectionAndAlpha;
    p_m_vTDirectionAndDepth = &pVertices->m_vTDirectionAndDepth;
    x_low = LODWORD(vec.x);
    v33 = v68.x * v62;
    *x_low.m128i_i32 = vec.x * flCurrentTimeb;
    v34 = v68.y * v62;
    p_m_vWorldSpaceClipDistancesOrSequenceData = &pVertices->m_vWorldSpaceClipDistancesOrSequenceData;
    v63 = v68.z * v62;
    v36 = ((in1 - ((v69 * v64) * 0.5)) - ((vec.x * flCurrentTimeb) * 0.5)) - v33;
    v74 = v36;
    v77 = (v69 * v64) + v36;
    v37 = ((v66 - ((v70 * v64) * 0.5)) - ((vec.y * flCurrentTimeb) * 0.5)) - v34;
    v38 = x_low;
    *v38.m128i_i32 = (vec.x * flCurrentTimeb) + v77;
    v75 = v37;
    v39 = (v70 * v64) + v37;
    v40 = ((v67 - ((v71 * v64) * 0.5)) - (0.5 * (vec.z * flCurrentTimeb))) - v63;
    v78 = v39;
    v41 = (v71 * v64) + v40;
    v76 = v40;
    v86 = v33 + v36;
    v81 = (vec.y * flCurrentTimeb) + v39;
    v79 = v41;
    v80 = COERCE_FLOAT(_mm_cvtsi128_si32(v38));
    v87 = v34 + v37;
    v82 = (vec.z * flCurrentTimeb) + v41;
    v83 = (vec.x * flCurrentTimeb) + v36;
    v84 = (vec.y * flCurrentTimeb) + v37;
    v85 = (vec.z * flCurrentTimeb) + v40;
    v88 = v63 + v40;
    v89 = v77 + v33;
    v90 = v39 + v34;
    v95 = v83 + v33;
    v96 = v84 + v34;
    v92 = v80 + v33;
    v94 = v82 + v63;
    v97 = v85 + v63;
    v91 = v41 + v63;
    v93 = v81 + v34;
    v42 = v69 * (1.0 / v64);
    v43 = v70 * (1.0 / v64);
    v44 = v10;
    v45 = (1.0 / v64) * v71;
    v46 = vec.x * (1.0 / flCurrentTimeb);
    v47 = vec.y * (1.0 / flCurrentTimeb);
    v48 = (1.0 / flCurrentTimeb) * vec.z;
    do
    {
      v49 = *v24;
      v50 = v28++;
      v51 = v50 - pVertices;
      v24 += 3;
      v28[-1].m_vPosition.x = v49;
      v28[-1].m_vPosition.y = *(v24 - 2);
      v28[-1].m_vPosition.z = *(v24 - 1);
      *(&p_m_vCornerAndSpecExp->x + v51) = v36;
      *(&p_m_vCornerAndSpecExp->y + v51) = v37;
      *(&p_m_vCornerAndSpecExp->z + v51) = v40;
      *(&p_m_vCornerAndSpecExp->w + v51) = v59;
      *(&p_m_vSDirectionAndAlpha->x + v51) = v42;
      *(&p_m_vSDirectionAndAlpha->y + v51) = v43;
      *(&p_m_vSDirectionAndAlpha->z + v51) = v45;
      *(&p_m_vSDirectionAndAlpha->w + v51) = flAlpha;
      *(&p_m_vTDirectionAndDepth->x + v51) = v46;
      *(&p_m_vTDirectionAndDepth->y + v51) = v47;
      *(&p_m_vTDirectionAndDepth->z + v51) = v48;
      *(&p_m_vTDirectionAndDepth->w + v51) = v27;
      *(&p_m_vWorldSpaceClipDistancesOrSequenceData->x + v51) = v44;
      *(&p_m_vWorldSpaceClipDistancesOrSequenceData->y + v51) = v44;
      *(&p_m_vWorldSpaceClipDistancesOrSequenceData->z + v51) = v56;
      *(&p_m_vWorldSpaceClipDistancesOrSequenceData->w + v51) = (v52 - v61) / v60;
    }
    while ( v28 != &pVertices[8] );
  }
}


// CDecalGameSystem::CreateVertexData  (line 1070, @0x0000000001f33520, libserver.so)
void __fastcall CDecalGameSystem::CreateVertexData(CDecalGameSystem *const this, int nDecals)
{
  ;
}


// CDecalGameSystem::DestroyVertexData  (line 1130, @0x0000000001f33530, libserver.so)
void __fastcall CDecalGameSystem::DestroyVertexData(CDecalGameSystem *const this)
{
  ;
}


// CDecalGameSystem::EnsureDecalCount  (line 1153, @0x0000000001f6e950, libserver.so)  // inlines: DestroyWorldDecals, FillWithValue
// calls: CDecalGameSystem::DestroyDecalList, CDecalGameSystem::DestroyRigidEntityDecals, CDecalGameSystem::DestroySkinnedEntityDecals, CUtlVectorBase<CDecalInfo*, CUtlMemory<CDecalInfo*, int> >::SetCount
void __fastcall CDecalGameSystem::EnsureDecalCount(CDecalGameSystem *const this, int nDecals)
{
  __int64 v4; // r14
  CUtlVector<CDecalInfo*,CUtlMemory<CDecalInfo*,int> > *m_VBSlotUsed; // rbx
  __int64 v6; // rdx
  int i; // eax

  if ( this->m_VBSlotUsed[0].m_Size < nDecals )
  {
    v4 = 0;
    CDecalGameSystem::DestroyDecalList(this, &this->m_worldDecals, 0xFFFFFFFF);
    CDecalGameSystem::DestroyRigidEntityDecals(this, 0xFFFFFFFF);
    CDecalGameSystem::DestroySkinnedEntityDecals(this, 0xFFFFFFFF);
    m_VBSlotUsed = this->m_VBSlotUsed;
    do
    {
      CUtlVectorBase<CDecalInfo *,CUtlMemory<CDecalInfo *,int>>::SetCount(m_VBSlotUsed, nDecals);
      v6 = 0;
      for ( i = 0; i < m_VBSlotUsed->m_Size; ++v6 )
      {
        ++i;
        m_VBSlotUsed->m_Memory.m_pMemory[v6] = 0;
      }
      this->m_nNextSlotToSearch[v4++] = 0;
      ++m_VBSlotUsed;
    }
    while ( v4 != 3 );
  }
}


// CDecalGameSystem::FreeDecal  (line 1176, @0x0000000001f33750, libserver.so)  // inlines: FreeWorldDecal, RemoveFromDListWithTailPtr<CDecalInfo>, RemoveNode
// calls: CDecalGameSystem::FreeSkinnedEntityDecal, CDecalGameSystem::FreeRigidEntityDecal, CDecalGameSystem::DeleteDecalAndFreeSlot
// callers: CDecalGameSystem::OptionallyRetireDecal, CDecalGameSystem::AssignToFreeVBSlot
void __fastcall CDecalGameSystem::FreeDecal(CDecalGameSystem *const this, CDecalInfo *pDecal)
{
  __int64 v2; // rax
  __int64 v3; // rax
  CDecalInfo *v4; // rax

  if ( *(pDecal + 32) == -1 )
  {
    if ( pDecal == this->m_worldDecals.m_pTailPtr )
      this->m_worldDecals.m_pTailPtr = *(pDecal + 6);
    v2 = *(pDecal + 6);
    if ( v2 != 0 )
    {
      *(v2 + 40) = *(pDecal + 5);
      v3 = *(pDecal + 5);
      if ( v3 != 0 )
        *(v3 + 48) = *(pDecal + 6);
    }
    else if ( pDecal == this->m_worldDecals.m_pHead )
    {
      v4 = *(pDecal + 5);
      this->m_worldDecals.m_pHead = v4;
      if ( v4 != 0 )
        *(v4 + 6) = 0;
    }
    *(pDecal + 6) = 0;
    *(pDecal + 5) = 0;
    CDecalGameSystem::DeleteDecalAndFreeSlot(this, pDecal);
  }
  else if ( *(pDecal + 34) < 0 )
  {
    CDecalGameSystem::FreeRigidEntityDecal(this, pDecal);
  }
  else
  {
    CDecalGameSystem::FreeSkinnedEntityDecal(this, pDecal);
  }
}


// CDecalGameSystem::FreeWorldDecal  (line 1200, @0x0000000001f33540, libserver.so)  // inlines: RemoveFromDListWithTailPtr<CDecalInfo>, RemoveNode
// calls: CDecalGameSystem::DeleteDecalAndFreeSlot
void __fastcall CDecalGameSystem::FreeWorldDecal(CDecalGameSystem *const this, CDecalInfo *pDecal)
{
  __int64 v2; // rax
  __int64 v3; // rax
  CDecalInfo *v4; // rax

  if ( pDecal == this->m_worldDecals.m_pTailPtr )
  {
    this->m_worldDecals.m_pTailPtr = *(pDecal + 6);
    v2 = *(pDecal + 6);
    if ( v2 != 0 )
    {
LABEL_3:
      *(v2 + 40) = *(pDecal + 5);
      v3 = *(pDecal + 5);
      if ( v3 != 0 )
        *(v3 + 48) = *(pDecal + 6);
      goto LABEL_5;
    }
  }
  else
  {
    v2 = *(pDecal + 6);
    if ( v2 != 0 )
      goto LABEL_3;
  }
  if ( pDecal == this->m_worldDecals.m_pHead )
  {
    v4 = *(pDecal + 5);
    this->m_worldDecals.m_pHead = v4;
    if ( v4 != 0 )
      *(v4 + 6) = 0;
  }
LABEL_5:
  *(pDecal + 6) = 0;
  *(pDecal + 5) = 0;
  CDecalGameSystem::DeleteDecalAndFreeSlot(this, pDecal);
}


// CDecalGameSystem::FreeRigidEntityDecal  (line 1207, @0x0000000001f335d0, libserver.so)  // inlines: CEntityHandle, RemoveFromDListWithTailPtr<CDecalInfo>, RemoveNode
// calls: CDecalGameSystem::FindSkeletonInstanceDecalList, CDecalGameSystem::DeleteDecalAndFreeSlot
// callers: CDecalGameSystem::FreeDecal
void __fastcall CDecalGameSystem::FreeRigidEntityDecal(CDecalGameSystem *const this, CDecalInfo *pDecal)
{
  uint32 v4; // edx
  SkeletonInstanceDecalList_t *SkeletonInstanceDecalList; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  CDecalInfo *v8; // rdx
  CEntityHandle nEntityHandle; // [rsp+0h] [rbp-20h] BYREF

  v4 = *(pDecal + 33);
  nEntityHandle.m_Index = *(pDecal + 32);
  SkeletonInstanceDecalList = CDecalGameSystem::FindSkeletonInstanceDecalList(
                                this,
                                &nEntityHandle.m_Index,
                                v4,
                                &this->m_rigidEntityDecals);
  if ( SkeletonInstanceDecalList != 0 )
  {
    if ( pDecal == SkeletonInstanceDecalList->m_decalList.m_pTailPtr )
    {
      SkeletonInstanceDecalList->m_decalList.m_pTailPtr = *(pDecal + 6);
      v6 = *(pDecal + 6);
      if ( v6 != 0 )
      {
LABEL_4:
        *(v6 + 40) = *(pDecal + 5);
        v7 = *(pDecal + 5);
        if ( v7 != 0 )
          *(v7 + 48) = *(pDecal + 6);
LABEL_6:
        *(pDecal + 6) = 0;
        *(pDecal + 5) = 0;
        goto LABEL_7;
      }
    }
    else
    {
      v6 = *(pDecal + 6);
      if ( v6 != 0 )
        goto LABEL_4;
    }
    if ( pDecal == SkeletonInstanceDecalList->m_decalList.m_pHead )
    {
      v8 = *(pDecal + 5);
      SkeletonInstanceDecalList->m_decalList.m_pHead = v8;
      if ( v8 != 0 )
        *(v8 + 6) = 0;
    }
    goto LABEL_6;
  }
LABEL_7:
  CDecalGameSystem::DeleteDecalAndFreeSlot(this, pDecal);
}


// CDecalGameSystem::FreeSkinnedEntityDecal  (line 1220, @0x0000000001f33690, libserver.so)  // inlines: CEntityHandle, RemoveFromDListWithTailPtr<CDecalInfo>, RemoveNode
// calls: CDecalGameSystem::FindSkeletonInstanceDecalList, CDecalGameSystem::DeleteDecalAndFreeSlot
// callers: CDecalGameSystem::FreeDecal
void __fastcall CDecalGameSystem::FreeSkinnedEntityDecal(CDecalGameSystem *const this, CDecalInfo *pDecal)
{
  uint32 v4; // edx
  SkeletonInstanceDecalList_t *SkeletonInstanceDecalList; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  CDecalInfo *v8; // rdx
  CEntityHandle nEntityHandle; // [rsp+0h] [rbp-20h] BYREF

  v4 = *(pDecal + 33);
  nEntityHandle.m_Index = *(pDecal + 32);
  SkeletonInstanceDecalList = CDecalGameSystem::FindSkeletonInstanceDecalList(
                                this,
                                &nEntityHandle.m_Index,
                                v4,
                                &this->m_skinnedEntityDecals);
  if ( SkeletonInstanceDecalList != 0 )
  {
    if ( pDecal == SkeletonInstanceDecalList->m_decalList.m_pTailPtr )
    {
      SkeletonInstanceDecalList->m_decalList.m_pTailPtr = *(pDecal + 6);
      v6 = *(pDecal + 6);
      if ( v6 != 0 )
      {
LABEL_4:
        *(v6 + 40) = *(pDecal + 5);
        v7 = *(pDecal + 5);
        if ( v7 != 0 )
          *(v7 + 48) = *(pDecal + 6);
LABEL_6:
        *(pDecal + 6) = 0;
        *(pDecal + 5) = 0;
        goto LABEL_7;
      }
    }
    else
    {
      v6 = *(pDecal + 6);
      if ( v6 != 0 )
        goto LABEL_4;
    }
    if ( pDecal == SkeletonInstanceDecalList->m_decalList.m_pHead )
    {
      v8 = *(pDecal + 5);
      SkeletonInstanceDecalList->m_decalList.m_pHead = v8;
      if ( v8 != 0 )
        *(v8 + 6) = 0;
    }
    goto LABEL_6;
  }
LABEL_7:
  CDecalGameSystem::DeleteDecalAndFreeSlot(this, pDecal);
}


// CDecalGameSystem::AssignToFreeVBSlot  (line 1233, @0x0000000001f338b0, libserver.so)  // inlines: operator[]
// calls: CDecalGameSystem::FreeDecal
// callers: CDecalGameSystem::AddDecalAndAssignToSlot
void __fastcall CDecalGameSystem::AssignToFreeVBSlot(
        CDecalGameSystem *const this,
        CDecalInfo *pDecal,
        DecalVBType_t nType)
{
  __int64 v4; // rbx
  CUtlVector<CDecalInfo*,CUtlMemory<CDecalInfo*,int> > *v5; // r12
  int m_Size; // r8d
  char *v7; // r15
  CDecalInfo **m_pMemory; // r11
  int v9; // ecx
  int v10; // edx
  __int64 v11; // r14
  int v12; // r15d
  __int64 v13; // rax

  v4 = nType;
  v5 = &this->m_VBSlotUsed[nType];
  m_Size = v5->m_Size;
  if ( v5->m_Size <= 0 )
  {
    v12 = this->m_nNextSlotToSearch[nType] % m_Size;
    v11 = v12;
LABEL_7:
    this->m_nNextSlotToSearch[v4] = v12 + 1;
    CDecalGameSystem::FreeDecal(this, v5->m_Memory.m_pMemory[v11]);
    v5->m_Memory.m_pMemory[v11] = pDecal;
    *(pDecal + 6) = v12;
    return;
  }
  v7 = this + 4 * nType;
  m_pMemory = this->m_VBSlotUsed[nType].m_Memory.m_pMemory;
  v9 = 0;
  v10 = *(v7 + 314) % m_Size;
  v11 = v10;
  if ( m_pMemory[v11] != 0 )
  {
    while ( ++v9 != m_Size )
    {
      v10 = (*(v7 + 314) + v9) % m_Size;
      v13 = v10;
      if ( m_pMemory[v13] == 0 )
        goto LABEL_8;
    }
    v12 = *(v7 + 314) % m_Size;
    goto LABEL_7;
  }
  v13 = v10;
LABEL_8:
  *(v7 + 314) = v10 + 1;
  v5->m_Memory.m_pMemory[v13] = pDecal;
  *(pDecal + 6) = v10;
}


// CDecalGameSystem::DestroyDecalList  (line 1257, @0x0000000001f33d40, libserver.so)  // inlines: Head, RemoveFromDListWithTailPtr<CDecalInfo>, RemoveNode
// calls: CDecalGameSystem::DeleteDecalAndFreeSlot
// callers: CDecalGameSystem::UpdateRigidEntityDecals, CDecalGameSystem::OnClearWorldDecalsEvent, CDecalGameSystem::DestroyWorldDecals, CDecalGameSystem::DestroyRigidEntityDecals, CDecalGameSystem::DestroySkinnedEntityDecals, CDecalGameSystem::DestroyDecalsForSkeletonInstance, CDecalGameSystem::UpdateSkinnedEntityDecals, CDecalGameSystem::EnsureDecalCount, CDecalGameSystem::ClearWorldDecals
void __fastcall CDecalGameSystem::DestroyDecalList(
        CDecalGameSystem *const this,
        CUtlIntrusiveDListWithTailPtr<CDecalInfo,CThreadNullMutex> *const list,
        uint32 nFlagsToClear)
{
  CDecalInfo *m_pHead; // rsi
  CDecalInfo *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdx
  CDecalInfo *v10; // rdx

  m_pHead = list->m_pHead;
  if ( m_pHead != 0 )
  {
    while ( 1 )
    {
      v7 = *(m_pHead + 5);
      if ( (nFlagsToClear & *(m_pHead + 27)) == 0 )
      {
        if ( v7 == 0 )
          return;
        goto LABEL_4;
      }
      if ( m_pHead == list->m_pTailPtr )
      {
        list->m_pTailPtr = *(m_pHead + 6);
        v8 = *(m_pHead + 6);
        if ( v8 != 0 )
        {
LABEL_8:
          *(v8 + 40) = *(m_pHead + 5);
          v9 = *(m_pHead + 5);
          if ( v9 != 0 )
            *(v9 + 48) = *(m_pHead + 6);
          goto LABEL_10;
        }
      }
      else
      {
        v8 = *(m_pHead + 6);
        if ( v8 != 0 )
          goto LABEL_8;
      }
      if ( m_pHead == list->m_pHead )
      {
        v10 = *(m_pHead + 5);
        list->m_pHead = v10;
        if ( v10 != 0 )
          *(v10 + 6) = 0;
      }
LABEL_10:
      *(m_pHead + 6) = 0;
      *(m_pHead + 5) = 0;
      CDecalGameSystem::DeleteDecalAndFreeSlot(this, m_pHead);
      if ( v7 == 0 )
        return;
LABEL_4:
      m_pHead = v7;
    }
  }
}


// CDecalGameSystem::DestroyWorldDecals  (line 1273, @0x0000000001f33fc0, libserver.so)
// calls: CDecalGameSystem::DestroyDecalList
void __fastcall CDecalGameSystem::DestroyWorldDecals(CDecalGameSystem *const this, uint32 nFlagsToClear)
{
  CDecalGameSystem::DestroyDecalList(this, &this->m_worldDecals, nFlagsToClear);
}


// CDecalGameSystem::DestroyRigidEntityDecals  (line 1279, @0x0000000001f33fe0, libserver.so)  // inlines: BuildHandle, Element, GetBucketIndex, GetFirstHandle, GetKeyDataIndex, GetNextHandle, operator[]
// calls: CDecalGameSystem::DestroyDecalList
// callers: CDecalGameSystem::OnClearEntityDecalsEvent, CDecalGameSystem::EnsureDecalCount, CDecalGameSystem::ClearEntityDecals
void __fastcall CDecalGameSystem::DestroyRigidEntityDecals(CDecalGameSystem *const this, uint32 nFlagsToClear)
{
  int m_Size; // ecx
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *m_pMemory; // rdx
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *v6; // rax
  int v7; // r12d
  unsigned int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // r12d
  int v12; // r8d
  unsigned int v13; // eax
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *v14; // rcx
  int v15; // ecx

  m_Size = this->m_rigidEntityDecals.m_Buckets.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_rigidEntityDecals.m_Buckets.m_Memory.m_pMemory;
    if ( m_pMemory->m_Size > 0 )
    {
      v8 = 0;
LABEL_8:
      do
      {
        v9 = HIWORD(v8);
        v10 = v8;
        v11 = v8 + 1;
        CDecalGameSystem::DestroyDecalList(this, &m_pMemory[v9].m_Memory.m_pMemory[v10].m_decalList, nFlagsToClear);
        v12 = this->m_rigidEntityDecals.m_Buckets.m_Size;
        v13 = HIWORD(v11);
        if ( HIWORD(v11) >= v12 )
          break;
        m_pMemory = this->m_rigidEntityDecals.m_Buckets.m_Memory.m_pMemory;
        v14 = &m_pMemory[v13 + 1];
        if ( m_pMemory[v13].m_Size <= v11 )
        {
          while ( ++v13 != v12 )
          {
            ++v14;
            if ( v14[-1].m_Size > 0 )
            {
              v15 = 0;
              goto LABEL_15;
            }
          }
          return;
        }
        v15 = v11;
LABEL_15:
        v8 = v15 | (v13 << 16);
      }
      while ( v8 != -1 );
    }
    else
    {
      v6 = m_pMemory + 1;
      v7 = 0;
      while ( ++v7 != m_Size )
      {
        ++v6;
        if ( v6[-1].m_Size > 0 )
        {
          v8 = v7 << 16;
          goto LABEL_8;
        }
      }
    }
  }
}


// CDecalGameSystem::DestroySkinnedEntityDecals  (line 1290, @0x0000000001f34100, libserver.so)  // inlines: BuildHandle, Element, GetBucketIndex, GetFirstHandle, GetKeyDataIndex, GetNextHandle, operator[]
// calls: CDecalGameSystem::DestroyDecalList
// callers: CDecalGameSystem::OnClearEntityDecalsEvent, CDecalGameSystem::EnsureDecalCount, CDecalGameSystem::ClearEntityDecals
void __fastcall CDecalGameSystem::DestroySkinnedEntityDecals(CDecalGameSystem *const this, uint32 nFlagsToClear)
{
  int m_Size; // ecx
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *m_pMemory; // rdx
  int v5; // r12d
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // r12d
  int v11; // r8d
  unsigned int v12; // eax
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *v13; // rcx
  int v14; // ecx
  unsigned int v15; // r12d

  m_Size = this->m_skinnedEntityDecals.m_Buckets.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_skinnedEntityDecals.m_Buckets.m_Memory.m_pMemory;
    v5 = 0;
    v7 = m_pMemory + 1;
    if ( m_pMemory->m_Size > 0 )
    {
      v15 = 0;
      goto LABEL_8;
    }
    while ( ++v5 != m_Size )
    {
      ++v7;
      if ( v7[-1].m_Size > 0 )
      {
        v15 = v5 << 16;
LABEL_8:
        while ( 1 )
        {
          v8 = HIWORD(v15);
          v9 = v15;
          v10 = v15 + 1;
          CDecalGameSystem::DestroyDecalList(this, &m_pMemory[v8].m_Memory.m_pMemory[v9].m_decalList, nFlagsToClear);
          v11 = this->m_skinnedEntityDecals.m_Buckets.m_Size;
          v12 = HIWORD(v10);
          if ( HIWORD(v10) >= v11 )
            return;
          m_pMemory = this->m_skinnedEntityDecals.m_Buckets.m_Memory.m_pMemory;
          v13 = &m_pMemory[v12 + 1];
          if ( m_pMemory[v12].m_Size <= v10 )
          {
            while ( ++v12 != v11 )
            {
              ++v13;
              if ( v13[-1].m_Size > 0 )
              {
                v14 = 0;
                goto LABEL_15;
              }
            }
            return;
          }
          v14 = v10;
LABEL_15:
          v15 = v14 | (v12 << 16);
          if ( v15 == -1 )
            return;
        }
      }
    }
  }
}


// CDecalGameSystem::DestroyDecalsForSkeletonInstance  (line 1301, @0x0000000001f34250, libserver.so)  // inlines: CEntityHandle
// calls: CDecalGameSystem::FindSkeletonInstanceDecalList, CDecalGameSystem::DestroyDecalList
// callers: CDecalGameSystem::OnClearDecalsForSkeletonInstanceEvent, CDecalGameSystem::ClearDecalsForSkeletonInstance
void __fastcall CDecalGameSystem::DestroyDecalsForSkeletonInstance(
        CDecalGameSystem *const this,
        uint32 *nEntityHandle,
        uint32 nSkeletonInstanceHash,
        uint32 nFlagsToClear)
{
  uint32 v6; // r12d
  SkeletonInstanceDecalList_t *SkeletonInstanceDecalList; // rax
  SkeletonInstanceDecalList_t *v9; // rax
  CEntityHandle nEntityHandlea; // [rsp+0h] [rbp-40h] BYREF

  v6 = nFlagsToClear;
  if ( nFlagsToClear == 0 )
    v6 = -1;
  nEntityHandlea.m_Index = *nEntityHandle;
  SkeletonInstanceDecalList = CDecalGameSystem::FindSkeletonInstanceDecalList(
                                this,
                                &nEntityHandlea.m_Index,
                                nSkeletonInstanceHash,
                                &this->m_rigidEntityDecals);
  if ( SkeletonInstanceDecalList != 0 )
    CDecalGameSystem::DestroyDecalList(this, &SkeletonInstanceDecalList->m_decalList, v6);
  nEntityHandlea.m_Index = *nEntityHandle;
  v9 = CDecalGameSystem::FindSkeletonInstanceDecalList(
         this,
         &nEntityHandlea.m_Index,
         nSkeletonInstanceHash,
         &this->m_skinnedEntityDecals);
  if ( v9 != 0 )
    CDecalGameSystem::DestroyDecalList(this, &v9->m_decalList, v6);
}


// CDecalGameSystem::EnableVisualizer  (line 1320, @0x0000000001f34320, libserver.so)  // inlines: CDecalGameSystemDebugVisualizer, ~IDebugVisualizer
// calls: operator new, operator delete, _Unwind_Resume
// callers: CDecalGameSystem::OnToggleVisualizer
void __fastcall CDecalGameSystem::EnableVisualizer(CDecalGameSystem *const this, bool enable)
{
  __int64 v3; // rax
  __int64 v4; // rax
  CDecalGameSystemDebugVisualizer *v5; // r12
  __int64 v6; // rax

  if ( enable != (this->m_pDebugVisualizer != 0) )
  {
    if ( this->m_pDebugVisualizer != 0 )
    {
      v3 = (*(*g_pEngineServiceMgr + 224LL))(g_pEngineServiceMgr);
      v4 = (*(*v3 + 16LL))(v3, 3051093416LL);
      if ( v4 != 0 )
      {
        (*(*v4 + 8LL))(v4);
        this->m_pDebugVisualizer = 0;
      }
    }
    else
    {
      v5 = operator new(0x18u);  // new CDecalGameSystemDebugVisualizer (size matches)
      v5->m_pDecalGameSystem = this;
      v5->_vptr_IDebugVisualizer = off_3FCC4F0;  // vptr: CDecalGameSystemDebugVisualizer
      v5->m_pSceneViewOverlayList = (*(*g_pSceneSystem + 472LL))(g_pSceneSystem, 0);
      this->m_pDebugVisualizer = v5;
      v6 = (*(*g_pEngineServiceMgr + 224LL))(g_pEngineServiceMgr);
      (*(*v6 + 8LL))(v6, 3051093416LL, this->m_pDebugVisualizer, 1);
    }
  }
}


// CDecalGameSystem::OnToggleVisualizer  (line 1342, @0x0000000001f34410, libserver.so)  // inlines: Arg, MakeStringToken
// calls: CDecalGameSystem::EnableVisualizer, MurmurHash2LowerCase, RegisterStringToken
void __fastcall CDecalGameSystem::OnToggleVisualizer(
        CDecalGameSystem *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  const char *v4; // r12
  uint32 v5; // eax
  uint32 v6; // [rsp+Ch] [rbp-14h]

  if ( args->m_nArgc == 2 )
  {
    v4 = args->m_ppArgv[1];
    if ( v4 != 0 && *v4 != 0 )
    {
      v5 = MurmurHash2LowerCase(args->m_ppArgv[1], 0x31415926u);
      if ( g_bUpdateStringTokenDatabase )
      {
        v6 = v5;
        RegisterStringToken(v5, v4, 0, 1);
        v5 = v6;
      }
      if ( v5 == -322001934 )
        goto LABEL_9;
      if ( v5 == -1673898471 )
        goto LABEL_3;
    }
  }
  if ( this->m_pDebugVisualizer != 0 )
  {
LABEL_3:
    CDecalGameSystem::EnableVisualizer(this, 0);
    return;
  }
LABEL_9:
  CDecalGameSystem::EnableVisualizer(this, 1);
}


// CDecalGameSystem::OnShootDecal  (line 1368, @0x0000000001f34aa0, libserver.so)  // inlines: CGameTrace, CalcAbsolutePosition, GetComponent<CBodyComponent>, Load, LookupSkeletonInstance, NodeToWorldTransform, RnCollisionAttr_t, VectorMultiply, VectorRotate, VectorTransform, operator*, operator-, operator=, operator[]
// calls: CGameTrace::Init, CDecalGameSystem::TraceDebugRay, CEntityInstance::GetEntityIndex, RandomInt, CBodyComponent::LookupGameSceneNode, CBodyComponent::AddImpulseAtPosition, MatrixInvert, VectorTransform, VectorRotate, CGameSceneNode::CalcAbsolutePositionWhenDirty
void __fastcall CDecalGameSystem::OnShootDecal(
        CDecalGameSystem *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  CBaseEntity *m_pEnt; // rbx
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rax
  CBodyComponent *v9; // r13
  CGameSceneNode *v10; // rax
  CGameSceneNode *v11; // r14
  Vector vPosition; // [rsp+0h] [rbp-150h] BYREF
  Vector vNormal; // [rsp+10h] [rbp-140h] BYREF
  Vector vRelativePos; // [rsp+20h] [rbp-130h] BYREF
  Vector vRelativeNormal; // [rsp+30h] [rbp-120h] BYREF
  matrix3x4a_t invWorldTransform; // [rsp+40h] [rbp-110h] BYREF
  CGameTrace rayHit; // [rsp+70h] [rbp-E0h] BYREF

  memset(&rayHit.m_ShapeAttributes, 0, 31);
  rayHit.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&rayHit);
  if ( CDecalGameSystem::TraceDebugRay(this, ctx, &rayHit) )
  {
    m_pEnt = rayHit.m_pEnt;
    vPosition = rayHit.endpos;
    vNormal = rayHit.plane.normal;
    if ( rayHit.m_pEnt != 0 && CEntityInstance::GetEntityIndex(rayHit.m_pEnt).m_Data != 0 )
    {
      m_pEntity = m_pEnt->m_pEntity;
      m_pInstance = m_pEntity->m_pInstance;
      if ( m_pEntity->m_pInstance != 0 )
      {
        m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
        if ( m_nBaseOffset != 0xFFFF )
        {
          v9 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
          if ( v9 != 0 )
          {
            v10 = CBodyComponent::LookupGameSceneNode(*(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset), 0);
            if ( v10 != 0 )
              v11 = (*(v10->_vptr_CGameSceneNode + 9))(v10);
            else
              v11 = 0;
            invWorldTransform.m_flMatVal[0][1] = -vNormal.y * 100.0;
            invWorldTransform.m_flMatVal[0][2] = -vNormal.z * 100.0;
            invWorldTransform.m_flMatVal[0][0] = -vNormal.x * 100.0;
            CBodyComponent::AddImpulseAtPosition(v9, &invWorldTransform, &vPosition);
            if ( v11->m_bDirtyAbsTransform.m_value )
              CGameSceneNode::CalcAbsolutePositionWhenDirty(v11);
            MatrixInvert(&v11->m_mNodeToWorld, &invWorldTransform);
            VectorTransform(&vPosition.x, &invWorldTransform, &vRelativePos.x);
            VectorRotate(&vNormal.x, &invWorldTransform, &vRelativeNormal.x);
            vPosition = vRelativePos;
            vNormal = vRelativeNormal;
          }
        }
      }
    }
    RandomInt(0, (this->m_decalMaterialParams.m_Size - 1));
  }
}


// CDecalGameSystem::OnClearEntityDecals  (line 1432, @0x0000000001f70f50, libserver.so)  // inlines: CGameTrace, GetComponent<CBodyComponent>, LookupSkeletonInstance, RnCollisionAttr_t, operator[]
// calls: CGameTrace::Init, CDecalGameSystem::TraceDebugRay, CBodyComponent::LookupGameSceneNode, CDecalGameSystem::ClearDecalsForSkeletonInstance
void __fastcall CDecalGameSystem::OnClearEntityDecals(
        CDecalGameSystem *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rax
  CBodyComponent *v8; // rdi
  CGameSceneNode *v9; // rax
  CSkeletonInstance *v10; // rax
  CGameTrace rayHit; // [rsp+0h] [rbp-D0h] BYREF

  memset(&rayHit.m_ShapeAttributes, 0, 31);
  rayHit.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&rayHit);
  if ( CDecalGameSystem::TraceDebugRay(this, ctx, &rayHit) && rayHit.m_pEnt != 0 )
  {
    m_pEntity = rayHit.m_pEnt->m_pEntity;
    m_pInstance = m_pEntity->m_pInstance;
    if ( m_pEntity->m_pInstance != 0 )
    {
      m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
      if ( m_nBaseOffset != 0xFFFF )
      {
        v8 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
        if ( v8 != 0 )
        {
          v9 = CBodyComponent::LookupGameSceneNode(v8, 0);
          if ( v9 != 0 )
          {
            v10 = (*(v9->_vptr_CGameSceneNode + 9))(v9);
            if ( v10 != 0 )
              CDecalGameSystem::ClearDecalsForSkeletonInstance(this, v10, 0xFFFFFFFF);
          }
        }
      }
    }
  }
}


// CDecalGameSystem::OnClearWorldDecals  (line 1468, @0x0000000001f711a0, libserver.so)
// calls: CDecalGameSystem::ClearWorldDecals
void __fastcall CDecalGameSystem::OnClearWorldDecals(
        CDecalGameSystem *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  CDecalGameSystem::ClearWorldDecals(this, 0xFFFFFFFF);
}


// CDecalGameSystem::OnClearAllEntityDecals  (line 1474, @0x0000000001f71470, libserver.so)
// calls: CDecalGameSystem::ClearEntityDecals
void __fastcall CDecalGameSystem::OnClearAllEntityDecals(
        CDecalGameSystem *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  CDecalGameSystem::ClearEntityDecals(this, 0xFFFFFFFF);
}


// CDecalGameSystem::GetAllDecals  (line 1479, @0x0000000001f530c0, libserver.so)  // inlines: AddToTail, BuildHandle, CopyConstruct<const CDecalInfo*>, Element, GetBucketIndex, GetFirstHandle, GetKeyDataIndex, GetNextHandle, GrowMemory, Head, operator[]
// calls: CUtlMemory<const CDecalInfo*, int>::Grow
// callers: CDecalSaveRestoreBlockHandler::Save
void __fastcall CDecalGameSystem::GetAllDecals(
        const CDecalGameSystem *const this,
        CUtlVector<const CDecalInfo*,CUtlMemory<const CDecalInfo*,int> > *const list)
{
  CUtlVectorBase<const CDecalInfo*,CUtlMemory<const CDecalInfo*,int> >::CAllocator *p_m_Memory; // r15
  CDecalInfo *i; // rbx
  __int64 m_Size; // r13
  int v7; // eax
  const CDecalInfo **v8; // rax
  int v9; // ecx
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *m_pMemory; // rsi
  int v11; // eax
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *v12; // rdx
  int v13; // ecx
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *v14; // rsi
  int v15; // eax
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *v16; // rdx
  CDecalInfo *m_pHead; // rbx
  __int64 v18; // r15
  int v19; // edx
  const CDecalInfo **v20; // rdx
  int v21; // r8d
  signed int v22; // eax
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *v23; // rdx
  CDecalInfo *v24; // rbx
  __int64 v25; // r15
  int v26; // edx
  const CDecalInfo **v27; // rdx
  int v28; // r8d
  signed int v29; // eax
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *v30; // rdx
  unsigned int v31; // r13d
  unsigned int v32; // r13d

  p_m_Memory = &list->m_Memory;
  for ( i = this->m_worldDecals.m_pHead; i != 0; i = *(i + 5) )
  {
    while ( 1 )
    {
      if ( *(i + 141) == 0 )
      {
        m_Size = list->m_Size;
        v7 = list->m_Size;
        if ( m_Size == list->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CDecalInfo const*,int>::Grow(p_m_Memory, 1);
          v7 = list->m_Size;
        }
        list->m_Size = v7 + 1;
        v8 = &list->m_Memory.m_pMemory[m_Size];
        if ( v8 != 0 )
          break;
      }
      i = *(i + 5);
      if ( i == 0 )
        goto LABEL_9;
    }
    *v8 = i;
  }
LABEL_9:
  v9 = this->m_rigidEntityDecals.m_Buckets.m_Size;
  if ( v9 > 0 )
  {
    m_pMemory = this->m_rigidEntityDecals.m_Buckets.m_Memory.m_pMemory;
    v11 = 0;
    v12 = m_pMemory + 1;
    if ( m_pMemory->m_Size > 0 )
    {
      v32 = 0;
      goto LABEL_21;
    }
    while ( ++v11 != v9 )
    {
      ++v12;
      if ( v12[-1].m_Size > 0 )
      {
        v32 = v11 << 16;
        while ( 1 )
        {
LABEL_21:
          m_pHead = m_pMemory[HIWORD(v32)].m_Memory.m_pMemory[v32].m_decalList.m_pHead;
          if ( m_pHead != 0 )
          {
            do
            {
              while ( 1 )
              {
                if ( *(m_pHead + 141) == 0 )
                {
                  v18 = list->m_Size;
                  v19 = list->m_Size;
                  if ( v18 == list->m_Memory.m_nAllocationCount )
                  {
                    CUtlMemory<CDecalInfo const*,int>::Grow(&list->m_Memory, 1);
                    v19 = list->m_Size;
                  }
                  list->m_Size = v19 + 1;
                  v20 = &list->m_Memory.m_pMemory[v18];
                  if ( v20 != 0 )
                    break;
                }
                m_pHead = *(m_pHead + 5);
                if ( m_pHead == 0 )
                  goto LABEL_29;
              }
              *v20 = m_pHead;
              m_pHead = *(m_pHead + 5);
            }
            while ( m_pHead != 0 );
LABEL_29:
            v9 = this->m_rigidEntityDecals.m_Buckets.m_Size;
          }
          v21 = (v32 + 1);
          v22 = (v32 + 1) >> 16;
          if ( v22 >= v9 )
            goto LABEL_14;
          m_pMemory = this->m_rigidEntityDecals.m_Buckets.m_Memory.m_pMemory;
          v23 = &m_pMemory[v22 + 1];
          if ( v21 >= m_pMemory[v22].m_Size )
          {
            while ( ++v22 != v9 )
            {
              ++v23;
              if ( v23[-1].m_Size > 0 )
              {
                v21 = 0;
                goto LABEL_37;
              }
            }
            goto LABEL_14;
          }
LABEL_37:
          v32 = v21 | (v22 << 16);
          if ( v32 == -1 )
            goto LABEL_14;
        }
      }
    }
  }
LABEL_14:
  v13 = this->m_skinnedEntityDecals.m_Buckets.m_Size;
  if ( v13 > 0 )
  {
    v14 = this->m_skinnedEntityDecals.m_Buckets.m_Memory.m_pMemory;
    v15 = 0;
    v16 = v14 + 1;
    if ( v14->m_Size > 0 )
    {
      v31 = 0;
      goto LABEL_40;
    }
    while ( ++v15 != v13 )
    {
      ++v16;
      if ( v16[-1].m_Size > 0 )
      {
        v31 = v15 << 16;
        while ( 1 )
        {
LABEL_40:
          v24 = v14[HIWORD(v31)].m_Memory.m_pMemory[v31].m_decalList.m_pHead;
          if ( v24 != 0 )
          {
            do
            {
              while ( 1 )
              {
                if ( *(v24 + 141) == 0 )
                {
                  v25 = list->m_Size;
                  v26 = list->m_Size;
                  if ( v25 == list->m_Memory.m_nAllocationCount )
                  {
                    CUtlMemory<CDecalInfo const*,int>::Grow(&list->m_Memory, 1);
                    v26 = list->m_Size;
                  }
                  list->m_Size = v26 + 1;
                  v27 = &list->m_Memory.m_pMemory[v25];
                  if ( v27 != 0 )
                    break;
                }
                v24 = *(v24 + 5);
                if ( v24 == 0 )
                  goto LABEL_48;
              }
              *v27 = v24;
              v24 = *(v24 + 5);
            }
            while ( v24 != 0 );
LABEL_48:
            v13 = this->m_skinnedEntityDecals.m_Buckets.m_Size;
          }
          v28 = (v31 + 1);
          v29 = (v31 + 1) >> 16;
          if ( v29 >= v13 )
            return;
          v14 = this->m_skinnedEntityDecals.m_Buckets.m_Memory.m_pMemory;
          v30 = &v14[v29 + 1];
          if ( v14[v29].m_Size <= v28 )
          {
            while ( ++v29 != v13 )
            {
              ++v30;
              if ( v30[-1].m_Size > 0 )
              {
                v28 = 0;
                goto LABEL_56;
              }
            }
            return;
          }
LABEL_56:
          v31 = v28 | (v29 << 16);
          if ( v31 == -1 )
            return;
        }
      }
    }
  }
}


// CDecalGameSystem::OnPrintDecalInfo  (line 1523, @0x0000000001f311a0, libserver.so)  // inlines: BuildHandle, Count, Element, GetBucketIndex, GetFirstHandle, GetKeyDataIndex, GetNextHandle, ListLength<CDecalInfo>, operator[]
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "Skinned Entity Decals: %d\n", "Rigid Entity Decals: %d\n", "World Decals: %d\n", "Server decals\n", "---------------\n"
// globals: LOG_DECALGAMESYSTEM
void __fastcall CDecalGameSystem::OnPrintDecalInfo(
        CDecalGameSystem *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  CDecalInfo *m_pHead; // rax
  int i; // r12d
  int m_Size; // ecx
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *m_pMemory; // rdi
  int v8; // eax
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *v9; // rdx
  int v10; // ebx
  int v11; // r8d
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *v12; // rcx
  int v13; // eax
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *v14; // rdx
  int v15; // r13d
  int v16; // esi
  CDecalInfo *j; // rdx
  int v18; // r8d
  signed int v19; // eax
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *v20; // rdx
  int v21; // esi
  CDecalInfo *k; // rdx
  int v23; // edi
  signed int v24; // eax
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *v25; // rdx
  unsigned int v26; // eax
  unsigned int v27; // eax

  if ( LoggingSystem_IsChannelEnabled(LOG_DECALGAMESYSTEM, 1) != 0 )
    LoggingSystem_Log(LOG_DECALGAMESYSTEM, 1, "Server decals\n");
  if ( LoggingSystem_IsChannelEnabled(LOG_DECALGAMESYSTEM, 1) != 0 )
    LoggingSystem_Log(LOG_DECALGAMESYSTEM, 1, "---------------\n");
  m_pHead = this->m_worldDecals.m_pHead;
  for ( i = 0; m_pHead != 0; ++i )
    m_pHead = *(m_pHead + 5);
  m_Size = this->m_rigidEntityDecals.m_Buckets.m_Size;
  if ( m_Size <= 0 )
  {
LABEL_12:
    v10 = 0;
    goto LABEL_13;
  }
  m_pMemory = this->m_rigidEntityDecals.m_Buckets.m_Memory.m_pMemory;
  v8 = 0;
  v9 = m_pMemory + 1;
  if ( m_pMemory->m_Size <= 0 )
  {
    while ( ++v8 != m_Size )
    {
      ++v9;
      if ( v9[-1].m_Size > 0 )
      {
        v27 = v8 << 16;
        goto LABEL_26;
      }
    }
    goto LABEL_12;
  }
  v27 = 0;
LABEL_26:
  v10 = 0;
  do
  {
    v16 = 0;
    for ( j = m_pMemory[HIWORD(v27)].m_Memory.m_pMemory[v27].m_decalList.m_pHead; j != 0; ++v16 )
      j = *(j + 5);
    v10 += v16;
    v18 = (v27 + 1);
    v19 = (v27 + 1) >> 16;
    if ( m_Size <= v19 )
      break;
    v20 = &m_pMemory[v19 + 1];
    if ( v18 >= m_pMemory[v19].m_Size )
    {
      while ( ++v19 != m_Size )
      {
        ++v20;
        if ( v20[-1].m_Size > 0 )
        {
          v18 = 0;
          goto LABEL_34;
        }
      }
      break;
    }
LABEL_34:
    v27 = v18 | (v19 << 16);
  }
  while ( v27 != -1 );
LABEL_13:
  v11 = this->m_skinnedEntityDecals.m_Buckets.m_Size;
  if ( v11 <= 0 )
  {
LABEL_18:
    v15 = 0;
    goto LABEL_19;
  }
  v12 = this->m_skinnedEntityDecals.m_Buckets.m_Memory.m_pMemory;
  v13 = 0;
  v14 = v12 + 1;
  if ( v12->m_Size <= 0 )
  {
    while ( ++v13 != v11 )
    {
      ++v14;
      if ( v14[-1].m_Size > 0 )
      {
        v26 = v13 << 16;
        goto LABEL_37;
      }
    }
    goto LABEL_18;
  }
  v26 = 0;
LABEL_37:
  v15 = 0;
  do
  {
    v21 = 0;
    for ( k = v12[HIWORD(v26)].m_Memory.m_pMemory[v26].m_decalList.m_pHead; k != 0; ++v21 )
      k = *(k + 5);
    v15 += v21;
    v23 = (v26 + 1);
    v24 = (v26 + 1) >> 16;
    if ( v11 <= v24 )
      break;
    v25 = &v12[v24 + 1];
    if ( v23 >= v12[v24].m_Size )
    {
      while ( ++v24 != v11 )
      {
        ++v25;
        if ( v25[-1].m_Size > 0 )
        {
          v23 = 0;
          goto LABEL_45;
        }
      }
      break;
    }
LABEL_45:
    v26 = v23 | (v24 << 16);
  }
  while ( v26 != -1 );
LABEL_19:
  if ( LoggingSystem_IsChannelEnabled(LOG_DECALGAMESYSTEM, 1) != 0 )
    LoggingSystem_Log(LOG_DECALGAMESYSTEM, 1, "World Decals: %d\n", i);
  if ( LoggingSystem_IsChannelEnabled(LOG_DECALGAMESYSTEM, 1) != 0 )
    LoggingSystem_Log(LOG_DECALGAMESYSTEM, 1, "Rigid Entity Decals: %d\n", v10);
  if ( LoggingSystem_IsChannelEnabled(LOG_DECALGAMESYSTEM, 1) != 0 )
    LoggingSystem_Log(LOG_DECALGAMESYSTEM, 1, "Skinned Entity Decals: %d\n", v15);
}


// CDecalGameSystem::RenderDebugDecal  (line 1597, @0x0000000001f344c0, libserver.so)  // inlines: BoxAngles, CrossProduct, Init, InitFLU, Vector, VertexColor_t, normal, operator-, position, saxis
// calls: V_snprintf, ConcatTransforms_Aligned, MatrixAngles, AngleQuaternion, __stack_chk_fail
// callers: CDecalGameSystem::RenderDebuggingData
void __fastcall CDecalGameSystem::RenderDebugDecal(
        CDecalGameSystem *const this,
        CDecalInfo *pDecal,
        float flTime,
        ISceneViewDebugOverlays *pDebugOverlays,
        const matrix3x4a_t *pTransform)
{
  float v8; // xmm0_4
  const google::protobuf::Descriptor *containing_type; // rax
  float v10; // xmm8_4
  float v11; // xmm9_4
  float v12; // xmm10_4
  const google::protobuf::MessageOptions *options; // rax
  float v14; // xmm5_4
  float v15; // xmm1_4
  float v16; // xmm3_4
  float *v17; // rax
  float v18; // xmm4_4
  float v19; // xmm2_4
  float v20; // xmm0_4
  void (__fastcall *v21)(ISceneViewDebugOverlays *, Quaternion *, _QWORD, char *, VertexColor_t *, float, double); // rax
  vec_t v22; // xmm3_4
  vec_t v23; // xmm1_4
  uint8 b; // r13
  uint8 a; // bl
  int (**vptr_ISceneViewDebugOverlays)(...); // rax
  int (*v27)(...); // rax
  uint8 g; // [rsp+8h] [rbp-108h]
  float flSecondsSincePlaced; // [rsp+Ch] [rbp-104h]
  uint8 flSecondsSincePlaceda; // [rsp+Ch] [rbp-104h]
  VertexColor_t color; // [rsp+10h] [rbp-100h] BYREF
  _BYTE v32[16]; // [rsp+20h] [rbp-F0h] BYREF
  QAngle angles; // [rsp+30h] [rbp-E0h] BYREF
  Vector vHalfSize; // [rsp+40h] [rbp-D0h] BYREF
  _DWORD v35[4]; // [rsp+50h] [rbp-C0h] BYREF
  float v36[4]; // [rsp+60h] [rbp-B0h] BYREF
  Quaternion outQuat; // [rsp+70h] [rbp-A0h] BYREF
  matrix3x4a_t mDecalTransform; // [rsp+80h] [rbp-90h] BYREF
  char pTimer[40]; // [rsp+B0h] [rbp-60h] BYREF
  unsigned __int64 v40; // [rsp+D8h] [rbp-38h]

  v40 = __readfsqword(0x28u);
  flSecondsSincePlaced = flTime - *(pDecal + 3);
  V_snprintf(pTimer, 32, "%.2f", ((*(pDecal + 4) + *(pDecal + 5)) - flSecondsSincePlaced));
  v8 = *(pDecal + 4);
  if ( flSecondsSincePlaced <= v8 )
  {
    containing_type = *(pDecal + 10);
    color.color = -1;
    if ( containing_type != 0 )
      goto LABEL_3;
  }
  else
  {
    LOWORD(color.color) = 255;
    color.b = 0;
    color.a = ((1.0 - ((flSecondsSincePlaced - v8) / *(pDecal + 5))) * 255.0);
    containing_type = *(pDecal + 10);
    if ( containing_type != 0 )
      goto LABEL_3;
  }
  containing_type = CMsgPlaceDecalEvent::default_instance_->containing_type_;
LABEL_3:
  v10 = *&containing_type->options_;
  v11 = *(&containing_type->containing_type_ + 1);
  v12 = *&containing_type->containing_type_;
  options = *(pDecal + 11);
  if ( options == 0 )
    options = CMsgPlaceDecalEvent::default_instance_->options_;
  v14 = *(options + 8);
  v15 = *(options + 7);
  v16 = *(options + 6);
  v17 = *(pDecal + 12);
  if ( v17 == 0 )
    v17 = *&CMsgPlaceDecalEvent::default_instance_->is_placeholder_;
  v18 = v17[8];
  v19 = v17[7];
  v20 = v17[6];
  *&mDecalTransform.m_flMatVal[1][0] = __PAIR64__(LODWORD(v19), LODWORD(v15));
  *&mDecalTransform.m_flMatVal[0][0] = __PAIR64__(LODWORD(v20), LODWORD(v16));
  mDecalTransform.m_flMatVal[0][3] = v12;
  mDecalTransform.m_flMatVal[1][3] = v11;
  *&mDecalTransform.m_flMatVal[2][0] = __PAIR64__(LODWORD(v18), LODWORD(v14));
  mDecalTransform.m_flMatVal[0][2] = (v15 * v18) - (v14 * v19);
  mDecalTransform.m_flMatVal[2][3] = v10;
  mDecalTransform.m_flMatVal[1][2] = (v14 * v20) - (v16 * v18);
  mDecalTransform.m_flMatVal[2][2] = (v19 * v16) - (v20 * v15);
  if ( pTransform != 0 )
    ConcatTransforms_Aligned(pTransform, &mDecalTransform, &mDecalTransform);
  MatrixAngles(&mDecalTransform, &angles);
  (*(pDebugOverlays->_vptr_ISceneViewDebugOverlays + 27))(pDebugOverlays, &mDecalTransform, 1, 10.0, 0.0);
  v21 = *(pDebugOverlays->_vptr_ISceneViewDebugOverlays + 25);
  outQuat.x = mDecalTransform.m_flMatVal[0][3];
  outQuat.y = mDecalTransform.m_flMatVal[1][3];
  outQuat.z = mDecalTransform.m_flMatVal[2][3];
  v21(pDebugOverlays, &outQuat, 0, pTimer, &color, 10000.0, 0.0);
  v22 = *(pDecal + 29) * 0.5;
  v23 = 0.5 * *(pDecal + 31);
  b = color.b;
  vHalfSize.z = *(pDecal + 30) * 0.5;
  a = color.a;
  vHalfSize.y = v22;
  vHalfSize.x = v23;
  v36[2] = -vHalfSize.z;
  g = color.g;
  v35[0] = LODWORD(mDecalTransform.m_flMatVal[0][3]);
  flSecondsSincePlaceda = color.r;
  v35[1] = LODWORD(mDecalTransform.m_flMatVal[1][3]);
  v36[0] = -v23;
  v36[1] = -v22;
  v35[2] = LODWORD(mDecalTransform.m_flMatVal[2][3]);
  AngleQuaternion(&angles, &outQuat);
  vptr_ISceneViewDebugOverlays = pDebugOverlays->_vptr_ISceneViewDebugOverlays;
  v32[2] = b;
  v32[3] = a;
  v27 = vptr_ISceneViewDebugOverlays[15];
  v32[0] = flSecondsSincePlaceda;
  v32[1] = g;
  v27(pDebugOverlays, v35, v36, &vHalfSize, &outQuat, v32, 0.0, 0);
}


// CDecalGameSystem::RenderDebuggingData  (line 1649, @0x0000000001f39fd0, libserver.so)  // inlines: BuildHandle, CBoneAccessor, CEntityHandle, CalcAbsolutePosition, Cleanup, Element, GetBucketIndex, GetFirstHandle, GetKeyDataIndex, GetNextHandle, GetWorldSpaceBones, GetWorldSpaceState, Head, Load, NodeToWorldTransform, operator[], ~CBoneAccessor
// calls: CGlobalVarsBase::curtime, CDecalGameSystem::RenderDebugDecal, CDecalGameSystem::GetSkeletonInstance, CGameSceneNode::CalcAbsolutePositionWhenDirty, CSkeletonInstance::GetNumBones, CSkeletonInstance::CalcWorldSpaceBones, operator delete [], CBoneAccessor<matrix3x4a_t>::Cleanup, _Unwind_Resume
// callers: CDecalGameSystemDebugVisualizer::DebugDraw
void __fastcall CDecalGameSystem::RenderDebuggingData(
        CDecalGameSystem *const this,
        ISceneViewDebugOverlays *pDebugOverlays)
{
  float v4; // xmm0_4
  CDecalInfo *m_pHead; // rbx
  int m_Size; // ecx
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *m_pMemory; // rsi
  int v8; // r14d
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *v9; // rax
  int v10; // ecx
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *v11; // rsi
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *v12; // rax
  int v13; // ebx
  int v14; // ebx
  int v15; // r8d
  signed int v16; // eax
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // r14
  __int64 v20; // rcx
  SkeletonInstanceDecalList_t *v21; // rax
  CUtlStringToken v22; // edx
  CSkeletonInstance *SkeletonInstance; // rax
  CDecalInfo *v24; // r14
  int v25; // ebx
  int v26; // r14d
  int v27; // r8d
  signed int v28; // eax
  CUtlVector<SkeletonInstanceDecalList_t,CUtlMemory<SkeletonInstanceDecalList_t,int> > *v29; // rdx
  unsigned int v30; // eax
  __int64 v31; // rbx
  __int64 v32; // rcx
  SkeletonInstanceDecalList_t *v33; // rax
  CUtlStringToken v34; // edx
  CSkeletonInstance *v35; // rdx
  CDecalInfo *v36; // rbx
  const uint32 *m_pReadableBones; // rsi
  const matrix3x4a_t *m_pTransforms; // rcx
  int m_nBoneCount; // eax
  int v40; // r14d
  CSkeletonInstance *pSkeletonInstance; // [rsp+0h] [rbp-70h]
  CSkeletonInstance *pSkeletonInstancec; // [rsp+0h] [rbp-70h]
  CSkeletonInstance *pSkeletonInstancea; // [rsp+0h] [rbp-70h]
  CSkeletonInstance *pSkeletonInstanceb; // [rsp+0h] [rbp-70h]
  float flTime; // [rsp+Ch] [rbp-64h]
  CBoneAccessor<matrix3x4a_t> boneToWorld; // [rsp+10h] [rbp-60h] BYREF
  __int64 v47; // [rsp+28h] [rbp-48h]
  __int64 v48; // [rsp+30h] [rbp-40h]
  __int64 v49; // [rsp+38h] [rbp-38h]

  v4 = CGlobalVarsBase::curtime(gpGlobals, 0);
  m_pHead = this->m_worldDecals.m_pHead;
  for ( flTime = v4; m_pHead != 0; m_pHead = *(m_pHead + 5) )
    CDecalGameSystem::RenderDebugDecal(this, m_pHead, flTime, pDebugOverlays, 0);
  m_Size = this->m_rigidEntityDecals.m_Buckets.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_rigidEntityDecals.m_Buckets.m_Memory.m_pMemory;
    v8 = 0;
    v9 = m_pMemory + 1;
    if ( m_pMemory->m_Size <= 0 )
    {
      while ( ++v8 != m_Size )
      {
        ++v9;
        if ( v9[-1].m_Size > 0 )
        {
          v40 = v8 << 16;
          goto LABEL_15;
        }
      }
    }
    else
    {
      v40 = 0;
      while ( 1 )
      {
LABEL_15:
        v14 = -1;
        v15 = (v40 + 1);
        v16 = (v40 + 1) >> 16;
        if ( v16 < m_Size )
        {
          v17 = &m_pMemory[v16 + 1];
          if ( v15 >= m_pMemory[v16].m_Size )
          {
            do
            {
              if ( ++v16 == m_Size )
              {
                v14 = -1;
                goto LABEL_21;
              }
              ++v17;
            }
            while ( v17[-1].m_Size <= 0 );
            v15 = 0;
          }
          v14 = v15 | (v16 << 16);
        }
LABEL_21:
        v18 = v40;
        v19 = v40;
        v20 = HIWORD(v18);
        v21 = &m_pMemory[v20].m_Memory.m_pMemory[v19];
        pSkeletonInstance = (v20 * 24);
        v22.m_nHashCode = v21->m_nSkeletonInstanceHash;
        LODWORD(boneToWorld.m_pBones) = v21->m_nEntityHandle.m_Index;
        SkeletonInstance = CDecalGameSystem::GetSkeletonInstance(this, &boneToWorld, v22);
        if ( SkeletonInstance != 0 )
        {
          v24 = (*(&this->m_rigidEntityDecals.m_Buckets.m_Memory.m_pMemory->m_Memory.m_pMemory + pSkeletonInstance))[v19].m_decalList.m_pHead;
          if ( v24 != 0 )
          {
            if ( SkeletonInstance->m_bDirtyAbsTransform.m_value )
            {
              pSkeletonInstancec = SkeletonInstance;
              CGameSceneNode::CalcAbsolutePositionWhenDirty(SkeletonInstance);
              SkeletonInstance = pSkeletonInstancec;
            }
            boneToWorld = *&SkeletonInstance->m_mNodeToWorld.m_flMatVal[0][0];
            v47 = *&SkeletonInstance->m_mNodeToWorld.m_flMatVal[1][2];
            v48 = *&SkeletonInstance->m_mNodeToWorld.m_flMatVal[2][0];
            v49 = *&SkeletonInstance->m_mNodeToWorld.m_flMatVal[2][2];
            do
            {
              CDecalGameSystem::RenderDebugDecal(this, v24, flTime, pDebugOverlays, &boneToWorld);
              v24 = *(v24 + 5);
            }
            while ( v24 != 0 );
          }
        }
        if ( v14 == -1 )
          break;
        m_Size = this->m_rigidEntityDecals.m_Buckets.m_Size;
        v40 = v14;
        m_pMemory = this->m_rigidEntityDecals.m_Buckets.m_Memory.m_pMemory;
      }
    }
  }
  v10 = this->m_skinnedEntityDecals.m_Buckets.m_Size;
  if ( v10 > 0 )
  {
    v11 = this->m_skinnedEntityDecals.m_Buckets.m_Memory.m_pMemory;
    if ( v11->m_Size > 0 )
    {
      v25 = 0;
      while ( 1 )
      {
LABEL_32:
        v26 = -1;
        v27 = (v25 + 1);
        v28 = (v25 + 1) >> 16;
        if ( v28 < v10 )
        {
          v29 = &v11[v28 + 1];
          if ( v11[v28].m_Size <= v27 )
          {
            do
            {
              if ( ++v28 == v10 )
              {
                v26 = -1;
                goto LABEL_38;
              }
              ++v29;
            }
            while ( v29[-1].m_Size <= 0 );
            v27 = 0;
          }
          v26 = v27 | (v28 << 16);
        }
LABEL_38:
        v30 = v25;
        v31 = v25;
        v32 = HIWORD(v30);
        v33 = &v11[v32].m_Memory.m_pMemory[v31];
        pSkeletonInstancea = (v32 * 24);
        v34.m_nHashCode = v33->m_nSkeletonInstanceHash;
        LODWORD(boneToWorld.m_pBones) = v33->m_nEntityHandle.m_Index;
        v35 = CDecalGameSystem::GetSkeletonInstance(this, &boneToWorld, v34);
        if ( v35 != 0 )
        {
          v36 = (*(&this->m_skinnedEntityDecals.m_Buckets.m_Memory.m_pMemory->m_Memory.m_pMemory + pSkeletonInstancea))[v31].m_decalList.m_pHead;
          if ( v36 != 0 )
          {
            pSkeletonInstanceb = v35;
            if ( CSkeletonInstance::GetNumBones(v35) > 0 )
            {
              CSkeletonInstance::CalcWorldSpaceBones(pSkeletonInstanceb, CModelSkeleton::BoneFlags_t::FLAG_MESH);
              m_pReadableBones = pSkeletonInstanceb->m_modelState.m_simulationState.m_pReadableBones;
              m_pTransforms = pSkeletonInstanceb->m_modelState.m_simulationState.m_pTransforms;
              m_nBoneCount = pSkeletonInstanceb->m_modelState.m_simulationState.m_nBoneCount;
              boneToWorld.m_bOwnsMemory = 0;
              boneToWorld.m_pReadableBones = m_pReadableBones;
              boneToWorld.m_pBones = m_pTransforms;
              boneToWorld.m_nBones = m_nBoneCount;
              while ( 1 )
              {
                CDecalGameSystem::RenderDebugDecal(this, v36, flTime, pDebugOverlays, &m_pTransforms[*(v36 + 7)]);
                v36 = *(v36 + 5);
                if ( v36 == 0 )
                  break;
                m_pTransforms = boneToWorld.m_pBones;
              }
              if ( boneToWorld.m_bOwnsMemory )
              {
                if ( boneToWorld.m_pBones != 0 )
                  operator delete[](boneToWorld.m_pBones);
                if ( boneToWorld.m_pReadableBones != 0 )
                  operator delete[](boneToWorld.m_pReadableBones);
              }
            }
          }
        }
        if ( v26 == -1 )
          break;
        v10 = this->m_skinnedEntityDecals.m_Buckets.m_Size;
        v25 = v26;
        v11 = this->m_skinnedEntityDecals.m_Buckets.m_Memory.m_pMemory;
      }
    }
    else
    {
      v12 = v11 + 1;
      v13 = 0;
      while ( ++v13 != v10 )
      {
        ++v12;
        if ( v12[-1].m_Size > 0 )
        {
          v25 = v13 << 16;
          goto LABEL_32;
        }
      }
    }
  }
}


// CDecalGameSystem::TraceDebugRay  (line 1716, @0x0000000001f348b0, libserver.so)  // inlines: CGameQueryAttributes, Init, LengthSqr, Ray_t, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnore, SetInteractsWith, ToBasePlayer, TraceRay, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, operator*, operator=
// calls: UTIL_GetCommandClient, CBasePlayer::EyeVectors, EntityIDFromBaseEntity, HierarchyIDFromBaseEntity, CGamePhysicsQueryInterface::TraceRay
// callers: CDecalGameSystem::OnShootDecal, CDecalGameSystem::OnClearEntityDecals
bool __fastcall CDecalGameSystem::TraceDebugRay(
        CDecalGameSystem *const this,
        const CCommandContext *const ctx,
        CGameTrace *pRayHit)
{
  CBasePlayer *CommandClient; // rax
  CBasePlayer *v5; // rbx
  vec_t v6; // xmm1_4
  float v8; // [rsp+4h] [rbp-ACh]
  __int64 v9; // [rsp+8h] [rbp-A8h]
  Vector vForward; // [rsp+10h] [rbp-A0h] BYREF
  CGameQueryAttributes filter; // [rsp+20h] [rbp-90h] BYREF
  Ray_t ray; // [rsp+50h] [rbp-60h] BYREF

  CommandClient = UTIL_GetCommandClient(ctx);
  v5 = CommandClient;
  if ( CommandClient == 0 || (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) == 0 )
    return 0;
  *&ray.m_Start.x = (*(v5->_vptr_IHandleEntity + 164))(v5);
  ray.m_Start.z = v6;
  v8 = v6;
  v9 = *&ray.m_Start.x;
  CBasePlayer::EyeVectors(v5, &vForward, 0, 0);
  filter.m_nHierarchyId = 0;
  filter.m_nInteractsExclude = 0;
  filter.m_nInteractsAs = 0;
  filter.m_nEntityIdToIgnore = -1;
  filter.m_nObjectSetMask = 7;
  *(&filter.RnQueryShapeAttr_t + 31) = *(&filter.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  filter.m_nCollisionGroup = 4;
  filter.m_nInteractsWith = 2;
  filter.m_nEntityIdToIgnore = EntityIDFromBaseEntity(v5);
  filter.m_nHierarchyId = HierarchyIDFromBaseEntity(v5);
  ray.m_Start.w = 0.0;
  ray.m_IsRay = 1;
  memset(&ray.m_Delta.w, 0, 40);
  ray.m_Delta.x = (vForward.x * 16384.0) - *&v9;
  ray.m_Delta.y = (vForward.y * 16384.0) - *(&v9 + 1);
  ray.m_Delta.z = (16384.0 * vForward.z) - v8;
  *&ray.m_Start.x = v9;
  ray.m_Start.z = v8;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  return CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &filter, pRayHit);
}


// CDecalGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 1739, @0x0000000001f34d10, libserver.so)
void __cdecl CDecalGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CDecalGameSystemDebugVisualizer::CDecalGameSystemDebugVisualizer  (line 1745, @0x0000000001f34d20, libserver.so)  // inlines: ~IDebugVisualizer
// calls: _Unwind_Resume
void __fastcall CDecalGameSystemDebugVisualizer::CDecalGameSystemDebugVisualizer(
        CDecalGameSystemDebugVisualizer *const this,
        CDecalGameSystem *pDecalGameSystem)
{
  this->_vptr_IDebugVisualizer = off_3FCC4F0;  // vptr: CDecalGameSystemDebugVisualizer
  this->m_pDecalGameSystem = pDecalGameSystem;
  this->m_pSceneViewOverlayList = (*(*g_pSceneSystem + 472LL))(g_pSceneSystem, 0);
}


// CDecalGameSystemDebugVisualizer::~CDecalGameSystemDebugVisualizer  (line 1751, @0x0000000001f29f00, libserver.so)  // inlines: ~IDebugVisualizer
void __fastcall CDecalGameSystemDebugVisualizer::~CDecalGameSystemDebugVisualizer(
        CDecalGameSystemDebugVisualizer *const this)
{
  this->_vptr_IDebugVisualizer = off_3FCC4F0;  // vptr: CDecalGameSystemDebugVisualizer
  (*(*g_pSceneSystem + 480LL))(g_pSceneSystem, this->m_pSceneViewOverlayList);
  this->_vptr_IDebugVisualizer = off_3FCBB90;  // vptr: IDebugVisualizer
}


// CDecalGameSystemDebugVisualizer::~CDecalGameSystemDebugVisualizer  (line 1751, @0x0000000001f2a780, libserver.so)  // inlines: ~CDecalGameSystemDebugVisualizer, ~IDebugVisualizer
// calls: operator delete
void __fastcall CDecalGameSystemDebugVisualizer::~CDecalGameSystemDebugVisualizer(
        CDecalGameSystemDebugVisualizer *const this)
{
  this->_vptr_IDebugVisualizer = off_3FCC4F0;  // vptr: CDecalGameSystemDebugVisualizer
  (*(*g_pSceneSystem + 480LL))(g_pSceneSystem, this->m_pSceneViewOverlayList);
  this->_vptr_IDebugVisualizer = off_3FCBB90;  // vptr: IDebugVisualizer
  operator delete(this);
}


// CDecalGameSystemDebugVisualizer::SetOverlayStartTime  (line 1756, @0x0000000001f29f40, libserver.so)
void __fastcall CDecalGameSystemDebugVisualizer::SetOverlayStartTime(
        CDecalGameSystemDebugVisualizer *const this,
        double a2,
        float flOverlayStartTime,
        bool bInterpolated)
{
  ;
}


// CDecalGameSystemDebugVisualizer::DebugDraw  (line 1761, @0x0000000001f3a3f0, libserver.so)
// calls: CDecalGameSystem::RenderDebuggingData
void __fastcall CDecalGameSystemDebugVisualizer::DebugDraw(
        CDecalGameSystemDebugVisualizer *const this,
        CFrustum *pFrustum,
        ISceneView *pView,
        float flRenderTime,
        float flTimeStep)
{
  CDecalGameSystem::RenderDebuggingData(this->m_pDecalGameSystem, this->m_pSceneViewOverlayList);
  (*(this->m_pSceneViewOverlayList->_vptr_ISceneViewDebugOverlays + 74))(
    this->m_pSceneViewOverlayList,
    pView,
    flRenderTime);
}


// CDecalGameSystemDebugVisualizer::AgeList  (line 1767, @0x0000000001f29f50, libserver.so)
void __fastcall CDecalGameSystemDebugVisualizer::AgeList(
        CDecalGameSystemDebugVisualizer *const this,
        double a2,
        float flRenderTime,
        float flTimeStep)
{
  (*(this->m_pSceneViewOverlayList->_vptr_ISceneViewDebugOverlays + 75))(
    this->m_pSceneViewOverlayList,
    a2,
    flRenderTime,
    flTimeStep);
}


// CDecalInfo::AddDatadescMetadataKeys  (line 1772, @0x0000000001f34d70, libserver.so)
void __fastcall CDecalInfo::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CDecalInfo::GetBaseMap  (line 1772, @0x0000000001f34d80, libserver.so)
datamap_t *__cdecl CDecalInfo::GetBaseMap()
{
  return 0;
}


// DataMapInit<CDecalInfo>  (line 1772, @0x0000000001f34d90, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: __static_initialization_and_destruction_0
// strings: "CDecalInfo"
// globals: `guard variable for'DataMapInit<CDecalInfo>(CDecalInfo *)::nameHolder, `guard variable for'DataMapInit<CDecalInfo>(CDecalInfo *)::dataDesc, CDecalInfo::m_DataMap, CProtobufDataopsInstantiator::GetDataOps<PlaceDecalEvent_t>(PlaceDecalEvent_t *)::ops, DataMapInit<CDecalInfo>(CDecalInfo *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CDecalInfo>(CDecalInfo *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CDecalInfo>(CDecalInfo *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDecalInfo>(CDecalInfo *)::nameHolder) != 0 )
  {
    DataMapInit<CDecalInfo>(CDecalInfo *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CDecalInfo>(CDecalInfo *)::nameHolder.m_pszBase = "CDecalInfo";
    DataMapInit<CDecalInfo>(CDecalInfo *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CDecalInfo>(CDecalInfo *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CDecalInfo>(CDecalInfo *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CDecalInfo>(CDecalInfo *)::nameHolder.m_nLenBase = 10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDecalInfo>(CDecalInfo *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CDecalInfo>(CDecalInfo *)::nameHolder,
      &_dso_handle);
  }
  CDecalInfo::m_DataMap.baseMap = 0;
  if ( `guard variable for'datamap_t * DataMapInit<CDecalInfo>(CDecalInfo *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDecalInfo>(CDecalInfo *)::dataDesc) != 0 )
  {
    DataMapInit<CDecalInfo>(CDecalInfo *)::dataDesc[1].pSaveRestoreOps = CProtobufDataopsInstantiator::GetDataOps<PlaceDecalEvent_t>(PlaceDecalEvent_t *)::ops;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDecalInfo>(CDecalInfo *)::dataDesc);
  }
  CDecalInfo::m_DataMap.dataNumFields = 13;
  CDecalInfo::m_DataMap.dataDesc = &DataMapInit<CDecalInfo>(CDecalInfo *)::dataDesc[1];
  return &CDecalInfo::m_DataMap;
}


// CDecalSaveRestoreBlockHandler::GetBlockName  (line 1800, @0x0000000001f71ea0, libserver.so)
const char *__fastcall CDecalSaveRestoreBlockHandler::GetBlockName(const CDecalSaveRestoreBlockHandler *const this)
{
  return "Decals";
}


// CDecalSaveRestoreBlockHandler::WriteSaveHeaders  (line 1805, @0x0000000001f71eb0, libserver.so)
// globals: DECALS_SAVE_RESTORE_VERSION
void __fastcall CDecalSaveRestoreBlockHandler::WriteSaveHeaders(
        CDecalSaveRestoreBlockHandler *const this,
        ISave *pSave)
{
  (*(pSave->_vptr_ISave + 10))(pSave, &DECALS_SAVE_RESTORE_VERSION, 1);
}


// CDecalSaveRestoreBlockHandler::ReadRestoreHeaders  (line 1810, @0x0000000001f71ed0, libserver.so)
// globals: DECALS_SAVE_RESTORE_VERSION
void __fastcall CDecalSaveRestoreBlockHandler::ReadRestoreHeaders(
        CDecalSaveRestoreBlockHandler *const this,
        IRestore *pRestore)
{
  __int16 version[9]; // [rsp+Eh] [rbp-12h] BYREF

  (*(pRestore->_vptr_IRestore + 23))(pRestore, version, 1, 0);
  this->m_bDoLoad = version[0] == DECALS_SAVE_RESTORE_VERSION;
}


// CDecalSaveRestoreBlockHandler::Save  (line 1818, @0x0000000001f95710, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDecalGameSystem::GetAllDecals, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CUtlMemory<const CDecalInfo*, int>::Purge, _Unwind_Resume
// strings: "SV", "%s:  %d decals saved \n"
// globals: g_pDecalGameSystem, CDecalInfo::m_DataMap
void __fastcall CDecalSaveRestoreBlockHandler::Save(CDecalSaveRestoreBlockHandler *const this, ISave *pSave)
{
  __int64 v3; // r12
  int i; // ebx
  int c; // [rsp+Ch] [rbp-44h] BYREF
  CUtlVector<const CDecalInfo*,CUtlMemory<const CDecalInfo*,int> > decals; // [rsp+10h] [rbp-40h] BYREF

  decals.m_Size = 0;
  decals.m_Memory.m_pMemory = 0;
  decals.m_Memory.m_nAllocationCount = 0;
  decals.m_Memory.m_nGrowSize = 0;
  CDecalGameSystem::GetAllDecals(g_pDecalGameSystem, &decals);
  c = decals.m_Size;
  (*(pSave->_vptr_ISave + 11))(pSave, &c, 1);
  if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 0) != 0 )
    LoggingSystem_Log(LOG_SAVERESTORE, 0, "%s:  %d decals saved \n", "SV", c);
  v3 = 0;
  for ( i = 0; decals.m_Size > i; ++v3 )
  {
    (*(pSave->_vptr_ISave + 5))(pSave, decals.m_Memory.m_pMemory[v3], &CDecalInfo::m_DataMap);
    ++i;
  }
  decals.m_Size = 0;
  if ( (decals.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDecalInfo const*,int>::Purge(&decals.m_Memory);
    if ( (decals.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDecalInfo const*,int>::Purge(&decals.m_Memory);
  }
}


// CDecalSaveRestoreBlockHandler::Restore  (line 1838, @0x0000000001fa5810, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, CCopyableUtlVector, CDecalInfo, CEntityHandle, CEntityIndex, CGameQueryAttributes, CGameTrace, CMsgVectorToVector, CNetMessagePB, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CalcAbsolutePosition, Clear, Construct<SaveRestoreTranslate_t>, CrossProduct, DotProduct, Element, FromIndex, GetComponent<CBodyComponent>, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, IndexToIdentity, Init, IsUsed, LengthSqr, Load, LookupEntityByIndex, LookupRestoreSpotSaveIndex, LookupSkeletonInstance, NodeToWorldTransform, PlaceDecalEvent_t, Purge, Ray_t, Rebuild, RestoreLookupTable_t, RnCollisionAttr_t, RnQueryAttr_t, RnQueryShapeAttr_t, SaveRestoreTranslate_t, SetCollisionGroup, SetEntityToIgnore, SetIgnore, SetInteractsWith, String, ToCStr, TraceRay, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorRotate, VectorSubtract, VectorToCMsgVector, VectorTransform, mutable_normal, mutable_position, mutable_saxis, normal, operator*, operator+, operator+=, operator-, operator=, operator[], position, saxis, set_boneindex, set_entityhandleindex, set_has_entityhandleindex, set_has_is_adjacent, set_has_normal, set_has_position, set_has_saxis, set_has_skeletoninstancehash, set_has_x, set_has_z, set_is_adjacent, set_skeletoninstancehash, set_x, set_y, set_z, ~CCopyableUtlVector, ~CDecalInfo, ~CNetMessagePB, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~PlaceDecalEvent_t, ~RestoreLookupTable_t
// calls: CUtlVectorBase<SaveRestoreTranslate_t, CUtlMemory<SaveRestoreTranslate_t, int> >::RemoveAll, CGameSaveRestoreInfo::NumEntities, CUtlString::operator=, CGameSaveRestoreInfo::GetEntityInfo, CUtlMemory<SaveRestoreTranslate_t, int>::Grow, CMsgPlaceDecalEvent::CMsgPlaceDecalEvent, CGameTrace::Init, EntityIDFromBaseEntity, HierarchyIDFromBaseEntity, CGamePhysicsQueryInterface::TraceRay, CEntityInstance::GetEntityIndex, CDecalGameSystem::PlaceDecal (27 total)
// strings: "SV", "%s:  %d of %d decals restored\n"
// globals: CDecalInfo::m_DataMap, g_pDecalGameSystem
// local variable allocation has failed, the output may be wrong!
void __fastcall CDecalSaveRestoreBlockHandler::Restore(
        CDecalSaveRestoreBlockHandler *const this,
        IRestore *pRestore,
        SpawnGroupHandle_t handle,
        bool fCreatePlayers)
{
  __int64 v5; // rax
  __int64 v6; // r15
  int v7; // r12d
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r13
  const char *m_pAsString; // rsi
  const entitytable_t *EntityInfo; // rax
  __int64 z_low; // r13
  const entitytable_t *v14; // rbx
  vec_t z; // eax
  int (**vptr_IRestore)(...); // rax
  int v17; // edi
  int v18; // edx
  __int64 v19; // rax
  __int64 v20; // r9
  int v21; // eax
  CMsgVector *v22; // r12
  int v23; // edx
  float v24; // xmm2_4
  float v25; // xmm1_4
  float v26; // xmm0_4
  float v27; // xmm2_4
  float v28; // xmm1_4
  float v29; // xmm0_4
  int v30; // eax
  float *v31; // rax
  __m128i v32; // xmm0
  float v33; // xmm1_4
  float v34; // xmm2_4
  const google::protobuf::MessageOptions *options; // rax
  float v36; // xmm3_4
  float v37; // xmm4_4
  float v38; // xmm5_4
  CMsgVector *v39; // rax
  float v40; // xmm4_4
  float v41; // xmm5_4
  float v42; // xmm3_4
  float v43; // xmm6_4
  float v44; // xmm7_4
  float v45; // xmm1_4
  __m128i v46; // xmm4
  float v47; // r13d
  float v48; // xmm1_4
  const CPhysSurfaceProperties *m_pSurfaceProperties; // r12
  float v50; // xmm2_4
  int v51; // eax
  float x; // xmm3_4
  float v53; // xmm4_4
  CMsgVector *v54; // r12
  int v55; // eax
  vec_t v56; // xmm0_4
  CMsgVector *v57; // r12
  int v58; // eax
  int v59; // xmm0_4
  CMsgVector *v60; // r12
  int v61; // eax
  int v62; // ecx
  CEntityIdentity *v63; // rsi
  CEntityIdentity *v64; // rsi
  int v65; // ecx
  __int16 v66; // dx
  __int64 *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rax
  CBodyComponent *v70; // rdi
  CGameSceneNode *v71; // rax
  CGameSceneNode *v72; // r12
  int v73; // ecx
  CEntityInstance *m_pOwner; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v76; // cx
  uint32 m_nHashCode; // edx
  float *containing_type; // rdx
  int v79; // [rsp-8h] [rbp-2B8h]
  int v80; // [rsp-4h] [rbp-2B4h]
  int num_applied; // [rsp+0h] [rbp-2B0h]
  float c; // [rsp+4h] [rbp-2ACh]
  float v83; // [rsp+8h] [rbp-2A8h]
  float v84; // [rsp+8h] [rbp-2A8h]
  float v85; // [rsp+Ch] [rbp-2A4h]
  float v86; // [rsp+Ch] [rbp-2A4h]
  unsigned int v87; // [rsp+10h] [rbp-2A0h]
  float v88; // [rsp+10h] [rbp-2A0h]
  float v89; // [rsp+14h] [rbp-29Ch]
  float v90; // [rsp+14h] [rbp-29Ch]
  int v91; // [rsp+18h] [rbp-298h]
  float i; // [rsp+20h] [rbp-290h]
  int ia; // [rsp+20h] [rbp-290h]
  int v94; // [rsp+24h] [rbp-28Ch]
  float v95; // [rsp+24h] [rbp-28Ch]
  float v96; // [rsp+24h] [rbp-28Ch]
  vec_t y; // [rsp+38h] [rbp-278h] BYREF
  vec_t v98; // [rsp+3Ch] [rbp-274h]
  Vector p; // [rsp+40h] [rbp-270h] BYREF
  __int128 v100; // [rsp+4Ch] [rbp-264h] OVERLAPPED BYREF
  float v101; // [rsp+5Ch] [rbp-254h]
  Vector vRelativePos; // [rsp+60h] [rbp-250h] BYREF
  float v103; // [rsp+6Ch] [rbp-244h]
  Vector vRelativeNormal; // [rsp+70h] [rbp-240h] BYREF
  RestoreLookupTable_t table; // [rsp+80h] [rbp-230h] BYREF
  __int64 v106; // [rsp+A8h] [rbp-208h] BYREF
  CGameQueryAttributes filter; // [rsp+B0h] [rbp-200h]
  _DWORD v108[2]; // [rsp+D8h] [rbp-1D8h] BYREF
  matrix3x4a_t invWorldTransform; // [rsp+E0h] [rbp-1D0h] BYREF
  int v110; // [rsp+110h] [rbp-1A0h]
  int v111; // [rsp+114h] [rbp-19Ch]
  int v112; // [rsp+118h] [rbp-198h]
  char v113; // [rsp+11Ch] [rbp-194h]
  bool v114; // [rsp+11Dh] [rbp-193h]
  _DWORD v115[3]; // [rsp+128h] [rbp-188h] BYREF
  int v116; // [rsp+134h] [rbp-17Ch]
  int v117; // [rsp+138h] [rbp-178h]
  int v118; // [rsp+13Ch] [rbp-174h]
  int v119; // [rsp+140h] [rbp-170h]
  int v120; // [rsp+144h] [rbp-16Ch]
  __int64 v121; // [rsp+148h] [rbp-168h]
  __int64 v122; // [rsp+150h] [rbp-160h]
  __int64 v123; // [rsp+158h] [rbp-158h]
  _QWORD v124[2]; // [rsp+160h] [rbp-150h] BYREF
  int v125; // [rsp+170h] [rbp-140h]
  float *v126; // [rsp+178h] [rbp-138h]
  const google::protobuf::MessageOptions *v127; // [rsp+180h] [rbp-130h]
  CMsgVector *v128; // [rsp+188h] [rbp-128h]
  int v129; // [rsp+1A8h] [rbp-108h]
  uint32 v130; // [rsp+1ACh] [rbp-104h]
  int v131; // [rsp+1B0h] [rbp-100h]
  char v132; // [rsp+1B5h] [rbp-FBh]
  int v133; // [rsp+1B8h] [rbp-F8h]
  int v134; // [rsp+1C8h] [rbp-E8h] BYREF
  CGameTrace rayHit; // [rsp+1D0h] [rbp-E0h] BYREF

  if ( this->m_bDoLoad )
  {
    v80 = (*(pRestore->_vptr_IRestore + 13))(pRestore, pRestore, handle, fCreatePlayers);
    v5 = (*(pRestore->_vptr_IRestore + 51))(pRestore);
    vRelativeNormal.z = 0.0;
    *&table.m_lookup.m_Size = 0;
    v6 = v5;
    table.m_lookup.m_Memory.m_pMemory = 0;
    *&v5 = vec3_origin.z;
    *&table.m_lookup.m_Memory.m_nAllocationCount = *&vec3_origin.x;
    LODWORD(table.m_vecLandMarkOffset.x) = v5;
    CUtlVectorBase<SaveRestoreTranslate_t,CUtlMemory<SaveRestoreTranslate_t,int>>::RemoveAll(&vRelativeNormal.z);
    table.m_lookup.m_Memory.m_nAllocationCount = 0;
    table.m_lookup.m_Memory.m_nGrowSize = 0;
    table.m_vecLandMarkOffset.x = 0.0;
    v94 = CGameSaveRestoreInfo::NumEntities(v6);
    v7 = 0;
    if ( v94 > 0 )
    {
      do
      {
        EntityInfo = CGameSaveRestoreInfo::GetEntityInfo(v6, v7);
        z_low = SLODWORD(vRelativeNormal.z);
        v14 = EntityInfo;
        z = vRelativeNormal.z;
        if ( LODWORD(vRelativeNormal.z) == LODWORD(table.m_lookup.m_Memory.m_pMemory) )
        {
          CUtlMemory<SaveRestoreTranslate_t,int>::Grow(&table, 1);
          z = vRelativeNormal.z;
        }
        v8 = 16 * z_low;
        LODWORD(vRelativeNormal.z) = LODWORD(z) + 1;
        v9 = *&table.m_lookup.m_Size + v8;
        if ( *&table.m_lookup.m_Size + v8 != 0 )
        {
          *v9 = 0;
          *(v9 + 8) = -1;
          *(v9 + 12) = -1;
          v10 = *&table.m_lookup.m_Size + v8;
        }
        else
        {
          v10 = 0;
        }
        m_pAsString = "";
        if ( v14->classname.u.m_Id != 0 )
          m_pAsString = v14->classname.u.m_pAsString;
        CUtlString::operator=(v10, m_pAsString);
        ++v7;
        *(v10 + 8) = v14->saveentityindex.m_Data;
        *(v10 + 12) = v14->restoreentityindex.m_Data;
      }
      while ( v7 != v94 );
    }
    table.m_lookup.m_Memory.m_nAllocationCount = *(v6 + 536);
    table.m_lookup.m_Memory.m_nGrowSize = *(v6 + 540);
    table.m_vecLandMarkOffset.x = *(v6 + 544);
    if ( v80 <= 0 )
    {
      v79 = 0;
    }
    else
    {
      v91 = 0;
      v79 = 0;
      do
      {
        v115[0] = 0;
        v115[1] = 0;
        v115[2] = 0;
        v116 = 0;
        v117 = 0;
        v118 = 0;
        v119 = 0;
        v120 = -1;
        v121 = 0;
        v122 = 0;
        v123 = 0;
        CMsgPlaceDecalEvent::CMsgPlaceDecalEvent(v124);
        v124[0] = off_3FB1CF0;
        vptr_IRestore = pRestore->_vptr_IRestore;
        v133 = -1;
        vptr_IRestore[2](pRestore, v115, &CDecalInfo::m_DataMap);
        v17 = 0x7FFF;
        v108[0] = v129;
        if ( v129 != -1 )
          v17 = v108[0] & 0x7FFF;
        v18 = -1;
        if ( SLODWORD(vRelativeNormal.z) > 0 )
        {
          if ( v17 == *(*&table.m_lookup.m_Size + 8LL) )
          {
            v20 = *&table.m_lookup.m_Size;
LABEL_51:
            v62 = *(v20 + 12);
            v18 = -1;
            if ( v62 <= 0x7FFE )
            {
              v63 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[v62 >> 9];
              if ( v63 != 0 )
              {
                v64 = &v63[v62 & 0x1FF];
                if ( v64 != 0 && (v64->m_EHandle.m_Index & 0x7FFF) == v62 )
                {
                  v65 = (v64->m_EHandle.m_Index >> 15) - (v64->m_flags & 1);
                  v66 = 0x7FFF;
                  if ( v64->m_EHandle.m_Index != -1 )
                    v66 = v64->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(v134) = v66 | v134 & 0x8000;
                  v18 = (v65 << 15) | v134 & 0x7FFF;
                  v134 = v18;
                }
              }
            }
          }
          else
          {
            v19 = *&table.m_lookup.m_Size + 16LL;
            while ( v19 != *&table.m_lookup.m_Size + 16LL + 16LL * (LODWORD(vRelativeNormal.z) - 1) )
            {
              v20 = v19;
              v19 += 16;
              if ( v17 == *(v19 - 8) )
                goto LABEL_51;
            }
            v18 = -1;
          }
        }
        v21 = v125;
        v129 = v18;
        v22 = v126;
        v132 = 1;
        v23 = v125;
        BYTE1(v23) = BYTE1(v125) | 0x22;
        v125 = v23;
        if ( v126 != 0 )
        {
          v24 = v126[6];
          v25 = v126[7];
          v26 = v126[8];
          v125 = v21 | 0x2201;
          v27 = v24 + *(v6 + 536);
          v28 = v25 + *(v6 + 540);
          v29 = v26 + *(v6 + 544);
        }
        else
        {
          v88 = *(v6 + 536);
          ia = *(v6 + 540);
          v86 = *(v6 + 544);
          containing_type = CMsgPlaceDecalEvent::default_instance_->containing_type_;
          v96 = containing_type[8];
          v84 = containing_type[7];
          v90 = containing_type[6];
          v125 = v21 | 0x2201;
          v22 = operator new(0x28u);
          CMsgVector::CMsgVector(v22);
          v126 = v22;
          v27 = v90 + v88;
          v28 = v84 + *&ia;
          v29 = v96 + v86;
        }
        v30 = *(v22 + 4);
        *(v22 + 6) = v27;
        *(v22 + 7) = v28;
        *(v22 + 8) = v29;
        *(v22 + 4) = v30 | 7;
        v31 = v126;
        if ( v126 == 0 )
          v31 = CMsgPlaceDecalEvent::default_instance_->containing_type_;
        v32 = *(v31 + 8);
        v33 = v31[7];
        v34 = v31[6];
        p.x = v31[8];
        options = v127;
        v98 = v33;
        y = v34;
        if ( v127 == 0 )
          options = CMsgPlaceDecalEvent::default_instance_->options_;
        v36 = *(options + 8);
        v37 = *(options + 7);
        v38 = *(options + 6);
        v39 = v128;
        *&v100 = __PAIR64__(LODWORD(v36), LODWORD(v37));
        p.z = v38;
        if ( v128 == 0 )
          v39 = *&CMsgPlaceDecalEvent::default_instance_->is_placeholder_;
        v40 = v37 * 16.0;
        v95 = *(v39 + 8);
        v41 = v38 * 16.0;
        num_applied = *(v39 + 7);
        v42 = v36 * 16.0;
        v43 = *(v39 + 6);
        memset(&rayHit.m_hShape, 0, 24);
        v44 = v33 + v40;
        v45 = v33 - v40;
        v46 = v32;
        c = v43;
        v89 = v44;
        v83 = v45;
        *v46.m128i_i32 = *v32.m128i_i32 - v42;
        i = v34 + v41;
        *&v87 = *v32.m128i_i32 + v42;
        v85 = v34 - v41;
        v47 = COERCE_FLOAT(_mm_cvtsi128_si32(v46));
        rayHit.m_ShapeAttributes.m_nInteractsExclude = 0x700000000000000LL;
        CGameTrace::Init(&v134);
        filter.m_nInteractsWith = 0;
        filter.m_nInteractsExclude = 0;
        LODWORD(filter.m_nInteractsAs) = -1;
        WORD2(filter.m_nInteractsAs) = 0;
        BYTE6(filter.m_nInteractsAs) = 4;
        HIBYTE(filter.m_nInteractsAs) = HIBYTE(filter.m_nInteractsAs) & 0xF0 | 9;
        filter.m_nEntityIdToIgnore = 7;
        v106 = 2;
        LODWORD(filter.m_nInteractsAs) = EntityIDFromBaseEntity(0);
        WORD2(filter.m_nInteractsAs) = HierarchyIDFromBaseEntity(0);
        memset(&invWorldTransform.m_flMatVal[1][1], 0, 28);
        v111 = 0;
        v112 = 0;
        invWorldTransform.m_flMatVal[0][2] = v85 - i;
        invWorldTransform.m_flMatVal[0][3] = v83 - v89;
        v110 = 0;
        invWorldTransform.m_flMatVal[1][0] = v47 - *&v87;
        v113 = 1;
        *v108 = i;
        *&v108[1] = v89;
        *&invWorldTransform.m_flMatVal[0][0] = v87;
        v114 = (((invWorldTransform.m_flMatVal[0][2] * invWorldTransform.m_flMatVal[0][2])
               + (invWorldTransform.m_flMatVal[0][3] * invWorldTransform.m_flMatVal[0][3]))
              + (invWorldTransform.m_flMatVal[1][0] * invWorldTransform.m_flMatVal[1][0])) != 0.0;
        if ( CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, v108, &v106, &v134) )
        {
          v129 = -1;
          v51 = v125;
          v130 = 0;
          m_pSurfaceProperties = rayHit.m_pSurfaceProperties;
          y = rayHit.startpos.y;
          v48 = rayHit.endpos.y;
          v98 = rayHit.startpos.z;
          v50 = rayHit.endpos.z;
          BYTE1(v51) = BYTE1(v125) | 6;
          v125 = v51;
          x = rayHit.plane.normal.x;
          p.z = rayHit.endpos.y;
          ++v79;
          p.x = rayHit.endpos.x;
          *&v100 = *&rayHit.endpos.z;
          if ( rayHit.m_pSurfaceProperties != 0 )
          {
            if ( CEntityInstance::GetEntityIndex(rayHit.m_pSurfaceProperties).m_Data != 0
              && (v67 = *&m_pSurfaceProperties->m_nameHash, v68 = *v67, *v67 != 0)
              && (v69 = *(*(v67[1] + 96) + 2LL * CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex)) != 0xFFFF
              && (v70 = *(v68 + v69)) != 0 )
            {
              v71 = CBodyComponent::LookupGameSceneNode(v70, 0);
              if ( v71 != 0 )
                v72 = (*(v71->_vptr_CGameSceneNode + 9))(v71);
              else
                v72 = 0;
              if ( v72->m_bDirtyAbsTransform.m_value )
                CGameSceneNode::CalcAbsolutePositionWhenDirty(v72);
              MatrixInvert(&v72->m_mNodeToWorld, v108);
              VectorTransform(&y, v108, &v100 + 3);
              VectorRotate(&p.z, v108, &vRelativePos.z);
              v73 = -1;
              m_pOwner = v72->m_pOwner;
              y = *(&v100 + 3);
              x = vRelativeNormal.x;
              v98 = v101;
              v48 = vRelativePos.z;
              p.x = vRelativePos.x;
              v50 = v103;
              m_pEntity = m_pOwner->m_pEntity;
              p.z = vRelativePos.z;
              *&v100 = __PAIR64__(LODWORD(vRelativeNormal.x), LODWORD(v103));
              if ( m_pEntity != 0 )
              {
                v76 = 0x7FFF;
                if ( m_pEntity->m_EHandle.m_Index != -1 )
                  v76 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                v73 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v76 & 0x7FFF;
              }
              v51 = v125;
              v129 = v73;
              m_nHashCode = v72->m_name.m_Value.m_nHashCode;
              v131 = -1;
              BYTE1(v51) = BYTE1(v125) | 0xE;
              v130 = m_nHashCode;
            }
            else
            {
              v51 = v125;
              v48 = p.z;
              v50 = *&v100;
              x = *(&v100 + 1);
            }
          }
          v53 = 0.0 * v48;
          if ( fabs(((0.0 * v48) + (0.0 * v50)) + x) < 0.99000001 )
          {
            v48 = v48 - (x * 0.0);
            num_applied = LODWORD(v48);
            c = (x * 0.0) - v50;
            v95 = (0.0 * v50) - v53;
          }
          v54 = v126;
          v125 = v51 | 1;
          if ( v126 == 0 )
          {
            v54 = operator new(0x28u);
            CMsgVector::CMsgVector(v54);
            v126 = v54;
          }
          v55 = *(v54 + 4);
          *(v54 + 6) = y;
          *(v54 + 7) = v98;
          v56 = p.x;
          *(v54 + 4) = v55 | 7;
          *(v54 + 8) = v56;
          v57 = v127;
          v125 |= 2u;
          if ( v127 == 0 )
          {
            v57 = operator new(0x28u);
            CMsgVector::CMsgVector(v57);
            v127 = v57;
          }
          v58 = *(v57 + 4);
          *(v57 + 6) = LODWORD(p.z);
          *(v57 + 7) = v100;
          v59 = DWORD1(v100);
          *(v57 + 4) = v58 | 7;
          *(v57 + 8) = v59;
          v60 = v128;
          v125 |= 4u;
          if ( v128 == 0 )
          {
            v60 = operator new(0x28u);
            CMsgVector::CMsgVector(v60);
            v128 = v60;
          }
          v61 = *(v60 + 4);
          *(v60 + 6) = c;
          *(v60 + 7) = num_applied;
          *(v60 + 4) = v61 | 7;
          *(v60 + 8) = v95;
        }
        CDecalGameSystem::PlaceDecal(g_pDecalGameSystem, v124, COERCE_DOUBLE(v116), v48);
        if ( v121 != 0 )
          (*(*g_pMeshSystem + 144LL))(g_pMeshSystem);
        v124[0] = &off_3FB1C30;
        CMsgPlaceDecalEvent::~CMsgPlaceDecalEvent(v124);
        ++v91;
      }
      while ( v91 != v80 );
    }
    if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 0) != 0 )
      LoggingSystem_Log(LOG_SAVERESTORE, 0, "%s:  %d of %d decals restored\n", "SV", v79, v80);
    CUtlVectorBase<SaveRestoreTranslate_t,CUtlMemory<SaveRestoreTranslate_t,int>>::RemoveAll(&vRelativeNormal.z);
    if ( (HIDWORD(table.m_lookup.m_Memory.m_pMemory) & 0xC0000000) == 0 )
    {
      CUtlMemory<SaveRestoreTranslate_t,int>::Purge(&table);
      if ( (HIDWORD(table.m_lookup.m_Memory.m_pMemory) & 0xC0000000) == 0 )
        CUtlMemory<SaveRestoreTranslate_t,int>::Purge(&table);
    }
  }
}


// GetDecalsSaveRestoreBlockHandler  (line 1998, @0x0000000001f34e90, libserver.so)
// callers: CEntity2SaveRestore::LoadAdjacentDecals
// globals: g_DecalsSaveRestoreBlockHandler
ISaveRestoreBlockHandler *__cdecl GetDecalsSaveRestoreBlockHandler()
{
  return &g_DecalsSaveRestoreBlockHandler;
}


