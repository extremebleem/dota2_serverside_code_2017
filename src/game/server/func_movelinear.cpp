// Reconstructed from DWARF by pahole; not original source.

// src/game/server/func_movelinear.cpp:25
class CFuncMoveLinearAlias_momentary_door : public CFuncMoveLinear {
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
	CFuncMoveLinearAlias_momentary_door(CFuncMoveLinearAlias_momentary_door &);
	CFuncMoveLinearAlias_momentary_door(CFuncMoveLinearAlias_momentary_door &);
	CFuncMoveLinearAlias_momentary_door();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CFuncMoveLinearAlias_momentary_door();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1392
};

// src/game/server/func_movelinear.cpp:30
class CFuncWaterAnalog : public CFuncMoveLinear {
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
	CFuncWaterAnalog(CFuncWaterAnalog &);
	CFuncWaterAnalog(CFuncWaterAnalog &);
	CFuncWaterAnalog();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CFuncWaterAnalog();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1392
};

// src/game/server/func_movelinear.cpp:61
class C_CFuncMoveLinear_MapInstall {
	C_CFuncMoveLinear_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFuncMoveLinearAlias_momentary_door::Schema_DynamicBinding  (line 25, @0x0000000002245a20, libserver.so)
// globals: CFuncMoveLinearAlias_momentary_door::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncMoveLinearAlias_momentary_door::Schema_DynamicBinding(
        const CFuncMoveLinearAlias_momentary_door *const this)
{
  return CFuncMoveLinearAlias_momentary_door::s_pSchemaBinding;
}


// CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 25, @0x0000000002245a30, libserver.so)
// globals: CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass *const this)
{
  return CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass::DestructInstance  (line 25, @0x0000000002245a40, libserver.so)  // inlines: Destruct<CFuncMoveLinearAlias_momentary_door>
void __fastcall CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass::DestructInstance(
        CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass::FreeInstance  (line 25, @0x0000000002245a60, libserver.so)
void __fastcall CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass::FreeInstance(
        CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass::CanAllocate  (line 25, @0x0000000002245a80, libserver.so)
bool __fastcall CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass::CanAllocate(
        const CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 25, @0x0000000002245a90, libserver.so)
// globals: CFuncMoveLinearAlias_momentary_door::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass *const this)
{
  return CFuncMoveLinearAlias_momentary_door::s_pSchemaBinding;
}


// CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass::AllocateInstance  (line 25, @0x0000000002246a50, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass::AllocateInstance(
        CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1392);
  memset(v1, 0, 0x570u);
  return v1;
}


// CFuncMoveLinearAlias_momentary_door::~CFuncMoveLinearAlias_momentary_door  (line 25, @0x0000000002246ee0, libserver.so)  // inlines: ~CBaseToggle, ~CFuncMoveLinear
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CFuncMoveLinearAlias_momentary_door::~CFuncMoveLinearAlias_momentary_door(
        CFuncMoveLinearAlias_momentary_door *const this)
{
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFuncMoveLinearAlias_momentary_door::~CFuncMoveLinearAlias_momentary_door  (line 25, @0x0000000002246f00, libserver.so)  // inlines: ~CBaseToggle, ~CFuncMoveLinear, ~CFuncMoveLinearAlias_momentary_door
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CFuncMoveLinearAlias_momentary_door::~CFuncMoveLinearAlias_momentary_door(
        CFuncMoveLinearAlias_momentary_door *const this)
{
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass::ConstructInstance  (line 25, @0x0000000002247430, libserver.so)  // inlines: CEntityIOOutput, CFuncMoveLinear, CFuncMoveLinearAlias_momentary_door, CUtlSymbolLarge, Construct<CFuncMoveLinearAlias_momentary_door>
// calls: CBaseToggle::CBaseToggle
CEntityInstance *__fastcall CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass::ConstructInstance(
        CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseToggle::CBaseToggle(p);
    *(p + 162) = 0;
    *(p + 168) = off_3F7C190;
    *(p + 171) = off_3F7C190;
    *(p + 163) = 0;
    *(p + 164) = 0;
    *p = &off_40484F0;
  }
  return p;
}


// CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 25, @0x0000000002248e80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 25, @0x0000000002248ea0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal  (line 25, @0x000000000224f0f0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CFuncMoveLinear::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_05.cpp
// strings: "momentary_door", "CFuncMoveLinearAlias_momentary_door"
// globals: `guard variable for'CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass, CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncMoveLinearAlias_momentary_door::GetEntityClassInfo(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClassInfo, CFuncMoveLinearAlias_momentary_door::GetEntityClassInfo(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClassInfo
CEntityClass *__cdecl CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass) != 0 )
  {
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_designerName.u.m_Id = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass._vptr_CEntityClass = off_3F79390;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_ComponentOffsets.m_Size = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_AllHelpers.m_Size = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_instanceUnserializer.m_atomicFields,
      4);
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_classInputs.m_Size = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_classInputs.m_Memory.m_pMemory = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_classOutputs.m_Size = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_requiredEHandle.m_Index = -1;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_hNetworkSerializer = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_pBaseClassInfo = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_pClassInfo = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_flags = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_nAllHelpersFlags = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_pScriptClassDesc = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_pInputs = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_nInputCount = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_pOutputs = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_nOutputCount = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_pGameClass = 0;
    CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass._vptr_CEntityClass = off_4048470;
    __cxa_guard_release(&`guard variable for'CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass);
    __cxa_atexit(
      CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncMoveLinearAlias_momentary_doorClass != 0 )
    return &CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass;
  if ( `guard variable for'CFuncMoveLinearAlias_momentary_door::GetEntityClassInfo(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncMoveLinearAlias_momentary_door::GetEntityClassInfo(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClassInfo) != 0 )
  {
    EntityClassInfo = CFuncMoveLinear::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncMoveLinearAlias_momentary_door::GetEntityClassInfo(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClassInfo,
      "CFuncMoveLinearAlias_momentary_door",
      "momentary_door",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncMoveLinearAlias_momentary_door::GetEntityClassInfo(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClassInfo);
  }
  CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_pClassInfo = &CFuncMoveLinearAlias_momentary_door::GetEntityClassInfo(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClassInfo;
  CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_pBaseClassInfo = CFuncMoveLinearAlias_momentary_door::GetEntityClassInfo(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncMoveLinearAlias_momentary_doorClass = &CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass;
  CFuncMoveLinearAlias_momentary_door::GetEntityClassInfo(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClassInfo.m_pClass = &CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass;
  CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFuncMoveLinearAlias_momentary_doorClass->m_pComponentOverrides = 0;
  return &CFuncMoveLinearAlias_momentary_door::GetEntityClassInternal(void)::g_EntityCFuncMoveLinearAlias_momentary_doorClass;
}


// CFuncWaterAnalog::Schema_DynamicBinding  (line 30, @0x0000000002245aa0, libserver.so)
// globals: CFuncWaterAnalog::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncWaterAnalog::Schema_DynamicBinding(const CFuncWaterAnalog *const this)
{
  return CFuncWaterAnalog::s_pSchemaBinding;
}


// CFuncWaterAnalog::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 30, @0x0000000002245ab0, libserver.so)
// globals: CFuncWaterAnalog::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncWaterAnalog::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncWaterAnalog::CEntityInstanceEntityClass *const this)
{
  return CFuncWaterAnalog::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncWaterAnalog::CEntityInstanceEntityClass::DestructInstance  (line 30, @0x0000000002245ac0, libserver.so)  // inlines: Destruct<CFuncWaterAnalog>
void __fastcall CFuncWaterAnalog::CEntityInstanceEntityClass::DestructInstance(
        CFuncWaterAnalog::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncWaterAnalog::CEntityInstanceEntityClass::FreeInstance  (line 30, @0x0000000002245ae0, libserver.so)
void __fastcall CFuncWaterAnalog::CEntityInstanceEntityClass::FreeInstance(
        CFuncWaterAnalog::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncWaterAnalog::CEntityInstanceEntityClass::CanAllocate  (line 30, @0x0000000002245b00, libserver.so)
bool __fastcall CFuncWaterAnalog::CEntityInstanceEntityClass::CanAllocate(
        const CFuncWaterAnalog::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncWaterAnalog::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 30, @0x0000000002245b10, libserver.so)
// globals: CFuncWaterAnalog::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncWaterAnalog::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncWaterAnalog::CEntityInstanceEntityClass *const this)
{
  return CFuncWaterAnalog::s_pSchemaBinding;
}


// CFuncWaterAnalog::CEntityInstanceEntityClass::AllocateInstance  (line 30, @0x0000000002246a90, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncWaterAnalog::CEntityInstanceEntityClass::AllocateInstance(
        CFuncWaterAnalog::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1392);
  memset(v1, 0, 0x570u);
  return v1;
}


// CFuncWaterAnalog::~CFuncWaterAnalog  (line 30, @0x0000000002246f30, libserver.so)  // inlines: ~CBaseToggle, ~CFuncMoveLinear
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CFuncWaterAnalog::~CFuncWaterAnalog(CFuncWaterAnalog *const this)
{
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFuncWaterAnalog::~CFuncWaterAnalog  (line 30, @0x0000000002246f50, libserver.so)  // inlines: ~CBaseToggle, ~CFuncMoveLinear, ~CFuncWaterAnalog
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CFuncWaterAnalog::~CFuncWaterAnalog(CFuncWaterAnalog *const this)
{
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CFuncWaterAnalog::CEntityInstanceEntityClass::ConstructInstance  (line 30, @0x00000000022474a0, libserver.so)  // inlines: CEntityIOOutput, CFuncMoveLinear, CFuncWaterAnalog, CUtlSymbolLarge, Construct<CFuncWaterAnalog>
// calls: CBaseToggle::CBaseToggle
CEntityInstance *__fastcall CFuncWaterAnalog::CEntityInstanceEntityClass::ConstructInstance(
        CFuncWaterAnalog::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseToggle::CBaseToggle(p);
    *(p + 162) = 0;
    *(p + 168) = off_3F7C190;
    *(p + 171) = off_3F7C190;
    *(p + 163) = 0;
    *(p + 164) = 0;
    *p = &off_4048C30;
  }
  return p;
}


// CFuncWaterAnalog::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002248ed0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncWaterAnalog::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncWaterAnalog::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CFuncWaterAnalog::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002248ef0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncWaterAnalog::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncWaterAnalog::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncWaterAnalog::GetEntityClassInternal  (line 30, @0x000000000224e370, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CFuncMoveLinear::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_05.cpp
// strings: "func_water_analog", "CFuncWaterAnalog"
// globals: `guard variable for'CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass, CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CFuncWaterAnalog::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncWaterAnalog::GetEntityClassInfo(void)::g_EntityCFuncWaterAnalogClassInfo, CFuncWaterAnalog::GetEntityClassInfo(void)::g_EntityCFuncWaterAnalogClassInfo
CEntityClass *__cdecl CFuncWaterAnalog::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass) != 0 )
  {
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_designerName.u.m_Id = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass._vptr_CEntityClass = off_3F79390;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_ComponentOffsets.m_Size = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_AllHelpers.m_Size = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_instanceUnserializer.m_atomicFields,
      4);
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_classInputs.m_Size = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_classInputs.m_Memory.m_pMemory = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_classOutputs.m_Size = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_requiredEHandle.m_Index = -1;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_hNetworkSerializer = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_pBaseClassInfo = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_pClassInfo = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_flags = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_nAllHelpersFlags = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_pScriptClassDesc = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_pInputs = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_nInputCount = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_pOutputs = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_nOutputCount = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_pGameClass = 0;
    CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass._vptr_CEntityClass = off_4048BB0;
    __cxa_guard_release(&`guard variable for'CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass);
    __cxa_atexit(
      CFuncWaterAnalog::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncWaterAnalogClass != 0 )
    return &CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass;
  if ( `guard variable for'CFuncWaterAnalog::GetEntityClassInfo(void)::g_EntityCFuncWaterAnalogClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncWaterAnalog::GetEntityClassInfo(void)::g_EntityCFuncWaterAnalogClassInfo) != 0 )
  {
    EntityClassInfo = CFuncMoveLinear::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncWaterAnalog::GetEntityClassInfo(void)::g_EntityCFuncWaterAnalogClassInfo,
      "CFuncWaterAnalog",
      "func_water_analog",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncWaterAnalog::GetEntityClassInfo(void)::g_EntityCFuncWaterAnalogClassInfo);
  }
  CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_pClassInfo = &CFuncWaterAnalog::GetEntityClassInfo(void)::g_EntityCFuncWaterAnalogClassInfo;
  CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_pBaseClassInfo = CFuncWaterAnalog::GetEntityClassInfo(void)::g_EntityCFuncWaterAnalogClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncWaterAnalogClass = &CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass;
  CFuncWaterAnalog::GetEntityClassInfo(void)::g_EntityCFuncWaterAnalogClassInfo.m_pClass = &CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass;
  CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFuncWaterAnalogClass->m_pComponentOverrides = 0;
  return &CFuncWaterAnalog::GetEntityClassInternal(void)::g_EntityCFuncWaterAnalogClass;
}


// CFuncMoveLinear::GetDataDescMap  (line 32, @0x000000000221a530, libserver.so)
// globals: CFuncMoveLinear::m_DataMap
datamap_t *__fastcall CFuncMoveLinear::GetDataDescMap(CFuncMoveLinear *const this)
{
  return &CFuncMoveLinear::m_DataMap;
}


// CFuncMoveLinear::AddDatadescMetadataKeys  (line 32, @0x000000000222c500, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFuncMoveLinear::GetEntityClass(void)
void __fastcall CFuncMoveLinear::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFuncMoveLinear::GetEntityClass);
}


// CFuncMoveLinear::GetBaseMap  (line 32, @0x000000000222c520, libserver.so)
datamap_t *__cdecl CFuncMoveLinear::GetBaseMap()
{
  return &CBaseToggle::m_DataMap;
}


// DataMapInit<CFuncMoveLinear>  (line 32, @0x00000000022357a0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_05.cpp
// strings: "CFuncMoveLinear"
// globals: `guard variable for'DataMapInit<CFuncMoveLinear>(CFuncMoveLinear *)::nameHolder, `guard variable for'DataMapInit<CFuncMoveLinear>(CFuncMoveLinear *)::dataDesc, CFuncMoveLinear::GetEntityClass(void), CFuncMoveLinear::m_DataMap, DataMapInit<CFuncMoveLinear>(CFuncMoveLinear *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFuncMoveLinear>(CFuncMoveLinear *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CFuncMoveLinear>(CFuncMoveLinear *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncMoveLinear>(CFuncMoveLinear *)::nameHolder) != 0 )
  {
    DataMapInit<CFuncMoveLinear>(CFuncMoveLinear *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFuncMoveLinear>(CFuncMoveLinear *)::nameHolder.m_pszBase = "CFuncMoveLinear";
    DataMapInit<CFuncMoveLinear>(CFuncMoveLinear *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFuncMoveLinear>(CFuncMoveLinear *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFuncMoveLinear>(CFuncMoveLinear *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFuncMoveLinear>(CFuncMoveLinear *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncMoveLinear>(CFuncMoveLinear *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFuncMoveLinear>(CFuncMoveLinear *)::nameHolder,
      &_dso_handle);
  }
  CFuncMoveLinear::m_DataMap.baseMap = &CBaseToggle::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CFuncMoveLinear>(CFuncMoveLinear *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncMoveLinear>(CFuncMoveLinear *)::dataDesc) != 0 )
  {
    DataMapInit<CFuncMoveLinear>(CFuncMoveLinear *)::dataDesc[15].pSaveRestoreOps = eventFuncs;
    DataMapInit<CFuncMoveLinear>(CFuncMoveLinear *)::dataDesc[16].pSaveRestoreOps = eventFuncs;
    v2 = operator new[](DataMapInit<CFuncMoveLinear>(CFuncMoveLinear *)::nameHolder.m_nLenBase + 14);
    strcpy(stpcpy(v2, DataMapInit<CFuncMoveLinear>(CFuncMoveLinear *)::nameHolder.m_pszBase), "StopMoveSound");
    m_Size = DataMapInit<CFuncMoveLinear>(CFuncMoveLinear *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CFuncMoveLinear>(CFuncMoveLinear *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CFuncMoveLinear>(CFuncMoveLinear *)::nameHolder.m_Names.m_Size == DataMapInit<CFuncMoveLinear>(CFuncMoveLinear *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CFuncMoveLinear>(CFuncMoveLinear *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CFuncMoveLinear>(CFuncMoveLinear *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CFuncMoveLinear>(CFuncMoveLinear *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CFuncMoveLinear>(CFuncMoveLinear *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CFuncMoveLinear>(CFuncMoveLinear *)::dataDesc[17].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncMoveLinear>(CFuncMoveLinear *)::dataDesc);
  }
  CFuncMoveLinear::m_DataMap.dataNumFields = 17;
  CFuncMoveLinear::m_DataMap.dataDesc = &DataMapInit<CFuncMoveLinear>(CFuncMoveLinear *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFuncMoveLinear::m_DataMap, CFuncMoveLinear::GetEntityClass);
  return &CFuncMoveLinear::m_DataMap;
}


// CFuncMoveLinear::YouForgotToImplementOrDeclareServerClass  (line 61, @0x000000000221a540, libserver.so)
int __fastcall CFuncMoveLinear::YouForgotToImplementOrDeclareServerClass(CFuncMoveLinear *const this)
{
  return 0;
}


// CFuncMoveLinear::GetServerClass  (line 61, @0x0000000002221ac0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CFuncMoveLinear::GetServerClass(CFuncMoveLinear *const this)
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


// CFuncMoveLinear::Spawn  (line 67, @0x000000000221baf0, libserver.so)  // inlines: ClassMatches, DotProductAbs, FClassnameIs, FloatMakePositive, OBBSize, QAngle, SetSolid, VectorAdd, VectorMultiply, VectorRotate, VectorSubtract, operator*, operator+, operator-, operator=
// calls: CBaseEntity::Spawn, CBaseEntity::SetMoveType, CBaseModelEntity::SetModelFromKeyValues, AngleVectors, CBaseEntity::GetLocalOrigin, CBaseEntity::AddFlag, CEntityIdentity::ClassMatches, CBaseEntity::EntityToWorldTransform, VectorRotate
// strings: "func_water_analog"
void __fastcall CFuncMoveLinear::Spawn(CFuncMoveLinear *const this, const CEntityKeyValues *pKeyValues)
{
  vec_t y; // xmm1_4
  vec_t x; // xmm2_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  float z; // xmm3_4
  float m_flMoveDistance; // xmm4_4
  float m_flStartPosition; // xmm0_4
  const Vector *LocalOrigin; // rax
  vec_t v12; // xmm0_4
  vec_t v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm4_4
  vec_t v16; // xmm1_4
  float v17; // xmm3_4
  vec_t v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm4_4
  const Vector *v21; // rax
  vec_t v22; // xmm0_4
  matrix3x4_t *v23; // rax
  bool v24; // cf
  float v25; // [rsp+4h] [rbp-3Ch]
  float v26; // [rsp+8h] [rbp-38h]
  float v27; // [rsp+Ch] [rbp-34h]
  QAngle angMoveDir; // [rsp+10h] [rbp-30h] BYREF
  float out[8]; // [rsp+20h] [rbp-20h] BYREF

  CBaseEntity::Spawn(this, pKeyValues);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_PUSH, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  y = this->m_vecMoveDir.y;
  x = this->m_vecMoveDir.x;
  angMoveDir.z = this->m_vecMoveDir.z;
  angMoveDir.y = y;
  angMoveDir.x = x;
  AngleVectors(&angMoveDir, &this->m_vecMoveDir, 0, 0);
  if ( this->m_flMoveDistance <= 0.0 )
    this->m_flMoveDistance = ((fabs(
                                 (this->m_Collision.m_vecMaxs.m_Value.x - this->m_Collision.m_vecMins.m_Value.x)
                               * this->m_vecMoveDir.x)
                             + fabs(
                                 (this->m_Collision.m_vecMaxs.m_Value.y - this->m_Collision.m_vecMins.m_Value.y)
                               * this->m_vecMoveDir.y))
                            + fabs(
                                (this->m_Collision.m_vecMaxs.m_Value.z - this->m_Collision.m_vecMins.m_Value.z)
                              * this->m_vecMoveDir.z))
                           - this->m_flLip;
  if ( this->m_bMoveDirIsLocal )
  {
    v23 = CBaseEntity::EntityToWorldTransform(this);
    VectorRotate(&this->m_vecMoveDir.x, v23, out);
    v6 = out[0];
    v24 = this->m_flSpeed > 0.0;
    v7 = out[1];
    this->m_vecMoveDir.x = out[0];
    z = out[2];
    this->m_vecMoveDir.y = v7;
    this->m_vecMoveDir.z = z;
    if ( v24 )
      goto LABEL_5;
LABEL_11:
    this->m_flSpeed = 100.0;
    goto LABEL_5;
  }
  v6 = this->m_vecMoveDir.x;
  v7 = this->m_vecMoveDir.y;
  z = this->m_vecMoveDir.z;
  if ( this->m_flSpeed <= 0.0 )
    goto LABEL_11;
LABEL_5:
  m_flMoveDistance = this->m_flMoveDistance;
  m_flStartPosition = this->m_flStartPosition;
  v25 = (v6 * m_flMoveDistance) * m_flStartPosition;
  v26 = (v7 * m_flMoveDistance) * m_flStartPosition;
  v27 = (z * m_flMoveDistance) * m_flStartPosition;
  LocalOrigin = CBaseEntity::GetLocalOrigin(this);
  v12 = LocalOrigin->x - v25;
  v13 = LocalOrigin->y - v26;
  v14 = LocalOrigin->z;
  v15 = this->m_flMoveDistance;
  this->m_vecPosition1.x = v12;
  v16 = v14 - v27;
  v17 = this->m_vecMoveDir.y;
  this->m_vecPosition1.y = v13;
  this->m_vecPosition1.z = v16;
  v18 = (v17 * v15) + v13;
  v19 = this->m_vecMoveDir.z * v15;
  v20 = v15 * this->m_vecMoveDir.x;
  this->m_vecPosition2.y = v18;
  this->m_vecPosition2.z = v19 + v16;
  this->m_vecPosition2.x = v20 + v12;
  v21 = CBaseEntity::GetLocalOrigin(this);
  this->m_vecFinalDest.x = v21->x;
  this->m_vecFinalDest.y = v21->y;
  v22 = v21->z;
  this->m_pfnTouch.__pfn = 0;
  this->m_pfnTouch.__delta = 0;
  this->m_vecFinalDest.z = v22;
  this->m_currentSound.u.m_Id = 0;
  CBaseEntity::AddFlag(this, 4096);
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 6);
  if ( (this == 0 || !CEntityIdentity::ClassMatches(this->m_pEntity, "func_water_analog"))
    && (this->m_spawnflags.m_Value & 8) != 0 )
  {
    (*(this->m_Collision._vptr_ICollideable + 16))(&this->m_Collision);
  }
  (*(this->_vptr_IHandleEntity + 49))(this);
}


// CFuncMoveLinear::ShouldSavePhysics  (line 119, @0x000000000221bac0, libserver.so)  // inlines: ClassMatches, FClassnameIs
// calls: CEntityIdentity::ClassMatches
// strings: "func_water_analog"
bool __fastcall CFuncMoveLinear::ShouldSavePhysics(CFuncMoveLinear *const this)
{
  bool result; // al

  result = 1;
  if ( this != 0 )
    return !CEntityIdentity::ClassMatches(this->m_pEntity, "func_water_analog");
  return result;
}


// CFuncMoveLinear::CreateVPhysics  (line 129, @0x0000000002221d90, libserver.so)  // inlines: CCollisionAttributeWriter, CNetworkVarBase, ClassMatches, Compare, EnableInteractsAs, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, FClassnameIs, GetCollisionGroup, GetCollisionGroup_Inline, GetForModify, NetworkStateChanged, Release, Set, VPhysicsCollisionAttribute_t, operator=, ~CCollisionAttributeWriter
// calls: CEntityIdentity::ClassMatches, CCollisionProperty::SetupPhysicsFromUnscaledModel, VPhysicsCollisionAttribute_t::Compare, _Unwind_Resume
// strings: "func_water_analog"
bool __fastcall CFuncMoveLinear::CreateVPhysics(CFuncMoveLinear *const this)
{
  CCollisionProperty *m_pCollision; // rax
  int v3; // edx
  unsigned __int64 m_Value; // rax
  unsigned __int64 v6; // rax
  CCollisionAttributeWriter<RnCollisionAttr_t> writer; // [rsp+0h] [rbp-50h] BYREF

  if ( this != 0 && CEntityIdentity::ClassMatches(this->m_pEntity, "func_water_analog") )
  {
    CCollisionProperty::SetupPhysicsFromUnscaledModel(
      &this->m_Collision,
      VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED,
      2,
      0);
    writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
    m_Value = this->m_Collision.m_collisionAttribute.m_nInteractsAs.m_Value;
    memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
    if ( m_Value != 0 )
      writer.m_OriginalState.m_nInteractsAs.m_Value = m_Value;
    v6 = this->m_Collision.m_collisionAttribute.m_nInteractsWith.m_Value;
    if ( v6 != 0 )
    {
      writer.m_OriginalState.m_nInteractsWith.m_Value = this->m_Collision.m_collisionAttribute.m_nInteractsWith.m_Value;
      v6 = writer.m_OriginalState.m_nInteractsExclude.m_Value;
    }
    if ( this->m_Collision.m_collisionAttribute.m_nInteractsExclude.m_Value != v6 )
    {
      (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_OriginalState,
        24,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
      writer.m_OriginalState.m_nInteractsExclude.m_Value = this->m_Collision.m_collisionAttribute.m_nInteractsExclude.m_Value;
    }
    if ( writer.m_OriginalState.m_nEntityId.m_Value != this->m_Collision.m_collisionAttribute.m_nEntityId.m_Value )
    {
      (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_OriginalState,
        32,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
      writer.m_OriginalState.m_nEntityId.m_Value = this->m_Collision.m_collisionAttribute.m_nEntityId.m_Value;
    }
    if ( writer.m_OriginalState.m_nHierarchyId.m_Value != this->m_Collision.m_collisionAttribute.m_nHierarchyId.m_Value )
    {
      (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_OriginalState,
        36,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
      writer.m_OriginalState.m_nHierarchyId.m_Value = this->m_Collision.m_collisionAttribute.m_nHierarchyId.m_Value;
    }
    if ( writer.m_OriginalState.m_nCollisionGroup.m_Value != this->m_Collision.m_collisionAttribute.m_nCollisionGroup.m_Value )
    {
      (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_OriginalState,
        38,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
      writer.m_OriginalState.m_nCollisionGroup.m_Value = this->m_Collision.m_collisionAttribute.m_nCollisionGroup.m_Value;
    }
    if ( writer.m_OriginalState.m_nCollisionFunctionMask.m_Value != this->m_Collision.m_collisionAttribute.m_nCollisionFunctionMask.m_Value )
    {
      (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_OriginalState,
        39,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
      writer.m_OriginalState.m_nCollisionFunctionMask.m_Value = this->m_Collision.m_collisionAttribute.m_nCollisionFunctionMask.m_Value;
    }
    this->m_Collision.m_collisionAttribute.m_nInteractsAs.m_Value |= 0x8000u;
    (*(this->m_Collision._vptr_ICollideable + 4))(&this->m_Collision);
    (*(this->m_Collision._vptr_ICollideable + 2))(&this->m_Collision);
    if ( !writer.m_bReleased )
    {
      writer.m_bReleased = 1;
      if ( this->m_Collision.m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
        (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
          &this->m_Collision.m_collisionAttribute,
          8,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
      if ( this->m_Collision.m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
        (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
          &this->m_Collision.m_collisionAttribute,
          16,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
      if ( this->m_Collision.m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
        (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
          &this->m_Collision.m_collisionAttribute,
          24,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
      if ( this->m_Collision.m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
        (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
          &this->m_Collision.m_collisionAttribute,
          32,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
      if ( this->m_Collision.m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
        (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
          &this->m_Collision.m_collisionAttribute,
          36,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
      if ( this->m_Collision.m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
        (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
          &this->m_Collision.m_collisionAttribute,
          38,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
      if ( this->m_Collision.m_collisionAttribute.m_nCollisionFunctionMask.m_Value != writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
        (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
          &this->m_Collision.m_collisionAttribute,
          39,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
    }
  }
  else
  {
    m_pCollision = this->m_pCollision;
    if ( m_pCollision != 0 )
      v3 = m_pCollision->m_CollisionGroup.m_Value;
    else
      v3 = 4;
    CCollisionProperty::SetupPhysicsFromUnscaledModel(
      &this->m_Collision,
      VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED,
      v3,
      0);
  }
  return 1;
}


// CFuncMoveLinear::Precache  (line 172, @0x000000000221be20, libserver.so)
// calls: CBaseToggle::Precache, CBaseEntity::PrecacheScriptSound
void __fastcall CFuncMoveLinear::Precache(CFuncMoveLinear *const this, const CEntityPrecacheContext *pContext)
{
  CBaseToggle::Precache(this, pContext);
  if ( this->m_soundStart.u.m_Id != 0 )
    CBaseEntity::PrecacheScriptSound(this->m_soundStart.u.m_pAsString, 0);
  if ( this->m_soundStop.u.m_Id != 0 )
    CBaseEntity::PrecacheScriptSound(this->m_soundStop.u.m_pAsString, 0);
}


// CFuncMoveLinear::MoveTo  (line 190, @0x0000000002230610, libserver.so)  // inlines: CEntityIndex, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, EmitSound_t, Purge, RemoveAll, SetSoundName, SoundEventGuid_t, String, ToCStr, entindex, operator!=, operator=, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CEntityInstance::GetEntityIndex, CBaseEntity::StopSound, CBaseToggle::LinearMove, CBaseEntity::ThinkSet, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CBaseEntity::EmitSound, CRecipientFilter::~CRecipientFilter, CUtlMemory<Vector, int>::Purge, __stack_chk_fail, _Unwind_Resume (13 total)
// callers: CFuncMoveLinear::Use, CFuncMoveLinear::SetPosition, CFuncMoveLinear::InputOpen, CFuncMoveLinear::InputClose
void __fastcall CFuncMoveLinear::MoveTo(CFuncMoveLinear *const this, double a2, double a3, double a4, float flSpeed)
{
  UtlSymLargeId_t m_Id; // rax
  const char *m_pAsString; // r12
  CEntityIndex v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  IPhysicsFluidController *m_pFluidController; // rdi
  int v15; // xmm1_4
  float v16; // xmm1_4
  bool v17; // zf
  const char *v18; // rax
  CEntityIndex v19; // eax
  Vector vPositiona; // [rsp+0h] [rbp-1D0h] BYREF
  EmitSound_t ep; // [rsp+10h] [rbp-1C0h] BYREF
  CPASAttenuationFilter filter; // [rsp+70h] [rbp-160h] BYREF
  unsigned __int64 v23; // [rsp+1A8h] [rbp-28h]

  vPositiona.z = *&a3;
  v23 = __readfsqword(0x28u);
  *&vPositiona.x = a2;
  if ( *&a4 != 0.0 )
  {
    m_Id = this->m_soundStart.u.m_Id;
    if ( m_Id != 0 )
    {
      if ( m_Id == this->m_currentSound.u.m_Id )
      {
        m_pAsString = "";
        if ( this->m_soundStop.u.m_Id != 0 )
          m_pAsString = this->m_soundStop.u.m_pAsString;
        v8.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
        CBaseEntity::StopSound(v8, 4, m_pAsString, 0);
      }
      else
      {
        this->m_currentSound.u.m_Id = m_Id;
        *&ep.m_nChannel = (*(this->_vptr_IHandleEntity + 186))(this, a2, a3, a4, flSpeed);
        LODWORD(ep.m_pSoundName) = v15;
        CRecipientFilter::CRecipientFilter(&filter);
        filter._vptr_IRecipientFilter = &off_3FCB190;
        CRecipientFilter::AddRecipientsByPAS(&filter, &ep);
        filter._vptr_IRecipientFilter = &off_3FECD70;
        *&ep.m_nChannel = (*(this->_vptr_IHandleEntity + 186))(this);
        *&ep.m_pSoundName = v16;
        CPASAttenuationFilter::Filter(&filter, &ep, 0.80000001, v16);
        v17 = this->m_soundStart.u.m_Id == 0;
        ep.m_flVolume = 1.0;
        v18 = "";
        ep.m_nFlags = 0;
        ep.m_nPitch = 100;
        ep.m_pOrigin = 0;
        ep.m_flSoundTime = 0.0;
        ep.m_pflSoundDuration = 0;
        ep.m_bEmitCloseCaption = 1;
        ep.m_bWarnOnMissingCloseCaption = 0;
        ep.m_bWarnOnDirectWaveReference = 0;
        ep.m_nSpeakerEntity.m_Data = -1;
        ep.m_UtlVecSoundOrigin.m_Size = 0;
        memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
        ep.m_nChannel = 4;
        if ( !v17 )
          v18 = this->m_soundStart.u.m_pAsString;
        ep.m_pSoundName = v18;
        ep.m_SoundLevel = soundlevel_t::SNDLVL_NORM;
        v19.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
        CBaseEntity::EmitSound(&filter, v19, &ep);
        ep.m_UtlVecSoundOrigin.m_Size = 0;
        if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
          if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
        }
        filter._vptr_IRecipientFilter = &off_3FCB190;
        CRecipientFilter::~CRecipientFilter(&filter);
      }
    }
    CBaseToggle::LinearMove(this, &vPositiona, *&a3);
    m_pFluidController = this->m_pFluidController;
    if ( m_pFluidController != 0 )
      (*(m_pFluidController->_vptr_IPhysicsFluidController + 6))(
        m_pFluidController,
        v11,
        v9,
        v10,
        v12,
        v13,
        *&vPositiona.x,
        LODWORD(vPositiona.z),
        *&ep.m_nChannel);
    CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
  }
}


// CFuncMoveLinear::StopMoveSound  (line 231, @0x0000000002230c80, libserver.so)  // inlines: CEntityIndex, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, EmitSound_t, Purge, RemoveAll, SetSoundName, SoundEventGuid_t, String, ToCStr, entindex, operator!=, operator=, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, CRecipientFilter::~CRecipientFilter, CBaseEntity::ThinkSet, CBaseEntity::StopSound, CUtlMemory<Vector, int>::Purge, __stack_chk_fail, _Unwind_Resume, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase
void __fastcall CFuncMoveLinear::StopMoveSound(CFuncMoveLinear *const this)
{
  const char *m_pAsString; // r12
  UtlSymLargeId_t m_Id; // rax
  int v4; // xmm1_4
  float v5; // xmm1_4
  bool v6; // zf
  const char *v7; // rax
  CEntityIndex v8; // eax
  CEntityIndex v9; // eax
  EmitSound_t ep; // [rsp+0h] [rbp-1C0h] BYREF
  CPASAttenuationFilter filter; // [rsp+60h] [rbp-160h] BYREF
  unsigned __int64 v12; // [rsp+198h] [rbp-28h]

  v12 = __readfsqword(0x28u);
  m_pAsString = this->m_soundStart.u.m_pAsString;
  if ( m_pAsString != 0 && m_pAsString == this->m_currentSound.u.m_pAsString )
  {
    v9.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    CBaseEntity::StopSound(v9, 4, m_pAsString, 0);
  }
  m_Id = this->m_soundStop.u.m_Id;
  if ( m_Id != 0 && m_Id != this->m_currentSound.u.m_Id )
  {
    this->m_currentSound.u.m_Id = m_Id;
    *&ep.m_nChannel = (*(this->_vptr_IHandleEntity + 186))(this);
    LODWORD(ep.m_pSoundName) = v4;
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::AddRecipientsByPAS(&filter, &ep);
    filter._vptr_IRecipientFilter = &off_3FECD70;
    *&ep.m_nChannel = (*(this->_vptr_IHandleEntity + 186))(this);
    *&ep.m_pSoundName = v5;
    CPASAttenuationFilter::Filter(&filter, &ep, 0.80000001, v5);
    v6 = this->m_soundStop.u.m_Id == 0;
    ep.m_flVolume = 1.0;
    v7 = "";
    ep.m_nFlags = 0;
    ep.m_nPitch = 100;
    ep.m_pOrigin = 0;
    ep.m_flSoundTime = 0.0;
    ep.m_pflSoundDuration = 0;
    ep.m_bEmitCloseCaption = 1;
    ep.m_bWarnOnMissingCloseCaption = 0;
    ep.m_bWarnOnDirectWaveReference = 0;
    ep.m_nSpeakerEntity.m_Data = -1;
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
    ep.m_nChannel = 4;
    if ( !v6 )
      v7 = this->m_soundStop.u.m_pAsString;
    ep.m_pSoundName = v7;
    ep.m_SoundLevel = soundlevel_t::SNDLVL_NORM;
    v8.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    CBaseEntity::EmitSound(&filter, v8, &ep);
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
      if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
    }
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
}


// CFuncMoveLinear::MoveDone  (line 259, @0x0000000002232b80, libserver.so)  // inlines: CVariantBase, FireOutput, Free, curtime, operator==, ~CVariantBase
// calls: CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CBaseToggle::MoveDone, CBaseEntity::GetLocalOrigin, CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CFuncMoveLinear::StopMoveSound(void)
void __fastcall CFuncMoveLinear::MoveDone(CFuncMoveLinear *const this)
{
  double v2; // xmm1_8
  CGlobalVars *v3; // r12
  double v4; // xmm0_8
  const Vector *LocalOrigin; // rax
  const Vector *v6; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  CBaseEntity::ThinkSet(this, CFuncMoveLinear::StopMoveSound, 0.0, 0, 0);
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v4) = 0;
    *&v4 = v3->m_flCurrentTime + 0.1;
  }
  else
  {
    *&v4 = 1036831949;
  }
  CBaseEntity::SetNextThink(this, v4, v2, 0);
  CBaseToggle::MoveDone(this);
  LocalOrigin = CBaseEntity::GetLocalOrigin(this);
  if ( this->m_vecPosition2.x == LocalOrigin->x
    && this->m_vecPosition2.y == LocalOrigin->y
    && this->m_vecPosition2.z == LocalOrigin->z )
  {
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnFullyOpen, this, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  }
  else
  {
    v6 = CBaseEntity::GetLocalOrigin(this);
    if ( this->m_vecPosition1.x == v6->x && this->m_vecPosition1.y == v6->y && this->m_vecPosition1.z == v6->z )
    {
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnFullyClosed, this, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    }
  }
}


// CFuncMoveLinear::Use  (line 281, @0x0000000002230940, libserver.so)  // inlines: FastSqrt, Length, VectorAdd, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-
// calls: CBaseEntity::GetLocalOrigin, CFuncMoveLinear::MoveTo
void __fastcall CFuncMoveLinear::Use(
        CFuncMoveLinear *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  float v6; // xmm0_4
  const Vector *LocalOrigin; // rax
  double v8; // xmm1_8
  double v9; // xmm2_8
  double v10; // [rsp-34h] [rbp-34h]
  unsigned int v11; // [rsp-2Ch] [rbp-2Ch]
  unsigned int v12; // [rsp-2Ch] [rbp-2Ch]

  if ( useType == USE_SET )
  {
    v6 = fminf(1.0, value);
    *&v10 = ((this->m_vecPosition2.x - this->m_vecPosition1.x) * v6) + this->m_vecPosition1.x;
    *(&v10 + 1) = ((this->m_vecPosition2.y - this->m_vecPosition1.y) * v6) + this->m_vecPosition1.y;
    *&v11 = ((this->m_vecPosition2.z - this->m_vecPosition1.z) * v6) + this->m_vecPosition1.z;
    LocalOrigin = CBaseEntity::GetLocalOrigin(this);
    *&v8 = v11;
    *&v12 = (((*&v10 - LocalOrigin->x) * (*&v10 - LocalOrigin->x))
           + ((*(&v10 + 1) - LocalOrigin->y) * (*(&v10 + 1) - LocalOrigin->y)))
          + ((*&v8 - LocalOrigin->z) * (*&v8 - LocalOrigin->z));
    *&v9 = v12;
    *&v9 = fsqrt(*&v12) * 10.0;
    CFuncMoveLinear::MoveTo(this, v10, v8, v9, *(&v10 + 1));
  }
}


// CFuncMoveLinear::SetPosition  (line 300, @0x0000000002230a50, libserver.so)  // inlines: FastSqrt, Length, VectorAdd, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-
// calls: CBaseEntity::GetLocalOrigin, CFuncMoveLinear::MoveTo
// callers: CFuncMoveLinear::InputSetPosition
void __fastcall CFuncMoveLinear::SetPosition(CFuncMoveLinear *const this, float a2, float flPosition)
{
  const Vector *LocalOrigin; // rax
  double v5; // [rsp+4h] [rbp-2Ch]
  float v6; // [rsp+Ch] [rbp-24h]

  *&v5 = ((this->m_vecPosition2.x - this->m_vecPosition1.x) * a2) + this->m_vecPosition1.x;
  *(&v5 + 1) = ((this->m_vecPosition2.y - this->m_vecPosition1.y) * a2) + this->m_vecPosition1.y;
  v6 = ((this->m_vecPosition2.z - this->m_vecPosition1.z) * a2) + this->m_vecPosition1.z;
  LocalOrigin = CBaseEntity::GetLocalOrigin(this);
  if ( fsqrt(
         (((*&v5 - LocalOrigin->x) * (*&v5 - LocalOrigin->x))
        + ((*(&v5 + 1) - LocalOrigin->y) * (*(&v5 + 1) - LocalOrigin->y)))
       + ((v6 - LocalOrigin->z) * (v6 - LocalOrigin->z))) > 0.001 )
    CFuncMoveLinear::MoveTo(this, v5, COERCE_DOUBLE(LODWORD(v6)), COERCE_DOUBLE(LODWORD(this->m_flSpeed)), *(&v5 + 1));
}


// CFuncMoveLinear::InputOpen  (line 313, @0x0000000002230b80, libserver.so)  // inlines: operator!=
// calls: CBaseEntity::GetLocalOrigin, CFuncMoveLinear::MoveTo
void __fastcall CFuncMoveLinear::InputOpen(CFuncMoveLinear *const this, inputdata_t *const inputdata)
{
  const Vector *LocalOrigin; // rax
  float v4; // xmm3_4

  LocalOrigin = CBaseEntity::GetLocalOrigin(this);
  if ( this->m_vecPosition2.x != LocalOrigin->x
    || this->m_vecPosition2.y != LocalOrigin->y
    || this->m_vecPosition2.z != LocalOrigin->z )
  {
    CFuncMoveLinear::MoveTo(
      this,
      *&this->m_vecPosition2.x,
      COERCE_DOUBLE(LODWORD(this->m_vecPosition2.z)),
      COERCE_DOUBLE(LODWORD(this->m_flSpeed)),
      v4);
  }
}


// CFuncMoveLinear::InputClose  (line 325, @0x0000000002230c00, libserver.so)  // inlines: operator!=
// calls: CBaseEntity::GetLocalOrigin, CFuncMoveLinear::MoveTo
void __fastcall CFuncMoveLinear::InputClose(CFuncMoveLinear *const this, inputdata_t *const inputdata)
{
  const Vector *LocalOrigin; // rax
  float v4; // xmm3_4

  LocalOrigin = CBaseEntity::GetLocalOrigin(this);
  if ( this->m_vecPosition1.x != LocalOrigin->x
    || this->m_vecPosition1.y != LocalOrigin->y
    || this->m_vecPosition1.z != LocalOrigin->z )
  {
    CFuncMoveLinear::MoveTo(
      this,
      *&this->m_vecPosition1.x,
      COERCE_DOUBLE(LODWORD(this->m_vecPosition1.z)),
      COERCE_DOUBLE(LODWORD(this->m_flSpeed)),
      v4);
  }
}


// CFuncMoveLinear::InputSetPosition  (line 338, @0x0000000002230b50, libserver.so)  // inlines: Float, operator float
// calls: CFuncMoveLinear::SetPosition
void __fastcall CFuncMoveLinear::InputSetPosition(CFuncMoveLinear *const this, inputdata_t *const inputdata)
{
  float v2; // xmm1_4
  float m_float64; // xmm0_4

  if ( inputdata->value.m_type == 34 )
  {
    m_float64 = inputdata->value.m_float64;
    CFuncMoveLinear::SetPosition(this, m_float64, v2);
  }
  else
  {
    CFuncMoveLinear::SetPosition(this, inputdata->value.m_float, v2);
  }
}


// CFuncMoveLinear::InputResetPosition  (line 347, @0x000000000221b940, libserver.so)  // inlines: Float, VectorAdd, VectorMultiply, VectorSubtract, operator float, operator*, operator+, operator-, operator=
// calls: CBaseEntity::GetLocalOrigin
void __fastcall CFuncMoveLinear::InputResetPosition(CFuncMoveLinear *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float m_flMoveDistance; // xmm3_4
  const Vector *LocalOrigin; // rax
  vec_t v6; // xmm0_4
  vec_t v7; // xmm2_4
  float z; // xmm1_4
  float v9; // xmm4_4
  vec_t v10; // xmm1_4
  float y; // xmm3_4
  vec_t v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm4_4
  float v15; // [rsp+4h] [rbp-1Ch]
  float v16; // [rsp+8h] [rbp-18h]
  float v17; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  m_flMoveDistance = this->m_flMoveDistance;
  this->m_flStartPosition = m_float64;
  v15 = (this->m_vecMoveDir.x * m_flMoveDistance) * m_float64;
  v16 = (this->m_vecMoveDir.y * m_flMoveDistance) * m_float64;
  v17 = (m_flMoveDistance * this->m_vecMoveDir.z) * m_float64;
  LocalOrigin = CBaseEntity::GetLocalOrigin(this);
  v6 = LocalOrigin->x - v15;
  v7 = LocalOrigin->y - v16;
  z = LocalOrigin->z;
  v9 = this->m_flMoveDistance;
  this->m_vecPosition1.x = v6;
  v10 = z - v17;
  y = this->m_vecMoveDir.y;
  this->m_vecPosition1.y = v7;
  this->m_vecPosition1.z = v10;
  v12 = (y * v9) + v7;
  v13 = this->m_vecMoveDir.z * v9;
  v14 = v9 * this->m_vecMoveDir.x;
  this->m_vecPosition2.y = v12;
  this->m_vecPosition2.z = v13 + v10;
  this->m_vecPosition2.x = v14 + v6;
  this->m_vecFinalDest = *CBaseEntity::GetLocalOrigin(this);
}


// CFuncMoveLinear::InputTeleportToTarget  (line 359, @0x0000000002220d00, libserver.so)  // inlines: AssignTo, TempString, ToString, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=
// calls: CGameEntitySystem::FindEntityByName, CBaseEntity::GetAbsOrigin, UTIL_SetOrigin, CBaseEntity::GetLocalOrigin, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "true", "false", "%d %d %d %d"
// globals: jpt_2220D3C, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CFuncMoveLinear::InputTeleportToTarget(CFuncMoveLinear *const this, inputdata_t *const inputdata)
{
  int16 m_type; // di
  CBaseEntity *pCaller; // r13
  CBaseEntity *pActivator; // r12
  char *m_pszString; // rdx
  CBaseEntity *EntityByName; // rax
  const Vector *AbsOrigin; // rax
  float m_flMoveDistance; // xmm3_4
  float x; // xmm2_4
  const Vector *LocalOrigin; // rax
  vec_t v12; // xmm0_4
  vec_t v13; // xmm2_4
  float z; // xmm1_4
  float v15; // xmm4_4
  vec_t v16; // xmm1_4
  float y; // xmm3_4
  vec_t v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm4_4
  const char *v21; // rax
  double m_float; // xmm0_8
  const char *v23; // rcx
  float v24; // [rsp+14h] [rbp-2Ch]
  float v25; // [rsp+18h] [rbp-28h]
  float v26; // [rsp+1Ch] [rbp-24h]

  m_type = inputdata->value.m_type;
  pCaller = inputdata->pCaller;
  pActivator = inputdata->pActivator;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_10;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_12;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_14;
      case 6:
        v23 = "true";
        if ( inputdata->value.m_char == 0 )
          v23 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v23);
        goto LABEL_18;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_14;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_18;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_18:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_12:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_14:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v21 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v21);
LABEL_10:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, m_pszString, this, pActivator, pCaller, 0);
  if ( EntityByName != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(EntityByName);
    UTIL_SetOrigin(this, AbsOrigin, 0);
    m_flMoveDistance = this->m_flMoveDistance;
    x = this->m_vecMoveDir.x;
    this->m_flStartPosition = 0.0;
    v24 = (x * m_flMoveDistance) * 0.0;
    v25 = (this->m_vecMoveDir.y * m_flMoveDistance) * 0.0;
    v26 = (m_flMoveDistance * this->m_vecMoveDir.z) * 0.0;
    LocalOrigin = CBaseEntity::GetLocalOrigin(this);
    v12 = LocalOrigin->x - v24;
    v13 = LocalOrigin->y - v25;
    z = LocalOrigin->z;
    v15 = this->m_flMoveDistance;
    this->m_vecPosition1.x = v12;
    v16 = z - v26;
    y = this->m_vecMoveDir.y;
    this->m_vecPosition1.y = v13;
    this->m_vecPosition1.z = v16;
    v18 = (y * v15) + v13;
    v19 = this->m_vecMoveDir.z * v15;
    v20 = v15 * this->m_vecMoveDir.x;
    this->m_vecPosition2.y = v18;
    this->m_vecPosition2.z = v19 + v16;
    this->m_vecPosition2.x = v20 + v12;
    this->m_vecFinalDest = *CBaseEntity::GetLocalOrigin(this);
  }
}


// CFuncMoveLinear::Blocked  (line 379, @0x000000000221afc0, libserver.so)
// calls: CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::TakeDamage, CTakeDamageInfo::~CTakeDamageInfo, _Unwind_Resume
void __fastcall CFuncMoveLinear::Blocked(CFuncMoveLinear *const this, CBaseEntity *pOther)
{
  float m_flBlockDamage; // xmm0_4
  CTakeDamageInfo info; // [rsp+0h] [rbp-A0h] BYREF

  m_flBlockDamage = this->m_flBlockDamage;
  if ( m_flBlockDamage != 0.0 )
  {
    CTakeDamageInfo::CTakeDamageInfo(&info, this, this, m_flBlockDamage, 1, 0);
    CBaseEntity::TakeDamage(pOther, &info);
    CTakeDamageInfo::~CTakeDamageInfo(&info);
  }
}


// CFuncMoveLinear::InputSetSpeed  (line 404, @0x000000000221be80, libserver.so)  // inlines: Float, LengthSqr, VectorSubtract, operator float, operator-
// calls: CBaseEntity::GetLocalOrigin, CBaseToggle::LinearMove
void __fastcall CFuncMoveLinear::InputSetSpeed(CFuncMoveLinear *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  const Vector *LocalOrigin; // rax
  const Vector *p_m_vecFinalDest; // rsi
  float v6; // xmm1_4

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  this->m_flSpeed = m_float64;
  LocalOrigin = CBaseEntity::GetLocalOrigin(this);
  if ( ((((this->m_vecFinalDest.x - LocalOrigin->x) * (this->m_vecFinalDest.x - LocalOrigin->x))
       + ((this->m_vecFinalDest.y - LocalOrigin->y) * (this->m_vecFinalDest.y - LocalOrigin->y)))
      + ((this->m_vecFinalDest.z - LocalOrigin->z) * (this->m_vecFinalDest.z - LocalOrigin->z))) > 1.4210855e-14 )
  {
    p_m_vecFinalDest = &this->m_vecFinalDest;
    v6 = fabs(this->m_flSpeed);
    if ( v6 <= 0.00000011920929 )
    {
      this->m_flSpeed = 1.0;
      p_m_vecFinalDest = CBaseEntity::GetLocalOrigin(this);
    }
    CBaseToggle::LinearMove(this, p_m_vecFinalDest, v6);
  }
}


// CFuncMoveLinear::DrawDebugTextOverlays  (line 431, @0x000000000221b700, libserver.so)  // inlines: FastSqrt, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CBaseEntity::DrawDebugTextOverlays, CBaseEntity::GetLocalOrigin, V_snprintf, CBaseEntity::EntityText, __stack_chk_fail
// strings: "Current Pos: %3.3f", "Target Pos: %3.3f"
int __fastcall CFuncMoveLinear::DrawDebugTextOverlays(
        CFuncMoveLinear *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v3; // r14
  char v4; // r12
  int v6; // r13d
  float v8; // xmm0_4
  const Vector *LocalOrigin; // rax
  float v10; // xmm1_4
  float v11; // xmm0_4
  float flTravelDist; // [rsp+Ch] [rbp-234h]
  char tempstr[520]; // [rsp+10h] [rbp-230h] BYREF
  unsigned __int64 v14; // [rsp+218h] [rbp-28h]

  v3 = iDebugFilterFlags;
  v4 = nDebugOverlayBits;
  v14 = __readfsqword(0x28u);
  v6 = CBaseEntity::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v4 & 1) != 0 && (v3 & 0x4000) != 0 )
  {
    v8 = this->m_vecPosition1.x - this->m_vecPosition2.x;
    flTravelDist = fsqrt(
                     ((v8 * v8)
                    + ((this->m_vecPosition1.y - this->m_vecPosition2.y)
                     * (this->m_vecPosition1.y - this->m_vecPosition2.y)))
                   + ((this->m_vecPosition1.z - this->m_vecPosition2.z)
                    * (this->m_vecPosition1.z - this->m_vecPosition2.z)));
    LocalOrigin = CBaseEntity::GetLocalOrigin(this);
    v10 = this->m_vecPosition1.z - LocalOrigin->z;
    V_snprintf(
      tempstr,
      512,
      "Current Pos: %3.3f",
      (fsqrt(
         (((this->m_vecPosition1.x - LocalOrigin->x) * (this->m_vecPosition1.x - LocalOrigin->x))
        + ((this->m_vecPosition1.y - LocalOrigin->y) * (this->m_vecPosition1.y - LocalOrigin->y)))
       + (v10 * v10))
     / flTravelDist));
    CBaseEntity::EntityText(this, v6, tempstr, 0.0, 255, 255, 255, 255);
    v11 = this->m_vecPosition1.x - this->m_vecFinalDest.x;
    V_snprintf(
      tempstr,
      512,
      "Target Pos: %3.3f",
      (fsqrt(
         ((v11 * v11)
        + ((this->m_vecPosition1.y - this->m_vecFinalDest.y) * (this->m_vecPosition1.y - this->m_vecFinalDest.y)))
       + ((this->m_vecPosition1.z - this->m_vecFinalDest.z) * (this->m_vecPosition1.z - this->m_vecFinalDest.z)))
     / flTravelDist));
    CBaseEntity::EntityText(this, v6 + 1, tempstr, 0.0, 255, 255, 255, 255);
    v6 += 2;
  }
  return v6;
}


