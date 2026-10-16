// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/test_ehandle.cpp:24
class CHandleTest : public CBaseEntity {
	class NetworkVar_m_Handle {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bSendHandle {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	typedef CHandleTest ThisClass;

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
	CHandleTest(CHandleTest &);
	CHandleTest(CHandleTest &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CHandleTest();
	virtual int UpdateTransmitState();
	virtual void SetTransmit(CCheckTransmitInfo *, bool);
	virtual ~CHandleTest();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[64] UpdateTransmitState
	// vtable[66] SetTransmit
	// sizeof = 784
};

// src/game/shared/test_ehandle.cpp:57
class C_CHandleTest_MapInstall {
	C_CHandleTest_MapInstall();

	// sizeof = 1
};

// src/game/shared/test_ehandle.cpp:64
class CHandleDummy : public CBaseEntity {
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
	CHandleDummy(CHandleDummy &);
	CHandleDummy(CHandleDummy &);
	CHandleDummy();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CHandleDummy();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 776
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CHandleTest::~CHandleTest  (line 24, @0x00000000023e90c0, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CHandleTest::~CHandleTest(CHandleTest *const this)
{
  this->_vptr_IHandleEntity = &off_40B7B70;
  CBaseEntity::~CBaseEntity(this);
}


// CHandleTest::~CHandleTest  (line 24, @0x00000000023e90e0, libserver.so)  // inlines: ~CHandleTest
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CHandleTest::~CHandleTest(CHandleTest *const this)
{
  this->_vptr_IHandleEntity = &off_40B7B70;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CHandleTest::Schema_DynamicBinding  (line 26, @0x00000000023e58c0, libserver.so)
// globals: CHandleTest::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CHandleTest::Schema_DynamicBinding(const CHandleTest *const this)
{
  return CHandleTest::s_pSchemaBinding;
}


// CHandleTest::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 26, @0x00000000023e58d0, libserver.so)
// globals: CHandleTest::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CHandleTest::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CHandleTest::CEntityInstanceEntityClass *const this)
{
  return CHandleTest::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CHandleTest::CEntityInstanceEntityClass::DestructInstance  (line 26, @0x00000000023e58e0, libserver.so)  // inlines: Destruct<CHandleTest>
void __fastcall CHandleTest::CEntityInstanceEntityClass::DestructInstance(
        CHandleTest::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CHandleTest::CEntityInstanceEntityClass::FreeInstance  (line 26, @0x00000000023e5900, libserver.so)
void __fastcall CHandleTest::CEntityInstanceEntityClass::FreeInstance(
        CHandleTest::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CHandleTest::CEntityInstanceEntityClass::CanAllocate  (line 26, @0x00000000023e5920, libserver.so)
bool __fastcall CHandleTest::CEntityInstanceEntityClass::CanAllocate(
        const CHandleTest::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CHandleTest::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 26, @0x00000000023e5930, libserver.so)
// globals: CHandleTest::s_pSchemaBinding
const ISchemaBinding *__fastcall CHandleTest::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CHandleTest::CEntityInstanceEntityClass *const this)
{
  return CHandleTest::s_pSchemaBinding;
}


// CHandleTest::CEntityInstanceEntityClass::AllocateInstance  (line 26, @0x00000000023e8030, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CHandleTest::CEntityInstanceEntityClass::AllocateInstance(
        CHandleTest::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 784);
  memset(v1, 0, 0x310u);
  return v1;
}


// CHandleTest::CEntityInstanceEntityClass::ConstructInstance  (line 26, @0x00000000023e97f0, libserver.so)  // inlines: CEntityHandle, CHandleTest, CNetworkHandleBase, CNetworkVarBase, Construct<CHandleTest>, EnsureValidValue<bool>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CHandleTest::CEntityInstanceEntityClass::ConstructInstance(
        CHandleTest::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 194) = -1;
    *p = &off_40B7B70;
    *(p + 780) = 0;
  }
  return p;
}


// CHandleTest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 26, @0x00000000023ea9c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CHandleTest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CHandleTest::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CHandleTest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 26, @0x00000000023ea9e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CHandleTest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CHandleTest::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CHandleTest::GetEntityClassInternal  (line 26, @0x00000000023efa00, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "handle_test", "CHandleTest"
// globals: `guard variable for'CHandleTest::GetEntityClassInternal(void)::g_EntityCHandleTestClass, CHandleTest::GetEntityClassInternal(void)::g_EntityCHandleTestClass, __dso_handle, CHandleTest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CHandleTest::GetEntityClassInfo(void)::g_EntityCHandleTestClassInfo, CHandleTest::GetEntityClassInfo(void)::g_EntityCHandleTestClassInfo
CEntityClass *__cdecl CHandleTest::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CHandleTest::GetEntityClassInternal(void)::g_EntityCHandleTestClass == 0
    && __cxa_guard_acquire(&`guard variable for'CHandleTest::GetEntityClassInternal(void)::g_EntityCHandleTestClass) != 0 )
  {
    CEntityClass::CEntityClass(&CHandleTest::GetEntityClassInternal(void)::g_EntityCHandleTestClass);
    CHandleTest::GetEntityClassInternal(void)::g_EntityCHandleTestClass._vptr_CEntityClass = off_40B7AF0;
    __cxa_guard_release(&`guard variable for'CHandleTest::GetEntityClassInternal(void)::g_EntityCHandleTestClass);
    __cxa_atexit(
      CHandleTest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CHandleTest::GetEntityClassInternal(void)::g_EntityCHandleTestClass,
      &_dso_handle);
  }
  if ( g_pEntityCHandleTestClass != 0 )
    return &CHandleTest::GetEntityClassInternal(void)::g_EntityCHandleTestClass;
  if ( `guard variable for'CHandleTest::GetEntityClassInfo(void)::g_EntityCHandleTestClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CHandleTest::GetEntityClassInfo(void)::g_EntityCHandleTestClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CHandleTest::GetEntityClassInfo(void)::g_EntityCHandleTestClassInfo,
      "CHandleTest",
      "handle_test",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CHandleTest::GetEntityClassInfo(void)::g_EntityCHandleTestClassInfo);
  }
  CHandleTest::GetEntityClassInternal(void)::g_EntityCHandleTestClass.m_pClassInfo = &CHandleTest::GetEntityClassInfo(void)::g_EntityCHandleTestClassInfo;
  CHandleTest::GetEntityClassInternal(void)::g_EntityCHandleTestClass.m_pBaseClassInfo = CHandleTest::GetEntityClassInfo(void)::g_EntityCHandleTestClassInfo.m_pBaseClassInfo;
  g_pEntityCHandleTestClass = &CHandleTest::GetEntityClassInternal(void)::g_EntityCHandleTestClass;
  CHandleTest::GetEntityClassInfo(void)::g_EntityCHandleTestClassInfo.m_pClass = &CHandleTest::GetEntityClassInternal(void)::g_EntityCHandleTestClass;
  CHandleTest::GetEntityClassInternal(void)::g_EntityCHandleTestClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCHandleTestClass->m_pComponentOverrides = 0;
  return &CHandleTest::GetEntityClassInternal(void)::g_EntityCHandleTestClass;
}


// CHandleTest::UpdateTransmitState  (line 35, @0x00000000023e8e80, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CHandleTest::UpdateTransmitState(CHandleTest *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CHandleTest::SetTransmit  (line 41, @0x00000000023eab00, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsAlreadyMarkedForTransmission, LookupEntity, entindex, operator->
// calls: CEntityInstance::GetEntityIndex, CBaseEntity::SetTransmit
void __fastcall CHandleTest::SetTransmit(CHandleTest *const this, CCheckTransmitInfo *pInfo, bool bAlways)
{
  CEntityIndex v6; // eax
  unsigned __int16 v7; // dx
  int v8; // esi
  CEntityInstance *m_pInstance; // rdi
  uint32 v10; // eax
  CEntitySystem *v11; // rcx
  CEntityIdentity *v12; // rdx
  __int64 v13; // rsi
  CEntityIdentity *v14; // rdx

  v6.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  if ( ((1 << SLOBYTE(v6.m_Data)) & pInfo->m_pTransmitEdict->m_Ints[v6.m_Data >> 5]) == 0 )
  {
    CBaseEntity::SetTransmit(this, pInfo, bAlways);
    if ( this->m_bSendHandle.m_Value )
    {
      if ( this->m_Handle.m_Value.m_Index == -1 )
      {
        v7 = 0x7FFF;
        v8 = 0x7FFF;
      }
      else
      {
        v7 = this->m_Handle.m_Value.m_Index & 0x7FFF;
        v8 = v7;
      }
      m_pInstance = 0;
      v10 = (this->m_Handle.m_Value.m_Index >> 15 << 15) | v7 & 0x7FFF;
      v11 = g_pEntitySystem;
      if ( v10 + 2 > 1 )
      {
        v12 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v8 >> 9];
        if ( v12 != 0 )
        {
          v13 = v8 & 0x1FF;
          v11 = (8 * v13);
          v14 = &v12[v13];
          if ( v14 != 0 && v10 == v14->m_EHandle.m_Index )
            m_pInstance = v14->m_pInstance;
        }
      }
      (*(m_pInstance->_vptr_IHandleEntity + 66))(m_pInstance, pInfo, bAlways, v11);
    }
  }
}


// CHandleTest::YouForgotToImplementOrDeclareServerClass  (line 57, @0x00000000023bb0c0, libserver.so)
int __fastcall CHandleTest::YouForgotToImplementOrDeclareServerClass(CHandleTest *const this)
{
  return 0;
}


// CHandleTest::GetServerClass  (line 57, @0x00000000023c2f00, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CHandleTest::GetServerClass(CHandleTest *const this)
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


// CHandleDummy::~CHandleDummy  (line 64, @0x00000000023e9110, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CHandleDummy::~CHandleDummy(CHandleDummy *const this)
{
  this->_vptr_IHandleEntity = &off_40B8290;
  CBaseEntity::~CBaseEntity(this);
}


// CHandleDummy::~CHandleDummy  (line 64, @0x00000000023e9130, libserver.so)  // inlines: ~CHandleDummy
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CHandleDummy::~CHandleDummy(CHandleDummy *const this)
{
  this->_vptr_IHandleEntity = &off_40B8290;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CHandleDummy::Schema_DynamicBinding  (line 66, @0x00000000023e5940, libserver.so)
// globals: CHandleDummy::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CHandleDummy::Schema_DynamicBinding(const CHandleDummy *const this)
{
  return CHandleDummy::s_pSchemaBinding;
}


// CHandleDummy::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 66, @0x00000000023e5950, libserver.so)
// globals: CHandleDummy::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CHandleDummy::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CHandleDummy::CEntityInstanceEntityClass *const this)
{
  return CHandleDummy::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CHandleDummy::CEntityInstanceEntityClass::DestructInstance  (line 66, @0x00000000023e5960, libserver.so)  // inlines: Destruct<CHandleDummy>
void __fastcall CHandleDummy::CEntityInstanceEntityClass::DestructInstance(
        CHandleDummy::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CHandleDummy::CEntityInstanceEntityClass::FreeInstance  (line 66, @0x00000000023e5980, libserver.so)
void __fastcall CHandleDummy::CEntityInstanceEntityClass::FreeInstance(
        CHandleDummy::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CHandleDummy::CEntityInstanceEntityClass::CanAllocate  (line 66, @0x00000000023e59a0, libserver.so)
bool __fastcall CHandleDummy::CEntityInstanceEntityClass::CanAllocate(
        const CHandleDummy::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CHandleDummy::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 66, @0x00000000023e59b0, libserver.so)
// globals: CHandleDummy::s_pSchemaBinding
const ISchemaBinding *__fastcall CHandleDummy::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CHandleDummy::CEntityInstanceEntityClass *const this)
{
  return CHandleDummy::s_pSchemaBinding;
}


// CHandleDummy::CEntityInstanceEntityClass::AllocateInstance  (line 66, @0x00000000023e8070, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CHandleDummy::CEntityInstanceEntityClass::AllocateInstance(
        CHandleDummy::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CHandleDummy::CEntityInstanceEntityClass::ConstructInstance  (line 66, @0x00000000023e89b0, libserver.so)  // inlines: CHandleDummy, Construct<CHandleDummy>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CHandleDummy::CEntityInstanceEntityClass::ConstructInstance(
        CHandleDummy::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_40B8290;
  }
  return p;
}


// CHandleDummy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 66, @0x00000000023eaa10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CHandleDummy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CHandleDummy::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CHandleDummy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 66, @0x00000000023eaa30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CHandleDummy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CHandleDummy::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CHandleDummy::GetEntityClassInternal  (line 66, @0x00000000023efb50, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "handle_dummy", "CHandleDummy"
// globals: `guard variable for'CHandleDummy::GetEntityClassInternal(void)::g_EntityCHandleDummyClass, CHandleDummy::GetEntityClassInternal(void)::g_EntityCHandleDummyClass, __dso_handle, CHandleDummy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CHandleDummy::GetEntityClassInfo(void)::g_EntityCHandleDummyClassInfo, CHandleDummy::GetEntityClassInfo(void)::g_EntityCHandleDummyClassInfo
CEntityClass *__cdecl CHandleDummy::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CHandleDummy::GetEntityClassInternal(void)::g_EntityCHandleDummyClass == 0
    && __cxa_guard_acquire(&`guard variable for'CHandleDummy::GetEntityClassInternal(void)::g_EntityCHandleDummyClass) != 0 )
  {
    CEntityClass::CEntityClass(&CHandleDummy::GetEntityClassInternal(void)::g_EntityCHandleDummyClass);
    CHandleDummy::GetEntityClassInternal(void)::g_EntityCHandleDummyClass._vptr_CEntityClass = off_40B8210;
    __cxa_guard_release(&`guard variable for'CHandleDummy::GetEntityClassInternal(void)::g_EntityCHandleDummyClass);
    __cxa_atexit(
      CHandleDummy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CHandleDummy::GetEntityClassInternal(void)::g_EntityCHandleDummyClass,
      &_dso_handle);
  }
  if ( g_pEntityCHandleDummyClass != 0 )
    return &CHandleDummy::GetEntityClassInternal(void)::g_EntityCHandleDummyClass;
  if ( `guard variable for'CHandleDummy::GetEntityClassInfo(void)::g_EntityCHandleDummyClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CHandleDummy::GetEntityClassInfo(void)::g_EntityCHandleDummyClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CHandleDummy::GetEntityClassInfo(void)::g_EntityCHandleDummyClassInfo,
      "CHandleDummy",
      "handle_dummy",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CHandleDummy::GetEntityClassInfo(void)::g_EntityCHandleDummyClassInfo);
  }
  CHandleDummy::GetEntityClassInternal(void)::g_EntityCHandleDummyClass.m_pClassInfo = &CHandleDummy::GetEntityClassInfo(void)::g_EntityCHandleDummyClassInfo;
  CHandleDummy::GetEntityClassInternal(void)::g_EntityCHandleDummyClass.m_pBaseClassInfo = CHandleDummy::GetEntityClassInfo(void)::g_EntityCHandleDummyClassInfo.m_pBaseClassInfo;
  g_pEntityCHandleDummyClass = &CHandleDummy::GetEntityClassInternal(void)::g_EntityCHandleDummyClass;
  CHandleDummy::GetEntityClassInfo(void)::g_EntityCHandleDummyClassInfo.m_pClass = &CHandleDummy::GetEntityClassInternal(void)::g_EntityCHandleDummyClass;
  CHandleDummy::GetEntityClassInternal(void)::g_EntityCHandleDummyClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCHandleDummyClass->m_pComponentOverrides = 0;
  return &CHandleDummy::GetEntityClassInternal(void)::g_EntityCHandleDummyClass;
}


// CC_Test_EHandle  (line 72, @0x00000000023c06c0, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator CEntityInstance*, operator!=, operator=, operator=<bool>
// calls: CreateEntityByName, DispatchSpawn, Msg
// strings: "handle_test", "handle_dummy", "Created EHANDLE test entity. Run this command again to transmit the second ent.\n"
// globals: g_HandleTest, CEntityHandle::gm_pEntityList
void __fastcall CC_Test_EHandle(const CCommandContext *const ctx, const CCommand *const args)
{
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CBaseEntity *EntityByName; // rbx
  CBaseEntity *v5; // rax
  int vptr_IHandleEntity; // edx
  CBaseEntity *m_pInstance; // rcx
  CBaseEntity *v8; // r12
  CEntityIdentity *v9; // rax
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  int v12; // edx
  __int16 v13; // cx
  CEntityIdentity *m_pEntity; // rdx
  int v15; // eax
  __int16 v16; // cx
  CEntityInstance *v17; // rbx
  char v18; // r12

  if ( g_HandleTest.m_Index + 2 > 1
    && (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(g_HandleTest.m_Index) >> 9) & 0x3F]) != 0
    && (v3 = &v2[g_HandleTest.m_Index & 0x1FF]) != 0
    && g_HandleTest.m_Index == v3->m_EHandle.m_Index
    && (v17 = v3->m_pInstance, v3->m_pInstance != 0) )
  {
    v18 = BYTE4(v17[16].m_pEntity) ^ 1;
    if ( BYTE4(v17[16].m_pEntity) != v18 )
    {
      (*(v17->_vptr_IHandleEntity + 22))(v17, 780, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      BYTE4(v17[16].m_pEntity) = v18;
    }
  }
  else
  {
    EntityByName = CreateEntityByName("handle_test", -1);
    v5 = CreateEntityByName("handle_dummy", -1);
    vptr_IHandleEntity = EntityByName[1]._vptr_IHandleEntity;
    m_pInstance = 0;
    v8 = v5;
    if ( (vptr_IHandleEntity + 2) > 1 )
    {
      v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(EntityByName[1]._vptr_IHandleEntity) >> 9) & 0x3F];
      if ( v9 != 0 )
      {
        v10 = &v9[EntityByName[1]._vptr_IHandleEntity & 0x1FF];
        if ( v10 != 0 && vptr_IHandleEntity == v10->m_EHandle.m_Index )
          m_pInstance = v10->m_pInstance;
      }
    }
    if ( v8 != m_pInstance )
    {
      (*(EntityByName->_vptr_IHandleEntity + 22))(EntityByName, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      if ( v8 != 0 && (m_pEntity = v8->m_pEntity) != 0 )
      {
        v15 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        if ( m_pEntity->m_EHandle.m_Index == -1 )
          v16 = 0x7FFF;
        else
          v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(EntityByName[1]._vptr_IHandleEntity) = v16 | EntityByName[1]._vptr_IHandleEntity & 0x8000;
        LODWORD(EntityByName[1]._vptr_IHandleEntity) = (v15 << 15) | EntityByName[1]._vptr_IHandleEntity & 0x7FFF;
      }
      else
      {
        LODWORD(EntityByName[1]._vptr_IHandleEntity) = -1;
      }
    }
    DispatchSpawn(EntityByName, 0);
    v11 = EntityByName->m_pEntity;
    if ( v11 != 0 )
    {
      v12 = (v11->m_EHandle.m_Index >> 15) - (v11->m_flags & 1);
      v13 = 0x7FFF;
      if ( v11->m_EHandle.m_Index != -1 )
        v13 = v11->m_EHandle.m_Index & 0x7FFF;
      LOWORD(g_HandleTest.m_Index) = v13 | g_HandleTest.m_Index & 0x8000;
      g_HandleTest.m_Index = (v12 << 15) | g_HandleTest.m_Index & 0x7FFF;
    }
    else
    {
      g_HandleTest.m_Index = -1;
    }
    Msg("Created EHANDLE test entity. Run this command again to transmit the second ent.\n");
  }
}


