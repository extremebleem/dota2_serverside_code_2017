
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Orb::Schema_DynamicBinding  (line 38, @0x0000000002624210, libserver.so)
// globals: CDOTA_Orb::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Orb::Schema_DynamicBinding(const CDOTA_Orb *const this)
{
  return CDOTA_Orb::s_pSchemaBinding;
}


// CDOTA_Orb::~CDOTA_Orb  (line 46, @0x0000000002624220, libserver.so)
void __fastcall CDOTA_Orb::~CDOTA_Orb(CDOTA_Orb *const this)
{
  this->_vptr_CDOTA_Orb = &off_4115E90;
}


// CDOTA_Orb::~CDOTA_Orb  (line 46, @0x000000000262da00, libserver.so)  // inlines: ~CDOTA_Orb
// calls: operator delete
void __fastcall CDOTA_Orb::~CDOTA_Orb(CDOTA_Orb *const this)
{
  this->_vptr_CDOTA_Orb = &off_4115E90;
  operator delete(this);
}


// CDOTA_Orb::GetProjectileName  (line 50, @0x0000000002624230, libserver.so)
const char *__fastcall CDOTA_Orb::GetProjectileName(CDOTA_Orb *const this)
{
  return 0;
}


// CDOTA_Orb::GetOrbLabel  (line 52, @0x0000000002624240, libserver.so)
int __fastcall CDOTA_Orb::GetOrbLabel(CDOTA_Orb *const this)
{
  return 1;
}


// CDOTA_Orb::OnOrbStart  (line 56, @0x0000000002624250, libserver.so)
void __fastcall CDOTA_Orb::OnOrbStart(CDOTA_Orb *const this, KeyValues *pKV)
{
  ;
}


// CDOTA_Orb::OnOrbFire  (line 58, @0x0000000002624260, libserver.so)
void __fastcall CDOTA_Orb::OnOrbFire(CDOTA_Orb *const this, const CModifierParams *const params)
{
  ;
}


// CDOTA_Orb::OnOrbPreImpact  (line 59, @0x0000000002624270, libserver.so)
void __fastcall CDOTA_Orb::OnOrbPreImpact(CDOTA_Orb *const this, const CModifierParams *const params)
{
  ;
}


// CDOTA_Orb::OnOrbImpact  (line 60, @0x0000000002624280, libserver.so)
void __fastcall CDOTA_Orb::OnOrbImpact(CDOTA_Orb *const this, const CModifierParams *const params)
{
  ;
}


