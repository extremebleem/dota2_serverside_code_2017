// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_fow_temp_viewers.cpp:27
struct TempViewerInfo_t {
	class NetworkVar_m_nGridX {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nGridY {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nRadius {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nViewerType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bObstructedVision {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bValid {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.TempViewerInfo_t;  // +0x0
private:

	bool m_bDirty;  // +0x23
	float flEndTime;  // +0x24
	int nFoWID;  // +0x28
	EHANDLE hOwner;  // +0x2c
	typedef TempViewerInfo_t ThisClass;
	~TempViewerInfo_t();
	TempViewerInfo_t(TempViewerInfo_t &);
	TempViewerInfo_t(const TempViewerInfo_t &);

	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	void NetworkStateChangedLog(const char *, const char *);
	TempViewerInfo_t();
	void MarkInvalid();
	void InitializeTempViewer(FoWViewerType_t, int, int, bool, float *);
	TempViewerInfo_t & operator=(const TempViewerInfo_t &);

	// vtable[0] Schema_DynamicBinding
	// sizeof = 48
};

// src/game/shared/dota/dota_fow_temp_viewers.cpp:103
class CDOTAFogOfWarTempViewers : public CBaseEntity {
	class NetworkVar_m_FoWTempViewerVersion {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_TempViewerInfo {
		typedef ThisClass OuterClass_t;
		OuterClass_t * GetOuter(void *);
		void NetworkStateChanged(void *);

		// sizeof = 1
	};
	typedef CDOTAFogOfWarTempViewers ThisClass;

public:

private:

	float m_flEndTimeMin;  // +0x358

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
	CDOTAFogOfWarTempViewers(CDOTAFogOfWarTempViewers &);
	CDOTAFogOfWarTempViewers(CDOTAFogOfWarTempViewers &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTAFogOfWarTempViewers();
	virtual int ObjectCaps();
	virtual void Spawn(const CEntityKeyValues *);
	virtual int ShouldTransmit(const CGameCheckTransmitInfo *);
	void ThinkUpdateFogOfWar();
	void AddTempViewer(CBaseModelEntity *, int, float, float);
	int AddTempViewer(FoWViewerType_t, int, const Vector &, float, float, bool);
	void RemoveTempViewer(int);
	virtual ~CDOTAFogOfWarTempViewers();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[19] ObjectCaps
	// vtable[8] Spawn
	// vtable[65] ShouldTransmit
	// sizeof = 896
};

// src/game/shared/dota/dota_fow_temp_viewers.cpp:146
class C_CDOTAFogOfWarTempViewers_MapInstall {
	C_CDOTAFogOfWarTempViewers_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// TempViewerInfo_t::Schema_DynamicBinding  (line 30, @0x00000000025527f0, libserver.so)
// globals: TempViewerInfo_t::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall TempViewerInfo_t::Schema_DynamicBinding(const TempViewerInfo_t *const this)
{
  return TempViewerInfo_t::s_pSchemaBinding;
}


// TempViewerInfo_t::TempViewerInfo_t  (line 63, @0x00000000024c1eb0, libserver.so)  // inlines: CEntityOwnerPtr, CNetworkVarBase, CSmartPtr, ChangeAccessorFieldPathIndex_t, EnsureValidValue<bool>, EnsureValidValue<int>, EnsureValidValue<signed char>, Set, operator=
// callers: CSchemaClassBinding<TempViewerInfo_t>::Allocate, CSchemaClassBinding<TempViewerInfo_t>::ConstructInPlace, CSchemaUtlVectorManipulator<CUtlVector<TempViewerInfo_t, CNetworkUtlVector_MemoryType<TempViewerInfo_t, -1> >, TempViewerInfo_t>::SwapItems, CSchemaClassBinding<TempViewerInfo_t>::AllocateAndCopyConstruct, CUtlVectorBase<TempViewerInfo_t, CNetworkUtlVector_MemoryType<TempViewerInfo_t, -1> >::SetCount, CSchemaUtlVectorManipulator<CUtlVector<TempViewerInfo_t, CNetworkUtlVector_MemoryType<TempViewerInfo_t, -1> >, TempViewerInfo_t>::InsertMultipleBefore
void __fastcall TempViewerInfo_t::TempViewerInfo_t(TempViewerInfo_t *const this)
{
  CEntityInstance *v1; // rax

  this->_vptr_TempViewerInfo_t = &off_40F81A0;
  this->m_nGridX.m_Value = 0;
  this->m_nGridY.m_Value = 0;
  this->m_nRadius.m_Value = 0;
  v1 = CEntitySpawnHelper::gm_pCurEntityPtr;
  this->m_nViewerType.m_Value = 0;
  this->m_bObstructedVision.m_Value = 0;
  this->m_bValid.m_Value = 0;
  this->m_bDirty = 0;
  this->__m_pChainEntity.m_pObj = v1;
  this->__m_PathIndex.m_Value = -1;
  this->flEndTime = 0.0;
  this->nFoWID = -1;
  this->hOwner.m_Index = -1;
}


// TempViewerInfo_t::MarkInvalid  (line 77, @0x00000000024c1f20, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=, operator=<bool>
// callers: CDOTAFogOfWarTempViewers::ThinkUpdateFogOfWar
void __fastcall TempViewerInfo_t::MarkInvalid(TempViewerInfo_t *const this)
{
  CEntityInstance *m_pObj; // rdi

  if ( this->m_bValid.m_Value )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 34, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
    this->m_bValid.m_Value = 0;
  }
  this->flEndTime = 0.0;
  this->nFoWID = -1;
  this->hOwner.m_Index = -1;
}


// TempViewerInfo_t::InitializeTempViewer  (line 85, @0x00000000024c1f90, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator=<FoWViewerType_t>, operator=<bool>, operator=<int>
// callers: CDOTAFogOfWarTempViewers::AddTempViewer
void __fastcall TempViewerInfo_t::InitializeTempViewer(
        TempViewerInfo_t *const this,
        FoWViewerType_t FoWViewerType,
        int nGridX,
        int nGridY,
        bool bObstructedVision,
        float *pflRadius)
{
  char v6; // r15
  int v10; // r12d
  CEntityInstance *m_pObj; // rdi
  CEntityInstance *v12; // rdi
  CEntityInstance *v13; // rdi
  CEntityInstance *v14; // rdi
  CEntityInstance *v15; // rdi
  CEntityInstance *v16; // rdi
  bool v17; // [rsp+Ch] [rbp-34h]
  bool v18; // [rsp+Ch] [rbp-34h]
  bool v19; // [rsp+Ch] [rbp-34h]
  bool v20; // [rsp+Ch] [rbp-34h]
  bool v21; // [rsp+Ch] [rbp-34h]
  bool v22; // [rsp+Ch] [rbp-34h]

  v6 = FoWViewerType;
  v10 = 10 * (*pflRadius / 10.0);
  *pflRadius = v10;
  if ( !this->m_bValid.m_Value )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      v17 = bObstructedVision;
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 34, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      bObstructedVision = v17;
    }
    this->m_bValid.m_Value = 1;
  }
  if ( v6 != this->m_nViewerType.m_Value )
  {
    v12 = this->__m_pChainEntity.m_pObj;
    if ( v12 != 0 && (v12->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      v18 = bObstructedVision;
      (*(v12->_vptr_IHandleEntity + 22))(v12, 32, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      bObstructedVision = v18;
    }
    this->m_nViewerType.m_Value = v6;
  }
  if ( nGridX != this->m_nGridX.m_Value )
  {
    v13 = this->__m_pChainEntity.m_pObj;
    if ( v13 != 0 && (v13->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      v19 = bObstructedVision;
      (*(v13->_vptr_IHandleEntity + 22))(v13, 20, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      bObstructedVision = v19;
    }
    this->m_nGridX.m_Value = nGridX;
  }
  if ( nGridY != this->m_nGridY.m_Value )
  {
    v14 = this->__m_pChainEntity.m_pObj;
    if ( v14 != 0 && (v14->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      v20 = bObstructedVision;
      (*(v14->_vptr_IHandleEntity + 22))(v14, 24, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      bObstructedVision = v20;
    }
    this->m_nGridY.m_Value = nGridY;
  }
  if ( v10 != this->m_nRadius.m_Value )
  {
    v15 = this->__m_pChainEntity.m_pObj;
    if ( v15 != 0 && (v15->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      v21 = bObstructedVision;
      (*(v15->_vptr_IHandleEntity + 22))(v15, 28, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      bObstructedVision = v21;
    }
    this->m_nRadius.m_Value = v10;
  }
  if ( bObstructedVision != this->m_bObstructedVision.m_Value )
  {
    v16 = this->__m_pChainEntity.m_pObj;
    if ( v16 != 0 && (v16->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
    {
      v22 = bObstructedVision;
      (*(v16->_vptr_IHandleEntity + 22))(v16, 33, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      bObstructedVision = v22;
    }
    this->m_bObstructedVision.m_Value = bObstructedVision;
  }
}


// CDOTAFogOfWarTempViewers::~CDOTAFogOfWarTempViewers  (line 103, @0x000000000257b310, libserver.so)  // inlines: Purge, ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: CUtlStack<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlStack, operator delete, CUtlVectorBase<TempViewerInfo_t, CNetworkUtlVector_MemoryType<TempViewerInfo_t, -1> >::RemoveAll, CBaseEntity::~CBaseEntity, CUtlMemory<TempViewerInfo_t, int>::Purge
void __fastcall CDOTAFogOfWarTempViewers::~CDOTAFogOfWarTempViewers(CDOTAFogOfWarTempViewers *const this)
{
  this->_vptr_IHandleEntity = &off_40F8250;
  CUtlStack<unsigned short,CUtlMemory<unsigned short,int>>::~CUtlStack(&this->m_TempViewersFree);
  operator delete(this->m_TempViewerInfo.m_pArraySizeChangedDelegate);
  CUtlVectorBase<TempViewerInfo_t,CNetworkUtlVector_MemoryType<TempViewerInfo_t,-1>>::RemoveAll(&this->m_TempViewerInfo.m_Vector);
  if ( (this->m_TempViewerInfo.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<TempViewerInfo_t,int>::Purge(&this->m_TempViewerInfo.m_Vector.m_Memory),
        (this->m_TempViewerInfo.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CBaseEntity::~CBaseEntity(this);
  }
  else
  {
    CUtlMemory<TempViewerInfo_t,int>::Purge(&this->m_TempViewerInfo.m_Vector.m_Memory);
    CBaseEntity::~CBaseEntity(this);
  }
}


// CDOTAFogOfWarTempViewers::~CDOTAFogOfWarTempViewers  (line 103, @0x000000000257b390, libserver.so)  // inlines: Purge, ~CDOTAFogOfWarTempViewers, ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: CUtlStack<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlStack, operator delete, CUtlVectorBase<TempViewerInfo_t, CNetworkUtlVector_MemoryType<TempViewerInfo_t, -1> >::RemoveAll, CBaseEntity::~CBaseEntity, CBaseEntity::operator delete, CUtlMemory<TempViewerInfo_t, int>::Purge
void __fastcall CDOTAFogOfWarTempViewers::~CDOTAFogOfWarTempViewers(CDOTAFogOfWarTempViewers *const this)
{
  this->_vptr_IHandleEntity = &off_40F8250;
  CUtlStack<unsigned short,CUtlMemory<unsigned short,int>>::~CUtlStack(&this->m_TempViewersFree);
  operator delete(this->m_TempViewerInfo.m_pArraySizeChangedDelegate);
  CUtlVectorBase<TempViewerInfo_t,CNetworkUtlVector_MemoryType<TempViewerInfo_t,-1>>::RemoveAll(&this->m_TempViewerInfo.m_Vector);
  if ( (this->m_TempViewerInfo.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<TempViewerInfo_t,int>::Purge(&this->m_TempViewerInfo.m_Vector.m_Memory);
    if ( (this->m_TempViewerInfo.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<TempViewerInfo_t,int>::Purge(&this->m_TempViewerInfo.m_Vector.m_Memory);
  }
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTAFogOfWarTempViewers::Schema_DynamicBinding  (line 105, @0x0000000002552800, libserver.so)
// globals: CDOTAFogOfWarTempViewers::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTAFogOfWarTempViewers::Schema_DynamicBinding(
        const CDOTAFogOfWarTempViewers *const this)
{
  return CDOTAFogOfWarTempViewers::s_pSchemaBinding;
}


// CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 105, @0x0000000002552810, libserver.so)
// globals: CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass *const this)
{
  return CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass::DestructInstance  (line 105, @0x0000000002552820, libserver.so)  // inlines: Destruct<CDOTAFogOfWarTempViewers>
void __fastcall CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass::DestructInstance(
        CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass::FreeInstance  (line 105, @0x0000000002552840, libserver.so)
void __fastcall CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass::FreeInstance(
        CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass::CanAllocate  (line 105, @0x0000000002552860, libserver.so)
bool __fastcall CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass::CanAllocate(
        const CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 105, @0x0000000002552870, libserver.so)
// globals: CDOTAFogOfWarTempViewers::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass *const this)
{
  return CDOTAFogOfWarTempViewers::s_pSchemaBinding;
}


// CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass::AllocateInstance  (line 105, @0x0000000002555490, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass::AllocateInstance(
        CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 896);
  memset(v1, 0, 0x380u);
  return v1;
}


// CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 105, @0x0000000002560950, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 105, @0x0000000002560970, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTAFogOfWarTempViewers::GetEntityClassInternal  (line 105, @0x0000000002576c20, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_03.cpp
// strings: "dota_fogofwartempviewers", "CDOTAFogOfWarTempViewers"
// globals: `guard variable for'CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass, CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTAFogOfWarTempViewers::GetEntityClassInfo(void)::g_EntityCDOTAFogOfWarTempViewersClassInfo, CDOTAFogOfWarTempViewers::GetEntityClassInfo(void)::g_EntityCDOTAFogOfWarTempViewersClassInfo
CEntityClass *__cdecl CDOTAFogOfWarTempViewers::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass) != 0 )
  {
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_designerName.u.m_Id = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass._vptr_CEntityClass = off_3F79390;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_ComponentOffsets.m_Size = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_AllHelpers.m_Size = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_classInputs.m_Size = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_classOutputs.m_Size = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_requiredEHandle.m_Index = -1;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_hNetworkSerializer = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_pBaseClassInfo = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_pClassInfo = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_flags = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_nAllHelpersFlags = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_pScriptClassDesc = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_pInputs = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_nInputCount = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_pOutputs = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_nOutputCount = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_pGameClass = 0;
    CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass._vptr_CEntityClass = off_40F81D0;
    __cxa_guard_release(&`guard variable for'CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass);
    __cxa_atexit(
      CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTAFogOfWarTempViewersClass != 0 )
    return &CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass;
  if ( `guard variable for'CDOTAFogOfWarTempViewers::GetEntityClassInfo(void)::g_EntityCDOTAFogOfWarTempViewersClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAFogOfWarTempViewers::GetEntityClassInfo(void)::g_EntityCDOTAFogOfWarTempViewersClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTAFogOfWarTempViewers::GetEntityClassInfo(void)::g_EntityCDOTAFogOfWarTempViewersClassInfo,
      "CDOTAFogOfWarTempViewers",
      "dota_fogofwartempviewers",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTAFogOfWarTempViewers::GetEntityClassInfo(void)::g_EntityCDOTAFogOfWarTempViewersClassInfo);
  }
  CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_pClassInfo = &CDOTAFogOfWarTempViewers::GetEntityClassInfo(void)::g_EntityCDOTAFogOfWarTempViewersClassInfo;
  CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_pBaseClassInfo = CDOTAFogOfWarTempViewers::GetEntityClassInfo(void)::g_EntityCDOTAFogOfWarTempViewersClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTAFogOfWarTempViewersClass = &CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass;
  CDOTAFogOfWarTempViewers::GetEntityClassInfo(void)::g_EntityCDOTAFogOfWarTempViewersClassInfo.m_pClass = &CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass;
  CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCDOTAFogOfWarTempViewersClass->m_pComponentOverrides = 0;
  return &CDOTAFogOfWarTempViewers::GetEntityClassInternal(void)::g_EntityCDOTAFogOfWarTempViewersClass;
}


// CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass::ConstructInstance  (line 105, @0x000000000257b420, libserver.so)  // inlines: Construct<CDOTAFogOfWarTempViewers>
// calls: CDOTAFogOfWarTempViewers::CDOTAFogOfWarTempViewers
CEntityInstance *__fastcall CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass::ConstructInstance(
        CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CDOTAFogOfWarTempViewers::CDOTAFogOfWarTempViewers(p);
  return p;
}


// CDOTAFogOfWarTempViewers::ObjectCaps  (line 112, @0x00000000025556c0, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CDOTAFogOfWarTempViewers::ObjectCaps(CDOTAFogOfWarTempViewers *const this)
{
  int result; // eax

  result = CBaseEntity::ObjectCaps(this);
  LOBYTE(result) = result & 0x7F;
  return result;
}


// CDOTAFogOfWarTempViewers::YouForgotToImplementOrDeclareServerClass  (line 146, @0x00000000024b42a0, libserver.so)
int __fastcall CDOTAFogOfWarTempViewers::YouForgotToImplementOrDeclareServerClass(CDOTAFogOfWarTempViewers *const this)
{
  return 0;
}


// CDOTAFogOfWarTempViewers::GetServerClass  (line 146, @0x00000000024be3d0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTAFogOfWarTempViewers::GetServerClass(CDOTAFogOfWarTempViewers *const this)
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


// CDOTAFogOfWarTempViewers::CDOTAFogOfWarTempViewers  (line 286, @0x00000000024ecf80, libserver.so)  // inlines: CEntityOwnerPtr, CFieldPath, CNetworkUtlVector_MemoryType, CNetworkVarBase, CSmartPtr, CUtlMemory, CUtlStack, CUtlVector, CUtlVectorBase, CUtlVectorEmbeddedNetworkVar, CUtlVectorEmbeddedNetworkVar_ChainingHelper, CUtlVectorEmbeddedNetworkVar_Vector, Clear, EnsureCapacity, EnsureValidValue<unsigned int>, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, NetworkStateChanged, OnSizeChanged, Path_RemoveAll, Path_SetCount, Purge, ResetDbgInfo, Resolve, Set, V_memcpy, memcpy, operator CEntityInstance*, operator(), operator=, operator=<int>, ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: CBaseEntity::CBaseEntity, CUtlStack<short unsigned int, CUtlMemory<short unsigned int, int> >::Push, GetNetworkSerializerForEntityInstance, memcpy, CUtlVectorBase<TempViewerInfo_t, CNetworkUtlVector_MemoryType<TempViewerInfo_t, -1> >::RemoveAll, EntityInstanceSetNetworkStateChanged, CUtlMemory<TempViewerInfo_t, int>::Purge, CUtlVectorEmbeddedNetworkVar<TempViewerInfo_t, CDOTAFogOfWarTempViewers::NetworkVar_m_TempViewerInfo, -1>::Resolve, CUtlStack<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlStack, operator delete, CBaseEntity::~CBaseEntity, _Unwind_Resume (16 total)
// callers: CDOTAFogOfWarTempViewers::CEntityInstanceEntityClass::ConstructInstance
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)"
void __fastcall CDOTAFogOfWarTempViewers::CDOTAFogOfWarTempViewers(CDOTAFogOfWarTempViewers *const this)
{
  CUtlVectorEmbeddedNetworkVar<TempViewerInfo_t,CDOTAFogOfWarTempViewers::NetworkVar_m_TempViewerInfo,-1> *p_m_TempViewerInfo; // r14
  CUtlStack<short unsigned int,CUtlMemory<short unsigned int,int> > *p_m_TempViewersFree; // r12
  CEntityInstance *v4; // rax
  _QWORD *v5; // rdi
  unsigned __int16 *v6; // rax
  int v7; // r15d
  CUtlVectorEmbeddedNetworkVar<TempViewerInfo_t,CDOTAFogOfWarTempViewers::NetworkVar_m_TempViewerInfo,-1> *m_Size; // rdi
  CEntityInstance *m_pObj; // r15
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rdx
  __int64 v11; // rax
  unsigned __int16 *v12; // rsi
  CUtlDelegate<void()> *m_pArraySizeChangedDelegate; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  detail::GenericClass *v15; // rdi
  bool v16; // zf
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  int v20; // esi
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  void (__fastcall *v27)(unsigned __int16 *, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<TempViewerInfo_t,CDOTAFogOfWarTempViewers::NetworkVar_m_TempViewerInfo,-1> *, bool *); // [rsp+8h] [rbp-78h]
  int v28; // [rsp+8h] [rbp-78h]
  int v29; // [rsp+8h] [rbp-78h]
  LeafCodeInfo_t v30; // [rsp+10h] [rbp-70h] BYREF
  unsigned __int16 src[8]; // [rsp+30h] [rbp-50h] BYREF
  __int16 v32; // [rsp+40h] [rbp-40h]
  char v33; // [rsp+42h] [rbp-3Eh]

  p_m_TempViewerInfo = &this->m_TempViewerInfo;
  p_m_TempViewersFree = &this->m_TempViewersFree;
  CBaseEntity::CBaseEntity(this);
  this->_vptr_IHandleEntity = &off_40F8250;
  this->m_FoWTempViewerVersion.m_Value = 0;
  this->m_TempViewerInfo.m_Vector.m_Size = 0;
  this->m_TempViewerInfo.m_Vector.m_Memory.m_pMemory = 0;
  v4 = CEntitySpawnHelper::gm_pCurEntityPtr;
  this->m_TempViewerInfo.m_Vector.m_Memory.m_nAllocationCount = 0;
  this->m_TempViewerInfo.m_Vector.m_Memory.m_nGrowSize = 0;
  this->m_TempViewerInfo.m_PathToVector.m_nCount = 0;
  this->m_TempViewerInfo.m_PathToVector.m_bUsingExternalPaths = 0;
  this->m_TempViewerInfo.m_pOwnerEntity.m_pObj = v4;
  this->m_TempViewerInfo.m_pArraySizeChangedDelegate = 0;
  this->m_TempViewerInfo.m_bIsNetworkVarExcluded = 0;
  this->m_TempViewerInfo.m_bResolved = 0;
  this->m_TempViewersFree.m_Memory.m_pMemory = 0;
  v5 = g_pMemAlloc;
  this->m_TempViewersFree.m_Memory.m_nAllocationCount = 0;
  this->m_TempViewersFree.m_Memory.m_nGrowSize = 0;
  this->m_TempViewersFree.m_Size = 0;
  this->m_TempViewersFree.m_pElements = 0;
  v6 = (**v5)(v5, 600);
  this->m_TempViewersFree.m_Memory.m_pMemory = v6;
  v7 = 299;
  this->m_TempViewersFree.m_Memory.m_nAllocationCount = 300;
  this->m_TempViewersFree.m_pElements = v6;
  this->m_TempViewersFree.m_Size = 0;
  do
  {
    src[0] = v7;
    CUtlStack<unsigned short,CUtlMemory<unsigned short,int>>::Push(p_m_TempViewersFree, src);
    --v7;
  }
  while ( v7 != -1 );
  m_Size = this->m_TempViewerInfo.m_Vector.m_Size;
  if ( m_Size > 0 )
  {
    if ( !this->m_TempViewerInfo.m_bResolved )
    {
      m_pObj = this->m_TempViewerInfo.m_pOwnerEntity.m_pObj;
      this->m_TempViewerInfo.m_bResolved = 1;
      if ( m_pObj != 0 )
      {
        v27 = *(*g_pFlattenedSerializers + 272LL);
        NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
        v27(
          src,
          g_pFlattenedSerializers,
          NetworkSerializerForEntityInstance,
          m_pObj,
          p_m_TempViewerInfo,
          &this->m_TempViewerInfo.m_bIsNetworkVarExcluded);
        if ( &this->m_TempViewerInfo.m_PathToVector != src )
        {
          v11 = v32;
          this->m_TempViewerInfo.m_PathToVector.m_bUsingExternalPaths = 0;
          if ( v11 > 6 )
          {
            if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
            {
              v30.m_szFile = "../../public/tier2/fieldpath.h";
              v30.m_szFunction = "Path_SetCount";
              v30.m_nLine = 442;
              LoggingSystem_Log(
                LOG_GENERAL,
                LoggingSeverity_t::LS_ERROR,
                &v30,
                "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
                6);
            }
            if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v25, v26, v23, v24) != 0 )
              loc_0 = -559038737;
            v28 = Plat_ExitProcess(1);
            CUtlStack<unsigned short,CUtlMemory<unsigned short,int>>::~CUtlStack(p_m_TempViewersFree);
            operator delete(this->m_TempViewerInfo.m_pArraySizeChangedDelegate);
            CUtlVectorBase<TempViewerInfo_t,CNetworkUtlVector_MemoryType<TempViewerInfo_t,-1>>::RemoveAll(&p_m_TempViewerInfo->m_Vector);
            v17 = v28;
            if ( (this->m_TempViewerInfo.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            {
              CUtlMemory<TempViewerInfo_t,int>::Purge(&this->m_TempViewerInfo.m_Vector.m_Memory);
              v17 = v28;
              if ( (this->m_TempViewerInfo.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              {
                CUtlMemory<TempViewerInfo_t,int>::Purge(&this->m_TempViewerInfo.m_Vector.m_Memory);
                v17 = v28;
              }
            }
            v29 = v17;
            CBaseEntity::~CBaseEntity(this);
            Unwind_Resume(v29, v20, v18, v19, v21, v22);
          }
          this->m_TempViewerInfo.m_PathToVector.m_nCount = v11;
          if ( v11 > 0 )
          {
            v12 = src;
            if ( v33 != 0 )
              v12 = *src;
            memcpy(&this->m_TempViewerInfo.m_PathToVector, v12, 2 * v11);
          }
        }
      }
      else
      {
        if ( this->m_TempViewerInfo.m_PathToVector.m_bUsingExternalPaths )
          CUtlVectorEmbeddedNetworkVar<TempViewerInfo_t,CDOTAFogOfWarTempViewers::NetworkVar_m_TempViewerInfo,-1>::Resolve(m_Size);
        this->m_TempViewerInfo.m_PathToVector.m_nCount = 0;
      }
    }
    if ( !this->m_TempViewerInfo.m_bIsNetworkVarExcluded )
      EntityInstanceSetNetworkStateChanged(this->m_TempViewerInfo.m_pOwnerEntity.m_pObj);
  }
  CUtlVectorBase<TempViewerInfo_t,CNetworkUtlVector_MemoryType<TempViewerInfo_t,-1>>::RemoveAll(&p_m_TempViewerInfo->m_Vector);
  if ( (this->m_TempViewerInfo.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<TempViewerInfo_t,int>::Purge(&this->m_TempViewerInfo.m_Vector.m_Memory);
  m_pArraySizeChangedDelegate = this->m_TempViewerInfo.m_pArraySizeChangedDelegate;
  if ( m_pArraySizeChangedDelegate != 0 )
  {
    pfn = m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__pfn;
    v15 = (m_pArraySizeChangedDelegate->m_Closure.m_pthis + m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(pfn + *v15 - 1);
    pfn(v15);
  }
  v16 = this->m_FoWTempViewerVersion.m_Value == 1;
  this->m_flEndTimeMin = 3.4028235e38;
  if ( !v16 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_FoWTempViewerVersion.m_Value = 1;
  }
}


// CDOTAFogOfWarTempViewers::Spawn  (line 303, @0x00000000024b90f0, libserver.so)  // inlines: curtime
// calls: CBaseEntity::Spawn, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// globals: CDOTAFogOfWarTempViewers::ThinkUpdateFogOfWar(void)
void __fastcall CDOTAFogOfWarTempViewers::Spawn(
        CDOTAFogOfWarTempViewers *const this,
        const CEntityKeyValues *pKeyValues)
{
  double v3; // xmm1_8
  CGlobalVars *v4; // rbx
  CGlobalVars *v5; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v7; // xmm0_8

  CBaseEntity::Spawn(this, pKeyValues);
  CBaseEntity::ThinkSet(this, CDOTAFogOfWarTempViewers::ThinkUpdateFogOfWar, 0.0, 0, 0);
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    v5 = gpGlobals;
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      v5 = gpGlobals;
    }
    *&v7 = LODWORD(v4->m_flCurrentTime);
  }
  else
  {
    v5 = 0;
    v7 = 0.0;
  }
  *&v7 = *&v7 + v5->interval_per_tick;
  CBaseEntity::SetNextThink(this, v7, v3, 0);
}


// CDOTAFogOfWarTempViewers::ThinkUpdateFogOfWar  (line 310, @0x00000000024eccf0, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, Element, Get, GetEntityIdentity, GetEntryIndex, GetFoW, GetGameTime, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Min<float>, SetFOWTempViewerID, ToBaseModelEntity, curtime, operator CBaseEntity*, operator CEntityInstance*, operator bool, operator[]
// calls: CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId, CFoW::RemoveViewer, TempViewerInfo_t::MarkInvalid, CUtlStack<short unsigned int, CUtlMemory<short unsigned int, int> >::Push, CBaseEntity::SetNextThink, FoW_TeamNumberToFoWIndex
// globals: g_DOTAFogOfWarSystem, CEntityHandle::gm_pEntityList
void __fastcall CDOTAFogOfWarTempViewers::ThinkUpdateFogOfWar(CDOTAFogOfWarTempViewers *const this)
{
  double v1; // xmm1_8
  int m_Size; // ecx
  __int64 v4; // r14
  int v5; // r13d
  TempViewerInfo_t *v6; // rax
  float flEndTime; // xmm0_4
  float v8; // xmm2_4
  int nFoWID; // r12d
  CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *FowInfoForWorldGroupId; // rax
  TempViewerInfo_t *v11; // rax
  unsigned int v12; // xmm1_4
  uint32 m_Index; // esi
  TempViewerInfo_t *v14; // rdi
  CEntityIdentity *v15; // r8
  CEntityIdentity *v16; // r8
  CGlobalVars *v17; // rbx
  CGlobalVars *v18; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v20; // xmm0_8
  CEntityIdentity *v21; // r8
  CEntityInstance *m_pInstance; // r12
  CEntityIdentity *v23; // rax
  int v24; // eax
  CUtlStack<short unsigned int,CUtlMemory<short unsigned int,int> > *p_m_TempViewersFree; // [rsp-58h] [rbp-60h]
  unsigned int v26; // [rsp-44h] [rbp-4Ch]
  unsigned int v27; // [rsp-44h] [rbp-4Ch]
  uint32 v28; // [rsp-40h] [rbp-48h] BYREF

  v1 = 0.0;
  if ( g_pGameRules != 0 )
    *&v1 = *&g_pGameRules[18].m_szQuestName[20];
  if ( *&v1 > this->m_flEndTimeMin )
  {
    m_Size = this->m_TempViewerInfo.m_Vector.m_Size;
    this->m_flEndTimeMin = 3.4028235e38;
    if ( m_Size > 0 )
    {
      v4 = 0;
      v5 = 0;
      v1 = 0.0;
      p_m_TempViewersFree = &this->m_TempViewersFree;
      do
      {
        v6 = &this->m_TempViewerInfo.m_Vector.m_Memory.m_pMemory[v4];
        flEndTime = v6->flEndTime;
        if ( flEndTime != *&v1 )
        {
          v8 = 0.0;
          if ( g_pGameRules != 0 )
            v8 = *&g_pGameRules[18].m_szQuestName[20];
          if ( v8 <= flEndTime )
          {
            this->m_flEndTimeMin = fminf(this->m_flEndTimeMin, flEndTime);
          }
          else
          {
            nFoWID = v6->nFoWID;
            v26 = LODWORD(v1);
            FowInfoForWorldGroupId = CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId(&g_DOTAFogOfWarSystem, 0);
            CFoW::RemoveViewer(&FowInfoForWorldGroupId->m_FoW, nFoWID);
            v11 = &this->m_TempViewerInfo.m_Vector.m_Memory.m_pMemory[v4];
            v12 = v26;
            m_Index = v11->hOwner.m_Index;
            v14 = v11;
            if ( m_Index + 2 > 1 )
            {
              v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v11->hOwner.m_Index) >> 9) & 0x3F];
              if ( v15 != 0 )
              {
                v16 = &v15[v11->hOwner.m_Index & 0x1FF];
                if ( v16 != 0 && m_Index == v16->m_EHandle.m_Index )
                {
                  v28 = v11->hOwner.m_Index;
                  v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index >> 9) & 0x3F];
                  if ( v21 != 0 )
                  {
                    m_pInstance = 0;
                    v23 = &v21[m_Index & 0x1FF];
                    if ( v23 != 0 && m_Index == v23->m_EHandle.m_Index )
                      m_pInstance = v23->m_pInstance;
                  }
                  else
                  {
                    m_pInstance = 0;
                  }
                  v24 = FoW_TeamNumberToFoWIndex(this->m_iTeamNum.m_Value);
                  v12 = v26;
                  *(&m_pInstance[16].m_iszPrivateVScripts.u.m_pAsString + v24 + 1) = -1;
                  v14 = &this->m_TempViewerInfo.m_Vector.m_Memory.m_pMemory[v4];
                }
              }
            }
            v27 = v12;
            TempViewerInfo_t::MarkInvalid(v14);
            LOWORD(v28) = v5;
            CUtlStack<unsigned short,CUtlMemory<unsigned short,int>>::Push(p_m_TempViewersFree, &v28);
            *&v1 = v27;
          }
        }
        ++v5;
        ++v4;
      }
      while ( v5 < this->m_TempViewerInfo.m_Vector.m_Size );
    }
  }
  v17 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    v18 = gpGlobals;
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      v18 = gpGlobals;
    }
    *&v20 = LODWORD(v17->m_flCurrentTime);
  }
  else
  {
    v18 = 0;
    v20 = 0.0;
  }
  *&v20 = *&v20 + v18->interval_per_tick;
  CBaseEntity::SetNextThink(this, v20, v1, 0);
}


// CDOTAFogOfWarTempViewers::ShouldTransmit  (line 362, @0x00000000024b4d30, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTAPlayer::IsACoach
int __fastcall CDOTAFogOfWarTempViewers::ShouldTransmit(
        CDOTAFogOfWarTempViewers *const this,
        const CGameCheckTransmitInfo *pInfo)
{
  bool IsACoach; // al
  int m_nRecipientCoachedTeamNumber; // edx
  bool v6; // zf
  int result; // eax

  IsACoach = CDOTAPlayer::IsACoach(pInfo->m_pRecipientPlayer);
  m_nRecipientCoachedTeamNumber = pInfo->m_nRecipientCoachedTeamNumber;
  v6 = !IsACoach;
  result = 4;
  if ( v6 )
    m_nRecipientCoachedTeamNumber = pInfo->m_nRecipientTeamNumber;
  if ( m_nRecipientCoachedTeamNumber != 1 )
    return 4 * (m_nRecipientCoachedTeamNumber != this->m_iTeamNum.m_Value) + 4;
  return result;
}


// CDOTAFogOfWarTempViewers::AddTempViewer  (line 374, @0x000000000252e780, libserver.so)  // inlines: DOTAGameRules, Element, GetEHandle, GetEntryIndex, GetFOWTempViewerID, GetFoW, GetGameTime, GetSerialNumber, Min<float>, Set, SetFOWTempViewerID, operator=, operator[]
// calls: CBaseEntity::GetAbsOrigin, CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId, CFoW::GetGridUnitsClamped, TempViewerInfo_t::InitializeTempViewer, CFoW::UpdateViewer, CDOTAFogOfWarTempViewers::AddTempViewer
// callers: FOWAddTempViewer
// globals: g_DOTAFogOfWarSystem
void __fastcall CDOTAFogOfWarTempViewers::AddTempViewer(
        CDOTAFogOfWarTempViewers *const this,
        CBaseModelEntity *p,
        unsigned int nFoWTeamID,
        float flRadius,
        float flDuration)
{
  const Vector *AbsOrigin; // r14
  __int64 v9; // r15
  CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *FowInfoForWorldGroupId; // rax
  float v11; // xmm0_4
  TempViewerInfo_t *v12; // r12
  int nFoWID; // ebx
  CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *v14; // rax
  int v15; // eax
  CEntityIdentity *m_pEntity; // rdx
  TempViewerInfo_t *v17; // rax
  int v18; // ecx
  __int16 v19; // si
  float flDurationb; // [rsp+8h] [rbp-48h]
  float flRadiusa[3]; // [rsp+Ch] [rbp-44h] BYREF
  int nGridX; // [rsp+18h] [rbp-38h] BYREF
  int nGridY[13]; // [rsp+1Ch] [rbp-34h] BYREF

  flRadiusa[0] = flRadius;
  AbsOrigin = CBaseEntity::GetAbsOrigin(p);
  v9 = p->m_iFOWTempViewerID[nFoWTeamID];
  if ( (v9 & 0x8000u) != 0LL )
  {
    v15 = CDOTAFogOfWarTempViewers::AddTempViewer(
            this,
            FoWViewerType_t::FOWVIEWERTYPE_FOWENTITY_TEMP,
            nFoWTeamID,
            AbsOrigin,
            flRadiusa[0],
            flDuration,
            1);
    if ( v15 != -1 )
    {
      p->m_iFOWTempViewerID[nFoWTeamID] = v15;
      m_pEntity = p->m_pEntity;
      v17 = &this->m_TempViewerInfo.m_Vector.m_Memory.m_pMemory[v15];
      if ( m_pEntity != 0 )
      {
        v18 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        if ( m_pEntity->m_EHandle.m_Index == -1 )
          v19 = 0x7FFF;
        else
          v19 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(v17->hOwner.m_Index) = v19 | v17->hOwner.m_Index & 0x8000;
        v17->hOwner.m_Index = (v18 << 15) | v17->hOwner.m_Index & 0x7FFF;
      }
      else
      {
        v17->hOwner.m_Index = -1;
      }
    }
  }
  else
  {
    FowInfoForWorldGroupId = CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId(&g_DOTAFogOfWarSystem, 0);
    CFoW::GetGridUnitsClamped(&FowInfoForWorldGroupId->m_FoW, AbsOrigin, &nGridX, nGridY);
    TempViewerInfo_t::InitializeTempViewer(
      &this->m_TempViewerInfo.m_Vector.m_Memory.m_pMemory[v9],
      FoWViewerType_t::FOWVIEWERTYPE_FOWENTITY_TEMP,
      nGridX,
      nGridY[0],
      1,
      flRadiusa);
    v11 = 0.0;
    if ( g_pGameRules != 0 )
      v11 = *&g_pGameRules[18].m_szQuestName[20];
    this->m_TempViewerInfo.m_Vector.m_Memory.m_pMemory[v9].flEndTime = v11 + flDuration;
    v12 = &this->m_TempViewerInfo.m_Vector.m_Memory.m_pMemory[v9];
    this->m_flEndTimeMin = fminf(this->m_flEndTimeMin, v12->flEndTime);
    nFoWID = v12->nFoWID;
    flDurationb = flRadiusa[0];
    v14 = CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId(&g_DOTAFogOfWarSystem, 0);
    CFoW::UpdateViewer(
      &v14->m_FoW,
      nFoWID,
      nFoWTeamID,
      AbsOrigin,
      flDurationb,
      FoWOccluderMode_t::FOW_OCCLUDE_MODE_NONE);
  }
}


// CDOTAFogOfWarTempViewers::AddTempViewer  (line 409, @0x000000000252df60, libserver.so)  // inlines: AssignPathIdToElement, CFieldPath, Clear, DOTAGameRules, Element, Get, GetFoW, GetGameTime, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, Min<float>, NetworkStateChanged, OnSizeChanged, Path_AddToTail, Path_RemoveAll, Path_SetCount, Pop, Push, ReassignPathIds, Resolve, Set, SetCount, Top, V_memcpy, memcpy, operator CEntityInstance*, operator(), operator=, operator[]
// calls: CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId, CFoW::GetGridUnitsClamped, TempViewerInfo_t::InitializeTempViewer, CFoW::AddViewer, CFoW::UpdateViewer, GetNetworkSerializerForEntityInstance, memcpy, EntityInstanceSetNetworkStateChanged, CUtlVectorBase<TempViewerInfo_t, CNetworkUtlVector_MemoryType<TempViewerInfo_t, -1> >::SetCount, __memcpy_chk, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors (17 total)
// callers: CDOTAFogOfWarTempViewers::AddTempViewer, FOWAddTempViewer, CDOTAGamerules::Defeated, fow_server_test_tempviewer
// strings: "../../public/tier2/fieldpath.h", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
// globals: g_DOTAFogOfWarSystem
__int64 __fastcall CDOTAFogOfWarTempViewers::AddTempViewer(
        CDOTAFogOfWarTempViewers *const this,
        FoWViewerType_t FoWViewerType,
        unsigned int nFoWTeamID,
        const CFieldPath *vLocation,
        float flRadius,
        float flDuration,
        bool bObstructedVision)
{
  CDOTAFogOfWarTempViewers *v7; // rbx
  int m_Size; // eax
  int v9; // eax
  const char **p_nGridY; // r15
  int v12; // eax
  __int64 v13; // r12
  CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *v14; // rax
  __int64 v15; // r14
  float v16; // xmm0_4
  CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *v17; // rax
  int v18; // eax
  int nFoWID; // ebx
  CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *v20; // rax
  void (__fastcall *v22)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<TempViewerInfo_t,CDOTAFogOfWarTempViewers::NetworkVar_m_TempViewerInfo,-1> *, bool *); // r14
  CEntityInstance *m_pObj; // rcx
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rax
  CEntityInstance *v25; // rcx
  __int64 v26; // rax
  void **v27; // rsi
  CEntityInstance *v28; // rcx
  FlattenedSerializerHandle_t v29; // rax
  CEntityInstance *v30; // rcx
  __int64 v31; // rax
  void **v32; // rsi
  CEntityInstance *v33; // rcx
  FlattenedSerializerHandle_t v34; // rax
  __int64 v35; // rdx
  size_t v36; // rdx
  const char *v37; // rsi
  __int64 m_nCount; // rdx
  __int64 v39; // rdx
  void *m_pPaths; // rsi
  int16 v41; // cx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rax
  ChangeAccessorFieldPathIndex_t *v47; // rdx
  ChangeAccessorFieldPathIndex_t v48; // ax
  CEntityInstance *v49; // rax
  CUtlDelegate<void()> *m_pArraySizeChangedDelegate; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  detail::GenericClass *v52; // rdi
  CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *FowInfoForWorldGroupId; // rax
  const LeafCodeInfo_t *p_nGridX; // rdx
  const Vector *vLocationa; // [rsp+8h] [rbp-108h]
  int nID; // [rsp+10h] [rbp-100h]
  __int16 v57; // [rsp+16h] [rbp-FAh]
  bool *p_m_bIsNetworkVarExcluded; // [rsp+18h] [rbp-F8h]
  void (__fastcall *v59)(const char **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<TempViewerInfo_t,CDOTAFogOfWarTempViewers::NetworkVar_m_TempViewerInfo,-1> *, bool *); // [rsp+28h] [rbp-E8h]
  void (__fastcall *v60)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<TempViewerInfo_t,CDOTAFogOfWarTempViewers::NetworkVar_m_TempViewerInfo,-1> *, bool *); // [rsp+30h] [rbp-E0h]
  CEntityInstance *v61; // [rsp+30h] [rbp-E0h]
  ChangeAccessorFieldPathIndex_t *v62; // [rsp+30h] [rbp-E0h]
  CUtlVectorEmbeddedNetworkVar<TempViewerInfo_t,CDOTAFogOfWarTempViewers::NetworkVar_m_TempViewerInfo,-1> *p_m_TempViewerInfo; // [rsp+38h] [rbp-D8h]
  CEntityInstance *desta; // [rsp+40h] [rbp-D0h]
  void **dest; // [rsp+40h] [rbp-D0h]
  CEntityInstance *destb; // [rsp+40h] [rbp-D0h]
  TempViewerInfo_t *flDurationb; // [rsp+48h] [rbp-C8h]
  float FoWViewerTypeb; // [rsp+58h] [rbp-B8h]
  float flRadiusa; // [rsp+5Ch] [rbp-B4h] BYREF
  void *src[2]; // [rsp+60h] [rbp-B0h] BYREF
  __int16 v75; // [rsp+70h] [rbp-A0h]
  char v76; // [rsp+72h] [rbp-9Eh]
  void *v77[2]; // [rsp+80h] [rbp-90h] BYREF
  __int16 v78; // [rsp+90h] [rbp-80h]
  char v79; // [rsp+92h] [rbp-7Eh]
  const char *nGridX; // [rsp+A0h] [rbp-70h] BYREF
  int v81; // [rsp+A8h] [rbp-68h]
  const char *v82; // [rsp+B0h] [rbp-60h]
  const char *nGridY; // [rsp+C0h] [rbp-50h] BYREF
  int v84; // [rsp+C8h] [rbp-48h]
  const char *v85; // [rsp+D0h] [rbp-40h]

  v7 = this;
  m_Size = this->m_TempViewersFree.m_Size;
  flRadiusa = flRadius;
  if ( m_Size <= 0 )
  {
    FowInfoForWorldGroupId = CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId(&g_DOTAFogOfWarSystem, 0);
    CFoW::OutOfViewersDieDieDie(&FowInfoForWorldGroupId->m_FoW);
    return 0xFFFFFFFFLL;
  }
  v9 = m_Size - 1;
  p_nGridY = this->m_TempViewersFree.m_Memory.m_pMemory[v9];
  this->m_TempViewersFree.m_Size = v9;
  v12 = this->m_TempViewerInfo.m_Vector.m_Size;
  v13 = p_nGridY;
  if ( p_nGridY >= v12 )
  {
    LODWORD(v22) = p_nGridY + 1;
    if ( v22 != v12 )
    {
      p_m_TempViewerInfo = &this->m_TempViewerInfo;
      if ( !this->m_TempViewerInfo.m_bResolved )
      {
        m_pObj = this->m_TempViewerInfo.m_pOwnerEntity.m_pObj;
        this->m_TempViewerInfo.m_bResolved = 1;
        if ( m_pObj != 0 )
        {
          desta = m_pObj;
          v60 = *(*g_pFlattenedSerializers + 272LL);
          NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(m_pObj);
          v25 = desta;
          dest = src;
          v60(
            src,
            g_pFlattenedSerializers,
            NetworkSerializerForEntityInstance,
            v25,
            p_m_TempViewerInfo,
            &v7->m_TempViewerInfo.m_bIsNetworkVarExcluded);
          if ( &v7->m_TempViewerInfo.m_PathToVector != src )
          {
            v26 = v75;
            v7->m_TempViewerInfo.m_PathToVector.m_bUsingExternalPaths = 0;
            if ( v26 > 6 )
              goto LABEL_71;
            v7->m_TempViewerInfo.m_PathToVector.m_nCount = v26;
            if ( v26 > 0 )
            {
              v27 = src;
              if ( v76 != 0 )
                v27 = src[0];
              memcpy(&v7->m_TempViewerInfo.m_PathToVector, v27, 2 * v26);
            }
          }
        }
        else
        {
          if ( this->m_TempViewerInfo.m_PathToVector.m_bUsingExternalPaths )
            goto LABEL_63;
          this->m_TempViewerInfo.m_PathToVector.m_nCount = 0;
        }
      }
      if ( !v7->m_TempViewerInfo.m_bIsNetworkVarExcluded )
        EntityInstanceSetNetworkStateChanged(v7->m_TempViewerInfo.m_pOwnerEntity.m_pObj);
      CUtlVectorBase<TempViewerInfo_t,CNetworkUtlVector_MemoryType<TempViewerInfo_t,-1>>::SetCount(
        &p_m_TempViewerInfo->m_Vector,
        v22);
      if ( v7->m_TempViewerInfo.m_bResolved )
      {
LABEL_25:
        if ( !v7->m_TempViewerInfo.m_bIsNetworkVarExcluded && v7->m_TempViewerInfo.m_Vector.m_Size > 0 )
        {
          this = 0;
          nID = p_nGridY;
          p_m_bIsNetworkVarExcluded = &v7->m_TempViewerInfo.m_bIsNetworkVarExcluded;
          LODWORD(v22) = 0;
          v57 = p_nGridY;
          v13 = 0;
          dest = &v7->m_TempViewerInfo.m_PathToVector;
          p_nGridY = &nGridY;
          vLocationa = vLocation;
          vLocation = &nGridX;
          goto LABEL_28;
        }
LABEL_55:
        m_pArraySizeChangedDelegate = v7->m_TempViewerInfo.m_pArraySizeChangedDelegate;
        if ( m_pArraySizeChangedDelegate != 0 )
        {
          pfn = m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__pfn;
          v52 = (m_pArraySizeChangedDelegate->m_Closure.m_pthis
               + m_pArraySizeChangedDelegate->m_Closure.m_pFunction.__delta);
          if ( (pfn & 1) != 0 )
            pfn = *(pfn + *v52 - 1);
          pfn(v52);
        }
        goto LABEL_3;
      }
      v28 = v7->m_TempViewerInfo.m_pOwnerEntity.m_pObj;
      v7->m_TempViewerInfo.m_bResolved = 1;
      if ( v28 != 0 )
      {
        destb = v28;
        v22 = *(*g_pFlattenedSerializers + 272LL);
        v29 = GetNetworkSerializerForEntityInstance(v28);
        v30 = destb;
        dest = v77;
        v22(v77, g_pFlattenedSerializers, v29, v30, p_m_TempViewerInfo, &v7->m_TempViewerInfo.m_bIsNetworkVarExcluded);
        if ( &v7->m_TempViewerInfo.m_PathToVector == v77 )
          goto LABEL_25;
        v31 = v78;
        v7->m_TempViewerInfo.m_PathToVector.m_bUsingExternalPaths = 0;
        if ( v31 <= 6 )
        {
          v7->m_TempViewerInfo.m_PathToVector.m_nCount = v31;
          if ( v31 > 0 )
          {
            v32 = v77;
            if ( v79 != 0 )
              v32 = v77[0];
            memcpy(&v7->m_TempViewerInfo.m_PathToVector, v32, 2 * v31);
          }
          goto LABEL_25;
        }
LABEL_71:
        v7 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v84 = 442;
          nGridY = "../../public/tier2/fieldpath.h";
          v85 = "Path_SetCount";
          p_nGridX = &nGridY;
LABEL_73:
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            p_nGridX,
            "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
            6);
        }
        while ( 1 )
        {
LABEL_44:
          if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v44, v45, v42, v43) != 0 )
            loc_0 = -559038737;
          Plat_ExitProcess(1);
LABEL_47:
          v41 = v22;
LABEL_48:
          v46 = v82;
          if ( v82 <= 5 )
            break;
          v7 = &LOG_GENERAL;
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          {
            nGridY = "../../public/tier2/fieldpath.h";
            v85 = "Path_AddToTail";
            v84 = 425;
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &nGridY,
              "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
              6);
          }
        }
        this = v7->m_TempViewerInfo.m_pOwnerEntity.m_pObj;
        LOWORD(v82) = v82 + 1;
        v47 = (v7->m_TempViewerInfo.m_Vector.m_Memory.m_pMemory + v13);
        vLocation->u.m_FixedPaths[v46].m_nValue = v41;
        if ( this != 0 )
        {
          v62 = v47;
          v48.m_Value = EntityInstanceAddChangeAccessorPath(this, vLocation).m_Value;
          v47 = v62;
          v62[8].m_Value = v48.m_Value;
        }
        else
        {
          v47[8].m_Value = -1;
        }
        v49 = v7->m_TempViewerInfo.m_pOwnerEntity.m_pObj;
        if ( v49 != *&v47[4].m_Value )
          *&v47[4].m_Value = v49;
        while ( 1 )
        {
          LODWORD(v22) = v22 + 1;
          v13 += 48;
          if ( v22 >= v7->m_TempViewerInfo.m_Vector.m_Size )
            break;
LABEL_28:
          if ( !v7->m_TempViewerInfo.m_bResolved )
          {
            v33 = v7->m_TempViewerInfo.m_pOwnerEntity.m_pObj;
            v7->m_TempViewerInfo.m_bResolved = 1;
            if ( v33 != 0 )
            {
              v61 = v33;
              v59 = *(*g_pFlattenedSerializers + 272LL);
              v34 = GetNetworkSerializerForEntityInstance(v33);
              v59(p_nGridY, g_pFlattenedSerializers, v34, v61, p_m_TempViewerInfo, p_m_bIsNetworkVarExcluded);
              if ( dest != p_nGridY )
              {
                v35 = v85;
                v7->m_TempViewerInfo.m_PathToVector.m_bUsingExternalPaths = 0;
                if ( v35 > 6 )
                {
                  v7 = &LOG_GENERAL;
                  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) == 0 )
                    goto LABEL_44;
                  v81 = 442;
                  nGridX = "../../public/tier2/fieldpath.h";
                  v82 = "Path_SetCount";
                  p_nGridX = &nGridX;
                  goto LABEL_73;
                }
                v7->m_TempViewerInfo.m_PathToVector.m_nCount = v35;
                if ( v35 > 0 )
                {
                  v36 = 2 * v35;
                  v37 = p_nGridY;
                  if ( BYTE2(v85) != 0 )
                    v37 = nGridY;
                  memcpy(dest, v37, v36);
                }
              }
            }
            else
            {
              if ( v7->m_TempViewerInfo.m_PathToVector.m_bUsingExternalPaths )
                goto LABEL_63;
              v7->m_TempViewerInfo.m_PathToVector.m_nCount = 0;
            }
          }
          if ( !v7->m_TempViewerInfo.m_bIsNetworkVarExcluded )
          {
            m_nCount = v7->m_TempViewerInfo.m_PathToVector.m_nCount;
            BYTE2(v82) = 0;
            LOWORD(v82) = 0;
            if ( m_nCount > 6 )
              goto LABEL_71;
            LOWORD(v82) = m_nCount;
            if ( m_nCount <= 0 )
              goto LABEL_47;
            v39 = 2 * m_nCount;
            if ( v7->m_TempViewerInfo.m_PathToVector.m_bUsingExternalPaths )
              m_pPaths = v7->m_TempViewerInfo.m_PathToVector.u.m_pPaths;
            else
              m_pPaths = dest;
            __memcpy_chk(vLocation, m_pPaths, v39, 24);
            v41 = v22;
            if ( BYTE2(v82) == 0 )
              goto LABEL_48;
            v7 = &LOG_GENERAL;
            if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
            {
              nGridY = "../../public/tier2/fieldpath.h";
              v85 = "Path_AddToTail";
              v84 = 428;
              LoggingSystem_Log(
                LOG_GENERAL,
                LoggingSeverity_t::LS_ERROR,
                &nGridY,
                "Path_AddToTail failed for read only CFieldPath");
            }
            goto LABEL_44;
          }
        }
        LOWORD(p_nGridY) = v57;
        LODWORD(v13) = nID;
        vLocation = vLocationa;
        goto LABEL_55;
      }
      if ( !v7->m_TempViewerInfo.m_PathToVector.m_bUsingExternalPaths )
      {
        v7->m_TempViewerInfo.m_PathToVector.m_nCount = 0;
        goto LABEL_25;
      }
LABEL_63:
      CUtlVectorEmbeddedNetworkVar<TempViewerInfo_t,CDOTAFogOfWarTempViewers::NetworkVar_m_TempViewerInfo,-1>::Resolve(this);
    }
  }
LABEL_3:
  v14 = CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId(&g_DOTAFogOfWarSystem, 0);
  CFoW::GetGridUnitsClamped(&v14->m_FoW, vLocation, &nGridX, &nGridY);
  v15 = p_nGridY;
  TempViewerInfo_t::InitializeTempViewer(
    &v7->m_TempViewerInfo.m_Vector.m_Memory.m_pMemory[v15],
    FoWViewerType,
    nGridX,
    nGridY,
    bObstructedVision,
    &flRadiusa);
  v16 = 0.0;
  v7->m_TempViewerInfo.m_Vector.m_Memory.m_pMemory[v15].hOwner.m_Index = -1;
  if ( g_pGameRules != 0 )
    v16 = *&g_pGameRules[18].m_szQuestName[20];
  v7->m_TempViewerInfo.m_Vector.m_Memory.m_pMemory[v15].flEndTime = v16 + flDuration;
  flDurationb = &v7->m_TempViewerInfo.m_Vector.m_Memory.m_pMemory[v15];
  v7->m_flEndTimeMin = fminf(v7->m_flEndTimeMin, flDurationb->flEndTime);
  v17 = CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId(&g_DOTAFogOfWarSystem, 0);
  v18 = CFoW::AddViewer(&v17->m_FoW, FoWViewerType, nFoWTeamID);
  FoWViewerTypeb = flRadiusa;
  flDurationb->nFoWID = v18;
  nFoWID = v7->m_TempViewerInfo.m_Vector.m_Memory.m_pMemory[v15].nFoWID;
  v20 = CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId(&g_DOTAFogOfWarSystem, 0);
  CFoW::UpdateViewer(&v20->m_FoW, nFoWID, nFoWTeamID, vLocation, FoWViewerTypeb, bObstructedVision);
  return v13;
}


// CDOTAFogOfWarTempViewers::RemoveTempViewer  (line 449, @0x00000000024c2180, libserver.so)  // inlines: DOTAGameRules, Element, GetGameTime, Min<float>, operator[]
// callers: FOWRemoveTempViewer
void __fastcall CDOTAFogOfWarTempViewers::RemoveTempViewer(CDOTAFogOfWarTempViewers *const this, int nID)
{
  TempViewerInfo_t *v2; // rax
  float v3; // xmm1_4

  if ( nID <= this->m_TempViewerInfo.m_Vector.m_Size )
  {
    v2 = &this->m_TempViewerInfo.m_Vector.m_Memory.m_pMemory[nID];
    if ( v2 != 0 )
    {
      v3 = 0.0;
      if ( g_pGameRules != 0 )
        v3 = *&g_pGameRules[18].m_szQuestName[20];
      v2->flEndTime = v3;
      this->m_flEndTimeMin = fminf(this->m_flEndTimeMin, v3);
    }
  }
}


// FOWAddTempViewer  (line 464, @0x000000000252e970, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsValid, LookupEntity, operator bool
// calls: FoW_TeamNumberToFoWIndex, CDOTAFogOfWarTempViewers::AddTempViewer
// callers: CDOTAFogOfWarSystem::AddTempViewer
// globals: g_hFogOfWarTempViewers, CEntityHandle::gm_pEntityList
void __fastcall FOWAddTempViewer(CBaseModelEntity *p, int nTeamID, float a3, float flRadius, float flDuration)
{
  signed int v6; // eax
  CEntityHandle *v7; // rcx
  uint32 m_Index; // edx
  __int16 v9; // si
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rcx

  if ( a3 > 0.0 )
  {
    v6 = FoW_TeamNumberToFoWIndex(nTeamID);
    if ( v6 != 10000 )
    {
      v7 = &g_hFogOfWarTempViewers + v6;
      m_Index = v7->m_Index;
      if ( v7->m_Index + 2 > 1 )
      {
        v9 = v7->m_Index;
        v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_Index) >> 9) & 0x3F];
        if ( v10 != 0 )
        {
          v11 = &v10[v9 & 0x1FF];
          if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
            CDOTAFogOfWarTempViewers::AddTempViewer(v11->m_pInstance, p, v6, a3, flRadius);
        }
      }
    }
  }
}


// FOWAddTempViewer  (line 484, @0x000000000252ea30, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsValid, LookupEntity, operator bool
// calls: FoW_TeamNumberToFoWIndex, CDOTAFogOfWarTempViewers::AddTempViewer
// callers: CDOTAFogOfWarSystem::AddTempViewer
// globals: g_hFogOfWarTempViewers, CEntityHandle::gm_pEntityList
__int64 __fastcall FOWAddTempViewer(
        FoWViewerType_t FoWViewerType,
        int nTeamID,
        const CFieldPath *vLocation,
        float flRadius,
        float flDuration,
        bool bObstructedVision)
{
  signed int v9; // eax
  CEntityHandle *v10; // r10
  CEntityIdentity *v11; // rcx
  CEntityIdentity *v12; // rdi

  if ( flRadius > 0.0
    && (v9 = FoW_TeamNumberToFoWIndex(nTeamID), (v10 = &g_hFogOfWarTempViewers + v9)->m_Index + 2 > 1)
    && (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Index) >> 9) & 0x3F]) != 0
    && (v12 = &v11[v10->m_Index & 0x1FF]) != 0
    && v10->m_Index == v12->m_EHandle.m_Index )
  {
    return CDOTAFogOfWarTempViewers::AddTempViewer(
             v12->m_pInstance,
             FoWViewerType,
             v9,
             vLocation,
             flRadius,
             flDuration,
             bObstructedVision);
  }
  else
  {
    return 0xFFFFFFFFLL;
  }
}


// FOWRemoveTempViewer  (line 503, @0x00000000024c21e0, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsValid, LookupEntity, operator bool
// calls: FoW_TeamNumberToFoWIndex, CDOTAFogOfWarTempViewers::RemoveTempViewer
// callers: CDOTAFogOfWarSystem::RemoveTempViewer, CDOTAGamerules::ResetDefeated
// globals: g_hFogOfWarTempViewers, CEntityHandle::gm_pEntityList
void __fastcall FOWRemoveTempViewer(int nTeamID, int nID)
{
  CEntityHandle *v3; // rdx
  uint32 m_Index; // eax
  __int16 v5; // cx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx

  v3 = &g_hFogOfWarTempViewers + FoW_TeamNumberToFoWIndex(nTeamID);
  m_Index = v3->m_Index;
  if ( v3->m_Index + 2 > 1 )
  {
    v5 = v3->m_Index;
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v3->m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[v5 & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        CDOTAFogOfWarTempViewers::RemoveTempViewer(v7->m_pInstance, nID);
    }
  }
}


