// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/rr_scriptbridge.cpp:66
class AI_ResponseScriptWrapper : public CRR_Response {
public:

	AI_ResponseScriptWrapper(const AI_Response &);
	~AI_ResponseScriptWrapper();
	void operator delete(void *);

	// sizeof = 448
};

// src/game/shared/rr_scriptbridge.cpp:176
class CScriptFunctionCriterion : public ICriterionFunctor {
public:

protected:

	const CScriptAutoRef m_hFunc;  // +0x10
	CScriptFunctionCriterion(HSCRIPT);
	virtual bool Compare(const Symbol &, const RVariant &, const CResponseQuery *);

private:

	CScriptFunctionCriterion(const CScriptFunctionCriterion &);
	virtual ~CScriptFunctionCriterion();

	// vtable[3] Compare
	// sizeof = 24
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GetScriptDesc<CRuleScriptBridge>  (line 30, @0x000000000204df50, libserver.so)  // inlines: AddParameterType, AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<ScriptFunctionBinding_t>, Element, Finalize, GrowMemory, ScriptClassDesc_t, ScriptDeduceFunctionSignature<CRuleScriptBridge*, CRuleScriptBridge, HSCRIPT__*, HSCRIPT__*, float>, ScriptDeduceFunctionSignature<CRuleScriptBridge*, CRuleScriptBridge, HSCRIPT__*, HSCRIPT__*>, ScriptDeduceFunctionSignature<CRuleScriptBridge*, CRuleScriptBridge, bool, HSCRIPT__*>, ScriptFuncDescriptor_t, ScriptFunctionBinding_t, SetDescription, SetFunctionName, SetReturnType, SetScriptName, operator[]
// calls: operator new, CUtlMemory<ScriptFunctionBinding_t, int>::Grow
// strings: "An isolated instance of a rulescript database.", "Decider", "CRuleScriptBridge", "AddRule(CRule) : Add a CRule object (defined in rulescript_base.nut) ", "AddRule", "Binding_AddRuleFromScript" (10 total)
// globals: g_pCRuleScriptBridge_ScriptDesc, CScriptConstructor<CRuleScriptBridge>::Construct(void), CScriptDestructor<CRuleScriptBridge>::Destruct(void *), CMemberScriptBinding1<CRuleScriptBridge *,bool (CRuleScriptBridge::*)(HSCRIPT__ *),bool,HSCRIPT__ *>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> , CRuleScriptBridge::Binding_AddRuleFromScript(HSCRIPT__ *), CMemberScriptBinding1<CRuleScriptBridge *,HSCRIPT__ * (CRuleScriptBridge::*)(HSCRIPT__ *),HSCRIPT__ *,HSCRIPT__ *>::Call(void *,void *,CVariantBase<CVariantDefa, CRuleScriptBridge::Binding_FindBestMatch(HSCRIPT__ *), CMemberScriptBinding2<CRuleScriptBridge *,HSCRIPT__ * (CRuleScriptBridge::*)(HSCRIPT__ *,float),HSCRIPT__ *,HSCRIPT__ *,float>::Call(void *,void *,CVariantBase< (9 total)
ScriptClassDesc_t *__fastcall GetScriptDesc<CRuleScriptBridge>(CRuleScriptBridge *pScriptDescObjectInstance)
{
  ScriptClassDesc_t *result; // rax
  ScriptClassDesc_t *v2; // r12
  CUtlMemory<ScriptFunctionBinding_t,int> *p_m_Memory; // rbx
  ScriptFunctionBinding_t *m_pMemory; // rcx
  int8 m_nNumParameters; // dl
  __int64 v6; // rax
  int v7; // edx
  char v8; // si
  char v9; // di
  __int64 m_Size; // r13
  __int64 v11; // rdx
  __int64 v12; // rax
  char v13; // dl
  __int64 v14; // rcx
  int v15; // edx
  char v16; // cl
  char v17; // di
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rax
  char v21; // dl
  char v22; // cl
  int v23; // edx
  char v24; // cl
  char v25; // di

  result = g_pCRuleScriptBridge_ScriptDesc;
  if ( g_pCRuleScriptBridge_ScriptDesc == 0 )
  {
    v2 = operator new(0x50u);
    v2->m_pBaseDesc = 0;
    v2->m_FunctionBindings.m_Size = 0;
    p_m_Memory = &v2->m_FunctionBindings.m_Memory;
    v2->m_FunctionBindings.m_Memory.m_pMemory = 0;
    v2->m_FunctionBindings.m_Memory.m_nAllocationCount = 0;
    v2->m_FunctionBindings.m_Memory.m_nGrowSize = 0;
    v2->pHelper = 0;
    g_pCRuleScriptBridge_ScriptDesc = v2;
    v2->m_pszDescription = "An isolated instance of a rulescript database.";
    v2->m_pszScriptName = "Decider";
    v2->m_pszClassname = "CRuleScriptBridge";
    v2->m_pfnConstruct = CScriptConstructor<CRuleScriptBridge>::Construct;
    v2->m_pfnDestruct = CScriptDestructor<CRuleScriptBridge>::Destruct;
    CUtlMemory<ScriptFunctionBinding_t,int>::Grow(&v2->m_FunctionBindings.m_Memory, 1);
    m_pMemory = v2->m_FunctionBindings.m_Memory.m_pMemory;
    ++v2->m_FunctionBindings.m_Size;
    if ( m_pMemory != 0 )
    {
      m_pMemory->m_desc.m_pszScriptName = 0;
      m_pMemory->m_desc.m_pszFunction = 0;
      m_pMemory->m_desc.m_pszDescription = 0;
      m_pMemory->m_desc.m_ReturnType = 29;
      m_pMemory->m_desc.m_nOptionalParameters = -1;
      m_pMemory->m_desc.m_nNumParameters = 0;
      m_pMemory->m_desc.m_pPackedParameterNames = 0;
      m_pMemory = v2->m_FunctionBindings.m_Memory.m_pMemory;
    }
    m_nNumParameters = m_pMemory->m_desc.m_nNumParameters;
    m_pMemory->m_desc.m_ReturnType = 6;
    m_pMemory->m_desc.m_pszDescription = "AddRule(CRule) : Add a CRule object (defined in rulescript_base.nut) ";
    m_pMemory->m_desc.m_pszScriptName = "AddRule";
    m_pMemory->m_desc.m_pszFunction = "Binding_AddRuleFromScript";
    v6 = m_nNumParameters++;
    m_pMemory->m_desc.m_ParameterTypes[v6] = 31;
    m_pMemory->m_desc.m_nNumParameters = m_nNumParameters;
    v7 = m_nNumParameters - 1;
    m_pMemory->m_desc.m_nOptionalParameters = 0;
    if ( v7 >= 0 && m_pMemory->m_desc.m_ParameterTypes[v7] == 32 )
    {
      v8 = 1;
      do
      {
        --v7;
        v9 = v8;
        if ( v7 == -1 )
        {
          m_pMemory->m_desc.m_nOptionalParameters = v8;
          goto LABEL_10;
        }
        ++v8;
      }
      while ( m_pMemory->m_desc.m_ParameterTypes[v7] == 32 );
      m_pMemory->m_desc.m_nOptionalParameters = v9;
    }
LABEL_10:
    m_pMemory->m_flags = 1;
    m_pMemory->m_pfnBinding = CMemberScriptBinding1<CRuleScriptBridge *,bool (CRuleScriptBridge::*)(HSCRIPT__ *),bool,HSCRIPT__ *>::Call;
    m_pMemory->m_pFunction = CRuleScriptBridge::Binding_AddRuleFromScript;
    m_Size = v2->m_FunctionBindings.m_Size;
    if ( m_Size == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v11 = &v2->m_FunctionBindings.m_Memory.m_pMemory[m_Size];
    if ( v11 != 0 )
    {
      *v11 = 0;
      *(v11 + 8) = 0;
      *(v11 + 16) = 0;
      *(v11 + 24) = 29;
      *(v11 + 25) = -1;
      *(v11 + 26) = 0;
      *(v11 + 40) = 0;
      v12 = &v2->m_FunctionBindings.m_Memory.m_pMemory[m_Size];
    }
    else
    {
      v12 = 0;
    }
    v13 = *(v12 + 26);
    *(v12 + 24) = 31;
    *(v12 + 16) = "Binding_FindBestMatch(query) : Query the database and return the best result found. If multiple of equ"
                  "al score found, an arbitrary one returns. ";
    *v12 = "FindBestMatch";
    *(v12 + 8) = "Binding_FindBestMatch";
    v14 = v13++;
    *(v12 + v14 + 27) = 31;
    *(v12 + 26) = v13;
    v15 = v13 - 1;
    *(v12 + 25) = 0;
    if ( v15 >= 0 && *(v12 + v15 + 27) == 32 )
    {
      v16 = 1;
      do
      {
        --v15;
        v17 = v16;
        if ( v15 == -1 )
        {
          *(v12 + 25) = v16;
          goto LABEL_20;
        }
        ++v16;
      }
      while ( *(v12 + v15 + 27) == 32 );
      *(v12 + 25) = v17;
    }
LABEL_20:
    *(v12 + 64) = 1;
    *(v12 + 48) = CMemberScriptBinding1<CRuleScriptBridge *,HSCRIPT__ * (CRuleScriptBridge::*)(HSCRIPT__ *),HSCRIPT__ *,HSCRIPT__ *>::Call;
    *(v12 + 56) = CRuleScriptBridge::Binding_FindBestMatch;
    v18 = v2->m_FunctionBindings.m_Size;
    if ( v18 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v19 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v18];
    if ( v19 != 0 )
    {
      *v19 = 0;
      *(v19 + 8) = 0;
      *(v19 + 16) = 0;
      *(v19 + 24) = 29;
      *(v19 + 25) = -1;
      *(v19 + 26) = 0;
      *(v19 + 40) = 0;
      v20 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v18];
    }
    else
    {
      v20 = 0;
    }
    v21 = *(v20 + 26);
    *(v20 + 24) = 31;
    *(v20 + 16) = "Binding_FindAllMatches(query,leeway) : Returns an array of all matching responses. If leeway is nonzer"
                  "o, all results scoring within 'leeway' of the best score return. ";
    *v20 = "FindAllMatches";
    *(v20 + 8) = "Binding_FindAllMatches";
    *(v20 + v21 + 27) = 31;
    v22 = v21 + 1;
    v21 += 2;
    *(v20 + v22 + 27) = 1;
    *(v20 + 26) = v21;
    v23 = v21 - 1;
    *(v20 + 25) = 0;
    if ( v23 >= 0 && *(v20 + v23 + 27) == 32 )
    {
      v24 = 1;
      do
      {
        --v23;
        v25 = v24;
        if ( v23 == -1 )
        {
          *(v20 + 25) = v24;
          goto LABEL_30;
        }
        ++v24;
      }
      while ( *(v20 + v23 + 27) == 32 );
      *(v20 + 25) = v25;
    }
LABEL_30:
    *(v20 + 64) = 1;
    *(v20 + 48) = CMemberScriptBinding2<CRuleScriptBridge *,HSCRIPT__ * (CRuleScriptBridge::*)(HSCRIPT__ *,float),HSCRIPT__ *,HSCRIPT__ *,float>::Call;
    *(v20 + 56) = CRuleScriptBridge::Binding_FindAllMatches;
    return v2;
  }
  return result;
}


// GetValueToAutoRef  (line 40, @0x0000000002048a30, libserver.so)  // inlines: CVariantBase, Free, SetNoAddref, Term, VM, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CSpeechScriptBridge::CSpeechResponse_t::CSpeechResponse_t, GetFloatInterval, CRuleScriptBridge::AddCriterionFromScript, ParseContextArray, CRuleScriptBridge::AddContextFromScript, CRuleScriptBridge::AddRuleFromScript, CSpeechScriptBridge::AddFollowupFromScript, CSpeechScriptBridge::MakeOldResponse, CSpeechScriptBridge::UnpackScriptTableToAIResponse
bool __fastcall GetValueToAutoRef(CScriptAutoRef *const out, HSCRIPT hScope, const char *pszKey)
{
  char v4; // bl
  HSCRIPT m_uint64; // r15
  ScriptVariant_t temp; // [rsp+0h] [rbp-40h] BYREF

  temp.m_type = 0;
  temp.m_flags = 0;
  temp.m_uint64 = 0;
  v4 = (*(*g_pScriptVM + 312LL))(g_pScriptVM, hScope, pszKey, &temp);
  if ( v4 != 0 )
  {
    if ( temp.m_type == 31 )
    {
      m_uint64 = temp.m_uint64;
      if ( out->m_h != 0 )
        (*(*g_pScriptVM + 96LL))(g_pScriptVM);
      out->m_h = m_uint64;
    }
    else
    {
      v4 = 0;
    }
  }
  if ( (temp.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, temp.m_uint64);
  return v4;
}


// AI_ResponseScriptWrapper::~AI_ResponseScriptWrapper  (line 87, @0x0000000002048300, libserver.so)
// calls: CRR_Response::~CRR_Response
void __fastcall AI_ResponseScriptWrapper::~AI_ResponseScriptWrapper(AI_ResponseScriptWrapper *const this)
{
  CRR_Response::~CRR_Response(this);
}


// GetScriptDesc<AI_ResponseScriptWrapper>  (line 93, @0x000000000204d790, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<ScriptFunctionBinding_t>, Finalize, GrowMemory, ScriptClassDesc_t, ScriptDeduceFunctionSignature<AI_ResponseScriptWrapper*, CRR_Response, float>, ScriptFuncDescriptor_t, ScriptFunctionBinding_t, SetDescription, SetFunctionName, SetReturnType, SetScriptName
// calls: operator new, CUtlMemory<ScriptFunctionBinding_t, int>::Grow
// callers: CSpeechScriptBridge::Script_FindBestResponse, CSpeechScriptBridge::UnpackScriptTableToAIResponse
// strings: "Opaque type representing a return value from the old response system.", "AI_Response", "AI_ResponseScriptWrapper", "Relative score of this match's quality (based on number of criteria matched)", "GetMatchScore"
// globals: g_pAI_ResponseScriptWrapper_ScriptDesc, CScriptDestructor<AI_ResponseScriptWrapper>::Destruct(void *), CMemberScriptBinding0<AI_ResponseScriptWrapper *,float (CRR_Response::*)(void),float>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,int,CVariantB, CRR_Response::GetMatchScore(void)
ScriptClassDesc_t *__fastcall GetScriptDesc<AI_ResponseScriptWrapper>(
        AI_ResponseScriptWrapper *pScriptDescObjectInstance)
{
  ScriptClassDesc_t *result; // rax
  ScriptClassDesc_t *v2; // rbx
  ScriptFunctionBinding_t *m_pMemory; // rsi
  int m_nNumParameters; // edx
  int v5; // edx
  char v6; // cl
  char v7; // al

  result = g_pAI_ResponseScriptWrapper_ScriptDesc;
  if ( g_pAI_ResponseScriptWrapper_ScriptDesc == 0 )
  {
    v2 = operator new(0x50u);
    v2->m_pBaseDesc = 0;
    v2->m_FunctionBindings.m_Size = 0;
    v2->m_FunctionBindings.m_Memory.m_pMemory = 0;
    v2->m_FunctionBindings.m_Memory.m_nAllocationCount = 0;
    v2->m_FunctionBindings.m_Memory.m_nGrowSize = 0;
    v2->m_pfnConstruct = 0;
    v2->pHelper = 0;
    g_pAI_ResponseScriptWrapper_ScriptDesc = v2;
    v2->m_pszDescription = "Opaque type representing a return value from the old response system.";
    v2->m_pszScriptName = "AI_Response";
    v2->m_pszClassname = "AI_ResponseScriptWrapper";
    v2->m_pfnDestruct = CScriptDestructor<AI_ResponseScriptWrapper>::Destruct;
    CUtlMemory<ScriptFunctionBinding_t,int>::Grow(&v2->m_FunctionBindings.m_Memory, 1);
    m_pMemory = v2->m_FunctionBindings.m_Memory.m_pMemory;
    ++v2->m_FunctionBindings.m_Size;
    if ( m_pMemory != 0 )
    {
      m_pMemory->m_desc.m_pszScriptName = 0;
      m_pMemory->m_desc.m_pszFunction = 0;
      m_pMemory->m_desc.m_pszDescription = 0;
      m_pMemory->m_desc.m_ReturnType = 29;
      m_pMemory->m_desc.m_nOptionalParameters = -1;
      m_pMemory->m_desc.m_nNumParameters = 0;
      m_pMemory->m_desc.m_pPackedParameterNames = 0;
      m_pMemory = v2->m_FunctionBindings.m_Memory.m_pMemory;
    }
    m_nNumParameters = m_pMemory->m_desc.m_nNumParameters;
    m_pMemory->m_desc.m_ReturnType = 1;
    m_pMemory->m_desc.m_pszDescription = "Relative score of this match's quality (based on number of criteria matched)";
    m_pMemory->m_desc.m_pszScriptName = "GetMatchScore";
    m_pMemory->m_desc.m_pszFunction = "GetMatchScore";
    v5 = m_nNumParameters - 1;
    m_pMemory->m_desc.m_nOptionalParameters = 0;
    if ( v5 >= 0 && m_pMemory->m_desc.m_ParameterTypes[v5] == 32 )
    {
      v6 = 1;
      do
      {
        --v5;
        v7 = v6;
        if ( v5 == -1 )
        {
          m_pMemory->m_desc.m_nOptionalParameters = v6;
          goto LABEL_10;
        }
        ++v6;
      }
      while ( m_pMemory->m_desc.m_ParameterTypes[v5] == 32 );
      m_pMemory->m_desc.m_nOptionalParameters = v7;
    }
LABEL_10:
    m_pMemory->m_flags = 1;
    m_pMemory->m_pfnBinding = CMemberScriptBinding0<AI_ResponseScriptWrapper *,float (CRR_Response::*)(void),float>::Call;
    m_pMemory->m_pFunction = CRR_Response::GetMatchScore;
    return v2;
  }
  return result;
}


// ScriptStatusToStr  (line 120, @0x0000000002048310, libserver.so)
// strings: "SCRIPT_DONE", "SCRIPT_RUNNING", "SCRIPT UNKNOWN STATUS", "SCRIPT_ERROR"
const char *__fastcall ScriptStatusToStr(const ScriptStatus_t status)
{
  const char *result; // rax

  result = "SCRIPT_DONE";
  if ( status != ScriptStatus_t::SCRIPT_DONE )
  {
    result = "SCRIPT_RUNNING";
    if ( status != ScriptStatus_t::SCRIPT_RUNNING )
    {
      result = "SCRIPT UNKNOWN STATUS";
      if ( status == ScriptStatus_t::SCRIPT_ERROR )
        return "SCRIPT_ERROR";
    }
  }
  return result;
}


// CRuleScriptBridge::CRuleScriptBridge  (line 131, @0x00000000020483e0, libserver.so)
// calls: CRuleScriptBridge::InitDB
void __fastcall CRuleScriptBridge::CRuleScriptBridge(CRuleScriptBridge *const this)
{
  this->m_pDB = 0;
  CRuleScriptBridge::InitDB(this);
}


// CRuleScriptBridge::~CRuleScriptBridge  (line 137, @0x0000000002048350, libserver.so)  // inlines: IsInitialized, TermDB
void __fastcall CRuleScriptBridge::~CRuleScriptBridge(CRuleScriptBridge *const this)
{
  rr2::IResponseDB *m_pDB; // rdi

  m_pDB = this->m_pDB;
  if ( m_pDB != 0 )
  {
    (*(m_pDB->_vptr_IResponseDB + 1))(m_pDB);
    this->m_pDB = 0;
  }
}


// CRuleScriptBridge::InitDB  (line 142, @0x0000000002048380, libserver.so)  // inlines: IsInitialized, TermDB
// calls: Msg, rr2::IResponseDB::CreateDB
// callers: CRuleScriptBridge::CRuleScriptBridge, CScriptConstructor<CRuleScriptBridge>::Construct
// strings: "CRuleScriptBridge was double-initialized: tearing down and rebuilding\n", "CRuleScriptBridge initializing...\n"
bool __fastcall CRuleScriptBridge::InitDB(CRuleScriptBridge *const this)
{
  rr2::IResponseDB *DB; // rax

  if ( this->m_pDB != 0 )
  {
    Msg("CRuleScriptBridge was double-initialized: tearing down and rebuilding\n");
    if ( this->m_pDB != 0 )
    {
      (*(this->m_pDB->_vptr_IResponseDB + 1))(this->m_pDB);
      this->m_pDB = 0;
    }
  }
  else
  {
    Msg("CRuleScriptBridge initializing...\n");
  }
  DB = rr2::IResponseDB::CreateDB();
  this->m_pDB = DB;
  return DB != 0;
}


// CRuleScriptBridge::TermDB  (line 160, @0x0000000002048400, libserver.so)  // inlines: IsInitialized
void __fastcall CRuleScriptBridge::TermDB(CRuleScriptBridge *const this)
{
  rr2::IResponseDB *m_pDB; // rdi

  m_pDB = this->m_pDB;
  if ( m_pDB != 0 )
  {
    (*(m_pDB->_vptr_IResponseDB + 1))(m_pDB);
    this->m_pDB = 0;
  }
}


// CScriptFunctionCriterion::~CScriptFunctionCriterion  (line 176, @0x000000000204e480, libserver.so)  // inlines: Term, VM, ~CRefCountServiceBase, ~CRefCounted, ~CScriptAutoRef, ~ICriterionFunctor
void __fastcall CScriptFunctionCriterion::~CScriptFunctionCriterion(CScriptFunctionCriterion *const this)
{
  this->_vptr_CRefCountServiceBase = off_3FEACF0;
  if ( this->m_hFunc.m_h != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_hFunc.m_h = 0;
  }
  this->_vptr_CRefCountServiceBase = off_3FEABF0;
}


// CScriptFunctionCriterion::~CScriptFunctionCriterion  (line 176, @0x000000000204e550, libserver.so)  // inlines: Term, VM, ~CRefCountServiceBase, ~CRefCounted, ~CScriptAutoRef, ~CScriptFunctionCriterion, ~ICriterionFunctor
// calls: operator delete
void __fastcall CScriptFunctionCriterion::~CScriptFunctionCriterion(CScriptFunctionCriterion *const this)
{
  this->_vptr_CRefCountServiceBase = off_3FEACF0;
  if ( this->m_hFunc.m_h != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_hFunc.m_h = 0;
  }
  this->_vptr_CRefCountServiceBase = off_3FEABF0;
  operator delete(this);
}


// CScriptFunctionCriterion::Compare  (line 182, @0x000000000204ec00, libserver.so)  // inlines: CVariantBase, Call<HSCRIPT__*>, Free, Get, Term, VM, operator HSCRIPT, operator=, ~CScriptAutoRef, ~CVariantBase
// calls: CRuleScriptBridge::ResponseQueryToScript, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
bool __fastcall CScriptFunctionCriterion::Compare(
        CScriptFunctionCriterion *const this,
        const rr2::Symbol *const keyname,
        const rr2::RVariant *const val,
        const rr2::CResponseQuery *pQuery)
{
  HSCRIPT m_h; // rsi
  char m_char; // bl
  CScriptAutoRef hTab; // [rsp+10h] [rbp-50h] BYREF
  ScriptVariant_t retval; // [rsp+20h] [rbp-40h] BYREF
  HSCRIPT v10; // [rsp+30h] [rbp-30h] BYREF
  __int16 v11; // [rsp+38h] [rbp-28h]
  __int16 v12; // [rsp+3Ah] [rbp-26h]

  CRuleScriptBridge::ResponseQueryToScript(&hTab, pQuery);
  m_h = this->m_hFunc.m_h;
  retval.m_type = 0;
  v11 = 31;
  retval.m_flags = 0;
  retval.m_uint64 = 0;
  v12 = 0;
  v10 = hTab.m_h;
  (*(*g_pScriptVM + 160LL))(g_pScriptVM, m_h, &v10, 1, &retval, 0, 1);
  if ( (v12 & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v10);
  m_char = 0;
  if ( retval.m_type != 0 )
    m_char = retval.m_char;
  if ( (retval.m_flags & 1) != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, retval.m_uint64);
    retval.m_flags &= ~1u;
  }
  retval.m_uint64 = 0;
  retval.m_type = 0;
  if ( hTab.m_h != 0 )
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
  return m_char;
}


// CSpeechScriptBridge::CSpeechResponse_t::CSpeechResponse_t  (line 206, @0x0000000002048af0, libserver.so)  // inlines: CScriptAutoRef, Term, VM, ~CScriptAutoRef
// calls: CRuleScriptBridge::CScriptResponse_t::CScriptResponse_t, GetValueToAutoRef, CRuleScriptBridge::CScriptResponse_t::~CScriptResponse_t, _Unwind_Resume
// callers: CRuleScriptBridge::AddRuleFromScript
// strings: "SelectResponse"
void __fastcall CSpeechScriptBridge::CSpeechResponse_t::CSpeechResponse_t(
        CSpeechScriptBridge::CSpeechResponse_t *const this,
        const HSCRIPT hRule,
        const HSCRIPT hResponse)
{
  HSCRIPT m_h; // rsi

  CRuleScriptBridge::CScriptResponse_t::CScriptResponse_t(this, hRule, hResponse);
  m_h = this->m_hRule.m_h;
  this->_vptr_IRulePayload = off_3FEAD30;
  this->m_hFuncToCall.m_h = 0;
  GetValueToAutoRef(&this->m_hFuncToCall, m_h, "SelectResponse");
}


// CSpeechScriptBridge::CSpeechResponse_t::~CSpeechResponse_t  (line 225, @0x0000000002047890, libserver.so)  // inlines: Term, VM, ~CScriptAutoRef
// calls: CRuleScriptBridge::CScriptResponse_t::~CScriptResponse_t
// callers: CSpeechScriptBridge::CSpeechResponse_t::~CSpeechResponse_t
void __fastcall CSpeechScriptBridge::CSpeechResponse_t::~CSpeechResponse_t(
        CSpeechScriptBridge::CSpeechResponse_t *const this)
{
  this->_vptr_IRulePayload = off_3FEAD30;
  if ( this->m_hFuncToCall.m_h != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_hFuncToCall.m_h = 0;
  }
  CRuleScriptBridge::CScriptResponse_t::~CScriptResponse_t(this);
}


// CSpeechScriptBridge::CSpeechResponse_t::~CSpeechResponse_t  (line 225, @0x0000000002047900, libserver.so)
// calls: CSpeechScriptBridge::CSpeechResponse_t::~CSpeechResponse_t, operator delete
void __fastcall CSpeechScriptBridge::CSpeechResponse_t::~CSpeechResponse_t(
        CSpeechScriptBridge::CSpeechResponse_t *const this)
{
  CSpeechScriptBridge::CSpeechResponse_t::~CSpeechResponse_t(this);
  operator delete(this);
}


// CSpeechScriptBridge::CSpeechResponse_t::IsValid  (line 231, @0x0000000002048430, libserver.so)  // inlines: IsValid
bool __fastcall CSpeechScriptBridge::CSpeechResponse_t::IsValid(
        const CSpeechScriptBridge::CSpeechResponse_t *const this)
{
  return this->m_hRule.m_h != 0 && this->m_hResponse.m_h != 0 && this->m_hFuncToCall.m_h != 0;
}


// CRuleScriptBridge::AddRuleFromScript  (line 237, @0x000000000204c560, libserver.so)  // inlines: AssignTo, CScriptAutoRef, CVariantBase, Free, Get, IsValid, Set, SetAutoCancel, TempString, Term, ToString, VM, operator HSCRIPT, ~CScriptAutoRef, ~CVariantBase
// calls: GetValueToAutoRef, rr2::IResponseDB::AddRule, rr2::CRuleBuilder::ReserveStaticCriteria, rr2::CRuleBuilder::ReserveLambdaCriteria, CRuleScriptBridge::AddCriterionFromScript, CRuleScriptBridge::AddContextFromScript, operator new, CSpeechScriptBridge::CSpeechResponse_t::CSpeechResponse_t, rr2::CRuleBuilder::SetPayload, rr2::CRuleBuilder::~CRuleBuilder, V_snprintf, VariantFieldTypeName (17 total)
// callers: CSpeechScriptBridge::AddRuleFromScript, CSpeechScriptBridge::Script_AddDecisionRule, CRuleScriptBridge::Binding_AddRuleFromScript
// strings: "rulename", "%g %g %g %g", "No conversion from %s to string at the moment!\n", "false", "true", "%d %d %d %d" (8 total)
// globals: jpt_204C5F2, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
bool __fastcall CRuleScriptBridge::AddRuleFromScript(rr2::IResponseDB *const pRDB, HSCRIPT hRule, const bool bVerbose)
{
  bool ValueToAutoRef; // r12
  unsigned int v7; // r15d
  CSpeechScriptBridge::CSpeechResponse_t *v8; // r15
  const char *v9; // rax
  const char *v10; // rcx
  double m_float; // xmm0_8
  char *pszRuleName; // [rsp+10h] [rbp-B0h]
  int numCriteria; // [rsp+24h] [rbp-9Ch]
  HSCRIPT pRDBb; // [rsp+28h] [rbp-98h]
  CScriptAutoRef hCriteriaArray; // [rsp+30h] [rbp-90h] BYREF
  CScriptAutoRef hResponseObject; // [rsp+40h] [rbp-80h] BYREF
  CScriptAutoRef v18; // [rsp+50h] [rbp-70h] BYREF
  ScriptVariant_t vartemp; // [rsp+60h] [rbp-60h] BYREF
  rr2::CRuleBuilder rb; // [rsp+70h] [rbp-50h] BYREF

  vartemp.m_type = 0;
  hCriteriaArray.m_h = 0;
  hResponseObject.m_h = 0;
  vartemp.m_flags = 0;
  vartemp.m_uint64 = 0;
  if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hRule, "rulename", &vartemp) == 0 )
    goto LABEL_7;
  if ( vartemp.m_type == 30 )
  {
    pszRuleName = vartemp.m_uint64;
  }
  else
  {
    switch ( vartemp.m_type )
    {
      case 0:
        goto LABEL_35;
      case 1:
        m_float = vartemp.m_float;
        goto LABEL_43;
      case 3:
      case 0x27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *vartemp.m_pszString,
          *(vartemp.m_uint64 + 4),
          *(vartemp.m_uint64 + 8));
        break;
      case 4:
      case 0x1B:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *vartemp.m_pszString,
          *(vartemp.m_uint64 + 4),
          *(vartemp.m_uint64 + 8),
          *(vartemp.m_uint64 + 12));
        break;
      case 5:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", vartemp.m_int);
        break;
      case 6:
        v10 = "true";
        if ( vartemp.m_char == 0 )
          v10 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v10);
        break;
      case 8:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", vartemp.m_char);
        break;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          vartemp.m_char,
          BYTE1(vartemp.m_int),
          BYTE2(vartemp.m_uint),
          HIBYTE(vartemp.m_float));
        break;
      case 0x19:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *vartemp.m_pszString,
          *(vartemp.m_uint64 + 4));
        break;
      case 0x1A:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%lld", vartemp.m_uint64);
        break;
      case 0x21:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%llu", vartemp.m_uint64);
        break;
      case 0x22:
        m_float = vartemp.m_float64;
LABEL_43:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        break;
      case 0x25:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vartemp.m_int);
        break;
      default:
        v9 = VariantFieldTypeName(vartemp.m_type);
        Warning("No conversion from %s to string at the moment!\n", v9);
LABEL_35:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        break;
    }
    pszRuleName = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
  }
  if ( !GetValueToAutoRef(&hCriteriaArray, hRule, "criteria") )
    goto LABEL_7;
  ValueToAutoRef = GetValueToAutoRef(&hResponseObject, hRule, "responses");
  if ( !ValueToAutoRef )
    goto LABEL_7;
  numCriteria = (*(*g_pScriptVM + 376LL))(g_pScriptVM, hCriteriaArray.m_h);
  if ( bVerbose )
  {
    Msg("\tPROCESSING RESPONSE RULE FROM .NUT :\nrulename is %s\n", pszRuleName);
    Msg("criteria is an array of %d\n", numCriteria);
  }
  if ( numCriteria > 0 )
  {
    rr2::IResponseDB::AddRule(&rb, pRDB);
    rb.m_bAutoCancel = 1;
    rr2::CRuleBuilder::ReserveStaticCriteria(&rb, numCriteria, 0);
    rr2::CRuleBuilder::ReserveStaticCriteria(&rb, numCriteria, 1);
    rr2::CRuleBuilder::ReserveLambdaCriteria(&rb, numCriteria, 1);
    v7 = 0;
    while ( 1 )
    {
      (*(*g_pScriptVM + 320LL))(g_pScriptVM, hCriteriaArray.m_h, v7, &vartemp);
      if ( vartemp.m_type != 31 )
        break;
      v18.m_h = 0;
      if ( vartemp.m_uint64 != 0 )
        v18.m_h = (*(*g_pScriptVM + 128LL))(g_pScriptVM);
      CRuleScriptBridge::AddCriterionFromScript(&rb, &v18);
      if ( v18.m_h != 0 )
        (*(*g_pScriptVM + 96LL))(g_pScriptVM);
      (*(*g_pScriptVM + 96LL))(g_pScriptVM, vartemp.m_uint64);
      if ( ++v7 == numCriteria )
      {
        CRuleScriptBridge::AddContextFromScript(hRule, &rb, pszRuleName);
        pRDBb = hResponseObject.m_h;
        v8 = operator new(0x20u);
        CSpeechScriptBridge::CSpeechResponse_t::CSpeechResponse_t(v8, hRule, pRDBb);
        if ( v8 != 0 )
        {
          if ( v8->m_hRule.m_h != 0 && v8->m_hResponse.m_h != 0 && v8->m_hFuncToCall.m_h != 0 )
          {
            rr2::CRuleBuilder::SetPayload(&rb, v8);
            rb.m_bAutoCancel = 0;
            goto LABEL_30;
          }
          (*(v8->_vptr_IRulePayload + 1))(v8);
        }
        break;
      }
    }
    ValueToAutoRef = 0;
LABEL_30:
    rr2::CRuleBuilder::~CRuleBuilder(&rb);
  }
  else
  {
LABEL_7:
    ValueToAutoRef = 0;
  }
  if ( (vartemp.m_flags & 1) != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, vartemp.m_uint64);
    vartemp.m_flags &= ~1u;
  }
  vartemp.m_uint64 = 0;
  vartemp.m_type = 0;
  if ( hResponseObject.m_h != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    hResponseObject.m_h = 0;
  }
  if ( hCriteriaArray.m_h != 0 )
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
  return ValueToAutoRef;
}


// CSpeechScriptBridge::CSpeechScriptBridge  (line 331, @0x0000000002048460, libserver.so)  // inlines: CScriptAccessorT, CScriptScopeT, CUtlVectorUltraConservative
void __fastcall CSpeechScriptBridge::CSpeechScriptBridge(CSpeechScriptBridge *const this)
{
  this->m_bInitialized = 0;
  this->m_hScriptScope.m_hScope = 0;
  this->m_hScriptScope.m_FuncHandles.m_pData = 0;
  this->m_hScriptScope.m_flags = 0;
  this->m_pDB = 0;
}


// CSpeechScriptBridge::~CSpeechScriptBridge  (line 338, @0x0000000002047f20, libserver.so)  // inlines: Count, Free, GetVM, Purge, RemoveAll, Term, ~CScriptAccessorT, ~CScriptScopeT, ~CUtlVectorUltraConservative
// calls: CSpeechScriptBridge::Term
void __fastcall CSpeechScriptBridge::~CSpeechScriptBridge(CSpeechScriptBridge *const this)
{
  int v2; // ebx
  IScriptVM *v3; // r14
  __int64 v4; // r13
  HSCRIPT__ **v5; // rdx
  CUtlVectorUltraConservative<HSCRIPT__**,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rsi

  if ( this->m_bInitialized )
    CSpeechScriptBridge::Term(this);
  if ( this->m_hScriptScope.m_hScope != 0 )
  {
    v2 = 0;
    v3 = g_pScriptVM;
    if ( g_pScriptVM != 0 )
    {
      while ( 1 )
      {
        m_pData = this->m_hScriptScope.m_FuncHandles.m_pData;
        if ( m_pData != 0 )
        {
          if ( v2 >= m_pData->m_Size )
            goto LABEL_10;
        }
        else if ( v2 >= 0 )
        {
          goto LABEL_10;
        }
        v4 = v2;
        v5 = m_pData->m_Elements[v2++];
        (*(*v3 + 152LL))(v3, *v5);
        *this->m_hScriptScope.m_FuncHandles.m_pData->m_Elements[v4] = 0;
      }
    }
    m_pData = this->m_hScriptScope.m_FuncHandles.m_pData;
LABEL_10:
    if ( m_pData != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_hScriptScope.m_FuncHandles.m_pData = 0;
    }
    if ( this->m_hScriptScope.m_hScope != 0 && v3 != 0 && (this->m_hScriptScope.m_flags & 1) == 0 )
    {
      (*(*v3 + 136LL))(v3);
      this->m_hScriptScope.m_hScope = 0;
    }
    else
    {
      this->m_hScriptScope.m_hScope = 0;
    }
  }
  this->m_hScriptScope.m_flags = 0;
  if ( this->m_hScriptScope.m_FuncHandles.m_pData != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    this->m_hScriptScope.m_FuncHandles.m_pData = 0;
  }
  this->m_hScriptScope.m_hScope = 0;
}


// CSpeechScriptBridge::Init  (line 343, @0x0000000002048490, libserver.so)  // inlines: GetVM, Init, Term
// calls: Msg, rr2::IResponseDB::CreateDB, CSpeechScriptBridge::Term
// strings: "CSpeechScriptBridge was double-initialized: tearing down and rebuilding\n", "g_rr", "CSpeechScriptBridge initializing...\n"
bool __fastcall CSpeechScriptBridge::Init(CSpeechScriptBridge *const this)
{
  rr2::IResponseDB *DB; // rax

  if ( this->m_bInitialized )
  {
    Msg("CSpeechScriptBridge was double-initialized: tearing down and rebuilding\n");
    if ( this->m_bInitialized )
      CSpeechScriptBridge::Term(this);
  }
  else
  {
    Msg("CSpeechScriptBridge initializing...\n");
  }
  this->m_hScriptScope.m_hScope = (*(*g_pScriptVM + 120LL))(g_pScriptVM, "g_rr", 0);
  DB = rr2::IResponseDB::CreateDB();
  this->m_bInitialized = 1;
  this->m_pDB = DB;
  return 1;
}


// CSpeechScriptBridge::Term  (line 376, @0x0000000002047e10, libserver.so)  // inlines: Count, Free, GetVM, Purge, RemoveAll, Term
// callers: CSpeechScriptBridge::~CSpeechScriptBridge, CSpeechScriptBridge::Init, CSpeechScriptBridge::Term
void __fastcall CSpeechScriptBridge::Term(CSpeechScriptBridge *const this)
{
  bool v2; // zf
  int v3; // ebx
  IScriptVM *v4; // r14
  __int64 v5; // r13
  HSCRIPT__ **v6; // rdx
  rr2::IResponseDB *m_pDB; // rdi
  CUtlVectorUltraConservative<HSCRIPT__**,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rsi

  v2 = this->m_hScriptScope.m_hScope == 0;
  this->m_bInitialized = 0;
  if ( !v2 )
  {
    v3 = 0;
    v4 = g_pScriptVM;
    if ( g_pScriptVM != 0 )
    {
      while ( 1 )
      {
        m_pData = this->m_hScriptScope.m_FuncHandles.m_pData;
        if ( m_pData != 0 )
        {
          if ( v3 >= m_pData->m_Size )
            goto LABEL_8;
        }
        else if ( v3 >= 0 )
        {
          goto LABEL_8;
        }
        v5 = v3;
        v6 = m_pData->m_Elements[v3++];
        (*(*v4 + 152LL))(v4, *v6);
        *this->m_hScriptScope.m_FuncHandles.m_pData->m_Elements[v5] = 0;
      }
    }
    m_pData = this->m_hScriptScope.m_FuncHandles.m_pData;
LABEL_8:
    if ( m_pData != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_hScriptScope.m_FuncHandles.m_pData = 0;
    }
    if ( this->m_hScriptScope.m_hScope != 0 && v4 != 0 && (this->m_hScriptScope.m_flags & 1) == 0 )
    {
      (*(*v4 + 136LL))(v4);
      this->m_hScriptScope.m_hScope = 0;
    }
    else
    {
      this->m_hScriptScope.m_hScope = 0;
    }
  }
  this->m_hScriptScope.m_flags = 0;
  m_pDB = this->m_pDB;
  if ( m_pDB != 0 )
    (*(m_pDB->_vptr_IResponseDB + 1))(m_pDB);
  this->m_pDB = 0;
}


// CSpeechScriptBridge::Term  (line 376, @0x0000000002048510, libserver.so)
// calls: CSpeechScriptBridge::Term
void __fastcall CSpeechScriptBridge::Term(CSpeechScriptBridge *const this)
{
  if ( this->m_bInitialized )
    CSpeechScriptBridge::Term(this);
}


// GetBoolField  (line 389, @0x0000000002048f10, libserver.so)  // inlines: CVariantBase, Free, operator float, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CRuleScriptBridge::AddCriterionFromScript, CSpeechScriptBridge::MakeOldResponse
bool __fastcall GetBoolField(bool *result, const HSCRIPT scope, const char *const pszField)
{
  bool v4; // al
  float m_float; // xmm1_4
  bool v6; // [rsp+Ch] [rbp-34h]
  ScriptVariant_t var; // [rsp+10h] [rbp-30h] BYREF

  var.m_flags = 0;
  var.m_type = 0;
  var.m_uint64 = 0;
  v4 = (*(*g_pScriptVM + 312LL))(g_pScriptVM, scope, pszField, &var);
  if ( !v4 )
  {
LABEL_8:
    v4 = 0;
    goto LABEL_9;
  }
  if ( var.m_type == 6 )
  {
    *result = var.m_char;
  }
  else if ( var.m_type == 5 )
  {
    *result = var.m_int != 0;
  }
  else
  {
    if ( var.m_type == 1 )
    {
      m_float = var.m_float;
    }
    else
    {
      if ( var.m_type != 34 )
      {
        if ( var.m_type == 31 )
          (*(*g_pScriptVM + 344LL))(g_pScriptVM, &var);
        goto LABEL_8;
      }
      m_float = var.m_float64;
    }
    *result = m_float != 0.0;
  }
LABEL_9:
  if ( (var.m_flags & 1) != 0 )
  {
    v6 = v4;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, var.m_uint64);
    return v6;
  }
  return v4;
}


// GetFloatField  (line 411, @0x0000000002049030, libserver.so)  // inlines: CVariantBase, Free, operator float, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CRuleScriptBridge::AddCriterionFromScript, ParseContextArray, CSpeechScriptBridge::AddFollowupFromScript
bool __fastcall GetFloatField(float *result, const HSCRIPT scope, const char *const pszField)
{
  bool v4; // al
  float m_float; // xmm0_4
  bool v6; // [rsp+Ch] [rbp-34h]
  ScriptVariant_t var; // [rsp+10h] [rbp-30h] BYREF

  var.m_type = 0;
  var.m_flags = 0;
  var.m_uint64 = 0;
  v4 = (*(*g_pScriptVM + 312LL))(g_pScriptVM, scope, pszField, &var);
  if ( !v4 )
  {
LABEL_7:
    v4 = 0;
    goto LABEL_8;
  }
  if ( var.m_type == 5 )
  {
    *result = var.m_int;
  }
  else
  {
    if ( var.m_type == 1 )
    {
      m_float = var.m_float;
    }
    else
    {
      if ( var.m_type != 34 )
      {
        if ( var.m_type == 31 )
          (*(*g_pScriptVM + 344LL))(g_pScriptVM, &var);
        goto LABEL_7;
      }
      m_float = var.m_float64;
    }
    *result = m_float;
  }
LABEL_8:
  if ( (var.m_flags & 1) != 0 )
  {
    v6 = v4;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, var.m_uint64);
    return v6;
  }
  return v4;
}


// GetStringField  (line 460, @0x0000000002049760, libserver.so)  // inlines: CVariantBase, Free, ~CVariantBase
// calls: CUtlString::operator=, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CRuleScriptBridge::AddCriterionFromScript, ParseContextArray, CSpeechScriptBridge::AddFollowupFromScript, CSpeechScriptBridge::MakeOldResponse
bool __fastcall GetStringField(CUtlString *result, const HSCRIPT scope, const char *const pszField)
{
  char v4; // bl
  ScriptVariant_t var; // [rsp+0h] [rbp-30h] BYREF

  var.m_flags = 0;
  var.m_type = 0;
  var.m_uint64 = 0;
  v4 = (*(*g_pScriptVM + 312LL))(g_pScriptVM, scope, pszField, &var);
  if ( v4 == 0 )
  {
LABEL_5:
    v4 = 0;
    goto LABEL_6;
  }
  if ( var.m_type != 30 )
  {
    if ( var.m_type == 31 )
      (*(*g_pScriptVM + 344LL))(g_pScriptVM, &var);
    goto LABEL_5;
  }
  CUtlString::operator=(result, var.m_pszString);
LABEL_6:
  if ( (var.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, var.m_uint64);
  return v4;
}


// GetFloatArrayEntry  (line 478, @0x0000000002049310, libserver.so)  // inlines: CVariantBase, Free, operator float, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: GetFloatInterval
bool __fastcall GetFloatArrayEntry(float *result, const HSCRIPT scope, int nArrayIndex)
{
  bool v4; // al
  float m_float; // xmm0_4
  bool v6; // [rsp+Ch] [rbp-34h]
  ScriptVariant_t var; // [rsp+10h] [rbp-30h] BYREF

  var.m_type = 0;
  var.m_flags = 0;
  var.m_uint64 = 0;
  v4 = (*(*g_pScriptVM + 320LL))(g_pScriptVM, scope, nArrayIndex, &var);
  if ( !v4 )
  {
LABEL_7:
    v4 = 0;
    goto LABEL_8;
  }
  if ( var.m_type == 5 )
  {
    *result = var.m_int;
  }
  else
  {
    if ( var.m_type == 1 )
    {
      m_float = var.m_float;
    }
    else
    {
      if ( var.m_type != 34 )
      {
        if ( var.m_type == 31 )
          (*(*g_pScriptVM + 344LL))(g_pScriptVM, &var);
        goto LABEL_7;
      }
      m_float = var.m_float64;
    }
    *result = m_float;
  }
LABEL_8:
  if ( (var.m_flags & 1) != 0 )
  {
    v6 = v4;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, var.m_uint64);
    return v6;
  }
  return v4;
}


// GetFloatInterval  (line 499, @0x0000000002049400, libserver.so)  // inlines: CScriptAutoRef, Term, VM, ~CScriptAutoRef
// calls: GetValueToAutoRef, GetFloatArrayEntry, _Unwind_Resume
// callers: CSpeechScriptBridge::MakeOldResponse
bool __fastcall GetFloatInterval(HSCRIPT hScope, const char *name, float *const lo, float *const hi)
{
  bool v6; // bl
  CScriptAutoRef hInterval; // [rsp+0h] [rbp-20h] BYREF

  hInterval.m_h = 0;
  v6 = GetValueToAutoRef(&hInterval, hScope, name)
    && GetFloatArrayEntry(lo, hInterval.m_h, 0)
    && GetFloatArrayEntry(hi, hInterval.m_h, 1);
  if ( hInterval.m_h != 0 )
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
  return v6;
}


// CRuleScriptBridge::ResponseQueryToScript  (line 509, @0x0000000002048b60, libserver.so)  // inlines: AssignTo, CScriptAutoRef, CUtlSymbol, CVariantBase, Fact, Free, Get<HSCRIPT__*>, IsSymbol, SetNoAddref, String, Sym, Term, VM, VariantFieldTypeName, operator[], ~CVariantBase
// calls: CUtlSymbolTable::String, Warning, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CScriptFunctionCriterion::Compare
// strings: "No free conversion of %s variant to HSCRIPT right now\n", "quaternion", "boolean", "character", "vector2d", "vector4d" (20 total)
// globals: jpt_2048D39
CScriptAutoRef __fastcall CRuleScriptBridge::ResponseQueryToScript(uint64 *a1, const rr2::CResponseQuery *pQuery)
{
  unsigned __int64 v3; // rbx
  void (__fastcall *v4)(IScriptVM *, uint64, const char *, const char *); // r15
  rr2::RRSymbolTable_t *p_m_SymTab; // rdi
  const char *v6; // rax
  rr2::CResponseQuery::CFact *v7; // r12
  __int64 v8; // rax
  uint32 m_floatBits; // xmm0_4
  void (__fastcall *v10)(IScriptVM *, uint64, const char *, CUtlSymbol *); // r15
  const char *v11; // rax
  uint64 m_uint64; // rdx
  const char *v13; // rsi
  const char *v16; // [rsp+20h] [rbp-80h]
  __int64 v17; // [rsp+28h] [rbp-78h]
  __int16 m_n; // [rsp+30h] [rbp-70h] BYREF
  CUtlSymbol v19; // [rsp+40h] [rbp-60h] BYREF
  ScriptVariant_t table; // [rsp+50h] [rbp-50h] BYREF
  CUtlSymbol v21[4]; // [rsp+60h] [rbp-40h] BYREF
  __int16 v22; // [rsp+68h] [rbp-38h]
  __int16 v23; // [rsp+6Ah] [rbp-36h]

  table.m_type = 0;
  table.m_flags = 0;
  table.m_uint64 = 0;
  (*(*g_pScriptVM + 264LL))(g_pScriptVM, &table);
  if ( pQuery->m_facts.m_Size > 0 )
  {
    v3 = 0;
    v17 = 4 * (3LL * (pQuery->m_facts.m_Size - 1) + 3);
    do
    {
      while ( 1 )
      {
        v7 = &pQuery->m_facts.m_Memory.m_pMemory[v3 / 0xC];
        v8 = *g_pScriptVM;
        if ( (v7->val.m_floatBits & 0x7F800000) != 0x7F800000 )
          break;
        v4 = *(v8 + 232);
        m_n = v7->val.m_n;
        v16 = CUtlSymbolTable::String(&pQuery->m_db->m_SymTab, &m_n);
        p_m_SymTab = &pQuery->m_db->m_SymTab;
        v21[0] = v7->key.m_Sym;
        v6 = CUtlSymbolTable::String(p_m_SymTab, v21);
        v4(g_pScriptVM, table.m_uint64, v6, v16);
LABEL_4:
        v3 += 12LL;
        if ( v3 == v17 )
          goto LABEL_8;
      }
      m_floatBits = v7->val.m_floatBits;
      v10 = *(v8 + 240);
      v22 = 1;
      v23 = 0;
      *&v21[0].m_Id = m_floatBits;
      v19.m_Id = v7->key.m_Sym.m_Id;
      v11 = CUtlSymbolTable::String(&pQuery->m_db->m_SymTab, &v19);
      v10(g_pScriptVM, table.m_uint64, v11, v21);
      if ( (v23 & 1) == 0 )
        goto LABEL_4;
      v3 += 12LL;
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&v21[0].m_Id);
    }
    while ( v3 != v17 );
  }
LABEL_8:
  m_uint64 = table.m_uint64;
  *a1 = 0;
  if ( table.m_type == 0 )
    goto LABEL_14;
  if ( table.m_type != 31 )
  {
    switch ( table.m_type )
    {
      case 1:
        v13 = "float";
        break;
      case 3:
        v13 = "vector";
        break;
      case 4:
        v13 = "quaternion";
        break;
      case 5:
        v13 = "integer";
        break;
      case 6:
        v13 = "boolean";
        break;
      case 8:
        v13 = "character";
        break;
      case 9:
        v13 = "color";
        break;
      case 0xD:
        v13 = "ehandle";
        break;
      case 0x19:
        v13 = "vector2d";
        break;
      case 0x1A:
        v13 = "int64";
        break;
      case 0x1B:
        v13 = "vector4d";
        break;
      case 0x1C:
        v13 = "resourcehandle";
        break;
      case 0x1E:
        v13 = "cstring";
        break;
      case 0x20:
        v13 = "variant";
        break;
      case 0x21:
        v13 = "uint64";
        break;
      case 0x22:
        v13 = "float64";
        break;
      case 0x25:
        v13 = "unsigned";
        break;
      case 0x26:
        v13 = "utlstringtoken";
        break;
      case 0x27:
        v13 = "qangle";
        break;
      case 0x30:
        v13 = "hscript_lightbinding";
        break;
      case 0x31:
        v13 = "js_value";
        break;
      case 0x32:
        v13 = "js_object";
        break;
      case 0x33:
        v13 = "js_array";
        break;
      case 0x34:
        v13 = "js_raw_args";
        break;
      default:
        v13 = "unknown_variant_type";
        break;
    }
    Warning("No free conversion of %s variant to HSCRIPT right now\n", v13);
    if ( *a1 != 0 )
      (*(*g_pScriptVM + 96LL))(g_pScriptVM);
LABEL_14:
    m_uint64 = 0;
  }
  *a1 = m_uint64;
  CVariantBase<CVariantDefaultAllocator>::Free(&table);
  return a1;
}


// CSpeechScriptBridge::AddRuleFromScript  (line 535, @0x000000000204cbb0, libserver.so)
// calls: CRuleScriptBridge::AddRuleFromScript
bool __fastcall CSpeechScriptBridge::AddRuleFromScript(
        CSpeechScriptBridge *const this,
        rr2::IResponseDB *const pRDB,
        HSCRIPT hRule,
        const bool bVerbose)
{
  return CRuleScriptBridge::AddRuleFromScript(pRDB, hRule, bVerbose);
}


// CSpeechScriptBridge::Script_AddDecisionRule  (line 540, @0x000000000204cbd0, libserver.so)  // inlines: AddRuleFromScript
// calls: CRuleScriptBridge::AddRuleFromScript
bool __fastcall CSpeechScriptBridge::Script_AddDecisionRule(HSCRIPT hScope)
{
  return CRuleScriptBridge::AddRuleFromScript(g_ExpresserRRScriptBridge.m_pDB, hScope, 0);
}


// CRuleScriptBridge::AddCriterionFromScript  (line 546, @0x0000000002049830, libserver.so)  // inlines: AddRef, AddRef<rr2::ICriterionFunctor>, CRefCountServiceBase, CRefCounted, CScriptAutoRef, CScriptFunctionCriterion, CSmartPtr, CUtlString, CUtlSymbol, CriterionBase, CriterionLambda, CriterionStatic, DoAddRef, DoRelease, Get, ICriterionFunctor, Increment, IsEmpty, Length, Release, Release<rr2::ICriterionFunctor>, Set, Sym, Symbol, Term, ThreadInterlockedIncrement, VM, V_AppearsToBeANumber, V_strlen, operator HSCRIPT, operator char const*, operator int32, operator=, operator==, ~CRefCountServiceBase, ~CRefCounted, ~CScriptAutoRef, ~CUtlString, ~ICriterionFunctor
// calls: GetValueToAutoRef, GetBoolField, GetFloatField, GetStringField, CUtlString::FreeMemoryBlock, operator new, rr2::CRuleBuilder::AddCriterion, rr2::CriterionLambda::~CriterionLambda, CUtlString::Set, CUtlString::operator+, strlen, CUtlString::operator[] (20 total)
// callers: CRuleScriptBridge::AddRuleFromScript
// strings: "optional", "operation"
bool __fastcall CRuleScriptBridge::AddCriterionFromScript(
        rr2::CRuleBuilder *const rb,
        const CScriptAutoRef *const hCrit)
{
  HSCRIPT m_h; // rsi
  char v5; // r14
  HSCRIPT v6; // rsi
  bool ValueToAutoRef; // bl
  float v8; // r15d
  HSCRIPT v9; // r14
  void *v10; // r12
  volatile signed __int32 *v11; // r14
  HSCRIPT v12; // rsi
  bool StringField; // r12
  const char *v15; // rsi
  char v16; // al
  double v17; // xmm0_8
  const char *v18; // rax
  float v19; // xmm0_4
  const char *v20; // rax
  bool v21; // bl
  const char *v22; // rax
  const char *v23; // rax
  char bMaxUseLeq; // [rsp+Fh] [rbp-141h]
  char bEqual; // [rsp+10h] [rbp-140h]
  bool bMinUseGeq; // [rsp+14h] [rbp-13Ch]
  char bValueIsTop; // [rsp+18h] [rbp-138h]
  rr2::MatchScore_t bValueIsTopa; // [rsp+18h] [rbp-138h]
  char bAllowString; // [rsp+1Ch] [rbp-134h]
  bool bAllowStringa; // [rsp+1Ch] [rbp-134h]
  const char *fTop; // [rsp+20h] [rbp-130h]
  unsigned int fTopa; // [rsp+20h] [rbp-130h]
  float fTopb; // [rsp+20h] [rbp-130h]
  bool bNotEqual; // [rsp+30h] [rbp-120h]
  unsigned int fBottom; // [rsp+38h] [rbp-118h]
  unsigned __int16 fBottoma; // [rsp+38h] [rbp-118h]
  bool bIsOptional; // [rsp+4Fh] [rbp-101h] BYREF
  __int16 v38; // [rsp+50h] [rbp-100h]
  unsigned __int16 v39; // [rsp+60h] [rbp-F0h]
  __int16 v40; // [rsp+70h] [rbp-E0h]
  float fScore; // [rsp+7Ch] [rbp-D4h] BYREF
  CScriptAutoRef hModifiers; // [rsp+80h] [rbp-D0h] BYREF
  CScriptAutoRef hFunc; // [rsp+90h] [rbp-C0h] BYREF
  CUtlString key; // [rsp+A0h] [rbp-B0h] BYREF
  CUtlString operation; // [rsp+B0h] [rbp-A0h] BYREF
  CUtlString value; // [rsp+C0h] [rbp-90h] BYREF
  CUtlString prefix; // [rsp+D0h] [rbp-80h] BYREF
  CUtlString criterionName; // [rsp+E0h] [rbp-70h] BYREF
  _QWORD v49[2]; // [rsp+F0h] [rbp-60h] BYREF
  CUtlString contextType; // [rsp+100h] [rbp-50h] BYREF
  volatile signed __int32 *v51; // [rsp+108h] [rbp-48h]

  bIsOptional = 0;
  fScore = 1.0;
  m_h = hCrit->m_h;
  hModifiers.m_h = 0;
  if ( !GetValueToAutoRef(&hModifiers, m_h, "modifiers") || hModifiers.m_h == 0 )
  {
    v5 = 0;
    goto LABEL_10;
  }
  GetBoolField(&bIsOptional, hModifiers.m_h, "optional");
  GetFloatField(&fScore, hModifiers.m_h, "score");
  if ( fScore <= 0.0 )
    fScore = 1.0;
  contextType.m_pString = 0;
  if ( !GetStringField(&contextType, hModifiers.m_h, "context") )
    goto LABEL_6;
  v5 = 1;
  if ( !CUtlString::IsEqual_CaseSensitive(&contextType, "world") )
  {
    CUtlString::IsEqual_CaseSensitive(&contextType, "speaker");
LABEL_6:
    v5 = 0;
  }
  if ( contextType.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&contextType);
LABEL_10:
  v6 = hCrit->m_h;
  hFunc.m_h = 0;
  ValueToAutoRef = GetValueToAutoRef(&hFunc, v6, "func");
  if ( ValueToAutoRef )
  {
    v8 = fScore;
    v9 = hFunc.m_h;
    v10 = operator new(0x18u);
    *(v10 + 2) = 1;
    *(v10 + 12) = 16;
    *v10 = off_3FEACF0;
    *(v10 + 2) = 0;
    if ( v9 != 0 )
      *(v10 + 2) = (*(*g_pScriptVM + 128LL))(g_pScriptVM, v9);
    *(&contextType.m_pString + 1) = v8;
    LOWORD(contextType.m_pString) = -1;
    v51 = 0;
    _InterlockedAdd(v10 + 2, 1u);
    v11 = v51;
    if ( v51 != 0 && _InterlockedSub(v51 + 2, 1u) == 0 && (*(*v11 + 16LL))(v11) != 0 )
      (*(*v11 + 8LL))(v11);
    v51 = v10;
    rr2::CRuleBuilder::AddCriterion(rb, &contextType, 1);
    rr2::CriterionLambda::~CriterionLambda(&contextType);
    goto LABEL_23;
  }
  v12 = hCrit->m_h;
  key.m_pString = 0;
  operation.m_pString = 0;
  value.m_pString = 0;
  if ( GetStringField(&key, v12, "key")
    && key.m_pString != 0
    && *key.m_pString != 0
    && GetStringField(&operation, hCrit->m_h, "operation")
    && operation.m_pString != 0
    && *operation.m_pString != 0 )
  {
    StringField = GetStringField(&value, hCrit->m_h, "value");
    if ( StringField )
    {
      if ( value.m_pString == 0 )
        goto LABEL_19;
      if ( *value.m_pString == 0 )
        goto LABEL_18;
      prefix.m_pString = 0;
      v15 = "world";
      if ( v5 == 0 )
        v15 = "";
      CUtlString::Set(&prefix, v15);
      CUtlString::operator+(&prefix, &key);
      if ( operation.m_pString == 0 || strlen(operation.m_pString) - 1 > 1 )
        goto LABEL_54;
      v16 = CUtlString::operator[](&operation, 0);
      if ( v16 == 60 )
      {
        if ( CUtlString::operator[](&operation, 1) != 0 )
        {
          if ( CUtlString::operator[](&operation, 1) != 61 )
            goto LABEL_54;
          bAllowString = 0;
          bValueIsTop = 1;
          bNotEqual = 0;
          bEqual = 0;
          bMaxUseLeq = 1;
          bMinUseGeq = 1;
        }
        else
        {
          bAllowString = 0;
          bValueIsTop = 1;
          bNotEqual = 0;
          bEqual = 0;
          bMaxUseLeq = 0;
          bMinUseGeq = 1;
        }
      }
      else if ( v16 <= 60 )
      {
        if ( v16 != 33 || CUtlString::operator[](&operation, 1) != 61 )
          goto LABEL_54;
        bAllowString = 1;
        bValueIsTop = 0;
        bNotEqual = 1;
        bEqual = 0;
        bMaxUseLeq = 1;
        bMinUseGeq = 1;
      }
      else if ( v16 == 61 )
      {
        if ( CUtlString::operator[](&operation, 1) != 61 )
          goto LABEL_54;
        bAllowString = 1;
        bValueIsTop = 0;
        bNotEqual = 0;
        bEqual = 1;
        bMaxUseLeq = 1;
        bMinUseGeq = 1;
      }
      else
      {
        if ( v16 != 62 )
          goto LABEL_54;
        if ( CUtlString::operator[](&operation, 1) != 0 )
        {
          if ( CUtlString::operator[](&operation, 1) != 61 )
            goto LABEL_54;
          bAllowString = 0;
          bValueIsTop = 0;
          bNotEqual = 0;
          bEqual = 0;
          bMaxUseLeq = 1;
          bMinUseGeq = 1;
        }
        else
        {
          bAllowString = 0;
          bValueIsTop = 0;
          bNotEqual = 0;
          bEqual = 0;
          bMaxUseLeq = 1;
          bMinUseGeq = 0;
        }
      }
      fTop = CUtlString::Get(&value);
      v49[0] = 0;
      V_strtod(fTop, v49);
      if ( (v49[0] == 0 || fTop == v49[0]) && v17 == 0.0 )
      {
        if ( bAllowString == 0 )
          goto LABEL_54;
        fTopb = fScore;
        v21 = !bIsOptional;
        v22 = CUtlString::Get(&value);
        CUtlSymbolTable::AddString(&rb->m_pDB->m_SymTab, v22);
        fBottoma = v39;
        v23 = CUtlString::Get(&criterionName);
        CUtlSymbolTable::AddString(&rb->m_pDB->m_SymTab, v23);
        LOWORD(contextType.m_pString) = v40;
        *(&contextType.m_pString + 1) = fTopb;
        LOBYTE(v51) = (2 * bNotEqual) | v51 & 0xFC | 1;
        HIDWORD(v51) = fBottoma;
        rr2::CRuleBuilder::AddCriterion(rb, &contextType, v21);
      }
      else
      {
        v18 = CUtlString::Get(&value);
        v19 = V_atof(v18);
        fBottom = LODWORD(v19);
        if ( bNotEqual || bEqual != 0 )
        {
          fTopa = LODWORD(v19);
        }
        else if ( bValueIsTop != 0 )
        {
          fTopa = LODWORD(v19);
          fBottom = -8388609;
        }
        else
        {
          fTopa = 2139095039;
        }
        bAllowStringa = !bIsOptional;
        bValueIsTopa = fScore;
        v20 = CUtlString::Get(&criterionName);
        CUtlSymbolTable::AddString(&rb->m_pDB->m_SymTab, v20);
        LOWORD(v49[0]) = v38;
        rr2::CriterionStatic::CriterionStatic(
          &contextType,
          v49,
          fBottom,
          fTopa,
          bNotEqual,
          bMinUseGeq,
          bMaxUseLeq,
          bValueIsTopa);
        rr2::CRuleBuilder::AddCriterion(rb, &contextType, bAllowStringa);
      }
      ValueToAutoRef = StringField;
LABEL_54:
      if ( criterionName.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&criterionName);
      if ( prefix.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&prefix);
    }
  }
  if ( value.m_pString != 0 )
LABEL_18:
    CUtlString::FreeMemoryBlock(&value);
LABEL_19:
  if ( operation.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&operation);
  if ( key.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&key);
LABEL_23:
  if ( hFunc.m_h != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    hFunc.m_h = 0;
  }
  if ( hModifiers.m_h != 0 )
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
  return ValueToAutoRef;
}


// ParseContextArray  (line 679, @0x000000000204bc60, libserver.so)  // inlines: AddToTail, CFmtStrN, CScriptAutoRef, CUtlString, CVariantBase, CopyConstruct<CUtlString>, Element, Free, Get, GetValueToAutoRef_Index, GrowMemory, InitQuietTruncation, IsEmpty, Length, Term, VM, V_AppearsToBeANumber, V_strlen, V_strncpy<int>, operator HSCRIPT, operator char const*, operator!=, operator=, operator[], ~CScriptAutoRef, ~CUtlString, ~CVariantBase
// calls: CUtlString::FreeMemoryBlock, GetStringField, GetValueToAutoRef, strlen, CUtlString::Get, V_strtod, V_atoi, CUtlString::operator[], CFmtStrN<256, false>::sprintf, CFmtStrN<256, false>::CFmtStrN, CUtlString::Set, GetFloatField (18 total)
// callers: CRuleScriptBridge::AddContextFromScript, CSpeechScriptBridge::AddFollowupFromScript
// strings: "operation", "++%d", "%s:%s:%g", "--%d"
void __fastcall ParseContextArray(
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const results,
        CScriptAutoRef *const hContext,
        _BOOL8 bAllowModify,
        const char *arrayName,
        const char *pszRuleName)
{
  unsigned int v6; // ebx
  HSCRIPT m_h; // rsi
  HSCRIPT v8; // r12
  char v9; // r14
  bool v10; // r14
  const char *v11; // r14
  double v12; // xmm0_8
  const char *v13; // rax
  char v14; // al
  bool v15; // r14
  char v16; // al
  char v17; // dl
  double v18; // r14
  const char *v19; // rax
  __int64 m_Size; // r14
  int v21; // eax
  CUtlString *v22; // r14
  const char *v23; // rax
  const char *v24; // rax
  int v25; // eax
  bool opIsValid; // [rsp+Eh] [rbp-312h]
  char v27; // [rsp+Fh] [rbp-311h]
  int value; // [rsp+48h] [rbp-2D8h]
  int numEntries; // [rsp+4Ch] [rbp-2D4h]
  float duration; // [rsp+5Ch] [rbp-2C4h] BYREF
  CUtlString criterionName; // [rsp+60h] [rbp-2C0h] BYREF
  CUtlString operation; // [rsp+70h] [rbp-2B0h] BYREF
  CUtlString valueString; // [rsp+80h] [rbp-2A0h] BYREF
  CScriptAutoRef hContextModifiers; // [rsp+90h] [rbp-290h] BYREF
  CUtlString v36; // [rsp+A0h] [rbp-280h] BYREF
  const char *v37; // [rsp+A8h] [rbp-278h] BYREF
  HSCRIPT v38; // [rsp+B0h] [rbp-270h] BYREF
  __int16 v39; // [rsp+B8h] [rbp-268h]
  __int16 v40; // [rsp+BAh] [rbp-266h]
  CFmtStr translatedOperation; // [rsp+C0h] [rbp-260h] BYREF
  CFmtStrN<256,false> v42; // [rsp+1D0h] [rbp-150h] BYREF
  unsigned __int64 v43; // [rsp+2E8h] [rbp-38h]

  v43 = __readfsqword(0x28u);
  opIsValid = bAllowModify;
  if ( (*(*g_pScriptVM + 368LL))(g_pScriptVM, hContext->m_h, bAllowModify, arrayName, pszRuleName) != 0 )
  {
    numEntries = (*(*g_pScriptVM + 376LL))(g_pScriptVM, hContext->m_h);
    if ( numEntries > 0 )
    {
      v6 = 0;
      while ( 1 )
      {
        translatedOperation._vptr_CFmtStrN = &off_3F6E1A0;
        m_h = hContext->m_h;
        criterionName.m_pString = 0;
        operation.m_pString = 0;
        valueString.m_pString = 0;
        translatedOperation.m_bQuietTruncation = 0;
        translatedOperation.m_szBuf[0] = 0;
        translatedOperation.m_nLength = 0;
        duration = 0.0;
        hContextModifiers.m_h = 0;
        v39 = 0;
        v40 = 0;
        v38 = 0;
        v8 = 0;
        v9 = (*(*g_pScriptVM + 320LL))(g_pScriptVM, m_h, v6, &v38);
        if ( v9 != 0 )
        {
          if ( v39 == 31 )
            v8 = v38;
          else
            v9 = 0;
        }
        if ( (v40 & 1) != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v38);
        if ( v9 == 0 )
          goto LABEL_5;
        if ( GetStringField(&criterionName, v8, "key")
          && criterionName.m_pString != 0
          && *criterionName.m_pString != 0
          && GetStringField(&operation, v8, "operation")
          && operation.m_pString != 0
          && *operation.m_pString != 0 )
        {
          v10 = 0;
          if ( GetStringField(&valueString, v8, "value") && valueString.m_pString != 0 )
            v10 = *valueString.m_pString != 0;
        }
        else
        {
          v10 = 0;
        }
        if ( GetValueToAutoRef(&hContextModifiers, v8, "modifiers") )
          GetFloatField(&duration, hContextModifiers.m_h, "duration");
        if ( !v10 || operation.m_pString == 0 || strlen(operation.m_pString) - 1 > 1 )
          goto LABEL_5;
        if ( ((v11 = CUtlString::Get(&valueString), v37 = 0, V_strtod(v11, &v37), v37 == 0) || v11 == v37) && v12 == 0.0 )
        {
          v27 = 0;
          value = 0;
        }
        else
        {
          v13 = CUtlString::Get(&valueString);
          value = V_atoi(v13);
          v27 = 1;
        }
        v14 = CUtlString::operator[](&operation, 0);
        if ( v14 == 45 )
          break;
        if ( v14 == 61 )
        {
          v15 = CUtlString::operator[](&operation, 1) == 0;
          if ( CUtlString::operator[](&valueString, 0) == 33 )
          {
            v24 = CUtlString::Get(&valueString);
            if ( !CUtlString::IsEqual_CaseSensitive(&criterionName, v24 + 1) )
              v15 = 0;
            _V_strncpy(translatedOperation.m_szBuf, "!", 256);
            v25 = strlen(translatedOperation.m_szBuf);
            v17 = 0;
            translatedOperation.m_nLength = v25;
            v16 = opIsValid;
          }
          else
          {
            CFmtStrN<256,false>::sprintf(&translatedOperation, "%d", value);
            v16 = 1;
            v17 = 1;
          }
          goto LABEL_42;
        }
        if ( v14 == 43 )
        {
          v15 = CUtlString::operator[](&operation, 1) == 61;
          CFmtStrN<256,false>::sprintf(&translatedOperation, "++%d", value);
          goto LABEL_41;
        }
LABEL_5:
        if ( hContextModifiers.m_h != 0 )
        {
          (*(*g_pScriptVM + 96LL))(g_pScriptVM);
          hContextModifiers.m_h = 0;
        }
        if ( v8 != 0 )
          (*(*g_pScriptVM + 96LL))(g_pScriptVM, v8);
        if ( valueString.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&valueString);
        if ( operation.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&operation);
        if ( criterionName.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&criterionName);
        if ( ++v6 == numEntries )
          return;
      }
      v15 = CUtlString::operator[](&operation, 1) == 61;
      CFmtStrN<256,false>::sprintf(&translatedOperation, "--%d", value);
LABEL_41:
      v16 = opIsValid;
      v17 = 1;
LABEL_42:
      if ( v15 && (v17 ^ 1 | v27) != 0 && v16 != 0 )
      {
        v18 = duration;
        v19 = CUtlString::Get(&criterionName);
        CFmtStrN<256,false>::CFmtStrN(&v42, "%s:%s:%g", v19, translatedOperation.m_szBuf, v18);
        v36.m_pString = 0;
        CUtlString::Set(&v36, v42.m_szBuf);
        m_Size = results->m_Size;
        v21 = results->m_Size;
        if ( m_Size == results->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CUtlString,int>::Grow(&results->m_Memory, 1);
          v21 = results->m_Size;
        }
        results->m_Size = v21 + 1;
        v22 = &results->m_Memory.m_pMemory[m_Size];
        if ( v22 != 0 )
        {
          v22->m_pString = 0;
          v23 = CUtlString::Get(&v36);
          CUtlString::Set(v22, v23);
        }
        if ( v36.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&v36);
      }
      goto LABEL_5;
    }
  }
}


// CRuleScriptBridge::AddContextFromScript  (line 748, @0x000000000204c3a0, libserver.so)  // inlines: CScriptAutoRef, CUtlMemory, CUtlVector, CUtlVectorBase, Destruct<CUtlString>, Element, Purge, RemoveAll, Term, VM, operator char const*, operator[], ~CScriptAutoRef, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: GetValueToAutoRef, ParseContextArray, CUtlString::Get, rr2::CRuleBuilder::AddContext, CUtlString::FreeMemoryBlock, CUtlMemory<CUtlString, int>::Purge, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CRuleScriptBridge::AddRuleFromScript
// strings: "context_world", "context_speaker"
void __fastcall CRuleScriptBridge::AddContextFromScript(
        HSCRIPT hRule,
        rr2::CRuleBuilder *const rb,
        const char *pszRuleName)
{
  int v3; // r14d
  const char *v5; // rdx
  const char *v6; // r12
  const char *v7; // rcx
  const char *v8; // r8
  int m_Size; // r15d
  __int64 v10; // rbx
  const char *v11; // rax
  __int64 i; // rbx
  CScriptAutoRef hContextArray; // [rsp+20h] [rbp-60h] BYREF
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > contexts; // [rsp+30h] [rbp-50h] BYREF

  v3 = 1;
  hContextArray.m_h = 0;
  do
  {
    v5 = "context_world";
    v6 = "world";
    if ( (v3 & 1) != 0 )
    {
      v5 = "context_speaker";
      v6 = "speaker";
    }
    if ( GetValueToAutoRef(&hContextArray, hRule, v5) )
    {
      contexts.m_Size = 0;
      contexts.m_Memory.m_pMemory = 0;
      contexts.m_Memory.m_nAllocationCount = 0;
      contexts.m_Memory.m_nGrowSize = 0;
      ParseContextArray(&contexts, &hContextArray, 1, v7, v8);
      m_Size = contexts.m_Size;
      if ( contexts.m_Size > 0 )
      {
        v10 = 0;
        do
        {
          v11 = CUtlString::Get(&contexts.m_Memory.m_pMemory[v10]);
          rr2::CRuleBuilder::AddContext(rb, v6, v11);
          m_Size = contexts.m_Size;
          ++v10;
        }
        while ( contexts.m_Size > v10 );
      }
      for ( i = 8LL * m_Size - 8; --m_Size >= 0; i -= 8 )
      {
        if ( *(&contexts.m_Memory.m_pMemory->m_pString + i) != 0 )
          CUtlString::FreeMemoryBlock((contexts.m_Memory.m_pMemory + i));
      }
      contexts.m_Size = 0;
      if ( (contexts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CUtlString,int>::Purge(&contexts.m_Memory);
        if ( (contexts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CUtlString,int>::Purge(&contexts.m_Memory);
      }
    }
    ++v3;
  }
  while ( v3 != 3 );
  if ( hContextArray.m_h != 0 )
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
}


// CSpeechScriptBridge::AddFollowupFromScript  (line 766, @0x000000000204cc20, libserver.so)  // inlines: CScriptAutoRef, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Destruct<CUtlString>, Element, Purge, RemoveAll, Term, VM, operator char const*, operator[], ~CScriptAutoRef, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: GetValueToAutoRef, GetStringField, CUtlString::FreeMemoryBlock, GetFloatField, ParseContextArray, CUtlString::Append, CUtlString::Get, CRR_Response::InitFollowup, CUtlMemory<CUtlString, int>::Purge, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CSpeechScriptBridge::MakeOldResponse
// strings: "followup"
void __fastcall CSpeechScriptBridge::AddFollowupFromScript(
        CScriptAutoRef *const hResponse,
        AI_Response *pResponse,
        AI_ResponseParams *const airp,
        const char *pszRuleName)
{
  const char *v5; // rcx
  const char *v6; // r8
  int m_Size; // eax
  __int64 v8; // r12
  int v9; // ebx
  const char *v10; // rax
  __int64 i; // rbx
  const char *v12; // rbx
  float v13; // r13d
  const char *v14; // r12
  const char *v15; // rax
  int v16; // [rsp+1Ch] [rbp-B4h]
  float fFollowupDelay; // [rsp+2Ch] [rbp-A4h] BYREF
  CScriptAutoRef hFollowup; // [rsp+30h] [rbp-A0h] BYREF
  CScriptAutoRef hContextArray; // [rsp+40h] [rbp-90h] BYREF
  CUtlString target; // [rsp+50h] [rbp-80h] BYREF
  CUtlString concept; // [rsp+60h] [rbp-70h] BYREF
  CUtlString context; // [rsp+70h] [rbp-60h] BYREF
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > contexts; // [rsp+80h] [rbp-50h] BYREF

  hFollowup.m_h = 0;
  hContextArray.m_h = 0;
  if ( GetValueToAutoRef(&hFollowup, hResponse->m_h, "followup") )
  {
    target.m_pString = 0;
    concept.m_pString = 0;
    fFollowupDelay = 0.0;
    if ( GetStringField(&concept, hFollowup.m_h, "concept")
      && GetStringField(&target, hFollowup.m_h, "target")
      && GetFloatField(&fFollowupDelay, hFollowup.m_h, "delay") )
    {
      context.m_pString = 0;
      if ( GetValueToAutoRef(&hContextArray, hFollowup.m_h, "context") )
      {
        contexts.m_Size = 0;
        contexts.m_Memory.m_pMemory = 0;
        contexts.m_Memory.m_nAllocationCount = 0;
        contexts.m_Memory.m_nGrowSize = 0;
        ParseContextArray(&contexts, &hContextArray, 0, v5, v6);
        m_Size = contexts.m_Size;
        if ( contexts.m_Size > 0 )
        {
          v8 = 0;
          v9 = 0;
          while ( 1 )
          {
            v10 = CUtlString::Get(&contexts.m_Memory.m_pMemory[v8]);
            CUtlString::Append(&context, v10);
            m_Size = contexts.m_Size;
            if ( contexts.m_Size <= ++v9 )
              break;
            if ( v9 != 0 )
              CUtlString::Append(&context, ",");
            ++v8;
          }
        }
        for ( i = 8LL * m_Size - 8; --m_Size >= 0; i -= 8 )
        {
          if ( *(&contexts.m_Memory.m_pMemory->m_pString + i) != 0 )
          {
            v16 = m_Size;
            CUtlString::FreeMemoryBlock((contexts.m_Memory.m_pMemory + i));
            m_Size = v16;
          }
        }
        contexts.m_Size = 0;
        if ( (contexts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CUtlString,int>::Purge(&contexts.m_Memory);
          if ( (contexts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CUtlString,int>::Purge(&contexts.m_Memory);
        }
      }
      v12 = CUtlString::Get(&context);
      v13 = fFollowupDelay;
      v14 = CUtlString::Get(&concept);
      v15 = CUtlString::Get(&target);
      CRR_Response::InitFollowup(pResponse, v15, v14, v13, v12);
      if ( context.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&context);
    }
    if ( concept.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&concept);
    if ( target.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&target);
    if ( hContextArray.m_h != 0 )
    {
      (*(*g_pScriptVM + 96LL))(g_pScriptVM);
      hContextArray.m_h = 0;
    }
    if ( hFollowup.m_h != 0 )
      (*(*g_pScriptVM + 96LL))(g_pScriptVM);
  }
  else
  {
    if ( hContextArray.m_h != 0 )
    {
      (*(*g_pScriptVM + 96LL))(g_pScriptVM);
      hContextArray.m_h = 0;
    }
    if ( hFollowup.m_h != 0 )
      (*(*g_pScriptVM + 96LL))(g_pScriptVM);
  }
}


// CRuleScriptBridge::Binding_AddRuleFromScript  (line 793, @0x000000000204cbf0, libserver.so)  // inlines: DebugInitialization, GetInt
// calls: CRuleScriptBridge::AddRuleFromScript
bool __fastcall CRuleScriptBridge::Binding_AddRuleFromScript(CRuleScriptBridge *const this, HSCRIPT hRule)
{
  return CRuleScriptBridge::AddRuleFromScript(this->m_pDB, hRule, rr_debugresponses.m_pParent->m_Value.m_nValue > 0);
}


// CRuleScriptBridge::Binding_FindBestMatch  (line 800, @0x000000000204b150, libserver.so)  // inlines: CResponseQuery, CUtlMemory, CUtlVector, CUtlVectorBase, IsValid, Purge, RemoveAll, operator bool, ~CResponseQuery, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CRuleScriptBridge::ScriptToResponseQuery, CUtlMemory<rr2::CResponseQuery::CFact, int>::Purge, CUtlVectorBase<rr2::CResponseQuery::CFact, CUtlMemory<rr2::CResponseQuery::CFact, int> >::~CUtlVectorBase, _Unwind_Resume
HSCRIPT __fastcall CRuleScriptBridge::Binding_FindBestMatch(CRuleScriptBridge *const this, HSCRIPT hquery)
{
  rr2::IResponseDB *m_pDB; // rax
  HSCRIPT result; // rax
  HSCRIPT v5; // [rsp+8h] [rbp-68h]
  CRuleScriptBridge::CScriptResponse_t *pResponse; // [rsp+10h] [rbp-60h] BYREF
  __int64 v7; // [rsp+18h] [rbp-58h]
  rr2::CResponseQuery r2query; // [rsp+30h] [rbp-40h] BYREF

  r2query.m_facts.m_Size = 0;
  m_pDB = this->m_pDB;
  r2query.m_bSorted = 0;
  r2query.m_facts.m_Memory.m_pMemory = 0;
  r2query.m_facts.m_Memory.m_nAllocationCount = 0;
  r2query.m_facts.m_Memory.m_nGrowSize = 0;
  r2query.m_db = m_pDB;
  if ( CRuleScriptBridge::ScriptToResponseQuery(&r2query, hquery)
    && ((*(this->m_pDB->_vptr_IResponseDB + 2))(&pResponse, this->m_pDB, &r2query, 0), *&pResponse != -2147483600.0)
    && v7 != 0 )
  {
    result = (*(*g_pScriptVM + 128LL))(g_pScriptVM, *(v7 + 16), *&pResponse);
    r2query.m_facts.m_Size = 0;
    if ( (r2query.m_facts.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      return result;
  }
  else
  {
    result = 0;
    r2query.m_facts.m_Size = 0;
    if ( (r2query.m_facts.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      return result;
  }
  v5 = result;
  CUtlMemory<rr2::CResponseQuery::CFact,int>::Purge(&r2query.m_facts.m_Memory);
  result = v5;
  if ( (r2query.m_facts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<rr2::CResponseQuery::CFact,int>::Purge(&r2query.m_facts.m_Memory);
    return v5;
  }
  return result;
}


// CRuleScriptBridge::Binding_FindAllMatches  (line 826, @0x000000000204b960, libserver.so)  // inlines: AssignTo, CResponseQuery, CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, Free, Get, Get<HSCRIPT__*>, MatchList_t, Purge, RemoveAll, operator ScriptVariant_t, operator[], ~CResponseQuery, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase, ~MatchList_t
// calls: CRuleScriptBridge::ScriptToResponseQuery, VariantFieldTypeName, Warning, CVariantBase<CVariantDefaultAllocator>::Free, CUtlMemory<rr2::CResponseQuery::CFact, int>::Purge, CUtlMemory<rr2::MatchInfo_t, int>::Purge, CUtlVectorBase<rr2::CResponseQuery::CFact, CUtlMemory<rr2::CResponseQuery::CFact, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "No free conversion of %s variant to HSCRIPT right now\n"
uint64 __fastcall CRuleScriptBridge::Binding_FindAllMatches(
        CRuleScriptBridge *const this,
        HSCRIPT hquery,
        float a3,
        const float fLeeway)
{
  rr2::IResponseDB *m_pDB; // rax
  rr2::IResponseDB *v6; // rdi
  int v7; // ebx
  float score; // r12d
  float v9; // xmm1_4
  __int64 v10; // r12
  unsigned __int64 v11; // rbx
  __int64 v12; // r12
  rr2::IRulePayload *pRulePayload; // rdx
  int (**vptr_IRulePayload)(...); // rdx
  __int64 v15; // rax
  uint64 m_uint64; // rbx
  const char *v17; // rax
  float fLeewayb; // [rsp+1Ch] [rbp-A4h]
  ScriptVariant_t returnArray; // [rsp+20h] [rbp-A0h] BYREF
  int (**v22)(...); // [rsp+30h] [rbp-90h] BYREF
  __int16 v23; // [rsp+38h] [rbp-88h]
  __int16 v24; // [rsp+3Ah] [rbp-86h]
  rr2::MatchList_t matches; // [rsp+40h] [rbp-80h] BYREF
  rr2::CResponseQuery r2query; // [rsp+60h] [rbp-60h] BYREF

  m_pDB = this->m_pDB;
  r2query.m_bSorted = 0;
  r2query.m_facts.m_Size = 0;
  r2query.m_facts.m_Memory.m_pMemory = 0;
  r2query.m_facts.m_Memory.m_nAllocationCount = 0;
  r2query.m_facts.m_Memory.m_nGrowSize = 0;
  r2query.m_db = m_pDB;
  if ( !CRuleScriptBridge::ScriptToResponseQuery(&r2query, hquery) )
  {
    m_uint64 = 0;
    goto LABEL_15;
  }
  v6 = this->m_pDB;
  matches.m_Size = 0;
  matches.m_Memory.m_pMemory = 0;
  matches.m_Memory.m_nAllocationCount = 0;
  matches.m_Memory.m_nGrowSize = 0;
  v7 = (*(v6->_vptr_IResponseDB + 3))(v6, &r2query, &matches, 1, 0);
  if ( v7 <= 0 )
  {
    m_uint64 = 0;
    goto LABEL_14;
  }
  score = matches.m_Memory.m_pMemory->score;
  returnArray.m_type = 0;
  returnArray.m_flags = 0;
  returnArray.m_uint64 = 0;
  (*(*g_pScriptVM + 360LL))(g_pScriptVM, &returnArray);
  v9 = score - a3;
  v10 = 3LL * (v7 - 1) + 3;
  v11 = 0;
  v12 = 8 * v10;
  fLeewayb = v9;
  do
  {
    if ( matches.m_Memory.m_pMemory[v11 / 0x18].score < fLeewayb )
      break;
    pRulePayload = matches.m_Memory.m_pMemory[v11 / 0x18].pRulePayload;
    if ( pRulePayload != 0 )
    {
      vptr_IRulePayload = pRulePayload[2]._vptr_IRulePayload;
      v15 = *g_pScriptVM;
      v24 = 0;
      v22 = vptr_IRulePayload;
      v23 = 31;
      (*(v15 + 384))(g_pScriptVM, returnArray.m_uint64, &v22);
      if ( (v24 & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v22);
    }
    v11 += 24LL;
  }
  while ( v11 != v12 );
  m_uint64 = returnArray.m_uint64;
  if ( returnArray.m_type == 0 )
    goto LABEL_12;
  if ( returnArray.m_type != 31 )
  {
    v17 = VariantFieldTypeName(returnArray.m_type);
    Warning("No free conversion of %s variant to HSCRIPT right now\n", v17);
LABEL_12:
    m_uint64 = 0;
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&returnArray);
LABEL_14:
  matches.m_Size = 0;
  if ( (matches.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<rr2::MatchInfo_t,int>::Purge(&matches.m_Memory);
    if ( (matches.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<rr2::MatchInfo_t,int>::Purge(&matches.m_Memory);
  }
LABEL_15:
  r2query.m_facts.m_Size = 0;
  if ( (r2query.m_facts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<rr2::CResponseQuery::CFact,int>::Purge(&r2query.m_facts.m_Memory);
    if ( (r2query.m_facts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<rr2::CResponseQuery::CFact,int>::Purge(&r2query.m_facts.m_Memory);
  }
  return m_uint64;
}


// CRuleScriptBridge::ScriptToResponseQuery  (line 864, @0x000000000204a1f0, libserver.so)  // inlines: AddFact, AssignTo, CVariantBase, CoerceNumeric<float>, CoerceNumeric<int>, DebugMatching, GetInt, TempString, ToString, V_AppearsToBeANumber, VariantFieldTypeName, operator float, ~CVariantBase
// calls: V_strtod, rr2::CResponseQuery::GetSymbol, rr2::CResponseQuery::AddFact, V_snprintf, Warning, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CRuleScriptBridge::Binding_FindBestMatch, CRuleScriptBridge::Binding_FindAllMatches
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "false", "true", "unknown_variant_type" (23 total)
// globals: jpt_204A41B, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, jpt_204A6B0, jpt_204A6D0, jpt_204A7B8, jpt_204A85B, jpt_204A87B, jpt_204ABBF (9 total)
bool __fastcall CRuleScriptBridge::ScriptToResponseQuery(rr2::CResponseQuery *const pOutQuery, HSCRIPT hInQuery)
{
  bool result; // al
  int v4; // ebx
  unsigned int i; // eax
  const char *m_uint64; // r12
  int16 m_type; // ax
  __int64 v8; // rdx
  char *v9; // rdi
  const char *v10; // rdx
  unsigned int v11; // r13d
  const char *v12; // rsi
  double m_float; // xmm0_8
  const char *v14; // rcx
  float v15; // xmm1_4
  const char *v16; // rsi
  double v17; // xmm0_8
  const char *v18; // rcx
  const char *v19; // rsi
  double m_float64; // xmm0_8
  const char *v21; // rcx
  int m_int; // [rsp+20h] [rbp-C0h]
  int num_entries; // [rsp+3Ch] [rbp-A4h]
  rr2::Symbol v25; // [rsp+50h] [rbp-90h] BYREF
  rr2::Symbol v26; // [rsp+60h] [rbp-80h] BYREF
  rr2::Symbol v27; // [rsp+70h] [rbp-70h] BYREF
  rr2::Symbol v28; // [rsp+80h] [rbp-60h] BYREF
  __int64 v29; // [rsp+88h] [rbp-58h] BYREF
  ScriptVariant_t key; // [rsp+90h] [rbp-50h] BYREF
  ScriptVariant_t value; // [rsp+A0h] [rbp-40h] BYREF

  result = (*(*g_pScriptVM + 272LL))(g_pScriptVM);
  if ( result )
  {
    num_entries = (*(*g_pScriptVM + 280LL))(g_pScriptVM, hInQuery);
    key.m_type = 0;
    key.m_flags = 0;
    key.m_uint64 = 0;
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    if ( num_entries > 0 )
    {
      v4 = 0;
      for ( i = (*(*g_pScriptVM + 296LL))(g_pScriptVM, hInQuery, 0, &key, &value);
            ;
            i = (*(*g_pScriptVM + 296LL))(g_pScriptVM, hInQuery, v11, &key, &value) )
      {
        v11 = i;
        if ( key.m_type == 30 )
        {
          m_uint64 = key.m_uint64;
        }
        else
        {
          switch ( key.m_type )
          {
            case 0:
              goto LABEL_26;
            case 1:
              m_float = key.m_float;
              goto LABEL_30;
            case 3:
            case 0x27:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g %g",
                *key.m_pszString,
                *(key.m_uint64 + 4),
                *(key.m_uint64 + 8));
              break;
            case 4:
            case 0x1B:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g %g %g",
                *key.m_pszString,
                *(key.m_uint64 + 4),
                *(key.m_uint64 + 8),
                *(key.m_uint64 + 12));
              break;
            case 5:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", key.m_int);
              break;
            case 6:
              v14 = "true";
              if ( key.m_char == 0 )
                v14 = "false";
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v14);
              break;
            case 8:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", key.m_char);
              break;
            case 9:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%d %d %d %d",
                key.m_char,
                BYTE1(key.m_int),
                BYTE2(key.m_uint),
                HIBYTE(key.m_float));
              break;
            case 0x19:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g",
                *key.m_pszString,
                *(key.m_uint64 + 4));
              break;
            case 0x1A:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%lld", key.m_uint64);
              break;
            case 0x21:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%llu", key.m_uint64);
              break;
            case 0x22:
              m_float = key.m_float64;
LABEL_30:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
              break;
            case 0x25:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", key.m_int);
              break;
            default:
              switch ( key.m_type )
              {
                case 0:
                  v12 = "void";
                  break;
                case 1:
                  v12 = "float";
                  break;
                case 3:
                  v12 = "vector";
                  break;
                case 4:
                  v12 = "quaternion";
                  break;
                case 5:
                  v12 = "integer";
                  break;
                case 6:
                  v12 = "boolean";
                  break;
                case 8:
                  v12 = "character";
                  break;
                case 9:
                  v12 = "color";
                  break;
                case 0xD:
                  v12 = "ehandle";
                  break;
                case 0x19:
                  v12 = "vector2d";
                  break;
                case 0x1A:
                  v12 = "int64";
                  break;
                case 0x1B:
                  v12 = "vector4d";
                  break;
                case 0x1C:
                  v12 = "resourcehandle";
                  break;
                case 0x1F:
                  v12 = "hscript";
                  break;
                case 0x20:
                  v12 = "variant";
                  break;
                case 0x21:
                  v12 = "uint64";
                  break;
                case 0x22:
                  v12 = "float64";
                  break;
                case 0x25:
                  v12 = "unsigned";
                  break;
                case 0x26:
                  v12 = "utlstringtoken";
                  break;
                case 0x27:
                  v12 = "qangle";
                  break;
                case 0x30:
                  v12 = "hscript_lightbinding";
                  break;
                case 0x31:
                  v12 = "js_value";
                  break;
                case 0x32:
                  v12 = "js_object";
                  break;
                case 0x33:
                  v12 = "js_array";
                  break;
                case 0x34:
                  v12 = "js_raw_args";
                  break;
                default:
                  v12 = "unknown_variant_type";
                  break;
              }
              Warning("No conversion from %s to string at the moment!\n", v12);
LABEL_26:
              CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
              break;
          }
          m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        }
        if ( m_uint64 == 0 )
          goto LABEL_17;
        m_type = value.m_type;
        if ( (value.m_type - 1) > 0x24 )
          goto LABEL_17;
        v8 = 1LL << (LOBYTE(value.m_type) - 1);
        if ( (v8 & 0x1102000050LL) == 0 )
          break;
        switch ( value.m_type )
        {
          case 1:
            m_int = value.m_float;
            break;
          case 5:
          case 7:
          case 0x21:
          case 0x25:
            m_int = value.m_int;
            break;
          case 0x22:
            m_int = value.m_float64;
            break;
          default:
            m_int = 0;
            break;
        }
        rr2::CResponseQuery::GetSymbol(pOutQuery, m_uint64);
        rr2::CResponseQuery::AddFact(pOutQuery, &v25, m_int);
        if ( ++v4 == num_entries )
          goto LABEL_44;
LABEL_18:
        ;
      }
      if ( (v8 & 0x200000001LL) != 0 )
      {
        rr2::CResponseQuery::GetSymbol(pOutQuery, m_uint64);
        rr2::CResponseQuery::AddFact(pOutQuery, &v26, v15);
      }
      else if ( (v8 & 0x20000000) != 0 )
      {
        if ( rr_debugresponses.m_pParent->m_Value.m_nValue > 0 )
        {
          if ( value.m_type == 30 )
          {
            v9 = value.m_uint64;
          }
          else
          {
            switch ( value.m_type )
            {
              case 0:
                goto LABEL_75;
              case 1:
                m_float64 = value.m_float;
                goto LABEL_78;
              case 3:
              case 0x27:
                V_snprintf(
                  &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                  512,
                  "%g %g %g",
                  *value.m_pszString,
                  *(value.m_uint64 + 4),
                  *(value.m_uint64 + 8));
                break;
              case 4:
              case 0x1B:
                V_snprintf(
                  &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                  512,
                  "%g %g %g %g",
                  *value.m_pszString,
                  *(value.m_uint64 + 4),
                  *(value.m_uint64 + 8),
                  *(value.m_uint64 + 12));
                break;
              case 5:
                V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", value.m_int);
                break;
              case 6:
                v21 = "true";
                if ( value.m_char == 0 )
                  v21 = "false";
                V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v21);
                break;
              case 8:
                V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", value.m_char);
                break;
              case 9:
                V_snprintf(
                  &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                  512,
                  "%d %d %d %d",
                  value.m_char,
                  BYTE1(value.m_int),
                  BYTE2(value.m_uint),
                  HIBYTE(value.m_float));
                break;
              case 0x19:
                V_snprintf(
                  &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                  512,
                  "%g %g",
                  *value.m_pszString,
                  *(value.m_uint64 + 4));
                break;
              case 0x1A:
                V_snprintf(
                  &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                  512,
                  "%lld",
                  value.m_uint64);
                break;
              case 0x21:
                V_snprintf(
                  &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                  512,
                  "%llu",
                  value.m_uint64);
                break;
              case 0x22:
                m_float64 = value.m_float64;
LABEL_78:
                V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float64);
                break;
              case 0x25:
                V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", value.m_int);
                break;
              default:
                switch ( value.m_type )
                {
                  case 0:
                    v19 = "void";
                    break;
                  case 1:
                    v19 = "float";
                    break;
                  case 3:
                    v19 = "vector";
                    break;
                  case 4:
                    v19 = "quaternion";
                    break;
                  case 5:
                    v19 = "integer";
                    break;
                  case 6:
                    v19 = "boolean";
                    break;
                  case 8:
                    v19 = "character";
                    break;
                  case 9:
                    v19 = "color";
                    break;
                  case 0xD:
                    v19 = "ehandle";
                    break;
                  case 0x19:
                    v19 = "vector2d";
                    break;
                  case 0x1A:
                    v19 = "int64";
                    break;
                  case 0x1B:
                    v19 = "vector4d";
                    break;
                  case 0x1C:
                    v19 = "resourcehandle";
                    break;
                  case 0x1F:
                    v19 = "hscript";
                    break;
                  case 0x20:
                    v19 = "variant";
                    break;
                  case 0x21:
                    v19 = "uint64";
                    break;
                  case 0x22:
                    v19 = "float64";
                    break;
                  case 0x25:
                    v19 = "unsigned";
                    break;
                  case 0x26:
                    v19 = "utlstringtoken";
                    break;
                  case 0x27:
                    v19 = "qangle";
                    break;
                  case 0x30:
                    v19 = "hscript_lightbinding";
                    break;
                  case 0x31:
                    v19 = "js_value";
                    break;
                  case 0x32:
                    v19 = "js_object";
                    break;
                  case 0x33:
                    v19 = "js_array";
                    break;
                  case 0x34:
                    v19 = "js_raw_args";
                    break;
                  default:
                    v19 = "unknown_variant_type";
                    break;
                }
                Warning("No conversion from %s to string at the moment!\n", v19);
LABEL_75:
                CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
                break;
            }
            v9 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          }
          v29 = 0;
          V_strtod(v9, &v29);
          m_type = value.m_type;
        }
        if ( m_type == 30 )
        {
          v10 = value.m_uint64;
        }
        else
        {
          switch ( m_type )
          {
            case 0:
              goto LABEL_59;
            case 1:
              v17 = value.m_float;
              goto LABEL_61;
            case 3:
            case 39:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g %g",
                *value.m_pszString,
                *(value.m_uint64 + 4),
                *(value.m_uint64 + 8));
              break;
            case 4:
            case 27:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g %g %g",
                *value.m_pszString,
                *(value.m_uint64 + 4),
                *(value.m_uint64 + 8),
                *(value.m_uint64 + 12));
              break;
            case 5:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", value.m_int);
              break;
            case 6:
              v18 = "true";
              if ( value.m_char == 0 )
                v18 = "false";
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v18);
              break;
            case 8:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", value.m_char);
              break;
            case 9:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%d %d %d %d",
                value.m_char,
                BYTE1(value.m_int),
                BYTE2(value.m_uint),
                HIBYTE(value.m_float));
              break;
            case 25:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g",
                *value.m_pszString,
                *(value.m_uint64 + 4));
              break;
            case 26:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%lld",
                value.m_uint64);
              break;
            case 33:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%llu",
                value.m_uint64);
              break;
            case 34:
              v17 = value.m_float64;
LABEL_61:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", v17);
              break;
            case 37:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", value.m_int);
              break;
            default:
              switch ( m_type )
              {
                case 0:
                  v16 = "void";
                  break;
                case 1:
                  v16 = "float";
                  break;
                case 3:
                  v16 = "vector";
                  break;
                case 4:
                  v16 = "quaternion";
                  break;
                case 5:
                  v16 = "integer";
                  break;
                case 6:
                  v16 = "boolean";
                  break;
                case 8:
                  v16 = "character";
                  break;
                case 9:
                  v16 = "color";
                  break;
                case 13:
                  v16 = "ehandle";
                  break;
                case 25:
                  v16 = "vector2d";
                  break;
                case 26:
                  v16 = "int64";
                  break;
                case 27:
                  v16 = "vector4d";
                  break;
                case 28:
                  v16 = "resourcehandle";
                  break;
                case 31:
                  v16 = "hscript";
                  break;
                case 32:
                  v16 = "variant";
                  break;
                case 33:
                  v16 = "uint64";
                  break;
                case 34:
                  v16 = "float64";
                  break;
                case 37:
                  v16 = "unsigned";
                  break;
                case 38:
                  v16 = "utlstringtoken";
                  break;
                case 39:
                  v16 = "qangle";
                  break;
                case 48:
                  v16 = "hscript_lightbinding";
                  break;
                case 49:
                  v16 = "js_value";
                  break;
                case 50:
                  v16 = "js_object";
                  break;
                case 51:
                  v16 = "js_array";
                  break;
                case 52:
                  v16 = "js_raw_args";
                  break;
                default:
                  v16 = "unknown_variant_type";
                  break;
              }
              Warning("No conversion from %s to string at the moment!\n", v16);
LABEL_59:
              CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
              break;
          }
          v10 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        }
        rr2::CResponseQuery::GetSymbol(pOutQuery, v10);
        rr2::CResponseQuery::GetSymbol(pOutQuery, m_uint64);
        rr2::CResponseQuery::AddFact(pOutQuery, &v27, &v28);
      }
LABEL_17:
      if ( ++v4 == num_entries )
        goto LABEL_44;
      goto LABEL_18;
    }
LABEL_44:
    CVariantBase<CVariantDefaultAllocator>::Free(&value);
    CVariantBase<CVariantDefaultAllocator>::Free(&key);
    return num_entries > 0;
  }
  return result;
}


// CSpeechScriptBridge::AICriteriaSetToScript  (line 926, @0x0000000002049120, libserver.so)  // inlines: CVariantBase, Free, V_AppearsToBeANumber, atof, ~CVariantBase
// calls: CResponseCriteriaSet::GetCount, strtod, CResponseCriteriaSet::GetName, CResponseCriteriaSet::GetValue, V_strtod, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CSpeechScriptBridge::AICriteriaSetToScript, CBaseEntity::ScriptGatherCriteria
void __fastcall CSpeechScriptBridge::AICriteriaSetToScript(const CResponseCriteriaSet *pQuery, HSCRIPT hResult)
{
  int i; // ebx
  void (__fastcall *v4)(IScriptVM *, HSCRIPT, const char *, const char **); // r15
  __m128d v5; // xmm0
  float v6; // xmm1_4
  const char *v7; // rax
  const char *Value; // rax
  const char *v9; // r14
  double v10; // xmm0_8
  int v11; // esi
  void (__fastcall *v12)(IScriptVM *, HSCRIPT, const char *, const char *); // r15
  const char *Name; // rax
  int nFacts; // [rsp+14h] [rbp-4Ch]
  const char *v16; // [rsp+20h] [rbp-40h] BYREF
  __int16 v17; // [rsp+28h] [rbp-38h]
  __int16 v18; // [rsp+2Ah] [rbp-36h]

  nFacts = CResponseCriteriaSet::GetCount(pQuery);
  if ( nFacts > 0 )
  {
    for ( i = 0; i != nFacts; ++i )
    {
      while ( 1 )
      {
        Value = CResponseCriteriaSet::GetValue(pQuery, i);
        v16 = 0;
        v9 = Value;
        V_strtod(Value, &v16);
        if ( v16 != 0 && v9 != v16 )
          break;
        if ( v10 != 0.0 )
          break;
        v11 = i++;
        v12 = *(*g_pScriptVM + 232LL);
        Name = CResponseCriteriaSet::GetName(pQuery, v11);
        v12(g_pScriptVM, hResult, Name, v9);
        if ( i == nFacts )
          return;
      }
      v4 = *(*g_pScriptVM + 240LL);
      v5.m128d_f64[0] = strtod(v9, 0);
      v17 = 1;
      v6 = _mm_movedup_pd(v5).m128d_f64[0];
      v18 = 0;
      *&v16 = v6;
      v7 = CResponseCriteriaSet::GetName(pQuery, i);
      v4(g_pScriptVM, hResult, v7, &v16);
      if ( (v18 & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v16);
    }
  }
}


// CSpeechScriptBridge::AICriteriaSetToScript  (line 944, @0x0000000002049280, libserver.so)  // inlines: CVariantBase, Free, SetNoAddref, ~CVariantBase
// calls: CSpeechScriptBridge::AICriteriaSetToScript, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CSpeechScriptBridge::Script_FindBestResponse, CAI_Expresser::SpeakDispatchResponse
CScriptAutoRef __fastcall CSpeechScriptBridge::AICriteriaSetToScript(uint64 *a1, const CResponseCriteriaSet *pQuery)
{
  bool v4; // zf
  ScriptVariant_t table; // [rsp+0h] [rbp-30h] BYREF

  table.m_flags = 0;
  table.m_type = 0;
  table.m_uint64 = 0;
  (*(*g_pScriptVM + 264LL))(g_pScriptVM, &table);
  CSpeechScriptBridge::AICriteriaSetToScript(pQuery, table.m_hScript);
  v4 = (table.m_flags & 1) == 0;
  *a1 = table.m_uint64;
  if ( !v4 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  return a1;
}


// CSpeechScriptBridge::MakeOldResponse  (line 957, @0x000000000204cff0, libserver.so)  // inlines: CScriptAutoRef, CUtlString, CVariantBase, Call, Free, GetIntField, GetSpeakerContext, GetWorldContext, IsEmpty, SetMatchScore, SetNoAddref, Term, VM, operator char const*, operator float, operator int, operator=, ~CScriptAutoRef, ~CUtlString, ~CVariantBase
// calls: GetStringField, GetValueToAutoRef, CRR_Response::SetScript, CUtlString::Set, ResponseParams::ResponseParams, CUtlString::FreeMemoryBlock, CUtlString::operator=, GetFloatInterval, float16::ConvertFloatTo16bits, GetBoolField, CUtlString::Get, CRR_Response::Init (15 total)
// callers: CSpeechScriptBridge::FindBestResponse
// strings: "kind", "(broken)", "rulename", "(script)", "predelay", "noscene"
bool __fastcall CSpeechScriptBridge::MakeOldResponse(
        CSpeechScriptBridge *const this,
        AI_Response *shim,
        const CSpeechScriptBridge::CSpeechResponse_t *pResponse,
        rr2::MatchInfo_t_0 *const match)
{
  bool StringField; // bl
  unsigned int v8; // ebx
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm1_4
  float v13; // xmm1_4
  const rr2::CRule *m_pRule; // rdx
  char *m_pString; // rax
  const char *v16; // rax
  char *v17; // rax
  const char *v18; // rax
  const char *v19; // rax
  char *speakerContext; // [rsp+8h] [rbp-118h]
  float *hi; // [rsp+10h] [rbp-110h]
  const char *lo; // [rsp+18h] [rbp-108h]
  ResponseType_t type; // [rsp+3Ch] [rbp-E4h]
  bool bNoScene; // [rsp+47h] [rbp-D9h] BYREF
  float flo; // [rsp+48h] [rbp-D8h] BYREF
  float fhi; // [rsp+4Ch] [rbp-D4h] BYREF
  CScriptAutoRef hResponse; // [rsp+50h] [rbp-D0h] BYREF
  CUtlString responseName; // [rsp+60h] [rbp-C0h] BYREF
  CScriptAutoRef hFunc; // [rsp+70h] [rbp-B0h] BYREF
  CUtlString ruleName; // [rsp+80h] [rbp-A0h] BYREF
  CScriptAutoRef hRule; // [rsp+90h] [rbp-90h] BYREF
  CScriptAutoRef hParms; // [rsp+A0h] [rbp-80h] BYREF
  ScriptVariant_t response; // [rsp+B0h] [rbp-70h] BYREF
  double v34; // [rsp+C0h] [rbp-60h] BYREF
  __int16 v35; // [rsp+C8h] [rbp-58h]
  __int16 v36; // [rsp+CAh] [rbp-56h]
  AI_ResponseParams airp; // [rsp+D0h] [rbp-50h] BYREF

  response.m_flags = 0;
  response.m_type = 0;
  response.m_uint64 = 0;
  StringField = 0;
  if ( (*(*g_pScriptVM + 160LL))(g_pScriptVM, pResponse->m_hFuncToCall.m_h, 0, 0, &response, pResponse->m_hRule.m_h, 1) != 0
    || response.m_type != 31 )
  {
    goto LABEL_3;
  }
  v34 = 0.0;
  v35 = 0;
  v36 = 0;
  hResponse.m_h = response.m_uint64;
  if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, response.m_uint64, "kind", &v34) == 0 )
    goto LABEL_12;
  if ( v35 == 5 )
  {
    type = LODWORD(v34);
    v8 = LODWORD(v34) & 0xFFFFFFFB;
  }
  else
  {
    if ( v35 == 1 )
    {
      v9 = *&v34;
    }
    else
    {
      if ( v35 != 34 )
      {
        if ( v35 == 31 )
          (*(*g_pScriptVM + 344LL))(g_pScriptVM, &v34);
        goto LABEL_12;
      }
      v9 = v34;
    }
    if ( v9 != v9 )
    {
LABEL_12:
      type = ResponseType_t::RESPONSE_NONE;
      v8 = 0;
      goto LABEL_13;
    }
    type = v9;
    v8 = v9 & 0xFFFFFFFB;
  }
LABEL_13:
  if ( (v36 & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, COERCE_DOUBLE(*&v34));
  if ( v8 == 3 )
  {
    responseName.m_pString = 0;
    if ( type == ResponseType_t::RESPONSE_SCRIPT )
    {
      CUtlString::operator=(&responseName, "(script)");
    }
    else
    {
      StringField = GetStringField(&responseName, hResponse.m_h, "target");
      if ( !StringField )
      {
LABEL_31:
        if ( responseName.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&responseName);
        goto LABEL_34;
      }
    }
    hFunc.m_h = 0;
    if ( GetValueToAutoRef(&hFunc, hResponse.m_h, "func") )
    {
      *&airp.delay.start.m_storage.rawWord = hFunc;
      CRR_Response::SetScript(shim, &airp);
    }
    ruleName.m_pString = 0;
    CUtlString::Set(&ruleName, "(broken)");
    hRule.m_h = 0;
    if ( GetValueToAutoRef(&hRule, hResponse.m_h, "rule") )
      GetStringField(&ruleName, hRule.m_h, "rulename");
    ResponseParams::ResponseParams(&airp);
    hParms.m_h = 0;
    StringField = GetValueToAutoRef(&hParms, hResponse.m_h, "params");
    if ( StringField )
    {
      bNoScene = 0;
      if ( GetFloatInterval(hParms.m_h, "predelay", &flo, &fhi) )
      {
        airp.flags |= 0x100u;
        airp.predelay.start.m_storage.rawWord = float16::ConvertFloatTo16bits(flo, v10);
        airp.predelay.range.m_storage.rawWord = float16::ConvertFloatTo16bits(fhi, v11);
      }
      if ( GetFloatInterval(hParms.m_h, "delay", &flo, &fhi) )
      {
        airp.flags |= 1u;
        airp.delay.start.m_storage.rawWord = float16::ConvertFloatTo16bits(flo, v12);
        airp.delay.range.m_storage.rawWord = float16::ConvertFloatTo16bits(fhi, v13);
      }
      if ( GetBoolField(&bNoScene, hParms.m_h, "noscene") && bNoScene )
        airp.flags |= 0x20u;
      m_pRule = match->m_pRule;
      m_pString = m_pRule->m_WorldContext.m_pString;
      if ( m_pString != 0 && *m_pString != 0 )
      {
        v16 = CUtlString::Get(&m_pRule->m_WorldContext);
        m_pRule = match->m_pRule;
        hi = v16;
      }
      else
      {
        hi = 0;
      }
      v17 = m_pRule->m_SpeakerContext.m_pString;
      if ( v17 != 0 && *v17 != 0 )
        speakerContext = CUtlString::Get(&m_pRule->m_SpeakerContext);
      else
        speakerContext = 0;
      lo = CUtlString::Get(&ruleName);
      v18 = CUtlString::Get(&responseName);
      CRR_Response::Init(shim, type, v18, &airp, lo, speakerContext, hi);
      shim->m_fMatchScore = match->score;
      v19 = CUtlString::Get(&ruleName);
      CSpeechScriptBridge::AddFollowupFromScript(&hResponse, shim, &airp, v19);
    }
    if ( hParms.m_h != 0 )
    {
      (*(*g_pScriptVM + 96LL))(g_pScriptVM);
      hParms.m_h = 0;
    }
    if ( hRule.m_h != 0 )
    {
      (*(*g_pScriptVM + 96LL))(g_pScriptVM);
      hRule.m_h = 0;
    }
    if ( ruleName.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&ruleName);
    if ( hFunc.m_h != 0 )
    {
      (*(*g_pScriptVM + 96LL))(g_pScriptVM);
      hFunc.m_h = 0;
    }
    goto LABEL_31;
  }
  StringField = 0;
LABEL_34:
  if ( hResponse.m_h != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    hResponse.m_h = 0;
  }
LABEL_3:
  if ( (response.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, response.m_uint64);
  return StringField;
}


// CSpeechScriptBridge::ScriptToOldResponseType  (line 1064, @0x0000000002048530, libserver.so)
ResponseType_t __fastcall CSpeechScriptBridge::ScriptToOldResponseType(
        const CSpeechScriptBridge *const this,
        int fromScript)
{
  return fromScript;
}


// CSpeechScriptBridge::Precache  (line 1070, @0x0000000002048540, libserver.so)
void __fastcall CSpeechScriptBridge::Precache(CSpeechScriptBridge *const this)
{
  ;
}


// CSpeechScriptBridge::AIConceptFromCriteriaSet  (line 1079, @0x0000000002048550, libserver.so)  // inlines: CAI_Concept, CEntityHandle, CHandle, CRR_Concept, CUtlSymbol, IsValidIndex
// calls: CResponseCriteriaSet::FindCriterionIndex, CResponseCriteriaSet::GetValue, CRR_Concept::CRR_Concept
// callers: CSpeechScriptBridge::Script_FindBestResponse, CSpeechScriptBridge::UnpackScriptTableToAIResponse
__int64 __fastcall CSpeechScriptBridge::AIConceptFromCriteriaSet(__int64 a1, const CResponseCriteriaSet *const crits)
{
  int CriterionIndex; // eax
  const char *Value; // rsi

  CriterionIndex = CResponseCriteriaSet::FindCriterionIndex(crits, "concept");
  if ( CriterionIndex >= 0
    && CriterionIndex < crits->m_Lookup.m_NumElements
    && (Value = CResponseCriteriaSet::GetValue(crits, CriterionIndex)) != 0 )
  {
    CRR_Concept::CRR_Concept(a1, Value);
    *(a1 + 4) = -1;
    return a1;
  }
  else
  {
    *(a1 + 4) = -1;
    *a1 = -1;
    return a1;
  }
}


// CSpeechScriptBridge::Script_FindBestResponse  (line 1096, @0x000000000204d900, libserver.so)  // inlines: AI_ResponseScriptWrapper, AddAIResponseToTable, CVariantBase, HScriptToEntity<CBaseEntity>, RegisterInstance<AI_ResponseScriptWrapper>, Term, ToEnt, VM, operator ScriptVariant_t, operator delete, ~AI_ResponseScriptWrapper, ~CScriptAutoRef, ~CVariantBase
// calls: GetScriptDesc<CEntityInstance>, InferExpresserFromBaseEntity, CResponseCriteriaSet::CResponseCriteriaSet, CSpeechScriptBridge::ScriptToAICriteriaSet, CRR_Response::CRR_Response, CSpeechScriptBridge::AIConceptFromCriteriaSet, CAI_Expresser::GatherLocalCriteria, CAI_Expresser::FindResponse, operator new, GetScriptDesc<AI_ResponseScriptWrapper>, CVariantBase<CVariantDefaultAllocator>::Free, CRR_Response::~CRR_Response (16 total)
// strings: "orig_query"
bool __fastcall CSpeechScriptBridge::Script_FindBestResponse(HSCRIPT ent, HSCRIPT query, HSCRIPT hResult)
{
  __int64 (__fastcall *v6)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  CBaseEntity *v8; // rax
  CAI_Expresser *v9; // r14
  bool v10; // bl
  IScriptVM *v11; // r14
  ScriptClassDesc_t *v12; // rax
  uint64 v13; // r14
  __int64 (__fastcall *v14)(IScriptVM *, HSCRIPT, char *); // rax
  void (__fastcall *v16)(IScriptVM *, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // r14
  void (__fastcall *v17)(IScriptVM *, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // rax
  __int64 (__fastcall *v18)(IScriptVM *, ScriptClassDesc_t *, AI_ResponseScriptWrapper *); // [rsp+8h] [rbp-288h]
  char v19; // [rsp+8h] [rbp-288h]
  AI_ResponseScriptWrapper *pScriptDescObjectInstance; // [rsp+10h] [rbp-280h]
  CAI_Concept concept; // [rsp+20h] [rbp-270h] BYREF
  uint64 v22[2]; // [rsp+30h] [rbp-260h] BYREF
  CVariantBase<CVariantDefaultAllocator> v23; // [rsp+40h] [rbp-250h] BYREF
  CResponseCriteriaSet crits; // [rsp+50h] [rbp-240h] BYREF
  AI_Response response; // [rsp+90h] [rbp-200h] BYREF
  unsigned __int64 v26; // [rsp+258h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  if ( ent == 0 )
    return 0;
  v6 = *(*g_pScriptVM + 208LL);
  Script = GetScriptDesc<CEntityInstance>(0);
  v8 = v6(g_pScriptVM, ent, Script);
  if ( v8 == 0 )
    return 0;
  v9 = InferExpresserFromBaseEntity(v8);
  if ( v9 == 0 )
    return 0;
  CResponseCriteriaSet::CResponseCriteriaSet(&crits);
  v10 = CSpeechScriptBridge::ScriptToAICriteriaSet(&crits, query);
  if ( v10 )
  {
    CRR_Response::CRR_Response(&response);
    CSpeechScriptBridge::AIConceptFromCriteriaSet(&concept, &crits);
    CAI_Expresser::GatherLocalCriteria(v9, &crits);
    v10 = CAI_Expresser::FindResponse(v9, &response, &concept, &crits);
    if ( v10 )
    {
      pScriptDescObjectInstance = operator new(0x1C0u);
      CRR_Response::CRR_Response(pScriptDescObjectInstance, &response);
      v11 = g_pScriptVM;
      v18 = *(*g_pScriptVM + 184LL);
      v12 = GetScriptDesc<AI_ResponseScriptWrapper>(pScriptDescObjectInstance);
      v13 = v18(v11, v12, pScriptDescObjectInstance);
      if ( v13 != 0 )
      {
        v14 = *(*g_pScriptVM + 240LL);
        v23.m_flags = 0;
        v23.m_type = 31;
        v23.m_uint64 = v13;
        v19 = v14(g_pScriptVM, hResult, "response");
        CVariantBase<CVariantDefaultAllocator>::Free(&v23);
        (*(*g_pScriptVM + 96LL))(g_pScriptVM, v13);
        if ( v19 != 0 )
        {
          v16 = *(*g_pScriptVM + 240LL);
          CSpeechScriptBridge::AICriteriaSetToScript(v22, &crits);
          v23.m_type = 31;
          v23.m_flags = 0;
          v23.m_uint64 = v22[0];
          v16(g_pScriptVM, hResult, "orig_query", &v23);
          CVariantBase<CVariantDefaultAllocator>::Free(&v23);
          if ( v22[0] != 0 )
            (*(*g_pScriptVM + 96LL))(g_pScriptVM);
          v17 = *(*g_pScriptVM + 240LL);
          v23.m_type = 1;
          v23.m_flags = 0;
          v23.m_int = LODWORD(response.m_fMatchScore);
          v17(g_pScriptVM, hResult, "score", &v23);
          CVariantBase<CVariantDefaultAllocator>::Free(&v23);
          goto LABEL_9;
        }
      }
      else if ( pScriptDescObjectInstance != 0 )
      {
        CRR_Response::~CRR_Response(pScriptDescObjectInstance);
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pScriptDescObjectInstance);
      }
    }
    v10 = 0;
LABEL_9:
    CRR_Response::~CRR_Response(&response);
  }
  CResponseCriteriaSet::~CResponseCriteriaSet(&crits);
  return v10;
}


// CSpeechScriptBridge::Script_CommitAIResponse  (line 1134, @0x000000000204de00, libserver.so)  // inlines: CAI_Concept, CEntityHandle, CHandle, CRR_Concept, CUtlSymbol, HScriptToEntity<CBaseEntity>, ToEnt
// calls: CRR_Response::CRR_Response, CResponseCriteriaSet::CResponseCriteriaSet, CSpeechScriptBridge::UnpackScriptTableToAIResponse, GetScriptDesc<CEntityInstance>, InferExpresserFromBaseEntity, CResponseCriteriaSet::~CResponseCriteriaSet, CRR_Response::~CRR_Response, __stack_chk_fail, _Unwind_Resume
bool __fastcall CSpeechScriptBridge::Script_CommitAIResponse(HSCRIPT entity, HSCRIPT scriptresponse)
{
  ScriptClassDesc_t *Script; // rdx
  CBaseEntity *v5; // rdi
  CAI_Expresser *v6; // rax
  char v7; // r13
  __int64 (__fastcall *v9)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // [rsp+8h] [rbp-258h]
  AIConcept_t concept; // [rsp+10h] [rbp-250h] BYREF
  CResponseCriteriaSet criteria; // [rsp+20h] [rbp-240h] BYREF
  AI_Response response; // [rsp+60h] [rbp-200h] BYREF
  unsigned __int64 v13; // [rsp+228h] [rbp-38h]

  v13 = __readfsqword(0x28u);
  CRR_Response::CRR_Response(&response);
  CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
  concept.m_iConcept.m_Id = -1;
  concept.m_hSpeaker.m_Index = -1;
  if ( CSpeechScriptBridge::UnpackScriptTableToAIResponse(&response, &criteria, &concept, scriptresponse)
    && (entity == 0
      ? (v5 = 0)
      : (v9 = *(*g_pScriptVM + 208LL), Script = GetScriptDesc<CEntityInstance>(0), v5 = v9(g_pScriptVM, entity, Script)),
        (v6 = InferExpresserFromBaseEntity(v5)) != 0) )
  {
    v7 = (*(v6->_vptr_IResponseFilter + 2))(v6, &concept, &response, &criteria, 0);
  }
  else
  {
    v7 = 0;
  }
  CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  CRR_Response::~CRR_Response(&response);
  return v7;
}


// CSpeechScriptBridge::UnpackScriptTableToAIResponse  (line 1157, @0x000000000204dca0, libserver.so)  // inlines: CScriptAutoRef, Term, VM, operator=, ~CScriptAutoRef
// calls: GetValueToAutoRef, GetScriptDesc<AI_ResponseScriptWrapper>, CRR_Response::operator=, CSpeechScriptBridge::ScriptToAICriteriaSet, CSpeechScriptBridge::AIConceptFromCriteriaSet, _Unwind_Resume
// callers: CSpeechScriptBridge::Script_CommitAIResponse
// strings: "orig_query"
bool __fastcall CSpeechScriptBridge::UnpackScriptTableToAIResponse(
        AI_Response *const pOutResponse,
        CResponseCriteriaSet *pOrigQuery,
        AIConcept_t *pConcept,
        HSCRIPT hsc)
{
  bool ValueToAutoRef; // bl
  ScriptClassDesc_t *Script; // rdx
  const CRR_Response *v11; // rax
  __int64 (__fastcall *v12)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // [rsp+8h] [rbp-68h]
  CScriptAutoRef hValResponse; // [rsp+10h] [rbp-60h] BYREF
  CScriptAutoRef hValOrigQuery; // [rsp+20h] [rbp-50h] BYREF
  UtlSymId_t v15[2]; // [rsp+30h] [rbp-40h] BYREF
  uint32 v16; // [rsp+34h] [rbp-3Ch]

  hValResponse.m_h = 0;
  hValOrigQuery.m_h = 0;
  if ( GetValueToAutoRef(&hValResponse, hsc, "response")
    && (ValueToAutoRef = GetValueToAutoRef(&hValOrigQuery, hsc, "orig_query")) )
  {
    v12 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<AI_ResponseScriptWrapper>(0);
    v11 = v12(g_pScriptVM, hValResponse.m_h, Script);
    CRR_Response::operator=(pOutResponse, v11);
    CSpeechScriptBridge::ScriptToAICriteriaSet(pOrigQuery, hValOrigQuery.m_h);
    CSpeechScriptBridge::AIConceptFromCriteriaSet(v15, pOrigQuery);
    pConcept->m_iConcept.m_Id = v15[0];
    pConcept->m_hSpeaker.m_Index = v16;
  }
  else
  {
    ValueToAutoRef = 0;
  }
  if ( hValOrigQuery.m_h != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    hValOrigQuery.m_h = 0;
  }
  if ( hValResponse.m_h != 0 )
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
  return ValueToAutoRef;
}


// CSpeechScriptBridge::ScriptToAICriteriaSet  (line 1181, @0x000000000204b250, libserver.so)  // inlines: AssignTo, CVariantBase, CoerceNumeric<float>, TempString, ToString, VariantFieldTypeName, ~CVariantBase
// calls: V_snprintf, CResponseCriteriaSet::AppendCriteria, CVariantBase<CVariantDefaultAllocator>::Free, Warning, _Unwind_Resume, __stack_chk_fail
// callers: CSpeechScriptBridge::Script_FindBestResponse, CSpeechScriptBridge::UnpackScriptTableToAIResponse
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "false", "true", "quaternion" (23 total)
// globals: jpt_204B504, jpt_204B399, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, jpt_204B7C0
bool __fastcall CSpeechScriptBridge::ScriptToAICriteriaSet(CResponseCriteriaSet *pOutQuery, HSCRIPT table)
{
  int v2; // ebx
  unsigned int v3; // r12d
  const char *m_uint64; // r13
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  float m_float64; // xmm0_4
  double m_int; // xmm0_8
  const char *v10; // rsi
  double m_float; // xmm0_8
  const char *v12; // rcx
  int num_entries; // [rsp+2Ch] [rbp-B4h]
  ScriptVariant_t key; // [rsp+40h] [rbp-A0h] BYREF
  ScriptVariant_t value; // [rsp+50h] [rbp-90h] BYREF
  char ick[72]; // [rsp+60h] [rbp-80h] BYREF
  unsigned __int64 v19; // [rsp+A8h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  num_entries = (*(*g_pScriptVM + 280LL))(g_pScriptVM);
  key.m_type = 0;
  key.m_flags = 0;
  key.m_uint64 = 0;
  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  if ( num_entries <= 0 )
  {
    CVariantBase<CVariantDefaultAllocator>::Free(&value);
  }
  else
  {
    v2 = 0;
    v3 = 0;
    do
    {
      v3 = (*(*g_pScriptVM + 296LL))(g_pScriptVM, table, v3, &key, &value);
      if ( key.m_type == 30 )
      {
        m_uint64 = key.m_uint64;
      }
      else
      {
        switch ( key.m_type )
        {
          case 0:
            goto LABEL_28;
          case 1:
            m_float = key.m_float;
            goto LABEL_30;
          case 3:
          case 0x27:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g %g",
              *key.m_pszString,
              *(key.m_uint64 + 4),
              *(key.m_uint64 + 8));
            break;
          case 4:
          case 0x1B:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g %g %g",
              *key.m_pszString,
              *(key.m_uint64 + 4),
              *(key.m_uint64 + 8),
              *(key.m_uint64 + 12));
            break;
          case 5:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", key.m_int);
            break;
          case 6:
            v12 = "true";
            if ( key.m_char == 0 )
              v12 = "false";
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v12);
            break;
          case 8:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", key.m_char);
            break;
          case 9:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%d %d %d %d",
              key.m_char,
              BYTE1(key.m_int),
              BYTE2(key.m_uint),
              HIBYTE(key.m_float));
            break;
          case 0x19:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g",
              *key.m_pszString,
              *(key.m_uint64 + 4));
            break;
          case 0x1A:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%lld", key.m_uint64);
            break;
          case 0x21:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%llu", key.m_uint64);
            break;
          case 0x22:
            m_float = key.m_float64;
LABEL_30:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
            break;
          case 0x25:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", key.m_int);
            break;
          default:
            switch ( key.m_type )
            {
              case 0:
                v10 = "void";
                break;
              case 1:
                v10 = "float";
                break;
              case 3:
                v10 = "vector";
                break;
              case 4:
                v10 = "quaternion";
                break;
              case 5:
                v10 = "integer";
                break;
              case 6:
                v10 = "boolean";
                break;
              case 8:
                v10 = "character";
                break;
              case 9:
                v10 = "color";
                break;
              case 0xD:
                v10 = "ehandle";
                break;
              case 0x19:
                v10 = "vector2d";
                break;
              case 0x1A:
                v10 = "int64";
                break;
              case 0x1B:
                v10 = "vector4d";
                break;
              case 0x1C:
                v10 = "resourcehandle";
                break;
              case 0x1F:
                v10 = "hscript";
                break;
              case 0x20:
                v10 = "variant";
                break;
              case 0x21:
                v10 = "uint64";
                break;
              case 0x22:
                v10 = "float64";
                break;
              case 0x25:
                v10 = "unsigned";
                break;
              case 0x26:
                v10 = "utlstringtoken";
                break;
              case 0x27:
                v10 = "qangle";
                break;
              case 0x30:
                v10 = "hscript_lightbinding";
                break;
              case 0x31:
                v10 = "js_value";
                break;
              case 0x32:
                v10 = "js_object";
                break;
              case 0x33:
                v10 = "js_array";
                break;
              case 0x34:
                v10 = "js_raw_args";
                break;
              default:
                v10 = "unknown_variant_type";
                break;
            }
            Warning("No conversion from %s to string at the moment!\n", v10);
LABEL_28:
            CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
            break;
        }
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
      }
      v5 = (value.m_type - 1);
      if ( v5 <= 0x24 && (v6 = 0x1302000051LL, _bittest64(&v6, v5)) )
      {
        switch ( value.m_type )
        {
          case 1:
            m_int = value.m_float;
            break;
          case 5:
          case 7:
            m_int = value.m_int;
            break;
          case 0x21:
            if ( value.m_int64 < 0 )
              m_float64 = (value.m_char & 1 | (value.m_uint64 >> 1)) + (value.m_char & 1 | (value.m_uint64 >> 1));
            else
              m_float64 = value.m_int;
            goto LABEL_9;
          case 0x22:
            m_float64 = value.m_float64;
LABEL_9:
            m_int = m_float64;
            break;
          case 0x25:
            m_int = value.m_int;
            break;
          default:
            m_int = 0.0;
            break;
        }
        V_snprintf(ick, 63, "%f", m_int);
        CResponseCriteriaSet::AppendCriteria(pOutQuery, m_uint64, ick, 1.0);
      }
      else if ( value.m_type == 30 )
      {
        CResponseCriteriaSet::AppendCriteria(pOutQuery, m_uint64, value.m_pszString, 1.0);
      }
      ++v2;
    }
    while ( v2 != num_entries );
    CVariantBase<CVariantDefaultAllocator>::Free(&value);
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&key);
  return num_entries > 0;
}


// CSpeechScriptBridge::Script_GetExpressers  (line 1217, @0x00000000020494b0, libserver.so)  // inlines: AssignTo, CVariantBase, EntityToHScript, Free, Get, Get<HSCRIPT__*>, GetPublicScriptScope, ToHScript, VariantFieldTypeName, ~CVariantBase
// calls: CResponseQueue::GetNumExpresserTargets, GetResponseName, CResponseQueue::GetExpresserHost, CEntityInstance::CreatePublicScriptScope, Warning, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "No free conversion of %s variant to HSCRIPT right now\n", "quaternion", "boolean", "character", "vector2d", "vector4d" (20 total)
// globals: jpt_20495EB
HSCRIPT __cdecl CSpeechScriptBridge::Script_GetExpressers()
{
  int NumExpresserTargets; // eax
  int v1; // ebx
  int v2; // ebx
  const char *ResponseName; // rax
  CBaseEntity *ExpresserHost; // rax
  CBaseEntity *v5; // r12
  void (__fastcall *v6)(IScriptVM *, uint64, const char *, HSCRIPT *); // r15
  HSCRIPT m_hScope; // rax
  HSCRIPT m_uint64; // rbx
  const char *v9; // rsi
  int sentinel; // [rsp+14h] [rbp-5Ch]
  const CResponseQueue *m_pQueue; // [rsp+18h] [rbp-58h]
  ScriptVariant_t table; // [rsp+20h] [rbp-50h] BYREF
  HSCRIPT v14; // [rsp+30h] [rbp-40h] BYREF
  __int16 v15; // [rsp+38h] [rbp-38h]
  __int16 v16; // [rsp+3Ah] [rbp-36h]

  m_pQueue = g_ResponseQueueManager.m_pQueue;
  NumExpresserTargets = CResponseQueue::GetNumExpresserTargets(m_pQueue);
  table.m_flags = 0;
  v1 = NumExpresserTargets;
  table.m_type = 0;
  table.m_uint64 = 0;
  sentinel = NumExpresserTargets;
  (*(*g_pScriptVM + 264LL))(g_pScriptVM, &table);
  if ( v1 > 0 )
  {
    v2 = 0;
    do
    {
      ExpresserHost = CResponseQueue::GetExpresserHost(m_pQueue, v2);
      v5 = ExpresserHost;
      if ( ExpresserHost != 0 )
      {
        v6 = *(*g_pScriptVM + 240LL);
        m_hScope = ExpresserHost->m_pEntity->m_hPublicScope.m_hScope;
        if ( m_hScope == 0 )
        {
          CEntityInstance::CreatePublicScriptScope(v5, 0);
          m_hScope = v5->m_pEntity->m_hPublicScope.m_hScope;
        }
        v15 = 31;
        v16 = 0;
        v14 = m_hScope;
        ResponseName = GetResponseName(v5);
        v6(g_pScriptVM, table.m_uint64, ResponseName, &v14);
        if ( (v16 & 1) != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v14);
      }
      ++v2;
    }
    while ( v2 != sentinel );
  }
  m_uint64 = table.m_uint64;
  if ( table.m_type == 0 )
    goto LABEL_14;
  if ( table.m_type != 31 )
  {
    switch ( table.m_type )
    {
      case 1:
        v9 = "float";
        break;
      case 3:
        v9 = "vector";
        break;
      case 4:
        v9 = "quaternion";
        break;
      case 5:
        v9 = "integer";
        break;
      case 6:
        v9 = "boolean";
        break;
      case 8:
        v9 = "character";
        break;
      case 9:
        v9 = "color";
        break;
      case 0xD:
        v9 = "ehandle";
        break;
      case 0x19:
        v9 = "vector2d";
        break;
      case 0x1A:
        v9 = "int64";
        break;
      case 0x1B:
        v9 = "vector4d";
        break;
      case 0x1C:
        v9 = "resourcehandle";
        break;
      case 0x1E:
        v9 = "cstring";
        break;
      case 0x20:
        v9 = "variant";
        break;
      case 0x21:
        v9 = "uint64";
        break;
      case 0x22:
        v9 = "float64";
        break;
      case 0x25:
        v9 = "unsigned";
        break;
      case 0x26:
        v9 = "utlstringtoken";
        break;
      case 0x27:
        v9 = "qangle";
        break;
      case 0x30:
        v9 = "hscript_lightbinding";
        break;
      case 0x31:
        v9 = "js_value";
        break;
      case 0x32:
        v9 = "js_object";
        break;
      case 0x33:
        v9 = "js_array";
        break;
      case 0x34:
        v9 = "js_raw_args";
        break;
      default:
        v9 = "unknown_variant_type";
        break;
    }
    Warning("No free conversion of %s variant to HSCRIPT right now\n", v9);
LABEL_14:
    m_uint64 = 0;
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&table);
  return m_uint64;
}


// CSpeechScriptBridge::MapOldToNewQuery  (line 1240, @0x0000000002048750, libserver.so)  // inlines: CUtlSymbol, Clear, EnsureCapacity, FirstInorder, Head, IsValidIndex, LeftChild, Next, RemoveAll, Sym, Symbol, V_AppearsToBeANumber, atof, memcpy, operator[]
// calls: CResponseCriteriaSet::GetCount, CResponseCriteriaSet::GetValue, V_strtod, strtod, CResponseCriteriaSet::GetNameSymbol, CSpeechScriptBridge::TranslateSymbol, rr2::CResponseQuery::AddFact, CUtlRBTree<CResponseCriteriaSet::CritEntry_t, short int, bool (*)(const CResponseCriteriaSet::CritEntry_t&, const CResponseCriteriaSet::CritEntry_t&), CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t, short int>, short int> >::NextInorder, __cxa_guard_acquire, CResponseCriteriaSet::ComputeCriteriaSymbol, __cxa_guard_release, memcpy (15 total)
// callers: CSpeechScriptBridge::FindBestResponse
// globals: `guard variable for'CSpeechScriptBridge::MapOldToNewQuery(CResponseCriteriaSet const&,rr2::CResponseQuery *)::TLK_CONCEPT, CSpeechScriptBridge::MapOldToNewQuery(CResponseCriteriaSet const&,rr2::CResponseQuery *)::TLK_CONCEPT
void __fastcall CSpeechScriptBridge::MapOldToNewQuery(
        CSpeechScriptBridge *const this,
        const CResponseCriteriaSet *const inset,
        rr2::CResponseQuery *pOut)
{
  int Count; // ebx
  uint32 m_nGrowSize; // eax
  rr2::CResponseQuery::CFact *v7; // rsi
  int m_Root; // ebx
  UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short int> *v9; // rcx
  __int16 m_Left; // dx
  const char *Value; // rax
  double v12; // xmm0_8
  float v13; // xmm1_4
  rr2::CResponseQuery::CFact *m_pMemory; // r12
  rr2::CResponseQuery::CFact *v15; // rax
  const char *pvalue; // [rsp+18h] [rbp-68h]
  CResponseCriteriaSet::CritSymbol_t v18; // [rsp+20h] [rbp-60h] BYREF
  CResponseCriteriaSet::CritSymbol_t sym; // [rsp+30h] [rbp-50h] BYREF
  rr2::Symbol key[4]; // [rsp+40h] [rbp-40h] BYREF

  pOut->m_facts.m_Size = 0;
  pOut->m_bSorted = 1;
  Count = CResponseCriteriaSet::GetCount(inset);
  if ( Count > pOut->m_facts.m_Memory.m_nAllocationCount )
  {
    m_nGrowSize = pOut->m_facts.m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = pOut->m_facts.m_Memory.m_pMemory;
        v15 = (**g_pMemAlloc)(g_pMemAlloc, 12LL * Count);
        pOut->m_facts.m_Memory.m_pMemory = v15;
        if ( m_pMemory != 0 )
          memcpy(v15, m_pMemory, 12LL * pOut->m_facts.m_Memory.m_nAllocationCount);
        pOut->m_facts.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v7 = pOut->m_facts.m_Memory.m_pMemory;
        if ( v7 != 0 )
          pOut->m_facts.m_Memory.m_pMemory = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v7, 12LL * Count);
        else
          pOut->m_facts.m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 12LL * Count);
      }
      pOut->m_facts.m_Memory.m_nAllocationCount = Count;
    }
  }
  if ( `guard variable for'CSpeechScriptBridge::MapOldToNewQuery(CResponseCriteriaSet const&,rr2::CResponseQuery *)::TLK_CONCEPT == 0
    && __cxa_guard_acquire(&`guard variable for'CSpeechScriptBridge::MapOldToNewQuery(CResponseCriteriaSet const&,rr2::CResponseQuery *)::TLK_CONCEPT) != 0 )
  {
    CResponseCriteriaSet::ComputeCriteriaSymbol("concept");
    __cxa_guard_release(&`guard variable for'CSpeechScriptBridge::MapOldToNewQuery(CResponseCriteriaSet const&,rr2::CResponseQuery *)::TLK_CONCEPT);
  }
  m_Root = inset->m_Lookup.m_Root;
  if ( inset->m_Lookup.m_Root != -1 )
  {
    v9 = inset->m_Lookup.m_Elements.m_pMemory;
    m_Left = v9[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( v9[m_Left].m_Left != -1 )
        m_Left = v9[m_Left].m_Left;
      m_Root = m_Left;
    }
    for ( ;
          m_Root >= 0 && m_Root < inset->m_Lookup.m_NumElements;
          m_Root = CUtlRBTree<CResponseCriteriaSet::CritEntry_t,short,bool (*)(CResponseCriteriaSet::CritEntry_t const&,CResponseCriteriaSet::CritEntry_t const&),CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short>,short>>::NextInorder(
                     &inset->m_Lookup,
                     m_Root) )
    {
      Value = CResponseCriteriaSet::GetValue(inset, m_Root);
      *&key[0].m_Sym.m_Id = 0;
      pvalue = Value;
      V_strtod(Value, key);
      if ( (*&key[0].m_Sym.m_Id == 0 || pvalue == *&key[0].m_Sym.m_Id) && v12 == 0.0 )
      {
        CUtlSymbolTable::AddString(&this->m_pDB->m_SymTab, pvalue);
        sym.m_Id = key[0].m_Sym.m_Id;
        CResponseCriteriaSet::GetNameSymbol(inset, m_Root);
        CSpeechScriptBridge::TranslateSymbol(&key[0].m_Sym, this, &v18);
        rr2::CResponseQuery::AddFact(pOut, key, &sym);
      }
      else
      {
        strtod(pvalue, 0);
        CResponseCriteriaSet::GetNameSymbol(inset, m_Root);
        CSpeechScriptBridge::TranslateSymbol(&key[0].m_Sym, this, &sym);
        rr2::CResponseQuery::AddFact(pOut, key, v13);
      }
    }
  }
}


// CSpeechScriptBridge::TranslateSymbol  (line 1266, @0x00000000020485c0, libserver.so)  // inlines: CUtlSymbol, Sym, Symbol, SymbolToStr
// calls: CUtlSymbolTable::String, CUtlSymbolTable::AddString
// callers: CSpeechScriptBridge::MapOldToNewQuery
CUtlSymbol *__fastcall CSpeechScriptBridge::TranslateSymbol(
        CUtlSymbol *a1,
        CSpeechScriptBridge *const this,
        const CResponseCriteriaSet::CritSymbol_t *const sym)
{
  const char *v5; // rax
  CUtlSymbol id; // [rsp+0h] [rbp-30h] BYREF

  id.m_Id = sym->m_Id;
  v5 = CUtlSymbolTable::String(CResponseCriteriaSet::sm_pCriteriaSymbols, &id);
  CUtlSymbolTable::AddString(&this->m_pDB->m_SymTab, v5);
  a1->m_Id = id.m_Id;
  return a1;
}


// CSpeechScriptBridge::FindBestResponse  (line 1271, @0x000000000204d660, libserver.so)  // inlines: CResponseQuery, CUtlMemory, CUtlVector, CUtlVectorBase, IsValid, Purge, RemoveAll, ~CResponseQuery, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CSpeechScriptBridge::MapOldToNewQuery, CSpeechScriptBridge::MakeOldResponse, CUtlMemory<rr2::CResponseQuery::CFact, int>::Purge, CUtlVectorBase<rr2::CResponseQuery::CFact, CUtlMemory<rr2::CResponseQuery::CFact, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CInstancedResponseSystem::FindBestResponse, CBaseEntity::DispatchResponse
bool __fastcall CSpeechScriptBridge::FindBestResponse(
        CSpeechScriptBridge *const this,
        const CResponseCriteriaSet *const set,
        rr2::MatchInfo_t_0 *const match,
        AI_Response *const outResponse,
        IResponseFilter *pFilter)
{
  rr2::IResponseDB *m_pDB; // rax
  float score; // xmm0_4
  bool result; // al
  bool v11; // [rsp+Ch] [rbp-74h]
  _QWORD v12[4]; // [rsp+10h] [rbp-70h] BYREF
  rr2::CResponseQuery vQuery; // [rsp+30h] [rbp-50h] BYREF

  vQuery.m_facts.m_Size = 0;
  m_pDB = this->m_pDB;
  vQuery.m_facts.m_Memory.m_pMemory = 0;
  vQuery.m_facts.m_Memory.m_nAllocationCount = 0;
  vQuery.m_facts.m_Memory.m_nGrowSize = 0;
  vQuery.m_bSorted = 0;
  vQuery.m_db = m_pDB;
  CSpeechScriptBridge::MapOldToNewQuery(this, set, &vQuery);
  (*(this->m_pDB->_vptr_IResponseDB + 2))(v12, this->m_pDB, &vQuery, 0);
  *&match->score = v12[0];
  score = match->score;
  match->pRulePayload = v12[1];
  match->m_pRule = v12[2];
  if ( score == -2147483600.0 || score <= 0.0 )
  {
    result = 0;
    vQuery.m_facts.m_Size = 0;
    if ( (vQuery.m_facts.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      return result;
  }
  else
  {
    result = CSpeechScriptBridge::MakeOldResponse(this, outResponse, match->pRulePayload, match);
    vQuery.m_facts.m_Size = 0;
    if ( (vQuery.m_facts.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      return result;
  }
  v11 = result;
  CUtlMemory<rr2::CResponseQuery::CFact,int>::Purge(&vQuery.m_facts.m_Memory);
  result = v11;
  if ( (vQuery.m_facts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<rr2::CResponseQuery::CFact,int>::Purge(&vQuery.m_facts.m_Memory);
    return v11;
  }
  return result;
}


// CRuleScriptBridge::CScriptResponse_t::CScriptResponse_t  (line 1326, @0x0000000002048620, libserver.so)  // inlines: CScriptAutoRef, Set, Term, VM, ~CScriptAutoRef, ~IRulePayload
// calls: _Unwind_Resume
// callers: CSpeechScriptBridge::CSpeechResponse_t::CSpeechResponse_t
void __fastcall CRuleScriptBridge::CScriptResponse_t::CScriptResponse_t(
        CRuleScriptBridge::CScriptResponse_t *const this,
        const HSCRIPT rule,
        const HSCRIPT response)
{
  this->_vptr_IRulePayload = off_3FEAD70;
  this->m_hRule.m_h = 0;
  if ( rule != 0 )
    this->m_hRule.m_h = (*(*g_pScriptVM + 128LL))(g_pScriptVM);
  this->m_hResponse.m_h = 0;
  if ( response != 0 )
    this->m_hResponse.m_h = (*(*g_pScriptVM + 128LL))(g_pScriptVM, response);
}


// CRuleScriptBridge::CScriptResponse_t::~CScriptResponse_t  (line 1332, @0x0000000002047820, libserver.so)  // inlines: Term, VM, ~CScriptAutoRef, ~IRulePayload
// callers: CSpeechScriptBridge::CSpeechResponse_t::~CSpeechResponse_t, CRuleScriptBridge::CScriptResponse_t::~CScriptResponse_t, CSpeechScriptBridge::CSpeechResponse_t::CSpeechResponse_t
void __fastcall CRuleScriptBridge::CScriptResponse_t::~CScriptResponse_t(
        CRuleScriptBridge::CScriptResponse_t *const this)
{
  this->_vptr_IRulePayload = off_3FEAD70;
  if ( this->m_hResponse.m_h != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_hResponse.m_h = 0;
  }
  if ( this->m_hRule.m_h != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_hRule.m_h = 0;
  }
  this->_vptr_IRulePayload = off_3FEAC70;
}


// CRuleScriptBridge::CScriptResponse_t::~CScriptResponse_t  (line 1332, @0x00000000020478e0, libserver.so)
// calls: CRuleScriptBridge::CScriptResponse_t::~CScriptResponse_t, operator delete
void __fastcall CRuleScriptBridge::CScriptResponse_t::~CScriptResponse_t(
        CRuleScriptBridge::CScriptResponse_t *const this)
{
  CRuleScriptBridge::CScriptResponse_t::~CScriptResponse_t(this);
  operator delete(this);
}


// CRuleScriptBridge::CScriptResponse_t::IsValid  (line 1337, @0x00000000020486d0, libserver.so)
bool __fastcall CRuleScriptBridge::CScriptResponse_t::IsValid(const CRuleScriptBridge::CScriptResponse_t *const this)
{
  return this->m_hRule.m_h != 0 && this->m_hResponse.m_h != 0;
}


