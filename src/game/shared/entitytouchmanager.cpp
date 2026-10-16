// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/entitytouchmanager.cpp:14
class CEntityTouchManager : public CAutoGameSystem, public IEntityListener {
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

	typedef CAutoGameSystem BaseClass;
	CEntityTouchManager();

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CEntityTouchManager *);
	virtual void GameActivate(const EventGameActivate_t &);
	virtual void GameDeactivate(const EventGameDeactivate_t &);
	virtual void GameInit(const EventGameInit_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	virtual void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	void Clear();
	virtual void OnEntityCreated(CEntityInstance *);
	virtual void OnEntityDeleted(CEntityInstance *);
	void AddEntity(CBaseEntity *);
	virtual ~CEntityTouchManager();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[8] GameActivate
	// vtable[11] GameDeactivate
	// vtable[3] GameInit
	// vtable[4] GameShutdown
	// vtable[25] FrameUpdatePostEntityThink
	// vtable[40] OnEntityCreated
	// vtable[41] OnEntityDeleted
	// sizeof = 56
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEntityTouchManager::~CEntityTouchManager  (line 14, @0x0000000001f78220, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: IGameSystem::~IGameSystem, CUtlMemory<CBaseEntity*, int>::Purge
void __fastcall CEntityTouchManager::~CEntityTouchManager(CEntityTouchManager *const this)
{
  bool v2; // zf
  CUtlVectorBase<CBaseEntity*,CUtlMemory<CBaseEntity*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_updateList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_3FCC7B0;  // vptr: CEntityTouchManager
  this->_vptr_IEntityListener = &off_3FCC910;
  this->m_updateList.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_updateList.m_Memory;
    CUtlMemory<CBaseEntity *,int>::Purge(&this->m_updateList.m_Memory);
    if ( (this->m_updateList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBaseEntity *,int>::Purge(p_m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CEntityTouchManager::~CEntityTouchManager  (line 14, @0x0000000001f78430, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CEntityTouchManager, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: IGameSystem::~IGameSystem, operator delete, CUtlMemory<CBaseEntity*, int>::Purge
void __fastcall CEntityTouchManager::~CEntityTouchManager(CEntityTouchManager *const this)
{
  bool v2; // zf
  CUtlVectorBase<CBaseEntity*,CUtlMemory<CBaseEntity*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_updateList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_3FCC7B0;  // vptr: CEntityTouchManager
  this->_vptr_IEntityListener = &off_3FCC910;
  this->m_updateList.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_updateList.m_Memory;
    CUtlMemory<CBaseEntity *,int>::Purge(&this->m_updateList.m_Memory);
    if ( (this->m_updateList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBaseEntity *,int>::Purge(p_m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CEntityTouchManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 16, @0x0000000001f71f10, libserver.so)
void __fastcall CEntityTouchManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CEntityTouchManager *const this)
{
  ;
}


// CEntityTouchManager::DoesGameSystemReallocate  (line 16, @0x0000000001f71f20, libserver.so)
// globals: CEntityTouchManager::sm_Factory
bool __fastcall CEntityTouchManager::DoesGameSystemReallocate(const CEntityTouchManager *const this)
{
  return (*(CEntityTouchManager::sm_Factory->_vptr_IGameSystemFactory + 8))(CEntityTouchManager::sm_Factory);
}


// CEntityTouchManager::SetGameSystemGlobalPtrs  (line 16, @0x0000000001f71f40, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CEntityTouchManager::sm_Factory
void __fastcall CEntityTouchManager::SetGameSystemGlobalPtrs(CEntityTouchManager *const this, void *pValue)
{
  if ( CEntityTouchManager::sm_Factory != 0 )
    (*(CEntityTouchManager::sm_Factory->_vptr_IGameSystemFactory + 7))(CEntityTouchManager::sm_Factory, pValue);
}


// CEntityTouchManager::GameActivate  (line 19, @0x0000000001f74290, libserver.so)
// calls: CGameEntitySystem::AddListenerEntity
void __fastcall CEntityTouchManager::GameActivate(
        CEntityTouchManager *const this,
        const EventGameActivate_t *const msg)
{
  CGameEntitySystem::AddListenerEntity(g_pGameEntitySystem, &this->IEntityListener);
}


// CEntityTouchManager::GameDeactivate  (line 26, @0x0000000001f742d0, libserver.so)
// calls: CGameEntitySystem::RemoveListenerEntity
void __fastcall CEntityTouchManager::GameDeactivate(
        CEntityTouchManager *const this,
        const EventGameDeactivate_t *const msg)
{
  CGameEntitySystem::RemoveListenerEntity(g_pGameEntitySystem, &this->IEntityListener);
}


// CEntityTouchManager::GameInit  (line 34, @0x0000000001f76800, libserver.so)  // inlines: Clear, Purge, RemoveAll
// calls: CUtlMemory<CBaseEntity*, int>::Purge
void __fastcall CEntityTouchManager::GameInit(CEntityTouchManager *const this, const EventGameInit_t *const msg)
{
  bool v2; // zf

  v2 = (this->m_updateList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_updateList.m_Size = 0;
  if ( v2 )
    CUtlMemory<CBaseEntity *,int>::Purge(&this->m_updateList.m_Memory);
}


// CEntityTouchManager::GameShutdown  (line 39, @0x0000000001f76830, libserver.so)  // inlines: Clear, Purge, RemoveAll
// calls: CUtlMemory<CBaseEntity*, int>::Purge
void __fastcall CEntityTouchManager::GameShutdown(
        CEntityTouchManager *const this,
        const EventGameShutdown_t *const msg)
{
  bool v2; // zf

  v2 = (this->m_updateList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_updateList.m_Size = 0;
  if ( v2 )
    CUtlMemory<CBaseEntity *,int>::Purge(&this->m_updateList.m_Memory);
}


// CEntityTouchManager::OnEntityCreated  (line 52, @0x0000000001f71f70, libserver.so)
void __fastcall CEntityTouchManager::OnEntityCreated(CEntityTouchManager *const this, CEntityInstance *pEntity)
{
  ;
}


// CEntityTouchManager::OnEntityDeleted  (line 53, @0x0000000001f86850, libserver.so)  // inlines: IsValidIndex
// calls: CUtlVectorBase<CBaseEntity*, CUtlMemory<CBaseEntity*, int> >::Find, CUtlVectorBase<CBaseEntity*, CUtlMemory<CBaseEntity*, int> >::FastRemove
void __fastcall CEntityTouchManager::OnEntityDeleted(CEntityTouchManager *const this, CEntityInstance *pIEntity)
{
  CUtlVector<CBaseEntity*,CUtlMemory<CBaseEntity*,int> > *p_m_updateList; // r12
  int v4; // eax
  CBaseEntity *pEntity; // [rsp+8h] [rbp-18h] BYREF

  pEntity = pIEntity;
  if ( pIEntity != 0 && (HIBYTE(pIEntity[11].m_CScriptComponent) & 1) != 0 )
  {
    p_m_updateList = &this->m_updateList;
    v4 = CUtlVectorBase<CBaseEntity *,CUtlMemory<CBaseEntity *,int>>::Find(&this->m_updateList, &pEntity);
    if ( v4 >= 0 && v4 < this->m_updateList.m_Size )
      CUtlVectorBase<CBaseEntity *,CUtlMemory<CBaseEntity *,int>>::FastRemove(p_m_updateList, v4);
  }
}


// CEntityTouchManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 81, @0x0000000001f35d70, libserver.so)
void __cdecl CEntityTouchManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// EntityTouch_Add  (line 83, @0x0000000001f481a0, libserver.so)  // inlines: AddEntity, AddToTail, CopyConstruct<CBaseEntity*>, Element, GrowMemory, operator[]
// calls: CUtlMemory<CBaseEntity*, int>::Grow
// callers: CBaseEntity::SetCheckUntouch
// globals: g_pTouchManager
void __fastcall EntityTouch_Add(CBaseEntity *pEntity)
{
  CEntityTouchManager *v2; // rbx
  __int64 m_Size; // r13
  int v4; // eax
  CBaseEntity **v5; // rax

  v2 = g_pTouchManager;
  if ( (pEntity->m_pEntity->m_flags & 0x200) == 0 )
  {
    m_Size = g_pTouchManager->m_updateList.m_Size;
    v4 = g_pTouchManager->m_updateList.m_Size;
    if ( m_Size == g_pTouchManager->m_updateList.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CBaseEntity *,int>::Grow(&g_pTouchManager->m_updateList.m_Memory, 1);
      v4 = v2->m_updateList.m_Size;
    }
    v2->m_updateList.m_Size = v4 + 1;
    v5 = &v2->m_updateList.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = pEntity;
  }
}


// CEntityTouchManager::FrameUpdatePostEntityThink  (line 89, @0x0000000001f2adb0, libserver.so)  // inlines: RemoveAll, memcpy
// calls: memcpy, CBaseEntity::PhysicsCheckForEntityUntouch, __stack_chk_fail
void __fastcall CEntityTouchManager::FrameUpdatePostEntityThink(
        CEntityTouchManager *const this,
        const EventServerPostEntityThink_t *const msg)
{
  int m_Size; // r12d
  size_t v4; // rdx
  void *v5; // rsp
  __int64 v6; // rbx
  __int64 v7; // rdi
  _BYTE v8[32]; // [rsp+10h] [rbp-20h] BYREF

  m_Size = this->m_updateList.m_Size;
  if ( m_Size != 0 )
  {
    v4 = 8LL * m_Size;
    v5 = alloca(((v4 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
    memcpy((v8 & 0xFFFFFFFFFFFFFFEFLL), this->m_updateList.m_Memory.m_pMemory, v4);
    this->m_updateList.m_Size = 0;
    if ( m_Size > 0 )
    {
      v6 = 0;
      do
      {
        v7 = *((v8 & 0xFFFFFFFFFFFFFFEFLL) + 8 * v6);
        if ( (*(v7 + 575) & 1) != 0 )
          CBaseEntity::PhysicsCheckForEntityUntouch(v7);
        ++v6;
      }
      while ( m_Size > v6 );
    }
  }
}


// report_touchlinks  (line 116, @0x0000000001f3a940, libserver.so)  // inlines: Arg, ClassMatches, FClassnameIs, FirstEnt, Get, GetDataObject, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, operator CBaseEntity*, operator CEntityInstance*, ~CSortedEntityList, ~CUtlMemory, ~CUtlSortVector, ~CUtlVector, ~CUtlVectorBase
// calls: CSortedEntityList::CSortedEntityList, CGameEntitySystem::NextEnt, CEntityIdentity::ClassMatches, CEntityIdentity::GetDataObject, CSortedEntityList::AddEntityToList, CSortedEntityList::ReportEntityList, CUtlMemory<CBaseEntity*, int>::Purge, CUtlVectorBase<CBaseEntity*, CUtlMemory<CBaseEntity*, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall report_touchlinks(const CCommandContext *const ctx, const CCommand *const args)
{
  CBaseEntity *Ent; // rax
  const char *v4; // r15
  CBaseEntity *v5; // r14
  unsigned __int16 *DataObject; // rax
  unsigned __int16 *v7; // r12
  unsigned __int16 *v8; // rbx
  CBaseEntity *m_pInstance; // rsi
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CSortedEntityList list; // [rsp+0h] [rbp-60h] BYREF

  CSortedEntityList::CSortedEntityList(&list);
  Ent = CGameEntitySystem::NextEnt(g_pGameEntitySystem, 0);
  v4 = 0;
  v5 = Ent;
  if ( args->m_nArgc > 1 )
    v4 = args->m_ppArgv[1];
  if ( Ent != 0 )
  {
    do
    {
      if ( v4 == 0 || CEntityIdentity::ClassMatches(v5->m_pEntity, v4) )
      {
        DataObject = CEntityIdentity::GetDataObject(v5->m_pEntity, 1);
        v7 = DataObject;
        if ( DataObject != 0 )
        {
          v8 = *(DataObject + 1);
          if ( v8 != DataObject )
          {
            do
            {
              m_pInstance = 0;
              if ( (*v8 + 2) > 1 )
              {
                v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v8 >> 9) & 0x3F];
                if ( v10 != 0 )
                {
                  v11 = &v10[*v8 & 0x1FF];
                  if ( v11 != 0 && *v8 == v11->m_EHandle.m_Index )
                    m_pInstance = v11->m_pInstance;
                }
              }
              CSortedEntityList::AddEntityToList(&list, m_pInstance);
              v8 = *(v8 + 1);
            }
            while ( v8 != v7 );
          }
        }
      }
      v5 = CGameEntitySystem::NextEnt(g_pGameEntitySystem, v5);
    }
    while ( v5 != 0 );
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


