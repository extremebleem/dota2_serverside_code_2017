
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CByteswap::SwapBufferToTargetEndian<short unsigned int>  (line 172, @0x0000000003077a00 libserver.so, @0x00000000031e85e0 libserver.so)  // inlines: LowLevelByteSwap<short unsigned int>, V_memcpy, memcpy
void __fastcall CByteswap::SwapBufferToTargetEndian<unsigned short>(
        CByteswap *const this,
        unsigned __int16 *outputBuffer,
        unsigned __int16 *inputBuffer,
        int count)
{
  unsigned __int16 v4; // [rsp+0h] [rbp-2h]

  if ( inputBuffer == 0 )
  {
    if ( (*this & 1) == 0 )
      return;
    inputBuffer = outputBuffer;
LABEL_8:
    LOBYTE(v4) = *(inputBuffer + 1);
    HIBYTE(v4) = *inputBuffer;
    *outputBuffer = v4;
    return;
  }
  if ( (*this & 1) != 0 )
    goto LABEL_8;
  if ( inputBuffer != outputBuffer )
    *outputBuffer = *inputBuffer;
}


// CByteswap::SwapBufferToTargetEndian<long long int>  (line 172, @0x00000000030a2940, libserver.so)  // inlines: LowLevelByteSwap<long long int>, V_memcpy, memcpy
// callers: CEntityKeyValues::UnserializeKeys, CEntityKeyValues::SerializeKeys
void __fastcall CByteswap::SwapBufferToTargetEndian<long long>(
        CByteswap *const this,
        __int64 *outputBuffer,
        __int64 *inputBuffer,
        int count)
{
  __int64 v4; // rcx
  __int64 i; // rax
  char v6; // r8
  _BYTE *v7; // rdi
  __int64 v8; // [rsp+0h] [rbp-8h] BYREF

  if ( inputBuffer != 0 )
  {
    if ( (*this & 1) == 0 )
    {
      if ( inputBuffer != outputBuffer )
        *outputBuffer = *inputBuffer;
      return;
    }
  }
  else
  {
    inputBuffer = outputBuffer;
    if ( (*this & 1) == 0 )
      return;
  }
  v4 = 0;
  v8 = *outputBuffer;
  for ( i = 8; i != 0; --i )
  {
    v6 = *(inputBuffer + i - 1);
    v7 = &v8 + v4;
    v4 = 9 - i;
    *v7 = v6;
  }
  *outputBuffer = v8;
}


// CByteswap::SwapBufferToTargetEndian<double>  (line 172, @0x00000000030a29b0 libserver.so, @0x000000000320ad00 libserver.so)  // inlines: LowLevelByteSwap<double>, V_memcpy, memcpy
// callers: CEntityKeyValues::UnserializeKeys, CEntityKeyValues::SerializeKeys
void __fastcall CByteswap::SwapBufferToTargetEndian<double>(
        CByteswap *const this,
        double *outputBuffer,
        double *inputBuffer,
        int count)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  char v6; // r8
  _BYTE *v7; // rdi
  __int64 v8; // [rsp+0h] [rbp-8h] BYREF

  if ( inputBuffer != 0 )
  {
    if ( (*this & 1) == 0 )
    {
      if ( inputBuffer != outputBuffer )
        *outputBuffer = *inputBuffer;
      return;
    }
  }
  else
  {
    inputBuffer = outputBuffer;
    if ( (*this & 1) == 0 )
      return;
  }
  v4 = 8;
  v5 = 0;
  v8 = *outputBuffer;
  do
  {
    v6 = *(inputBuffer + v4 - 1);
    v7 = &v8 + v5;
    v5 = 9 - v4--;
    *v7 = v6;
  }
  while ( v4 != 0 );
  *outputBuffer = v8;
}


// CByteswap::SwapBufferToTargetEndian<long long unsigned int>  (line 172, @0x00000000030a2a20, libserver.so)  // inlines: LowLevelByteSwap<long long unsigned int>, V_memcpy, memcpy
// callers: CEntityKeyValues::UnserializeKeys, CEntityKeyValues::SerializeKeys
void __fastcall CByteswap::SwapBufferToTargetEndian<unsigned long long>(
        CByteswap *const this,
        unsigned __int64 *outputBuffer,
        unsigned __int64 *inputBuffer,
        int count)
{
  __int64 v4; // rcx
  __int64 i; // rax
  char v6; // r8
  _BYTE *v7; // rdi
  unsigned __int64 v8; // [rsp+0h] [rbp-8h] BYREF

  if ( inputBuffer != 0 )
  {
    if ( (*this & 1) == 0 )
    {
      if ( inputBuffer != outputBuffer )
        *outputBuffer = *inputBuffer;
      return;
    }
  }
  else
  {
    inputBuffer = outputBuffer;
    if ( (*this & 1) == 0 )
      return;
  }
  v4 = 0;
  v8 = *outputBuffer;
  for ( i = 8; i != 0; --i )
  {
    v6 = *(inputBuffer + i - 1);
    v7 = &v8 + v4;
    v4 = 9 - i;
    *v7 = v6;
  }
  *outputBuffer = v8;
}


