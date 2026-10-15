
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDefOps<CEconSchemaSymbol>::LessFunc  (line 50, @0x0000000002ea4360, libserver.so)  // inlines: GetWithNull, String
bool __fastcall CDefOps<CEconSchemaSymbol>::LessFunc(
        const CEconSchemaSymbol *const lhs,
        const CEconSchemaSymbol *const rhs)
{
  bool result; // al

  result = 0;
  if ( rhs->u.m_Id != 0 )
    return lhs->u.m_Id < rhs->u.m_Id;
  return result;
}


