// Reconstructed from DWARF by pahole; not original source.

// src/game/server/postprocesscontroller.cpp:56
class C_CPostProcessController_MapInstall {
	C_CPostProcessController_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPostProcessSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 20, @0x0000000002353330, libserver.so)
void __cdecl CPostProcessSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// PostProcessSystem  (line 25, @0x0000000002353340, libserver.so)
// callers: CBasePlayer::InitPostProcessController, CBasePlayer::UpdateFXVolume
// globals: s_PostProcessSystem
CPostProcessSystem *__cdecl PostProcessSystem()
{
  return &s_PostProcessSystem;
}


// CPostProcessController::GetDataDescMap  (line 31, @0x000000000234ab00, libserver.so)
// globals: CPostProcessController::m_DataMap
datamap_t *__fastcall CPostProcessController::GetDataDescMap(CPostProcessController *const this)
{
  return &CPostProcessController::m_DataMap;
}


// CPostProcessController::AddDatadescMetadataKeys  (line 31, @0x0000000002353350, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPostProcessController::GetEntityClass(void)
void __fastcall CPostProcessController::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPostProcessController::GetEntityClass);
}


// CPostProcessController::GetBaseMap  (line 31, @0x0000000002353370, libserver.so)
datamap_t *__cdecl CPostProcessController::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CPostProcessController>  (line 31, @0x0000000002353380, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "CPostProcessController"
// globals: `guard variable for'DataMapInit<CPostProcessController>(CPostProcessController *)::nameHolder, CPostProcessController::GetEntityClass(void), CPostProcessController::m_DataMap, DataMapInit<CPostProcessController>(CPostProcessController *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPostProcessController>(CPostProcessController *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPostProcessController>(CPostProcessController *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPostProcessController>(CPostProcessController *)::nameHolder) != 0 )
  {
    DataMapInit<CPostProcessController>(CPostProcessController *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPostProcessController>(CPostProcessController *)::nameHolder.m_pszBase = "CPostProcessController";
    DataMapInit<CPostProcessController>(CPostProcessController *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPostProcessController>(CPostProcessController *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPostProcessController>(CPostProcessController *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPostProcessController>(CPostProcessController *)::nameHolder.m_nLenBase = 22;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPostProcessController>(CPostProcessController *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPostProcessController>(CPostProcessController *)::nameHolder,
      &_dso_handle);
  }
  CPostProcessController::m_DataMap.dataNumFields = 19;
  CPostProcessController::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  CPostProcessController::m_DataMap.dataDesc = &DataMapInit<CPostProcessController>(CPostProcessController *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPostProcessController::m_DataMap, CPostProcessController::GetEntityClass);
  return &CPostProcessController::m_DataMap;
}


// CPostProcessController::YouForgotToImplementOrDeclareServerClass  (line 56, @0x000000000234ab10, libserver.so)
int __fastcall CPostProcessController::YouForgotToImplementOrDeclareServerClass(CPostProcessController *const this)
{
  return 0;
}


// CPostProcessController::GetServerClass  (line 56, @0x0000000002351cd0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CPostProcessController::GetServerClass(CPostProcessController *const this)
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


// CPostProcessController::CPostProcessController  (line 60, @0x0000000002353450, libserver.so)  // inlines: CNetworkVarBase, NetworkStateChanged
// calls: CBaseEntity::CBaseEntity, CBaseEntity::NetworkStateChanged, CBaseEntity::~CBaseEntity, _Unwind_Resume
// callers: CPostProcessController::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CPostProcessController::CPostProcessController(CPostProcessController *const this)
{
  int (**vptr_IHandleEntity)(...); // rax
  int (**v3)(...); // rax
  int (**v4)(...); // rax
  int (**v5)(...); // rax
  int (**v6)(...); // rax
  int (**v7)(...); // rax
  int (**v8)(...); // rax
  int (**v9)(...); // rax
  int (**v10)(...); // rax

  CBaseEntity::CBaseEntity(this);
  this->_vptr_IHandleEntity = &off_4095F10;
  this->m_fLocalContrastStrength.m_Value = 0.0;
  CBaseEntity::NetworkStateChanged(this, 0x308u, -1, -1);
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_fLocalContrastEdgeStrength.m_Value = 0.0;
  vptr_IHandleEntity[22](this, 780, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v3 = this->_vptr_IHandleEntity;
  this->m_fVignetteStart.m_Value = 1.0;
  v3[22](this, 784, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v4 = this->_vptr_IHandleEntity;
  this->m_fVignetteEnd.m_Value = 2.0;
  v4[22](this, 788, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v5 = this->_vptr_IHandleEntity;
  this->m_fVignetteBlurStrength.m_Value = 0.0;
  v5[22](this, 792, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v6 = this->_vptr_IHandleEntity;
  this->m_fFadeToBlackStrength.m_Value = 0.0;
  v6[22](this, 796, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v7 = this->_vptr_IHandleEntity;
  this->m_fGrainStrength.m_Value = 1.0;
  v7[22](this, 800, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v8 = this->_vptr_IHandleEntity;
  this->m_fTopVignetteStrength.m_Value = 1.0;
  v8[22](this, 804, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v9 = this->_vptr_IHandleEntity;
  this->m_fFadeTime.m_Value = 2.0;
  v9[22](this, 808, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v10 = this->_vptr_IHandleEntity;
  this->m_bMaster.m_Value = 0;
  v10[22](this, 812, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
}


// CPostProcessController::~CPostProcessController  (line 74, @0x000000000234b8a0, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPostProcessController::~CPostProcessController(CPostProcessController *const this)
{
  this->_vptr_IHandleEntity = &off_4095F10;
  CBaseEntity::~CBaseEntity(this);
}


// CPostProcessController::~CPostProcessController  (line 74, @0x000000000234b8c0, libserver.so)  // inlines: ~CPostProcessController
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPostProcessController::~CPostProcessController(CPostProcessController *const this)
{
  this->_vptr_IHandleEntity = &off_4095F10;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPostProcessController::Spawn  (line 78, @0x000000000234e790, libserver.so)  // inlines: HasSpawnFlags, IsMaster, NetworkStateChanged, Set, operator=<bool>
// calls: CBaseEntity::Spawn
void __fastcall CPostProcessController::Spawn(CPostProcessController *const this, const CEntityKeyValues *pKeyValues)
{
  bool v3; // r12

  CBaseEntity::Spawn(this, pKeyValues);
  v3 = this->m_spawnflags.m_Value & 1;
  if ( v3 != this->m_bMaster.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 812, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bMaster.m_Value = v3;
  }
}


// CPostProcessController::Activate  (line 88, @0x000000000234b9b0, libserver.so)
// calls: CBaseEntity::Activate
void __fastcall CPostProcessController::Activate(CPostProcessController *const this, ActivateType_t activateType)
{
  CBaseEntity::Activate(this, activateType);
}


// CPostProcessController::UpdateTransmitState  (line 96, @0x000000000234b860, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CPostProcessController::UpdateTransmitState(CPostProcessController *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CPostProcessController::InputSetLocalContrastStrength  (line 101, @0x000000000234e490, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CPostProcessController::InputSetLocalContrastStrength(
        CPostProcessController *const this,
        inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 != this->m_fLocalContrastStrength.m_Value )
  {
    v4 = m_float64;
    (*(this->_vptr_IHandleEntity + 22))(this, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fLocalContrastStrength.m_Value = v4;
  }
}


// CPostProcessController::InputSetLocalContrastEdgeStrength  (line 106, @0x000000000234e410, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CPostProcessController::InputSetLocalContrastEdgeStrength(
        CPostProcessController *const this,
        inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 != this->m_fLocalContrastEdgeStrength.m_Value )
  {
    v4 = m_float64;
    (*(this->_vptr_IHandleEntity + 22))(this, 780, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fLocalContrastEdgeStrength.m_Value = v4;
  }
}


// CPostProcessController::InputSetVignetteStart  (line 111, @0x000000000234e610, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CPostProcessController::InputSetVignetteStart(
        CPostProcessController *const this,
        inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 != this->m_fVignetteStart.m_Value )
  {
    v4 = m_float64;
    (*(this->_vptr_IHandleEntity + 22))(this, 784, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fVignetteStart.m_Value = v4;
  }
}


// CPostProcessController::InputSetVignetteEnd  (line 116, @0x000000000234e390, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CPostProcessController::InputSetVignetteEnd(
        CPostProcessController *const this,
        inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 != this->m_fVignetteEnd.m_Value )
  {
    v4 = m_float64;
    (*(this->_vptr_IHandleEntity + 22))(this, 788, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fVignetteEnd.m_Value = v4;
  }
}


// CPostProcessController::InputSetVignetteBlurStrength  (line 121, @0x000000000234e590, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CPostProcessController::InputSetVignetteBlurStrength(
        CPostProcessController *const this,
        inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 != this->m_fVignetteBlurStrength.m_Value )
  {
    v4 = m_float64;
    (*(this->_vptr_IHandleEntity + 22))(this, 792, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fVignetteBlurStrength.m_Value = v4;
  }
}


// CPostProcessController::InputSetFadeToBlackStrength  (line 126, @0x000000000234e310, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CPostProcessController::InputSetFadeToBlackStrength(
        CPostProcessController *const this,
        inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 != this->m_fFadeToBlackStrength.m_Value )
  {
    v4 = m_float64;
    (*(this->_vptr_IHandleEntity + 22))(this, 796, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fFadeToBlackStrength.m_Value = v4;
  }
}


// CPostProcessController::InputSetGrainStrength  (line 131, @0x000000000234e510, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CPostProcessController::InputSetGrainStrength(
        CPostProcessController *const this,
        inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 != this->m_fGrainStrength.m_Value )
  {
    v4 = m_float64;
    (*(this->_vptr_IHandleEntity + 22))(this, 800, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fGrainStrength.m_Value = v4;
  }
}


// CPostProcessController::InputSetTopVignetteStrength  (line 136, @0x000000000234e690, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CPostProcessController::InputSetTopVignetteStrength(
        CPostProcessController *const this,
        inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 != this->m_fTopVignetteStrength.m_Value )
  {
    v4 = m_float64;
    (*(this->_vptr_IHandleEntity + 22))(this, 804, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fTopVignetteStrength.m_Value = v4;
  }
}


// CPostProcessController::InputSetFadeTime  (line 141, @0x000000000234e710, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CPostProcessController::InputSetFadeTime(
        CPostProcessController *const this,
        inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 != this->m_fFadeTime.m_Value )
  {
    v4 = m_float64;
    (*(this->_vptr_IHandleEntity + 22))(this, 808, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fFadeTime.m_Value = v4;
  }
}


// CPostProcessSystem::GameInit  (line 149, @0x000000000234ab20, libserver.so)  // inlines: ListenForGameEvent, Set, operator=
void __fastcall CPostProcessSystem::GameInit(CPostProcessSystem *const this, const EventGameInit_t *const msg)
{
  this->m_hMasterController.m_Index = -1;
  this->m_bRegisteredForEvents = 1;
  (*(gameeventmanager->_vptr_IBaseInterface + 4))(gameeventmanager, &this->CGameEventListener, "round_start", 1);
}


// CPostProcessSystem::InitMasterController  (line 159, @0x00000000023535f0, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Next, Set, TypedEntityInstanceByClassIter_t, operator CEntityInstance*, operator=
// calls: EntityInstanceByClassIter_t::EntityInstanceByClassIter_t, EntityInstanceByClassIter_t::Next
// callers: CPostProcessSystem::FireGameEvent, CPostProcessSystem::PostSpawnGroupLoad
// strings: "postprocess_controller"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPostProcessSystem::InitMasterController(CPostProcessSystem *const this)
{
  CEntityInstance *v2; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v4; // rcx
  CEntityIdentity *v5; // rcx
  CEntityIdentity *m_pEntity; // rdx
  int v7; // eax
  __int16 v8; // cx
  TypedEntityInstanceByClassIter_t<CPostProcessController> iter; // [rsp+0h] [rbp-40h] BYREF

  EntityInstanceByClassIter_t::EntityInstanceByClassIter_t(
    &iter,
    "postprocess_controller",
    0,
    EntityIterType_t::ENTITY_ENUM_ITERATE_NON_DORMANT_ONLY);
LABEL_2:
  while ( 1 )
  {
    v2 = EntityInstanceByClassIter_t::Next(&iter);
    if ( v2 == 0 )
      break;
    while ( 1 )
    {
      m_Index = this->m_hMasterController.m_Index;
      if ( m_Index + 2 > 1 )
      {
        v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hMasterController.m_Index) >> 9) & 0x3F];
        if ( v4 != 0 )
        {
          v5 = &v4[this->m_hMasterController.m_Index & 0x1FF];
          if ( v5 != 0
            && m_Index == v5->m_EHandle.m_Index
            && v5->m_pInstance != 0
            && (BYTE4(v2[8].m_hPrivateScope.m_hScope) & 1) == 0 )
          {
            break;
          }
        }
      }
      m_pEntity = v2->m_pEntity;
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
      v2 = EntityInstanceByClassIter_t::Next(&iter);
      if ( v2 == 0 )
        return;
    }
  }
}


// CPostProcessSystem::FireGameEvent  (line 181, @0x0000000002353700, libserver.so)
// calls: CPostProcessSystem::InitMasterController
void __fastcall CPostProcessSystem::FireGameEvent(CPostProcessSystem *const this, IGameEvent *pEvent)
{
  CPostProcessSystem::InitMasterController(this);
}


// CPostProcessSystem::PostSpawnGroupLoad  (line 190, @0x0000000002353720, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CPostProcessSystem::InitMasterController, UTIL_GetLocalPlayer, CBasePlayer::InitPostProcessController
void __fastcall CPostProcessSystem::PostSpawnGroupLoad(
        CPostProcessSystem *const this,
        const EventPostSpawnGroupLoad_t *const msg)
{
  CBasePlayer *LocalPlayer; // rax
  unsigned __int16 v3; // cx
  int v4; // edi
  int v5; // edx
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx

  CPostProcessSystem::InitMasterController(this);
  if ( gpGlobals->maxClients == 1 )
  {
    LocalPlayer = UTIL_GetLocalPlayer();
    if ( LocalPlayer != 0 )
    {
      if ( LocalPlayer->m_hPostProcessCtrl.m_Value.m_Index == -1 )
      {
        v3 = 0x7FFF;
        v4 = 0x7FFF;
      }
      else
      {
        v3 = LocalPlayer->m_hPostProcessCtrl.m_Value.m_Index & 0x7FFF;
        v4 = v3;
      }
      v5 = (LocalPlayer->m_hPostProcessCtrl.m_Value.m_Index >> 15 << 15) | v3 & 0x7FFF;
      if ( (v5 + 2) <= 1
        || (v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9]) == 0
        || (v7 = &v6[v4 & 0x1FF]) == 0
        || v5 != v7->m_EHandle.m_Index
        || v7->m_pInstance == 0 )
      {
        CBasePlayer::InitPostProcessController(LocalPlayer);
      }
    }
  }
}


