// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_in_game_predictions.cpp:45
struct InGamePredictionData_t {
	class NetworkVar_m_nID {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nValue {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nRawValue {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nValueState {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bValueIsMask {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

private:

	typedef InGamePredictionData_t ThisClass;
	InGamePredictionData_t();

	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	void NetworkStateChangedLog(const char *, const char *);
	bool operator!=(const InGamePredictionData_t &);
	~InGamePredictionData_t();
	InGamePredictionData_t(const InGamePredictionData_t &);
	InGamePredictionData_t & operator=(const InGamePredictionData_t &);

	// sizeof = 32
};

// src/game/shared/dota/dota_in_game_predictions.cpp:67
class CDOTAInGamePredictionState : public CBaseEntity {
	class NetworkVar_m_bVotingClosed {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bAllPredictionsFinished {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_vecPredictions {
		typedef ThisClass OuterClass_t;
		OuterClass_t * GetOuter(void *);
		void NetworkStateChanged(void *);

		// sizeof = 1
	};
	typedef CDOTAInGamePredictionState ThisClass;

	class NetworkVar_m_nLeagueID {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CDOTAInGamePredictionState(CDOTAInGamePredictionState &);
	CDOTAInGamePredictionState(CDOTAInGamePredictionState &);
	CDOTAInGamePredictionState();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual int ShouldTransmit(const CGameCheckTransmitInfo *);
	void PostPredictionUpdateMessage(const CDOTACompendiumDefinition *, const InGamePredictionData_t &);
	virtual ~CDOTAInGamePredictionState();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[65] ShouldTransmit
	// sizeof = 864
};

// src/game/shared/dota/dota_in_game_predictions.cpp:97
class C_CDOTAInGamePredictionState_MapInstall {
	C_CDOTAInGamePredictionState_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/dota_in_game_predictions.cpp:231
class CInGamePredictionNotify : public ICombatAnalyzerQueryUpdateNotify {
public:

private:

	int m_nPredictionIndex;  // +0x8
	CInGamePredictionNotify(CInGamePredictionNotify &);
	CInGamePredictionNotify(const CInGamePredictionNotify &);
	CInGamePredictionNotify(int);
	virtual void OnQueryProgressChanged(int, int);
	virtual void OnQueryFailed(int);
	virtual void OnQuerySucceeded(int);

	// vtable[0] OnQueryProgressChanged
	// vtable[1] OnQueryFailed
	// vtable[2] OnQuerySucceeded
	// sizeof = 16
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// InGamePredictionData_t::operator=  (line 45, @0x00000000025dd8a0, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=
// callers: CSchemaUtlVectorManipulator<CUtlVector<InGamePredictionData_t, CNetworkUtlVector_MemoryType<InGamePredictionData_t, -1> >, InGamePredictionData_t>::SwapItems
InGamePredictionData_t *__fastcall InGamePredictionData_t::operator=(InGamePredictionData_t *const this, __int64 a2)
{
  int16 v4; // cx
  unsigned int v5; // eax
  CEntityInstance *m_pObj; // rdi
  unsigned int v7; // eax
  CEntityInstance *v8; // rdi
  unsigned int v9; // eax
  CEntityInstance *v10; // rdi
  unsigned __int8 v11; // al
  CEntityInstance *v12; // rdi
  char v13; // al
  CEntityInstance *v14; // rdi

  if ( *a2 != this->__m_pChainEntity.m_pObj )
    this->__m_pChainEntity.m_pObj = *a2;
  v4 = *(a2 + 8);
  this->__m_PathIndex.m_Value = v4;
  v5 = *(a2 + 12);
  if ( this->m_nID.m_Value != v5 )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( this->__m_pChainEntity.m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && v4 != -1 )
    {
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 12, 0xFFFFFFFFLL);
      v5 = *(a2 + 12);
    }
    this->m_nID.m_Value = v5;
  }
  v7 = *(a2 + 16);
  if ( this->m_nValue.m_Value != v7 )
  {
    v8 = this->__m_pChainEntity.m_pObj;
    if ( this->__m_pChainEntity.m_pObj != 0
      && (v8->m_pEntity->m_flags & 0x400) == 0
      && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v8->_vptr_IHandleEntity + 22))(v8, 16, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v7 = *(a2 + 16);
    }
    this->m_nValue.m_Value = v7;
  }
  v9 = *(a2 + 20);
  if ( this->m_nRawValue.m_Value != v9 )
  {
    v10 = this->__m_pChainEntity.m_pObj;
    if ( this->__m_pChainEntity.m_pObj != 0
      && (v10->m_pEntity->m_flags & 0x400) == 0
      && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v10->_vptr_IHandleEntity + 22))(v10, 20, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v9 = *(a2 + 20);
    }
    this->m_nRawValue.m_Value = v9;
  }
  v11 = *(a2 + 24);
  if ( this->m_nValueState.m_Value != v11 )
  {
    v12 = this->__m_pChainEntity.m_pObj;
    if ( this->__m_pChainEntity.m_pObj != 0
      && (v12->m_pEntity->m_flags & 0x400) == 0
      && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v12->_vptr_IHandleEntity + 22))(v12, 24, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v11 = *(a2 + 24);
    }
    this->m_nValueState.m_Value = v11;
  }
  v13 = *(a2 + 25);
  if ( this->m_bValueIsMask.m_Value != v13 )
  {
    v14 = this->__m_pChainEntity.m_pObj;
    if ( this->__m_pChainEntity.m_pObj != 0
      && (v14->m_pEntity->m_flags & 0x400) == 0
      && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v14->_vptr_IHandleEntity + 22))(v14, 25, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v13 = *(a2 + 25);
    }
    this->m_bValueIsMask.m_Value = v13;
  }
  return this;
}


// InGamePredictionData_t::NetworkVar_m_nValue::NetworkStateChanged  (line 58, @0x00000000025cfbc0, libserver.so)  // inlines: Get, NetworkStateChanged, operator CEntityInstance*
// callers: CDOTAInGamePredictionGameSystem::RecomputeQueryValue
void __fastcall InGamePredictionData_t::NetworkVar_m_nValue::NetworkStateChanged(
        void *ptr,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  _QWORD *v3; // rax
  int16 *v4; // rdi
  int16 *p_m_Value; // rdx
  int16 m_Value; // [rsp+0h] [rbp-10h] BYREF

  v3 = *(ptr - 2);
  m_Value = nPathIndex.m_Value;
  if ( v3 != 0 && (*(v3[1] + 49LL) & 4) == 0 && *(ptr - 4) != 0xFFFF )
  {
    v4 = (ptr - 8);
    p_m_Value = &m_Value;
    if ( m_Value == -1 )
      p_m_Value = v4;
    (*(*v3 + 176LL))(v3, 16, nArrayIndex, *p_m_Value);
  }
}


// InGamePredictionData_t::NetworkVar_m_nValueState::NetworkStateChanged  (line 60, @0x00000000025cfc20, libserver.so)  // inlines: Get, NetworkStateChanged, operator CEntityInstance*
// callers: CDOTAInGamePredictionGameSystem::RecomputeQueryValue
void __fastcall InGamePredictionData_t::NetworkVar_m_nValueState::NetworkStateChanged(
        void *ptr,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  _QWORD *v3; // rax
  int16 *v4; // rdi
  int16 *p_m_Value; // rdx
  int16 m_Value; // [rsp+0h] [rbp-10h] BYREF

  v3 = *(ptr - 3);
  m_Value = nPathIndex.m_Value;
  if ( v3 != 0 && (*(v3[1] + 49LL) & 4) == 0 && *(ptr - 8) != 0xFFFF )
  {
    v4 = (ptr - 16);
    p_m_Value = &m_Value;
    if ( m_Value == -1 )
      p_m_Value = v4;
    (*(*v3 + 176LL))(v3, 24, nArrayIndex, *p_m_Value);
  }
}


// CDOTAInGamePredictionState::~CDOTAInGamePredictionState  (line 67, @0x00000000025ca0a0, libserver.so)  // inlines: Purge, RemoveAll, ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: operator delete, CBaseEntity::~CBaseEntity, CUtlMemory<InGamePredictionData_t, int>::Purge
void __fastcall CDOTAInGamePredictionState::~CDOTAInGamePredictionState(CDOTAInGamePredictionState *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_41071B0;
  operator delete(this->m_vecPredictions.m_pArraySizeChangedDelegate);
  v2 = (this->m_vecPredictions.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecPredictions.m_Vector.m_Size = 0;
  if ( !v2
    || (CUtlMemory<InGamePredictionData_t,int>::Purge(&this->m_vecPredictions.m_Vector.m_Memory),
        (this->m_vecPredictions.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CBaseEntity::~CBaseEntity(this);
  }
  else
  {
    CUtlMemory<InGamePredictionData_t,int>::Purge(&this->m_vecPredictions.m_Vector.m_Memory);
    CBaseEntity::~CBaseEntity(this);
  }
}


// CDOTAInGamePredictionState::~CDOTAInGamePredictionState  (line 67, @0x00000000025ca260, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTAInGamePredictionState, ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: operator delete, CBaseEntity::~CBaseEntity, CBaseEntity::operator delete, CUtlMemory<InGamePredictionData_t, int>::Purge
void __fastcall CDOTAInGamePredictionState::~CDOTAInGamePredictionState(CDOTAInGamePredictionState *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_41071B0;
  operator delete(this->m_vecPredictions.m_pArraySizeChangedDelegate);
  v2 = (this->m_vecPredictions.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecPredictions.m_Vector.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<InGamePredictionData_t,int>::Purge(&this->m_vecPredictions.m_Vector.m_Memory);
    if ( (this->m_vecPredictions.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<InGamePredictionData_t,int>::Purge(&this->m_vecPredictions.m_Vector.m_Memory);
  }
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTAInGamePredictionState::Schema_DynamicBinding  (line 69, @0x00000000025c5640, libserver.so)
// globals: CDOTAInGamePredictionState::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTAInGamePredictionState::Schema_DynamicBinding(
        const CDOTAInGamePredictionState *const this)
{
  return CDOTAInGamePredictionState::s_pSchemaBinding;
}


// CDOTAInGamePredictionState::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 69, @0x00000000025c5650, libserver.so)
// globals: CDOTAInGamePredictionState::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTAInGamePredictionState::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTAInGamePredictionState::CEntityInstanceEntityClass *const this)
{
  return CDOTAInGamePredictionState::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTAInGamePredictionState::CEntityInstanceEntityClass::DestructInstance  (line 69, @0x00000000025c5660, libserver.so)  // inlines: Destruct<CDOTAInGamePredictionState>
void __fastcall CDOTAInGamePredictionState::CEntityInstanceEntityClass::DestructInstance(
        CDOTAInGamePredictionState::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTAInGamePredictionState::CEntityInstanceEntityClass::FreeInstance  (line 69, @0x00000000025c5680, libserver.so)
void __fastcall CDOTAInGamePredictionState::CEntityInstanceEntityClass::FreeInstance(
        CDOTAInGamePredictionState::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTAInGamePredictionState::CEntityInstanceEntityClass::CanAllocate  (line 69, @0x00000000025c56a0, libserver.so)
bool __fastcall CDOTAInGamePredictionState::CEntityInstanceEntityClass::CanAllocate(
        const CDOTAInGamePredictionState::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTAInGamePredictionState::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 69, @0x00000000025c56b0, libserver.so)
// globals: CDOTAInGamePredictionState::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTAInGamePredictionState::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTAInGamePredictionState::CEntityInstanceEntityClass *const this)
{
  return CDOTAInGamePredictionState::s_pSchemaBinding;
}


// CDOTAInGamePredictionState::CEntityInstanceEntityClass::AllocateInstance  (line 69, @0x00000000025c74b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTAInGamePredictionState::CEntityInstanceEntityClass::AllocateInstance(
        CDOTAInGamePredictionState::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 864);
  memset(v1, 0, 0x360u);
  return v1;
}


// CDOTAInGamePredictionState::CEntityInstanceEntityClass::ConstructInstance  (line 69, @0x00000000025c9470, libserver.so)  // inlines: CDOTAInGamePredictionState, CEntityOwnerPtr, CFieldPath, CNetworkUtlVector_MemoryType, CNetworkVarBase, CSmartPtr, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorEmbeddedNetworkVar, CUtlVectorEmbeddedNetworkVar_ChainingHelper, CUtlVectorEmbeddedNetworkVar_Vector, Construct<CDOTAInGamePredictionState>, EnsureValidValue<bool>, EnsureValidValue<unsigned int>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CDOTAInGamePredictionState::CEntityInstanceEntityClass::ConstructInstance(
        CDOTAInGamePredictionState::CEntityInstanceEntityClass *const this,
        void *p)
{
  CEntityInstance *v3; // rax

  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_41071B0;
    *(p + 776) = 0;
    *(p + 777) = 0;
    *(p + 196) = 0;
    v3 = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(p + 99) = 0;
    *(p + 200) = 0;
    *(p + 201) = 0;
    *(p + 416) = 0;
    *(p + 101) = v3;
    *(p + 834) = 0;
    *(p + 105) = 0;
    *(p + 848) = 0;
    *(p + 849) = 0;
    *(p + 214) = 0;
  }
  return p;
}


// CDOTAInGamePredictionState::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 69, @0x00000000025cb7e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTAInGamePredictionState::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTAInGamePredictionState::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTAInGamePredictionState::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 69, @0x00000000025cb800, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTAInGamePredictionState::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTAInGamePredictionState::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTAInGamePredictionState::GetEntityClassInternal  (line 69, @0x00000000025cfc80, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_04.cpp
// strings: "dota_in_game_predictions", "CDOTAInGamePredictionState"
// globals: `guard variable for'CDOTAInGamePredictionState::GetEntityClassInternal(void)::g_EntityCDOTAInGamePredictionStateClass, CDOTAInGamePredictionState::GetEntityClassInternal(void)::g_EntityCDOTAInGamePredictionStateClass, __dso_handle, CDOTAInGamePredictionState::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTAInGamePredictionState::GetEntityClassInfo(void)::g_EntityCDOTAInGamePredictionStateClassInfo, CDOTAInGamePredictionState::GetEntityClassInfo(void)::g_EntityCDOTAInGamePredictionStateClassInfo
CEntityClass *__cdecl CDOTAInGamePredictionState::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTAInGamePredictionState::GetEntityClassInternal(void)::g_EntityCDOTAInGamePredictionStateClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAInGamePredictionState::GetEntityClassInternal(void)::g_EntityCDOTAInGamePredictionStateClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTAInGamePredictionState::GetEntityClassInternal(void)::g_EntityCDOTAInGamePredictionStateClass);
    CDOTAInGamePredictionState::GetEntityClassInternal(void)::g_EntityCDOTAInGamePredictionStateClass._vptr_CEntityClass = off_4107130;
    __cxa_guard_release(&`guard variable for'CDOTAInGamePredictionState::GetEntityClassInternal(void)::g_EntityCDOTAInGamePredictionStateClass);
    __cxa_atexit(
      CDOTAInGamePredictionState::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTAInGamePredictionState::GetEntityClassInternal(void)::g_EntityCDOTAInGamePredictionStateClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTAInGamePredictionStateClass != 0 )
    return &CDOTAInGamePredictionState::GetEntityClassInternal(void)::g_EntityCDOTAInGamePredictionStateClass;
  if ( `guard variable for'CDOTAInGamePredictionState::GetEntityClassInfo(void)::g_EntityCDOTAInGamePredictionStateClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAInGamePredictionState::GetEntityClassInfo(void)::g_EntityCDOTAInGamePredictionStateClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTAInGamePredictionState::GetEntityClassInfo(void)::g_EntityCDOTAInGamePredictionStateClassInfo,
      "CDOTAInGamePredictionState",
      "dota_in_game_predictions",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTAInGamePredictionState::GetEntityClassInfo(void)::g_EntityCDOTAInGamePredictionStateClassInfo);
  }
  CDOTAInGamePredictionState::GetEntityClassInternal(void)::g_EntityCDOTAInGamePredictionStateClass.m_pClassInfo = &CDOTAInGamePredictionState::GetEntityClassInfo(void)::g_EntityCDOTAInGamePredictionStateClassInfo;
  CDOTAInGamePredictionState::GetEntityClassInternal(void)::g_EntityCDOTAInGamePredictionStateClass.m_pBaseClassInfo = CDOTAInGamePredictionState::GetEntityClassInfo(void)::g_EntityCDOTAInGamePredictionStateClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTAInGamePredictionStateClass = &CDOTAInGamePredictionState::GetEntityClassInternal(void)::g_EntityCDOTAInGamePredictionStateClass;
  CDOTAInGamePredictionState::GetEntityClassInfo(void)::g_EntityCDOTAInGamePredictionStateClassInfo.m_pClass = &CDOTAInGamePredictionState::GetEntityClassInternal(void)::g_EntityCDOTAInGamePredictionStateClass;
  CDOTAInGamePredictionState::GetEntityClassInternal(void)::g_EntityCDOTAInGamePredictionStateClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCDOTAInGamePredictionStateClass->m_pComponentOverrides = 0;
  return &CDOTAInGamePredictionState::GetEntityClassInternal(void)::g_EntityCDOTAInGamePredictionStateClass;
}


// CDOTAInGamePredictionState::YouForgotToImplementOrDeclareServerClass  (line 97, @0x0000000002593630, libserver.so)
int __fastcall CDOTAInGamePredictionState::YouForgotToImplementOrDeclareServerClass(
        CDOTAInGamePredictionState *const this)
{
  return 0;
}


// CDOTAInGamePredictionState::GetServerClass  (line 97, @0x00000000025996d0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTAInGamePredictionState::GetServerClass(CDOTAInGamePredictionState *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CDOTAInGamePredictionState::ShouldTransmit  (line 100, @0x0000000002593640, libserver.so)
int __fastcall CDOTAInGamePredictionState::ShouldTransmit(
        CDOTAInGamePredictionState *const this,
        const CGameCheckTransmitInfo *pInfo)
{
  return 4;
}


// CInGamePredictionNotify::OnQueryProgressChanged  (line 238, @0x00000000025cfe30, libserver.so)
// calls: CDOTAInGamePredictionGameSystem::OnQueryProgressChanged
// globals: g_pDOTAInGamePredictionGameSystem
void __fastcall CInGamePredictionNotify::OnQueryProgressChanged(
        CInGamePredictionNotify *const this,
        int nQueryID,
        int nProgress)
{
  CDOTAInGamePredictionGameSystem::OnQueryProgressChanged(
    g_pDOTAInGamePredictionGameSystem,
    this->m_nPredictionIndex,
    nQueryID,
    nProgress);
}


// CInGamePredictionNotify::OnQueryFailed  (line 243, @0x00000000025cfe50, libserver.so)
// calls: CDOTAInGamePredictionGameSystem::OnQueryFailed
// globals: g_pDOTAInGamePredictionGameSystem
void __fastcall CInGamePredictionNotify::OnQueryFailed(CInGamePredictionNotify *const this, int nQueryID)
{
  CDOTAInGamePredictionGameSystem::OnQueryFailed(g_pDOTAInGamePredictionGameSystem, this->m_nPredictionIndex, nQueryID);
}


// CInGamePredictionNotify::OnQuerySucceeded  (line 248, @0x00000000025cfe70, libserver.so)
// calls: CDOTAInGamePredictionGameSystem::OnQuerySucceeded
// globals: g_pDOTAInGamePredictionGameSystem
void __fastcall CInGamePredictionNotify::OnQuerySucceeded(CInGamePredictionNotify *const this, int nQueryID)
{
  CDOTAInGamePredictionGameSystem::OnQuerySucceeded(
    g_pDOTAInGamePredictionGameSystem,
    this->m_nPredictionIndex,
    nQueryID);
}


// CDOTAInGamePredictionGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 262, @0x000000000259de80, libserver.so)
void __cdecl CDOTAInGamePredictionGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CDOTAInGamePredictionGameSystem::PredictionInfo_t::~PredictionInfo_t  (line 264, @0x000000000259de90, libserver.so)
// calls: operator delete [], operator delete
// callers: CUtlVectorBase<CDOTAInGamePredictionGameSystem::PredictionInfo_t, CUtlMemory<CDOTAInGamePredictionGameSystem::PredictionInfo_t, int> >::RemoveAll
void __fastcall CDOTAInGamePredictionGameSystem::PredictionInfo_t::~PredictionInfo_t(
        CDOTAInGamePredictionGameSystem::PredictionInfo_t *const this)
{
  CDOTAInGamePredictionGameSystem::PerPlayerPredictionInfo_t *m_pPerPlayerPredictions; // rdi

  m_pPerPlayerPredictions = this->m_pPerPlayerPredictions;
  if ( m_pPerPlayerPredictions != 0 )
    operator delete[](m_pPerPlayerPredictions);
  operator delete(this->m_pNotify);
}


// CDOTAInGamePredictionGameSystem::CDOTAInGamePredictionGameSystem  (line 272, @0x000000000259dec0, libserver.so)  // inlines: CEntityHandle, CGameEventListener, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase
// callers: CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem, CDOTAInGamePredictionGameSystem>::CreateGameSystem
void __fastcall CDOTAInGamePredictionGameSystem::CDOTAInGamePredictionGameSystem(
        CDOTAInGamePredictionGameSystem *const this)
{
  this->_vptr_IGameSystem = off_41078F0;
  this->m_bRegisteredForEvents = 0;
  this->_vptr_IGameEventListener2 = off_4107A48;
  this->m_hPredictionState.m_Index = -1;
  this->m_bIsActive = 0;
  this->m_bRetryStartVoting = 0;
  this->m_bIsVotingOpen = 0;
  this->m_activePredictions.m_Size = 0;
  this->m_activePredictions.m_Memory.m_pMemory = 0;
  this->m_activePredictions.m_Memory.m_nAllocationCount = 0;
  this->m_activePredictions.m_Memory.m_nGrowSize = 0;
}


// CDOTAInGamePredictionGameSystem::StaticInit  (line 278, @0x00000000025aff30, libserver.so)  // inlines: Purge
// calls: KeyValues::operator new, KeyValues::KeyValues, KeyValues::LoadFromFile, KeyValues::deleteThis, Warning, ParseChallengeTemplates, KeyValues::~KeyValues, KeyValues::operator delete, CUtlVectorBase<challenge_template_t, CUtlMemory<challenge_template_t, int> >::RemoveAll, CUtlMemory<challenge_template_t, int>::Purge, _Unwind_Resume
// callers: CGameSystemReallocatingFactory<CDOTAInGamePredictionGameSystem, CDOTAInGamePredictionGameSystem>::Init
// strings: "scripts/compendiums/in_game_prediction_templates.txt", "Couldn't find templates for the In-Game Prediction System in file %s\n", "Failed to parse templates for the In-Game Prediction System in file %s. Challenge parsing
// globals: CDOTAInGamePredictionGameSystem::sm_vecTemplates
bool __cdecl CDOTAInGamePredictionGameSystem::StaticInit()
{
  KeyValues *v0; // rbx
  IBaseFileSystem *v1; // rsi
  bool v2; // r12
  const char *pszErr; // [rsp+8h] [rbp-28h] BYREF

  v0 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v0, "scripts/compendiums/in_game_prediction_templates.txt");
  v1 = 0;
  if ( g_pFullFileSystem != 0 )
    v1 = &g_pFullFileSystem->IBaseFileSystem;
  v2 = KeyValues::LoadFromFile(v0, v1, "scripts/compendiums/in_game_prediction_templates.txt", "GAME", 0);
  if ( !v2 )
  {
    KeyValues::deleteThis(v0);
    Warning(
      "Couldn't find templates for the In-Game Prediction System in file %s\n",
      "scripts/compendiums/in_game_prediction_templates.txt");
    if ( g_pFullFileSystem != 0 )
      (*(g_pFullFileSystem->_vptr_IAppSystem + 146))(
        g_pFullFileSystem,
        1,
        "scripts/compendiums/in_game_prediction_templates.txt");
    return v2;
  }
  pszErr = 0;
  if ( !ParseChallengeTemplates(v0, &CDOTAInGamePredictionGameSystem::sm_vecTemplates, &pszErr) )
  {
    Warning(
      "Failed to parse templates for the In-Game Prediction System in file %s. Challenge parsing failed in challenge: %s\n",
      "scripts/compendiums/in_game_prediction_templates.txt",
      pszErr);
    CUtlVectorBase<challenge_template_t,CUtlMemory<challenge_template_t,int>>::RemoveAll(&CDOTAInGamePredictionGameSystem::sm_vecTemplates);
    if ( (CDOTAInGamePredictionGameSystem::sm_vecTemplates.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<challenge_template_t,int>::Purge(&CDOTAInGamePredictionGameSystem::sm_vecTemplates.m_Memory);
  }
  if ( v0 == 0 )
    return v2;
  KeyValues::~KeyValues(v0);
  KeyValues::operator delete(v0);
  return v2;
}


// CDOTAInGamePredictionGameSystem::GameActivate  (line 306, @0x00000000025964b0, libserver.so)  // inlines: CMsgDOTASeasonPredictions_eRandomSelectionGroup_t_Name, DOTAGameRules, GetInGamePredictionVotingPeriod, ListenForGameEvent, V_memset, memset
// calls: CDOTAGamerules::GetLobbyForGame, CDOTACompendiumSchema::Get, CDOTACompendiumSchema::GetCompendiumDefinition, CDOTACompendiumDefinition::GetInGamePredictionCount, CDOTACompendiumDefinition::GetInGamePrediction, Msg, CMsgDOTASeasonPredictions_eRandomSelectionGroup_t_descriptor, google::protobuf::internal::NameOfEnum(google::protobuf::EnumDescriptor const*,int), __stack_chk_fail
// strings: "In-game predictions: ", "%s (%d) ", "game_rules_state_change"
void __fastcall CDOTAInGamePredictionGameSystem::GameActivate(
        CDOTAInGamePredictionGameSystem *const this,
        const EventGameActivate_t *const msg)
{
  const CDOTALobby *LobbyForGame; // rax
  uint v4; // ebx
  CDOTACompendiumSchema_0 *v5; // rax
  const CDOTACompendiumDefinition *CompendiumDefinition; // rax
  uint32 *v7; // r13
  unsigned __int64 v8; // r12
  int v9; // r15d
  int i; // ebx
  int v11; // esi
  const CMsgDOTASeasonPredictions_InGamePrediction *v12; // rax
  __int64 v13; // rbx
  int v14; // r15d
  google::protobuf::internal *v15; // rax
  const google::protobuf::EnumDescriptor *v16; // rsi
  int v17; // edx
  const char **v18; // rax
  double v19; // xmm0_8
  double v20; // xmm0_8
  _QWORD v21[12]; // [rsp+2h] [rbp-60h] BYREF

  v21[5] = __readfsqword(0x28u);
  if ( !msg->m_bBackgroundMap && g_pGameRules != 0 )
  {
    LobbyForGame = CDOTAGamerules::GetLobbyForGame(g_pGameRules);
    if ( LobbyForGame != 0 )
    {
      v4 = *(LobbyForGame + 66);
      this->m_nLeagueID = v4;
      v5 = CDOTACompendiumSchema::Get();
      CompendiumDefinition = CDOTACompendiumSchema::GetCompendiumDefinition(v5, v4);
      v7 = CompendiumDefinition;
      if ( CompendiumDefinition != 0 && CDOTACompendiumDefinition::GetInGamePredictionCount(CompendiumDefinition) != 0 )
      {
        v8 = v21 & 0xFFFFFFFFFFFFFFEFLL;
        *v8 = 0;
        *(v8 + 8) = 0;
        v9 = CDOTACompendiumDefinition::GetInGamePredictionCount(v7);
        if ( v9 > 0 )
        {
          for ( i = 0; i != v9; ++i )
          {
            v11 = i;
            v12 = CDOTACompendiumDefinition::GetInGamePrediction(v7, v11);
            ++*(v8 + 4LL * *(v12 + 24));
          }
        }
        v13 = 0;
        Msg("In-game predictions: ");
        do
        {
          v14 = *(v8 + 4 * v13);
          v15 = CMsgDOTASeasonPredictions_eRandomSelectionGroup_t_descriptor();
          v16 = v13++;
          v18 = google::protobuf::internal::NameOfEnum(v15, v16, v17);
          *&v19 = Msg("%s (%d) ", *v18, v14).m128_u64[0];
        }
        while ( v13 != 3 );
        *&v20 = Msg("\n", v19).m128_u64[0];
        this->m_bIsActive = 1;
        this->m_bRegisteredForEvents = 1;
        this->m_nEvent_game_rules_state_change = (*(gameeventmanager->_vptr_IBaseInterface + 4))(
                                                   gameeventmanager,
                                                   &this->CGameEventListener,
                                                   "game_rules_state_change",
                                                   1,
                                                   v20);
        this->m_nInGamePredictionCountPerGame = v7[20];
        this->m_nInGamePredictionVotingPeriod = 60 * v7[21];
      }
    }
  }
}


// CDOTAInGamePredictionGameSystem::GameDeactivate  (line 348, @0x00000000025b0080, libserver.so)  // inlines: Purge, StopListeningForAllEvents
// calls: CDOTAInGamePredictionGameSystem::ClearQueries, CUtlVectorBase<CDOTAInGamePredictionGameSystem::PredictionInfo_t, CUtlMemory<CDOTAInGamePredictionGameSystem::PredictionInfo_t, int> >::RemoveAll, CUtlMemory<CDOTAInGamePredictionGameSystem::PredictionInfo_t, int>::Purge
void __fastcall CDOTAInGamePredictionGameSystem::GameDeactivate(
        CDOTAInGamePredictionGameSystem *const this,
        const EventGameDeactivate_t *const msg)
{
  int m_Size; // r13d
  int v4; // ebx
  int v5; // esi

  if ( this->m_bIsActive )
  {
    if ( this->m_bRegisteredForEvents )
    {
      if ( gameeventmanager != 0 )
        (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
      this->m_bRegisteredForEvents = 0;
    }
    m_Size = this->m_activePredictions.m_Size;
    v4 = 0;
    if ( m_Size > 0 )
    {
      do
      {
        v5 = v4++;
        CDOTAInGamePredictionGameSystem::ClearQueries(this, v5);
      }
      while ( v4 != m_Size );
    }
    CUtlVectorBase<CDOTAInGamePredictionGameSystem::PredictionInfo_t,CUtlMemory<CDOTAInGamePredictionGameSystem::PredictionInfo_t,int>>::RemoveAll(&this->m_activePredictions);
    if ( (this->m_activePredictions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTAInGamePredictionGameSystem::PredictionInfo_t,int>::Purge(&this->m_activePredictions.m_Memory);
  }
}


// CDOTAInGamePredictionGameSystem::ValidatePrediction  (line 363, @0x000000000259df10, libserver.so)
void __fastcall CDOTAInGamePredictionGameSystem::ValidatePrediction(
        CDOTAInGamePredictionGameSystem *const this,
        const CDOTACompendiumDefinition *pDef,
        const CMsgDOTASeasonPredictions_InGamePrediction *pPrediction)
{
  ;
}


// CDOTAInGamePredictionGameSystem::DebugInGamePrediction  (line 455, @0x00000000025c21d0, libserver.so)  // inlines: DOTAGameRules, ListenForGameEvent, _M_data, c_str
// calls: ConVar::SetValue, CDOTAInGamePredictionGameSystem::SelectInGamePredictions
// callers: dota_test_in_game_prediction
// strings: "game_rules_state_change"
void __fastcall CDOTAInGamePredictionGameSystem::DebugInGamePrediction(
        CDOTAInGamePredictionGameSystem *const this,
        int nLeagueID,
        const CMsgDOTASeasonPredictions_InGamePrediction *pPrediction)
{
  int v6; // eax

  if ( !this->m_bIsActive && g_pGameRules != 0 )
  {
    ConVar::SetValue(&dota_realtimeanalyzer_debug_query, **(pPrediction + 3));
    this->m_nLeagueID = nLeagueID;
    this->m_bRegisteredForEvents = 1;
    v6 = (*(gameeventmanager->_vptr_IBaseInterface + 4))(
           gameeventmanager,
           &this->CGameEventListener,
           "game_rules_state_change",
           1);
    this->m_nInGamePredictionCountPerGame = 1;
    this->m_nEvent_game_rules_state_change = v6;
    this->m_nInGamePredictionVotingPeriod = 0;
    CDOTAInGamePredictionGameSystem::SelectInGamePredictions(this, pPrediction);
  }
}


// CDOTAInGamePredictionGameSystem::FrameUpdatePostEntityThink  (line 477, @0x00000000025c2350, libserver.so)  // inlines: AllocProto, CProtoBufMsg, CVProfScope, DOTAGameRules, FreeProto, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GetInstance, GetMatchID, IsEnabled, Lock, NetworkStateChanged, Set, Unlock, operator->, operator=<bool>, set_has_match_id, set_match_id, ~CProtoBufMsg, ~CVProfScope
// calls: CDOTAGamerules::GetDOTATime, GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, CVProfile::EnterScope, pthread_mutex_lock, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, CVProfile::ExitScope, GCClientSystem, CGCClientSystem::BSendMessage, CEntityHandle::operator CEntityInstance*, GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase (22 total)
// strings: "Networking", "CProtoBufMsg::CProtoBufMsg( MsgType_t )"
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCCloseCompendiumInGamePredictionVoting>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgServerToGCCloseCompendiumInGamePredictionVoting>::s_pMemoryPool
void __fastcall CDOTAInGamePredictionGameSystem::FrameUpdatePostEntityThink(
        CDOTAInGamePredictionGameSystem *const this,
        const EventServerPostEntityThink_t *const msg)
{
  int m_enabled; // r14d
  bool v4; // zf
  bool v5; // r14
  google::protobuf::Message *m_pProtoBufBody; // rax
  __int64 v7; // rdx
  CGCClientSystem *v8; // rax
  CEntityInstance *v9; // rax
  CEntityInstance *v10; // r12
  google::protobuf::Message *v11; // rsi
  GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCloseCompendiumInGamePredictionVoting> *v12; // r15
  const google::protobuf::Descriptor *v13; // rax
  const google::protobuf::Descriptor *v14; // rax
  uint32 Int32; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v16; // rax
  uint32 unTargetHigh; // [rsp+Ch] [rbp-64h]
  GCSDK::CProtoBufMsg<CMsgServerToGCCloseCompendiumInGamePredictionVoting> closeInGamePredictionsMsg; // [rsp+10h] [rbp-60h] BYREF

  if ( this->m_bRetryStartVoting )
    CDOTAInGamePredictionGameSystem::SelectInGamePredictions(this, 0);
  if ( this->m_bIsVotingOpen
    && CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 1, 0.0) > this->m_nInGamePredictionVotingPeriod )
  {
    GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&closeInGamePredictionsMsg, 0x1FE7u);
    closeInGamePredictionsMsg.m_pProtoBufBody = 0;
    closeInGamePredictionsMsg._vptr_CProtoBufMsgBase = &off_4107A70;
    m_enabled = g_VProfCurrentProfile.m_enabled;
    v4 = m_enabled == 0;
    v5 = m_enabled != 0;
    if ( !v4 )
      CVProfile::EnterScope(&g_VProfCurrentProfile, "CProtoBufMsg::CProtoBufMsg( MsgType_t )", 0, "Networking", 0, 4);
    if ( !GCSDK::CProtoBufMsg<CMsgServerToGCCloseCompendiumInGamePredictionVoting>::s_bRegisteredWithMemoryPoolMgr )
    {
      pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
      if ( !GCSDK::CProtoBufMsg<CMsgServerToGCCloseCompendiumInGamePredictionVoting>::s_bRegisteredWithMemoryPoolMgr )
      {
        v12 = operator new(0x28u);
        v13 = CMsgServerToGCCloseCompendiumInGamePredictionVoting::descriptor();
        unTargetHigh = google::protobuf::internal::ExtensionSet::GetInt32(
                         (v13->options_ + 8),
                         msgpool_hard_limit.number_,
                         msgpool_hard_limit.default_value_);
        v14 = CMsgServerToGCCloseCompendiumInGamePredictionVoting::descriptor();
        Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                  (v14->options_ + 8),
                  msgpool_soft_limit.number_,
                  msgpool_soft_limit.default_value_);
        GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v12, Int32, unTargetHigh);
        v12->_vptr_CProtoBufMsgMemoryPoolBase = &off_4110950;
        GCSDK::CProtoBufMsg<CMsgServerToGCCloseCompendiumInGamePredictionVoting>::s_pMemoryPool = v12;
        v16 = GCSDK::GProtoBufMsgMemoryPoolMgr();
        GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v16, v12);
        GCSDK::CProtoBufMsg<CMsgServerToGCCloseCompendiumInGamePredictionVoting>::s_bRegisteredWithMemoryPoolMgr = 1;
      }
      pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    }
    m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgServerToGCCloseCompendiumInGamePredictionVoting>::s_pMemoryPool);
    closeInGamePredictionsMsg.m_pProtoBufBody = m_pProtoBufBody;
    if ( v5 )
    {
      CVProfile::ExitScope(&g_VProfCurrentProfile);
      m_pProtoBufBody = closeInGamePredictionsMsg.m_pProtoBufBody;
    }
    v7 = *&g_pGameRules[16].m_szQuestName[88];
    *(m_pProtoBufBody + 4) |= 1u;
    *(m_pProtoBufBody + 3) = v7;
    v8 = GCClientSystem();
    CGCClientSystem::BSendMessage(v8, &closeInGamePredictionsMsg);
    v9 = CEntityHandle::operator CEntityInstance *(&this->m_hPredictionState);
    v10 = v9;
    if ( LOBYTE(v9[16].m_pEntity) != 1 )
    {
      (*(v9->_vptr_IHandleEntity + 22))(v9, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      LOBYTE(v10[16].m_pEntity) = 1;
    }
    v11 = closeInGamePredictionsMsg.m_pProtoBufBody;
    this->m_bIsVotingOpen = 0;
    closeInGamePredictionsMsg._vptr_CProtoBufMsgBase = &off_4107A70;
    if ( v11 != 0 )
    {
      GCSDK::CProtoBufMsgMemoryPoolBase::Free(
        GCSDK::CProtoBufMsg<CMsgServerToGCCloseCompendiumInGamePredictionVoting>::s_pMemoryPool,
        v11);
      closeInGamePredictionsMsg.m_pProtoBufBody = 0;
    }
    GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&closeInGamePredictionsMsg);
  }
}


// CDOTAInGamePredictionGameSystem::FireGameEvent  (line 498, @0x00000000025c25f0, libserver.so)  // inlines: AllocProto, CProtoBufMsg, CVProfScope, FreeProto, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GetMatchID, IsEnabled, Lock, State_Get, Unlock, set_has_match_id, set_match_id, ~CProtoBufMsg, ~CVProfScope
// calls: CDOTA_RealtimeCombatAnalyzer::RunRealtimeAnalysis, CDOTAInGamePredictionGameSystem::FinalizeInGamePredictions, GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, CVProfile::EnterScope, pthread_mutex_lock, operator new, CMsgServerToGCEndCompendiumInGamePredictions::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock (22 total)
// strings: "Networking", "CProtoBufMsg::CProtoBufMsg( MsgType_t )"
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCEndCompendiumInGamePredictions>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgServerToGCEndCompendiumInGamePredictions>::s_pMemoryPool
void __fastcall CDOTAInGamePredictionGameSystem::FireGameEvent(
        CDOTAInGamePredictionGameSystem *const this,
        IGameEvent *pEvent)
{
  int m_nEvent_game_rules_state_change; // ebx
  int v4; // eax
  int m_enabled; // r15d
  bool v6; // r14
  GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCEndCompendiumInGamePredictions> *v7; // r15
  const google::protobuf::Descriptor *v8; // rax
  const google::protobuf::Descriptor *v9; // rax
  uint32 Int32; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v11; // rax
  google::protobuf::Message *m_pProtoBufBody; // rax
  __int64 v13; // rdx
  CGCClientSystem *v14; // rax
  uint32 unTargetHigh; // [rsp+Ch] [rbp-64h]
  GCSDK::CProtoBufMsg<CMsgServerToGCEndCompendiumInGamePredictions> endInGamePredictionsMsg; // [rsp+10h] [rbp-60h] BYREF

  m_nEvent_game_rules_state_change = this->m_nEvent_game_rules_state_change;
  if ( m_nEvent_game_rules_state_change == (*(pEvent->_vptr_IGameEvent + 3))(pEvent) )
  {
    v4 = *&g_pGameRules[6].m_szQuestName[28];
    if ( v4 == 4 )
    {
      CDOTAInGamePredictionGameSystem::SelectInGamePredictions(this, 0);
      v4 = *&g_pGameRules[6].m_szQuestName[28];
    }
    if ( v4 == 6 )
    {
      CDOTA_RealtimeCombatAnalyzer::RunRealtimeAnalysis(&g_DOTARealtimeCombatAnalyzer);
      CDOTAInGamePredictionGameSystem::FinalizeInGamePredictions(this);
      GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&endInGamePredictionsMsg, 0x1FE5u);
      endInGamePredictionsMsg._vptr_CProtoBufMsgBase = &off_4107AB0;
      endInGamePredictionsMsg.m_pProtoBufBody = 0;
      m_enabled = g_VProfCurrentProfile.m_enabled;
      v6 = m_enabled != 0;
      if ( m_enabled != 0 )
        CVProfile::EnterScope(&g_VProfCurrentProfile, "CProtoBufMsg::CProtoBufMsg( MsgType_t )", 0, "Networking", 0, 4);
      if ( !GCSDK::CProtoBufMsg<CMsgServerToGCEndCompendiumInGamePredictions>::s_bRegisteredWithMemoryPoolMgr )
      {
        pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
        if ( !GCSDK::CProtoBufMsg<CMsgServerToGCEndCompendiumInGamePredictions>::s_bRegisteredWithMemoryPoolMgr )
        {
          v7 = operator new(0x28u);
          v8 = CMsgServerToGCEndCompendiumInGamePredictions::descriptor();
          unTargetHigh = google::protobuf::internal::ExtensionSet::GetInt32(
                           (v8->options_ + 8),
                           msgpool_hard_limit.number_,
                           msgpool_hard_limit.default_value_);
          v9 = CMsgServerToGCEndCompendiumInGamePredictions::descriptor();
          Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                    (v9->options_ + 8),
                    msgpool_soft_limit.number_,
                    msgpool_soft_limit.default_value_);
          GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v7, Int32, unTargetHigh);
          v7->_vptr_CProtoBufMsgMemoryPoolBase = &off_4110990;
          GCSDK::CProtoBufMsg<CMsgServerToGCEndCompendiumInGamePredictions>::s_pMemoryPool = v7;
          v11 = GCSDK::GProtoBufMsgMemoryPoolMgr();
          GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v11, v7);
          GCSDK::CProtoBufMsg<CMsgServerToGCEndCompendiumInGamePredictions>::s_bRegisteredWithMemoryPoolMgr = 1;
        }
        pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
      }
      m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgServerToGCEndCompendiumInGamePredictions>::s_pMemoryPool);
      endInGamePredictionsMsg.m_pProtoBufBody = m_pProtoBufBody;
      if ( v6 )
      {
        CVProfile::ExitScope(&g_VProfCurrentProfile);
        m_pProtoBufBody = endInGamePredictionsMsg.m_pProtoBufBody;
      }
      v13 = *&g_pGameRules[16].m_szQuestName[88];
      *(m_pProtoBufBody + 4) |= 1u;
      *(m_pProtoBufBody + 3) = v13;
      v14 = GCClientSystem();
      CGCClientSystem::BSendMessage(v14, &endInGamePredictionsMsg);
      endInGamePredictionsMsg._vptr_CProtoBufMsgBase = &off_4107AB0;
      if ( endInGamePredictionsMsg.m_pProtoBufBody != 0 )
      {
        GCSDK::CProtoBufMsgMemoryPoolBase::Free(
          GCSDK::CProtoBufMsg<CMsgServerToGCEndCompendiumInGamePredictions>::s_pMemoryPool,
          endInGamePredictionsMsg.m_pProtoBufBody);
        endInGamePredictionsMsg.m_pProtoBufBody = 0;
      }
      GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&endInGamePredictionsMsg);
    }
  }
}


// CDOTAInGamePredictionGameSystem::FindCombatAnalyzerTemplateByName  (line 519, @0x000000000259df20, libserver.so)  // inlines: operator char const*, operator[]
// calls: CUtlString::Get, V_stricmp_fast
// callers: CDOTAInGamePredictionGameSystem::StartInGamePredictionAnalysis
// globals: CDOTAInGamePredictionGameSystem::sm_vecTemplates
const challenge_template_t *__fastcall CDOTAInGamePredictionGameSystem::FindCombatAnalyzerTemplateByName(
        const char *pTemplateName)
{
  int v2; // r12d
  __int64 v3; // rbx
  const char *v4; // rax

  v2 = 0;
  v3 = 0;
  if ( CDOTAInGamePredictionGameSystem::sm_vecTemplates.m_Size <= 0 )
    return 0;
  while ( 1 )
  {
    v4 = CUtlString::Get(&CDOTAInGamePredictionGameSystem::sm_vecTemplates.m_Memory.m_pMemory[v3].sName);
    if ( V_stricmp_fast(v4, pTemplateName) == 0 )
      break;
    ++v2;
    ++v3;
    if ( CDOTAInGamePredictionGameSystem::sm_vecTemplates.m_Size <= v2 )
      return 0;
  }
  return &CDOTAInGamePredictionGameSystem::sm_vecTemplates.m_Memory.m_pMemory[v3];
}


// CDOTAInGamePredictionGameSystem::BuildActivePredictions  (line 530, @0x00000000025c04f0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<const CMsgDOTASeasonPredictions_InGamePrediction*>, CopyConstruct<int>, Element, Get, Get<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, GrowMemory, Purge, RemoveAll, _M_data, c_str, operator[], required_heroes, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTACompendiumSchema::Get, CDOTACompendiumSchema::GetCompendiumDefinition, CDOTACompendiumDefinition::GetInGamePredictionCount, CDOTACompendiumDefinition::GetInGamePrediction, DOTAGameManager, CDOTAGameManager::GetHeroIDByName, CUtlVectorBase<int, CUtlMemory<int, int> >::Find, CUtlMemory<int, int>::Grow, CUtlMemory<const CMsgDOTASeasonPredictions_InGamePrediction*, int>::Grow, CUniformRandomStream::CUniformRandomStream(void), Plat_MSTime, CUniformRandomStream::SetSeed(int) (19 total)
// callers: CDOTAInGamePredictionGameSystem::SelectInGamePredictions
void __fastcall CDOTAInGamePredictionGameSystem::BuildActivePredictions(
        CDOTAInGamePredictionGameSystem *const this,
        const CUtlVector<int,CUtlMemory<int,int> > *const playerIDs,
        const CUtlVector<int,CUtlMemory<int,int> > *const heroIDs,
        const CMsgDOTASeasonPredictions_InGamePrediction *pDebugPrediction,
        CUtlVector<CDOTAInGamePredictionGameSystem::ActivePredictionDesc_t,CUtlMemory<CDOTAInGamePredictionGameSystem::ActivePredictionDesc_t,int> > *const activePredictons)
{
  uint32 m_nLeagueID; // ebx
  CDOTACompendiumSchema_0 *v6; // rax
  CUtlVector<const CMsgDOTASeasonPredictions_InGamePrediction*,CUtlMemory<const CMsgDOTASeasonPredictions_InGamePrediction*,int> > *v7; // rax
  CUtlVector<const CMsgDOTASeasonPredictions_InGamePrediction*,CUtlMemory<const CMsgDOTASeasonPredictions_InGamePrediction*,int> > *v8; // rcx
  signed __int64 v9; // rcx
  const CMsgDOTASeasonPredictions_InGamePrediction *v10; // rax
  const CMsgDOTASeasonPredictions_InGamePrediction *v11; // r13
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // r14
  const char *v15; // r12
  CDOTAGameManager *v16; // rax
  signed int m_nInGamePredictionCountPerGame; // eax
  CUtlVector<int,CUtlMemory<int,int> > *v18; // rax
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // rbx
  CUtlVector<int,CUtlMemory<int,int> > *v20; // rdx
  signed __int64 v21; // rdx
  CUtlVector<const CMsgDOTASeasonPredictions_InGamePrediction*,CUtlMemory<const CMsgDOTASeasonPredictions_InGamePrediction*,int> > *v22; // r15
  int v23; // r14d
  int v24; // r13d
  int *v25; // rax
  __int64 m_nAllocationCount; // r12
  int v27; // eax
  CUtlVector<const CMsgDOTASeasonPredictions_InGamePrediction*,CUtlMemory<const CMsgDOTASeasonPredictions_InGamePrediction*,int> > *v28; // rbx
  __int64 m_Size; // r12
  int v30; // eax
  const CMsgDOTASeasonPredictions_InGamePrediction **v31; // rax
  int v32; // eax
  int v33; // edx
  __int64 v34; // rbx
  int v35; // r12d
  int v36; // edx
  int *v37; // rax
  int v38; // eax
  int v39; // r12d
  int v40; // eax
  __int64 v41; // rbx
  CUtlVector<int,CUtlMemory<int,int> > *v42; // r13
  int v43; // eax
  __int64 v44; // r14
  __int64 v45; // rax
  __int64 v46; // rbx
  const CMsgDOTASeasonPredictions_InGamePrediction *v47; // r13
  int v48; // eax
  const CMsgDOTASeasonPredictions_InGamePrediction **v49; // rax
  const CMsgDOTASeasonPredictions_InGamePrediction *v50; // rbx
  __int64 v51; // r14
  int v52; // eax
  CDOTAInGamePredictionGameSystem::ActivePredictionDesc_t *v53; // r14
  int v54; // eax
  __int64 v55; // rbx
  __int64 v56; // r15
  int *v57; // rax
  const char *v58; // r12
  CDOTAGameManager *v59; // rax
  int v60; // r12d
  __int64 v61; // r13
  int v62; // eax
  int v63; // eax
  int nRemainingPredictionsa; // [rsp+30h] [rbp-200h]
  signed int nAvailableCount; // [rsp+40h] [rbp-1F0h]
  unsigned __int64 nAvailableCounta; // [rsp+40h] [rbp-1F0h]
  int v70; // [rsp+48h] [rbp-1E8h]
  const CDOTACompendiumDefinition *CompendiumDefinition; // [rsp+50h] [rbp-1E0h]
  int i; // [rsp+60h] [rbp-1D0h]
  int ia; // [rsp+60h] [rbp-1D0h]
  int nHeroID_0; // [rsp+7Ch] [rbp-1B4h] BYREF
  CUtlVector<const CMsgDOTASeasonPredictions_InGamePrediction*,CUtlMemory<const CMsgDOTASeasonPredictions_InGamePrediction*,int> > predictions; // [rsp+80h] [rbp-1B0h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > playerIndices; // [rsp+A0h] [rbp-190h] BYREF
  CUtlVector<const CMsgDOTASeasonPredictions_InGamePrediction*,CUtlMemory<const CMsgDOTASeasonPredictions_InGamePrediction*,int> > availablePredictons[3]; // [rsp+C0h] [rbp-170h] BYREF
  __int64 v80; // [rsp+108h] [rbp-128h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > indices[3]; // [rsp+110h] [rbp-120h] BYREF
  __int64 v82; // [rsp+158h] [rbp-D8h] BYREF
  int nHeroID[52]; // [rsp+160h] [rbp-D0h] BYREF

  m_nLeagueID = this->m_nLeagueID;
  v6 = CDOTACompendiumSchema::Get();
  CompendiumDefinition = CDOTACompendiumSchema::GetCompendiumDefinition(v6, m_nLeagueID);
  v7 = availablePredictons;
  do
  {
    v7->m_Size = 0;
    v8 = v7;
    v7->m_Memory.m_pMemory = 0;
    ++v7;
    v9 = v8 - availablePredictons;
    *(&availablePredictons[0].m_Memory.m_nAllocationCount + v9) = 0;
    *(&availablePredictons[0].m_Memory.m_nGrowSize + v9) = 0;
  }
  while ( v7 != &v80 );
  v70 = CDOTACompendiumDefinition::GetInGamePredictionCount(CompendiumDefinition);
  nAvailableCount = 0;
  if ( v70 > 0 )
  {
    for ( i = 0; i != v70; ++i )
    {
      v10 = CDOTACompendiumDefinition::GetInGamePrediction(CompendiumDefinition, i);
      v11 = v10;
      if ( v10 == pDebugPrediction || pDebugPrediction == 0 )
      {
        v12 = *(v10 + 20);
        if ( v12 > 0 )
        {
          v13 = 0;
          v14 = 8LL * (v12 - 1) + 8;
          while ( 1 )
          {
            v15 = **(*(v11 + 9) + v13);
            v16 = DOTAGameManager();
            nHeroID[0] = CDOTAGameManager::GetHeroIDByName(v16, v15);
            if ( CUtlVectorBase<int,CUtlMemory<int,int>>::Find(heroIDs, nHeroID) != -1 )
              break;
            v13 += 8;
            if ( v13 == v14 )
              goto LABEL_11;
          }
        }
        v28 = &availablePredictons[*(v11 + 24)];
        m_Size = v28->m_Size;
        v30 = v28->m_Size;
        if ( m_Size == v28->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CMsgDOTASeasonPredictions_InGamePrediction const*,int>::Grow(&v28->m_Memory, 1);
          v30 = v28->m_Size;
        }
        v28->m_Size = v30 + 1;
        v31 = &v28->m_Memory.m_pMemory[m_Size];
        if ( v31 != 0 )
          *v31 = v11;
        ++nAvailableCount;
      }
LABEL_11:
      ;
    }
  }
  m_nInGamePredictionCountPerGame = this->m_nInGamePredictionCountPerGame;
  if ( nAvailableCount <= m_nInGamePredictionCountPerGame )
    m_nInGamePredictionCountPerGame = nAvailableCount;
  nRemainingPredictionsa = m_nInGamePredictionCountPerGame;
  if ( m_nInGamePredictionCountPerGame == 0 )
    goto LABEL_66;
  v18 = indices;
  do
  {
    v18->m_Size = 0;
    p_m_Memory = &indices[0].m_Memory;
    v20 = v18;
    v18->m_Memory.m_pMemory = 0;
    ++v18;
    v21 = v20 - indices;
    *(&indices[0].m_Memory.m_nAllocationCount + v21) = 0;
    *(&indices[0].m_Memory.m_nGrowSize + v21) = 0;
  }
  while ( v18 != &v82 );
  v22 = availablePredictons;
  do
  {
    v23 = v22->m_Size;
    v24 = 0;
    if ( v22->m_Size > 0 )
    {
      do
      {
        m_nAllocationCount = p_m_Memory[-1].m_nAllocationCount;
        v27 = p_m_Memory[-1].m_nAllocationCount;
        if ( m_nAllocationCount == p_m_Memory->m_nAllocationCount )
        {
          CUtlMemory<int,int>::Grow(p_m_Memory, 1);
          v27 = p_m_Memory[-1].m_nAllocationCount;
        }
        p_m_Memory[-1].m_nAllocationCount = v27 + 1;
        v25 = &p_m_Memory->m_pMemory[m_nAllocationCount];
        if ( v25 != 0 )
          *v25 = v24;
        ++v24;
      }
      while ( v24 != v23 );
    }
    ++v22;
    p_m_Memory = (p_m_Memory + 24);
  }
  while ( &v80 != v22 );
  CUniformRandomStream::CUniformRandomStream(nHeroID);
  v32 = Plat_MSTime();
  CUniformRandomStream::SetSeed(nHeroID, v32);
  predictions.m_Size = 0;
  predictions.m_Memory.m_pMemory = 0;
  predictions.m_Memory.m_nAllocationCount = 0;
  predictions.m_Memory.m_nGrowSize = 0;
  if ( nRemainingPredictionsa <= 0 )
  {
    CUtlVectorBase<CMsgDOTASeasonPredictions_InGamePrediction const*,CUtlMemory<CMsgDOTASeasonPredictions_InGamePrediction const*,int>>::~CUtlVectorBase(&predictions);
    goto LABEL_65;
  }
  ia = nRemainingPredictionsa;
  do
  {
    playerIndices.m_Size = 0;
    v33 = 0;
    v34 = 0;
    playerIndices.m_Memory.m_pMemory = 0;
    v35 = 0;
    playerIndices.m_Memory.m_nAllocationCount = 0;
    playerIndices.m_Memory.m_nGrowSize = 0;
    while ( 1 )
    {
      v38 = v34;
      if ( v33 == v34 )
      {
        CUtlMemory<int,int>::Grow(&playerIndices.m_Memory, 1);
        v38 = playerIndices.m_Size;
      }
      v36 = v38 + 1;
      playerIndices.m_Size = v38 + 1;
      v37 = &playerIndices.m_Memory.m_pMemory[v34];
      if ( v37 == 0 )
        break;
      *v37 = v35++;
      v34 = playerIndices.m_Size;
      if ( v35 == 3 )
        goto LABEL_40;
LABEL_36:
      v33 = playerIndices.m_Memory.m_nAllocationCount;
    }
    ++v35;
    v34 = v36;
    if ( v35 != 3 )
      goto LABEL_36;
LABEL_40:
    v39 = 3;
    while ( 1 )
    {
      v40 = CUniformRandomStream::RandomInt(nHeroID, 0, v34 - 1);
      v41 = playerIndices.m_Memory.m_pMemory[v40];
      CUtlVectorBase<int,CUtlMemory<int,int>>::FastRemove(&playerIndices, v40);
      v42 = &indices[v41];
      if ( v42->m_Size != 0 )
      {
        v43 = CUniformRandomStream::RandomInt(nHeroID, 0, v42->m_Size - 1);
        v44 = v42->m_Memory.m_pMemory[v43];
        CUtlVectorBase<int,CUtlMemory<int,int>>::FastRemove(v42, v43);
        v45 = v41;
        v46 = predictions.m_Size;
        v47 = availablePredictons[v45].m_Memory.m_pMemory[v44];
        v48 = predictions.m_Size;
        if ( predictions.m_Size == predictions.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CMsgDOTASeasonPredictions_InGamePrediction const*,int>::Grow(&predictions.m_Memory, 1);
          v48 = predictions.m_Size;
        }
        predictions.m_Size = v48 + 1;
        v49 = &predictions.m_Memory.m_pMemory[v46];
        if ( v49 != 0 )
          *v49 = v47;
        if ( --ia == 0 )
          break;
      }
      if ( --v39 == 0 )
        break;
      LODWORD(v34) = playerIndices.m_Size;
    }
    playerIndices.m_Size = 0;
    if ( (playerIndices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<int,int>::Purge(&playerIndices.m_Memory);
      if ( (playerIndices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<int,int>::Purge(&playerIndices.m_Memory);
    }
  }
  while ( ia > 0 );
  nAvailableCounta = 0;
  do
  {
    v50 = predictions.m_Memory.m_pMemory[nAvailableCounta / 8];
    v51 = activePredictons->m_Size;
    v52 = activePredictons->m_Size;
    if ( v51 == activePredictons->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CDOTAInGamePredictionGameSystem::ActivePredictionDesc_t,int>::Grow(&activePredictons->m_Memory, 1);
      v52 = activePredictons->m_Size;
    }
    v53 = &activePredictons->m_Memory.m_pMemory[v51];
    activePredictons->m_Size = v52 + 1;
    v53->m_pPrediction = v50;
    v53->m_nRequiredHeroID = -1;
    v53->m_nRequiredPlayerID = -1;
    v54 = *(v50 + 20);
    if ( v54 > 0 )
    {
      playerIndices.m_Size = 0;
      v55 = 0;
      playerIndices.m_Memory.m_pMemory = 0;
      v56 = 8LL * (v54 - 1) + 8;
      playerIndices.m_Memory.m_nAllocationCount = 0;
      playerIndices.m_Memory.m_nGrowSize = 0;
      do
      {
        v58 = **(*(v53->m_pPrediction + 9) + v55);
        v59 = DOTAGameManager();
        nHeroID_0 = CDOTAGameManager::GetHeroIDByName(v59, v58);
        v60 = CUtlVectorBase<int,CUtlMemory<int,int>>::Find(heroIDs, &nHeroID_0);
        if ( v60 != -1 )
        {
          v61 = playerIndices.m_Size;
          v62 = playerIndices.m_Size;
          if ( playerIndices.m_Size == playerIndices.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<int,int>::Grow(&playerIndices.m_Memory, 1);
            v62 = playerIndices.m_Size;
          }
          playerIndices.m_Size = v62 + 1;
          v57 = &playerIndices.m_Memory.m_pMemory[v61];
          if ( v57 != 0 )
            *v57 = v60;
        }
        v55 += 8;
      }
      while ( v55 != v56 );
      v63 = CUniformRandomStream::RandomInt(nHeroID, 0, playerIndices.m_Size - 1);
      v53->m_nRequiredHeroID = heroIDs->m_Memory.m_pMemory[v63];
      v53->m_nRequiredPlayerID = playerIDs->m_Memory.m_pMemory[v63];
      CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&playerIndices);
    }
    nAvailableCounta += 8LL;
  }
  while ( nAvailableCounta != 8LL * (nRemainingPredictionsa - 1) + 8 );
  CUtlVectorBase<CMsgDOTASeasonPredictions_InGamePrediction const*,CUtlMemory<CMsgDOTASeasonPredictions_InGamePrediction const*,int>>::~CUtlVectorBase(&predictions);
LABEL_65:
  CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&indices[2]);
  CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&indices[1]);
  CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&indices[0]);
LABEL_66:
  CUtlVectorBase<CMsgDOTASeasonPredictions_InGamePrediction const*,CUtlMemory<CMsgDOTASeasonPredictions_InGamePrediction const*,int>>::~CUtlVectorBase(&availablePredictons[2]);
  CUtlVectorBase<CMsgDOTASeasonPredictions_InGamePrediction const*,CUtlMemory<CMsgDOTASeasonPredictions_InGamePrediction const*,int>>::~CUtlVectorBase(&availablePredictons[1]);
  CUtlVectorBase<CMsgDOTASeasonPredictions_InGamePrediction const*,CUtlMemory<CMsgDOTASeasonPredictions_InGamePrediction const*,int>>::~CUtlVectorBase(&availablePredictons[0]);
}


// CDOTAInGamePredictionGameSystem::SelectInGamePredictions  (line 671, @0x00000000025c0d20, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, Add, AddToTail, AllocProto, AssignPathIdToElement, CEntityHandle, CEntityKeyValuesModifyScope, CEntityOwnerPtr, CEntitySpawner, CEntitySpawnerBase, CFieldPath, CHandle, CInGamePredictionNotify, CProtoBufMsg, CSmartPtr, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CVProfScope, Clear, Construct<CDOTAInGamePredictionGameSystem::PredictionInfo_t>, CopyArray, CopyConstruct<InGamePredictionData_t>, CopyConstruct<int>, DOTAGameRules, Element, FreeProto, Get, GetClassInfo, GetEHandle, GetEntityClass, GetEntryIndex, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GetInstance, GetMatchID, GetPathData, GetSerialNumber, GrowMemory, InGamePredictionData_t, Init, InvokeCallbacks, IsEmpty, IsEnabled, IsUsingFixedPaths, LeafCodeInfo_t, Lock, MoveArray, NetworkStateChanged, OnSizeChanged, OverrideAllocator, Path_AddToTail, Path_RemoveAll, Path_SetCount, PerPlayerPredictionInfo_t, PredictionInfo_t, Purge, Push, Remove, RemoveAll, Reserve, Resolve, Set, ShiftElementsLeft, Spawn, Unlock, V_memcpy, V_memmove, add_prediction_ids, memcpy, memmove, operator CEntityInstance*, operator!, operator(), operator->, operator=, operator=<bool>, operator=<unsigned int>, operator[], set_has_hltv_delay, set_has_league_id, set_has_match_id, set_hltv_delay, set_league_id, set_match_id, ~CEntitySpawner, ~CProtoBufMsg, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVProfScope
// calls: CDOTA_PlayerResource::GetAllPlayerIDs, CDOTA_PlayerResource::IsValidTeamPlayer, memmove, CDOTA_PlayerResource::GetSelectedHeroID, CUtlMemory<int, int>::Grow, CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::HasValue, CEntityKeyValues::SetValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get (57 total)
// callers: CDOTAInGamePredictionGameSystem::DebugInGamePrediction, CDOTAInGamePredictionGameSystem::FrameUpdatePostEntityThink, CDOTAInGamePredictionGameSystem::FireGameEvent
// strings: "Networking", "CProtoBufMsg::CProtoBufMsg( MsgType_t )", "Server Simulation", "Spawn", "../../public/tier2/fieldpath.h", "Path_SetCount" (10 total)
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride, GCSDK::CProtoBufMsg<CMsgServerToGCStartCompendiumInGamePredictions>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgServerToGCStartCompendiumInGamePredictions>::s_pMemoryPool
bool __fastcall CDOTAInGamePredictionGameSystem::SelectInGamePredictions(
        CDOTAInGamePredictionGameSystem *const this,
        const CMsgDOTASeasonPredictions_InGamePrediction *pDebugPrediction)
{
  CDOTAInGamePredictionGameSystem::PredictionInfo_t *v2; // r14
  int m_Size; // ebx
  __int64 i; // r12
  int v5; // eax
  unsigned int *v6; // rbx
  int *v7; // rax
  CDOTAInGamePredictionGameSystem::ActivePredictionDesc_t *v8; // r13
  __int64 v9; // r12
  int v10; // eax
  CEntitySystem *v11; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v13; // rdx
  char v14; // al
  CEntityKeyValues *m_pEntityKeyValues; // rdi
  int m_enabled; // r11d
  bool v17; // r14
  const char *m_pszClassname; // rdx
  EntityNetworkingMode_t m_nMode; // r12d
  const char *v20; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v22; // r12
  CEntityIdentity *m_pEntity; // rax
  __int16 v24; // si
  CEntitySpawnerContext<CDOTAInGamePredictionState> *m_pContext; // rbx
  CEntityKeyValues *j; // r13
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v29; // rdi
  uint32 v30; // eax
  const CDOTALobby *LobbyForGame; // rbx
  int v32; // r10d
  bool v33; // r12
  google::protobuf::Message *m_pProtoBufBody; // rax
  uint m_nLeagueID; // edx
  __int64 v36; // rdx
  CMsgServerToGCStartCompendiumInGamePredictions *v37; // rax
  float TVDelay; // xmm0_4
  CMsgServerToGCStartCompendiumInGamePredictions *v39; // rax
  CEntityInstance *v40; // rax
  CEntityInstance *v41; // rbx
  uint v42; // r12d
  __int64 v43; // rax
  __int64 v44; // rbx
  int v45; // eax
  __int64 v46; // rbx
  CDOTAInGamePredictionGameSystem::PredictionInfo_t *v47; // rax
  int v48; // eax
  CEntityInstance *v49; // rbx
  CUtlVectorEmbeddedNetworkVar<InGamePredictionData_t,CDOTAInGamePredictionState::NetworkVar_m_vecPredictions,-1> *v50; // rdi
  CEntityInstance *m_CScriptComponent; // r15
  void (__fastcall *v52)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CEntityPrivateScriptScope *, WorldGroupId_t *); // r12
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  __int64 v54; // rdx
  size_t v55; // rdx
  void **v56; // rsi
  int m_hScope; // r15d
  int v58; // eax
  __int64 v59; // rax
  CEntityInstance *v60; // rax
  FlattenedSerializerHandle_t v61; // rdx
  __int64 v62; // rdx
  size_t v63; // rdx
  void **v64; // rsi
  __int64 m_hScope_low; // rdx
  int (**vptr_IHandleEntity)(...); // rsi
  __int64 v67; // rdx
  int16 v68; // cx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdi
  __int64 v72; // rsi
  bool v73; // bl
  __int64 m_nCount; // rax
  CEntityInstance *v76; // rdi
  __int64 v77; // r12
  CScriptComponent::Storage_t v78; // rax
  _QWORD *m_Id; // rax
  void (__fastcall *v80)(_QWORD); // rdx
  _QWORD *v81; // rdi
  ICombatAnalyzerQueryUpdateNotify *v82; // rax
  CDOTAInGamePredictionGameSystem::PerPlayerPredictionInfo_t *m_pPerPlayerPredictions; // rax
  CDOTAInGamePredictionGameSystem::PerPlayerPredictionInfo_t *v84; // rdx
  __int64 v85; // rcx
  unsigned __int64 v86; // rdx
  CDOTAInGamePredictionGameSystem::PerPlayerPredictionInfo_t *v87; // rax
  int v88; // ecx
  CMsgServerToGCStartCompendiumInGamePredictions *v89; // rbx
  __int64 v90; // rdx
  int v91; // r12d
  void *v92; // rax
  uint32 v93; // eax
  CGCClientSystem *v94; // rax
  google::protobuf::Message *v95; // rsi
  CDOTAInGamePredictionGameSystem::PerPlayerPredictionInfo_t *v96; // rax
  int v97; // eax
  int v98; // edx
  void *v99; // r13
  GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCStartCompendiumInGamePredictions> *v100; // r13
  const google::protobuf::Descriptor *v101; // rax
  const google::protobuf::Descriptor *v102; // rax
  uint32 Int32; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // rdi
  __int64 v108; // rsi
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rdi
  __int64 v112; // rsi
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // rdi
  __int64 v116; // rsi
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // rdi
  __int64 v120; // rsi
  size_t nSize; // [rsp+58h] [rbp-2F8h]
  CHandle<CDOTAInGamePredictionState> *p_m_hPredictionState; // [rsp+70h] [rbp-2E0h]
  int nPlayerCount; // [rsp+8Ch] [rbp-2C4h]
  CEntityPrivateScriptScope *p_m_hPrivateScope; // [rsp+98h] [rbp-2B8h]
  CEntityInstance *v125; // [rsp+A0h] [rbp-2B0h]
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // [rsp+C0h] [rbp-290h]
  uint32 unTargetHigh[2]; // [rsp+C8h] [rbp-288h]
  uint32 unTargetHigha; // [rsp+C8h] [rbp-288h]
  int v131; // [rsp+D0h] [rbp-280h]
  _QWORD v132[2]; // [rsp+E0h] [rbp-270h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > playerIDs; // [rsp+F0h] [rbp-260h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > heroIDs; // [rsp+110h] [rbp-240h] BYREF
  CUtlVector<CDOTAInGamePredictionGameSystem::ActivePredictionDesc_t,CUtlMemory<CDOTAInGamePredictionGameSystem::ActivePredictionDesc_t,int> > activePredictons; // [rsp+130h] [rbp-220h] BYREF
  LeafCodeInfo_t v136; // [rsp+150h] [rbp-200h] BYREF
  void *src[2]; // [rsp+170h] [rbp-1E0h] BYREF
  __int16 v138; // [rsp+180h] [rbp-1D0h]
  char v139; // [rsp+182h] [rbp-1CEh]
  CFieldPath v140; // [rsp+190h] [rbp-1C0h] BYREF
  LeafCodeInfo_t v141; // [rsp+1B0h] [rbp-1A0h] BYREF
  LeafCodeInfo_t v142; // [rsp+1D0h] [rbp-180h] BYREF
  LeafCodeInfo_t v143; // [rsp+1F0h] [rbp-160h] BYREF
  void *v144[2]; // [rsp+210h] [rbp-140h] BYREF
  __int16 v145; // [rsp+220h] [rbp-130h]
  char v146; // [rsp+222h] [rbp-12Eh]
  LeafCodeInfo_t v147; // [rsp+230h] [rbp-120h] BYREF
  GCSDK::CProtoBufMsg<CMsgServerToGCStartCompendiumInGamePredictions> startInGamePredictionsMsg; // [rsp+250h] [rbp-100h] BYREF
  CEntitySpawner<CDOTAInGamePredictionState> spawner; // [rsp+280h] [rbp-D0h] BYREF

  v2 = &g_pDOTAPlayerResource;
  this->m_bRetryStartVoting = 1;
  playerIDs.m_Size = 0;
  playerIDs.m_Memory.m_pMemory = 0;
  playerIDs.m_Memory.m_nAllocationCount = 0;
  playerIDs.m_Memory.m_nGrowSize = 0;
  heroIDs.m_Size = 0;
  heroIDs.m_Memory.m_pMemory = 0;
  heroIDs.m_Memory.m_nAllocationCount = 0;
  heroIDs.m_Memory.m_nGrowSize = 0;
  CDOTA_PlayerResource::GetAllPlayerIDs(g_pDOTAPlayerResource, &playerIDs);
  m_Size = playerIDs.m_Size;
  nPlayerCount = playerIDs.m_Size;
  for ( i = playerIDs.m_Size; --m_Size >= 0; --i )
  {
    if ( !CDOTA_PlayerResource::IsValidTeamPlayer(g_pDOTAPlayerResource, playerIDs.m_Memory.m_pMemory[i - 1]) )
    {
      v5 = playerIDs.m_Size;
      if ( playerIDs.m_Size - m_Size - 1 > 0 )
      {
        memmove(
          &playerIDs.m_Memory.m_pMemory[i - 1],
          &playerIDs.m_Memory.m_pMemory[i],
          4LL * (playerIDs.m_Size - m_Size - 1));
        v5 = playerIDs.m_Size;
      }
      --nPlayerCount;
      playerIDs.m_Size = v5 - 1;
    }
  }
  if ( nPlayerCount > 0 )
  {
    v6 = 0;
    *unTargetHigh = 4LL * (nPlayerCount - 1) + 4;
    p_m_Memory = &heroIDs.m_Memory;
    goto LABEL_13;
  }
LABEL_16:
  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner._vptr_CEntitySpawnerBase = off_4107AF0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner.m_scriptClassName.m_pString = 0;
  spawner._vptr_CEntitySpawnerBase = off_4107B10;
  spawner.m_pContext = 0;
  spawner.m_pSpawnBatch = 0;
  v11 = g_pEntitySystem;
  spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v11->m_entitySpawnerData;
  spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v11);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  v13 = *&SpawnOriginOffset->m_flMatVal[0][2];
  spawner.m_pEntityKeyValues = 0;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v13;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
  spawner.m_pEntityClass = g_pEntityCDOTAInGamePredictionStateClass;
  if ( g_pApplication != 0 )
    v14 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v14 = 0;
  spawner.m_bValidateKeys = v14;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  v131 = -1;
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    m_enabled = g_VProfCurrentProfile.m_enabled;
    v17 = m_enabled != 0;
    if ( m_enabled != 0 )
    {
      CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
      m_pEntityKeyValues = spawner.m_pEntityKeyValues;
    }
    if ( !CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790) )
    {
      m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
      if ( m_pszClassname != 0 )
        CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
    }
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    m_nMode = spawner.m_nMode;
    v20 = CUtlString::Get(&spawner.m_scriptClassName);
    Entity = CEntitySystem::CreateEntity(
               g_pEntitySystem,
               spawner.m_hSpawnGroupHandle,
               spawner.m_pEntityClass,
               v20,
               m_nMode,
               -1,
               -1,
               0,
               0);
    v22 = Entity;
    if ( Entity != 0 )
    {
      m_pEntity = Entity->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v24 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v24 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v131 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v24 & 0x7FFF;
      }
      v132[0] = m_pEntity;
      v132[1] = spawner.m_pEntityKeyValues;
      (*(*g_pGameResourceService + 280LL))(
        g_pGameResourceService,
        spawner.m_hSpawnGroupHandle,
        1,
        v132,
        &spawner.m_mSpawnGroupToWorld);
      CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v22, spawner.m_pEntityKeyValues);
      if ( spawner.m_pSpawnBatch == 0 )
        CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
      m_pContext = spawner.m_pContext;
      for ( j = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
      {
        m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
        pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
        if ( m_pthis != 0 || pfn != 0 )
        {
          v29 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
          if ( (pfn & 1) != 0 )
            pfn = *(pfn + *v29 - 1);
          (pfn)(v29, v22, j);
        }
      }
    }
    if ( v17 )
      CVProfile::ExitScope(&g_VProfCurrentProfile);
    v30 = v131;
  }
  else
  {
    v30 = -1;
  }
  activePredictons.m_Size = 0;
  activePredictons.m_Memory.m_pMemory = 0;
  activePredictons.m_Memory.m_nAllocationCount = 0;
  this->m_hPredictionState.m_Index = v30;
  activePredictons.m_Memory.m_nGrowSize = 0;
  CDOTAInGamePredictionGameSystem::BuildActivePredictions(
    this,
    &playerIDs,
    &heroIDs,
    pDebugPrediction,
    &activePredictons);
  LobbyForGame = CDOTAGamerules::GetLobbyForGame(g_pGameRules);
  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&startInGamePredictionsMsg, 0x1FE4u);
  startInGamePredictionsMsg.m_pProtoBufBody = 0;
  startInGamePredictionsMsg._vptr_CProtoBufMsgBase = &off_4107B30;
  v32 = g_VProfCurrentProfile.m_enabled;
  v33 = v32 != 0;
  if ( v32 != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CProtoBufMsg::CProtoBufMsg( MsgType_t )", 0, "Networking", 0, 4);
  if ( !GCSDK::CProtoBufMsg<CMsgServerToGCStartCompendiumInGamePredictions>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgServerToGCStartCompendiumInGamePredictions>::s_bRegisteredWithMemoryPoolMgr )
    {
      v100 = operator new(0x28u);
      v101 = CMsgServerToGCStartCompendiumInGamePredictions::descriptor();
      unTargetHigha = google::protobuf::internal::ExtensionSet::GetInt32(
                        (v101->options_ + 8),
                        msgpool_hard_limit.number_,
                        msgpool_hard_limit.default_value_);
      v102 = CMsgServerToGCStartCompendiumInGamePredictions::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v102->options_ + 8),
                msgpool_soft_limit.number_,
                msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v100, Int32, unTargetHigha);
      v100->_vptr_CProtoBufMsgMemoryPoolBase = &off_41109D0;
      GCSDK::CProtoBufMsg<CMsgServerToGCStartCompendiumInGamePredictions>::s_pMemoryPool = v100;
      v104 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v104, v100);
      GCSDK::CProtoBufMsg<CMsgServerToGCStartCompendiumInGamePredictions>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgServerToGCStartCompendiumInGamePredictions>::s_pMemoryPool);
  startInGamePredictionsMsg.m_pProtoBufBody = m_pProtoBufBody;
  if ( v33 )
  {
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    m_pProtoBufBody = startInGamePredictionsMsg.m_pProtoBufBody;
  }
  m_nLeagueID = this->m_nLeagueID;
  *(m_pProtoBufBody + 4) |= 1u;
  *(m_pProtoBufBody + 8) = m_nLeagueID;
  v36 = *&g_pGameRules[16].m_szQuestName[88];
  v37 = startInGamePredictionsMsg.m_pProtoBufBody;
  *(startInGamePredictionsMsg.m_pProtoBufBody + 4) |= 2u;
  *(v37 + 3) = v36;
  if ( LobbyForGame != 0 )
    TVDelay = CDOTALobby::GetTVDelay(LobbyForGame);
  else
    TVDelay = 0.0;
  v39 = startInGamePredictionsMsg.m_pProtoBufBody;
  *(startInGamePredictionsMsg.m_pProtoBufBody + 4) |= 4u;
  *(v39 + 9) = TVDelay;
  p_m_hPredictionState = &this->m_hPredictionState;
  v40 = CEntityHandle::operator CEntityInstance *(&this->m_hPredictionState);
  v41 = v40;
  if ( LOBYTE(v40[16].m_pEntity) != 0 )
  {
    (*(v40->_vptr_IHandleEntity + 22))(v40, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    LOBYTE(v41[16].m_pEntity) = 0;
    v41 = CEntityHandle::operator CEntityInstance *(p_m_hPredictionState);
  }
  v42 = this->m_nLeagueID;
  if ( v42 != LODWORD(v41[17].m_CScriptComponent) )
  {
    (*(v41->_vptr_IHandleEntity + 22))(v41, 856, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    LODWORD(v41[17].m_CScriptComponent) = v42;
    v41 = CEntityHandle::operator CEntityInstance *(p_m_hPredictionState);
  }
  if ( BYTE1(v41[16].m_pEntity) != 0 )
  {
    (*(v41->_vptr_IHandleEntity + 22))(v41, 777, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    BYTE1(v41[16].m_pEntity) = 0;
  }
  if ( activePredictons.m_Size > 0 )
  {
    *unTargetHigh = 0;
    v43 = 20LL * nPlayerCount;
    if ( nPlayerCount > 0x660000000000000LL )
      v43 = -1;
    nSize = v43;
    do
    {
      v44 = this->m_activePredictions.m_Size;
      v8 = &activePredictons.m_Memory.m_pMemory[*unTargetHigh];
      v45 = this->m_activePredictions.m_Size;
      if ( v44 == this->m_activePredictions.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CDOTAInGamePredictionGameSystem::PredictionInfo_t,int>::Grow(&this->m_activePredictions.m_Memory, 1);
        v45 = this->m_activePredictions.m_Size;
      }
      v46 = v44;
      this->m_activePredictions.m_Size = v45 + 1;
      v47 = &this->m_activePredictions.m_Memory.m_pMemory[v46];
      if ( v47 != 0 )
      {
        v47->m_nLastSuccessfulPredictionIndex = -1;
        v47->m_pPerPlayerPredictions = 0;
        v47->m_pNotify = 0;
        v2 = &this->m_activePredictions.m_Memory.m_pMemory[v46];
      }
      else
      {
        v2 = 0;
      }
      LOBYTE(p_m_Memory) = 1;
      v125 = CEntitySpawnHelper::gm_pCurEntityPtr;
      v48 = *(v8->m_pPrediction + 9);
      LODWORD(pDebugPrediction) = *(v8->m_pPrediction + 8);
      if ( (v48 & 0xFFFFFFFD) != 1 )
        LOBYTE(p_m_Memory) = v48 == 2;
      v49 = CEntityHandle::operator CEntityInstance *(p_m_hPredictionState);
      p_m_hPrivateScope = &v49[16].m_hPrivateScope;
      if ( BYTE1(v49[17].m_worldGroupId.m_nHashCode) == 0 )
      {
        m_CScriptComponent = v49[16].m_CScriptComponent;
        BYTE1(v49[17].m_worldGroupId.m_nHashCode) = 1;
        if ( m_CScriptComponent != 0 )
        {
          v52 = *(*g_pFlattenedSerializers + 272LL);
          NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_CScriptComponent);
          v52(
            src,
            g_pFlattenedSerializers,
            NetworkSerializerForEntityInstance,
            m_CScriptComponent,
            p_m_hPrivateScope,
            &v49[17].m_worldGroupId);
          if ( &v49[17] != src )
          {
            v54 = v138;
            BYTE2(v49[17].m_hPrivateScope.m_hScope) = 0;
            if ( v54 > 6 )
            {
              if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
                goto LABEL_161;
              while ( 1 )
              {
                if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v111, v112, v109, v110) != 0 )
                  loc_0 = -559038737;
                Plat_ExitProcess(1);
LABEL_161:
                v136.m_szFile = "../../public/tier2/fieldpath.h";
                v136.m_szFunction = "Path_SetCount";
                v136.m_nLine = 442;
                LoggingSystem_Log(
                  LOG_GENERAL,
                  LoggingSeverity_t::LS_ERROR,
                  &v136,
                  "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
                  6);
              }
            }
            LOWORD(v49[17].m_hPrivateScope.m_hScope) = v54;
            if ( v54 > 0 )
            {
              v55 = 2 * v54;
              v56 = src;
              if ( v139 != 0 )
                v56 = src[0];
              memcpy(&v49[17], v56, v55);
            }
          }
        }
        else
        {
          if ( BYTE2(v49[17].m_hPrivateScope.m_hScope) != 0 )
            CUtlVectorEmbeddedNetworkVar<InGamePredictionData_t,CDOTAInGamePredictionState::NetworkVar_m_vecPredictions,-1>::Resolve(v50);
          LOWORD(v49[17].m_hPrivateScope.m_hScope) = 0;
        }
      }
      if ( LOBYTE(v49[17].m_worldGroupId.m_nHashCode) != 0 )
      {
        m_hScope = v49[16].m_hPrivateScope.m_hScope;
        if ( m_hScope != v49[16].m_worldGroupId.m_nHashCode )
          goto LABEL_76;
      }
      else
      {
        EntityInstanceSetNetworkStateChanged(v49[16].m_CScriptComponent);
        m_hScope = v49[16].m_hPrivateScope.m_hScope;
        if ( m_hScope != v49[16].m_worldGroupId.m_nHashCode )
        {
LABEL_76:
          v58 = m_hScope;
          goto LABEL_77;
        }
      }
      CUtlMemory<InGamePredictionData_t,int>::Grow(&v49[16].m_iszPrivateVScripts, 1);
      v58 = v49[16].m_hPrivateScope.m_hScope;
LABEL_77:
      LODWORD(v49[16].m_hPrivateScope.m_hScope) = v58 + 1;
      v59 = v49[16].m_iszPrivateVScripts.u.m_Id + 32LL * m_hScope;
      if ( v59 != 0 )
      {
        *(v59 + 24) = 0;
        *(v59 + 8) = -1;
        *(v59 + 16) = 0;
        *(v59 + 20) = 0;
        *(v59 + 12) = pDebugPrediction;
        *v59 = v125;
        *(v59 + 25) = p_m_Memory;
      }
      if ( BYTE1(v49[17].m_worldGroupId.m_nHashCode) == 0 )
      {
        v60 = v49[16].m_CScriptComponent;
        BYTE1(v49[17].m_worldGroupId.m_nHashCode) = 1;
        if ( v60 != 0 )
        {
          p_m_Memory = v60;
          pDebugPrediction = *(*g_pFlattenedSerializers + 272LL);
          v61 = GetNetworkSerializerForEntityInstance(v60);
          (pDebugPrediction)(v144, g_pFlattenedSerializers, v61, p_m_Memory, p_m_hPrivateScope, &v49[17].m_worldGroupId);
          if ( &v49[17] != v144 )
          {
            v62 = v145;
            BYTE2(v49[17].m_hPrivateScope.m_hScope) = 0;
            if ( v62 > 6 )
            {
              if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
                goto LABEL_166;
              while ( 1 )
              {
                if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v115, v116, v113, v114) != 0 )
                  loc_0 = -559038737;
                Plat_ExitProcess(1);
LABEL_166:
                v143.m_szFile = "../../public/tier2/fieldpath.h";
                v143.m_szFunction = "Path_SetCount";
                v143.m_nLine = 442;
                LoggingSystem_Log(
                  LOG_GENERAL,
                  LoggingSeverity_t::LS_ERROR,
                  &v143,
                  "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
                  6);
              }
            }
            LOWORD(v49[17].m_hPrivateScope.m_hScope) = v62;
            if ( v62 > 0 )
            {
              v63 = 2 * v62;
              v64 = v144;
              if ( v146 != 0 )
                v64 = v144[0];
              memcpy(&v49[17], v64, v63);
            }
          }
        }
        else
        {
          if ( BYTE2(v49[17].m_hPrivateScope.m_hScope) != 0 )
            CUtlVectorEmbeddedNetworkVar<InGamePredictionData_t,CDOTAInGamePredictionState::NetworkVar_m_vecPredictions,-1>::Resolve(0);
          LOWORD(v49[17].m_hPrivateScope.m_hScope) = 0;
        }
      }
      if ( LOBYTE(v49[17].m_worldGroupId.m_nHashCode) == 0 )
      {
        m_hScope_low = SLOWORD(v49[17].m_hPrivateScope.m_hScope);
        v140.m_bUsingExternalPaths = 0;
        v140.m_nCount = 0;
        if ( m_hScope_low > 6 )
        {
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
            goto LABEL_156;
          while ( 1 )
          {
            if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v107, v108, v105, v106) != 0 )
              loc_0 = -559038737;
            Plat_ExitProcess(1);
LABEL_156:
            v142.m_szFile = "../../public/tier2/fieldpath.h";
            v142.m_szFunction = "Path_SetCount";
            v142.m_nLine = 442;
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &v142,
              "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
              6);
          }
        }
        v140.m_nCount = m_hScope_low;
        if ( m_hScope_low <= 0 )
        {
          v68 = m_hScope;
        }
        else
        {
          vptr_IHandleEntity = &v49[17];
          v67 = 2 * m_hScope_low;
          if ( BYTE2(v49[17].m_hPrivateScope.m_hScope) != 0 )
            vptr_IHandleEntity = v49[17]._vptr_IHandleEntity;
          __memcpy_chk(&v140, vptr_IHandleEntity, v67, 24);
          v68 = m_hScope;
          if ( v140.m_bUsingExternalPaths )
          {
            v6 = &LOG_GENERAL;
            if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
            {
              v141.m_szFile = "../../public/tier2/fieldpath.h";
              v141.m_szFunction = "Path_AddToTail";
              v141.m_nLine = 428;
              LoggingSystem_Log(
                LOG_GENERAL,
                LoggingSeverity_t::LS_ERROR,
                &v141,
                "Path_AddToTail failed for read only CFieldPath");
            }
            if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v71, v72, v69, v70) != 0 )
              loc_0 = -559038737;
            Plat_ExitProcess(1);
            while ( 2 )
            {
              if ( pDebugPrediction == 0 )
              {
                v73 = 0;
                goto LABEL_100;
              }
LABEL_14:
              v9 = heroIDs.m_Size;
              v10 = heroIDs.m_Size;
              if ( heroIDs.m_Size == heroIDs.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<int,int>::Grow(p_m_Memory, 1);
                v10 = heroIDs.m_Size;
              }
              heroIDs.m_Size = v10 + 1;
              v7 = &heroIDs.m_Memory.m_pMemory[v9];
              if ( v7 != 0 )
                *v7 = v8;
              if ( ++v6 != *unTargetHigh )
              {
LABEL_13:
                LODWORD(v8) = CDOTA_PlayerResource::GetSelectedHeroID(
                                v2->m_pPrediction,
                                *(playerIDs.m_Memory.m_pMemory + v6));
                if ( v8 < 0 )
                  continue;
                goto LABEL_14;
              }
              goto LABEL_16;
            }
          }
        }
        m_nCount = v140.m_nCount;
        if ( v140.m_nCount > 5 )
        {
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
            goto LABEL_171;
          while ( 1 )
          {
            if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v119, v120, v117, v118) != 0 )
              loc_0 = -559038737;
            Plat_ExitProcess(1);
LABEL_171:
            v147.m_szFile = "../../public/tier2/fieldpath.h";
            v147.m_szFunction = "Path_AddToTail";
            v147.m_nLine = 425;
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &v147,
              "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
              6);
          }
        }
        ++v140.m_nCount;
        v140.u.m_FixedPaths[m_nCount].m_nValue = v68;
        v76 = v49[16].m_CScriptComponent;
        v77 = v49[16].m_iszPrivateVScripts.u.m_Id + 32LL * m_hScope;
        if ( v76 != 0 )
          *(v77 + 8) = EntityInstanceAddChangeAccessorPath(v76, &v140);
        else
          *(v77 + 8) = -1;
        v78 = v49[16].m_CScriptComponent;
        if ( v78 != *v77 )
          *v77 = v78;
      }
      m_Id = v49[17].m_iszPrivateVScripts.u.m_Id;
      if ( m_Id != 0 )
      {
        v80 = m_Id[1];
        v81 = (m_Id[2] + *m_Id);
        if ( (v80 & 1) != 0 )
          v80 = *(v80 + *v81 - 1);
        v80(v81);
      }
      v82 = operator new(0x10u);
      LODWORD(v82[1]._vptr_ICombatAnalyzerQueryUpdateNotify) = m_hScope;
      v82->_vptr_ICombatAnalyzerQueryUpdateNotify = &off_4107850;
      v2->m_pNotify = v82;
      v2->m_pPrediction = v8->m_pPrediction;
      if ( v8->m_nRequiredPlayerID == -1 )
      {
        v2->m_nPerPlayerPredictionCount = nPlayerCount;
        m_pPerPlayerPredictions = operator new[](nSize);
        v84 = m_pPerPlayerPredictions;
        v85 = nPlayerCount - 2LL;
        if ( nPlayerCount != 0 )
        {
          do
          {
            --v85;
            v84->m_nValue = 0;
            ++v84;
            v84[-1].m_nState = CDOTAInGamePredictionGameSystem::PerPlayerPredictionState_t::STATE_IN_PROGRESS;
            v84[-1].m_nQueryID = -1;
          }
          while ( v85 != -2 );
        }
        v86 = 0;
        v2->m_pPerPlayerPredictions = m_pPerPlayerPredictions;
        if ( nPlayerCount > 0 )
        {
          while ( 1 )
          {
            v87 = &m_pPerPlayerPredictions[v86 / 4];
            v87->m_nPlayerID = playerIDs.m_Memory.m_pMemory[v86 / 4];
            v88 = heroIDs.m_Memory.m_pMemory[v86 / 4];
            v86 += 4LL;
            v87->m_nHeroID = v88;
            if ( v86 == 4LL * (nPlayerCount - 1) + 4 )
              break;
            m_pPerPlayerPredictions = v2->m_pPerPlayerPredictions;
          }
        }
      }
      else
      {
        v2->m_nPerPlayerPredictionCount = 1;
        v96 = operator new[](0x14u);
        v96->m_nValue = 0;
        v96->m_nState = CDOTAInGamePredictionGameSystem::PerPlayerPredictionState_t::STATE_IN_PROGRESS;
        v96->m_nQueryID = -1;
        v2->m_pPerPlayerPredictions = v96;
        v96->m_nPlayerID = v8->m_nRequiredPlayerID;
        v96->m_nHeroID = v8->m_nRequiredHeroID;
      }
      v89 = startInGamePredictionsMsg.m_pProtoBufBody;
      v90 = *(startInGamePredictionsMsg.m_pProtoBufBody + 12);
      v91 = *(v8->m_pPrediction + 8);
      if ( v90 == *(startInGamePredictionsMsg.m_pProtoBufBody + 13) )
      {
        v97 = v90 + 1;
        v98 = 2 * v90;
        v99 = *(startInGamePredictionsMsg.m_pProtoBufBody + 5);
        if ( v97 >= v98 )
          v98 = v97;
        if ( v98 < 4 )
          v98 = 4;
        *(startInGamePredictionsMsg.m_pProtoBufBody + 13) = v98;
        v92 = operator new[](4LL * v98);
        *(v89 + 5) = v92;
        v90 = *(v89 + 12);
        if ( v99 != 0 )
        {
          memcpy(v92, v99, 4 * v90);
          operator delete[](v99);
          v92 = *(v89 + 5);
          v90 = *(v89 + 12);
        }
      }
      else
      {
        v92 = *(startInGamePredictionsMsg.m_pProtoBufBody + 5);
      }
      *(v89 + 12) = v90 + 1;
      *(v92 + v90) = v91;
      v93 = unTargetHigh[0];
      ++*unTargetHigh;
    }
    while ( activePredictons.m_Size > (v93 + 1) );
  }
  v94 = GCClientSystem();
  CGCClientSystem::BSendMessage(v94, &startInGamePredictionsMsg);
  CDOTAInGamePredictionGameSystem::StartInGamePredictionAnalysis(this);
  v95 = startInGamePredictionsMsg.m_pProtoBufBody;
  this->m_bRetryStartVoting = 0;
  this->m_bIsVotingOpen = 1;
  startInGamePredictionsMsg._vptr_CProtoBufMsgBase = &off_4107B30;
  if ( v95 != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerToGCStartCompendiumInGamePredictions>::s_pMemoryPool,
      v95);
    startInGamePredictionsMsg.m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&startInGamePredictionsMsg);
  activePredictons.m_Size = 0;
  if ( (activePredictons.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTAInGamePredictionGameSystem::ActivePredictionDesc_t,int>::Purge(&activePredictons.m_Memory);
    if ( (activePredictons.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTAInGamePredictionGameSystem::ActivePredictionDesc_t,int>::Purge(&activePredictons.m_Memory);
  }
  v73 = 1;
  spawner._vptr_CEntitySpawnerBase = off_4107B10;
  CEntitySpawnerBase<CDOTAInGamePredictionState>::~CEntitySpawnerBase(&spawner);
LABEL_100:
  heroIDs.m_Size = 0;
  if ( (heroIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&heroIDs.m_Memory);
    if ( (heroIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&heroIDs.m_Memory);
  }
  CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&playerIDs);
  return v73;
}


// CDOTAInGamePredictionGameSystem::RecursiveReplaceTemplateVariable  (line 777, @0x000000000259dfa0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CMsgDOTASeasonPredictions_QueryKeyValues>::TypeHandler>, Min<int>, SetStringValue, V_strcat_safe<512ul>, V_strlen, V_strncpy<int>, _M_data, atoi, c_str, operator char const*, operator[], query_values
// calls: KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::GetString, CUtlString::Get, V_stristr_fast(char const*,char const*), strlen, V_stricmp_fast, strtol, _V_strncpy, UTIL_VarArgs, _V_strncat, CKeyValues_Data::Internal_SetString (13 total)
// callers: CDOTAInGamePredictionGameSystem::StartInGamePredictionAnalysis
void __fastcall CDOTAInGamePredictionGameSystem::RecursiveReplaceTemplateVariable(
        CDOTAInGamePredictionGameSystem *const this,
        KeyValues *pKV,
        const challenge_template_t *pTemplate,
        const CMsgDOTASeasonPredictions_InGamePrediction *pPrediction,
        const CDOTAInGamePredictionGameSystem::PerPlayerPredictionInfo_t *pInfo)
{
  KeyValues *j; // r13
  const char *v9; // rbx
  int v10; // eax
  __int64 v11; // r15
  __int64 v12; // r13
  int m_nHeroID; // r13d
  int v14; // ecx
  __int64 v15; // rdx
  char *v16; // rax
  __int64 v18; // [rsp+10h] [rbp-270h]
  int i; // [rsp+24h] [rbp-25Ch]
  const char *pszValue; // [rsp+28h] [rbp-258h]
  const char *pszKeyPos; // [rsp+30h] [rbp-250h]
  __int64 v23; // [rsp+38h] [rbp-248h]
  char szTemp[520]; // [rsp+40h] [rbp-240h] BYREF
  unsigned __int64 v25; // [rsp+248h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  for ( j = KeyValues::GetFirstSubKey(pKV); j != 0; j = KeyValues::GetNextKey(j) )
    CDOTAInGamePredictionGameSystem::RecursiveReplaceTemplateVariable(this, j, pTemplate, pPrediction, pInfo);
  v23 = 0;
  for ( i = 0; pTemplate->vecDynamicVars.m_Size > i; ++v23 )
  {
    pszValue = KeyValues::GetString(pKV, 0, "", 0, 0);
    v9 = CUtlString::Get(&pTemplate->vecDynamicVars.m_Memory.m_pMemory[v23].sName);
    pszKeyPos = V_stristr_fast(pszValue, v9);
    if ( pszKeyPos != 0 )
    {
      if ( v9 != 0 )
        v18 = strlen(v9);
      else
        v18 = 0;
      if ( pTemplate->vecDynamicVars.m_Memory.m_pMemory[v23].nFormat == ChallengeVariableFormats_t::CVT_HEROID )
      {
        m_nHeroID = pInfo->m_nHeroID;
      }
      else
      {
        v10 = *(pPrediction + 30);
        if ( v10 <= 0 )
        {
LABEL_21:
          m_nHeroID = 0;
        }
        else
        {
          v11 = 0;
          v12 = 8LL * (v10 - 1) + 8;
          while ( V_stricmp_fast(**(*(*(pPrediction + 14) + v11) + 24LL), v9) != 0 )
          {
            v11 += 8;
            if ( v11 == v12 )
              goto LABEL_21;
          }
          m_nHeroID = strtol(**(*(*(pPrediction + 14) + v11) + 32LL), 0, 10);
        }
      }
      v14 = pszKeyPos - pszValue;
      if ( pszKeyPos == pszValue )
      {
        szTemp[0] = 0;
      }
      else
      {
        v15 = 512;
        if ( v14 <= 511 )
          v15 = v14;
        _V_strncpy(szTemp, pszValue, v15);
      }
      v16 = UTIL_VarArgs("%d", m_nHeroID);
      _V_strncat(szTemp, v16, 512, 0xFFFFFFFFLL);
      _V_strncat(szTemp, &pszKeyPos[v18], 512, 0xFFFFFFFFLL);
      CKeyValues_Data::Internal_SetString(pKV, szTemp);
    }
    ++i;
  }
}


// CDOTAInGamePredictionGameSystem::StartInGamePredictionAnalysis  (line 831, @0x000000000259f2b0, libserver.so)  // inlines: CombatQueryDesc_t, V_isempty, _M_data, c_str, operator[]
// calls: CDOTAInGamePredictionGameSystem::FindCombatAnalyzerTemplateByName, KeyValues::FindKey, CDOTA_PlayerResource::GetPlayer, CDOTA_RealtimeCombatAnalyzer::ParseAndAddQuery, KeyValues::MakeCopy, CDOTAInGamePredictionGameSystem::RecursiveReplaceTemplateVariable, CDOTAInGamePredictionGameSystem::RecomputeQueryValue, KeyValues::deleteThis
// callers: CDOTAInGamePredictionGameSystem::SelectInGamePredictions
void __fastcall CDOTAInGamePredictionGameSystem::StartInGamePredictionAnalysis(
        CDOTAInGamePredictionGameSystem *const this)
{
  CDOTAInGamePredictionGameSystem::PredictionInfo_t *v1; // rbx
  const char *v2; // rdi
  const challenge_template_t *CombatAnalyzerTemplateByName; // rax
  const challenge_template_t *v4; // r15
  KeyValues *Key; // rax
  __int64 v6; // r13
  int v7; // r12d
  const CDOTAInGamePredictionGameSystem::PerPlayerPredictionInfo_t *v8; // r14
  KeyValues *Copy; // r15
  int m_Size; // [rsp+0h] [rbp-B0h]
  KeyValues *pKVToUse; // [rsp+18h] [rbp-98h]
  __int64 v13; // [rsp+20h] [rbp-90h]
  const challenge_template_t *pTemplate; // [rsp+28h] [rbp-88h]
  CombatQueryDesc_t desc; // [rsp+30h] [rbp-80h] BYREF

  v13 = 0;
  m_Size = this->m_activePredictions.m_Size;
  if ( m_Size > 0 )
  {
    do
    {
      v1 = &this->m_activePredictions.m_Memory.m_pMemory[v13];
      v2 = **(v1->m_pPrediction + 13);
      if ( v2 != 0 && *v2 != 0 )
      {
        CombatAnalyzerTemplateByName = CDOTAInGamePredictionGameSystem::FindCombatAnalyzerTemplateByName(v2);
        v4 = CombatAnalyzerTemplateByName;
        if ( CombatAnalyzerTemplateByName != 0 )
        {
          Key = KeyValues::FindKey(CombatAnalyzerTemplateByName->pKeyValues, "events", 0);
          desc.m_pNotify = 0;
          desc.m_bMultiQuery = 0;
          desc.m_pszMultiQueryName = 0;
          desc.m_nProgress = 0;
          desc.m_bRankedQuery = 0;
          desc.m_pszRankedQueryName = 0;
          desc.m_nQueryRank = 1;
          pKVToUse = Key;
          desc.m_pName = **(v1->m_pPrediction + 3);
          desc.m_pNotify = v1->m_pNotify;
          if ( v1->m_nPerPlayerPredictionCount > 0 )
          {
            v6 = 0;
            v7 = 0;
            pTemplate = v4;
            do
            {
              v8 = &v1->m_pPerPlayerPredictions[v6];
              Copy = pKVToUse;
              if ( pTemplate->vecDynamicVars.m_Size != 0 )
              {
                Copy = KeyValues::MakeCopy(pKVToUse);
                CDOTAInGamePredictionGameSystem::RecursiveReplaceTemplateVariable(
                  this,
                  Copy,
                  pTemplate,
                  v1->m_pPrediction,
                  v8);
              }
              desc.m_pPlayer = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, v8->m_nPlayerID);
              if ( desc.m_pPlayer != 0 )
              {
                desc.m_pKV = Copy;
                v8->m_nQueryID = CDOTA_RealtimeCombatAnalyzer::ParseAndAddQuery(&g_DOTARealtimeCombatAnalyzer, &desc);
                if ( pTemplate->vecDynamicVars.m_Size != 0 )
                  KeyValues::deleteThis(Copy);
              }
              ++v7;
              ++v6;
            }
            while ( v1->m_nPerPlayerPredictionCount > v7 );
          }
          CDOTAInGamePredictionGameSystem::RecomputeQueryValue(this, v13);
        }
      }
      ++v13;
    }
    while ( m_Size > v13 );
  }
}


// CDOTAInGamePredictionGameSystem::FindPredictionInfoForQueryID  (line 887, @0x000000000259e250, libserver.so)  // inlines: operator[]
// callers: CDOTAInGamePredictionGameSystem::OnQueryProgressChanged, CDOTAInGamePredictionGameSystem::OnQueryFailed, CDOTAInGamePredictionGameSystem::OnQuerySucceeded
CDOTAInGamePredictionGameSystem::PerPlayerPredictionInfo_t *__fastcall CDOTAInGamePredictionGameSystem::FindPredictionInfoForQueryID(
        CDOTAInGamePredictionGameSystem *const this,
        int nPredictionIndex,
        int nQueryID,
        int *pPerPlayerIndex)
{
  CDOTAInGamePredictionGameSystem::PredictionInfo_t *v4; // rsi
  int m_nPerPlayerPredictionCount; // r10d
  CDOTAInGamePredictionGameSystem::PerPlayerPredictionInfo_t *m_pPerPlayerPredictions; // rax
  int v7; // edi
  __int64 v8; // r9

  v4 = &this->m_activePredictions.m_Memory.m_pMemory[nPredictionIndex];
  m_nPerPlayerPredictionCount = v4->m_nPerPlayerPredictionCount;
  if ( m_nPerPlayerPredictionCount <= 0 )
    return 0;
  m_pPerPlayerPredictions = v4->m_pPerPlayerPredictions;
  v7 = 0;
  v8 = 1;
  if ( m_pPerPlayerPredictions->m_nQueryID != nQueryID )
  {
    while ( ++v7 != m_nPerPlayerPredictionCount )
    {
      if ( m_pPerPlayerPredictions[v8].m_nQueryID == nQueryID )
        goto LABEL_8;
      ++v8;
    }
    return 0;
  }
  v8 = 0;
  v7 = 0;
LABEL_8:
  if ( pPerPlayerIndex != 0 )
  {
    *pPerPlayerIndex = v7;
    m_pPerPlayerPredictions = v4->m_pPerPlayerPredictions;
  }
  return &m_pPerPlayerPredictions[v8];
}


// CDOTAInGamePredictionGameSystem::OnQueryProgressChanged  (line 905, @0x000000000259f4c0, libserver.so)
// calls: CDOTAInGamePredictionGameSystem::FindPredictionInfoForQueryID, CDOTAInGamePredictionGameSystem::RecomputeQueryValue
// callers: CInGamePredictionNotify::OnQueryProgressChanged
void __fastcall CDOTAInGamePredictionGameSystem::OnQueryProgressChanged(
        CDOTAInGamePredictionGameSystem *const this,
        int nPredictionIndex,
        int nQueryID,
        int nProgress)
{
  CDOTAInGamePredictionGameSystem::PerPlayerPredictionInfo_t *PredictionInfoForQueryID; // rax

  PredictionInfoForQueryID = CDOTAInGamePredictionGameSystem::FindPredictionInfoForQueryID(
                               this,
                               nPredictionIndex,
                               nQueryID,
                               0);
  if ( PredictionInfoForQueryID != 0 )
  {
    PredictionInfoForQueryID->m_nValue = nProgress;
    CDOTAInGamePredictionGameSystem::RecomputeQueryValue(this, nPredictionIndex);
  }
}


// CDOTAInGamePredictionGameSystem::OnQueryFailed  (line 917, @0x000000000259f510, libserver.so)
// calls: CDOTAInGamePredictionGameSystem::FindPredictionInfoForQueryID, CDOTAInGamePredictionGameSystem::RecomputeQueryValue
// callers: CInGamePredictionNotify::OnQueryFailed
void __fastcall CDOTAInGamePredictionGameSystem::OnQueryFailed(
        CDOTAInGamePredictionGameSystem *const this,
        int nPredictionIndex,
        int nQueryID)
{
  CDOTAInGamePredictionGameSystem::PerPlayerPredictionInfo_t *PredictionInfoForQueryID; // rax

  PredictionInfoForQueryID = CDOTAInGamePredictionGameSystem::FindPredictionInfoForQueryID(
                               this,
                               nPredictionIndex,
                               nQueryID,
                               0);
  if ( PredictionInfoForQueryID != 0 )
  {
    PredictionInfoForQueryID->m_nState = CDOTAInGamePredictionGameSystem::PerPlayerPredictionState_t::STATE_FAILED;
    PredictionInfoForQueryID->m_nQueryID = -1;
    CDOTAInGamePredictionGameSystem::RecomputeQueryValue(this, nPredictionIndex);
  }
}


// CDOTAInGamePredictionGameSystem::OnQuerySucceeded  (line 930, @0x000000000259f560, libserver.so)  // inlines: operator[]
// calls: CDOTAInGamePredictionGameSystem::FindPredictionInfoForQueryID, CDOTAInGamePredictionGameSystem::RecomputeQueryValue
// callers: CInGamePredictionNotify::OnQuerySucceeded
void __fastcall CDOTAInGamePredictionGameSystem::OnQuerySucceeded(
        CDOTAInGamePredictionGameSystem *const this,
        int nPredictionIndex,
        int nQueryID)
{
  CDOTAInGamePredictionGameSystem::PerPlayerPredictionInfo_t *PredictionInfoForQueryID; // rax

  PredictionInfoForQueryID = CDOTAInGamePredictionGameSystem::FindPredictionInfoForQueryID(
                               this,
                               nPredictionIndex,
                               nQueryID,
                               &this->m_activePredictions.m_Memory.m_pMemory[nPredictionIndex].m_nLastSuccessfulPredictionIndex);
  if ( PredictionInfoForQueryID != 0 )
  {
    PredictionInfoForQueryID->m_nState = CDOTAInGamePredictionGameSystem::PerPlayerPredictionState_t::STATE_SUCCEEDED;
    PredictionInfoForQueryID->m_nQueryID = -1;
    CDOTAInGamePredictionGameSystem::RecomputeQueryValue(this, nPredictionIndex);
  }
}


// CDOTAInGamePredictionGameSystem::ComputeValueForPrediction  (line 943, @0x000000000259e2b0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CMsgDOTASeasonPredictions_Choice>::TypeHandler>, choices
// calls: CDOTA_PlayerResource::GetTeam
// callers: CDOTAInGamePredictionGameSystem::RecomputeQueryValue
// globals: jpt_259E2CD
int __fastcall CDOTAInGamePredictionGameSystem::ComputeValueForPrediction(
        CDOTAInGamePredictionGameSystem *const this,
        const CMsgDOTASeasonPredictions_InGamePrediction *pPrediction,
        int nValue,
        int nPlayerCount,
        const CDOTAInGamePredictionGameSystem::PerPlayerPredictionInfo_t **ppInfos)
{
  int v5; // r14d
  const CDOTAInGamePredictionGameSystem::PerPlayerPredictionInfo_t **v6; // r13
  int **v7; // rbx
  int Team; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  const CDOTAInGamePredictionGameSystem::PerPlayerPredictionInfo_t *v11; // rsi
  int v12; // edi
  __int64 v13; // r8
  __int64 v14; // rax
  _DWORD *v15; // rcx
  int v16; // esi

  switch ( *(pPrediction + 9) )
  {
    case 0:
    case 4:
      v12 = *(pPrediction + 14);
      LODWORD(v9) = nValue;
      if ( v12 != 0 )
      {
        if ( v12 <= 0 )
          goto LABEL_20;
        v13 = *(pPrediction + 6);
        v14 = 0;
        while ( 1 )
        {
          v15 = *(v13 + 8 * v14);
          v16 = v15[4];
          if ( ((v16 & 4) == 0 || nValue >= v15[9]) && ((v16 & 8) == 0 || nValue <= v15[10]) )
            break;
          if ( v12 <= ++v14 )
            goto LABEL_20;
        }
        LODWORD(v9) = v15[8];
      }
      break;
    case 1:
    case 3:
      v10 = 0;
      for ( LODWORD(v9) = 0; nPlayerCount > v10; LODWORD(v9) = (1 << v11->m_nPlayerID) | v9 )
        v11 = ppInfos[v10++];
      break;
    case 2:
      if ( nPlayerCount <= 0 )
        goto LABEL_20;
      v5 = 0;
      v6 = &ppInfos[(nPlayerCount - 1) + 1];
      v7 = ppInfos;
      do
      {
        while ( 1 )
        {
          Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, **v7);
          if ( (Team - 2) <= 1 )
            break;
          if ( ++v7 == v6 )
            goto LABEL_7;
        }
        ++v7;
        v5 |= 1 << Team;
      }
      while ( v7 != v6 );
LABEL_7:
      LODWORD(v9) = v5;
      break;
    case 5:
      v9 = nValue != 0;
      break;
    default:
LABEL_20:
      LODWORD(v9) = 0;
      break;
  }
  return v9;
}


// CDOTAInGamePredictionGameSystem::RecomputeQueryValue  (line 1008, @0x000000000259e810, libserver.so)  // inlines: Element, Get, GetInstance, NetworkStateChanged, Set, V_memset, memset, operator CEntityInstance*, operator->, operator=<InGamePredictionValueState_t>, operator=<int>, operator[]
// calls: CEntityHandle::operator CEntityInstance*, CDOTAInGamePredictionGameSystem::ComputeValueForPrediction, InGamePredictionData_t::NetworkVar_m_nValueState::NetworkStateChanged, CDOTAInGamePredictionGameSystem::PostPredictionResults, CDOTA_PlayerResource::GetTeam, InGamePredictionData_t::NetworkVar_m_nValue::NetworkStateChanged, __stack_chk_fail
// callers: CDOTAInGamePredictionGameSystem::StartInGamePredictionAnalysis, CDOTAInGamePredictionGameSystem::OnQueryProgressChanged, CDOTAInGamePredictionGameSystem::OnQueryFailed, CDOTAInGamePredictionGameSystem::OnQuerySucceeded
// globals: jpt_259E8B9
void __fastcall CDOTAInGamePredictionGameSystem::RecomputeQueryValue(
        CDOTAInGamePredictionGameSystem *const this,
        int nPredictionIndex)
{
  __int64 v2; // r13
  CDOTAInGamePredictionGameSystem::PredictionInfo_t *v4; // rbx
  int m_nPerPlayerPredictionCount; // r15d
  void *v6; // rsp
  CEntityInstance *v7; // rax
  const CMsgDOTASeasonPredictions_InGamePrediction *m_pPrediction; // rsi
  UtlSymLargeId_t v9; // r13
  unsigned __int64 v10; // r14
  __int64 m_nLastSuccessfulPredictionIndex; // rax
  int m_nValue; // eax
  int v13; // edx
  _QWORD *v14; // rdi
  int v15; // r9d
  int v16; // eax
  _QWORD *v17; // rdi
  int v18; // r15d
  CDOTAInGamePredictionGameSystem::PerPlayerPredictionInfo_t *v19; // rax
  CDOTAInGamePredictionGameSystem::PerPlayerPredictionInfo_t *v20; // rdx
  _QWORD *v21; // rdi
  CDOTAInGamePredictionGameSystem::PerPlayerPredictionInfo_t *v22; // rdx
  __int64 v23; // r14
  int v24; // r15d
  int v25; // eax
  int *v26; // rax
  int v27; // ecx
  int v28; // r15d
  int v29; // r14d
  CDOTAInGamePredictionGameSystem::PerPlayerPredictionInfo_t *m_pPerPlayerPredictions; // rdx
  __int64 v31; // rdi
  CDOTAInGamePredictionGameSystem::PerPlayerPredictionInfo_t *v32; // rax
  __int64 v33; // rcx
  CDOTAInGamePredictionGameSystem::PerPlayerPredictionInfo_t *v34; // rdi
  __int64 v35; // rdx
  int v36; // eax
  int v37; // r15d
  CDOTAInGamePredictionGameSystem::PerPlayerPredictionInfo_t *v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // rdx
  int v41; // eax
  int v42; // r9d
  int v43; // r15d
  CDOTAInGamePredictionGameSystem::PerPlayerPredictionInfo_t *v44; // rsi
  __int64 v45; // rcx
  __int64 v46; // rdi
  int v47; // r15d
  int v48; // esi
  int v49; // r9d
  CDOTAInGamePredictionGameSystem::PerPlayerPredictionInfo_t *v50; // rax
  int v51; // edx
  __int64 v52; // rdx
  __int64 v53; // rdi
  int v54; // esi
  CDOTAInGamePredictionGameSystem::PerPlayerPredictionInfo_t *v55; // rax
  int v56; // edx
  __int64 v57; // rdx
  CDOTAInGamePredictionGameSystem::PerPlayerPredictionInfo_t *v58; // rcx
  int v59; // r14d
  CDOTAInGamePredictionGameSystem::PerPlayerPredictionInfo_t *v60; // rax
  __int64 v61; // rdx
  _QWORD *v62; // rdi
  int v63; // eax
  _QWORD *v64; // rdi
  _QWORD *v65; // rdi
  CDOTAInGamePredictionGameSystem::PerPlayerPredictionInfo_t *v66; // rdx
  __int64 v67; // r14
  int v68; // r15d
  int Team; // eax
  int *v70; // rax
  int v71; // ecx
  _QWORD *v72; // rdi
  _QWORD *v73; // rdi
  int v74; // eax
  _QWORD *v75; // rdi
  int v76; // eax
  int v77; // r9d
  _QWORD *v78; // rdi
  _QWORD *v79; // rdi
  int v80; // r15d
  _QWORD *v81; // rdi
  int v82; // eax
  _QWORD *v83; // rdi
  _QWORD *v84; // rdi
  _QWORD *v85; // rdi
  CHandle<CDOTAInGamePredictionState> *nTiedPlayerCount; // [rsp+0h] [rbp-70h]
  int nTiedPlayerCountc; // [rsp+0h] [rbp-70h]
  int nTiedPlayerCountd; // [rsp+0h] [rbp-70h]
  int nTiedPlayerCounta; // [rsp+0h] [rbp-70h]
  int nTiedPlayerCounte; // [rsp+0h] [rbp-70h]
  int nTiedPlayerCountf; // [rsp+0h] [rbp-70h]
  int nTiedPlayerCountb; // [rsp+0h] [rbp-70h]
  int nTiedPlayerCountg; // [rsp+0h] [rbp-70h]
  int nTiedPlayerCounth; // [rsp+0h] [rbp-70h]
  int nTiedPlayerCounti; // [rsp+0h] [rbp-70h]
  int v96; // [rsp+8h] [rbp-68h]
  int v97; // [rsp+8h] [rbp-68h]
  int v98; // [rsp+8h] [rbp-68h]
  int nPredictionIndexa; // [rsp+Ch] [rbp-64h] BYREF
  int pSum[10]; // [rsp+10h] [rbp-60h] BYREF
  unsigned __int64 v101; // [rsp+38h] [rbp-38h]

  v2 = nPredictionIndex;
  nPredictionIndexa = nPredictionIndex;
  v101 = __readfsqword(0x28u);
  v4 = &this->m_activePredictions.m_Memory.m_pMemory[v2];
  nTiedPlayerCount = &this->m_hPredictionState;
  if ( CEntityHandle::operator CEntityInstance *(&this->m_hPredictionState) != 0 )
  {
    m_nPerPlayerPredictionCount = v4->m_nPerPlayerPredictionCount;
    v6 = alloca(((8LL * m_nPerPlayerPredictionCount + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
    v7 = CEntityHandle::operator CEntityInstance *(nTiedPlayerCount);
    m_pPrediction = v4->m_pPrediction;
    v9 = v7[16].m_iszPrivateVScripts.u.m_Id + v2 * 32;
    v10 = pSum & 0xFFFFFFFFFFFFFFEFLL;
    switch ( *(v4->m_pPrediction + 25) )
    {
      case 1:
        if ( m_nPerPlayerPredictionCount <= 0 )
          goto LABEL_22;
        m_pPerPlayerPredictions = v4->m_pPerPlayerPredictions;
        v31 = 0;
        if ( m_pPerPlayerPredictions->m_nState != CDOTAInGamePredictionGameSystem::PerPlayerPredictionState_t::STATE_SUCCEEDED )
        {
          v32 = m_pPerPlayerPredictions + 1;
          v33 = &m_pPerPlayerPredictions[(m_nPerPlayerPredictionCount - 1) + 1];
          do
          {
            if ( v32 == v33 )
              goto LABEL_22;
            v34 = v32;
            m_pPerPlayerPredictions = v32++;
            v31 = v34 - v4->m_pPerPlayerPredictions;
          }
          while ( v32[-1].m_nState != CDOTAInGamePredictionGameSystem::PerPlayerPredictionState_t::STATE_SUCCEEDED );
        }
        *v10 = m_pPerPlayerPredictions;
        v80 = *(&v4->m_pPerPlayerPredictions->m_nValue + v31);
        if ( v80 != *(v9 + 20) )
        {
          v81 = *v9;
          if ( *v9 != 0 && (*(v81[1] + 49LL) & 4) == 0 && *(v9 + 8) != 0xFFFF )
            (*(*v81 + 176LL))(v81, 20, 0xFFFFFFFFLL, *(v9 + 8));
          *(v9 + 20) = v80;
        }
        v82 = CDOTAInGamePredictionGameSystem::ComputeValueForPrediction(
                this,
                v4->m_pPrediction,
                v80,
                1,
                (pSum & 0xFFFFFFFFFFFFFFEFLL));
        if ( v82 != *(v9 + 16) )
        {
          v83 = *v9;
          if ( *v9 != 0 && (*(v83[1] + 49LL) & 4) == 0 && *(v9 + 8) != 0xFFFF )
          {
            nTiedPlayerCounti = v82;
            (*(*v83 + 176LL))(v83, 16, 0xFFFFFFFFLL, *(v9 + 8));
            v82 = nTiedPlayerCounti;
          }
          *(v9 + 16) = v82;
        }
        if ( *(v9 + 24) == 2 )
          goto LABEL_21;
        v84 = *v9;
        if ( *v9 != 0 && (*(v84[1] + 49LL) & 4) == 0 && *(v9 + 8) != 0xFFFF )
          (*(*v84 + 176LL))(v84, 24, 0xFFFFFFFFLL, *(v9 + 8));
        goto LABEL_20;
      case 2:
        if ( m_nPerPlayerPredictionCount <= 0 )
          goto LABEL_22;
        v35 = 0;
        v36 = 0;
        v37 = 0;
        v15 = 0;
        do
        {
          v38 = &v4->m_pPerPlayerPredictions[v35];
          if ( v38->m_nState == CDOTAInGamePredictionGameSystem::PerPlayerPredictionState_t::STATE_IN_PROGRESS
            || (++v37, v4->m_nLastSuccessfulPredictionIndex == v36) )
          {
            v39 = v15++;
            *(v10 + 8 * v39) = v38;
          }
          ++v36;
          ++v35;
        }
        while ( v4->m_nPerPlayerPredictionCount > v36 );
        if ( v15 == 0 )
          goto LABEL_22;
        m_nLastSuccessfulPredictionIndex = v4->m_nLastSuccessfulPredictionIndex;
        if ( m_nLastSuccessfulPredictionIndex < 0 )
        {
          v13 = *(v9 + 20);
        }
        else
        {
          m_nValue = v4->m_pPerPlayerPredictions[m_nLastSuccessfulPredictionIndex].m_nValue;
          v13 = m_nValue;
          if ( m_nValue != *(v9 + 20) )
          {
            v14 = *v9;
            if ( *v9 != 0 && (*(v14[1] + 49LL) & 4) == 0 && *(v9 + 8) != 0xFFFF )
            {
              v96 = m_nValue;
              nTiedPlayerCountc = v15;
              (*(*v14 + 176LL))(v14, 20, 0xFFFFFFFFLL, *(v9 + 8));
              v15 = nTiedPlayerCountc;
              m_nValue = v96;
            }
            *(v9 + 20) = m_nValue;
            v13 = m_nValue;
          }
        }
        v16 = CDOTAInGamePredictionGameSystem::ComputeValueForPrediction(
                this,
                v4->m_pPrediction,
                v13,
                v15,
                (pSum & 0xFFFFFFFFFFFFFFEFLL));
        if ( v16 != *(v9 + 16) )
        {
          v17 = *v9;
          if ( *v9 != 0 && (*(v17[1] + 49LL) & 4) == 0 && *(v9 + 8) != 0xFFFF )
          {
            nTiedPlayerCountd = v16;
            (*(*v17 + 176LL))(v17, 16, 0xFFFFFFFFLL, *(v9 + 8));
            v16 = nTiedPlayerCountd;
          }
          *(v9 + 16) = v16;
        }
        if ( *(v9 + 24) != 1 )
        {
          v85 = *v9;
          if ( *v9 != 0 && (*(v85[1] + 49LL) & 4) == 0 && *(v9 + 8) != 0xFFFF )
            (*(*v85 + 176LL))(v85, 24, 0xFFFFFFFFLL, *(v9 + 8));
          *(v9 + 24) = 1;
        }
        if ( v37 == v4->m_nPerPlayerPredictionCount )
          goto LABEL_19;
        goto LABEL_23;
      case 3:
        if ( m_nPerPlayerPredictionCount <= 0 )
          goto LABEL_22;
        v40 = 0;
        v41 = 0;
        v42 = 0;
        v43 = 0;
        do
        {
          v44 = &v4->m_pPerPlayerPredictions[v40];
          if ( v44->m_nState != CDOTAInGamePredictionGameSystem::PerPlayerPredictionState_t::STATE_IN_PROGRESS )
          {
            ++v42;
          }
          else
          {
            v45 = v43++;
            *(v10 + 8 * v45) = v44;
          }
          ++v41;
          ++v40;
        }
        while ( v4->m_nPerPlayerPredictionCount > v41 );
        if ( v43 == 0 )
          goto LABEL_22;
        v74 = *(*v10 + 4LL);
        if ( v74 != *(v9 + 20) )
        {
          v75 = *v9;
          if ( *v9 != 0 && (*(v75[1] + 49LL) & 4) == 0 && *(v9 + 8) != 0xFFFF )
          {
            v97 = *(*v10 + 4LL);
            nTiedPlayerCountf = v42;
            (*(*v75 + 176LL))(v75, 20, 0xFFFFFFFFLL, *(v9 + 8));
            v42 = nTiedPlayerCountf;
            v74 = v97;
          }
          *(v9 + 20) = v74;
        }
        nTiedPlayerCountb = v42;
        v76 = CDOTAInGamePredictionGameSystem::ComputeValueForPrediction(
                this,
                v4->m_pPrediction,
                v74,
                v43,
                (pSum & 0xFFFFFFFFFFFFFFEFLL));
        v77 = nTiedPlayerCountb;
        if ( v76 != *(v9 + 16) )
        {
          v78 = *v9;
          if ( *v9 != 0 && (*(v78[1] + 49LL) & 4) == 0 && *(v9 + 8) != 0xFFFF )
          {
            v98 = v76;
            (*(*v78 + 176LL))(v78, 16, 0xFFFFFFFFLL, *(v9 + 8));
            v77 = nTiedPlayerCountb;
            v76 = v98;
          }
          *(v9 + 16) = v76;
        }
        if ( *(v9 + 24) != 1 )
        {
          v79 = *v9;
          if ( *v9 != 0 && (*(v79[1] + 49LL) & 4) == 0 && *(v9 + 8) != 0xFFFF )
          {
            nTiedPlayerCountg = v77;
            (*(*v79 + 176LL))(v79, 24, 0xFFFFFFFFLL, *(v9 + 8));
            v77 = nTiedPlayerCountg;
          }
          *(v9 + 24) = 1;
        }
        v18 = v4->m_nPerPlayerPredictionCount;
        if ( v77 != v18 - 1 )
          goto LABEL_24;
LABEL_19:
        InGamePredictionData_t::NetworkVar_m_nValueState::NetworkStateChanged((v9 + 24), -1, -1);
LABEL_20:
        *(v9 + 24) = 2;
LABEL_21:
        CDOTAInGamePredictionGameSystem::PostPredictionResults(this, 1, &nPredictionIndexa);
        goto LABEL_22;
      case 4:
        if ( m_nPerPlayerPredictionCount <= 0 )
          goto LABEL_22;
        v46 = 0;
        v47 = 0;
        v48 = 0;
        v49 = 0;
        do
        {
          v50 = &v4->m_pPerPlayerPredictions[v46];
          if ( v50->m_nState != CDOTAInGamePredictionGameSystem::PerPlayerPredictionState_t::STATE_FAILED )
          {
            v51 = v50->m_nValue;
            if ( v51 > v47 )
            {
              *v10 = v50;
              v47 = v51;
              v49 = 1;
            }
            else if ( v51 == v47 )
            {
              v52 = v49++;
              *(v10 + 8 * v52) = v50;
            }
          }
          ++v48;
          ++v46;
        }
        while ( v4->m_nPerPlayerPredictionCount > v48 );
        if ( v47 <= 0 || v49 <= 0 )
          goto LABEL_22;
        goto LABEL_133;
      case 5:
        if ( m_nPerPlayerPredictionCount <= 0 )
          goto LABEL_22;
        v53 = 0;
        v47 = 0x7FFFFFFF;
        v54 = 0;
        v49 = 0;
        do
        {
          v55 = &v4->m_pPerPlayerPredictions[v53];
          if ( v55->m_nState != CDOTAInGamePredictionGameSystem::PerPlayerPredictionState_t::STATE_FAILED )
          {
            v56 = v55->m_nValue;
            if ( v56 < v47 )
            {
              *v10 = v55;
              v47 = v56;
              v49 = 1;
            }
            else if ( v56 == v47 )
            {
              v57 = v49++;
              *(v10 + 8 * v57) = v55;
            }
          }
          ++v54;
          ++v53;
        }
        while ( v4->m_nPerPlayerPredictionCount > v54 );
        if ( v49 == 0 )
          goto LABEL_22;
LABEL_133:
        if ( v47 != *(v9 + 20) )
        {
          v73 = *v9;
          if ( *v9 != 0 && (*(v73[1] + 49LL) & 4) == 0 && *(v9 + 8) != 0xFFFF )
          {
            nTiedPlayerCounte = v49;
            (*(*v73 + 176LL))(v73, 20, 0xFFFFFFFFLL, *(v9 + 8));
            v49 = nTiedPlayerCounte;
          }
          *(v9 + 20) = v47;
        }
        v63 = CDOTAInGamePredictionGameSystem::ComputeValueForPrediction(
                this,
                v4->m_pPrediction,
                v47,
                v49,
                (pSum & 0xFFFFFFFFFFFFFFEFLL));
        if ( v63 == *(v9 + 16) )
          goto LABEL_99;
        goto LABEL_96;
      case 6:
        if ( m_nPerPlayerPredictionCount <= 0 )
          goto LABEL_22;
        v58 = v4->m_pPerPlayerPredictions;
        v59 = 0;
        v60 = v58 + 1;
        v61 = &v58[(m_nPerPlayerPredictionCount - 1) + 1];
        while ( 1 )
        {
          if ( v58->m_nState != CDOTAInGamePredictionGameSystem::PerPlayerPredictionState_t::STATE_FAILED )
            v59 += v58->m_nValue;
          v58 = v60;
          if ( v60 == v61 )
            break;
          ++v60;
        }
        if ( v59 <= 0 )
          goto LABEL_22;
        if ( v59 != *(v9 + 20) )
        {
          v62 = *v9;
          if ( *v9 != 0 && (*(v62[1] + 49LL) & 4) == 0 && *(v9 + 8) != 0xFFFF )
            (*(*v62 + 176LL))(v62, 20, 0xFFFFFFFFLL, *(v9 + 8));
          *(v9 + 20) = v59;
          m_pPrediction = v4->m_pPrediction;
        }
        v63 = CDOTAInGamePredictionGameSystem::ComputeValueForPrediction(this, m_pPrediction, v59, 0, 0);
        if ( v63 == *(v9 + 16) )
          goto LABEL_99;
LABEL_96:
        v64 = *v9;
        if ( *v9 != 0 && (*(v64[1] + 49LL) & 4) == 0 && *(v9 + 8) != 0xFFFF )
        {
          nTiedPlayerCounth = v63;
          (*(*v64 + 176LL))(v64, 16, 0xFFFFFFFFLL, *(v9 + 8));
          v63 = nTiedPlayerCounth;
        }
        goto LABEL_98;
      case 7:
        memset(pSum, 0, sizeof(pSum));
        if ( m_nPerPlayerPredictionCount > 0 )
        {
          v66 = v4->m_pPerPlayerPredictions;
          v67 = 0;
          v68 = 0;
          do
          {
            if ( v66[v67].m_nState != CDOTAInGamePredictionGameSystem::PerPlayerPredictionState_t::STATE_FAILED )
            {
              Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v66[v67].m_nPlayerID);
              v66 = v4->m_pPerPlayerPredictions;
              pSum[Team] += v66[v67].m_nValue;
            }
            ++v68;
            ++v67;
          }
          while ( v4->m_nPerPlayerPredictionCount > v68 );
        }
        v70 = &pSum[1];
        v71 = 0;
        v28 = 0;
        v29 = 0;
        while ( ++v71 != 10 )
        {
          if ( (v71 - 2) <= 1 )
          {
            if ( *v70 > v29 )
            {
              v29 = *v70;
              v28 = 1 << v71;
            }
            else if ( *v70 == v29 )
            {
              v28 |= 1 << v71;
            }
          }
          ++v70;
        }
        if ( v29 > 0 )
          goto LABEL_119;
        goto LABEL_22;
      case 8:
        memset(pSum, 0, sizeof(pSum));
        if ( m_nPerPlayerPredictionCount > 0 )
        {
          v22 = v4->m_pPerPlayerPredictions;
          v23 = 0;
          v24 = 0;
          do
          {
            if ( v22[v23].m_nState != CDOTAInGamePredictionGameSystem::PerPlayerPredictionState_t::STATE_FAILED )
            {
              v25 = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v22[v23].m_nPlayerID);
              v22 = v4->m_pPerPlayerPredictions;
              pSum[v25] += v22[v23].m_nValue;
            }
            ++v24;
            ++v23;
          }
          while ( v4->m_nPerPlayerPredictionCount > v24 );
        }
        v26 = &pSum[1];
        v27 = 0;
        v28 = 0;
        v29 = 0x7FFFFFFF;
        while ( ++v27 != 10 )
        {
          if ( (v27 - 2) <= 1 )
          {
            if ( v29 > *v26 )
            {
              v29 = *v26;
              v28 = 1 << v27;
            }
            else if ( v29 == *v26 )
            {
              v28 |= 1 << v27;
            }
          }
          ++v26;
        }
LABEL_119:
        if ( v28 == 0 )
          goto LABEL_22;
        if ( v29 != *(v9 + 20) )
        {
          v72 = *v9;
          if ( *v9 != 0 && (*(v72[1] + 49LL) & 4) == 0 && *(v9 + 8) != 0xFFFF )
            (*(*v72 + 176LL))(v72, 20, 0xFFFFFFFFLL, *(v9 + 8));
          *(v9 + 20) = v29;
        }
        if ( *(v4->m_pPrediction + 9) == 2 )
        {
          if ( v28 != *(v9 + 16) )
          {
            InGamePredictionData_t::NetworkVar_m_nValue::NetworkStateChanged((v9 + 16), -1, -1);
            *(v9 + 16) = v28;
          }
        }
        else
        {
          nTiedPlayerCounta = CDOTAInGamePredictionGameSystem::ComputeValueForPrediction(
                                this,
                                v4->m_pPrediction,
                                *(v9 + 20),
                                0,
                                0);
          if ( nTiedPlayerCounta != *(v9 + 16) )
          {
            InGamePredictionData_t::NetworkVar_m_nValue::NetworkStateChanged((v9 + 16), -1, -1);
            v63 = nTiedPlayerCounta;
LABEL_98:
            *(v9 + 16) = v63;
          }
        }
LABEL_99:
        if ( *(v9 + 24) == 1 )
        {
LABEL_23:
          v18 = v4->m_nPerPlayerPredictionCount;
        }
        else
        {
          v65 = *v9;
          if ( *v9 != 0 && (*(v65[1] + 49LL) & 4) == 0 && *(v9 + 8) != 0xFFFF )
            (*(*v65 + 176LL))(v65, 24, 0xFFFFFFFFLL, *(v9 + 8));
          *(v9 + 24) = 1;
          v18 = v4->m_nPerPlayerPredictionCount;
        }
LABEL_24:
        if ( v18 <= 0 )
          goto LABEL_29;
        v19 = v4->m_pPerPlayerPredictions;
        if ( v19->m_nState == CDOTAInGamePredictionGameSystem::PerPlayerPredictionState_t::STATE_IN_PROGRESS )
          return;
        v20 = &v19[v18 - 1];
        break;
      default:
LABEL_22:
        if ( *(v9 + 24) != 2 )
          goto LABEL_23;
        return;
    }
    while ( v19 != v20 )
    {
      ++v19;
      if ( v19->m_nState == CDOTAInGamePredictionGameSystem::PerPlayerPredictionState_t::STATE_IN_PROGRESS )
        return;
    }
LABEL_29:
    v21 = *v9;
    if ( *v9 != 0 && (*(v21[1] + 49LL) & 4) == 0 && *(v9 + 8) != 0xFFFF )
      (*(*v21 + 176LL))(v21, 24, 0xFFFFFFFFLL, *(v9 + 8));
    *(v9 + 24) = 2;
    CDOTAInGamePredictionGameSystem::PostPredictionResults(this, 1, &nPredictionIndexa);
  }
}


// CDOTAInGamePredictionGameSystem::ClearQueries  (line 1298, @0x000000000259e3f0, libserver.so)  // inlines: operator[]
// calls: CDOTA_RealtimeCombatAnalyzer::RemoveQueryByID
// callers: CDOTAInGamePredictionGameSystem::PostPredictionResults, CDOTAInGamePredictionGameSystem::GameDeactivate
void __fastcall CDOTAInGamePredictionGameSystem::ClearQueries(
        CDOTAInGamePredictionGameSystem *const this,
        int nPredictionIndex)
{
  int v2; // r13d
  __int64 v3; // rbx
  CDOTAInGamePredictionGameSystem::PredictionInfo_t *v4; // r12
  int m_nQueryID; // esi

  v2 = 0;
  v3 = 0;
  v4 = &this->m_activePredictions.m_Memory.m_pMemory[nPredictionIndex];
  if ( v4->m_nPerPlayerPredictionCount > 0 )
  {
    do
    {
      m_nQueryID = v4->m_pPerPlayerPredictions[v3].m_nQueryID;
      if ( m_nQueryID != -1 )
      {
        CDOTA_RealtimeCombatAnalyzer::RemoveQueryByID(&g_DOTARealtimeCombatAnalyzer, m_nQueryID);
        v4->m_pPerPlayerPredictions[v3].m_nQueryID = -1;
      }
      ++v2;
      ++v3;
    }
    while ( v4->m_nPerPlayerPredictionCount > v2 );
  }
}


// CDOTAInGamePredictionGameSystem::PostPredictionResults  (line 1312, @0x000000000259e470, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CMsgServerToGCCompendiumInGamePredictionResults_PredictionResult>::TypeHandler>, AllocProto, CProtoBufMsg, CVProfScope, Element, FreeProto, Get, GetEntityIdentity, GetEntryIndex, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GetInstance, GetMatchID, IndexToIdentity, IsEnabled, IsValid, Lock, LookupEntity, New, Unlock, add_results, operator CEntityInstance*, operator->, operator[], set_has_match_id, set_has_prediction_id, set_has_prediction_value, set_has_prediction_value_is_mask, set_match_id, set_prediction_id, set_prediction_value, set_prediction_value_is_mask, ~CProtoBufMsg, ~CVProfScope
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, CVProfile::EnterScope, pthread_mutex_lock, operator new, CMsgServerToGCCompendiumInGamePredictionResults::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, CMsgServerToGCCompendiumInGamePredictionResults_PredictionResult::CMsgServerToGCCompendiumInGamePredictionResults_PredictionResult (22 total)
// callers: CDOTAInGamePredictionGameSystem::RecomputeQueryValue, CDOTAInGamePredictionGameSystem::FinalizeInGamePredictions
// strings: "Networking", "CProtoBufMsg::CProtoBufMsg( MsgType_t )"
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCCompendiumInGamePredictionResults>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgServerToGCCompendiumInGamePredictionResults>::s_pMemoryPool, CEntityHandle::gm_pEntityList
void __fastcall CDOTAInGamePredictionGameSystem::PostPredictionResults(
        CDOTAInGamePredictionGameSystem *const this,
        int nCount,
        const int *pPredictionIndices)
{
  int m_enabled; // r10d
  bool v7; // r12
  GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCompendiumInGamePredictionResults> *v8; // r15
  const google::protobuf::Descriptor *v9; // rax
  const google::protobuf::Descriptor *v10; // rax
  uint32 Int32; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v12; // rax
  google::protobuf::Message *m_pProtoBufBody; // rax
  __int64 v14; // rdx
  CMsgServerToGCCompendiumInGamePredictionResults_PredictionResult *v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  int v19; // edx
  uint32 m_Index; // eax
  CEntityInstance *m_pInstance; // rcx
  CEntityIdentity *v22; // rdx
  CEntityIdentity *v23; // rdx
  CMsgServerToGCCompendiumInGamePredictionResults *v24; // r12
  __int64 v25; // rbx
  __int64 v26; // rax
  int v27; // esi
  __int64 v28; // rdx
  CGCClientSystem *v29; // rax
  uint32 unTargetHigha; // [rsp+8h] [rbp-68h]
  const int *unTargetHigh; // [rsp+8h] [rbp-68h]
  GCSDK::CProtoBufMsg<CMsgServerToGCCompendiumInGamePredictionResults> inGamePredictionResultMsg; // [rsp+10h] [rbp-60h] BYREF

  if ( nCount != 0 )
  {
    GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&inGamePredictionResultMsg, 0x1FE6u);
    inGamePredictionResultMsg.m_pProtoBufBody = 0;
    inGamePredictionResultMsg._vptr_CProtoBufMsgBase = &off_4107B70;
    m_enabled = g_VProfCurrentProfile.m_enabled;
    v7 = m_enabled != 0;
    if ( m_enabled != 0 )
      CVProfile::EnterScope(&g_VProfCurrentProfile, "CProtoBufMsg::CProtoBufMsg( MsgType_t )", 0, "Networking", 0, 4);
    if ( !GCSDK::CProtoBufMsg<CMsgServerToGCCompendiumInGamePredictionResults>::s_bRegisteredWithMemoryPoolMgr )
    {
      pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
      if ( !GCSDK::CProtoBufMsg<CMsgServerToGCCompendiumInGamePredictionResults>::s_bRegisteredWithMemoryPoolMgr )
      {
        v8 = operator new(0x28u);
        v9 = CMsgServerToGCCompendiumInGamePredictionResults::descriptor();
        unTargetHigha = google::protobuf::internal::ExtensionSet::GetInt32(
                          (v9->options_ + 8),
                          msgpool_hard_limit.number_,
                          msgpool_hard_limit.default_value_);
        v10 = CMsgServerToGCCompendiumInGamePredictionResults::descriptor();
        Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                  (v10->options_ + 8),
                  msgpool_soft_limit.number_,
                  msgpool_soft_limit.default_value_);
        GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v8, Int32, unTargetHigha);
        v8->_vptr_CProtoBufMsgMemoryPoolBase = &off_4110A10;
        GCSDK::CProtoBufMsg<CMsgServerToGCCompendiumInGamePredictionResults>::s_pMemoryPool = v8;
        v12 = GCSDK::GProtoBufMsgMemoryPoolMgr();
        GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v12, v8);
        GCSDK::CProtoBufMsg<CMsgServerToGCCompendiumInGamePredictionResults>::s_bRegisteredWithMemoryPoolMgr = 1;
      }
      pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    }
    m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgServerToGCCompendiumInGamePredictionResults>::s_pMemoryPool);
    inGamePredictionResultMsg.m_pProtoBufBody = m_pProtoBufBody;
    if ( v7 )
    {
      CVProfile::ExitScope(&g_VProfCurrentProfile);
      m_pProtoBufBody = inGamePredictionResultMsg.m_pProtoBufBody;
    }
    v14 = *&g_pGameRules[16].m_szQuestName[88];
    *(m_pProtoBufBody + 4) |= 1u;
    *(m_pProtoBufBody + 3) = v14;
    if ( nCount > 0 )
    {
      unTargetHigh = &pPredictionIndices[nCount - 1 + 1];
      do
      {
        m_Index = this->m_hPredictionState.m_Index;
        m_pInstance = 0;
        if ( m_Index + 2 > 1 )
        {
          v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPredictionState.m_Index) >> 9) & 0x3F];
          if ( v22 != 0 )
          {
            v23 = &v22[this->m_hPredictionState.m_Index & 0x1FF];
            if ( v23 != 0 && m_Index == v23->m_EHandle.m_Index )
              m_pInstance = v23->m_pInstance;
          }
        }
        v24 = inGamePredictionResultMsg.m_pProtoBufBody;
        v25 = m_pInstance[16].m_iszPrivateVScripts.u.m_Id + 32LL * *pPredictionIndices;
        v26 = *(inGamePredictionResultMsg.m_pProtoBufBody + 10);
        v27 = *(inGamePredictionResultMsg.m_pProtoBufBody + 11);
        if ( v26 >= v27 )
        {
          if ( v27 == *(inGamePredictionResultMsg.m_pProtoBufBody + 12) )
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
              (inGamePredictionResultMsg.m_pProtoBufBody + 32),
              v27 + 1);
          v15 = operator new(0x28u);
          CMsgServerToGCCompendiumInGamePredictionResults_PredictionResult::CMsgServerToGCCompendiumInGamePredictionResults_PredictionResult(v15);
          v16 = *(v24 + 10);
          v17 = *(v24 + 4);
          ++*(v24 + 11);
          *(v24 + 10) = v16 + 1;
          *(v17 + 8 * v16) = v15;
        }
        else
        {
          v28 = *(inGamePredictionResultMsg.m_pProtoBufBody + 4);
          *(inGamePredictionResultMsg.m_pProtoBufBody + 10) = v26 + 1;
          v15 = *(v28 + 8 * v26);
        }
        v18 = *(v15 + 4);
        *(v15 + 6) = *(v25 + 12);
        *(v15 + 4) = v18 | 1;
        v19 = *(v25 + 16);
        *(v15 + 4) = v18 | 3;
        *(v15 + 7) = v19;
        LOBYTE(v19) = *(v25 + 25);
        *(v15 + 4) = v18 | 7;
        *(v15 + 32) = v19;
        CDOTAInGamePredictionGameSystem::ClearQueries(this, *pPredictionIndices++);
      }
      while ( pPredictionIndices != unTargetHigh );
    }
    v29 = GCClientSystem();
    CGCClientSystem::BSendMessage(v29, &inGamePredictionResultMsg);
    inGamePredictionResultMsg._vptr_CProtoBufMsgBase = &off_4107B70;
    if ( inGamePredictionResultMsg.m_pProtoBufBody != 0 )
    {
      GCSDK::CProtoBufMsgMemoryPoolBase::Free(
        GCSDK::CProtoBufMsg<CMsgServerToGCCompendiumInGamePredictionResults>::s_pMemoryPool,
        inGamePredictionResultMsg.m_pProtoBufBody);
      inGamePredictionResultMsg.m_pProtoBufBody = 0;
    }
    GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&inGamePredictionResultMsg);
  }
}


// CDOTAInGamePredictionGameSystem::FinalizeInGamePredictions  (line 1336, @0x000000000259f5b0, libserver.so)  // inlines: Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator CEntityInstance*, operator->, operator=<InGamePredictionValueState_t>, operator=<bool>, operator[]
// calls: CEntityHandle::operator CEntityInstance*, CDOTAInGamePredictionGameSystem::PostPredictionResults, __stack_chk_fail
// callers: CDOTAInGamePredictionGameSystem::FireGameEvent
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTAInGamePredictionGameSystem::FinalizeInGamePredictions(CDOTAInGamePredictionGameSystem *const this)
{
  CEntityInstance *v2; // rax
  int m_hScope; // r9d
  void *v4; // rsp
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rbx
  int v8; // eax
  _QWORD *v9; // rdi
  uint32 m_Index; // eax
  CEntityInstance *m_pInstance; // rdx
  CEntityIdentity *v12; // rcx
  CEntityIdentity *v13; // rcx
  CEntityInstance *v14; // rax
  CEntityInstance *v15; // rbx
  int v16; // [rsp+0h] [rbp-50h]
  int nIndexCount; // [rsp+4h] [rbp-4Ch]
  CHandle<CDOTAInGamePredictionState> *p_m_hPredictionState; // [rsp+8h] [rbp-48h]
  _QWORD v19[8]; // [rsp+10h] [rbp-40h] BYREF

  v19[1] = __readfsqword(0x28u);
  p_m_hPredictionState = &this->m_hPredictionState;
  v2 = CEntityHandle::operator CEntityInstance *(&this->m_hPredictionState);
  if ( v2 != 0 )
  {
    m_hScope = v2[16].m_hPrivateScope.m_hScope;
    v4 = alloca(((4LL * m_hScope + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
    if ( m_hScope <= 0 )
    {
      LODWORD(v6) = 0;
    }
    else
    {
      v5 = 0;
      v6 = 0;
      do
      {
        m_Index = this->m_hPredictionState.m_Index;
        m_pInstance = 0;
        if ( m_Index + 2 > 1 )
        {
          v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPredictionState.m_Index) >> 9) & 0x3F];
          if ( v12 != 0 )
          {
            v13 = &v12[this->m_hPredictionState.m_Index & 0x1FF];
            if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
              m_pInstance = v13->m_pInstance;
          }
        }
        v7 = m_pInstance[16].m_iszPrivateVScripts.u.m_Id + 32 * v5;
        if ( *(v7 + 24) != 2 )
        {
          *((v19 & 0xFFFFFFFFFFFFFFEFLL) + 4 * v6) = v5;
          v8 = v6 + 1;
          v6 = v6 + 1;
          if ( *(v7 + 24) != 2 )
          {
            v9 = *v7;
            if ( *v7 != 0 && (*(v9[1] + 49LL) & 4) == 0 && *(v7 + 8) != 0xFFFF )
            {
              v16 = m_hScope;
              nIndexCount = v8;
              (*(*v9 + 176LL))(v9, 24, 0xFFFFFFFFLL, *(v7 + 8));
              v8 = nIndexCount;
              m_hScope = v16;
            }
            *(v7 + 24) = 2;
            v6 = v8;
          }
        }
        ++v5;
      }
      while ( m_hScope > v5 );
    }
    v14 = CEntityHandle::operator CEntityInstance *(p_m_hPredictionState);
    v15 = v14;
    if ( BYTE1(v14[16].m_pEntity) != 1 )
    {
      (*(v14->_vptr_IHandleEntity + 22))(v14, 777, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      BYTE1(v15[16].m_pEntity) = 1;
    }
    CDOTAInGamePredictionGameSystem::PostPredictionResults(this, v6, (v19 & 0xFFFFFFFFFFFFFFEFLL));
  }
}


// dota_test_in_game_prediction  (line 1358, @0x00000000025c2270, libserver.so)  // inlines: Arg, operator[]
// calls: V_atoi, CDOTACompendiumSchema::Get, CDOTACompendiumSchema::GetCompendiumDefinition, CDOTACompendiumDefinition::FindInGamePredictionByName, CDOTAInGamePredictionGameSystem::DebugInGamePrediction, Msg
// strings: "dota_test_in_game_prediction: Unknown prediction %s for league ID %d\n", "Format: dota_test_in_game_prediction <league id> <challenge name>\n", "dota_test_in_game_prediction: Unknown league ID %d\n"
// globals: g_pDOTAInGamePredictionGameSystem
void __fastcall dota_test_in_game_prediction(const CCommandContext *const ctx, const CCommand *const args)
{
  uint32 v3; // r12d
  CDOTACompendiumSchema_0 *v4; // rax
  const CDOTACompendiumDefinition *CompendiumDefinition; // rdi
  const CMsgDOTASeasonPredictions_InGamePrediction *v6; // rax
  const char *v7; // rsi

  if ( args->m_nArgc <= 2 )
  {
    Msg("Format: dota_test_in_game_prediction <league id> <challenge name>\n");
  }
  else
  {
    v3 = V_atoi(args->m_ppArgv[1]);
    v4 = CDOTACompendiumSchema::Get();
    CompendiumDefinition = CDOTACompendiumSchema::GetCompendiumDefinition(v4, v3);
    if ( CompendiumDefinition != 0 )
    {
      if ( args->m_nArgc > 2 )
      {
        v6 = CDOTACompendiumDefinition::FindInGamePredictionByName(CompendiumDefinition, args->m_ppArgv[2]);
        if ( v6 != 0 )
          goto LABEL_5;
      }
      else
      {
        v6 = CDOTACompendiumDefinition::FindInGamePredictionByName(CompendiumDefinition, "");
        if ( v6 != 0 )
        {
LABEL_5:
          CDOTAInGamePredictionGameSystem::DebugInGamePrediction(g_pDOTAInGamePredictionGameSystem, v3, v6);
          return;
        }
      }
      v7 = "";
      if ( args->m_nArgc > 2 )
        v7 = args->m_ppArgv[2];
      Msg("dota_test_in_game_prediction: Unknown prediction %s for league ID %d\n", v7, v3);
    }
    else
    {
      Msg("dota_test_in_game_prediction: Unknown league ID %d\n", v3);
    }
  }
}


