// Reconstructed from DWARF by pahole; not original source.

// src/kv3lib/keyvalues3.cpp:62
class CKeyValues3Cluster : public CAlignedNewDeleteNoBase<1024> {
public:

private:

	uint64 m_nAllocatedFlags;  // +0x10
	CKeyValues3Cluster();
	~CKeyValues3Cluster();
	CKeyValues3Cluster * ClusterFromPointer(const KeyValues3 *);
	void Init(CKeyValues3Context *);
	int AllocationCount();
	bool IsFull();
	bool IsEmpty();
	KeyValues3 * Allocate();
	void Free(KeyValues3 *);
	KeyValues3 * Get(int);
	CKeyValues3Context * GetParentContext();
	void Dump();
	CKeyValues3Cluster * GetNextFreeCluster();
	void SetNextFreeCluster(CKeyValues3Cluster *);

	// sizeof = 1024
};

// src/kv3lib/keyvalues3.cpp:100
struct KeyValues3ContextImpl_t {
	CUtlSymbolTableLarge m_Symbols;  // +0x460
	int m_nOutstandingKV3Allocations;  // +0x4d0
	KeyValues3ContextImpl_t();
	~KeyValues3ContextImpl_t();

	// sizeof = 2048
};

// src/kv3lib/keyvalues3.cpp:115
class CKeyValues3Table {
	enum MemberFlags_t {
		MEMBER_FLAG_EXTERNAL_NAME = 0x1,
	};

private:

	CKeyValues3Table();
	~CKeyValues3Table();
	void Init(KeyValues3 *);
	int FindMember_Internal(KeyValues3LowercaseHash_t, const char *);
	int FindOrCreateMember_Internal(KeyValues3LowercaseHash_t, const char *, bool);
	KeyValues3 * MemberData(int);
	const KeyValues3 * MemberData(int);
	const char * MemberName(int);
	KeyValues3LowercaseHash_t MemberNameHash(int);
	void Clear();
	void CopyFrom(const CKeyValues3Table *);
	void CopyMatchingKeysFrom(const CKeyValues3Table *);
	bool IsIdenticalTo(const CKeyValues3Table *, bool);
	int Count();
	void Remove(int);
	bool Remove(KeyValues3 *);
	void MigrateToParent(KeyValues3 *);

	// sizeof = 272
};

// src/kv3lib/keyvalues3.cpp:314
struct KeyValues3Array_t {
	intp m_nCount;  // +0x0
	KeyValues3 * * AsKVArray();

	// sizeof = 8
};

// src/kv3lib/keyvalues3.cpp:324
struct KeyValues3BinaryBlob_t {
	intp m_nCount;  // +0x0
	const uint8 * AsByteArray();
	uint8 * AsByteArray();

	// sizeof = 8
};

// src/kv3lib/keyvalues3.cpp:335
struct KeyValues3BinaryBlobExternal_t {
	intp m_nCount;  // +0x0
	const uint8 * m_pData;  // +0x8
	const uint8 * AsByteArray();

	// sizeof = 16
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_keyvalues3.cpp  (line 0, @0x0000000001a6ad00, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_keyvalues3_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CKeyValues3Cluster::ClusterFromPointer  (line 176, @0x000000000312e840, libserver.so)
CKeyValues3Cluster *__fastcall CKeyValues3Cluster::ClusterFromPointer(const KeyValues3 *pKV3)
{
  CKeyValues3Cluster *result; // rax

  result = 0;
  if ( (*pKV3 & 1) == 0 )
    return (pKV3 & 0xFFFFFFFFFFFFFC00LL);
  return result;
}


// CKeyValues3Cluster::CKeyValues3Cluster  (line 192, @0x0000000003131ae0, libserver.so)  // inlines: Internal_ClearDataWithoutFreeing, KeyValues3, LeafCodeInfo_t, ~KeyValues3
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, KeyValues3::Internal_FreeAllocation, _Unwind_Resume
// callers: CKeyValues3Context::AllocKV_Internal, CKeyValues3Context::CKeyValues3Context
// strings: "keyvalues3.cpp", "CKeyValues3Cluster", "CKeyValues3Cluster allocated with bad alignment! (%p) (If this is inside of a heap alloca
void __fastcall CKeyValues3Cluster::CKeyValues3Cluster(CKeyValues3Cluster *const this)
{
  KeyValues3 *m_Values; // r13
  KeyValues3 *v2; // rax
  KeyValues3 *v4; // rbx
  char v5; // dl
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // edx
  int v13; // ecx
  int v14; // esi
  int v15; // r8d
  int v16; // r9d
  int v17; // r12d
  LeafCodeInfo_t v18; // [rsp+0h] [rbp-40h] BYREF

  m_Values = this->m_Values;
  v2 = this->m_Values;
  v4 = &this->m_Values[62];
  do
  {
    v5 = *v2;
    v2->m_nAsInt64 = 0;
    *v2 = v5 & 0xE0 | 3;
    *v2++ &= 0xFFE0001F;
  }
  while ( v2 != v4 );
  if ( (this & 0x3FF) != 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v18.m_szFile = "keyvalues3.cpp";
      v18.m_szFunction = "CKeyValues3Cluster";
      v18.m_nLine = 196;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v18,
        "CKeyValues3Cluster allocated with bad alignment! (%p) (If this is inside of a heap allocation, you may need to i"
        "nherit from CAlignedNewDelete< KV3_CLUSTER_SIZEOF >.)\n",
        this);
    }
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v8, v9, v6, v7, v10, v11) != 0 )
      loc_0 = -559038737;
    v17 = Plat_ExitProcess(1);
    if ( m_Values != 0 )
    {
      do
        KeyValues3::Internal_FreeAllocation(--v4);
      while ( m_Values != v4 );
    }
    Unwind_Resume(v17, v14, v12, v13, v15, v16);
  }
}


// CKeyValues3Cluster::Init  (line 203, @0x000000000312e860, libserver.so)  // inlines: V_memset, memset
// calls: memset
void __fastcall CKeyValues3Cluster::Init(CKeyValues3Cluster *const this, CKeyValues3Context *pContext)
{
  memset(this, 0, sizeof(CKeyValues3Cluster));
  this->m_pContext = pContext;
}


// CKeyValues3Cluster::Get  (line 212, @0x000000000312e890, libserver.so)
KeyValues3 *__fastcall CKeyValues3Cluster::Get(CKeyValues3Cluster *const this, int nIndex)
{
  return &this->m_Values[nIndex];
}


// CKeyValues3Cluster::Dump  (line 223, @0x000000000312f390, libserver.so)  // inlines: AllocationCount, CUtlString, GetType, PopulationCount, ~CUtlString
// calls: Msg, KeyValues3::GetString, CUtlString::Get, CUtlString::FreeMemoryBlock, _Unwind_Resume
// strings: " - %d / %d allocated\n", " - Cluster[%d]@%8p = '%s' (type %d)\n"
void __fastcall CKeyValues3Cluster::Dump(CKeyValues3Cluster *const this)
{
  KeyValues3 *m_Values; // r12
  int v3; // ebx
  uint64 m_nAllocatedFlags; // rcx
  unsigned __int8 v5; // al
  int v6; // r15d
  const char *v7; // rax
  CUtlString s; // [rsp+0h] [rbp-40h] BYREF

  m_Values = this->m_Values;
  v3 = 0;
  m_nAllocatedFlags = this->m_nAllocatedFlags;
  Msg(
    " - %d / %d allocated\n",
    ((0x101010101010101LL
    * ((((m_nAllocatedFlags - ((m_nAllocatedFlags >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
      + (((m_nAllocatedFlags - ((m_nAllocatedFlags >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
      + ((((m_nAllocatedFlags - ((m_nAllocatedFlags >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
        + (((m_nAllocatedFlags - ((m_nAllocatedFlags >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4))
     & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24,
    62);
  do
  {
    while ( 1 )
    {
      if ( ((1LL << v3) & this->m_nAllocatedFlags) != 0 )
      {
        s.m_pString = 0;
        KeyValues3::GetString(m_Values, &s);
        v5 = *m_Values;
        v6 = 6;
        if ( (*m_Values & 0x1C) != 0x14 )
        {
          LOBYTE(v6) = 7;
          if ( (v5 & 0x1E) != 0x18 )
            v6 = (v5 >> 1) & 0xF;
        }
        v7 = CUtlString::Get(&s);
        Msg(" - Cluster[%d]@%8p = '%s' (type %d)\n", v3, m_Values, v7, v6);
        if ( s.m_pString != 0 )
          break;
      }
      ++v3;
      ++m_Values;
      if ( v3 == 62 )
        return;
    }
    ++v3;
    ++m_Values;
    CUtlString::FreeMemoryBlock(&s);
  }
  while ( v3 != 62 );
}


// CKeyValues3Cluster::AllocationCount  (line 241, @0x000000000312e8b0, libserver.so)  // inlines: PopulationCount
int __fastcall CKeyValues3Cluster::AllocationCount(CKeyValues3Cluster *const this)
{
  uint64 v1; // rdx

  v1 = this->m_nAllocatedFlags - ((this->m_nAllocatedFlags >> 1) & 0x5555555555555555LL);
  return (0x101010101010101LL
        * (((v1 & 0x3333333333333333LL)
          + ((v1 >> 2) & 0x3333333333333333LL)
          + (((v1 & 0x3333333333333333LL) + ((v1 >> 2) & 0x3333333333333333LL)) >> 4))
         & 0xF0F0F0F0F0F0F0FLL)) >> 56;
}


// CKeyValues3Cluster::Allocate  (line 271, @0x000000000312e920, libserver.so)  // inlines: FirstBitInWordThatIsKnownToBeNonZero, IndexOfLeastSignificantZeroBit, Internal_ClearDataWithoutFreeing, KeyValues3
// callers: CKeyValues3Context::AllocKV_Internal, CKeyValues3Context::CKeyValues3Context
KeyValues3 *__fastcall CKeyValues3Cluster::Allocate(CKeyValues3Cluster *const this)
{
  uint64 v1; // rcx
  char *v2; // rdi
  KeyValues3 *result; // rax

  v1 = ~this->m_nAllocatedFlags;
  if ( LODWORD(this->m_nAllocatedFlags) == -1 )
  {
    v1 >>= 32;
    result = 0;
    if ( v1 == 0 )
      return result;
    _BitScanForward(&v1, v1);
    LODWORD(v1) = v1 + 32;
  }
  else
  {
    _BitScanForward(&v1, v1);
  }
  if ( v1 == -1 )
    return 0;
  this->m_nAllocatedFlags |= 1LL << v1;
  v2 = this + 16 * v1;
  result = (v2 + 24);
  v2[24] = v2[24] & 0xE0 | 2;
  *(v2 + 6) &= 0xFFE0001F;
  *(v2 + 4) = 0;
  return result;
}


// CKeyValues3Cluster::Free  (line 292, @0x0000000003131bd0, libserver.so)  // inlines: Destruct<KeyValues3>, V_memset, memset, ~KeyValues3
// calls: KeyValues3::Internal_FreeAllocation
// callers: CKeyValues3Context::FreeKV_Internal
void __fastcall CKeyValues3Cluster::Free(CKeyValues3Cluster *const this, KeyValues3 *pKV3)
{
  KeyValues3 *m_Values; // r12

  m_Values = this->m_Values;
  if ( this->m_Values <= pKV3 && pKV3 <= &this->m_Values[61] )
  {
    KeyValues3::Internal_FreeAllocation(pKV3);
    *pKV3 = 0;
    pKV3->m_nAsInt64 = 0;
    this->m_nAllocatedFlags &= __ROL8__(-2, (pKV3 - m_Values) >> 4);
  }
}


// CKeyValues3Iterator::CKeyValues3Iterator  (line 345, @0x000000000312e990, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, Purge, ~CUtlMemory, ~CUtlMemoryFixedGrowable_Base
// calls: Plat_IsInDebugSessionRaw, CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::Purge, _Unwind_Resume
void __fastcall CKeyValues3Iterator::CKeyValues3Iterator(CKeyValues3Iterator *const this)
{
  AlignedByteArray_t<4ul,CKeyValues3Iterator::StackEntry_t> *p_m_FixedMemory; // r12

  p_m_FixedMemory = &this->m_Stack.m_Memory.m_FixedMemory;
  this->m_Stack.m_Size = 0;
  this->m_Stack.m_Memory.m_pMemory = 0;
  this->m_Stack.m_Memory.m_nAllocationCount = 4;
  this->m_Stack.m_Memory.m_nGrowSize = 0x80000000;
  if ( ((this + 24) & 7) != 0 && Plat_IsInDebugSessionRaw() != 0 )
  {
    __debugbreak();
    this->m_Stack.m_Memory.m_pMemory = p_m_FixedMemory;
  }
  else
  {
    this->m_Stack.m_Memory.m_pMemory = p_m_FixedMemory;
  }
}


// CKeyValues3Iterator::CKeyValues3Iterator  (line 352, @0x0000000003132700, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, Purge, ~CUtlMemory, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorFixedGrowable
// calls: CKeyValues3Iterator::Init, Plat_IsInDebugSessionRaw, CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::Purge, _Unwind_Resume, CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4ul, int> >::~CUtlVectorBase
void __fastcall CKeyValues3Iterator::CKeyValues3Iterator(CKeyValues3Iterator *const this, KeyValues3 *pKV3)
{
  AlignedByteArray_t<4ul,CKeyValues3Iterator::StackEntry_t> *p_m_FixedMemory; // r12

  p_m_FixedMemory = &this->m_Stack.m_Memory.m_FixedMemory;
  this->m_Stack.m_Size = 0;
  this->m_Stack.m_Memory.m_pMemory = 0;
  this->m_Stack.m_Memory.m_nAllocationCount = 4;
  this->m_Stack.m_Memory.m_nGrowSize = 0x80000000;
  if ( ((this + 24) & 7) != 0 && Plat_IsInDebugSessionRaw() != 0 )
    __debugbreak();
  this->m_Stack.m_Memory.m_pMemory = p_m_FixedMemory;
  CKeyValues3Iterator::Init(this, pKV3);
}


// CKeyValues3Iterator::Init  (line 360, @0x00000000031326a0, libserver.so)  // inlines: AddToTail, GrowMemory, RemoveAll
// calls: CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::Grow
// callers: CKeyValues3Iterator::CKeyValues3Iterator
void __fastcall CKeyValues3Iterator::Init(CKeyValues3Iterator *const this, KeyValues3 *pKV3)
{
  int v4; // eax
  CKeyValues3Iterator::StackEntry_t *m_pMemory; // rax

  this->m_Stack.m_Size = 0;
  if ( pKV3 != 0 )
  {
    v4 = 1;
    if ( this->m_Stack.m_Memory.m_nAllocationCount == 0 )
    {
      CUtlMemory<CKeyValues3Iterator::StackEntry_t,int>::Grow(&this->m_Stack.m_Memory, 1);
      v4 = this->m_Stack.m_Size + 1;
    }
    this->m_Stack.m_Size = v4;
    m_pMemory = this->m_Stack.m_Memory.m_pMemory;
    m_pMemory->m_nIndex = -1;
    m_pMemory->m_pKV = pKV3;
  }
}


// CKeyValues3Iterator::IsValid  (line 374, @0x000000000312ea00, libserver.so)
bool __fastcall CKeyValues3Iterator::IsValid(const CKeyValues3Iterator *const this)
{
  return this->m_Stack.m_Size != 0;
}


// CKeyValues3Iterator::Advance  (line 382, @0x0000000003132790, libserver.so)  // inlines: AddToTail, GetType, GrowMemory, Tail, operator[]
// calls: KeyValues3::GetArrayElementCount, CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4ul, int> >::RemoveMultipleFromTail, KeyValues3::GetMemberCount, KeyValues3::GetMember, KeyValues3::GetArrayElement, CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::Grow
void __fastcall CKeyValues3Iterator::Advance(CKeyValues3Iterator *const this)
{
  const KeyValues3 *v2; // rdi
  int v3; // r14d
  CKeyValues3Iterator::StackEntry_t *v4; // rbx
  KeyValues3 *m_pKV; // r13
  unsigned __int8 v6; // al
  char v7; // al
  const KeyValues3 *v8; // rdi
  int v9; // r14d
  __int64 v10; // r14
  int v11; // eax
  CKeyValues3Iterator::StackEntry_t *v12; // r14
  __int64 m_Size; // r14
  int v14; // eax
  CKeyValues3Iterator::StackEntry_t *v15; // r14

  while ( this->m_Stack.m_Size != 0 )
  {
    v4 = &this->m_Stack.m_Memory.m_pMemory[this->m_Stack.m_Size - 1];
    m_pKV = v4->m_pKV;
    v6 = *v4->m_pKV;
    if ( (v6 & 0x1C) != 0x14 && (v6 & 0x1E) != 0x18 )
    {
      v7 = (v6 >> 1) & 0xF;
      if ( v7 == 8 )
      {
        v2 = v4->m_pKV;
        v3 = v4->m_nIndex + 1;
        v4->m_nIndex = v3;
        if ( v3 < KeyValues3::GetArrayElementCount(v2) )
        {
          m_Size = this->m_Stack.m_Size;
          v14 = this->m_Stack.m_Size;
          if ( m_Size == this->m_Stack.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CKeyValues3Iterator::StackEntry_t,int>::Grow(&this->m_Stack.m_Memory, 1);
            v14 = this->m_Stack.m_Size;
          }
          v15 = &this->m_Stack.m_Memory.m_pMemory[m_Size];
          this->m_Stack.m_Size = v14 + 1;
          v15->m_nIndex = -1;
          v15->m_pKV = KeyValues3::GetArrayElement(m_pKV, v4->m_nIndex);
          return;
        }
      }
      else if ( v7 == 9 )
      {
        v8 = v4->m_pKV;
        v9 = v4->m_nIndex + 1;
        v4->m_nIndex = v9;
        if ( v9 < KeyValues3::GetMemberCount(v8) )
        {
          v10 = this->m_Stack.m_Size;
          v11 = this->m_Stack.m_Size;
          if ( v10 == this->m_Stack.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CKeyValues3Iterator::StackEntry_t,int>::Grow(&this->m_Stack.m_Memory, 1);
            v11 = this->m_Stack.m_Size;
          }
          v12 = &this->m_Stack.m_Memory.m_pMemory[v10];
          this->m_Stack.m_Size = v11 + 1;
          v12->m_nIndex = -1;
          v12->m_pKV = KeyValues3::GetMember(m_pKV, v4->m_nIndex);
          return;
        }
      }
    }
    CUtlVectorBase<CKeyValues3Iterator::StackEntry_t,CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t,4ul,int>>::RemoveMultipleFromTail(
      &this->m_Stack,
      1);
  }
}


// CKeyValues3Iterator::Get  (line 445, @0x000000000312ea10, libserver.so)  // inlines: Tail, operator[]
KeyValues3 *__fastcall CKeyValues3Iterator::Get(const CKeyValues3Iterator *const this)
{
  if ( this->m_Stack.m_Size != 0 )
    return this->m_Stack.m_Memory.m_pMemory[this->m_Stack.m_Size - 1].m_pKV;
  else
    return 0;
}


// KeyValues3::GetTableRaw  (line 456, @0x000000000312ea40, libserver.so)  // inlines: GetType
CKeyValues3Table *__fastcall KeyValues3::GetTableRaw(KeyValues3 *const this)
{
  unsigned __int8 v1; // dl
  CKeyValues3Table *result; // rax

  v1 = *this;
  result = 0;
  if ( (*this & 0x1C) != 0x14 && (v1 & 0x1E) != 0x18 && ((v1 >> 1) & 0xF) == 9 )
    return this->m_pTable;
  return result;
}


// KeyValues3::GetTableRaw  (line 471, @0x000000000312ea70, libserver.so)  // inlines: GetType
const CKeyValues3Table *__fastcall KeyValues3::GetTableRaw(const KeyValues3 *const this)
{
  unsigned __int8 v1; // dl
  const CKeyValues3Table *result; // rax

  v1 = *this;
  result = 0;
  if ( (*this & 0x1C) != 0x14 && (v1 & 0x1E) != 0x18 && ((v1 >> 1) & 0xF) == 9 )
    return this->m_pTable;
  return result;
}


// KeyValues3::SetToEmptyTable  (line 486, @0x0000000003131cc0, libserver.so)  // inlines: Internal_PrepareForType
// calls: KeyValues3::Internal_PrepareForInternalType
// callers: CLoadKV3FromDynData::ReadObject, CLoadKV3FromText::ReadTable, LoadKV3Binary_R, CKV3TransferSaveContext::PrepareTargetForClass
void __fastcall KeyValues3::SetToEmptyTable(KeyValues3 *const this)
{
  KeyValues3::Internal_PrepareForInternalType(this, 9);
}


// KeyValues3::GetMemberInt  (line 494, @0x000000000312f7b0, libserver.so)  // inlines: GetAsNumeric<int>, GetInt, GetStringRaw, GetType, Internal_FindMember, KV3MakeLowerHash, MakeStringToken
// calls: KeyValues3::Internal_FindMember, MurmurHash2LowerCase, V_atod, RegisterStringToken
int __fastcall KeyValues3::GetMemberInt(
        const KeyValues3 *const this,
        const char *pMemberName,
        int defaultValue,
        KeyValues3LowercaseHash_t precomputedHash)
{
  KeyValues3 *Member; // rax
  int v8; // edx
  char v9; // si
  char v10; // dl
  uint32 v12; // eax
  const char *m_pAsCharPtr; // rdi
  KeyValues3::lambda *p_m_pAsCharPtr; // rax
  uint32 precomputedHasha; // [rsp+Ch] [rbp-24h]

  if ( precomputedHash.m_nHashCode == 0 && pMemberName != 0 && *pMemberName != 0 )
  {
    v12 = MurmurHash2LowerCase(pMemberName, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      precomputedHasha = v12;
      RegisterStringToken(v12, pMemberName, 0, 1);
      precomputedHash.m_nHashCode = precomputedHasha;
    }
    else
    {
      precomputedHash.m_nHashCode = v12;
    }
  }
  Member = KeyValues3::Internal_FindMember(this, precomputedHash, pMemberName);
  v8 = defaultValue;
  if ( Member == 0 )
    return v8;
  v9 = *Member & 0x1E;
  if ( (*Member & 0x1C) != 0x14 )
  {
    if ( v9 == 24 )
      return 0;
    v10 = (*Member >> 1) & 0xF;
    switch ( v10 )
    {
      case 2:
        return Member->m_bAsBool;
      case 3:
      case 4:
        return Member->m_nAsInt64;
      case 5:
        return Member->m_flAsDouble;
      default:
        break;
    }
    if ( v10 != 6 )
      return 0;
  }
  if ( v9 == 22 || v9 == 12 )
  {
    m_pAsCharPtr = Member->m_pAsCharPtr;
  }
  else
  {
    p_m_pAsCharPtr = &Member->m_pAsCharPtr;
    m_pAsCharPtr = 0;
    if ( v9 == 20 )
      m_pAsCharPtr = p_m_pAsCharPtr;
  }
  return V_atod(m_pAsCharPtr);
}


// KeyValues3::GetMemberBool  (line 511, @0x000000000312f8f0, libserver.so)  // inlines: Internal_FindMember, KV3MakeLowerHash, MakeStringToken
// calls: KeyValues3::Internal_FindMember, KeyValues3::GetBool, MurmurHash2LowerCase, RegisterStringToken
// callers: CMaterialDrawDescriptor::TransferPostLoadFn
bool __fastcall KeyValues3::GetMemberBool(
        const KeyValues3 *const this,
        const char *pMemberName,
        bool defaultValue,
        KeyValues3LowercaseHash_t precomputedHash)
{
  KeyValues3 *Member; // rax
  uint32 v9; // eax
  uint32 precomputedHasha; // [rsp+Ch] [rbp-24h]

  if ( precomputedHash.m_nHashCode == 0 && pMemberName != 0 && *pMemberName != 0 )
  {
    v9 = MurmurHash2LowerCase(pMemberName, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      precomputedHasha = v9;
      RegisterStringToken(v9, pMemberName, 0, 1);
      precomputedHash.m_nHashCode = precomputedHasha;
    }
    else
    {
      precomputedHash.m_nHashCode = v9;
    }
  }
  Member = KeyValues3::Internal_FindMember(this, precomputedHash, pMemberName);
  if ( Member != 0 )
    return KeyValues3::GetBool(Member);
  else
    return defaultValue;
}


// KeyValues3::GetMemberUint64  (line 528, @0x000000000312f990, libserver.so)  // inlines: GetAsNumeric<long long unsigned int>, GetStringRaw, GetType, GetUint64, Internal_FindMember, KV3MakeLowerHash, MakeStringToken
// calls: KeyValues3::Internal_FindMember, MurmurHash2LowerCase, V_atod, RegisterStringToken
uint64 __fastcall KeyValues3::GetMemberUint64(
        const KeyValues3 *const this,
        const char *pMemberName,
        uint64 defaultValue,
        KeyValues3LowercaseHash_t precomputedHash)
{
  KeyValues3 *Member; // rax
  uint64 v8; // rdx
  char v9; // si
  char v10; // dl
  uint32 v12; // eax
  const char *m_pAsCharPtr; // rdi
  double m_flAsDouble; // xmm0_8
  KeyValues3::lambda *p_m_pAsCharPtr; // rax
  uint32 precomputedHasha; // [rsp+Ch] [rbp-24h]

  if ( precomputedHash.m_nHashCode == 0 && pMemberName != 0 && *pMemberName != 0 )
  {
    v12 = MurmurHash2LowerCase(pMemberName, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      precomputedHasha = v12;
      RegisterStringToken(v12, pMemberName, 0, 1);
      precomputedHash.m_nHashCode = precomputedHasha;
    }
    else
    {
      precomputedHash.m_nHashCode = v12;
    }
  }
  Member = KeyValues3::Internal_FindMember(this, precomputedHash, pMemberName);
  v8 = defaultValue;
  if ( Member == 0 )
    return v8;
  v9 = *Member & 0x1E;
  if ( (*Member & 0x1C) == 0x14 )
  {
LABEL_18:
    if ( v9 == 22 || v9 == 12 )
    {
      m_pAsCharPtr = Member->m_pAsCharPtr;
    }
    else
    {
      p_m_pAsCharPtr = &Member->m_pAsCharPtr;
      m_pAsCharPtr = 0;
      if ( v9 == 20 )
        m_pAsCharPtr = p_m_pAsCharPtr;
    }
    m_flAsDouble = V_atod(m_pAsCharPtr);
    if ( m_flAsDouble < 9.223372036854776e18 )
      return m_flAsDouble;
    return (m_flAsDouble - 9.223372036854776e18) ^ 0x8000000000000000LL;
  }
  if ( v9 == 24 )
    return 0;
  v10 = (*Member >> 1) & 0xF;
  if ( v10 == 2 )
    return Member->m_bAsBool;
  if ( v10 == 3 || v10 == 4 )
    return Member->m_nAsUint64;
  if ( v10 != 5 )
  {
    if ( v10 == 6 )
      goto LABEL_18;
    return 0;
  }
  m_flAsDouble = Member->m_flAsDouble;
  if ( m_flAsDouble < 9.223372036854776e18 )
    return m_flAsDouble;
  return (m_flAsDouble - 9.223372036854776e18) ^ 0x8000000000000000LL;
}


// KeyValues3::GetMemberInt64  (line 545, @0x000000000312fb10, libserver.so)  // inlines: GetAsNumeric<long long int>, GetInt64, GetStringRaw, GetType, Internal_FindMember, KV3MakeLowerHash, MakeStringToken
// calls: KeyValues3::Internal_FindMember, MurmurHash2LowerCase, V_atod, RegisterStringToken
int64 __fastcall KeyValues3::GetMemberInt64(
        const KeyValues3 *const this,
        const char *pMemberName,
        int64 defaultValue,
        KeyValues3LowercaseHash_t precomputedHash)
{
  KeyValues3 *Member; // rax
  int64 v8; // rdx
  char v9; // si
  char v10; // dl
  uint32 v12; // eax
  const char *m_pAsCharPtr; // rdi
  KeyValues3::lambda *p_m_pAsCharPtr; // rax
  uint32 precomputedHasha; // [rsp+Ch] [rbp-24h]

  if ( precomputedHash.m_nHashCode == 0 && pMemberName != 0 && *pMemberName != 0 )
  {
    v12 = MurmurHash2LowerCase(pMemberName, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      precomputedHasha = v12;
      RegisterStringToken(v12, pMemberName, 0, 1);
      precomputedHash.m_nHashCode = precomputedHasha;
    }
    else
    {
      precomputedHash.m_nHashCode = v12;
    }
  }
  Member = KeyValues3::Internal_FindMember(this, precomputedHash, pMemberName);
  v8 = defaultValue;
  if ( Member == 0 )
    return v8;
  v9 = *Member & 0x1E;
  if ( (*Member & 0x1C) != 0x14 )
  {
    if ( v9 == 24 )
      return 0;
    v10 = (*Member >> 1) & 0xF;
    switch ( v10 )
    {
      case 2:
        return Member->m_bAsBool;
      case 3:
      case 4:
        return Member->m_nAsInt64;
      case 5:
        return Member->m_flAsDouble;
      default:
        break;
    }
    if ( v10 != 6 )
      return 0;
  }
  if ( v9 == 22 || v9 == 12 )
  {
    m_pAsCharPtr = Member->m_pAsCharPtr;
  }
  else
  {
    p_m_pAsCharPtr = &Member->m_pAsCharPtr;
    m_pAsCharPtr = 0;
    if ( v9 == 20 )
      m_pAsCharPtr = p_m_pAsCharPtr;
  }
  return V_atod(m_pAsCharPtr);
}


// KeyValues3::GetMemberFloat  (line 562, @0x000000000312fc50, libserver.so)  // inlines: GetAsNumeric<float>, GetFloat, GetStringRaw, GetType, Internal_FindMember, KV3MakeLowerHash, MakeStringToken
// calls: KeyValues3::Internal_FindMember, MurmurHash2LowerCase, V_atod, RegisterStringToken
float __fastcall KeyValues3::GetMemberFloat(
        const KeyValues3 *const this,
        const char *pMemberName,
        float defaultValue,
        KeyValues3LowercaseHash_t precomputedHash)
{
  uint32 m_nHashCode; // esi
  KeyValues3 *Member; // rax
  float result; // xmm0_4
  char v9; // si
  char v10; // dl
  uint32 v11; // eax
  const char *m_pAsCharPtr; // rdi
  KeyValues3::lambda *p_m_pAsCharPtr; // rax
  __int64 m_nAsInt64; // rax
  float v15; // [rsp+8h] [rbp-18h]
  float precomputedHashb; // [rsp+Ch] [rbp-14h]
  float precomputedHasha; // [rsp+Ch] [rbp-14h]
  KeyValues3LowercaseHash_t precomputedHashc; // [rsp+Ch] [rbp-14h]

  m_nHashCode = precomputedHash.m_nHashCode;
  if ( precomputedHash.m_nHashCode == 0 && pMemberName != 0 && *pMemberName != 0 )
  {
    precomputedHasha = defaultValue;
    v11 = MurmurHash2LowerCase(pMemberName, 0x31415926u);
    defaultValue = precomputedHasha;
    if ( g_bUpdateStringTokenDatabase )
    {
      v15 = precomputedHasha;
      precomputedHashc.m_nHashCode = v11;
      RegisterStringToken(v11, pMemberName, 0, 1);
      defaultValue = v15;
      m_nHashCode = precomputedHashc.m_nHashCode;
    }
    else
    {
      m_nHashCode = v11;
    }
  }
  precomputedHashb = defaultValue;
  Member = KeyValues3::Internal_FindMember(this, m_nHashCode, pMemberName);
  result = precomputedHashb;
  if ( Member != 0 )
  {
    v9 = *Member & 0x1E;
    if ( (*Member & 0x1C) != 0x14 )
    {
      if ( v9 == 24 )
        return 0.0;
      v10 = (*Member >> 1) & 0xF;
      switch ( v10 )
      {
        case 2:
          return Member->m_bAsBool;
        case 3:
          return Member->m_pAsCharPtr;
        case 4:
          m_nAsInt64 = Member->m_nAsInt64;
          if ( m_nAsInt64 < 0 )
            return (m_nAsInt64 & 1 | (m_nAsInt64 >> 1)) + (m_nAsInt64 & 1 | (m_nAsInt64 >> 1));
          else
            return m_nAsInt64;
        case 5:
          return Member->m_flAsDouble;
        default:
          break;
      }
      if ( v10 != 6 )
        return 0.0;
    }
    if ( v9 == 22 || v9 == 12 )
    {
      m_pAsCharPtr = Member->m_pAsCharPtr;
    }
    else
    {
      p_m_pAsCharPtr = &Member->m_pAsCharPtr;
      m_pAsCharPtr = 0;
      if ( v9 == 20 )
        m_pAsCharPtr = p_m_pAsCharPtr;
    }
    return V_atod(m_pAsCharPtr);
  }
  return result;
}


// KeyValues3::GetMemberDouble  (line 579, @0x000000000312fdf0, libserver.so)  // inlines: GetAsNumeric<double>, GetDouble, GetStringRaw, GetType, Internal_FindMember, KV3MakeLowerHash, MakeStringToken
// calls: KeyValues3::Internal_FindMember, MurmurHash2LowerCase, V_atod, RegisterStringToken
double __fastcall KeyValues3::GetMemberDouble(
        const KeyValues3 *const this,
        const char *pMemberName,
        double defaultValue,
        KeyValues3LowercaseHash_t precomputedHash)
{
  uint32 m_nHashCode; // esi
  KeyValues3 *Member; // rax
  double result; // xmm0_8
  char v9; // si
  char v10; // dl
  uint32 v11; // eax
  const char *m_pAsCharPtr; // rdi
  KeyValues3::lambda *p_m_pAsCharPtr; // rax
  __int64 m_nAsInt64; // rax
  double v15; // [rsp+0h] [rbp-20h]
  double precomputedHashb; // [rsp+8h] [rbp-18h]
  double precomputedHasha; // [rsp+8h] [rbp-18h]
  KeyValues3LowercaseHash_t precomputedHashc; // [rsp+8h] [rbp-18h]

  m_nHashCode = precomputedHash.m_nHashCode;
  if ( precomputedHash.m_nHashCode == 0 && pMemberName != 0 && *pMemberName != 0 )
  {
    precomputedHasha = defaultValue;
    v11 = MurmurHash2LowerCase(pMemberName, 0x31415926u);
    defaultValue = precomputedHasha;
    if ( g_bUpdateStringTokenDatabase )
    {
      v15 = precomputedHasha;
      precomputedHashc.m_nHashCode = v11;
      RegisterStringToken(v11, pMemberName, 0, 1);
      defaultValue = v15;
      m_nHashCode = precomputedHashc.m_nHashCode;
    }
    else
    {
      m_nHashCode = v11;
    }
  }
  precomputedHashb = defaultValue;
  Member = KeyValues3::Internal_FindMember(this, m_nHashCode, pMemberName);
  result = precomputedHashb;
  if ( Member != 0 )
  {
    v9 = *Member & 0x1E;
    if ( (*Member & 0x1C) != 0x14 )
    {
      if ( v9 == 24 )
        return 0.0;
      v10 = (*Member >> 1) & 0xF;
      switch ( v10 )
      {
        case 2:
          return Member->m_bAsBool;
        case 3:
          return Member->m_pAsCharPtr;
        case 4:
          m_nAsInt64 = Member->m_nAsInt64;
          if ( m_nAsInt64 < 0 )
            return (m_nAsInt64 & 1 | (m_nAsInt64 >> 1)) + (m_nAsInt64 & 1 | (m_nAsInt64 >> 1));
          else
            return m_nAsInt64;
        case 5:
          return Member->m_flAsDouble;
        default:
          break;
      }
      if ( v10 != 6 )
        return 0.0;
    }
    if ( v9 == 22 || v9 == 12 )
    {
      m_pAsCharPtr = Member->m_pAsCharPtr;
    }
    else
    {
      p_m_pAsCharPtr = &Member->m_pAsCharPtr;
      m_pAsCharPtr = 0;
      if ( v9 == 20 )
        m_pAsCharPtr = p_m_pAsCharPtr;
    }
    return V_atod(m_pAsCharPtr);
  }
  return result;
}


// KeyValues3::GetMemberString  (line 596, @0x000000000312ff70, libserver.so)  // inlines: Internal_FindMember, KV3MakeLowerHash, MakeStringToken, V_strncpy<int>
// calls: KeyValues3::Internal_FindMember, KeyValues3::GetString, MurmurHash2LowerCase, _V_strncpy, RegisterStringToken
// callers: LoadUtlDict<CAttachment>, LoadUtlDict<CHitBoxSet>, CKV3TransferValHelper<CUtlVector<CBaseConstraint*, CUtlMemory<CBaseConstraint*, int> > >::LoadValue<CUtlVector<CBaseConstraint*> >
void __fastcall KeyValues3::GetMemberString(
        const KeyValues3 *const this,
        const char *pMemberName,
        char *pOutData,
        int nBufSize,
        const char *defaultValue,
        KeyValues3LowercaseHash_t precomputedHash)
{
  KeyValues3 *Member; // rax
  uint32 v12; // eax
  uint32 v13; // [rsp+Ch] [rbp-34h]

  if ( precomputedHash.m_nHashCode == 0 && pMemberName != 0 && *pMemberName != 0 )
  {
    v12 = MurmurHash2LowerCase(pMemberName, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      v13 = v12;
      RegisterStringToken(v12, pMemberName, 0, 1);
      v12 = v13;
    }
    precomputedHash.m_nHashCode = v12;
  }
  Member = KeyValues3::Internal_FindMember(this, precomputedHash, pMemberName);
  if ( Member != 0 )
    KeyValues3::GetString(Member, pOutData, nBufSize);
  else
    _V_strncpy(pOutData, defaultValue, nBufSize);
}


// KeyValues3::GetMemberString  (line 616, @0x0000000003130030, libserver.so)  // inlines: Internal_FindMember, KV3MakeLowerHash, MakeStringToken
// calls: KeyValues3::Internal_FindMember, KeyValues3::GetString, MurmurHash2LowerCase, CUtlString::operator=, RegisterStringToken
void __fastcall KeyValues3::GetMemberString(
        const KeyValues3 *const this,
        const char *pMemberName,
        CUtlString *pOutData,
        const char *defaultValue,
        KeyValues3LowercaseHash_t precomputedHash)
{
  KeyValues3 *Member; // rax
  uint32 v10; // eax
  uint32 v11; // [rsp+Ch] [rbp-24h]

  if ( precomputedHash.m_nHashCode == 0 && pMemberName != 0 && *pMemberName != 0 )
  {
    v10 = MurmurHash2LowerCase(pMemberName, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      v11 = v10;
      RegisterStringToken(v10, pMemberName, 0, 1);
      v10 = v11;
    }
    precomputedHash.m_nHashCode = v10;
  }
  Member = KeyValues3::Internal_FindMember(this, precomputedHash, pMemberName);
  if ( Member != 0 )
    KeyValues3::GetString(Member, pOutData);
  else
    CUtlString::operator=(pOutData, defaultValue);
}


// KeyValues3::GetMemberStringRaw  (line 636, @0x00000000031300f0, libserver.so)  // inlines: GetStringRaw, GetType, Internal_FindMember, KV3MakeLowerHash, MakeStringToken
// calls: KeyValues3::Internal_FindMember, MurmurHash2LowerCase, RegisterStringToken
const char *__fastcall KeyValues3::GetMemberStringRaw(
        const KeyValues3 *const this,
        const char *pMemberName,
        const char *defaultValue,
        KeyValues3LowercaseHash_t precomputedHash)
{
  KeyValues3 *Member; // rax
  KeyValues3 *v8; // rcx
  unsigned __int8 v9; // dl
  const char *result; // rax
  char v11; // si
  uint32 v12; // eax
  uint32 precomputedHasha; // [rsp+Ch] [rbp-24h]

  if ( precomputedHash.m_nHashCode == 0 && pMemberName != 0 && *pMemberName != 0 )
  {
    v12 = MurmurHash2LowerCase(pMemberName, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      precomputedHasha = v12;
      RegisterStringToken(v12, pMemberName, 0, 1);
      precomputedHash.m_nHashCode = precomputedHasha;
    }
    else
    {
      precomputedHash.m_nHashCode = v12;
    }
  }
  Member = KeyValues3::Internal_FindMember(this, precomputedHash, pMemberName);
  v8 = Member;
  if ( Member == 0 )
    return defaultValue;
  v9 = *Member;
  result = &Member->8;
  v11 = v9 & 0x1E;
  if ( (v9 & 0x1E) != 0x14 )
  {
    if ( v11 != 22 )
    {
      result = defaultValue;
      if ( v11 == 24 || ((v9 >> 1) & 0xF) != 6 )
        return result;
      if ( v11 != 12 )
        return 0;
    }
    return v8->m_pAsCharPtr;
  }
  return result;
}


// KeyValues3::GetBinaryBlobBase  (line 655, @0x000000000312eaf0, libserver.so)  // inlines: GetType
// calls: KeyValues3::Internal_BinaryBlobBase
// callers: KeyValues3::IsIdenticalTo, SaveKV3Binary_R
const uint8 *__fastcall KeyValues3::GetBinaryBlobBase(const KeyValues3 *const this)
{
  unsigned __int8 v1; // al

  v1 = *this;
  if ( (*this & 0x1C) != 0x14 && ((v1 & 0x1E) == 0x18 || ((v1 >> 1) & 0xF) == 7) )
    return KeyValues3::Internal_BinaryBlobBase(this);
  else
    return 0;
}


// KeyValues3::Internal_BinaryBlobBase  (line 669, @0x000000000312eaa0, libserver.so)
// callers: KeyValues3::GetBinaryBlobBase, KeyValues3::GetBinaryBlobByte, KeyValues3::CopyFrom
const uint8 *__fastcall KeyValues3::Internal_BinaryBlobBase(const KeyValues3 *const this)
{
  const char *v1; // rdx
  const uint8 *result; // rax
  const char *m_pAsCharPtr; // rax

  if ( (*this & 0x1E) == 0x18 )
  {
    m_pAsCharPtr = this->m_pAsCharPtr;
    if ( m_pAsCharPtr != 0 )
      return *(m_pAsCharPtr + 1);
    else
      return 0;
  }
  else
  {
    v1 = this->m_pAsCharPtr;
    result = 0;
    if ( v1 != 0 )
      return (v1 + 8);
  }
  return result;
}


// KeyValues3::Internal_BinaryBlobSize  (line 684, @0x000000000312eb30, libserver.so)
// callers: KeyValues3::GetBinaryBlobSize, KeyValues3::GetBinaryBlobByte, KeyValues3::CopyFrom
int __fastcall KeyValues3::Internal_BinaryBlobSize(const KeyValues3 *const this)
{
  int *m_pAsCharPtr; // rax

  m_pAsCharPtr = this->m_pAsCharPtr;
  if ( m_pAsCharPtr != 0 )
    return *m_pAsCharPtr;
  else
    return 0;
}


// KeyValues3::GetBinaryBlobSize  (line 699, @0x000000000312eb50, libserver.so)  // inlines: GetType
// calls: KeyValues3::Internal_BinaryBlobSize
// callers: KeyValues3::IsIdenticalTo, SaveKV3Text_R, SaveKV3Binary_R
int __fastcall KeyValues3::GetBinaryBlobSize(const KeyValues3 *const this)
{
  unsigned __int8 v1; // al

  v1 = *this;
  if ( (*this & 0x1C) != 0x14 && ((v1 & 0x1E) == 0x18 || ((v1 >> 1) & 0xF) == 7) )
    return KeyValues3::Internal_BinaryBlobSize(this);
  else
    return 0;
}


// KeyValues3::GetBinaryBlobByte  (line 713, @0x000000000312eb90, libserver.so)  // inlines: GetType
// calls: KeyValues3::Internal_BinaryBlobSize, KeyValues3::Internal_BinaryBlobBase
// callers: SaveKV3Text_R
uint8 __fastcall KeyValues3::GetBinaryBlobByte(const KeyValues3 *const this, int nIndex)
{
  uint8 result; // al
  __int64 v3; // r12
  unsigned __int8 v5; // dl
  int v6; // edx

  result = 0;
  v3 = nIndex;
  v5 = *this;
  if ( (*this & 0x1C) != 0x14 && ((v5 & 0x1E) == 0x18 || ((v5 >> 1) & 0xF) == 7) )
  {
    v6 = KeyValues3::Internal_BinaryBlobSize(this);
    result = 0;
    if ( v6 > v3 )
      return KeyValues3::Internal_BinaryBlobBase(this)[v3];
  }
  return result;
}


// KeyValues3::Internal_AimAtExternalBinaryBlob  (line 734, @0x0000000003131ee0, libserver.so)  // inlines: AllocBlobExternal
// calls: KeyValues3::Internal_PrepareForInternalType
// callers: LoadKV3Binary_R
void __fastcall KeyValues3::Internal_AimAtExternalBinaryBlob(KeyValues3 *const this, const uint8 *pData, int nSize)
{
  __int64 v4; // r12
  _QWORD *v6; // rax

  v4 = nSize;
  KeyValues3::Internal_PrepareForInternalType(this, 12);
  v6 = 0;
  if ( v4 != 0 )
  {
    v6 = (**g_pMemAlloc)(g_pMemAlloc, 16);
    *v6 = v4;
    v6[1] = pData;
  }
  this->m_nAsInt64 = v6;
}


// KeyValues3::SetToBinaryBlob  (line 743, @0x0000000003131cd0, libserver.so)  // inlines: Internal_PrepareForType
// calls: KeyValues3::Internal_PrepareForInternalType, CKeyValues3Context::AllocBlob
// callers: KeyValues3::ParseValueFromString, KeyValues3::CopyFrom, CLoadKV3FromText::ReadBinaryBlobValue, LoadKV3Binary_R
void __fastcall KeyValues3::SetToBinaryBlob(KeyValues3 *const this, const uint8 *pData, int nSize)
{
  KeyValues3::Internal_PrepareForInternalType(this, 7);
  this->m_nAsInt64 = CKeyValues3Context::AllocBlob(this, pData, nSize);
}


// KeyValues3::SetToZeroedBinaryBlob  (line 752, @0x0000000003131d10, libserver.so)  // inlines: Internal_PrepareForType
// calls: KeyValues3::Internal_PrepareForInternalType, CKeyValues3Context::AllocZeroedBlob
// callers: KeyValues3::EnsureTypeIs, KeyValues3::CopyFrom
void __fastcall KeyValues3::SetToZeroedBinaryBlob(KeyValues3 *const this, int nSize)
{
  KeyValues3::Internal_PrepareForInternalType(this, 7);
  this->m_nAsInt64 = CKeyValues3Context::AllocZeroedBlob(this, nSize);
}


// KeyValues3::SetToEmptyArray  (line 761, @0x0000000003131d40, libserver.so)  // inlines: Internal_PrepareForType
// calls: KeyValues3::Internal_PrepareForInternalType
void __fastcall KeyValues3::SetToEmptyArray(KeyValues3 *const this)
{
  KeyValues3::Internal_PrepareForInternalType(this, 8);
}


// KeyValues3::GetArrayElementCount  (line 769, @0x000000000312ebf0, libserver.so)  // inlines: GetType
// callers: CCustomNetTableManager::GetCustomStringTableDefs, KeyValues3::IsIdenticalTo, CKeyValues3Iterator::Advance, KeyValues3::ArrayAddToTail, KeyValues3::EnsureIsArray, KeyValues3::EnsureIsAnyArray, CLoadKV3FromDynData::AllocTempKV3, SaveKV3Text_R, SaveKV3Binary_R, GatherSymbols_R, CAttachment::TransferPostLoadFn, CMaterialDrawDescriptor::TransferPostLoadFn (39 total)
int __fastcall KeyValues3::GetArrayElementCount(const KeyValues3 *const this)
{
  unsigned __int8 v1; // dl
  int result; // eax
  int *m_pAsCharPtr; // rdx

  v1 = *this;
  result = 0;
  if ( (*this & 0x1C) != 0x14 && (v1 & 0x1E) != 0x18 && ((v1 >> 1) & 0xF) == 8 )
  {
    m_pAsCharPtr = this->m_pAsCharPtr;
    if ( m_pAsCharPtr != 0 )
      return *m_pAsCharPtr;
  }
  return result;
}


// KeyValues3::SetArrayElementCount  (line 791, @0x0000000003132e10, libserver.so)  // inlines: GetType, Internal_PrepareForType
// calls: KeyValues3::Internal_PrepareForInternalType, KeyValues3::Internal_SetArrayCount
// callers: KeyValues3::ParseValueFromString, KeyValues3::EnsureIsArray, KeyValues3::EnsureIsAnyArray, CLoadKV3FromDynData::AllocTempKV3, CLoadKV3FromDynData::ReadCompoundValue, CLoadKV3FromText::ReadArrayValue, LoadKV3Binary_R, CMaterialDrawDescriptor::TransferPostSaveFn, SaveUtlDict<CAttachment>, SaveUtlDict<CHitBoxSet>, SkeletonBoneBounds_t::KV3TransferSave_SkeletonBoneBounds_t, CAttachment::KV3TransferSave_CAttachment (29 total)
void __fastcall KeyValues3::SetArrayElementCount(KeyValues3 *const this, int nCount)
{
  unsigned __int8 v4; // al

  v4 = *this;
  if ( (*this & 0x1C) == 0x14 || (v4 & 0x1E) == 0x18 || ((v4 >> 1) & 0xF) != 8 )
    KeyValues3::Internal_PrepareForInternalType(this, 8);
  KeyValues3::Internal_SetArrayCount(this, nCount);
}


// KeyValues3::Internal_SetArrayCount  (line 803, @0x0000000003132dd0, libserver.so)
// calls: CKeyValues3Context::ReallocArray
// callers: KeyValues3::SetArrayElementCount, KeyValues3::CopyFrom
void __fastcall KeyValues3::Internal_SetArrayCount(KeyValues3 *const this, int nCount)
{
  const char *m_pAsCharPtr; // rax

  m_pAsCharPtr = this->m_pAsCharPtr;
  if ( m_pAsCharPtr == 0 || *m_pAsCharPtr != nCount )
    this->m_nAsInt64 = CKeyValues3Context::ReallocArray(this, this->m_pArray, nCount);
}


// KeyValues3::GetArrayElement  (line 816, @0x000000000312ec30, libserver.so)  // inlines: GetType
// callers: CCustomNetTableManager::GetCustomStringTableDefs, KeyValues3::GetArrayElement, KeyValues3::IsIdenticalTo, CKeyValues3Iterator::Advance, KeyValues3::ArrayAddToTail, KeyValues3::ParseValueFromString, KeyValues3::EnsureIsArray, CLoadKV3FromDynData::AllocTempKV3, CLoadKV3FromDynData::ReadCompoundValue, CLoadKV3FromText::ReadArrayValue, LoadKV3Binary_R, CMaterialDrawDescriptor::TransferPostSaveFn (33 total)
KeyValues3 *__fastcall KeyValues3::GetArrayElement(KeyValues3 *const this, int nIndex)
{
  unsigned __int8 v2; // dl
  KeyValues3 *result; // rax
  const char *m_pAsCharPtr; // rdx

  v2 = *this;
  result = 0;
  if ( (*this & 0x1C) != 0x14 && (v2 & 0x1E) != 0x18 && ((v2 >> 1) & 0xF) == 8 )
  {
    m_pAsCharPtr = this->m_pAsCharPtr;
    if ( m_pAsCharPtr != 0 && nIndex >= 0 && nIndex < *m_pAsCharPtr )
      return *&m_pAsCharPtr[8 * nIndex + 8];
  }
  return result;
}


// KeyValues3::GetArrayElement  (line 839, @0x000000000312ec80, libserver.so)
// calls: KeyValues3::GetArrayElement
// callers: SaveKV3Text_R, SaveKV3Binary_R, GatherSymbols_R, CAttachment::TransferPostLoadFn, CMaterialDrawDescriptor::TransferPostLoadFn, LoadUtlDict<CAttachment>, LoadUtlDict<CHitBoxSet>, CKV3TransferValHelperAsFloats<Vector, 3, false>::LoadValue<Vector>, CKV3TransferValHelper<Quaternion [3]>::LoadValue<Quaternion [3]>, CKV3TransferValHelper<Vector [3]>::LoadValue<Vector [3]>, SkeletonBoneBounds_t::KV3TransferLoad_SkeletonBoneBounds_t, RenderSkeletonBone_t::KV3TransferLoad_RenderSkeletonBone_t (32 total)
const KeyValues3 *__fastcall KeyValues3::GetArrayElement(const KeyValues3 *const this, int nIndex)
{
  return KeyValues3::GetArrayElement(this, nIndex);
}


// KeyValues3::GetBool  (line 847, @0x000000000312ec90, libserver.so)  // inlines: GetAsNumeric<int>, GetStringRaw, GetType
// calls: V_atod
// callers: KeyValues3::GetMemberBool, SaveKV3Text_R, SaveKV3Binary_R, CHitBox::KV3TransferLoad_CHitBox, CAttachment::KV3TransferLoad_CAttachment, CConstraintTarget::KV3TransferLoad_CConstraintTarget, CTwistConstraint::KV3TransferLoad_CTwistConstraint, CMorphConstraint::KV3TransferLoad_CMorphConstraint, CPhysSurfacePropertiesGame::KV3TransferLoad_CPhysSurfacePropertiesGame, ConstraintTarget_t::KV3TransferLoad_ConstraintTarget_t
bool __fastcall KeyValues3::GetBool(const KeyValues3 *const this)
{
  char v1; // cl
  char v2; // dl
  bool result; // al
  const char *m_pAsCharPtr; // rdi
  KeyValues3::lambda *p_m_pAsCharPtr; // rax

  v1 = *this & 0x1E;
  if ( (*this & 0x1C) == 0x14 )
  {
    v2 = 6;
  }
  else if ( v1 == 24 )
  {
    v2 = 7;
  }
  else
  {
    v2 = (*this >> 1) & 0xF;
    if ( v2 == 2 )
      return this->m_bAsBool;
    if ( (v2 - 3) <= 1u )
      return LODWORD(this->m_flAsDouble) != 0;
    if ( v2 == 5 )
      return this->m_flAsDouble != 0;
  }
  result = 0;
  if ( v2 == 6 )
  {
    if ( v1 == 22 || v1 == 12 )
    {
      m_pAsCharPtr = this->m_pAsCharPtr;
    }
    else
    {
      p_m_pAsCharPtr = &this->m_pAsCharPtr;
      m_pAsCharPtr = 0;
      if ( v1 == 20 )
        m_pAsCharPtr = p_m_pAsCharPtr;
    }
    return V_atod(m_pAsCharPtr) != 0;
  }
  return result;
}


// KeyValues3::GetInt  (line 859, @0x000000000312ed50, libserver.so)  // inlines: GetAsNumeric<int>, GetStringRaw, GetType
// calls: V_atod
// callers: CMaterialDrawDescriptor::KV3TransferLoad_CMaterialDrawDescriptor, CHitBox::KV3TransferLoad_CHitBox, CAttachment::KV3TransferLoad_CAttachment, CRenderSkeleton::KV3TransferLoad_CRenderSkeleton, CTiltTwistConstraint::KV3TransferLoad_CTiltTwistConstraint, CMorphConstraint::KV3TransferLoad_CMorphConstraint, CPhysSurfacePropertiesGame::KV3TransferLoad_CPhysSurfacePropertiesGame
int __fastcall KeyValues3::GetInt(const KeyValues3 *const this)
{
  char v1; // cl
  char v2; // dl
  int result; // eax
  KeyValues3::lambda *p_m_pAsCharPtr; // rax
  const char *m_pAsCharPtr; // rdi

  v1 = *this & 0x1E;
  if ( (*this & 0x1C) == 0x14 )
  {
    v2 = 6;
  }
  else if ( v1 == 24 )
  {
    v2 = 7;
  }
  else
  {
    v2 = (*this >> 1) & 0xF;
    if ( v2 == 2 )
      return this->m_bAsBool;
    if ( (v2 - 3) <= 1u )
      return this->m_nAsInt64;
    if ( v2 == 5 )
      return this->m_flAsDouble;
  }
  result = 0;
  if ( v2 == 6 )
  {
    if ( v1 == 22 || v1 == 12 )
    {
      m_pAsCharPtr = this->m_pAsCharPtr;
    }
    else
    {
      p_m_pAsCharPtr = &this->m_pAsCharPtr;
      m_pAsCharPtr = 0;
      if ( v1 == 20 )
        m_pAsCharPtr = p_m_pAsCharPtr;
    }
    return V_atod(m_pAsCharPtr);
  }
  return result;
}


// KeyValues3::GetInt64  (line 867, @0x000000000312edf0, libserver.so)  // inlines: GetAsNumeric<long long int>, GetStringRaw, GetType
// calls: V_atod
// callers: SaveKV3Text_R, SaveKV3Binary_R, ConvertV1MeshFlags, CRenderBufferBinding::KV3TransferLoad_CRenderBufferBinding, CMaterialDrawDescriptor::KV3TransferLoad_CMaterialDrawDescriptor, CHitBox::KV3TransferLoad_CHitBox, CHitBoxSet::KV3TransferLoad_CHitBoxSet, CConstraintSlave::KV3TransferLoad_CConstraintSlave, CConstraintTarget::KV3TransferLoad_CConstraintTarget, CAimConstraint::KV3TransferLoad_CAimConstraint, CPhysSurfaceProperties::KV3TransferLoad_CPhysSurfaceProperties, ConstraintTarget_t::KV3TransferLoad_ConstraintTarget_t (13 total)
int64 __fastcall KeyValues3::GetInt64(const KeyValues3 *const this)
{
  char v1; // cl
  char v2; // dl
  int64 result; // rax
  void *m_pTable; // rdi

  v1 = *this & 0x1E;
  if ( (*this & 0x1C) == 0x14 )
  {
    v2 = 6;
  }
  else if ( v1 == 24 )
  {
    v2 = 7;
  }
  else
  {
    v2 = (*this >> 1) & 0xF;
    if ( v2 == 2 )
      return this->m_bAsBool;
    if ( (v2 - 3) <= 1u )
      return this->m_nAsInt64;
    if ( v2 == 5 )
      return this->m_flAsDouble;
  }
  result = 0;
  if ( v2 == 6 )
  {
    if ( v1 == 22 || v1 == 12 )
    {
      m_pTable = this->m_pTable;
    }
    else
    {
      m_pTable = &this->m_flAsDouble;
      if ( v1 != 20 )
        m_pTable = 0;
    }
    return V_atod(m_pTable);
  }
  return result;
}


// KeyValues3::GetUint64  (line 875, @0x000000000312ee90, libserver.so)  // inlines: GetAsNumeric<long long unsigned int>, GetStringRaw, GetType
// calls: V_atod
// callers: SaveKV3Text_R, SaveKV3Binary_R
uint64 __fastcall KeyValues3::GetUint64(const KeyValues3 *const this)
{
  char v1; // cl
  char v2; // dl
  uint64 result; // rax
  void *m_pTable; // rdi
  double v5; // xmm0_8
  double m_flAsDouble; // xmm0_8

  v1 = *this & 0x1E;
  if ( (*this & 0x1C) == 0x14 )
  {
    v2 = 6;
  }
  else if ( v1 == 24 )
  {
    v2 = 7;
  }
  else
  {
    v2 = (*this >> 1) & 0xF;
    if ( v2 == 2 )
      return this->m_bAsBool;
    if ( (v2 - 3) <= 1u )
      return this->m_nAsUint64;
    if ( v2 == 5 )
    {
      m_flAsDouble = this->m_flAsDouble;
      if ( m_flAsDouble >= 9.223372036854776e18 )
        return (m_flAsDouble - 9.223372036854776e18) ^ 0x8000000000000000LL;
      else
        return m_flAsDouble;
    }
  }
  result = 0;
  if ( v2 == 6 )
  {
    if ( v1 == 22 || v1 == 12 )
    {
      m_pTable = this->m_pTable;
    }
    else
    {
      m_pTable = &this->m_flAsDouble;
      if ( v1 != 20 )
        m_pTable = 0;
    }
    v5 = V_atod(m_pTable);
    if ( v5 >= 9.223372036854776e18 )
      return (v5 - 9.223372036854776e18) ^ 0x8000000000000000LL;
    else
      return v5;
  }
  return result;
}


// KeyValues3::GetFloat  (line 883, @0x000000000312ef90, libserver.so)  // inlines: GetAsNumeric<float>, GetStringRaw, GetType
// calls: V_atod
// callers: CKV3TransferValHelperAsFloats<Vector, 3, false>::LoadValue<Vector>, CKV3TransferValHelper<Quaternion [3]>::LoadValue<Quaternion [3]>, CKV3TransferValHelper<Vector [3]>::LoadValue<Vector [3]>, SkeletonBoneBounds_t::KV3TransferLoad_SkeletonBoneBounds_t, RenderSkeletonBone_t::KV3TransferLoad_RenderSkeletonBone_t, CMaterialDrawDescriptor::KV3TransferLoad_CMaterialDrawDescriptor, CKV3TransferLoadContext::LoadValueFromMember<Vector>, CKV3TransferValHelper<float [3]>::LoadValue<float [3]>, CSceneObjectData::KV3TransferLoad_CSceneObjectData, CConstraintSlave::KV3TransferLoad_CConstraintSlave, CKV3TransferLoadContext::LoadValueFromMember<Quaternion>, CConstraintTarget::KV3TransferLoad_CConstraintTarget (21 total)
float __fastcall KeyValues3::GetFloat(const KeyValues3 *const this)
{
  char v1; // cl
  char v2; // al
  const char *v4; // rdi
  KeyValues3::lambda *p_m_pAsCharPtr; // rax
  const char *m_pAsCharPtr; // rax
  unsigned __int64 v7; // rdx

  v1 = *this & 0x1E;
  if ( (*this & 0x1C) != 0x14 )
  {
    if ( v1 == 24 )
      return 0.0;
    v2 = (*this >> 1) & 0xF;
    switch ( v2 )
    {
      case 2:
        return this->m_bAsBool;
      case 3:
        return this->m_pAsCharPtr;
      case 4:
        m_pAsCharPtr = this->m_pAsCharPtr;
        if ( m_pAsCharPtr >= 0 )
          return m_pAsCharPtr;
        v7 = this->m_nAsInt64 & 1 | (this->m_nAsInt64 >> 1);
        return v7 + v7;
      case 5:
        return this->m_flAsDouble;
      default:
        break;
    }
    if ( v2 != 6 )
      return 0.0;
  }
  if ( v1 == 22 || v1 == 12 )
  {
    v4 = this->m_pAsCharPtr;
  }
  else
  {
    p_m_pAsCharPtr = &this->m_pAsCharPtr;
    v4 = 0;
    if ( v1 == 20 )
      v4 = p_m_pAsCharPtr;
  }
  return V_atod(v4);
}


// KeyValues3::GetDouble  (line 891, @0x000000000312f060, libserver.so)  // inlines: GetAsNumeric<double>, GetStringRaw, GetType
// calls: V_atod
// callers: SaveKV3Text_R, SaveKV3Binary_R
double __fastcall KeyValues3::GetDouble(const KeyValues3 *const this)
{
  char v1; // cl
  char v2; // al
  const char *v4; // rdi
  KeyValues3::lambda *p_m_pAsCharPtr; // rax
  const char *m_pAsCharPtr; // rax
  unsigned __int64 v7; // rdx

  v1 = *this & 0x1E;
  if ( (*this & 0x1C) != 0x14 )
  {
    if ( v1 == 24 )
      return 0.0;
    v2 = (*this >> 1) & 0xF;
    switch ( v2 )
    {
      case 2:
        return this->m_bAsBool;
      case 3:
        return this->m_pAsCharPtr;
      case 4:
        m_pAsCharPtr = this->m_pAsCharPtr;
        if ( m_pAsCharPtr >= 0 )
          return m_pAsCharPtr;
        v7 = this->m_nAsInt64 & 1 | (this->m_nAsInt64 >> 1);
        return v7 + v7;
      case 5:
        return this->m_flAsDouble;
      default:
        break;
    }
    if ( v2 != 6 )
      return 0.0;
  }
  if ( v1 == 22 || v1 == 12 )
  {
    v4 = this->m_pAsCharPtr;
  }
  else
  {
    p_m_pAsCharPtr = &this->m_pAsCharPtr;
    v4 = 0;
    if ( v1 == 20 )
      v4 = p_m_pAsCharPtr;
  }
  return V_atod(v4);
}


// KeyValues3::IsNull  (line 899, @0x000000000312f130, libserver.so)  // inlines: GetType
bool __fastcall KeyValues3::IsNull(const KeyValues3 *const this)
{
  unsigned __int8 v1; // al

  v1 = *this;
  return (*this & 0x1C) != 0x14 && (v1 & 0x1E) != 0x18 && ((v1 >> 1) & 0xF) == 1;
}


// KeyValues3::GetString  (line 907, @0x000000000312f170, libserver.so)  // inlines: GetStringRaw, V_strncpy<int>
// calls: _V_strncpy, V_snprintf
// callers: KeyValues3::GetMemberString
// strings: "false", "true"
void __fastcall KeyValues3::GetString(const KeyValues3 *const this, char *pOutData, int nBufSize)
{
  char v3; // al
  bool v4; // cl
  KeyValues3::lambda *p_m_pAsCharPtr; // rdi
  KeyValues3::lambda *v6; // rax
  const char *v7; // rcx

  v3 = *this & 0x1E;
  switch ( v3 )
  {
    case 4:
      v7 = "true";
      if ( !this->m_bAsBool )
        v7 = "false";
      V_snprintf(pOutData, nBufSize, "%s", v7);
      break;
    case 6:
      V_snprintf(pOutData, nBufSize, "%lld", this->m_nAsInt64);
      break;
    case 8:
      V_snprintf(pOutData, nBufSize, "%llu", this->m_nAsInt64);
      break;
    case 10:
      V_snprintf(pOutData, nBufSize, "%f", this->m_flAsDouble);
      break;
    default:
      v4 = v3 == 20;
      if ( v3 != 20 && v3 != 12 )
      {
        if ( v3 != 22 )
        {
          _V_strncpy(pOutData, "", nBufSize);
          return;
        }
      }
      else if ( v3 != 12 )
      {
        p_m_pAsCharPtr = &this->m_pAsCharPtr;
        v6 = 0;
        if ( v4 )
          v6 = p_m_pAsCharPtr;
        _V_strncpy(pOutData, v6, nBufSize);
        break;
      }
      _V_strncpy(pOutData, this->m_nAsInt64, nBufSize);
      return;
  }
}


// KeyValues3::GetString  (line 951, @0x000000000312f290, libserver.so)  // inlines: GetStringRaw
// calls: CUtlString::Set, CUtlString::Format
// callers: CKeyValues3Cluster::Dump, KeyValues3::GetMemberString, KeyValues3::EnsureTypeIs, RenderSkeletonBone_t::KV3TransferLoad_RenderSkeletonBone_t, CHitBox::KV3TransferLoad_CHitBox, CKV3TransferLoadContext::LoadValueFromMember<CUtlString>, CAttachment::KV3TransferLoad_CAttachment, CBaseConstraint::KV3TransferLoad_CBaseConstraint, CMorphConstraint::KV3TransferLoad_CMorphConstraint, CPhysSurfacePropertiesSoundNames::KV3TransferLoad_CPhysSurfacePropertiesSoundNames, CPhysSurfaceProperties::KV3TransferLoad_CPhysSurfaceProperties
// strings: "false", "true"
void __fastcall KeyValues3::GetString(const KeyValues3 *const this, CUtlString *pOutString)
{
  char v3; // al
  KeyValues3::lambda *p_m_pAsCharPtr; // rsi
  const char *v5; // rdx

  v3 = *this & 0x1E;
  if ( v3 == 4 )
  {
    v5 = "true";
    if ( !this->m_bAsBool )
      v5 = "false";
    CUtlString::Format(pOutString, "%s", v5);
  }
  else if ( v3 == 6 )
  {
    CUtlString::Format(pOutString, "%lld", this->m_nAsInt64);
  }
  else if ( v3 == 8 )
  {
    CUtlString::Format(pOutString, "%llu", this->m_nAsInt64);
  }
  else
  {
    if ( v3 != 10 )
    {
      if ( v3 == 20 || v3 == 12 )
      {
        if ( v3 == 12 )
        {
LABEL_11:
          CUtlString::Set(pOutString, this->m_pAsCharPtr);
          return;
        }
        p_m_pAsCharPtr = &this->m_pAsCharPtr;
      }
      else
      {
        p_m_pAsCharPtr = "";
        if ( v3 == 22 )
          goto LABEL_11;
      }
      CUtlString::Set(pOutString, p_m_pAsCharPtr);
      return;
    }
    CUtlString::Format(pOutString, "%g", this->m_flAsDouble);
  }
}


// KeyValues3::GetStringRaw  (line 1003, @0x000000000312f4f0, libserver.so)
// callers: CCustomNetTableManager::GetCustomStringTableDefs, SaveKV3Text_R, SaveKV3Binary_R, GatherSymbols_R, CAttachment::TransferPostLoadFn, ConvertV1MeshFlags, CMaterialDrawDescriptor::KV3TransferLoad_CMaterialDrawDescriptor
const char *__fastcall KeyValues3::GetStringRaw(const KeyValues3 *const this, const char *pDefaultValue)
{
  char v2; // dl
  const char *result; // rax

  v2 = *this & 0x1E;
  if ( v2 == 22 || v2 == 12 )
    return this->m_pAsCharPtr;
  result = &this->8;
  if ( v2 != 20 )
    return pDefaultValue;
  return result;
}


// KeyValues3::SetString  (line 1022, @0x0000000003131f70, libserver.so)  // inlines: AllocString, Internal_PrepareForType, MemAlloc_StrDupFunc, V_strlen, strcpy
// calls: strlen, KeyValues3::Internal_PrepareForInternalType, strcpy, KeyValues3::Internal_SetToShortString
// callers: KeyValues3::EnsureTypeIs, KeyValues3::ParseValueFromString, KeyValues3::SetMemberString, KeyValues3::CopyFrom, CLoadKV3FromDynData::ReadLiteralValue, CLoadKV3FromText::ReadLiteralValue, LoadKV3Binary_R, CAttachment::KV3TransferSave_CAttachment, CHitBox::KV3TransferSave_CHitBox, RenderSkeletonBone_t::KV3TransferSave_RenderSkeletonBone_t, CMaterialDrawDescriptor::KV3TransferSave_CMaterialDrawDescriptor, CHitBoxSet::KV3TransferSave_CHitBoxSet (16 total)
void __fastcall KeyValues3::SetString(KeyValues3 *const this, const char *value)
{
  const char *v3; // rbx
  size_t v4; // rax
  char *v5; // rax

  v3 = value;
  if ( value != 0 )
  {
    if ( strlen(value) > 7 )
    {
      KeyValues3::Internal_PrepareForInternalType(this, 6);
      v4 = strlen(v3);
      v5 = (**g_pMemAlloc)(g_pMemAlloc, v4 + 1);
      this->m_nAsInt64 = strcpy(v5, v3);
      return;
    }
  }
  else
  {
    v3 = "";
  }
  KeyValues3::Internal_SetToShortString(this, v3);
}


// KeyValues3::Internal_AimAtExternalString  (line 1042, @0x00000000031324b0, libserver.so)  // inlines: V_strlen
// calls: strlen, KeyValues3::Internal_PrepareForInternalType, KeyValues3::Internal_SetToShortString
// callers: LoadKV3Binary_R
void __fastcall KeyValues3::Internal_AimAtExternalString(KeyValues3 *const this, const char *value)
{
  if ( value != 0 && strlen(value) > 7 )
  {
    KeyValues3::Internal_PrepareForInternalType(this, 11);
    this->m_nAsInt64 = value;
  }
  else
  {
    KeyValues3::Internal_SetToShortString(this, value);
  }
}


// KeyValues3::Internal_SetToShortString  (line 1057, @0x0000000003131f40, libserver.so)  // inlines: V_strncpy<long unsigned int>
// calls: KeyValues3::Internal_PrepareForInternalType, _V_strncpy
// callers: KeyValues3::SetString, KeyValues3::Internal_AimAtExternalString
void __fastcall KeyValues3::Internal_SetToShortString(KeyValues3 *const this, const char *value)
{
  KeyValues3::Internal_PrepareForInternalType(this, 10);
  _V_strncpy(&this->m_pAsCharPtr, value, 8);
}


// KeyValues3::SetInt  (line 1067, @0x0000000003131d50, libserver.so)  // inlines: Internal_PrepareForType
// calls: KeyValues3::Internal_PrepareForInternalType
// callers: CLoadKV3FromDynData::ReadLiteralValue, CAttachment::KV3TransferSave_CAttachment, CHitBox::KV3TransferSave_CHitBox, CMaterialDrawDescriptor::KV3TransferSave_CMaterialDrawDescriptor, CRenderSkeleton::KV3TransferSave_CRenderSkeleton, CTiltTwistConstraint::KV3TransferSave_CTiltTwistConstraint, CMorphConstraint::KV3TransferSave_CMorphConstraint, CPhysSurfacePropertiesGame::KV3TransferSave_CPhysSurfacePropertiesGame
void __fastcall KeyValues3::SetInt(KeyValues3 *const this, int value)
{
  int64 v2; // r12

  v2 = value;
  KeyValues3::Internal_PrepareForInternalType(this, 3);
  this->m_nAsInt64 = v2;
}


// KeyValues3::SetBool  (line 1076, @0x0000000003131d70, libserver.so)  // inlines: Internal_PrepareForType
// calls: KeyValues3::Internal_PrepareForInternalType
// callers: CLoadKV3FromDynData::ReadLiteralValue, CLoadKV3FromText::ReadLiteralValue, LoadKV3Binary_R, CAttachment::KV3TransferSave_CAttachment, CHitBox::KV3TransferSave_CHitBox, CConstraintTarget::KV3TransferSave_CConstraintTarget, CTwistConstraint::KV3TransferSave_CTwistConstraint, CMorphConstraint::KV3TransferSave_CMorphConstraint, CPhysSurfacePropertiesGame::KV3TransferSave_CPhysSurfacePropertiesGame, ConstraintTarget_t::KV3TransferSave_ConstraintTarget_t
void __fastcall KeyValues3::SetBool(KeyValues3 *const this, bool value)
{
  KeyValues3::Internal_PrepareForInternalType(this, 2);
  this->m_bAsBool = value;
}


// KeyValues3::SetFloat  (line 1085, @0x0000000003131d90, libserver.so)  // inlines: Internal_PrepareForType
// calls: KeyValues3::Internal_PrepareForInternalType
// callers: SkeletonBoneBounds_t::KV3TransferSave_SkeletonBoneBounds_t, CAttachment::KV3TransferSave_CAttachment, CHitBox::KV3TransferSave_CHitBox, RenderSkeletonBone_t::KV3TransferSave_RenderSkeletonBone_t, CMaterialDrawDescriptor::KV3TransferSave_CMaterialDrawDescriptor, CSceneObjectData::KV3TransferSave_CSceneObjectData, CConstraintTarget::KV3TransferSave_CConstraintTarget, CConstraintSlave::KV3TransferSave_CConstraintSlave, CBaseConstraint::KV3TransferSave_CBaseConstraint, CAimConstraint::KV3TransferSave_CAimConstraint, CTwistConstraint::KV3TransferSave_CTwistConstraint, CMorphConstraint::KV3TransferSave_CMorphConstraint (17 total)
void __fastcall KeyValues3::SetFloat(KeyValues3 *const this, double a2, double value)
{
  KeyValues3::Internal_PrepareForInternalType(this, 5);
  this->m_flAsDouble = a2;
}


// KeyValues3::SetUint64  (line 1094, @0x0000000003131dc0, libserver.so)  // inlines: Internal_PrepareForType
// calls: KeyValues3::Internal_PrepareForInternalType
// callers: LoadKV3Binary_R
void __fastcall KeyValues3::SetUint64(KeyValues3 *const this, uint64 value)
{
  KeyValues3::Internal_PrepareForInternalType(this, 4);
  this->m_nAsInt64 = value;
}


// KeyValues3::SetInt64  (line 1103, @0x0000000003131de0, libserver.so)  // inlines: Internal_PrepareForType
// calls: KeyValues3::Internal_PrepareForInternalType
// callers: LoadKV3Binary_R, CRenderBufferBinding::KV3TransferSave_CRenderBufferBinding, CHitBox::KV3TransferSave_CHitBox, CHitBoxSet::KV3TransferSave_CHitBoxSet, CConstraintTarget::KV3TransferSave_CConstraintTarget, CConstraintSlave::KV3TransferSave_CConstraintSlave, CAimConstraint::KV3TransferSave_CAimConstraint, CPhysSurfaceProperties::KV3TransferSave_CPhysSurfaceProperties, ConstraintTarget_t::KV3TransferSave_ConstraintTarget_t, ConstraintSlave_t::KV3TransferSave_ConstraintSlave_t
void __fastcall KeyValues3::SetInt64(KeyValues3 *const this, int64 value)
{
  KeyValues3::Internal_PrepareForInternalType(this, 3);
  this->m_nAsInt64 = value;
}


// KeyValues3::SetDouble  (line 1112, @0x0000000003131ea0, libserver.so)  // inlines: Internal_PrepareForType
// calls: KeyValues3::Internal_PrepareForInternalType
// callers: CLoadKV3FromDynData::ReadLiteralValue, CLoadKV3FromText::ReadLiteralValue, LoadKV3Binary_R
void __fastcall KeyValues3::SetDouble(KeyValues3 *const this, double a2, double value)
{
  KeyValues3::Internal_PrepareForInternalType(this, 5);
  this->m_flAsDouble = a2;
}


// KeyValues3::SetToNull  (line 1121, @0x0000000003131ed0, libserver.so)  // inlines: Internal_PrepareForType
// calls: KeyValues3::Internal_PrepareForInternalType
// callers: CLoadKV3FromDynData::ReadObjectReference, CLoadKV3FromText::ReadLiteralValue, LoadKV3Binary_R, CKV3TransferSaveContext::SaveClassPointer<const CRenderBufferBinding>, CKV3TransferSaveContext::SaveClassPointer<const CAttachment>, CKV3TransferSaveContext::SaveClassPointer<const CHitBoxSet>, CKV3TransferValHelper<CUtlVector<CBaseConstraint*, CUtlMemory<CBaseConstraint*, int> > >::SaveValue<CUtlVector<CBaseConstraint*> >, CKV3TransferSaveContext::SaveClassPointer<const SkeletonBoneBounds_t>, CKV3TransferSaveContext::SaveClassPointer<const RenderSkeletonBone_t>, CKV3TransferSaveContext::SaveClassPointer<const CRenderSkeleton>, CKV3TransferSaveContext::SaveClassPointer<const CMaterialDrawDescriptor>, CKV3TransferSaveContext::SaveClassPointer<const CHitBox> (17 total)
void __fastcall KeyValues3::SetToNull(KeyValues3 *const this)
{
  KeyValues3::Internal_PrepareForInternalType(this, 1);
}


// KeyValues3::SetIntFromString  (line 1128, @0x0000000003131e00, libserver.so)  // inlines: Internal_PrepareForType, SetInt, SetInt64, SetUint64
// calls: V_atoui64, KeyValues3::Internal_PrepareForInternalType, V_atoi64
// callers: CLoadKV3FromText::ReadLiteralValue
void __fastcall KeyValues3::SetIntFromString(KeyValues3 *const this, const char *pString)
{
  int64 v3; // r12
  int64 v4; // r12

  if ( pString != 0 && *pString != 0 )
  {
    if ( *pString == 45 )
    {
      v4 = V_atoi64(pString);
      KeyValues3::Internal_PrepareForInternalType(this, 3);
      this->m_nAsInt64 = v4;
    }
    else
    {
      v3 = V_atoui64(pString, pString);
      if ( v3 < 0 )
        KeyValues3::Internal_PrepareForInternalType(this, 4);
      else
        KeyValues3::Internal_PrepareForInternalType(this, 3);
      this->m_nAsInt64 = v3;
    }
  }
  else
  {
    KeyValues3::Internal_PrepareForInternalType(this, 3);
    this->m_nAsInt64 = 0;
  }
}


// KeyValues3::ParseValueFromString  (line 1159, @0x0000000003132e60, libserver.so)  // inlines: GetType, Internal_PrepareForType, SetBool, SetDouble, SetInt64, V_strlen
// calls: strlen, KeyValues3::SetToBinaryBlob, CSplitString::CSplitString, KeyValues3::SetArrayElementCount, KeyValues3::GetArrayElement, CSplitString::~CSplitString, V_atoi64, KeyValues3::Internal_PrepareForInternalType, V_atoui64, V_atod, V_stricmp_fast, V_atoi (14 total)
// callers: KeyValues3::EqualsValueFromString
// strings: "true", "false"
void __fastcall KeyValues3::ParseValueFromString(KeyValues3 *const this, const char *pString)
{
  const char *v3; // rbx
  unsigned __int8 v4; // al
  char v5; // al
  int v6; // eax
  int m_Size; // r14d
  __int64 i; // rbx
  KeyValues3 *ArrayElement; // rax
  __int64 v10; // rax
  int64 v11; // rbx
  int v12; // ebx
  int64 v13; // [rsp+8h] [rbp-48h]
  CSplitString split; // [rsp+10h] [rbp-40h] BYREF

  v3 = pString;
  if ( pString == 0 )
    v3 = "";
  v4 = *this;
  if ( (*this & 0x1C) == 0x14 )
  {
LABEL_26:
    KeyValues3::SetString(this, v3);
    return;
  }
  if ( (v4 & 0x1E) == 0x18 )
  {
LABEL_13:
    v6 = strlen(v3);
    KeyValues3::SetToBinaryBlob(this, v3, v6 + 1);
    return;
  }
  v5 = (v4 >> 1) & 0xF;
  switch ( v5 )
  {
    case 1:
      return;
    case 8:
      CSplitString::CSplitString(&split, v3, " ");
      m_Size = split.m_Size;
      KeyValues3::SetArrayElementCount(this, split.m_Size);
      for ( i = 0; m_Size > i; ++i )
      {
        ArrayElement = KeyValues3::GetArrayElement(this, i);
        KeyValues3::ParseValueFromString(ArrayElement, split.m_Memory.m_pMemory[i]);
      }
      CSplitString::~CSplitString(&split);
      return;
    case 3:
      v10 = V_atoi64(v3);
LABEL_18:
      v11 = v10;
      KeyValues3::Internal_PrepareForInternalType(this, 3);
      this->m_nAsInt64 = v11;
      return;
    case 4:
      v10 = V_atoui64(v3, pString);
      goto LABEL_18;
    case 5:
      v13 = V_atod(v3);
      KeyValues3::Internal_PrepareForInternalType(this, 5);
      this->m_nAsInt64 = v13;
      return;
    case 6:
      goto LABEL_26;
    case 7:
      goto LABEL_13;
    case 2:
      if ( V_stricmp_fast(v3, "true") != 0 )
      {
        if ( V_stricmp_fast(v3, "false") != 0 )
        {
          v12 = V_atoi(v3);
          KeyValues3::Internal_PrepareForInternalType(this, 2);
          this->m_bAsBool = v12 != 0;
        }
        else
        {
          KeyValues3::Internal_PrepareForInternalType(this, 2);
          this->m_bAsBool = 0;
        }
      }
      else
      {
        KeyValues3::Internal_PrepareForInternalType(this, 2);
        this->m_bAsBool = 1;
      }
      break;
    default:
      break;
  }
}


// KeyValues3::EqualsValueFromString  (line 1225, @0x00000000031342f0, libserver.so)  // inlines: Internal_ClearDataWithoutFreeing, KeyValues3, ~KeyValues3
// calls: KeyValues3::CopyFrom, KeyValues3::ParseValueFromString, KeyValues3::IsIdenticalTo, KeyValues3::Internal_FreeAllocation, __stack_chk_fail, _Unwind_Resume
bool __fastcall KeyValues3::EqualsValueFromString(KeyValues3 *const this, const char *pString)
{
  const KeyValues3 *v3; // r12
  KeyValues3 temp; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-28h]

  v3 = this;
  temp.m_nAsInt64 = 0;
  v6 = __readfsqword(0x28u);
  *&temp = *&temp & 0xE0 | 3;
  *&temp &= 0xFFE0001F;
  KeyValues3::CopyFrom(&temp, this);
  KeyValues3::ParseValueFromString(&temp, pString);
  LOBYTE(v3) = KeyValues3::IsIdenticalTo(v3, &temp, 0);
  KeyValues3::Internal_FreeAllocation(&temp);
  return v3;
}


// KeyValues3::EnsureIsArray  (line 1237, @0x00000000031330a0, libserver.so)  // inlines: GetType, Internal_PrepareForType, SetToEmptyArray
// calls: KeyValues3::Internal_PrepareForInternalType, KeyValues3::GetArrayElementCount, KeyValues3::SetArrayElementCount, KeyValues3::GetArrayElement, KeyValues3::EnsureTypeIs
void __fastcall KeyValues3::EnsureIsArray(KeyValues3 *const this, int nCount, KeyValues3Type_t nType)
{
  unsigned __int8 v6; // al
  int v7; // ebx
  int v8; // esi
  KeyValues3 *ArrayElement; // rax

  v6 = *this;
  if ( (*this & 0x1C) == 0x14 || (v6 & 0x1E) == 0x18 || ((v6 >> 1) & 0xF) != 8 )
    KeyValues3::Internal_PrepareForInternalType(this, 8);
  if ( KeyValues3::GetArrayElementCount(this) != nCount )
    KeyValues3::SetArrayElementCount(this, nCount);
  v7 = 0;
  if ( nCount > 0 )
  {
    do
    {
      v8 = v7++;
      ArrayElement = KeyValues3::GetArrayElement(this, v8);
      KeyValues3::EnsureTypeIs(ArrayElement, nType);
    }
    while ( v7 != nCount );
  }
}


// KeyValues3::EnsureIsAnyArray  (line 1258, @0x0000000003133140, libserver.so)  // inlines: GetType, Internal_PrepareForType, SetToEmptyArray
// calls: KeyValues3::Internal_PrepareForInternalType, KeyValues3::GetArrayElementCount, KeyValues3::SetArrayElementCount
void __fastcall KeyValues3::EnsureIsAnyArray(KeyValues3 *const this, int nCount)
{
  unsigned __int8 v4; // al

  v4 = *this;
  if ( (*this & 0x1C) == 0x14 || (v4 & 0x1E) == 0x18 || ((v4 >> 1) & 0xF) != 8 )
    KeyValues3::Internal_PrepareForInternalType(this, 8);
  if ( KeyValues3::GetArrayElementCount(this) != nCount )
    KeyValues3::SetArrayElementCount(this, nCount);
}


// KeyValues3::EnsureTypeIs  (line 1274, @0x0000000003131ff0, libserver.so)  // inlines: CUtlString, GetAsNumeric<double>, GetAsNumeric<int>, GetAsNumeric<long long int>, GetAsNumeric<long long unsigned int>, GetDouble, GetInt, GetInt64, GetStringRaw, GetType, GetUint64, Internal_PrepareForType, SetBool, SetDouble, SetInt64, SetToEmptyArray, SetToEmptyTable, SetToNull, SetUint64, ~CUtlString
// calls: KeyValues3::GetString, CUtlString::Get, KeyValues3::SetString, CUtlString::FreeMemoryBlock, KeyValues3::Internal_PrepareForInternalType, KeyValues3::SetToZeroedBinaryBlob, V_atod, _Unwind_Resume
// callers: KeyValues3::EnsureIsArray
// globals: jpt_3132046
void __fastcall KeyValues3::EnsureTypeIs(KeyValues3 *const this, KeyValues3Type_t nType)
{
  char v2; // al
  unsigned __int8 v4; // dl
  char v5; // cl
  char v6; // r8
  const char *v7; // rax
  char v8; // dl
  bool m_bAsBool; // r12
  char v10; // dl
  int64 m_nAsInt64; // r12
  char v12; // dl
  int64 v13; // r12
  char v14; // dl
  double m_pAsCharPtr; // xmm0_8
  void *v16; // rdi
  double m_flAsDouble; // xmm0_8
  void *p_m_flAsDouble; // rdi
  void *v19; // rdi
  void *m_pTable; // rdi
  const char *v21; // rax
  unsigned __int64 v22; // rdx
  int64 v23; // [rsp+8h] [rbp-28h]
  CUtlString temp; // [rsp+10h] [rbp-20h] BYREF

  v2 = 6;
  v4 = *this;
  v5 = *this & 0x1C;
  v6 = *this & 0x1E;
  if ( v5 != 20 )
  {
    v2 = 7;
    if ( v6 != 24 )
      v2 = (v4 >> 1) & 0xF;
  }
  if ( nType != v2 )
  {
    switch ( nType )
    {
      case KeyValues3Type_t::KEYVALUES3_TYPE_NULL:
        KeyValues3::Internal_PrepareForInternalType(this, 1);
        return;
      case KeyValues3Type_t::KEYVALUES3_TYPE_BOOL:
        if ( v5 == 20 )
          goto LABEL_66;
        if ( v6 == 24 )
          goto LABEL_34;
        v8 = (v4 >> 1) & 0xF;
        switch ( v8 )
        {
          case 2:
            m_bAsBool = this->m_bAsBool;
            break;
          case 3:
          case 4:
            m_bAsBool = LODWORD(this->m_flAsDouble) != 0;
            break;
          case 5:
            m_bAsBool = this->m_flAsDouble != 0;
            break;
          case 6:
LABEL_66:
            if ( v6 == 22 || v6 == 12 )
            {
              m_pTable = this->m_pTable;
            }
            else
            {
              m_pTable = 0;
              if ( v6 == 20 )
                m_pTable = &this->m_flAsDouble;
            }
            m_bAsBool = V_atod(m_pTable) != 0;
            break;
          default:
LABEL_34:
            m_bAsBool = 0;
            break;
        }
        KeyValues3::Internal_PrepareForInternalType(this, 2);
        this->m_bAsBool = m_bAsBool;
        return;
      case KeyValues3Type_t::KEYVALUES3_TYPE_INT64:
        if ( v5 == 20 )
        {
          v10 = 6;
        }
        else if ( v6 == 24 )
        {
          v10 = 7;
        }
        else
        {
          v10 = (v4 >> 1) & 0xF;
          if ( v10 == 2 )
          {
            m_nAsInt64 = this->m_bAsBool;
            goto LABEL_20;
          }
          if ( (v10 - 3) <= 1u )
          {
            m_nAsInt64 = this->m_nAsInt64;
            goto LABEL_20;
          }
          if ( v10 == 5 )
          {
            m_nAsInt64 = this->m_flAsDouble;
            goto LABEL_20;
          }
        }
        m_nAsInt64 = 0;
        if ( v10 == 6 )
        {
          if ( v6 == 22 || v6 == 12 )
          {
            p_m_flAsDouble = this->m_pTable;
          }
          else
          {
            p_m_flAsDouble = &this->m_flAsDouble;
            if ( v6 != 20 )
              p_m_flAsDouble = 0;
          }
          m_nAsInt64 = V_atod(p_m_flAsDouble);
        }
LABEL_20:
        KeyValues3::Internal_PrepareForInternalType(this, 3);
        this->m_nAsInt64 = m_nAsInt64;
        return;
      case KeyValues3Type_t::KEYVALUES3_TYPE_UINT64:
        if ( v5 == 20 )
        {
          v12 = 6;
        }
        else if ( v6 == 24 )
        {
          v12 = 7;
        }
        else
        {
          v12 = (v4 >> 1) & 0xF;
          if ( v12 == 2 )
          {
            v13 = this->m_bAsBool;
            goto LABEL_25;
          }
          if ( (v12 - 3) <= 1u )
          {
            v13 = this->m_nAsInt64;
LABEL_25:
            KeyValues3::Internal_PrepareForInternalType(this, 4);
            this->m_nAsInt64 = v13;
            return;
          }
          if ( v12 == 5 )
          {
            m_flAsDouble = this->m_flAsDouble;
            if ( m_flAsDouble >= 9.223372036854776e18 )
            {
LABEL_73:
              v13 = (m_flAsDouble - 9.223372036854776e18) ^ 0x8000000000000000LL;
              goto LABEL_25;
            }
LABEL_41:
            v13 = m_flAsDouble;
            goto LABEL_25;
          }
        }
        v13 = 0;
        if ( v12 != 6 )
          goto LABEL_25;
        if ( v6 == 22 || v6 == 12 )
        {
          v16 = this->m_pTable;
        }
        else
        {
          v16 = &this->m_flAsDouble;
          if ( v6 != 20 )
            v16 = 0;
        }
        m_flAsDouble = V_atod(v16);
        if ( m_flAsDouble >= 9.223372036854776e18 )
          goto LABEL_73;
        goto LABEL_41;
      case KeyValues3Type_t::KEYVALUES3_TYPE_DOUBLE:
        if ( v5 == 20 )
          goto LABEL_57;
        if ( v6 == 24 )
          goto LABEL_33;
        v14 = (v4 >> 1) & 0xF;
        switch ( v14 )
        {
          case 2:
            m_pAsCharPtr = this->m_bAsBool;
            break;
          case 3:
            m_pAsCharPtr = this->m_pAsCharPtr;
            break;
          case 4:
            v21 = this->m_pAsCharPtr;
            if ( v21 < 0 )
            {
              v22 = this->m_nAsInt64 & 1 | (this->m_nAsInt64 >> 1);
              m_pAsCharPtr = v22 + v22;
            }
            else
            {
              m_pAsCharPtr = v21;
            }
            break;
          case 5:
            m_pAsCharPtr = this->m_flAsDouble;
            break;
          case 6:
LABEL_57:
            if ( v6 == 22 || v6 == 12 )
            {
              v19 = this->m_pTable;
            }
            else
            {
              v19 = 0;
              if ( v6 == 20 )
                v19 = &this->m_flAsDouble;
            }
            m_pAsCharPtr = V_atod(v19);
            break;
          default:
LABEL_33:
            m_pAsCharPtr = 0.0;
            break;
        }
        v23 = *&m_pAsCharPtr;
        KeyValues3::Internal_PrepareForInternalType(this, 5);
        this->m_nAsInt64 = v23;
        return;
      case KeyValues3Type_t::KEYVALUES3_TYPE_STRING:
        temp.m_pString = 0;
        KeyValues3::GetString(this, &temp);
        v7 = CUtlString::Get(&temp);
        KeyValues3::SetString(this, v7);
        if ( temp.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&temp);
        return;
      case KeyValues3Type_t::KEYVALUES3_TYPE_BINARY_BLOB:
        KeyValues3::SetToZeroedBinaryBlob(this, 0);
        return;
      case KeyValues3Type_t::KEYVALUES3_TYPE_ARRAY:
        KeyValues3::Internal_PrepareForInternalType(this, 8);
        return;
      case KeyValues3Type_t::KEYVALUES3_TYPE_TABLE:
        KeyValues3::Internal_PrepareForInternalType(this, 9);
        return;
      default:
        return;
    }
  }
}


// KeyValues3::SetMemberToNull  (line 1339, @0x0000000003133ca0, libserver.so)  // inlines: Internal_PrepareForType, SetToNull
// calls: KeyValues3::FindOrCreateMember, KeyValues3::Internal_PrepareForInternalType
// callers: CLoadKV3FromDynData::HandleMember, CLoadKV3FromText::ReadTable, CRenderMesh::TransferPostSaveFn, CKV3TransferSaveContext::CreateTargetMember, CRenderBufferBinding::KV3TransferSave_CRenderBufferBinding, SkeletonBoneBounds_t::KV3TransferSave_SkeletonBoneBounds_t, RenderSkeletonBone_t::KV3TransferSave_RenderSkeletonBone_t, CMaterialDrawDescriptor::KV3TransferSave_CMaterialDrawDescriptor, CHitBoxSet::KV3TransferSave_CHitBoxSet, CHitBoxSetList::KV3TransferSave_CHitBoxSetList, CRenderMesh::KV3TransferSave_CRenderMesh, CConstraintTarget::KV3TransferSave_CConstraintTarget (26 total)
KeyValues3 *__fastcall KeyValues3::SetMemberToNull(
        KeyValues3 *const this,
        const char *pMemberName,
        KeyValues3LowercaseHash_t precomputedHash)
{
  KeyValues3 *Member; // rbx

  Member = KeyValues3::FindOrCreateMember(this, pMemberName, precomputedHash);
  KeyValues3::Internal_PrepareForInternalType(Member, 1);
  return Member;
}


// KeyValues3::SetMemberString  (line 1349, @0x0000000003133cd0, libserver.so)
// calls: KeyValues3::FindOrCreateMember, KeyValues3::SetString
// callers: CLoadKV3FromDynData::ReadObject, SaveUtlDict<CAttachment>, SaveUtlDict<CHitBoxSet>, CKV3TransferSaveContext::PrepareTargetForClass
KeyValues3 *__fastcall KeyValues3::SetMemberString(
        KeyValues3 *const this,
        const char *pMemberName,
        const char *value,
        KeyValues3LowercaseHash_t precomputedHash)
{
  KeyValues3 *Member; // rbx

  Member = KeyValues3::FindOrCreateMember(this, pMemberName, precomputedHash);
  KeyValues3::SetString(Member, value);
  return Member;
}


// KeyValues3::SetMemberInt  (line 1359, @0x0000000003133d00, libserver.so)  // inlines: Internal_PrepareForType, SetInt
// calls: KeyValues3::FindOrCreateMember, KeyValues3::Internal_PrepareForInternalType
KeyValues3 *__fastcall KeyValues3::SetMemberInt(
        KeyValues3 *const this,
        const char *pMemberName,
        int value,
        KeyValues3LowercaseHash_t precomputedHash)
{
  int64 v4; // r12
  KeyValues3 *Member; // rbx

  v4 = value;
  Member = KeyValues3::FindOrCreateMember(this, pMemberName, precomputedHash);
  KeyValues3::Internal_PrepareForInternalType(Member, 3);
  Member->m_nAsInt64 = v4;
  return Member;
}


// KeyValues3::SetMemberBool  (line 1369, @0x0000000003133d30, libserver.so)  // inlines: Internal_PrepareForType, SetBool
// calls: KeyValues3::FindOrCreateMember, KeyValues3::Internal_PrepareForInternalType
// callers: CMaterialDrawDescriptor::TransferPostSaveFn
KeyValues3 *__fastcall KeyValues3::SetMemberBool(
        KeyValues3 *const this,
        const char *pMemberName,
        bool value,
        KeyValues3LowercaseHash_t precomputedHash)
{
  KeyValues3 *Member; // rbx

  Member = KeyValues3::FindOrCreateMember(this, pMemberName, precomputedHash);
  KeyValues3::Internal_PrepareForInternalType(Member, 2);
  Member->m_bAsBool = value;
  return Member;
}


// KeyValues3::SetMemberFloat  (line 1379, @0x0000000003133d60, libserver.so)  // inlines: Internal_PrepareForType, SetFloat
// calls: KeyValues3::FindOrCreateMember, KeyValues3::Internal_PrepareForInternalType
KeyValues3 *__fastcall KeyValues3::SetMemberFloat(
        KeyValues3 *const this,
        const char *pMemberName,
        float value,
        KeyValues3LowercaseHash_t precomputedHash)
{
  KeyValues3 *Member; // rbx

  Member = KeyValues3::FindOrCreateMember(this, pMemberName, precomputedHash);
  KeyValues3::Internal_PrepareForInternalType(Member, 5);
  Member->m_flAsDouble = value;
  return Member;
}


// KeyValues3::SetMemberInt64  (line 1389, @0x0000000003133da0, libserver.so)  // inlines: Internal_PrepareForType, SetInt64
// calls: KeyValues3::FindOrCreateMember, KeyValues3::Internal_PrepareForInternalType
KeyValues3 *__fastcall KeyValues3::SetMemberInt64(
        KeyValues3 *const this,
        const char *pMemberName,
        int64 value,
        KeyValues3LowercaseHash_t precomputedHash)
{
  KeyValues3 *Member; // rbx

  Member = KeyValues3::FindOrCreateMember(this, pMemberName, precomputedHash);
  KeyValues3::Internal_PrepareForInternalType(Member, 3);
  Member->m_nAsInt64 = value;
  return Member;
}


// KeyValues3::SetMemberUint64  (line 1399, @0x0000000003133dd0, libserver.so)  // inlines: Internal_PrepareForType, SetUint64
// calls: KeyValues3::FindOrCreateMember, KeyValues3::Internal_PrepareForInternalType
KeyValues3 *__fastcall KeyValues3::SetMemberUint64(
        KeyValues3 *const this,
        const char *pMemberName,
        uint64 value,
        KeyValues3LowercaseHash_t precomputedHash)
{
  KeyValues3 *Member; // rbx

  Member = KeyValues3::FindOrCreateMember(this, pMemberName, precomputedHash);
  KeyValues3::Internal_PrepareForInternalType(Member, 4);
  Member->m_nAsInt64 = value;
  return Member;
}


// KeyValues3::SetMemberDouble  (line 1409, @0x0000000003133e00, libserver.so)  // inlines: Internal_PrepareForType, SetDouble
// calls: KeyValues3::FindOrCreateMember, KeyValues3::Internal_PrepareForInternalType
KeyValues3 *__fastcall KeyValues3::SetMemberDouble(
        KeyValues3 *const this,
        const char *pMemberName,
        double value,
        KeyValues3LowercaseHash_t precomputedHash)
{
  KeyValues3 *Member; // rbx

  Member = KeyValues3::FindOrCreateMember(this, pMemberName, precomputedHash);
  KeyValues3::Internal_PrepareForInternalType(Member, 5);
  Member->m_flAsDouble = value;
  return Member;
}


// KeyValues3::SetMemberToEmptyTable  (line 1419, @0x0000000003133e40, libserver.so)  // inlines: Internal_PrepareForType, SetToEmptyTable
// calls: KeyValues3::FindOrCreateMember, KeyValues3::Internal_PrepareForInternalType
KeyValues3 *__fastcall KeyValues3::SetMemberToEmptyTable(
        KeyValues3 *const this,
        const char *pMemberName,
        KeyValues3LowercaseHash_t precomputedHash)
{
  KeyValues3 *Member; // rbx

  Member = KeyValues3::FindOrCreateMember(this, pMemberName, precomputedHash);
  KeyValues3::Internal_PrepareForInternalType(Member, 9);
  return Member;
}


// KeyValues3::SetMemberToCopyOfValue  (line 1429, @0x00000000031343a0, libserver.so)
// calls: KeyValues3::FindOrCreateMember, KeyValues3::CopyFrom
void __fastcall KeyValues3::SetMemberToCopyOfValue(KeyValues3 *const this, const char *pMemberName, KeyValues3 *pValue)
{
  KeyValues3 *Member; // rax

  Member = KeyValues3::FindOrCreateMember(this, pMemberName, 0);
  KeyValues3::CopyFrom(Member, pValue);
}


// KeyValues3::FindOrCreateMember  (line 1438, @0x0000000003133b70, libserver.so)  // inlines: GetTableRaw, GetType, Internal_PrepareForType, KV3MakeLowerHash, MakeStringToken, MemberData, operator[]
// calls: KeyValues3::Internal_PrepareForInternalType, CKeyValues3Table::FindOrCreateMember_Internal, MurmurHash2LowerCase, RegisterStringToken
// callers: KeyValues3::SetMemberToNull, KeyValues3::SetMemberString, KeyValues3::SetMemberInt, KeyValues3::SetMemberBool, KeyValues3::SetMemberFloat, KeyValues3::SetMemberInt64, KeyValues3::SetMemberUint64, KeyValues3::SetMemberDouble, KeyValues3::SetMemberToEmptyTable, KeyValues3::SetMemberToCopyOfValue, CLoadKV3FromDynData::AllocTempKV3, CLoadKV3FromDynData::FreeAllTempKV3 (16 total)
KeyValues3 *__fastcall KeyValues3::FindOrCreateMember(
        KeyValues3 *const this,
        const char *pMemberName,
        KeyValues3LowercaseHash_t precomputedHash)
{
  unsigned __int8 v6; // al
  unsigned __int8 v7; // al
  CKeyValues3Table *m_pTable; // rdi
  int Member_Internal; // eax
  unsigned __int8 v10; // dl
  const char *m_pAsCharPtr; // rcx
  uint32 v13; // eax
  uint32 v14; // [rsp+Ch] [rbp-24h]

  v6 = *this;
  if ( (*this & 0x1C) == 0x14 || (v6 & 0x1E) == 0x18 || ((v6 >> 1) & 0xF) != 9 )
    KeyValues3::Internal_PrepareForInternalType(this, 9);
  if ( precomputedHash.m_nHashCode == 0 && pMemberName != 0 && *pMemberName != 0 )
  {
    v13 = MurmurHash2LowerCase(pMemberName, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      v14 = v13;
      RegisterStringToken(v13, pMemberName, 0, 1);
      v13 = v14;
    }
    precomputedHash.m_nHashCode = v13;
  }
  v7 = *this;
  m_pTable = 0;
  if ( (*this & 0x1C) != 0x14 && (v7 & 0x1E) != 0x18 && ((v7 >> 1) & 0xF) == 9 )
    m_pTable = this->m_pTable;
  Member_Internal = CKeyValues3Table::FindOrCreateMember_Internal(m_pTable, precomputedHash, pMemberName, 0);
  v10 = *this;
  m_pAsCharPtr = 0;
  if ( (*this & 0x1C) != 0x14 && (v10 & 0x1E) != 0x18 && ((v10 >> 1) & 0xF) == 9 )
    m_pAsCharPtr = this->m_pAsCharPtr;
  return *(*(m_pAsCharPtr + 19) + 8LL * Member_Internal);
}


// KeyValues3::Internal_FindOrCreateMemberAimedAtExternalName  (line 1466, @0x0000000003133e70, libserver.so)  // inlines: GetTableRaw, GetType, Internal_PrepareForType, KV3MakeLowerHash, MakeStringToken, MemberData, operator[]
// calls: KeyValues3::Internal_PrepareForInternalType, CKeyValues3Table::FindOrCreateMember_Internal, MurmurHash2LowerCase, RegisterStringToken
// callers: LoadKV3Binary_R
KeyValues3 *__fastcall KeyValues3::Internal_FindOrCreateMemberAimedAtExternalName(
        KeyValues3 *const this,
        const char *pMemberName,
        KeyValues3LowercaseHash_t precomputedHash)
{
  unsigned __int8 v6; // al
  unsigned __int8 v7; // al
  CKeyValues3Table *m_pTable; // rdi
  int Member_Internal; // eax
  unsigned __int8 v10; // dl
  const char *m_pAsCharPtr; // rcx
  uint32 v13; // eax
  uint32 v14; // [rsp+Ch] [rbp-24h]

  v6 = *this;
  if ( (*this & 0x1C) == 0x14 || (v6 & 0x1E) == 0x18 || ((v6 >> 1) & 0xF) != 9 )
    KeyValues3::Internal_PrepareForInternalType(this, 9);
  if ( precomputedHash.m_nHashCode == 0 && pMemberName != 0 && *pMemberName != 0 )
  {
    v13 = MurmurHash2LowerCase(pMemberName, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      v14 = v13;
      RegisterStringToken(v13, pMemberName, 0, 1);
      v13 = v14;
    }
    precomputedHash.m_nHashCode = v13;
  }
  v7 = *this;
  m_pTable = 0;
  if ( (*this & 0x1C) != 0x14 && (v7 & 0x1E) != 0x18 && ((v7 >> 1) & 0xF) == 9 )
    m_pTable = this->m_pTable;
  Member_Internal = CKeyValues3Table::FindOrCreateMember_Internal(m_pTable, precomputedHash, pMemberName, 1);
  v10 = *this;
  m_pAsCharPtr = 0;
  if ( (*this & 0x1C) != 0x14 && (v10 & 0x1E) != 0x18 && ((v10 >> 1) & 0xF) == 9 )
    m_pAsCharPtr = this->m_pAsCharPtr;
  return *(*(m_pAsCharPtr + 19) + 8LL * Member_Internal);
}


// KeyValues3::FindMember  (line 1485, @0x00000000031301e0, libserver.so)  // inlines: KV3MakeLowerHash, MakeStringToken
// calls: KeyValues3::Internal_FindMember, MurmurHash2LowerCase, RegisterStringToken
// callers: CCustomNetTableManager::GetCustomStringTableDefs, KeyValues3::CopyMatchingKeysFrom, CAttachment::TransferPostLoadFn, CMaterialDrawDescriptor::TransferPostLoadFn, CRenderMesh::TransferPostSaveFn, LoadUtlDict<CAttachment>, LoadUtlDict<CHitBoxSet>, CRenderMesh::TransferPostLoadFn, CKV3TransferSaveContext::CreateTargetMember, CRenderBufferBinding::KV3TransferSave_CRenderBufferBinding, CRenderBufferBinding::KV3TransferLoad_CRenderBufferBinding, SkeletonBoneBounds_t::KV3TransferSave_SkeletonBoneBounds_t (60 total)
KeyValues3 *__fastcall KeyValues3::FindMember(
        KeyValues3 *const this,
        const char *pMemberName,
        KeyValues3LowercaseHash_t precomputedHash)
{
  uint32 m_nHashCode; // esi
  uint32 v7; // eax
  KeyValues3LowercaseHash_t precomputedHasha; // [rsp+Ch] [rbp-14h]

  m_nHashCode = precomputedHash.m_nHashCode;
  if ( precomputedHash.m_nHashCode == 0 && pMemberName != 0 && *pMemberName != 0 )
  {
    v7 = MurmurHash2LowerCase(pMemberName, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      precomputedHasha.m_nHashCode = v7;
      RegisterStringToken(v7, pMemberName, 0, 1);
      m_nHashCode = precomputedHasha.m_nHashCode;
    }
    else
    {
      m_nHashCode = v7;
    }
  }
  return KeyValues3::Internal_FindMember(this, m_nHashCode, pMemberName);
}


// KeyValues3::Internal_FindMember  (line 1498, @0x000000000312f760, libserver.so)  // inlines: GetTableRaw, GetType, MemberData, operator[]
// calls: CKeyValues3Table::FindMember_Internal
// callers: KeyValues3::GetMemberInt, KeyValues3::GetMemberBool, KeyValues3::GetMemberUint64, KeyValues3::GetMemberInt64, KeyValues3::GetMemberFloat, KeyValues3::GetMemberDouble, KeyValues3::GetMemberString, KeyValues3::GetMemberStringRaw, KeyValues3::FindMember
KeyValues3 *__fastcall KeyValues3::Internal_FindMember(
        KeyValues3 *const this,
        KeyValues3LowercaseHash_t memberName,
        const char *pReferenceName)
{
  KeyValues3 *v3; // rbx
  unsigned __int8 v4; // cl
  const CKeyValues3Table *m_pTable; // r12
  int Member_Internal; // eax

  v3 = 0;
  v4 = *this;
  if ( (*this & 0x1C) != 0x14 && (v4 & 0x1E) != 0x18 && ((v4 >> 1) & 0xF) == 9 )
  {
    m_pTable = this->m_pTable;
    Member_Internal = CKeyValues3Table::FindMember_Internal(m_pTable, memberName, pReferenceName);
    if ( Member_Internal != -1 )
      return m_pTable->m_MemberData.m_Memory.m_pMemory[Member_Internal];
  }
  return v3;
}


// KeyValues3::GetMemberCount  (line 1513, @0x000000000312f520, libserver.so)  // inlines: GetType
// callers: CKeyValues3Iterator::Advance, SaveKV3Text_R, SaveKV3Binary_R, GatherSymbols_R
int __fastcall KeyValues3::GetMemberCount(const KeyValues3 *const this)
{
  unsigned __int8 v1; // dl
  int result; // eax

  v1 = *this;
  result = 0;
  if ( (*this & 0x1C) != 0x14 && (v1 & 0x1E) != 0x18 && ((v1 >> 1) & 0xF) == 9 )
    return *this->m_pAsCharPtr;
  return result;
}


// KeyValues3::GetMember  (line 1524, @0x000000000312f550, libserver.so)  // inlines: GetTableRaw, GetType, MemberData, operator[]
// callers: CKeyValues3Iterator::Advance
KeyValues3 *__fastcall KeyValues3::GetMember(KeyValues3 *const this, int nIndex)
{
  unsigned __int8 v2; // dl
  KeyValues3 *result; // rax
  const char *m_pAsCharPtr; // rdx

  v2 = *this;
  result = 0;
  if ( (*this & 0x1C) != 0x14 && (v2 & 0x1E) != 0x18 && ((v2 >> 1) & 0xF) == 9 )
  {
    m_pAsCharPtr = this->m_pAsCharPtr;
    if ( nIndex >= 0 && nIndex < *m_pAsCharPtr )
      return *(*(m_pAsCharPtr + 19) + 8LL * nIndex);
  }
  return result;
}


// KeyValues3::GetMember  (line 1539, @0x000000000312f5a0, libserver.so)  // inlines: GetTableRaw, GetType, MemberData, operator[]
// callers: SaveKV3Text_R, SaveKV3Binary_R, GatherSymbols_R
const KeyValues3 *__fastcall KeyValues3::GetMember(const KeyValues3 *const this, int nIndex)
{
  unsigned __int8 v2; // dl
  const KeyValues3 *result; // rax
  const char *m_pAsCharPtr; // rdx

  v2 = *this;
  result = 0;
  if ( (*this & 0x1C) != 0x14 && (v2 & 0x1E) != 0x18 && ((v2 >> 1) & 0xF) == 9 )
  {
    m_pAsCharPtr = this->m_pAsCharPtr;
    if ( nIndex >= 0 && nIndex < *m_pAsCharPtr )
      return *(*(m_pAsCharPtr + 19) + 8LL * nIndex);
  }
  return result;
}


// KeyValues3::GetMemberName  (line 1554, @0x000000000312f5f0, libserver.so)  // inlines: GetTableRaw, GetType, MemberName, operator[]
// callers: KeyValues3::GetMemberNameEscaped, SaveKV3Binary_R, GatherSymbols_R
const char *__fastcall KeyValues3::GetMemberName(const KeyValues3 *const this, int nIndex)
{
  unsigned __int8 v2; // dl
  const char *result; // rax
  const char *m_pAsCharPtr; // rdx

  v2 = *this;
  result = 0;
  if ( (*this & 0x1C) != 0x14 && (v2 & 0x1E) != 0x18 && ((v2 >> 1) & 0xF) == 9 )
  {
    m_pAsCharPtr = this->m_pAsCharPtr;
    if ( nIndex >= 0 && nIndex < *m_pAsCharPtr )
      return *(*(m_pAsCharPtr + 8) + 8LL * nIndex);
  }
  return result;
}


// KeyValues3::GetMemberNameEscaped  (line 1569, @0x000000000312f630, libserver.so)
// calls: KeyValues3::GetMemberName, UtlTokenizer_QuoteAndEscapeString, CUtlString::operator=
// callers: SaveKV3Text_R
void __fastcall KeyValues3::GetMemberNameEscaped(const KeyValues3 *const this, int nIndex, CUtlString *pOutName)
{
  const char *MemberName; // r12

  MemberName = KeyValues3::GetMemberName(this, nIndex);
  if ( !UtlTokenizer_QuoteAndEscapeString(MemberName, pOutName) )
    CUtlString::operator=(pOutName, MemberName);
}


// KeyValues3::RemoveMember  (line 1582, @0x00000000031317c0, libserver.so)  // inlines: GetTableRaw, GetType
// calls: CKeyValues3Table::Remove
bool __fastcall KeyValues3::RemoveMember(KeyValues3 *const this, int nIndex)
{
  unsigned __int8 v2; // dl
  bool result; // al
  CKeyValues3Table *m_pTable; // rdi

  v2 = *this;
  result = 0;
  if ( (*this & 0x1C) != 0x14 && (v2 & 0x1E) != 0x18 && ((v2 >> 1) & 0xF) == 9 )
  {
    m_pTable = this->m_pTable;
    if ( nIndex >= 0 && nIndex < m_pTable->m_MemberNameLowerHash.m_Size )
    {
      CKeyValues3Table::Remove(m_pTable, nIndex);
      return 1;
    }
  }
  return result;
}


// KeyValues3::RemoveMember  (line 1598, @0x0000000003131810, libserver.so)  // inlines: GetTableRaw, GetType, KV3MakeLowerHash, MakeStringToken
// calls: CKeyValues3Table::FindMember_Internal, CKeyValues3Table::Remove, MurmurHash2LowerCase, RegisterStringToken
bool __fastcall KeyValues3::RemoveMember(
        KeyValues3 *const this,
        const char *pMemberName,
        KeyValues3LowercaseHash_t precomputedHash)
{
  unsigned __int8 v4; // cl
  uint32 m_nHashCode; // eax
  CKeyValues3Table *m_pTable; // r13
  int Member_Internal; // eax
  uint32 v10; // [rsp+Ch] [rbp-24h]

  v4 = *this;
  if ( (*this & 0x1C) == 0x14 )
    return 0;
  m_nHashCode = precomputedHash.m_nHashCode;
  if ( (v4 & 0x1E) == 0x18 || ((v4 >> 1) & 0xF) != 9 )
    return 0;
  if ( precomputedHash.m_nHashCode != 0 )
    goto LABEL_5;
  if ( pMemberName == 0 || *pMemberName == 0 )
    goto LABEL_11;
  m_nHashCode = MurmurHash2LowerCase(pMemberName, 0x31415926u);
  if ( g_bUpdateStringTokenDatabase )
  {
    v10 = m_nHashCode;
    RegisterStringToken(m_nHashCode, pMemberName, 0, 1);
    m_nHashCode = v10;
  }
  v4 = *this;
  m_pTable = 0;
  if ( (*this & 0x1C) != 0x14 && (*this & 0x1E) != 0x18 )
  {
LABEL_11:
    if ( ((v4 >> 1) & 0xF) == 9 )
    {
LABEL_5:
      m_pTable = this->m_pTable;
      goto LABEL_6;
    }
    m_pTable = 0;
  }
LABEL_6:
  Member_Internal = CKeyValues3Table::FindMember_Internal(m_pTable, m_nHashCode, pMemberName);
  if ( Member_Internal != -1 )
  {
    CKeyValues3Table::Remove(m_pTable, Member_Internal);
    return 1;
  }
  return 0;
}


// KeyValues3::RemoveMember  (line 1620, @0x0000000003131960, libserver.so)  // inlines: GetTableRaw, GetType
// calls: CKeyValues3Table::Remove
// callers: CLoadKV3FromDynData::FreeAllTempKV3
bool __fastcall KeyValues3::RemoveMember(KeyValues3 *const this, KeyValues3 *pMember)
{
  CKeyValues3Table *m_pTable; // rdx

  if ( (*this & 0x1E) != 0x12 )
    return 0;
  m_pTable = 0;
  if ( ((*this >> 1) & 0xF) == 9 )
    m_pTable = this->m_pTable;
  return CKeyValues3Table::Remove(m_pTable, pMember);
}


// KeyValues3::HasFlag  (line 1632, @0x000000000312f670, libserver.so)
// callers: SaveKV3Text_R
bool __fastcall KeyValues3::HasFlag(const KeyValues3 *const this, KeyValues3Flag_t nFlag)
{
  return (nFlag & (*this >> 5)) != 0;
}


// KeyValues3::HasAnyFlags  (line 1640, @0x000000000312f690, libserver.so)
bool __fastcall KeyValues3::HasAnyFlags(const KeyValues3 *const this)
{
  return (*this & 0x1FFFE0) != 0;
}


// KeyValues3::GetAllFlags  (line 1648, @0x000000000312f6a0, libserver.so)
// callers: SaveKV3Text_R, PutTypeAndFlags
KeyValues3Flag_t __fastcall KeyValues3::GetAllFlags(const KeyValues3 *const this)
{
  return (*this >> 5);
}


// KeyValues3::SetFlag  (line 1656, @0x000000000312f6b0, libserver.so)
// callers: CLoadKV3FromText::ReadLiteralValue, CLoadKV3FromText::ReadValue
void __fastcall KeyValues3::SetFlag(KeyValues3 *const this, KeyValues3Flag_t nFlag, bool bSet)
{
  int v3; // esi

  if ( bSet )
    v3 = (*this >> 5) | nFlag;
  else
    v3 = (*this >> 5) & ~nFlag;
  *this = (32 * v3) | *this & 0xFFE0001F;
}


// KeyValues3::SetAllFlags  (line 1671, @0x000000000312f6f0, libserver.so)
// callers: ReadTypeAndFlags
void __fastcall KeyValues3::SetAllFlags(KeyValues3 *const this, KeyValues3Flag_t nFlags)
{
  *this = (32 * nFlags) | *this & 0xFFE0001F;
}


// KeyValues3::IsIdenticalTo  (line 1679, @0x00000000031303b0, libserver.so)  // inlines: GetArrayElement, GetStringRaw, GetTableRaw, GetType, V_memcmp, _V_strcmp
// calls: strcmp, CKeyValues3Table::IsIdenticalTo, KeyValues3::GetArrayElementCount, KeyValues3::GetArrayElement, KeyValues3::GetBinaryBlobSize, KeyValues3::GetBinaryBlobBase, memcmp
// callers: CKeyValues3Table::IsIdenticalTo, CKeyValues3Context::IsIdenticalTo, KeyValues3::EqualsValueFromString
// globals: jpt_3130485
bool __fastcall KeyValues3::IsIdenticalTo(
        const KeyValues3 *const this,
        const KeyValues3 *pOther,
        bool bAssertOnFailure)
{
  char v3; // cl
  unsigned __int8 v6; // r9
  char v7; // r11
  char v8; // r12
  unsigned __int8 v9; // r8
  char v10; // al
  char v11; // di
  KeyValues3::lambda *p_m_pAsCharPtr; // rsi
  const char *m_pAsCharPtr; // rdi
  const char *v15; // rdi
  const char *v16; // rsi
  int ArrayElementCount; // r14d
  int v18; // r12d
  KeyValues3 *ArrayElement; // r13
  KeyValues3 *v20; // rax
  int BinaryBlobSize; // r12d
  const uint8 *BinaryBlobBase; // rbx
  const uint8 *v23; // rax

  v3 = 6;
  v6 = *this;
  v7 = *this & 0x1C;
  v8 = *this & 0x1E;
  if ( v7 != 20 )
  {
    v3 = 7;
    if ( v8 != 24 )
      v3 = (v6 >> 1) & 0xF;
  }
  v9 = *pOther;
  v10 = 6;
  v11 = *pOther & 0x1E;
  if ( (*pOther & 0x1C) != 0x14 )
  {
    v10 = 7;
    if ( v11 != 24 )
      v10 = (v9 >> 1) & 0xF;
  }
  if ( v3 != v10 || ((*this ^ *pOther) & 0x1FFFE0) != 0 )
    return 0;
  if ( v11 == 20 )
  {
    p_m_pAsCharPtr = &pOther->m_pAsCharPtr;
    goto LABEL_16;
  }
  if ( v11 == 22 )
  {
LABEL_40:
    p_m_pAsCharPtr = pOther->m_pAsCharPtr;
LABEL_16:
    if ( v8 == 22 || v8 == 12 )
    {
      m_pAsCharPtr = this->m_pAsCharPtr;
    }
    else
    {
      m_pAsCharPtr = 0;
      if ( v8 == 20 )
        m_pAsCharPtr = &this->8;
    }
    return strcmp(m_pAsCharPtr, p_m_pAsCharPtr) == 0;
  }
  if ( v11 != 24 )
  {
    switch ( (v9 >> 1) & 0xF )
    {
      case 1:
        return 1;
      case 2:
        return this->m_bAsBool == pOther->m_bAsBool;
      case 3:
      case 4:
        return this->m_nAsInt64 == pOther->m_nAsInt64;
      case 5:
        return fabs(this->m_flAsDouble - pOther->m_flAsDouble) <= 0.0000001000000011686097;
      case 6:
        p_m_pAsCharPtr = 0;
        if ( v11 == 12 )
          goto LABEL_40;
        goto LABEL_16;
      case 7:
        goto LABEL_35;
      case 8:
        ArrayElementCount = KeyValues3::GetArrayElementCount(this);
        if ( ArrayElementCount != KeyValues3::GetArrayElementCount(pOther) )
          return 0;
        v18 = 0;
        if ( ArrayElementCount <= 0 )
          return 1;
        break;
      case 9:
        v15 = 0;
        v16 = pOther->m_pAsCharPtr;
        if ( v7 != 20 && v8 != 24 && ((v6 >> 1) & 0xF) == 9 )
          v15 = this->m_pAsCharPtr;
        return CKeyValues3Table::IsIdenticalTo(v15, v16, bAssertOnFailure);
      default:
        return 0;
    }
    while ( 1 )
    {
      ArrayElement = KeyValues3::GetArrayElement(this, v18);
      v20 = KeyValues3::GetArrayElement(pOther, v18);
      if ( !KeyValues3::IsIdenticalTo(ArrayElement, v20, bAssertOnFailure) )
        break;
      if ( ++v18 == ArrayElementCount )
        return 1;
    }
    return 0;
  }
LABEL_35:
  BinaryBlobSize = KeyValues3::GetBinaryBlobSize(this);
  if ( BinaryBlobSize != KeyValues3::GetBinaryBlobSize(pOther) )
    return 0;
  BinaryBlobBase = KeyValues3::GetBinaryBlobBase(pOther);
  v23 = KeyValues3::GetBinaryBlobBase(this);
  if ( BinaryBlobSize < 0 )
    __debugbreak();
  return memcmp(v23, BinaryBlobBase, BinaryBlobSize) == 0;
}


// KeyValues3::CopyFrom  (line 1774, @0x00000000031340a0, libserver.so)  // inlines: GetStringRaw, GetTableRaw, GetType, Internal_PrepareForType, SetToEmptyTable
// calls: KeyValues3::Internal_PrepareForInternalType, KeyValues3::SetString, KeyValues3::Internal_BinaryBlobBase, KeyValues3::Internal_BinaryBlobSize, KeyValues3::SetToBinaryBlob, KeyValues3::Internal_SetArrayCount, CKeyValues3Table::CopyFrom, KeyValues3::SetToZeroedBinaryBlob
// callers: CKeyValues3Table::CopyFrom, KeyValues3::EqualsValueFromString, KeyValues3::SetMemberToCopyOfValue, KeyValues3::CopyMatchingKeysFrom, KeyValues3::MoveFrom, KeyValues3::KeyValues3, KeyValues3::operator=, CKeyValues3Context::CopyFrom
// globals: jpt_313410B
void __fastcall KeyValues3::CopyFrom(KeyValues3 *const this, const KeyValues3 *pOther)
{
  unsigned __int8 v4; // al
  KeyValues3InternalType_t v5; // r12
  char v6; // al
  const char *m_pAsCharPtr; // rsi
  const uint8 *v8; // r12
  int v9; // eax
  KeyValues3::lambda *p_m_pAsCharPtr; // r13
  const char *v11; // rax
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 v14; // r12
  const KeyValues3 *v15; // rsi
  KeyValues3 *v16; // rdi
  unsigned __int8 v17; // al
  const char *v18; // rsi

  v4 = *pOther;
  if ( (*pOther & 0x1C) == 0x14 )
  {
    KeyValues3::Internal_PrepareForInternalType(this, 6);
    *this = *pOther & 0x1FFFE0 | *this & 0xFFE0001F;
LABEL_7:
    v6 = *pOther & 0x1E;
    if ( v6 == 22 || v6 == 12 )
    {
      m_pAsCharPtr = pOther->m_pAsCharPtr;
    }
    else
    {
      p_m_pAsCharPtr = &pOther->m_pAsCharPtr;
      m_pAsCharPtr = 0;
      if ( v6 == 20 )
        m_pAsCharPtr = p_m_pAsCharPtr;
    }
    KeyValues3::SetString(this, m_pAsCharPtr);
  }
  else if ( (v4 & 0x1E) == 0x18 )
  {
    KeyValues3::Internal_PrepareForInternalType(this, 7);
    *this = *pOther & 0x1FFFE0 | *this & 0xFFE0001F;
LABEL_11:
    v8 = KeyValues3::Internal_BinaryBlobBase(pOther);
    v9 = KeyValues3::Internal_BinaryBlobSize(pOther);
    if ( v9 != 0 )
      KeyValues3::SetToBinaryBlob(this, v8, v9);
    else
      KeyValues3::SetToZeroedBinaryBlob(this, 0);
  }
  else
  {
    v5 = (v4 >> 1) & 0xF;
    KeyValues3::Internal_PrepareForInternalType(this, v5);
    *this = *pOther & 0x1FFFE0 | *this & 0xFFE0001F;
    switch ( v5 )
    {
      case 2:
        this->m_bAsBool = pOther->m_bAsBool;
        break;
      case 3:
      case 4:
        this->m_nAsInt64 = pOther->m_nAsInt64;
        break;
      case 5:
        this->m_nAsInt64 = pOther->m_nAsInt64;
        break;
      case 6:
        goto LABEL_7;
      case 7:
        goto LABEL_11;
      case 8:
        v11 = pOther->m_pAsCharPtr;
        if ( v11 != 0 )
        {
          v12 = *v11;
          KeyValues3::Internal_SetArrayCount(this, *v11);
          if ( v12 > 0 )
          {
            v13 = 8LL * (v12 - 1) + 8;
            v14 = 0;
            do
            {
              v15 = *(pOther->m_nAsInt64 + v14 + 8);
              v16 = *(this->m_nAsInt64 + v14 + 8);
              v14 += 8;
              KeyValues3::CopyFrom(v16, v15);
            }
            while ( v14 != v13 );
          }
        }
        else
        {
          KeyValues3::Internal_SetArrayCount(this, 0);
        }
        break;
      case 9:
        KeyValues3::Internal_PrepareForInternalType(this, 9);
        v17 = *pOther;
        v18 = 0;
        if ( (*pOther & 0x1C) != 0x14 && (v17 & 0x1E) != 0x18 && ((v17 >> 1) & 0xF) == 9 )
          v18 = pOther->m_pAsCharPtr;
        CKeyValues3Table::CopyFrom(this->m_pTable, v18);
        break;
      default:
        return;
    }
  }
}


// KeyValues3::CopyMatchingKeysFrom  (line 1845, @0x00000000031343d0, libserver.so)  // inlines: FindMember, GetTableRaw, GetType, MemberData, MemberName, MemberNameHash
// calls: KeyValues3::FindMember, KeyValues3::CopyFrom
void __fastcall KeyValues3::CopyMatchingKeysFrom(KeyValues3 *const this, const KeyValues3 *pOther)
{
  unsigned __int8 v2; // al
  unsigned __int8 v4; // al
  const char *m_pAsCharPtr; // r12
  __int64 v6; // rbx
  KeyValues3 *Member; // rax

  v2 = *this;
  if ( (*this & 0x1C) != 0x14 && (v2 & 0x1E) != 0x18 && ((v2 >> 1) & 0xF) == 9 )
  {
    v4 = *pOther;
    if ( (*pOther & 0x1C) != 0x14 && (v4 & 0x1E) != 0x18 && ((v4 >> 1) & 0xF) == 9 )
    {
      m_pAsCharPtr = this->m_pAsCharPtr;
      if ( *m_pAsCharPtr > 0 )
      {
        v6 = 0;
        do
        {
          Member = KeyValues3::FindMember(pOther, *(*(m_pAsCharPtr + 8) + 8 * v6), *(*(m_pAsCharPtr + 1) + 4 * v6));
          if ( Member != 0 )
            KeyValues3::CopyFrom(*(*(m_pAsCharPtr + 19) + 8 * v6), Member);
          ++v6;
        }
        while ( v6 < *m_pAsCharPtr );
      }
    }
  }
}


// KeyValues3::MoveFrom  (line 1867, @0x0000000003134490, libserver.so)  // inlines: ClusterFromPointer, GetParentContext, Internal_PrepareForType, MigrateToParent, SetToNull
// calls: KeyValues3::CopyFrom, KeyValues3::Internal_PrepareForInternalType
// callers: CLoadKV3FromDynData::ResolveUnresolvedReferences
void __fastcall KeyValues3::MoveFrom(KeyValues3 *const this, KeyValues3 *pOther)
{
  __int64 v2; // rdx
  __int64 v5; // rax
  char v6; // cl
  char v7; // al
  int64 m_nAsInt64; // rax

  v2 = 0;
  if ( (*pOther & 1) == 0 && (pOther & 0xFFFFFFFFFFFFFC00LL) != 0 )
    v2 = *(pOther & 0xFFFFFFFFFFFFFC00LL);
  v5 = 0;
  if ( (*this & 1) == 0 && (this & 0xFFFFFFFFFFFFFC00LL) != 0 )
    v5 = *(this & 0xFFFFFFFFFFFFFC00LL);
  if ( v2 != v5 )
    goto LABEL_8;
  v6 = *pOther & 0x1E;
  if ( v6 != 18 )
  {
    switch ( v6 )
    {
      case 16:
        KeyValues3::Internal_PrepareForInternalType(this, 1);
        v7 = *this & 0xE1 | 0x10;
        break;
      case 14:
        KeyValues3::Internal_PrepareForInternalType(this, 1);
        v7 = *this & 0xE1 | 0xE;
        break;
      case 24:
        KeyValues3::Internal_PrepareForInternalType(this, 1);
        v7 = *this & 0xE1 | 0x18;
        break;
      default:
LABEL_8:
        KeyValues3::CopyFrom(this, pOther);
LABEL_9:
        KeyValues3::Internal_PrepareForInternalType(pOther, 1);
        return;
    }
    *this = v7;
    this->m_nAsInt64 = pOther->m_nAsInt64;
    pOther->m_nAsInt64 = 0;
    goto LABEL_9;
  }
  KeyValues3::Internal_PrepareForInternalType(this, 1);
  *this = *this & 0xE1 | 0x12;
  m_nAsInt64 = pOther->m_nAsInt64;
  this->m_nAsInt64 = m_nAsInt64;
  *(m_nAsInt64 + 264) = this;
  LOBYTE(m_nAsInt64) = *pOther;
  pOther->m_nAsInt64 = 0;
  *pOther = m_nAsInt64 & 0xE1 | 2;
}


// CKeyValues3Table::CKeyValues3Table  (line 1923, @0x0000000003130ed0, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, Purge, ~CUtlMemory, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorFixedGrowable
// calls: Plat_IsInDebugSessionRaw, CUtlMemory<CUtlStringToken, int>::Purge, _Unwind_Resume, CUtlMemory<KeyValues3*, int>::Purge, CUtlVectorBase<char const*, CUtlMemoryFixedGrowable<char const*, 8ul, int> >::~CUtlVectorBase, CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8ul, int> >::~CUtlVectorBase, CUtlMemory<char const*, int>::Purge
// callers: CKeyValues3Context::AllocTable
void __fastcall CKeyValues3Table::CKeyValues3Table(CKeyValues3Table *const this)
{
  CUtlStringToken *p_m_FixedMemory; // r12

  p_m_FixedMemory = &this->m_MemberNameLowerHash.m_Memory.m_FixedMemory;
  this->m_MemberNameLowerHash.m_Size = 0;
  this->m_MemberNameLowerHash.m_Memory.m_pMemory = 0;
  this->m_MemberNameLowerHash.m_Memory.m_nAllocationCount = 8;
  this->m_MemberNameLowerHash.m_Memory.m_nGrowSize = 0x80000000;
  if ( ((this + 24) & 3) != 0 && Plat_IsInDebugSessionRaw() != 0 )
    __debugbreak();
  this->m_MemberNameLowerHash.m_Memory.m_pMemory = p_m_FixedMemory;
  this->m_MemberName.m_Size = 0;
  this->m_MemberName.m_Memory.m_pMemory = 0;
  this->m_MemberName.m_Memory.m_nAllocationCount = 8;
  this->m_MemberName.m_Memory.m_nGrowSize = 0x80000000;
  if ( ((this + 80) & 7) != 0 && Plat_IsInDebugSessionRaw() != 0 )
    __debugbreak();
  this->m_MemberName.m_Memory.m_pMemory = &this->m_MemberName.m_Memory.m_FixedMemory;
  this->m_MemberData.m_Size = 0;
  this->m_MemberData.m_Memory.m_pMemory = 0;
  this->m_MemberData.m_Memory.m_nAllocationCount = 8;
  this->m_MemberData.m_Memory.m_nGrowSize = 0x80000000;
  if ( ((this - 88) & 7) != 0 && Plat_IsInDebugSessionRaw() != 0 )
    __debugbreak();
  this->m_MemberData.m_Memory.m_pMemory = &this->m_MemberData.m_Memory.m_FixedMemory;
  this->m_MemberFlags.m_Size = 0;
  this->m_MemberFlags.m_Memory.m_nAllocationCount = 8;
  this->m_MemberFlags.m_Memory.m_nGrowSize = 0x80000000;
  this->m_MemberFlags.m_Memory.m_pMemory = &this->m_MemberFlags.m_Memory.m_FixedMemory;
  this->m_pParent = 0;
}


// CKeyValues3Table::~CKeyValues3Table  (line 1931, @0x00000000031312b0, libserver.so)  // inlines: ConvertToExternalMemory, IsExternallyAllocated, Purge, Purge_FixedGrowable, RemoveAll, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CKeyValues3Context::FreeKV, CKeyValues3Context::FreeSharedString, CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8ul, int> >::RemoveAll, CUtlMemory<KeyValues3*, int>::Purge, CUtlMemory<char const*, int>::Purge, CUtlMemory<CUtlStringToken, int>::Purge, CUtlMemory<unsigned char, int>::Purge
// callers: CKeyValues3Context::FreeTable
void __fastcall CKeyValues3Table::~CKeyValues3Table(CKeyValues3Table *const this)
{
  int m_Size; // eax
  unsigned __int64 v3; // r12
  __int64 v4; // r13
  KeyValues3 *v5; // rsi
  unsigned __int64 v6; // r12
  const char *v7; // rsi
  uint32 m_nGrowSize; // edx
  unsigned __int8 *m_pMemory; // rsi
  uint32 v10; // eax
  uint32 v11; // edx
  KeyValues3 **v12; // rsi
  uint32 v13; // eax
  int m_nAllocationCount; // eax
  uint32 v15; // edx
  const char **v16; // rsi
  uint32 v17; // eax
  uint32 v18; // edx
  CUtlStringToken *v19; // rsi
  uint32 v20; // eax
  int v21; // eax

  m_Size = this->m_MemberData.m_Size;
  if ( m_Size > 0 )
  {
    v3 = 0;
    v4 = 8LL * (m_Size - 1) + 8;
    do
    {
      v5 = this->m_MemberData.m_Memory.m_pMemory[v3 / 8];
      v3 += 8LL;
      CKeyValues3Context::FreeKV(this->m_pParent, v5);
    }
    while ( v3 != v4 );
    v6 = 0;
    do
    {
      v7 = this->m_MemberName.m_Memory.m_pMemory[v6 / 8];
      v6 += 8LL;
      CKeyValues3Context::FreeSharedString(this->m_pParent, v7);
    }
    while ( v6 != v4 );
  }
  this->m_MemberFlags.m_Size = 0;
  if ( this->m_MemberFlags.m_Memory.m_nAllocationCount < 0 )
  {
    v10 = this->m_MemberFlags.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    m_nGrowSize = this->m_MemberFlags.m_Memory.m_nGrowSize;
    m_pMemory = this->m_MemberFlags.m_Memory.m_pMemory;
    v10 = m_nGrowSize & 0xC0000000;
    if ( &this->m_MemberFlags.m_Memory.m_FixedMemory != m_pMemory )
    {
      if ( m_pMemory != 0 && v10 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        m_nGrowSize = this->m_MemberFlags.m_Memory.m_nGrowSize;
      }
      this->m_MemberFlags.m_Memory.m_pMemory = &this->m_MemberFlags.m_Memory.m_FixedMemory;
      this->m_MemberFlags.m_Memory.m_nAllocationCount = 8;
      this->m_MemberFlags.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
      goto LABEL_12;
    }
  }
  if ( v10 == 0 )
    CUtlMemory<unsigned char,int>::Purge(&this->m_MemberFlags.m_Memory);
LABEL_12:
  this->m_MemberData.m_Size = 0;
  if ( this->m_MemberData.m_Memory.m_nAllocationCount < 0 )
  {
    v13 = this->m_MemberData.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    v11 = this->m_MemberData.m_Memory.m_nGrowSize;
    v12 = this->m_MemberData.m_Memory.m_pMemory;
    v13 = v11 & 0xC0000000;
    if ( &this->m_MemberData.m_Memory.m_FixedMemory != v12 )
    {
      if ( v12 != 0 && v13 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        v11 = this->m_MemberData.m_Memory.m_nGrowSize;
      }
      this->m_MemberData.m_Memory.m_pMemory = &this->m_MemberData.m_Memory.m_FixedMemory;
      this->m_MemberData.m_Memory.m_nAllocationCount = 8;
      this->m_MemberData.m_Memory.m_nGrowSize = v11 & 0x3FFFFFFF | 0x80000000;
LABEL_18:
      m_nAllocationCount = this->m_MemberName.m_Memory.m_nAllocationCount;
      this->m_MemberName.m_Size = 0;
      if ( m_nAllocationCount >= 0 )
        goto LABEL_19;
LABEL_34:
      v17 = this->m_MemberName.m_Memory.m_nGrowSize & 0xC0000000;
      goto LABEL_35;
    }
  }
  if ( v13 != 0 )
    goto LABEL_18;
  CUtlMemory<KeyValues3 *,int>::Purge(&this->m_MemberData.m_Memory);
  v21 = this->m_MemberName.m_Memory.m_nAllocationCount;
  this->m_MemberName.m_Size = 0;
  if ( v21 < 0 )
    goto LABEL_34;
LABEL_19:
  v15 = this->m_MemberName.m_Memory.m_nGrowSize;
  v16 = this->m_MemberName.m_Memory.m_pMemory;
  v17 = v15 & 0xC0000000;
  if ( &this->m_MemberName.m_Memory.m_FixedMemory != v16 )
  {
    if ( v16 != 0 && v17 == 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      v15 = this->m_MemberName.m_Memory.m_nGrowSize;
    }
    this->m_MemberName.m_Memory.m_pMemory = &this->m_MemberName.m_Memory.m_FixedMemory;
    this->m_MemberName.m_Memory.m_nAllocationCount = 8;
    this->m_MemberName.m_Memory.m_nGrowSize = v15 & 0x3FFFFFFF | 0x80000000;
LABEL_24:
    CUtlVectorBase<CUtlStringToken,CUtlMemoryFixedGrowable<CUtlStringToken,8ul,int>>::RemoveAll(&this->m_MemberNameLowerHash);
    if ( this->m_MemberNameLowerHash.m_Memory.m_nAllocationCount >= 0 )
      goto LABEL_25;
LABEL_37:
    v20 = this->m_MemberNameLowerHash.m_Memory.m_nGrowSize & 0xC0000000;
    goto LABEL_38;
  }
LABEL_35:
  if ( v17 != 0 )
    goto LABEL_24;
  CUtlMemory<char const*,int>::Purge(&this->m_MemberName.m_Memory);
  CUtlVectorBase<CUtlStringToken,CUtlMemoryFixedGrowable<CUtlStringToken,8ul,int>>::RemoveAll(&this->m_MemberNameLowerHash);
  if ( this->m_MemberNameLowerHash.m_Memory.m_nAllocationCount < 0 )
    goto LABEL_37;
LABEL_25:
  v18 = this->m_MemberNameLowerHash.m_Memory.m_nGrowSize;
  v19 = this->m_MemberNameLowerHash.m_Memory.m_pMemory;
  v20 = v18 & 0xC0000000;
  if ( &this->m_MemberNameLowerHash.m_Memory.m_FixedMemory != v19 )
  {
    if ( v19 != 0 && v20 == 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      v18 = this->m_MemberNameLowerHash.m_Memory.m_nGrowSize;
    }
    this->m_MemberNameLowerHash.m_Memory.m_pMemory = &this->m_MemberNameLowerHash.m_Memory.m_FixedMemory;
    this->m_MemberNameLowerHash.m_Memory.m_nAllocationCount = 8;
    this->m_MemberNameLowerHash.m_Memory.m_nGrowSize = v18 & 0x3FFFFFFF | 0x80000000;
    return;
  }
LABEL_38:
  if ( v20 == 0 )
    CUtlMemory<CUtlStringToken,int>::Purge(&this->m_MemberNameLowerHash.m_Memory);
}


// CKeyValues3Table::Init  (line 1951, @0x000000000312f710, libserver.so)
void __fastcall CKeyValues3Table::Init(CKeyValues3Table *const this, KeyValues3 *pParent)
{
  this->m_pParent = pParent;
}


// CKeyValues3Table::FindOrCreateMember_Internal  (line 1958, @0x0000000003133930, libserver.so)  // inlines: AddToTail, CopyConstruct<CUtlStringToken>, CopyConstruct<KeyValues3*>, CopyConstruct<char const*>, CopyConstruct<unsigned char>, Element, GrowMemory, operator[]
// calls: CKeyValues3Context::AllocSharedString, CKeyValues3Context::AllocKV, CUtlMemory<CUtlStringToken, int>::Grow, CUtlMemory<unsigned char, int>::Grow, CUtlMemory<KeyValues3*, int>::Grow, CUtlMemory<char const*, int>::Grow
// callers: KeyValues3::FindOrCreateMember, KeyValues3::Internal_FindOrCreateMemberAimedAtExternalName
int __fastcall CKeyValues3Table::FindOrCreateMember_Internal(
        CKeyValues3Table *const this,
        KeyValues3LowercaseHash_t memberName,
        const char *pReferenceName,
        bool bUseExternalStorageForName)
{
  int m_Size; // ebx
  CUtlStringToken *m_pMemory; // r9
  int v9; // r8d
  int v10; // eax
  KeyValues3LowercaseHash_t *v11; // rax
  const char *v12; // rax
  __int64 v13; // r12
  int v14; // edx
  const char **v15; // rdx
  char v16; // r14
  KeyValues3 *v17; // rax
  __int64 v18; // r12
  int v19; // edx
  KeyValues3 **v20; // rdx
  __int64 v21; // r12
  int v22; // eax
  bool v23; // zf
  unsigned __int8 *v24; // r12
  __int64 v26; // r12
  int v27; // eax
  const char **v28; // rax
  bool v29; // [rsp+8h] [rbp-28h]
  KeyValues3 *v30; // [rsp+8h] [rbp-28h]
  const char *v31; // [rsp+8h] [rbp-28h]

  m_Size = this->m_MemberNameLowerHash.m_Size;
  if ( this->m_MemberNameLowerHash.m_Size <= 0 )
  {
LABEL_6:
    v10 = this->m_MemberNameLowerHash.m_Size;
    if ( m_Size == this->m_MemberNameLowerHash.m_Memory.m_nAllocationCount )
    {
      v29 = bUseExternalStorageForName;
      CUtlMemory<CUtlStringToken,int>::Grow(&this->m_MemberNameLowerHash.m_Memory, 1);
      v10 = this->m_MemberNameLowerHash.m_Size;
      bUseExternalStorageForName = v29;
    }
    this->m_MemberNameLowerHash.m_Size = v10 + 1;
    v11 = &this->m_MemberNameLowerHash.m_Memory.m_pMemory[m_Size];
    if ( v11 != 0 )
      v11->m_nHashCode = memberName.m_nHashCode;
    if ( bUseExternalStorageForName )
    {
      v26 = this->m_MemberName.m_Size;
      v27 = this->m_MemberName.m_Size;
      if ( v26 == this->m_MemberName.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<char const*,int>::Grow(&this->m_MemberName.m_Memory, 1);
        v27 = this->m_MemberName.m_Size;
      }
      this->m_MemberName.m_Size = v27 + 1;
      v28 = &this->m_MemberName.m_Memory.m_pMemory[v26];
      if ( v28 != 0 )
        *v28 = pReferenceName;
      v16 = 1;
    }
    else
    {
      v12 = CKeyValues3Context::AllocSharedString(this->m_pParent, pReferenceName, memberName);
      v13 = this->m_MemberName.m_Size;
      v14 = this->m_MemberName.m_Size;
      if ( v13 == this->m_MemberName.m_Memory.m_nAllocationCount )
      {
        v31 = v12;
        CUtlMemory<char const*,int>::Grow(&this->m_MemberName.m_Memory, 1);
        v14 = this->m_MemberName.m_Size;
        v12 = v31;
      }
      this->m_MemberName.m_Size = v14 + 1;
      v15 = &this->m_MemberName.m_Memory.m_pMemory[v13];
      if ( v15 != 0 )
        *v15 = v12;
      v16 = 0;
    }
    v17 = CKeyValues3Context::AllocKV(this->m_pParent);
    v18 = this->m_MemberData.m_Size;
    v19 = this->m_MemberData.m_Size;
    if ( v18 == this->m_MemberData.m_Memory.m_nAllocationCount )
    {
      v30 = v17;
      CUtlMemory<KeyValues3 *,int>::Grow(&this->m_MemberData.m_Memory, 1);
      v19 = this->m_MemberData.m_Size;
      v17 = v30;
    }
    this->m_MemberData.m_Size = v19 + 1;
    v20 = &this->m_MemberData.m_Memory.m_pMemory[v18];
    if ( v20 != 0 )
      *v20 = v17;
    v21 = this->m_MemberFlags.m_Size;
    v22 = this->m_MemberFlags.m_Size;
    if ( v21 == this->m_MemberFlags.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<unsigned char,int>::Grow(&this->m_MemberFlags.m_Memory, 1);
      v22 = this->m_MemberFlags.m_Size;
    }
    v23 = &this->m_MemberFlags.m_Memory.m_pMemory[v21] == 0;
    v24 = &this->m_MemberFlags.m_Memory.m_pMemory[v21];
    this->m_MemberFlags.m_Size = v22 + 1;
    if ( !v23 )
      *v24 = v16;
    return m_Size;
  }
  m_pMemory = this->m_MemberNameLowerHash.m_Memory.m_pMemory;
  if ( memberName.m_nHashCode != m_pMemory->m_nHashCode )
  {
    v9 = 0;
    while ( ++v9 != m_Size )
    {
      ++m_pMemory;
      if ( memberName.m_nHashCode == m_pMemory->m_nHashCode )
        return v9;
    }
    goto LABEL_6;
  }
  return 0;
}


// CKeyValues3Table::FindMember_Internal  (line 1998, @0x000000000312f720, libserver.so)
// callers: KeyValues3::Internal_FindMember, CKeyValues3Table::IsIdenticalTo, KeyValues3::RemoveMember
int __fastcall CKeyValues3Table::FindMember_Internal(
        const CKeyValues3Table *const this,
        KeyValues3LowercaseHash_t memberName,
        const char *pReferenceName)
{
  int result; // eax
  CUtlStringToken *m_pMemory; // rdx

  result = -1;
  if ( this->m_MemberNameLowerHash.m_Size > 0 )
  {
    m_pMemory = this->m_MemberNameLowerHash.m_Memory.m_pMemory;
    result = 0;
    if ( memberName.m_nHashCode != m_pMemory->m_nHashCode )
    {
      while ( ++result != this->m_MemberNameLowerHash.m_Size )
      {
        ++m_pMemory;
        if ( memberName.m_nHashCode == m_pMemory->m_nHashCode )
          return result;
      }
      return -1;
    }
  }
  return result;
}


// CKeyValues3Table::MemberData  (line 2027, @0x0000000003130260, libserver.so)  // inlines: operator[]
KeyValues3 *__fastcall CKeyValues3Table::MemberData(CKeyValues3Table *const this, int nIndex)
{
  return this->m_MemberData.m_Memory.m_pMemory[nIndex];
}


// CKeyValues3Table::MemberData  (line 2042, @0x0000000003130280, libserver.so)  // inlines: operator[]
const KeyValues3 *__fastcall CKeyValues3Table::MemberData(const CKeyValues3Table *const this, int nIndex)
{
  return this->m_MemberData.m_Memory.m_pMemory[nIndex];
}


// CKeyValues3Table::MemberName  (line 2057, @0x00000000031302a0, libserver.so)  // inlines: operator[]
const char *__fastcall CKeyValues3Table::MemberName(const CKeyValues3Table *const this, int nIndex)
{
  return this->m_MemberName.m_Memory.m_pMemory[nIndex];
}


// CKeyValues3Table::MemberNameHash  (line 2072, @0x00000000031302c0, libserver.so)  // inlines: operator[]
KeyValues3LowercaseHash_t __fastcall CKeyValues3Table::MemberNameHash(const CKeyValues3Table *const this, int nIndex)
{
  return this->m_MemberNameLowerHash.m_Memory.m_pMemory[nIndex].m_nHashCode;
}


// CKeyValues3Table::CopyFrom  (line 2087, @0x0000000003133fa0, libserver.so)  // inlines: operator[]
// calls: CKeyValues3Table::Clear, CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8ul, int> >::SetCount, CUtlVectorBase<KeyValues3*, CUtlMemoryFixedGrowable<KeyValues3*, 8ul, int> >::SetCount, CUtlVectorBase<char const*, CUtlMemoryFixedGrowable<char const*, 8ul, int> >::SetCount, CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 8ul, int> >::SetCount, CKeyValues3Context::AllocSharedString, CKeyValues3Context::AllocKV, KeyValues3::CopyFrom
// callers: KeyValues3::CopyFrom
void __fastcall CKeyValues3Table::CopyFrom(CKeyValues3Table *const this, const CKeyValues3Table *pOther)
{
  __int64 v4; // rbx
  int m_Size; // r14d
  const char *v6; // rsi
  KeyValues3LowercaseHash_t v7; // edx
  const char **v8; // r15
  KeyValues3 **v9; // r14
  const KeyValues3 *v10; // rsi
  KeyValues3 *v11; // rdi
  int v12; // [rsp+Ch] [rbp-34h]

  v4 = 0;
  CKeyValues3Table::Clear(this);
  m_Size = pOther->m_MemberNameLowerHash.m_Size;
  v12 = pOther->m_MemberNameLowerHash.m_Size;
  CUtlVectorBase<CUtlStringToken,CUtlMemoryFixedGrowable<CUtlStringToken,8ul,int>>::SetCount(
    &this->m_MemberNameLowerHash,
    pOther->m_MemberNameLowerHash.m_Size);
  CUtlVectorBase<KeyValues3 *,CUtlMemoryFixedGrowable<KeyValues3 *,8ul,int>>::SetCount(&this->m_MemberData, m_Size);
  CUtlVectorBase<char const*,CUtlMemoryFixedGrowable<char const*,8ul,int>>::SetCount(&this->m_MemberName, m_Size);
  CUtlVectorBase<unsigned char,CUtlMemoryFixedGrowable<unsigned char,8ul,int>>::SetCount(&this->m_MemberFlags, m_Size);
  if ( m_Size > 0 )
  {
    do
    {
      v6 = pOther->m_MemberName.m_Memory.m_pMemory[v4];
      v7.m_nHashCode = pOther->m_MemberNameLowerHash.m_Memory.m_pMemory[v4].m_nHashCode;
      this->m_MemberNameLowerHash.m_Memory.m_pMemory[v4] = v7;
      this->m_MemberFlags.m_Memory.m_pMemory[v4] = 0;
      v8 = &this->m_MemberName.m_Memory.m_pMemory[v4];
      *v8 = CKeyValues3Context::AllocSharedString(this->m_pParent, v6, v7);
      v9 = &this->m_MemberData.m_Memory.m_pMemory[v4];
      *v9 = CKeyValues3Context::AllocKV(this->m_pParent);
      v10 = pOther->m_MemberData.m_Memory.m_pMemory[v4];
      v11 = this->m_MemberData.m_Memory.m_pMemory[v4++];
      KeyValues3::CopyFrom(v11, v10);
    }
    while ( v12 > v4 );
  }
}


// CKeyValues3Table::Clear  (line 2118, @0x0000000003131620, libserver.so)  // inlines: RemoveAll
// calls: CKeyValues3Context::FreeKV, CUtlVectorBase<CUtlStringToken, CUtlMemoryFixedGrowable<CUtlStringToken, 8ul, int> >::RemoveAll
// callers: KeyValues3::Internal_PrepareForInternalType, CKeyValues3Table::CopyFrom
void __fastcall CKeyValues3Table::Clear(CKeyValues3Table *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // r13
  KeyValues3 *v4; // rsi

  if ( this->m_MemberNameLowerHash.m_Size > 0 )
  {
    v2 = 0;
    v3 = 8LL * (this->m_MemberNameLowerHash.m_Size - 1) + 8;
    do
    {
      v4 = this->m_MemberData.m_Memory.m_pMemory[v2 / 8];
      v2 += 8LL;
      CKeyValues3Context::FreeKV(this->m_pParent, v4);
    }
    while ( v2 != v3 );
  }
  CUtlVectorBase<CUtlStringToken,CUtlMemoryFixedGrowable<CUtlStringToken,8ul,int>>::RemoveAll(&this->m_MemberNameLowerHash);
  this->m_MemberData.m_Size = 0;
  this->m_MemberName.m_Size = 0;
  this->m_MemberFlags.m_Size = 0;
}


// CKeyValues3Table::Remove  (line 2139, @0x0000000003131910, libserver.so)
// calls: CKeyValues3Table::Remove
// callers: KeyValues3::RemoveMember
bool __fastcall CKeyValues3Table::Remove(CKeyValues3Table *const this, KeyValues3 *pMemberData)
{
  KeyValues3 **m_pMemory; // rdx
  KeyValues3 **v3; // rdx
  int v4; // eax

  if ( this->m_MemberNameLowerHash.m_Size <= 0 )
    return 0;
  m_pMemory = this->m_MemberData.m_Memory.m_pMemory;
  if ( *m_pMemory != pMemberData )
  {
    v3 = m_pMemory + 1;
    v4 = 0;
    while ( ++v4 != this->m_MemberNameLowerHash.m_Size )
    {
      if ( *v3++ == pMemberData )
        goto LABEL_8;
    }
    return 0;
  }
  v4 = 0;
LABEL_8:
  CKeyValues3Table::Remove(this, v4);
  return 1;
}


// CKeyValues3Table::MigrateToParent  (line 2161, @0x00000000031302d0, libserver.so)
void __fastcall CKeyValues3Table::MigrateToParent(CKeyValues3Table *const this, KeyValues3 *pParent)
{
  this->m_pParent = pParent;
}


// CKeyValues3Table::Remove  (line 2170, @0x00000000031316a0, libserver.so)  // inlines: Element, Remove, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: CKeyValues3Context::FreeKV, memmove
// callers: KeyValues3::RemoveMember, CKeyValues3Table::Remove
void __fastcall CKeyValues3Table::Remove(CKeyValues3Table *const this, int nIndex)
{
  __int64 v2; // r13
  __int64 v3; // r14
  int m_Size; // eax
  int v7; // eax
  int v8; // eax
  CUtlStringToken *v9; // rsi
  int v10; // eax

  v2 = nIndex;
  v3 = nIndex;
  CKeyValues3Context::FreeKV(this->m_pParent, this->m_MemberData.m_Memory.m_pMemory[v3]);
  m_Size = this->m_MemberData.m_Size;
  if ( m_Size - nIndex - 1 > 0 )
  {
    memmove(
      &this->m_MemberData.m_Memory.m_pMemory[v3],
      &this->m_MemberData.m_Memory.m_pMemory[v3 + 1],
      8LL * (this->m_MemberData.m_Size - nIndex - 1));
    m_Size = this->m_MemberData.m_Size;
  }
  this->m_MemberData.m_Size = m_Size - 1;
  v7 = this->m_MemberName.m_Size;
  if ( v7 - nIndex - 1 > 0 )
  {
    memmove(
      &this->m_MemberName.m_Memory.m_pMemory[v3],
      &this->m_MemberName.m_Memory.m_pMemory[v3 + 1],
      8LL * (this->m_MemberName.m_Size - nIndex - 1));
    v7 = this->m_MemberName.m_Size;
  }
  this->m_MemberName.m_Size = v7 - 1;
  v8 = this->m_MemberNameLowerHash.m_Size;
  if ( this->m_MemberNameLowerHash.m_Size - nIndex - 1 > 0 )
  {
    v9 = &this->m_MemberNameLowerHash.m_Memory.m_pMemory[nIndex + 1];
    memmove(&v9[-1], v9, 4LL * (this->m_MemberNameLowerHash.m_Size - nIndex - 1));
    v8 = this->m_MemberNameLowerHash.m_Size;
  }
  this->m_MemberNameLowerHash.m_Size = v8 - 1;
  v10 = this->m_MemberFlags.m_Size;
  if ( v10 - nIndex - 1 > 0 )
  {
    memmove(
      &this->m_MemberFlags.m_Memory.m_pMemory[v2],
      &this->m_MemberFlags.m_Memory.m_pMemory[nIndex + 1],
      this->m_MemberFlags.m_Size - nIndex - 1);
    v10 = this->m_MemberFlags.m_Size;
  }
  this->m_MemberFlags.m_Size = v10 - 1;
}


// CKeyValues3Table::IsIdenticalTo  (line 2190, @0x00000000031302e0, libserver.so)  // inlines: operator[]
// calls: KeyValues3::IsIdenticalTo, CKeyValues3Table::FindMember_Internal
// callers: KeyValues3::IsIdenticalTo
bool __fastcall CKeyValues3Table::IsIdenticalTo(
        const CKeyValues3Table *const this,
        const CKeyValues3Table *pOther,
        bool bAssertOnFailure)
{
  bool result; // al
  int m_Size; // ecx
  unsigned __int64 v7; // rbx
  __int64 v9; // r15
  int Member_Internal; // eax

  result = 0;
  m_Size = this->m_MemberNameLowerHash.m_Size;
  if ( pOther != 0 && m_Size == pOther->m_MemberNameLowerHash.m_Size )
  {
    if ( m_Size <= 0 )
    {
      return 1;
    }
    else
    {
      v7 = 0;
      v9 = 4LL * (m_Size - 1) + 4;
      while ( 1 )
      {
        Member_Internal = CKeyValues3Table::FindMember_Internal(
                            pOther,
                            this->m_MemberNameLowerHash.m_Memory.m_pMemory[v7 / 4],
                            this->m_MemberName.m_Memory.m_pMemory[v7 / 4]);
        if ( Member_Internal == -1
          || !KeyValues3::IsIdenticalTo(
                this->m_MemberData.m_Memory.m_pMemory[v7 / 4],
                pOther->m_MemberData.m_Memory.m_pMemory[Member_Internal],
                bAssertOnFailure) )
        {
          break;
        }
        v7 += 4LL;
        if ( v7 == v9 )
          return 1;
      }
      return 0;
    }
  }
  return result;
}


// KeyValues3::Internal_ClearDataWithoutFreeing  (line 2229, @0x0000000003130660, libserver.so)
void __fastcall KeyValues3::Internal_ClearDataWithoutFreeing(KeyValues3 *const this)
{
  this->m_nAsInt64 = 0;
}


// KeyValues3::Internal_PrepareForInternalType  (line 2237, @0x0000000003131c40, libserver.so)  // inlines: Internal_ClearDataWithoutFreeing
// calls: KeyValues3::Internal_FreeAllocation, KeyValues3::Internal_NewAllocation, CKeyValues3Table::Clear
// callers: KeyValues3::SetToEmptyTable, KeyValues3::SetToBinaryBlob, KeyValues3::SetToZeroedBinaryBlob, KeyValues3::SetToEmptyArray, KeyValues3::SetInt, KeyValues3::SetBool, KeyValues3::SetFloat, KeyValues3::SetUint64, KeyValues3::SetInt64, KeyValues3::SetIntFromString, KeyValues3::SetDouble, KeyValues3::SetToNull (36 total)
void __fastcall KeyValues3::Internal_PrepareForInternalType(KeyValues3 *const this, KeyValues3InternalType_t newType)
{
  char v4; // al

  if ( ((*this >> 1) & 0xF) == newType )
  {
    if ( (*this & 0x1E) == 0x12 )
      CKeyValues3Table::Clear(this->m_pTable);
    else
      KeyValues3::Internal_FreeAllocation(this);
  }
  else
  {
    KeyValues3::Internal_FreeAllocation(this);
    v4 = *this;
    this->m_nAsInt64 = 0;
    *this = (2 * (newType & 0xF)) | v4 & 0xE1;
    KeyValues3::Internal_NewAllocation(this);
  }
}


// KeyValues3::Internal_FreeAllocation  (line 2263, @0x0000000003131a20, libserver.so)  // inlines: FreeBlobExternal, FreeString
// calls: CKeyValues3Context::FreeArray, CKeyValues3Context::FreeTable
// callers: CKeyValues3Context::FreeKV_Internal, CKeyValues3Context::FreeKV, KeyValues3::~KeyValues3, CKeyValues3Cluster::CKeyValues3Cluster, CKeyValues3Cluster::Free, KeyValues3::Internal_PrepareForInternalType, CKeyValues3Context::~CKeyValues3Context, CKeyValues3Context::CKeyValues3Context, KeyValues3::EqualsValueFromString
// globals: jpt_3131A4A
void __fastcall KeyValues3::Internal_FreeAllocation(KeyValues3 *const this)
{
  switch ( (*this >> 1) & 0xF )
  {
    case 6:
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_nAsInt64);
      this->m_nAsInt64 = 0;
      break;
    case 7:
    case 0xC:
      if ( this->m_nAsInt64 != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      goto LABEL_4;
    case 8:
      CKeyValues3Context::FreeArray(this, this->m_pArray);
      this->m_nAsInt64 = 0;
      break;
    case 9:
      CKeyValues3Context::FreeTable(this, this->m_pTable);
LABEL_4:
      this->m_nAsInt64 = 0;
      break;
    default:
      return;
  }
}


// KeyValues3::Internal_NewAllocation  (line 2304, @0x00000000031310a0, libserver.so)
// calls: CKeyValues3Context::AllocTable
// callers: KeyValues3::Internal_PrepareForInternalType
void __fastcall KeyValues3::Internal_NewAllocation(KeyValues3 *const this)
{
  if ( ((*this >> 1) & 0xF) == 9 )
    this->m_nAsInt64 = CKeyValues3Context::AllocTable(this);
}


// KeyValues3::KeyValues3  (line 2320, @0x0000000003130670, libserver.so)  // inlines: Internal_ClearDataWithoutFreeing
// callers: CCustomNetTableManager::GetCustomStringTableDefs, CRenderMesh::TransferPostLoadFn, CKV3TransferValHelper<Quaternion [3]>::LoadValue<Quaternion [3]>, CKV3TransferValHelper<Vector [3]>::LoadValue<Vector [3]>, CRenderBufferBinding::KV3TransferLoad_CRenderBufferBinding, SkeletonBoneBounds_t::KV3TransferLoad_SkeletonBoneBounds_t, RenderSkeletonBone_t::KV3TransferLoad_RenderSkeletonBone_t, CMaterialDrawDescriptor::KV3TransferLoad_CMaterialDrawDescriptor, CHitBox::KV3TransferLoad_CHitBox, CKV3TransferLoadContext::LoadValueFromMember<Vector>, CKV3TransferLoadContext::LoadValueFromMember<CUtlString>, CKV3TransferValHelper<float [3]>::LoadValue<float [3]> (34 total)
void __fastcall KeyValues3::KeyValues3(KeyValues3 *const this)
{
  char v1; // al

  v1 = *this;
  this->m_nAsInt64 = 0;
  *this = v1 & 0xE0 | 3;
  *this &= 0xFFE0001F;
}


// KeyValues3::KeyValues3  (line 2331, @0x00000000031345d0, libserver.so)  // inlines: Internal_ClearDataWithoutFreeing
// calls: KeyValues3::CopyFrom
void __fastcall KeyValues3::KeyValues3(KeyValues3 *const this, const KeyValues3 *const rhs)
{
  char v2; // al

  v2 = *this;
  this->m_nAsInt64 = 0;
  *this = v2 & 0xE0 | 3;
  *this &= 0xFFE0001F;
  KeyValues3::CopyFrom(this, rhs);
}


// KeyValues3::KeyValues3  (line 2343, @0x0000000003130690, libserver.so)  // inlines: Internal_ClearDataWithoutFreeing
void __fastcall KeyValues3::KeyValues3(KeyValues3 *const this, CKeyValues3Context *pContext)
{
  char v2; // al

  v2 = *this;
  this->m_nAsInt64 = 0;
  *this = v2 & 0xE0 | 2;
  *this &= 0xFFE0001F;
}


// KeyValues3::~KeyValues3  (line 2357, @0x0000000003131ad0, libserver.so)
// calls: KeyValues3::Internal_FreeAllocation
// callers: CCustomNetTableManager::GetCustomStringTableDefs, CRenderMesh::TransferPostLoadFn, CKV3TransferValHelper<Quaternion [3]>::LoadValue<Quaternion [3]>, CKV3TransferValHelper<Vector [3]>::LoadValue<Vector [3]>, CRenderBufferBinding::KV3TransferLoad_CRenderBufferBinding, SkeletonBoneBounds_t::KV3TransferLoad_SkeletonBoneBounds_t, RenderSkeletonBone_t::KV3TransferLoad_RenderSkeletonBone_t, CMaterialDrawDescriptor::KV3TransferLoad_CMaterialDrawDescriptor, CHitBox::KV3TransferLoad_CHitBox, CKV3TransferLoadContext::LoadValueFromMember<Vector>, CKV3TransferLoadContext::LoadValueFromMember<CUtlString>, CKV3TransferValHelper<float [3]>::LoadValue<float [3]> (34 total)
void __fastcall KeyValues3::~KeyValues3(KeyValues3 *const this)
{
  KeyValues3::Internal_FreeAllocation(this);
}


// KeyValues3::operator=  (line 2369, @0x0000000003134600, libserver.so)
// calls: KeyValues3::CopyFrom
KeyValues3 *__fastcall KeyValues3::operator=(KeyValues3 *const this, const KeyValues3 *const rhs)
{
  KeyValues3::CopyFrom(this, rhs);
  return this;
}


// KeyValues3::GetParentContext  (line 2378, @0x00000000031306b0, libserver.so)  // inlines: ClusterFromPointer
CKeyValues3Context *__fastcall KeyValues3::GetParentContext(const KeyValues3 *const this)
{
  CKeyValues3Context *result; // rax
  CKeyValues3Context **v2; // rdi

  result = 0;
  if ( (*this & 1) == 0 )
  {
    v2 = (this & 0xFFFFFFFFFFFFFC00LL);
    if ( v2 != 0 )
      return *v2;
  }
  return result;
}


// KeyValues3::GetType  (line 2387, @0x00000000031306d0, libserver.so)
// callers: CCustomNetTableManager::GetCustomStringTableDefs, SaveKV3Text_R, SaveKV3Binary_R, GatherSymbols_R, ConvertV1MeshFlags, CMaterialDrawDescriptor::KV3TransferLoad_CMaterialDrawDescriptor, CKV3TransferValHelper<CUtlVector<CBaseConstraint*, CUtlMemory<CBaseConstraint*, int> > >::LoadValue<CUtlVector<CBaseConstraint*> >, CKV3TransferValHelper<CUtlVector<CPhysSurfaceProperties*, CUtlMemory<CPhysSurfaceProperties*, int> > >::LoadValue<CUtlVector<CPhysSurfaceProperties*> >, CVPhysXSurfacePropertiesList::KV3TransferLoad_CVPhysXSurfacePropertiesList
KeyValues3Type_t __fastcall KeyValues3::GetType(const KeyValues3 *const this)
{
  unsigned __int8 v1; // dl
  KeyValues3Type_t result; // al

  v1 = *this;
  result = KeyValues3Type_t::KEYVALUES3_TYPE_STRING;
  if ( (*this & 0x1C) != 0x14 )
  {
    result = KeyValues3Type_t::KEYVALUES3_TYPE_BINARY_BLOB;
    if ( (v1 & 0x1E) != 0x18 )
      return (v1 >> 1) & 0xF;
  }
  return result;
}


// CKeyValues3Context::CKeyValues3Context  (line 2410, @0x00000000031333f0, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CNonThreadsafeTree, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlRBTree, CUtlSymbolTableLargeBase, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowable, Construct<KeyValues3ContextImpl_t>, Init, Internal_PrepareForType, KeyValues3ContextImpl_t, Purge, ResetDbgInfo, SetToNull, V_memset, memset, ~CKeyValues3Cluster, ~CUtlMemory, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorFixedGrowable, ~KeyValues3
// calls: CKeyValues3Cluster::CKeyValues3Cluster, CMemAllocSystemInitialize, memset, CKeyValues3Cluster::Allocate, KeyValues3::Internal_PrepareForInternalType, Plat_IsInDebugSessionRaw, CUtlMemory<CKeyValues3Cluster*, int>::Purge, KeyValues3::Internal_FreeAllocation, CUtlVectorBase<CKeyValues3Cluster*, CUtlMemoryFixedGrowable<CKeyValues3Cluster*, 8ul, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CKeyValues3Context::CKeyValues3Context(CKeyValues3Context *const this)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  KeyValues3 *v4; // rax

  if ( this != 0 )
  {
    CKeyValues3Cluster::CKeyValues3Cluster(this);
    *&this->m_Impl[1024] = 0;
    *&this->m_Impl[1032] = 0;
    *&this->m_Impl[1040] = 8;
    *&this->m_Impl[1044] = 0x80000000;
    if ( ((this + 24) & 7) != 0 && Plat_IsInDebugSessionRaw() != 0 )
      __debugbreak();
    *&this->m_Impl[1032] = &this->m_Impl[1048];
    *&this->m_Impl[1128] = 0;
    *&this->m_Impl[1136] = 16;
    *&this->m_Impl[1140] = 0;
    CMemAllocSystemInitialize(v2);
    v3 = (**g_pMemAlloc)(g_pMemAlloc, 40LL * *&this->m_Impl[1136]);
    *&this->m_Impl[1128] = v3;
    *&this->m_Impl[1144] = -1;
    *&this->m_Impl[1152] = 0;
    *&this->m_Impl[1160] = -1;
    *&this->m_Impl[1168] = -1;
    *&this->m_Impl[1176] = v3;
    *&this->m_Impl[1184] = 0;
    *&this->m_Impl[1192] = 0;
    *&this->m_Impl[1200] = 0;
    *&this->m_Impl[1204] = 8;
    *&this->m_Impl[1208] = 0;
    *&this->m_Impl[1216] = 0;
    *&this->m_Impl[1224] = 0;
    *&this->m_Impl[1228] = 0;
    *&this->m_Impl[1232] = 0;
  }
  memset(this, 0, 0x400u);
  *this->m_Impl = this;
  *&this->m_Impl[1112] = this;
  v4 = CKeyValues3Cluster::Allocate(this);
  KeyValues3::Internal_PrepareForInternalType(v4, 1);
  *&this->m_Impl[1232] = 0;
}


// CKeyValues3Context::~CKeyValues3Context  (line 2430, @0x00000000031331b0, libserver.so)  // inlines: ConvertToExternalMemory, Destruct<KeyValues3ContextImpl_t>, Internal_PrepareForType, IsExternallyAllocated, Purge, Purge_FixedGrowable, RemoveAll, SetToNull, ~CKeyValues3Cluster, ~CNonThreadsafeTree, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlRBTree, ~CUtlSymbolTableLargeBase, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable, ~KeyValues3, ~KeyValues3ContextImpl_t
// calls: KeyValues3::Internal_PrepareForInternalType, CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int, CTreeEntryLess<CNonThreadsafeTree<false>, false>, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int>::Purge, KeyValues3::Internal_FreeAllocation, CUtlMemory<CKeyValues3Cluster*, int>::Purge, CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false>::StringPool_t*, int>::Purge, CUtlMemory<KeyValues3*, int>::Purge
void __fastcall CKeyValues3Context::~CKeyValues3Context(CKeyValues3Context *const this)
{
  unsigned __int8 *v1; // r13
  bool v3; // zf
  __int64 v4; // r15
  int v5; // r12d
  __int64 v6; // rsi
  int v7; // r8d
  int v8; // edx
  CKeyValues3Context *v9; // rsi
  unsigned int v10; // eax
  KeyValues3 *v11; // rbx

  v1 = &this->m_Impl[24];
  KeyValues3::Internal_PrepareForInternalType(&this->m_Impl[24], 1);
  v3 = (*&this->m_Impl[1228] & 0xC0000000) == 0;
  *&this->m_Impl[1208] = 0;
  if ( v3 )
  {
    CUtlMemory<KeyValues3 *,int>::Purge(&this->m_Impl[1216]);
    if ( (*&this->m_Impl[1228] & 0xC0000000) == 0 )
      CUtlMemory<KeyValues3 *,int>::Purge(&this->m_Impl[1216]);
  }
  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::Purge(&this->m_Impl[1120]);
  if ( *&this->m_Impl[1184] > 0 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      ++v5;
      v6 = *(*&this->m_Impl[1192] + v4);
      v4 += 8;
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v6);
    }
    while ( v5 < *&this->m_Impl[1184] );
  }
  v3 = (*&this->m_Impl[1204] & 0xC0000000) == 0;
  *&this->m_Impl[1184] = 0;
  if ( v3 )
  {
    CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Purge(&this->m_Impl[1192]);
    v3 = (*&this->m_Impl[1204] & 0xC0000000) == 0;
    *&this->m_Impl[1184] = 0;
    if ( v3 )
    {
      CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Purge(&this->m_Impl[1192]);
      if ( (*&this->m_Impl[1204] & 0xC0000000) == 0 )
        CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Purge(&this->m_Impl[1192]);
    }
  }
  else
  {
    *&this->m_Impl[1184] = 0;
  }
  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::Purge(&this->m_Impl[1120]);
  if ( (*&this->m_Impl[1140] & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>::Purge(&this->m_Impl[1128]);
  v7 = *&this->m_Impl[1040];
  *&this->m_Impl[1024] = 0;
  if ( v7 < 0 )
  {
    v10 = *&this->m_Impl[1044] & 0xC0000000;
  }
  else
  {
    v8 = *&this->m_Impl[1044];
    v9 = *&this->m_Impl[1032];
    v10 = v8 & 0xC0000000;
    if ( &this->m_Impl[1048] != v9 )
    {
      if ( v9 != 0 && v10 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        v8 = *&this->m_Impl[1044];
      }
      *&this->m_Impl[1032] = &this->m_Impl[1048];
      *&this->m_Impl[1040] = 8;
      *&this->m_Impl[1044] = v8 & 0x3FFFFFFF | 0x80000000;
      goto LABEL_15;
    }
  }
  if ( v10 == 0 )
    CUtlMemory<CKeyValues3Cluster *,int>::Purge(&this->m_Impl[1032]);
LABEL_15:
  v11 = &this->m_Impl[1016];
  if ( v1 != 0 )
  {
    do
      KeyValues3::Internal_FreeAllocation(--v11);
    while ( v1 != v11 );
  }
}


// CKeyValues3Context::AllocKV  (line 2457, @0x0000000003132a00, libserver.so)  // inlines: ClusterFromPointer, GetParentContext, Internal_ClearDataWithoutFreeing
// calls: operator new, CKeyValues3Context::AllocKV_Internal
// callers: CKeyValues3Context::ArrayInsertMultipleBefore, CKeyValues3Context::ReallocArray, CKeyValues3Table::FindOrCreateMember_Internal, CKeyValues3Table::CopyFrom
KeyValues3 *__fastcall CKeyValues3Context::AllocKV(KeyValues3 *pParent)
{
  KeyValues3 *result; // rax
  char v2; // dl
  CKeyValues3Context **v3; // rdi
  CKeyValues3Context *v4; // rdi

  if ( (*pParent & 1) == 0 )
  {
    v3 = (pParent & 0xFFFFFFFFFFFFFC00LL);
    if ( v3 != 0 )
    {
      v4 = *v3;
      if ( v4 != 0 )
        return CKeyValues3Context::AllocKV_Internal(v4);
    }
  }
  result = operator new(0x10u);
  v2 = *result;
  result->m_nAsInt64 = 0;
  *result = v2 & 0xE0 | 3;
  *result &= 0xFFE0001F;
  return result;
}


// CKeyValues3Context::AllocKV_Internal  (line 2473, @0x00000000031328d0, libserver.so)  // inlines: AddToTail, CopyConstruct<CKeyValues3Cluster*>, Element, GrowMemory, Init, MemAlloc_AllocAlignedFunc, MemAlloc_FreeAlignedFunc, SetNextFreeCluster, V_memset, memset, operator delete, operator new, operator[]
// calls: CKeyValues3Cluster::Allocate, CKeyValues3Cluster::CKeyValues3Cluster, memset, CUtlMemory<CKeyValues3Cluster*, int>::Grow, _Unwind_Resume
// callers: CKeyValues3Context::AllocKV
KeyValues3 *__fastcall CKeyValues3Context::AllocKV_Internal(CKeyValues3Context *const this)
{
  CKeyValues3Cluster *v2; // rdi
  KeyValues3 *result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  CKeyValues3Cluster *v7; // r12
  __int64 v8; // r13
  int v9; // eax
  CKeyValues3Cluster **v10; // rax

  ++*&this->m_Impl[1232];
  v2 = *&this->m_Impl[1112];
  if ( v2 != 0 )
  {
    result = CKeyValues3Cluster::Allocate(v2);
    v4 = *&this->m_Impl[1112];
    if ( *(v4 + 16) == 0x3FFFFFFFFFFFFFFFLL )
    {
      v5 = *(v4 + 8);
      *(v4 + 8) = 0;
      *&this->m_Impl[1112] = v5;
    }
  }
  else
  {
    v6 = (**g_pMemAlloc)(g_pMemAlloc, 2055);
    v7 = ((v6 + 1031) & 0xFFFFFFFFFFFFFC00LL);
    *&v7[-1].m_Values[62] = v6;
    CKeyValues3Cluster::CKeyValues3Cluster(v7);
    memset(v7, 0, sizeof(CKeyValues3Cluster));
    v7->m_pContext = this;
    v8 = *&this->m_Impl[1024];
    v9 = *&this->m_Impl[1024];
    if ( v8 == *&this->m_Impl[1040] )
    {
      CUtlMemory<CKeyValues3Cluster *,int>::Grow(&this->m_Impl[1032], 1);
      v9 = *&this->m_Impl[1024];
    }
    *&this->m_Impl[1024] = v9 + 1;
    v10 = (*&this->m_Impl[1032] + 8 * v8);
    if ( v10 != 0 )
      *v10 = v7;
    *&this->m_Impl[1112] = v7;
    return CKeyValues3Cluster::Allocate(v7);
  }
  return result;
}


// CKeyValues3Context::FreeKV  (line 2509, @0x0000000003131250, libserver.so)  // inlines: ClusterFromPointer, GetParentContext, ~KeyValues3
// calls: KeyValues3::Internal_FreeAllocation, operator delete, CKeyValues3Context::FreeKV_Internal
// callers: CKeyValues3Table::~CKeyValues3Table, CKeyValues3Table::Clear, CKeyValues3Table::Remove, CKeyValues3Context::FreeArray, CKeyValues3Context::ArrayRemoveMultiple, CKeyValues3Context::ReallocArray
void __fastcall CKeyValues3Context::FreeKV(KeyValues3 *pParent, KeyValues3 *pKV)
{
  CKeyValues3Context **v2; // rdi
  CKeyValues3Context *v3; // rdi

  if ( (*pParent & 1) == 0 && (v2 = (pParent & 0xFFFFFFFFFFFFFC00LL)) != 0 && (v3 = *v2) != 0 )
  {
    CKeyValues3Context::FreeKV_Internal(v3, pKV);
  }
  else if ( pKV != 0 )
  {
    KeyValues3::Internal_FreeAllocation(pKV);
    operator delete(pKV);
  }
}


// CKeyValues3Context::FreeKV_Internal  (line 2527, @0x00000000031310d0, libserver.so)  // inlines: AllocationCount, ClusterFromPointer, MemAlloc_FreeAlignedFunc, PopulationCount, SetNextFreeCluster, operator delete, ~CKeyValues3Cluster, ~KeyValues3
// calls: CKeyValues3Cluster::Free, CUtlVectorBase<CKeyValues3Cluster*, CUtlMemoryFixedGrowable<CKeyValues3Cluster*, 8ul, int> >::FindAndFastRemove, KeyValues3::Internal_FreeAllocation
// callers: CKeyValues3Context::FreeKV
void __fastcall CKeyValues3Context::FreeKV_Internal(CKeyValues3Context *const this, KeyValues3 *pKV)
{
  CKeyValues3Cluster *v3; // rdi
  CKeyValues3Cluster *v4; // rsi
  uint64 v5; // rdx
  unsigned __int64 v6; // rax
  CKeyValues3Cluster *v7; // rax
  CKeyValues3Cluster *v8; // r12
  CKeyValues3Cluster *m_pNextFreeCluster; // rdx
  KeyValues3 *v10; // rbx
  CKeyValues3Cluster *pCluster; // [rsp+8h] [rbp-28h] BYREF

  --*&this->m_Impl[1232];
  v3 = 0;
  if ( (*pKV & 1) == 0 )
    v3 = (pKV & 0xFFFFFFFFFFFFFC00LL);
  pCluster = v3;
  CKeyValues3Cluster::Free(v3, pKV);
  v4 = pCluster;
  v5 = pCluster->m_nAllocatedFlags - ((pCluster->m_nAllocatedFlags >> 1) & 0x5555555555555555LL);
  v6 = (0x101010101010101LL
      * (((v5 & 0x3333333333333333LL)
        + ((v5 >> 2) & 0x3333333333333333LL)
        + (((v5 & 0x3333333333333333LL) + ((v5 >> 2) & 0x3333333333333333LL)) >> 4))
       & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  if ( v6 != 0 )
  {
    if ( v6 == 61 )
    {
      pCluster->m_pNextFreeCluster = *&this->m_Impl[1112];
      *&this->m_Impl[1112] = v4;
    }
  }
  else if ( pCluster != this )
  {
    CUtlVectorBase<CKeyValues3Cluster *,CUtlMemoryFixedGrowable<CKeyValues3Cluster *,8ul,int>>::FindAndFastRemove(
      &this->m_Impl[1024],
      &pCluster);
    v7 = *&this->m_Impl[1112];
    v8 = pCluster;
    if ( v7 == pCluster )
    {
      *&this->m_Impl[1112] = pCluster->m_pNextFreeCluster;
    }
    else if ( v7 != 0 )
    {
      while ( 1 )
      {
        m_pNextFreeCluster = v7->m_pNextFreeCluster;
        if ( pCluster == m_pNextFreeCluster )
          break;
        v7 = v7->m_pNextFreeCluster;
        if ( m_pNextFreeCluster == 0 )
          goto LABEL_9;
      }
      v7->m_pNextFreeCluster = pCluster->m_pNextFreeCluster;
    }
LABEL_9:
    if ( v8 != 0 )
    {
      v10 = &v8->m_Values[62];
      do
        KeyValues3::Internal_FreeAllocation(--v10);
      while ( v8->m_Values != v10 );
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *((v8 & 0xFFFFFFFFFFFFFFF8LL) - 8));
    }
  }
}


// CKeyValues3Context::ReallocArray  (line 2583, @0x0000000003132c40, libserver.so)
// calls: CKeyValues3Context::AllocKV, CKeyValues3Context::FreeKV, CKeyValues3Context::FreeArray
// callers: KeyValues3::Internal_SetArrayCount
KeyValues3Array_t *__fastcall CKeyValues3Context::ReallocArray(
        KeyValues3 *pParent,
        KeyValues3Array_t *pOldArray,
        int nNewCount)
{
  int m_nCount; // r8d
  KeyValues3Array_t *v7; // rax
  int v8; // edi
  KeyValues3Array_t *v9; // rdx
  KeyValues3Array_t *v10; // r13
  KeyValues3Array_t *v11; // rax
  __int64 v12; // rcx
  KeyValues3Array_t *v13; // r14
  __int64 v14; // r15
  KeyValues3 **v16; // r14
  __int64 v17; // r15
  KeyValues3 *v18; // rsi
  int nOldCount; // [rsp+Ch] [rbp-34h]

  if ( pOldArray != 0 )
    m_nCount = pOldArray->m_nCount;
  else
    m_nCount = 0;
  if ( m_nCount == nNewCount )
    return pOldArray;
  if ( nNewCount == 0 && pOldArray != 0 )
  {
    CKeyValues3Context::FreeArray(pParent, pOldArray);
    return 0;
  }
  else
  {
    nOldCount = m_nCount;
    v7 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * nNewCount + 8);
    v8 = nNewCount;
    v7->m_nCount = nNewCount;
    v9 = v7 + 1;
    v10 = v7;
    v11 = pOldArray + 1;
    if ( nOldCount <= nNewCount )
      v8 = nOldCount;
    if ( v8 <= 0 )
    {
      v8 = 0;
    }
    else
    {
      v12 = 0;
      do
      {
        v9[v12] = v11[v12];
        v11[v12++].m_nCount = 0;
      }
      while ( v8 > v12 );
    }
    if ( nOldCount >= nNewCount )
    {
      if ( nOldCount > v8 )
      {
        v16 = &v11[v8];
        v17 = &v11[(nOldCount - 1 - v8) + 1 + v8];
        do
        {
          v18 = *v16++;
          CKeyValues3Context::FreeKV(pParent, v18);
        }
        while ( v16 != v17 );
      }
    }
    else if ( nNewCount > v8 )
    {
      v13 = &v9[v8];
      v14 = &v9[(nNewCount - 1 - v8) + 1 + v8];
      do
      {
        ++v13;
        v13[-1].m_nCount = CKeyValues3Context::AllocKV(pParent);
      }
      while ( v13 != v14 );
    }
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldArray);
    return v10;
  }
}


// CKeyValues3Context::ArrayInsertMultipleBefore  (line 2640, @0x0000000003132a50, libserver.so)
// calls: CKeyValues3Context::AllocKV
// callers: KeyValues3::ArrayInsertMultipleBefore, KeyValues3::ArrayAddToTail
KeyValues3Array_t *__fastcall CKeyValues3Context::ArrayInsertMultipleBefore(
        KeyValues3 *pParent,
        KeyValues3Array_t *pOldArray,
        int nIndexToInsertBefore,
        int nInsertCount)
{
  KeyValues3Array_t *result; // rax
  __int64 v5; // rbx
  intp v7; // r12
  KeyValues3Array_t *v8; // rax
  KeyValues3Array_t *v9; // r12
  KeyValues3Array_t *v10; // r15
  __int64 i; // rax
  KeyValues3Array_t *v12; // r14
  int v13; // esi
  KeyValues3Array_t *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rbx
  intp m_nCount; // rcx
  KeyValues3Array_t *pNewArray; // [rsp+0h] [rbp-50h]
  int nOldCount; // [rsp+10h] [rbp-40h]

  result = pOldArray;
  v5 = nIndexToInsertBefore;
  if ( nInsertCount != 0 )
  {
    if ( pOldArray != 0 )
      nOldCount = pOldArray->m_nCount;
    else
      nOldCount = 0;
    v7 = nInsertCount + nOldCount;
    v8 = (**g_pMemAlloc)(g_pMemAlloc, 8 * v7 + 8);
    v8->m_nCount = v7;
    v9 = v8 + 1;
    pNewArray = v8;
    v10 = pOldArray + 1;
    for ( i = 0; v5 > i; ++i )
    {
      v9[i] = v10[i];
      v10[i].m_nCount = 0;
    }
    if ( nInsertCount > 0 )
    {
      v12 = &v9[v5];
      do
      {
        ++v12;
        v12[-1].m_nCount = CKeyValues3Context::AllocKV(pParent);
      }
      while ( v12 != &v9[(nInsertCount - 1) + 1 + v5] );
    }
    v13 = nOldCount - v5;
    if ( nOldCount - v5 < 0 )
      v13 = 0;
    if ( v13 != 0 )
    {
      v14 = &v10[v5];
      v15 = 0;
      v16 = nInsertCount + v5;
      do
      {
        m_nCount = v14->m_nCount;
        ++v14;
        v9[v16 + v15++].m_nCount = m_nCount;
        v14[-1].m_nCount = 0;
      }
      while ( v13 > v15 );
    }
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldArray);
    return pNewArray;
  }
  return result;
}


// CKeyValues3Context::ArrayRemoveMultiple  (line 2686, @0x0000000003132500, libserver.so)
// calls: CKeyValues3Context::FreeKV, CKeyValues3Context::FreeArray
// callers: KeyValues3::ArrayRemoveMultiple
KeyValues3Array_t *__fastcall CKeyValues3Context::ArrayRemoveMultiple(
        KeyValues3 *pParent,
        KeyValues3Array_t *pOldArray,
        int nFirstIndexToRemove,
        int nRemoveCount)
{
  KeyValues3Array_t *result; // rax
  __int64 v6; // rbx
  int v7; // r14d
  KeyValues3Array_t *v8; // r15
  KeyValues3Array_t *v9; // rax
  KeyValues3Array_t *v10; // r14
  __int64 i; // rax
  KeyValues3 **v12; // r13
  KeyValues3 *v13; // rsi
  int v14; // esi
  KeyValues3Array_t *v15; // rdx
  __int64 v16; // rax
  intp m_nCount; // rcx
  KeyValues3Array_t *pNewArray; // [rsp+0h] [rbp-50h]
  int v19; // [rsp+8h] [rbp-48h]
  int nOldCount; // [rsp+Ch] [rbp-44h]
  __int64 nRemoveCountb; // [rsp+10h] [rbp-40h]

  result = pOldArray;
  v6 = nFirstIndexToRemove;
  if ( nRemoveCount != 0 )
  {
    nOldCount = pOldArray != 0 ? LODWORD(pOldArray->m_nCount) : 0;
    v19 = nFirstIndexToRemove + nRemoveCount;
    result = pOldArray;
    if ( nOldCount >= nFirstIndexToRemove + nRemoveCount )
    {
      v7 = nOldCount - nRemoveCount;
      if ( nOldCount == nRemoveCount && pOldArray != 0 )
      {
        CKeyValues3Context::FreeArray(pParent, pOldArray);
        return 0;
      }
      else
      {
        v8 = pOldArray + 1;
        v9 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * v7 + 8);
        v9->m_nCount = v7;
        v10 = v9 + 1;
        pNewArray = v9;
        for ( i = 0; v6 > i; ++i )
        {
          v10[i] = v8[i];
          v8[i].m_nCount = 0;
        }
        if ( nRemoveCount > 0 )
        {
          v12 = &v8[v6];
          nRemoveCountb = &v8[(nRemoveCount - 1) + 1 + v6];
          do
          {
            v13 = *v12++;
            CKeyValues3Context::FreeKV(pParent, v13);
          }
          while ( v12 != nRemoveCountb );
        }
        v14 = nOldCount - v19;
        if ( nOldCount - v19 < 0 )
          v14 = 0;
        if ( v14 != 0 )
        {
          v15 = &v8[v19];
          v16 = 0;
          do
          {
            m_nCount = v15->m_nCount;
            ++v15;
            v10[v6 + v16++].m_nCount = m_nCount;
            v15[-1].m_nCount = 0;
          }
          while ( v14 > v16 );
        }
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldArray);
        return pNewArray;
      }
    }
  }
  return result;
}


// CKeyValues3Context::FreeArray  (line 2747, @0x0000000003131990, libserver.so)
// calls: CKeyValues3Context::FreeKV
// callers: KeyValues3::Internal_FreeAllocation, CKeyValues3Context::ArrayRemoveMultiple, CKeyValues3Context::ReallocArray
void __fastcall CKeyValues3Context::FreeArray(KeyValues3 *pParent, KeyValues3Array_t *pArray)
{
  unsigned __int64 v4; // rbx
  KeyValues3Array_t *v5; // r14
  __int64 v6; // r13
  KeyValues3 *m_nCount; // rsi

  if ( pArray != 0 )
  {
    if ( pArray->m_nCount > 0 )
    {
      v4 = 0;
      v5 = pArray + 1;
      v6 = 8LL * (pArray->m_nCount - 1) + 8;
      do
      {
        m_nCount = v5[v4 / 8].m_nCount;
        v4 += 8LL;
        CKeyValues3Context::FreeKV(pParent, m_nCount);
      }
      while ( v4 != v6 );
    }
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pArray);
  }
}


// CKeyValues3Context::AllocZeroedBlob  (line 2763, @0x0000000003130700, libserver.so)  // inlines: V_memset, memset
// calls: memset
// callers: KeyValues3::SetToZeroedBinaryBlob
KeyValues3BinaryBlob_t *__fastcall CKeyValues3Context::AllocZeroedBlob(KeyValues3 *pParent, int nSize)
{
  KeyValues3BinaryBlob_t *result; // rax
  size_t v4; // r13
  KeyValues3BinaryBlob_t *v5; // rax
  KeyValues3BinaryBlob_t *v6; // r12

  result = 0;
  if ( nSize != 0 )
  {
    v4 = nSize;
    v5 = (**g_pMemAlloc)(g_pMemAlloc, nSize + 8LL);
    v5->m_nCount = v4;
    v6 = v5;
    if ( nSize < 0 )
      __debugbreak();
    memset(&v5[1], 0, v4);
    return v6;
  }
  return result;
}


// CKeyValues3Context::AllocBlob  (line 2779, @0x0000000003130760, libserver.so)  // inlines: V_memcpy, memcpy
// calls: memcpy
// callers: KeyValues3::SetToBinaryBlob
KeyValues3BinaryBlob_t *__fastcall CKeyValues3Context::AllocBlob(KeyValues3 *pParent, const uint8 *pData, int nSize)
{
  KeyValues3BinaryBlob_t *result; // rax
  size_t v5; // r13
  KeyValues3BinaryBlob_t *v7; // rax
  KeyValues3BinaryBlob_t *v8; // r12

  result = 0;
  if ( nSize != 0 )
  {
    v5 = nSize;
    v7 = (**g_pMemAlloc)(g_pMemAlloc, nSize + 8LL);
    v7->m_nCount = v5;
    v8 = v7;
    if ( nSize < 0 )
      __debugbreak();
    memcpy(&v7[1], pData, v5);
    return v8;
  }
  return result;
}


// CKeyValues3Context::AllocBlobExternal  (line 2795, @0x00000000031307c0, libserver.so)
KeyValues3BinaryBlobExternal_t *__fastcall CKeyValues3Context::AllocBlobExternal(
        KeyValues3 *pParent,
        const uint8 *pData,
        int nSize)
{
  KeyValues3BinaryBlobExternal_t *result; // rax
  intp v4; // rbx

  result = 0;
  v4 = nSize;
  if ( nSize != 0 )
  {
    result = (**g_pMemAlloc)(g_pMemAlloc, 16);
    result->m_nCount = v4;
    result->m_pData = pData;
  }
  return result;
}


// CKeyValues3Context::FreeBlob  (line 2811, @0x0000000003130800, libserver.so)
void __fastcall CKeyValues3Context::FreeBlob(KeyValues3 *pParent, KeyValues3BinaryBlob_t *pBlob)
{
  if ( pBlob != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
}


// CKeyValues3Context::FreeBlobExternal  (line 2822, @0x0000000003130830, libserver.so)
void __fastcall CKeyValues3Context::FreeBlobExternal(KeyValues3 *pParent, KeyValues3BinaryBlobExternal_t *pBlob)
{
  if ( pBlob != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
}


// CKeyValues3Context::AllocTable  (line 2833, @0x0000000003131050, libserver.so)  // inlines: Init
// calls: operator new, CKeyValues3Table::CKeyValues3Table, operator delete, _Unwind_Resume
// callers: KeyValues3::Internal_NewAllocation
CKeyValues3Table *__fastcall CKeyValues3Context::AllocTable(KeyValues3 *pParent)
{
  CKeyValues3Table *v2; // rbx

  v2 = operator new(0x110u);
  CKeyValues3Table::CKeyValues3Table(v2);
  v2->m_pParent = pParent;
  return v2;
}


// CKeyValues3Context::FreeTable  (line 2843, @0x00000000031315e0, libserver.so)
// calls: CKeyValues3Table::~CKeyValues3Table, operator delete
// callers: KeyValues3::Internal_FreeAllocation
void __fastcall CKeyValues3Context::FreeTable(KeyValues3 *pParent, CKeyValues3Table *pTable)
{
  if ( pTable != 0 )
  {
    CKeyValues3Table::~CKeyValues3Table(pTable);
    operator delete(pTable);
  }
}


// CKeyValues3Context::Impl  (line 2854, @0x0000000003130860, libserver.so)
KeyValues3ContextImpl_t *__fastcall CKeyValues3Context::Impl(CKeyValues3Context *const this)
{
  return this;
}


// CKeyValues3Context::AllocSharedString  (line 2862, @0x00000000031335e0, libserver.so)  // inlines: AddString, AddToTail, CUtlSymbolLarge, CUtlSymbolLarge_Hash, ClusterFromPointer, CopyConstruct<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false>::StringPool_t*>, Element, FindInsertionPosition, FindPoolWithSpace, GetParentContext, GrowMemory, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, RightChild, String, ToSymbol, V_memcpy, V_strlen, memcpy, operator!=, operator(), operator[], strcpy
// calls: strlen, strcpy, CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul>::Find, HashString, memcpy, strcmp, CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int, CTreeEntryLess<CNonThreadsafeTree<false>, false>, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int> >::NewNode, CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int, CTreeEntryLess<CNonThreadsafeTree<false>, false>, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int> >::LinkToParent, CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false>::StringPool_t*, int>::Grow
// callers: CKeyValues3Table::FindOrCreateMember_Internal, CKeyValues3Table::CopyFrom
const char *__fastcall CKeyValues3Context::AllocSharedString(
        KeyValues3 *pParent,
        const char *pStr,
        KeyValues3LowercaseHash_t precomputedHash)
{
  size_t v4; // rax
  char *v5; // rax
  const char *result; // rax
  __int64 *v7; // rdi
  __int64 v8; // r12
  int v9; // r15d
  const char *v10; // rdx
  int v11; // edx
  signed int v12; // r14d
  _DWORD **v13; // rsi
  _DWORD *v14; // rdi
  int v15; // eax
  _DWORD **v16; // rsi
  int v17; // r8d
  unsigned int v18; // edx
  __int64 v19; // rsi
  char *v20; // rax
  __int64 v21; // rdx
  int v22; // ecx
  __int64 v23; // rdx
  char **v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // r14
  unsigned __int64 v28; // r15
  __int64 *v29; // r13
  __int64 v30; // rsi
  unsigned int v31; // eax
  __int64 v32; // rdx
  bool v33; // al
  bool v34; // r14
  __int64 v35; // r15
  __int64 v36; // rcx
  CUtlSymbolTableLargeBaseTreeEntry_t *v37; // [rsp+0h] [rbp-60h]
  char *v38; // [rsp+8h] [rbp-58h]
  int v39; // [rsp+8h] [rbp-58h]
  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int>,long long int> > *v40; // [rsp+10h] [rbp-50h]
  unsigned int s1a; // [rsp+18h] [rbp-48h]
  char *s1c; // [rsp+18h] [rbp-48h]
  char *s1; // [rsp+18h] [rbp-48h]
  char *s1b; // [rsp+18h] [rbp-48h]
  const char *v45; // [rsp+20h] [rbp-40h]
  CUtlSymbolTableLargeBaseTreeEntry_t *pCopyFrom; // [rsp+28h] [rbp-38h] BYREF

  if ( (*pParent & 1) != 0 || (v7 = (pParent & 0xFFFFFFFFFFFFFC00LL)) == 0 || (v8 = *v7, *v7 == 0) )
  {
    if ( pStr == 0 )
      return 0;
    v4 = strlen(pStr);
    v5 = (**g_pMemAlloc)(g_pMemAlloc, v4 + 1);
    return strcpy(v5, pStr);
  }
  if ( pStr == 0 )
    return "";
  v9 = strlen(pStr);
  if ( v9 <= 0 || *pStr == 0 )
    return "";
  v40 = (v8 + 1120);
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::Find((v8 + 1120), pStr, v9);
  v10 = v45;
  if ( v45 == 0 )
  {
    v11 = *(v8 + 1184);
    v12 = (v9 + 16) & 0xFFFFFFF8;
    if ( v11 > 0 )
    {
      v13 = *(v8 + 1192);
      v14 = *v13;
      v15 = (*v13)[1];
      if ( v12 <= **v13 - v15 )
      {
LABEL_26:
        v14[1] = v12 + v15;
        s1c = v14 + v15;
        v37 = (s1c + 8);
        *(s1c + 1) = HashString(pStr);
        v38 = s1c;
        s1 = s1c + 16;
        memcpy(s1, pStr, v9);
        v38[v9 + 16] = 0;
        v26 = *(v8 + 1144);
        pCopyFrom = v37;
        if ( v26 == -1 )
        {
          v34 = 0;
        }
        else
        {
          v27 = *(v8 + 1128);
          v28 = *(v38 + 1);
          while ( 1 )
          {
            v29 = (v27 + 40 * v26);
            v30 = v29[4];
            LOBYTE(v31) = *v30 > v28;
            if ( *v30 == v28 )
              v31 = strcmp(s1, (v30 + 8)) >> 31;
            v32 = v29[1];
            if ( v31 != 0 )
              v32 = *v29;
            v33 = v31 != 0;
            if ( v32 == -1 )
              break;
            v26 = v32;
          }
          v34 = v33;
        }
        v35 = CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::NewNode(
                v40,
                &pCopyFrom);
        CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::LinkToParent(
          v40,
          v35,
          v26,
          v34);
        v36 = *(v8 + 1128);
        ++*(v8 + 1152);
        v10 = (*(v36 + 40 * v35 + 32) + 8LL);
        goto LABEL_11;
      }
      v16 = v13 + 1;
      v17 = 0;
      while ( ++v17 != v11 )
      {
        v14 = *v16++;
        v15 = v14[1];
        if ( v12 <= *v14 - v15 )
        {
          if ( v17 != -1 )
            goto LABEL_26;
          break;
        }
      }
    }
    if ( (v12 + 12LL) <= 0x800 )
    {
      v18 = 2036;
      v19 = 2048;
    }
    else
    {
      v18 = (v9 + 16) & 0xFFFFFFF8;
      v19 = v12 + 12;
    }
    s1a = v18;
    v20 = (**g_pMemAlloc)(g_pMemAlloc, v19);
    *(v20 + 1) = 0;
    *v20 = s1a;
    v21 = *(v8 + 1184);
    v22 = *(v8 + 1184);
    if ( v21 == *(v8 + 1200) )
    {
      v39 = *(v8 + 1184);
      s1b = v20;
      CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Grow(
        (v8 + 1192),
        1);
      v22 = *(v8 + 1184);
      v21 = v39;
      v20 = s1b;
    }
    v23 = 8 * v21;
    *(v8 + 1184) = v22 + 1;
    v24 = (*(v8 + 1192) + v23);
    if ( v24 != 0 )
    {
      *v24 = v20;
      v25 = *(v8 + 1192) + v23;
    }
    else
    {
      v25 = 0;
    }
    v14 = *v25;
    v15 = *(*v25 + 4LL);
    goto LABEL_26;
  }
LABEL_11:
  result = "";
  if ( v10 != 0 )
    return v10;
  return result;
}


// CKeyValues3Context::FreeSharedString  (line 2878, @0x0000000003130870, libserver.so)  // inlines: ClusterFromPointer, GetParentContext
// callers: CKeyValues3Table::~CKeyValues3Table
void __fastcall CKeyValues3Context::FreeSharedString(KeyValues3 *pParent, const char *pStr)
{
  _QWORD *v2; // rdi

  if ( ((*pParent & 1) != 0 || (v2 = (pParent & 0xFFFFFFFFFFFFFC00LL)) == 0 || *v2 == 0) && pStr != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
}


// CKeyValues3Context::AllocString  (line 2897, @0x00000000031308b0, libserver.so)  // inlines: MemAlloc_StrDupFunc, strcpy
// calls: strlen, strcpy
const char *__fastcall CKeyValues3Context::AllocString(KeyValues3 *pParent, const char *pStr)
{
  size_t v3; // rax
  char *v4; // rax

  if ( pStr == 0 )
    return 0;
  v3 = strlen(pStr);
  v4 = (**g_pMemAlloc)(g_pMemAlloc, v3 + 1);
  return strcpy(v4, pStr);
}


// CKeyValues3Context::FreeString  (line 2905, @0x0000000003130900, libserver.so)
void __fastcall CKeyValues3Context::FreeString(KeyValues3 *pParent, const char *pStr)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pStr);
}


// CKeyValues3Context::Root  (line 2913, @0x0000000003130920, libserver.so)
KeyValues3 *__fastcall CKeyValues3Context::Root(CKeyValues3Context *const this)
{
  return &this->m_Impl[24];
}


// CKeyValues3Context::IsIdenticalTo  (line 2921, @0x0000000003130930, libserver.so)
// calls: KeyValues3::IsIdenticalTo
bool __fastcall CKeyValues3Context::IsIdenticalTo(
        const CKeyValues3Context *const this,
        const CKeyValues3Context *pOther,
        bool bAssertOnFailure)
{
  return KeyValues3::IsIdenticalTo(&this->m_Impl[24], &pOther->m_Impl[24], bAssertOnFailure);
}


// CKeyValues3Context::CopyFrom  (line 2929, @0x0000000003134620, libserver.so)
// calls: KeyValues3::CopyFrom
void __fastcall CKeyValues3Context::CopyFrom(CKeyValues3Context *const this, const CKeyValues3Context *pOther)
{
  KeyValues3::CopyFrom(&this->m_Impl[24], &pOther->m_Impl[24]);
}


// IsKV3Data  (line 2937, @0x0000000003130950, libserver.so)
// calls: LooksLikeKV3TextData, LooksLikeKV3BinaryData
// callers: IsKV3Data
bool __fastcall IsKV3Data(void *pBuffer, int nBufLength)
{
  bool result; // al

  result = LooksLikeKV3TextData(pBuffer, nBufLength);
  if ( !result )
    return LooksLikeKV3BinaryData(pBuffer, nBufLength);
  return result;
}


// IsKV3Data  (line 2954, @0x0000000003130980, libserver.so)
// calls: IsKV3Data
bool __fastcall IsKV3Data(CUtlBuffer *pSrcBuffer)
{
  return IsKV3Data(&pSrcBuffer->m_Memory.m_pMemory[pSrcBuffer->m_Get], pSrcBuffer->m_nMaxPut - pSrcBuffer->m_Get);
}


// LoadKV3FromFile  (line 2966, @0x0000000003130b10, libserver.so)  // inlines: LoadKV3, Purge, ~CUtlBuffer, ~CUtlMemory
// calls: CUtlString::operator=, CUtlBuffer::CUtlBuffer, CUtlMemory<unsigned char, int>::Purge, LoadKV3, _Unwind_Resume
// strings: "Failed to read file."
bool __fastcall LoadKV3FromFile(
        CKeyValues3Context *pContext,
        CUtlString *pOutErrorMessage,
        const char *pFilename,
        const char *pPath)
{
  char v8; // bl
  CUtlBuffer buf; // [rsp+10h] [rbp-80h] BYREF

  if ( pOutErrorMessage != 0 )
    CUtlString::operator=(pOutErrorMessage, "");
  CUtlBuffer::CUtlBuffer(&buf, 0, 0, 0);
  v8 = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 14))(
         &g_pFullFileSystem->IBaseFileSystem,
         pFilename,
         pPath,
         &buf,
         0,
         0,
         0);
  if ( v8 != 0 )
  {
    v8 = LoadKV3(&pContext->m_Impl[24], pOutErrorMessage, &buf);
  }
  else if ( pOutErrorMessage != 0 )
  {
    CUtlString::operator=(pOutErrorMessage, "Failed to read file.");
  }
  if ( (buf.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<unsigned char,int>::Purge(&buf.m_Memory);
  return v8;
}


// LoadKV3FromFile  (line 2988, @0x0000000003130bf0, libserver.so)  // inlines: Purge, ~CUtlBuffer, ~CUtlMemory
// calls: CUtlString::operator=, CUtlBuffer::CUtlBuffer, CUtlMemory<unsigned char, int>::Purge, LoadKV3, _Unwind_Resume
// callers: CCustomNetTableManager::GetCustomStringTableDefs
// strings: "Failed to read file."
bool __fastcall LoadKV3FromFile(
        KeyValues3 *pTargetKV3,
        CUtlString *pOutErrorMessage,
        const char *pFilename,
        const char *pPath)
{
  char v8; // bl
  CUtlBuffer buf; // [rsp+10h] [rbp-80h] BYREF

  if ( pOutErrorMessage != 0 )
    CUtlString::operator=(pOutErrorMessage, "");
  CUtlBuffer::CUtlBuffer(&buf, 0, 0, 0);
  v8 = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 14))(
         &g_pFullFileSystem->IBaseFileSystem,
         pFilename,
         pPath,
         &buf,
         0,
         0,
         0);
  if ( v8 != 0 )
  {
    v8 = LoadKV3(pTargetKV3, pOutErrorMessage, &buf);
  }
  else if ( pOutErrorMessage != 0 )
  {
    CUtlString::operator=(pOutErrorMessage, "Failed to read file.");
  }
  if ( (buf.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<unsigned char,int>::Purge(&buf.m_Memory);
  return v8;
}


// LooksLikeOldSchemaText  (line 3011, @0x00000000031309a0, libserver.so)  // inlines: V_strncmp<long unsigned int>
// calls: _V_strncmp, __stack_chk_fail
// callers: LoadKV3
bool __fastcall LooksLikeOldSchemaText(void *pData, int nBufLen)
{
  int v2; // edx
  char SCHEMA_TEXT_PREFIX[24]; // [rsp+0h] [rbp-20h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-8h]

  v2 = 12;
  v5 = __readfsqword(0x28u);
  strcpy(SCHEMA_TEXT_PREFIX, "<!-- schema ");
  if ( nBufLen <= 0xB )
    v2 = nBufLen;
  return _V_strncmp(pData, SCHEMA_TEXT_PREFIX, v2) == 0;
}


// LoadKV3  (line 3021, @0x0000000003130b00, libserver.so)
// calls: LoadKV3
bool __fastcall LoadKV3(CKeyValues3Context *pContext, CUtlString *pOutErrorMessage, CUtlBuffer *pSrcBuffer)
{
  return LoadKV3(&pContext->m_Impl[24], pOutErrorMessage, pSrcBuffer);
}


// LoadKV3  (line 3029, @0x0000000003130a10, libserver.so)
// calls: CUtlString::operator=, LooksLikeOldSchemaText, LooksLikeKV3TextData, LooksLikeKV3BinaryData, LoadKV3Text, LoadKV3FromOldSchemaText, LoadKV3Binary
// callers: LoadKV3, LoadKV3FromFile
// strings: "Unable to determine buffer encoding."
bool __fastcall LoadKV3(KeyValues3 *pTargetKV3, CUtlString *pOutErrorMessage, CUtlBuffer *pSrcBuffer)
{
  __int64 m_Get; // rbx
  int v7; // r12d
  unsigned __int8 *v8; // rbx

  if ( pOutErrorMessage != 0 )
    CUtlString::operator=(pOutErrorMessage, "");
  m_Get = pSrcBuffer->m_Get;
  v7 = pSrcBuffer->m_nMaxPut - m_Get;
  v8 = &pSrcBuffer->m_Memory.m_pMemory[m_Get];
  if ( LooksLikeOldSchemaText(v8, v7) )
    return LoadKV3FromOldSchemaText(pTargetKV3, pOutErrorMessage, pSrcBuffer);
  if ( LooksLikeKV3TextData(v8, v7) )
    return LoadKV3Text(pTargetKV3, pOutErrorMessage, pSrcBuffer->m_Memory.m_pMemory);
  if ( LooksLikeKV3BinaryData(v8, v7) )
    return LoadKV3Binary(pTargetKV3, pOutErrorMessage, pSrcBuffer, 0);
  if ( pOutErrorMessage != 0 )
    CUtlString::operator=(pOutErrorMessage, "Unable to determine buffer encoding.");
  return 0;
}


// SaveKV3  (line 3066, @0x0000000003130cd0, libserver.so)  // inlines: Plat_CompareUUIDs, operator==
// calls: memcmp, SaveKV3Binary, SaveKV3Text
// callers: SaveKV3ToFile
// globals: KV3_ENCODING_TEXT
bool __fastcall SaveKV3(
        const V_uuid_t *const encodingId,
        const V_uuid_t *const formatId,
        const KeyValues3 *pRoot,
        CUtlString *pOutErrorMessage,
        CUtlBuffer *pDestBuffer)
{
  if ( memcmp(encodingId, &KV3_ENCODING_TEXT, 0x10u) == 0 )
    return SaveKV3Text(encodingId, formatId, pRoot, pOutErrorMessage, pDestBuffer);
  else
    return SaveKV3Binary(encodingId, formatId, pRoot, pOutErrorMessage, pDestBuffer);
}


// SaveKV3ToFile  (line 3081, @0x0000000003130d40, libserver.so)  // inlines: Plat_CompareUUIDs, Purge, operator==, ~CUtlBuffer, ~CUtlMemory
// calls: memcmp, CUtlBuffer::CUtlBuffer, SaveKV3, CUtlMemory<unsigned char, int>::Purge, CUtlString::Format, _Unwind_Resume
// strings: "Unable to write file: %s\n"
// globals: KV3_ENCODING_TEXT
bool __fastcall SaveKV3ToFile(
        const V_uuid_t *const encodingId,
        const V_uuid_t *const formatId,
        const KeyValues3 *pRoot,
        CUtlString *pOutErrorMessage,
        const char *pFilename,
        const char *pPath)
{
  int v10; // eax
  bool result; // al
  bool pFilenameb; // [rsp+8h] [rbp-88h]
  CUtlBuffer buf; // [rsp+10h] [rbp-80h] BYREF

  v10 = memcmp(encodingId, &KV3_ENCODING_TEXT, 0x10u);
  CUtlBuffer::CUtlBuffer(&buf, 0, 0, v10 == 0);
  if ( !SaveKV3(encodingId, formatId, pRoot, pOutErrorMessage, &buf) )
  {
LABEL_2:
    result = 0;
    goto LABEL_3;
  }
  result = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 15))(
             &g_pFullFileSystem->IBaseFileSystem,
             pFilename,
             pPath,
             &buf);
  if ( !result )
  {
    if ( pOutErrorMessage != 0 )
      CUtlString::Format(pOutErrorMessage, "Unable to write file: %s\n", pFilename);
    goto LABEL_2;
  }
LABEL_3:
  if ( (buf.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    pFilenameb = result;
    CUtlMemory<unsigned char,int>::Purge(&buf.m_Memory);
    return pFilenameb;
  }
  return result;
}


// KeyValues3::ArraySwapItems  (line 3102, @0x0000000003130e50, libserver.so)  // inlines: GetType, Swap<KeyValues3*>
void __fastcall KeyValues3::ArraySwapItems(KeyValues3 *const this, int nIndex1, int nIndex2)
{
  unsigned __int8 v3; // al
  const char *m_pAsCharPtr; // rax
  int v5; // edi
  const char *v6; // rax
  char *v7; // rdx
  char *v8; // rax
  __int64 v9; // rcx

  v3 = *this;
  if ( (*this & 0x1C) != 0x14 && (v3 & 0x1E) != 0x18 && ((v3 >> 1) & 0xF) == 8 )
  {
    m_pAsCharPtr = this->m_pAsCharPtr;
    if ( m_pAsCharPtr != 0 )
      v5 = *m_pAsCharPtr;
    else
      v5 = 0;
    if ( nIndex1 >= 0 && v5 > nIndex1 && nIndex2 >= 0 && v5 > nIndex2 )
    {
      v6 = m_pAsCharPtr + 8;
      v7 = &v6[8 * nIndex2];
      v8 = &v6[8 * nIndex1];
      v9 = *v8;
      *v8 = *v7;
      *v7 = v9;
    }
  }
}


// KeyValues3::ArrayInsertMultipleBefore  (line 3125, @0x0000000003132ba0, libserver.so)
// calls: CKeyValues3Context::ArrayInsertMultipleBefore
void __fastcall KeyValues3::ArrayInsertMultipleBefore(
        KeyValues3 *const this,
        int nIndexToInsertBefore,
        int nInsertCount)
{
  this->m_nAsInt64 = CKeyValues3Context::ArrayInsertMultipleBefore(
                       this,
                       this->m_pArray,
                       nIndexToInsertBefore,
                       nInsertCount);
}


// KeyValues3::ArrayRemoveMultiple  (line 3133, @0x0000000003132670, libserver.so)
// calls: CKeyValues3Context::ArrayRemoveMultiple
void __fastcall KeyValues3::ArrayRemoveMultiple(KeyValues3 *const this, int nFirstIndexToRemove, int nRemoveCount)
{
  this->m_nAsInt64 = CKeyValues3Context::ArrayRemoveMultiple(this, this->m_pArray, nFirstIndexToRemove, nRemoveCount);
}


// KeyValues3::ArrayAddToTail  (line 3141, @0x0000000003132bd0, libserver.so)  // inlines: ArrayInsertMultipleBefore, GetType, Internal_PrepareForType, SetToEmptyArray
// calls: KeyValues3::Internal_PrepareForInternalType, KeyValues3::GetArrayElementCount, CKeyValues3Context::ArrayInsertMultipleBefore, KeyValues3::GetArrayElement
KeyValues3 *__fastcall KeyValues3::ArrayAddToTail(KeyValues3 *const this)
{
  unsigned __int8 v2; // al
  int ArrayElementCount; // r12d

  v2 = *this;
  if ( (*this & 0x1C) == 0x14 || (v2 & 0x1E) == 0x18 || ((v2 >> 1) & 0xF) != 8 )
    KeyValues3::Internal_PrepareForInternalType(this, 8);
  ArrayElementCount = KeyValues3::GetArrayElementCount(this);
  this->m_nAsInt64 = CKeyValues3Context::ArrayInsertMultipleBefore(this, this->m_pArray, ArrayElementCount, 1);
  return KeyValues3::GetArrayElement(this, ArrayElementCount);
}


