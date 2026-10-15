
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// snappy::MaxCompressedLength  (line 55, @0x0000000002f8a910, libserver.so)
size_t __fastcall snappy::MaxCompressedLength(size_t source_len)
{
  return source_len + source_len / 6 + 32;
}


// snappy::GetUncompressedLength  (line 235, @0x0000000002f8a930, libserver.so)  // inlines: Parse32WithLimit
// callers: CGCJobLoadSaveGame::BYieldingRunJob, snappy::Uncompress
bool __fastcall snappy::GetUncompressedLength(const char *start, size_t n, size_t *result)
{
  const char *v3; // rsi
  size_t v4; // rax

  v3 = &start[n];
  if ( start >= v3 )
    return 0;
  v4 = *start & 0x7F;
  if ( *start >= 0 )
  {
    if ( start == -1LL )
      return 0;
  }
  else
  {
    if ( v3 <= start + 1 )
      return 0;
    v4 = ((start[1] & 0x7F) << 7) | v4;
    if ( start[1] < 0 )
    {
      if ( v3 <= start + 2 )
        return 0;
      v4 = ((start[2] & 0x7F) << 14) | v4;
      if ( start[2] < 0 )
      {
        if ( v3 <= start + 3 )
          return 0;
        v4 = ((start[3] & 0x7F) << 21) | v4;
        if ( start[3] < 0 )
        {
          if ( v3 <= start + 4 )
            return 0;
          v4 = (*(start + 4) << 28) | v4;
          if ( *(start + 4) > 0xFu )
            return 0;
        }
      }
    }
  }
  *result = v4;
  return 1;
}


// snappy::internal::WorkingMemory::GetHashTable  (line 247, @0x0000000002f8a9e0, libserver.so)  // inlines: memset
// calls: memset, operator new []
// callers: snappy::Compress
snappy::uint16 *__fastcall snappy::internal::WorkingMemory::GetHashTable(
        snappy::internal::WorkingMemory *const this,
        size_t input_size,
        int *table_size)
{
  size_t v5; // rbx
  snappy::internal::WorkingMemory *large_table; // r12
  size_t v7; // rdx
  int v8; // eax
  snappy::uint16 *v10; // rax

  if ( input_size <= 0x100 )
  {
    v7 = 512;
    v8 = 256;
    goto LABEL_11;
  }
  v5 = 256;
  do
    v5 *= 2LL;
  while ( input_size > v5 && v5 <= 0x3FFF );
  if ( v5 <= 0x400 )
  {
    v7 = 2 * v5;
    v8 = v5;
LABEL_11:
    large_table = this;
    goto LABEL_9;
  }
  large_table = this->large_table_;
  if ( large_table == 0 )
  {
    v10 = operator new[](0x8000u);
    this->large_table_ = v10;
    large_table = v10;
  }
  v7 = 2 * v5;
  v8 = v5;
LABEL_9:
  *table_size = v8;
  memset(large_table, 0, v7);
  return large_table->small_table_;
}


// snappy::internal::CompressFragment  (line 329, @0x0000000002f8aa80, libserver.so)  // inlines: EmitCopy, EmitCopyLessThan64, EmitLiteral, FindLSBSetNonZero, FindLSBSetNonZero64, FindMatchLength, GetEightBytesAt, GetUint32AtOffset, Hash, HashBytes, Log2Floor, Store16, UnalignedCopy64, memcpy
// calls: memcpy
// callers: snappy::Compress
char *__fastcall snappy::internal::CompressFragment(
        const char *input,
        size_t input_size,
        char *op,
        snappy::uint16 *table,
        const int table_size)
{
  char *result; // rax
  int v7; // r10d
  const char *v8; // r14
  int v9; // r11d
  int v10; // edx
  const char *v11; // r15
  char v12; // cl
  unsigned __int64 v13; // r12
  const char *v14; // rbx
  const char *v15; // r10
  const char *v16; // r8
  __int64 v17; // r11
  unsigned int v18; // edi
  snappy::uint16 *v19; // rdi
  int v20; // esi
  __int64 v21; // r13
  const char *v22; // r13
  unsigned int v23; // esi
  unsigned int v24; // r12d
  const char *v25; // rdx
  char *v26; // rcx
  int v27; // r15d
  int v28; // edx
  char j; // si
  char *v30; // rcx
  int v31; // r11d
  int v32; // edx
  char i; // si
  char *v34; // rax
  const char *v35; // r11
  const char *v36; // rdx
  int v37; // esi
  __int64 v38; // r10
  __int64 v39; // r8
  const char *v40; // rdi
  const char *v41; // rcx
  char v42; // di
  signed int v43; // ecx
  unsigned __int64 v44; // rbx
  char *v45; // rdx
  unsigned __int64 v46; // rsi
  snappy::uint16 *v47; // rdx
  int v48; // ecx
  __int64 v49; // rax
  unsigned __int64 v50; // r10
  int v51; // edi
  unsigned __int64 v52; // r10
  int v53; // edx
  int v54; // r8d
  int v55; // ecx
  int v56; // r8d
  int v57; // edx
  int v58; // ecx
  snappy::uint16 *v59; // [rsp+0h] [rbp-50h]
  const char *v60; // [rsp+8h] [rbp-48h]
  unsigned __int64 v61; // [rsp+10h] [rbp-40h]
  __int64 v62; // [rsp+10h] [rbp-40h]
  char shift; // [rsp+1Ch] [rbp-34h]

  result = op;
  v7 = 33;
  v8 = input;
  if ( table_size != 0 )
  {
    v9 = 0;
    v10 = 4;
    LOBYTE(v7) = 1;
    do
    {
      if ( table_size >> (v7 << v10) != 0 )
      {
        v9 += v7 << v10;
        table_size = table_size >> (v7 << v10);
      }
      --v10;
    }
    while ( v10 != -1 );
    LOBYTE(v7) = 32 - v9;
  }
  v11 = &input[input_size];
  if ( input_size > 0xE )
  {
    v12 = v7;
    shift = v7;
    v13 = (v11 - 8);
    v14 = input + 1;
    v15 = &input[input_size - 15];
    v16 = input;
    v17 = (506832829 * *(input + 1)) >> v12;
LABEL_9:
    v61 = v13;
    v18 = 32;
    while ( 1 )
    {
      v24 = v18 + 1;
      v25 = &v14[v18 >> 5];
      if ( v15 < v25 )
      {
LABEL_13:
        v8 = v16;
        goto emit_remainder;
      }
      v19 = &table[v17];
      v20 = *v25;
      v21 = *v19;
      *v19 = v14 - v8;
      v22 = &v8[v21];
      v23 = (506832829 * v20) >> shift;
      if ( *v14 == *v22 )
        break;
      v18 = v24;
      v14 = v25;
      v17 = v23;
    }
    v13 = v61;
    v30 = result + 1;
    v31 = v14 - v16;
    v32 = v14 - v16 - 1;
    if ( v32 > 59 )
    {
      for ( i = 0; ; ++i )
      {
        *v30++ = v32;
        v32 >>= 8;
        if ( v32 == 0 )
          break;
      }
      *result = 4 * i - 16;
      goto LABEL_26;
    }
    *result = 4 * v32;
    if ( v31 > 16 )
    {
LABEL_26:
      v59 = table;
      v60 = v15;
      v62 = v31;
      v34 = memcpy(v30, v16, v31);
      table = v59;
      result = &v34[v62];
      v35 = v60;
      goto LABEL_27;
    }
    *(result + 1) = *v16;
    *(result + 9) = *(v16 + 1);
    v49 = v31;
    v35 = v15;
    result = &v30[v49];
    while ( 1 )
    {
LABEL_27:
      v36 = v14 + 4;
      v37 = 0;
      if ( (v14 + 4) > v13 )
        goto LABEL_32;
      v38 = *(v14 + 4);
      v39 = *(v22 + 4);
      if ( v38 == v39 )
        break;
      v37 = 0;
LABEL_52:
      v50 = v39 ^ v38;
      v51 = v50;
      if ( v50 != 0 )
      {
        v57 = 5;
        v56 = 31;
        v58 = 16;
        do
        {
          if ( v51 << v58 != 0 )
          {
            v56 -= v58;
            v51 <<= v58;
          }
          v58 >>= 1;
          --v57;
        }
        while ( v57 != 0 );
      }
      else
      {
        v52 = HIDWORD(v50);
        v53 = 5;
        v54 = 31;
        v55 = 16;
        do
        {
          if ( v52 << v55 != 0 )
          {
            v54 -= v55;
            LODWORD(v52) = v52 << v55;
          }
          v55 >>= 1;
          --v53;
        }
        while ( v53 != 0 );
        v56 = v54 + 32;
      }
      v37 += v56 >> 3;
LABEL_37:
      v43 = v37 + 4;
      v16 = &v14[v37 + 4];
      v44 = v14 - v22;
      if ( v37 + 4 <= 67 )
      {
        v45 = result;
      }
      else
      {
        v45 = &result[3 * ((v37 - 64) >> 6) + 3];
        do
        {
          *result = -2;
          result += 3;
          *(result - 1) = v44;
        }
        while ( result != v45 );
        v43 = v37 - ((v37 - 64) >> 6 << 6) - 60;
      }
      if ( v43 > 64 )
      {
        *v45 = -18;
        v43 -= 60;
        v45 += 3;
        *(v45 - 1) = v44;
      }
      if ( v43 > 11 || v44 > 0x7FF )
      {
        *(v45 + 1) = v44;
        *v45 = 4 * v43 - 2;
        result = v45 + 3;
      }
      else
      {
        v45[1] = v44;
        *v45 = 32 * BYTE1(v44) + 4 * v43 - 15;
        result = v45 + 2;
      }
      if ( v35 <= v16 )
        goto LABEL_13;
      v46 = *(v16 - 1);
      table[(506832829 * v46) >> shift] = v16 - v8 - 1;
      v47 = &table[(506832829 * (v46 >> 8)) >> shift];
      v22 = &v8[*v47];
      v48 = *v22;
      *v47 = v16 - v8;
      if ( v48 != (v46 >> 8) )
      {
        v14 = v16 + 1;
        v15 = v35;
        v17 = (506832829 * (v46 >> 16)) >> shift;
        goto LABEL_9;
      }
      v14 = v16;
    }
    v40 = v22 + 12;
    v37 = 0;
    while ( 1 )
    {
      v36 += 8;
      v37 += 8;
      if ( v36 > v13 )
        break;
      v40 += 8;
      v38 = *v36;
      v39 = *(v40 - 1);
      if ( *v36 != v39 )
        goto LABEL_52;
    }
LABEL_32:
    if ( v11 > v36 && v22[v37 + 4] == *v36 )
    {
      v41 = &v22[v37 + 5];
      do
      {
        ++v36;
        ++v37;
        if ( v36 == v11 )
          break;
        v42 = *v41++;
      }
      while ( v42 == *v36 );
    }
    goto LABEL_37;
  }
emit_remainder:
  if ( v8 < v11 )
  {
    v26 = result + 1;
    v27 = v11 - v8;
    v28 = v27 - 1;
    if ( v27 - 1 <= 59 )
    {
      *result = 4 * v28;
    }
    else
    {
      for ( j = 0; ; ++j )
      {
        *v26++ = v28;
        v28 >>= 8;
        if ( v28 == 0 )
          break;
      }
      *result = 4 * j - 16;
    }
    return memcpy(v26, v8, v27) + v27;
  }
  return result;
}


// snappy::SnappyDecompressor::RefillTag  (line 792, @0x0000000002f8aec0, libserver.so)  // inlines: memcpy, memmove
// calls: memmove, memcpy
// callers: snappy::InternalUncompress<snappy::SnappyIOVecWriter>, snappy::InternalUncompress<snappy::SnappyArrayWriter>, snappy::IsValidCompressedBuffer
// globals: snappy::char_table
bool __fastcall snappy::SnappyDecompressor::RefillTag(snappy::SnappyDecompressor *const this)
{
  const char *ip; // rsi
  const char *ip_limit; // rdx
  unsigned int v4; // edx
  unsigned int v5; // ebx
  __int64 v6; // r13
  const void *i; // rax
  unsigned int v9; // r14d
  char *v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  size_t v13; // rdx
  bool v14; // zf
  size_t length[7]; // [rsp+18h] [rbp-38h] BYREF

  ip = this->ip_;
  ip_limit = this->ip_limit_;
  if ( ip_limit == ip )
  {
    (*(this->reader_->_vptr_Source + 4))(this->reader_, this->peeked_);
    v12 = (*(this->reader_->_vptr_Source + 3))(this->reader_, length);
    v13 = length[0];
    ip = v12;
    v14 = length[0] == 0;
    this->peeked_ = length[0];
    if ( v14 )
    {
      this->eof_ = 1;
      return 0;
    }
    ip_limit = (v12 + v13);
    this->ip_limit_ = ip_limit;
  }
  v4 = ip_limit - ip;
  v5 = v4;
  v6 = (snappy::char_table[*ip] >> 11) + 1;
  if ( v6 > v4 )
  {
    memmove(this->scratch_, ip, v4);
    (*(this->reader_->_vptr_Source + 4))(this->reader_, this->peeked_);
    this->peeked_ = 0;
    for ( i = (*(this->reader_->_vptr_Source + 3))(this->reader_, length);
          ;
          i = (*(this->reader_->_vptr_Source + 3))(this->reader_, length) )
    {
      if ( length[0] == 0 )
        return 0;
      v9 = length[0];
      if ( v6 - v5 <= LODWORD(length[0]) )
        v9 = v6 - v5;
      v10 = &this->scratch_[v5];
      v5 += v9;
      memcpy(v10, i, v9);
      (*(this->reader_->_vptr_Source + 4))(this->reader_, v9);
      if ( v6 <= v5 )
        break;
    }
    this->ip_ = this->scratch_;
    this->ip_limit_ = &this->scratch_[v6];
    return 1;
  }
  else
  {
    if ( v4 <= 4 )
    {
      v11 = v4;
      memmove(this->scratch_, ip, v4);
      (*(this->reader_->_vptr_Source + 4))(this->reader_, this->peeked_);
      this->ip_ = this->scratch_;
      this->ip_limit_ = &this->scratch_[v11];
      this->peeked_ = 0;
    }
    else
    {
      this->ip_ = ip;
    }
    return 1;
  }
}


// snappy::InternalUncompress<snappy::SnappyIOVecWriter>  (line 852, @0x0000000002f8b0a0, libserver.so)  // inlines: Append, AppendFromSelf, DecompressAllTags<snappy::SnappyIOVecWriter>, GetIOVecPointer, IncrementalCopy, InternalUncompressAllTags<snappy::SnappyIOVecWriter>, ReadUncompressedLength, SnappyDecompressor, TryFastAppend, UnalignedCopy64, memcpy, min<long unsigned int>, ~SnappyDecompressor
// calls: memcpy, snappy::SnappyDecompressor::RefillTag, _Unwind_Resume, __stack_chk_fail
// callers: snappy::RawUncompressToIOVec
// globals: snappy::char_table, snappy::wordmask
bool __fastcall snappy::InternalUncompress<snappy::SnappyIOVecWriter>(
        snappy::Source *r,
        snappy::SnappyIOVecWriter *writer)
{
  unsigned int v2; // r14d
  int v3; // r12d
  char *v5; // rax
  char v6; // r13
  unsigned __int64 v7; // r13
  bool eof; // r12
  const char *ip; // rdx
  size_t total_written; // rcx
  __int64 v12; // rax
  __int64 v13; // r12
  size_t output_limit; // rsi
  unsigned __int64 v15; // r11
  size_t curr_iov_written; // r8
  const iovec *v17; // rax
  _QWORD *v18; // r8
  __int64 v19; // rax
  size_t v20; // r13
  size_t v21; // rax
  size_t v22; // rdx
  __int64 v23; // rcx
  size_t *p_iov_len; // rcx
  int v25; // esi
  int v26; // r10d
  const iovec *v27; // rsi
  const iovec *v28; // rax
  size_t v29; // r14
  size_t v30; // r12
  char *v31; // r15
  size_t v32; // rdi
  __int64 v33; // rax
  const iovec *v34; // rdx
  size_t v35; // r14
  int v36; // r10d
  size_t v37; // r14
  const void *v38; // rsi
  size_t v39; // rdx
  size_t v40; // r8
  const iovec *v41; // rax
  size_t v42; // rsi
  void *iov_base; // rdi
  __int64 v44; // rax
  size_t v45; // r8
  size_t v46; // rdi
  size_t v47; // rdi
  const char *v48; // r14
  int curr_iov_index; // eax
  const iovec *output_iov; // rsi
  unsigned __int64 v51; // rdx
  const iovec *v52; // rcx
  size_t iov_len; // r15
  int v54; // eax
  size_t v55; // r15
  const void *v56; // rsi
  __int64 v57; // rax
  size_t v58; // r15
  size_t v59; // rdi
  char *v60; // r14
  int v61; // esi
  const iovec *v62; // rcx
  unsigned __int64 v63; // rax
  const iovec *v64; // rdx
  size_t v65; // r13
  int v66; // esi
  size_t v67; // r13
  const void *v68; // rsi
  __int64 v69; // [rsp+8h] [rbp-98h]
  unsigned __int64 v70; // [rsp+10h] [rbp-90h]
  size_t n; // [rsp+20h] [rbp-80h]
  size_t v72; // [rsp+28h] [rbp-78h]
  int v73; // [rsp+28h] [rbp-78h]
  __int64 v74; // [rsp+30h] [rbp-70h] BYREF
  const char *v75; // [rsp+38h] [rbp-68h] BYREF
  snappy::SnappyDecompressor decompressor; // [rsp+40h] [rbp-60h] BYREF
  unsigned __int64 v77; // [rsp+68h] [rbp-38h]

  v2 = 0;
  v3 = 0;
  decompressor.reader_ = r;
  v77 = __readfsqword(0x28u);
  memset(&decompressor.ip_, 0, 21);
  v5 = (*(r->_vptr_Source + 3))(r, &v74);
  if ( v74 == 0 )
  {
LABEL_5:
    LODWORD(v7) = decompressor.peeked_;
    eof = 0;
    goto LABEL_6;
  }
  while ( 1 )
  {
    v6 = *v5;
    (*(decompressor.reader_->_vptr_Source + 4))(decompressor.reader_, 1);
    v2 |= (v6 & 0x7F) << v3;
    if ( v6 >= 0 )
      break;
    v3 += 7;
    if ( v3 != 35 )
    {
      v5 = (*(decompressor.reader_->_vptr_Source + 3))(decompressor.reader_, &v74);
      if ( v74 != 0 )
        continue;
    }
    goto LABEL_5;
  }
  ip = decompressor.ip_;
  writer->output_limit_ = v2;
  if ( decompressor.ip_limit_ - ip <= 4 )
  {
    if ( !snappy::SnappyDecompressor::RefillTag(&decompressor) )
      goto LABEL_43;
    ip = decompressor.ip_;
  }
  total_written = writer->total_written_;
  while ( 1 )
  {
    v12 = *ip;
    v13 = (ip + 1);
    if ( (v12 & 3) != 0 )
      break;
    while ( 1 )
    {
      output_limit = writer->output_limit_;
      v15 = ((v12 >> 2) + 1);
      v72 = v15;
      v7 = &decompressor.ip_limit_[-v13];
      if ( v15 > 0x10 || v7 <= 0x14 )
        break;
      if ( output_limit - total_written <= 0xF )
        goto LABEL_58;
      curr_iov_written = writer->curr_iov_written_;
      v17 = &writer->output_iov_[writer->curr_iov_index_];
      if ( v17->iov_len - curr_iov_written <= 0xF )
        goto LABEL_58;
      v18 = v17->iov_base + curr_iov_written;
      *v18 = *(ip + 1);
      v19 = *(ip + 9);
      ip = (v13 + v15);
      v13 += v15 + 1;
      v18[1] = v19;
      total_written = writer->total_written_ + v15;
      writer->curr_iov_written_ += v15;
      writer->total_written_ = total_written;
      v12 = *ip;
      if ( (v12 & 3) != 0 )
        goto LABEL_15;
    }
    if ( v15 > 0x3C )
    {
      v13 += v15 - 60;
      v7 = &decompressor.ip_limit_[-v13];
      v72 = (*(ip + 1) & snappy::wordmask[v15 - 60]) + 1;
    }
LABEL_58:
    if ( v72 > v7 )
    {
      if ( output_limit < v7 + total_written )
        goto LABEL_43;
      while ( 1 )
      {
        if ( v7 != 0 )
        {
          v47 = writer->curr_iov_written_;
          v48 = v7;
          do
          {
            curr_iov_index = writer->curr_iov_index_;
            output_iov = writer->output_iov_;
            v51 = curr_iov_index;
            v52 = &writer->output_iov_[v51];
            iov_len = v52->iov_len;
            if ( iov_len <= v47 )
            {
              v54 = curr_iov_index + 1;
              if ( v54 >= writer->output_iov_count_ )
                goto LABEL_43;
              writer->curr_iov_written_ = 0;
              v52 = &output_iov[v51 + 1];
              v47 = 0;
              writer->curr_iov_index_ = v54;
              iov_len = output_iov[v51 + 1].iov_len;
            }
            v55 = iov_len - v47;
            v56 = v13;
            if ( v55 > v48 )
              v55 = v48;
            v13 += v55;
            memcpy(v52->iov_base + v47, v56, v55);
            v47 = writer->curr_iov_written_ + v55;
            writer->total_written_ += v55;
            v48 -= v55;
            writer->curr_iov_written_ = v47;
          }
          while ( v48 != 0 );
        }
        v72 -= v7;
        (*(decompressor.reader_->_vptr_Source + 4))(decompressor.reader_, decompressor.peeked_);
        v57 = (*(decompressor.reader_->_vptr_Source + 3))(decompressor.reader_, &v75);
        v7 = v75;
        v13 = v57;
        decompressor.peeked_ = v75;
        if ( v75 == 0 )
        {
          LODWORD(v7) = 0;
          goto LABEL_44;
        }
        decompressor.ip_limit_ = &v75[v57];
        if ( v72 <= v75 )
          break;
        if ( &v75[writer->total_written_] > writer->output_limit_ )
          goto LABEL_44;
      }
      total_written = writer->total_written_;
      output_limit = writer->output_limit_;
    }
    v58 = v72;
    if ( v72 + total_written > output_limit )
      goto LABEL_43;
    if ( v72 != 0 )
    {
      v59 = writer->curr_iov_written_;
      v60 = v13;
      do
      {
        v61 = writer->curr_iov_index_;
        v62 = writer->output_iov_;
        v63 = v61;
        v64 = &writer->output_iov_[v63];
        v65 = v64->iov_len;
        if ( v65 <= v59 )
        {
          v66 = v61 + 1;
          if ( v66 >= writer->output_iov_count_ )
            goto LABEL_43;
          writer->curr_iov_written_ = 0;
          v64 = &v62[v63 + 1];
          v59 = 0;
          writer->curr_iov_index_ = v66;
          v65 = v62[v63 + 1].iov_len;
        }
        v67 = v65 - v59;
        v68 = v60;
        if ( v67 > v58 )
          v67 = v58;
        v60 += v67;
        memcpy(v64->iov_base + v59, v68, v67);
        v59 = writer->curr_iov_written_ + v67;
        writer->total_written_ += v67;
        v58 -= v67;
        writer->curr_iov_written_ = v59;
      }
      while ( v58 != 0 );
    }
    v39 = v72;
LABEL_41:
    ip = (v13 + v39);
    if ( decompressor.ip_limit_ - ip <= 4 )
    {
      decompressor.ip_ = ip;
      if ( !snappy::SnappyDecompressor::RefillTag(&decompressor) )
        goto LABEL_43;
      ip = decompressor.ip_;
      total_written = writer->total_written_;
    }
    else
    {
      total_written = writer->total_written_;
    }
  }
LABEL_15:
  LOWORD(v20) = snappy::char_table[v12];
  v70 = v20 >> 11;
  v21 = (v20 & 0x700) + (*(ip + 1) & snappy::wordmask[v70]);
  if ( v21 > total_written
    || (v20 & 0x700) + (*(ip + 1) & snappy::wordmask[v70]) == 0
    || v20 > writer->output_limit_ - total_written )
  {
    goto LABEL_43;
  }
  v22 = writer->curr_iov_written_;
  v73 = writer->curr_iov_index_;
  if ( v21 <= v22 )
    goto LABEL_89;
  --v73;
  v21 -= v22;
  v23 = v73;
  v22 = writer->output_iov_[v23].iov_len;
  if ( v21 != 0 )
  {
    p_iov_len = &writer->output_iov_[v23 - 1].iov_len;
    v25 = v73;
    while ( v22 < v21 )
    {
      v21 -= v22;
      p_iov_len -= 2;
      --v25;
      v22 = p_iov_len[2];
      if ( v21 == 0 )
      {
        v69 = v13;
        v20 = v20;
        v73 = v25;
        goto LABEL_24;
      }
    }
    v73 = v25;
LABEL_89:
    v22 -= v21;
    v69 = v13;
    v20 = v20;
    goto LABEL_24;
  }
  v69 = v13;
  v20 = v20;
LABEL_24:
  while ( 2 )
  {
    while ( 2 )
    {
      if ( v20 == 0 )
      {
LABEL_40:
        v13 = v69;
        v39 = v70;
        goto LABEL_41;
      }
      while ( 1 )
      {
        v26 = writer->curr_iov_index_;
        if ( v26 == v73 )
          break;
        v27 = writer->output_iov_;
        v28 = &writer->output_iov_[v73];
        v29 = v28->iov_len - v22;
        if ( v29 > v20 )
          v29 = v20;
        n = v29;
        if ( writer->total_written_ + v29 <= writer->output_limit_ )
        {
          v30 = v29;
          if ( v29 == 0 )
            goto LABEL_39;
          v31 = v28->iov_base + v22;
          v32 = writer->curr_iov_written_;
          while ( 1 )
          {
            v33 = v26;
            v34 = &v27[v33];
            v35 = v27[v33].iov_len;
            if ( v35 <= v32 )
            {
              v36 = v26 + 1;
              if ( v36 >= writer->output_iov_count_ )
                break;
              writer->curr_iov_written_ = 0;
              v34 = &v27[v33 + 1];
              v32 = 0;
              writer->curr_iov_index_ = v36;
              v35 = v27[v33 + 1].iov_len;
            }
            v37 = v35 - v32;
            v38 = v31;
            if ( v37 > v30 )
              v37 = v30;
            v31 += v37;
            memcpy(v34->iov_base + v32, v38, v37);
            v32 = writer->curr_iov_written_ + v37;
            writer->total_written_ += v37;
            v30 -= v37;
            writer->curr_iov_written_ = v32;
            if ( v30 == 0 )
              break;
            v27 = writer->output_iov_;
            v26 = writer->curr_iov_index_;
          }
        }
        v20 -= n;
        if ( v20 == 0 )
          goto LABEL_40;
LABEL_39:
        ++v73;
        v22 = 0;
      }
      v40 = writer->curr_iov_written_;
      v41 = &writer->output_iov_[v73];
      v42 = v41->iov_len - v40;
      if ( v42 > v20 )
      {
        v42 = v20;
LABEL_51:
        iov_base = v41->iov_base;
        if ( v42 > v20 )
          v42 = v20;
        v44 = 0;
        v45 = iov_base + v40;
        v46 = iov_base + v22;
        do
        {
          *(v45 + v44) = *(v46 + v44);
          ++v44;
        }
        while ( v42 - v44 > 0 );
        writer->curr_iov_written_ += v42;
        v22 += v42;
        v20 -= v42;
        writer->total_written_ += v42;
        v73 = v26;
        continue;
      }
      break;
    }
    if ( v42 != 0 )
      goto LABEL_51;
    if ( v73 + 1 < writer->output_iov_count_ )
    {
      writer->curr_iov_index_ = v73 + 1;
      writer->curr_iov_written_ = 0;
      continue;
    }
    break;
  }
LABEL_43:
  LODWORD(v7) = decompressor.peeked_;
LABEL_44:
  eof = decompressor.eof_;
  if ( decompressor.eof_ )
    eof = writer->total_written_ == writer->output_limit_;
LABEL_6:
  (*(decompressor.reader_->_vptr_Source + 4))(decompressor.reader_, v7);
  return eof;
}


// snappy::InternalUncompress<snappy::SnappyArrayWriter>  (line 852, @0x0000000002f8b760, libserver.so)  // inlines: Append, AppendFromSelf, DecompressAllTags<snappy::SnappyArrayWriter>, IncrementalCopy, IncrementalCopyFastPath, InternalUncompressAllTags<snappy::SnappyArrayWriter>, ReadUncompressedLength, SetExpectedLength, SnappyDecompressor, TryFastAppend, UnalignedCopy64, memcpy, ~SnappyDecompressor
// calls: snappy::SnappyDecompressor::RefillTag, memcpy, __stack_chk_fail, _Unwind_Resume
// callers: snappy::RawUncompress
// globals: snappy::char_table, snappy::wordmask
bool __fastcall snappy::InternalUncompress<snappy::SnappyArrayWriter>(
        snappy::Source *r,
        snappy::SnappyArrayWriter *writer)
{
  int v2; // r14d
  int v4; // ebx
  char *v5; // rax
  char v6; // r13
  snappy::uint32 peeked; // ecx
  bool v8; // bl
  const char *ip; // rax
  char *op; // r8
  char *op_limit; // rdx
  bool v13; // cc
  __int64 v14; // rbx
  const char *v15; // r9
  unsigned __int64 v16; // rdx
  size_t v17; // rbx
  int v18; // ecx
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rdi
  const char *ip_limit; // rdx
  size_t v24; // r15
  char *v25; // rax
  snappy::Source *reader; // rdi
  __int64 v27; // rsi
  __int64 v28; // rax
  char *v29; // rdx
  int v30; // r10d
  char *v31; // rcx
  __int64 v32; // rdx
  int v33; // r11d
  char *v34; // rax
  int v35; // ebx
  __int64 v36; // rdx
  char *v37; // rax
  const char *v38; // rdx
  char *v39; // rdx
  char *v40; // rax
  const char *v41; // [rsp+8h] [rbp-78h]
  __int64 v42; // [rsp+10h] [rbp-70h] BYREF
  size_t v43; // [rsp+18h] [rbp-68h] BYREF
  snappy::SnappyDecompressor decompressor; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v45; // [rsp+48h] [rbp-38h]

  v2 = 0;
  v4 = 0;
  decompressor.reader_ = r;
  v45 = __readfsqword(0x28u);
  memset(&decompressor.ip_, 0, 21);
  v5 = (*(r->_vptr_Source + 3))(r, &v42);
  if ( v42 == 0 )
  {
LABEL_5:
    peeked = decompressor.peeked_;
    v8 = 0;
    goto LABEL_6;
  }
  while ( 1 )
  {
    v6 = *v5;
    (*(decompressor.reader_->_vptr_Source + 4))(decompressor.reader_, 1);
    v2 |= (v6 & 0x7F) << v4;
    if ( v6 >= 0 )
      break;
    v4 += 7;
    if ( v4 != 35 )
    {
      v5 = (*(decompressor.reader_->_vptr_Source + 3))(decompressor.reader_, &v42);
      if ( v42 != 0 )
        continue;
    }
    goto LABEL_5;
  }
  ip = decompressor.ip_;
  op = writer->op_;
  op_limit = &op[v2];
  v13 = decompressor.ip_limit_ - decompressor.ip_ <= 4;
  writer->op_limit_ = op_limit;
  if ( v13 )
  {
    if ( !snappy::SnappyDecompressor::RefillTag(&decompressor) )
      goto LABEL_33;
    ip = decompressor.ip_;
    op_limit = writer->op_limit_;
    op = writer->op_;
  }
  v14 = *ip;
  v15 = ip + 1;
  if ( (v14 & 3) == 0 )
    goto LABEL_9;
LABEL_14:
  LOWORD(v18) = snappy::char_table[v14];
  v19 = v18 >> 11;
  v20 = (*(ip + 1) & snappy::wordmask[v19]) + (v18 & 0x700);
  if ( (op - writer->base_) > v20 - 1 )
  {
    v18 = v18;
    v21 = op_limit - op;
    v22 = v18;
    if ( v18 <= 0x10uLL && v20 > 7 && v21 > 0xF )
    {
      *op = *&op[-v20];
      *(op + 1) = *&op[8 - v20];
      goto LABEL_19;
    }
    if ( v21 >= v18 + 10 )
    {
      v30 = v18;
      v31 = &op[-v20];
      v32 = v20;
      if ( v20 > 7 )
      {
        v34 = op;
      }
      else
      {
        v33 = op;
        v34 = op;
        do
        {
          *v34 = *v31;
          v34 += v32;
          v35 = v31 - v33;
          v33 = v34;
          v32 = v34 - v31;
          v30 += v35;
        }
        while ( v34 - v31 <= 7 );
      }
      if ( v30 > 0 )
      {
        v36 = 0;
        do
        {
          *&v34[v36] = *&v31[v36];
          v36 += 8;
        }
        while ( v36 != 8LL * ((v30 - 1) >> 3) + 8 );
      }
LABEL_19:
      ip_limit = decompressor.ip_limit_;
      ip = &v15[v19];
      op += v22;
      writer->op_ = op;
      if ( ip_limit - &v15[v19] > 4 )
        goto LABEL_13;
LABEL_20:
      decompressor.ip_ = ip;
      if ( snappy::SnappyDecompressor::RefillTag(&decompressor) )
      {
        ip = decompressor.ip_;
        for ( op = writer->op_; ; writer->op_ = op )
        {
          while ( 1 )
          {
LABEL_13:
            v14 = *ip;
            v15 = ip + 1;
            op_limit = writer->op_limit_;
            if ( (v14 & 3) != 0 )
              goto LABEL_14;
LABEL_9:
            v16 = op_limit - op;
            v17 = ((v14 >> 2) + 1);
            if ( v17 <= 0x10 && (decompressor.ip_limit_ - v15) > &stru_10.CThreadLockableObject<CThreadNullMutex> + 4 )
              break;
            if ( v17 > 0x3C )
            {
              v15 += v17 - 60;
              v24 = decompressor.ip_limit_ - v15;
              v17 = (*(ip + 1) & snappy::wordmask[v17 - 60]) + 1;
              goto LABEL_24;
            }
LABEL_32:
            v24 = decompressor.ip_limit_ - v15;
LABEL_24:
            if ( v17 > v24 )
            {
              if ( v16 < v24 )
                goto LABEL_33;
              while ( 1 )
              {
                v25 = memcpy(op, v15, v24);
                reader = decompressor.reader_;
                v17 -= v24;
                v27 = decompressor.peeked_;
                writer->op_ = &v25[v24];
                (*(reader->_vptr_Source + 4))(reader, v27);
                v28 = (*(decompressor.reader_->_vptr_Source + 3))(decompressor.reader_, &v43);
                v24 = v43;
                v15 = v28;
                decompressor.peeked_ = v43;
                if ( v43 == 0 )
                  break;
                op = writer->op_;
                v29 = writer->op_limit_;
                decompressor.ip_limit_ = (v28 + v43);
                v16 = v29 - op;
                if ( v17 <= v43 )
                  goto LABEL_42;
                if ( v16 < v43 )
                {
                  peeked = v43;
                  goto LABEL_30;
                }
              }
              peeked = 0;
              goto LABEL_30;
            }
LABEL_42:
            if ( v17 > v16 )
              goto LABEL_33;
            v41 = v15;
            v37 = memcpy(op, v15, v17);
            v38 = decompressor.ip_limit_;
            op = &v37[v17];
            writer->op_ = &v37[v17];
            ip = &v41[v17];
            if ( v38 - &v41[v17] <= 4 )
              goto LABEL_20;
          }
          if ( v16 <= 0xF )
            goto LABEL_32;
          *op = *(ip + 1);
          *(op + 1) = *(ip + 9);
          ip = &v15[v17];
          op += v17;
        }
      }
      goto LABEL_33;
    }
    if ( v18 <= v21 )
    {
      v39 = &op[-v20];
      v40 = op;
      do
      {
        ++v39;
        --v18;
        *v40++ = *(v39 - 1);
      }
      while ( v18 > 0 );
      goto LABEL_19;
    }
  }
LABEL_33:
  peeked = decompressor.peeked_;
LABEL_30:
  v8 = 0;
  if ( decompressor.eof_ )
    v8 = writer->op_ == writer->op_limit_;
LABEL_6:
  (*(decompressor.reader_->_vptr_Source + 4))(decompressor.reader_, peeked);
  return v8;
}


// snappy::GetUncompressedLength  (line 871, @0x0000000002f8bbe0, libserver.so)  // inlines: ReadUncompressedLength, ~SnappyDecompressor
// calls: _Unwind_Resume
bool __fastcall snappy::GetUncompressedLength(snappy::Source *source, snappy::uint32 *result)
{
  int v3; // r12d
  char *v5; // rax
  char v6; // r13
  bool v7; // r12
  _QWORD v9[7]; // [rsp+8h] [rbp-38h] BYREF

  v3 = 0;
  *result = 0;
  while ( 1 )
  {
    v5 = (*(source->_vptr_Source + 3))(source, v9);
    if ( v9[0] == 0 )
    {
LABEL_5:
      v7 = 0;
      goto LABEL_6;
    }
    v6 = *v5;
    (*(source->_vptr_Source + 4))(source, 1);
    *result |= (v6 & 0x7F) << v3;
    if ( v6 >= 0 )
      break;
    v3 += 7;
    if ( v3 == 35 )
      goto LABEL_5;
  }
  v7 = 1;
LABEL_6:
  (*(source->_vptr_Source + 4))(source, 0);
  return v7;
}


// snappy::Compress  (line 876, @0x0000000002f8bc90, libserver.so)  // inlines: Encode32, MaxCompressedLength, WorkingMemory, memcpy, ~WorkingMemory
// calls: snappy::internal::WorkingMemory::GetHashTable, snappy::internal::CompressFragment, memcpy, operator new [], operator delete [], __stack_chk_fail, _Unwind_Resume
// callers: snappy::RawCompress
size_t __fastcall snappy::Compress(snappy::Source *reader, snappy::Sink *writer)
{
  __int64 v3; // rax
  size_t v4; // rbx
  unsigned int v5; // eax
  char *v6; // rax
  char *v7; // r14
  __int64 i; // rax
  char *v9; // rax
  snappy::uint16 *v10; // rcx
  char *v11; // rax
  signed __int64 v12; // rbx
  size_t v13; // r13
  size_t v14; // rbx
  const void *v15; // rax
  size_t v16; // rdx
  size_t v17; // r15
  size_t written; // [rsp+18h] [rbp-898h]
  char *dest; // [rsp+20h] [rbp-890h]
  char *desta; // [rsp+20h] [rbp-890h]
  size_t pending_advance; // [rsp+28h] [rbp-888h]
  char *scratch_output; // [rsp+30h] [rbp-880h]
  size_t N; // [rsp+38h] [rbp-878h]
  const char *fragment; // [rsp+40h] [rbp-870h]
  int table_size; // [rsp+54h] [rbp-85Ch] BYREF
  size_t fragment_size; // [rsp+58h] [rbp-858h] BYREF
  snappy::internal::WorkingMemory wmem; // [rsp+60h] [rbp-850h] BYREF
  char ulength[5]; // [rsp+870h] [rbp-40h] BYREF
  _BYTE v31[59]; // [rsp+875h] [rbp-3Bh] BYREF

  *&v31[3] = __readfsqword(0x28u);
  v3 = (*(reader->_vptr_Source + 2))(reader);
  v4 = v3;
  if ( v3 <= 0x7F )
  {
    ulength[0] = v3;
    v6 = &ulength[1];
  }
  else
  {
    ulength[0] = v3 | 0x80;
    v5 = v3 >> 7;
    if ( v4 <= 0x3FFF )
    {
      ulength[1] = v5;
      v6 = &ulength[2];
    }
    else
    {
      ulength[1] = v5 | 0x80;
      if ( v4 <= 0x1FFFFF )
      {
        ulength[2] = v4 >> 14;
        v6 = &ulength[3];
      }
      else
      {
        ulength[2] = (v4 >> 14) | 0x80;
        if ( v4 <= 0xFFFFFFF )
        {
          ulength[3] = v4 >> 21;
          v6 = &ulength[4];
        }
        else
        {
          ulength[3] = (v4 >> 21) | 0x80;
          ulength[4] = v4 >> 28;
          v6 = v31;
        }
      }
    }
  }
  written = v6 - ulength;
  (*(writer->_vptr_Sink + 2))(writer, ulength, v6 - ulength);
  wmem.large_table_ = 0;
  if ( v4 != 0 )
  {
    v7 = 0;
    N = v4;
    scratch_output = 0;
    for ( i = (*(reader->_vptr_Source + 3))(reader, &fragment_size);
          ;
          i = (*(reader->_vptr_Source + 3))(reader, &fragment_size) )
    {
      fragment = i;
      v13 = 0x10000;
      v14 = fragment_size;
      if ( N <= 0x10000 )
        v13 = N;
      if ( fragment_size >= v13 )
      {
        fragment_size = v13;
        pending_advance = v13;
      }
      else
      {
        if ( v7 == 0 )
          v7 = operator new[](v13);
        memcpy(v7, fragment, v14);
        (*(reader->_vptr_Source + 4))(reader, v14);
        do
        {
          v15 = (*(reader->_vptr_Source + 3))(reader, &fragment_size);
          v16 = fragment_size;
          if ( v13 - v14 <= fragment_size )
            v16 = v13 - v14;
          v17 = v16;
          memcpy(&v7[v14], v15, v16);
          v14 += v17;
          (*(reader->_vptr_Source + 4))(reader, v17);
        }
        while ( v14 < v13 );
        fragment_size = v13;
        fragment = v7;
        pending_advance = 0;
      }
      dest = snappy::internal::WorkingMemory::GetHashTable(&wmem, v13, &table_size);
      if ( scratch_output == 0 )
        scratch_output = operator new[](v13 + v13 / 6 + 32);
      v9 = (*(writer->_vptr_Sink + 3))(writer, v13 + v13 / 6 + 32, scratch_output);
      v10 = dest;
      desta = v9;
      v11 = snappy::internal::CompressFragment(fragment, fragment_size, v9, v10, table_size);
      v12 = v11 - desta;
      (*(writer->_vptr_Sink + 2))(writer, desta, v11 - desta);
      written += v12;
      (*(reader->_vptr_Source + 4))(reader, pending_advance);
      if ( N == v13 )
        break;
      N -= v13;
    }
    if ( v7 != 0 )
      operator delete[](v7);
    if ( scratch_output != 0 )
      operator delete[](scratch_output);
    if ( wmem.large_table_ != 0 )
      operator delete[](wmem.large_table_);
  }
  return written;
}


// snappy::RawUncompressToIOVec  (line 1124, @0x0000000002f8c040, libserver.so)  // inlines: ByteArraySource, RawUncompressToIOVec, SnappyIOVecWriter
// calls: snappy::InternalUncompress<snappy::SnappyIOVecWriter>, snappy::ByteArraySource::~ByteArraySource, _Unwind_Resume
bool __fastcall snappy::RawUncompressToIOVec(
        const char *compressed,
        size_t compressed_length,
        const iovec *iov,
        size_t iov_cnt)
{
  bool v5; // [rsp+Ch] [rbp-64h]
  snappy::Source r; // [rsp+10h] [rbp-60h] BYREF
  const char *compresseda; // [rsp+18h] [rbp-58h]
  size_t compressed_lengtha; // [rsp+20h] [rbp-50h]
  snappy::SnappyIOVecWriter writer; // [rsp+30h] [rbp-40h] BYREF

  compresseda = compressed;
  compressed_lengtha = compressed_length;
  writer.output_iov_ = iov;
  writer.output_iov_count_ = iov_cnt;
  writer.curr_iov_index_ = 0;
  writer.curr_iov_written_ = 0;
  r._vptr_Source = off_47BF1F0;
  writer.total_written_ = 0;
  writer.output_limit_ = -1;
  v5 = snappy::InternalUncompress<snappy::SnappyIOVecWriter>(&r, &writer);
  snappy::ByteArraySource::~ByteArraySource(&r);
  return v5;
}


// snappy::RawUncompressToIOVec  (line 1130, @0x0000000002f8c0d0, libserver.so)  // inlines: SnappyIOVecWriter
// calls: snappy::InternalUncompress<snappy::SnappyIOVecWriter>
bool __fastcall snappy::RawUncompressToIOVec(snappy::Source *compressed, const iovec *iov, size_t iov_cnt)
{
  snappy::SnappyIOVecWriter output; // [rsp+0h] [rbp-30h] BYREF

  output.output_iov_ = iov;
  output.output_iov_count_ = iov_cnt;
  output.curr_iov_index_ = 0;
  output.curr_iov_written_ = 0;
  output.total_written_ = 0;
  output.output_limit_ = -1;
  return snappy::InternalUncompress<snappy::SnappyIOVecWriter>(compressed, &output);
}


// snappy::RawUncompress  (line 1226, @0x0000000002f8c110, libserver.so)  // inlines: ByteArraySource, RawUncompress, SnappyArrayWriter
// calls: snappy::InternalUncompress<snappy::SnappyArrayWriter>, snappy::ByteArraySource::~ByteArraySource, _Unwind_Resume
// callers: CGCJobLoadSaveGame::BYieldingRunJob, snappy::Uncompress
bool __fastcall snappy::RawUncompress(const char *compressed, size_t n, char *uncompressed)
{
  bool v4; // [rsp+Ch] [rbp-54h]
  snappy::Source r; // [rsp+10h] [rbp-50h] BYREF
  const char *compresseda; // [rsp+18h] [rbp-48h]
  size_t na; // [rsp+20h] [rbp-40h]
  snappy::SnappyArrayWriter writer; // [rsp+30h] [rbp-30h] BYREF

  compresseda = compressed;
  na = n;
  writer.base_ = uncompressed;
  writer.op_ = uncompressed;
  r._vptr_Source = off_47BF1F0;
  v4 = snappy::InternalUncompress<snappy::SnappyArrayWriter>(&r, &writer);
  snappy::ByteArraySource::~ByteArraySource(&r);
  return v4;
}


// snappy::RawUncompress  (line 1231, @0x0000000002f8c180, libserver.so)  // inlines: SnappyArrayWriter
// calls: snappy::InternalUncompress<snappy::SnappyArrayWriter>
bool __fastcall snappy::RawUncompress(snappy::Source *compressed, char *uncompressed)
{
  snappy::SnappyArrayWriter output; // [rsp+0h] [rbp-20h] BYREF

  output.base_ = uncompressed;
  output.op_ = uncompressed;
  return snappy::InternalUncompress<snappy::SnappyArrayWriter>(compressed, &output);
}


// snappy::Uncompress  (line 1236, @0x0000000002f8c1a0, libserver.so)  // inlines: STLStringResizeUninitialized, _M_data, _M_leak, _M_rep, begin, empty, resize, size, string_as_array
// calls: snappy::GetUncompressedLength, std::string::resize(ulong,char), std::string::_M_leak_hard(void), snappy::RawUncompress
bool __fastcall snappy::Uncompress(const char *compressed, size_t n, snappy::string *uncompressed)
{
  bool result; // al
  char *M_p; // rdx
  size_t ulength[5]; // [rsp+8h] [rbp-28h] BYREF

  result = snappy::GetUncompressedLength(compressed, n, ulength);
  if ( result )
  {
    result = 0;
    if ( ulength[0] <= 0x3FFFFFFFFFFFFFF9LL )
    {
      std::string::resize(uncompressed, ulength[0], 0);
      M_p = uncompressed->_M_dataplus._M_p;
      if ( *(uncompressed->_M_dataplus._M_p - 3) != 0 )
      {
        if ( *(M_p - 2) >= 0 )
        {
          std::string::_M_leak_hard(uncompressed);
          M_p = uncompressed->_M_dataplus._M_p;
        }
      }
      else
      {
        M_p = 0;
      }
      return snappy::RawUncompress(compressed, n, M_p);
    }
  }
  return result;
}


// snappy::IsValidCompressedBuffer  (line 1281, @0x0000000002f8c240, libserver.so)  // inlines: Append, AppendFromSelf, ByteArraySource, DecompressAllTags<snappy::SnappyDecompressionValidator>, InternalUncompress<snappy::SnappyDecompressionValidator>, InternalUncompressAllTags<snappy::SnappyDecompressionValidator>, ReadUncompressedLength, SnappyDecompressionValidator, SnappyDecompressor, ~SnappyDecompressor
// calls: snappy::ByteArraySource::~ByteArraySource, snappy::SnappyDecompressor::RefillTag, __stack_chk_fail, _Unwind_Resume
// globals: snappy::wordmask, snappy::char_table
bool __fastcall snappy::IsValidCompressedBuffer(const char *compressed, size_t n)
{
  unsigned __int64 v2; // r13
  int v3; // ebx
  const char *v4; // rax
  char v5; // r12
  __int64 v6; // rdx
  bool eof; // r12
  const char *ip; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // r12
  __int64 v12; // rax
  unsigned __int64 v13; // r12
  __int64 i; // rsi
  unsigned __int64 v15; // rcx
  unsigned int v16; // esi
  size_t v17; // [rsp+10h] [rbp-90h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-88h] BYREF
  snappy::ByteArraySource v19; // [rsp+20h] [rbp-80h] BYREF
  snappy::SnappyDecompressor v20; // [rsp+40h] [rbp-60h] BYREF
  unsigned __int64 v21; // [rsp+68h] [rbp-38h]

  LODWORD(v2) = 0;
  v3 = 0;
  v19.ptr_ = compressed;
  v21 = __readfsqword(0x28u);
  v19.left_ = n;
  v20.reader_ = &v19;
  memset(&v20.ip_, 0, 21);
  v19._vptr_Source = off_47BF1F0;
  v4 = snappy::ByteArraySource::Peek(&v19, &v17);
  if ( v17 == 0 )
  {
LABEL_5:
    LODWORD(v6) = v20.peeked_;
    eof = 0;
    goto LABEL_6;
  }
  while ( 1 )
  {
    v5 = *v4;
    (*(v20.reader_->_vptr_Source + 4))(v20.reader_, 1);
    v2 = ((v5 & 0x7F) << v3) | v2;
    if ( v5 >= 0 )
      break;
    v3 += 7;
    if ( v3 != 35 )
    {
      v4 = (*(v20.reader_->_vptr_Source + 3))(v20.reader_, &v17);
      if ( v17 != 0 )
        continue;
    }
    goto LABEL_5;
  }
  ip = v20.ip_;
  if ( v20.ip_limit_ - v20.ip_ <= 4 )
  {
    if ( !snappy::SnappyDecompressor::RefillTag(&v20) )
    {
      LODWORD(v6) = v20.peeked_;
      v10 = 0;
      goto LABEL_20;
    }
    ip = v20.ip_;
  }
  v10 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = *ip;
      v12 = (ip + 1);
      if ( (v11 & 3) == 0 )
        break;
      v15 = snappy::char_table[v11] >> 11;
      v16 = *(ip + 1) & snappy::wordmask[v15];
      ip = (v12 + v15);
      if ( ((snappy::char_table[v11] & 0x700) + v16) - 1 >= v10 )
        goto LABEL_32;
      v10 += snappy::char_table[v11];
      if ( v2 < v10 )
        goto LABEL_32;
      if ( v20.ip_limit_ - ip <= 4 )
      {
LABEL_25:
        v20.ip_ = ip;
        if ( !snappy::SnappyDecompressor::RefillTag(&v20) )
          goto LABEL_32;
        ip = v20.ip_;
      }
    }
    v13 = ((v11 >> 2) + 1);
    if ( v13 > 0x3C )
    {
      v12 += v13 - 60;
      v13 = (*(ip + 1) & snappy::wordmask[v13 - 60]) + 1;
    }
    v6 = &v20.ip_limit_[-v12];
    if ( &v20.ip_limit_[-v12] < v13 )
      break;
LABEL_27:
    v10 += v13;
    if ( v2 < v10 )
      goto LABEL_32;
    ip = (v12 + v13);
    if ( &v20.ip_limit_[-v12 - v13] <= 4 )
      goto LABEL_25;
  }
  v10 += v6;
  if ( v2 < v10 )
  {
LABEL_32:
    LODWORD(v6) = v20.peeked_;
    goto LABEL_20;
  }
  for ( i = v20.peeked_; ; i = v18 )
  {
    v13 -= v6;
    (*(v20.reader_->_vptr_Source + 4))(v20.reader_, i);
    v12 = (*(v20.reader_->_vptr_Source + 3))(v20.reader_, &v18);
    v6 = v18;
    v20.peeked_ = v18;
    if ( v18 == 0 )
      break;
    v20.ip_limit_ = (v12 + v18);
    if ( v13 <= v18 )
      goto LABEL_27;
    v10 += v18;
    if ( v2 < v10 )
      goto LABEL_20;
  }
  LODWORD(v6) = 0;
LABEL_20:
  eof = v20.eof_;
  if ( v20.eof_ )
    eof = v10 == v2;
LABEL_6:
  (*(v20.reader_->_vptr_Source + 4))(v20.reader_, v6);
  snappy::ByteArraySource::~ByteArraySource(&v19);
  return eof;
}


// snappy::RawCompress  (line 1287, @0x0000000002f8c520, libserver.so)  // inlines: ByteArraySource, UncheckedByteArraySink
// calls: snappy::Compress, snappy::UncheckedByteArraySink::~UncheckedByteArraySink, snappy::ByteArraySource::~ByteArraySource, _Unwind_Resume
// callers: snappy::Compress
void __fastcall snappy::RawCompress(
        const char *input,
        size_t input_length,
        char *compressed,
        size_t *compressed_length)
{
  snappy::UncheckedByteArraySink writer; // [rsp+0h] [rbp-50h] BYREF
  snappy::Source reader; // [rsp+10h] [rbp-40h] BYREF
  const char *inputa; // [rsp+18h] [rbp-38h]
  size_t input_lengtha; // [rsp+20h] [rbp-30h]

  inputa = input;
  input_lengtha = input_length;
  writer.dest_ = compressed;
  reader._vptr_Source = off_47BF1F0;
  writer._vptr_Sink = off_47BF230;
  snappy::Compress(&reader, &writer);
  *compressed_length = writer.dest_ - compressed;
  snappy::UncheckedByteArraySink::~UncheckedByteArraySink(&writer);
  snappy::ByteArraySource::~ByteArraySource(&reader);
}


// snappy::Compress  (line 1299, @0x0000000002f8c5c0, libserver.so)  // inlines: MaxCompressedLength, _M_data, _M_leak, _M_rep, begin, empty, resize, size, string_as_array
// calls: std::string::resize(ulong,char), std::string::_M_leak_hard(void), snappy::RawCompress
// callers: CGCJobUploadSaveGame::BYieldingRunJob
size_t __fastcall snappy::Compress(const char *input, size_t input_length, snappy::string *compressed)
{
  char *M_p; // rdx
  size_t compressed_length[5]; // [rsp+8h] [rbp-28h] BYREF

  std::string::resize(compressed, input_length + input_length / 6 + 32, 0);
  M_p = compressed->_M_dataplus._M_p;
  if ( *(compressed->_M_dataplus._M_p - 3) != 0 )
  {
    if ( *(M_p - 2) >= 0 )
    {
      std::string::_M_leak_hard(compressed);
      M_p = compressed->_M_dataplus._M_p;
    }
  }
  else
  {
    M_p = 0;
  }
  snappy::RawCompress(input, input_length, M_p, compressed_length);
  std::string::resize(compressed, compressed_length[0], 0);
  return compressed_length[0];
}


