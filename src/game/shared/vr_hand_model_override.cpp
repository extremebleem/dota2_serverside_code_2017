// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/vr_hand_model_override.cpp:14
class C_CVRHandModelOverride_MapInstall {
	C_CVRHandModelOverride_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CVRHandModelOverride::YouForgotToImplementOrDeclareServerClass  (line 14, @0x00000000023f8aa0, libserver.so)
int __fastcall CVRHandModelOverride::YouForgotToImplementOrDeclareServerClass(CVRHandModelOverride *const this)
{
  return 0;
}


// CVRHandModelOverride::GetServerClass  (line 14, @0x00000000023fd850, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CVRHandModelOverride::GetServerClass(CVRHandModelOverride *const this)
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


// CVRHandModelOverride::CVRHandModelOverride  (line 18, @0x0000000002409cf0, libserver.so)
// calls: CBaseVRHandAttachment::CBaseVRHandAttachment
void __fastcall CVRHandModelOverride::CVRHandModelOverride(CVRHandModelOverride *const this)
{
  CBaseVRHandAttachment::CBaseVRHandAttachment(this);
  this->_vptr_IHandleEntity = &off_40D3190;
}


// CVRHandModelOverride::Spawn  (line 24, @0x00000000023f97e0, libserver.so)  // inlines: GetModelNameFromKeyValues, V_isempty
// calls: CBaseVRHandAttachment::Spawn, GetModelNameFromKeyValues, CBaseModelEntity::SetModel
void __fastcall CVRHandModelOverride::Spawn(CVRHandModelOverride *const this, const CEntityKeyValues *pKeyValues)
{
  const char *ModelNameFromKeyValues; // rax

  CBaseVRHandAttachment::Spawn(this, pKeyValues);
  ModelNameFromKeyValues = GetModelNameFromKeyValues(pKeyValues, "");
  if ( ModelNameFromKeyValues != 0 && *ModelNameFromKeyValues != 0 )
    CBaseModelEntity::SetModel(this, ModelNameFromKeyValues);
}


// CVRHandModelOverride::UpdatePose  (line 55, @0x00000000023fb350, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CBaseVRHandAttachment::UpdatePose, CBaseEntity::GetModel, CBaseAnimating::GetAttachment, UTIL_ApplyLocalAttachmentInvTransform, CBaseEntity::SetAbsOrigin, CBaseEntity::SetAbsAngles, CBaseModelEntity::SetRenderAlpha
// strings: "vr_controller_root"
void __fastcall CVRHandModelOverride::UpdatePose(
        CVRHandModelOverride *const this,
        const Vector *const vOrigin,
        const QAngle *const qAngles,
        float flModelScale)
{
  unsigned __int16 v5; // dx
  int v6; // esi
  vec_t v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  const CBaseAnimating *m_pInstance; // r13
  Vector vAbsOrigin; // [rsp+0h] [rbp-40h] BYREF
  QAngle qAbsAngles; // [rsp+10h] [rbp-30h] BYREF

  CBaseVRHandAttachment::UpdatePose(this, vOrigin, qAngles, flModelScale);
  if ( this->m_hAttachedHand.m_Value.m_Index == -1 )
  {
    v5 = 0x7FFF;
    v6 = 0x7FFF;
  }
  else
  {
    v5 = this->m_hAttachedHand.m_Value.m_Index & 0x7FFF;
    v6 = v5;
  }
  LODWORD(v7) = (this->m_hAttachedHand.m_Value.m_Index >> 15 << 15) | v5 & 0x7FFF;
  qAbsAngles.x = v7;
  if ( (LODWORD(v7) + 2) > 1 )
  {
    v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9];
    if ( v8 != 0 )
    {
      v9 = &v8[v6 & 0x1FF];
      if ( v9 != 0 && LODWORD(v7) == v9->m_EHandle.m_Index )
      {
        m_pInstance = v9->m_pInstance;
        if ( v9->m_pInstance != 0 )
        {
          CBaseEntity::GetModel(&qAbsAngles, v9->m_pInstance);
          if ( *&qAbsAngles.x != 0
            && CBaseAnimating::GetAttachment(m_pInstance, "vr_controller_root", &vAbsOrigin, &qAbsAngles) )
          {
            UTIL_ApplyLocalAttachmentInvTransform(this, &vAbsOrigin, &qAbsAngles, "vr_controller_root");
            CBaseEntity::SetAbsOrigin(this, &vAbsOrigin);
            CBaseEntity::SetAbsAngles(this, &qAbsAngles);
            CBaseModelEntity::SetRenderAlpha(this, 0xFFu);
          }
        }
      }
    }
  }
}


