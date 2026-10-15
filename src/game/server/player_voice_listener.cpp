
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GetScriptDesc<CPlayerVoiceListener>  (line 15, @0x00000000023350f0, libserver.so)  // inlines: AddParameterType, AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<ScriptFunctionBinding_t>, Element, Finalize, GrowMemory, ScriptClassDesc_t, ScriptDeduceFunctionSignature<CPlayerVoiceListener*, CPlayerVoiceListener, bool, int>, ScriptDeduceFunctionSignature<CPlayerVoiceListener*, CPlayerVoiceListener, float, int>, ScriptFuncDescriptor_t, ScriptFunctionBinding_t, SetDescription, SetFunctionName, SetReturnType, SetScriptName, operator[]
// calls: operator new, CUtlMemory<ScriptFunctionBinding_t, int>::Grow
// strings: "!Player voice listeners", "CPlayerVoiceListener", "Returns whether the player specified is speaking.", "ScriptIsPlayerSpeaking", "Returns the number of seconds the player has been continuously speaking.", "ScriptGetPlayerSpeechDuration"
// globals: g_pCPlayerVoiceListener_ScriptDesc, CMemberScriptBinding1<CPlayerVoiceListener *,bool (CPlayerVoiceListener::*)(int),bool,int>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,int,CVar, CPlayerVoiceListener::ScriptIsPlayerSpeaking(int), CMemberScriptBinding1<CPlayerVoiceListener *,float (CPlayerVoiceListener::*)(int),float,int>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,int,CV, CPlayerVoiceListener::ScriptGetPlayerSpeechDuration(int)
ScriptClassDesc_t *__fastcall GetScriptDesc<CPlayerVoiceListener>(CPlayerVoiceListener *pScriptDescObjectInstance)
{
  ScriptClassDesc_t *result; // rax
  ScriptClassDesc_t *v2; // rbx
  ScriptFunctionBinding_t *m_pMemory; // rcx
  int8 m_nNumParameters; // dl
  __int64 v5; // rax
  int v6; // edx
  char v7; // si
  char v8; // di
  __int64 m_Size; // r13
  __int64 v10; // rdx
  __int64 v11; // rax
  char v12; // dl
  __int64 v13; // rcx
  int v14; // edx
  char v15; // cl
  char v16; // di

  result = g_pCPlayerVoiceListener_ScriptDesc;
  if ( g_pCPlayerVoiceListener_ScriptDesc == 0 )
  {
    v2 = operator new(0x50u);
    v2->m_pBaseDesc = 0;
    v2->m_FunctionBindings.m_Size = 0;
    v2->m_FunctionBindings.m_Memory.m_pMemory = 0;
    v2->m_FunctionBindings.m_Memory.m_nAllocationCount = 0;
    v2->m_FunctionBindings.m_Memory.m_nGrowSize = 0;
    v2->m_pfnConstruct = 0;
    v2->m_pfnDestruct = 0;
    v2->pHelper = 0;
    g_pCPlayerVoiceListener_ScriptDesc = v2;
    v2->m_pszDescription = "!Player voice listeners";
    v2->m_pszScriptName = "CPlayerVoiceListener";
    v2->m_pszClassname = "CPlayerVoiceListener";
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
    m_pMemory->m_desc.m_pszDescription = "Returns whether the player specified is speaking.";
    m_pMemory->m_desc.m_pszScriptName = "IsPlayerSpeaking";
    m_pMemory->m_desc.m_pszFunction = "ScriptIsPlayerSpeaking";
    v5 = m_nNumParameters++;
    m_pMemory->m_desc.m_ParameterTypes[v5] = 5;
    m_pMemory->m_desc.m_nNumParameters = m_nNumParameters;
    v6 = m_nNumParameters - 1;
    m_pMemory->m_desc.m_nOptionalParameters = 0;
    if ( v6 >= 0 && m_pMemory->m_desc.m_ParameterTypes[v6] == 32 )
    {
      v7 = 1;
      do
      {
        --v6;
        v8 = v7;
        if ( v6 == -1 )
        {
          m_pMemory->m_desc.m_nOptionalParameters = v7;
          goto LABEL_10;
        }
        ++v7;
      }
      while ( m_pMemory->m_desc.m_ParameterTypes[v6] == 32 );
      m_pMemory->m_desc.m_nOptionalParameters = v8;
    }
LABEL_10:
    m_pMemory->m_flags = 1;
    m_pMemory->m_pfnBinding = CMemberScriptBinding1<CPlayerVoiceListener *,bool (CPlayerVoiceListener::*)(int),bool,int>::Call;
    m_pMemory->m_pFunction = CPlayerVoiceListener::ScriptIsPlayerSpeaking;
    m_Size = v2->m_FunctionBindings.m_Size;
    if ( m_Size == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(&v2->m_FunctionBindings.m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v10 = &v2->m_FunctionBindings.m_Memory.m_pMemory[m_Size];
    if ( v10 != 0 )
    {
      *v10 = 0;
      *(v10 + 8) = 0;
      *(v10 + 16) = 0;
      *(v10 + 24) = 29;
      *(v10 + 25) = -1;
      *(v10 + 26) = 0;
      *(v10 + 40) = 0;
      v11 = &v2->m_FunctionBindings.m_Memory.m_pMemory[m_Size];
    }
    else
    {
      v11 = 0;
    }
    v12 = *(v11 + 26);
    *(v11 + 24) = 1;
    *(v11 + 16) = "Returns the number of seconds the player has been continuously speaking.";
    *v11 = "GetPlayerSpeechDuration";
    *(v11 + 8) = "ScriptGetPlayerSpeechDuration";
    v13 = v12++;
    *(v11 + v13 + 27) = 5;
    *(v11 + 26) = v12;
    v14 = v12 - 1;
    *(v11 + 25) = 0;
    if ( v14 >= 0 && *(v11 + v14 + 27) == 32 )
    {
      v15 = 1;
      do
      {
        --v14;
        v16 = v15;
        if ( v14 == -1 )
        {
          *(v11 + 25) = v15;
          goto LABEL_20;
        }
        ++v15;
      }
      while ( *(v11 + v14 + 27) == 32 );
      *(v11 + 25) = v16;
    }
LABEL_20:
    *(v11 + 64) = 1;
    *(v11 + 48) = CMemberScriptBinding1<CPlayerVoiceListener *,float (CPlayerVoiceListener::*)(int),float,int>::Call;
    *(v11 + 56) = CPlayerVoiceListener::ScriptGetPlayerSpeechDuration;
    return v2;
  }
  return result;
}


// CPlayerVoiceListener::CPlayerVoiceListener  (line 31, @0x0000000002325720, libserver.so)
// calls: CPlayerVoiceListener::InitData
void __fastcall CPlayerVoiceListener::CPlayerVoiceListener(CPlayerVoiceListener *const this)
{
  this->_vptr_IGameSystem = off_408B810;
  CPlayerVoiceListener::InitData(this);
}


// CPlayerVoiceListener::IsPlayerSpeaking  (line 39, @0x00000000023253d0, libserver.so)  // inlines: IsPlayerIndexValid, curtime
// callers: CPlayerVoiceListener::ScriptIsPlayerSpeaking, CPlayerVoiceListener::IsPlayerSpeaking, CPlayerVoiceListener::AddPlayerSpeakTime
bool __fastcall CPlayerVoiceListener::IsPlayerSpeaking(CPlayerVoiceListener *const this, CEntityIndex nPlayerIndex)
{
  bool result; // al
  float v3; // xmm0_4
  CGlobalVars *v4; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flCurrentTime; // xmm1_4
  float v7; // [rsp-1Ch] [rbp-1Ch]

  result = 0;
  if ( (nPlayerIndex.m_Data - 1) <= 0x40 )
  {
    v3 = this->m_flLastPlayerSpeechTime[nPlayerIndex.m_Data]
       + voice_player_speaking_delay_threshold.m_pParent->m_Value.m_fValue;
    v4 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v7 = this->m_flLastPlayerSpeechTime[nPlayerIndex.m_Data]
             + voice_player_speaking_delay_threshold.m_pParent->m_Value.m_fValue;
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v3 = v7;
        }
      }
      m_flCurrentTime = v4->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    return v3 >= m_flCurrentTime;
  }
  return result;
}


// CPlayerVoiceListener::IsPlayerSpeaking  (line 56, @0x0000000002325470, libserver.so)  // inlines: entindex
// calls: CEntityInstance::GetEntityIndex, CPlayerVoiceListener::IsPlayerSpeaking
bool __fastcall CPlayerVoiceListener::IsPlayerSpeaking(CPlayerVoiceListener *const this, CBasePlayer *pPlayer)
{
  bool result; // al
  CEntityIndex v4; // eax

  result = 0;
  if ( pPlayer != 0 )
  {
    v4.m_Data = CEntityInstance::GetEntityIndex(pPlayer).m_Data;
    return CPlayerVoiceListener::IsPlayerSpeaking(this, v4);
  }
  return result;
}


// CPlayerVoiceListener::ScriptIsPlayerSpeaking  (line 69, @0x0000000002325460, libserver.so)
// calls: CPlayerVoiceListener::IsPlayerSpeaking
bool __fastcall CPlayerVoiceListener::ScriptIsPlayerSpeaking(CPlayerVoiceListener *const this, int nPlayerIndex)
{
  return CPlayerVoiceListener::IsPlayerSpeaking(this, nPlayerIndex);
}


// CPlayerVoiceListener::AddPlayerSpeakTime  (line 80, @0x00000000023254a0, libserver.so)  // inlines: IsPlayerIndexValid, curtime
// calls: CPlayerVoiceListener::IsPlayerSpeaking
// callers: CPlayerVoiceListener::AddPlayerSpeakTime
void __fastcall CPlayerVoiceListener::AddPlayerSpeakTime(CPlayerVoiceListener *const this, CEntityIndex nPlayerIndex)
{
  __int64 m_Data; // rbx
  float *v4; // rax
  float v5; // xmm0_4
  CGlobalVars *v6; // r13
  CGlobalVars *v7; // rax
  float v8; // xmm0_4
  void (__fastcall *v9)(__int64, double); // rax
  CGlobalVars *v10; // r15
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  float m_flCurrentTime; // xmm0_4

  m_Data = nPlayerIndex.m_Data;
  if ( (nPlayerIndex.m_Data - 1) <= 0x40 )
  {
    if ( CPlayerVoiceListener::IsPlayerSpeaking(this, nPlayerIndex) )
    {
      v7 = gpGlobals;
      v10 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        v6 = gpGlobals;
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          v6 = gpGlobals;
          if ( m_pfnWarningFunc != 0 )
          {
            m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
            v6 = gpGlobals;
            v7 = gpGlobals;
          }
        }
        m_flCurrentTime = v10->m_flCurrentTime;
      }
      else
      {
        v6 = 0;
        m_flCurrentTime = 0.0;
      }
      this->m_flPlayerSpeechDuration[m_Data] = (m_flCurrentTime - this->m_flLastPlayerSpeechTime[m_Data])
                                             + this->m_flPlayerSpeechDuration[m_Data];
    }
    else
    {
      v4 = (this + 4 * m_Data);
      v5 = v4[137] + v4[71];
      v4[71] = 0.0;
      v4[137] = v5;
      v6 = gpGlobals;
      v7 = gpGlobals;
    }
    v8 = 0.0;
    if ( v7 != 0 )
    {
      if ( !v6->m_bEnableAssertions && !v6->m_bInSimulation )
      {
        v9 = v6->m_pfnWarningFunc;
        if ( v9 != 0 )
          v9(1, 0.0);
      }
      v8 = v6->m_flCurrentTime;
    }
    this->m_flLastPlayerSpeechTime[m_Data] = v8;
  }
}


// CPlayerVoiceListener::AddPlayerSpeakTime  (line 107, @0x00000000023255c0, libserver.so)  // inlines: entindex
// calls: CEntityInstance::GetEntityIndex, CPlayerVoiceListener::AddPlayerSpeakTime
// callers: CSource2GameClients::ClientVoice
void __fastcall CPlayerVoiceListener::AddPlayerSpeakTime(CPlayerVoiceListener *const this, CBasePlayer *pPlayer)
{
  CEntityIndex v3; // eax

  if ( pPlayer != 0 )
  {
    v3.m_Data = CEntityInstance::GetEntityIndex(pPlayer).m_Data;
    CPlayerVoiceListener::AddPlayerSpeakTime(this, v3);
  }
}


// CPlayerVoiceListener::GetPlayerSpeechDuration  (line 120, @0x00000000023255f0, libserver.so)  // inlines: IsPlayerIndexValid
float __fastcall CPlayerVoiceListener::GetPlayerSpeechDuration(
        CPlayerVoiceListener *const this,
        CEntityIndex nPlayerIndex)
{
  float result; // xmm0_4

  result = -1.0;
  if ( (nPlayerIndex.m_Data - 1) <= 0x40 )
    return this->m_flPlayerSpeechDuration[nPlayerIndex.m_Data];
  return result;
}


// CPlayerVoiceListener::GetPlayerSpeechDuration  (line 131, @0x0000000002325620, libserver.so)  // inlines: GetPlayerSpeechDuration, IsPlayerIndexValid
// calls: CEntityInstance::GetEntityIndex
float __fastcall CPlayerVoiceListener::GetPlayerSpeechDuration(CPlayerVoiceListener *const this, CBasePlayer *pPlayer)
{
  CEntityIndex v3; // eax

  if ( pPlayer == 0 )
    return -1.0;
  v3.m_Data = CEntityInstance::GetEntityIndex(pPlayer).m_Data;
  if ( (v3.m_Data - 1) > 0x40 )
    return -1.0;
  else
    return this->m_flPlayerSpeechDuration[v3.m_Data];
}


// CPlayerVoiceListener::ScriptGetPlayerSpeechDuration  (line 144, @0x000000000231ebc0, libserver.so)  // inlines: GetPlayerSpeechDuration, IsPlayerIndexValid
float __fastcall CPlayerVoiceListener::ScriptGetPlayerSpeechDuration(
        CPlayerVoiceListener *const this,
        int nPlayerIndex)
{
  float result; // xmm0_4

  result = -1.0;
  if ( (nPlayerIndex - 1) <= 0x40 )
    return this->m_flPlayerSpeechDuration[nPlayerIndex];
  return result;
}


// CPlayerVoiceListener::GetPlayerSpeechTotalDuration  (line 152, @0x0000000002325680, libserver.so)  // inlines: IsPlayerIndexValid
// callers: CDOTAGCServerSystem::MatchSignOut
float __fastcall CPlayerVoiceListener::GetPlayerSpeechTotalDuration(
        CPlayerVoiceListener *const this,
        CEntityIndex nPlayerIndex)
{
  float result; // xmm0_4

  result = -0.0;
  if ( (nPlayerIndex.m_Data - 1) <= 0x40 )
    return this->m_flPlayerSpeechTotalDuration[nPlayerIndex.m_Data]
         + this->m_flPlayerSpeechDuration[nPlayerIndex.m_Data];
  return result;
}


// CPlayerVoiceListener::InitData  (line 164, @0x00000000023256b0, libserver.so)  // inlines: memset
// callers: CPlayerVoiceListener::GameInit, CPlayerVoiceListener::PreSpawnGroupUnload, CPlayerVoiceListener::CPlayerVoiceListener, _GLOBAL__sub_I__unity_base_09.cpp
void __fastcall CPlayerVoiceListener::InitData(CPlayerVoiceListener *const this)
{
  CPlayerVoiceListener *v1; // rdx
  float *m_flLastPlayerSpeechTime; // rdi
  _WORD *m_flPlayerSpeechDuration; // rdi

  v1 = this;
  m_flLastPlayerSpeechTime = this->m_flLastPlayerSpeechTime;
  memset(m_flLastPlayerSpeechTime, 0, 0x40u);
  *(m_flLastPlayerSpeechTime + 32) = 0;
  m_flPlayerSpeechDuration = v1->m_flPlayerSpeechDuration;
  v1 = (v1 + 548);
  memset(m_flPlayerSpeechDuration, 0, 0x40u);
  m_flPlayerSpeechDuration[32] = 0;
  memset(v1, 0, 0x40u);
  LOWORD(v1->m_flLastPlayerSpeechTime[11]) = 0;
}


// CPlayerVoiceListener::GameInit  (line 175, @0x0000000002325700, libserver.so)
// calls: CPlayerVoiceListener::InitData
void __fastcall CPlayerVoiceListener::GameInit(CPlayerVoiceListener *const this, const EventGameInit_t *const msg)
{
  CPlayerVoiceListener::InitData(this);
}


// CPlayerVoiceListener::PreSpawnGroupUnload  (line 183, @0x0000000002325710, libserver.so)
// calls: CPlayerVoiceListener::InitData
void __fastcall CPlayerVoiceListener::PreSpawnGroupUnload(
        CPlayerVoiceListener *const this,
        const EventPreSpawnGroupUnload_t *const msg)
{
  CPlayerVoiceListener::InitData(this);
}


// PlayerVoiceListener  (line 191, @0x0000000002325740, libserver.so)
// callers: CSource2GameClients::ClientVoice, CDOTAGCServerSystem::MatchSignOut
// globals: g_PlayerVoiceListener
CPlayerVoiceListener *__cdecl PlayerVoiceListener()
{
  return &g_PlayerVoiceListener;
}


// CPlayerVoiceListener::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 193, @0x0000000002325750, libserver.so)
void __cdecl CPlayerVoiceListener::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


