// Reconstructed from DWARF by pahole; not original source.

// src/kv3lib/keyvalues3_binaryreader.cpp:26
struct KV3BinaryLoadContext_t {
	const char * * m_ppStrings;  // +0x10
	KeyValues3LowercaseHash_t * m_pStringHashes;  // +0x18
	int m_nNumStrings;  // +0x20
	bool m_bRelyOnBufferForStorage;  // +0x24
	KV3BinaryLoadContext_t();
	const char * String(int);
	KeyValues3LowercaseHash_t StringHash(int);

	// sizeof = 40
};

// src/kv3lib/keyvalues3_binaryreader.cpp:113
class CKV3ExternalDataWriter {
	void AimAtExternalString(KeyValues3 *, const char *);
	void AimAtExternalBinaryBlob(KeyValues3 *, const uint8 *, int);
	KeyValues3 * FindOrCreateMemberAimedAtExternalName(KeyValues3 *, const char *, KeyValues3LowercaseHash_t);

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_keyvalues3_binaryreader.cpp  (line 0, @0x0000000001a6adc0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_keyvalues3_binaryreader_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// ReadTypeAndFlags  (line 95, @0x0000000003138d90, libserver.so)  // inlines: GetBytesRemaining, GetType<short unsigned int>, GetTypeBin<unsigned char>, GetTypeText<short unsigned int>, GetUnsignedChar, GetUnsignedShort, PeekGet, StringToNumber<short unsigned int>, operator[]
// calls: CUtlBuffer::CheckArbitraryPeekGet, CUtlString::operator=, CUtlBuffer::CheckGet, KeyValues3::SetAllFlags, V_strtoui64
// callers: LoadKV3Binary_R
// strings: "Unexpected end of file"
KeyValues3BinaryType_t __fastcall ReadTypeAndFlags(KV3BinaryLoadContext_t *const loadContext, KeyValues3 *pTarget)
{
  CUtlBuffer *m_pSrcBuffer; // rbx
  CUtlBuffer *v5; // rdi
  char v6; // r14
  KeyValues3BinaryType_t result; // eax
  bool v8; // dl
  int m_Get; // edx
  char v10; // dl
  CUtlBuffer *v11; // rbx
  CUtlBuffer *v12; // rdi
  bool v13; // al
  KeyValues3Flag_t v14; // si
  int v15; // r15d
  char v16; // al
  bool v17; // al
  int v18; // edx
  int v19; // r12d
  unsigned __int8 v20; // al
  int nIncrement; // [rsp+4h] [rbp-3Ch] BYREF
  _QWORD v22[7]; // [rsp+8h] [rbp-38h] BYREF

  m_pSrcBuffer = loadContext->m_pSrcBuffer;
  if ( m_pSrcBuffer->m_nMaxPut - m_pSrcBuffer->m_Get > 0 )
  {
    if ( (m_pSrcBuffer->m_Flags & 1) != 0 )
    {
      v5 = loadContext->m_pSrcBuffer;
      nIncrement = 128;
      v6 = 0;
      if ( !CUtlBuffer::CheckArbitraryPeekGet(v5, 0, &nIncrement) )
        return v6 & 0x7F;
      v22[0] = &m_pSrcBuffer->m_Memory.m_pMemory[m_pSrcBuffer->m_Get - m_pSrcBuffer->m_nOffset];
      v15 = v22[0];
      v16 = V_strtoui64(v22[0], v22, 10);
      if ( LODWORD(v22[0]) != v15 )
        m_pSrcBuffer->m_Get += LODWORD(v22[0]) - v15;
      v10 = v16;
      v6 = v16;
    }
    else
    {
      v8 = CUtlBuffer::CheckGet(loadContext->m_pSrcBuffer, 1);
      result = KeyValues3BinaryType_t::KEYVALUES3_BINARY_TYPE_INVALID;
      if ( !v8 )
        return result;
      m_Get = m_pSrcBuffer->m_Get;
      v6 = m_pSrcBuffer->m_Memory.m_pMemory[m_Get - m_pSrcBuffer->m_nOffset];
      m_pSrcBuffer->m_Get = m_Get + 1;
      v10 = v6;
    }
    if ( v10 >= 0 )
      return v6 & 0x7F;
    v11 = loadContext->m_pSrcBuffer;
    if ( v11->m_nMaxPut - v11->m_Get > 0 )
    {
      if ( (v11->m_Flags & 1) != 0 )
      {
        v12 = loadContext->m_pSrcBuffer;
        nIncrement = 128;
        v13 = CUtlBuffer::CheckArbitraryPeekGet(v12, 0, &nIncrement);
        v14 = KeyValues3Flag_t::KEYVALUES3_FLAG_NONE;
        if ( v13 )
        {
          v22[0] = &v11->m_Memory.m_pMemory[v11->m_Get - v11->m_nOffset];
          v19 = v22[0];
          v20 = V_strtoui64(v22[0], v22, 10);
          if ( LODWORD(v22[0]) != v19 )
            v11->m_Get += LODWORD(v22[0]) - v19;
          v14 = v20;
        }
      }
      else
      {
        v17 = CUtlBuffer::CheckGet(loadContext->m_pSrcBuffer, 1);
        v14 = KeyValues3Flag_t::KEYVALUES3_FLAG_NONE;
        if ( v17 )
        {
          v18 = v11->m_Get;
          v14 = v11->m_Memory.m_pMemory[v18 - v11->m_nOffset];
          v11->m_Get = v18 + 1;
        }
      }
      KeyValues3::SetAllFlags(pTarget, v14);
      return v6 & 0x7F;
    }
  }
  if ( loadContext->m_pOutErrorMessage != 0 )
    CUtlString::operator=(loadContext->m_pOutErrorMessage, "Unexpected end of file");
  return KeyValues3BinaryType_t::KEYVALUES3_BINARY_TYPE_INVALID;
}


// LoadKV3Binary_R  (line 133, @0x0000000003138f40, libserver.so)  // inlines: AimAtExternalBinaryBlob, AimAtExternalString, FindOrCreateMemberAimedAtExternalName, GetBytesRemaining, GetDouble, GetInt, GetInt64, GetType<double>, GetType<int>, GetType<long long int>, GetType<long long unsigned int>, GetType<short unsigned int>, GetTypeBin<double>, GetTypeBin<int>, GetTypeBin<long long int>, GetTypeBin<long long unsigned int>, GetTypeBin<unsigned char>, GetTypeText<double>, GetTypeText<int>, GetTypeText<long long int>, GetTypeText<long long unsigned int>, GetTypeText<short unsigned int>, GetUnsignedChar, GetUnsignedInt64, GetUnsignedShort, KV3MakeLowerHash, LowLevelByteSwap<double>, LowLevelByteSwap<int>, LowLevelByteSwap<long long int>, LowLevelByteSwap<long long unsigned int>, MakeStringToken, PeekGet, String, StringHash, StringToNumber<double>, StringToNumber<int>, StringToNumber<long long int>, StringToNumber<long long unsigned int>, StringToNumber<short unsigned int>, SwapBufferToTargetEndian<double>, SwapBufferToTargetEndian<int>, SwapBufferToTargetEndian<long long int>, SwapBufferToTargetEndian<long long unsigned int>, V_memcpy, memcpy, operator[]
// calls: ReadTypeAndFlags, CUtlString::operator=, CUtlBuffer::CheckArbitraryPeekGet, KeyValues3::SetToEmptyTable, KeyValues3::Internal_FindOrCreateMemberAimedAtExternalName, KeyValues3::FindOrCreateMember, KeyValues3::SetToNull, KeyValues3::SetDouble, KeyValues3::Internal_AimAtExternalString, CUtlBuffer::SeekGet, KeyValues3::Internal_AimAtExternalBinaryBlob, KeyValues3::SetArrayElementCount (25 total)
// callers: LoadKV3BinaryUncompressed
// strings: "Unexpected end of file", "Unrecognized type '%d'"
// globals: jpt_3138F79
bool __fastcall LoadKV3Binary_R(KV3BinaryLoadContext_t *const loadContext, KeyValues3 *pTarget)
{
  KeyValues3BinaryType_t TypeAndFlags; // eax
  CUtlBuffer *v5; // r13
  CUtlBuffer *v7; // r13
  CUtlBuffer *v8; // rdi
  int v9; // r14d
  CUtlBuffer *v10; // r15
  int v11; // r13d
  int v12; // ecx
  const char *v13; // rsi
  uint32 v14; // edx
  __int64 v15; // r15
  const char *v16; // r11
  KeyValues3LowercaseHash_t *v17; // rcx
  KeyValues3 *MemberAimedAtExternalName; // rax
  bool v19; // al
  int v20; // r8d
  const char *v21; // rsi
  uint32 m_nHashCode; // edx
  int m_nNumStrings; // ecx
  __int64 v24; // r15
  const char *v25; // r11
  KeyValues3LowercaseHash_t *v26; // rcx
  CUtlBuffer *v27; // r13
  CUtlBuffer *v28; // rdi
  bool v29; // al
  double v30; // xmm1_8
  double v31; // xmm0_8
  CUtlBuffer *v32; // r13
  CUtlBuffer *v33; // rdi
  bool v34; // al
  __int64 v35; // rdx
  const char *v36; // rsi
  CUtlBuffer *v37; // r13
  CUtlBuffer *v38; // rdi
  int v39; // r14d
  CUtlBuffer *v40; // rdi
  int v41; // eax
  const uint8 *v42; // r13
  CUtlBuffer *v43; // r13
  CUtlBuffer *v44; // rdi
  int v45; // r14d
  int v46; // r13d
  KeyValues3 *ArrayElement; // rax
  CUtlBuffer *v48; // r13
  CUtlBuffer *v49; // rdi
  bool v50; // al
  uint64 v51; // rsi
  CUtlBuffer *m_pSrcBuffer; // r13
  CUtlBuffer *v53; // rdi
  bool v54; // al
  _BOOL8 v55; // rsi
  CUtlBuffer *v56; // rdi
  bool v57; // al
  int64 v58; // rsi
  int v59; // edx
  __int64 v60; // rax
  bool v61; // zf
  int *v62; // rax
  bool v63; // al
  int m_Get; // edx
  int v65; // eax
  const char *v66; // rsi
  uint32 v67; // eax
  __int64 v68; // r10
  uint32 v69; // eax
  __int64 v70; // r10
  int v71; // ecx
  int v72; // edx
  int v73; // eax
  int v74; // edx
  bool v75; // al
  int v76; // ecx
  bool v77; // al
  int v78; // eax
  bool v79; // al
  int v80; // ecx
  int v81; // r15d
  int v82; // r15d
  int v83; // r14d
  int v84; // r15d
  int v85; // ebx
  char v86; // al
  int v87; // ebx
  int v88; // ebx
  int v89; // ebx
  const char *v90; // rsi
  const char *v91; // rsi
  int *v92; // rdx
  int *v93; // rax
  int *v94; // rax
  int *p_nMemberCount; // rax
  int *v96; // rsi
  __int64 v97; // rdi
  __int64 i; // rax
  char v99; // r10
  _BYTE *v100; // r9
  __int64 v101; // rcx
  int *v102; // rsi
  __int64 v103; // rdi
  char v104; // r10
  _BYTE *v105; // r9
  __int64 v106; // rax
  __int64 v107; // rsi
  char v108; // r8
  _BYTE *v109; // rdi
  int v110; // [rsp+4h] [rbp-7Ch]
  int v111; // [rsp+4h] [rbp-7Ch]
  __int64 v112; // [rsp+8h] [rbp-78h]
  __int64 v113; // [rsp+8h] [rbp-78h]
  int v114; // [rsp+20h] [rbp-60h]
  const char *v115; // [rsp+20h] [rbp-60h]
  const char *v116; // [rsp+20h] [rbp-60h]
  uint32 v117; // [rsp+20h] [rbp-60h]
  uint32 v118; // [rsp+20h] [rbp-60h]
  bool m_bRelyOnBufferForStorage; // [rsp+28h] [rbp-58h]
  int nMemberCount; // [rsp+3Ch] [rbp-44h] BYREF
  int nIncrement[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v122[7]; // [rsp+48h] [rbp-38h] BYREF

  TypeAndFlags = ReadTypeAndFlags(loadContext, pTarget);
  if ( TypeAndFlags != KeyValues3BinaryType_t::KEYVALUES3_BINARY_TYPE_INVALID )
  {
    switch ( TypeAndFlags )
    {
      case KeyValues3BinaryType_t::KEYVALUES3_BINARY_TYPE_NULL:
        KeyValues3::SetToNull(pTarget);
        return 1;
      case KeyValues3BinaryType_t::KEYVALUES3_BINARY_TYPE_BOOL:
        m_pSrcBuffer = loadContext->m_pSrcBuffer;
        if ( m_pSrcBuffer->m_nMaxPut == m_pSrcBuffer->m_Get )
          goto LABEL_4;
        if ( (m_pSrcBuffer->m_Flags & 1) != 0 )
        {
          v53 = loadContext->m_pSrcBuffer;
          nIncrement[0] = 128;
          v54 = CUtlBuffer::CheckArbitraryPeekGet(v53, 0, nIncrement);
          LOBYTE(v55) = 0;
          if ( v54 )
          {
            v122[0] = &m_pSrcBuffer->m_Memory.m_pMemory[m_pSrcBuffer->m_Get - m_pSrcBuffer->m_nOffset];
            v85 = v122[0];
            v86 = V_strtoui64(v122[0], v122, 10);
            if ( LODWORD(v122[0]) != v85 )
              m_pSrcBuffer->m_Get += LODWORD(v122[0]) - v85;
            v55 = v86 != 0;
          }
        }
        else
        {
          v63 = CUtlBuffer::CheckGet(loadContext->m_pSrcBuffer, 1);
          LOBYTE(v55) = 0;
          if ( v63 )
          {
            m_Get = m_pSrcBuffer->m_Get;
            v65 = m_Get + 1;
            LOBYTE(m_Get) = m_pSrcBuffer->m_Memory.m_pMemory[m_Get - m_pSrcBuffer->m_nOffset];
            m_pSrcBuffer->m_Get = v65;
            v55 = m_Get != 0;
          }
        }
        KeyValues3::SetBool(pTarget, v55);
        return 1;
      case KeyValues3BinaryType_t::KEYVALUES3_BINARY_TYPE_INT64:
        v5 = loadContext->m_pSrcBuffer;
        if ( (v5->m_nMaxPut - v5->m_Get) <= 7 )
          goto LABEL_4;
        if ( (v5->m_Flags & 1) != 0 )
        {
          v56 = loadContext->m_pSrcBuffer;
          nMemberCount = 128;
          v57 = CUtlBuffer::CheckArbitraryPeekGet(v56, 0, &nMemberCount);
          v58 = 0;
          if ( v57 )
          {
            v122[0] = &v5->m_Memory.m_pMemory[v5->m_Get - v5->m_nOffset];
            v87 = v122[0];
            v58 = V_strtoi64(v122[0], v122, 10);
            *nIncrement = v58;
            if ( LODWORD(v122[0]) != v87 )
              v5->m_Get += LODWORD(v122[0]) - v87;
          }
        }
        else
        {
          v77 = CUtlBuffer::CheckGet(loadContext->m_pSrcBuffer, 8);
          v58 = 0;
          if ( v77 )
          {
            if ( (*&v5->m_Byteswap & 1) != 0 )
            {
              v78 = v5->m_Get;
              v101 = 8;
              v102 = &v5->m_Memory.m_pMemory[v78 - v5->m_nOffset];
              if ( v102 == 0 )
                v102 = nIncrement;
              v103 = 0;
              v122[0] = *nIncrement;
              do
              {
                v104 = *(v102 + v101 - 1);
                v105 = v122 + v103;
                v103 = 9 - v101--;
                *v105 = v104;
              }
              while ( v101 != 0 );
              v58 = v122[0];
            }
            else
            {
              v78 = v5->m_Get;
              v58 = *&v5->m_Memory.m_pMemory[v78 - v5->m_nOffset];
            }
            v5->m_Get = v78 + 8;
          }
        }
        KeyValues3::SetInt64(pTarget, v58);
        return 1;
      case KeyValues3BinaryType_t::KEYVALUES3_BINARY_TYPE_UINT64:
        v48 = loadContext->m_pSrcBuffer;
        if ( (v48->m_nMaxPut - v48->m_Get) <= 7 )
          goto LABEL_4;
        if ( (v48->m_Flags & 1) != 0 )
        {
          v49 = loadContext->m_pSrcBuffer;
          nMemberCount = 128;
          v50 = CUtlBuffer::CheckArbitraryPeekGet(v49, 0, &nMemberCount);
          v51 = 0;
          if ( v50 )
          {
            v122[0] = &v48->m_Memory.m_pMemory[v48->m_Get - v48->m_nOffset];
            v89 = v122[0];
            v51 = V_strtoui64(v122[0], v122, 10);
            *nIncrement = v51;
            if ( LODWORD(v122[0]) != v89 )
              v48->m_Get += LODWORD(v122[0]) - v89;
          }
        }
        else
        {
          v75 = CUtlBuffer::CheckGet(loadContext->m_pSrcBuffer, 8);
          v51 = 0;
          if ( v75 )
          {
            if ( (*&v48->m_Byteswap & 1) != 0 )
            {
              v76 = v48->m_Get;
              v96 = &v48->m_Memory.m_pMemory[v76 - v48->m_nOffset];
              if ( v96 == 0 )
                v96 = nIncrement;
              v97 = 0;
              v122[0] = *nIncrement;
              for ( i = 8; i != 0; --i )
              {
                v99 = *(v96 + i - 1);
                v100 = v122 + v97;
                v97 = 9 - i;
                *v100 = v99;
              }
              v51 = v122[0];
            }
            else
            {
              v76 = v48->m_Get;
              v51 = *&v48->m_Memory.m_pMemory[v76 - v48->m_nOffset];
            }
            v48->m_Get = v76 + 8;
          }
        }
        KeyValues3::SetUint64(pTarget, v51);
        return 1;
      case KeyValues3BinaryType_t::KEYVALUES3_BINARY_TYPE_DOUBLE:
        v27 = loadContext->m_pSrcBuffer;
        if ( (v27->m_nMaxPut - v27->m_Get) <= 7 )
          goto LABEL_4;
        if ( (v27->m_Flags & 1) != 0 )
        {
          v28 = loadContext->m_pSrcBuffer;
          nMemberCount = 128;
          v29 = CUtlBuffer::CheckArbitraryPeekGet(v28, 0, &nMemberCount);
          v31 = 0.0;
          if ( v29 )
          {
            v122[0] = &v27->m_Memory.m_pMemory[v27->m_Get - v27->m_nOffset];
            v88 = v122[0];
            v31 = V_strtod(v122[0], v122);
            *nIncrement = v31;
            if ( LODWORD(v122[0]) != v88 )
              v27->m_Get += LODWORD(v122[0]) - v88;
          }
        }
        else
        {
          v79 = CUtlBuffer::CheckGet(loadContext->m_pSrcBuffer, 8);
          v31 = 0.0;
          if ( v79 )
          {
            v80 = v27->m_Get;
            v31 = *&v27->m_Memory.m_pMemory[v80 - v27->m_nOffset];
            *nIncrement = v31;
            if ( (*&v27->m_Byteswap & 1) != 0 )
            {
              *v122 = v31;
              v106 = 8;
              v107 = 0;
              do
              {
                v108 = *(&nMemberCount + v106 + 3);
                v109 = v122 + v107;
                v107 = 9 - v106--;
                *v109 = v108;
              }
              while ( v106 != 0 );
              v31 = *v122;
            }
            v27->m_Get = v80 + 8;
          }
        }
        KeyValues3::SetDouble(pTarget, v31, v30);
        return 1;
      case KeyValues3BinaryType_t::KEYVALUES3_BINARY_TYPE_STRING:
        v32 = loadContext->m_pSrcBuffer;
        if ( (v32->m_nMaxPut - v32->m_Get) <= 3 )
          goto LABEL_4;
        if ( (v32->m_Flags & 1) != 0 )
        {
          v33 = loadContext->m_pSrcBuffer;
          nIncrement[0] = 128;
          v34 = CUtlBuffer::CheckArbitraryPeekGet(v33, 0, nIncrement);
          v35 = 0;
          if ( v34 )
          {
            LOBYTE(v35) = 10;
            v122[0] = &v32->m_Memory.m_pMemory[v32->m_Get - v32->m_nOffset];
            v83 = v122[0];
            nMemberCount = V_strtoi64(v122[0], v122, v35);
            v35 = nMemberCount;
            if ( LODWORD(v122[0]) != v83 )
              v32->m_Get += LODWORD(v122[0]) - v83;
          }
        }
        else
        {
          if ( !CUtlBuffer::CheckGet(loadContext->m_pSrcBuffer, 4) )
          {
            v35 = 0;
            if ( loadContext->m_bRelyOnBufferForStorage )
              goto LABEL_47;
            goto LABEL_94;
          }
          if ( (*&v32->m_Byteswap & 1) != 0 )
          {
            v71 = v32->m_Get;
            p_nMemberCount = &v32->m_Memory.m_pMemory[v71 - v32->m_nOffset];
            if ( p_nMemberCount == 0 )
              p_nMemberCount = &nMemberCount;
            LODWORD(v122[0]) = nMemberCount;
            LOBYTE(v122[0]) = *(p_nMemberCount + 3);
            BYTE1(v122[0]) = *(p_nMemberCount + 2);
            BYTE2(v122[0]) = *(p_nMemberCount + 1);
            BYTE3(v122[0]) = *p_nMemberCount;
            v35 = SLODWORD(v122[0]);
          }
          else
          {
            v71 = v32->m_Get;
            v35 = *&v32->m_Memory.m_pMemory[v71 - v32->m_nOffset];
          }
          v32->m_Get = v71 + 4;
        }
        if ( loadContext->m_bRelyOnBufferForStorage )
        {
          v36 = "";
          if ( v35 < 0 )
          {
LABEL_49:
            KeyValues3::Internal_AimAtExternalString(pTarget, v36);
            return 1;
          }
LABEL_47:
          v36 = "";
          if ( loadContext->m_nNumStrings > v35 )
            v36 = loadContext->m_ppStrings[v35];
          goto LABEL_49;
        }
        if ( v35 >= 0 )
        {
LABEL_94:
          if ( loadContext->m_nNumStrings > v35 )
          {
            v66 = loadContext->m_ppStrings[v35];
            goto LABEL_96;
          }
        }
        v66 = "";
LABEL_96:
        KeyValues3::SetString(pTarget, v66);
        return 1;
      case KeyValues3BinaryType_t::KEYVALUES3_BINARY_TYPE_BINARY_BLOB:
        v37 = loadContext->m_pSrcBuffer;
        if ( (v37->m_nMaxPut - v37->m_Get) <= 3 )
          goto LABEL_4;
        if ( (v37->m_Flags & 1) != 0 )
        {
          v38 = loadContext->m_pSrcBuffer;
          nIncrement[0] = 128;
          v39 = 0;
          if ( CUtlBuffer::CheckArbitraryPeekGet(v38, 0, nIncrement) )
          {
            v122[0] = &v37->m_Memory.m_pMemory[v37->m_Get - v37->m_nOffset];
            v82 = v122[0];
            nMemberCount = V_strtoi64(v122[0], v122, 10);
            v39 = nMemberCount;
            if ( LODWORD(v122[0]) != v82 )
              v37->m_Get += LODWORD(v122[0]) - v82;
          }
        }
        else
        {
          v39 = 0;
          if ( CUtlBuffer::CheckGet(loadContext->m_pSrcBuffer, 4) )
          {
            if ( (*&v37->m_Byteswap & 1) != 0 )
            {
              v73 = v37->m_Get;
              v92 = &v37->m_Memory.m_pMemory[v73 - v37->m_nOffset];
              if ( v92 == 0 )
                v92 = &nMemberCount;
              LODWORD(v122[0]) = nMemberCount;
              LOBYTE(v122[0]) = *(v92 + 3);
              BYTE1(v122[0]) = *(v92 + 2);
              BYTE2(v122[0]) = *(v92 + 1);
              BYTE3(v122[0]) = *v92;
              v39 = v122[0];
            }
            else
            {
              v73 = v37->m_Get;
              v39 = *&v37->m_Memory.m_pMemory[v73 - v37->m_nOffset];
            }
            v37->m_Get = v73 + 4;
          }
        }
        v40 = loadContext->m_pSrcBuffer;
        v41 = v40->m_Get;
        if ( v40->m_nMaxPut - v41 < v39 )
          goto LABEL_4;
        v42 = &v40->m_Memory.m_pMemory[v41 - v40->m_nOffset];
        CUtlBuffer::SeekGet(v40, CUtlBuffer::SeekType_t::SEEK_CURRENT, v39);
        if ( loadContext->m_bRelyOnBufferForStorage )
        {
          m_bRelyOnBufferForStorage = loadContext->m_bRelyOnBufferForStorage;
          KeyValues3::Internal_AimAtExternalBinaryBlob(pTarget, v42, v39);
          return m_bRelyOnBufferForStorage;
        }
        else
        {
          KeyValues3::SetToBinaryBlob(pTarget, v42, v39);
          return 1;
        }
      case KeyValues3BinaryType_t::KEYVALUES3_BINARY_TYPE_ARRAY:
        v43 = loadContext->m_pSrcBuffer;
        if ( (v43->m_nMaxPut - v43->m_Get) <= 3 )
          goto LABEL_4;
        if ( (v43->m_Flags & 1) != 0 )
        {
          v44 = loadContext->m_pSrcBuffer;
          nIncrement[0] = 128;
          v45 = 0;
          if ( CUtlBuffer::CheckArbitraryPeekGet(v44, 0, nIncrement) )
          {
            v122[0] = &v43->m_Memory.m_pMemory[v43->m_Get - v43->m_nOffset];
            v81 = v122[0];
            nMemberCount = V_strtoi64(v122[0], v122, 10);
            v45 = nMemberCount;
            if ( LODWORD(v122[0]) != v81 )
              v43->m_Get += LODWORD(v122[0]) - v81;
          }
        }
        else
        {
          if ( !CUtlBuffer::CheckGet(loadContext->m_pSrcBuffer, 4) )
          {
            KeyValues3::SetArrayElementCount(pTarget, 0);
            return 1;
          }
          if ( (*&v43->m_Byteswap & 1) != 0 )
          {
            v72 = v43->m_Get;
            v93 = &v43->m_Memory.m_pMemory[v72 - v43->m_nOffset];
            if ( v93 == 0 )
              v93 = &nMemberCount;
            LODWORD(v122[0]) = nMemberCount;
            LOBYTE(v122[0]) = *(v93 + 3);
            BYTE1(v122[0]) = *(v93 + 2);
            BYTE2(v122[0]) = *(v93 + 1);
            BYTE3(v122[0]) = *v93;
            v45 = v122[0];
          }
          else
          {
            v72 = v43->m_Get;
            v45 = *&v43->m_Memory.m_pMemory[v72 - v43->m_nOffset];
          }
          v43->m_Get = v72 + 4;
        }
        KeyValues3::SetArrayElementCount(pTarget, v45);
        if ( v45 <= 0 )
          return 1;
        v46 = 0;
        while ( 1 )
        {
          ArrayElement = KeyValues3::GetArrayElement(pTarget, v46);
          if ( !LoadKV3Binary_R(loadContext, ArrayElement) )
            break;
          if ( ++v46 == v45 )
            return 1;
        }
        return 0;
      case KeyValues3BinaryType_t::KEYVALUES3_BINARY_TYPE_TABLE:
        v7 = loadContext->m_pSrcBuffer;
        if ( (v7->m_nMaxPut - v7->m_Get) <= 3 )
          goto LABEL_4;
        if ( (v7->m_Flags & 1) != 0 )
        {
          v8 = loadContext->m_pSrcBuffer;
          nIncrement[0] = 128;
          v9 = 0;
          if ( CUtlBuffer::CheckArbitraryPeekGet(v8, 0, nIncrement) )
          {
            v122[0] = &v7->m_Memory.m_pMemory[v7->m_Get - v7->m_nOffset];
            v84 = v122[0];
            nMemberCount = V_strtoi64(v122[0], v122, 10);
            v9 = nMemberCount;
            if ( LODWORD(v122[0]) != v84 )
              v7->m_Get += LODWORD(v122[0]) - v84;
          }
        }
        else
        {
          if ( !CUtlBuffer::CheckGet(loadContext->m_pSrcBuffer, 4) )
          {
            KeyValues3::SetToEmptyTable(pTarget);
            return 1;
          }
          if ( (*&v7->m_Byteswap & 1) != 0 )
          {
            v74 = v7->m_Get;
            v94 = &v7->m_Memory.m_pMemory[v74 - v7->m_nOffset];
            if ( v94 == 0 )
              v94 = &nMemberCount;
            LODWORD(v122[0]) = nMemberCount;
            LOBYTE(v122[0]) = *(v94 + 3);
            BYTE1(v122[0]) = *(v94 + 2);
            BYTE2(v122[0]) = *(v94 + 1);
            BYTE3(v122[0]) = *v94;
            v9 = v122[0];
          }
          else
          {
            v74 = v7->m_Get;
            v9 = *&v7->m_Memory.m_pMemory[v74 - v7->m_nOffset];
          }
          v7->m_Get = v74 + 4;
        }
        KeyValues3::SetToEmptyTable(pTarget);
        if ( v9 <= 0 )
          return 1;
        v10 = loadContext->m_pSrcBuffer;
        v11 = 0;
        while ( (v10->m_nMaxPut - v10->m_Get) > 3 )
        {
          if ( (v10->m_Flags & 1) != 0 )
          {
            nIncrement[0] = 128;
            v19 = CUtlBuffer::CheckArbitraryPeekGet(v10, 0, nIncrement);
            v20 = 0;
            if ( v19 )
            {
              v122[0] = &v10->m_Memory.m_pMemory[v10->m_Get - v10->m_nOffset];
              v114 = v122[0];
              nMemberCount = V_strtoi64(v122[0], v122, 10);
              v20 = nMemberCount;
              if ( LODWORD(v122[0]) != v114 )
                v10->m_Get += LODWORD(v122[0]) - v114;
            }
          }
          else
          {
            if ( !CUtlBuffer::CheckGet(v10, 4) )
            {
              v20 = 0;
              if ( loadContext->m_bRelyOnBufferForStorage )
                goto LABEL_14;
LABEL_29:
              m_nNumStrings = loadContext->m_nNumStrings;
              v21 = "";
              m_nHashCode = 0;
              if ( m_nNumStrings > v20 )
              {
                v24 = v20;
                m_nHashCode = loadContext->m_pStringHashes[v20].m_nHashCode;
                if ( m_nHashCode == 0 )
                {
                  v25 = loadContext->m_ppStrings[v20];
                  v26 = &loadContext->m_pStringHashes[v20];
                  if ( v25 != 0 && *v25 != 0 )
                  {
                    v110 = v20;
                    v112 = 4LL * v20;
                    v115 = loadContext->m_ppStrings[v20];
                    v67 = MurmurHash2LowerCase(v115, 0x31415926u);
                    v68 = v112;
                    v20 = v110;
                    if ( g_bUpdateStringTokenDatabase )
                    {
                      v91 = v115;
                      v118 = v67;
                      RegisterStringToken(v67, v91, 0, 1);
                      v20 = v110;
                      v68 = v112;
                      v67 = v118;
                    }
                    m_nHashCode = v67;
                    v26 = (loadContext->m_pStringHashes + v68);
                  }
                  v26->m_nHashCode = m_nHashCode;
                  m_nNumStrings = loadContext->m_nNumStrings;
                }
                if ( m_nNumStrings <= v20 )
                  v21 = "";
                else
                  v21 = loadContext->m_ppStrings[v24];
              }
              goto LABEL_36;
            }
            if ( (*&v10->m_Byteswap & 1) != 0 )
            {
              v59 = v10->m_Get;
              v60 = v59 - v10->m_nOffset;
              v61 = &v10->m_Memory.m_pMemory[v60] == 0;
              v62 = &v10->m_Memory.m_pMemory[v60];
              LODWORD(v122[0]) = nMemberCount;
              if ( v61 )
                v62 = &nMemberCount;
              LOBYTE(v122[0]) = *(v62 + 3);
              BYTE1(v122[0]) = *(v62 + 2);
              BYTE2(v122[0]) = *(v62 + 1);
              BYTE3(v122[0]) = *v62;
              v20 = v122[0];
            }
            else
            {
              v59 = v10->m_Get;
              v20 = *&v10->m_Memory.m_pMemory[v59 - v10->m_nOffset];
            }
            v10->m_Get = v59 + 4;
          }
          if ( loadContext->m_bRelyOnBufferForStorage )
          {
            if ( v20 < 0 )
            {
              v13 = "";
              v14 = 0;
            }
            else
            {
LABEL_14:
              v12 = loadContext->m_nNumStrings;
              v13 = "";
              v14 = 0;
              if ( v20 < v12 )
              {
                v15 = v20;
                v14 = loadContext->m_pStringHashes[v20].m_nHashCode;
                if ( v14 == 0 )
                {
                  v16 = loadContext->m_ppStrings[v20];
                  v17 = &loadContext->m_pStringHashes[v20];
                  if ( v16 != 0 && *v16 != 0 )
                  {
                    v111 = v20;
                    v113 = 4LL * v20;
                    v116 = loadContext->m_ppStrings[v20];
                    v69 = MurmurHash2LowerCase(v116, 0x31415926u);
                    v70 = v113;
                    v20 = v111;
                    if ( g_bUpdateStringTokenDatabase )
                    {
                      v90 = v116;
                      v117 = v69;
                      RegisterStringToken(v69, v90, 0, 1);
                      v20 = v111;
                      v70 = v113;
                      v69 = v117;
                    }
                    v14 = v69;
                    v17 = (loadContext->m_pStringHashes + v70);
                  }
                  v17->m_nHashCode = v14;
                  v12 = loadContext->m_nNumStrings;
                }
                if ( v12 <= v20 )
                  v13 = "";
                else
                  v13 = loadContext->m_ppStrings[v15];
              }
            }
            MemberAimedAtExternalName = KeyValues3::Internal_FindOrCreateMemberAimedAtExternalName(pTarget, v13, v14);
            goto LABEL_22;
          }
          v21 = "";
          m_nHashCode = 0;
          if ( v20 >= 0 )
            goto LABEL_29;
LABEL_36:
          MemberAimedAtExternalName = KeyValues3::FindOrCreateMember(pTarget, v21, m_nHashCode);
LABEL_22:
          if ( !LoadKV3Binary_R(loadContext, MemberAimedAtExternalName) )
            return 0;
          if ( ++v11 == v9 )
            return 1;
          v10 = loadContext->m_pSrcBuffer;
        }
LABEL_4:
        if ( loadContext->m_pOutErrorMessage != 0 )
          CUtlString::operator=(loadContext->m_pOutErrorMessage, "Unexpected end of file");
        break;
      default:
        if ( loadContext->m_pOutErrorMessage == 0 )
          return 0;
        CUtlString::Format(loadContext->m_pOutErrorMessage, "Unrecognized type '%d'", TypeAndFlags);
        return 0;
    }
  }
  return 0;
}


// LoadKV3BinaryUncompressed  (line 274, @0x0000000003139d50, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, CopyConstruct<CUtlStringToken>, CopyConstruct<char const*>, Element, EnsureCapacity, GetBytesRemaining, GetInt, GetType<int>, GetType<unsigned int>, GetTypeBin<int>, GetTypeBin<unsigned int>, GetTypeText<int>, GetTypeText<unsigned int>, GetUnsignedInt, GrowMemory, IsExternallyAllocated, LowLevelByteSwap<int>, LowLevelByteSwap<unsigned int>, PeekGet, Purge, Purge_FixedGrowable, RemoveAll, StringToNumber<int>, StringToNumber<unsigned int>, SwapBufferToTargetEndian<int>, SwapBufferToTargetEndian<unsigned int>, V_memcpy, memcpy, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlBuffer::CheckArbitraryPeekGet, CUtlBuffer::PeekStringLength, CUtlBuffer::SeekGet, CUtlMemory<char const*, int>::Grow, CUtlMemory<CUtlStringToken, int>::Grow, CUtlBuffer::CheckGet, LoadKV3Binary_R, CUtlString::operator=, V_strtoi64, CUtlMemory<CUtlStringToken, int>::Purge, CUtlMemory<char const*, int>::Purge, memcpy (17 total)
// callers: LoadKV3Binary
// strings: "Unexpected end of file", "Invalid data."
bool __fastcall LoadKV3BinaryUncompressed(KV3BinaryLoadContext_t *const loadContext, KeyValues3 *pTarget)
{
  CUtlBuffer *m_pSrcBuffer; // rbx
  CUtlBuffer *v4; // rdi
  int v5; // r15d
  int i; // r14d
  const char **v7; // rax
  __int64 v8; // rbx
  int v9; // eax
  CUtlStringToken *v10; // rax
  int v11; // eax
  __int64 m_Size; // rbx
  unsigned __int8 *v13; // r12
  int v14; // eax
  bool KV3Binary_R; // bl
  CUtlBuffer *v16; // r12
  uint32 m_nGrowSize; // edx
  uint32 v18; // eax
  uint32 v19; // eax
  int v21; // r12d
  __int64 v22; // rax
  CUtlStringToken *v23; // rax
  CUtlBuffer *v24; // rdi
  int m_Get; // edx
  int v26; // edx
  int *v27; // rax
  int v28; // eax
  int *v29; // rax
  int v30; // r14d
  CUtlStringToken *m_pMemory; // r14
  CUtlStringToken *v32; // rax
  int v34; // [rsp+30h] [rbp-C80h] BYREF
  int nIncrement; // [rsp+34h] [rbp-C7Ch] BYREF
  unsigned __int8 *v36; // [rsp+38h] [rbp-C78h] BYREF
  CUtlVectorFixedGrowable<CUtlStringToken,256ul> stringHashes; // [rsp+40h] [rbp-C70h] BYREF
  CUtlVectorFixedGrowable<char const*,256ul> stringPtrs; // [rsp+460h] [rbp-850h] BYREF
  unsigned __int64 v39; // [rsp+C78h] [rbp-38h]

  v39 = __readfsqword(0x28u);
  m_pSrcBuffer = loadContext->m_pSrcBuffer;
  if ( (m_pSrcBuffer->m_Flags & 1) != 0 )
  {
    v4 = loadContext->m_pSrcBuffer;
    v5 = 0;
    nIncrement = 128;
    if ( CUtlBuffer::CheckArbitraryPeekGet(v4, 0, &nIncrement) )
    {
      v36 = &m_pSrcBuffer->m_Memory.m_pMemory[m_pSrcBuffer->m_Get - m_pSrcBuffer->m_nOffset];
      v21 = v36;
      v34 = V_strtoi64(v36, &v36, 10);
      v5 = v34;
      if ( v36 != v21 )
        m_pSrcBuffer->m_Get += v36 - v21;
    }
  }
  else
  {
    if ( !CUtlBuffer::CheckGet(loadContext->m_pSrcBuffer, 4) )
    {
      stringHashes.m_Size = 0;
      stringHashes.m_Memory.m_pMemory = &stringHashes.m_Memory.m_FixedMemory;
      stringHashes.m_Memory.m_nAllocationCount = 256;
      stringHashes.m_Memory.m_nGrowSize = 0x80000000;
      stringPtrs.m_Size = 0;
      stringPtrs.m_Memory.m_nAllocationCount = 256;
      stringPtrs.m_Memory.m_nGrowSize = 0x80000000;
      stringPtrs.m_Memory.m_pMemory = &stringPtrs.m_Memory.m_FixedMemory;
      goto LABEL_17;
    }
    if ( (*&m_pSrcBuffer->m_Byteswap & 1) != 0 )
    {
      m_Get = m_pSrcBuffer->m_Get;
      v29 = &m_pSrcBuffer->m_Memory.m_pMemory[m_Get - m_pSrcBuffer->m_nOffset];
      if ( v29 == 0 )
        v29 = &v34;
      LODWORD(v36) = v34;
      LOBYTE(v36) = *(v29 + 3);
      BYTE1(v36) = *(v29 + 2);
      BYTE2(v36) = *(v29 + 1);
      BYTE3(v36) = *v29;
      v5 = v36;
    }
    else
    {
      m_Get = m_pSrcBuffer->m_Get;
      v5 = *&m_pSrcBuffer->m_Memory.m_pMemory[m_Get - m_pSrcBuffer->m_nOffset];
    }
    m_pSrcBuffer->m_Get = m_Get + 4;
  }
  stringHashes.m_Size = 0;
  stringHashes.m_Memory.m_pMemory = &stringHashes.m_Memory.m_FixedMemory;
  stringHashes.m_Memory.m_nAllocationCount = 256;
  stringHashes.m_Memory.m_nGrowSize = 0x80000000;
  stringPtrs.m_Size = 0;
  stringPtrs.m_Memory.m_nAllocationCount = 256;
  stringPtrs.m_Memory.m_nGrowSize = 0x80000000;
  stringPtrs.m_Memory.m_pMemory = &stringPtrs.m_Memory.m_FixedMemory;
  if ( v5 > 256 )
  {
    stringPtrs.m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 8LL * v5);
    memcpy(
      stringPtrs.m_Memory.m_pMemory,
      &stringPtrs.m_Memory.m_FixedMemory,
      8LL * stringPtrs.m_Memory.m_nAllocationCount);
    stringPtrs.m_Memory.m_nAllocationCount = v5;
    stringPtrs.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
    if ( stringHashes.m_Memory.m_nAllocationCount < v5 && (stringHashes.m_Memory.m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (stringHashes.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = stringHashes.m_Memory.m_pMemory;
        v32 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v5);
        stringHashes.m_Memory.m_pMemory = v32;
        if ( m_pMemory != 0 )
          memcpy(v32, m_pMemory, 4LL * stringHashes.m_Memory.m_nAllocationCount);
        stringHashes.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v22 = *g_pMemAlloc;
        if ( stringHashes.m_Memory.m_pMemory != 0 )
          v23 = (*(v22 + 8))(g_pMemAlloc, stringHashes.m_Memory.m_pMemory, 4LL * v5);
        else
          v23 = (*v22)(g_pMemAlloc, 4LL * v5);
        stringHashes.m_Memory.m_pMemory = v23;
      }
      stringHashes.m_Memory.m_nAllocationCount = v5;
    }
  }
  if ( v5 > 0 )
  {
    for ( i = 0; i != v5; ++i )
    {
      m_Size = stringPtrs.m_Size;
      v13 = &loadContext->m_pSrcBuffer->m_Memory.m_pMemory[loadContext->m_pSrcBuffer->m_Get
                                                         - loadContext->m_pSrcBuffer->m_nOffset];
      v14 = stringPtrs.m_Size;
      if ( stringPtrs.m_Size == stringPtrs.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<char const*,int>::Grow(&stringPtrs.m_Memory, 1);
        v14 = stringPtrs.m_Size;
      }
      stringPtrs.m_Size = v14 + 1;
      v7 = &stringPtrs.m_Memory.m_pMemory[m_Size];
      if ( v7 != 0 )
        *v7 = v13;
      v8 = stringHashes.m_Size;
      v9 = stringHashes.m_Size;
      if ( stringHashes.m_Size == stringHashes.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CUtlStringToken,int>::Grow(&stringHashes.m_Memory, 1);
        v9 = stringHashes.m_Size;
      }
      stringHashes.m_Size = v9 + 1;
      v10 = &stringHashes.m_Memory.m_pMemory[v8];
      if ( v10 != 0 )
        v10->m_nHashCode = 0;
      v11 = CUtlBuffer::PeekStringLength(loadContext->m_pSrcBuffer);
      CUtlBuffer::SeekGet(loadContext->m_pSrcBuffer, CUtlBuffer::SeekType_t::SEEK_CURRENT, v11);
    }
  }
LABEL_17:
  loadContext->m_pStringHashes = stringHashes.m_Memory.m_pMemory;
  loadContext->m_ppStrings = stringPtrs.m_Memory.m_pMemory;
  loadContext->m_nNumStrings = stringPtrs.m_Size;
  KV3Binary_R = LoadKV3Binary_R(loadContext, pTarget);
  if ( !KV3Binary_R )
  {
LABEL_21:
    KV3Binary_R = 0;
    goto LABEL_22;
  }
  v16 = loadContext->m_pSrcBuffer;
  if ( (v16->m_nMaxPut - v16->m_Get) <= 3 )
  {
    if ( loadContext->m_pOutErrorMessage != 0 )
      CUtlString::operator=(loadContext->m_pOutErrorMessage, "Unexpected end of file");
    goto LABEL_21;
  }
  if ( (v16->m_Flags & 1) != 0 )
  {
    v24 = loadContext->m_pSrcBuffer;
    nIncrement = 128;
    if ( !CUtlBuffer::CheckArbitraryPeekGet(v24, 0, &nIncrement) )
      goto LABEL_50;
    v36 = &v16->m_Memory.m_pMemory[v16->m_Get - v16->m_nOffset];
    v30 = v36;
    v28 = V_strtoui64(v36, &v36, 10);
    v34 = v28;
    if ( v36 != v30 )
      v16->m_Get += v36 - v30;
  }
  else
  {
    if ( !CUtlBuffer::CheckGet(loadContext->m_pSrcBuffer, 4) )
      goto LABEL_50;
    if ( (*&v16->m_Byteswap & 1) != 0 )
    {
      v26 = v16->m_Get;
      v27 = &v16->m_Memory.m_pMemory[v26 - v16->m_nOffset];
      if ( v27 == 0 )
        v27 = &v34;
      LODWORD(v36) = v34;
      LOBYTE(v36) = *(v27 + 3);
      BYTE1(v36) = *(v27 + 2);
      BYTE2(v36) = *(v27 + 1);
      BYTE3(v36) = *v27;
      v28 = v36;
    }
    else
    {
      v26 = v16->m_Get;
      v28 = *&v16->m_Memory.m_pMemory[v26 - v16->m_nOffset];
    }
    v16->m_Get = v26 + 4;
  }
  if ( v28 != -1 )
  {
LABEL_50:
    if ( loadContext->m_pOutErrorMessage != 0 )
      CUtlString::operator=(loadContext->m_pOutErrorMessage, "Invalid data.");
    goto LABEL_21;
  }
LABEL_22:
  stringPtrs.m_Size = 0;
  if ( stringPtrs.m_Memory.m_nAllocationCount < 0 )
  {
    v18 = stringPtrs.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    m_nGrowSize = stringPtrs.m_Memory.m_nGrowSize;
    v18 = stringPtrs.m_Memory.m_nGrowSize & 0xC0000000;
    if ( stringPtrs.m_Memory.m_pMemory != &stringPtrs.m_Memory.m_FixedMemory )
    {
      if ( stringPtrs.m_Memory.m_pMemory != 0 && v18 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        m_nGrowSize = stringPtrs.m_Memory.m_nGrowSize;
      }
      stringPtrs.m_Memory.m_nAllocationCount = 256;
      stringPtrs.m_Memory.m_pMemory = &stringPtrs.m_Memory.m_FixedMemory;
      stringPtrs.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
      goto LABEL_28;
    }
  }
  if ( v18 == 0 )
    CUtlMemory<char const*,int>::Purge(&stringPtrs.m_Memory);
LABEL_28:
  stringHashes.m_Size = 0;
  v19 = stringHashes.m_Memory.m_nGrowSize & 0xC0000000;
  if ( stringHashes.m_Memory.m_nAllocationCount < 0
    || stringHashes.m_Memory.m_pMemory == &stringHashes.m_Memory.m_FixedMemory )
  {
    if ( v19 == 0 )
      CUtlMemory<CUtlStringToken,int>::Purge(&stringHashes.m_Memory);
  }
  else if ( stringHashes.m_Memory.m_pMemory != 0 && v19 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
  return KV3Binary_R;
}


// LooksLikeKV3BinaryData  (line 318, @0x0000000003139d30, libserver.so)
// callers: IsKV3Data, LoadKV3
bool __fastcall LooksLikeKV3BinaryData(void *pData, int nBufLen)
{
  bool result; // al

  result = 0;
  if ( nBufLen >= 4 )
    return *pData == &unk_3564B56;
  return result;
}


// LoadKV3Binary  (line 331, @0x000000000313a4c0, libserver.so)  // inlines: AddMultipleToTail, CUtlMemoryFixedGrowable, CUtlVectorBase, CUtlVectorFixedGrowable, Clear, CopyBuffer, EnsureCount, GetBytesRemaining, GetDecompressedSize, GetType<unsigned int>, GetTypeBin<unsigned int>, GetTypeText<unsigned int>, GetUnsignedInt, GrowMemory, GrowVector, InsertMultipleBefore, KV3BinaryLoadContext_t, LowLevelByteSwap<unsigned int>, PeekGet, PeekPut, Plat_CompareUUIDs, Purge, StringToNumber<unsigned int>, SwapBufferToTargetEndian<unsigned int>, V_memcpy, memcpy, operator!=, operator==, operator[], ~CUtlBuffer, ~CUtlMemory, ~CUtlVectorFixedGrowable
// calls: CUtlString::operator=, CUtlBuffer::CheckArbitraryPeekGet, CUtlBuffer::CheckGet, V_strtoui64, CUtlBuffer::Get, memcmp, CUtlBuffer::AddNullTermination, CUtlBuffer::Put, LoadKV3BinaryUncompressed, CUtlBuffer::EnsureCapacity, CBlockCompress::FastDecompress, CUtlBuffer::SeekPut (19 total)
// callers: LoadKV3
// strings: "Unexpected end of file", "Bad header: invalid binary marker", "Bad header: unrecognized encoding id", "Bad header: invalid compression header", "Bad header: unrecognized format id", "Decompression failure"
// globals: KV3_ENCODING_BINARY_UNCOMPRESSED, KV3_ENCODING_BINARY_BLOCK_COMPRESSED, KV3_FORMAT_GENERIC
bool __fastcall LoadKV3Binary(
        KeyValues3 *pRootTarget,
        CUtlString *pOutErrorMessage,
        CUtlBuffer *pSrcBuffer,
        CUtlBuffer *pLongTermScratchBuffer)
{
  int m_nMaxPut; // eax
  int v7; // eax
  int m_Get; // edx
  unsigned __int8 *v12; // rax
  int v13; // eax
  int m_pMemory; // r14d
  int v15; // edx
  int m_nOffset; // ecx
  unsigned __int8 *v17; // rax
  uint32 v18; // r14d
  int m_Put; // r12d
  unsigned __int8 *v20; // rbx
  uint32 v21; // eax
  bool v22; // al
  signed int s1; // [rsp+8h] [rbp-508h]
  bool s1a; // [rsp+8h] [rbp-508h]
  bool s1b; // [rsp+8h] [rbp-508h]
  int v26; // [rsp+18h] [rbp-4F8h] BYREF
  int nIncrement; // [rsp+1Ch] [rbp-4F4h] BYREF
  KV3BinaryLoadContext_t loadContext; // [rsp+20h] [rbp-4F0h] BYREF
  CUtlBuffer decompressedBuffer; // [rsp+50h] [rbp-4C0h] BYREF
  V_uuid_t encodingId; // [rsp+A0h] [rbp-470h] BYREF
  V_uuid_t formatId; // [rsp+B0h] [rbp-460h] BYREF
  CUtlVectorFixedGrowable<unsigned char,1024ul> decompressedMemory; // [rsp+C0h] [rbp-450h] BYREF
  unsigned __int64 v33; // [rsp+4D8h] [rbp-38h]

  v33 = __readfsqword(0x28u);
  m_nMaxPut = pSrcBuffer->m_nMaxPut;
  memset(&loadContext.m_ppStrings, 0, 21);
  loadContext.m_pOutErrorMessage = pOutErrorMessage;
  v7 = m_nMaxPut - pSrcBuffer->m_Get;
  loadContext.m_pSrcBuffer = pSrcBuffer;
  if ( v7 <= 3 )
  {
    if ( pOutErrorMessage != 0 )
      CUtlString::operator=(pOutErrorMessage, "Unexpected end of file");
    return 0;
  }
  if ( (pSrcBuffer->m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    if ( !CUtlBuffer::CheckArbitraryPeekGet(pSrcBuffer, 0, &nIncrement) )
    {
LABEL_7:
      CUtlString::operator=(pOutErrorMessage, "Bad header: invalid binary marker");
      return 0;
    }
    decompressedBuffer.m_Memory.m_pMemory = &pSrcBuffer->m_Memory.m_pMemory[pSrcBuffer->m_Get - pSrcBuffer->m_nOffset];
    m_pMemory = decompressedBuffer.m_Memory.m_pMemory;
    v13 = V_strtoui64(decompressedBuffer.m_Memory.m_pMemory, &decompressedBuffer, 10);
    v26 = v13;
    if ( LODWORD(decompressedBuffer.m_Memory.m_pMemory) != m_pMemory )
      pSrcBuffer->m_Get += LODWORD(decompressedBuffer.m_Memory.m_pMemory) - m_pMemory;
  }
  else
  {
    if ( !CUtlBuffer::CheckGet(pSrcBuffer, 4) )
      goto LABEL_7;
    if ( (*&pSrcBuffer->m_Byteswap & 1) != 0 )
    {
      m_Get = pSrcBuffer->m_Get;
      v12 = &pSrcBuffer->m_Memory.m_pMemory[m_Get - pSrcBuffer->m_nOffset];
      if ( v12 == 0 )
        v12 = &v26;
      LODWORD(decompressedBuffer.m_Memory.m_pMemory) = v26;
      LOBYTE(decompressedBuffer.m_Memory.m_pMemory) = v12[3];
      BYTE1(decompressedBuffer.m_Memory.m_pMemory) = v12[2];
      BYTE2(decompressedBuffer.m_Memory.m_pMemory) = v12[1];
      BYTE3(decompressedBuffer.m_Memory.m_pMemory) = *v12;
      v13 = decompressedBuffer.m_Memory.m_pMemory;
    }
    else
    {
      m_Get = pSrcBuffer->m_Get;
      v13 = *&pSrcBuffer->m_Memory.m_pMemory[m_Get - pSrcBuffer->m_nOffset];
    }
    pSrcBuffer->m_Get = m_Get + 4;
  }
  if ( v13 != &unk_3564B56 )
    goto LABEL_7;
  *encodingId.Data4 = 0;
  *formatId.Data4 = 0;
  *&encodingId.Data1 = 0;
  *&formatId.Data1 = 0;
  if ( (loadContext.m_pSrcBuffer->m_nMaxPut - loadContext.m_pSrcBuffer->m_Get) <= 7
    || (CUtlBuffer::Get(pSrcBuffer, &encodingId, 16),
        (loadContext.m_pSrcBuffer->m_nMaxPut - loadContext.m_pSrcBuffer->m_Get) <= 7) )
  {
    if ( loadContext.m_pOutErrorMessage == 0 )
      return 0;
    CUtlString::operator=(loadContext.m_pOutErrorMessage, "Unexpected end of file");
    return 0;
  }
  else
  {
    CUtlBuffer::Get(pSrcBuffer, &formatId, 16);
    if ( memcmp(&encodingId, &KV3_ENCODING_BINARY_UNCOMPRESSED, 0x10u) != 0
      && memcmp(&encodingId, &KV3_ENCODING_BINARY_BLOCK_COMPRESSED, 0x10u) != 0 )
    {
      CUtlString::operator=(pOutErrorMessage, "Bad header: unrecognized encoding id");
      return 0;
    }
    if ( memcmp(&formatId, &KV3_FORMAT_GENERIC, 0x10u) != 0 )
    {
      CUtlString::operator=(pOutErrorMessage, "Bad header: unrecognized format id");
      return 0;
    }
    if ( memcmp(&encodingId, &KV3_ENCODING_BINARY_BLOCK_COMPRESSED, 0x10u) != 0 )
    {
      if ( pLongTermScratchBuffer == 0 )
        return LoadKV3BinaryUncompressed(&loadContext, pRootTarget);
      if ( pLongTermScratchBuffer == pSrcBuffer )
      {
LABEL_34:
        loadContext.m_bRelyOnBufferForStorage = 1;
        return LoadKV3BinaryUncompressed(&loadContext, pRootTarget);
      }
      m_Put = pSrcBuffer->m_Put;
      v20 = pSrcBuffer->m_Memory.m_pMemory;
      pLongTermScratchBuffer->m_Get = 0;
      pLongTermScratchBuffer->m_Put = 0;
      pLongTermScratchBuffer->m_Error = 0;
      pLongTermScratchBuffer->m_nOffset = 0;
      pLongTermScratchBuffer->m_nMaxPut = -1;
      CUtlBuffer::AddNullTermination(pLongTermScratchBuffer);
      if ( m_Put != 0 )
        CUtlBuffer::Put(pLongTermScratchBuffer, v20, m_Put);
LABEL_33:
      loadContext.m_pSrcBuffer = pLongTermScratchBuffer;
      goto LABEL_34;
    }
    v15 = pSrcBuffer->m_Get;
    v18 = pSrcBuffer->m_nMaxPut - v15;
    if ( v18 <= 3
      || (v17 = pSrcBuffer->m_Memory.m_pMemory,
          m_nOffset = pSrcBuffer->m_nOffset,
          (s1 = (v17[v15 - m_nOffset + 3] << 24) & 0x7FFFFFFF
              | v17[v15 - m_nOffset]
              | (v17[v15 - m_nOffset + 2] << 16)
              | (v17[v15 - m_nOffset + 1] << 8)) == 0) )
    {
      CUtlString::operator=(pOutErrorMessage, "Bad header: invalid compression header");
      return 0;
    }
    if ( pLongTermScratchBuffer != 0 )
    {
      CUtlBuffer::EnsureCapacity(pLongTermScratchBuffer, pLongTermScratchBuffer->m_Put + s1);
      v21 = CBlockCompress::FastDecompress(
              &pSrcBuffer->m_Memory.m_pMemory[pSrcBuffer->m_Get - pSrcBuffer->m_nOffset],
              v18,
              &pLongTermScratchBuffer->m_Memory.m_pMemory[pLongTermScratchBuffer->m_Put
                                                        - pLongTermScratchBuffer->m_nOffset],
              s1);
      if ( v21 != s1 )
      {
        CUtlString::operator=(pOutErrorMessage, "Decompression failure");
        return 0;
      }
      CUtlBuffer::SeekPut(pLongTermScratchBuffer, CUtlBuffer::SeekType_t::SEEK_CURRENT, v21);
      goto LABEL_33;
    }
    decompressedMemory.m_Size = 0;
    CUtlMemoryFixedGrowable_Base<unsigned char,int>::CUtlMemoryFixedGrowable_Base(
      &decompressedMemory.m_Memory,
      0,
      1024,
      0,
      1024);
    decompressedMemory.m_Memory.m_pMemory = decompressedMemory.m_Memory.m_FixedMemory.m_Data;
    if ( s1 > decompressedMemory.m_Size )
    {
      if ( s1 > decompressedMemory.m_Memory.m_nAllocationCount )
        CUtlMemory<unsigned char,int>::Grow(
          &decompressedMemory.m_Memory,
          s1 - decompressedMemory.m_Memory.m_nAllocationCount);
      decompressedMemory.m_Size = s1;
    }
    if ( CBlockCompress::FastDecompress(
           &pSrcBuffer->m_Memory.m_pMemory[pSrcBuffer->m_Get - pSrcBuffer->m_nOffset],
           v18,
           decompressedMemory.m_Memory.m_pMemory,
           s1) == s1 )
    {
      CUtlBuffer::CUtlBuffer(&decompressedBuffer, decompressedMemory.m_Memory.m_pMemory, s1, 8);
      loadContext.m_pSrcBuffer = &decompressedBuffer;
      v22 = LoadKV3BinaryUncompressed(&loadContext, pRootTarget);
      if ( (decompressedBuffer.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        s1b = v22;
        CUtlMemory<unsigned char,int>::Purge(&decompressedBuffer.m_Memory);
        v22 = s1b;
      }
    }
    else
    {
      CUtlString::operator=(pOutErrorMessage, "Decompression failure");
      v22 = 0;
    }
    s1a = v22;
    CUtlVectorBase<unsigned char,CUtlMemoryFixedGrowable<unsigned char,1024ul,int>>::~CUtlVectorBase(&decompressedMemory);
    return s1a;
  }
}


