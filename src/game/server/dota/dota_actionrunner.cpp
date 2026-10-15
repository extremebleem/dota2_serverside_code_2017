
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_ActionRunner::CDOTA_ActionRunner  (line 25, @0x0000000002425570, libserver.so)
// callers: CDOTA_Item_DataDriven::CDOTA_Item_DataDriven, CDOTA_Modifier_DataDriven::CDOTA_Modifier_DataDriven
void __fastcall CDOTA_ActionRunner::CDOTA_ActionRunner(CDOTA_ActionRunner *const this)
{
  this->_vptr_CDOTA_ActionRunner = &off_40D6D30;
  this->m_pCaster = 0;
  this->m_pEventContext = &CModifierParams::s_Default;
}


// CDOTA_ActionRunner::~CDOTA_ActionRunner  (line 31, @0x0000000002430380, libserver.so)
// calls: CDOTA_ActionDelayer::RemoveDelayedActions
// callers: CDOTA_Item_DataDriven::~CDOTA_Item_DataDriven, CDOTA_Modifier_DataDriven::~CDOTA_Modifier_DataDriven
// globals: g_DOTA_ActionDelayer
void __fastcall CDOTA_ActionRunner::~CDOTA_ActionRunner(CDOTA_ActionRunner *const this)
{
  this->_vptr_CDOTA_ActionRunner = &off_40D6D30;
  CDOTA_ActionDelayer::RemoveDelayedActions(&g_DOTA_ActionDelayer, this);
}


// CDOTA_ActionRunner::GetActionCaster  (line 40, @0x00000000024255a0, libserver.so)
CDOTA_BaseNPC *__fastcall CDOTA_ActionRunner::GetActionCaster(CDOTA_ActionRunner *const this)
{
  return this->m_pCaster;
}


// CDOTA_ActionRunner::GetActionTeamNumber  (line 46, @0x00000000024255b0, libserver.so)  // inlines: GetActionCaster, GetTeamNumber
int __fastcall CDOTA_ActionRunner::GetActionTeamNumber(CDOTA_ActionRunner *const this)
{
  CDOTA_BaseNPC *m_pCaster; // rax

  m_pCaster = this->m_pCaster;
  if ( m_pCaster != 0 )
    return m_pCaster->m_iTeamNum.m_Value;
  else
    return 0;
}


// CDOTA_ActionRunner::ValueNeedsExpressionCalculation  (line 55, @0x00000000024255e0, libserver.so)
// calls: CharacterSetBuild
// callers: CDOTA_ActionRunner::DecodeIntValue, CDOTA_ActionRunner::DecodeFloatValue
// strings: "()+-*/"
// globals: CDOTA_ActionRunner::ValueNeedsExpressionCalculation(char const*)::s_characterSetBuilt, CDOTA_ActionRunner::ValueNeedsExpressionCalculation(char const*)::s_expressionNecessitatingChars
bool __fastcall CDOTA_ActionRunner::ValueNeedsExpressionCalculation(
        CDOTA_ActionRunner *const this,
        const char *pszValue)
{
  __int64 v3; // rax
  __int64 v4; // rax

  if ( !CDOTA_ActionRunner::ValueNeedsExpressionCalculation(char const*)::s_characterSetBuilt )
  {
    CharacterSetBuild(
      &CDOTA_ActionRunner::ValueNeedsExpressionCalculation(char const*)::s_expressionNecessitatingChars,
      "()+-*/");
    CDOTA_ActionRunner::ValueNeedsExpressionCalculation(char const*)::s_characterSetBuilt = 1;
  }
  v3 = *pszValue;
  if ( v3 != 0 )
  {
    if ( CDOTA_ActionRunner::ValueNeedsExpressionCalculation(char const*)::s_expressionNecessitatingChars.set[v3] != 0 )
    {
LABEL_9:
      LOBYTE(v4) = 1;
    }
    else
    {
      while ( 1 )
      {
        v4 = *++pszValue;
        if ( v4 == 0 )
          break;
        if ( CDOTA_ActionRunner::ValueNeedsExpressionCalculation(char const*)::s_expressionNecessitatingChars.set[v4] != 0 )
          goto LABEL_9;
      }
    }
  }
  else
  {
    LOBYTE(v4) = 0;
  }
  return v4;
}


// CDOTA_ActionRunner::CalculateExpression  (line 77, @0x000000000243ae20, libserver.so)  // inlines: CExpressionCalculator, CUtlHashtable, CUtlMemory, Destruct<CUtlString>, Element, Purge, RemoveAll, operator float, operator[], ~CExpressionCalculator, ~CUtlHashtable, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase
// calls: CExpressionCalculator::SetExpression, CExpressionCalculator::SetVariable, CVariantBase<CVariantDefaultAllocator>::Free, CExpressionCalculator::Evaluate, DevMsg(char const*,...), CUtlString::FreeMemoryBlock, operator delete, operator delete [], CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int>::Purge, CUtlMemory<CUtlString, int>::Purge, __stack_chk_fail (14 total)
// callers: CDOTA_ActionRunner::DecodeIntValue, CDOTA_ActionRunner::DecodeFloatValue
// strings: "CalculateExpression failed with expression %s\n"
float __fastcall CDOTA_ActionRunner::CalculateExpression(
        CDOTA_ActionRunner *const this,
        const char *pszValue,
        float a3,
        float flDefault)
{
  char v6; // al
  const char *v7; // rbx
  char v8; // cl
  int v9; // r12d
  float v10; // xmm1_4
  int (**vptr_CDOTA_ActionRunner)(...); // rax
  float v12; // xmm1_4
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *m_pVarNames; // r14
  int m_int; // r13d
  int m_Size; // ebx
  __int64 i; // r12
  CUtlString *v17; // rdi
  bool v18; // zf
  ScriptVariant_t interpolatedValue; // [rsp+20h] [rbp-190h] BYREF
  CExpressionCalculator myEvaluator; // [rsp+30h] [rbp-180h] BYREF
  char szVariableBuffer[264]; // [rsp+70h] [rbp-140h] BYREF
  unsigned __int64 v25; // [rsp+178h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  myEvaluator.m_varValues.m_nMinSize = 32;
  myEvaluator.m_varValues.m_bSizeLocked = 0;
  myEvaluator.m_pVarNames = 0;
  memset(&myEvaluator.m_pTokens, 0, 28);
  myEvaluator.m_nTokenCount = 0;
  CExpressionCalculator::SetExpression(&myEvaluator, pszValue, 0);
  v6 = *pszValue;
  if ( *pszValue == 0 )
    goto LABEL_15;
  v7 = pszValue;
  v8 = 0;
  v9 = 0;
  do
  {
    while ( 1 )
    {
      if ( v8 != 0 )
      {
        if ( v9 <= 0xFE && (((v6 & 0xDF) - 65) <= 0x19u || v6 == 95 || (v6 - 48) <= 9u || v6 == 46) )
        {
          szVariableBuffer[v9++] = v6;
        }
        else
        {
          szVariableBuffer[v9] = 0;
          (*(this->_vptr_CDOTA_ActionRunner + 3))(&interpolatedValue, this, &szVariableBuffer[1]);
          CExpressionCalculator::SetVariable(&myEvaluator, szVariableBuffer, v10);
          CVariantBase<CVariantDefaultAllocator>::Free(&interpolatedValue);
          v8 = 0;
        }
        goto LABEL_9;
      }
      if ( v6 == 37 )
        break;
LABEL_9:
      v6 = *++v7;
      if ( *v7 == 0 )
        goto LABEL_13;
    }
    ++v7;
    szVariableBuffer[0] = 37;
    v8 = 1;
    v6 = *v7;
    v9 = 1;
  }
  while ( *v7 != 0 );
LABEL_13:
  if ( v8 != 0 )
  {
    vptr_CDOTA_ActionRunner = this->_vptr_CDOTA_ActionRunner;
    szVariableBuffer[v9] = 0;
    vptr_CDOTA_ActionRunner[3](&interpolatedValue, this, &szVariableBuffer[1]);
    CExpressionCalculator::SetVariable(&myEvaluator, szVariableBuffer, v12);
    CVariantBase<CVariantDefaultAllocator>::Free(&interpolatedValue);
  }
LABEL_15:
  interpolatedValue.m_float = a3;
  if ( !CExpressionCalculator::Evaluate(&myEvaluator, &interpolatedValue.0) )
    DevMsg("CalculateExpression failed with expression %s\n", pszValue);
  m_pVarNames = myEvaluator.m_pVarNames;
  m_int = interpolatedValue.m_int;
  if ( myEvaluator.m_pVarNames != 0 )
  {
    m_Size = myEvaluator.m_pVarNames->m_Size;
    for ( i = 8LL * myEvaluator.m_pVarNames->m_Size - 8; --m_Size >= 0; i -= 8 )
    {
      v17 = (m_pVarNames->m_Memory.m_pMemory + i);
      if ( v17->m_pString != 0 )
        CUtlString::FreeMemoryBlock(v17);
    }
    v18 = (m_pVarNames->m_Memory.m_nGrowSize & 0xC0000000) == 0;
    m_pVarNames->m_Size = 0;
    if ( v18 )
    {
      CUtlMemory<CUtlString,int>::Purge(&m_pVarNames->m_Memory);
      if ( (m_pVarNames->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CUtlString,int>::Purge(&m_pVarNames->m_Memory);
    }
    operator delete(m_pVarNames);
  }
  if ( myEvaluator.m_pTokens != 0 )
    operator delete[](myEvaluator.m_pTokens);
  CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::RemoveAll(&myEvaluator.m_varValues);
  CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>::Purge(&myEvaluator.m_varValues.m_table);
  return *&m_int;
}


// CDOTA_ActionRunner::DecodeIntValue  (line 146, @0x000000000243b220, libserver.so)  // inlines: CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, Purge, PurgeAndDeleteElements, RemoveAll, atoi, operator int, ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase
// calls: CDOTA_ActionRunner::ValueNeedsExpressionCalculation, strtol, CVariantBase<CVariantDefaultAllocator>::Free, V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), CUtlMemory<char*, int>::Purge, CDOTA_ActionRunner::CalculateExpression, RandomInt, CVariantBase<CVariantDefaultAllocator>::AssignTo, CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >::PurgeAndDeleteElements, CUtlVectorBase<char*, CUtlMemory<char*, int> >::~CUtlVectorBase, _Unwind_Resume
int __fastcall CDOTA_ActionRunner::DecodeIntValue(CDOTA_ActionRunner *const this, const char *pszValue, int nDefault)
{
  float v6; // xmm1_4
  int m_Size; // ebx
  int v9; // eax
  __int64 v10; // r14
  int v11; // r12d
  char *v12; // rsi
  unsigned int v13; // ebx
  unsigned int v14; // eax
  float flResult; // [rsp+Ch] [rbp-54h] BYREF
  CUtlStringList args; // [rsp+10h] [rbp-50h] BYREF

  if ( pszValue == 0 )
    return nDefault;
  if ( CDOTA_ActionRunner::ValueNeedsExpressionCalculation(this, pszValue) )
    return CDOTA_ActionRunner::CalculateExpression(this, pszValue, nDefault, v6);
  if ( *pszValue == 37 )
  {
    (*(this->_vptr_CDOTA_ActionRunner + 3))(&args, this, pszValue + 1);
    if ( LOWORD(args.m_Memory.m_pMemory) == 1 || LOWORD(args.m_Memory.m_pMemory) == 34 )
    {
      flResult = 0.0;
      CVariantBase<CVariantDefaultAllocator>::AssignTo(&args, &flResult);
      m_Size = flResult;
    }
    else
    {
      m_Size = nDefault;
      if ( LOWORD(args.m_Memory.m_pMemory) == 5 )
        m_Size = args.m_Size;
    }
    CVariantBase<CVariantDefaultAllocator>::Free(&args);
  }
  else if ( *pszValue == 63 )
  {
    args.m_Size = 0;
    args.m_Memory.m_pMemory = 0;
    args.m_Memory.m_nAllocationCount = 0;
    args.m_Memory.m_nGrowSize = 0;
    V_SplitString(pszValue + 1, " ", &args);
    v9 = args.m_Size;
    m_Size = nDefault;
    if ( args.m_Size == 2 )
    {
      v13 = (*(this->_vptr_CDOTA_ActionRunner + 1))(this, *args.m_Memory.m_pMemory, 0);
      v14 = (*(this->_vptr_CDOTA_ActionRunner + 1))(this, *(args.m_Memory.m_pMemory + 1), 0);
      m_Size = RandomInt(v13, v14);
      v9 = args.m_Size;
    }
    if ( v9 > 0 )
    {
      v10 = 0;
      v11 = 0;
      do
      {
        ++v11;
        v12 = args.m_Memory.m_pMemory[v10++];
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v12);
      }
      while ( v11 < args.m_Size );
    }
    args.m_Size = 0;
    if ( (args.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<char *,int>::Purge(&args.m_Memory);
      if ( (args.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<char *,int>::Purge(&args.m_Memory);
    }
  }
  else
  {
    return strtol(pszValue, 0, 10);
  }
  return m_Size;
}


// CDOTA_ActionRunner::DecodeFloatValue  (line 199, @0x000000000243b440, libserver.so)  // inlines: CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, Purge, RemoveAll, atof, ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase
// calls: CDOTA_ActionRunner::ValueNeedsExpressionCalculation, strtod, V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >::PurgeAndDeleteElements, CUtlMemory<char*, int>::Purge, CDOTA_ActionRunner::CalculateExpression, CVariantBase<CVariantDefaultAllocator>::Free, RandomFloat, CVariantBase<CVariantDefaultAllocator>::AssignTo, CUtlVectorBase<char*, CUtlMemory<char*, int> >::~CUtlVectorBase, _Unwind_Resume
float __fastcall CDOTA_ActionRunner::DecodeFloatValue(
        CDOTA_ActionRunner *const this,
        const char *pszValue,
        __m128i a3,
        float fDefault)
{
  float v4; // r14d
  float v7; // xmm1_4
  float v8; // xmm0_4
  float m_Size; // xmm0_4
  __m128i v10; // xmm0
  float v11; // ebx
  float v12; // xmm0_4
  __int32 v14; // [rsp+0h] [rbp-54h]
  __int32 v15; // [rsp+0h] [rbp-54h]
  float flResult; // [rsp+10h] [rbp-44h] BYREF
  CUtlStringList args; // [rsp+14h] [rbp-40h] BYREF

  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(a3));
  if ( pszValue != 0 )
  {
    if ( CDOTA_ActionRunner::ValueNeedsExpressionCalculation(this, pszValue) )
    {
      *a3.m128i_i32 = CDOTA_ActionRunner::CalculateExpression(this, pszValue, v4, v7);
    }
    else if ( *pszValue == 37 )
    {
      (*(this->_vptr_CDOTA_ActionRunner + 3))(&args, this, pszValue + 1);
      if ( LOWORD(args.m_Memory.m_pMemory) == 1 || LOWORD(args.m_Memory.m_pMemory) == 34 )
      {
        flResult = 0.0;
        CVariantBase<CVariantDefaultAllocator>::AssignTo(&args, &flResult);
        m_Size = flResult;
      }
      else
      {
        m_Size = v4;
        if ( LOWORD(args.m_Memory.m_pMemory) == 5 )
          m_Size = args.m_Size;
      }
      v15 = LODWORD(m_Size);
      CVariantBase<CVariantDefaultAllocator>::Free(&args);
      a3.m128i_i32[0] = v15;
    }
    else if ( *pszValue == 63 )
    {
      args.m_Size = 0;
      args.m_Memory.m_pMemory = 0;
      args.m_Memory.m_nAllocationCount = 0;
      args.m_Memory.m_nGrowSize = 0;
      V_SplitString(pszValue + 1, " ", &args);
      v8 = v4;
      if ( args.m_Size == 2 )
      {
        *v10.m128i_i64 = (*(this->_vptr_CDOTA_ActionRunner + 2))(this, *args.m_Memory.m_pMemory, 0.0);
        v11 = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
        v12 = (*(this->_vptr_CDOTA_ActionRunner + 2))(this, *(args.m_Memory.m_pMemory + 1), 0.0);
        v8 = RandomFloat(v11, v12);
      }
      v14 = LODWORD(v8);
      CUtlStringList_Base<CUtlVector<char *,CUtlMemory<char *,int>>>::PurgeAndDeleteElements(&args);
      args.m_Size = 0;
      a3.m128i_i32[0] = v14;
      if ( (args.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<char *,int>::Purge(&args.m_Memory);
        a3.m128i_i32[0] = v14;
        if ( (args.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<char *,int>::Purge(&args.m_Memory);
          a3.m128i_i32[0] = v14;
        }
      }
    }
    else
    {
      *a3.m128i_i32 = strtod(pszValue, 0);
    }
  }
  return *a3.m128i_i32;
}


// CDOTA_ActionRunner::LookupValueSymbol  (line 251, @0x000000000241f640, libserver.so)  // inlines: CVariantBase, FStrEq, _V_strcmp
// callers: CDOTA_Ability_DataDriven::LookupValueSymbol, CDOTA_Modifier_DataDriven::LookupValueSymbol
__int64 __fastcall CDOTA_ActionRunner::LookupValueSymbol(
        __int64 a1,
        CDOTA_ActionRunner *const this,
        const char *pszValue)
{
  __int64 result; // rax
  const CModifierParams *m_pEventContext; // r8
  float fDamage; // xmm0_4

  result = a1;
  if ( pszValue != 0
    && *pszValue != 0
    && (m_pEventContext = this->m_pEventContext) != 0
    && (pszValue == "attack_damage" || strcmp(pszValue, "attack_damage") == 0) )
  {
    fDamage = m_pEventContext->fDamage;
    *(a1 + 8) = 1;
    *(a1 + 10) = 0;
    *a1 = fDamage;
  }
  else
  {
    *a1 = 0;
    *(a1 + 8) = 0;
    *(a1 + 10) = 0;
  }
  return result;
}


// CDOTA_ActionRunner::LookupNPCValueSymbol  (line 268, @0x000000000241f6b0, libserver.so)  // inlines: CVariantBase, FStrEq, GetMana, GetMaxMana, V_strncpy<long int>, _V_strcmp, strchr
// calls: strchr, _V_strncpy, DevMsg(char const*,...), CBaseEntity::GetHealth, __stack_chk_fail
// strings: "MaxHP", "%s is not a recognized target property in %s.\n", "%s is not a recognized target name in %s.\n"
__int64 __fastcall CDOTA_ActionRunner::LookupNPCValueSymbol(
        __int64 a1,
        CDOTA_ActionRunner *const this,
        const char *pszValue)
{
  char *v6; // rbx
  const CBaseEntity *v7; // rax
  const char *v8; // rdi
  char *v9; // rbx
  bool v10; // zf
  __int64 v11; // rcx
  char *v12; // rsi
  const char *v13; // rdi
  bool v14; // zf
  __int64 v15; // rcx
  char *v16; // rdi
  bool v17; // zf
  __int64 v18; // rcx
  char *v19; // rsi
  int m_Head; // xmm0_4
  int m_nAllocationCount; // xmm0_4
  __int64 v23; // rax
  const char *v24; // rdi
  char *v25; // rsi
  __int64 v26; // rdx
  int Health; // eax
  int v28; // eax
  __int64 v29; // rax
  char sBuffer[264]; // [rsp+0h] [rbp-140h] BYREF
  unsigned __int64 v31; // [rsp+108h] [rbp-38h]

  v31 = __readfsqword(0x28u);
  v6 = strchr(pszValue, 46);
  _V_strncpy(sBuffer, pszValue, v6 - pszValue + 1);
  v7 = (*(this->_vptr_CDOTA_ActionRunner + 6))(this, sBuffer);
  if ( v7 == 0 )
  {
    v29 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
    v24 = "%s is not a recognized target name in %s.\n";
    v25 = sBuffer;
    v26 = v29;
    goto LABEL_23;
  }
  v8 = "HP";
  v9 = v6 + 1;
  v10 = v9 == "HP";
  if ( v9 != "HP" )
  {
    v11 = 3;
    v12 = v9;
    do
    {
      if ( v11 == 0 )
        break;
      v10 = *v12++ == *v8++;
      --v11;
    }
    while ( v10 );
    if ( !v10 )
    {
      v13 = "MaxHP";
      v14 = v9 == "MaxHP";
      if ( v9 != "MaxHP" )
      {
        v15 = 6;
        v12 = v9;
        do
        {
          if ( v15 == 0 )
            break;
          v14 = *v12++ == *v13++;
          --v15;
        }
        while ( v14 );
        if ( !v14 )
        {
          if ( v9 == "Mana" || strcmp(v9, "Mana") == 0 )
          {
            m_nAllocationCount = v7[2].m_DamageModifiers.m_Memory.m_nAllocationCount;
            *(a1 + 8) = 1;
            *(a1 + 10) = 0;
            *a1 = m_nAllocationCount;
            return a1;
          }
          v16 = "MaxMana";
          v17 = v9 == "MaxMana";
          if ( v9 != "MaxMana" )
          {
            v18 = 8;
            v19 = v9;
            do
            {
              if ( v18 == 0 )
                break;
              v17 = *v19++ == *v16++;
              --v18;
            }
            while ( v17 );
            if ( !v17 )
            {
              v23 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this, v19, v7);
              v24 = "%s is not a recognized target property in %s.\n";
              v25 = v9;
              v26 = v23;
LABEL_23:
              DevMsg(v24, v25, v26);
              *(a1 + 10) = 0;
              *(a1 + 8) = 0;
              *a1 = 0;
              return a1;
            }
          }
          m_Head = v7[2].m_DamageModifiers.m_Head;
          *(a1 + 8) = 1;
          *(a1 + 10) = 0;
          *a1 = m_Head;
          return a1;
        }
      }
      v28 = (*(v7->_vptr_IHandleEntity + 156))(v7, v12);
      *(a1 + 8) = 5;
      *(a1 + 10) = 0;
      *a1 = v28;
      return a1;
    }
  }
  Health = CBaseEntity::GetHealth(v7);
  *(a1 + 8) = 5;
  *(a1 + 10) = 0;
  *a1 = Health;
  return a1;
}


// CDOTA_ActionRunner::FindNamedTarget  (line 310, @0x0000000002422e50, libserver.so)  // inlines: AttackerNPC, FStrEq, Get, GetActionCaster, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, UnitNPC, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*
// callers: CDOTA_Ability_DataDriven::FindNamedTarget, CDOTA_Item_DataDriven::FindNamedTarget
// strings: "CASTER", "ATTACKER", "UNIT"
// globals: CEntityHandle::gm_pEntityList
CDOTA_BaseNPC *__fastcall CDOTA_ActionRunner::FindNamedTarget(
        CDOTA_ActionRunner *const this,
        const char *pszTargetName)
{
  const CModifierParams *v2; // rax
  uint32 m_Index; // ecx
  CConcreteEntityList *v4; // rsi
  unsigned __int64 m_Index_low; // rdx
  const CModifierParams *m_pEventContext; // rdx
  CEntityIdentity *v7; // rax
  CEntityIdentity *v8; // rax
  CDOTA_BaseNPC *result; // rax
  const CModifierParams *v10; // rdx

  if ( pszTargetName == "CASTER" || strcmp(pszTargetName, "CASTER") == 0 )
    return this->m_pCaster;
  if ( pszTargetName == "TARGET" || strcmp(pszTargetName, "TARGET") == 0 )
  {
    m_pEventContext = this->m_pEventContext;
    if ( m_pEventContext != 0 )
    {
      m_Index = m_pEventContext->htarget.m_Index;
      v4 = CEntityHandle::gm_pEntityList;
      if ( m_Index + 2 > 1 )
      {
        m_Index_low = LOWORD(m_pEventContext->htarget.m_Index);
        goto LABEL_15;
      }
      return 0;
    }
  }
  if ( pszTargetName == "ATTACKER" || strcmp(pszTargetName, "ATTACKER") == 0 )
  {
    v10 = this->m_pEventContext;
    if ( v10 != 0 )
    {
      m_Index = v10->hattacker.m_Index;
      v4 = CEntityHandle::gm_pEntityList;
      if ( m_Index + 2 > 1 )
      {
        m_Index_low = LOWORD(v10->hattacker.m_Index);
        goto LABEL_15;
      }
      return 0;
    }
  }
  if ( pszTargetName != "UNIT" && strcmp(pszTargetName, "UNIT") != 0 )
    return 0;
  v2 = this->m_pEventContext;
  if ( v2 == 0 )
    return 0;
  m_Index = v2->hunit.m_Index;
  v4 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 <= 1 )
    return 0;
  m_Index_low = LOWORD(v2->hunit.m_Index);
LABEL_15:
  v7 = v4->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
  if ( v7 == 0 )
    return 0;
  v8 = &v7[m_Index_low & 0x1FF];
  if ( v8 == 0 )
    return 0;
  if ( m_Index != v8->m_EHandle.m_Index )
    return 0;
  result = v8->m_pInstance;
  if ( result == 0 || !result->m_bIsDOTANPC )
    return 0;
  return result;
}


// CDOTA_ActionRunner::CreateParticle  (line 324, @0x000000000241f8c0, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::CreateParticle
// callers: CDOTA_Modifier_DataDriven::CreateParticle
int __fastcall CDOTA_ActionRunner::CreateParticle(
        CDOTA_ActionRunner *const this,
        const char *pParticleName,
        int iAttachType,
        CBaseEntity *pEntity)
{
  CDOTA_ParticleManager *ParticleManager; // rax

  ParticleManager = GetParticleManager();
  return CDOTA_ParticleManager::CreateParticle(ParticleManager, pParticleName, iAttachType, pEntity, 0, 0);
}


// CDOTA_ActionRunner::GetThinkerLineEndpoints  (line 330, @0x0000000002425660, libserver.so)  // inlines: Init, Quaternion, RadianEuler, VectorAdd, VectorMultiply, VectorRotate, VectorSubtract, operator*, operator+, operator-, operator=
// calls: VectorVectors, AngleQuaternion, VectorRotate
// callers: CDOTA_ActionRunner::PerformActionHelper_ProcessEffectControlPoints, CDOTA_ActionRunner::SelectActionTargets
void __fastcall CDOTA_ActionRunner::GetThinkerLineEndpoints(
        CDOTA_ActionRunner *const this,
        Vector vCenter,
        Vector vForward,
        int nLength,
        int nAngleDegrees,
        Vector *pOutLineA,
        Vector *pOutLineB)
{
  vec_t x; // xmm5_4
  vec_t y; // xmm3_4
  float v12; // xmm0_4
  float v13; // xmm4_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  vec_t z; // [rsp+Ch] [rbp-84h]
  float v17; // [rsp+10h] [rbp-80h]
  vec_t v18; // [rsp+10h] [rbp-80h]
  float v19; // [rsp+14h] [rbp-7Ch]
  vec_t v20; // [rsp+14h] [rbp-7Ch]
  float v21; // [rsp+18h] [rbp-78h]
  Vector vForwarda; // [rsp+20h] [rbp-70h] BYREF
  __int64 v23; // [rsp+30h] [rbp-60h]
  Vector right; // [rsp+40h] [rbp-50h] BYREF
  Quaternion rotationQuat; // [rsp+50h] [rbp-40h] BYREF

  v23 = *&vCenter.x;
  vForwarda = vForward;
  x = vCenter.x;
  y = vCenter.y;
  if ( nAngleDegrees != 0 )
  {
    z = vCenter.z;
    v18 = vCenter.x;
    v20 = vCenter.y;
    right.x = 0.0;
    right.y = 0.0;
    right.z = nAngleDegrees * 0.017453292;
    AngleQuaternion(&right, &rotationQuat);
    VectorRotate(&vForwarda, &rotationQuat, &right);
    vCenter.z = z;
    vForwarda = right;
    x = v18;
    y = v20;
  }
  v17 = vCenter.z;
  v19 = x;
  v21 = y;
  VectorVectors(&vForwarda, &right, &rotationQuat);
  v12 = nLength * 0.5;
  v13 = right.x * v12;
  v14 = right.y * v12;
  v15 = v12 * right.z;
  pOutLineA->x = v19 + v13;
  pOutLineA->y = v21 + v14;
  pOutLineA->z = v15 + v17;
  pOutLineB->x = v19 - v13;
  pOutLineB->y = v21 - v14;
  pOutLineB->z = v17 - v15;
}


// CDOTA_ActionRunner::LookupModifierCreateParameters  (line 346, @0x000000000241f900, libserver.so)
// calls: ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, KeyValues::SetString
// callers: CDOTA_Ability_DataDriven::LookupModifierCreateParameters, CDOTA_Item_DataDriven::LookupModifierCreateParameters, CDOTA_Modifier_DataDriven::LookupModifierCreateParameters
bool __fastcall CDOTA_ActionRunner::LookupModifierCreateParameters(
        CDOTA_ActionRunner *const this,
        KeyValues *pKV,
        const char *pszModifierName)
{
  CModifieractoryDictionary *v5; // rax

  if ( ModifierFactoryDictionary() != 0 )
  {
    v5 = ModifierFactoryDictionary();
    if ( CModifieractoryDictionary::FindFactory(v5, pszModifierName) != 0 )
      KeyValues::SetString(pKV, "BaseClass", pszModifierName);
  }
  return 1;
}


// CDOTA_ActionRunner::SelectActionTargets  (line 360, @0x000000000243cc20, libserver.so)  // inlines: AddToTail, AsHScript, CEntityHandle, CHandle, CVariantBase, CopyConstruct<CHandle<CBaseEntity> >, Element, EntityToHScript, FStrEq, Free, Get, GetActionCaster, GetActionTeamNumber, GetBool, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetPaddedCollisionRadius, GetPublicScriptScope, GetSerialNumber, GetTeamNumber, GrowMemory, HScriptToEntity<CBaseEntity>, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, ToEnt, ToHScript, _V_strcmp, entindex, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CVariantBase
// calls: KeyValues::GetString, CBaseEntity::GetAbsOrigin, KeyValues::FindKey, FindUnitsInRadius, GetUnitTargetTeamsFromString, UnitFilter, CEntityHandle::operator CEntityInstance*, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CVariantBase<CVariantDefaultAllocator>::Free, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove, GetUnitTargetTypesFromString (27 total)
// callers: CDOTA_ActionRunner::SelectActionPoint, CDOTA_ActionRunner::PerformAction_ApplyModifier, CDOTA_ActionRunner::PerformAction_AttachEffect, CDOTA_ActionRunner::PerformAction_RemoveModifier, CDOTA_ActionRunner::PerformAction_Blink, CDOTA_ActionRunner::PerformAction_CreateThinker, CDOTA_ActionRunner::PerformAction_CreateThinkerWall, CDOTA_ActionRunner::PerformAction_Damage, CDOTA_ActionRunner::PerformAction_Heal, CDOTA_ActionRunner::PerformAction_Lifesteal, CDOTA_ActionRunner::PerformAction_Knockback, CDOTA_ActionRunner::PerformAction_Stun (30 total)
// strings: "GLOBAL", "ExcludeTypes", "ExcludeFlags", "MaxTargets", "ScriptSelectEntities", "caster_entindex" (11 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_ActionRunner::SelectActionTargets(
        CDOTA_ActionRunner *const this,
        CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *pTargets,
        KeyValues *pTargetKV)
{
  const char *String; // r14
  const CBaseEntity *v6; // rax
  CDOTA_BaseNPC *v7; // r12
  const char *v8; // r14
  KeyValues *Key; // rax
  KeyValues *v10; // r15
  CDOTA_BaseNPC *m_pCaster; // rax
  int m_Value; // edi
  const char *v13; // rax
  int UnitTargetTeamsFromString; // r15d
  int v15; // r12d
  __int64 v16; // r14
  CDOTA_BaseNPC *v17; // rdx
  CDOTA_BaseNPC *v18; // rdi
  int v19; // r8d
  CEntityInstance *v20; // rax
  IScriptVM *v21; // rbx
  int v22; // esi
  const char *v23; // rax
  int UnitTargetTypesFromString; // r15d
  int v25; // r12d
  __int64 v26; // r14
  CDOTA_BaseNPC *v27; // rdx
  CDOTA_BaseNPC *v28; // rdi
  int v29; // r8d
  CEntityInstance *v30; // rax
  int v31; // esi
  const char *v32; // rax
  int v33; // r15d
  int v34; // r12d
  __int64 v35; // r14
  CDOTA_BaseNPC *v36; // rdx
  CDOTA_BaseNPC *v37; // rdi
  int v38; // r8d
  CEntityInstance *v39; // rax
  int v40; // esi
  const char *v41; // rax
  int UnitTargetFlagsFromString; // r14d
  int v43; // r15d
  __int64 v44; // r12
  CHandle<CBaseEntity> *v45; // rdx
  uint32 m_Index; // eax
  __int16 v47; // cx
  CEntityIdentity *v48; // rdx
  CEntityIdentity *v49; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTA_BaseNPC *v51; // rax
  int v52; // r8d
  const char *v53; // rax
  int v54; // r15d
  int v55; // r12d
  __int64 v56; // r14
  CDOTA_BaseNPC *v57; // rdx
  CDOTA_BaseNPC *v58; // rdi
  int v59; // r8d
  CEntityInstance *v60; // rax
  int v61; // esi
  __int64 (__fastcall *v62)(CDOTA_ActionRunner *const, const char *, __int64); // r12
  const char *v63; // rax
  int v64; // r12d
  int v65; // eax
  int i; // eax
  int v67; // r14d
  CEntityInstance *v68; // rax
  KeyValues *v69; // rax
  KeyValues *v70; // r12
  const char *v71; // r15
  const char *v72; // r14
  __int64 v73; // rax
  __int64 v74; // rax
  CDOTA_BaseNPC *v75; // rdi
  CEntityIndex v76; // eax
  void (__fastcall *v77)(IScriptVM *, uint64, const char *, CVariantBase<CVariantDefaultAllocator> *); // r8
  CDOTA_BaseNPC *v78; // rdi
  void (__fastcall *v79)(IScriptVM *, uint64, char *, CVariantBase<CVariantDefaultAllocator> *); // r12
  HSCRIPT m_hScope; // rax
  __int64 j; // rbx
  __int16 v82; // cx
  CEntityIdentity *v83; // rax
  __int64 v84; // rcx
  bool v85; // zf
  CEntityIdentity *v86; // rcx
  uint64 v87; // rax
  void (__fastcall *v88)(IScriptVM *, uint64, _QWORD, CVariantBase<CVariantDefaultAllocator> *); // r14
  CHandle<CBaseEntity> *v89; // rax
  uint32 v90; // edx
  const char *v91; // rax
  int v92; // esi
  int v93; // r12d
  __int64 v94; // r14
  CEntityInstance *v95; // rax
  int v96; // eax
  CDOTA_BaseNPC *v97; // rdx
  int v98; // edi
  int Int; // r14d
  int v100; // eax
  CDOTA_BaseNPC *v101; // rdx
  int v102; // edi
  int v103; // eax
  int v104; // r12d
  CEntityInstance *v105; // rbx
  const Vector *AbsOrigin; // rax
  CEntityInstance *v107; // rax
  const char *v108; // rax
  int v109; // esi
  const char *v110; // rax
  int v111; // r14d
  unsigned int k; // eax
  uint64 m_uint64; // r12
  ScriptClassDesc_t *Script; // rdx
  __int64 v115; // rax
  __int64 v116; // rax
  __int16 v117; // cx
  __int64 v118; // r12
  int v119; // eax
  CHandle<CBaseEntity> *v120; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v122; // cx
  __int64 m_Size; // r12
  int v124; // eax
  CHandle<CBaseEntity> *v125; // rax
  const char *v126; // rax
  CEntityInstance *v127; // r15
  HSCRIPT hFunction; // [rsp+38h] [rbp-108h]
  __int64 (__fastcall *v129)(IScriptVM *, uint64, ScriptClassDesc_t *); // [rsp+40h] [rbp-100h]
  int v130; // [rsp+4Ch] [rbp-F4h]
  CDOTA_ActionRunner *nIter; // [rsp+50h] [rbp-F0h]
  unsigned int nItera; // [rsp+50h] [rbp-F0h]
  int nThickness; // [rsp+58h] [rbp-E8h]
  float nThicknessa; // [rsp+58h] [rbp-E8h]
  int nAngleDegrees; // [rsp+60h] [rbp-E0h]
  IScriptVM *pVMa; // [rsp+68h] [rbp-D8h]
  int v138; // [rsp+70h] [rbp-D0h]
  Vector vTargetPos; // [rsp+80h] [rbp-C0h] BYREF
  Vector vForward; // [rsp+90h] [rbp-B0h]
  ScriptVariant_t kvTable; // [rsp+A0h] [rbp-A0h] BYREF
  ScriptVariant_t hArrayParam; // [rsp+B0h] [rbp-90h] BYREF
  ScriptVariant_t scriptResult; // [rsp+C0h] [rbp-80h] BYREF
  ScriptVariant_t vKey; // [rsp+D0h] [rbp-70h] BYREF
  ScriptVariant_t vValue; // [rsp+E0h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> args[2]; // [rsp+F0h] [rbp-50h] BYREF
  Vector v147; // 0:kr00_12.12

  if ( pTargetKV != 0 )
  {
    String = KeyValues::GetString(pTargetKV, 0, 0, 0, 0);
    if ( String == 0 )
    {
      String = KeyValues::GetString(pTargetKV, "Center", 0, 0, 0);
      if ( String == 0 )
      {
        v110 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
        DevMsg("No target specified in %s.\n", v110);
        return;
      }
    }
    v6 = (*(this->_vptr_CDOTA_ActionRunner + 6))(this, String);
    v7 = v6;
    if ( v6 != 0 )
    {
      vTargetPos = *CBaseEntity::GetAbsOrigin(v6);
    }
    else
    {
      if ( String != "POINT"
        && strcmp("POINT", String) != 0
        && String != "PROJECTILE"
        && strcmp("PROJECTILE", String) != 0 )
      {
        v91 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
        DevMsg("%s is not a recognized target name in %s.\n", String, v91);
        return;
      }
      vTargetPos = this->m_pEventContext->vNewLoc;
    }
    v8 = KeyValues::GetString(pTargetKV, "Radius", 0, 0, 0);
    Key = KeyValues::FindKey(pTargetKV, "Line", 0);
    v10 = Key;
    if ( v8 != 0 )
    {
      if ( v8 == "GLOBAL" || strcmp(v8, "GLOBAL") == 0 )
      {
        m_pCaster = this->m_pCaster;
        if ( m_pCaster != 0 )
          m_Value = m_pCaster->m_iTeamNum.m_Value;
        else
          m_Value = 0;
        FindUnitsInRadius(m_Value, &vTargetPos, v7, -1.0, pTargets, 3, -1, 262232, 0, 0);
      }
      else
      {
        v96 = (*(this->_vptr_CDOTA_ActionRunner + 1))(this, v8, 0xFFFFFFFFLL);
        if ( v96 < 0 )
        {
          v126 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
          DevMsg("%s is not a valid search radius in %s.\n", v8, v126);
          return;
        }
        v97 = this->m_pCaster;
        if ( v97 != 0 )
          v98 = v97->m_iTeamNum.m_Value;
        else
          v98 = 0;
        FindUnitsInRadius(v98, &vTargetPos, v7, v96, pTargets, 3, -1, 262232, 0, 0);
      }
    }
    else if ( Key != 0 )
    {
      Int = KeyValues::GetInt(Key, "Length", 0);
      nThickness = KeyValues::GetInt(v10, "Thickness", 0);
      v100 = KeyValues::GetInt(v10, "Angle", 0);
      if ( nThickness <= 0 || Int <= 0 )
      {
        v108 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
        DevMsg("Target Line requires Length and Thickness both greater than 0 in %s.\n", v108);
        return;
      }
      v101 = this->m_pCaster;
      if ( v101 != 0 )
        v102 = v101->m_iTeamNum.m_Value;
      else
        v102 = 0;
      nAngleDegrees = v100;
      FindUnitsInRadius(v102, &vTargetPos, v7, Int, pTargets, 3, -1, 262232, 0, 0);
      if ( pTargets->m_Size > 0 )
      {
        v103 = nAngleDegrees;
        if ( v7 != 0 )
        {
          v147 = CBaseEntity::Forward(v7);
          v103 = nAngleDegrees;
          vForward = v147;
        }
        else
        {
          vForward.x = 1.0;
          vForward.y = 0.0;
          vForward.z = 0.0;
        }
        CDOTA_ActionRunner::GetThinkerLineEndpoints(this, vTargetPos, vForward, Int, v103, &vValue, args);
        if ( pTargets->m_Size > 0 )
        {
          v104 = 0;
          nIter = this;
          nThicknessa = nThickness;
          do
          {
            v107 = CEntityHandle::operator CEntityInstance *(&pTargets->m_Memory.m_pMemory[v104]);
            if ( v107 != 0 && BYTE3(v107[7]._vptr_IHandleEntity) != 0 )
              v105 = v107;
            else
              v105 = 0;
            AbsOrigin = CBaseEntity::GetAbsOrigin(v105);
            if ( CalcDistanceToLineSegment2D(AbsOrigin, &vValue, args, 0) > ((*(&v105[48]._vptr_IHandleEntity + 1)
                                                                            + *&v105[48].m_pEntity)
                                                                           + nThicknessa) )
            {
              v109 = v104--;
              CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(pTargets, v109);
            }
            ++v104;
          }
          while ( pTargets->m_Size > v104 );
          this = nIter;
        }
      }
    }
    else if ( v7 != 0 )
    {
      args[0].m_int = -1;
      m_pEntity = v7->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v122 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v122 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        args[0].m_int = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v122 & 0x7FFF;
      }
      m_Size = pTargets->m_Size;
      v124 = pTargets->m_Size;
      if ( m_Size == pTargets->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&pTargets->m_Memory, 1);
        v124 = pTargets->m_Size;
      }
      pTargets->m_Size = v124 + 1;
      v125 = &pTargets->m_Memory.m_pMemory[m_Size];
      if ( v125 != 0 )
        v125->m_Index = args[0].m_int;
    }
    v13 = KeyValues::GetString(pTargetKV, "Teams", 0, 0, 0);
    UnitTargetTeamsFromString = GetUnitTargetTeamsFromString(v13);
    if ( UnitTargetTeamsFromString != 0 )
    {
      v15 = pTargets->m_Size - 1;
      if ( v15 >= 0 )
      {
        v16 = v15;
        while ( 1 )
        {
          v20 = CEntityHandle::operator CEntityInstance *(&pTargets->m_Memory.m_pMemory[v16]);
          if ( v20 != 0 && BYTE3(v20[7]._vptr_IHandleEntity) != 0 )
          {
            v17 = this->m_pCaster;
            v18 = v20;
            if ( v17 == 0 )
              goto LABEL_21;
          }
          else
          {
            v17 = this->m_pCaster;
            v18 = 0;
            if ( v17 == 0 )
            {
LABEL_21:
              v19 = 0;
              goto LABEL_16;
            }
          }
          v19 = v17->m_iTeamNum.m_Value;
LABEL_16:
          if ( UnitFilter(v18, UnitTargetTeamsFromString, -1, 262232, v19) != 0 )
          {
            v22 = v15--;
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(pTargets, v22);
            --v16;
            if ( v15 == -1 )
              break;
          }
          else
          {
            --v15;
            --v16;
            if ( v15 == -1 )
              break;
          }
        }
      }
    }
    v23 = KeyValues::GetString(pTargetKV, "Types", 0, 0, 0);
    UnitTargetTypesFromString = GetUnitTargetTypesFromString(v23);
    if ( UnitTargetTypesFromString != 0 )
    {
      v25 = pTargets->m_Size - 1;
      if ( v25 >= 0 )
      {
        v26 = v25;
        while ( 1 )
        {
          v30 = CEntityHandle::operator CEntityInstance *(&pTargets->m_Memory.m_pMemory[v26]);
          if ( v30 != 0 && BYTE3(v30[7]._vptr_IHandleEntity) != 0 )
          {
            v27 = this->m_pCaster;
            v28 = v30;
            if ( v27 == 0 )
              goto LABEL_38;
          }
          else
          {
            v27 = this->m_pCaster;
            v28 = 0;
            if ( v27 == 0 )
            {
LABEL_38:
              v29 = 0;
              goto LABEL_33;
            }
          }
          v29 = v27->m_iTeamNum.m_Value;
LABEL_33:
          if ( UnitFilter(v28, 3, UnitTargetTypesFromString, 262232, v29) != 0 )
          {
            v31 = v25--;
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(pTargets, v31);
            --v26;
            if ( v25 == -1 )
              break;
          }
          else
          {
            --v25;
            --v26;
            if ( v25 == -1 )
              break;
          }
        }
      }
    }
    v32 = KeyValues::GetString(pTargetKV, "ExcludeTypes", 0, 0, 0);
    v33 = GetUnitTargetTypesFromString(v32);
    if ( v33 != 0 )
    {
      v34 = pTargets->m_Size - 1;
      if ( v34 >= 0 )
      {
        v35 = v34;
        while ( 1 )
        {
          v39 = CEntityHandle::operator CEntityInstance *(&pTargets->m_Memory.m_pMemory[v35]);
          if ( v39 != 0 && BYTE3(v39[7]._vptr_IHandleEntity) != 0 )
          {
            v36 = this->m_pCaster;
            v37 = v39;
            if ( v36 == 0 )
              goto LABEL_50;
          }
          else
          {
            v36 = this->m_pCaster;
            v37 = 0;
            if ( v36 == 0 )
            {
LABEL_50:
              v38 = 0;
              goto LABEL_45;
            }
          }
          v38 = v36->m_iTeamNum.m_Value;
LABEL_45:
          if ( UnitFilter(v37, 3, v33, 262232, v38) != 0 )
          {
            --v34;
            --v35;
            if ( v34 == -1 )
              break;
          }
          else
          {
            v40 = v34--;
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(pTargets, v40);
            --v35;
            if ( v34 == -1 )
              break;
          }
        }
      }
    }
    v41 = KeyValues::GetString(pTargetKV, "Flags", 0, 0, 0);
    UnitTargetFlagsFromString = GetUnitTargetFlagsFromString(v41);
    v43 = pTargets->m_Size - 1;
    v44 = v43;
    if ( v43 >= 0 )
    {
      do
      {
        v45 = &pTargets->m_Memory.m_pMemory[v44];
        m_Index = v45->m_Index;
        if ( v45->m_Index + 2 <= 1
          || (v47 = v45->m_Index,
              (v48 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v45->m_Index) >> 9) & 0x3F]) == 0)
          || (v49 = &v48[v47 & 0x1FF]) == 0
          || m_Index != v49->m_EHandle.m_Index
          || (m_pInstance = v49->m_pInstance, v49->m_pInstance == 0)
          || !m_pInstance->m_bIsDOTANPC )
        {
          m_pInstance = 0;
        }
        v51 = this->m_pCaster;
        if ( v51 != 0 )
          v52 = v51->m_iTeamNum.m_Value;
        else
          v52 = 0;
        if ( UnitFilter(m_pInstance, 3, -1, UnitTargetFlagsFromString, v52) != 0 )
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(pTargets, v43);
        --v43;
        --v44;
      }
      while ( v43 != -1 );
    }
    v53 = KeyValues::GetString(pTargetKV, "ExcludeFlags", 0, 0, 0);
    v54 = GetUnitTargetFlagsFromString(v53);
    if ( v54 != 0 )
    {
      v55 = pTargets->m_Size - 1;
      if ( v55 >= 0 )
      {
        v56 = v55;
        while ( 1 )
        {
          v60 = CEntityHandle::operator CEntityInstance *(&pTargets->m_Memory.m_pMemory[v56]);
          if ( v60 != 0 && BYTE3(v60[7]._vptr_IHandleEntity) != 0 )
          {
            v57 = this->m_pCaster;
            v58 = v60;
            if ( v57 == 0 )
              goto LABEL_73;
          }
          else
          {
            v57 = this->m_pCaster;
            v58 = 0;
            if ( v57 == 0 )
            {
LABEL_73:
              v59 = 0;
              goto LABEL_68;
            }
          }
          v59 = v57->m_iTeamNum.m_Value;
LABEL_68:
          if ( UnitFilter(v58, 3, -1, v54, v59) != 0 )
          {
            --v55;
            --v56;
            if ( v55 == -1 )
              break;
          }
          else
          {
            v61 = v55--;
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(pTargets, v61);
            --v56;
            if ( v55 == -1 )
              break;
          }
        }
      }
    }
    v62 = *(this->_vptr_CDOTA_ActionRunner + 1);
    v63 = KeyValues::GetString(pTargetKV, "MaxTargets", 0, 0, 0);
    v64 = v62(this, v63, 0xFFFFFFFFLL);
    v65 = KeyValues::GetInt(pTargetKV, "Random", 0);
    if ( v64 != -1 )
    {
      if ( v64 >= pTargets->m_Size )
        return;
      if ( v65 != 0 )
      {
        for ( i = pTargets->m_Size; v64 < i; i = pTargets->m_Size )
        {
          while ( 1 )
          {
            v67 = RandomInt(0, (i - 1));
            v68 = CEntityHandle::operator CEntityInstance *(&pTargets->m_Memory.m_pMemory[v67]);
            if ( v68 == 0 || BYTE3(v68[7]._vptr_IHandleEntity) == 0 )
              break;
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(pTargets, v67);
            i = pTargets->m_Size;
            if ( v64 >= pTargets->m_Size )
              goto LABEL_84;
          }
        }
      }
      else
      {
        v92 = pTargets->m_Size - v64;
        v93 = v92;
        if ( v92 >= 0 )
        {
          v94 = v92;
          do
          {
            v95 = CEntityHandle::operator CEntityInstance *(&pTargets->m_Memory.m_pMemory[v94]);
            if ( v95 != 0 && BYTE3(v95[7]._vptr_IHandleEntity) != 0 )
              CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(pTargets, v93);
            --v93;
            --v94;
          }
          while ( v93 != -1 );
        }
      }
    }
LABEL_84:
    v69 = KeyValues::FindKey(pTargetKV, "ScriptSelectEntities", 0);
    v70 = v69;
    if ( v69 != 0 )
    {
      v71 = KeyValues::GetString(v69, "ScriptFile", 0, 0, 0);
      v72 = KeyValues::GetString(v70, "Function", 0, 0, 0);
      if ( g_pVScriptGameSystem != 0 )
      {
        v73 = (*(g_pVScriptGameSystem->_vptr_IVScriptGameSystem + 4))(g_pVScriptGameSystem);
        pVMa = v73;
        if ( v71 != 0 && v72 != 0 && v73 != 0 )
        {
          v74 = (*(g_pVScriptGameSystem->_vptr_IVScriptGameSystem + 9))(g_pVScriptGameSystem, v71);
          hFunction = (*(*pVMa + 144LL))(pVMa, v72, v74, 0);
          kvTable.m_type = 0;
          kvTable.m_flags = 0;
          kvTable.m_uint64 = 0;
          IScriptVM::CreateTableFromKeyValues(pVMa, &kvTable, v70);
          Recursive_DecodeKeyValuesIntoScriptTable(kvTable.m_hScript, v70, pVMa, this);
          v75 = this->m_pCaster;
          if ( v75 != 0 )
          {
            v76.m_Data = CEntityInstance::GetEntityIndex(v75).m_Data;
            v77 = *(*pVMa + 240LL);
            args[0].m_type = 5;
            args[0].m_flags = 0;
            args[0].m_int = v76.m_Data;
            v77(pVMa, kvTable.m_uint64, "caster_entindex", args);
            if ( (args[0].m_flags & 1) != 0 )
              (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, args[0].m_uint64);
            v78 = this->m_pCaster;
            v79 = *(*pVMa + 240LL);
            if ( v78 != 0 )
              m_hScope = CEntityInstance::GetPublicScriptScope(v78, GetScriptScopeBehavior_t::CREATE_IF_NECESSARY)->m_hScope;
            else
              m_hScope = 0;
            args[0].m_type = 31;
            args[0].m_flags = 0;
            args[0].m_uint64 = m_hScope;
            v79(pVMa, kvTable.m_uint64, "caster", args);
            CVariantBase<CVariantDefaultAllocator>::Free(args);
          }
          hArrayParam.m_type = 0;
          hArrayParam.m_flags = 0;
          hArrayParam.m_uint64 = 0;
          (*(*pVMa + 360LL))(pVMa, &hArrayParam);
          for ( j = 0; pTargets->m_Size > j; ++j )
          {
            v88 = *(*pVMa + 248LL);
            v89 = &pTargets->m_Memory.m_pMemory[j];
            v90 = v89->m_Index;
            if ( v89->m_Index + 2 > 1
              && (v82 = v89->m_Index,
                  (v83 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v89->m_Index) >> 9) & 0x3F]) != 0) )
            {
              v84 = v82 & 0x1FF;
              v85 = &v83[v84] == 0;
              v86 = &v83[v84];
              v87 = 0;
              if ( !v85 && v90 == v86->m_EHandle.m_Index )
              {
                v127 = v86->m_pInstance;
                if ( v86->m_pInstance != 0 )
                {
                  v87 = v127->m_pEntity->m_hPublicScope.m_hScope;
                  if ( v87 == 0 )
                  {
                    CEntityInstance::CreatePublicScriptScope(v86->m_pInstance, 0);
                    v87 = v127->m_pEntity->m_hPublicScope.m_hScope;
                  }
                }
              }
            }
            else
            {
              v87 = 0;
            }
            args[0].m_type = 31;
            args[0].m_flags = 0;
            args[0].m_uint64 = v87;
            v88(pVMa, hArrayParam.m_uint64, j, args);
            CVariantBase<CVariantDefaultAllocator>::Free(args);
          }
          args[0].m_type = 0;
          args[0].m_flags = 0;
          args[0].m_uint64 = 0;
          args[1].m_type = 0;
          args[1].m_flags = 0;
          args[1].m_uint64 = 0;
          CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&kvTable, args);
          CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&hArrayParam, &args[1]);
          scriptResult.m_type = 0;
          scriptResult.m_flags = 0;
          scriptResult.m_uint64 = 0;
          if ( hFunction != 0 )
            (*(*pVMa + 160LL))(pVMa, hFunction, args, 2, &scriptResult, 0, 1);
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(pTargets);
          if ( scriptResult.m_type == 31 )
          {
            vKey.m_type = 0;
            vKey.m_flags = 0;
            vKey.m_uint64 = 0;
            vValue.m_type = 0;
            vValue.m_flags = 0;
            vValue.m_uint64 = 0;
            v130 = (*(*g_pScriptVM + 280LL))(g_pScriptVM, scriptResult.m_uint64);
            if ( v130 > 0 )
            {
              v111 = 0;
              for ( k = (*(*g_pScriptVM + 296LL))(g_pScriptVM, scriptResult.m_uint64, 0, &vKey, &vValue);
                    ;
                    k = (*(*g_pScriptVM + 296LL))(g_pScriptVM, scriptResult.m_uint64, nItera, &vKey, &vValue) )
              {
                nItera = k;
                if ( vValue.m_type == 31 )
                {
                  m_uint64 = vValue.m_uint64;
                  if ( vValue.m_uint64 != 0 )
                  {
                    v129 = *(*g_pScriptVM + 208LL);
                    Script = GetScriptDesc<CEntityInstance>(0);
                    v115 = v129(g_pScriptVM, m_uint64, Script);
                    if ( v115 != 0 )
                    {
                      v138 = -1;
                      v116 = *(v115 + 8);
                      if ( v116 != 0 )
                      {
                        v117 = 0x7FFF;
                        if ( *(v116 + 16) != -1 )
                          v117 = *(v116 + 16) & 0x7FFF;
                        v138 = (((*(v116 + 16) >> 15) - (*(v116 + 48) & 1)) << 15) | v117 & 0x7FFF;
                      }
                      v118 = pTargets->m_Size;
                      v119 = pTargets->m_Size;
                      if ( v118 == pTargets->m_Memory.m_nAllocationCount )
                      {
                        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&pTargets->m_Memory, 1);
                        v119 = pTargets->m_Size;
                      }
                      pTargets->m_Size = v119 + 1;
                      v120 = &pTargets->m_Memory.m_pMemory[v118];
                      if ( v120 != 0 )
                        v120->m_Index = v138;
                    }
                  }
                }
                (*(*pVMa + 344LL))(pVMa, &vKey);
                (*(*pVMa + 344LL))(pVMa, &vValue);
                if ( ++v111 == v130 )
                  break;
              }
            }
            CVariantBase<CVariantDefaultAllocator>::Free(&vValue);
            CVariantBase<CVariantDefaultAllocator>::Free(&vKey);
          }
          v21 = pVMa;
          (*(*pVMa + 344LL))(pVMa, &kvTable);
          (*(*v21 + 344LL))(v21, &hArrayParam);
          (*(*v21 + 152LL))(v21, hFunction);
          CVariantBase<CVariantDefaultAllocator>::Free(&scriptResult);
          CVariantBase<CVariantDefaultAllocator>::Free(&args[1]);
          CVariantBase<CVariantDefaultAllocator>::Free(args);
          CVariantBase<CVariantDefaultAllocator>::Free(&hArrayParam);
          CVariantBase<CVariantDefaultAllocator>::Free(&kvTable);
        }
      }
    }
  }
}


// CDOTA_ActionRunner::SelectActionPoint  (line 643, @0x000000000243de80, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FStrEq, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Purge, ToDOTABaseNPC, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: KeyValues::GetString, CDOTA_ActionRunner::SelectActionTargets, CBaseEntity::GetAbsOrigin, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_ActionRunner::PerformAction_Knockback
// strings: "PROJECTILE"
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall CDOTA_ActionRunner::SelectActionPoint(CDOTA_ActionRunner *const this, KeyValues *pTargetKV)
{
  const char *String; // rax
  CDOTA_BaseNPC *m_pCaster; // rdi
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  const Vector vNewLoc; // [rsp+10h] [rbp-50h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > centers; // [rsp+20h] [rbp-40h] BYREF
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( pTargetKV != 0 )
  {
    String = KeyValues::GetString(pTargetKV, 0, 0, 0, 0);
    if ( String != 0
      && (String == "POINT"
       || strcmp(String, "POINT") == 0
       || String == "PROJECTILE"
       || strcmp(String, "PROJECTILE") == 0) )
    {
      vNewLoc = this->m_pEventContext->vNewLoc;
    }
    else
    {
      centers.m_Size = 0;
      centers.m_Memory.m_pMemory = 0;
      centers.m_Memory.m_nAllocationCount = 0;
      centers.m_Memory.m_nGrowSize = 0;
      CDOTA_ActionRunner::SelectActionTargets(this, &centers, pTargetKV);
      if ( centers.m_Size == 0
        || centers.m_Memory.m_pMemory->m_Index + 2 <= 1
        || (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(centers.m_Memory.m_pMemory->m_Index >> 9) & 0x3F]) == 0
        || (v9 = &v8[centers.m_Memory.m_pMemory->m_Index & 0x1FF]) == 0
        || centers.m_Memory.m_pMemory->m_Index != v9->m_EHandle.m_Index
        || (m_pCaster = v9->m_pInstance, v9->m_pInstance == 0)
        || !m_pCaster->m_bIsDOTANPC )
      {
        m_pCaster = this->m_pCaster;
      }
      vNewLoc = *CBaseEntity::GetAbsOrigin(m_pCaster);
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&centers);
      if ( (centers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&centers.m_Memory);
        if ( (centers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&centers.m_Memory);
      }
    }
  }
  else
  {
    vNewLoc = *CBaseEntity::GetAbsOrigin(this->m_pCaster);
  }
  *&result.x = *&vNewLoc.x;
  result.z = vNewLoc.z;
  return result;
}


// CDOTA_ActionRunner::SelectActionPoints  (line 672, @0x000000000244eb50, libserver.so)  // inlines: Attacker, FStrEq, Get, GetActionCaster, GetInstance, Target, Unit, VectorMultiply, _V_strcmp, operator CBaseEntity*, operator*, operator+=, operator[]
// calls: CDOTA_ActionRunner::SelectActionPointsWithoutOffset, KeyValues::FindKey, KeyValues::GetString, UTIL_StringToVector, GetWorldEntity, CEntityHandle::operator CEntityInstance*
// callers: CDOTA_ActionRunner::PerformAction_FireEffect, CDOTA_ActionRunner::PerformAction_FireSound, CDOTA_ActionRunner::PerformAction_DestroyTrees, CDOTA_ActionRunner::PerformAction_RunScript, CDOTA_ActionRunner::PerformAction_LinearProjectile, CDOTA_ActionRunner::PerformAction_SpawnUnit, CDOTA_ActionRunner::PerformAction_ActOnPoints
// strings: "RelativeTo", "UNIT", "ATTACKER", "CASTER"
void __fastcall CDOTA_ActionRunner::SelectActionPoints(
        CDOTA_ActionRunner *const this,
        CUtlVector<Vector,CUtlMemory<Vector,int> > *pPoints,
        KeyValues *pTargetKV)
{
  KeyValues *Key; // rax
  KeyValues *v7; // r12
  const char *String; // rax
  char *v9; // rax
  char *v10; // r12
  CBaseEntity *WorldEntity; // rax
  __int64 v12; // rdx
  int i; // ecx
  Vector *v14; // rax
  vec_t v15; // xmm1_4
  vec_t v16; // xmm0_4
  Vector *v17; // rax
  vec_t v18; // xmm2_4
  vec_t v19; // xmm0_4
  __int64 v20; // rax
  float *v21; // rax
  float v22; // xmm2_4
  float v23; // xmm0_4
  CDOTA_BaseNPC *m_pCaster; // rdi
  Vector vecOffset; // [rsp+0h] [rbp-60h] BYREF
  Vector forward; // [rsp+10h] [rbp-50h] BYREF
  Vector right; // [rsp+20h] [rbp-40h] BYREF
  Vector up; // [rsp+30h] [rbp-30h] BYREF

  CDOTA_ActionRunner::SelectActionPointsWithoutOffset(this, pPoints, pTargetKV);
  if ( pPoints->m_Size <= 0 )
    return;
  Key = KeyValues::FindKey(pTargetKV, "Offset", 0);
  v7 = Key;
  if ( Key == 0 )
    return;
  String = KeyValues::GetString(Key, "Position", "", 0, 0);
  UTIL_StringToVector(&vecOffset.x, String);
  v9 = KeyValues::GetString(v7, "RelativeTo", "", 0, 0);
  v10 = v9;
  if ( v9 == "UNIT" || strcmp(v9, "UNIT") == 0 )
  {
    WorldEntity = CEntityHandle::operator CEntityInstance *(&this->m_pEventContext->hunit);
    if ( WorldEntity != 0 )
      goto LABEL_13;
  }
  if ( v10 == "TARGET" || strcmp(v10, "TARGET") == 0 )
  {
    WorldEntity = CEntityHandle::operator CEntityInstance *(&this->m_pEventContext->htarget);
    if ( WorldEntity != 0 )
      goto LABEL_13;
  }
  if ( v10 == "ATTACKER" || strcmp(v10, "ATTACKER") == 0 )
  {
    WorldEntity = CEntityHandle::operator CEntityInstance *(&this->m_pEventContext->hattacker);
    if ( WorldEntity != 0 )
      goto LABEL_13;
  }
  if ( v10 != "CASTER" && strcmp(v10, "CASTER") != 0 || (m_pCaster = this->m_pCaster) == 0 )
  {
    WorldEntity = GetWorldEntity();
LABEL_13:
    (*(WorldEntity->_vptr_IHandleEntity + 61))(WorldEntity, &forward, &right, &up);
    goto LABEL_14;
  }
  (*(m_pCaster->_vptr_IHandleEntity + 61))(m_pCaster, &forward, &right, &up);
LABEL_14:
  v12 = 0;
  for ( i = 0; i < pPoints->m_Size; *v21 = v23 )
  {
    ++i;
    v14 = &pPoints->m_Memory.m_pMemory[v12];
    v15 = (right.z * vecOffset.x) + v14->z;
    v16 = (vecOffset.x * right.x) + v14->x;
    v14->y = (right.y * vecOffset.x) + v14->y;
    v14->z = v15;
    v14->x = v16;
    v17 = &pPoints->m_Memory.m_pMemory[v12];
    v18 = (forward.y * vecOffset.y) + v17->y;
    v19 = (vecOffset.y * forward.x) + v17->x;
    v17->z = (forward.z * vecOffset.y) + v17->z;
    v17->y = v18;
    v17->x = v19;
    v20 = v12 * 12;
    ++v12;
    v21 = (&pPoints->m_Memory.m_pMemory->x + v20);
    v22 = (up.y * vecOffset.z) + v21[1];
    v23 = (vecOffset.z * up.x) + *v21;
    v21[2] = (up.z * vecOffset.z) + v21[2];
    v21[1] = v22;
  }
}


// CDOTA_ActionRunner::SelectActionPointsWithoutOffset  (line 720, @0x000000000244e0f0, libserver.so)  // inlines: AddToTail, AsHScript, Attacker, CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, CopyConstruct<Vector>, CopyData<Vector>, Element, EntityToHScript, FStrEq, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Target, ToDOTABaseNPC, ToHScript, Unit, _V_strcmp, entindex, operator CBaseEntity*, operator CEntityInstance*, operator const Vector&, operator=, operator[], ~CUtlVector, ~CVariantBase
// calls: KeyValues::GetString, CDOTA_ActionRunner::SelectActionTargets, CBaseEntity::GetAbsOrigin, KeyValues::FindKey, IScriptVM::CreateTableFromKeyValues, Recursive_DecodeKeyValuesIntoScriptTable, CEntityInstance::GetEntityIndex, CVariantBase<CVariantDefaultAllocator>::Free, CEntityInstance::GetPublicScriptScope, CEntityHandle::operator CEntityInstance*, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll (16 total)
// callers: CDOTA_ActionRunner::SelectActionPoints
// strings: "PROJECTILE", "ScriptSelectPoints", "caster_entindex"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_ActionRunner::SelectActionPointsWithoutOffset(
        CDOTA_ActionRunner *const this,
        CUtlVector<Vector,CUtlMemory<Vector,int> > *pPoints,
        KeyValues *pTargetKV)
{
  const char *String; // rax
  __int64 v5; // r12
  int v6; // ebx
  CHandle<CBaseEntity> *v7; // rdx
  uint32 m_Index; // eax
  __int16 v9; // cx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  const CBaseEntity *m_pInstance; // rdi
  const Vector *AbsOrigin; // rax
  __int64 m_Size; // r13
  const Vector *v15; // r14
  int v16; // eax
  Vector *v17; // rax
  bool v18; // cc
  KeyValues *Key; // rax
  KeyValues *v20; // rbx
  const char *v21; // r12
  const char *v22; // r13
  __int64 v23; // rax
  IScriptVM *v24; // r14
  __int64 v25; // rax
  CDOTA_BaseNPC *m_pCaster; // rdi
  CEntityIndex v27; // eax
  void (__fastcall *v28)(IScriptVM *, uint64, const char *, CVariantBase<CVariantDefaultAllocator> *); // r8
  CDOTA_BaseNPC *v29; // rdi
  void (__fastcall *v30)(IScriptVM *, uint64, char *, CVariantBase<CVariantDefaultAllocator> *); // rbx
  HSCRIPT m_hScope; // rax
  void (__fastcall *v32)(IScriptVM *, uint64, const char *, CVariantBase<CVariantDefaultAllocator> *); // rbx
  CEntityInstance *v33; // rax
  HSCRIPT v34; // rax
  void (__fastcall *v35)(IScriptVM *, uint64, const char *, CVariantBase<CVariantDefaultAllocator> *); // rbx
  CEntityInstance *v36; // rax
  HSCRIPT v37; // rax
  void (__fastcall *v38)(IScriptVM *, uint64, char *, CVariantBase<CVariantDefaultAllocator> *); // rbx
  CEntityInstance *v39; // rax
  HSCRIPT v40; // rax
  __int64 v41; // r12
  int v42; // ebx
  void (__fastcall *v43)(IScriptVM *, uint64, _QWORD, ScriptVariant_t *); // r13
  const Vector *v44; // rax
  int v45; // r13d
  unsigned int i; // eax
  __int64 v47; // rbx
  int v48; // eax
  Vector *v49; // rax
  const Vector *m_uint64; // r12
  HSCRIPT hFunction; // [rsp+28h] [rbp-F8h]
  int v52; // [rsp+44h] [rbp-DCh]
  unsigned int nIter; // [rsp+48h] [rbp-D8h]
  CDOTA_ActionRunner *thisb; // [rsp+50h] [rbp-D0h]
  ScriptVariant_t kvTable; // [rsp+60h] [rbp-C0h] BYREF
  ScriptVariant_t hArrayParam; // [rsp+70h] [rbp-B0h] BYREF
  ScriptVariant_t scriptResult; // [rsp+80h] [rbp-A0h] BYREF
  ScriptVariant_t vKey; // [rsp+90h] [rbp-90h] BYREF
  ScriptVariant_t vValue; // [rsp+A0h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > centers; // [rsp+B0h] [rbp-70h] BYREF
  CVariantBase<CVariantDefaultAllocator> args[2]; // [rsp+D0h] [rbp-50h] BYREF

  if ( pTargetKV != 0 )
  {
    String = KeyValues::GetString(pTargetKV, 0, 0, 0, 0);
    if ( String == 0
      || String != "POINT"
      && strcmp(String, "POINT") != 0
      && String != "PROJECTILE"
      && strcmp(String, "PROJECTILE") != 0 )
    {
      centers.m_Size = 0;
      centers.m_Memory.m_pMemory = 0;
      centers.m_Memory.m_nAllocationCount = 0;
      centers.m_Memory.m_nGrowSize = 0;
      CDOTA_ActionRunner::SelectActionTargets(this, &centers, pTargetKV);
      v5 = 0;
      v6 = 0;
      if ( centers.m_Size > 0 )
      {
        do
        {
          while ( 1 )
          {
            v7 = &centers.m_Memory.m_pMemory[v5];
            m_Index = centers.m_Memory.m_pMemory[v5].m_Index;
            if ( m_Index + 2 > 1 )
            {
              v9 = v7->m_Index;
              v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_Index) >> 9) & 0x3F];
              if ( v10 != 0 )
              {
                v11 = &v10[v9 & 0x1FF];
                if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
                {
                  m_pInstance = v11->m_pInstance;
                  if ( v11->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                  {
                    AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
                    m_Size = pPoints->m_Size;
                    v15 = AbsOrigin;
                    v16 = pPoints->m_Size;
                    if ( m_Size == pPoints->m_Memory.m_nAllocationCount )
                    {
                      CUtlMemory<Vector,int>::Grow(&pPoints->m_Memory, 1);
                      v16 = pPoints->m_Size;
                    }
                    pPoints->m_Size = v16 + 1;
                    v17 = &pPoints->m_Memory.m_pMemory[m_Size];
                    if ( v17 != 0 )
                      break;
                  }
                }
              }
            }
            ++v6;
            ++v5;
            if ( centers.m_Size <= v6 )
              goto LABEL_20;
          }
          ++v6;
          ++v5;
          *&v17->x = *&v15->x;
          v18 = centers.m_Size <= v6;
          v17->z = v15->z;
        }
        while ( !v18 );
      }
LABEL_20:
      Key = KeyValues::FindKey(pTargetKV, "ScriptSelectPoints", 0);
      v20 = Key;
      if ( Key == 0 )
        goto LABEL_42;
      v21 = KeyValues::GetString(Key, "ScriptFile", 0, 0, 0);
      v22 = KeyValues::GetString(v20, "Function", 0, 0, 0);
      if ( g_pVScriptGameSystem == 0 )
        goto LABEL_42;
      v23 = (*(g_pVScriptGameSystem->_vptr_IVScriptGameSystem + 4))(g_pVScriptGameSystem);
      v24 = v23;
      if ( v21 == 0 || v22 == 0 || v23 == 0 )
        goto LABEL_42;
      v25 = (*(g_pVScriptGameSystem->_vptr_IVScriptGameSystem + 9))(g_pVScriptGameSystem, v21);
      hFunction = (*(*v24 + 144LL))(v24, v22, v25, 0);
      kvTable.m_type = 0;
      kvTable.m_flags = 0;
      kvTable.m_uint64 = 0;
      IScriptVM::CreateTableFromKeyValues(v24, &kvTable, v20);
      Recursive_DecodeKeyValuesIntoScriptTable(kvTable.m_hScript, v20, v24, this);
      m_pCaster = this->m_pCaster;
      if ( m_pCaster != 0 )
      {
        v27.m_Data = CEntityInstance::GetEntityIndex(m_pCaster).m_Data;
        v28 = *(*v24 + 240LL);
        args[0].m_type = 5;
        args[0].m_int = v27.m_Data;
        args[0].m_flags = 0;
        v28(v24, kvTable.m_uint64, "caster_entindex", args);
        CVariantBase<CVariantDefaultAllocator>::Free(args);
        v29 = this->m_pCaster;
        v30 = *(*v24 + 240LL);
        if ( v29 != 0 )
          m_hScope = CEntityInstance::GetPublicScriptScope(v29, GetScriptScopeBehavior_t::CREATE_IF_NECESSARY)->m_hScope;
        else
          m_hScope = 0;
        args[0].m_type = 31;
        args[0].m_flags = 0;
        args[0].m_uint64 = m_hScope;
        v30(v24, kvTable.m_uint64, "caster", args);
        CVariantBase<CVariantDefaultAllocator>::Free(args);
      }
      v32 = *(*v24 + 240LL);
      v33 = CEntityHandle::operator CEntityInstance *(&this->m_pEventContext->htarget);
      if ( v33 != 0 )
        v34 = CEntityInstance::GetPublicScriptScope(v33, GetScriptScopeBehavior_t::CREATE_IF_NECESSARY)->m_hScope;
      else
        v34 = 0;
      args[0].m_uint64 = v34;
      args[0].m_type = 31;
      args[0].m_flags = 0;
      v32(v24, kvTable.m_uint64, "target", args);
      CVariantBase<CVariantDefaultAllocator>::Free(args);
      v35 = *(*v24 + 240LL);
      v36 = CEntityHandle::operator CEntityInstance *(&this->m_pEventContext->hunit);
      if ( v36 != 0 )
        v37 = CEntityInstance::GetPublicScriptScope(v36, GetScriptScopeBehavior_t::CREATE_IF_NECESSARY)->m_hScope;
      else
        v37 = 0;
      args[0].m_type = 31;
      args[0].m_flags = 0;
      args[0].m_uint64 = v37;
      v35(v24, kvTable.m_uint64, "unit", args);
      CVariantBase<CVariantDefaultAllocator>::Free(args);
      v38 = *(*v24 + 240LL);
      v39 = CEntityHandle::operator CEntityInstance *(&this->m_pEventContext->hattacker);
      if ( v39 != 0 )
        v40 = CEntityInstance::GetPublicScriptScope(v39, GetScriptScopeBehavior_t::CREATE_IF_NECESSARY)->m_hScope;
      else
        v40 = 0;
      args[0].m_type = 31;
      args[0].m_flags = 0;
      args[0].m_uint64 = v40;
      v38(v24, kvTable.m_uint64, "attacker", args);
      CVariantBase<CVariantDefaultAllocator>::Free(args);
      hArrayParam.m_type = 0;
      hArrayParam.m_flags = 0;
      hArrayParam.m_uint64 = 0;
      (*(*v24 + 360LL))(v24, &hArrayParam);
      if ( pPoints->m_Size > 0 )
      {
        v41 = 0;
        v42 = 0;
        do
        {
          v43 = *(*v24 + 248LL);
          thisb = &pPoints->m_Memory.m_pMemory[v41];
          vValue.m_type = 0;
          vValue.m_flags = 0;
          CVariantBase<CVariantDefaultAllocator>::Free(&vValue);
          vValue.m_type = 3;
          vValue.m_uint64 = thisb;
          v43(v24, hArrayParam.m_uint64, v42++, &vValue);
          ++v41;
          CVariantBase<CVariantDefaultAllocator>::Free(&vValue);
        }
        while ( pPoints->m_Size > v42 );
      }
      args[0].m_type = 0;
      args[0].m_flags = 0;
      args[0].m_uint64 = 0;
      args[1].m_type = 0;
      args[1].m_flags = 0;
      args[1].m_uint64 = 0;
      CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&kvTable, args);
      CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&hArrayParam, &args[1]);
      scriptResult.m_uint64 = 0;
      scriptResult.m_type = 0;
      scriptResult.m_flags = 0;
      if ( hFunction != 0 )
        (*(*v24 + 160LL))(v24, hFunction, args, 2, &scriptResult, 0, 1);
      CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(pPoints);
      if ( scriptResult.m_type != 31 )
      {
LABEL_41:
        (*(*v24 + 344LL))(v24, &kvTable);
        (*(*v24 + 344LL))(v24, &hArrayParam);
        (*(*v24 + 152LL))(v24, hFunction);
        CVariantBase<CVariantDefaultAllocator>::Free(&scriptResult);
        CVariantBase<CVariantDefaultAllocator>::Free(&args[1]);
        CVariantBase<CVariantDefaultAllocator>::Free(args);
        CVariantBase<CVariantDefaultAllocator>::Free(&hArrayParam);
        CVariantBase<CVariantDefaultAllocator>::Free(&kvTable);
LABEL_42:
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&centers);
        return;
      }
      vKey.m_type = 0;
      vKey.m_flags = 0;
      vValue.m_type = 0;
      vKey.m_uint64 = 0;
      vValue.m_flags = 0;
      vValue.m_uint64 = 0;
      v52 = (*(*g_pScriptVM + 280LL))(g_pScriptVM, scriptResult.m_uint64);
      if ( v52 <= 0 )
      {
LABEL_56:
        CVariantBase<CVariantDefaultAllocator>::Free(&vValue);
        CVariantBase<CVariantDefaultAllocator>::Free(&vKey);
        goto LABEL_41;
      }
      v45 = 0;
      for ( i = (*(*g_pScriptVM + 296LL))(g_pScriptVM, scriptResult.m_uint64, 0, &vKey, &vValue);
            ;
            i = (*(*g_pScriptVM + 296LL))(g_pScriptVM, scriptResult.m_uint64, nIter, &vKey, &vValue) )
      {
        nIter = i;
        if ( vValue.m_type != 3 )
          goto LABEL_50;
        m_uint64 = vValue.m_uint64;
        if ( vValue.m_uint64 != 0 )
        {
          v47 = pPoints->m_Size;
          v48 = pPoints->m_Size;
          if ( v47 != pPoints->m_Memory.m_nAllocationCount )
            goto LABEL_48;
        }
        else
        {
          v47 = pPoints->m_Size;
          m_uint64 = &vec3_origin;
          v48 = pPoints->m_Size;
          if ( v47 != pPoints->m_Memory.m_nAllocationCount )
            goto LABEL_48;
        }
        CUtlMemory<Vector,int>::Grow(&pPoints->m_Memory, 1);
        v48 = pPoints->m_Size;
LABEL_48:
        pPoints->m_Size = v48 + 1;
        v49 = &pPoints->m_Memory.m_pMemory[v47];
        if ( v49 != 0 )
        {
          *&v49->x = *&m_uint64->x;
          v49->z = m_uint64->z;
        }
LABEL_50:
        (*(*v24 + 344LL))(v24, &vKey);
        (*(*v24 + 344LL))(v24, &vValue);
        if ( ++v45 == v52 )
          goto LABEL_56;
      }
    }
    CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::AddToTail(pPoints, &this->m_pEventContext->vNewLoc);
  }
  else
  {
    v44 = CBaseEntity::GetAbsOrigin(this->m_pCaster);
    CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::AddToTail(pPoints, v44);
  }
}


// CDOTA_ActionRunner::PrecacheActions  (line 824, @0x0000000002425b40, libserver.so)  // inlines: FStrEq, _V_strcmp
// calls: KeyValues::GetFirstSubKey, KeyValues::GetName, CDOTA_ActionRunner::PrecacheAction_AddAbility, KeyValues::GetNextKey, CDOTA_ActionRunner::PrecacheAction_AttachEffect, CDOTA_ActionRunner::PrecacheAction_FireEffect, CDOTA_ActionRunner::PrecacheAction_FireSound, CDOTA_ActionRunner::PrecacheAction_ActOnPoints, CDOTA_ActionRunner::PrecacheAction_ActOnTargets, CDOTA_ActionRunner::PrecacheAction_DelayedAction, CDOTA_ActionRunner::PrecacheAction_SpawnUnit
// callers: CDOTA_ActionRunner::PrecacheAction_DelayedAction, CDOTA_ActionRunner::PrecacheAction_SpawnUnit, CDOTA_ActionRunner::PrecacheAction_ActOnTargets, CDOTA_ActionRunner::PrecacheAction_ActOnPoints, CDOTA_Ability_DataDriven::Precache, CDOTA_Item_DataDriven::Precache, CDOTA_Modifier_DataDriven::Precache
// strings: "AttachEffect", "FireEffect", "FireSound", "ActOnPoints", "ActOnTargets", "DelayedAction" (7 total)
void __fastcall CDOTA_ActionRunner::PrecacheActions(KeyValues *pKV, const CEntityPrecacheContext *pContext)
{
  KeyValues *i; // r15
  char *Name; // rax

  if ( pKV != 0 )
  {
    for ( i = KeyValues::GetFirstSubKey(pKV); i != 0; i = KeyValues::GetNextKey(i) )
    {
      while ( 1 )
      {
        Name = KeyValues::GetName(i);
        if ( Name != "AttachEffect" && strcmp(Name, "AttachEffect") != 0 )
          break;
        CDOTA_ActionRunner::PrecacheAction_AttachEffect(i, pContext);
LABEL_22:
        i = KeyValues::GetNextKey(i);
        if ( i == 0 )
          return;
      }
      if ( Name == "FireEffect" || strcmp(Name, "FireEffect") == 0 )
      {
        CDOTA_ActionRunner::PrecacheAction_FireEffect(i, pContext);
        goto LABEL_22;
      }
      if ( Name == "FireSound" || strcmp(Name, "FireSound") == 0 )
      {
        CDOTA_ActionRunner::PrecacheAction_FireSound(i, pContext);
        goto LABEL_22;
      }
      if ( Name == "ActOnPoints" || strcmp(Name, "ActOnPoints") == 0 )
      {
        CDOTA_ActionRunner::PrecacheAction_ActOnPoints(i, pContext);
        goto LABEL_22;
      }
      if ( Name == "ActOnTargets" || strcmp(Name, "ActOnTargets") == 0 )
      {
        CDOTA_ActionRunner::PrecacheAction_ActOnTargets(i, pContext);
        goto LABEL_22;
      }
      if ( Name == "DelayedAction" || strcmp(Name, "DelayedAction") == 0 )
      {
        CDOTA_ActionRunner::PrecacheAction_DelayedAction(i, pContext);
        goto LABEL_22;
      }
      if ( Name == "SpawnUnit" || strcmp(Name, "SpawnUnit") == 0 )
      {
        CDOTA_ActionRunner::PrecacheAction_SpawnUnit(i, pContext);
        goto LABEL_22;
      }
      if ( Name != "AddAbility" && strcmp(Name, "AddAbility") != 0 )
        goto LABEL_22;
      CDOTA_ActionRunner::PrecacheAction_AddAbility(i, pContext);
    }
  }
}


// CDOTA_ActionRunner::PerformActions  (line 848, @0x0000000002451860, libserver.so)
// calls: CDOTA_ActionRunner::PerformActions_Core
// callers: CDOTA_Item_DataDriven::OnToggle, CDOTA_Item_DataDriven::OnOwnerSpawned, CDOTA_Item_DataDriven::OnEquip, CDOTA_Item_DataDriven::OnSpellStart, CDOTA_Item_DataDriven::OnAbilityPhaseStart, CDOTA_Item_DataDriven::OnChannelFinish, CDOTA_Item_DataDriven::OnProjectileHit, CDOTA_Item_DataDriven::OnOwnerDied, CDOTA_Item_DataDriven::OnUnequip, CDOTA_Item_DataDriven::Spawn, CDOTA_Modifier_DataDriven::OnAttacked, CDOTA_Modifier_DataDriven::OnAttackLanded (39 total)
bool __fastcall CDOTA_ActionRunner::PerformActions(
        CDOTA_ActionRunner *const this,
        KeyValues *pKV,
        CDOTA_BaseNPC *pCaster,
        const CModifierParams *const params)
{
  const CModifierParams *m_pEventContext; // r13
  CDOTA_BaseNPC *m_pCaster; // r12
  bool result; // al

  m_pEventContext = this->m_pEventContext;
  this->m_pEventContext = params;
  m_pCaster = this->m_pCaster;
  this->m_pCaster = pCaster;
  result = CDOTA_ActionRunner::PerformActions_Core(this, pKV);
  this->m_pEventContext = m_pEventContext;
  this->m_pCaster = m_pCaster;
  return result;
}


// CDOTA_ActionRunner::PerformActions_Core  (line 861, @0x0000000002450fa0, libserver.so)  // inlines: FStrEq, _V_strcmp
// calls: KeyValues::GetFirstSubKey, KeyValues::GetName, strcmp, CDOTA_ActionRunner::PerformAction_GrantXPGold, CDOTA_ActionRunner::PerformAction_ApplyModifier, KeyValues::GetNextKey, CDOTA_ActionRunner::PerformAction_AttachEffect, CDOTA_ActionRunner::PerformAction_Blink, CDOTA_ActionRunner::PerformAction_Random, CDOTA_ActionRunner::PerformAction_CreateItem, CDOTA_ActionRunner::PerformAction_CreateThinker, CDOTA_ActionRunner::PerformAction_CreateThinkerWall (45 total)
// callers: CDOTA_ActionRunner::PerformActions, CDOTA_Ability_DataDriven::Spawn, CDOTA_Ability_DataDriven::OnToggle, CDOTA_Ability_DataDriven::OnOwnerSpawned, CDOTA_Ability_DataDriven::OnUpgrade, CDOTA_Ability_DataDriven::OnOwnerDied, CDOTA_Ability_DataDriven::OnSpellStart, CDOTA_Ability_DataDriven::OnAbilityPhaseStart, CDOTA_Ability_DataDriven::OnAbilityPhaseInterrupted, CDOTA_Ability_DataDriven::OnChannelFinish, CDOTA_Ability_DataDriven::OnProjectileHit, CDOTA_ActionRunner::PerformAction_SpawnUnit (18 total)
// strings: "ApplyModifier", "AttachEffect", "CreateThinker", "CreateThinkerWall", "IsCasterAlive", "FireEffect" (29 total)
bool __fastcall CDOTA_ActionRunner::PerformActions_Core(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  KeyValues *FirstSubKey; // r15
  const char *Name; // rax
  bool result; // al
  const char *v6; // rax
  const char *v7; // [rsp-40h] [rbp-40h]

  if ( pKV == 0 )
    return 0;
  FirstSubKey = KeyValues::GetFirstSubKey(pKV);
  if ( FirstSubKey != 0 )
  {
    while ( 1 )
    {
      Name = KeyValues::GetName(FirstSubKey);
      if ( Name == "ApplyModifier" || strcmp(Name, "ApplyModifier") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_ApplyModifier(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( Name == "AttachEffect" || strcmp(Name, "AttachEffect") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_AttachEffect(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( Name == "Blink" || strcmp(Name, "Blink") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_Blink(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( Name == "Random" || strcmp(Name, "Random") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_Random(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( Name == "CreateItem" || strcmp(Name, "CreateItem") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_CreateItem(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( Name == "CreateThinker" || strcmp(Name, "CreateThinker") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_CreateThinker(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( Name == "CreateThinkerWall" || strcmp(Name, "CreateThinkerWall") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_CreateThinkerWall(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( Name == "Damage" || strcmp(Name, "Damage") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_Damage(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( Name == "Heal" || strcmp(Name, "Heal") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_Heal(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( Name == "IsCasterAlive" || strcmp(Name, "IsCasterAlive") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_IsCasterAlive(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( Name == "FireEffect" || strcmp(Name, "FireEffect") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_FireEffect(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( Name == "FireSound" || strcmp(Name, "FireSound") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_FireSound(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( Name == "Lifesteal" || strcmp(Name, "Lifesteal") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_Lifesteal(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( Name == "Knockback" || strcmp(Name, "Knockback") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_Knockback(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( Name == "Stun" || strcmp(Name, "Stun") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_Stun(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( Name == "RemoveModifier" || strcmp(Name, "RemoveModifier") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_RemoveModifier(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( Name == "LinearProjectile" || strcmp(Name, "LinearProjectile") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_LinearProjectile(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( Name == "TrackingProjectile" || strcmp(Name, "TrackingProjectile") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_TrackingProjectile(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( Name == "SpawnUnit" || strcmp(Name, "SpawnUnit") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_SpawnUnit(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( Name == "ReplaceUnit" || strcmp(Name, "ReplaceUnit") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_ReplaceUnit(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( Name == "RemoveUnit" || strcmp(Name, "RemoveUnit") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_RemoveUnit(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( Name == "RespawnHero" || strcmp(Name, "RespawnHero") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_RespawnHero(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( Name == "AddAbility" || strcmp(Name, "AddAbility") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_AddAbility(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( Name == "RemoveAbility" || strcmp(Name, "RemoveAbility") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_RemoveAbility(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( Name == "LevelUpAbility" || strcmp(Name, "LevelUpAbility") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_LevelUpAbility(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( Name == "SpendCharge" || strcmp(Name, "SpendCharge") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_SpendCharge(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( Name == "SpendMana" || strcmp(Name, "SpendMana") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_SpendMana(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( Name == "CleaveAttack" || strcmp(Name, "CleaveAttack") == 0 )
        break;
      if ( Name == "CreateBonusAttack" || (v7 = Name, strcmp(Name, "CreateBonusAttack") == 0) )
      {
        result = CDOTA_ActionRunner::PerformAction_CreateBonusAttack(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( v7 == "MoveUnit" || strcmp(v7, "MoveUnit") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_MoveUnit(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( v7 == "ActOnPoints" || strcmp(v7, "ActOnPoints") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_ActOnPoints(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( v7 == "ActOnTargets" || strcmp(v7, "ActOnTargets") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_ActOnTargets(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( v7 == "DelayedAction" || strcmp(v7, "DelayedAction") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_DelayedAction(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( v7 == "DestroyTrees" || strcmp(v7, "DestroyTrees") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_DestroyTrees(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( v7 == "DropParentItem" || strcmp(v7, "DropParentItem") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_DropParentItem(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( v7 == "RunScript" || strcmp(v7, "RunScript") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_RunScript(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( v7 == "Rotate" || strcmp(v7, "Rotate") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_Rotate(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( v7 == "ApplyMotionController" || strcmp(v7, "ApplyMotionController") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_ApplyMotionController(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( v7 == "AnimationAttack" || strcmp(v7, "AnimationAttack") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_AnimationAttack(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( v7 == "GrantXPGold" || strcmp(v7, "GrantXPGold") == 0 )
      {
        result = CDOTA_ActionRunner::PerformAction_GrantXPGold(this, FirstSubKey);
        goto LABEL_85;
      }
      if ( v7 != "DeleteOnHit" && strcmp(v7, "DeleteOnHit") != 0 )
      {
        v6 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
        DevMsg("%s - unknown action %s.\n", v6, v7);
        return 1;
      }
LABEL_86:
      FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
      if ( FirstSubKey == 0 )
        return 0;
    }
    result = CDOTA_ActionRunner::PerformAction_CleaveAttack(this, FirstSubKey);
LABEL_85:
    if ( result )
      return result;
    goto LABEL_86;
  }
  return 0;
}


// CDOTA_ActionRunner::PerformAction_ApplyModifier  (line 929, @0x000000000243e050, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetActionCaster, GetBool, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: KeyValues::FindKey, CDOTA_ActionRunner::SelectActionTargets, KeyValues::KeyValues, KeyValues::GetFirstSubKey, KeyValues::GetString, KeyValues::GetName, KeyValues::SetString, KeyValues::GetNextKey, KeyValues::SetFloat, KeyValues::GetInt, CDOTA_BaseNPC::AddNewModifier, DevMsg(char const*,...) (16 total)
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "ApplyModifier", "TargetAppliesModifier", "%s - invalid modifier name specified for %s.\n", "%s - no target specified for %s."
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_ActionRunner::PerformAction_ApplyModifier(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  KeyValues *Key; // r12
  KeyValues *v5; // rax
  KeyValues *i; // rax
  const char *String; // r15
  const char *v8; // rax
  const KeyValues *v9; // r12
  const char *v10; // rax
  float v11; // xmm1_4
  __int64 v12; // r12
  int v13; // ebx
  CHandle<CBaseEntity> *v14; // rdx
  uint32 m_Index; // eax
  __int16 v16; // cx
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  CDOTABaseAbility *v20; // rax
  CDOTA_Buff *v21; // rax
  CDOTA_Buff *v22; // r15
  int (**vptr_CDOTA_Buff)(...); // rax
  __int64 v24; // rsi
  const char *v25; // rbx
  const char *v26; // rax
  const char *Name; // r13
  const char *v29; // rax
  _BOOL4 nStacks; // [rsp+8h] [rbp-88h]
  int Int; // [rsp+Ch] [rbp-84h]
  const char *pszModifierName; // [rsp+10h] [rbp-80h]
  CDOTA_BaseNPC *pCaster; // [rsp+18h] [rbp-78h]
  CDOTA_BaseNPC *pCastera; // [rsp+18h] [rbp-78h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > targets; // [rsp+20h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+58h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  Key = KeyValues::FindKey(pKV, "Target", 0);
  if ( Key == 0 )
  {
    Name = KeyValues::GetName(pKV);
    v29 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
    DevMsg("%s - no target specified for %s.", v29, Name);
  }
  targets.m_Size = 0;
  targets.m_Memory.m_pMemory = 0;
  targets.m_Memory.m_nAllocationCount = 0;
  targets.m_Memory.m_nGrowSize = 0;
  CDOTA_ActionRunner::SelectActionTargets(this, &targets, Key);
  if ( targets.m_Size != 0 )
  {
    KeyValues::KeyValues(&kv, "ApplyModifier");
    v5 = KeyValues::FindKey(pKV, "KeyValues", 0);
    if ( v5 != 0 )
    {
      for ( i = KeyValues::GetFirstSubKey(v5); ; i = KeyValues::GetNextKey(v9) )
      {
        v9 = i;
        if ( i == 0 )
          break;
        String = KeyValues::GetString(i, 0, "", 0, 0);
        v8 = KeyValues::GetName(v9);
        KeyValues::SetString(&kv, v8, String);
      }
    }
    pszModifierName = KeyValues::GetString(pKV, "ModifierName", 0, 0, 0);
    if ( (*(this->_vptr_CDOTA_ActionRunner + 7))(this, &kv, pszModifierName) != 0 )
    {
      v10 = KeyValues::GetString(pKV, "Duration", 0, 0, 0);
      if ( v10 != 0 )
      {
        (*(this->_vptr_CDOTA_ActionRunner + 2))(this, v10, 0.0);
        KeyValues::SetFloat(&kv, "duration", v11);
      }
      Int = KeyValues::GetInt(pKV, "TargetAppliesModifier", 0);
      nStacks = KeyValues::GetInt(pKV, "StackCount", 0) != 0;
      if ( targets.m_Size > 0 )
      {
        v12 = 0;
        v13 = 0;
        do
        {
          v14 = &targets.m_Memory.m_pMemory[v12];
          m_Index = targets.m_Memory.m_pMemory[v12].m_Index;
          if ( m_Index + 2 > 1 )
          {
            v16 = v14->m_Index;
            v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v14->m_Index) >> 9) & 0x3F];
            if ( v17 != 0 )
            {
              v18 = &v17[v16 & 0x1FF];
              if ( v18 != 0 && m_Index == v18->m_EHandle.m_Index )
              {
                m_pInstance = v18->m_pInstance;
                if ( v18->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                {
                  pCaster = v18->m_pInstance;
                  if ( Int == 0 )
                    pCaster = this->m_pCaster;
                  v20 = (*(this->_vptr_CDOTA_ActionRunner + 8))(this);
                  v21 = CDOTA_BaseNPC::AddNewModifier(m_pInstance, pCaster, v20, pszModifierName, &kv, 0);
                  v22 = v21;
                  if ( v21 != 0 && nStacks )
                  {
                    vptr_CDOTA_Buff = v21->_vptr_CDOTA_Buff;
                    pCastera = vptr_CDOTA_Buff[28];
                    v24 = vptr_CDOTA_Buff[27](v22) + 1;
                    (pCastera)(v22, v24);
                  }
                }
              }
            }
          }
          ++v13;
          ++v12;
        }
        while ( targets.m_Size > v13 );
      }
    }
    else
    {
      v25 = KeyValues::GetName(pKV);
      v26 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
      DevMsg("%s - invalid modifier name specified for %s.\n", v26, v25);
    }
    KeyValues::~KeyValues(&kv);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&targets);
  return 0;
}


// CDOTA_ActionRunner::PrecacheAction_AttachEffect  (line 987, @0x00000000024257f0, libserver.so)
// calls: KeyValues::GetString, PrecacheParticleSystem
// callers: CDOTA_ActionRunner::PrecacheActions
void __fastcall CDOTA_ActionRunner::PrecacheAction_AttachEffect(KeyValues *pKV, const CEntityPrecacheContext *pContext)
{
  const char *String; // rax

  String = KeyValues::GetString(pKV, "EffectName", 0, 0, 0);
  if ( String != 0 )
    PrecacheParticleSystem(String, pContext);
}


// CDOTA_ActionRunner::PerformAction_AttachEffect  (line 996, @0x000000000243e3b0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: KeyValues::GetString, GetAttachTypeFromString, KeyValues::FindKey, CDOTA_ActionRunner::SelectActionTargets, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_ActionRunner::PerformActionHelper_ProcessEffectControlPoints, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, KeyValues::GetName, DevMsg(char const*,...), _Unwind_Resume
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "%s - no target specified for %s."
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_ActionRunner::PerformAction_AttachEffect(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  const char *String; // rax
  KeyValues *Key; // rbx
  __int64 v6; // r12
  int i; // ebx
  const CBaseEntity *m_pInstance; // r13
  int v9; // r14d
  CDOTA_ParticleManager *ParticleManager; // rax
  CHandle<CBaseEntity> *v11; // rdx
  uint32 m_Index; // eax
  __int16 v13; // cx
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  const char *Name; // r12
  const char *v18; // rax
  __int128 v19; // [rsp+0h] [rbp-70h]
  const char *pszEffectName; // [rsp+10h] [rbp-60h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > targets; // [rsp+20h] [rbp-50h] BYREF

  pszEffectName = KeyValues::GetString(pKV, "EffectName", 0, 0, 0);
  if ( pszEffectName != 0 )
  {
    String = KeyValues::GetString(pKV, "EffectAttachType", 0, 0, 0);
    if ( String != 0 )
    {
      HIDWORD(v19) = GetAttachTypeFromString(String);
      Key = KeyValues::FindKey(pKV, "Target", 0);
      if ( Key == 0 )
      {
        Name = KeyValues::GetName(pKV);
        v18 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
        DevMsg("%s - no target specified for %s.", v18, Name);
      }
      targets.m_Size = 0;
      targets.m_Memory.m_pMemory = 0;
      targets.m_Memory.m_nAllocationCount = 0;
      targets.m_Memory.m_nGrowSize = 0;
      *&v19 = &targets;
      CDOTA_ActionRunner::SelectActionTargets(this, &targets, Key);
      if ( targets.m_Size > 0 )
      {
        v6 = 0;
        for ( i = 0; targets.m_Size > i; ++i )
        {
          while ( 1 )
          {
            v11 = &targets.m_Memory.m_pMemory[v6];
            m_Index = targets.m_Memory.m_pMemory[v6].m_Index;
            if ( m_Index + 2 > 1 )
            {
              v13 = v11->m_Index;
              v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v11->m_Index) >> 9) & 0x3F];
              if ( v14 != 0 )
              {
                v15 = &v14[v13 & 0x1FF];
                if ( v15 != 0 )
                  break;
              }
            }
LABEL_10:
            ++i;
            ++v6;
            if ( targets.m_Size <= i )
              goto LABEL_16;
          }
          if ( m_Index == v15->m_EHandle.m_Index )
          {
            m_pInstance = v15->m_pInstance;
            if ( v15->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
            {
              v9 = (*(this->_vptr_CDOTA_ActionRunner + 9))(this, pszEffectName, HIDWORD(v19), v15->m_pInstance);
              CBaseEntity::GetAbsOrigin(m_pInstance);
              ParticleManager = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControl(ParticleManager, v9, 0, v19);
              CDOTA_ActionRunner::PerformActionHelper_ProcessEffectControlPoints(this, pKV, v9);
            }
            goto LABEL_10;
          }
          ++v6;
        }
      }
LABEL_16:
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(v19);
    }
  }
  return 0;
}


// CDOTA_ActionRunner::PerformAction_RemoveModifier  (line 1034, @0x000000000243e5b0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Purge, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: KeyValues::FindKey, CDOTA_ActionRunner::SelectActionTargets, KeyValues::GetString, CDOTA_BaseNPC::RemoveModifierByName, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, KeyValues::GetName, DevMsg(char const*,...), CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "%s - no target specified for %s.", "%s - invalid modifier name specified for %s.\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_ActionRunner::PerformAction_RemoveModifier(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  KeyValues *Key; // rbx
  const char *String; // r13
  __int64 v6; // r12
  int i; // ebx
  CHandle<CBaseEntity> *v8; // rax
  uint32 m_Index; // edx
  __int16 v10; // cx
  CEntityIdentity *v11; // rax
  CEntityIdentity *v12; // rax
  CDOTA_BaseNPC *m_pInstance; // rdi
  const char *Name; // r13
  const char *v16; // rax
  const char *v17; // rbx
  const char *v18; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > targets; // [rsp+0h] [rbp-50h] BYREF

  Key = KeyValues::FindKey(pKV, "Target", 0);
  if ( Key == 0 )
  {
    Name = KeyValues::GetName(pKV);
    v16 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
    DevMsg("%s - no target specified for %s.", v16, Name);
  }
  targets.m_Size = 0;
  targets.m_Memory.m_pMemory = 0;
  targets.m_Memory.m_nAllocationCount = 0;
  targets.m_Memory.m_nGrowSize = 0;
  CDOTA_ActionRunner::SelectActionTargets(this, &targets, Key);
  if ( targets.m_Size != 0 )
  {
    String = KeyValues::GetString(pKV, "ModifierName", 0, 0, 0);
    if ( String != 0 )
    {
      v6 = 0;
      for ( i = 0; targets.m_Size > i; ++v6 )
      {
        while ( 1 )
        {
          v8 = &targets.m_Memory.m_pMemory[v6];
          m_Index = targets.m_Memory.m_pMemory[v6].m_Index;
          if ( m_Index + 2 > 1 )
          {
            v10 = v8->m_Index;
            v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_Index) >> 9) & 0x3F];
            if ( v11 != 0 )
            {
              v12 = &v11[v10 & 0x1FF];
              if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
              {
                m_pInstance = v12->m_pInstance;
                if ( v12->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                  break;
              }
            }
          }
          ++i;
          ++v6;
          if ( targets.m_Size <= i )
            goto LABEL_15;
        }
        CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, String);
        ++i;
      }
    }
    else
    {
      v17 = KeyValues::GetName(pKV);
      v18 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
      DevMsg("%s - invalid modifier name specified for %s.\n", v18, v17);
    }
  }
LABEL_15:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&targets);
  if ( (targets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&targets.m_Memory);
    if ( (targets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&targets.m_Memory);
  }
  return 0;
}


// CDOTA_ActionRunner::PerformAction_Blink  (line 1066, @0x000000000243e790, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetActionCaster, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, Purge, Set, operator->, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: KeyValues::FindKey, CBaseEntity::GetAbsOrigin, CDOTA_ActionRunner::SelectActionTargets, CEntityHandle::operator CEntityInstance*, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound, CDOTA_BaseNPC::PrimeResumePreviousMovement, FindClearSpaceForUnit (17 total)
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "particles/items_fx/blink_dagger_start.vpcf", "DOTA_Item.BlinkDagger.Activate", "particles/items_fx/blink_dagger_end.vpcf"
bool __fastcall CDOTA_ActionRunner::PerformAction_Blink(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  KeyValues *Key; // r13
  const CBaseEntity *v4; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  CDOTA_ParticleManager *v7; // rax
  CDOTA_ParticleManager *v8; // rax
  CDOTA_BaseNPC *m_pCaster; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v11; // eax
  __int16 v12; // cx
  CDOTA_BaseNPC *v13; // r12
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  const Vector vStartPos; // [rsp+0h] [rbp-60h]
  Vector vStartPosa; // [rsp+0h] [rbp-60h]
  const Vector vEndPos; // [rsp+10h] [rbp-50h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > targets; // [rsp+20h] [rbp-40h] BYREF

  Key = KeyValues::FindKey(pKV, "Target", 0);
  vStartPos = *CBaseEntity::GetAbsOrigin(this->m_pCaster);
  if ( Key == 0 )
  {
LABEL_4:
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/items_fx/blink_dagger_start.vpcf",
                 2,
                 0,
                 0,
                 0);
    CBaseEntity::GetAbsOrigin(this->m_pCaster);
    v7 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v7, Particle, 0, vStartPos);
    v8 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v8, Particle);
    DOTA_EmitSound(2, "DOTA_Item.BlinkDagger.Activate", this->m_pCaster);
    CDOTA_BaseNPC::PrimeResumePreviousMovement(this->m_pCaster);
    FindClearSpaceForUnit(this->m_pCaster, vEndPos, 1);
    m_pCaster = this->m_pCaster;
    targets.m_Size = -1;
    if ( m_pCaster != 0 )
    {
      m_pEntity = m_pCaster->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v11 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v12 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(targets.m_Size) = v12 | targets.m_Size & 0x8000;
        targets.m_Size = (v11 << 15) | targets.m_Size & 0x7FFF;
      }
    }
    CDOTA_ProjectileManager::ProjectileDodge(&g_DOTAProjectileManager, &targets, 0);
    v13 = this->m_pCaster;
    v14 = GetParticleManager();
    LODWORD(v13) = CDOTA_ParticleManager::CreateParticle(v14, "particles/items_fx/blink_dagger_end.vpcf", 1, v13, 0, 0);
    v15 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v15, v13);
    CDOTA_BaseNPC::UpdateResumePreviousMovementAfterTeleport(this->m_pCaster, vStartPosa);
    return 0;
  }
  targets.m_Size = 0;
  targets.m_Memory.m_pMemory = 0;
  targets.m_Memory.m_nAllocationCount = 0;
  targets.m_Memory.m_nGrowSize = 0;
  CDOTA_ActionRunner::SelectActionTargets(this, &targets, Key);
  if ( targets.m_Size != 0 )
  {
    v4 = CEntityHandle::operator CEntityInstance *(targets.m_Memory.m_pMemory);
    vEndPos = *CBaseEntity::GetAbsOrigin(v4);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&targets);
    if ( (targets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&targets.m_Memory);
      if ( (targets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&targets.m_Memory);
    }
    goto LABEL_4;
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&targets);
  if ( (targets.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
    return 0;
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&targets.m_Memory);
  if ( (targets.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
    return 0;
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&targets.m_Memory);
  return 0;
}


// ActionRunner_OnItemCreated  (line 1098, @0x00000000024231a0, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, Get, Get<bool>, Get<float>, GetContainedItem, GetInstance, GetValue, GetValue<bool>, GetValue<float>, QAngle, RandomYawVector, VectorAdd, VectorMultiply, _V_strcmp, atof, operator CDOTA_Item*, operator*, operator+, operator[]
// calls: CEntityHandle::operator CEntityInstance*, RandomFloat, AngleVectors, CBaseEntity::GetAbsOrigin, CDOTA_Item::LaunchLoot, Warning, VariantFieldTypeName, strtod
// strings: "false", "true", "Invalid conversion : CString '%s' to bool\n", "No conversion from %s to bool now\n", "No conversion from %s to float now\n"
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_2423346, jpt_2423536, jpt_24236A6, jpt_24237E6
void __fastcall ActionRunner_OnItemCreated(CDOTA_Item_Physical *pDrop, const CEntityKeyValues *pKeyValues)
{
  CDOTA_Item *v4; // r13
  int m_nCount; // edx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // si
  __int64 v7; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v9; // rsi
  CEntityVariant *p_m_value; // rax
  float m_int; // xmm3_4
  __m128i v12; // xmm5
  float v13; // ebx
  const Vector *AbsOrigin; // rax
  unsigned int v15; // xmm0_4
  unsigned int v16; // xmm3_4
  int16 m_type; // cx
  char m_char; // r14
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v19; // si
  __int64 v20; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v21; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v22; // rsi
  CEntityVariant *v23; // rcx
  const char *m_uint64; // rax
  const char *v25; // rax
  int16 v26; // ax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v27; // si
  __int64 v28; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v29; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v30; // rsi
  CEntityVariant *v31; // rcx
  const char *v32; // rax
  int16 v33; // ax
  float m_float; // xmm4_4
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v35; // ax
  __int64 v36; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v37; // r8
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v38; // rdx
  CEntityVariant *v39; // rdx
  const char *v40; // rax
  __int64 v41; // rcx
  __m128d v42; // xmm0
  const char *v43; // rax
  int16 v44; // ax
  const char *v45; // rax
  __int64 v46; // rdx
  __m128d v47; // xmm0
  const char *v48; // rax
  Vector flHeight; // [rsp+0h] [rbp-50h]
  float v50; // [rsp+8h] [rbp-48h]
  float v51; // [rsp+8h] [rbp-48h]
  float v52; // [rsp+8h] [rbp-48h]
  QAngle angles; // [rsp+10h] [rbp-40h] BYREF
  __m128i forward[3]; // [rsp+20h] [rbp-30h] BYREF

  v4 = CEntityHandle::operator CEntityInstance *(&pDrop->m_hItem.m_Value);
  if ( v4 == 0 )
    return;
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_18:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_19;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v7 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v7) == 1794070201 )
      goto LABEL_10;
LABEL_7:
    if ( m_nCount <= ++v7 )
      goto LABEL_18;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v7] != 1794070201 )
    goto LABEL_7;
LABEL_10:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v9 = pKeyValues->m_keyValues.m_pElements;
  else
    v9 = 0;
  p_m_value = &v9[v7].m_value;
LABEL_19:
  m_type = p_m_value->m_type;
  switch ( m_type )
  {
    case 0:
      m_char = 0;
      break;
    case 1:
      m_char = p_m_value->m_float != 0.0;
      break;
    case 5:
    case 37:
      m_char = p_m_value->m_int != 0;
      break;
    case 6:
      m_char = p_m_value->m_char;
      break;
    case 26:
    case 33:
      m_char = p_m_value->m_uint64 != 0;
      break;
    case 30:
      m_uint64 = p_m_value->m_uint64;
      m_char = 0;
      if ( strcmp(m_uint64, "0") != 0 && strcmp(m_uint64, "false") != 0 && strcmp(m_uint64, "no") != 0 )
      {
        m_char = 1;
        if ( strcmp(m_uint64, "1") != 0 && strcmp(m_uint64, "true") != 0 && strcmp(m_uint64, "yes") != 0 )
        {
          Warning("Invalid conversion : CString '%s' to bool\n", m_uint64);
          m_char = 0;
          m_nCount = pKeyValues->m_keyHashes.m_nCount;
        }
      }
      break;
    case 34:
      m_char = p_m_value->m_float64 != 0.0;
      break;
    default:
      m_char = 0;
      v25 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to bool now\n", v25);
      m_nCount = pKeyValues->m_keyHashes.m_nCount;
      break;
  }
  if ( m_nCount <= 0 )
  {
LABEL_45:
    v23 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_46;
  }
  v19 = pKeyValues->m_keyHashes.m_nAllocated;
  v20 = 0;
  while ( 2 )
  {
    if ( v19 == 0 )
    {
      if ( *(4 * v20) == -1370813182 )
        break;
      goto LABEL_26;
    }
    v21 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v19 > 9 )
      v21 = pKeyValues->m_keyHashes.m_pElements;
    if ( v21[v20] != -1370813182 )
    {
LABEL_26:
      if ( m_nCount <= ++v20 )
        goto LABEL_45;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v22 = pKeyValues->m_keyValues.m_pElements;
  else
    v22 = 0;
  v23 = &v22[v20].m_value;
LABEL_46:
  v26 = v23->m_type;
  switch ( v26 )
  {
    case 0:
    case 1:
    case 5:
    case 6:
    case 26:
    case 33:
    case 34:
    case 37:
      break;
    case 30:
      strtod(v23->m_pszString, 0);
      m_nCount = pKeyValues->m_keyHashes.m_nCount;
      break;
    default:
      v32 = VariantFieldTypeName(v26);
      Warning("No conversion from %s to float now\n", v32);
      m_nCount = pKeyValues->m_keyHashes.m_nCount;
      break;
  }
  if ( m_nCount <= 0 )
  {
LABEL_60:
    v31 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_61;
  }
  v27 = pKeyValues->m_keyHashes.m_nAllocated;
  v28 = 0;
  while ( 2 )
  {
    if ( v27 == 0 )
    {
      if ( *(4 * v28) == -923668493 )
        break;
      goto LABEL_52;
    }
    v29 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v27 > 9 )
      v29 = pKeyValues->m_keyHashes.m_pElements;
    if ( v29[v28] != -923668493 )
    {
LABEL_52:
      if ( m_nCount <= ++v28 )
        goto LABEL_60;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v30 = pKeyValues->m_keyValues.m_pElements;
  else
    v30 = 0;
  v31 = &v30[v28].m_value;
LABEL_61:
  v33 = v31->m_type;
  switch ( v33 )
  {
    case 0:
      m_float = 0.0;
      break;
    case 1:
      m_float = v31->m_float;
      break;
    case 5:
      m_float = v31->m_int;
      break;
    case 6:
      m_float = v31->m_char;
      break;
    case 26:
      m_float = v31->m_uint64;
      break;
    case 30:
      v42.m128d_f64[0] = strtod(v31->m_pszString, 0);
      m_nCount = pKeyValues->m_keyHashes.m_nCount;
      m_float = _mm_movedup_pd(v42).m128d_f64[0];
      break;
    case 33:
      v40 = v31->m_uint64;
      if ( v31->m_int64 >= 0 )
        goto LABEL_75;
      v41 = v31->m_uint64 & 1 | (v31->m_uint64 >> 1);
      m_float = v41 + v41;
      break;
    case 34:
      m_float = v31->m_float64;
      break;
    case 37:
      LODWORD(v40) = v31->m_int;
LABEL_75:
      m_float = v40;
      break;
    default:
      v43 = VariantFieldTypeName(v33);
      Warning("No conversion from %s to float now\n", v43);
      m_nCount = pKeyValues->m_keyHashes.m_nCount;
      m_float = 0.0;
      break;
  }
  if ( m_nCount <= 0 )
  {
LABEL_85:
    v39 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_86;
  }
  v35 = pKeyValues->m_keyHashes.m_nAllocated;
  v36 = 0;
  while ( 2 )
  {
    if ( v35 == 0 )
    {
      if ( *(4 * v36) == -1392995358 )
        break;
      goto LABEL_68;
    }
    v37 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v35 > 9 )
      v37 = pKeyValues->m_keyHashes.m_pElements;
    if ( v37[v36] != -1392995358 )
    {
LABEL_68:
      if ( m_nCount <= ++v36 )
        goto LABEL_85;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v38 = pKeyValues->m_keyValues.m_pElements;
  else
    v38 = 0;
  v39 = &v38[v36].m_value;
LABEL_86:
  v44 = v39->m_type;
  switch ( v44 )
  {
    case 0:
      m_int = 0.0;
      break;
    case 1:
      m_int = v39->m_float;
      break;
    case 5:
      m_int = v39->m_int;
      break;
    case 6:
      m_int = v39->m_char;
      break;
    case 26:
      m_int = v39->m_uint64;
      break;
    case 30:
      v51 = m_float;
      v47.m128d_f64[0] = strtod(v39->m_pszString, 0);
      m_float = v51;
      m_int = _mm_movedup_pd(v47).m128d_f64[0];
      break;
    case 33:
      v45 = v39->m_uint64;
      if ( v39->m_int64 >= 0 )
        goto LABEL_88;
      v46 = v39->m_uint64 & 1 | (v39->m_uint64 >> 1);
      m_int = v46 + v46;
      break;
    case 34:
      m_int = v39->m_float64;
      break;
    case 37:
      LODWORD(v45) = v39->m_int;
LABEL_88:
      m_int = v45;
      break;
    default:
      v52 = m_float;
      v48 = VariantFieldTypeName(v44);
      Warning("No conversion from %s to float now\n", v48);
      m_int = 0.0;
      m_float = v52;
      break;
  }
  if ( m_char != 0 || m_float > 0.0 )
  {
    flHeight.x = m_float;
    v50 = m_int;
    angles.y = RandomFloat(0.0, 360.0);
    angles.x = 0.0;
    angles.z = 0.0;
    AngleVectors(&angles, forward, 0, 0);
    v12 = forward[0].m128i_u32[0];
    *v12.m128i_i32 = *forward[0].m128i_i32 * v50;
    v13 = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
    flHeight.y = *&forward[0].m128i_i32[1] * v50;
    flHeight.z = v50 * *&forward[0].m128i_i32[2];
    AbsOrigin = CBaseEntity::GetAbsOrigin(pDrop);
    *&v15 = flHeight.y + AbsOrigin->y;
    *&v16 = flHeight.z + AbsOrigin->z;
    *forward[0].m128i_i32 = v13 + AbsOrigin->x;
    *(forward[0].m128i_i64 + 4) = __PAIR64__(v16, v15);
    CDOTA_Item::LaunchLoot(v4, m_char, flHeight.x, *_mm_loadl_epi64(forward).m128i_i32, flHeight);
  }
}


// CDOTA_ActionRunner::PerformAction_CreateItem  (line 1114, @0x00000000024422e0, libserver.so)  // inlines: AddKeyValue<bool>, AddKeyValue<float>, AddKeyValue<unsigned int>, AddToTail, Base, Bind, CEntityHandle, CUtlDelegate, CUtlMemory, CUtlVector, CUtlVectorBase, Convert<FastDelegate2<CDOTA_Item_Physical*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_Item_Physical*, const CEntityKeyValues*, void>::*)(CDOTA_Item_Physical*, const CEntityKeyValues*)const, void (detail::GenericClass::*)()>, Element, FastDelegate2, FindKeyHash, Free, Get, GetActionCaster, GetBool, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, Init, NetworkStateChanged, QAngle, RandomYawVector, Set, SetPurchaseTime, SetValue<bool>, SetValue<float>, SetValue<unsigned int>, ToDOTABaseNPC, UtlMakeDelegate<CDOTA_Item_Physical*, const CEntityKeyValues*, void>, VectorMultiply, bindmemfunc<FastDelegate2<CDOTA_Item_Physical*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_Item_Physical*, const CEntityKeyValues*, void>::*)(CDOTA_Item_Physical*, const CEntityKeyValues*)const>, bindstaticfunc<FastDelegate2<CDOTA_Item_Physical*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_Item_Physical*, const CEntityKeyValues*, void>::*)(CDOTA_Item_Physical*, const CEntityKeyValues*)const>, operator CBaseEntity*, operator*, operator+=, operator=, operator=<float>, operator[], ~CUtlVector
// calls: KeyValues::GetString, KeyValues::FindKey, CDOTA_ActionRunner::SelectActionTargets, KeyValues::GetInt, CEntityHandle::operator CEntityInstance*, DOTA_CreateItem, CDOTA_Item::SetCurrentCharges, CEntityKeyValues::CEntityKeyValues, CreateItemOnPositionAsync, CEntityKeyValues::~CEntityKeyValues, CBaseEntity::GetAbsOrigin, RandomFloat (21 total)
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "SpawnRadius", "ItemChargeCount", "BelongsToCaster", "AutoUse", "LaunchHeight", "LaunchDistance" (9 total)
// globals: FastDelegate2<CDOTA_Item_Physical *,CEntityKeyValues const*,void>::InvokeStaticFunction(CDOTA_Item_Physical *,CEntityKeyValues const*), ActionRunner_OnItemCreated(CDOTA_Item_Physical *,CEntityKeyValues const*)
bool __fastcall CDOTA_ActionRunner::PerformAction_CreateItem(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  KeyValues *Key; // r12
  float (__fastcall *v4)(CDOTA_ActionRunner *const, const char *, double); // r12
  const char *String; // rax
  __int64 (__fastcall *v6)(CDOTA_ActionRunner *const, const char *, _QWORD); // r12
  const char *v7; // rax
  __int64 (__fastcall *v8)(CDOTA_ActionRunner *const, const char *, __int64); // r12
  const char *v9; // rax
  float (__fastcall *v10)(CDOTA_ActionRunner *const, const char *, double); // r12
  const char *v11; // rax
  float (__fastcall *v12)(CDOTA_ActionRunner *const, const char *, double); // r12
  const char *v13; // rax
  float (__fastcall *v14)(CDOTA_ActionRunner *const, const char *, double); // r12
  const char *v15; // rax
  CEntityInstance *v16; // rax
  const CBaseEntity *v17; // r15
  int v18; // r13d
  CDOTA_BaseNPC *m_pCaster; // rbx
  int v20; // edx
  CDOTA_Item *Item; // rax
  double v22; // xmm0_8
  double v23; // xmm1_8
  double v24; // xmm2_8
  CDOTA_Item *v25; // rbx
  __int16 v26; // cx
  CEntityIdentity *m_pEntity; // rax
  int v28; // r14d
  __int16 v29; // si
  const Vector *AbsOrigin; // rax
  int v31; // eax
  __int64 v33; // rax
  unsigned __int8 *v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  unsigned __int8 *v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r14
  unsigned __int8 *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int16 v47; // cx
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned __int8 *v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r14
  unsigned __int8 *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int16 v58; // cx
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned __int8 *v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // r14
  unsigned __int8 *v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int16 v69; // cx
  __int64 v70; // rax
  __int64 v71; // rax
  unsigned __int8 *v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // r14
  unsigned __int8 *v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int16 v80; // cx
  __int64 v81; // rax
  __int16 v82; // cx
  unsigned __int8 *v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int16 v86; // cx
  __int64 v87; // rax
  bool v88; // zf
  __int16 v89; // ax
  __int16 v90; // ax
  __int16 v91; // ax
  __int16 v92; // ax
  __int16 v93; // ax
  const char *Name; // r13
  const char *v95; // rax
  _BYTE v96[24]; // [rsp+0h] [rbp-170h]
  float v97; // [rsp+18h] [rbp-158h]
  float flLaunchDistance; // [rsp+1Ch] [rbp-154h]
  __int64 i; // [rsp+20h] [rbp-150h]
  float flLaunchHeight; // [rsp+38h] [rbp-138h]
  int nChargeCount; // [rsp+3Ch] [rbp-134h]
  const char *pszItemName; // [rsp+40h] [rbp-130h]
  int Int; // [rsp+48h] [rbp-128h]
  int nItemCount; // [rsp+4Ch] [rbp-124h]
  float flSpawnRadius; // [rsp+50h] [rbp-120h]
  float thisPos; // [rsp+54h] [rbp-11Ch]
  __int64 thisPos_4; // [rsp+58h] [rbp-118h]
  QAngle angles; // [rsp+70h] [rbp-100h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > targets; // [rsp+80h] [rbp-F0h] BYREF
  CEntityKeyValues pExtraKeyValues; // [rsp+A0h] [rbp-D0h] BYREF
  __int16 v112; // [rsp+112h] [rbp-5Eh]
  unsigned __int64 v113; // [rsp+138h] [rbp-38h]
  Vector v114; // 0:xmm0_8.8,8:xmm1_4.4

  v113 = __readfsqword(0x28u);
  pszItemName = KeyValues::GetString(pKV, "ItemName", 0, 0, 0);
  if ( pszItemName != 0 )
  {
    Key = KeyValues::FindKey(pKV, "Target", 0);
    if ( Key == 0 )
    {
      Name = KeyValues::GetName(pKV);
      v95 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
      DevMsg("%s - no Target specified for %s.", v95, Name);
    }
    targets.m_Size = 0;
    targets.m_Memory.m_pMemory = 0;
    targets.m_Memory.m_nAllocationCount = 0;
    targets.m_Memory.m_nGrowSize = 0;
    *v96 = &targets;
    CDOTA_ActionRunner::SelectActionTargets(this, &targets, Key);
    if ( targets.m_Size != 0 )
    {
      v4 = *(this->_vptr_CDOTA_ActionRunner + 2);
      String = KeyValues::GetString(pKV, "SpawnRadius", 0, 0, 0);
      flSpawnRadius = v4(this, String, 0.0);
      v6 = *(this->_vptr_CDOTA_ActionRunner + 1);
      v7 = KeyValues::GetString(pKV, "ItemChargeCount", 0, 0, 0);
      nChargeCount = v6(this, v7, 0);
      v8 = *(this->_vptr_CDOTA_ActionRunner + 1);
      v9 = KeyValues::GetString(pKV, "ItemCount", 0, 0, 0);
      nItemCount = v8(this, v9, 1);
      Int = KeyValues::GetInt(pKV, "BelongsToCaster", 0);
      v96[23] = KeyValues::GetInt(pKV, "AutoUse", 0) != 0;
      v10 = *(this->_vptr_CDOTA_ActionRunner + 2);
      v11 = KeyValues::GetString(pKV, "LaunchHeight", 0, 0, 0);
      flLaunchHeight = v10(this, v11, 0.0);
      v12 = *(this->_vptr_CDOTA_ActionRunner + 2);
      v13 = KeyValues::GetString(pKV, "LaunchDistance", 0, 0, 0);
      flLaunchDistance = v12(this, v13, 0.0);
      v14 = *(this->_vptr_CDOTA_ActionRunner + 2);
      v15 = KeyValues::GetString(pKV, "LaunchDuration", 0, 0, 0);
      v97 = v14(this, v15, 0.0);
      if ( targets.m_Size > 0 )
      {
        i = 0;
        while ( 1 )
        {
          v16 = CEntityHandle::operator CEntityInstance *(&targets.m_Memory.m_pMemory[i]);
          v17 = v16;
          if ( v16 != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 && nItemCount > 0 )
            break;
LABEL_28:
          v31 = i++;
          if ( targets.m_Size <= v31 + 1 )
            goto LABEL_29;
        }
        v18 = 0;
LABEL_24:
        AbsOrigin = CBaseEntity::GetAbsOrigin(v17);
        LODWORD(thisPos_4) = *&AbsOrigin->x;
        HIDWORD(thisPos_4) = LODWORD(AbsOrigin->y);
        thisPos = AbsOrigin->z;
        if ( flSpawnRadius > 0.0 )
        {
          angles.y = RandomFloat(0.0, 360.0);
          angles.x = 0.0;
          angles.z = 0.0;
          AngleVectors(&angles, &pExtraKeyValues, 0, 0);
          *&thisPos_4 = (*&pExtraKeyValues.m_keyHashes.0 * flSpawnRadius) + *&thisPos_4;
          *(&thisPos_4 + 1) = (*(&pExtraKeyValues.m_keyHashes.m_nAllocAllocated + 1) * flSpawnRadius)
                            + *(&thisPos_4 + 1);
          thisPos = (flSpawnRadius * *&pExtraKeyValues.m_keyHashes.m_pElements) + thisPos;
        }
        if ( Int != 0 )
        {
          m_pCaster = this->m_pCaster;
          if ( m_pCaster == 0 )
          {
            v20 = -1;
            goto LABEL_13;
          }
        }
        else
        {
          m_pCaster = v17;
        }
        v20 = (*(m_pCaster->_vptr_IHandleEntity + 414))(m_pCaster);
LABEL_13:
        Item = DOTA_CreateItem(pszItemName, m_pCaster, v20);
        v25 = Item;
        if ( Item == 0 )
          goto LABEL_23;
        if ( Item->m_flPurchaseTime.m_Value != 0.0 )
        {
          (*(Item->_vptr_IHandleEntity + 22))(Item, 964, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v22, v23, v24, 0.0);
          v25->m_flPurchaseTime.m_Value = 0.0;
        }
        CDOTA_Item::SetCurrentCharges(v25, nChargeCount);
        CEntityKeyValues::CEntityKeyValues((&pExtraKeyValues.m_keyHashes.2 + 2));
        v26 = v112;
        if ( v112 > 0 )
          goto LABEL_17;
        if ( *(&pExtraKeyValues.m_keyHashes.2 + 16) <= 0 )
        {
LABEL_55:
          CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr((&pExtraKeyValues.m_keyHashes.2 + 2));
          LOWORD(v43) = *(&pExtraKeyValues.m_keyHashes.2 + 16) - 1;
          if ( *(&pExtraKeyValues.m_keyHashes.2 + 17) != 0 )
          {
            v44 = &pExtraKeyValues.m_keyHashes.m_FixedAlloc.m_Data[32];
            if ( *(&pExtraKeyValues.m_keyHashes.2 + 17) >= 0xA )
              v44 = *&pExtraKeyValues.m_keyValues.m_nCount;
          }
          else
          {
            v44 = 0;
          }
          v43 = v43;
          *&v44[4 * v43] = 1794070201;
          CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&pExtraKeyValues.m_pComplexKeys);
          if ( WORD1(pExtraKeyValues.m_pComplexKeys) != 0 )
            v45 = *&pExtraKeyValues.m_nRefCount;
          else
            v45 = 0;
          v46 = 24 * v43 + v45;
          v47 = *(v46 + 10);
          if ( (v47 & 1) != 0 )
            *(v46 + 10) = v47 & 0xFFFE;
          *v46 = 0;
          *(v46 + 8) = 6;
          *v46 = v96[23];
          if ( WORD1(pExtraKeyValues.m_pComplexKeys) != 0 )
            v48 = *&pExtraKeyValues.m_nRefCount;
          else
            v48 = 0;
          *(v48 + 24 * v43 + 16) = 0;
          v26 = v112;
          goto LABEL_65;
        }
        v38 = 0;
        while ( 1 )
        {
          if ( *(&pExtraKeyValues.m_keyHashes.2 + 17) != 0 )
          {
            v39 = &pExtraKeyValues.m_keyHashes.m_FixedAlloc.m_Data[32];
            if ( *(&pExtraKeyValues.m_keyHashes.2 + 17) > 9 )
              v39 = *&pExtraKeyValues.m_keyValues.m_nCount;
            if ( *&v39[4 * v38] == 1794070201 )
            {
LABEL_51:
              if ( WORD1(pExtraKeyValues.m_pComplexKeys) != 0 )
              {
                v40 = *&pExtraKeyValues.m_nRefCount;
                v41 = 24 * v38;
                v42 = *&pExtraKeyValues.m_nRefCount + v41;
                if ( *(*&pExtraKeyValues.m_nRefCount + v41 + 16) != 0 )
                  goto LABEL_53;
LABEL_149:
                v90 = *(v42 + 10);
                if ( (v90 & 1) != 0 )
                  *(v42 + 10) = v90 & 0xFFFE;
                *v42 = 0;
                *(v42 + 8) = 6;
                *v42 = v96[23];
              }
              else
              {
                v40 = 0;
                v88 = *(&stru_10.m_Lock.gap0 + 3 * v38) == 0;
                v42 = 24 * v38;
                v41 = 24 * v38;
                if ( v88 )
                  goto LABEL_149;
LABEL_53:
                Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", *(v40 + v41 + 16));
              }
              v26 = v112;
LABEL_65:
              if ( v26 > 0 )
                goto LABEL_17;
              if ( *(&pExtraKeyValues.m_keyHashes.2 + 16) <= 0 )
              {
LABEL_78:
                CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr((&pExtraKeyValues.m_keyHashes.2 + 2));
                LOWORD(v54) = *(&pExtraKeyValues.m_keyHashes.2 + 16) - 1;
                if ( *(&pExtraKeyValues.m_keyHashes.2 + 17) != 0 )
                {
                  v55 = &pExtraKeyValues.m_keyHashes.m_FixedAlloc.m_Data[32];
                  if ( *(&pExtraKeyValues.m_keyHashes.2 + 17) >= 0xA )
                    v55 = *&pExtraKeyValues.m_keyValues.m_nCount;
                }
                else
                {
                  v55 = 0;
                }
                v54 = v54;
                *&v55[4 * v54] = -1370813182;
                CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&pExtraKeyValues.m_pComplexKeys);
                if ( WORD1(pExtraKeyValues.m_pComplexKeys) != 0 )
                  v56 = *&pExtraKeyValues.m_nRefCount;
                else
                  v56 = 0;
                v57 = 24 * v54 + v56;
                v58 = *(v57 + 10);
                if ( (v58 & 1) != 0 )
                  *(v57 + 10) = v58 & 0xFFFE;
                *v57 = 0;
                *(v57 + 8) = 1;
                *v57 = flLaunchHeight;
                if ( WORD1(pExtraKeyValues.m_pComplexKeys) != 0 )
                  v59 = *&pExtraKeyValues.m_nRefCount;
                else
                  v59 = 0;
                *(v59 + 24 * v54 + 16) = 0;
                v26 = v112;
                goto LABEL_88;
              }
              v49 = 0;
              while ( 2 )
              {
                if ( *(&pExtraKeyValues.m_keyHashes.2 + 17) == 0 )
                {
                  if ( *(4 * v49) == -1370813182 )
                    break;
                  goto LABEL_71;
                }
                v50 = &pExtraKeyValues.m_keyHashes.m_FixedAlloc.m_Data[32];
                if ( *(&pExtraKeyValues.m_keyHashes.2 + 17) > 9 )
                  v50 = *&pExtraKeyValues.m_keyValues.m_nCount;
                if ( *&v50[4 * v49] != -1370813182 )
                {
LABEL_71:
                  if ( *(&pExtraKeyValues.m_keyHashes.2 + 16) <= ++v49 )
                    goto LABEL_78;
                  continue;
                }
                break;
              }
              if ( WORD1(pExtraKeyValues.m_pComplexKeys) != 0 )
              {
                v51 = *&pExtraKeyValues.m_nRefCount;
                v52 = 24 * v49;
                v53 = *&pExtraKeyValues.m_nRefCount + v52;
                if ( *(*&pExtraKeyValues.m_nRefCount + v52 + 16) != 0 )
                  goto LABEL_76;
LABEL_157:
                v92 = *(v53 + 10);
                if ( (v92 & 1) != 0 )
                  *(v53 + 10) = v92 & 0xFFFE;
                *v53 = 0;
                *(v53 + 8) = 1;
                *v53 = flLaunchHeight;
              }
              else
              {
                v51 = 0;
                v88 = *(&stru_10.m_Lock.gap0 + 3 * v49) == 0;
                v53 = 24 * v49;
                v52 = 24 * v49;
                if ( v88 )
                  goto LABEL_157;
LABEL_76:
                Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", *(v51 + v52 + 16));
              }
              v26 = v112;
LABEL_88:
              if ( v26 > 0 )
                goto LABEL_17;
              if ( *(&pExtraKeyValues.m_keyHashes.2 + 16) <= 0 )
              {
LABEL_101:
                CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr((&pExtraKeyValues.m_keyHashes.2 + 2));
                LOWORD(v65) = *(&pExtraKeyValues.m_keyHashes.2 + 16) - 1;
                if ( *(&pExtraKeyValues.m_keyHashes.2 + 17) != 0 )
                {
                  v66 = &pExtraKeyValues.m_keyHashes.m_FixedAlloc.m_Data[32];
                  if ( *(&pExtraKeyValues.m_keyHashes.2 + 17) >= 0xA )
                    v66 = *&pExtraKeyValues.m_keyValues.m_nCount;
                }
                else
                {
                  v66 = 0;
                }
                v65 = v65;
                *&v66[4 * v65] = -923668493;
                CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&pExtraKeyValues.m_pComplexKeys);
                if ( WORD1(pExtraKeyValues.m_pComplexKeys) != 0 )
                  v67 = *&pExtraKeyValues.m_nRefCount;
                else
                  v67 = 0;
                v68 = 24 * v65 + v67;
                v69 = *(v68 + 10);
                if ( (v69 & 1) != 0 )
                  *(v68 + 10) = v69 & 0xFFFE;
                *v68 = 0;
                *(v68 + 8) = 1;
                *v68 = v97;
                if ( WORD1(pExtraKeyValues.m_pComplexKeys) != 0 )
                  v70 = *&pExtraKeyValues.m_nRefCount;
                else
                  v70 = 0;
                *(v70 + 24 * v65 + 16) = 0;
                v26 = v112;
                goto LABEL_111;
              }
              v60 = 0;
              while ( 2 )
              {
                if ( *(&pExtraKeyValues.m_keyHashes.2 + 17) == 0 )
                {
                  if ( *(4 * v60) == -923668493 )
                    break;
                  goto LABEL_94;
                }
                v61 = &pExtraKeyValues.m_keyHashes.m_FixedAlloc.m_Data[32];
                if ( *(&pExtraKeyValues.m_keyHashes.2 + 17) > 9 )
                  v61 = *&pExtraKeyValues.m_keyValues.m_nCount;
                if ( *&v61[4 * v60] != -923668493 )
                {
LABEL_94:
                  if ( *(&pExtraKeyValues.m_keyHashes.2 + 16) <= ++v60 )
                    goto LABEL_101;
                  continue;
                }
                break;
              }
              if ( WORD1(pExtraKeyValues.m_pComplexKeys) != 0 )
              {
                v62 = *&pExtraKeyValues.m_nRefCount;
                v63 = 24 * v60;
                v64 = *&pExtraKeyValues.m_nRefCount + v63;
                if ( *(*&pExtraKeyValues.m_nRefCount + v63 + 16) != 0 )
                  goto LABEL_99;
LABEL_153:
                v91 = *(v64 + 10);
                if ( (v91 & 1) != 0 )
                  *(v64 + 10) = v91 & 0xFFFE;
                *v64 = 0;
                *(v64 + 8) = 1;
                *v64 = v97;
              }
              else
              {
                v62 = 0;
                v88 = *(&stru_10.m_Lock.gap0 + 3 * v60) == 0;
                v64 = 24 * v60;
                v63 = 24 * v60;
                if ( v88 )
                  goto LABEL_153;
LABEL_99:
                Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", *(v62 + v63 + 16));
              }
              v26 = v112;
LABEL_111:
              if ( v26 > 0 )
                goto LABEL_17;
              if ( *(&pExtraKeyValues.m_keyHashes.2 + 16) <= 0 )
              {
LABEL_124:
                CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr((&pExtraKeyValues.m_keyHashes.2 + 2));
                LOWORD(v76) = *(&pExtraKeyValues.m_keyHashes.2 + 16) - 1;
                if ( *(&pExtraKeyValues.m_keyHashes.2 + 17) != 0 )
                {
                  v77 = &pExtraKeyValues.m_keyHashes.m_FixedAlloc.m_Data[32];
                  if ( *(&pExtraKeyValues.m_keyHashes.2 + 17) >= 0xA )
                    v77 = *&pExtraKeyValues.m_keyValues.m_nCount;
                }
                else
                {
                  v77 = 0;
                }
                v76 = v76;
                *&v77[4 * v76] = -1392995358;
                CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&pExtraKeyValues.m_pComplexKeys);
                if ( WORD1(pExtraKeyValues.m_pComplexKeys) != 0 )
                  v78 = *&pExtraKeyValues.m_nRefCount;
                else
                  v78 = 0;
                v79 = 24 * v76 + v78;
                v80 = *(v79 + 10);
                if ( (v80 & 1) != 0 )
                  *(v79 + 10) = v80 & 0xFFFE;
                *v79 = 0;
                *(v79 + 8) = 1;
                *v79 = flLaunchDistance;
                if ( WORD1(pExtraKeyValues.m_pComplexKeys) != 0 )
                  v81 = *&pExtraKeyValues.m_nRefCount;
                else
                  v81 = 0;
                *(v81 + 24 * v76 + 16) = 0;
                v26 = v112;
                goto LABEL_17;
              }
              v71 = 0;
              while ( 2 )
              {
                if ( *(&pExtraKeyValues.m_keyHashes.2 + 17) == 0 )
                {
                  if ( *(4 * v71) == -1392995358 )
                    break;
                  goto LABEL_117;
                }
                v72 = &pExtraKeyValues.m_keyHashes.m_FixedAlloc.m_Data[32];
                if ( *(&pExtraKeyValues.m_keyHashes.2 + 17) > 9 )
                  v72 = *&pExtraKeyValues.m_keyValues.m_nCount;
                if ( *&v72[4 * v71] != -1392995358 )
                {
LABEL_117:
                  if ( *(&pExtraKeyValues.m_keyHashes.2 + 16) <= ++v71 )
                    goto LABEL_124;
                  continue;
                }
                break;
              }
              if ( WORD1(pExtraKeyValues.m_pComplexKeys) != 0 )
              {
                v73 = *&pExtraKeyValues.m_nRefCount;
                v74 = 24 * v71;
                v75 = *&pExtraKeyValues.m_nRefCount + v74;
                if ( *(*&pExtraKeyValues.m_nRefCount + v74 + 16) != 0 )
                  goto LABEL_122;
LABEL_145:
                v89 = *(v75 + 10);
                if ( (v89 & 1) != 0 )
                  *(v75 + 10) = v89 & 0xFFFE;
                *v75 = 0;
                *(v75 + 8) = 1;
                *v75 = flLaunchDistance;
              }
              else
              {
                v73 = 0;
                v88 = *(&stru_10.m_Lock.gap0 + 3 * v71) == 0;
                v75 = 24 * v71;
                v74 = 24 * v71;
                if ( v88 )
                  goto LABEL_145;
LABEL_122:
                Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", *(v73 + v74 + 16));
              }
              v26 = v112;
LABEL_17:
              m_pEntity = v25->m_pEntity;
              v28 = -1;
              if ( m_pEntity != 0 )
              {
                v29 = 0x7FFF;
                if ( m_pEntity->m_EHandle.m_Index != -1 )
                  v29 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                v28 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v29 & 0x7FFF;
                pExtraKeyValues.m_keyHashes.0 = v28;
              }
              if ( v26 > 0 )
                goto LABEL_22;
              if ( *(&pExtraKeyValues.m_keyHashes.2 + 16) <= 0 )
              {
LABEL_134:
                CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr((&pExtraKeyValues.m_keyHashes.2 + 2));
                v82 = *(&pExtraKeyValues.m_keyHashes.2 + 16) - 1;
                if ( *(&pExtraKeyValues.m_keyHashes.2 + 17) != 0 )
                {
                  v83 = &pExtraKeyValues.m_keyHashes.m_FixedAlloc.m_Data[32];
                  if ( *(&pExtraKeyValues.m_keyHashes.2 + 17) >= 0xA )
                    v83 = *&pExtraKeyValues.m_keyValues.m_nCount;
                }
                else
                {
                  v83 = 0;
                }
                *&v83[4 * v82] = 830970602;
                *&v96[8] = v82;
                CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&pExtraKeyValues.m_pComplexKeys);
                if ( WORD1(pExtraKeyValues.m_pComplexKeys) != 0 )
                  v84 = *&pExtraKeyValues.m_nRefCount;
                else
                  v84 = 0;
                v85 = 24LL * *&v96[8] + v84;
                v86 = *(v85 + 10);
                if ( (v86 & 1) != 0 )
                  *(v85 + 10) = v86 & 0xFFFE;
                *v85 = 0;
                *(v85 + 8) = 37;
                *v85 = v28;
                if ( WORD1(pExtraKeyValues.m_pComplexKeys) != 0 )
                  v87 = *&pExtraKeyValues.m_nRefCount;
                else
                  v87 = 0;
                *(v87 + 24LL * *&v96[8] + 16) = 0;
                goto LABEL_22;
              }
              v33 = 0;
              while ( 2 )
              {
                if ( *(&pExtraKeyValues.m_keyHashes.2 + 17) == 0 )
                {
                  if ( *(4 * v33) == 830970602 )
                    break;
                  goto LABEL_37;
                }
                v34 = &pExtraKeyValues.m_keyHashes.m_FixedAlloc.m_Data[32];
                if ( *(&pExtraKeyValues.m_keyHashes.2 + 17) > 9 )
                  v34 = *&pExtraKeyValues.m_keyValues.m_nCount;
                if ( *&v34[4 * v33] != 830970602 )
                {
LABEL_37:
                  if ( *(&pExtraKeyValues.m_keyHashes.2 + 16) <= ++v33 )
                    goto LABEL_134;
                  continue;
                }
                break;
              }
              if ( WORD1(pExtraKeyValues.m_pComplexKeys) != 0 )
              {
                v35 = *&pExtraKeyValues.m_nRefCount;
                v36 = 24 * v33;
                v37 = *&pExtraKeyValues.m_nRefCount + v36;
                if ( *(*&pExtraKeyValues.m_nRefCount + v36 + 16) != 0 )
                  goto LABEL_42;
LABEL_161:
                v93 = *(v37 + 10);
                if ( (v93 & 1) != 0 )
                  *(v37 + 10) = v93 & 0xFFFE;
                *v37 = 0;
                *(v37 + 8) = 37;
                *v37 = v28;
              }
              else
              {
                v35 = 0;
                v88 = *(&stru_10.m_Lock.gap0 + 3 * v33) == 0;
                v37 = 24 * v33;
                v36 = 24 * v33;
                if ( v88 )
                  goto LABEL_161;
LABEL_42:
                Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", *(v35 + v36 + 16));
              }
LABEL_22:
              *(&pExtraKeyValues.m_keyHashes.2 + 2) = 0;
              *&v114.x = thisPos_4;
              pExtraKeyValues.m_keyHashes.m_pElements = FastDelegate2<CDOTA_Item_Physical *,CEntityKeyValues const*,void>::InvokeStaticFunction;
              v114.z = thisPos;
              *&pExtraKeyValues.m_keyHashes.m_nCount = ActionRunner_OnItemCreated;
              CreateItemOnPositionAsync(v114, v25, *v96, &pExtraKeyValues);
              CEntityKeyValues::~CEntityKeyValues((&pExtraKeyValues.m_keyHashes.2 + 2));
LABEL_23:
              if ( ++v18 == nItemCount )
                goto LABEL_28;
              goto LABEL_24;
            }
          }
          else if ( *(4 * v38) == 1794070201 )
          {
            goto LABEL_51;
          }
          if ( *(&pExtraKeyValues.m_keyHashes.2 + 16) <= ++v38 )
            goto LABEL_55;
        }
      }
    }
LABEL_29:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(*v96);
  }
  return 0;
}


// CDOTA_ActionRunner::PerformAction_CreateThinker  (line 1175, @0x000000000243ea30, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, DistToSqr, FStrEq, Get, GetActionCaster, GetActionTeamNumber, GetInstance, GetTeamNumber, LengthSqr, Purge, VectorSubtract, _V_strcmp, operator-, operator->, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: KeyValues::GetString, CBaseEntity::GetAbsOrigin, KeyValues::FindKey, CDOTA_ActionRunner::SelectActionTargets, CEntityHandle::operator CEntityInstance*, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, KeyValues::KeyValues, Thinker_Create, KeyValues::~KeyValues, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, VectorAngles, CFmtStrN<256, false>::CFmtStrN (16 total)
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "CreateThinker", "CreateThinkerSecondary"
bool __fastcall CDOTA_ActionRunner::PerformAction_CreateThinker(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  const char *String; // r13
  const Vector *AbsOrigin; // rax
  KeyValues *Key; // r14
  const char *v7; // rax
  const CBaseEntity *v8; // rax
  const Vector *v9; // rax
  const Vector *v10; // rax
  CDOTA_BaseNPC *m_pCaster; // rax
  int m_Value; // r15d
  CDOTABaseAbility *v13; // rax
  const CModifierParams *m_pEventContext; // rax
  const Vector *v16; // rax
  float v17; // xmm0_4
  int v18; // xmm2_4
  float vOrigin; // [rsp+14h] [rbp-1DCh]
  float y; // [rsp+18h] [rbp-1D8h]
  float x; // [rsp+1Ch] [rbp-1D4h]
  QAngle faceTargetAngles; // [rsp+30h] [rbp-1C0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > targets; // [rsp+40h] [rbp-1B0h] BYREF
  KeyValues modifierKV; // [rsp+60h] [rbp-190h] BYREF
  KeyValues thinkerKV; // [rsp+80h] [rbp-170h] BYREF
  CFmtStrN<256,false> v26; // [rsp+A0h] [rbp-150h] BYREF
  unsigned __int64 v27; // [rsp+1B8h] [rbp-38h]
  Vector v28; // 0:xmm0_8.8,8:xmm1_4.4

  v27 = __readfsqword(0x28u);
  String = KeyValues::GetString(pKV, "ModifierName", 0, 0, 0);
  if ( String == 0 )
    return 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(this->m_pCaster);
  x = AbsOrigin->x;
  y = AbsOrigin->y;
  vOrigin = AbsOrigin->z;
  Key = KeyValues::FindKey(pKV, "Target", 0);
  if ( Key == 0 )
  {
    targets.m_Size = 0;
    targets.m_Memory.m_pMemory = 0;
    targets.m_Memory.m_nAllocationCount = 0;
    targets.m_Memory.m_nGrowSize = 0;
LABEL_7:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&targets);
    if ( (targets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&targets.m_Memory);
      if ( (targets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&targets.m_Memory);
    }
    goto LABEL_8;
  }
  v7 = KeyValues::GetString(pKV, "Target", "", 0, 0);
  if ( v7 != "POINT" && strcmp("POINT", v7) != 0 )
  {
    targets.m_Size = 0;
    targets.m_Memory.m_pMemory = 0;
    targets.m_Memory.m_nAllocationCount = 0;
    targets.m_Memory.m_nGrowSize = 0;
    CDOTA_ActionRunner::SelectActionTargets(this, &targets, Key);
    if ( targets.m_Size != 0 )
    {
      v8 = CEntityHandle::operator CEntityInstance *(targets.m_Memory.m_pMemory);
      v9 = CBaseEntity::GetAbsOrigin(v8);
      x = v9->x;
      vOrigin = v9->z;
      y = v9->y;
    }
    goto LABEL_7;
  }
  m_pEventContext = this->m_pEventContext;
  x = m_pEventContext->vNewLoc.x;
  y = m_pEventContext->vNewLoc.y;
  vOrigin = m_pEventContext->vNewLoc.z;
LABEL_8:
  KeyValues::KeyValues(&modifierKV, "CreateThinker");
  if ( (*(this->_vptr_CDOTA_ActionRunner + 7))(this, &modifierKV, String) != 0 )
  {
    KeyValues::KeyValues(&thinkerKV, "CreateThinkerSecondary");
    v10 = CBaseEntity::GetAbsOrigin(this->m_pCaster);
    if ( ((((x - v10->x) * (x - v10->x)) + ((y - v10->y) * (y - v10->y))) + ((vOrigin - v10->z) * (vOrigin - v10->z))) > 0.1 )
    {
      v16 = CBaseEntity::GetAbsOrigin(this->m_pCaster);
      v17 = vOrigin - v16->z;
      *&v18 = x - v16->x;
      *(&targets.m_Size + 1) = y - v16->y;
      *&targets.m_Memory.m_pMemory = v17;
      targets.m_Size = v18;
      VectorAngles(&targets, &faceTargetAngles);
      CFmtStrN<256,false>::CFmtStrN(&v26, "%f %f %f", faceTargetAngles.x, faceTargetAngles.y, faceTargetAngles.z);
      KeyValues::SetString(&thinkerKV, "angles", v26.m_szBuf);
    }
    m_pCaster = this->m_pCaster;
    if ( m_pCaster != 0 )
      m_Value = m_pCaster->m_iTeamNum.m_Value;
    else
      m_Value = 0;
    v13 = (*(this->_vptr_CDOTA_ActionRunner + 8))(this);
    *&v28.x = __PAIR64__(LODWORD(y), LODWORD(x));
    v28.z = vOrigin;
    Thinker_Create(this->m_pCaster, v13, String, &modifierKV, v28, m_Value, 0, 1, &thinkerKV);
    KeyValues::~KeyValues(&thinkerKV);
  }
  KeyValues::~KeyValues(&modifierKV);
  return 0;
}


// CDOTA_ActionRunner::PerformAction_CreateThinkerWall  (line 1214, @0x000000000243eea0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FStrEq, Get, GetActionCaster, GetActionTeamNumber, GetInstance, GetTeamNumber, NormalizeInPlace, Vector, VectorDivide, VectorMultiply, VectorRotate, VectorSubtract, _V_strcmp, operator*, operator+=, operator-, operator-=, operator->, operator/, operator=, ~CUtlVector
// calls: KeyValues::GetString, CBaseEntity::GetAbsOrigin, KeyValues::FindKey, CDOTA_ActionRunner::SelectActionTargets, CEntityHandle::operator CEntityInstance*, VectorNormalize, CBaseEntity::GetAbsAngles, AngleVectors, VectorVectors, MatrixBuildRotationAboutAxis, VectorRotate, KeyValues::KeyValues (19 total)
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "CreateThinker", "%s - Thinker wall has invalid or unspecified radius or length for %s!", "CreateThinkerWall"
bool __fastcall CDOTA_ActionRunner::PerformAction_CreateThinkerWall(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  const char *String; // r15
  float (__fastcall *v5)(CDOTA_ActionRunner *const, const char *, double); // r13
  const char *v6; // rax
  float (__fastcall *v7)(CDOTA_ActionRunner *const, const char *, double); // r13
  const char *v8; // rax
  void (__fastcall *v9)(CDOTA_ActionRunner *const, const char *, double); // r13
  const char *v10; // rax
  const Vector *AbsOrigin; // rax
  KeyValues *Key; // r13
  const char *v13; // rax
  const CBaseEntity *v14; // rax
  const Vector *v15; // rax
  const Vector *v16; // rax
  vec_t v17; // xmm0_4
  vec_t v18; // xmm1_4
  const QAngle *AbsAngles; // rax
  float v20; // xmm1_4
  vec_t x; // r14d
  CDOTA_BaseNPC *m_pCaster; // rax
  int m_Value; // r12d
  CDOTABaseAbility *v24; // rax
  CDOTA_BaseNPC *v25; // rdi
  float v26; // xmm5_4
  int v27; // r14d
  float v28; // xmm7_4
  int v29; // r12d
  CDOTABaseAbility *v30; // rax
  CDOTA_BaseNPC *v31; // rdi
  CDOTA_BaseNPC *v32; // rax
  const char *Name; // r13
  const char *v35; // rax
  const CModifierParams *m_pEventContext; // rax
  int v37; // r12d
  int v38; // r14d
  CDOTABaseAbility *v39; // rax
  CDOTA_BaseNPC *v40; // rdi
  CDOTA_BaseNPC *v41; // rax
  float z; // [rsp+18h] [rbp-128h]
  float v43; // [rsp+18h] [rbp-128h]
  float v44; // [rsp+1Ch] [rbp-124h]
  float v45; // [rsp+20h] [rbp-120h]
  int v46; // [rsp+24h] [rbp-11Ch]
  float vOrigin; // [rsp+28h] [rbp-118h]
  __int64 v48; // [rsp+2Ch] [rbp-114h]
  float y; // [rsp+34h] [rbp-10Ch]
  float v50; // [rsp+34h] [rbp-10Ch]
  float flWallLength; // [rsp+38h] [rbp-108h]
  float flWallLengtha; // [rsp+38h] [rbp-108h]
  float flWallWidth; // [rsp+3Ch] [rbp-104h]
  float flWallWidtha; // [rsp+3Ch] [rbp-104h]
  Vector vCastDir; // [rsp+40h] [rbp-100h] BYREF
  Vector right; // [rsp+50h] [rbp-F0h] BYREF
  Vector up; // [rsp+60h] [rbp-E0h] BYREF
  Vector vResult; // [rsp+70h] [rbp-D0h] BYREF
  Vector vRotationAxis; // [rsp+80h] [rbp-C0h] BYREF
  Vector v60; // [rsp+90h] [rbp-B0h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > targets; // [rsp+A0h] [rbp-A0h] BYREF
  matrix3x4_t matRot; // [rsp+C0h] [rbp-80h] BYREF
  KeyValues kv; // [rsp+F0h] [rbp-50h] BYREF
  unsigned __int64 v64; // [rsp+108h] [rbp-38h]
  Vector v65; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v66; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v67; // 0:xmm0_8.8,8:xmm1_4.4

  v64 = __readfsqword(0x28u);
  String = KeyValues::GetString(pKV, "ModifierName", 0, 0, 0);
  if ( String != 0 && (*(this->_vptr_CDOTA_ActionRunner + 8))(this) != 0 )
  {
    v5 = *(this->_vptr_CDOTA_ActionRunner + 2);
    v6 = KeyValues::GetString(pKV, "Width", 0, 0, 0);
    flWallWidth = v5(this, v6, 0.0);
    v7 = *(this->_vptr_CDOTA_ActionRunner + 2);
    v8 = KeyValues::GetString(pKV, "Length", 0, 0, 0);
    flWallLength = v7(this, v8, 0.0);
    v9 = *(this->_vptr_CDOTA_ActionRunner + 2);
    v10 = KeyValues::GetString(pKV, "Rotation", 0, 0, 0);
    v9(this, v10, 0.0);
    if ( flWallWidth <= 0.0 || flWallLength <= 0.0 )
    {
      Name = KeyValues::GetName(pKV);
      v35 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
      DevMsg("%s - Thinker wall has invalid or unspecified radius or length for %s!", v35, Name);
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(this->m_pCaster);
    v48 = *&AbsOrigin->x;
    vOrigin = AbsOrigin->z;
    Key = KeyValues::FindKey(pKV, "Target", 0);
    if ( Key != 0 )
    {
      v13 = KeyValues::GetString(pKV, "Target", "", 0, 0);
      if ( v13 == "POINT" || strcmp("POINT", v13) == 0 )
      {
        targets.m_Size = 0;
        m_pEventContext = this->m_pEventContext;
        targets.m_Memory.m_pMemory = 0;
        targets.m_Memory.m_nAllocationCount = 0;
        targets.m_Memory.m_nGrowSize = 0;
        v48 = *&m_pEventContext->vNewLoc.x;
        vOrigin = m_pEventContext->vNewLoc.z;
      }
      else
      {
        targets.m_Size = 0;
        targets.m_Memory.m_pMemory = 0;
        targets.m_Memory.m_nAllocationCount = 0;
        targets.m_Memory.m_nGrowSize = 0;
      }
      CDOTA_ActionRunner::SelectActionTargets(this, &targets, Key);
      if ( targets.m_Size != 0 )
      {
        v14 = CEntityHandle::operator CEntityInstance *(targets.m_Memory.m_pMemory);
        v15 = CBaseEntity::GetAbsOrigin(v14);
        v48 = *&v15->x;
        vOrigin = v15->z;
      }
    }
    else
    {
      targets.m_Size = 0;
      targets.m_Memory.m_pMemory = 0;
      targets.m_Memory.m_nAllocationCount = 0;
      targets.m_Memory.m_nGrowSize = 0;
    }
    v16 = CBaseEntity::GetAbsOrigin(this->m_pCaster);
    v17 = *(&v48 + 1) - v16->y;
    v18 = *&v48 - v16->x;
    vCastDir.z = 0.0;
    vCastDir.y = v17;
    vCastDir.x = v18;
    if ( VectorNormalize(&vCastDir) < 0.0099999998 )
    {
      AbsAngles = CBaseEntity::GetAbsAngles(this->m_pCaster);
      AngleVectors(AbsAngles, &vCastDir, 0, 0);
    }
    VectorVectors(&vCastDir, &right, &up);
    vRotationAxis.x = 0.0;
    vRotationAxis.y = 0.0;
    vRotationAxis.z = 1.0;
    MatrixBuildRotationAboutAxis(&vRotationAxis, v20, &matRot);
    VectorRotate(&right.x, &matRot, &vResult.x);
    x = vResult.x;
    y = vResult.y;
    z = vResult.z;
    KeyValues::KeyValues(&kv, "CreateThinker");
    if ( (*(this->_vptr_CDOTA_ActionRunner + 7))(this, &kv, String) != 0 )
    {
      m_pCaster = this->m_pCaster;
      if ( m_pCaster != 0 )
        m_Value = m_pCaster->m_iTeamNum.m_Value;
      else
        m_Value = 0;
      v24 = (*(this->_vptr_CDOTA_ActionRunner + 8))(this);
      v25 = this->m_pCaster;
      *&v60.x = v48;
      *&v65.x = v48;
      v65.z = vOrigin;
      v60.z = vOrigin;
      Thinker_Create(v25, v24, String, &kv, v65, m_Value, 0, 1, 0);
      v46 = (flWallLength / flWallWidth) / 2;
      KeyValues::~KeyValues(&kv);
      if ( v46 <= 0 )
        goto LABEL_24;
      v26 = x;
      v27 = 0;
      v28 = y * flWallWidth;
      v50 = vOrigin;
      v45 = ((v26 * flWallWidth) * 0.5) + ((v26 * flWallWidth) * 0.5);
      v43 = (0.5 * (flWallWidth * z)) + (0.5 * (flWallWidth * z));
      v44 = (v28 * 0.5) + (v28 * 0.5);
      flWallLengtha = *(&v48 + 1);
      LODWORD(flWallWidtha) = v48;
      while ( 1 )
      {
        flWallWidtha = flWallWidtha + v45;
        flWallLengtha = flWallLengtha + v44;
        v50 = v50 + v43;
        KeyValues::KeyValues(&kv, "CreateThinker");
        if ( (*(this->_vptr_CDOTA_ActionRunner + 7))(this, &kv, String) == 0 )
          break;
        v32 = this->m_pCaster;
        if ( v32 != 0 )
          v29 = v32->m_iTeamNum.m_Value;
        else
          v29 = 0;
        v30 = (*(this->_vptr_CDOTA_ActionRunner + 8))(this);
        v31 = this->m_pCaster;
        *&v60.x = __PAIR64__(LODWORD(flWallLengtha), LODWORD(flWallWidtha));
        v66.z = v50;
        *&v66.x = __PAIR64__(LODWORD(flWallLengtha), LODWORD(flWallWidtha));
        v60.z = v50;
        Thinker_Create(v31, v30, String, &kv, v66, v29, 0, 1, 0);
        ++v27;
        KeyValues::~KeyValues(&kv);
        if ( v27 == v46 )
        {
          v37 = 0;
          while ( 1 )
          {
            *&v48 = *&v48 - v45;
            *(&v48 + 1) = *(&v48 + 1) - v44;
            vOrigin = vOrigin - v43;
            KeyValues::KeyValues(&kv, "CreateThinkerWall");
            if ( (*(this->_vptr_CDOTA_ActionRunner + 7))(this, &kv, String) == 0 )
              goto LABEL_23;
            v41 = this->m_pCaster;
            if ( v41 != 0 )
              v38 = v41->m_iTeamNum.m_Value;
            else
              v38 = 0;
            v39 = (*(this->_vptr_CDOTA_ActionRunner + 8))(this);
            v40 = this->m_pCaster;
            *&v60.x = v48;
            v67.z = vOrigin;
            *&v67.x = v48;
            v60.z = vOrigin;
            Thinker_Create(v40, v39, String, &kv, v67, v38, 0, 1, 0);
            ++v37;
            KeyValues::~KeyValues(&kv);
            if ( v37 == v46 )
              goto LABEL_24;
          }
        }
      }
    }
LABEL_23:
    KeyValues::~KeyValues(&kv);
LABEL_24:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&targets);
  }
  return 0;
}


// CDOTA_ActionRunner::PerformAction_Damage  (line 1306, @0x000000000243f6c0, libserver.so)  // inlines: CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, FStrEq, Get, GetBool, GetDamageTypeFromString, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector
// calls: KeyValues::FindKey, CDOTA_ActionRunner::SelectActionTargets, KeyValues::GetString, V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >::PurgeAndDeleteElements, CUtlVectorBase<char*, CUtlMemory<char*, int> >::~CUtlVectorBase, KeyValues::GetInt, ApplyDamage, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, DevMsg(char const*,...), RandomInt, KeyValues::GetName (14 total)
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "DAMAGE_TYPE_PHYSICAL", "DAMAGE_TYPE_MAGICAL", "MinDamage", "CurrentHealthPercentBasedDamage", "MaxHealthPercentBasedDamage", "DAMAGE_TYPE_PURE" (15 total)
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_ActionRunner::PerformAction_Damage(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  KeyValues *Key; // rbx
  const char *String; // rax
  __int64 v5; // r12
  int v6; // r14d
  int v7; // ebx
  char *v8; // rax
  const char *v9; // rbx
  const char *v10; // r13
  const char *v11; // r12
  int (**vptr_CDOTA_ActionRunner)(...); // rax
  int v13; // r13d
  __int64 v14; // rbx
  CHandle<CBaseEntity> *v15; // rdx
  uint32 m_Index; // eax
  __int16 v17; // cx
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTABaseAbility *v21; // rax
  const char *v23; // rax
  int v24; // ebx
  int (**v25)(...); // rax
  int v26; // eax
  const char *v27; // rax
  const char *Name; // r12
  const char *v29; // rax
  const char *v30; // rax
  const char *v31; // rax
  const char *v32; // rax
  const char *v33; // rax
  int Int; // [rsp+Ch] [rbp-84h]
  float v35; // [rsp+10h] [rbp-80h]
  int pKVb; // [rsp+18h] [rbp-78h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > targets; // [rsp+20h] [rbp-70h] BYREF
  CUtlStringList_Base<CUtlVector<char*,CUtlMemory<char*,int> > > v39[3]; // [rsp+40h] [rbp-50h] BYREF

  Key = KeyValues::FindKey(pKV, "Target", 0);
  if ( Key == 0 )
  {
    Name = KeyValues::GetName(pKV);
    v29 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
    DevMsg("%s - no Target specified for %s.", v29, Name);
  }
  targets.m_Size = 0;
  targets.m_Memory.m_pMemory = 0;
  targets.m_Memory.m_nAllocationCount = 0;
  targets.m_Memory.m_nGrowSize = 0;
  CDOTA_ActionRunner::SelectActionTargets(this, &targets, Key);
  if ( targets.m_Size == 0 )
    goto LABEL_31;
  String = KeyValues::GetString(pKV, "Type", 0, 0, 0);
  if ( String == 0 )
  {
    v27 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
    DevMsg("%s - no Type specified for damage.", v27);
    goto LABEL_31;
  }
  v39[0].m_Size = 0;
  v39[0].m_Memory.m_pMemory = 0;
  v39[0].m_Memory.m_nAllocationCount = 0;
  v39[0].m_Memory.m_nGrowSize = 0;
  V_SplitString(String, " | ", v39);
  if ( v39[0].m_Size <= 0 )
  {
    CUtlStringList_Base<CUtlVector<char *,CUtlMemory<char *,int>>>::PurgeAndDeleteElements(v39);
    CUtlVectorBase<char *,CUtlMemory<char *,int>>::~CUtlVectorBase(&v39[0]);
    goto LABEL_36;
  }
  v5 = 0;
  v6 = 0;
  v7 = 0;
  do
  {
    while ( 1 )
    {
      v8 = v39[0].m_Memory.m_pMemory[v5];
      if ( v8 != "DAMAGE_TYPE_PHYSICAL" && strcmp(v39[0].m_Memory.m_pMemory[v5], "DAMAGE_TYPE_PHYSICAL") != 0 )
        break;
      v6 |= 1u;
LABEL_8:
      ++v7;
      ++v5;
      if ( v7 >= v39[0].m_Size )
        goto LABEL_14;
    }
    if ( v8 != "DAMAGE_TYPE_MAGICAL" && strcmp(v39[0].m_Memory.m_pMemory[v5], "DAMAGE_TYPE_MAGICAL") != 0 )
    {
      if ( v8 == "DAMAGE_TYPE_PURE" || strcmp(v39[0].m_Memory.m_pMemory[v5], "DAMAGE_TYPE_PURE") == 0 )
      {
        v6 |= 4u;
      }
      else if ( v8 == "DAMAGE_TYPE_HP_REMOVAL" || strcmp(v39[0].m_Memory.m_pMemory[v5], "DAMAGE_TYPE_HP_REMOVAL") == 0 )
      {
        v6 |= 8u;
      }
      else
      {
        DevMsg("%s is not a damage type.\n", v39[0].m_Memory.m_pMemory[v5]);
      }
      goto LABEL_8;
    }
    ++v7;
    v6 |= 2u;
    ++v5;
  }
  while ( v7 < v39[0].m_Size );
LABEL_14:
  CUtlStringList_Base<CUtlVector<char *,CUtlMemory<char *,int>>>::PurgeAndDeleteElements(v39);
  CUtlVectorBase<char *,CUtlMemory<char *,int>>::~CUtlVectorBase(&v39[0]);
  if ( v6 == 0 )
  {
LABEL_36:
    v23 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
    DevMsg("%s - invalid Type specified for damage.", v23);
    goto LABEL_31;
  }
  v9 = KeyValues::GetString(pKV, "Damage", 0, 0, 0);
  v10 = KeyValues::GetString(pKV, "MinDamage", 0, 0, 0);
  v11 = KeyValues::GetString(pKV, "MaxDamage", 0, 0, 0);
  vptr_CDOTA_ActionRunner = this->_vptr_CDOTA_ActionRunner;
  if ( v9 != 0 )
  {
    v13 = vptr_CDOTA_ActionRunner[1](this, v9, 0xFFFFFFFFLL);
    if ( v13 < 0 )
    {
      v31 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
      DevMsg("%s - invalid Damage specified.", v31);
    }
    else
    {
LABEL_17:
      Int = KeyValues::GetInt(pKV, "CurrentHealthPercentBasedDamage", 0);
      pKVb = KeyValues::GetInt(pKV, "MaxHealthPercentBasedDamage", 0);
      if ( targets.m_Size > 0 )
      {
        v14 = 0;
        do
        {
          while ( 1 )
          {
            v15 = &targets.m_Memory.m_pMemory[v14];
            m_Index = v15->m_Index;
            if ( v15->m_Index + 2 > 1 )
            {
              v17 = v15->m_Index;
              v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v15->m_Index) >> 9) & 0x3F];
              if ( v18 != 0 )
              {
                v19 = &v18[v17 & 0x1FF];
                if ( v19 != 0 && m_Index == v19->m_EHandle.m_Index )
                {
                  m_pInstance = v19->m_pInstance;
                  if ( v19->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                    break;
                }
              }
            }
            if ( targets.m_Size <= ++v14 )
              goto LABEL_31;
          }
          if ( Int != 0 )
          {
            v35 = (0.0099999998 * v13) * CBaseEntity::GetHealth(v19->m_pInstance);
            v21 = (*(this->_vptr_CDOTA_ActionRunner + 8))(this);
          }
          else
          {
            if ( pKVb != 0 )
              v35 = (0.0099999998 * v13) * (*(m_pInstance->_vptr_IHandleEntity + 156))(v19->m_pInstance);
            else
              v35 = v13;
            v21 = (*(this->_vptr_CDOTA_ActionRunner + 8))(this);
          }
          ApplyDamage(this->m_pCaster, m_pInstance, v21, v35, v6, 0);
          ++v14;
        }
        while ( targets.m_Size > v14 );
      }
    }
  }
  else if ( v11 != 0 && v10 != 0 )
  {
    v24 = vptr_CDOTA_ActionRunner[1](this, v10, 0xFFFFFFFFLL);
    v25 = this->_vptr_CDOTA_ActionRunner;
    if ( v24 < 0 )
    {
      v33 = (v25[5])(this);
      DevMsg("%s - invalid MinDamage damage specified.", v33);
    }
    else
    {
      v26 = v25[1](this, v11, 0xFFFFFFFFLL);
      if ( v26 >= 0 )
      {
        v13 = RandomInt(v24, v26);
        goto LABEL_17;
      }
      v32 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
      DevMsg("%s - invalid MaxDamage damage specified.", v32);
    }
  }
  else
  {
    v30 = (vptr_CDOTA_ActionRunner[5])(this);
    DevMsg("%s - no Damage or MinDamage/MaxDamage specified.", v30);
  }
LABEL_31:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&targets);
  return 0;
}


// CDOTA_ActionRunner::PerformAction_Heal  (line 1404, @0x000000000243fc60, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetMaxMana, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, VerifyValueMin<int>, VerifyValueRange<float>, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: KeyValues::FindKey, CDOTA_ActionRunner::SelectActionTargets, KeyValues::GetString, DevMsg(char const*,...), CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, floorf, CBaseEntity::GetHealth, CDOTA_BaseNPC::Heal, SendOverheadEventMessage, CDOTA_BaseNPC::GiveMana, KeyValues::GetName, _Unwind_Resume
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "HealPercent", "ManaAmount", "%s: Value for %s out of range\n", "%s - no Target specified for %s.\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_ActionRunner::PerformAction_Heal(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  KeyValues *Key; // r12
  const char *String; // rax
  int v5; // r13d
  const char *v6; // rax
  const char *v7; // rax
  int v8; // r14d
  const char *v9; // rax
  const char *v10; // rax
  __int64 v12; // r12
  CHandle<CBaseEntity> *v13; // rdx
  uint32 m_Index; // eax
  __int16 v15; // cx
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  int v19; // eax
  int v20; // r15d
  CDOTAPlayer *v21; // rax
  float v22; // xmm0_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  CDOTAPlayer *v25; // rax
  const char *v26; // rax
  const char *Name; // r13
  const char *v28; // rax
  const char *v29; // rax
  int v30; // r13d
  float flHealPct; // [rsp+Ch] [rbp-64h]
  float flManaPct; // [rsp+18h] [rbp-58h]
  float m_Value; // [rsp+1Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > targets; // [rsp+20h] [rbp-50h] BYREF

  Key = KeyValues::FindKey(pKV, "Target", 0);
  if ( Key == 0 )
  {
    Name = KeyValues::GetName(pKV);
    v28 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
    DevMsg("%s - no Target specified for %s.\n", v28, Name);
  }
  targets.m_Size = 0;
  targets.m_Memory.m_pMemory = 0;
  targets.m_Memory.m_nAllocationCount = 0;
  targets.m_Memory.m_nGrowSize = 0;
  CDOTA_ActionRunner::SelectActionTargets(this, &targets, Key);
  if ( targets.m_Size != 0 )
  {
    String = KeyValues::GetString(pKV, "HealAmount", 0, 0, 0);
    if ( String != 0 )
      v5 = (*(this->_vptr_CDOTA_ActionRunner + 1))(this, String, 0xFFFFFFFFLL);
    else
      v5 = 0;
    v6 = KeyValues::GetString(pKV, "HealPercent", 0, 0, 0);
    if ( v6 != 0 )
      flHealPct = (*(this->_vptr_CDOTA_ActionRunner + 2))(this, v6, -1.0);
    else
      flHealPct = 0.0;
    v7 = KeyValues::GetString(pKV, "ManaAmount", 0, 0, 0);
    if ( v7 != 0 )
      v8 = (*(this->_vptr_CDOTA_ActionRunner + 1))(this, v7, 0xFFFFFFFFLL);
    else
      v8 = 0;
    v9 = KeyValues::GetString(pKV, "ManaPercent", 0, 0, 0);
    if ( v9 != 0 )
      flManaPct = (*(this->_vptr_CDOTA_ActionRunner + 2))(this, v9, -1.0);
    else
      flManaPct = 0.0;
    if ( v5 < 0 )
    {
      v26 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
      DevMsg("%s: Value for %s out of range\n", v26, "HealAmount");
    }
    else if ( flHealPct >= 0.0 && flHealPct <= 100.0 )
    {
      if ( v8 < 0 )
      {
        v29 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
        DevMsg("%s: Value for %s out of range\n", v29, "ManaAmount");
      }
      else if ( targets.m_Size > 0 )
      {
        v12 = 0;
        do
        {
          v13 = &targets.m_Memory.m_pMemory[v12];
          m_Index = v13->m_Index;
          if ( v13->m_Index + 2 > 1 )
          {
            v15 = v13->m_Index;
            v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v13->m_Index) >> 9) & 0x3F];
            if ( v16 != 0 )
            {
              v17 = &v16[v15 & 0x1FF];
              if ( v17 != 0 && m_Index == v17->m_EHandle.m_Index )
              {
                m_pInstance = v17->m_pInstance;
                if ( v17->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                {
                  v19 = (*(m_pInstance->_vptr_IHandleEntity + 156))(v17->m_pInstance);
                  v5 = (v5 + floorf((v19 * 0.0099999998) * flHealPct));
                  v20 = (*(m_pInstance->_vptr_IHandleEntity + 156))(m_pInstance);
                  if ( v5 >= v20 - CBaseEntity::GetHealth(m_pInstance) )
                  {
                    v30 = (*(m_pInstance->_vptr_IHandleEntity + 156))(m_pInstance);
                    v5 = v30 - CBaseEntity::GetHealth(m_pInstance);
                  }
                  if ( v5 > 0 )
                  {
                    CDOTA_BaseNPC::Heal(m_pInstance, v5, this->m_pCaster, 0, 1);
                    v21 = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance);
                    SendOverheadEventMessage(v21, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, m_pInstance, v5, 0);
                  }
                  m_Value = m_pInstance->m_flMaxMana.m_Value;
                  v22 = floorf((0.0099999998 * m_Value) * flManaPct);
                  v23 = m_Value - m_pInstance->m_flMana.m_Value;
                  v24 = (v8 + v22);
                  if ( v23 <= v24 )
                    v8 = v23;
                  else
                    v8 = v24;
                  if ( v8 > 0 )
                  {
                    CDOTA_BaseNPC::GiveMana(m_pInstance, v8, 0, 1);
                    v25 = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance);
                    SendOverheadEventMessage(v25, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_MANA_ADD, m_pInstance, v8, 0);
                  }
                }
              }
            }
          }
          ++v12;
        }
        while ( targets.m_Size > v12 );
      }
    }
    else
    {
      v10 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
      DevMsg("%s: Value for %s out of range\n", v10, "HealPercent");
    }
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&targets);
  return 0;
}


// CDOTA_ActionRunner::PerformAction_IsCasterAlive  (line 1486, @0x0000000002454680, libserver.so)  // inlines: GetActionCaster
// calls: KeyValues::FindKey, CDOTA_ActionRunner::PerformActions_Core
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "OnFailure", "OnSuccess"
bool __fastcall CDOTA_ActionRunner::PerformAction_IsCasterAlive(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  CDOTA_BaseNPC *m_pCaster; // rdi
  KeyValues *Key; // rax

  m_pCaster = this->m_pCaster;
  if ( m_pCaster != 0 && (*(m_pCaster->_vptr_IHandleEntity + 408))(m_pCaster) != 0 )
  {
    Key = KeyValues::FindKey(pKV, "OnSuccess", 0);
    if ( Key != 0 )
      return CDOTA_ActionRunner::PerformActions_Core(this, Key);
  }
  else
  {
    Key = KeyValues::FindKey(pKV, "OnFailure", 0);
    if ( Key != 0 )
      return CDOTA_ActionRunner::PerformActions_Core(this, Key);
  }
  return 0;
}


// CDOTA_ActionRunner::PrecacheAction_FireEffect  (line 1508, @0x0000000002425830, libserver.so)
// calls: KeyValues::GetString, PrecacheParticleSystem
// callers: CDOTA_ActionRunner::PrecacheActions
void __fastcall CDOTA_ActionRunner::PrecacheAction_FireEffect(KeyValues *pKV, const CEntityPrecacheContext *pContext)
{
  const char *String; // rax

  String = KeyValues::GetString(pKV, "EffectName", 0, 0, 0);
  if ( String != 0 )
    PrecacheParticleSystem(String, pContext);
}


// CDOTA_ActionRunner::PerformAction_FireEffect  (line 1517, @0x000000000244edf0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetActionCaster, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Set, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: KeyValues::GetString, KeyValues::FindKey, CDOTA_ActionRunner::SelectActionTargets, GetAttachTypeFromString, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_ActionRunner::PerformActionHelper_ProcessEffectControlPoints, CDOTA_ParticleManager::ReleaseParticleIndex, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_ActionRunner::SelectActionPoints (14 total)
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "TargetPoint"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_ActionRunner::PerformAction_FireEffect(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  KeyValues *Key; // r12
  KeyValues *v5; // rax
  int m_Size; // eax
  __int64 v7; // r13
  int v8; // r12d
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  const CBaseEntity *m_pInstance; // r15
  ParticleAttachment_t AttachTypeFromString; // eax
  int v16; // r14d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v18; // rax
  __int64 v19; // r14
  int v20; // r13d
  ParticleAttachment_t v21; // eax
  int v22; // r12d
  CDOTA_ParticleManager *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  CDOTA_BaseNPC *m_pCaster; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v28; // cx
  __int64 v29; // r12
  CHandle<CBaseEntity> *v30; // rdx
  __int128 v31; // [rsp+0h] [rbp-B0h]
  const char *pszAttachName; // [rsp+18h] [rbp-98h]
  const char *pszEffectName; // [rsp+28h] [rbp-88h]
  int v35; // [rsp+30h] [rbp-80h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > targets; // [rsp+40h] [rbp-70h] BYREF
  CUtlVector<Vector,CUtlMemory<Vector,int> > points; // [rsp+60h] [rbp-50h] BYREF

  pszEffectName = KeyValues::GetString(pKV, "EffectName", 0, 0, 0);
  if ( pszEffectName != 0 )
  {
    pszAttachName = KeyValues::GetString(pKV, "EffectAttachType", 0, 0, 0);
    if ( pszAttachName != 0 )
    {
      targets.m_Size = 0;
      targets.m_Memory.m_pMemory = 0;
      targets.m_Memory.m_nAllocationCount = 0;
      targets.m_Memory.m_nGrowSize = 0;
      points.m_Size = 0;
      points.m_Memory.m_pMemory = 0;
      points.m_Memory.m_nAllocationCount = 0;
      points.m_Memory.m_nGrowSize = 0;
      Key = KeyValues::FindKey(pKV, "Target", 0);
      v5 = KeyValues::FindKey(pKV, "TargetPoint", 0);
      if ( v5 != 0 || Key != 0 )
      {
        if ( Key != 0 )
        {
          *(&v31 + 1) = &targets;
          CDOTA_ActionRunner::SelectActionTargets(this, &targets, Key);
          m_Size = targets.m_Size;
        }
        else
        {
          CDOTA_ActionRunner::SelectActionPoints(this, &points, v5);
          m_Size = targets.m_Size;
          *(&v31 + 1) = &targets;
        }
      }
      else
      {
        m_pCaster = this->m_pCaster;
        v35 = -1;
        if ( m_pCaster != 0 )
        {
          m_pEntity = m_pCaster->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v28 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v28 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            v35 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v28 & 0x7FFF;
          }
        }
        v29 = targets.m_Size;
        *(&v31 + 1) = &targets;
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&targets.m_Memory, 1);
        m_Size = ++targets.m_Size;
        v30 = &targets.m_Memory.m_pMemory[v29];
        if ( v30 != 0 )
        {
          v30->m_Index = v35;
          m_Size = targets.m_Size;
        }
      }
      if ( m_Size > 0 )
      {
        v7 = 0;
        v8 = 0;
        do
        {
          while ( 1 )
          {
            v9 = &targets.m_Memory.m_pMemory[v7];
            m_Index = targets.m_Memory.m_pMemory[v7].m_Index;
            if ( m_Index + 2 > 1 )
            {
              v11 = v9->m_Index;
              v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F];
              if ( v12 != 0 )
              {
                v13 = &v12[v11 & 0x1FF];
                if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
                {
                  m_pInstance = v13->m_pInstance;
                  if ( v13->m_pInstance != 0 )
                    break;
                }
              }
            }
            ++v8;
            ++v7;
            if ( targets.m_Size <= v8 )
              goto LABEL_15;
          }
          AttachTypeFromString = GetAttachTypeFromString(pszAttachName);
          v16 = (*(this->_vptr_CDOTA_ActionRunner + 9))(this, pszEffectName, AttachTypeFromString, m_pInstance);
          CBaseEntity::GetAbsOrigin(m_pInstance);
          ParticleManager = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(ParticleManager, v16, 0, v31);
          CDOTA_ActionRunner::PerformActionHelper_ProcessEffectControlPoints(this, pKV, v16);
          v18 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v18, v16);
          ++v8;
          ++v7;
        }
        while ( targets.m_Size > v8 );
      }
LABEL_15:
      if ( points.m_Size > 0 )
      {
        v19 = 0;
        v20 = 0;
        do
        {
          v21 = GetAttachTypeFromString(pszAttachName);
          v22 = (*(this->_vptr_CDOTA_ActionRunner + 9))(this, pszEffectName, v21, 0);
          v23 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(v23, v22, 0, v31);
          CDOTA_ActionRunner::PerformActionHelper_ProcessEffectControlPoints(this, pKV, v22);
          v24 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v24, v22);
          ++v20;
          v19 += 12;
        }
        while ( points.m_Size > v20 );
      }
      CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::~CUtlVectorBase(&points);
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(*(&v31 + 1));
    }
  }
  return 0;
}


// CDOTA_ActionRunner::PerformActionHelper_ProcessEffectControlPoints  (line 1569, @0x0000000002430f30, libserver.so)  // inlines: CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, Purge, PurgeAndDeleteElements, RemoveAll, Vector, _V_strcmp, operator=, ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: KeyValues::FindKey, KeyValues::GetFirstSubKey, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, KeyValues::GetNextKey, KeyValues::GetString, KeyValues::GetName, sscanf, V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >::PurgeAndDeleteElements, CUtlVectorBase<char*, CUtlMemory<char*, int> >::~CUtlVectorBase, CBaseEntity::Forward (19 total)
// callers: CDOTA_ActionRunner::PerformAction_AttachEffect, CDOTA_ActionRunner::PerformAction_FireEffect
// strings: "ControlPointEntities", "EffectRadius", "EffectThickness", "EffectSpeed", "EffectDurationScale", "EffectParticleRadiusScale" (14 total)
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_ActionRunner::PerformActionHelper_ProcessEffectControlPoints(
        CDOTA_ActionRunner *const this,
        KeyValues *pKV,
        int nParticleIndex)
{
  KeyValues *Key; // r12
  KeyValues *v6; // rax
  KeyValues *i; // rbx
  int x_low; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  const char *String; // r12
  const char *Name; // rax
  __int64 v12; // r12
  vec_t v13; // xmm0_4
  int v14; // eax
  __int64 v15; // r14
  int v16; // r15d
  __int64 v17; // rsi
  const char *v18; // r14
  const char *v19; // r12
  const char *v20; // rax
  float v21; // xmm0_4
  int (**vptr_CDOTA_ActionRunner)(...); // rdx
  float v23; // xmm0_4
  int (**v24)(...); // rdx
  CDOTA_ParticleManager *v25; // rax
  const char *v26; // r14
  const char *v27; // r12
  const char *v28; // rax
  float v29; // xmm0_4
  int (**v30)(...); // rdx
  float v31; // xmm0_4
  int (**v32)(...); // rdx
  CDOTA_ParticleManager *v33; // rax
  const char *v34; // rax
  __int64 j; // r12
  CDOTA_ParticleManager *v36; // rax
  CDOTA_ParticleManager *v37; // rax
  const char *v38; // rax
  __int64 k; // r12
  CDOTA_ParticleManager *v40; // rax
  const char *v41; // rax
  CDOTA_ParticleManager *v42; // rax
  const char *v43; // r14
  const CBaseEntity *v44; // r12
  const char *v45; // rax
  const char *v46; // rax
  int v47; // r14d
  CDOTA_ParticleManager *v48; // rax
  Vector *v49; // rax
  CDOTA_ParticleManager *v50; // rax
  CDOTA_ParticleManager *v51; // rax
  CDOTA_ParticleManager *v52; // rax
  const char *v53; // r14
  const char *v54; // r12
  const char *v55; // rax
  const char *v56; // rbx
  vec_t v57; // xmm0_4
  int (**v58)(...); // rax
  vec_t v59; // xmm0_4
  int (**v60)(...); // rax
  CDOTA_ParticleManager *v61; // rax
  KeyValues *FirstSubKey; // rbx
  const Vector *AbsOrigin; // r12
  CDOTA_ParticleManager *v64; // rax
  const char *v65; // r12
  const char *v66; // r14
  const CBaseEntity *v67; // rax
  CBaseEntity *v68; // r15
  const char *v69; // rax
  const char *v70; // rax
  Vector bIncludeWearables; // [rsp+0h] [rbp-C0h]
  Vector bIncludeWearablesa; // [rsp+0h] [rbp-C0h]
  Vector bIncludeWearablesb; // [rsp+0h] [rbp-C0h]
  Vector bIncludeWearablesc; // [rsp+0h] [rbp-C0h]
  Vector bIncludeWearablesd; // [rsp+0h] [rbp-C0h]
  const char *nIndex_0a; // [rsp+28h] [rbp-98h]
  const char *nIndex_0b; // [rsp+28h] [rbp-98h]
  int nIndex_0c; // [rsp+28h] [rbp-98h]
  int nIndex_0; // [rsp+28h] [rbp-98h]
  Vector vLineA; // [rsp+30h] [rbp-90h] BYREF
  Vector CVValue_1; // [rsp+40h] [rbp-80h] BYREF
  Vector nIndex; // [rsp+50h] [rbp-70h] OVERLAPPED BYREF
  Vector CVValue; // [rsp+60h] [rbp-60h]
  __int128 CVValue_0; // [rsp+70h] [rbp-50h] OVERLAPPED BYREF
  int v86; // [rsp+80h] [rbp-40h]
  int v87; // [rsp+84h] [rbp-3Ch]

  Key = KeyValues::FindKey(pKV, "ControlPoints", 0);
  v6 = KeyValues::FindKey(pKV, "ControlPointEntities", 0);
  if ( Key != 0 )
  {
    for ( i = KeyValues::GetFirstSubKey(Key); i != 0; i = KeyValues::GetNextKey(i) )
    {
      String = KeyValues::GetString(i, 0, 0, 0, 0);
      if ( String != 0 )
      {
        nIndex.x = NAN;
        Name = KeyValues::GetName(i);
        sscanf(Name, "%d", &nIndex);
        if ( LODWORD(nIndex.x) != -1 )
        {
          CVValue.x = 0.0;
          CVValue.y = 0.0;
          CVValue.z = 0.0;
          if ( strcmp(String, "POINT") == 0 )
          {
            x_low = LODWORD(nIndex.x);
            CVValue = this->m_pEventContext->vNewLoc;
          }
          else
          {
            LODWORD(CVValue_0) = 0;
            *(&CVValue_0 + 1) = 0;
            v86 = 0;
            v87 = 0;
            V_SplitString(String, " ", &CVValue_0);
            v12 = 0;
            if ( CVValue_0 > 0 )
            {
              while ( 1 )
              {
                v13 = (*(this->_vptr_CDOTA_ActionRunner + 2))(this, *(*(&CVValue_0 + 1) + 8 * v12), 0.0);
                v14 = CVValue_0;
                *(&CVValue.x + v12) = v13;
                if ( v14 <= v12 + 1 )
                  break;
                if ( ++v12 == 4 )
                  goto LABEL_13;
              }
              if ( v14 <= 0 )
                goto LABEL_15;
LABEL_13:
              v15 = 0;
              v16 = 0;
              do
              {
                ++v16;
                v17 = *(*(&CVValue_0 + 1) + v15);
                v15 += 8;
                (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v17);
              }
              while ( v16 < CVValue_0 );
            }
LABEL_15:
            LODWORD(CVValue_0) = 0;
            if ( (v87 & 0xC0000000) == 0 )
            {
              CUtlMemory<char *,int>::Purge((&CVValue_0 + 8));
              if ( (v87 & 0xC0000000) == 0 )
                CUtlMemory<char *,int>::Purge((&CVValue_0 + 8));
            }
            x_low = LODWORD(nIndex.x);
          }
          ParticleManager = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(ParticleManager, nParticleIndex, x_low, bIncludeWearables);
        }
      }
    }
  }
  else if ( v6 != 0 )
  {
    FirstSubKey = KeyValues::GetFirstSubKey(v6);
    if ( FirstSubKey != 0 )
    {
      nIndex_0 = 0;
      do
      {
        v65 = KeyValues::GetName(FirstSubKey);
        v66 = KeyValues::GetString(FirstSubKey, 0, 0, 0, 0);
        if ( v65 != 0 )
        {
          v67 = (*(this->_vptr_CDOTA_ActionRunner + 6))(this, v65);
          v68 = v67;
          if ( v67 != 0 )
          {
            AbsOrigin = CBaseEntity::GetAbsOrigin(v67);
            v64 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControlEnt(v64, nParticleIndex, nIndex_0++, v68, 5, v66, *AbsOrigin, 1);
          }
          else
          {
            v69 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
            DevMsg("%s is not a recognized target name in %s.\n", v65, v69);
          }
        }
        FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
      }
      while ( FirstSubKey != 0 );
    }
  }
  else
  {
    v18 = KeyValues::GetString(pKV, "EffectRadius", 0, 0, 0);
    v19 = KeyValues::GetString(pKV, "EffectThickness", 0, 0, 0);
    v20 = KeyValues::GetString(pKV, "EffectSpeed", 0, 0, 0);
    if ( v18 != 0 || v19 != 0 || v20 != 0 )
    {
      nIndex_0a = v20;
      v21 = (*(this->_vptr_CDOTA_ActionRunner + 2))(this, v18, 1.0);
      vptr_CDOTA_ActionRunner = this->_vptr_CDOTA_ActionRunner;
      *&CVValue_0 = v21;
      v23 = (vptr_CDOTA_ActionRunner[2])(this, v19, 1.0);
      v24 = this->_vptr_CDOTA_ActionRunner;
      *(&CVValue_0 + 1) = v23;
      DWORD2(CVValue_0) = (v24[2])(this, nIndex_0a, 1.0);
      v25 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v25, nParticleIndex, 1, bIncludeWearables);
    }
    v26 = KeyValues::GetString(pKV, "EffectDurationScale", 0, 0, 0);
    v27 = KeyValues::GetString(pKV, "EffectParticleRadiusScale", 0, 0, 0);
    v28 = KeyValues::GetString(pKV, "EffectAlphaScale", 0, 0, 0);
    if ( v26 != 0 || v27 != 0 || v28 != 0 )
    {
      nIndex_0b = v28;
      v29 = (*(this->_vptr_CDOTA_ActionRunner + 2))(this, v26, 1.0);
      v30 = this->_vptr_CDOTA_ActionRunner;
      *&CVValue_0 = v29;
      v31 = (v30[2])(this, v27, 1.0);
      v32 = this->_vptr_CDOTA_ActionRunner;
      *(&CVValue_0 + 1) = v31;
      DWORD2(CVValue_0) = (v32[2])(this, nIndex_0b, 1.0);
      v33 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v33, nParticleIndex, 2, bIncludeWearables);
    }
    v34 = KeyValues::GetString(pKV, "EffectColorA", 0, 0, 0);
    if ( v34 != 0 )
    {
      LODWORD(CVValue_0) = 0;
      *(&CVValue_0 + 1) = 0;
      v86 = 0;
      v87 = 0;
      V_SplitString(v34, " ", &CVValue_0);
      for ( j = 0; CVValue_0 > j; ++j )
        *(&CVValue.x + j) = (*(this->_vptr_CDOTA_ActionRunner + 2))(this, *(*(&CVValue_0 + 1) + 8 * j), 0.0);
      v36 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v36, nParticleIndex, 3, bIncludeWearables);
      v37 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v37, nParticleIndex, 15, bIncludeWearablesa);
      CUtlStringList_Base<CUtlVector<char *,CUtlMemory<char *,int>>>::PurgeAndDeleteElements(&CVValue_0);
      CUtlVectorBase<char *,CUtlMemory<char *,int>>::~CUtlVectorBase(&CVValue_0);
    }
    v38 = KeyValues::GetString(pKV, "EffectColorB", 0, 0, 0);
    if ( v38 != 0 )
    {
      LODWORD(CVValue_0) = 0;
      *(&CVValue_0 + 1) = 0;
      v86 = 0;
      v87 = 0;
      V_SplitString(v38, " ", &CVValue_0);
      for ( k = 0; CVValue_0 > k; ++k )
        *(&CVValue.x + k) = (*(this->_vptr_CDOTA_ActionRunner + 2))(this, *(*(&CVValue_0 + 1) + 8 * k), 0.0);
      v40 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v40, nParticleIndex, 4, bIncludeWearables);
      CUtlStringList_Base<CUtlVector<char *,CUtlMemory<char *,int>>>::PurgeAndDeleteElements(&CVValue_0);
      CUtlVectorBase<char *,CUtlMemory<char *,int>>::~CUtlVectorBase(&CVValue_0);
    }
    v41 = KeyValues::GetString(pKV, "EffectExplosionSkin", 0, 0, 0);
    if ( v41 != 0 )
    {
      LODWORD(CVValue_0) = (*(this->_vptr_CDOTA_ActionRunner + 2))(this, v41, 1.0);
      DWORD1(CVValue_0) = CVValue_0;
      DWORD2(CVValue_0) = CVValue_0;
      v42 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v42, nParticleIndex, 5, bIncludeWearables);
    }
    v43 = KeyValues::GetString(pKV, "EffectLineTarget", 0, 0, 0);
    if ( v43 != 0 )
    {
      v44 = (*(this->_vptr_CDOTA_ActionRunner + 6))(this, v43);
      if ( v44 == 0 )
      {
        v70 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
        DevMsg("%s is not a recognized target name in %s.\n", v43, v70);
        return;
      }
      v45 = KeyValues::GetString(pKV, "EffectLineLength", 0, 0, 0);
      nIndex_0c = (*(this->_vptr_CDOTA_ActionRunner + 1))(this, v45, 0);
      v46 = KeyValues::GetString(pKV, "Angle", 0, 0, 0);
      v47 = (*(this->_vptr_CDOTA_ActionRunner + 1))(this, v46, 0);
      nIndex = CBaseEntity::Forward(v44);
      v48 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlForward(v48, nParticleIndex, 0, bIncludeWearables);
      CVValue = CBaseEntity::Forward(v44);
      v49 = CBaseEntity::GetAbsOrigin(v44);
      CDOTA_ActionRunner::GetThinkerLineEndpoints(this, *v49, CVValue, nIndex_0c, v47, &vLineA, &CVValue_1);
      v50 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v50, nParticleIndex, 0, bIncludeWearablesb);
      v51 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v51, nParticleIndex, 1, bIncludeWearablesc);
      *&CVValue_0 = CBaseEntity::Forward(v44);
      v52 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v52, nParticleIndex, 2, bIncludeWearablesd);
    }
    v53 = KeyValues::GetString(pKV, "EffectLifeDurationScale", 0, 0, 0);
    v54 = KeyValues::GetString(pKV, "EffectParticleRadiusScale", 0, 0, 0);
    v55 = KeyValues::GetString(pKV, "EffectAlphaScale", 0, 0, 0);
    v56 = v55;
    if ( v53 != 0 || v54 != 0 || v55 != 0 )
    {
      v57 = (*(this->_vptr_CDOTA_ActionRunner + 2))(this, v53, 1.0);
      v58 = this->_vptr_CDOTA_ActionRunner;
      CVValue_1.x = v57;
      v59 = (v58[2])(this, v54, 1.0);
      v60 = this->_vptr_CDOTA_ActionRunner;
      CVValue_1.y = v59;
      CVValue_1.z = (v60[2])(this, v56, 1.0);
      v61 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v61, nParticleIndex, 14, bIncludeWearables);
    }
  }
}


// CDOTA_ActionRunner::PrecacheAction_FireSound  (line 1730, @0x0000000002425870, libserver.so)
// calls: KeyValues::GetString, CBaseEntity::PrecacheScriptSound
// callers: CDOTA_ActionRunner::PrecacheActions
void __fastcall CDOTA_ActionRunner::PrecacheAction_FireSound(KeyValues *pKV, const CEntityPrecacheContext *pContext)
{
  const char *String; // rax

  String = KeyValues::GetString(pKV, "EffectName", 0, 0, 0);
  if ( String != 0 )
    CBaseEntity::PrecacheScriptSound(String, pContext);
}


// CDOTA_ActionRunner::PerformAction_FireSound  (line 1739, @0x000000000244f220, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetActionCaster, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Purge, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: KeyValues::GetString, KeyValues::FindKey, CDOTA_ActionRunner::SelectActionTargets, CDOTA_BaseNPC::UnitEmitSound, CDOTA_ActionRunner::SelectActionPoints, DOTA_EmitSoundLocation, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CUtlMemory<Vector, int>::Purge, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, CUtlMemory<CHandle<CBaseEntity>, int>::Grow, _Unwind_Resume
// callers: CDOTA_ActionRunner::PerformActions_Core
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_ActionRunner::PerformAction_FireSound(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  const char *String; // r13
  KeyValues *Key; // rax
  KeyValues *v6; // r15
  int v7; // eax
  __int64 v8; // r12
  int v9; // ebx
  CHandle<CBaseEntity> *v10; // rdx
  uint32 m_Index; // eax
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  __int64 v16; // r15
  int i; // r12d
  CDOTA_BaseNPC *m_pCaster; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v21; // cx
  __int64 m_Size; // rbx
  CHandle<CBaseEntity> *v23; // rdx
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > targets; // [rsp+10h] [rbp-70h] BYREF
  CUtlVector<Vector,CUtlMemory<Vector,int> > points; // [rsp+30h] [rbp-50h] BYREF

  String = KeyValues::GetString(pKV, "EffectName", 0, 0, 0);
  if ( String == 0 )
    return 0;
  targets.m_Size = 0;
  targets.m_Memory.m_pMemory = 0;
  targets.m_Memory.m_nAllocationCount = 0;
  targets.m_Memory.m_nGrowSize = 0;
  Key = KeyValues::FindKey(pKV, "Target", 0);
  v6 = Key;
  if ( Key != 0 )
  {
    CDOTA_ActionRunner::SelectActionTargets(this, &targets, Key);
  }
  else
  {
    points.m_Size = -1;
    m_pCaster = this->m_pCaster;
    if ( m_pCaster != 0 )
    {
      m_pEntity = m_pCaster->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v21 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        points.m_Size = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v21 & 0x7FFF;
      }
    }
    m_Size = targets.m_Size;
    CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&targets.m_Memory, 1);
    v7 = ++targets.m_Size;
    v23 = &targets.m_Memory.m_pMemory[m_Size];
    if ( v23 == 0 )
      goto LABEL_5;
    v23->m_Index = points.m_Size;
  }
  v7 = targets.m_Size;
LABEL_5:
  if ( v7 > 0 )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      while ( 1 )
      {
        v10 = &targets.m_Memory.m_pMemory[v8];
        m_Index = targets.m_Memory.m_pMemory[v8].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v12 = v10->m_Index;
          v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Index) >> 9) & 0x3F];
          if ( v13 != 0 )
          {
            v14 = &v13[v12 & 0x1FF];
            if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
            {
              m_pInstance = v14->m_pInstance;
              if ( v14->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                break;
            }
          }
        }
        v7 = targets.m_Size;
        ++v9;
        ++v8;
        if ( targets.m_Size <= v9 )
          goto LABEL_15;
      }
      CDOTA_BaseNPC::UnitEmitSound(m_pInstance, String, 0.0, 0, 0);
      v7 = targets.m_Size;
      ++v9;
      ++v8;
    }
    while ( targets.m_Size > v9 );
  }
LABEL_15:
  if ( v7 != 0 )
    goto LABEL_20;
  points.m_Size = 0;
  points.m_Memory.m_pMemory = 0;
  points.m_Memory.m_nAllocationCount = 0;
  points.m_Memory.m_nGrowSize = 0;
  CDOTA_ActionRunner::SelectActionPoints(this, &points, v6);
  if ( points.m_Size == 0 )
  {
    CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::~CUtlVectorBase(&points);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&targets);
    return 0;
  }
  v16 = 0;
  for ( i = 0; points.m_Size > i; ++v16 )
  {
    DOTA_EmitSoundLocation(&points.m_Memory.m_pMemory[v16], String, 1);
    ++i;
  }
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&points);
  if ( (points.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<Vector,int>::Purge(&points.m_Memory), (points.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
LABEL_20:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&targets);
  }
  else
  {
    CUtlMemory<Vector,int>::Purge(&points.m_Memory);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&targets);
  }
  return 0;
}


// CDOTA_ActionRunner::PerformAction_Lifesteal  (line 1781, @0x00000000024400d0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetActionCaster, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Purge, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: KeyValues::FindKey, CDOTA_ActionRunner::SelectActionTargets, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, KeyValues::GetName, DevMsg(char const*,...), KeyValues::GetString, CDOTA_BaseNPC::Heal, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, SendOverheadEventMessage (14 total)
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "%s - no Target specified for %s.", "LifestealPercent", "particles/generic_gameplay/generic_lifesteal.vpcf"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_ActionRunner::PerformAction_Lifesteal(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  KeyValues *Key; // r13
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  const char *Name; // rbx
  const char *v9; // rax
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_BaseNPC *m_pCaster; // rax
  const char *String; // rax
  float v13; // xmm0_4
  const CModifierParams *m_pEventContext; // rax
  int v15; // r14d
  CBaseEntity *v16; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_ParticleManager *v19; // rax
  CDOTAPlayer *v20; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > targets; // [rsp+0h] [rbp-40h] BYREF

  Key = KeyValues::FindKey(pKV, "Target", 0);
  if ( Key == 0 )
  {
    Name = KeyValues::GetName(pKV);
    v9 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
    DevMsg("%s - no Target specified for %s.", v9, Name);
  }
  targets.m_Size = 0;
  targets.m_Memory.m_pMemory = 0;
  targets.m_Memory.m_nAllocationCount = 0;
  targets.m_Memory.m_nGrowSize = 0;
  CDOTA_ActionRunner::SelectActionTargets(this, &targets, Key);
  if ( targets.m_Size != 0 && targets.m_Memory.m_pMemory->m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(targets.m_Memory.m_pMemory->m_Index >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[targets.m_Memory.m_pMemory->m_Index & 0x1FF];
      if ( v6 != 0 && targets.m_Memory.m_pMemory->m_Index == v6->m_EHandle.m_Index )
      {
        m_pInstance = v6->m_pInstance;
        if ( v6->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          m_pCaster = this->m_pCaster;
          if ( m_pCaster != 0 && !m_pCaster->m_bIsIllusion.m_Value )
          {
            String = KeyValues::GetString(pKV, "LifestealPercent", 0, 0, 0);
            if ( String != 0 )
            {
              (*(this->_vptr_CDOTA_ActionRunner + 2))(this, String, 0.0);
              m_pEventContext = this->m_pEventContext;
              if ( m_pEventContext != 0 )
              {
                v15 = ((v13 * m_pEventContext->fDamage) / 100.0);
                v16 = (*(this->_vptr_CDOTA_ActionRunner + 8))(this);
                CDOTA_BaseNPC::Heal(m_pInstance, v15, v16, 0, 1);
                ParticleManager = GetParticleManager();
                Particle = CDOTA_ParticleManager::CreateParticle(
                             ParticleManager,
                             "particles/generic_gameplay/generic_lifesteal.vpcf",
                             1,
                             m_pInstance,
                             0,
                             0);
                v19 = GetParticleManager();
                CDOTA_ParticleManager::ReleaseParticleIndex(v19, Particle);
                v20 = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance);
                SendOverheadEventMessage(v20, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, m_pInstance, v15, 0);
              }
            }
          }
        }
      }
    }
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&targets);
  if ( (targets.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
    return 0;
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&targets.m_Memory);
  if ( (targets.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
    return 0;
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&targets.m_Memory);
  return 0;
}


// CDOTA_ActionRunner::PerformAction_Knockback  (line 1825, @0x0000000002440330, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetBool, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, Length2D, LookupEntity, SetBool, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator[], ~CUtlVector
// calls: KeyValues::FindKey, CDOTA_ActionRunner::SelectActionTargets, CDOTA_ActionRunner::SelectActionPoint, KeyValues::GetString, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::GetInt, KeyValues::SetInt, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase (16 total)
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "IsFixedDistance", "modifier_knockback", "center_x", "center_y", "center_z", "knockback_height" (10 total)
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_ActionRunner::PerformAction_Knockback(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  KeyValues *Key; // rbx
  KeyValues *v4; // rbx
  __int64 (__fastcall *v5)(CDOTA_ActionRunner *const, const char *, __int64); // rbx
  const char *String; // rax
  __int64 (__fastcall *v7)(CDOTA_ActionRunner *const, const char *, _QWORD); // rbx
  const char *v8; // rax
  __int64 v9; // r13
  int v10; // r14d
  CHandle<CBaseEntity> *v11; // rdx
  uint32 m_Index; // eax
  __int16 v13; // cx
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  float v16; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm1_4
  float v19; // xmm1_4
  void (__fastcall *v20)(CDOTA_ActionRunner *const, const char *, __int64); // r15
  const char *v21; // rax
  float v22; // xmm1_4
  int Int; // eax
  void (__fastcall *v24)(CDOTA_ActionRunner *const, const char *, float); // r15
  const char *v25; // rax
  float v26; // xmm1_4
  float v27; // xmm1_4
  float v28; // xmm1_4
  const Vector *AbsOrigin; // rax
  const char *v31; // r13
  const char *v32; // rax
  const char *Name; // r13
  const char *v34; // rax
  const Vector *v35; // rax
  int v36; // [rsp+Ch] [rbp-A4h]
  int nKnockbackDistance; // [rsp+10h] [rbp-A0h]
  CDOTA_BaseNPC *m_pInstance; // [rsp+18h] [rbp-98h]
  __int64 vCenter; // [rsp+30h] [rbp-80h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > targets; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v43; // [rsp+78h] [rbp-38h]

  v43 = __readfsqword(0x28u);
  Key = KeyValues::FindKey(pKV, "Target", 0);
  if ( Key == 0 )
  {
    Name = KeyValues::GetName(pKV);
    v34 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
    DevMsg("%s - no Target specified for %s.", v34, Name);
  }
  targets.m_Size = 0;
  targets.m_Memory.m_pMemory = 0;
  targets.m_Memory.m_nAllocationCount = 0;
  targets.m_Memory.m_nGrowSize = 0;
  CDOTA_ActionRunner::SelectActionTargets(this, &targets, Key);
  if ( targets.m_Size != 0 )
  {
    v4 = KeyValues::FindKey(pKV, "Center", 0);
    if ( v4 == 0 )
    {
      v31 = KeyValues::GetName(pKV);
      v32 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
      DevMsg("%s - no Center specified for %s.", v32, v31);
    }
    vCenter = *&CDOTA_ActionRunner::SelectActionPoint(this, v4).x;
    v5 = *(this->_vptr_CDOTA_ActionRunner + 1);
    String = KeyValues::GetString(pKV, "Distance", 0, 0, 0);
    nKnockbackDistance = v5(this, String, 200);
    v7 = *(this->_vptr_CDOTA_ActionRunner + 1);
    v8 = KeyValues::GetString(pKV, "IsFixedDistance", 0, 0, 0);
    v36 = v7(this, v8, 0);
    if ( targets.m_Size > 0 )
    {
      v9 = 0;
      v10 = 0;
      do
      {
        while ( 1 )
        {
          v11 = &targets.m_Memory.m_pMemory[v9];
          m_Index = targets.m_Memory.m_pMemory[v9].m_Index;
          if ( m_Index + 2 > 1 )
          {
            v13 = v11->m_Index;
            v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v11->m_Index) >> 9) & 0x3F];
            if ( v14 != 0 )
            {
              v15 = &v14[v13 & 0x1FF];
              if ( v15 != 0 && m_Index == v15->m_EHandle.m_Index )
              {
                m_pInstance = v15->m_pInstance;
                if ( v15->m_pInstance != 0 && BYTE3(v15->m_pInstance[7]._vptr_IHandleEntity) != 0 )
                  break;
              }
            }
          }
          ++v10;
          ++v9;
          if ( targets.m_Size <= v10 )
            goto LABEL_19;
        }
        KeyValues::KeyValues(&kv, "modifier_knockback");
        KeyValues::SetFloat(&kv, "center_x", v16);
        KeyValues::SetFloat(&kv, "center_y", v17);
        KeyValues::SetFloat(&kv, "center_z", v18);
        KeyValues::SetFloat(&kv, "knockback_distance", v19);
        v20 = *(this->_vptr_CDOTA_ActionRunner + 1);
        v21 = KeyValues::GetString(pKV, "Height", 0, 0, 0);
        v20(this, v21, 100);
        KeyValues::SetFloat(&kv, "knockback_height", v22);
        Int = KeyValues::GetInt(pKV, "ShouldStun", 1);
        KeyValues::SetInt(&kv, "should_stun", Int != 0);
        v24 = *(this->_vptr_CDOTA_ActionRunner + 2);
        v25 = KeyValues::GetString(pKV, "Duration", 0, 0, 0);
        v24(this, v25, 0.5);
        KeyValues::SetFloat(&kv, "knockback_duration", v26);
        KeyValues::SetFloat(&kv, "duration", v27);
        if ( v36 != 0 )
        {
          AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
          v28 = (AbsOrigin->y - *(&vCenter + 1)) * (AbsOrigin->y - *(&vCenter + 1));
          if ( (nKnockbackDistance - fsqrt(((AbsOrigin->x - *&vCenter) * (AbsOrigin->x - *&vCenter)) + v28)) >= 10.0 )
          {
            v35 = CBaseEntity::GetAbsOrigin(m_pInstance);
            v28 = (v35->y - *(&vCenter + 1)) * (v35->y - *(&vCenter + 1));
          }
        }
        KeyValues::SetFloat(&kv, "knockback_distance", v28);
        CDOTA_BaseNPC::AddNewModifier(m_pInstance, this->m_pCaster, 0, "modifier_knockback", &kv, 0);
        ++v10;
        ++v9;
        KeyValues::~KeyValues(&kv);
      }
      while ( targets.m_Size > v10 );
    }
  }
LABEL_19:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&targets);
  return 0;
}


// CDOTA_ActionRunner::PerformAction_Stun  (line 1875, @0x0000000002440830, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Purge, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: KeyValues::FindKey, CDOTA_ActionRunner::SelectActionTargets, KeyValues::KeyValues, KeyValues::GetString, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, KeyValues::GetName, DevMsg(char const*,...), __stack_chk_fail (14 total)
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "modifier_stunned", "%s - no Target specified for %s."
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_ActionRunner::PerformAction_Stun(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  KeyValues *Key; // rbx
  void (__fastcall *v5)(CDOTA_ActionRunner *const, const char *, float); // rbx
  const char *String; // rax
  float v7; // xmm1_4
  __int64 v8; // r12
  int i; // ebx
  CHandle<CBaseEntity> *v10; // rdx
  uint32 m_Index; // eax
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  const char *Name; // r14
  const char *v18; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > targets; // [rsp+0h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  Key = KeyValues::FindKey(pKV, "Target", 0);
  if ( Key == 0 )
  {
    Name = KeyValues::GetName(pKV);
    v18 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
    DevMsg("%s - no Target specified for %s.", v18, Name);
  }
  targets.m_Size = 0;
  targets.m_Memory.m_pMemory = 0;
  targets.m_Memory.m_nAllocationCount = 0;
  targets.m_Memory.m_nGrowSize = 0;
  CDOTA_ActionRunner::SelectActionTargets(this, &targets, Key);
  if ( targets.m_Size != 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_stunned");
    v5 = *(this->_vptr_CDOTA_ActionRunner + 2);
    String = KeyValues::GetString(pKV, "Duration", 0, 0, 0);
    v5(this, String, 1.0);
    KeyValues::SetFloat(&kv, "duration", v7);
    v8 = 0;
    for ( i = 0; targets.m_Size > i; ++v8 )
    {
      while ( 1 )
      {
        v10 = &targets.m_Memory.m_pMemory[v8];
        m_Index = targets.m_Memory.m_pMemory[v8].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v12 = v10->m_Index;
          v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Index) >> 9) & 0x3F];
          if ( v13 != 0 )
          {
            v14 = &v13[v12 & 0x1FF];
            if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
            {
              m_pInstance = v14->m_pInstance;
              if ( v14->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                break;
            }
          }
        }
        ++i;
        ++v8;
        if ( targets.m_Size <= i )
          goto LABEL_14;
      }
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, this->m_pCaster, 0, "modifier_stunned", &kv, 0);
      ++i;
    }
LABEL_14:
    KeyValues::~KeyValues(&kv);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&targets);
  if ( (targets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&targets.m_Memory);
    if ( (targets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&targets.m_Memory);
  }
  return 0;
}


// CDOTA_ActionRunner::PerformAction_TrackingProjectile  (line 1905, @0x0000000002440a60, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Color, FStrEq, GetActionCaster, GetActionTeamNumber, GetEHandle, GetEntryIndex, GetProjectileAttachmentFromString, GetSerialNumber, GetTeamNumber, Purge, Set, _V_strcmp, operator=, sTrackingProjectileCreateInfo, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: KeyValues::FindKey, CDOTA_ActionRunner::SelectActionTargets, KeyValues::GetString, CDOTA_ProjectileManager::CreateTrackingProjectile, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, DevMsg(char const*,...), __stack_chk_fail, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "DOTA_PROJECTILE_ATTACHMENT_NONE", "DOTA_PROJECTILE_ATTACHMENT_ATTACK_1", "DOTA_PROJECTILE_ATTACHMENT_ATTACK_2", "DOTA_PROJECTILE_ATTACHMENT_HITLOCATION", "DOTA_PROJECTILE_ATTACHMENT_ATTACK_3", "DOTA_PROJECTILE_ATTACHMENT_ATTACK_4" (7 total)
bool __fastcall CDOTA_ActionRunner::PerformAction_TrackingProjectile(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  KeyValues *Key; // rax
  vec_t z; // xmm0_4
  int (**vptr_CDOTA_ActionRunner)(...); // rax
  CDOTABaseAbility *v7; // rax
  CDOTA_BaseNPC *m_pCaster; // rcx
  CEntityIdentity *m_pEntity; // rdx
  int v10; // eax
  __int16 v11; // si
  int m_Value; // eax
  unsigned int (__fastcall *v13)(CDOTA_ActionRunner *const, const char *, _QWORD); // r14
  const char *String; // rax
  bool v15; // zf
  int (**v16)(...); // rax
  int (*v17)(...); // r14
  const char *v18; // rax
  int (**v19)(...); // rax
  int (*v20)(...); // r14
  const char *v21; // rax
  __int64 (__fastcall *v22)(CDOTA_ActionRunner *const, const char *, __int64); // r14
  const char *v23; // rax
  char *v24; // rax
  int v25; // edx
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > targets; // [rsp+0h] [rbp-B0h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+20h] [rbp-90h] BYREF
  unsigned __int64 v29; // [rsp+88h] [rbp-28h]

  v29 = __readfsqword(0x28u);
  Key = KeyValues::FindKey(pKV, "Target", 0);
  targets.m_Size = 0;
  targets.m_Memory.m_pMemory = 0;
  targets.m_Memory.m_nAllocationCount = 0;
  targets.m_Memory.m_nGrowSize = 0;
  CDOTA_ActionRunner::SelectActionTargets(this, &targets, Key);
  if ( targets.m_Size != 0 )
  {
    info.hSource.m_Index = -1;
    info.hTarget.m_Index = -1;
    info.colorGemColor = 0;
    memset(&info, 0, 28);
    info.vSourceLoc.x = vec3_origin.x;
    info.vSourceLoc.y = vec3_origin.y;
    z = vec3_origin.z;
    vptr_CDOTA_ActionRunner = this->_vptr_CDOTA_ActionRunner;
    info.iSourceAttachment = 1;
    info.vSourceLoc.z = z;
    info.bProvidesVision = 0;
    info.iVisionTeamNumber = -1;
    info.iVisionRadius = 0;
    info.bDrawsOnMinimap = 0;
    info.bDodgeable = 1;
    info.bIsAttack = 0;
    info.bVisibleToEnemies = 1;
    info.pKVExtraData = 0;
    info.bReplaceExisting = 0;
    info.flExpireTime = 0.0;
    info.flMaxImpactTime = 0.0;
    info.bServerOnly = 0;
    v7 = (vptr_CDOTA_ActionRunner[8])(this);
    m_pCaster = this->m_pCaster;
    info.pAbility = v7;
    if ( m_pCaster != 0 && (m_pEntity = m_pCaster->m_pEntity) != 0 )
    {
      v10 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v11 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(info.hSource.m_Index) = v11 | info.hSource.m_Index & 0x8000;
      info.hSource.m_Index = (v10 << 15) | info.hSource.m_Index & 0x7FFF;
      info.hTarget.m_Index = targets.m_Memory.m_pMemory->m_Index;
    }
    else
    {
      info.hSource.m_Index = -1;
      info.hTarget.m_Index = targets.m_Memory.m_pMemory->m_Index;
      if ( m_pCaster == 0 )
      {
        m_Value = 0;
LABEL_8:
        info.iVisionTeamNumber = m_Value;
        v13 = *(this->_vptr_CDOTA_ActionRunner + 1);
        String = KeyValues::GetString(pKV, "Dodgeable", 0, 0, 0);
        v15 = v13(this, String, 0) == 0;
        v16 = this->_vptr_CDOTA_ActionRunner;
        info.bDodgeable = !v15;
        v17 = v16[1];
        v18 = KeyValues::GetString(pKV, "ProvidesVision", 0, 0, 0);
        v15 = v17(this, v18, 1) == 0;
        v19 = this->_vptr_CDOTA_ActionRunner;
        info.bProvidesVision = !v15;
        v20 = v19[1];
        v21 = KeyValues::GetString(pKV, "VisionRadius", 0, 0, 0);
        info.iVisionRadius = v20(this, v21, 1600);
        info.pszEffectName = KeyValues::GetString(pKV, "EffectName", "", 0, 0);
        v22 = *(this->_vptr_CDOTA_ActionRunner + 1);
        v23 = KeyValues::GetString(pKV, "MoveSpeed", 0, 0, 0);
        info.iMoveSpeed = v22(this, v23, 100);
        v24 = KeyValues::GetString(pKV, "SourceAttachment", 0, 0, 0);
        if ( v24 != 0 )
        {
          if ( v24 == "DOTA_PROJECTILE_ATTACHMENT_NONE" )
          {
LABEL_27:
            v25 = 0;
            goto LABEL_17;
          }
          v15 = strcmp(v24, "DOTA_PROJECTILE_ATTACHMENT_NONE") == 0;
          v25 = !v15;
          if ( v15 )
          {
LABEL_17:
            info.iSourceAttachment = v25;
            CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
            goto LABEL_18;
          }
          if ( v24 != "DOTA_PROJECTILE_ATTACHMENT_ATTACK_1" && strcmp(v24, "DOTA_PROJECTILE_ATTACHMENT_ATTACK_1") != 0 )
          {
            if ( v24 == "DOTA_PROJECTILE_ATTACHMENT_ATTACK_2" )
            {
              v25 = 2;
              goto LABEL_17;
            }
            v25 = 2;
            if ( strcmp(v24, "DOTA_PROJECTILE_ATTACHMENT_ATTACK_2") != 0 )
            {
              if ( v24 == "DOTA_PROJECTILE_ATTACHMENT_HITLOCATION" )
              {
                v25 = 3;
                goto LABEL_17;
              }
              LOBYTE(v25) = 3;
              if ( strcmp(v24, "DOTA_PROJECTILE_ATTACHMENT_HITLOCATION") != 0 )
              {
                if ( v24 == "DOTA_PROJECTILE_ATTACHMENT_ATTACK_3" )
                {
                  v25 = 4;
                  goto LABEL_17;
                }
                LOBYTE(v25) = 4;
                if ( strcmp(v24, "DOTA_PROJECTILE_ATTACHMENT_ATTACK_3") != 0 )
                {
                  if ( v24 == "DOTA_PROJECTILE_ATTACHMENT_ATTACK_4" )
                  {
                    v25 = 5;
                    goto LABEL_17;
                  }
                  LOBYTE(v25) = 5;
                  if ( strcmp(v24, "DOTA_PROJECTILE_ATTACHMENT_ATTACK_4") != 0 )
                  {
                    DevMsg("%s is not a projectile attachment point.\n", v24);
                    goto LABEL_27;
                  }
                }
              }
            }
            goto LABEL_17;
          }
        }
        v25 = 1;
        goto LABEL_17;
      }
    }
    m_Value = m_pCaster->m_iTeamNum.m_Value;
    goto LABEL_8;
  }
LABEL_18:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&targets);
  if ( (targets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&targets.m_Memory);
    if ( (targets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&targets.m_Memory);
  }
  return 0;
}


// CDOTA_ActionRunner::PerformAction_LinearProjectile  (line 1930, @0x000000000244ffe0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, GetActionCaster, GetEHandle, GetEntryIndex, GetSerialNumber, GetTeamNumber, Set, VectorMultiply, VectorNormalize2D, VectorSubtract, operator*, operator-, operator=, operator[], sLinearProjectileCreateInfo, ~CUtlVector
// calls: KeyValues::FindKey, CDOTA_ActionRunner::SelectActionPoints, KeyValues::GetString, GetUnitTargetTeamsFromString, GetUnitTargetTypesFromString, GetUnitTargetFlagsFromString, CDOTA_ProjectileManager::CreateLinearProjectile, VectorNormalize, CBaseEntity::GetAbsAngles, AngleVectors, DevMsg(char const*,...), CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase (18 total)
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "DOTA_UNIT_TARGET_TEAM_ENEMY", "TargetTeams", "DOTA_UNIT_TARGET_HERO | DOTA_UNIT_TARGET_BASIC", "TargetTypes", "DOTA_UNIT_TARGET_FLAG_NOT_ANCIENTS", "PerformAction_LinearProjectile failed to find a valid source position\n"
bool __fastcall CDOTA_ActionRunner::PerformAction_LinearProjectile(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  KeyValues *Key; // rax
  KeyValues *v5; // rax
  __int64 v6; // r14
  int v7; // r13d
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx
  const char *v11; // rax
  const char *v12; // rax
  const char *v13; // rax
  unsigned int (__fastcall *v14)(CDOTA_ActionRunner *const, const char *, _QWORD); // r15
  const char *v15; // rax
  bool v16; // zf
  int (**vptr_CDOTA_ActionRunner)(...); // rax
  int (*v18)(...); // r15
  const char *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  __int64 (__fastcall *v21)(CDOTA_ActionRunner *const, const char *, _QWORD); // r15
  const char *v22; // rax
  unsigned int (__fastcall *v23)(CDOTA_ActionRunner *const, const char *, _QWORD); // r15
  const char *v24; // rax
  int (**v25)(...); // rax
  int (*v26)(...); // r15
  const char *v27; // rax
  float v28; // xmm1_4
  float v29; // xmm0_4
  const QAngle *AbsAngles; // rax
  vec_t v31; // xmm1_4
  vec_t v32; // xmm0_4
  float (__fastcall *v33)(CDOTA_ActionRunner *const, const char *, float); // r15
  const char *v34; // rax
  float (__fastcall *v35)(CDOTA_ActionRunner *const, const char *, float); // r15
  const char *v36; // rax
  float (__fastcall *v37)(CDOTA_ActionRunner *const, const char *, float); // r15
  const char *v38; // rax
  float (__fastcall *v39)(CDOTA_ActionRunner *const, const char *, float); // r15
  const char *v40; // rax
  CDOTA_BaseNPC *m_pCaster; // rax
  const char *String; // rax
  CBaseEntity *CursorTarget; // rax
  vec_t z; // [rsp+24h] [rbp-12Ch]
  CDOTABaseAbility *pAbility; // [rsp+28h] [rbp-128h]
  float flLength; // [rsp+38h] [rbp-118h]
  float flEndRadius; // [rsp+3Ch] [rbp-114h]
  float flSpeed; // [rsp+40h] [rbp-110h]
  float x; // [rsp+44h] [rbp-10Ch]
  float y; // [rsp+48h] [rbp-108h]
  float flStartRadius; // [rsp+4Ch] [rbp-104h]
  Vector vDirection; // [rsp+50h] [rbp-100h] BYREF
  CUtlVector<Vector,CUtlMemory<Vector,int> > vTargetPositions; // [rsp+60h] [rbp-F0h] BYREF
  CUtlVector<Vector,CUtlMemory<Vector,int> > vSourcePositions; // [rsp+80h] [rbp-D0h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+A0h] [rbp-B0h] BYREF

  pAbility = (*(this->_vptr_CDOTA_ActionRunner + 8))(this);
  if ( pAbility != 0 )
  {
    vTargetPositions.m_Size = 0;
    vTargetPositions.m_Memory.m_pMemory = 0;
    vTargetPositions.m_Memory.m_nAllocationCount = 0;
    vTargetPositions.m_Memory.m_nGrowSize = 0;
    Key = KeyValues::FindKey(pKV, "Target", 0);
    if ( Key != 0 )
    {
      CDOTA_ActionRunner::SelectActionPoints(this, &vTargetPositions, Key);
    }
    else
    {
      if ( CDOTABaseAbility::GetCursorTarget(pAbility) != 0 )
      {
        CursorTarget = CDOTABaseAbility::GetCursorTarget(pAbility);
        *&info.pszEffectName = *CBaseEntity::GetAbsOrigin(CursorTarget);
      }
      else
      {
        *&info.pszEffectName = CDOTABaseAbility::GetCursorPosition(pAbility);
      }
      CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::AddToTail(&vTargetPositions, &info);
    }
    vSourcePositions.m_Size = 0;
    vSourcePositions.m_Memory.m_pMemory = 0;
    vSourcePositions.m_Memory.m_nAllocationCount = 0;
    vSourcePositions.m_Memory.m_nGrowSize = 0;
    v5 = KeyValues::FindKey(pKV, "Source", 0);
    if ( v5 != 0 )
    {
      CDOTA_ActionRunner::SelectActionPoints(this, &vSourcePositions, v5);
    }
    else
    {
      *&info.pszEffectName = *CBaseEntity::GetAbsOrigin(this->m_pCaster);
      if ( KeyValues::GetString(pKV, "StartPosition", 0, 0, 0) != 0 )
      {
        String = KeyValues::GetString(pKV, "StartPosition", 0, 0, 0);
        CBaseAnimating::GetAttachment(this->m_pCaster, String, &info);
      }
      CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::AddToTail(&vSourcePositions, &info);
    }
    if ( vSourcePositions.m_Size <= 0 )
    {
      DevMsg("PerformAction_LinearProjectile failed to find a valid source position\n");
    }
    else
    {
      x = vSourcePositions.m_Memory.m_pMemory->x;
      y = vSourcePositions.m_Memory.m_pMemory->y;
      z = vSourcePositions.m_Memory.m_pMemory->z;
      if ( vTargetPositions.m_Size > 0 )
      {
        v6 = 0;
        v7 = 0;
        do
        {
          v28 = vTargetPositions.m_Memory.m_pMemory[v6].x;
          v29 = vTargetPositions.m_Memory.m_pMemory[v6].y;
          vDirection.z = 0.0;
          vDirection.x = v28 - x;
          vDirection.y = v29 - y;
          flLength = VectorNormalize(&vDirection);
          if ( flLength < 0.0099999998 )
          {
            AbsAngles = CBaseEntity::GetAbsAngles(this->m_pCaster);
            AngleVectors(AbsAngles, &vDirection, 0, 0);
          }
          info.bHasFrontalCone = 1;
          info.bCheckStartPosition = 0;
          info.hSource.m_Index = -1;
          info.fDistance = 0.0;
          v31 = vec3_origin.y;
          info.bProvidesVision = 0;
          v32 = vec3_origin.z;
          info.bDrawsOnMinimap = 0;
          info.pszEffectName = 0;
          info.pAbility = 0;
          info.vSpawnOrigin.x = vec3_origin.x;
          info.vSpawnOrigin.y = v31;
          info.vSpawnOrigin.z = v32;
          info.vVelocity.x = vec3_origin.x;
          info.vVelocity.y = v31;
          info.vVelocity.z = v32;
          info.vAcceleration.x = vec3_origin.x;
          info.vAcceleration.y = v31;
          info.vAcceleration.z = v32;
          info.fStartRadius = 0.0;
          info.fEndRadius = 0.0;
          info.iUnitTargetTeam = 0;
          info.iUnitTargetType = 0;
          info.iUnitTargetFlags = 0;
          info.iVisionTeamNumber = -1;
          info.iVisionRadius = -1;
          info.bVisibleToEnemies = 1;
          info.bIgnoreSource = 0;
          info.bStickyFoWReveal = 0;
          info.pKVExtraData = 0;
          info.fExpireTime = 0.0;
          info.fMaxSpeed = 0.0;
          info.pszEffectName = KeyValues::GetString(pKV, "EffectName", "", 0, 0);
          info.pAbility = pAbility;
          v33 = *(this->_vptr_CDOTA_ActionRunner + 2);
          v34 = KeyValues::GetString(pKV, "MoveSpeed", 0, 0, 0);
          flSpeed = v33(this, v34, 100.0);
          v35 = *(this->_vptr_CDOTA_ActionRunner + 2);
          v36 = KeyValues::GetString(pKV, "StartRadius", 0, 0, 0);
          flStartRadius = v35(this, v36, 10.0);
          v37 = *(this->_vptr_CDOTA_ActionRunner + 2);
          v38 = KeyValues::GetString(pKV, "EndRadius", 0, 0, 0);
          flEndRadius = v37(this, v38, flStartRadius);
          v39 = *(this->_vptr_CDOTA_ActionRunner + 2);
          v40 = KeyValues::GetString(pKV, "FixedDistance", 0, 0, 0);
          info.fDistance = v39(this, v40, flLength);
          m_pCaster = this->m_pCaster;
          info.vSpawnOrigin.x = x;
          info.vVelocity.y = vDirection.y * flSpeed;
          info.vSpawnOrigin.y = y;
          info.vSpawnOrigin.z = z;
          info.vVelocity.x = flSpeed * vDirection.x;
          info.vVelocity.z = vDirection.z * flSpeed;
          info.fStartRadius = flStartRadius;
          info.fEndRadius = flEndRadius;
          if ( m_pCaster != 0 && (m_pEntity = m_pCaster->m_pEntity) != 0 )
          {
            v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            v10 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(info.hSource.m_Index) = v10 | info.hSource.m_Index & 0x8000;
            info.hSource.m_Index = (v9 << 15) | info.hSource.m_Index & 0x7FFF;
          }
          else
          {
            info.hSource.m_Index = -1;
          }
          v11 = KeyValues::GetString(pKV, "TargetTeams", "DOTA_UNIT_TARGET_TEAM_ENEMY", 0, 0);
          info.iUnitTargetTeam = GetUnitTargetTeamsFromString(v11);
          v12 = KeyValues::GetString(pKV, "TargetTypes", "DOTA_UNIT_TARGET_HERO | DOTA_UNIT_TARGET_BASIC", 0, 0);
          info.iUnitTargetType = GetUnitTargetTypesFromString(v12);
          v13 = KeyValues::GetString(pKV, "TargetFlags", "DOTA_UNIT_TARGET_FLAG_NOT_ANCIENTS", 0, 0);
          info.iUnitTargetFlags = GetUnitTargetFlagsFromString(v13);
          v14 = *(this->_vptr_CDOTA_ActionRunner + 1);
          v15 = KeyValues::GetString(pKV, "HasFrontalCone", 0, 0, 0);
          v16 = v14(this, v15, 0) == 0;
          vptr_CDOTA_ActionRunner = this->_vptr_CDOTA_ActionRunner;
          info.bHasFrontalCone = !v16;
          v18 = vptr_CDOTA_ActionRunner[1];
          v19 = KeyValues::GetString(pKV, "ProvidesVision", 0, 0, 0);
          v16 = v18(this, v19, 0) == 0;
          v20 = this->m_pCaster;
          info.bProvidesVision = !v16;
          info.iVisionTeamNumber = v20->m_iTeamNum.m_Value;
          v21 = *(this->_vptr_CDOTA_ActionRunner + 1);
          v22 = KeyValues::GetString(pKV, "VisionRadius", 0, 0, 0);
          info.iVisionRadius = v21(this, v22, 0);
          v23 = *(this->_vptr_CDOTA_ActionRunner + 1);
          v24 = KeyValues::GetString(pKV, "IgnoreSource", 0, 0, 0);
          v16 = v23(this, v24, 0) == 0;
          v25 = this->_vptr_CDOTA_ActionRunner;
          info.bIgnoreSource = !v16;
          v26 = v25[1];
          v27 = KeyValues::GetString(pKV, "StickyFoWReveal", 0, 0, 0);
          info.bStickyFoWReveal = v26(this, v27, 0) != 0;
          CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
          ++v7;
          ++v6;
        }
        while ( vTargetPositions.m_Size > v7 );
      }
    }
    CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::~CUtlVectorBase(&vSourcePositions);
    CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::~CUtlVectorBase(&vTargetPositions);
  }
  return 0;
}


// CDOTA_ActionRunner::PerformAction_Random  (line 2013, @0x00000000024546f0, libserver.so)  // inlines: FStrEq, GetPseudoRandomTypeFromString, _V_strcmp
// calls: KeyValues::GetString, RollPseudoRandomPercentage, KeyValues::FindKey, CDOTA_ActionRunner::PerformActions_Core, strcmp, DevMsg(char const*,...)
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "PseudoRandom", "DOTA_PSEUDO_RANDOM_PHANTOMASSASSIN_CRIT", "DOTA_PSEUDO_RANDOM_SLARDAR_BASH", "OnSuccess", "OnFailure", "DOTA_PSEUDO_RANDOM_FACELESS_BASH" (29 total)
bool __fastcall CDOTA_ActionRunner::PerformAction_Random(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  float (__fastcall *v4)(CDOTA_ActionRunner *const, const char *, double); // rbx
  const char *String; // rax
  const char *v6; // rax
  float v7; // xmm0_4
  const char *v8; // rbx
  DotaPseudoRandomType v9; // esi
  KeyValues *Key; // rax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  float flChanceAmount; // [rsp+Ch] [rbp-24h]

  v4 = *(this->_vptr_CDOTA_ActionRunner + 2);
  String = KeyValues::GetString(pKV, "Chance", 0, 0, 0);
  flChanceAmount = v4(this, String, 0.0);
  v6 = KeyValues::GetString(pKV, "PseudoRandom", 0, 0, 0);
  v7 = flChanceAmount;
  v8 = v6;
  if ( v6 != 0 )
  {
    if ( v6 == "DOTA_PSEUDO_RANDOM_PHANTOMASSASSIN_CRIT" )
    {
      v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_PHANTOMASSASSIN_CRIT;
    }
    else
    {
      v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_PHANTOMASSASSIN_CRIT;
      if ( strcmp(v6, "DOTA_PSEUDO_RANDOM_PHANTOMASSASSIN_CRIT") != 0 )
      {
        if ( v6 == "DOTA_PSEUDO_RANDOM_SLARDAR_BASH" )
        {
          v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_SLARDAR_BASH;
        }
        else
        {
          v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_SLARDAR_BASH;
          if ( strcmp(v6, "DOTA_PSEUDO_RANDOM_SLARDAR_BASH") != 0 )
          {
            if ( v6 == "DOTA_PSEUDO_RANDOM_FACELESS_BASH" )
            {
              v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_FACELESS_BASH;
            }
            else
            {
              v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_FACELESS_BASH;
              if ( strcmp(v6, "DOTA_PSEUDO_RANDOM_FACELESS_BASH") != 0 )
              {
                if ( v6 == "DOTA_PSEUDO_RANDOM_BREWMASTER_CRIT" )
                {
                  v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_BREWMASTER_CRIT;
                }
                else
                {
                  v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_BREWMASTER_CRIT;
                  if ( strcmp(v6, "DOTA_PSEUDO_RANDOM_BREWMASTER_CRIT") != 0 )
                  {
                    if ( v6 == "DOTA_PSEUDO_RANDOM_SNIPER_HEADSHOT" )
                    {
                      v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_SNIPER_HEADSHOT;
                    }
                    else
                    {
                      v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_SNIPER_HEADSHOT;
                      if ( strcmp(v6, "DOTA_PSEUDO_RANDOM_SNIPER_HEADSHOT") != 0 )
                      {
                        if ( v6 == "DOTA_PSEUDO_RANDOM_JUGG_CRIT" )
                        {
                          v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_JUGG_CRIT;
                        }
                        else
                        {
                          v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_JUGG_CRIT;
                          if ( strcmp(v6, "DOTA_PSEUDO_RANDOM_JUGG_CRIT") != 0 )
                          {
                            if ( v6 == "DOTA_PSEUDO_RANDOM_CHAOS_CRIT" )
                            {
                              v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_CHAOS_CRIT;
                            }
                            else
                            {
                              v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_CHAOS_CRIT;
                              if ( strcmp(v6, "DOTA_PSEUDO_RANDOM_CHAOS_CRIT") != 0 )
                              {
                                if ( v6 == "DOTA_PSEUDO_RANDOM_LYCAN_CRIT" )
                                {
                                  v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_LYCAN_CRIT;
                                }
                                else
                                {
                                  v12 = strcmp(v6, "DOTA_PSEUDO_RANDOM_LYCAN_CRIT");
                                  v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_LYCAN_CRIT;
                                  v7 = flChanceAmount;
                                  if ( v12 != 0 )
                                  {
                                    if ( v8 == "DOTA_PSEUDO_RANDOM_SKELETONKING_CRIT" )
                                    {
                                      v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_SKELETONKING_CRIT;
                                    }
                                    else
                                    {
                                      v13 = strcmp(v8, "DOTA_PSEUDO_RANDOM_SKELETONKING_CRIT");
                                      v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_SKELETONKING_CRIT;
                                      v7 = flChanceAmount;
                                      if ( v13 != 0 )
                                      {
                                        if ( v8 == "DOTA_PSEUDO_RANDOM_ITEM_GREATERCRIT" )
                                        {
                                          v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_GREATERCRIT;
                                        }
                                        else
                                        {
                                          v14 = strcmp(v8, "DOTA_PSEUDO_RANDOM_ITEM_GREATERCRIT");
                                          v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_GREATERCRIT;
                                          v7 = flChanceAmount;
                                          if ( v14 != 0 )
                                          {
                                            if ( v8 == "DOTA_PSEUDO_RANDOM_ITEM_LESSERCRIT" )
                                            {
                                              v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_LESSERCRIT;
                                            }
                                            else
                                            {
                                              v15 = strcmp(v8, "DOTA_PSEUDO_RANDOM_ITEM_LESSERCRIT");
                                              v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_LESSERCRIT;
                                              v7 = flChanceAmount;
                                              if ( v15 != 0 )
                                              {
                                                if ( v8 == "DOTA_PSEUDO_RANDOM_ITEM_BASHER" )
                                                {
                                                  v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_BASHER;
                                                }
                                                else
                                                {
                                                  v16 = strcmp(v8, "DOTA_PSEUDO_RANDOM_ITEM_BASHER");
                                                  v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_BASHER;
                                                  v7 = flChanceAmount;
                                                  if ( v16 != 0 )
                                                  {
                                                    if ( v8 == "DOTA_PSEUDO_RANDOM_ITEM_ABYSSAL" )
                                                    {
                                                      v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_ABYSSAL;
                                                    }
                                                    else
                                                    {
                                                      v17 = strcmp(v8, "DOTA_PSEUDO_RANDOM_ITEM_ABYSSAL");
                                                      v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_ABYSSAL;
                                                      v7 = flChanceAmount;
                                                      if ( v17 != 0 )
                                                      {
                                                        if ( v8 == "DOTA_PSEUDO_RANDOM_ITEM_STOUT" )
                                                        {
                                                          v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_STOUT;
                                                        }
                                                        else
                                                        {
                                                          v18 = strcmp(v8, "DOTA_PSEUDO_RANDOM_ITEM_STOUT");
                                                          v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_STOUT;
                                                          v7 = flChanceAmount;
                                                          if ( v18 != 0 )
                                                          {
                                                            if ( v8 == "DOTA_PSEUDO_RANDOM_ITEM_VANGUARD" )
                                                            {
                                                              v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_VANGUARD;
                                                            }
                                                            else
                                                            {
                                                              v19 = strcmp(v8, "DOTA_PSEUDO_RANDOM_ITEM_VANGUARD");
                                                              v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_VANGUARD;
                                                              v7 = flChanceAmount;
                                                              if ( v19 != 0 )
                                                              {
                                                                if ( v8 == "DOTA_PSEUDO_RANDOM_ITEM_PMS" )
                                                                {
                                                                  v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_PMS;
                                                                }
                                                                else
                                                                {
                                                                  v20 = strcmp(v8, "DOTA_PSEUDO_RANDOM_ITEM_PMS");
                                                                  v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_PMS;
                                                                  v7 = flChanceAmount;
                                                                  if ( v20 != 0 )
                                                                  {
                                                                    if ( v8 == "DOTA_PSEUDO_RANDOM_ITEM_HALBRED_MAIM" )
                                                                    {
                                                                      v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_HALBRED_MAIM;
                                                                    }
                                                                    else
                                                                    {
                                                                      v21 = strcmp(
                                                                              v8,
                                                                              "DOTA_PSEUDO_RANDOM_ITEM_HALBRED_MAIM");
                                                                      v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_HALBRED_MAIM;
                                                                      v7 = flChanceAmount;
                                                                      if ( v21 != 0 )
                                                                      {
                                                                        if ( v8 == "DOTA_PSEUDO_RANDOM_ITEM_SANGEYASHA_MAIM" )
                                                                        {
                                                                          v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_SANGEYASHA_MAIM;
                                                                        }
                                                                        else
                                                                        {
                                                                          v22 = strcmp(
                                                                                  v8,
                                                                                  "DOTA_PSEUDO_RANDOM_ITEM_SANGEYASHA_MAIM");
                                                                          v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_SANGEYASHA_MAIM;
                                                                          v7 = flChanceAmount;
                                                                          if ( v22 != 0 )
                                                                          {
                                                                            if ( v8 == "DOTA_PSEUDO_RANDOM_ITEM_SANGE_MAIM" )
                                                                            {
                                                                              v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_SANGE_MAIM;
                                                                            }
                                                                            else
                                                                            {
                                                                              v23 = strcmp(
                                                                                      v8,
                                                                                      "DOTA_PSEUDO_RANDOM_ITEM_SANGE_MAIM");
                                                                              v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_SANGE_MAIM;
                                                                              v7 = flChanceAmount;
                                                                              if ( v23 != 0 )
                                                                              {
                                                                                if ( v8 == "DOTA_PSEUDO_RANDOM_ITEM_BUTTERFLY" )
                                                                                {
                                                                                  v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_BUTTERFLY;
                                                                                }
                                                                                else
                                                                                {
                                                                                  v24 = strcmp(
                                                                                          v8,
                                                                                          "DOTA_PSEUDO_RANDOM_ITEM_BUTTERFLY");
                                                                                  v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_BUTTERFLY;
                                                                                  v7 = flChanceAmount;
                                                                                  if ( v24 != 0 )
                                                                                  {
                                                                                    if ( v8 == "DOTA_PSEUDO_RANDOM_ITEM_MAELSTROM" )
                                                                                    {
                                                                                      v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_MAELSTROM;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                      v25 = strcmp(
                                                                                              v8,
                                                                                              "DOTA_PSEUDO_RANDOM_ITEM_MAELSTROM");
                                                                                      v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_MAELSTROM;
                                                                                      v7 = flChanceAmount;
                                                                                      if ( v25 != 0 )
                                                                                      {
                                                                                        if ( v8 == "DOTA_PSEUDO_RANDOM_ITEM_MJOLLNIR" )
                                                                                        {
                                                                                          v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_MJOLLNIR;
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                          v26 = strcmp(
                                                                                                  v8,
                                                                                                  "DOTA_PSEUDO_RANDOM_ITEM_MJOLLNIR");
                                                                                          v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_MJOLLNIR;
                                                                                          v7 = flChanceAmount;
                                                                                          if ( v26 != 0 )
                                                                                          {
                                                                                            if ( v8 == "DOTA_PSEUDO_RANDOM_ITEM_MJOLLNIR_STATIC" )
                                                                                            {
                                                                                              v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_MJOLLNIR_STATIC;
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                              v27 = strcmp(v8, "DOTA_PSEUDO_RANDOM_ITEM_MJOLLNIR_STATIC");
                                                                                              v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_MJOLLNIR_STATIC;
                                                                                              v7 = flChanceAmount;
                                                                                              if ( v27 != 0 )
                                                                                              {
                                                                                                if ( v8 == "DOTA_PSEUDO_RANDOM_ITEM_MKB" )
                                                                                                {
                                                                                                  v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_MKB;
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                  v28 = strcmp(v8, "DOTA_PSEUDO_RANDOM_ITEM_MKB");
                                                                                                  v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_MKB;
                                                                                                  v7 = flChanceAmount;
                                                                                                  if ( v28 != 0 )
                                                                                                  {
                                                                                                    if ( v8 == "DOTA_PSEUDO_RANDOM_TROLL_BASH" )
                                                                                                    {
                                                                                                      v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_TROLL_BASH;
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                      v29 = strcmp(v8, "DOTA_PSEUDO_RANDOM_TROLL_BASH");
                                                                                                      v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_TROLL_BASH;
                                                                                                      v7 = flChanceAmount;
                                                                                                      if ( v29 != 0 )
                                                                                                      {
                                                                                                        DevMsg("%s is not a pseudorandom enum value.\n", v8);
                                                                                                        v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_NONE;
                                                                                                        v7 = flChanceAmount;
                                                                                                      }
                                                                                                    }
                                                                                                  }
                                                                                                }
                                                                                              }
                                                                                            }
                                                                                          }
                                                                                        }
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    v9 = DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_NONE;
  }
  if ( RollPseudoRandomPercentage(v7, v9, this->m_pCaster) )
  {
    Key = KeyValues::FindKey(pKV, "OnSuccess", 0);
    if ( Key != 0 )
      return CDOTA_ActionRunner::PerformActions_Core(this, Key);
  }
  else
  {
    Key = KeyValues::FindKey(pKV, "OnFailure", 0);
    if ( Key != 0 )
      return CDOTA_ActionRunner::PerformActions_Core(this, Key);
  }
  return 0;
}


// CDOTA_ActionRunner::PrecacheAction_SpawnUnit  (line 2037, @0x0000000002425d60, libserver.so)
// calls: KeyValues::GetString, DOTA_PrecacheUnitByNameSync, KeyValues::FindKey, CDOTA_ActionRunner::PrecacheActions
// callers: CDOTA_ActionRunner::PrecacheActions
void __fastcall CDOTA_ActionRunner::PrecacheAction_SpawnUnit(KeyValues *pKV, const CEntityPrecacheContext *pContext)
{
  const char *String; // rax
  KeyValues *Key; // rax

  String = KeyValues::GetString(pKV, "UnitName", 0, 0, 0);
  if ( String != 0 )
    DOTA_PrecacheUnitByNameSync(String, pContext, -1);
  Key = KeyValues::FindKey(pKV, "OnSpawn", 0);
  if ( Key != 0 )
    CDOTA_ActionRunner::PrecacheActions(Key, pContext);
}


// CDOTA_ActionRunner::PerformAction_SpawnUnit  (line 2052, @0x0000000002452f80, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetAbilityData, GetActionCaster, GetActionTeamNumber, GetBool, GetEHandle, GetEntryIndex, GetInitialGoalEntity, GetInstance, GetLevel, GetMaxLevel, GetSerialNumber, GetTeamNumber, GetUnitName, NextEntByClass<CDOTA_BaseNPC>, PerformActions, QAngle, RandomYawVector, Set, SetDeathXP, SetInitialGoalEntity, SetMaximumGoldBounty, SetMinimumGoldBounty, SetTarget, String, ToCStr, VectorMultiply, _V_strcmp, operator CBaseEntity*, operator*, operator+=, operator=, operator[], ~CUtlVector
// calls: KeyValues::GetString, KeyValues::FindKey, KeyValues::GetName, DevMsg(char const*,...), CDOTA_ActionRunner::SelectActionPoints, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, CGameEntitySystem::NextEnt, __dynamic_cast, _Unwind_Resume, __stack_chk_fail, strcmp, KeyValues::GetInt (26 total)
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "%s - no Target specified for %s.", "UnitCount", "UnitLimit", "SpawnRadius", "GrantsXP", "GrantsGold" (9 total)
bool __fastcall CDOTA_ActionRunner::PerformAction_SpawnUnit(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  KeyValues *Key; // rbx
  const char *Name; // r12
  const char *v5; // rax
  __int64 (__fastcall *v7)(CDOTA_ActionRunner *const, const char *, __int64); // rbx
  const char *String; // rax
  __int64 (__fastcall *v9)(CDOTA_ActionRunner *const, const char *, __int64); // rbx
  const char *v10; // rax
  int v11; // r13d
  CGameEntitySystem *v12; // r12
  CBaseEntity *i; // rax
  CBaseEntity *v14; // r14
  CBaseEntity *v15; // rbx
  int v16; // r12d
  const char *delta; // rdi
  CGameEntitySystem *v18; // r14
  CBaseEntity *j; // rax
  CBaseEntity *v20; // r15
  int v21; // r13d
  float (__fastcall *v22)(CDOTA_ActionRunner *const, const char *, double); // rbx
  unsigned int v23; // r12d
  const char *v24; // rax
  float (__fastcall *v25)(CDOTA_ActionRunner *const, const char *, double); // rbx
  const char *v26; // rax
  float v27; // xmm2_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  CDOTA_BaseNPC *m_pCaster; // rax
  int m_Value; // esi
  CDOTA_BaseNPC *v32; // r14
  CDOTA_BaseNPC *v33; // rax
  __int64 v34; // rsi
  CDOTA_BaseNPC *v35; // rdi
  int v36; // eax
  int k; // r15d
  CDOTABaseAbility *AbilityByIndex; // r12
  int v39; // ebx
  DOTAAbilityData_t *m_pAbilityData; // rax
  int v41; // r13d
  KeyValues *v42; // rax
  CEntityIdentity *v43; // rcx
  int v44; // edx
  __int16 v45; // di
  const CModifierParams *m_pEventContext; // rbx
  CDOTA_BaseNPC *v47; // r12
  float v48; // xmm1_4
  CDOTABaseAbility *v49; // rax
  CEntityInstance *v50; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v52; // eax
  __int16 v53; // cx
  __int128 v54; // [rsp+0h] [rbp-1A0h]
  int v55; // [rsp+10h] [rbp-190h]
  int v56; // [rsp+14h] [rbp-18Ch]
  int v57; // [rsp+18h] [rbp-188h]
  int Int; // [rsp+1Ch] [rbp-184h]
  __int64 v59; // [rsp+38h] [rbp-168h]
  int nPointsIter; // [rsp+40h] [rbp-160h]
  float flDuration; // [rsp+44h] [rbp-15Ch]
  const char *pszUnitName; // [rsp+48h] [rbp-158h]
  float y; // [rsp+58h] [rbp-148h]
  float z; // [rsp+5Ch] [rbp-144h]
  int nSpawnIndex; // [rsp+60h] [rbp-140h]
  float x; // [rsp+64h] [rbp-13Ch]
  float flSpawnRadius; // [rsp+70h] [rbp-130h]
  int nUnitCount; // [rsp+74h] [rbp-12Ch]
  Vector v71; // [rsp+80h] [rbp-120h]
  QAngle angle; // [rsp+90h] [rbp-110h] BYREF
  CUtlVector<Vector,CUtlMemory<Vector,int> > points; // [rsp+A0h] [rbp-100h] BYREF
  CModifierParams prms; // [rsp+C0h] [rbp-E0h] BYREF
  KeyValues kv; // [rsp+150h] [rbp-50h] BYREF
  unsigned __int64 v76; // [rsp+168h] [rbp-38h]

  v76 = __readfsqword(0x28u);
  pszUnitName = KeyValues::GetString(pKV, "UnitName", 0, 0, 0);
  if ( pszUnitName != 0 )
  {
    Key = KeyValues::FindKey(pKV, "Target", 0);
    if ( Key == 0 )
    {
      Name = KeyValues::GetName(pKV);
      v5 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
      DevMsg("%s - no Target specified for %s.", v5, Name);
    }
    points.m_Size = 0;
    points.m_Memory.m_pMemory = 0;
    points.m_Memory.m_nAllocationCount = 0;
    points.m_Memory.m_nGrowSize = 0;
    CDOTA_ActionRunner::SelectActionPoints(this, &points, Key);
    if ( points.m_Size != 0 )
    {
      v7 = *(this->_vptr_CDOTA_ActionRunner + 1);
      String = KeyValues::GetString(pKV, "UnitCount", 0, 0, 0);
      nUnitCount = v7(this, String, 1);
      v9 = *(this->_vptr_CDOTA_ActionRunner + 1);
      v10 = KeyValues::GetString(pKV, "UnitLimit", 0, 0, 0);
      v11 = v9(this, v10, 0xFFFFFFFFLL);
      if ( v11 > 0 )
      {
        v12 = g_pGameEntitySystem;
        for ( i = CGameEntitySystem::NextEnt(g_pGameEntitySystem, 0); ; i = CGameEntitySystem::NextEnt(v12, v14) )
        {
          v14 = i;
          if ( i == 0 )
          {
            v16 = 0;
            goto LABEL_23;
          }
          v15 = __dynamic_cast(i, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_BaseNPC, 0);
          if ( v15 != 0 )
            break;
        }
        v16 = 0;
LABEL_13:
        delta = "";
        if ( v15[4].m_pfnUse.__delta != 0 )
          delta = v15[4].m_pfnUse.__delta;
        if ( strcmp(delta, pszUnitName) == 0 )
          v16 -= ((*(v15->_vptr_IHandleEntity + 408))(v15) == 0) - 1;
        v18 = g_pGameEntitySystem;
        for ( j = CGameEntitySystem::NextEnt(g_pGameEntitySystem, v15); ; j = CGameEntitySystem::NextEnt(v18, v20) )
        {
          v20 = j;
          if ( j == 0 )
            break;
          v15 = __dynamic_cast(j, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_BaseNPC, 0);
          if ( v15 != 0 )
            goto LABEL_13;
        }
LABEL_23:
        v21 = v11 - v16;
        if ( v21 < 0 )
          v21 = 0;
        if ( nUnitCount <= v21 )
          v21 = nUnitCount;
        nUnitCount = v21;
      }
      if ( nUnitCount > 0 )
      {
        v22 = *(this->_vptr_CDOTA_ActionRunner + 2);
        v23 = nUnitCount == 1 ? 0 : 1128792064;
        v24 = KeyValues::GetString(pKV, "SpawnRadius", 0, 0, 0);
        flSpawnRadius = v22(this, v24, *_mm_cvtsi32_si128(v23).m128i_i64);
        v25 = *(this->_vptr_CDOTA_ActionRunner + 2);
        v26 = KeyValues::GetString(pKV, "Duration", 0, 0, 0);
        flDuration = v25(this, v26, 0.0);
        Int = KeyValues::GetInt(pKV, "GrantsXP", 0);
        v57 = KeyValues::GetInt(pKV, "GrantsGold", 0);
        v56 = KeyValues::GetInt(pKV, "EvenDistribution", 0);
        v55 = KeyValues::GetInt(pKV, "SkipAdjustingPosition", 0);
        if ( points.m_Size > 0 )
        {
          v59 = 0;
          for ( nPointsIter = 0; points.m_Size > nPointsIter; ++nPointsIter )
          {
            nSpawnIndex = 0;
            x = points.m_Memory.m_pMemory[v59].x;
            y = points.m_Memory.m_pMemory[v59].y;
            z = points.m_Memory.m_pMemory[v59].z;
            do
            {
              if ( flSpawnRadius <= 0.0 )
              {
                v29 = z;
                v28 = y;
                v27 = x;
LABEL_37:
                m_pCaster = this->m_pCaster;
                if ( m_pCaster != 0 )
                  goto LABEL_38;
                goto LABEL_72;
              }
              if ( v56 != 0 )
              {
                angle.x = 0.0;
                angle.z = 0.0;
                angle.y = (nSpawnIndex / nUnitCount) * 360.0;
                AngleVectors(&angle, &prms, 0, 0);
                v27 = (*&prms.ability.m_Index * flSpawnRadius) + x;
                v28 = (prms.fDamage * flSpawnRadius) + y;
                v29 = (prms.fOriginalDamage * flSpawnRadius) + z;
                goto LABEL_37;
              }
              angle.y = RandomFloat(0.0, 360.0);
              angle.x = 0.0;
              angle.z = 0.0;
              AngleVectors(&angle, &prms, 0, 0);
              m_pCaster = this->m_pCaster;
              v27 = (*&prms.ability.m_Index * flSpawnRadius) + x;
              v28 = (prms.fDamage * flSpawnRadius) + y;
              v29 = (prms.fOriginalDamage * flSpawnRadius) + z;
              if ( m_pCaster != 0 )
              {
LABEL_38:
                m_Value = m_pCaster->m_iTeamNum.m_Value;
                goto LABEL_39;
              }
LABEL_72:
              m_Value = 0;
LABEL_39:
              *&v71.x = __PAIR64__(LODWORD(v28), LODWORD(v27));
              v71.z = v29;
              v32 = DOTA_Character_ScriptSpawn_Synchronous(pszUnitName, v54, m_Value, 0, 0, 0);
              if ( v55 == 0 )
                FindClearSpaceForUnit(v32, v71, 1);
              if ( v32 != 0 )
              {
                v33 = this->m_pCaster;
                if ( v33 != 0 )
                  v34 = v33->m_iTeamNum.m_Value;
                else
                  v34 = 0;
                (*(v32->_vptr_IHandleEntity + 70))(v32, v34);
                (*(v32->_vptr_IHandleEntity + 40))(v32, this->m_pCaster);
                v35 = this->m_pCaster;
                if ( v35 != 0 )
                {
                  v36 = (*(v35->_vptr_IHandleEntity + 414))(v35);
                  CDOTA_BaseNPC::SetControllableByPlayer(v32, v36, 1);
                  if ( CEntityHandle::operator CEntityInstance *(&v32->m_initialGoalEntity) == 0 )
                  {
                    *(&v54 + 1) = this->m_pCaster;
                    v50 = CEntityHandle::operator CEntityInstance *((*(&v54 + 1) + 3500LL));
                    if ( v50 != 0 && (m_pEntity = v50->m_pEntity) != 0 )
                    {
                      v52 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                      v53 = 0x7FFF;
                      if ( m_pEntity->m_EHandle.m_Index != -1 )
                        v53 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                      LOWORD(v32->m_initialGoalEntity.m_Index) = v53 | v32->m_initialGoalEntity.m_Index & 0x8000;
                      v32->m_initialGoalEntity.m_Index = (v52 << 15) | v32->m_initialGoalEntity.m_Index & 0x7FFF;
                    }
                    else
                    {
                      v32->m_initialGoalEntity.m_Index = -1;
                    }
                  }
                }
                if ( Int == 0 )
                  v32->m_iXPBounty = 0;
                if ( v57 == 0 )
                {
                  v32->m_iGoldBountyMax = 0;
                  v32->m_iGoldBountyMin = 0;
                }
                for ( k = 0; k != 24; ++k )
                {
                  AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v32, k);
                  if ( AbilityByIndex != 0 && v32->m_iCurrentLevel.m_Value > 0 )
                  {
                    v39 = 0;
                    do
                    {
                      while ( 1 )
                      {
                        m_pAbilityData = AbilityByIndex->m_pAbilityData;
                        v41 = AbilityByIndex->m_iLevel.m_Value;
                        if ( m_pAbilityData == 0 )
                        {
                          CDOTABaseAbility::LoadAbilityData(AbilityByIndex, 0);
                          m_pAbilityData = AbilityByIndex->m_pAbilityData;
                        }
                        if ( v41 < m_pAbilityData->m_iMaxLevel )
                          break;
                        if ( ++v39 >= v32->m_iCurrentLevel.m_Value )
                          goto LABEL_59;
                      }
                      CDOTABaseAbility::UpgradeAbility(AbilityByIndex, 0);
                      ++v39;
                    }
                    while ( v39 < v32->m_iCurrentLevel.m_Value );
                  }
LABEL_59:
                  ;
                }
                v42 = KeyValues::FindKey(pKV, "OnSpawn", 0);
                if ( v42 != 0 )
                {
                  prms.ability.m_Index = -1;
                  prms.fDamage = 0.0;
                  prms.fOriginalDamage = 0.0;
                  prms.nActivity = -1;
                  prms.bTooltip = 0;
                  prms.nTooltipParam = 0;
                  prms.bIgnoreInvis = 0;
                  prms.bNoCooldown = 0;
                  prms.bReincarnate = 0;
                  prms.bDoNotConsume = 0;
                  prms.fDistance = 0.0;
                  prms.inflictor.m_Index = -1;
                  prms.nDamageflags = 0;
                  prms.nDamageCategory = 0;
                  memset(&prms.pOrb, 0, 24);
                  prms.bCraniumBasherTested = 0;
                  prms.bHeartRegenApplied = 0;
                  prms.bDiffusalApplied = 0;
                  prms.bChainLightningConsidered = 0;
                  prms.bSuppressDamage = 0;
                  prms.bRangedAttack = 0;
                  prms.nPlayerids_stick = 0;
                  prms.hattacker.m_Index = -1;
                  prms.htarget.m_Index = -1;
                  prms.hunit.m_Index = -1;
                  v43 = v32->m_pEntity;
                  if ( v43 != 0 )
                  {
                    v44 = (v43->m_EHandle.m_Index >> 15) - (v43->m_flags & 1);
                    v45 = 0x7FFF;
                    if ( v43->m_EHandle.m_Index != -1 )
                      v45 = v43->m_EHandle.m_Index & 0x7FFF;
                    LOWORD(prms.htarget.m_Index) = v45 | prms.htarget.m_Index & 0x8000;
                    prms.htarget.m_Index = (v44 << 15) | prms.htarget.m_Index & 0x7FFF;
                  }
                  m_pEventContext = this->m_pEventContext;
                  this->m_pEventContext = &prms;
                  v47 = this->m_pCaster;
                  CDOTA_ActionRunner::PerformActions_Core(this, v42);
                  this->m_pEventContext = m_pEventContext;
                  this->m_pCaster = v47;
                }
                if ( flDuration > 0.0 )
                {
                  KeyValues::KeyValues(&kv, "modifier_kill");
                  KeyValues::SetFloat(&kv, "duration", v48);
                  v49 = (*(this->_vptr_CDOTA_ActionRunner + 8))(this);
                  CDOTA_BaseNPC::AddNewModifier(v32, this->m_pCaster, v49, "modifier_kill", &kv, 0);
                  KeyValues::~KeyValues(&kv);
                }
              }
              ++nSpawnIndex;
            }
            while ( nSpawnIndex != nUnitCount );
            ++v59;
          }
        }
      }
    }
    CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::~CUtlVectorBase(&points);
  }
  return 0;
}


// CDOTA_ActionRunner::PerformAction_RemoveUnit  (line 2189, @0x0000000002440f20, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: KeyValues::FindKey, CDOTA_ActionRunner::SelectActionTargets, CDOTA_BaseNPC::Kill, UTIL_Remove, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, KeyValues::GetName, DevMsg(char const*,...), _Unwind_Resume
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "%s - no Target specified for %s."
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_ActionRunner::PerformAction_RemoveUnit(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  KeyValues *Key; // rbx
  __int64 v5; // r12
  int i; // ebx
  CHandle<CBaseEntity> *v7; // rdx
  uint32 m_Index; // eax
  __int16 v9; // cx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  const char *Name; // r13
  const char *v15; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > targets; // [rsp+0h] [rbp-40h] BYREF

  Key = KeyValues::FindKey(pKV, "Target", 0);
  if ( Key == 0 )
  {
    Name = KeyValues::GetName(pKV);
    v15 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
    DevMsg("%s - no Target specified for %s.", v15, Name);
  }
  targets.m_Size = 0;
  targets.m_Memory.m_pMemory = 0;
  targets.m_Memory.m_nAllocationCount = 0;
  targets.m_Memory.m_nGrowSize = 0;
  CDOTA_ActionRunner::SelectActionTargets(this, &targets, Key);
  v5 = 0;
  for ( i = 0; targets.m_Size > i; ++v5 )
  {
    while ( 1 )
    {
      v7 = &targets.m_Memory.m_pMemory[v5];
      m_Index = targets.m_Memory.m_pMemory[v5].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v9 = v7->m_Index;
        v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_Index) >> 9) & 0x3F];
        if ( v10 != 0 )
        {
          v11 = &v10[v9 & 0x1FF];
          if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
          {
            m_pInstance = v11->m_pInstance;
            if ( v11->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              break;
          }
        }
      }
      ++i;
      ++v5;
      if ( targets.m_Size <= i )
        goto LABEL_13;
    }
    CDOTA_BaseNPC::Kill(m_pInstance, 0, 0, 0.0, 0);
    UTIL_Remove(m_pInstance);
    ++i;
  }
LABEL_13:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&targets);
  return 0;
}


// CDOTA_ActionRunner::PerformAction_GrantXPGold  (line 2212, @0x0000000002441090, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetBool, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsHero, IsValid, LookupEntity, Script_GiveGold, Script_GiveXP, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: KeyValues::FindKey, CDOTA_ActionRunner::SelectActionTargets, KeyValues::GetFloat, KeyValues::GetInt, CDOTAHeroList::GiveXP, CDOTAHeroList::GiveGold, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, KeyValues::GetName, DevMsg(char const*,...), _Unwind_Resume
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "XPAmount", "GoldAmount", "SplitEvenly", "%s - no Target specified for %s."
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_ActionRunner::PerformAction_GrantXPGold(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  KeyValues *Key; // rbx
  float v5; // xmm1_4
  CHandle<CBaseEntity> *m_pMemory; // rdx
  int v7; // ebx
  CHandle<CBaseEntity> *v8; // rax
  CHandle<CBaseEntity> *v9; // rdi
  uint32 m_Index; // ecx
  __int16 v11; // si
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityInstance *m_pInstance; // rdx
  bool v15; // cf
  int Int; // r13d
  bool v17; // r14
  __int64 v18; // rbx
  CHandle<CBaseEntity> *v19; // rdx
  uint32 v20; // eax
  __int16 v21; // cx
  CEntityIdentity *v22; // rdx
  CEntityIdentity *v23; // rdx
  CEntityInstance *v24; // r12
  int v25; // eax
  const char *Name; // r14
  const char *v28; // rax
  float flXP; // [rsp+Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > targets; // [rsp+10h] [rbp-50h] BYREF

  Key = KeyValues::FindKey(pKV, "Target", 0);
  if ( Key == 0 )
  {
    Name = KeyValues::GetName(pKV);
    v28 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
    DevMsg("%s - no Target specified for %s.", v28, Name);
  }
  targets.m_Size = 0;
  targets.m_Memory.m_pMemory = 0;
  targets.m_Memory.m_nAllocationCount = 0;
  targets.m_Memory.m_nGrowSize = 0;
  CDOTA_ActionRunner::SelectActionTargets(this, &targets, Key);
  if ( targets.m_Size <= 0 )
    goto LABEL_28;
  m_pMemory = targets.m_Memory.m_pMemory;
  v7 = 0;
  v8 = targets.m_Memory.m_pMemory + 1;
  v9 = &targets.m_Memory.m_pMemory[targets.m_Size - 1 + 1];
  while ( 1 )
  {
    m_Index = m_pMemory->m_Index;
    if ( m_pMemory->m_Index + 2 > 1 )
    {
      v11 = m_pMemory->m_Index;
      v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
      if ( v12 != 0 )
      {
        v13 = &v12[v11 & 0x1FF];
        if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
        {
          m_pInstance = v13->m_pInstance;
          if ( m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
            break;
        }
      }
    }
    m_pMemory = v8;
    if ( v8 == v9 )
      goto LABEL_14;
LABEL_6:
    ++v8;
  }
  v15 = (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0;
  m_pMemory = v8;
  v7 -= v15 - 1;
  if ( v8 != v9 )
    goto LABEL_6;
LABEL_14:
  if ( v7 != 0 )
  {
    flXP = KeyValues::GetFloat(pKV, "XPAmount", v5);
    Int = KeyValues::GetInt(pKV, "GoldAmount", 0);
    v17 = KeyValues::GetInt(pKV, "ReliableGold", 0) != 0;
    if ( KeyValues::GetInt(pKV, "SplitEvenly", 0) != 0 )
    {
      flXP = flXP / v7;
      Int /= v7;
    }
    if ( targets.m_Size > 0 )
    {
      v18 = 0;
      do
      {
        while ( 1 )
        {
          v19 = &targets.m_Memory.m_pMemory[v18];
          v20 = v19->m_Index;
          if ( v19->m_Index + 2 > 1 )
          {
            v21 = v19->m_Index;
            v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v19->m_Index) >> 9) & 0x3F];
            if ( v22 != 0 )
            {
              v23 = &v22[v21 & 0x1FF];
              if ( v23 != 0 && v20 == v23->m_EHandle.m_Index )
              {
                v24 = v23->m_pInstance;
                if ( v23->m_pInstance != 0
                  && BYTE3(v24[7]._vptr_IHandleEntity) != 0
                  && (v24[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                {
                  break;
                }
              }
            }
          }
          if ( targets.m_Size <= ++v18 )
            goto LABEL_28;
        }
        CDOTAHeroList::GiveXP(&g_HeroList, v24, flXP, EDOTA_ModifyXP_Reason::DOTA_ModifyXP_Unspecified);
        v25 = (*(v24->_vptr_IHandleEntity + 414))(v24);
        CDOTAHeroList::GiveGold(&g_HeroList, v25, Int, v17, EDOTA_ModifyGold_Reason::DOTA_ModifyGold_Unspecified);
        ++v18;
      }
      while ( targets.m_Size > v18 );
    }
  }
LABEL_28:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&targets);
  return 0;
}


// CDOTA_ActionRunner::PerformAction_ReplaceUnit  (line 2259, @0x00000000024539e0, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, CUtlMemory, CUtlVector, CUtlVectorBase, CreateEvent, Get, GetActionCaster, GetActionTeamNumber, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetOwnerEntity, GetSerialNumber, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, PerformActions, Set, SetInt, SetTarget, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlVector
// calls: KeyValues::GetString, KeyValues::FindKey, CDOTA_ActionRunner::SelectActionTargets, CEntityInstance::GetEntityIndex, CBaseEntity::GetAbsOrigin, CEntityHandle::GetHandleEntity, UTIL_Remove, DOTA_Character_ScriptSpawn_Synchronous, CDOTA_BaseNPC::SetControllableByPlayer, CDOTA_ActionRunner::PerformActions_Core, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, KeyValues::GetName (14 total)
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "npc_replaced", "old_entindex", "new_entindex", "%s - no Target specified for %s."
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_ActionRunner::PerformAction_ReplaceUnit(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  KeyValues *Key; // rbx
  __int64 v5; // r14
  int v6; // r15d
  CHandle<CBaseEntity> *v7; // rdx
  uint32 m_Index; // eax
  __int16 v9; // cx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityInstance *m_pInstance; // rbx
  __int64 v13; // r12
  CEntityIndex v14; // eax
  CDOTA_BaseNPC *m_pCaster; // rax
  int m_Value; // esi
  CDOTA_BaseNPC *v17; // rax
  const CEntityInstance *v18; // rbx
  CEntityIndex v19; // eax
  KeyValues *v20; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v22; // ecx
  __int16 v23; // si
  const CModifierParams *m_pEventContext; // r12
  CDOTA_BaseNPC *v25; // rbx
  const char *Name; // r12
  const char *v28; // rax
  __int128 v29; // [rsp+0h] [rbp-120h]
  const char *pszUnitName; // [rsp+18h] [rbp-108h]
  CBaseEntity *pOwnerEntity; // [rsp+20h] [rbp-100h]
  int nPlayerID; // [rsp+2Ch] [rbp-F4h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > targets; // [rsp+40h] [rbp-E0h] BYREF
  CModifierParams prms; // [rsp+60h] [rbp-C0h] BYREF

  pszUnitName = KeyValues::GetString(pKV, "UnitName", 0, 0, 0);
  if ( pszUnitName != 0 )
  {
    Key = KeyValues::FindKey(pKV, "Target", 0);
    if ( Key == 0 )
    {
      Name = KeyValues::GetName(pKV);
      v28 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
      DevMsg("%s - no Target specified for %s.", v28, Name);
    }
    targets.m_Size = 0;
    targets.m_Memory.m_pMemory = 0;
    targets.m_Memory.m_nAllocationCount = 0;
    targets.m_Memory.m_nGrowSize = 0;
    *&v29 = &targets;
    CDOTA_ActionRunner::SelectActionTargets(this, &targets, Key);
    if ( targets.m_Size > 0 )
    {
      v5 = 0;
      v6 = 0;
      *(&v29 + 1) = &prms;
      do
      {
        v7 = &targets.m_Memory.m_pMemory[v5];
        m_Index = targets.m_Memory.m_pMemory[v5].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v9 = v7->m_Index;
          v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_Index) >> 9) & 0x3F];
          if ( v10 != 0 )
          {
            v11 = &v10[v9 & 0x1FF];
            if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
            {
              m_pInstance = v11->m_pInstance;
              if ( v11->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
              {
                v13 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "npc_replaced", 0, 0);
                if ( v13 != 0 )
                {
                  v14.m_Data = CEntityInstance::GetEntityIndex(m_pInstance).m_Data;
                  (*(*v13 + 112LL))(v13, "old_entindex", v14.m_Data);
                }
                CBaseEntity::GetAbsOrigin(m_pInstance);
                pOwnerEntity = CEntityHandle::GetHandleEntity(&m_pInstance[11].m_pEntity + 1);
                nPlayerID = m_pInstance[61].m_iszPrivateVScripts.u.m_Id;
                UTIL_Remove(m_pInstance);
                m_pCaster = this->m_pCaster;
                if ( m_pCaster != 0 )
                  m_Value = m_pCaster->m_iTeamNum.m_Value;
                else
                  m_Value = 0;
                v17 = DOTA_Character_ScriptSpawn_Synchronous(pszUnitName, v29, m_Value, pOwnerEntity, 0, 0);
                v18 = v17;
                if ( v17 != 0 )
                {
                  if ( nPlayerID != -1 )
                    CDOTA_BaseNPC::SetControllableByPlayer(v17, nPlayerID, 1);
                  if ( v13 != 0 )
                  {
                    v19.m_Data = CEntityInstance::GetEntityIndex(v18).m_Data;
                    (*(*v13 + 112LL))(v13, "new_entindex", v19.m_Data);
                    (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v13, 0);
                  }
                  v20 = KeyValues::FindKey(pKV, "OnSpawn", 0);
                  if ( v20 != 0 )
                  {
                    prms.fOriginalDamage = 0.0;
                    prms.nActivity = -1;
                    prms.bTooltip = 0;
                    prms.nTooltipParam = 0;
                    prms.bIgnoreInvis = 0;
                    prms.bNoCooldown = 0;
                    prms.bReincarnate = 0;
                    prms.bDoNotConsume = 0;
                    prms.fDistance = 0.0;
                    prms.inflictor.m_Index = -1;
                    prms.nDamageflags = 0;
                    prms.nDamageCategory = 0;
                    memset(&prms.pOrb, 0, 24);
                    prms.bCraniumBasherTested = 0;
                    prms.bHeartRegenApplied = 0;
                    prms.bDiffusalApplied = 0;
                    prms.bChainLightningConsidered = 0;
                    prms.bSuppressDamage = 0;
                    prms.bRangedAttack = 0;
                    prms.nPlayerids_stick = 0;
                    prms.hattacker.m_Index = -1;
                    prms.htarget.m_Index = -1;
                    prms.hunit.m_Index = -1;
                    prms.ability.m_Index = -1;
                    m_pEntity = v18->m_pEntity;
                    prms.fDamage = 0.0;
                    if ( m_pEntity != 0 )
                    {
                      v22 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                      v23 = 0x7FFF;
                      if ( m_pEntity->m_EHandle.m_Index != -1 )
                        v23 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                      LOWORD(prms.htarget.m_Index) = v23 | prms.htarget.m_Index & 0x8000;
                      prms.htarget.m_Index = (v22 << 15) | prms.htarget.m_Index & 0x7FFF;
                    }
                    m_pEventContext = this->m_pEventContext;
                    v25 = this->m_pCaster;
                    this->m_pEventContext = *(&v29 + 1);
                    CDOTA_ActionRunner::PerformActions_Core(this, v20);
                    this->m_pEventContext = m_pEventContext;
                    this->m_pCaster = v25;
                  }
                }
              }
            }
          }
        }
        ++v6;
        ++v5;
      }
      while ( targets.m_Size > v6 );
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(v29);
  }
  return 0;
}


// CDOTA_ActionRunner::PerformAction_RespawnHero  (line 2318, @0x0000000002441360, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: KeyValues::FindKey, CDOTA_ActionRunner::SelectActionTargets, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, KeyValues::GetName, DevMsg(char const*,...), _Unwind_Resume
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "%s - no Target specified for %s."
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_ActionRunner::PerformAction_RespawnHero(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  KeyValues *Key; // rbx
  __int64 v5; // r12
  int i; // ebx
  CHandle<CBaseEntity> *v7; // rdx
  uint32 m_Index; // eax
  __int16 v9; // cx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityInstance *m_pInstance; // r13
  const char *Name; // r13
  const char *v15; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > targets; // [rsp+0h] [rbp-40h] BYREF

  Key = KeyValues::FindKey(pKV, "Target", 0);
  if ( Key == 0 )
  {
    Name = KeyValues::GetName(pKV);
    v15 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
    DevMsg("%s - no Target specified for %s.", v15, Name);
  }
  targets.m_Size = 0;
  targets.m_Memory.m_pMemory = 0;
  targets.m_Memory.m_nAllocationCount = 0;
  targets.m_Memory.m_nGrowSize = 0;
  CDOTA_ActionRunner::SelectActionTargets(this, &targets, Key);
  v5 = 0;
  for ( i = 0; targets.m_Size > i; ++v5 )
  {
    while ( 1 )
    {
      v7 = &targets.m_Memory.m_pMemory[v5];
      m_Index = targets.m_Memory.m_pMemory[v5].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v9 = v7->m_Index;
        v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_Index) >> 9) & 0x3F];
        if ( v10 != 0 )
        {
          v11 = &v10[v9 & 0x1FF];
          if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
          {
            m_pInstance = v11->m_pInstance;
            if ( v11->m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
              && (*(m_pInstance->_vptr_IHandleEntity + 408))(v11->m_pInstance) == 0 )
            {
              break;
            }
          }
        }
      }
      ++i;
      ++v5;
      if ( targets.m_Size <= i )
        goto LABEL_15;
    }
    (*(m_pInstance->_vptr_IHandleEntity + 494))(m_pInstance, 0, 0, 0);
    ++i;
  }
LABEL_15:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&targets);
  return 0;
}


// CDOTA_ActionRunner::PrecacheAction_AddAbility  (line 2341, @0x00000000024258b0, libserver.so)
// calls: KeyValues::GetString, DOTA_PrecacheAbilityByNameSync
// callers: CDOTA_ActionRunner::PrecacheActions
void __fastcall CDOTA_ActionRunner::PrecacheAction_AddAbility(KeyValues *pKV, const CEntityPrecacheContext *pContext)
{
  const char *String; // rax

  String = KeyValues::GetString(pKV, "AbilityName", 0, 0, 0);
  if ( String != 0 )
    DOTA_PrecacheAbilityByNameSync(String, pContext);
}


// CDOTA_ActionRunner::PerformAction_AddAbility  (line 2349, @0x0000000002443220, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: KeyValues::GetString, KeyValues::FindKey, CDOTA_ActionRunner::SelectActionTargets, CDOTA_BaseNPC::GetAbilityByIndex, CDOTA_BaseNPC::GetAbilityCount, DevMsg(char const*,...), CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, DOTA_CreateAbility, CDOTA_BaseNPC::SetAbilityByIndex, KeyValues::GetName, _Unwind_Resume
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "%s - Unit doesn't have empty slot for ability %s.\n", "%s - Failed to create ability %s.\n", "%s - no Target specified for %s.\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_ActionRunner::PerformAction_AddAbility(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  KeyValues *Key; // r12
  __int64 v5; // r13
  CHandle<CBaseEntity> *v6; // rdx
  uint32 m_Index; // eax
  __int16 v8; // cx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  int v12; // ebx
  const char *v13; // rax
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v16; // r14
  const char *v17; // rax
  const char *Name; // rbx
  const char *v19; // rax
  const char *pszAbilityName; // [rsp+8h] [rbp-58h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > targets; // [rsp+10h] [rbp-50h] BYREF

  pszAbilityName = KeyValues::GetString(pKV, "AbilityName", 0, 0, 0);
  if ( pszAbilityName != 0 )
  {
    Key = KeyValues::FindKey(pKV, "Target", 0);
    if ( Key == 0 )
    {
      Name = KeyValues::GetName(pKV);
      v19 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
      DevMsg("%s - no Target specified for %s.\n", v19, Name);
    }
    targets.m_Size = 0;
    targets.m_Memory.m_pMemory = 0;
    targets.m_Memory.m_nAllocationCount = 0;
    targets.m_Memory.m_nGrowSize = 0;
    CDOTA_ActionRunner::SelectActionTargets(this, &targets, Key);
    if ( targets.m_Size > 0 )
    {
      v5 = 0;
      while ( 2 )
      {
        while ( 1 )
        {
          v6 = &targets.m_Memory.m_pMemory[v5];
          m_Index = v6->m_Index;
          if ( v6->m_Index + 2 > 1 )
          {
            v8 = v6->m_Index;
            v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6->m_Index) >> 9) & 0x3F];
            if ( v9 != 0 )
            {
              v10 = &v9[v8 & 0x1FF];
              if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
              {
                m_pInstance = v10->m_pInstance;
                if ( v10->m_pInstance != 0 )
                {
                  v12 = 0;
                  if ( m_pInstance->m_bIsDOTANPC )
                    break;
                }
              }
            }
          }
LABEL_6:
          if ( targets.m_Size <= ++v5 )
            goto LABEL_18;
        }
        while ( v12 < CDOTA_BaseNPC::GetAbilityCount(m_pInstance) )
        {
          if ( CDOTA_BaseNPC::GetAbilityByIndex(m_pInstance, v12) == 0 )
          {
            Ability = DOTA_CreateAbility(pszAbilityName, m_pInstance);
            v16 = Ability;
            if ( Ability != 0 )
            {
              CDOTA_BaseNPC::SetAbilityByIndex(m_pInstance, Ability, v12);
              (*(v16->_vptr_IHandleEntity + 262))(v16);
            }
            else
            {
              v17 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
              DevMsg("%s - Failed to create ability %s.\n", v17, pszAbilityName);
            }
            goto LABEL_6;
          }
          ++v12;
        }
        v13 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
        DevMsg("%s - Unit doesn't have empty slot for ability %s.\n", v13, pszAbilityName);
        if ( targets.m_Size > ++v5 )
          continue;
        break;
      }
    }
LABEL_18:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&targets);
  }
  return 0;
}


// CDOTA_ActionRunner::PerformAction_RemoveAbility  (line 2399, @0x00000000024414f0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CreateEvent, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: KeyValues::GetString, KeyValues::FindKey, CDOTA_ActionRunner::SelectActionTargets, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::GetAbilityCount, CDOTA_BaseNPC::GetAbilityByIndex, CDOTA_BaseNPC::RemoveAbilityFromIndex, UTIL_Remove, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, KeyValues::GetName, DevMsg(char const*,...), _Unwind_Resume
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "dota_force_portrait_update", "%s - no Target specified for %s.\n", "%s - Unit does not have ability %s.\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_ActionRunner::PerformAction_RemoveAbility(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  const char *String; // r15
  KeyValues *Key; // r12
  __int64 v5; // r14
  CHandle<CBaseEntity> *v6; // rdx
  uint32 m_Index; // eax
  __int16 v8; // cx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTABaseAbility *AbilityByName; // r13
  int i; // ebx
  __int64 v14; // rax
  const char *Name; // rbx
  const char *v17; // rax
  const char *v18; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > targets; // [rsp+10h] [rbp-50h] BYREF

  String = KeyValues::GetString(pKV, "AbilityName", 0, 0, 0);
  if ( String != 0 )
  {
    Key = KeyValues::FindKey(pKV, "Target", 0);
    if ( Key == 0 )
    {
      Name = KeyValues::GetName(pKV);
      v17 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
      DevMsg("%s - no Target specified for %s.\n", v17, Name);
    }
    targets.m_Size = 0;
    targets.m_Memory.m_pMemory = 0;
    targets.m_Memory.m_nAllocationCount = 0;
    targets.m_Memory.m_nGrowSize = 0;
    CDOTA_ActionRunner::SelectActionTargets(this, &targets, Key);
    if ( targets.m_Size > 0 )
    {
      v5 = 0;
      do
      {
LABEL_7:
        v6 = &targets.m_Memory.m_pMemory[v5];
        m_Index = v6->m_Index;
        if ( v6->m_Index + 2 > 1 )
        {
          v8 = v6->m_Index;
          v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6->m_Index) >> 9) & 0x3F];
          if ( v9 != 0 )
          {
            v10 = &v9[v8 & 0x1FF];
            if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
            {
              m_pInstance = v10->m_pInstance;
              if ( v10->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              {
                AbilityByName = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, String, 0);
                if ( AbilityByName == 0 )
                {
                  v18 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
                  DevMsg("%s - Unit does not have ability %s.\n", v18, String);
                }
                for ( i = 0; i < CDOTA_BaseNPC::GetAbilityCount(m_pInstance); ++i )
                {
                  if ( AbilityByName == CDOTA_BaseNPC::GetAbilityByIndex(m_pInstance, i) )
                  {
                    CDOTA_BaseNPC::RemoveAbilityFromIndex(m_pInstance, i);
                    UTIL_Remove(AbilityByName);
                    v14 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(
                            gameeventmanager,
                            "dota_force_portrait_update",
                            0,
                            0);
                    if ( v14 == 0 )
                      break;
                    (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v14, 0);
                    if ( targets.m_Size > ++v5 )
                      goto LABEL_7;
                    goto LABEL_21;
                  }
                }
              }
            }
          }
        }
        ++v5;
      }
      while ( targets.m_Size > v5 );
    }
LABEL_21:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&targets);
  }
  return 0;
}


// CDOTA_ActionRunner::PerformAction_LevelUpAbility  (line 2446, @0x0000000002441720, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevel, GetMaxLevel, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: KeyValues::GetString, KeyValues::FindKey, CDOTA_ActionRunner::SelectActionTargets, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, KeyValues::GetName, DevMsg(char const*,...), CDOTABaseAbility::LoadAbilityData, _Unwind_Resume
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "%s - no Target specified for %s.\n", "%s - Unit does not have ability %s.\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_ActionRunner::PerformAction_LevelUpAbility(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  const char *String; // r14
  KeyValues *Key; // r12
  __int64 v6; // rbx
  CHandle<CBaseEntity> *v7; // rdx
  uint32 m_Index; // eax
  __int16 v9; // cx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v14; // r12
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_Value; // r13d
  const char *Name; // rbx
  const char *v19; // rax
  const char *v20; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > targets; // [rsp+10h] [rbp-50h] BYREF

  String = KeyValues::GetString(pKV, "AbilityName", 0, 0, 0);
  if ( String != 0 )
  {
    Key = KeyValues::FindKey(pKV, "Target", 0);
    if ( Key == 0 )
    {
      Name = KeyValues::GetName(pKV);
      v19 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
      DevMsg("%s - no Target specified for %s.\n", v19, Name);
    }
    targets.m_Size = 0;
    targets.m_Memory.m_pMemory = 0;
    targets.m_Memory.m_nAllocationCount = 0;
    targets.m_Memory.m_nGrowSize = 0;
    CDOTA_ActionRunner::SelectActionTargets(this, &targets, Key);
    if ( targets.m_Size > 0 )
    {
      v6 = 0;
      while ( 1 )
      {
        v7 = &targets.m_Memory.m_pMemory[v6];
        m_Index = v7->m_Index;
        if ( v7->m_Index + 2 <= 1 )
          goto LABEL_6;
        v9 = v7->m_Index;
        v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_Index) >> 9) & 0x3F];
        if ( v10 == 0 )
          goto LABEL_6;
        v11 = &v10[v9 & 0x1FF];
        if ( v11 == 0 )
          goto LABEL_6;
        if ( m_Index != v11->m_EHandle.m_Index )
          goto LABEL_6;
        m_pInstance = v11->m_pInstance;
        if ( v11->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC )
          goto LABEL_6;
        AbilityByName = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, String, 0);
        v14 = AbilityByName;
        if ( AbilityByName == 0 )
          goto LABEL_20;
        m_pAbilityData = AbilityByName->m_pAbilityData;
        m_Value = v14->m_iLevel.m_Value;
        if ( m_pAbilityData == 0 )
        {
          CDOTABaseAbility::LoadAbilityData(v14, 0);
          m_pAbilityData = v14->m_pAbilityData;
        }
        if ( m_Value == m_pAbilityData->m_iMaxLevel )
        {
LABEL_20:
          v20 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
          DevMsg("%s - Unit does not have ability %s.\n", v20, String);
LABEL_6:
          if ( targets.m_Size <= ++v6 )
            break;
        }
        else
        {
          CDOTABaseAbility::UpgradeAbility(v14, 0);
          if ( targets.m_Size <= ++v6 )
            break;
        }
      }
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&targets);
  }
  return 0;
}


// CDOTA_ActionRunner::PerformAction_CleaveAttack  (line 2481, @0x00000000024258f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: KeyValues::GetString, DoCleaveAttack, CEntityHandle::operator CEntityInstance*
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "CleavePercent", "CleaveRadius", "CleaveEffect", "battlefury_cleave"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_ActionRunner::PerformAction_CleaveAttack(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  __int64 (__fastcall *v4)(CDOTA_ActionRunner *const, const char *, _QWORD); // r13
  const char *String; // rax
  int v6; // r14d
  __int64 (__fastcall *v7)(CDOTA_ActionRunner *const, const char *, _QWORD); // r13
  const char *v8; // rax
  int v9; // r13d
  const char *v10; // rax
  const CModifierParams *m_pEventContext; // rdx
  const char *v12; // r12
  int (**vptr_CDOTA_ActionRunner)(...); // rax
  CDOTABaseAbility *v14; // rax
  const CModifierParams *v15; // rsi
  uint32 m_Index; // ecx
  unsigned __int16 v17; // dx
  CEntityIdentity *v18; // rsi
  CEntityIdentity *v19; // rsi
  CDOTA_BaseNPC *m_pInstance; // rsi
  CDOTABaseAbility *v22; // r12
  CEntityInstance *v23; // rax
  CDOTA_BaseNPC *v24; // rsi
  float flDamage; // [rsp+4h] [rbp-2Ch]
  float flDistance; // [rsp+8h] [rbp-28h]
  float flEndingWidth; // [rsp+Ch] [rbp-24h]

  if ( (*(this->_vptr_CDOTA_ActionRunner + 8))(this) != 0 && this->m_pCaster != 0 )
  {
    v4 = *(this->_vptr_CDOTA_ActionRunner + 1);
    String = KeyValues::GetString(pKV, "CleavePercent", 0, 0, 0);
    v6 = v4(this, String, 0);
    v7 = *(this->_vptr_CDOTA_ActionRunner + 1);
    v8 = KeyValues::GetString(pKV, "CleaveRadius", 0, 0, 0);
    v9 = v7(this, v8, 0);
    v10 = KeyValues::GetString(pKV, "CleaveEffect", 0, 0, 0);
    m_pEventContext = this->m_pEventContext;
    v12 = v10;
    if ( m_pEventContext != 0 )
    {
      vptr_CDOTA_ActionRunner = this->_vptr_CDOTA_ActionRunner;
      flEndingWidth = v9;
      flDamage = (v6 / 100.0) * m_pEventContext->fDamage;
      flDistance = v9 * 1.5;
      if ( v12 != 0 )
      {
        v14 = (vptr_CDOTA_ActionRunner[8])(this);
        v15 = this->m_pEventContext;
        m_Index = v15->htarget.m_Index;
        if ( m_Index + 2 <= 1
          || (v17 = v15->htarget.m_Index,
              (v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v17 >> 9) & 0x3F]) == 0)
          || (v19 = &v18[v17 & 0x1FF]) == 0
          || m_Index != v19->m_EHandle.m_Index
          || (m_pInstance = v19->m_pInstance) == 0
          || !m_pInstance->m_bIsDOTANPC )
        {
          m_pInstance = 0;
        }
        DoCleaveAttack(
          this->m_pCaster,
          m_pInstance,
          v14,
          flDamage,
          175.0,
          flEndingWidth,
          flDistance,
          v12,
          &CModifierParams::s_Default);
      }
      else
      {
        v22 = (vptr_CDOTA_ActionRunner[8])(this);
        v23 = CEntityHandle::operator CEntityInstance *(&this->m_pEventContext->htarget);
        if ( v23 != 0 && BYTE3(v23[7]._vptr_IHandleEntity) != 0 )
          v24 = v23;
        else
          v24 = 0;
        DoCleaveAttack(
          this->m_pCaster,
          v24,
          v22,
          flDamage,
          175.0,
          flEndingWidth,
          flDistance,
          "battlefury_cleave",
          &CModifierParams::s_Default);
      }
    }
  }
  return 0;
}


// CDOTA_ActionRunner::PerformAction_CreateBonusAttack  (line 2511, @0x0000000002441930, libserver.so)  // inlines: CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, Get, GetActionCaster, GetBool, GetEntityIdentity, GetEntryIndex, GetInstance, GetModifier_Constant_Additive, GetProjectileSpeed, GetRangedProjectileName, IndexToIdentity, IsListeningToEvent, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlVector
// calls: KeyValues::FindKey, CDOTA_ActionRunner::SelectActionTargets, KeyValues::GetInt, CDOTA_BaseNPC::CreateAttackRecord, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTA_BaseNPC::PerformAttack, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, KeyValues::GetName, DevMsg(char const*,...), _Unwind_Resume
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "%s - no Target specified for %s."
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_ActionRunner::PerformAction_CreateBonusAttack(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  CDOTA_BaseNPC *m_pCaster; // r12
  KeyValues *Key; // r13
  bool v6; // r15
  __int64 v7; // rbx
  CHandle<CBaseEntity> *v8; // rdx
  uint32 m_Index; // eax
  __int16 v10; // cx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CBaseEntity *m_pInstance; // r14
  CDOTA_AttackRecord *AttackRecord; // r13
  __int64 v15; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  const char *Name; // r15
  const char *v19; // rax
  float m_iProjectileMoveSpeed; // [rsp+1Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > targets; // [rsp+20h] [rbp-50h] BYREF

  if ( (*(this->_vptr_CDOTA_ActionRunner + 8))(this) != 0 )
  {
    m_pCaster = this->m_pCaster;
    if ( m_pCaster != 0 )
    {
      Key = KeyValues::FindKey(pKV, "Target", 0);
      if ( Key == 0 )
      {
        Name = KeyValues::GetName(pKV);
        v19 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
        DevMsg("%s - no Target specified for %s.", v19, Name);
      }
      targets.m_Size = 0;
      targets.m_Memory.m_pMemory = 0;
      targets.m_Memory.m_nAllocationCount = 0;
      targets.m_Memory.m_nGrowSize = 0;
      CDOTA_ActionRunner::SelectActionTargets(this, &targets, Key);
      if ( targets.m_Size != 0 )
      {
        v6 = KeyValues::GetInt(pKV, "ProcessProcs", 0) != 0;
        if ( targets.m_Size > 0 )
        {
          v7 = 0;
          do
          {
            while ( 1 )
            {
              v8 = &targets.m_Memory.m_pMemory[v7];
              m_Index = v8->m_Index;
              if ( v8->m_Index + 2 > 1 )
              {
                v10 = v8->m_Index;
                v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_Index) >> 9) & 0x3F];
                if ( v11 != 0 )
                {
                  v12 = &v11[v10 & 0x1FF];
                  if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
                  {
                    m_pInstance = v12->m_pInstance;
                    if ( v12->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                    {
                      AttackRecord = CDOTA_BaseNPC::CreateAttackRecord(m_pCaster, m_pInstance, 0, v6, 0, 0, 0);
                      if ( AttackRecord != 0 )
                        break;
                    }
                  }
                }
              }
              if ( targets.m_Size <= ++v7 )
                goto LABEL_20;
            }
            v15 = m_pCaster->m_ModifierManager.m_buffsForModifiers[72];
            m_iProjectileMoveSpeed = m_pCaster->m_iProjectileMoveSpeed;
            if ( v15 == 0xFF || m_pCaster->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v15].m_Size <= 0 )
              Modifier_Constant_Additive_Internal = 0.0;
            else
              Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                                      &m_pCaster->m_ModifierManager,
                                                      modifierfunction::MODIFIER_PROPERTY_PROJECTILE_SPEED_BONUS,
                                                      &CModifierParams::s_Default);
            AttackRecord->m_iProjectileSpeed = (Modifier_Constant_Additive_Internal + m_iProjectileMoveSpeed);
            AttackRecord->m_iszAutoAttackRangedParticle.u.m_Id = m_pCaster->m_iszAutoAttackRangedParticle.u.m_Id;
            CDOTA_BaseNPC::PerformAttack(m_pCaster, AttackRecord, m_pInstance, 1, 0, 1, 0);
            ++v7;
          }
          while ( targets.m_Size > v7 );
        }
      }
LABEL_20:
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&targets);
    }
  }
  return 0;
}


// CDOTA_ActionRunner::PerformAction_MoveUnit  (line 2551, @0x0000000002441ba0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: KeyValues::FindKey, CDOTA_ActionRunner::SelectActionTargets, CBaseEntity::GetAbsOrigin, FindClearSpaceForUnit, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, KeyValues::GetName, DevMsg(char const*,...), _Unwind_Resume
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "%s - no MoveToTarget specified for %s.", "%s - no Target specified for %s."
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_ActionRunner::PerformAction_MoveUnit(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  KeyValues *Key; // r14
  KeyValues *v5; // r15
  __int64 v6; // r12
  int i; // ebx
  CHandle<CBaseEntity> *v8; // rdx
  uint32 m_Index; // eax
  __int16 v10; // si
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CBaseEntity *m_pInstance; // r15
  CEntityIdentity *v14; // rax
  CEntityIdentity *v15; // rax
  const CBaseEntity *v16; // rdi
  const char *v18; // r12
  const char *v19; // rax
  const char *Name; // r13
  const char *v21; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > targets; // [rsp+0h] [rbp-70h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hMoveToTarget; // [rsp+20h] [rbp-50h] BYREF
  Vector v24; // 0:xmm0_8.8,8:xmm1_4.4

  if ( (*(this->_vptr_CDOTA_ActionRunner + 8))(this) != 0 && this->m_pCaster != 0 )
  {
    Key = KeyValues::FindKey(pKV, "Target", 0);
    if ( Key == 0 )
    {
      Name = KeyValues::GetName(pKV);
      v21 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
      DevMsg("%s - no Target specified for %s.", v21, Name);
    }
    targets.m_Size = 0;
    targets.m_Memory.m_pMemory = 0;
    targets.m_Memory.m_nAllocationCount = 0;
    targets.m_Memory.m_nGrowSize = 0;
    CDOTA_ActionRunner::SelectActionTargets(this, &targets, Key);
    if ( targets.m_Size != 0 )
    {
      v5 = KeyValues::FindKey(pKV, "MoveToTarget", 0);
      if ( v5 == 0 )
      {
        v18 = KeyValues::GetName(pKV);
        v19 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
        DevMsg("%s - no MoveToTarget specified for %s.", v19, v18);
      }
      hMoveToTarget.m_Size = 0;
      hMoveToTarget.m_Memory.m_pMemory = 0;
      hMoveToTarget.m_Memory.m_nAllocationCount = 0;
      hMoveToTarget.m_Memory.m_nGrowSize = 0;
      CDOTA_ActionRunner::SelectActionTargets(this, &hMoveToTarget, v5);
      v6 = 0;
      for ( i = 0; targets.m_Size > i; ++v6 )
      {
        while ( 1 )
        {
          v8 = &targets.m_Memory.m_pMemory[v6];
          m_Index = targets.m_Memory.m_pMemory[v6].m_Index;
          if ( m_Index + 2 > 1 )
          {
            v10 = v8->m_Index;
            v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_Index) >> 9) & 0x3F];
            if ( v11 != 0 )
            {
              v12 = &v11[v10 & 0x1FF];
              if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
              {
                m_pInstance = v12->m_pInstance;
                if ( v12->m_pInstance != 0
                  && m_pInstance->m_bIsDOTANPC
                  && hMoveToTarget.m_Memory.m_pMemory->m_Index + 2 > 1 )
                {
                  v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(hMoveToTarget.m_Memory.m_pMemory->m_Index >> 9)
                                                                       & 0x3F];
                  if ( v14 != 0 )
                  {
                    v15 = &v14[hMoveToTarget.m_Memory.m_pMemory->m_Index & 0x1FF];
                    if ( v15 != 0 && hMoveToTarget.m_Memory.m_pMemory->m_Index == v15->m_EHandle.m_Index )
                    {
                      v16 = v15->m_pInstance;
                      if ( v15->m_pInstance != 0 && v16->m_bIsDOTANPC )
                        break;
                    }
                  }
                }
              }
            }
          }
          ++i;
          ++v6;
          if ( targets.m_Size <= i )
            goto LABEL_24;
        }
        v24 = *CBaseEntity::GetAbsOrigin(v16);
        FindClearSpaceForUnit(m_pInstance, v24, 1);
        ++i;
      }
LABEL_24:
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hMoveToTarget);
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&targets);
  }
  return 0;
}


// CDOTA_ActionRunner::PrecacheAction_ActOnTargets  (line 2602, @0x0000000002425dd0, libserver.so)
// calls: KeyValues::FindKey, CDOTA_ActionRunner::PrecacheActions
// callers: CDOTA_ActionRunner::PrecacheActions
void __fastcall CDOTA_ActionRunner::PrecacheAction_ActOnTargets(KeyValues *pKV, const CEntityPrecacheContext *pContext)
{
  KeyValues *Key; // rax

  Key = KeyValues::FindKey(pKV, "Action", 0);
  CDOTA_ActionRunner::PrecacheActions(Key, pContext);
}


// CDOTA_ActionRunner::PerformAction_ActOnTargets  (line 2609, @0x0000000002453e20, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, PerformActions, Set, SetTarget, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlVector
// calls: KeyValues::FindKey, CDOTA_ActionRunner::SelectActionTargets, CDOTA_ActionRunner::PerformActions_Core, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, KeyValues::GetName, DevMsg(char const*,...), _Unwind_Resume
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "%s - no target specified for %s.", "%s - no action specified for %s."
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_ActionRunner::PerformAction_ActOnTargets(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  KeyValues *Key; // r13
  __int64 v5; // r14
  int v6; // r13d
  const CModifierParams *m_pEventContext; // rbx
  bool v8; // cc
  uint32 m_Index; // eax
  float fOriginalDamage; // xmm0_4
  Activity nActivity; // eax
  float fDistance; // xmm0_4
  float fAttackTimeRemaining; // xmm0_4
  int m_nIssuerPlayerIndex; // eax
  CHandle<CBaseEntity> *v15; // rdx
  uint32 v16; // eax
  __int16 v17; // cx
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CEntityIdentity *m_pEntity; // rdx
  int v21; // eax
  __int16 v22; // cx
  const char *Name; // r14
  const char *v25; // rax
  const char *v26; // rbx
  const char *v27; // rax
  CDOTA_BaseNPC *m_pCaster; // [rsp+10h] [rbp-F0h]
  KeyValues *pActionKV; // [rsp+18h] [rbp-E8h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > targets; // [rsp+20h] [rbp-E0h] BYREF
  CModifierParams context; // [rsp+40h] [rbp-C0h] BYREF

  Key = KeyValues::FindKey(pKV, "Target", 0);
  pActionKV = KeyValues::FindKey(pKV, "Action", 0);
  if ( Key == 0 )
  {
    Name = KeyValues::GetName(pKV);
    v25 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
    DevMsg("%s - no target specified for %s.", v25, Name);
  }
  if ( pActionKV == 0 )
  {
    v26 = KeyValues::GetName(pKV);
    v27 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
    DevMsg("%s - no action specified for %s.", v27, v26);
  }
  targets.m_Size = 0;
  targets.m_Memory.m_pMemory = 0;
  targets.m_Memory.m_nAllocationCount = 0;
  targets.m_Memory.m_nGrowSize = 0;
  CDOTA_ActionRunner::SelectActionTargets(this, &targets, Key);
  if ( targets.m_Size > 0 )
  {
    v5 = 0;
    v6 = 0;
    m_pEventContext = this->m_pEventContext;
    m_pCaster = this->m_pCaster;
    do
    {
      m_Index = m_pEventContext->ability.m_Index;
      context.fDamage = m_pEventContext->fDamage;
      fOriginalDamage = m_pEventContext->fOriginalDamage;
      context.ability.m_Index = m_Index;
      nActivity = m_pEventContext->nActivity;
      context.fOriginalDamage = fOriginalDamage;
      fDistance = m_pEventContext->fDistance;
      context.nActivity = nActivity;
      context.bTooltip = m_pEventContext->bTooltip;
      context.nTooltipParam = m_pEventContext->nTooltipParam;
      context.bIgnoreInvis = m_pEventContext->bIgnoreInvis;
      context.bNoCooldown = m_pEventContext->bNoCooldown;
      context.bReincarnate = m_pEventContext->bReincarnate;
      LOBYTE(nActivity) = m_pEventContext->bDoNotConsume;
      context.fDistance = fDistance;
      context.fGain = m_pEventContext->fGain;
      fAttackTimeRemaining = m_pEventContext->fAttackTimeRemaining;
      context.bDoNotConsume = nActivity;
      m_nIssuerPlayerIndex = m_pEventContext->m_nIssuerPlayerIndex;
      context.fAttackTimeRemaining = fAttackTimeRemaining;
      context.m_nIssuerPlayerIndex = m_nIssuerPlayerIndex;
      context.inflictor.m_Index = m_pEventContext->inflictor.m_Index;
      context.nDamageType = m_pEventContext->nDamageType;
      context.nDamageflags = m_pEventContext->nDamageflags;
      context.nDamageCategory = m_pEventContext->nDamageCategory;
      context.iFailType = m_pEventContext->iFailType;
      context.iRecord = m_pEventContext->iRecord;
      context.pOrb = m_pEventContext->pOrb;
      context.pOrb2 = m_pEventContext->pOrb2;
      context.nCost = m_pEventContext->nCost;
      context.nOrdertype = m_pEventContext->nOrdertype;
      context.vOldLoc = m_pEventContext->vOldLoc;
      context.vNewLoc = m_pEventContext->vNewLoc;
      context.bCraniumBasherTested = m_pEventContext->bCraniumBasherTested;
      context.bHeartRegenApplied = m_pEventContext->bHeartRegenApplied;
      context.bDiffusalApplied = m_pEventContext->bDiffusalApplied;
      context.bChainLightningConsidered = m_pEventContext->bChainLightningConsidered;
      context.bSuppressDamage = m_pEventContext->bSuppressDamage;
      context.bRangedAttack = m_pEventContext->bRangedAttack;
      v15 = &targets.m_Memory.m_pMemory[v5];
      context.bProcessProcs = m_pEventContext->bProcessProcs;
      context.nPlayerids_stick = m_pEventContext->nPlayerids_stick;
      context.hattacker.m_Index = m_pEventContext->hattacker.m_Index;
      context.htarget.m_Index = m_pEventContext->htarget.m_Index;
      context.hunit.m_Index = m_pEventContext->hunit.m_Index;
      v16 = targets.m_Memory.m_pMemory[v5].m_Index;
      if ( v16 + 2 > 1
        && (v17 = v15->m_Index,
            (v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v15->m_Index) >> 9) & 0x3F]) != 0)
        && (v19 = &v18[v17 & 0x1FF]) != 0
        && v16 == v19->m_EHandle.m_Index
        && v19->m_pInstance != 0
        && (m_pEntity = v19->m_pInstance->m_pEntity) != 0 )
      {
        v21 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v22 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v22 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(context.htarget.m_Index) = v22 | context.htarget.m_Index & 0x8000;
        context.htarget.m_Index = (v21 << 15) | context.htarget.m_Index & 0x7FFF;
      }
      else
      {
        context.htarget.m_Index = -1;
      }
      this->m_pEventContext = &context;
      CDOTA_ActionRunner::PerformActions_Core(this, pActionKV);
      ++v6;
      ++v5;
      v8 = targets.m_Size <= v6;
      this->m_pEventContext = m_pEventContext;
      this->m_pCaster = m_pCaster;
    }
    while ( !v8 );
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&targets);
  return 0;
}


// CDOTA_ActionRunner::PrecacheAction_ActOnPoints  (line 2636, @0x0000000002425e00, libserver.so)
// calls: KeyValues::FindKey, CDOTA_ActionRunner::PrecacheActions
// callers: CDOTA_ActionRunner::PrecacheActions
void __fastcall CDOTA_ActionRunner::PrecacheAction_ActOnPoints(KeyValues *pKV, const CEntityPrecacheContext *pContext)
{
  KeyValues *Key; // rax

  Key = KeyValues::FindKey(pKV, "Action", 0);
  CDOTA_ActionRunner::PrecacheActions(Key, pContext);
}


// CDOTA_ActionRunner::PerformAction_ActOnPoints  (line 2643, @0x00000000024541f0, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, CUtlMemory, CUtlVector, CUtlVectorBase, PerformActions, Purge, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: KeyValues::FindKey, CDOTA_ActionRunner::SelectActionPoints, CDOTA_ActionRunner::PerformActions_Core, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, CUtlMemory<Vector, int>::Purge, KeyValues::GetName, DevMsg(char const*,...), CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "%s - no action specified for %s.", "%s - no target specified for %s."
bool __fastcall CDOTA_ActionRunner::PerformAction_ActOnPoints(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  KeyValues *Key; // r13
  __int64 v5; // r14
  int v6; // r13d
  const CModifierParams *m_pEventContext; // rbx
  uint32 m_Index; // eax
  float fOriginalDamage; // xmm0_4
  Activity nActivity; // eax
  float fDistance; // xmm0_4
  float fAttackTimeRemaining; // xmm0_4
  int m_nIssuerPlayerIndex; // eax
  vec_t z; // xmm0_4
  bool v15; // cc
  const char *v17; // rbx
  const char *v18; // rax
  const char *Name; // r14
  const char *v20; // rax
  CDOTA_BaseNPC *m_pCaster; // [rsp+10h] [rbp-F0h]
  KeyValues *pActionKV; // [rsp+18h] [rbp-E8h]
  CUtlVector<Vector,CUtlMemory<Vector,int> > points; // [rsp+20h] [rbp-E0h] BYREF
  CModifierParams context; // [rsp+40h] [rbp-C0h] BYREF

  Key = KeyValues::FindKey(pKV, "Target", 0);
  pActionKV = KeyValues::FindKey(pKV, "Action", 0);
  if ( Key == 0 )
  {
    Name = KeyValues::GetName(pKV);
    v20 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
    DevMsg("%s - no target specified for %s.", v20, Name);
  }
  if ( pActionKV == 0 )
  {
    v17 = KeyValues::GetName(pKV);
    v18 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
    DevMsg("%s - no action specified for %s.", v18, v17);
  }
  points.m_Size = 0;
  points.m_Memory.m_pMemory = 0;
  points.m_Memory.m_nAllocationCount = 0;
  points.m_Memory.m_nGrowSize = 0;
  CDOTA_ActionRunner::SelectActionPoints(this, &points, Key);
  if ( points.m_Size > 0 )
  {
    v5 = 0;
    v6 = 0;
    m_pEventContext = this->m_pEventContext;
    m_pCaster = this->m_pCaster;
    do
    {
      m_Index = m_pEventContext->ability.m_Index;
      context.fDamage = m_pEventContext->fDamage;
      fOriginalDamage = m_pEventContext->fOriginalDamage;
      context.ability.m_Index = m_Index;
      nActivity = m_pEventContext->nActivity;
      context.fOriginalDamage = fOriginalDamage;
      fDistance = m_pEventContext->fDistance;
      context.nActivity = nActivity;
      context.bTooltip = m_pEventContext->bTooltip;
      context.nTooltipParam = m_pEventContext->nTooltipParam;
      context.bIgnoreInvis = m_pEventContext->bIgnoreInvis;
      context.bNoCooldown = m_pEventContext->bNoCooldown;
      context.bReincarnate = m_pEventContext->bReincarnate;
      LOBYTE(nActivity) = m_pEventContext->bDoNotConsume;
      context.fDistance = fDistance;
      context.fGain = m_pEventContext->fGain;
      fAttackTimeRemaining = m_pEventContext->fAttackTimeRemaining;
      context.bDoNotConsume = nActivity;
      m_nIssuerPlayerIndex = m_pEventContext->m_nIssuerPlayerIndex;
      context.fAttackTimeRemaining = fAttackTimeRemaining;
      context.m_nIssuerPlayerIndex = m_nIssuerPlayerIndex;
      context.inflictor.m_Index = m_pEventContext->inflictor.m_Index;
      context.nDamageType = m_pEventContext->nDamageType;
      context.nDamageflags = m_pEventContext->nDamageflags;
      context.nDamageCategory = m_pEventContext->nDamageCategory;
      context.iFailType = m_pEventContext->iFailType;
      context.iRecord = m_pEventContext->iRecord;
      context.pOrb = m_pEventContext->pOrb;
      context.pOrb2 = m_pEventContext->pOrb2;
      context.nCost = m_pEventContext->nCost;
      context.nOrdertype = m_pEventContext->nOrdertype;
      context.vOldLoc = m_pEventContext->vOldLoc;
      context.vNewLoc = m_pEventContext->vNewLoc;
      context.bCraniumBasherTested = m_pEventContext->bCraniumBasherTested;
      context.bHeartRegenApplied = m_pEventContext->bHeartRegenApplied;
      context.bDiffusalApplied = m_pEventContext->bDiffusalApplied;
      context.bChainLightningConsidered = m_pEventContext->bChainLightningConsidered;
      context.bSuppressDamage = m_pEventContext->bSuppressDamage;
      context.bRangedAttack = m_pEventContext->bRangedAttack;
      context.bProcessProcs = m_pEventContext->bProcessProcs;
      context.nPlayerids_stick = m_pEventContext->nPlayerids_stick;
      context.hattacker.m_Index = m_pEventContext->hattacker.m_Index;
      context.htarget.m_Index = m_pEventContext->htarget.m_Index;
      context.hunit.m_Index = m_pEventContext->hunit.m_Index;
      context.vNewLoc.x = points.m_Memory.m_pMemory[v5].x;
      context.vNewLoc.y = points.m_Memory.m_pMemory[v5].y;
      z = points.m_Memory.m_pMemory[v5].z;
      this->m_pEventContext = &context;
      context.vNewLoc.z = z;
      CDOTA_ActionRunner::PerformActions_Core(this, pActionKV);
      ++v6;
      ++v5;
      v15 = points.m_Size <= v6;
      this->m_pEventContext = m_pEventContext;
      this->m_pCaster = m_pCaster;
    }
    while ( !v15 );
  }
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&points);
  if ( (points.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&points.m_Memory);
    if ( (points.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&points.m_Memory);
  }
  return 0;
}


// CDOTA_ActionRunner::PrecacheAction_DelayedAction  (line 2670, @0x0000000002425b10, libserver.so)
// calls: KeyValues::FindKey, CDOTA_ActionRunner::PrecacheActions
// callers: CDOTA_ActionRunner::PrecacheActions
void __fastcall CDOTA_ActionRunner::PrecacheAction_DelayedAction(
        KeyValues *pKV,
        const CEntityPrecacheContext *pContext)
{
  KeyValues *Key; // rax

  Key = KeyValues::FindKey(pKV, "Action", 0);
  CDOTA_ActionRunner::PrecacheActions(Key, pContext);
}


// CDOTA_ActionRunner::PerformAction_DelayedAction  (line 2677, @0x0000000002450e90, libserver.so)
// calls: KeyValues::FindKey, KeyValues::GetString, CDOTA_ActionDelayer::AddDelayedAction, KeyValues::GetName, DevMsg(char const*,...)
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "%s - no action specified for %s.", "%s - no delay specified for %s."
// globals: g_DOTA_ActionDelayer
bool __fastcall CDOTA_ActionRunner::PerformAction_DelayedAction(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  KeyValues *Key; // r14
  KeyValues *v5; // r13
  float (__fastcall *v6)(CDOTA_ActionRunner *const, const char *, double); // r12
  const char *String; // rax
  float v8; // xmm0_4
  const char *v10; // r12
  const char *v11; // rax
  const char *Name; // r15
  const char *v13; // rax

  Key = KeyValues::FindKey(pKV, "Delay", 0);
  v5 = KeyValues::FindKey(pKV, "Action", 0);
  if ( Key == 0 )
  {
    Name = KeyValues::GetName(pKV);
    v13 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
    DevMsg("%s - no delay specified for %s.", v13, Name);
  }
  if ( v5 == 0 )
  {
    v10 = KeyValues::GetName(pKV);
    v11 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
    DevMsg("%s - no action specified for %s.", v11, v10);
  }
  v6 = *(this->_vptr_CDOTA_ActionRunner + 2);
  String = KeyValues::GetString(Key, 0, "", 0, 0);
  v8 = v6(this, String, 0.0);
  CDOTA_ActionDelayer::AddDelayedAction(&g_DOTA_ActionDelayer, v8, this, v5, this->m_pCaster, this->m_pEventContext);
  return 0;
}


// CDOTA_ActionRunner::PerformAction_DestroyTrees  (line 2697, @0x000000000244f500, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: KeyValues::FindKey, CDOTA_ActionRunner::SelectActionPoints, KeyValues::GetString, CGridNav::DestroyTreesAroundPoint, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, CUtlMemory<Vector, int>::Purge, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_ActionRunner::PerformActions_Core
bool __fastcall CDOTA_ActionRunner::PerformAction_DestroyTrees(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  KeyValues *Key; // rax
  __int64 (__fastcall *v5)(CDOTA_ActionRunner *const, const char *, _QWORD); // r13
  const char *String; // rax
  int v7; // eax
  float v8; // xmm3_4
  __int64 v9; // rbx
  int v10; // r12d
  CUtlVector<Vector,CUtlMemory<Vector,int> > points; // [rsp+10h] [rbp-50h] BYREF

  Key = KeyValues::FindKey(pKV, "Target", 0);
  points.m_Size = 0;
  points.m_Memory.m_pMemory = 0;
  points.m_Memory.m_nAllocationCount = 0;
  points.m_Memory.m_nGrowSize = 0;
  CDOTA_ActionRunner::SelectActionPoints(this, &points, Key);
  if ( points.m_Size != 0 )
  {
    v5 = *(this->_vptr_CDOTA_ActionRunner + 1);
    String = KeyValues::GetString(pKV, "Radius", 0, 0, 0);
    v7 = v5(this, String, 0);
    if ( points.m_Size > 0 )
    {
      v8 = v7;
      v9 = 0;
      v10 = 0;
      do
      {
        CGridNav::DestroyTreesAroundPoint(&g_GridNav, points.m_Memory.m_pMemory[v9], v8, 0, -1);
        ++v10;
        ++v9;
      }
      while ( points.m_Size > v10 );
    }
  }
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&points);
  if ( (points.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&points.m_Memory);
    if ( (points.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&points.m_Memory);
  }
  return 0;
}


// CDOTA_ActionRunner::PerformAction_DropParentItem  (line 2718, @0x0000000002425e30, libserver.so)  // inlines: GetActionCaster, ToDOTAItem
// calls: CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::DropItemOnLocation, DevMsg(char const*,...)
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "%s - DropParentItem only works on items.\n"
bool __fastcall CDOTA_ActionRunner::PerformAction_DropParentItem(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  __int64 v3; // rax
  CDOTA_Item *v4; // r12
  CDOTA_BaseNPC *m_pCaster; // r13
  CDOTA_UnitInventory *Inventory; // rax
  const char *v8; // rax
  Vector v9; // [rsp+0h] [rbp-20h]

  v3 = (*(this->_vptr_CDOTA_ActionRunner + 8))(this, pKV);
  v4 = v3;
  if ( v3 != 0 && (*(*v3 + 1784LL))(v3) != 0 && (m_pCaster = this->m_pCaster) != 0 && m_pCaster->m_bHasInventory )
  {
    CBaseEntity::GetAbsOrigin(this->m_pCaster);
    Inventory = CDOTA_BaseNPC::GetInventory(m_pCaster);
    CDOTA_UnitInventory::DropItemOnLocation(Inventory, v4, v9);
    return 0;
  }
  else
  {
    v8 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
    DevMsg("%s - DropParentItem only works on items.\n", v8);
    return 0;
  }
}


// CDOTA_ActionRunner::PerformAction_SpendCharge  (line 2734, @0x0000000002425ed0, libserver.so)  // inlines: ToDOTAItem
// calls: DevMsg(char const*,...), CDOTA_Item::SpendCharge
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "%s - SpendCharge only works on items.\n"
bool __fastcall CDOTA_ActionRunner::PerformAction_SpendCharge(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  __int64 v3; // rax
  CDOTA_Item *v4; // r12
  bool result; // al
  const char *v6; // rax

  v3 = (*(this->_vptr_CDOTA_ActionRunner + 8))(this, pKV);
  v4 = v3;
  if ( v3 != 0 && (result = (*(*v3 + 1784LL))(v3)) )
  {
    if ( v4->m_iCurrentCharges.m_Value > 0 )
    {
      CDOTA_Item::SpendCharge(v4);
      return 0;
    }
  }
  else
  {
    v6 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
    DevMsg("%s - SpendCharge only works on items.\n", v6);
    return 0;
  }
  return result;
}


// CDOTA_ActionRunner::PerformAction_SpendMana  (line 2748, @0x0000000002425f40, libserver.so)  // inlines: GetActionCaster, GetMana
// calls: KeyValues::GetString, CDOTA_BaseNPC::SpendMana
// callers: CDOTA_ActionRunner::PerformActions_Core
bool __fastcall CDOTA_ActionRunner::PerformAction_SpendMana(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  __int64 v4; // rax
  CDOTA_BaseNPC *m_pCaster; // r12
  CDOTABaseAbility *v6; // r15
  bool v7; // r14
  const char *String; // rax
  float v10; // xmm0_4
  float (__fastcall *v11)(CDOTA_ActionRunner *const, const char *, double); // [rsp+0h] [rbp-40h]
  float flMana; // [rsp+Ch] [rbp-34h]

  v4 = (*(this->_vptr_CDOTA_ActionRunner + 8))(this);
  m_pCaster = this->m_pCaster;
  v6 = v4;
  v7 = m_pCaster != 0 && v4 != 0;
  if ( v7 )
  {
    flMana = m_pCaster->m_flMana.m_Value;
    v11 = *(this->_vptr_CDOTA_ActionRunner + 2);
    String = KeyValues::GetString(pKV, "Mana", 0, 0, 0);
    v10 = v11(this, String, 0.0);
    if ( v10 <= flMana )
    {
      CDOTA_BaseNPC::SpendMana(m_pCaster, v10, v6, 0);
      return 0;
    }
  }
  return v7;
}


// CDOTA_ActionRunner::PerformAction_RunScript  (line 2764, @0x000000000244f650, libserver.so)  // inlines: AsHScript, Attacker, CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, CopyData<Vector>, CreateTableFromKeyValues, EntityToHScript, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPublicScriptScope, IndexToIdentity, IsValid, LookupEntity, Purge, Target, ToHScript, Unit, entindex, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase
// calls: KeyValues::GetString, Recursive_DecodeKeyValuesIntoScriptTable, CEntityInstance::GetEntityIndex, CVariantBase<CVariantDefaultAllocator>::Free, CEntityInstance::GetPublicScriptScope, CEntityHandle::operator CEntityInstance*, KeyValues::FindKey, CDOTA_ActionRunner::SelectActionTargets, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_ActionRunner::SelectActionPoints, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, CUtlMemory<Vector, int>::Purge (16 total)
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "caster_entindex", "event_ability", "target_entities", "target_points"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_ActionRunner::PerformAction_RunScript(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  const char *String; // r12
  const char *v4; // rax
  const char *v5; // r13
  __int64 v6; // rax
  IScriptVM *v7; // r15
  __int64 v8; // rax
  __int64 v9; // rax
  CDOTA_BaseNPC *m_pCaster; // rdi
  CEntityIndex v11; // eax
  void (__fastcall *v12)(IScriptVM *, uint64, const char *, CUtlVector<Vector,CUtlMemory<Vector,int> > *); // r8
  CDOTA_BaseNPC *v13; // rdi
  void (__fastcall *v14)(IScriptVM *, uint64, char *, CUtlVector<Vector,CUtlMemory<Vector,int> > *); // r12
  HSCRIPT m_hScope; // rax
  void (__fastcall *v16)(IScriptVM *, uint64, const char *, CUtlVector<Vector,CUtlMemory<Vector,int> > *); // r12
  CEntityInstance *v17; // rax
  CEntityInstance *v18; // r13
  HSCRIPT v19; // rax
  void (__fastcall *v20)(IScriptVM *, uint64, const char *, CUtlVector<Vector,CUtlMemory<Vector,int> > *); // r13
  CEntityInstance *v21; // rax
  CEntityInstance *v22; // r12
  HSCRIPT v23; // rax
  void (__fastcall *v24)(IScriptVM *, uint64, char *, CUtlVector<Vector,CUtlMemory<Vector,int> > *); // r13
  CEntityInstance *v25; // rax
  CEntityInstance *v26; // r12
  HSCRIPT v27; // rax
  void (__fastcall *v28)(IScriptVM *, uint64, char *, CUtlVector<Vector,CUtlMemory<Vector,int> > *); // r13
  __int64 v29; // rax
  CEntityInstance *v30; // r12
  HSCRIPT v31; // rax
  void (__fastcall *v32)(IScriptVM *, uint64, const char *, CUtlVector<Vector,CUtlMemory<Vector,int> > *); // r13
  CEntityInstance *v33; // rax
  CEntityInstance *v34; // r12
  HSCRIPT v35; // rax
  KeyValues *Key; // rax
  __int64 v37; // r12
  int i; // ebx
  __int16 v39; // cx
  CEntityIdentity *v40; // rax
  __int64 v41; // rcx
  bool v42; // zf
  CEntityIdentity *v43; // rcx
  uint64 v44; // rax
  void (__fastcall *v45)(IScriptVM *, uint64, _QWORD, CVariantBase<CVariantDefaultAllocator> *); // r13
  unsigned __int16 *v46; // rax
  int v47; // edx
  __int64 v48; // r13
  int v49; // ebx
  void (__fastcall *v50)(IScriptVM *, uint64, _QWORD, CVariantBase<CVariantDefaultAllocator> *); // r14
  CEntityInstance *m_pInstance; // r14
  KeyValues *pTargetKV; // [rsp+8h] [rbp-B8h]
  HSCRIPT hFunction; // [rsp+20h] [rbp-A0h]
  CVariantBase<CVariantDefaultAllocator> *v56; // [rsp+38h] [rbp-88h]
  ScriptVariant_t kvTable; // [rsp+40h] [rbp-80h] BYREF
  ScriptVariant_t targetArray; // [rsp+50h] [rbp-70h] BYREF
  CVariantBase<CVariantDefaultAllocator> v59; // [rsp+60h] [rbp-60h] BYREF
  CUtlVector<Vector,CUtlMemory<Vector,int> > targetPoints; // [rsp+70h] [rbp-50h] BYREF

  String = KeyValues::GetString(pKV, "ScriptFile", 0, 0, 0);
  v4 = KeyValues::GetString(pKV, "Function", 0, 0, 0);
  if ( g_pVScriptGameSystem != 0 )
  {
    v5 = v4;
    v6 = (*(g_pVScriptGameSystem->_vptr_IVScriptGameSystem + 4))(g_pVScriptGameSystem);
    v7 = v6;
    if ( String != 0 && v5 != 0 && v6 != 0 )
    {
      v8 = (*(g_pVScriptGameSystem->_vptr_IVScriptGameSystem + 9))(g_pVScriptGameSystem, String);
      v9 = (*(*v7 + 144LL))(v7, v5, v8, 0);
      kvTable.m_type = 0;
      kvTable.m_flags = 0;
      kvTable.m_uint64 = 0;
      hFunction = v9;
      (*(*v7 + 264LL))(v7);
      Recursive_DecodeKeyValuesIntoScriptTable(0, pKV, v7, this);
      m_pCaster = this->m_pCaster;
      if ( m_pCaster != 0 )
      {
        v11.m_Data = CEntityInstance::GetEntityIndex(m_pCaster).m_Data;
        v12 = *(*v7 + 240LL);
        targetPoints.m_Size = v11.m_Data;
        LODWORD(targetPoints.m_Memory.m_pMemory) = 5;
        v12(v7, kvTable.m_uint64, "caster_entindex", &targetPoints);
        CVariantBase<CVariantDefaultAllocator>::Free(&targetPoints);
        v13 = this->m_pCaster;
        v14 = *(*v7 + 240LL);
        if ( v13 != 0 )
          m_hScope = CEntityInstance::GetPublicScriptScope(v13, GetScriptScopeBehavior_t::CREATE_IF_NECESSARY)->m_hScope;
        else
          m_hScope = 0;
        LODWORD(targetPoints.m_Memory.m_pMemory) = 31;
        *&targetPoints.m_Size = m_hScope;
        v14(v7, kvTable.m_uint64, "caster", &targetPoints);
        CVariantBase<CVariantDefaultAllocator>::Free(&targetPoints);
      }
      v16 = *(*v7 + 240LL);
      v17 = CEntityHandle::operator CEntityInstance *(&this->m_pEventContext->htarget);
      v18 = v17;
      if ( v17 != 0 )
      {
        v19 = v17->m_pEntity->m_hPublicScope.m_hScope;
        if ( v19 == 0 )
        {
          CEntityInstance::CreatePublicScriptScope(v18, 0);
          v19 = v18->m_pEntity->m_hPublicScope.m_hScope;
        }
      }
      else
      {
        v19 = 0;
      }
      *&targetPoints.m_Size = v19;
      LODWORD(targetPoints.m_Memory.m_pMemory) = 31;
      v16(v7, kvTable.m_uint64, "target", &targetPoints);
      CVariantBase<CVariantDefaultAllocator>::Free(&targetPoints);
      v20 = *(*v7 + 240LL);
      v21 = CEntityHandle::operator CEntityInstance *(&this->m_pEventContext->hunit);
      v22 = v21;
      if ( v21 != 0 )
      {
        v23 = v21->m_pEntity->m_hPublicScope.m_hScope;
        if ( v23 == 0 )
        {
          CEntityInstance::CreatePublicScriptScope(v22, 0);
          v23 = v22->m_pEntity->m_hPublicScope.m_hScope;
        }
      }
      else
      {
        v23 = 0;
      }
      LODWORD(targetPoints.m_Memory.m_pMemory) = 31;
      *&targetPoints.m_Size = v23;
      v20(v7, kvTable.m_uint64, "unit", &targetPoints);
      CVariantBase<CVariantDefaultAllocator>::Free(&targetPoints);
      v24 = *(*v7 + 240LL);
      v25 = CEntityHandle::operator CEntityInstance *(&this->m_pEventContext->hattacker);
      v26 = v25;
      if ( v25 != 0 )
      {
        v27 = v25->m_pEntity->m_hPublicScope.m_hScope;
        if ( v27 == 0 )
        {
          CEntityInstance::CreatePublicScriptScope(v26, 0);
          v27 = v26->m_pEntity->m_hPublicScope.m_hScope;
        }
      }
      else
      {
        v27 = 0;
      }
      LODWORD(targetPoints.m_Memory.m_pMemory) = 31;
      *&targetPoints.m_Size = v27;
      v24(v7, kvTable.m_uint64, "attacker", &targetPoints);
      CVariantBase<CVariantDefaultAllocator>::Free(&targetPoints);
      v28 = *(*v7 + 240LL);
      v29 = (*(this->_vptr_CDOTA_ActionRunner + 8))(this);
      v30 = v29;
      if ( v29 != 0 )
      {
        v31 = *(*(v29 + 8) + 40LL);
        if ( v31 == 0 )
        {
          CEntityInstance::CreatePublicScriptScope(v30, 0);
          v31 = v30->m_pEntity->m_hPublicScope.m_hScope;
        }
      }
      else
      {
        v31 = 0;
      }
      LODWORD(targetPoints.m_Memory.m_pMemory) = 31;
      *&targetPoints.m_Size = v31;
      v28(v7, kvTable.m_uint64, "ability", &targetPoints);
      CVariantBase<CVariantDefaultAllocator>::Free(&targetPoints);
      v32 = *(*v7 + 240LL);
      v33 = CEntityHandle::operator CEntityInstance *(&this->m_pEventContext->ability);
      v34 = v33;
      if ( v33 != 0 )
      {
        v35 = v33->m_pEntity->m_hPublicScope.m_hScope;
        if ( v35 == 0 )
        {
          CEntityInstance::CreatePublicScriptScope(v34, 0);
          v35 = v34->m_pEntity->m_hPublicScope.m_hScope;
        }
      }
      else
      {
        v35 = 0;
      }
      LODWORD(targetPoints.m_Memory.m_pMemory) = 31;
      *&targetPoints.m_Size = v35;
      v32(v7, kvTable.m_uint64, "event_ability", &targetPoints);
      CVariantBase<CVariantDefaultAllocator>::Free(&targetPoints);
      Key = KeyValues::FindKey(pKV, "Target", 0);
      pTargetKV = Key;
      if ( Key != 0 )
      {
        targetPoints.m_Size = 0;
        targetPoints.m_Memory.m_pMemory = 0;
        targetPoints.m_Memory.m_nAllocationCount = 0;
        targetPoints.m_Memory.m_nGrowSize = 0;
        CDOTA_ActionRunner::SelectActionTargets(this, &targetPoints, Key);
        targetArray.m_uint64 = 0;
        targetArray.m_type = 0;
        targetArray.m_flags = 0;
        (*(*v7 + 360LL))(v7, &targetArray);
        v37 = 0;
        for ( i = 0; targetPoints.m_Size > i; ++i )
        {
          v45 = *(*v7 + 248LL);
          v46 = (targetPoints.m_Memory.m_pMemory + v37);
          v47 = *(&targetPoints.m_Memory.m_pMemory->x + v37);
          if ( (v47 + 2) > 1
            && (v39 = *v46, (v40 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v46 >> 9) & 0x3F]) != 0) )
          {
            v41 = v39 & 0x1FF;
            v42 = &v40[v41] == 0;
            v43 = &v40[v41];
            v44 = 0;
            if ( !v42 && v47 == v43->m_EHandle.m_Index )
            {
              m_pInstance = v43->m_pInstance;
              if ( v43->m_pInstance != 0 )
              {
                v44 = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
                if ( v44 == 0 )
                {
                  CEntityInstance::CreatePublicScriptScope(v43->m_pInstance, 0);
                  v44 = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
                }
              }
            }
          }
          else
          {
            v44 = 0;
          }
          v59.m_type = 31;
          v59.m_flags = 0;
          v59.m_uint64 = v44;
          v45(v7, targetArray.m_uint64, i, &v59);
          v37 += 4;
          CVariantBase<CVariantDefaultAllocator>::Free(&v59);
        }
        (*(*v7 + 240LL))(v7, kvTable.m_uint64, "target_entities", &targetArray);
        (*(*v7 + 344LL))(v7, &targetArray);
        CVariantBase<CVariantDefaultAllocator>::Free(&targetArray);
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&targetPoints);
        targetPoints.m_Size = 0;
        targetPoints.m_Memory.m_pMemory = 0;
        targetPoints.m_Memory.m_nAllocationCount = 0;
        targetPoints.m_Memory.m_nGrowSize = 0;
        CDOTA_ActionRunner::SelectActionPoints(this, &targetPoints, pTargetKV);
        targetArray.m_uint64 = 0;
        targetArray.m_type = 0;
        targetArray.m_flags = 0;
        (*(*v7 + 360LL))(v7, &targetArray);
        if ( targetPoints.m_Size > 0 )
        {
          v48 = 0;
          v49 = 0;
          do
          {
            v50 = *(*v7 + 248LL);
            v59.m_type = 0;
            v59.m_flags = 0;
            v56 = &targetPoints.m_Memory.m_pMemory[v48];
            CVariantBase<CVariantDefaultAllocator>::Free(&v59);
            v59.m_type = 3;
            v59.m_uint64 = v56;
            v50(v7, targetArray.m_uint64, v49++, &v59);
            ++v48;
            CVariantBase<CVariantDefaultAllocator>::Free(&v59);
          }
          while ( targetPoints.m_Size > v49 );
        }
        (*(*v7 + 240LL))(v7, kvTable.m_uint64, "target_points", &targetArray);
        (*(*v7 + 344LL))(v7, &targetArray);
        CVariantBase<CVariantDefaultAllocator>::Free(&targetArray);
        CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&targetPoints);
        if ( (targetPoints.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<Vector,int>::Purge(&targetPoints.m_Memory);
          if ( (targetPoints.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<Vector,int>::Purge(&targetPoints.m_Memory);
        }
      }
      if ( hFunction != 0 )
        (*(*v7 + 160LL))(v7, hFunction, &kvTable, 1, 0, 0, 1);
      (*(*v7 + 152LL))(v7, hFunction);
      (*(*v7 + 344LL))(v7, &kvTable);
      CVariantBase<CVariantDefaultAllocator>::Free(&kvTable);
    }
  }
  return 0;
}


// CDOTA_ActionRunner::PerformAction_Rotate  (line 2829, @0x0000000002441e40, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*, operator+, operator[], ~CUtlVector
// calls: KeyValues::FindKey, CDOTA_ActionRunner::SelectActionTargets, KeyValues::GetString, UTIL_StringToVector, CBaseEntity::GetAbsAngles, CBaseEntity::SetAbsAngles, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, KeyValues::GetName, DevMsg(char const*,...), _Unwind_Resume
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "0 0 0", "PitchYawRoll", "%s - no Target specified for %s."
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_ActionRunner::PerformAction_Rotate(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  KeyValues *Key; // rbx
  const char *String; // rax
  __int64 v6; // r12
  int v7; // ebx
  CHandle<CBaseEntity> *v8; // rdx
  uint32 m_Index; // eax
  __int16 v10; // cx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CBaseEntity *m_pInstance; // r13
  const QAngle *AbsAngles; // rax
  vec_t v15; // xmm0_4
  vec_t v16; // xmm2_4
  const char *Name; // r14
  const char *v19; // rax
  QAngle rotation; // [rsp+0h] [rbp-70h] BYREF
  QAngle angles; // [rsp+10h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > targets; // [rsp+20h] [rbp-50h] BYREF

  Key = KeyValues::FindKey(pKV, "Target", 0);
  if ( Key == 0 )
  {
    Name = KeyValues::GetName(pKV);
    v19 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
    DevMsg("%s - no Target specified for %s.", v19, Name);
  }
  targets.m_Size = 0;
  targets.m_Memory.m_pMemory = 0;
  targets.m_Memory.m_nAllocationCount = 0;
  targets.m_Memory.m_nGrowSize = 0;
  CDOTA_ActionRunner::SelectActionTargets(this, &targets, Key);
  if ( targets.m_Size != 0 )
  {
    String = KeyValues::GetString(pKV, "PitchYawRoll", "0 0 0", 0, 0);
    UTIL_StringToVector(&rotation.x, String);
    if ( targets.m_Size > 0 )
    {
      v6 = 0;
      v7 = 0;
      do
      {
        while ( 1 )
        {
          v8 = &targets.m_Memory.m_pMemory[v6];
          m_Index = targets.m_Memory.m_pMemory[v6].m_Index;
          if ( m_Index + 2 > 1 )
          {
            v10 = v8->m_Index;
            v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_Index) >> 9) & 0x3F];
            if ( v11 != 0 )
            {
              v12 = &v11[v10 & 0x1FF];
              if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
              {
                m_pInstance = v12->m_pInstance;
                if ( v12->m_pInstance != 0 )
                  break;
              }
            }
          }
          ++v7;
          ++v6;
          if ( targets.m_Size <= v7 )
            goto LABEL_13;
        }
        AbsAngles = CBaseEntity::GetAbsAngles(v12->m_pInstance);
        v15 = AbsAngles->z + rotation.z;
        v16 = AbsAngles->x + rotation.x;
        angles.y = AbsAngles->y + rotation.y;
        angles.z = v15;
        angles.x = v16;
        CBaseEntity::SetAbsAngles(m_pInstance, &angles);
        ++v7;
        ++v6;
      }
      while ( targets.m_Size > v7 );
    }
  }
LABEL_13:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&targets);
  return 0;
}


// CDOTA_ActionRunner::PerformAction_ApplyMotionController  (line 2857, @0x0000000002442000, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: KeyValues::FindKey, CDOTA_ActionRunner::SelectActionTargets, KeyValues::KeyValues, KeyValues::GetString, KeyValues::SetFloat, KeyValues::SetString, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, KeyValues::GetName, DevMsg(char const*,...), _Unwind_Resume (13 total)
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "modifier_scripted_motion_controller", "HorizontalControlFunction", "VerticalControlFunction", "%s - no target specified for %s."
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_ActionRunner::PerformAction_ApplyMotionController(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  KeyValues *Key; // r12
  const char *String; // rax
  float v6; // xmm1_4
  const char *v7; // r12
  const char *v8; // r14
  const char *v9; // rbx
  __int64 v10; // r12
  int i; // ebx
  CHandle<CBaseEntity> *v12; // rdx
  uint32 m_Index; // eax
  __int16 v14; // cx
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTABaseAbility *v18; // rax
  const char *Name; // r14
  const char *v21; // rax
  const char *verticalScriptFunction; // [rsp+0h] [rbp-80h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > targets; // [rsp+10h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  Key = KeyValues::FindKey(pKV, "Target", 0);
  if ( Key == 0 )
  {
    Name = KeyValues::GetName(pKV);
    v21 = (*(this->_vptr_CDOTA_ActionRunner + 5))(this);
    DevMsg("%s - no target specified for %s.", v21, Name);
  }
  targets.m_Size = 0;
  targets.m_Memory.m_pMemory = 0;
  targets.m_Memory.m_nAllocationCount = 0;
  targets.m_Memory.m_nGrowSize = 0;
  CDOTA_ActionRunner::SelectActionTargets(this, &targets, Key);
  if ( targets.m_Size != 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_scripted_motion_controller");
    String = KeyValues::GetString(pKV, "Duration", 0, 0, 0);
    if ( String != 0 )
    {
      (*(this->_vptr_CDOTA_ActionRunner + 2))(this, String, 0.0);
      KeyValues::SetFloat(&kv, "duration", v6);
    }
    v7 = KeyValues::GetString(pKV, "ScriptFile", 0, 0, 0);
    v8 = KeyValues::GetString(pKV, "HorizontalControlFunction", 0, 0, 0);
    verticalScriptFunction = KeyValues::GetString(pKV, "VerticalControlFunction", 0, 0, 0);
    v9 = KeyValues::GetString(pKV, "OnDestroy", 0, 0, 0);
    if ( v7 != 0 )
    {
      KeyValues::SetString(&kv, "ScriptFile", v7);
      if ( v8 != 0 )
        KeyValues::SetString(&kv, "HorizontalControlFunction", v8);
      if ( verticalScriptFunction != 0 )
        KeyValues::SetString(&kv, "VerticalControlFunction", verticalScriptFunction);
      if ( v9 != 0 )
        KeyValues::SetString(&kv, "OnDestroy", v9);
    }
    v10 = 0;
    for ( i = 0; targets.m_Size > i; ++v10 )
    {
      while ( 1 )
      {
        v12 = &targets.m_Memory.m_pMemory[v10];
        m_Index = targets.m_Memory.m_pMemory[v10].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v14 = v12->m_Index;
          v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v12->m_Index) >> 9) & 0x3F];
          if ( v15 != 0 )
          {
            v16 = &v15[v14 & 0x1FF];
            if ( v16 != 0 && m_Index == v16->m_EHandle.m_Index )
            {
              m_pInstance = v16->m_pInstance;
              if ( v16->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                break;
            }
          }
        }
        ++i;
        ++v10;
        if ( targets.m_Size <= i )
          goto LABEL_23;
      }
      v18 = (*(this->_vptr_CDOTA_ActionRunner + 8))(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, this->m_pCaster, v18, "modifier_scripted_motion_controller", &kv, 0);
      ++i;
    }
LABEL_23:
    KeyValues::~KeyValues(&kv);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&targets);
  return 0;
}


// CDOTA_ActionRunner::PerformAction_AnimationAttack  (line 2914, @0x0000000002425ff0, libserver.so)  // inlines: GetActionCaster, GetBool, SetBool
// calls: KeyValues::GetString, KeyValues::GetInt, KeyValues::GetFloat, KeyValues::KeyValues, KeyValues::SetInt, KeyValues::SetFloat, KeyValues::SetString, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_ActionRunner::PerformActions_Core
// strings: "Attachment1", "Attachment2", "Attachment3", "PreAttackSound", "DamageRadius", "DamagePercent" (13 total)
bool __fastcall CDOTA_ActionRunner::PerformAction_AnimationAttack(CDOTA_ActionRunner *const this, KeyValues *pKV)
{
  __int64 v4; // rax
  CDOTA_BaseNPC *m_pCaster; // r12
  CDOTABaseAbility *v6; // r13
  int Int; // r14d
  float v9; // xmm1_4
  float v10; // xmm1_4
  int v11; // r15d
  float v12; // xmm1_4
  float flAnimationTime; // [rsp+4h] [rbp-8Ch]
  const char *pszAttackSound; // [rsp+8h] [rbp-88h]
  const char *pszPreAttackSound; // [rsp+10h] [rbp-80h]
  const char *pszAttachment3; // [rsp+18h] [rbp-78h]
  const char *pszAttachment2; // [rsp+20h] [rbp-70h]
  const char *pszAttachment1; // [rsp+28h] [rbp-68h]
  const char *pszTranslationModifier; // [rsp+30h] [rbp-60h]
  int nDamagePercent; // [rsp+38h] [rbp-58h]
  float flInitialDelay; // [rsp+3Ch] [rbp-54h]
  KeyValues kv; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  v4 = (*(this->_vptr_CDOTA_ActionRunner + 8))(this);
  m_pCaster = this->m_pCaster;
  v6 = v4;
  if ( v4 != 0 && m_pCaster != 0 )
  {
    pszTranslationModifier = KeyValues::GetString(pKV, "ActivityModifier", 0, 0, 0);
    pszAttachment1 = KeyValues::GetString(pKV, "Attachment1", 0, 0, 0);
    pszAttachment2 = KeyValues::GetString(pKV, "Attachment2", 0, 0, 0);
    pszAttachment3 = KeyValues::GetString(pKV, "Attachment3", 0, 0, 0);
    pszPreAttackSound = KeyValues::GetString(pKV, "PreAttackSound", 0, 0, 0);
    pszAttackSound = KeyValues::GetString(pKV, "AttackSound", 0, 0, 0);
    Int = KeyValues::GetInt(pKV, "DamageRadius", 0);
    nDamagePercent = KeyValues::GetInt(pKV, "DamagePercent", 0);
    flAnimationTime = KeyValues::GetFloat(pKV, "AnimationTime", v9);
    flInitialDelay = KeyValues::GetFloat(pKV, "InitialDelay", v10);
    v11 = KeyValues::GetInt(pKV, "Debug", 0);
    KeyValues::KeyValues(&kv, "modifier_controller_test_melee_attack");
    KeyValues::SetInt(&kv, "damage_radius", Int);
    KeyValues::SetInt(&kv, "damage_percent", nDamagePercent);
    KeyValues::SetFloat(&kv, "duration", flAnimationTime - flInitialDelay);
    KeyValues::SetFloat(&kv, "initial_delay", v12);
    KeyValues::SetString(&kv, "attachment_1", pszAttachment1);
    KeyValues::SetString(&kv, "attachment_2", pszAttachment2);
    KeyValues::SetString(&kv, "attachment_3", pszAttachment3);
    KeyValues::SetString(&kv, "activity_modifier", pszTranslationModifier);
    KeyValues::SetString(&kv, "attack_land_sound", pszAttackSound);
    KeyValues::SetInt(&kv, "debug", v11 != 0);
    CDOTA_BaseNPC::AddNewModifier(m_pCaster, m_pCaster, v6, "modifier_controller_test_melee_attack", &kv, 0);
    DOTA_EmitSound(4, pszPreAttackSound, m_pCaster);
    KeyValues::~KeyValues(&kv);
  }
  return 0;
}


// Recursive_DecodeKeyValuesIntoScriptTable  (line 2955, @0x00000000024338f0, libserver.so)  // inlines: CVariantBase, Free, Internal_GetDataType, IsString, ~CVariantBase
// calls: KeyValues::GetFirstValue, KeyValues::GetNextValue, KeyValues::GetString, KeyValues::GetName, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, _Unwind_Resume
// callers: CDOTA_ActionRunner::SelectActionTargets, CDOTA_ActionRunner::SelectActionPointsWithoutOffset, CDOTA_ActionRunner::PerformAction_RunScript
void __fastcall Recursive_DecodeKeyValuesIntoScriptTable(
        HSCRIPT hTable,
        KeyValues *pKV,
        IScriptVM *pVM,
        CDOTA_ActionRunner *pActionRunner)
{
  KeyValues *i; // r12
  const char *String; // rax
  float v9; // xmm0_4
  void (__fastcall *v10)(IScriptVM *, HSCRIPT, const char *, ScriptVariant_t *); // rax
  const char *Name; // rdx
  KeyValues *j; // r12
  void (__fastcall *v13)(IScriptVM *, HSCRIPT, const char *, ScriptVariant_t *); // r14
  const char *v14; // rax
  void (__fastcall *v16)(IScriptVM *, HSCRIPT, const char *, ScriptVariant_t *); // [rsp+8h] [rbp-48h]
  ScriptVariant_t hSubTable; // [rsp+10h] [rbp-40h] BYREF

  for ( i = KeyValues::GetFirstValue(pKV); i != 0; i = KeyValues::GetNextValue(i) )
  {
    while ( 1 )
    {
      if ( (*(&i->CKeyValues_Data + 11) & 7) == 1 )
      {
        String = KeyValues::GetString(i, 0, "", 0, 0);
        if ( String != 0 && *String == 37 )
          break;
      }
      i = KeyValues::GetNextValue(i);
      if ( i == 0 )
        goto LABEL_8;
    }
    v9 = (*(pActionRunner->_vptr_CDOTA_ActionRunner + 2))(pActionRunner, String, 0.0);
    v10 = *(*pVM + 240LL);
    hSubTable.m_type = 1;
    hSubTable.m_flags = 0;
    hSubTable.m_float = v9;
    v16 = v10;
    Name = KeyValues::GetName(i);
    v16(pVM, hTable, Name, &hSubTable);
    CVariantBase<CVariantDefaultAllocator>::Free(&hSubTable);
  }
LABEL_8:
  for ( j = KeyValues::GetFirstTrueSubKey(pKV); j != 0; j = KeyValues::GetNextTrueSubKey(j) )
  {
    hSubTable.m_uint64 = 0;
    hSubTable.m_type = 0;
    hSubTable.m_flags = 0;
    v13 = *(*pVM + 312LL);
    v14 = KeyValues::GetName(j);
    v13(pVM, hTable, v14, &hSubTable);
    if ( hSubTable.m_type == 31 )
      Recursive_DecodeKeyValuesIntoScriptTable(hSubTable.m_hScript, j, pVM, pActionRunner);
    (*(*pVM + 344LL))(pVM, &hSubTable);
    if ( (hSubTable.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, hSubTable.m_uint64);
  }
}


// CDOTA_ActionDelayer::AddDelayedAction  (line 3096, @0x0000000002450800, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CModifierParams, CopyConstruct<DelayedAction_t>, CountdownTimer, DelayedAction_t, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, NetworkStateChanged, Set, Start, operator=, operator=<float>, operator[]
// calls: CountdownTimer::CountdownTimer, CountdownTimer::Now, CUtlMemory<DelayedAction_t, int>::Grow
// callers: CDOTA_ActionRunner::PerformAction_DelayedAction
void __fastcall CDOTA_ActionDelayer::AddDelayedAction(
        CDOTA_ActionDelayer *const this,
        float flDelay,
        CDOTA_ActionRunner *pActionRunner,
        KeyValues *pKV,
        CDOTA_BaseNPC *pCaster,
        const CModifierParams *const params)
{
  float v10; // xmm0_4
  CEntityIdentity *m_pEntity; // rdx
  int v12; // eax
  __int16 v13; // cx
  uint32 m_Index; // eax
  float fOriginalDamage; // xmm0_4
  Activity nActivity; // eax
  float fGain; // xmm0_4
  int nDamageCategory; // eax
  vec_t y; // xmm0_4
  int iFailType; // eax
  vec_t x; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_Orb *pOrb; // rax
  __int64 m_Size; // r12
  bool v25; // zf
  int v26; // eax
  DelayedAction_t *v27; // rax
  CountdownTimer timer; // [rsp+10h] [rbp-110h] BYREF
  DelayedAction_t action; // [rsp+30h] [rbp-F0h] BYREF

  CountdownTimer::CountdownTimer(&timer);
  v10 = CountdownTimer::Now(&timer) + flDelay;
  if ( v10 != timer.m_timestamp.m_Value )
    timer.m_timestamp.m_Value = v10;
  if ( flDelay != timer.m_duration.m_Value )
    timer.m_duration.m_Value = flDelay;
  CountdownTimer::CountdownTimer(&action.timer);
  action.params.bCraniumBasherTested = 0;
  action.hCaster.m_Index = -1;
  action.params.bHeartRegenApplied = 0;
  action.params.ability.m_Index = -1;
  action.params.fDamage = 0.0;
  action.params.fOriginalDamage = 0.0;
  action.params.nActivity = -1;
  action.params.bTooltip = 0;
  action.params.nTooltipParam = 0;
  action.params.bIgnoreInvis = 0;
  action.params.bNoCooldown = 0;
  action.params.bReincarnate = 0;
  action.params.bDoNotConsume = 0;
  action.params.fDistance = 0.0;
  action.params.inflictor.m_Index = -1;
  action.params.nDamageflags = 0;
  action.params.nDamageCategory = 0;
  memset(&action.params.pOrb, 0, 24);
  action.params.bDiffusalApplied = 0;
  action.params.bChainLightningConsidered = 0;
  action.params.bSuppressDamage = 0;
  action.params.bRangedAttack = 0;
  action.params.nPlayerids_stick = 0;
  action.params.hattacker.m_Index = -1;
  action.params.htarget.m_Index = -1;
  action.params.hunit.m_Index = -1;
  if ( action.timer.m_timestamp.m_Value != timer.m_timestamp.m_Value )
  {
    (*(action.timer._vptr_CountdownTimer + 2))(&action, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    action.timer.m_timestamp.m_Value = timer.m_timestamp.m_Value;
  }
  if ( action.timer.m_duration.m_Value != timer.m_duration.m_Value )
  {
    (*(action.timer._vptr_CountdownTimer + 2))(&action, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL, action.timer.m_duration.m_Value);
    action.timer.m_duration.m_Value = timer.m_duration.m_Value;
  }
  action.pActionRunner = pActionRunner;
  action.pKV = pKV;
  if ( pCaster != 0 && (m_pEntity = pCaster->m_pEntity) != 0 )
  {
    v12 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v13 = 0x7FFF;
    else
      v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(action.hCaster.m_Index) = v13 | action.hCaster.m_Index & 0x8000;
    action.hCaster.m_Index = (v12 << 15) | action.hCaster.m_Index & 0x7FFF;
  }
  else
  {
    action.hCaster.m_Index = -1;
  }
  m_Index = params->ability.m_Index;
  action.params.fDamage = params->fDamage;
  fOriginalDamage = params->fOriginalDamage;
  action.params.ability.m_Index = m_Index;
  nActivity = params->nActivity;
  action.params.fOriginalDamage = fOriginalDamage;
  action.params.fDistance = params->fDistance;
  fGain = params->fGain;
  action.params.nActivity = nActivity;
  LOBYTE(nActivity) = params->bTooltip;
  action.params.fGain = fGain;
  action.params.fAttackTimeRemaining = params->fAttackTimeRemaining;
  action.params.bTooltip = nActivity;
  action.params.nTooltipParam = params->nTooltipParam;
  action.params.bIgnoreInvis = params->bIgnoreInvis;
  action.params.bNoCooldown = params->bNoCooldown;
  action.params.bReincarnate = params->bReincarnate;
  action.params.bDoNotConsume = params->bDoNotConsume;
  action.params.m_nIssuerPlayerIndex = params->m_nIssuerPlayerIndex;
  action.params.inflictor.m_Index = params->inflictor.m_Index;
  action.params.nDamageType = params->nDamageType;
  action.params.nDamageflags = params->nDamageflags;
  nDamageCategory = params->nDamageCategory;
  action.params.vOldLoc.x = params->vOldLoc.x;
  y = params->vOldLoc.y;
  action.params.nDamageCategory = nDamageCategory;
  iFailType = params->iFailType;
  action.params.vOldLoc.y = y;
  action.params.vOldLoc.z = params->vOldLoc.z;
  x = params->vNewLoc.x;
  action.params.iFailType = iFailType;
  LOWORD(iFailType) = params->iRecord;
  action.params.vNewLoc.x = x;
  action.params.vNewLoc.y = params->vNewLoc.y;
  z = params->vNewLoc.z;
  action.params.iRecord = iFailType;
  pOrb = params->pOrb;
  action.params.vNewLoc.z = z;
  action.params.pOrb = pOrb;
  action.params.pOrb2 = params->pOrb2;
  action.params.nCost = params->nCost;
  action.params.nOrdertype = params->nOrdertype;
  action.params.bCraniumBasherTested = params->bCraniumBasherTested;
  action.params.bHeartRegenApplied = params->bHeartRegenApplied;
  action.params.bDiffusalApplied = params->bDiffusalApplied;
  action.params.bChainLightningConsidered = params->bChainLightningConsidered;
  m_Size = this->m_vDelayedActions.m_Size;
  action.params.bSuppressDamage = params->bSuppressDamage;
  v25 = m_Size == this->m_vDelayedActions.m_Memory.m_nAllocationCount;
  action.params.bRangedAttack = params->bRangedAttack;
  action.params.bProcessProcs = params->bProcessProcs;
  action.params.nPlayerids_stick = params->nPlayerids_stick;
  action.params.hattacker.m_Index = params->hattacker.m_Index;
  action.params.htarget.m_Index = params->htarget.m_Index;
  action.params.hunit.m_Index = params->hunit.m_Index;
  v26 = m_Size;
  if ( v25 )
  {
    CUtlMemory<DelayedAction_t,int>::Grow(&this->m_vDelayedActions.m_Memory, 1);
    v26 = this->m_vDelayedActions.m_Size;
  }
  this->m_vDelayedActions.m_Size = v26 + 1;
  v27 = &this->m_vDelayedActions.m_Memory.m_pMemory[m_Size];
  if ( v27 != 0 )
  {
    v27->timer._vptr_CountdownTimer = off_3FF42F0;
    v27->timer.m_duration.m_Value = action.timer.m_duration.m_Value;
    v27->timer.m_timestamp.m_Value = action.timer.m_timestamp.m_Value;
    v27->timer.m_bUseGlobalsTime = action.timer.m_bUseGlobalsTime;
    v27->pActionRunner = action.pActionRunner;
    v27->pKV = action.pKV;
    v27->hCaster.m_Index = action.hCaster.m_Index;
    v27->params = action.params;
  }
}


// CDOTA_ActionDelayer::RemoveDelayedActions  (line 3113, @0x0000000002430310, libserver.so)
// calls: CUtlVectorBase<DelayedAction_t, CUtlMemory<DelayedAction_t, int> >::Remove
// callers: CDOTA_ActionRunner::~CDOTA_ActionRunner, CDOTA_Ability_DataDriven::~CDOTA_Ability_DataDriven
void __fastcall CDOTA_ActionDelayer::RemoveDelayedActions(
        CDOTA_ActionDelayer *const this,
        CDOTA_ActionRunner *pActionRunner)
{
  int v3; // r12d
  CUtlVector<DelayedAction_t,CUtlMemory<DelayedAction_t,int> > *p_m_vDelayedActions; // r15
  __int64 v6; // rbx

  v3 = this->m_vDelayedActions.m_Size - 1;
  if ( v3 >= 0 )
  {
    p_m_vDelayedActions = &this->m_vDelayedActions;
    v6 = v3;
    do
    {
      if ( this->m_vDelayedActions.m_Memory.m_pMemory[v6].pActionRunner == pActionRunner )
        CUtlVectorBase<DelayedAction_t,CUtlMemory<DelayedAction_t,int>>::Remove(p_m_vDelayedActions, v3);
      --v3;
      --v6;
    }
    while ( v3 != -1 );
  }
}


// CDOTA_ActionDelayer::FrameUpdatePostEntityThink  (line 3122, @0x0000000002454550, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsElapsed, IsValid, LookupEntity, PerformActions, operator CEntityInstance*, operator!=<CDOTA_BaseNPC>, operator[]
// calls: Warning, CUtlVectorBase<DelayedAction_t, CUtlMemory<DelayedAction_t, int> >::Remove, CountdownTimer::Now, CDOTA_ActionRunner::PerformActions_Core
// strings: "Trying to perform delayed action with a caster that has been deleted!\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_ActionDelayer::FrameUpdatePostEntityThink(
        CDOTA_ActionDelayer *const this,
        const EventServerPostEntityThink_t *const msg)
{
  int v3; // r12d
  int v4; // esi
  DelayedAction_t *v5; // rbx
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTA_BaseNPC *m_pInstance; // rax
  CDOTA_ActionRunner *pActionRunner; // r13
  CModifierParams *p_params; // rbx
  KeyValues *v12; // rsi
  const CModifierParams *m_pEventContext; // rcx
  CDOTA_BaseNPC *m_pCaster; // r15
  CUtlVector<DelayedAction_t,CUtlMemory<DelayedAction_t,int> > *i; // [rsp+0h] [rbp-40h]
  const CModifierParams *v16; // [rsp+8h] [rbp-38h]

  v3 = 0;
  for ( i = &this->m_vDelayedActions; this->m_vDelayedActions.m_Size > v3; ++v3 )
  {
    v5 = &this->m_vDelayedActions.m_Memory.m_pMemory[v3];
    if ( CountdownTimer::Now(&v5->timer) >= v5->timer.m_timestamp.m_Value )
    {
      m_Index = v5->hCaster.m_Index;
      if ( m_Index + 2 > 1
        && (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->hCaster.m_Index) >> 9) & 0x3F]) != 0
        && (v8 = &v7[v5->hCaster.m_Index & 0x1FF]) != 0
        && m_Index == v8->m_EHandle.m_Index
        && (m_pInstance = v8->m_pInstance, v8->m_pInstance != 0) )
      {
        pActionRunner = v5->pActionRunner;
        p_params = &v5->params;
        v12 = *&p_params[-1].nPlayerids_stick;
        m_pEventContext = pActionRunner->m_pEventContext;
        pActionRunner->m_pEventContext = p_params;
        m_pCaster = pActionRunner->m_pCaster;
        pActionRunner->m_pCaster = m_pInstance;
        v16 = m_pEventContext;
        CDOTA_ActionRunner::PerformActions_Core(pActionRunner, v12);
        pActionRunner->m_pCaster = m_pCaster;
        pActionRunner->m_pEventContext = v16;
      }
      else
      {
        Warning("Trying to perform delayed action with a caster that has been deleted!\n");
      }
      v4 = v3--;
      CUtlVectorBase<DelayedAction_t,CUtlMemory<DelayedAction_t,int>>::Remove(i, v4);
    }
  }
}


// CDOTA_ActionDelayer::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 3146, @0x00000000024262a0, libserver.so)
void __cdecl CDOTA_ActionDelayer::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// DOTA_ActionDelayer  (line 3147, @0x00000000024262b0, libserver.so)
// globals: g_DOTA_ActionDelayer
CDOTA_ActionDelayer *__cdecl DOTA_ActionDelayer()
{
  return &g_DOTA_ActionDelayer;
}


