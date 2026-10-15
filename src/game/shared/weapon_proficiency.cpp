
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GetWeaponProficiencyName  (line 22, @0x0000000002409fb0, libserver.so)
// callers: CBaseCombatCharacter::Weapon_Equip
// strings: "<<Invalid>>"
// globals: g_ProficiencyNames
const char *__fastcall GetWeaponProficiencyName(WeaponProficiency_t proficiency)
{
  const char *result; // rax

  result = "<<Invalid>>";
  if ( proficiency <= WeaponProficiency_t::WEAPON_PROFICIENCY_PERFECT )
    return g_ProficiencyNames[proficiency];
  return result;
}


