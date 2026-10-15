
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_gcreportprinter.cpp  (line 0, @0x0000000001a6e8a0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_gcreportprinter_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// GCSDK::CGCReportPrinter::Variant_t::Variant_t  (line 26, @0x0000000003242e20, libserver.so)  // inlines: CSteamID, CUtlString
void __fastcall GCSDK::CGCReportPrinter::Variant_t::Variant_t(GCSDK::CGCReportPrinter::Variant_t *const this)
{
  this->m_sStr.m_pString = 0;
  this->m_sLink.m_pString = 0;
  this->m_nInt = 0;
  this->m_unInt = 0;
  this->m_fFloat = 0.0;
  *&this->m_SteamID.m_steamid.m_comp = 0;
  HIBYTE(this->m_SteamID.m_steamid.m_unAll64Bits) = 0;
  WORD2(this->m_SteamID.m_steamid.m_unAll64Bits) = 0;
  BYTE6(this->m_SteamID.m_steamid.m_unAll64Bits) = 0;
}


// GCSDK::CGCReportPrinter::CGCReportPrinter  (line 32, @0x0000000003244250, libserver.so)  // inlines: CCopyableUtlVector, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase
// callers: GCSDK::CMessageList::PrintSummary, GCSDK::CMessageList::PrintStats, GCSDK::CMessageList::PrintMultiplexStats
void __fastcall GCSDK::CGCReportPrinter::CGCReportPrinter(GCSDK::CGCReportPrinter *const this)
{
  this->m_Columns.m_Size = 0;
  this->m_Columns.m_Memory.m_pMemory = 0;
  this->m_Columns.m_Memory.m_nAllocationCount = 0;
  this->m_Columns.m_Memory.m_nGrowSize = 0;
  this->m_Rows.m_Size = 0;
  this->m_Rows.m_Memory.m_pMemory = 0;
  this->m_Rows.m_Memory.m_nAllocationCount = 0;
  this->m_Rows.m_Memory.m_nGrowSize = 0;
  this->m_RowBuilder.m_Size = 0;
  this->m_RowBuilder.m_Memory.m_pMemory = 0;
  this->m_RowBuilder.m_Memory.m_nAllocationCount = 0;
  this->m_RowBuilder.m_Memory.m_nGrowSize = 0;
  this->m_sReportTitle.m_pString = 0;
}


// GCSDK::CGCReportPrinter::~CGCReportPrinter  (line 36, @0x00000000032440b0, libserver.so)  // inlines: Clear, ClearData, Purge, PurgeAndDeleteElements, RemoveAll, ~CCopyableUtlVector, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: operator delete, CUtlVectorBase<GCSDK::CGCReportPrinter::Variant_t, CUtlMemory<GCSDK::CGCReportPrinter::Variant_t, int> >::RemoveAll, CUtlMemory<GCSDK::CGCReportPrinter::Variant_t, int>::Purge, CUtlMemory<CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t>*, int>::Purge, CUtlVectorBase<GCSDK::CGCReportPrinter::Column_t, CUtlMemory<GCSDK::CGCReportPrinter::Column_t, int> >::RemoveAll, CUtlMemory<GCSDK::CGCReportPrinter::Column_t, int>::Purge, CUtlString::FreeMemoryBlock
// callers: GCSDK::CMessageList::PrintSummary, GCSDK::CMessageList::PrintStats, GCSDK::CMessageList::PrintMultiplexStats
void __fastcall GCSDK::CGCReportPrinter::~CGCReportPrinter(GCSDK::CGCReportPrinter *const this)
{
  __int64 v1; // r14
  int i; // r13d
  CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t> **m_pMemory; // rax
  CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t> *v5; // rbx
  bool v6; // zf

  v1 = 0;
  for ( i = 0; i < this->m_Rows.m_Size; ++v1 )
  {
    m_pMemory = this->m_Rows.m_Memory.m_pMemory;
    v5 = m_pMemory[v1];
    if ( v5 != 0 )
    {
      CUtlVectorBase<GCSDK::CGCReportPrinter::Variant_t,CUtlMemory<GCSDK::CGCReportPrinter::Variant_t,int>>::RemoveAll(m_pMemory[v1]);
      if ( (v5->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<GCSDK::CGCReportPrinter::Variant_t,int>::Purge(&v5->m_Memory);
        if ( (v5->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<GCSDK::CGCReportPrinter::Variant_t,int>::Purge(&v5->m_Memory);
      }
      operator delete(v5);
    }
    ++i;
  }
  v6 = (this->m_Rows.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Rows.m_Size = 0;
  if ( v6 )
    CUtlMemory<CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t> *,int>::Purge(&this->m_Rows.m_Memory);
  CUtlVectorBase<GCSDK::CGCReportPrinter::Column_t,CUtlMemory<GCSDK::CGCReportPrinter::Column_t,int>>::RemoveAll(&this->m_Columns);
  if ( (this->m_Columns.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<GCSDK::CGCReportPrinter::Column_t,int>::Purge(&this->m_Columns.m_Memory);
  if ( this->m_sReportTitle.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_sReportTitle);
  CUtlVectorBase<GCSDK::CGCReportPrinter::Variant_t,CUtlMemory<GCSDK::CGCReportPrinter::Variant_t,int>>::RemoveAll(&this->m_RowBuilder);
  if ( (this->m_RowBuilder.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<GCSDK::CGCReportPrinter::Variant_t,int>::Purge(&this->m_RowBuilder.m_Memory);
    if ( (this->m_RowBuilder.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<GCSDK::CGCReportPrinter::Variant_t,int>::Purge(&this->m_RowBuilder.m_Memory);
  }
  v6 = (this->m_Rows.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Rows.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t> *,int>::Purge(&this->m_Rows.m_Memory);
    if ( (this->m_Rows.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t> *,int>::Purge(&this->m_Rows.m_Memory);
  }
  CUtlVectorBase<GCSDK::CGCReportPrinter::Column_t,CUtlMemory<GCSDK::CGCReportPrinter::Column_t,int>>::RemoveAll(&this->m_Columns);
  if ( (this->m_Columns.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<GCSDK::CGCReportPrinter::Column_t,int>::Purge(&this->m_Columns.m_Memory);
    if ( (this->m_Columns.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<GCSDK::CGCReportPrinter::Column_t,int>::Purge(&this->m_Columns.m_Memory);
  }
}


// GCSDK::CGCReportPrinter::Column_t::Column_t  (line 41, @0x0000000003242e70, libserver.so)  // inlines: CUtlString
void __fastcall GCSDK::CGCReportPrinter::Column_t::Column_t(GCSDK::CGCReportPrinter::Column_t *const this)
{
  this->m_sFullName.m_pString = 0;
  this->m_sCategory.m_pString = 0;
  this->m_sName.m_pString = 0;
  this->m_sValSuffix.m_pString = 0;
  this->m_eType = GCSDK::CGCReportPrinter::EColumnType::eCol_Int;
  this->m_eSummary = GCSDK::CGCReportPrinter::ESummaryType::eSummary_None;
  this->m_nNumDecimals = 0;
  this->m_unIntDivisor = 1;
  this->m_bShowTime = 1;
}


// GCSDK::CGCReportPrinter::Column_t::Init  (line 50, @0x0000000003242ec0, libserver.so)  // inlines: _V_strstr, strstr
// calls: CUtlString::operator=, strchr, CUtlString::Append
// callers: GCSDK::CGCReportPrinter::AddIntColumn, GCSDK::CGCReportPrinter::AddStringColumn, GCSDK::CGCReportPrinter::AddDateColumn, GCSDK::CGCReportPrinter::AddSteamIDColumn, GCSDK::CGCReportPrinter::AddFloatColumn, GCSDK::CGCReportPrinter::AddUIntColumn
void __fastcall GCSDK::CGCReportPrinter::Column_t::Init(
        GCSDK::CGCReportPrinter::Column_t *const this,
        const char *pszName,
        GCSDK::CGCReportPrinter::EColumnType eType,
        GCSDK::CGCReportPrinter::ESummaryType eSummary)
{
  char *v8; // rax
  char *v9; // r13

  CUtlString::operator=(&this->m_sFullName, pszName);
  this->m_eType = eType;
  this->m_eSummary = eSummary;
  v8 = strchr(pszName, 124);
  v9 = v8;
  if ( v8 != 0 )
  {
    CUtlString::Append(&this->m_sCategory, pszName, v8 - pszName);
    CUtlString::operator=(&this->m_sName, v9 + 1);
  }
  else
  {
    CUtlString::operator=(&this->m_sName, pszName);
  }
}


// GCSDK::CGCReportPrinter::AddStringColumn  (line 68, @0x0000000003244410, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, CUtlString, Column_t, Construct<GCSDK::CGCReportPrinter::Column_t>, Element, GrowMemory, operator[]
// calls: GCSDK::CGCReportPrinter::Column_t::Init, CUtlMemory<GCSDK::CGCReportPrinter::Column_t, int>::Grow
// callers: GCSDK::CMessageList::PrintSummary, GCSDK::CMessageList::PrintStats, GCSDK::CMessageList::PrintMultiplexStats
bool __fastcall GCSDK::CGCReportPrinter::AddStringColumn(
        GCSDK::CGCReportPrinter *const this,
        const char *pszColumn,
        GCSDK::CGCReportPrinter::ESummaryType eSummary)
{
  bool result; // al
  int m_Size; // r13d
  int v7; // eax
  GCSDK::CGCReportPrinter::Column_t *v8; // rax
  GCSDK::CGCReportPrinter::Column_t *v9; // rdi
  GCSDK::CGCReportPrinter::ESummaryType eSummarya; // [rsp+Ch] [rbp-24h]

  result = 0;
  if ( this->m_Rows.m_Size <= 0 )
  {
    m_Size = this->m_Columns.m_Size;
    v7 = this->m_Columns.m_Size;
    if ( this->m_Columns.m_Size == this->m_Columns.m_Memory.m_nAllocationCount )
    {
      eSummarya = eSummary;
      CUtlMemory<GCSDK::CGCReportPrinter::Column_t,int>::Grow(&this->m_Columns.m_Memory, 1);
      v7 = this->m_Columns.m_Size;
      eSummary = eSummarya;
    }
    this->m_Columns.m_Size = v7 + 1;
    v8 = &this->m_Columns.m_Memory.m_pMemory[m_Size];
    if ( v8 != 0 )
    {
      v8->m_sFullName.m_pString = 0;
      v8->m_sCategory.m_pString = 0;
      v8->m_sName.m_pString = 0;
      v8->m_sValSuffix.m_pString = 0;
      v8->m_eType = GCSDK::CGCReportPrinter::EColumnType::eCol_Int;
      v8->m_eSummary = GCSDK::CGCReportPrinter::ESummaryType::eSummary_None;
      v8->m_nNumDecimals = 0;
      v8->m_unIntDivisor = 1;
      v8->m_bShowTime = 1;
      v9 = &this->m_Columns.m_Memory.m_pMemory[m_Size];
    }
    else
    {
      v9 = 0;
    }
    GCSDK::CGCReportPrinter::Column_t::Init(v9, pszColumn, GCSDK::CGCReportPrinter::EColumnType::eCol_String, eSummary);
    return 1;
  }
  return result;
}


// GCSDK::CGCReportPrinter::AddIntColumn  (line 82, @0x00000000032442c0, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, CUtlString, Column_t, Construct<GCSDK::CGCReportPrinter::Column_t>, Element, GrowMemory, operator[]
// calls: GCSDK::CGCReportPrinter::Column_t::Init, CUtlString::operator=, CUtlMemory<GCSDK::CGCReportPrinter::Column_t, int>::Grow
// callers: GCSDK::CMessageList::PrintSummary, GCSDK::CMessageList::PrintStats, GCSDK::CMessageList::PrintMultiplexStats
// strings: " KB", " MB"
bool __fastcall GCSDK::CGCReportPrinter::AddIntColumn(
        GCSDK::CGCReportPrinter *const this,
        const char *pszColumn,
        GCSDK::CGCReportPrinter::ESummaryType eSummary,
        GCSDK::CGCReportPrinter::EIntDisplayType eIntDisplay)
{
  bool v4; // r12
  int m_Size; // r12d
  int v10; // eax
  GCSDK::CGCReportPrinter::Column_t *v11; // rax
  GCSDK::CGCReportPrinter::Column_t *v12; // rbx
  GCSDK::CGCReportPrinter::ESummaryType eSummarya; // [rsp+Ch] [rbp-24h]

  v4 = 0;
  if ( this->m_Rows.m_Size <= 0 )
  {
    m_Size = this->m_Columns.m_Size;
    v10 = this->m_Columns.m_Size;
    if ( this->m_Columns.m_Size == this->m_Columns.m_Memory.m_nAllocationCount )
    {
      eSummarya = eSummary;
      CUtlMemory<GCSDK::CGCReportPrinter::Column_t,int>::Grow(&this->m_Columns.m_Memory, 1);
      v10 = this->m_Columns.m_Size;
      eSummary = eSummarya;
    }
    this->m_Columns.m_Size = v10 + 1;
    v11 = &this->m_Columns.m_Memory.m_pMemory[m_Size];
    if ( v11 != 0 )
    {
      v11->m_sFullName.m_pString = 0;
      v11->m_sCategory.m_pString = 0;
      v11->m_sName.m_pString = 0;
      v11->m_sValSuffix.m_pString = 0;
      v11->m_eType = GCSDK::CGCReportPrinter::EColumnType::eCol_Int;
      v11->m_eSummary = GCSDK::CGCReportPrinter::ESummaryType::eSummary_None;
      v11->m_nNumDecimals = 0;
      v11->m_unIntDivisor = 1;
      v11->m_bShowTime = 1;
      v12 = &this->m_Columns.m_Memory.m_pMemory[m_Size];
    }
    else
    {
      v12 = 0;
    }
    GCSDK::CGCReportPrinter::Column_t::Init(v12, pszColumn, GCSDK::CGCReportPrinter::EColumnType::eCol_Int, eSummary);
    if ( eIntDisplay == GCSDK::CGCReportPrinter::EIntDisplayType::eIntDisplay_Memory_MB )
    {
      v4 = 1;
      CUtlString::operator=(&v12->m_sValSuffix, " MB");
      v12->m_unIntDivisor = 0x100000;
      v12->m_nNumDecimals = 2;
    }
    else
    {
      v4 = 1;
      if ( eIntDisplay == GCSDK::CGCReportPrinter::EIntDisplayType::eIntDisplay_Memory_KB )
      {
        CUtlString::operator=(&v12->m_sValSuffix, " KB");
        v12->m_unIntDivisor = 1024;
        v12->m_nNumDecimals = 1;
      }
    }
  }
  return v4;
}


// GCSDK::CGCReportPrinter::AddUIntColumn  (line 110, @0x0000000003244800, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, CUtlString, Column_t, Construct<GCSDK::CGCReportPrinter::Column_t>, Element, GrowMemory, operator[]
// calls: GCSDK::CGCReportPrinter::Column_t::Init, CUtlString::operator=, CUtlMemory<GCSDK::CGCReportPrinter::Column_t, int>::Grow
// strings: " KB", " MB"
bool __fastcall GCSDK::CGCReportPrinter::AddUIntColumn(
        GCSDK::CGCReportPrinter *const this,
        const char *pszColumn,
        GCSDK::CGCReportPrinter::ESummaryType eSummary,
        GCSDK::CGCReportPrinter::EIntDisplayType eIntDisplay)
{
  bool v4; // r12
  int m_Size; // r12d
  int v10; // eax
  GCSDK::CGCReportPrinter::Column_t *v11; // rax
  GCSDK::CGCReportPrinter::Column_t *v12; // rbx
  GCSDK::CGCReportPrinter::ESummaryType eSummarya; // [rsp+Ch] [rbp-24h]

  v4 = 0;
  if ( this->m_Rows.m_Size <= 0 )
  {
    m_Size = this->m_Columns.m_Size;
    v10 = this->m_Columns.m_Size;
    if ( this->m_Columns.m_Size == this->m_Columns.m_Memory.m_nAllocationCount )
    {
      eSummarya = eSummary;
      CUtlMemory<GCSDK::CGCReportPrinter::Column_t,int>::Grow(&this->m_Columns.m_Memory, 1);
      v10 = this->m_Columns.m_Size;
      eSummary = eSummarya;
    }
    this->m_Columns.m_Size = v10 + 1;
    v11 = &this->m_Columns.m_Memory.m_pMemory[m_Size];
    if ( v11 != 0 )
    {
      v11->m_sFullName.m_pString = 0;
      v11->m_sCategory.m_pString = 0;
      v11->m_sName.m_pString = 0;
      v11->m_sValSuffix.m_pString = 0;
      v11->m_eType = GCSDK::CGCReportPrinter::EColumnType::eCol_Int;
      v11->m_eSummary = GCSDK::CGCReportPrinter::ESummaryType::eSummary_None;
      v11->m_nNumDecimals = 0;
      v11->m_unIntDivisor = 1;
      v11->m_bShowTime = 1;
      v12 = &this->m_Columns.m_Memory.m_pMemory[m_Size];
    }
    else
    {
      v12 = 0;
    }
    GCSDK::CGCReportPrinter::Column_t::Init(v12, pszColumn, GCSDK::CGCReportPrinter::EColumnType::eCol_UInt, eSummary);
    if ( eIntDisplay == GCSDK::CGCReportPrinter::EIntDisplayType::eIntDisplay_Memory_MB )
    {
      v4 = 1;
      CUtlString::operator=(&v12->m_sValSuffix, " MB");
      v12->m_unIntDivisor = 0x100000;
      v12->m_nNumDecimals = 2;
    }
    else
    {
      v4 = 1;
      if ( eIntDisplay == GCSDK::CGCReportPrinter::EIntDisplayType::eIntDisplay_Memory_KB )
      {
        CUtlString::operator=(&v12->m_sValSuffix, " KB");
        v12->m_unIntDivisor = 1024;
        v12->m_nNumDecimals = 1;
      }
    }
  }
  return v4;
}


// GCSDK::CGCReportPrinter::AddFloatColumn  (line 137, @0x0000000003244700, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, CUtlString, Column_t, Construct<GCSDK::CGCReportPrinter::Column_t>, Element, GrowMemory, operator[]
// calls: GCSDK::CGCReportPrinter::Column_t::Init, CUtlMemory<GCSDK::CGCReportPrinter::Column_t, int>::Grow
// callers: GCSDK::CMessageList::PrintSummary, GCSDK::CMessageList::PrintStats, GCSDK::CMessageList::PrintMultiplexStats
bool __fastcall GCSDK::CGCReportPrinter::AddFloatColumn(
        GCSDK::CGCReportPrinter *const this,
        const char *pszColumn,
        GCSDK::CGCReportPrinter::ESummaryType eSummary,
        uint32 unNumDecimal)
{
  bool result; // al
  int m_Size; // r14d
  uint8 v8; // r12
  int v9; // eax
  GCSDK::CGCReportPrinter::Column_t *v10; // rax
  GCSDK::CGCReportPrinter::Column_t *v11; // rbx
  GCSDK::CGCReportPrinter::ESummaryType eSummarya; // [rsp+Ch] [rbp-24h]

  result = 0;
  if ( this->m_Rows.m_Size <= 0 )
  {
    m_Size = this->m_Columns.m_Size;
    v8 = unNumDecimal;
    v9 = this->m_Columns.m_Size;
    if ( this->m_Columns.m_Size == this->m_Columns.m_Memory.m_nAllocationCount )
    {
      eSummarya = eSummary;
      CUtlMemory<GCSDK::CGCReportPrinter::Column_t,int>::Grow(&this->m_Columns.m_Memory, 1);
      v9 = this->m_Columns.m_Size;
      eSummary = eSummarya;
    }
    this->m_Columns.m_Size = v9 + 1;
    v10 = &this->m_Columns.m_Memory.m_pMemory[m_Size];
    if ( v10 != 0 )
    {
      v10->m_sFullName.m_pString = 0;
      v10->m_sCategory.m_pString = 0;
      v10->m_sName.m_pString = 0;
      v10->m_sValSuffix.m_pString = 0;
      v10->m_eType = GCSDK::CGCReportPrinter::EColumnType::eCol_Int;
      v10->m_eSummary = GCSDK::CGCReportPrinter::ESummaryType::eSummary_None;
      v10->m_nNumDecimals = 0;
      v10->m_unIntDivisor = 1;
      v10->m_bShowTime = 1;
      v11 = &this->m_Columns.m_Memory.m_pMemory[m_Size];
    }
    else
    {
      v11 = 0;
    }
    GCSDK::CGCReportPrinter::Column_t::Init(v11, pszColumn, GCSDK::CGCReportPrinter::EColumnType::eCol_Float, eSummary);
    v11->m_nNumDecimals = v8;
    return 1;
  }
  return result;
}


// GCSDK::CGCReportPrinter::AddSteamIDColumn  (line 152, @0x0000000003244600, libserver.so)  // inlines: AddToTail, CUtlString, Column_t, Construct<GCSDK::CGCReportPrinter::Column_t>, Element, GrowMemory, operator[]
// calls: GCSDK::CGCReportPrinter::Column_t::Init, CUtlMemory<GCSDK::CGCReportPrinter::Column_t, int>::Grow
bool __fastcall GCSDK::CGCReportPrinter::AddSteamIDColumn(
        GCSDK::CGCReportPrinter *const this,
        const char *pszColumn,
        GCSDK::CGCReportPrinter::ESummaryType eSummary)
{
  bool result; // al
  int m_Size; // r13d
  int v7; // eax
  GCSDK::CGCReportPrinter::Column_t *v8; // rax
  GCSDK::CGCReportPrinter::Column_t *v9; // rdi
  GCSDK::CGCReportPrinter::ESummaryType eSummarya; // [rsp+Ch] [rbp-24h]

  result = 0;
  if ( this->m_Rows.m_Size <= 0 )
  {
    m_Size = this->m_Columns.m_Size;
    v7 = this->m_Columns.m_Size;
    if ( this->m_Columns.m_Size == this->m_Columns.m_Memory.m_nAllocationCount )
    {
      eSummarya = eSummary;
      CUtlMemory<GCSDK::CGCReportPrinter::Column_t,int>::Grow(&this->m_Columns.m_Memory, 1);
      v7 = this->m_Columns.m_Size;
      eSummary = eSummarya;
    }
    this->m_Columns.m_Size = v7 + 1;
    v8 = &this->m_Columns.m_Memory.m_pMemory[m_Size];
    if ( v8 != 0 )
    {
      v8->m_sFullName.m_pString = 0;
      v8->m_sCategory.m_pString = 0;
      v8->m_sName.m_pString = 0;
      v8->m_sValSuffix.m_pString = 0;
      v8->m_eType = GCSDK::CGCReportPrinter::EColumnType::eCol_Int;
      v8->m_eSummary = GCSDK::CGCReportPrinter::ESummaryType::eSummary_None;
      v8->m_nNumDecimals = 0;
      v8->m_unIntDivisor = 1;
      v8->m_bShowTime = 1;
      v9 = &this->m_Columns.m_Memory.m_pMemory[m_Size];
    }
    else
    {
      v9 = 0;
    }
    GCSDK::CGCReportPrinter::Column_t::Init(v9, pszColumn, GCSDK::CGCReportPrinter::EColumnType::eCol_SteamID, eSummary);
    return 1;
  }
  return result;
}


// GCSDK::CGCReportPrinter::AddDateColumn  (line 167, @0x0000000003244500, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, CUtlString, Column_t, Construct<GCSDK::CGCReportPrinter::Column_t>, Element, GrowMemory, operator[]
// calls: GCSDK::CGCReportPrinter::Column_t::Init, CUtlMemory<GCSDK::CGCReportPrinter::Column_t, int>::Grow
bool __fastcall GCSDK::CGCReportPrinter::AddDateColumn(
        GCSDK::CGCReportPrinter *const this,
        const char *pszColumn,
        bool bShowTime,
        GCSDK::CGCReportPrinter::ESummaryType eSummary)
{
  bool result; // al
  int m_Size; // r14d
  int v9; // eax
  GCSDK::CGCReportPrinter::Column_t *v10; // rax
  GCSDK::CGCReportPrinter::Column_t *v11; // rbx
  GCSDK::CGCReportPrinter::ESummaryType eSummarya; // [rsp+Ch] [rbp-24h]

  result = 0;
  if ( this->m_Rows.m_Size <= 0 )
  {
    m_Size = this->m_Columns.m_Size;
    v9 = this->m_Columns.m_Size;
    if ( this->m_Columns.m_Size == this->m_Columns.m_Memory.m_nAllocationCount )
    {
      eSummarya = eSummary;
      CUtlMemory<GCSDK::CGCReportPrinter::Column_t,int>::Grow(&this->m_Columns.m_Memory, 1);
      v9 = this->m_Columns.m_Size;
      eSummary = eSummarya;
    }
    this->m_Columns.m_Size = v9 + 1;
    v10 = &this->m_Columns.m_Memory.m_pMemory[m_Size];
    if ( v10 != 0 )
    {
      v10->m_sFullName.m_pString = 0;
      v10->m_sCategory.m_pString = 0;
      v10->m_sName.m_pString = 0;
      v10->m_sValSuffix.m_pString = 0;
      v10->m_eType = GCSDK::CGCReportPrinter::EColumnType::eCol_Int;
      v10->m_eSummary = GCSDK::CGCReportPrinter::ESummaryType::eSummary_None;
      v10->m_nNumDecimals = 0;
      v10->m_unIntDivisor = 1;
      v10->m_bShowTime = 1;
      v11 = &this->m_Columns.m_Memory.m_pMemory[m_Size];
    }
    else
    {
      v11 = 0;
    }
    GCSDK::CGCReportPrinter::Column_t::Init(v11, pszColumn, GCSDK::CGCReportPrinter::EColumnType::eCol_Date, eSummary);
    v11->m_bShowTime = bShowTime;
    return 1;
  }
  return result;
}


// GCSDK::CGCReportPrinter::ClearData  (line 182, @0x0000000003243800, libserver.so)  // inlines: Purge, PurgeAndDeleteElements, RemoveAll, ~CCopyableUtlVector, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: operator delete, CUtlVectorBase<GCSDK::CGCReportPrinter::Variant_t, CUtlMemory<GCSDK::CGCReportPrinter::Variant_t, int> >::RemoveAll, CUtlMemory<GCSDK::CGCReportPrinter::Variant_t, int>::Purge, CUtlMemory<CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t>*, int>::Purge
void __fastcall GCSDK::CGCReportPrinter::ClearData(GCSDK::CGCReportPrinter *const this)
{
  __int64 v2; // r13
  int i; // r12d
  CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t> **m_pMemory; // rax
  CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t> *v5; // rbx
  bool v6; // zf

  v2 = 0;
  for ( i = 0; i < this->m_Rows.m_Size; ++v2 )
  {
    m_pMemory = this->m_Rows.m_Memory.m_pMemory;
    v5 = m_pMemory[v2];
    if ( v5 != 0 )
    {
      CUtlVectorBase<GCSDK::CGCReportPrinter::Variant_t,CUtlMemory<GCSDK::CGCReportPrinter::Variant_t,int>>::RemoveAll(m_pMemory[v2]);
      if ( (v5->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<GCSDK::CGCReportPrinter::Variant_t,int>::Purge(&v5->m_Memory);
        if ( (v5->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<GCSDK::CGCReportPrinter::Variant_t,int>::Purge(&v5->m_Memory);
      }
      operator delete(v5);
    }
    ++i;
  }
  v6 = (this->m_Rows.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Rows.m_Size = 0;
  if ( v6 )
    CUtlMemory<CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t> *,int>::Purge(&this->m_Rows.m_Memory);
}


// GCSDK::CGCReportPrinter::Clear  (line 188, @0x0000000003243fd0, libserver.so)  // inlines: ClearData, Purge, PurgeAndDeleteElements, RemoveAll, ~CCopyableUtlVector, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: operator delete, CUtlVectorBase<GCSDK::CGCReportPrinter::Variant_t, CUtlMemory<GCSDK::CGCReportPrinter::Variant_t, int> >::RemoveAll, CUtlMemory<GCSDK::CGCReportPrinter::Variant_t, int>::Purge, CUtlMemory<CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t>*, int>::Purge, CUtlVectorBase<GCSDK::CGCReportPrinter::Column_t, CUtlMemory<GCSDK::CGCReportPrinter::Column_t, int> >::RemoveAll, CUtlMemory<GCSDK::CGCReportPrinter::Column_t, int>::Purge
void __fastcall GCSDK::CGCReportPrinter::Clear(GCSDK::CGCReportPrinter *const this)
{
  __int64 v2; // r13
  int i; // r12d
  CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t> **m_pMemory; // rax
  CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t> *v5; // rbx
  bool v6; // zf

  v2 = 0;
  for ( i = 0; i < this->m_Rows.m_Size; ++v2 )
  {
    m_pMemory = this->m_Rows.m_Memory.m_pMemory;
    v5 = m_pMemory[v2];
    if ( v5 != 0 )
    {
      CUtlVectorBase<GCSDK::CGCReportPrinter::Variant_t,CUtlMemory<GCSDK::CGCReportPrinter::Variant_t,int>>::RemoveAll(m_pMemory[v2]);
      if ( (v5->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<GCSDK::CGCReportPrinter::Variant_t,int>::Purge(&v5->m_Memory);
        if ( (v5->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<GCSDK::CGCReportPrinter::Variant_t,int>::Purge(&v5->m_Memory);
      }
      operator delete(v5);
    }
    ++i;
  }
  v6 = (this->m_Rows.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Rows.m_Size = 0;
  if ( v6 )
    CUtlMemory<CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t> *,int>::Purge(&this->m_Rows.m_Memory);
  CUtlVectorBase<GCSDK::CGCReportPrinter::Column_t,CUtlMemory<GCSDK::CGCReportPrinter::Column_t,int>>::RemoveAll(&this->m_Columns);
  if ( (this->m_Columns.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<GCSDK::CGCReportPrinter::Column_t,int>::Purge(&this->m_Columns.m_Memory);
}


// GCSDK::CGCReportPrinter::CommitRow  (line 195, @0x0000000003244bb0, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUtlMemory, CUtlVector, CUtlVectorBase, CopyArray, CopyConstruct<CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t>*>, Element, GrowMemory, Purge, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: operator new, CUtlVectorBase<GCSDK::CGCReportPrinter::Variant_t, CUtlMemory<GCSDK::CGCReportPrinter::Variant_t, int> >::SetCount, CUtlString::operator=, CUtlVectorBase<GCSDK::CGCReportPrinter::Variant_t, CUtlMemory<GCSDK::CGCReportPrinter::Variant_t, int> >::RemoveAll, CUtlMemory<CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t>*, int>::Grow, operator delete, _Unwind_Resume, CUtlMemory<GCSDK::CGCReportPrinter::Variant_t, int>::Purge
// callers: GCSDK::ReportMessageSummary, GCSDK::CMessageList::PrintStats, GCSDK::CMessageList::PrintMultiplexStats
bool __fastcall GCSDK::CGCReportPrinter::CommitRow(GCSDK::CGCReportPrinter *const this)
{
  bool result; // al
  int m_Size; // edx
  CUtlVectorBase<GCSDK::CGCReportPrinter::Variant_t,CUtlMemory<GCSDK::CGCReportPrinter::Variant_t,int> > *v4; // r14
  int v5; // ebx
  GCSDK::CGCReportPrinter::Variant_t *m_pMemory; // r15
  __int64 v7; // rax
  const CUtlString *p_m_sStr; // rbx
  CUtlString *v9; // r12
  char *m_pString; // rax
  __int64 v11; // rbx
  int v12; // eax
  CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t> **v13; // rax
  __int64 v14; // [rsp+8h] [rbp-38h]

  result = 0;
  m_Size = this->m_RowBuilder.m_Size;
  if ( m_Size == this->m_Columns.m_Size && m_Size != 0 )
  {
    v4 = operator new(0x18u);
    v4->m_Size = 0;
    v4->m_Memory.m_pMemory = 0;
    v4->m_Memory.m_nAllocationCount = 0;
    v4->m_Memory.m_nGrowSize = 0;
    v5 = this->m_RowBuilder.m_Size;
    m_pMemory = this->m_RowBuilder.m_Memory.m_pMemory;
    CUtlVectorBase<GCSDK::CGCReportPrinter::Variant_t,CUtlMemory<GCSDK::CGCReportPrinter::Variant_t,int>>::SetCount(
      v4,
      v5);
    if ( v5 > 0 )
    {
      v7 = (v5 - 1);
      p_m_sStr = &m_pMemory->m_sStr;
      v14 = &m_pMemory[v7 + 1];
      do
      {
        v9 = (&v4->m_Memory.m_pMemory->m_sStr + p_m_sStr - m_pMemory);
        CUtlString::operator=(v9, p_m_sStr);
        CUtlString::operator=(v9 + 1, p_m_sStr + 1);
        m_pString = p_m_sStr[2].m_pString;
        p_m_sStr += 6;
        v9[2].m_pString = m_pString;
        v9[3].m_pString = p_m_sStr[-3].m_pString;
        v9[4].m_pString = p_m_sStr[-2].m_pString;
        v9[5].m_pString = p_m_sStr[-1].m_pString;
      }
      while ( p_m_sStr != v14 );
    }
    v11 = this->m_Rows.m_Size;
    v12 = this->m_Rows.m_Size;
    if ( v11 == this->m_Rows.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t> *,int>::Grow(&this->m_Rows.m_Memory, 1);
      v12 = this->m_Rows.m_Size;
    }
    this->m_Rows.m_Size = v12 + 1;
    v13 = &this->m_Rows.m_Memory.m_pMemory[v11];
    if ( v13 != 0 )
      *v13 = v4;
    CUtlVectorBase<GCSDK::CGCReportPrinter::Variant_t,CUtlMemory<GCSDK::CGCReportPrinter::Variant_t,int>>::RemoveAll(&this->m_RowBuilder);
    return 1;
  }
  return result;
}


// GCSDK::CGCReportPrinter::AddValue  (line 214, @0x0000000003244950, libserver.so)  // inlines: AddToTail, CSteamID, CUtlString, Construct<GCSDK::CGCReportPrinter::Variant_t>, Element, GrowMemory, Variant_t, operator[]
// calls: CUtlMemory<GCSDK::CGCReportPrinter::Variant_t, int>::Grow
// callers: GCSDK::CGCReportPrinter::StrValue, GCSDK::CGCReportPrinter::IntValue, GCSDK::CGCReportPrinter::UIntValue, GCSDK::CGCReportPrinter::FloatValue, GCSDK::CGCReportPrinter::SteamIDValue, GCSDK::CGCReportPrinter::DateValue
GCSDK::CGCReportPrinter::Variant_t *__fastcall GCSDK::CGCReportPrinter::AddValue(
        GCSDK::CGCReportPrinter *const this,
        GCSDK::CGCReportPrinter::EColumnType eDataType)
{
  GCSDK::CGCReportPrinter::Variant_t *result; // rax
  int m_Size; // ecx
  __int64 v5; // r12
  GCSDK::CGCReportPrinter::Variant_t *v6; // rdx

  result = 0;
  m_Size = this->m_RowBuilder.m_Size;
  if ( m_Size < this->m_Columns.m_Size )
  {
    v5 = m_Size;
    if ( this->m_Columns.m_Memory.m_pMemory[m_Size].m_eType == eDataType )
    {
      if ( m_Size == this->m_RowBuilder.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<GCSDK::CGCReportPrinter::Variant_t,int>::Grow(&this->m_RowBuilder.m_Memory, 1);
        m_Size = this->m_RowBuilder.m_Size;
      }
      this->m_RowBuilder.m_Size = m_Size + 1;
      v6 = &this->m_RowBuilder.m_Memory.m_pMemory[v5];
      if ( v6 != 0 )
      {
        v6->m_sStr.m_pString = 0;
        v6->m_sLink.m_pString = 0;
        v6->m_nInt = 0;
        v6->m_unInt = 0;
        v6->m_fFloat = 0.0;
        *&v6->m_SteamID.m_steamid.m_comp = 0;
        HIBYTE(v6->m_SteamID.m_steamid.m_unAll64Bits) = 0;
        BYTE4(v6->m_SteamID.m_steamid.m_unAll64Bits) = 0;
        BYTE5(v6->m_SteamID.m_steamid.m_unAll64Bits) = 0;
        BYTE6(v6->m_SteamID.m_steamid.m_unAll64Bits) = 0;
        return &this->m_RowBuilder.m_Memory.m_pMemory[v5];
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


// GCSDK::CGCReportPrinter::StrValue  (line 230, @0x0000000003244a10, libserver.so)
// calls: GCSDK::CGCReportPrinter::AddValue, CUtlString::operator=
// callers: GCSDK::ReportMessageSummary, GCSDK::CMessageList::PrintStats, GCSDK::CMessageList::PrintMultiplexStats
bool __fastcall GCSDK::CGCReportPrinter::StrValue(
        GCSDK::CGCReportPrinter *const this,
        const char *pszStr,
        const char *pszLink)
{
  GCSDK::CGCReportPrinter::Variant_t *v5; // rbx
  bool result; // al

  v5 = GCSDK::CGCReportPrinter::AddValue(this, GCSDK::CGCReportPrinter::EColumnType::eCol_String);
  result = 0;
  if ( v5 != 0 )
  {
    CUtlString::operator=(&v5->m_sStr, pszStr);
    CUtlString::operator=(&v5->m_sLink, pszLink);
    return 1;
  }
  return result;
}


// GCSDK::CGCReportPrinter::IntValue  (line 240, @0x0000000003244a60, libserver.so)
// calls: GCSDK::CGCReportPrinter::AddValue, CUtlString::operator=
// callers: GCSDK::ReportMessageSummary, GCSDK::CMessageList::PrintStats, GCSDK::CMessageList::PrintMultiplexStats
bool __fastcall GCSDK::CGCReportPrinter::IntValue(
        GCSDK::CGCReportPrinter *const this,
        int64 nValue,
        const char *pszLink)
{
  GCSDK::CGCReportPrinter::Variant_t *v5; // rdi
  bool result; // al

  v5 = GCSDK::CGCReportPrinter::AddValue(this, GCSDK::CGCReportPrinter::EColumnType::eCol_Int);
  result = 0;
  if ( v5 != 0 )
  {
    v5->m_nInt = nValue;
    CUtlString::operator=(&v5->m_sLink, pszLink);
    return 1;
  }
  return result;
}


// GCSDK::CGCReportPrinter::UIntValue  (line 250, @0x0000000003244aa0, libserver.so)
// calls: GCSDK::CGCReportPrinter::AddValue, CUtlString::operator=
bool __fastcall GCSDK::CGCReportPrinter::UIntValue(
        GCSDK::CGCReportPrinter *const this,
        uint64 unValue,
        const char *pszLink)
{
  GCSDK::CGCReportPrinter::Variant_t *v5; // rdi
  bool result; // al

  v5 = GCSDK::CGCReportPrinter::AddValue(this, GCSDK::CGCReportPrinter::EColumnType::eCol_UInt);
  result = 0;
  if ( v5 != 0 )
  {
    v5->m_unInt = unValue;
    CUtlString::operator=(&v5->m_sLink, pszLink);
    return 1;
  }
  return result;
}


// GCSDK::CGCReportPrinter::FloatValue  (line 260, @0x0000000003244ae0, libserver.so)
// calls: GCSDK::CGCReportPrinter::AddValue, CUtlString::operator=
// callers: GCSDK::ReportMessageSummary, GCSDK::CMessageList::PrintStats, GCSDK::CMessageList::PrintMultiplexStats
__int64 __fastcall GCSDK::CGCReportPrinter::FloatValue(
        GCSDK::CGCReportPrinter *const this,
        double a2,
        double fValue,
        const char *pszLink)
{
  GCSDK::CGCReportPrinter::Variant_t *v5; // rdi
  __int64 result; // rax
  CUtlString *p_m_sLink; // rdi

  v5 = GCSDK::CGCReportPrinter::AddValue(this, GCSDK::CGCReportPrinter::EColumnType::eCol_Float);
  result = 0;
  if ( v5 != 0 )
  {
    p_m_sLink = &v5->m_sLink;
    *&p_m_sLink[3].m_pString = a2;
    CUtlString::operator=(p_m_sLink, pszLink);
    return 1;
  }
  return result;
}


// GCSDK::CGCReportPrinter::SteamIDValue  (line 270, @0x0000000003244b30, libserver.so)
// calls: GCSDK::CGCReportPrinter::AddValue, CUtlString::operator=
bool __fastcall GCSDK::CGCReportPrinter::SteamIDValue(
        GCSDK::CGCReportPrinter *const this,
        CSteamID id,
        const char *pszLink)
{
  GCSDK::CGCReportPrinter::Variant_t *v5; // rdi
  bool result; // al

  v5 = GCSDK::CGCReportPrinter::AddValue(this, GCSDK::CGCReportPrinter::EColumnType::eCol_SteamID);
  result = 0;
  if ( v5 != 0 )
  {
    v5->m_SteamID = id;
    CUtlString::operator=(&v5->m_sLink, pszLink);
    return 1;
  }
  return result;
}


// GCSDK::CGCReportPrinter::DateValue  (line 280, @0x0000000003244b70, libserver.so)
// calls: GCSDK::CGCReportPrinter::AddValue, CUtlString::operator=
bool __fastcall GCSDK::CGCReportPrinter::DateValue(
        GCSDK::CGCReportPrinter *const this,
        RTime32 rtTime,
        const char *pszLink)
{
  GCSDK::CGCReportPrinter::Variant_t *v5; // rdi
  bool result; // al
  CUtlString *p_m_sLink; // rdi

  v5 = GCSDK::CGCReportPrinter::AddValue(this, GCSDK::CGCReportPrinter::EColumnType::eCol_Date);
  result = 0;
  if ( v5 != 0 )
  {
    p_m_sLink = &v5->m_sLink;
    p_m_sLink[1].m_pString = rtTime;
    CUtlString::operator=(p_m_sLink, pszLink);
    return 1;
  }
  return result;
}


// GCSDK::CReportRowSorter::operator()  (line 300, @0x0000000003245d90, libserver.so)  // inlines: operator char const*, operator<, operator[], swap<const CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t>*>
// calls: CUtlString::Get, V_stricmp_fast
// callers: std::__introsort_loop<CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t>**, long int, GCSDK::CReportRowSorter>
// globals: jpt_3245DDD
bool __fastcall GCSDK::CReportRowSorter::operator()(
        GCSDK::CReportRowSorter *const this,
        const GCSDK::CGCReportPrinter::TRow *pR1,
        const GCSDK::CGCReportPrinter::TRow *pR2)
{
  const GCSDK::CGCReportPrinter::TRow *v3; // rax
  __int64 m_nCol; // rbx
  GCSDK::CGCReportPrinter::Variant_t *v5; // rax
  GCSDK::CGCReportPrinter::Variant_t *v6; // rbx
  const char *v7; // r12
  const char *v8; // rax

  if ( this->m_bDescending )
  {
    v3 = pR1;
    pR1 = pR2;
    pR2 = v3;
  }
  m_nCol = this->m_nCol;
  v5 = &pR2->m_Memory.m_pMemory[m_nCol];
  v6 = &pR1->m_Memory.m_pMemory[m_nCol];
  switch ( this->m_eType )
  {
    case GCSDK::CGCReportPrinter::EColumnType::eCol_String:
      v7 = CUtlString::Get(&v5->m_sStr);
      v8 = CUtlString::Get(&v6->m_sStr);
      LODWORD(v5) = V_stricmp_fast(v8, v7) >> 31;
      break;
    case GCSDK::CGCReportPrinter::EColumnType::eCol_Int:
    case GCSDK::CGCReportPrinter::EColumnType::eCol_UInt:
    case GCSDK::CGCReportPrinter::EColumnType::eCol_Date:
      LOBYTE(v5) = v6->m_nInt < v5->m_nInt;
      break;
    case GCSDK::CGCReportPrinter::EColumnType::eCol_Float:
      LOBYTE(v5) = v5->m_fFloat > v6->m_fFloat;
      break;
    case GCSDK::CGCReportPrinter::EColumnType::eCol_SteamID:
      LOBYTE(v5) = v6->m_SteamID.m_steamid.m_unAll64Bits < v5->m_SteamID.m_steamid.m_unAll64Bits;
      break;
    default:
      LOBYTE(v5) = 0;
      break;
  }
  return v5;
}


// GCSDK::CGCReportPrinter::SetReportTitle  (line 332, @0x0000000003242f40, libserver.so)
// calls: CUtlString::operator=
void __fastcall GCSDK::CGCReportPrinter::SetReportTitle(GCSDK::CGCReportPrinter *const this, const char *pszTitle)
{
  CUtlString::operator=(&this->m_sReportTitle, pszTitle);
}


// GCSDK::CGCReportPrinter::SortAsc  (line 337, @0x0000000003245d10, libserver.so)  // inlines: SortReport
// calls: GCSDK::CGCReportPrinter::SortReport
void __fastcall GCSDK::CGCReportPrinter::SortAsc(GCSDK::CGCReportPrinter *const this, uint32 nColIndex)
{
  if ( nColIndex < this->m_Columns.m_Size )
    GCSDK::CGCReportPrinter::SortReport(this, nColIndex, 0);
}


// GCSDK::CGCReportPrinter::SortDesc  (line 342, @0x0000000003245d30, libserver.so)  // inlines: SortReport
// calls: GCSDK::CGCReportPrinter::SortReport
void __fastcall GCSDK::CGCReportPrinter::SortDesc(GCSDK::CGCReportPrinter *const this, uint32 nColIndex)
{
  if ( nColIndex < this->m_Columns.m_Size )
    GCSDK::CGCReportPrinter::SortReport(this, nColIndex, 1);
}


// GCSDK::CGCReportPrinter::SortReport  (line 348, @0x0000000003245d50, libserver.so)  // inlines: SortReport
// calls: GCSDK::CGCReportPrinter::FindColumn, GCSDK::CGCReportPrinter::SortReport
// callers: GCSDK::CMessageList::PrintStats, GCSDK::CMessageList::PrintMultiplexStats
void __fastcall GCSDK::CGCReportPrinter::SortReport(
        GCSDK::CGCReportPrinter *const this,
        const char *pszColumn,
        bool bDescending)
{
  unsigned int Column; // eax

  Column = GCSDK::CGCReportPrinter::FindColumn(this, pszColumn);
  if ( Column < this->m_Columns.m_Size )
    GCSDK::CGCReportPrinter::SortReport(this, Column, bDescending);
}


// GCSDK::CGCReportPrinter::SortReport  (line 354, @0x0000000003245bb0, libserver.so)  // inlines: __final_insertion_sort<CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t>**, GCSDK::CReportRowSorter>, __lg, __unguarded_insertion_sort<CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t>**, GCSDK::CReportRowSorter>, end, operator[], sort<CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t>**, GCSDK::CReportRowSorter>
// calls: std::__introsort_loop<CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t>**, long int, GCSDK::CReportRowSorter>, std::__insertion_sort<CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t>**, GCSDK::CReportRowSorter>, std::__unguarded_linear_insert<CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t>**, GCSDK::CReportRowSorter>
// callers: GCSDK::CGCReportPrinter::SortReport, GCSDK::CGCReportPrinter::SortAsc, GCSDK::CGCReportPrinter::SortDesc
void __fastcall GCSDK::CGCReportPrinter::SortReport(
        GCSDK::CGCReportPrinter *const this,
        uint32 nColIndex,
        bool bDescending)
{
  CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t> **m_pMemory; // r13
  GCSDK::CGCReportPrinter::EColumnType m_eType; // r14d
  __int64 m_Size; // rax
  CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t> **v7; // r12
  __int64 v8; // rbx
  CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t> **v9; // rsi
  CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t> **v10; // rbx
  CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t> **v11; // rdi
  __int64 v13; // [rsp+10h] [rbp-60h]
  __int64 v14; // [rsp+20h] [rbp-50h]

  LOBYTE(v13) = bDescending;
  m_pMemory = this->m_Rows.m_Memory.m_pMemory;
  HIDWORD(v13) = nColIndex;
  m_eType = this->m_Columns.m_Memory.m_pMemory[nColIndex].m_eType;
  m_Size = this->m_Rows.m_Size;
  v7 = &m_pMemory[m_Size];
  if ( m_pMemory != v7 )
  {
    v8 = 8 * m_Size;
    v9 = &m_pMemory[m_Size];
    _BitScanReverse64(&m_Size, (8 * m_Size) >> 3);
    std::__introsort_loop<CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t> **,long,GCSDK::CReportRowSorter>(
      m_pMemory,
      v9,
      2 * (63LL - (m_Size ^ 0x3F)),
      v13,
      m_eType);
    LODWORD(v14) = v13;
    if ( v8 <= 135 )
    {
      HIDWORD(v14) = nColIndex;
      LOBYTE(v14) = bDescending;
      std::__insertion_sort<CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t> **,GCSDK::CReportRowSorter>(
        m_pMemory,
        v7,
        v14,
        m_eType);
    }
    else
    {
      LOBYTE(v14) = bDescending;
      v10 = m_pMemory + 16;
      HIDWORD(v14) = nColIndex;
      std::__insertion_sort<CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t> **,GCSDK::CReportRowSorter>(
        m_pMemory,
        m_pMemory + 16,
        v14,
        m_eType);
      if ( v7 != m_pMemory + 16 )
      {
        do
        {
          v11 = v10++;
          std::__unguarded_linear_insert<CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t> **,GCSDK::CReportRowSorter>(
            v11,
            v14,
            m_eType);
        }
        while ( v7 != v10 );
      }
    }
  }
}


// GCSDK::CGCReportPrinter::SortReport  (line 354, @0x0000000003245cf0, libserver.so)
// calls: GCSDK::CGCReportPrinter::SortReport
void __fastcall GCSDK::CGCReportPrinter::SortReport(
        GCSDK::CGCReportPrinter *const this,
        uint32 nColIndex,
        bool bDescending)
{
  if ( this->m_Columns.m_Size > nColIndex )
    GCSDK::CGCReportPrinter::SortReport(this, nColIndex, bDescending);
}


// GCSDK::CGCReportPrinter::SetSuffixValue  (line 364, @0x0000000003242f50, libserver.so)  // inlines: operator[]
// calls: CUtlString::operator=
void __fastcall GCSDK::CGCReportPrinter::SetSuffixValue(
        GCSDK::CGCReportPrinter *const this,
        uint32 nColIndex,
        const char *pszSuffix)
{
  if ( this->m_Columns.m_Size > nColIndex )
    CUtlString::operator=(&this->m_Columns.m_Memory.m_pMemory[nColIndex].m_sValSuffix, pszSuffix);
}


// GCSDK::CGCReportPrinter::SetDecimalCount  (line 372, @0x0000000003242f90, libserver.so)  // inlines: operator[]
void __fastcall GCSDK::CGCReportPrinter::SetDecimalCount(
        GCSDK::CGCReportPrinter *const this,
        uint32 nColIndex,
        uint32 unDecimalCount)
{
  if ( this->m_Columns.m_Size > nColIndex )
    this->m_Columns.m_Memory.m_pMemory[nColIndex].m_nNumDecimals = unDecimalCount;
}


// GCSDK::CGCReportPrinter::SetIntDivisor  (line 380, @0x0000000003242fc0, libserver.so)  // inlines: operator[]
void __fastcall GCSDK::CGCReportPrinter::SetIntDivisor(
        GCSDK::CGCReportPrinter *const this,
        uint32 nColIndex,
        uint32 unDivisor)
{
  if ( this->m_Columns.m_Size > nColIndex )
    this->m_Columns.m_Memory.m_pMemory[nColIndex].m_unIntDivisor = unDivisor;
}


// GCSDK::CGCReportPrinter::ConvertColumnToPercentages  (line 388, @0x0000000003243340, libserver.so)  // inlines: CSteamID, CUtlString, Variant_t, end, operator[], ~CUtlString, ~Variant_t
// calls: GCSDK::CGCReportPrinter::ComputeRowSummary, CUtlString::FreeMemoryBlock
bool __fastcall GCSDK::CGCReportPrinter::ConvertColumnToPercentages(
        GCSDK::CGCReportPrinter *const this,
        uint32 unColumn,
        int32 nSrcColumn,
        uint32 unNumDecimals)
{
  __int64 v4; // r14
  bool v6; // bl
  uint32 v7; // r9d
  uint8 v9; // r15
  CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t> **m_pMemory; // rax
  CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t> **v11; // r8
  signed __int64 m_unInt; // r9
  __int64 v13; // rcx
  GCSDK::CGCReportPrinter::EColumnType v14; // edi
  __int64 v15; // rsi
  GCSDK::CGCReportPrinter::Variant_t *v16; // rdx
  GCSDK::CGCReportPrinter::Variant_t *v17; // r10
  double v18; // xmm0_8
  __int64 v19; // r10
  double v20; // xmm0_8
  double v21; // xmm4_8
  GCSDK::CGCReportPrinter::Column_t *v22; // r14
  uint64 v23; // [rsp+0h] [rbp-80h]
  signed int v24; // [rsp+8h] [rbp-78h]
  int64 m_nInt; // [rsp+8h] [rbp-78h]
  GCSDK::CGCReportPrinter::EColumnType eOutType; // [rsp+1Ch] [rbp-64h] BYREF
  GCSDK::CGCReportPrinter::Variant_t summary; // [rsp+20h] [rbp-60h] BYREF

  v4 = unColumn;
  v6 = 0;
  if ( this->m_Columns.m_Size <= unColumn )
    return v6;
  v7 = nSrcColumn;
  if ( this->m_Columns.m_Size <= nSrcColumn )
    return v6;
  HIBYTE(summary.m_SteamID.m_steamid.m_unAll64Bits) = 0;
  v9 = unNumDecimals;
  if ( nSrcColumn < 0 )
    v7 = unColumn;
  BYTE6(summary.m_SteamID.m_steamid.m_unAll64Bits) &= 0xFu;
  memset(&summary, 0, 44);
  v24 = v7;
  *(&summary.m_SteamID.m_steamid.m_comp + 1) &= 0xFFF00000;
  v6 = GCSDK::CGCReportPrinter::ComputeRowSummary(
         this,
         v7,
         GCSDK::CGCReportPrinter::ESummaryType::eSummary_Total,
         &eOutType,
         &summary);
  if ( v6 )
  {
    m_pMemory = this->m_Rows.m_Memory.m_pMemory;
    v11 = &m_pMemory[this->m_Rows.m_Size];
    if ( m_pMemory != v11 )
    {
      m_unInt = summary.m_unInt;
      v13 = v24;
      v14 = eOutType;
      m_nInt = summary.m_nInt;
      v23 = summary.m_unInt & 1 | (summary.m_unInt >> 1);
      v15 = v4;
      while ( 1 )
      {
        v16 = (*m_pMemory)->m_Memory.m_pMemory;
        v17 = &v16[v13];
        if ( v14 == GCSDK::CGCReportPrinter::EColumnType::eCol_UInt )
          break;
        if ( v14 == GCSDK::CGCReportPrinter::EColumnType::eCol_Float )
        {
          if ( summary.m_fFloat == 0.0 )
          {
            ++m_pMemory;
            v16[v15].m_fFloat = 0.0;
            if ( v11 == m_pMemory )
              goto LABEL_24;
          }
          else
          {
            ++m_pMemory;
            v16[v15].m_fFloat = v17->m_fFloat / summary.m_fFloat * 100.0;
            if ( v11 == m_pMemory )
              goto LABEL_24;
          }
        }
        else
        {
          if ( v14 != GCSDK::CGCReportPrinter::EColumnType::eCol_Int )
          {
            v6 = 0;
            goto LABEL_13;
          }
          v18 = 0.0;
          if ( m_nInt != 0 )
          {
            ++m_pMemory;
            v16[v15].m_fFloat = v17->m_nInt / m_nInt * 100.0;
            if ( v11 == m_pMemory )
              goto LABEL_24;
          }
          else
          {
LABEL_23:
            ++m_pMemory;
            v16[v15].m_fFloat = v18;
            if ( v11 == m_pMemory )
              goto LABEL_24;
          }
        }
      }
      v18 = 0.0;
      if ( m_unInt != 0 )
      {
        v19 = v17->m_unInt;
        if ( v19 < 0 )
          v20 = (v19 & 1 | (v19 >> 1)) + (v19 & 1 | (v19 >> 1));
        else
          v20 = v19;
        if ( m_unInt < 0 )
          v21 = v23 + v23;
        else
          v21 = m_unInt;
        v18 = v20 / v21 * 100.0;
      }
      goto LABEL_23;
    }
LABEL_24:
    v22 = &this->m_Columns.m_Memory.m_pMemory[v4];
    v22->m_eType = GCSDK::CGCReportPrinter::EColumnType::eCol_Float;
    v22->m_nNumDecimals = v9;
  }
LABEL_13:
  if ( summary.m_sLink.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&summary.m_sLink);
  if ( summary.m_sStr.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&summary.m_sStr);
  return v6;
}


// GCSDK::CGCReportPrinter::FindColumn  (line 506, @0x0000000003242ff0, libserver.so)  // inlines: operator char const*, operator[]
// calls: CUtlString::Get, V_stricmp_fast
// callers: GCSDK::CGCReportPrinter::SortReport
int32 __fastcall GCSDK::CGCReportPrinter::FindColumn(const GCSDK::CGCReportPrinter *const this, const char *pszName)
{
  __int64 v4; // r12
  int32 v5; // ebx
  const char *v6; // rax

  v4 = 0;
  v5 = 0;
  if ( this->m_Columns.m_Size <= 0 )
    return -1;
  while ( 1 )
  {
    v6 = CUtlString::Get(&this->m_Columns.m_Memory.m_pMemory[v4].m_sFullName);
    if ( V_stricmp_fast(v6, pszName) == 0 )
      break;
    ++v5;
    ++v4;
    if ( this->m_Columns.m_Size <= v5 )
      return -1;
  }
  return v5;
}


// GCSDK::CGCReportPrinter::ComputeRowSummary  (line 598, @0x0000000003243060, libserver.so)  // inlines: operator[]
// callers: GCSDK::CGCReportPrinter::ConvertColumnToPercentages, GCSDK::CGCReportPrinter::PrintReport
// globals: jpt_32430F2
bool __fastcall GCSDK::CGCReportPrinter::ComputeRowSummary(
        GCSDK::CGCReportPrinter *const this,
        uint32 nCol,
        GCSDK::CGCReportPrinter::ESummaryType eSummary,
        GCSDK::CGCReportPrinter::EColumnType *const outEType,
        GCSDK::CGCReportPrinter::Variant_t *const outValue)
{
  bool v5; // r9
  GCSDK::CGCReportPrinter::Column_t *v6; // r12
  GCSDK::CGCReportPrinter::EColumnType m_eType; // eax
  int m_Size; // r10d
  __int64 v9; // rbx
  int v10; // ecx
  __int64 v11; // rsi
  __int64 v12; // rbx
  char v13; // al
  char *v14; // r13
  int v16; // r9d
  uint64 m_unInt; // r9
  int v18; // r9d
  GCSDK::CGCReportPrinter::EColumnType v19; // r9d
  double v20; // xmm0_8
  int64 m_nInt; // r9
  __int128 v22; // rax

  v5 = 0;
  if ( eSummary == GCSDK::CGCReportPrinter::ESummaryType::eSummary_None )
    return v5;
  v6 = &this->m_Columns.m_Memory.m_pMemory[nCol];
  m_eType = GCSDK::CGCReportPrinter::EColumnType::eCol_UInt;
  if ( eSummary != GCSDK::CGCReportPrinter::ESummaryType::eSummary_Count )
    m_eType = v6->m_eType;
  *outEType = m_eType;
  m_Size = this->m_Rows.m_Size;
  if ( m_Size > 0 )
  {
    v9 = 3LL * nCol;
    v10 = 0;
    v11 = 0;
    v12 = 16 * v9;
    v13 = 1;
    while ( 1 )
    {
      v14 = this->m_Rows.m_Memory.m_pMemory[v11]->m_Memory.m_pMemory + v12;
      switch ( eSummary )
      {
        case GCSDK::CGCReportPrinter::ESummaryType::eSummary_Total:
        case GCSDK::CGCReportPrinter::ESummaryType::eSummary_Avg:
          v19 = v6->m_eType;
          if ( v19 == GCSDK::CGCReportPrinter::EColumnType::eCol_UInt )
          {
            m_unInt = *(v14 + 3);
            if ( v10 != 0 )
              m_unInt += outValue->m_unInt;
            goto LABEL_26;
          }
          if ( v19 == GCSDK::CGCReportPrinter::EColumnType::eCol_Float )
          {
            if ( v10 == 0 )
              goto LABEL_32;
            v20 = outValue->m_fFloat + *(v14 + 4);
            goto LABEL_33;
          }
          if ( v19 != GCSDK::CGCReportPrinter::EColumnType::eCol_Int )
            goto LABEL_30;
          if ( v10 != 0 )
          {
            m_nInt = *(v14 + 2) + outValue->m_nInt;
            goto LABEL_38;
          }
          goto LABEL_37;
        case GCSDK::CGCReportPrinter::ESummaryType::eSummary_Max:
          v18 = v6->m_eType;
          if ( v18 == 2 )
            goto LABEL_23;
          if ( v18 <= 2 )
          {
            if ( v18 != 1 )
              goto LABEL_30;
            if ( v10 != 0 )
            {
              m_nInt = outValue->m_nInt;
              if ( *(v14 + 2) >= m_nInt )
                m_nInt = *(v14 + 2);
              goto LABEL_38;
            }
            goto LABEL_37;
          }
          if ( v18 == 3 )
          {
            if ( v10 == 0 )
              goto LABEL_32;
            v20 = fmax(outValue->m_fFloat, *(v14 + 4));
            goto LABEL_33;
          }
          if ( v18 != 5 )
            goto LABEL_30;
LABEL_23:
          if ( v10 != 0 )
          {
            m_unInt = outValue->m_unInt;
            if ( *(v14 + 3) >= m_unInt )
              m_unInt = *(v14 + 3);
            goto LABEL_26;
          }
          goto LABEL_39;
        case GCSDK::CGCReportPrinter::ESummaryType::eSummary_Min:
          v16 = v6->m_eType;
          if ( v16 == 2 )
            goto LABEL_15;
          if ( v16 <= 2 )
          {
            if ( v16 != 1 )
            {
LABEL_30:
              v13 = 0;
              goto LABEL_8;
            }
            if ( v10 != 0 )
            {
              m_nInt = outValue->m_nInt;
              if ( *(v14 + 2) <= m_nInt )
                m_nInt = *(v14 + 2);
            }
            else
            {
LABEL_37:
              m_nInt = *(v14 + 2);
            }
LABEL_38:
            outValue->m_nInt = m_nInt;
            m_Size = this->m_Rows.m_Size;
          }
          else if ( v16 == 3 )
          {
            if ( v10 != 0 )
              v20 = fmin(outValue->m_fFloat, *(v14 + 4));
            else
LABEL_32:
              v20 = *(v14 + 4);
LABEL_33:
            outValue->m_fFloat = v20;
            m_Size = this->m_Rows.m_Size;
          }
          else
          {
            if ( v16 != 5 )
              goto LABEL_30;
LABEL_15:
            if ( v10 != 0 )
            {
              m_unInt = outValue->m_unInt;
              if ( *(v14 + 3) <= m_unInt )
                m_unInt = *(v14 + 3);
            }
            else
            {
LABEL_39:
              m_unInt = *(v14 + 3);
            }
LABEL_26:
            outValue->m_unInt = m_unInt;
            m_Size = this->m_Rows.m_Size;
          }
LABEL_8:
          ++v10;
          ++v11;
          if ( m_Size <= v10 )
            goto LABEL_9;
          break;
        case GCSDK::CGCReportPrinter::ESummaryType::eSummary_Count:
          ++outValue->m_unInt;
          m_Size = this->m_Rows.m_Size;
          goto LABEL_8;
        default:
          goto LABEL_30;
      }
    }
  }
  v13 = 1;
LABEL_9:
  v5 = v13;
  if ( eSummary != GCSDK::CGCReportPrinter::ESummaryType::eSummary_Avg )
    return v5;
  v22 = outValue->m_nInt;
  outValue->m_fFloat = outValue->m_fFloat / m_Size;
  outValue->m_nInt = v22 / this->m_Rows.m_Size;
  outValue->m_unInt /= this->m_Rows.m_Size;
  return v5;
}


// GCSDK::CGCReportPrinter::ComputeValueWidth  (line 674, @0x00000000032435e0, libserver.so)  // inlines: CountDigits<long long int>, CountDigits<long long unsigned int>, CountIntWidth<long long int>, CountIntWidth<long long unsigned int>, operator char const*
// calls: CSteamID::Render, strlen, CUtlString::Get
// callers: GCSDK::CGCReportPrinter::PrintReport
// globals: jpt_3243600
uint32 __fastcall GCSDK::CGCReportPrinter::ComputeValueWidth(
        GCSDK::CGCReportPrinter::EColumnType eType,
        const GCSDK::CGCReportPrinter::Variant_t *const v,
        const GCSDK::CGCReportPrinter::Column_t *const colInfo)
{
  const char *v3; // rax
  uint32 result; // eax
  const char *v5; // rax
  uint32 m_unIntDivisor; // eax
  uint8 m_nNumDecimals; // r9
  int64 m_nInt; // rcx
  unsigned __int64 v9; // rax
  signed __int64 v10; // rcx
  int v11; // esi
  int v12; // edx
  uint32 v13; // eax
  uint64 m_unInt; // rdx
  unsigned __int64 v15; // rcx
  double m_fFloat; // xmm0_8
  int v17; // edi
  __int64 v18; // rsi
  unsigned __int64 v19; // rsi
  uint32 v20; // esi

  switch ( eType )
  {
    case GCSDK::CGCReportPrinter::EColumnType::eCol_String:
      v5 = CUtlString::Get(&v->m_sStr);
      result = strlen(v5);
      break;
    case GCSDK::CGCReportPrinter::EColumnType::eCol_Int:
      m_unIntDivisor = colInfo->m_unIntDivisor;
      m_nNumDecimals = colInfo->m_nNumDecimals;
      m_nInt = v->m_nInt;
      if ( m_unIntDivisor > 1 )
      {
        v9 = m_nInt / m_unIntDivisor;
        v10 = v9;
        v11 = 1;
        if ( v9 != 0 )
        {
          v11 = v9 >> 63;
          do
          {
            ++v11;
            v10 /= 10LL;
          }
          while ( v10 != 0 );
        }
        goto LABEL_10;
      }
      result = 1;
      if ( m_nInt != 0 )
      {
        v19 = m_nInt >> 63;
        do
        {
          LODWORD(v19) = v19 + 1;
          m_nInt /= 10LL;
        }
        while ( m_nInt != 0 );
        result = v19;
      }
      break;
    case GCSDK::CGCReportPrinter::EColumnType::eCol_UInt:
      v13 = colInfo->m_unIntDivisor;
      m_nNumDecimals = colInfo->m_nNumDecimals;
      m_unInt = v->m_unInt;
      if ( v13 <= 1 )
      {
        result = 1;
        if ( m_unInt != 0 )
        {
          v20 = 0;
          do
          {
            ++v20;
            m_unInt /= 0xAuLL;
          }
          while ( m_unInt != 0 );
          result = v20;
        }
      }
      else
      {
        v15 = m_unInt / v13;
        v11 = 1;
        if ( v15 != 0 )
        {
          LOBYTE(v11) = 0;
          do
          {
            ++v11;
            v15 /= 0xAu;
          }
          while ( v15 != 0 );
        }
LABEL_10:
        v12 = 0;
        if ( m_nNumDecimals != 0 )
          v12 = m_nNumDecimals + 1;
        result = v12 + v11;
      }
      break;
    case GCSDK::CGCReportPrinter::EColumnType::eCol_Float:
      m_fFloat = v->m_fFloat;
      v17 = 1;
      v18 = m_fFloat;
      if ( m_fFloat != 0 )
      {
        v17 = 0;
        do
        {
          ++v17;
          v18 /= 10;
        }
        while ( v18 != 0 );
      }
      result = v17 + colInfo->m_nNumDecimals + 1;
      break;
    case GCSDK::CGCReportPrinter::EColumnType::eCol_SteamID:
      v3 = CSteamID::Render(&v->m_SteamID);
      result = strlen(v3);
      break;
    case GCSDK::CGCReportPrinter::EColumnType::eCol_Date:
      result = !colInfo->m_bShowTime ? 10 : 19;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


// GCSDK::CGCReportPrinter::FormatValue  (line 701, @0x0000000003243bc0, libserver.so)  // inlines: Append, CRTime, Clear, GetIntValueDisplay, GetUIntValueDisplay, IsEmpty, String, operator char const*
// calls: CFmtStrN<1024, false>::AppendFormat, V_pow, CUtlString::Get, CSteamID::Render, CRTime::GetSecond, CRTime::GetMinute, CRTime::GetHour, CRTime::GetYear, CRTime::GetDayOfMonth, CRTime::GetMonth, CFmtStrN<1024, false>::sprintf
// callers: GCSDK::CGCReportPrinter::PrintReport
// strings: ".%0*llu", "%02u/%02u/%04u %02u:%02u:%02u", "%.*f", "%02u/%02u/%04u"
// globals: jpt_3243BFE
void __fastcall GCSDK::CGCReportPrinter::FormatValue(
        GCSDK::CGCReportPrinter::EColumnType eType,
        const GCSDK::CGCReportPrinter::Variant_t *const v,
        const GCSDK::CGCReportPrinter::Column_t *const col,
        CFmtStr1024 *const outValue)
{
  uint32 v6; // ecx
  int v7; // r13d
  uint64 m_unInt; // rax
  signed int v9; // r14d
  unsigned __int64 v10; // r15
  double v11; // xmm0_8
  unsigned __int64 v12; // rcx
  char *m_pString; // rax
  const char *v14; // rax
  int v15; // esi
  char *v16; // rdx
  unsigned __int64 v17; // rcx
  const char *v18; // rax
  int v19; // ecx
  char *v20; // rsi
  unsigned __int64 v21; // rdx
  int64 v22; // rax
  bool v23; // zf
  int Second; // r15d
  int Minute; // r14d
  int v26; // eax
  const char *v27; // rax
  int m_nLength; // ecx
  unsigned __int64 v29; // rcx
  __int64 m_unIntDivisor; // r14
  int m_nNumDecimals; // r15d
  int64 m_nInt; // r13
  double v33; // xmm0_8
  unsigned __int64 v34; // rcx
  int Year; // r15d
  int DayOfMonth; // r14d
  int Month; // eax
  int Hour; // [rsp+14h] [rbp-4Ch]
  int v39; // [rsp+18h] [rbp-48h]
  int v40; // [rsp+1Ch] [rbp-44h]
  CRTime rt; // [rsp+20h] [rbp-40h] BYREF

  outValue->m_szBuf[0] = 0;
  outValue->m_nLength = 0;
  switch ( eType )
  {
    case GCSDK::CGCReportPrinter::EColumnType::eCol_String:
      v27 = CUtlString::Get(&v->m_sStr);
      m_nLength = outValue->m_nLength;
      v20 = &outValue->m_szBuf[m_nLength];
      v29 = &v20[1024 - m_nLength - 1];
      if ( v20 < v29 )
      {
        do
        {
          if ( *v27 == 0 )
            break;
          *v20++ = *v27++;
        }
        while ( v20 != v29 );
      }
      goto LABEL_19;
    case GCSDK::CGCReportPrinter::EColumnType::eCol_Int:
      m_unIntDivisor = col->m_unIntDivisor;
      m_nNumDecimals = col->m_nNumDecimals;
      m_nInt = v->m_nInt;
      if ( m_unIntDivisor <= 1 )
      {
        CFmtStrN<1024,false>::AppendFormat(outValue, "%lld", v->m_nInt);
      }
      else
      {
        CFmtStrN<1024,false>::AppendFormat(outValue, "%lld", m_nInt / m_unIntDivisor);
        if ( m_nNumDecimals != 0 )
        {
          v33 = V_pow(10.0, m_nNumDecimals) * ((abs64(m_nInt) % m_unIntDivisor) / m_unIntDivisor);
          if ( v33 >= 9.223372036854776e18 )
            v34 = (v33 - 9.223372036854776e18) ^ 0x8000000000000000LL;
          else
            v34 = v33;
          CFmtStrN<1024,false>::AppendFormat(outValue, ".%0*llu", m_nNumDecimals, v34);
        }
      }
      break;
    case GCSDK::CGCReportPrinter::EColumnType::eCol_UInt:
      v6 = col->m_unIntDivisor;
      v7 = col->m_nNumDecimals;
      m_unInt = v->m_unInt;
      if ( v6 <= 1 )
      {
        CFmtStrN<1024,false>::AppendFormat(outValue, "%llu", m_unInt);
      }
      else
      {
        v9 = col->m_unIntDivisor;
        v10 = m_unInt % v6;
        CFmtStrN<1024,false>::AppendFormat(outValue, "%llu", m_unInt / v6);
        if ( v7 != 0 )
        {
          v11 = V_pow(10.0, v7) * (v10 / v9);
          if ( v11 >= 9.223372036854776e18 )
            v12 = (v11 - 9.223372036854776e18) ^ 0x8000000000000000LL;
          else
            v12 = v11;
          CFmtStrN<1024,false>::AppendFormat(outValue, ".%0*llu", v7, v12);
        }
      }
      break;
    case GCSDK::CGCReportPrinter::EColumnType::eCol_Float:
      CFmtStrN<1024,false>::sprintf(outValue, "%.*f", col->m_nNumDecimals, v->m_fFloat);
      break;
    case GCSDK::CGCReportPrinter::EColumnType::eCol_SteamID:
      v18 = CSteamID::Render(&v->m_SteamID);
      v19 = outValue->m_nLength;
      v20 = &outValue->m_szBuf[v19];
      v21 = &v20[1024 - v19 - 1];
      if ( v20 < v21 )
      {
        do
        {
          if ( *v18 == 0 )
            break;
          *v20++ = *v18++;
        }
        while ( v20 != v21 );
      }
LABEL_19:
      *v20 = 0;
      outValue->m_nLength = v20 - (outValue + 9);
      break;
    case GCSDK::CGCReportPrinter::EColumnType::eCol_Date:
      v22 = v->m_nInt;
      rt.m_bGMT = 0;
      v23 = !col->m_bShowTime;
      rt.m_nStartTime = v22;
      if ( v23 )
      {
        Year = CRTime::GetYear(&rt);
        DayOfMonth = CRTime::GetDayOfMonth(&rt);
        Month = CRTime::GetMonth(&rt);
        CFmtStrN<1024,false>::sprintf(outValue, "%02u/%02u/%04u", Month + 1, DayOfMonth, Year);
      }
      else
      {
        Second = CRTime::GetSecond(&rt);
        Minute = CRTime::GetMinute(&rt);
        Hour = CRTime::GetHour(&rt);
        v39 = CRTime::GetYear(&rt);
        v40 = CRTime::GetDayOfMonth(&rt);
        v26 = CRTime::GetMonth(&rt);
        CFmtStrN<1024,false>::sprintf(
          outValue,
          "%02u/%02u/%04u %02u:%02u:%02u",
          v26 + 1,
          v40,
          v39,
          Hour,
          Minute,
          Second);
      }
      break;
    default:
      break;
  }
  m_pString = col->m_sValSuffix.m_pString;
  if ( m_pString != 0 && *m_pString != 0 )
  {
    v14 = CUtlString::Get(&col->m_sValSuffix);
    v15 = outValue->m_nLength;
    v16 = &outValue->m_szBuf[v15];
    v17 = &v16[1024 - v15 - 1];
    if ( v16 < v17 )
    {
      do
      {
        if ( *v14 == 0 )
          break;
        *v16++ = *v14++;
      }
      while ( v16 != v17 );
    }
    *v16 = 0;
    outValue->m_nLength = v16 - (outValue + 9);
  }
}


// GCSDK::CGCReportPrinter::BuildCategoryHeader  (line 752, @0x00000000032438c0, libserver.so)  // inlines: Append, AppendChar, IsEmpty, Length, V_strlen, operator char const*, operator[]
// calls: strlen, CUtlString::Get, V_stricmp_fast, CFmtStrN<1024, false>::AppendFormat
// callers: GCSDK::CGCReportPrinter::PrintReport
// strings: "%*s "
bool __fastcall GCSDK::CGCReportPrinter::BuildCategoryHeader(
        GCSDK::CGCReportPrinter *const this,
        CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > *const vecColWidths,
        CFmtStr1024 *const outValue)
{
  int m_Size; // edi
  GCSDK::CGCReportPrinter::Column_t *m_pMemory; // r13
  int v7; // eax
  uint32 v8; // esi
  CUtlString *p_m_sCategory; // rcx
  bool result; // al
  GCSDK::CGCReportPrinter::Column_t *v11; // r15
  uint32 v12; // r13d
  CFmtStr1024 *v13; // r12
  __int64 v14; // rbx
  __int64 v15; // rdx
  const char *m_pString; // rdi
  unsigned int v17; // edx
  uint32 v18; // r12d
  unsigned int v19; // r13d
  __int64 v20; // rbx
  const char *v21; // rax
  unsigned int v22; // ecx
  unsigned int v23; // ebx
  int i; // eax
  int m_nLength; // edx
  __int64 v26; // rsi
  int v27; // edx
  const char *v28; // rax
  int v29; // esi
  char *v30; // rcx
  unsigned __int64 v31; // rsi
  int v32; // eax
  int j; // edx
  __int64 v34; // rcx
  __int64 v35; // rdx
  int v36; // eax
  int v37; // edx
  __int64 v38; // rcx
  int v39; // edx
  __int64 v40; // [rsp+0h] [rbp-70h]
  int v41; // [rsp+8h] [rbp-68h]
  CFmtStr1024 *v42; // [rsp+10h] [rbp-60h]
  unsigned int unCatWidth; // [rsp+18h] [rbp-58h]
  const CUtlString *sCategory; // [rsp+28h] [rbp-48h]
  uint32 unLastCol; // [rsp+34h] [rbp-3Ch]
  const char *v47; // [rsp+38h] [rbp-38h]

  m_Size = this->m_Columns.m_Size;
  if ( m_Size <= 0 )
    return 0;
  m_pMemory = this->m_Columns.m_Memory.m_pMemory;
  v7 = 1;
  v8 = 0;
  p_m_sCategory = &m_pMemory->m_sCategory;
  while ( 1 )
  {
    if ( p_m_sCategory->m_pString != 0 && *p_m_sCategory->m_pString != 0 )
      v8 = v7;
    p_m_sCategory += 7;
    if ( m_Size <= v7 )
      break;
    ++v7;
  }
  result = 0;
  unLastCol = v8;
  if ( v8 != 0 )
  {
    v41 = outValue + 9;
    v11 = m_pMemory;
    v12 = 0;
    v13 = outValue;
    while ( 1 )
    {
      v14 = v12;
      v15 = v12;
      m_pString = v11[v15].m_sCategory.m_pString;
      if ( m_pString != 0 && *m_pString != 0 )
      {
        ++v12;
        sCategory = &v11[v15].m_sCategory;
        unCatWidth = strlen(m_pString);
        v40 = v14;
        v17 = vecColWidths->m_Memory.m_pMemory[v14];
        if ( v12 < unLastCol )
        {
          v42 = v13;
          v18 = v12;
          v19 = vecColWidths->m_Memory.m_pMemory[v14];
          while ( 1 )
          {
            v20 = v18;
            v47 = CUtlString::Get(sCategory);
            v21 = CUtlString::Get(&v11[v18].m_sCategory);
            if ( V_stricmp_fast(v21, v47) != 0 )
              break;
            ++v18;
            v19 += vecColWidths->m_Memory.m_pMemory[v20] + 1;
            if ( v18 >= unLastCol )
              break;
            v11 = this->m_Columns.m_Memory.m_pMemory;
          }
          v17 = v19;
          v12 = v18;
          v13 = v42;
        }
        if ( unCatWidth > v17 )
        {
          v23 = 0;
          vecColWidths->m_Memory.m_pMemory[v40] = vecColWidths->m_Memory.m_pMemory[v40] + unCatWidth - v17;
        }
        else
        {
          v22 = (v17 - unCatWidth + 1) >> 1;
          v23 = v17 - unCatWidth - v22;
          if ( v22 != 0 )
          {
            for ( i = 0; i != v22; ++i )
            {
              m_nLength = v13->m_nLength;
              if ( m_nLength <= 1022 )
              {
                v26 = m_nLength;
                v27 = m_nLength + 1;
                v13->m_szBuf[v26] = 95;
                v13->m_nLength = v27;
                v13->m_szBuf[v27] = 0;
              }
            }
          }
        }
        v28 = CUtlString::Get(sCategory);
        v29 = v13->m_nLength;
        v30 = &v13->m_szBuf[v29];
        v31 = &v30[1024 - v29 - 1];
        if ( v30 < v31 )
        {
          do
          {
            if ( *v28 == 0 )
              break;
            *v30++ = *v28++;
          }
          while ( v30 != v31 );
        }
        *v30 = 0;
        v32 = v30 - v41;
        v13->m_nLength = v30 - v41;
        if ( v23 != 0 )
        {
          for ( j = 0; j != v23; ++j )
          {
            if ( v32 <= 1022 )
            {
              v34 = v32++;
              v13->m_szBuf[v34] = 95;
              v13->m_nLength = v32;
              v13->m_szBuf[v32] = 0;
            }
          }
        }
        if ( v32 <= 1022 )
        {
          v35 = v32;
          v36 = v32 + 1;
          v13->m_szBuf[v35] = 32;
          v13->m_nLength = v36;
          v13->m_szBuf[v36] = 0;
        }
        if ( v12 >= unLastCol )
        {
LABEL_38:
          v37 = v13->m_nLength;
          result = 1;
          if ( v37 <= 1022 )
          {
            v38 = v37;
            v39 = v37 + 1;
            v13->m_szBuf[v38] = 10;
            v13->m_nLength = v39;
            v13->m_szBuf[v39] = 0;
          }
          return result;
        }
      }
      else
      {
        ++v12;
        CFmtStrN<1024,false>::AppendFormat(v13, "%*s ", vecColWidths->m_Memory.m_pMemory[v14], "");
        if ( v12 >= unLastCol )
          goto LABEL_38;
      }
      v11 = this->m_Columns.m_Memory.m_pMemory;
    }
  }
  return result;
}


// GCSDK::PrintReportTitle  (line 828, @0x000000000199aef9, libserver.so)  // inlines: Append, AppendChar, CFmtStrN, InitQuietTruncation, IsEmpty, Length, V_strlen, end, operator char const*
// calls: CUtlString::Get, GCSDK::CGCEmitGroup::Internal_Msg, __stack_chk_fail
// callers: GCSDK::CGCReportPrinter::PrintReport
void __fastcall GCSDK::PrintReportTitle(
        GCSDK::CGCEmitGroup *const eg,
        const CUtlString *const sTitle,
        const CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > *const vecColWidths)
{
  char *m_pString; // rdi
  __int64 m_Size; // rcx
  unsigned int *m_pMemory; // rax
  unsigned int v7; // r8d
  unsigned int *v8; // rdx
  unsigned __int64 v9; // kr08_8
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // r12d
  unsigned int v14; // ecx
  int v15; // r12d
  __int64 v16; // rdi
  const char *v17; // rax
  char *v18; // rcx
  unsigned __int64 v19; // rdi
  int v20; // ecx
  int i; // eax
  __int64 v22; // rsi
  CFmtStr1024 vMsg; // [rsp+0h] [rbp-430h] BYREF
  unsigned __int64 v24; // [rsp+418h] [rbp-18h]

  v24 = __readfsqword(0x28u);
  m_pString = sTitle->m_pString;
  if ( sTitle->m_pString != 0 && *m_pString != 0 )
  {
    m_Size = vecColWidths->m_Size;
    if ( m_Size != 0 )
    {
      m_pMemory = vecColWidths->m_Memory.m_pMemory;
      v7 = m_Size - 1;
      v8 = &m_pMemory[m_Size];
      while ( m_pMemory != v8 )
        v7 += *m_pMemory++;
      v9 = strlen(m_pString) + 1;
      vMsg.m_bQuietTruncation = 0;
      vMsg._vptr_CFmtStrN = &off_3FCABA0;
      vMsg.m_szBuf[0] = 0;
      v10 = v9 - 1;
      if ( v9 - 1 >= v7 )
        v7 = v9 - 1;
      v11 = 0;
      v12 = 0;
      v13 = v7 - v10;
      v14 = (v7 - v10 + 1) >> 1;
      v15 = v13 - v14;
      while ( v12 != v14 )
      {
        if ( v11 <= 1022 )
        {
          v16 = v11++;
          vMsg.m_szBuf[v16] = 61;
          vMsg.m_szBuf[v11] = 0;
        }
        ++v12;
      }
      vMsg.m_nLength = v11;
      v17 = CUtlString::Get(sTitle);
      v18 = &vMsg.m_szBuf[vMsg.m_nLength];
      v19 = &v18[1024 - vMsg.m_nLength - 1];
      while ( v19 > v18 && *v17 != 0 )
        *v18++ = *v17++;
      *v18 = 0;
      v20 = v18 - (&vMsg + 9);
      for ( i = 0; i != v15; ++i )
      {
        if ( v20 <= 1022 )
        {
          v22 = v20++;
          vMsg.m_szBuf[v22] = 61;
          vMsg.m_szBuf[v20] = 0;
        }
      }
      vMsg.m_nLength = v20;
      GCSDK::CGCEmitGroup::Internal_Msg(eg, "%s\n", vMsg.m_szBuf);
    }
  }
}


// GCSDK::CGCReportPrinter::PrintReport  (line 857, @0x0000000003244d40, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, Append, AppendChar, CFmtStrN, CSteamID, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Clear, Construct<GCSDK::CGCReportPrinter::PrintReport(GCSDK::CGCEmitGroup&, uint32, bool)::Summary_t>, CopyConstruct<unsigned int>, Destruct<GCSDK::CGCReportPrinter::PrintReport(GCSDK::CGCEmitGroup&, uint32, bool)::Summary_t>, Element, EnsureCapacity, Grow, GrowMemory, InitQuietTruncation, IsEmpty, Length, Purge, RemoveAll, String, Summary_t, V_strlen, Variant_t, memcpy, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~Summary_t, ~Variant_t
// calls: strlen, GCSDK::CGCReportPrinter::ComputeRowSummary, GCSDK::CGCReportPrinter::ComputeValueWidth, CUtlMemory<unsigned int, int>::Grow, UtlMemory_CalcNewAllocationCount, memcpy, GCSDK::CGCReportPrinter::BuildCategoryHeader, GCSDK::PrintReportTitle, GCSDK::CGCEmitGroup::Internal_Msg, CUtlString::Get, CFmtStrN<1024, false>::AppendFormat, GCSDK::CGCReportPrinter::FormatValue (18 total)
// callers: GCSDK::CMessageList::PrintSummary, GCSDK::CMessageList::PrintStats, GCSDK::CMessageList::PrintMultiplexStats
// strings: "%*s", "<link cmd=\"%s\">", "</link>", "%*s "
void __fastcall GCSDK::CGCReportPrinter::PrintReport(
        GCSDK::CGCReportPrinter *const this,
        GCSDK::CGCEmitGroup *const eg,
        uint32 nTop,
        bool bAllowLinks)
{
  int m_Size; // ebx
  unsigned int *v6; // rax
  int m_nAllocationCount; // ebx
  int v8; // eax
  GCSDK::CGCReportPrinter::Column_t *v9; // r12
  const char *m_pString; // rdi
  uint32 v11; // eax
  int v12; // r14d
  GCSDK::CGCReportPrinter::PrintReport::Summary_t *m_pMemory; // rdi
  unsigned __int64 v14; // rbx
  GCSDK::CGCReportPrinter::PrintReport::Summary_t *v15; // rax
  GCSDK::CGCReportPrinter::PrintReport::Summary_t *v16; // rbx
  __int64 v17; // rbx
  uint32 v18; // eax
  const GCSDK::CGCReportPrinter::Variant_t *v19; // r13
  const char *v20; // rdi
  __int64 v21; // rbx
  int v22; // eax
  unsigned int *v23; // rax
  GCSDK::CGCReportPrinter::EColumnType m_eType; // edi
  int v25; // r13d
  int i; // ebx
  __int64 v27; // rax
  GCSDK::CGCReportPrinter::PrintReport::Summary_t *v28; // rax
  GCSDK::CGCReportPrinter::PrintReport::Summary_t *v29; // r13
  int v30; // r14d
  __int64 v31; // r12
  int v32; // r13d
  int v33; // eax
  unsigned int v34; // ebx
  const char *v35; // rax
  int m_nLength; // eax
  int v37; // edx
  int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  int v41; // r13d
  int v42; // ebx
  __int64 v43; // rbx
  GCSDK::CGCReportPrinter::Column_t *v44; // r12
  GCSDK::CGCReportPrinter::Variant_t *v45; // r13
  unsigned int v46; // r14d
  int v47; // r14d
  int v48; // edx
  int j; // eax
  __int64 v50; // rcx
  char *v51; // rax
  const char *v52; // rax
  char *v53; // rax
  unsigned __int64 v54; // rsi
  char v55; // dl
  char *v56; // rcx
  unsigned int v57; // edx
  char *v58; // rax
  unsigned __int64 v59; // rsi
  const char *v60; // rdx
  char v61; // cl
  int v62; // ecx
  int v63; // eax
  uint32 v64; // eax
  int v65; // r11d
  __int64 v66; // r13
  __int64 v67; // rbx
  int v68; // r12d
  const char *v69; // rcx
  unsigned int v70; // r14d
  unsigned __int64 v71; // rsi
  char v72; // dl
  char *v73; // rcx
  const char *v74; // rax
  char *v75; // rdx
  unsigned __int64 v76; // rsi
  int v77; // eax
  int v78; // ebx
  __int64 k; // r13
  CUtlString *v80; // r12
  __int64 v81; // [rsp+18h] [rbp-CF8h]
  int v85; // [rsp+40h] [rbp-CD0h]
  CFmtStr1024 *outValue; // [rsp+48h] [rbp-CC8h]
  __int64 nCol; // [rsp+50h] [rbp-CC0h]
  __int64 nCola; // [rsp+50h] [rbp-CC0h]
  uint32 nColWidth; // [rsp+58h] [rbp-CB8h]
  int nColWidtha; // [rsp+58h] [rbp-CB8h]
  CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > vColWidths; // [rsp+60h] [rbp-CB0h] BYREF
  CUtlVector<GCSDK::CGCReportPrinter::PrintReport(GCSDK::CGCEmitGroup&,uint32,bool)::Summary_t,CUtlMemory<GCSDK::CGCReportPrinter::PrintReport(GCSDK::CGCEmitGroup&,uint32,bool)::Summary_t,int> > vSummary; // [rsp+80h] [rbp-C90h] BYREF
  CFmtStr1024 vMsg; // [rsp+A0h] [rbp-C70h] BYREF
  CFmtStr1024 vSeparator; // [rsp+4B0h] [rbp-860h] BYREF
  __int64 (__fastcall **nValueLen)(); // [rsp+8C0h] [rbp-450h] BYREF
  char v96; // [rsp+8C8h] [rbp-448h]
  _BYTE v97[1027]; // [rsp+8C9h] [rbp-447h] BYREF
  unsigned int v98; // [rsp+CCCh] [rbp-44h]
  unsigned __int64 v99; // [rsp+CD8h] [rbp-38h]

  v99 = __readfsqword(0x28u);
  m_Size = this->m_Columns.m_Size;
  vColWidths.m_Size = 0;
  vColWidths.m_Memory.m_pMemory = 0;
  vColWidths.m_Memory.m_nAllocationCount = 0;
  vColWidths.m_Memory.m_nGrowSize = 0;
  if ( m_Size <= 0 )
  {
    vSummary.m_Size = 0;
    vSummary.m_Memory.m_pMemory = 0;
    vSummary.m_Memory.m_nAllocationCount = 0;
    vSummary.m_Memory.m_nGrowSize = 0;
  }
  else
  {
    v6 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * m_Size);
    vColWidths.m_Memory.m_nAllocationCount = m_Size;
    m_nAllocationCount = this->m_Columns.m_Size;
    vColWidths.m_Memory.m_pMemory = v6;
    vSummary.m_Size = 0;
    vSummary.m_Memory.m_pMemory = 0;
    vSummary.m_Memory.m_nAllocationCount = 0;
    vSummary.m_Memory.m_nGrowSize = 0;
    if ( m_nAllocationCount > 0 )
    {
      vSummary.m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 56LL * m_nAllocationCount);
      v8 = this->m_Columns.m_Size;
      vSummary.m_Memory.m_nAllocationCount = m_nAllocationCount;
      if ( v8 > 0 )
      {
        outValue = 0;
        nCol = 0;
        while ( 1 )
        {
          v9 = (this->m_Columns.m_Memory.m_pMemory + outValue);
          m_pString = v9->m_sName.m_pString;
          if ( m_pString != 0 )
          {
            v11 = strlen(m_pString);
            v12 = vSummary.m_Size;
            nColWidth = v11;
            if ( vSummary.m_Size != m_nAllocationCount )
              goto LABEL_7;
          }
          else
          {
            v12 = vSummary.m_Size;
            nColWidth = 0;
            if ( vSummary.m_Size != m_nAllocationCount )
            {
LABEL_7:
              m_pMemory = vSummary.m_Memory.m_pMemory;
              m_nAllocationCount = v12;
              goto LABEL_8;
            }
          }
          if ( (vSummary.m_Memory.m_nGrowSize & 0x40000000) != 0 )
          {
            m_pMemory = vSummary.m_Memory.m_pMemory;
          }
          else
          {
            v25 = m_nAllocationCount + 1;
            for ( i = UtlMemory_CalcNewAllocationCount(
                        m_nAllocationCount,
                        vSummary.m_Memory.m_nGrowSize & 0x3FFFFFFF,
                        m_nAllocationCount + 1,
                        56); v25 > i; i = (v25 + i) / 2 )
              ;
            if ( (vSummary.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
            {
              v29 = vSummary.m_Memory.m_pMemory;
              vSummary.m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 56LL * i);
              m_pMemory = vSummary.m_Memory.m_pMemory;
              if ( v29 != 0 )
              {
                memcpy(vSummary.m_Memory.m_pMemory, v29, 56LL * vSummary.m_Memory.m_nAllocationCount);
                m_pMemory = vSummary.m_Memory.m_pMemory;
              }
              vSummary.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
            }
            else
            {
              v27 = *g_pMemAlloc;
              if ( vSummary.m_Memory.m_pMemory != 0 )
                v28 = (*(v27 + 8))(g_pMemAlloc, vSummary.m_Memory.m_pMemory, 56LL * i);
              else
                v28 = (*v27)(g_pMemAlloc, 56LL * i);
              vSummary.m_Memory.m_pMemory = v28;
              m_pMemory = v28;
            }
            vSummary.m_Memory.m_nAllocationCount = i;
            m_nAllocationCount = vSummary.m_Size;
          }
LABEL_8:
          vSummary.m_Size = m_nAllocationCount + 1;
          v14 = v12;
          v15 = &m_pMemory[v14];
          if ( &m_pMemory[v14] != 0 )
          {
            v15->m_Value.m_sStr.m_pString = 0;
            v16 = &vSummary.m_Memory.m_pMemory[v14];
            v15->m_Value.m_sLink.m_pString = 0;
            v15->m_Value.m_nInt = 0;
            v15->m_Value.m_unInt = 0;
            v15->m_Value.m_fFloat = 0.0;
            *&v15->m_Value.m_SteamID.m_steamid.m_comp = 0;
            HIBYTE(v15->m_Value.m_SteamID.m_steamid.m_unAll64Bits) = 0;
            BYTE4(v15->m_Value.m_SteamID.m_steamid.m_unAll64Bits) = 0;
            BYTE5(v15->m_Value.m_SteamID.m_steamid.m_unAll64Bits) = 0;
            BYTE6(v15->m_Value.m_SteamID.m_steamid.m_unAll64Bits) = 0;
          }
          else
          {
            v16 = 0;
          }
          v16->m_bValid = 0;
          v85 = nCol;
          if ( GCSDK::CGCReportPrinter::ComputeRowSummary(this, nCol, v9->m_eSummary, &v16->m_eType, &v16->m_Value) )
          {
            m_eType = v16->m_eType;
            v16->m_bValid = 1;
            if ( GCSDK::CGCReportPrinter::ComputeValueWidth(m_eType, &v16->m_Value, v9) >= nColWidth )
              nColWidth = GCSDK::CGCReportPrinter::ComputeValueWidth(v16->m_eType, &v16->m_Value, v9);
          }
          if ( this->m_Rows.m_Size > 0 )
          {
            v17 = 0;
            do
            {
              v19 = &this->m_Rows.m_Memory.m_pMemory[v17]->m_Memory.m_pMemory[nCol];
              if ( GCSDK::CGCReportPrinter::ComputeValueWidth(v9->m_eType, v19, v9) < nColWidth )
              {
                v18 = v17 + 1;
                if ( v17 + 1 >= this->m_Rows.m_Size )
                  break;
              }
              else
              {
                nColWidth = GCSDK::CGCReportPrinter::ComputeValueWidth(v9->m_eType, v19, v9);
                v18 = v17 + 1;
                if ( v17 + 1 >= this->m_Rows.m_Size )
                  break;
              }
              ++v17;
            }
            while ( nTop > v18 || nTop == 0 );
          }
          v20 = v9->m_sValSuffix.m_pString;
          if ( v20 != 0 && *v20 != 0 )
            nColWidth += strlen(v20);
          v21 = vColWidths.m_Size;
          v22 = vColWidths.m_Size;
          if ( vColWidths.m_Size == vColWidths.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<unsigned int,int>::Grow(&vColWidths.m_Memory, 1);
            v22 = vColWidths.m_Size;
          }
          vColWidths.m_Size = v22 + 1;
          v23 = &vColWidths.m_Memory.m_pMemory[v21];
          if ( v23 != 0 )
            *v23 = nColWidth;
          ++nCol;
          outValue = (outValue + 56);
          if ( this->m_Columns.m_Size <= v85 + 1 )
            break;
          m_nAllocationCount = vSummary.m_Memory.m_nAllocationCount;
        }
      }
    }
  }
  vMsg.m_bQuietTruncation = 0;
  vMsg._vptr_CFmtStrN = &off_3FCABA0;
  vSeparator._vptr_CFmtStrN = &off_3FCABA0;
  vMsg.m_szBuf[0] = 0;
  vMsg.m_nLength = 0;
  vSeparator.m_bQuietTruncation = 0;
  vSeparator.m_szBuf[0] = 0;
  vSeparator.m_nLength = 0;
  if ( GCSDK::CGCReportPrinter::BuildCategoryHeader(this, &vColWidths, &vMsg) )
  {
    GCSDK::PrintReportTitle(eg, &this->m_sReportTitle, &vColWidths);
    GCSDK::CGCEmitGroup::Internal_Msg(eg, "%s", vMsg.m_szBuf);
  }
  else
  {
    GCSDK::PrintReportTitle(eg, &this->m_sReportTitle, &vColWidths);
  }
  v30 = this->m_Columns.m_Size;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  vMsg.m_szBuf[0] = 0;
  vMsg.m_nLength = 0;
  if ( v30 <= 0 )
    goto LABEL_60;
  do
  {
    v34 = vColWidths.m_Memory.m_pMemory[v31];
    v35 = CUtlString::Get(&this->m_Columns.m_Memory.m_pMemory[v31].m_sName);
    CFmtStrN<1024,false>::AppendFormat(&vMsg, "%*s", v34, v35);
    m_nLength = vMsg.m_nLength;
    if ( vMsg.m_nLength <= 1022 )
    {
      ++vMsg.m_nLength;
      vMsg.m_szBuf[m_nLength] = 32;
      vMsg.m_szBuf[m_nLength + 1] = 0;
    }
    v37 = 0;
    v38 = vSeparator.m_nLength;
    if ( v34 != 0 )
    {
      do
      {
        if ( v38 <= 1022 )
        {
          v39 = v38++;
          vSeparator.m_szBuf[v39] = 45;
          vSeparator.m_szBuf[v38] = 0;
        }
        ++v37;
      }
      while ( v37 != v34 );
      vSeparator.m_nLength = v38;
    }
    if ( v38 <= 1022 )
    {
      vSeparator.m_nLength = v38 + 1;
      vSeparator.m_szBuf[v38] = 32;
      vSeparator.m_szBuf[v38 + 1] = 0;
    }
    ++v32;
    ++v31;
  }
  while ( this->m_Columns.m_Size > v32 );
  v33 = vMsg.m_nLength;
  if ( vMsg.m_nLength <= 1022 )
  {
LABEL_60:
    vMsg.m_nLength = v33 + 1;
    vMsg.m_szBuf[v33] = 10;
    vMsg.m_szBuf[v33 + 1] = 0;
  }
  v40 = vSeparator.m_nLength;
  if ( vSeparator.m_nLength <= 1022 )
  {
    ++vSeparator.m_nLength;
    vSeparator.m_szBuf[v40] = 10;
    vSeparator.m_szBuf[v40 + 1] = 0;
  }
  GCSDK::CGCEmitGroup::Internal_Msg(eg, "%s", vMsg.m_szBuf);
  GCSDK::CGCEmitGroup::Internal_Msg(eg, "%s", vSeparator.m_szBuf);
  v41 = this->m_Rows.m_Size;
  v96 = 0;
  nValueLen = &off_3FCABA0;
  v97[0] = 0;
  v98 = 0;
  if ( v41 > 0 )
  {
    v81 = 0;
    while ( 1 )
    {
      v42 = this->m_Columns.m_Size;
      vMsg.m_szBuf[0] = 0;
      vMsg.m_nLength = 0;
      if ( v42 > 0 )
        break;
      v63 = 0;
LABEL_91:
      vMsg.m_nLength = v63 + 1;
      vMsg.m_szBuf[v63] = 10;
      vMsg.m_szBuf[v63 + 1] = 0;
LABEL_92:
      GCSDK::CGCEmitGroup::Internal_Msg(eg, "%s", vMsg.m_szBuf);
      v64 = v81 + 1;
      if ( this->m_Rows.m_Size > v81 + 1 )
      {
        ++v81;
        if ( nTop > v64 || nTop == 0 )
          continue;
      }
      goto LABEL_95;
    }
    v43 = 0;
    nCola = 0;
    nColWidtha = 0;
    while ( 1 )
    {
      v44 = &this->m_Columns.m_Memory.m_pMemory[nCola];
      v45 = &this->m_Rows.m_Memory.m_pMemory[v81]->m_Memory.m_pMemory[v43];
      v46 = vColWidths.m_Memory.m_pMemory[v43];
      GCSDK::CGCReportPrinter::FormatValue(v44->m_eType, v45, v44, &nValueLen);
      if ( v46 >= v98 )
      {
        v47 = v46 - v98;
        if ( v47 != 0 )
        {
          v48 = vMsg.m_nLength;
          for ( j = 0; j != v47; ++j )
          {
            if ( v48 <= 1022 )
            {
              v50 = v48++;
              vMsg.m_szBuf[v50] = 32;
              vMsg.m_szBuf[v48] = 0;
            }
          }
          vMsg.m_nLength = v48;
        }
      }
      v51 = v45->m_sLink.m_pString;
      if ( v51 != 0 && *v51 != 0 && bAllowLinks )
      {
        v52 = CUtlString::Get(&v45->m_sLink);
        CFmtStrN<1024,false>::AppendFormat(&vMsg, "<link cmd=\"%s\">", v52);
        v53 = &vMsg.m_szBuf[vMsg.m_nLength];
        v54 = &v53[1024 - vMsg.m_nLength - 1];
        if ( v53 < v54 )
        {
          v55 = v97[0];
          if ( v97[0] != 0 )
          {
            v56 = v97;
            do
            {
              *v53++ = v55;
              ++v56;
              if ( v53 == v54 )
                break;
              v55 = *v56;
            }
            while ( *v56 != 0 );
          }
        }
        *v53 = 0;
        v57 = v53 - vMsg.m_szBuf;
        v58 = &vMsg.m_szBuf[v57];
        v59 = &v58[1024 - v57 - 1];
        if ( v58 < v59 )
        {
          v60 = "</link>";
          v61 = 60;
          do
          {
            *v58++ = v61;
            ++v60;
            if ( v58 == v59 )
              break;
            v61 = *v60;
          }
          while ( *v60 != 0 );
        }
      }
      else
      {
        if ( v44->m_eType == GCSDK::CGCReportPrinter::EColumnType::eCol_SteamID )
        {
          v74 = CSteamID::Render(&v45->m_SteamID);
          v75 = &vMsg.m_szBuf[vMsg.m_nLength];
          v76 = &v75[1024 - vMsg.m_nLength - 1];
          if ( v75 < v76 )
          {
            do
            {
              if ( *v74 == 0 )
                break;
              *v75++ = *v74++;
            }
            while ( v75 != v76 );
          }
          *v75 = 0;
          v62 = v75 - vMsg.m_szBuf;
          vMsg.m_nLength = v62;
          goto LABEL_87;
        }
        v58 = &vMsg.m_szBuf[vMsg.m_nLength];
        v71 = &v58[1024 - vMsg.m_nLength - 1];
        if ( v58 < v71 )
        {
          v72 = v97[0];
          if ( v97[0] != 0 )
          {
            v73 = v97;
            do
            {
              *v58++ = v72;
              ++v73;
              if ( v58 == v71 )
                break;
              v72 = *v73;
            }
            while ( *v73 != 0 );
          }
        }
      }
      *v58 = 0;
      v62 = v58 - vMsg.m_szBuf;
      vMsg.m_nLength = v62;
LABEL_87:
      if ( v62 <= 1022 )
      {
        vMsg.m_nLength = v62 + 1;
        vMsg.m_szBuf[v62] = 32;
        vMsg.m_szBuf[v62 + 1] = 0;
      }
      ++nColWidtha;
      ++v43;
      ++nCola;
      if ( this->m_Columns.m_Size <= nColWidtha )
      {
        v63 = vMsg.m_nLength;
        if ( vMsg.m_nLength <= 1022 )
          goto LABEL_91;
        goto LABEL_92;
      }
    }
  }
LABEL_95:
  GCSDK::CGCEmitGroup::Internal_Msg(eg, "%s", vSeparator.m_szBuf);
  v65 = this->m_Columns.m_Size;
  vMsg.m_szBuf[0] = 0;
  vMsg.m_nLength = 0;
  if ( v65 <= 0 )
  {
    v77 = 0;
  }
  else
  {
    v66 = 0;
    v67 = 0;
    v68 = 0;
    do
    {
      v70 = vColWidths.m_Memory.m_pMemory[v66];
      if ( vSummary.m_Memory.m_pMemory[v67].m_bValid )
      {
        GCSDK::CGCReportPrinter::FormatValue(
          vSummary.m_Memory.m_pMemory[v67].m_eType,
          &vSummary.m_Memory.m_pMemory[v67].m_Value,
          &this->m_Columns.m_Memory.m_pMemory[v67],
          &nValueLen);
        v69 = v97;
      }
      else
      {
        v69 = "";
      }
      CFmtStrN<1024,false>::AppendFormat(&vMsg, "%*s ", v70, v69);
      ++v68;
      ++v67;
      ++v66;
    }
    while ( this->m_Columns.m_Size > v68 );
    v77 = vMsg.m_nLength;
    if ( vMsg.m_nLength > 1022 )
      goto LABEL_116;
  }
  vMsg.m_nLength = v77 + 1;
  vMsg.m_szBuf[v77] = 10;
  vMsg.m_szBuf[v77 + 1] = 0;
LABEL_116:
  GCSDK::CGCEmitGroup::Internal_Msg(eg, "%s", vMsg.m_szBuf);
  v78 = vSummary.m_Size;
  for ( k = 56LL * vSummary.m_Size - 56; --v78 >= 0; k -= 56 )
  {
    v80 = (&vSummary.m_Memory.m_pMemory->m_bValid + k);
    if ( *(&vSummary.m_Memory.m_pMemory->m_Value.m_sLink.m_pString + k) != 0 )
      CUtlString::FreeMemoryBlock(v80 + 2);
    if ( v80[1].m_pString != 0 )
      CUtlString::FreeMemoryBlock(v80 + 1);
  }
  vSummary.m_Size = 0;
  if ( (vSummary.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<GCSDK::CGCReportPrinter::PrintReport(GCSDK::CGCEmitGroup &,unsigned int,bool)::Summary_t,int>::Purge(&vSummary.m_Memory);
    if ( (vSummary.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<GCSDK::CGCReportPrinter::PrintReport(GCSDK::CGCEmitGroup &,unsigned int,bool)::Summary_t,int>::Purge(&vSummary.m_Memory);
  }
  vColWidths.m_Size = 0;
  if ( (vColWidths.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<unsigned int,int>::Purge(&vColWidths.m_Memory);
    if ( (vColWidths.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(&vColWidths.m_Memory);
  }
}


