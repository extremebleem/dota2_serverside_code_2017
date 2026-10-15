
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// bf_write::WriteOneBit  (line 376, @0x0000000003129ae0, libserver.so)  // inlines: SetOverflowFlag, WriteOneBitNoCheck
// callers: FieldOp_Write_PushOneLeftDeltaNRightNonZero, FieldOp_Write_PushTwoLeftDeltaN, FieldOp_Write_PushThreeLeftDeltaN, FieldOp_Write_PushN, FieldOp_Write_PushNAndNonTopographical, FieldOp_Write_PopAllButOnePlusN, FieldOp_Write_PopNPlusOne, FieldOp_Write_PopNPlusN, FieldOp_Write_PopNAndNonTopographical
void __fastcall bf_write::WriteOneBit(bf_write *const this, int nValue)
{
  int m_iCurBit; // ecx

  m_iCurBit = this->m_iCurBit;
  if ( m_iCurBit >= this->m_nDataBits )
  {
    this->m_bOverflow = 1;
  }
  else
  {
    if ( nValue != 0 )
      this->m_pData[m_iCurBit >> 5] |= 1 << m_iCurBit;
    else
      this->m_pData[m_iCurBit >> 5] &= ~(1 << m_iCurBit);
    ++this->m_iCurBit;
  }
}


// bf_read::ReadOneBit  (line 759, @0x0000000003129b30, libserver.so)  // inlines: GetNumBitsLeft, ReadOneBitNoCheck
// calls: bf_read::SetOverflowFlag
// callers: FieldOp_Read_PushOneLeftDeltaZeroRightNonZero, FieldOp_Read_PushThreeLeftDeltaZero, FieldOp_Read_PlusN, FieldOp_Read_PushOneLeftDeltaOneRightNonZero, FieldOp_Read_PushOneLeftDeltaNRightZero, FieldOp_Read_PushOneLeftDeltaNRightNonZero, FieldOp_Read_PushTwoLeftDeltaN, FieldOp_Read_PushThreeLeftDeltaOne, FieldOp_Read_PushThreeLeftDeltaN, FieldOp_Read_PushN, FieldOp_Read_PushNAndNonTopographical, FieldOp_Read_PopOnePlusN (16 total)
int __fastcall bf_read::ReadOneBit(bf_read *const this)
{
  int m_iCurBit; // ecx
  int v2; // eax

  m_iCurBit = this->m_iCurBit;
  if ( this->m_nDataBits - m_iCurBit <= 0 )
  {
    bf_read::SetOverflowFlag(this);
    return 0;
  }
  else
  {
    v2 = *&this->m_pData[4 * (m_iCurBit >> 5)] >> m_iCurBit;
    this->m_iCurBit = m_iCurBit + 1;
    return v2 & 1;
  }
}


