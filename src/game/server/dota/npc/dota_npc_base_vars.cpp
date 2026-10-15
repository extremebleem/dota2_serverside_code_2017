
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BaseNPC::SetStartingValues  (line 10, @0x000000000292cad0, libserver.so)  // inlines: GetMaxMana, NetworkStateChanged, Set, SetMaxMana, SetStartingTeam, operator=<float>
// calls: CBaseEntity::SetMaxHealth, CDOTA_BaseNPC::SetMana, CDOTA_BaseNPC::CreateAbilities
void __fastcall CDOTA_BaseNPC::SetStartingValues(CDOTA_BaseNPC *const this)
{
  int (**vptr_IHandleEntity)(...); // rax
  int (*v3)(...); // r12
  unsigned int v4; // eax
  float v5; // xmm1_4
  int m_iStartingMana; // eax
  float m_Value; // xmm0_4
  float m_iStartingMaxMana; // [rsp+Ch] [rbp-14h]

  CBaseEntity::SetMaxHealth(this, this->m_iStartingMaxHealth);
  if ( this->m_iStartingMaxMana != this->m_flMaxMana.m_Value )
  {
    m_iStartingMaxMana = this->m_iStartingMaxMana;
    (*(this->_vptr_IHandleEntity + 22))(this, 2144, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flMaxMana.m_Value = m_iStartingMaxMana;
  }
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_flBaseMaxHealth = this->m_iStartingMaxHealth;
  v3 = vptr_IHandleEntity[157];
  v4 = vptr_IHandleEntity[156](this);
  v3(this, v4);
  m_iStartingMana = this->m_iStartingMana;
  if ( m_iStartingMana == -1 )
    m_Value = this->m_flMaxMana.m_Value;
  else
    m_Value = m_iStartingMana;
  CDOTA_BaseNPC::SetMana(this, m_Value, v5);
  if ( this->m_iTeamNum.m_Value == 0 )
    (*(this->_vptr_IHandleEntity + 70))(this, this->m_iTeamName);
  CDOTA_BaseNPC::CreateAbilities(this, 0);
}


// CDOTA_BaseNPC::SetStartingTeam  (line 25, @0x000000000290a7f0, libserver.so)
void __fastcall CDOTA_BaseNPC::SetStartingTeam(CDOTA_BaseNPC *const this)
{
  if ( this->m_iTeamNum.m_Value == 0 )
    (*(this->_vptr_IHandleEntity + 70))(this, this->m_iTeamName);
}


