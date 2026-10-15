// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/baseviewmodel_shared.cpp:1044
class C_CBaseViewModel_MapInstall {
	C_CBaseViewModel_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseViewModel::CBaseViewModel  (line 55, @0x0000000002190220, libserver.so)  // inlines: CEntityHandle, CHandle, CNetworkHandleBase, CNetworkVarBase, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, EnsureValidValue<HSequence>, EnsureValidValue<float>, EnsureValidValue<unsigned int>, HSequence, Init, NetworkStateChanged, Purge, RemoveAll, Set, SetAlpha, SetBlue, SetColor, SetComponent, SetGreen, SetRed, SetRenderColor, SetVal, a, operator=, operator=<int>, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseAnimatingOverlay::CBaseAnimatingOverlay, CBaseEntity::NetworkStateChanged, CBaseModelEntity::SetRenderAlpha, CBaseAnimatingOverlay::~CBaseAnimatingOverlay, _Unwind_Resume, CUtlMemory<CHandle<CVGuiScreen>, int>::Purge
// callers: CBaseViewModel::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CBaseViewModel::CBaseViewModel(CBaseViewModel *const this)
{
  bool v2; // zf
  unsigned __int8 v3; // r12
  unsigned int m_Value; // r11d

  CBaseAnimatingOverlay::CBaseAnimatingOverlay(this);
  v2 = this->m_clrRender.m_Value._color[0] == 0xFF;
  this->_vptr_IHandleEntity = &off_4009490;
  v3 = this->m_clrRender.m_Value._color[3];
  this->m_nViewModelIndex.m_Value = 0;
  this->_vptr_IAttachmentOverride = &off_4009CD8;
  this->m_nAnimationParity.m_Value = 0;
  this->m_hLayerSequence.m_Value.m_Data = 0;
  this->m_nLayer.m_Value = 0;
  this->m_flAnimationStartTime.m_Value = 0.0;
  this->m_hWeapon.m_Value.m_Index = -1;
  this->m_hOwner.m_Value.m_Index = -1;
  this->m_sVMName.u.m_Id = 0;
  this->m_sAnimationPrefix.u.m_Id = 0;
  this->m_hOldLayerSequence.m_Data = -1;
  this->m_hScreens.m_Size = 0;
  this->m_hScreens.m_Memory.m_pMemory = 0;
  this->m_hScreens.m_Memory.m_nAllocationCount = 0;
  this->m_hScreens.m_Memory.m_nGrowSize = 0;
  if ( !v2 )
  {
    CBaseEntity::NetworkStateChanged(this, 0x33Cu, -1, -1);
    this->m_clrRender.m_Value._color[0] = -1;
  }
  if ( this->m_clrRender.m_Value._color[1] != 0xFF )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[1] = -1;
  }
  if ( this->m_clrRender.m_Value._color[2] != 0xFF )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[2] = -1;
  }
  if ( v3 != this->m_clrRender.m_Value._color[3] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[3] = v3;
  }
  CBaseModelEntity::SetRenderAlpha(this, 0xFFu);
  m_Value = this->m_nViewModelIndex.m_Value;
  this->m_sVMName.u.m_Id = 0;
  this->m_sAnimationPrefix.u.m_Id = 0;
  if ( m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1236, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nViewModelIndex.m_Value = 0;
  }
  if ( this->m_nAnimationParity.m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1240, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nAnimationParity.m_Value = 0;
  }
}


// CBaseViewModel::~CBaseViewModel  (line 89, @0x000000000218a6e0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseAnimatingOverlay::~CBaseAnimatingOverlay, CUtlMemory<CHandle<CVGuiScreen>, int>::Purge
void __fastcall CBaseViewModel::~CBaseViewModel(CBaseViewModel *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CVGuiScreen>,CUtlMemory<CHandle<CVGuiScreen>,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_hScreens.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_4009490;
  this->_vptr_IAttachmentOverride = &off_4009CD8;
  this->m_hScreens.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_hScreens.m_Memory,
        CUtlMemory<CHandle<CVGuiScreen>,int>::Purge(&this->m_hScreens.m_Memory),
        (this->m_hScreens.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CBaseAnimatingOverlay::~CBaseAnimatingOverlay(this);
  }
  else
  {
    CUtlMemory<CHandle<CVGuiScreen>,int>::Purge(p_m_Memory);
    CBaseAnimatingOverlay::~CBaseAnimatingOverlay(this);
  }
}


// CBaseViewModel::~CBaseViewModel  (line 89, @0x000000000218a760, libserver.so)  // inlines: Purge, RemoveAll, ~CBaseViewModel, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseAnimatingOverlay::~CBaseAnimatingOverlay, CBaseEntity::operator delete, CUtlMemory<CHandle<CVGuiScreen>, int>::Purge
void __fastcall CBaseViewModel::~CBaseViewModel(CBaseViewModel *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CVGuiScreen>,CUtlMemory<CHandle<CVGuiScreen>,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_hScreens.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_4009490;
  this->_vptr_IAttachmentOverride = &off_4009CD8;
  this->m_hScreens.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_hScreens.m_Memory;
    CUtlMemory<CHandle<CVGuiScreen>,int>::Purge(&this->m_hScreens.m_Memory);
    if ( (this->m_hScreens.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CVGuiScreen>,int>::Purge(p_m_Memory);
  }
  CBaseAnimatingOverlay::~CBaseAnimatingOverlay(this);
  CBaseEntity::operator delete(this);
}


// CBaseViewModel::UpdateOnRemove  (line 93, @0x0000000002187c70, libserver.so)
// calls: CBaseAnimating::UpdateOnRemove
void __fastcall CBaseViewModel::UpdateOnRemove(CBaseViewModel *const this)
{
  CBaseAnimating::UpdateOnRemove(this);
}


// CBaseViewModel::Spawn  (line 104, @0x000000000219a050, libserver.so)  // inlines: SetCollisionBounds, SetSize, SetSolid, Vector, curtime
// calls: CBaseAnimating::Spawn, CCollisionProperty::SetCollisionBounds, CBaseEntity::SetAnimTime
void __fastcall CBaseViewModel::Spawn(CBaseViewModel *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r12
  float v4; // xmm1_4
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v6; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  Vector mins; // [rsp+0h] [rbp-30h] BYREF
  Vector maxs; // [rsp+10h] [rbp-20h] BYREF

  p_m_Collision = &this->m_Collision;
  CBaseAnimating::Spawn(this, pKeyValues);
  maxs.x = 8.0;
  maxs.y = 4.0;
  maxs.z = 2.0;
  mins.x = -8.0;
  mins.y = -4.0;
  mins.z = -2.0;
  CCollisionProperty::SetCollisionBounds(p_m_Collision, &mins, &maxs);
  (*(this->m_Collision._vptr_ICollideable + 26))(p_m_Collision, 0);
  (*(this->_vptr_IHandleEntity + 257))(this, 16);
  m_flCurrentTime = 0.0;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v6->m_flCurrentTime;
  }
  CBaseEntity::SetAnimTime(this, m_flCurrentTime, v4, 0);
}


// CBaseViewModel::SetControlPanelsActive  (line 131, @0x0000000002190490, libserver.so)
void __fastcall CBaseViewModel::SetControlPanelsActive(CBaseViewModel *const this, bool bState)
{
  ;
}


// CBaseViewModel::SpawnControlPanels  (line 148, @0x00000000021904a0, libserver.so)
void __fastcall CBaseViewModel::SpawnControlPanels(CBaseViewModel *const this)
{
  ;
}


// CBaseViewModel::DestroyControlPanels  (line 259, @0x00000000021904b0, libserver.so)
void __fastcall CBaseViewModel::DestroyControlPanels(CBaseViewModel *const this)
{
  ;
}


// CBaseViewModel::SetOwner  (line 276, @0x00000000021a81a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator CEntityInstance*, operator!=<CBaseEntity>, operator=, operator=<CBaseEntity*>
// calls: CHandle<CBaseEntity>::CHandle
// callers: CBasePlayer::CreateViewModel
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseViewModel::SetOwner(CBaseViewModel *const this, CBaseEntity *pEntity)
{
  uint32 m_Index; // eax
  CEntityInstance *m_pInstance; // rdi
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *v7; // rsi
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CHandle<CBaseEntity> v10; // [rsp+0h] [rbp-20h] BYREF

  CHandle<CBaseEntity>::CHandle(&v10, pEntity);
  m_Index = this->m_hOwner.m_Value.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hOwner.m_Value.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[this->m_hOwner.m_Value.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  v7 = 0;
  if ( v10.m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[v10.m_Index & 0x1FF];
      if ( v9 != 0 && v10.m_Index == v9->m_EHandle.m_Index )
        v7 = v9->m_pInstance;
    }
  }
  if ( m_pInstance != v7 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1260, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_hOwner.m_Value = v10;
  }
}


// CBaseViewModel::SetIndex  (line 289, @0x00000000021904c0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// callers: CBasePlayer::CreateViewModel
void __fastcall CBaseViewModel::SetIndex(CBaseViewModel *const this, int nIndex)
{
  if ( nIndex != this->m_nViewModelIndex.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1236, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nViewModelIndex.m_Value = nIndex;
  }
}


// CBaseViewModel::ViewModelIndex  (line 298, @0x0000000002190500, libserver.so)
int __fastcall CBaseViewModel::ViewModelIndex(const CBaseViewModel *const this)
{
  return this->m_nViewModelIndex.m_Value;
}


// CBaseViewModel::Activate  (line 303, @0x0000000002187c80, libserver.so)
// calls: CBaseAnimating::Activate
void __fastcall CBaseViewModel::Activate(CBaseViewModel *const this, ActivateType_t activateType)
{
  CBaseAnimating::Activate(this, activateType);
}


// CBaseViewModel::AddEffects  (line 323, @0x0000000002187c90, libserver.so)
// calls: CBaseEntity::AddEffects
void __fastcall CBaseViewModel::AddEffects(CBaseViewModel *const this, int nEffects)
{
  CBaseEntity::AddEffects(this, nEffects);
}


// CBaseViewModel::RemoveEffects  (line 336, @0x0000000002189570, libserver.so)  // inlines: MarkPVSInformationDirty, RemoveEffects
// calls: CBaseEntity::DispatchUpdateTransmitState
void __fastcall CBaseViewModel::RemoveEffects(CBaseViewModel *const this, int nEffects)
{
  char v2; // r12

  v2 = nEffects;
  (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & ~nEffects);
  if ( (v2 & 0x20) != 0 )
  {
    this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
    CBaseEntity::DispatchUpdateTransmitState(this);
  }
}


// CBaseViewModel::SetWeaponModel  (line 350, @0x000000000218d760, libserver.so)  // inlines: GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator const RuntimeClass_t*, operator!=, operator=
// calls: MakeEntitySystemString, CBaseModelEntity::SetModel, CBaseEntity::GetModel, SelectHeaviestSequence, CBaseAnimating::SetSequence, CBaseAnimating::SetSkin
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseViewModel::SetWeaponModel(
        CBaseViewModel *const this,
        const char *modelname,
        CBaseCombatWeapon *weapon)
{
  CBaseCombatWeapon *m_pInstance; // rcx
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  UtlSymLargeId_t v10; // rax
  const char *v11; // rsi
  HSequence v12; // eax
  CEntityIdentity *m_pEntity; // rdx
  int v14; // eax
  __int16 v15; // cx
  const CModel **v16; // [rsp+0h] [rbp-30h] BYREF

  m_pInstance = 0;
  m_Index = this->m_hWeapon.m_Value.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hWeapon.m_Value.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[this->m_hWeapon.m_Value.m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  if ( weapon != m_pInstance )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1256, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    if ( weapon != 0 && (m_pEntity = weapon->m_pEntity) != 0 )
    {
      v14 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v15 = 0x7FFF;
      else
        v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hWeapon.m_Value.m_Index) = v15 | this->m_hWeapon.m_Value.m_Index & 0x8000;
      this->m_hWeapon.m_Value.m_Index = (v14 << 15) | this->m_hWeapon.m_Value.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hWeapon.m_Value.m_Index = -1;
    }
  }
  v10 = 0;
  if ( modelname != 0 )
  {
    MakeEntitySystemString(modelname);
    v10 = v16;
  }
  if ( v10 != this->m_sVMName.u.m_Id )
  {
    this->m_sVMName.u.m_Id = v10;
    v11 = "";
    if ( v10 != 0 )
      v11 = v10;
    CBaseModelEntity::SetModel(this, v11);
    if ( weapon != 0 )
      (*(weapon->_vptr_IHandleEntity + 332))(weapon);
    CBaseEntity::GetModel(&v16, this);
    if ( v16 != 0 && *v16 != 0 )
    {
      v12.m_Data = SelectHeaviestSequence(*v16, 185).m_Data;
      CBaseAnimating::SetSequence(this, v12, SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE);
    }
  }
  CBaseAnimating::SetSkin(this, 1055040020);
}


// CBaseViewModel::GetOwningWeapon  (line 398, @0x000000000218b320, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity
CBaseCombatWeapon *__fastcall CBaseViewModel::GetOwningWeapon(CBaseViewModel *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // edx
  CBaseCombatWeapon *result; // rax
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx

  if ( this->m_hWeapon.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hWeapon.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hWeapon.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  result = 0;
  if ( v3 + 2 > 1 )
  {
    v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9];
    if ( v5 != 0 )
    {
      v6 = &v5[v2 & 0x1FF];
      if ( v6 != 0 && v3 == v6->m_EHandle.m_Index )
        return v6->m_pInstance;
    }
  }
  return result;
}


// CBaseViewModel::SendViewModelMatchingSequence  (line 408, @0x000000000218d920, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetPlaybackRate, GetSerialNumber, GetWeapon, IndexToIdentity, Init, LookupEntity, NetworkStateChanged, Set, curtime, operator const RuntimeClass_t*, operator=<HSequence>, operator=<float>, operator=<int>, operator=<unsigned int>
// calls: CBaseAnimating::GetSequenceActivity, CBaseEntity::GetModel, CBaseAnimatingOverlay::GetNumAnimOverlays, CBaseAnimatingOverlay::SetNumAnimOverlays, CBaseAnimatingOverlay::GetAnimOverlay, CAnimationLayer::Reset, CAnimationLayer::SetFlags, CAnimationLayer::SetCycle, CAnimationLayer::SetPrevCycle, CAnimationLayer::SetSequence, CAnimationLayer::SetPlaybackRate, CAnimationLayer::SetWeight (19 total)
void __fastcall CBaseViewModel::SendViewModelMatchingSequence(CBaseViewModel *const this, HSequence hSequence)
{
  Activity SequenceActivity; // r12d
  const CModel *v5; // rdi
  int v6; // r12d
  int v7; // esi
  CAnimationLayer *AnimOverlay; // rax
  CGlobalVars *v9; // r12
  float m_flCurrentTime; // xmm0_4
  unsigned __int16 v11; // dx
  int v12; // esi
  uint32 v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  int v16; // xmm1_4
  const CBaseAnimating *m_pInstance; // r14
  CAnimationLayer *v18; // r12
  float v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm1_4
  float v22; // xmm1_4
  unsigned int m_Value; // eax
  unsigned int v24; // r12d
  HSequence v25; // eax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  __m128 m_Value_low; // xmm2
  __m128 v28; // rt1
  __m128 v29; // xmm0
  int playbackRatea; // [rsp+Ch] [rbp-34h]
  float playbackRate; // [rsp+Ch] [rbp-34h]
  const CModel **v32; // [rsp+10h] [rbp-30h] BYREF

  SequenceActivity = CBaseAnimating::GetSequenceActivity(this, hSequence);
  if ( SequenceActivity != 185 )
  {
    CBaseEntity::GetModel(&v32, this);
    if ( v32 != 0 )
      v5 = *v32;
    else
      v5 = 0;
    if ( SequenceActivity == 181 )
    {
      v25.m_Data = SelectHeaviestSequence(v5, 185).m_Data;
      CBaseAnimating::SetSequence(this, v25, SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE);
    }
    if ( CBaseAnimatingOverlay::GetNumAnimOverlays(this) != 4 )
    {
      v6 = 0;
      CBaseAnimatingOverlay::SetNumAnimOverlays(this, 4);
      do
      {
        v7 = v6++;
        AnimOverlay = CBaseAnimatingOverlay::GetAnimOverlay(this, v7);
        CAnimationLayer::Reset(AnimOverlay);
      }
      while ( v6 != 4 );
    }
    v9 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      m_flCurrentTime = v9->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    if ( m_flCurrentTime != this->m_flAnimationStartTime.m_Value )
    {
      playbackRate = m_flCurrentTime;
      (*(this->_vptr_IHandleEntity + 22))(this, 1252, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flAnimationStartTime.m_Value = playbackRate;
    }
    if ( this->m_hWeapon.m_Value.m_Index == -1 )
    {
      v11 = 0x7FFF;
      v12 = 0x7FFF;
    }
    else
    {
      v11 = this->m_hWeapon.m_Value.m_Index & 0x7FFF;
      v12 = v11;
    }
    v13 = (this->m_hWeapon.m_Value.m_Index >> 15 << 15) | v11 & 0x7FFF;
    LODWORD(v32) = v13;
    if ( v13 + 2 > 1
      && (v14 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v12 >> 9]) != 0
      && (v15 = &v14[v12 & 0x1FF]) != 0
      && v13 == v15->m_EHandle.m_Index )
    {
      m_pInstance = v15->m_pInstance;
      if ( v15->m_pInstance != 0 )
      {
        m_Value_low = LODWORD(CBaseAnimating::GetBaseAnimatingController(v15->m_pInstance)->m_flPlaybackRate.m_Value.m_Value);
        v28.m128_i32[0] = 0;
        v29 = _mm_cmpgt_ss(m_Value_low, v28);
        v16 = _mm_andnot_ps(v29, 0x3F800000u).m128_u32[0] | m_Value_low.m128_i32[0] & v29.m128_i32[0];
      }
      else
      {
        v16 = 1065353216;
      }
    }
    else
    {
      v16 = 1065353216;
      m_pInstance = 0;
    }
    playbackRatea = v16;
    v18 = CBaseAnimatingOverlay::GetAnimOverlay(this, 0);
    CAnimationLayer::SetFlags(v18, 1);
    CAnimationLayer::SetCycle(v18, 0.0, v19, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
    CAnimationLayer::SetPrevCycle(v18, 0.0, v20);
    CAnimationLayer::SetSequence(
      v18,
      hSequence,
      SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE,
      LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
    CAnimationLayer::SetPlaybackRate(v18, COERCE_DOUBLE(playbackRatea), COERCE_DOUBLE(playbackRatea));
    CAnimationLayer::SetWeight(
      v18,
      COERCE_DOUBLE(1065353216),
      v21,
      LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
    CAnimationLayer::SetAnimTime(v18, this->m_flAnimationStartTime.m_Value, v22);
    CAnimationLayer::SetOrder(v18, 0, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
    CAnimationLayer::SetLooping(v18, 0);
    CAnimationLayer::SetAutofadeDisabled(v18, 1);
    if ( this->m_hLayerSequence.m_Value.m_Data != hSequence.m_Data )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1244, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_hLayerSequence.m_Value = hSequence;
    }
    if ( this->m_nLayer.m_Value != 0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1248, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_nLayer.m_Value = 0;
    }
    m_Value = this->m_nAnimationParity.m_Value;
    v24 = (m_Value + 1) & 7;
    if ( m_Value != v24 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1240, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_nAnimationParity.m_Value = v24;
    }
    if ( m_pInstance != 0 )
      (*(m_pInstance->_vptr_IHandleEntity + 332))(m_pInstance);
  }
}


// CBaseViewModel::IsViewModelSequenceFinishedForLayer  (line 529, @0x0000000002190510, libserver.so)
// calls: CBaseAnimatingOverlay::GetNumAnimOverlays, CBaseAnimatingOverlay::GetAnimOverlay
// callers: CBaseCombatWeapon::IsViewModelSequenceFinished
bool __fastcall CBaseViewModel::IsViewModelSequenceFinishedForLayer(
        CBaseViewModel *const this,
        ViewmodelLayer_t nLayer)
{
  return nLayer >= ViewmodelLayer_t::VIEWMODEL_FIRE_LAYER
      && nLayer < CBaseAnimatingOverlay::GetNumAnimOverlays(this)
      && CBaseAnimatingOverlay::GetAnimOverlay(this, nLayer)->m_bSequenceFinished;
}


// CBaseViewModel::GetViewModelSequenceDurationForLayer  (line 540, @0x0000000002190550, libserver.so)
// calls: CBaseAnimatingOverlay::GetNumAnimOverlays, CBaseAnimatingOverlay::GetAnimOverlay, CBaseAnimating::SequenceDuration
// callers: CBaseCombatWeapon::GetViewModelSequenceDuration, CBaseCombatWeapon::DefaultReload, CBaseCombatWeapon::SetIdealActivity
float __fastcall CBaseViewModel::GetViewModelSequenceDurationForLayer(
        CBaseViewModel *const this,
        ViewmodelLayer_t nLayer)
{
  CAnimationLayer *AnimOverlay; // rax

  if ( nLayer < ViewmodelLayer_t::VIEWMODEL_FIRE_LAYER || nLayer >= CBaseAnimatingOverlay::GetNumAnimOverlays(this) )
    return 0.0;
  AnimOverlay = CBaseAnimatingOverlay::GetAnimOverlay(this, nLayer);
  return CBaseAnimating::SequenceDuration(this, AnimOverlay->m_op.m_hSequence.m_Value);
}


// CBaseViewModel::CalcViewModelView  (line 553, @0x0000000002187ca0, libserver.so)  // inlines: GetFloat, VectorAdd, VectorMultiply, operator*, operator+, operator+=
// calls: AngleVectors, CBaseEntity::SetAbsOrigin, CBaseEntity::SetAbsAngles
void __fastcall CBaseViewModel::CalcViewModelView(
        CBaseViewModel *const this,
        CBasePlayer *owner,
        const Vector *const eyePosition,
        const QAngle *const eyeAngles)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  float m_fValue; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm5_4
  QAngle vmangoriginal; // [rsp+0h] [rbp-70h] BYREF
  QAngle vmangles; // [rsp+10h] [rbp-60h] BYREF
  Vector vmorigin; // [rsp+20h] [rbp-50h] BYREF
  Vector vecRight; // [rsp+30h] [rbp-40h] BYREF
  Vector vecUp; // [rsp+40h] [rbp-30h] BYREF
  Vector vecForward; // [rsp+50h] [rbp-20h] BYREF

  v5 = *&eyeAngles->x;
  vmangoriginal.z = eyeAngles->z;
  vmangles.z = vmangoriginal.z;
  v6 = *&eyePosition->x;
  *&vmangoriginal.x = v5;
  *&vmangles.x = v5;
  *&vmorigin.x = v6;
  vmorigin.z = eyePosition->z;
  AngleVectors(&vmangoriginal, &vecForward, &vecRight, &vecUp);
  m_fValue = viewmodel_offset_x.m_pParent->m_Value.m_fValue;
  v8 = viewmodel_offset_z.m_pParent->m_Value.m_fValue;
  v9 = viewmodel_offset_y.m_pParent->m_Value.m_fValue;
  vmorigin.y = ((vecRight.y * m_fValue) + ((vecUp.y * v8) + (vecForward.y * v9))) + vmorigin.y;
  vmorigin.z = ((vecRight.z * m_fValue) + ((vecUp.z * v8) + (vecForward.z * v9))) + vmorigin.z;
  vmorigin.x = ((m_fValue * vecRight.x) + ((v8 * vecUp.x) + (v9 * vecForward.x))) + vmorigin.x;
  CBaseEntity::SetAbsOrigin(this, &vmorigin);
  CBaseEntity::SetAbsAngles(this, &vmangles);
}


// CBaseViewModel::CalcViewModelLag  (line 582, @0x0000000002187da0, libserver.so)  // inlines: FastSqrt, Length, VectorLength, VectorMA, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*
// calls: AngleVectors, VectorNormalize
void __fastcall CBaseViewModel::CalcViewModelLag(
        CBaseViewModel *const this,
        Vector *const origin,
        QAngle *const angles,
        QAngle *const original_angles)
{
  float frametime; // xmm3_4
  float x; // xmm8_4
  float y; // xmm7_4
  float v10; // xmm4_4
  float z; // xmm6_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  vec_t v17; // xmm2_4
  vec_t v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm2_4
  float v21; // xmm4_4
  float v22; // xmm3_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  vec_t v25; // xmm0_4
  float v26; // [rsp+8h] [rbp-68h]
  float v27; // [rsp+Ch] [rbp-64h]
  float v28; // [rsp+10h] [rbp-60h]
  Vector forward; // [rsp+20h] [rbp-50h] BYREF
  Vector right; // [rsp+30h] [rbp-40h] BYREF
  Vector up; // [rsp+40h] [rbp-30h] BYREF

  AngleVectors(angles, &forward, 0, 0);
  frametime = gpGlobals->frametime;
  if ( frametime != 0.0 )
  {
    x = this->m_vecLastFacing.x;
    y = this->m_vecLastFacing.y;
    v10 = forward.x - x;
    z = this->m_vecLastFacing.z;
    v12 = forward.y - y;
    v13 = forward.z - z;
    v14 = fsqrt(((v10 * v10) + (v12 * v12)) + (v13 * v13));
    if ( v14 > 1.5 )
      v15 = (v14 / 1.5) * 5.0;
    else
      v15 = 5.0;
    v16 = v15 * frametime;
    v26 = forward.x - x;
    v27 = forward.y - y;
    v28 = forward.z - z;
    this->m_vecLastFacing.x = (v16 * v10) + x;
    this->m_vecLastFacing.y = (v16 * v12) + y;
    this->m_vecLastFacing.z = (v16 * v13) + z;
    VectorNormalize(&this->m_vecLastFacing);
    v17 = (-v27 * 5.0) + origin->y;
    v18 = (-v28 * 5.0) + origin->z;
    origin->x = (-v26 * 5.0) + origin->x;
    origin->y = v17;
    origin->z = v18;
  }
  AngleVectors(original_angles, &forward, &right, &up);
  v19 = original_angles->x;
  if ( original_angles->x > 180.0 )
  {
    v19 = v19 - 360.0;
  }
  else if ( v19 < -180.0 )
  {
    v19 = v19 + 360.0;
  }
  v20 = 0.035 * -v19;
  v21 = 0.029999999 * -v19;
  v22 = -v19 * 0.02;
  v23 = ((forward.y * v20) + origin->y) + (right.y * v21);
  v24 = ((forward.z * v20) + origin->z) + (right.z * v21);
  origin->x = (((v20 * forward.x) + origin->x) + (v21 * right.x)) + (up.x * v22);
  v25 = v24 + (v22 * up.z);
  origin->y = v23 + (up.y * v22);
  origin->z = v25;
}


// CBaseViewModel::OnWeaponChanged  (line 675, @0x00000000021905a0, libserver.so)
void __fastcall CBaseViewModel::OnWeaponChanged(CBaseViewModel *const this)
{
  ;
}


// CBaseViewModel::ItemPostFrame  (line 720, @0x000000000218e150, libserver.so)  // inlines: CEntityHandle, Get, GetCycle, GetEntryIndex, GetHandleEntity, GetInstance, GetPlaybackRate, GetSequence, GetSerialNumber, GetWeapon, IndexToIdentity, Init, LookupEntity, SetPlaybackRate
// calls: CBaseAnimating::GetModelPtr, CBaseAnimating::GetBaseAnimatingController, CBaseAnimating::GetSequenceCycleRate, CBaseAnimating::IsSequenceLooping, CBaseAnimating::SetCycle, CBaseAnimatingOverlay::GetNumAnimOverlays, CAnimationLayer::SetWeight, CAnimationLayer::SetOrder, CBaseAnimatingOverlay::GetAnimOverlay, CModel::IsValidSequence, CAnimationLayer::SetCycle, CGlobalVarsBase::curtime (13 total)
void __fastcall CBaseViewModel::ItemPostFrame(
        CBaseViewModel *const this,
        CBasePlayer *pPlayer,
        const Vector *const eyePos,
        const QAngle *const eyeAngles)
{
  const CModel *ModelPtr; // r14
  unsigned __int16 v6; // dx
  int v7; // esi
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  const CBaseAnimatingController *BaseAnimatingController; // rax
  HSequence v12; // eax
  const CBaseAnimatingController *v13; // rax
  double v14; // xmm1_8
  double v15; // xmm0_8
  const CBaseAnimatingController *v16; // rax
  HSequence v17; // eax
  CBaseAnimatingController *v18; // rax
  int NumAnimOverlays; // r13d
  int v20; // ebx
  CAnimationLayer *AnimOverlay; // rax
  CAnimationLayer *v22; // r15
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  long double v26; // fst6
  char v28; // c2
  float v29; // xmm1_4
  double v30; // xmm0_8
  float v31; // xmm1_4
  double v32; // xmm2_8
  CAnimationLayer *v33; // rax
  long double v34; // fst6
  char v36; // c2
  float v37; // [rsp+10h] [rbp-60h]
  float flTimeDelta; // [rsp+14h] [rbp-5Ch]
  float meleeLayer; // [rsp+18h] [rbp-58h]
  float meleeLayera; // [rsp+18h] [rbp-58h]
  float meleeLayerd; // [rsp+18h] [rbp-58h]
  float meleeLayerb; // [rsp+18h] [rbp-58h]
  float meleeLayerc; // [rsp+18h] [rbp-58h]
  CAnimationLayer *meleeLayere; // [rsp+18h] [rbp-58h]
  float playbackRate; // [rsp+24h] [rbp-4Ch]

  ModelPtr = CBaseAnimating::GetModelPtr(this);
  if ( ModelPtr != 0 )
  {
    flTimeDelta = gpGlobals->frametime;
    if ( this->m_hWeapon.m_Value.m_Index == -1 )
    {
      v6 = 0x7FFF;
      v7 = 0x7FFF;
    }
    else
    {
      v6 = this->m_hWeapon.m_Value.m_Index & 0x7FFF;
      v7 = v6;
    }
    v8 = (this->m_hWeapon.m_Value.m_Index >> 15 << 15) | v6 & 0x7FFF;
    if ( v8 + 2 > 1
      && (v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9]) != 0
      && (v10 = &v9[v7 & 0x1FF]) != 0
      && v8 == v10->m_EHandle.m_Index )
    {
      if ( v10->m_pInstance != 0 )
      {
        playbackRate = CBaseAnimating::GetBaseAnimatingController(v10->m_pInstance)->m_flPlaybackRate.m_Value.m_Value;
        if ( playbackRate <= 0.0 )
          playbackRate = 1.0;
      }
      else
      {
        playbackRate = 1.0;
      }
    }
    else
    {
      playbackRate = 1.0;
    }
    BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
    v12.m_Data = (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 24))(BaseAnimatingController);
    meleeLayer = (CBaseAnimating::GetSequenceCycleRate(this, v12) * flTimeDelta) * playbackRate;
    v13 = CBaseAnimating::GetBaseAnimatingController(this);
    *&v15 = LODWORD(meleeLayer);
    *&v15 = meleeLayer + v13->m_baseLayer.m_flCycle.m_Value;
    if ( *&v15 >= 1.0 )
    {
      meleeLayera = meleeLayer + v13->m_baseLayer.m_flCycle.m_Value;
      v16 = CBaseAnimating::GetBaseAnimatingController(this);
      v17.m_Data = (*(v16->_vptr_CSkeletonAnimationController + 24))(v16);
      if ( CBaseAnimating::IsSequenceLooping(this, v17) )
      {
        v14 = meleeLayera;
        v34 = meleeLayera;
        do
          v34 = __FPREM__(v34, 1.0);
        while ( v36 != 0 );
        v15 = v34;
      }
      else
      {
        *&v15 = 1065336439;
      }
    }
    CBaseAnimating::SetCycle(this, v15, *&v14);
    v18 = CBaseAnimating::GetBaseAnimatingController(this);
    (*(v18->_vptr_CSkeletonAnimationController + 22))(v18, playbackRate);
    NumAnimOverlays = CBaseAnimatingOverlay::GetNumAnimOverlays(this);
    if ( NumAnimOverlays > 0 )
    {
      v20 = 0;
      while ( 1 )
      {
        AnimOverlay = CBaseAnimatingOverlay::GetAnimOverlay(this, v20);
        v22 = AnimOverlay;
        if ( AnimOverlay->m_nOrder.m_Value == 15 )
          goto LABEL_15;
        if ( CModel::IsValidSequence(ModelPtr, AnimOverlay->m_op.m_hSequence.m_Value) )
        {
          meleeLayerd = v22->m_op.m_flCycle.m_Value;
          v24 = ((CBaseAnimating::GetSequenceCycleRate(this, v22->m_op.m_hSequence.m_Value) * flTimeDelta) * playbackRate)
              + meleeLayerd;
          if ( v24 >= 1.0 )
          {
            meleeLayerb = v24;
            if ( CBaseAnimating::IsSequenceLooping(this, v22->m_op.m_hSequence.m_Value) )
            {
              v26 = meleeLayerb;
              do
                v26 = __FPREM__(v26, 1.0);
              while ( v28 != 0 );
              v24 = v26;
            }
            else
            {
              CAnimationLayer::SetWeight(v22, 0.0, v25, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
              CAnimationLayer::SetCycle(v22, 0.99900001, v31, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
              CAnimationLayer::SetOrder(v22, 15, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
              v24 = 0.99900001;
            }
          }
          if ( v22->m_nOrder.m_Value == 15 )
            goto LABEL_15;
          CAnimationLayer::SetCycle(v22, v24, v25, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
          if ( v20 != 0 )
          {
            if ( v20 != 1 )
            {
              *&v30 = 1065353216;
              goto LABEL_27;
            }
            meleeLayerc = 1.0 - CBaseAnimatingOverlay::GetAnimOverlay(this, 0)->m_op.m_flWeight.m_Value.m_Value;
            v29 = CGlobalVarsBase::curtime(gpGlobals, 0) - v22->m_flLayerFadeOuttime;
            if ( v29 > 0.2 )
            {
              v29 = 0.2;
              goto LABEL_35;
            }
            if ( v29 < 0.0 )
            {
              v29 = 0.0;
              if ( meleeLayerc <= 0.0 )
                goto LABEL_35;
            }
            else if ( meleeLayerc <= 0.0 || v29 >= 0.2 )
            {
LABEL_35:
              v37 = v29;
              CAnimationLayer::SetWeight(v22, 0.0, v29, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
              CAnimationLayer::SetOrder(v22, 15, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
              v29 = v37;
            }
            *&v32 = LODWORD(meleeLayerc);
            *&v32 = fminf(meleeLayerc, (0.2 - v29) / 0.2);
            v30 = v32;
            goto LABEL_27;
          }
          v33 = CBaseAnimatingOverlay::GetAnimOverlay(this, 3);
          if ( v33->m_op.m_hSequence.m_Value.m_Data == 0 )
          {
            meleeLayere = v33;
            CAnimationLayer::SetWeight(v33, 0.0, v29, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
            v33 = meleeLayere;
          }
          HIDWORD(v30) = 0;
          *&v30 = 1.0 - v33->m_op.m_flWeight.m_Value.m_Value;
LABEL_27:
          if ( v22->m_nOrder.m_Value == 15 )
            goto LABEL_15;
          ++v20;
          CAnimationLayer::SetWeight(v22, v30, v29, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
          if ( v20 == NumAnimOverlays )
            return;
        }
        else
        {
          CAnimationLayer::SetWeight(v22, 0.0, v23, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
          CAnimationLayer::SetOrder(v22, 15, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
LABEL_15:
          if ( ++v20 == NumAnimOverlays )
            return;
        }
      }
    }
  }
}


// CBaseViewModel::FadePreviousLayer  (line 906, @0x00000000021905b0, libserver.so)  // inlines: GetBool, GetInt, GetPlaybackRate, GetSequence, curtime, operator=
// calls: CBaseAnimatingOverlay::GetAnimOverlay, CBaseAnimating::GetModelPtr, CModel::IsValidSequence, CBaseAnimating::GetSequenceActivity, CBaseAnimating::IsSequenceLooping, CAnimationLayer::SetCycle, CBaseAnimatingOverlay::SetOverlayPrevEventCycle, CAnimationLayer::SetSequence, CBaseAnimating::GetBaseAnimatingController, CAnimationLayer::SetPlaybackRate, CAnimationLayer::SetWeight, CAnimationLayer::SetOrder (19 total)
void __fastcall CBaseViewModel::FadePreviousLayer(
        CBaseViewModel *const this,
        int nNewLayer,
        HSequence hNewSequence,
        float flNewLayerStartTime)
{
  CGlobalVars *v7; // rbx
  CAnimationLayer *AnimOverlay; // rax
  CAnimationLayer *v9; // rbx
  const CModel *ModelPtr; // rax
  HSequence v11; // eax
  int32 m_Data; // esi
  float v13; // xmm1_4
  float v14; // xmm1_4
  const CBaseAnimatingController *BaseAnimatingController; // rax
  double v16; // xmm1_8
  float v17; // xmm1_4
  float v18; // xmm1_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm3_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CAnimationLayer *v23; // rax
  CAnimationLayer *v24; // r14
  float v25; // xmm0_4
  float v26; // xmm1_4
  float m_Value; // [rsp+4h] [rbp-3Ch]
  float m_flCurrentTime; // [rsp+8h] [rbp-38h]
  float startTimea; // [rsp+Ch] [rbp-34h]

  if ( vm_fade.m_pParent->m_Value.m_nValue != 0
    && (this->m_hOldLayerSequence.m_Data != hNewSequence.m_Data
     || flNewLayerStartTime != this->m_oldLayerStartTime
     || this->m_oldLayer != nNewLayer) )
  {
    this->m_hOldLayerSequence = hNewSequence;
    this->m_oldLayer = nNewLayer;
    this->m_oldLayerStartTime = flNewLayerStartTime;
    v7 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      m_flCurrentTime = v7->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    m_Value = this->m_flAnimationStartTime.m_Value;
    AnimOverlay = CBaseAnimatingOverlay::GetAnimOverlay(this, nNewLayer);
    v9 = AnimOverlay;
    if ( AnimOverlay != 0 && AnimOverlay->m_nOrder.m_Value != 15 )
    {
      ModelPtr = CBaseAnimating::GetModelPtr(this);
      if ( ModelPtr != 0 && CModel::IsValidSequence(ModelPtr, v9->m_op.m_hSequence.m_Value) )
        CBaseAnimating::GetSequenceActivity(this, v9->m_op.m_hSequence.m_Value);
      v11.m_Data = v9->m_op.m_hSequence.m_Value.m_Data;
      m_Data = 0;
      if ( v11.m_Data != 0 )
      {
        if ( nNewLayer == 3 || v9->m_op.m_flWeight.m_Value.m_Value <= 0.0 )
        {
          m_Data = v9->m_op.m_hSequence.m_Value.m_Data;
        }
        else
        {
          m_Data = v9->m_op.m_hSequence.m_Value.m_Data;
          if ( v9->m_nOrder.m_Value != 15 && v9->m_op.m_flCycle.m_Value < 1.0 )
          {
            if ( !CBaseAnimating::IsSequenceLooping(this, v11) )
            {
              v23 = CBaseAnimatingOverlay::GetAnimOverlay(this, 1);
              v24 = v23;
              if ( v9 != v23 )
                CAnimationLayer::CopyFrom(v23, v9);
              CAnimationLayer::SetOrder(v24, 1, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
              v25 = CGlobalVarsBase::curtime(gpGlobals, 0);
              CAnimationLayer::SetFadeOutTime(v24, v25, v26);
            }
            m_Data = v9->m_op.m_hSequence.m_Value.m_Data;
          }
        }
      }
      v13 = m_flCurrentTime - m_Value;
      startTimea = fminf(m_flCurrentTime - m_Value, flNewLayerStartTime);
      if ( m_Data != hNewSequence.m_Data || v9->m_nOrder.m_Value == 15 )
        goto LABEL_19;
      v20 = CBaseAnimating::SequenceDuration(this, hNewSequence);
      v21 = 0.5;
      v13 = fabs((m_flCurrentTime - m_Value) - (v9->m_flLayerAnimtime - (v9->m_op.m_flCycle.m_Value * v20)));
      if ( v20 >= 1.0 )
        v21 = 0.050000001;
      if ( (v13 / v20) >= 1.0 || v13 >= 0.5 || v21 <= (v13 / v20) )
      {
LABEL_19:
        CAnimationLayer::SetCycle(v9, 0.0, v13, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
        CBaseAnimatingOverlay::SetOverlayPrevEventCycle(this, 0, -0.0099999998, v14);
        CAnimationLayer::SetSequence(
          v9,
          hNewSequence,
          SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE,
          LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
        BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
        CAnimationLayer::SetPlaybackRate(
          v9,
          COERCE_DOUBLE(LODWORD(BaseAnimatingController->m_flPlaybackRate.m_Value.m_Value)),
          v16);
        CAnimationLayer::SetWeight(
          v9,
          COERCE_DOUBLE(1065353216),
          v17,
          LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
        CAnimationLayer::SetOrder(v9, nNewLayer, LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
        CAnimationLayer::SetAutofadeDisabled(v9, 1);
        CAnimationLayer::SetPrevCycle(v9, 0.0, v18);
        CAnimationLayer::SetAnimTime(v9, startTimea, v19);
      }
    }
  }
}


// CBaseViewModel::OnViewModelEffectsChanged  (line 1032, @0x00000000021908f0, libserver.so)
// calls: CBaseEntity::SetEffects
void __fastcall CBaseViewModel::OnViewModelEffectsChanged(
        CBaseViewModel *const this,
        CEntityInstance *pInstance,
        const uint32 *punNewValue)
{
  CBaseEntity::SetEffects(this, *punNewValue & 0xFFFFFFDF);
}


// CBaseViewModel::GetWeapon  (line 1037, @0x0000000002190900, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity
CBaseCombatWeapon *__fastcall CBaseViewModel::GetWeapon(const CBaseViewModel *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // edx
  CBaseCombatWeapon *result; // rax
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx

  if ( this->m_hWeapon.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hWeapon.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hWeapon.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  result = 0;
  if ( v3 + 2 > 1 )
  {
    v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9];
    if ( v5 != 0 )
    {
      v6 = &v5[v2 & 0x1FF];
      if ( v6 != 0 && v3 == v6->m_EHandle.m_Index )
        return v6->m_pInstance;
    }
  }
  return result;
}


// CBaseViewModel::YouForgotToImplementOrDeclareServerClass  (line 1044, @0x0000000002187310, libserver.so)
int __fastcall CBaseViewModel::YouForgotToImplementOrDeclareServerClass(CBaseViewModel *const this)
{
  return 0;
}


// CBaseViewModel::GetServerClass  (line 1044, @0x000000000218f100, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CBaseViewModel::GetServerClass(CBaseViewModel *const this)
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


// CBaseViewModel::LookupOverrideAttachment  (line 1096, @0x0000000002187320, libserver.so)
AttachmentOverrideResult_t __fastcall CBaseViewModel::LookupOverrideAttachment(
        const CBaseViewModel *const this,
        CUtlStringToken nAttachmentName,
        AttachmentHandle_t *pHandle)
{
  return AttachmentOverrideResult_t::ATTACHMENT_RESULT_USE_DEFAULT;
}


// CBaseViewModel::GetOverrideAttachment  (line 1108, @0x0000000002187340, libserver.so)
AttachmentOverrideResult_t __fastcall CBaseViewModel::GetOverrideAttachment(
        const CBaseViewModel *const this,
        AttachmentHandle_t hAttachment,
        matrix3x4_t *pAttachmentToWorld,
        bool *pOk)
{
  return AttachmentOverrideResult_t::ATTACHMENT_RESULT_USE_DEFAULT;
}


