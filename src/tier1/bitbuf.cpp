
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_bitbuf.cpp  (line 0, @0x0000000001a66f70, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_bitbuf_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// InternalBitBufErrorHandler  (line 40, @0x0000000002f69b00, libserver.so)
// globals: g_BitBufErrorHandler
void __fastcall InternalBitBufErrorHandler(BitBufErrorType errorType, const char *pDebugName)
{
  if ( g_BitBufErrorHandler != 0 )
    g_BitBufErrorHandler(errorType, pDebugName);
}


// SetBitBufErrorHandler  (line 47, @0x0000000002f69b20, libserver.so)
// globals: g_BitBufErrorHandler
void __fastcall SetBitBufErrorHandler(BitBufErrorHandler fn)
{
  g_BitBufErrorHandler = fn;
}


// bf_write::bf_write  (line 60, @0x0000000002f69b30, libserver.so)
void __fastcall bf_write::bf_write(bf_write *const this)
{
  this->m_pData = 0;
  this->m_nDataBytes = 0;
  this->m_nDataBits = -1;
  this->m_iCurBit = 0;
  this->m_bOverflow = 0;
  this->m_bAssertOnOverflow = 1;
  this->m_pDebugName = 0;
}


// bf_write::bf_write  (line 72, @0x0000000002f69b70, libserver.so)  // inlines: StartWriting
// callers: CProtobufSaveRestoreOps<PlaceDecalEvent_t>::Save
void __fastcall bf_write::bf_write(bf_write *const this, const char *pDebugName, void *pData, int nBytes, int nBits)
{
  unsigned int v5; // ecx

  v5 = nBytes & 0xFFFFFFFC;
  this->m_bAssertOnOverflow = 1;
  this->m_pDebugName = pDebugName;
  this->m_pData = pData;
  this->m_nDataBytes = v5;
  if ( nBits == -1 )
  {
    *&this->m_nDataBits = 8 * v5;
  }
  else
  {
    this->m_nDataBits = nBits;
    this->m_iCurBit = 0;
  }
  this->m_bOverflow = 0;
}


// bf_write::bf_write  (line 80, @0x0000000002f69bc0, libserver.so)  // inlines: StartWriting
// callers: CEntity2SaveRestore::WriteResourceList, CCompressedResourceManifest::Serialize, CFieldPathHuffmanEncoder::GenerateOpCodeToHuffmanMap, CFieldPathHuffmanEncoder::BuildOpCodeCodeToHuffmanLookup
void __fastcall bf_write::bf_write(bf_write *const this, void *pData, int nBytes, int nBits)
{
  unsigned int v4; // edx

  v4 = nBytes & 0xFFFFFFFC;
  this->m_bAssertOnOverflow = 1;
  this->m_pDebugName = 0;
  this->m_pData = pData;
  this->m_nDataBytes = v4;
  if ( nBits == -1 )
  {
    *&this->m_nDataBits = 8 * v4;
  }
  else
  {
    this->m_nDataBits = nBits;
    this->m_iCurBit = 0;
  }
  this->m_bOverflow = 0;
}


// bf_write::bf_write  (line 87, @0x0000000002f69c60, libserver.so)
// calls: bf_write::StartWriting
void __fastcall bf_write::bf_write(bf_write *const this, std::string *pStr)
{
  this->m_bAssertOnOverflow = 1;
  this->m_pDebugName = 0;
  bf_write::StartWriting(this, pStr);
}


// bf_write::StartWriting  (line 94, @0x0000000002f69c10, libserver.so)  // inlines: StartWriting, _M_data, _M_leak, _M_rep, operator[]
// calls: std::string::_M_leak_hard(void)
// callers: bf_write::bf_write
void __fastcall bf_write::StartWriting(bf_write *const this, std::string *pStr)
{
  char *M_p; // rax
  int v5; // edx

  M_p = pStr->_M_dataplus._M_p;
  if ( *(pStr->_M_dataplus._M_p - 2) >= 0 )
  {
    std::string::_M_leak_hard(pStr);
    M_p = pStr->_M_dataplus._M_p;
  }
  v5 = *(M_p - 6);
  this->m_pData = M_p;
  this->m_iCurBit = 0;
  this->m_bOverflow = 0;
  v5 &= 0xFFFFFFFC;
  this->m_nDataBytes = v5;
  this->m_nDataBits = 8 * v5;
}


// bf_write::StartWriting  (line 102, @0x0000000002f69c80, libserver.so)
void __fastcall bf_write::StartWriting(bf_write *const this, void *pData, int nBytes, int iStartBit, int nBits)
{
  unsigned int v5; // edx

  v5 = nBytes & 0xFFFFFFFC;
  this->m_pData = pData;
  this->m_nDataBytes = v5;
  if ( nBits == -1 )
  {
    this->m_iCurBit = iStartBit;
    this->m_nDataBits = 8 * v5;
  }
  else
  {
    this->m_nDataBits = nBits;
    this->m_iCurBit = iStartBit;
  }
  this->m_bOverflow = 0;
}


// bf_write::Reset  (line 136, @0x0000000002f69cb0, libserver.so)
void __fastcall bf_write::Reset(bf_write *const this)
{
  this->m_iCurBit = 0;
  this->m_bOverflow = 0;
}


// bf_write::SetAssertOnOverflow  (line 143, @0x0000000002f69cd0, libserver.so)
void __fastcall bf_write::SetAssertOnOverflow(bf_write *const this, bool bAssert)
{
  this->m_bAssertOnOverflow = bAssert;
}


// bf_write::GetAssertOnOverflow  (line 148, @0x0000000002f69ce0, libserver.so)
bool __fastcall bf_write::GetAssertOnOverflow(const bf_write *const this)
{
  return this->m_bAssertOnOverflow;
}


// bf_write::GetDebugName  (line 154, @0x0000000002f69cf0, libserver.so)
const char *__fastcall bf_write::GetDebugName(bf_write *const this)
{
  return this->m_pDebugName;
}


// bf_write::SetDebugName  (line 160, @0x0000000002f69d00, libserver.so)
void __fastcall bf_write::SetDebugName(bf_write *const this, const char *pDebugName)
{
  this->m_pDebugName = pDebugName;
}


// bf_write::SeekToBit  (line 166, @0x0000000002f69d10, libserver.so)
// callers: CNetMessagePB<282, CClientMsg_ClientUIEvent, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<283, CClientMsg_DevPaletteVisibilityChangedEvent, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<362, CDOTAClientMsg_RollDice, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<361, CDOTAClientMsg_SetDesiredWardPlacement, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<357, CDOTAClientMsg_ToggleAutoattack, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<359, CDOTAClientMsg_KillcamDamageTaken, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<360, CDOTAClientMsg_SetEnemyStartingPosition, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<356, CDOTAClientMsg_QuestStatus, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<354, CDOTAClientMsg_MatchMetadata, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<363, CDOTAClientMsg_FlipCoin, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<358, CDOTAClientMsg_SpecialAbility, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<302, CDOTAClientMsg_AspectRatio, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer (253 total)
void __fastcall bf_write::SeekToBit(bf_write *const this, int bitPos)
{
  this->m_iCurBit = bitPos;
}


// bf_write::WriteSBitLong  (line 172, @0x0000000002f69d20, libserver.so)  // inlines: GetNumBitsLeft, LoadLittleDWord, SetOverflowFlag, WriteUBitLong
// callers: WriteUsercmd, bf_write::WriteBitLong, bf_write::WriteString, netadr_t::Serialize
void __fastcall bf_write::WriteSBitLong(bf_write *const this, int data, int numbits)
{
  int m_iCurBit; // r8d
  char v4; // r9
  uint32 *v5; // r8
  uint32 v6; // r10d
  int v7; // eax
  int v8; // esi
  uint32 *v9; // rcx

  m_iCurBit = this->m_iCurBit;
  if ( numbits <= this->m_nDataBits - m_iCurBit )
  {
    v4 = m_iCurBit & 0x1F;
    this->m_iCurBit = numbits + m_iCurBit;
    v5 = &this->m_pData[m_iCurBit >> 5];
    v6 = *v5;
    v7 = __ROL4__(data & (0x7FFFFFFF >> (32 - numbits)) | (data >> 31) & ~(0x7FFFFFFF >> (32 - numbits)), v4);
    v8 = 1 << (numbits - 1);
    v9 = &v5[((v8 - 1) >> (31 - v4)) & 1];
    *v9 ^= ((v8 - 1) >> (31 - v4)) & (v7 ^ *v9);
    *v5 = v6 ^ ((2 * v8 - 1) << v4) & (v6 ^ v7);
  }
  else
  {
    this->m_iCurBit = this->m_nDataBits;
    this->m_bOverflow = 1;
  }
}


// bf_write::WriteVarInt32  (line 186, @0x0000000002f69dd0, libserver.so)  // inlines: GetNumBitsLeft, LoadLittleDWord, SetOverflowFlag, WriteUBitLong
// callers: CNetMessagePB<282, CClientMsg_ClientUIEvent, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<283, CClientMsg_DevPaletteVisibilityChangedEvent, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<362, CDOTAClientMsg_RollDice, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<361, CDOTAClientMsg_SetDesiredWardPlacement, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<357, CDOTAClientMsg_ToggleAutoattack, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<359, CDOTAClientMsg_KillcamDamageTaken, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<360, CDOTAClientMsg_SetEnemyStartingPosition, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<356, CDOTAClientMsg_QuestStatus, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<354, CDOTAClientMsg_MatchMetadata, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<363, CDOTAClientMsg_FlipCoin, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<358, CDOTAClientMsg_SpecialAbility, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<302, CDOTAClientMsg_AspectRatio, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer (253 total)
void __fastcall bf_write::WriteVarInt32(bf_write *const this, uint32 data)
{
  int m_iCurBit; // eax
  int m_nDataBits; // edx
  int i; // ecx
  char v5; // r9
  uint32 *v6; // r8
  unsigned __int8 v7; // al
  uint32 v8; // r12d
  int v9; // eax
  uint32 *v10; // rcx
  int v11; // esi
  uint32 *v12; // rdi
  uint32 v13; // r9d
  uint32 *v14; // rcx
  char *v15; // rax

  m_iCurBit = this->m_iCurBit;
  m_nDataBits = this->m_nDataBits;
  if ( (m_iCurBit & 7) != 0 || m_iCurBit + 39 >= m_nDataBits )
  {
    for ( i = m_nDataBits - m_iCurBit; data > 0x7F; i = m_nDataBits - m_iCurBit )
    {
      while ( m_nDataBits - m_iCurBit <= 7 )
      {
        data >>= 7;
        i = 0;
        this->m_iCurBit = m_nDataBits;
        this->m_bOverflow = 1;
        m_iCurBit = m_nDataBits;
        if ( data <= 0x7F )
          goto LABEL_8;
      }
      this->m_iCurBit = m_iCurBit + 8;
      v5 = m_iCurBit & 0x1F;
      v6 = &this->m_pData[m_iCurBit >> 5];
      v7 = data;
      data >>= 7;
      v8 = *v6;
      v9 = __ROL4__(v7 | 0x80, v5);
      v10 = &v6[(0x7Fu >> (31 - v5)) & 1];
      *v10 ^= (0x7Fu >> (31 - v5)) & (v9 ^ *v10);
      *v6 = v8 ^ (255 << v5) & (v8 ^ v9);
      m_nDataBits = this->m_nDataBits;
      m_iCurBit = this->m_iCurBit;
    }
LABEL_8:
    if ( i > 7 )
    {
      this->m_iCurBit = m_iCurBit + 8;
      v11 = __ROL4__(data, m_iCurBit & 0x1F);
      v12 = &this->m_pData[m_iCurBit >> 5];
      v13 = *v12;
      v14 = &v12[(0x7Fu >> (31 - (m_iCurBit & 0x1F))) & 1];
      *v14 ^= (0x7Fu >> (31 - (m_iCurBit & 0x1F))) & (v11 ^ *v14);
      *v12 = v13 ^ (255 << (m_iCurBit & 0x1F)) & (v13 ^ v11);
    }
    else
    {
      this->m_iCurBit = m_nDataBits;
      this->m_bOverflow = 1;
    }
  }
  else
  {
    v15 = this->m_pData + (m_iCurBit >> 3);
    *v15 = data | 0x80;
    if ( data <= 0x7F )
    {
      *v15 = data & 0x7F;
      this->m_iCurBit += 8;
    }
    else
    {
      v15[1] = (data >> 7) | 0x80;
      if ( data <= 0x3FFF )
      {
        v15[1] = (data >> 7) & 0x7F;
        this->m_iCurBit += 16;
      }
      else
      {
        v15[2] = (data >> 14) | 0x80;
        if ( data <= 0x1FFFFF )
        {
          v15[2] = (data >> 14) & 0x7F;
          this->m_iCurBit += 24;
        }
        else
        {
          v15[3] = (data >> 21) | 0x80;
          if ( data <= 0xFFFFFFF )
          {
            v15[3] = (data >> 21) & 0x7F;
            this->m_iCurBit += 32;
          }
          else
          {
            v15[4] = data >> 28;
            this->m_iCurBit += 40;
          }
        }
      }
    }
  }
}


// bf_write::WriteVarInt64  (line 248, @0x0000000002f69fd0, libserver.so)  // inlines: GetNumBitsLeft, LoadLittleDWord, SetOverflowFlag, WriteUBitLong
// callers: WriteUserCmdDeltaInt, bf_write::WriteSignedVarInt64
void __fastcall bf_write::WriteVarInt64(bf_write *const this, uint64 data)
{
  int m_iCurBit; // eax
  int m_nDataBits; // edx
  int i; // ecx
  char v5; // r9
  uint32 *v6; // r8
  unsigned __int8 v7; // al
  uint32 v8; // r12d
  int v9; // eax
  uint32 *v10; // rcx
  int v11; // esi
  uint32 *v12; // rdi
  uint32 v13; // r9d
  uint32 *v14; // rcx
  uint64 v15; // r8
  char *v16; // rax
  uint64 v17; // rdx
  int v18; // r10d
  __int64 v19; // r9

  m_iCurBit = this->m_iCurBit;
  m_nDataBits = this->m_nDataBits;
  if ( (m_iCurBit & 7) == 0 && m_iCurBit + 79 < m_nDataBits )
  {
    v15 = HIBYTE(data);
    v16 = this->m_pData + (m_iCurBit >> 3);
    v17 = data >> 28;
    if ( HIBYTE(data) != 0 )
    {
      if ( v15 <= 0x7F )
      {
        v18 = 72;
        v19 = 8;
      }
      else
      {
        v18 = 80;
        v16[9] = (v15 >> 7) | 0x80;
        v19 = 9;
      }
      v16[8] = HIBYTE(data) | 0x80;
    }
    else
    {
      if ( v17 == 0 )
      {
        if ( data <= 0x3FFF )
        {
          if ( data <= 0x7F )
          {
            v18 = 8;
            v19 = 0;
            goto size1;
          }
          v18 = 16;
          v19 = 1;
size2:
          v16[1] = (data >> 7) | 0x80;
size1:
          *v16 = data | 0x80;
          v16[v19] &= ~0x80u;
          this->m_iCurBit += v18;
          return;
        }
        if ( data <= 0x1FFFFF )
        {
          v18 = 24;
          v19 = 2;
          goto size3;
        }
        v18 = 32;
        v19 = 3;
size4:
        v16[3] = (data >> 21) | 0x80;
size3:
        v16[2] = (data >> 14) | 0x80;
        goto size2;
      }
      if ( v17 <= 0x3FFF )
      {
        if ( v17 <= 0x7F )
        {
          v18 = 40;
          v19 = 4;
          goto size5;
        }
        v18 = 48;
        v19 = 5;
size6:
        v16[5] = (v17 >> 7) | 0x80;
size5:
        v16[4] = v17 | 0x80;
        goto size4;
      }
      if ( v17 <= 0x1FFFFF )
      {
        v18 = 56;
        v19 = 6;
        goto size7;
      }
      v18 = 64;
      v19 = 7;
    }
    v16[7] = (v17 >> 21) | 0x80;
size7:
    v16[6] = (v17 >> 14) | 0x80;
    goto size6;
  }
  for ( i = m_nDataBits - m_iCurBit; data > 0x7F; i = m_nDataBits - m_iCurBit )
  {
    while ( m_nDataBits - m_iCurBit <= 7 )
    {
      data >>= 7;
      i = 0;
      this->m_iCurBit = m_nDataBits;
      this->m_bOverflow = 1;
      m_iCurBit = m_nDataBits;
      if ( data <= 0x7F )
        goto LABEL_8;
    }
    this->m_iCurBit = m_iCurBit + 8;
    v5 = m_iCurBit & 0x1F;
    v6 = &this->m_pData[m_iCurBit >> 5];
    v7 = data;
    data >>= 7;
    v8 = *v6;
    v9 = __ROL4__(v7 | 0x80, v5);
    v10 = &v6[(0x7Fu >> (31 - v5)) & 1];
    *v10 ^= (0x7Fu >> (31 - v5)) & (v9 ^ *v10);
    *v6 = v8 ^ (255 << v5) & (v8 ^ v9);
    m_nDataBits = this->m_nDataBits;
    m_iCurBit = this->m_iCurBit;
  }
LABEL_8:
  if ( i > 7 )
  {
    this->m_iCurBit = m_iCurBit + 8;
    v11 = __ROL4__(data, m_iCurBit & 0x1F);
    v12 = &this->m_pData[m_iCurBit >> 5];
    v13 = *v12;
    v14 = &v12[(0x7Fu >> (31 - (m_iCurBit & 0x1F))) & 1];
    *v14 ^= (0x7Fu >> (31 - (m_iCurBit & 0x1F))) & (v11 ^ *v14);
    *v12 = v13 ^ (255 << (m_iCurBit & 0x1F)) & (v13 ^ v11);
  }
  else
  {
    this->m_iCurBit = m_nDataBits;
    this->m_bOverflow = 1;
  }
}


// bf_write::WriteSignedVarInt32  (line 362, @0x0000000002f6a2b0, libserver.so)  // inlines: ZigZagEncode32
// calls: bf_write::WriteVarInt32
// callers: FieldOp_Write_NonTopoComplex, FieldOp_Write_PushNAndNonTopographical, FieldOp_Write_PopNPlusN, FieldOp_Write_PopNAndNonTopographical
void __fastcall bf_write::WriteSignedVarInt32(bf_write *const this, int32 data)
{
  bf_write::WriteVarInt32(this, (2 * data) ^ (data >> 31));
}


// bf_write::WriteSignedVarInt64  (line 367, @0x0000000002f6a2d0, libserver.so)  // inlines: ZigZagEncode64
// calls: bf_write::WriteVarInt64
void __fastcall bf_write::WriteSignedVarInt64(bf_write *const this, int64 data)
{
  bf_write::WriteVarInt64(this, (2 * data) ^ (data >> 63));
}


// bf_write::ByteSizeVarInt32  (line 372, @0x0000000002f6a2f0, libserver.so)
// callers: CNetMessagePB<282, CClientMsg_ClientUIEvent, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<283, CClientMsg_DevPaletteVisibilityChangedEvent, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<362, CDOTAClientMsg_RollDice, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<361, CDOTAClientMsg_SetDesiredWardPlacement, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<357, CDOTAClientMsg_ToggleAutoattack, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<359, CDOTAClientMsg_KillcamDamageTaken, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<360, CDOTAClientMsg_SetEnemyStartingPosition, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<356, CDOTAClientMsg_QuestStatus, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<354, CDOTAClientMsg_MatchMetadata, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<363, CDOTAClientMsg_FlipCoin, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<358, CDOTAClientMsg_SpecialAbility, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<302, CDOTAClientMsg_AspectRatio, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer (252 total)
int __fastcall bf_write::ByteSizeVarInt32(bf_write *const this, uint32 data)
{
  int result; // eax

  for ( result = 1; data > 0x7F; ++result )
    data >>= 7;
  return result;
}


// bf_write::ByteSizeVarInt64  (line 382, @0x0000000002f6a310, libserver.so)
int __fastcall bf_write::ByteSizeVarInt64(bf_write *const this, uint64 data)
{
  int result; // eax

  for ( result = 1; data > 0x7F; ++result )
    data >>= 7;
  return result;
}


// bf_write::ByteSizeSignedVarInt32  (line 392, @0x0000000002f6a330, libserver.so)  // inlines: ByteSizeVarInt32, ZigZagEncode32
int __fastcall bf_write::ByteSizeSignedVarInt32(bf_write *const this, int32 data)
{
  int result; // eax
  unsigned int i; // edx

  result = 1;
  for ( i = (2 * data) ^ (data >> 31); i > 0x7F; ++result )
    i >>= 7;
  return result;
}


// bf_write::ByteSizeSignedVarInt64  (line 397, @0x0000000002f6a360, libserver.so)  // inlines: ByteSizeVarInt64, ZigZagEncode64
int __fastcall bf_write::ByteSizeSignedVarInt64(bf_write *const this, int64 data)
{
  int result; // eax
  unsigned __int64 i; // rdx

  result = 1;
  for ( i = (2 * data) ^ (data >> 63); i > 0x7F; ++result )
    i >>= 7;
  return result;
}


// bf_write::WriteBitLong  (line 402, @0x0000000002f6a390, libserver.so)  // inlines: GetNumBitsLeft, LoadLittleDWord, SetOverflowFlag, WriteUBitLong
// calls: bf_write::WriteSBitLong
void __fastcall bf_write::WriteBitLong(bf_write *const this, unsigned int data, int numbits, bool bSigned)
{
  int m_iCurBit; // eax
  uint32 *v5; // r8
  int v6; // esi
  uint32 v7; // r10d
  int v8; // edi
  uint32 *v9; // rcx

  if ( bSigned )
  {
    bf_write::WriteSBitLong(this, data, numbits);
  }
  else
  {
    m_iCurBit = this->m_iCurBit;
    if ( numbits <= this->m_nDataBits - m_iCurBit )
    {
      this->m_iCurBit = numbits + m_iCurBit;
      v5 = &this->m_pData[m_iCurBit >> 5];
      v6 = __ROL4__(data, m_iCurBit & 0x1F);
      v7 = *v5;
      v8 = 1 << (numbits - 1);
      v9 = &v5[((v8 - 1) >> (31 - (m_iCurBit & 0x1F))) & 1];
      *v9 ^= ((v8 - 1) >> (31 - (m_iCurBit & 0x1F))) & (v6 ^ *v9);
      *v5 = v7 ^ ((2 * v8 - 1) << (m_iCurBit & 0x1F)) & (v7 ^ v6);
    }
    else
    {
      this->m_iCurBit = this->m_nDataBits;
      this->m_bOverflow = 1;
    }
  }
}


// bf_write::WriteBits  (line 410, @0x0000000002f696f0, libserver.so)  // inlines: GetNumBitsLeft, LoadLittleDWord, SetOverflowFlag, StoreLittleDWord, V_memcpy, WriteUBitLong, memcpy
// calls: memcpy
// callers: bf_write::WriteBits, bf_write::WriteBytes
bool __fastcall bf_write::WriteBits(bf_write *const this, const void *pInData, int nBits)
{
  int v3; // r13d
  __int64 v4; // r12
  int v6; // eax
  unsigned __int8 v7; // si
  char v8; // r11
  uint32 *v9; // r10
  int v10; // eax
  uint32 v11; // esi
  uint32 *v12; // rcx
  int m_iCurBit; // ecx
  int v14; // r14d
  size_t v15; // r15
  unsigned __int8 *v16; // rax
  int v17; // edx
  int v18; // esi
  uint32 *v19; // rdi
  int v20; // esi
  uint32 v21; // r9d
  uint32 *v22; // rcx
  int v23; // eax
  unsigned __int8 v24; // si
  char v26; // r9
  uint32 *v27; // r8
  int v28; // edx
  uint32 v29; // r10d
  int v30; // esi
  uint32 *v31; // rcx
  int v32; // eax
  int v33; // edx
  uint32 *m_pData; // r9
  unsigned int v35; // ecx
  unsigned int v36; // r10d
  __int64 v37; // r8
  uint32 *v38; // rdx
  int v39; // edi
  __int64 v40; // rdx
  unsigned int *v41; // rax
  unsigned int v42; // r14d
  int v43; // r15d
  unsigned int v44; // esi
  uint32 v45; // esi
  int v46; // edx
  int v47; // edi
  char v48; // r9
  uint32 *v49; // r8
  uint32 v50; // r10d
  int v51; // edx
  uint32 *v52; // rcx

  v3 = nBits;
  v4 = pInData;
  if ( (pInData & 3) == 0 )
  {
LABEL_8:
    if ( v3 <= 31 )
    {
      v16 = v4;
      goto LABEL_11;
    }
    m_iCurBit = this->m_iCurBit;
    if ( (m_iCurBit & 7) == 0 )
    {
      v14 = 8 * (v3 >> 3);
      v15 = v3 >> 3;
      v3 -= v14;
      memcpy(this->m_pData + (m_iCurBit >> 3), v4, v15);
      v16 = (v4 + v15);
      this->m_iCurBit += v14;
      goto LABEL_11;
    }
    m_pData = this->m_pData;
    v35 = m_iCurBit >> 5;
    v36 = this->m_iCurBit & 0x1F;
    v37 = v35;
    v38 = &this->m_pData[v35];
    v39 = g_Tier1_BitWriteMasks[33 * v36 + 32] & *v38;
    if ( (64 - v36) > v3 )
    {
      *v38 = v39;
      v16 = v4;
    }
    else
    {
      v40 = v35 + 1;
      v41 = v4;
      v42 = (v3 - (64 - v36)) >> 5;
      v43 = v40 + v42;
      while ( 1 )
      {
        v44 = *v41++;
        m_pData[v37] = v39 | (v44 << v36);
        this->m_iCurBit += 32;
        v45 = v44 >> (32 - v36);
        v39 = v45;
        if ( v40 == v43 )
          break;
        m_pData = this->m_pData;
        v37 = v40;
        v40 = (v40 + 1);
      }
      v3 = v3 - 32 * v42 - 32;
      v16 = (v4 + 4LL * v42 + 4);
      this->m_pData[v40] = v45;
      if ( v3 <= 31 )
        goto LABEL_11;
    }
    v46 = this->m_iCurBit;
    v47 = *v16;
    if ( this->m_nDataBits - v46 > 31 )
    {
      this->m_iCurBit = v46 + 32;
      v48 = v46 & 0x1F;
      v49 = &this->m_pData[v46 >> 5];
      v50 = *v49;
      v51 = __ROL4__(v47, v46 & 0x1F);
      v52 = &v49[(0x7FFFFFFFu >> (31 - v48)) & 1];
      *v52 ^= (0x7FFFFFFFu >> (31 - v48)) & (*v52 ^ v51);
      *v49 = v50 ^ (-1 << v48) & (v50 ^ v51);
    }
    else
    {
      this->m_iCurBit = this->m_nDataBits;
      this->m_bOverflow = 1;
    }
    v16 += 4;
    v3 -= 32;
LABEL_11:
    if ( v3 <= 7 )
    {
      v4 = v16;
    }
    else
    {
      v4 = &v16[((v3 - 8) >> 3) + 1];
      do
      {
        while ( 1 )
        {
          v17 = this->m_iCurBit;
          v18 = *v16;
          if ( this->m_nDataBits - v17 > 7 )
            break;
          ++v16;
          this->m_iCurBit = this->m_nDataBits;
          this->m_bOverflow = 1;
          if ( v16 == v4 )
            goto LABEL_16;
        }
        this->m_iCurBit = v17 + 8;
        ++v16;
        v19 = &this->m_pData[v17 >> 5];
        v20 = __ROL4__(v18, v17 & 0x1F);
        v21 = *v19;
        v22 = &v19[(0x7Fu >> (31 - (v17 & 0x1F))) & 1];
        *v22 ^= (0x7Fu >> (31 - (v17 & 0x1F))) & (v20 ^ *v22);
        *v19 = v21 ^ (255 << (v17 & 0x1F)) & (v21 ^ v20);
      }
      while ( v16 != v4 );
LABEL_16:
      v3 = v3 - 8 - 8 * ((v3 - 8) >> 3);
    }
    goto LABEL_17;
  }
  if ( nBits > 7 )
  {
    do
    {
      v6 = this->m_iCurBit;
      v7 = *v4;
      if ( this->m_nDataBits - v6 <= 7 )
      {
        ++v4;
        v3 -= 8;
        this->m_iCurBit = this->m_nDataBits;
        this->m_bOverflow = 1;
        if ( (v4 & 3) == 0 )
          goto LABEL_8;
      }
      else
      {
        this->m_iCurBit = v6 + 8;
        v8 = v6 & 0x1F;
        ++v4;
        v3 -= 8;
        v9 = &this->m_pData[v6 >> 5];
        v10 = __ROL4__(v7, v6 & 0x1F);
        v11 = *v9;
        v12 = &v9[(0x7Fu >> (31 - v8)) & 1];
        *v12 ^= (0x7Fu >> (31 - v8)) & (*v12 ^ v10);
        *v9 = v11 ^ (255 << v8) & (v11 ^ v10);
        if ( (v4 & 3) == 0 )
          goto LABEL_8;
      }
    }
    while ( v3 > 7 );
  }
LABEL_17:
  if ( v3 != 0 )
  {
    v23 = this->m_iCurBit;
    v24 = *v4;
    if ( this->m_nDataBits - v23 < v3 )
    {
      this->m_iCurBit = this->m_nDataBits;
      this->m_bOverflow = 1;
      return 0;
    }
    this->m_iCurBit = v3 + v23;
    v26 = v23 & 0x1F;
    v27 = &this->m_pData[v23 >> 5];
    v28 = __ROL4__(v24, v23 & 0x1F);
    v29 = *v27;
    v30 = 1 << (v3 - 1);
    v31 = &v27[((v30 - 1) >> (31 - (v23 & 0x1F))) & 1];
    v32 = v28 ^ *v31;
    v33 = *v27 ^ v28;
    *v31 ^= ((v30 - 1) >> (31 - v26)) & v32;
    *v27 = v29 ^ v33 & ((2 * v30 - 1) << v26);
  }
  return !this->m_bOverflow;
}


// bf_write::WriteBits  (line 410, @0x0000000002f6a440, libserver.so)  // inlines: SetOverflowFlag
// calls: bf_write::WriteBits
// callers: bf_write::WriteFloat, CFieldPathHuffmanEncoder::GenerateOpCodeToHuffmanMap
bool __fastcall bf_write::WriteBits(bf_write *const this, const void *pInData, int nBits)
{
  if ( nBits + this->m_iCurBit <= this->m_nDataBits )
    return bf_write::WriteBits(this, pInData, nBits);
  this->m_bOverflow = 1;
  return 0;
}


// bf_write::WriteBitsFromBuffer  (line 505, @0x0000000002f6a460, libserver.so)  // inlines: GetNumBitsLeft, LoadLittleDWord, ReadUBitLong, SetOverflowFlag, WriteUBitLong
bool __fastcall bf_write::WriteBitsFromBuffer(bf_write *const this, bf_read *pIn, int nBits)
{
  int v3; // eax
  const unsigned __int8 *m_pData; // r10
  int v5; // ebx
  int v6; // ecx
  int m_iCurBit; // r8d
  char v8; // r10
  uint32 *v9; // r9
  int v10; // ebx
  uint32 v11; // r11d
  uint32 *v12; // rcx
  int v13; // r8d
  const unsigned __int8 *v14; // r11
  int v15; // eax
  int v16; // r8d
  char v18; // r11
  uint32 *v19; // r10
  int v20; // eax
  uint32 v21; // ebx
  int v22; // r8d
  uint32 *v23; // rcx

  if ( nBits > 32 )
  {
    v3 = nBits;
    do
    {
      while ( 1 )
      {
        m_iCurBit = pIn->m_iCurBit;
        if ( pIn->m_nDataBits - m_iCurBit > 31 )
        {
          m_pData = pIn->m_pData;
          pIn->m_iCurBit = m_iCurBit + 32;
          v5 = (*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
             | (*&m_pData[4 * ((m_iCurBit + 31) >> 5)] << (32 - (m_iCurBit & 0x1F)));
        }
        else
        {
          pIn->m_iCurBit = pIn->m_nDataBits;
          v5 = 0;
          pIn->m_bOverflow = 1;
        }
        v6 = this->m_iCurBit;
        if ( this->m_nDataBits - v6 > 31 )
          break;
        v3 -= 32;
        this->m_iCurBit = this->m_nDataBits;
        this->m_bOverflow = 1;
        if ( v3 <= 32 )
          goto LABEL_9;
      }
      this->m_iCurBit = v6 + 32;
      v8 = v6 & 0x1F;
      v3 -= 32;
      v9 = &this->m_pData[v6 >> 5];
      v10 = __ROL4__(v5, v6 & 0x1F);
      v11 = *v9;
      v12 = &v9[(0x7FFFFFFFu >> (31 - (v6 & 0x1F))) & 1];
      *v12 ^= (0x7FFFFFFFu >> (31 - v8)) & (v10 ^ *v12);
      *v9 = v11 ^ (-1 << v8) & (v11 ^ v10);
    }
    while ( v3 > 32 );
LABEL_9:
    nBits = nBits - ((nBits - 33) & 0xFFFFFFE0) - 32;
  }
  v13 = pIn->m_iCurBit;
  if ( pIn->m_nDataBits - v13 < nBits )
  {
    pIn->m_iCurBit = pIn->m_nDataBits;
    v15 = 0;
    pIn->m_bOverflow = 1;
  }
  else
  {
    v14 = pIn->m_pData;
    pIn->m_iCurBit = nBits + v13;
    v15 = ((2 << (nBits - 1)) - 1)
        & ((*&v14[4 * (v13 >> 5)] >> (v13 & 0x1F)) | (*&v14[4 * ((nBits + v13 - 1) >> 5)] << (32 - (v13 & 0x1F))));
  }
  v16 = this->m_iCurBit;
  if ( this->m_nDataBits - v16 >= nBits )
  {
    this->m_iCurBit = nBits + v16;
    v18 = v16 & 0x1F;
    v19 = &this->m_pData[v16 >> 5];
    v20 = __ROL4__(v15, v16 & 0x1F);
    v21 = *v19;
    v22 = 1 << (nBits - 1);
    v23 = &v19[((v22 - 1) >> (31 - v18)) & 1];
    *v23 ^= ((v22 - 1) >> (31 - v18)) & (*v23 ^ v20);
    *v19 = v21 ^ ((2 * v22 - 1) << v18) & (v21 ^ v20);
    return !this->m_bOverflow && !pIn->m_bOverflow;
  }
  else
  {
    this->m_iCurBit = this->m_nDataBits;
    this->m_bOverflow = 1;
    return 0;
  }
}


// bf_write::WriteBitAngle  (line 519, @0x0000000002f6a6b0, libserver.so)  // inlines: BitForBitnum, GetBitForBitnum, GetNumBitsLeft, LoadLittleDWord, SetOverflowFlag, WriteUBitLong
// globals: GetBitForBitnum(int)::bitsForBitnum
void __fastcall bf_write::WriteBitAngle(bf_write *const this, float a2, float fAngle, int numbits)
{
  int v4; // r8d
  int m_iCurBit; // eax
  char v6; // r10
  uint32 *v7; // r9
  int v8; // eax
  uint32 v9; // r8d
  int v10; // eax
  int v11; // edi
  uint32 *v12; // rcx

  v4 = GetBitForBitnum(int)::bitsForBitnum[numbits & 0x1F];
  m_iCurBit = this->m_iCurBit;
  if ( numbits <= this->m_nDataBits - m_iCurBit )
  {
    this->m_iCurBit = numbits + m_iCurBit;
    v6 = m_iCurBit & 0x1F;
    v7 = &this->m_pData[m_iCurBit >> 5];
    v8 = (v4 - 1) & (a2 / 360.0 * v4);
    v9 = *v7;
    v10 = __ROL4__(v8, v6);
    v11 = 1 << (numbits - 1);
    v12 = &v7[((v11 - 1) >> (31 - v6)) & 1];
    *v12 ^= ((v11 - 1) >> (31 - v6)) & (v10 ^ *v12);
    *v7 = v9 ^ ((2 * v11 - 1) << v6) & (v9 ^ v10);
  }
  else
  {
    this->m_iCurBit = this->m_nDataBits;
    this->m_bOverflow = 1;
  }
}


// bf_write::WriteBitCoordMP  (line 534, @0x0000000002f6a770, libserver.so)  // inlines: GetNumBitsLeft, LoadLittleDWord, SetOverflowFlag, WriteUBitLong
void __fastcall bf_write::WriteBitCoordMP(bf_write *const this, float a2, const float f, EBitCoordType coordType)
{
  bool v4; // cl
  double v5; // xmm1_8
  int v6; // edx
  _BOOL4 v7; // r9d
  unsigned int v8; // eax
  bool v9; // r8
  int v10; // eax
  int v11; // edx
  int m_iCurBit; // esi
  int v13; // edx
  unsigned int v14; // eax
  int v15; // esi
  char v16; // r9
  uint32 *v17; // r8
  int v18; // eax
  uint32 v19; // r10d
  int v20; // esi
  uint32 *v21; // rcx
  int v22; // edx
  int v23; // eax

  v4 = coordType == EBitCoordType::kCW_LowPrecision;
  v5 = a2;
  if ( coordType == EBitCoordType::kCW_LowPrecision )
  {
    v6 = fabs(a2);
    v7 = v5 <= -0.125;
    v8 = abs32((a2 * 8.0)) & 7;
    v9 = v6 <= 2047;
  }
  else
  {
    v6 = fabs(a2);
    v7 = v5 <= -0.03125;
    v8 = abs32((a2 * 32.0)) & 0x1F;
    v9 = v6 <= 2047;
    if ( coordType == EBitCoordType::kCW_Integral )
    {
      if ( v6 != 0 )
      {
        v10 = v9 + 4 * (v7 + 2 * v6 - 2) + 2;
        v11 = v6 > 2047 ? 17 : 14;
      }
      else
      {
        v10 = v9;
        v11 = 2;
      }
      goto LABEL_5;
    }
  }
  if ( v6 != 0 )
  {
    v13 = v9 + 4 * (v7 + 2 * v6 - 2) + 2;
    if ( v9 )
    {
      v14 = v8 << 14;
      v15 = 14;
    }
    else
    {
      v14 = v8 << 17;
      v15 = 17;
    }
    v10 = v13 + v14;
    v11 = v15 + (!v4 ? 2 : 0) + 3;
  }
  else
  {
    v10 = v9 + 4 * (v7 + 2 * v8);
    v11 = coordType != EBitCoordType::kCW_LowPrecision ? 8 : 6;
  }
LABEL_5:
  m_iCurBit = this->m_iCurBit;
  if ( v11 <= this->m_nDataBits - m_iCurBit )
  {
    this->m_iCurBit = v11 + m_iCurBit;
    v16 = m_iCurBit & 0x1F;
    v17 = &this->m_pData[m_iCurBit >> 5];
    v18 = __ROL4__(v10, m_iCurBit & 0x1F);
    v19 = *v17;
    v20 = 1 << (v11 - 1);
    v21 = &v17[((v20 - 1) >> (31 - v16)) & 1];
    v22 = v18 ^ *v21;
    v23 = *v17 ^ v18;
    *v21 ^= ((v20 - 1) >> (31 - v16)) & v22;
    *v17 = v19 ^ v23 & ((2 * v20 - 1) << v16);
  }
  else
  {
    this->m_iCurBit = this->m_nDataBits;
    this->m_bOverflow = 1;
  }
}


// bf_write::WriteBitCellCoord  (line 590, @0x0000000002f6a960, libserver.so)  // inlines: GetNumBitsLeft, LoadLittleDWord, SetOverflowFlag, WriteUBitLong
void __fastcall bf_write::WriteBitCellCoord(bf_write *const this, float f, int bits, EBitCoordType coordType)
{
  bool v4; // r9
  int v5; // r10d
  unsigned int v6; // eax
  int m_nDataBits; // r8d
  int v8; // edx
  int v9; // esi
  int v10; // ecx
  int v11; // edx
  int m_iCurBit; // eax
  char v13; // r9
  uint32 *v14; // r8
  int v15; // eax
  uint32 v16; // r10d
  int v17; // esi
  uint32 *v18; // rcx
  int v19; // edx
  int v20; // eax
  uint32 *v21; // r11
  int v22; // r10d
  uint32 v23; // r12d
  int v24; // r8d
  uint32 *v25; // rcx
  int v26; // r10d
  uint32 *v27; // rdi
  int v28; // edx
  uint32 v29; // r9d
  uint32 *v30; // rcx

  v4 = coordType == EBitCoordType::kCW_LowPrecision;
  v5 = fabs(f);
  if ( coordType == EBitCoordType::kCW_LowPrecision )
  {
    v6 = abs32((f * 8.0)) & 7;
  }
  else
  {
    v6 = abs32((f * 32.0)) & 0x1F;
    if ( coordType == EBitCoordType::kCW_Integral )
    {
      m_iCurBit = this->m_iCurBit;
      if ( bits <= this->m_nDataBits - m_iCurBit )
      {
        this->m_iCurBit = bits + m_iCurBit;
        v26 = __ROL4__(v5, m_iCurBit & 0x1F);
        v27 = &this->m_pData[m_iCurBit >> 5];
        v28 = 1 << (bits - 1);
        v29 = *v27;
        v30 = &v27[((v28 - 1) >> (31 - (m_iCurBit & 0x1F))) & 1];
        *v30 ^= ((v28 - 1) >> (31 - (m_iCurBit & 0x1F))) & (v26 ^ *v30);
        *v27 = v29 ^ ((2 * v28 - 1) << (m_iCurBit & 0x1F)) & (v29 ^ v26);
      }
      else
      {
        this->m_iCurBit = this->m_nDataBits;
        this->m_bOverflow = 1;
      }
      return;
    }
  }
  m_nDataBits = this->m_nDataBits;
  v8 = this->m_iCurBit;
  if ( bits <= m_nDataBits - v8 )
  {
    this->m_iCurBit = bits + v8;
    v21 = &this->m_pData[v8 >> 5];
    v22 = __ROL4__(v5, v8 & 0x1F);
    v23 = *v21;
    v24 = 1 << (bits - 1);
    v25 = &v21[((v24 - 1) >> (31 - (v8 & 0x1F))) & 1];
    *v25 ^= ((v24 - 1) >> (31 - (v8 & 0x1F))) & (v22 ^ *v25);
    *v21 = v23 ^ ((2 * v24 - 1) << (v8 & 0x1F)) & (v23 ^ v22);
    v9 = this->m_nDataBits;
    m_nDataBits = this->m_iCurBit;
    v10 = v9 - m_nDataBits;
  }
  else
  {
    this->m_iCurBit = m_nDataBits;
    v9 = m_nDataBits;
    v10 = 0;
    this->m_bOverflow = 1;
  }
  v11 = !v4 ? 5 : 3;
  if ( v11 <= v10 )
  {
    this->m_iCurBit = v11 + m_nDataBits;
    v13 = m_nDataBits & 0x1F;
    v14 = &this->m_pData[m_nDataBits >> 5];
    v15 = __ROL4__(v6, v13);
    v16 = *v14;
    v17 = 1 << (v11 - 1);
    v18 = &v14[((v17 - 1) >> (31 - v13)) & 1];
    v19 = v15 ^ *v18;
    v20 = *v14 ^ v15;
    *v18 ^= ((v17 - 1) >> (31 - v13)) & v19;
    *v14 = v16 ^ v20 & ((2 * v17 - 1) << v13);
  }
  else
  {
    this->m_iCurBit = v9;
    this->m_bOverflow = 1;
  }
}


// bf_write::WriteBitCoord  (line 618, @0x0000000002f6ab80, libserver.so)  // inlines: GetNumBitsLeft, LoadLittleDWord, SetOverflowFlag, WriteOneBit, WriteOneBitNoCheck, WriteUBitLong
// callers: bf_write::WriteBitVec3Coord
void __fastcall bf_write::WriteBitCoord(bf_write *const this, float a2, const float f)
{
  int v3; // edx
  int m_iCurBit; // ecx
  unsigned int v5; // eax
  uint32 *v6; // r8
  int v7; // esi
  __int64 v8; // r9
  int v9; // ecx
  bool v10; // cc
  uint32 *m_pData; // r8
  int v12; // esi
  __int64 v13; // r9
  int v14; // ecx
  uint32 *v15; // r8
  __int64 v16; // r9
  int v17; // esi
  int v18; // edx
  uint32 *v19; // rdi
  int v20; // eax
  uint32 v21; // r9d
  uint32 *v22; // rcx
  uint32 *v23; // r9
  int v24; // edx
  uint32 v25; // r11d
  uint32 *v26; // rcx

  v3 = fabs(a2);
  m_iCurBit = this->m_iCurBit;
  v5 = abs32((32.0 * a2)) & 0x1F;
  if ( m_iCurBit < this->m_nDataBits
    && ((v6 = this->m_pData, v7 = 1 << m_iCurBit, v8 = m_iCurBit >> 5, v3 != 0) ? (v6[v8] |= v7) : (v6[v8] &= ~v7),
        v9 = this->m_iCurBit + 1,
        v10 = v9 < this->m_nDataBits,
        this->m_iCurBit = v9,
        v10) )
  {
    m_pData = this->m_pData;
    v12 = 1 << v9;
    v13 = v9 >> 5;
    if ( v5 != 0 )
      m_pData[v13] |= v12;
    else
      m_pData[v13] &= ~v12;
    ++this->m_iCurBit;
    if ( (v3 | v5) == 0 )
      return;
  }
  else
  {
    this->m_bOverflow = 1;
    if ( (v3 | v5) == 0 )
      return;
  }
  v14 = this->m_iCurBit;
  if ( v14 >= this->m_nDataBits )
  {
    this->m_bOverflow = 1;
  }
  else
  {
    v15 = this->m_pData;
    v16 = v14 >> 5;
    if ( a2 <= -0.03125 )
      v15[v16] |= 1 << v14;
    else
      v15[v16] &= ~(1 << v14);
    ++this->m_iCurBit;
  }
  if ( v3 != 0 )
  {
    v17 = this->m_iCurBit;
    if ( this->m_nDataBits - v17 > 13 )
    {
      this->m_iCurBit = v17 + 14;
      v23 = &this->m_pData[v17 >> 5];
      v24 = __ROL4__(v3 - 1, v17 & 0x1F);
      v25 = *v23;
      v26 = &v23[(0x1FFFu >> (31 - (v17 & 0x1F))) & 1];
      *v26 ^= (0x1FFFu >> (31 - (v17 & 0x1F))) & (v24 ^ *v26);
      *v23 = v25 ^ (0x3FFF << (v17 & 0x1F)) & (v25 ^ v24);
    }
    else
    {
      this->m_iCurBit = this->m_nDataBits;
      this->m_bOverflow = 1;
    }
  }
  if ( v5 != 0 )
  {
    v18 = this->m_iCurBit;
    if ( this->m_nDataBits - v18 > 4 )
    {
      this->m_iCurBit = v18 + 5;
      v19 = &this->m_pData[v18 >> 5];
      v20 = __ROL4__(v5, v18 & 0x1F);
      v21 = *v19;
      v22 = &v19[(0xFu >> (31 - (v18 & 0x1F))) & 1];
      *v22 ^= (0xFu >> (31 - (v18 & 0x1F))) & (v20 ^ *v22);
      *v19 = v21 ^ (31 << (v18 & 0x1F)) & (v21 ^ v20);
    }
    else
    {
      this->m_iCurBit = this->m_nDataBits;
      this->m_bOverflow = 1;
    }
  }
}


// bf_write::WriteBitVec3Coord  (line 653, @0x0000000002f6ada0, libserver.so)  // inlines: SetOverflowFlag, WriteOneBit, WriteOneBitNoCheck, operator[]
// calls: bf_write::WriteBitCoord
// callers: WriteUsercmd, bf_write::WriteBitAngles
void __fastcall bf_write::WriteBitVec3Coord(bf_write *const this, const Vector *const fa)
{
  float v2; // xmm1_4
  _BOOL8 v3; // rax
  float y; // xmm0_4
  _BOOL8 v7; // r14
  float z; // xmm0_4
  _BOOL8 v9; // r13
  int m_iCurBit; // ecx
  uint32 *m_pData; // rsi
  int v12; // edx
  __int64 v13; // rdi
  int v14; // ecx
  bool v15; // cc
  uint32 *v16; // rsi
  int v17; // edx
  __int64 v18; // rdi
  int v19; // ecx
  uint32 *v20; // rsi
  int v21; // edx
  __int64 v22; // rdi

  LODWORD(v3) = 1;
  if ( fa->x < 0.03125 )
  {
    v2 = -0.03125;
    v3 = fa->x <= -0.03125;
  }
  y = fa->y;
  LODWORD(v7) = 1;
  if ( y < 0.03125 )
  {
    v2 = -0.03125;
    v7 = y <= -0.03125;
  }
  z = fa->z;
  LODWORD(v9) = 1;
  if ( z < 0.03125 )
  {
    v2 = -0.03125;
    v9 = z <= -0.03125;
  }
  m_iCurBit = this->m_iCurBit;
  if ( m_iCurBit >= this->m_nDataBits )
    goto LABEL_21;
  m_pData = this->m_pData;
  v12 = 1 << m_iCurBit;
  v13 = m_iCurBit >> 5;
  if ( v3 )
    m_pData[v13] |= v12;
  else
    m_pData[v13] &= ~v12;
  v14 = this->m_iCurBit + 1;
  v15 = v14 < this->m_nDataBits;
  this->m_iCurBit = v14;
  if ( !v15 )
    goto LABEL_21;
  v16 = this->m_pData;
  v17 = 1 << v14;
  v18 = v14 >> 5;
  if ( v7 )
    v16[v18] |= v17;
  else
    v16[v18] &= ~v17;
  v19 = this->m_iCurBit + 1;
  v15 = v19 < this->m_nDataBits;
  this->m_iCurBit = v19;
  if ( v15 )
  {
    v20 = this->m_pData;
    v21 = 1 << v19;
    v22 = v19 >> 5;
    if ( v9 )
      v20[v22] |= v21;
    else
      v20[v22] &= ~v21;
    ++this->m_iCurBit;
    if ( !v3 )
    {
LABEL_17:
      if ( !v7 )
        goto LABEL_18;
      goto LABEL_23;
    }
  }
  else
  {
LABEL_21:
    this->m_bOverflow = 1;
    if ( !v3 )
      goto LABEL_17;
  }
  bf_write::WriteBitCoord(this, fa->x, v2);
  if ( !v7 )
  {
LABEL_18:
    if ( !v9 )
      return;
LABEL_24:
    bf_write::WriteBitCoord(this, fa->z, v2);
    return;
  }
LABEL_23:
  bf_write::WriteBitCoord(this, fa->y, v2);
  if ( v9 )
    goto LABEL_24;
}


// bf_write::WriteBitNormal  (line 673, @0x0000000002f6af30, libserver.so)  // inlines: GetNumBitsLeft, LoadLittleDWord, SetOverflowFlag, WriteOneBit, WriteOneBitNoCheck, WriteUBitLong
// callers: bf_write::WriteBitVec3Normal
void __fastcall bf_write::WriteBitNormal(bf_write *const this, float a2, float f)
{
  int m_iCurBit; // eax
  int m_nDataBits; // edx
  uint32 *m_pData; // rsi
  __int64 v6; // r8
  char v7; // r8
  char v8; // cl
  uint32 *v9; // rdi
  uint32 v10; // r9d
  unsigned int v11; // eax
  int v12; // eax

  m_iCurBit = this->m_iCurBit;
  m_nDataBits = this->m_nDataBits;
  if ( m_iCurBit >= m_nDataBits )
  {
    this->m_bOverflow = 1;
    if ( m_nDataBits - m_iCurBit <= 10 )
    {
LABEL_5:
      this->m_iCurBit = m_nDataBits;
      this->m_bOverflow = 1;
      return;
    }
  }
  else
  {
    m_pData = this->m_pData;
    v6 = m_iCurBit >> 5;
    if ( a2 <= -0.0004885197850512946 )
      m_pData[v6] |= 1 << m_iCurBit;
    else
      m_pData[v6] &= ~(1 << m_iCurBit);
    m_nDataBits = this->m_nDataBits;
    m_iCurBit = this->m_iCurBit + 1;
    this->m_iCurBit = m_iCurBit;
    if ( m_nDataBits - m_iCurBit <= 10 )
      goto LABEL_5;
  }
  this->m_iCurBit = m_iCurBit + 11;
  v7 = m_iCurBit & 0x1F;
  v8 = m_iCurBit & 0x1F;
  v9 = &this->m_pData[m_iCurBit >> 5];
  v10 = *v9;
  v11 = abs32((a2 * 2047.0));
  if ( v11 > 0x7FF )
    v11 = 2047;
  v12 = __ROL4__(v11, v8);
  v9[(0x3FFu >> (31 - v7)) & 1] ^= (0x3FFu >> (31 - v7)) & (v12 ^ v9[(0x3FFu >> (31 - v7)) & 1]);
  *v9 = v10 ^ (2047 << v7) & (v10 ^ v12);
}


// bf_write::WriteBitVec3Normal  (line 691, @0x0000000002f6b030, libserver.so)  // inlines: SetOverflowFlag, WriteOneBit, WriteOneBitNoCheck, operator[]
// calls: bf_write::WriteBitNormal
void __fastcall bf_write::WriteBitVec3Normal(bf_write *const this, const Vector *const fa)
{
  _BOOL8 v2; // rax
  double x; // xmm1_8
  _BOOL8 v6; // r13
  double y; // xmm1_8
  int m_iCurBit; // ecx
  uint32 *m_pData; // rsi
  int v10; // edx
  __int64 v11; // rdi
  int v12; // ecx
  bool v13; // cc
  uint32 *v14; // rsi
  int v15; // edx
  __int64 v16; // rdi
  int v17; // ecx
  __int64 v18; // rsi
  uint32 *v19; // rdx

  LODWORD(v2) = 1;
  x = fa->x;
  if ( x < 0.0004885197850512946 )
    v2 = x <= -0.0004885197850512946;
  LODWORD(v6) = 1;
  y = fa->y;
  if ( y < 0.0004885197850512946 )
    v6 = y <= -0.0004885197850512946;
  m_iCurBit = this->m_iCurBit;
  if ( m_iCurBit >= this->m_nDataBits
    || ((m_pData = this->m_pData, v10 = 1 << m_iCurBit, v11 = m_iCurBit >> 5, v2)
      ? (m_pData[v11] |= v10)
      : (m_pData[v11] &= ~v10),
        v12 = this->m_iCurBit + 1,
        v13 = v12 < this->m_nDataBits,
        this->m_iCurBit = v12,
        !v13) )
  {
    this->m_bOverflow = 1;
    if ( !v2 )
      goto LABEL_12;
    goto LABEL_20;
  }
  v14 = this->m_pData;
  v15 = 1 << v12;
  v16 = v12 >> 5;
  if ( v6 )
    v14[v16] |= v15;
  else
    v14[v16] &= ~v15;
  ++this->m_iCurBit;
  if ( v2 )
LABEL_20:
    bf_write::WriteBitNormal(this, fa->x, *&y);
LABEL_12:
  if ( v6 )
    bf_write::WriteBitNormal(this, fa->y, *&y);
  v17 = this->m_iCurBit;
  if ( v17 >= this->m_nDataBits )
  {
    this->m_bOverflow = 1;
  }
  else
  {
    v18 = v17 >> 5;
    v19 = this->m_pData;
    if ( fa->z > -0.0004885197850512946 )
      v19[v18] &= ~(1 << v17);
    else
      v19[v18] |= 1 << v17;
    ++this->m_iCurBit;
  }
}


// bf_write::WriteBitAngles  (line 711, @0x0000000002f6b1b0, libserver.so)  // inlines: Vector
// calls: bf_write::WriteBitVec3Coord
void __fastcall bf_write::WriteBitAngles(bf_write *const this, const QAngle *const fa)
{
  vec_t y; // xmm1_4
  vec_t x; // xmm2_4
  Vector tmp; // [rsp+0h] [rbp-10h] BYREF

  y = fa->y;
  x = fa->x;
  tmp.z = fa->z;
  tmp.y = y;
  tmp.x = x;
  bf_write::WriteBitVec3Coord(this, &tmp);
}


// bf_write::WriteLongLong  (line 718, @0x0000000002f6b1e0, libserver.so)  // inlines: GetNumBitsLeft, LoadLittleDWord, SetOverflowFlag, WriteUBitLong
void __fastcall bf_write::WriteLongLong(bf_write *const this, int64 val)
{
  int m_nDataBits; // eax
  int m_iCurBit; // edx
  uint32 *v4; // r8
  int v5; // eax
  uint32 v6; // r12d
  uint32 *v7; // rcx
  __int64 v8; // rcx
  int v9; // edx
  int v10; // r9d
  char v11; // r8
  uint32 *v12; // rsi
  int v13; // eax
  uint32 v14; // edi
  int64 vala; // [rsp+0h] [rbp-28h]
  __int16 endianIndex; // [rsp+16h] [rbp-12h]

  endianIndex = 256;
  vala = val;
  m_nDataBits = this->m_nDataBits;
  m_iCurBit = this->m_iCurBit;
  if ( m_nDataBits - m_iCurBit <= 31 )
    goto LABEL_2;
  this->m_iCurBit = m_iCurBit + 32;
  v4 = &this->m_pData[m_iCurBit >> 5];
  v5 = __ROL4__(val, m_iCurBit & 0x1F);
  v6 = *v4;
  v7 = &v4[(0x7FFFFFFFu >> (31 - (m_iCurBit & 0x1F))) & 1];
  *v7 ^= (0x7FFFFFFFu >> (31 - (m_iCurBit & 0x1F))) & (v5 ^ *v7);
  v8 = HIBYTE(endianIndex);
  *v4 = v6 ^ (-1 << (m_iCurBit & 0x1F)) & (v6 ^ v5);
  m_nDataBits = this->m_nDataBits;
  v9 = this->m_iCurBit;
  v10 = *(&vala + v8);
  if ( m_nDataBits - v9 <= 31 )
  {
LABEL_2:
    this->m_iCurBit = m_nDataBits;
    this->m_bOverflow = 1;
  }
  else
  {
    this->m_iCurBit = v9 + 32;
    v11 = v9 & 0x1F;
    v12 = &this->m_pData[v9 >> 5];
    v13 = __ROL4__(v10, v9 & 0x1F);
    v14 = *v12;
    v12[(0x7FFFFFFFu >> (31 - v11)) & 1] ^= (0x7FFFFFFFu >> (31 - v11)) & (v13 ^ v12[(0x7FFFFFFFu >> (31 - v11)) & 1]);
    *v12 = v14 ^ (-1 << (v9 & 0x1F)) & (v14 ^ v13);
  }
}


// bf_write::WriteFloat  (line 729, @0x0000000002f6b2f0, libserver.so)
// calls: bf_write::WriteBits
// callers: WriteUserCmdDeltaFloat
void __fastcall bf_write::WriteFloat(bf_write *const this, float a2, float val)
{
  float vala; // [rsp+Ch] [rbp-4h] BYREF

  vala = a2;
  bf_write::WriteBits(this, &vala, 32);
}


// bf_write::WriteBytes  (line 737, @0x0000000002f6b310, libserver.so)  // inlines: SetOverflowFlag, WriteBits
// calls: bf_write::WriteBits
// callers: CNetMessagePB<282, CClientMsg_ClientUIEvent, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<283, CClientMsg_DevPaletteVisibilityChangedEvent, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<362, CDOTAClientMsg_RollDice, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<361, CDOTAClientMsg_SetDesiredWardPlacement, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<357, CDOTAClientMsg_ToggleAutoattack, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<359, CDOTAClientMsg_KillcamDamageTaken, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<360, CDOTAClientMsg_SetEnemyStartingPosition, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<356, CDOTAClientMsg_QuestStatus, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<354, CDOTAClientMsg_MatchMetadata, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<363, CDOTAClientMsg_FlipCoin, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<358, CDOTAClientMsg_SpecialAbility, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer, CNetMessagePB<302, CDOTAClientMsg_AspectRatio, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::WriteToBuffer (253 total)
bool __fastcall bf_write::WriteBytes(bf_write *const this, const void *pBuf, int nBytes)
{
  int v3; // edx

  v3 = 8 * nBytes;
  if ( v3 + this->m_iCurBit <= this->m_nDataBits )
    return bf_write::WriteBits(this, pBuf, v3);
  this->m_bOverflow = 1;
  return 0;
}


// bf_write::WriteString  (line 742, @0x0000000002f6b340, libserver.so)  // inlines: WriteChar
// calls: bf_write::WriteSBitLong
// callers: CCompressedResourceManifest::Serialize
bool __fastcall bf_write::WriteString(bf_write *const this, const char *pStr)
{
  const char *v3; // rbx
  int v4; // esi

  v3 = pStr;
  if ( pStr != 0 )
  {
    do
    {
      v4 = *v3++;
      bf_write::WriteSBitLong(this, v4, 8);
    }
    while ( *(v3 - 1) != 0 );
  }
  else
  {
    bf_write::WriteSBitLong(this, 0, 8);
  }
  return !this->m_bOverflow;
}


// bf_write::WriteString  (line 760, @0x0000000002f6b390, libserver.so)  // inlines: WriteShort
// calls: bf_write::WriteSBitLong
bool __fastcall bf_write::WriteString(bf_write *const this, const wchar_t *pStr)
{
  const wchar_t *v3; // rbx
  int v4; // esi

  v3 = pStr;
  if ( pStr != 0 )
  {
    do
    {
      v4 = *v3++;
      bf_write::WriteSBitLong(this, v4, 16);
    }
    while ( *(v3 - 1) != 0 );
  }
  else
  {
    bf_write::WriteSBitLong(this, 0, 16);
  }
  return !this->m_bOverflow;
}


// bf_read::bf_read  (line 782, @0x0000000002f6b3e0, libserver.so)
void __fastcall bf_read::bf_read(bf_read *const this)
{
  this->m_pData = 0;
  this->m_nDataBytes = 0;
  this->m_nDataBits = -1;
  this->m_iCurBit = 0;
  this->m_bOverflow = 0;
  this->m_bAssertOnOverflow = 1;
  this->m_pDebugName = 0;
}


// bf_read::bf_read  (line 794, @0x0000000002f6b420, libserver.so)  // inlines: StartReading
// callers: CEntity2SaveRestore::ReadResourceList, CCompressedResourceManifest::Unserialize
void __fastcall bf_read::bf_read(bf_read *const this, const void *pData, int nBytes, int nBits)
{
  this->m_bAssertOnOverflow = 1;
  this->m_pDebugName = 0;
  this->m_pData = pData;
  this->m_nDataBytes = nBytes;
  if ( nBits == -1 )
  {
    *&this->m_nDataBits = (8 * nBytes);
  }
  else
  {
    this->m_nDataBits = nBits;
    this->m_iCurBit = 0;
  }
  this->m_bOverflow = 0;
}


// bf_read::bf_read  (line 801, @0x0000000002f6b470, libserver.so)  // inlines: StartReading
// callers: CProtobufSaveRestoreOps<PlaceDecalEvent_t>::Restore, CFieldPathHuffmanEncoder::Describe
void __fastcall bf_read::bf_read(bf_read *const this, const char *pDebugName, const void *pData, int nBytes, int nBits)
{
  this->m_bAssertOnOverflow = 1;
  this->m_pDebugName = pDebugName;
  this->m_pData = pData;
  this->m_nDataBytes = nBytes;
  if ( nBits == -1 )
  {
    *&this->m_nDataBits = (8 * nBytes);
  }
  else
  {
    this->m_nDataBits = nBits;
    this->m_iCurBit = 0;
  }
  this->m_bOverflow = 0;
}


// bf_read::bf_read  (line 808, @0x0000000002f6b4c0, libserver.so)  // inlines: StartReading, _M_data, operator[]
void __fastcall bf_read::bf_read(bf_read *const this, const std::string *pStr)
{
  __int64 v2; // rax

  this->m_bAssertOnOverflow = 1;
  this->m_pDebugName = 0;
  v2 = *(pStr->_M_dataplus._M_p - 3);
  this->m_pData = pStr->_M_dataplus._M_p;
  this->m_iCurBit = 0;
  this->m_bOverflow = 0;
  this->m_nDataBytes = v2;
  this->m_nDataBits = 8 * v2;
}


// bf_read::StartReading  (line 815, @0x0000000002f6b4f0, libserver.so)  // inlines: StartReading, _M_data, operator[]
void __fastcall bf_read::StartReading(bf_read *const this, const std::string *pStr)
{
  __int64 v2; // rax

  v2 = *(pStr->_M_dataplus._M_p - 3);
  this->m_pData = pStr->_M_dataplus._M_p;
  this->m_iCurBit = 0;
  this->m_bOverflow = 0;
  this->m_nDataBytes = v2;
  this->m_nDataBits = 8 * v2;
}


// bf_read::StartReading  (line 823, @0x0000000002f6b520, libserver.so)
void __fastcall bf_read::StartReading(bf_read *const this, const void *pData, int nBytes, int iStartBit, int nBits)
{
  this->m_pData = pData;
  this->m_nDataBytes = nBytes;
  if ( nBits == -1 )
  {
    this->m_iCurBit = iStartBit;
    this->m_nDataBits = 8 * nBytes;
  }
  else
  {
    this->m_nDataBits = nBits;
    this->m_iCurBit = iStartBit;
  }
  this->m_bOverflow = 0;
}


// bf_read::Reset  (line 842, @0x0000000002f6b550, libserver.so)
void __fastcall bf_read::Reset(bf_read *const this)
{
  this->m_iCurBit = 0;
  this->m_bOverflow = 0;
}


// bf_read::SetAssertOnOverflow  (line 848, @0x0000000002f6b570, libserver.so)
void __fastcall bf_read::SetAssertOnOverflow(bf_read *const this, bool bAssert)
{
  this->m_bAssertOnOverflow = bAssert;
}


// bf_read::GetAssertOnOverflow  (line 853, @0x0000000002f6b580, libserver.so)
bool __fastcall bf_read::GetAssertOnOverflow(const bf_read *const this)
{
  return this->m_bAssertOnOverflow;
}


// bf_read::SetDebugName  (line 858, @0x0000000002f6b590, libserver.so)
void __fastcall bf_read::SetDebugName(bf_read *const this, const char *pName)
{
  this->m_pDebugName = pName;
}


// bf_read::SetOverflowFlag  (line 863, @0x0000000002f6b5a0, libserver.so)
// callers: CNetMessagePB<282, CClientMsg_ClientUIEvent, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<283, CClientMsg_DevPaletteVisibilityChangedEvent, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<363, CDOTAClientMsg_FlipCoin, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<362, CDOTAClientMsg_RollDice, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<358, CDOTAClientMsg_SpecialAbility, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<357, CDOTAClientMsg_ToggleAutoattack, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<356, CDOTAClientMsg_QuestStatus, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<354, CDOTAClientMsg_MatchMetadata, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<360, CDOTAClientMsg_SetEnemyStartingPosition, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<359, CDOTAClientMsg_KillcamDamageTaken, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<361, CDOTAClientMsg_SetDesiredWardPlacement, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<302, CDOTAClientMsg_AspectRatio, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer (288 total)
void __fastcall bf_read::SetOverflowFlag(bf_read *const this)
{
  this->m_bOverflow = 1;
}


// bf_read::CheckReadUBitLong  (line 872, @0x0000000002f6b5b0, libserver.so)  // inlines: ReadOneBitNoCheck
unsigned int __fastcall bf_read::CheckReadUBitLong(bf_read *const this, int numbits)
{
  int m_iCurBit; // r10d
  unsigned int result; // eax
  const unsigned __int8 *m_pData; // rbx
  int v5; // r8d
  char v6; // cl
  int v7; // edx
  char v8; // r9
  unsigned int v9; // edx

  if ( numbits <= 0 )
  {
    this->m_iCurBit -= numbits;
    return 0;
  }
  else
  {
    m_iCurBit = this->m_iCurBit;
    result = 0;
    m_pData = this->m_pData;
    v5 = m_iCurBit;
    do
    {
      v6 = v5;
      v7 = v5 >> 5;
      v8 = v5++ - m_iCurBit;
      v9 = *&m_pData[4 * v7];
      this->m_iCurBit = v5;
      result |= ((v9 >> v6) & 1) << v8;
    }
    while ( v5 != numbits + m_iCurBit );
    this->m_iCurBit = v5 - numbits;
  }
  return result;
}


// bf_read::ReadBits  (line 888, @0x0000000002f6b620, libserver.so)  // inlines: GetNumBitsLeft, LoadLittleDWord, ReadUBitLong, SetOverflowFlag
// callers: bf_read::ReadFloat, bf_read::ReadBytes
void __fastcall bf_read::ReadBits(bf_read *const this, void *pOutData, int nBits)
{
  const unsigned __int8 *m_pData; // r10
  int m_iCurBit; // eax
  unsigned int v5; // edx
  char *v6; // rax
  const unsigned __int8 *v7; // r11
  int v8; // r9d
  int v9; // ebx
  unsigned int v10; // r12d
  char *v11; // r10
  const unsigned __int8 *v12; // rsi
  int v13; // edx
  int v14; // esi
  const unsigned __int8 *v15; // r9
  int v16; // eax

  if ( (pOutData & 3) != 0 )
  {
    if ( nBits > 7 )
    {
      while ( 1 )
      {
        m_iCurBit = this->m_iCurBit;
        if ( this->m_nDataBits - m_iCurBit > 7 )
        {
          m_pData = this->m_pData;
          this->m_iCurBit = m_iCurBit + 8;
          pOutData = pOutData + 1;
          nBits -= 8;
          *(pOutData - 1) = (m_pData[4 * ((m_iCurBit + 7) >> 5)] << (32 - (m_iCurBit & 0x1F)))
                          | (*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F));
          if ( (pOutData & 3) == 0 )
            goto LABEL_8;
        }
        else
        {
          this->m_iCurBit = this->m_nDataBits;
          pOutData = pOutData + 1;
          this->m_bOverflow = 1;
          nBits -= 8;
          *(pOutData - 1) = 0;
          if ( (pOutData & 3) == 0 )
            goto LABEL_8;
        }
        if ( nBits <= 7 )
          goto LABEL_25;
      }
    }
    goto LABEL_25;
  }
LABEL_8:
  if ( nBits <= 31 )
  {
LABEL_25:
    v6 = pOutData;
    goto LABEL_14;
  }
  v5 = nBits - 32;
  v6 = pOutData + 4 * (v5 >> 5) + 4;
  do
  {
    while ( 1 )
    {
      v8 = this->m_iCurBit;
      if ( this->m_nDataBits - v8 <= 31 )
        break;
      v7 = this->m_pData;
      this->m_iCurBit = v8 + 32;
      pOutData = pOutData + 4;
      *(pOutData - 1) = (*&v7[4 * (v8 >> 5)] >> (v8 & 0x1F)) | (*&v7[4 * ((v8 + 31) >> 5)] << (32 - (v8 & 0x1F)));
      if ( pOutData == v6 )
        goto LABEL_13;
    }
    this->m_iCurBit = this->m_nDataBits;
    pOutData = pOutData + 4;
    this->m_bOverflow = 1;
    *(pOutData - 1) = 0;
  }
  while ( pOutData != v6 );
LABEL_13:
  nBits = v5 - 32 * (v5 >> 5);
LABEL_14:
  if ( nBits <= 7 )
  {
    v11 = v6;
  }
  else
  {
    v9 = nBits - 8;
    v10 = (nBits - 8) >> 3;
    v11 = &v6[v10 + 1];
    do
    {
      while ( 1 )
      {
        v13 = this->m_iCurBit;
        if ( this->m_nDataBits - v13 <= 7 )
          break;
        v12 = this->m_pData;
        this->m_iCurBit = v13 + 8;
        *v6++ = (v12[4 * ((v13 + 7) >> 5)] << (32 - (v13 & 0x1F))) | (*&v12[4 * (v13 >> 5)] >> (v13 & 0x1F));
        if ( v6 == v11 )
          goto LABEL_19;
      }
      this->m_iCurBit = this->m_nDataBits;
      ++v6;
      this->m_bOverflow = 1;
      *(v6 - 1) = 0;
    }
    while ( v6 != v11 );
LABEL_19:
    nBits = v9 - 8 * v10;
  }
  if ( nBits != 0 )
  {
    v14 = this->m_iCurBit;
    if ( this->m_nDataBits - v14 < nBits )
    {
      this->m_iCurBit = this->m_nDataBits;
      LOBYTE(v16) = 0;
      this->m_bOverflow = 1;
    }
    else
    {
      v15 = this->m_pData;
      this->m_iCurBit = nBits + v14;
      v16 = ((2 << (nBits - 1)) - 1)
          & ((*&v15[4 * (v14 >> 5)] >> (v14 & 0x1F)) | (*&v15[4 * ((nBits + v14 - 1) >> 5)] << (32 - (v14 & 0x1F))));
    }
    *v11 = v16;
  }
}


// bf_read::ReadBitAngle  (line 934, @0x0000000002f6b880, libserver.so)  // inlines: BitForBitnum, GetBitForBitnum, GetNumBitsLeft, LoadLittleDWord, ReadUBitLong, SetOverflowFlag
// globals: GetBitForBitnum(int)::bitsForBitnum
float __fastcall bf_read::ReadBitAngle(bf_read *const this, int numbits)
{
  float v2; // xmm1_4
  int m_iCurBit; // edx
  const unsigned __int8 *m_pData; // r9
  float v5; // xmm2_4

  v2 = GetBitForBitnum(int)::bitsForBitnum[numbits & 0x1F];
  m_iCurBit = this->m_iCurBit;
  if ( numbits > this->m_nDataBits - m_iCurBit )
  {
    this->m_iCurBit = this->m_nDataBits;
    v5 = 0.0;
    this->m_bOverflow = 1;
  }
  else
  {
    m_pData = this->m_pData;
    this->m_iCurBit = numbits + m_iCurBit;
    v5 = (((2 << (numbits - 1)) - 1)
        & ((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
         | (*&m_pData[4 * ((numbits + m_iCurBit - 1) >> 5)] << (32 - (m_iCurBit & 0x1F)))));
  }
  return (360.0 / v2) * v5;
}


// bf_read::PeekUBitLong  (line 948, @0x0000000002f6b910, libserver.so)  // inlines: BitForBitnum, GetBitForBitnum, GetNumBitsLeft, ReadOneBit, ReadOneBitNoCheck, SetOverflowFlag
// globals: GetBitForBitnum(int)::bitsForBitnum
unsigned int __fastcall bf_read::PeekUBitLong(bf_read *const this, int numbits)
{
  const unsigned __int8 *m_pData; // r11
  int m_nDataBits; // r10d
  bool m_bOverflow; // r12
  int m_iCurBit; // ebx
  signed int v6; // edx
  int v7; // ecx
  unsigned int result; // eax
  int v9; // r8d

  m_pData = this->m_pData;
  m_nDataBits = this->m_nDataBits;
  m_bOverflow = this->m_bOverflow;
  m_iCurBit = this->m_iCurBit;
  if ( numbits > 0 )
  {
    v6 = this->m_iCurBit;
    v7 = 0;
    result = 0;
    while ( 1 )
    {
      if ( m_nDataBits - v6 > 0 )
      {
        v9 = *&m_pData[4 * (v6 >> 5)];
        this->m_iCurBit = v6 + 1;
        if ( _bittest(&v9, v6) )
          result |= GetBitForBitnum(int)::bitsForBitnum[v7 & 0x1F];
        if ( ++v7 == numbits )
          goto LABEL_9;
      }
      else
      {
        ++v7;
        this->m_bOverflow = 1;
        if ( v7 == numbits )
          goto LABEL_9;
      }
      v6 = this->m_iCurBit;
    }
  }
  result = 0;
LABEL_9:
  this->m_iCurBit = m_iCurBit;
  this->m_bOverflow = m_bOverflow;
  return result;
}


// bf_read::ReadUBitLongNoInline  (line 981, @0x0000000002f6b9a0, libserver.so)  // inlines: GetNumBitsLeft, LoadLittleDWord, ReadUBitLong, SetOverflowFlag
unsigned int __fastcall bf_read::ReadUBitLongNoInline(bf_read *const this, int numbits)
{
  int m_iCurBit; // edx
  const unsigned __int8 *m_pData; // r9

  m_iCurBit = this->m_iCurBit;
  if ( numbits > this->m_nDataBits - m_iCurBit )
  {
    this->m_iCurBit = this->m_nDataBits;
    this->m_bOverflow = 1;
    return 0;
  }
  else
  {
    m_pData = this->m_pData;
    this->m_iCurBit = numbits + m_iCurBit;
    return ((2 << (numbits - 1)) - 1)
         & ((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
          | (*&m_pData[4 * ((numbits + m_iCurBit - 1) >> 5)] << (32 - (m_iCurBit & 0x1F))));
  }
}


// bf_read::ReadUBitVarInternal  (line 986, @0x0000000002f6ba10, libserver.so)  // inlines: GetNumBitsLeft, LoadLittleDWord, ReadUBitLong, SetOverflowFlag
// callers: FieldOp_Read_PushTwoPack5LeftDeltaN, FieldOp_Read_PushThreePack5LeftDeltaN, FieldOp_Read_PushTwoLeftDeltaN, FieldOp_Read_PushThreeLeftDeltaN, FieldOp_Read_PushN, FieldOp_Read_PushNAndNonTopographical
unsigned int __fastcall bf_read::ReadUBitVarInternal(bf_read *const this, int sixbits)
{
  int v2; // r9d
  int m_iCurBit; // r8d
  const unsigned __int8 *m_pData; // r11

  v2 = (((2 - ((sixbits >> 4) & 3)) >> 31) & 0x10) + 4 * ((sixbits >> 4) & 3);
  m_iCurBit = this->m_iCurBit;
  if ( v2 > this->m_nDataBits - m_iCurBit )
  {
    this->m_iCurBit = this->m_nDataBits;
    this->m_bOverflow = 1;
    return sixbits & 0xF;
  }
  else
  {
    m_pData = this->m_pData;
    this->m_iCurBit = v2 + m_iCurBit;
    return (16
          * (((2 << (v2 - 1)) - 1)
           & ((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
            | (*&m_pData[4 * ((v2 + m_iCurBit - 1) >> 5)] << (32 - (m_iCurBit & 0x1F))))))
         | sixbits & 0xF;
  }
}


// bf_read::ReadSBitLong  (line 997, @0x0000000002f6bab0, libserver.so)  // inlines: GetNumBitsLeft, LoadLittleDWord, ReadUBitLong, SetOverflowFlag
// callers: bf_read::ReadBitLong
int __fastcall bf_read::ReadSBitLong(bf_read *const this, int numbits)
{
  int m_iCurBit; // edx
  const unsigned __int8 *m_pData; // r9
  int v4; // eax
  char v5; // si
  int result; // eax

  m_iCurBit = this->m_iCurBit;
  if ( numbits > this->m_nDataBits - m_iCurBit )
  {
    this->m_iCurBit = this->m_nDataBits;
    v5 = numbits - 1;
    result = 0;
    this->m_bOverflow = 1;
  }
  else
  {
    m_pData = this->m_pData;
    this->m_iCurBit = numbits + m_iCurBit;
    v4 = numbits + m_iCurBit - 1;
    v5 = numbits - 1;
    result = ((2 << v5) - 1)
           & ((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
            | (*&m_pData[4 * (v4 >> 5)] << (32 - (m_iCurBit & 0x1F))));
  }
  if ( 1 << v5 <= result )
    return result - (1 << v5) - (1 << v5);
  return result;
}


// bf_read::ReadVarInt32  (line 1020, @0x0000000002f6bb30, libserver.so)  // inlines: LoadLittleDWord, ReadUBitLong, SetOverflowFlag
// callers: CNetMessagePB<282, CClientMsg_ClientUIEvent, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<283, CClientMsg_DevPaletteVisibilityChangedEvent, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<363, CDOTAClientMsg_FlipCoin, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<362, CDOTAClientMsg_RollDice, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<358, CDOTAClientMsg_SpecialAbility, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<357, CDOTAClientMsg_ToggleAutoattack, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<356, CDOTAClientMsg_QuestStatus, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<354, CDOTAClientMsg_MatchMetadata, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<360, CDOTAClientMsg_SetEnemyStartingPosition, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<359, CDOTAClientMsg_KillcamDamageTaken, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<361, CDOTAClientMsg_SetDesiredWardPlacement, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<302, CDOTAClientMsg_AspectRatio, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer (256 total)
uint32 __fastcall bf_read::ReadVarInt32(bf_read *const this)
{
  int m_iCurBit; // esi
  int v2; // r8d
  int m_nDataBits; // r13d
  uint32 result; // eax
  int v5; // r9d
  const unsigned __int8 *m_pData; // rbx

  m_iCurBit = this->m_iCurBit;
  v2 = 0;
  m_nDataBits = this->m_nDataBits;
  result = 0;
  v5 = m_nDataBits - m_iCurBit;
  if ( m_nDataBits - m_iCurBit <= 7 )
  {
LABEL_5:
    this->m_iCurBit = m_nDataBits;
    this->m_bOverflow = 1;
  }
  else
  {
    while ( 1 )
    {
      m_pData = this->m_pData;
      this->m_iCurBit = m_iCurBit + 8;
      result |= (((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
                | (*&m_pData[4 * ((m_iCurBit + 7) >> 5)] << (32 - (m_iCurBit & 0x1F))))
               & 0x7F) << v2;
      if ( (((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
           | (*&m_pData[4 * ((m_iCurBit + 7) >> 5)] << (32 - (m_iCurBit & 0x1F))))
          & 0x80) == 0 )
        break;
      v2 += 7;
      v5 -= 8;
      if ( v2 == 35 )
        break;
      m_iCurBit += 8;
      if ( v5 <= 7 )
        goto LABEL_5;
    }
  }
  return result;
}


// bf_read::ReadVarInt64  (line 1043, @0x0000000002f6bbd0, libserver.so)  // inlines: LoadLittleDWord, ReadUBitLong, SetOverflowFlag
// callers: ReadUsercmd
uint64 __fastcall bf_read::ReadVarInt64(bf_read *const this)
{
  int m_iCurBit; // esi
  int v2; // r8d
  int m_nDataBits; // r13d
  uint64 result; // rax
  int i; // r9d
  const unsigned __int8 *m_pData; // rbx

  m_iCurBit = this->m_iCurBit;
  v2 = 0;
  m_nDataBits = this->m_nDataBits;
  result = 0;
  for ( i = m_nDataBits - m_iCurBit; i > 7; i -= 8 )
  {
    m_pData = this->m_pData;
    this->m_iCurBit = m_iCurBit + 8;
    result |= (((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
              | (*&m_pData[4 * ((m_iCurBit + 7) >> 5)] << (32 - (m_iCurBit & 0x1F))))
             & 0x7F) << v2;
    if ( (((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
         | (*&m_pData[4 * ((m_iCurBit + 7) >> 5)] << (32 - (m_iCurBit & 0x1F))))
        & 0x80) == 0 )
      return result;
    v2 += 7;
    if ( v2 == 70 )
      return result;
    m_iCurBit += 8;
  }
  this->m_iCurBit = m_nDataBits;
  this->m_bOverflow = 1;
  return result;
}


// bf_read::ReadBitLong  (line 1063, @0x0000000002f6bc70, libserver.so)  // inlines: GetNumBitsLeft, LoadLittleDWord, ReadUBitLong, SetOverflowFlag
// calls: bf_read::ReadSBitLong
unsigned int __fastcall bf_read::ReadBitLong(bf_read *const this, int numbits, bool bSigned)
{
  int m_iCurBit; // edx
  const unsigned __int8 *m_pData; // r9

  if ( bSigned )
    return bf_read::ReadSBitLong(this, numbits);
  m_iCurBit = this->m_iCurBit;
  if ( numbits > this->m_nDataBits - m_iCurBit )
  {
    this->m_iCurBit = this->m_nDataBits;
    this->m_bOverflow = 1;
    return 0;
  }
  else
  {
    m_pData = this->m_pData;
    this->m_iCurBit = numbits + m_iCurBit;
    return ((2 << (numbits - 1)) - 1)
         & ((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
          | (*&m_pData[4 * ((numbits + m_iCurBit - 1) >> 5)] << (32 - (m_iCurBit & 0x1F))));
  }
}


// bf_read::ReadBitCoord  (line 1073, @0x0000000002f6bcf0, libserver.so)  // inlines: GetNumBitsLeft, LoadLittleDWord, ReadOneBit, ReadOneBitNoCheck, ReadUBitLong, SetOverflowFlag
// callers: bf_read::ReadBitVec3Coord
float __fastcall bf_read::ReadBitCoord(bf_read *const this)
{
  int m_nDataBits; // r8d
  int m_iCurBit; // esi
  const unsigned __int8 *m_pData; // rax
  int v4; // ecx
  int v5; // edx
  unsigned int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // esi
  int v10; // esi
  double v11; // xmm1_8
  int v12; // r9d
  const unsigned __int8 *v13; // rbx
  double v14; // xmm0_8
  int v15; // edx
  const unsigned __int8 *v16; // r9
  float result; // xmm0_4

  m_nDataBits = this->m_nDataBits;
  m_iCurBit = this->m_iCurBit;
  if ( m_nDataBits - m_iCurBit <= 0 )
  {
    v5 = 0;
  }
  else
  {
    m_pData = this->m_pData;
    v4 = m_iCurBit + 1;
    v5 = (*&this->m_pData[4 * (m_iCurBit >> 5)] >> m_iCurBit) & 1;
    this->m_iCurBit = m_iCurBit + 1;
    if ( m_nDataBits - (m_iCurBit + 1) > 0 )
    {
      v6 = *&m_pData[4 * (v4 >> 5)];
      this->m_iCurBit = m_iCurBit + 2;
      v7 = (v6 >> v4) & 1;
      goto LABEL_4;
    }
  }
  this->m_bOverflow = 1;
  v7 = 0;
LABEL_4:
  if ( (v5 | v7) == 0 )
    return 0.0;
  v8 = this->m_iCurBit;
  if ( m_nDataBits - v8 <= 0 )
  {
    this->m_bOverflow = 1;
    v10 = 0;
  }
  else
  {
    v9 = *&this->m_pData[4 * (v8 >> 5)] >> v8;
    this->m_iCurBit = v8 + 1;
    v10 = v9 & 1;
  }
  v11 = 0.0;
  if ( v5 != 0 )
  {
    v12 = this->m_iCurBit;
    if ( m_nDataBits - v12 <= 13 )
    {
      this->m_iCurBit = m_nDataBits;
      v11 = 1.0;
      this->m_bOverflow = 1;
    }
    else
    {
      v13 = this->m_pData;
      this->m_iCurBit = v12 + 14;
      v11 = ((((*&v13[4 * (v12 >> 5)] >> (v12 & 0x1F)) | (*&v13[4 * ((v12 + 13) >> 5)] << (32 - (v12 & 0x1F)))) & 0x3FFF)
           + 1);
    }
  }
  v14 = 0.0;
  if ( v7 != 0 )
  {
    v15 = this->m_iCurBit;
    if ( m_nDataBits - v15 <= 4 )
    {
      this->m_iCurBit = m_nDataBits;
      this->m_bOverflow = 1;
    }
    else
    {
      v16 = this->m_pData;
      this->m_iCurBit = v15 + 5;
      v14 = (((*&v16[4 * (v15 >> 5)] >> (v15 & 0x1F)) | (*&v16[4 * ((v15 + 4) >> 5)] << (32 - (v15 & 0x1F)))) & 0x1F)
          * 0.03125;
    }
  }
  result = v14 + v11;
  if ( v10 != 0 )
    return -result;
  return result;
}


// bf_read::ReadBitCoordMP  (line 1116, @0x0000000002f6bec0, libserver.so)  // inlines: GetNumBitsLeft, LoadLittleDWord, ReadNBits<2u>, ReadNBits<3u>, ReadOneBitNoCheck, ReadUBitLong, SetOverflowFlag
// globals: bf_read::ReadBitCoordMP(EBitCoordType)::numbits_table, bf_read::ReadBitCoordMP(EBitCoordType)::mul_table
float __fastcall bf_read::ReadBitCoordMP(bf_read *const this, EBitCoordType coordType)
{
  bool v2; // r12
  int v3; // r10d
  int v4; // esi
  int v5; // eax
  const unsigned __int8 *v6; // r11
  int v7; // r8d
  int v8; // r9d
  unsigned int v9; // edx
  int v10; // edx
  int v11; // eax
  char v12; // cl
  unsigned int v13; // eax
  unsigned int v14; // eax
  char v15; // cl
  int v16; // ecx
  int v17; // ebx
  __int64 v18; // r11
  _BOOL4 v19; // r8d
  int v20; // r9d
  const unsigned __int8 *v21; // r12
  unsigned int v22; // eax
  int m_nDataBits; // edx
  int m_iCurBit; // eax
  const unsigned __int8 *m_pData; // r10
  int v27; // r9d
  unsigned int v28; // r11d
  int v29; // r8d
  char v30; // al
  int v31; // eax
  unsigned int v32; // edx
  int v33; // eax

  if ( coordType == EBitCoordType::kCW_Integral )
  {
    m_nDataBits = this->m_nDataBits;
    m_iCurBit = this->m_iCurBit;
    if ( (m_nDataBits - m_iCurBit) > 1 )
    {
      m_pData = this->m_pData;
      v27 = (*&this->m_pData[4 * (m_iCurBit >> 5)] >> m_iCurBit) & 1;
      this->m_iCurBit = m_iCurBit + 1;
      v28 = *&m_pData[4 * ((m_iCurBit + 1) >> 5)];
      v29 = m_iCurBit + 2;
      this->m_iCurBit = m_iCurBit + 2;
      v30 = v27 + 2 * ((v28 >> (m_iCurBit + 1)) & 1);
      if ( (v30 & 2) != 0 )
      {
        v31 = (v30 & 1) == 0 ? 15 : 12;
        if ( v31 > m_nDataBits - v29 )
        {
          this->m_iCurBit = m_nDataBits;
          this->m_bOverflow = 1;
          return 1.0;
        }
        else
        {
          this->m_iCurBit = v31 + v29;
          v32 = ((2 << (v31 - 1)) - 1)
              & ((*&m_pData[4 * (v29 >> 5)] >> (v29 & 0x1F))
               | (*&m_pData[4 * ((v31 + v29 - 1) >> 5)] << (32 - (v29 & 0x1F))));
          v33 = (v32 >> 1) + 1;
          if ( (v32 & 1) != 0 )
            return -v33;
          return v33;
        }
      }
      else
      {
        return 0.0;
      }
    }
    else
    {
      this->m_bOverflow = 1;
      return 0.0;
    }
  }
  else
  {
    v2 = coordType == EBitCoordType::kCW_LowPrecision;
    v3 = this->m_nDataBits;
    v4 = this->m_iCurBit;
    v5 = v3 - v4;
    if ( (v3 - v4) <= 2 )
    {
      this->m_bOverflow = 1;
      v18 = 0;
      v17 = 0;
      v16 = 0;
      LOBYTE(v10) = 0;
    }
    else
    {
      v6 = this->m_pData;
      v7 = v4 + 1;
      v8 = 1;
      v9 = *&this->m_pData[4 * (v4 >> 5)];
      this->m_iCurBit = v4 + 1;
      v10 = (v9 >> v4) & 1;
      do
      {
        v11 = v7;
        v12 = v7++;
        v13 = *&v6[4 * (v11 >> 5)];
        this->m_iCurBit = v7;
        v14 = v13 >> v12;
        v15 = v8++;
        v10 += (v14 & 1) << v15;
      }
      while ( v8 != 3 );
      v4 += 3;
      v16 = v10 & 3;
      v17 = v10 & 2;
      v18 = v10 & 4;
      v5 = v3 - v4;
    }
    v19 = v2;
    v20 = bf_read::ReadBitCoordMP(EBitCoordType)::numbits_table[4 * v2 + v16];
    if ( v20 > v5 )
    {
      this->m_iCurBit = v3;
      v22 = 0;
      this->m_bOverflow = 1;
    }
    else
    {
      v21 = this->m_pData;
      this->m_iCurBit = v20 + v4;
      v22 = ((2 << (v20 - 1)) - 1)
          & ((*&v21[4 * (v4 >> 5)] >> (v4 & 0x1F)) | (*&v21[4 * ((v20 + v4 - 1) >> 5)] << (32 - (v4 & 0x1F))));
    }
    if ( v17 != 0 )
      v22 = ((v22 >> 11) + (((v10 & 1) - 1) & ((v22 >> 14) - (v22 >> 11))))
          | (8 * ((v22 & ((((v10 & 1) - 1) & 0x3800) + 2047)) + 1)
           + (v19 ? 0 : 24 * ((v22 & ((((v10 & 1) - 1) & 0x3800) + 2047)) + 1)));
    return v22 * *(&bf_read::ReadBitCoordMP(EBitCoordType)::mul_table[2 * v19] + v18);
  }
}


// bf_read::ReadBitCoordBits  (line 1205, @0x0000000002f6c130, libserver.so)  // inlines: GetNumBitsLeft, LoadLittleDWord, ReadNBits<2u>, ReadOneBitNoCheck, ReadUBitLong, SetOverflowFlag
// globals: bf_read::ReadBitCoordBits(void)::numbits_table
unsigned int __fastcall bf_read::ReadBitCoordBits(bf_read *const this)
{
  int m_nDataBits; // esi
  int m_iCurBit; // eax
  const unsigned __int8 *m_pData; // rbx
  int v5; // edx
  unsigned int v6; // r9d
  int v7; // r8d
  int v8; // r10d
  int v9; // r9d
  int v10; // eax

  m_nDataBits = this->m_nDataBits;
  m_iCurBit = this->m_iCurBit;
  if ( (m_nDataBits - m_iCurBit) > 1 )
  {
    m_pData = this->m_pData;
    v5 = (*&this->m_pData[4 * (m_iCurBit >> 5)] >> m_iCurBit) & 1;
    this->m_iCurBit = m_iCurBit + 1;
    v6 = *&m_pData[4 * ((m_iCurBit + 1) >> 5)];
    v7 = m_iCurBit + 2;
    this->m_iCurBit = m_iCurBit + 2;
    v8 = v5 + 2 * ((v6 >> (m_iCurBit + 1)) & 1);
    if ( v8 != 0 )
    {
      v9 = bf_read::ReadBitCoordBits(void)::numbits_table[v8 - 1];
      if ( v9 > m_nDataBits - v7 )
      {
        this->m_iCurBit = m_nDataBits;
        v10 = 0;
        this->m_bOverflow = 1;
      }
      else
      {
        this->m_iCurBit = v9 + v7;
        v10 = 4
            * (((2 << (v9 - 1)) - 1)
             & ((*&m_pData[4 * (v7 >> 5)] >> (v7 & 0x1F)) | (*&m_pData[4 * ((v9 + v7 - 1) >> 5)] << (32 - (v7 & 0x1F)))));
      }
      return v8 + v10;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    this->m_bOverflow = 1;
    return 0;
  }
}


// bf_read::ReadBitCellCoord  (line 1224, @0x0000000002f6c210, libserver.so)  // inlines: GetNumBitsLeft, LoadLittleDWord, ReadUBitLong, SetOverflowFlag
float __fastcall bf_read::ReadBitCellCoord(bf_read *const this, int bits, EBitCoordType coordType)
{
  int m_nDataBits; // r10d
  int v4; // r9d
  const unsigned __int8 *v5; // r12
  int v6; // r8d
  int v7; // ecx
  double v8; // xmm1_8
  int v9; // eax
  const unsigned __int8 *v10; // r10
  double v11; // xmm2_8
  double v12; // xmm0_8
  int m_iCurBit; // r8d
  const unsigned __int8 *m_pData; // r10

  if ( coordType == EBitCoordType::kCW_Integral )
  {
    m_iCurBit = this->m_iCurBit;
    if ( bits > this->m_nDataBits - m_iCurBit )
    {
      this->m_iCurBit = this->m_nDataBits;
      this->m_bOverflow = 1;
      return 0.0;
    }
    else
    {
      m_pData = this->m_pData;
      this->m_iCurBit = bits + m_iCurBit;
      return (((2 << (bits - 1)) - 1)
            & ((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
             | (*&m_pData[4 * ((bits + m_iCurBit - 1) >> 5)] << (32 - (m_iCurBit & 0x1F)))));
    }
  }
  else
  {
    m_nDataBits = this->m_nDataBits;
    v4 = this->m_iCurBit;
    if ( bits > m_nDataBits - v4 )
    {
      this->m_iCurBit = m_nDataBits;
      v6 = m_nDataBits;
      v7 = 0;
      this->m_bOverflow = 1;
      v8 = 0.0;
    }
    else
    {
      v5 = this->m_pData;
      v6 = bits + v4;
      this->m_iCurBit = bits + v4;
      v7 = m_nDataBits - (bits + v4);
      v8 = (((2 << (bits - 1)) - 1)
          & ((*&v5[4 * (v4 >> 5)] >> (v4 & 0x1F)) | (*&v5[4 * ((bits + v4 - 1) >> 5)] << (32 - (v4 & 0x1F)))));
    }
    v9 = coordType != EBitCoordType::kCW_LowPrecision ? 5 : 3;
    if ( v9 > v7 )
    {
      this->m_iCurBit = m_nDataBits;
      v11 = 0.0;
      this->m_bOverflow = 1;
    }
    else
    {
      v10 = this->m_pData;
      this->m_iCurBit = v9 + v6;
      v11 = (((2 << (v9 - 1)) - 1)
           & ((*&v10[4 * (v6 >> 5)] >> (v6 & 0x1F)) | (*&v10[4 * ((v9 + v6 - 1) >> 5)] << (32 - (v6 & 0x1F)))));
    }
    v12 = 0.03125;
    if ( coordType == EBitCoordType::kCW_LowPrecision )
      v12 = 0.125;
    return v12 * v11 + v8;
  }
}


// bf_read::ReadBitCoordMPBits  (line 1253, @0x0000000002f6c3b0, libserver.so)  // inlines: GetNumBitsLeft, LoadLittleDWord, ReadUBitLong, SetOverflowFlag
// globals: bf_read::ReadBitCoordMPBits(EBitCoordType)::numbits_table
unsigned int __fastcall bf_read::ReadBitCoordMPBits(bf_read *const this, EBitCoordType coordType)
{
  int m_nDataBits; // r9d
  int m_iCurBit; // edx
  const unsigned __int8 *m_pData; // r11
  unsigned int result; // eax
  int v6; // r8d
  int v7; // esi
  const unsigned __int8 *v8; // r10

  m_nDataBits = this->m_nDataBits;
  m_iCurBit = this->m_iCurBit;
  if ( m_nDataBits - m_iCurBit <= 1 )
  {
    this->m_iCurBit = m_nDataBits;
    result = 0;
    this->m_bOverflow = 1;
  }
  else
  {
    m_pData = this->m_pData;
    this->m_iCurBit = m_iCurBit + 2;
    result = ((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
            | (*&m_pData[4 * ((m_iCurBit + 1) >> 5)] << (32 - (m_iCurBit & 0x1F))))
           & 3;
  }
  if ( coordType != EBitCoordType::kCW_Integral )
  {
    v6 = this->m_iCurBit;
    v7 = bf_read::ReadBitCoordMPBits(EBitCoordType)::numbits_table[4 * (coordType == EBitCoordType::kCW_LowPrecision)
                                                                 + result];
    if ( v7 <= m_nDataBits - v6 )
    {
LABEL_5:
      v8 = this->m_pData;
      this->m_iCurBit = v7 + v6;
      result += 4
              * (((2 << (v7 - 1)) - 1)
               & ((*&v8[4 * (v6 >> 5)] >> (v6 & 0x1F)) | (*&v8[4 * ((v7 + v6 - 1) >> 5)] << (32 - (v6 & 0x1F)))));
      return result;
    }
LABEL_9:
    this->m_iCurBit = m_nDataBits;
    this->m_bOverflow = 1;
    return result;
  }
  if ( (result & 2) != 0 )
  {
    v6 = this->m_iCurBit;
    v7 = (result & 1) == 0 ? 15 : 12;
    if ( v7 <= m_nDataBits - v6 )
      goto LABEL_5;
    goto LABEL_9;
  }
  return result;
}


// bf_read::ReadBitCellCoordBits  (line 1295, @0x0000000002f6c4c0, libserver.so)  // inlines: GetNumBitsLeft, LoadLittleDWord, ReadUBitLong, SetOverflowFlag
// globals: bf_read::ReadBitCellCoordBits(int,EBitCoordType)::fracbits_table
unsigned int __fastcall bf_read::ReadBitCellCoordBits(bf_read *const this, int bits, EBitCoordType coordType)
{
  int v3; // eax
  int m_iCurBit; // edx
  int v5; // esi
  const unsigned __int8 *m_pData; // r9

  v3 = bf_read::ReadBitCellCoordBits(int,EBitCoordType)::fracbits_table[coordType];
  m_iCurBit = this->m_iCurBit;
  v5 = v3 + bits;
  if ( v5 > this->m_nDataBits - m_iCurBit )
  {
    this->m_iCurBit = this->m_nDataBits;
    this->m_bOverflow = 1;
    return 0;
  }
  else
  {
    m_pData = this->m_pData;
    this->m_iCurBit = v5 + m_iCurBit;
    return ((2 << (v5 - 1)) - 1)
         & ((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
          | (*&m_pData[4 * ((v5 + m_iCurBit - 1) >> 5)] << (32 - (m_iCurBit & 0x1F))));
  }
}


// bf_read::ReadBitVec3Coord  (line 1305, @0x0000000002f6c540, libserver.so)  // inlines: GetNumBitsLeft, Init, ReadOneBit, ReadOneBitNoCheck, SetOverflowFlag
// calls: bf_read::ReadBitCoord
// callers: ReadUsercmd, bf_read::ReadBitAngles
void __fastcall bf_read::ReadBitVec3Coord(bf_read *const this, Vector *const fa)
{
  int m_nDataBits; // esi
  int m_iCurBit; // eax
  const unsigned __int8 *m_pData; // rdi
  int v7; // edx
  int v8; // ecx
  int v9; // r14d
  unsigned int v10; // r13d
  int v11; // r13d

  fa->x = 0.0;
  fa->y = 0.0;
  fa->z = 0.0;
  m_nDataBits = this->m_nDataBits;
  m_iCurBit = this->m_iCurBit;
  if ( m_nDataBits - m_iCurBit <= 0 )
  {
    v7 = 0;
    goto LABEL_13;
  }
  m_pData = this->m_pData;
  v7 = (*&m_pData[4 * (m_iCurBit >> 5)] >> m_iCurBit) & 1;
  this->m_iCurBit = m_iCurBit + 1;
  if ( m_nDataBits - (m_iCurBit + 1) <= 0 )
  {
LABEL_13:
    v9 = 0;
    goto LABEL_14;
  }
  v8 = m_iCurBit + 2;
  v9 = (*&m_pData[4 * ((m_iCurBit + 1) >> 5)] >> (m_iCurBit + 1)) & 1;
  this->m_iCurBit = m_iCurBit + 2;
  if ( m_nDataBits - (m_iCurBit + 2) > 0 )
  {
    v10 = *&m_pData[4 * (v8 >> 5)];
    this->m_iCurBit = m_iCurBit + 3;
    v11 = (v10 >> v8) & 1;
    goto LABEL_5;
  }
LABEL_14:
  this->m_bOverflow = 1;
  v11 = 0;
LABEL_5:
  if ( v7 != 0 )
    fa->x = bf_read::ReadBitCoord(this);
  if ( v9 != 0 )
    fa->y = bf_read::ReadBitCoord(this);
  if ( v11 != 0 )
    fa->z = bf_read::ReadBitCoord(this);
}


// bf_read::ReadBitNormal  (line 1325, @0x0000000002f6c640, libserver.so)  // inlines: GetNumBitsLeft, LoadLittleDWord, ReadOneBit, ReadOneBitNoCheck, ReadUBitLong, SetOverflowFlag
// callers: bf_read::ReadBitVec3Normal
float __fastcall bf_read::ReadBitNormal(bf_read *const this)
{
  int m_nDataBits; // r8d
  int m_iCurBit; // eax
  const unsigned __int8 *m_pData; // r9
  unsigned int v4; // edx
  int v5; // edx
  float result; // xmm0_4

  m_nDataBits = this->m_nDataBits;
  m_iCurBit = this->m_iCurBit;
  if ( m_nDataBits - m_iCurBit <= 0 )
  {
    v5 = 0;
  }
  else
  {
    m_pData = this->m_pData;
    v4 = *&this->m_pData[4 * (m_iCurBit >> 5)];
    this->m_iCurBit = m_iCurBit + 1;
    v5 = (v4 >> m_iCurBit) & 1;
    if ( m_nDataBits - (m_iCurBit + 1) > 10 )
    {
      this->m_iCurBit = m_iCurBit + 12;
      result = (((*&m_pData[4 * ((m_iCurBit + 1) >> 5)] >> ((m_iCurBit + 1) & 0x1F))
               | (*&m_pData[4 * ((m_iCurBit + 11) >> 5)] << (32 - ((m_iCurBit + 1) & 0x1F))))
              & 0x7FF)
             * 0.0004885197850512946;
      goto LABEL_4;
    }
  }
  this->m_iCurBit = m_nDataBits;
  result = 0.0;
  this->m_bOverflow = 1;
LABEL_4:
  if ( v5 != 0 )
    return -result;
  return result;
}


// bf_read::ReadBitVec3Normal  (line 1343, @0x0000000002f6c6f0, libserver.so)  // inlines: GetNumBitsLeft, ReadOneBit, ReadOneBitNoCheck, SetOverflowFlag
// calls: bf_read::ReadBitNormal, sqrtf
void __fastcall bf_read::ReadBitVec3Normal(bf_read *const this, Vector *const fa)
{
  int m_nDataBits; // esi
  int m_iCurBit; // edx
  const unsigned __int8 *m_pData; // rdi
  int v7; // ecx
  int v8; // eax
  unsigned int v9; // r13d
  int v10; // r13d
  int v11; // ecx
  int v12; // r13d
  int v13; // r13d
  float v14; // xmm1_4

  m_nDataBits = this->m_nDataBits;
  m_iCurBit = this->m_iCurBit;
  if ( m_nDataBits - m_iCurBit <= 0 )
  {
    v8 = 0;
  }
  else
  {
    m_pData = this->m_pData;
    v7 = m_iCurBit + 1;
    v8 = (*&m_pData[4 * (m_iCurBit >> 5)] >> m_iCurBit) & 1;
    this->m_iCurBit = m_iCurBit + 1;
    if ( m_nDataBits - (m_iCurBit + 1) > 0 )
    {
      v9 = *&m_pData[4 * (v7 >> 5)];
      this->m_iCurBit = m_iCurBit + 2;
      v10 = (v9 >> v7) & 1;
      goto LABEL_4;
    }
  }
  this->m_bOverflow = 1;
  v10 = 0;
LABEL_4:
  if ( v8 == 0 )
  {
    fa->x = 0.0;
    if ( v10 == 0 )
      goto LABEL_6;
LABEL_14:
    fa->y = bf_read::ReadBitNormal(this);
    v11 = this->m_iCurBit;
    if ( this->m_nDataBits - v11 > 0 )
      goto LABEL_7;
    goto LABEL_15;
  }
  fa->x = bf_read::ReadBitNormal(this);
  if ( v10 != 0 )
    goto LABEL_14;
LABEL_6:
  fa->y = 0.0;
  v11 = this->m_iCurBit;
  if ( this->m_nDataBits - v11 > 0 )
  {
LABEL_7:
    v12 = *&this->m_pData[4 * (v11 >> 5)] >> v11;
    this->m_iCurBit = v11 + 1;
    v13 = v12 & 1;
    goto LABEL_8;
  }
LABEL_15:
  this->m_bOverflow = 1;
  v13 = 0;
LABEL_8:
  v14 = (fa->x * fa->x) + (fa->y * fa->y);
  if ( v14 < 1.0 )
    fa->z = fsqrt(1.0 - v14);
  else
    fa->z = 0.0;
  if ( v13 != 0 )
    fa->z = -fa->z;
}


// bf_read::ReadBitAngles  (line 1371, @0x0000000002f6c890, libserver.so)  // inlines: Init
// calls: bf_read::ReadBitVec3Coord
void __fastcall bf_read::ReadBitAngles(bf_read *const this, QAngle *const fa)
{
  Vector tmp; // [rsp+0h] [rbp-20h] BYREF

  bf_read::ReadBitVec3Coord(this, &tmp);
  *fa = tmp;
}


// bf_read::ReadLongLong  (line 1378, @0x0000000002f6c8d0, libserver.so)  // inlines: GetNumBitsLeft, LoadLittleDWord, ReadUBitLong, SetOverflowFlag
int64 __fastcall bf_read::ReadLongLong(bf_read *const this)
{
  int m_nDataBits; // r9d
  int m_iCurBit; // eax
  const unsigned __int8 *m_pData; // rsi
  int64 retval; // [rsp+2h] [rbp-10h]

  m_nDataBits = this->m_nDataBits;
  m_iCurBit = this->m_iCurBit;
  if ( m_nDataBits - m_iCurBit <= 31 )
  {
    LODWORD(retval) = 0;
  }
  else
  {
    m_pData = this->m_pData;
    this->m_iCurBit = m_iCurBit + 32;
    LODWORD(retval) = (*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
                    | (*&m_pData[4 * ((m_iCurBit + 31) >> 5)] << (32 - (m_iCurBit & 0x1F)));
    if ( m_nDataBits - (m_iCurBit + 32) > 31 )
    {
      this->m_iCurBit = m_iCurBit + 64;
      HIDWORD(retval) = (*&m_pData[4 * ((m_iCurBit + 32) >> 5)] >> ((m_iCurBit + 32) & 0x1F))
                      | (*&m_pData[4 * ((m_iCurBit + 63) >> 5)] << (32 - ((m_iCurBit + 32) & 0x1F)));
      return retval;
    }
  }
  this->m_iCurBit = m_nDataBits;
  HIDWORD(retval) = 0;
  this->m_bOverflow = 1;
  return retval;
}


// bf_read::ReadFloat  (line 1392, @0x0000000002f6c9b0, libserver.so)
// calls: bf_read::ReadBits
// callers: ReadUsercmd
float __fastcall bf_read::ReadFloat(bf_read *const this)
{
  float ret; // [rsp+Ch] [rbp-4h] BYREF

  bf_read::ReadBits(this, &ret, 32);
  return ret;
}


// bf_read::ReadBytes  (line 1403, @0x0000000002f6c9d0, libserver.so)
// calls: bf_read::ReadBits
// callers: CNetMessagePB<282, CClientMsg_ClientUIEvent, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<283, CClientMsg_DevPaletteVisibilityChangedEvent, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<363, CDOTAClientMsg_FlipCoin, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<362, CDOTAClientMsg_RollDice, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<358, CDOTAClientMsg_SpecialAbility, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<357, CDOTAClientMsg_ToggleAutoattack, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<356, CDOTAClientMsg_QuestStatus, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<354, CDOTAClientMsg_MatchMetadata, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<360, CDOTAClientMsg_SetEnemyStartingPosition, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<359, CDOTAClientMsg_KillcamDamageTaken, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<361, CDOTAClientMsg_SetDesiredWardPlacement, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer, CNetMessagePB<302, CDOTAClientMsg_AspectRatio, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ReadFromBuffer (253 total)
bool __fastcall bf_read::ReadBytes(bf_read *const this, void *pOut, int nBytes)
{
  bf_read::ReadBits(this, pOut, 8 * nBytes);
  return !this->m_bOverflow;
}


// bf_read::ReadString  (line 1409, @0x0000000002f6c9f0, libserver.so)  // inlines: LoadLittleDWord, ReadChar, ReadUBitLong, SetOverflowFlag
// callers: bf_read::ReadAndAllocateString, CCompressedResourceManifest::Unserialize
bool __fastcall bf_read::ReadString(bf_read *const this, char *pStr, int maxLen, bool bLine, int *pOutNumChars)
{
  int v5; // r13d
  char v6; // r12
  int m_nDataBits; // r15d
  int m_iCurBit; // edx
  int v9; // esi
  const unsigned __int8 *m_pData; // r11
  int v11; // r9d
  char v12; // dl
  char v13; // r12
  bool result; // al
  __int64 v15; // rbx
  __int64 iChar; // [rsp+Ah] [rbp-30h]

  v5 = maxLen - 1;
  v6 = 0;
  iChar = 0;
LABEL_2:
  m_nDataBits = this->m_nDataBits;
  m_iCurBit = this->m_iCurBit;
  v9 = m_nDataBits - m_iCurBit;
  while ( v9 > 7 )
  {
    m_pData = this->m_pData;
    v11 = m_iCurBit + 8;
    this->m_iCurBit = m_iCurBit + 8;
    v12 = (*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
        | (*&m_pData[4 * ((m_iCurBit + 7) >> 5)] << (32 - (m_iCurBit & 0x1F)));
    if ( v12 == 0 )
      goto LABEL_9;
    if ( v12 == 10 )
    {
      if ( bLine )
        goto LABEL_9;
      v9 -= 8;
      if ( v5 > iChar )
      {
LABEL_16:
        v15 = iChar++;
        pStr[v15] = v12;
        goto LABEL_2;
      }
    }
    else
    {
      v9 -= 8;
      if ( v5 > iChar )
        goto LABEL_16;
    }
    v6 = 1;
    m_iCurBit = v11;
  }
  this->m_iCurBit = m_nDataBits;
  this->m_bOverflow = 1;
LABEL_9:
  pStr[iChar] = 0;
  if ( pOutNumChars != 0 )
    *pOutNumChars = iChar;
  v13 = v6 ^ 1;
  result = 0;
  if ( !this->m_bOverflow )
    return v13;
  return result;
}


// bf_read::ReadWString  (line 1444, @0x0000000002f6caf0, libserver.so)  // inlines: LoadLittleDWord, ReadShort, ReadUBitLong, SetOverflowFlag
bool __fastcall bf_read::ReadWString(bf_read *const this, wchar_t *pStr, int maxLen, bool bLine, int *pOutNumChars)
{
  int v5; // r13d
  char v6; // r12
  int m_nDataBits; // r15d
  int m_iCurBit; // edx
  int v9; // esi
  const unsigned __int8 *m_pData; // r11
  wchar_t v11; // eax
  char v12; // r12
  bool result; // al
  __int64 v14; // rsi
  __int64 iChar; // [rsp+Ah] [rbp-30h]

  v5 = maxLen - 1;
  v6 = 0;
  iChar = 0;
LABEL_2:
  m_nDataBits = this->m_nDataBits;
  m_iCurBit = this->m_iCurBit;
  v9 = m_nDataBits - m_iCurBit;
  while ( v9 > 15 )
  {
    m_pData = this->m_pData;
    this->m_iCurBit = m_iCurBit + 16;
    v11 = ((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
         | (*&m_pData[4 * ((m_iCurBit + 15) >> 5)] << (32 - (m_iCurBit & 0x1F))));
    if ( ((*&m_pData[4 * (m_iCurBit >> 5)] >> (m_iCurBit & 0x1F))
        | (*&m_pData[4 * ((m_iCurBit + 15) >> 5)] << (32 - (m_iCurBit & 0x1F)))) == 0 )
      goto LABEL_9;
    if ( v11 == 10 )
    {
      if ( bLine )
        goto LABEL_9;
      v9 -= 16;
      if ( v5 > iChar )
      {
LABEL_16:
        v14 = iChar++;
        pStr[v14] = v11;
        goto LABEL_2;
      }
    }
    else
    {
      v9 -= 16;
      if ( v5 > iChar )
        goto LABEL_16;
    }
    v6 = 1;
    m_iCurBit += 16;
  }
  this->m_iCurBit = m_nDataBits;
  this->m_bOverflow = 1;
LABEL_9:
  pStr[iChar] = 0;
  if ( pOutNumChars != 0 )
    *pOutNumChars = iChar;
  v12 = v6 ^ 1;
  result = 0;
  if ( !this->m_bOverflow )
    return v12;
  return result;
}


// bf_read::ReadAndAllocateString  (line 1480, @0x0000000002f6cbf0, libserver.so)
// calls: bf_read::ReadString, operator new [], __stack_chk_fail
char *__fastcall bf_read::ReadAndAllocateString(bf_read *const this, bool *pOverflow)
{
  bool v3; // al
  char *result; // rax
  __int64 v5; // rdx
  int nChars; // [rsp+Ch] [rbp-824h] BYREF
  char str[2056]; // [rsp+10h] [rbp-820h] BYREF
  unsigned __int64 v8; // [rsp+818h] [rbp-18h]

  v8 = __readfsqword(0x28u);
  v3 = !bf_read::ReadString(this, str, 2048, 0, &nChars);
  if ( pOverflow != 0 )
    *pOverflow = v3;
  result = operator new[](nChars + 1);
  if ( nChars >= 0 )
  {
    v5 = 0;
    do
    {
      result[v5] = str[v5];
      ++v5;
    }
    while ( nChars >= v5 );
  }
  return result;
}


// bf_read::ExciseBits  (line 1497, @0x0000000002f6cca0, libserver.so)  // inlines: GetNumBitsLeft, ReadOneBit, ReadOneBitNoCheck, Seek, SetOverflowFlag, StartWriting, WriteOneBit, WriteOneBitNoCheck
void __fastcall bf_read::ExciseBits(bf_read *const this, int startbit, int bitstoremove)
{
  int m_nDataBits; // r11d
  int v4; // eax
  int v5; // r12d
  int v6; // r13d
  const unsigned __int8 *m_pData; // rbx
  int v8; // r9d
  int v9; // r10d
  int m_iCurBit; // r8d
  unsigned int v11; // eax
  int v12; // eax
  int v13; // r11d

  m_nDataBits = this->m_nDataBits;
  v4 = startbit + bitstoremove;
  v5 = m_nDataBits - (startbit + bitstoremove);
  v6 = m_nDataBits << 6;
  m_pData = this->m_pData;
  if ( startbit + bitstoremove >= 0 && v4 <= m_nDataBits )
  {
    this->m_iCurBit = v4;
  }
  else
  {
    this->m_bOverflow = 1;
    this->m_iCurBit = m_nDataBits;
  }
  if ( v5 > 0 )
  {
    v8 = startbit;
    v9 = 0;
    while ( 1 )
    {
      m_iCurBit = this->m_iCurBit;
      if ( m_nDataBits - m_iCurBit <= 0 )
        break;
      v11 = *&this->m_pData[4 * (m_iCurBit >> 5)];
      this->m_iCurBit = m_iCurBit + 1;
      v12 = (v11 >> m_iCurBit) & 1;
      if ( v6 > v8 )
      {
        if ( v12 == 0 )
          goto LABEL_12;
        *&m_pData[4 * (v8 >> 5)] |= 1 << v8;
LABEL_7:
        m_nDataBits = this->m_nDataBits;
        ++v8;
      }
LABEL_8:
      if ( ++v9 == v5 )
        goto LABEL_15;
    }
    this->m_bOverflow = 1;
    if ( v6 <= v8 )
      goto LABEL_8;
LABEL_12:
    *&m_pData[4 * (v8 >> 5)] &= ~(1 << v8);
    goto LABEL_7;
  }
LABEL_15:
  if ( startbit < 0 || startbit > m_nDataBits )
  {
    this->m_bOverflow = 1;
    this->m_iCurBit = m_nDataBits;
  }
  else
  {
    this->m_iCurBit = startbit;
  }
  v13 = m_nDataBits - bitstoremove;
  this->m_nDataBits = v13;
  this->m_nDataBytes = v13 >> 3;
}


// bf_read::CompareBitsAt  (line 1518, @0x0000000002f6cdc0, libserver.so)
int __fastcall bf_read::CompareBitsAt(bf_read *const this, int offset, bf_read *other, int otherOffset, int numbits)
{
  int result; // eax
  int v6; // r14d
  int v7; // r15d
  char v8; // r10
  char v9; // r9
  char v10; // bl
  const unsigned __int8 *v11; // r12
  char v12; // r11
  const unsigned __int8 *v13; // rdi
  const unsigned __int8 *v14; // r13
  const unsigned __int8 *v15; // rsi

  result = 0;
  if ( numbits != 0 )
  {
    v6 = otherOffset + numbits;
    v7 = offset + numbits;
    if ( otherOffset + numbits > other->m_nDataBits || v7 > this->m_nDataBits )
    {
      return 1;
    }
    else
    {
      v8 = offset & 0x1F;
      v9 = otherOffset & 0x1F;
      v10 = 32 - (otherOffset & 0x1F);
      v11 = &this->m_pData[4 * (offset >> 5)];
      v12 = 32 - (offset & 0x1F);
      v13 = v11;
      v14 = &other->m_pData[4 * (otherOffset >> 5)];
      v15 = v14;
      if ( numbits > 32 )
      {
        result = (*v11 >> v8) ^ (*(v11 + 1) << v12) ^ (*v14 >> v9) ^ (*(v14 + 1) << v10);
        if ( result != 0 )
          return result;
        v15 = &other->m_pData[4 * (otherOffset >> 5)];
        v13 = v11;
        while ( 1 )
        {
          numbits -= 32;
          v13 += 4;
          v15 += 4;
          if ( numbits <= 32 )
            break;
          result = (*(v13 + 1) << v12) ^ (*v13 >> v8) ^ (*v15 >> v9) ^ (*(v15 + 1) << v10);
          if ( result != 0 )
            return result;
        }
      }
      return g_Tier1_ExtraMasks[numbits]
           & ((*v15 >> v9)
            ^ (*v13 >> v8)
            ^ (*&v11[4 * ((v7 - 1) >> 5)] << v12)
            ^ (*&v14[4 * ((v6 - 1) >> 5)] << v10));
    }
  }
  return result;
}


// GetBitCount<bf_write>  (line 2277, @0x0000000002f6cf10, libserver.so)
int __fastcall GetBitCount<bf_write>(bf_write *pBuf)
{
  return pBuf->m_iCurBit;
}


// GetBitCount<bf_read>  (line 2281, @0x0000000002f6cf20, libserver.so)
int __fastcall GetBitCount<bf_read>(bf_read *pBuf)
{
  return pBuf->m_iCurBit;
}


