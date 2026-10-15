
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_utlbinaryblock.cpp  (line 0, @0x0000000001a6ec30, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_utlbinaryblock_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CUtlBinaryBlock::CUtlBinaryBlock  (line 12, @0x0000000003265760, libserver.so)  // inlines: CUtlMemory
// calls: CMemAllocSystemInitialize
void __fastcall CUtlBinaryBlock::CUtlBinaryBlock(CUtlBinaryBlock *const this, int growSize, int initSize)
{
  this->m_Memory.m_pMemory = 0;
  this->m_Memory.m_nAllocationCount = initSize;
  this->m_Memory.m_nGrowSize = growSize & 0x3FFFFFFF;
  if ( initSize != 0 )
  {
    CMemAllocSystemInitialize(this);
    this->m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, this->m_Memory.m_nAllocationCount);
  }
  this->m_nActualLength = 0;
}


// CUtlBinaryBlock::CUtlBinaryBlock  (line 17, @0x00000000032657b0, libserver.so)  // inlines: CUtlMemory
void __fastcall CUtlBinaryBlock::CUtlBinaryBlock(
        CUtlBinaryBlock *const this,
        void *pMemory,
        int nSizeInBytes,
        int nInitialLength)
{
  this->m_Memory.m_pMemory = pMemory;
  this->m_Memory.m_nAllocationCount = nSizeInBytes;
  this->m_Memory.m_nGrowSize = 0x40000000;
  this->m_nActualLength = nInitialLength;
}


// CUtlBinaryBlock::CUtlBinaryBlock  (line 22, @0x00000000032657d0, libserver.so)  // inlines: CUtlMemory
void __fastcall CUtlBinaryBlock::CUtlBinaryBlock(CUtlBinaryBlock *const this, const void *pMemory, int nSizeInBytes)
{
  this->m_Memory.m_pMemory = pMemory;
  this->m_Memory.m_nAllocationCount = nSizeInBytes;
  this->m_Memory.m_nGrowSize = -1073741824;
  this->m_nActualLength = nSizeInBytes;
}


// CUtlBinaryBlock::CUtlBinaryBlock  (line 27, @0x0000000003265940, libserver.so)  // inlines: CUtlMemory, Purge, ~CUtlMemory
// calls: CUtlBinaryBlock::Set, _Unwind_Resume
void __fastcall CUtlBinaryBlock::CUtlBinaryBlock(CUtlBinaryBlock *const this, const CUtlBinaryBlock *const src)
{
  this->m_Memory.m_pMemory = 0;
  this->m_Memory.m_nAllocationCount = 0;
  this->m_Memory.m_nGrowSize = 0;
  CUtlBinaryBlock::Set(this, src->m_Memory.m_pMemory, src->m_nActualLength);
}


// CUtlBinaryBlock::Get  (line 32, @0x00000000032657f0, libserver.so)  // inlines: memcpy
// calls: memcpy
void __fastcall CUtlBinaryBlock::Get(const CUtlBinaryBlock *const this, void *pValue, int nLen)
{
  if ( nLen > this->m_nActualLength )
    nLen = this->m_nActualLength;
  if ( nLen > 0 )
    memcpy(pValue, this->m_Memory.m_pMemory, nLen);
}


// CUtlBinaryBlock::SetLength  (line 46, @0x0000000003265850, libserver.so)
// calls: CUtlMemory<unsigned char, int>::Grow
// callers: Unserialize, CUtlBinaryBlock::Set
void __fastcall CUtlBinaryBlock::SetLength(CUtlBinaryBlock *const this, int nLength)
{
  int m_nAllocationCount; // eax
  int v5; // eax

  this->m_nActualLength = nLength;
  m_nAllocationCount = this->m_Memory.m_nAllocationCount;
  if ( nLength > m_nAllocationCount )
  {
    CUtlMemory<unsigned char,int>::Grow(&this->m_Memory, nLength - m_nAllocationCount);
    v5 = this->m_Memory.m_nAllocationCount;
    if ( nLength > v5 )
      this->m_nActualLength = v5;
  }
}


// CUtlBinaryBlock::Set  (line 72, @0x0000000003265890, libserver.so)  // inlines: memcpy, memmove
// calls: CUtlBinaryBlock::SetLength, memcpy, memmove
// callers: CUtlBinaryBlock::operator=, CUtlBinaryBlock::CUtlBinaryBlock
void __fastcall CUtlBinaryBlock::Set(CUtlBinaryBlock *const this, const void *pValue, int nLen)
{
  __int64 v5; // rbx
  size_t m_nActualLength; // rdx
  unsigned __int8 *m_pMemory; // rdi

  v5 = nLen;
  if ( pValue == 0 )
    v5 = 0;
  CUtlBinaryBlock::SetLength(this, v5);
  m_nActualLength = this->m_nActualLength;
  if ( m_nActualLength != 0 )
  {
    m_pMemory = this->m_Memory.m_pMemory;
    if ( this->m_Memory.m_pMemory >= pValue + v5 || pValue >= &m_pMemory[m_nActualLength] )
      memcpy(m_pMemory, pValue, m_nActualLength);
    else
      memmove(m_pMemory, pValue, m_nActualLength);
  }
}


// CUtlBinaryBlock::operator=  (line 98, @0x0000000003265910, libserver.so)
// calls: CUtlBinaryBlock::Set
CUtlBinaryBlock *__fastcall CUtlBinaryBlock::operator=(CUtlBinaryBlock *const this, const CUtlBinaryBlock *const src)
{
  CUtlBinaryBlock::Set(this, src->m_Memory.m_pMemory, src->m_nActualLength);
  return this;
}


// CUtlBinaryBlock::operator==  (line 106, @0x0000000003265820, libserver.so)
// calls: memcmp
bool __fastcall CUtlBinaryBlock::operator==(const CUtlBinaryBlock *const this, const CUtlBinaryBlock *const src)
{
  size_t m_nActualLength; // rdx
  bool result; // al

  m_nActualLength = src->m_nActualLength;
  result = 0;
  if ( m_nActualLength == this->m_nActualLength )
    return memcmp(src->m_Memory.m_pMemory, this->m_Memory.m_pMemory, m_nActualLength) == 0;
  return result;
}


