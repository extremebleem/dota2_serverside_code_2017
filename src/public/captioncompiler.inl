
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CaptionLookup_t::SetHash  (line 43, @0x00000000023aeaa0, libserver.so)  // inlines: V_strlen, V_strncpy<int>
// calls: strlen, _V_strncpy, V_strlower_fast, CRC32_Init, CRC32_ProcessBuffer, CRC32_Final, __stack_chk_fail
// callers: CSoundEmitterSystem::GetCaptionHash
void __fastcall CaptionLookup_t::SetHash(CaptionLookup_t *const this, const char *string)
{
  int v4; // r14d
  __int64 v5; // rcx
  __int64 v6; // rdx
  void *v7; // rsp
  CRC32_t temp; // [rsp+4h] [rbp-2Ch] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-28h]
  _BYTE v10[32]; // [rsp+10h] [rbp-20h] BYREF

  v9 = __readfsqword(0x28u);
  if ( string != 0 )
  {
    v4 = strlen(string);
    v5 = ((v4 + 32) & 0xFFFFFFF0);
    v6 = (v4 + 1);
  }
  else
  {
    v6 = 1;
    v5 = 32;
    v4 = 0;
  }
  v7 = alloca(v5 + 16);
  _V_strncpy(v10 & 0xFFFFFFFFFFFFFFEFLL, string, v6);
  V_strlower_fast(v10 & 0xFFFFFFFFFFFFFFEFLL);
  CRC32_Init(&temp);
  CRC32_ProcessBuffer(&temp, (v10 & 0xFFFFFFFFFFFFFFEFLL), v4);
  CRC32_Final(&temp);
  this->hash = temp;
}


