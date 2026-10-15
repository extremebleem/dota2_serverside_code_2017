
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_keyvalues3_textwriter.cpp  (line 0, @0x0000000001a6ad90, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_keyvalues3_textwriter_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// KV3FlagToText  (line 22, @0x0000000003138330, libserver.so)
const char *__fastcall KV3FlagToText(KeyValues3Flag_t nFlag)
{
  const char *result; // rax

  result = 0;
  if ( nFlag == KeyValues3Flag_t::KEYVALUES3_FLAG_RESOURCE_REFERENCE )
    return "resource";
  return result;
}


// KV3FlagFromText  (line 36, @0x0000000003138350, libserver.so)
// calls: V_stricmp_fast
// callers: CLoadKV3FromText::ReadValue
KeyValues3Flag_t __fastcall KV3FlagFromText(const char *pStr)
{
  return V_stricmp_fast(pStr, "resource") == 0;
}


// SaveKV3Text_R  (line 115, @0x0000000003138370, libserver.so)  // inlines: CUtlString, EnableTabs, IsArrayOfTerseType, IsTerseType, KV3FlagToText, PopTab, PushTab, SetPtr, StripTrailingZeros, operator char const*, operator=, ~CUtlString
// calls: KeyValues3::GetAllFlags, CUtlBuffer::Printf, KeyValues3::HasFlag, KeyValues3::GetType, KeyValues3::GetMemberCount, CUtlBuffer::PutString, KeyValues3::GetMemberNameEscaped, CUtlString::Get, KeyValues3::GetMember, CUtlString::FreeMemoryBlock, KeyValues3::GetDouble, V_sprintf_safe<512ul> (26 total)
// callers: SaveKV3Text
// strings: "\"\"\"\n", "\\\"\"\"", "true", "false", "\n#[", "\n[" (7 total)
// globals: jpt_3138462
bool __fastcall SaveKV3Text_R(
        const KeyValues3 *pData,
        CUtlString *pOutErrorMessage,
        CUtlBuffer *pDestBuffer,
        bool bAfterEquals)
{
  int v6; // r14d
  KeyValues3Flag_t v7; // r12
  char v8; // r15
  const char *v9; // rdx
  int i; // r12d
  const char *v11; // rax
  const KeyValues3 *Member; // rax
  char HasFlag; // r14
  double Double; // xmm0_8
  char v16; // dl
  char *v17; // rcx
  char *v18; // rax
  bool v19; // zf
  char *v20; // rcx
  const char *StringRaw; // rax
  char *m_pString; // r13
  const char *v23; // rax
  int64 Int64; // rax
  uint64 Uint64; // rax
  bool Bool; // al
  const char *v27; // rdx
  int BinaryBlobSize; // r12d
  int v29; // r15d
  int v30; // esi
  uint8 BinaryBlobByte; // al
  int v32; // r12d
  bool v33; // r15
  int v34; // r12d
  const KeyValues3 *v35; // rax
  const KeyValues3 *ArrayElement; // rax
  int v37; // eax
  int m_nTab; // eax
  const char *v39; // r12
  CUtlCharConversion *CStringCharConversion; // rax
  char v42; // [rsp+13h] [rbp-26Dh]
  int MemberCount; // [rsp+14h] [rbp-26Ch]
  int ArrayElementCount; // [rsp+14h] [rbp-26Ch]
  CUtlString multilineString; // [rsp+20h] [rbp-260h] BYREF
  CUtlString memberName; // [rsp+30h] [rbp-250h] BYREF
  char pStr[512]; // [rsp+40h] [rbp-240h] BYREF
  unsigned __int64 v49; // [rsp+248h] [rbp-38h]

  v49 = __readfsqword(0x28u);
  if ( (KeyValues3::GetAllFlags(pData) & 0xFFFB) != 0 )
  {
    v6 = 3;
    v7 = KeyValues3Flag_t::KEYVALUES3_FLAG_RESOURCE_REFERENCE;
    v8 = 1;
    do
    {
      if ( KeyValues3::HasFlag(pData, v7) )
      {
        if ( v8 == 0 )
          CUtlBuffer::Printf(pDestBuffer, "+");
        v9 = 0;
        if ( v7 == KeyValues3Flag_t::KEYVALUES3_FLAG_RESOURCE_REFERENCE )
          v9 = "resource";
        v8 = 0;
        CUtlBuffer::Printf(pDestBuffer, "%s", v9);
      }
      v7 *= 2;
      --v6;
    }
    while ( v6 != 0 );
    CUtlBuffer::Printf(pDestBuffer, ":");
  }
  switch ( KeyValues3::GetType(pData) )
  {
    case KeyValues3Type_t::KEYVALUES3_TYPE_NULL:
      CUtlBuffer::Printf(pDestBuffer, "null");
      return 1;
    case KeyValues3Type_t::KEYVALUES3_TYPE_BOOL:
      HasFlag = 1;
      Bool = KeyValues3::GetBool(pData);
      v27 = "true";
      if ( !Bool )
        v27 = "false";
      CUtlBuffer::Printf(pDestBuffer, "%s", v27);
      return HasFlag;
    case KeyValues3Type_t::KEYVALUES3_TYPE_INT64:
      HasFlag = 1;
      Int64 = KeyValues3::GetInt64(pData);
      CUtlBuffer::Printf(pDestBuffer, "%lld", Int64);
      return HasFlag;
    case KeyValues3Type_t::KEYVALUES3_TYPE_UINT64:
      HasFlag = 1;
      Uint64 = KeyValues3::GetUint64(pData);
      CUtlBuffer::Printf(pDestBuffer, "%llu", Uint64);
      return HasFlag;
    case KeyValues3Type_t::KEYVALUES3_TYPE_DOUBLE:
      Double = KeyValues3::GetDouble(pData);
      V_sprintf_safe<512ul>(pStr, "%f", Double);
      v16 = pStr[0];
      v17 = 0;
      v18 = pStr;
      if ( pStr[0] != 0 )
      {
        while ( 1 )
        {
          v19 = v16 == 46;
          v16 = v18[1];
          if ( v19 )
            v17 = v18;
          if ( v16 == 0 )
            break;
          ++v18;
        }
        if ( v17 != 0 )
        {
          v20 = v17 + 1;
          if ( v18 > v20 && *v18 == 48 )
          {
            do
              *v18-- = 0;
            while ( v20 != v18 && *v18 == 48 );
          }
        }
      }
      HasFlag = 1;
      CUtlBuffer::PutString(pDestBuffer, pStr);
      return HasFlag;
    case KeyValues3Type_t::KEYVALUES3_TYPE_STRING:
      HasFlag = KeyValues3::HasFlag(pData, KeyValues3Flag_t::KEYVALUES3_FLAG_MULTILINE_STRING);
      if ( HasFlag != 0 )
      {
        pDestBuffer->m_Flags |= 0x10u;
        CUtlBuffer::Printf(pDestBuffer, "\"\"\"\n");
        StringRaw = KeyValues3::GetStringRaw(pData, 0);
        multilineString.m_pString = 0;
        CUtlString::Set(&multilineString, StringRaw);
        CUtlString::Replace(&memberName, &multilineString, "\"\"\"", "\\\"\"\"", 0);
        m_pString = memberName.m_pString;
        if ( multilineString.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&multilineString);
        multilineString.m_pString = m_pString;
        v23 = CUtlString::Get(&multilineString);
        CUtlBuffer::PutString(pDestBuffer, v23);
        CUtlBuffer::Printf(pDestBuffer, "\n\"\"\"");
        pDestBuffer->m_Flags &= ~0x10u;
        if ( multilineString.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&multilineString);
      }
      else
      {
        HasFlag = 1;
        v39 = KeyValues3::GetStringRaw(pData, 0);
        CStringCharConversion = GetCStringCharConversion();
        CUtlBuffer::PutDelimitedString(pDestBuffer, CStringCharConversion, v39);
      }
      return HasFlag;
    case KeyValues3Type_t::KEYVALUES3_TYPE_BINARY_BLOB:
      BinaryBlobSize = KeyValues3::GetBinaryBlobSize(pData);
      if ( BinaryBlobSize > 32 && bAfterEquals )
      {
        CUtlBuffer::Printf(pDestBuffer, "\n#[");
      }
      else
      {
        CUtlBuffer::Printf(pDestBuffer, "#[ ");
        if ( BinaryBlobSize <= 32 )
        {
LABEL_49:
          v29 = 0;
          if ( BinaryBlobSize > 0 )
          {
            while ( 1 )
            {
              v30 = v29++;
              BinaryBlobByte = KeyValues3::GetBinaryBlobByte(pData, v30);
              CUtlBuffer::Printf(pDestBuffer, "%02X", BinaryBlobByte);
              if ( v29 == BinaryBlobSize )
                break;
              if ( v29 > 0 )
              {
                if ( (v29 & 0x1F) != 0 )
                  CUtlBuffer::Printf(pDestBuffer, " ");
                else
                  CUtlBuffer::Printf(pDestBuffer, "\n");
              }
            }
          }
          if ( BinaryBlobSize <= 32 )
          {
            CUtlBuffer::Printf(pDestBuffer, " ");
            goto LABEL_80;
          }
          goto LABEL_82;
        }
      }
      CUtlBuffer::PutString(pDestBuffer, "\n");
      ++pDestBuffer->m_nTab;
      goto LABEL_49;
    case KeyValues3Type_t::KEYVALUES3_TYPE_ARRAY:
      v32 = 0;
      ArrayElementCount = KeyValues3::GetArrayElementCount(pData);
      while ( 2 )
      {
        if ( v32 < KeyValues3::GetArrayElementCount(pData) )
        {
          ArrayElement = KeyValues3::GetArrayElement(pData, v32);
          if ( (KeyValues3::GetType(ArrayElement) - 1) <= 4u )
          {
            ++v32;
            continue;
          }
          v33 = 0;
          v42 = 0;
        }
        else
        {
          v42 = 1;
          v33 = ArrayElementCount <= 4;
          if ( ArrayElementCount <= 4 )
            goto LABEL_57;
        }
        break;
      }
      if ( bAfterEquals )
      {
        CUtlBuffer::Printf(pDestBuffer, "\n[");
        goto LABEL_73;
      }
LABEL_57:
      CUtlBuffer::Printf(pDestBuffer, "[ ");
      if ( !v33 )
      {
LABEL_73:
        CUtlBuffer::PutString(pDestBuffer, "\n");
        ++pDestBuffer->m_nTab;
      }
      v34 = 0;
      if ( ArrayElementCount <= 0 )
        goto LABEL_81;
      while ( 2 )
      {
        v35 = KeyValues3::GetArrayElement(pData, v34);
        HasFlag = SaveKV3Text_R(v35, pOutErrorMessage, pDestBuffer, 0);
        if ( HasFlag != 0 )
        {
          if ( !v33 || ArrayElementCount - 1 != v34 )
            CUtlBuffer::Printf(pDestBuffer, ",");
          if ( ++v34 != ArrayElementCount )
          {
            if ( v34 > 0 )
            {
              if ( v42 != 0 && (v34 & 3) != 0 )
                CUtlBuffer::Printf(pDestBuffer, " ");
              else
                CUtlBuffer::Printf(pDestBuffer, "\n");
            }
            continue;
          }
LABEL_81:
          if ( v33 )
          {
            CUtlBuffer::PutString(pDestBuffer, " ");
          }
          else
          {
LABEL_82:
            CUtlBuffer::Printf(pDestBuffer, "\n");
            v37 = 0;
            if ( pDestBuffer->m_nTab - 1 >= 0 )
              v37 = pDestBuffer->m_nTab - 1;
            pDestBuffer->m_nTab = v37;
          }
LABEL_80:
          HasFlag = 1;
          CUtlBuffer::PutString(pDestBuffer, "]");
        }
        break;
      }
      return HasFlag;
    case KeyValues3Type_t::KEYVALUES3_TYPE_TABLE:
      if ( bAfterEquals )
        CUtlBuffer::PutString(pDestBuffer, "\n");
      CUtlBuffer::Printf(pDestBuffer, "{\n");
      memberName.m_pString = 0;
      ++pDestBuffer->m_nTab;
      MemberCount = KeyValues3::GetMemberCount(pData);
      if ( MemberCount > 0 )
      {
        for ( i = 0; i != MemberCount; ++i )
        {
          KeyValues3::GetMemberNameEscaped(pData, i, &memberName);
          v11 = CUtlString::Get(&memberName);
          CUtlBuffer::PutString(pDestBuffer, v11);
          CUtlBuffer::PutString(pDestBuffer, " = ");
          Member = KeyValues3::GetMember(pData, i);
          HasFlag = SaveKV3Text_R(Member, pOutErrorMessage, pDestBuffer, 1);
          if ( HasFlag == 0 )
          {
            if ( memberName.m_pString != 0 )
              CUtlString::FreeMemoryBlock(&memberName);
            return HasFlag;
          }
          CUtlBuffer::PutString(pDestBuffer, "\n");
        }
      }
      --pDestBuffer->m_nTab;
      m_nTab = 0;
      if ( pDestBuffer->m_nTab >= 0 )
        m_nTab = pDestBuffer->m_nTab;
      pDestBuffer->m_nTab = m_nTab;
      CUtlBuffer::PutString(pDestBuffer, "}");
      if ( memberName.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&memberName);
      return 1;
    default:
      return 0;
  }
}


// SaveKV3Text  (line 350, @0x0000000003138b80, libserver.so)  // inlines: CUUIDString, Get, Plat_CompareUUIDs, operator!=
// calls: CUtlString::operator=, memcmp, Plat_UUIDToString, CUtlBuffer::Printf, SaveKV3Text_R, __stack_chk_fail
// callers: SaveKV3
// strings: "Cannot save KV3 text to a non-text buffer!", "Unsupported text encoding id.", "00000000-0000-0000-0000-000000000000", "<!-- kv3 encoding:%s:version{%s} format:%s:version{%s} -->\n"
// globals: KV3_ENCODING_TEXT
bool __fastcall SaveKV3Text(
        const V_uuid_t *const encodingId,
        const V_uuid_t *const formatId,
        const KeyValues3 *pRoot,
        CUtlString *pOutErrorMessage,
        CUtlBuffer *pDestBuffer)
{
  bool v7; // r12
  CUUIDString *p_encodingStr; // rcx
  CUUIDString *p_formatStr; // r9
  CUUIDString encodingStr; // [rsp+10h] [rbp-90h] BYREF
  CUUIDString formatStr; // [rsp+40h] [rbp-60h] BYREF
  unsigned __int64 v16; // [rsp+68h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  if ( (pDestBuffer->m_Flags & 1) != 0 )
  {
    if ( memcmp(encodingId, &KV3_ENCODING_TEXT, 0x10u) == 0 )
    {
      Plat_UUIDToString(encodingId, &encodingStr, 37);
      Plat_UUIDToString(formatId, &formatStr, 37);
      p_encodingStr = "00000000-0000-0000-0000-000000000000";
      p_formatStr = &formatStr;
      if ( formatStr.szString[0] == 0 )
        p_formatStr = "00000000-0000-0000-0000-000000000000";
      if ( encodingStr.szString[0] != 0 )
        p_encodingStr = &encodingStr;
      CUtlBuffer::Printf(
        pDestBuffer,
        "<!-- kv3 encoding:%s:version{%s} format:%s:version{%s} -->\n",
        "text",
        p_encodingStr,
        "generic",
        p_formatStr);
      return SaveKV3Text_R(pRoot, pOutErrorMessage, pDestBuffer, 0);
    }
    else
    {
      v7 = 0;
      if ( pOutErrorMessage != 0 )
        CUtlString::operator=(pOutErrorMessage, "Unsupported text encoding id.");
    }
  }
  else
  {
    v7 = 0;
    if ( pOutErrorMessage != 0 )
      CUtlString::operator=(pOutErrorMessage, "Cannot save KV3 text to a non-text buffer!");
  }
  return v7;
}


