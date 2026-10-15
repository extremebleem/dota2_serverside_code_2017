// Reconstructed from DWARF by pahole; not original source.

// src/game/server/rope.cpp:29
class CRopeKeyframeAlias_move_rope : public CRopeKeyframe {
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
	CRopeKeyframeAlias_move_rope(CRopeKeyframeAlias_move_rope &);
	CRopeKeyframeAlias_move_rope(CRopeKeyframeAlias_move_rope &);
	CRopeKeyframeAlias_move_rope();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CRopeKeyframeAlias_move_rope();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1240
};

// src/game/server/rope.cpp:31
class C_CRopeKeyframe_MapInstall {
	C_CRopeKeyframe_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CRopeKeyframeAlias_move_rope::Schema_DynamicBinding  (line 29, @0x00000000023a8b70, libserver.so)
// globals: CRopeKeyframeAlias_move_rope::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CRopeKeyframeAlias_move_rope::Schema_DynamicBinding(
        const CRopeKeyframeAlias_move_rope *const this)
{
  return CRopeKeyframeAlias_move_rope::s_pSchemaBinding;
}


// CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x00000000023a8b80, libserver.so)
// globals: CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass *const this)
{
  return CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x00000000023a8b90, libserver.so)  // inlines: Destruct<CRopeKeyframeAlias_move_rope>
void __fastcall CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass::DestructInstance(
        CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x00000000023a8bb0, libserver.so)
void __fastcall CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass::FreeInstance(
        CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x00000000023a8bd0, libserver.so)
bool __fastcall CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass::CanAllocate(
        const CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x00000000023a8be0, libserver.so)
// globals: CRopeKeyframeAlias_move_rope::s_pSchemaBinding
const ISchemaBinding *__fastcall CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass *const this)
{
  return CRopeKeyframeAlias_move_rope::s_pSchemaBinding;
}


// CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x00000000023aa770, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass::AllocateInstance(
        CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1240);
  memset(v1, 0, 0x4D8u);
  return v1;
}


// CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x00000000023acb60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x00000000023acb80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x00000000023b07c0, libserver.so)  // inlines: CRopeKeyframeAlias_move_rope, Construct<CRopeKeyframeAlias_move_rope>
// calls: CRopeKeyframe::CRopeKeyframe
CEntityInstance *__fastcall CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass::ConstructInstance(
        CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CRopeKeyframe::CRopeKeyframe(p);
    *p = &off_40A50D0;
    *(p + 144) = off_40A57A0;
  }
  return p;
}


// CRopeKeyframeAlias_move_rope::~CRopeKeyframeAlias_move_rope  (line 29, @0x00000000023b0800, libserver.so)  // inlines: ~CNetworkVarBase, ~CRopeKeyframe, ~CStrongHandle, ~IPositionWatcher, ~IWatcherCallback
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity
void __fastcall CRopeKeyframeAlias_move_rope::~CRopeKeyframeAlias_move_rope(CRopeKeyframeAlias_move_rope *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>,CRopeKeyframe::NetworkVar_m_iRopeMaterialModelIndex> *p_m_iRopeMaterialModelIndex; // rdi

  p_m_iRopeMaterialModelIndex = &this->m_iRopeMaterialModelIndex;
  p_m_iRopeMaterialModelIndex[-150].m_Value.m_pBinding = &off_40A57D0;
  p_m_iRopeMaterialModelIndex[-6].m_Value.m_pBinding = off_40A5EA0;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&p_m_iRopeMaterialModelIndex->m_Value);
  this->_vptr_IWatcherCallback = off_4074030;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CRopeKeyframeAlias_move_rope::~CRopeKeyframeAlias_move_rope  (line 29, @0x00000000023b08d0, libserver.so)  // inlines: ~CNetworkVarBase, ~CRopeKeyframe, ~CRopeKeyframeAlias_move_rope, ~CStrongHandle, ~IPositionWatcher, ~IWatcherCallback
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CRopeKeyframeAlias_move_rope::~CRopeKeyframeAlias_move_rope(CRopeKeyframeAlias_move_rope *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>,CRopeKeyframe::NetworkVar_m_iRopeMaterialModelIndex> *p_m_iRopeMaterialModelIndex; // rdi

  p_m_iRopeMaterialModelIndex = &this->m_iRopeMaterialModelIndex;
  p_m_iRopeMaterialModelIndex[-150].m_Value.m_pBinding = &off_40A57D0;
  p_m_iRopeMaterialModelIndex[-6].m_Value.m_pBinding = off_40A5EA0;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&p_m_iRopeMaterialModelIndex->m_Value);
  this->_vptr_IWatcherCallback = off_4074030;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CRopeKeyframeAlias_move_rope::GetEntityClassInternal  (line 29, @0x00000000023b42c0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CRopeKeyframe::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "CRopeKeyframeAlias_move_rope"
// globals: `guard variable for'CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass, CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CRopeKeyframeAlias_move_rope::GetEntityClassInfo(void)::g_EntityCRopeKeyframeAlias_move_ropeClassInfo, CRopeKeyframeAlias_move_rope::GetEntityClassInfo(void)::g_EntityCRopeKeyframeAlias_move_ropeClassInfo
CEntityClass *__cdecl CRopeKeyframeAlias_move_rope::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass) != 0 )
  {
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_designerName.u.m_Id = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass._vptr_CEntityClass = off_3F79390;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_ComponentOffsets.m_Size = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_AllHelpers.m_Size = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_instanceUnserializer.m_atomicFields,
      4);
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_classInputs.m_Size = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_classInputs.m_Memory.m_pMemory = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_classOutputs.m_Size = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_requiredEHandle.m_Index = -1;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_hNetworkSerializer = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_pBaseClassInfo = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_pClassInfo = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_flags = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_nAllHelpersFlags = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_pScriptClassDesc = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_pInputs = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_nInputCount = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_pOutputs = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_nOutputCount = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_pGameClass = 0;
    CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass._vptr_CEntityClass = off_40A5050;
    __cxa_guard_release(&`guard variable for'CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass);
    __cxa_atexit(
      CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass,
      &_dso_handle);
  }
  if ( g_pEntityCRopeKeyframeAlias_move_ropeClass != 0 )
    return &CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass;
  if ( `guard variable for'CRopeKeyframeAlias_move_rope::GetEntityClassInfo(void)::g_EntityCRopeKeyframeAlias_move_ropeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CRopeKeyframeAlias_move_rope::GetEntityClassInfo(void)::g_EntityCRopeKeyframeAlias_move_ropeClassInfo) != 0 )
  {
    EntityClassInfo = CRopeKeyframe::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CRopeKeyframeAlias_move_rope::GetEntityClassInfo(void)::g_EntityCRopeKeyframeAlias_move_ropeClassInfo,
      "CRopeKeyframeAlias_move_rope",
      "move_rope",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CRopeKeyframeAlias_move_rope::GetEntityClassInfo(void)::g_EntityCRopeKeyframeAlias_move_ropeClassInfo);
  }
  CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_pClassInfo = &CRopeKeyframeAlias_move_rope::GetEntityClassInfo(void)::g_EntityCRopeKeyframeAlias_move_ropeClassInfo;
  CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_pBaseClassInfo = CRopeKeyframeAlias_move_rope::GetEntityClassInfo(void)::g_EntityCRopeKeyframeAlias_move_ropeClassInfo.m_pBaseClassInfo;
  g_pEntityCRopeKeyframeAlias_move_ropeClass = &CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass;
  CRopeKeyframeAlias_move_rope::GetEntityClassInfo(void)::g_EntityCRopeKeyframeAlias_move_ropeClassInfo.m_pClass = &CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass;
  CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCRopeKeyframeAlias_move_ropeClass->m_pComponentOverrides = 0;
  return &CRopeKeyframeAlias_move_rope::GetEntityClassInternal(void)::g_EntityCRopeKeyframeAlias_move_ropeClass;
}


// CRopeKeyframe::YouForgotToImplementOrDeclareServerClass  (line 31, @0x0000000002380960, libserver.so)
int __fastcall CRopeKeyframe::YouForgotToImplementOrDeclareServerClass(CRopeKeyframe *const this)
{
  return 0;
}


// CRopeKeyframe::GetServerClass  (line 31, @0x0000000002385e10, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CRopeKeyframe::GetServerClass(CRopeKeyframe *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  CEntityClass *v4; // rdx
  CEntityClassInfo *v5; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
    {
      v4 = m_pBaseClassInfo->m_pClass;
      result = v4->m_pGameClass;
      if ( result == 0 )
      {
        v5 = v4->m_pBaseClassInfo;
        if ( v5 != 0 )
          return CEntityClass::GetGameClass(v5->m_pClass, 0);
      }
    }
  }
  return result;
}


// CRopeKeyframe::GetDataDescMap  (line 35, @0x0000000002380970, libserver.so)
// globals: CRopeKeyframe::m_DataMap
datamap_t *__fastcall CRopeKeyframe::GetDataDescMap(CRopeKeyframe *const this)
{
  return &CRopeKeyframe::m_DataMap;
}


// CRopeKeyframe::AddDatadescMetadataKeys  (line 35, @0x0000000002386050, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CRopeKeyframe::GetEntityClass(void)
void __fastcall CRopeKeyframe::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CRopeKeyframe::GetEntityClass);
}


// CRopeKeyframe::GetBaseMap  (line 35, @0x0000000002386070, libserver.so)
datamap_t *__cdecl CRopeKeyframe::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CRopeKeyframe>  (line 35, @0x0000000002386080, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "CRopeKeyframe"
// globals: `guard variable for'DataMapInit<CRopeKeyframe>(CRopeKeyframe *)::nameHolder, CRopeKeyframe::GetEntityClass(void), CRopeKeyframe::m_DataMap, DataMapInit<CRopeKeyframe>(CRopeKeyframe *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CRopeKeyframe>(CRopeKeyframe *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CRopeKeyframe>(CRopeKeyframe *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CRopeKeyframe>(CRopeKeyframe *)::nameHolder) != 0 )
  {
    DataMapInit<CRopeKeyframe>(CRopeKeyframe *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CRopeKeyframe>(CRopeKeyframe *)::nameHolder.m_pszBase = "CRopeKeyframe";
    DataMapInit<CRopeKeyframe>(CRopeKeyframe *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CRopeKeyframe>(CRopeKeyframe *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CRopeKeyframe>(CRopeKeyframe *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CRopeKeyframe>(CRopeKeyframe *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CRopeKeyframe>(CRopeKeyframe *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CRopeKeyframe>(CRopeKeyframe *)::nameHolder,
      &_dso_handle);
  }
  CRopeKeyframe::m_DataMap.dataNumFields = 24;
  CRopeKeyframe::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  CRopeKeyframe::m_DataMap.dataDesc = &DataMapInit<CRopeKeyframe>(CRopeKeyframe *)::dataDesc[1];
  AddDatadescMetadataKeys(&CRopeKeyframe::m_DataMap, CRopeKeyframe::GetEntityClass);
  return &CRopeKeyframe::m_DataMap;
}


// CRopeKeyframe::CRopeKeyframe  (line 77, @0x000000000239b320, libserver.so)  // inlines: AddEFlags, CEntityHandle, CNetworkHandleBase, CNetworkVarBase, CStrongHandle, CUtlSymbolLarge, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<short int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, NetworkStateChanged, Set, operator=<int>, operator=<short int>, ~CNetworkVarBase, ~CStrongHandle, ~IPositionWatcher, ~IWatcherCallback
// calls: CBaseModelEntity::CBaseModelEntity, CBaseEntity::DispatchUpdateTransmitState, CBaseEntity::SetDamageOptions, CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume
// callers: CRopeKeyframe::CEntityInstanceEntityClass::ConstructInstance, CRopeKeyframeAlias_move_rope::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CRopeKeyframe::CRopeKeyframe(CRopeKeyframe *const this)
{
  double v2; // xmm0_8

  CBaseModelEntity::CBaseModelEntity(this);
  this->m_iEFlags |= 0x80u;
  this->_vptr_IHandleEntity = &off_40A57D0;
  this->m_iEndAttachment.m_Value = 0;
  this->_vptr_IWatcherCallback = off_40A5EA0;
  this->m_RopeFlags.m_Value = 0;
  this->m_iNextLinkName.u.m_Id = 0;
  this->m_Slack.m_Value = 0;
  this->m_Width.m_Value = 0.0;
  this->m_TextureScale.m_Value = 0.0;
  this->m_nSegments.m_Value = 0;
  this->m_bConstrainBetweenEndpoints.m_Value = 0;
  this->m_strRopeMaterialModel.u.m_Id = 0;
  this->m_iRopeMaterialModelIndex.m_Value.m_pBinding = 0;
  this->m_Subdiv.m_Value = 0;
  this->m_nChangeCount.m_Value = 0;
  this->m_RopeLength.m_Value = 0;
  this->m_fLockedPoints.m_Value = 0;
  this->m_flScrollSpeed.m_Value = 0.0;
  this->m_hStartPoint.m_Value.m_Index = -1;
  this->m_hEndPoint.m_Value.m_Index = -1;
  this->m_iStartAttachment.m_Value = 0;
  CBaseEntity::DispatchUpdateTransmitState(this);
  CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_YES);
  if ( this->m_iEndAttachment.m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1234, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iEndAttachment.m_Value = 0;
  }
  if ( this->m_iStartAttachment.m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1232, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iStartAttachment.m_Value = 0;
  }
  if ( this->m_Slack.m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1176, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_Slack.m_Value = 0;
  }
  if ( this->m_Width.m_Value != 2.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1180, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_Width.m_Value = 2.0;
  }
  if ( this->m_TextureScale.m_Value != 4.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1184, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_TextureScale.m_Value = 4.0;
  }
  if ( this->m_nSegments.m_Value != 5 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1188, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nSegments.m_Value = 5;
  }
  if ( this->m_RopeLength.m_Value != 20 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1210, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_RopeLength.m_Value = 20;
  }
  if ( this->m_fLockedPoints.m_Value != 3 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1212, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fLockedPoints.m_Value = 3;
  }
  v2 = 0.0;
  if ( this->m_flScrollSpeed.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1216, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0.0);
    this->m_flScrollSpeed.m_Value = 0.0;
  }
  if ( this->m_RopeFlags.m_Value != 72 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1160, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v2);
    this->m_RopeFlags.m_Value = 72;
  }
  if ( this->m_Subdiv.m_Value != 2 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1208, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v2);
    this->m_Subdiv.m_Value = 2;
  }
  this->m_bCreatedFromMapFile = 1;
}


// CRopeKeyframe::UpdateOnRemove  (line 99, @0x0000000002386780, libserver.so)
// calls: CRopeKeyframe::SetStartPoint, CRopeKeyframe::SetEndPoint, CBaseEntity::SetParent, CBaseModelEntity::UpdateOnRemove
void __fastcall CRopeKeyframe::UpdateOnRemove(CRopeKeyframe *const this)
{
  CRopeKeyframe::SetStartPoint(this, 0, 0);
  CRopeKeyframe::SetEndPoint(this, 0, 0);
  CBaseEntity::SetParent(this, 0, 0, 0);
  CBaseModelEntity::UpdateOnRemove(this);
}


// CRopeKeyframe::SetAttachmentPoint  (line 110, @0x00000000023865a0, libserver.so)  // inlines: CEntityHandle, DecrementTransmitStateOwnedCounter, GetEHandle, GetEntryIndex, GetSerialNumber, IncrementTransmitStateOwnedCounter, Set, operator=
// calls: CGameEntitySystem::GetBaseEntity, CNetworkTransmitComponent::DecrementTransmitStateOwnedCounter, CBaseEntity::DispatchUpdateTransmitState, CBaseEntity::SetTransmitState, CNetworkTransmitComponent::IncrementTransmitStateOwnedCounter, CRopeKeyframe::EndpointsChanged
// callers: CRopeKeyframe::SetStartPoint, CRopeKeyframe::SetEndPoint
void __fastcall CRopeKeyframe::SetAttachmentPoint(
        CRopeKeyframe *const this,
        CBaseHandle *const hOutEnt,
        __int16 *const iOutAttachment,
        CBaseEntity *pEnt,
        int iAttachment)
{
  __int16 v6; // r14
  CBaseEntity *BaseEntity; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v12; // eax
  __int16 v13; // cx
  CBaseEntity *pCurEnt; // [rsp+8h] [rbp-48h]
  CEntityHandle hEnt; // [rsp+10h] [rbp-40h] BYREF

  v6 = iAttachment;
  hEnt.m_Index = hOutEnt->m_Index;
  BaseEntity = CGameEntitySystem::GetBaseEntity(g_pGameEntitySystem, &hEnt);
  if ( BaseEntity != 0 )
  {
    pCurEnt = BaseEntity;
    CNetworkTransmitComponent::DecrementTransmitStateOwnedCounter(&BaseEntity->m_NetworkTransmitComponent);
    CBaseEntity::DispatchUpdateTransmitState(pCurEnt);
  }
  if ( pEnt != 0 )
  {
    m_pEntity = pEnt->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v12 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v13 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(hOutEnt->m_Index) = v13 | hOutEnt->m_Index & 0x8000;
      hOutEnt->m_Index = (v12 << 15) | hOutEnt->m_Index & 0x7FFF;
      *iOutAttachment = v6;
    }
    else
    {
      hOutEnt->m_Index = -1;
      *iOutAttachment = v6;
    }
    CBaseEntity::SetTransmitState(pEnt, 4);
    CNetworkTransmitComponent::IncrementTransmitStateOwnedCounter(&pEnt->m_NetworkTransmitComponent);
  }
  else
  {
    hOutEnt->m_Index = -1;
    *iOutAttachment = v6;
  }
  CRopeKeyframe::EndpointsChanged(this);
}


// CRopeKeyframe::SetStartPoint  (line 134, @0x00000000023866a0, libserver.so)  // inlines: GetForModify, NetworkStateChanged
// calls: CRopeKeyframe::SetAttachmentPoint
// callers: CRopeKeyframe::UpdateOnRemove, CRopeKeyframe::Create, CRopeKeyframe::CreateWithSecondPointDetached, CRopeKeyframe::Activate
void __fastcall CRopeKeyframe::SetStartPoint(CRopeKeyframe *const this, CBaseEntity *pStartPoint, int attachment)
{
  (*(this->_vptr_IHandleEntity + 22))(this, 1232, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  (*(this->_vptr_IHandleEntity + 22))(this, 1224, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  CRopeKeyframe::SetAttachmentPoint(
    this,
    &this->m_hStartPoint.m_Value,
    &this->m_iStartAttachment.m_Value,
    pStartPoint,
    attachment);
}


// CRopeKeyframe::SetEndPoint  (line 139, @0x0000000002386710, libserver.so)  // inlines: GetForModify, NetworkStateChanged
// calls: CRopeKeyframe::SetAttachmentPoint
// callers: CRopeKeyframe::UpdateOnRemove, CRopeKeyframe::Create, CRopeKeyframe::CreateWithSecondPointDetached, CRopeKeyframe::Activate
void __fastcall CRopeKeyframe::SetEndPoint(CRopeKeyframe *const this, CBaseEntity *pEndPoint, int attachment)
{
  (*(this->_vptr_IHandleEntity + 22))(this, 1234, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  (*(this->_vptr_IHandleEntity + 22))(this, 1228, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  CRopeKeyframe::SetAttachmentPoint(
    this,
    &this->m_hEndPoint.m_Value,
    &this->m_iEndAttachment.m_Value,
    pEndPoint,
    attachment);
}


// CRopeKeyframe::EnablePlayerWeaponAttach  (line 144, @0x0000000002386150, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
void __fastcall CRopeKeyframe::EnablePlayerWeaponAttach(CRopeKeyframe *const this, bool bAttach)
{
  unsigned __int16 m_Value; // ax
  int v4; // ebx

  m_Value = this->m_RopeFlags.m_Value;
  v4 = m_Value;
  LOBYTE(v4) = m_Value & 0x7F;
  if ( bAttach )
    v4 = m_Value | 0x80;
  if ( m_Value != v4 && m_Value != v4 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1160, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_RopeFlags.m_Value = v4;
  }
}


// CRopeKeyframe::Create  (line 159, @0x00000000023867c0, libserver.so)  // inlines: NetworkStateChanged, Set, SetMaterial, operator&=<int>, operator=, operator=<int>
// calls: CreateEntityByName, CRopeKeyframe::SetStartPoint, CRopeKeyframe::SetEndPoint, AllocPooledString, DispatchSpawn
CRopeKeyframe *__fastcall CRopeKeyframe::Create(
        CBaseEntity *pStartEnt,
        CBaseEntity *pEndEnt,
        int iStartAttachment,
        int iEndAttachment,
        int ropeWidth,
        const char *pMaterialName,
        int numSegments,
        const char *pClassName)
{
  CRopeKeyframe *EntityByName; // rax
  CRopeKeyframe *v13; // r12
  unsigned __int16 m_Value; // ax
  unsigned __int16 v15; // r13
  bool v16; // zf
  int v17; // eax
  char v18; // bl
  UtlSymLargeId_t v22[8]; // [rsp+10h] [rbp-40h] BYREF

  EntityByName = CreateEntityByName(pClassName, -1);
  v13 = EntityByName;
  if ( EntityByName == 0 )
    return 0;
  CRopeKeyframe::SetStartPoint(EntityByName, pStartEnt, iStartAttachment);
  CRopeKeyframe::SetEndPoint(v13, pEndEnt, iEndAttachment);
  m_Value = v13->m_RopeFlags.m_Value;
  v13->m_bCreatedFromMapFile = 0;
  v15 = m_Value & 0xFFBF;
  if ( m_Value != (m_Value & 0xFFBF) )
  {
    (*(v13->_vptr_IHandleEntity + 22))(v13, 1160, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v13->m_RopeFlags.m_Value = v15;
  }
  (*(v13->_vptr_IHandleEntity + 215))(v13);
  AllocPooledString(v22, pMaterialName);
  v16 = ropeWidth == v13->m_Width.m_Value;
  v13->m_strRopeMaterialModel.u.m_Id = v22[0];
  if ( !v16 )
  {
    (*(v13->_vptr_IHandleEntity + 22))(v13, 1180, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v13->m_Width.m_Value = ropeWidth;
  }
  v17 = 2;
  v18 = 10;
  if ( numSegments >= 2 )
    v17 = numSegments;
  if ( v17 <= 10 )
    v18 = v17;
  if ( v18 != v13->m_nSegments.m_Value )
  {
    (*(v13->_vptr_IHandleEntity + 22))(v13, 1188, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v13->m_nSegments.m_Value = v18;
  }
  DispatchSpawn(v13, 0);
  return v13;
}


// CRopeKeyframe::CreateWithSecondPointDetached  (line 190, @0x0000000002386940, libserver.so)  // inlines: NetworkStateChanged, Set, SetMaterial, operator&=<int>, operator=, operator=<<anonymous enum> >, operator=<int>
// calls: CreateEntityByName, CRopeKeyframe::SetStartPoint, CRopeKeyframe::SetEndPoint, AllocPooledString
CRopeKeyframe *__fastcall CRopeKeyframe::CreateWithSecondPointDetached(
        CBaseEntity *pStartEnt,
        int iStartAttachment,
        int ropeLength,
        int ropeWidth,
        const char *pMaterialName,
        int numSegments,
        bool bInitialHang,
        const char *pClassName)
{
  __int16 v9; // r12
  CRopeKeyframe *EntityByName; // rax
  CRopeKeyframe *v12; // r15
  bool v13; // zf
  unsigned __int16 v14; // r14
  double v15; // xmm0_8
  int v16; // edx
  CRopeKeyframe *v17; // r12
  char v18; // bl
  UtlSymLargeId_t v23[8]; // [rsp+20h] [rbp-40h] BYREF

  v9 = ropeLength;
  EntityByName = CreateEntityByName(pClassName, -1);
  v12 = EntityByName;
  if ( EntityByName == 0 )
    return 0;
  CRopeKeyframe::SetStartPoint(EntityByName, pStartEnt, iStartAttachment);
  CRopeKeyframe::SetEndPoint(v12, 0, 0);
  v13 = v12->m_fLockedPoints.m_Value == 1;
  v12->m_bCreatedFromMapFile = 0;
  if ( !v13 )
  {
    (*(v12->_vptr_IHandleEntity + 22))(v12, 1212, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v12->m_fLockedPoints.m_Value = 1;
  }
  if ( !bInitialHang )
  {
    v14 = v12->m_RopeFlags.m_Value & 0xFFBF;
    if ( v12->m_RopeFlags.m_Value != v14 )
    {
      (*(v12->_vptr_IHandleEntity + 22))(v12, 1160, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v12->m_RopeFlags.m_Value = v14;
    }
  }
  (*(v12->_vptr_IHandleEntity + 215))(v12);
  AllocPooledString(v23, pMaterialName);
  v13 = v9 == v12->m_RopeLength.m_Value;
  v12->m_strRopeMaterialModel.u.m_Id = v23[0];
  if ( !v13 )
  {
    (*(v12->_vptr_IHandleEntity + 22))(v12, 1210, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v12->m_RopeLength.m_Value = v9;
  }
  *&v15 = ropeWidth;
  if ( ropeWidth != v12->m_Width.m_Value )
  {
    (*(v12->_vptr_IHandleEntity + 22))(v12, 1180, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v15 = COERCE_UNSIGNED_INT(ropeWidth);
    v12->m_Width.m_Value = ropeWidth;
  }
  v16 = 2;
  v17 = v12;
  if ( numSegments >= 2 )
    v16 = numSegments;
  v18 = 10;
  if ( v16 <= 10 )
    v18 = v16;
  if ( v18 != v12->m_nSegments.m_Value )
  {
    (*(v12->_vptr_IHandleEntity + 22))(v12, 1188, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v15);
    v12->m_nSegments.m_Value = v18;
  }
  return v17;
}


// CRopeKeyframe::ActivateStartDirectionConstraints  (line 225, @0x00000000023861b0, libserver.so)  // inlines: NetworkStateChanged, Set, operator&=<int>, operator|=<<anonymous enum> >
void __fastcall CRopeKeyframe::ActivateStartDirectionConstraints(CRopeKeyframe *const this, bool bEnable)
{
  unsigned __int8 m_Value; // al
  unsigned __int8 v4; // r12

  m_Value = this->m_fLockedPoints.m_Value;
  if ( bEnable )
  {
    v4 = m_Value | 4;
    if ( m_Value == (m_Value | 4) )
      return;
  }
  else
  {
    v4 = m_Value & 0xFB;
    if ( m_Value == (m_Value & 0xFB) )
      return;
  }
  (*(this->_vptr_IHandleEntity + 22))(this, 1212, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_fLockedPoints.m_Value = v4;
}


// CRopeKeyframe::ActivateEndDirectionConstraints  (line 238, @0x0000000002386210, libserver.so)  // inlines: NetworkStateChanged, Set, operator&=<int>, operator|=<<anonymous enum> >
void __fastcall CRopeKeyframe::ActivateEndDirectionConstraints(CRopeKeyframe *const this, bool bEnable)
{
  unsigned __int8 m_Value; // al
  unsigned __int8 v4; // r12

  m_Value = this->m_fLockedPoints.m_Value;
  if ( bEnable )
  {
    v4 = m_Value | 8;
    if ( m_Value == (m_Value | 8) )
      return;
  }
  else
  {
    v4 = m_Value & 0xF7;
    if ( m_Value == (m_Value & 0xF7) )
      return;
  }
  (*(this->_vptr_IHandleEntity + 22))(this, 1212, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_fLockedPoints.m_Value = v4;
}


// CRopeKeyframe::PrecacheShakeRopes  (line 251, @0x0000000002386270, libserver.so)
// calls: PrecacheEffect
// callers: CEnvShake::Precache, CEnvTilt::Precache
// strings: "ShakeRopes"
void __cdecl CRopeKeyframe::PrecacheShakeRopes()
{
  PrecacheEffect("ShakeRopes", 0);
}


// CRopeKeyframe::ShakeRopes  (line 256, @0x0000000002386290, libserver.so)  // inlines: CEffectData, CNetworkVarBase, CNetworkVectorBase, CUtlStringToken, CWeakHandle, EnsureValidValue, EnsureValidValue<CEntityHandle>, Init, Set, Zero, operator!=, operator=, operator=<float>
// calls: DispatchEffect
// callers: CEnvShake::ApplyShake
// strings: "ShakeRopes"
void __fastcall CRopeKeyframe::ShakeRopes(const Vector *const vCenter, float a2, float flRadius, float flMagnitude)
{
  float x; // xmm3_4
  float y; // xmm4_4
  bool v6; // zf
  bool v7; // zf
  __int64 (__fastcall **v8)(CEffectData *__hidden); // [rsp-8h] [rbp-78h] BYREF
  CEffectData shakeData; // [rsp+0h] [rbp-70h] BYREF

  x = vCenter->x;
  v8 = &off_3FB64D0;
  y = vCenter->y;
  memset(&shakeData, 0, 48);
  shakeData.m_vAngles.m_Value.y = NAN;
  shakeData.m_vAngles.m_Value.z = NAN;
  shakeData.m_hEntity.m_Value.m_Index = 1065353216;
  memset(&shakeData.m_hOtherEntity, 0, 31);
  *&shakeData.m_nMaterial.m_Value = 0;
  *&shakeData.m_nColor.m_Value = 0;
  if ( x == 0.0 && y == 0.0 && vCenter->z == 0.0 )
  {
    v6 = a2 == 0.0;
  }
  else
  {
    v6 = a2 == 0.0;
    shakeData._vptr_CEffectData = __PAIR64__(LODWORD(y), LODWORD(x));
    shakeData.m_vOrigin.m_Value.x = vCenter->z;
  }
  if ( v6 )
  {
    v7 = flRadius == 0.0;
  }
  else
  {
    v7 = flRadius == 0.0;
    shakeData.m_flScale.m_Value = a2;
  }
  if ( !v7 )
    *&shakeData.m_hOtherEntity.m_Value.m_Index = flRadius;
  DispatchEffect("ShakeRopes", &v8);
}


// CRopeKeyframe::SetupHangDistance  (line 266, @0x0000000002387ff0, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, NetworkStateChanged, Set, operator=<int>
// calls: CBaseEntity::GetAbsOrigin, CBaseAnimating::GetAttachment, CalcRopeStartingConditions
__int64 __fastcall CRopeKeyframe::SetupHangDistance(CRopeKeyframe *const this, float a2, float flHangDist)
{
  uint32 v4; // ecx
  unsigned __int16 v5; // dx
  int v6; // edi
  const CBaseEntity *m_pInstance; // r12
  int v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  unsigned __int16 v11; // dx
  int v12; // edi
  vec_t v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  __int64 result; // rax
  const CBaseEntity *v17; // r13
  __int64 v18; // rax
  float v19; // xmm0_4
  AttachmentHandle_t m_Value; // r14
  const CBaseAnimating *v21; // rax
  __int64 v22; // rax
  float v23; // xmm0_4
  AttachmentHandle_t v24; // r14
  const CBaseAnimating *v25; // rax
  int v26; // r12d
  int v27; // r12d
  float flHangDistb; // [rsp+Ch] [rbp-54h]
  float flSlack; // [rsp+18h] [rbp-48h] BYREF
  float flLen; // [rsp+1Ch] [rbp-44h] BYREF
  Vector v1; // [rsp+20h] [rbp-40h] BYREF
  Vector v2; // [rsp+30h] [rbp-30h] BYREF

  v4 = this->m_hStartPoint.m_Value.m_Index >> 15;
  if ( this->m_hStartPoint.m_Value.m_Index == -1 )
  {
    v5 = 0x7FFF;
    v6 = 0x7FFF;
  }
  else
  {
    v5 = this->m_hStartPoint.m_Value.m_Index & 0x7FFF;
    v6 = v5;
  }
  m_pInstance = 0;
  v8 = (v4 << 15) | v5 & 0x7FFF;
  LODWORD(v2.x) = v8;
  if ( (v8 + 2) > 1 )
  {
    v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9];
    if ( v9 != 0 )
    {
      v10 = &v9[v6 & 0x1FF];
      if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
        m_pInstance = v10->m_pInstance;
    }
  }
  if ( this->m_hEndPoint.m_Value.m_Index == -1 )
  {
    v11 = 0x7FFF;
    v12 = 0x7FFF;
  }
  else
  {
    v11 = this->m_hEndPoint.m_Value.m_Index & 0x7FFF;
    v12 = v11;
  }
  LODWORD(v13) = (this->m_hEndPoint.m_Value.m_Index >> 15 << 15) | v11 & 0x7FFF;
  v2.x = v13;
  if ( (LODWORD(v13) + 2) <= 1 )
    return 0;
  v14 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v12 >> 9];
  if ( v14 == 0 )
    return 0;
  v15 = &v14[v12 & 0x1FF];
  if ( v15 == 0 )
    return 0;
  if ( LODWORD(v13) != v15->m_EHandle.m_Index )
    return 0;
  v17 = v15->m_pInstance;
  if ( m_pInstance == 0 || v17 == 0 )
    return 0;
  v1 = *CBaseEntity::GetAbsOrigin(m_pInstance);
  v18 = (*(m_pInstance->_vptr_IHandleEntity + 43))(m_pInstance);
  v19 = a2;
  if ( v18 != 0 )
  {
    m_Value = this->m_iStartAttachment.m_Value;
    v21 = (*(m_pInstance->_vptr_IHandleEntity + 43))(m_pInstance);
    CBaseAnimating::GetAttachment(v21, m_Value, &v1);
    v19 = a2;
  }
  flHangDistb = v19;
  v2 = *CBaseEntity::GetAbsOrigin(v17);
  v22 = (*(v17->_vptr_IHandleEntity + 43))(v17);
  v23 = flHangDistb;
  if ( v22 != 0 )
  {
    v24 = this->m_iEndAttachment.m_Value;
    v25 = (*(v17->_vptr_IHandleEntity + 43))(v17);
    CBaseAnimating::GetAttachment(v25, v24, &v2);
    v23 = flHangDistb;
  }
  CalcRopeStartingConditions(&v1, &v2, 10, v23, &flLen, &flSlack);
  v26 = flLen;
  if ( flLen != this->m_RopeLength.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1210, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_RopeLength.m_Value = v26;
  }
  result = 1;
  v27 = flSlack;
  if ( flSlack != this->m_Slack.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1176, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_Slack.m_Value = v27;
    return 1;
  }
  return result;
}


// CRopeKeyframe::Init  (line 291, @0x00000000023873c0, libserver.so)  // inlines: CEntityHandle, Get, GetEndPointPos, GetEntryIndex, GetHandleEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, NetworkStateChanged, Set, operator< <float>, operator=<float>, operator=<int>, operator><int>
// calls: CBaseEntity::SetLocalAngles, CRopeKeyframe::RecalculateLength, CRopeKeyframe::UpdateBBox, CBaseEntity::GetAbsOrigin, CRopeKeyframe::GetEndPointPos, DevMsg(char const*,...)
// strings: "move_rope has TextureScale greater than 10 at (%2.2f, %2.2f, %2.2f)\n", "move_rope has TextureScale less than 0.1 at (%2.2f, %2.2f, %2.2f)\n"
void __fastcall CRopeKeyframe::Init(CRopeKeyframe *const this)
{
  char v1; // r12
  unsigned __int8 m_Value; // al
  unsigned __int16 v4; // dx
  int v5; // edi
  bool v6; // cl
  vec_t v7; // eax
  CEntitySystem *v8; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  unsigned __int16 v11; // dx
  int v12; // edi
  bool v13; // cl
  vec_t v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  float v17; // xmm0_4
  Vector origin; // [rsp+0h] [rbp-20h] BYREF

  v1 = 10;
  CBaseEntity::SetLocalAngles(this, &vec3_angle);
  CRopeKeyframe::RecalculateLength(this);
  m_Value = this->m_nSegments.m_Value;
  if ( m_Value <= 0xAu )
  {
    v1 = 2;
    if ( m_Value >= 2u )
      v1 = this->m_nSegments.m_Value;
  }
  if ( m_Value != v1 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1188, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nSegments.m_Value = v1;
  }
  CRopeKeyframe::UpdateBBox(this, 1);
  if ( this->m_hStartPoint.m_Value.m_Index == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = this->m_hStartPoint.m_Value.m_Index & 0x7FFF;
    v5 = v4;
  }
  v6 = 0;
  LODWORD(v7) = (this->m_hStartPoint.m_Value.m_Index >> 15 << 15) | v4 & 0x7FFF;
  origin.x = v7;
  v8 = g_pEntitySystem;
  if ( (LODWORD(v7) + 2) > 1 )
  {
    v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
    if ( v9 != 0 )
    {
      v10 = &v9[v5 & 0x1FF];
      if ( v10 != 0 && LODWORD(v7) == v10->m_EHandle.m_Index )
        v6 = v10->m_pInstance != 0;
    }
  }
  this->m_bStartPointValid = v6;
  if ( this->m_hEndPoint.m_Value.m_Index == -1 )
  {
    v11 = 0x7FFF;
    v12 = 0x7FFF;
  }
  else
  {
    v11 = this->m_hEndPoint.m_Value.m_Index & 0x7FFF;
    v12 = v11;
  }
  v13 = 0;
  LODWORD(v14) = (this->m_hEndPoint.m_Value.m_Index >> 15 << 15) | v11 & 0x7FFF;
  origin.x = v14;
  if ( (LODWORD(v14) + 2) > 1 )
  {
    v15 = v8->m_EntityList.m_pIdentityChunks[v12 >> 9];
    if ( v15 != 0 )
    {
      v16 = &v15[v12 & 0x1FF];
      if ( v16 != 0 && LODWORD(v14) == v16->m_EHandle.m_Index )
        v13 = v16->m_pInstance != 0;
    }
  }
  v17 = this->m_TextureScale.m_Value;
  this->m_bEndPointValid = v13;
  if ( v17 < 0.1 )
  {
    origin = *CBaseEntity::GetAbsOrigin(this);
    CRopeKeyframe::GetEndPointPos(this, &origin, *&origin.x);
    DevMsg("move_rope has TextureScale less than 0.1 at (%2.2f, %2.2f, %2.2f)\n", origin.x, origin.y, origin.z);
    if ( this->m_TextureScale.m_Value != 0.1 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1184, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_TextureScale.m_Value = 0.1;
    }
  }
  else if ( v17 > 10.0 )
  {
    origin = *CBaseEntity::GetAbsOrigin(this);
    CRopeKeyframe::GetEndPointPos(this, &origin, *&origin.x);
    DevMsg("move_rope has TextureScale greater than 10 at (%2.2f, %2.2f, %2.2f)\n", origin.x, origin.y, origin.z);
    if ( this->m_TextureScale.m_Value != 10.0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1184, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_TextureScale.m_Value = 10.0;
    }
  }
}


// CRopeKeyframe::Activate  (line 323, @0x0000000002386b10, libserver.so)  // inlines: CUtlSymbolLarge, GetComponent<CBodyComponent>, NetworkStateChanged, Set, operator&=<int>, operator[], operator|=<int>
// calls: CBaseModelEntity::Activate, CGameEntitySystem::FindEntityByName, CRopeKeyframe::SetEndPoint, CRopeKeyframe::SetStartPoint, CGameSceneNode::ForceParentToBeNetworked, CRopeKeyframe::EndpointsChanged
void __fastcall CRopeKeyframe::Activate(CRopeKeyframe *const this, ActivateType_t activateType)
{
  CBaseEntity *EntityByName; // rax
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rcx
  __int64 v7; // rax
  unsigned __int16 v8; // r12
  string_t iszName; // [rsp+10h] [rbp-20h] BYREF

  CBaseModelEntity::Activate(this, activateType);
  if ( !this->m_bCreatedFromMapFile )
    return;
  iszName.u.m_Id = this->m_iNextLinkName.u.m_Id;
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
  if ( EntityByName != 0 )
  {
    CRopeKeyframe::SetEndPoint(this, EntityByName, 0);
    if ( (this->m_spawnflags.m_Value & 1) != 0 )
    {
      v8 = this->m_RopeFlags.m_Value | 1;
      if ( this->m_RopeFlags.m_Value != v8 )
      {
LABEL_9:
        (*(this->_vptr_IHandleEntity + 22))(this, 1160, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_RopeFlags.m_Value = v8;
      }
    }
  }
  else if ( (this->m_fLockedPoints.m_Value & 2) != 0 )
  {
    v8 = this->m_RopeFlags.m_Value & 0xFFF7;
    if ( this->m_RopeFlags.m_Value != v8 )
      goto LABEL_9;
  }
  CRopeKeyframe::SetStartPoint(this, this, 0);
  m_pEntity = this->m_pEntity;
  m_pInstance = m_pEntity->m_pInstance;
  if ( m_pEntity->m_pInstance != 0 )
  {
    m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
    v7 = 0;
    if ( m_nBaseOffset != 0xFFFF )
      v7 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
  }
  else
  {
    v7 = 0;
  }
  CGameSceneNode::ForceParentToBeNetworked(*(v7 + 8), 1);
  CRopeKeyframe::EndpointsChanged(this);
  (*(this->_vptr_IHandleEntity + 215))(this);
}


// CRopeKeyframe::EndpointsChanged  (line 363, @0x00000000023863d0, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: WatchPositionChanges, CBaseEntity::GetMoveParent
// callers: CRopeKeyframe::SetAttachmentPoint, CRopeKeyframe::Activate
void __fastcall CRopeKeyframe::EndpointsChanged(CRopeKeyframe *const this)
{
  unsigned __int16 v2; // dx
  int v3; // esi
  uint32 v4; // eax
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx
  CEntitySystem *v7; // rdi
  unsigned __int16 v8; // dx
  int v9; // esi
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CRopeKeyframe *m_pInstance; // rsi
  CBaseEntity *MoveParent; // rax
  CRopeKeyframe *v15; // rsi
  CBaseEntity *v16; // rax
  CRopeKeyframe *v17; // [rsp+8h] [rbp-28h]
  CRopeKeyframe *v18; // [rsp+8h] [rbp-28h]

  if ( this->m_hStartPoint.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = this->m_hStartPoint.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  v4 = (this->m_hStartPoint.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
  if ( v4 + 2 > 1
    && (v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9]) != 0
    && (v6 = &v5[v3 & 0x1FF]) != 0
    && v4 == v6->m_EHandle.m_Index )
  {
    m_pInstance = v6->m_pInstance;
    v7 = g_pEntitySystem;
    if ( v6->m_pInstance != 0 )
    {
      if ( this != m_pInstance
        || (v17 = v6->m_pInstance, MoveParent = CBaseEntity::GetMoveParent(this), m_pInstance = v17, MoveParent != 0) )
      {
        WatchPositionChanges(this, m_pInstance);
        v7 = g_pEntitySystem;
      }
      else
      {
        v7 = g_pEntitySystem;
      }
    }
  }
  else
  {
    v7 = g_pEntitySystem;
  }
  if ( this->m_hEndPoint.m_Value.m_Index == -1 )
  {
    v8 = 0x7FFF;
    v9 = 0x7FFF;
  }
  else
  {
    v8 = this->m_hEndPoint.m_Value.m_Index & 0x7FFF;
    v9 = v8;
  }
  v10 = (this->m_hEndPoint.m_Value.m_Index >> 15 << 15) | v8 & 0x7FFF;
  if ( v10 + 2 > 1 )
  {
    v11 = v7->m_EntityList.m_pIdentityChunks[v9 >> 9];
    if ( v11 != 0 )
    {
      v12 = &v11[v9 & 0x1FF];
      if ( v12 != 0 && v10 == v12->m_EHandle.m_Index )
      {
        v15 = v12->m_pInstance;
        if ( v12->m_pInstance != 0 )
        {
          if ( this != v15 || (v18 = v12->m_pInstance, v16 = CBaseEntity::GetMoveParent(this), v15 = v18, v16 != 0) )
            WatchPositionChanges(this, v15);
        }
      }
    }
  }
}


// CRopeKeyframe::RecalculateLength  (line 386, @0x0000000002386c80, libserver.so)  // inlines: CEntityHandle, FastSqrt, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, Length, LookupEntity, NetworkStateChanged, Set, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator=<int>
// calls: CBaseEntity::GetAbsOrigin
// callers: CRopeKeyframe::Init
void __fastcall CRopeKeyframe::RecalculateLength(CRopeKeyframe *const this)
{
  uint32 v2; // ecx
  unsigned __int16 v3; // dx
  int v4; // edi
  int v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  const CBaseEntity *v8; // rdi
  unsigned __int16 v9; // dx
  int v10; // r8d
  const CBaseEntity *m_pInstance; // r13
  uint32 v12; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  const Vector *AbsOrigin; // r12
  const Vector *v16; // rax
  int v17; // r12d

  v2 = this->m_hEndPoint.m_Value.m_Index >> 15;
  if ( this->m_hEndPoint.m_Value.m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = this->m_hEndPoint.m_Value.m_Index & 0x7FFF;
    v4 = v3;
  }
  v5 = (v2 << 15) | v3 & 0x7FFF;
  if ( (v5 + 2) > 1
    && (v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9]) != 0
    && (v7 = &v6[v4 & 0x1FF]) != 0
    && v5 == v7->m_EHandle.m_Index
    && (v8 = v7->m_pInstance, v7->m_pInstance != 0) )
  {
    if ( this->m_hStartPoint.m_Value.m_Index == -1 )
    {
      v9 = 0x7FFF;
      v10 = 0x7FFF;
    }
    else
    {
      v9 = this->m_hStartPoint.m_Value.m_Index & 0x7FFF;
      v10 = v9;
    }
    m_pInstance = 0;
    v12 = (this->m_hStartPoint.m_Value.m_Index >> 15 << 15) | v9 & 0x7FFF;
    if ( v12 + 2 > 1 )
    {
      v13 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v10 >> 9];
      if ( v13 != 0 )
      {
        v14 = &v13[v10 & 0x1FF];
        if ( v14 != 0 && v12 == v14->m_EHandle.m_Index )
          m_pInstance = v14->m_pInstance;
      }
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
    v16 = CBaseEntity::GetAbsOrigin(m_pInstance);
    v17 = fsqrt(
            (((v16->x - AbsOrigin->x) * (v16->x - AbsOrigin->x)) + ((v16->y - AbsOrigin->y) * (v16->y - AbsOrigin->y)))
          + ((v16->z - AbsOrigin->z) * (v16->z - AbsOrigin->z)));
    if ( v17 != this->m_RopeLength.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1210, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_RopeLength.m_Value = v17;
    }
  }
  else if ( this->m_RopeLength.m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1210, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_RopeLength.m_Value = 0;
  }
}


// CRopeKeyframe::DieAtNextRest  (line 408, @0x0000000002386eb0, libserver.so)  // inlines: curtime
// calls: CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
void __fastcall CRopeKeyframe::DieAtNextRest(CRopeKeyframe *const this)
{
  double v2; // xmm1_8
  CGlobalVars *v3; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CBaseEntity::ThinkSet(this, CBaseEntity::SUB_Remove, 0.0, 0, 0);
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(COERCE_UNSIGNED_INT(v3->m_flCurrentTime + 1.0)), v2, 0);
  }
  else
  {
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(1065353216), v2, 0);
  }
}


// CRopeKeyframe::SetTransmit  (line 415, @0x0000000002383d90, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsAlreadyMarkedForTransmission, LookupEntity, entindex, operator CBaseEntity*
// calls: CEntityInstance::GetEntityIndex, CBaseEntity::SetTransmit
void __fastcall CRopeKeyframe::SetTransmit(CRopeKeyframe *const this, CCheckTransmitInfo *pInfo, bool bAlways)
{
  CEntityIndex v6; // eax
  unsigned __int16 v7; // dx
  int v8; // esi
  uint32 v9; // eax
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rcx
  CEntitySystem *v12; // rsi
  unsigned __int16 v13; // dx
  int v14; // edi
  uint32 v15; // eax
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx

  v6.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  if ( ((1 << SLOBYTE(v6.m_Data)) & pInfo->m_pTransmitEdict->m_Ints[v6.m_Data >> 5]) == 0 )
  {
    CBaseEntity::SetTransmit(this, pInfo, bAlways);
    if ( this->m_hStartPoint.m_Value.m_Index == -1 )
    {
      v7 = 0x7FFF;
      v8 = 0x7FFF;
    }
    else
    {
      v7 = this->m_hStartPoint.m_Value.m_Index & 0x7FFF;
      v8 = v7;
    }
    v9 = (this->m_hStartPoint.m_Value.m_Index >> 15 << 15) | v7 & 0x7FFF;
    if ( v9 + 2 > 1
      && (v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v8 >> 9]) != 0
      && (v11 = &v10[v8 & 0x1FF]) != 0
      && v9 == v11->m_EHandle.m_Index )
    {
      v12 = g_pEntitySystem;
      if ( v11->m_pInstance != 0 )
      {
        (*(v11->m_pInstance->_vptr_IHandleEntity + 66))(v11->m_pInstance, pInfo, bAlways);
        v12 = g_pEntitySystem;
      }
    }
    else
    {
      v12 = g_pEntitySystem;
    }
    if ( this->m_hEndPoint.m_Value.m_Index == -1 )
    {
      v13 = 0x7FFF;
      v14 = 0x7FFF;
    }
    else
    {
      v13 = this->m_hEndPoint.m_Value.m_Index & 0x7FFF;
      v14 = v13;
    }
    v15 = (this->m_hEndPoint.m_Value.m_Index >> 15 << 15) | v13 & 0x7FFF;
    if ( v15 + 2 > 1 )
    {
      v16 = v12->m_EntityList.m_pIdentityChunks[v14 >> 9];
      if ( v16 != 0 )
      {
        v17 = &v16[v14 & 0x1FF];
        if ( v17 != 0 && v15 == v17->m_EHandle.m_Index && v17->m_pInstance != 0 )
          (*(v17->m_pInstance->_vptr_IHandleEntity + 66))(v17->m_pInstance, pInfo, bAlways);
      }
    }
  }
}


// CRopeKeyframe::GetEndPointPos2  (line 433, @0x0000000002386f40, libserver.so)  // inlines: operator=
// calls: CBaseAnimating::GetAttachment, CBaseEntity::GetAbsOrigin
// callers: CRopeKeyframe::GetEndPointPos
bool __fastcall CRopeKeyframe::GetEndPointPos2(
        CRopeKeyframe *const this,
        CBaseEntity *pAttached,
        int iAttachment,
        Vector *const vPos)
{
  AttachmentHandle_t v5; // bl
  const CBaseAnimating *v6; // rax

  if ( pAttached == 0 )
    return 0;
  v5 = iAttachment;
  if ( iAttachment <= 0 )
  {
    *vPos = *CBaseEntity::GetAbsOrigin(pAttached);
    return 1;
  }
  else
  {
    v6 = (*(pAttached->_vptr_IHandleEntity + 43))(pAttached);
    return v6 != 0 && CBaseAnimating::GetAttachment(v6, v5, vPos);
  }
}


// CRopeKeyframe::GetEndPointPos  (line 460, @0x0000000002386fd0, libserver.so)  // inlines: CEntityHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, operator CBaseEntity*
// calls: CRopeKeyframe::GetEndPointPos2
// callers: CRopeKeyframe::GetEndPointPos, CRopeKeyframe::UpdateBBox, CRopeKeyframe::Init
bool __fastcall CRopeKeyframe::GetEndPointPos(CRopeKeyframe *const this, Vector *iPt, Vector *const v)
{
  unsigned __int16 v4; // r8
  int v5; // r10d
  uint32 v6; // eax
  CBaseEntity *m_pInstance; // rsi
  CEntityIdentity *v8; // r8
  CEntityIdentity *v9; // r8

  if ( this->m_hStartPoint.m_Value.m_Index == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = this->m_hStartPoint.m_Value.m_Index & 0x7FFF;
    v5 = v4;
  }
  v6 = (this->m_hStartPoint.m_Value.m_Index >> 15 << 15) | v4 & 0x7FFF;
  m_pInstance = 0;
  if ( v6 + 2 > 1 )
  {
    v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
    if ( v8 != 0 )
    {
      v9 = &v8[v5 & 0x1FF];
      if ( v9 != 0 && v6 == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  return CRopeKeyframe::GetEndPointPos2(this, m_pInstance, this->m_iStartAttachment.m_Value, iPt);
}


// CRopeKeyframe::GetEndPointPos  (line 460, @0x00000000023870a0, libserver.so)  // inlines: CEntityHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, operator CBaseEntity*
// calls: CRopeKeyframe::GetEndPointPos2, CRopeKeyframe::GetEndPointPos
// callers: CRopeKeyframe::UpdateBBox
bool __fastcall CRopeKeyframe::GetEndPointPos(CRopeKeyframe *const this, int iPt, Vector *const v)
{
  int m_Value; // edx
  uint32 v5; // r9d
  unsigned __int16 v6; // r8
  int v7; // r10d
  int v8; // eax
  CBaseEntity *m_pInstance; // rsi
  CEntityIdentity *v10; // r8
  CEntityIdentity *v11; // r8
  __int64 v13; // [rsp-8h] [rbp-8h]

  if ( iPt == 0 )
    return CRopeKeyframe::GetEndPointPos(this, v, v);
  m_Value = this->m_iEndAttachment.m_Value;
  v5 = this->m_hEndPoint.m_Value.m_Index >> 15;
  if ( this->m_hEndPoint.m_Value.m_Index == -1 )
  {
    v6 = 0x7FFF;
    v7 = 0x7FFF;
  }
  else
  {
    v6 = this->m_hEndPoint.m_Value.m_Index & 0x7FFF;
    v7 = v6;
  }
  *(&v13 - 8) = v6 | *(&v13 - 2) & 0x8000;
  v8 = (v5 << 15) | *(&v13 - 2) & 0x7FFF;
  *(&v13 - 4) = v8;
  m_pInstance = 0;
  if ( (v8 + 2) > 1 )
  {
    v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
    if ( v10 != 0 )
    {
      v11 = &v10[v7 & 0x1FF];
      if ( v11 != 0 && v8 == v11->m_EHandle.m_Index )
        m_pInstance = v11->m_pInstance;
    }
  }
  return CRopeKeyframe::GetEndPointPos2(this, m_pInstance, m_Value, v);
}


// CRopeKeyframe::UpdateBBox  (line 469, @0x0000000002387180, libserver.so)  // inlines: GetEndPointPos, VectorMax, VectorMin, VectorSubtract, WorldAlignMaxs, WorldAlignMins, fpmax, fpmin, operator!=, operator-, operator-=, operator=
// calls: CRopeKeyframe::GetEndPointPos, UTIL_SetSize, CBaseEntity::GetAbsOrigin
// callers: CRopeKeyframe::Init, CRopeKeyframe::NotifyPositionChanged
void __fastcall CRopeKeyframe::UpdateBBox(CRopeKeyframe *const this, bool bForceRelink)
{
  Vector *rdx0; // rdx
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  CCollisionProperty *m_pCollision; // rdi
  const Vector *v7; // rax
  CCollisionProperty *v8; // rdi
  const Vector *v9; // rax
  const Vector *AbsOrigin; // rax
  const Vector *v11; // rax
  const Vector *v12; // rax
  vec_t v13; // xmm1_4
  vec_t v14; // xmm0_4
  Vector v1; // [rsp+0h] [rbp-50h] BYREF
  Vector v2; // [rsp+10h] [rbp-40h] BYREF
  Vector vMin; // [rsp+20h] [rbp-30h] BYREF
  Vector vMax; // [rsp+30h] [rbp-20h] BYREF

  if ( CRopeKeyframe::GetEndPointPos(this, &v1, rdx0) )
  {
    if ( CRopeKeyframe::GetEndPointPos(this, 1, &v2) )
    {
      vMin.x = fminf(v1.x, v2.x);
      vMax.x = fmaxf(v1.x, v2.x);
      vMax.y = fmaxf(v1.y, v2.y);
      vMin.y = fminf(v1.y, v2.y);
      vMax.z = fmaxf(v1.z, v2.z);
      vMin.z = fminf(v1.z, v2.z);
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      vMin.x = vMin.x - AbsOrigin->x;
      vMin.y = vMin.y - AbsOrigin->y;
      vMin.z = vMin.z - AbsOrigin->z;
      v11 = CBaseEntity::GetAbsOrigin(this);
      vMax.x = vMax.x - v11->x;
      vMax.y = vMax.y - v11->y;
      vMax.z = vMax.z - v11->z;
    }
    else
    {
      v12 = CBaseEntity::GetAbsOrigin(this);
      v13 = v1.y - v12->y;
      v14 = v1.z - v12->z;
      vMax.x = v1.x - v12->x;
      vMax.y = v13;
      vMax.z = v14;
      vMin = vMax;
    }
  }
  else
  {
    y = vec3_origin.y;
    z = vec3_origin.z;
    vMax.x = vec3_origin.x;
    vMax.y = y;
    vMax.z = z;
    vMin.x = vec3_origin.x;
    vMin.y = y;
    vMin.z = z;
  }
  m_pCollision = this->m_pCollision;
  if ( m_pCollision != 0 )
    v7 = (*(m_pCollision->_vptr_ICollideable + 1))(m_pCollision);
  else
    v7 = &vec3_origin;
  if ( vMin.x != v7->x
    || vMin.y != v7->y
    || vMin.z != v7->z
    || ((v8 = this->m_pCollision) == 0 ? (v9 = &vec3_origin) : (v9 = (*(v8->_vptr_ICollideable + 2))(v8, vMin.z)),
        vMax.x != v9->x || vMax.y != v9->y || vMax.z != v9->z) )
  {
    UTIL_SetSize(this, &vMin, &vMax);
  }
}


// CRopeKeyframe::PropagateForce  (line 505, @0x00000000023a5400, libserver.so)  // inlines: CEntityEventPosterBase, CEntityHandle, CEntityMessagePropagateForce_t, CNetMessagePB, CSplitScreenSlot, CUserMessagePB, FindGameEvent<CEntityMessagePropagateForce_t>, FindOrCreateGameEvent<CEntityMessagePropagateForce_t>, GetEHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, PostEntityEvent<CEntityMessagePropagateForce_t>, Set, mutable_impulse, operator CBaseEntity*, operator=, set_has_impulse, set_has_x, set_has_z, set_x, set_y, set_z, ~CEntityEventPosterBase, ~CEntityMessagePropagateForce_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CEntityMessagePropagateForce::CEntityMessagePropagateForce, CEntityMessagePropagateForce::~CEntityMessagePropagateForce, operator new, CMsgVector::CMsgVector, CEntityEventPosterBase<CEntityMessagePropagateForce_t, 255>::~CEntityEventPosterBase, _Unwind_Resume, __dynamic_cast, operator delete
// callers: CRopeKeyframe::InputSetForce
// globals: IGameEventSystem::FindOrCreateGameEvent<CEntityMessagePropagateForce_t>(bool)::s_hEvent, `typeinfo for'CRopeKeyframe
void __fastcall CRopeKeyframe::PropagateForce(
        CRopeKeyframe *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        CRopeKeyframe *pFirstLink,
        float x,
        float y,
        float z)
{
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx
  CMsgVector *v11; // r13
  int v12; // eax
  __int64 v13; // rdx
  IGameEventSystem *v14; // r13
  void (__fastcall *v15)(IGameEventSystem *, int *, __int64, _QWORD *, __int64, _QWORD); // r14
  unsigned __int16 v16; // dx
  int v17; // esi
  uint32 v18; // eax
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CRopeKeyframe *v21; // rax
  __int64 v25; // [rsp+18h] [rbp-78h]
  unsigned int v26; // [rsp+20h] [rbp-70h]
  int v30; // [rsp+30h] [rbp-60h] BYREF
  int v31; // [rsp+34h] [rbp-5Ch]
  _QWORD v32[2]; // [rsp+38h] [rbp-58h] BYREF
  int v33; // [rsp+48h] [rbp-48h]
  CMsgVector *v34; // [rsp+50h] [rbp-40h]
  int v35; // [rsp+58h] [rbp-38h]

  v30 = -1;
  v31 = 1;
  CEntityMessagePropagateForce::CEntityMessagePropagateForce(v32);
  v32[0] = off_40A4F50;
  v35 = 0;
  if ( this == 0 || (m_pEntity = this->m_pEntity) == 0 )
  {
    v11 = v34;
    v30 = -1;
    v33 |= 1u;
    if ( v34 != 0 )
      goto LABEL_6;
    goto LABEL_16;
  }
  v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  if ( m_pEntity->m_EHandle.m_Index == -1 )
    v10 = 0x7FFF;
  else
    v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  v11 = v34;
  v33 |= 1u;
  v30 = (v9 << 15) | v10 & 0x7FFF;
  if ( v34 == 0 )
  {
LABEL_16:
    v11 = operator new(0x28u);
    CMsgVector::CMsgVector(v11);
    v34 = v11;
  }
LABEL_6:
  v12 = *(v11 + 4);
  *(v11 + 6) = x;
  *(v11 + 7) = y;
  v13 = IGameEventSystem::FindOrCreateGameEvent<CEntityMessagePropagateForce_t>(bool)::s_hEvent;
  *(v11 + 4) = v12 | 7;
  *(v11 + 8) = z;
  v25 = v13;
  v14 = g_pGameEventSystem;
  v26 = v31;
  v15 = *(*g_pGameEventSystem + 136LL);
  (*(*g_pNetworkMessages + 96LL))(g_pNetworkMessages, v13);
  v15(v14, &v30, v25, v32, 32, v26);
  v32[0] = &off_40A4DD0;
  CEntityMessagePropagateForce::~CEntityMessagePropagateForce(v32);
  if ( this->m_hEndPoint.m_Value.m_Index == -1 )
  {
    v16 = 0x7FFF;
    v17 = 0x7FFF;
  }
  else
  {
    v16 = this->m_hEndPoint.m_Value.m_Index & 0x7FFF;
    v17 = v16;
  }
  v18 = (this->m_hEndPoint.m_Value.m_Index >> 15 << 15) | v16 & 0x7FFF;
  v30 = v18;
  if ( v18 + 2 > 1 )
  {
    v19 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v17 >> 9];
    if ( v19 != 0 )
    {
      v20 = &v19[v17 & 0x1FF];
      if ( v20 != 0 && v18 == v20->m_EHandle.m_Index && v20->m_pInstance != 0 )
      {
        v21 = __dynamic_cast(v20->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CRopeKeyframe, 0);
        if ( v21 != pFirstLink && v21 != 0 )
          CRopeKeyframe::PropagateForce(v21, pActivator, pCaller, pFirstLink, x, y, z);
      }
    }
  }
}


// CRopeKeyframe::InputSetForce  (line 527, @0x00000000023a56f0, libserver.so)  // inlines: AssignTo, VariantFieldTypeName, Vector3D, operator=
// calls: CRopeKeyframe::PropagateForce, V_sscanf, Warning
// strings: "No free conversion of %s variant to Vector right now\n", "js_raw_args", "js_array", "js_object", "js_value", "hscript_lightbinding" (20 total)
// globals: jpt_23A57DD
void __fastcall CRopeKeyframe::InputSetForce(CRopeKeyframe *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  const char *m_pszString; // rax
  float x; // xmm0_4
  float y; // xmm1_4
  float z; // xmm2_4
  const char *v9; // rsi
  Vector vecForce; // [rsp+0h] [rbp-20h] BYREF

  m_type = inputdata->value.m_type;
  if ( m_type == 3 )
    goto LABEL_5;
  if ( m_type <= 3 )
  {
    if ( m_type != 0 )
      goto LABEL_14;
LABEL_9:
    m_pszString = &vec3_origin;
    goto LABEL_6;
  }
  if ( m_type == 30 )
  {
    if ( V_sscanf(inputdata->value.m_uint64, "%g %g %g", &vecForce, &vecForce.y, &vecForce.z) == 3 )
    {
LABEL_12:
      z = vecForce.z;
      y = vecForce.y;
      x = vecForce.x;
      goto LABEL_7;
    }
    goto LABEL_9;
  }
  if ( m_type != 39 )
  {
LABEL_14:
    switch ( m_type )
    {
      case 1:
        v9 = "float";
        break;
      case 4:
        v9 = "quaternion";
        break;
      case 5:
        v9 = "integer";
        break;
      case 6:
        v9 = "boolean";
        break;
      case 8:
        v9 = "character";
        break;
      case 9:
        v9 = "color";
        break;
      case 13:
        v9 = "ehandle";
        break;
      case 25:
        v9 = "vector2d";
        break;
      case 26:
        v9 = "int64";
        break;
      case 27:
        v9 = "vector4d";
        break;
      case 28:
        v9 = "resourcehandle";
        break;
      case 31:
        v9 = "hscript";
        break;
      case 32:
        v9 = "variant";
        break;
      case 33:
        v9 = "uint64";
        break;
      case 34:
        v9 = "float64";
        break;
      case 37:
        v9 = "unsigned";
        break;
      case 38:
        v9 = "utlstringtoken";
        break;
      case 48:
        v9 = "hscript_lightbinding";
        break;
      case 49:
        v9 = "js_value";
        break;
      case 50:
        v9 = "js_object";
        break;
      case 51:
        v9 = "js_array";
        break;
      case 52:
        v9 = "js_raw_args";
        break;
      default:
        v9 = "unknown_variant_type";
        break;
    }
    Warning("No free conversion of %s variant to Vector right now\n", v9);
    goto LABEL_12;
  }
LABEL_5:
  m_pszString = inputdata->value.m_pszString;
LABEL_6:
  x = *m_pszString;
  vecForce.x = *m_pszString;
  y = *(m_pszString + 1);
  vecForce.y = y;
  z = *(m_pszString + 2);
  vecForce.z = z;
LABEL_7:
  CRopeKeyframe::PropagateForce(this, inputdata->pActivator, inputdata->pCaller, this, x, y, z);
}


// CRopeKeyframe::InputBreak  (line 538, @0x0000000002387b20, libserver.so)
// calls: CRopeKeyframe::Break
void __fastcall CRopeKeyframe::InputBreak(CRopeKeyframe *const this, inputdata_t *const inputdata)
{
  CRopeKeyframe::Break(this);
}


// CRopeKeyframe::Break  (line 548, @0x0000000002387a00, libserver.so)  // inlines: CUtlSymbolLarge, GetEntityName, NextEntByClass<CRopeKeyframe>, String, ToCStr
// calls: CRopeKeyframe::DetachPoint, CGameEntitySystem::NextEnt, __dynamic_cast, V_stricmp_fast
// callers: CRopeKeyframe::InputBreak, CRopeKeyframe::OnTakeDamage
// globals: `typeinfo for'CRopeKeyframe
bool __fastcall CRopeKeyframe::Break(CRopeKeyframe *const this)
{
  CGameEntitySystem *v2; // rbx
  CBaseEntity *Ent; // r15
  CRopeKeyframe *v4; // r14
  const char *m_pAsString; // rsi
  const char *v6; // rdi
  CBaseEntity *v7; // rsi
  CGameEntitySystem *v8; // rbx
  CBaseEntity *v9; // rax
  CBaseEntity *v10; // r15

  CRopeKeyframe::DetachPoint(this, 0);
  v2 = g_pGameEntitySystem;
  Ent = CGameEntitySystem::NextEnt(g_pGameEntitySystem, 0);
  if ( Ent != 0 )
  {
    while ( 1 )
    {
      v4 = __dynamic_cast(Ent, &`typeinfo for'CBaseEntity, &`typeinfo for'CRopeKeyframe, 0);
      if ( v4 != 0 )
        break;
      Ent = CGameEntitySystem::NextEnt(v2, Ent);
      if ( Ent == 0 )
        return 1;
    }
LABEL_5:
    m_pAsString = this->m_pEntity->m_name.u.m_pAsString;
    v6 = "";
    if ( m_pAsString == 0 )
      m_pAsString = "";
    if ( v4->m_iNextLinkName.u.m_Id != 0 )
      v6 = v4->m_iNextLinkName.u.m_pAsString;
    if ( V_stricmp_fast(v6, m_pAsString) == 0 )
      CRopeKeyframe::DetachPoint(v4, 1);
    v7 = v4;
    v8 = g_pGameEntitySystem;
    while ( 1 )
    {
      v9 = CGameEntitySystem::NextEnt(v8, v7);
      v10 = v9;
      if ( v9 == 0 )
        break;
      v4 = __dynamic_cast(v9, &`typeinfo for'CBaseEntity, &`typeinfo for'CRopeKeyframe, 0);
      if ( v4 != 0 )
        goto LABEL_5;
      v7 = v10;
    }
  }
  return 1;
}


// CRopeKeyframe::NotifyPositionChanged  (line 572, @0x00000000023876e0, libserver.so)  // inlines: CEntityHandle, FastSqrt, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, Length, LookupEntity, NetworkStateChanged, Set, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator++, operator+=<int>, operator-, operator=<int>
// calls: CRopeKeyframe::UpdateBBox, CBaseEntity::GetAbsOrigin
void __fastcall CRopeKeyframe::NotifyPositionChanged(CRopeKeyframe *const this, CBaseEntity *pEntity)
{
  unsigned __int8 v3; // r12
  unsigned __int16 v4; // dx
  int v5; // edi
  uint32 v6; // eax
  CEntityIdentity *v7; // rdx
  bool v8; // r12
  const CBaseEntity *m_pInstance; // r14
  CEntityIdentity *v10; // rdx
  unsigned __int16 v11; // dx
  int v12; // edi
  uint32 v13; // eax
  CEntityIdentity *v14; // rdx
  bool v15; // r13
  __int64 v16; // rdi
  bool v17; // zf
  CEntityIdentity *v18; // rdx
  const CBaseEntity *v19; // rdi
  const Vector *AbsOrigin; // r15
  const Vector *v21; // rax
  int v22; // r14d
  __int16 m_Value; // ax

  v3 = this->m_nChangeCount.m_Value + 1;
  (*(this->_vptr_IHandleEntity + 22))(this, 1209, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_nChangeCount.m_Value = v3;
  CRopeKeyframe::UpdateBBox(this, 0);
  if ( this->m_hStartPoint.m_Value.m_Index == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = this->m_hStartPoint.m_Value.m_Index & 0x7FFF;
    v5 = v4;
  }
  v6 = (this->m_hStartPoint.m_Value.m_Index >> 15 << 15) | v4 & 0x7FFF;
  if ( v6 + 2 > 1 && (v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9]) != 0 )
  {
    v8 = 0;
    m_pInstance = 0;
    v10 = &v7[v5 & 0x1FF];
    if ( v10 != 0 && v6 == v10->m_EHandle.m_Index )
    {
      m_pInstance = v10->m_pInstance;
      v8 = v10->m_pInstance != 0;
    }
  }
  else
  {
    v8 = 0;
    m_pInstance = 0;
  }
  if ( this->m_hEndPoint.m_Value.m_Index == -1 )
  {
    v11 = 0x7FFF;
    v12 = 0x7FFF;
  }
  else
  {
    v11 = this->m_hEndPoint.m_Value.m_Index & 0x7FFF;
    v12 = v11;
  }
  v13 = (this->m_hEndPoint.m_Value.m_Index >> 15 << 15) | v11 & 0x7FFF;
  if ( v13 + 2 > 1 && (v14 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v12 >> 9]) != 0 )
  {
    v15 = 0;
    v16 = v12 & 0x1FF;
    v17 = &v14[v16] == 0;
    v18 = &v14[v16];
    v19 = 0;
    if ( !v17 && v13 == v18->m_EHandle.m_Index )
    {
      v19 = v18->m_pInstance;
      v15 = v18->m_pInstance != 0;
    }
  }
  else
  {
    v15 = 0;
    v19 = 0;
  }
  if ( (this->m_RopeFlags.m_Value & 1) != 0 && m_pInstance != 0 && v19 != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(v19);
    v21 = CBaseEntity::GetAbsOrigin(m_pInstance);
    v22 = this->m_Slack.m_Value
        + fsqrt(
            (((v21->x - AbsOrigin->x) * (v21->x - AbsOrigin->x)) + ((v21->y - AbsOrigin->y) * (v21->y - AbsOrigin->y)))
          + ((v21->z - AbsOrigin->z) * (v21->z - AbsOrigin->z)));
    m_Value = this->m_RopeLength.m_Value;
    if ( v22 != m_Value && m_Value != v22 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1210, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_RopeLength.m_Value = v22;
    }
  }
  if ( v8 != this->m_bStartPointValid )
    this->m_bStartPointValid = v8;
  if ( v15 != this->m_bEndPointValid )
    this->m_bEndPointValid = v15;
}


// CRopeKeyframe::OnTakeDamage  (line 604, @0x0000000002387b30, libserver.so)
// calls: CRopeKeyframe::Break
int __fastcall CRopeKeyframe::OnTakeDamage(CRopeKeyframe *const this, const CTakeDamageInfo *const info)
{
  if ( (this->m_RopeFlags.m_Value & 0x10) != 0 )
    CRopeKeyframe::Break(this);
  return 0;
}


// CRopeKeyframe::Precache  (line 615, @0x00000000023a8520, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, Get<int>, GetValue, GetValue<int>, GetValueString, Min<long long unsigned int>, Min<unsigned int>, Precache, String, TempString, ToCStr, V_SetExtension<long unsigned int>, atoi, operator[]
// calls: CEntityInstance::Precache, PrecacheMaterial, CEntityKeyValues::HasValue, V_stristr_fast(char const*,char const*), V_GetFileExtension, V_stricmp_fast, V_sprintf_safe<512ul>, VariantFieldTypeName, Warning, strtol, _V_SetExtension, __stack_chk_fail
// strings: "materials/cable/rope_shadowdepth.vmat", "materials/cable/cable.vmat", "vmt", "%s.vmat", "No conversion from %s to int now\n", "materials/cable/rope.vmat" (8 total)
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_23A8772
void __fastcall CRopeKeyframe::Precache(CRopeKeyframe *const this, const CEntityPrecacheContext *pContext)
{
  const char *m_pAsString; // r12
  bool HasValue; // al
  const CEntityKeyValues *m_pKeyValues; // rdi
  const CEntityKeyValues *v7; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::lambda::lambda v8; // edi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v9; // si
  __int64 v10; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v11; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v12; // rdx
  CEntityVariant *v13; // rax
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v18; // rdx
  CEntityVariant *p_m_value; // rcx
  __int64 FileExtension; // rax
  const char *v21; // rdx
  int16 m_type; // ax
  const char *v23; // rax
  uint64 m_uint64; // rax
  const char *v25; // rdx
  char str[512]; // [rsp+0h] [rbp-230h] BYREF
  unsigned __int64 v27; // [rsp+208h] [rbp-28h]

  m_pAsString = "";
  v27 = __readfsqword(0x28u);
  CEntityInstance::Precache(this, pContext);
  PrecacheMaterial("materials/cable/rope_shadowdepth.vmat", pContext);
  PrecacheMaterial("materials/cable/cable.vmat", pContext);
  if ( this->m_strRopeMaterialModel.u.m_Id != 0 )
    m_pAsString = this->m_strRopeMaterialModel.u.m_pAsString;
  HasValue = CEntityKeyValues::HasValue(pContext->m_pKeyValues, 1578785047);
  m_pKeyValues = pContext->m_pKeyValues;
  if ( HasValue )
  {
    m_nCount = m_pKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount > 0 )
    {
      m_nAllocated = m_pKeyValues->m_keyHashes.m_nAllocated;
      for ( i = 0; m_nCount > i; ++i )
      {
        if ( m_nAllocated != 0 )
        {
          m_pElements = (&m_pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( m_nAllocated > 9 )
            m_pElements = m_pKeyValues->m_keyHashes.m_pElements;
          if ( m_pElements[i] == 1578785047 )
          {
LABEL_26:
            if ( m_pKeyValues->m_keyValues.m_nAllocated != 0 )
              v18 = m_pKeyValues->m_keyValues.m_pElements;
            else
              v18 = 0;
            p_m_value = &v18[i].m_value;
            goto LABEL_34;
          }
        }
        else if ( *(4 * i) == 1578785047 )
        {
          goto LABEL_26;
        }
      }
    }
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
LABEL_34:
    m_type = p_m_value->m_type;
    switch ( m_type )
    {
      case 0:
        goto LABEL_36;
      case 1:
        LODWORD(m_uint64) = p_m_value->m_float;
        goto LABEL_39;
      case 5:
        LODWORD(m_uint64) = p_m_value->m_int;
        goto LABEL_39;
      case 6:
        LODWORD(m_uint64) = p_m_value->m_char;
        goto LABEL_39;
      case 26:
        LODWORD(m_uint64) = 0x7FFFFFFF;
        if ( p_m_value->m_int64 <= 0x7FFFFFFF )
        {
          LODWORD(m_uint64) = 0x80000000;
          if ( p_m_value->m_uint64 >= 0xFFFFFFFF80000000LL )
            m_uint64 = p_m_value->m_uint64;
        }
        goto LABEL_39;
      case 30:
        LODWORD(m_uint64) = strtol(p_m_value->m_pszString, 0, 10);
        m_pKeyValues = pContext->m_pKeyValues;
        goto LABEL_39;
      case 33:
        LODWORD(m_uint64) = 0x7FFFFFFF;
        if ( p_m_value->m_uint64 <= 0x7FFFFFFE )
          LODWORD(m_uint64) = p_m_value->m_uint64;
        goto LABEL_39;
      case 34:
        LODWORD(m_uint64) = p_m_value->m_float64;
        goto LABEL_39;
      case 37:
        LODWORD(m_uint64) = 0x7FFFFFFF;
        if ( p_m_value->m_int <= 0x7FFFFFFEu )
          LODWORD(m_uint64) = p_m_value->m_int;
LABEL_39:
        m_pAsString = "materials/cable/cable.vmat";
        if ( m_uint64 != 0 )
        {
          m_pAsString = "materials/cable/rope.vmat";
          if ( m_uint64 != 1 )
            m_pAsString = "materials/cable/chain.vmat";
        }
        break;
      default:
        v23 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to int now\n", v23);
        m_pKeyValues = pContext->m_pKeyValues;
LABEL_36:
        m_pAsString = "materials/cable/cable.vmat";
        break;
    }
  }
  if ( !CEntityKeyValues::HasValue(m_pKeyValues, 1187249943) )
    goto LABEL_5;
  v7 = pContext->m_pKeyValues;
  v8 = pContext->m_pKeyValues->m_keyHashes.0;
  if ( *&v8 <= 0 )
  {
LABEL_29:
    v13 = &CEntityKeyValues::sm_EmptyVariant;
    m_pAsString = 0;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_17;
    goto LABEL_30;
  }
  v9 = v7->m_keyHashes.m_nAllocated;
  v10 = 0;
  while ( v9 == 0 )
  {
    if ( *(4 * v10) == 1187249943 )
      goto LABEL_14;
LABEL_11:
    if ( *&v8 <= ++v10 )
      goto LABEL_29;
  }
  v11 = (&v7->m_keyHashes.m_nAllocAllocated + 1);
  if ( v9 > 9 )
    v11 = v7->m_keyHashes.m_pElements;
  if ( v11[v10] != 1187249943 )
    goto LABEL_11;
LABEL_14:
  if ( v7->m_keyValues.m_nAllocated != 0 )
    v12 = v7->m_keyValues.m_pElements;
  else
    v12 = 0;
  m_pAsString = 0;
  v13 = &v12[v10].m_value;
  if ( v13->m_type == 30 )
LABEL_17:
    m_pAsString = v13->m_uint64;
LABEL_30:
  if ( V_stristr_fast(m_pAsString, ".vmat") == 0 )
  {
    FileExtension = V_GetFileExtension(m_pAsString);
    if ( V_stricmp_fast(FileExtension, "vmt") != 0 )
    {
      v21 = m_pAsString;
      m_pAsString = str;
      V_sprintf_safe<512ul>(str, "%s.vmat", v21);
    }
    else
    {
      Warning("CRopeKeyframe::Precache:: path '%s' is a vmt! Fixing for now.\n", m_pAsString);
      v25 = m_pAsString;
      m_pAsString = str;
      V_sprintf_safe<512ul>(str, "%s", v25);
      _V_SetExtension(str, ".vmat", 512);
    }
  }
LABEL_5:
  PrecacheMaterial(m_pAsString, pContext);
}


// CRopeKeyframe::DetachPoint  (line 670, @0x00000000023879b0, libserver.so)  // inlines: NetworkStateChanged, Set, operator&=<int>
// callers: CRopeKeyframe::Break
void __fastcall CRopeKeyframe::DetachPoint(CRopeKeyframe *const this, int iPoint)
{
  unsigned __int8 m_Value; // dl
  unsigned __int8 v3; // al
  unsigned __int8 v5; // r12

  m_Value = this->m_fLockedPoints.m_Value;
  v3 = __ROL4__(-2, iPoint);
  v5 = m_Value & v3;
  if ( m_Value != (m_Value & v3) )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1212, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fLockedPoints.m_Value = v5;
  }
}


// CRopeKeyframe::EnableCollision  (line 678, @0x0000000002387b50, libserver.so)  // inlines: NetworkStateChanged, Set, operator|=<int>
void __fastcall CRopeKeyframe::EnableCollision(CRopeKeyframe *const this)
{
  unsigned __int16 m_Value; // ax
  unsigned __int16 v3; // r12

  m_Value = this->m_RopeFlags.m_Value;
  if ( (m_Value & 4) == 0 )
  {
    v3 = m_Value | 4;
    if ( m_Value != (m_Value | 4) )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1160, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_RopeFlags.m_Value = v3;
    }
  }
}


// CRopeKeyframe::EnableWind  (line 686, @0x0000000002387ba0, libserver.so)  // inlines: NetworkStateChanged, Set, operator|=<int>
void __fastcall CRopeKeyframe::EnableWind(CRopeKeyframe *const this, bool bEnable)
{
  unsigned __int16 m_Value; // dx
  int v4; // eax
  unsigned __int16 v5; // r12

  m_Value = this->m_RopeFlags.m_Value;
  v4 = bEnable ? 0x20 : 0;
  if ( (m_Value & 0x20) != v4 )
  {
    v5 = m_Value | v4;
    if ( m_Value != (m_Value | v4) )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1160, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_RopeFlags.m_Value = v5;
    }
  }
}


// CRopeKeyframe::Spawn  (line 700, @0x000000000239f770, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, Get<int>, GetValue, GetValue<int>, GetValueString, Min<long long unsigned int>, Min<unsigned int>, NetworkStateChanged, Set, SetMaterial, TempString, atoi, operator&=<int>, operator=, operator=<int>, operator[], operator|=<int>
// calls: CBaseEntity::Spawn, CEntityKeyValues::HasValue, V_stristr_fast(char const*,char const*), AllocPooledString, VariantFieldTypeName, Warning, MakeEntitySystemString, V_snprintf, strtol, __stack_chk_fail
// strings: "No conversion from %s to int now\n", "materials/cable/cable.vmat", "%s.vmat", "materials/cable/chain.vmat", "materials/cable/rope.vmat"
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_239FC72, jpt_239FCDE, jpt_239FD06, jpt_239FD36, jpt_239FD66, jpt_239FD96, jpt_239FDC2
void __fastcall CRopeKeyframe::Spawn(CRopeKeyframe *const this, const CEntityKeyValues *pKeyValues)
{
  int v4; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v5; // cx
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v7; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  const char *v9; // rbx
  CEntityVariant *v10; // rax
  int v11; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v12; // cx
  __int64 jj; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v14; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v15; // rdx
  CEntityVariant *v16; // rcx
  int v17; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v18; // cx
  __int64 ii; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v20; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v21; // rdx
  CEntityVariant *v22; // rcx
  int v23; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v24; // cx
  __int64 n; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v26; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v27; // rdx
  CEntityVariant *v28; // rcx
  int v29; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v30; // cx
  __int64 m; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v32; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v33; // rdx
  CEntityVariant *v34; // rcx
  int v35; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v36; // cx
  __int64 k; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v38; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v39; // rdx
  CEntityVariant *v40; // rcx
  int v41; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v42; // cx
  __int64 j; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v44; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v45; // rdx
  CEntityVariant *v46; // rcx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v51; // rdx
  CEntityVariant *p_m_value; // rcx
  int16 v53; // ax
  const char *v54; // rax
  int16 m_type; // ax
  int16 v56; // ax
  int16 v57; // ax
  int16 v58; // ax
  int16 v59; // ax
  int16 v60; // ax
  const char *v61; // rax
  const char *v62; // rax
  const char *v63; // rax
  unsigned __int8 v64; // r13
  const char *v65; // rax
  unsigned __int16 v66; // r13
  const char *v67; // rax
  unsigned __int16 v68; // r13
  const char *v69; // rax
  unsigned __int16 v70; // r13
  const char *m_uint64; // rax
  unsigned __int16 v72; // r13
  const char *v73; // rax
  const char *v74; // rax
  const char *v75; // rax
  const char *v76; // rax
  const char *v77; // rax
  const char *v78; // rax
  _QWORD v79[2]; // [rsp+0h] [rbp-240h] BYREF
  char str[520]; // [rsp+10h] [rbp-230h] BYREF
  unsigned __int64 v81; // [rsp+218h] [rbp-28h]

  v81 = __readfsqword(0x28u);
  CBaseEntity::Spawn(this, pKeyValues);
  if ( CEntityKeyValues::HasValue(pKeyValues, -2042635851) )
  {
    m_nCount = pKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount > 0 )
    {
      m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
      for ( i = 0; m_nCount > i; ++i )
      {
        if ( m_nAllocated != 0 )
        {
          m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( m_nAllocated > 9 )
            m_pElements = pKeyValues->m_keyHashes.m_pElements;
          if ( m_pElements[i] == -2042635851 )
          {
LABEL_95:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v51 = pKeyValues->m_keyValues.m_pElements;
            else
              v51 = 0;
            p_m_value = &v51[i].m_value;
            goto LABEL_107;
          }
        }
        else if ( *(4 * i) == -2042635851 )
        {
          goto LABEL_95;
        }
      }
    }
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
LABEL_107:
    m_type = p_m_value->m_type;
    switch ( m_type )
    {
      case 0:
        break;
      case 1:
        LODWORD(m_uint64) = p_m_value->m_float;
        goto LABEL_201;
      case 5:
        LODWORD(m_uint64) = p_m_value->m_int;
        goto LABEL_201;
      case 6:
        LODWORD(m_uint64) = p_m_value->m_char;
        goto LABEL_201;
      case 26:
        m_uint64 = p_m_value->m_uint64;
        if ( p_m_value->m_int64 > 0x7FFFFFFF )
          break;
        if ( m_uint64 < 0xFFFFFFFF80000000LL )
          LODWORD(m_uint64) = 0x80000000;
LABEL_201:
        if ( m_uint64 == 1 )
        {
          v72 = this->m_RopeFlags.m_Value | 0x10;
          if ( this->m_RopeFlags.m_Value != v72 )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 1160, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            this->m_RopeFlags.m_Value = v72;
          }
        }
        break;
      case 30:
        LODWORD(m_uint64) = strtol(p_m_value->m_pszString, 0, 10);
        goto LABEL_201;
      case 33:
        m_uint64 = p_m_value->m_uint64;
        if ( p_m_value->m_uint64 <= 0x7FFFFFFE )
          goto LABEL_201;
        break;
      case 34:
        LODWORD(m_uint64) = p_m_value->m_float64;
        goto LABEL_201;
      case 37:
        LODWORD(m_uint64) = p_m_value->m_int;
        if ( p_m_value->m_int <= 0x7FFFFFFEu )
          goto LABEL_201;
        break;
      default:
        v75 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to int now\n", v75);
        break;
    }
  }
  if ( CEntityKeyValues::HasValue(pKeyValues, 1181562482) )
  {
    v41 = pKeyValues->m_keyHashes.m_nCount;
    if ( v41 > 0 )
    {
      v42 = pKeyValues->m_keyHashes.m_nAllocated;
      for ( j = 0; v41 > j; ++j )
      {
        if ( v42 != 0 )
        {
          v44 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v42 > 9 )
            v44 = pKeyValues->m_keyHashes.m_pElements;
          if ( v44[j] == 1181562482 )
          {
LABEL_84:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v45 = pKeyValues->m_keyValues.m_pElements;
            else
              v45 = 0;
            v46 = &v45[j].m_value;
            goto LABEL_109;
          }
        }
        else if ( *(4 * j) == 1181562482 )
        {
          goto LABEL_84;
        }
      }
    }
    v46 = &CEntityKeyValues::sm_EmptyVariant;
LABEL_109:
    v56 = v46->m_type;
    switch ( v56 )
    {
      case 0:
        break;
      case 1:
        LODWORD(v69) = v46->m_float;
        goto LABEL_186;
      case 5:
        LODWORD(v69) = v46->m_int;
        goto LABEL_186;
      case 6:
        LODWORD(v69) = v46->m_char;
        goto LABEL_186;
      case 26:
        v69 = v46->m_uint64;
        if ( v46->m_int64 > 0x7FFFFFFF )
          break;
        if ( v69 < 0xFFFFFFFF80000000LL )
          LODWORD(v69) = 0x80000000;
LABEL_186:
        if ( v69 == 1 )
        {
          v70 = this->m_RopeFlags.m_Value | 4;
          if ( this->m_RopeFlags.m_Value != v70 )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 1160, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            this->m_RopeFlags.m_Value = v70;
          }
        }
        break;
      case 30:
        LODWORD(v69) = strtol(v46->m_pszString, 0, 10);
        goto LABEL_186;
      case 33:
        v69 = v46->m_uint64;
        if ( v46->m_uint64 <= 0x7FFFFFFE )
          goto LABEL_186;
        break;
      case 34:
        LODWORD(v69) = v46->m_float64;
        goto LABEL_186;
      case 37:
        LODWORD(v69) = v46->m_int;
        if ( v46->m_int <= 0x7FFFFFFEu )
          goto LABEL_186;
        break;
      default:
        v74 = VariantFieldTypeName(v56);
        Warning("No conversion from %s to int now\n", v74);
        break;
    }
  }
  if ( CEntityKeyValues::HasValue(pKeyValues, -1541822629) )
  {
    v35 = pKeyValues->m_keyHashes.m_nCount;
    if ( v35 > 0 )
    {
      v36 = pKeyValues->m_keyHashes.m_nAllocated;
      for ( k = 0; v35 > k; ++k )
      {
        if ( v36 != 0 )
        {
          v38 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v36 > 9 )
            v38 = pKeyValues->m_keyHashes.m_pElements;
          if ( v38[k] == -1541822629 )
          {
LABEL_73:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v39 = pKeyValues->m_keyValues.m_pElements;
            else
              v39 = 0;
            v40 = &v39[k].m_value;
            goto LABEL_111;
          }
        }
        else if ( *(4 * k) == -1541822629 )
        {
          goto LABEL_73;
        }
      }
    }
    v40 = &CEntityKeyValues::sm_EmptyVariant;
LABEL_111:
    v57 = v40->m_type;
    switch ( v57 )
    {
      case 0:
        break;
      case 1:
        LODWORD(v67) = v40->m_float;
        goto LABEL_171;
      case 5:
        LODWORD(v67) = v40->m_int;
        goto LABEL_171;
      case 6:
        LODWORD(v67) = v40->m_char;
        goto LABEL_171;
      case 26:
        v67 = v40->m_uint64;
        if ( v40->m_int64 > 0x7FFFFFFF )
          break;
        if ( v67 < 0xFFFFFFFF80000000LL )
          LODWORD(v67) = 0x80000000;
LABEL_171:
        if ( v67 == 1 )
        {
          v68 = this->m_RopeFlags.m_Value | 2;
          if ( this->m_RopeFlags.m_Value != v68 )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 1160, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            this->m_RopeFlags.m_Value = v68;
          }
        }
        break;
      case 30:
        LODWORD(v67) = strtol(v40->m_pszString, 0, 10);
        goto LABEL_171;
      case 33:
        v67 = v40->m_uint64;
        if ( v40->m_uint64 <= 0x7FFFFFFE )
          goto LABEL_171;
        break;
      case 34:
        LODWORD(v67) = v40->m_float64;
        goto LABEL_171;
      case 37:
        LODWORD(v67) = v40->m_int;
        if ( v40->m_int <= 0x7FFFFFFEu )
          goto LABEL_171;
        break;
      default:
        v77 = VariantFieldTypeName(v57);
        Warning("No conversion from %s to int now\n", v77);
        break;
    }
  }
  if ( CEntityKeyValues::HasValue(pKeyValues, 1563619317) )
  {
    v29 = pKeyValues->m_keyHashes.m_nCount;
    if ( v29 > 0 )
    {
      v30 = pKeyValues->m_keyHashes.m_nAllocated;
      for ( m = 0; v29 > m; ++m )
      {
        if ( v30 != 0 )
        {
          v32 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v30 > 9 )
            v32 = pKeyValues->m_keyHashes.m_pElements;
          if ( v32[m] == 1563619317 )
          {
LABEL_62:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v33 = pKeyValues->m_keyValues.m_pElements;
            else
              v33 = 0;
            v34 = &v33[m].m_value;
            goto LABEL_113;
          }
        }
        else if ( *(4 * m) == 1563619317 )
        {
          goto LABEL_62;
        }
      }
    }
    v34 = &CEntityKeyValues::sm_EmptyVariant;
LABEL_113:
    v58 = v34->m_type;
    switch ( v58 )
    {
      case 0:
        break;
      case 1:
        LODWORD(v65) = v34->m_float;
        goto LABEL_156;
      case 5:
        LODWORD(v65) = v34->m_int;
        goto LABEL_156;
      case 6:
        LODWORD(v65) = v34->m_char;
        goto LABEL_156;
      case 26:
        v65 = v34->m_uint64;
        if ( v34->m_int64 > 0x7FFFFFFF )
          break;
        if ( v65 < 0xFFFFFFFF80000000LL )
          LODWORD(v65) = 0x80000000;
LABEL_156:
        if ( v65 == 1 )
        {
          v66 = this->m_RopeFlags.m_Value | 0x20;
          if ( this->m_RopeFlags.m_Value != v66 )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 1160, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            this->m_RopeFlags.m_Value = v66;
          }
        }
        break;
      case 30:
        LODWORD(v65) = strtol(v34->m_pszString, 0, 10);
        goto LABEL_156;
      case 33:
        v65 = v34->m_uint64;
        if ( v34->m_uint64 <= 0x7FFFFFFE )
          goto LABEL_156;
        break;
      case 34:
        LODWORD(v65) = v34->m_float64;
        goto LABEL_156;
      case 37:
        LODWORD(v65) = v34->m_int;
        if ( v34->m_int <= 0x7FFFFFFEu )
          goto LABEL_156;
        break;
      default:
        v76 = VariantFieldTypeName(v58);
        Warning("No conversion from %s to int now\n", v76);
        break;
    }
  }
  if ( CEntityKeyValues::HasValue(pKeyValues, -1071136054) )
  {
    v23 = pKeyValues->m_keyHashes.m_nCount;
    if ( v23 > 0 )
    {
      v24 = pKeyValues->m_keyHashes.m_nAllocated;
      for ( n = 0; v23 > n; ++n )
      {
        if ( v24 != 0 )
        {
          v26 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v24 > 9 )
            v26 = pKeyValues->m_keyHashes.m_pElements;
          if ( v26[n] == -1071136054 )
          {
LABEL_51:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v27 = pKeyValues->m_keyValues.m_pElements;
            else
              v27 = 0;
            v28 = &v27[n].m_value;
            goto LABEL_115;
          }
        }
        else if ( *(4 * n) == -1071136054 )
        {
          goto LABEL_51;
        }
      }
    }
    v28 = &CEntityKeyValues::sm_EmptyVariant;
LABEL_115:
    v59 = v28->m_type;
    switch ( v59 )
    {
      case 0:
        break;
      case 1:
        LODWORD(v63) = v28->m_float;
        goto LABEL_141;
      case 5:
        LODWORD(v63) = v28->m_int;
        goto LABEL_141;
      case 6:
        LODWORD(v63) = v28->m_char;
        goto LABEL_141;
      case 26:
        v63 = v28->m_uint64;
        if ( v28->m_int64 > 0x7FFFFFFF )
          break;
        if ( v63 < 0xFFFFFFFF80000000LL )
          LODWORD(v63) = 0x80000000;
LABEL_141:
        if ( v63 == 1 )
        {
          v64 = this->m_fLockedPoints.m_Value & 0xFD;
          if ( this->m_fLockedPoints.m_Value != v64 )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 1212, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            this->m_fLockedPoints.m_Value = v64;
          }
        }
        break;
      case 30:
        LODWORD(v63) = strtol(v28->m_pszString, 0, 10);
        goto LABEL_141;
      case 33:
        v63 = v28->m_uint64;
        if ( v28->m_uint64 <= 0x7FFFFFFE )
          goto LABEL_141;
        break;
      case 34:
        LODWORD(v63) = v28->m_float64;
        goto LABEL_141;
      case 37:
        LODWORD(v63) = v28->m_int;
        if ( v28->m_int <= 0x7FFFFFFEu )
          goto LABEL_141;
        break;
      default:
        v78 = VariantFieldTypeName(v59);
        Warning("No conversion from %s to int now\n", v78);
        break;
    }
  }
  if ( CEntityKeyValues::HasValue(pKeyValues, 485585308) )
  {
    v17 = pKeyValues->m_keyHashes.m_nCount;
    if ( v17 > 0 )
    {
      v18 = pKeyValues->m_keyHashes.m_nAllocated;
      for ( ii = 0; v17 > ii; ++ii )
      {
        if ( v18 != 0 )
        {
          v20 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v18 > 9 )
            v20 = pKeyValues->m_keyHashes.m_pElements;
          if ( v20[ii] == 485585308 )
          {
LABEL_40:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v21 = pKeyValues->m_keyValues.m_pElements;
            else
              v21 = 0;
            v22 = &v21[ii].m_value;
            goto LABEL_117;
          }
        }
        else if ( *(4 * ii) == 485585308 )
        {
          goto LABEL_40;
        }
      }
    }
    v22 = &CEntityKeyValues::sm_EmptyVariant;
LABEL_117:
    v60 = v22->m_type;
    switch ( v60 )
    {
      case 0:
        goto LABEL_119;
      case 1:
        LODWORD(v62) = v22->m_float;
        goto LABEL_126;
      case 5:
        LODWORD(v62) = v22->m_int;
        goto LABEL_126;
      case 6:
        LODWORD(v62) = v22->m_char;
        goto LABEL_126;
      case 26:
        v62 = v22->m_uint64;
        if ( v22->m_int64 > 0x7FFFFFFF )
          goto LABEL_123;
        if ( v62 < 0xFFFFFFFF80000000LL )
          LODWORD(v62) = 0x80000000;
LABEL_126:
        if ( v62 != 0 )
        {
          if ( v62 == 1 )
          {
            if ( this->m_nSegments.m_Value != 4 )
            {
              (*(this->_vptr_IHandleEntity + 22))(this, 1188, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              this->m_nSegments.m_Value = 4;
            }
          }
          else
          {
LABEL_123:
            if ( this->m_nSegments.m_Value != 2 )
            {
              (*(this->_vptr_IHandleEntity + 22))(this, 1188, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              this->m_nSegments.m_Value = 2;
            }
          }
        }
        else
        {
LABEL_119:
          if ( this->m_nSegments.m_Value != 10 )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 1188, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            this->m_nSegments.m_Value = 10;
          }
        }
        break;
      case 30:
        LODWORD(v62) = strtol(v22->m_pszString, 0, 10);
        goto LABEL_126;
      case 33:
        v62 = v22->m_uint64;
        if ( v22->m_uint64 <= 0x7FFFFFFE )
          goto LABEL_126;
        goto LABEL_123;
      case 34:
        LODWORD(v62) = v22->m_float64;
        goto LABEL_126;
      case 37:
        LODWORD(v62) = v22->m_int;
        if ( v22->m_int > 0x7FFFFFFEu )
          goto LABEL_123;
        goto LABEL_126;
      default:
        v61 = VariantFieldTypeName(v60);
        Warning("No conversion from %s to int now\n", v61);
        goto LABEL_119;
    }
  }
  if ( CEntityKeyValues::HasValue(pKeyValues, 1578785047) )
  {
    v11 = pKeyValues->m_keyHashes.m_nCount;
    if ( v11 > 0 )
    {
      v12 = pKeyValues->m_keyHashes.m_nAllocated;
      for ( jj = 0; v11 > jj; ++jj )
      {
        if ( v12 != 0 )
        {
          v14 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v12 > 9 )
            v14 = pKeyValues->m_keyHashes.m_pElements;
          if ( v14[jj] == 1578785047 )
          {
LABEL_29:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v15 = pKeyValues->m_keyValues.m_pElements;
            else
              v15 = 0;
            v16 = &v15[jj].m_value;
            goto LABEL_103;
          }
        }
        else if ( *(4 * jj) == 1578785047 )
        {
          goto LABEL_29;
        }
      }
    }
    v16 = &CEntityKeyValues::sm_EmptyVariant;
LABEL_103:
    v53 = v16->m_type;
    switch ( v53 )
    {
      case 0:
        goto LABEL_105;
      case 1:
        LODWORD(v73) = v16->m_float;
        goto LABEL_218;
      case 5:
        LODWORD(v73) = v16->m_int;
        goto LABEL_218;
      case 6:
        LODWORD(v73) = v16->m_char;
        goto LABEL_218;
      case 26:
        v73 = v16->m_uint64;
        if ( v16->m_int64 > 0x7FFFFFFF )
          goto LABEL_216;
        if ( v73 < 0xFFFFFFFF80000000LL )
          LODWORD(v73) = 0x80000000;
LABEL_218:
        if ( v73 != 0 )
        {
          if ( v73 == 1 )
          {
            MakeEntitySystemString("materials/cable/rope.vmat");
            this->m_strRopeMaterialModel.u.m_Id = v79[0];
          }
          else
          {
LABEL_216:
            MakeEntitySystemString("materials/cable/chain.vmat");
            this->m_strRopeMaterialModel.u.m_Id = v79[0];
          }
        }
        else
        {
LABEL_105:
          MakeEntitySystemString("materials/cable/cable.vmat");
          this->m_strRopeMaterialModel.u.m_Id = v79[0];
        }
        break;
      case 30:
        LODWORD(v73) = strtol(v16->m_pszString, 0, 10);
        goto LABEL_218;
      case 33:
        v73 = v16->m_uint64;
        if ( v16->m_uint64 <= 0x7FFFFFFE )
          goto LABEL_218;
        goto LABEL_216;
      case 34:
        LODWORD(v73) = v16->m_float64;
        goto LABEL_218;
      case 37:
        LODWORD(v73) = v16->m_int;
        if ( v16->m_int > 0x7FFFFFFEu )
          goto LABEL_216;
        goto LABEL_218;
      default:
        v54 = VariantFieldTypeName(v53);
        Warning("No conversion from %s to int now\n", v54);
        goto LABEL_105;
    }
  }
  if ( !CEntityKeyValues::HasValue(pKeyValues, 1187249943) )
    return;
  v4 = pKeyValues->m_keyHashes.m_nCount;
  if ( v4 <= 0 )
  {
LABEL_98:
    v10 = &CEntityKeyValues::sm_EmptyVariant;
    v9 = 0;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_20;
    goto LABEL_99;
  }
  v5 = pKeyValues->m_keyHashes.m_nAllocated;
  v6 = 0;
  while ( v5 == 0 )
  {
    if ( *(4 * v6) == 1187249943 )
      goto LABEL_17;
LABEL_14:
    if ( v4 <= ++v6 )
      goto LABEL_98;
  }
  v7 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( v5 > 9 )
    v7 = pKeyValues->m_keyHashes.m_pElements;
  if ( v7[v6] != 1187249943 )
    goto LABEL_14;
LABEL_17:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v8 = pKeyValues->m_keyValues.m_pElements;
  else
    v8 = 0;
  v9 = 0;
  v10 = &v8[v6].m_value;
  if ( v10->m_type == 30 )
LABEL_20:
    v9 = v10->m_uint64;
LABEL_99:
  if ( V_stristr_fast(v9, ".vmat") != 0 )
  {
    AllocPooledString(v79, v9);
  }
  else
  {
    V_snprintf(str, 512, "%s.vmat", v9);
    AllocPooledString(v79, str);
  }
  this->m_strRopeMaterialModel.u.m_Id = v79[0];
}


// CRopeKeyframe::InputSetScrollSpeed  (line 797, @0x00000000023834a0, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CRopeKeyframe::InputSetScrollSpeed(CRopeKeyframe *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 != this->m_flScrollSpeed.m_Value )
  {
    v4 = m_float64;
    (*(this->_vptr_IHandleEntity + 22))(this, 1216, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flScrollSpeed.m_Value = v4;
  }
}


// CRopeKeyframe::SetMaterial  (line 803, @0x0000000002387c00, libserver.so)  // inlines: operator=
// calls: AllocPooledString
void __fastcall CRopeKeyframe::SetMaterial(CRopeKeyframe *const this, const char *pName)
{
  UtlSymLargeId_t v3[4]; // [rsp+0h] [rbp-20h] BYREF

  AllocPooledString(v3, pName);
  this->m_strRopeMaterialModel.u.m_Id = v3[0];
}


// CRopeKeyframe::UpdateTransmitState  (line 808, @0x0000000002381490, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CRopeKeyframe::UpdateTransmitState(CRopeKeyframe *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


