// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/env_tonemap_controller.cpp:26
class CTonemapController2Alias_env_tonemap_controller2 : public CTonemapController2 {
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
	CTonemapController2Alias_env_tonemap_controller2(CTonemapController2Alias_env_tonemap_controller2 &);
	CTonemapController2Alias_env_tonemap_controller2(CTonemapController2Alias_env_tonemap_controller2 &);
	CTonemapController2Alias_env_tonemap_controller2();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CTonemapController2Alias_env_tonemap_controller2();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 808
};

// src/game/shared/env_tonemap_controller.cpp:27
class C_CTonemapController2_MapInstall {
	C_CTonemapController2_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CTonemapController2Alias_env_tonemap_controller2::Schema_DynamicBinding  (line 26, @0x0000000001eeaa70, libserver.so)
// globals: CTonemapController2Alias_env_tonemap_controller2::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTonemapController2Alias_env_tonemap_controller2::Schema_DynamicBinding(
        const CTonemapController2Alias_env_tonemap_controller2 *const this)
{
  return CTonemapController2Alias_env_tonemap_controller2::s_pSchemaBinding;
}


// CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 26, @0x0000000001eeaa80, libserver.so)
// globals: CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass *const this)
{
  return CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass::DestructInstance  (line 26, @0x0000000001eeaa90, libserver.so)  // inlines: Destruct<CTonemapController2Alias_env_tonemap_controller2>
void __fastcall CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass::DestructInstance(
        CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass::FreeInstance  (line 26, @0x0000000001eeaab0, libserver.so)
void __fastcall CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass::FreeInstance(
        CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass::CanAllocate  (line 26, @0x0000000001eeaad0, libserver.so)
bool __fastcall CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass::CanAllocate(
        const CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 26, @0x0000000001eeaae0, libserver.so)
// globals: CTonemapController2Alias_env_tonemap_controller2::s_pSchemaBinding
const ISchemaBinding *__fastcall CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass *const this)
{
  return CTonemapController2Alias_env_tonemap_controller2::s_pSchemaBinding;
}


// CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass::AllocateInstance  (line 26, @0x0000000001eec060, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass::AllocateInstance(
        CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 808);
  memset(v1, 0, 0x328u);
  return v1;
}


// CTonemapController2Alias_env_tonemap_controller2::~CTonemapController2Alias_env_tonemap_controller2  (line 26, @0x0000000001eec890, libserver.so)  // inlines: ~CTonemapController2
// calls: CBaseEntity::~CBaseEntity
void __fastcall CTonemapController2Alias_env_tonemap_controller2::~CTonemapController2Alias_env_tonemap_controller2(
        CTonemapController2Alias_env_tonemap_controller2 *const this)
{
  this->_vptr_IHandleEntity = &off_3FBB0B0;
  CBaseEntity::~CBaseEntity(this);
}


// CTonemapController2Alias_env_tonemap_controller2::~CTonemapController2Alias_env_tonemap_controller2  (line 26, @0x0000000001eec8b0, libserver.so)  // inlines: ~CTonemapController2, ~CTonemapController2Alias_env_tonemap_controller2
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CTonemapController2Alias_env_tonemap_controller2::~CTonemapController2Alias_env_tonemap_controller2(
        CTonemapController2Alias_env_tonemap_controller2 *const this)
{
  this->_vptr_IHandleEntity = &off_3FBB0B0;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 26, @0x0000000001eee080, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 26, @0x0000000001eee0a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass::ConstructInstance  (line 26, @0x0000000001ef1300, libserver.so)  // inlines: CTonemapController2Alias_env_tonemap_controller2, Construct<CTonemapController2Alias_env_tonemap_controller2>
// calls: CTonemapController2::CTonemapController2
CEntityInstance *__fastcall CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass::ConstructInstance(
        CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CTonemapController2::CTonemapController2(p);
    *p = &off_3FBAA10;
  }
  return p;
}


// CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal  (line 26, @0x0000000001ef68f0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CTonemapController2::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "env_tonemap_controller2", "CTonemapController2Alias_env_tonemap_controller2"
// globals: `guard variable for'CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Clas, CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInfo(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2ClassInf, CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInfo(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2ClassInfo
CEntityClass *__cdecl CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class == 0
    && __cxa_guard_acquire(&`guard variable for'CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class) != 0 )
  {
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_designerName.u.m_Id = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class._vptr_CEntityClass = off_3F79390;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_ComponentOffsets.m_Size = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_AllHelpers.m_Size = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_AllHelpers.m_Memory.m_pMemory = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_instanceUnserializer.m_atomicFields,
      4);
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_classInputs.m_Size = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_classInputs.m_Memory.m_pMemory = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_classInputs.m_Memory.m_nGrowSize = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_classOutputs.m_Size = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_classOutputs.m_Memory.m_pMemory = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_requiredEHandle.m_Index = -1;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_hNetworkSerializer = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_pBaseClassInfo = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_pClassInfo = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_flags = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_nAllHelpersFlags = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_pScriptClassDesc = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_pInputs = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_nInputCount = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_pOutputs = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_nOutputCount = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_pGameClass = 0;
    CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class._vptr_CEntityClass = off_3FBA990;
    __cxa_guard_release(&`guard variable for'CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class);
    __cxa_atexit(
      CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class,
      &_dso_handle);
  }
  if ( g_pEntityCTonemapController2Alias_env_tonemap_controller2Class != 0 )
    return &CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class;
  if ( `guard variable for'CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInfo(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInfo(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2ClassInfo) != 0 )
  {
    EntityClassInfo = CTonemapController2::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInfo(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2ClassInfo,
      "CTonemapController2Alias_env_tonemap_controller2",
      "env_tonemap_controller2",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInfo(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2ClassInfo);
  }
  CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_pClassInfo = &CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInfo(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2ClassInfo;
  CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_pBaseClassInfo = CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInfo(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2ClassInfo.m_pBaseClassInfo;
  g_pEntityCTonemapController2Alias_env_tonemap_controller2Class = &CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class;
  CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInfo(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2ClassInfo.m_pClass = &CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class;
  CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCTonemapController2Alias_env_tonemap_controller2Class->m_pComponentOverrides = 0;
  return &CTonemapController2Alias_env_tonemap_controller2::GetEntityClassInternal(void)::g_EntityCTonemapController2Alias_env_tonemap_controller2Class;
}


// CTonemapController2::YouForgotToImplementOrDeclareServerClass  (line 27, @0x0000000001ecbfc0, libserver.so)
int __fastcall CTonemapController2::YouForgotToImplementOrDeclareServerClass(CTonemapController2 *const this)
{
  return 0;
}


// CTonemapController2::GetServerClass  (line 27, @0x0000000001ed13e0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CTonemapController2::GetServerClass(CTonemapController2 *const this)
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


// CTonemapController2::GetDataDescMap  (line 29, @0x0000000001ecbfd0, libserver.so)
// globals: CTonemapController2::m_DataMap
datamap_t *__fastcall CTonemapController2::GetDataDescMap(CTonemapController2 *const this)
{
  return &CTonemapController2::m_DataMap;
}


// CTonemapController2::AddDatadescMetadataKeys  (line 29, @0x0000000001edb140, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CTonemapController2::GetEntityClass(void)
void __fastcall CTonemapController2::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CTonemapController2::GetEntityClass);
}


// CTonemapController2::GetBaseMap  (line 29, @0x0000000001edb160, libserver.so)
datamap_t *__cdecl CTonemapController2::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CTonemapController2>  (line 29, @0x0000000001edb170, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "CTonemapController2"
// globals: `guard variable for'DataMapInit<CTonemapController2>(CTonemapController2 *)::nameHolder, CTonemapController2::GetEntityClass(void), CTonemapController2::m_DataMap, DataMapInit<CTonemapController2>(CTonemapController2 *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CTonemapController2>(CTonemapController2 *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CTonemapController2>(CTonemapController2 *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTonemapController2>(CTonemapController2 *)::nameHolder) != 0 )
  {
    DataMapInit<CTonemapController2>(CTonemapController2 *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CTonemapController2>(CTonemapController2 *)::nameHolder.m_pszBase = "CTonemapController2";
    DataMapInit<CTonemapController2>(CTonemapController2 *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CTonemapController2>(CTonemapController2 *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CTonemapController2>(CTonemapController2 *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CTonemapController2>(CTonemapController2 *)::nameHolder.m_nLenBase = 19;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTonemapController2>(CTonemapController2 *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CTonemapController2>(CTonemapController2 *)::nameHolder,
      &_dso_handle);
  }
  CTonemapController2::m_DataMap.dataNumFields = 16;
  CTonemapController2::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  CTonemapController2::m_DataMap.dataDesc = &DataMapInit<CTonemapController2>(CTonemapController2 *)::dataDesc[1];
  AddDatadescMetadataKeys(&CTonemapController2::m_DataMap, CTonemapController2::GetEntityClass);
  return &CTonemapController2::m_DataMap;
}


// CTonemapController2::CTonemapController2  (line 136, @0x0000000001edb240, libserver.so)  // inlines: CNetworkVarBase, NetworkStateChanged
// calls: CBaseEntity::CBaseEntity, CBaseEntity::NetworkStateChanged, CBaseEntity::~CBaseEntity, _Unwind_Resume
// callers: CTonemapController2::CEntityInstanceEntityClass::ConstructInstance, CTonemapController2Alias_env_tonemap_controller2::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CTonemapController2::CTonemapController2(CTonemapController2 *const this)
{
  int (**vptr_IHandleEntity)(...); // rax
  int (**v3)(...); // rax
  int (**v4)(...); // rax
  int (**v5)(...); // rax
  int (**v6)(...); // rax
  int (**v7)(...); // rax

  CBaseEntity::CBaseEntity(this);
  this->_vptr_IHandleEntity = &off_3FBB0B0;
  this->m_flAutoExposureMin.m_Value = -1.0;
  CBaseEntity::NetworkStateChanged(this, 0x308u, -1, -1);
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_flAutoExposureMax.m_Value = -1.0;
  vptr_IHandleEntity[22](this, 780, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v3 = this->_vptr_IHandleEntity;
  this->m_flTonemapPercentTarget.m_Value = -1.0;
  v3[22](this, 784, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v4 = this->_vptr_IHandleEntity;
  this->m_flTonemapPercentBrightPixels.m_Value = -1.0;
  v4[22](this, 788, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v5 = this->_vptr_IHandleEntity;
  this->m_flTonemapMinAvgLum.m_Value = -1.0;
  v5[22](this, 792, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v6 = this->_vptr_IHandleEntity;
  this->m_flRate.m_Value = -1.0;
  v6[22](this, 796, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v7 = this->_vptr_IHandleEntity;
  this->m_flAccelerateExposureDown.m_Value = -1.0;
  v7[22](this, 800, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
}


// CTonemapController2::Spawn  (line 150, @0x0000000001ee9bc0, libserver.so)  // inlines: AssignTo, Base, Element, Find, FindInsertionPosition, FindKeyHash, GetSpawnGroupHandle, GetValue, GetValue<int>, Insert, InsertAt, InsertOrReplace, LeftChild, Min<long long unsigned int>, Min<unsigned int>, RightChild, atoi, operator(), operator[]
// calls: CBaseEntity::Spawn, CUtlRBTree<CUtlMap<unsigned int, CTonemapController2*>::Node_t, short unsigned int, CUtlMap<unsigned int, CTonemapController2*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CTonemapController2*>::Node_t, short unsigned int>, short unsigned int> >::Find, strtol, VariantFieldTypeName, Warning, CUtlRBTree<CUtlMap<unsigned int, CTonemapController2*>::Node_t, short unsigned int, CUtlMap<unsigned int, CTonemapController2*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CTonemapController2*>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<unsigned int, CTonemapController2*>::Node_t, short unsigned int, CUtlMap<unsigned int, CTonemapController2*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CTonemapController2*>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent
// strings: "No conversion from %s to int now\n"
// globals: jpt_1EE9C5B, CEntityKeyValues::sm_EmptyVariant, CTonemapController2::sm_Master
void __fastcall CTonemapController2::Spawn(CTonemapController2 *const this, const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  CEntityVariant *p_m_value; // rcx
  int16 m_type; // ax
  const char *m_uint64; // rax
  CEntityIdentity *m_pEntity; // rax
  CUtlMap<unsigned int,CTonemapController2*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::KeyType_t m_hSpawnGroup; // ebx
  unsigned __int16 v14; // ax
  const char *v15; // rax
  unsigned __int16 m_Root; // r12
  unsigned __int16 m_Left; // ax
  char v18; // dl
  unsigned __int16 v19; // ax
  bool v20; // bl
  CUtlMap<unsigned int,CTonemapController2*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t search; // [rsp+0h] [rbp-30h] BYREF

  CBaseEntity::Spawn(this, pKeyValues);
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_13:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( m_type == 0 )
      return;
    goto LABEL_12;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v6 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v6) == -97923267 )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v6 )
      goto LABEL_13;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v6] != -97923267 )
    goto LABEL_6;
LABEL_9:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v8 = pKeyValues->m_keyValues.m_pElements;
  else
    v8 = 0;
  p_m_value = &v8[v6].m_value;
  m_type = p_m_value->m_type;
  if ( m_type == 0 )
    return;
LABEL_12:
  switch ( m_type )
  {
    case 1:
      LODWORD(m_uint64) = p_m_value->m_float;
      goto LABEL_16;
    case 5:
      LODWORD(m_uint64) = p_m_value->m_int;
      goto LABEL_16;
    case 6:
      LODWORD(m_uint64) = p_m_value->m_char;
      goto LABEL_16;
    case 26:
      m_uint64 = p_m_value->m_uint64;
      if ( p_m_value->m_int64 <= 0x7FFFFFFF )
      {
        if ( m_uint64 < 0xFFFFFFFF80000000LL )
          LODWORD(m_uint64) = 0x80000000;
LABEL_16:
        if ( m_uint64 == 0 )
          return;
      }
LABEL_17:
      m_pEntity = this->m_pEntity;
      if ( m_pEntity != 0 )
        m_hSpawnGroup = m_pEntity->m_hSpawnGroup;
      else
        m_hSpawnGroup = 0;
      search.key = m_hSpawnGroup;
      v14 = CUtlRBTree<CUtlMap<unsigned int,CTonemapController2 *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CTonemapController2 *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CTonemapController2 *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
              &CTonemapController2::sm_Master.m_Tree,
              &search);
      if ( v14 != 0xFFFF )
      {
        CTonemapController2::sm_Master.m_Tree.m_Elements.m_pMemory[v14].m_Data.elem = this;
        return;
      }
      search.elem = this;
      m_Root = CTonemapController2::sm_Master.m_Tree.m_Root;
      search.key = m_hSpawnGroup;
      if ( CTonemapController2::sm_Master.m_Tree.m_Root == 0xFFFF )
      {
        m_Root = -1;
        v20 = 0;
        goto LABEL_41;
      }
      break;
    case 30:
      LODWORD(m_uint64) = strtol(p_m_value->m_pszString, 0, 10);
      goto LABEL_16;
    case 33:
      m_uint64 = p_m_value->m_uint64;
      if ( p_m_value->m_uint64 <= 0x7FFFFFFE )
        goto LABEL_16;
      goto LABEL_17;
    case 34:
      LODWORD(m_uint64) = p_m_value->m_float64;
      goto LABEL_16;
    case 37:
      LODWORD(m_uint64) = p_m_value->m_int;
      if ( p_m_value->m_int <= 0x7FFFFFFEu )
        goto LABEL_16;
      goto LABEL_17;
    default:
      v15 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to int now\n", v15);
      return;
  }
  while ( 2 )
  {
    if ( CTonemapController2::sm_Master.m_Tree.m_LessFunc.m_LessFunc(
           &search.key,
           &CTonemapController2::sm_Master.m_Tree.m_Elements.m_pMemory[m_Root].m_Data.key) )
    {
      m_Left = CTonemapController2::sm_Master.m_Tree.m_Elements.m_pMemory[m_Root].m_Left;
      v18 = 1;
      if ( m_Left == 0xFFFF )
        break;
      goto LABEL_37;
    }
    m_Left = CTonemapController2::sm_Master.m_Tree.m_Elements.m_pMemory[m_Root].m_Right;
    v18 = 0;
    if ( m_Left != 0xFFFF )
    {
LABEL_37:
      m_Root = m_Left;
      continue;
    }
    break;
  }
  v20 = v18;
LABEL_41:
  v19 = CUtlRBTree<CUtlMap<unsigned int,CTonemapController2 *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CTonemapController2 *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CTonemapController2 *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
          &CTonemapController2::sm_Master.m_Tree,
          &search);
  CUtlRBTree<CUtlMap<unsigned int,CTonemapController2 *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CTonemapController2 *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CTonemapController2 *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
    &CTonemapController2::sm_Master.m_Tree,
    v19,
    m_Root,
    v20);
  ++CTonemapController2::sm_Master.m_Tree.m_NumElements;
}


// CTonemapController2::UpdateOnRemove  (line 176, @0x0000000001ee9e30, libserver.so)  // inlines: Element, Find, FindElement, FreeNode, GetSpawnGroupHandle, Links, Remove, RemoveAt, SetLeftChild, SetRightChild, operator[]
// calls: CBaseEntity::UpdateOnRemove, UTIL_PlayerByIndex, CBasePlayer::TonemapControllerRemoved, CUtlRBTree<CUtlMap<unsigned int, CTonemapController2*>::Node_t, short unsigned int, CUtlMap<unsigned int, CTonemapController2*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CTonemapController2*>::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlRBTree<CUtlMap<unsigned int, CTonemapController2*>::Node_t, short unsigned int, CUtlMap<unsigned int, CTonemapController2*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CTonemapController2*>::Node_t, short unsigned int>, short unsigned int> >::Unlink
// globals: CTonemapController2::sm_Master
void __fastcall CTonemapController2::UpdateOnRemove(CTonemapController2 *const this)
{
  int v2; // ebx
  CBasePlayer *v3; // rax
  CEntityIdentity *m_pEntity; // rax
  unsigned __int16 v5; // ax
  CEntityIdentity *v6; // rax
  CUtlMap<unsigned int,CTonemapController2*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::KeyType_t m_hSpawnGroup; // eax
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // bx
  __int64 v10; // rax
  CUtlMap<unsigned int,CTonemapController2*,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)>::Node_t search; // [rsp+0h] [rbp-30h] BYREF

  v2 = 1;
  CBaseEntity::UpdateOnRemove(this);
  if ( gpGlobals->maxClients > 0 )
  {
    do
    {
      v3 = UTIL_PlayerByIndex(v2);
      if ( v3 != 0 )
        CBasePlayer::TonemapControllerRemoved(v3, this);
      ++v2;
    }
    while ( gpGlobals->maxClients >= v2 );
  }
  m_pEntity = this->m_pEntity;
  if ( m_pEntity != 0 )
    LODWORD(m_pEntity) = m_pEntity->m_hSpawnGroup;
  search.key = m_pEntity;
  v5 = CUtlRBTree<CUtlMap<unsigned int,CTonemapController2 *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CTonemapController2 *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CTonemapController2 *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &CTonemapController2::sm_Master.m_Tree,
         &search);
  if ( v5 != 0xFFFF && this == CTonemapController2::sm_Master.m_Tree.m_Elements.m_pMemory[v5].m_Data.elem )
  {
    v6 = this->m_pEntity;
    if ( v6 != 0 )
      m_hSpawnGroup = v6->m_hSpawnGroup;
    else
      m_hSpawnGroup = 0;
    search.key = m_hSpawnGroup;
    v8 = CUtlRBTree<CUtlMap<unsigned int,CTonemapController2 *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CTonemapController2 *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CTonemapController2 *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
           &CTonemapController2::sm_Master.m_Tree,
           &search);
    v9 = v8;
    if ( v8 != 0xFFFF )
    {
      CUtlRBTree<CUtlMap<unsigned int,CTonemapController2 *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CTonemapController2 *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CTonemapController2 *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Unlink(
        &CTonemapController2::sm_Master.m_Tree,
        v8);
      v10 = v9;
      CTonemapController2::sm_Master.m_Tree.m_Elements.m_pMemory[v10].m_Left = v9;
      CTonemapController2::sm_Master.m_Tree.m_Elements.m_pMemory[v10].m_Right = CTonemapController2::sm_Master.m_Tree.m_FirstFree;
      --CTonemapController2::sm_Master.m_Tree.m_NumElements;
      CTonemapController2::sm_Master.m_Tree.m_FirstFree = v9;
    }
  }
}


// SpawnGroupHandle_Less  (line 207, @0x0000000001ecbfe0, libserver.so)
bool __fastcall SpawnGroupHandle_Less(const SpawnGroupHandle_t *const a, const SpawnGroupHandle_t *const b)
{
  return *a < *b;
}


// CTonemapController2::SetMinExposure  (line 293, @0x0000000001edb370, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
// callers: CTonemapController2::InputSetMinExposure
void __fastcall CTonemapController2::SetMinExposure(CTonemapController2 *const this, double a2, float flValue)
{
  float flValuea; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flAutoExposureMin.m_Value )
  {
    flValuea = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, flValue);
    this->m_flAutoExposureMin.m_Value = flValuea;
  }
}


// CTonemapController2::SetMaxExposure  (line 298, @0x0000000001edb540, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
// callers: CTonemapController2::InputSetMaxExposure
void __fastcall CTonemapController2::SetMaxExposure(CTonemapController2 *const this, double a2, float flValue)
{
  float flValuea; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flAutoExposureMax.m_Value )
  {
    flValuea = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 780, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, flValue);
    this->m_flAutoExposureMax.m_Value = flValuea;
  }
}


// CTonemapController2::SetBloomScale  (line 303, @0x0000000001edb710, libserver.so)
void __fastcall CTonemapController2::SetBloomScale(CTonemapController2 *const this, double a2, float flValue)
{
  ;
}


// CTonemapController2::SetPercentTarget  (line 307, @0x0000000001edb720, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
// callers: CTonemapController2::InputSetPercentTarget
void __fastcall CTonemapController2::SetPercentTarget(CTonemapController2 *const this, double a2, float flValue)
{
  float flValuea; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flTonemapPercentTarget.m_Value )
  {
    flValuea = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 784, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, flValue);
    this->m_flTonemapPercentTarget.m_Value = flValuea;
  }
}


// CTonemapController2::SetPercentBrightPixels  (line 312, @0x0000000001edb8f0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
// callers: CTonemapController2::InputSetPercentBrightPixels
void __fastcall CTonemapController2::SetPercentBrightPixels(CTonemapController2 *const this, double a2, float flValue)
{
  float flValuea; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flTonemapPercentBrightPixels.m_Value )
  {
    flValuea = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 788, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, flValue);
    this->m_flTonemapPercentBrightPixels.m_Value = flValuea;
  }
}


// CTonemapController2::SetMinAverageLuminosity  (line 317, @0x0000000001edbac0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
// callers: CTonemapController2::InputSetMinAverageLuminosity
void __fastcall CTonemapController2::SetMinAverageLuminosity(CTonemapController2 *const this, double a2, float flValue)
{
  float flValuea; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flTonemapMinAvgLum.m_Value )
  {
    flValuea = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 792, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, flValue);
    this->m_flTonemapMinAvgLum.m_Value = flValuea;
  }
}


// CTonemapController2::SetRate  (line 322, @0x0000000001edbc90, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
// callers: CTonemapController2::InputSetRate
void __fastcall CTonemapController2::SetRate(CTonemapController2 *const this, double a2, float flValue)
{
  float flValuea; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flRate.m_Value )
  {
    flValuea = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 796, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, flValue);
    this->m_flRate.m_Value = flValuea;
  }
}


// CTonemapController2::SetAccelerateExposureDown  (line 327, @0x0000000001edbe60, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
// callers: CTonemapController2::InputSetAccelerateExposureDown
void __fastcall CTonemapController2::SetAccelerateExposureDown(
        CTonemapController2 *const this,
        double a2,
        float flValue)
{
  float flValuea; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flAccelerateExposureDown.m_Value )
  {
    flValuea = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 800, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, flValue);
    this->m_flAccelerateExposureDown.m_Value = flValuea;
  }
}


// CTonemapController2::GetMinExposure  (line 333, @0x0000000001edc030, libserver.so)
float __fastcall CTonemapController2::GetMinExposure(CTonemapController2 *const this)
{
  return this->m_flAutoExposureMin.m_Value;
}


// CTonemapController2::GetMaxExposure  (line 338, @0x0000000001edc040, libserver.so)
float __fastcall CTonemapController2::GetMaxExposure(CTonemapController2 *const this)
{
  return this->m_flAutoExposureMax.m_Value;
}


// CTonemapController2::GetBloomScale  (line 343, @0x0000000001edc050, libserver.so)
float __fastcall CTonemapController2::GetBloomScale(CTonemapController2 *const this)
{
  return 1.0;
}


// CTonemapController2::Enable  (line 348, @0x0000000001edc060, libserver.so)
// calls: __dynamic_cast, CBasePlayer::TonemapControllerActivated, UTIL_PlayerByIndex
// callers: CTonemapController2::InputEnable
void __fastcall CTonemapController2::Enable(CTonemapController2 *const this, CEntityInstance *pForPlayer)
{
  CBasePlayer *v3; // rax
  int v4; // ebx
  CBasePlayer *v5; // rax

  if ( pForPlayer != 0
    && (v3 = __dynamic_cast(pForPlayer, &`typeinfo for'CBaseEntity, &`typeinfo for'CBasePlayer, 0)) != 0 )
  {
    CBasePlayer::TonemapControllerActivated(v3, this);
  }
  else
  {
    v4 = 1;
    if ( gpGlobals->maxClients > 0 )
    {
      do
      {
        v5 = UTIL_PlayerByIndex(v4);
        if ( v5 != 0 )
          CBasePlayer::TonemapControllerActivated(v5, this);
        ++v4;
      }
      while ( gpGlobals->maxClients >= v4 );
    }
  }
}


// CTonemapController2::Disable  (line 373, @0x0000000001edc110, libserver.so)
// calls: __dynamic_cast, CBasePlayer::TonemapControllerDeactivated, UTIL_PlayerByIndex
// callers: CTonemapController2::InputDisable
void __fastcall CTonemapController2::Disable(CTonemapController2 *const this, CEntityInstance *pForPlayer)
{
  CBasePlayer *v3; // rax
  int v4; // ebx
  CBasePlayer *v5; // rax

  if ( pForPlayer != 0
    && (v3 = __dynamic_cast(pForPlayer, &`typeinfo for'CBaseEntity, &`typeinfo for'CBasePlayer, 0)) != 0 )
  {
    CBasePlayer::TonemapControllerDeactivated(v3, this);
  }
  else
  {
    v4 = 1;
    if ( gpGlobals->maxClients > 0 )
    {
      do
      {
        v5 = UTIL_PlayerByIndex(v4);
        if ( v5 != 0 )
          CBasePlayer::TonemapControllerDeactivated(v5, this);
        ++v4;
      }
      while ( gpGlobals->maxClients >= v4 );
    }
  }
}


// CTonemapController2::GetSceneTonemapParams  (line 398, @0x0000000001edc1c0, libserver.so)
SceneTonemapParameters_t *__fastcall CTonemapController2::GetSceneTonemapParams(
        SceneTonemapParameters_t *__return_ptr retstr,
        const CTonemapController2 *const this)
{
  retstr->m_flAutoExposureMin = this->m_flAutoExposureMin.m_Value;
  retstr->m_flAutoExposureMax = this->m_flAutoExposureMax.m_Value;
  retstr->m_flTonemapPercentTarget = this->m_flTonemapPercentTarget.m_Value;
  retstr->m_flTonemapPercentBrightPixels = this->m_flTonemapPercentBrightPixels.m_Value;
  retstr->m_flTonemapMinAvgLum = this->m_flTonemapMinAvgLum.m_Value;
  retstr->m_flRate = this->m_flRate.m_Value;
  retstr->m_flAccelerateExposureDown = this->m_flAccelerateExposureDown.m_Value;
  return retstr;
}


// CTonemapController2::InputSetMinExposure  (line 412, @0x0000000001edb3d0, libserver.so)  // inlines: AssignTo, Get<float>, atof
// calls: CTonemapController2::SetMinExposure, strtod, VariantFieldTypeName, Warning
// strings: "No conversion from %s to float now\n"
// globals: jpt_1EDB3FB
void __fastcall CTonemapController2::InputSetMinExposure(CTonemapController2 *const this, inputdata_t *const input)
{
  double v2; // xmm0_8
  float v3; // xmm1_4
  int16 m_type; // ax
  double v6; // xmm0_8
  float v7; // xmm1_4
  const char *m_pszString; // rax
  const char *v9; // rax
  float v10; // xmm1_4
  uint64 v11; // rdx

  m_type = input->value.m_type;
  switch ( m_type )
  {
    case 0:
      v2 = 0.0;
      goto LABEL_3;
    case 1:
      CTonemapController2::SetMinExposure(this, COERCE_DOUBLE(input->value.m_int), v3);
      return;
    case 5:
      *&v2 = input->value.m_int;
      CTonemapController2::SetMinExposure(this, v2, v3);
      return;
    case 6:
      *&v2 = input->value.m_char;
      CTonemapController2::SetMinExposure(this, v2, v3);
      return;
    case 26:
      *&v2 = input->value.m_pszString;
      CTonemapController2::SetMinExposure(this, v2, v3);
      return;
    case 30:
      v6 = strtod(input->value.m_pszString, 0);
      CTonemapController2::SetMinExposure(this, v6, v7);
      return;
    case 33:
      m_pszString = input->value.m_pszString;
      if ( m_pszString >= 0 )
        goto LABEL_10;
      v11 = input->value.m_uint64 & 1 | (input->value.m_uint64 >> 1);
      *&v2 = v11 + v11;
LABEL_3:
      CTonemapController2::SetMinExposure(this, v2, v3);
      break;
    case 34:
      CTonemapController2::SetMinExposure(this, input->value.m_float64, v3);
      return;
    case 37:
      LODWORD(m_pszString) = input->value.m_int;
LABEL_10:
      *&v2 = m_pszString;
      CTonemapController2::SetMinExposure(this, v2, v3);
      break;
    default:
      v9 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to float now\n", v9);
      CTonemapController2::SetMinExposure(this, 0.0, v10);
      break;
  }
}


// CTonemapController2::InputSetMaxExposure  (line 417, @0x0000000001edb5a0, libserver.so)  // inlines: AssignTo, Get<float>, atof
// calls: CTonemapController2::SetMaxExposure, strtod, VariantFieldTypeName, Warning
// strings: "No conversion from %s to float now\n"
// globals: jpt_1EDB5CB
void __fastcall CTonemapController2::InputSetMaxExposure(CTonemapController2 *const this, inputdata_t *const input)
{
  double v2; // xmm0_8
  float v3; // xmm1_4
  int16 m_type; // ax
  double v6; // xmm0_8
  float v7; // xmm1_4
  const char *m_pszString; // rax
  const char *v9; // rax
  float v10; // xmm1_4
  uint64 v11; // rdx

  m_type = input->value.m_type;
  switch ( m_type )
  {
    case 0:
      v2 = 0.0;
      goto LABEL_3;
    case 1:
      CTonemapController2::SetMaxExposure(this, COERCE_DOUBLE(input->value.m_int), v3);
      return;
    case 5:
      *&v2 = input->value.m_int;
      CTonemapController2::SetMaxExposure(this, v2, v3);
      return;
    case 6:
      *&v2 = input->value.m_char;
      CTonemapController2::SetMaxExposure(this, v2, v3);
      return;
    case 26:
      *&v2 = input->value.m_pszString;
      CTonemapController2::SetMaxExposure(this, v2, v3);
      return;
    case 30:
      v6 = strtod(input->value.m_pszString, 0);
      CTonemapController2::SetMaxExposure(this, v6, v7);
      return;
    case 33:
      m_pszString = input->value.m_pszString;
      if ( m_pszString >= 0 )
        goto LABEL_10;
      v11 = input->value.m_uint64 & 1 | (input->value.m_uint64 >> 1);
      *&v2 = v11 + v11;
LABEL_3:
      CTonemapController2::SetMaxExposure(this, v2, v3);
      break;
    case 34:
      CTonemapController2::SetMaxExposure(this, input->value.m_float64, v3);
      return;
    case 37:
      LODWORD(m_pszString) = input->value.m_int;
LABEL_10:
      *&v2 = m_pszString;
      CTonemapController2::SetMaxExposure(this, v2, v3);
      break;
    default:
      v9 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to float now\n", v9);
      CTonemapController2::SetMaxExposure(this, 0.0, v10);
      break;
  }
}


// CTonemapController2::InputEnable  (line 422, @0x0000000001edc100, libserver.so)
// calls: CTonemapController2::Enable
void __fastcall CTonemapController2::InputEnable(CTonemapController2 *const this, inputdata_t *const input)
{
  CTonemapController2::Enable(this, input->pActivator);
}


// CTonemapController2::InputDisable  (line 427, @0x0000000001edc1b0, libserver.so)
// calls: CTonemapController2::Disable
void __fastcall CTonemapController2::InputDisable(CTonemapController2 *const this, inputdata_t *const input)
{
  CTonemapController2::Disable(this, input->pActivator);
}


// CTonemapController2::InputSetPercentTarget  (line 432, @0x0000000001edb780, libserver.so)  // inlines: AssignTo, Get<float>, atof
// calls: CTonemapController2::SetPercentTarget, strtod, VariantFieldTypeName, Warning
// strings: "No conversion from %s to float now\n"
// globals: jpt_1EDB7AB
void __fastcall CTonemapController2::InputSetPercentTarget(CTonemapController2 *const this, inputdata_t *const input)
{
  double v2; // xmm0_8
  float v3; // xmm1_4
  int16 m_type; // ax
  double v6; // xmm0_8
  float v7; // xmm1_4
  const char *m_pszString; // rax
  const char *v9; // rax
  float v10; // xmm1_4
  uint64 v11; // rdx

  m_type = input->value.m_type;
  switch ( m_type )
  {
    case 0:
      v2 = 0.0;
      goto LABEL_3;
    case 1:
      CTonemapController2::SetPercentTarget(this, COERCE_DOUBLE(input->value.m_int), v3);
      return;
    case 5:
      *&v2 = input->value.m_int;
      CTonemapController2::SetPercentTarget(this, v2, v3);
      return;
    case 6:
      *&v2 = input->value.m_char;
      CTonemapController2::SetPercentTarget(this, v2, v3);
      return;
    case 26:
      *&v2 = input->value.m_pszString;
      CTonemapController2::SetPercentTarget(this, v2, v3);
      return;
    case 30:
      v6 = strtod(input->value.m_pszString, 0);
      CTonemapController2::SetPercentTarget(this, v6, v7);
      return;
    case 33:
      m_pszString = input->value.m_pszString;
      if ( m_pszString >= 0 )
        goto LABEL_10;
      v11 = input->value.m_uint64 & 1 | (input->value.m_uint64 >> 1);
      *&v2 = v11 + v11;
LABEL_3:
      CTonemapController2::SetPercentTarget(this, v2, v3);
      break;
    case 34:
      CTonemapController2::SetPercentTarget(this, input->value.m_float64, v3);
      return;
    case 37:
      LODWORD(m_pszString) = input->value.m_int;
LABEL_10:
      *&v2 = m_pszString;
      CTonemapController2::SetPercentTarget(this, v2, v3);
      break;
    default:
      v9 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to float now\n", v9);
      CTonemapController2::SetPercentTarget(this, 0.0, v10);
      break;
  }
}


// CTonemapController2::InputSetPercentBrightPixels  (line 437, @0x0000000001edb950, libserver.so)  // inlines: AssignTo, Get<float>, atof
// calls: CTonemapController2::SetPercentBrightPixels, strtod, VariantFieldTypeName, Warning
// strings: "No conversion from %s to float now\n"
// globals: jpt_1EDB97B
void __fastcall CTonemapController2::InputSetPercentBrightPixels(
        CTonemapController2 *const this,
        inputdata_t *const input)
{
  double v2; // xmm0_8
  float v3; // xmm1_4
  int16 m_type; // ax
  double v6; // xmm0_8
  float v7; // xmm1_4
  const char *m_pszString; // rax
  const char *v9; // rax
  float v10; // xmm1_4
  uint64 v11; // rdx

  m_type = input->value.m_type;
  switch ( m_type )
  {
    case 0:
      v2 = 0.0;
      goto LABEL_3;
    case 1:
      CTonemapController2::SetPercentBrightPixels(this, COERCE_DOUBLE(input->value.m_int), v3);
      return;
    case 5:
      *&v2 = input->value.m_int;
      CTonemapController2::SetPercentBrightPixels(this, v2, v3);
      return;
    case 6:
      *&v2 = input->value.m_char;
      CTonemapController2::SetPercentBrightPixels(this, v2, v3);
      return;
    case 26:
      *&v2 = input->value.m_pszString;
      CTonemapController2::SetPercentBrightPixels(this, v2, v3);
      return;
    case 30:
      v6 = strtod(input->value.m_pszString, 0);
      CTonemapController2::SetPercentBrightPixels(this, v6, v7);
      return;
    case 33:
      m_pszString = input->value.m_pszString;
      if ( m_pszString >= 0 )
        goto LABEL_10;
      v11 = input->value.m_uint64 & 1 | (input->value.m_uint64 >> 1);
      *&v2 = v11 + v11;
LABEL_3:
      CTonemapController2::SetPercentBrightPixels(this, v2, v3);
      break;
    case 34:
      CTonemapController2::SetPercentBrightPixels(this, input->value.m_float64, v3);
      return;
    case 37:
      LODWORD(m_pszString) = input->value.m_int;
LABEL_10:
      *&v2 = m_pszString;
      CTonemapController2::SetPercentBrightPixels(this, v2, v3);
      break;
    default:
      v9 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to float now\n", v9);
      CTonemapController2::SetPercentBrightPixels(this, 0.0, v10);
      break;
  }
}


// CTonemapController2::InputSetMinAverageLuminosity  (line 442, @0x0000000001edbb20, libserver.so)  // inlines: AssignTo, Get<float>, atof
// calls: CTonemapController2::SetMinAverageLuminosity, strtod, VariantFieldTypeName, Warning
// strings: "No conversion from %s to float now\n"
// globals: jpt_1EDBB4B
void __fastcall CTonemapController2::InputSetMinAverageLuminosity(
        CTonemapController2 *const this,
        inputdata_t *const input)
{
  double v2; // xmm0_8
  float v3; // xmm1_4
  int16 m_type; // ax
  double v6; // xmm0_8
  float v7; // xmm1_4
  const char *m_pszString; // rax
  const char *v9; // rax
  float v10; // xmm1_4
  uint64 v11; // rdx

  m_type = input->value.m_type;
  switch ( m_type )
  {
    case 0:
      v2 = 0.0;
      goto LABEL_3;
    case 1:
      CTonemapController2::SetMinAverageLuminosity(this, COERCE_DOUBLE(input->value.m_int), v3);
      return;
    case 5:
      *&v2 = input->value.m_int;
      CTonemapController2::SetMinAverageLuminosity(this, v2, v3);
      return;
    case 6:
      *&v2 = input->value.m_char;
      CTonemapController2::SetMinAverageLuminosity(this, v2, v3);
      return;
    case 26:
      *&v2 = input->value.m_pszString;
      CTonemapController2::SetMinAverageLuminosity(this, v2, v3);
      return;
    case 30:
      v6 = strtod(input->value.m_pszString, 0);
      CTonemapController2::SetMinAverageLuminosity(this, v6, v7);
      return;
    case 33:
      m_pszString = input->value.m_pszString;
      if ( m_pszString >= 0 )
        goto LABEL_10;
      v11 = input->value.m_uint64 & 1 | (input->value.m_uint64 >> 1);
      *&v2 = v11 + v11;
LABEL_3:
      CTonemapController2::SetMinAverageLuminosity(this, v2, v3);
      break;
    case 34:
      CTonemapController2::SetMinAverageLuminosity(this, input->value.m_float64, v3);
      return;
    case 37:
      LODWORD(m_pszString) = input->value.m_int;
LABEL_10:
      *&v2 = m_pszString;
      CTonemapController2::SetMinAverageLuminosity(this, v2, v3);
      break;
    default:
      v9 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to float now\n", v9);
      CTonemapController2::SetMinAverageLuminosity(this, 0.0, v10);
      break;
  }
}


// CTonemapController2::InputSetRate  (line 447, @0x0000000001edbcf0, libserver.so)  // inlines: AssignTo, Get<float>, atof
// calls: CTonemapController2::SetRate, strtod, VariantFieldTypeName, Warning
// strings: "No conversion from %s to float now\n"
// globals: jpt_1EDBD1B
void __fastcall CTonemapController2::InputSetRate(CTonemapController2 *const this, inputdata_t *const input)
{
  double v2; // xmm0_8
  float v3; // xmm1_4
  int16 m_type; // ax
  double v6; // xmm0_8
  float v7; // xmm1_4
  const char *m_pszString; // rax
  const char *v9; // rax
  float v10; // xmm1_4
  uint64 v11; // rdx

  m_type = input->value.m_type;
  switch ( m_type )
  {
    case 0:
      v2 = 0.0;
      goto LABEL_3;
    case 1:
      CTonemapController2::SetRate(this, COERCE_DOUBLE(input->value.m_int), v3);
      return;
    case 5:
      *&v2 = input->value.m_int;
      CTonemapController2::SetRate(this, v2, v3);
      return;
    case 6:
      *&v2 = input->value.m_char;
      CTonemapController2::SetRate(this, v2, v3);
      return;
    case 26:
      *&v2 = input->value.m_pszString;
      CTonemapController2::SetRate(this, v2, v3);
      return;
    case 30:
      v6 = strtod(input->value.m_pszString, 0);
      CTonemapController2::SetRate(this, v6, v7);
      return;
    case 33:
      m_pszString = input->value.m_pszString;
      if ( m_pszString >= 0 )
        goto LABEL_10;
      v11 = input->value.m_uint64 & 1 | (input->value.m_uint64 >> 1);
      *&v2 = v11 + v11;
LABEL_3:
      CTonemapController2::SetRate(this, v2, v3);
      break;
    case 34:
      CTonemapController2::SetRate(this, input->value.m_float64, v3);
      return;
    case 37:
      LODWORD(m_pszString) = input->value.m_int;
LABEL_10:
      *&v2 = m_pszString;
      CTonemapController2::SetRate(this, v2, v3);
      break;
    default:
      v9 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to float now\n", v9);
      CTonemapController2::SetRate(this, 0.0, v10);
      break;
  }
}


// CTonemapController2::InputSetAccelerateExposureDown  (line 452, @0x0000000001edbec0, libserver.so)  // inlines: AssignTo, Get<float>, atof
// calls: CTonemapController2::SetAccelerateExposureDown, strtod, VariantFieldTypeName, Warning
// strings: "No conversion from %s to float now\n"
// globals: jpt_1EDBEEB
void __fastcall CTonemapController2::InputSetAccelerateExposureDown(
        CTonemapController2 *const this,
        inputdata_t *const input)
{
  double v2; // xmm0_8
  float v3; // xmm1_4
  int16 m_type; // ax
  double v6; // xmm0_8
  float v7; // xmm1_4
  const char *m_pszString; // rax
  const char *v9; // rax
  float v10; // xmm1_4
  uint64 v11; // rdx

  m_type = input->value.m_type;
  switch ( m_type )
  {
    case 0:
      v2 = 0.0;
      goto LABEL_3;
    case 1:
      CTonemapController2::SetAccelerateExposureDown(this, COERCE_DOUBLE(input->value.m_int), v3);
      return;
    case 5:
      *&v2 = input->value.m_int;
      CTonemapController2::SetAccelerateExposureDown(this, v2, v3);
      return;
    case 6:
      *&v2 = input->value.m_char;
      CTonemapController2::SetAccelerateExposureDown(this, v2, v3);
      return;
    case 26:
      *&v2 = input->value.m_pszString;
      CTonemapController2::SetAccelerateExposureDown(this, v2, v3);
      return;
    case 30:
      v6 = strtod(input->value.m_pszString, 0);
      CTonemapController2::SetAccelerateExposureDown(this, v6, v7);
      return;
    case 33:
      m_pszString = input->value.m_pszString;
      if ( m_pszString >= 0 )
        goto LABEL_10;
      v11 = input->value.m_uint64 & 1 | (input->value.m_uint64 >> 1);
      *&v2 = v11 + v11;
LABEL_3:
      CTonemapController2::SetAccelerateExposureDown(this, v2, v3);
      break;
    case 34:
      CTonemapController2::SetAccelerateExposureDown(this, input->value.m_float64, v3);
      return;
    case 37:
      LODWORD(m_pszString) = input->value.m_int;
LABEL_10:
      *&v2 = m_pszString;
      CTonemapController2::SetAccelerateExposureDown(this, v2, v3);
      break;
    default:
      v9 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to float now\n", v9);
      CTonemapController2::SetAccelerateExposureDown(this, 0.0, v10);
      break;
  }
}


// CTonemapTrigger::GetDataDescMap  (line 463, @0x0000000001ecbff0, libserver.so)
// globals: CTonemapTrigger::m_DataMap
datamap_t *__fastcall CTonemapTrigger::GetDataDescMap(CTonemapTrigger *const this)
{
  return &CTonemapTrigger::m_DataMap;
}


// CTonemapTrigger::AddDatadescMetadataKeys  (line 463, @0x0000000001edc230, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CTonemapTrigger::GetEntityClass(void)
void __fastcall CTonemapTrigger::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CTonemapTrigger::GetEntityClass);
}


// CTonemapTrigger::GetBaseMap  (line 463, @0x0000000001edc250, libserver.so)
datamap_t *__cdecl CTonemapTrigger::GetBaseMap()
{
  return &CBaseTrigger::m_DataMap;
}


// DataMapInit<CTonemapTrigger>  (line 463, @0x0000000001edc260, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "CTonemapTrigger"
// globals: `guard variable for'DataMapInit<CTonemapTrigger>(CTonemapTrigger *)::nameHolder, CTonemapTrigger::GetEntityClass(void), CTonemapTrigger::m_DataMap, DataMapInit<CTonemapTrigger>(CTonemapTrigger *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CTonemapTrigger>(CTonemapTrigger *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CTonemapTrigger>(CTonemapTrigger *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTonemapTrigger>(CTonemapTrigger *)::nameHolder) != 0 )
  {
    DataMapInit<CTonemapTrigger>(CTonemapTrigger *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CTonemapTrigger>(CTonemapTrigger *)::nameHolder.m_pszBase = "CTonemapTrigger";
    DataMapInit<CTonemapTrigger>(CTonemapTrigger *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CTonemapTrigger>(CTonemapTrigger *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CTonemapTrigger>(CTonemapTrigger *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CTonemapTrigger>(CTonemapTrigger *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTonemapTrigger>(CTonemapTrigger *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CTonemapTrigger>(CTonemapTrigger *)::nameHolder,
      &_dso_handle);
  }
  CTonemapTrigger::m_DataMap.dataNumFields = 2;
  CTonemapTrigger::m_DataMap.baseMap = &CBaseTrigger::m_DataMap;
  CTonemapTrigger::m_DataMap.dataDesc = &DataMapInit<CTonemapTrigger>(CTonemapTrigger *)::dataDesc[1];
  AddDatadescMetadataKeys(&CTonemapTrigger::m_DataMap, CTonemapTrigger::GetEntityClass);
  return &CTonemapTrigger::m_DataMap;
}


// CTonemapTrigger::Spawn  (line 471, @0x0000000001ece320, libserver.so)  // inlines: AddSpawnFlags, CUtlSymbolLarge, FindFirstEntityByName, GetEHandle, GetEntryIndex, GetSerialNumber, NetworkStateChanged, Set, operator=, operator|=<int>
// calls: CBaseTrigger::Spawn, CBaseTrigger::InitTrigger, EntityInstanceByNameIter_t::EntityInstanceByNameIter_t, EntityInstanceByNameIter_t::First
void __fastcall CTonemapTrigger::Spawn(CTonemapTrigger *const this, const CEntityKeyValues *pKeyValues)
{
  unsigned int v4; // r13d
  CEntityInstance *v5; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v7; // eax
  __int16 v8; // cx
  string_t entityName; // [rsp+10h] [rbp-70h] BYREF
  EntityInstanceByNameIter_t v10; // [rsp+20h] [rbp-60h] BYREF

  v4 = this->m_spawnflags.m_Value | 1;
  if ( this->m_spawnflags.m_Value != v4 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_spawnflags.m_Value = v4;
  }
  CBaseTrigger::Spawn(this, pKeyValues);
  CBaseTrigger::InitTrigger(this, pKeyValues);
  if ( this->m_tonemapControllerName.u.m_Id != 0
    && (entityName.u.m_Id = this->m_tonemapControllerName.u.m_Id,
        EntityInstanceByNameIter_t::EntityInstanceByNameIter_t(
          &v10,
          &entityName,
          0,
          0,
          0,
          0,
          EntityIterType_t::ENTITY_ENUM_ITERATE_NON_DORMANT_ONLY),
        (v5 = EntityInstanceByNameIter_t::First(&v10)) != 0)
    && (m_pEntity = v5->m_pEntity) != 0 )
  {
    v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v8 = 0x7FFF;
    else
      v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hTonemapController.m_Index) = v8 | this->m_hTonemapController.m_Index & 0x8000;
    this->m_hTonemapController.m_Index = (v7 << 15) | this->m_hTonemapController.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTonemapController.m_Index = -1;
  }
}


// CTonemapTrigger::StartTouch  (line 483, @0x0000000001ecff20, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, GetTonemapController, IndexToIdentity, IsValid, LookupEntity, ToBasePlayer, operator CEntityInstance*
// calls: CBaseTrigger::StartTouch, CBasePlayer::TonemapControllerActivated
// globals: CEntityHandle::gm_pEntityList
void __fastcall CTonemapTrigger::StartTouch(CTonemapTrigger *const this, CBaseEntity *other)
{
  uint32 m_Index; // eax
  CTonemapController2 *m_pInstance; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx

  if ( (*(this->_vptr_IHandleEntity + 223))(this) != 0 )
  {
    CBaseTrigger::StartTouch(this, other);
    if ( other != 0 && (*(other->_vptr_IHandleEntity + 140))(other) != 0 )
    {
      m_Index = this->m_hTonemapController.m_Index;
      m_pInstance = 0;
      if ( m_Index + 2 > 1 )
      {
        v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTonemapController.m_Index) >> 9) & 0x3F];
        if ( v6 != 0 )
        {
          v7 = &v6[this->m_hTonemapController.m_Index & 0x1FF];
          if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
            m_pInstance = v7->m_pInstance;
        }
      }
      CBasePlayer::TonemapControllerActivated(other, m_pInstance);
    }
  }
}


// CTonemapTrigger::EndTouch  (line 499, @0x0000000001ecffd0, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, GetTonemapController, IndexToIdentity, IsValid, LookupEntity, ToBasePlayer, operator CEntityInstance*
// calls: CBaseTrigger::EndTouch, CBasePlayer::TonemapControllerDeactivated
// globals: CEntityHandle::gm_pEntityList
void __fastcall CTonemapTrigger::EndTouch(CTonemapTrigger *const this, CBaseEntity *other)
{
  uint32 m_Index; // eax
  CTonemapController2 *m_pInstance; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx

  if ( (*(this->_vptr_IHandleEntity + 223))(this) != 0 )
  {
    CBaseTrigger::EndTouch(this, other);
    if ( other != 0 && (*(other->_vptr_IHandleEntity + 140))(other) != 0 )
    {
      m_Index = this->m_hTonemapController.m_Index;
      m_pInstance = 0;
      if ( m_Index + 2 > 1 )
      {
        v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTonemapController.m_Index) >> 9) & 0x3F];
        if ( v6 != 0 )
        {
          v7 = &v6[this->m_hTonemapController.m_Index & 0x1FF];
          if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
            m_pInstance = v7->m_pInstance;
        }
      }
      CBasePlayer::TonemapControllerDeactivated(other, m_pInstance);
    }
  }
}


