
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Modifier_MagicImmune::~CDOTA_Modifier_MagicImmune  (line 26, @0x0000000002652770, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_MagicImmune::~CDOTA_Modifier_MagicImmune(CDOTA_Modifier_MagicImmune *const this)
{
  this->_vptr_CDOTA_Buff = &off_411B710;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_MagicImmune::~CDOTA_Modifier_MagicImmune  (line 26, @0x0000000002652790, libserver.so)  // inlines: ~CDOTA_Modifier_MagicImmune
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_MagicImmune::~CDOTA_Modifier_MagicImmune(CDOTA_Modifier_MagicImmune *const this)
{
  this->_vptr_CDOTA_Buff = &off_411B710;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_MagicImmune::IsPurgable  (line 32, @0x0000000002624df0, libserver.so)
bool __fastcall CDOTA_Modifier_MagicImmune::IsPurgable(CDOTA_Modifier_MagicImmune *const this)
{
  return 0;
}


// CDOTA_Modifier_CameraFollow::~CDOTA_Modifier_CameraFollow  (line 41, @0x0000000002652720, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_CameraFollow::~CDOTA_Modifier_CameraFollow(CDOTA_Modifier_CameraFollow *const this)
{
  this->_vptr_CDOTA_Buff = &off_411BA30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_CameraFollow::~CDOTA_Modifier_CameraFollow  (line 41, @0x0000000002652740, libserver.so)  // inlines: ~CDOTA_Modifier_CameraFollow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_CameraFollow::~CDOTA_Modifier_CameraFollow(CDOTA_Modifier_CameraFollow *const this)
{
  this->_vptr_CDOTA_Buff = &off_411BA30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_CameraFollow::IsHidden  (line 50, @0x0000000002624e00, libserver.so)
bool __fastcall CDOTA_Modifier_CameraFollow::IsHidden(CDOTA_Modifier_CameraFollow *const this)
{
  return 1;
}


// CDOTA_Modifier_CameraFollow::IsPurgable  (line 51, @0x0000000002624e10, libserver.so)
bool __fastcall CDOTA_Modifier_CameraFollow::IsPurgable(CDOTA_Modifier_CameraFollow *const this)
{
  return 0;
}


// CDOTA_Modifier_Hexed::~CDOTA_Modifier_Hexed  (line 54, @0x0000000002651c00, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Hexed::~CDOTA_Modifier_Hexed(CDOTA_Modifier_Hexed *const this)
{
  this->_vptr_CDOTA_Buff = &off_41228D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Hexed::~CDOTA_Modifier_Hexed  (line 54, @0x0000000002651c20, libserver.so)  // inlines: ~CDOTA_Modifier_Hexed
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Hexed::~CDOTA_Modifier_Hexed(CDOTA_Modifier_Hexed *const this)
{
  this->_vptr_CDOTA_Buff = &off_41228D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Hexed::IsDebuff  (line 59, @0x0000000002624e20, libserver.so)
bool __fastcall CDOTA_Modifier_Hexed::IsDebuff(CDOTA_Modifier_Hexed *const this)
{
  return 1;
}


// CDOTA_Modifier_Hexed::IsHexDebuff  (line 69, @0x0000000002624e30, libserver.so)
bool __fastcall CDOTA_Modifier_Hexed::IsHexDebuff(CDOTA_Modifier_Hexed *const this)
{
  return 1;
}


// CDOTA_Modifier_Hexed::GetHexType  (line 70, @0x0000000002624e40, libserver.so)
const char *__fastcall CDOTA_Modifier_Hexed::GetHexType(CDOTA_Modifier_Hexed *const this)
{
  return "Generic";
}


// CDOTA_Modifier_Hexed::GetDefaultHexModel  (line 71, @0x0000000002624e50, libserver.so)
// strings: "models/props_gameplay/pig.vmdl"
const char *__fastcall CDOTA_Modifier_Hexed::GetDefaultHexModel(CDOTA_Modifier_Hexed *const this)
{
  return "models/props_gameplay/pig.vmdl";
}


// CDOTA_Modifier_Hexed::GetMoveSpeedModifier  (line 73, @0x0000000002624e60, libserver.so)
float __fastcall CDOTA_Modifier_Hexed::GetMoveSpeedModifier(CDOTA_Modifier_Hexed *const this)
{
  return 100.0;
}


// CDOTA_Modifier_Hexed::GetPriority  (line 75, @0x0000000002624e70, libserver.so)
int __fastcall CDOTA_Modifier_Hexed::GetPriority(CDOTA_Modifier_Hexed *const this)
{
  return 2;
}


// CDOTA_Modifier_Item_Editor::~CDOTA_Modifier_Item_Editor  (line 86, @0x0000000002652b70, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Editor::~CDOTA_Modifier_Item_Editor(CDOTA_Modifier_Item_Editor *const this)
{
  this->_vptr_CDOTA_Buff = &off_4116390;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Editor::~CDOTA_Modifier_Item_Editor  (line 86, @0x0000000002652b90, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Editor
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Editor::~CDOTA_Modifier_Item_Editor(CDOTA_Modifier_Item_Editor *const this)
{
  this->_vptr_CDOTA_Buff = &off_4116390;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Editor::IsHidden  (line 91, @0x0000000002624e80, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Editor::IsHidden(CDOTA_Modifier_Item_Editor *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Editor::GetStatusEffectName  (line 92, @0x0000000002624e90, libserver.so)
// strings: "particles/status_fx/status_effect_item_editor.vpcf"
const char *__fastcall CDOTA_Modifier_Item_Editor::GetStatusEffectName(CDOTA_Modifier_Item_Editor *const this)
{
  return "particles/status_fx/status_effect_item_editor.vpcf";
}


// CDOTA_Modifier_Item_Editor::StatusEffectPriority  (line 93, @0x0000000002624ea0, libserver.so)
int __fastcall CDOTA_Modifier_Item_Editor::StatusEffectPriority(CDOTA_Modifier_Item_Editor *const this)
{
  return 1;
}


// CDOTA_Modifier_Prosperous_Soul::~CDOTA_Modifier_Prosperous_Soul  (line 99, @0x0000000002652b20, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Prosperous_Soul::~CDOTA_Modifier_Prosperous_Soul(
        CDOTA_Modifier_Prosperous_Soul *const this)
{
  this->_vptr_CDOTA_Buff = &off_4116670;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Prosperous_Soul::~CDOTA_Modifier_Prosperous_Soul  (line 99, @0x0000000002652b40, libserver.so)  // inlines: ~CDOTA_Modifier_Prosperous_Soul
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Prosperous_Soul::~CDOTA_Modifier_Prosperous_Soul(
        CDOTA_Modifier_Prosperous_Soul *const this)
{
  this->_vptr_CDOTA_Buff = &off_4116670;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Prosperous_Soul::IsHidden  (line 104, @0x0000000002624eb0, libserver.so)
bool __fastcall CDOTA_Modifier_Prosperous_Soul::IsHidden(CDOTA_Modifier_Prosperous_Soul *const this)
{
  return 1;
}


// CDOTA_Modifier_Prosperous_Soul::GetEffectName  (line 105, @0x0000000002624ec0, libserver.so)
// strings: "particles/generic_gameplay/prosperous_soul_01.vpcf"
const char *__fastcall CDOTA_Modifier_Prosperous_Soul::GetEffectName(CDOTA_Modifier_Prosperous_Soul *const this)
{
  return "particles/generic_gameplay/prosperous_soul_01.vpcf";
}


// CDOTA_Modifier_Prosperous_Soul::GetEffectAttachType  (line 106, @0x0000000002624ed0, libserver.so)
int __fastcall CDOTA_Modifier_Prosperous_Soul::GetEffectAttachType(CDOTA_Modifier_Prosperous_Soul *const this)
{
  return 7;
}


// CDOTA_Modifier_Prosperous_Soul::ShouldUseOverheadOffset  (line 107, @0x0000000002624ee0, libserver.so)
bool __fastcall CDOTA_Modifier_Prosperous_Soul::ShouldUseOverheadOffset(CDOTA_Modifier_Prosperous_Soul *const this)
{
  return 1;
}


// CDOTA_Modifier_MoveSpeed_Percentage::~CDOTA_Modifier_MoveSpeed_Percentage  (line 115, @0x00000000026526d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_MoveSpeed_Percentage::~CDOTA_Modifier_MoveSpeed_Percentage(
        CDOTA_Modifier_MoveSpeed_Percentage *const this)
{
  this->_vptr_CDOTA_Buff = &off_411BDD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_MoveSpeed_Percentage::~CDOTA_Modifier_MoveSpeed_Percentage  (line 115, @0x00000000026526f0, libserver.so)  // inlines: ~CDOTA_Modifier_MoveSpeed_Percentage
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_MoveSpeed_Percentage::~CDOTA_Modifier_MoveSpeed_Percentage(
        CDOTA_Modifier_MoveSpeed_Percentage *const this)
{
  this->_vptr_CDOTA_Buff = &off_411BDD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Kill::~CDOTA_Modifier_Kill  (line 133, @0x0000000002652680, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Kill::~CDOTA_Modifier_Kill(CDOTA_Modifier_Kill *const this)
{
  this->_vptr_CDOTA_Buff = &off_411C0F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Kill::~CDOTA_Modifier_Kill  (line 133, @0x00000000026526a0, libserver.so)  // inlines: ~CDOTA_Modifier_Kill
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Kill::~CDOTA_Modifier_Kill(CDOTA_Modifier_Kill *const this)
{
  this->_vptr_CDOTA_Buff = &off_411C0F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Kill::IsDebuff  (line 139, @0x0000000002624ef0, libserver.so)
bool __fastcall CDOTA_Modifier_Kill::IsDebuff(CDOTA_Modifier_Kill *const this)
{
  return 1;
}


// CDOTA_Modifier_Kill::IsHidden  (line 140, @0x0000000002624f00, libserver.so)
bool __fastcall CDOTA_Modifier_Kill::IsHidden(CDOTA_Modifier_Kill *const this)
{
  return 1;
}


// CDOTA_Modifier_Kill::IsPurgable  (line 141, @0x0000000002624f10, libserver.so)
bool __fastcall CDOTA_Modifier_Kill::IsPurgable(CDOTA_Modifier_Kill *const this)
{
  return 0;
}


// CDOTA_Modifier_Phased::~CDOTA_Modifier_Phased  (line 149, @0x0000000002652630, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Phased::~CDOTA_Modifier_Phased(CDOTA_Modifier_Phased *const this)
{
  this->_vptr_CDOTA_Buff = &off_411C410;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Phased::~CDOTA_Modifier_Phased  (line 149, @0x0000000002652650, libserver.so)  // inlines: ~CDOTA_Modifier_Phased
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Phased::~CDOTA_Modifier_Phased(CDOTA_Modifier_Phased *const this)
{
  this->_vptr_CDOTA_Buff = &off_411C410;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Phased::IsPurgable  (line 153, @0x0000000002624f20, libserver.so)
bool __fastcall CDOTA_Modifier_Phased::IsPurgable(CDOTA_Modifier_Phased *const this)
{
  return 0;
}


// CDOTA_Modifier_Dominated::~CDOTA_Modifier_Dominated  (line 161, @0x00000000026525e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Dominated::~CDOTA_Modifier_Dominated(CDOTA_Modifier_Dominated *const this)
{
  this->_vptr_CDOTA_Buff = &off_411C730;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Dominated::~CDOTA_Modifier_Dominated  (line 161, @0x0000000002652600, libserver.so)  // inlines: ~CDOTA_Modifier_Dominated
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Dominated::~CDOTA_Modifier_Dominated(CDOTA_Modifier_Dominated *const this)
{
  this->_vptr_CDOTA_Buff = &off_411C730;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Dominated::IsHidden  (line 166, @0x0000000002624f30, libserver.so)
bool __fastcall CDOTA_Modifier_Dominated::IsHidden(CDOTA_Modifier_Dominated *const this)
{
  return 1;
}


// CDOTA_Modifier_Dominated::IsPurgable  (line 167, @0x0000000002624f40, libserver.so)
bool __fastcall CDOTA_Modifier_Dominated::IsPurgable(CDOTA_Modifier_Dominated *const this)
{
  return 0;
}


// CDOTA_Modifier_TrueSight::~CDOTA_Modifier_TrueSight  (line 175, @0x0000000002652590, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_TrueSight::~CDOTA_Modifier_TrueSight(CDOTA_Modifier_TrueSight *const this)
{
  this->_vptr_CDOTA_Buff = &off_411CA50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_TrueSight::~CDOTA_Modifier_TrueSight  (line 175, @0x00000000026525b0, libserver.so)  // inlines: ~CDOTA_Modifier_TrueSight
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_TrueSight::~CDOTA_Modifier_TrueSight(CDOTA_Modifier_TrueSight *const this)
{
  this->_vptr_CDOTA_Buff = &off_411CA50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_TrueSight::IsHidden  (line 184, @0x0000000002624f50, libserver.so)
bool __fastcall CDOTA_Modifier_TrueSight::IsHidden(CDOTA_Modifier_TrueSight *const this)
{
  return 1;
}


// CDOTA_Modifier_TrueSight::GetAttributes  (line 185, @0x0000000002624f60, libserver.so)
int __fastcall CDOTA_Modifier_TrueSight::GetAttributes(CDOTA_Modifier_TrueSight *const this)
{
  return this->m_iAttributes | 6;
}


// CDOTA_Modifier_Stunned::~CDOTA_Modifier_Stunned  (line 192, @0x000000000264fe90, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Stunned::~CDOTA_Modifier_Stunned(CDOTA_Modifier_Stunned *const this)
{
  this->_vptr_CDOTA_Buff = &off_411CD70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Stunned::~CDOTA_Modifier_Stunned  (line 192, @0x000000000264feb0, libserver.so)  // inlines: ~CDOTA_Modifier_Stunned
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Stunned::~CDOTA_Modifier_Stunned(CDOTA_Modifier_Stunned *const this)
{
  this->_vptr_CDOTA_Buff = &off_411CD70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Stunned::IsDebuff  (line 197, @0x0000000002624f70, libserver.so)
bool __fastcall CDOTA_Modifier_Stunned::IsDebuff(CDOTA_Modifier_Stunned *const this)
{
  return 1;
}


// CDOTA_Modifier_Stunned::IsStunDebuff  (line 198, @0x0000000002624f80, libserver.so)
bool __fastcall CDOTA_Modifier_Stunned::IsStunDebuff(CDOTA_Modifier_Stunned *const this)
{
  return 1;
}


// CDOTA_Modifier_Stunned::GetEffectAttachType  (line 206, @0x0000000002624f90, libserver.so)
int __fastcall CDOTA_Modifier_Stunned::GetEffectAttachType(CDOTA_Modifier_Stunned *const this)
{
  return 7;
}


// CDOTA_Modifier_Bashed::~CDOTA_Modifier_Bashed  (line 212, @0x000000000264ff80, libserver.so)  // inlines: ~CDOTA_Modifier_Stunned
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Bashed::~CDOTA_Modifier_Bashed(CDOTA_Modifier_Bashed *const this)
{
  this->_vptr_CDOTA_Buff = &off_411CD70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Bashed::~CDOTA_Modifier_Bashed  (line 212, @0x000000000264ffa0, libserver.so)  // inlines: ~CDOTA_Modifier_Bashed, ~CDOTA_Modifier_Stunned
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Bashed::~CDOTA_Modifier_Bashed(CDOTA_Modifier_Bashed *const this)
{
  this->_vptr_CDOTA_Buff = &off_411CD70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Bashed::GetEffectName  (line 222, @0x0000000002624fa0, libserver.so)
// strings: "particles/generic_gameplay/generic_bashed.vpcf"
const char *__fastcall CDOTA_Modifier_Bashed::GetEffectName(CDOTA_Modifier_Bashed *const this)
{
  return "particles/generic_gameplay/generic_bashed.vpcf";
}


// CDOTA_Modifier_Taunt::~CDOTA_Modifier_Taunt  (line 232, @0x0000000002652540, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Taunt::~CDOTA_Modifier_Taunt(CDOTA_Modifier_Taunt *const this)
{
  this->_vptr_CDOTA_Buff = &off_411D3B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Taunt::~CDOTA_Modifier_Taunt  (line 232, @0x0000000002652560, libserver.so)  // inlines: ~CDOTA_Modifier_Taunt
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Taunt::~CDOTA_Modifier_Taunt(CDOTA_Modifier_Taunt *const this)
{
  this->_vptr_CDOTA_Buff = &off_411D3B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Taunt::IsDebuff  (line 237, @0x0000000002624fb0, libserver.so)
bool __fastcall CDOTA_Modifier_Taunt::IsDebuff(CDOTA_Modifier_Taunt *const this)
{
  return 0;
}


// CDOTA_Modifier_Taunt::IsHidden  (line 238, @0x0000000002624fc0, libserver.so)
bool __fastcall CDOTA_Modifier_Taunt::IsHidden(CDOTA_Modifier_Taunt *const this)
{
  return 1;
}


// CDOTA_Modifier_Taunt::IsPurgable  (line 240, @0x0000000002624fd0, libserver.so)
bool __fastcall CDOTA_Modifier_Taunt::IsPurgable(CDOTA_Modifier_Taunt *const this)
{
  return 0;
}


// CDOTA_Modifier_PersistentInvisibility::~CDOTA_Modifier_PersistentInvisibility  (line 251, @0x00000000026524f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_PersistentInvisibility::~CDOTA_Modifier_PersistentInvisibility(
        CDOTA_Modifier_PersistentInvisibility *const this)
{
  this->_vptr_CDOTA_Buff = &off_411D6D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_PersistentInvisibility::~CDOTA_Modifier_PersistentInvisibility  (line 251, @0x0000000002652510, libserver.so)  // inlines: ~CDOTA_Modifier_PersistentInvisibility
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_PersistentInvisibility::~CDOTA_Modifier_PersistentInvisibility(
        CDOTA_Modifier_PersistentInvisibility *const this)
{
  this->_vptr_CDOTA_Buff = &off_411D6D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_PersistentInvisibility::IsHidden  (line 256, @0x0000000002624fe0, libserver.so)
bool __fastcall CDOTA_Modifier_PersistentInvisibility::IsHidden(CDOTA_Modifier_PersistentInvisibility *const this)
{
  return 1;
}


// CDOTA_Modifier_Invisible::~CDOTA_Modifier_Invisible  (line 288, @0x0000000002652450, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Invisible::~CDOTA_Modifier_Invisible(CDOTA_Modifier_Invisible *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Invisible::~CDOTA_Modifier_Invisible  (line 288, @0x0000000002652470, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Invisible::~CDOTA_Modifier_Invisible(CDOTA_Modifier_Invisible *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Invisible::GetEffectName  (line 304, @0x0000000002624ff0, libserver.so)
// strings: "particles/generic_hero_status/status_invisibility_start.vpcf"
const char *__fastcall CDOTA_Modifier_Invisible::GetEffectName(CDOTA_Modifier_Invisible *const this)
{
  const char *result; // rax

  result = 0;
  if ( !this->m_bSubtle )
    return "particles/generic_hero_status/status_invisibility_start.vpcf";
  return result;
}


// CDOTA_Modifier_Followthrough::~CDOTA_Modifier_Followthrough  (line 324, @0x0000000002652400, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Followthrough::~CDOTA_Modifier_Followthrough(CDOTA_Modifier_Followthrough *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DD50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Followthrough::~CDOTA_Modifier_Followthrough  (line 324, @0x0000000002652420, libserver.so)  // inlines: ~CDOTA_Modifier_Followthrough
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Followthrough::~CDOTA_Modifier_Followthrough(CDOTA_Modifier_Followthrough *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DD50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Followthrough::IsHidden  (line 329, @0x0000000002625010, libserver.so)
bool __fastcall CDOTA_Modifier_Followthrough::IsHidden(CDOTA_Modifier_Followthrough *const this)
{
  return 1;
}


// CDOTA_Modifier_Silence::~CDOTA_Modifier_Silence  (line 337, @0x00000000026523b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Silence::~CDOTA_Modifier_Silence(CDOTA_Modifier_Silence *const this)
{
  this->_vptr_CDOTA_Buff = &off_411E070;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Silence::~CDOTA_Modifier_Silence  (line 337, @0x00000000026523d0, libserver.so)  // inlines: ~CDOTA_Modifier_Silence
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Silence::~CDOTA_Modifier_Silence(CDOTA_Modifier_Silence *const this)
{
  this->_vptr_CDOTA_Buff = &off_411E070;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Silence::IsDebuff  (line 342, @0x0000000002625020, libserver.so)
bool __fastcall CDOTA_Modifier_Silence::IsDebuff(CDOTA_Modifier_Silence *const this)
{
  return 1;
}


// CDOTA_Modifier_Silence::GetEffectAttachType  (line 347, @0x0000000002625030, libserver.so)
int __fastcall CDOTA_Modifier_Silence::GetEffectAttachType(CDOTA_Modifier_Silence *const this)
{
  return 7;
}


// CDOTA_Modifier_Silence::ShouldUseOverheadOffset  (line 348, @0x0000000002625040, libserver.so)
bool __fastcall CDOTA_Modifier_Silence::ShouldUseOverheadOffset(CDOTA_Modifier_Silence *const this)
{
  return 1;
}


// CDOTA_Modifier_Invulnerable::~CDOTA_Modifier_Invulnerable  (line 354, @0x0000000002652310, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Invulnerable::~CDOTA_Modifier_Invulnerable(CDOTA_Modifier_Invulnerable *const this)
{
  this->_vptr_CDOTA_Buff = &off_411E390;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Invulnerable::~CDOTA_Modifier_Invulnerable  (line 354, @0x0000000002652330, libserver.so)  // inlines: ~CDOTA_Modifier_Invulnerable
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Invulnerable::~CDOTA_Modifier_Invulnerable(CDOTA_Modifier_Invulnerable *const this)
{
  this->_vptr_CDOTA_Buff = &off_411E390;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_AttackImmune::~CDOTA_Modifier_AttackImmune  (line 367, @0x00000000026522c0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_AttackImmune::~CDOTA_Modifier_AttackImmune(CDOTA_Modifier_AttackImmune *const this)
{
  this->_vptr_CDOTA_Buff = &off_411E6B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_AttackImmune::~CDOTA_Modifier_AttackImmune  (line 367, @0x00000000026522e0, libserver.so)  // inlines: ~CDOTA_Modifier_AttackImmune
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_AttackImmune::~CDOTA_Modifier_AttackImmune(CDOTA_Modifier_AttackImmune *const this)
{
  this->_vptr_CDOTA_Buff = &off_411E6B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Disarmed::~CDOTA_Modifier_Disarmed  (line 378, @0x0000000002652270, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Disarmed::~CDOTA_Modifier_Disarmed(CDOTA_Modifier_Disarmed *const this)
{
  this->_vptr_CDOTA_Buff = &off_411E9D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Disarmed::~CDOTA_Modifier_Disarmed  (line 378, @0x0000000002652290, libserver.so)  // inlines: ~CDOTA_Modifier_Disarmed
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Disarmed::~CDOTA_Modifier_Disarmed(CDOTA_Modifier_Disarmed *const this)
{
  this->_vptr_CDOTA_Buff = &off_411E9D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Rooted::~CDOTA_Modifier_Rooted  (line 389, @0x0000000002650bf0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Rooted::~CDOTA_Modifier_Rooted(CDOTA_Modifier_Rooted *const this)
{
  this->_vptr_CDOTA_Buff = &off_411ECF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Rooted::~CDOTA_Modifier_Rooted  (line 389, @0x0000000002650c10, libserver.so)  // inlines: ~CDOTA_Modifier_Rooted
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Rooted::~CDOTA_Modifier_Rooted(CDOTA_Modifier_Rooted *const this)
{
  this->_vptr_CDOTA_Buff = &off_411ECF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_NoHealthBar::~CDOTA_Modifier_NoHealthBar  (line 400, @0x0000000002652220, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_NoHealthBar::~CDOTA_Modifier_NoHealthBar(CDOTA_Modifier_NoHealthBar *const this)
{
  this->_vptr_CDOTA_Buff = &off_411F010;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_NoHealthBar::~CDOTA_Modifier_NoHealthBar  (line 400, @0x0000000002652240, libserver.so)  // inlines: ~CDOTA_Modifier_NoHealthBar
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_NoHealthBar::~CDOTA_Modifier_NoHealthBar(CDOTA_Modifier_NoHealthBar *const this)
{
  this->_vptr_CDOTA_Buff = &off_411F010;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_FountainAura::~CDOTA_Modifier_FountainAura  (line 424, @0x0000000002652ad0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_FountainAura::~CDOTA_Modifier_FountainAura(CDOTA_Modifier_FountainAura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4116950;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_FountainAura::~CDOTA_Modifier_FountainAura  (line 424, @0x0000000002652af0, libserver.so)  // inlines: ~CDOTA_Modifier_FountainAura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_FountainAura::~CDOTA_Modifier_FountainAura(CDOTA_Modifier_FountainAura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4116950;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_FountainAura::IsHidden  (line 429, @0x0000000002625050, libserver.so)
bool __fastcall CDOTA_Modifier_FountainAura::IsHidden(CDOTA_Modifier_FountainAura *const this)
{
  return 0;
}


// CDOTA_Modifier_FountainAura::GetAuraDuration  (line 430, @0x0000000002625060, libserver.so)
float __fastcall CDOTA_Modifier_FountainAura::GetAuraDuration(CDOTA_Modifier_FountainAura *const this)
{
  return 3.0;
}


// CDOTA_Modifier_FountainAuraBuff::~CDOTA_Modifier_FountainAuraBuff  (line 437, @0x00000000026521d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_FountainAuraBuff::~CDOTA_Modifier_FountainAuraBuff(
        CDOTA_Modifier_FountainAuraBuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_411F370;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_FountainAuraBuff::~CDOTA_Modifier_FountainAuraBuff  (line 437, @0x00000000026521f0, libserver.so)  // inlines: ~CDOTA_Modifier_FountainAuraBuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_FountainAuraBuff::~CDOTA_Modifier_FountainAuraBuff(
        CDOTA_Modifier_FountainAuraBuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_411F370;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_FountainAuraBuff::IsHidden  (line 442, @0x0000000002625070, libserver.so)
bool __fastcall CDOTA_Modifier_FountainAuraBuff::IsHidden(CDOTA_Modifier_FountainAuraBuff *const this)
{
  return 0;
}


// CDOTA_Modifier_FountainAuraBuff::GetTexture  (line 452, @0x0000000002625080, libserver.so)
// strings: "fountain_heal"
const char *__fastcall CDOTA_Modifier_FountainAuraBuff::GetTexture(CDOTA_Modifier_FountainAuraBuff *const this)
{
  return "fountain_heal";
}


// CDOTA_Modifier_Illusion::~CDOTA_Modifier_Illusion  (line 459, @0x0000000002651f20, libserver.so)  // inlines: ~CUtlString
// calls: CUtlString::FreeMemoryBlock, CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Illusion::~CDOTA_Modifier_Illusion(CDOTA_Modifier_Illusion *const this)
{
  CUtlString *p_m_strIllusionType; // rdi

  p_m_strIllusionType = &this->m_strIllusionType;
  p_m_strIllusionType[-376].m_pString = &off_4120630;
  if ( this->m_strIllusionType.m_pString != 0 )
    CUtlString::FreeMemoryBlock(p_m_strIllusionType);
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Illusion::~CDOTA_Modifier_Illusion  (line 459, @0x0000000002652e30, libserver.so)  // inlines: ~CDOTA_Modifier_Illusion, ~CUtlString
// calls: CUtlString::FreeMemoryBlock, CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Illusion::~CDOTA_Modifier_Illusion(CDOTA_Modifier_Illusion *const this)
{
  CUtlString *p_m_strIllusionType; // rdi

  p_m_strIllusionType = &this->m_strIllusionType;
  p_m_strIllusionType[-376].m_pString = &off_4120630;
  if ( this->m_strIllusionType.m_pString != 0 )
    CUtlString::FreeMemoryBlock(p_m_strIllusionType);
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Illusion::IsDebuff  (line 465, @0x0000000002625090, libserver.so)
bool __fastcall CDOTA_Modifier_Illusion::IsDebuff(CDOTA_Modifier_Illusion *const this)
{
  return 1;
}


// CDOTA_Modifier_Illusion::GetAttributes  (line 466, @0x00000000026250a0, libserver.so)
int __fastcall CDOTA_Modifier_Illusion::GetAttributes(CDOTA_Modifier_Illusion *const this)
{
  return this->m_iAttributes | 1;
}


// CDOTA_Modifier_Rune_DoubleDamage::~CDOTA_Modifier_Rune_DoubleDamage  (line 504, @0x0000000002651ed0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Rune_DoubleDamage::~CDOTA_Modifier_Rune_DoubleDamage(
        CDOTA_Modifier_Rune_DoubleDamage *const this)
{
  this->_vptr_CDOTA_Buff = &off_4120910;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Rune_DoubleDamage::~CDOTA_Modifier_Rune_DoubleDamage  (line 504, @0x0000000002651ef0, libserver.so)  // inlines: ~CDOTA_Modifier_Rune_DoubleDamage
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Rune_DoubleDamage::~CDOTA_Modifier_Rune_DoubleDamage(
        CDOTA_Modifier_Rune_DoubleDamage *const this)
{
  this->_vptr_CDOTA_Buff = &off_4120910;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Rune_DoubleDamage::GetEffectName  (line 512, @0x00000000026250b0, libserver.so)
// strings: "particles/generic_gameplay/rune_doubledamage_owner.vpcf"
const char *__fastcall CDOTA_Modifier_Rune_DoubleDamage::GetEffectName(CDOTA_Modifier_Rune_DoubleDamage *const this)
{
  return "particles/generic_gameplay/rune_doubledamage_owner.vpcf";
}


// CDOTA_Modifier_Rune_DoubleDamage::GetTexture  (line 514, @0x00000000026250c0, libserver.so)
const char *__fastcall CDOTA_Modifier_Rune_DoubleDamage::GetTexture(CDOTA_Modifier_Rune_DoubleDamage *const this)
{
  return "rune_doubledamage";
}


// CDOTA_Modifier_Rune_Haste::~CDOTA_Modifier_Rune_Haste  (line 520, @0x0000000002651e80, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Rune_Haste::~CDOTA_Modifier_Rune_Haste(CDOTA_Modifier_Rune_Haste *const this)
{
  this->_vptr_CDOTA_Buff = &off_4120C30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Rune_Haste::~CDOTA_Modifier_Rune_Haste  (line 520, @0x0000000002651ea0, libserver.so)  // inlines: ~CDOTA_Modifier_Rune_Haste
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Rune_Haste::~CDOTA_Modifier_Rune_Haste(CDOTA_Modifier_Rune_Haste *const this)
{
  this->_vptr_CDOTA_Buff = &off_4120C30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Rune_Haste::GetEffectName  (line 529, @0x00000000026250d0, libserver.so)
// strings: "particles/generic_gameplay/rune_haste_owner.vpcf"
const char *__fastcall CDOTA_Modifier_Rune_Haste::GetEffectName(CDOTA_Modifier_Rune_Haste *const this)
{
  return "particles/generic_gameplay/rune_haste_owner.vpcf";
}


// CDOTA_Modifier_Rune_Haste::GetTexture  (line 531, @0x00000000026250e0, libserver.so)
const char *__fastcall CDOTA_Modifier_Rune_Haste::GetTexture(CDOTA_Modifier_Rune_Haste *const this)
{
  return "rune_haste";
}


// CDOTA_Modifier_Rune_Invisibility::~CDOTA_Modifier_Rune_Invisibility  (line 537, @0x00000000026524a0, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Rune_Invisibility::~CDOTA_Modifier_Rune_Invisibility(
        CDOTA_Modifier_Rune_Invisibility *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Rune_Invisibility::~CDOTA_Modifier_Rune_Invisibility  (line 537, @0x00000000026524c0, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible, ~CDOTA_Modifier_Rune_Invisibility
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Rune_Invisibility::~CDOTA_Modifier_Rune_Invisibility(
        CDOTA_Modifier_Rune_Invisibility *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Rune_Invisibility::GetTexture  (line 542, @0x00000000026250f0, libserver.so)
const char *__fastcall CDOTA_Modifier_Rune_Invisibility::GetTexture(CDOTA_Modifier_Rune_Invisibility *const this)
{
  return "rune_invis";
}


// CDOTA_Modifier_Rune_Regen::~CDOTA_Modifier_Rune_Regen  (line 548, @0x0000000002651e30, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Rune_Regen::~CDOTA_Modifier_Rune_Regen(CDOTA_Modifier_Rune_Regen *const this)
{
  this->_vptr_CDOTA_Buff = &off_4120F90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Rune_Regen::~CDOTA_Modifier_Rune_Regen  (line 548, @0x0000000002651e50, libserver.so)  // inlines: ~CDOTA_Modifier_Rune_Regen
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Rune_Regen::~CDOTA_Modifier_Rune_Regen(CDOTA_Modifier_Rune_Regen *const this)
{
  this->_vptr_CDOTA_Buff = &off_4120F90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Rune_Regen::GetEffectName  (line 558, @0x0000000002625100, libserver.so)
// strings: "particles/generic_gameplay/rune_regen_owner.vpcf"
const char *__fastcall CDOTA_Modifier_Rune_Regen::GetEffectName(CDOTA_Modifier_Rune_Regen *const this)
{
  return "particles/generic_gameplay/rune_regen_owner.vpcf";
}


// CDOTA_Modifier_Rune_Regen::GetTexture  (line 560, @0x0000000002625110, libserver.so)
const char *__fastcall CDOTA_Modifier_Rune_Regen::GetTexture(CDOTA_Modifier_Rune_Regen *const this)
{
  return "rune_regen";
}


// CDOTA_Modifier_Rune_Arcane::~CDOTA_Modifier_Rune_Arcane  (line 566, @0x0000000002651de0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Rune_Arcane::~CDOTA_Modifier_Rune_Arcane(CDOTA_Modifier_Rune_Arcane *const this)
{
  this->_vptr_CDOTA_Buff = &off_41212B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Rune_Arcane::~CDOTA_Modifier_Rune_Arcane  (line 566, @0x0000000002651e00, libserver.so)  // inlines: ~CDOTA_Modifier_Rune_Arcane
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Rune_Arcane::~CDOTA_Modifier_Rune_Arcane(CDOTA_Modifier_Rune_Arcane *const this)
{
  this->_vptr_CDOTA_Buff = &off_41212B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Rune_Arcane::GetEffectName  (line 576, @0x0000000002625120, libserver.so)
// strings: "particles/generic_gameplay/rune_arcane_owner.vpcf"
const char *__fastcall CDOTA_Modifier_Rune_Arcane::GetEffectName(CDOTA_Modifier_Rune_Arcane *const this)
{
  return "particles/generic_gameplay/rune_arcane_owner.vpcf";
}


// CDOTA_Modifier_Rune_Arcane::GetTexture  (line 578, @0x0000000002625130, libserver.so)
const char *__fastcall CDOTA_Modifier_Rune_Arcane::GetTexture(CDOTA_Modifier_Rune_Arcane *const this)
{
  return "rune_arcane";
}


// CDOTA_Modifier_Teleporting::~CDOTA_Modifier_Teleporting  (line 585, @0x0000000002651c50, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Teleporting::~CDOTA_Modifier_Teleporting(CDOTA_Modifier_Teleporting *const this)
{
  this->_vptr_CDOTA_Buff = &off_41225B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Teleporting::~CDOTA_Modifier_Teleporting  (line 585, @0x0000000002651c70, libserver.so)  // inlines: ~CDOTA_Modifier_Teleporting
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Teleporting::~CDOTA_Modifier_Teleporting(CDOTA_Modifier_Teleporting *const this)
{
  this->_vptr_CDOTA_Buff = &off_41225B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Teleporting::IsPurgable  (line 595, @0x0000000002625140, libserver.so)
bool __fastcall CDOTA_Modifier_Teleporting::IsPurgable(CDOTA_Modifier_Teleporting *const this)
{
  return 0;
}


// CDOTA_Modifier_Knockback::~CDOTA_Modifier_Knockback  (line 636, @0x00000000026513d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Knockback::~CDOTA_Modifier_Knockback(CDOTA_Modifier_Knockback *const this)
{
  this->_vptr_CDOTA_Buff = &off_4122C50;
  this->_vptr_CHorizontalMotionController = &off_4122F58;
  this->_vptr_CVerticalMotionController = &off_4122F98;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Knockback::~CDOTA_Modifier_Knockback  (line 636, @0x0000000002651400, libserver.so)  // inlines: ~CDOTA_Modifier_Knockback
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Knockback::~CDOTA_Modifier_Knockback(CDOTA_Modifier_Knockback *const this)
{
  this->_vptr_CDOTA_Buff = &off_4122C50;
  this->_vptr_CHorizontalMotionController = &off_4122F58;
  this->_vptr_CVerticalMotionController = &off_4122F98;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Knockback::IsHidden  (line 650, @0x0000000002625150, libserver.so)
bool __fastcall CDOTA_Modifier_Knockback::IsHidden(CDOTA_Modifier_Knockback *const this)
{
  return 0;
}


// CDOTA_Modifier_Knockback::IsStunDebuff  (line 651, @0x0000000002625160, libserver.so)
bool __fastcall CDOTA_Modifier_Knockback::IsStunDebuff(CDOTA_Modifier_Knockback *const this)
{
  return this->m_bShouldStun;
}


// CDOTA_Modifier_Knockback::GetEffectName  (line 653, @0x0000000002625170, libserver.so)
// strings: "particles/generic_gameplay/generic_stunned.vpcf"
const char *__fastcall CDOTA_Modifier_Knockback::GetEffectName(CDOTA_Modifier_Knockback *const this)
{
  char v1; // al
  const char *v2; // rdx

  v1 = (*(this->_vptr_CDOTA_Buff + 16))(this);
  v2 = 0;
  if ( v1 != 0 )
    return "particles/generic_gameplay/generic_stunned.vpcf";
  return v2;
}


// CDOTA_Modifier_Knockback::GetEffectAttachType  (line 655, @0x00000000026251a0, libserver.so)
int __fastcall CDOTA_Modifier_Knockback::GetEffectAttachType(CDOTA_Modifier_Knockback *const this)
{
  return 7;
}


// CDOTA_Modifier_Knockback::IsHorizontalMotionValidToApply  (line 661, @0x00000000026251b0, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Knockback::IsHorizontalMotionValidToApply(CDOTA_Modifier_Knockback *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Knockback::IsVerticalMotionValidToApply  (line 662, @0x00000000026251e0, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Knockback::IsVerticalMotionValidToApply(CDOTA_Modifier_Knockback *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Knockback::IsMotionController  (line 664, @0x0000000002625210, libserver.so)
bool __fastcall CDOTA_Modifier_Knockback::IsMotionController(CDOTA_Modifier_Knockback *const this)
{
  return 1;
}


// CDOTA_Modifier_Cyclone::~CDOTA_Modifier_Cyclone  (line 687, @0x0000000002651a40, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Cyclone::~CDOTA_Modifier_Cyclone(CDOTA_Modifier_Cyclone *const this)
{
  this->_vptr_CDOTA_Buff = &off_41260F0;
  this->_vptr_CHorizontalMotionController = &off_41263F8;
  this->_vptr_CVerticalMotionController = &off_4126438;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Cyclone::~CDOTA_Modifier_Cyclone  (line 687, @0x0000000002651a70, libserver.so)  // inlines: ~CDOTA_Modifier_Cyclone
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Cyclone::~CDOTA_Modifier_Cyclone(CDOTA_Modifier_Cyclone *const this)
{
  this->_vptr_CDOTA_Buff = &off_41260F0;
  this->_vptr_CHorizontalMotionController = &off_41263F8;
  this->_vptr_CVerticalMotionController = &off_4126438;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Cyclone::GetEffectAttachType  (line 705, @0x0000000002625220, libserver.so)
int __fastcall CDOTA_Modifier_Cyclone::GetEffectAttachType(CDOTA_Modifier_Cyclone *const this)
{
  return 0;
}


// CDOTA_Modifier_Cyclone::IsHorizontalMotionValidToApply  (line 714, @0x0000000002625230, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Cyclone::IsHorizontalMotionValidToApply(CDOTA_Modifier_Cyclone *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Cyclone::IsVerticalMotionValidToApply  (line 715, @0x0000000002625260, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Cyclone::IsVerticalMotionValidToApply(CDOTA_Modifier_Cyclone *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Cyclone::IsMotionController  (line 717, @0x0000000002625290, libserver.so)
bool __fastcall CDOTA_Modifier_Cyclone::IsMotionController(CDOTA_Modifier_Cyclone *const this)
{
  return 1;
}


// CDOTA_Modifier_IceSlide::~CDOTA_Modifier_IceSlide  (line 734, @0x0000000002651930, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_IceSlide::~CDOTA_Modifier_IceSlide(CDOTA_Modifier_IceSlide *const this)
{
  this->_vptr_CDOTA_Buff = &off_4126E10;
  this->_vptr_CHorizontalMotionController = &off_4127108;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_IceSlide::~CDOTA_Modifier_IceSlide  (line 734, @0x0000000002651960, libserver.so)  // inlines: ~CDOTA_Modifier_IceSlide
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_IceSlide::~CDOTA_Modifier_IceSlide(CDOTA_Modifier_IceSlide *const this)
{
  this->_vptr_CDOTA_Buff = &off_4126E10;
  this->_vptr_CHorizontalMotionController = &off_4127108;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_IceSlide::IsHorizontalMotionValidToApply  (line 752, @0x00000000026252a0, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_IceSlide::IsHorizontalMotionValidToApply(CDOTA_Modifier_IceSlide *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_IceSlide::IsMotionController  (line 754, @0x00000000026252d0, libserver.so)
bool __fastcall CDOTA_Modifier_IceSlide::IsMotionController(CDOTA_Modifier_IceSlide *const this)
{
  return 1;
}


// CDOTA_Modifier_IceSlide::IgnoresIntermediateMovement  (line 756, @0x00000000026252e0, libserver.so)
bool __fastcall CDOTA_Modifier_IceSlide::IgnoresIntermediateMovement(CDOTA_Modifier_IceSlide *const this)
{
  return 0;
}


// CDOTA_Modifier_Tutorial_LastHitHelper::~CDOTA_Modifier_Tutorial_LastHitHelper  (line 769, @0x0000000002651610, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tutorial_LastHitHelper::~CDOTA_Modifier_Tutorial_LastHitHelper(
        CDOTA_Modifier_Tutorial_LastHitHelper *const this)
{
  this->_vptr_CDOTA_Buff = &off_4129110;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tutorial_LastHitHelper::~CDOTA_Modifier_Tutorial_LastHitHelper  (line 769, @0x0000000002651630, libserver.so)  // inlines: ~CDOTA_Modifier_Tutorial_LastHitHelper
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tutorial_LastHitHelper::~CDOTA_Modifier_Tutorial_LastHitHelper(
        CDOTA_Modifier_Tutorial_LastHitHelper *const this)
{
  this->_vptr_CDOTA_Buff = &off_4129110;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tutorial_LastHitHelper::IsHidden  (line 779, @0x0000000002625300, libserver.so)
bool __fastcall CDOTA_Modifier_Tutorial_LastHitHelper::IsHidden(CDOTA_Modifier_Tutorial_LastHitHelper *const this)
{
  return 1;
}


// CDOTA_Modifier_Tutorial_LastHitHelper::IsAura  (line 781, @0x0000000002625310, libserver.so)
bool __fastcall CDOTA_Modifier_Tutorial_LastHitHelper::IsAura(CDOTA_Modifier_Tutorial_LastHitHelper *const this)
{
  return 1;
}


// CDOTA_Modifier_Tutorial_LastHitHelper::GetModifierAura  (line 782, @0x0000000002625320, libserver.so)
// strings: "modifier_tutorial_lasthittable"
const char *__fastcall CDOTA_Modifier_Tutorial_LastHitHelper::GetModifierAura(
        CDOTA_Modifier_Tutorial_LastHitHelper *const this)
{
  return "modifier_tutorial_lasthittable";
}


// CDOTA_Modifier_Tutorial_LastHitHelper::GetAuraSearchTeam  (line 784, @0x0000000002625330, libserver.so)
int __fastcall CDOTA_Modifier_Tutorial_LastHitHelper::GetAuraSearchTeam(
        CDOTA_Modifier_Tutorial_LastHitHelper *const this)
{
  return 2 - this->m_bTargetFriendlies;
}


// CDOTA_Modifier_Tutorial_LastHitHelper::GetAuraSearchType  (line 785, @0x0000000002625350, libserver.so)
int __fastcall CDOTA_Modifier_Tutorial_LastHitHelper::GetAuraSearchType(
        CDOTA_Modifier_Tutorial_LastHitHelper *const this)
{
  return 18;
}


// CDOTA_Modifier_Tutorial_LastHitHelper::GetAuraRadius  (line 786, @0x0000000002625360, libserver.so)
int __fastcall CDOTA_Modifier_Tutorial_LastHitHelper::GetAuraRadius(CDOTA_Modifier_Tutorial_LastHitHelper *const this)
{
  return 1000;
}


// CDOTA_Modifier_Tutorial_LastHitHelper::GetAuraDuration  (line 787, @0x0000000002625370, libserver.so)
float __fastcall CDOTA_Modifier_Tutorial_LastHitHelper::GetAuraDuration(
        CDOTA_Modifier_Tutorial_LastHitHelper *const this)
{
  return 0.1;
}


// CDOTA_Modifier_TeamShowcase_Global::~CDOTA_Modifier_TeamShowcase_Global  (line 801, @0x00000000026512b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_TeamShowcase_Global::~CDOTA_Modifier_TeamShowcase_Global(
        CDOTA_Modifier_TeamShowcase_Global *const this)
{
  this->_vptr_CDOTA_Buff = &off_412AB10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_TeamShowcase_Global::~CDOTA_Modifier_TeamShowcase_Global  (line 801, @0x00000000026512d0, libserver.so)  // inlines: ~CDOTA_Modifier_TeamShowcase_Global
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_TeamShowcase_Global::~CDOTA_Modifier_TeamShowcase_Global(
        CDOTA_Modifier_TeamShowcase_Global *const this)
{
  this->_vptr_CDOTA_Buff = &off_412AB10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_TeamShowcase_Global::IsStunDebuff  (line 807, @0x0000000002625380, libserver.so)
bool __fastcall CDOTA_Modifier_TeamShowcase_Global::IsStunDebuff(CDOTA_Modifier_TeamShowcase_Global *const this)
{
  return 1;
}


// CDOTA_Modifier_TeamShowcase_Showcase::~CDOTA_Modifier_TeamShowcase_Showcase  (line 814, @0x0000000002651260, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_TeamShowcase_Showcase::~CDOTA_Modifier_TeamShowcase_Showcase(
        CDOTA_Modifier_TeamShowcase_Showcase *const this)
{
  this->_vptr_CDOTA_Buff = &off_412AE30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_TeamShowcase_Showcase::~CDOTA_Modifier_TeamShowcase_Showcase  (line 814, @0x0000000002651280, libserver.so)  // inlines: ~CDOTA_Modifier_TeamShowcase_Showcase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_TeamShowcase_Showcase::~CDOTA_Modifier_TeamShowcase_Showcase(
        CDOTA_Modifier_TeamShowcase_Showcase *const this)
{
  this->_vptr_CDOTA_Buff = &off_412AE30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_TeamShowcase_Showcase::IsDebuff  (line 823, @0x0000000002625390, libserver.so)
bool __fastcall CDOTA_Modifier_TeamShowcase_Showcase::IsDebuff(CDOTA_Modifier_TeamShowcase_Showcase *const this)
{
  return 0;
}


// CDOTA_Modifier_TeamShowcase_Showcase::IsHidden  (line 824, @0x00000000026253a0, libserver.so)
bool __fastcall CDOTA_Modifier_TeamShowcase_Showcase::IsHidden(CDOTA_Modifier_TeamShowcase_Showcase *const this)
{
  return 1;
}


// CDOTA_Modifier_TeamShowcase_Showcase::IsPurgable  (line 825, @0x00000000026253b0, libserver.so)
bool __fastcall CDOTA_Modifier_TeamShowcase_Showcase::IsPurgable(CDOTA_Modifier_TeamShowcase_Showcase *const this)
{
  return 0;
}


// CDOTA_Modifier_HallOfFame_Glow::~CDOTA_Modifier_HallOfFame_Glow  (line 833, @0x0000000002651180, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, CUtlMemory<int, int>::Purge
void __fastcall CDOTA_Modifier_HallOfFame_Glow::~CDOTA_Modifier_HallOfFame_Glow(
        CDOTA_Modifier_HallOfFame_Glow *const this)
{
  bool v2; // zf
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vecGlowingPlayerIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_412B150;
  this->m_vecGlowingPlayerIDs.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_vecGlowingPlayerIDs.m_Memory,
        CUtlMemory<int,int>::Purge(&this->m_vecGlowingPlayerIDs.m_Memory),
        (this->m_vecGlowingPlayerIDs.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<int,int>::Purge(p_m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_HallOfFame_Glow::~CDOTA_Modifier_HallOfFame_Glow  (line 833, @0x00000000026511f0, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Modifier_HallOfFame_Glow, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<int, int>::Purge
void __fastcall CDOTA_Modifier_HallOfFame_Glow::~CDOTA_Modifier_HallOfFame_Glow(
        CDOTA_Modifier_HallOfFame_Glow *const this)
{
  bool v2; // zf
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vecGlowingPlayerIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_412B150;
  this->m_vecGlowingPlayerIDs.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecGlowingPlayerIDs.m_Memory;
    CUtlMemory<int,int>::Purge(&this->m_vecGlowingPlayerIDs.m_Memory);
    if ( (this->m_vecGlowingPlayerIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(p_m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_HallOfFame_Glow::GetTexture  (line 839, @0x00000000026253c0, libserver.so)
// strings: "modifier_halloffame_glow"
const char *__fastcall CDOTA_Modifier_HallOfFame_Glow::GetTexture(CDOTA_Modifier_HallOfFame_Glow *const this)
{
  return "modifier_halloffame_glow";
}


// CDOTA_Modifier_HallOfFame_Glow::GetAttributes  (line 840, @0x00000000026253d0, libserver.so)
int __fastcall CDOTA_Modifier_HallOfFame_Glow::GetAttributes(CDOTA_Modifier_HallOfFame_Glow *const this)
{
  return 5;
}


// CDOTA_Modifier_HallOfFame_Glow::GetTeamSendMask  (line 841, @0x00000000026253e0, libserver.so)
int __fastcall CDOTA_Modifier_HallOfFame_Glow::GetTeamSendMask(CDOTA_Modifier_HallOfFame_Glow *const this)
{
  return 14;
}


// CDOTA_Modifier_DisableTauntAnimationCancel::~CDOTA_Modifier_DisableTauntAnimationCancel  (line 867, @0x0000000002652a80, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_DisableTauntAnimationCancel::~CDOTA_Modifier_DisableTauntAnimationCancel(
        CDOTA_Modifier_DisableTauntAnimationCancel *const this)
{
  this->_vptr_CDOTA_Buff = &off_4116F30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_DisableTauntAnimationCancel::~CDOTA_Modifier_DisableTauntAnimationCancel  (line 867, @0x0000000002652aa0, libserver.so)  // inlines: ~CDOTA_Modifier_DisableTauntAnimationCancel
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_DisableTauntAnimationCancel::~CDOTA_Modifier_DisableTauntAnimationCancel(
        CDOTA_Modifier_DisableTauntAnimationCancel *const this)
{
  this->_vptr_CDOTA_Buff = &off_4116F30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DisableTauntAnimationCancel::IsDebuff  (line 872, @0x00000000026253f0, libserver.so)
bool __fastcall CDOTA_Modifier_DisableTauntAnimationCancel::IsDebuff(
        CDOTA_Modifier_DisableTauntAnimationCancel *const this)
{
  return 0;
}


// CDOTA_Modifier_DisableTauntAnimationCancel::IsHidden  (line 873, @0x0000000002625400, libserver.so)
bool __fastcall CDOTA_Modifier_DisableTauntAnimationCancel::IsHidden(
        CDOTA_Modifier_DisableTauntAnimationCancel *const this)
{
  return 1;
}


// CDOTA_Modifier_DisableTauntAnimationCancel::IsPurgable  (line 874, @0x0000000002625410, libserver.so)
bool __fastcall CDOTA_Modifier_DisableTauntAnimationCancel::IsPurgable(
        CDOTA_Modifier_DisableTauntAnimationCancel *const this)
{
  return 0;
}


// CDOTA_Modifier_MonkeyKing_BouncePerch::~CDOTA_Modifier_MonkeyKing_BouncePerch  (line 883, @0x0000000002c91900, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_MonkeyKing_BouncePerch::~CDOTA_Modifier_MonkeyKing_BouncePerch(
        CDOTA_Modifier_MonkeyKing_BouncePerch *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E2FD0;
  this->_vptr_CHorizontalMotionController = &off_45E32C0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_MonkeyKing_BouncePerch::~CDOTA_Modifier_MonkeyKing_BouncePerch  (line 883, @0x0000000002c91930, libserver.so)  // inlines: ~CDOTA_Modifier_MonkeyKing_BouncePerch
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_MonkeyKing_BouncePerch::~CDOTA_Modifier_MonkeyKing_BouncePerch(
        CDOTA_Modifier_MonkeyKing_BouncePerch *const this)
{
  this->_vptr_CDOTA_Buff = &off_45E2FD0;
  this->_vptr_CHorizontalMotionController = &off_45E32C0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_MonkeyKing_BouncePerch::IsHidden  (line 892, @0x0000000002c862a0, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_BouncePerch::IsHidden(CDOTA_Modifier_MonkeyKing_BouncePerch *const this)
{
  return 1;
}


// CDOTA_Modifier_MonkeyKing_BouncePerch::IsPurgable  (line 895, @0x0000000002c862b0, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_BouncePerch::IsPurgable(CDOTA_Modifier_MonkeyKing_BouncePerch *const this)
{
  return 0;
}


// CDOTA_Modifier_MonkeyKing_BouncePerch::UpdateHorizontalMotion  (line 908, @0x0000000002c862c0, libserver.so)
void __fastcall CDOTA_Modifier_MonkeyKing_BouncePerch::UpdateHorizontalMotion(
        CDOTA_Modifier_MonkeyKing_BouncePerch *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  ;
}


// CDOTA_Modifier_MonkeyKing_BouncePerch::IsMotionController  (line 909, @0x0000000002c862e0, libserver.so)
bool __fastcall CDOTA_Modifier_MonkeyKing_BouncePerch::IsMotionController(
        CDOTA_Modifier_MonkeyKing_BouncePerch *const this)
{
  return 1;
}


// CDOTA_Modifier_MonkeyKing_BouncePerch::IsHorizontalMotionValidToApply  (line 910, @0x0000000002c862f0, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_MonkeyKing_BouncePerch::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_MonkeyKing_BouncePerch *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


