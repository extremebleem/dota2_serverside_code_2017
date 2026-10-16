// Reconstructed from DWARF by pahole; not original source.

// src/game/server/materialmodifycontrol.cpp:21
class CMaterialModifyControl : public CBaseEntity {
	class NetworkVar_m_szMaterialName {
		void NetworkStateChanged(void *);

		// sizeof = 1
	};

	class NetworkVar_m_szMaterialVar {
		void NetworkStateChanged(void *);

		// sizeof = 1
	};

	class NetworkVar_m_szMaterialVarValue {
		void NetworkStateChanged(void *);

		// sizeof = 1
	};

	class NetworkVar_m_iFrameStart {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iFrameEnd {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bWrap {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flFramerate {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bNewAnimCommandsSemaphore {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flFloatLerpStartValue {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flFloatLerpEndValue {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flFloatLerpTransitionTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nModifyMode {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	typedef CBaseEntity BaseClass;
	typedef CMaterialModifyControl ThisClass;

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
	CMaterialModifyControl(CMaterialModifyControl &);
	CMaterialModifyControl(CMaterialModifyControl &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CMaterialModifyControl();
	virtual void Spawn(const CEntityKeyValues *);
	virtual int UpdateTransmitState();
	virtual int ShouldTransmit(const CGameCheckTransmitInfo *);
	void SetMaterialVar(inputdata_t &);
	void SetMaterialVarToCurrentTime(inputdata_t &);
	void InputStartAnimSequence(inputdata_t &);
	void InputStartFloatLerp(inputdata_t &);
	virtual int ObjectCaps();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CMaterialModifyControl();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[64] UpdateTransmitState
	// vtable[65] ShouldTransmit
	// vtable[19] ObjectCaps
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// sizeof = 1584
};

// src/game/server/materialmodifycontrol.cpp:80
class C_CMaterialModifyControl_MapInstall {
	C_CMaterialModifyControl_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CMaterialModifyControl::~CMaterialModifyControl  (line 21, @0x00000000022a9a80, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CMaterialModifyControl::~CMaterialModifyControl(CMaterialModifyControl *const this)
{
  this->_vptr_IHandleEntity = &off_406DE50;
  CBaseEntity::~CBaseEntity(this);
}


// CMaterialModifyControl::~CMaterialModifyControl  (line 21, @0x00000000022a9aa0, libserver.so)  // inlines: ~CMaterialModifyControl
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CMaterialModifyControl::~CMaterialModifyControl(CMaterialModifyControl *const this)
{
  this->_vptr_IHandleEntity = &off_406DE50;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CMaterialModifyControl::GetEntityClass  (line 23, @0x00000000022a68b0, libserver.so)
CEntityClass *__cdecl CMaterialModifyControl::GetEntityClass()
{
  return g_pEntityCMaterialModifyControlClass;
}


// CMaterialModifyControl::Schema_DynamicBinding  (line 23, @0x00000000022a68c0, libserver.so)
// globals: CMaterialModifyControl::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CMaterialModifyControl::Schema_DynamicBinding(
        const CMaterialModifyControl *const this)
{
  return CMaterialModifyControl::s_pSchemaBinding;
}


// CMaterialModifyControl::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 23, @0x00000000022a68d0, libserver.so)
// globals: CMaterialModifyControl::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CMaterialModifyControl::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CMaterialModifyControl::CEntityInstanceEntityClass *const this)
{
  return CMaterialModifyControl::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CMaterialModifyControl::CEntityInstanceEntityClass::DestructInstance  (line 23, @0x00000000022a68e0, libserver.so)  // inlines: Destruct<CMaterialModifyControl>
void __fastcall CMaterialModifyControl::CEntityInstanceEntityClass::DestructInstance(
        CMaterialModifyControl::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CMaterialModifyControl::CEntityInstanceEntityClass::FreeInstance  (line 23, @0x00000000022a6900, libserver.so)
void __fastcall CMaterialModifyControl::CEntityInstanceEntityClass::FreeInstance(
        CMaterialModifyControl::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CMaterialModifyControl::CEntityInstanceEntityClass::CanAllocate  (line 23, @0x00000000022a6920, libserver.so)
bool __fastcall CMaterialModifyControl::CEntityInstanceEntityClass::CanAllocate(
        const CMaterialModifyControl::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CMaterialModifyControl::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 23, @0x00000000022a6930, libserver.so)
// globals: CMaterialModifyControl::s_pSchemaBinding
const ISchemaBinding *__fastcall CMaterialModifyControl::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CMaterialModifyControl::CEntityInstanceEntityClass *const this)
{
  return CMaterialModifyControl::s_pSchemaBinding;
}


// CMaterialModifyControl::CEntityInstanceEntityClass::AllocateInstance  (line 23, @0x00000000022a87c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CMaterialModifyControl::CEntityInstanceEntityClass::AllocateInstance(
        CMaterialModifyControl::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1584);
  memset(v1, 0, 0x630u);
  return v1;
}


// CMaterialModifyControl::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 23, @0x00000000022ab630, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CMaterialModifyControl::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CMaterialModifyControl::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CMaterialModifyControl::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 23, @0x00000000022ab650, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CMaterialModifyControl::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CMaterialModifyControl::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CMaterialModifyControl::GetEntityClassInternal  (line 23, @0x00000000022b45b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "material_modify_control", "CMaterialModifyControl"
// globals: `guard variable for'CMaterialModifyControl::GetEntityClassInternal(void)::g_EntityCMaterialModifyControlClass, CMaterialModifyControl::GetEntityClassInternal(void)::g_EntityCMaterialModifyControlClass, __dso_handle, CMaterialModifyControl::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CMaterialModifyControl::GetEntityClassInfo(void)::g_EntityCMaterialModifyControlClassInfo, CMaterialModifyControl::GetEntityClassInfo(void)::g_EntityCMaterialModifyControlClassInfo
CEntityClass *__cdecl CMaterialModifyControl::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CMaterialModifyControl::GetEntityClassInternal(void)::g_EntityCMaterialModifyControlClass == 0
    && __cxa_guard_acquire(&`guard variable for'CMaterialModifyControl::GetEntityClassInternal(void)::g_EntityCMaterialModifyControlClass) != 0 )
  {
    CEntityClass::CEntityClass(&CMaterialModifyControl::GetEntityClassInternal(void)::g_EntityCMaterialModifyControlClass);
    CMaterialModifyControl::GetEntityClassInternal(void)::g_EntityCMaterialModifyControlClass._vptr_CEntityClass = off_406DDD0;
    __cxa_guard_release(&`guard variable for'CMaterialModifyControl::GetEntityClassInternal(void)::g_EntityCMaterialModifyControlClass);
    __cxa_atexit(
      CMaterialModifyControl::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CMaterialModifyControl::GetEntityClassInternal(void)::g_EntityCMaterialModifyControlClass,
      &_dso_handle);
  }
  if ( g_pEntityCMaterialModifyControlClass != 0 )
    return &CMaterialModifyControl::GetEntityClassInternal(void)::g_EntityCMaterialModifyControlClass;
  if ( `guard variable for'CMaterialModifyControl::GetEntityClassInfo(void)::g_EntityCMaterialModifyControlClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CMaterialModifyControl::GetEntityClassInfo(void)::g_EntityCMaterialModifyControlClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CMaterialModifyControl::GetEntityClassInfo(void)::g_EntityCMaterialModifyControlClassInfo,
      "CMaterialModifyControl",
      "material_modify_control",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CMaterialModifyControl::GetEntityClassInfo(void)::g_EntityCMaterialModifyControlClassInfo);
  }
  CMaterialModifyControl::GetEntityClassInternal(void)::g_EntityCMaterialModifyControlClass.m_pClassInfo = &CMaterialModifyControl::GetEntityClassInfo(void)::g_EntityCMaterialModifyControlClassInfo;
  CMaterialModifyControl::GetEntityClassInternal(void)::g_EntityCMaterialModifyControlClass.m_pBaseClassInfo = CMaterialModifyControl::GetEntityClassInfo(void)::g_EntityCMaterialModifyControlClassInfo.m_pBaseClassInfo;
  g_pEntityCMaterialModifyControlClass = &CMaterialModifyControl::GetEntityClassInternal(void)::g_EntityCMaterialModifyControlClass;
  CMaterialModifyControl::GetEntityClassInfo(void)::g_EntityCMaterialModifyControlClassInfo.m_pClass = &CMaterialModifyControl::GetEntityClassInternal(void)::g_EntityCMaterialModifyControlClass;
  CMaterialModifyControl::GetEntityClassInternal(void)::g_EntityCMaterialModifyControlClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCMaterialModifyControlClass->m_pComponentOverrides = 0;
  return &CMaterialModifyControl::GetEntityClassInternal(void)::g_EntityCMaterialModifyControlClass;
}


// CMaterialModifyControl::CEntityInstanceEntityClass::ConstructInstance  (line 23, @0x00000000022b4700, libserver.so)  // inlines: Construct<CMaterialModifyControl>
// calls: CMaterialModifyControl::CMaterialModifyControl
CEntityInstance *__fastcall CMaterialModifyControl::CEntityInstanceEntityClass::ConstructInstance(
        CMaterialModifyControl::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CMaterialModifyControl::CMaterialModifyControl(p);
  return p;
}


// CMaterialModifyControl::ObjectCaps  (line 38, @0x00000000022a8f70, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CMaterialModifyControl::ObjectCaps(CMaterialModifyControl *const this)
{
  int result; // eax

  result = CBaseEntity::ObjectCaps(this);
  LOBYTE(result) = result & 0x7F;
  return result;
}


// CMaterialModifyControl::GetDataDescMap  (line 59, @0x0000000002283e20, libserver.so)
// globals: CMaterialModifyControl::m_DataMap
datamap_t *__fastcall CMaterialModifyControl::GetDataDescMap(CMaterialModifyControl *const this)
{
  return &CMaterialModifyControl::m_DataMap;
}


// CMaterialModifyControl::AddDatadescMetadataKeys  (line 59, @0x0000000002298a40, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CMaterialModifyControl::GetEntityClass(void)
void __fastcall CMaterialModifyControl::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CMaterialModifyControl::GetEntityClass);
}


// CMaterialModifyControl::GetBaseMap  (line 59, @0x0000000002298a60, libserver.so)
datamap_t *__cdecl CMaterialModifyControl::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CMaterialModifyControl>  (line 59, @0x0000000002298a70, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CMaterialModifyControl"
// globals: `guard variable for'DataMapInit<CMaterialModifyControl>(CMaterialModifyControl *)::nameHolder, CMaterialModifyControl::GetEntityClass(void), CMaterialModifyControl::m_DataMap, DataMapInit<CMaterialModifyControl>(CMaterialModifyControl *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CMaterialModifyControl>(CMaterialModifyControl *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CMaterialModifyControl>(CMaterialModifyControl *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CMaterialModifyControl>(CMaterialModifyControl *)::nameHolder) != 0 )
  {
    DataMapInit<CMaterialModifyControl>(CMaterialModifyControl *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CMaterialModifyControl>(CMaterialModifyControl *)::nameHolder.m_pszBase = "CMaterialModifyControl";
    DataMapInit<CMaterialModifyControl>(CMaterialModifyControl *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CMaterialModifyControl>(CMaterialModifyControl *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CMaterialModifyControl>(CMaterialModifyControl *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CMaterialModifyControl>(CMaterialModifyControl *)::nameHolder.m_nLenBase = 22;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CMaterialModifyControl>(CMaterialModifyControl *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CMaterialModifyControl>(CMaterialModifyControl *)::nameHolder,
      &_dso_handle);
  }
  CMaterialModifyControl::m_DataMap.dataNumFields = 16;
  CMaterialModifyControl::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  CMaterialModifyControl::m_DataMap.dataDesc = &DataMapInit<CMaterialModifyControl>(CMaterialModifyControl *)::dataDesc[1];
  AddDatadescMetadataKeys(&CMaterialModifyControl::m_DataMap, CMaterialModifyControl::GetEntityClass);
  return &CMaterialModifyControl::m_DataMap;
}


// CMaterialModifyControl::YouForgotToImplementOrDeclareServerClass  (line 80, @0x0000000002283e30, libserver.so)
int __fastcall CMaterialModifyControl::YouForgotToImplementOrDeclareServerClass(CMaterialModifyControl *const this)
{
  return 0;
}


// CMaterialModifyControl::GetServerClass  (line 80, @0x000000000228d680, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CMaterialModifyControl::GetServerClass(CMaterialModifyControl *const this)
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


// CMaterialModifyControl::CMaterialModifyControl  (line 86, @0x0000000002298b40, libserver.so)  // inlines: CNetworkVarBase, EnsureValidValue<MaterialModifyMode_t>, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, NetworkStateChanged, Set, operator=<MaterialModifyMode_t>, operator=<int>
// calls: CBaseEntity::CBaseEntity, CBaseEntity::NetworkStateChanged, CBaseEntity::~CBaseEntity, _Unwind_Resume
// callers: CMaterialModifyControl::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CMaterialModifyControl::CMaterialModifyControl(CMaterialModifyControl *const this)
{
  bool v2; // zf

  CBaseEntity::CBaseEntity(this);
  this->_vptr_IHandleEntity = &off_406DE50;
  this->m_iFrameStart.m_Value = 0;
  this->m_iFrameEnd.m_Value = 0;
  this->m_bWrap.m_Value = 0;
  this->m_flFramerate.m_Value = 0.0;
  this->m_bNewAnimCommandsSemaphore.m_Value = 0;
  this->m_flFloatLerpStartValue.m_Value = 0.0;
  this->m_flFloatLerpEndValue.m_Value = 0.0;
  this->m_flFloatLerpTransitionTime.m_Value = 0.0;
  this->m_nModifyMode.m_Value = MaterialModifyMode_t::MATERIAL_MODIFY_MODE_NONE;
  CBaseEntity::NetworkStateChanged(this, 0x608u, -1, -1);
  v2 = this->m_iFrameEnd.m_Value == -1;
  this->m_iFrameStart.m_Value = -1;
  if ( !v2 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1548, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iFrameEnd.m_Value = -1;
  }
  if ( this->m_nModifyMode.m_Value != MaterialModifyMode_t::MATERIAL_MODIFY_MODE_NONE )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1576, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nModifyMode.m_Value = MaterialModifyMode_t::MATERIAL_MODIFY_MODE_NONE;
  }
}


// CMaterialModifyControl::Spawn  (line 96, @0x0000000002284970, libserver.so)
// calls: CBaseEntity::Spawn
void __fastcall CMaterialModifyControl::Spawn(CMaterialModifyControl *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseEntity::Spawn(this, pKeyValues);
}


// CMaterialModifyControl::UpdateTransmitState  (line 104, @0x0000000002284960, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CMaterialModifyControl::UpdateTransmitState(CMaterialModifyControl *const this)
{
  return CBaseEntity::SetTransmitState(this, 0);
}


// CMaterialModifyControl::ShouldTransmit  (line 113, @0x00000000022850d0, libserver.so)
// calls: CBaseEntity::GetMoveParent
int __fastcall CMaterialModifyControl::ShouldTransmit(
        CMaterialModifyControl *const this,
        const CGameCheckTransmitInfo *pInfo)
{
  CBaseEntity *MoveParent; // rax

  MoveParent = CBaseEntity::GetMoveParent(this);
  if ( MoveParent != 0 )
    return (*(MoveParent->_vptr_IHandleEntity + 65))(MoveParent, pInfo);
  else
    return 8;
}


// CMaterialModifyControl::SetMaterialVar  (line 128, @0x000000000228bed0, libserver.so)  // inlines: AssignTo, GetForModify, NetworkStateChanged, Set, TempString, ToString, V_strncpy<int>, operator=<MaterialModifyMode_t>
// calls: _V_strncpy, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "true", "false", "%d %d %d %d"
// globals: jpt_228BF03, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CMaterialModifyControl::SetMaterialVar(
        CMaterialModifyControl *const this,
        inputdata_t *const inputdata)
{
  int16 m_type; // di
  const char *m_pszString; // r12
  const char *v5; // rax
  double m_float; // xmm0_8
  const char *v7; // rcx

  m_type = inputdata->value.m_type;
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
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        break;
      case 4:
      case 27:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_14;
      case 6:
        v7 = "true";
        if ( inputdata->value.m_char == 0 )
          v7 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v7);
        goto LABEL_18;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_14;
      case 9:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        break;
      case 25:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
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
        v5 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v5);
LABEL_10:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  (*(this->_vptr_IHandleEntity + 22))(this, 1286, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  _V_strncpy(&this->m_szMaterialVarValue, m_pszString, 255);
  if ( this->m_nModifyMode.m_Value != MaterialModifyMode_t::MATERIAL_MODIFY_MODE_SETVAR )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1576, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nModifyMode.m_Value = MaterialModifyMode_t::MATERIAL_MODIFY_MODE_SETVAR;
  }
}


// CMaterialModifyControl::SetMaterialVarToCurrentTime  (line 142, @0x00000000022898c0, libserver.so)  // inlines: GetForModify, NetworkStateChanged, Set, V_strncpy<int>, curtime, operator=<MaterialModifyMode_t>
// calls: V_snprintf, _V_strncpy, __stack_chk_fail
void __fastcall CMaterialModifyControl::SetMaterialVarToCurrentTime(
        CMaterialModifyControl *const this,
        inputdata_t *const inputdata)
{
  double m_flCurrentTime; // xmm0_8
  CGlobalVars *v4; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  __int64 v6; // [rsp-8h] [rbp-48h] BYREF
  unsigned __int64 v7; // [rsp+20h] [rbp-20h]

  m_flCurrentTime = 0.0;
  v7 = __readfsqword(0x28u);
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, inputdata, 0.0);
    }
    m_flCurrentTime = v4->m_flCurrentTime;
  }
  V_snprintf(&v6, 32, "%f", m_flCurrentTime);
  (*(this->_vptr_IHandleEntity + 22))(this, 1286, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  _V_strncpy(&this->m_szMaterialVarValue, &v6, 255);
  if ( this->m_nModifyMode.m_Value != MaterialModifyMode_t::MATERIAL_MODIFY_MODE_SETVAR )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1576, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nModifyMode.m_Value = MaterialModifyMode_t::MATERIAL_MODIFY_MODE_SETVAR;
  }
}


// CMaterialModifyControl::InputStartAnimSequence  (line 153, @0x000000000228c700, libserver.so)  // inlines: AssignTo, GetClassNameAsCStr, GetClassname, GetDebugName, NetworkStateChanged, Set, String, TempString, ToString, V_strncpy<long unsigned int>, atof, atoi, operator=<MaterialModifyMode_t>, operator=<bool>, operator=<float>, operator=<int>
// calls: _V_strncpy, strtok, CEntityIdentity::GetDebugName, Warning, strtol, strtod, V_snprintf, VariantFieldTypeName, __stack_chk_fail
// strings: "%s (%s) received StartAnimSequence input without correct parameters. Syntax: <Frame Start, "%g %g %g %g", "No conversion from %s to string at the moment!\n", "true", "false", "%d %d %d %d"
// globals: jpt_228C749, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CMaterialModifyControl::InputStartAnimSequence(
        CMaterialModifyControl *const this,
        inputdata_t *const inputdata)
{
  int16 m_type; // di
  const char *m_pszString; // rsi
  char *v5; // rax
  const char *DebugName; // rax
  CEntityIdentity *m_pEntity; // rcx
  const char *m_pAsString; // rsi
  int v9; // r12d
  char *v10; // rax
  int v11; // r13d
  char *v12; // rax
  char *v13; // rax
  bool v14; // r14
  float v15; // xmm0_4
  bool v16; // r12
  const char *v17; // rax
  double m_float; // xmm0_8
  const char *v19; // rcx
  double v20; // [rsp+8h] [rbp-138h]
  float v21; // [rsp+8h] [rbp-138h]
  char parseString[264]; // [rsp+10h] [rbp-130h] BYREF
  unsigned __int64 v23; // [rsp+118h] [rbp-28h]

  v23 = __readfsqword(0x28u);
  m_type = inputdata->value.m_type;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_31;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_33;
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
        goto LABEL_35;
      case 6:
        v19 = "true";
        if ( inputdata->value.m_char == 0 )
          v19 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v19);
        goto LABEL_39;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_35;
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
        goto LABEL_39;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_39:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_33:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_35:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v17 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v17);
LABEL_31:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  _V_strncpy(parseString, m_pszString, 255);
  v5 = strtok(parseString, " ");
  if ( v5 != 0
    && *v5 != 0
    && (v9 = strtol(v5, 0, 10), (v10 = strtok(0, " ")) != 0)
    && *v10 != 0
    && (v11 = strtol(v10, 0, 10), (v12 = strtok(0, " ")) != 0)
    && *v12 != 0
    && (v20 = strtod(v12, 0), (v13 = strtok(0, " ")) != 0)
    && *v13 != 0 )
  {
    v14 = strtol(v13, 0, 10) != 0;
    if ( v9 != this->m_iFrameStart.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1544, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_iFrameStart.m_Value = v9;
    }
    if ( v11 != this->m_iFrameEnd.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1548, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_iFrameEnd.m_Value = v11;
    }
    v15 = v20;
    if ( v15 != this->m_flFramerate.m_Value )
    {
      v21 = v20;
      (*(this->_vptr_IHandleEntity + 22))(this, 1556, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flFramerate.m_Value = v21;
    }
    if ( v14 != this->m_bWrap.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1552, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bWrap.m_Value = v14;
    }
    if ( this->m_nModifyMode.m_Value != MaterialModifyMode_t::MATERIAL_MODIFY_MODE_ANIM_SEQUENCE )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1576, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_nModifyMode.m_Value = MaterialModifyMode_t::MATERIAL_MODIFY_MODE_ANIM_SEQUENCE;
    }
    v16 = !this->m_bNewAnimCommandsSemaphore.m_Value;
    if ( this->m_bNewAnimCommandsSemaphore.m_Value != v16 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1560, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bNewAnimCommandsSemaphore.m_Value = v16;
    }
  }
  else
  {
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    m_pEntity = this->m_pEntity;
    m_pAsString = "";
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    Warning(
      "%s (%s) received StartAnimSequence input without correct parameters. Syntax: <Frame Start> <Frame End> <Frame Rate"
      "> <Loop>\n"
      "Setting <Frame End> to -1 uses the last frame of the texture. <Loop> should be 1 or 0.\n",
      m_pAsString,
      DebugName);
  }
}


// CMaterialModifyControl::InputStartFloatLerp  (line 198, @0x000000000228c1d0, libserver.so)  // inlines: AssignTo, GetClassNameAsCStr, GetClassname, GetDebugName, NetworkStateChanged, Set, String, TempString, ToString, V_strncpy<long unsigned int>, atof, atoi, operator=<MaterialModifyMode_t>, operator=<bool>, operator=<float>
// calls: _V_strncpy, strtok, CEntityIdentity::GetDebugName, Warning, strtod, strtol, V_snprintf, VariantFieldTypeName, __stack_chk_fail
// strings: "%s (%s) received StartFloatLerp input without correct parameters. Syntax: <Start Value> <, "%g %g %g %g", "No conversion from %s to string at the moment!\n", "true", "false", "%d %d %d %d"
// globals: jpt_228C215, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CMaterialModifyControl::InputStartFloatLerp(
        CMaterialModifyControl *const this,
        inputdata_t *const inputdata)
{
  int16 m_type; // ax
  const char *m_pszString; // rsi
  char *v5; // rax
  const char *DebugName; // rax
  CEntityIdentity *m_pEntity; // rcx
  const char *m_pAsString; // rsi
  char *v9; // rax
  char *v10; // rax
  char *v11; // rax
  float v12; // r12d
  float v13; // xmm0_4
  float v14; // xmm0_4
  bool v15; // r12
  const char *v16; // rax
  double m_float; // xmm0_8
  const char *v18; // rcx
  double v19; // [rsp+8h] [rbp-138h]
  double v20; // [rsp+10h] [rbp-130h]
  double v21; // [rsp+18h] [rbp-128h]
  float v22; // [rsp+18h] [rbp-128h]
  float v23; // [rsp+18h] [rbp-128h]
  char parseString[264]; // [rsp+20h] [rbp-120h] BYREF
  unsigned __int64 v25; // [rsp+128h] [rbp-18h]

  v25 = __readfsqword(0x28u);
  m_type = inputdata->value.m_type;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_29;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_31;
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
        goto LABEL_33;
      case 6:
        v18 = "true";
        if ( inputdata->value.m_char == 0 )
          v18 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v18);
        goto LABEL_37;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_33;
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
        goto LABEL_37;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_37:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_31:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_33:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v16 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v16);
LABEL_29:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  _V_strncpy(parseString, m_pszString, 255);
  v5 = strtok(parseString, " ");
  if ( v5 != 0
    && *v5 != 0
    && (v21 = strtod(v5, 0), (v9 = strtok(0, " ")) != 0)
    && *v9 != 0
    && (v20 = strtod(v9, 0), (v10 = strtok(0, " ")) != 0)
    && *v10 != 0
    && (v19 = strtod(v10, 0), (v11 = strtok(0, " ")) != 0)
    && *v11 != 0 )
  {
    v12 = COERCE_FLOAT(_mm_cvtsi128_si32(_mm_cvtpd_ps(*&v21)));
    strtol(v11, 0, 10);
    if ( v12 != this->m_flFloatLerpStartValue.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1564, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flFloatLerpStartValue.m_Value = v12;
    }
    v13 = v20;
    if ( v13 != this->m_flFloatLerpEndValue.m_Value )
    {
      v23 = v20;
      (*(this->_vptr_IHandleEntity + 22))(this, 1568, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flFloatLerpEndValue.m_Value = v23;
    }
    v14 = v19;
    if ( v14 != this->m_flFloatLerpTransitionTime.m_Value )
    {
      v22 = v19;
      (*(this->_vptr_IHandleEntity + 22))(this, 1572, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flFloatLerpTransitionTime.m_Value = v22;
    }
    if ( this->m_nModifyMode.m_Value != MaterialModifyMode_t::MATERIAL_MODIFY_MODE_FLOAT_LERP )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1576, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_nModifyMode.m_Value = MaterialModifyMode_t::MATERIAL_MODIFY_MODE_FLOAT_LERP;
    }
    v15 = !this->m_bNewAnimCommandsSemaphore.m_Value;
    if ( this->m_bNewAnimCommandsSemaphore.m_Value != v15 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1560, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bNewAnimCommandsSemaphore.m_Value = v15;
    }
  }
  else
  {
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    m_pEntity = this->m_pEntity;
    m_pAsString = "";
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    Warning(
      "%s (%s) received StartFloatLerp input without correct parameters. Syntax: <Start Value> <End Value> <Transition Ti"
      "me> <Loop>\n"
      "<Loop> should be 1 or 0.\n",
      m_pAsString,
      DebugName);
  }
}


