
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// AsyncCaption_t::BlockInfo_t::Less  (line 33, @0x00000000023a9240, libserver.so)
bool __fastcall AsyncCaption_t::BlockInfo_t::Less(
        const AsyncCaption_t::BlockInfo_t *const lhs,
        const AsyncCaption_t::BlockInfo_t *const rhs)
{
  bool v2; // sf
  bool v3; // of
  int blocknum; // eax

  v3 = __OFSUB__(lhs->fileindex, rhs->fileindex);
  v2 = lhs->fileindex - rhs->fileindex < 0;
  if ( lhs->fileindex == rhs->fileindex )
  {
    blocknum = rhs->blocknum;
    v3 = __OFSUB__(lhs->blocknum, blocknum);
    v2 = lhs->blocknum - blocknum < 0;
  }
  return v2 ^ v3;
}


