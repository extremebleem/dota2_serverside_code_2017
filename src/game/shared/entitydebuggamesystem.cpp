// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/entitydebuggamesystem.cpp:1044
class CEntityDebugGrab {
protected:

	EHANDLE2 m_hPlayer;  // +0x0
	float m_flEyeDistance;  // +0x4
	HPhysicsBody m_hDriverBody;  // +0x8
	HPhysicsBody m_hTargetBody;  // +0x10
	HPhysicsJoint m_hJoint;  // +0x18
	bool m_bRebuildMass;  // +0x20
	bool m_bLoose;  // +0x21
	CEntityDebugGrab(EHANDLE2, const trace_t &, bool);
	void Update(const Vector &, const Vector &);
	void Update();
	bool IsValid();
	HPhysicsBody GetBody();
	~CEntityDebugGrab();
	IVPhysics2World * GetWorld();

	// sizeof = 40
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEntityDebugGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 46, @0x0000000001f34ea0, libserver.so)
void __cdecl CEntityDebugGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CEntityDebugGameSystem::CEntityDebugGameSystem  (line 52, @0x0000000001f53430, libserver.so)  // inlines: CCommandMemberInitializer_OnEntityReport, CCommandMemberInitializer_OnEntitySummary, CConCommandMemberAccessor, CCopyableLock, CEntityIndex, CThreadFastMutex, CUtlHashtable, CUtlMap, CUtlMemory, CUtlRBTree, CUtlSlot, CUtlVector, CUtlVectorBase, CUtlVectorMT, ResetDbgInfo, SetLessFunc, SetOwner, ~CAutoGameSystem, ~CCommandMemberInitializer_OnEntityReport
// calls: ConCommand::ConCommand, CUtlSlot::~CUtlSlot, IGameSystem::~IGameSystem, _Unwind_Resume, CConCommandMemberAccessor<CEntityDebugGameSystem>::~CConCommandMemberAccessor
// callers: CGameSystemReallocatingFactory<CEntityDebugGameSystem, CEntityDebugGameSystem>::CreateGameSystem
// strings: "Reports all extant entities. Optional 2nd arg is a substring of a classname that the list, "entityreport", "Summarizes (by class) all extant entities. Optional 2nd arg is a substring of a classname, "entitysummary"
// globals: CEntityDebugGameSystem::OnEntityReport(CCommandContext const&,CCommand const&), CEntityDebugGameSystem::OnEntitySummary(CCommandContext const&,CCommand const&), CDefOps<int>::LessFunc(int const&,int const&)
void __fastcall CEntityDebugGameSystem::CEntityDebugGameSystem(CEntityDebugGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FCC5F0;
  this->m_ConnectedSignallers.m_Size = 0;
  this->m_ConnectedSignallers.m_Memory.m_pMemory = 0;
  this->m_ConnectedSignallers.m_Memory.m_nAllocationCount = 0;
  this->m_ConnectedSignallers.m_Memory.m_nGrowSize = 0;
  this->m_ConnectedSignallers.m_ownerID = 0;
  this->m_ConnectedSignallers.m_depth = 0;
  this->m_ConnectedSignallers.Mutex_t.m_ownerID = 0;
  this->m_ConnectedSignallers.Mutex_t.m_depth = 0;
  this->m_nDebugOverlayIndex = -1;
  ConCommand::ConCommand(
    &this->m_OnEntityReport_register.m_ConCommandAccessor,
    "entityreport",
    &this->m_OnEntityReport_register.m_ConCommandAccessor.ICommandCallback,
    "Reports all extant entities. Optional 2nd arg is a substring of a classname that the list will be filtered by.",
    0,
    0);
  this->m_OnEntityReport_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCADF0;
  this->m_OnEntityReport_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCAE98;
  this->m_OnEntityReport_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCAEB0;
  this->m_OnEntityReport_register.m_ConCommandAccessor.m_Func.__pfn = CEntityDebugGameSystem::OnEntityReport;
  this->m_OnEntityReport_register.m_ConCommandAccessor.m_Func.__delta = 0;
  this->m_OnEntityReport_register.m_ConCommandAccessor.m_pOwner = this;
  this->m_OnEntityReport_register.m_ConCommandAccessor.m_CompletionFunc.__pfn = 0;
  this->m_OnEntityReport_register.m_ConCommandAccessor.m_CompletionFunc.__delta = 0;
  ConCommand::ConCommand(
    &this->m_OnEntitySummary_register.m_ConCommandAccessor,
    "entitysummary",
    &this->m_OnEntitySummary_register.m_ConCommandAccessor.ICommandCallback,
    "Summarizes (by class) all extant entities. Optional 2nd arg is a substring of a classname that the list will be filtered by.",
    0,
    0);
  this->m_OnEntitySummary_register.m_ConCommandAccessor._vptr_ConCommandBase = &off_3FCADF0;
  this->m_OnEntitySummary_register.m_ConCommandAccessor._vptr_ICommandCallback = &off_3FCAE98;
  this->m_OnEntitySummary_register.m_ConCommandAccessor._vptr_ICommandCompletionCallback = &off_3FCAEB0;
  this->m_OnEntitySummary_register.m_ConCommandAccessor.m_Func.__pfn = CEntityDebugGameSystem::OnEntitySummary;
  this->m_OnEntitySummary_register.m_ConCommandAccessor.m_Func.__delta = 0;
  this->m_OnEntitySummary_register.m_ConCommandAccessor.m_CompletionFunc.__pfn = 0;
  this->m_OnEntitySummary_register.m_ConCommandAccessor.m_CompletionFunc.__delta = 0;
  this->m_OnEntitySummary_register.m_ConCommandAccessor.m_pOwner = this;
  this->m_simDebugEntities.m_table.m_pMemory = 0;
  this->m_simDebugEntities.m_table.m_nAllocationCount = 0;
  this->m_simDebugEntities.m_table.m_nGrowSize = 0;
  this->m_simDebugEntities.m_nUsed = 0;
  this->m_simDebugEntities.m_nMinSize = 32;
  this->m_simDebugEntities.m_bSizeLocked = 0;
  this->m_renderDebugEntities.m_table.m_pMemory = 0;
  this->m_renderDebugEntities.m_table.m_nAllocationCount = 0;
  this->m_renderDebugEntities.m_table.m_nGrowSize = 0;
  this->m_renderDebugEntities.m_nUsed = 0;
  this->m_renderDebugEntities.m_nMinSize = 32;
  this->m_renderDebugEntities.m_bSizeLocked = 0;
  this->m_ScrollingMessageLists.m_Tree.m_Elements.m_pMemory = 0;
  this->m_ScrollingMessageLists.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_ScrollingMessageLists.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_ScrollingMessageLists.m_Tree.m_Root = -1;
  this->m_ScrollingMessageLists.m_Tree.m_NumElements = 0;
  this->m_ScrollingMessageLists.m_Tree.m_FirstFree = -1;
  this->m_ScrollingMessageLists.m_Tree.m_LastAlloc.index = -1;
  this->m_ScrollingMessageLists.m_Tree.m_pElements = 0;
  this->m_StickyEntTextNames.m_Size = 0;
  this->m_StickyEntTextNames.m_Memory.m_pMemory = 0;
  this->m_StickyEntTextNames.m_Memory.m_nAllocationCount = 0;
  this->m_StickyEntTextNames.m_Memory.m_nGrowSize = 0;
  this->m_nDebugPlayer.m_Data = -1;
  this->m_bInDebugSelect = 0;
  this->m_ScrollingMessageLists.m_Tree.m_LessFunc.m_LessFunc = CDefOps<int>::LessFunc;
}


// CEntityDebugGameSystem::SetDebugBits  (line 62, @0x0000000001f5ff60, libserver.so)  // inlines: CEntityHandle, CUtlKeyValuePair<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, Construct<CUtlKeyValuePair<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, DoInsert<unsigned int>, DoLookup<unsigned int>, GetEHandle, GetEntryIndex, GetSerialNumber, Init, Insert, operator[]
// calls: CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::DoInsertUnconstructed, CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::DoLookup<unsigned int>
// callers: CEntityDebugGameSystem::SetDebugBits, CEntityDebugGameSystem::ToggleDebugBits, CEntityDebugGameSystem::SetDebugBitsOnMatchingEntities, CEntityDebugGameSystem::OnEntityCreated
void __fastcall CEntityDebugGameSystem::SetDebugBits(
        CEntityDebugGameSystem *const this,
        CEntityDebugGameSystem::DebugEntityHash_t *const hash,
        CEntityInstance *pEntity,
        uint64 nBitMask)
{
  CEntityIdentity *m_pEntity; // rax
  __int16 v7; // cx
  unsigned int v8; // r14d
  unsigned int v9; // edx
  unsigned int v10; // r13d
  unsigned int v11; // r13d
  int inserted; // eax
  CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t> *m_pMemory; // rcx
  __int64 v14; // rdx
  CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t> *v15; // rax
  UtlHashHandle_t v16; // eax

  if ( pEntity != 0 && nBitMask != 0 )
  {
    m_pEntity = pEntity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v7 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v8 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v7 & 0x7FFF;
      v9 = 33 * (((4097 * v8 + 2127912214) >> 19) ^ (4097 * v8 + 2127912214) ^ 0xC761C23C);
      v10 = 9 * ((v9 - 369570787) ^ ((v9 + 374761393) << 9)) - 42973499;
      v11 = HIWORD(v10) ^ v10 ^ 0xB55A4F09;
    }
    else
    {
      v11 = -26951294;
      v8 = -1;
    }
    if ( hash->m_nUsed == 0
      || (v16 = CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::DoLookup<unsigned int>(
                  hash,
                  v8,
                  v11,
                  0)) == -1 )
    {
      inserted = CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::DoInsertUnconstructed(
                   hash,
                   v11,
                   1);
      m_pMemory = hash->m_table.m_pMemory;
      v14 = inserted;
      v15 = &hash->m_table.m_pMemory[inserted];
      if ( v15 != -4LL )
      {
        v15->data[0] = v8;
        *&v15->data[2] = nBitMask;
        m_pMemory = hash->m_table.m_pMemory;
      }
      *&m_pMemory[v14].data[2] |= nBitMask;
    }
    else
    {
      *&hash->m_table.m_pMemory[v16].data[2] |= nBitMask;
    }
  }
}


// CEntityDebugGameSystem::HasDebugBitsSet  (line 74, @0x0000000001f34eb0, libserver.so)  // inlines: CEntityHandle, DoLookup<unsigned int>, Find, GetEHandle, GetEntryIndex, GetSerialNumber, Init, operator[]
// calls: CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::DoLookup<unsigned int>
// callers: CEntityDebugGameSystem::HasDebugBitsSet
bool __fastcall CEntityDebugGameSystem::HasDebugBitsSet(
        CEntityDebugGameSystem *const this,
        CEntityDebugGameSystem::DebugEntityHash_t *const hash,
        const CEntityInstance *pEntity,
        uint64 nBitMask)
{
  CEntityIdentity *m_pEntity; // rax
  __int16 v7; // cx
  unsigned int v8; // esi
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  bool result; // al
  UtlHashHandle_t v13; // eax

  if ( pEntity == 0 )
    return 0;
  m_pEntity = pEntity->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v7 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v8 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v7 & 0x7FFF;
    v9 = 33 * (((4097 * v8 + 2127912214) >> 19) ^ (4097 * v8 + 2127912214) ^ 0xC761C23C);
    v10 = 9 * ((v9 - 369570787) ^ ((v9 + 374761393) << 9)) - 42973499;
    v11 = HIWORD(v10) ^ v10 ^ 0xB55A4F09;
  }
  else
  {
    v11 = -26951294;
    v8 = -1;
  }
  result = 0;
  if ( hash->m_nUsed != 0 )
  {
    v13 = CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::DoLookup<unsigned int>(
            hash,
            v8,
            v11,
            0);
    return v13 != -1 && (nBitMask & *&hash->m_table.m_pMemory[v13].data[2]) != 0;
  }
  return result;
}


// CEntityDebugGameSystem::ClearDebugBits  (line 90, @0x0000000001f416a0, libserver.so)  // inlines: CEntityHandle, DoLookup<unsigned int>, Find, GetEHandle, GetEntryIndex, GetSerialNumber, Init, operator[]
// calls: CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::DoLookup<unsigned int>, CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::RemoveByHandle
// callers: CEntityDebugGameSystem::ClearDebugBits, CEntityDebugGameSystem::ClearDebugBitsOnMatchingEntities
void __fastcall CEntityDebugGameSystem::ClearDebugBits(
        CEntityDebugGameSystem *const this,
        CEntityDebugGameSystem::DebugEntityHash_t *const hash,
        CEntityInstance *pEntity,
        uint64 nBitMask)
{
  CEntityIdentity *m_pEntity; // rax
  __int16 v7; // cx
  unsigned int v8; // esi
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  UtlHashHandle_t v12; // eax

  if ( pEntity != 0 && nBitMask != 0 )
  {
    m_pEntity = pEntity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v7 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v8 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v7 & 0x7FFF;
      v9 = 33 * (((4097 * v8 + 2127912214) >> 19) ^ (4097 * v8 + 2127912214) ^ 0xC761C23C);
      v10 = 9 * ((v9 - 369570787) ^ ((v9 + 374761393) << 9)) - 42973499;
      v11 = HIWORD(v10) ^ v10 ^ 0xB55A4F09;
    }
    else
    {
      v11 = -26951294;
      v8 = -1;
    }
    if ( hash->m_nUsed != 0 )
    {
      v12 = CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::DoLookup<unsigned int>(
              hash,
              v8,
              v11,
              0);
      if ( v12 != -1 )
      {
        *&hash->m_table.m_pMemory[v12].data[2] &= ~nBitMask;
        if ( *&hash->m_table.m_pMemory[v12].data[2] == 0 )
          CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::RemoveByHandle(
            hash,
            v12);
      }
    }
  }
}


// CEntityDebugGameSystem::ToggleDebugBits  (line 106, @0x0000000001f60100, libserver.so)  // inlines: CEntityHandle, DoLookup<unsigned int>, Find, GetEHandle, GetEntryIndex, GetSerialNumber, Init, SetDebugBits, operator[]
// calls: CEntityDebugGameSystem::SetDebugBits, CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::DoLookup<unsigned int>, CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::RemoveByHandle
// callers: CEntityDebugGameSystem::ToggleDebugBits, CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities
void __fastcall CEntityDebugGameSystem::ToggleDebugBits(
        CEntityDebugGameSystem *const this,
        CEntityDebugGameSystem::DebugEntityHash_t *const hash,
        CEntityInstance *pEntity,
        uint64 nBitMask)
{
  CEntityIdentity *m_pEntity; // rax
  __int16 v9; // dx
  unsigned int v10; // esi
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  UtlHashHandle_t v14; // eax

  if ( pEntity != 0 && nBitMask != 0 )
  {
    m_pEntity = pEntity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v9 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v10 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v9 & 0x7FFF;
      v11 = 33 * (((4097 * v10 + 2127912214) >> 19) ^ (4097 * v10 + 2127912214) ^ 0xC761C23C);
      v12 = 9 * ((v11 - 369570787) ^ ((v11 + 374761393) << 9)) - 42973499;
      v13 = HIWORD(v12) ^ v12 ^ 0xB55A4F09;
    }
    else
    {
      v13 = -26951294;
      v10 = -1;
    }
    if ( hash->m_nUsed == 0
      || (v14 = CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::DoLookup<unsigned int>(
                  hash,
                  v10,
                  v13,
                  0)) == -1 )
    {
      CEntityDebugGameSystem::SetDebugBits(this, &this->m_simDebugEntities, pEntity, nBitMask & 0xFFFFFFFFFFFF69BFLL);
    }
    else
    {
      *&hash->m_table.m_pMemory[v14].data[2] ^= nBitMask;
      if ( *&hash->m_table.m_pMemory[v14].data[2] == 0 )
        CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::RemoveByHandle(
          hash,
          v14);
    }
  }
}


// CEntityDebugGameSystem::GetDebugBits  (line 125, @0x0000000001f34fc0, libserver.so)  // inlines: CEntityHandle, DoLookup<unsigned int>, Find, GetEHandle, GetEntryIndex, GetSerialNumber, Init, operator[]
// calls: CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::DoLookup<unsigned int>
// callers: CEntityDebugGameSystem::GetDebugBits, CEntityDebugGameSystem::DrawDebugSelect
int64 __fastcall CEntityDebugGameSystem::GetDebugBits(
        CEntityDebugGameSystem *const this,
        CEntityDebugGameSystem::DebugEntityHash_t *const hash,
        const CEntityInstance *pEntity)
{
  CEntityIdentity *m_pEntity; // rax
  __int16 v5; // cx
  unsigned int v6; // esi
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  int64 result; // rax
  UtlHashHandle_t v11; // eax

  if ( pEntity == 0 )
    return 0;
  m_pEntity = pEntity->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v5 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v6 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v5 & 0x7FFF;
    v7 = 33 * (((4097 * v6 + 2127912214) >> 19) ^ (4097 * v6 + 2127912214) ^ 0xC761C23C);
    v8 = 9 * ((v7 - 369570787) ^ ((v7 + 374761393) << 9)) - 42973499;
    v9 = HIWORD(v8) ^ v8 ^ 0xB55A4F09;
  }
  else
  {
    v9 = -26951294;
    v6 = -1;
  }
  result = 0;
  if ( hash->m_nUsed != 0 )
  {
    v11 = CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::DoLookup<unsigned int>(
            hash,
            v6,
            v9,
            0);
    if ( v11 == -1 )
      return 0;
    else
      return *&hash->m_table.m_pMemory[v11].data[2];
  }
  return result;
}


// CEntityDebugGameSystem::SetDebugBits  (line 139, @0x0000000001f600d0, libserver.so)
// calls: CEntityDebugGameSystem::SetDebugBits
// callers: CBaseEntity::SetDebugBits
void __fastcall CEntityDebugGameSystem::SetDebugBits(
        CEntityDebugGameSystem *const this,
        CEntityInstance *pEntity,
        uint64 nBitMask)
{
  CEntityDebugGameSystem::SetDebugBits(this, &this->m_simDebugEntities, pEntity, nBitMask & 0xFFFFFFFFFFFF69BFLL);
}


// CEntityDebugGameSystem::HasDebugBitsSet  (line 148, @0x0000000001f350d0, libserver.so)
// calls: CEntityDebugGameSystem::HasDebugBitsSet
// callers: CBaseEntity::HasDebugBitsSet, CBaseAnimatingController::ResetSequenceInfo, CBaseAnimatingController::SetSequence, CBaseAnimatingOverlayController::AnimationFrameAdvance, CBaseAnimatingOverlayController::AddLayeredSequence
bool __fastcall CEntityDebugGameSystem::HasDebugBitsSet(
        CEntityDebugGameSystem *const this,
        const CEntityInstance *pEntity,
        uint64 nBitMask)
{
  return CEntityDebugGameSystem::HasDebugBitsSet(
           this,
           &this->m_simDebugEntities,
           pEntity,
           nBitMask & 0xFFFFFFFFFFFF69BFLL);
}


// CEntityDebugGameSystem::ClearAllDebugBits  (line 153, @0x0000000001f3f6a0, libserver.so)
// calls: CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::RemoveAll
void __fastcall CEntityDebugGameSystem::ClearAllDebugBits(CEntityDebugGameSystem *const this)
{
  CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::RemoveAll(&this->m_simDebugEntities);
  CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::RemoveAll(&this->m_renderDebugEntities);
}


// CEntityDebugGameSystem::GetDebugBits  (line 159, @0x0000000001f35100, libserver.so)
// calls: CEntityDebugGameSystem::GetDebugBits
// callers: CBaseEntity::GetDebugBits
int64 __fastcall CEntityDebugGameSystem::GetDebugBits(
        CEntityDebugGameSystem *const this,
        const CEntityInstance *pEntity)
{
  return CEntityDebugGameSystem::GetDebugBits(this, &this->m_simDebugEntities, pEntity);
}


// CEntityDebugGameSystem::ClearDebugBits  (line 164, @0x0000000001f417d0, libserver.so)
// calls: CEntityDebugGameSystem::ClearDebugBits
// callers: CBaseEntity::ClearDebugBits
void __fastcall CEntityDebugGameSystem::ClearDebugBits(
        CEntityDebugGameSystem *const this,
        CEntityInstance *pEntity,
        uint64 nBitMask)
{
  CEntityDebugGameSystem::ClearDebugBits(this, &this->m_simDebugEntities, pEntity, nBitMask & 0xFFFFFFFFFFFF69BFLL);
}


// CEntityDebugGameSystem::ToggleDebugBits  (line 173, @0x0000000001f60260, libserver.so)
// calls: CEntityDebugGameSystem::ToggleDebugBits
// callers: CBaseEntity::ToggleDebugBits
void __fastcall CEntityDebugGameSystem::ToggleDebugBits(
        CEntityDebugGameSystem *const this,
        CEntityInstance *pEntity,
        uint64 nBitMask)
{
  CEntityDebugGameSystem::ToggleDebugBits(this, &this->m_simDebugEntities, pEntity, nBitMask & 0xFFFFFFFFFFFF69BFLL);
}


// CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities  (line 187, @0x0000000001f60290, libserver.so)  // inlines: LengthSqr, ToggleDebugBits, VectorSubtract, operator-
// calls: GetNextCommandEntity, CBaseEntity::GetAbsOrigin, CEntityDebugGameSystem::ToggleDebugBits
// callers: ent_messages, ent_select, ent_vcollide_wireframe, ent_hitbox, ent_skeleton, ent_pivot, ent_viewoffset, ent_joints, ent_attachments, ent_absbox, ent_bbox, ent_text256 (15 total)
void __fastcall CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities(
        CEntityDebugGameSystem *const this,
        CBaseEntity *pPlayer,
        const char *pName,
        uint64 nBitMask,
        float flRadius)
{
  CBaseEntity *v5; // r15
  uint64 v6; // r13
  CBaseEntity *NextCommandEntity; // rax
  const Vector *AbsOrigin; // r14
  const Vector *v11; // rax
  CEntityDebugGameSystem::DebugEntityHash_t *p_m_simDebugEntities; // [rsp-8h] [rbp-50h]
  float flRadiusSqr; // [rsp+8h] [rbp-40h]

  v5 = 0;
  v6 = nBitMask & 0xFFFFFFFFFFFF69BFLL;
  flRadiusSqr = flRadius * flRadius;
  p_m_simDebugEntities = &this->m_simDebugEntities;
  while ( 1 )
  {
    NextCommandEntity = GetNextCommandEntity(pPlayer, pName, v5);
    v5 = NextCommandEntity;
    if ( NextCommandEntity == 0 )
      break;
    if ( flRadius > 0.0 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(NextCommandEntity);
      v11 = CBaseEntity::GetAbsOrigin(pPlayer);
      if ( flRadiusSqr <= ((((v11->x - AbsOrigin->x) * (v11->x - AbsOrigin->x))
                          + ((v11->y - AbsOrigin->y) * (v11->y - AbsOrigin->y)))
                         + ((v11->z - AbsOrigin->z) * (v11->z - AbsOrigin->z))) )
        continue;
    }
    CEntityDebugGameSystem::ToggleDebugBits(this, p_m_simDebugEntities, v5, v6);
  }
}


// CEntityDebugGameSystem::SetDebugBitsOnMatchingEntities  (line 204, @0x0000000001f60950, libserver.so)  // inlines: LengthSqr, SetDebugBits, VectorSubtract, operator-
// calls: GetNextCommandEntity, CBaseEntity::GetAbsOrigin, CEntityDebugGameSystem::SetDebugBits
// callers: CEntityDebugGameSystem::AddStickyEntTextName
void __fastcall CEntityDebugGameSystem::SetDebugBitsOnMatchingEntities(
        CEntityDebugGameSystem *const this,
        CBaseEntity *pPlayer,
        const char *pName,
        uint64 nBitMask,
        float flRadius)
{
  CBaseEntity *v5; // r15
  uint64 v6; // r13
  CBaseEntity *NextCommandEntity; // rax
  const Vector *AbsOrigin; // r14
  const Vector *v11; // rax
  CEntityDebugGameSystem::DebugEntityHash_t *p_m_simDebugEntities; // [rsp-8h] [rbp-50h]
  float flRadiusSqr; // [rsp+8h] [rbp-40h]

  v5 = 0;
  v6 = nBitMask & 0xFFFFFFFFFFFF69BFLL;
  flRadiusSqr = flRadius * flRadius;
  p_m_simDebugEntities = &this->m_simDebugEntities;
  while ( 1 )
  {
    NextCommandEntity = GetNextCommandEntity(pPlayer, pName, v5);
    v5 = NextCommandEntity;
    if ( NextCommandEntity == 0 )
      break;
    if ( flRadius > 0.0 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(NextCommandEntity);
      v11 = CBaseEntity::GetAbsOrigin(pPlayer);
      if ( flRadiusSqr <= ((((v11->x - AbsOrigin->x) * (v11->x - AbsOrigin->x))
                          + ((v11->y - AbsOrigin->y) * (v11->y - AbsOrigin->y)))
                         + ((v11->z - AbsOrigin->z) * (v11->z - AbsOrigin->z))) )
        continue;
    }
    CEntityDebugGameSystem::SetDebugBits(this, p_m_simDebugEntities, v5, v6);
  }
}


// CEntityDebugGameSystem::ClearDebugBitsOnMatchingEntities  (line 221, @0x0000000001f41800, libserver.so)  // inlines: ClearDebugBits, LengthSqr, VectorSubtract, operator-
// calls: GetNextCommandEntity, CBaseEntity::GetAbsOrigin, CEntityDebugGameSystem::ClearDebugBits
// callers: CEntityDebugGameSystem::RemoveStickyEntTextName, CEntityDebugGameSystem::ClearStickyEntTextNames, ent_text_clear
void __fastcall CEntityDebugGameSystem::ClearDebugBitsOnMatchingEntities(
        CEntityDebugGameSystem *const this,
        CBaseEntity *pPlayer,
        const char *pName,
        uint64 nBitMask,
        float flRadius)
{
  CBaseEntity *v5; // r15
  uint64 v6; // r13
  CBaseEntity *NextCommandEntity; // rax
  const Vector *AbsOrigin; // r14
  const Vector *v11; // rax
  CEntityDebugGameSystem::DebugEntityHash_t *p_m_simDebugEntities; // [rsp-8h] [rbp-50h]
  float flRadiusSqr; // [rsp+8h] [rbp-40h]

  v5 = 0;
  v6 = nBitMask & 0xFFFFFFFFFFFF69BFLL;
  flRadiusSqr = flRadius * flRadius;
  p_m_simDebugEntities = &this->m_simDebugEntities;
  while ( 1 )
  {
    NextCommandEntity = GetNextCommandEntity(pPlayer, pName, v5);
    v5 = NextCommandEntity;
    if ( NextCommandEntity == 0 )
      break;
    if ( flRadius > 0.0 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(NextCommandEntity);
      v11 = CBaseEntity::GetAbsOrigin(pPlayer);
      if ( flRadiusSqr <= ((((v11->x - AbsOrigin->x) * (v11->x - AbsOrigin->x))
                          + ((v11->y - AbsOrigin->y) * (v11->y - AbsOrigin->y)))
                         + ((v11->z - AbsOrigin->z) * (v11->z - AbsOrigin->z))) )
        continue;
    }
    CEntityDebugGameSystem::ClearDebugBits(this, p_m_simDebugEntities, v5, v6);
  }
}


// CEntityDebugGameSystem::AddStickyEntTextName  (line 237, @0x0000000001f60a40, libserver.so)  // inlines: AddToTail, CUtlString, Construct<CUtlString>, Element, GetClassNameAsCStr, GetClassname, GrowMemory, String, operator[]
// calls: CUtlString::operator=, CEntityDebugGameSystem::SetDebugBitsOnMatchingEntities, GetNextCommandEntity, CUtlMemory<CUtlString, int>::Grow
// callers: ent_text_sticky_add
void __fastcall CEntityDebugGameSystem::AddStickyEntTextName(
        CEntityDebugGameSystem *const this,
        CEntityInstance *pPlayer,
        const char *pName)
{
  const char *m_pAsString; // r12
  __int64 m_Size; // r13
  int v7; // eax
  __int64 v8; // r13
  CUtlString *v9; // rax
  CUtlString *v10; // rdi
  CBaseEntity *NextCommandEntity; // rax
  CEntityIdentity *m_pEntity; // rax

  m_pAsString = pName;
  if ( pName == 0 || *pName == 0 )
  {
    NextCommandEntity = GetNextCommandEntity(pPlayer, pName, 0);
    if ( NextCommandEntity == 0 )
      return;
    m_pEntity = NextCommandEntity->m_pEntity;
    m_pAsString = "";
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
  }
  m_Size = this->m_StickyEntTextNames.m_Size;
  v7 = this->m_StickyEntTextNames.m_Size;
  if ( m_Size == this->m_StickyEntTextNames.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CUtlString,int>::Grow(&this->m_StickyEntTextNames.m_Memory, 1);
    v7 = this->m_StickyEntTextNames.m_Size;
  }
  v8 = m_Size;
  this->m_StickyEntTextNames.m_Size = v7 + 1;
  v9 = &this->m_StickyEntTextNames.m_Memory.m_pMemory[v8];
  if ( v9 != 0 )
  {
    v9->m_pString = 0;
    v10 = &this->m_StickyEntTextNames.m_Memory.m_pMemory[v8];
  }
  else
  {
    v10 = 0;
  }
  CUtlString::operator=(v10, m_pAsString);
  CEntityDebugGameSystem::SetDebugBitsOnMatchingEntities(this, pPlayer, m_pAsString, 1u, 0.0);
}


// CEntityDebugGameSystem::RemoveStickyEntTextName  (line 255, @0x0000000001f418f0, libserver.so)  // inlines: Destruct<CUtlString>, Element, GetClassNameAsCStr, GetClassname, Remove, ShiftElementsLeft, String, V_memmove, memmove, operator[], ~CUtlString
// calls: CUtlString::Get, V_stricmp_fast, CEntityDebugGameSystem::ClearDebugBitsOnMatchingEntities, CUtlString::FreeMemoryBlock, memmove, GetNextCommandEntity
// callers: ent_text_sticky_remove
void __fastcall CEntityDebugGameSystem::RemoveStickyEntTextName(
        CEntityDebugGameSystem *const this,
        CEntityInstance *pPlayer,
        const char *pName)
{
  const char *m_pAsString; // r13
  __int64 v5; // rbx
  __int64 v6; // r12
  const char *v7; // rax
  CUtlString *v8; // rdi
  int m_Size; // eax
  CBaseEntity *NextCommandEntity; // rax
  CEntityIdentity *m_pEntity; // rax

  m_pAsString = pName;
  if ( pName == 0 || *pName == 0 )
  {
    NextCommandEntity = GetNextCommandEntity(pPlayer, pName, 0);
    if ( NextCommandEntity == 0 )
      return;
    m_pEntity = NextCommandEntity->m_pEntity;
    m_pAsString = "";
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
  }
  if ( this->m_StickyEntTextNames.m_Size > 0 )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = v5;
      v7 = CUtlString::Get(&this->m_StickyEntTextNames.m_Memory.m_pMemory[v5]);
      if ( V_stricmp_fast(v7, m_pAsString) == 0 )
        break;
      if ( ++v5 >= this->m_StickyEntTextNames.m_Size )
        return;
    }
    CEntityDebugGameSystem::ClearDebugBitsOnMatchingEntities(this, pPlayer, m_pAsString, 1u, 0.0);
    v8 = &this->m_StickyEntTextNames.m_Memory.m_pMemory[v6];
    if ( v8->m_pString != 0 )
      CUtlString::FreeMemoryBlock(v8);
    m_Size = this->m_StickyEntTextNames.m_Size;
    if ( m_Size - v5 - 1 > 0 )
    {
      memmove(
        &this->m_StickyEntTextNames.m_Memory.m_pMemory[v6],
        &this->m_StickyEntTextNames.m_Memory.m_pMemory[v5 + 1],
        8LL * (this->m_StickyEntTextNames.m_Size - v5 - 1));
      m_Size = this->m_StickyEntTextNames.m_Size;
    }
    this->m_StickyEntTextNames.m_Size = m_Size - 1;
  }
}


// CEntityDebugGameSystem::ClearStickyEntTextNames  (line 279, @0x0000000001f41a80, libserver.so)  // inlines: String, operator[]
// calls: CUtlString::Get, CEntityDebugGameSystem::ClearDebugBitsOnMatchingEntities, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll
// callers: ent_text_sticky_clear
void __fastcall CEntityDebugGameSystem::ClearStickyEntTextNames(
        CEntityDebugGameSystem *const this,
        CEntityInstance *pPlayer)
{
  __int64 i; // rbx
  const char *v5; // rax

  for ( i = 0; this->m_StickyEntTextNames.m_Size > i; ++i )
  {
    v5 = CUtlString::Get(&this->m_StickyEntTextNames.m_Memory.m_pMemory[i]);
    CEntityDebugGameSystem::ClearDebugBitsOnMatchingEntities(this, pPlayer, v5, 1u, 0.0);
  }
  CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::RemoveAll(&this->m_StickyEntTextNames);
}


// CEntityDebugGameSystem::DumpStickyEntTextNames  (line 289, @0x0000000001f35120, libserver.so)  // inlines: String, operator[]
// calls: LoggingSystem_IsChannelEnabled, CUtlString::Get, LoggingSystem_Log
// callers: ent_text_sticky_dump
// strings: "ENT TEXT STICKY NAMES\n"
void __fastcall CEntityDebugGameSystem::DumpStickyEntTextNames(const CEntityDebugGameSystem *const this)
{
  __int64 v2; // r12
  int v3; // ebx
  __int64 v4; // rdi
  const char *v5; // rax

  if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 1) != 0 )
    LoggingSystem_Log(LOG_ENTITY_SYSTEM, 1, "ENT TEXT STICKY NAMES\n");
  v2 = 0;
  v3 = 0;
  while ( this->m_StickyEntTextNames.m_Size > v3 )
  {
    while ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 1) == 0 )
    {
      ++v3;
      v2 += 8;
      if ( this->m_StickyEntTextNames.m_Size <= v3 )
        return;
    }
    v4 = v2;
    ++v3;
    v2 += 8;
    v5 = CUtlString::Get((this->m_StickyEntTextNames.m_Memory.m_pMemory + v4));
    LoggingSystem_Log(LOG_ENTITY_SYSTEM, 1, "%s\n", v5);
  }
}


// CEntityDebugGameSystem::OnEntityCreated  (line 299, @0x0000000001f60b90, libserver.so)  // inlines: ClassMatches, NameMatches, SetDebugBits, String, operator[]
// calls: IsDedicatedServer, CUtlString::Get, CEntityIdentity::NameMatches, CEntityDebugGameSystem::SetDebugBits, CEntityIdentity::ClassMatches
// callers: CNotifyManager::OnEntityCreated
// globals: g_pEntityDebugGameSystem
void __fastcall CEntityDebugGameSystem::OnEntityCreated(CEntityDebugGameSystem *const this, CEntityInstance *pEntity)
{
  __int64 v4; // r12
  const char *v5; // rax
  const char *v6; // rax

  if ( !IsDedicatedServer() && pEntity != 0 && this->m_StickyEntTextNames.m_Size > 0 )
  {
    v4 = 0;
    while ( 1 )
    {
      v5 = CUtlString::Get(&this->m_StickyEntTextNames.m_Memory.m_pMemory[v4]);
      if ( CEntityIdentity::NameMatches(pEntity->m_pEntity, v5) )
        break;
      v6 = CUtlString::Get(&this->m_StickyEntTextNames.m_Memory.m_pMemory[v4]);
      if ( CEntityIdentity::ClassMatches(pEntity->m_pEntity, v6) )
        break;
      if ( ++v4 >= this->m_StickyEntTextNames.m_Size )
        return;
    }
    CEntityDebugGameSystem::SetDebugBits(
      g_pEntityDebugGameSystem,
      &g_pEntityDebugGameSystem->m_simDebugEntities,
      pEntity,
      1u);
  }
}


// CEntityDebugGameSystem::GetDebugOverlayLine  (line 325, @0x0000000001f35220, libserver.so)
// calls: operator new
// callers: CEntityDebugGameSystem::AddDebugLine
OverlayLine_t *__fastcall CEntityDebugGameSystem::GetDebugOverlayLine(CEntityDebugGameSystem *const this)
{
  __int64 m_nDebugOverlayIndex; // rax
  __int64 i; // rbx
  OverlayLine_t *v5; // rax
  OverlayLine_t *v6; // rax

  m_nDebugOverlayIndex = this->m_nDebugOverlayIndex;
  if ( m_nDebugOverlayIndex == -1 )
  {
    for ( i = 0; i != 20; ++i )
    {
      v5 = operator new(0x28u);
      this->m_debugOverlayLine[i] = v5;
      v5->noDepthTest = 1;
      v6 = this->m_debugOverlayLine[i];
      v6->draw = 0;
    }
    this->m_nDebugOverlayIndex = 1;
    return this->m_debugOverlayLine[0];
  }
  else if ( m_nDebugOverlayIndex == 19 )
  {
    this->m_nDebugOverlayIndex = 0;
    return this->m_debugOverlayLine[19];
  }
  else
  {
    this->m_nDebugOverlayIndex = m_nDebugOverlayIndex + 1;
    return this->m_debugOverlayLine[m_nDebugOverlayIndex];
  }
}


// CEntityDebugGameSystem::AddDebugLine  (line 361, @0x0000000001f352b0, libserver.so)  // inlines: CGameQueryAttributes, CGameTrace, GetFloat, HitWorldAndEntitiesByContents, Init, LengthSqr, Ray_t, RnCollisionAttr_t, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnore, SetInteractsWith, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAligned, VectorClear, VectorCopy, VectorSubtract, operator=
// calls: CEntityDebugGameSystem::GetDebugOverlayLine, CGameTrace::Init, EntityIDFromBaseEntity, HierarchyIDFromBaseEntity, CGamePhysicsQueryInterface::TraceRay
// callers: CEntityDebugGameSystem::AddDebugLine
void __fastcall CEntityDebugGameSystem::AddDebugLine(
        CEntityDebugGameSystem *const this,
        const Vector *const startPos,
        const Vector *const endPos,
        bool noDepthTest,
        bool testLOS)
{
  OverlayLine_t *DebugOverlayLine; // rbx
  vec_t z; // xmm0_4
  CGameQueryAttributes filter; // [rsp+0h] [rbp-160h] BYREF
  Ray_t ray; // [rsp+30h] [rbp-130h] BYREF
  trace_t tr; // [rsp+80h] [rbp-E0h] BYREF

  DebugOverlayLine = CEntityDebugGameSystem::GetDebugOverlayLine(this);
  DebugOverlayLine->origin = *startPos;
  DebugOverlayLine->dest.x = endPos->x;
  DebugOverlayLine->dest.y = endPos->y;
  z = endPos->z;
  DebugOverlayLine->noDepthTest = noDepthTest;
  DebugOverlayLine->draw = 1;
  DebugOverlayLine->dest.z = z;
  if ( !testLOS )
    goto LABEL_2;
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  filter.m_nInteractsExclude = 0;
  filter.m_nInteractsAs = 0;
  filter.m_nCollisionGroup = 3;
  *(&filter.RnQueryShapeAttr_t + 31) = *(&filter.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  filter.m_nObjectSetMask = 7;
  filter.m_nInteractsWith = 16449;
  filter.m_nEntityIdToIgnore = EntityIDFromBaseEntity(0);
  memset(&ray.m_Delta.w, 0, 36);
  filter.m_nHierarchyId = HierarchyIDFromBaseEntity(0);
  ray.m_Start.w = 0.0;
  ray.m_flRadius = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  ray.m_Delta.x = DebugOverlayLine->dest.x - DebugOverlayLine->origin.x;
  ray.m_Delta.y = DebugOverlayLine->dest.y - DebugOverlayLine->origin.y;
  ray.m_Delta.z = DebugOverlayLine->dest.z - DebugOverlayLine->origin.z;
  ray.m_IsRay = 1;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  ray.m_Start.Vector = DebugOverlayLine->origin;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &filter, &tr);
  if ( tr.startsolid || tr.fraction < 1.0 )
  {
    DebugOverlayLine->r = 255;
    DebugOverlayLine->g = 0;
    DebugOverlayLine->b = 0;
  }
  else
  {
LABEL_2:
    DebugOverlayLine->r = 255;
    DebugOverlayLine->g = 255;
    DebugOverlayLine->b = 255;
  }
}


// CEntityDebugGameSystem::AddDebugLine  (line 361, @0x0000000001f35550, libserver.so)
// calls: IsDedicatedServer, CEntityDebugGameSystem::AddDebugLine
// callers: drawcross, drawline
void __fastcall CEntityDebugGameSystem::AddDebugLine(
        CEntityDebugGameSystem *const this,
        const Vector *const startPos,
        const Vector *const endPos,
        bool noDepthTest,
        bool testLOS)
{
  if ( !IsDedicatedServer() )
    CEntityDebugGameSystem::AddDebugLine(this, startPos, endPos, noDepthTest, testLOS);
}


// CEntityDebugGameSystem::DrawOverlayLines  (line 396, @0x0000000001f35900, libserver.so)
// calls: NDebugOverlay::Line
// callers: CEntityDebugGameSystem::OnPostSimulate
void __fastcall CEntityDebugGameSystem::DrawOverlayLines(CEntityDebugGameSystem *const this)
{
  __int64 v2; // rbx
  OverlayLine_t *v3; // rdi

  v2 = 0;
  if ( this->m_nDebugOverlayIndex != -1 )
  {
    do
    {
      while ( 1 )
      {
        v3 = this->m_debugOverlayLine[v2];
        if ( v3->draw )
          break;
        if ( ++v2 == 20 )
          return;
      }
      ++v2;
      NDebugOverlay::Line(&v3->origin, &v3->dest, v3->r, v3->g, v3->b, v3->noDepthTest, 0.0);
    }
    while ( v2 != 20 );
  }
}


// CEntityDebugGameSystem::GameInit  (line 416, @0x0000000001f29f70, libserver.so)
void __fastcall CEntityDebugGameSystem::GameInit(CEntityDebugGameSystem *const this, const EventGameInit_t *const msg)
{
  this->m_bInDebugSelect = 0;
  this->m_nDebugPlayer.m_Data = -1;
}


// CEntityDebugGameSystem::ToggleDebugSelect  (line 422, @0x0000000001f35960, libserver.so)
void __fastcall CEntityDebugGameSystem::ToggleDebugSelect(
        CEntityDebugGameSystem *const this,
        CEntityIndex nPlayerIndex)
{
  this->m_bInDebugSelect ^= 1u;
  this->m_nDebugPlayer = nPlayerIndex;
}


// CEntityDebugGameSystem::GetDebugPlayerIndex  (line 430, @0x0000000001f35980, libserver.so)
// callers: GetDebugPlayer
CEntityIndex __fastcall CEntityDebugGameSystem::GetDebugPlayerIndex(const CEntityDebugGameSystem *const this)
{
  return this->m_nDebugPlayer.m_Data;
}


// CEntityDebugGameSystem::SetDebugPlayerIndex  (line 435, @0x0000000001f35990, libserver.so)
void __fastcall CEntityDebugGameSystem::SetDebugPlayerIndex(
        CEntityDebugGameSystem *const this,
        CEntityIndex nPlayerIndex)
{
  this->m_nDebugPlayer = nPlayerIndex;
}


// CEntityDebugGameSystem::DrawDebugSelect  (line 442, @0x0000000001f359a0, libserver.so)  // inlines: GetDebugBits, GetInt
// calls: UTIL_PlayerByIndex, CEntityDebugGameSystem::GetDebugBits, CBaseEntity::DrawBBoxOverlay, CBaseEntity::DrawAxisOverlay
// callers: CEntityDebugGameSystem::OnPostSimulate
void __fastcall CEntityDebugGameSystem::DrawDebugSelect(CEntityDebugGameSystem *const this)
{
  CBasePlayer *v2; // rax
  const CEntityInstance *v3; // rax
  CBaseEntity *v4; // r12
  void (__fastcall *v5)(CBaseEntity *, int64, _QWORD); // r14
  unsigned int m_nValue; // r13d
  int64 DebugBits; // rax
  float v8; // xmm1_4

  if ( this->m_bInDebugSelect )
  {
    v2 = UTIL_PlayerByIndex(this->m_nDebugPlayer);
    if ( v2 != 0 )
    {
      v3 = (*(v2->_vptr_IHandleEntity + 531))(v2);
      v4 = v3;
      if ( v3 != 0 )
      {
        v5 = *(v3->_vptr_IHandleEntity + 79);
        m_nValue = ent_text_flags_active.m_pParent->m_Value.m_nValue;
        DebugBits = CEntityDebugGameSystem::GetDebugBits(this, &this->m_simDebugEntities, v3);
        v5(v4, DebugBits, m_nValue);
        CBaseEntity::DrawBBoxOverlay(v4, 0.0, v8);
        CBaseEntity::DrawAxisOverlay(v4);
      }
    }
  }
}


// CEntityDebugGameSystem::DrawMassReport  (line 464, @0x0000000001f35a40, libserver.so)  // inlines: GetInstance, GetInt, String, ToCStr
// calls: CBaseEntity::VPhysicsGetObject, GetMassEquivalent, CBaseEntity::GetModelName, V_snprintf, CBaseEntity::EntityText, __stack_chk_fail
// callers: CEntityDebugGameSystem::OnPostSimulate
// strings: "%s: Mass: %.2f kg / %.2f lb (%s)"
void __fastcall CEntityDebugGameSystem::DrawMassReport(CEntityDebugGameSystem *const this)
{
  CEntityIdentity *i; // r12
  CBaseEntity *m_pInstance; // rbx
  IPhysicsObject *Object; // rax
  float v4; // xmm1_4
  const char *MassEquivalent; // r15
  IPhysicsObject *v6; // rax
  IPhysicsObject *v7; // rax
  const char *v8; // rcx
  double v9; // [rsp+10h] [rbp-260h]
  double v10; // [rsp+18h] [rbp-258h]
  const char *v11; // [rsp+20h] [rbp-250h] BYREF
  char tempstr[520]; // [rsp+30h] [rbp-240h] BYREF
  unsigned __int64 v13; // [rsp+238h] [rbp-38h]

  v13 = __readfsqword(0x28u);
  if ( massreport.m_pParent->m_Value.m_nValue != 0 )
  {
    for ( i = g_pEntitySystem->m_EntityList.m_pFirstActiveEntity; i != 0; i = i->m_pNext )
    {
      m_pInstance = i->m_pInstance;
      if ( CBaseEntity::VPhysicsGetObject(i->m_pInstance) != 0 )
      {
        Object = CBaseEntity::VPhysicsGetObject(m_pInstance);
        (*(*Object + 208LL))(Object);
        MassEquivalent = GetMassEquivalent(v4);
        v6 = CBaseEntity::VPhysicsGetObject(m_pInstance);
        v9 = ((*(*v6 + 208LL))(v6) * 2.2);
        v7 = CBaseEntity::VPhysicsGetObject(m_pInstance);
        v10 = (*(*v7 + 208LL))(v7);
        CBaseEntity::GetModelName(&v11, m_pInstance);
        v8 = "";
        if ( v11 != 0 )
          v8 = v11;
        V_snprintf(tempstr, 512, "%s: Mass: %.2f kg / %.2f lb (%s)", v8, MassEquivalent, v10, v9);
        CBaseEntity::EntityText(m_pInstance, 0, tempstr, 0.0, 255, 255, 255, 255);
      }
    }
  }
}


// CEntityDebugGameSystem::OnPostSimulate  (line 708, @0x0000000001f66650, libserver.so)  // inlines: CDebugOverlayScope, CEntityHandle, FirstHandle, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, Init, Key, LookupEntity, MakeStringToken, NextHandle, operator CEntityInstance*, operator[], ~CDebugOverlayScope
// calls: IsDedicatedServer, MurmurHash2LowerCase, CEntityDebugGameSystem::DrawDebugSelect, CGlobalVarsBase::curtime, CEntityDebugGameSystem::DrawScrollingMessageLists, DrawMessageEntities, CEntityDebugGameSystem::DrawMassReport, CEntityDebugGameSystem::DrawOverlayLines, CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::RemoveAndAdvance, RegisterStringToken, _Unwind_Resume
// callers: CEntityDebugGameSystem::OnClientGamePostSimulate, CEntityDebugGameSystem::OnServerGamePostSimulate
// strings: "CEntityDebugGameSystem::OnPostSimulate"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CEntityDebugGameSystem::OnPostSimulate(
        CEntityDebugGameSystem *const this,
        const EventSimulate_t *const msg)
{
  IDebugOverlay *v3; // r12
  uint32 v4; // eax
  __int64 v5; // rsi
  uint32 v6; // r13d
  int m_nAllocationCount; // ecx
  CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t> *m_pMemory; // rdx
  CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t> *v9; // rax
  signed int v10; // r15d
  float v11; // xmm0_4
  float v12; // xmm2_4
  __int64 v13; // r14
  CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t> *v14; // rdx
  int v15; // eax
  CEntityIdentity *v16; // rcx
  CEntityIdentity *v17; // rcx
  int v18; // ecx
  signed int v19; // eax
  int flags_and_hash; // r9d

  if ( !IsDedicatedServer() )
  {
    v3 = g_pDebugOverlay;
    v4 = MurmurHash2LowerCase("CEntityDebugGameSystem::OnPostSimulate", 0x31415926u);
    v6 = v4;
    if ( g_bUpdateStringTokenDatabase )
      RegisterStringToken(v4, "CEntityDebugGameSystem::OnPostSimulate", 0, 1);
    if ( v3 != 0 )
    {
      (*(*v3 + 576LL))(v3, v6);
      (*(*v3 + 560LL))(v3, v6);
    }
    m_nAllocationCount = this->m_simDebugEntities.m_table.m_nAllocationCount;
    m_pMemory = this->m_simDebugEntities.m_table.m_pMemory;
    if ( m_nAllocationCount <= 0 )
      goto LABEL_12;
    v9 = m_pMemory + 1;
    v10 = 0;
    if ( m_pMemory->flags_and_hash >= 0 )
    {
      v10 = 0;
      while ( 1 )
      {
LABEL_21:
        v13 = v10;
        v14 = &m_pMemory[v13];
        v15 = v14->data[0];
        if ( (v15 + 2) > 1
          && (v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v15 >> 9) & 0x3F]) != 0
          && (v17 = &v16[v15 & 0x1FF]) != 0
          && v15 == v17->m_EHandle.m_Index
          && v17->m_pInstance != 0 )
        {
          (*(v17->m_pInstance->_vptr_IHandleEntity + 14))(v17->m_pInstance, *&v14->data[2]);
          v18 = this->m_simDebugEntities.m_table.m_nAllocationCount;
          v19 = v10 + 1;
          m_pMemory = this->m_simDebugEntities.m_table.m_pMemory;
          if ( v10 + 1 >= v18 )
            goto LABEL_12;
          flags_and_hash = m_pMemory[v13 + 1].flags_and_hash;
          v5 = 5LL * v19 + 5;
          m_pMemory = (m_pMemory + 4 * v5);
          if ( flags_and_hash < 0 )
          {
            while ( ++v19 != v18 )
            {
              ++m_pMemory;
              if ( m_pMemory[-1].flags_and_hash >= 0 )
                goto LABEL_32;
            }
            goto LABEL_12;
          }
LABEL_32:
          v10 = v19;
        }
        else
        {
          v10 = CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::RemoveAndAdvance(
                  &this->m_simDebugEntities,
                  v10);
        }
        if ( v10 == -1 )
          goto LABEL_12;
        m_pMemory = this->m_simDebugEntities.m_table.m_pMemory;
      }
    }
    do
    {
      if ( ++v10 == m_nAllocationCount )
        goto LABEL_12;
      ++v9;
    }
    while ( v9[-1].flags_and_hash < 0 );
    if ( v10 != -1 )
      goto LABEL_21;
LABEL_12:
    if ( gpGlobals != 0 )
    {
      CEntityDebugGameSystem::DrawDebugSelect(this);
      v11 = CGlobalVarsBase::curtime(gpGlobals, 0);
      CEntityDebugGameSystem::DrawScrollingMessageLists(this, COERCE_DOUBLE(LODWORD(gpGlobals->frametime)), v11, v12);
      DrawMessageEntities();
      CEntityDebugGameSystem::DrawMassReport(this);
      CEntityDebugGameSystem::DrawOverlayLines(this);
    }
    if ( v3 != 0 )
      (*(*v3 + 568LL))(v3, v5, m_pMemory);
  }
}


// CEntityDebugGameSystem::PreRender  (line 756, @0x0000000001f41b90, libserver.so)  // inlines: CDebugOverlayScope, CEntityHandle, FirstHandle, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, Init, Key, LookupEntity, MakeStringToken, NextHandle, operator CEntityInstance*, operator[], ~CDebugOverlayScope
// calls: IsDedicatedServer, MurmurHash2LowerCase, CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::RemoveAndAdvance, RegisterStringToken, _Unwind_Resume
// strings: "CEntityDebugGameSystem::PreRender"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CEntityDebugGameSystem::PreRender(
        CEntityDebugGameSystem *const this,
        const EventClientPreRender_t *const msg)
{
  IDebugOverlay *v3; // r12
  uint32 v4; // eax
  __int64 v5; // rsi
  uint32 v6; // r13d
  int m_nAllocationCount; // ecx
  CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t> *m_pMemory; // rdx
  CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t> *v9; // rax
  signed int v10; // r15d
  __int64 v11; // r14
  CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t> *v12; // rdx
  int v13; // eax
  CEntityIdentity *v14; // rcx
  CEntityIdentity *v15; // rcx
  int v16; // ecx
  signed int v17; // eax
  int flags_and_hash; // r15d

  if ( !IsDedicatedServer() )
  {
    v3 = g_pDebugOverlay;
    v4 = MurmurHash2LowerCase("CEntityDebugGameSystem::PreRender", 0x31415926u);
    v6 = v4;
    if ( g_bUpdateStringTokenDatabase )
      RegisterStringToken(v4, "CEntityDebugGameSystem::PreRender", 0, 1);
    if ( v3 != 0 )
    {
      (*(*v3 + 576LL))(v3, v6);
      (*(*v3 + 560LL))(v3, v6);
    }
    m_nAllocationCount = this->m_renderDebugEntities.m_table.m_nAllocationCount;
    m_pMemory = this->m_renderDebugEntities.m_table.m_pMemory;
    if ( m_nAllocationCount <= 0 )
      goto LABEL_12;
    v9 = m_pMemory + 1;
    v10 = 0;
    if ( m_pMemory->flags_and_hash >= 0 )
    {
      v10 = 0;
      while ( 1 )
      {
LABEL_19:
        v11 = v10;
        v12 = &m_pMemory[v11];
        v13 = v12->data[0];
        if ( (v13 + 2) > 1
          && (v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v13 >> 9) & 0x3F]) != 0
          && (v15 = &v14[v13 & 0x1FF]) != 0
          && v13 == v15->m_EHandle.m_Index
          && v15->m_pInstance != 0 )
        {
          (*(v15->m_pInstance->_vptr_IHandleEntity + 14))(v15->m_pInstance, *&v12->data[2]);
          v16 = this->m_renderDebugEntities.m_table.m_nAllocationCount;
          v17 = v10 + 1;
          m_pMemory = this->m_renderDebugEntities.m_table.m_pMemory;
          if ( v10 + 1 >= v16 )
            goto LABEL_12;
          flags_and_hash = m_pMemory[v11 + 1].flags_and_hash;
          v5 = 5LL * v17 + 5;
          m_pMemory = (m_pMemory + 4 * v5);
          if ( flags_and_hash < 0 )
          {
            while ( ++v17 != v16 )
            {
              ++m_pMemory;
              if ( m_pMemory[-1].flags_and_hash >= 0 )
                goto LABEL_30;
            }
            goto LABEL_12;
          }
LABEL_30:
          v10 = v17;
        }
        else
        {
          v10 = CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::RemoveAndAdvance(
                  &this->m_renderDebugEntities,
                  v10);
        }
        if ( v10 == -1 )
          goto LABEL_12;
        m_pMemory = this->m_renderDebugEntities.m_table.m_pMemory;
      }
    }
    do
    {
      if ( ++v10 == m_nAllocationCount )
        goto LABEL_12;
      ++v9;
      v5 = v9[-1].flags_and_hash;
    }
    while ( v5 < 0 );
    if ( v10 != -1 )
      goto LABEL_19;
LABEL_12:
    if ( v3 != 0 )
      (*(*v3 + 568LL))(v3, v5, m_pMemory);
  }
}


// CEntityDebugGameSystem::AddScrollingMessage  (line 788, @0x0000000001f65da0, libserver.so)  // inlines: AddToHead, CEntityHandle, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, DebugScrollingMessage_t, Element, Find, FindInsertionPosition, GetEHandle, GetEntryIndex, GetSerialNumber, Init, Insert, InsertAt, LeftChild, RightChild, operator(), operator=, operator[], ~CUtlString, ~DebugScrollingMessage_t
// calls: IsDedicatedServer, CUtlString::operator=, operator new, CUtlVectorBase<CEntityDebugGameSystem::DebugScrollingMessage_t, CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t, int> >::InsertBefore, CUtlString::FreeMemoryBlock, CUtlRBTree<CUtlMap<int, CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::Node_t, short unsigned int, CUtlMap<int, CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<int, CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::Node_t, short unsigned int, CUtlMap<int, CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, _Unwind_Resume
// callers: CBaseEntity::AddTimedOverlay
void __fastcall CEntityDebugGameSystem::AddScrollingMessage(
        CEntityDebugGameSystem *const this,
        CEntityInstance *pEntity,
        const char *msg,
        float flTimeToLive,
        uint32 *color)
{
  float v9; // xmm0_4
  CEntityIdentity *m_pEntity; // rax
  __int16 v11; // cx
  __int64 m_Root; // rax
  UtlRBTreeNode_t<CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::Node_t,short unsigned int> *v13; // rdx
  __int64 v14; // r12
  __int64 v15; // r13
  CUtlVectorBase<CEntityDebugGameSystem::DebugScrollingMessage_t,CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t,int> > *v16; // rax
  CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t,CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t,int> > *v17; // r12
  unsigned __int16 v18; // r14
  unsigned __int16 m_Right; // ax
  bool v20; // r12
  bool v21; // zf
  UtlRBTreeNode_t<CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::Node_t,short unsigned int> *m_pMemory; // rax
  unsigned __int16 v23; // ax
  int iEntitya; // [rsp+8h] [rbp-78h]
  _DWORD v26[4]; // [rsp+10h] [rbp-70h] BYREF
  int v27; // [rsp+20h] [rbp-60h] BYREF
  CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t,CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t,int> > *pVector; // [rsp+28h] [rbp-58h]
  CEntityDebugGameSystem::DebugScrollingMessage_t newTO; // [rsp+30h] [rbp-50h] BYREF

  if ( !IsDedicatedServer() )
  {
    newTO.m_Text.m_pString = 0;
    newTO.m_flStartAbsTime = (*(*g_pDebugOverlay + 40LL))(g_pDebugOverlay);
    if ( flTimeToLive < 0.0 )
    {
      newTO.m_flTimeToLive = -9999.0;
    }
    else
    {
      if ( (*(*g_pDebugOverlay + 64LL))(g_pDebugOverlay) > flTimeToLive )
        (*(*g_pDebugOverlay + 64LL))(g_pDebugOverlay);
      else
        v9 = flTimeToLive;
      newTO.m_flTimeToLive = v9;
    }
    CUtlString::operator=(&newTO.m_Text, msg);
    iEntitya = -1;
    newTO.m_Color.color = *color;
    m_pEntity = pEntity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v11 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v27 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v11 & 0x7FFF;
      iEntitya = v27;
    }
    v26[0] = iEntitya;
    m_Root = this->m_ScrollingMessageLists.m_Tree.m_Root;
    if ( m_Root == 0xFFFF )
    {
LABEL_17:
      v16 = operator new(0x18u);
      v16->m_Size = 0;
      v16->m_Memory.m_pMemory = 0;
      v17 = v16;
      v16->m_Memory.m_nAllocationCount = 0;
      v16->m_Memory.m_nGrowSize = 0;
      CUtlVectorBase<CEntityDebugGameSystem::DebugScrollingMessage_t,CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t,int>>::InsertBefore(
        v16,
        0,
        &newTO);
      v18 = this->m_ScrollingMessageLists.m_Tree.m_Root;
      pVector = v17;
      v27 = iEntitya;
      if ( v18 == 0xFFFF )
      {
        v20 = 0;
      }
      else
      {
        while ( 1 )
        {
          v21 = !this->m_ScrollingMessageLists.m_Tree.m_LessFunc.m_LessFunc(
                   &v27,
                   &this->m_ScrollingMessageLists.m_Tree.m_Elements.m_pMemory[v18].m_Data);
          m_pMemory = this->m_ScrollingMessageLists.m_Tree.m_Elements.m_pMemory;
          if ( v21 )
          {
            m_Right = m_pMemory[v18].m_Right;
            v20 = 0;
          }
          else
          {
            m_Right = m_pMemory[v18].m_Left;
            v20 = 1;
          }
          if ( m_Right == 0xFFFF )
            break;
          v18 = m_Right;
        }
      }
      v23 = CUtlRBTree<CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t,CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t,CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t,CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
              &this->m_ScrollingMessageLists.m_Tree,
              &v27);
      CUtlRBTree<CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t,CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t,CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t,CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
        &this->m_ScrollingMessageLists.m_Tree,
        v23,
        v18,
        v20);
      ++this->m_ScrollingMessageLists.m_Tree.m_NumElements;
    }
    else
    {
      v13 = this->m_ScrollingMessageLists.m_Tree.m_Elements.m_pMemory;
      while ( 1 )
      {
        while ( 1 )
        {
          v14 = m_Root;
          v15 = m_Root;
          if ( !this->m_ScrollingMessageLists.m_Tree.m_LessFunc.m_LessFunc(v26, &v13[m_Root].m_Data) )
            break;
          v13 = this->m_ScrollingMessageLists.m_Tree.m_Elements.m_pMemory;
          m_Root = v13[v14].m_Left;
          if ( m_Root == 0xFFFF )
            goto LABEL_17;
        }
        if ( !this->m_ScrollingMessageLists.m_Tree.m_LessFunc.m_LessFunc(
                &this->m_ScrollingMessageLists.m_Tree.m_Elements.m_pMemory[v15].m_Data,
                v26) )
          break;
        v13 = this->m_ScrollingMessageLists.m_Tree.m_Elements.m_pMemory;
        m_Root = v13[v15].m_Right;
        if ( m_Root == 0xFFFF )
          goto LABEL_17;
      }
      CUtlVectorBase<CEntityDebugGameSystem::DebugScrollingMessage_t,CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t,int>>::InsertBefore(
        this->m_ScrollingMessageLists.m_Tree.m_Elements.m_pMemory[v15].m_Data.elem,
        0,
        &newTO);
    }
    if ( newTO.m_Text.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&newTO.m_Text);
  }
}


// CEntityDebugGameSystem::AgeScrollingMessageLists  (line 825, @0x0000000001f660a0, libserver.so)  // inlines: Destruct<CEntityDebugGameSystem::DebugScrollingMessage_t>, Element, FreeNode, IsIdxValid, IsValidIndex, LeftChild, Purge, Remove, RemoveAll, RemoveAt, SetLeftChild, SetRightChild, ShiftElementsLeft, V_memmove, memmove, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~DebugScrollingMessage_t
// calls: CUtlString::FreeMemoryBlock, memmove, operator delete, CUtlRBTree<CUtlMap<int, CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::Node_t, short unsigned int, CUtlMap<int, CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::Node_t, short unsigned int>, short unsigned int> >::Unlink, CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t, int>::Purge
// callers: CEntityDebugGameSystem::DrawScrollingMessageLists
void __fastcall CEntityDebugGameSystem::AgeScrollingMessageLists(
        CEntityDebugGameSystem *const this,
        double a2,
        float flDelta,
        float flAbsTime)
{
  CUtlRBTree<CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::Node_t,short unsigned int,CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::Node_t,short unsigned int>,short unsigned int> > *v4; // rcx
  int v6; // r14d
  int m_nAllocationCount; // eax
  UtlRBTreeNode_t<CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::Node_t,short unsigned int> *m_pMemory; // rdx
  int *v9; // r13
  __int64 v10; // rax
  int v11; // ebx
  __int64 v12; // r12
  __int64 v13; // rax
  float v14; // xmm0_4
  int v15; // eax
  __int64 v16; // r12
  int v17; // ebx
  UtlRBTreeNode_t<CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::Node_t,short unsigned int> *v18; // rdx
  CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t,CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t,int> >*,short unsigned int,bool (*)(int const&,int const&)>::ElemType_t elem; // r14
  bool v20; // zf
  float v21; // [rsp+0h] [rbp-40h]
  float v22; // [rsp+0h] [rbp-40h]
  CUtlRBTree<CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::Node_t,short unsigned int,CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::Node_t,short unsigned int>,short unsigned int> > *v23; // [rsp+8h] [rbp-38h]
  CUtlRBTree<CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::Node_t,short unsigned int,CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::Node_t,short unsigned int>,short unsigned int> > *v24; // [rsp+8h] [rbp-38h]

  v4 = 0;
  v6 = 0;
  m_nAllocationCount = this->m_ScrollingMessageLists.m_Tree.m_Elements.m_nAllocationCount;
  if ( m_nAllocationCount != 0 )
  {
    do
    {
      if ( v6 < m_nAllocationCount && v6 <= this->m_ScrollingMessageLists.m_Tree.m_LastAlloc.index )
      {
        m_pMemory = this->m_ScrollingMessageLists.m_Tree.m_Elements.m_pMemory;
        if ( m_pMemory[v6].m_Left != v6 )
        {
          v9 = *(&v4->m_Elements.m_nAllocationCount + m_pMemory);
          v10 = *v9;
          v11 = v10 - 1;
          v12 = 24 * v10 - 24;
          while ( v11 != -1 )
          {
            v13 = *(v9 + 1) + v12;
            v14 = *(v13 + 4);
            if ( v14 != -9999.0 && flDelta >= (v14 + *v13) )
            {
              if ( *(v13 + 8) != 0 )
              {
                v21 = flDelta;
                v23 = v4;
                CUtlString::FreeMemoryBlock((v13 + 8));
                v4 = v23;
                flDelta = v21;
              }
              v15 = *v9;
              if ( *v9 - v11 - 1 > 0 )
              {
                v22 = flDelta;
                v24 = v4;
                memmove((v12 + *(v9 + 1)), (*(v9 + 1) + v12 + 24), 24LL * (*v9 - v11 - 1));
                v15 = *v9;
                v4 = v24;
                flDelta = v22;
              }
              *v9 = v15 - 1;
            }
            --v11;
            v12 -= 24;
          }
          m_nAllocationCount = this->m_ScrollingMessageLists.m_Tree.m_Elements.m_nAllocationCount;
        }
      }
      ++v6;
      v4 = (v4 + 24);
    }
    while ( m_nAllocationCount > v6 );
    if ( m_nAllocationCount != 0 )
    {
      v16 = 0;
      v17 = 0;
      do
      {
        if ( v17 < m_nAllocationCount && v17 <= this->m_ScrollingMessageLists.m_Tree.m_LastAlloc.index )
        {
          v18 = this->m_ScrollingMessageLists.m_Tree.m_Elements.m_pMemory;
          if ( v18[v17].m_Left != v17 )
          {
            elem = v18[v16].m_Data.elem;
            if ( elem->m_Size == 0 )
            {
              v20 = (elem->m_Memory.m_nGrowSize & 0xC0000000) == 0;
              elem->m_Size = 0;
              if ( v20 )
              {
                CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t,int>::Purge(&elem->m_Memory);
                if ( (elem->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                  CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t,int>::Purge(&elem->m_Memory);
              }
              operator delete(elem);
              CUtlRBTree<CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t,CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t,CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t,CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t,int>> *,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Unlink(
                &this->m_ScrollingMessageLists.m_Tree,
                v17);
              this->m_ScrollingMessageLists.m_Tree.m_Elements.m_pMemory[v16].m_Left = v17;
              this->m_ScrollingMessageLists.m_Tree.m_Elements.m_pMemory[v16].m_Right = this->m_ScrollingMessageLists.m_Tree.m_FirstFree;
              m_nAllocationCount = this->m_ScrollingMessageLists.m_Tree.m_Elements.m_nAllocationCount;
              this->m_ScrollingMessageLists.m_Tree.m_FirstFree = v17;
              --this->m_ScrollingMessageLists.m_Tree.m_NumElements;
            }
          }
        }
        ++v17;
        ++v16;
      }
      while ( m_nAllocationCount > v17 );
    }
  }
}


// CEntityDebugGameSystem::DrawScrollingMessageLists  (line 862, @0x0000000001f662f0, libserver.so)  // inlines: CEntityHandle, Element, FromIndex, GetDebugName, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsIdxValid, IsValidIndex, LeftChild, LookupEntity, VertexColor_t, operator CEntityInstance*, operator[]
// calls: CEntityDebugGameSystem::AgeScrollingMessageLists, CEntityIdentity::GetDebugName, V_snprintf, IDebugOverlay::EntityText, CUtlString::Get, __stack_chk_fail
// callers: CEntityDebugGameSystem::OnPostSimulate
// strings: "[%s]"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CEntityDebugGameSystem::DrawScrollingMessageLists(
        CEntityDebugGameSystem *const this,
        double a2,
        float flDelta,
        float flAbsTime)
{
  int m_nAllocationCount; // eax
  UtlRBTreeNode_t<CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::Node_t,short unsigned int> *m_pMemory; // rdx
  CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t,CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t,int> >*,short unsigned int,bool (*)(int const&,int const&)>::KeyType_t key; // edx
  CEntityIdentity *v8; // rcx
  CEntityIdentity *v9; // rcx
  CEntityInstance *m_pInstance; // rcx
  CEntityInstance *v11; // r15
  const char *DebugName; // rax
  CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t,CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t,int> >*,short unsigned int,bool (*)(int const&,int const&)>::ElemType_t elem; // r11
  CEntityDebugGameSystem::DebugScrollingMessage_t *v14; // rdi
  int v15; // edx
  int v16; // ebx
  __int64 v17; // r10
  CUtlMap<int,CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t,CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t,int> >*,short unsigned int,bool (*)(int const&,int const&)>::ElemType_t v18; // r15
  int v19; // r14d
  int v20; // r13d
  int v21; // r12d
  const char *v22; // rax
  __int64 v24; // [rsp+18h] [rbp-278h]
  CEntityInstance *pEntity; // [rsp+20h] [rbp-270h]
  int i; // [rsp+2Ch] [rbp-264h]
  __int64 v27; // [rsp+30h] [rbp-260h]
  unsigned __int8 nAlpha; // [rsp+3Ch] [rbp-254h]
  VertexColor_t color; // [rsp+40h] [rbp-250h]
  char tempstr[520]; // [rsp+50h] [rbp-240h] BYREF
  unsigned __int64 v32; // [rsp+258h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  CEntityDebugGameSystem::AgeScrollingMessageLists(this, a2, flDelta, flAbsTime);
  m_nAllocationCount = this->m_ScrollingMessageLists.m_Tree.m_Elements.m_nAllocationCount;
  v24 = 0;
  i = 0;
  if ( m_nAllocationCount != 0 )
  {
    do
    {
      if ( i < m_nAllocationCount && i <= this->m_ScrollingMessageLists.m_Tree.m_LastAlloc.index )
      {
        m_pMemory = this->m_ScrollingMessageLists.m_Tree.m_Elements.m_pMemory;
        if ( m_pMemory[i].m_Left != i )
        {
          key = m_pMemory[v24].m_Data.key;
          if ( (key + 2) > 1 )
          {
            v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(key >> 9) & 0x3F];
            if ( v8 != 0 )
            {
              v9 = &v8[key & 0x1FF];
              if ( v9 != 0 && key == v9->m_EHandle.m_Index )
              {
                m_pInstance = v9->m_pInstance;
                v11 = m_pInstance;
                pEntity = m_pInstance;
                if ( m_pInstance != 0 )
                {
                  DebugName = CEntityIdentity::GetDebugName(m_pInstance->m_pEntity);
                  V_snprintf(tempstr, 512, "[%s]", DebugName);
                  IDebugOverlay::EntityText(g_pDebugOverlay, v11, 0, tempstr, 0.0, 255, 255, 255, 255);
                  elem = this->m_ScrollingMessageLists.m_Tree.m_Elements.m_pMemory[v24].m_Data.elem;
                  if ( elem->m_Size > 0 )
                  {
                    v14 = elem->m_Memory.m_pMemory;
                    v15 = 255 - (((flDelta - v14->m_flStartAbsTime) / v14->m_flTimeToLive) * 255.0);
                    if ( v15 <= 0 )
                      return;
                    v16 = 1;
                    v17 = 24;
                    v18 = this->m_ScrollingMessageLists.m_Tree.m_Elements.m_pMemory[v24].m_Data.elem;
                    while ( 1 )
                    {
                      color.color = v14->m_Color.color;
                      if ( v15 > 205 )
                      {
                        LOBYTE(v19) = BYTE2(v14->m_Color.color);
                        LOBYTE(v20) = BYTE1(v14->m_Color.color);
                        LOBYTE(v21) = v14->m_Color.color;
                      }
                      else
                      {
                        v21 = (color.r * 0.725);
                        v20 = (color.g * 0.707);
                        v19 = (color.b * 0.707);
                      }
                      v27 = v17;
                      nAlpha = v15;
                      v22 = CUtlString::Get(&v14->m_Text);
                      IDebugOverlay::EntityText(g_pDebugOverlay, pEntity, v16, v22, 0.0, v21, v20, v19, nAlpha);
                      if ( v18->m_Size <= v16 )
                        break;
                      v14 = (v18->m_Memory.m_pMemory + v27);
                      ++v16;
                      v17 = v27 + 24;
                      v15 = 255 - (((flDelta - v14->m_flStartAbsTime) / v14->m_flTimeToLive) * 255.0);
                      if ( v15 <= 0 )
                        return;
                    }
                  }
                  m_nAllocationCount = this->m_ScrollingMessageLists.m_Tree.m_Elements.m_nAllocationCount;
                }
              }
            }
          }
        }
      }
      ++i;
      ++v24;
    }
    while ( m_nAllocationCount > i );
  }
}


// SortEntities  (line 914, @0x0000000001f29f90, libserver.so)  // inlines: CEntityHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Init
bool __fastcall SortEntities(CEntityIdentity *left, CEntityIdentity *right)
{
  uint32 v2; // eax
  unsigned __int16 v3; // cx
  int v4; // edi
  uint32 v5; // eax
  unsigned __int16 v6; // cx
  int v7; // esi

  v2 = (left->m_EHandle.m_Index >> 15) - (left->m_flags & 1);
  if ( left->m_EHandle.m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = left->m_EHandle.m_Index & 0x7FFF;
    v4 = v3;
  }
  if ( ((v2 << 15) | v3 & 0x7FFF) == 0xFFFFFFFF )
    v4 = 0x7FFF;
  v5 = (right->m_EHandle.m_Index >> 15) - (right->m_flags & 1);
  if ( right->m_EHandle.m_Index == -1 )
  {
    v6 = 0x7FFF;
    v7 = 0x7FFF;
  }
  else
  {
    v6 = right->m_EHandle.m_Index & 0x7FFF;
    v7 = v6;
  }
  if ( ((v5 << 15) | v6 & 0x7FFF) == 0xFFFFFFFF )
    v7 = 0x7FFF;
  return v4 < v7;
}


// CEntityDebugGameSystem::OnEntitySummary  (line 919, @0x0000000001f2ad90, libserver.so)
// calls: SpewEntityListSummary
void __fastcall CEntityDebugGameSystem::OnEntitySummary(
        CEntityDebugGameSystem *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  SpewEntityListSummary(&g_pEntitySystem->m_EntityList);
}


// CEntityDebugGameSystem::OnEntityReport  (line 925, @0x0000000001f53700, libserver.so)  // inlines: AddToTail, Arg, CEntityHandle, CLoggingInternalMsg_ScopeVerification, CLoggingMetaCommandLink, CLogging_MetaDataAllocator, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlString, CUtlVectorBase, CUtlVectorFixedGrowable, CalcAbsolutePosition, ConvertToExternalMemory, CopyConstruct<CEntityIdentity*>, Element, GetAbsOrigin, GetClassNameAsCStr, GetComponent<CBodyComponent>, GetEHandle, GetEntityNameAsCStr, GetEntryIndex, GetInstance, GetSerialNumber, GrowMemory, Init, IsExternallyAllocated, IterComponentsNext, IterComponentsStart, LeafCodeInfo_t, Load, LoggingMetaData_t, Purge, Purge_FixedGrowable, RemoveAll, Resolve, String, V_memcpy, V_strlen, __pop_heap<CEntityIdentity**, bool (*)(CEntityIdentity*, CEntityIdentity*)>, make_heap<CEntityIdentity**, bool (*)(CEntityIdentity*, CEntityIdentity*)>, memcpy, operator[], sort_heap<CEntityIdentity**, bool (*)(CEntityIdentity*, CEntityIdentity*)>, ~CLoggingInternalMsg_ScopeVerification, ~CLoggingMetaCommandLink, ~CLogging_MetaDataAllocator, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlString, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: V_stristr_fast(char const*,char const*), CUtlMemory<CEntityIdentity*, int>::Grow, std::__adjust_heap<CEntityIdentity**, long int, CEntityIdentity*, bool (*)(CEntityIdentity*, CEntityIdentity*)>, LoggingSystem_IsChannelEnabled, LoggingSystem_GetChannelVerbosity, LoggingSystem_Log(int,LoggingSeverity_t,LoggingMetaData_t const*,Color,char const*,...), operator delete [], CFmtStrN<256, false>::CFmtStrN, strlen, operator new [], memcpy, CGameSceneNode::CalcAbsolutePositionWhenDirty (27 total)
// strings: "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/shared/entitydeb, "%s %d", "\tText", "setpos %.2f %.2f %.2f", "\tGoTo", "\t[%4d]: %s%s\n" (11 total)
// globals: SortEntities(CEntityIdentity *,CEntityIdentity *), UNSPECIFIED_LOGGING_COLOR
void __fastcall CEntityDebugGameSystem::OnEntityReport(
        CEntityDebugGameSystem *const this,
        const CCommandContext *const ctx,
        const CCommand *const args)
{
  const char *v3; // r13
  CEntityIdentity *m_pFirstActiveEntity; // rbx
  CEntityIdentity **p_m_FixedMemory; // r12
  CEntityIdentity **v6; // rax
  const char *m_pAsString; // rdi
  __int64 m_Size; // r12
  __int64 v9; // rbx
  CEntityIdentity **v10; // rbx
  __int64 v11; // r13
  __int64 j; // rbx
  CEntityIdentity *v13; // rcx
  CEntityIdentity *v14; // rax
  CEntityInstance *v15; // r13
  CEntityIdentity *m_pEntity; // rax
  bool v17; // zf
  const char *v18; // rdx
  LoggingVerbosity_t ChannelVerbosity; // eax
  LoggingMetaData_t *p_Log_Meta_InternalMsg_MetaStruct962; // rdx
  LoggingMetaData_t *v21; // r15
  LoggingMetaData_t *m_pAllocatedMetaDataTail; // rbx
  LoggingMetaData_t *m_pNext; // r14
  CEntityIdentity *v24; // rax
  int v25; // edx
  int v26; // ecx
  int v27; // r14d
  CEntityIdentity *v28; // rax
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rax
  __int64 v31; // rbx
  __int64 v32; // r14
  __int64 v33; // r15
  double v34; // r14
  CGameSceneNode *v35; // rbx
  double v36; // r15
  int v37; // r14d
  uint32 v38; // eax
  const char *v39; // rax
  CEntityIdentity *v40; // rdx
  const char *v41; // r8
  int v42; // ecx
  unsigned __int16 v43; // si
  int v44; // edx
  __int64 v45; // rcx
  CEntityIdentity *v46; // rdi
  char *k; // rbx
  char *v48; // rbx
  size_t v49; // rbx
  LoggingMetaData_t *m_pAllocatedMetaDataHead; // rax
  int v51; // eax
  int v52; // ebx
  int v53; // edx
  int v54; // ecx
  int v55; // esi
  int v56; // r8d
  int v57; // r9d
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdi
  __int64 v61; // rsi
  int v62; // ebx
  char v63; // [rsp+0h] [rbp-4190h]
  __int64 v64; // [rsp+58h] [rbp-4138h]
  int _Log_Meta_InternalMsg_ChannelID; // [rsp+60h] [rbp-4130h]
  int i; // [rsp+64h] [rbp-412Ch]
  bool _Log_Meta_InternalMsg_ScopeVerify; // [rsp+7Fh] [rbp-4111h] BYREF
  CUtlString nameAppendString; // [rsp+80h] [rbp-4110h] BYREF
  EntityComponentIter_t componentIterator; // [rsp+88h] [rbp-4108h] BYREF
  CLogging_MetaDataAllocator _Log_Meta_InternalMsg_MetaDataAllocator; // [rsp+90h] [rbp-4100h] BYREF
  CLoggingInternalMsg_ScopeVerification _Log_Meta_InternalMsg_ScopeVerifyInstance962; // [rsp+B0h] [rbp-40E0h] BYREF
  const EntComponentInfo_t *pComponentInfo; // [rsp+D0h] [rbp-40C0h] BYREF
  __int64 v73; // [rsp+D8h] [rbp-40B8h]
  void *pMem; // [rsp+E0h] [rbp-40B0h]
  size_t v75; // [rsp+E8h] [rbp-40A8h]
  char v76; // [rsp+F0h] [rbp-40A0h]
  LoggingMetaData_t _Log_Meta_InternalMsg_MetaStruct962; // [rsp+100h] [rbp-4090h] BYREF
  char szMetaTextDescription[16]; // [rsp+130h] [rbp-4060h] BYREF
  char szComponentBuffer[8192]; // [rsp+140h] [rbp-4050h] BYREF
  CUtlVectorFixedGrowable<CEntityIdentity*,1024ul> entities; // [rsp+2140h] [rbp-2050h] BYREF
  unsigned __int64 v81; // [rsp+4158h] [rbp-38h]

  v3 = 0;
  v81 = __readfsqword(0x28u);
  if ( args->m_nArgc > 1 )
    v3 = args->m_ppArgv[1];
  m_pFirstActiveEntity = g_pEntitySystem->m_EntityList.m_pFirstActiveEntity;
  entities.m_Size = 0;
  p_m_FixedMemory = &entities.m_Memory.m_FixedMemory;
  entities.m_Memory.m_nAllocationCount = 1024;
  entities.m_Memory.m_nGrowSize = 0x80000000;
  entities.m_Memory.m_pMemory = &entities.m_Memory.m_FixedMemory;
  if ( m_pFirstActiveEntity != 0 )
  {
    do
    {
      if ( v3 == 0 || *v3 == 0 )
        goto LABEL_13;
      m_pAsString = "";
      if ( m_pFirstActiveEntity->m_designerName.u.m_Id != 0 )
        m_pAsString = m_pFirstActiveEntity->m_designerName.u.m_pAsString;
      if ( V_stristr_fast(m_pAsString, v3) != 0 )
      {
LABEL_13:
        m_Size = entities.m_Size;
        if ( entities.m_Size == entities.m_Memory.m_nAllocationCount )
          CUtlMemory<CEntityIdentity *,int>::Grow(&entities.m_Memory, 1);
        ++entities.m_Size;
        v6 = &entities.m_Memory.m_pMemory[m_Size];
        if ( v6 != 0 )
          *v6 = m_pFirstActiveEntity;
      }
      m_pFirstActiveEntity = m_pFirstActiveEntity->m_pNext;
    }
    while ( m_pFirstActiveEntity != 0 );
    p_m_FixedMemory = entities.m_Memory.m_pMemory;
    v9 = entities.m_Size;
  }
  else
  {
    v9 = 0;
  }
  v10 = &p_m_FixedMemory[v9];
  if ( v10 - p_m_FixedMemory <= 15 )
    goto LABEL_22;
  v11 = v10 - p_m_FixedMemory;
  for ( j = (v11 - 2) >> 1; ; --j )
  {
    std::__adjust_heap<CEntityIdentity **,long,CEntityIdentity *,bool (*)(CEntityIdentity *,CEntityIdentity *)>(
      p_m_FixedMemory,
      j,
      v11,
      p_m_FixedMemory[j],
      SortEntities);
    if ( j == 0 )
      break;
  }
  p_m_FixedMemory = entities.m_Memory.m_pMemory;
  v10 = &entities.m_Memory.m_pMemory[entities.m_Size];
  if ( 8LL * entities.m_Size > 15 )
  {
    do
    {
      v13 = *--v10;
      *v10 = *p_m_FixedMemory;
      std::__adjust_heap<CEntityIdentity **,long,CEntityIdentity *,bool (*)(CEntityIdentity *,CEntityIdentity *)>(
        p_m_FixedMemory,
        0,
        v10 - p_m_FixedMemory,
        v13,
        SortEntities);
LABEL_22:
      ;
    }
    while ( v10 - p_m_FixedMemory > 15 );
  }
  if ( entities.m_Size > 0 )
  {
    v64 = 0;
    i = 0;
    while ( 1 )
    {
      v14 = entities.m_Memory.m_pMemory[v64];
      v15 = v14 != 0 ? v14->m_pInstance : 0LL;
      m_pEntity = v15->m_pEntity;
      v17 = m_pEntity->m_name.u.m_Id == 0;
      if ( m_pEntity->m_name.u.m_Id != 0 )
        break;
      nameAppendString.m_pString = 0;
      v18 = "";
      if ( asc_32DB004[2] != 0 )
        goto LABEL_72;
LABEL_30:
      if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 1) != 0 )
      {
        _Log_Meta_InternalMsg_ScopeVerify = 0;
        _Log_Meta_InternalMsg_ChannelID = LOG_ENTITY_SYSTEM;
        ChannelVerbosity = LoggingSystem_GetChannelVerbosity(LOG_ENTITY_SYSTEM);
        p_Log_Meta_InternalMsg_MetaStruct962 = 0;
        _Log_Meta_InternalMsg_MetaDataAllocator.m_DefaultVerbosity = ChannelVerbosity;
        _Log_Meta_InternalMsg_MetaDataAllocator.m_pAllocatedMetaDataHead = 0;
        _Log_Meta_InternalMsg_MetaDataAllocator.m_pAllocatedMetaDataTail = 0;
        _Log_Meta_InternalMsg_ScopeVerifyInstance962.m_bAllowDestruction = &_Log_Meta_InternalMsg_ScopeVerify;
        _Log_Meta_InternalMsg_ScopeVerifyInstance962.m_szDeclaredFile = "/home/buildbot/buildslave/source2_dota_rel_linux"
                                                                        "steamrt64/build/src/game/shared/entitydebuggamesystem.cpp";
        _Log_Meta_InternalMsg_ScopeVerifyInstance962.m_DeclaredLine = 962;
        if ( ChannelVerbosity > LoggingVerbosity_t::LV_DEFAULT )
        {
          _Log_Meta_InternalMsg_MetaStruct962.m_nVerbosity = 3;
          _Log_Meta_InternalMsg_MetaStruct962.m_TypeID = 0x417478546174654DLL;
          strcpy(szComponentBuffer, "Components");
          pComponentInfo = 0;
          v46 = v15->m_pEntity;
          strcpy(szMetaTextDescription, "Components");
          componentIterator = -1LL;
          CEntityIdentity::IterComponentsNext(v46, &componentIterator, &pComponentInfo);
          for ( k = &szComponentBuffer[11]; pComponentInfo != 0; k += V_snprintf(k, &entities - k, "\n") )
          {
            v48 = &k[V_snprintf(k, &entities - k, "%s : %s\n", pComponentInfo->m_pName, pComponentInfo->m_pCPPClassname)];
            k = &v48[V_snprintf(
                       v48,
                       &entities - v48,
                       "UUID:\t0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x\n",
                       pComponentInfo->m_id.Data1,
                       pComponentInfo->m_id.Data2,
                       pComponentInfo->m_id.Data3,
                       pComponentInfo->m_id.Data4[0],
                       pComponentInfo->m_id.Data4[1],
                       pComponentInfo->m_id.Data4[2],
                       pComponentInfo->m_id.Data4[3],
                       pComponentInfo->m_id.Data4[4],
                       pComponentInfo->m_id.Data4[5],
                       pComponentInfo->m_id.Data4[6],
                       pComponentInfo->m_id.Data4[7])];
            CEntityIdentity::IterComponentsNext(v15->m_pEntity, &componentIterator, &pComponentInfo);
            if ( pComponentInfo == 0 )
              break;
          }
          v49 = k - szComponentBuffer + 1;
          if ( v49 != 0 )
          {
            _Log_Meta_InternalMsg_MetaStruct962.m_nDataSize = v49;
            p_Log_Meta_InternalMsg_MetaStruct962 = &_Log_Meta_InternalMsg_MetaStruct962;
            _Log_Meta_InternalMsg_MetaStruct962.m_pNext = 0;
            _Log_Meta_InternalMsg_MetaStruct962.m_pData = szComponentBuffer;
            m_pAllocatedMetaDataHead = _Log_Meta_InternalMsg_MetaDataAllocator.m_pAllocatedMetaDataHead;
          }
          else
          {
            m_pAllocatedMetaDataHead = _Log_Meta_InternalMsg_MetaDataAllocator.m_pAllocatedMetaDataHead;
            p_Log_Meta_InternalMsg_MetaStruct962 = 0;
          }
          if ( m_pAllocatedMetaDataHead != 0 )
          {
            _Log_Meta_InternalMsg_MetaDataAllocator.m_pAllocatedMetaDataTail->m_pNext = p_Log_Meta_InternalMsg_MetaStruct962;
            p_Log_Meta_InternalMsg_MetaStruct962 = _Log_Meta_InternalMsg_MetaDataAllocator.m_pAllocatedMetaDataHead;
          }
        }
        LoggingSystem_Log(
          _Log_Meta_InternalMsg_ChannelID,
          LoggingSeverity_t::LS_MESSAGE,
          p_Log_Meta_InternalMsg_MetaStruct962,
          UNSPECIFIED_LOGGING_COLOR,
          "%s",
          "");
        _Log_Meta_InternalMsg_ScopeVerify = 1;
        if ( !*_Log_Meta_InternalMsg_ScopeVerifyInstance962.m_bAllowDestruction )
        {
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          {
            pComponentInfo = "../../public/tier1/loggingmetahelpers.h";
            pMem = "~CLoggingInternalMsg_ScopeVerification";
            LODWORD(v73) = 395;
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &pComponentInfo,
              "A Log_Meta_* macro at %s (%d) went out of scope before it's parent Log_End().\n",
              _Log_Meta_InternalMsg_ScopeVerifyInstance962.m_szDeclaredFile,
              _Log_Meta_InternalMsg_ScopeVerifyInstance962.m_DeclaredLine);
          }
          if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v60, v61, v58, v59) != 0 )
            loc_0 = -559038737;
          v62 = Plat_ExitProcess(1);
          CLoggingInternalMsg_ScopeVerification::~CLoggingInternalMsg_ScopeVerification(&_Log_Meta_InternalMsg_ScopeVerifyInstance962);
          CLogging_MetaDataAllocator::~CLogging_MetaDataAllocator(&_Log_Meta_InternalMsg_MetaDataAllocator);
          v51 = v62;
          if ( nameAppendString.m_pString != 0 )
          {
            CUtlString::FreeMemoryBlock(&nameAppendString);
            v51 = v62;
          }
          v52 = v51;
          CUtlVectorBase<CEntityIdentity *,CUtlMemoryFixedGrowable<CEntityIdentity *,1024ul,int>>::~CUtlVectorBase(&entities);
          Unwind_Resume(v52, v55, v53, v54, v56, v57, v63);
        }
        v21 = _Log_Meta_InternalMsg_MetaDataAllocator.m_pAllocatedMetaDataHead;
        if ( _Log_Meta_InternalMsg_MetaDataAllocator.m_pAllocatedMetaDataHead != 0 )
        {
          while ( 1 )
          {
            m_pAllocatedMetaDataTail = _Log_Meta_InternalMsg_MetaDataAllocator.m_pAllocatedMetaDataTail;
            m_pNext = v21->m_pNext;
            operator delete[](v21);
            if ( v21 == m_pAllocatedMetaDataTail )
              break;
            v21 = m_pNext;
          }
        }
      }
      if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 1) != 0 )
      {
        v24 = v15->m_pEntity;
        if ( v24 == 0 )
          goto LABEL_80;
        v25 = (v24->m_EHandle.m_Index >> 15) - (v24->m_flags & 1);
        LOWORD(v26) = 0x7FFF;
        if ( v24->m_EHandle.m_Index != -1 )
          LOWORD(v26) = v24->m_EHandle.m_Index & 0x7FFF;
        LOWORD(_Log_Meta_InternalMsg_MetaStruct962.m_pNext) = v26 | _Log_Meta_InternalMsg_MetaStruct962.m_pNext & 0x8000;
        LODWORD(_Log_Meta_InternalMsg_MetaStruct962.m_pNext) = (v25 << 15)
                                                             | _Log_Meta_InternalMsg_MetaStruct962.m_pNext & 0x7FFF;
        if ( LODWORD(_Log_Meta_InternalMsg_MetaStruct962.m_pNext) == -1 )
LABEL_80:
          v26 = 0x7FFF;
        else
          v26 = v26;
        CFmtStrN<256,false>::CFmtStrN(szComponentBuffer, "%s %d", "ent_text", v26);
        pComponentInfo = 0;
        v73 = 0x416B6E694C646D43LL;
        pMem = 0;
        v75 = 0;
        v76 = 1;
        v27 = strlen(&szComponentBuffer[9]) + 1;
        v75 = v27 + 4LL;
        pMem = operator new[](v75);
        v76 = 1;
        *pMem = 0;
        if ( v27 < 0 )
          __debugbreak();
        memcpy(pMem + 4, &szComponentBuffer[9], v27);
        LoggingSystem_Log(LOG_ENTITY_SYSTEM, LoggingSeverity_t::LS_MESSAGE, &pComponentInfo, -19276, "\tText");
        if ( pMem != 0 )
          operator delete[](pMem);
      }
      v28 = v15->m_pEntity;
      m_pInstance = v28->m_pInstance;
      if ( v28->m_pInstance != 0
        && (m_nBaseOffset = v28->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset) != 0xFFFF
        && (v31 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset)) != 0 )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 1) != 0 )
        {
          v32 = *(v31 + 8);
          if ( *(v32 + 260) != 0 )
            CGameSceneNode::CalcAbsolutePositionWhenDirty(*(v31 + 8));
          v33 = *(v31 + 8);
          v34 = *(v32 + 224);
          if ( *(v33 + 260) != 0 )
            CGameSceneNode::CalcAbsolutePositionWhenDirty(*(v31 + 8));
          v35 = *(v31 + 8);
          v36 = *(v33 + 220);
          if ( v35->m_bDirtyAbsTransform.m_value )
            CGameSceneNode::CalcAbsolutePositionWhenDirty(v35);
          CFmtStrN<256,false>::CFmtStrN(szComponentBuffer, "setpos %.2f %.2f %.2f", v35->m_vecAbsOrigin.x, v36, v34);
          _Log_Meta_InternalMsg_MetaStruct962.m_pNext = 0;
          _Log_Meta_InternalMsg_MetaStruct962.m_TypeID = 0x416B6E694C646D43LL;
          _Log_Meta_InternalMsg_MetaStruct962.m_pData = 0;
          _Log_Meta_InternalMsg_MetaStruct962.m_nDataSize = 0;
          _Log_Meta_InternalMsg_MetaStruct962.m_nVerbosity = 1;
          v37 = strlen(&szComponentBuffer[9]) + 1;
          _Log_Meta_InternalMsg_MetaStruct962.m_nDataSize = v37 + 4LL;
          _Log_Meta_InternalMsg_MetaStruct962.m_pData = operator new[](_Log_Meta_InternalMsg_MetaStruct962.m_nDataSize);
          _Log_Meta_InternalMsg_MetaStruct962.m_nVerbosity = 1;
          *_Log_Meta_InternalMsg_MetaStruct962.m_pData = 0;
          if ( v37 < 0 )
            __debugbreak();
          memcpy(_Log_Meta_InternalMsg_MetaStruct962.m_pData + 4, &szComponentBuffer[9], v37);
          LoggingSystem_Log(
            LOG_ENTITY_SYSTEM,
            LoggingSeverity_t::LS_MESSAGE,
            &_Log_Meta_InternalMsg_MetaStruct962,
            -19276,
            "\tGoTo");
          if ( _Log_Meta_InternalMsg_MetaStruct962.m_pData != 0 )
            operator delete[](_Log_Meta_InternalMsg_MetaStruct962.m_pData);
        }
      }
      else if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 1) != 0 )
      {
        LoggingSystem_Log(LOG_ENTITY_SYSTEM, 1, "\t\t");
      }
      if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 1) != 0 )
      {
        v39 = CUtlString::Get(&nameAppendString);
        v40 = v15->m_pEntity;
        v41 = "";
        if ( v40->m_designerName.u.m_Id != 0 )
          v41 = v40->m_designerName.u.m_pAsString;
        v42 = (v40->m_EHandle.m_Index >> 15) - (v40->m_flags & 1);
        v43 = 0x7FFF;
        if ( v40->m_EHandle.m_Index != -1 )
          v43 = v40->m_EHandle.m_Index & 0x7FFF;
        LOWORD(_Log_Meta_InternalMsg_MetaStruct962.m_pNext) = v43 | _Log_Meta_InternalMsg_MetaStruct962.m_pNext & 0x8000;
        v44 = (v42 << 15) | _Log_Meta_InternalMsg_MetaStruct962.m_pNext & 0x7FFF;
        v45 = 0x7FFF;
        LODWORD(_Log_Meta_InternalMsg_MetaStruct962.m_pNext) = v44;
        if ( v44 != -1 )
          v45 = v43;
        LoggingSystem_Log(LOG_ENTITY_SYSTEM, 1, "\t[%4d]: %s%s\n", v45, v41, v39);
      }
      if ( nameAppendString.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&nameAppendString);
      ++i;
      ++v64;
      if ( entities.m_Size <= i )
        goto LABEL_65;
    }
    nameAppendString.m_pString = 0;
    v18 = m_pEntity->m_name.u.m_pAsString;
    if ( v17 || *v18 == 0 )
      goto LABEL_30;
LABEL_72:
    CUtlString::Format(&nameAppendString, " (%s)", v18);
    goto LABEL_30;
  }
LABEL_65:
  entities.m_Size = 0;
  if ( entities.m_Memory.m_nAllocationCount < 0 )
  {
    v38 = entities.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    v38 = entities.m_Memory.m_nGrowSize & 0xC0000000;
    if ( entities.m_Memory.m_pMemory != &entities.m_Memory.m_FixedMemory )
    {
      if ( entities.m_Memory.m_pMemory != 0 && v38 == 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      return;
    }
  }
  if ( v38 == 0 )
    CUtlMemory<CEntityIdentity *,int>::Purge(&entities.m_Memory);
}


// CEntityDebugGrab::~CEntityDebugGrab  (line 1110, @0x0000000001fa0200, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, GetOrCreateLevelWorld, GetSpawnGroupHandle, GetWorld, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*
// calls: CPhysicsGameSystem::GetOrCreateLevelWorld
// callers: ent_grab
// globals: CEntityHandle::gm_pEntityList, g_pPhysicsGameSystem
void __fastcall CEntityDebugGrab::~CEntityDebugGrab(CEntityDebugGrab *const this)
{
  uint32 m_Index; // eax
  __int16 v3; // cx
  CEntityIdentity *v4; // rdx
  IVPhysics2World *LevelWorld; // rdi
  CEntityIdentity *v6; // rdx
  HPhysicsBody m_hTargetBody; // rdi
  IVPhysics2World *v8; // rdi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *m_pInstance; // rcx
  CEntityIdentity *m_pEntity; // rax
  SpawnGroupHandle_t m_hSpawnGroup; // edx
  CEntityInstance *v14; // rcx
  CEntityIdentity *v15; // rax
  SpawnGroupHandle_t v16; // edx

  if ( this->m_hJoint != 0 )
  {
    m_Index = this->m_hPlayer.m_Index;
    if ( this->m_hPlayer.m_Index + 2 > 1
      && (v3 = this->m_hPlayer.m_Index,
          (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPlayer.m_Index) >> 9) & 0x3F]) != 0) )
    {
      LevelWorld = 0;
      v6 = &v4[v3 & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
      {
        m_pInstance = v6->m_pInstance;
        if ( v6->m_pInstance != 0 )
        {
          m_pEntity = m_pInstance->m_pEntity;
          if ( m_pEntity != 0 )
            m_hSpawnGroup = m_pEntity->m_hSpawnGroup;
          else
            m_hSpawnGroup = 0;
          LevelWorld = CPhysicsGameSystem::GetOrCreateLevelWorld(
                         g_pPhysicsGameSystem,
                         m_pInstance->m_worldGroupId,
                         m_hSpawnGroup);
        }
      }
    }
    else
    {
      LevelWorld = 0;
    }
    (*(*LevelWorld + 904LL))(LevelWorld);
  }
  if ( this->m_bRebuildMass )
  {
    m_hTargetBody = this->m_hTargetBody;
    if ( m_hTargetBody != 0 )
      (*(*m_hTargetBody + 336LL))(m_hTargetBody);
  }
  v8 = 0;
  if ( this->m_hPlayer.m_Index + 2 > 1 )
  {
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPlayer.m_Index) >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[this->m_hPlayer.m_Index & 0x1FF];
      if ( v10 != 0 && this->m_hPlayer.m_Index == v10->m_EHandle.m_Index )
      {
        v14 = v10->m_pInstance;
        if ( v10->m_pInstance != 0 )
        {
          v15 = v14->m_pEntity;
          if ( v15 != 0 )
            v16 = v15->m_hSpawnGroup;
          else
            v16 = 0;
          v8 = CPhysicsGameSystem::GetOrCreateLevelWorld(g_pPhysicsGameSystem, v14->m_worldGroupId, v16);
        }
      }
    }
  }
  (*(*v8 + 720LL))(v8, this->m_hDriverBody);
}


// CEntityDebugGrab::GetWorld  (line 1125, @0x0000000001fa0170, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, GetOrCreateLevelWorld, GetSpawnGroupHandle, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*
// calls: CPhysicsGameSystem::GetOrCreateLevelWorld
// callers: ent_grab
// globals: CEntityHandle::gm_pEntityList, g_pPhysicsGameSystem
IVPhysics2World *__fastcall CEntityDebugGrab::GetWorld(CEntityDebugGrab *const this)
{
  CEntityIdentity *v1; // rdx
  CEntityIdentity *v2; // rdx
  CEntityInstance *m_pInstance; // rcx
  CEntityIdentity *m_pEntity; // rax

  if ( this->m_hPlayer.m_Index + 2 <= 1 )
    return 0;
  v1 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPlayer.m_Index) >> 9) & 0x3F];
  if ( v1 == 0 )
    return 0;
  v2 = &v1[this->m_hPlayer.m_Index & 0x1FF];
  if ( v2 == 0 )
    return 0;
  if ( this->m_hPlayer.m_Index != v2->m_EHandle.m_Index )
    return 0;
  m_pInstance = v2->m_pInstance;
  if ( v2->m_pInstance == 0 )
    return 0;
  m_pEntity = m_pInstance->m_pEntity;
  if ( m_pEntity != 0 )
    return CPhysicsGameSystem::GetOrCreateLevelWorld(
             g_pPhysicsGameSystem,
             m_pInstance->m_worldGroupId,
             m_pEntity->m_hSpawnGroup);
  else
    return CPhysicsGameSystem::GetOrCreateLevelWorld(g_pPhysicsGameSystem, m_pInstance->m_worldGroupId, 0);
}


// StopDebugEntGrab  (line 1146, @0x0000000001f681f0, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, GetOrCreateLevelWorld, GetSpawnGroupHandle, GetWorld, IndexToIdentity, IsValid, LookupEntity, Purge, PurgeAndDeleteElements, RemoveAll, operator CBaseEntity*, ~CEntityDebugGrab
// calls: operator delete, CPhysicsGameSystem::GetOrCreateLevelWorld, CUtlMemory<CEntityDebugGrab*, int>::Purge
// globals: g_DebugEntGrabJoints, CEntityHandle::gm_pEntityList, g_pPhysicsGameSystem
int __cdecl StopDebugEntGrab()
{
  int m_Size; // r14d
  __int64 v1; // r13
  int i; // r12d
  CEntityDebugGrab *v3; // rbx
  CEntityIdentity *v4; // rdx
  IVPhysics2World *LevelWorld; // rdi
  CEntityIdentity *v6; // rdx
  HPhysicsBody m_hTargetBody; // rdi
  IVPhysics2World *v8; // rdi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *v11; // rcx
  CEntityIdentity *v12; // rax
  SpawnGroupHandle_t v13; // edx
  CEntityInstance *m_pInstance; // rcx
  CEntityIdentity *m_pEntity; // rax
  SpawnGroupHandle_t m_hSpawnGroup; // edx

  m_Size = g_DebugEntGrabJoints.m_Size;
  v1 = 0;
  for ( i = 0; i < g_DebugEntGrabJoints.m_Size; ++v1 )
  {
    v3 = g_DebugEntGrabJoints.m_Memory.m_pMemory[v1];
    if ( v3 != 0 )
    {
      if ( v3->m_hJoint != 0 )
      {
        if ( v3->m_hPlayer.m_Index + 2 > 1
          && (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v3->m_hPlayer.m_Index) >> 9) & 0x3F]) != 0 )
        {
          LevelWorld = 0;
          v6 = &v4[v3->m_hPlayer.m_Index & 0x1FF];
          if ( v6 != 0 && v3->m_hPlayer.m_Index == v6->m_EHandle.m_Index )
          {
            m_pInstance = v6->m_pInstance;
            if ( v6->m_pInstance != 0 )
            {
              m_pEntity = m_pInstance->m_pEntity;
              if ( m_pEntity != 0 )
                m_hSpawnGroup = m_pEntity->m_hSpawnGroup;
              else
                m_hSpawnGroup = 0;
              LevelWorld = CPhysicsGameSystem::GetOrCreateLevelWorld(
                             g_pPhysicsGameSystem,
                             m_pInstance->m_worldGroupId,
                             m_hSpawnGroup);
            }
          }
        }
        else
        {
          LevelWorld = 0;
        }
        (*(*LevelWorld + 904LL))(LevelWorld);
      }
      if ( v3->m_bRebuildMass )
      {
        m_hTargetBody = v3->m_hTargetBody;
        if ( m_hTargetBody != 0 )
          (*(*m_hTargetBody + 336LL))(m_hTargetBody);
      }
      v8 = 0;
      if ( v3->m_hPlayer.m_Index + 2 > 1 )
      {
        v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v3->m_hPlayer.m_Index) >> 9) & 0x3F];
        if ( v9 != 0 )
        {
          v10 = &v9[v3->m_hPlayer.m_Index & 0x1FF];
          if ( v10 != 0 && v3->m_hPlayer.m_Index == v10->m_EHandle.m_Index )
          {
            v11 = v10->m_pInstance;
            if ( v10->m_pInstance != 0 )
            {
              v12 = v11->m_pEntity;
              if ( v12 != 0 )
                v13 = v12->m_hSpawnGroup;
              else
                v13 = 0;
              v8 = CPhysicsGameSystem::GetOrCreateLevelWorld(g_pPhysicsGameSystem, v11->m_worldGroupId, v13);
            }
          }
        }
      }
      (*(*v8 + 720LL))(v8, v3->m_hDriverBody);
      operator delete(v3);
    }
    ++i;
  }
  g_DebugEntGrabJoints.m_Size = 0;
  if ( (g_DebugEntGrabJoints.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CEntityDebugGrab *,int>::Purge(&g_DebugEntGrabJoints.m_Memory);
  return m_Size;
}


// UpdateDebugEntGrab  (line 1153, @0x0000000001f35be0, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Update, VectorAdd, VectorMultiply, operator CBaseEntity*, operator*, operator+
// calls: __dynamic_cast, CBasePlayer::EyeVectors
// callers: CPhysicsGameSystem::OnSimulate
// globals: g_DebugEntGrabJoints, CEntityHandle::gm_pEntityList
void __cdecl UpdateDebugEntGrab()
{
  __int64 v0; // r13
  unsigned __int64 v1; // r12
  CEntityDebugGrab *v2; // rbx
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CBasePlayer *v5; // rax
  CBasePlayer *v6; // r15
  double v7; // xmm0_8
  HPhysicsBody m_hTargetBody; // rdi
  float v9; // xmm1_4
  HPhysicsBody m_hDriverBody; // rdi
  float m_flEyeDistance; // xmm2_4
  void (__fastcall *v12)(HPhysicsBody, float *); // rax
  Vector v13; // [rsp-68h] [rbp-68h] BYREF
  double v14; // [rsp-58h] [rbp-58h]
  float v15; // [rsp-50h] [rbp-50h]
  float v16[18]; // [rsp-48h] [rbp-48h] BYREF

  if ( g_DebugEntGrabJoints.m_Size > 0 )
  {
    v0 = 8LL * (g_DebugEntGrabJoints.m_Size - 1) + 8;
    v1 = 0;
    do
    {
      while ( 1 )
      {
        v2 = g_DebugEntGrabJoints.m_Memory.m_pMemory[v1 / 8];
        if ( v2->m_hPlayer.m_Index + 2 > 1 )
        {
          v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v2->m_hPlayer.m_Index) >> 9) & 0x3F];
          if ( v3 != 0 )
          {
            v4 = &v3[v2->m_hPlayer.m_Index & 0x1FF];
            if ( v4 != 0 && v2->m_hPlayer.m_Index == v4->m_EHandle.m_Index && v4->m_pInstance != 0 )
            {
              v5 = __dynamic_cast(v4->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CBasePlayer, 0);
              v6 = v5;
              if ( v5 != 0 )
              {
                CBasePlayer::EyeVectors(v5, &v13, 0, 0);
                v7 = (*(v6->_vptr_IHandleEntity + 164))(v6);
                m_hTargetBody = v2->m_hTargetBody;
                v14 = v7;
                v15 = v9;
                if ( m_hTargetBody != 0 )
                  break;
              }
            }
          }
        }
        v1 += 8LL;
        if ( v1 == v0 )
          return;
      }
      if ( !v2->m_bLoose )
        (*(*m_hTargetBody + 576LL))(m_hTargetBody, &vec3_origin);
      m_hDriverBody = v2->m_hDriverBody;
      v1 += 8LL;
      m_flEyeDistance = v2->m_flEyeDistance;
      v12 = *(*m_hDriverBody + 360LL);
      v16[1] = (v13.y * m_flEyeDistance) + *(&v14 + 1);
      v16[2] = (v13.z * m_flEyeDistance) + v15;
      v16[0] = (m_flEyeDistance * v13.x) + *&v14;
      v12(m_hDriverBody, v16);
    }
    while ( v1 != v0 );
  }
}


// ent_grab  (line 1166, @0x0000000001f683f0, libserver.so)  // inlines: AddToTail, Arg, CEntityDebugGrab, CEntityHandle, CGameTrace, CUtlAbstractDelegate, CUtlDelegate, ClosurePtr, CopyConstruct<CEntityDebugGrab*>, DidHit, Element, EnableInteractsWith, FastDelegate1, FastRemove, FastSqrt, GetEHandle, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, GetOrCreateLevelWorld, GetSerialNumber, GetSpawnGroupHandle, GetWorld, GrowMemory, IndexToIdentity, Init, IsValid, Length, LengthSqr, LookupEntity, PhysicsJointDesc_t, PhysicsWeldJointDesc_t, Purge, PurgeAndDeleteElements, Ray_t, RemoveAll, RnCollisionAttr_t, SetPivot, StopDebugEntGrab, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, memcpy, operator CBaseEntity*, operator*, operator+, operator-, operator=, operator[], ~CEntityDebugGrab
// calls: V_stricmp_fast, operator delete, CPhysicsGameSystem::GetOrCreateLevelWorld, UTIL_GetCommandClient, CBasePlayer::EyeVectors, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, Msg, CUtlMemory<CEntityDebugGrab*, int>::Purge, operator new, CEntityDebugGrab::GetWorld (17 total)
// strings: "-loose", "-multiple", "-toggle", "ent_grab: found %s @{%g,%g,%g}\n", "ent_grab: the body is not moveable\n", "ent_grab: nothing to grab there.\n" (8 total)
// globals: g_DebugEntGrabJoints, CEntityHandle::gm_pEntityList, g_pPhysicsGameSystem
void __fastcall ent_grab(const CCommandContext *const ctx, const CCommand *const args)
{
  int v3; // ebx
  char *v4; // r13
  const char *v5; // rdi
  const char *v6; // rdi
  __int64 v7; // r14
  int v8; // r13d
  CEntityDebugGrab *v9; // r15
  HPhysicsJoint m_hJoint; // rsi
  CEntityIdentity *v11; // rdx
  __int64 v12; // rdi
  bool v13; // zf
  IVPhysics2World *v14; // rdi
  HPhysicsBody m_hTargetBody; // rdi
  IVPhysics2World *v16; // rdi
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  CEntityInstance *v19; // rsi
  CEntityIdentity *v20; // rax
  SpawnGroupHandle_t v21; // edx
  CBasePlayer *CommandClient; // rax
  CEntityIdentity *v23; // rdx
  int v24; // eax
  __int16 v25; // cx
  int v26; // r14d
  int v27; // r15d
  __int64 v28; // r12
  CEntityIdentity *v29; // rax
  CBasePlayer *v30; // rbx
  CEntityIdentity *v31; // rax
  vec_t v32; // xmm1_4
  CEntityIdentity *v33; // rax
  const CBaseEntity *v34; // rsi
  CEntityIdentity *v35; // rax
  float m_fValue; // xmm7_4
  __int64 v37; // rax
  int m_Size; // ecx
  int v39; // r12d
  CEntityDebugGrab *v40; // rax
  CEntityDebugGrab *v41; // r12
  IVPhysics2World *World; // rax
  __int64 v43; // rax
  HPhysicsBody m_hBody; // rax
  IVPhysics2World *v45; // r14
  HPhysicsBody v46; // rax
  HPhysicsBody m_hDriverBody; // rdi
  vec_t z; // ecx
  __int64 v49; // rdx
  vec_t v50; // xmm1_4
  float v51; // xmm1_4
  __int64 v52; // rbx
  int v53; // eax
  CEntityDebugGrab **v54; // rax
  vec_t v55; // xmm1_4
  vec_t v56; // xmm1_4
  CEntityInstance *m_pInstance; // r8
  CEntityIdentity *m_pEntity; // rax
  SpawnGroupHandle_t m_hSpawnGroup; // edx
  IVPhysics2World *LevelWorld; // rax
  int pGrab; // [rsp+10h] [rbp-200h]
  CEntityDebugGrab *pGraba; // [rsp+10h] [rbp-200h]
  bool bMultiple; // [rsp+1Eh] [rbp-1F2h]
  bool bLoose; // [rsp+1Fh] [rbp-1F1h]
  __int16 hPlayer; // [rsp+20h] [rbp-1F0h]
  Vector vForward; // [rsp+30h] [rbp-1E0h] BYREF
  Vector vPosition; // [rsp+40h] [rbp-1D0h]
  double v69; // [rsp+50h] [rbp-1C0h]
  float v70; // [rsp+58h] [rbp-1B8h]
  CTraceFilterSimple v71; // [rsp+60h] [rbp-1B0h] BYREF
  Ray_t ray; // [rsp+A0h] [rbp-170h] BYREF
  char v73; // [rsp+F0h] [rbp-120h]
  int v74; // [rsp+F4h] [rbp-11Ch]
  int v75; // [rsp+F8h] [rbp-118h]
  int v76; // [rsp+FCh] [rbp-114h]
  __int64 v77; // [rsp+100h] [rbp-110h]
  __int64 v78; // [rsp+108h] [rbp-108h]
  __int64 v79; // [rsp+110h] [rbp-100h]
  int v80; // [rsp+118h] [rbp-F8h]
  int v81; // [rsp+11Ch] [rbp-F4h]
  int v82; // [rsp+120h] [rbp-F0h]
  int v83; // [rsp+124h] [rbp-ECh]
  int v84; // [rsp+128h] [rbp-E8h]
  int v85; // [rsp+12Ch] [rbp-E4h]
  trace_t tr; // [rsp+130h] [rbp-E0h] BYREF

  if ( args->m_nArgc <= 1 )
  {
    bLoose = 0;
LABEL_80:
    CUtlVectorBase<CEntityDebugGrab *,CUtlMemory<CEntityDebugGrab *,int>>::PurgeAndDeleteElements(&g_DebugEntGrabJoints);
    goto LABEL_35;
  }
  v3 = 1;
  bMultiple = 0;
  bLoose = 0;
  do
  {
    v4 = args + 8 * v3;
    if ( V_stricmp_fast(*(v4 + 129), "-loose") != 0 )
    {
      v5 = "";
      if ( args->m_nArgc > v3 )
        v5 = *(v4 + 129);
      if ( V_stricmp_fast(v5, "-multiple") != 0 )
      {
        v6 = "";
        if ( args->m_nArgc > v3 )
          v6 = *(v4 + 129);
        if ( V_stricmp_fast(v6, "-toggle") == 0 )
        {
          v7 = 0;
          v8 = 0;
          for ( pGrab = g_DebugEntGrabJoints.m_Size; v8 < g_DebugEntGrabJoints.m_Size; ++v7 )
          {
            v9 = g_DebugEntGrabJoints.m_Memory.m_pMemory[v7];
            if ( v9 != 0 )
            {
              m_hJoint = v9->m_hJoint;
              if ( m_hJoint != 0 )
              {
                v11 = (v9->m_hPlayer.m_Index + 2);
                if ( v11 > 1
                  && (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_hPlayer.m_Index) >> 9) & 0x3F]) != 0 )
                {
                  v12 = v9->m_hPlayer.m_Index & 0x1FF;
                  v13 = &v11[v12] == 0;
                  v11 = (v11 + v12 * 120);
                  v14 = 0;
                  if ( !v13 && v9->m_hPlayer.m_Index == v11->m_EHandle.m_Index )
                  {
                    m_pInstance = v11->m_pInstance;
                    if ( v11->m_pInstance != 0 )
                    {
                      m_pEntity = m_pInstance->m_pEntity;
                      if ( m_pEntity != 0 )
                        m_hSpawnGroup = m_pEntity->m_hSpawnGroup;
                      else
                        m_hSpawnGroup = 0;
                      LevelWorld = CPhysicsGameSystem::GetOrCreateLevelWorld(
                                     g_pPhysicsGameSystem,
                                     m_pInstance->m_worldGroupId,
                                     m_hSpawnGroup);
                      m_hJoint = v9->m_hJoint;
                      v14 = LevelWorld;
                    }
                  }
                }
                else
                {
                  v14 = 0;
                }
                (*(*v14 + 904LL))(v14, m_hJoint, v11);
              }
              if ( v9->m_bRebuildMass )
              {
                m_hTargetBody = v9->m_hTargetBody;
                if ( m_hTargetBody != 0 )
                  (*(*m_hTargetBody + 336LL))(m_hTargetBody);
              }
              v16 = 0;
              if ( v9->m_hPlayer.m_Index + 2 > 1 )
              {
                v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_hPlayer.m_Index) >> 9) & 0x3F];
                if ( v17 != 0 )
                {
                  v18 = &v17[v9->m_hPlayer.m_Index & 0x1FF];
                  if ( v18 != 0 && v9->m_hPlayer.m_Index == v18->m_EHandle.m_Index )
                  {
                    v19 = v18->m_pInstance;
                    if ( v18->m_pInstance != 0 )
                    {
                      v20 = v19->m_pEntity;
                      if ( v20 != 0 )
                        v21 = v20->m_hSpawnGroup;
                      else
                        v21 = 0;
                      v16 = CPhysicsGameSystem::GetOrCreateLevelWorld(g_pPhysicsGameSystem, v19->m_worldGroupId, v21);
                    }
                  }
                }
              }
              (*(*v16 + 720LL))(v16, v9->m_hDriverBody);
              operator delete(v9);
            }
            ++v8;
          }
          g_DebugEntGrabJoints.m_Size = 0;
          if ( (g_DebugEntGrabJoints.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CEntityDebugGrab *,int>::Purge(&g_DebugEntGrabJoints.m_Memory);
          if ( pGrab != 0 )
            return;
        }
      }
      else
      {
        bMultiple = 1;
      }
    }
    else
    {
      bLoose = 1;
    }
    ++v3;
  }
  while ( args->m_nArgc > v3 );
  if ( !bMultiple )
    goto LABEL_80;
LABEL_35:
  CommandClient = UTIL_GetCommandClient(ctx);
  if ( CommandClient == 0 )
    goto LABEL_81;
  v23 = CommandClient->m_pEntity;
  if ( v23 == 0 )
    goto LABEL_81;
  v24 = (v23->m_EHandle.m_Index >> 15) - (v23->m_flags & 1);
  v25 = 0x7FFF;
  if ( v23->m_EHandle.m_Index != -1 )
    v25 = v23->m_EHandle.m_Index & 0x7FFF;
  v26 = (v24 << 15) | v25 & 0x7FFF;
  LODWORD(tr.startpos.x) = v26;
  v27 = v26;
  hPlayer = (v24 << 15) | v25 & 0x7FFF;
  if ( v26 != -1 )
  {
    if ( v26 == -2 )
    {
      CBasePlayer::EyeVectors(0, &vForward, 0, 0);
      *&vPosition.x = (*(loc_0 + 1312LL))(0);
      vPosition.z = v56;
      memset(&tr.m_ShapeAttributes, 0, 31);
      tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
      CGameTrace::Init(&tr);
      v34 = 0;
    }
    else
    {
      v28 = (v25 & 0x7FFF) >> 9;
      v29 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[v28];
      if ( v29 != 0 )
      {
        v30 = 0;
        v31 = &v29[hPlayer & 0x1FF];
        if ( v31 != 0 && v26 == v31->m_EHandle.m_Index && v31->m_pInstance != 0 )
          v30 = __dynamic_cast(v31->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CBasePlayer, 0);
      }
      else
      {
        v30 = 0;
      }
      CBasePlayer::EyeVectors(v30, &vForward, 0, 0);
      *&vPosition.x = (*(v30->_vptr_IHandleEntity + 164))(v30);
      vPosition.z = v32;
      memset(&tr.m_ShapeAttributes, 0, 31);
      tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
      CGameTrace::Init(&tr);
      v33 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[v28];
      if ( v33 != 0 )
      {
        v34 = 0;
        v35 = &v33[hPlayer & 0x1FF];
        if ( v35 != 0 && v26 == v35->m_EHandle.m_Index )
          v34 = v35->m_pInstance;
      }
      else
      {
        v34 = 0;
      }
    }
  }
  else
  {
LABEL_81:
    v27 = -1;
    CBasePlayer::EyeVectors(0, &vForward, 0, 0);
    *&vPosition.x = (*(loc_0 + 1312LL))(0);
    vPosition.z = v55;
    memset(&tr.m_ShapeAttributes, 0, 31);
    tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    CGameTrace::Init(&tr);
    v34 = 0;
  }
  m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  ray.m_Delta.x = ((vForward.x * 16384.0) + vPosition.x) - vPosition.x;
  ray.m_Delta.y = ((vForward.y * 16384.0) + vPosition.y) - vPosition.y;
  ray.m_Start.w = 0.0;
  memset(&ray.m_Delta.w, 0, 36);
  ray.m_Delta.z = ((16384.0 * vForward.z) + vPosition.z) - vPosition.z;
  ray.m_flRadius = m_fValue;
  ray.m_Start.Vector = vPosition;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  ray.m_IsRay = 1;
  CTraceFilterSimple::CTraceFilterSimple(&v71, v34, 4, 0);
  v71.m_attr.m_nInteractsWith |= 0x87001uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v71, &tr);
  if ( tr.fraction < 1.0 || tr.startsolid )
  {
    if ( tr.m_hBody != 0 )
    {
      v37 = (*(*tr.m_hBody + 1256LL))(tr.m_hBody);
      if ( v37 != 0 )
        Msg("ent_grab: found %s @{%g,%g,%g}\n", v37, tr.endpos.x, tr.endpos.y, tr.endpos.z);
      if ( (*(*tr.m_hBody + 40LL))(tr.m_hBody) == 2 )
      {
        m_Size = g_DebugEntGrabJoints.m_Size;
        v39 = 0;
        while ( v39 < m_Size )
        {
          while ( 1 )
          {
            v40 = g_DebugEntGrabJoints.m_Memory.m_pMemory[v39];
            if ( v40->m_hJoint == 0 )
              break;
            if ( v40->m_hTargetBody == tr.m_hBody )
            {
              Msg("ent_grab: this body is already grabbed\n");
              return;
            }
            if ( ++v39 >= m_Size )
              goto LABEL_67;
          }
          pGraba = g_DebugEntGrabJoints.m_Memory.m_pMemory[v39];
          CEntityDebugGrab::~CEntityDebugGrab(pGraba);
          operator delete(pGraba);
          m_Size = g_DebugEntGrabJoints.m_Size;
          if ( g_DebugEntGrabJoints.m_Size > 0 )
          {
            m_Size = g_DebugEntGrabJoints.m_Size - 1;
            if ( v39 != g_DebugEntGrabJoints.m_Size - 1 )
            {
              g_DebugEntGrabJoints.m_Memory.m_pMemory[v39] = g_DebugEntGrabJoints.m_Memory.m_pMemory[m_Size];
              m_Size = g_DebugEntGrabJoints.m_Size - 1;
            }
            g_DebugEntGrabJoints.m_Size = m_Size;
          }
        }
LABEL_67:
        v41 = operator new(0x28u);
        v41->m_bRebuildMass = 0;
        v41->m_hPlayer.m_Index = v27;
        v41->m_bLoose = bLoose;
        v41->m_flEyeDistance = fsqrt(
                                 (((tr.endpos.x - tr.startpos.x) * (tr.endpos.x - tr.startpos.x))
                                + ((tr.endpos.y - tr.startpos.y) * (tr.endpos.y - tr.startpos.y)))
                               + ((tr.endpos.z - tr.startpos.z) * (tr.endpos.z - tr.startpos.z)));
        World = CEntityDebugGrab::GetWorld(v41);
        v43 = (*(*World + 704LL))(World);
        v41->m_hDriverBody = v43;
        (*(*v43 + 32LL))(v43, 1);
        (*(*v41->m_hDriverBody + 360LL))(v41->m_hDriverBody, &tr.endpos);
        m_hBody = tr.m_hBody;
        v41->m_hJoint = 0;
        v41->m_hTargetBody = m_hBody;
        v45 = CEntityDebugGrab::GetWorld(v41);
        if ( v45 != 0 )
        {
          v46 = v41->m_hTargetBody;
          m_hDriverBody = v41->m_hDriverBody;
          v73 = 0;
          LODWORD(ray.m_Start.x) = 6;
          v74 = 0;
          *&ray.m_Delta.x = v46;
          *&ray.m_Start.z = m_hDriverBody;
          v75 = 0;
          v76 = 0;
          v77 = 0;
          v78 = 0;
          z = vec3_origin.z;
          v79 = 0;
          v80 = 0;
          *&ray.m_Delta.z = *&vec3_origin.x;
          *&ray.m_Extents.y = *&vec3_origin.x;
          v49 = *&quat_identity.z;
          ray.m_StartOffset.x = z;
          ray.m_Extents.w = z;
          v81 = 0;
          v82 = 0;
          *&ray.m_StartOffset.w = v49;
          *&ray.m_StartOffset.y = *&quat_identity.x;
          *&ray.m_flRadius = *&quat_identity.x;
          *(&ray.m_IsSwept + 3) = v49;
          v83 = 0;
          v84 = 0;
          v85 = 0;
          v71._vptr_CTraceFilter = COERCE_INT_((*(*m_hDriverBody + 1008LL))(m_hDriverBody, &tr.endpos));
          *&v71.m_attr.m_nInteractsWith = v50;
          ray.m_StartOffset.x = v50;
          *&ray.m_Delta.z = v71._vptr_CTraceFilter;
          v69 = (*(**&ray.m_Delta.x + 1008LL))(*&ray.m_Delta.x, &tr.endpos);
          ray.m_Extents.w = v51;
          v70 = v51;
          *&ray.m_Extents.y = v69;
          v41->m_hJoint = (*(*v45 + 864LL))(v45, &ray);
        }
        if ( !bLoose )
        {
          (*(*v41->m_hTargetBody + 280LL))(v41->m_hTargetBody, 0.001);
          v41->m_bRebuildMass = 1;
        }
        v52 = g_DebugEntGrabJoints.m_Size;
        v53 = g_DebugEntGrabJoints.m_Size;
        if ( g_DebugEntGrabJoints.m_Size == g_DebugEntGrabJoints.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CEntityDebugGrab *,int>::Grow(&g_DebugEntGrabJoints.m_Memory, 1);
          v53 = g_DebugEntGrabJoints.m_Size;
        }
        g_DebugEntGrabJoints.m_Size = v53 + 1;
        v54 = &g_DebugEntGrabJoints.m_Memory.m_pMemory[v52];
        if ( v54 != 0 )
          *v54 = v41;
      }
      else
      {
        Msg("ent_grab: the body is not moveable\n");
      }
    }
    else
    {
      Msg("ent_grab: strange - there was a hit but there's no rigid body there\n");
    }
  }
  else
  {
    Msg("ent_grab: nothing to grab there.\n");
  }
}


// ent_ungrab  (line 1251, @0x0000000001f67fe0, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, GetOrCreateLevelWorld, GetSpawnGroupHandle, GetWorld, IndexToIdentity, IsValid, LookupEntity, Purge, PurgeAndDeleteElements, RemoveAll, StopDebugEntGrab, operator CBaseEntity*, ~CEntityDebugGrab
// calls: operator delete, CPhysicsGameSystem::GetOrCreateLevelWorld, CUtlMemory<CEntityDebugGrab*, int>::Purge
// globals: g_DebugEntGrabJoints, CEntityHandle::gm_pEntityList, g_pPhysicsGameSystem
void __fastcall ent_ungrab(const CCommandContext *const ctx, const CCommand *const args)
{
  __int64 v2; // r13
  int i; // r12d
  CEntityDebugGrab *v4; // rbx
  CEntityIdentity *v5; // rdx
  IVPhysics2World *LevelWorld; // rdi
  CEntityIdentity *v7; // rdx
  HPhysicsBody m_hTargetBody; // rdi
  IVPhysics2World *v9; // rdi
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityInstance *v12; // rcx
  CEntityIdentity *v13; // rax
  SpawnGroupHandle_t v14; // edx
  CEntityInstance *m_pInstance; // rcx
  CEntityIdentity *m_pEntity; // rax
  SpawnGroupHandle_t m_hSpawnGroup; // edx

  v2 = 0;
  for ( i = 0; i < g_DebugEntGrabJoints.m_Size; ++v2 )
  {
    v4 = g_DebugEntGrabJoints.m_Memory.m_pMemory[v2];
    if ( v4 != 0 )
    {
      if ( v4->m_hJoint != 0 )
      {
        if ( v4->m_hPlayer.m_Index + 2 > 1
          && (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->m_hPlayer.m_Index) >> 9) & 0x3F]) != 0 )
        {
          LevelWorld = 0;
          v7 = &v5[v4->m_hPlayer.m_Index & 0x1FF];
          if ( v7 != 0 && v4->m_hPlayer.m_Index == v7->m_EHandle.m_Index )
          {
            m_pInstance = v7->m_pInstance;
            if ( v7->m_pInstance != 0 )
            {
              m_pEntity = m_pInstance->m_pEntity;
              if ( m_pEntity != 0 )
                m_hSpawnGroup = m_pEntity->m_hSpawnGroup;
              else
                m_hSpawnGroup = 0;
              LevelWorld = CPhysicsGameSystem::GetOrCreateLevelWorld(
                             g_pPhysicsGameSystem,
                             m_pInstance->m_worldGroupId,
                             m_hSpawnGroup);
            }
          }
        }
        else
        {
          LevelWorld = 0;
        }
        (*(*LevelWorld + 904LL))(LevelWorld);
      }
      if ( v4->m_bRebuildMass )
      {
        m_hTargetBody = v4->m_hTargetBody;
        if ( m_hTargetBody != 0 )
          (*(*m_hTargetBody + 336LL))(m_hTargetBody);
      }
      v9 = 0;
      if ( v4->m_hPlayer.m_Index + 2 > 1 )
      {
        v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->m_hPlayer.m_Index) >> 9) & 0x3F];
        if ( v10 != 0 )
        {
          v11 = &v10[v4->m_hPlayer.m_Index & 0x1FF];
          if ( v11 != 0 && v4->m_hPlayer.m_Index == v11->m_EHandle.m_Index )
          {
            v12 = v11->m_pInstance;
            if ( v11->m_pInstance != 0 )
            {
              v13 = v12->m_pEntity;
              if ( v13 != 0 )
                v14 = v13->m_hSpawnGroup;
              else
                v14 = 0;
              v9 = CPhysicsGameSystem::GetOrCreateLevelWorld(g_pPhysicsGameSystem, v12->m_worldGroupId, v14);
            }
          }
        }
      }
      (*(*v9 + 720LL))(v9, v4->m_hDriverBody);
      operator delete(v4);
    }
    ++i;
  }
  g_DebugEntGrabJoints.m_Size = 0;
  if ( (g_DebugEntGrabJoints.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CEntityDebugGrab *,int>::Purge(&g_DebugEntGrabJoints.m_Memory);
}


// ent_name  (line 1258, @0x0000000001f608f0, libserver.so)  // inlines: Arg, SetDebugBits, operator[]
// calls: UTIL_GetCommandClient, CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities
// globals: g_pEntityDebugGameSystem
void __fastcall ent_name(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient(ctx);
  if ( g_pEntityDebugGameSystem != 0 )
    CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities(g_pEntityDebugGameSystem, CommandClient, v2, 2u, 0.0);
}


// ent_text  (line 1264, @0x0000000001f60890, libserver.so)  // inlines: Arg, SetDebugBits, operator[]
// calls: UTIL_GetCommandClient, CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities
// globals: g_pEntityDebugGameSystem
void __fastcall ent_text(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient(ctx);
  if ( g_pEntityDebugGameSystem != 0 )
    CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities(g_pEntityDebugGameSystem, CommandClient, v2, 1u, 0.0);
}


// ent_text_radius  (line 1270, @0x0000000001f60800, libserver.so)  // inlines: Arg, SetDebugBits, operator[]
// calls: V_atof, UTIL_GetCommandClient, CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities
// globals: g_pEntityDebugGameSystem
void __fastcall ent_text_radius(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v3; // rdi
  float v5; // xmm0_4
  const char *v6; // r12
  CBasePlayer *CommandClient; // rax
  float v8; // [rsp+Ch] [rbp-24h]

  v3 = "";
  if ( args->m_nArgc > 1 )
    v3 = args->m_ppArgv[1];
  v5 = V_atof(v3);
  v6 = "";
  if ( args->m_nArgc > 2 )
    v6 = args->m_ppArgv[2];
  v8 = v5;
  CommandClient = UTIL_GetCommandClient(ctx);
  if ( g_pEntityDebugGameSystem != 0 )
    CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities(g_pEntityDebugGameSystem, CommandClient, v6, 1u, v8);
}


// ent_text256  (line 1276, @0x0000000001f607a0, libserver.so)  // inlines: Arg, SetDebugBits, operator[]
// calls: UTIL_GetCommandClient, CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities
// globals: g_pEntityDebugGameSystem
void __fastcall ent_text256(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient(ctx);
  if ( g_pEntityDebugGameSystem != 0 )
    CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities(g_pEntityDebugGameSystem, CommandClient, v2, 1u, 256.0);
}


// ent_text_clear  (line 1282, @0x0000000001f41b30, libserver.so)  // inlines: Arg, operator[]
// calls: UTIL_GetCommandClient, CEntityDebugGameSystem::ClearDebugBitsOnMatchingEntities
// globals: g_pEntityDebugGameSystem
void __fastcall ent_text_clear(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  if ( g_pEntityDebugGameSystem != 0 )
  {
    v2 = "";
    if ( args->m_nArgc > 1 )
      v2 = args->m_ppArgv[1];
    CommandClient = UTIL_GetCommandClient(ctx);
    CEntityDebugGameSystem::ClearDebugBitsOnMatchingEntities(g_pEntityDebugGameSystem, CommandClient, v2, 1u, 0.0);
  }
}


// ent_text_sticky_add  (line 1291, @0x0000000001f60b40, libserver.so)  // inlines: Arg, operator[]
// calls: UTIL_GetCommandClient, CEntityDebugGameSystem::AddStickyEntTextName
// globals: g_pEntityDebugGameSystem
void __fastcall ent_text_sticky_add(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  if ( g_pEntityDebugGameSystem != 0 )
  {
    v2 = "";
    if ( args->m_nArgc > 1 )
      v2 = args->m_ppArgv[1];
    CommandClient = UTIL_GetCommandClient(ctx);
    CEntityDebugGameSystem::AddStickyEntTextName(g_pEntityDebugGameSystem, CommandClient, v2);
  }
}


// ent_text_sticky_remove  (line 1300, @0x0000000001f41a30, libserver.so)  // inlines: Arg, operator[]
// calls: UTIL_GetCommandClient, CEntityDebugGameSystem::RemoveStickyEntTextName
// globals: g_pEntityDebugGameSystem
void __fastcall ent_text_sticky_remove(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  if ( g_pEntityDebugGameSystem != 0 )
  {
    v2 = "";
    if ( args->m_nArgc > 1 )
      v2 = args->m_ppArgv[1];
    CommandClient = UTIL_GetCommandClient(ctx);
    CEntityDebugGameSystem::RemoveStickyEntTextName(g_pEntityDebugGameSystem, CommandClient, v2);
  }
}


// ent_text_sticky_clear  (line 1309, @0x0000000001f41b00, libserver.so)
// calls: UTIL_GetCommandClient, CEntityDebugGameSystem::ClearStickyEntTextNames
// globals: g_pEntityDebugGameSystem
void __fastcall ent_text_sticky_clear(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax

  if ( g_pEntityDebugGameSystem != 0 )
  {
    CommandClient = UTIL_GetCommandClient(ctx);
    CEntityDebugGameSystem::ClearStickyEntTextNames(g_pEntityDebugGameSystem, CommandClient);
  }
}


// ent_text_sticky_dump  (line 1317, @0x0000000001f351f0, libserver.so)
// calls: CEntityDebugGameSystem::DumpStickyEntTextNames
// globals: g_pEntityDebugGameSystem
void __fastcall ent_text_sticky_dump(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( g_pEntityDebugGameSystem != 0 )
    CEntityDebugGameSystem::DumpStickyEntTextNames(g_pEntityDebugGameSystem);
}


// ent_bbox  (line 1326, @0x0000000001f60740, libserver.so)  // inlines: Arg, SetDebugBits, operator[]
// calls: UTIL_GetCommandClient, CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities
// globals: g_pEntityDebugGameSystem
void __fastcall ent_bbox(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient(ctx);
  if ( g_pEntityDebugGameSystem != 0 )
    CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities(g_pEntityDebugGameSystem, CommandClient, v2, 4u, 0.0);
}


// ent_absbox  (line 1332, @0x0000000001f606e0, libserver.so)  // inlines: Arg, SetDebugBits, operator[]
// calls: UTIL_GetCommandClient, CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities
// globals: g_pEntityDebugGameSystem
void __fastcall ent_absbox(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient(ctx);
  if ( g_pEntityDebugGameSystem != 0 )
    CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities(g_pEntityDebugGameSystem, CommandClient, v2, 0x20u, 0.0);
}


// ent_attachments  (line 1338, @0x0000000001f60680, libserver.so)  // inlines: Arg, SetDebugBits, operator[]
// calls: UTIL_GetCommandClient, CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities
// globals: g_pEntityDebugGameSystem
void __fastcall ent_attachments(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient(ctx);
  if ( g_pEntityDebugGameSystem != 0 )
    CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities(g_pEntityDebugGameSystem, CommandClient, v2, 0x100u, 0.0);
}


// ent_joints  (line 1344, @0x0000000001f60620, libserver.so)  // inlines: Arg, SetDebugBits, operator[]
// calls: UTIL_GetCommandClient, CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities
// globals: g_pEntityDebugGameSystem
void __fastcall ent_joints(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient(ctx);
  if ( g_pEntityDebugGameSystem != 0 )
    CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities(
      g_pEntityDebugGameSystem,
      CommandClient,
      v2,
      0x40000u,
      0.0);
}


// ent_viewoffset  (line 1350, @0x0000000001f605c0, libserver.so)  // inlines: Arg, SetDebugBits, operator[]
// calls: UTIL_GetCommandClient, CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities
// globals: g_pEntityDebugGameSystem
void __fastcall ent_viewoffset(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient(ctx);
  if ( g_pEntityDebugGameSystem != 0 )
    CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities(
      g_pEntityDebugGameSystem,
      CommandClient,
      v2,
      0x800000000uLL,
      0.0);
}


// ent_pivot  (line 1356, @0x0000000001f60560, libserver.so)  // inlines: Arg, SetDebugBits, operator[]
// calls: UTIL_GetCommandClient, CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities
// globals: g_pEntityDebugGameSystem
void __fastcall ent_pivot(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient(ctx);
  if ( g_pEntityDebugGameSystem != 0 )
    CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities(g_pEntityDebugGameSystem, CommandClient, v2, 8u, 0.0);
}


// ent_skeleton  (line 1362, @0x0000000001f60500, libserver.so)  // inlines: Arg, SetDebugBits, operator[]
// calls: UTIL_GetCommandClient, CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities
// globals: g_pEntityDebugGameSystem
void __fastcall ent_skeleton(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient(ctx);
  if ( g_pEntityDebugGameSystem != 0 )
    CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities(g_pEntityDebugGameSystem, CommandClient, v2, 0x800u, 0.0);
}


// ent_hitbox  (line 1368, @0x0000000001f604a0, libserver.so)  // inlines: Arg, SetDebugBits, operator[]
// calls: UTIL_GetCommandClient, CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities
// globals: g_pEntityDebugGameSystem
void __fastcall ent_hitbox(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient(ctx);
  if ( g_pEntityDebugGameSystem != 0 )
    CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities(g_pEntityDebugGameSystem, CommandClient, v2, 0x4000u, 0.0);
}


// ent_vcollide_wireframe  (line 1373, @0x0000000001f60440, libserver.so)  // inlines: Arg, SetDebugBits, operator[]
// calls: UTIL_GetCommandClient, CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities
// globals: g_pEntityDebugGameSystem
void __fastcall ent_vcollide_wireframe(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient(ctx);
  if ( g_pEntityDebugGameSystem != 0 )
    CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities(
      g_pEntityDebugGameSystem,
      CommandClient,
      v2,
      0x1000000000uLL,
      0.0);
}


// ent_select  (line 1379, @0x0000000001f603e0, libserver.so)  // inlines: Arg, SetDebugBits, operator[]
// calls: UTIL_GetCommandClient, CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities
// globals: g_pEntityDebugGameSystem
void __fastcall ent_select(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient(ctx);
  if ( g_pEntityDebugGameSystem != 0 )
    CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities(
      g_pEntityDebugGameSystem,
      CommandClient,
      v2,
      0x20000u,
      0.0);
}


// ent_messages  (line 1385, @0x0000000001f60380, libserver.so)  // inlines: Arg, SetDebugBits, operator[]
// calls: UTIL_GetCommandClient, CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities
// globals: g_pEntityDebugGameSystem
void __fastcall ent_messages(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient(ctx);
  if ( g_pEntityDebugGameSystem != 0 )
    CEntityDebugGameSystem::ToggleDebugBitsOnMatchingEntities(g_pEntityDebugGameSystem, CommandClient, v2, 0x10u, 0.0);
}


// ent_picker  (line 1397, @0x0000000001f2c350, libserver.so)  // inlines: ToggleDebugSelect
// calls: UTIL_GetCommandClientIndex
// globals: g_pEntityDebugGameSystem
void __fastcall ent_picker(const CCommandContext *const ctx, const CCommand *const args)
{
  CEntityIndex v2; // eax
  CEntityDebugGameSystem *v3; // rdx

  if ( g_pEntityDebugGameSystem != 0 )
  {
    v2.m_Data = UTIL_GetCommandClientIndex(ctx).m_Data;
    v3 = g_pEntityDebugGameSystem;
    g_pEntityDebugGameSystem->m_bInDebugSelect ^= 1u;
    v3->m_nDebugPlayer = v2;
  }
}


// ent_clear_debug_overlays  (line 1407, @0x0000000001f3f6d0, libserver.so)  // inlines: ClearAllDebugBits
// calls: CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::RemoveAll
// globals: g_pEntityDebugGameSystem
void __fastcall ent_clear_debug_overlays(const CCommandContext *const ctx, const CCommand *const args)
{
  CEntityDebugGameSystem *v2; // rbx

  v2 = g_pEntityDebugGameSystem;
  if ( g_pEntityDebugGameSystem != 0 )
  {
    CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::RemoveAll(&g_pEntityDebugGameSystem->m_simDebugEntities);
    CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::RemoveAll(&v2->m_renderDebugEntities);
  }
}


// ent_scale  (line 1415, @0x0000000001f2c6e0, libserver.so)  // inlines: Arg, atof, operator[]
// calls: UTIL_GetCommandClient, strtod, CGameSceneNode::SetLocalScale, GetNextCommandEntity
void __fastcall ent_scale(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // r13
  const char *v4; // r12
  const char *v5; // rdi
  CBaseEntity *v6; // rbx
  CBaseEntity *NextCommandEntity; // rax
  float v8; // xmm1_4

  if ( args->m_nArgc > 1 )
  {
    CommandClient = UTIL_GetCommandClient(ctx);
    if ( args->m_nArgc <= 2 )
    {
      v4 = "";
      v5 = "";
      if ( args->m_nArgc != 2 )
      {
LABEL_5:
        v6 = 0;
        strtod(v5, 0);
        while ( 1 )
        {
          NextCommandEntity = GetNextCommandEntity(CommandClient, v4, v6);
          v6 = NextCommandEntity;
          if ( NextCommandEntity == 0 )
            break;
          CGameSceneNode::SetLocalScale(NextCommandEntity->m_CBodyComponent->m_pSceneNode, v8);
        }
        return;
      }
    }
    else
    {
      v4 = args->m_ppArgv[2];
    }
    v5 = args->m_ppArgv[1];
    goto LABEL_5;
  }
}


// ent_remove  (line 1435, @0x0000000001f2fb40, libserver.so)  // inlines: Arg, CUtlSymbolLarge, FStrEq, GetClassNameAsCStr, GetClassname, GetDebugName, GetEntityName, GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, String, _V_strcmp, atoi, operator[]
// calls: strtol, UTIL_GetCommandClient, CEntityIdentity::GetDebugName, Msg, UTIL_Remove, CGameEntitySystem::NextEnt, strcmp
// strings: "Removed %s(%s)\n"
void __fastcall ent_remove(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v3; // rax
  int v4; // eax
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rdx
  CBaseEntity *m_pInstance; // rbx
  CBasePlayer *CommandClient; // rax
  const CEntityIdentity *m_pEntity; // rdi
  const char *DebugName; // rax
  CEntityIdentity *v11; // rcx
  const char *m_pAsString; // rsi
  CBaseEntity *Ent; // rax
  CEntityIdentity *v14; // r13
  const char *v15; // rsi
  const char *v16; // rdi
  const char *v17; // rsi
  const char *v18; // rdi

  if ( args->m_nArgc <= 1 || (v3 = args->m_ppArgv[1]) == "" || *v3 == 0 )
  {
    CommandClient = UTIL_GetCommandClient(ctx);
    m_pInstance = (*(CommandClient->_vptr_IHandleEntity + 531))(CommandClient);
    if ( m_pInstance == 0 )
      return;
LABEL_12:
    m_pEntity = m_pInstance->m_pEntity;
LABEL_13:
    DebugName = CEntityIdentity::GetDebugName(m_pEntity);
    v11 = m_pInstance->m_pEntity;
    m_pAsString = "";
    if ( v11->m_designerName.u.m_Id != 0 )
      m_pAsString = v11->m_designerName.u.m_pAsString;
    Msg("Removed %s(%s)\n", m_pAsString, DebugName);
    UTIL_Remove(m_pInstance);
    return;
  }
  v4 = strtol(v3, 0, 10);
  if ( v4 > 0 )
  {
    if ( v4 > 32766 )
      return;
    v5 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
    if ( v5 == 0 )
      return;
    v6 = &v5[v4 & 0x1FF];
    if ( v6 == 0 )
      return;
    if ( (v6->m_EHandle.m_Index & 0x7FFF) != v4 )
      return;
    m_pInstance = v6->m_pInstance;
    if ( v6->m_pInstance == 0 )
      return;
    goto LABEL_12;
  }
  m_pInstance = 0;
  while ( 1 )
  {
    Ent = CGameEntitySystem::NextEnt(g_pGameEntitySystem, m_pInstance);
    m_pInstance = Ent;
    if ( Ent == 0 )
      break;
    v14 = Ent->m_pEntity;
    v15 = v14->m_name.u.m_pAsString;
    if ( v15 == 0 )
      goto LABEL_28;
    v16 = "";
    if ( args->m_nArgc > 1 )
      v16 = args->m_ppArgv[1];
    if ( v16 != v15 && strcmp(v16, v15) != 0 )
    {
LABEL_28:
      v17 = v14->m_designerName.u.m_pAsString;
      v18 = "";
      if ( v17 == 0 )
        v17 = "";
      if ( args->m_nArgc > 1 )
        v18 = args->m_ppArgv[1];
      if ( v17 != v18 && strcmp(v18, v17) != 0 )
        continue;
    }
    m_pEntity = v14;
    goto LABEL_13;
  }
}


// ent_remove_all  (line 1482, @0x0000000001f2b620, libserver.so)  // inlines: Arg, CUtlSymbolLarge, FStrEq, GetClassNameAsCStr, GetClassname, GetEntityName, String, _V_strcmp, operator[]
// calls: CGameEntitySystem::NextEnt, strcmp, UTIL_Remove, Msg
// strings: "Removed %d %s's\n", "No %s found.\n", "Removes all entities of the specified type\n\tArguments:   \t{entity_name} / {class_name}
void __fastcall ent_remove_all(const CCommandContext *const ctx, const CCommand *const args)
{
  CBaseEntity *v3; // rbx
  int v4; // r13d
  CBaseEntity *Ent; // rax
  CEntityIdentity *m_pEntity; // r15
  const char *m_pAsString; // rsi
  const char *v8; // rdi
  const char *v9; // rsi
  const char *v10; // rdi
  const char *v11; // rdx
  const char *v12; // rsi

  if ( args->m_nArgc <= 1 )
  {
    Msg("Removes all entities of the specified type\n\tArguments:   \t{entity_name} / {class_name}\n");
  }
  else
  {
    v3 = 0;
    v4 = 0;
    while ( 1 )
    {
      Ent = CGameEntitySystem::NextEnt(g_pGameEntitySystem, v3);
      v3 = Ent;
      if ( Ent == 0 )
        break;
      m_pEntity = Ent->m_pEntity;
      m_pAsString = m_pEntity->m_name.u.m_pAsString;
      if ( m_pAsString == 0 )
        goto LABEL_14;
      v8 = "";
      if ( args->m_nArgc > 1 )
        v8 = args->m_ppArgv[1];
      if ( v8 != m_pAsString && strcmp(v8, m_pAsString) != 0 )
      {
LABEL_14:
        v9 = m_pEntity->m_designerName.u.m_pAsString;
        v10 = "";
        if ( v9 == 0 )
          v9 = "";
        if ( args->m_nArgc > 1 )
          v10 = args->m_ppArgv[1];
        if ( v9 != v10 && strcmp(v10, v9) != 0 )
          continue;
      }
      ++v4;
      UTIL_Remove(v3);
    }
    if ( v4 != 0 )
    {
      v11 = "";
      if ( args->m_nArgc > 1 )
        v11 = args->m_ppArgv[1];
      Msg("Removed %d %s's\n", v4, v11);
    }
    else
    {
      v12 = "";
      if ( args->m_nArgc > 1 )
        v12 = args->m_ppArgv[1];
      Msg("No %s found.\n", v12);
    }
  }
}


// drawline  (line 1524, @0x0000000001f357a0, libserver.so)  // inlines: Arg, atof, operator[]
// calls: strtod, CEntityDebugGameSystem::AddDebugLine
// globals: g_pEntityDebugGameSystem
void __fastcall drawline(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rdi
  __m128d v4; // xmm0
  bool v5; // cc
  const char *v6; // rdi
  __m128d v7; // xmm0
  const char *v8; // rdi
  __m128d v9; // xmm0
  const char *v10; // rdi
  __m128d v11; // xmm0
  const char *v12; // rdi
  __m128d v13; // xmm0
  const char *v14; // rdi
  __m128d v15; // xmm0
  vec_t v16; // xmm6_4
  float v17[2]; // [rsp-8h] [rbp-38h] BYREF
  Vector startPos; // [rsp+0h] [rbp-30h] BYREF
  float v19; // [rsp+Ch] [rbp-24h]
  Vector endPos; // [rsp+10h] [rbp-20h]

  if ( g_pEntityDebugGameSystem != 0 )
  {
    v2 = "";
    if ( args->m_nArgc > 1 )
      v2 = args->m_ppArgv[1];
    v4.m128d_f64[0] = strtod(v2, 0);
    v5 = args->m_nArgc <= 2;
    v6 = "";
    v17[0] = _mm_movedup_pd(v4).m128d_f64[0];
    if ( !v5 )
      v6 = args->m_ppArgv[2];
    v7.m128d_f64[0] = strtod(v6, 0);
    v5 = args->m_nArgc <= 3;
    v8 = "";
    v17[1] = _mm_movedup_pd(v7).m128d_f64[0];
    if ( !v5 )
      v8 = args->m_ppArgv[3];
    v9.m128d_f64[0] = strtod(v8, 0);
    v5 = args->m_nArgc <= 4;
    v10 = "";
    startPos.x = _mm_movedup_pd(v9).m128d_f64[0];
    if ( !v5 )
      v10 = args->m_ppArgv[4];
    v11.m128d_f64[0] = strtod(v10, 0);
    v5 = args->m_nArgc <= 5;
    v12 = "";
    startPos.z = _mm_movedup_pd(v11).m128d_f64[0];
    if ( !v5 )
      v12 = args->m_ppArgv[5];
    v13.m128d_f64[0] = strtod(v12, 0);
    v5 = args->m_nArgc <= 6;
    v14 = "";
    v19 = _mm_movedup_pd(v13).m128d_f64[0];
    if ( !v5 )
      v14 = args->m_ppArgv[6];
    v15.m128d_f64[0] = strtod(v14, 0);
    v16 = _mm_movedup_pd(v15).m128d_f64[0];
    endPos.x = v16;
    CEntityDebugGameSystem::AddDebugLine(g_pEntityDebugGameSystem, v17, &startPos.z, 1, 1);
  }
}


// drawcross  (line 1546, @0x0000000001f355c0, libserver.so)  // inlines: Arg, VectorAdd, atof, operator+, operator[]
// calls: strtod, CEntityDebugGameSystem::AddDebugLine
// globals: g_pEntityDebugGameSystem
void __fastcall drawcross(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rdi
  __m128d v4; // xmm0
  const char *v5; // rdi
  float v6; // r12d
  __m128d v7; // xmm0
  const char *v8; // rdi
  float v9; // xmm2_4
  float v10; // xmm0_4
  float v11; // [rsp-Ch] [rbp-3Ch]
  float v12; // [rsp-8h] [rbp-38h] BYREF
  float v13; // [rsp-4h] [rbp-34h]
  Vector start; // [rsp+0h] [rbp-30h] BYREF
  float v15; // [rsp+Ch] [rbp-24h]
  Vector end; // [rsp+10h] [rbp-20h]

  if ( g_pEntityDebugGameSystem != 0 )
  {
    v2 = "";
    if ( args->m_nArgc > 1 )
      v2 = args->m_ppArgv[1];
    v4.m128d_f64[0] = strtod(v2, 0);
    v5 = "";
    v6 = COERCE_FLOAT(_mm_cvtsi128_si32(_mm_cvtpd_ps(_mm_movedup_pd(v4))));
    if ( args->m_nArgc > 2 )
      v5 = args->m_ppArgv[2];
    v7.m128d_f64[0] = strtod(v5, 0);
    v8 = "";
    v9 = _mm_movedup_pd(v7).m128d_f64[0];
    if ( args->m_nArgc > 3 )
      v8 = args->m_ppArgv[3];
    v11 = v9;
    v10 = strtod(v8, 0);
    v12 = v6 - 5.0;
    v15 = v11 + 5.0;
    v13 = v11 - 5.0;
    start.x = v10 - 5.0;
    start.z = v6 + 5.0;
    end.x = v10 + 5.0;
    CEntityDebugGameSystem::AddDebugLine(g_pEntityDebugGameSystem, &v12, &start.z, 1, 1);
    v12 = v12 + 10.0;
    start.z = start.z - 10.0;
    CEntityDebugGameSystem::AddDebugLine(g_pEntityDebugGameSystem, &v12, &start.z, 1, 1);
    v13 = v13 + 10.0;
    v15 = v15 - 10.0;
    CEntityDebugGameSystem::AddDebugLine(g_pEntityDebugGameSystem, &v12, &start.z, 1, 1);
    v12 = v12 - 10.0;
    start.z = start.z + 10.0;
    CEntityDebugGameSystem::AddDebugLine(g_pEntityDebugGameSystem, &v12, &start.z, 1, 1);
  }
}


// box  (line 1580, @0x0000000001f2c030, libserver.so)  // inlines: Arg, BoxAngles, Color, Init, SetColor, VectorAdd, VectorDivide, VertexColor_t, operator+, operator-=, operator/, operator=, operator[]
// calls: V_atof, V_atoi, Msg, __stack_chk_fail
// strings: "Usage:  %s minx miny miny maxx maxy maxz <lifetime = 10.0> <r g b a>\n"
void __fastcall box(const CCommandContext *const ctx, const CCommand *const args)
{
  int m_nArgc; // eax
  float v4; // xmm0_4
  const char *v5; // rdi
  float v6; // xmm0_4
  const char *v7; // rdi
  bool v8; // cc
  __m128i v9; // xmm0
  const char *v10; // rdi
  vec_t v11; // r13d
  __m128i v12; // xmm0
  const char *v13; // rdi
  vec_t v14; // r12d
  vec_t v15; // xmm0_4
  int v16; // eax
  Color *p_clr; // r13
  int v18; // r12d
  __int64 v19; // rax
  unsigned __int8 v20; // dl
  unsigned __int8 v21; // cl
  unsigned __int8 v22; // si
  unsigned __int8 v23; // al
  const char *v24; // rsi
  vec_t v25; // xmm2_4
  vec_t v26; // xmm1_4
  vec_t v27; // xmm0_4
  __int64 v28; // r8
  const char *v29; // rdi
  float v30; // xmm0_4
  float v31; // [rsp+8h] [rbp-78h]
  float flLifeTimea; // [rsp+Ch] [rbp-74h]
  float flLifeTime; // [rsp+Ch] [rbp-74h]
  _BYTE v34[16]; // [rsp+10h] [rbp-70h] BYREF
  Vector mins; // [rsp+20h] [rbp-60h] BYREF
  Vector maxs; // [rsp+30h] [rbp-50h] BYREF
  Vector center; // [rsp+40h] [rbp-40h] BYREF
  Color clr; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v39; // [rsp+58h] [rbp-28h]

  v39 = __readfsqword(0x28u);
  m_nArgc = args->m_nArgc;
  if ( args->m_nArgc <= 3 )
  {
    v24 = "";
    if ( m_nArgc > 0 )
      v24 = args->m_ppArgv[0];
    Msg("Usage:  %s minx miny miny maxx maxy maxz <lifetime = 10.0> <r g b a>\n", v24);
  }
  else
  {
    v4 = V_atof(args->m_ppArgv[3]);
    v5 = "";
    v31 = v4;
    if ( args->m_nArgc > 2 )
      v5 = args->m_ppArgv[2];
    v6 = V_atof(v5);
    v7 = "";
    if ( args->m_nArgc > 1 )
      v7 = args->m_ppArgv[1];
    flLifeTimea = v6;
    mins.x = V_atof(v7);
    v8 = args->m_nArgc <= 6;
    mins.y = flLifeTimea;
    mins.z = v31;
    maxs.x = mins.x + 4.0;
    maxs.y = flLifeTimea + 4.0;
    maxs.z = v31 + 4.0;
    if ( v8 )
      goto LABEL_21;
    *v9.m128i_i32 = V_atof(args->m_ppArgv[6]);
    v10 = "";
    v11 = COERCE_FLOAT(_mm_cvtsi128_si32(v9));
    if ( args->m_nArgc > 5 )
      v10 = args->m_ppArgv[5];
    *v12.m128i_i32 = V_atof(v10);
    v13 = "";
    v14 = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
    if ( args->m_nArgc > 4 )
      v13 = args->m_ppArgv[4];
    v15 = V_atof(v13);
    v8 = args->m_nArgc <= 7;
    maxs.y = v14;
    maxs.x = v15;
    maxs.z = v11;
    if ( v8 )
    {
LABEL_21:
      v23 = -1;
      v22 = -1;
      v21 = -1;
      v20 = -1;
      flLifeTime = 10.0;
    }
    else
    {
      if ( V_atof(args->m_ppArgv[7]) > 0.001 )
      {
        v29 = "";
        if ( args->m_nArgc > 7 )
          v29 = args->m_ppArgv[7];
        v30 = V_atof(v29);
        v16 = args->m_nArgc;
        flLifeTime = v30;
      }
      else
      {
        v16 = args->m_nArgc;
        flLifeTime = 0.001;
      }
      clr._color[0] = -1;
      clr._color[1] = -1;
      clr._color[2] = -1;
      clr._color[3] = -1;
      if ( v16 <= 8 )
      {
        v23 = -1;
        v22 = -1;
        v21 = -1;
        v20 = -1;
      }
      else
      {
        p_clr = &clr;
        v18 = 8;
        do
        {
          v19 = v18++;
          p_clr = (p_clr + 1);
          p_clr[-1]._color[3] = V_atoi(args->m_ppArgv[v19]);
        }
        while ( args->m_nArgc > v18 );
        v20 = clr._color[3];
        v21 = clr._color[2];
        v22 = clr._color[1];
        v23 = clr._color[0];
      }
    }
    v25 = (mins.x + maxs.x) * 0.5;
    v26 = (mins.y + maxs.y) * 0.5;
    v27 = (mins.z + maxs.z) * 0.5;
    center.x = v25;
    center.y = v26;
    center.z = v27;
    mins.x = mins.x - v25;
    mins.y = mins.y - v26;
    mins.z = mins.z - v27;
    maxs.z = maxs.z - v27;
    maxs.x = maxs.x - v25;
    maxs.y = maxs.y - v26;
    v28 = *g_pDebugOverlay;
    v34[1] = v22;
    v34[2] = v21;
    v34[3] = v20;
    v34[0] = v23;
    (*(v28 + 120))(g_pDebugOverlay, &center, &mins, &maxs, &quat_identity, v34, flLifeTime, 0);
  }
}


