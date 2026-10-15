
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// fogparams_t::operator=  (line 32, @0x0000000001f14ff0, libserver.so)  // inlines: GetRawColor, NetworkStateChanged, Set, SetRawColor, operator!=, operator=
// callers: CSchemaClassBinding<fogparams_t>::Copy, CSchemaClassBinding<sky3dparams_t>::AllocateAndCopyConstruct, CSchemaClassBinding<fogparams_t>::AllocateAndCopyConstruct, CSchemaClassBinding<sky3dparams_t>::Copy, CPlayerLocalData::operator=
fogparams_t *__fastcall fogparams_t::operator=(fogparams_t *const this, __int64 a2)
{
  if ( *(a2 + 8) != this->dirPrimary.m_Value.x
    || *(a2 + 12) != this->dirPrimary.m_Value.y
    || *(a2 + 16) != this->dirPrimary.m_Value.z )
  {
    (*(this->_vptr_fogparams_t + 1))(this, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->dirPrimary.m_Value.x = *(a2 + 8);
    this->dirPrimary.m_Value.y = *(a2 + 12);
    this->dirPrimary.m_Value.z = *(a2 + 16);
  }
  if ( *&this->colorPrimary != *(a2 + 20) )
  {
    (*(this->_vptr_fogparams_t + 1))(this, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->colorPrimary = *(a2 + 20);
  }
  if ( *&this->colorSecondary != *(a2 + 24) )
  {
    (*(this->_vptr_fogparams_t + 1))(this, 24, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->colorSecondary = *(a2 + 24);
  }
  if ( *&this->colorPrimaryLerpTo != *(a2 + 28) )
  {
    (*(this->_vptr_fogparams_t + 1))(this, 28, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->colorPrimaryLerpTo = *(a2 + 28);
  }
  if ( *&this->colorSecondaryLerpTo != *(a2 + 32) )
  {
    (*(this->_vptr_fogparams_t + 1))(this, 32, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->colorSecondaryLerpTo = *(a2 + 32);
  }
  if ( this->start.m_Value != *(a2 + 36) )
  {
    (*(this->_vptr_fogparams_t + 1))(this, 36, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->start.m_Value = *(a2 + 36);
  }
  if ( this->end.m_Value != *(a2 + 40) )
  {
    (*(this->_vptr_fogparams_t + 1))(this, 40, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->end.m_Value = *(a2 + 40);
  }
  if ( this->farz.m_Value != *(a2 + 44) )
  {
    (*(this->_vptr_fogparams_t + 1))(this, 44, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->farz.m_Value = *(a2 + 44);
  }
  if ( this->maxdensity.m_Value != *(a2 + 48) )
  {
    (*(this->_vptr_fogparams_t + 1))(this, 48, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->maxdensity.m_Value = *(a2 + 48);
  }
  if ( this->exponent.m_Value != *(a2 + 52) )
  {
    (*(this->_vptr_fogparams_t + 1))(this, 52, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->exponent.m_Value = *(a2 + 52);
  }
  if ( this->HDRColorScale.m_Value != *(a2 + 56) )
  {
    (*(this->_vptr_fogparams_t + 1))(this, 56, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->HDRColorScale.m_Value = *(a2 + 56);
  }
  if ( this->skyboxFogFactor.m_Value != *(a2 + 60) )
  {
    (*(this->_vptr_fogparams_t + 1))(this, 60, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->skyboxFogFactor.m_Value = *(a2 + 60);
  }
  if ( this->skyboxFogFactorLerpTo.m_Value != *(a2 + 64) )
  {
    (*(this->_vptr_fogparams_t + 1))(this, 64, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->skyboxFogFactorLerpTo.m_Value = *(a2 + 64);
  }
  if ( this->startLerpTo.m_Value != *(a2 + 68) )
  {
    (*(this->_vptr_fogparams_t + 1))(this, 68, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->startLerpTo.m_Value = *(a2 + 68);
  }
  if ( this->endLerpTo.m_Value != *(a2 + 72) )
  {
    (*(this->_vptr_fogparams_t + 1))(this, 72, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->endLerpTo.m_Value = *(a2 + 72);
  }
  if ( this->maxdensityLerpTo.m_Value != *(a2 + 76) )
  {
    (*(this->_vptr_fogparams_t + 1))(this, 76, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->maxdensityLerpTo.m_Value = *(a2 + 76);
  }
  if ( this->lerptime.m_Value != *(a2 + 80) )
  {
    (*(this->_vptr_fogparams_t + 1))(this, 80, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->lerptime.m_Value = *(a2 + 80);
  }
  if ( this->duration.m_Value != *(a2 + 84) )
  {
    (*(this->_vptr_fogparams_t + 1))(this, 84, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->duration.m_Value = *(a2 + 84);
  }
  if ( this->enable.m_Value != *(a2 + 88) )
  {
    (*(this->_vptr_fogparams_t + 1))(this, 88, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->enable.m_Value = *(a2 + 88);
  }
  if ( this->blend.m_Value != *(a2 + 89) )
  {
    (*(this->_vptr_fogparams_t + 1))(this, 89, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->blend.m_Value = *(a2 + 89);
  }
  if ( this->m_bNoReflectionFog.m_Value != *(a2 + 90) )
  {
    (*(this->_vptr_fogparams_t + 1))(this, 90, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bNoReflectionFog.m_Value = *(a2 + 90);
  }
  this->m_bPadding = *(a2 + 91);
  return this;
}


// fogparams_t::NetworkStateChanged  (line 35, @0x0000000001eea240, libserver.so)
void __fastcall fogparams_t::NetworkStateChanged(fogparams_t *const this)
{
  ;
}


// fogparams_t::NetworkStateChanged  (line 35, @0x0000000001eea250, libserver.so)
// callers: fogparams_t::fogparams_t
void __fastcall fogparams_t::NetworkStateChanged(
        fogparams_t *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  ;
}


// fogparams_t::NetworkStateChangedLog  (line 35, @0x0000000001eea260, libserver.so)
void __fastcall fogparams_t::NetworkStateChangedLog(
        const fogparams_t *const this,
        const char *pVarName,
        const char *pMsg)
{
  ;
}


// fogparams_t::fogparams_t  (line 41, @0x0000000001ef0190, libserver.so)  // inlines: CNetworkColorBase, CNetworkVarBase, CNetworkVectorBase, Color, EnsureValidValue, Init, NetworkStateChanged, Set, SetAlpha, SetBlue, SetComponent, SetGreen, SetVal, Zero, operator=
// calls: fogparams_t::NetworkStateChanged
// callers: CFogTrigger::CEntityInstanceEntityClass::ConstructInstance, CFogController::CFogController, CSchemaClassBinding<fogparams_t>::Allocate, CSchemaClassBinding<fogparams_t>::ConstructInPlace, CSchemaClassBinding<sky3dparams_t>::ConstructInPlace, CSchemaClassBinding<sky3dparams_t>::Allocate, CSchemaClassBinding<sky3dparams_t>::AllocateAndCopyConstruct, CSchemaClassBinding<fogparams_t>::AllocateAndCopyConstruct, CBaseCombatCharacter::GetFogObscuredRatio, CPlayerLocalData::CPlayerLocalData, CSkyCamera::CSkyCamera
void __fastcall fogparams_t::fogparams_t(fogparams_t *const this)
{
  int (**vptr_fogparams_t)(...); // rax
  bool v3; // zf
  int (**v4)(...); // rax
  int (**v5)(...); // rax
  int (**v6)(...); // rax
  int (**v7)(...); // rax
  int (**v8)(...); // rax
  int (**v9)(...); // rax
  int (**v10)(...); // rax
  int (**v11)(...); // rax
  int (**v12)(...); // rax
  int (**v13)(...); // rax
  int (**v14)(...); // rax
  int (**v15)(...); // rax
  int (**v16)(...); // rax
  int (**v17)(...); // rax
  int (**v18)(...); // rax

  vptr_fogparams_t = &off_3FB62F0;
  this->colorPrimary = 0;
  v3 = this->colorPrimary.m_Value._color[1] == 0;
  this->_vptr_fogparams_t = &off_3FB62F0;
  this->dirPrimary.m_Value.z = 0.0;
  this->dirPrimary.m_Value.y = 0.0;
  this->dirPrimary.m_Value.x = 1.0;
  if ( !v3 )
  {
    fogparams_t::NetworkStateChanged(this, 0x14u, -1, -1);
    vptr_fogparams_t = this->_vptr_fogparams_t;
    this->colorPrimary.m_Value._color[1] = 0;
  }
  if ( this->colorPrimary.m_Value._color[2] != 0 )
  {
    vptr_fogparams_t[1](this, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    vptr_fogparams_t = this->_vptr_fogparams_t;
    this->colorPrimary.m_Value._color[2] = 0;
  }
  if ( this->colorPrimary.m_Value._color[3] != 0 )
  {
    vptr_fogparams_t[1](this, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    vptr_fogparams_t = this->_vptr_fogparams_t;
    this->colorPrimary.m_Value._color[3] = 0;
  }
  this->colorSecondary = 0;
  if ( this->colorSecondary.m_Value._color[1] != 0 )
  {
    vptr_fogparams_t[1](this, 24, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    vptr_fogparams_t = this->_vptr_fogparams_t;
    this->colorSecondary.m_Value._color[1] = 0;
  }
  if ( this->colorSecondary.m_Value._color[2] != 0 )
  {
    vptr_fogparams_t[1](this, 24, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    vptr_fogparams_t = this->_vptr_fogparams_t;
    this->colorSecondary.m_Value._color[2] = 0;
  }
  if ( this->colorSecondary.m_Value._color[3] != 0 )
  {
    vptr_fogparams_t[1](this, 24, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    vptr_fogparams_t = this->_vptr_fogparams_t;
    this->colorSecondary.m_Value._color[3] = 0;
  }
  this->colorPrimaryLerpTo = 0;
  if ( this->colorPrimaryLerpTo.m_Value._color[1] != 0 )
  {
    vptr_fogparams_t[1](this, 28, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    vptr_fogparams_t = this->_vptr_fogparams_t;
    this->colorPrimaryLerpTo.m_Value._color[1] = 0;
  }
  if ( this->colorPrimaryLerpTo.m_Value._color[2] != 0 )
  {
    vptr_fogparams_t[1](this, 28, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    vptr_fogparams_t = this->_vptr_fogparams_t;
    this->colorPrimaryLerpTo.m_Value._color[2] = 0;
  }
  if ( this->colorPrimaryLerpTo.m_Value._color[3] != 0 )
  {
    vptr_fogparams_t[1](this, 28, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    vptr_fogparams_t = this->_vptr_fogparams_t;
    this->colorPrimaryLerpTo.m_Value._color[3] = 0;
  }
  this->colorSecondaryLerpTo = 0;
  if ( this->colorSecondaryLerpTo.m_Value._color[1] != 0 )
  {
    vptr_fogparams_t[1](this, 32, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    vptr_fogparams_t = this->_vptr_fogparams_t;
    this->colorSecondaryLerpTo.m_Value._color[1] = 0;
  }
  if ( this->colorSecondaryLerpTo.m_Value._color[2] != 0 )
  {
    vptr_fogparams_t[1](this, 32, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    vptr_fogparams_t = this->_vptr_fogparams_t;
    this->colorSecondaryLerpTo.m_Value._color[2] = 0;
  }
  if ( this->colorSecondaryLerpTo.m_Value._color[3] != 0 )
  {
    vptr_fogparams_t[1](this, 32, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    vptr_fogparams_t = this->_vptr_fogparams_t;
    this->colorSecondaryLerpTo.m_Value._color[3] = 0;
  }
  this->start.m_Value = 0.0;
  vptr_fogparams_t[1](this, 36, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v4 = this->_vptr_fogparams_t;
  this->end.m_Value = 0.0;
  v4[1](this, 40, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v5 = this->_vptr_fogparams_t;
  this->farz.m_Value = 0.0;
  v5[1](this, 44, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v6 = this->_vptr_fogparams_t;
  this->maxdensity.m_Value = 0.0;
  v6[1](this, 48, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v7 = this->_vptr_fogparams_t;
  this->exponent.m_Value = 0.0;
  v7[1](this, 52, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v8 = this->_vptr_fogparams_t;
  this->HDRColorScale.m_Value = 0.0;
  v8[1](this, 56, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v9 = this->_vptr_fogparams_t;
  this->skyboxFogFactor.m_Value = 0.0;
  v9[1](this, 60, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v10 = this->_vptr_fogparams_t;
  this->skyboxFogFactorLerpTo.m_Value = 0.0;
  v10[1](this, 64, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v11 = this->_vptr_fogparams_t;
  this->startLerpTo.m_Value = 0.0;
  v11[1](this, 68, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v12 = this->_vptr_fogparams_t;
  this->endLerpTo.m_Value = 0.0;
  v12[1](this, 72, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v13 = this->_vptr_fogparams_t;
  this->maxdensityLerpTo.m_Value = 0.0;
  v13[1](this, 76, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v14 = this->_vptr_fogparams_t;
  this->lerptime.m_Value = 0.0;
  v14[1](this, 80, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v15 = this->_vptr_fogparams_t;
  this->duration.m_Value = 0.0;
  v15[1](this, 84, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v16 = this->_vptr_fogparams_t;
  this->enable.m_Value = 0;
  v16[1](this, 88, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v17 = this->_vptr_fogparams_t;
  this->blend.m_Value = 0;
  v17[1](this, 89, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v18 = this->_vptr_fogparams_t;
  this->m_bNoReflectionFog.m_Value = 0;
  v18[1](this, 90, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
}


// fogplayerparams_t::Schema_DynamicBinding  (line 141, @0x0000000001f0ef30, libserver.so)
// globals: fogplayerparams_t::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall fogplayerparams_t::Schema_DynamicBinding(const fogplayerparams_t *const this)
{
  return fogplayerparams_t::s_pSchemaBinding;
}


// fogplayerparams_t::NetworkStateChanged  (line 143, @0x0000000001f0ef40, libserver.so)
void __fastcall fogplayerparams_t::NetworkStateChanged(fogplayerparams_t *const this)
{
  ;
}


// fogplayerparams_t::NetworkStateChanged  (line 143, @0x0000000001f0ef50, libserver.so)
void __fastcall fogplayerparams_t::NetworkStateChanged(
        fogplayerparams_t *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  ;
}


// fogplayerparams_t::NetworkStateChangedLog  (line 143, @0x0000000001f0ef60, libserver.so)
void __fastcall fogplayerparams_t::NetworkStateChangedLog(
        const fogplayerparams_t *const this,
        const char *pVarName,
        const char *pMsg)
{
  ;
}


// sky3dparams_t::Schema_DynamicBinding  (line 189, @0x0000000001f0ef70, libserver.so)
// globals: sky3dparams_t::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall sky3dparams_t::Schema_DynamicBinding(const sky3dparams_t *const this)
{
  return sky3dparams_t::s_pSchemaBinding;
}


// sky3dparams_t::NetworkStateChanged  (line 191, @0x0000000001f0ef80, libserver.so)
void __fastcall sky3dparams_t::NetworkStateChanged(sky3dparams_t *const this)
{
  ;
}


// sky3dparams_t::NetworkStateChanged  (line 191, @0x0000000001f0ef90, libserver.so)
void __fastcall sky3dparams_t::NetworkStateChanged(
        sky3dparams_t *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  ;
}


// sky3dparams_t::NetworkStateChangedLog  (line 191, @0x0000000001f0efa0, libserver.so)
void __fastcall sky3dparams_t::NetworkStateChangedLog(
        const sky3dparams_t *const this,
        const char *pVarName,
        const char *pMsg)
{
  ;
}


// sky3dparams_t::NetworkVar_fog::NetworkStateChanged  (line 208, @0x0000000001f0efb0, libserver.so)  // inlines: DispatchNetworkStateChanged<sky3dparams_t>
void __fastcall sky3dparams_t::NetworkVar_fog::NetworkStateChanged(sky3dparams_t::NetworkVar_fog *const this)
{
  (*(*(this - 4) + 8LL))(this - 32);
}


// sky3dparams_t::NetworkVar_fog::NetworkStateChangedLog  (line 208, @0x0000000001f0efd0, libserver.so)  // inlines: DispatchNetworkStateChangedLog<sky3dparams_t>
void __fastcall sky3dparams_t::NetworkVar_fog::NetworkStateChangedLog(
        const sky3dparams_t::NetworkVar_fog *const this,
        const char *pVarName,
        const char *pMsg)
{
  (*(*(this - 4) + 24LL))(this - 32, pVarName, pMsg);
}


// sky3dparams_t::NetworkVar_fog::NetworkStateChanged  (line 208, @0x0000000001f0eff0, libserver.so)  // inlines: DispatchNetworkStateChanged<sky3dparams_t>
// callers: CSkyCamera::CSkyCamera
void __fastcall sky3dparams_t::NetworkVar_fog::NetworkStateChanged(
        sky3dparams_t::NetworkVar_fog *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  (*(*(this - 4) + 16LL))(this - 32, nLocalOffset + 32, nArrayIndex, nPathIndex.m_Value);
}


// audioparams_t::Schema_DynamicBinding  (line 213, @0x0000000001f0f010, libserver.so)
// globals: audioparams_t::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall audioparams_t::Schema_DynamicBinding(const audioparams_t *const this)
{
  return audioparams_t::s_pSchemaBinding;
}


// audioparams_t::NetworkStateChanged  (line 215, @0x0000000001f0f020, libserver.so)
void __fastcall audioparams_t::NetworkStateChanged(audioparams_t *const this)
{
  ;
}


// audioparams_t::NetworkStateChanged  (line 215, @0x0000000001f0f030, libserver.so)
void __fastcall audioparams_t::NetworkStateChanged(
        audioparams_t *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  ;
}


// audioparams_t::NetworkStateChangedLog  (line 215, @0x0000000001f0f040, libserver.so)
void __fastcall audioparams_t::NetworkStateChangedLog(
        const audioparams_t *const this,
        const char *pVarName,
        const char *pMsg)
{
  ;
}


// TonemapParameters_t::NetworkStateChanged  (line 237, @0x0000000001f0f050, libserver.so)
void __fastcall TonemapParameters_t::NetworkStateChanged(TonemapParameters_t *const this)
{
  ;
}


// TonemapParameters_t::NetworkStateChanged  (line 237, @0x0000000001f0f060, libserver.so)
// callers: CSchemaClassBinding<TonemapParameters_t>::ConstructInPlace, CSchemaClassBinding<TonemapParameters_t>::Allocate, CSchemaClassBinding<TonemapParameters_t>::AllocateAndCopyConstruct
void __fastcall TonemapParameters_t::NetworkStateChanged(
        TonemapParameters_t *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  ;
}


// TonemapParameters_t::NetworkStateChangedLog  (line 237, @0x0000000001f0f070, libserver.so)
void __fastcall TonemapParameters_t::NetworkStateChangedLog(
        const TonemapParameters_t *const this,
        const char *pVarName,
        const char *pMsg)
{
  ;
}


