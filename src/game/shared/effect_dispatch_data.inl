
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEffectData::operator=  (line 26, @0x0000000001f1a260, libserver.so)  // inlines: Init, NetworkStateChanged, Set, operator!=, operator=
// callers: CSchemaClassBinding<CEffectData>::AllocateAndCopyConstruct, CSchemaClassBinding<CEffectData>::Copy
CEffectData *__fastcall CEffectData::operator=(CEffectData *const this, __int64 a2)
{
  bool v4; // zf
  bool v5; // zf
  bool v6; // zf
  bool v7; // zf
  float m_Value; // xmm0_4

  if ( *(a2 + 8) == this->m_vOrigin.m_Value.x
    && *(a2 + 12) == this->m_vOrigin.m_Value.y
    && *(a2 + 16) == this->m_vOrigin.m_Value.z )
  {
    v4 = *(a2 + 20) == this->m_vStart.m_Value.x;
  }
  else
  {
    (*(this->_vptr_CEffectData + 1))(this, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_vOrigin.m_Value.x = *(a2 + 8);
    this->m_vOrigin.m_Value.y = *(a2 + 12);
    this->m_vOrigin.m_Value.z = *(a2 + 16);
    v4 = *(a2 + 20) == this->m_vStart.m_Value.x;
  }
  if ( v4 && *(a2 + 24) == this->m_vStart.m_Value.y && *(a2 + 28) == this->m_vStart.m_Value.z )
  {
    v5 = *(a2 + 32) == this->m_vNormal.m_Value.x;
  }
  else
  {
    (*(this->_vptr_CEffectData + 1))(this, 20, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_vStart.m_Value.x = *(a2 + 20);
    this->m_vStart.m_Value.y = *(a2 + 24);
    this->m_vStart.m_Value.z = *(a2 + 28);
    v5 = *(a2 + 32) == this->m_vNormal.m_Value.x;
  }
  if ( v5 && *(a2 + 36) == this->m_vNormal.m_Value.y && *(a2 + 40) == this->m_vNormal.m_Value.z )
  {
    v6 = *(a2 + 44) == this->m_vAngles.m_Value.x;
  }
  else
  {
    (*(this->_vptr_CEffectData + 1))(this, 32, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_vNormal.m_Value.x = *(a2 + 32);
    this->m_vNormal.m_Value.y = *(a2 + 36);
    this->m_vNormal.m_Value.z = *(a2 + 40);
    v6 = *(a2 + 44) == this->m_vAngles.m_Value.x;
  }
  if ( v6 && *(a2 + 48) == this->m_vAngles.m_Value.y && *(a2 + 52) == this->m_vAngles.m_Value.z )
  {
    if ( this->m_hEntity.m_Value.m_Index == *(a2 + 56) )
      goto LABEL_17;
LABEL_50:
    (*(this->_vptr_CEffectData + 1))(this, 56, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_hEntity.m_Value.m_Index = *(a2 + 56);
    if ( this->m_hOtherEntity.m_Value.m_Index == *(a2 + 60) )
      goto LABEL_18;
    goto LABEL_51;
  }
  (*(this->_vptr_CEffectData + 1))(this, 44, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_vAngles.m_Value.x = *(a2 + 44);
  this->m_vAngles.m_Value.y = *(a2 + 48);
  this->m_vAngles.m_Value.z = *(a2 + 52);
  if ( this->m_hEntity.m_Value.m_Index != *(a2 + 56) )
    goto LABEL_50;
LABEL_17:
  if ( this->m_hOtherEntity.m_Value.m_Index == *(a2 + 60) )
  {
LABEL_18:
    v7 = this->m_flScale.m_Value == *(a2 + 64);
    goto LABEL_19;
  }
LABEL_51:
  (*(this->_vptr_CEffectData + 1))(this, 60, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  m_Value = this->m_flScale.m_Value;
  this->m_hOtherEntity.m_Value.m_Index = *(a2 + 60);
  v7 = m_Value == *(a2 + 64);
LABEL_19:
  if ( !v7 )
  {
    (*(this->_vptr_CEffectData + 1))(this, 64, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flScale.m_Value = *(a2 + 64);
  }
  if ( this->m_flMagnitude.m_Value != *(a2 + 68) )
  {
    (*(this->_vptr_CEffectData + 1))(this, 68, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flMagnitude.m_Value = *(a2 + 68);
  }
  if ( this->m_flRadius.m_Value != *(a2 + 72) )
  {
    (*(this->_vptr_CEffectData + 1))(this, 72, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flRadius.m_Value = *(a2 + 72);
  }
  if ( *(a2 + 76) != this->m_nSurfaceProp.m_Value.m_nHashCode )
  {
    (*(this->_vptr_CEffectData + 1))(this, 76, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nSurfaceProp.m_Value.m_nHashCode = *(a2 + 76);
  }
  if ( this->m_nEffectIndex.m_Value.m_pBinding != *(a2 + 80) )
  {
    (*(this->_vptr_CEffectData + 1))(this, 80, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nEffectIndex.m_Value.m_pBinding = *(a2 + 80);
  }
  if ( this->m_nDamageType.m_Value != *(a2 + 88) )
  {
    (*(this->_vptr_CEffectData + 1))(this, 88, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nDamageType.m_Value = *(a2 + 88);
  }
  if ( this->m_nMaterial.m_Value != *(a2 + 92) )
  {
    (*(this->_vptr_CEffectData + 1))(this, 92, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nMaterial.m_Value = *(a2 + 92);
  }
  if ( this->m_nHitBox.m_Value != *(a2 + 94) )
  {
    (*(this->_vptr_CEffectData + 1))(this, 94, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nHitBox.m_Value = *(a2 + 94);
  }
  if ( this->m_nColor.m_Value != *(a2 + 96) )
  {
    (*(this->_vptr_CEffectData + 1))(this, 96, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nColor.m_Value = *(a2 + 96);
  }
  if ( this->m_fFlags.m_Value != *(a2 + 97) )
  {
    (*(this->_vptr_CEffectData + 1))(this, 97, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fFlags.m_Value = *(a2 + 97);
  }
  if ( this->m_nAttachmentIndex.m_Value != *(a2 + 98) )
  {
    (*(this->_vptr_CEffectData + 1))(this, 98, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nAttachmentIndex.m_Value = *(a2 + 98);
  }
  if ( *(a2 + 100) != this->m_nAttachmentName.m_Value.m_nHashCode )
  {
    (*(this->_vptr_CEffectData + 1))(this, 100, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nAttachmentName.m_Value.m_nHashCode = *(a2 + 100);
  }
  if ( this->m_iEffectName.m_Value != *(a2 + 104) )
  {
    (*(this->_vptr_CEffectData + 1))(this, 104, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iEffectName.m_Value = *(a2 + 104);
  }
  return this;
}


// CEffectData::NetworkStateChanged  (line 30, @0x0000000001eea420, libserver.so)
void __fastcall CEffectData::NetworkStateChanged(CEffectData *const this)
{
  ;
}


// CEffectData::NetworkStateChanged  (line 30, @0x0000000001eea430, libserver.so)
// callers: CEffectData::CEffectData
void __fastcall CEffectData::NetworkStateChanged(
        CEffectData *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  ;
}


// CEffectData::NetworkStateChangedLog  (line 30, @0x0000000001eea440, libserver.so)
void __fastcall CEffectData::NetworkStateChangedLog(
        const CEffectData *const this,
        const char *pVarName,
        const char *pMsg)
{
  ;
}


// CEffectData::CEffectData  (line 60, @0x0000000001ef06d0, libserver.so)  // inlines: CEntityHandle, CNetworkVarBase, CNetworkVectorBase, CUtlStringToken, CWeakHandle, EnsureValidValue, GetForModify, Init, NetworkStateChanged, Zero
// calls: CEffectData::NetworkStateChanged
// callers: CBaseEntity::ImpactTrace, CBaseEntity::HandleShotImpactingWater, CBaseEntity::FireBullets, CSchemaClassBinding<CEffectData>::Allocate, CSchemaClassBinding<CEffectData>::ConstructInPlace, CSchemaClassBinding<CEffectData>::AllocateAndCopyConstruct, CEnvSplash::InputSplash, UTIL_BloodSpray, DispatchParticleEffect, DispatchParticleEffectLink, StopParticleEffects, StopParticleEffect
void __fastcall CEffectData::CEffectData(CEffectData *const this)
{
  int (**vptr_CEffectData)(...); // rax
  int (**v3)(...); // rax
  int (**v4)(...); // rax
  int (**v5)(...); // rax
  int (**v6)(...); // rax
  int (**v7)(...); // rax
  int (**v8)(...); // rax
  int (**v9)(...); // rax
  int (**v10)(...); // rax

  this->_vptr_CEffectData = &off_3FB64D0;
  this->m_vOrigin.m_Value.z = 0.0;
  *&this->m_vOrigin.m_Value.x = 0;
  *&this->m_vStart.m_Value.y = 0;
  this->m_vStart.m_Value.x = 0.0;
  *&this->m_vNormal.m_Value.y = 0;
  this->m_vNormal.m_Value.x = 0.0;
  this->m_vAngles.m_Value.x = 0.0;
  this->m_vAngles.m_Value.y = 0.0;
  this->m_vAngles.m_Value.z = 0.0;
  this->m_flMagnitude.m_Value = 0.0;
  this->m_hEntity.m_Value.m_Index = -1;
  this->m_hOtherEntity.m_Value.m_Index = -1;
  this->m_flScale.m_Value = 1.0;
  CEffectData::NetworkStateChanged(this, 0x44u, -1, -1);
  vptr_CEffectData = this->_vptr_CEffectData;
  this->m_flRadius.m_Value = 0.0;
  vptr_CEffectData[1](this, 72, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v3 = this->_vptr_CEffectData;
  this->m_nSurfaceProp.m_Value.m_nHashCode = 0;
  this->m_nEffectIndex.m_Value.m_pBinding = 0;
  v3[1](this, 80, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v4 = this->_vptr_CEffectData;
  this->m_nDamageType.m_Value = 0;
  v4[1](this, 88, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v5 = this->_vptr_CEffectData;
  this->m_nMaterial.m_Value = 0;
  v5[1](this, 92, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v6 = this->_vptr_CEffectData;
  this->m_nHitBox.m_Value = 0;
  v6[1](this, 94, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v7 = this->_vptr_CEffectData;
  this->m_nColor.m_Value = 0;
  v7[1](this, 96, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v8 = this->_vptr_CEffectData;
  this->m_fFlags.m_Value = 0;
  v8[1](this, 97, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v9 = this->_vptr_CEffectData;
  this->m_nAttachmentIndex.m_Value = 0;
  v9[1](this, 98, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_iEffectName.m_Value = 0;
  v10 = this->_vptr_CEffectData;
  this->m_nAttachmentName.m_Value.m_nHashCode = 0;
  v10[1](this, 104, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  (*(this->_vptr_CEffectData + 1))(this, 76, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_nSurfaceProp.m_Value.m_nHashCode = 0;
}


