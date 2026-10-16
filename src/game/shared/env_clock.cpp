// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/env_clock.cpp:14
class CEnvClock : public CBaseEntity {
	class NetworkVar_m_hHourHand {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hMinuteHand {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hSecondHand {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flStartGameTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flStartClockSeconds {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	string_t m_iszHourHandName;  // +0x308
	string_t m_iszMinuteHandName;  // +0x310
	string_t m_iszSecondHandName;  // +0x318
	int m_nTimeZone;  // +0x320
	bool m_bUseLocalTime;  // +0x324

	typedef CEnvClock ThisClass;

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
	CEnvClock(CEnvClock &);
	CEnvClock(CEnvClock &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CEnvClock();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual int UpdateTransmitState();
	void UpdateThink();
	void UpdateInternal();
	virtual ~CEnvClock();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[64] UpdateTransmitState
	// sizeof = 832
};

// src/game/shared/env_clock.cpp:57
class C_CEnvClock_MapInstall {
	C_CEnvClock_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnvClock::~CEnvClock  (line 14, @0x0000000001eec7f0, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CEnvClock::~CEnvClock(CEnvClock *const this)
{
  this->_vptr_IHandleEntity = &off_3FB7410;
  CBaseEntity::~CBaseEntity(this);
}


// CEnvClock::~CEnvClock  (line 14, @0x0000000001eec810, libserver.so)  // inlines: ~CEnvClock
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CEnvClock::~CEnvClock(CEnvClock *const this)
{
  this->_vptr_IHandleEntity = &off_3FB7410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvClock::Schema_DynamicBinding  (line 16, @0x0000000001eea590, libserver.so)
// globals: CEnvClock::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvClock::Schema_DynamicBinding(const CEnvClock *const this)
{
  return CEnvClock::s_pSchemaBinding;
}


// CEnvClock::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 16, @0x0000000001eea5a0, libserver.so)
// globals: CEnvClock::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvClock::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvClock::CEntityInstanceEntityClass *const this)
{
  return CEnvClock::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvClock::CEntityInstanceEntityClass::DestructInstance  (line 16, @0x0000000001eea5b0, libserver.so)  // inlines: Destruct<CEnvClock>
void __fastcall CEnvClock::CEntityInstanceEntityClass::DestructInstance(
        CEnvClock::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvClock::CEntityInstanceEntityClass::FreeInstance  (line 16, @0x0000000001eea5d0, libserver.so)
void __fastcall CEnvClock::CEntityInstanceEntityClass::FreeInstance(
        CEnvClock::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvClock::CEntityInstanceEntityClass::CanAllocate  (line 16, @0x0000000001eea5f0, libserver.so)
bool __fastcall CEnvClock::CEntityInstanceEntityClass::CanAllocate(
        const CEnvClock::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvClock::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 16, @0x0000000001eea600, libserver.so)
// globals: CEnvClock::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvClock::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvClock::CEntityInstanceEntityClass *const this)
{
  return CEnvClock::s_pSchemaBinding;
}


// CEnvClock::CEntityInstanceEntityClass::AllocateInstance  (line 16, @0x0000000001eebe60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvClock::CEntityInstanceEntityClass::AllocateInstance(
        CEnvClock::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 832);
  memset(v1, 0, 0x340u);
  return v1;
}


// CEnvClock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 16, @0x0000000001eedea0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvClock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvClock::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CEnvClock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 16, @0x0000000001eedec0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvClock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvClock::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvClock::CEntityInstanceEntityClass::ConstructInstance  (line 16, @0x0000000001ef09c0, libserver.so)  // inlines: Construct<CEnvClock>
// calls: CEnvClock::CEnvClock
CEntityInstance *__fastcall CEnvClock::CEntityInstanceEntityClass::ConstructInstance(
        CEnvClock::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CEnvClock::CEnvClock(p);
  return p;
}


// CEnvClock::GetEntityClassInternal  (line 16, @0x0000000001ef6f90, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "env_clock", "CEnvClock"
// globals: `guard variable for'CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass, CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CEnvClock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvClock::GetEntityClassInfo(void)::g_EntityCEnvClockClassInfo, CEnvClock::GetEntityClassInfo(void)::g_EntityCEnvClockClassInfo
CEntityClass *__cdecl CEnvClock::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass) != 0 )
  {
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_designerName.u.m_Id = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass._vptr_CEntityClass = off_3F79390;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_ComponentOffsets.m_Size = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_AllHelpers.m_Size = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_instanceUnserializer.m_atomicFields,
      4);
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_classInputs.m_Size = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_classInputs.m_Memory.m_pMemory = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_classOutputs.m_Size = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_requiredEHandle.m_Index = -1;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_hNetworkSerializer = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_pBaseClassInfo = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_pClassInfo = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_flags = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_nAllHelpersFlags = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_pScriptClassDesc = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_pInputs = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_nInputCount = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_pOutputs = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_nOutputCount = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_pGameClass = 0;
    CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass._vptr_CEntityClass = off_3FB7390;
    __cxa_guard_release(&`guard variable for'CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass);
    __cxa_atexit(
      CEnvClock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvClockClass != 0 )
    return &CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass;
  if ( `guard variable for'CEnvClock::GetEntityClassInfo(void)::g_EntityCEnvClockClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvClock::GetEntityClassInfo(void)::g_EntityCEnvClockClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvClock::GetEntityClassInfo(void)::g_EntityCEnvClockClassInfo,
      "CEnvClock",
      "env_clock",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvClock::GetEntityClassInfo(void)::g_EntityCEnvClockClassInfo);
  }
  CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_pClassInfo = &CEnvClock::GetEntityClassInfo(void)::g_EntityCEnvClockClassInfo;
  CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_pBaseClassInfo = CEnvClock::GetEntityClassInfo(void)::g_EntityCEnvClockClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvClockClass = &CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass;
  CEnvClock::GetEntityClassInfo(void)::g_EntityCEnvClockClassInfo.m_pClass = &CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass;
  CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEnvClockClass->m_pComponentOverrides = 0;
  return &CEnvClock::GetEntityClassInternal(void)::g_EntityCEnvClockClass;
}


// CEnvClock::YouForgotToImplementOrDeclareServerClass  (line 57, @0x0000000001ecbee0, libserver.so)
int __fastcall CEnvClock::YouForgotToImplementOrDeclareServerClass(CEnvClock *const this)
{
  return 0;
}


// CEnvClock::GetServerClass  (line 57, @0x0000000001ed11e0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CEnvClock::GetServerClass(CEnvClock *const this)
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


// CEnvClock::CEnvClock  (line 60, @0x0000000001ed84a0, libserver.so)  // inlines: CEntityHandle, CNetworkHandleBase, CNetworkVarBase, CUtlSymbolLarge, EnsureValidValue<float>
// calls: CBaseEntity::CBaseEntity
// callers: CEnvClock::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CEnvClock::CEnvClock(CEnvClock *const this)
{
  CBaseEntity::CBaseEntity(this);
  this->_vptr_IHandleEntity = &off_3FB7410;
  this->m_iszHourHandName.u.m_Id = 0;
  this->m_iszMinuteHandName.u.m_Id = 0;
  this->m_iszSecondHandName.u.m_Id = 0;
  this->m_hHourHand.m_Value.m_Index = -1;
  this->m_hMinuteHand.m_Value.m_Index = -1;
  this->m_hSecondHand.m_Value.m_Index = -1;
  this->m_flStartGameTime.m_Value = 0.0;
  this->m_flStartClockSeconds.m_Value = 0.0;
}


// CEnvClock::Spawn  (line 65, @0x0000000001ee7040, libserver.so)
// calls: CBaseEntity::Spawn, CBaseEntity::ThinkSet
// globals: CEnvClock::UpdateThink(void)
void __fastcall CEnvClock::Spawn(CEnvClock *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseEntity::Spawn(this, pKeyValues);
  CBaseEntity::ThinkSet(this, CEnvClock::UpdateThink, 0.0, 0, 0);
}


// CEnvClock::Activate  (line 74, @0x0000000001ed0080, libserver.so)  // inlines: CUtlSymbolLarge, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, V_memset, _V_strcmp, curtime, memset, operator!=, operator=, operator=<float>, operator=<int>
// calls: CBaseEntity::Activate, CGameEntitySystem::FindEntityByName, Plat_GetLocalTime, Plat_GetTime, Plat_gmtime, Warning
// strings: "vr_aperture_main", "CEnvClock::Activate( ActivateType_t activateType ) call to Plat_gmtime failed!\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CEnvClock::Activate(CEnvClock *const this, ActivateType_t activateType)
{
  CBaseEntity *EntityByName; // rax
  uint32 m_Index; // edx
  CBaseEntity *m_pInstance; // rcx
  CBaseEntity *v6; // r14
  CEntityIdentity *v7; // rax
  CEntityIdentity *v8; // rax
  CBaseEntity *v9; // rax
  uint32 v10; // edx
  CBaseEntity *v11; // rcx
  CBaseEntity *v12; // r14
  CEntityIdentity *v13; // rax
  CEntityIdentity *v14; // rax
  CBaseEntity *v15; // rax
  CEntityIdentity *v16; // rdx
  CBaseEntity *v17; // rcx
  CBaseEntity *v18; // r13
  CEntityIdentity *v19; // rax
  CEntityIdentity *v20; // rax
  bool v21; // zf
  __int64 v22; // rcx
  const char *v23; // rdi
  _BOOL8 m_bUseLocalTime; // r8
  const char *mapname; // rsi
  CGlobalVars *v26; // r12
  float m_flCurrentTime; // xmm0_4
  int v28; // ecx
  int tm_hour; // ecx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  int v31; // eax
  __int16 v32; // cx
  CEntityIdentity *v33; // rdx
  int v34; // eax
  __int16 v35; // cx
  CEntityIdentity *m_pEntity; // rdx
  int v37; // eax
  __int16 v38; // cx
  float v39; // [rsp+Ch] [rbp-74h]
  float v40; // [rsp+Ch] [rbp-74h]
  time_t rawtime; // [rsp+18h] [rbp-68h] BYREF
  tm t; // [rsp+20h] [rbp-60h] BYREF

  CBaseEntity::Activate(this, activateType);
  *&t.tm_sec = this->m_iszHourHandName.u.m_Id;
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &t, 0, 0, 0, 0);
  m_Index = this->m_hHourHand.m_Value.m_Index;
  m_pInstance = 0;
  v6 = EntityByName;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hHourHand.m_Value.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[this->m_hHourHand.m_Value.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  if ( v6 != m_pInstance )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 808, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    if ( v6 != 0 && (m_pEntity = v6->m_pEntity) != 0 )
    {
      v37 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v38 = 0x7FFF;
      else
        v38 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hHourHand.m_Value.m_Index) = v38 | this->m_hHourHand.m_Value.m_Index & 0x8000;
      this->m_hHourHand.m_Value.m_Index = (v37 << 15) | this->m_hHourHand.m_Value.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hHourHand.m_Value.m_Index = -1;
    }
  }
  *&t.tm_sec = this->m_iszMinuteHandName.u.m_Id;
  v9 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &t, 0, 0, 0, 0);
  v10 = this->m_hMinuteHand.m_Value.m_Index;
  v11 = 0;
  v12 = v9;
  if ( v10 + 2 > 1 )
  {
    v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hMinuteHand.m_Value.m_Index) >> 9) & 0x3F];
    if ( v13 != 0 )
    {
      v14 = &v13[this->m_hMinuteHand.m_Value.m_Index & 0x1FF];
      if ( v14 != 0 && v10 == v14->m_EHandle.m_Index )
        v11 = v14->m_pInstance;
    }
  }
  if ( v12 != v11 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 812, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    if ( v12 != 0 && (v33 = v12->m_pEntity) != 0 )
    {
      v34 = (v33->m_EHandle.m_Index >> 15) - (v33->m_flags & 1);
      if ( v33->m_EHandle.m_Index == -1 )
        v35 = 0x7FFF;
      else
        v35 = v33->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hMinuteHand.m_Value.m_Index) = v35 | this->m_hMinuteHand.m_Value.m_Index & 0x8000;
      this->m_hMinuteHand.m_Value.m_Index = (v34 << 15) | this->m_hMinuteHand.m_Value.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hMinuteHand.m_Value.m_Index = -1;
    }
  }
  *&t.tm_sec = this->m_iszSecondHandName.u.m_Id;
  v15 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &t, 0, 0, 0, 0);
  v16 = this->m_hSecondHand.m_Value.m_Index;
  v17 = 0;
  v18 = v15;
  if ( (v16 + 2) > 1 )
  {
    v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hSecondHand.m_Value.m_Index) >> 9) & 0x3F];
    if ( v19 != 0 )
    {
      v20 = &v19[this->m_hSecondHand.m_Value.m_Index & 0x1FF];
      if ( v20 != 0 && v16 == v20->m_EHandle.m_Index )
        v17 = v20->m_pInstance;
    }
  }
  v21 = v18 == v17;
  if ( v18 != v17 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 816, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v21 = v18 == 0;
    if ( v18 != 0 && (v16 = v18->m_pEntity, v21 = v16 == 0, v16 != 0) )
    {
      v31 = (v16->m_EHandle.m_Index >> 15) - (v16->m_flags & 1);
      if ( v16->m_EHandle.m_Index == -1 )
        v32 = 0x7FFF;
      else
        v32 = v16->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hSecondHand.m_Value.m_Index) = v32 | this->m_hSecondHand.m_Value.m_Index & 0x8000;
      v16 = (v31 << 15);
      v21 = (v16 | this->m_hSecondHand.m_Value.m_Index & 0x7FFF) == 0;
      this->m_hSecondHand.m_Value.m_Index = v16 | this->m_hSecondHand.m_Value.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hSecondHand.m_Value.m_Index = -1;
    }
  }
  v22 = 17;
  v23 = "vr_aperture_main";
  m_bUseLocalTime = this->m_bUseLocalTime;
  mapname = gpGlobals->mapname;
  do
  {
    if ( v22 == 0 )
      break;
    v21 = *mapname++ == *v23++;
    --v22;
  }
  while ( v21 );
  if ( v21 || !m_bUseLocalTime )
  {
    rawtime = Plat_GetTime(v23, mapname, v16, v22, m_bUseLocalTime);
    if ( Plat_gmtime(&rawtime, &t) != 0 )
    {
      tm_hour = t.tm_hour;
    }
    else
    {
      Warning("CEnvClock::Activate( ActivateType_t activateType ) call to Plat_gmtime failed!\n");
      memset(&t, 0, sizeof(t));
      tm_hour = 0;
    }
    t.tm_hour = (this->m_nTimeZone + tm_hour + 24) % 24;
  }
  else
  {
    Plat_GetLocalTime(&t, mapname);
  }
  v26 = gpGlobals;
  m_flCurrentTime = 0.0;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v26->m_flCurrentTime;
  }
  if ( m_flCurrentTime != this->m_flStartGameTime.m_Value )
  {
    v40 = m_flCurrentTime;
    (*(this->_vptr_IHandleEntity + 22))(this, 820, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flStartGameTime.m_Value = v40;
  }
  v28 = t.tm_sec + 60 * t.tm_min + 3600 * (t.tm_hour % 12);
  if ( v28 != this->m_flStartClockSeconds.m_Value )
  {
    v39 = v28;
    (*(this->_vptr_IHandleEntity + 22))(this, 824, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flStartClockSeconds.m_Value = v39;
  }
}


// CEnvClock::UpdateTransmitState  (line 116, @0x0000000001ecc220, libserver.so)  // inlines: SetTransmitState
// calls: CNetworkTransmitComponent::SetTransmitState
int __fastcall CEnvClock::UpdateTransmitState(CEnvClock *const this)
{
  return CNetworkTransmitComponent::SetTransmitState(&this->m_NetworkTransmitComponent, 4);
}


// CEnvClock::UpdateThink  (line 124, @0x0000000001ed88b0, libserver.so)
// calls: CEnvClock::UpdateInternal
void __fastcall CEnvClock::UpdateThink(CEnvClock *const this)
{
  CEnvClock::UpdateInternal(this);
}


// CEnvClock::UpdateInternal  (line 148, @0x0000000001ed8520, libserver.so)  // inlines: CEntityHandle, GetEntryIndex, GetFloat, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, curtime, operator CBaseEntity*
// calls: floorf, CBaseAnimating::SetCycle
// callers: CEnvClock::UpdateThink
void __fastcall CEnvClock::UpdateInternal(CEnvClock *const this)
{
  double v1; // xmm0_8
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v4; // r12
  float v5; // xmm1_4
  unsigned __int16 v6; // dx
  int v7; // edi
  uint32 v8; // eax
  CEntitySystem *v9; // rsi
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  unsigned __int16 v12; // dx
  int v13; // edi
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  unsigned __int16 v16; // dx
  int v17; // edi
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CBaseAnimating *v21; // rbx
  float v22; // xmm0_4
  __int64 v23; // rax
  CBaseAnimating *v24; // r13
  float v25; // xmm1_4
  __int64 v26; // rax
  CBaseAnimating *v27; // r13
  float v28; // xmm1_4
  float v29; // [rsp-8h] [rbp-3Ch]
  float v30; // [rsp-8h] [rbp-3Ch]
  float v31; // [rsp-8h] [rbp-3Ch]
  float v32; // [rsp-8h] [rbp-3Ch]
  uint32 v33; // [rsp-4h] [rbp-38h]
  uint32 v34; // [rsp-4h] [rbp-38h]

  m_flCurrentTime = 0.0;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, v1, 0.0);
    }
    m_flCurrentTime = v4->m_flCurrentTime;
  }
  v5 = ((m_flCurrentTime - this->m_flStartGameTime.m_Value) * env_clock_timescale.m_pParent->m_Value.m_fValue)
     + this->m_flStartClockSeconds.m_Value;
  if ( this->m_hHourHand.m_Value.m_Index == -1 )
  {
    v6 = 0x7FFF;
    v7 = 0x7FFF;
  }
  else
  {
    v6 = this->m_hHourHand.m_Value.m_Index & 0x7FFF;
    v7 = v6;
  }
  v8 = (this->m_hHourHand.m_Value.m_Index >> 15 << 15) | v6 & 0x7FFF;
  v9 = g_pEntitySystem;
  if ( v8 + 2 > 1 )
  {
    v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
    if ( v10 != 0 )
    {
      v11 = &v10[v7 & 0x1FF];
      if ( v11 != 0 && v8 == v11->m_EHandle.m_Index && v11->m_pInstance != 0 )
      {
        v31 = v5;
        v23 = (*(v11->m_pInstance->_vptr_IHandleEntity + 43))(v11->m_pInstance, g_pEntitySystem);
        v5 = v31;
        v24 = v23;
        if ( v23 != 0 )
        {
          floorf(v31 / 43200.0);
          CBaseAnimating::SetCycle(v24, v25);
          v9 = g_pEntitySystem;
          v5 = v31;
        }
        else
        {
          v9 = g_pEntitySystem;
        }
      }
    }
  }
  if ( this->m_hMinuteHand.m_Value.m_Index == -1 )
  {
    v12 = 0x7FFF;
    v13 = 0x7FFF;
  }
  else
  {
    v12 = this->m_hMinuteHand.m_Value.m_Index & 0x7FFF;
    v13 = v12;
  }
  v33 = (this->m_hMinuteHand.m_Value.m_Index >> 15 << 15) | v12 & 0x7FFF;
  if ( v33 + 2 > 1 )
  {
    v14 = v9->m_EntityList.m_pIdentityChunks[v13 >> 9];
    if ( v14 != 0 )
    {
      v15 = &v14[v13 & 0x1FF];
      if ( v15 != 0 && v33 == v15->m_EHandle.m_Index && v15->m_pInstance != 0 )
      {
        v32 = v5;
        v26 = (*(v15->m_pInstance->_vptr_IHandleEntity + 43))(v15->m_pInstance);
        v5 = v32;
        v27 = v26;
        if ( v26 != 0 )
        {
          floorf(v32 / 3600.0);
          CBaseAnimating::SetCycle(v27, v28);
          v9 = g_pEntitySystem;
          v5 = v32;
        }
        else
        {
          v9 = g_pEntitySystem;
        }
      }
    }
  }
  if ( this->m_hSecondHand.m_Value.m_Index == -1 )
  {
    v16 = 0x7FFF;
    v17 = 0x7FFF;
  }
  else
  {
    v16 = this->m_hSecondHand.m_Value.m_Index & 0x7FFF;
    v17 = v16;
  }
  v34 = (this->m_hSecondHand.m_Value.m_Index >> 15 << 15) | v16 & 0x7FFF;
  if ( v34 + 2 > 1 )
  {
    v18 = v9->m_EntityList.m_pIdentityChunks[v17 >> 9];
    if ( v18 != 0 )
    {
      v19 = &v18[v17 & 0x1FF];
      if ( v19 != 0 && v34 == v19->m_EHandle.m_Index )
      {
        v29 = v5;
        if ( v19->m_pInstance != 0 )
        {
          v21 = (*(v19->m_pInstance->_vptr_IHandleEntity + 43))(v19->m_pInstance);
          if ( v21 != 0 )
          {
            v30 = v29 / 60.0;
            v22 = floorf(v30);
            CBaseAnimating::SetCycle(v21, v30 - v22);
          }
        }
      }
    }
  }
}


