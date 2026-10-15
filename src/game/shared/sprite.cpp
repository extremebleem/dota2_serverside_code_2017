// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/sprite.cpp:29
class CSpriteAlias_env_glow : public CSprite {
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
	CSpriteAlias_env_glow(CSpriteAlias_env_glow &);
	CSpriteAlias_env_glow(CSpriteAlias_env_glow &);
	CSpriteAlias_env_glow();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CSpriteAlias_env_glow();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1264
};

// src/game/shared/sprite.cpp:1072
class C_CSpriteOriented_MapInstall {
	C_CSpriteOriented_MapInstall();

	// sizeof = 1
};

// src/game/shared/sprite.cpp:1099
class C_CSprite_MapInstall {
	C_CSprite_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSpriteAlias_env_glow::Schema_DynamicBinding  (line 29, @0x00000000023e53a0, libserver.so)
// globals: CSpriteAlias_env_glow::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CSpriteAlias_env_glow::Schema_DynamicBinding(
        const CSpriteAlias_env_glow *const this)
{
  return CSpriteAlias_env_glow::s_pSchemaBinding;
}


// CSpriteAlias_env_glow::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x00000000023e53b0, libserver.so)
// globals: CSpriteAlias_env_glow::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CSpriteAlias_env_glow::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CSpriteAlias_env_glow::CEntityInstanceEntityClass *const this)
{
  return CSpriteAlias_env_glow::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CSpriteAlias_env_glow::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x00000000023e53c0, libserver.so)  // inlines: Destruct<CSpriteAlias_env_glow>
void __fastcall CSpriteAlias_env_glow::CEntityInstanceEntityClass::DestructInstance(
        CSpriteAlias_env_glow::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CSpriteAlias_env_glow::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x00000000023e53e0, libserver.so)
void __fastcall CSpriteAlias_env_glow::CEntityInstanceEntityClass::FreeInstance(
        CSpriteAlias_env_glow::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CSpriteAlias_env_glow::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x00000000023e5400, libserver.so)
bool __fastcall CSpriteAlias_env_glow::CEntityInstanceEntityClass::CanAllocate(
        const CSpriteAlias_env_glow::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CSpriteAlias_env_glow::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x00000000023e5410, libserver.so)
// globals: CSpriteAlias_env_glow::s_pSchemaBinding
const ISchemaBinding *__fastcall CSpriteAlias_env_glow::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CSpriteAlias_env_glow::CEntityInstanceEntityClass *const this)
{
  return CSpriteAlias_env_glow::s_pSchemaBinding;
}


// CSpriteAlias_env_glow::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x00000000023e7df0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CSpriteAlias_env_glow::CEntityInstanceEntityClass::AllocateInstance(
        CSpriteAlias_env_glow::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1264);
  memset(v1, 0, 0x4F0u);
  return v1;
}


// CSpriteAlias_env_glow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x00000000023ea7e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CSpriteAlias_env_glow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CSpriteAlias_env_glow::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CSpriteAlias_env_glow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x00000000023ea800, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CSpriteAlias_env_glow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CSpriteAlias_env_glow::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CSpriteAlias_env_glow::GetEntityClassInternal  (line 29, @0x00000000023ee2e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CSprite::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CSpriteAlias_env_glow"
// globals: `guard variable for'CSpriteAlias_env_glow::GetEntityClassInternal(void)::g_EntityCSpriteAlias_env_glowClass, CSpriteAlias_env_glow::GetEntityClassInternal(void)::g_EntityCSpriteAlias_env_glowClass, __dso_handle, CSpriteAlias_env_glow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CSpriteAlias_env_glow::GetEntityClassInfo(void)::g_EntityCSpriteAlias_env_glowClassInfo, CSpriteAlias_env_glow::GetEntityClassInfo(void)::g_EntityCSpriteAlias_env_glowClassInfo
CEntityClass *__cdecl CSpriteAlias_env_glow::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CSpriteAlias_env_glow::GetEntityClassInternal(void)::g_EntityCSpriteAlias_env_glowClass == 0
    && __cxa_guard_acquire(&`guard variable for'CSpriteAlias_env_glow::GetEntityClassInternal(void)::g_EntityCSpriteAlias_env_glowClass) != 0 )
  {
    CEntityClass::CEntityClass(&CSpriteAlias_env_glow::GetEntityClassInternal(void)::g_EntityCSpriteAlias_env_glowClass);
    CSpriteAlias_env_glow::GetEntityClassInternal(void)::g_EntityCSpriteAlias_env_glowClass._vptr_CEntityClass = off_40B0DB0;
    __cxa_guard_release(&`guard variable for'CSpriteAlias_env_glow::GetEntityClassInternal(void)::g_EntityCSpriteAlias_env_glowClass);
    __cxa_atexit(
      CSpriteAlias_env_glow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CSpriteAlias_env_glow::GetEntityClassInternal(void)::g_EntityCSpriteAlias_env_glowClass,
      &_dso_handle);
  }
  if ( g_pEntityCSpriteAlias_env_glowClass != 0 )
    return &CSpriteAlias_env_glow::GetEntityClassInternal(void)::g_EntityCSpriteAlias_env_glowClass;
  if ( `guard variable for'CSpriteAlias_env_glow::GetEntityClassInfo(void)::g_EntityCSpriteAlias_env_glowClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CSpriteAlias_env_glow::GetEntityClassInfo(void)::g_EntityCSpriteAlias_env_glowClassInfo) != 0 )
  {
    EntityClassInfo = CSprite::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CSpriteAlias_env_glow::GetEntityClassInfo(void)::g_EntityCSpriteAlias_env_glowClassInfo,
      "CSpriteAlias_env_glow",
      "env_glow",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CSpriteAlias_env_glow::GetEntityClassInfo(void)::g_EntityCSpriteAlias_env_glowClassInfo);
  }
  CSpriteAlias_env_glow::GetEntityClassInternal(void)::g_EntityCSpriteAlias_env_glowClass.m_pClassInfo = &CSpriteAlias_env_glow::GetEntityClassInfo(void)::g_EntityCSpriteAlias_env_glowClassInfo;
  CSpriteAlias_env_glow::GetEntityClassInternal(void)::g_EntityCSpriteAlias_env_glowClass.m_pBaseClassInfo = CSpriteAlias_env_glow::GetEntityClassInfo(void)::g_EntityCSpriteAlias_env_glowClassInfo.m_pBaseClassInfo;
  g_pEntityCSpriteAlias_env_glowClass = &CSpriteAlias_env_glow::GetEntityClassInternal(void)::g_EntityCSpriteAlias_env_glowClass;
  CSpriteAlias_env_glow::GetEntityClassInfo(void)::g_EntityCSpriteAlias_env_glowClassInfo.m_pClass = &CSpriteAlias_env_glow::GetEntityClassInternal(void)::g_EntityCSpriteAlias_env_glowClass;
  CSpriteAlias_env_glow::GetEntityClassInternal(void)::g_EntityCSpriteAlias_env_glowClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCSpriteAlias_env_glowClass->m_pComponentOverrides = 0;
  return &CSpriteAlias_env_glow::GetEntityClassInternal(void)::g_EntityCSpriteAlias_env_glowClass;
}


// CSpriteAlias_env_glow::~CSpriteAlias_env_glow  (line 29, @0x00000000023f78f0, libserver.so)  // inlines: ~CNetworkVarBase, ~CSprite, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity
void __fastcall CSpriteAlias_env_glow::~CSpriteAlias_env_glow(CSpriteAlias_env_glow *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>,CSprite::NetworkVar_m_hSpriteMaterial> *p_m_hSpriteMaterial; // rdi

  p_m_hSpriteMaterial = &this->m_hSpriteMaterial;
  p_m_hSpriteMaterial[-144].m_Value.m_pBinding = &off_40B1BF0;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&p_m_hSpriteMaterial->m_Value);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CSpriteAlias_env_glow::~CSpriteAlias_env_glow  (line 29, @0x00000000023f7930, libserver.so)  // inlines: ~CNetworkVarBase, ~CSprite, ~CSpriteAlias_env_glow, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CSpriteAlias_env_glow::~CSpriteAlias_env_glow(CSpriteAlias_env_glow *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>,CSprite::NetworkVar_m_hSpriteMaterial> *p_m_hSpriteMaterial; // rdi

  p_m_hSpriteMaterial = &this->m_hSpriteMaterial;
  p_m_hSpriteMaterial[-144].m_Value.m_pBinding = &off_40B1BF0;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&p_m_hSpriteMaterial->m_Value);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CSpriteAlias_env_glow::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x00000000023f7ed0, libserver.so)  // inlines: CSpriteAlias_env_glow, Construct<CSpriteAlias_env_glow>
// calls: CSprite::CSprite
CEntityInstance *__fastcall CSpriteAlias_env_glow::CEntityInstanceEntityClass::ConstructInstance(
        CSpriteAlias_env_glow::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CSprite::CSprite(p);
    *p = &off_40B0E30;
  }
  return p;
}


// CSprite::GetDataDescMap  (line 33, @0x00000000023badf0, libserver.so)
// globals: CSprite::m_DataMap
datamap_t *__fastcall CSprite::GetDataDescMap(CSprite *const this)
{
  return &CSprite::m_DataMap;
}


// CSprite::AddDatadescMetadataKeys  (line 33, @0x00000000023c31c0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CSprite::GetEntityClass(void)
void __fastcall CSprite::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CSprite::GetEntityClass);
}


// CSprite::GetBaseMap  (line 33, @0x00000000023c31e0, libserver.so)
datamap_t *__cdecl CSprite::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CSprite>  (line 33, @0x00000000023df9a0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CSprite"
// globals: `guard variable for'DataMapInit<CSprite>(CSprite *)::nameHolder, `guard variable for'DataMapInit<CSprite>(CSprite *)::dataDesc, CSprite::GetEntityClass(void), CSprite::m_DataMap, DataMapInit<CSprite>(CSprite *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CSprite>(CSprite *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax
  char *v6; // r12
  __int64 v7; // rbx
  int v8; // eax
  char **v9; // rax
  char *v10; // r12
  __int64 v11; // rbx
  int v12; // eax
  char **v13; // rax
  char *v14; // r12
  __int64 v15; // rbx
  int v16; // eax
  char **v17; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CSprite>(CSprite *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CSprite>(CSprite *)::nameHolder) != 0 )
  {
    DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CSprite>(CSprite *)::nameHolder.m_pszBase = "CSprite";
    DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CSprite>(CSprite *)::nameHolder.m_nLenBase = 7;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CSprite>(CSprite *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CSprite>(CSprite *)::nameHolder,
      &_dso_handle);
  }
  CSprite::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CSprite>(CSprite *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CSprite>(CSprite *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CSprite>(CSprite *)::nameHolder.m_nLenBase + 13);
    strcpy(stpcpy(v2, DataMapInit<CSprite>(CSprite *)::nameHolder.m_pszBase), "AnimateThink");
    m_Size = DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Size == DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CSprite>(CSprite *)::dataDesc[22].fieldName = v2;
    v6 = operator new[](DataMapInit<CSprite>(CSprite *)::nameHolder.m_nLenBase + 12);
    strcpy(stpcpy(v6, DataMapInit<CSprite>(CSprite *)::nameHolder.m_pszBase), "ExpandThink");
    v7 = DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Size == DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Memory, 1);
      v8 = DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CSprite>(CSprite *)::dataDesc[23].fieldName = v6;
    v10 = operator new[](DataMapInit<CSprite>(CSprite *)::nameHolder.m_nLenBase + 17);
    strcpy(stpcpy(v10, DataMapInit<CSprite>(CSprite *)::nameHolder.m_pszBase), "AnimateUntilDead");
    v11 = DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Size;
    v12 = DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Size == DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Memory, 1);
      v12 = DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Size = v12 + 1;
    v13 = &DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Memory.m_pMemory[v11];
    if ( v13 != 0 )
      *v13 = v10;
    DataMapInit<CSprite>(CSprite *)::dataDesc[24].fieldName = v10;
    v14 = operator new[](DataMapInit<CSprite>(CSprite *)::nameHolder.m_nLenBase + 18);
    strcpy(stpcpy(v14, DataMapInit<CSprite>(CSprite *)::nameHolder.m_pszBase), "BeginFadeOutThink");
    v15 = DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Size;
    v16 = DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Size == DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Memory, 1);
      v16 = DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Size = v16 + 1;
    v17 = &DataMapInit<CSprite>(CSprite *)::nameHolder.m_Names.m_Memory.m_pMemory[v15];
    if ( v17 != 0 )
      *v17 = v14;
    DataMapInit<CSprite>(CSprite *)::dataDesc[25].fieldName = v14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CSprite>(CSprite *)::dataDesc);
  }
  CSprite::m_DataMap.dataNumFields = 34;
  CSprite::m_DataMap.dataDesc = &DataMapInit<CSprite>(CSprite *)::dataDesc[1];
  AddDatadescMetadataKeys(&CSprite::m_DataMap, CSprite::GetEntityClass);
  return &CSprite::m_DataMap;
}


// CSprite::OnSpriteScaleChanged  (line 122, @0x00000000023c31f0, libserver.so)
void __fastcall CSprite::OnSpriteScaleChanged(CSprite *const this)
{
  ;
}


// CSprite::CSprite  (line 146, @0x00000000023e27c0, libserver.so)  // inlines: CEntityHandle, CNetworkHandleBase, CNetworkVarBase, CStrongHandle, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, EnsureValidValue<unsigned int>, FindResourceById<1952542070ull>, Init, NetworkStateChanged, Set, ThreadInterlockedIncrement, operator++, operator=, operator=<float>, operator=<int>, ~CNetworkVarBase, ~CStrongHandle
// calls: CBaseModelEntity::CBaseModelEntity, CBaseEntity::NetworkStateChanged, CStrongHandle<InfoForResourceTypeIMaterial2>::Init, CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume
// callers: CSprite::CEntityInstanceEntityClass::ConstructInstance, CSpriteOriented::CEntityInstanceEntityClass::ConstructInstance, CCommentaryViewPosition::CEntityInstanceEntityClass::ConstructInstance, CSpriteAlias_env_glow::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CSprite::CSprite(CSprite *const this)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  const ResourceBindingBase_t *v3; // rax
  CStrongHandle<InfoForResourceTypeIMaterial2> src; // [rsp+0h] [rbp-30h] BYREF

  CBaseModelEntity::CBaseModelEntity(this);
  this->_vptr_IHandleEntity = &off_40B1BF0;
  this->m_hSpriteMaterial.m_Value.m_pBinding = 0;
  this->m_hAttachedToEntity.m_Value.m_Index = -1;
  this->m_nAttachment.m_Value = 0;
  this->m_flSpriteFramerate.m_Value = 0.0;
  this->m_flFrame.m_Value = 0.0;
  this->m_nBrightness.m_Value = 0;
  this->m_flBrightnessTime.m_Value = 0.0;
  this->m_flSpriteScale.m_Value = 0.0;
  this->m_flScaleTime.m_Value = 0.0;
  this->m_bWorldSpaceScale.m_Value = 0;
  this->m_flGlowProxySize.m_Value = 0.0;
  this->m_flHDRColorScale.m_Value = 0.0;
  CBaseEntity::NetworkStateChanged(this, 0x4BCu, -1, -1);
  this->m_flGlowProxySize.m_Value = 2.0;
  if ( this->m_flHDRColorScale.m_Value != 1.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1216, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flHDRColorScale.m_Value = 1.0;
  }
  src.m_pBinding = 0;
  m_pBinding = (*(*g_pResourceHandleUtils + 8LL))(g_pResourceHandleUtils, 0, 1952542070);
  src.m_pBinding = m_pBinding;
  if ( m_pBinding != 0 )
  {
    if ( (m_pBinding->m_nFlags & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, m_pBinding, 2, &src);
      m_pBinding = src.m_pBinding;
    }
    _InterlockedAdd(&m_pBinding->m_nRefCount.m_value, 1u);
    v3 = src.m_pBinding;
  }
  else
  {
    v3 = 0;
  }
  if ( v3 != this->m_hSpriteMaterial.m_Value.m_pBinding )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1152, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&this->m_hSpriteMaterial.m_Value, &src);
  }
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&src);
  this->m_nSpriteHeight = 0;
  this->m_nSpriteWidth = 0;
}


// CSprite::PreFirstNetworkUpdate  (line 164, @0x00000000023c3c70, libserver.so)  // inlines: NetworkStateChanged, Set, SetSolid, operator=<int>
// calls: CBaseEntity::SetMoveType, CCollisionProperty::SetSurroundingBoundsType, CBaseEntity::AddEffects, CSprite::TurnOn, CBaseEntity::GetLocalAngles, CBaseModelEntity::GetRenderAlpha, CSprite::SetBrightness, CSprite::SetScale, CBaseEntity::SetLocalAngles
void __fastcall CSprite::PreFirstNetworkUpdate(CSprite *const this)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r12
  double v3; // xmm0_8
  double v4; // xmm1_8
  double v5; // xmm2_8
  double v6; // xmm3_8
  __m128 v7; // xmm2
  __m128 v8; // xmm1
  int v9; // xmm2_4
  uint8 RenderAlpha; // al
  double v11; // xmm1_8
  unsigned int m_Value; // eax
  float v13; // xmm0_4
  __int64 v14; // rax
  float scale; // [rsp+Ch] [rbp-24h]
  QAngle angles; // [rsp+10h] [rbp-20h] BYREF

  p_m_Collision = &this->m_Collision;
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 0);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  if ( this->m_flFrame.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1172, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v3, v4, v5, v6, 0.0);
    this->m_flFrame.m_Value = 0.0;
  }
  CCollisionProperty::SetSurroundingBoundsType(p_m_Collision, SurroundingBoundsType_t::USE_GAME_CODE, 0, 0);
  CBaseEntity::AddEffects(this, 80);
  CSprite::TurnOn(this);
  if ( CBaseEntity::GetLocalAngles(this)->y == 0.0 || CBaseEntity::GetLocalAngles(this)->z != 0.0 )
  {
    v7.m128_i32[0] = LODWORD(this->m_flSpriteScale.m_Value);
    if ( v7.m128_f32[0] < 0.0 )
      goto LABEL_9;
LABEL_5:
    v8 = _mm_cmpge_ss(0x42800000u, v7);
    v9 = _mm_andnot_ps(v8, 0x42800000u).m128_u32[0] | v7.m128_i32[0] & v8.m128_i32[0];
    goto LABEL_6;
  }
  v14 = *&CBaseEntity::GetLocalAngles(this)->x;
  LODWORD(angles.x) = v14;
  angles.y = 0.0;
  angles.z = *(&v14 + 1);
  CBaseEntity::SetLocalAngles(this, &angles);
  v7.m128_i32[0] = LODWORD(this->m_flSpriteScale.m_Value);
  if ( v7.m128_f32[0] >= 0.0 )
    goto LABEL_5;
LABEL_9:
  if ( v7.m128_f32[0] > 64.0 )
    v9 = 1115684864;
  else
    v9 = 0;
LABEL_6:
  scale = *&v9;
  RenderAlpha = CBaseModelEntity::GetRenderAlpha(this);
  CSprite::SetBrightness(this, RenderAlpha, 0.0, v11);
  CSprite::SetScale(this, COERCE_DOUBLE(LODWORD(scale)), 0.0, scale);
  m_Value = this->m_nBrightness.m_Value;
  v13 = this->m_flSpriteScale.m_Value;
  this->m_flDestScale = v13;
  this->m_flStartScale = v13;
  this->m_nDestBrightness = m_Value;
  this->m_nStartBrightness = m_Value;
}


// CSprite::Spawn  (line 206, @0x00000000023e29d0, libserver.so)  // inlines: CStrongHandle, CUtlSymbolLarge, FindOrRegisterResourceByName<1952542070ull>, GetEntityName, GetModelNameFromKeyValues, NetworkStateChanged, Set, SetSolid, operator=, operator=<CWeakHandle<InfoForResourceTypeIMaterial2> >, operator=<float>, operator=<int>, operator><float>, ~CStrongHandle
// calls: CBaseEntity::Spawn, GetModelNameFromKeyValues, CSprite::GetMaterialName, CStrongHandle<InfoForResourceTypeIMaterial2>::Init, CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseEntity::SetMoveType, CCollisionProperty::SetSurroundingBoundsType, CBaseEntity::AddEffects, CSprite::TurnOn, CBaseEntity::GetLocalAngles, CBaseModelEntity::GetRenderAlpha, CSprite::SetBrightness (19 total)
// callers: CCommentaryViewPosition::Spawn, CSpriteOriented::Spawn
// strings: "env_sprite at setpos %0.0f %0.0f %0.0f has invalid glow size %f - clamping to %f\n"
void __fastcall CSprite::Spawn(CSprite *const this, const CEntityKeyValues *pKeyValues)
{
  const char *ModelNameFromKeyValues; // rax
  const ResourceBinding_t<InfoForResourceTypeIMaterial2> *v5; // rax
  double v6; // xmm0_8
  double v7; // xmm1_8
  double v8; // xmm2_8
  double v9; // xmm3_8
  double v10; // xmm4_8
  __m128 v11; // xmm2
  __m128 v12; // xmm1
  int v13; // xmm2_4
  uint8 RenderAlpha; // al
  double v15; // xmm1_8
  const Vector *AbsOrigin; // rax
  __int64 v17; // rax
  float m_Value; // [rsp+Ch] [rbp-154h]
  double z; // [rsp+10h] [rbp-150h]
  float scale; // [rsp+18h] [rbp-148h]
  double scalea; // [rsp+18h] [rbp-148h]
  QAngle angles; // [rsp+20h] [rbp-140h] BYREF
  char matName[264]; // [rsp+30h] [rbp-130h] BYREF
  unsigned __int64 v24; // [rsp+138h] [rbp-28h]

  v24 = __readfsqword(0x28u);
  CBaseEntity::Spawn(this, pKeyValues);
  ModelNameFromKeyValues = GetModelNameFromKeyValues(pKeyValues, "");
  CSprite::GetMaterialName(this, ModelNameFromKeyValues, matName);
  v5 = (*(*g_pResourceSystem + 256LL))(g_pResourceSystem, matName, 1952542070, 1);
  *&angles.x = 0;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&angles, v5);
  if ( this->m_hSpriteMaterial.m_Value.m_pBinding != *&angles.x )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1152, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&this->m_hSpriteMaterial.m_Value, &angles);
  }
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&angles);
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 0);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  if ( this->m_flFrame.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1172, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v6, v7, v8, v9, v10, 0.0);
    this->m_flFrame.m_Value = 0.0;
  }
  CCollisionProperty::SetSurroundingBoundsType(&this->m_Collision, SurroundingBoundsType_t::USE_GAME_CODE, 0, 0);
  CBaseEntity::AddEffects(this, 80);
  if ( this->m_flGlowProxySize.m_Value > 64.0 )
  {
    m_Value = this->m_flGlowProxySize.m_Value;
    z = CBaseEntity::GetAbsOrigin(this)->z;
    scalea = CBaseEntity::GetAbsOrigin(this)->y;
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    DevWarning(
      "env_sprite at setpos %0.0f %0.0f %0.0f has invalid glow size %f - clamping to %f\n",
      AbsOrigin->x,
      scalea,
      z,
      m_Value,
      64.0);
    if ( this->m_flGlowProxySize.m_Value != 64.0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1212, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flGlowProxySize.m_Value = 64.0;
    }
  }
  if ( this->m_pEntity->m_name.u.m_Id != 0 && (this->m_spawnflags.m_Value & 1) == 0 )
    CSprite::TurnOff(this);
  else
    CSprite::TurnOn(this);
  if ( CBaseEntity::GetLocalAngles(this)->y == 0.0 || CBaseEntity::GetLocalAngles(this)->z != 0.0 )
  {
    v11.m128_i32[0] = LODWORD(this->m_flSpriteScale.m_Value);
    if ( v11.m128_f32[0] < 0.0 )
      goto LABEL_18;
LABEL_11:
    v12 = _mm_cmpge_ss(0x42800000u, v11);
    v13 = _mm_andnot_ps(v12, 0x42800000u).m128_u32[0] | v11.m128_i32[0] & v12.m128_i32[0];
    goto LABEL_12;
  }
  v17 = *&CBaseEntity::GetLocalAngles(this)->x;
  LODWORD(angles.x) = v17;
  angles.y = 0.0;
  angles.z = *(&v17 + 1);
  CBaseEntity::SetLocalAngles(this, &angles);
  v11.m128_i32[0] = LODWORD(this->m_flSpriteScale.m_Value);
  if ( v11.m128_f32[0] >= 0.0 )
    goto LABEL_11;
LABEL_18:
  if ( v11.m128_f32[0] > 64.0 )
    v13 = 1115684864;
  else
    v13 = 0;
LABEL_12:
  scale = *&v13;
  RenderAlpha = CBaseModelEntity::GetRenderAlpha(this);
  CSprite::SetBrightness(this, RenderAlpha, 0.0, v15);
  CSprite::SetScale(this, COERCE_DOUBLE(LODWORD(scale)), 0.0, scale);
}


// CSprite::EnableWorldSpaceScale  (line 292, @0x00000000023c3200, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CSprite::EnableWorldSpaceScale(CSprite *const this, bool bEnable)
{
  if ( this->m_bWorldSpaceScale.m_Value != bEnable )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1208, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bWorldSpaceScale.m_Value = bEnable;
  }
}


// CSprite::ComputeWorldSpaceSurroundingBox  (line 300, @0x00000000023bb5c0, libserver.so)  // inlines: Init, operator+=
// calls: CBaseEntity::GetAbsOrigin
void __fastcall CSprite::ComputeWorldSpaceSurroundingBox(
        CSprite *const this,
        Vector *pVecWorldMins,
        Vector *pVecWorldMaxs)
{
  float v6; // xmm0_4
  const Vector *AbsOrigin; // rax
  const Vector *v8; // rax

  v6 = 0.5 * this->m_flSpriteScale.m_Value;
  if ( !this->m_bWorldSpaceScale.m_Value )
    v6 = v6 * fmaxf(this->m_nSpriteWidth, this->m_nSpriteHeight);
  pVecWorldMins->x = -v6;
  pVecWorldMins->y = -v6;
  pVecWorldMins->z = -v6;
  pVecWorldMaxs->x = v6;
  pVecWorldMaxs->y = v6;
  pVecWorldMaxs->z = v6;
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  pVecWorldMins->x = pVecWorldMins->x + AbsOrigin->x;
  pVecWorldMins->y = pVecWorldMins->y + AbsOrigin->y;
  pVecWorldMins->z = pVecWorldMins->z + AbsOrigin->z;
  v8 = CBaseEntity::GetAbsOrigin(this);
  pVecWorldMaxs->x = pVecWorldMaxs->x + v8->x;
  pVecWorldMaxs->y = pVecWorldMaxs->y + v8->y;
  pVecWorldMaxs->z = pVecWorldMaxs->z + v8->z;
}


// CSprite::SetMaterialByIndex  (line 329, @0x00000000023e2660, libserver.so)  // inlines: CStrongHandle, CWeakHandle, Init, NetworkStateChanged, Set, SetCollisionBounds, operator=, operator=<CWeakHandle<InfoForResourceTypeIMaterial2> >, ~CStrongHandle
// calls: GetMaterialNameFromIndex, CCollisionProperty::SetCollisionBounds, CStrongHandle<InfoForResourceTypeIMaterial2>::Init, CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, GetSpriteInfo, Msg, __stack_chk_fail, _Unwind_Resume
// callers: CCommentaryViewPosition::Spawn
// strings: "Attempted to use non-precached material %s\n"
void __fastcall CSprite::SetMaterialByIndex(CSprite *const this, HMaterial hMaterial)
{
  const ResourceBinding_t<InfoForResourceTypeIMaterial2> *m_pData; // rsi
  float m_pBinding_low; // xmm0_4
  int v6; // eax
  int nWidth; // [rsp+8h] [rbp-148h] BYREF
  int nHeight; // [rsp+Ch] [rbp-144h] BYREF
  CStrongHandle<InfoForResourceTypeIMaterial2> nMaxFrame; // [rsp+10h] [rbp-140h] BYREF
  char pName[264]; // [rsp+20h] [rbp-130h] BYREF
  unsigned __int64 v11; // [rsp+128h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  nMaxFrame.m_pBinding = hMaterial.m_pBinding->m_pData;
  GetMaterialNameFromIndex(&nMaxFrame, pName, 260);
  CCollisionProperty::SetCollisionBounds(&this->m_Collision, &vec3_origin, &vec3_origin);
  m_pData = hMaterial.m_pBinding->m_pData;
  nMaxFrame.m_pBinding = 0;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&nMaxFrame, m_pData);
  if ( this->m_hSpriteMaterial.m_Value.m_pBinding != nMaxFrame.m_pBinding )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1152, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&this->m_hSpriteMaterial.m_Value, &nMaxFrame);
  }
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&nMaxFrame);
  if ( this->m_hSpriteMaterial.m_Value.m_pBinding == 0 )
    Msg("Attempted to use non-precached material %s\n", pName);
  GetSpriteInfo(pName, &nWidth, &nHeight, &nMaxFrame);
  m_pBinding_low = SLODWORD(nMaxFrame.m_pBinding);
  this->m_nSpriteWidth = nWidth;
  v6 = nHeight;
  this->m_flMaxFrame = m_pBinding_low;
  this->m_nSpriteHeight = v6;
}


// CSprite::GetMaterialName  (line 359, @0x00000000023c3240, libserver.so)  // inlines: strcat, strchr, strcpy
// calls: memcmp, strcat, strchr
// callers: CSprite::Spawn, CSprite::Precache
// strings: "sprites/"
void __fastcall CSprite::GetMaterialName(const CSprite *const this, const char *pModelName, char *pOutBuf)
{
  char *v5; // rax

  if ( pModelName != 0 && *pModelName != 0 )
  {
    *pOutBuf = 0;
    if ( memcmp(pModelName, "sprites/", 8u) == 0 )
      strcpy(pOutBuf, "materials/");
    strcat(pOutBuf, pModelName);
    v5 = strchr(pOutBuf, 46);
    if ( v5 != 0 )
      strcpy(v5, ".vmat");
  }
  else
  {
    strcpy(pOutBuf, "materials/sprites/glow.vmat");
  }
}


// CSprite::Precache  (line 389, @0x00000000023e3950, libserver.so)  // inlines: GetModelNameFromKeyValues, Precache
// calls: CEntityInstance::Precache, GetModelNameFromKeyValues, CSprite::GetMaterialName, PrecacheMaterial, __stack_chk_fail
void __fastcall CSprite::Precache(CSprite *const this, const CEntityPrecacheContext *pContext)
{
  const char *ModelNameFromKeyValues; // rax
  char matName[264]; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v6; // [rsp+108h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  CEntityInstance::Precache(this, pContext);
  ModelNameFromKeyValues = GetModelNameFromKeyValues(pContext->m_pKeyValues, "");
  CSprite::GetMaterialName(this, ModelNameFromKeyValues, matName);
  PrecacheMaterial(matName, pContext);
}


// CSprite::UpdateTransmitState  (line 400, @0x00000000023bb900, libserver.so)
// calls: CBaseEntity::GetMoveParent, CBaseEntity::SetTransmitState
int __fastcall CSprite::UpdateTransmitState(CSprite *const this)
{
  if ( CBaseEntity::GetMoveParent(this) != 0 )
    return CBaseEntity::SetTransmitState(this, 0);
  else
    return CBaseEntity::SetTransmitState(this, 4);
}


// CSprite::ShouldTransmit  (line 413, @0x00000000023bb950, libserver.so)  // inlines: ToBaseViewModel
// calls: CBaseEntity::GetMoveParent
int __fastcall CSprite::ShouldTransmit(CSprite *const this, const CGameCheckTransmitInfo *pInfo)
{
  CBaseEntity *MoveParent; // rax
  __int64 v5; // rax
  __int64 v6; // rbx

  if ( CBaseEntity::GetMoveParent(this) != 0
    && (MoveParent = CBaseEntity::GetMoveParent(this)) != 0
    && (v5 = (*(MoveParent->_vptr_IHandleEntity + 43))(MoveParent), v6 = v5, v5 != 0)
    && (*(*v5 + 1864LL))(v5) != 0 )
  {
    return (*(*v6 + 520LL))(v6, pInfo);
  }
  else
  {
    return 4;
  }
}


// CSprite::OnRestore  (line 436, @0x00000000023c16c0, libserver.so)  // inlines: GetEHandle, GetEntityIdentity, GetEntryIndex, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetAttachment, operator!=, operator=, operator=<int>
// calls: CBaseModelEntity::OnRestore, CBaseEntity::GetFollowedEntity, CBaseEntity::FollowEntity
// globals: CEntityHandle::gm_pEntityList
void __fastcall CSprite::OnRestore(CSprite *const this)
{
  int m_Value; // r13d
  CBaseEntity *FollowedEntity; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *m_pEntity; // rax
  int v8; // edx
  __int16 v9; // cx
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx

  CBaseModelEntity::OnRestore(this);
  if ( CBaseEntity::GetFollowedEntity(this) != 0 )
  {
    m_Value = this->m_nAttachment.m_Value;
    FollowedEntity = CBaseEntity::GetFollowedEntity(this);
    if ( FollowedEntity != 0 )
    {
      m_Index = this->m_hAttachedToEntity.m_Value.m_Index;
      if ( m_Index + 2 <= 1
        || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAttachedToEntity.m_Value.m_Index) >> 9)
                                                                & 0x3F]) == 0
        || (v6 = &v5[this->m_hAttachedToEntity.m_Value.m_Index & 0x1FF]) == 0
        || m_Index != v6->m_EHandle.m_Index
        || FollowedEntity != v6->m_pInstance )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1160, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        m_pEntity = FollowedEntity->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v8 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          if ( m_pEntity->m_EHandle.m_Index == -1 )
            v9 = 0x7FFF;
          else
            v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(this->m_hAttachedToEntity.m_Value.m_Index) = v9 | this->m_hAttachedToEntity.m_Value.m_Index & 0x8000;
          this->m_hAttachedToEntity.m_Value.m_Index = (v8 << 15) | this->m_hAttachedToEntity.m_Value.m_Index & 0x7FFF;
        }
        else
        {
          this->m_hAttachedToEntity.m_Value.m_Index = -1;
        }
      }
      if ( m_Value != this->m_nAttachment.m_Value )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1164, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_nAttachment.m_Value = m_Value;
      }
      CBaseEntity::FollowEntity(this, FollowedEntity, 1);
    }
  }
  else
  {
    v10 = this->m_hAttachedToEntity.m_Value.m_Index;
    if ( v10 + 2 > 1 )
    {
      v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAttachedToEntity.m_Value.m_Index) >> 9)
                                                           & 0x3F];
      if ( v11 != 0 )
      {
        v12 = &v11[this->m_hAttachedToEntity.m_Value.m_Index & 0x1FF];
        if ( v12 != 0 && v10 == v12->m_EHandle.m_Index && v12->m_pInstance != 0 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 1160, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_hAttachedToEntity.m_Value.m_Index = -1;
        }
      }
    }
    if ( this->m_nAttachment.m_Value != 0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1164, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_nAttachment.m_Value = 0;
    }
  }
}


// CSprite::SpriteCreate  (line 460, @0x00000000023e00a0, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, Add, AddKeyValue<Vector>, AddKeyValue<char const*>, AddToTail, AddToTailGetPtr, Allocate, Allocate<Vector>, Base, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CUtlString, CVProfScope, CopyData, CopyData<Vector>, Element, EnsureCapacity, EnterScope, ExitScope, FindKeyHash, Free, Get, GetClassInfo, GetEHandle, GetElapsed, GetEntityClass, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTimebaseRegister, InTargetThread, IndexToIdentity, Init, InvokeCallbacks, IsEmpty, IsEnabled, LeafCodeInfo_t, LookupEntity, OverrideAllocator, PLAT_CPU_TIME, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, SetSolid, SetValue, SetValue<Vector>, Spawn, V_strlen, memcpy, operator CEntityInstance*, operator CSprite*, operator!, operator(), operator=, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CMicroProfilerGuard, ~CUtlString, ~CVProfScope
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get, CEntitySystem::CreateEntity, CEntitySystem::QueueSpawnEntity, UTIL_SetSize, CBaseEntity::SetMoveType, CSprite::TurnOn, CUtlString::FreeMemoryBlock (34 total)
// callers: CGibShooter::InitPointGib, CEnvEffectsScript::SpriteEffectEvent, CEnvLaser::Spawn
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n", "Spawn", "Server Simulation", "../../public/tier1/utlleanvector.h", "AddToTailGetPtr", "%s allocation count overflow" (7 total)
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride, CEntityHandle::gm_pEntityList
CSprite *__fastcall CSprite::SpriteCreate(const char *pSpriteName, const Vector *const origin, bool animate)
{
  CEntitySystem *v5; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v7; // rdx
  char v8; // al
  CEntityKeyValues *m_pEntityKeyValues; // rbx
  int m_enabled; // r11d
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v12; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v14; // r15
  CEntityIdentity *m_pEntity; // rax
  __int16 v16; // si
  CEntitySpawnerContext<CSprite> *m_pContext; // rbx
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v20; // rdi
  CEntityIdentity *v21; // rax
  CSprite *m_pInstance; // r13
  CEntityIdentity *v23; // rax
  CUtlScratchMemoryPool *v24; // rdi
  CEntityKeyValues *v25; // rbx
  const char *m_pszClassname; // r15
  CEntityKeyValues *v29; // rbx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v30; // r8
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v31; // cx
  __int64 v32; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v33; // rdx
  unsigned __int64 v34; // rbx
  ThreadId_t v35; // r15
  uint64 v36; // rcx
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v38; // rbx
  uint64 m_numTimeBaseTicks; // rcx
  uint64 v40; // rcx
  CVProfNode *m_pParent; // rax
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v43; // cx
  __int64 v44; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v45; // rdx
  int m_nEntitySpawnerDataUseCount; // ecx
  __int16 v47; // dx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v50; // rax
  uint16 m_flags; // ax
  void *v52; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v53; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rbx
  int v57; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v58; // cx
  __int64 v59; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v60; // rdx
  __int16 v61; // r15
  unsigned __int64 v62; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v63; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v64; // rax
  __int64 v65; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v66; // r15
  uint16 v67; // ax
  vec_t *v68; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v69; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v70; // rdx
  __int64 v71; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v73; // rax
  unsigned __int64 v74; // rdx
  int v75; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v76; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v77; // rax
  uint16 v78; // ax
  void *v79; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v80; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rbx
  __int16 v84; // ax
  void *v85; // rax
  __int64 v86; // rbx
  __int16 v87; // ax
  vec_t *v88; // rax
  __int16 v89; // ax
  void *v90; // rax
  __int16 v91; // cx
  void *v92; // rcx
  unsigned __int64 v93; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v94; // rsi
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rdi
  __int64 v98; // rsi
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rdi
  __int64 v102; // rsi
  __int64 v103; // [rsp+20h] [rbp-150h]
  bool v104; // [rsp+28h] [rbp-148h]
  __int64 v105; // [rsp+28h] [rbp-148h]
  signed int v106; // [rsp+30h] [rbp-140h]
  signed int v107; // [rsp+30h] [rbp-140h]
  CEntityKeyValues *i; // [rsp+38h] [rbp-138h]
  __int64 v110; // [rsp+38h] [rbp-138h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v111; // [rsp+38h] [rbp-138h]
  __int64 v112; // [rsp+38h] [rbp-138h]
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v113; // [rsp+38h] [rbp-138h]
  __int64 v114; // [rsp+38h] [rbp-138h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v115; // [rsp+38h] [rbp-138h]
  signed int v116; // [rsp+38h] [rbp-138h]
  signed int v117; // [rsp+38h] [rbp-138h]
  int v118; // [rsp+40h] [rbp-130h]
  _QWORD v119[2]; // [rsp+50h] [rbp-120h] BYREF
  LeafCodeInfo_t v120; // [rsp+60h] [rbp-110h] BYREF
  LeafCodeInfo_t v121; // [rsp+80h] [rbp-F0h] BYREF
  CEntitySpawner<CSprite> spawner; // [rsp+A0h] [rbp-D0h] BYREF

  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner._vptr_CEntitySpawnerBase = off_40B1510;
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
  spawner.m_pEntityClass = g_pEntityCSpriteClass;
  if ( g_pApplication != 0 )
    v8 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v8 = 0;
  spawner.m_bValidateKeys = v8;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_4;
  m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_71:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    v47 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
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
    m_pElements[(m_pEntityKeyValues->m_keyHashes.m_nCount - 1)] = -926958586;
    v110 = v47;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v50 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v50 = 0;
    v105 = v110;
    v111 = &v50[v110];
    m_flags = v111->m_value.m_flags;
    if ( (m_flags & 1) != 0 )
      v111->m_value.m_flags = m_flags & 0xFFFE;
    v111->m_value.m_uint64 = 0;
    v111->m_value.m_type = 30;
    if ( pSpriteName != 0 )
    {
      v106 = strlen(pSpriteName) + 1;
      v52 = CEntityVariantAllocator::Allocate(v106);
      v111->m_value.m_uint64 = v52;
      memcpy(v52, pSpriteName, v106);
      v111->m_value.m_flags |= 1u;
    }
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v53 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v53 = 0;
    v53[v105].m_pAttributeName = 0;
  }
  else
  {
    v43 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v44 = 0;
    while ( 1 )
    {
      if ( v43 != 0 )
      {
        v45 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v43 > 9 )
          v45 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v45 = 0;
      }
      if ( v45[v44] == -926958586 )
        break;
      if ( m_nCount <= ++v44 )
        goto LABEL_71;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v54 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v55 = v44;
      v56 = &v54[v55];
      if ( v54[v55].m_pAttributeName != 0 )
      {
LABEL_85:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v54[v55].m_pAttributeName);
        goto LABEL_86;
      }
    }
    else
    {
      v55 = v44;
      v54 = 0;
      v56 = v55 * 24;
      if ( *(v55 * 24 + 16) != 0 )
        goto LABEL_85;
    }
    v84 = *(v56 + 10);
    if ( (v84 & 1) != 0 )
      *(v56 + 10) = v84 & 0xFFFE;
    *v56 = 0;
    *(v56 + 8) = 30;
    if ( pSpriteName != 0 )
    {
      v116 = strlen(pSpriteName) + 1;
      v85 = CEntityVariantAllocator::Allocate(v116);
      *v56 = v85;
      memcpy(v85, pSpriteName, v116);
      *(v56 + 10) |= 1u;
    }
  }
LABEL_86:
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
  {
LABEL_4:
    v118 = -1;
    goto LABEL_5;
  }
  v57 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v57 > 0 )
  {
    v58 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v59 = 0;
    while ( 1 )
    {
      if ( v58 != 0 )
      {
        v60 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v58 > 9 )
          v60 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v60 = 0;
      }
      if ( v60[v59] == -467664362 )
        break;
      if ( v57 <= ++v59 )
        goto LABEL_95;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v70 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v71 = v59;
      if ( v70[v71].m_pAttributeName != 0 )
      {
LABEL_107:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v70[v71].m_pAttributeName);
LABEL_108:
        m_pEntityKeyValues = spawner.m_pEntityKeyValues;
        goto LABEL_109;
      }
      v86 = &v70[v71];
    }
    else
    {
      v71 = v59;
      v70 = 0;
      v86 = v71 * 24;
      if ( *(v71 * 24 + 16) != 0 )
        goto LABEL_107;
    }
    v87 = *(v86 + 10);
    if ( (v87 & 1) != 0 )
      *(v86 + 10) = v87 & 0xFFFE;
    *v86 = 0;
    *(v86 + 8) = 3;
    v88 = CEntityVariantAllocator::Allocate(0xCu);
    *v86 = v88;
    *v88 = origin->x;
    v88[1] = origin->y;
    v88[2] = origin->z;
    *(v86 + 10) |= 1u;
    goto LABEL_108;
  }
LABEL_95:
  CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
  v61 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
  v62 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
  if ( v62 != 0 )
  {
    if ( v62 <= 9 )
      v63 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    else
      v63 = m_pEntityKeyValues->m_keyHashes.m_pElements;
  }
  else
  {
    v63 = 0;
  }
  v63[v61] = -467664362;
  CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
  if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    v64 = m_pEntityKeyValues->m_keyValues.m_pElements;
  else
    v64 = 0;
  v65 = v61;
  v66 = &v64[v65];
  v112 = v65 * 24;
  v67 = v64[v65].m_value.m_flags;
  if ( (v67 & 1) != 0 )
    v66->m_value.m_flags = v67 & 0xFFFE;
  v66->m_value.m_uint64 = 0;
  v66->m_value.m_type = 3;
  v68 = CEntityVariantAllocator::Allocate(0xCu);
  v66->m_value.m_uint64 = v68;
  *v68 = origin->x;
  v68[1] = origin->y;
  v68[2] = origin->z;
  v66->m_value.m_flags |= 1u;
  if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    v69 = m_pEntityKeyValues->m_keyValues.m_pElements;
  else
    v69 = 0;
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  *(&v69->m_pAttributeName + v112) = 0;
LABEL_109:
  v118 = -1;
  m_pInstance = 0;
  if ( m_pEntityKeyValues == 0 )
    goto LABEL_26;
LABEL_5:
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v104 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v38 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "Spawn" )
      {
        m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "Spawn", 0, "Server Simulation", 4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v73 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v73->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    v40 = m_numTimeBaseTicks - v38;
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v40 + __rdtsc();
  }
  if ( CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790) )
    goto LABEL_7;
  m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
  if ( m_pszClassname == 0 )
    goto LABEL_7;
  v29 = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_7;
  v30 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( spawner.m_pEntityKeyValues->m_keyHashes.m_nCount <= 0 )
  {
LABEL_116:
    if ( v30 == 0x7FFF )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        goto LABEL_177;
      while ( 1 )
      {
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v97, v98, v95, v96) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
LABEL_177:
        v120.m_szFile = "../../public/tier1/utlleanvector.h";
        v120.m_szFunction = "AddToTailGetPtr";
        v120.m_nLine = 557;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v120,
          "%s allocation count overflow",
          "AddToTailGetPtr");
      }
    }
    v74 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v75 = v30 + 1;
    if ( v75 > v74 )
    {
      if ( v75 > 9 )
      {
        if ( v30 == 0x7FFF )
        {
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
            goto LABEL_182;
          while ( 1 )
          {
            if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v101, v102, v99, v100) != 0 )
              loc_0 = -559038737;
            Plat_ExitProcess(1);
LABEL_182:
            v121.m_szFile = "../../public/tier1/utlleanvector.h";
            v121.m_szFunction = "EnsureCapacity";
            v121.m_nLine = 104;
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &v121,
              "%s allocation count overflow",
              "EnsureCapacity");
          }
        }
        v113 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
        while ( v75 > v113 )
        {
          if ( v113 > 16382 )
          {
            v113 = 0x7FFF;
          }
          else
          {
            v91 = 2 * v113;
            if ( 2 * v113 <= 7 )
              v91 = 8;
            v113 = v91;
          }
        }
      }
      else
      {
        v113 = v30 + 1;
      }
      if ( v74 > 9 )
      {
        v29->m_keyHashes.m_pElements = (*(*g_pMemAlloc + 8LL))(
                                         g_pMemAlloc,
                                         spawner.m_pEntityKeyValues->m_keyHashes.m_pElements,
                                         4LL * v113);
        v30 = v29->m_keyHashes.m_nCount;
      }
      else if ( v113 > 9 )
      {
        v92 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v113);
        v93 = v29->m_keyHashes.m_nAllocated;
        if ( v93 != 0 )
        {
          v94 = (&v29->m_keyHashes.m_nAllocAllocated + 1);
          if ( v93 > 9 )
            v94 = v29->m_keyHashes.m_pElements;
        }
        else
        {
          v94 = 0;
        }
        v29->m_keyHashes.m_pElements = memcpy(v92, v94, 4LL * v29->m_keyHashes.m_nCount);
        v30 = v29->m_keyHashes.m_nCount;
      }
      v29->m_keyHashes.m_nAllocated = v113;
      v74 = v113;
    }
    v29->m_keyHashes.m_nCount = v30 + 1;
    if ( v74 != 0 )
    {
      v76 = (&v29->m_keyHashes.m_nAllocAllocated + 1);
      if ( v74 > 9 )
        v76 = v29->m_keyHashes.m_pElements;
    }
    else
    {
      v76 = 0;
    }
    v76[v30] = -971301790;
    v114 = v30;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v29->m_keyValues);
    if ( v29->m_keyValues.m_nAllocated != 0 )
      v77 = v29->m_keyValues.m_pElements;
    else
      v77 = 0;
    v103 = v114;
    v115 = &v77[v114];
    v78 = v115->m_value.m_flags;
    if ( (v78 & 1) != 0 )
      v115->m_value.m_flags = v78 & 0xFFFE;
    v115->m_value.m_uint64 = 0;
    v115->m_value.m_type = 30;
    v107 = strlen(m_pszClassname) + 1;
    v79 = CEntityVariantAllocator::Allocate(v107);
    v115->m_value.m_uint64 = v79;
    memcpy(v79, m_pszClassname, v107);
    v115->m_value.m_flags |= 1u;
    if ( v29->m_keyValues.m_nAllocated != 0 )
      v80 = v29->m_keyValues.m_pElements;
    else
      v80 = 0;
    v80[v103].m_pAttributeName = 0;
    goto LABEL_7;
  }
  v31 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
  v32 = 0;
  while ( 1 )
  {
    if ( v31 != 0 )
    {
      v33 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
      if ( v31 > 9 )
        v33 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
    }
    else
    {
      v33 = 0;
    }
    if ( v33[v32] == -971301790 )
      break;
    if ( v30 <= ++v32 )
      goto LABEL_116;
  }
  if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated == 0 )
  {
    v82 = v32;
    v81 = 0;
    v83 = v82 * 24;
    if ( *(v82 * 24 + 16) != 0 )
      goto LABEL_135;
LABEL_146:
    v89 = *(v83 + 10);
    if ( (v89 & 1) != 0 )
      *(v83 + 10) = v89 & 0xFFFE;
    *v83 = 0;
    *(v83 + 8) = 30;
    v117 = strlen(m_pszClassname) + 1;
    v90 = CEntityVariantAllocator::Allocate(v117);
    *v83 = v90;
    memcpy(v90, m_pszClassname, v117);
    *(v83 + 10) |= 1u;
    goto LABEL_7;
  }
  v81 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
  v82 = v32;
  v83 = &v81[v82];
  if ( v81[v82].m_pAttributeName == 0 )
    goto LABEL_146;
LABEL_135:
  Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v81[v82].m_pAttributeName);
LABEL_7:
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  m_nMode = spawner.m_nMode;
  v12 = CUtlString::Get(&spawner.m_scriptClassName);
  Entity = CEntitySystem::CreateEntity(
             g_pEntitySystem,
             spawner.m_hSpawnGroupHandle,
             spawner.m_pEntityClass,
             v12,
             m_nMode,
             -1,
             -1,
             0,
             0);
  v14 = Entity;
  if ( Entity != 0 )
  {
    m_pEntity = Entity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v16 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v118 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v16 & 0x7FFF;
    }
    else
    {
      v118 = -1;
    }
    v119[0] = m_pEntity;
    v119[1] = spawner.m_pEntityKeyValues;
    (*(*g_pGameResourceService + 280LL))(
      g_pGameResourceService,
      spawner.m_hSpawnGroupHandle,
      1,
      v119,
      &spawner.m_mSpawnGroupToWorld);
    CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v14, spawner.m_pEntityKeyValues);
    if ( spawner.m_pSpawnBatch == 0 )
      CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
    m_pContext = spawner.m_pContext;
    for ( i = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
    {
      m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
      pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
      if ( m_pthis != 0 || pfn != 0 )
      {
        v20 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
        if ( (pfn & 1) != 0 )
          pfn = *(pfn + *v20 - 1);
        (pfn)(v20, v14, i);
      }
    }
  }
  if ( v104 )
  {
    v34 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      v35 = g_VProfCurrentProfile.m_TargetThreadId;
      if ( v35 == ThreadGetCurrentId() )
      {
        if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
          if ( m_pParent != 0 )
            g_VProfCurrentProfile.m_pCurNode = m_pParent;
          else
            m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        else
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
      }
    }
    v36 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v36 - v34 + __rdtsc();
  }
  if ( (v118 + 2) > 1 && (v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v118 >> 9) & 0x3F]) != 0 )
  {
    m_pInstance = 0;
    v23 = &v21[v118 & 0x1FF];
    if ( v23 != 0 && v118 == v23->m_EHandle.m_Index )
      m_pInstance = v23->m_pInstance;
  }
  else
  {
    m_pInstance = 0;
  }
LABEL_26:
  (*(m_pInstance->m_Collision._vptr_ICollideable + 26))(&m_pInstance->m_Collision, 0);
  UTIL_SetSize(m_pInstance, &vec3_origin, &vec3_origin);
  CBaseEntity::SetMoveType(m_pInstance, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  if ( animate )
    CSprite::TurnOn(m_pInstance);
  v24 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  spawner._vptr_CEntitySpawnerBase = off_40B14F0;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v24 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v24);
  }
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v25 = spawner.m_pEntityKeyValues;
    if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v25);
      operator delete(v25);
    }
  }
  if ( spawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  return m_pInstance;
}


// CSprite::AnimateThink  (line 480, @0x00000000023c3870, libserver.so)  // inlines: curtime
// calls: CSprite::Animate, CBaseEntity::SetNextThink
// callers: CSprite::AnimateUntilDead
void __fastcall CSprite::AnimateThink(CSprite *const this)
{
  float m_flCurrentTime; // xmm0_4
  float m_Value; // xmm1_4
  CGlobalVars *v4; // r12
  double v5; // xmm1_8
  CGlobalVars *v6; // r12
  double v7; // xmm0_8
  CGlobalVars *v8; // r12
  float v9; // xmm0_4
  FnGlobalVarsWarningFunc v10; // rax
  FnGlobalVarsWarningFunc v11; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v13; // [rsp-24h] [rbp-2Ch]

  m_flCurrentTime = 0.0;
  m_Value = this->m_flSpriteFramerate.m_Value;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v13 = this->m_flSpriteFramerate.m_Value;
        (m_pfnWarningFunc)(1, 0.0);
        m_Value = v13;
      }
    }
    m_flCurrentTime = v4->m_flCurrentTime;
  }
  CSprite::Animate(this, (m_flCurrentTime - this->m_flLastTime) * m_Value, m_Value);
  v6 = gpGlobals;
  v7 = 0.0;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v11 = gpGlobals->m_pfnWarningFunc;
      if ( v11 != 0 )
        (v11)(1, 0.0);
    }
    *&v7 = LODWORD(v6->m_flCurrentTime);
  }
  CBaseEntity::SetNextThink(this, v7, v5, 0);
  v8 = gpGlobals;
  v9 = 0.0;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v10 = gpGlobals->m_pfnWarningFunc;
      if ( v10 != 0 )
        (v10)(1, 0.0);
    }
    v9 = v8->m_flCurrentTime;
  }
  this->m_flLastTime = v9;
}


// CSprite::AnimateUntilDead  (line 491, @0x00000000023c3990, libserver.so)  // inlines: curtime
// calls: CSprite::AnimateThink, CBaseEntity::SetNextThink, UTIL_Remove
void __fastcall CSprite::AnimateUntilDead(CSprite *const this)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v3; // rbx
  double v4; // xmm1_8
  CGlobalVars *v5; // rbx
  double v6; // xmm0_8
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  FnGlobalVarsWarningFunc v8; // rax

  m_flCurrentTime = 0.0;
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v3->m_flCurrentTime;
  }
  if ( m_flCurrentTime > this->m_flDieTime )
  {
    UTIL_Remove(this);
  }
  else
  {
    CSprite::AnimateThink(this);
    v5 = gpGlobals;
    v6 = 0.0;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v8 = gpGlobals->m_pfnWarningFunc;
        if ( v8 != 0 )
          (v8)(1, 0.0);
      }
      *&v6 = LODWORD(v5->m_flCurrentTime);
    }
    CBaseEntity::SetNextThink(this, v6, v4, 0);
  }
}


// CSprite::Expand  (line 509, @0x00000000023c3300, libserver.so)  // inlines: curtime
// calls: CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// globals: CSprite::ExpandThink(void)
void __fastcall CSprite::Expand(CSprite *const this, double a2, float scaleSpeed, float fadeSpeed)
{
  double v5; // xmm1_8
  double v6; // xmm0_8
  CGlobalVars *v7; // r12
  CGlobalVars *v8; // r12
  float m_flCurrentTime; // xmm0_4
  FnGlobalVarsWarningFunc v10; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  this->m_flSpeed = *&a2;
  (*(this->_vptr_IHandleEntity + 157))(this, scaleSpeed, a2, scaleSpeed, fadeSpeed);
  CBaseEntity::ThinkSet(this, CSprite::ExpandThink, 0.0, 0, 0);
  v6 = 0.0;
  v7 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v6 = LODWORD(v7->m_flCurrentTime);
  }
  CBaseEntity::SetNextThink(this, v6, v5, 0);
  v8 = gpGlobals;
  m_flCurrentTime = 0.0;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v10 = gpGlobals->m_pfnWarningFunc;
      if ( v10 != 0 )
        (v10)(1, 0.0);
    }
    m_flCurrentTime = v8->m_flCurrentTime;
  }
  this->m_flLastTime = m_flCurrentTime;
}


// CSprite::ExpandThink  (line 522, @0x00000000023c34f0, libserver.so)  // inlines: curtime
// calls: CSprite::SetSpriteScale, CBaseEntity::GetHealth, CBaseModelEntity::GetRenderAlpha, CBaseModelEntity::SetRenderAlpha, CBaseEntity::SetNextThink, UTIL_Remove
void __fastcall CSprite::ExpandThink(CSprite *const this)
{
  double v1; // xmm0_8
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v4; // r12
  int v5; // r12d
  uint8 RenderAlpha; // al
  double v7; // xmm1_8
  CGlobalVars *v8; // r12
  double v9; // xmm0_8
  CGlobalVars *v10; // r12
  float v11; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  FnGlobalVarsWarningFunc v13; // rax
  FnGlobalVarsWarningFunc v14; // rax
  float frametime; // [rsp+0h] [rbp-2Ch]

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
  frametime = m_flCurrentTime - this->m_flLastTime;
  CSprite::SetSpriteScale(this, (frametime * this->m_flSpeed) + this->m_flSpriteScale.m_Value, frametime);
  v5 = (CBaseEntity::GetHealth(this) * frametime);
  if ( v5 > CBaseModelEntity::GetRenderAlpha(this) )
  {
    CBaseModelEntity::SetRenderAlpha(this, 0);
    UTIL_Remove(this);
  }
  else
  {
    RenderAlpha = CBaseModelEntity::GetRenderAlpha(this);
    CBaseModelEntity::SetRenderAlpha(this, RenderAlpha - v5);
    v8 = gpGlobals;
    v9 = 0.0;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v14 = gpGlobals->m_pfnWarningFunc;
        if ( v14 != 0 )
          (v14)(1, 0.0);
      }
      *&v9 = LODWORD(v8->m_flCurrentTime);
    }
    CBaseEntity::SetNextThink(this, v9, v7, 0);
    v10 = gpGlobals;
    v11 = 0.0;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v13 = gpGlobals->m_pfnWarningFunc;
        if ( v13 != 0 )
          (v13)(1, 0.0);
      }
      v11 = v10->m_flCurrentTime;
    }
    this->m_flLastTime = v11;
  }
}


// CSprite::Animate  (line 545, @0x00000000023c3740, libserver.so)  // inlines: NetworkStateChanged, Set, operator+=<float>, operator=<double>
// calls: CSprite::TurnOff, fmod
// callers: CSprite::AnimateThink
void __fastcall CSprite::Animate(CSprite *const this, float a2, float frames)
{
  float m_Value; // xmm1_4
  float v5; // xmm0_4
  float m_flMaxFrame; // xmm2_4
  long double v7; // fst6
  char v9; // c2
  float v10; // xmm0_4
  float ya; // [rsp+10h] [rbp-20h]
  float y; // [rsp+10h] [rbp-20h]

  m_Value = this->m_flFrame.m_Value;
  v5 = a2 + m_Value;
  if ( m_Value != v5 )
  {
    y = v5;
    (*(this->_vptr_IHandleEntity + 22))(this, 1172, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flFrame.m_Value = y;
    m_Value = y;
  }
  m_flMaxFrame = this->m_flMaxFrame;
  if ( m_Value > m_flMaxFrame )
  {
    if ( (this->m_spawnflags.m_Value & 2) != 0 )
    {
      CSprite::TurnOff(this);
    }
    else if ( m_flMaxFrame > 0.0 )
    {
      v7 = m_Value;
      do
        v7 = __FPREM__(v7, m_flMaxFrame);
      while ( v9 != 0 );
      v10 = v7;
      if ( v10 != this->m_flFrame.m_Value )
      {
        ya = v7;
        (*(this->_vptr_IHandleEntity + 22))(this, 1172, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_flFrame.m_Value = ya;
      }
    }
  }
}


// CSprite::SetBrightness  (line 569, @0x00000000023c33e0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>, operator=<int>
// callers: CGibShooter::InitPointGib, CEnvEffectsScript::SpriteEffectEvent, CEnvEffectsScript::HandleAnimEvent, CEnvLaser::Spawn, CGib::DieThink, CGib::WaitTillLand, CSprite::BeginFadeOutThink, CSprite::PreFirstNetworkUpdate, CSprite::Spawn
void __fastcall CSprite::SetBrightness(CSprite *const this, unsigned int brightness, double a3, double time)
{
  unsigned int timea; // [rsp+Ch] [rbp-14h]
  float timeb; // [rsp+Ch] [rbp-14h]

  if ( brightness != this->m_nBrightness.m_Value )
  {
    timea = LODWORD(a3);
    (*(this->_vptr_IHandleEntity + 22))(this, 1192, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a3, *&time);
    *&a3 = timea;
    this->m_nBrightness.m_Value = brightness;
  }
  if ( *&a3 != this->m_flBrightnessTime.m_Value )
  {
    timeb = *&a3;
    (*(this->_vptr_IHandleEntity + 22))(this, 1196, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a3, time);
    this->m_flBrightnessTime.m_Value = timeb;
  }
}


// CSprite::SetSpriteScale  (line 578, @0x00000000023c3480, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
// callers: CSprite::ExpandThink, CSprite::SetScale
void __fastcall CSprite::SetSpriteScale(CSprite *const this, float a2, float scale)
{
  int (**vptr_ICollideable)(...); // rax

  if ( a2 != this->m_flSpriteScale.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1200, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    vptr_ICollideable = this->m_Collision._vptr_ICollideable;
    this->m_flSpriteScale.m_Value = a2;
    vptr_ICollideable[25](&this->m_Collision);
  }
}


// CSprite::SetScale  (line 588, @0x00000000023c3690, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
// calls: CSprite::SetSpriteScale
// callers: CGibShooter::InitPointGib, CEnvEffectsScript::SpriteEffectEvent, CSprite::PreFirstNetworkUpdate, CSprite::Spawn
void __fastcall CSprite::SetScale(CSprite *const this, double a2, float scale, float time)
{
  float scalea; // [rsp+Ch] [rbp-14h]

  if ( scale == this->m_flScaleTime.m_Value )
  {
    CSprite::SetSpriteScale(this, *&a2, scale);
  }
  else
  {
    scalea = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 1204, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, scale, time);
    this->m_flScaleTime.m_Value = scale;
    CSprite::SetSpriteScale(this, scalea, scale);
  }
}


// CSprite::TurnOff  (line 599, @0x00000000023c3700, libserver.so)
// calls: CBaseEntity::AddEffects, CBaseEntity::SetNextThink
// callers: CEnvLaser::TurnOff, CSprite::InputHideSprite, CSprite::Animate, CSprite::Use, CSprite::InputToggleSprite, CSprite::Spawn
void __fastcall CSprite::TurnOff(CSprite *const this)
{
  double v2; // xmm1_8

  CBaseEntity::AddEffects(this, 32);
  CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v2, 0);
}


// CSprite::TurnOn  (line 608, @0x00000000023c3a50, libserver.so)  // inlines: MarkPVSInformationDirty, NetworkStateChanged, RemoveEffects, Set, curtime, operator=<int>
// calls: CBaseEntity::DispatchUpdateTransmitState, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// callers: CEnvEffectsScript::SpriteEffectEvent, CEnvLaser::TurnOn, CSprite::Use, CSprite::InputShowSprite, CSprite::InputToggleSprite, CSprite::PreFirstNetworkUpdate, CSprite::SpriteCreate, CSprite::Spawn
// globals: CSprite::AnimateThink(void)
void __fastcall CSprite::TurnOn(CSprite *const this)
{
  double v2; // xmm1_8
  CGlobalVars *v3; // r12
  double v4; // xmm0_8
  CGlobalVars *v5; // r12
  float m_flCurrentTime; // xmm0_4
  FnGlobalVarsWarningFunc v7; // rax
  bool v8; // zf
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFFDF);
  this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(this);
  if ( this->m_flSpriteFramerate.m_Value != 0.0 && this->m_flMaxFrame > 1.0 || (this->m_spawnflags.m_Value & 2) != 0 )
  {
    CBaseEntity::ThinkSet(this, CSprite::AnimateThink, 0.0, 0, 0);
    v3 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      *&v4 = LODWORD(v3->m_flCurrentTime);
    }
    else
    {
      v4 = 0.0;
    }
    CBaseEntity::SetNextThink(this, v4, v2, 0);
    v5 = gpGlobals;
    m_flCurrentTime = 0.0;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v7 = gpGlobals->m_pfnWarningFunc;
        if ( v7 != 0 )
          (v7)(1, 0.0);
      }
      m_flCurrentTime = v5->m_flCurrentTime;
    }
    v8 = this->m_flFrame.m_Value == 0.0;
    this->m_flLastTime = m_flCurrentTime;
  }
  else
  {
    v8 = this->m_flFrame.m_Value == 0.0;
  }
  if ( !v8 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1172, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flFrame.m_Value = 0.0;
  }
}


// CSprite::Use  (line 626, @0x00000000023c3be0, libserver.so)
// calls: CBaseEntity::ShouldToggle, CSprite::TurnOn, CSprite::TurnOff
void __fastcall CSprite::Use(
        CSprite *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  int v6; // ebx

  v6 = ((this->m_fEffects.m_Value >> 5) ^ 1) & 1;
  if ( CBaseEntity::ShouldToggle(this, useType, v6) != 0 )
  {
    if ( v6 != 0 )
      CSprite::TurnOff(this);
    else
      CSprite::TurnOn(this);
  }
}


// CSprite::InputHideSprite  (line 645, @0x00000000023c3730, libserver.so)
// calls: CSprite::TurnOff
void __fastcall CSprite::InputHideSprite(CSprite *const this, inputdata_t *const inputdata)
{
  CSprite::TurnOff(this);
}


// CSprite::InputShowSprite  (line 654, @0x00000000023c3c40, libserver.so)
// calls: CSprite::TurnOn
void __fastcall CSprite::InputShowSprite(CSprite *const this, inputdata_t *const inputdata)
{
  CSprite::TurnOn(this);
}


// CSprite::InputColorRedValue  (line 659, @0x00000000023c0310, libserver.so)  // inlines: Float, Init, NetworkStateChanged, SetAlpha, SetBlue, SetColor, SetComponent, SetGreen, SetRed, SetRenderColor, SetVal, a, b, g, operator float
void __fastcall CSprite::InputColorRedValue(CSprite *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  int v4; // r12d
  unsigned __int8 v5; // r14
  unsigned __int8 v6; // r15
  unsigned __int8 v7; // r13
  bool v8; // zf

  if ( inputdata->value.m_type == 34 )
  {
    LOBYTE(v4) = -1;
    m_float64 = inputdata->value.m_float64;
    if ( m_float64 <= 255.0 )
    {
      LOBYTE(v4) = 0;
      if ( m_float64 >= 0.0 )
        goto LABEL_4;
    }
  }
  else
  {
    m_float64 = inputdata->value.m_float;
    LOBYTE(v4) = -1;
    if ( m_float64 <= 255.0 )
    {
      LOBYTE(v4) = 0;
      if ( m_float64 >= 0.0 )
LABEL_4:
        v4 = m_float64;
    }
  }
  v5 = this->m_clrRender.m_Value._color[2];
  v6 = this->m_clrRender.m_Value._color[1];
  v7 = this->m_clrRender.m_Value._color[3];
  if ( v4 != this->m_clrRender.m_Value._color[0] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v8 = this->m_clrRender.m_Value._color[1] == v6;
    this->m_clrRender.m_Value._color[0] = v4;
    if ( !v8 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_clrRender.m_Value._color[1] = v6;
    }
  }
  if ( v5 != this->m_clrRender.m_Value._color[2] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[2] = v5;
  }
  if ( v7 != this->m_clrRender.m_Value._color[3] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[3] = v7;
  }
}


// CSprite::InputColorGreenValue  (line 665, @0x00000000023c0200, libserver.so)  // inlines: Float, Init, NetworkStateChanged, SetAlpha, SetBlue, SetColor, SetComponent, SetGreen, SetRenderColor, SetVal, a, b, operator float
void __fastcall CSprite::InputColorGreenValue(CSprite *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  int v4; // r12d
  unsigned __int8 v5; // r14
  unsigned __int8 v6; // r13
  bool v7; // zf

  if ( inputdata->value.m_type == 34 )
  {
    LOBYTE(v4) = -1;
    m_float64 = inputdata->value.m_float64;
    if ( m_float64 <= 255.0 )
    {
      LOBYTE(v4) = 0;
      if ( m_float64 >= 0.0 )
        goto LABEL_4;
    }
  }
  else
  {
    m_float64 = inputdata->value.m_float;
    LOBYTE(v4) = -1;
    if ( m_float64 <= 255.0 )
    {
      LOBYTE(v4) = 0;
      if ( m_float64 >= 0.0 )
LABEL_4:
        v4 = m_float64;
    }
  }
  v5 = this->m_clrRender.m_Value._color[2];
  v6 = this->m_clrRender.m_Value._color[3];
  if ( v4 != this->m_clrRender.m_Value._color[1] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v7 = v5 == this->m_clrRender.m_Value._color[2];
    this->m_clrRender.m_Value._color[1] = v4;
    if ( !v7 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_clrRender.m_Value._color[2] = v5;
    }
  }
  if ( v6 != this->m_clrRender.m_Value._color[3] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[3] = v6;
  }
}


// CSprite::InputColorBlueValue  (line 671, @0x00000000023c0460, libserver.so)  // inlines: Float, Init, NetworkStateChanged, SetAlpha, SetBlue, SetColor, SetComponent, SetRenderColor, SetVal, a, operator float
void __fastcall CSprite::InputColorBlueValue(CSprite *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  int v4; // r12d
  unsigned __int8 v5; // r13

  if ( inputdata->value.m_type == 34 )
  {
    LOBYTE(v4) = -1;
    m_float64 = inputdata->value.m_float64;
    if ( m_float64 <= 255.0 )
    {
      LOBYTE(v4) = 0;
      if ( m_float64 >= 0.0 )
        goto LABEL_4;
    }
  }
  else
  {
    m_float64 = inputdata->value.m_float;
    LOBYTE(v4) = -1;
    if ( m_float64 <= 255.0 )
    {
      LOBYTE(v4) = 0;
      if ( m_float64 >= 0.0 )
LABEL_4:
        v4 = m_float64;
    }
  }
  v5 = this->m_clrRender.m_Value._color[3];
  if ( v4 != this->m_clrRender.m_Value._color[2] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[2] = v4;
  }
  if ( v5 != this->m_clrRender.m_Value._color[3] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[3] = v5;
  }
}


// CSprite::InputToggleSprite  (line 680, @0x00000000023c3c50, libserver.so)
// calls: CSprite::TurnOn, CSprite::TurnOff
void __fastcall CSprite::InputToggleSprite(CSprite *const this, inputdata_t *const inputdata)
{
  if ( (this->m_fEffects.m_Value & 0x20) != 0 )
    CSprite::TurnOn(this);
  else
    CSprite::TurnOff(this);
}


// CSpriteOriented::YouForgotToImplementOrDeclareServerClass  (line 1072, @0x00000000023bae00, libserver.so)
int __fastcall CSpriteOriented::YouForgotToImplementOrDeclareServerClass(CSpriteOriented *const this)
{
  return 0;
}


// CSpriteOriented::GetServerClass  (line 1072, @0x00000000023c2d80, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CSpriteOriented::GetServerClass(CSpriteOriented *const this)
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


// CSpriteOriented::Spawn  (line 1087, @0x00000000023e2d80, libserver.so)  // inlines: anglemod
// calls: CBaseEntity::GetAbsAngles, CSprite::Spawn, CBaseEntity::SetAbsAngles
void __fastcall CSpriteOriented::Spawn(CSpriteOriented *const this, const CEntityKeyValues *pKeyValues)
{
  QAngle angles; // [rsp+0h] [rbp-20h] BYREF

  angles = *CBaseEntity::GetAbsAngles(this);
  CSprite::Spawn(this, pKeyValues);
  angles.y = ((angles.y + 180.0) * 182.04445) * 0.0054931641;
  CBaseEntity::SetAbsAngles(this, &angles);
}


// CSprite::YouForgotToImplementOrDeclareServerClass  (line 1099, @0x00000000023bae10, libserver.so)
int __fastcall CSprite::YouForgotToImplementOrDeclareServerClass(CSprite *const this)
{
  return 0;
}


// CSprite::GetServerClass  (line 1099, @0x00000000023c2f40, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CSprite::GetServerClass(CSprite *const this)
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


