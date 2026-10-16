// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/aimtargetmanager.cpp:15
class CAimTargetManager : public CAutoGameSystem, public IEntityListener {
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

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CAimTargetManager *);
	CAimTargetManager();
	virtual void GameActivate(const EventGameActivate_t &);
	virtual void GameDeactivate(const EventGameDeactivate_t &);
	virtual void GameInit(const EventGameInit_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	void Clear();
	void ForceRepopulateList();
	bool ShouldAddEntity(CBaseEntity *);
	virtual void OnEntityCreated(CEntityInstance *);
	virtual void OnEntitySpawned(CEntityInstance *);
	virtual void OnEntityDeleted(CEntityInstance *);
	void AddEntity(CBaseEntity *);
	void RemoveEntity(CBaseEntity *);
	int ListCount();
	int ListCopy(CBaseEntity * *, int);
	CBaseEntity * ListElement(int);
	virtual ~CAimTargetManager();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[8] GameActivate
	// vtable[11] GameDeactivate
	// vtable[3] GameInit
	// vtable[4] GameShutdown
	// vtable[40] OnEntityCreated
	// vtable[41] OnEntitySpawned
	// vtable[42] OnEntityDeleted
	// sizeof = 56
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CAimTargetManager::~CAimTargetManager  (line 15, @0x0000000001f78290, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: IGameSystem::~IGameSystem, CUtlMemory<CBaseEntity*, int>::Purge
void __fastcall CAimTargetManager::~CAimTargetManager(CAimTargetManager *const this)
{
  bool v2; // zf
  CUtlVectorBase<CBaseEntity*,CUtlMemory<CBaseEntity*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_targetList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_3FCB610;  // vptr: CAimTargetManager
  this->_vptr_IEntityListener = off_3FCB778;
  this->m_targetList.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_targetList.m_Memory;
    CUtlMemory<CBaseEntity *,int>::Purge(&this->m_targetList.m_Memory);
    if ( (this->m_targetList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBaseEntity *,int>::Purge(p_m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CAimTargetManager::~CAimTargetManager  (line 15, @0x0000000001f783c0, libserver.so)  // inlines: Purge, RemoveAll, ~CAimTargetManager, ~CAutoGameSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: IGameSystem::~IGameSystem, operator delete, CUtlMemory<CBaseEntity*, int>::Purge
void __fastcall CAimTargetManager::~CAimTargetManager(CAimTargetManager *const this)
{
  bool v2; // zf
  CUtlVectorBase<CBaseEntity*,CUtlMemory<CBaseEntity*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_targetList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_3FCB610;  // vptr: CAimTargetManager
  this->_vptr_IEntityListener = off_3FCB778;
  this->m_targetList.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_targetList.m_Memory;
    CUtlMemory<CBaseEntity *,int>::Purge(&this->m_targetList.m_Memory);
    if ( (this->m_targetList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBaseEntity *,int>::Purge(p_m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CAimTargetManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 17, @0x0000000001f71c30, libserver.so)
void __fastcall CAimTargetManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CAimTargetManager *const this)
{
  ;
}


// CAimTargetManager::DoesGameSystemReallocate  (line 17, @0x0000000001f71c40, libserver.so)
// globals: CAimTargetManager::sm_Factory
bool __fastcall CAimTargetManager::DoesGameSystemReallocate(const CAimTargetManager *const this)
{
  return (*(CAimTargetManager::sm_Factory->_vptr_IGameSystemFactory + 8))(CAimTargetManager::sm_Factory);
}


// CAimTargetManager::SetGameSystemGlobalPtrs  (line 17, @0x0000000001f71c60, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CAimTargetManager::sm_Factory
void __fastcall CAimTargetManager::SetGameSystemGlobalPtrs(CAimTargetManager *const this, void *pValue)
{
  if ( CAimTargetManager::sm_Factory != 0 )
    (*(CAimTargetManager::sm_Factory->_vptr_IGameSystemFactory + 7))(CAimTargetManager::sm_Factory, pValue);
}


// CAimTargetManager::GameActivate  (line 22, @0x0000000001f74270, libserver.so)
// calls: CGameEntitySystem::AddListenerEntity
void __fastcall CAimTargetManager::GameActivate(CAimTargetManager *const this, const EventGameActivate_t *const msg)
{
  CGameEntitySystem::AddListenerEntity(g_pGameEntitySystem, &this->IEntityListener);
}


// CAimTargetManager::GameDeactivate  (line 29, @0x0000000001f742b0, libserver.so)
// calls: CGameEntitySystem::RemoveListenerEntity
void __fastcall CAimTargetManager::GameDeactivate(
        CAimTargetManager *const this,
        const EventGameDeactivate_t *const msg)
{
  CGameEntitySystem::RemoveListenerEntity(g_pGameEntitySystem, &this->IEntityListener);
}


// CAimTargetManager::GameInit  (line 37, @0x0000000001f767a0, libserver.so)  // inlines: Clear, Purge, RemoveAll
// calls: CUtlMemory<CBaseEntity*, int>::Purge
void __fastcall CAimTargetManager::GameInit(CAimTargetManager *const this, const EventGameInit_t *const msg)
{
  bool v2; // zf

  v2 = (this->m_targetList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_targetList.m_Size = 0;
  if ( v2 )
    CUtlMemory<CBaseEntity *,int>::Purge(&this->m_targetList.m_Memory);
}


// CAimTargetManager::GameShutdown  (line 42, @0x0000000001f767d0, libserver.so)  // inlines: Clear, Purge, RemoveAll
// calls: CUtlMemory<CBaseEntity*, int>::Purge
void __fastcall CAimTargetManager::GameShutdown(CAimTargetManager *const this, const EventGameShutdown_t *const msg)
{
  bool v2; // zf

  v2 = (this->m_targetList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_targetList.m_Size = 0;
  if ( v2 )
    CUtlMemory<CBaseEntity *,int>::Purge(&this->m_targetList.m_Memory);
}


// CAimTargetManager::OnEntityCreated  (line 73, @0x0000000001f71c90, libserver.so)
void __fastcall CAimTargetManager::OnEntityCreated(CAimTargetManager *const this, CEntityInstance *pEntity)
{
  ;
}


// CAimTargetManager::OnEntitySpawned  (line 74, @0x0000000001f94df0, libserver.so)  // inlines: AddEntity, AddToTail, CopyConstruct<CBaseEntity*>, Element, GrowMemory, IsValidIndex, RemoveEntity, operator[]
// calls: CUtlVectorBase<CBaseEntity*, CUtlMemory<CBaseEntity*, int> >::Find, CUtlVectorBase<CBaseEntity*, CUtlMemory<CBaseEntity*, int> >::FastRemove, CUtlMemory<CBaseEntity*, int>::Grow
void __fastcall CAimTargetManager::OnEntitySpawned(CAimTargetManager *const this, CEntityInstance *pIEntity)
{
  CUtlVector<CBaseEntity*,CUtlMemory<CBaseEntity*,int> > *p_m_targetList; // r13
  int v5; // eax
  __int64 m_Size; // r13
  int v7; // eax
  CBaseEntity **v8; // rax
  CBaseEntity *src; // [rsp+8h] [rbp-28h] BYREF

  if ( pIEntity != 0 && (BYTE2(pIEntity[9].m_pEntity) & 1) != 0 )
  {
    p_m_targetList = &this->m_targetList;
    src = pIEntity;
    v5 = CUtlVectorBase<CBaseEntity *,CUtlMemory<CBaseEntity *,int>>::Find(&this->m_targetList, &src);
    if ( v5 >= 0 && v5 < this->m_targetList.m_Size )
      CUtlVectorBase<CBaseEntity *,CUtlMemory<CBaseEntity *,int>>::FastRemove(p_m_targetList, v5);
    if ( (pIEntity->m_pEntity->m_flags & 0x200) == 0 )
    {
      m_Size = this->m_targetList.m_Size;
      v7 = this->m_targetList.m_Size;
      if ( m_Size == this->m_targetList.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CBaseEntity *,int>::Grow(&this->m_targetList.m_Memory, 1);
        v7 = this->m_targetList.m_Size;
      }
      this->m_targetList.m_Size = v7 + 1;
      v8 = &this->m_targetList.m_Memory.m_pMemory[m_Size];
      if ( v8 != 0 )
        *v8 = pIEntity;
    }
  }
}


// CAimTargetManager::OnEntityDeleted  (line 86, @0x0000000001f868c0, libserver.so)  // inlines: IsValidIndex, RemoveEntity
// calls: CUtlVectorBase<CBaseEntity*, CUtlMemory<CBaseEntity*, int> >::Find, CUtlVectorBase<CBaseEntity*, CUtlMemory<CBaseEntity*, int> >::FastRemove
void __fastcall CAimTargetManager::OnEntityDeleted(CAimTargetManager *const this, CEntityInstance *pIEntity)
{
  CUtlVector<CBaseEntity*,CUtlMemory<CBaseEntity*,int> > *p_m_targetList; // r12
  int v4; // eax
  CBaseEntity *v5; // [rsp-20h] [rbp-20h] BYREF

  if ( pIEntity != 0 && (BYTE2(pIEntity[9].m_pEntity) & 1) != 0 )
  {
    p_m_targetList = &this->m_targetList;
    v5 = pIEntity;
    v4 = CUtlVectorBase<CBaseEntity *,CUtlMemory<CBaseEntity *,int>>::Find(&this->m_targetList, &v5);
    if ( v4 >= 0 && v4 < this->m_targetList.m_Size )
      CUtlVectorBase<CBaseEntity *,CUtlMemory<CBaseEntity *,int>>::FastRemove(p_m_targetList, v4);
  }
}


// CAimTargetManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 131, @0x0000000001f31fb0, libserver.so)
void __cdecl CAimTargetManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// AimTarget_ListCount  (line 133, @0x0000000001f31fc0, libserver.so)
// callers: CBasePlayer::AutoaimDeflection
// globals: g_pAimManager
int __cdecl AimTarget_ListCount()
{
  return g_pAimManager->m_targetList.m_Size;
}


// AimTarget_ListCopy  (line 138, @0x0000000001f31fd0, libserver.so)  // inlines: ListCopy, memcpy
// calls: memcpy
// globals: g_pAimManager
int __fastcall AimTarget_ListCopy(CBaseEntity **pList, int listMax)
{
  int m_Size; // ebx

  m_Size = g_pAimManager->m_targetList.m_Size;
  if ( listMax <= m_Size )
    m_Size = listMax;
  memcpy(pList, g_pAimManager->m_targetList.m_Memory.m_pMemory, 8LL * m_Size);
  return m_Size;
}


// AimTarget_ListElement  (line 143, @0x0000000001f32010, libserver.so)  // inlines: ListElement, operator[]
// callers: CBasePlayer::AutoaimDeflection
// globals: g_pAimManager
CBaseEntity *__fastcall AimTarget_ListElement(int iIndex)
{
  return g_pAimManager->m_targetList.m_Memory.m_pMemory[iIndex];
}


// AimTarget_ForceRepopulateList  (line 148, @0x0000000001f48220, libserver.so)  // inlines: AddEntity, AddToTail, Clear, CopyConstruct<CBaseEntity*>, Element, FirstEnt, ForceRepopulateList, GrowMemory, Purge, RemoveAll, operator[]
// calls: CGameEntitySystem::NextEnt, CUtlMemory<CBaseEntity*, int>::Purge, CUtlMemory<CBaseEntity*, int>::Grow
// callers: CBasePlayer::Activate
// globals: g_pAimManager
void __cdecl AimTarget_ForceRepopulateList()
{
  CAimTargetManager *v0; // r12
  bool v1; // zf
  CUtlVectorBase<CBaseEntity*,CUtlMemory<CBaseEntity*,int> >::CAllocator *p_m_Memory; // r13
  CBaseEntity *i; // rax
  __int64 m_Size; // r14
  int v5; // edx
  CBaseEntity **v6; // rdx
  CBaseEntity *v7; // [rsp+8h] [rbp-28h]

  v0 = g_pAimManager;
  v1 = (g_pAimManager->m_targetList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  p_m_Memory = &g_pAimManager->m_targetList.m_Memory;
  g_pAimManager->m_targetList.m_Size = 0;
  if ( v1 )
    CUtlMemory<CBaseEntity *,int>::Purge(p_m_Memory);
  for ( i = CGameEntitySystem::NextEnt(g_pGameEntitySystem, 0);
        i != 0;
        i = CGameEntitySystem::NextEnt(g_pGameEntitySystem, i) )
  {
    while ( 1 )
    {
      if ( (i->m_fFlags.m_Value & 0x10000) != 0 && (i->m_pEntity->m_flags & 0x200) == 0 )
      {
        m_Size = v0->m_targetList.m_Size;
        v5 = v0->m_targetList.m_Size;
        if ( m_Size == v0->m_targetList.m_Memory.m_nAllocationCount )
        {
          v7 = i;
          CUtlMemory<CBaseEntity *,int>::Grow(p_m_Memory, 1);
          v5 = v0->m_targetList.m_Size;
          i = v7;
        }
        v0->m_targetList.m_Size = v5 + 1;
        v6 = &v0->m_targetList.m_Memory.m_pMemory[m_Size];
        if ( v6 != 0 )
          break;
      }
      i = CGameEntitySystem::NextEnt(g_pGameEntitySystem, i);
      if ( i == 0 )
        return;
    }
    *v6 = i;
  }
}


// AimTarget_ReportEntityFlagsChanged  (line 153, @0x0000000001f480b0, libserver.so)  // inlines: AddEntity, AddToTail, CopyConstruct<CBaseEntity*>, Element, GrowMemory, IsValidIndex, RemoveEntity, operator[]
// calls: CUtlVectorBase<CBaseEntity*, CUtlMemory<CBaseEntity*, int> >::Find, CUtlVectorBase<CBaseEntity*, CUtlMemory<CBaseEntity*, int> >::FastRemove, CUtlMemory<CBaseEntity*, int>::Grow
// callers: CBaseEntity::AddFlag, CBaseEntity::RemoveFlag, CBaseEntity::ClearFlags, CBaseEntity::ToggleFlag
// globals: g_pAimManager
void __fastcall AimTarget_ReportEntityFlagsChanged(CBaseEntity *pEntity, unsigned int flagsOld, unsigned int flagsNow)
{
  CEntityIdentity *m_pEntity; // rax
  unsigned int v6; // r13d
  CAimTargetManager *v7; // r14
  __int64 m_Size; // r15
  int v9; // eax
  CBaseEntity **v10; // rax
  CAimTargetManager *v11; // r12
  CUtlVector<CBaseEntity*,CUtlMemory<CBaseEntity*,int> > *p_m_targetList; // rbx
  int v13; // eax
  CBaseEntity *src; // [rsp+8h] [rbp-38h] BYREF

  m_pEntity = pEntity->m_pEntity;
  if ( m_pEntity == 0 || (m_pEntity->m_flags & 0x200) == 0 )
  {
    v6 = flagsNow ^ flagsOld;
    if ( ((flagsNow ^ flagsOld) & 0x10000) != 0 )
    {
      if ( (v6 & flagsNow & 0x10000) != 0 )
      {
        v7 = g_pAimManager;
        if ( (m_pEntity->m_flags & 0x200) == 0 )
        {
          m_Size = g_pAimManager->m_targetList.m_Size;
          v9 = g_pAimManager->m_targetList.m_Size;
          if ( m_Size == g_pAimManager->m_targetList.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CBaseEntity *,int>::Grow(&g_pAimManager->m_targetList.m_Memory, 1);
            v9 = v7->m_targetList.m_Size;
          }
          v7->m_targetList.m_Size = v9 + 1;
          v10 = &v7->m_targetList.m_Memory.m_pMemory[m_Size];
          if ( v10 != 0 )
            *v10 = pEntity;
        }
      }
      if ( (v6 & flagsOld & 0x10000) != 0 )
      {
        v11 = g_pAimManager;
        src = pEntity;
        p_m_targetList = &g_pAimManager->m_targetList;
        v13 = CUtlVectorBase<CBaseEntity *,CUtlMemory<CBaseEntity *,int>>::Find(&g_pAimManager->m_targetList, &src);
        if ( v13 >= 0 && v13 < v11->m_targetList.m_Size )
          CUtlVectorBase<CBaseEntity *,CUtlMemory<CBaseEntity *,int>>::FastRemove(p_m_targetList, v13);
      }
    }
  }
}


