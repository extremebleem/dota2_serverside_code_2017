
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// TargetScan::IsTargetVisible  (line 134, @0x0000000002f1f6c0, libserver.so)
// calls: CBaseCombatCharacter::IsAbleToSee
bool __fastcall TargetScan::IsTargetVisible(const TargetScan *const this, CBaseCombatCharacter *them)
{
  return CBaseCombatCharacter::IsAbleToSee(this->m_me, them, CBaseCombatCharacter::FieldOfViewCheckType::DISREGARD_FOV);
}


// TargetScan::IsPotentialTarget  (line 143, @0x0000000002f1d9d0, libserver.so)
bool __fastcall TargetScan::IsPotentialTarget(const TargetScan *const this, CBaseCombatCharacter *them)
{
  return (*(them->_vptr_IHandleEntity + 369))(them) ^ 1;
}


