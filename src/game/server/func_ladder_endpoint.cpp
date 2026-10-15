// Reconstructed from DWARF by pahole; not original source.

// src/game/server/func_ladder_endpoint.cpp:16
class CFuncLadderEndPoint : public CBaseEntity {
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
	CFuncLadderEndPoint(CFuncLadderEndPoint &);
	CFuncLadderEndPoint(CFuncLadderEndPoint &);
	CFuncLadderEndPoint();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Activate(ActivateType_t);
	bool Validate();
	virtual ~CFuncLadderEndPoint();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[10] Activate
	// sizeof = 776
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFuncLadderEndPoint::~CFuncLadderEndPoint  (line 16, @0x0000000002246da0, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CFuncLadderEndPoint::~CFuncLadderEndPoint(CFuncLadderEndPoint *const this)
{
  this->_vptr_IHandleEntity = &off_4046B70;
  CBaseEntity::~CBaseEntity(this);
}


// CFuncLadderEndPoint::~CFuncLadderEndPoint  (line 16, @0x0000000002246dc0, libserver.so)  // inlines: ~CFuncLadderEndPoint
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CFuncLadderEndPoint::~CFuncLadderEndPoint(CFuncLadderEndPoint *const this)
{
  this->_vptr_IHandleEntity = &off_4046B70;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CFuncLadderEndPoint::Schema_DynamicBinding  (line 18, @0x0000000002245870, libserver.so)
// globals: CFuncLadderEndPoint::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncLadderEndPoint::Schema_DynamicBinding(
        const CFuncLadderEndPoint *const this)
{
  return CFuncLadderEndPoint::s_pSchemaBinding;
}


// CFuncLadderEndPoint::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 18, @0x0000000002245880, libserver.so)
// globals: CFuncLadderEndPoint::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncLadderEndPoint::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncLadderEndPoint::CEntityInstanceEntityClass *const this)
{
  return CFuncLadderEndPoint::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncLadderEndPoint::CEntityInstanceEntityClass::DestructInstance  (line 18, @0x0000000002245890, libserver.so)  // inlines: Destruct<CFuncLadderEndPoint>
void __fastcall CFuncLadderEndPoint::CEntityInstanceEntityClass::DestructInstance(
        CFuncLadderEndPoint::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncLadderEndPoint::CEntityInstanceEntityClass::FreeInstance  (line 18, @0x00000000022458b0, libserver.so)
void __fastcall CFuncLadderEndPoint::CEntityInstanceEntityClass::FreeInstance(
        CFuncLadderEndPoint::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncLadderEndPoint::CEntityInstanceEntityClass::CanAllocate  (line 18, @0x00000000022458d0, libserver.so)
bool __fastcall CFuncLadderEndPoint::CEntityInstanceEntityClass::CanAllocate(
        const CFuncLadderEndPoint::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncLadderEndPoint::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 18, @0x00000000022458e0, libserver.so)
// globals: CFuncLadderEndPoint::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncLadderEndPoint::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncLadderEndPoint::CEntityInstanceEntityClass *const this)
{
  return CFuncLadderEndPoint::s_pSchemaBinding;
}


// CFuncLadderEndPoint::CEntityInstanceEntityClass::AllocateInstance  (line 18, @0x0000000002246990, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncLadderEndPoint::CEntityInstanceEntityClass::AllocateInstance(
        CFuncLadderEndPoint::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CFuncLadderEndPoint::CEntityInstanceEntityClass::ConstructInstance  (line 18, @0x0000000002246b90, libserver.so)  // inlines: CFuncLadderEndPoint, Construct<CFuncLadderEndPoint>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CFuncLadderEndPoint::CEntityInstanceEntityClass::ConstructInstance(
        CFuncLadderEndPoint::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_4046B70;
  }
  return p;
}


// CFuncLadderEndPoint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 18, @0x00000000022491a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncLadderEndPoint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncLadderEndPoint::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFuncLadderEndPoint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 18, @0x00000000022491c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncLadderEndPoint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncLadderEndPoint::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncLadderEndPoint::GetEntityClassInternal  (line 18, @0x000000000224dc90, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_05.cpp
// strings: "func_ladderendpoint", "CFuncLadderEndPoint"
// globals: `guard variable for'CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass, CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CFuncLadderEndPoint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncLadderEndPoint::GetEntityClassInfo(void)::g_EntityCFuncLadderEndPointClassInfo, CFuncLadderEndPoint::GetEntityClassInfo(void)::g_EntityCFuncLadderEndPointClassInfo
CEntityClass *__cdecl CFuncLadderEndPoint::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass) != 0 )
  {
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_designerName.u.m_Id = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass._vptr_CEntityClass = off_3F79390;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_ComponentOffsets.m_Size = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_AllHelpers.m_Size = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_instanceUnserializer.m_atomicFields,
      4);
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_classInputs.m_Size = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_classInputs.m_Memory.m_pMemory = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_classOutputs.m_Size = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_requiredEHandle.m_Index = -1;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_hNetworkSerializer = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_pBaseClassInfo = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_pClassInfo = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_flags = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_nAllHelpersFlags = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_pScriptClassDesc = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_pInputs = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_nInputCount = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_pOutputs = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_nOutputCount = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_pGameClass = 0;
    CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass._vptr_CEntityClass = off_4046AF0;
    __cxa_guard_release(&`guard variable for'CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass);
    __cxa_atexit(
      CFuncLadderEndPoint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncLadderEndPointClass != 0 )
    return &CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass;
  if ( `guard variable for'CFuncLadderEndPoint::GetEntityClassInfo(void)::g_EntityCFuncLadderEndPointClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncLadderEndPoint::GetEntityClassInfo(void)::g_EntityCFuncLadderEndPointClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncLadderEndPoint::GetEntityClassInfo(void)::g_EntityCFuncLadderEndPointClassInfo,
      "CFuncLadderEndPoint",
      "func_ladderendpoint",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncLadderEndPoint::GetEntityClassInfo(void)::g_EntityCFuncLadderEndPointClassInfo);
  }
  CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_pClassInfo = &CFuncLadderEndPoint::GetEntityClassInfo(void)::g_EntityCFuncLadderEndPointClassInfo;
  CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_pBaseClassInfo = CFuncLadderEndPoint::GetEntityClassInfo(void)::g_EntityCFuncLadderEndPointClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncLadderEndPointClass = &CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass;
  CFuncLadderEndPoint::GetEntityClassInfo(void)::g_EntityCFuncLadderEndPointClassInfo.m_pClass = &CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass;
  CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCFuncLadderEndPointClass->m_pComponentOverrides = 0;
  return &CFuncLadderEndPoint::GetEntityClassInternal(void)::g_EntityCFuncLadderEndPointClass;
}


// CFuncLadderEndPoint::Activate  (line 27, @0x000000000222b3c0, libserver.so)
// calls: CBaseEntity::Activate, CFuncLadderEndPoint::Validate
void __fastcall CFuncLadderEndPoint::Activate(CFuncLadderEndPoint *const this, ActivateType_t activateType)
{
  CBaseEntity::Activate(this, activateType);
  if ( (this->m_pEntity->m_flags & 0x200) == 0 )
    CFuncLadderEndPoint::Validate(this);
}


// CFuncLadderEndPoint::Validate  (line 37, @0x000000000222b270, libserver.so)  // inlines: CUtlSymbolLarge, GetEntityName, GetParent, SetEntityName
// calls: CBaseEntity::GetAbsOrigin, CBaseEntity::GetNextTarget, __dynamic_cast, CreateEntityByName, CFuncLadder::SetEndPoints, CBaseEntity::SetAbsOrigin, CGameSceneNode::GetOwnerEntity, CBaseEntity::SetParent, CEntityIdentity::SetEntityName, DispatchSpawn, UTIL_Remove, DevMsg
// callers: CFuncLadderEndPoint::Activate
// strings: "func_useableladder", "func_ladderendpoint(%s) without matching target\n"
// globals: `typeinfo for'CFuncLadderEndPoint
bool __fastcall CFuncLadderEndPoint::Validate(CFuncLadderEndPoint *const this)
{
  CBaseEntity *NextTarget; // rax
  const CBaseEntity *v3; // rax
  CEntityInstance *v4; // r13
  CFuncLadder *EntityByName; // rax
  CBaseEntity *v6; // r12
  const Vector *AbsOrigin; // rax
  CBaseEntity *OwnerEntity; // rsi
  CGameSceneNode *m_pParent; // rdi
  CEntityIdentity *m_pEntity; // rdi
  const char *m_pAsString; // rdx
  string_t name; // [rsp+0h] [rbp-50h] BYREF
  Vector startPos; // [rsp+10h] [rbp-40h] BYREF
  Vector endPos; // [rsp+20h] [rbp-30h] BYREF

  startPos = *CBaseEntity::GetAbsOrigin(this);
  NextTarget = CBaseEntity::GetNextTarget(this);
  if ( NextTarget != 0
    && (v3 = __dynamic_cast(NextTarget, &`typeinfo for'CBaseEntity, &`typeinfo for'CFuncLadderEndPoint, 0),
        v4 = &v3->CGameEntity,
        v3 != 0) )
  {
    endPos = *CBaseEntity::GetAbsOrigin(v3);
    EntityByName = CreateEntityByName("func_useableladder", -1);
    v6 = EntityByName;
    if ( EntityByName != 0 )
    {
      CFuncLadder::SetEndPoints(EntityByName, &startPos, &endPos);
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      CBaseEntity::SetAbsOrigin(v6, AbsOrigin);
      OwnerEntity = 0;
      m_pParent = this->m_pGameSceneNode->m_pParent;
      if ( m_pParent != 0 )
        OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
      CBaseEntity::SetParent(v6, OwnerEntity, 0, 0);
      m_pEntity = v6->m_pEntity;
      name.u.m_Id = this->m_pEntity->m_name.u.m_Id;
      CEntityIdentity::SetEntityName(m_pEntity, &name);
      DispatchSpawn(v6, 0);
    }
    UTIL_Remove(v4);
    UTIL_Remove(this);
    return 1;
  }
  else
  {
    m_pAsString = "";
    if ( this->m_pEntity->m_name.u.m_Id != 0 )
      m_pAsString = this->m_pEntity->m_name.u.m_pAsString;
    DevMsg(1, "func_ladderendpoint(%s) without matching target\n", m_pAsString);
    return 0;
  }
}


