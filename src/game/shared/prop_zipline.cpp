// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/prop_zipline.cpp:30
class CPropZipline : public CBaseAnimating {
	class NetworkVar_m_hPrevZipline {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hNextZipline {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	float m_flMaxSpeed;  // +0x4cc
	typedef CPropZipline ThisClass;

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
	CPropZipline(CPropZipline &);
	CPropZipline(CPropZipline &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual CPropZipline * GetCPropZipline();
	CPropZipline();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void ApplySessionPersisterValues(KeyValues &, KeyValues &);
	virtual void UpdateOnRemove();
	CPropZipline * GetPrevZipline();
	CPropZipline * GetNextZipline();
	CFuncLadder * GetZiplineLadder();
	float GetMaxRideSpeed();
	void LinkToZipline(CPropZipline &);
	void DisconnectZiplines();
	void DisconnectFromNextZipline();
	Vector GetZiplinePosition();
	Vector GetZiplinePositionOffset();
	Vector GetLadderPosition();
	Vector GetLadderPositionOffset();
	virtual ~CPropZipline();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[251] GetCPropZipline
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[6] Precache
	// vtable[76] ApplySessionPersisterValues
	// vtable[11] UpdateOnRemove
	// sizeof = 1232
};

// src/game/shared/prop_zipline.cpp:91
class C_CPropZipline_MapInstall {
	C_CPropZipline_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPropZipline::~CPropZipline  (line 30, @0x0000000002372ed0, libserver.so)  // inlines: ~CBaseAnimating
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CPropZipline::~CPropZipline(CPropZipline *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CPropZipline::~CPropZipline  (line 30, @0x0000000002372f10, libserver.so)  // inlines: ~CBaseAnimating, ~CPropZipline
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CPropZipline::~CPropZipline(CPropZipline *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CPropZipline::Schema_DynamicBinding  (line 32, @0x0000000002370cb0, libserver.so)
// globals: CPropZipline::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPropZipline::Schema_DynamicBinding(const CPropZipline *const this)
{
  return CPropZipline::s_pSchemaBinding;
}


// CPropZipline::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 32, @0x0000000002370cc0, libserver.so)
// globals: CPropZipline::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPropZipline::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPropZipline::CEntityInstanceEntityClass *const this)
{
  return CPropZipline::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPropZipline::CEntityInstanceEntityClass::DestructInstance  (line 32, @0x0000000002370cd0, libserver.so)  // inlines: Destruct<CPropZipline>
void __fastcall CPropZipline::CEntityInstanceEntityClass::DestructInstance(
        CPropZipline::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPropZipline::CEntityInstanceEntityClass::FreeInstance  (line 32, @0x0000000002370cf0, libserver.so)
void __fastcall CPropZipline::CEntityInstanceEntityClass::FreeInstance(
        CPropZipline::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPropZipline::CEntityInstanceEntityClass::CanAllocate  (line 32, @0x0000000002370d10, libserver.so)
bool __fastcall CPropZipline::CEntityInstanceEntityClass::CanAllocate(
        const CPropZipline::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPropZipline::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 32, @0x0000000002370d20, libserver.so)
// globals: CPropZipline::s_pSchemaBinding
const ISchemaBinding *__fastcall CPropZipline::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPropZipline::CEntityInstanceEntityClass *const this)
{
  return CPropZipline::s_pSchemaBinding;
}


// CPropZipline::CEntityInstanceEntityClass::AllocateInstance  (line 32, @0x0000000002372750, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPropZipline::CEntityInstanceEntityClass::AllocateInstance(
        CPropZipline::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1232);
  memset(v1, 0, 0x4D0u);
  return v1;
}


// CPropZipline::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x0000000002374f60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPropZipline::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPropZipline::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CPropZipline::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x0000000002374f80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPropZipline::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPropZipline::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPropZipline::GetEntityClassInternal  (line 32, @0x000000000237e5c0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CBaseAnimating::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "prop_zipline", "CPropZipline"
// globals: `guard variable for'CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass, CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPropZipline::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPropZipline::GetEntityClassInfo(void)::g_EntityCPropZiplineClassInfo, CPropZipline::GetEntityClassInfo(void)::g_EntityCPropZiplineClassInfo
CEntityClass *__cdecl CPropZipline::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass) != 0 )
  {
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_designerName.u.m_Id = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass._vptr_CEntityClass = off_3F79390;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_ComponentOffsets.m_Size = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_AllHelpers.m_Size = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_classInputs.m_Size = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_classOutputs.m_Size = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_requiredEHandle.m_Index = -1;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_hNetworkSerializer = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_pBaseClassInfo = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_pClassInfo = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_flags = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_nAllHelpersFlags = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_pScriptClassDesc = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_pInputs = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_nInputCount = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_pOutputs = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_nOutputCount = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_pGameClass = 0;
    CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass._vptr_CEntityClass = off_409B390;
    __cxa_guard_release(&`guard variable for'CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass);
    __cxa_atexit(
      CPropZipline::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass,
      &_dso_handle);
  }
  if ( g_pEntityCPropZiplineClass != 0 )
    return &CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass;
  if ( `guard variable for'CPropZipline::GetEntityClassInfo(void)::g_EntityCPropZiplineClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPropZipline::GetEntityClassInfo(void)::g_EntityCPropZiplineClassInfo) != 0 )
  {
    EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPropZipline::GetEntityClassInfo(void)::g_EntityCPropZiplineClassInfo,
      "CPropZipline",
      "prop_zipline",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPropZipline::GetEntityClassInfo(void)::g_EntityCPropZiplineClassInfo);
  }
  CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_pClassInfo = &CPropZipline::GetEntityClassInfo(void)::g_EntityCPropZiplineClassInfo;
  CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_pBaseClassInfo = CPropZipline::GetEntityClassInfo(void)::g_EntityCPropZiplineClassInfo.m_pBaseClassInfo;
  g_pEntityCPropZiplineClass = &CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass;
  CPropZipline::GetEntityClassInfo(void)::g_EntityCPropZiplineClassInfo.m_pClass = &CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass;
  CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCPropZiplineClass->m_pComponentOverrides = 0;
  return &CPropZipline::GetEntityClassInternal(void)::g_EntityCPropZiplineClass;
}


// CPropZipline::CEntityInstanceEntityClass::ConstructInstance  (line 32, @0x000000000237fb80, libserver.so)  // inlines: Construct<CPropZipline>
// calls: CPropZipline::CPropZipline
CEntityInstance *__fastcall CPropZipline::CEntityInstanceEntityClass::ConstructInstance(
        CPropZipline::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CPropZipline::CPropZipline(p);
  return p;
}


// CPropZipline::GetCPropZipline  (line 37, @0x0000000002370d30, libserver.so)
CPropZipline *__fastcall CPropZipline::GetCPropZipline(CPropZipline *const this)
{
  return this;
}


// CPropZipline::YouForgotToImplementOrDeclareServerClass  (line 91, @0x000000000234add0, libserver.so)
int __fastcall CPropZipline::YouForgotToImplementOrDeclareServerClass(CPropZipline *const this)
{
  return 0;
}


// CPropZipline::GetServerClass  (line 91, @0x0000000002351e10, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CPropZipline::GetServerClass(CPropZipline *const this)
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


// CPropZipline::CPropZipline  (line 96, @0x000000000236cf50, libserver.so)  // inlines: CEntityHandle, CHandle, CNetworkVarBase, NetworkStateChanged, Set, operator=, operator=<long int>, ~CBaseAnimating
// calls: CBaseAnimating::CBaseAnimating, operator!=<CPropZipline>, CBaseEntity::NetworkStateChanged, CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume
// callers: CPropZipline::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CPropZipline::CPropZipline(CPropZipline *const this)
{
  CNetworkVarBase<CHandle<CPropZipline>,CPropZipline::NetworkVar_m_hNextZipline> *p_m_hNextZipline; // r12
  CHandle<CPropZipline> b; // [rsp+0h] [rbp-30h] BYREF
  CHandle<CPropZipline> v4; // [rsp+10h] [rbp-20h] BYREF

  p_m_hNextZipline = &this->m_hNextZipline;
  CBaseAnimating::CBaseAnimating(this);
  b.m_Index = -1;
  this->m_hPrevZipline.m_Value.m_Index = -1;
  this->_vptr_IHandleEntity = &off_409B410;
  this->m_hNextZipline.m_Value.m_Index = -1;
  this->m_hZiplineLadder.m_Index = -1;
  if ( operator!=<CPropZipline>(&this->m_hPrevZipline.m_Value, &b) )
  {
    CBaseEntity::NetworkStateChanged(this, 0x4C0u, -1, -1);
    this->m_hPrevZipline.m_Value = b;
  }
  v4.m_Index = -1;
  if ( operator!=<CPropZipline>(&p_m_hNextZipline->m_Value, &v4) )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1220, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_hNextZipline.m_Value = v4;
  }
  this->m_hZiplineLadder.m_Index = -1;
  this->m_flMaxSpeed = 1000.0;
}


// CPropZipline::Spawn  (line 111, @0x0000000002366980, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CUtlString, CVProfScope, GetClassInfo, GetEntityClass, Init, InvokeCallbacks, IsEmpty, IsEnabled, OverrideAllocator, Release, ReleaseEntitySpawnerEntityVariantAllocator, SetClassName, SetValue, SetValue<QAngle>, SetValue<Vector>, SetWorldTransform, Spawn, operator!, operator(), ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CUtlString, ~CVProfScope
// calls: CBaseAnimating::Spawn, GetModelNameFromKeyValues, CBaseModelEntity::SetModel, CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::SetValue, CEntitySystem::FindClassByDesignName, CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsOrigin, CEntityKeyValues::SetValue<Vector>, CEntityKeyValues::SetValue<QAngle> (26 total)
// strings: "models/weapons/zipline_post.vmdl", "info_ladder_dismount", "Server Simulation", "Spawn"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __fastcall CPropZipline::Spawn(CPropZipline *const this, const CEntityKeyValues *pKeyValues)
{
  const char *ModelNameFromKeyValues; // rax
  CEntitySystem *v5; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v7; // rdx
  char v8; // al
  const QAngle *AbsAngles; // r14
  const Vector *AbsOrigin; // rax
  CEntityKeyValues *m_pEntityKeyValues; // rdi
  int m_enabled; // edx
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v14; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v16; // r14
  CEntitySpawnerContext<CBaseEntity> *m_pContext; // rbx
  CEntityKeyValues *i; // r15
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v21; // rdi
  CUtlScratchMemoryPool *v22; // rdi
  CEntityKeyValues *v23; // rbx
  const char *m_pszClassname; // rdx
  int m_nEntitySpawnerDataUseCount; // ecx
  bool v27; // [rsp+1Fh] [rbp-E1h]
  _QWORD v28[2]; // [rsp+20h] [rbp-E0h] BYREF
  CEntitySpawner<CBaseEntity> spawner; // [rsp+30h] [rbp-D0h] BYREF

  CBaseAnimating::Spawn(this, pKeyValues);
  ModelNameFromKeyValues = GetModelNameFromKeyValues(pKeyValues, "models/weapons/zipline_post.vmdl");
  CBaseModelEntity::SetModel(this, ModelNameFromKeyValues);
  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner._vptr_CEntitySpawnerBase = off_3FCEBD0;
  spawner.m_scriptClassName.m_pString = 0;
  spawner.m_pContext = 0;
  v5 = g_pEntitySystem;
  spawner.m_pSpawnBatch = 0;
  spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v5->m_entitySpawnerData;
  spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v5);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  v7 = *&SpawnOriginOffset->m_flMatVal[0][2];
  spawner.m_pEntityKeyValues = 0;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v7;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
  spawner.m_pEntityClass = g_pEntityCBaseEntityClass;
  if ( g_pApplication != 0 )
    v8 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v8 = 0;
  spawner.m_bValidateKeys = v8;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, "info_ladder_dismount");
  spawner.m_pEntityClass = CEntitySystem::FindClassByDesignName(
                             g_pEntitySystem,
                             "info_ladder_dismount",
                             &spawner.m_scriptClassName);
  AbsAngles = CBaseEntity::GetAbsAngles(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  CEntityKeyValues::SetValue<Vector>(spawner.m_pEntityKeyValues, -467664362, AbsOrigin);
  CEntityKeyValues::SetValue<QAngle>(spawner.m_pEntityKeyValues, -1164387633, AbsAngles);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    m_enabled = g_VProfCurrentProfile.m_enabled;
    v27 = m_enabled != 0;
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
    v14 = CUtlString::Get(&spawner.m_scriptClassName);
    Entity = CEntitySystem::CreateEntity(
               g_pEntitySystem,
               spawner.m_hSpawnGroupHandle,
               spawner.m_pEntityClass,
               v14,
               m_nMode,
               -1,
               -1,
               0,
               0);
    v16 = Entity;
    if ( Entity != 0 )
    {
      v28[0] = Entity->m_pEntity;
      v28[1] = spawner.m_pEntityKeyValues;
      (*(*g_pGameResourceService + 280LL))(
        g_pGameResourceService,
        spawner.m_hSpawnGroupHandle,
        1,
        v28,
        &spawner.m_mSpawnGroupToWorld);
      CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v16, spawner.m_pEntityKeyValues);
      if ( spawner.m_pSpawnBatch == 0 )
        CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
      m_pContext = spawner.m_pContext;
      for ( i = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
      {
        m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
        pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
        if ( m_pthis != 0 || pfn != 0 )
        {
          v21 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
          if ( (pfn & 1) != 0 )
            pfn = *(pfn + *v21 - 1);
          (pfn)(v21, v16, i);
        }
      }
    }
    if ( v27 )
      CVProfile::ExitScope(&g_VProfCurrentProfile);
  }
  v22 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  spawner._vptr_CEntitySpawnerBase = off_3FCEBB0;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v22 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v22);
  }
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v23 = spawner.m_pEntityKeyValues;
    if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v23);
      operator delete(v23);
    }
  }
  if ( spawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
}


// CPropZipline::Activate  (line 125, @0x000000000236db80, libserver.so)  // inlines: CGameTrace, DidHit, EnableInteractsWith, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, GetNextZipline, GetPrevZipline, GetZiplinePosition, IndexToIdentity, Init, IsValid, Length, LookupEntity, Next, Ray_t, RnCollisionAttr_t, TraceRay, TypedEntityInstanceByClassIter_t, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CEntityInstance*, operator CPropZipline*, operator+, operator-
// calls: CBaseAnimating::Activate, EntityInstanceByClassIter_t::EntityInstanceByClassIter_t, EntityInstanceByClassIter_t::Next, CBaseEntity::GetAbsOrigin, CEntityHandle::operator CEntityInstance*, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CPropZipline::LinkToZipline
// strings: "prop_zipline"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPropZipline::Activate(CPropZipline *const this, ActivateType_t activateType)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CPropZipline *v6; // r15
  bool v7; // r14
  CPropZipline *m_pInstance; // r12
  const Vector *AbsOrigin; // rax
  const Vector *v10; // rax
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm4_4
  ConVar *m_pParent; // rax
  float flDistance; // [rsp+8h] [rbp-1C8h]
  float v17; // [rsp+Ch] [rbp-1C4h]
  float v18; // [rsp+10h] [rbp-1C0h]
  float v19; // [rsp+14h] [rbp-1BCh]
  float flBestDistance; // [rsp+18h] [rbp-1B8h]
  float vToOther; // [rsp+1Ch] [rbp-1B4h]
  float vToOther_4; // [rsp+20h] [rbp-1B0h]
  float vToOther_8; // [rsp+24h] [rbp-1ACh]
  float pTraceFilter; // [rsp+28h] [rbp-1A8h]
  TypedEntityInstanceByClassIter_t<CPropZipline> iter; // [rsp+30h] [rbp-1A0h] BYREF
  CTraceFilterSimple v26; // [rsp+60h] [rbp-170h] BYREF
  Ray_t ray; // [rsp+A0h] [rbp-130h] BYREF
  trace_t tr; // [rsp+F0h] [rbp-E0h] BYREF

  CBaseAnimating::Activate(this, activateType);
  m_Index = this->m_hNextZipline.m_Value.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hNextZipline.m_Value.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hNextZipline.m_Value.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 )
          goto LABEL_20;
      }
    }
  }
  EntityInstanceByClassIter_t::EntityInstanceByClassIter_t(
    &iter,
    "prop_zipline",
    0,
    EntityIterType_t::ENTITY_ENUM_ITERATE_NON_DORMANT_ONLY);
  v6 = EntityInstanceByClassIter_t::Next(&iter);
  if ( v6 != 0 )
  {
    v7 = 0;
    m_pInstance = 0;
    flBestDistance = 4000.0;
    do
    {
      if ( v6 != this )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(this);
        pTraceFilter = AbsOrigin->x + 0.0;
        vToOther_8 = AbsOrigin->y + 0.0;
        vToOther_4 = AbsOrigin->z + 128.0;
        v10 = CBaseEntity::GetAbsOrigin(v6);
        v11 = (v10->x + 0.0) - pTraceFilter;
        v12 = (v10->y + 0.0) - vToOther_8;
        v13 = (v10->z + 128.0) - vToOther_4;
        v14 = fsqrt(((v11 * v11) + (v12 * v12)) + (v13 * v13));
        if ( v14 < flBestDistance && v14 >= 128.0 )
        {
          flDistance = v14;
          v17 = ((v11 * v11) + (v12 * v12)) + (v13 * v13);
          v18 = (v10->z + 128.0) - vToOther_4;
          v19 = (v10->y + 0.0) - vToOther_8;
          vToOther = (v10->x + 0.0) - pTraceFilter;
          if ( CEntityHandle::operator CEntityInstance *(&v6->m_hNextZipline.m_Value) == 0
            && CEntityHandle::operator CEntityInstance *(&v6->m_hPrevZipline.m_Value) == 0 )
          {
            memset(&tr.m_ShapeAttributes, 0, 31);
            tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
            CGameTrace::Init(&tr);
            ray.m_IsRay = 1;
            ray.m_Start.w = 0.0;
            memset(&ray.m_Delta.w, 0, 36);
            m_pParent = phys_traceline_radius.m_pParent;
            ray.m_Delta.z = v18;
            ray.m_Delta.x = vToOther;
            ray.m_Delta.y = v19;
            ray.m_flRadius = m_pParent->m_Value.m_fValue;
            ray.m_Start.x = pTraceFilter;
            ray.m_Start.y = vToOther_8;
            ray.m_IsSwept = v17 != 0.0;
            ray.m_Start.z = vToOther_4;
            CTraceFilterSimple::CTraceFilterSimple(&v26, this, 4, 0);
            v26.m_attr.m_nInteractsWith |= 0x7001uLL;
            CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v26, &tr);
            if ( tr.fraction >= 1.0 && !tr.startsolid )
              goto LABEL_18;
            if ( tr.m_pEnt == v6 )
            {
LABEL_18:
              flBestDistance = flDistance;
              m_pInstance = v6;
              v7 = v18 > 0.0;
            }
          }
        }
      }
      v6 = EntityInstanceByClassIter_t::Next(&iter);
    }
    while ( v6 != 0 );
    if ( m_pInstance != 0 )
    {
      if ( !v7 )
      {
LABEL_20:
        CPropZipline::LinkToZipline(this, m_pInstance);
        return;
      }
      CPropZipline::LinkToZipline(m_pInstance, this);
    }
  }
}


// CPropZipline::Precache  (line 180, @0x0000000002370310, libserver.so)  // inlines: Precache, PrecacheParticleSystem
// calls: CEntityInstance::Precache, GetModelNameFromKeyValues, CBaseEntity::PrecacheModel, PrecacheParticleSystem
// strings: "models/weapons/zipline_post.vmdl", "particles/jean/combine_rope_segment.vpcf"
void __fastcall CPropZipline::Precache(CPropZipline *const this, const CEntityPrecacheContext *pContext)
{
  const char *ModelNameFromKeyValues; // rax

  CEntityInstance::Precache(this, pContext);
  ModelNameFromKeyValues = GetModelNameFromKeyValues(pContext->m_pKeyValues, "models/weapons/zipline_post.vmdl");
  CBaseEntity::PrecacheModel(ModelNameFromKeyValues, pContext);
  PrecacheParticleSystem("particles/jean/combine_rope_segment.vpcf", pContext->m_pManifest);
}


// CPropZipline::ApplySessionPersisterValues  (line 189, @0x000000000234b8f0, libserver.so)
// calls: CBaseEntity::ApplySessionPersisterValues
void __fastcall CPropZipline::ApplySessionPersisterValues(
        CPropZipline *const this,
        KeyValues *const kvEntity,
        KeyValues *const kvParent)
{
  CBaseEntity::ApplySessionPersisterValues(this, kvEntity, kvParent);
}


// CPropZipline::UpdateOnRemove  (line 222, @0x000000000236d260, libserver.so)
// calls: CPropZipline::DisconnectZiplines, CBaseAnimating::UpdateOnRemove
void __fastcall CPropZipline::UpdateOnRemove(CPropZipline *const this)
{
  CPropZipline::DisconnectZiplines(this);
  CBaseAnimating::UpdateOnRemove(this);
}


// CPropZipline::LinkToZipline  (line 231, @0x000000000236d280, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddKeyValue<bool>, AddToTail, Base, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CUtlString, CVProfScope, Element, FastSqrt, FindKeyHash, Free, Get, GetClassInfo, GetEHandle, GetEntityClass, GetEntityIdentity, GetEntryIndex, GetInstance, GetLadderPosition, GetSerialNumber, IndexToIdentity, Init, InvokeCallbacks, IsEmpty, IsEnabled, IsValid, Length, LookupEntity, NetworkStateChanged, OverrideAllocator, RAD2DEG, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, SetClassName, SetValue, SetValue<QAngle>, SetValue<Vector>, SetValue<bool>, SetValue<float>, SetWorldTransform, Spawn, VectorAdd, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CEntityInstance*, operator!, operator(), operator+, operator-, operator=, operator=<CPropZipline*>, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CUtlString, ~CVProfScope
// calls: CHandle<CPropZipline>::CHandle, operator!=<CPropZipline>, CBaseEntity::GetAbsOrigin, CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::SetValue, CEntitySystem::FindClassByDesignName, CEntityKeyValues::SetValue<Vector>, CEntityKeyValues::SetValue<QAngle>, asinf, CEntityKeyValues::HasValue (29 total)
// callers: CPropZipline::Activate
// strings: "func_ladder", "Server Simulation", "Spawn", "Attempted to set attribute %s as if it was a non-attribute key!\n"
// globals: CEntityHandle::gm_pEntityList, CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __fastcall CPropZipline::LinkToZipline(CPropZipline *const this, CPropZipline *const other)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  const Vector *AbsOrigin; // r14
  const Vector *v8; // rax
  vec_t v9; // xmm2_4
  vec_t v10; // xmm1_4
  vec_t v11; // xmm0_4
  CUtlScratchMemoryPool *v12; // rax
  CEntitySystem *v13; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v15; // rax
  char v16; // al
  const Vector *v17; // rax
  float v18; // xmm1_4
  float v19; // xmm0_4
  CEntityKeyValues *m_pEntityKeyValues; // r15
  float v21; // xmm0_4
  CEntityKeyValues *v22; // rdi
  int m_enabled; // edx
  EntityNetworkingMode_t m_nMode; // r15d
  const char *v25; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v27; // r15
  CEntityIdentity *m_pEntity; // rax
  __int16 v29; // si
  CEntitySpawnerContext<CFuncLadder> *m_pContext; // r13
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v33; // rdi
  uint32 v34; // eax
  CUtlScratchMemoryPool *v35; // rdi
  CEntityKeyValues *v36; // rbx
  const char *m_pszClassname; // rdx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v40; // cx
  __int64 v41; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v42; // rdx
  int m_nEntitySpawnerDataUseCount; // ecx
  __int16 v44; // dx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v47; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v48; // rax
  uint16 m_flags; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v50; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int16 v54; // ax
  bool v55; // [rsp+27h] [rbp-109h]
  CEntityKeyValues *i; // [rsp+28h] [rbp-108h]
  __int64 v57; // [rsp+28h] [rbp-108h]
  int v58; // [rsp+30h] [rbp-100h]
  Vector vToEndPoint; // [rsp+40h] [rbp-F0h] BYREF
  float value[4]; // [rsp+50h] [rbp-E0h] BYREF
  CEntitySpawner<CFuncLadder> spawner; // [rsp+60h] [rbp-D0h] BYREF

  CHandle<CPropZipline>::CHandle(&spawner, other);
  if ( operator!=<CPropZipline>(&this->m_hNextZipline.m_Value, &spawner) )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1220, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_hNextZipline.m_Value.m_Index = spawner._vptr_CEntitySpawnerBase;
  }
  CHandle<CPropZipline>::CHandle(&spawner, this);
  if ( operator!=<CPropZipline>(&other->m_hPrevZipline.m_Value, &spawner) )
  {
    (*(other->_vptr_IHandleEntity + 22))(other, 1216, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    other->m_hPrevZipline.m_Value.m_Index = spawner._vptr_CEntitySpawnerBase;
  }
  m_Index = this->m_hZiplineLadder.m_Index;
  if ( m_Index + 2 <= 1
    || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hZiplineLadder.m_Index) >> 9) & 0x3F]) == 0
    || (v6 = &v5[this->m_hZiplineLadder.m_Index & 0x1FF]) == 0
    || m_Index != v6->m_EHandle.m_Index
    || v6->m_pInstance == 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    v8 = CBaseEntity::GetAbsOrigin(other);
    v9 = v8->x - AbsOrigin->x;
    v10 = v8->y - AbsOrigin->y;
    v11 = v8->z - AbsOrigin->z;
    spawner._vptr_CEntitySpawnerBase = off_409BC10;
    vToEndPoint.x = v9;
    vToEndPoint.y = v10;
    vToEndPoint.z = v11;
    spawner.m_modifyScope.m_pKeyValues = 0;
    spawner.m_modifyScope.m_pPrevAllocator = 0;
    CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
    spawner._vptr_CEntitySpawnerBase = off_409BC30;
    v12 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
    spawner.m_scriptClassName.m_pString = 0;
    spawner.m_pContext = 0;
    v13 = g_pEntitySystem;
    spawner.m_pSpawnBatch = 0;
    ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    spawner.m_pPrevAllocator = v12;
    CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v13->m_entitySpawnerData;
    spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v13);
    SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
    *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
    qmemcpy(spawner.m_mSpawnGroupToWorld.m_flMatVal[1], SpawnOriginOffset->m_flMatVal[1], 24);
    v15 = *&SpawnOriginOffset->m_flMatVal[2][2];
    spawner.m_pEntityKeyValues = 0;
    *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][2] = v15;
    spawner.m_pEntityClass = g_pEntityCFuncLadderClass;
    if ( g_pApplication != 0 )
      v16 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
    else
      v16 = 0;
    spawner.m_bValidateKeys = v16;
    spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
    (*spawner._vptr_CEntitySpawnerBase)(&spawner);
    CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, "func_ladder");
    spawner.m_pEntityClass = CEntitySystem::FindClassByDesignName(
                               g_pEntitySystem,
                               "func_ladder",
                               &spawner.m_scriptClassName);
    v17 = CBaseEntity::GetAbsOrigin(this);
    v18 = v17->y + 0.0;
    v19 = v17->z + 40.0;
    value[0] = v17->x + 0.0;
    value[1] = v18;
    value[2] = v19;
    CEntityKeyValues::SetValue<Vector>(spawner.m_pEntityKeyValues, -467664362, value);
    CEntityKeyValues::SetValue<QAngle>(spawner.m_pEntityKeyValues, -1164387633, &vec3_angle);
    CEntityKeyValues::SetValue<Vector>(spawner.m_pEntityKeyValues, -1949307717, &vToEndPoint);
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
    if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
      goto LABEL_12;
    m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_59:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
      v44 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
      m_nAllocated = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      if ( m_nAllocated != 0 )
      {
        if ( m_nAllocated <= 9 )
          m_pElements = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        else
          m_pElements = m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      m_pElements[(m_pEntityKeyValues->m_keyHashes.m_nCount - 1)] = 1085481585;
      v57 = v44;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v47 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v47 = 0;
      v48 = &v47[v57];
      m_flags = v48->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v48->m_value.m_flags = m_flags & 0xFFFE;
      v48->m_value.m_uint64 = 0;
      v48->m_value.m_type = 6;
      v48->m_value.m_char = 1;
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v50 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v50 = 0;
      v50[v57].m_pAttributeName = 0;
      goto LABEL_12;
    }
    v40 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v41 = 0;
    while ( 1 )
    {
      if ( v40 != 0 )
      {
        v42 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v40 > 9 )
          v42 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v42 = 0;
      }
      if ( v42[v41] == 1085481585 )
        break;
      if ( m_nCount <= ++v41 )
        goto LABEL_59;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v51 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v52 = v41;
      v53 = &v51[v52];
      if ( v51[v52].m_pAttributeName != 0 )
      {
LABEL_71:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v51[v52].m_pAttributeName);
LABEL_12:
        v21 = fabs(vToEndPoint.z);
        if ( v21 > 0.0
          && (asinf(
                v21
              / fsqrt(((vToEndPoint.x * vToEndPoint.x) + (vToEndPoint.y * vToEndPoint.y)) + (vToEndPoint.z
                                                                                           * vToEndPoint.z)))
            * 57.295776) >= 14.0 )
        {
          value[0] = 1000.0;
          CEntityKeyValues::SetValue<float>(spawner.m_pEntityKeyValues, 1949705095, value);
        }
        v22 = spawner.m_pEntityKeyValues;
        v58 = -1;
        if ( spawner.m_pEntityKeyValues != 0 )
        {
          m_enabled = g_VProfCurrentProfile.m_enabled;
          v55 = m_enabled != 0;
          if ( m_enabled != 0 )
          {
            CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
            v22 = spawner.m_pEntityKeyValues;
          }
          if ( !CEntityKeyValues::HasValue(v22, -971301790) )
          {
            m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
            if ( m_pszClassname != 0 )
              CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
          }
          CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
          m_nMode = spawner.m_nMode;
          v25 = CUtlString::Get(&spawner.m_scriptClassName);
          Entity = CEntitySystem::CreateEntity(
                     g_pEntitySystem,
                     spawner.m_hSpawnGroupHandle,
                     spawner.m_pEntityClass,
                     v25,
                     m_nMode,
                     -1,
                     -1,
                     0,
                     0);
          v27 = Entity;
          if ( Entity != 0 )
          {
            m_pEntity = Entity->m_pEntity;
            if ( m_pEntity != 0 )
            {
              v29 = 0x7FFF;
              if ( m_pEntity->m_EHandle.m_Index != -1 )
                v29 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
              v58 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v29 & 0x7FFF;
            }
            *value = m_pEntity;
            *&value[2] = spawner.m_pEntityKeyValues;
            (*(*g_pGameResourceService + 280LL))(
              g_pGameResourceService,
              spawner.m_hSpawnGroupHandle,
              1,
              value,
              &spawner.m_mSpawnGroupToWorld);
            CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v27, spawner.m_pEntityKeyValues);
            if ( spawner.m_pSpawnBatch == 0 )
              CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
            m_pContext = spawner.m_pContext;
            for ( i = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
            {
              m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
              pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
              if ( m_pthis != 0 || pfn != 0 )
              {
                v33 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
                if ( (pfn & 1) != 0 )
                  pfn = *(pfn + *v33 - 1);
                (pfn)(v33, v27, i);
              }
            }
          }
          if ( v55 )
            CVProfile::ExitScope(&g_VProfCurrentProfile);
          v34 = v58;
        }
        else
        {
          v34 = -1;
        }
        this->m_hZiplineLadder.m_Index = v34;
        v35 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
        spawner._vptr_CEntitySpawnerBase = off_409BC10;
        CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
        if ( v35 == &g_pEntitySystem->m_entitySpawnerData )
        {
          m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
          g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
          if ( m_nEntitySpawnerDataUseCount == 1 )
            CUtlScratchMemoryPool::FreeAll(v35);
        }
        if ( spawner.m_pEntityKeyValues != 0 )
        {
          CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
          v36 = spawner.m_pEntityKeyValues;
          if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
          {
            CEntityKeyValues::~CEntityKeyValues(v36);
            operator delete(v36);
          }
        }
        if ( spawner.m_scriptClassName.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
        CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
        return;
      }
    }
    else
    {
      v52 = v41;
      v51 = 0;
      v53 = v52 * 24;
      if ( *(v52 * 24 + 16) != 0 )
        goto LABEL_71;
    }
    v54 = *(v53 + 10);
    if ( (v54 & 1) != 0 )
      *(v53 + 10) = v54 & 0xFFFE;
    *v53 = 0;
    *(v53 + 8) = 6;
    *v53 = 1;
    goto LABEL_12;
  }
}


// CPropZipline::DisconnectZiplines  (line 263, @0x000000000236d1e0, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsValid, LookupEntity, operator bool
// calls: CPropZipline::DisconnectFromNextZipline
// callers: CPropZipline::UpdateOnRemove
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPropZipline::DisconnectZiplines(CPropZipline *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  CPropZipline::DisconnectFromNextZipline(this);
  m_Index = this->m_hPrevZipline.m_Value.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPrevZipline.m_Value.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hPrevZipline.m_Value.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
        CPropZipline::DisconnectFromNextZipline(v4->m_pInstance);
    }
  }
}


// CPropZipline::DisconnectFromNextZipline  (line 273, @0x000000000236d060, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator CEntityInstance*, operator bool, operator->, operator=, operator=<long int>
// calls: UTIL_Remove, operator!=<CPropZipline>
// callers: CPropZipline::DisconnectZiplines
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPropZipline::DisconnectFromNextZipline(CPropZipline *const this)
{
  uint32 m_Index; // edx
  CConcreteEntityList *v3; // rax
  CEntityIdentity *v4; // rcx
  CEntityIdentity *v5; // rcx
  uint32 v6; // edx
  CEntityIdentity *v7; // rax
  CEntityIdentity *v8; // rax
  const CHandle<CPropZipline> *m_pInstance; // r14
  CHandle<CPropZipline> b; // [rsp+0h] [rbp-30h] BYREF

  m_Index = this->m_hZiplineLadder.m_Index;
  v3 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hZiplineLadder.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hZiplineLadder.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index && v5->m_pInstance != 0 )
      {
        UTIL_Remove(v5->m_pInstance);
        v3 = CEntityHandle::gm_pEntityList;
        this->m_hZiplineLadder.m_Index = -1;
      }
    }
  }
  v6 = this->m_hNextZipline.m_Value.m_Index;
  if ( v6 + 2 > 1 )
  {
    v7 = v3->m_pIdentityChunks[(LOWORD(this->m_hNextZipline.m_Value.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[this->m_hNextZipline.m_Value.m_Index & 0x1FF];
      if ( v8 != 0 && v6 == v8->m_EHandle.m_Index )
      {
        m_pInstance = v8->m_pInstance;
        b.m_Index = -1;
        if ( operator!=<CPropZipline>(m_pInstance + 304, &b) )
        {
          (*(*&m_pInstance->m_Index + 176LL))(m_pInstance, 1216, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          m_pInstance[304].m_Index = b.m_Index;
        }
        b.m_Index = -1;
        if ( operator!=<CPropZipline>(&this->m_hNextZipline.m_Value, &b) )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 1220, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_hNextZipline.m_Value = b;
        }
      }
    }
  }
}


