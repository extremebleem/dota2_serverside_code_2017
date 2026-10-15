// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/env_detail_controller.cpp:15
class C_CEnvDetailController_MapInstall {
	C_CEnvDetailController_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnvDetailController::YouForgotToImplementOrDeclareServerClass  (line 15, @0x00000000021baf60, libserver.so)
int __fastcall CEnvDetailController::YouForgotToImplementOrDeclareServerClass(CEnvDetailController *const this)
{
  return 0;
}


// CEnvDetailController::GetServerClass  (line 15, @0x00000000021c47f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CEnvDetailController::GetServerClass(CEnvDetailController *const this)
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


// GetDetailController  (line 18, @0x00000000021cf720, libserver.so)
// globals: s_detailController
CEnvDetailController *__cdecl GetDetailController()
{
  return s_detailController;
}


// CEnvDetailController::CEnvDetailController  (line 23, @0x00000000021cf730, libserver.so)  // inlines: CNetworkVarBase, EnsureValidValue<float>
// calls: CBaseEntity::CBaseEntity
// callers: CEnvDetailController::CEntityInstanceEntityClass::ConstructInstance
// globals: s_detailController
void __fastcall CEnvDetailController::CEnvDetailController(CEnvDetailController *const this)
{
  CBaseEntity::CBaseEntity(this);
  this->_vptr_IHandleEntity = &off_40251F0;
  this->m_flFadeStartDist.m_Value = 0.0;
  this->m_flFadeEndDist.m_Value = 0.0;
  s_detailController = this;
}


// CEnvDetailController::~CEnvDetailController  (line 28, @0x00000000021bb190, libserver.so)
// calls: CBaseEntity::~CBaseEntity
// globals: s_detailController
void __fastcall CEnvDetailController::~CEnvDetailController(CEnvDetailController *const this)
{
  bool v1; // zf

  v1 = s_detailController == this;
  this->_vptr_IHandleEntity = &off_40251F0;
  if ( v1 )
    s_detailController = 0;
  CBaseEntity::~CBaseEntity(this);
}


// CEnvDetailController::~CEnvDetailController  (line 28, @0x00000000021bb1d0, libserver.so)  // inlines: ~CEnvDetailController
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
// globals: s_detailController
void __fastcall CEnvDetailController::~CEnvDetailController(CEnvDetailController *const this)
{
  this->_vptr_IHandleEntity = &off_40251F0;
  if ( this == s_detailController )
    s_detailController = 0;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvDetailController::UpdateTransmitState  (line 37, @0x00000000021bb150, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CEnvDetailController::UpdateTransmitState(CEnvDetailController *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


