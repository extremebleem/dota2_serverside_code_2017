
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// rr2::CRuleBuilder::~CRuleBuilder  (line 214, @0x000000000204e8b0, libserver.so)
// calls: rr2::CRuleBuilder::Cancel, rr2::CRuleBuilder::Done, rr2::CRuleBuilder::OnDestructAsserts
// callers: CRuleScriptBridge::AddRuleFromScript
void __fastcall rr2::CRuleBuilder::~CRuleBuilder(rr2::CRuleBuilder *const this)
{
  if ( this->m_bAutoCancel && this->m_pRule != 0 )
    rr2::CRuleBuilder::Cancel(this);
  rr2::CRuleBuilder::Done(this);
  rr2::CRuleBuilder::OnDestructAsserts(this);
}


