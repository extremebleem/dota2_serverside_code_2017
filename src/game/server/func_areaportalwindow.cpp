// Reconstructed from DWARF by pahole; not original source.

// src/game/server/func_areaportalwindow.cpp:20
class C_CFuncAreaPortalWindow_MapInstall {
	C_CFuncAreaPortalWindow_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFuncAreaPortalWindow::YouForgotToImplementOrDeclareServerClass  (line 20, @0x000000000221a410, libserver.so)
int __fastcall CFuncAreaPortalWindow::YouForgotToImplementOrDeclareServerClass(CFuncAreaPortalWindow *const this)
{
  return 0;
}


// CFuncAreaPortalWindow::GetServerClass  (line 20, @0x0000000002221980, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CFuncAreaPortalWindow::GetServerClass(CFuncAreaPortalWindow *const this)
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


// CFuncAreaPortalWindow::GetDataDescMap  (line 24, @0x000000000221a420, libserver.so)
// globals: CFuncAreaPortalWindow::m_DataMap
datamap_t *__fastcall CFuncAreaPortalWindow::GetDataDescMap(CFuncAreaPortalWindow *const this)
{
  return &CFuncAreaPortalWindow::m_DataMap;
}


// CFuncAreaPortalWindow::AddDatadescMetadataKeys  (line 24, @0x0000000002226750, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFuncAreaPortalWindow::GetEntityClass(void)
void __fastcall CFuncAreaPortalWindow::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFuncAreaPortalWindow::GetEntityClass);
}


// CFuncAreaPortalWindow::GetBaseMap  (line 24, @0x0000000002226770, libserver.so)
// globals: CFuncAreaPortalBase::m_DataMap
datamap_t *__cdecl CFuncAreaPortalWindow::GetBaseMap()
{
  return &CFuncAreaPortalBase::m_DataMap;
}


// DataMapInit<CFuncAreaPortalWindow>  (line 24, @0x0000000002226780, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_05.cpp
// strings: "CFuncAreaPortalWindow"
// globals: `guard variable for'DataMapInit<CFuncAreaPortalWindow>(CFuncAreaPortalWindow *)::nameHolder, CFuncAreaPortalBase::m_DataMap, CFuncAreaPortalWindow::GetEntityClass(void), CFuncAreaPortalWindow::m_DataMap, DataMapInit<CFuncAreaPortalWindow>(CFuncAreaPortalWindow *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFuncAreaPortalWindow>(CFuncAreaPortalWindow *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFuncAreaPortalWindow>(CFuncAreaPortalWindow *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncAreaPortalWindow>(CFuncAreaPortalWindow *)::nameHolder) != 0 )
  {
    DataMapInit<CFuncAreaPortalWindow>(CFuncAreaPortalWindow *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFuncAreaPortalWindow>(CFuncAreaPortalWindow *)::nameHolder.m_pszBase = "CFuncAreaPortalWindow";
    DataMapInit<CFuncAreaPortalWindow>(CFuncAreaPortalWindow *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFuncAreaPortalWindow>(CFuncAreaPortalWindow *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFuncAreaPortalWindow>(CFuncAreaPortalWindow *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFuncAreaPortalWindow>(CFuncAreaPortalWindow *)::nameHolder.m_nLenBase = 21;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncAreaPortalWindow>(CFuncAreaPortalWindow *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFuncAreaPortalWindow>(CFuncAreaPortalWindow *)::nameHolder,
      &_dso_handle);
  }
  CFuncAreaPortalWindow::m_DataMap.dataNumFields = 8;
  CFuncAreaPortalWindow::m_DataMap.baseMap = &CFuncAreaPortalBase::m_DataMap;
  CFuncAreaPortalWindow::m_DataMap.dataDesc = &DataMapInit<CFuncAreaPortalWindow>(CFuncAreaPortalWindow *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFuncAreaPortalWindow::m_DataMap, CFuncAreaPortalWindow::GetEntityClass);
  return &CFuncAreaPortalWindow::m_DataMap;
}


// CFuncAreaPortalWindow::CFuncAreaPortalWindow  (line 41, @0x000000000223b3a0, libserver.so)  // inlines: CNetworkVarBase, CStrongHandle, CUtlSymbolLarge, EnsureValidValue<float>, operator=<CWeakHandle<InfoForResourceTypeCModel> >, ~CStrongHandle
// calls: CFuncAreaPortalBase::CFuncAreaPortalBase, CStrongHandle<InfoForResourceTypeCModel>::Shutdown
// callers: CFuncAreaPortalWindow::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CFuncAreaPortalWindow::CFuncAreaPortalWindow(CFuncAreaPortalWindow *const this)
{
  CStrongHandle<InfoForResourceTypeCModel> v2; // [rsp+0h] [rbp-20h] BYREF

  CFuncAreaPortalBase::CFuncAreaPortalBase(this);
  this->_vptr_IHandleEntity = &off_40410D0;
  this->m_flFadeStartDist.m_Value = 0.0;
  this->m_flFadeDist.m_Value = 0.0;
  this->m_flTranslucencyLimit.m_Value = 0.0;
  this->m_iBackgroundBModelName.u.m_Id = 0;
  this->m_iBackgroundModelIndex.m_Value.m_pBinding = 0;
  v2.m_pBinding = 0;
  CStrongHandle<InfoForResourceTypeCModel>::Shutdown(&v2);
}


// CFuncAreaPortalWindow::~CFuncAreaPortalWindow  (line 47, @0x0000000002237b60, libserver.so)  // inlines: ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeCModel>::Shutdown, CFuncAreaPortalBase::~CFuncAreaPortalBase
void __fastcall CFuncAreaPortalWindow::~CFuncAreaPortalWindow(CFuncAreaPortalWindow *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>,CFuncAreaPortalWindow::NetworkVar_m_iBackgroundModelIndex> *p_m_iBackgroundModelIndex; // rdi

  p_m_iBackgroundModelIndex = &this->m_iBackgroundModelIndex;
  p_m_iBackgroundModelIndex[-148].m_Value.m_pBinding = &off_40410D0;
  CStrongHandle<InfoForResourceTypeCModel>::Shutdown(&p_m_iBackgroundModelIndex->m_Value);
  CFuncAreaPortalBase::~CFuncAreaPortalBase(this);
}


// CFuncAreaPortalWindow::~CFuncAreaPortalWindow  (line 47, @0x0000000002237ba0, libserver.so)  // inlines: ~CFuncAreaPortalWindow, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeCModel>::Shutdown, CFuncAreaPortalBase::~CFuncAreaPortalBase, CBaseEntity::operator delete
void __fastcall CFuncAreaPortalWindow::~CFuncAreaPortalWindow(CFuncAreaPortalWindow *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>,CFuncAreaPortalWindow::NetworkVar_m_iBackgroundModelIndex> *p_m_iBackgroundModelIndex; // rdi

  p_m_iBackgroundModelIndex = &this->m_iBackgroundModelIndex;
  p_m_iBackgroundModelIndex[-148].m_Value.m_pBinding = &off_40410D0;
  CStrongHandle<InfoForResourceTypeCModel>::Shutdown(&p_m_iBackgroundModelIndex->m_Value);
  CFuncAreaPortalBase::~CFuncAreaPortalBase(this);
  CBaseEntity::operator delete(this);
}


// CFuncAreaPortalWindow::Spawn  (line 52, @0x000000000221aeb0, libserver.so)
// calls: CBaseEntity::Spawn
void __fastcall CFuncAreaPortalWindow::Spawn(CFuncAreaPortalWindow *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseEntity::Spawn(this, pKeyValues);
}


// CFuncAreaPortalWindow::Activate  (line 62, @0x00000000022353d0, libserver.so)  // inlines: CStrongHandle, CUtlSymbolLarge, NetworkStateChanged, Set, String, ToCStr, operator=, operator=<CWeakHandle<InfoForResourceTypeCModel> >, ~CStrongHandle
// calls: CBaseModelEntity::Activate, CGameEntitySystem::FindEntityByName, CBaseEntity::GetModelName, CStrongHandle<InfoForResourceTypeCModel>::Init, CStrongHandle<InfoForResourceTypeCModel>::Shutdown, CBaseEntity::AddEffects, CBaseEntity::GetAbsOrigin, CBaseEntity::SetAbsOrigin, _Unwind_Resume
// globals: modelinfo
void __fastcall CFuncAreaPortalWindow::Activate(CFuncAreaPortalWindow *const this, ActivateType_t activateType)
{
  const CBaseEntity *EntityByName; // rax
  CBaseEntity *v4; // r13
  void (__fastcall *v5)(CStrongHandle<InfoForResourceTypeCModel>::ResourceHandleTyped_t *, IGameModelInfo *, const char *); // r15
  const char *v6; // rdx
  const CBaseEntity *v7; // rax
  CBaseEntity *v8; // r12
  const Vector *AbsOrigin; // rax
  const char *v10; // [rsp+10h] [rbp-60h] BYREF
  CStrongHandle<InfoForResourceTypeCModel>::ResourceHandleTyped_t hResource[2]; // [rsp+20h] [rbp-50h] BYREF
  string_t iszName; // [rsp+30h] [rbp-40h] BYREF

  CBaseModelEntity::Activate(this, activateType);
  iszName.u.m_Id = this->m_iBackgroundBModelName.u.m_Id;
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
  v4 = EntityByName;
  if ( EntityByName != 0 )
  {
    v5 = *(modelinfo->_vptr_IAppSystem + 13);
    CBaseEntity::GetModelName(&v10, EntityByName);
    v6 = "";
    if ( v10 != 0 )
      v6 = v10;
    v5(hResource, modelinfo, v6);
    iszName.u.m_Id = 0;
    CStrongHandle<InfoForResourceTypeCModel>::Init(&iszName, hResource[0]);
    if ( this->m_iBackgroundModelIndex.m_Value.m_pBinding != iszName.u.m_Id )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1184, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      CStrongHandle<InfoForResourceTypeCModel>::Init(&this->m_iBackgroundModelIndex.m_Value, &iszName);
    }
    CStrongHandle<InfoForResourceTypeCModel>::Shutdown(&iszName);
    CBaseEntity::AddEffects(v4, 32);
  }
  iszName.u.m_Id = this->m_target.u.m_Id;
  v7 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
  v8 = v7;
  if ( v7 != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
    CBaseEntity::SetAbsOrigin(this, AbsOrigin);
    CBaseEntity::AddEffects(v8, 32);
  }
}


// CFuncAreaPortalWindow::IsWindowOpen  (line 86, @0x0000000002226850, libserver.so)  // inlines: operator[]
// calls: CCollisionProperty::CalcDistanceFromPoint
// callers: CFuncAreaPortalWindow::UpdateVisibility
bool __fastcall CFuncAreaPortalWindow::IsWindowOpen(
        CFuncAreaPortalWindow *const this,
        const CUtlVector<Vector,CUtlMemory<Vector,int> > *const vecOrigins,
        float a3,
        float fovDistanceAdjustFactor)
{
  float v5; // xmm1_4
  __int64 v7; // r12
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r14
  int v9; // ebx
  const Vector *v10; // rsi
  float v11; // xmm0_4

  if ( vecOrigins->m_Size <= 0 )
    return 0;
  v5 = 3.4028235e38;
  v7 = 0;
  p_m_Collision = &this->m_Collision;
  v9 = 0;
  do
  {
    v10 = &vecOrigins->m_Memory.m_pMemory[v7];
    ++v9;
    ++v7;
    v11 = fminf(CCollisionProperty::CalcDistanceFromPoint(p_m_Collision, v10), v5);
    v5 = v11;
  }
  while ( vecOrigins->m_Size > v9 );
  return v11 != 3.4028235e38 && (this->m_flFadeDist.m_Value + 10.0) >= (v11 * a3);
}


// CFuncAreaPortalWindow::UpdateVisibility  (line 106, @0x0000000002226910, libserver.so)  // inlines: UpdateVisibility
// calls: CFuncAreaPortalWindow::IsWindowOpen, CFuncAreaPortalBase::UpdateVisibility
__int64 __fastcall CFuncAreaPortalWindow::UpdateVisibility(
        CFuncAreaPortalWindow *const this,
        const CUtlVector<Vector,CUtlMemory<Vector,int> > *const vecOrigins,
        float fovDistanceAdjustFactor,
        bool *const bIsOpenOnClient,
        float a5)
{
  bool *v8; // rdx
  float v9; // xmm0_4

  if ( CFuncAreaPortalWindow::IsWindowOpen(this, vecOrigins, fovDistanceAdjustFactor, a5) )
  {
    if ( this->m_portalNumber != -1 )
      return CFuncAreaPortalBase::UpdateVisibility(this, vecOrigins, v9, v8);
  }
  else
  {
    *bIsOpenOnClient = 0;
  }
  return 0;
}


// CFuncAreaPortalWindow::InputSetFadeStartDistance  (line 123, @0x000000000221e500, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CFuncAreaPortalWindow::InputSetFadeStartDistance(
        CFuncAreaPortalWindow *const this,
        inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 != this->m_flFadeStartDist.m_Value )
  {
    v4 = m_float64;
    (*(this->_vptr_IHandleEntity + 22))(this, 1164, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flFadeStartDist.m_Value = v4;
  }
}


// CFuncAreaPortalWindow::InputSetFadeEndDistance  (line 132, @0x000000000221e580, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CFuncAreaPortalWindow::InputSetFadeEndDistance(
        CFuncAreaPortalWindow *const this,
        inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 != this->m_flFadeDist.m_Value )
  {
    v4 = m_float64;
    (*(this->_vptr_IHandleEntity + 22))(this, 1168, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flFadeDist.m_Value = v4;
  }
}


