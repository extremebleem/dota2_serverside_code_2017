
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_responselib.cpp  (line 0, @0x0000000001a6a8a0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_responselib_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// rr2::IResponseDB::AddRule  (line 30, @0x0000000003111d70, libserver.so)  // inlines: CRuleBuilder
// calls: rr2::CRuleBuilder::Begin
// callers: CRuleScriptBridge::AddRuleFromScript, Crr2LibPort::CreateNewRRDBFromOld
rr2::CRuleBuilder *__fastcall rr2::IResponseDB::AddRule(
        rr2::CRuleBuilder *__return_ptr retstr,
        rr2::IResponseDB *const this)
{
  rr2::CRule *v4; // rax

  v4 = (*(this->_vptr_IResponseDB + 7))(this);
  retstr->m_pDB = this;
  retstr->m_pRule = v4;
  retstr->m_bAutoCancel = 0;
  rr2::CRuleBuilder::Begin(retstr);
  return retstr;
}


// rr2::ICriterionFunctor::TypeError  (line 41, @0x0000000003111db0, libserver.so)  // inlines: ParamTypeToStr, name
// calls: Warning
// strings: "Criterion functor %s expected param of type %s but got %s.\n", "(const char *)"
// globals: jpt_3111DEA, jpt_3111E1A
bool __fastcall rr2::ICriterionFunctor::TypeError(
        rr2::ICriterionFunctor *const this,
        const rr2::ICriterionFunctor::ParamType_t *const nBadType)
{
  _BYTE *v2; // rax
  const char *v3; // rdx
  const char *v4; // rcx

  switch ( this->m_nParamType )
  {
    case 0u:
      v3 = "ERROR";
      break;
    case 1u:
      v3 = "int";
      break;
    case 2u:
      v3 = "float";
      break;
    case 4u:
      v3 = "UtlSymbol";
      break;
    case 8u:
      v3 = "(const char *)";
      break;
    default:
      v3 = "UNKNOWN";
      break;
  }
  switch ( *nBadType )
  {
    case 0u:
      v4 = "ERROR";
      break;
    case 1u:
      v4 = "int";
      break;
    case 2u:
      v4 = "float";
      break;
    case 4u:
      v4 = "UtlSymbol";
      break;
    case 8u:
      v4 = "(const char *)";
      break;
    default:
      v4 = "UNKNOWN";
      break;
  }
  v2 = *(*(this->_vptr_CRefCountServiceBase - 1) + 8LL);
  Warning("Criterion functor %s expected param of type %s but got %s.\n", &v2[*v2 == 42], v3, v4);
  return 0;
}


// rr2::ICriterionFunctor::ParamTypeToStr  (line 53, @0x0000000003111ef0, libserver.so)
// strings: "(const char *)"
// globals: jpt_3111F0C
const char *__fastcall rr2::ICriterionFunctor::ParamTypeToStr(const rr2::ICriterionFunctor::ParamType_t nType)
{
  const char *result; // rax

  switch ( nType )
  {
    case 0u:
      result = "ERROR";
      break;
    case 1u:
      result = "int";
      break;
    case 2u:
      result = "float";
      break;
    case 4u:
      result = "UtlSymbol";
      break;
    case 8u:
      result = "(const char *)";
      break;
    default:
      result = "UNKNOWN";
      break;
  }
  return result;
}


// rr2::ICriterionFunctorString::Compare  (line 73, @0x0000000003111ce0, libserver.so)  // inlines: CUtlSymbol, IsSymbol, String, Sym, Symbol
// calls: CUtlSymbolTable::String
bool __fastcall rr2::ICriterionFunctorString::Compare(
        rr2::ICriterionFunctorString *const this,
        const rr2::Symbol *const keyname,
        const rr2::RVariant *const val,
        const rr2::CResponseQuery *pquery)
{
  UtlSymId_t m_n; // cx
  bool (__fastcall *v8)(rr2::ICriterionFunctorString *const, char *, char *); // r14
  rr2::IResponseDB *m_db; // rax
  rr2::RRSymbolTable_t *p_m_SymTab; // rdi
  char *v11; // rax
  char *v13; // [rsp+8h] [rbp-48h]
  CUtlSymbol id; // [rsp+10h] [rbp-40h] BYREF

  m_n = -1;
  v8 = *(this->_vptr_CRefCountServiceBase + 4);
  if ( (val->m_floatBits & 0x7F800000) == 0x7F800000 )
    m_n = val->m_n;
  m_db = pquery->m_db;
  id.m_Id = m_n;
  v13 = CUtlSymbolTable::String(&m_db->m_SymTab, &id.m_Id);
  p_m_SymTab = &pquery->m_db->m_SymTab;
  id.m_Id = keyname->m_Sym.m_Id;
  v11 = CUtlSymbolTable::String(p_m_SymTab, &id.m_Id);
  return v8(this, v11, v13);
}


// rr2::CriterionLambda::~CriterionLambda  (line 82, @0x0000000003111f70, libserver.so)  // inlines: DoRelease, Release, Release<rr2::ICriterionFunctor>, ~CSmartPtr
// callers: CRuleScriptBridge::AddCriterionFromScript, rr2::CRule::~CRule, CUtlVectorBase<rr2::CriterionLambda, CUtlMemoryConservative<rr2::CriterionLambda> >::Sort
void __fastcall rr2::CriterionLambda::~CriterionLambda(rr2::CriterionLambda *const this)
{
  rr2::ICriterionFunctor *m_pObj; // rbx

  m_pObj = this->m_pFunctor.m_pObj;
  if ( m_pObj != 0
    && _InterlockedSub(&m_pObj->m_iRefs, 1u) == 0
    && (*(m_pObj->_vptr_CRefCountServiceBase + 2))(m_pObj) != 0 )
  {
    (*(m_pObj->_vptr_CRefCountServiceBase + 1))(m_pObj);
  }
}


// rr2::MatchList_t::SortByScoreDescending  (line 86, @0x0000000003111fb0, libserver.so)
// calls: CUtlVectorBase<rr2::MatchInfo_t, CUtlMemory<rr2::MatchInfo_t, int> >::Sort
// callers: rr2::CResponseDB::FindMatches
// globals: rr2::MatchInfo_t::CompareByScoreDesc(rr2::MatchInfo_t const*,rr2::MatchInfo_t const*)
void __fastcall rr2::MatchList_t::SortByScoreDescending(rr2::MatchList_t *const this)
{
  CUtlVectorBase<rr2::MatchInfo_t,CUtlMemory<rr2::MatchInfo_t,int>>::Sort(this, rr2::MatchInfo_t::CompareByScoreDesc);
}


// rr2::MatchInfo_t::CompareByScoreDesc  (line 91, @0x0000000003111cc0, libserver.so)
int __fastcall rr2::MatchInfo_t::CompareByScoreDesc(const rr2::MatchInfo_t *a, const rr2::MatchInfo_t *b)
{
  return (b->score - a->score);
}


