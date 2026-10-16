// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_props.cpp:282
class CDOTAPropCustomTexture : public CDynamicProp {
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
	CDOTAPropCustomTexture(CDOTAPropCustomTexture &);
	CDOTAPropCustomTexture(CDOTAPropCustomTexture &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTAPropCustomTexture();
	virtual void Spawn(const CEntityKeyValues *);
	virtual bool IsAlive();
	virtual bool OverridePropdata();
	virtual ~CDOTAPropCustomTexture();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[251] IsAlive
	// vtable[252] OverridePropdata
	// sizeof = 1752
};

// src/game/shared/dota/dota_props.cpp:312
class C_CDOTAPropCustomTexture_MapInstall {
	C_CDOTAPropCustomTexture_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTAPropCustomTexture::~CDOTAPropCustomTexture  (line 282, @0x00000000026a4420, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp, ~CBreakableProp, ~CDynamicProp
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CDOTAPropCustomTexture::~CDOTAPropCustomTexture(CDOTAPropCustomTexture *const this)
{
  CHitboxComponent::Storage_t *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  p_m_CHitboxComponent[4].m_pHitGroupPriorities = &off_3FF0E98;
  *&p_m_CHitboxComponent[4].m_nHitboxHandle = off_3FF0D80;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CDOTAPropCustomTexture::~CDOTAPropCustomTexture  (line 282, @0x00000000026a45c0, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp, ~CBreakableProp, ~CDOTAPropCustomTexture, ~CDynamicProp
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CDOTAPropCustomTexture::~CDOTAPropCustomTexture(CDOTAPropCustomTexture *const this)
{
  CHitboxComponent::Storage_t *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  p_m_CHitboxComponent[4].m_pHitGroupPriorities = &off_3FF0E98;
  *&p_m_CHitboxComponent[4].m_nHitboxHandle = off_3FF0D80;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTAPropCustomTexture::Schema_DynamicBinding  (line 284, @0x000000000269d580, libserver.so)
// globals: CDOTAPropCustomTexture::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTAPropCustomTexture::Schema_DynamicBinding(
        const CDOTAPropCustomTexture *const this)
{
  return CDOTAPropCustomTexture::s_pSchemaBinding;
}


// CDOTAPropCustomTexture::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 284, @0x000000000269d590, libserver.so)
// globals: CDOTAPropCustomTexture::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTAPropCustomTexture::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTAPropCustomTexture::CEntityInstanceEntityClass *const this)
{
  return CDOTAPropCustomTexture::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTAPropCustomTexture::CEntityInstanceEntityClass::DestructInstance  (line 284, @0x000000000269d5a0, libserver.so)  // inlines: Destruct<CDOTAPropCustomTexture>
void __fastcall CDOTAPropCustomTexture::CEntityInstanceEntityClass::DestructInstance(
        CDOTAPropCustomTexture::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTAPropCustomTexture::CEntityInstanceEntityClass::FreeInstance  (line 284, @0x000000000269d5c0, libserver.so)
void __fastcall CDOTAPropCustomTexture::CEntityInstanceEntityClass::FreeInstance(
        CDOTAPropCustomTexture::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTAPropCustomTexture::CEntityInstanceEntityClass::CanAllocate  (line 284, @0x000000000269d5e0, libserver.so)
bool __fastcall CDOTAPropCustomTexture::CEntityInstanceEntityClass::CanAllocate(
        const CDOTAPropCustomTexture::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTAPropCustomTexture::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 284, @0x000000000269d5f0, libserver.so)
// globals: CDOTAPropCustomTexture::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTAPropCustomTexture::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTAPropCustomTexture::CEntityInstanceEntityClass *const this)
{
  return CDOTAPropCustomTexture::s_pSchemaBinding;
}


// CDOTAPropCustomTexture::CEntityInstanceEntityClass::AllocateInstance  (line 284, @0x00000000026a0500, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTAPropCustomTexture::CEntityInstanceEntityClass::AllocateInstance(
        CDOTAPropCustomTexture::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1752);
  memset(v1, 0, 0x6D8u);
  return v1;
}


// CDOTAPropCustomTexture::CEntityInstanceEntityClass::ConstructInstance  (line 284, @0x00000000026a1400, libserver.so)  // inlines: CDOTAPropCustomTexture, Construct<CDOTAPropCustomTexture>
// calls: CDynamicProp::CDynamicProp
CEntityInstance *__fastcall CDOTAPropCustomTexture::CEntityInstanceEntityClass::ConstructInstance(
        CDOTAPropCustomTexture::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDynamicProp::CDynamicProp(p);
    *p = &off_4170610;
    *(p + 152) = off_4170F60;
    *(p + 153) = &off_4171078;
  }
  return p;
}


// CDOTAPropCustomTexture::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 284, @0x00000000026a5e00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTAPropCustomTexture::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTAPropCustomTexture::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTAPropCustomTexture::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 284, @0x00000000026a5e20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTAPropCustomTexture::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTAPropCustomTexture::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTAPropCustomTexture::GetEntityClassInternal  (line 284, @0x00000000026b0ae0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBreakableProp::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_06.cpp
// strings: "dota_prop_customtexture", "CDOTAPropCustomTexture", "prop_dynamic", "CDynamicProp"
// globals: `guard variable for'CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass, CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTAPropCustomTexture::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTAPropCustomTexture::GetEntityClassInfo(void)::g_EntityCDOTAPropCustomTextureClassInfo, CDOTAPropCustomTexture::GetEntityClassInfo(void)::g_EntityCDOTAPropCustomTextureClassInfo, `guard variable for'CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo (9 total)
CEntityClass *__cdecl CDOTAPropCustomTexture::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass) != 0 )
  {
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_designerName.u.m_Id = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass._vptr_CEntityClass = off_3F79390;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_ComponentOffsets.m_Size = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_AllHelpers.m_Size = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_classInputs.m_Size = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_classOutputs.m_Size = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_requiredEHandle.m_Index = -1;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_hNetworkSerializer = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_pBaseClassInfo = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_pClassInfo = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_flags = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_nAllHelpersFlags = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_pScriptClassDesc = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_pInputs = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_nInputCount = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_pOutputs = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_nOutputCount = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_pGameClass = 0;
    CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass._vptr_CEntityClass = off_4170590;
    __cxa_guard_release(&`guard variable for'CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass);
    __cxa_atexit(
      CDOTAPropCustomTexture::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTAPropCustomTextureClass != 0 )
    return &CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass;
  if ( `guard variable for'CDOTAPropCustomTexture::GetEntityClassInfo(void)::g_EntityCDOTAPropCustomTextureClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAPropCustomTexture::GetEntityClassInfo(void)::g_EntityCDOTAPropCustomTextureClassInfo) != 0 )
  {
    if ( `guard variable for'CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo) != 0 )
    {
      EntityClassInfo = CBreakableProp::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo,
        "CDynamicProp",
        "prop_dynamic",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTAPropCustomTexture::GetEntityClassInfo(void)::g_EntityCDOTAPropCustomTextureClassInfo,
      "CDOTAPropCustomTexture",
      "dota_prop_customtexture",
      0,
      &CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTAPropCustomTexture::GetEntityClassInfo(void)::g_EntityCDOTAPropCustomTextureClassInfo);
  }
  CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_pClassInfo = &CDOTAPropCustomTexture::GetEntityClassInfo(void)::g_EntityCDOTAPropCustomTextureClassInfo;
  CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_pBaseClassInfo = CDOTAPropCustomTexture::GetEntityClassInfo(void)::g_EntityCDOTAPropCustomTextureClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTAPropCustomTextureClass = &CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass;
  CDOTAPropCustomTexture::GetEntityClassInfo(void)::g_EntityCDOTAPropCustomTextureClassInfo.m_pClass = &CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass;
  CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCDOTAPropCustomTextureClass->m_pComponentOverrides = 0;
  return &CDOTAPropCustomTexture::GetEntityClassInternal(void)::g_EntityCDOTAPropCustomTextureClass;
}


// CDOTAPropCustomTexture::IsAlive  (line 297, @0x000000000269d600, libserver.so)
bool __fastcall CDOTAPropCustomTexture::IsAlive(CDOTAPropCustomTexture *const this)
{
  return 0;
}


// CDOTAPropCustomTexture::OverridePropdata  (line 298, @0x000000000269d610, libserver.so)
bool __fastcall CDOTAPropCustomTexture::OverridePropdata(CDOTAPropCustomTexture *const this)
{
  return 1;
}


// CDOTAPropCustomTexture::YouForgotToImplementOrDeclareServerClass  (line 312, @0x0000000002654080, libserver.so)
int __fastcall CDOTAPropCustomTexture::YouForgotToImplementOrDeclareServerClass(CDOTAPropCustomTexture *const this)
{
  return 0;
}


// CDOTAPropCustomTexture::GetServerClass  (line 312, @0x0000000002658cc0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTAPropCustomTexture::GetServerClass(CDOTAPropCustomTexture *const this)
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


// CDOTAPropCustomTexture::Spawn  (line 322, @0x00000000026544a0, libserver.so)
// calls: CDynamicProp::Spawn
void __fastcall CDOTAPropCustomTexture::Spawn(CDOTAPropCustomTexture *const this, const CEntityKeyValues *pKeyValues)
{
  CDynamicProp::Spawn(this, pKeyValues);
}


