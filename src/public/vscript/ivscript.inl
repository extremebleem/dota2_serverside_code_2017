
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IScriptInstanceHelper::GetProxied  (line 367, @0x0000000001f71a60, libserver.so)
void *__fastcall IScriptInstanceHelper::GetProxied(
        IScriptInstanceHelper *const this,
        void *p,
        ScriptFunctionBinding_t *pBinding)
{
  return p;
}


// IScriptInstanceHelper::BindOnRead  (line 369, @0x0000000001f71a70, libserver.so)
void *__fastcall IScriptInstanceHelper::BindOnRead(
        IScriptInstanceHelper *const this,
        HSCRIPT hInstance,
        void *pOld,
        const char *pszId)
{
  return 0;
}


// CScriptConstructor<CRuleScriptBridge>::Construct  (line 660, @0x000000000204e8f0, libserver.so)  // inlines: CRuleScriptBridge
// calls: operator new, CRuleScriptBridge::InitDB, operator delete, _Unwind_Resume
void *__cdecl CScriptConstructor<CRuleScriptBridge>::Construct()
{
  CRuleScriptBridge *v0; // rax
  CRuleScriptBridge *v1; // rbx

  v0 = operator new(8u);
  v0->m_pDB = 0;
  v1 = v0;
  CRuleScriptBridge::InitDB(v0);
  return v1;
}


// CScriptConstructor<CScriptNativeOutputs>::Construct  (line 660, @0x00000000030d2750, libserver.so)  // inlines: CScriptNativeOutputs, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: operator new
void *__cdecl CScriptConstructor<CScriptNativeOutputs>::Construct()
{
  void *result; // rax

  result = operator new(0x18u);
  *result = 0;
  *(result + 1) = 0;
  *(result + 4) = 0;
  *(result + 5) = 0;
  return result;
}


// CScriptDestructor<CRuleScriptBridge>::Destruct  (line 666, @0x000000000204e5a0, libserver.so)  // inlines: IsInitialized, TermDB, ~CRuleScriptBridge
// calls: operator delete
void __fastcall CScriptDestructor<CRuleScriptBridge>::Destruct(void *p)
{
  __int64 v2; // rdi

  if ( p != 0 )
  {
    v2 = *p;
    if ( v2 != 0 )
    {
      (*(*v2 + 8LL))(v2);
      *p = 0;
    }
    operator delete(p);
  }
}


// CScriptDestructor<AI_ResponseScriptWrapper>::Destruct  (line 666, @0x000000000204e5e0, libserver.so)  // inlines: operator delete, ~AI_ResponseScriptWrapper
// calls: CRR_Response::~CRR_Response
void __fastcall CScriptDestructor<AI_ResponseScriptWrapper>::Destruct(void *p)
{
  if ( p != 0 )
  {
    CRR_Response::~CRR_Response(p);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
  }
}


// CScriptDestructor<CScriptNativeOutputs>::Destruct  (line 666, @0x00000000030d2780, libserver.so)  // inlines: Purge, RemoveAll, ~CScriptNativeOutputs, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: free, operator delete, CUtlMemory<ScriptEntityIOOutputDesc_t, int>::Purge
void __fastcall CScriptDestructor<CScriptNativeOutputs>::Destruct(void *p)
{
  __int64 v2; // r12
  int v3; // ebx
  void *v4; // rdi
  bool v5; // zf

  if ( p != 0 )
  {
    if ( *p > 0 )
    {
      v2 = 0;
      v3 = 0;
      do
      {
        ++v3;
        v4 = *(*(p + 1) + v2);
        v2 += 24;
        free(v4);
      }
      while ( v3 < *p );
    }
    v5 = (*(p + 5) & 0xC0000000) == 0;
    *p = 0;
    if ( v5 )
    {
      CUtlMemory<ScriptEntityIOOutputDesc_t,int>::Purge((p + 8));
      if ( (*(p + 5) & 0xC0000000) == 0 )
        CUtlMemory<ScriptEntityIOOutputDesc_t,int>::Purge((p + 8));
    }
    operator delete(p);
  }
}


// IScriptVM::Call<HSCRIPT__*>  (line 958, @0x0000000001f8a1d0, libserver.so)  // inlines: CVariantBase, Free, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: Script_SpawnEntityListFromTableAsynchronous
ScriptStatus_t __fastcall IScriptVM::Call<HSCRIPT__ *>(
        IScriptVM *const this,
        HSCRIPT hFunction,
        HSCRIPT hScope,
        bool bWait,
        ScriptVariant_t *pReturn,
        HSCRIPT__ *arg1)
{
  __int64 v6; // rax
  ScriptStatus_t result; // eax
  ScriptStatus_t v8; // [rsp+Ch] [rbp-24h]
  CVariantBase<CVariantDefaultAllocator> args[1]; // [rsp+10h] [rbp-20h] BYREF

  args[0].m_uint64 = arg1;
  v6 = *this;
  args[0].m_flags = 0;
  args[0].m_type = 31;
  result = (*(v6 + 160))(this, hFunction, args, 1, pReturn, hScope, bWait);
  if ( (args[0].m_flags & 1) != 0 )
  {
    v8 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args[0].m_uint64);
    return v8;
  }
  return result;
}


// CScriptAccessorT<CEntityFrameScriptAccessorBase, false>::~CScriptAccessorT  (line 1123, @0x00000000030d25d0, libserver.so)  // inlines: Term
void __fastcall CScriptAccessorT<CEntityFrameScriptAccessorBase,false>::~CScriptAccessorT(
        CScriptAccessorT<CEntityFrameScriptAccessorBase,false> *const this)
{
  this->m_hScope = 0;
}


// CScriptAccessorT<CDefScriptAccessorBase, true>::Call<char const*>  (line 1229, @0x00000000030c2170, libserver.so)  // inlines: CVariantBase, CopyData, Free, GetVM, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CEntitySystem::DoConstructEntity, CScriptComponent::GetEntityIOInputs
ScriptStatus_t __fastcall CScriptAccessorT<CDefScriptAccessorBase,true>::Call<char const*>(
        const CScriptAccessorT<CDefScriptAccessorBase,true> *const this,
        HSCRIPT hFunction,
        ScriptVariant_t *pReturn,
        const char *arg1)
{
  ScriptStatus_t result; // eax
  ScriptStatus_t v5; // [rsp+Ch] [rbp-24h]
  CVariantBase<CVariantDefaultAllocator> args[1]; // [rsp+10h] [rbp-20h] BYREF

  args[0].m_flags = 0;
  args[0].m_uint64 = arg1;
  args[0].m_type = 30;
  result = (*(*g_pScriptVM + 160LL))(g_pScriptVM, hFunction, args, 1, pReturn, this->m_hScope, 1);
  if ( (args[0].m_flags & 1) != 0 )
  {
    v5 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args[0].m_uint64);
    return v5;
  }
  return result;
}


// CScriptScopeT<CVScriptGameSystem::CScriptScopeBase, true>::~CScriptScopeT  (line 1524, @0x0000000001f8a320, libserver.so)  // inlines: Count, Free, GetVM, Purge, RemoveAll, Term, ~CScriptAccessorT, ~CUtlVectorUltraConservative
// globals: g_pScriptVM
void __fastcall CScriptScopeT<CVScriptGameSystem::CScriptScopeBase,true>::~CScriptScopeT(
        CScriptScopeT<CVScriptGameSystem::CScriptScopeBase,true> *const this)
{
  IScriptVM *v2; // r14
  int v3; // ebx
  __int64 v4; // r13
  HSCRIPT__ **v5; // rdx
  CUtlVectorUltraConservative<HSCRIPT__**,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rsi

  if ( this->m_hScope != 0 )
  {
    v2 = g_pScriptVM;
    v3 = 0;
    if ( g_pScriptVM != 0 )
    {
      while ( 1 )
      {
        m_pData = this->m_FuncHandles.m_pData;
        if ( m_pData != 0 )
        {
          if ( v3 >= m_pData->m_Size )
            goto LABEL_8;
        }
        else if ( v3 >= 0 )
        {
          goto LABEL_8;
        }
        v4 = v3;
        v5 = m_pData->m_Elements[v3++];
        (*(*v2 + 152LL))(v2, *v5);
        *this->m_FuncHandles.m_pData->m_Elements[v4] = 0;
      }
    }
    m_pData = this->m_FuncHandles.m_pData;
LABEL_8:
    if ( m_pData != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_FuncHandles.m_pData = 0;
    }
    if ( this->m_hScope != 0 && v2 != 0 && (this->m_flags & 1) == 0 )
    {
      (*(*v2 + 136LL))(v2);
      this->m_hScope = 0;
    }
    else
    {
      this->m_hScope = 0;
    }
  }
  this->m_flags = 0;
  if ( this->m_FuncHandles.m_pData != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    this->m_FuncHandles.m_pData = 0;
  }
  this->m_hScope = 0;
}


// CScriptScopeT<CDefScriptAccessorBase, true>::~CScriptScopeT  (line 1524, @0x0000000001f8a440, libserver.so)  // inlines: Count, Free, GetVM, Purge, RemoveAll, Term, ~CScriptAccessorT, ~CUtlVectorUltraConservative
// callers: CVScriptGameSystem::OnServerGamePostSimulate
void __fastcall CScriptScopeT<CDefScriptAccessorBase,true>::~CScriptScopeT(
        CScriptScopeT<CDefScriptAccessorBase,true> *const this)
{
  int v2; // ebx
  IScriptVM *v3; // r14
  __int64 v4; // r13
  HSCRIPT__ **v5; // rdx
  CUtlVectorUltraConservative<HSCRIPT__**,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rsi

  if ( this->m_hScope != 0 )
  {
    v2 = 0;
    v3 = g_pScriptVM;
    if ( g_pScriptVM != 0 )
    {
      while ( 1 )
      {
        m_pData = this->m_FuncHandles.m_pData;
        if ( m_pData != 0 )
        {
          if ( v2 >= m_pData->m_Size )
            goto LABEL_8;
        }
        else if ( v2 >= 0 )
        {
          goto LABEL_8;
        }
        v4 = v2;
        v5 = m_pData->m_Elements[v2++];
        (*(*v3 + 152LL))(v3, *v5);
        *this->m_FuncHandles.m_pData->m_Elements[v4] = 0;
      }
    }
    m_pData = this->m_FuncHandles.m_pData;
LABEL_8:
    if ( m_pData != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_FuncHandles.m_pData = 0;
    }
    if ( this->m_hScope != 0 && v3 != 0 && (this->m_flags & 1) == 0 )
    {
      (*(*v3 + 136LL))(v3);
      this->m_hScope = 0;
    }
    else
    {
      this->m_hScope = 0;
    }
  }
  this->m_flags = 0;
  if ( this->m_FuncHandles.m_pData != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    this->m_FuncHandles.m_pData = 0;
  }
  this->m_hScope = 0;
}


// Recursive_ConvertKeyValuesToTable  (line 1948, @0x0000000001f40910, libserver.so)  // inlines: CVariantBase, Color, CopyData, KeyValueToVariant, SetColor, operator=, ~CVariantBase
// calls: KeyValues::GetFirstValue, KeyValues::GetDataType, KeyValues::GetColor, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::GetName, KeyValues::GetNextValue, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetInt, KeyValues::GetString, KeyValues::GetPtr (16 total)
// callers: Script_LoadKeyValuesFromString, Script_LoadKeyValues, CVScriptGameEventListener::FireGameEvent
// globals: jpt_1F409A6
void __fastcall Recursive_ConvertKeyValuesToTable(KeyValues *pKeyValues, IScriptVM *pVM, HSCRIPT hTable)
{
  KeyValues *i; // r12
  void (__fastcall *v5)(IScriptVM *, HSCRIPT, const char *, ScriptVariant_t *); // r14
  float v6; // xmm1_4
  int Color; // eax
  const char *Name; // rax
  KeyValues *j; // r12
  __int64 v10; // rax
  void (__fastcall *v11)(IScriptVM *, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  const char *v12; // rax
  int Int; // eax
  const char *String; // rax
  float Float; // xmm0_4
  uint64 Uint64; // rax
  ScriptVariant_t childTable; // [rsp+20h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v20; // [rsp+30h] [rbp-50h] BYREF
  Color v21; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  for ( i = KeyValues::GetFirstValue(pKeyValues); i != 0; i = KeyValues::GetNextValue(i) )
  {
    v5 = *(*pVM + 240LL);
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    switch ( KeyValues::GetDataType(i, 0) )
    {
      case CKeyValues_Data::types_t::TYPE_STRING:
        String = KeyValues::GetString(i, 0, "", 0, 0);
        v20.m_flags = 0;
        v20.m_type = 30;
        v20.m_uint64 = String;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_INT:
        Int = KeyValues::GetInt(i, 0, 0);
        v20.m_type = 5;
        v20.m_flags = 0;
        v20.m_int = Int;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_FLOAT:
        Float = KeyValues::GetFloat(i, 0, v6);
        v20.m_type = 1;
        v20.m_flags = 0;
        v20.m_float = Float;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_PTR:
        v20.m_uint64 = KeyValues::GetPtr(i, 0, 0);
        v20.m_flags = 0;
        v20.m_type = 33;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_COLOR:
        v21._color[0] = 0;
        v21._color[1] = 0;
        v21._color[2] = 0;
        v21._color[3] = 0;
        Color = KeyValues::GetColor(i, 0, &v21);
        v20.m_type = 9;
        v20.m_flags = 0;
        v20.m_int = Color;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_UINT64:
        Uint64 = KeyValues::GetUint64(i, 0, 0);
        v20.m_type = 33;
        v20.m_flags = 0;
        v20.m_uint64 = Uint64;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      default:
        break;
    }
    Name = KeyValues::GetName(i);
    v5(pVM, hTable, Name, &childTable);
    CVariantBase<CVariantDefaultAllocator>::Free(&childTable);
  }
  for ( j = KeyValues::GetFirstTrueSubKey(pKeyValues); j != 0; j = KeyValues::GetNextTrueSubKey(j) )
  {
    v10 = *pVM;
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    (*(v10 + 264))(pVM, &childTable);
    Recursive_ConvertKeyValuesToTable(j, pVM, childTable.m_hScript);
    v11 = *(*pVM + 240LL);
    v20.m_flags = 0;
    v20.m_type = 31;
    v20.m_uint64 = childTable.m_uint64;
    v12 = KeyValues::GetName(j);
    v11(pVM, hTable, v12, &v20);
    CVariantBase<CVariantDefaultAllocator>::Free(&v20);
    (*(*pVM + 344LL))(pVM, &childTable);
    CVariantBase<CVariantDefaultAllocator>::Free(&childTable);
  }
}


// Recursive_ConvertKeyValuesToTable  (line 1948, @0x000000000216cc90 libserver.so, @0x0000000002473db0 libserver.so, @0x00000000027fd560 libserver.so)  // inlines: CVariantBase, Color, CopyData, Free, KeyValueToVariant, SetColor, operator=, ~CVariantBase
// calls: KeyValues::GetFirstValue, KeyValues::GetDataType, KeyValues::GetColor, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, KeyValues::GetName, KeyValues::GetNextValue, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetInt, KeyValues::GetString, KeyValues::GetPtr, KeyValues::GetUint64 (16 total)
// callers: CBaseCombatCharacter::GetFilteredDamage
// globals: jpt_216CD26
void __fastcall Recursive_ConvertKeyValuesToTable(KeyValues *pKeyValues, IScriptVM *pVM, HSCRIPT hTable)
{
  KeyValues *i; // r12
  void (__fastcall *v5)(IScriptVM *, HSCRIPT, const char *, ScriptVariant_t *); // r14
  float v6; // xmm1_4
  int Color; // eax
  const char *Name; // rax
  KeyValues *j; // r12
  __int64 v10; // rax
  void (__fastcall *v11)(IScriptVM *, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  const char *v12; // rax
  int Int; // eax
  const char *String; // rax
  void *Ptr; // rax
  uint64 Uint64; // rax
  float Float; // xmm0_4
  ScriptVariant_t childTable; // [rsp+20h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v21; // [rsp+30h] [rbp-50h] BYREF
  Color v22; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  for ( i = KeyValues::GetFirstValue(pKeyValues); i != 0; i = KeyValues::GetNextValue(i) )
  {
    v5 = *(*pVM + 240LL);
    childTable.m_flags = 0;
    childTable.m_type = 0;
    childTable.m_uint64 = 0;
    switch ( KeyValues::GetDataType(i, 0) )
    {
      case CKeyValues_Data::types_t::TYPE_STRING:
        String = KeyValues::GetString(i, 0, "", 0, 0);
        v21.m_flags = 0;
        v21.m_type = 30;
        v21.m_uint64 = String;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        if ( (v21.m_flags & 1) != 0 )
          goto LABEL_4;
        break;
      case CKeyValues_Data::types_t::TYPE_INT:
        Int = KeyValues::GetInt(i, 0, 0);
        v21.m_type = 5;
        v21.m_flags = 0;
        v21.m_int = Int;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        if ( (v21.m_flags & 1) != 0 )
          goto LABEL_4;
        break;
      case CKeyValues_Data::types_t::TYPE_FLOAT:
        Float = KeyValues::GetFloat(i, 0, v6);
        v21.m_type = 1;
        v21.m_flags = 0;
        v21.m_float = Float;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        if ( (v21.m_flags & 1) != 0 )
          goto LABEL_4;
        break;
      case CKeyValues_Data::types_t::TYPE_PTR:
        Ptr = KeyValues::GetPtr(i, 0, 0);
        v21.m_flags = 0;
        v21.m_type = 33;
        v21.m_uint64 = Ptr;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        if ( (v21.m_flags & 1) != 0 )
          goto LABEL_4;
        break;
      case CKeyValues_Data::types_t::TYPE_COLOR:
        v22._color[0] = 0;
        v22._color[1] = 0;
        v22._color[2] = 0;
        v22._color[3] = 0;
        Color = KeyValues::GetColor(i, 0, &v22);
        v21.m_type = 9;
        v21.m_flags = 0;
        v21.m_int = Color;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        if ( (v21.m_flags & 1) != 0 )
          goto LABEL_4;
        break;
      case CKeyValues_Data::types_t::TYPE_UINT64:
        Uint64 = KeyValues::GetUint64(i, 0, 0);
        v21.m_type = 33;
        v21.m_flags = 0;
        v21.m_uint64 = Uint64;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        if ( (v21.m_flags & 1) != 0 )
LABEL_4:
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v21.m_uint64);
        break;
      default:
        break;
    }
    Name = KeyValues::GetName(i);
    v5(pVM, hTable, Name, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
  for ( j = KeyValues::GetFirstTrueSubKey(pKeyValues); j != 0; j = KeyValues::GetNextTrueSubKey(j) )
  {
    v10 = *pVM;
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    (*(v10 + 264))(pVM, &childTable);
    Recursive_ConvertKeyValuesToTable(j, pVM, childTable.m_hScript);
    v11 = *(*pVM + 240LL);
    v21.m_type = 31;
    v21.m_flags = 0;
    v21.m_uint64 = childTable.m_uint64;
    v12 = KeyValues::GetName(j);
    v11(pVM, hTable, v12, &v21);
    if ( (v21.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v21.m_uint64);
    (*(*pVM + 344LL))(pVM, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
}


// Recursive_ConvertKeyValuesToTable  (line 1948, @0x0000000002438910 libserver.so, @0x00000000025aea60 libserver.so)  // inlines: CVariantBase, Color, CopyData, KeyValueToVariant, SetColor, operator=, ~CVariantBase
// calls: KeyValues::GetFirstValue, KeyValues::GetDataType, KeyValues::GetColor, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::GetName, KeyValues::GetNextValue, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetInt, KeyValues::GetString, KeyValues::GetPtr (16 total)
// callers: IScriptVM::CreateTableFromKeyValues, CDOTABaseAbility::Script_GetAbilityKeyValues, VScriptFilter::RunScriptFilter, CDOTA_Ability_Lua::OnProjectileHit_ExtraData, CDOTA_Ability_Lua::OnProjectileThink_ExtraData, CDOTA_Ability_Lua::OnHeroDiedNearby, CDOTA_ActionRunner::PerformAction_RunScript
// globals: jpt_24389AA
void __fastcall Recursive_ConvertKeyValuesToTable(KeyValues *pKeyValues, IScriptVM *pVM, HSCRIPT hTable)
{
  KeyValues *i; // r12
  void (__fastcall *v5)(IScriptVM *, HSCRIPT, const char *, ScriptVariant_t *); // r14
  float v6; // xmm1_4
  const char *Name; // rax
  KeyValues *j; // r12
  __int64 v9; // rax
  void (__fastcall *v10)(IScriptVM *, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  const char *v11; // rax
  int Int; // eax
  void *Ptr; // rax
  float Float; // xmm0_4
  uint64 Uint64; // rax
  const char *String; // [rsp+18h] [rbp-78h]
  ScriptVariant_t childTable; // [rsp+30h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v20; // [rsp+40h] [rbp-50h] BYREF
  Color v21; // [rsp+50h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  for ( i = KeyValues::GetFirstValue(pKeyValues); i != 0; i = KeyValues::GetNextValue(i) )
  {
    v5 = *(*pVM + 240LL);
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    switch ( KeyValues::GetDataType(i, 0) )
    {
      case CKeyValues_Data::types_t::TYPE_STRING:
        String = KeyValues::GetString(i, 0, "", 0, 0);
        v20.m_type = 0;
        v20.m_flags = 0;
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        v20.m_type = 30;
        v20.m_uint64 = String;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_INT:
        Int = KeyValues::GetInt(i, 0, 0);
        v20.m_type = 5;
        v20.m_flags = 0;
        v20.m_int = Int;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_FLOAT:
        Float = KeyValues::GetFloat(i, 0, v6);
        v20.m_type = 1;
        v20.m_flags = 0;
        v20.m_float = Float;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_PTR:
        Ptr = KeyValues::GetPtr(i, 0, 0);
        v20.m_type = 33;
        v20.m_flags = 0;
        v20.m_uint64 = Ptr;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_COLOR:
        v21._color[0] = 0;
        v21._color[1] = 0;
        v21._color[2] = 0;
        v21._color[3] = 0;
        v20.m_int = KeyValues::GetColor(i, 0, &v21);
        v20.m_flags = 0;
        v20.m_type = 9;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_UINT64:
        Uint64 = KeyValues::GetUint64(i, 0, 0);
        v20.m_type = 33;
        v20.m_flags = 0;
        v20.m_uint64 = Uint64;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      default:
        break;
    }
    Name = KeyValues::GetName(i);
    v5(pVM, hTable, Name, &childTable);
    CVariantBase<CVariantDefaultAllocator>::Free(&childTable);
  }
  for ( j = KeyValues::GetFirstTrueSubKey(pKeyValues); j != 0; j = KeyValues::GetNextTrueSubKey(j) )
  {
    v9 = *pVM;
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    (*(v9 + 264))(pVM, &childTable);
    Recursive_ConvertKeyValuesToTable(j, pVM, childTable.m_hScript);
    v10 = *(*pVM + 240LL);
    v20.m_type = 31;
    v20.m_flags = 0;
    v20.m_uint64 = childTable.m_uint64;
    v11 = KeyValues::GetName(j);
    v10(pVM, hTable, v11, &v20);
    CVariantBase<CVariantDefaultAllocator>::Free(&v20);
    (*(*pVM + 344LL))(pVM, &childTable);
    CVariantBase<CVariantDefaultAllocator>::Free(&childTable);
  }
}


// Recursive_ConvertKeyValuesToTable  (line 1948, @0x00000000024ddd50 libserver.so, @0x00000000028a5d20 libserver.so)  // inlines: CVariantBase, Color, CopyData, Free, KeyValueToVariant, SetColor, operator=, ~CVariantBase
// calls: KeyValues::GetFirstValue, KeyValues::GetDataType, KeyValues::GetColor, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::GetName, KeyValues::GetNextValue, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetInt, KeyValues::GetString, KeyValues::GetPtr (16 total)
// callers: CDOTAGameManager::GetHeroDataByName_Script, CDOTAGamerules::GetPlayerCustomGameAccountRecord, DOTA_ExecuteOrders, CDOTA_Modifier_Radar_Thinker::OnCreated
// globals: jpt_24DDDEA
void __fastcall Recursive_ConvertKeyValuesToTable(KeyValues *pKeyValues, IScriptVM *pVM, HSCRIPT hTable)
{
  KeyValues *i; // r12
  void (__fastcall *v5)(IScriptVM *, HSCRIPT, const char *, ScriptVariant_t *); // r14
  float v6; // xmm1_4
  int Color; // eax
  const char *Name; // rax
  KeyValues *j; // r12
  __int64 v10; // rax
  void (__fastcall *v11)(IScriptVM *, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  const char *v12; // rax
  int Int; // eax
  void *Ptr; // rax
  float Float; // xmm0_4
  ScriptVariant_t childTable; // [rsp+20h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v19; // [rsp+30h] [rbp-50h] BYREF
  Color v20; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  for ( i = KeyValues::GetFirstValue(pKeyValues); i != 0; i = KeyValues::GetNextValue(i) )
  {
    v5 = *(*pVM + 240LL);
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    switch ( KeyValues::GetDataType(i, 0) )
    {
      case CKeyValues_Data::types_t::TYPE_STRING:
        v19.m_uint64 = KeyValues::GetString(i, 0, "", 0, 0);
        v19.m_type = 30;
        v19.m_flags = 0;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v19);
        break;
      case CKeyValues_Data::types_t::TYPE_INT:
        Int = KeyValues::GetInt(i, 0, 0);
        v19.m_type = 5;
        v19.m_flags = 0;
        v19.m_int = Int;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v19);
        break;
      case CKeyValues_Data::types_t::TYPE_FLOAT:
        Float = KeyValues::GetFloat(i, 0, v6);
        v19.m_type = 1;
        v19.m_flags = 0;
        v19.m_float = Float;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v19);
        break;
      case CKeyValues_Data::types_t::TYPE_PTR:
        Ptr = KeyValues::GetPtr(i, 0, 0);
        v19.m_type = 33;
        v19.m_flags = 0;
        v19.m_uint64 = Ptr;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v19);
        break;
      case CKeyValues_Data::types_t::TYPE_COLOR:
        v20._color[0] = 0;
        v20._color[1] = 0;
        v20._color[2] = 0;
        v20._color[3] = 0;
        Color = KeyValues::GetColor(i, 0, &v20);
        v19.m_type = 9;
        v19.m_flags = 0;
        v19.m_int = Color;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v19);
        break;
      case CKeyValues_Data::types_t::TYPE_UINT64:
        v19.m_uint64 = KeyValues::GetUint64(i, 0, 0);
        v19.m_flags = 0;
        v19.m_type = 33;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v19);
        break;
      default:
        break;
    }
    Name = KeyValues::GetName(i);
    v5(pVM, hTable, Name, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
  for ( j = KeyValues::GetFirstTrueSubKey(pKeyValues); j != 0; j = KeyValues::GetNextTrueSubKey(j) )
  {
    v10 = *pVM;
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    (*(v10 + 264))(pVM, &childTable);
    Recursive_ConvertKeyValuesToTable(j, pVM, childTable.m_hScript);
    v11 = *(*pVM + 240LL);
    v19.m_type = 31;
    v19.m_flags = 0;
    v19.m_uint64 = childTable.m_uint64;
    v12 = KeyValues::GetName(j);
    v11(pVM, hTable, v12, &v19);
    if ( (v19.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v19.m_uint64);
    (*(*pVM + 344LL))(pVM, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
}


// Recursive_ConvertKeyValuesToTable  (line 1948, @0x00000000026074e0 libserver.so, @0x00000000028da470 libserver.so, @0x0000000002b00460 libserver.so)  // inlines: CVariantBase, Color, CopyData, Free, KeyValueToVariant, SetColor, operator=, ~CVariantBase
// calls: KeyValues::GetFirstValue, KeyValues::GetDataType, KeyValues::GetColor, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::GetName, KeyValues::GetNextValue, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetInt, KeyValues::GetString, KeyValues::GetPtr (16 total)
// callers: CDOTA_Modifier_Lua::OnCreated, CDOTA_Modifier_Lua::OnRefresh, CDOTA_Modifier_ScriptedMotionController::OnCreated
// globals: jpt_260757A
void __fastcall Recursive_ConvertKeyValuesToTable(KeyValues *pKeyValues, IScriptVM *pVM, HSCRIPT hTable)
{
  KeyValues *i; // r12
  void (__fastcall *v5)(IScriptVM *, HSCRIPT, const char *, ScriptVariant_t *); // r14
  float v6; // xmm1_4
  const char *Name; // rax
  KeyValues *j; // r12
  void (__fastcall *v9)(IScriptVM *, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  const char *v10; // rax
  int Int; // eax
  void *Ptr; // rax
  float Float; // xmm0_4
  uint64 Uint64; // rax
  const char *String; // [rsp+18h] [rbp-78h]
  ScriptVariant_t childTable; // [rsp+30h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v19; // [rsp+40h] [rbp-50h] BYREF
  Color v20; // [rsp+50h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  for ( i = KeyValues::GetFirstValue(pKeyValues); i != 0; i = KeyValues::GetNextValue(i) )
  {
    v5 = *(*pVM + 240LL);
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    switch ( KeyValues::GetDataType(i, 0) )
    {
      case CKeyValues_Data::types_t::TYPE_STRING:
        String = KeyValues::GetString(i, 0, "", 0, 0);
        v19.m_type = 0;
        v19.m_flags = 0;
        CVariantBase<CVariantDefaultAllocator>::Free(&v19);
        v19.m_type = 30;
        v19.m_uint64 = String;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v19);
        break;
      case CKeyValues_Data::types_t::TYPE_INT:
        Int = KeyValues::GetInt(i, 0, 0);
        v19.m_type = 5;
        v19.m_flags = 0;
        v19.m_int = Int;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v19);
        break;
      case CKeyValues_Data::types_t::TYPE_FLOAT:
        Float = KeyValues::GetFloat(i, 0, v6);
        v19.m_type = 1;
        v19.m_flags = 0;
        v19.m_float = Float;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v19);
        break;
      case CKeyValues_Data::types_t::TYPE_PTR:
        Ptr = KeyValues::GetPtr(i, 0, 0);
        v19.m_type = 33;
        v19.m_flags = 0;
        v19.m_uint64 = Ptr;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v19);
        break;
      case CKeyValues_Data::types_t::TYPE_COLOR:
        v20._color[0] = 0;
        v20._color[1] = 0;
        v20._color[2] = 0;
        v20._color[3] = 0;
        v19.m_int = KeyValues::GetColor(i, 0, &v20);
        v19.m_flags = 0;
        v19.m_type = 9;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v19);
        break;
      case CKeyValues_Data::types_t::TYPE_UINT64:
        Uint64 = KeyValues::GetUint64(i, 0, 0);
        v19.m_type = 33;
        v19.m_flags = 0;
        v19.m_uint64 = Uint64;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v19);
        break;
      default:
        break;
    }
    Name = KeyValues::GetName(i);
    v5(pVM, hTable, Name, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
  for ( j = KeyValues::GetFirstTrueSubKey(pKeyValues); j != 0; j = KeyValues::GetNextTrueSubKey(j) )
  {
    childTable.m_uint64 = 0;
    childTable.m_type = 0;
    childTable.m_flags = 0;
    (*(*pVM + 264LL))(pVM, &childTable);
    Recursive_ConvertKeyValuesToTable(j, pVM, childTable.m_hScript);
    v9 = *(*pVM + 240LL);
    v19.m_type = 31;
    v19.m_flags = 0;
    v19.m_uint64 = childTable.m_uint64;
    v10 = KeyValues::GetName(j);
    v9(pVM, hTable, v10, &v19);
    if ( (v19.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v19.m_uint64);
    (*(*pVM + 344LL))(pVM, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
}


// Recursive_ConvertKeyValuesToTable  (line 1948, @0x0000000002674360 libserver.so, @0x00000000028991d0 libserver.so, @0x0000000002d7ae20 libserver.so)  // inlines: CVariantBase, Color, CopyData, Free, KeyValueToVariant, SetColor, operator=, ~CVariantBase
// calls: KeyValues::GetFirstValue, KeyValues::GetDataType, KeyValues::GetColor, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::GetName, KeyValues::GetNextValue, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetInt, KeyValues::GetString, KeyValues::GetPtr (16 total)
// callers: CDOTA_ProjectileManager::CreateTrackingProjectile
// globals: jpt_26743FA
void __fastcall Recursive_ConvertKeyValuesToTable(KeyValues *pKeyValues, IScriptVM *pVM, HSCRIPT hTable)
{
  KeyValues *i; // r12
  void (__fastcall *v5)(IScriptVM *, HSCRIPT, const char *, ScriptVariant_t *); // r14
  float v6; // xmm1_4
  int Color; // eax
  const char *Name; // rax
  KeyValues *j; // r12
  __int64 v10; // rax
  void (__fastcall *v11)(IScriptVM *, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  const char *v12; // rax
  int Int; // eax
  void *Ptr; // rax
  float Float; // xmm0_4
  uint64 Uint64; // rax
  const char *String; // [rsp+18h] [rbp-78h]
  ScriptVariant_t childTable; // [rsp+30h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v21; // [rsp+40h] [rbp-50h] BYREF
  Color v22; // [rsp+50h] [rbp-40h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  for ( i = KeyValues::GetFirstValue(pKeyValues); i != 0; i = KeyValues::GetNextValue(i) )
  {
    v5 = *(*pVM + 240LL);
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    switch ( KeyValues::GetDataType(i, 0) )
    {
      case CKeyValues_Data::types_t::TYPE_STRING:
        String = KeyValues::GetString(i, 0, "", 0, 0);
        v21.m_flags = 0;
        v21.m_type = 0;
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        v21.m_type = 30;
        v21.m_uint64 = String;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      case CKeyValues_Data::types_t::TYPE_INT:
        Int = KeyValues::GetInt(i, 0, 0);
        v21.m_type = 5;
        v21.m_flags = 0;
        v21.m_int = Int;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      case CKeyValues_Data::types_t::TYPE_FLOAT:
        Float = KeyValues::GetFloat(i, 0, v6);
        v21.m_type = 1;
        v21.m_flags = 0;
        v21.m_float = Float;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      case CKeyValues_Data::types_t::TYPE_PTR:
        Ptr = KeyValues::GetPtr(i, 0, 0);
        v21.m_type = 33;
        v21.m_flags = 0;
        v21.m_uint64 = Ptr;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      case CKeyValues_Data::types_t::TYPE_COLOR:
        v22._color[0] = 0;
        v22._color[1] = 0;
        v22._color[2] = 0;
        v22._color[3] = 0;
        Color = KeyValues::GetColor(i, 0, &v22);
        v21.m_flags = 0;
        v21.m_type = 9;
        v21.m_int = Color;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      case CKeyValues_Data::types_t::TYPE_UINT64:
        Uint64 = KeyValues::GetUint64(i, 0, 0);
        v21.m_type = 33;
        v21.m_flags = 0;
        v21.m_uint64 = Uint64;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      default:
        break;
    }
    Name = KeyValues::GetName(i);
    v5(pVM, hTable, Name, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
  for ( j = KeyValues::GetFirstTrueSubKey(pKeyValues); j != 0; j = KeyValues::GetNextTrueSubKey(j) )
  {
    v10 = *pVM;
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    (*(v10 + 264))(pVM, &childTable);
    Recursive_ConvertKeyValuesToTable(j, pVM, childTable.m_hScript);
    v11 = *(*pVM + 240LL);
    v21.m_type = 31;
    v21.m_flags = 0;
    v21.m_uint64 = childTable.m_uint64;
    v12 = KeyValues::GetName(j);
    v11(pVM, hTable, v12, &v21);
    if ( (v21.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v21.m_uint64);
    (*(*pVM + 344LL))(pVM, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
}


// Recursive_ConvertKeyValuesToTable  (line 1948, @0x0000000002700e50 libserver.so, @0x00000000029dcc80 libserver.so, @0x0000000002be60e0 libserver.so)  // inlines: CVariantBase, Color, CopyData, Free, KeyValueToVariant, SetColor, operator=, ~CVariantBase
// calls: KeyValues::GetFirstValue, KeyValues::GetDataType, KeyValues::GetColor, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, KeyValues::GetName, KeyValues::GetNextValue, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetInt, KeyValues::GetString, KeyValues::GetPtr, KeyValues::GetUint64 (16 total)
// callers: CDOTA_Modifier_Special_Bonus_Gold_Income::OnCreated, CDOTA_Modifier_Special_Bonus_Cooldown_Reduction::OnCreated, CDOTA_Modifier_Special_Bonus_Spell_Lifesteal::OnCreated, CDOTA_Modifier_Special_Bonus_HP_Regen::OnCreated, CDOTA_Modifier_Special_Bonus_Lifesteal::OnCreated, CDOTA_Modifier_Special_Bonus_20_Bash::OnCreated, CDOTA_Modifier_Special_Bonus_MP_Regen::OnCreated, CDOTA_Modifier_Special_Bonus_Respawn_Reduction::OnCreated, CDOTA_Modifier_Special_Bonus_Armor::OnCreated, CDOTA_Modifier_Special_Bonus_Magic_Resistance::OnCreated, CDOTA_Modifier_Special_Bonus_Cast_Range::OnCreated, CDOTA_Modifier_Special_Bonus_Intelligence::OnCreated (26 total)
// globals: jpt_2700EEA
void __fastcall Recursive_ConvertKeyValuesToTable(KeyValues *pKeyValues, IScriptVM *pVM, HSCRIPT hTable)
{
  KeyValues *i; // r12
  void (__fastcall *v5)(IScriptVM *, HSCRIPT, const char *, ScriptVariant_t *); // r14
  float v6; // xmm1_4
  const char *Name; // rax
  KeyValues *j; // r12
  void (__fastcall *v9)(IScriptVM *, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  const char *v10; // rax
  int Int; // eax
  void *Ptr; // rax
  uint64 Uint64; // rax
  float Float; // xmm0_4
  ScriptVariant_t childTable; // [rsp+20h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v18; // [rsp+30h] [rbp-50h] BYREF
  Color v19; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  for ( i = KeyValues::GetFirstValue(pKeyValues); i != 0; i = KeyValues::GetNextValue(i) )
  {
    v5 = *(*pVM + 240LL);
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    switch ( KeyValues::GetDataType(i, 0) )
    {
      case CKeyValues_Data::types_t::TYPE_STRING:
        v18.m_uint64 = KeyValues::GetString(i, 0, "", 0, 0);
        v18.m_type = 30;
        v18.m_flags = 0;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v18, &childTable);
        if ( (v18.m_flags & 1) != 0 )
          goto LABEL_4;
        break;
      case CKeyValues_Data::types_t::TYPE_INT:
        Int = KeyValues::GetInt(i, 0, 0);
        v18.m_type = 5;
        v18.m_flags = 0;
        v18.m_int = Int;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v18, &childTable);
        if ( (v18.m_flags & 1) != 0 )
          goto LABEL_4;
        break;
      case CKeyValues_Data::types_t::TYPE_FLOAT:
        Float = KeyValues::GetFloat(i, 0, v6);
        v18.m_type = 1;
        v18.m_flags = 0;
        v18.m_float = Float;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v18, &childTable);
        if ( (v18.m_flags & 1) != 0 )
          goto LABEL_4;
        break;
      case CKeyValues_Data::types_t::TYPE_PTR:
        Ptr = KeyValues::GetPtr(i, 0, 0);
        v18.m_type = 33;
        v18.m_flags = 0;
        v18.m_uint64 = Ptr;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v18, &childTable);
        if ( (v18.m_flags & 1) != 0 )
          goto LABEL_4;
        break;
      case CKeyValues_Data::types_t::TYPE_COLOR:
        v19._color[0] = 0;
        v19._color[1] = 0;
        v19._color[2] = 0;
        v19._color[3] = 0;
        v18.m_int = KeyValues::GetColor(i, 0, &v19);
        v18.m_flags = 0;
        v18.m_type = 9;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v18, &childTable);
        if ( (v18.m_flags & 1) != 0 )
          goto LABEL_4;
        break;
      case CKeyValues_Data::types_t::TYPE_UINT64:
        Uint64 = KeyValues::GetUint64(i, 0, 0);
        v18.m_type = 33;
        v18.m_flags = 0;
        v18.m_uint64 = Uint64;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v18, &childTable);
        if ( (v18.m_flags & 1) != 0 )
LABEL_4:
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v18.m_uint64);
        break;
      default:
        break;
    }
    Name = KeyValues::GetName(i);
    v5(pVM, hTable, Name, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
  for ( j = KeyValues::GetFirstTrueSubKey(pKeyValues); j != 0; j = KeyValues::GetNextTrueSubKey(j) )
  {
    childTable.m_uint64 = 0;
    childTable.m_type = 0;
    childTable.m_flags = 0;
    (*(*pVM + 264LL))(pVM, &childTable);
    Recursive_ConvertKeyValuesToTable(j, pVM, childTable.m_hScript);
    v9 = *(*pVM + 240LL);
    v18.m_type = 31;
    v18.m_flags = 0;
    v18.m_uint64 = childTable.m_uint64;
    v10 = KeyValues::GetName(j);
    v9(pVM, hTable, v10, &v18);
    if ( (v18.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v18.m_uint64);
    (*(*pVM + 344LL))(pVM, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
}


// Recursive_ConvertKeyValuesToTable  (line 1948, @0x00000000027b71f0, libserver.so)  // inlines: CVariantBase, Color, CopyData, Free, KeyValueToVariant, SetColor, operator=, ~CVariantBase
// calls: KeyValues::GetFirstValue, KeyValues::GetDataType, KeyValues::GetColor, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::GetName, KeyValues::GetNextValue, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetInt, KeyValues::GetString, KeyValues::GetPtr (16 total)
// callers: CDOTA_UnitInventory::AddItem
// globals: jpt_27B728A
void __fastcall Recursive_ConvertKeyValuesToTable(KeyValues *pKeyValues, IScriptVM *pVM, HSCRIPT hTable)
{
  KeyValues *i; // r12
  void (__fastcall *v5)(IScriptVM *, HSCRIPT, const char *, ScriptVariant_t *); // r14
  float v6; // xmm1_4
  const char *Name; // rax
  KeyValues *j; // r12
  void (__fastcall *v9)(IScriptVM *, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  const char *v10; // rax
  int Int; // eax
  void *Ptr; // rax
  float Float; // xmm0_4
  uint64 Uint64; // rax
  const char *String; // [rsp+18h] [rbp-78h]
  ScriptVariant_t childTable; // [rsp+30h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v19; // [rsp+40h] [rbp-50h] BYREF
  Color v20; // [rsp+50h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  for ( i = KeyValues::GetFirstValue(pKeyValues); i != 0; i = KeyValues::GetNextValue(i) )
  {
    v5 = *(*pVM + 240LL);
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    switch ( KeyValues::GetDataType(i, 0) )
    {
      case CKeyValues_Data::types_t::TYPE_STRING:
        String = KeyValues::GetString(i, 0, "", 0, 0);
        v19.m_type = 0;
        v19.m_flags = 0;
        CVariantBase<CVariantDefaultAllocator>::Free(&v19);
        v19.m_type = 30;
        v19.m_uint64 = String;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v19);
        break;
      case CKeyValues_Data::types_t::TYPE_INT:
        Int = KeyValues::GetInt(i, 0, 0);
        v19.m_type = 5;
        v19.m_flags = 0;
        v19.m_int = Int;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v19);
        break;
      case CKeyValues_Data::types_t::TYPE_FLOAT:
        Float = KeyValues::GetFloat(i, 0, v6);
        v19.m_type = 1;
        v19.m_flags = 0;
        v19.m_float = Float;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v19);
        break;
      case CKeyValues_Data::types_t::TYPE_PTR:
        Ptr = KeyValues::GetPtr(i, 0, 0);
        v19.m_type = 33;
        v19.m_flags = 0;
        v19.m_uint64 = Ptr;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v19);
        break;
      case CKeyValues_Data::types_t::TYPE_COLOR:
        v20._color[0] = 0;
        v20._color[1] = 0;
        v20._color[2] = 0;
        v20._color[3] = 0;
        v19.m_int = KeyValues::GetColor(i, 0, &v20);
        v19.m_flags = 0;
        v19.m_type = 9;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v19);
        break;
      case CKeyValues_Data::types_t::TYPE_UINT64:
        Uint64 = KeyValues::GetUint64(i, 0, 0);
        v19.m_type = 33;
        v19.m_flags = 0;
        v19.m_uint64 = Uint64;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v19);
        break;
      default:
        break;
    }
    Name = KeyValues::GetName(i);
    v5(pVM, hTable, Name, &childTable);
    CVariantBase<CVariantDefaultAllocator>::Free(&childTable);
  }
  for ( j = KeyValues::GetFirstTrueSubKey(pKeyValues); j != 0; j = KeyValues::GetNextTrueSubKey(j) )
  {
    childTable.m_uint64 = 0;
    childTable.m_type = 0;
    childTable.m_flags = 0;
    (*(*pVM + 264LL))(pVM, &childTable);
    Recursive_ConvertKeyValuesToTable(j, pVM, childTable.m_hScript);
    v9 = *(*pVM + 240LL);
    v19.m_type = 31;
    v19.m_flags = 0;
    v19.m_uint64 = childTable.m_uint64;
    v10 = KeyValues::GetName(j);
    v9(pVM, hTable, v10, &v19);
    if ( (v19.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v19.m_uint64);
    (*(*pVM + 344LL))(pVM, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
}


// Recursive_ConvertKeyValuesToTable  (line 1948, @0x000000000289d990, libserver.so)  // inlines: CVariantBase, Color, CopyData, Free, KeyValueToVariant, SetColor, operator=, ~CVariantBase
// calls: KeyValues::GetFirstValue, KeyValues::GetDataType, KeyValues::GetColor, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::GetName, KeyValues::GetNextValue, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetInt, KeyValues::GetString, KeyValues::GetPtr (16 total)
// globals: jpt_289DA26
void __fastcall Recursive_ConvertKeyValuesToTable(KeyValues *pKeyValues, IScriptVM *pVM, HSCRIPT hTable)
{
  KeyValues *i; // r12
  void (__fastcall *v5)(IScriptVM *, HSCRIPT, const char *, ScriptVariant_t *); // r14
  float v6; // xmm1_4
  int Color; // eax
  const char *Name; // rax
  KeyValues *j; // r12
  __int64 v10; // rax
  void (__fastcall *v11)(IScriptVM *, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  const char *v12; // rax
  int Int; // eax
  void *Ptr; // rax
  float Float; // xmm0_4
  uint64 Uint64; // rax
  const char *String; // [rsp+18h] [rbp-78h]
  ScriptVariant_t childTable; // [rsp+30h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v21; // [rsp+40h] [rbp-50h] BYREF
  Color v22; // [rsp+50h] [rbp-40h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  for ( i = KeyValues::GetFirstValue(pKeyValues); i != 0; i = KeyValues::GetNextValue(i) )
  {
    v5 = *(*pVM + 240LL);
    childTable.m_uint64 = 0;
    childTable.m_type = 0;
    childTable.m_flags = 0;
    switch ( KeyValues::GetDataType(i, 0) )
    {
      case CKeyValues_Data::types_t::TYPE_STRING:
        String = KeyValues::GetString(i, 0, "", 0, 0);
        v21.m_type = 0;
        v21.m_flags = 0;
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        v21.m_type = 30;
        v21.m_uint64 = String;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      case CKeyValues_Data::types_t::TYPE_INT:
        Int = KeyValues::GetInt(i, 0, 0);
        v21.m_type = 5;
        v21.m_flags = 0;
        v21.m_int = Int;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        if ( (v21.m_flags & 1) != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v21.m_uint64);
        break;
      case CKeyValues_Data::types_t::TYPE_FLOAT:
        Float = KeyValues::GetFloat(i, 0, v6);
        v21.m_type = 1;
        v21.m_flags = 0;
        v21.m_float = Float;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      case CKeyValues_Data::types_t::TYPE_PTR:
        Ptr = KeyValues::GetPtr(i, 0, 0);
        v21.m_flags = 0;
        v21.m_type = 33;
        v21.m_uint64 = Ptr;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      case CKeyValues_Data::types_t::TYPE_COLOR:
        v22._color[0] = 0;
        v22._color[1] = 0;
        v22._color[2] = 0;
        v22._color[3] = 0;
        Color = KeyValues::GetColor(i, 0, &v22);
        v21.m_type = 9;
        v21.m_flags = 0;
        v21.m_int = Color;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      case CKeyValues_Data::types_t::TYPE_UINT64:
        Uint64 = KeyValues::GetUint64(i, 0, 0);
        v21.m_type = 33;
        v21.m_flags = 0;
        v21.m_uint64 = Uint64;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      default:
        break;
    }
    Name = KeyValues::GetName(i);
    v5(pVM, hTable, Name, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
  for ( j = KeyValues::GetFirstTrueSubKey(pKeyValues); j != 0; j = KeyValues::GetNextTrueSubKey(j) )
  {
    v10 = *pVM;
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    (*(v10 + 264))(pVM, &childTable);
    Recursive_ConvertKeyValuesToTable(j, pVM, childTable.m_hScript);
    v11 = *(*pVM + 240LL);
    v21.m_type = 31;
    v21.m_flags = 0;
    v21.m_uint64 = childTable.m_uint64;
    v12 = KeyValues::GetName(j);
    v11(pVM, hTable, v12, &v21);
    if ( (v21.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v21.m_uint64);
    (*(*pVM + 344LL))(pVM, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
}


// Recursive_ConvertKeyValuesToTable  (line 1948, @0x00000000028a21d0, libserver.so)  // inlines: CVariantBase, Color, CopyData, Free, KeyValueToVariant, SetColor, operator=, ~CVariantBase
// calls: KeyValues::GetFirstValue, KeyValues::GetDataType, KeyValues::GetColor, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::GetName, KeyValues::GetNextValue, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetInt, KeyValues::GetString, KeyValues::GetPtr (16 total)
// globals: jpt_28A2266
void __fastcall Recursive_ConvertKeyValuesToTable(KeyValues *pKeyValues, IScriptVM *pVM, HSCRIPT hTable)
{
  KeyValues *i; // r12
  void (__fastcall *v5)(IScriptVM *, HSCRIPT, const char *, ScriptVariant_t *); // r14
  float v6; // xmm1_4
  int Color; // eax
  const char *Name; // rax
  KeyValues *j; // r12
  __int64 v10; // rax
  void (__fastcall *v11)(IScriptVM *, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  const char *v12; // rax
  int Int; // eax
  void *Ptr; // rax
  uint64 Uint64; // rax
  const char *String; // [rsp+18h] [rbp-78h]
  ScriptVariant_t childTable; // [rsp+30h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v20; // [rsp+40h] [rbp-50h] BYREF
  Color v21; // [rsp+50h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  for ( i = KeyValues::GetFirstValue(pKeyValues); i != 0; i = KeyValues::GetNextValue(i) )
  {
    v5 = *(*pVM + 240LL);
    childTable.m_uint64 = 0;
    childTable.m_type = 0;
    childTable.m_flags = 0;
    switch ( KeyValues::GetDataType(i, 0) )
    {
      case CKeyValues_Data::types_t::TYPE_STRING:
        String = KeyValues::GetString(i, 0, "", 0, 0);
        v20.m_type = 0;
        v20.m_flags = 0;
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        v20.m_type = 30;
        v20.m_uint64 = String;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_INT:
        Int = KeyValues::GetInt(i, 0, 0);
        v20.m_type = 5;
        v20.m_flags = 0;
        v20.m_int = Int;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_FLOAT:
        v20.m_int = KeyValues::GetFloat(i, 0, v6);
        v20.m_flags = 0;
        v20.m_type = 1;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_PTR:
        Ptr = KeyValues::GetPtr(i, 0, 0);
        v20.m_type = 33;
        v20.m_flags = 0;
        v20.m_uint64 = Ptr;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_COLOR:
        v21._color[0] = 0;
        v21._color[1] = 0;
        v21._color[2] = 0;
        v21._color[3] = 0;
        Color = KeyValues::GetColor(i, 0, &v21);
        v20.m_type = 9;
        v20.m_flags = 0;
        v20.m_int = Color;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_UINT64:
        Uint64 = KeyValues::GetUint64(i, 0, 0);
        v20.m_type = 33;
        v20.m_flags = 0;
        v20.m_uint64 = Uint64;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      default:
        break;
    }
    Name = KeyValues::GetName(i);
    v5(pVM, hTable, Name, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
  for ( j = KeyValues::GetFirstTrueSubKey(pKeyValues); j != 0; j = KeyValues::GetNextTrueSubKey(j) )
  {
    v10 = *pVM;
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    (*(v10 + 264))(pVM, &childTable);
    Recursive_ConvertKeyValuesToTable(j, pVM, childTable.m_hScript);
    v11 = *(*pVM + 240LL);
    v20.m_type = 31;
    v20.m_flags = 0;
    v20.m_uint64 = childTable.m_uint64;
    v12 = KeyValues::GetName(j);
    v11(pVM, hTable, v12, &v20);
    if ( (v20.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v20.m_uint64);
    (*(*pVM + 344LL))(pVM, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
}


// Recursive_ConvertKeyValuesToTable  (line 1948, @0x00000000028a9710, libserver.so)  // inlines: CVariantBase, Color, CopyData, Free, KeyValueToVariant, SetColor, operator=, ~CVariantBase
// calls: KeyValues::GetFirstValue, KeyValues::GetDataType, KeyValues::GetColor, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::GetName, KeyValues::GetNextValue, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetInt, KeyValues::GetString, KeyValues::GetPtr (16 total)
// globals: jpt_28A97AA
void __fastcall Recursive_ConvertKeyValuesToTable(KeyValues *pKeyValues, IScriptVM *pVM, HSCRIPT hTable)
{
  KeyValues *i; // r12
  void (__fastcall *v5)(IScriptVM *, HSCRIPT, const char *, ScriptVariant_t *); // r14
  float v6; // xmm1_4
  const char *Name; // rax
  KeyValues *j; // r12
  __int64 v9; // rax
  void (__fastcall *v10)(IScriptVM *, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  const char *v11; // rax
  int Int; // eax
  void *Ptr; // rax
  float Float; // xmm0_4
  uint64 Uint64; // rax
  const char *String; // [rsp+18h] [rbp-78h]
  ScriptVariant_t childTable; // [rsp+30h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v20; // [rsp+40h] [rbp-50h] BYREF
  Color v21; // [rsp+50h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  for ( i = KeyValues::GetFirstValue(pKeyValues); i != 0; i = KeyValues::GetNextValue(i) )
  {
    v5 = *(*pVM + 240LL);
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    switch ( KeyValues::GetDataType(i, 0) )
    {
      case CKeyValues_Data::types_t::TYPE_STRING:
        String = KeyValues::GetString(i, 0, "", 0, 0);
        v20.m_type = 0;
        v20.m_flags = 0;
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        v20.m_type = 30;
        v20.m_uint64 = String;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_INT:
        Int = KeyValues::GetInt(i, 0, 0);
        v20.m_type = 5;
        v20.m_flags = 0;
        v20.m_int = Int;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_FLOAT:
        Float = KeyValues::GetFloat(i, 0, v6);
        v20.m_type = 1;
        v20.m_flags = 0;
        v20.m_float = Float;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_PTR:
        Ptr = KeyValues::GetPtr(i, 0, 0);
        v20.m_type = 33;
        v20.m_flags = 0;
        v20.m_uint64 = Ptr;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_COLOR:
        v21._color[0] = 0;
        v21._color[1] = 0;
        v21._color[2] = 0;
        v21._color[3] = 0;
        v20.m_int = KeyValues::GetColor(i, 0, &v21);
        v20.m_flags = 0;
        v20.m_type = 9;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_UINT64:
        Uint64 = KeyValues::GetUint64(i, 0, 0);
        v20.m_type = 33;
        v20.m_flags = 0;
        v20.m_uint64 = Uint64;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      default:
        break;
    }
    Name = KeyValues::GetName(i);
    v5(pVM, hTable, Name, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
  for ( j = KeyValues::GetFirstTrueSubKey(pKeyValues); j != 0; j = KeyValues::GetNextTrueSubKey(j) )
  {
    childTable.m_uint64 = 0;
    childTable.m_flags = 0;
    v9 = *pVM;
    childTable.m_type = 0;
    (*(v9 + 264))(pVM, &childTable);
    Recursive_ConvertKeyValuesToTable(j, pVM, childTable.m_hScript);
    v10 = *(*pVM + 240LL);
    v20.m_flags = 0;
    v20.m_type = 31;
    v20.m_uint64 = childTable.m_uint64;
    v11 = KeyValues::GetName(j);
    v10(pVM, hTable, v11, &v20);
    if ( (v20.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v20.m_uint64);
    (*(*pVM + 344LL))(pVM, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
}


// Recursive_ConvertKeyValuesToTable  (line 1948, @0x00000000028b1270, libserver.so)  // inlines: CVariantBase, Color, CopyData, Free, KeyValueToVariant, SetColor, operator=, ~CVariantBase
// calls: KeyValues::GetFirstValue, KeyValues::GetDataType, KeyValues::GetColor, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::GetName, KeyValues::GetNextValue, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetInt, KeyValues::GetString, KeyValues::GetPtr (16 total)
// globals: jpt_28B1306
void __fastcall Recursive_ConvertKeyValuesToTable(KeyValues *pKeyValues, IScriptVM *pVM, HSCRIPT hTable)
{
  KeyValues *i; // r12
  void (__fastcall *v5)(IScriptVM *, HSCRIPT, const char *, ScriptVariant_t *); // r14
  float v6; // xmm1_4
  int Color; // eax
  const char *Name; // rax
  KeyValues *j; // r12
  __int64 v10; // rax
  void (__fastcall *v11)(IScriptVM *, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  const char *v12; // rax
  int Int; // eax
  void *Ptr; // rax
  float Float; // xmm0_4
  uint64 Uint64; // rax
  const char *String; // [rsp+18h] [rbp-78h]
  ScriptVariant_t childTable; // [rsp+30h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v21; // [rsp+40h] [rbp-50h] BYREF
  Color v22; // [rsp+50h] [rbp-40h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  for ( i = KeyValues::GetFirstValue(pKeyValues); i != 0; i = KeyValues::GetNextValue(i) )
  {
    v5 = *(*pVM + 240LL);
    childTable.m_uint64 = 0;
    childTable.m_type = 0;
    childTable.m_flags = 0;
    switch ( KeyValues::GetDataType(i, 0) )
    {
      case CKeyValues_Data::types_t::TYPE_STRING:
        String = KeyValues::GetString(i, 0, "", 0, 0);
        v21.m_type = 0;
        v21.m_flags = 0;
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        v21.m_type = 30;
        v21.m_uint64 = String;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      case CKeyValues_Data::types_t::TYPE_INT:
        Int = KeyValues::GetInt(i, 0, 0);
        v21.m_type = 5;
        v21.m_flags = 0;
        v21.m_int = Int;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      case CKeyValues_Data::types_t::TYPE_FLOAT:
        Float = KeyValues::GetFloat(i, 0, v6);
        v21.m_type = 1;
        v21.m_flags = 0;
        v21.m_float = Float;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      case CKeyValues_Data::types_t::TYPE_PTR:
        Ptr = KeyValues::GetPtr(i, 0, 0);
        v21.m_flags = 0;
        v21.m_type = 33;
        v21.m_uint64 = Ptr;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      case CKeyValues_Data::types_t::TYPE_COLOR:
        v22._color[0] = 0;
        v22._color[1] = 0;
        v22._color[2] = 0;
        v22._color[3] = 0;
        Color = KeyValues::GetColor(i, 0, &v22);
        v21.m_type = 9;
        v21.m_flags = 0;
        v21.m_int = Color;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      case CKeyValues_Data::types_t::TYPE_UINT64:
        Uint64 = KeyValues::GetUint64(i, 0, 0);
        v21.m_type = 33;
        v21.m_flags = 0;
        v21.m_uint64 = Uint64;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      default:
        break;
    }
    Name = KeyValues::GetName(i);
    v5(pVM, hTable, Name, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
  for ( j = KeyValues::GetFirstTrueSubKey(pKeyValues); j != 0; j = KeyValues::GetNextTrueSubKey(j) )
  {
    v10 = *pVM;
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    (*(v10 + 264))(pVM, &childTable);
    Recursive_ConvertKeyValuesToTable(j, pVM, childTable.m_hScript);
    v11 = *(*pVM + 240LL);
    v21.m_type = 31;
    v21.m_flags = 0;
    v21.m_uint64 = childTable.m_uint64;
    v12 = KeyValues::GetName(j);
    v11(pVM, hTable, v12, &v21);
    if ( (v21.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v21.m_uint64);
    (*(*pVM + 344LL))(pVM, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
}


// Recursive_ConvertKeyValuesToTable  (line 1948, @0x00000000028ba3a0 libserver.so, @0x00000000028c6870 libserver.so, @0x000000000291b060 libserver.so)  // inlines: CVariantBase, Color, CopyData, Free, KeyValueToVariant, SetColor, operator=, ~CVariantBase
// calls: KeyValues::GetFirstValue, KeyValues::GetDataType, KeyValues::GetColor, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::GetName, KeyValues::GetNextValue, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetInt, KeyValues::GetString, KeyValues::GetPtr (16 total)
// globals: jpt_28BA43A
void __fastcall Recursive_ConvertKeyValuesToTable(KeyValues *pKeyValues, IScriptVM *pVM, HSCRIPT hTable)
{
  KeyValues *i; // r12
  void (__fastcall *v5)(IScriptVM *, HSCRIPT, const char *, ScriptVariant_t *); // r14
  float v6; // xmm1_4
  const char *Name; // rax
  KeyValues *j; // r12
  __int64 v9; // rax
  void (__fastcall *v10)(IScriptVM *, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  const char *v11; // rax
  int Int; // eax
  void *Ptr; // rax
  float Float; // xmm0_4
  uint64 Uint64; // rax
  const char *String; // [rsp+18h] [rbp-78h]
  ScriptVariant_t childTable; // [rsp+30h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v20; // [rsp+40h] [rbp-50h] BYREF
  Color v21; // [rsp+50h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  for ( i = KeyValues::GetFirstValue(pKeyValues); i != 0; i = KeyValues::GetNextValue(i) )
  {
    v5 = *(*pVM + 240LL);
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    switch ( KeyValues::GetDataType(i, 0) )
    {
      case CKeyValues_Data::types_t::TYPE_STRING:
        String = KeyValues::GetString(i, 0, "", 0, 0);
        v20.m_type = 0;
        v20.m_flags = 0;
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        v20.m_type = 30;
        v20.m_uint64 = String;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_INT:
        Int = KeyValues::GetInt(i, 0, 0);
        v20.m_type = 5;
        v20.m_flags = 0;
        v20.m_int = Int;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_FLOAT:
        Float = KeyValues::GetFloat(i, 0, v6);
        v20.m_type = 1;
        v20.m_flags = 0;
        v20.m_float = Float;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_PTR:
        Ptr = KeyValues::GetPtr(i, 0, 0);
        v20.m_type = 33;
        v20.m_flags = 0;
        v20.m_uint64 = Ptr;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_COLOR:
        v21._color[0] = 0;
        v21._color[1] = 0;
        v21._color[2] = 0;
        v21._color[3] = 0;
        v20.m_int = KeyValues::GetColor(i, 0, &v21);
        v20.m_flags = 0;
        v20.m_type = 9;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_UINT64:
        Uint64 = KeyValues::GetUint64(i, 0, 0);
        v20.m_type = 33;
        v20.m_flags = 0;
        v20.m_uint64 = Uint64;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      default:
        break;
    }
    Name = KeyValues::GetName(i);
    v5(pVM, hTable, Name, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
  for ( j = KeyValues::GetFirstTrueSubKey(pKeyValues); j != 0; j = KeyValues::GetNextTrueSubKey(j) )
  {
    v9 = *pVM;
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    (*(v9 + 264))(pVM, &childTable);
    Recursive_ConvertKeyValuesToTable(j, pVM, childTable.m_hScript);
    v10 = *(*pVM + 240LL);
    v20.m_type = 31;
    v20.m_flags = 0;
    v20.m_uint64 = childTable.m_uint64;
    v11 = KeyValues::GetName(j);
    v10(pVM, hTable, v11, &v20);
    if ( (v20.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v20.m_uint64);
    (*(*pVM + 344LL))(pVM, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
}


// Recursive_ConvertKeyValuesToTable  (line 1948, @0x00000000028eab40, libserver.so)  // inlines: CVariantBase, Color, CopyData, Free, KeyValueToVariant, SetColor, operator=, ~CVariantBase
// calls: KeyValues::GetFirstValue, KeyValues::GetDataType, KeyValues::GetColor, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::GetName, KeyValues::GetNextValue, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetInt, KeyValues::GetString, KeyValues::GetPtr (16 total)
// globals: jpt_28EABD6
void __fastcall Recursive_ConvertKeyValuesToTable(KeyValues *pKeyValues, IScriptVM *pVM, HSCRIPT hTable)
{
  KeyValues *i; // r12
  void (__fastcall *v5)(IScriptVM *, HSCRIPT, const char *, ScriptVariant_t *); // r14
  float v6; // xmm1_4
  int Color; // eax
  const char *Name; // rax
  KeyValues *j; // r12
  __int64 v10; // rax
  void (__fastcall *v11)(IScriptVM *, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  const char *v12; // rax
  int Int; // eax
  uint64 Uint64; // rax
  float Float; // xmm0_4
  const char *String; // [rsp+18h] [rbp-78h]
  ScriptVariant_t childTable; // [rsp+30h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v20; // [rsp+40h] [rbp-50h] BYREF
  Color v21; // [rsp+50h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  for ( i = KeyValues::GetFirstValue(pKeyValues); i != 0; i = KeyValues::GetNextValue(i) )
  {
    v5 = *(*pVM + 240LL);
    childTable.m_uint64 = 0;
    childTable.m_type = 0;
    childTable.m_flags = 0;
    switch ( KeyValues::GetDataType(i, 0) )
    {
      case CKeyValues_Data::types_t::TYPE_STRING:
        String = KeyValues::GetString(i, 0, "", 0, 0);
        v20.m_type = 0;
        v20.m_flags = 0;
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        v20.m_type = 30;
        v20.m_uint64 = String;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        if ( (v20.m_flags & 1) != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v20.m_uint64);
        break;
      case CKeyValues_Data::types_t::TYPE_INT:
        Int = KeyValues::GetInt(i, 0, 0);
        v20.m_type = 5;
        v20.m_flags = 0;
        v20.m_int = Int;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_FLOAT:
        Float = KeyValues::GetFloat(i, 0, v6);
        v20.m_type = 1;
        v20.m_flags = 0;
        v20.m_float = Float;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_PTR:
        v20.m_uint64 = KeyValues::GetPtr(i, 0, 0);
        v20.m_flags = 0;
        v20.m_type = 33;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_COLOR:
        v21._color[0] = 0;
        v21._color[1] = 0;
        v21._color[2] = 0;
        v21._color[3] = 0;
        Color = KeyValues::GetColor(i, 0, &v21);
        v20.m_type = 9;
        v20.m_flags = 0;
        v20.m_int = Color;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_UINT64:
        Uint64 = KeyValues::GetUint64(i, 0, 0);
        v20.m_type = 33;
        v20.m_flags = 0;
        v20.m_uint64 = Uint64;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      default:
        break;
    }
    Name = KeyValues::GetName(i);
    v5(pVM, hTable, Name, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
  for ( j = KeyValues::GetFirstTrueSubKey(pKeyValues); j != 0; j = KeyValues::GetNextTrueSubKey(j) )
  {
    v10 = *pVM;
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    (*(v10 + 264))(pVM, &childTable);
    Recursive_ConvertKeyValuesToTable(j, pVM, childTable.m_hScript);
    v11 = *(*pVM + 240LL);
    v20.m_flags = 0;
    v20.m_type = 31;
    v20.m_uint64 = childTable.m_uint64;
    v12 = KeyValues::GetName(j);
    v11(pVM, hTable, v12, &v20);
    if ( (v20.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v20.m_uint64);
    (*(*pVM + 344LL))(pVM, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
}


// Recursive_ConvertKeyValuesToTable  (line 1948, @0x00000000028f3e90 libserver.so, @0x0000000002a50f30 libserver.so, @0x0000000002e06f60 libserver.so)  // inlines: CVariantBase, Color, CopyData, Free, KeyValueToVariant, SetColor, operator=, ~CVariantBase
// calls: KeyValues::GetFirstValue, KeyValues::GetDataType, KeyValues::GetColor, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::GetName, KeyValues::GetNextValue, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetInt, KeyValues::GetString, KeyValues::GetPtr (16 total)
// globals: jpt_28F3F2A
void __fastcall Recursive_ConvertKeyValuesToTable(KeyValues *pKeyValues, IScriptVM *pVM, HSCRIPT hTable)
{
  KeyValues *i; // r12
  void (__fastcall *v5)(IScriptVM *, HSCRIPT, const char *, ScriptVariant_t *); // r14
  float v6; // xmm1_4
  int Color; // eax
  const char *Name; // rax
  KeyValues *j; // r12
  __int64 v10; // rax
  void (__fastcall *v11)(IScriptVM *, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  const char *v12; // rax
  int Int; // eax
  void *Ptr; // rax
  float Float; // xmm0_4
  const char *String; // [rsp+18h] [rbp-78h]
  ScriptVariant_t childTable; // [rsp+30h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v20; // [rsp+40h] [rbp-50h] BYREF
  Color v21; // [rsp+50h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  for ( i = KeyValues::GetFirstValue(pKeyValues); i != 0; i = KeyValues::GetNextValue(i) )
  {
    v5 = *(*pVM + 240LL);
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    switch ( KeyValues::GetDataType(i, 0) )
    {
      case CKeyValues_Data::types_t::TYPE_STRING:
        String = KeyValues::GetString(i, 0, "", 0, 0);
        v20.m_type = 0;
        v20.m_flags = 0;
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        v20.m_type = 30;
        v20.m_uint64 = String;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_INT:
        Int = KeyValues::GetInt(i, 0, 0);
        v20.m_type = 5;
        v20.m_flags = 0;
        v20.m_int = Int;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_FLOAT:
        Float = KeyValues::GetFloat(i, 0, v6);
        v20.m_type = 1;
        v20.m_flags = 0;
        v20.m_float = Float;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_PTR:
        Ptr = KeyValues::GetPtr(i, 0, 0);
        v20.m_type = 33;
        v20.m_flags = 0;
        v20.m_uint64 = Ptr;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_COLOR:
        v21._color[0] = 0;
        v21._color[1] = 0;
        v21._color[2] = 0;
        v21._color[3] = 0;
        Color = KeyValues::GetColor(i, 0, &v21);
        v20.m_type = 9;
        v20.m_flags = 0;
        v20.m_int = Color;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_UINT64:
        v20.m_uint64 = KeyValues::GetUint64(i, 0, 0);
        v20.m_flags = 0;
        v20.m_type = 33;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      default:
        break;
    }
    Name = KeyValues::GetName(i);
    v5(pVM, hTable, Name, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
  for ( j = KeyValues::GetFirstTrueSubKey(pKeyValues); j != 0; j = KeyValues::GetNextTrueSubKey(j) )
  {
    v10 = *pVM;
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    (*(v10 + 264))(pVM, &childTable);
    Recursive_ConvertKeyValuesToTable(j, pVM, childTable.m_hScript);
    v11 = *(*pVM + 240LL);
    v20.m_type = 31;
    v20.m_flags = 0;
    v20.m_uint64 = childTable.m_uint64;
    v12 = KeyValues::GetName(j);
    v11(pVM, hTable, v12, &v20);
    if ( (v20.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v20.m_uint64);
    (*(*pVM + 344LL))(pVM, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
}


// Recursive_ConvertKeyValuesToTable  (line 1948, @0x0000000002a99b00, libserver.so)  // inlines: CVariantBase, Color, CopyData, Free, KeyValueToVariant, SetColor, operator=, ~CVariantBase
// calls: KeyValues::GetFirstValue, KeyValues::GetDataType, KeyValues::GetColor, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, KeyValues::GetName, KeyValues::GetNextValue, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetInt, KeyValues::GetString, KeyValues::GetPtr, KeyValues::GetUint64 (16 total)
// globals: jpt_2A99B9A
void __fastcall Recursive_ConvertKeyValuesToTable(KeyValues *pKeyValues, IScriptVM *pVM, HSCRIPT hTable)
{
  KeyValues *i; // r12
  void (__fastcall *v5)(IScriptVM *, HSCRIPT, const char *, ScriptVariant_t *); // r14
  float v6; // xmm1_4
  int Color; // eax
  const char *Name; // rax
  KeyValues *j; // r12
  __int64 v10; // rax
  void (__fastcall *v11)(IScriptVM *, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  const char *v12; // rax
  int Int; // eax
  void *Ptr; // rax
  float Float; // xmm0_4
  ScriptVariant_t childTable; // [rsp+20h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v19; // [rsp+30h] [rbp-50h] BYREF
  Color v20; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  for ( i = KeyValues::GetFirstValue(pKeyValues); i != 0; i = KeyValues::GetNextValue(i) )
  {
    v5 = *(*pVM + 240LL);
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    switch ( KeyValues::GetDataType(i, 0) )
    {
      case CKeyValues_Data::types_t::TYPE_STRING:
        v19.m_uint64 = KeyValues::GetString(i, 0, "", 0, 0);
        v19.m_type = 30;
        v19.m_flags = 0;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        if ( (v19.m_flags & 1) != 0 )
          goto LABEL_4;
        break;
      case CKeyValues_Data::types_t::TYPE_INT:
        Int = KeyValues::GetInt(i, 0, 0);
        v19.m_type = 5;
        v19.m_flags = 0;
        v19.m_int = Int;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        if ( (v19.m_flags & 1) != 0 )
          goto LABEL_4;
        break;
      case CKeyValues_Data::types_t::TYPE_FLOAT:
        Float = KeyValues::GetFloat(i, 0, v6);
        v19.m_type = 1;
        v19.m_flags = 0;
        v19.m_float = Float;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        if ( (v19.m_flags & 1) != 0 )
          goto LABEL_4;
        break;
      case CKeyValues_Data::types_t::TYPE_PTR:
        Ptr = KeyValues::GetPtr(i, 0, 0);
        v19.m_type = 33;
        v19.m_flags = 0;
        v19.m_uint64 = Ptr;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        if ( (v19.m_flags & 1) != 0 )
          goto LABEL_4;
        break;
      case CKeyValues_Data::types_t::TYPE_COLOR:
        v20._color[0] = 0;
        v20._color[1] = 0;
        v20._color[2] = 0;
        v20._color[3] = 0;
        Color = KeyValues::GetColor(i, 0, &v20);
        v19.m_type = 9;
        v19.m_flags = 0;
        v19.m_int = Color;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        if ( (v19.m_flags & 1) != 0 )
          goto LABEL_4;
        break;
      case CKeyValues_Data::types_t::TYPE_UINT64:
        v19.m_uint64 = KeyValues::GetUint64(i, 0, 0);
        v19.m_flags = 0;
        v19.m_type = 33;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        if ( (v19.m_flags & 1) != 0 )
LABEL_4:
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v19.m_uint64);
        break;
      default:
        break;
    }
    Name = KeyValues::GetName(i);
    v5(pVM, hTable, Name, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
  for ( j = KeyValues::GetFirstTrueSubKey(pKeyValues); j != 0; j = KeyValues::GetNextTrueSubKey(j) )
  {
    v10 = *pVM;
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    (*(v10 + 264))(pVM, &childTable);
    Recursive_ConvertKeyValuesToTable(j, pVM, childTable.m_hScript);
    v11 = *(*pVM + 240LL);
    v19.m_type = 31;
    v19.m_flags = 0;
    v19.m_uint64 = childTable.m_uint64;
    v12 = KeyValues::GetName(j);
    v11(pVM, hTable, v12, &v19);
    if ( (v19.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v19.m_uint64);
    (*(*pVM + 344LL))(pVM, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
}


// Recursive_ConvertKeyValuesToTable  (line 1948, @0x0000000002b63d70, libserver.so)  // inlines: CVariantBase, Color, CopyData, Free, KeyValueToVariant, SetColor, operator=, ~CVariantBase
// calls: KeyValues::GetFirstValue, KeyValues::GetDataType, KeyValues::GetColor, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, KeyValues::GetName, KeyValues::GetNextValue, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetInt, KeyValues::GetString, KeyValues::GetPtr, KeyValues::GetUint64 (16 total)
// globals: jpt_2B63E06
void __fastcall Recursive_ConvertKeyValuesToTable(KeyValues *pKeyValues, IScriptVM *pVM, HSCRIPT hTable)
{
  KeyValues *i; // r12
  void (__fastcall *v5)(IScriptVM *, HSCRIPT, const char *, ScriptVariant_t *); // r14
  float v6; // xmm1_4
  int Color; // eax
  const char *Name; // rax
  KeyValues *j; // r12
  __int64 v10; // rax
  void (__fastcall *v11)(IScriptVM *, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  const char *v12; // rax
  int Int; // eax
  const char *String; // rax
  uint64 Uint64; // rax
  float Float; // xmm0_4
  ScriptVariant_t childTable; // [rsp+20h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v20; // [rsp+30h] [rbp-50h] BYREF
  Color v21; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  for ( i = KeyValues::GetFirstValue(pKeyValues); i != 0; i = KeyValues::GetNextValue(i) )
  {
    v5 = *(*pVM + 240LL);
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    switch ( KeyValues::GetDataType(i, 0) )
    {
      case CKeyValues_Data::types_t::TYPE_STRING:
        String = KeyValues::GetString(i, 0, "", 0, 0);
        v20.m_flags = 0;
        v20.m_type = 30;
        v20.m_uint64 = String;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        if ( (v20.m_flags & 1) != 0 )
          goto LABEL_4;
        break;
      case CKeyValues_Data::types_t::TYPE_INT:
        Int = KeyValues::GetInt(i, 0, 0);
        v20.m_type = 5;
        v20.m_flags = 0;
        v20.m_int = Int;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        if ( (v20.m_flags & 1) != 0 )
          goto LABEL_4;
        break;
      case CKeyValues_Data::types_t::TYPE_FLOAT:
        Float = KeyValues::GetFloat(i, 0, v6);
        v20.m_type = 1;
        v20.m_flags = 0;
        v20.m_float = Float;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        if ( (v20.m_flags & 1) != 0 )
          goto LABEL_4;
        break;
      case CKeyValues_Data::types_t::TYPE_PTR:
        v20.m_uint64 = KeyValues::GetPtr(i, 0, 0);
        v20.m_flags = 0;
        v20.m_type = 33;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        if ( (v20.m_flags & 1) != 0 )
          goto LABEL_4;
        break;
      case CKeyValues_Data::types_t::TYPE_COLOR:
        v21._color[0] = 0;
        v21._color[1] = 0;
        v21._color[2] = 0;
        v21._color[3] = 0;
        Color = KeyValues::GetColor(i, 0, &v21);
        v20.m_type = 9;
        v20.m_flags = 0;
        v20.m_int = Color;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        if ( (v20.m_flags & 1) != 0 )
          goto LABEL_4;
        break;
      case CKeyValues_Data::types_t::TYPE_UINT64:
        Uint64 = KeyValues::GetUint64(i, 0, 0);
        v20.m_type = 33;
        v20.m_flags = 0;
        v20.m_uint64 = Uint64;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        if ( (v20.m_flags & 1) != 0 )
LABEL_4:
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v20.m_uint64);
        break;
      default:
        break;
    }
    Name = KeyValues::GetName(i);
    v5(pVM, hTable, Name, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
  for ( j = KeyValues::GetFirstTrueSubKey(pKeyValues); j != 0; j = KeyValues::GetNextTrueSubKey(j) )
  {
    v10 = *pVM;
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    (*(v10 + 264))(pVM, &childTable);
    Recursive_ConvertKeyValuesToTable(j, pVM, childTable.m_hScript);
    v11 = *(*pVM + 240LL);
    v20.m_flags = 0;
    v20.m_type = 31;
    v20.m_uint64 = childTable.m_uint64;
    v12 = KeyValues::GetName(j);
    v11(pVM, hTable, v12, &v20);
    if ( (v20.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v20.m_uint64);
    (*(*pVM + 344LL))(pVM, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
}


// Recursive_ConvertKeyValuesToTable  (line 1948, @0x0000000002c52000, libserver.so)  // inlines: CVariantBase, Color, CopyData, Free, KeyValueToVariant, SetColor, operator=, ~CVariantBase
// calls: KeyValues::GetFirstValue, KeyValues::GetDataType, KeyValues::GetColor, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, KeyValues::GetName, KeyValues::GetNextValue, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetInt, KeyValues::GetString, KeyValues::GetPtr, KeyValues::GetUint64 (16 total)
// globals: jpt_2C5209A
void __fastcall Recursive_ConvertKeyValuesToTable(KeyValues *pKeyValues, IScriptVM *pVM, HSCRIPT hTable)
{
  KeyValues *i; // r12
  void (__fastcall *v5)(IScriptVM *, HSCRIPT, const char *, ScriptVariant_t *); // r14
  float v6; // xmm1_4
  const char *Name; // rax
  KeyValues *j; // r12
  __int64 v9; // rax
  void (__fastcall *v10)(IScriptVM *, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  const char *v11; // rax
  int Int; // eax
  void *Ptr; // rax
  uint64 Uint64; // rax
  float Float; // xmm0_4
  ScriptVariant_t childTable; // [rsp+20h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v19; // [rsp+30h] [rbp-50h] BYREF
  Color v20; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  for ( i = KeyValues::GetFirstValue(pKeyValues); i != 0; i = KeyValues::GetNextValue(i) )
  {
    v5 = *(*pVM + 240LL);
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    switch ( KeyValues::GetDataType(i, 0) )
    {
      case CKeyValues_Data::types_t::TYPE_STRING:
        v19.m_uint64 = KeyValues::GetString(i, 0, "", 0, 0);
        v19.m_type = 30;
        v19.m_flags = 0;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        if ( (v19.m_flags & 1) != 0 )
          goto LABEL_4;
        break;
      case CKeyValues_Data::types_t::TYPE_INT:
        Int = KeyValues::GetInt(i, 0, 0);
        v19.m_type = 5;
        v19.m_flags = 0;
        v19.m_int = Int;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        if ( (v19.m_flags & 1) != 0 )
          goto LABEL_4;
        break;
      case CKeyValues_Data::types_t::TYPE_FLOAT:
        Float = KeyValues::GetFloat(i, 0, v6);
        v19.m_type = 1;
        v19.m_flags = 0;
        v19.m_float = Float;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        if ( (v19.m_flags & 1) != 0 )
          goto LABEL_4;
        break;
      case CKeyValues_Data::types_t::TYPE_PTR:
        Ptr = KeyValues::GetPtr(i, 0, 0);
        v19.m_type = 33;
        v19.m_flags = 0;
        v19.m_uint64 = Ptr;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        if ( (v19.m_flags & 1) != 0 )
          goto LABEL_4;
        break;
      case CKeyValues_Data::types_t::TYPE_COLOR:
        v20._color[0] = 0;
        v20._color[1] = 0;
        v20._color[2] = 0;
        v20._color[3] = 0;
        v19.m_int = KeyValues::GetColor(i, 0, &v20);
        v19.m_flags = 0;
        v19.m_type = 9;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        if ( (v19.m_flags & 1) != 0 )
          goto LABEL_4;
        break;
      case CKeyValues_Data::types_t::TYPE_UINT64:
        Uint64 = KeyValues::GetUint64(i, 0, 0);
        v19.m_type = 33;
        v19.m_flags = 0;
        v19.m_uint64 = Uint64;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        if ( (v19.m_flags & 1) != 0 )
LABEL_4:
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v19.m_uint64);
        break;
      default:
        break;
    }
    Name = KeyValues::GetName(i);
    v5(pVM, hTable, Name, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
  for ( j = KeyValues::GetFirstTrueSubKey(pKeyValues); j != 0; j = KeyValues::GetNextTrueSubKey(j) )
  {
    v9 = *pVM;
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    (*(v9 + 264))(pVM, &childTable);
    Recursive_ConvertKeyValuesToTable(j, pVM, childTable.m_hScript);
    v10 = *(*pVM + 240LL);
    v19.m_type = 31;
    v19.m_flags = 0;
    v19.m_uint64 = childTable.m_uint64;
    v11 = KeyValues::GetName(j);
    v10(pVM, hTable, v11, &v19);
    if ( (v19.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v19.m_uint64);
    (*(*pVM + 344LL))(pVM, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
}


// Recursive_ConvertKeyValuesToTable  (line 1948, @0x0000000002cf3240, libserver.so)  // inlines: CVariantBase, Color, CopyData, Free, KeyValueToVariant, SetColor, operator=, ~CVariantBase
// calls: KeyValues::GetFirstValue, KeyValues::GetDataType, KeyValues::GetColor, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, KeyValues::GetName, KeyValues::GetNextValue, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetInt, KeyValues::GetString, KeyValues::GetPtr, KeyValues::GetUint64 (16 total)
// globals: jpt_2CF32DA
void __fastcall Recursive_ConvertKeyValuesToTable(KeyValues *pKeyValues, IScriptVM *pVM, HSCRIPT hTable)
{
  KeyValues *i; // r12
  void (__fastcall *v5)(IScriptVM *, HSCRIPT, const char *, ScriptVariant_t *); // r14
  float v6; // xmm1_4
  const char *Name; // rax
  KeyValues *j; // r12
  __int64 v9; // rax
  void (__fastcall *v10)(IScriptVM *, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  const char *v11; // rax
  int Int; // eax
  void *Ptr; // rax
  uint64 Uint64; // rax
  float Float; // xmm0_4
  ScriptVariant_t childTable; // [rsp+20h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v19; // [rsp+30h] [rbp-50h] BYREF
  Color v20; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  for ( i = KeyValues::GetFirstValue(pKeyValues); i != 0; i = KeyValues::GetNextValue(i) )
  {
    v5 = *(*pVM + 240LL);
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    switch ( KeyValues::GetDataType(i, 0) )
    {
      case CKeyValues_Data::types_t::TYPE_STRING:
        v19.m_uint64 = KeyValues::GetString(i, 0, "", 0, 0);
        v19.m_type = 30;
        v19.m_flags = 0;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        if ( (v19.m_flags & 1) != 0 )
          goto LABEL_4;
        break;
      case CKeyValues_Data::types_t::TYPE_INT:
        Int = KeyValues::GetInt(i, 0, 0);
        v19.m_type = 5;
        v19.m_flags = 0;
        v19.m_int = Int;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        if ( (v19.m_flags & 1) != 0 )
          goto LABEL_4;
        break;
      case CKeyValues_Data::types_t::TYPE_FLOAT:
        Float = KeyValues::GetFloat(i, 0, v6);
        v19.m_type = 1;
        v19.m_flags = 0;
        v19.m_float = Float;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        if ( (v19.m_flags & 1) != 0 )
          goto LABEL_4;
        break;
      case CKeyValues_Data::types_t::TYPE_PTR:
        Ptr = KeyValues::GetPtr(i, 0, 0);
        v19.m_type = 33;
        v19.m_flags = 0;
        v19.m_uint64 = Ptr;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        if ( (v19.m_flags & 1) != 0 )
          goto LABEL_4;
        break;
      case CKeyValues_Data::types_t::TYPE_COLOR:
        v20._color[0] = 0;
        v20._color[1] = 0;
        v20._color[2] = 0;
        v20._color[3] = 0;
        v19.m_int = KeyValues::GetColor(i, 0, &v20);
        v19.m_flags = 0;
        v19.m_type = 9;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        if ( (v19.m_flags & 1) != 0 )
          goto LABEL_4;
        break;
      case CKeyValues_Data::types_t::TYPE_UINT64:
        Uint64 = KeyValues::GetUint64(i, 0, 0);
        v19.m_type = 33;
        v19.m_flags = 0;
        v19.m_uint64 = Uint64;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v19, &childTable);
        if ( (v19.m_flags & 1) != 0 )
LABEL_4:
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v19.m_uint64);
        break;
      default:
        break;
    }
    Name = KeyValues::GetName(i);
    v5(pVM, hTable, Name, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
  for ( j = KeyValues::GetFirstTrueSubKey(pKeyValues); j != 0; j = KeyValues::GetNextTrueSubKey(j) )
  {
    childTable.m_uint64 = 0;
    childTable.m_flags = 0;
    v9 = *pVM;
    childTable.m_type = 0;
    (*(v9 + 264))(pVM, &childTable);
    Recursive_ConvertKeyValuesToTable(j, pVM, childTable.m_hScript);
    v10 = *(*pVM + 240LL);
    v19.m_flags = 0;
    v19.m_type = 31;
    v19.m_uint64 = childTable.m_uint64;
    v11 = KeyValues::GetName(j);
    v10(pVM, hTable, v11, &v19);
    if ( (v19.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v19.m_uint64);
    (*(*pVM + 344LL))(pVM, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
}


// Recursive_ConvertKeyValuesToTable  (line 1948, @0x0000000002d5c5f0 libserver.so, @0x0000000002dcfc30 libserver.so, @0x0000000002dec2d0 libserver.so)  // inlines: CVariantBase, Color, CopyData, Free, KeyValueToVariant, SetColor, operator=, ~CVariantBase
// calls: KeyValues::GetFirstValue, KeyValues::GetDataType, KeyValues::GetColor, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::GetName, KeyValues::GetNextValue, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetInt, KeyValues::GetString, KeyValues::GetPtr (16 total)
// globals: jpt_2D5C68A
void __fastcall Recursive_ConvertKeyValuesToTable(KeyValues *pKeyValues, IScriptVM *pVM, HSCRIPT hTable)
{
  KeyValues *i; // r12
  void (__fastcall *v5)(IScriptVM *, HSCRIPT, const char *, ScriptVariant_t *); // r14
  float v6; // xmm1_4
  int Color; // eax
  const char *Name; // rax
  KeyValues *j; // r12
  __int64 v10; // rax
  void (__fastcall *v11)(IScriptVM *, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  const char *v12; // rax
  int Int; // eax
  void *Ptr; // rax
  float Float; // xmm0_4
  uint64 Uint64; // rax
  const char *String; // [rsp+18h] [rbp-78h]
  ScriptVariant_t childTable; // [rsp+30h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v21; // [rsp+40h] [rbp-50h] BYREF
  Color v22; // [rsp+50h] [rbp-40h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  for ( i = KeyValues::GetFirstValue(pKeyValues); i != 0; i = KeyValues::GetNextValue(i) )
  {
    v5 = *(*pVM + 240LL);
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    switch ( KeyValues::GetDataType(i, 0) )
    {
      case CKeyValues_Data::types_t::TYPE_STRING:
        String = KeyValues::GetString(i, 0, "", 0, 0);
        v21.m_type = 0;
        v21.m_flags = 0;
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        v21.m_type = 30;
        v21.m_uint64 = String;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      case CKeyValues_Data::types_t::TYPE_INT:
        Int = KeyValues::GetInt(i, 0, 0);
        v21.m_type = 5;
        v21.m_flags = 0;
        v21.m_int = Int;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      case CKeyValues_Data::types_t::TYPE_FLOAT:
        Float = KeyValues::GetFloat(i, 0, v6);
        v21.m_type = 1;
        v21.m_flags = 0;
        v21.m_float = Float;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      case CKeyValues_Data::types_t::TYPE_PTR:
        Ptr = KeyValues::GetPtr(i, 0, 0);
        v21.m_type = 33;
        v21.m_flags = 0;
        v21.m_uint64 = Ptr;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      case CKeyValues_Data::types_t::TYPE_COLOR:
        v22._color[0] = 0;
        v22._color[1] = 0;
        v22._color[2] = 0;
        v22._color[3] = 0;
        Color = KeyValues::GetColor(i, 0, &v22);
        v21.m_type = 9;
        v21.m_flags = 0;
        v21.m_int = Color;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      case CKeyValues_Data::types_t::TYPE_UINT64:
        Uint64 = KeyValues::GetUint64(i, 0, 0);
        v21.m_flags = 0;
        v21.m_type = 33;
        v21.m_uint64 = Uint64;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      default:
        break;
    }
    Name = KeyValues::GetName(i);
    v5(pVM, hTable, Name, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
  for ( j = KeyValues::GetFirstTrueSubKey(pKeyValues); j != 0; j = KeyValues::GetNextTrueSubKey(j) )
  {
    childTable.m_uint64 = 0;
    childTable.m_type = 0;
    v10 = *pVM;
    childTable.m_flags = 0;
    (*(v10 + 264))(pVM, &childTable);
    Recursive_ConvertKeyValuesToTable(j, pVM, childTable.m_hScript);
    v11 = *(*pVM + 240LL);
    v21.m_type = 31;
    v21.m_flags = 0;
    v21.m_uint64 = childTable.m_uint64;
    v12 = KeyValues::GetName(j);
    v11(pVM, hTable, v12, &v21);
    if ( (v21.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v21.m_uint64);
    (*(*pVM + 344LL))(pVM, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
}


// Recursive_ConvertKeyValuesToTable  (line 1948, @0x0000000002d9b4c0, libserver.so)  // inlines: CVariantBase, Color, CopyData, Free, KeyValueToVariant, SetColor, operator=, ~CVariantBase
// calls: KeyValues::GetFirstValue, KeyValues::GetDataType, KeyValues::GetColor, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::GetName, KeyValues::GetNextValue, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetInt, KeyValues::GetString, KeyValues::GetPtr (16 total)
// globals: jpt_2D9B55A
void __fastcall Recursive_ConvertKeyValuesToTable(KeyValues *pKeyValues, IScriptVM *pVM, HSCRIPT hTable)
{
  KeyValues *i; // r12
  void (__fastcall *v5)(IScriptVM *, HSCRIPT, const char *, ScriptVariant_t *); // r14
  float v6; // xmm1_4
  int Color; // eax
  const char *Name; // rax
  KeyValues *j; // r12
  __int64 v10; // rax
  void (__fastcall *v11)(IScriptVM *, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  const char *v12; // rax
  int Int; // eax
  void *Ptr; // rax
  float Float; // xmm0_4
  uint64 Uint64; // rax
  const char *String; // [rsp+18h] [rbp-78h]
  ScriptVariant_t childTable; // [rsp+30h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v21; // [rsp+40h] [rbp-50h] BYREF
  Color v22; // [rsp+50h] [rbp-40h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  for ( i = KeyValues::GetFirstValue(pKeyValues); i != 0; i = KeyValues::GetNextValue(i) )
  {
    v5 = *(*pVM + 240LL);
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    switch ( KeyValues::GetDataType(i, 0) )
    {
      case CKeyValues_Data::types_t::TYPE_STRING:
        String = KeyValues::GetString(i, 0, "", 0, 0);
        v21.m_type = 0;
        v21.m_flags = 0;
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        v21.m_type = 30;
        v21.m_uint64 = String;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      case CKeyValues_Data::types_t::TYPE_INT:
        Int = KeyValues::GetInt(i, 0, 0);
        v21.m_type = 5;
        v21.m_flags = 0;
        v21.m_int = Int;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      case CKeyValues_Data::types_t::TYPE_FLOAT:
        Float = KeyValues::GetFloat(i, 0, v6);
        v21.m_type = 1;
        v21.m_flags = 0;
        v21.m_float = Float;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      case CKeyValues_Data::types_t::TYPE_PTR:
        Ptr = KeyValues::GetPtr(i, 0, 0);
        v21.m_type = 33;
        v21.m_flags = 0;
        v21.m_uint64 = Ptr;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        if ( (v21.m_flags & 1) != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v21.m_uint64);
        break;
      case CKeyValues_Data::types_t::TYPE_COLOR:
        v22._color[0] = 0;
        v22._color[1] = 0;
        v22._color[2] = 0;
        v22._color[3] = 0;
        Color = KeyValues::GetColor(i, 0, &v22);
        v21.m_type = 9;
        v21.m_flags = 0;
        v21.m_int = Color;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      case CKeyValues_Data::types_t::TYPE_UINT64:
        Uint64 = KeyValues::GetUint64(i, 0, 0);
        v21.m_flags = 0;
        v21.m_type = 33;
        v21.m_uint64 = Uint64;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      default:
        break;
    }
    Name = KeyValues::GetName(i);
    v5(pVM, hTable, Name, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
  for ( j = KeyValues::GetFirstTrueSubKey(pKeyValues); j != 0; j = KeyValues::GetNextTrueSubKey(j) )
  {
    childTable.m_uint64 = 0;
    childTable.m_type = 0;
    v10 = *pVM;
    childTable.m_flags = 0;
    (*(v10 + 264))(pVM, &childTable);
    Recursive_ConvertKeyValuesToTable(j, pVM, childTable.m_hScript);
    v11 = *(*pVM + 240LL);
    v21.m_type = 31;
    v21.m_flags = 0;
    v21.m_uint64 = childTable.m_uint64;
    v12 = KeyValues::GetName(j);
    v11(pVM, hTable, v12, &v21);
    if ( (v21.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v21.m_uint64);
    (*(*pVM + 344LL))(pVM, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
}


// Recursive_ConvertKeyValuesToTable  (line 1948, @0x0000000002db2d00, libserver.so)  // inlines: CVariantBase, Color, CopyData, Free, KeyValueToVariant, SetColor, operator=, ~CVariantBase
// calls: KeyValues::GetFirstValue, KeyValues::GetDataType, KeyValues::GetColor, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::GetName, KeyValues::GetNextValue, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetInt, KeyValues::GetString, KeyValues::GetPtr (16 total)
// globals: jpt_2DB2D9A
void __fastcall Recursive_ConvertKeyValuesToTable(KeyValues *pKeyValues, IScriptVM *pVM, HSCRIPT hTable)
{
  KeyValues *i; // r12
  void (__fastcall *v5)(IScriptVM *, HSCRIPT, const char *, ScriptVariant_t *); // r14
  float v6; // xmm1_4
  int Color; // eax
  const char *Name; // rax
  KeyValues *j; // r12
  __int64 v10; // rax
  void (__fastcall *v11)(IScriptVM *, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  const char *v12; // rax
  int Int; // eax
  void *Ptr; // rax
  float Float; // xmm0_4
  const char *String; // [rsp+18h] [rbp-78h]
  ScriptVariant_t childTable; // [rsp+30h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v20; // [rsp+40h] [rbp-50h] BYREF
  Color v21; // [rsp+50h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  for ( i = KeyValues::GetFirstValue(pKeyValues); i != 0; i = KeyValues::GetNextValue(i) )
  {
    v5 = *(*pVM + 240LL);
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    switch ( KeyValues::GetDataType(i, 0) )
    {
      case CKeyValues_Data::types_t::TYPE_STRING:
        String = KeyValues::GetString(i, 0, "", 0, 0);
        v20.m_type = 0;
        v20.m_flags = 0;
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        v20.m_type = 30;
        v20.m_uint64 = String;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        if ( (v20.m_flags & 1) != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v20.m_uint64);
        break;
      case CKeyValues_Data::types_t::TYPE_INT:
        Int = KeyValues::GetInt(i, 0, 0);
        v20.m_type = 5;
        v20.m_flags = 0;
        v20.m_int = Int;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_FLOAT:
        Float = KeyValues::GetFloat(i, 0, v6);
        v20.m_type = 1;
        v20.m_flags = 0;
        v20.m_float = Float;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_PTR:
        Ptr = KeyValues::GetPtr(i, 0, 0);
        v20.m_type = 33;
        v20.m_flags = 0;
        v20.m_uint64 = Ptr;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_COLOR:
        v21._color[0] = 0;
        v21._color[1] = 0;
        v21._color[2] = 0;
        v21._color[3] = 0;
        Color = KeyValues::GetColor(i, 0, &v21);
        v20.m_type = 9;
        v20.m_flags = 0;
        v20.m_int = Color;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      case CKeyValues_Data::types_t::TYPE_UINT64:
        v20.m_uint64 = KeyValues::GetUint64(i, 0, 0);
        v20.m_flags = 0;
        v20.m_type = 33;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v20, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v20);
        break;
      default:
        break;
    }
    Name = KeyValues::GetName(i);
    v5(pVM, hTable, Name, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
  for ( j = KeyValues::GetFirstTrueSubKey(pKeyValues); j != 0; j = KeyValues::GetNextTrueSubKey(j) )
  {
    v10 = *pVM;
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    (*(v10 + 264))(pVM, &childTable);
    Recursive_ConvertKeyValuesToTable(j, pVM, childTable.m_hScript);
    v11 = *(*pVM + 240LL);
    v20.m_type = 31;
    v20.m_flags = 0;
    v20.m_uint64 = childTable.m_uint64;
    v12 = KeyValues::GetName(j);
    v11(pVM, hTable, v12, &v20);
    if ( (v20.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v20.m_uint64);
    (*(*pVM + 344LL))(pVM, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
}


// Recursive_ConvertKeyValuesToTable  (line 1948, @0x0000000002e1db40, libserver.so)  // inlines: CVariantBase, Color, CopyData, Free, KeyValueToVariant, SetColor, operator=, ~CVariantBase
// calls: KeyValues::GetFirstValue, KeyValues::GetDataType, KeyValues::GetColor, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::GetName, KeyValues::GetNextValue, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetInt, KeyValues::GetString, KeyValues::GetPtr (16 total)
// globals: jpt_2E1DBDA
void __fastcall Recursive_ConvertKeyValuesToTable(KeyValues *pKeyValues, IScriptVM *pVM, HSCRIPT hTable)
{
  KeyValues *i; // r12
  void (__fastcall *v5)(IScriptVM *, HSCRIPT, const char *, ScriptVariant_t *); // r14
  float v6; // xmm1_4
  int Color; // eax
  const char *Name; // rax
  KeyValues *j; // r12
  __int64 v10; // rax
  void (__fastcall *v11)(IScriptVM *, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  const char *v12; // rax
  int Int; // eax
  void *Ptr; // rax
  uint64 Uint64; // rax
  float Float; // xmm0_4
  const char *String; // [rsp+18h] [rbp-78h]
  ScriptVariant_t childTable; // [rsp+30h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v21; // [rsp+40h] [rbp-50h] BYREF
  Color v22; // [rsp+50h] [rbp-40h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  for ( i = KeyValues::GetFirstValue(pKeyValues); i != 0; i = KeyValues::GetNextValue(i) )
  {
    v5 = *(*pVM + 240LL);
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    switch ( KeyValues::GetDataType(i, 0) )
    {
      case CKeyValues_Data::types_t::TYPE_STRING:
        String = KeyValues::GetString(i, 0, "", 0, 0);
        v21.m_type = 0;
        v21.m_flags = 0;
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        v21.m_type = 30;
        v21.m_uint64 = String;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        if ( (v21.m_flags & 1) != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v21.m_uint64);
        break;
      case CKeyValues_Data::types_t::TYPE_INT:
        Int = KeyValues::GetInt(i, 0, 0);
        v21.m_type = 5;
        v21.m_flags = 0;
        v21.m_int = Int;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      case CKeyValues_Data::types_t::TYPE_FLOAT:
        Float = KeyValues::GetFloat(i, 0, v6);
        v21.m_type = 1;
        v21.m_flags = 0;
        v21.m_float = Float;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      case CKeyValues_Data::types_t::TYPE_PTR:
        Ptr = KeyValues::GetPtr(i, 0, 0);
        v21.m_type = 33;
        v21.m_flags = 0;
        v21.m_uint64 = Ptr;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      case CKeyValues_Data::types_t::TYPE_COLOR:
        v22._color[0] = 0;
        v22._color[1] = 0;
        v22._color[2] = 0;
        v22._color[3] = 0;
        Color = KeyValues::GetColor(i, 0, &v22);
        v21.m_type = 9;
        v21.m_flags = 0;
        v21.m_int = Color;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      case CKeyValues_Data::types_t::TYPE_UINT64:
        Uint64 = KeyValues::GetUint64(i, 0, 0);
        v21.m_flags = 0;
        v21.m_type = 33;
        v21.m_uint64 = Uint64;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      default:
        break;
    }
    Name = KeyValues::GetName(i);
    v5(pVM, hTable, Name, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
  for ( j = KeyValues::GetFirstTrueSubKey(pKeyValues); j != 0; j = KeyValues::GetNextTrueSubKey(j) )
  {
    childTable.m_uint64 = 0;
    childTable.m_type = 0;
    v10 = *pVM;
    childTable.m_flags = 0;
    (*(v10 + 264))(pVM, &childTable);
    Recursive_ConvertKeyValuesToTable(j, pVM, childTable.m_hScript);
    v11 = *(*pVM + 240LL);
    v21.m_type = 31;
    v21.m_flags = 0;
    v21.m_uint64 = childTable.m_uint64;
    v12 = KeyValues::GetName(j);
    v11(pVM, hTable, v12, &v21);
    if ( (v21.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v21.m_uint64);
    (*(*pVM + 344LL))(pVM, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
}


// Recursive_ConvertKeyValuesToTable  (line 1948, @0x000000000309d930, libserver.so)  // inlines: CVariantBase, Color, CopyData, Free, KeyValueToVariant, SetColor, operator=, ~CVariantBase
// calls: KeyValues::GetFirstValue, KeyValues::GetDataType, KeyValues::GetColor, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::GetName, KeyValues::GetNextValue, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetInt, KeyValues::GetString, KeyValues::GetPtr (16 total)
// callers: CEntityInstance::PutInputDataInScriptTable
// globals: jpt_309D9C6
void __fastcall Recursive_ConvertKeyValuesToTable(KeyValues *pKeyValues, IScriptVM *pVM, HSCRIPT hTable)
{
  KeyValues *i; // r12
  void (__fastcall *v5)(IScriptVM *, HSCRIPT, const char *, ScriptVariant_t *); // r14
  float v6; // xmm1_4
  int Color; // eax
  const char *Name; // rax
  KeyValues *j; // r12
  __int64 v10; // rax
  void (__fastcall *v11)(IScriptVM *, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  const char *v12; // rax
  int Int; // eax
  void *Ptr; // rax
  float Float; // xmm0_4
  uint64 Uint64; // rax
  const char *String; // [rsp+18h] [rbp-78h]
  ScriptVariant_t childTable; // [rsp+30h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v21; // [rsp+40h] [rbp-50h] BYREF
  Color v22; // [rsp+50h] [rbp-40h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  for ( i = KeyValues::GetFirstValue(pKeyValues); i != 0; i = KeyValues::GetNextValue(i) )
  {
    v5 = *(*pVM + 240LL);
    childTable.m_uint64 = 0;
    childTable.m_type = 0;
    childTable.m_flags = 0;
    switch ( KeyValues::GetDataType(i, 0) )
    {
      case CKeyValues_Data::types_t::TYPE_STRING:
        String = KeyValues::GetString(i, 0, "", 0, 0);
        v21.m_type = 0;
        v21.m_flags = 0;
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        v21.m_type = 30;
        v21.m_uint64 = String;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      case CKeyValues_Data::types_t::TYPE_INT:
        Int = KeyValues::GetInt(i, 0, 0);
        v21.m_type = 5;
        v21.m_flags = 0;
        v21.m_int = Int;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      case CKeyValues_Data::types_t::TYPE_FLOAT:
        Float = KeyValues::GetFloat(i, 0, 0.0, v6);
        v21.m_type = 1;
        v21.m_flags = 0;
        v21.m_float = Float;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      case CKeyValues_Data::types_t::TYPE_PTR:
        Ptr = KeyValues::GetPtr(i, 0, 0);
        v21.m_flags = 0;
        v21.m_type = 33;
        v21.m_uint64 = Ptr;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      case CKeyValues_Data::types_t::TYPE_COLOR:
        v22._color[0] = 0;
        v22._color[1] = 0;
        v22._color[2] = 0;
        v22._color[3] = 0;
        Color = KeyValues::GetColor(i, 0, &v22);
        v21.m_type = 9;
        v21.m_flags = 0;
        v21.m_int = Color;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      case CKeyValues_Data::types_t::TYPE_UINT64:
        Uint64 = KeyValues::GetUint64(i, 0, 0);
        v21.m_type = 33;
        v21.m_flags = 0;
        v21.m_uint64 = Uint64;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&v21, &childTable);
        CVariantBase<CVariantDefaultAllocator>::Free(&v21);
        break;
      default:
        break;
    }
    Name = KeyValues::GetName(i);
    v5(pVM, hTable, Name, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
  for ( j = KeyValues::GetFirstTrueSubKey(pKeyValues); j != 0; j = KeyValues::GetNextTrueSubKey(j) )
  {
    v10 = *pVM;
    childTable.m_type = 0;
    childTable.m_flags = 0;
    childTable.m_uint64 = 0;
    (*(v10 + 264))(pVM, &childTable);
    Recursive_ConvertKeyValuesToTable(j, pVM, childTable.m_hScript);
    v11 = *(*pVM + 240LL);
    v21.m_type = 31;
    v21.m_flags = 0;
    v21.m_uint64 = childTable.m_uint64;
    v12 = KeyValues::GetName(j);
    v11(pVM, hTable, v12, &v21);
    if ( (v21.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v21.m_uint64);
    (*(*pVM + 344LL))(pVM, &childTable);
    if ( (childTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, childTable.m_uint64);
  }
}


// IScriptVM::CreateTableFromKeyValues  (line 1965, @0x000000000245b6e0, libserver.so)
// calls: Recursive_ConvertKeyValuesToTable
// callers: CDOTA_ActionRunner::SelectActionTargets, CDOTA_ActionRunner::SelectActionPointsWithoutOffset
void __fastcall IScriptVM::CreateTableFromKeyValues(
        IScriptVM *const this,
        ScriptVariant_t *const Table,
        KeyValues *pKeyValues)
{
  (*(*this + 264LL))(this);
  if ( Table->m_uint64 != 0 && pKeyValues != 0 )
    Recursive_ConvertKeyValuesToTable(pKeyValues, this, Table->m_hScript);
}


