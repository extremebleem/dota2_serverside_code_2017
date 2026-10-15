
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// TransitioningLayer_t::Schema_DynamicBinding  (line 77, @0x0000000001f21950, libserver.so)
// globals: TransitioningLayer_t::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall TransitioningLayer_t::Schema_DynamicBinding(
        const TransitioningLayer_t *const this)
{
  return TransitioningLayer_t::s_pSchemaBinding;
}


// TransitioningLayer_t::HackToMakeAVTable  (line 78, @0x0000000001f21960, libserver.so)
void __fastcall TransitioningLayer_t::HackToMakeAVTable(const TransitioningLayer_t *const this)
{
  ;
}


// CSequenceTransitioner2::Schema_DynamicBinding  (line 117, @0x00000000023aaa10, libserver.so)
// calls: CSequenceTransitioner2::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CSequenceTransitioner2::Schema_DynamicBinding(
        const CSequenceTransitioner2 *const this)
{
  CSequenceTransitioner2::Schema_VerifyBindingIsRegistered();
  return CSequenceTransitioner2::s_pSchemaBinding;
}


// CSequenceTransitioner2::HackToMakeAVTable  (line 118, @0x00000000023a8b40, libserver.so)
void __fastcall CSequenceTransitioner2::HackToMakeAVTable(const CSequenceTransitioner2 *const this)
{
  ;
}


