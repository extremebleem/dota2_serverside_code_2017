// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/stepsimulationmanager.cpp:17
struct stepsimulationentry_t {
	stepsimulationentry_t();

	// sizeof = 4
};

// src/game/shared/stepsimulationmanager.cpp:22
class CStepSimulationManager : public IStepSimulationManager {
public:

private:

	short unsigned int m_entinfoIndex[32768];  // +0x8
	CStepSimulationManager(CStepSimulationManager &);
	CStepSimulationManager(const CStepSimulationManager &);
	CStepSimulationManager();
	virtual void Clear();
	void ClearInternal();
	virtual void EntityUsingStepSimulation(CEntityInstance *, bool);
	virtual int GetEntityList(CStepSimulationEntityList &);
	void RemoveEntinfoIndex(int);
	int ListCount();
	~CStepSimulationManager();

	// vtable[2] Clear
	// vtable[1] EntityUsingStepSimulation
	// vtable[0] GetEntityList
	// sizeof = 65568
};

// src/game/shared/stepsimulationmanager.cpp:122
class CStepSimulationHook : public CAutoGameSystem {
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
	CStepSimulationHook(CStepSimulationHook &);
	CStepSimulationHook(const CStepSimulationHook &);
	CStepSimulationHook();
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CStepSimulationHook *);
	virtual void GameShutdown(const EventGameShutdown_t &);
	virtual ~CStepSimulationHook();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[4] GameShutdown
	// sizeof = 24
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CStepSimulationManager::~CStepSimulationManager  (line 22, @0x0000000001f77fb0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<stepsimulationentry_t, int>::Purge
void __fastcall CStepSimulationManager::~CStepSimulationManager(CStepSimulationManager *const this)
{
  bool v2; // zf
  CUtlVectorBase<stepsimulationentry_t,CUtlMemory<stepsimulationentry_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_stepSimulationList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IStepSimulationManager = &off_3FCE970;
  *(&stru_10008.r_offset + this) = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_stepSimulationList.m_Memory;
    CUtlMemory<stepsimulationentry_t,int>::Purge(&this->m_stepSimulationList.m_Memory);
    if ( (this->m_stepSimulationList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<stepsimulationentry_t,int>::Purge(p_m_Memory);
  }
}


// CStepSimulationManager::Clear  (line 30, @0x0000000001f78770, libserver.so)  // inlines: ClearInternal, Purge, RemoveAll
// calls: CUtlMemory<stepsimulationentry_t, int>::Purge
void __fastcall CStepSimulationManager::Clear(CStepSimulationManager *const this)
{
  __int64 i; // rax

  *(&stru_10008.r_offset + this) = 0;
  if ( (this->m_stepSimulationList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<stepsimulationentry_t,int>::Purge(&this->m_stepSimulationList.m_Memory);
  for ( i = 0; i != 0x8000; ++i )
    this->m_entinfoIndex[i] = -1;
}


// CStepSimulationManager::EntityUsingStepSimulation  (line 41, @0x0000000001f988f0, libserver.so)  // inlines: AddToTail, CEntityIndex, Construct<stepsimulationentry_t>, Element, FastRemove, GetEntryIndex, GetRaw, GrowMemory, RemoveEntinfoIndex, SetRaw, memcpy, operator[], stepsimulationentry_t
// calls: CUtlMemory<stepsimulationentry_t, int>::Grow
void __fastcall CStepSimulationManager::EntityUsingStepSimulation(
        CStepSimulationManager *const this,
        CEntityInstance *pEntity,
        bool bUsingStepSimulation)
{
  int v5; // r14d
  __int64 v6; // rax
  char *v7; // r12
  char *v8; // rcx
  unsigned __int16 v9; // dx
  int v10; // esi
  int v11; // esi
  int v12; // r13d
  int v13; // eax
  stepsimulationentry_t *m_pMemory; // rax
  stepsimulationentry_t *v15; // rdx
  _DWORD v16[12]; // [rsp+0h] [rbp-30h] BYREF

  (*(pEntity->_vptr_IHandleEntity + 3))(v16);
  if ( v16[0] != -1 )
  {
    v5 = v16[0] & 0x7FFF;
    v6 = v16[0] & 0x7FFF;
    if ( bUsingStepSimulation )
    {
      v7 = this + 2 * v6;
      if ( *(v7 + 4) == 0xFFFF )
      {
        v12 = *(&stru_10008.r_offset + this);
        v13 = v12;
        if ( v12 == this->m_stepSimulationList.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<stepsimulationentry_t,int>::Grow(&this->m_stepSimulationList.m_Memory, 1);
          v13 = *(&stru_10008.r_offset + this);
        }
        *(&stru_10008.r_offset + this) = v13 + 1;
        m_pMemory = this->m_stepSimulationList.m_Memory.m_pMemory;
        v15 = &m_pMemory[v12];
        if ( v15 != 0 )
        {
          v15->m_nEntity.m_Data = -1;
          m_pMemory = this->m_stepSimulationList.m_Memory.m_pMemory;
        }
        *(v7 + 4) = v12;
        m_pMemory[v12].m_nEntity.m_Data = v5;
      }
    }
    else
    {
      v8 = this + 2 * v6;
      v9 = *(v8 + 4);
      if ( v9 != 0xFFFF )
      {
        v10 = *(&stru_10008.r_offset + this);
        if ( v10 <= 0 )
        {
          *(v8 + 4) = -1;
        }
        else
        {
          v11 = v10 - 1;
          if ( v9 != v11 )
          {
            this->m_stepSimulationList.m_Memory.m_pMemory[v9].m_nEntity.m_Data = this->m_stepSimulationList.m_Memory.m_pMemory[v11].m_nEntity.m_Data;
            v11 = *(&stru_10008.r_offset + this) - 1;
          }
          *(&stru_10008.r_offset + this) = v11;
          *(v8 + 4) = -1;
          if ( v9 < v11 )
            this->m_entinfoIndex[this->m_stepSimulationList.m_Memory.m_pMemory[v9].m_nEntity.m_Data] = v9;
        }
      }
    }
  }
}


// CStepSimulationManager::GetEntityList  (line 69, @0x0000000001f98b60, libserver.so)  // inlines: AddToTail, CopyConstruct<CEntityInstance*>, Element, GetInstance, GetRaw, GrowMemory, IndexToIdentity, LookupEntityByIndexUnsafe, RemoveAll, operator[]
// calls: CUtlMemory<CEntityInstance*, int>::Grow
int __fastcall CStepSimulationManager::GetEntityList(
        CStepSimulationManager *const this,
        CStepSimulationEntityList *const list)
{
  CStepSimulationManager *v2; // r8
  int v4; // eax
  unsigned __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // r10
  CEntityInstance **m_pMemory; // rdx
  int result; // eax
  CEntityInstance **v10; // rdx
  int m_Data; // ecx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rcx
  CEntityInstance *m_pInstance; // r15
  CUtlVectorBase<CEntityInstance*,CUtlMemoryFixedGrowable<CEntityInstance*,128ul,int> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-48h]
  CStepSimulationManager *v16; // [rsp+10h] [rbp-40h]
  __int64 v17; // [rsp+18h] [rbp-38h]

  v2 = this;
  list->m_Size = 0;
  v4 = *(&stru_10008.r_offset + this);
  if ( v4 <= 0 )
    return 0;
  v5 = 0;
  v6 = 0;
  v7 = 4LL * (v4 - 1) + 4;
  p_m_Memory = &list->m_Memory;
  while ( 1 )
  {
    m_Data = v2->m_stepSimulationList.m_Memory.m_pMemory[v5 / 4].m_nEntity.m_Data;
    result = v6;
    if ( (m_Data >> 9) <= 0x3F )
    {
      v12 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[m_Data >> 9];
      if ( v12 != 0 )
      {
        v13 = &v12[m_Data & 0x1FF];
        if ( v13 != 0 )
        {
          m_pInstance = v13->m_pInstance;
          if ( v13->m_pInstance != 0 )
          {
            if ( list->m_Memory.m_nAllocationCount == v6 )
            {
              v16 = v2;
              v17 = v7;
              CUtlMemory<CEntityInstance *,int>::Grow(p_m_Memory, 1);
              result = list->m_Size;
              v2 = v16;
              v7 = v17;
            }
            m_pMemory = list->m_Memory.m_pMemory;
            list->m_Size = ++result;
            v10 = &m_pMemory[v6];
            if ( v10 != 0 )
            {
              *v10 = m_pInstance;
              result = list->m_Size;
            }
          }
        }
      }
    }
    v5 += 4LL;
    if ( v5 == v7 )
      break;
    v6 = result;
  }
  return result;
}


// CStepSimulationHook::~CStepSimulationHook  (line 122, @0x0000000001f74040, libserver.so)  // inlines: ~CAutoGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall CStepSimulationHook::~CStepSimulationHook(CStepSimulationHook *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CStepSimulationHook::~CStepSimulationHook  (line 122, @0x0000000001f74060, libserver.so)  // inlines: ~CAutoGameSystem, ~CStepSimulationHook
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CStepSimulationHook::~CStepSimulationHook(CStepSimulationHook *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CStepSimulationHook::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 124, @0x0000000001f72360, libserver.so)
void __fastcall CStepSimulationHook::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CStepSimulationHook *const this)
{
  ;
}


// CStepSimulationHook::DoesGameSystemReallocate  (line 124, @0x0000000001f72370, libserver.so)
// globals: CStepSimulationHook::sm_Factory
bool __fastcall CStepSimulationHook::DoesGameSystemReallocate(const CStepSimulationHook *const this)
{
  return (*(CStepSimulationHook::sm_Factory->_vptr_IGameSystemFactory + 8))(CStepSimulationHook::sm_Factory);
}


// CStepSimulationHook::SetGameSystemGlobalPtrs  (line 124, @0x0000000001f72390, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CStepSimulationHook::sm_Factory
void __fastcall CStepSimulationHook::SetGameSystemGlobalPtrs(CStepSimulationHook *const this, void *pValue)
{
  if ( CStepSimulationHook::sm_Factory != 0 )
    (*(CStepSimulationHook::sm_Factory->_vptr_IGameSystemFactory + 7))(CStepSimulationHook::sm_Factory, pValue);
}


// CStepSimulationHook::GameShutdown  (line 127, @0x0000000001f723c0, libserver.so)
// globals: g_pStepSimulationManager
void __fastcall CStepSimulationHook::GameShutdown(
        CStepSimulationHook *const this,
        const EventGameShutdown_t *const msg)
{
  (*(g_pStepSimulationManager->_vptr_IStepSimulationManager + 2))(g_pStepSimulationManager, msg);
}


// CStepSimulationHook::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 133, @0x0000000001f38a80, libserver.so)
void __cdecl CStepSimulationHook::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


