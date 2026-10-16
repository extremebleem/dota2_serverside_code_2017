// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/fogcontroller.cpp:84
class C_CFogController_MapInstall {
	C_CFogController_MapInstall();

	// sizeof = 1
};

// src/game/shared/fogcontroller.cpp:439
class CFogTrigger : public CBaseTrigger {
public:

private:

	static datamap_t m_DataMap;

	typedef CBaseTrigger BaseClass;

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
	CFogTrigger(CFogTrigger &);
	CFogTrigger(CFogTrigger &);
	CFogTrigger();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void StartTouch(CBaseEntity *);
	virtual void EndTouch(CBaseEntity *);
	fogparams_t * GetFog();
	virtual ~CFogTrigger();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[111] StartTouch
	// vtable[113] EndTouch
	// sizeof = 1576
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFogSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 38, @0x0000000001edcbc0, libserver.so)
void __cdecl CFogSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// FogSystem  (line 44, @0x0000000001edcbd0, libserver.so)
// callers: CBasePlayer::InitFogController, CBasePlayer::UpdateFXVolume
// globals: s_FogSystem
CFogSystem *__cdecl FogSystem()
{
  return &s_FogSystem;
}


// CFogController::GetDataDescMap  (line 51, @0x0000000001ecc000, libserver.so)
// globals: CFogController::m_DataMap
datamap_t *__fastcall CFogController::GetDataDescMap(CFogController *const this)
{
  return &CFogController::m_DataMap;
}


// CFogController::AddDatadescMetadataKeys  (line 51, @0x0000000001edcbe0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFogController::GetEntityClass(void)
void __fastcall CFogController::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFogController::GetEntityClass);
}


// CFogController::GetBaseMap  (line 51, @0x0000000001edcc00, libserver.so)
datamap_t *__cdecl CFogController::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CFogController>  (line 51, @0x0000000001ee39e0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "CFogController"
// globals: `guard variable for'DataMapInit<CFogController>(CFogController *)::nameHolder, `guard variable for'DataMapInit<CFogController>(CFogController *)::dataDesc, CFogController::GetEntityClass(void), CFogController::m_DataMap, DataMapInit<CFogController>(CFogController *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFogController>(CFogController *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CFogController>(CFogController *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFogController>(CFogController *)::nameHolder) != 0 )
  {
    DataMapInit<CFogController>(CFogController *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFogController>(CFogController *)::nameHolder.m_pszBase = "CFogController";
    DataMapInit<CFogController>(CFogController *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFogController>(CFogController *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFogController>(CFogController *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFogController>(CFogController *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFogController>(CFogController *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFogController>(CFogController *)::nameHolder,
      &_dso_handle);
  }
  CFogController::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CFogController>(CFogController *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFogController>(CFogController *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CFogController>(CFogController *)::nameHolder.m_nLenBase + 14);
    strcpy(stpcpy(v2, DataMapInit<CFogController>(CFogController *)::nameHolder.m_pszBase), "SetLerpValues");
    m_Size = DataMapInit<CFogController>(CFogController *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CFogController>(CFogController *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CFogController>(CFogController *)::nameHolder.m_Names.m_Size == DataMapInit<CFogController>(CFogController *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CFogController>(CFogController *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CFogController>(CFogController *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CFogController>(CFogController *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CFogController>(CFogController *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CFogController>(CFogController *)::dataDesc[22].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFogController>(CFogController *)::dataDesc);
  }
  CFogController::m_DataMap.dataNumFields = 23;
  CFogController::m_DataMap.dataDesc = &DataMapInit<CFogController>(CFogController *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFogController::m_DataMap, CFogController::GetEntityClass);
  return &CFogController::m_DataMap;
}


// CFogController::YouForgotToImplementOrDeclareServerClass  (line 84, @0x0000000001ecc010, libserver.so)
int __fastcall CFogController::YouForgotToImplementOrDeclareServerClass(CFogController *const this)
{
  return 0;
}


// CFogController::GetServerClass  (line 84, @0x0000000001ed1580, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CFogController::GetServerClass(CFogController *const this)
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


// CFogController::CFogController  (line 87, @0x0000000001edcc10, libserver.so)  // inlines: NetworkStateChanged, NetworkVar_m_fog, Set, operator=<bool>, operator=<float>
// calls: CBaseEntity::CBaseEntity, fogparams_t::fogparams_t, CFogController::NetworkVar_m_fog::NetworkStateChanged, CBaseEntity::~CBaseEntity, _Unwind_Resume
// callers: CFogController::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CFogController::CFogController(CFogController *const this)
{
  bool v2; // zf
  __int64 v3; // xmm0_8
  __int64 v4; // xmm1_8

  CBaseEntity::CBaseEntity(this);
  this->_vptr_IHandleEntity = &off_3FBC290;
  fogparams_t::fogparams_t(&this->m_fog);
  v2 = !this->m_fog.enable.m_Value;
  this->m_fog._vptr_fogparams_t = &off_3FB63B0;
  if ( !v2 )
  {
    CFogController::NetworkVar_m_fog::NetworkStateChanged(&this->m_fog, 0x58u, -1, -1);
    this->m_fog.enable.m_Value = 0;
  }
  v3 = 1065353216;
  if ( this->m_fog.maxdensity.m_Value != 1.0 )
  {
    (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 48, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 1.0);
    this->m_fog.maxdensity.m_Value = 1.0;
  }
  v4 = 1065353216;
  if ( this->m_fog.HDRColorScale.m_Value != 1.0 )
  {
    (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 56, 0xFFFFFFFFLL, 0xFFFFFFFFLL, *&v3, 1.0);
    this->m_fog.HDRColorScale.m_Value = 1.0;
  }
  if ( this->m_fog.m_bNoReflectionFog.m_Value )
  {
    (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 90, 0xFFFFFFFFLL, 0xFFFFFFFFLL, *&v3, *&v4);
    this->m_fog.m_bNoReflectionFog.m_Value = 0;
  }
}


// CFogController::~CFogController  (line 97, @0x0000000001ecc100, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CFogController::~CFogController(CFogController *const this)
{
  this->_vptr_IHandleEntity = &off_3FBC290;
  CBaseEntity::~CBaseEntity(this);
}


// CFogController::~CFogController  (line 97, @0x0000000001ecc120, libserver.so)  // inlines: ~CFogController
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CFogController::~CFogController(CFogController *const this)
{
  this->_vptr_IHandleEntity = &off_3FBC290;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CFogController::Spawn  (line 101, @0x0000000001ecf550, libserver.so)  // inlines: NetworkStateChanged, Set, SetRawColor, operator=, operator=<CNetworkVarBase<float, fogparams_t::NetworkVar_skyboxFogFactor> >
// calls: CBaseEntity::Spawn, CEntityInstance::IsAuthoritative
void __fastcall CFogController::Spawn(CFogController *const this, const CEntityKeyValues *pKeyValues)
{
  float m_Value; // [rsp+Ch] [rbp-14h]

  CBaseEntity::Spawn(this, pKeyValues);
  if ( CEntityInstance::IsAuthoritative(this) )
  {
    if ( *&this->m_fog.colorPrimaryLerpTo != *&this->m_fog.colorPrimary )
    {
      (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 28, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_fog.colorPrimaryLerpTo = this->m_fog.colorPrimary;
    }
    if ( *&this->m_fog.colorSecondaryLerpTo != *&this->m_fog.colorSecondary )
    {
      (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 32, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_fog.colorSecondaryLerpTo = this->m_fog.colorSecondary;
    }
    if ( this->m_fog.skyboxFogFactor.m_Value != this->m_fog.skyboxFogFactorLerpTo.m_Value )
    {
      m_Value = this->m_fog.skyboxFogFactor.m_Value;
      (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 64, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_fog.skyboxFogFactorLerpTo.m_Value = m_Value;
    }
  }
}


// CFogController::Activate  (line 126, @0x0000000001ecf970, libserver.so)  // inlines: CalcAbsolutePosition, GetAbsAngles, GetForModify, Load, NetworkStateChanged, Set, VectorMultiply, operator!=, operator*, operator*=, operator=
// calls: CBaseEntity::Activate, CEntityInstance::IsAuthoritative, CGameSceneNode::CalcAbsolutePositionWhenDirty, AngleVectors
void __fastcall CFogController::Activate(CFogController *const this, ActivateType_t activateType)
{
  CGameSceneNode *m_pGameSceneNode; // r12
  float z; // xmm3_4
  vec_t v5; // [rsp+4h] [rbp-2Ch]
  vec_t v6; // [rsp+8h] [rbp-28h]
  vec_t v7; // [rsp+Ch] [rbp-24h]

  CBaseEntity::Activate(this, activateType);
  if ( this->m_bUseAngles && CEntityInstance::IsAuthoritative(this) )
  {
    (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_pGameSceneNode = this->m_pGameSceneNode;
    if ( m_pGameSceneNode->m_bDirtyAbsTransform.m_value )
      CGameSceneNode::CalcAbsolutePositionWhenDirty(this->m_pGameSceneNode);
    AngleVectors(&m_pGameSceneNode->m_angAbsRotation, &this->m_fog.dirPrimary.m_Value, 0, 0);
    z = this->m_fog.dirPrimary.m_Value.z;
    if ( this->m_fog.dirPrimary.m_Value.x != -this->m_fog.dirPrimary.m_Value.x
      || this->m_fog.dirPrimary.m_Value.y != -this->m_fog.dirPrimary.m_Value.y
      || z != -z )
    {
      v5 = -z;
      v6 = -this->m_fog.dirPrimary.m_Value.y;
      v7 = -this->m_fog.dirPrimary.m_Value.x;
      (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_fog.dirPrimary.m_Value.x = v7;
      this->m_fog.dirPrimary.m_Value.y = v6;
      this->m_fog.dirPrimary.m_Value.z = v5;
    }
  }
}


// CFogController::UpdateTransmitState  (line 140, @0x0000000001ecc260, libserver.so)  // inlines: SetTransmitState
// calls: CNetworkTransmitComponent::SetTransmitState
int __fastcall CFogController::UpdateTransmitState(CFogController *const this)
{
  return CNetworkTransmitComponent::SetTransmitState(&this->m_NetworkTransmitComponent, 4);
}


// CFogController::InputSetStartDist  (line 148, @0x0000000001ecefd0, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CFogController::InputSetStartDist(CFogController *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 != this->m_fog.start.m_Value )
  {
    v4 = m_float64;
    (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 36, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fog.start.m_Value = v4;
  }
}


// CFogController::InputSetEndDist  (line 157, @0x0000000001ecef50, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CFogController::InputSetEndDist(CFogController *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 != this->m_fog.end.m_Value )
  {
    v4 = m_float64;
    (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 40, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fog.end.m_Value = v4;
  }
}


// CFogController::InputSetMaxDensity  (line 167, @0x0000000001ecf3e0, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CFogController::InputSetMaxDensity(CFogController *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 != this->m_fog.maxdensity.m_Value )
  {
    v4 = m_float64;
    (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 48, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fog.maxdensity.m_Value = v4;
  }
}


// CFogController::InputTurnOn  (line 175, @0x0000000001ecf390, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CFogController::InputTurnOn(CFogController *const this, inputdata_t *const inputdata)
{
  if ( !this->m_fog.enable.m_Value )
  {
    (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 88, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fog.enable.m_Value = 1;
  }
}


// CFogController::InputTurnOff  (line 184, @0x0000000001ecf460, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CFogController::InputTurnOff(CFogController *const this, inputdata_t *const inputdata)
{
  if ( this->m_fog.enable.m_Value )
  {
    (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 88, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fog.enable.m_Value = 0;
  }
}


// CFogController::InputSetColor  (line 193, @0x0000000001ecf0a0, libserver.so)  // inlines: Color32, FromUint32, NetworkStateChanged, Set, SetRawColor, operator Color, operator=
void __fastcall CFogController::InputSetColor(CFogController *const this, inputdata_t *const inputdata)
{
  int m_int; // r12d

  m_int = inputdata->value.m_int;
  if ( m_int != *&this->m_fog.colorPrimary )
  {
    (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fog.colorPrimary = m_int;
  }
}


// CFogController::InputSetColorSecondary  (line 203, @0x0000000001ecf050, libserver.so)  // inlines: Color32, FromUint32, NetworkStateChanged, Set, SetRawColor, operator Color, operator=
void __fastcall CFogController::InputSetColorSecondary(CFogController *const this, inputdata_t *const inputdata)
{
  int m_int; // r12d

  m_int = inputdata->value.m_int;
  if ( m_int != *&this->m_fog.colorSecondary )
  {
    (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 24, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fog.colorSecondary = m_int;
  }
}


// CFogController::InputSetFarZ  (line 209, @0x0000000001ecf1c0, libserver.so)  // inlines: Int, NetworkStateChanged, Set, operator int, operator=<int>
void __fastcall CFogController::InputSetFarZ(CFogController *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  int m_float; // eax
  float v5; // [rsp+Ch] [rbp-14h]

  m_type = inputdata->value.m_type;
  if ( m_type == 1 )
  {
    m_float = inputdata->value.m_float;
  }
  else if ( m_type == 34 )
  {
    m_float = inputdata->value.m_float64;
  }
  else
  {
    m_float = inputdata->value.m_int;
  }
  if ( m_float != this->m_fog.farz.m_Value )
  {
    v5 = m_float;
    (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 44, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fog.farz.m_Value = v5;
  }
}


// CFogController::InputSetAngles  (line 218, @0x0000000001ee14c0, libserver.so)  // inlines: CalcAbsolutePosition, GetAbsAngles, GetForModify, Load, NetworkStateChanged, Set, SetAbsAngles, TempString, ToString, VectorMultiply, operator!=, operator*, operator*=, operator=
// calls: CVariantBase<CVariantDefaultAllocator>::AssignTo, UTIL_StringToVector, AngleVectors, CGameSceneNode::SetAbsAngles, CGameSceneNode::CalcAbsolutePositionWhenDirty
// globals: CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CFogController::InputSetAngles(CFogController *const this, inputdata_t *const inputdata)
{
  char *m_pszString; // rsi
  CGameSceneNode *m_pGameSceneNode; // r12
  float z; // xmm4_4
  vec_t v6; // [rsp+4h] [rbp-4Ch]
  vec_t v7; // [rsp+8h] [rbp-48h]
  vec_t v8; // [rsp+Ch] [rbp-44h]
  QAngle angles; // [rsp+10h] [rbp-40h] BYREF
  Vector vTemp; // [rsp+20h] [rbp-30h] BYREF

  if ( inputdata->value.m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    CVariantBase<CVariantDefaultAllocator>::AssignTo(
      &inputdata->value,
      &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
      0x200u);
    m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
  }
  UTIL_StringToVector(&angles.x, m_pszString);
  AngleVectors(&angles, &vTemp, 0, 0);
  CGameSceneNode::SetAbsAngles(this->m_pGameSceneNode, &angles);
  (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  m_pGameSceneNode = this->m_pGameSceneNode;
  if ( m_pGameSceneNode->m_bDirtyAbsTransform.m_value )
    CGameSceneNode::CalcAbsolutePositionWhenDirty(this->m_pGameSceneNode);
  AngleVectors(&m_pGameSceneNode->m_angAbsRotation, &this->m_fog.dirPrimary.m_Value, 0, 0);
  z = this->m_fog.dirPrimary.m_Value.z;
  if ( this->m_fog.dirPrimary.m_Value.x != -this->m_fog.dirPrimary.m_Value.x
    || this->m_fog.dirPrimary.m_Value.y != -this->m_fog.dirPrimary.m_Value.y
    || z != -z )
  {
    v6 = -z;
    v7 = -this->m_fog.dirPrimary.m_Value.y;
    v8 = -this->m_fog.dirPrimary.m_Value.x;
    (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fog.dirPrimary.m_Value.x = v8;
    this->m_fog.dirPrimary.m_Value.y = v7;
    this->m_fog.dirPrimary.m_Value.z = v6;
  }
}


// CFogController::DrawDebugTextOverlays  (line 238, @0x0000000001ee2b90, libserver.so)  // inlines: EntityText
// calls: CBaseEntity::DrawDebugTextOverlays, V_snprintf, IDebugOverlay::EntityText, __stack_chk_fail
// strings: "State: %s", "Start: %3.0f", "End  : %3.0f", "1) Red  : %i", "1) Green: %i", "1) Blue : %i" (10 total)
int __fastcall CFogController::DrawDebugTextOverlays(
        CFogController *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v3; // r14
  char v4; // r12
  int v6; // r13d
  const char *v7; // rcx
  int v8; // edx
  char tempstr[520]; // [rsp+10h] [rbp-230h] BYREF
  unsigned __int64 v11; // [rsp+218h] [rbp-28h]

  v3 = iDebugFilterFlags;
  v4 = nDebugOverlayBits;
  v11 = __readfsqword(0x28u);
  v6 = CBaseEntity::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v4 & 1) != 0 && (v3 & 0x4000) != 0 )
  {
    v7 = "On";
    if ( !this->m_fog.enable.m_Value )
      v7 = "Off";
    V_snprintf(tempstr, 512, "State: %s", v7);
    IDebugOverlay::EntityText(g_pDebugOverlay, this, v6, tempstr, 0.0, 255, 255, 255, 255);
    V_snprintf(tempstr, 512, "Start: %3.0f", this->m_fog.start.m_Value);
    IDebugOverlay::EntityText(g_pDebugOverlay, this, v6 + 1, tempstr, 0.0, 255, 255, 255, 255);
    V_snprintf(tempstr, 512, "End  : %3.0f", this->m_fog.end.m_Value);
    IDebugOverlay::EntityText(g_pDebugOverlay, this, v6 + 2, tempstr, 0.0, 255, 255, 255, 255);
    V_snprintf(tempstr, 512, "1) Red  : %i", this->m_fog.colorPrimary.m_Value._color[0]);
    IDebugOverlay::EntityText(g_pDebugOverlay, this, v6 + 3, tempstr, 0.0, 255, 255, 255, 255);
    V_snprintf(tempstr, 512, "1) Green: %i", this->m_fog.colorPrimary.m_Value._color[1]);
    IDebugOverlay::EntityText(g_pDebugOverlay, this, v6 + 4, tempstr, 0.0, 255, 255, 255, 255);
    V_snprintf(tempstr, 512, "1) Blue : %i", this->m_fog.colorPrimary.m_Value._color[2]);
    IDebugOverlay::EntityText(g_pDebugOverlay, this, v6 + 5, tempstr, 0.0, 255, 255, 255, 255);
    V_snprintf(tempstr, 512, "2) Red  : %i", this->m_fog.colorSecondary.m_Value._color[0]);
    IDebugOverlay::EntityText(g_pDebugOverlay, this, v6 + 6, tempstr, 0.0, 255, 255, 255, 255);
    V_snprintf(tempstr, 512, "2) Green: %i", this->m_fog.colorSecondary.m_Value._color[1]);
    IDebugOverlay::EntityText(g_pDebugOverlay, this, v6 + 7, tempstr, 0.0, 255, 255, 255, 255);
    V_snprintf(tempstr, 512, "2) Blue : %i", this->m_fog.colorSecondary.m_Value._color[2]);
    IDebugOverlay::EntityText(g_pDebugOverlay, this, v6 + 8, tempstr, 0.0, 255, 255, 255, 255);
    V_snprintf(tempstr, 512, "HDR Color Scale: %0.3f", this->m_fog.HDRColorScale.m_Value);
    v8 = v6 + 9;
    v6 += 10;
    IDebugOverlay::EntityText(g_pDebugOverlay, this, v8, tempstr, 0.0, 255, 255, 255, 255);
  }
  return v6;
}


// CFogController::InputSetColorLerpTo  (line 296, @0x0000000001ecf340, libserver.so)  // inlines: Color32, FromUint32, NetworkStateChanged, Set, SetRawColor, operator Color, operator=
void __fastcall CFogController::InputSetColorLerpTo(CFogController *const this, inputdata_t *const data)
{
  int m_int; // r12d

  this->m_iChangedVariables |= 1u;
  m_int = data->value.m_int;
  if ( m_int != *&this->m_fog.colorPrimaryLerpTo )
  {
    (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 28, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fog.colorPrimaryLerpTo = m_int;
  }
}


// CFogController::InputSetColorSecondaryLerpTo  (line 302, @0x0000000001ecf2f0, libserver.so)  // inlines: Color32, FromUint32, NetworkStateChanged, Set, SetRawColor, operator Color, operator=
void __fastcall CFogController::InputSetColorSecondaryLerpTo(CFogController *const this, inputdata_t *const data)
{
  int m_int; // r12d

  this->m_iChangedVariables |= 2u;
  m_int = data->value.m_int;
  if ( m_int != *&this->m_fog.colorSecondaryLerpTo )
  {
    (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 32, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fog.colorSecondaryLerpTo = m_int;
  }
}


// CFogController::InputSetStartDistLerpTo  (line 308, @0x0000000001ececb0, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CFogController::InputSetStartDistLerpTo(CFogController *const this, inputdata_t *const data)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  this->m_iChangedVariables |= 4u;
  if ( data->value.m_type == 34 )
    m_float64 = data->value.m_float64;
  else
    m_float64 = data->value.m_float;
  if ( m_float64 != this->m_fog.startLerpTo.m_Value )
  {
    v4 = m_float64;
    (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 68, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fog.startLerpTo.m_Value = v4;
  }
}


// CFogController::InputSetEndDistLerpTo  (line 314, @0x0000000001ecedd0, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CFogController::InputSetEndDistLerpTo(CFogController *const this, inputdata_t *const data)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  this->m_iChangedVariables |= 8u;
  if ( data->value.m_type == 34 )
    m_float64 = data->value.m_float64;
  else
    m_float64 = data->value.m_float;
  if ( m_float64 != this->m_fog.endLerpTo.m_Value )
  {
    v4 = m_float64;
    (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 72, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fog.endLerpTo.m_Value = v4;
  }
}


// CFogController::InputSetMaxDensityLerpTo  (line 320, @0x0000000001eced40, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CFogController::InputSetMaxDensityLerpTo(CFogController *const this, inputdata_t *const data)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  this->m_iChangedVariables |= 0x10u;
  if ( data->value.m_type == 34 )
    m_float64 = data->value.m_float64;
  else
    m_float64 = data->value.m_float;
  if ( m_float64 != this->m_fog.maxdensityLerpTo.m_Value )
  {
    v4 = m_float64;
    (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 76, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fog.maxdensityLerpTo.m_Value = v4;
  }
}


// CFogController::InputSet2DSkyboxFogFactor  (line 326, @0x0000000001eceed0, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CFogController::InputSet2DSkyboxFogFactor(CFogController *const this, inputdata_t *const data)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  if ( data->value.m_type == 34 )
    m_float64 = data->value.m_float64;
  else
    m_float64 = data->value.m_float;
  if ( m_float64 != this->m_fog.skyboxFogFactor.m_Value )
  {
    v4 = m_float64;
    (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 60, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fog.skyboxFogFactor.m_Value = v4;
  }
}


// CFogController::InputSet2DSkyboxFogFactorLerpTo  (line 331, @0x0000000001ecf260, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CFogController::InputSet2DSkyboxFogFactorLerpTo(CFogController *const this, inputdata_t *const data)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  this->m_iChangedVariables |= 0x20u;
  if ( data->value.m_type == 34 )
    m_float64 = data->value.m_float64;
  else
    m_float64 = data->value.m_float;
  if ( m_float64 != this->m_fog.skyboxFogFactorLerpTo.m_Value )
  {
    v4 = m_float64;
    (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 64, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fog.skyboxFogFactorLerpTo.m_Value = v4;
  }
}


// CFogController::InputStartFogTransition  (line 337, @0x0000000001ee77b0, libserver.so)  // inlines: NetworkStateChanged, Set, curtime, operator=<double>
// calls: CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// globals: CFogController::SetLerpValues(void)
void __fastcall CFogController::InputStartFogTransition(CFogController *const this, inputdata_t *const data)
{
  double v3; // xmm1_8
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v5; // r12
  float v6; // xmm0_4
  CGlobalVars *v7; // r12
  double v8; // xmm0_8
  FnGlobalVarsWarningFunc v9; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v11; // [rsp+0h] [rbp-24h]

  CBaseEntity::ThinkSet(this, CFogController::SetLerpValues, 0.0, 0, 0);
  m_flCurrentTime = 0.0;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v5->m_flCurrentTime;
  }
  v6 = (m_flCurrentTime + this->m_fog.duration.m_Value) + 0.1;
  if ( v6 != this->m_fog.lerptime.m_Value )
  {
    v11 = v6;
    (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 80, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fog.lerptime.m_Value = v11;
  }
  v7 = gpGlobals;
  v8 = 0.0;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v9 = gpGlobals->m_pfnWarningFunc;
      if ( v9 != 0 )
        (v9)(1, 0.0);
    }
    *&v8 = LODWORD(v7->m_flCurrentTime);
  }
  *&v8 = *&v8 + this->m_fog.duration.m_Value;
  CBaseEntity::SetNextThink(this, v8, v3, 0);
}


// CFogController::SetLerpValues  (line 345, @0x0000000001ecfab0, libserver.so)  // inlines: NetworkStateChanged, Set, SetRawColor, curtime, operator=, operator=<CNetworkVarBase<float, fogparams_t::NetworkVar_endLerpTo> >, operator=<CNetworkVarBase<float, fogparams_t::NetworkVar_maxdensityLerpTo> >, operator=<CNetworkVarBase<float, fogparams_t::NetworkVar_skyboxFogFactorLerpTo> >, operator=<CNetworkVarBase<float, fogparams_t::NetworkVar_startLerpTo> >, operator=<float>
void __fastcall CFogController::SetLerpValues(CFogController *const this)
{
  int m_iChangedVariables; // eax
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v4; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v6; // [rsp+Ch] [rbp-14h]
  float m_Value; // [rsp+Ch] [rbp-14h]
  float v8; // [rsp+Ch] [rbp-14h]
  float v9; // [rsp+Ch] [rbp-14h]
  float v10; // [rsp+Ch] [rbp-14h]

  m_iChangedVariables = this->m_iChangedVariables;
  if ( (m_iChangedVariables & 1) == 0 || *&this->m_fog.colorPrimary == *&this->m_fog.colorPrimaryLerpTo )
  {
    if ( (m_iChangedVariables & 2) == 0 )
      goto LABEL_3;
  }
  else
  {
    (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fog.colorPrimary = this->m_fog.colorPrimaryLerpTo;
    m_iChangedVariables = this->m_iChangedVariables;
    if ( (m_iChangedVariables & 2) == 0 )
      goto LABEL_3;
  }
  if ( *&this->m_fog.colorSecondary != *&this->m_fog.colorSecondaryLerpTo )
  {
    (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 24, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fog.colorSecondary = this->m_fog.colorSecondaryLerpTo;
    m_iChangedVariables = this->m_iChangedVariables;
  }
LABEL_3:
  if ( (m_iChangedVariables & 4) != 0 && this->m_fog.startLerpTo.m_Value != this->m_fog.start.m_Value )
  {
    m_Value = this->m_fog.startLerpTo.m_Value;
    (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 36, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_iChangedVariables = this->m_iChangedVariables;
    this->m_fog.start.m_Value = m_Value;
  }
  if ( (m_iChangedVariables & 8) != 0 && this->m_fog.endLerpTo.m_Value != this->m_fog.end.m_Value )
  {
    v8 = this->m_fog.endLerpTo.m_Value;
    (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 40, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_iChangedVariables = this->m_iChangedVariables;
    this->m_fog.end.m_Value = v8;
  }
  if ( (m_iChangedVariables & 0x10) != 0 && this->m_fog.maxdensityLerpTo.m_Value != this->m_fog.maxdensity.m_Value )
  {
    v9 = this->m_fog.maxdensityLerpTo.m_Value;
    (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 48, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_iChangedVariables = this->m_iChangedVariables;
    this->m_fog.maxdensity.m_Value = v9;
  }
  if ( (m_iChangedVariables & 0x20) != 0
    && this->m_fog.skyboxFogFactorLerpTo.m_Value != this->m_fog.skyboxFogFactor.m_Value )
  {
    v10 = this->m_fog.skyboxFogFactorLerpTo.m_Value;
    (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 60, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fog.skyboxFogFactor.m_Value = v10;
  }
  m_flCurrentTime = 0.0;
  this->m_iChangedVariables = 0;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v4->m_flCurrentTime;
  }
  if ( m_flCurrentTime != this->m_fog.lerptime.m_Value )
  {
    v6 = m_flCurrentTime;
    (*(this->m_fog._vptr_fogparams_t + 1))(&this->m_fog, 80, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fog.lerptime.m_Value = v6;
  }
}


// CFogSystem::GameInit  (line 387, @0x0000000001ecc020, libserver.so)  // inlines: Set, operator=
void __fastcall CFogSystem::GameInit(CFogSystem *const this, const EventGameInit_t *const msg)
{
  this->m_hMasterController.m_Index = -1;
}


// CFogSystem::InitMasterController  (line 396, @0x0000000001edcd60, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, GetSpawnGroupHandle, Next, Set, TypedEntityInstanceByClassIter_t, operator=
// calls: EntityInstanceByClassIter_t::EntityInstanceByClassIter_t, EntityInstanceByClassIter_t::Next, UTIL_PlayerBySlot, CBasePlayer::InitFogController
// callers: CFogSystem::ActiveSpawnGroupChanged
// strings: "env_fog_controller"
void __fastcall CFogSystem::InitMasterController(CFogSystem *const this, SpawnGroupHandle_t hSpawnGroup)
{
  CEntityInstance *v4; // rax
  CEntityIdentity *m_pEntity; // rdx
  SpawnGroupHandle_t v6; // ecx
  int v7; // eax
  __int16 v8; // cx
  int i; // ebx
  CBasePlayer *v10; // rax
  TypedEntityInstanceByClassIter_t<CFogController> iter; // [rsp+0h] [rbp-50h] BYREF

  this->m_hMasterController.m_Index = -1;
  EntityInstanceByClassIter_t::EntityInstanceByClassIter_t(
    &iter,
    "env_fog_controller",
    0,
    EntityIterType_t::ENTITY_ENUM_ITERATE_NON_DORMANT_ONLY);
LABEL_2:
  while ( 1 )
  {
    v4 = EntityInstanceByClassIter_t::Next(&iter);
    if ( v4 == 0 )
      break;
    while ( 1 )
    {
      m_pEntity = v4->m_pEntity;
      v6 = m_pEntity != 0 ? m_pEntity->m_hSpawnGroup : 0;
      if ( hSpawnGroup != v6
        || (BYTE4(v4[8].m_hPrivateScope.m_hScope) & 1) == 0 && this->m_hMasterController.m_Index != -1 )
      {
        break;
      }
      if ( m_pEntity == 0 )
      {
        this->m_hMasterController.m_Index = -1;
        goto LABEL_2;
      }
      v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v8 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hMasterController.m_Index) = v8 | this->m_hMasterController.m_Index & 0x8000;
      this->m_hMasterController.m_Index = (v7 << 15) | this->m_hMasterController.m_Index & 0x7FFF;
      v4 = EntityInstanceByClassIter_t::Next(&iter);
      if ( v4 == 0 )
        goto LABEL_11;
    }
  }
LABEL_11:
  for ( i = 0; gpGlobals->maxClients > i; ++i )
  {
    v10 = UTIL_PlayerBySlot(i);
    if ( v10 != 0 )
      CBasePlayer::InitFogController(v10);
  }
}


// CFogSystem::ActiveSpawnGroupChanged  (line 432, @0x0000000001edceb0, libserver.so)
// calls: CFogSystem::InitMasterController
void __fastcall CFogSystem::ActiveSpawnGroupChanged(
        CFogSystem *const this,
        const EventActiveSpawnGroupChanged_t *const msg)
{
  CFogSystem::InitMasterController(this, msg->m_SpawnGroupHandle);
}


// CFogTrigger::~CFogTrigger  (line 439, @0x0000000001eed820, libserver.so)  // inlines: Purge, RemoveAll, ~CBaseToggle, ~CBaseTrigger, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CFogTrigger::~CFogTrigger(CFogTrigger *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // r12

  this->m_hTouchingEntities.m_Size = 0;
  v2 = (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_40BE1B0;
  if ( v2 )
  {
    p_m_Memory = &this->m_hTouchingEntities.m_Memory;
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(p_m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFogTrigger::~CFogTrigger  (line 439, @0x0000000001eed920, libserver.so)  // inlines: Purge, RemoveAll, ~CBaseToggle, ~CBaseTrigger, ~CFogTrigger, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CFogTrigger::~CFogTrigger(CFogTrigger *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // r12

  this->m_hTouchingEntities.m_Size = 0;
  v2 = (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_40BE1B0;
  if ( v2 )
  {
    p_m_Memory = &this->m_hTouchingEntities.m_Memory;
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(p_m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CFogTrigger::GetEntityClass  (line 441, @0x0000000001eeaaf0, libserver.so)
CEntityClass *__cdecl CFogTrigger::GetEntityClass()
{
  return g_pEntityCFogTriggerClass;
}


// CFogTrigger::Schema_DynamicBinding  (line 441, @0x0000000001eeab00, libserver.so)
// globals: CFogTrigger::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFogTrigger::Schema_DynamicBinding(const CFogTrigger *const this)
{
  return CFogTrigger::s_pSchemaBinding;
}


// CFogTrigger::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 441, @0x0000000001eeab10, libserver.so)
// globals: CFogTrigger::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFogTrigger::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFogTrigger::CEntityInstanceEntityClass *const this)
{
  return CFogTrigger::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFogTrigger::CEntityInstanceEntityClass::DestructInstance  (line 441, @0x0000000001eeab20, libserver.so)  // inlines: Destruct<CFogTrigger>
void __fastcall CFogTrigger::CEntityInstanceEntityClass::DestructInstance(
        CFogTrigger::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFogTrigger::CEntityInstanceEntityClass::FreeInstance  (line 441, @0x0000000001eeab40, libserver.so)
void __fastcall CFogTrigger::CEntityInstanceEntityClass::FreeInstance(
        CFogTrigger::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFogTrigger::CEntityInstanceEntityClass::CanAllocate  (line 441, @0x0000000001eeab60, libserver.so)
bool __fastcall CFogTrigger::CEntityInstanceEntityClass::CanAllocate(
        const CFogTrigger::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFogTrigger::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 441, @0x0000000001eeab70, libserver.so)
// globals: CFogTrigger::s_pSchemaBinding
const ISchemaBinding *__fastcall CFogTrigger::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFogTrigger::CEntityInstanceEntityClass *const this)
{
  return CFogTrigger::s_pSchemaBinding;
}


// CFogTrigger::CEntityInstanceEntityClass::AllocateInstance  (line 441, @0x0000000001eec0a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFogTrigger::CEntityInstanceEntityClass::AllocateInstance(
        CFogTrigger::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1576);
  memset(v1, 0, 0x628u);
  return v1;
}


// CFogTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 441, @0x0000000001eedc70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFogTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFogTrigger::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CFogTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 441, @0x0000000001eedc90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFogTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFogTrigger::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFogTrigger::CEntityInstanceEntityClass::ConstructInstance  (line 441, @0x0000000001ef0560, libserver.so)  // inlines: CFogTrigger, Construct<CFogTrigger>, Purge, RemoveAll, ~CBaseToggle, ~CBaseTrigger, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseTrigger::CBaseTrigger, fogparams_t::fogparams_t, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
CEntityInstance *__fastcall CFogTrigger::CEntityInstanceEntityClass::ConstructInstance(
        CFogTrigger::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseTrigger::CBaseTrigger(p);
    *p = &off_3FBCB10;
    fogparams_t::fogparams_t((p + 1480));
  }
  return p;
}


// CFogTrigger::GetEntityClassInternal  (line 441, @0x0000000001ef5f00, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseTrigger::InitScriptDesc, CBaseTrigger::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "trigger_fog", "CFogTrigger"
// globals: `guard variable for'CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass, CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CFogTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFogTrigger::GetEntityClassInfo(void)::g_EntityCFogTriggerClassInfo, CFogTrigger::GetEntityClassInfo(void)::g_EntityCFogTriggerClassInfo
CEntityClass *__cdecl CFogTrigger::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass) != 0 )
  {
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_designerName.u.m_Id = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass._vptr_CEntityClass = off_3F79390;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_ComponentOffsets.m_Size = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_AllHelpers.m_Size = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_classInputs.m_Size = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_classOutputs.m_Size = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_requiredEHandle.m_Index = -1;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_hNetworkSerializer = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_pBaseClassInfo = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_pClassInfo = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_flags = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_nAllHelpersFlags = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_pScriptClassDesc = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_pInputs = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_nInputCount = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_pOutputs = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_nOutputCount = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_pGameClass = 0;
    CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass._vptr_CEntityClass = off_3FBCA90;
    __cxa_guard_release(&`guard variable for'CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass);
    __cxa_atexit(
      CFogTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass,
      &_dso_handle);
  }
  if ( g_pEntityCFogTriggerClass != 0 )
    return &CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass;
  if ( `guard variable for'CFogTrigger::GetEntityClassInfo(void)::g_EntityCFogTriggerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFogTrigger::GetEntityClassInfo(void)::g_EntityCFogTriggerClassInfo) != 0 )
  {
    EntityClassInfo = CBaseTrigger::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFogTrigger::GetEntityClassInfo(void)::g_EntityCFogTriggerClassInfo,
      "CFogTrigger",
      "trigger_fog",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFogTrigger::GetEntityClassInfo(void)::g_EntityCFogTriggerClassInfo);
  }
  CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_pClassInfo = &CFogTrigger::GetEntityClassInfo(void)::g_EntityCFogTriggerClassInfo;
  CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_pBaseClassInfo = CFogTrigger::GetEntityClassInfo(void)::g_EntityCFogTriggerClassInfo.m_pBaseClassInfo;
  g_pEntityCFogTriggerClass = &CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass;
  CFogTrigger::GetEntityClassInfo(void)::g_EntityCFogTriggerClassInfo.m_pClass = &CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass;
  CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass.m_pScriptClassDesc = CBaseTrigger::InitScriptDesc();
  g_pEntityCFogTriggerClass->m_pComponentOverrides = 0;
  return &CFogTrigger::GetEntityClassInternal(void)::g_EntityCFogTriggerClass;
}


// CFogTrigger::GetDataDescMap  (line 459, @0x0000000001ecc030, libserver.so)
// globals: CFogTrigger::m_DataMap
datamap_t *__fastcall CFogTrigger::GetDataDescMap(CFogTrigger *const this)
{
  return &CFogTrigger::m_DataMap;
}


// CFogTrigger::AddDatadescMetadataKeys  (line 459, @0x0000000001edcec0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFogTrigger::GetEntityClass(void)
void __fastcall CFogTrigger::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFogTrigger::GetEntityClass);
}


// CFogTrigger::GetBaseMap  (line 459, @0x0000000001edcee0, libserver.so)
datamap_t *__cdecl CFogTrigger::GetBaseMap()
{
  return &CBaseTrigger::m_DataMap;
}


// DataMapInit<CFogTrigger>  (line 459, @0x0000000001edcef0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "CFogTrigger"
// globals: `guard variable for'DataMapInit<CFogTrigger>(CFogTrigger *)::nameHolder, CFogTrigger::GetEntityClass(void), CFogTrigger::m_DataMap, DataMapInit<CFogTrigger>(CFogTrigger *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFogTrigger>(CFogTrigger *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFogTrigger>(CFogTrigger *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFogTrigger>(CFogTrigger *)::nameHolder) != 0 )
  {
    DataMapInit<CFogTrigger>(CFogTrigger *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFogTrigger>(CFogTrigger *)::nameHolder.m_pszBase = "CFogTrigger";
    DataMapInit<CFogTrigger>(CFogTrigger *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFogTrigger>(CFogTrigger *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFogTrigger>(CFogTrigger *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFogTrigger>(CFogTrigger *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFogTrigger>(CFogTrigger *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFogTrigger>(CFogTrigger *)::nameHolder,
      &_dso_handle);
  }
  CFogTrigger::m_DataMap.dataNumFields = 9;
  CFogTrigger::m_DataMap.baseMap = &CBaseTrigger::m_DataMap;
  CFogTrigger::m_DataMap.dataDesc = &DataMapInit<CFogTrigger>(CFogTrigger *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFogTrigger::m_DataMap, CFogTrigger::GetEntityClass);
  return &CFogTrigger::m_DataMap;
}


// CFogTrigger::Spawn  (line 476, @0x0000000001ecee60, libserver.so)  // inlines: AddSpawnFlags, NetworkStateChanged, Set, operator|=<int>
// calls: CBaseTrigger::Spawn, CBaseTrigger::InitTrigger
void __fastcall CFogTrigger::Spawn(CFogTrigger *const this, const CEntityKeyValues *pKeyValues)
{
  unsigned int v4; // r13d

  v4 = this->m_spawnflags.m_Value | 0x40;
  if ( this->m_spawnflags.m_Value != v4 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_spawnflags.m_Value = v4;
  }
  CBaseTrigger::Spawn(this, pKeyValues);
  CBaseTrigger::InitTrigger(this, pKeyValues);
}


// CFogTrigger::StartTouch  (line 486, @0x0000000001eccc10, libserver.so)
// calls: CBaseTrigger::StartTouch, CBaseCombatCharacter::OnFogTriggerStartTouch
void __fastcall CFogTrigger::StartTouch(CFogTrigger *const this, CBaseEntity *other)
{
  CBaseCombatCharacter *v4; // rax

  if ( (*(this->_vptr_IHandleEntity + 223))(this) != 0 )
  {
    CBaseTrigger::StartTouch(this, other);
    v4 = (*(other->_vptr_IHandleEntity + 147))(other);
    if ( v4 != 0 )
      CBaseCombatCharacter::OnFogTriggerStartTouch(v4, this);
  }
}


// CFogTrigger::EndTouch  (line 502, @0x0000000001eccc60, libserver.so)
// calls: CBaseTrigger::EndTouch, CBaseCombatCharacter::OnFogTriggerEndTouch
void __fastcall CFogTrigger::EndTouch(CFogTrigger *const this, CBaseEntity *other)
{
  CBaseCombatCharacter *v4; // rax

  if ( (*(this->_vptr_IHandleEntity + 223))(this) != 0 )
  {
    CBaseTrigger::EndTouch(this, other);
    v4 = (*(other->_vptr_IHandleEntity + 147))(other);
    if ( v4 != 0 )
      CBaseCombatCharacter::OnFogTriggerEndTouch(v4, this);
  }
}


// GetWorldFogParams  (line 518, @0x0000000001edcfc0, libserver.so)  // inlines: FloatMakePositive, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetMasterFogController, GetRawColor, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetRawColor, VectorsAreEqual, operator CEntityInstance*, operator CFogController*, operator!=, operator!=<bool>, operator=, operator=<bool>, operator=<int>
// calls: CBaseCombatCharacter::GetFogTrigger, __dynamic_cast
// callers: CBaseCombatCharacter::GetFogParams
// globals: `typeinfo for'CFogTrigger, CEntityHandle::gm_pEntityList
bool __fastcall GetWorldFogParams(CBaseCombatCharacter *character, fogparams_t *const fog)
{
  CBaseEntity *FogTrigger; // rax
  void *v5; // rax
  __int64 p_m_pEntity; // r12
  float v7; // xmm0_4
  float x; // xmm1_4
  bool result; // al
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  bool v12; // zf

  (*(character->_vptr_IHandleEntity + 361))(character);
  if ( CBaseCombatCharacter::GetFogTrigger(character) != 0
    && (FogTrigger = CBaseCombatCharacter::GetFogTrigger(character)) != 0
    && (v5 = __dynamic_cast(FogTrigger, &`typeinfo for'CBaseEntity, &`typeinfo for'CFogTrigger, 0)) != 0 )
  {
    p_m_pEntity = v5 + 1480;
  }
  else
  {
    if ( s_FogSystem.m_hMasterController.m_Index + 2 <= 1
      || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(s_FogSystem.m_hMasterController.m_Index) >> 9)
                                                               & 0x3F]) == 0
      || (v11 = &v10[s_FogSystem.m_hMasterController.m_Index & 0x1FF]) == 0
      || s_FogSystem.m_hMasterController.m_Index != v11->m_EHandle.m_Index
      || v11->m_pInstance == 0 )
    {
LABEL_85:
      if ( fog->farz.m_Value == -1.0 )
      {
        result = fog->enable.m_Value;
        if ( !result )
          return result;
      }
      else
      {
        (*(fog->_vptr_fogparams_t + 1))(fog, 44, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v12 = !fog->enable.m_Value;
        fog->farz.m_Value = -1.0;
        if ( v12 )
          return 1;
      }
      (*(fog->_vptr_fogparams_t + 1))(fog, 88, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      fog->enable.m_Value = 0;
      return 1;
    }
    p_m_pEntity = &v11->m_pInstance[16].m_pEntity;
  }
  if ( p_m_pEntity == 0 )
    goto LABEL_85;
  if ( *(p_m_pEntity + 88) == fog->enable.m_Value && *(p_m_pEntity + 89) == fog->blend.m_Value )
  {
    if ( fabs(*(p_m_pEntity + 8) - fog->dirPrimary.m_Value.x) <= 0.0099999998
      && fabs(*(p_m_pEntity + 12) - fog->dirPrimary.m_Value.y) <= 0.0099999998 )
    {
      x = fog->dirPrimary.m_Value.x;
      v7 = *(p_m_pEntity + 8);
      if ( fabs(*(p_m_pEntity + 16) - fog->dirPrimary.m_Value.z) > 0.0099999998
        || *(p_m_pEntity + 20) != *&fog->colorPrimary
        || *(p_m_pEntity + 24) != *&fog->colorSecondary )
      {
        goto LABEL_8;
      }
      if ( *(p_m_pEntity + 60) == fog->skyboxFogFactor.m_Value
        && *(p_m_pEntity + 64) == fog->skyboxFogFactorLerpTo.m_Value
        && *(p_m_pEntity + 36) == fog->start.m_Value
        && *(p_m_pEntity + 40) == fog->end.m_Value
        && *(p_m_pEntity + 44) == fog->farz.m_Value
        && *(p_m_pEntity + 48) == fog->maxdensity.m_Value
        && *(p_m_pEntity + 52) == fog->exponent.m_Value
        && *(p_m_pEntity + 28) == *&fog->colorPrimaryLerpTo
        && *(p_m_pEntity + 32) == *&fog->colorSecondaryLerpTo
        && *(p_m_pEntity + 68) == fog->startLerpTo.m_Value
        && *(p_m_pEntity + 72) == fog->endLerpTo.m_Value
        && *(p_m_pEntity + 76) == fog->maxdensityLerpTo.m_Value
        && *(p_m_pEntity + 80) == fog->lerptime.m_Value
        && *(p_m_pEntity + 84) == fog->duration.m_Value
        && *(p_m_pEntity + 56) == fog->HDRColorScale.m_Value
        && *(p_m_pEntity + 90) == fog->m_bNoReflectionFog.m_Value )
      {
        return 0;
      }
    }
    x = fog->dirPrimary.m_Value.x;
    v7 = *(p_m_pEntity + 8);
  }
  else
  {
    v7 = *(p_m_pEntity + 8);
    x = fog->dirPrimary.m_Value.x;
  }
LABEL_8:
  if ( x != v7 || *(p_m_pEntity + 12) != fog->dirPrimary.m_Value.y || *(p_m_pEntity + 16) != fog->dirPrimary.m_Value.z )
  {
    (*(fog->_vptr_fogparams_t + 1))(fog, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    fog->dirPrimary.m_Value.x = *(p_m_pEntity + 8);
    fog->dirPrimary.m_Value.y = *(p_m_pEntity + 12);
    fog->dirPrimary.m_Value.z = *(p_m_pEntity + 16);
  }
  if ( *&fog->colorPrimary != *(p_m_pEntity + 20) )
  {
    (*(fog->_vptr_fogparams_t + 1))(fog, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    fog->colorPrimary = *(p_m_pEntity + 20);
  }
  if ( *&fog->colorSecondary != *(p_m_pEntity + 24) )
  {
    (*(fog->_vptr_fogparams_t + 1))(fog, 24, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    fog->colorSecondary = *(p_m_pEntity + 24);
  }
  if ( *&fog->colorPrimaryLerpTo != *(p_m_pEntity + 28) )
  {
    (*(fog->_vptr_fogparams_t + 1))(fog, 28, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    fog->colorPrimaryLerpTo = *(p_m_pEntity + 28);
  }
  if ( *&fog->colorSecondaryLerpTo != *(p_m_pEntity + 32) )
  {
    (*(fog->_vptr_fogparams_t + 1))(fog, 32, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    fog->colorSecondaryLerpTo = *(p_m_pEntity + 32);
  }
  if ( fog->start.m_Value != *(p_m_pEntity + 36) )
  {
    (*(fog->_vptr_fogparams_t + 1))(fog, 36, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    fog->start.m_Value = *(p_m_pEntity + 36);
  }
  if ( fog->end.m_Value != *(p_m_pEntity + 40) )
  {
    (*(fog->_vptr_fogparams_t + 1))(fog, 40, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    fog->end.m_Value = *(p_m_pEntity + 40);
  }
  if ( fog->farz.m_Value != *(p_m_pEntity + 44) )
  {
    (*(fog->_vptr_fogparams_t + 1))(fog, 44, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    fog->farz.m_Value = *(p_m_pEntity + 44);
  }
  if ( fog->maxdensity.m_Value != *(p_m_pEntity + 48) )
  {
    (*(fog->_vptr_fogparams_t + 1))(fog, 48, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    fog->maxdensity.m_Value = *(p_m_pEntity + 48);
  }
  if ( fog->exponent.m_Value != *(p_m_pEntity + 52) )
  {
    (*(fog->_vptr_fogparams_t + 1))(fog, 52, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    fog->exponent.m_Value = *(p_m_pEntity + 52);
  }
  if ( fog->HDRColorScale.m_Value != *(p_m_pEntity + 56) )
  {
    (*(fog->_vptr_fogparams_t + 1))(fog, 56, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    fog->HDRColorScale.m_Value = *(p_m_pEntity + 56);
  }
  if ( fog->skyboxFogFactor.m_Value != *(p_m_pEntity + 60) )
  {
    (*(fog->_vptr_fogparams_t + 1))(fog, 60, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    fog->skyboxFogFactor.m_Value = *(p_m_pEntity + 60);
  }
  if ( fog->skyboxFogFactorLerpTo.m_Value != *(p_m_pEntity + 64) )
  {
    (*(fog->_vptr_fogparams_t + 1))(fog, 64, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    fog->skyboxFogFactorLerpTo.m_Value = *(p_m_pEntity + 64);
  }
  if ( fog->startLerpTo.m_Value != *(p_m_pEntity + 68) )
  {
    (*(fog->_vptr_fogparams_t + 1))(fog, 68, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    fog->startLerpTo.m_Value = *(p_m_pEntity + 68);
  }
  if ( fog->endLerpTo.m_Value != *(p_m_pEntity + 72) )
  {
    (*(fog->_vptr_fogparams_t + 1))(fog, 72, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    fog->endLerpTo.m_Value = *(p_m_pEntity + 72);
  }
  if ( fog->maxdensityLerpTo.m_Value != *(p_m_pEntity + 76) )
  {
    (*(fog->_vptr_fogparams_t + 1))(fog, 76, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    fog->maxdensityLerpTo.m_Value = *(p_m_pEntity + 76);
  }
  if ( fog->lerptime.m_Value != *(p_m_pEntity + 80) )
  {
    (*(fog->_vptr_fogparams_t + 1))(fog, 80, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    fog->lerptime.m_Value = *(p_m_pEntity + 80);
  }
  if ( fog->duration.m_Value != *(p_m_pEntity + 84) )
  {
    (*(fog->_vptr_fogparams_t + 1))(fog, 84, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    fog->duration.m_Value = *(p_m_pEntity + 84);
  }
  if ( fog->enable.m_Value != *(p_m_pEntity + 88) )
  {
    (*(fog->_vptr_fogparams_t + 1))(fog, 88, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    fog->enable.m_Value = *(p_m_pEntity + 88);
  }
  if ( fog->blend.m_Value != *(p_m_pEntity + 89) )
  {
    (*(fog->_vptr_fogparams_t + 1))(fog, 89, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    fog->blend.m_Value = *(p_m_pEntity + 89);
  }
  if ( fog->m_bNoReflectionFog.m_Value != *(p_m_pEntity + 90) )
  {
    (*(fog->_vptr_fogparams_t + 1))(fog, 90, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    fog->m_bNoReflectionFog.m_Value = *(p_m_pEntity + 90);
  }
  fog->m_bPadding = *(p_m_pEntity + 91);
  return 1;
}


