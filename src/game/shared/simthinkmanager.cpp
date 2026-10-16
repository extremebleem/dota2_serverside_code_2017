// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/simthinkmanager.cpp:18
struct simthinkentry_t {
	int m_nNextThinkTick;  // +0x4
	simthinkentry_t();

	// sizeof = 8
};

// src/game/shared/simthinkmanager.cpp:24
class CSimThinkManager : public ISimulationThinkManager {
public:

private:

	short unsigned int m_entinfoIndex[32768];  // +0x8
	CSimThinkManager(CSimThinkManager &);
	CSimThinkManager(const CSimThinkManager &);
	CSimThinkManager();
	virtual void Clear();
	void ClearInternal();
	virtual void EntityDeleted(CEntityInstance *);
	virtual bool GetSimThinkList(CSimThinkEntityList &, int *, int *);
	virtual void EntityChanged(CEntityInstance *, int, bool, bool, bool);
	void RemoveEntinfoIndex(int);
	int ListCount();
	~CSimThinkManager();

	// vtable[3] Clear
	// vtable[2] EntityDeleted
	// vtable[0] GetSimThinkList
	// vtable[1] EntityChanged
	// sizeof = 65568
};

// src/game/shared/simthinkmanager.cpp:202
class CSimThinkHook : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;
	typedef CAutoGameSystem BaseClass;
	CSimThinkHook(CSimThinkHook &);
	CSimThinkHook(const CSimThinkHook &);
	CSimThinkHook();
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CSimThinkHook *);
	virtual void GameShutdown(const EventGameShutdown_t &);
	virtual ~CSimThinkHook();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[4] GameShutdown
	// sizeof = 24
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSimThinkManager::~CSimThinkManager  (line 24, @0x0000000001f77f50, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<simthinkentry_t, int>::Purge
void __fastcall CSimThinkManager::~CSimThinkManager(CSimThinkManager *const this)
{
  bool v2; // zf
  CUtlVectorBase<simthinkentry_t,CUtlMemory<simthinkentry_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_simThinkList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_ISimulationThinkManager = &off_3FCE2D0;
  *(&stru_10008.r_offset + this) = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_simThinkList.m_Memory;
    CUtlMemory<simthinkentry_t,int>::Purge(&this->m_simThinkList.m_Memory);
    if ( (this->m_simThinkList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<simthinkentry_t,int>::Purge(p_m_Memory);
  }
}


// CSimThinkManager::Clear  (line 32, @0x0000000001f78710, libserver.so)  // inlines: ClearInternal, Purge, RemoveAll
// calls: CUtlMemory<simthinkentry_t, int>::Purge
void __fastcall CSimThinkManager::Clear(CSimThinkManager *const this)
{
  __int64 i; // rax

  *(&stru_10008.r_offset + this) = 0;
  if ( (this->m_simThinkList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<simthinkentry_t,int>::Purge(&this->m_simThinkList.m_Memory);
  for ( i = 0; i != 0x8000; ++i )
    this->m_entinfoIndex[i] = -1;
}


// CSimThinkManager::EntityDeleted  (line 43, @0x0000000001f780b0, libserver.so)  // inlines: Element, FastRemove, GetEntryIndex, GetRaw, RemoveEntinfoIndex, memcpy, operator[]
void __fastcall CSimThinkManager::EntityDeleted(CSimThinkManager *const this, CEntityInstance *pEntity)
{
  int v3; // eax
  char *v4; // rcx
  unsigned __int16 v5; // dx
  int v6; // esi
  int v7; // esi
  _DWORD v8[8]; // [rsp+10h] [rbp-20h] BYREF

  (*(pEntity->_vptr_IHandleEntity + 3))(v8);
  if ( v8[0] == -1 )
    v3 = 0x7FFF;
  else
    v3 = v8[0] & 0x7FFF;
  v4 = this + 2 * v3;
  v5 = *(v4 + 4);
  if ( v5 != 0xFFFF )
  {
    v6 = *(&stru_10008.r_offset + this);
    if ( v6 <= 0 )
    {
      *(v4 + 4) = -1;
    }
    else
    {
      v7 = v6 - 1;
      if ( v5 != v7 )
      {
        this->m_simThinkList.m_Memory.m_pMemory[v5] = this->m_simThinkList.m_Memory.m_pMemory[v7];
        v7 = *(&stru_10008.r_offset + this) - 1;
      }
      *(&stru_10008.r_offset + this) = v7;
      *(v4 + 4) = -1;
      if ( v5 < v7 )
        this->m_entinfoIndex[this->m_simThinkList.m_Memory.m_pMemory[v5].m_nEntity.m_Data] = v5;
    }
  }
}


// CSimThinkManager::GetSimThinkList  (line 60, @0x0000000001f77280, libserver.so)  // inlines: Bitvec_Set, ClearAll, GetRaw, Set, memset, operator[]
// calls: memset
bool __fastcall CSimThinkManager::GetSimThinkList(
        CSimThinkManager *const this,
        CSimThinkEntityList *const list,
        int *pFirstSetBit,
        int *pLastSetBit)
{
  int v8; // eax
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  simthinkentry_t *v11; // r8
  int m_Data; // r8d

  memset(list, 0, sizeof(CSimThinkEntityList));
  *pFirstSetBit = 0x8000;
  *pLastSetBit = -1;
  v8 = *(&stru_10008.r_offset + this);
  if ( v8 <= 0 )
    return 0;
  v9 = 8LL * (v8 - 1) + 8;
  v10 = 0;
  do
  {
    while ( 1 )
    {
      v11 = &this->m_simThinkList.m_Memory.m_pMemory[v10 / 8];
      if ( v11->m_nNextThinkTick <= gpGlobals->tickcount )
      {
        m_Data = v11->m_nEntity.m_Data;
        list->m_Ints[m_Data >> 5] |= 1 << m_Data;
        if ( *pFirstSetBit > m_Data )
          *pFirstSetBit = m_Data;
        if ( *pLastSetBit < m_Data )
          break;
      }
      v10 += 8LL;
      if ( v10 == v9 )
        return *pLastSetBit >= 0;
    }
    v10 += 8LL;
    *pLastSetBit = m_Data;
  }
  while ( v10 != v9 );
  return *pLastSetBit >= 0;
}


// CSimThinkManager::EntityChanged  (line 98, @0x0000000001f97800, libserver.so)  // inlines: AddToTail, CEntityIndex, Construct<simthinkentry_t>, Element, FastRemove, GetEntryIndex, GetRaw, GrowMemory, RemoveEntinfoIndex, SetRaw, memcpy, operator[], simthinkentry_t
// calls: CUtlMemory<simthinkentry_t, int>::Grow
void __fastcall CSimThinkManager::EntityChanged(
        CSimThinkManager *const this,
        CEntityInstance *pEntity,
        int nFirstThinkTick,
        bool bNoThinkFunctions,
        bool bMarkedForDelete,
        bool bNoSimulation)
{
  bool v9; // r9
  int v10; // r14d
  __int64 v11; // rax
  char *v12; // r12
  __int64 v13; // rax
  simthinkentry_t *v14; // rdx
  char *v15; // rcx
  unsigned __int16 v16; // dx
  int v17; // esi
  int v18; // esi
  int v19; // r15d
  int v20; // eax
  simthinkentry_t *m_pMemory; // rax
  simthinkentry_t *v22; // rdx
  int v24; // [rsp-48h] [rbp-48h] BYREF

  if ( !bMarkedForDelete )
  {
    (*(pEntity->_vptr_IHandleEntity + 3))(&v24);
    if ( v24 != -1 )
    {
      v9 = bNoSimulation;
      v10 = v24 & 0x7FFF;
      v11 = v24 & 0x7FFF;
      if ( bNoThinkFunctions && bNoSimulation )
      {
        v15 = this + 2 * v11;
        v16 = *(v15 + 4);
        if ( v16 != 0xFFFF )
        {
          v17 = *(&stru_10008.r_offset + this);
          if ( v17 <= 0 )
          {
            *(v15 + 4) = -1;
          }
          else
          {
            v18 = v17 - 1;
            if ( v16 != v18 )
            {
              this->m_simThinkList.m_Memory.m_pMemory[v16] = this->m_simThinkList.m_Memory.m_pMemory[v18];
              v18 = *(&stru_10008.r_offset + this) - 1;
            }
            *(&stru_10008.r_offset + this) = v18;
            *(v15 + 4) = -1;
            if ( v18 > v16 )
              this->m_entinfoIndex[this->m_simThinkList.m_Memory.m_pMemory[v16].m_nEntity.m_Data] = v16;
          }
        }
      }
      else
      {
        v12 = this + 2 * v11;
        v13 = *(v12 + 4);
        if ( v13 == 0xFFFF )
        {
          v19 = *(&stru_10008.r_offset + this);
          v20 = v19;
          if ( v19 == this->m_simThinkList.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<simthinkentry_t,int>::Grow(&this->m_simThinkList.m_Memory, 1);
            v20 = *(&stru_10008.r_offset + this);
            v9 = bNoSimulation;
          }
          *(&stru_10008.r_offset + this) = v20 + 1;
          m_pMemory = this->m_simThinkList.m_Memory.m_pMemory;
          v22 = &m_pMemory[v19];
          if ( v22 != 0 )
          {
            v22->m_nEntity.m_Data = -1;
            m_pMemory = this->m_simThinkList.m_Memory.m_pMemory;
          }
          *(v12 + 4) = v19;
          m_pMemory[v19].m_nEntity.m_Data = v10;
          this->m_simThinkList.m_Memory.m_pMemory[*(v12 + 4)].m_nNextThinkTick = 0;
          if ( v9 )
            this->m_simThinkList.m_Memory.m_pMemory[*(v12 + 4)].m_nNextThinkTick = nFirstThinkTick;
        }
        else
        {
          v14 = this->m_simThinkList.m_Memory.m_pMemory;
          if ( bNoSimulation )
            v14[v13].m_nNextThinkTick = nFirstThinkTick;
          else
            v14[v13].m_nNextThinkTick = 0;
        }
      }
    }
  }
}


// report_simthinklist  (line 179, @0x0000000001f3a730, libserver.so)  // inlines: BitVec_IsBitSet, CBitVec, CBitVecT, CEntityHandle, ClearAll, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsBitSet, LookupEntity, LookupEntityByIndexUnsafe, Purge, RemoveAll, memset, operator CBaseEntity*, ~CSortedEntityList, ~CUtlMemory, ~CUtlSortVector, ~CUtlVector, ~CUtlVectorBase
// calls: memset, CSortedEntityList::CSortedEntityList, CSortedEntityList::AddEntityToList, CSortedEntityList::ReportEntityList, CUtlMemory<CBaseEntity*, int>::Purge, CUtlVectorBase<CBaseEntity*, CUtlMemory<CBaseEntity*, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: g_pSimThinkManager, CEntityHandle::gm_pEntityList
void __fastcall report_simthinklist(const CCommandContext *const ctx, const CCommand *const args)
{
  int i; // ebx
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rax
  CEntityInstance *m_pInstance; // rax
  CEntityIdentity *m_pEntity; // rax
  unsigned __int64 m_Index_low; // rcx
  int v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CBaseEntity *v11; // rsi
  int nFirstSetBit; // [rsp+8h] [rbp-1058h] BYREF
  int nLastSetBit; // [rsp+Ch] [rbp-1054h] BYREF
  CSortedEntityList list; // [rsp+10h] [rbp-1050h] BYREF
  CSimThinkEntityList tmpList; // [rsp+40h] [rbp-1020h] BYREF

  memset(&tmpList, 0, sizeof(tmpList));
  g_pSimThinkManager->GetSimThinkList(&tmpList, &nFirstSetBit, &nLastSetBit);
  CSortedEntityList::CSortedEntityList(&list);
  for ( i = nFirstSetBit; nLastSetBit >= i; ++i )
  {
    if ( ((1 << i) & tmpList.m_Ints[i >> 5]) != 0 && (i >> 9) <= 0x3F )
    {
      v3 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[i >> 9];
      if ( v3 != 0 )
      {
        v4 = &v3[i & 0x1FF];
        if ( v4 != 0 )
        {
          m_pInstance = v4->m_pInstance;
          if ( m_pInstance != 0 )
          {
            m_pEntity = m_pInstance->m_pEntity;
            if ( m_pEntity == 0 )
              goto LABEL_14;
            m_Index_low = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
            {
              m_Index_low = LOWORD(m_pEntity->m_EHandle.m_Index);
              LOWORD(m_Index_low) = m_Index_low & 0x7FFF;
            }
            v8 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | m_Index_low & 0x7FFF;
            if ( (v8 + 2) > 1
              && (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) != 0
              && (v10 = &v9[m_Index_low & 0x1FF]) != 0
              && v8 == v10->m_EHandle.m_Index )
            {
              v11 = v10->m_pInstance;
            }
            else
            {
LABEL_14:
              v11 = 0;
            }
            CSortedEntityList::AddEntityToList(&list, v11);
          }
        }
      }
    }
  }
  CSortedEntityList::ReportEntityList(&list);
  list.m_sortedList.m_Size = 0;
  if ( (list.m_sortedList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CBaseEntity *,int>::Purge(&list.m_sortedList.m_Memory);
    if ( (list.m_sortedList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBaseEntity *,int>::Purge(&list.m_sortedList.m_Memory);
  }
}


// CSimThinkHook::~CSimThinkHook  (line 202, @0x0000000001f74090, libserver.so)  // inlines: ~CAutoGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall CSimThinkHook::~CSimThinkHook(CSimThinkHook *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CSimThinkHook::~CSimThinkHook  (line 202, @0x0000000001f740b0, libserver.so)  // inlines: ~CAutoGameSystem, ~CSimThinkHook
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CSimThinkHook::~CSimThinkHook(CSimThinkHook *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CSimThinkHook::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 204, @0x0000000001f722c0, libserver.so)
void __fastcall CSimThinkHook::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CSimThinkHook *const this)
{
  ;
}


// CSimThinkHook::DoesGameSystemReallocate  (line 204, @0x0000000001f722d0, libserver.so)
// globals: CSimThinkHook::sm_Factory
bool __fastcall CSimThinkHook::DoesGameSystemReallocate(const CSimThinkHook *const this)
{
  return (*(CSimThinkHook::sm_Factory->_vptr_IGameSystemFactory + 8))(CSimThinkHook::sm_Factory);
}


// CSimThinkHook::SetGameSystemGlobalPtrs  (line 204, @0x0000000001f722f0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CSimThinkHook::sm_Factory
void __fastcall CSimThinkHook::SetGameSystemGlobalPtrs(CSimThinkHook *const this, void *pValue)
{
  if ( CSimThinkHook::sm_Factory != 0 )
    (*(CSimThinkHook::sm_Factory->_vptr_IGameSystemFactory + 7))(CSimThinkHook::sm_Factory, pValue);
}


// CSimThinkHook::GameShutdown  (line 207, @0x0000000001f72320, libserver.so)
// globals: g_pSimThinkManager
void __fastcall CSimThinkHook::GameShutdown(CSimThinkHook *const this, const EventGameShutdown_t *const msg)
{
  (*(g_pSimThinkManager->_vptr_ISimulationThinkManager + 3))(g_pSimThinkManager, msg);
}


// CSimThinkHook::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 213, @0x0000000001f38040, libserver.so)
void __cdecl CSimThinkHook::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


