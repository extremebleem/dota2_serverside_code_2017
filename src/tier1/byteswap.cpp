
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_byteswap.cpp  (line 0, @0x0000000001a66fa0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_byteswap_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CByteswap::SwapFieldToTargetEndian  (line 18, @0x0000000002f6cfb0, libserver.so)  // inlines: LowLevelByteSwap<int>, LowLevelByteSwap<long long unsigned int>, LowLevelByteSwap<short int>, LowLevelByteSwap<unsigned int>, SwapBufferToTargetEndian<bool>, SwapBufferToTargetEndian<int>, SwapBufferToTargetEndian<long long unsigned int>, SwapBufferToTargetEndian<short int>, SwapBufferToTargetEndian<unsigned int>, V_memcpy, memcpy
// calls: memcpy, CByteswap::SwapFieldsToTargetEndian
// callers: CByteswap::SwapFieldsToTargetEndian
// globals: jpt_2F6CFE2
void __fastcall CByteswap::SwapFieldToTargetEndian(
        CByteswap *const this,
        void *pOutputBuffer,
        void *pData,
        typedescription_t *pField)
{
  _BYTE *v5; // r13
  _QWORD *v7; // r12
  __int64 fieldSize; // rax
  int v9; // ecx
  unsigned __int16 v10; // ax
  size_t v11; // rdx
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // rax
  int v15; // r10d
  datamap_t *td; // rcx
  int v17; // r15d
  __int64 fieldSizeInBytes; // rdx
  int v19; // ecx
  int v20; // eax
  char v21; // dl
  int v22; // eax
  char v23; // dl
  int v24; // eax
  char v25; // dl
  int v26; // ecx
  int v27; // eax
  char v28; // dl
  int v29; // eax
  char v30; // dl
  int v31; // r9d
  __int64 v32; // rcx
  __int64 i; // rax
  char v34; // si
  _BYTE *v35; // rdx
  int v36; // eax
  char v37; // dl
  typedescription_t *pEmbed; // [rsp+8h] [rbp-48h]
  _QWORD v39[7]; // [rsp+18h] [rbp-38h] BYREF

  v5 = pData;
  v7 = pOutputBuffer;
  switch ( pField->fieldType )
  {
    case fieldtype_t::FIELD_FLOAT:
      fieldSize = pField->fieldSize;
      v9 = fieldSize;
      if ( pOutputBuffer != 0 && fieldSize != 0 )
      {
        if ( pData != 0 )
        {
          if ( (*this & 1) == 0 )
            goto LABEL_73;
        }
        else
        {
          v5 = pOutputBuffer;
          if ( (*this & 1) == 0 )
            return;
        }
        v29 = 0;
        do
        {
          v30 = v5[3];
          ++v29;
          v7 = (v7 + 4);
          v5 += 4;
          LOBYTE(v39[0]) = v30;
          BYTE1(v39[0]) = *(v5 - 2);
          BYTE2(v39[0]) = *(v5 - 3);
          BYTE3(v39[0]) = *(v5 - 4);
          *(v7 - 1) = v39[0];
        }
        while ( v9 > v29 );
      }
      return;
    case fieldtype_t::FIELD_VECTOR:
      v19 = 3 * pField->fieldSize;
      if ( pOutputBuffer != 0 && v19 != 0 )
      {
        if ( pData != 0 )
        {
          if ( (*this & 1) == 0 )
            goto LABEL_75;
        }
        else
        {
          v5 = pOutputBuffer;
          if ( (*this & 1) == 0 )
            return;
        }
        v22 = 0;
        do
        {
          v23 = v5[3];
          ++v22;
          v7 = (v7 + 4);
          v5 += 4;
          LOBYTE(v39[0]) = v23;
          BYTE1(v39[0]) = *(v5 - 2);
          BYTE2(v39[0]) = *(v5 - 3);
          BYTE3(v39[0]) = *(v5 - 4);
          *(v7 - 1) = v39[0];
        }
        while ( v19 > v22 );
      }
      return;
    case fieldtype_t::FIELD_QUATERNION:
      v19 = 4 * pField->fieldSize;
      if ( pOutputBuffer != 0 && v19 != 0 )
      {
        if ( pData != 0 )
        {
          if ( (*this & 1) == 0 )
            goto LABEL_75;
        }
        else
        {
          v5 = pOutputBuffer;
          if ( (*this & 1) == 0 )
            return;
        }
        v24 = 0;
        do
        {
          v25 = v5[3];
          ++v24;
          v7 = (v7 + 4);
          v5 += 4;
          LOBYTE(v39[0]) = v25;
          BYTE1(v39[0]) = *(v5 - 2);
          BYTE2(v39[0]) = *(v5 - 3);
          BYTE3(v39[0]) = *(v5 - 4);
          *(v7 - 1) = v39[0];
        }
        while ( v19 > v24 );
      }
      return;
    case fieldtype_t::FIELD_INTEGER:
      fieldSize = pField->fieldSize;
      v26 = fieldSize;
      if ( pOutputBuffer == 0 || fieldSize == 0 )
        return;
      if ( pData == 0 )
      {
        v5 = pOutputBuffer;
        if ( (*this & 1) == 0 )
          return;
      }
      else if ( (*this & 1) == 0 )
      {
LABEL_73:
        if ( pOutputBuffer != pData )
        {
          v11 = 4 * fieldSize;
          goto LABEL_9;
        }
        return;
      }
      v27 = 0;
      do
      {
        v28 = v5[3];
        ++v27;
        v7 = (v7 + 4);
        v5 += 4;
        LOBYTE(v39[0]) = v28;
        BYTE1(v39[0]) = *(v5 - 2);
        BYTE2(v39[0]) = *(v5 - 3);
        BYTE3(v39[0]) = *(v5 - 4);
        *(v7 - 1) = v39[0];
      }
      while ( v26 > v27 );
      return;
    case fieldtype_t::FIELD_BOOLEAN:
    case fieldtype_t::FIELD_CHARACTER:
      v10 = pField->fieldSize;
      if ( v10 != 0 && pOutputBuffer != 0 && pData != 0 && pOutputBuffer != pData )
      {
        v11 = v10;
        goto LABEL_9;
      }
      return;
    case fieldtype_t::FIELD_SHORT:
      v12 = pField->fieldSize;
      v13 = v12;
      if ( pOutputBuffer == 0 || v12 == 0 )
        return;
      if ( pData != 0 )
      {
        if ( (*this & 1) == 0 )
        {
          if ( pOutputBuffer != pData )
          {
            v11 = 2 * v12;
            goto LABEL_9;
          }
          return;
        }
      }
      else
      {
        v5 = pOutputBuffer;
        if ( (*this & 1) == 0 )
          return;
      }
      v36 = 0;
      do
      {
        v37 = v5[1];
        ++v36;
        v7 = (v7 + 2);
        v5 += 2;
        LOBYTE(v39[0]) = v37;
        BYTE1(v39[0]) = *(v5 - 2);
        *(v7 - 1) = v39[0];
      }
      while ( v13 > v36 );
      return;
    case fieldtype_t::FIELD_EMBEDDED:
      td = pField->td;
      pEmbed = td->dataDesc;
      if ( pField->fieldSize != 0 )
      {
        v17 = 0;
        while ( 1 )
        {
          ++v17;
          CByteswap::SwapFieldsToTargetEndian(this, v7 + pEmbed->fieldOffset, &v5[pEmbed->fieldOffset], td);
          fieldSizeInBytes = pField->fieldSizeInBytes;
          v7 = (v7 + fieldSizeInBytes);
          v5 += fieldSizeInBytes;
          if ( pField->fieldSize <= v17 )
            break;
          td = pField->td;
        }
      }
      return;
    case fieldtype_t::FIELD_VECTOR2D:
      v19 = 2 * pField->fieldSize;
      if ( pOutputBuffer == 0 || v19 == 0 )
        return;
      if ( pData == 0 )
      {
        v5 = pOutputBuffer;
        if ( (*this & 1) == 0 )
          return;
      }
      else if ( (*this & 1) == 0 )
      {
LABEL_75:
        if ( pOutputBuffer != pData )
        {
          v11 = 4LL * v19;
          goto LABEL_9;
        }
        return;
      }
      v20 = 0;
      do
      {
        v21 = v5[3];
        ++v20;
        v7 = (v7 + 4);
        v5 += 4;
        LOBYTE(v39[0]) = v21;
        BYTE1(v39[0]) = *(v5 - 2);
        BYTE2(v39[0]) = *(v5 - 3);
        BYTE3(v39[0]) = *(v5 - 4);
        *(v7 - 1) = v39[0];
      }
      while ( v19 > v20 );
      return;
    case fieldtype_t::FIELD_INTEGER64:
      v14 = pField->fieldSize;
      v15 = v14;
      if ( pOutputBuffer == 0 || v14 == 0 )
        return;
      if ( pData == 0 )
      {
        v5 = pOutputBuffer;
        if ( (*this & 1) == 0 )
          return;
      }
      else if ( (*this & 1) == 0 )
      {
        if ( pOutputBuffer != pData )
        {
          v11 = 8 * v14;
LABEL_9:
          memcpy(pOutputBuffer, v5, v11);
        }
        return;
      }
      v31 = 0;
      do
      {
        v32 = 0;
        v39[0] = *v7;
        for ( i = 8; i != 0; --i )
        {
          v34 = v5[i - 1];
          v35 = v39 + v32;
          v32 = 9 - i;
          *v35 = v34;
        }
        ++v31;
        ++v7;
        v5 += 8;
        *(v7 - 1) = v39[0];
      }
      while ( v15 > v31 );
      return;
    default:
      return;
  }
}


// CByteswap::SwapFieldsToTargetEndian  (line 81, @0x0000000002f6cf30, libserver.so)
// calls: CByteswap::SwapFieldToTargetEndian
// callers: SwapClosecaptionFile, CByteswap::SwapFieldToTargetEndian
void __fastcall CByteswap::SwapFieldsToTargetEndian(
        CByteswap *const this,
        void *pOutputBuffer,
        void *pBaseData,
        datamap_t *pDataMap)
{
  datamap_t *baseMap; // rcx
  int dataNumFields; // eax
  typedescription_t *dataDesc; // rbx
  __int64 v11; // r15
  __int64 fieldOffset; // rsi
  typedescription_t *v13; // rcx

  baseMap = pDataMap->baseMap;
  if ( baseMap != 0 )
    CByteswap::SwapFieldsToTargetEndian(this, pOutputBuffer, pBaseData, baseMap);
  dataNumFields = pDataMap->dataNumFields;
  dataDesc = pDataMap->dataDesc;
  if ( dataNumFields > 0 )
  {
    v11 = &dataDesc[(dataNumFields - 1) + 1];
    do
    {
      fieldOffset = dataDesc->fieldOffset;
      v13 = dataDesc++;
      CByteswap::SwapFieldToTargetEndian(this, pOutputBuffer + fieldOffset, pBaseData + fieldOffset, v13);
    }
    while ( dataDesc != v11 );
  }
}


