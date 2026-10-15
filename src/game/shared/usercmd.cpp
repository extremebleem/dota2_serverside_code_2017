
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// WriteUserCmdDeltaInt  (line 29, @0x00000000023faaf0, libserver.so)  // inlines: SetOverflowFlag, WriteOneBit, WriteOneBitNoCheck
// calls: bf_write::WriteVarInt64
// callers: WriteUsercmd
__int64 __fastcall WriteUserCmdDeltaInt(bf_write *buf, const char *what, const char *from, uint64 to)
{
  int v4; // ecx
  int m_iCurBit; // ecx

  if ( what == from )
  {
    m_iCurBit = buf->m_iCurBit;
    if ( m_iCurBit >= buf->m_nDataBits )
    {
      buf->m_bOverflow = 1;
      return 0;
    }
    else
    {
      buf->m_pData[m_iCurBit >> 5] &= ~(1 << m_iCurBit);
      ++buf->m_iCurBit;
      return 0;
    }
  }
  else
  {
    v4 = buf->m_iCurBit;
    if ( v4 >= buf->m_nDataBits )
    {
      buf->m_bOverflow = 1;
    }
    else
    {
      buf->m_pData[v4 >> 5] |= 1 << v4;
      ++buf->m_iCurBit;
    }
    bf_write::WriteVarInt64(buf, from);
    return 1;
  }
}


// WriteUserCmdDeltaFloat  (line 44, @0x00000000023fa9b0, libserver.so)  // inlines: SetOverflowFlag, WriteOneBit, WriteOneBitNoCheck
// calls: bf_write::WriteFloat
// callers: WriteUsercmd
__int64 __fastcall WriteUserCmdDeltaFloat(bf_write *buf, const char *what, float from, float to)
{
  int m_iCurBit; // ecx
  __int64 result; // rax

  m_iCurBit = buf->m_iCurBit;
  if ( from == to )
  {
    if ( m_iCurBit >= buf->m_nDataBits )
    {
      buf->m_bOverflow = 1;
      return 0;
    }
    else
    {
      buf->m_pData[m_iCurBit >> 5] &= ~(1 << m_iCurBit);
      result = 0;
      ++buf->m_iCurBit;
    }
  }
  else
  {
    if ( m_iCurBit >= buf->m_nDataBits )
    {
      buf->m_bOverflow = 1;
    }
    else
    {
      buf->m_pData[m_iCurBit >> 5] |= 1 << m_iCurBit;
      ++buf->m_iCurBit;
    }
    bf_write::WriteFloat(buf, to);
    return 1;
  }
  return result;
}


// WriteUsercmd  (line 111, @0x00000000023fe6f0, libserver.so)  // inlines: GetNumBitsLeft, LoadLittleDWord, SetOverflowFlag, WriteByte, WriteOneBit, WriteOneBitNoCheck, WriteShort, WriteUBitLong, operator!=
// calls: WriteUserCmdDeltaInt, WriteUserCmdDeltaFloat, bf_write::WriteBitVec3Coord, bf_write::WriteSBitLong
void __fastcall WriteUsercmd(bf_write *buf, const CUserCmd *to, const CUserCmd *from)
{
  uint64 v3; // rcx
  uint64 v7; // rcx
  const char *v8; // rsi
  const char *v9; // rsi
  const char *v10; // rsi
  const char *v11; // rsi
  const char *v12; // rsi
  const char *v13; // rsi
  uint64 v14; // rcx
  uint64 v15; // rcx
  int v16; // ecx
  int m_iCurBit; // eax
  int m_nDataBits; // edx
  int weaponselect; // esi
  uint64 weaponsubtype; // rcx
  int v21; // esi
  uint64 v22; // rcx
  uint64 v23; // rcx
  int v24; // ecx
  int v25; // esi
  int v26; // edx
  int clickbehavior; // eax
  int v28; // eax
  uint8 statspanel; // si
  uint8 shoppanel; // si
  int v31; // ecx
  uint8 stats_dropdown; // si
  uint8 stats_dropdown_sort; // si
  unsigned int v34; // r8d
  uint32 *v35; // rdi
  int v36; // eax
  uint32 v37; // r9d
  uint32 *v38; // rcx
  unsigned int v39; // r8d
  uint32 *v40; // rdi
  int v41; // eax
  uint32 v42; // r9d
  uint32 *v43; // rcx
  char v44; // r8
  uint32 *v45; // rdi
  int v46; // eax
  uint32 v47; // r9d
  uint32 *v48; // rcx
  uint32 *v49; // rdi
  int v50; // eax
  uint32 v51; // r9d
  uint32 *v52; // rcx
  uint32 *v53; // rdi
  int v54; // eax
  uint32 v55; // r9d
  uint32 *v56; // rcx
  int v57; // eax
  uint32 *v58; // rdi
  uint32 v59; // r9d
  uint32 *v60; // rcx
  char v61; // r8
  uint32 *v62; // rdi
  int v63; // eax
  uint32 v64; // r9d
  uint32 *v65; // rcx

  WriteUserCmdDeltaInt(buf, (from->command_number + 1), to->command_number, v3);
  WriteUserCmdDeltaInt(buf, (from->tick_count + 1), to->tick_count, v7);
  WriteUserCmdDeltaFloat(buf, v8, from->viewangles.x, to->viewangles.x);
  WriteUserCmdDeltaFloat(buf, v9, from->viewangles.y, to->viewangles.y);
  WriteUserCmdDeltaFloat(buf, v10, from->viewangles.z, to->viewangles.z);
  WriteUserCmdDeltaFloat(buf, v11, from->forwardmove, to->forwardmove);
  WriteUserCmdDeltaFloat(buf, v12, from->sidemove, to->sidemove);
  WriteUserCmdDeltaFloat(buf, v13, from->upmove, to->upmove);
  WriteUserCmdDeltaInt(buf, from->buttons, to->buttons, v14);
  WriteUserCmdDeltaInt(buf, from->impulse, to->impulse, v15);
  if ( from->crosshairtrace.x == to->crosshairtrace.x
    && from->crosshairtrace.y == to->crosshairtrace.y
    && from->crosshairtrace.z == to->crosshairtrace.z )
  {
    m_iCurBit = buf->m_iCurBit;
    m_nDataBits = buf->m_nDataBits;
    if ( m_iCurBit >= m_nDataBits )
    {
      buf->m_bOverflow = 1;
      if ( to->weaponselect == from->weaponselect )
      {
LABEL_81:
        buf->m_bOverflow = 1;
LABEL_8:
        weaponsubtype = from->weaponsubtype;
        if ( to->weaponsubtype == weaponsubtype )
          goto LABEL_82;
LABEL_9:
        if ( m_iCurBit >= m_nDataBits )
        {
          buf->m_bOverflow = 1;
          weaponsubtype = (m_nDataBits - m_iCurBit);
          v21 = to->weaponsubtype;
          if ( weaponsubtype <= 13 )
            goto LABEL_11;
        }
        else
        {
          buf->m_pData[m_iCurBit >> 5] |= 1 << m_iCurBit;
          m_nDataBits = buf->m_nDataBits;
          m_iCurBit = buf->m_iCurBit + 1;
          buf->m_iCurBit = m_iCurBit;
          weaponsubtype = (m_nDataBits - m_iCurBit);
          v21 = to->weaponsubtype;
          if ( weaponsubtype <= 13 )
          {
LABEL_11:
            buf->m_iCurBit = m_nDataBits;
            buf->m_bOverflow = 1;
            goto LABEL_12;
          }
        }
        buf->m_iCurBit = m_iCurBit + 14;
        v34 = m_iCurBit & 0x1F;
        v35 = &buf->m_pData[m_iCurBit >> 5];
        v36 = __ROL4__(v21, v34);
        v37 = *v35;
        v38 = &v35[(0x1FFFu >> (31 - v34)) & 1];
        *v38 ^= (0x1FFFu >> (31 - v34)) & (v36 ^ *v38);
        weaponsubtype = v34;
        *v35 = v37 ^ (0x3FFF << v34) & (v37 ^ v36);
        goto LABEL_12;
      }
LABEL_49:
      buf->m_bOverflow = 1;
      weaponselect = to->weaponselect;
      if ( m_nDataBits - m_iCurBit <= 13 )
        goto LABEL_7;
      goto LABEL_50;
    }
    buf->m_pData[m_iCurBit >> 5] &= ~(1 << m_iCurBit);
    m_nDataBits = buf->m_nDataBits;
    m_iCurBit = buf->m_iCurBit + 1;
    buf->m_iCurBit = m_iCurBit;
    if ( to->weaponselect == from->weaponselect )
      goto LABEL_43;
  }
  else
  {
    v16 = buf->m_iCurBit;
    if ( v16 >= buf->m_nDataBits )
    {
      buf->m_bOverflow = 1;
    }
    else
    {
      buf->m_pData[v16 >> 5] |= 1 << v16;
      ++buf->m_iCurBit;
    }
    bf_write::WriteBitVec3Coord(buf, &to->crosshairtrace);
    m_iCurBit = buf->m_iCurBit;
    m_nDataBits = buf->m_nDataBits;
    if ( to->weaponselect == from->weaponselect )
    {
LABEL_43:
      if ( m_nDataBits > m_iCurBit )
      {
        weaponsubtype = m_iCurBit;
        buf->m_pData[m_iCurBit >> 5] &= ~(1 << m_iCurBit);
        m_nDataBits = buf->m_nDataBits;
        m_iCurBit = buf->m_iCurBit + 1;
        buf->m_iCurBit = m_iCurBit;
        goto LABEL_51;
      }
      goto LABEL_81;
    }
  }
  if ( m_nDataBits <= m_iCurBit )
    goto LABEL_49;
  buf->m_pData[m_iCurBit >> 5] |= 1 << m_iCurBit;
  m_nDataBits = buf->m_nDataBits;
  m_iCurBit = buf->m_iCurBit + 1;
  buf->m_iCurBit = m_iCurBit;
  weaponselect = to->weaponselect;
  if ( m_nDataBits - m_iCurBit <= 13 )
  {
LABEL_7:
    buf->m_iCurBit = m_nDataBits;
    m_iCurBit = m_nDataBits;
    buf->m_bOverflow = 1;
    goto LABEL_8;
  }
LABEL_50:
  buf->m_iCurBit = m_iCurBit + 14;
  v39 = m_iCurBit & 0x1F;
  v40 = &buf->m_pData[m_iCurBit >> 5];
  v41 = __ROL4__(weaponselect, v39);
  v42 = *v40;
  v43 = &v40[(0x1FFFu >> (31 - v39)) & 1];
  *v43 ^= (0x1FFFu >> (31 - v39)) & (v41 ^ *v43);
  weaponsubtype = v39;
  *v40 = v42 ^ (0x3FFF << v39) & (v42 ^ v41);
  m_iCurBit = buf->m_iCurBit;
  m_nDataBits = buf->m_nDataBits;
LABEL_51:
  if ( to->weaponsubtype != from->weaponsubtype )
    goto LABEL_9;
  if ( m_iCurBit < m_nDataBits )
  {
    weaponsubtype = m_iCurBit;
    buf->m_pData[m_iCurBit >> 5] &= ~(1 << m_iCurBit);
    ++buf->m_iCurBit;
    goto LABEL_12;
  }
LABEL_82:
  buf->m_bOverflow = 1;
LABEL_12:
  if ( WriteUserCmdDeltaInt(buf, from->weaponselect, to->weaponselect, weaponsubtype) != 0 )
    WriteUserCmdDeltaInt(buf, from->weaponsubtype, to->weaponsubtype, v22);
  WriteUserCmdDeltaInt(buf, from->mousedx, to->mousedx, v22);
  WriteUserCmdDeltaInt(buf, from->mousedy, to->mousedy, v23);
  if ( to->cameraposition[0] == from->cameraposition[0] && to->cameraposition[1] == from->cameraposition[1] )
  {
    v25 = buf->m_iCurBit;
    v26 = buf->m_nDataBits;
    if ( v25 >= v26 )
    {
      buf->m_bOverflow = 1;
      if ( to->clickbehavior != from->clickbehavior )
        goto LABEL_71;
      goto LABEL_83;
    }
    buf->m_pData[v25 >> 5] &= ~(1 << v25);
    v26 = buf->m_nDataBits;
    v25 = buf->m_iCurBit + 1;
    buf->m_iCurBit = v25;
  }
  else
  {
    v24 = buf->m_iCurBit;
    if ( v24 >= buf->m_nDataBits )
    {
      buf->m_bOverflow = 1;
    }
    else
    {
      buf->m_pData[v24 >> 5] |= 1 << v24;
      ++buf->m_iCurBit;
    }
    bf_write::WriteSBitLong(buf, to->cameraposition[0], 16);
    bf_write::WriteSBitLong(buf, to->cameraposition[1], 16);
    v25 = buf->m_iCurBit;
    v26 = buf->m_nDataBits;
  }
  if ( to->clickbehavior != from->clickbehavior )
  {
    if ( v25 < v26 )
    {
      buf->m_pData[v25 >> 5] |= 1 << v25;
      v26 = buf->m_nDataBits;
      v25 = buf->m_iCurBit + 1;
      buf->m_iCurBit = v25;
      clickbehavior = to->clickbehavior;
      if ( v26 - v25 <= 7 )
      {
LABEL_22:
        buf->m_iCurBit = v26;
        v28 = v26;
        buf->m_bOverflow = 1;
        goto LABEL_23;
      }
      goto LABEL_72;
    }
LABEL_71:
    buf->m_bOverflow = 1;
    clickbehavior = to->clickbehavior;
    if ( v26 - v25 <= 7 )
      goto LABEL_22;
LABEL_72:
    buf->m_iCurBit = v25 + 8;
    v57 = __ROL4__(clickbehavior, v25 & 0x1F);
    v58 = &buf->m_pData[v25 >> 5];
    v59 = *v58;
    v60 = &v58[(0x7Fu >> (31 - (v25 & 0x1F))) & 1];
    *v60 ^= (0x7Fu >> (31 - (v25 & 0x1F))) & (v57 ^ *v60);
    *v58 = v59 ^ (255 << (v25 & 0x1F)) & (v59 ^ v57);
    v26 = buf->m_iCurBit;
    v28 = buf->m_nDataBits;
LABEL_73:
    if ( to->statspanel != from->statspanel )
      goto LABEL_24;
    if ( v28 > v26 )
    {
      buf->m_pData[v26 >> 5] &= ~(1 << v26);
      v26 = buf->m_iCurBit + 1;
      v28 = buf->m_nDataBits;
      buf->m_iCurBit = v26;
      goto LABEL_66;
    }
    goto LABEL_86;
  }
  if ( v25 < v26 )
  {
    buf->m_pData[v25 >> 5] &= ~(1 << v25);
    v26 = buf->m_iCurBit + 1;
    v28 = buf->m_nDataBits;
    buf->m_iCurBit = v26;
    goto LABEL_73;
  }
LABEL_83:
  v28 = v26;
  buf->m_bOverflow = 1;
  v26 = v25;
LABEL_23:
  if ( to->statspanel != from->statspanel )
  {
LABEL_24:
    if ( v28 <= v26 )
    {
      buf->m_bOverflow = 1;
      statspanel = to->statspanel;
      if ( v28 - v26 <= 7 )
        goto LABEL_26;
    }
    else
    {
      buf->m_pData[v26 >> 5] |= 1 << v26;
      v26 = buf->m_iCurBit + 1;
      v28 = buf->m_nDataBits;
      buf->m_iCurBit = v26;
      statspanel = to->statspanel;
      if ( v28 - v26 <= 7 )
      {
LABEL_26:
        buf->m_iCurBit = v28;
        v26 = v28;
        buf->m_bOverflow = 1;
        goto LABEL_27;
      }
    }
    buf->m_iCurBit = v26 + 8;
    v53 = &buf->m_pData[v26 >> 5];
    v54 = __ROL4__(statspanel, v26 & 0x1F);
    v55 = *v53;
    v56 = &v53[(0x7Fu >> (31 - (v26 & 0x1F))) & 1];
    *v56 ^= (0x7Fu >> (31 - (v26 & 0x1F))) & (v54 ^ *v56);
    *v53 = v55 ^ (255 << (v26 & 0x1F)) & (v55 ^ v54);
    v26 = buf->m_iCurBit;
    v28 = buf->m_nDataBits;
LABEL_66:
    if ( to->shoppanel != from->shoppanel )
      goto LABEL_28;
    if ( v26 < v28 )
    {
      buf->m_pData[v26 >> 5] &= ~(1 << v26);
      v31 = buf->m_nDataBits;
      v28 = buf->m_iCurBit + 1;
      buf->m_iCurBit = v28;
      goto LABEL_61;
    }
    goto LABEL_85;
  }
LABEL_86:
  buf->m_bOverflow = 1;
LABEL_27:
  if ( to->shoppanel != from->shoppanel )
  {
LABEL_28:
    if ( v26 >= v28 )
    {
      buf->m_bOverflow = 1;
      shoppanel = to->shoppanel;
      if ( v28 - v26 <= 7 )
        goto LABEL_30;
    }
    else
    {
      buf->m_pData[v26 >> 5] |= 1 << v26;
      v26 = buf->m_iCurBit + 1;
      v28 = buf->m_nDataBits;
      buf->m_iCurBit = v26;
      shoppanel = to->shoppanel;
      if ( v28 - v26 <= 7 )
      {
LABEL_30:
        buf->m_iCurBit = v28;
        v31 = v28;
        buf->m_bOverflow = 1;
        goto LABEL_31;
      }
    }
    buf->m_iCurBit = v26 + 8;
    v49 = &buf->m_pData[v26 >> 5];
    v50 = __ROL4__(shoppanel, v26 & 0x1F);
    v51 = *v49;
    v52 = &v49[(0x7Fu >> (31 - (v26 & 0x1F))) & 1];
    *v52 ^= (0x7Fu >> (31 - (v26 & 0x1F))) & (v50 ^ *v52);
    *v49 = v51 ^ (255 << (v26 & 0x1F)) & (v51 ^ v50);
    v28 = buf->m_iCurBit;
    v31 = buf->m_nDataBits;
LABEL_61:
    if ( to->stats_dropdown != from->stats_dropdown )
      goto LABEL_32;
    if ( v31 > v28 )
    {
      buf->m_pData[v28 >> 5] &= ~(1 << v28);
      v31 = buf->m_nDataBits;
      v28 = buf->m_iCurBit + 1;
      buf->m_iCurBit = v28;
      goto LABEL_56;
    }
    goto LABEL_84;
  }
LABEL_85:
  v31 = v28;
  buf->m_bOverflow = 1;
  v28 = v26;
LABEL_31:
  if ( to->stats_dropdown != from->stats_dropdown )
  {
LABEL_32:
    if ( v28 >= v31 )
    {
      buf->m_bOverflow = 1;
      stats_dropdown = to->stats_dropdown;
      if ( v31 - v28 <= 7 )
        goto LABEL_34;
    }
    else
    {
      buf->m_pData[v28 >> 5] |= 1 << v28;
      v31 = buf->m_nDataBits;
      v28 = buf->m_iCurBit + 1;
      buf->m_iCurBit = v28;
      stats_dropdown = to->stats_dropdown;
      if ( v31 - v28 <= 7 )
      {
LABEL_34:
        buf->m_iCurBit = v31;
        v28 = v31;
        buf->m_bOverflow = 1;
        goto LABEL_35;
      }
    }
    buf->m_iCurBit = v28 + 8;
    v44 = v28 & 0x1F;
    v45 = &buf->m_pData[v28 >> 5];
    v46 = __ROL4__(stats_dropdown, v28 & 0x1F);
    v47 = *v45;
    v48 = &v45[(0x7Fu >> (31 - v44)) & 1];
    *v48 ^= (0x7Fu >> (31 - v44)) & (v46 ^ *v48);
    *v45 = v47 ^ (255 << v44) & (v47 ^ v46);
    v28 = buf->m_iCurBit;
    v31 = buf->m_nDataBits;
LABEL_56:
    if ( to->stats_dropdown_sort != from->stats_dropdown_sort )
      goto LABEL_36;
    if ( v31 > v28 )
    {
      buf->m_pData[v28 >> 5] &= ~(1 << v28);
      ++buf->m_iCurBit;
      return;
    }
LABEL_87:
    buf->m_bOverflow = 1;
    return;
  }
LABEL_84:
  buf->m_bOverflow = 1;
LABEL_35:
  if ( to->stats_dropdown_sort == from->stats_dropdown_sort )
    goto LABEL_87;
LABEL_36:
  if ( v28 >= v31 )
  {
    buf->m_bOverflow = 1;
    stats_dropdown_sort = to->stats_dropdown_sort;
    if ( v31 - v28 <= 7 )
      goto LABEL_38;
  }
  else
  {
    buf->m_pData[v28 >> 5] |= 1 << v28;
    v31 = buf->m_nDataBits;
    v28 = buf->m_iCurBit + 1;
    buf->m_iCurBit = v28;
    stats_dropdown_sort = to->stats_dropdown_sort;
    if ( v31 - v28 <= 7 )
    {
LABEL_38:
      buf->m_iCurBit = v31;
      buf->m_bOverflow = 1;
      return;
    }
  }
  buf->m_iCurBit = v28 + 8;
  v61 = v28 & 0x1F;
  v62 = &buf->m_pData[v28 >> 5];
  v63 = __ROL4__(stats_dropdown_sort, v28 & 0x1F);
  v64 = *v62;
  v65 = &v62[(0x7Fu >> (31 - v61)) & 1];
  *v65 ^= (0x7Fu >> (31 - v61)) & (v63 ^ *v65);
  *v62 = v64 ^ (255 << v61) & (v64 ^ v63);
}


// ReadUsercmd  (line 426, @0x00000000023ff210, libserver.so)  // inlines: Get, GetNumBitsLeft, LoadLittleDWord, NetworkStateChanged, ReadByte, ReadOneBit, ReadOneBitNoCheck, ReadShort, ReadUBitLong, Set, operator CEntityInstance*, operator!=, operator=, operator==
// calls: MD5_PseudoRandom, bf_read::ReadBitVec3Coord, bf_read::ReadVarInt64, bf_read::ReadFloat, bf_read::SetOverflowFlag
// callers: CSource2GameClients::ProcessUsercmds
void __fastcall ReadUsercmd(bf_read *buf, CUserCmd *move, CUserCmd *from)
{
  CUserCmd *v3; // r13
  bf_read *v5; // rbx
  CUserCmd *v6; // r15
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *p_m_vFilteredPosition; // r10
  __int64 v8; // r14
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_FilteredAngles> *p_m_FilteredAngles; // r9
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredVelocity> *p_m_vFilteredVelocity; // r11
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vPosition> *p_m_vPosition; // r8
  __int64 v12; // rbx
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *v13; // rax
  signed __int64 v14; // r13
  float v15; // xmm0_4
  signed __int64 v16; // r13
  float v17; // xmm0_4
  signed __int64 v18; // r13
  float v19; // xmm0_4
  signed __int64 v20; // r13
  float v21; // xmm0_4
  signed __int64 v22; // r13
  float v23; // xmm0_4
  signed __int64 v24; // r13
  float v25; // xmm0_4
  signed __int64 v26; // rdx
  CEntityInstance *v27; // rdi
  signed __int64 v28; // rdx
  float m_Value; // xmm0_4
  float v30; // xmm0_4
  float v31; // xmm0_4
  float v32; // xmm0_4
  signed int m_iCurBit; // eax
  int v34; // edx
  signed int v35; // eax
  int v36; // edx
  int m_nDataBits; // eax
  signed int v38; // edx
  int v39; // esi
  signed int v40; // ecx
  int v41; // esi
  signed int v42; // edx
  int v43; // esi
  signed int v44; // ecx
  int v45; // esi
  signed int v46; // edx
  int v47; // esi
  signed int v48; // ecx
  int v49; // esi
  signed int v50; // edx
  int v51; // esi
  signed int v52; // ecx
  int v53; // esi
  signed int v54; // edx
  int v55; // ecx
  signed int v56; // esi
  const unsigned __int8 *m_pData; // rdi
  int v58; // ecx
  signed int v59; // edx
  int v60; // eax
  const unsigned __int8 *v61; // rdi
  signed int v62; // esi
  int v63; // ecx
  int v64; // eax
  int v65; // eax
  int v66; // eax
  signed int v67; // ecx
  int v68; // esi
  signed int v69; // edx
  int v70; // ecx
  signed int v71; // esi
  const unsigned __int8 *v72; // rdi
  int v73; // ecx
  signed int v74; // edx
  int v75; // eax
  int v76; // eax
  const unsigned __int8 *v77; // r8
  int v78; // eax
  const unsigned __int8 *v79; // rdi
  signed int v80; // esi
  int v81; // ecx
  int v82; // eax
  const unsigned __int8 *v83; // rdi
  int v84; // ecx
  signed int v85; // edx
  int v86; // eax
  const unsigned __int8 *v87; // rdi
  signed int v88; // esi
  int v89; // ecx
  int v90; // eax
  const unsigned __int8 *v91; // rdi
  int v92; // ecx
  signed int v93; // edx
  int v94; // eax
  const unsigned __int8 *v95; // rdi
  int v96; // esi
  int v97; // ecx
  int v98; // eax
  CEntityInstance *v99; // rdi
  CEntityInstance *v100; // rdi
  CEntityInstance *v101; // rdi
  CEntityInstance *v102; // rdi
  CEntityInstance *v103; // rdi
  CEntityInstance *v104; // rdi
  CEntityInstance *v105; // rdi
  CEntityInstance *v106; // rdi
  CEntityInstance *m_pObj; // rdi
  signed int v108; // eax
  int v109; // edx
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredVelocity> *v110; // [rsp+0h] [rbp-130h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredVelocity> *v111; // [rsp+0h] [rbp-130h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredVelocity> *v112; // [rsp+0h] [rbp-130h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredVelocity> *v113; // [rsp+0h] [rbp-130h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredVelocity> *v114; // [rsp+0h] [rbp-130h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredVelocity> *v115; // [rsp+0h] [rbp-130h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredVelocity> *v116; // [rsp+0h] [rbp-130h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredVelocity> *v117; // [rsp+0h] [rbp-130h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredVelocity> *v118; // [rsp+0h] [rbp-130h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredVelocity> *v119; // [rsp+0h] [rbp-130h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_FilteredAngles> *v120; // [rsp+8h] [rbp-128h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_FilteredAngles> *v121; // [rsp+8h] [rbp-128h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_FilteredAngles> *v122; // [rsp+8h] [rbp-128h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_FilteredAngles> *v123; // [rsp+8h] [rbp-128h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_FilteredAngles> *v124; // [rsp+8h] [rbp-128h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_FilteredAngles> *v125; // [rsp+8h] [rbp-128h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_FilteredAngles> *v126; // [rsp+8h] [rbp-128h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_FilteredAngles> *v127; // [rsp+8h] [rbp-128h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_FilteredAngles> *v128; // [rsp+8h] [rbp-128h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_FilteredAngles> *v129; // [rsp+8h] [rbp-128h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *v130; // [rsp+10h] [rbp-120h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *v131; // [rsp+10h] [rbp-120h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *v132; // [rsp+10h] [rbp-120h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *v133; // [rsp+10h] [rbp-120h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *v134; // [rsp+10h] [rbp-120h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *v135; // [rsp+10h] [rbp-120h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *v136; // [rsp+10h] [rbp-120h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *v137; // [rsp+10h] [rbp-120h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *v138; // [rsp+10h] [rbp-120h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *v139; // [rsp+10h] [rbp-120h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *v140; // [rsp+18h] [rbp-118h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *v141; // [rsp+18h] [rbp-118h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *v142; // [rsp+18h] [rbp-118h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *v143; // [rsp+18h] [rbp-118h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *v144; // [rsp+18h] [rbp-118h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *v145; // [rsp+18h] [rbp-118h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *v146; // [rsp+18h] [rbp-118h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *v147; // [rsp+18h] [rbp-118h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *v148; // [rsp+18h] [rbp-118h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *v149; // [rsp+18h] [rbp-118h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vPosition> *v150; // [rsp+20h] [rbp-110h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vPosition> *v151; // [rsp+20h] [rbp-110h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vPosition> *v152; // [rsp+20h] [rbp-110h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vPosition> *v153; // [rsp+20h] [rbp-110h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vPosition> *v154; // [rsp+20h] [rbp-110h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vPosition> *v155; // [rsp+20h] [rbp-110h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vPosition> *v156; // [rsp+20h] [rbp-110h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vPosition> *v157; // [rsp+20h] [rbp-110h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vPosition> *v158; // [rsp+20h] [rbp-110h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vPosition> *v159; // [rsp+20h] [rbp-110h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredVelocity> *v161; // [rsp+30h] [rbp-100h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_FilteredAngles> *v162; // [rsp+38h] [rbp-F8h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *v163; // [rsp+40h] [rbp-F0h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *p_m_Angles; // [rsp+48h] [rbp-E8h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vPosition> *v165; // [rsp+50h] [rbp-E0h]
  __int16 *v166; // [rsp+58h] [rbp-D8h]
  ChangeAccessorFieldPathIndex_t *p_m_PathIndex; // [rsp+60h] [rbp-D0h]
  float *p_upmove; // [rsp+68h] [rbp-C8h]
  uint8 *p_impulse; // [rsp+70h] [rbp-C0h]
  int *p_random_seed; // [rsp+78h] [rbp-B8h]
  __int16 *v171; // [rsp+80h] [rbp-B0h]
  __int16 *v172; // [rsp+88h] [rbp-A8h]
  int *p_tick_count; // [rsp+90h] [rbp-A0h]
  vec_t *p_z; // [rsp+98h] [rbp-98h]
  CNetworkVarBase<float,HandInfo_t::NetworkVar_m_flGripAnalogValue> *v175; // [rsp+A0h] [rbp-90h]
  CNetworkVarBase<float,HandInfo_t::NetworkVar_m_flTrackpadOrJoystickAnalogValueX> *v176; // [rsp+A8h] [rbp-88h]
  CNetworkVarBase<float,HandInfo_t::NetworkVar_m_flTriggerAnalogValue> *v177; // [rsp+B0h] [rbp-80h]
  CNetworkVarBase<float,HandInfo_t::NetworkVar_m_flTrackpadOrJoystickAnalogValueY> *v178; // [rsp+B8h] [rbp-78h]
  CNetworkVarBase<Quaternion,HandInfo_t::NetworkVar_m_FilteredAngularVel> *p_m_FilteredAngularVel; // [rsp+C0h] [rbp-70h]
  CNetworkVarBase<Quaternion,HandInfo_t::NetworkVar_m_FilteredAngularVel> *v180; // [rsp+C8h] [rbp-68h]
  ChangeAccessorFieldPathIndex_t *v181; // [rsp+D0h] [rbp-60h]
  CNetworkVarBase<float,HandInfo_t::NetworkVar_m_flTriggerAnalogValue> *p_m_flTriggerAnalogValue; // [rsp+D8h] [rbp-58h]
  CNetworkVarBase<float,HandInfo_t::NetworkVar_m_flTrackpadOrJoystickAnalogValueX> *p_m_flTrackpadOrJoystickAnalogValueX; // [rsp+E0h] [rbp-50h]
  CNetworkVarBase<float,HandInfo_t::NetworkVar_m_flGripAnalogValue> *p_m_flGripAnalogValue; // [rsp+E8h] [rbp-48h]
  CNetworkVarBase<float,HandInfo_t::NetworkVar_m_flTrackpadOrJoystickAnalogValueY> *p_m_flTrackpadOrJoystickAnalogValueY; // [rsp+F0h] [rbp-40h]

  v3 = move;
  v5 = buf;
  if ( move != from )
  {
    v6 = move;
    p_m_vFilteredPosition = &from->hmd_controllers_info[0].m_vFilteredPosition;
    v8 = 0;
    p_m_FilteredAngles = &from->hmd_controllers_info[0].m_FilteredAngles;
    p_m_vFilteredVelocity = &from->hmd_controllers_info[0].m_vFilteredVelocity;
    move->command_number = from->command_number;
    move->tick_count = from->tick_count;
    move->viewangles = from->viewangles;
    move->forwardmove = from->forwardmove;
    move->sidemove = from->sidemove;
    move->upmove = from->upmove;
    move->buttons = from->buttons;
    move->impulse = from->impulse;
    move->weaponselect = from->weaponselect;
    move->weaponsubtype = from->weaponsubtype;
    move->random_seed = from->random_seed;
    move->mousedx = from->mousedx;
    move->mousedy = from->mousedy;
    move->hasbeenpredicted = from->hasbeenpredicted;
    move->crosshairtrace = from->crosshairtrace;
    *move->cameraposition = *from->cameraposition;
    move->clickbehavior = from->clickbehavior;
    move->statspanel = from->statspanel;
    move->shoppanel = from->shoppanel;
    move->stats_dropdown = from->stats_dropdown;
    move->stats_dropdown_sort = from->stats_dropdown_sort;
    move->hmd_active = from->hmd_active;
    move->hmd_targeting_mode = from->hmd_targeting_mode;
    p_tick_count = &from->tick_count;
    p_m_flTrackpadOrJoystickAnalogValueY = &move->hmd_controllers_info[0].m_flTrackpadOrJoystickAnalogValueY;
    v178 = &from->hmd_controllers_info[0].m_flTrackpadOrJoystickAnalogValueY;
    p_m_PathIndex = &move->hmd_controllers_info[0].__m_PathIndex;
    v181 = &move->hmd_controllers_info[0].__m_PathIndex;
    p_m_flTrackpadOrJoystickAnalogValueX = &move->hmd_controllers_info[0].m_flTrackpadOrJoystickAnalogValueX;
    v176 = &from->hmd_controllers_info[0].m_flTrackpadOrJoystickAnalogValueX;
    p_m_flGripAnalogValue = &move->hmd_controllers_info[0].m_flGripAnalogValue;
    v175 = &from->hmd_controllers_info[0].m_flGripAnalogValue;
    p_m_flTriggerAnalogValue = &move->hmd_controllers_info[0].m_flTriggerAnalogValue;
    v177 = &from->hmd_controllers_info[0].m_flTriggerAnalogValue;
    v172 = &move->cameraposition[1];
    v166 = &move->cameraposition[1];
    p_random_seed = &from->random_seed;
    p_impulse = &from->impulse;
    v171 = &from->cameraposition[1];
    p_upmove = &from->upmove;
    p_m_vPosition = &from->hmd_controllers_info[0].m_vPosition;
    v165 = &move->hmd_controllers_info[0].m_vPosition;
    p_z = &from->viewangles.z;
    p_m_Angles = &move->hmd_controllers_info[0].m_Angles;
    v163 = &move->hmd_controllers_info[0].m_vFilteredPosition;
    v162 = &move->hmd_controllers_info[0].m_FilteredAngles;
    v161 = &move->hmd_controllers_info[0].m_vFilteredVelocity;
    p_m_FilteredAngularVel = &move->hmd_controllers_info[0].m_FilteredAngularVel;
    v12 = 0;
    v13 = &from->hmd_controllers_info[0].m_Angles;
    v180 = &from->hmd_controllers_info[0].m_FilteredAngularVel;
    do
    {
      move->hmd_controllers_active[v12] = from->hmd_controllers_active[v12];
      v14 = p_tick_count - from;
      v15 = *(&p_m_vPosition[-1].m_Value.x + p_tick_count - from);
      if ( v15 != *(&v165->m_Value.x + v8)
        || *(p_m_vPosition + v14 - 8) != *(&v165->m_Value.y + v8)
        || *(p_m_vPosition + v14 - 4) != *(&v165->m_Value.z + v8) )
      {
        m_pObj = v6->hmd_controllers_info[0].__m_pChainEntity.m_pObj;
        if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && v181->m_Value != -1 )
        {
          v148 = v13;
          v118 = p_m_vFilteredVelocity;
          v128 = p_m_FilteredAngles;
          v138 = p_m_vFilteredPosition;
          v158 = p_m_vPosition;
          (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 12, 0xFFFFFFFFLL, p_m_PathIndex->m_Value);
          p_m_vPosition = v158;
          v13 = v148;
          p_m_vFilteredPosition = v138;
          p_m_FilteredAngles = v128;
          p_m_vFilteredVelocity = v118;
          v15 = *(&v158[-1].m_Value.x + v14);
        }
        *(&v165->m_Value.x + v8) = v15;
        *(&v165->m_Value.y + v8) = *(p_m_vPosition + v14 - 8);
        *(&v165->m_Value.z + v8) = *(p_m_vPosition + v14 - 4);
      }
      v16 = p_z - from;
      v17 = *(&v13[-2].m_Value.x + p_z - from);
      if ( v17 != *(&p_m_Angles->m_Value.x + v8)
        || *(&v13[-1] + v16 - 8) != *(&p_m_Angles->m_Value.y + v8)
        || *(&v13[-1] + v16 - 4) != *(&p_m_Angles->m_Value.z + v8) )
      {
        v106 = v6->hmd_controllers_info[0].__m_pChainEntity.m_pObj;
        if ( v106 != 0 && (v106->m_pEntity->m_flags & 0x400) == 0 && v181->m_Value != -1 )
        {
          v147 = v13;
          v117 = p_m_vFilteredVelocity;
          v127 = p_m_FilteredAngles;
          v137 = p_m_vFilteredPosition;
          v157 = p_m_vPosition;
          (*(v106->_vptr_IHandleEntity + 22))(v106, 24, 0xFFFFFFFFLL, p_m_PathIndex->m_Value);
          v13 = v147;
          p_m_vPosition = v157;
          p_m_vFilteredPosition = v137;
          p_m_FilteredAngles = v127;
          p_m_vFilteredVelocity = v117;
          v17 = *(&v147[-2].m_Value.x + v16);
        }
        *(&p_m_Angles->m_Value.x + v8) = v17;
        *(&p_m_Angles->m_Value.y + v8) = *(&v13[-1] + v16 - 8);
        *(&p_m_Angles->m_Value.z + v8) = *(&v13[-1] + v16 - 4);
      }
      v18 = p_upmove - from;
      v19 = *(&p_m_vFilteredPosition[-3].m_Value.x + p_upmove - from);
      if ( v19 != *(&v163->m_Value.x + v8)
        || *(&p_m_vFilteredPosition[-2] + v18 - 8) != *(&v163->m_Value.y + v8)
        || *(&p_m_vFilteredPosition[-2] + v18 - 4) != *(&v163->m_Value.z + v8) )
      {
        v105 = v6->hmd_controllers_info[0].__m_pChainEntity.m_pObj;
        if ( v105 != 0 && (v105->m_pEntity->m_flags & 0x400) == 0 && v181->m_Value != -1 )
        {
          v146 = v13;
          v116 = p_m_vFilteredVelocity;
          v126 = p_m_FilteredAngles;
          v136 = p_m_vFilteredPosition;
          v156 = p_m_vPosition;
          (*(v105->_vptr_IHandleEntity + 22))(v105, 36, 0xFFFFFFFFLL, p_m_PathIndex->m_Value);
          p_m_vFilteredPosition = v136;
          p_m_vPosition = v156;
          v13 = v146;
          p_m_FilteredAngles = v126;
          p_m_vFilteredVelocity = v116;
          v19 = *(&v136[-3].m_Value.x + v18);
        }
        *(&v163->m_Value.x + v8) = v19;
        *(&v163->m_Value.y + v8) = *(&p_m_vFilteredPosition[-2] + v18 - 8);
        *(&v163->m_Value.z + v8) = *(&p_m_vFilteredPosition[-2] + v18 - 4);
      }
      v20 = p_impulse - from;
      v21 = *(&p_m_FilteredAngles[-4].m_Value.x + p_impulse - from);
      if ( v21 != *(&v162->m_Value.x + v8)
        || *(&p_m_FilteredAngles[-3] + v20 - 8) != *(&v162->m_Value.y + v8)
        || *(&p_m_FilteredAngles[-3] + v20 - 4) != *(&v162->m_Value.z + v8) )
      {
        v104 = v6->hmd_controllers_info[0].__m_pChainEntity.m_pObj;
        if ( v104 != 0 && (v104->m_pEntity->m_flags & 0x400) == 0 && v181->m_Value != -1 )
        {
          v145 = v13;
          v115 = p_m_vFilteredVelocity;
          v125 = p_m_FilteredAngles;
          v135 = p_m_vFilteredPosition;
          v155 = p_m_vPosition;
          (*(v104->_vptr_IHandleEntity + 22))(v104, 48, 0xFFFFFFFFLL, p_m_PathIndex->m_Value);
          p_m_FilteredAngles = v125;
          p_m_vPosition = v155;
          v13 = v145;
          p_m_vFilteredPosition = v135;
          p_m_vFilteredVelocity = v115;
          v21 = *(&v125[-4].m_Value.x + v20);
        }
        *(&v162->m_Value.x + v8) = v21;
        *(&v162->m_Value.y + v8) = *(&p_m_FilteredAngles[-3] + v20 - 8);
        *(&v162->m_Value.z + v8) = *(&p_m_FilteredAngles[-3] + v20 - 4);
      }
      v22 = p_random_seed - from;
      v23 = *(&p_m_vFilteredVelocity[-5].m_Value.x + p_random_seed - from);
      if ( v23 != *(&v161->m_Value.x + v8)
        || *(&p_m_vFilteredVelocity[-4] + v22 - 8) != *(&v161->m_Value.y + v8)
        || *(&p_m_vFilteredVelocity[-4] + v22 - 4) != *(&v161->m_Value.z + v8) )
      {
        v103 = v6->hmd_controllers_info[0].__m_pChainEntity.m_pObj;
        if ( v103 != 0 && (v103->m_pEntity->m_flags & 0x400) == 0 && v181->m_Value != -1 )
        {
          v144 = v13;
          v114 = p_m_vFilteredVelocity;
          v124 = p_m_FilteredAngles;
          v134 = p_m_vFilteredPosition;
          v154 = p_m_vPosition;
          (*(v103->_vptr_IHandleEntity + 22))(v103, 60, 0xFFFFFFFFLL, p_m_PathIndex->m_Value);
          p_m_vFilteredVelocity = v114;
          p_m_vPosition = v154;
          v13 = v144;
          p_m_vFilteredPosition = v134;
          p_m_FilteredAngles = v124;
          v23 = *(&v114[-5].m_Value.x + v22);
        }
        *(&v161->m_Value.x + v8) = v23;
        *(&v161->m_Value.y + v8) = *(&p_m_vFilteredVelocity[-4] + v22 - 8);
        *(&v161->m_Value.z + v8) = *(&p_m_vFilteredVelocity[-4] + v22 - 4);
      }
      v24 = v171 - from;
      v25 = *(v171 + 26);
      v26 = v172 - move;
      if ( v25 != *(&p_m_FilteredAngularVel[-4] + v172 - move - 8)
        || *(&p_m_FilteredAngularVel[-4] + v26 - 4) != *(&v180[-4] + v24 - 4)
        || *(&p_m_FilteredAngularVel[-4].m_Value.x + v26) != *(&v180[-4].m_Value.x + v24)
        || *(&p_m_FilteredAngularVel[-3] + v26 - 12) != *(&v180[-3] + v24 - 12) )
      {
        v27 = v6->hmd_controllers_info[0].__m_pChainEntity.m_pObj;
        if ( v27 != 0 && (v27->m_pEntity->m_flags & 0x400) == 0 && v181->m_Value != -1 )
        {
          v149 = v13;
          v119 = p_m_vFilteredVelocity;
          v129 = p_m_FilteredAngles;
          v139 = p_m_vFilteredPosition;
          v159 = p_m_vPosition;
          (*(v27->_vptr_IHandleEntity + 22))(v27, 72, 0xFFFFFFFFLL, p_m_PathIndex->m_Value);
          p_m_vPosition = v159;
          p_m_vFilteredPosition = v139;
          p_m_FilteredAngles = v129;
          v25 = *(&v180[-4] + v24 - 8);
          p_m_vFilteredVelocity = v119;
          v13 = v149;
        }
        v28 = v166 - move;
        *(&p_m_FilteredAngularVel[-4] + v28 - 8) = v25;
        *(&p_m_FilteredAngularVel[-4] + v28 - 4) = *(&v180[-4] + v24 - 4);
        *(&p_m_FilteredAngularVel[-4].m_Value.x + v28) = *(&v180[-4].m_Value.x + v24);
        *(&p_m_FilteredAngularVel[-3] + v28 - 12) = *(&v180[-3] + v24 - 12);
      }
      m_Value = v177->m_Value;
      if ( v177->m_Value != p_m_flTriggerAnalogValue->m_Value )
      {
        v102 = v6->hmd_controllers_info[0].__m_pChainEntity.m_pObj;
        if ( v102 != 0 && (v102->m_pEntity->m_flags & 0x400) == 0 && v181->m_Value != -1 )
        {
          v143 = v13;
          v113 = p_m_vFilteredVelocity;
          v123 = p_m_FilteredAngles;
          v133 = p_m_vFilteredPosition;
          v153 = p_m_vPosition;
          (*(v102->_vptr_IHandleEntity + 22))(v102, 88, 0xFFFFFFFFLL, p_m_PathIndex->m_Value);
          p_m_vPosition = v153;
          p_m_vFilteredPosition = v133;
          p_m_FilteredAngles = v123;
          m_Value = v177->m_Value;
          p_m_vFilteredVelocity = v113;
          v13 = v143;
        }
        p_m_flTriggerAnalogValue->m_Value = m_Value;
      }
      v30 = v175->m_Value;
      if ( v175->m_Value != p_m_flGripAnalogValue->m_Value )
      {
        v101 = v6->hmd_controllers_info[0].__m_pChainEntity.m_pObj;
        if ( v101 != 0 && (v101->m_pEntity->m_flags & 0x400) == 0 && v181->m_Value != -1 )
        {
          v142 = v13;
          v112 = p_m_vFilteredVelocity;
          v122 = p_m_FilteredAngles;
          v132 = p_m_vFilteredPosition;
          v152 = p_m_vPosition;
          (*(v101->_vptr_IHandleEntity + 22))(v101, 92, 0xFFFFFFFFLL, p_m_PathIndex->m_Value);
          p_m_vPosition = v152;
          p_m_vFilteredPosition = v132;
          p_m_FilteredAngles = v122;
          v30 = v175->m_Value;
          p_m_vFilteredVelocity = v112;
          v13 = v142;
        }
        p_m_flGripAnalogValue->m_Value = v30;
      }
      v31 = v176->m_Value;
      if ( v176->m_Value != p_m_flTrackpadOrJoystickAnalogValueX->m_Value )
      {
        v100 = v6->hmd_controllers_info[0].__m_pChainEntity.m_pObj;
        if ( v100 != 0 && (v100->m_pEntity->m_flags & 0x400) == 0 && v181->m_Value != -1 )
        {
          v141 = v13;
          v111 = p_m_vFilteredVelocity;
          v121 = p_m_FilteredAngles;
          v131 = p_m_vFilteredPosition;
          v151 = p_m_vPosition;
          (*(v100->_vptr_IHandleEntity + 22))(v100, 96, 0xFFFFFFFFLL, p_m_PathIndex->m_Value);
          p_m_vPosition = v151;
          p_m_vFilteredPosition = v131;
          p_m_FilteredAngles = v121;
          v31 = v176->m_Value;
          p_m_vFilteredVelocity = v111;
          v13 = v141;
        }
        p_m_flTrackpadOrJoystickAnalogValueX->m_Value = v31;
      }
      v32 = v178->m_Value;
      if ( v178->m_Value != p_m_flTrackpadOrJoystickAnalogValueY->m_Value )
      {
        v99 = v6->hmd_controllers_info[0].__m_pChainEntity.m_pObj;
        if ( v99 != 0 && (v99->m_pEntity->m_flags & 0x400) == 0 && v181->m_Value != -1 )
        {
          v140 = v13;
          v110 = p_m_vFilteredVelocity;
          v120 = p_m_FilteredAngles;
          v130 = p_m_vFilteredPosition;
          v150 = p_m_vPosition;
          (*(v99->_vptr_IHandleEntity + 22))(v99, 100, 0xFFFFFFFFLL, p_m_PathIndex->m_Value);
          p_m_vPosition = v150;
          p_m_vFilteredPosition = v130;
          p_m_FilteredAngles = v120;
          v32 = v178->m_Value;
          p_m_vFilteredVelocity = v110;
          v13 = v140;
        }
        p_m_flTrackpadOrJoystickAnalogValueY->m_Value = v32;
      }
      ++v12;
      v8 += 104;
      v6 = (v6 + 104);
      p_tick_count += 26;
      p_m_flTrackpadOrJoystickAnalogValueY += 26;
      v178 += 26;
      p_m_PathIndex += 52;
      v181 += 52;
      p_m_flTrackpadOrJoystickAnalogValueX += 26;
      v176 += 26;
      p_m_flGripAnalogValue += 26;
      v175 += 26;
      p_m_flTriggerAnalogValue += 26;
      v177 += 26;
      v172 += 52;
      v171 += 52;
      v166 += 52;
      p_random_seed += 26;
      p_impulse += 104;
      p_upmove += 26;
      p_z += 26;
    }
    while ( v12 != 4 );
    v3 = move;
    v5 = buf;
    move->hmd_middle_eye_local.x = from->hmd_middle_eye_local.x;
    move->hmd_middle_eye_local.y = from->hmd_middle_eye_local.y;
    move->hmd_middle_eye_local.z = from->hmd_middle_eye_local.z;
    move->hmd_viewangles_local.x = from->hmd_viewangles_local.x;
    move->hmd_viewangles_local.y = from->hmd_viewangles_local.y;
    move->hmd_viewangles_local.z = from->hmd_viewangles_local.z;
  }
  m_iCurBit = v5->m_iCurBit;
  if ( v5->m_nDataBits - m_iCurBit <= 0 )
  {
    bf_read::SetOverflowFlag(v5);
    goto LABEL_31;
  }
  v34 = *&v5->m_pData[4 * (m_iCurBit >> 5)];
  v5->m_iCurBit = m_iCurBit + 1;
  if ( !_bittest(&v34, m_iCurBit) )
  {
LABEL_31:
    v3->command_number = from->command_number + 1;
    goto LABEL_32;
  }
  v3->command_number = bf_read::ReadVarInt64(v5);
LABEL_32:
  v35 = v5->m_iCurBit;
  if ( v5->m_nDataBits - v35 <= 0 )
  {
    bf_read::SetOverflowFlag(v5);
  }
  else
  {
    v36 = *&v5->m_pData[4 * (v35 >> 5)];
    v5->m_iCurBit = v35 + 1;
    if ( _bittest(&v36, v35) )
    {
      v3->tick_count = bf_read::ReadVarInt64(v5);
      goto LABEL_35;
    }
  }
  v3->tick_count = from->tick_count + 1;
LABEL_35:
  m_nDataBits = v5->m_nDataBits;
  v38 = v5->m_iCurBit;
  if ( m_nDataBits - v38 <= 0 )
  {
    bf_read::SetOverflowFlag(v5);
    m_nDataBits = v5->m_nDataBits;
    v40 = v5->m_iCurBit;
  }
  else
  {
    v39 = *&v5->m_pData[4 * (v38 >> 5)];
    v40 = v38 + 1;
    v5->m_iCurBit = v38 + 1;
    if ( _bittest(&v39, v38) )
    {
      v3->viewangles.x = bf_read::ReadFloat(v5);
      m_nDataBits = v5->m_nDataBits;
      v40 = v5->m_iCurBit;
    }
  }
  if ( m_nDataBits - v40 <= 0 )
  {
    bf_read::SetOverflowFlag(v5);
    m_nDataBits = v5->m_nDataBits;
    v42 = v5->m_iCurBit;
  }
  else
  {
    v41 = *&v5->m_pData[4 * (v40 >> 5)];
    v42 = v40 + 1;
    v5->m_iCurBit = v40 + 1;
    if ( _bittest(&v41, v40) )
    {
      v3->viewangles.y = bf_read::ReadFloat(v5);
      m_nDataBits = v5->m_nDataBits;
      v42 = v5->m_iCurBit;
    }
  }
  if ( m_nDataBits - v42 <= 0 )
  {
    bf_read::SetOverflowFlag(v5);
    m_nDataBits = v5->m_nDataBits;
    v44 = v5->m_iCurBit;
  }
  else
  {
    v43 = *&v5->m_pData[4 * (v42 >> 5)];
    v44 = v42 + 1;
    v5->m_iCurBit = v42 + 1;
    if ( _bittest(&v43, v42) )
    {
      v3->viewangles.z = bf_read::ReadFloat(v5);
      m_nDataBits = v5->m_nDataBits;
      v44 = v5->m_iCurBit;
    }
  }
  if ( m_nDataBits - v44 <= 0 )
  {
    bf_read::SetOverflowFlag(v5);
    m_nDataBits = v5->m_nDataBits;
    v46 = v5->m_iCurBit;
  }
  else
  {
    v45 = *&v5->m_pData[4 * (v44 >> 5)];
    v46 = v44 + 1;
    v5->m_iCurBit = v44 + 1;
    if ( _bittest(&v45, v44) )
    {
      v3->forwardmove = bf_read::ReadFloat(v5);
      m_nDataBits = v5->m_nDataBits;
      v46 = v5->m_iCurBit;
    }
  }
  if ( m_nDataBits - v46 <= 0 )
  {
    bf_read::SetOverflowFlag(v5);
    m_nDataBits = v5->m_nDataBits;
    v48 = v5->m_iCurBit;
  }
  else
  {
    v47 = *&v5->m_pData[4 * (v46 >> 5)];
    v48 = v46 + 1;
    v5->m_iCurBit = v46 + 1;
    if ( _bittest(&v47, v46) )
    {
      v3->sidemove = bf_read::ReadFloat(v5);
      m_nDataBits = v5->m_nDataBits;
      v48 = v5->m_iCurBit;
    }
  }
  if ( m_nDataBits - v48 <= 0 )
  {
    bf_read::SetOverflowFlag(v5);
    m_nDataBits = v5->m_nDataBits;
    v50 = v5->m_iCurBit;
  }
  else
  {
    v49 = *&v5->m_pData[4 * (v48 >> 5)];
    v50 = v48 + 1;
    v5->m_iCurBit = v48 + 1;
    if ( _bittest(&v49, v48) )
    {
      v3->upmove = bf_read::ReadFloat(v5);
      m_nDataBits = v5->m_nDataBits;
      v50 = v5->m_iCurBit;
    }
  }
  if ( m_nDataBits - v50 <= 0 )
  {
    bf_read::SetOverflowFlag(v5);
    m_nDataBits = v5->m_nDataBits;
    v52 = v5->m_iCurBit;
  }
  else
  {
    v51 = *&v5->m_pData[4 * (v50 >> 5)];
    v52 = v50 + 1;
    v5->m_iCurBit = v50 + 1;
    if ( _bittest(&v51, v50) )
    {
      v3->buttons = bf_read::ReadVarInt64(v5);
      m_nDataBits = v5->m_nDataBits;
      v52 = v5->m_iCurBit;
    }
  }
  if ( m_nDataBits - v52 <= 0 )
  {
    bf_read::SetOverflowFlag(v5);
    m_nDataBits = v5->m_nDataBits;
    v54 = v5->m_iCurBit;
  }
  else
  {
    v53 = *&v5->m_pData[4 * (v52 >> 5)];
    v54 = v52 + 1;
    v5->m_iCurBit = v52 + 1;
    if ( _bittest(&v53, v52) )
    {
      v3->impulse = bf_read::ReadVarInt64(v5);
      m_nDataBits = v5->m_nDataBits;
      v54 = v5->m_iCurBit;
    }
  }
  if ( m_nDataBits - v54 <= 0 )
  {
    bf_read::SetOverflowFlag(v5);
    m_nDataBits = v5->m_nDataBits;
    v56 = v5->m_iCurBit;
  }
  else
  {
    v55 = *&v5->m_pData[4 * (v54 >> 5)];
    v56 = v54 + 1;
    v5->m_iCurBit = v54 + 1;
    if ( _bittest(&v55, v54) )
    {
      bf_read::ReadBitVec3Coord(v5, &v3->crosshairtrace);
      m_nDataBits = v5->m_nDataBits;
      v56 = v5->m_iCurBit;
    }
  }
  if ( m_nDataBits - v56 <= 0 )
  {
    bf_read::SetOverflowFlag(v5);
    m_nDataBits = v5->m_nDataBits;
    v59 = v5->m_iCurBit;
  }
  else
  {
    m_pData = v5->m_pData;
    v58 = *&v5->m_pData[4 * (v56 >> 5)];
    v59 = v56 + 1;
    v5->m_iCurBit = v56 + 1;
    if ( _bittest(&v58, v56) )
    {
      if ( m_nDataBits - v59 <= 13 )
      {
        v5->m_iCurBit = m_nDataBits;
        bf_read::SetOverflowFlag(v5);
        v60 = 0;
      }
      else
      {
        v5->m_iCurBit = v56 + 15;
        v60 = ((*&m_pData[4 * (v59 >> 5)] >> (v59 & 0x1F)) | (*&m_pData[4 * ((v56 + 14) >> 5)] << (32 - (v59 & 0x1F))))
            & 0x3FFF;
      }
      v3->weaponselect = v60;
      m_nDataBits = v5->m_nDataBits;
      v59 = v5->m_iCurBit;
    }
  }
  if ( m_nDataBits - v59 <= 0 )
  {
    bf_read::SetOverflowFlag(v5);
    m_nDataBits = v5->m_nDataBits;
    v62 = v5->m_iCurBit;
  }
  else
  {
    v61 = v5->m_pData;
    v62 = v59 + 1;
    v63 = *&v5->m_pData[4 * (v59 >> 5)];
    v5->m_iCurBit = v59 + 1;
    if ( _bittest(&v63, v59) )
    {
      if ( m_nDataBits - v62 <= 13 )
      {
        v5->m_iCurBit = m_nDataBits;
        bf_read::SetOverflowFlag(v5);
        v64 = 0;
      }
      else
      {
        v5->m_iCurBit = v59 + 15;
        v64 = ((*&v61[4 * (v62 >> 5)] >> (v62 & 0x1F)) | (*&v61[4 * ((v59 + 14) >> 5)] << (32 - (v62 & 0x1F)))) & 0x3FFF;
      }
      v3->weaponsubtype = v64;
      m_nDataBits = v5->m_nDataBits;
      v62 = v5->m_iCurBit;
    }
  }
  if ( m_nDataBits - v62 <= 0 )
    goto LABEL_177;
  v65 = *&v5->m_pData[4 * (v62 >> 5)];
  v5->m_iCurBit = v62 + 1;
  if ( _bittest(&v65, v62) )
  {
    v3->weaponselect = bf_read::ReadVarInt64(v5);
    v108 = v5->m_iCurBit;
    if ( v5->m_nDataBits - v108 <= 0 )
    {
LABEL_177:
      bf_read::SetOverflowFlag(v5);
    }
    else
    {
      v109 = *&v5->m_pData[4 * (v108 >> 5)];
      v5->m_iCurBit = v108 + 1;
      if ( _bittest(&v109, v108) )
        v3->weaponsubtype = bf_read::ReadVarInt64(v5);
    }
  }
  v3->random_seed = MD5_PseudoRandom(v3->command_number) & 0x7FFFFFFF;
  v66 = v5->m_nDataBits;
  v67 = v5->m_iCurBit;
  if ( v66 - v67 <= 0 )
  {
    bf_read::SetOverflowFlag(v5);
    v66 = v5->m_nDataBits;
    v69 = v5->m_iCurBit;
  }
  else
  {
    v68 = *&v5->m_pData[4 * (v67 >> 5)];
    v69 = v67 + 1;
    v5->m_iCurBit = v67 + 1;
    if ( _bittest(&v68, v67) )
    {
      v3->mousedx = bf_read::ReadVarInt64(v5);
      v66 = v5->m_nDataBits;
      v69 = v5->m_iCurBit;
    }
  }
  if ( v66 - v69 <= 0 )
  {
    bf_read::SetOverflowFlag(v5);
    v66 = v5->m_nDataBits;
    v71 = v5->m_iCurBit;
  }
  else
  {
    v70 = *&v5->m_pData[4 * (v69 >> 5)];
    v71 = v69 + 1;
    v5->m_iCurBit = v69 + 1;
    if ( _bittest(&v70, v69) )
    {
      v3->mousedy = bf_read::ReadVarInt64(v5);
      v66 = v5->m_nDataBits;
      v71 = v5->m_iCurBit;
    }
  }
  if ( v66 - v71 <= 0 )
  {
    bf_read::SetOverflowFlag(v5);
    v66 = v5->m_nDataBits;
    v74 = v5->m_iCurBit;
  }
  else
  {
    v72 = v5->m_pData;
    v73 = *&v5->m_pData[4 * (v71 >> 5)];
    v74 = v71 + 1;
    v5->m_iCurBit = v71 + 1;
    if ( _bittest(&v73, v71) )
    {
      if ( v66 - v74 <= 15 )
      {
        v5->m_iCurBit = v66;
        bf_read::SetOverflowFlag(v5);
        LOWORD(v75) = 0;
      }
      else
      {
        v5->m_iCurBit = v71 + 17;
        v75 = (*&v72[4 * ((v71 + 16) >> 5)] << (32 - (v74 & 0x1F))) | (*&v72[4 * (v74 >> 5)] >> (v74 & 0x1F));
      }
      v3->cameraposition[0] = v75;
      v76 = v5->m_iCurBit;
      if ( v5->m_nDataBits - v76 <= 15 )
      {
        v5->m_iCurBit = v5->m_nDataBits;
        bf_read::SetOverflowFlag(v5);
        LOWORD(v78) = 0;
      }
      else
      {
        v77 = v5->m_pData;
        v5->m_iCurBit = v76 + 16;
        v78 = (*&v77[4 * ((v76 + 15) >> 5)] << (32 - (v76 & 0x1F))) | (*&v77[4 * (v76 >> 5)] >> (v76 & 0x1F));
      }
      v3->cameraposition[1] = v78;
      v66 = v5->m_nDataBits;
      v74 = v5->m_iCurBit;
    }
  }
  if ( v66 - v74 <= 0 )
  {
    bf_read::SetOverflowFlag(v5);
    v66 = v5->m_nDataBits;
    v80 = v5->m_iCurBit;
  }
  else
  {
    v79 = v5->m_pData;
    v80 = v74 + 1;
    v81 = *&v5->m_pData[4 * (v74 >> 5)];
    v5->m_iCurBit = v74 + 1;
    if ( _bittest(&v81, v74) )
    {
      if ( v66 - v80 <= 7 )
      {
        v5->m_iCurBit = v66;
        bf_read::SetOverflowFlag(v5);
        LOBYTE(v82) = 0;
      }
      else
      {
        v5->m_iCurBit = v74 + 9;
        v82 = (*&v79[4 * ((v74 + 8) >> 5)] << (32 - (v80 & 0x1F))) | (*&v79[4 * (v80 >> 5)] >> (v80 & 0x1F));
      }
      v3->clickbehavior = v82;
      v66 = v5->m_nDataBits;
      v80 = v5->m_iCurBit;
    }
  }
  if ( v66 - v80 <= 0 )
  {
    bf_read::SetOverflowFlag(v5);
    v66 = v5->m_nDataBits;
    v85 = v5->m_iCurBit;
  }
  else
  {
    v83 = v5->m_pData;
    v84 = *&v5->m_pData[4 * (v80 >> 5)];
    v85 = v80 + 1;
    v5->m_iCurBit = v80 + 1;
    if ( _bittest(&v84, v80) )
    {
      if ( v66 - v85 <= 7 )
      {
        v5->m_iCurBit = v66;
        bf_read::SetOverflowFlag(v5);
        LOBYTE(v86) = 0;
      }
      else
      {
        v5->m_iCurBit = v80 + 9;
        v86 = (*&v83[4 * ((v80 + 8) >> 5)] << (32 - (v85 & 0x1F))) | (*&v83[4 * (v85 >> 5)] >> (v85 & 0x1F));
      }
      v3->statspanel = v86;
      v66 = v5->m_nDataBits;
      v85 = v5->m_iCurBit;
    }
  }
  if ( v66 - v85 <= 0 )
  {
    bf_read::SetOverflowFlag(v5);
    v66 = v5->m_nDataBits;
    v88 = v5->m_iCurBit;
  }
  else
  {
    v87 = v5->m_pData;
    v88 = v85 + 1;
    v89 = *&v5->m_pData[4 * (v85 >> 5)];
    v5->m_iCurBit = v85 + 1;
    if ( _bittest(&v89, v85) )
    {
      if ( v66 - v88 <= 7 )
      {
        v5->m_iCurBit = v66;
        bf_read::SetOverflowFlag(v5);
        LOBYTE(v90) = 0;
      }
      else
      {
        v5->m_iCurBit = v85 + 9;
        v90 = (*&v87[4 * ((v85 + 8) >> 5)] << (32 - (v88 & 0x1F))) | (*&v87[4 * (v88 >> 5)] >> (v88 & 0x1F));
      }
      v3->shoppanel = v90;
      v66 = v5->m_nDataBits;
      v88 = v5->m_iCurBit;
    }
  }
  if ( v66 - v88 <= 0 )
  {
    bf_read::SetOverflowFlag(v5);
    v66 = v5->m_nDataBits;
    v93 = v5->m_iCurBit;
  }
  else
  {
    v91 = v5->m_pData;
    v92 = *&v5->m_pData[4 * (v88 >> 5)];
    v93 = v88 + 1;
    v5->m_iCurBit = v88 + 1;
    if ( _bittest(&v92, v88) )
    {
      if ( v66 - v93 <= 7 )
      {
        v5->m_iCurBit = v66;
        bf_read::SetOverflowFlag(v5);
        LOBYTE(v94) = 0;
      }
      else
      {
        v5->m_iCurBit = v88 + 9;
        v94 = (*&v91[4 * ((v88 + 8) >> 5)] << (32 - (v93 & 0x1F))) | (*&v91[4 * (v93 >> 5)] >> (v93 & 0x1F));
      }
      v3->stats_dropdown = v94;
      v66 = v5->m_nDataBits;
      v93 = v5->m_iCurBit;
    }
  }
  if ( v66 - v93 <= 0 )
  {
    bf_read::SetOverflowFlag(v5);
  }
  else
  {
    v95 = v5->m_pData;
    v96 = v93 + 1;
    v97 = *&v5->m_pData[4 * (v93 >> 5)];
    v5->m_iCurBit = v93 + 1;
    if ( _bittest(&v97, v93) )
    {
      if ( v66 - v96 <= 7 )
      {
        v5->m_iCurBit = v66;
        bf_read::SetOverflowFlag(v5);
        LOBYTE(v98) = 0;
      }
      else
      {
        v5->m_iCurBit = v93 + 9;
        v98 = (*&v95[4 * ((v93 + 8) >> 5)] << (32 - (v96 & 0x1F))) | (*&v95[4 * (v96 >> 5)] >> (v96 & 0x1F));
      }
      v3->stats_dropdown_sort = v98;
    }
  }
}


