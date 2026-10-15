// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_looping_sound.cpp:27
class C_CDOTA_Unit_LoopingSound_MapInstall {
	C_CDOTA_Unit_LoopingSound_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_LoopingSound::YouForgotToImplementOrDeclareServerClass  (line 27, @0x0000000002ae7a90, libserver.so)
int __fastcall CDOTA_Unit_LoopingSound::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_LoopingSound *const this)
{
  return 0;
}


// CDOTA_Unit_LoopingSound::GetServerClass  (line 27, @0x0000000002af2e70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_LoopingSound::GetServerClass(CDOTA_Unit_LoopingSound *const this)
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


// CDOTA_Unit_LoopingSound::CDOTA_Unit_LoopingSound  (line 97, @0x0000000002af6790, libserver.so)  // inlines: CDOTA_BaseNPC_Additive, CNetworkVarBase, EnsureValidValue<int>
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
void __fastcall CDOTA_Unit_LoopingSound::CDOTA_Unit_LoopingSound(CDOTA_Unit_LoopingSound *const this)
{
  CDOTA_BaseNPC::CDOTA_BaseNPC(this);
  this->m_nLoopingSoundParity.m_Value = 0;
  this->_vptr_IHandleEntity = &off_445D9D0;
  this->_vptr_INextBotEventResponder = &off_445E930;
  this->_vptr_CObstructionObject = &off_445EC60;
}


// CDOTA_Unit_LoopingSound::SetLoopingSound  (line 102, @0x0000000002af67e0, libserver.so)  // inlines: GetForModify, NetworkStateChanged, Set, V_strncpy<int>, operator=<int>
// calls: _V_strncpy
// callers: Create_Looping_Sound_Unit
void __fastcall CDOTA_Unit_LoopingSound::SetLoopingSound(CDOTA_Unit_LoopingSound *const this, const char *pszSoundName)
{
  int m_Value; // eax
  int v5; // r12d

  (*(this->_vptr_IHandleEntity + 22))(this, 4504, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  _V_strncpy(&this->m_pszNetworkedSoundLoop, pszSoundName, 256);
  m_Value = this->m_nLoopingSoundParity.m_Value;
  v5 = (m_Value + 1) & 7;
  if ( m_Value != v5 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4760, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nLoopingSoundParity.m_Value = v5;
  }
}


// Create_Looping_Sound_Unit  (line 108, @0x0000000002af6860, libserver.so)  // inlines: NetworkStateChanged, Set, SetPhantomState, operator=<bool>
// calls: DOTA_Character_ScriptSpawn_Synchronous, CDOTA_Unit_LoopingSound::SetLoopingSound
// callers: CDOTA_Modifier_Phoenix_SunRay::UpdateBeamEffect
// strings: "npc_dota_looping_sound"
CDOTA_Unit_LoopingSound *__fastcall Create_Looping_Sound_Unit(
        CBaseEntity *pOwner,
        int nTeam,
        const char *pszSoundName,
        Vector a4)
{
  CDOTA_BaseNPC *v5; // rax
  CDOTA_Unit_LoopingSound *v6; // rbx

  v5 = DOTA_Character_ScriptSpawn_Synchronous("npc_dota_looping_sound", nTeam, pOwner, 0, 0, a4);
  v6 = v5;
  if ( !v5->m_bIsPhantom.m_Value )
  {
    (*(v5->_vptr_IHandleEntity + 22))(v5, 2164, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v6->m_bIsPhantom.m_Value = 1;
  }
  CDOTA_Unit_LoopingSound::SetLoopingSound(v6, pszSoundName);
  return v6;
}


