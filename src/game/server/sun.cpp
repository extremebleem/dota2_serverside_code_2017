// Reconstructed from DWARF by pahole; not original source.

// src/game/server/sun.cpp:12
class CSun : public CBaseModelEntity {
	class NetworkVar_m_vDirection {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_clrOverlay {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bOn {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nSize {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nOverlaySize {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nMaterial {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nOverlayMaterial {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flHDRColorScale {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	string_t m_strMaterial;  // +0x490
	string_t m_strOverlayMaterial;  // +0x498
	int m_bUseAngles;  // +0x4a0

	typedef CBaseModelEntity BaseClass;
	typedef CSun ThisClass;

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
	CSun(CSun &);
	CSun(CSun &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CSun();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Activate(ActivateType_t);
	void InputTurnOn(inputdata_t &);
	void InputTurnOff(inputdata_t &);
	void InputSetColor(inputdata_t &);
	virtual int UpdateTransmitState();
	void SetupLightNormalFromProps(const QAngle &, float, float, Vector &);
	virtual ~CSun();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[10] Activate
	// vtable[64] UpdateTransmitState
	// sizeof = 1232
};

// src/game/server/sun.cpp:57
class C_CSun_MapInstall {
	C_CSun_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSun::~CSun  (line 12, @0x00000000023f7970, libserver.so)  // inlines: ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity
void __fastcall CSun::~CSun(CSun *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>,CSun::NetworkVar_m_nOverlayMaterial> *p_m_nOverlayMaterial; // rdi

  p_m_nOverlayMaterial = &this->m_nOverlayMaterial;
  p_m_nOverlayMaterial[-152].m_Value.m_pBinding = &off_40B4CB0;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&p_m_nOverlayMaterial->m_Value);
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&this->m_nMaterial.m_Value);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CSun::~CSun  (line 12, @0x00000000023f79e0, libserver.so)  // inlines: ~CNetworkVarBase, ~CStrongHandle, ~CSun
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CSun::~CSun(CSun *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>,CSun::NetworkVar_m_nOverlayMaterial> *p_m_nOverlayMaterial; // rdi

  p_m_nOverlayMaterial = &this->m_nOverlayMaterial;
  p_m_nOverlayMaterial[-152].m_Value.m_pBinding = &off_40B4CB0;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&p_m_nOverlayMaterial->m_Value);
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&this->m_nMaterial.m_Value);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CSun::GetEntityClass  (line 15, @0x00000000023e5640, libserver.so)
CEntityClass *__cdecl CSun::GetEntityClass()
{
  return g_pEntityCSunClass;
}


// CSun::Schema_DynamicBinding  (line 15, @0x00000000023e5650, libserver.so)
// globals: CSun::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CSun::Schema_DynamicBinding(const CSun *const this)
{
  return CSun::s_pSchemaBinding;
}


// CSun::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 15, @0x00000000023e5660, libserver.so)
// globals: CSun::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CSun::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CSun::CEntityInstanceEntityClass *const this)
{
  return CSun::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CSun::CEntityInstanceEntityClass::DestructInstance  (line 15, @0x00000000023e5670, libserver.so)  // inlines: Destruct<CSun>
void __fastcall CSun::CEntityInstanceEntityClass::DestructInstance(
        CSun::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CSun::CEntityInstanceEntityClass::FreeInstance  (line 15, @0x00000000023e5690, libserver.so)
void __fastcall CSun::CEntityInstanceEntityClass::FreeInstance(CSun::CEntityInstanceEntityClass *const this, void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CSun::CEntityInstanceEntityClass::CanAllocate  (line 15, @0x00000000023e56b0, libserver.so)
bool __fastcall CSun::CEntityInstanceEntityClass::CanAllocate(const CSun::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CSun::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 15, @0x00000000023e56c0, libserver.so)
// globals: CSun::s_pSchemaBinding
const ISchemaBinding *__fastcall CSun::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CSun::CEntityInstanceEntityClass *const this)
{
  return CSun::s_pSchemaBinding;
}


// CSun::CEntityInstanceEntityClass::AllocateInstance  (line 15, @0x00000000023e7f30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CSun::CEntityInstanceEntityClass::AllocateInstance(CSun::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1232);
  memset(v1, 0, 0x4D0u);
  return v1;
}


// CSun::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 15, @0x00000000023ea830, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CSun::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CSun::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CSun::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 15, @0x00000000023ea850, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CSun::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CSun::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CSun::GetEntityClassInternal  (line 15, @0x00000000023ef000, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "env_sun", "CSun"
// globals: `guard variable for'CSun::GetEntityClassInternal(void)::g_EntityCSunClass, CSun::GetEntityClassInternal(void)::g_EntityCSunClass, __dso_handle, CSun::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CSun::GetEntityClassInfo(void)::g_EntityCSunClassInfo, CSun::GetEntityClassInfo(void)::g_EntityCSunClassInfo
CEntityClass *__cdecl CSun::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CSun::GetEntityClassInternal(void)::g_EntityCSunClass == 0
    && __cxa_guard_acquire(&`guard variable for'CSun::GetEntityClassInternal(void)::g_EntityCSunClass) != 0 )
  {
    CEntityClass::CEntityClass(&CSun::GetEntityClassInternal(void)::g_EntityCSunClass);
    CSun::GetEntityClassInternal(void)::g_EntityCSunClass._vptr_CEntityClass = off_40B4C30;
    __cxa_guard_release(&`guard variable for'CSun::GetEntityClassInternal(void)::g_EntityCSunClass);
    __cxa_atexit(
      CSun::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CSun::GetEntityClassInternal(void)::g_EntityCSunClass,
      &_dso_handle);
  }
  if ( g_pEntityCSunClass != 0 )
    return &CSun::GetEntityClassInternal(void)::g_EntityCSunClass;
  if ( `guard variable for'CSun::GetEntityClassInfo(void)::g_EntityCSunClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CSun::GetEntityClassInfo(void)::g_EntityCSunClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CSun::GetEntityClassInfo(void)::g_EntityCSunClassInfo,
      "CSun",
      "env_sun",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CSun::GetEntityClassInfo(void)::g_EntityCSunClassInfo);
  }
  CSun::GetEntityClassInternal(void)::g_EntityCSunClass.m_pClassInfo = &CSun::GetEntityClassInfo(void)::g_EntityCSunClassInfo;
  CSun::GetEntityClassInternal(void)::g_EntityCSunClass.m_pBaseClassInfo = CSun::GetEntityClassInfo(void)::g_EntityCSunClassInfo.m_pBaseClassInfo;
  g_pEntityCSunClass = &CSun::GetEntityClassInternal(void)::g_EntityCSunClass;
  CSun::GetEntityClassInfo(void)::g_EntityCSunClassInfo.m_pClass = &CSun::GetEntityClassInternal(void)::g_EntityCSunClass;
  CSun::GetEntityClassInternal(void)::g_EntityCSunClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCSunClass->m_pComponentOverrides = 0;
  return &CSun::GetEntityClassInternal(void)::g_EntityCSunClass;
}


// CSun::CEntityInstanceEntityClass::ConstructInstance  (line 15, @0x00000000023f79b0, libserver.so)  // inlines: Construct<CSun>
// calls: CSun::CSun
CEntityInstance *__fastcall CSun::CEntityInstanceEntityClass::ConstructInstance(
        CSun::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CSun::CSun(p);
  return p;
}


// CSun::YouForgotToImplementOrDeclareServerClass  (line 57, @0x00000000023baea0, libserver.so)
int __fastcall CSun::YouForgotToImplementOrDeclareServerClass(CSun *const this)
{
  return 0;
}


// CSun::GetServerClass  (line 57, @0x00000000023c2e00, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CSun::GetServerClass(CSun *const this)
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


// CSun::GetDataDescMap  (line 60, @0x00000000023baeb0, libserver.so)
// globals: CSun::m_DataMap
datamap_t *__fastcall CSun::GetDataDescMap(CSun *const this)
{
  return &CSun::m_DataMap;
}


// CSun::AddDatadescMetadataKeys  (line 60, @0x00000000023c5300, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CSun::GetEntityClass(void)
void __fastcall CSun::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CSun::GetEntityClass);
}


// CSun::GetBaseMap  (line 60, @0x00000000023c5320, libserver.so)
datamap_t *__cdecl CSun::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CSun>  (line 60, @0x00000000023c5330, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CSun"
// globals: `guard variable for'DataMapInit<CSun>(CSun *)::nameHolder, CSun::GetEntityClass(void), CSun::m_DataMap, DataMapInit<CSun>(CSun *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CSun>(CSun *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CSun>(CSun *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CSun>(CSun *)::nameHolder) != 0 )
  {
    DataMapInit<CSun>(CSun *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CSun>(CSun *)::nameHolder.m_pszBase = "CSun";
    DataMapInit<CSun>(CSun *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CSun>(CSun *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CSun>(CSun *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CSun>(CSun *)::nameHolder.m_nLenBase = 4;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CSun>(CSun *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CSun>(CSun *)::nameHolder,
      &_dso_handle);
  }
  CSun::m_DataMap.dataNumFields = 14;
  CSun::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  CSun::m_DataMap.dataDesc = &DataMapInit<CSun>(CSun *)::dataDesc[1];
  AddDatadescMetadataKeys(&CSun::m_DataMap, CSun::GetEntityClass);
  return &CSun::m_DataMap;
}


// CSun::CSun  (line 84, @0x00000000023d72b0, libserver.so)  // inlines: AddEFlags, CNetworkColorBase, CNetworkVarBase, CNetworkVectorBase, CStrongHandle, CUtlSymbolLarge, Color, EnsureValidValue, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, EnsureValidValue<unsigned int>, Init, NetworkStateChanged, Set, SetAlpha, SetBlue, SetComponent, SetGreen, SetVal, Zero, operator!=, operator=, operator=<bool>, operator=<int>, ~CNetworkVarBase, ~CStrongHandle
// calls: CBaseModelEntity::CBaseModelEntity, CBaseEntity::DispatchUpdateTransmitState, CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume
// callers: CSun::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CSun::CSun(CSun *const this)
{
  bool v2; // zf
  __int64 v3; // xmm0_8

  CBaseModelEntity::CBaseModelEntity(this);
  this->m_clrOverlay = 0;
  v2 = this->m_clrOverlay.m_Value._color[1] == 0;
  this->_vptr_IHandleEntity = &off_40B4CB0;
  this->m_vDirection.m_Value.z = 0.0;
  this->m_vDirection.m_Value.y = 0.0;
  this->m_vDirection.m_Value.x = 0.0;
  this->m_strMaterial.u.m_Id = 0;
  this->m_strOverlayMaterial.u.m_Id = 0;
  if ( !v2 )
  {
    CBaseEntity::NetworkStateChanged(this, 0x4A4u, -1, -1);
    this->m_clrOverlay.m_Value._color[1] = 0;
  }
  if ( this->m_clrOverlay.m_Value._color[2] != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1188, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrOverlay.m_Value._color[2] = 0;
  }
  if ( this->m_clrOverlay.m_Value._color[3] != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1188, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrOverlay.m_Value._color[3] = 0;
  }
  v2 = this->m_vDirection.m_Value.x == 0.0;
  this->m_bOn.m_Value = 0;
  this->m_nSize.m_Value = 0;
  this->m_nOverlaySize.m_Value = 0;
  this->m_nMaterial.m_Value.m_pBinding = 0;
  this->m_nOverlayMaterial.m_Value.m_pBinding = 0;
  this->m_flHDRColorScale.m_Value = 0.0;
  if ( v2 && this->m_vDirection.m_Value.y == 0.0 )
  {
    v3 = 1065353216;
    if ( this->m_vDirection.m_Value.z == 1.0 )
    {
      this->m_bUseAngles = 0;
LABEL_11:
      (*(this->_vptr_IHandleEntity + 22))(this, 1196, 0xFFFFFFFFLL, 0xFFFFFFFFLL, *&v3);
      this->m_nSize.m_Value = 16;
      goto LABEL_12;
    }
  }
  (*(this->_vptr_IHandleEntity + 22))(this, 1152, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v2 = this->m_nSize.m_Value == 16;
  this->m_vDirection.m_Value.x = 0.0;
  this->m_vDirection.m_Value.y = 0.0;
  this->m_vDirection.m_Value.z = 1.0;
  this->m_bUseAngles = 0;
  if ( !v2 )
    goto LABEL_11;
LABEL_12:
  if ( !this->m_bOn.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1192, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bOn.m_Value = 1;
  }
  this->m_iEFlags |= 0x80u;
  CBaseEntity::DispatchUpdateTransmitState(this);
  v2 = this->m_nOverlaySize.m_Value == -1;
  this->m_strMaterial.u.m_Id = 0;
  this->m_strOverlayMaterial.u.m_Id = 0;
  if ( !v2 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1200, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nOverlaySize.m_Value = -1;
  }
}


// CleanupSunMaterialString  (line 99, @0x00000000023c5400, libserver.so)  // inlines: String, ToCStr, V_strncat<int>, V_strncpy<int>
// calls: _V_strncpy, V_GetFileExtension, _V_strncat
// callers: CSun::Spawn, CSun::Precache
void __fastcall CleanupSunMaterialString(
        char *pOutputString,
        unsigned int nOutputStringLength,
        string_t nInputString,
        const char *pDefaultValue)
{
  const char *v7; // rdi

  if ( *nInputString.u.m_Id != 0 )
  {
    _V_strncpy(pOutputString, *nInputString.u.m_Id, nOutputStringLength);
    v7 = "";
    if ( *nInputString.u.m_Id != 0 )
      v7 = *nInputString.u.m_pAsString;
    if ( V_GetFileExtension(v7) == 0 )
      _V_strncat(pOutputString, ".vmat", nOutputStringLength, 0xFFFFFFFFLL);
  }
  else
  {
    _V_strncpy(pOutputString, pDefaultValue, nOutputStringLength);
  }
}


// CSun::Spawn  (line 117, @0x00000000023e2df0, libserver.so)  // inlines: CStrongHandle, CUtlSymbolLarge, NetworkStateChanged, Set, operator=, operator=<CWeakHandle<InfoForResourceTypeIMaterial2> >, ~CStrongHandle
// calls: CBaseEntity::Spawn, CleanupSunMaterialString, AllocPooledString, GetMaterialIndex, CStrongHandle<InfoForResourceTypeIMaterial2>::Init, CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, __stack_chk_fail, _Unwind_Resume
// strings: "materials/sprites/light_glow02_add_noz.vmat"
void __fastcall CSun::Spawn(CSun *const this, const CEntityKeyValues *pKeyValues)
{
  CStrongHandle<InfoForResourceTypeIMaterial2>::ResourceHandleTyped_t hResource[2]; // [rsp+0h] [rbp-260h] BYREF
  string_t nInputString; // [rsp+10h] [rbp-250h] BYREF
  char pMaterial[272]; // [rsp+20h] [rbp-240h] BYREF
  char pOverlayMaterial[264]; // [rsp+130h] [rbp-130h] BYREF
  unsigned __int64 v7; // [rsp+238h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  CBaseEntity::Spawn(this, pKeyValues);
  nInputString.u.m_Id = this->m_strMaterial.u.m_Id;
  CleanupSunMaterialString(pMaterial, 0x104u, &nInputString, "materials/sprites/light_glow02_add_noz.vmat");
  AllocPooledString(&nInputString, pMaterial);
  this->m_strMaterial = nInputString;
  GetMaterialIndex(hResource, pMaterial);
  nInputString.u.m_Id = 0;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&nInputString, hResource[0]);
  if ( this->m_nMaterial.m_Value.m_pBinding != nInputString.u.m_Id )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1208, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&this->m_nMaterial.m_Value, &nInputString);
  }
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&nInputString);
  nInputString.u.m_Id = this->m_strOverlayMaterial.u.m_Id;
  CleanupSunMaterialString(pOverlayMaterial, 0x104u, &nInputString, "materials/sprites/light_glow02_add_noz.vmat");
  AllocPooledString(&nInputString, pOverlayMaterial);
  this->m_strOverlayMaterial = nInputString;
  GetMaterialIndex(hResource, pOverlayMaterial);
  nInputString.u.m_Id = 0;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&nInputString, hResource[0]);
  if ( this->m_nOverlayMaterial.m_Value.m_pBinding != nInputString.u.m_Id )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1216, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&this->m_nOverlayMaterial.m_Value, &nInputString);
  }
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&nInputString);
}


// CSun::Precache  (line 132, @0x00000000023e3ae0, libserver.so)  // inlines: CUtlSymbolLarge, Precache
// calls: CEntityInstance::Precache, CleanupSunMaterialString, PrecacheMaterial, __stack_chk_fail
// strings: "materials/sprites/light_glow02_add_noz.vmat"
void __fastcall CSun::Precache(CSun *const this, const CEntityPrecacheContext *pContext)
{
  string_t nInputString; // [rsp+0h] [rbp-250h] BYREF
  char pMaterial[272]; // [rsp+10h] [rbp-240h] BYREF
  char pOverlayMaterial[264]; // [rsp+120h] [rbp-130h] BYREF
  unsigned __int64 v7; // [rsp+228h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  CEntityInstance::Precache(this, pContext);
  nInputString.u.m_Id = this->m_strMaterial.u.m_Id;
  CleanupSunMaterialString(pMaterial, 0x104u, &nInputString, "materials/sprites/light_glow02_add_noz.vmat");
  PrecacheMaterial(pMaterial, pContext);
  nInputString.u.m_Id = this->m_strOverlayMaterial.u.m_Id;
  CleanupSunMaterialString(pOverlayMaterial, 0x104u, &nInputString, "materials/sprites/light_glow02_add_noz.vmat");
  PrecacheMaterial(pOverlayMaterial, pContext);
}


// CSun::SetupLightNormalFromProps  (line 148, @0x00000000023c54a0, libserver.so)  // inlines: operator[]
// calls: sincos
void __fastcall CSun::SetupLightNormalFromProps(
        CSun *const this,
        const QAngle *const angles,
        vec_t angle,
        vec_t pitch,
        Vector *const output)
{
  float v7; // xmm5_4
  float v8; // xmm0_4
  vec_t v9; // xmm0_4
  float v10; // [rsp-44h] [rbp-4Ch]
  float v11; // [rsp-40h] [rbp-48h]
  float v12; // [rsp-34h] [rbp-3Ch]
  double v13; // [rsp-30h] [rbp-38h] BYREF
  double v14[6]; // [rsp-28h] [rbp-30h] BYREF

  if ( angle == -1.0 )
  {
    output->y = 0.0;
    output->x = 0.0;
    output->z = 1.0;
LABEL_3:
    v12 = 0.0;
    v7 = 0.0;
    goto LABEL_4;
  }
  if ( angle == -2.0 )
  {
    output->y = 0.0;
    output->x = 0.0;
    output->z = -1.0;
    goto LABEL_3;
  }
  if ( angle == 0.0 )
    angle = angles->y;
  output->z = 0.0;
  v10 = pitch;
  sincos((angle / 180.0) * 3.141592653589793, v14, &v13);
  v9 = v14[0];
  v7 = v13;
  output->y = v9;
  output->x = v7;
  v12 = v9;
  pitch = v10;
LABEL_4:
  if ( pitch == 0.0 )
    pitch = angles->x;
  v11 = v7;
  sincos((pitch / 180.0) * 3.141592653589793, v14, &v13);
  v8 = v13;
  output->z = v14[0];
  output->x = v11 * v8;
  output->y = v8 * v12;
}


// CSun::Activate  (line 184, @0x00000000023bf9a0, libserver.so)  // inlines: CUtlSymbolLarge, GetForModify, NetworkStateChanged, Set, VectorSubtract, operator!=, operator-, operator=, operator=<CNetworkVarBase<unsigned int, CSun::NetworkVar_m_nSize> >
// calls: CBaseModelEntity::Activate, CBaseEntity::GetAbsAngles, AngleVectors, CGameEntitySystem::FindEntityByName, CBaseEntity::GetAbsOrigin, VectorNormalize
void __fastcall CSun::Activate(CSun *const this, ActivateType_t activateType)
{
  const QAngle *AbsAngles; // rax
  const CBaseEntity *EntityByName; // rax
  const Vector *AbsOrigin; // r12
  const Vector *v6; // rax
  vec_t v7; // xmm0_4
  vec_t v8; // xmm2_4
  double v9; // xmm0_8
  bool v10; // zf
  unsigned int m_Value; // r12d
  vec_t v12; // [rsp+14h] [rbp-3Ch]
  vec_t v13; // [rsp+18h] [rbp-38h]
  vec_t v14; // [rsp+1Ch] [rbp-34h]
  Vector vDirection; // [rsp+20h] [rbp-30h] BYREF

  CBaseModelEntity::Activate(this, activateType);
  if ( this->m_bUseAngles != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1152, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    AbsAngles = CBaseEntity::GetAbsAngles(this);
    AngleVectors(AbsAngles, &this->m_vDirection.m_Value, 0, 0);
    v12 = -this->m_vDirection.m_Value.z;
    v13 = -this->m_vDirection.m_Value.y;
    v14 = -this->m_vDirection.m_Value.x;
    (*(this->_vptr_IHandleEntity + 22))(this, 1152, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_vDirection.m_Value.x = v14;
    this->m_vDirection.m_Value.y = v13;
    this->m_vDirection.m_Value.z = v12;
  }
  else
  {
    *&vDirection.x = this->m_target.u.m_Id;
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &vDirection, this, 0, 0, 0);
    if ( EntityByName != 0 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(EntityByName);
      v6 = CBaseEntity::GetAbsOrigin(this);
      v7 = v6->z - AbsOrigin->z;
      v8 = v6->x - AbsOrigin->x;
      vDirection.y = v6->y - AbsOrigin->y;
      vDirection.z = v7;
      vDirection.x = v8;
      VectorNormalize(&vDirection);
      *&v9 = LODWORD(vDirection.x);
      if ( vDirection.x != this->m_vDirection.m_Value.x
        || (*&v9 = LODWORD(vDirection.y), vDirection.y != this->m_vDirection.m_Value.y)
        || (*&v9 = LODWORD(vDirection.z), vDirection.z != this->m_vDirection.m_Value.z) )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1152, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v9);
        v10 = this->m_nOverlaySize.m_Value == -1;
        this->m_vDirection.m_Value = vDirection;
        if ( !v10 )
          return;
        goto LABEL_10;
      }
    }
  }
  if ( this->m_nOverlaySize.m_Value != -1 )
    return;
LABEL_10:
  m_Value = this->m_nSize.m_Value;
  if ( m_Value != -1 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1200, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nOverlaySize.m_Value = m_Value;
  }
}


// CSun::InputTurnOn  (line 212, @0x00000000023bf920, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CSun::InputTurnOn(CSun *const this, inputdata_t *const inputdata)
{
  if ( !this->m_bOn.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1192, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bOn.m_Value = 1;
  }
}


// CSun::InputTurnOff  (line 220, @0x00000000023bf960, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CSun::InputTurnOff(CSun *const this, inputdata_t *const inputdata)
{
  if ( this->m_bOn.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1192, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bOn.m_Value = 0;
  }
}


// CSun::InputSetColor  (line 228, @0x00000000023bf760, libserver.so)  // inlines: Color32, FromUint32, NetworkStateChanged, Set, SetRawColor, operator Color, operator=
void __fastcall CSun::InputSetColor(CSun *const this, inputdata_t *const inputdata)
{
  int m_int; // r12d

  m_int = inputdata->value.m_int;
  if ( m_int != *&this->m_clrRender )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender = m_int;
  }
}


// CSun::UpdateTransmitState  (line 233, @0x00000000023bb710, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CSun::UpdateTransmitState(CSun *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


