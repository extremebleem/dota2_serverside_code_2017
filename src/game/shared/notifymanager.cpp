// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/notifymanager.cpp:20
struct entitynotify_t {
	// sizeof = 16
};

// src/game/shared/notifymanager.cpp:26
class CNotifyManager : public CAutoGameSystem, public INotify, public IEntityListener {
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
	CNotifyManager();

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CNotifyManager *);
	virtual void AddEntity(CEntityInstance *, CEntityInstance *);
	virtual void RemoveEntity(CEntityInstance *, CEntityInstance *);
	virtual void ReportNamedEvent(CEntityInstance *, const char *);
	virtual void ClearEntity(CEntityInstance *);
	virtual void ReportSystemEvent(CEntityInstance *, notify_system_event_t, const notify_system_event_params_t &);
	virtual void OnEntityCreated(CEntityInstance *);
	virtual void OnEntityDeleted(CEntityInstance *);
	virtual void GameActivate(const EventGameActivate_t &);
	virtual void GameDeactivate(const EventGameDeactivate_t &);
	virtual ~CNotifyManager();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[40] AddEntity
	// vtable[41] RemoveEntity
	// vtable[42] ReportNamedEvent
	// vtable[43] ClearEntity
	// vtable[44] ReportSystemEvent
	// vtable[45] OnEntityCreated
	// vtable[46] OnEntityDeleted
	// vtable[8] GameActivate
	// vtable[11] GameDeactivate
	// sizeof = 64
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CNotifyManager::~CNotifyManager  (line 26, @0x0000000001f77470, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: IGameSystem::~IGameSystem, CUtlMemory<entitynotify_t, int>::Purge
void __fastcall CNotifyManager::~CNotifyManager(CNotifyManager *const this)
{
  bool v2; // zf
  CUtlVectorBase<entitynotify_t,CUtlMemory<entitynotify_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_notifyList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_3FCCBB0;  // vptr: CNotifyManager
  this->_vptr_INotify = off_3FCCD38;
  this->m_notifyList.m_Size = 0;
  this->_vptr_IEntityListener = &off_3FCCD70;
  if ( v2 )
  {
    p_m_Memory = &this->m_notifyList.m_Memory;
    CUtlMemory<entitynotify_t,int>::Purge(&this->m_notifyList.m_Memory);
    if ( (this->m_notifyList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<entitynotify_t,int>::Purge(p_m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CNotifyManager::~CNotifyManager  (line 26, @0x0000000001f77d50, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CNotifyManager, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: IGameSystem::~IGameSystem, operator delete, CUtlMemory<entitynotify_t, int>::Purge
void __fastcall CNotifyManager::~CNotifyManager(CNotifyManager *const this)
{
  bool v2; // zf
  CUtlVectorBase<entitynotify_t,CUtlMemory<entitynotify_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_notifyList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_3FCCBB0;  // vptr: CNotifyManager
  this->_vptr_INotify = off_3FCCD38;
  this->m_notifyList.m_Size = 0;
  this->_vptr_IEntityListener = &off_3FCCD70;
  if ( v2 )
  {
    p_m_Memory = &this->m_notifyList.m_Memory;
    CUtlMemory<entitynotify_t,int>::Purge(&this->m_notifyList.m_Memory);
    if ( (this->m_notifyList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<entitynotify_t,int>::Purge(p_m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CNotifyManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 28, @0x0000000001f71ff0, libserver.so)
void __fastcall CNotifyManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CNotifyManager *const this)
{
  ;
}


// CNotifyManager::DoesGameSystemReallocate  (line 28, @0x0000000001f72000, libserver.so)
// globals: CNotifyManager::sm_Factory
bool __fastcall CNotifyManager::DoesGameSystemReallocate(const CNotifyManager *const this)
{
  return (*(CNotifyManager::sm_Factory->_vptr_IGameSystemFactory + 8))(CNotifyManager::sm_Factory);
}


// CNotifyManager::SetGameSystemGlobalPtrs  (line 28, @0x0000000001f72020, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CNotifyManager::sm_Factory
void __fastcall CNotifyManager::SetGameSystemGlobalPtrs(CNotifyManager *const this, void *pValue)
{
  if ( CNotifyManager::sm_Factory != 0 )
    (*(CNotifyManager::sm_Factory->_vptr_IGameSystemFactory + 7))(CNotifyManager::sm_Factory, pValue);
}


// CNotifyManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 54, @0x0000000001f36250, libserver.so)
void __cdecl CNotifyManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CNotifyManager::AddEntity  (line 56, @0x0000000001f542e0, libserver.so)  // inlines: AddEFlags, AddToTail, GrowMemory, operator[]
// calls: CUtlMemory<entitynotify_t, int>::Grow
void __fastcall CNotifyManager::AddEntity(
        CNotifyManager *const this,
        CEntityInstance *pNotify,
        CEntityInstance *pWatched)
{
  __int64 m_Size; // r13
  entitynotify_t *m_pMemory; // rax
  __int64 v7; // rcx
  int v8; // eax
  entitynotify_t *v9; // r13
  CBaseEntity *pWatchedBaseEntity; // [rsp+8h] [rbp-28h]

  m_Size = this->m_notifyList.m_Size;
  if ( m_Size <= 0 )
  {
LABEL_7:
    if ( pWatched != 0 )
    {
      HIDWORD(pWatched[11].m_CScriptComponent) |= 0x40u;
      m_Size = this->m_notifyList.m_Size;
    }
    v8 = m_Size;
    if ( m_Size == this->m_notifyList.m_Memory.m_nAllocationCount )
    {
      pWatchedBaseEntity = pWatched;
      CUtlMemory<entitynotify_t,int>::Grow(&this->m_notifyList.m_Memory, 1);
      v8 = this->m_notifyList.m_Size;
      pWatched = pWatchedBaseEntity;
    }
    v9 = &this->m_notifyList.m_Memory.m_pMemory[m_Size];
    this->m_notifyList.m_Size = v8 + 1;
    v9->pNotify = pNotify;
    v9->pWatched = pWatched;
  }
  else
  {
    m_pMemory = this->m_notifyList.m_Memory.m_pMemory;
    v7 = &m_pMemory[(m_Size - 1) + 1];
    while ( m_pMemory->pNotify != pNotify || m_pMemory->pWatched != pWatched )
    {
      if ( ++m_pMemory == v7 )
        goto LABEL_7;
    }
  }
}


// CNotifyManager::RemoveEntity  (line 80, @0x0000000001f3f710, libserver.so)  // inlines: operator[]
// calls: CUtlVectorBase<entitynotify_t, CUtlMemory<entitynotify_t, int> >::FastRemove
void __fastcall CNotifyManager::RemoveEntity(
        CNotifyManager *const this,
        CEntityInstance *pNotify,
        CEntityInstance *pWatched)
{
  CUtlVector<entitynotify_t,CUtlMemory<entitynotify_t,int> > *p_m_notifyList; // r15
  int m_Size; // ebx
  __int64 i; // r12
  CEntityInstance **v8; // rax
  CEntityInstance *v9; // [rsp+8h] [rbp-38h]

  p_m_notifyList = &this->m_notifyList;
  m_Size = this->m_notifyList.m_Size;
  for ( i = 16LL * m_Size - 16; --m_Size >= 0; i -= 16 )
  {
    v8 = (&this->m_notifyList.m_Memory.m_pMemory->pNotify + i);
    if ( *v8 == pNotify && v8[1] == pWatched )
    {
      v9 = pWatched;
      CUtlVectorBase<entitynotify_t,CUtlMemory<entitynotify_t,int>>::FastRemove(p_m_notifyList, m_Size);
      pWatched = v9;
    }
  }
}


// CNotifyManager::ReportNamedEvent  (line 91, @0x0000000001f3aac0, libserver.so)  // inlines: AcceptInput, CUtlSymbolLarge, CVariantBase, operator[], ~CVariantBase
// calls: CEntitySystem::FindPooledString, CEntityIdentity::AcceptInput, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CNotifyManager::ReportNamedEvent(
        CNotifyManager *const this,
        CEntityInstance *pEntity,
        const char *pInputName)
{
  int m_Size; // r14d
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  entitynotify_t *v8; // rax
  CEntityIdentity *m_pEntity; // rdi
  CUtlSymbolLarge inputName; // [rsp+10h] [rbp-60h]
  UtlSymLargeId_t v11[2]; // [rsp+20h] [rbp-50h] BYREF
  CVariant emptyVariant; // [rsp+30h] [rbp-40h] BYREF

  if ( pEntity == 0 || (BYTE4(pEntity[11].m_CScriptComponent) & 0x40) != 0 )
  {
    m_Size = this->m_notifyList.m_Size;
    if ( m_Size != 0 )
    {
      emptyVariant.m_uint64 = 0;
      emptyVariant.m_type = 0;
      emptyVariant.m_flags = 0;
      CEntitySystem::FindPooledString(g_pEntitySystem, pInputName);
      if ( inputName.u.m_Id != 0 )
      {
        if ( m_Size > 0 )
        {
          v6 = 0;
          v7 = 16 * ((m_Size - 1) + 1LL);
          do
          {
            while ( 1 )
            {
              v8 = &this->m_notifyList.m_Memory.m_pMemory[v6 / 0x10];
              if ( pEntity == v8->pWatched )
                break;
              v6 += 16LL;
              if ( v6 == v7 )
                goto LABEL_11;
            }
            m_pEntity = v8->pNotify->m_pEntity;
            v11[0] = inputName.u.m_Id;
            CEntityIdentity::AcceptInput(m_pEntity, v11, pEntity, pEntity, &emptyVariant, 0);
            v6 += 16LL;
          }
          while ( v6 != v7 );
        }
LABEL_11:
        CVariantBase<CVariantDefaultAllocator>::Free(&emptyVariant);
      }
      else
      {
        CVariantBase<CVariantDefaultAllocator>::Free(&emptyVariant);
      }
    }
  }
}


// CNotifyManager::GameActivate  (line 120, @0x0000000001f2aba0, libserver.so)
// calls: CGameEntitySystem::AddListenerEntity
void __fastcall CNotifyManager::GameActivate(CNotifyManager *const this, const EventGameActivate_t *const msg)
{
  CGameEntitySystem::AddListenerEntity(g_pGameEntitySystem, &this->IEntityListener);
}


// CNotifyManager::GameDeactivate  (line 127, @0x0000000001f2ca10, libserver.so)  // inlines: Purge, RemoveAll
// calls: CGameEntitySystem::RemoveListenerEntity, CUtlMemory<entitynotify_t, int>::Purge
void __fastcall CNotifyManager::GameDeactivate(CNotifyManager *const this, const EventGameDeactivate_t *const msg)
{
  bool v3; // zf

  CGameEntitySystem::RemoveListenerEntity(g_pGameEntitySystem, &this->IEntityListener);
  v3 = (this->m_notifyList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_notifyList.m_Size = 0;
  if ( v3 )
    CUtlMemory<entitynotify_t,int>::Purge(&this->m_notifyList.m_Memory);
}


// CNotifyManager::OnEntityCreated  (line 135, @0x0000000001f60c60, libserver.so)
// calls: CEntityDebugGameSystem::OnEntityCreated
// globals: g_pEntityDebugGameSystem
void __fastcall CNotifyManager::OnEntityCreated(CNotifyManager *const this, CEntityInstance *pEntity)
{
  CEntityDebugGameSystem::OnEntityCreated(g_pEntityDebugGameSystem, pEntity);
}


// CNotifyManager::OnEntityDeleted  (line 140, @0x0000000001f2a0d0, libserver.so)  // inlines: ReportDestroyEvent, notify_system_event_params_t
void __fastcall CNotifyManager::OnEntityDeleted(CNotifyManager *const this, CEntityInstance *pEntity)
{
  char v4; // [rsp+Fh] [rbp-21h] BYREF
  char *v5; // [rsp+10h] [rbp-20h] BYREF

  v5 = &v4;
  (*(this->_vptr_INotify + 3))(&this->INotify, pEntity, 2, &v5);
  (*(this->_vptr_IGameSystem + 43))(this, pEntity);
}


// CNotifyManager::ClearEntity  (line 148, @0x0000000001f3f7a0, libserver.so)  // inlines: operator[]
// calls: CUtlVectorBase<entitynotify_t, CUtlMemory<entitynotify_t, int> >::FastRemove
void __fastcall CNotifyManager::ClearEntity(CNotifyManager *const this, CEntityInstance *pNotify)
{
  CUtlVector<entitynotify_t,CUtlMemory<entitynotify_t,int> > *p_m_notifyList; // r14
  int m_Size; // ebx
  __int64 i; // r12
  CEntityInstance **v7; // rax

  p_m_notifyList = &this->m_notifyList;
  m_Size = this->m_notifyList.m_Size;
  for ( i = 16LL * m_Size - 16; --m_Size >= 0; i -= 16 )
  {
    v7 = (&this->m_notifyList.m_Memory.m_pMemory->pNotify + i);
    if ( *v7 == pNotify || v7[1] == pNotify )
      CUtlVectorBase<entitynotify_t,CUtlMemory<entitynotify_t,int>>::FastRemove(p_m_notifyList, m_Size);
  }
}


// CNotifyManager::ReportSystemEvent  (line 159, @0x0000000001f2ea50, libserver.so)  // inlines: operator[]
void __fastcall CNotifyManager::ReportSystemEvent(
        CNotifyManager *const this,
        CEntityInstance *pEntity,
        notify_system_event_t eventType,
        const notify_system_event_params_t *const params)
{
  __int64 v8; // r12
  int v9; // ebx
  entitynotify_t *v10; // rax
  const notify_system_event_params_t *v11; // [rsp+8h] [rbp-38h]

  if ( (pEntity == 0 || (BYTE4(pEntity[11].m_CScriptComponent) & 0x40) != 0) && this->m_notifyList.m_Size > 0 )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      v10 = &this->m_notifyList.m_Memory.m_pMemory[v8];
      if ( pEntity == v10->pWatched && v10->pNotify != 0 )
      {
        v11 = params;
        (*(v10->pNotify->_vptr_IHandleEntity + 127))(v10->pNotify, pEntity, eventType, params);
        params = v11;
      }
      ++v9;
      ++v8;
    }
    while ( v9 < this->m_notifyList.m_Size );
  }
}


// notify_teleport_params_t::CalculateRelativeTransform  (line 182, @0x0000000001f36260, libserver.so)  // inlines: ConcatTransforms, InitFromQAngles, MatrixInvert
// calls: AngleMatrix, MatrixInvert, ConcatTransforms
// callers: CPropVRTrackedObject::NotifySystemEvent
matrix3x4_t *__fastcall notify_teleport_params_t::CalculateRelativeTransform(
        matrix3x4_t *__return_ptr retstr,
        const notify_teleport_params_t *const this,
        const matrix3x4_t *const mTeleportSourceCurrentMatrix)
{
  matrix3x4_t mPreviousTransform; // [rsp+0h] [rbp-80h] BYREF
  matrix3x4_t mPreviousTransformInverse; // [rsp+30h] [rbp-50h] BYREF

  AngleMatrix(&this->prevAngles, &this->prevOrigin, &mPreviousTransform);
  MatrixInvert(&mPreviousTransform, &mPreviousTransformInverse);
  ConcatTransforms(mTeleportSourceCurrentMatrix, &mPreviousTransformInverse, retstr);
  return retstr;
}


