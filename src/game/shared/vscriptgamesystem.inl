
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CVScriptGameSystem::~CVScriptGameSystem  (line 41, @0x0000000001f93bd0, libserver.so)  // inlines: Count, Free, GetVM, Purge, RemoveAll, Term, ~CScriptAccessorT, ~CScriptScopeT, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVectorUltraConservative
// calls: CUtlRBTree<CUtlMap<CUtlSymbol, HSCRIPT__*>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, HSCRIPT__*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, HSCRIPT__*>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, IGameSystem::~IGameSystem, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, HSCRIPT__*>::Node_t, short unsigned int>, short unsigned int>::Purge
// globals: g_pScriptVM
void __fastcall CVScriptGameSystem::~CVScriptGameSystem(CVScriptGameSystem *const this)
{
  bool v2; // zf
  IScriptVM *v3; // r14
  int v4; // r12d
  __int64 v5; // r13
  HSCRIPT__ **v6; // rdx
  CUtlVectorUltraConservative<HSCRIPT__**,CUtlVectorUltraConservativeAllocator>::Data_t *v7; // rsi
  CUtlVectorUltraConservative<HSCRIPT__**,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rsi

  this->_vptr_IGameSystem = off_3FCECF0;
  this->_vptr_IVScriptGameSystem = off_3FCEED0;
  CUtlRBTree<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_CompiledScriptCache.m_Tree);
  v2 = (this->m_CompiledScriptCache.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_CompiledScriptCache.m_Tree.m_FirstFree = -1;
  if ( v2 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_CompiledScriptCache.m_Tree.m_Elements);
    v2 = (this->m_CompiledScriptCache.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_CompiledScriptCache.m_Tree.m_LastAlloc.index = -1;
    if ( v2 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_CompiledScriptCache.m_Tree.m_Elements);
  }
  else
  {
    this->m_CompiledScriptCache.m_Tree.m_LastAlloc.index = -1;
  }
  CUtlRBTree<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_ScriptScopeCache.m_Tree);
  v2 = (this->m_ScriptScopeCache.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_ScriptScopeCache.m_Tree.m_FirstFree = -1;
  if ( v2 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_ScriptScopeCache.m_Tree.m_Elements);
    v2 = (this->m_ScriptScopeCache.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_ScriptScopeCache.m_Tree.m_LastAlloc.index = -1;
    if ( v2 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_ScriptScopeCache.m_Tree.m_Elements);
  }
  else
  {
    this->m_ScriptScopeCache.m_Tree.m_LastAlloc.index = -1;
  }
  if ( this->m_RootTable.m_hScope != 0 )
  {
    v3 = g_pScriptVM;
    v4 = 0;
    if ( g_pScriptVM != 0 )
    {
      while ( 1 )
      {
        m_pData = this->m_RootTable.m_FuncHandles.m_pData;
        if ( m_pData != 0 )
        {
          if ( v4 >= m_pData->m_Size )
            goto LABEL_12;
        }
        else if ( v4 >= 0 )
        {
          goto LABEL_12;
        }
        v5 = v4;
        v6 = m_pData->m_Elements[v4++];
        (*(*v3 + 152LL))(v3, *v6);
        *this->m_RootTable.m_FuncHandles.m_pData->m_Elements[v5] = 0;
      }
    }
    m_pData = this->m_RootTable.m_FuncHandles.m_pData;
LABEL_12:
    if ( m_pData != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_RootTable.m_FuncHandles.m_pData = 0;
    }
    if ( this->m_RootTable.m_hScope != 0 && v3 != 0 && (this->m_RootTable.m_flags & 1) == 0 )
    {
      (*(*v3 + 136LL))(v3);
      this->m_RootTable.m_hScope = 0;
    }
    else
    {
      this->m_RootTable.m_hScope = 0;
    }
  }
  v7 = this->m_RootTable.m_FuncHandles.m_pData;
  this->m_RootTable.m_flags = 0;
  if ( v7 != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    this->m_RootTable.m_FuncHandles.m_pData = 0;
  }
  this->m_RootTable.m_hScope = 0;
  IGameSystem::~IGameSystem(this);
}


// CVScriptGameSystem::~CVScriptGameSystem  (line 41, @0x0000000001f93dc0, libserver.so)  // inlines: Count, Free, GetVM, Purge, RemoveAll, Term, ~CScriptAccessorT, ~CScriptScopeT, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVectorUltraConservative, ~CVScriptGameSystem
// calls: CUtlRBTree<CUtlMap<CUtlSymbol, HSCRIPT__*>::Node_t, short unsigned int, CUtlMap<CUtlSymbol, HSCRIPT__*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, HSCRIPT__*>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, IGameSystem::~IGameSystem, operator delete, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, HSCRIPT__*>::Node_t, short unsigned int>, short unsigned int>::Purge
// globals: g_pScriptVM
void __fastcall CVScriptGameSystem::~CVScriptGameSystem(CVScriptGameSystem *const this)
{
  bool v2; // zf
  IScriptVM *v3; // r14
  int v4; // r12d
  __int64 v5; // r13
  HSCRIPT__ **v6; // rdx
  CUtlVectorUltraConservative<HSCRIPT__**,CUtlVectorUltraConservativeAllocator>::Data_t *v7; // rsi
  CUtlVectorUltraConservative<HSCRIPT__**,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rsi

  this->_vptr_IGameSystem = off_3FCECF0;
  this->_vptr_IVScriptGameSystem = off_3FCEED0;
  CUtlRBTree<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_CompiledScriptCache.m_Tree);
  v2 = (this->m_CompiledScriptCache.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_CompiledScriptCache.m_Tree.m_FirstFree = -1;
  if ( v2 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_CompiledScriptCache.m_Tree.m_Elements);
    v2 = (this->m_CompiledScriptCache.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_CompiledScriptCache.m_Tree.m_LastAlloc.index = -1;
    if ( v2 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_CompiledScriptCache.m_Tree.m_Elements);
  }
  else
  {
    this->m_CompiledScriptCache.m_Tree.m_LastAlloc.index = -1;
  }
  CUtlRBTree<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_ScriptScopeCache.m_Tree);
  v2 = (this->m_ScriptScopeCache.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
  this->m_ScriptScopeCache.m_Tree.m_FirstFree = -1;
  if ( v2 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_ScriptScopeCache.m_Tree.m_Elements);
    v2 = (this->m_ScriptScopeCache.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_ScriptScopeCache.m_Tree.m_LastAlloc.index = -1;
    if ( v2 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol,HSCRIPT__ *,unsigned short,bool (*)(CUtlSymbol const&,CUtlSymbol const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_ScriptScopeCache.m_Tree.m_Elements);
  }
  else
  {
    this->m_ScriptScopeCache.m_Tree.m_LastAlloc.index = -1;
  }
  if ( this->m_RootTable.m_hScope != 0 )
  {
    v3 = g_pScriptVM;
    v4 = 0;
    if ( g_pScriptVM != 0 )
    {
      while ( 1 )
      {
        m_pData = this->m_RootTable.m_FuncHandles.m_pData;
        if ( m_pData != 0 )
        {
          if ( v4 >= m_pData->m_Size )
            goto LABEL_12;
        }
        else if ( v4 >= 0 )
        {
          goto LABEL_12;
        }
        v5 = v4;
        v6 = m_pData->m_Elements[v4++];
        (*(*v3 + 152LL))(v3, *v6);
        *this->m_RootTable.m_FuncHandles.m_pData->m_Elements[v5] = 0;
      }
    }
    m_pData = this->m_RootTable.m_FuncHandles.m_pData;
LABEL_12:
    if ( m_pData != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_RootTable.m_FuncHandles.m_pData = 0;
    }
    if ( this->m_RootTable.m_hScope != 0 && v3 != 0 && (this->m_RootTable.m_flags & 1) == 0 )
    {
      (*(*v3 + 136LL))(v3);
      this->m_RootTable.m_hScope = 0;
    }
    else
    {
      this->m_RootTable.m_hScope = 0;
    }
  }
  v7 = this->m_RootTable.m_FuncHandles.m_pData;
  this->m_RootTable.m_flags = 0;
  if ( v7 != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    this->m_RootTable.m_FuncHandles.m_pData = 0;
  }
  this->m_RootTable.m_hScope = 0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CVScriptGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 43, @0x0000000001f71d70, libserver.so)
void __fastcall CVScriptGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CVScriptGameSystem *const this)
{
  ;
}


// CVScriptGameSystem::DoesGameSystemReallocate  (line 43, @0x0000000001f71d80, libserver.so)
// globals: CVScriptGameSystem::sm_Factory
bool __fastcall CVScriptGameSystem::DoesGameSystemReallocate(const CVScriptGameSystem *const this)
{
  return (*(CVScriptGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CVScriptGameSystem::sm_Factory);
}


// CVScriptGameSystem::SetGameSystemGlobalPtrs  (line 43, @0x0000000001f71da0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CVScriptGameSystem::sm_Factory
void __fastcall CVScriptGameSystem::SetGameSystemGlobalPtrs(CVScriptGameSystem *const this, void *pValue)
{
  if ( CVScriptGameSystem::sm_Factory != 0 )
    (*(CVScriptGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(CVScriptGameSystem::sm_Factory, pValue);
}


// CVScriptGameSystem::IsVScriptInitialized  (line 112, @0x0000000001f71dd0, libserver.so)
bool __fastcall CVScriptGameSystem::IsVScriptInitialized(const CVScriptGameSystem *const this)
{
  return this->m_bVscriptServerInitialized;
}


// CVScriptGameSystem::IsEntityCreationAllowedInScripts  (line 117, @0x0000000001f71df0, libserver.so)
bool __fastcall CVScriptGameSystem::IsEntityCreationAllowedInScripts(const CVScriptGameSystem *const this)
{
  return this->m_bAllowEntityCreationInScripts;
}


// CVScriptGameSystem::GetVM  (line 122, @0x0000000001f71e10, libserver.so)
// globals: g_pScriptVM
IScriptVM *__fastcall CVScriptGameSystem::GetVM(CVScriptGameSystem *const this)
{
  return g_pScriptVM;
}


// GetFromScriptTable<bool>  (line 128, @0x00000000026ac340, libserver.so)  // inlines: AssignTo, CVariantBase, Free, _V_strcmp, ~CVariantBase
// calls: Warning, VariantFieldTypeName, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CDOTA_ProjectileManager::Script_CreateLinearProjectile, CDOTA_ProjectileManager::Script_CreateTrackingProjectile
// strings: "false", "true", "Invalid conversion : CString '%s' to bool\n", "No conversion from %s to bool now\n"
// globals: jpt_26AC3B3
bool __fastcall GetFromScriptTable<bool>(HSCRIPT hTable, const char *pszVarName, bool *const value)
{
  bool v4; // bl
  bool v6; // zf
  const char *v7; // rax
  ScriptVariant_t ValueVariant; // [rsp+0h] [rbp-30h] BYREF

  ValueVariant.m_flags = 0;
  ValueVariant.m_type = 0;
  ValueVariant.m_uint64 = 0;
  if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, pszVarName, &ValueVariant) != 0 )
  {
    switch ( ValueVariant.m_type )
    {
      case 0:
        *value = 0;
        v4 = 0;
        break;
      case 1:
        v6 = ValueVariant.m_float == 0.0;
        goto LABEL_18;
      case 5:
      case 0x25:
        *value = ValueVariant.m_int != 0;
        v4 = 1;
        break;
      case 6:
        *value = ValueVariant.m_char;
        v4 = 1;
        break;
      case 0x1A:
      case 0x21:
        *value = ValueVariant.m_uint64 != 0;
        v4 = 1;
        break;
      case 0x1E:
        if ( strcmp(ValueVariant.m_pszString, "0") == 0
          || strcmp(ValueVariant.m_pszString, "false") == 0
          || strcmp(ValueVariant.m_pszString, "no") == 0 )
        {
          *value = 0;
          v4 = 1;
        }
        else
        {
          if ( strcmp(ValueVariant.m_pszString, "1") != 0
            && strcmp(ValueVariant.m_pszString, "true") != 0
            && strcmp(ValueVariant.m_pszString, "yes") != 0 )
          {
            Warning("Invalid conversion : CString '%s' to bool\n", ValueVariant.m_pszString);
            goto LABEL_10;
          }
          *value = 1;
          v4 = 1;
        }
        break;
      case 0x22:
        v6 = ValueVariant.m_float64 == 0.0;
LABEL_18:
        *value = !v6;
        v4 = 1;
        break;
      default:
        v7 = VariantFieldTypeName(ValueVariant.m_type);
        Warning("No conversion from %s to bool now\n", v7);
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    v4 = 0;
  }
  (*(*g_pScriptVM + 344LL))(g_pScriptVM, &ValueVariant);
  if ( (ValueVariant.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, ValueVariant.m_uint64);
  return v4;
}


// GetFromScriptTable<float>  (line 128, @0x00000000026ac570, libserver.so)  // inlines: AssignTo, CVariantBase, Free, atof, ~CVariantBase
// calls: VariantFieldTypeName, Warning, strtod, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CDOTA_ProjectileManager::Script_CreateLinearProjectile, CDOTA_ProjectileManager::Script_CreateTrackingProjectile
// strings: "No conversion from %s to float now\n"
// globals: jpt_26AC5D9
bool __fastcall GetFromScriptTable<float>(HSCRIPT hTable, const char *pszVarName, float *const value)
{
  const char *v4; // rax
  bool v5; // r12
  float m_char; // xmm0_4
  __m128d v8; // xmm0
  ScriptVariant_t ValueVariant; // [rsp+0h] [rbp-30h] BYREF

  ValueVariant.m_type = 0;
  ValueVariant.m_flags = 0;
  ValueVariant.m_uint64 = 0;
  if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, pszVarName, &ValueVariant) != 0 )
  {
    switch ( ValueVariant.m_type )
    {
      case 0:
        *value = 0.0;
        v5 = 0;
        break;
      case 1:
        *value = ValueVariant.m_float;
        v5 = 1;
        break;
      case 5:
        *value = ValueVariant.m_int;
        v5 = 1;
        break;
      case 6:
        m_char = ValueVariant.m_char;
        goto LABEL_15;
      case 0x1A:
        *value = ValueVariant.m_int;
        v5 = 1;
        break;
      case 0x1E:
        v8.m128d_f64[0] = strtod(ValueVariant.m_pszString, 0);
        *value = _mm_movedup_pd(v8).m128d_f64[0];
        v5 = 1;
        break;
      case 0x21:
        if ( ValueVariant.m_int64 < 0 )
          m_char = (ValueVariant.m_char & 1 | (ValueVariant.m_uint64 >> 1))
                 + (ValueVariant.m_char & 1 | (ValueVariant.m_uint64 >> 1));
        else
          m_char = ValueVariant.m_int;
LABEL_15:
        *value = m_char;
        v5 = 1;
        break;
      case 0x22:
        *value = ValueVariant.m_float64;
        v5 = 1;
        break;
      case 0x25:
        *value = ValueVariant.m_int;
        v5 = 1;
        break;
      default:
        v4 = VariantFieldTypeName(ValueVariant.m_type);
        Warning("No conversion from %s to float now\n", v4);
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v5 = 0;
  }
  (*(*g_pScriptVM + 344LL))(g_pScriptVM, &ValueVariant);
  if ( (ValueVariant.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, ValueVariant.m_uint64);
  return v5;
}


// GetFromScriptTable<int>  (line 128, @0x00000000026ac780, libserver.so)  // inlines: AssignTo, CVariantBase, Free, atoi, ~CVariantBase
// calls: VariantFieldTypeName, Warning, strtol, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CDOTA_ProjectileManager::Script_CreateLinearProjectile, CDOTA_ProjectileManager::Script_CreateTrackingProjectile
// strings: "No conversion from %s to int now\n"
// globals: jpt_26AC7E7
bool __fastcall GetFromScriptTable<int>(HSCRIPT hTable, const char *pszVarName, int *const value)
{
  const char *v4; // rax
  bool v5; // r12
  int v7; // eax
  int v8; // eax
  unsigned int m_int; // edx
  ScriptVariant_t ValueVariant; // [rsp+0h] [rbp-30h] BYREF

  ValueVariant.m_type = 0;
  ValueVariant.m_flags = 0;
  ValueVariant.m_uint64 = 0;
  if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, pszVarName, &ValueVariant) != 0 )
  {
    switch ( ValueVariant.m_type )
    {
      case 0:
        *value = 0;
        v5 = 0;
        break;
      case 1:
        *value = ValueVariant.m_float;
        v5 = 1;
        break;
      case 5:
        *value = ValueVariant.m_int;
        v5 = 1;
        break;
      case 6:
        *value = ValueVariant.m_char;
        v5 = 1;
        break;
      case 0x1A:
        m_int = 0x7FFFFFFF;
        if ( ValueVariant.m_int64 <= 0x7FFFFFFF )
        {
          m_int = 0x80000000;
          if ( ValueVariant.m_int64 >= 0xFFFFFFFF80000000LL )
            m_int = ValueVariant.m_int;
        }
        *value = m_int;
        v5 = 1;
        break;
      case 0x1E:
        *value = strtol(ValueVariant.m_pszString, 0, 10);
        v5 = 1;
        break;
      case 0x21:
        v8 = 0x7FFFFFFF;
        if ( ValueVariant.m_uint64 <= 0x7FFFFFFE )
          v8 = ValueVariant.m_int;
        *value = v8;
        v5 = 1;
        break;
      case 0x22:
        *value = ValueVariant.m_float64;
        v5 = 1;
        break;
      case 0x25:
        v7 = 0x7FFFFFFF;
        if ( ValueVariant.m_int <= 0x7FFFFFFEu )
          v7 = ValueVariant.m_int;
        *value = v7;
        v5 = 1;
        break;
      default:
        v4 = VariantFieldTypeName(ValueVariant.m_type);
        Warning("No conversion from %s to int now\n", v4);
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v5 = 0;
  }
  (*(*g_pScriptVM + 344LL))(g_pScriptVM, &ValueVariant);
  if ( (ValueVariant.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, ValueVariant.m_uint64);
  return v5;
}


