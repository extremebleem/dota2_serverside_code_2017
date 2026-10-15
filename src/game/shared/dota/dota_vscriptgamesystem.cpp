// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_vscriptgamesystem.cpp:66
class CScriptParticleManager {
	int CreateParticle(const char *, int, HSCRIPT);
	int CreateParticleForPlayer(const char *, int, HSCRIPT, HSCRIPT);
	int CreateParticleForTeam(const char *, int, HSCRIPT, int);
	void SetParticleControl(int, int, Vector);
	void ReleaseParticleIndex(int);
	void SetParticleAlwaysSimulate(int);
	void SetParticleControlOrientation(int, int, Vector, Vector, Vector);
	void SetParticleControlEnt(int, int, HSCRIPT, int, const char *, Vector, bool);
	const char * GetParticleReplacement(const char *, HSCRIPT);
	void SetParticleControlForward(int, int, Vector);
	void DestroyParticle(int, bool);

	// sizeof = 1
};

// src/game/shared/dota/dota_vscriptgamesystem.cpp:246
class CScriptHeroList {
	HSCRIPT GetHero(int);
	int GetHeroCount();
	ScriptVariant_t GetAllHeroes();

	// sizeof = 1
};

// src/game/shared/dota/dota_vscriptgamesystem.cpp:384
class CPrecacheUnitByNameAsyncCallback {
private:

	HSCRIPT m_hCallback;  // +0x0
	CPrecacheUnitByNameAsyncCallback(HSCRIPT);
	~CPrecacheUnitByNameAsyncCallback();
	void CallBackAndDeleteMe(SpawnGroupHandle_t, const CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > &);

	// sizeof = 32
};

// src/game/shared/dota/dota_vscriptgamesystem.cpp:720
class CScriptHTTPRequest {
private:

	HSCRIPT m_hInstance;  // +0x0
	HTTPRequestHandle m_hRequest;  // +0x10

	SteamAPICall_t m_APICallHandle;  // +0x18
	HSCRIPT m_hCallback;  // +0x20
	CScriptHTTPRequest(ISteamHTTP *, HTTPRequestHandle);
	~CScriptHTTPRequest();
	HSCRIPT GetInstance();
	bool SetHTTPRequestNetworkActivityTimeout(uint32);
	bool SetHTTPRequestAbsoluteTimeoutMS(uint32);
	bool SetHTTPRequestHeaderValue(const char *, const char *);
	bool SetHTTPRequestGetOrPostParameter(const char *, const char *);
	bool SetHTTPRequestRawPostBody(const char *, const char *);
	bool Send(HSCRIPT);
	void OnHTTPRequestCompleted(HTTPRequestCompleted_t *, bool);

	// sizeof = 88
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTAVScriptGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 58, @0x00000000027b2a10, libserver.so)
void __cdecl CDOTAVScriptGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CScriptParticleManager::CreateParticle  (line 69, @0x00000000027d1ad0, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToEnt
// calls: GetParticleManager, GetScriptDesc<CEntityInstance>, CDOTA_ParticleManager::CreateParticle
int __fastcall CScriptParticleManager::CreateParticle(
        CScriptParticleManager *const this,
        const char *pParticleName,
        int iAttachType,
        HSCRIPT hEntity)
{
  __int64 (__fastcall *v7)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  CBaseEntity *v9; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax

  if ( GetParticleManager() == 0 )
    return 0;
  if ( hEntity != 0 )
  {
    v7 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v9 = v7(g_pScriptVM, hEntity, Script);
  }
  else
  {
    v9 = 0;
  }
  ParticleManager = GetParticleManager();
  return CDOTA_ParticleManager::CreateParticle(ParticleManager, pParticleName, iAttachType, v9, 0, 0);
}


// CScriptParticleManager::SetParticleControl  (line 72, @0x00000000027cf8d0, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::SetParticleControl
void __fastcall CScriptParticleManager::SetParticleControl(
        CScriptParticleManager *const this,
        int iIndex,
        int iPoint,
        double a4,
        float a5)
{
  CDOTA_ParticleManager *ParticleManager; // rax

  if ( GetParticleManager() != 0 )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(ParticleManager, iIndex, iPoint, a4, a5);
  }
}


// CScriptParticleManager::ReleaseParticleIndex  (line 73, @0x00000000027cfcb0, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::ReleaseParticleIndex
void __fastcall CScriptParticleManager::ReleaseParticleIndex(CScriptParticleManager *const this, int iIndex)
{
  CDOTA_ParticleManager *ParticleManager; // rax

  if ( GetParticleManager() != 0 )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(ParticleManager, iIndex);
  }
}


// CScriptParticleManager::SetParticleAlwaysSimulate  (line 74, @0x00000000027d05e0, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::SetParticleAlwaysSimulate
void __fastcall CScriptParticleManager::SetParticleAlwaysSimulate(CScriptParticleManager *const this, int iIndex)
{
  CDOTA_ParticleManager *ParticleManager; // rax

  if ( GetParticleManager() != 0 )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleAlwaysSimulate(ParticleManager, iIndex);
  }
}


// CScriptParticleManager::SetParticleControlOrientation  (line 75, @0x00000000027d0560, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::SetParticleControlOrientation
void __fastcall CScriptParticleManager::SetParticleControlOrientation(
        CScriptParticleManager *const this,
        int nIndex,
        int nPoint,
        double a4,
        float a5,
        double a6,
        float a7,
        double a8,
        float a9)
{
  CDOTA_ParticleManager *ParticleManager; // rax

  if ( GetParticleManager() != 0 )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlOrientation(ParticleManager, nIndex, nPoint, a4, a5, a6, a7, a8, a9);
  }
}


// CScriptParticleManager::SetParticleControlEnt  (line 78, @0x00000000027d1b70, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToEnt
// calls: GetParticleManager, GetScriptDesc<CEntityInstance>, CDOTA_ParticleManager::SetParticleControlEnt
void __fastcall CScriptParticleManager::SetParticleControlEnt(
        CScriptParticleManager *const this,
        int iIndex,
        int iPoint,
        HSCRIPT hEntity,
        int iAttachType,
        const char *pAttachmentName,
        Vector vecFallbackPosition,
        bool bIncludeWearables)
{
  ScriptClassDesc_t *Script; // rax
  const CBaseAnimating *v13; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  __int64 (__fastcall *v15)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // [rsp+10h] [rbp-50h]

  if ( GetParticleManager() != 0 )
  {
    if ( hEntity != 0 )
    {
      v15 = *(*g_pScriptVM + 208LL);
      Script = GetScriptDesc<CEntityInstance>(0);
      v13 = v15(g_pScriptVM, hEntity, Script);
    }
    else
    {
      v13 = 0;
    }
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(
      ParticleManager,
      iIndex,
      iPoint,
      v13,
      iAttachType,
      pAttachmentName,
      vecFallbackPosition,
      bIncludeWearables);
  }
}


// CScriptParticleManager::GetParticleReplacement  (line 83, @0x00000000027d1a50, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToEnt
// calls: GetParticleManager, GetScriptDesc<CEntityInstance>, CDOTA_ParticleManager::GetParticleReplacement
const char *__fastcall CScriptParticleManager::GetParticleReplacement(
        CScriptParticleManager *const this,
        const char *pParticleNameIn,
        HSCRIPT hEntity)
{
  __int64 (__fastcall *v5)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  CBaseEntity *v7; // rsi

  if ( GetParticleManager() == 0 )
    return 0;
  GetParticleManager();
  if ( hEntity != 0 )
  {
    v5 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v7 = v5(g_pScriptVM, hEntity, Script);
  }
  else
  {
    v7 = 0;
  }
  return CDOTA_ParticleManager::GetParticleReplacement(pParticleNameIn, v7);
}


// CScriptParticleManager::SetParticleControlForward  (line 92, @0x00000000027d0500, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::SetParticleControlForward
void __fastcall CScriptParticleManager::SetParticleControlForward(
        CScriptParticleManager *const this,
        int iIndex,
        int iPoint,
        double a4,
        float a5)
{
  CDOTA_ParticleManager *ParticleManager; // rax

  if ( GetParticleManager() != 0 )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlForward(ParticleManager, iIndex, iPoint, a4, a5);
  }
}


// CScriptParticleManager::DestroyParticle  (line 96, @0x00000000027cf930, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect
void __fastcall CScriptParticleManager::DestroyParticle(
        CScriptParticleManager *const this,
        int iIndex,
        bool bDestroyImmediately)
{
  CDOTA_ParticleManager *ParticleManager; // rax

  if ( GetParticleManager() != 0 )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, iIndex, bDestroyImmediately);
  }
}


// CScriptParticleManager::CreateParticleForPlayer  (line 101, @0x00000000027a96d0, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, HScriptToEntity<CBaseEntity>, ToBasePlayer, ToEnt, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CRecipientFilter::RemoveAllRecipients, GetScriptDesc<CEntityInstance>, CRecipientFilter::AddRecipient, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
int __fastcall CScriptParticleManager::CreateParticleForPlayer(
        CScriptParticleManager *const this,
        const char *pParticleName,
        int iAttachType,
        HSCRIPT hEntity,
        HSCRIPT hPlayer)
{
  __int64 (__fastcall *v7)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  __int64 v9; // rax
  const CEntityInstance *v10; // r12
  char v11; // al
  const CEntityInstance *v12; // rsi
  __int64 (__fastcall *v13)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *v14; // rax
  CBaseEntity *v15; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  int v17; // r12d
  CReliableBroadcastRecipientFilter filter; // [rsp+10h] [rbp-170h] BYREF
  unsigned __int64 v22; // [rsp+148h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filter);
  CRecipientFilter::RemoveAllRecipients(&filter);
  if ( hPlayer != 0
    && (v7 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        v9 = v7(g_pScriptVM, hPlayer, Script),
        v10 = v9,
        v9 != 0) )
  {
    v11 = (*(*v9 + 1120LL))(v9);
    v12 = 0;
    if ( v11 != 0 )
      v12 = v10;
  }
  else
  {
    v12 = 0;
  }
  CRecipientFilter::AddRecipient(&filter, v12);
  if ( GetParticleManager() != 0 )
  {
    if ( hEntity != 0 )
    {
      v13 = *(*g_pScriptVM + 208LL);
      v14 = GetScriptDesc<CEntityInstance>(0);
      v15 = v13(g_pScriptVM, hEntity, v14);
    }
    else
    {
      v15 = 0;
    }
    ParticleManager = GetParticleManager();
    v17 = CDOTA_ParticleManager::CreateParticle(ParticleManager, pParticleName, iAttachType, v15, &filter, 0);
  }
  else
  {
    v17 = 0;
  }
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
  return v17;
}


// CScriptParticleManager::CreateParticleForTeam  (line 113, @0x00000000027a9350, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, HScriptToEntity<CBaseEntity>, ToEnt, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CRecipientFilter::RemoveAllRecipients, CRecipientFilter::AddRecipientsByTeamNumber, GetParticleManager, GetScriptDesc<CEntityInstance>, CDOTA_ParticleManager::CreateParticle, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
int __fastcall CScriptParticleManager::CreateParticleForTeam(
        CScriptParticleManager *const this,
        const char *pParticleName,
        int iAttachType,
        HSCRIPT hEntity,
        int iTeam)
{
  __int64 (__fastcall *v8)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  CBaseEntity *v10; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  int v12; // r12d
  CReliableBroadcastRecipientFilter filter; // [rsp+10h] [rbp-170h] BYREF
  unsigned __int64 v16; // [rsp+148h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filter);
  CRecipientFilter::RemoveAllRecipients(&filter);
  CRecipientFilter::AddRecipientsByTeamNumber(&filter, iTeam);
  if ( GetParticleManager() != 0 )
  {
    if ( hEntity != 0 )
    {
      v8 = *(*g_pScriptVM + 208LL);
      Script = GetScriptDesc<CEntityInstance>(0);
      v10 = v8(g_pScriptVM, hEntity, Script);
    }
    else
    {
      v10 = 0;
    }
    ParticleManager = GetParticleManager();
    v12 = CDOTA_ParticleManager::CreateParticle(ParticleManager, pParticleName, iAttachType, v10, &filter, 0);
  }
  else
  {
    v12 = 0;
  }
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
  return v12;
}


// GetScriptDesc<CScriptParticleManager>  (line 126, @0x00000000027bfef0, libserver.so)  // inlines: AddParameterType, CUtlMemory, CUtlVector, CUtlVectorBase, Finalize, ScriptClassDesc_t, ScriptDeduceFunctionSignature<CScriptParticleManager*, CScriptParticleManager, char const*, char const*, HSCRIPT__*>, ScriptDeduceFunctionSignature<CScriptParticleManager*, CScriptParticleManager, int, char const*, int, HSCRIPT__*, HSCRIPT__*>, ScriptDeduceFunctionSignature<CScriptParticleManager*, CScriptParticleManager, int, char const*, int, HSCRIPT__*, int>, ScriptDeduceFunctionSignature<CScriptParticleManager*, CScriptParticleManager, int, char const*, int, HSCRIPT__*>, ScriptDeduceFunctionSignature<CScriptParticleManager*, CScriptParticleManager, void, int, bool>, ScriptDeduceFunctionSignature<CScriptParticleManager*, CScriptParticleManager, void, int, int, HSCRIPT__*, int, char const*, Vector, bool>, ScriptDeduceFunctionSignature<CScriptParticleManager*, CScriptParticleManager, void, int, int, Vector, Vector, Vector>, ScriptDeduceFunctionSignature<CScriptParticleManager*, CScriptParticleManager, void, int, int, Vector>, ScriptDeduceFunctionSignature<CScriptParticleManager*, CScriptParticleManager, void, int>, SetDescription, SetFunctionName, SetReturnType, SetScriptName, operator[]
// calls: operator new, CUtlVectorBase<ScriptFunctionBinding_t, CUtlMemory<ScriptFunctionBinding_t, int> >::AddToTail
// callers: CDOTAVScriptGameSystem::InstallScriptBindings
// strings: "!Used to create and manage particle effects", "CScriptParticleManager", "Creates a new particle effect", "CreateParticle", "Creates a new particle effect that only plays for the specified player", "CreateParticleForPlayer" (21 total)
// globals: g_pCScriptParticleManager_ScriptDesc, CMemberScriptBinding3<CScriptParticleManager *,int (CScriptParticleManager::*)(char const*,int,HSCRIPT__ *),int,char const*,int,HSCRIPT__ *>::Call(void *,void *, CScriptParticleManager::CreateParticle(char const*,int,HSCRIPT__ *), CMemberScriptBinding4<CScriptParticleManager *,int (CScriptParticleManager::*)(char const*,int,HSCRIPT__ *,HSCRIPT__ *),int,char const*,int,HSCRIPT__ *,HSCRIPT_, CScriptParticleManager::CreateParticleForPlayer(char const*,int,HSCRIPT__ *,HSCRIPT__ *), CMemberScriptBinding4<CScriptParticleManager *,int (CScriptParticleManager::*)(char const*,int,HSCRIPT__ *,int),int,char const*,int,HSCRIPT__ *,int>::Call(void , CScriptParticleManager::CreateParticleForTeam(char const*,int,HSCRIPT__ *,int), CMemberScriptBinding3<CScriptParticleManager *,void (CScriptParticleManager::*)(int,int,Vector),void,int,int,Vector>::Call(void *,void *,CVariantBase<CVariantDe (21 total)
ScriptClassDesc_t *__fastcall GetScriptDesc<CScriptParticleManager>(CScriptParticleManager *pScriptDescObjectInstance)
{
  ScriptClassDesc_t *result; // rax
  ScriptClassDesc_t *v2; // r12
  CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int> > *p_m_FunctionBindings; // rbx
  __int64 v4; // rcx
  char v5; // al
  char v6; // dl
  int v7; // eax
  char v8; // dl
  char v9; // di
  __int64 v10; // rcx
  char v11; // dl
  char v12; // al
  int v13; // edx
  char v14; // al
  char v15; // di
  __int64 v16; // rcx
  char v17; // dl
  char v18; // al
  int v19; // edx
  char v20; // al
  char v21; // di
  __int64 v22; // rcx
  char v23; // dl
  char v24; // al
  int v25; // edx
  char v26; // al
  char v27; // di
  __int64 v28; // rcx
  char v29; // dl
  __int64 v30; // rax
  int v31; // edx
  char v32; // al
  char v33; // di
  __int64 v34; // rcx
  char v35; // dl
  __int64 v36; // rax
  int v37; // edx
  char v38; // al
  char v39; // di
  __int64 v40; // rcx
  char v41; // dl
  char v42; // al
  int v43; // edx
  char v44; // al
  char v45; // di
  __int64 v46; // rcx
  char v47; // dl
  char v48; // al
  int v49; // edx
  char v50; // al
  char v51; // di
  __int64 v52; // rcx
  char v53; // dl
  char v54; // al
  int v55; // edx
  char v56; // al
  char v57; // di
  __int64 v58; // rcx
  char v59; // dl
  char v60; // al
  int v61; // edx
  char v62; // al
  char v63; // di
  __int64 v64; // rcx
  char v65; // dl
  char v66; // al
  int v67; // edx
  char v68; // al
  char v69; // di

  result = g_pCScriptParticleManager_ScriptDesc;
  if ( g_pCScriptParticleManager_ScriptDesc == 0 )
  {
    v2 = operator new(0x50u);
    v2->m_pBaseDesc = 0;
    v2->m_FunctionBindings.m_Size = 0;
    p_m_FunctionBindings = &v2->m_FunctionBindings;
    v2->m_FunctionBindings.m_Memory.m_pMemory = 0;
    v2->m_FunctionBindings.m_Memory.m_nAllocationCount = 0;
    v2->m_FunctionBindings.m_Memory.m_nGrowSize = 0;
    v2->m_pfnConstruct = 0;
    v2->m_pfnDestruct = 0;
    v2->pHelper = 0;
    g_pCScriptParticleManager_ScriptDesc = v2;
    v2->m_pszDescription = "!Used to create and manage particle effects";
    v2->m_pszScriptName = "CScriptParticleManager";
    v2->m_pszClassname = "CScriptParticleManager";
    v4 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(&v2->m_FunctionBindings)];
    *(v4 + 24) = 5;
    *(v4 + 16) = "Creates a new particle effect";
    *v4 = "CreateParticle";
    *(v4 + 8) = "CreateParticle";
    v5 = *(v4 + 26);
    *(v4 + v5 + 27) = 30;
    *(v4 + (v5 + 1) + 27) = 5;
    v6 = v5 + 2;
    v5 += 3;
    *(v4 + v6 + 27) = 31;
    *(v4 + 26) = v5;
    v7 = v5 - 1;
    *(v4 + 25) = 0;
    if ( v7 >= 0 && *(v4 + v7 + 27) == 32 )
    {
      v8 = 1;
      do
      {
        --v7;
        v9 = v8;
        if ( v7 == -1 )
        {
          *(v4 + 25) = v8;
          goto LABEL_8;
        }
        ++v8;
      }
      while ( *(v4 + v7 + 27) == 32 );
      *(v4 + 25) = v9;
    }
LABEL_8:
    *(v4 + 64) = 1;
    *(v4 + 48) = CMemberScriptBinding3<CScriptParticleManager *,int (CScriptParticleManager::*)(char const*,int,HSCRIPT__ *),int,char const*,int,HSCRIPT__ *>::Call;
    *(v4 + 56) = CScriptParticleManager::CreateParticle;
    v10 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v11 = *(v10 + 26);
    *(v10 + 24) = 5;
    *(v10 + 16) = "Creates a new particle effect that only plays for the specified player";
    *v10 = "CreateParticleForPlayer";
    *(v10 + 8) = "CreateParticleForPlayer";
    *(v10 + v11 + 27) = 30;
    *(v10 + (v11 + 1) + 27) = 5;
    *(v10 + (v11 + 2) + 27) = 31;
    v12 = v11 + 3;
    v11 += 4;
    *(v10 + v12 + 27) = 31;
    *(v10 + 26) = v11;
    v13 = v11 - 1;
    *(v10 + 25) = 0;
    if ( v13 >= 0 && *(v10 + v13 + 27) == 32 )
    {
      v14 = 1;
      do
      {
        --v13;
        v15 = v14;
        if ( v13 == -1 )
        {
          *(v10 + 25) = v14;
          goto LABEL_14;
        }
        ++v14;
      }
      while ( *(v10 + v13 + 27) == 32 );
      *(v10 + 25) = v15;
    }
LABEL_14:
    *(v10 + 64) = 1;
    *(v10 + 48) = CMemberScriptBinding4<CScriptParticleManager *,int (CScriptParticleManager::*)(char const*,int,HSCRIPT__ *,HSCRIPT__ *),int,char const*,int,HSCRIPT__ *,HSCRIPT__ *>::Call;
    *(v10 + 56) = CScriptParticleManager::CreateParticleForPlayer;
    v16 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v17 = *(v16 + 26);
    *(v16 + 24) = 5;
    *(v16 + 16) = "Creates a new particle effect that only plays for the specified team";
    *v16 = "CreateParticleForTeam";
    *(v16 + 8) = "CreateParticleForTeam";
    *(v16 + v17 + 27) = 30;
    *(v16 + (v17 + 1) + 27) = 5;
    *(v16 + (v17 + 2) + 27) = 31;
    v18 = v17 + 3;
    v17 += 4;
    *(v16 + v18 + 27) = 5;
    *(v16 + 26) = v17;
    v19 = v17 - 1;
    *(v16 + 25) = 0;
    if ( v19 >= 0 && *(v16 + v19 + 27) == 32 )
    {
      v20 = 1;
      do
      {
        --v19;
        v21 = v20;
        if ( v19 == -1 )
        {
          *(v16 + 25) = v20;
          goto LABEL_20;
        }
        ++v20;
      }
      while ( *(v16 + v19 + 27) == 32 );
      *(v16 + 25) = v21;
    }
LABEL_20:
    *(v16 + 64) = 1;
    *(v16 + 48) = CMemberScriptBinding4<CScriptParticleManager *,int (CScriptParticleManager::*)(char const*,int,HSCRIPT__ *,int),int,char const*,int,HSCRIPT__ *,int>::Call;
    *(v16 + 56) = CScriptParticleManager::CreateParticleForTeam;
    v22 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v23 = *(v22 + 26);
    *(v22 + 24) = 0;
    *(v22 + 16) = "Set the control point data for a control on a particle effect";
    *v22 = "SetParticleControl";
    *(v22 + 8) = "SetParticleControl";
    *(v22 + v23 + 27) = 5;
    *(v22 + (v23 + 1) + 27) = 5;
    v24 = v23 + 2;
    v23 += 3;
    *(v22 + v24 + 27) = 3;
    *(v22 + 26) = v23;
    v25 = v23 - 1;
    *(v22 + 25) = 0;
    if ( v25 >= 0 && *(v22 + v25 + 27) == 32 )
    {
      v26 = 1;
      do
      {
        --v25;
        v27 = v26;
        if ( v25 == -1 )
        {
          *(v22 + 25) = v26;
          goto LABEL_26;
        }
        ++v26;
      }
      while ( *(v22 + v25 + 27) == 32 );
      *(v22 + 25) = v27;
    }
LABEL_26:
    *(v22 + 64) = 1;
    *(v22 + 48) = CMemberScriptBinding3<CScriptParticleManager *,void (CScriptParticleManager::*)(int,int,Vector),void,int,int,Vector>::Call;
    *(v22 + 56) = CScriptParticleManager::SetParticleControl;
    v28 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v29 = *(v28 + 26);
    *(v28 + 24) = 0;
    *(v28 + 16) = "Frees the specified particle index";
    *v28 = "ReleaseParticleIndex";
    *(v28 + 8) = "ReleaseParticleIndex";
    v30 = v29++;
    *(v28 + v30 + 27) = 5;
    *(v28 + 26) = v29;
    v31 = v29 - 1;
    *(v28 + 25) = 0;
    if ( v31 >= 0 && *(v28 + v31 + 27) == 32 )
    {
      v32 = 1;
      do
      {
        --v31;
        v33 = v32;
        if ( v31 == -1 )
        {
          *(v28 + 25) = v32;
          goto LABEL_32;
        }
        ++v32;
      }
      while ( *(v28 + v31 + 27) == 32 );
      *(v28 + 25) = v33;
    }
LABEL_32:
    *(v28 + 64) = 1;
    *(v28 + 48) = CMemberScriptBinding1<CScriptParticleManager *,void (CScriptParticleManager::*)(int),void,int>::Call;
    *(v28 + 56) = CScriptParticleManager::ReleaseParticleIndex;
    v34 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v35 = *(v34 + 26);
    *(v34 + 24) = 0;
    *(v34 + 16) = "";
    *v34 = "SetParticleAlwaysSimulate";
    *(v34 + 8) = "SetParticleAlwaysSimulate";
    v36 = v35++;
    *(v34 + v36 + 27) = 5;
    *(v34 + 26) = v35;
    v37 = v35 - 1;
    *(v34 + 25) = 0;
    if ( v37 >= 0 && *(v34 + v37 + 27) == 32 )
    {
      v38 = 1;
      do
      {
        --v37;
        v39 = v38;
        if ( v37 == -1 )
        {
          *(v34 + 25) = v38;
          goto LABEL_38;
        }
        ++v38;
      }
      while ( *(v34 + v37 + 27) == 32 );
      *(v34 + 25) = v39;
    }
LABEL_38:
    *(v34 + 64) = 1;
    *(v34 + 48) = CMemberScriptBinding1<CScriptParticleManager *,void (CScriptParticleManager::*)(int),void,int>::Call;
    *(v34 + 56) = CScriptParticleManager::SetParticleAlwaysSimulate;
    v40 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v41 = *(v40 + 26);
    *(v40 + 24) = 0;
    *(v40 + 16) = "";
    *v40 = "SetParticleControlEnt";
    *(v40 + 8) = "SetParticleControlEnt";
    *(v40 + v41 + 27) = 5;
    *(v40 + (v41 + 1) + 27) = 5;
    *(v40 + (v41 + 2) + 27) = 31;
    *(v40 + (v41 + 3) + 27) = 5;
    *(v40 + (v41 + 4) + 27) = 30;
    *(v40 + (v41 + 5) + 27) = 3;
    v42 = v41 + 6;
    v41 += 7;
    *(v40 + v42 + 27) = 6;
    *(v40 + 26) = v41;
    v43 = v41 - 1;
    *(v40 + 25) = 0;
    if ( v43 >= 0 && *(v40 + v43 + 27) == 32 )
    {
      v44 = 1;
      do
      {
        --v43;
        v45 = v44;
        if ( v43 == -1 )
        {
          *(v40 + 25) = v44;
          goto LABEL_44;
        }
        ++v44;
      }
      while ( *(v40 + v43 + 27) == 32 );
      *(v40 + 25) = v45;
    }
LABEL_44:
    *(v40 + 64) = 1;
    *(v40 + 48) = CMemberScriptBinding7<CScriptParticleManager *,void (CScriptParticleManager::*)(int,int,HSCRIPT__ *,int,char const*,Vector,bool),void,int,int,HSCRIPT__ *,int,char const*,Vector,bool>::Call;
    *(v40 + 56) = CScriptParticleManager::SetParticleControlEnt;
    v46 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v47 = *(v46 + 26);
    *(v46 + 24) = 30;
    *(v46 + 16) = "";
    *v46 = "GetParticleReplacement";
    *(v46 + 8) = "GetParticleReplacement";
    *(v46 + v47 + 27) = 30;
    v48 = v47 + 1;
    v47 += 2;
    *(v46 + v48 + 27) = 31;
    *(v46 + 26) = v47;
    v49 = v47 - 1;
    *(v46 + 25) = 0;
    if ( v49 >= 0 && *(v46 + v49 + 27) == 32 )
    {
      v50 = 1;
      do
      {
        --v49;
        v51 = v50;
        if ( v49 == -1 )
        {
          *(v46 + 25) = v50;
          goto LABEL_50;
        }
        ++v50;
      }
      while ( *(v46 + v49 + 27) == 32 );
      *(v46 + 25) = v51;
    }
LABEL_50:
    *(v46 + 64) = 1;
    *(v46 + 48) = CMemberScriptBinding2<CScriptParticleManager *,char const* (CScriptParticleManager::*)(char const*,HSCRIPT__ *),char const*,char const*,HSCRIPT__ *>::Call;
    *(v46 + 56) = CScriptParticleManager::GetParticleReplacement;
    v52 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v53 = *(v52 + 26);
    *(v52 + 24) = 0;
    *(v52 + 16) = "(int nFXIndex, int nPoint, vForward, vRight, vUp)";
    *v52 = "SetParticleControlOrientation";
    *(v52 + 8) = "SetParticleControlOrientation";
    *(v52 + v53 + 27) = 5;
    *(v52 + (v53 + 1) + 27) = 5;
    *(v52 + (v53 + 2) + 27) = 3;
    *(v52 + (v53 + 3) + 27) = 3;
    v54 = v53 + 4;
    v53 += 5;
    *(v52 + v54 + 27) = 3;
    *(v52 + 26) = v53;
    v55 = v53 - 1;
    *(v52 + 25) = 0;
    if ( v55 >= 0 && *(v52 + v55 + 27) == 32 )
    {
      v56 = 1;
      do
      {
        --v55;
        v57 = v56;
        if ( v55 == -1 )
        {
          *(v52 + 25) = v56;
          goto LABEL_56;
        }
        ++v56;
      }
      while ( *(v52 + v55 + 27) == 32 );
      *(v52 + 25) = v57;
    }
LABEL_56:
    *(v52 + 64) = 1;
    *(v52 + 48) = CMemberScriptBinding5<CScriptParticleManager *,void (CScriptParticleManager::*)(int,int,Vector,Vector,Vector),void,int,int,Vector,Vector,Vector>::Call;
    *(v52 + 56) = CScriptParticleManager::SetParticleControlOrientation;
    v58 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v59 = *(v58 + 26);
    *(v58 + 24) = 0;
    *(v58 + 16) = "(int nFXIndex, int nPoint, vForward)";
    *v58 = "SetParticleControlForward";
    *(v58 + 8) = "SetParticleControlForward";
    *(v58 + v59 + 27) = 5;
    *(v58 + (v59 + 1) + 27) = 5;
    v60 = v59 + 2;
    v59 += 3;
    *(v58 + v60 + 27) = 3;
    *(v58 + 26) = v59;
    v61 = v59 - 1;
    *(v58 + 25) = 0;
    if ( v61 >= 0 && *(v58 + v61 + 27) == 32 )
    {
      v62 = 1;
      do
      {
        --v61;
        v63 = v62;
        if ( v61 == -1 )
        {
          *(v58 + 25) = v62;
          goto LABEL_62;
        }
        ++v62;
      }
      while ( *(v58 + v61 + 27) == 32 );
      *(v58 + 25) = v63;
    }
LABEL_62:
    *(v58 + 64) = 1;
    *(v58 + 48) = CMemberScriptBinding3<CScriptParticleManager *,void (CScriptParticleManager::*)(int,int,Vector),void,int,int,Vector>::Call;
    *(v58 + 56) = CScriptParticleManager::SetParticleControlForward;
    v64 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v65 = *(v64 + 26);
    *(v64 + 24) = 0;
    *(v64 + 16) = "(int index, bool bDestroyImmediately) - Destroy a particle, if bDestroyImmediately destroy it without "
                  "playing end caps.";
    *v64 = "DestroyParticle";
    *(v64 + 8) = "DestroyParticle";
    *(v64 + v65 + 27) = 5;
    v66 = v65 + 1;
    v65 += 2;
    *(v64 + v66 + 27) = 6;
    *(v64 + 26) = v65;
    v67 = v65 - 1;
    *(v64 + 25) = 0;
    if ( v67 >= 0 && *(v64 + v67 + 27) == 32 )
    {
      v68 = 1;
      do
      {
        --v67;
        v69 = v68;
        if ( v67 == -1 )
        {
          *(v64 + 25) = v68;
          goto LABEL_68;
        }
        ++v68;
      }
      while ( *(v64 + v67 + 27) == 32 );
      *(v64 + 25) = v69;
    }
LABEL_68:
    *(v64 + 64) = 1;
    *(v64 + 48) = CMemberScriptBinding2<CScriptParticleManager *,void (CScriptParticleManager::*)(int,bool),void,int,bool>::Call;
    *(v64 + 56) = CScriptParticleManager::DestroyParticle;
    return v2;
  }
  return result;
}


// Script_ShowGenericPopup  (line 149, @0x00000000027c8010, libserver.so)  // inlines: CBroadcastRecipientFilter, CDOTAUserMsg_ShowGenericPopup_t, CNetMessagePB, CReliableBroadcastRecipientFilter, CUserMessagePB, FindGameEvent<CDOTAUserMsg_ShowGenericPopup_t>, FindOrCreateGameEvent<CDOTAUserMsg_ShowGenericPopup_t>, PostEvent<CDOTAUserMsg_ShowGenericPopup_t>, SendUserMessage<CDOTAUserMsg_ShowGenericPopup_t>, assign, length, set_body, set_has_body, set_has_header, set_has_param1, set_has_param2, set_has_show_no_other_dialogs, set_has_tint_screen, set_header, set_param1, set_param2, set_show_no_other_dialogs, set_tint_screen, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_ShowGenericPopup_t, ~CNetMessagePB, ~CReliableBroadcastRecipientFilter, ~CUserMessagePB
// calls: CDOTAUserMsg_ShowGenericPopup::CDOTAUserMsg_ShowGenericPopup, strlen, std::string::assign(char const*,ulong), CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CRecipientFilter::~CRecipientFilter, CDOTAUserMsg_ShowGenericPopup::~CDOTAUserMsg_ShowGenericPopup, __stack_chk_fail, _Unwind_Resume
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ShowGenericPopup_t>(bool)::s_hEvent
void __fastcall Script_ShowGenericPopup(
        const char *pszHeader,
        const char *pszBody,
        const char *pszParam1,
        const char *pszParam2,
        int nFlags)
{
  char v8; // r12
  size_t v9; // rax
  size_t v10; // rax
  size_t v11; // rax
  size_t v12; // rax
  __int64 v13; // r14
  IGameEventSystem *v14; // r13
  void (__fastcall *v15)(IGameEventSystem *, _QWORD, _QWORD, CReliableBroadcastRecipientFilter *, __int64, _QWORD *, __int64); // r15
  _QWORD v17[2]; // [rsp+10h] [rbp-1B0h] BYREF
  int v18; // [rsp+20h] [rbp-1A0h]
  std::string *v19; // [rsp+28h] [rbp-198h]
  std::string *v20; // [rsp+30h] [rbp-190h]
  std::string *v21; // [rsp+38h] [rbp-188h]
  std::string *v22; // [rsp+40h] [rbp-180h]
  char v23; // [rsp+48h] [rbp-178h]
  char v24; // [rsp+49h] [rbp-177h]
  CReliableBroadcastRecipientFilter filter; // [rsp+50h] [rbp-170h] BYREF
  unsigned __int64 v26; // [rsp+188h] [rbp-38h]

  v8 = nFlags;
  v26 = __readfsqword(0x28u);
  CDOTAUserMsg_ShowGenericPopup::CDOTAUserMsg_ShowGenericPopup(v17);
  v18 |= 1u;
  v17[0] = off_42B22F0;
  v9 = strlen(pszHeader);
  std::string::assign(v19, pszHeader, v9);
  v18 |= 2u;
  v10 = strlen(pszBody);
  std::string::assign(v20, pszBody, v10);
  v18 |= 4u;
  v11 = strlen(pszParam1);
  std::string::assign(v21, pszParam1, v11);
  v18 |= 8u;
  v12 = strlen(pszParam2);
  std::string::assign(v22, pszParam2, v12);
  if ( (v8 & 1) != 0 )
  {
    v18 |= 0x10u;
    v23 = 1;
  }
  if ( (v8 & 2) != 0 )
  {
    v18 |= 0x20u;
    v24 = 1;
  }
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filter);
  v13 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ShowGenericPopup_t>(bool)::s_hEvent;
  v14 = g_pGameEventSystem;
  v15 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ShowGenericPopup_t>(bool)::s_hEvent);
  v15(v14, 0, 0, &filter, v13, v17, 64);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
  v17[0] = &off_42B2170;
  CDOTAUserMsg_ShowGenericPopup::~CDOTAUserMsg_ShowGenericPopup(v17);
}


// Script_SendOverheadEventMessage  (line 174, @0x00000000027afce0, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTAPlayer, ToEnt
// calls: GetScriptDesc<CEntityInstance>, SendOverheadEventMessage
void __fastcall Script_SendOverheadEventMessage(
        HSCRIPT hPlayer,
        int iMessageType,
        HSCRIPT hTarget,
        int iValue,
        HSCRIPT hSourcePlayer)
{
  __int64 (__fastcall *v8)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  __int64 v10; // rax
  CDOTAPlayer *v11; // r14
  __int64 (__fastcall *v12)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *v13; // rax
  __int64 v14; // rax
  CDOTAPlayer *v15; // rbx
  CDOTAPlayer *v16; // r14
  __int64 (__fastcall *v17)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // rbx
  ScriptClassDesc_t *v18; // rax
  CBaseEntity *v19; // rdx
  CDOTAPlayer *pPlayer; // [rsp+0h] [rbp-40h]

  if ( hPlayer == 0 )
  {
    pPlayer = 0;
LABEL_7:
    v16 = 0;
    goto LABEL_8;
  }
  v8 = *(*g_pScriptVM + 208LL);
  Script = GetScriptDesc<CEntityInstance>(0);
  v10 = v8(g_pScriptVM, hPlayer, Script);
  v11 = v10;
  if ( v10 != 0 && (*(*v10 + 1120LL))(v10) != 0 )
    pPlayer = v11;
  else
    pPlayer = 0;
  v12 = *(*g_pScriptVM + 208LL);
  v13 = GetScriptDesc<CEntityInstance>(0);
  v14 = v12(g_pScriptVM, hPlayer, v13);
  v15 = v14;
  if ( v14 == 0 || (*(*v14 + 1120LL))(v14) == 0 )
    goto LABEL_7;
  v16 = v15;
LABEL_8:
  if ( hTarget != 0 )
  {
    v17 = *(*g_pScriptVM + 208LL);
    v18 = GetScriptDesc<CEntityInstance>(0);
    v19 = v17(g_pScriptVM, hTarget, v18);
  }
  else
  {
    v19 = 0;
  }
  SendOverheadEventMessage(pPlayer, iMessageType, v19, iValue, v16);
}


// Script_ShowCustomHeaderMessage  (line 183, @0x00000000027a8ea0, libserver.so)  // inlines: CBroadcastRecipientFilter, CDOTAUserMsg_CustomHeaderMessage_t, CNetMessagePB, CReliableBroadcastRecipientFilter, CUserMessagePB, FindGameEvent<CDOTAUserMsg_CustomHeaderMessage_t>, FindOrCreateGameEvent<CDOTAUserMsg_CustomHeaderMessage_t>, PostEvent<CDOTAUserMsg_CustomHeaderMessage_t>, SendUserMessage<CDOTAUserMsg_CustomHeaderMessage_t>, assign, length, set_duration, set_has_message, set_has_player_id, set_has_value, set_message, set_player_id, set_value, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_CustomHeaderMessage_t, ~CNetMessagePB, ~CReliableBroadcastRecipientFilter, ~CUserMessagePB
// calls: CDOTAUserMsg_CustomHeaderMessage::CDOTAUserMsg_CustomHeaderMessage, strlen, std::string::assign(char const*,ulong), CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CRecipientFilter::~CRecipientFilter, CDOTAUserMsg_CustomHeaderMessage::~CDOTAUserMsg_CustomHeaderMessage, __stack_chk_fail, _Unwind_Resume
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CustomHeaderMessage_t>(bool)::s_hEvent
void __fastcall Script_ShowCustomHeaderMessage(const char *pszMessage, int nPlayerID, int nValue, __m128i flTime)
{
  int v6; // r13d
  size_t v8; // rax
  __int64 v9; // r14
  IGameEventSystem *v10; // r13
  void (__fastcall *v11)(IGameEventSystem *, _QWORD, _QWORD, CReliableBroadcastRecipientFilter *, __int64, _QWORD *, __int64); // r15
  _QWORD v12[2]; // [rsp+10h] [rbp-1A0h] BYREF
  int v13; // [rsp+20h] [rbp-190h]
  int v14; // [rsp+28h] [rbp-188h]
  int v15; // [rsp+2Ch] [rbp-184h]
  std::string *v16; // [rsp+30h] [rbp-180h]
  int nValuea; // [rsp+38h] [rbp-178h]
  CReliableBroadcastRecipientFilter filter; // [rsp+40h] [rbp-170h] BYREF
  unsigned __int64 v19; // [rsp+178h] [rbp-38h]

  v6 = _mm_cvtsi128_si32(flTime);
  v19 = __readfsqword(0x28u);
  CDOTAUserMsg_CustomHeaderMessage::CDOTAUserMsg_CustomHeaderMessage(v12);
  v13 |= 4u;
  v12[0] = off_42B2BF0;
  v8 = strlen(pszMessage);
  std::string::assign(v16, pszMessage, v8);
  nValuea = nValue;
  v14 = nPlayerID;
  v15 = v6;
  v13 |= 0xBu;
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filter);
  v9 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CustomHeaderMessage_t>(bool)::s_hEvent;
  v10 = g_pGameEventSystem;
  v11 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CustomHeaderMessage_t>(bool)::s_hEvent);
  v11(v10, 0, 0, &filter, v9, v12, 48);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
  v12[0] = &off_42B2A70;
  CDOTAUserMsg_CustomHeaderMessage::~CDOTAUserMsg_CustomHeaderMessage(v12);
}


// Script_ShowGenericPopupToPlayer  (line 195, @0x00000000027c7d70, libserver.so)  // inlines: CDOTAUserMsg_ShowGenericPopup_t, CNetMessagePB, CSingleUserRecipientFilter, CUserMessagePB, FindGameEvent<CDOTAUserMsg_ShowGenericPopup_t>, FindOrCreateGameEvent<CDOTAUserMsg_ShowGenericPopup_t>, HScriptToEntity<CBaseEntity>, PostEvent<CDOTAUserMsg_ShowGenericPopup_t>, SendUserMessage<CDOTAUserMsg_ShowGenericPopup_t>, ToBasePlayer, ToEnt, assign, length, set_body, set_has_body, set_has_header, set_has_param1, set_has_param2, set_has_show_no_other_dialogs, set_has_tint_screen, set_header, set_param1, set_param2, set_show_no_other_dialogs, set_tint_screen, ~CDOTAUserMsg_ShowGenericPopup_t, ~CNetMessagePB, ~CSingleUserRecipientFilter, ~CUserMessagePB
// calls: GetScriptDesc<CEntityInstance>, CDOTAUserMsg_ShowGenericPopup::CDOTAUserMsg_ShowGenericPopup, strlen, std::string::assign(char const*,ulong), CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CRecipientFilter::MakeReliable, CRecipientFilter::~CRecipientFilter, CDOTAUserMsg_ShowGenericPopup::~CDOTAUserMsg_ShowGenericPopup, __stack_chk_fail, _Unwind_Resume
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ShowGenericPopup_t>(bool)::s_hEvent
void __fastcall Script_ShowGenericPopupToPlayer(
        HSCRIPT hPlayer,
        const char *pszHeader,
        const char *pszBody,
        const char *pszParam1,
        const char *pszParam2,
        int nFlags)
{
  char v9; // r15
  ScriptClassDesc_t *Script; // rax
  __int64 v11; // rax
  const CEntityInstance *v12; // rbx
  size_t v13; // rax
  size_t v14; // rax
  size_t v15; // rax
  size_t v16; // rax
  __int64 v17; // r14
  IGameEventSystem *v18; // rbx
  void (__fastcall *v19)(IGameEventSystem *, _QWORD, _QWORD, CSingleUserRecipientFilter *, __int64, _QWORD *, __int64); // r15
  __int64 (__fastcall *v22)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // [rsp+18h] [rbp-1B8h]
  _QWORD v23[2]; // [rsp+20h] [rbp-1B0h] BYREF
  int v24; // [rsp+30h] [rbp-1A0h]
  std::string *v25; // [rsp+38h] [rbp-198h]
  std::string *v26; // [rsp+40h] [rbp-190h]
  std::string *v27; // [rsp+48h] [rbp-188h]
  std::string *v28; // [rsp+50h] [rbp-180h]
  char v29; // [rsp+58h] [rbp-178h]
  char v30; // [rsp+59h] [rbp-177h]
  CSingleUserRecipientFilter filter; // [rsp+60h] [rbp-170h] BYREF
  unsigned __int64 v32; // [rsp+198h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  if ( hPlayer != 0 )
  {
    v9 = nFlags;
    v22 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v11 = v22(g_pScriptVM, hPlayer, Script);
    v12 = v11;
    if ( v11 != 0 && (*(*v11 + 1120LL))(v11) != 0 )
    {
      CDOTAUserMsg_ShowGenericPopup::CDOTAUserMsg_ShowGenericPopup(v23);
      v24 |= 1u;
      v23[0] = off_42B22F0;
      v13 = strlen(pszHeader);
      std::string::assign(v25, pszHeader, v13);
      v24 |= 2u;
      v14 = strlen(pszBody);
      std::string::assign(v26, pszBody, v14);
      v24 |= 4u;
      v15 = strlen(pszParam1);
      std::string::assign(v27, pszParam1, v15);
      v24 |= 8u;
      v16 = strlen(pszParam2);
      std::string::assign(v28, pszParam2, v16);
      if ( (v9 & 1) != 0 )
      {
        v24 |= 0x10u;
        v29 = 1;
      }
      if ( (v9 & 2) != 0 )
      {
        v24 |= 0x20u;
        v30 = 1;
      }
      CRecipientFilter::CRecipientFilter(&filter);
      filter._vptr_IRecipientFilter = &off_3FCB0D0;
      CRecipientFilter::AddRecipient(&filter, v12);
      CRecipientFilter::MakeReliable(&filter);
      v17 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ShowGenericPopup_t>(bool)::s_hEvent;
      v18 = g_pGameEventSystem;
      v19 = *(*g_pGameEventSystem + 128LL);
      (*(*g_pNetworkMessages + 96LL))(
        g_pNetworkMessages,
        IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_ShowGenericPopup_t>(bool)::s_hEvent);
      v19(v18, 0, 0, &filter, v17, v23, 64);
      filter._vptr_IRecipientFilter = &off_3FCB0D0;
      CRecipientFilter::~CRecipientFilter(&filter);
      v23[0] = &off_42B2170;
      CDOTAUserMsg_ShowGenericPopup::~CDOTAUserMsg_ShowGenericPopup(v23);
    }
  }
}


// dota_script_function_help  (line 225, @0x00000000027b5d30, libserver.so)  // inlines: Arg, CVariantBase, Call, Call<char const*>, CopyData, Free, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "ScriptFunctionHelp"
void __fastcall dota_script_function_help(const CCommandContext *const ctx, const CCommand *const args)
{
  __int64 v3; // rax
  const char *v4; // rdx
  const char *v5; // [rsp+10h] [rbp-20h] BYREF
  __int16 v6; // [rsp+18h] [rbp-18h]
  __int16 v7; // [rsp+1Ah] [rbp-16h]

  if ( g_pScriptVM != 0 )
  {
    v3 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "ScriptFunctionHelp", 0, 0);
    if ( args->m_nArgc <= 1 )
    {
      (*(*g_pScriptVM + 160LL))(g_pScriptVM, v3, 0, 0, 0, 0, 1);
    }
    else
    {
      v4 = args->m_ppArgv[1];
      v7 = 0;
      v6 = 30;
      v5 = v4;
      (*(*g_pScriptVM + 160LL))(g_pScriptVM, v3, &v5, 1, 0, 0, 1);
      if ( (v7 & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v5);
    }
  }
}


// CScriptHeroList::GetHero  (line 249, @0x00000000027d1c50, libserver.so)  // inlines: EntityToHScript, Get, GetEntityIdentity, GetEntryIndex, GetHero, GetInstance, GetPublicScriptScope, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPCHero, ToHScript, operator CEntityInstance*, operator[]
// calls: CEntityInstance::CreatePublicScriptScope
// globals: CEntityHandle::gm_pEntityList
HSCRIPT __fastcall CScriptHeroList::GetHero(CScriptHeroList *const this, int iIndex)
{
  HSCRIPT result; // rax
  CHandle<CDOTA_BaseNPC_Hero> *v3; // rcx
  uint32 m_Index; // edx
  __int16 v5; // si
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx
  CEntityInstance *m_pInstance; // rbx

  result = 0;
  if ( iIndex < g_HeroList.m_hHeroList.m_Size )
  {
    v3 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[iIndex];
    m_Index = v3->m_Index;
    if ( v3->m_Index + 2 > 1 )
    {
      v5 = v3->m_Index;
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v3->m_Index) >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[v5 & 0x1FF];
        if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        {
          m_pInstance = v7->m_pInstance;
          if ( v7->m_pInstance != 0 && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            result = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
            if ( result == 0 )
            {
              CEntityInstance::CreatePublicScriptScope(v7->m_pInstance, 0);
              return m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
            }
          }
        }
      }
    }
  }
  return result;
}


// CScriptHeroList::GetHeroCount  (line 250, @0x00000000027ce9f0, libserver.so)
int __fastcall CScriptHeroList::GetHeroCount(CScriptHeroList *const this)
{
  return g_HeroList.m_hHeroList.m_Size;
}


// CScriptHeroList::GetAllHeroes  (line 252, @0x00000000027d66e0, libserver.so)  // inlines: CVariantBase, EntityToHScript, Free, Get, GetEntityIdentity, GetEntryIndex, GetHero, GetInstance, GetPublicScriptScope, IndexToIdentity, IsValid, LookupEntity, TakeOwnership, ToDOTABaseNPCHero, ToHScript, operator CEntityInstance*, operator[], ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume, CEntityInstance::CreatePublicScriptScope
// globals: CEntityHandle::gm_pEntityList
uint64 __fastcall CScriptHeroList::GetAllHeroes(uint64 a1, CScriptHeroList *const this)
{
  __int64 v2; // rbx
  int i; // r12d
  __int16 v4; // si
  CEntityIdentity *v5; // rdx
  __int64 v6; // rsi
  IScriptVM *v7; // rdi
  bool v8; // zf
  CEntityIdentity *v9; // rsi
  HSCRIPT m_hScope; // rdx
  void (__fastcall *v11)(IScriptVM *, _QWORD, int16 *); // r15
  CHandle<CDOTA_BaseNPC_Hero> *v12; // rdx
  uint32 m_Index; // ecx
  CEntityInstance *m_pInstance; // r13
  ScriptVariant_t v16; // [rsp+8h] [rbp-48h] BYREF
  __int16 v17; // [rsp+18h] [rbp-38h]
  __int16 v18; // [rsp+1Ah] [rbp-36h]

  *a1 = 0;
  v16.m_uint64 = a1;
  *(a1 + 8) = 0;
  *(a1 + 10) = 0;
  (*(*g_pScriptVM + 360LL))(g_pScriptVM, a1);
  v2 = 0;
  for ( i = 0; i < g_HeroList.m_hHeroList.m_Size; ++v2 )
  {
    v11 = *(*g_pScriptVM + 384LL);
    v12 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v2];
    m_Index = v12->m_Index;
    if ( v12->m_Index + 2 > 1
      && (v4 = v12->m_Index,
          (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v12->m_Index) >> 9) & 0x3F]) != 0) )
    {
      v6 = v4 & 0x1FF;
      v7 = g_pScriptVM;
      v8 = &v5[v6] == 0;
      v9 = &v5[v6];
      m_hScope = 0;
      if ( !v8 && m_Index == v9->m_EHandle.m_Index )
      {
        m_pInstance = v9->m_pInstance;
        if ( v9->m_pInstance != 0 && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        {
          v7 = g_pScriptVM;
          m_hScope = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          if ( m_hScope == 0 )
          {
            CEntityInstance::CreatePublicScriptScope(m_pInstance, 0);
            v7 = g_pScriptVM;
            m_hScope = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          }
        }
      }
    }
    else
    {
      v7 = g_pScriptVM;
      m_hScope = 0;
    }
    *&v16.m_type = m_hScope;
    v17 = 31;
    v18 = 0;
    v11(v7, *v16.m_pszString, &v16.m_type);
    if ( (v18 & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&v16.m_type);
    ++i;
  }
  if ( *(v16.m_uint64 + 8) == 31 )
    *(v16.m_uint64 + 8) = 36;
  return v16.m_uint64;
}


// GetScriptDesc<CScriptHeroList>  (line 266, @0x00000000027c1100, libserver.so)  // inlines: AddParameterType, AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<ScriptFunctionBinding_t>, Element, Finalize, GrowMemory, ScriptClassDesc_t, ScriptDeduceFunctionSignature<CScriptHeroList*, CScriptHeroList, CVariantBase<CVariantDefaultAllocator> >, ScriptDeduceFunctionSignature<CScriptHeroList*, CScriptHeroList, HSCRIPT__*, int>, ScriptDeduceFunctionSignature<CScriptHeroList*, CScriptHeroList, int>, ScriptFuncDescriptor_t, ScriptFunctionBinding_t, SetDescription, SetFunctionName, SetReturnType, SetScriptName, operator[]
// calls: operator new, CUtlMemory<ScriptFunctionBinding_t, int>::Grow
// callers: CDOTAVScriptGameSystem::InstallScriptBindings
// strings: "!The global list of heroes", "CScriptHeroList", "Get the Nth hero in the Hero List", "GetHero", "Returns the number of heroes in the world", "GetHeroCount" (8 total)
// globals: g_pCScriptHeroList_ScriptDesc, CMemberScriptBinding1<CScriptHeroList *,HSCRIPT__ * (CScriptHeroList::*)(int),HSCRIPT__ *,int>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,int,, CScriptHeroList::GetHero(int), CMemberScriptBinding0<CScriptHeroList *,int (CScriptHeroList::*)(void),int>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,int,CVariantBase<CVaria, CScriptHeroList::GetHeroCount(void), CMemberScriptBinding0<CScriptHeroList *,CVariantBase<CVariantDefaultAllocator> (CScriptHeroList::*)(void),CVariantBase<CVariantDefaultAllocator>>::Call(void *,v, CScriptHeroList::GetAllHeroes(void)
ScriptClassDesc_t *__fastcall GetScriptDesc<CScriptHeroList>(CScriptHeroList *pScriptDescObjectInstance)
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
  int v13; // edx
  int v14; // edx
  char v15; // cl
  char v16; // di
  __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // edx
  int v21; // edx
  char v22; // cl
  char v23; // di

  result = g_pCScriptHeroList_ScriptDesc;
  if ( g_pCScriptHeroList_ScriptDesc == 0 )
  {
    v2 = operator new(0x50u);
    v2->m_pBaseDesc = 0;
    v2->m_FunctionBindings.m_Size = 0;
    p_m_Memory = &v2->m_FunctionBindings.m_Memory;
    v2->m_FunctionBindings.m_Memory.m_pMemory = 0;
    v2->m_FunctionBindings.m_Memory.m_nAllocationCount = 0;
    v2->m_FunctionBindings.m_Memory.m_nGrowSize = 0;
    v2->m_pfnConstruct = 0;
    v2->m_pfnDestruct = 0;
    v2->pHelper = 0;
    g_pCScriptHeroList_ScriptDesc = v2;
    v2->m_pszDescription = "!The global list of heroes";
    v2->m_pszScriptName = "CScriptHeroList";
    v2->m_pszClassname = "CScriptHeroList";
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
    m_pMemory->m_desc.m_ReturnType = 31;
    m_pMemory->m_desc.m_pszDescription = "Get the Nth hero in the Hero List";
    m_pMemory->m_desc.m_pszScriptName = "GetHero";
    m_pMemory->m_desc.m_pszFunction = "GetHero";
    v6 = m_nNumParameters++;
    m_pMemory->m_desc.m_ParameterTypes[v6] = 5;
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
    m_pMemory->m_pfnBinding = CMemberScriptBinding1<CScriptHeroList *,HSCRIPT__ * (CScriptHeroList::*)(int),HSCRIPT__ *,int>::Call;
    m_pMemory->m_pFunction = CScriptHeroList::GetHero;
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
    *(v12 + 24) = 5;
    *(v12 + 16) = "Returns the number of heroes in the world";
    *v12 = "GetHeroCount";
    *(v12 + 8) = "GetHeroCount";
    v14 = v13 - 1;
    *(v12 + 25) = 0;
    if ( v14 >= 0 && *(v12 + v14 + 27) == 32 )
    {
      v15 = 1;
      do
      {
        --v14;
        v16 = v15;
        if ( v14 == -1 )
        {
          *(v12 + 25) = v15;
          goto LABEL_20;
        }
        ++v15;
      }
      while ( *(v12 + v14 + 27) == 32 );
      *(v12 + 25) = v16;
    }
LABEL_20:
    *(v12 + 64) = 1;
    *(v12 + 48) = CMemberScriptBinding0<CScriptHeroList *,int (CScriptHeroList::*)(void),int>::Call;
    *(v12 + 56) = CScriptHeroList::GetHeroCount;
    v17 = v2->m_FunctionBindings.m_Size;
    if ( v17 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v18 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v17];
    if ( v18 != 0 )
    {
      *v18 = 0;
      *(v18 + 8) = 0;
      *(v18 + 16) = 0;
      *(v18 + 24) = 29;
      *(v18 + 25) = -1;
      *(v18 + 26) = 0;
      *(v18 + 40) = 0;
      v19 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v17];
    }
    else
    {
      v19 = 0;
    }
    v20 = *(v19 + 26);
    *(v19 + 24) = 32;
    *(v19 + 16) = "Returns all the heroes in the world";
    *v19 = "GetAllHeroes";
    *(v19 + 8) = "GetAllHeroes";
    v21 = v20 - 1;
    *(v19 + 25) = 0;
    if ( v21 >= 0 && *(v19 + v21 + 27) == 32 )
    {
      v22 = 1;
      do
      {
        --v21;
        v23 = v22;
        if ( v21 == -1 )
        {
          *(v19 + 25) = v22;
          goto LABEL_30;
        }
        ++v22;
      }
      while ( *(v19 + v21 + 27) == 32 );
      *(v19 + 25) = v23;
    }
LABEL_30:
    *(v19 + 64) = 1;
    *(v19 + 48) = CMemberScriptBinding0<CScriptHeroList *,CVariantBase<CVariantDefaultAllocator> (CScriptHeroList::*)(void),CVariantBase<CVariantDefaultAllocator>>::Call;
    *(v19 + 56) = CScriptHeroList::GetAllHeroes;
    return v2;
  }
  return result;
}


// ScriptPauseGame  (line 276, @0x00000000027a7540, libserver.so)
// calls: CDOTAGamerules::SetGamePaused
void __fastcall ScriptPauseGame(bool bPaused)
{
  CDOTAGamerules::SetGamePaused(g_pGameRules, bPaused, 0xFFFFFFFF, 0.0, -1.0);
}


// GetSystemTime  (line 283, @0x00000000027a75f0, libserver.so)
// calls: CRTime::UpdateRealTime
const char *__cdecl GetSystemTime()
{
  if ( CRTime::sm_rgchLocalTimeCur[0] == 0 )
    CRTime::UpdateRealTime();
  return CRTime::sm_rgchLocalTimeCur;
}


// GetSystemDate  (line 291, @0x00000000027a7620, libserver.so)
// calls: CRTime::UpdateRealTime
const char *__cdecl GetSystemDate()
{
  if ( CRTime::sm_rgchLocalDateCur[0] == 0 )
    CRTime::UpdateRealTime();
  return CRTime::sm_rgchLocalDateCur;
}


// GetWorldMinX  (line 301, @0x00000000027a74b0, libserver.so)
// calls: DOTACommander
float __cdecl GetWorldMinX()
{
  return DOTACommander()->m_vWorldBounds[0].x;
}


// GetWorldMinY  (line 305, @0x00000000027a7490, libserver.so)
// calls: DOTACommander
float __cdecl GetWorldMinY()
{
  return DOTACommander()->m_vWorldBounds[0].y;
}


// GetWorldMaxX  (line 309, @0x00000000027a74f0, libserver.so)
// calls: DOTACommander
float __cdecl GetWorldMaxX()
{
  return DOTACommander()->m_vWorldBounds[1].x;
}


// GetWorldMaxY  (line 313, @0x00000000027a74d0, libserver.so)
// calls: DOTACommander
float __cdecl GetWorldMaxY()
{
  return DOTACommander()->m_vWorldBounds[1].y;
}


// Script_EmitGlobalSound  (line 319, @0x00000000027a75e0, libserver.so)
// calls: Gamerules_EmitSound
void __fastcall Script_EmitGlobalSound(const char *pszSoundName)
{
  Gamerules_EmitSound(pszSoundName, 0, 0);
}


// Script_GetGroundPosition  (line 324, @0x00000000027a90e0, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTABaseNPC, ToEnt
// calls: GetScriptDesc<CEntityInstance>, GetPositionOnGround
double __fastcall Script_GetGroundPosition(HSCRIPT hNPC, double a2, vec_t a3)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax
  __int64 v6; // rax
  CDOTA_BaseNPC *v7; // rsi
  Vector vecPosa; // [rsp+10h] [rbp-40h] BYREF
  Vector PositionOnGround; // 0:xmm0_8.8,8:xmm1_4.4

  *&vecPosa.x = a2;
  vecPosa.z = a3;
  if ( hNPC != 0
    && (v4 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        (v6 = v4(g_pScriptVM, hNPC, Script)) != 0)
    && *(v6 + 339) != 0 )
  {
    v7 = v6;
  }
  else
  {
    v7 = 0;
  }
  PositionOnGround = GetPositionOnGround(&vecPosa, v7);
  return *&PositionOnGround.x;
}


// Script_GetGroundHeight  (line 329, @0x00000000027a9060, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTABaseNPC, ToEnt
// calls: GetScriptDesc<CEntityInstance>, GetGroundHeight
float __fastcall Script_GetGroundHeight(HSCRIPT hNPC, double a2, vec_t a3)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax
  __int64 v6; // rax
  CDOTA_BaseNPC *v7; // rsi
  Vector vecPosa; // [rsp+0h] [rbp-30h] BYREF

  *&vecPosa.x = a2;
  vecPosa.z = a3;
  if ( hNPC != 0
    && (v4 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        (v6 = v4(g_pScriptVM, hNPC, Script)) != 0)
    && *(v6 + 339) != 0 )
  {
    v7 = v6;
  }
  else
  {
    v7 = 0;
  }
  return GetGroundHeight(&vecPosa, v7);
}


// Script_UnitFilter  (line 337, @0x00000000027a9160, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTABaseNPC, ToEnt
// calls: GetScriptDesc<CEntityInstance>, UnitFilter
int __fastcall Script_UnitFilter(
        HSCRIPT hNPC,
        int iUnitTargetTeam,
        int iUnitTargetType,
        int iUnitTargetFlags,
        int iTeamNumber)
{
  __int64 (__fastcall *v8)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r12
  ScriptClassDesc_t *Script; // rax
  __int64 v10; // rax
  CDOTA_BaseNPC *v11; // rdi
  int iTeamNumbera; // [rsp+8h] [rbp-38h]

  if ( hNPC != 0
    && (iTeamNumbera = iTeamNumber,
        v8 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        v10 = v8(g_pScriptVM, hNPC, Script),
        iTeamNumber = iTeamNumbera,
        v10 != 0)
    && *(v10 + 339) != 0 )
  {
    v11 = v10;
  }
  else
  {
    v11 = 0;
  }
  return UnitFilter(v11, iUnitTargetTeam, iUnitTargetType, iUnitTargetFlags, iTeamNumber);
}


// Script_PrecacheResource  (line 343, @0x00000000027a7800, libserver.so)
// calls: CEntityScriptFramework::GetPrecacheContext, KeyValues::operator new, KeyValues::KeyValues, KeyValues::SetString, CDOTAGamerules::PrecacheResourcesFromKeys, KeyValues::~KeyValues, KeyValues::operator delete, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, _Unwind_Resume
// strings: "script_precache_resource", "PrecacheResource\tmust be passed a valid precache context!\n"
void __fastcall Script_PrecacheResource(
        const char *pszResourceType,
        const char *pszResourcePath,
        HSCRIPT hPrecacheContext)
{
  const CEntityPrecacheContext *PrecacheContext; // r12
  KeyValues *v6; // rbx

  PrecacheContext = CEntityScriptFramework::GetPrecacheContext(&g_EntityScriptFramework, hPrecacheContext);
  if ( PrecacheContext != 0 )
  {
    v6 = KeyValues::operator new(0x14u);
    KeyValues::KeyValues(v6, "script_precache_resource");
    KeyValues::SetString(v6, pszResourceType, pszResourcePath);
    CDOTAGamerules::PrecacheResourcesFromKeys(v6, PrecacheContext->m_pManifest);
    if ( v6 != 0 )
    {
      KeyValues::~KeyValues(v6);
      KeyValues::operator delete(v6);
    }
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 2) != 0 )
  {
    LoggingSystem_Log(LOG_VSCRIPT, 2, "PrecacheResource\tmust be passed a valid precache context!\n");
  }
}


// Script_PrecacheModel  (line 358, @0x00000000027a7690, libserver.so)
// calls: CEntityScriptFramework::GetPrecacheContext, CBaseEntity::PrecacheModel, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "PrecacheResource\tmust be passed a valid precache context!\n"
void __fastcall Script_PrecacheModel(const char *pszResourcePath, HSCRIPT hPrecacheContext)
{
  const CEntityPrecacheContext *PrecacheContext; // rax

  PrecacheContext = CEntityScriptFramework::GetPrecacheContext(&g_EntityScriptFramework, hPrecacheContext);
  if ( PrecacheContext != 0 )
  {
    CBaseEntity::PrecacheModel(pszResourcePath, PrecacheContext);
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 2) != 0 )
  {
    LoggingSystem_Log(LOG_VSCRIPT, 2, "PrecacheResource\tmust be passed a valid precache context!\n");
  }
}


// DOTA_VScript_PrecacheUnitByNameSync  (line 370, @0x00000000027b98f0, libserver.so)  // inlines: DOTA_PrecacheUnitByNameSync
// calls: CEntityScriptFramework::GetPrecacheContext, DOTA_PrecacheUnitByNameSync, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "PrecacheUnitByNameSync (unit \"%s\" must be passed a valid precache context!\n"
void __fastcall DOTA_VScript_PrecacheUnitByNameSync(const char *pUnitName, HSCRIPT hContext, int nPlayerID)
{
  const CEntityPrecacheContext *PrecacheContext; // rax

  PrecacheContext = CEntityScriptFramework::GetPrecacheContext(&g_EntityScriptFramework, hContext);
  if ( PrecacheContext != 0 )
  {
    DOTA_PrecacheUnitByNameSync(pUnitName, PrecacheContext->m_pManifest, nPlayerID);
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 2) != 0 )
  {
    LoggingSystem_Log(
      LOG_VSCRIPT,
      2,
      "PrecacheUnitByNameSync (unit \"%s\" must be passed a valid precache context!\n",
      pUnitName);
  }
}


// CPrecacheUnitByNameAsyncCallback::CallBackAndDeleteMe  (line 397, @0x00000000027d68d0, libserver.so)  // inlines: CVariantBase, Call<int>, Destruct<CUtlString>, Element, Purge, RemoveAll, operator=, operator[], ~CPrecacheUnitByNameAsyncCallback, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase
// calls: CUtlString::FreeMemoryBlock, operator delete, CVariantBase<CVariantDefaultAllocator>::Free, CUtlMemory<CUtlString, int>::Purge, _Unwind_Resume
void __fastcall CPrecacheUnitByNameAsyncCallback::CallBackAndDeleteMe(
        CPrecacheUnitByNameAsyncCallback *const this,
        SpawnGroupHandle_t hSpawnGroup,
        const CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *const entities)
{
  HSCRIPT m_hCallback; // r12
  HSCRIPT v6; // rsi
  int m_Size; // r12d
  __int64 i; // r13
  CUtlString *v9; // rdi
  bool v10; // zf
  IScriptVM *v11; // [rsp+8h] [rbp-48h]
  CVariantBase<CVariantDefaultAllocator> v12; // [rsp+10h] [rbp-40h] BYREF

  m_hCallback = this->m_hCallback;
  if ( this->m_hCallback != 0 )
  {
    if ( hSpawnGroup != 0 )
    {
      v12.m_uint64 = 0;
      v11 = g_pScriptVM;
      v12.m_type = 0;
      v12.m_flags = 0;
      CVariantBase<CVariantDefaultAllocator>::Free(&v12);
      v12.m_int = hSpawnGroup;
      v12.m_type = 5;
      (*(*v11 + 160LL))(v11, m_hCallback, &v12, 1, 0, 0, 1);
      CVariantBase<CVariantDefaultAllocator>::Free(&v12);
      v6 = this->m_hCallback;
    }
    else
    {
      v6 = this->m_hCallback;
    }
  }
  else
  {
    v6 = 0;
  }
  (*(*g_pScriptVM + 152LL))(g_pScriptVM, v6, entities);
  m_Size = this->m_semanticNames.m_Size;
  for ( i = 8LL * m_Size - 8; --m_Size >= 0; i -= 8 )
  {
    v9 = (this->m_semanticNames.m_Memory.m_pMemory + i);
    if ( v9->m_pString != 0 )
      CUtlString::FreeMemoryBlock(v9);
  }
  v10 = (this->m_semanticNames.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_semanticNames.m_Size = 0;
  if ( v10 )
  {
    CUtlMemory<CUtlString,int>::Purge(&this->m_semanticNames.m_Memory);
    if ( (this->m_semanticNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&this->m_semanticNames.m_Memory);
  }
  operator delete(this);
}


// DOTA_VScript_PrecacheUnitByNameAsync  (line 411, @0x00000000027bcf00, libserver.so)  // inlines: CPrecacheUnitByNameAsyncCallback, CUtlDelegate<CPrecacheUnitByNameAsyncCallback, CPrecacheUnitByNameAsyncCallback>, CUtlMemory, CUtlVector, CUtlVectorBase, Convert<CPrecacheUnitByNameAsyncCallback, void (CPrecacheUnitByNameAsyncCallback::*)(unsigned int, const CUtlVector<CEntityHandle>&), void (detail::GenericClass::*)()>, FastDelegate2<CPrecacheUnitByNameAsyncCallback, CPrecacheUnitByNameAsyncCallback>, UtlMakeDelegate<CPrecacheUnitByNameAsyncCallback, CPrecacheUnitByNameAsyncCallback, unsigned int, const CUtlVector<CEntityHandle>&, void>, bindmemfunc<CPrecacheUnitByNameAsyncCallback, void (CPrecacheUnitByNameAsyncCallback::*)(unsigned int, const CUtlVector<CEntityHandle>&)>, ~CUtlVector
// calls: operator new, DOTA_PrecacheUnitByNameAsync, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase, operator delete, _Unwind_Resume
// strings: "PrecacheUnitByNameAsync (unit \"%s\") must be passed a valid callback!\n"
// globals: CPrecacheUnitByNameAsyncCallback::CallBackAndDeleteMe(uint,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int>> const&)
void __fastcall DOTA_VScript_PrecacheUnitByNameAsync(const char *pUnitName, HSCRIPT hCallback, int nPlayerID)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  int v8[2]; // [rsp+0h] [rbp-40h] BYREF
  void (__fastcall *v9)(CPrecacheUnitByNameAsyncCallback *const, SpawnGroupHandle_t, const CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *const); // [rsp+8h] [rbp-38h]
  __int64 v10; // [rsp+10h] [rbp-30h]

  if ( hCallback != 0 )
  {
    v6 = operator new(0x20u);
    v6[2] = 0;
    v7 = v6;
    *(v6 + 2) = 0;
    v6[6] = 0;
    v6[7] = 0;
    *v6 = (*(*g_pScriptVM + 128LL))(g_pScriptVM, hCallback);
    v9 = CPrecacheUnitByNameAsyncCallback::CallBackAndDeleteMe;
    v10 = 0;
    *v8 = v7;
    DOTA_PrecacheUnitByNameAsync(pUnitName, 0, v8, nPlayerID);
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 2) != 0 )
  {
    LoggingSystem_Log(
      LOG_VSCRIPT,
      2,
      "PrecacheUnitByNameAsync (unit \"%s\") must be passed a valid callback!\n",
      pUnitName);
  }
}


// DOTA_VScript_PrecacheItemByNameSync  (line 426, @0x00000000027a7700, libserver.so)
// calls: CEntityScriptFramework::GetPrecacheContext, DOTA_PrecacheItemByNameSync, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "PrecacheItemByNameSync (item \"%s\" must be passed a valid precache context!\n"
void __fastcall DOTA_VScript_PrecacheItemByNameSync(const char *pItemName, HSCRIPT hContext)
{
  const CEntityPrecacheContext *PrecacheContext; // rax

  PrecacheContext = CEntityScriptFramework::GetPrecacheContext(&g_EntityScriptFramework, hContext);
  if ( PrecacheContext != 0 )
  {
    DOTA_PrecacheItemByNameSync(pItemName, PrecacheContext);
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 2) != 0 )
  {
    LoggingSystem_Log(
      LOG_VSCRIPT,
      2,
      "PrecacheItemByNameSync (item \"%s\" must be passed a valid precache context!\n",
      pItemName);
  }
}


// DOTA_VScript_PrecacheItemByNameAsync  (line 438, @0x00000000027b4a20, libserver.so)  // inlines: CPrecacheUnitByNameAsyncCallback, CUtlDelegate<CPrecacheUnitByNameAsyncCallback, CPrecacheUnitByNameAsyncCallback>, CUtlMemory, CUtlVector, CUtlVectorBase, Convert<CPrecacheUnitByNameAsyncCallback, void (CPrecacheUnitByNameAsyncCallback::*)(unsigned int, const CUtlVector<CEntityHandle>&), void (detail::GenericClass::*)()>, FastDelegate2<CPrecacheUnitByNameAsyncCallback, CPrecacheUnitByNameAsyncCallback>, UtlMakeDelegate<CPrecacheUnitByNameAsyncCallback, CPrecacheUnitByNameAsyncCallback, unsigned int, const CUtlVector<CEntityHandle>&, void>, bindmemfunc<CPrecacheUnitByNameAsyncCallback, void (CPrecacheUnitByNameAsyncCallback::*)(unsigned int, const CUtlVector<CEntityHandle>&)>, ~CUtlVector
// calls: operator new, DOTA_PrecacheItemByNameAsync, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase, operator delete, _Unwind_Resume
// strings: "PrecacheItemByNameAsync (item \"%s\") must be passed a valid callback!\n"
// globals: CPrecacheUnitByNameAsyncCallback::CallBackAndDeleteMe(uint,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int>> const&)
void __fastcall DOTA_VScript_PrecacheItemByNameAsync(const char *pUnitName, HSCRIPT hCallback)
{
  _DWORD *v4; // rax
  __int64 v5; // rbx
  __int64 v6[8]; // [rsp+0h] [rbp-40h] BYREF

  if ( hCallback != 0 )
  {
    v4 = operator new(0x20u);
    v4[2] = 0;
    v5 = v4;
    *(v4 + 2) = 0;
    v4[6] = 0;
    v4[7] = 0;
    *v4 = (*(*g_pScriptVM + 128LL))(g_pScriptVM, hCallback);
    v6[0] = v5;
    v6[1] = CPrecacheUnitByNameAsyncCallback::CallBackAndDeleteMe;
    v6[2] = 0;
    DOTA_PrecacheItemByNameAsync(pUnitName, 0, v6);
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 2) != 0 )
  {
    LoggingSystem_Log(
      LOG_VSCRIPT,
      2,
      "PrecacheItemByNameAsync (item \"%s\") must be passed a valid callback!\n",
      pUnitName);
  }
}


// DOTA_VScript_ApplyDamage  (line 449, @0x00000000027b58d0, libserver.so)  // inlines: CVariantBase, CoerceNumeric<float>, HScriptToEntity<CBaseEntity>, ToDOTAAbility, ToDOTABaseNPC, ToEnt, operator float, operator int, ~CVariantBase
// calls: GetScriptDesc<CEntityInstance>, ApplyDamage, Warning, DevMsg(char const*,...), CVariantBase<CVariantDefaultAllocator>::Free, __dynamic_cast, _Unwind_Resume
// strings: "victim", "damage_flags", "Malformed script damage call. Aborting\n", "Inputs:  victim, damage, damage_type, damage_flags, attacker, ability "
// globals: jpt_27B5A48
float __fastcall DOTA_VScript_ApplyDamage(HSCRIPT hTable)
{
  uint64 m_uint64; // r14
  __int64 (__fastcall *v3)(IScriptVM *, uint64, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  __int64 v5; // rax
  CDOTA_BaseNPC *v6; // r15
  uint64 v7; // r14
  ScriptClassDesc_t *v8; // rdx
  __int64 v9; // rax
  CDOTA_BaseNPC *v10; // r14
  char v11; // al
  __int64 v12; // rsi
  CDOTABaseAbility *v13; // rdx
  float v14; // xmm0_4
  uint64 v16; // r13
  ScriptClassDesc_t *v17; // rdx
  const void *v18; // rax
  float v19; // xmm7_4
  __int64 (__fastcall *v20)(IScriptVM *, uint64, ScriptClassDesc_t *); // [rsp+0h] [rbp-60h]
  float flDamage; // [rsp+Ch] [rbp-54h]
  __int64 (__fastcall *nDamageFlagsa)(IScriptVM *, uint64, ScriptClassDesc_t *); // [rsp+10h] [rbp-50h]
  int nDamageFlags; // [rsp+10h] [rbp-50h]
  int nDamageType; // [rsp+18h] [rbp-48h]
  char bNoParams; // [rsp+1Ch] [rbp-44h]
  float bNoParamsa; // [rsp+1Ch] [rbp-44h]
  ScriptVariant_t rval; // [rsp+20h] [rbp-40h] BYREF

  rval.m_type = 0;
  rval.m_flags = 0;
  rval.m_uint64 = 0;
  if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, "victim", &rval) != 0 )
  {
    m_uint64 = rval.m_uint64;
    if ( rval.m_uint64 != 0
      && (v3 = *(*g_pScriptVM + 208LL),
          Script = GetScriptDesc<CEntityInstance>(0),
          v5 = v3(g_pScriptVM, m_uint64, Script),
          v6 = v5,
          v5 != 0)
      && *(v5 + 339) != 0 )
    {
      bNoParams = 0;
    }
    else
    {
      bNoParams = 0;
      v6 = 0;
    }
  }
  else
  {
    bNoParams = 1;
    v6 = 0;
  }
  (*(*g_pScriptVM + 344LL))(g_pScriptVM, &rval);
  if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, "attacker", &rval) != 0 )
  {
    v7 = rval.m_uint64;
    if ( rval.m_uint64 != 0 )
    {
      nDamageFlagsa = *(*g_pScriptVM + 208LL);
      v8 = GetScriptDesc<CEntityInstance>(0);
      v9 = nDamageFlagsa(g_pScriptVM, v7, v8);
      v10 = v9;
      if ( v9 != 0 && *(v9 + 339) == 0 )
        v10 = 0;
    }
    else
    {
      v10 = 0;
    }
  }
  else
  {
    bNoParams = 1;
    v10 = 0;
  }
  (*(*g_pScriptVM + 344LL))(g_pScriptVM, &rval);
  if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, "damage", &rval) != 0 )
  {
    switch ( rval.m_type )
    {
      case 1:
        flDamage = rval.m_float;
        break;
      case 5:
      case 7:
        flDamage = rval.m_int;
        break;
      case 0x21:
        if ( rval.m_int64 < 0 )
        {
          v19 = (rval.m_char & 1 | (rval.m_uint64 >> 1));
          flDamage = v19 + v19;
        }
        else
        {
          flDamage = rval.m_int;
        }
        break;
      case 0x22:
        flDamage = rval.m_float64;
        break;
      case 0x25:
        flDamage = rval.m_int;
        break;
      default:
        flDamage = 0.0;
        break;
    }
  }
  else
  {
    bNoParams = 1;
  }
  (*(*g_pScriptVM + 344LL))(g_pScriptVM, &rval);
  if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, "damage_type", &rval) != 0 )
  {
    if ( rval.m_type == 1 )
    {
      nDamageType = rval.m_float;
    }
    else
    {
      nDamageType = rval.m_int;
      if ( rval.m_type == 34 )
        nDamageType = rval.m_float64;
    }
  }
  else
  {
    bNoParams = 1;
  }
  (*(*g_pScriptVM + 344LL))(g_pScriptVM, &rval);
  nDamageFlags = 0;
  if ( (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, "damage_flags", &rval) != 0 )
  {
    if ( rval.m_type == 1 )
    {
      nDamageFlags = rval.m_float;
    }
    else
    {
      nDamageFlags = rval.m_int;
      if ( rval.m_type == 34 )
        nDamageFlags = rval.m_float64;
    }
  }
  (*(*g_pScriptVM + 344LL))(g_pScriptVM, &rval);
  v11 = (*(*g_pScriptVM + 312LL))(g_pScriptVM, hTable, "ability", &rval);
  v13 = 0;
  if ( v11 != 0 )
  {
    v16 = rval.m_uint64;
    if ( rval.m_uint64 != 0
      && (v20 = *(*g_pScriptVM + 208LL), v17 = GetScriptDesc<CEntityInstance>(0),
                                         (v18 = v20(g_pScriptVM, v16, v17)) != 0) )
    {
      v13 = __dynamic_cast(v18, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
    }
    else
    {
      v13 = 0;
    }
  }
  if ( v6 != 0 && bNoParams == 0 && v10 != 0 )
  {
    v14 = ApplyDamage(v10, v6, v13, flDamage, nDamageType, nDamageFlags);
  }
  else
  {
    Warning("Malformed script damage call. Aborting\n", v12, v13);
    DevMsg("Inputs:  victim, damage, damage_type, damage_flags, attacker, ability ");
    v14 = 0.0;
  }
  bNoParamsa = v14;
  CVariantBase<CVariantDefaultAllocator>::Free(&rval);
  return bNoParamsa;
}


// Script_GetTeamHeroKills  (line 502, @0x00000000027a7510, libserver.so)  // inlines: GetGlobalDOTATeam, GetHeroKills
// calls: GetGlobalTeam
int __fastcall Script_GetTeamHeroKills(int nTeamID)
{
  CTeam *GlobalTeam; // rax

  GlobalTeam = GetGlobalTeam(nTeamID);
  if ( GlobalTeam != 0 )
    return HIDWORD(GlobalTeam[1].m_pEntity);
  else
    return 0;
}


// Script_SetTeamCustomHealthbarColor  (line 511, @0x00000000027a8460, libserver.so)  // inlines: Color, GetGlobalDOTATeam, NetworkStateChanged, Set, SetColor, SetCustomHealthbarColor, SetRawColor, operator=
// calls: GetGlobalTeam
void __fastcall Script_SetTeamCustomHealthbarColor(int nTeamID, int r, int g, int b)
{
  char v4; // r14
  char v5; // r13
  unsigned __int8 v6; // r12
  CTeam *GlobalTeam; // rax
  unsigned __int16 v8; // bx
  unsigned int v9; // ebx
  CDOTATeam *pTeam; // [rsp+8h] [rbp-28h]

  v4 = r;
  v5 = g;
  v6 = b;
  GlobalTeam = GetGlobalTeam(nTeamID);
  if ( GlobalTeam != 0 )
  {
    LOBYTE(v8) = v4;
    HIBYTE(v8) = v5;
    v9 = (v6 << 16) | v8 | 0xFF000000;
    if ( *(&GlobalTeam[1].m_pDummyPhysicsComponent + 2) != v9 )
    {
      pTeam = GlobalTeam;
      (*(GlobalTeam->_vptr_IHandleEntity + 22))(GlobalTeam, 1034, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pTeam->m_CustomHealthbarColor = v9;
    }
  }
}


// Script_ClearTeamCustomHealthbarColor  (line 520, @0x00000000027a8720, libserver.so)  // inlines: ClearCustomHealthbarColor, Color, GetGlobalDOTATeam, NetworkStateChanged, Set, SetColor, SetRawColor, operator=
// calls: GetGlobalTeam
void __fastcall Script_ClearTeamCustomHealthbarColor(int nTeamID)
{
  CTeam *GlobalTeam; // rax
  CDOTATeam *pTeam; // [rsp+8h] [rbp-18h]

  GlobalTeam = GetGlobalTeam(nTeamID);
  if ( GlobalTeam != 0 && *(&GlobalTeam[1].m_pDummyPhysicsComponent + 2) != 0 )
  {
    pTeam = GlobalTeam;
    (*(GlobalTeam->_vptr_IHandleEntity + 22))(GlobalTeam, 1034, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    pTeam->m_CustomHealthbarColor = 0;
  }
}


// Script_CreateTempTree  (line 530, @0x00000000027a7570, libserver.so)
// calls: CreateTempTree
void __fastcall Script_CreateTempTree(double a1, vec_t a2, float a3, float flDuration)
{
  CreateTempTree(0, a1, a2, a3, a1, a2);
}


// Script_GetEntityIndexForTreeId  (line 535, @0x00000000027a7590, libserver.so)
// calls: GetEntityIndexForUnitOrderTreeId
CEntityIndex __fastcall Script_GetEntityIndexForTreeId(uint nTreeId)
{
  return GetEntityIndexForUnitOrderTreeId(nTreeId);
}


// Script_GetTreeIdForEntityIndex  (line 540, @0x00000000027a75a0, libserver.so)
// calls: GetUnitOrderTreeIdForEntityIndex
int __fastcall Script_GetTreeIdForEntityIndex(int32 nEntityIndex)
{
  return GetUnitOrderTreeIdForEntityIndex(nEntityIndex);
}


// Script_ResolveNPCPositions  (line 545, @0x00000000027a75b0, libserver.so)
// calls: CGridNav::ResolveNPCPositions
void __fastcall Script_ResolveNPCPositions(double a1, double a2, float a3, float flRadius)
{
  CGridNav::ResolveNPCPositions(&g_GridNav, 0, a1, a2, a3, flRadius);
}


// Script_EmitSoundLocationWithCaster  (line 550, @0x00000000027b3b70, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTABaseNPC, ToEnt
// calls: GetScriptDesc<CEntityInstance>, DOTA_EmitSoundLocationWithCaster
void __fastcall Script_EmitSoundLocationWithCaster(const char *pszSoundName, HSCRIPT hCaster, double a3, vec_t a4)
{
  __int64 (__fastcall *v6)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  __int64 v8; // rax
  CDOTA_BaseNPC *v9; // rdx
  Vector vLocationa; // [rsp+0h] [rbp-30h] BYREF

  *&vLocationa.x = a3;
  vLocationa.z = a4;
  if ( hCaster != 0
    && (v6 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        (v8 = v6(g_pScriptVM, hCaster, Script)) != 0)
    && *(v8 + 339) != 0 )
  {
    v9 = v8;
  }
  else
  {
    v9 = 0;
  }
  DOTA_EmitSoundLocationWithCaster(&vLocationa, pszSoundName, v9);
}


// Script_EmitSoundOnLocationForAllies  (line 555, @0x00000000027b3c00, libserver.so)  // inlines: CEntityIndex, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, EmitSound_t, HScriptToEntity<CBaseEntity>, Purge, RemoveAll, SoundEventGuid_t, ToEnt, entindex, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: GetScriptDesc<CEntityInstance>, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CBaseEntity::GetTeam, CRecipientFilter::RemoveRecipientsNotOnTeam, CRecipientFilter::AddRecipientsByTeam, GetGlobalTeam, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, CRecipientFilter::~CRecipientFilter, CUtlMemory<Vector, int>::Purge (15 total)
void __fastcall Script_EmitSoundOnLocationForAllies(const char *pszSoundName, HSCRIPT hEntity, double a3, vec_t a4)
{
  __int64 (__fastcall *v6)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  const CBaseEntity *v8; // r12
  float v9; // xmm1_4
  CTeam *Team; // rax
  CTeam *v11; // rax
  CTeam *GlobalTeam; // rax
  CEntityIndex v13; // eax
  Vector vLocationa; // [rsp+0h] [rbp-1D0h] BYREF
  EmitSound_t params; // [rsp+10h] [rbp-1C0h] BYREF
  CPASAttenuationFilter filter; // [rsp+70h] [rbp-160h] BYREF
  unsigned __int64 v17; // [rsp+1A8h] [rbp-28h]

  vLocationa.z = a4;
  v17 = __readfsqword(0x28u);
  *&vLocationa.x = a3;
  if ( hEntity != 0 )
  {
    v6 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v8 = v6(g_pScriptVM, hEntity, Script);
    if ( v8 != 0 )
    {
      CRecipientFilter::CRecipientFilter(&filter);
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::AddRecipientsByPAS(&filter, &vLocationa);
      filter._vptr_IRecipientFilter = &off_3FECD70;
      CPASAttenuationFilter::Filter(&filter, &vLocationa, 0.80000001, v9);
      Team = CBaseEntity::GetTeam(v8);
      CRecipientFilter::RemoveRecipientsNotOnTeam(&filter, Team);
      v11 = CBaseEntity::GetTeam(v8);
      CRecipientFilter::AddRecipientsByTeam(&filter, v11);
      GlobalTeam = GetGlobalTeam(1);
      CRecipientFilter::AddRecipientsByTeam(&filter, GlobalTeam);
      params.m_pSoundName = pszSoundName;
      params.m_flVolume = 1.0;
      params.m_SoundLevel = soundlevel_t::SNDLVL_NONE;
      params.m_nFlags = 0;
      params.m_nPitch = 100;
      params.m_flSoundTime = 0.0;
      params.m_pflSoundDuration = 0;
      params.m_bEmitCloseCaption = 1;
      params.m_bWarnOnMissingCloseCaption = 0;
      params.m_bWarnOnDirectWaveReference = 0;
      params.m_nSpeakerEntity.m_Data = -1;
      params.m_UtlVecSoundOrigin.m_Size = 0;
      memset(&params.m_UtlVecSoundOrigin.m_Memory, 0, 21);
      params.m_nChannel = 6;
      params.m_pOrigin = &vLocationa;
      v13.m_Data = CEntityInstance::GetEntityIndex(v8).m_Data;
      CBaseEntity::EmitSound(&filter, v13, &params);
      params.m_UtlVecSoundOrigin.m_Size = 0;
      if ( (params.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<Vector,int>::Purge(&params.m_UtlVecSoundOrigin.m_Memory);
        if ( (params.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<Vector,int>::Purge(&params.m_UtlVecSoundOrigin.m_Memory);
      }
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::~CRecipientFilter(&filter);
    }
  }
}


// Script_EmitAnnouncerSound  (line 574, @0x00000000027b3e90, libserver.so)  // inlines: AllocateData, CBroadcastRecipientFilter, CEntityIndex, CSosFieldData, CSosFieldDataFloat, CUtlMemory, CUtlVector, CUtlVectorBase, ClearData, CopyData, EmitSound_t, GetDataPtr, Init, Purge, RemoveAll, SoundEventGuid_t, V_memcpy, memcpy, ~CBroadcastRecipientFilter, ~CSosFieldData, ~CSosFieldDataFloat, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CBaseEntity::EmitSound, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CRecipientFilter::~CRecipientFilter, CUtlMemory<Vector, int>::Purge, __stack_chk_fail, CSosFieldData::ClearData, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "stack_index"
void __fastcall Script_EmitAnnouncerSound(const char *pszSoundName)
{
  SndOpEventGuid_t v2; // r14
  CSosFieldData fieldData; // [rsp+10h] [rbp-1E0h] BYREF
  EmitSound_t ep; // [rsp+30h] [rbp-1C0h] BYREF
  CBroadcastRecipientFilter filter; // [rsp+90h] [rbp-160h] BYREF
  unsigned __int64 v6; // [rsp+1C8h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  ep.m_flVolume = 1.0;
  ep.m_SoundLevel = soundlevel_t::SNDLVL_NONE;
  ep.m_nFlags = 0;
  ep.m_nPitch = 100;
  ep.m_pOrigin = 0;
  ep.m_flSoundTime = 0.0;
  ep.m_pflSoundDuration = 0;
  ep.m_bEmitCloseCaption = 1;
  ep.m_bWarnOnMissingCloseCaption = 0;
  ep.m_bWarnOnDirectWaveReference = 0;
  ep.m_nSpeakerEntity.m_Data = -1;
  ep.m_UtlVecSoundOrigin.m_Size = 0;
  memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
  ep.m_nChannel = 6;
  ep.m_pSoundName = pszSoundName;
  v2 = CBaseEntity::EmitSound(&filter, 0, &ep);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  fieldData.m_nAllocSize = 0;
  fieldData.m_pData = 0;
  fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
  fieldData.m_nAllocSize = 4;
  LODWORD(fieldData.m_pData) = 1084227584;
  CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, &filter, v2, "stack_index", &fieldData, 0, 0);
  if ( fieldData.m_nAllocSize > 8 && fieldData.m_pData != 0 )
    operator delete[](fieldData.m_pData);
  ep.m_UtlVecSoundOrigin.m_Size = 0;
  if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
    if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
  }
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// Script_EmitAnnouncerSoundForTeam  (line 585, @0x00000000027b4160, libserver.so)  // inlines: AllocateData, CEntityIndex, CSosFieldData, CSosFieldDataFloat, CUtlMemory, CUtlVector, CUtlVectorBase, ClearData, CopyData, EmitSound_t, GetDataPtr, Init, Purge, RemoveAll, SoundEventGuid_t, V_memcpy, memcpy, ~CSosFieldData, ~CSosFieldDataFloat, ~CTeamRecipientFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CTeamRecipientFilter::CTeamRecipientFilter, CBaseEntity::EmitSound, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CRecipientFilter::~CRecipientFilter, CUtlMemory<Vector, int>::Purge, __stack_chk_fail, CSosFieldData::ClearData, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "stack_index"
void __fastcall Script_EmitAnnouncerSoundForTeam(const char *pszSoundName, int nTeamNumber)
{
  SndOpEventGuid_t v3; // r14
  CSosFieldData fieldData; // [rsp+10h] [rbp-1E0h] BYREF
  EmitSound_t ep; // [rsp+30h] [rbp-1C0h] BYREF
  CTeamRecipientFilter filter; // [rsp+90h] [rbp-160h] BYREF
  unsigned __int64 v7; // [rsp+1C8h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  CTeamRecipientFilter::CTeamRecipientFilter(&filter, nTeamNumber, 0);
  ep.m_flVolume = 1.0;
  ep.m_SoundLevel = soundlevel_t::SNDLVL_NONE;
  ep.m_nFlags = 0;
  ep.m_nPitch = 100;
  ep.m_pOrigin = 0;
  ep.m_flSoundTime = 0.0;
  ep.m_pflSoundDuration = 0;
  ep.m_bEmitCloseCaption = 1;
  ep.m_bWarnOnMissingCloseCaption = 0;
  ep.m_bWarnOnDirectWaveReference = 0;
  ep.m_nSpeakerEntity.m_Data = -1;
  ep.m_UtlVecSoundOrigin.m_Size = 0;
  memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
  ep.m_nChannel = 6;
  ep.m_pSoundName = pszSoundName;
  v3 = CBaseEntity::EmitSound(&filter, 0, &ep);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  fieldData.m_nAllocSize = 0;
  fieldData.m_pData = 0;
  fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
  fieldData.m_nAllocSize = 4;
  LODWORD(fieldData.m_pData) = 1084227584;
  CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, &filter, v3, "stack_index", &fieldData, 0, 0);
  if ( fieldData.m_nAllocSize > 8 && fieldData.m_pData != 0 )
    operator delete[](fieldData.m_pData);
  ep.m_UtlVecSoundOrigin.m_Size = 0;
  if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
    if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
  }
  filter._vptr_IRecipientFilter = &off_3FF4590;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// Script_EmitAnnouncerSoundForTeamOnLocation  (line 595, @0x00000000027b4410, libserver.so)  // inlines: AllocateData, CEntityIndex, CPASAttenuationFilter, CPASFilter, CSosFieldData, CSosFieldDataFloat, CUtlMemory, CUtlVector, CUtlVectorBase, ClearData, CopyData, EmitSound_t, GetDataPtr, Init, Purge, RemoveAll, SoundEventGuid_t, V_memcpy, memcpy, ~CPASAttenuationFilter, ~CPASFilter, ~CSosFieldData, ~CSosFieldDataFloat, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, GetGlobalTeam, CRecipientFilter::RemoveRecipientsNotOnTeam, CBaseEntity::EmitSound, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CRecipientFilter::~CRecipientFilter, CUtlMemory<Vector, int>::Purge, __stack_chk_fail, _Unwind_Resume (14 total)
// strings: "stack_index"
void __fastcall Script_EmitAnnouncerSoundForTeamOnLocation(
        const char *pszSoundName,
        int nTeamNumber,
        double a3,
        vec_t a4)
{
  float v6; // xmm1_4
  CTeam *GlobalTeam; // rax
  SndOpEventGuid_t v8; // r14
  _DWORD *m_pData; // rax
  Vector vLocationa; // [rsp+10h] [rbp-1F0h] BYREF
  CSosFieldData fieldData; // [rsp+20h] [rbp-1E0h] BYREF
  EmitSound_t params; // [rsp+40h] [rbp-1C0h] BYREF
  CPASAttenuationFilter filter; // [rsp+A0h] [rbp-160h] BYREF
  unsigned __int64 v14; // [rsp+1D8h] [rbp-28h]

  *&vLocationa.x = a3;
  v14 = __readfsqword(0x28u);
  vLocationa.z = a4;
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(&filter, &vLocationa);
  filter._vptr_IRecipientFilter = &off_3FECD70;
  CPASAttenuationFilter::Filter(&filter, &vLocationa, 0.80000001, v6);
  GlobalTeam = GetGlobalTeam(nTeamNumber);
  CRecipientFilter::RemoveRecipientsNotOnTeam(&filter, GlobalTeam);
  params.m_pSoundName = pszSoundName;
  params.m_bEmitCloseCaption = 1;
  params.m_flVolume = 1.0;
  params.m_SoundLevel = soundlevel_t::SNDLVL_NONE;
  params.m_nFlags = 0;
  params.m_nPitch = 100;
  params.m_flSoundTime = 0.0;
  params.m_pflSoundDuration = 0;
  params.m_bWarnOnMissingCloseCaption = 0;
  params.m_bWarnOnDirectWaveReference = 0;
  params.m_nSpeakerEntity.m_Data = -1;
  params.m_UtlVecSoundOrigin.m_Size = 0;
  memset(&params.m_UtlVecSoundOrigin.m_Memory, 0, 21);
  params.m_nChannel = 6;
  params.m_pOrigin = &vLocationa;
  v8 = CBaseEntity::EmitSound(&filter, 0, &params);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  fieldData.m_nAllocSize = 0;
  fieldData.m_pData = 0;
  fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
  if ( fieldData.m_nAllocSize <= 3 )
  {
    fieldData.m_nAllocSize = 4;
  }
  else if ( fieldData.m_nAllocSize > 8 )
  {
    m_pData = fieldData.m_pData;
    if ( fieldData.m_pData == 0 )
      goto LABEL_5;
    goto LABEL_4;
  }
  m_pData = &fieldData.m_pData;
LABEL_4:
  *m_pData = 1084227584;
LABEL_5:
  CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, &filter, v8, "stack_index", &fieldData, 0, 0);
  if ( fieldData.m_nAllocSize > 8 && fieldData.m_pData != 0 )
    operator delete[](fieldData.m_pData);
  params.m_UtlVecSoundOrigin.m_Size = 0;
  if ( (params.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&params.m_UtlVecSoundOrigin.m_Memory);
    if ( (params.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&params.m_UtlVecSoundOrigin.m_Memory);
  }
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// Script_EmitAnnouncerSoundForPlayer  (line 607, @0x00000000027b4740, libserver.so)  // inlines: AllocateData, CEntityIndex, CSingleUserRecipientFilter, CSosFieldData, CSosFieldDataFloat, CUtlMemory, CUtlVector, CUtlVectorBase, ClearData, CopyData, EmitSound_t, GetDataPtr, Init, Purge, RemoveAll, SoundEventGuid_t, V_memcpy, memcpy, ~CSingleUserRecipientFilter, ~CSosFieldData, ~CSosFieldDataFloat, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: UTIL_PlayerBySlot, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CBaseEntity::EmitSound, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CRecipientFilter::~CRecipientFilter, CUtlMemory<Vector, int>::Purge, __stack_chk_fail, CSosFieldData::ClearData, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "stack_index"
void __fastcall Script_EmitAnnouncerSoundForPlayer(const char *pszSoundName, int nPlayerID)
{
  CBasePlayer *v3; // r12
  SndOpEventGuid_t v4; // r14
  CSosFieldData fieldData; // [rsp+10h] [rbp-1E0h] BYREF
  EmitSound_t params; // [rsp+30h] [rbp-1C0h] BYREF
  CSingleUserRecipientFilter filter; // [rsp+90h] [rbp-160h] BYREF
  unsigned __int64 v8; // [rsp+1C8h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  v3 = UTIL_PlayerBySlot(nPlayerID);
  if ( v3 != 0 )
  {
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::AddRecipient(&filter, v3);
    params.m_pSoundName = pszSoundName;
    params.m_bEmitCloseCaption = 1;
    params.m_flVolume = 1.0;
    params.m_SoundLevel = soundlevel_t::SNDLVL_NONE;
    params.m_nFlags = 0;
    params.m_nPitch = 100;
    params.m_pOrigin = 0;
    params.m_flSoundTime = 0.0;
    params.m_pflSoundDuration = 0;
    params.m_bWarnOnMissingCloseCaption = 0;
    params.m_bWarnOnDirectWaveReference = 0;
    params.m_nSpeakerEntity.m_Data = -1;
    params.m_UtlVecSoundOrigin.m_Size = 0;
    memset(&params.m_UtlVecSoundOrigin.m_Memory, 0, 21);
    params.m_nChannel = 6;
    v4 = CBaseEntity::EmitSound(&filter, 0, &params);
    fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
    fieldData.m_nAllocSize = 0;
    fieldData.m_pData = 0;
    fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
    fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
    fieldData.m_nAllocSize = 4;
    LODWORD(fieldData.m_pData) = 1084227584;
    CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, &filter, v4, "stack_index", &fieldData, 0, 0);
    if ( fieldData.m_nAllocSize > 8 && fieldData.m_pData != 0 )
      operator delete[](fieldData.m_pData);
    params.m_UtlVecSoundOrigin.m_Size = 0;
    if ( (params.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<Vector,int>::Purge(&params.m_UtlVecSoundOrigin.m_Memory);
      if ( (params.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<Vector,int>::Purge(&params.m_UtlVecSoundOrigin.m_Memory);
    }
    filter._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
}


// Script_MinimapEvent  (line 620, @0x00000000027c7ce0, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTABaseNPC, ToEnt
// calls: GetScriptDesc<CEntityInstance>, MinimapEvent
void __fastcall Script_MinimapEvent(int iTeam, HSCRIPT hEntity, int iX, int iY, int iEventType, int iEventDuration)
{
  __int64 (__fastcall *v9)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // rbx
  ScriptClassDesc_t *Script; // rax
  __int64 v11; // rax
  CDOTA_BaseNPC *v12; // rsi
  int iEventDurationa; // [rsp+4h] [rbp-3Ch]
  int iEventTypea; // [rsp+8h] [rbp-38h]

  if ( hEntity != 0
    && (iEventDurationa = iEventDuration,
        iEventTypea = iEventType,
        v9 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        v11 = v9(g_pScriptVM, hEntity, Script),
        iEventType = iEventTypea,
        iEventDuration = iEventDurationa,
        v11 != 0)
    && *(v11 + 339) != 0 )
  {
    v12 = v11;
  }
  else
  {
    v12 = 0;
  }
  MinimapEvent(iTeam, v12, iX, iY, iEventType, iEventDuration);
}


// Script_RollPercentage  (line 625, @0x00000000027a7440, libserver.so)  // inlines: RollPercentage
// calls: RandomInt
bool __fastcall Script_RollPercentage(int nPct)
{
  return nPct >= RandomInt(1, 100);
}


// Script_FindUnitsInLine  (line 630, @0x00000000027b6ec0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, CVariantBase, ConvertToExternalMemory, EntityToHScript, Free, Get, GetPublicScriptScope, Purge, Purge_FixedGrowable, RemoveAll, TakeOwnership, ToHScript, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable, ~CVariantBase
// calls: CGridNav::PrepareObstructionManager, CGridNav::CheckForCollisionsWithLine, UnitFilter, CEntityInstance::CreatePublicScriptScope, CUtlMemory<IntersectionRecord_t, int>::Purge, __stack_chk_fail, CVariantBase<CVariantDefaultAllocator>::Free, CUtlVectorBase<IntersectionRecord_t, CUtlMemoryFixedGrowable<IntersectionRecord_t, 16ul, int> >::~CUtlVectorBase, _Unwind_Resume
// local variable allocation has failed, the output may be wrong!
ScriptVariant_t *__fastcall Script_FindUnitsInLine(
        ScriptVariant_t *__return_ptr retstr,
        int iTeamNumber,
        const Vector *const vPosition1,
        const Vector *const vPosition2,
        HSCRIPT hCacheUnit,
        float flRadius,
        int iTeamFilter,
        int iTypeFilter,
        int iFlagFilter)
{
  __int64 v13; // r13
  int v14; // r12d
  __int64 v15; // rbx
  IScriptVM *v16; // rdi
  __int64 v17; // rax
  unsigned int v18; // eax
  uint64 varTable; // [rsp+0h] [rbp-208h]
  void (__fastcall *v22)(IScriptVM *, uint64, _QWORD, __int64 *); // [rsp+10h] [rbp-1F8h]
  unsigned int v23; // [rsp+18h] [rbp-1F0h]
  __int64 nUnitIndex; // [rsp+20h] [rbp-1E8h] OVERLAPPED BYREF
  __int16 v26; // [rsp+28h] [rbp-1E0h]
  __int16 v27; // [rsp+2Ah] [rbp-1DEh]
  int v28; // [rsp+30h] [rbp-1D8h] BYREF
  CollisionResultList_t intersectionResults; // [rsp+38h] [rbp-1D0h] BYREF

  *&intersectionResults.m_Memory.m_FixedMemory.m_Data[376] = __readfsqword(0x28u);
  CGridNav::PrepareObstructionManager(
    &g_GridNav,
    flRadius,
    0x10u,
    0x40u,
    ObstructionRelationshipClass_t::DOTA_OBSTRUCTION_RELATIONSHIP_NONE,
    0.0);
  *&intersectionResults.m_Size = &intersectionResults.m_Memory.m_nAllocationCount;
  v28 = 0;
  intersectionResults.m_Memory.m_pMemory = 0x8000000000000010LL;
  LODWORD(nUnitIndex) = -2;
  CGridNav::CheckForCollisionsWithLine(&g_GridNav, vPosition1, vPosition2, &v28, &nUnitIndex, 7u);
  retstr->m_uint64 = 0;
  retstr->m_type = 0;
  retstr->m_flags = 0;
  (*(*g_pScriptVM + 360LL))(g_pScriptVM, retstr);
  v13 = 0;
  v14 = 0;
  v23 = 0;
  for ( varTable = retstr->m_uint64; v28 > v14; v13 += 24 )
  {
    v15 = *(*(*&intersectionResults.m_Size + v13 + 8) + 8LL);
    if ( v15 != 0
      && v15 != 2056
      && UnitFilter((v15 - 2056), iTeamFilter, iTypeFilter, iFlagFilter, iTeamNumber) == 0
      && *(v15 + 108) == 0 )
    {
      v16 = g_pScriptVM;
      v22 = *(*g_pScriptVM + 248LL);
      v17 = *(*(v15 - 2048) + 40LL);
      if ( v17 == 0 )
      {
        CEntityInstance::CreatePublicScriptScope((v15 - 2056), 0);
        v16 = g_pScriptVM;
        v17 = *(*(v15 - 2048) + 40LL);
      }
      nUnitIndex = v17;
      v27 = 0;
      v26 = 31;
      v22(v16, varTable, v23, &nUnitIndex);
      if ( (v27 & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, nUnitIndex);
      ++v23;
    }
    ++v14;
  }
  if ( retstr->m_type == 31 )
    retstr->m_type = 36;
  v28 = 0;
  v18 = HIDWORD(intersectionResults.m_Memory.m_pMemory) & 0xC0000000;
  if ( SLODWORD(intersectionResults.m_Memory.m_pMemory) < 0
    || *&intersectionResults.m_Size == &intersectionResults.m_Memory.m_nAllocationCount )
  {
    if ( v18 == 0 )
      CUtlMemory<IntersectionRecord_t,int>::Purge(&intersectionResults);
  }
  else if ( *&intersectionResults.m_Size != 0 && v18 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
  return retstr;
}


// UpdateEventPoints  (line 663, @0x00000000027b6900, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CMsgDOTAAwardEventPoints_AwardPoints>::TypeHandler>, AllocProto, CProtoBufMsg, CVProfScope, FreeProto, Get, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GetLobby, IsEnabled, IsValid, Lock, New, SaveEventPointsForSignOut, Unlock, add_award_points, operator(), operator++, set_account_id, set_event_id, set_has_account_id, set_has_event_id, set_has_match_id, set_has_points, set_match_id, set_points, ~CProtoBufMsg, ~CVProfScope, ~unique_ptr
// calls: GDOTAGCClientSystem, CDOTALobby::GetActiveIngameEventCount, ScriptTableToKeyValues, GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, CVProfile::EnterScope, pthread_mutex_lock, operator new, CMsgDOTAAwardEventPoints::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool (34 total)
// strings: "EventPointKV", "Networking", "CProtoBufMsg::CProtoBufMsg( MsgType_t )", "Player%d", "total_event_points", "AwardEventPoints failed as no lobby found!\n"
// globals: GCSDK::CProtoBufMsg<CMsgDOTAAwardEventPoints>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgDOTAAwardEventPoints>::s_pMemoryPool, UpdateEventPoints(HSCRIPT__ *)::nNagCount
void __fastcall UpdateEventPoints(HSCRIPT hEventPointData)
{
  CDOTAGCServerSystem *v2; // rax
  const CDOTALobby *v3; // r13
  int m_enabled; // eax
  bool v5; // bl
  GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAAwardEventPoints> *v6; // r12
  const google::protobuf::Descriptor *v7; // rax
  uint32 Int32; // r15d
  const google::protobuf::Descriptor *v9; // rax
  uint32 v10; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v11; // rax
  google::protobuf::Message *m_pProtoBufBody; // rax
  __int64 v13; // rdx
  EEvent ActiveIngameEvent; // eax
  CMsgDOTAAwardEventPoints *v15; // rdx
  CDOTALobby::FullMemberIndex_t v16; // r14d
  uint32 i; // ebx
  int PlayerIDBySteamID; // edx
  CMsgDOTAAwardEventPoints *v19; // r15
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rax
  __int64 v23; // rdx
  CMsgDOTAAwardEventPoints_AwardPoints *v24; // r15
  int Int; // eax
  uint64 v26; // r12
  CMsgDOTAAwardEventPoints *v27; // rbx
  CDOTAGCServerSystem *v28; // rax
  __int64 v29; // rdx
  CMsgDOTAAwardEventPoints_AwardPoints *pMem; // [rsp+8h] [rbp-1A8h]
  KeyValues *pEventPointKV; // [rsp+20h] [rbp-190h]
  KeyValues *pPlayerKV; // [rsp+28h] [rbp-188h]
  GCSDK::CProtoBufMsg<CMsgDOTAAwardEventPoints> msg; // [rsp+30h] [rbp-180h] BYREF
  CFmtStr sPlayerKey; // [rsp+60h] [rbp-150h] BYREF
  unsigned __int64 v35; // [rsp+178h] [rbp-38h]

  v35 = __readfsqword(0x28u);
  v2 = GDOTAGCClientSystem();
  v3 = *(v2 + 260);
  if ( v3 != 0 )
  {
    if ( CDOTALobby::GetActiveIngameEventCount(*(v2 + 260)) == 0 )
      return;
    pEventPointKV = ScriptTableToKeyValues(g_pScriptVM, "EventPointKV", hEventPointData);
    GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(&msg, 0x1CD8u);
    msg.m_pProtoBufBody = 0;
    msg._vptr_CProtoBufMsgBase = &off_4106830;
    m_enabled = g_VProfCurrentProfile.m_enabled;
    v5 = m_enabled != 0;
    if ( m_enabled != 0 )
      CVProfile::EnterScope(&g_VProfCurrentProfile, "CProtoBufMsg::CProtoBufMsg( MsgType_t )", 0, "Networking", 0, 4);
    if ( !GCSDK::CProtoBufMsg<CMsgDOTAAwardEventPoints>::s_bRegisteredWithMemoryPoolMgr )
    {
      pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
      if ( !GCSDK::CProtoBufMsg<CMsgDOTAAwardEventPoints>::s_bRegisteredWithMemoryPoolMgr )
      {
        v6 = operator new(0x28u);
        v7 = CMsgDOTAAwardEventPoints::descriptor();
        Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                  (v7->options_ + 8),
                  msgpool_hard_limit.number_,
                  msgpool_hard_limit.default_value_);
        v9 = CMsgDOTAAwardEventPoints::descriptor();
        v10 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v9->options_ + 8),
                msgpool_soft_limit.number_,
                msgpool_soft_limit.default_value_);
        GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v6, v10, Int32);
        v6->_vptr_CProtoBufMsgMemoryPoolBase = &off_41108B0;
        GCSDK::CProtoBufMsg<CMsgDOTAAwardEventPoints>::s_pMemoryPool = v6;
        v11 = GCSDK::GProtoBufMsgMemoryPoolMgr();
        GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v11, v6);
        GCSDK::CProtoBufMsg<CMsgDOTAAwardEventPoints>::s_bRegisteredWithMemoryPoolMgr = 1;
      }
      pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    }
    m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgDOTAAwardEventPoints>::s_pMemoryPool);
    msg.m_pProtoBufBody = m_pProtoBufBody;
    if ( v5 )
    {
      CVProfile::ExitScope(&g_VProfCurrentProfile);
      m_pProtoBufBody = msg.m_pProtoBufBody;
    }
    v13 = *(v3 + 27);
    *(m_pProtoBufBody + 4) |= 2u;
    *(m_pProtoBufBody + 6) = v13;
    ActiveIngameEvent = CDOTALobby::GetActiveIngameEvent(v3, 0);
    v15 = msg.m_pProtoBufBody;
    *(msg.m_pProtoBufBody + 4) |= 4u;
    *(v15 + 14) = ActiveIngameEvent;
    v16.m_nIndex = CDOTALobby::GetFullNumMembers(v3).m_nIndex;
    if ( v16.m_nIndex != 0 )
    {
      for ( i = 0; i < v16.m_nIndex; ++i )
      {
        while ( 1 )
        {
          v26 = *(CDOTALobby::GetFullMemberDetails(v3, i) + 3);
          if ( (v26 & 0xF0000000000000LL) == 0 || ((v26 >> 52) & 0xF) > 0xA || (HIBYTE(v26) - 1) > 3u )
            goto LABEL_23;
          if ( (BYTE6(v26) & 0xF0) == 0x10 )
            break;
          if ( (BYTE6(v26) & 0xF0) == 0x70 )
          {
            if ( v26 != 0 && (v26 & 0xFFFFF00000000LL) == 0 )
            {
LABEL_16:
              PlayerIDBySteamID = CDOTA_PlayerResource::GetPlayerIDBySteamID(g_pDOTAPlayerResource, v26);
              if ( PlayerIDBySteamID >= 0 )
              {
                CFmtStrN<256,false>::CFmtStrN(&sPlayerKey, "Player%d", PlayerIDBySteamID);
                pPlayerKV = KeyValues::FindKey(pEventPointKV, sPlayerKey.m_szBuf, 0);
                if ( pPlayerKV != 0 )
                {
                  v19 = msg.m_pProtoBufBody;
                  v20 = *(msg.m_pProtoBufBody + 8);
                  v21 = *(msg.m_pProtoBufBody + 9);
                  if ( v20 < v21 )
                  {
                    v29 = *(msg.m_pProtoBufBody + 3);
                    *(msg.m_pProtoBufBody + 8) = v20 + 1;
                    v24 = *(v29 + 8 * v20);
                  }
                  else
                  {
                    if ( v21 == *(msg.m_pProtoBufBody + 10) )
                      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(msg.m_pProtoBufBody + 1, v21 + 1);
                    pMem = operator new(0x28u);
                    CMsgDOTAAwardEventPoints_AwardPoints::CMsgDOTAAwardEventPoints_AwardPoints(pMem);
                    v22 = *(v19 + 8);
                    v23 = *(v19 + 3);
                    ++*(v19 + 9);
                    *(v19 + 8) = v22 + 1;
                    *(v23 + 8 * v22) = pMem;
                    v24 = pMem;
                  }
                  *(v24 + 4) |= 1u;
                  *(v24 + 6) = v26;
                  Int = KeyValues::GetInt(pPlayerKV, "total_event_points", 0);
                  *(v24 + 4) |= 2u;
                  *(v24 + 7) = Int;
                }
              }
            }
          }
          else if ( (BYTE6(v26) & 0xF0) != 0x30 || v26 != 0 )
          {
            goto LABEL_16;
          }
LABEL_23:
          if ( ++i >= v16.m_nIndex )
            goto LABEL_31;
        }
        if ( v26 == 0 )
          goto LABEL_23;
        if ( (HIDWORD(v26) & 0xFFFFFu) <= 4 )
          goto LABEL_16;
      }
    }
LABEL_31:
    v27 = msg.m_pProtoBufBody;
    v28 = GDOTAGCClientSystem();
    CMsgDOTAAwardEventPoints::CopyFrom((v28 + 1960), v27);
    msg._vptr_CProtoBufMsgBase = &off_4106830;
    if ( msg.m_pProtoBufBody != 0 )
    {
      GCSDK::CProtoBufMsgMemoryPoolBase::Free(
        GCSDK::CProtoBufMsg<CMsgDOTAAwardEventPoints>::s_pMemoryPool,
        msg.m_pProtoBufBody);
      msg.m_pProtoBufBody = 0;
    }
    GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(&msg);
    if ( pEventPointKV != 0 )
    {
      KeyValues::~KeyValues(pEventPointKV);
      KeyValues::operator delete(pEventPointKV);
    }
  }
  else if ( UpdateEventPoints(HSCRIPT__ *)::nNagCount <= 4 )
  {
    Warning("AwardEventPoints failed as no lobby found!\n");
    ++UpdateEventPoints(HSCRIPT__ *)::nNagCount;
  }
}


// Script_GetTeamName  (line 715, @0x00000000027a75d0, libserver.so)
// calls: GetDotaTeamName
const char *__fastcall Script_GetTeamName(int nTeamID)
{
  return GetDotaTeamName(nTeamID);
}


// CScriptHTTPRequest::SetHTTPRequestNetworkActivityTimeout  (line 745, @0x00000000027cea00, libserver.so)
bool __fastcall CScriptHTTPRequest::SetHTTPRequestNetworkActivityTimeout(
        CScriptHTTPRequest *const this,
        uint32 unTimeoutSeconds)
{
  return (*(*this->m_pHTTP + 16LL))(this->m_pHTTP, this->m_hRequest, unTimeoutSeconds);
}


// CScriptHTTPRequest::SetHTTPRequestAbsoluteTimeoutMS  (line 750, @0x00000000027cea20, libserver.so)
bool __fastcall CScriptHTTPRequest::SetHTTPRequestAbsoluteTimeoutMS(
        CScriptHTTPRequest *const this,
        uint32 unMilliseconds)
{
  return (*(*this->m_pHTTP + 184LL))(this->m_pHTTP, this->m_hRequest, unMilliseconds);
}


// CScriptHTTPRequest::SetHTTPRequestHeaderValue  (line 755, @0x00000000027cea40, libserver.so)
bool __fastcall CScriptHTTPRequest::SetHTTPRequestHeaderValue(
        CScriptHTTPRequest *const this,
        const char *pchHeaderName,
        const char *pchHeaderValue)
{
  return (*(*this->m_pHTTP + 24LL))(this->m_pHTTP, this->m_hRequest, pchHeaderName, pchHeaderValue);
}


// CScriptHTTPRequest::SetHTTPRequestGetOrPostParameter  (line 760, @0x00000000027cea70, libserver.so)
bool __fastcall CScriptHTTPRequest::SetHTTPRequestGetOrPostParameter(
        CScriptHTTPRequest *const this,
        const char *pchParamName,
        const char *pchParamValue)
{
  return (*(*this->m_pHTTP + 32LL))(this->m_pHTTP, this->m_hRequest, pchParamName, pchParamValue);
}


// CScriptHTTPRequest::SetHTTPRequestRawPostBody  (line 765, @0x00000000027cf520, libserver.so)  // inlines: V_strlen
// calls: strlen
bool __fastcall CScriptHTTPRequest::SetHTTPRequestRawPostBody(
        CScriptHTTPRequest *const this,
        const char *pchContentType,
        const char *pchContent)
{
  __int64 v6; // r8

  if ( pchContent != 0 )
    v6 = strlen(pchContent);
  else
    v6 = 0;
  return (*(*this->m_pHTTP + 128LL))(this->m_pHTTP, this->m_hRequest, pchContentType, pchContent, v6);
}


// CScriptHTTPRequest::Send  (line 771, @0x00000000027d6e10, libserver.so)  // inlines: Set
// calls: SteamAPI_RegisterCallResult, CScriptHTTPRequest::OnHTTPRequestCompleted, SteamAPI_UnregisterCallResult
// globals: CScriptHTTPRequest::OnHTTPRequestCompleted(HTTPRequestCompleted_t *,bool)
bool __fastcall CScriptHTTPRequest::Send(CScriptHTTPRequest *const this, HSCRIPT hCompletedCallback)
{
  HSCRIPT v3; // rax
  ISteamHTTP *m_pHTTP; // rdi
  char v5; // r12
  SteamAPICall_t m_APICallHandle; // r13
  HTTPRequestHandle m_hRequest; // eax
  HTTPRequestCompleted_t callback; // [rsp+0h] [rbp-40h] BYREF

  v3 = (*(*g_pScriptVM + 456LL))(g_pScriptVM, hCompletedCallback);
  m_pHTTP = this->m_pHTTP;
  this->m_hCallback = v3;
  v5 = (*(*m_pHTTP + 40LL))(m_pHTTP, this->m_hRequest, &this->m_APICallHandle);
  if ( v5 != 0 )
  {
    m_APICallHandle = this->m_APICallHandle;
    if ( this->m_httpCallback.m_hAPICall != 0 )
      SteamAPI_UnregisterCallResult(&this->m_httpCallback);
    this->m_httpCallback.m_hAPICall = m_APICallHandle;
    this->m_httpCallback.m_pObj = this;
    this->m_httpCallback.m_Func.__pfn = CScriptHTTPRequest::OnHTTPRequestCompleted;
    this->m_httpCallback.m_Func.__delta = 0;
    if ( m_APICallHandle != 0 )
      SteamAPI_RegisterCallResult(&this->m_httpCallback, m_APICallHandle);
    return v5;
  }
  else
  {
    m_hRequest = this->m_hRequest;
    callback.m_bRequestSuccessful = 0;
    callback.m_eStatusCode = EHTTPStatusCode::k_EHTTPStatusCode500InternalServerError;
    callback.m_hRequest = m_hRequest;
    CScriptHTTPRequest::OnHTTPRequestCompleted(this, &callback, 0);
    return 0;
  }
}


// CScriptHTTPRequest::OnHTTPRequestCompleted  (line 789, @0x00000000027d6b10, libserver.so)  // inlines: CUtlString, CVariantBase, Call<CVariantBase<CVariantDefaultAllocator> >, Cancel, operator char const*, operator=, ~CCallResult, ~CScriptHTTPRequest, ~CUtlString, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, CUtlString::SetLength, CUtlString::Get, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, operator delete, CUtlString::FreeMemoryBlock, SteamAPI_UnregisterCallResult, _Unwind_Resume
// callers: CScriptHTTPRequest::Send
// strings: "StatusCode"
void __fastcall CScriptHTTPRequest::OnHTTPRequestCompleted(
        CScriptHTTPRequest *const this,
        HTTPRequestCompleted_t *pCompletedStruct,
        bool bOk)
{
  void (__fastcall *v5)(IScriptVM *, uint64, const char *, CVariantBase<CVariantDefaultAllocator> *); // rax
  HSCRIPT m_hInstance; // rdx
  void (__fastcall *v7)(IScriptVM *, uint64, char *, CVariantBase<CVariantDefaultAllocator> *); // rax
  ISteamHTTP *m_pHTTP; // rdi
  void (__fastcall *v9)(ISteamHTTP *, _QWORD, const char *, _QWORD); // r15
  const char *v10; // rax
  void (__fastcall *v11)(IScriptVM *, uint64, char *, const char *); // r15
  const char *v12; // rax
  HSCRIPT m_hCallback; // rax
  IScriptVM *v14; // rdi
  IScriptVM *v15; // rdi
  SteamAPICall_t m_hAPICall; // rsi
  IScriptVM *v17; // [rsp+8h] [rbp-98h]
  uint32 v18; // [rsp+10h] [rbp-90h]
  HSCRIPT v19; // [rsp+10h] [rbp-90h]
  uint32 uSize; // [rsp+2Ch] [rbp-74h] BYREF
  CUtlString strBody; // [rsp+30h] [rbp-70h] BYREF
  ScriptVariant_t callbackTable; // [rsp+40h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> pDest; // [rsp+50h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v24; // [rsp+60h] [rbp-40h] BYREF

  callbackTable.m_type = 0;
  callbackTable.m_flags = 0;
  callbackTable.m_uint64 = 0;
  (*(*g_pScriptVM + 264LL))(g_pScriptVM, &callbackTable, bOk);
  v5 = *(*g_pScriptVM + 240LL);
  v24.m_int = pCompletedStruct->m_eStatusCode;
  v24.m_type = 5;
  v24.m_flags = 0;
  v5(g_pScriptVM, callbackTable.m_uint64, "StatusCode", &v24);
  CVariantBase<CVariantDefaultAllocator>::Free(&v24);
  m_hInstance = this->m_hInstance;
  v7 = *(*g_pScriptVM + 240LL);
  v24.m_flags = 0;
  v24.m_type = 31;
  v24.m_uint64 = m_hInstance;
  v7(g_pScriptVM, callbackTable.m_uint64, "Request", &v24);
  CVariantBase<CVariantDefaultAllocator>::Free(&v24);
  m_pHTTP = this->m_pHTTP;
  strBody.m_pString = 0;
  if ( (*(*m_pHTTP + 88LL))(m_pHTTP, this->m_hRequest, &uSize) != 0 )
  {
    CUtlString::SetLength(&strBody, uSize);
    v18 = uSize;
    v9 = *(*this->m_pHTTP + 96LL);
    v10 = CUtlString::Get(&strBody);
    v9(this->m_pHTTP, this->m_hRequest, v10, v18);
  }
  v11 = *(*g_pScriptVM + 232LL);
  v12 = CUtlString::Get(&strBody);
  v11(g_pScriptVM, callbackTable.m_uint64, "Body", v12);
  pDest.m_type = 0;
  pDest.m_flags = 0;
  CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&callbackTable, &pDest);
  m_hCallback = this->m_hCallback;
  v24.m_type = 0;
  v24.m_uint64 = 0;
  v19 = m_hCallback;
  v17 = g_pScriptVM;
  v24.m_flags = 0;
  CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&pDest, &v24);
  (*(*v17 + 160LL))(v17, v19, &v24, 1, 0, 0, 1);
  CVariantBase<CVariantDefaultAllocator>::Free(&v24);
  CVariantBase<CVariantDefaultAllocator>::Free(&pDest);
  (*(*g_pScriptVM + 344LL))(g_pScriptVM, &callbackTable);
  (*(*this->m_pHTTP + 112LL))(this->m_pHTTP, this->m_hRequest);
  v14 = g_pScriptVM;
  this->m_hRequest = 0;
  (*(*v14 + 152LL))(v14, this->m_hCallback);
  v15 = g_pScriptVM;
  this->m_hCallback = 0;
  (*(*v15 + 136LL))(v15, this->m_hInstance);
  m_hAPICall = this->m_httpCallback.m_hAPICall;
  this->m_hInstance = 0;
  this->m_httpCallback._vptr_CCallbackBase = off_42B4990;
  if ( m_hAPICall != 0 )
  {
    SteamAPI_UnregisterCallResult(&this->m_httpCallback);
    this->m_httpCallback.m_hAPICall = 0;
  }
  operator delete(this);
  if ( strBody.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&strBody);
  CVariantBase<CVariantDefaultAllocator>::Free(&callbackTable);
}


// GetScriptDesc<CScriptHTTPRequest>  (line 821, @0x00000000027c0860, libserver.so)  // inlines: AddParameterType, CUtlMemory, CUtlVector, CUtlVectorBase, Finalize, ScriptClassDesc_t, ScriptDeduceFunctionSignature<CScriptHTTPRequest*, CScriptHTTPRequest, bool, HSCRIPT__*>, ScriptDeduceFunctionSignature<CScriptHTTPRequest*, CScriptHTTPRequest, bool, char const*, char const*>, ScriptDeduceFunctionSignature<CScriptHTTPRequest*, CScriptHTTPRequest, bool, unsigned int>, SetDescription, SetFunctionName, SetReturnType, SetScriptName, operator[]
// calls: operator new, CUtlVectorBase<ScriptFunctionBinding_t, CUtlMemory<ScriptFunctionBinding_t, int> >::AddToTail
// callers: CreateHTTPRequest
// strings: "A HTTP request object.", "CScriptHTTPRequest", "Send a HTTP request.", "Set the network timeout on the request - this timer is reset when any data is received.", "SetHTTPRequestNetworkActivityTimeout", "Set the total timeout on the request." (13 total)
// globals: g_pCScriptHTTPRequest_ScriptDesc, CMemberScriptBinding1<CScriptHTTPRequest *,bool (CScriptHTTPRequest::*)(HSCRIPT__ *),bool,HSCRIPT__ *>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator, CScriptHTTPRequest::Send(HSCRIPT__ *), CMemberScriptBinding1<CScriptHTTPRequest *,bool (CScriptHTTPRequest::*)(uint),bool,uint>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,int,CVaria, CScriptHTTPRequest::SetHTTPRequestNetworkActivityTimeout(uint), CScriptHTTPRequest::SetHTTPRequestAbsoluteTimeoutMS(uint), CMemberScriptBinding2<CScriptHTTPRequest *,bool (CScriptHTTPRequest::*)(char const*,char const*),bool,char const*,char const*>::Call(void *,void *,CVariantBase<, CScriptHTTPRequest::SetHTTPRequestHeaderValue(char const*,char const*) (10 total)
ScriptClassDesc_t *__fastcall GetScriptDesc<CScriptHTTPRequest>(CScriptHTTPRequest *pScriptDescObjectInstance)
{
  ScriptClassDesc_t *result; // rax
  ScriptClassDesc_t *v2; // r12
  CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int> > *p_m_FunctionBindings; // rbx
  __int64 v4; // rax
  char v5; // dl
  __int64 v6; // rcx
  int v7; // edx
  char v8; // cl
  char v9; // di
  __int64 v10; // rax
  char v11; // dl
  __int64 v12; // rcx
  int v13; // edx
  char v14; // cl
  char v15; // di
  __int64 v16; // rax
  char v17; // dl
  __int64 v18; // rcx
  int v19; // edx
  char v20; // cl
  char v21; // di
  __int64 v22; // rax
  char v23; // dl
  char v24; // cl
  int v25; // edx
  char v26; // cl
  __int64 v27; // rax
  char v28; // dl
  char v29; // cl
  int v30; // edx
  char v31; // cl
  char v32; // di
  __int64 v33; // rax
  char v34; // dl
  char v35; // cl
  int v36; // edx
  char v37; // cl

  result = g_pCScriptHTTPRequest_ScriptDesc;
  if ( g_pCScriptHTTPRequest_ScriptDesc == 0 )
  {
    v2 = operator new(0x50u);
    v2->m_pBaseDesc = 0;
    v2->m_FunctionBindings.m_Size = 0;
    p_m_FunctionBindings = &v2->m_FunctionBindings;
    v2->m_FunctionBindings.m_Memory.m_pMemory = 0;
    v2->m_FunctionBindings.m_Memory.m_nAllocationCount = 0;
    v2->m_FunctionBindings.m_Memory.m_nGrowSize = 0;
    v2->m_pfnConstruct = 0;
    v2->m_pfnDestruct = 0;
    v2->pHelper = 0;
    g_pCScriptHTTPRequest_ScriptDesc = v2;
    v2->m_pszDescription = "A HTTP request object.";
    v2->m_pszScriptName = "CScriptHTTPRequest";
    v2->m_pszClassname = "CScriptHTTPRequest";
    v4 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(&v2->m_FunctionBindings)];
    v5 = *(v4 + 26);
    *(v4 + 16) = "Send a HTTP request.";
    *v4 = "Send";
    *(v4 + 8) = "Send";
    *(v4 + 24) = 6;
    v6 = v5++;
    *(v4 + v6 + 27) = 31;
    *(v4 + 26) = v5;
    v7 = v5 - 1;
    *(v4 + 25) = 0;
    if ( v7 >= 0 && *(v4 + v7 + 27) == 32 )
    {
      v8 = 1;
      do
      {
        --v7;
        v9 = v8;
        if ( v7 == -1 )
        {
          *(v4 + 25) = v8;
          goto LABEL_8;
        }
        ++v8;
      }
      while ( *(v4 + v7 + 27) == 32 );
      *(v4 + 25) = v9;
    }
LABEL_8:
    *(v4 + 64) = 1;
    *(v4 + 48) = CMemberScriptBinding1<CScriptHTTPRequest *,bool (CScriptHTTPRequest::*)(HSCRIPT__ *),bool,HSCRIPT__ *>::Call;
    *(v4 + 56) = CScriptHTTPRequest::Send;
    v10 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v11 = *(v10 + 26);
    *(v10 + 16) = "Set the network timeout on the request - this timer is reset when any data is received.";
    *v10 = "SetHTTPRequestNetworkActivityTimeout";
    *(v10 + 8) = "SetHTTPRequestNetworkActivityTimeout";
    *(v10 + 24) = 6;
    v12 = v11++;
    *(v10 + v12 + 27) = 37;
    *(v10 + 26) = v11;
    v13 = v11 - 1;
    *(v10 + 25) = 0;
    if ( v13 >= 0 && *(v10 + v13 + 27) == 32 )
    {
      v14 = 1;
      do
      {
        --v13;
        v15 = v14;
        if ( v13 == -1 )
        {
          *(v10 + 25) = v14;
          goto LABEL_14;
        }
        ++v14;
      }
      while ( *(v10 + v13 + 27) == 32 );
      *(v10 + 25) = v15;
    }
LABEL_14:
    *(v10 + 64) = 1;
    *(v10 + 48) = CMemberScriptBinding1<CScriptHTTPRequest *,bool (CScriptHTTPRequest::*)(unsigned int),bool,unsigned int>::Call;
    *(v10 + 56) = CScriptHTTPRequest::SetHTTPRequestNetworkActivityTimeout;
    v16 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v17 = *(v16 + 26);
    *(v16 + 16) = "Set the total timeout on the request.";
    *v16 = "SetHTTPRequestAbsoluteTimeoutMS";
    *(v16 + 8) = "SetHTTPRequestAbsoluteTimeoutMS";
    *(v16 + 24) = 6;
    v18 = v17++;
    *(v16 + v18 + 27) = 37;
    *(v16 + 26) = v17;
    v19 = v17 - 1;
    *(v16 + 25) = 0;
    if ( v19 >= 0 && *(v16 + v19 + 27) == 32 )
    {
      v20 = 1;
      do
      {
        --v19;
        v21 = v20;
        if ( v19 == -1 )
        {
          *(v16 + 25) = v20;
          goto LABEL_20;
        }
        ++v20;
      }
      while ( *(v16 + v19 + 27) == 32 );
      *(v16 + 25) = v21;
    }
LABEL_20:
    *(v16 + 64) = 1;
    *(v16 + 48) = CMemberScriptBinding1<CScriptHTTPRequest *,bool (CScriptHTTPRequest::*)(unsigned int),bool,unsigned int>::Call;
    *(v16 + 56) = CScriptHTTPRequest::SetHTTPRequestAbsoluteTimeoutMS;
    v22 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v23 = *(v22 + 26);
    *(v22 + 16) = "Set a header value on the request.";
    *v22 = "SetHTTPRequestHeaderValue";
    *(v22 + 8) = "SetHTTPRequestHeaderValue";
    *(v22 + 24) = 6;
    *(v22 + v23 + 27) = 30;
    v24 = v23 + 1;
    v23 += 2;
    *(v22 + v24 + 27) = 30;
    *(v22 + 26) = v23;
    v25 = v23 - 1;
    *(v22 + 25) = 0;
    if ( v25 >= 0 && *(v22 + v25 + 27) == 32 )
    {
      v26 = 0;
      do
      {
        --v25;
        ++v26;
      }
      while ( v25 != -1 && *(v22 + v25 + 27) == 32 );
      *(v22 + 25) = v26;
    }
    *(v22 + 64) = 1;
    *(v22 + 48) = CMemberScriptBinding2<CScriptHTTPRequest *,bool (CScriptHTTPRequest::*)(char const*,char const*),bool,char const*,char const*>::Call;
    *(v22 + 56) = CScriptHTTPRequest::SetHTTPRequestHeaderValue;
    v27 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v28 = *(v27 + 26);
    *(v27 + 16) = "Set a POST or GET parameter on the request.";
    *v27 = "SetHTTPRequestGetOrPostParameter";
    *(v27 + 8) = "SetHTTPRequestGetOrPostParameter";
    *(v27 + 24) = 6;
    *(v27 + v28 + 27) = 30;
    v29 = v28 + 1;
    v28 += 2;
    *(v27 + v29 + 27) = 30;
    *(v27 + 26) = v28;
    v30 = v28 - 1;
    *(v27 + 25) = 0;
    if ( v30 >= 0 && *(v27 + v30 + 27) == 32 )
    {
      v31 = 1;
      do
      {
        --v30;
        v32 = v31;
        if ( v30 == -1 )
        {
          *(v27 + 25) = v31;
          goto LABEL_32;
        }
        ++v31;
      }
      while ( *(v27 + v30 + 27) == 32 );
      *(v27 + 25) = v32;
    }
LABEL_32:
    *(v27 + 64) = 1;
    *(v27 + 48) = CMemberScriptBinding2<CScriptHTTPRequest *,bool (CScriptHTTPRequest::*)(char const*,char const*),bool,char const*,char const*>::Call;
    *(v27 + 56) = CScriptHTTPRequest::SetHTTPRequestGetOrPostParameter;
    v33 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v34 = *(v33 + 26);
    *(v33 + 16) = "Set the literal body of a post - invalid after setting a post parameter.";
    *v33 = "SetHTTPRequestRawPostBody";
    *(v33 + 8) = "SetHTTPRequestRawPostBody";
    *(v33 + 24) = 6;
    *(v33 + v34 + 27) = 30;
    v35 = v34 + 1;
    v34 += 2;
    *(v33 + v35 + 27) = 30;
    *(v33 + 26) = v34;
    v36 = v34 - 1;
    *(v33 + 25) = 0;
    if ( v36 >= 0 && *(v33 + v36 + 27) == 32 )
    {
      v37 = 0;
      do
      {
        --v36;
        ++v37;
      }
      while ( v36 != -1 && *(v33 + v36 + 27) == 32 );
      *(v33 + 25) = v37;
    }
    *(v33 + 64) = 1;
    *(v33 + 48) = CMemberScriptBinding2<CScriptHTTPRequest *,bool (CScriptHTTPRequest::*)(char const*,char const*),bool,char const*,char const*>::Call;
    *(v33 + 56) = CScriptHTTPRequest::SetHTTPRequestRawPostBody;
    return v2;
  }
  return result;
}


// CreateHTTPRequest  (line 830, @0x00000000027c0d10, libserver.so)  // inlines: CCallResult, CCallbackBase, CScriptHTTPRequest, Cancel, RegisterInstance<CScriptHTTPRequest>, ~CCallResult
// calls: Steam3Server, V_stricmp_fast, operator new, GetScriptDesc<CScriptHTTPRequest>, Warning, SteamAPI_UnregisterCallResult, operator delete, _Unwind_Resume
// strings: "OPTIONS", "Unknown HTTP method \"%s\".\n"
HSCRIPT __fastcall CreateHTTPRequest(const char *pszMethod, const char *pchAbsoluteURL)
{
  ISteamHTTP *m_pSteamHTTP; // r12
  int v5; // eax
  __int64 v6; // rsi
  HTTPRequestHandle v7; // r13d
  CScriptHTTPRequest *v8; // rax
  CScriptHTTPRequest *v9; // rbx
  IScriptVM *v10; // r12
  __int64 (__fastcall *v11)(IScriptVM *, ScriptClassDesc_t *, CScriptHTTPRequest *); // r13
  ScriptClassDesc_t *Script; // rax
  HSCRIPT result; // rax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax

  m_pSteamHTTP = Steam3Server()->m_pSteamHTTP;
  if ( m_pSteamHTTP != 0 )
  {
    v5 = V_stricmp_fast(pszMethod, "GET");
    v6 = 1;
    if ( v5 == 0 )
      goto LABEL_3;
    v14 = V_stricmp_fast(pszMethod, "HEAD");
    v6 = 2;
    if ( v14 == 0 )
      goto LABEL_3;
    v15 = V_stricmp_fast(pszMethod, "POST");
    v6 = 3;
    if ( v15 == 0 )
      goto LABEL_3;
    v16 = V_stricmp_fast(pszMethod, "PUT");
    v6 = 4;
    if ( v16 == 0 )
      goto LABEL_3;
    v17 = V_stricmp_fast(pszMethod, "DELETE");
    v6 = 5;
    if ( v17 == 0 )
      goto LABEL_3;
    if ( V_stricmp_fast(pszMethod, "OPTIONS") == 0 )
    {
      v6 = 6;
LABEL_3:
      v7 = (**m_pSteamHTTP)(m_pSteamHTTP, v6, pchAbsoluteURL);
      v8 = operator new(0x58u);
      v8->m_pHTTP = m_pSteamHTTP;
      v9 = v8;
      v8->m_hRequest = v7;
      v8->m_httpCallback.m_nCallbackFlags = 0;
      v8->m_httpCallback._vptr_CCallbackBase = off_42B4990;
      v8->m_httpCallback.m_hAPICall = 0;
      v8->m_httpCallback.m_pObj = 0;
      v8->m_httpCallback.m_Func.__pfn = 0;
      v10 = g_pScriptVM;
      v8->m_httpCallback.m_Func.__delta = 0;
      v8->m_httpCallback.m_iCallback = 2101;
      v8->m_hCallback = 0;
      v11 = *(*v10 + 184LL);
      Script = GetScriptDesc<CScriptHTTPRequest>(v8);
      result = v11(v10, Script, v9);
      v9->m_hInstance = result;
      return result;
    }
    Warning("Unknown HTTP method \"%s\".\n", pszMethod);
  }
  return 0;
}


// VScriptAddSchemaEnumToRootHelper  (line 882, @0x00000000027d5740, libserver.so)  // inlines: Count, Element, GetEnum, GetEnumerator, GetEnumeratorCount, GetName, GetPtr, GetValue, LookupEnum, SchemaMetaGetPtr2, _V_strcmp, operator[]
// calls: CUtlString::Get
// callers: CDOTAVScriptGameSystem::InstallScriptBindings
// strings: "MScriptDescription"
void __fastcall VScriptAddSchemaEnumToRootHelper(IScriptVM *pScriptVM, CSchemaType_DeclaredEnum *pEnum)
{
  __int64 v4; // r12
  __int64 v5; // r13
  signed int v6; // r15d
  __int64 *v7; // r9
  __int64 v8; // r10
  __int64 v9; // r11
  unsigned int v10; // edx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 *v13; // rax
  __int64 v14; // r9
  unsigned int v15; // edx
  __int64 v16; // r8
  void (__fastcall *v17)(_QWORD, char *, const char *); // r12
  const char *v18; // rax

  v4 = *(pEnum + 6);
  if ( v4 == 0 )
  {
    v17 = *(**(pEnum + 5) + 288LL);
    v18 = CUtlString::Get(pEnum + 1);
    v17(*(pEnum + 5), pEnum + 48, v18);
    v4 = *(pEnum + 6);
  }
  v5 = 0;
  v6 = 0;
  if ( *(v4 + 40) != 0 )
  {
    do
    {
      v7 = (*(v4 + 32) + v5);
      v8 = *v7;
      v9 = v7[2];
      v10 = abs32(*(v7 + 8));
      if ( v10 != 0 )
      {
        v11 = v7[3];
        v12 = v11 + 32LL * (v10 - 1) + 32;
        while ( strcmp(*v11, "MScriptDescription") != 0 )
        {
          v11 += 32;
          if ( v11 == v12 )
            goto LABEL_12;
        }
      }
      else
      {
LABEL_12:
        v15 = abs32(*(v7 + 12));
        if ( v15 == 0 )
        {
LABEL_17:
          v14 = 0;
          goto LABEL_10;
        }
        v11 = v7[5];
        v16 = v11 + 32LL * (v15 - 1) + 32;
        while ( strcmp(*v11, "MScriptDescription") != 0 )
        {
          v11 += 32;
          if ( v11 == v16 )
            goto LABEL_17;
        }
      }
      v13 = *(v11 + 24);
      if ( v13 == 0 )
        goto LABEL_17;
      v14 = *v13;
LABEL_10:
      ++v6;
      v5 += 56;
      (*(*pScriptVM + 256LL))(pScriptVM, 0, *v4, v8, v9, v14);
    }
    while ( v6 < abs32(*(v4 + 40)) );
  }
}


// CDOTAVScriptGameSystem::InstallScriptBindings  (line 905, @0x00000000027c14b0, libserver.so)  // inlines: AddParameterType, As<CSchemaType_DeclaredEnum>, CVariantBase, DOTAConnectionState_t_Name, DOTA_GC_TEAM_Name, DOTA_GameState_Name, DOTA_OVERHEAD_ALERT_Name, Get, RegisterInstance<CDOTAGameManager>, RegisterInstance<CDOTA_ProjectileManager>, RegisterInstance<CGridNav>, RegisterInstance<CScriptHeroList>, RegisterInstance<CScriptParticleManager>, RemoveAllParameters, SchemaTypeOf<AbilityLearnResult_t>, SchemaTypeOf<Attributes>, SchemaTypeOf<DAMAGE_TYPES>, SchemaTypeOf<DOTAAbilitySpeakTrigger_t>, SchemaTypeOf<DOTADamageFlag_t>, SchemaTypeOf<DOTAHUDVisibility_t>, SchemaTypeOf<DOTAInventoryFlags_t>, SchemaTypeOf<DOTALimits_t>, SchemaTypeOf<DOTAMinimapEvent_t>, SchemaTypeOf<DOTAModifierAttribute_t>, SchemaTypeOf<DOTAMusicStatus_t>, SchemaTypeOf<DOTAProjectileAttachment_t>, SchemaTypeOf<DOTAScriptInventorySlot_t>, SchemaTypeOf<DOTASlotType_t>, SchemaTypeOf<DOTASpeechType_t>, SchemaTypeOf<DOTATeam_t>, SchemaTypeOf<DOTAUnitAttackCapability_t>, SchemaTypeOf<DOTAUnitMoveCapability_t>, SchemaTypeOf<DOTA_ABILITY_BEHAVIOR>, SchemaTypeOf<DOTA_HeroPickState>, SchemaTypeOf<DOTA_MOTION_CONTROLLER_PRIORITY>, SchemaTypeOf<DOTA_RUNES>, SchemaTypeOf<DOTA_UNIT_TARGET_FLAGS>, SchemaTypeOf<DOTA_UNIT_TARGET_TEAM>, SchemaTypeOf<DOTA_UNIT_TARGET_TYPE>, SchemaTypeOf<DamageCategory_t>, SchemaTypeOf<EDOTA_ModifyGold_Reason>, SchemaTypeOf<EDOTA_ModifyXP_Reason>, SchemaTypeOf<EShareAbility>, SchemaTypeOf<GameActivity_t>, SchemaTypeOf<LuaModifierType>, SchemaTypeOf<ParticleAttachment_t>, SchemaTypeOf<UnitFilterResult>, SchemaTypeOf<attackfail>, SchemaTypeOf<modifierfunction>, SchemaTypeOf<modifierpriority>, SchemaTypeOf<modifierremove>, SchemaTypeOf<modifierstate>, SchemaTypeOf<quest_text_replace_values_t>, SchemaTypeOf<subquest_text_replace_values_t>, ScriptDeduceFunctionSignature<CEntityIndex, unsigned int>, ScriptDeduceFunctionSignature<CVariantBase<CVariantDefaultAllocator>, int, const Vector&, HSCRIPT__*, float, int, int, int, int, bool>, ScriptDeduceFunctionSignature<CVariantBase<CVariantDefaultAllocator>, int, const Vector&, const Vector&, HSCRIPT__*, float, int, int, int>, ScriptDeduceFunctionSignature<HSCRIPT__*, HSCRIPT__*, HSCRIPT__*, char const*, HSCRIPT__*, Vector, int, bool>, ScriptDeduceFunctionSignature<HSCRIPT__*, HSCRIPT__*, Vector>, ScriptDeduceFunctionSignature<HSCRIPT__*, Vector, HSCRIPT__*>, ScriptDeduceFunctionSignature<HSCRIPT__*, char const*, HSCRIPT__*, HSCRIPT__*>, ScriptDeduceFunctionSignature<HSCRIPT__*, char const*, HSCRIPT__*>, ScriptDeduceFunctionSignature<HSCRIPT__*, char const*, char const*>, ScriptDeduceFunctionSignature<HSCRIPT__*, char const*, const Vector&, bool, HSCRIPT__*, HSCRIPT__*, int>, ScriptDeduceFunctionSignature<Vector, Vector, HSCRIPT__*>, ScriptDeduceFunctionSignature<Vector, float>, ScriptDeduceFunctionSignature<bool, HSCRIPT__*, Vector, bool>, ScriptDeduceFunctionSignature<bool, int>, ScriptDeduceFunctionSignature<char const*, int>, ScriptDeduceFunctionSignature<char const*>, ScriptDeduceFunctionSignature<float, HSCRIPT__*>, ScriptDeduceFunctionSignature<float, Vector, HSCRIPT__*>, ScriptDeduceFunctionSignature<float, float, float>, ScriptDeduceFunctionSignature<float, int, int>, ScriptDeduceFunctionSignature<float>, ScriptDeduceFunctionSignature<int, HSCRIPT__*, HSCRIPT__*, HSCRIPT__*, float, float, float, float, char const*>, ScriptDeduceFunctionSignature<int, HSCRIPT__*, int, int, int, int>, ScriptDeduceFunctionSignature<int, char const*, const Vector&, bool, HSCRIPT__*, HSCRIPT__*, int, HSCRIPT__*>, ScriptDeduceFunctionSignature<int, char const*>, ScriptDeduceFunctionSignature<int, int, int, int>, ScriptDeduceFunctionSignature<int, int, int>, ScriptDeduceFunctionSignature<int, int>, ScriptDeduceFunctionSignature<void, HSCRIPT__*, HSCRIPT__*>, ScriptDeduceFunctionSignature<void, HSCRIPT__*, char const*, char const*, char const*, char const*, int>, ScriptDeduceFunctionSignature<void, HSCRIPT__*, int, HSCRIPT__*, int, HSCRIPT__*>, ScriptDeduceFunctionSignature<void, HSCRIPT__*>, ScriptDeduceFunctionSignature<void, Vector, char const*, HSCRIPT__*>, ScriptDeduceFunctionSignature<void, Vector, float>, ScriptDeduceFunctionSignature<void, bool>, ScriptDeduceFunctionSignature<void, char const*, HSCRIPT__*, int>, ScriptDeduceFunctionSignature<void, char const*, HSCRIPT__*>, ScriptDeduceFunctionSignature<void, char const*, char const*, HSCRIPT__*>, ScriptDeduceFunctionSignature<void, char const*, char const*, char const*, char const*, int>, ScriptDeduceFunctionSignature<void, char const*, char const*, int>, ScriptDeduceFunctionSignature<void, char const*, int, Vector>, ScriptDeduceFunctionSignature<void, char const*, int, int, float>, ScriptDeduceFunctionSignature<void, char const*, int>, ScriptDeduceFunctionSignature<void, char const*>, ScriptDeduceFunctionSignature<void, float>, ScriptDeduceFunctionSignature<void, int, HSCRIPT__*, int, int, int, int>, ScriptDeduceFunctionSignature<void, int, const Vector&, float, float, bool>, ScriptDeduceFunctionSignature<void, int, int, int, int>, ScriptDeduceFunctionSignature<void, int>, ScriptDeduceFunctionSignature<void>, ScriptFuncDescriptor_t, ScriptFunctionBinding_t, SetDescription, SetFunctionName, SetReturnType, SetScriptName, SetValue, State_Order, dotaunitorder_t_Name, ~CVariantBase
// calls: CVScriptGameSystem::InstallScriptBindings, CSchemaType::InternalAs, VScriptAddSchemaEnumToRootHelper, CVariantBase<CVariantDefaultAllocator>::Free, DOTA_GameState_descriptor, google::protobuf::internal::NameOfEnum(google::protobuf::EnumDescriptor const*,int), DOTA_GC_TEAM_descriptor, DOTAConnectionState_t_descriptor, dotaunitorder_t_descriptor, DOTA_OVERHEAD_ALERT_descriptor, GetScriptDesc<CScriptHeroList>, GetScriptDesc<CGridNav> (25 total)
// strings: "Get a random int within a range", "Get a random float within a range", "Get a random 2D vector of the given length.", "RandomYawVector", "Rolls a number from 1 to 100 and returns true if the roll is less than or equal to the nu, "Gets the world's minimum X position." (40 total)
// globals: `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding, CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding, CNonMemberScriptBinding2<int (*)(int,int),int,int,int>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,int,CVariantBase<CVariantDefaultAllocator> *, CNonMemberScriptBinding2<float (*)(float,float),float,float,float>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,int,CVariantBase<CVariantDefault, CNonMemberScriptBinding1<Vector (*)(float),Vector,float>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,int,CVariantBase<CVariantDefaultAllocator>, RandomYawVector(float), CNonMemberScriptBinding1<bool (*)(int),bool,int>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,int,CVariantBase<CVariantDefaultAllocator> *), RollPercentage(int) (18 total)
void __fastcall CDOTAVScriptGameSystem::InstallScriptBindings(CDOTAVScriptGameSystem *const this)
{
  CSchemaType *v1; // rdi
  CSchemaType_DeclaredEnum *v2; // rax
  CSchemaType *v3; // rdi
  CSchemaType_DeclaredEnum *v4; // rax
  CSchemaType *v5; // rdi
  __int64 v6; // r13
  CSchemaType_DeclaredEnum *v7; // rax
  void (__fastcall *v8)(IScriptVM *, _QWORD, const char *, _QWORD, _QWORD, const char *); // r15
  unsigned int v9; // r14d
  google::protobuf::internal *v10; // rax
  const google::protobuf::EnumDescriptor *v11; // rsi
  int v12; // edx
  _QWORD *v13; // rax
  google::protobuf::internal *v14; // rax
  int v15; // edx
  _QWORD *v16; // rax
  google::protobuf::internal *v17; // rax
  int v18; // edx
  _QWORD *v19; // rax
  CSchemaType *v20; // rdi
  CSchemaType_DeclaredEnum *v21; // rax
  unsigned int v22; // r13d
  google::protobuf::internal *v23; // rax
  int v24; // edx
  _QWORD *v25; // rax
  CSchemaType *v26; // rdi
  CSchemaType_DeclaredEnum *v27; // rax
  CSchemaType *v28; // rdi
  CSchemaType_DeclaredEnum *v29; // rax
  CSchemaType *v30; // rdi
  CSchemaType_DeclaredEnum *v31; // rax
  CSchemaType *v32; // rdi
  CSchemaType_DeclaredEnum *v33; // rax
  CSchemaType *v34; // rdi
  CSchemaType_DeclaredEnum *v35; // rax
  CSchemaType *v36; // rdi
  CSchemaType_DeclaredEnum *v37; // rax
  CSchemaType *v38; // rdi
  CSchemaType_DeclaredEnum *v39; // rax
  CSchemaType *v40; // rdi
  CSchemaType_DeclaredEnum *v41; // rax
  CSchemaType *v42; // rdi
  CSchemaType_DeclaredEnum *v43; // rax
  CSchemaType *v44; // rdi
  CSchemaType_DeclaredEnum *v45; // rax
  CSchemaType *v46; // rdi
  CSchemaType_DeclaredEnum *v47; // rax
  CSchemaType *v48; // rdi
  unsigned int v49; // r13d
  CSchemaType_DeclaredEnum *v50; // rax
  google::protobuf::internal *v51; // rax
  int v52; // edx
  _QWORD *v53; // rax
  CSchemaType *v54; // rdi
  CSchemaType_DeclaredEnum *v55; // rax
  CSchemaType *v56; // rdi
  CSchemaType_DeclaredEnum *v57; // rax
  CSchemaType *v58; // rdi
  CSchemaType_DeclaredEnum *v59; // rax
  IScriptVM *v60; // r13
  __int64 (__fastcall *v61)(IScriptVM *, ScriptClassDesc_t *, CScriptHeroList *); // r14
  ScriptClassDesc_t *Script; // rax
  uint64 v63; // rax
  void (__fastcall *v64)(IScriptVM *, _QWORD, const char *, CVariantBase<CVariantDefaultAllocator> *); // r8
  IScriptVM *v65; // r13
  __int64 (__fastcall *v66)(IScriptVM *, ScriptClassDesc_t *, CGridNav *); // r15
  ScriptClassDesc_t *v67; // rax
  uint64 v68; // rax
  void (__fastcall *v69)(IScriptVM *, _QWORD, char *, CVariantBase<CVariantDefaultAllocator> *); // r8
  IScriptVM *v70; // r13
  __int64 (__fastcall *v71)(IScriptVM *, ScriptClassDesc_t *, CDOTA_ProjectileManager *); // r15
  ScriptClassDesc_t *v72; // rax
  uint64 v73; // rax
  void (__fastcall *v74)(IScriptVM *, _QWORD, const char *, CVariantBase<CVariantDefaultAllocator> *); // r8
  CDOTAGameManager *v75; // rax
  IScriptVM *v76; // r13
  CDOTAGameManager *v77; // r14
  __int64 (__fastcall *v78)(IScriptVM *, ScriptClassDesc_t *, CDOTAGameManager *); // r15
  ScriptClassDesc_t *v79; // rax
  uint64 v80; // rax
  void (__fastcall *v81)(IScriptVM *, _QWORD, const char *, CVariantBase<CVariantDefaultAllocator> *); // r8
  IScriptVM *v82; // r13
  __int64 (__fastcall *v83)(IScriptVM *, ScriptClassDesc_t *, CScriptParticleManager *); // r14
  ScriptClassDesc_t *v84; // rax
  uint64 v85; // rax
  void (__fastcall *v86)(IScriptVM *, _QWORD, char *, CVariantBase<CVariantDefaultAllocator> *); // r8
  void (__fastcall *v87)(IScriptVM *, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *v88; // rax
  void (__fastcall *v89)(IScriptVM *, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *v90; // rax
  void (__fastcall *v91)(IScriptVM *, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *v92; // rax
  void (__fastcall *v93)(IScriptVM *, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *v94; // rax
  void (__fastcall *v95)(IScriptVM *, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *v96; // rax
  CSchemaType *v97; // rdi
  CSchemaType_DeclaredEnum *v98; // rax
  CSchemaType *v99; // rdi
  CSchemaType_DeclaredEnum *v100; // rax
  CSchemaType *v101; // rdi
  CSchemaType_DeclaredEnum *v102; // rax
  CSchemaType *v103; // rdi
  CSchemaType_DeclaredEnum *v104; // rax
  CSchemaType *v105; // rdi
  CSchemaType_DeclaredEnum *v106; // rax
  CSchemaType *v107; // rdi
  CSchemaType_DeclaredEnum *v108; // rax
  CSchemaType *v109; // rdi
  CSchemaType_DeclaredEnum *v110; // rax
  CSchemaType *v111; // rdi
  CSchemaType_DeclaredEnum *v112; // rax
  CSchemaType *v113; // rdi
  CSchemaType_DeclaredEnum *v114; // rax
  CSchemaType *v115; // rdi
  CSchemaType_DeclaredEnum *v116; // rax
  CSchemaType *v117; // rdi
  CSchemaType_DeclaredEnum *v118; // rax
  CSchemaType *v119; // rdi
  CSchemaType_DeclaredEnum *v120; // rax
  CSchemaType *v121; // rdi
  CSchemaType_DeclaredEnum *v122; // rax
  CSchemaType *v123; // rdi
  CSchemaType_DeclaredEnum *v124; // rax
  CSchemaType *v125; // rdi
  CSchemaType_DeclaredEnum *v126; // rax
  CSchemaType *v127; // rdi
  CSchemaType_DeclaredEnum *v128; // rax
  CSchemaType *v129; // rdi
  CSchemaType_DeclaredEnum *v130; // rax
  CSchemaType *v131; // rdi
  CSchemaType_DeclaredEnum *v132; // rax
  CSchemaType *v133; // rdi
  CSchemaType_DeclaredEnum *v134; // rax
  CSchemaType *v135; // rdi
  CSchemaType_DeclaredEnum *v136; // rax
  CSchemaType *v137; // rdi
  CSchemaType_DeclaredEnum *v138; // rax
  ISchemaSystemTypeScope *v139; // rax
  ISchemaSystemTypeScope *v140; // rax
  ISchemaSystemTypeScope *v141; // rax
  ISchemaSystemTypeScope *v142; // rax
  ISchemaSystemTypeScope *v143; // rax
  ISchemaSystemTypeScope *v144; // rax
  ISchemaSystemTypeScope *v145; // rax
  ISchemaSystemTypeScope *v146; // rax
  ISchemaSystemTypeScope *v147; // rax
  ISchemaSystemTypeScope *v148; // rax
  ISchemaSystemTypeScope *v149; // rax
  ISchemaSystemTypeScope *v150; // rax
  ISchemaSystemTypeScope *v151; // rax
  ISchemaSystemTypeScope *v152; // rax
  ISchemaSystemTypeScope *v153; // rax
  ISchemaSystemTypeScope *v154; // rax
  ISchemaSystemTypeScope *v155; // rax
  ISchemaSystemTypeScope *v156; // rax
  ISchemaSystemTypeScope *v157; // rax
  ISchemaSystemTypeScope *v158; // rax
  ISchemaSystemTypeScope *v159; // rax
  ISchemaSystemTypeScope *v160; // rax
  ISchemaSystemTypeScope *v161; // rax
  ISchemaSystemTypeScope *v162; // rax
  ISchemaSystemTypeScope *v163; // rax
  ISchemaSystemTypeScope *v164; // rax
  ISchemaSystemTypeScope *v165; // rax
  ISchemaSystemTypeScope *v166; // rax
  ISchemaSystemTypeScope *v167; // rax
  ISchemaSystemTypeScope *v168; // rax
  ISchemaSystemTypeScope *v169; // rax
  ISchemaSystemTypeScope *v170; // rax
  ISchemaSystemTypeScope *v171; // rax
  ISchemaSystemTypeScope *v172; // rax
  ISchemaSystemTypeScope *v173; // rax
  ISchemaSystemTypeScope *v174; // rax
  ISchemaSystemTypeScope *v175; // rax
  ISchemaSystemTypeScope *v176; // rax
  ISchemaSystemTypeScope *v177; // rax
  ISchemaSystemTypeScope *v178; // rax
  CVariantBase<CVariantDefaultAllocator> v179; // [rsp+0h] [rbp-40h] BYREF

  CVScriptGameSystem::InstallScriptBindings(this);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Get a random int within a range";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "RandomInt";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "RandomInt";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<int (*)(int,int),int,int,int>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = &RandomInt;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Get a random float within a range";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "RandomFloat";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "RandomFloat";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<float (*)(float,float),float,float,float>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = &RandomFloat;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Get a random 2D vector of the given length.";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "RandomVector";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "RandomYawVector";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<Vector (*)(float),Vector,float>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 3;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = RandomYawVector;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Rolls a number from 1 to 100 an"
                                                                                         "d returns true if the roll is l"
                                                                                         "ess than or equal to the number specified";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "RollPercentage";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "RollPercentage";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<bool (*)(int),bool,int>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 6;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = RollPercentage;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Gets the world's minimum X position.";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "GetWorldMinX";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "GetWorldMinX";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding0<float (*)(void),float>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = GetWorldMinX;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Gets the world's minimum Y position.";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "GetWorldMinY";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "GetWorldMinY";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding0<float (*)(void),float>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = GetWorldMinY;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Gets the world's maximum X position.";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "GetWorldMaxX";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "GetWorldMaxX";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding0<float (*)(void),float>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = GetWorldMaxX;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Gets the world's maximum Y position.";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "GetWorldMaxY";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "GetWorldMaxY";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding0<float (*)(void),float>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = GetWorldMaxY;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Get the current real world time";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "GetSystemTime";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "GetSystemTime";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding0<char const* (*)(void),char const*>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = GetSystemTime;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Get the current real world date";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "GetSystemDate";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "GetSystemDate";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding0<char const* (*)(void),char const*>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = GetSystemDate;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Pause or unpause the game.";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "PauseGame";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "ScriptPauseGame";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<void (*)(bool),void,bool>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 6;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = ScriptPauseGame;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Play named sound for all players";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "EmitGlobalSound";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_EmitGlobalSound";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<void (*)(char const*),void,char const*>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_EmitGlobalSound;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Creates a DOTA unit by its dota"
                                                                                         "_npc_units.txt name";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "CreateUnitByName";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "DOTA_VScript_CreateUnitByName";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding6<HSCRIPT__ * (*)(char const*,Vector const&,bool,HSCRIPT__ *,HSCRIPT__ *,int),HSCRIPT__ *,char const*,Vector const&,bool,HSCRIPT__ *,HSCRIPT__ *,int>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 3;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 6;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[4] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[5] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 6;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = DOTA_VScript_CreateUnitByName;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Precaches a DOTA unit from a ta"
                                                                                         "ble of entity key values.";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "PrecacheUnitFromTableSync";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "DOTA_VScript_PrecacheUnitFromTableSync";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(HSCRIPT__ *,HSCRIPT__ *),void,HSCRIPT__ *,HSCRIPT__ *>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = DOTA_VScript_PrecacheUnitFromTableSync;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Precaches a DOTA unit from a ta"
                                                                                         "ble of entity key values.";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "PrecacheUnitFromTableAsync";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "DOTA_VScript_PrecacheUnitFromTableAsync";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(HSCRIPT__ *,HSCRIPT__ *),void,HSCRIPT__ *,HSCRIPT__ *>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = DOTA_VScript_PrecacheUnitFromTableAsync;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Creates a DOTA unit by its dota"
                                                                                         "_npc_units.txt name from a tabl"
                                                                                         "e of entity key values and a po"
                                                                                         "sition to spawn at.";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "CreateUnitFromTable";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "DOTA_VScript_CreateUnitFromTable";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<HSCRIPT__ * (*)(HSCRIPT__ *,Vector),HSCRIPT__ *,HSCRIPT__ *,Vector>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 3;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = DOTA_VScript_CreateUnitFromTable;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Creates a DOTA unit by its dota"
                                                                                         "_npc_units.txt name";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "CreateUnitByNameAsync";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "DOTA_VScript_CreateUnitByNameAsync";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding7<int (*)(char const*,Vector const&,bool,HSCRIPT__ *,HSCRIPT__ *,int,HSCRIPT__ *),int,char const*,Vector const&,bool,HSCRIPT__ *,HSCRIPT__ *,int,HSCRIPT__ *>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 3;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 6;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[4] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[5] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[6] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 7;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = DOTA_VScript_CreateUnitByNameAsync;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Precaches a DOTA unit by its do"
                                                                                         "ta_npc_units.txt name";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "PrecacheUnitByNameSync";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "DOTA_VScript_PrecacheUnitByNameSync";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding3<void (*)(char const*,HSCRIPT__ *,int),void,char const*,HSCRIPT__ *,int>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 3;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = DOTA_VScript_PrecacheUnitByNameSync;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Asynchronously precaches a DOTA"
                                                                                         " unit by its dota_npc_units.txt"
                                                                                         " name, provides a callback when it's finished.";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "PrecacheUnitByNameAsync";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "DOTA_VScript_PrecacheUnitByNameAsync";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding3<void (*)(char const*,HSCRIPT__ *,int),void,char const*,HSCRIPT__ *,int>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 3;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = DOTA_VScript_PrecacheUnitByNameAsync;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Precaches a DOTA item by its do"
                                                                                         "ta_npc_items.txt name";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "PrecacheItemByNameSync";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "DOTA_VScript_PrecacheItemByNameSync";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(char const*,HSCRIPT__ *),void,char const*,HSCRIPT__ *>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = DOTA_VScript_PrecacheItemByNameSync;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Asynchronously precaches a DOTA"
                                                                                         " item by its dota_npc_items.txt"
                                                                                         " name, provides a callback when it's finished.";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "PrecacheItemByNameAsync";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "DOTA_VScript_PrecacheItemByNameAsync";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(char const*,HSCRIPT__ *),void,char const*,HSCRIPT__ *>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = DOTA_VScript_PrecacheItemByNameAsync;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Creates a DOTA hero by its dota"
                                                                                         "_npc_units.txt name and sets it"
                                                                                         " as the given player's controlled hero";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "CreateHeroForPlayer";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "DOTA_VScript_Hero_Spawn";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<HSCRIPT__ * (*)(char const*,HSCRIPT__ *),HSCRIPT__ *,char const*,HSCRIPT__ *>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = DOTA_VScript_Hero_Spawn;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Create a DOTA item";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "CreateItem";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "DOTA_VScript_CreateItem";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding3<HSCRIPT__ * (*)(char const*,HSCRIPT__ *,HSCRIPT__ *),HSCRIPT__ *,char const*,HSCRIPT__ *,HSCRIPT__ *>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 3;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = DOTA_VScript_CreateItem;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Get the cost of an item by name.";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "GetItemCost";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "GetItemCost";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<int (*)(char const*),int,char const*>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = GetItemCost;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Create a physical item at a given location";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "CreateItemOnPositionSync";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "VScript_CreateItemOnPositionSync";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<HSCRIPT__ * (*)(Vector,HSCRIPT__ *),HSCRIPT__ *,Vector,HSCRIPT__ *>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 3;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = VScript_CreateItemOnPositionSync;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Create a physical item at a giv"
                                                                                         "en location, can start in air ("
                                                                                         "but doesn't clear a space)";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "CreateItemOnPositionForLaunch";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "VScript_CreateItemOnPositionForLaunch";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<HSCRIPT__ * (*)(Vector,HSCRIPT__ *),HSCRIPT__ *,Vector,HSCRIPT__ *>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 3;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = VScript_CreateItemOnPositionForLaunch;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Place a unit somewhere not already occupied.";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "FindClearSpaceForUnit";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "FindClearSpaceForUnit_Script";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding3<bool (*)(HSCRIPT__ *,Vector,bool),bool,HSCRIPT__ *,Vector,bool>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 6;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 3;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 6;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 3;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = FindClearSpaceForUnit_Script;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Finds the units in a given radi"
                                                                                         "us with the given flags.";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "FindUnitsInRadius";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "FindUnitsInRadius_Script";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding9<CVariantBase<CVariantDefaultAllocator> (*)(int,Vector const&,HSCRIPT__ *,float,int,int,int,int,bool),CVariantBase<CVariantDefaultAllocator>,int,Vector const&,HSCRIPT__ *,float,int,int,int,int,bool>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 32;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 3;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[4] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[5] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[6] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[7] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[8] = 6;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 9;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = FindUnitsInRadius_Script;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Find units that intersect the g"
                                                                                         "iven line with the given flags.";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "FindUnitsInLine";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_FindUnitsInLine";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding8<CVariantBase<CVariantDefaultAllocator> (*)(int,Vector const&,Vector const&,HSCRIPT__ *,float,int,int,int),CVariantBase<CVariantDefaultAllocator>,int,Vector const&,Vector const&,HSCRIPT__ *,float,int,int,int>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 32;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 3;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 3;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[4] = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[5] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[6] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[7] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 8;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_FindUnitsInLine;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Returns the supplied position m"
                                                                                         "oved to the ground. Second para"
                                                                                         "meter is an NPC for measuring m"
                                                                                         "ovement collision hull offset.";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "GetGroundPosition";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_GetGroundPosition";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<Vector (*)(Vector,HSCRIPT__ *),Vector,Vector,HSCRIPT__ *>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 3;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 3;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_GetGroundPosition;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "GetGroundHeight";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_GetGroundHeight";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<float (*)(Vector,HSCRIPT__ *),float,Vector,HSCRIPT__ *>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 3;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_GetGroundHeight;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Manually precache a single resource";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "PrecacheResource";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_PrecacheResource";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding3<void (*)(char const*,char const*,HSCRIPT__ *),void,char const*,char const*,HSCRIPT__ *>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 3;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_PrecacheResource;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "( modelName, context ) - Manual"
                                                                                         "ly precache a single model";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "PrecacheModel";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_PrecacheModel";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(char const*,HSCRIPT__ *),void,char const*,HSCRIPT__ *>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_PrecacheModel;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "( teamNumber, r, g, b )";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "SetTeamCustomHealthbarColor";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_SetTeamCustomHealthbarColor";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding4<void (*)(int,int,int,int),void,int,int,int,int>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 4;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_SetTeamCustomHealthbarColor;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "( teamNumber )";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "ClearTeamCustomHealthbarColor";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_ClearTeamCustomHealthbarColor";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<void (*)(int),void,int>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_ClearTeamCustomHealthbarColor;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Add temporary vision for a give"
                                                                                         "n team ( nTeamID, vLocation, fl"
                                                                                         "Radius, flDuration, bObstructedVision)";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "AddFOWViewer";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_AddFOWViewer";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding5<void (*)(int,Vector const&,float,float,bool),void,int,Vector const&,float,float,bool>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 3;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[4] = 6;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_AddFOWViewer;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Check and fix units that have b"
                                                                                         "een assigned a position inside "
                                                                                         "collision radius of other NPCs.";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "ResolveNPCPositions";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_ResolveNPCPositions";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(Vector,float),void,Vector,float>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 3;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_ResolveNPCPositions;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Emit a sound on a location from"
                                                                                         " a unit. (vLocation, soundName, hCaster).";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "EmitSoundOnLocationWithCaster";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_EmitSoundLocationWithCaster";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding3<void (*)(Vector,char const*,HSCRIPT__ *),void,Vector,char const*,HSCRIPT__ *>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 3;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 3;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_EmitSoundLocationWithCaster;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Emit a sound on a location from"
                                                                                         " a unit, only for players allie"
                                                                                         "d with that unit (vLocation, so"
                                                                                         "undName, hCaster";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "EmitSoundOnLocationForAllies";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_EmitSoundOnLocationForAllies";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding3<void (*)(Vector,char const*,HSCRIPT__ *),void,Vector,char const*,HSCRIPT__ *>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 3;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 3;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_EmitSoundOnLocationForAllies;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Emit an announcer sound for all players.";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "EmitAnnouncerSound";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_EmitAnnouncerSound";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<void (*)(char const*),void,char const*>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_EmitAnnouncerSound;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Emit an announcer sound for a team.";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "EmitAnnouncerSoundForTeam";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_EmitAnnouncerSoundForTeam";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(char const*,int),void,char const*,int>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_EmitAnnouncerSoundForTeam;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Emit an announcer sound for a t"
                                                                                         "eam at a specific location.";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "EmitAnnouncerSoundForTeamOnLocation";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_EmitAnnouncerSoundForTeamOnLocation";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding3<void (*)(char const*,int,Vector),void,char const*,int,Vector>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 3;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 3;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_EmitAnnouncerSoundForTeamOnLocation;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Emit an announcer sound for a player.";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "EmitAnnouncerSoundForPlayer";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_EmitAnnouncerSoundForPlayer";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(char const*,int),void,char const*,int>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_EmitAnnouncerSoundForPlayer;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Start a minimap event. (nTeamID"
                                                                                         ", hEntity, nXCoord, nYCoord, nE"
                                                                                         "ventType, nEventDuration).";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "MinimapEvent";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_MinimapEvent";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding6<void (*)(int,HSCRIPT__ *,int,int,int,int),void,int,HSCRIPT__ *,int,int,int,int>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[4] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[5] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 6;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_MinimapEvent;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Create a modifier not associate"
                                                                                         "d with an NPC. ( hCaster, hAbil"
                                                                                         "ity, modifierName, paramTable, "
                                                                                         "vOrigin, nTeamNumber, bPhantomBlocker )";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "CreateModifierThinker";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_CreateModifierThinker";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding7<HSCRIPT__ * (*)(HSCRIPT__ *,HSCRIPT__ *,char const*,HSCRIPT__ *,Vector,int,bool),HSCRIPT__ *,HSCRIPT__ *,HSCRIPT__ *,char const*,HSCRIPT__ *,Vector,int,bool>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[4] = 3;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[5] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[6] = 6;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 7;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_CreateModifierThinker;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "GetFrostyPointsForRound";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "GetFrostyPointsForRound";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding3<int (*)(int,int,int),int,int,int,int>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 3;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = GetFrostyPointsForRound;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "GetGoldFrostyPointsForRound";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "GetGoldFrostyPointsForRound";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding3<int (*)(int,int,int),int,int,int,int>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 3;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = GetGoldFrostyPointsForRound;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "GetFrostyBoostAmount";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "GetFrostyBoostAmount";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<float (*)(int,int),float,int,int>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = GetFrostyBoostAmount;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "GetGoldFrostyBoostAmount";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "GetGoldFrostyBoostAmount";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<float (*)(int,int),float,int,int>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = GetGoldFrostyBoostAmount;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "SendFrostyPointsMessageToGC";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "SendFrostyPointsMessageToGC";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<void (*)(HSCRIPT__ *),void,HSCRIPT__ *>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = SendFrostyPointsMessageToGC;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "SendFrostivusTimeElapsedToGC";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "SendFrostivusTimeElapsedToGC";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding0<void (*)(void),void>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = SendFrostivusTimeElapsedToGC;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "UpdateEventPoints";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "UpdateEventPoints";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<void (*)(HSCRIPT__ *),void,HSCRIPT__ *>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = UpdateEventPoints;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "( int teamID )";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "GetTeamName";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_GetTeamName";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<char const* (*)(int),char const*,int>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_GetTeamName;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "( int teamID )";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "GetTeamHeroKills";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_GetTeamHeroKills";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<int (*)(int),int,int>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_GetTeamHeroKills;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Set the limit on the pathfinding search space.";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "LimitPathingSearchDepth";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "CGridNavPath::LimitPathingSearchDepth";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<void (*)(float),void,float>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = CGridNavPath::LimitPathingSearchDepth;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "(hAttacker, hTarget, hAbility, "
                                                                                         "fDamage, fRadius, effectName)";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "DoCleaveAttack";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_DoCleaveAttack";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding8<int (*)(HSCRIPT__ *,HSCRIPT__ *,HSCRIPT__ *,float,float,float,float,char const*),int,HSCRIPT__ *,HSCRIPT__ *,HSCRIPT__ *,float,float,float,float,char const*>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[4] = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[5] = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[6] = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[7] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 8;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_DoCleaveAttack;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "(int nPct)";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "RollPercentage";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_RollPercentage";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<bool (*)(int),bool,int>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 6;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_RollPercentage;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  v1 = SchemaTypeOf<quest_text_replace_values_t>(void)::s_pTypeOf;
  if ( SchemaTypeOf<quest_text_replace_values_t>(void)::s_pTypeOf == 0 )
  {
    v139 = SchemaTypeScope();
    v1 = (*(*v139 + 96LL))(v139, "quest_text_replace_values_t");
    SchemaTypeOf<quest_text_replace_values_t>(void)::s_pTypeOf = v1;
  }
  v2 = CSchemaType::InternalAs(
         v1,
         SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
         SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v2);
  v3 = SchemaTypeOf<subquest_text_replace_values_t>(void)::s_pTypeOf;
  if ( SchemaTypeOf<subquest_text_replace_values_t>(void)::s_pTypeOf == 0 )
  {
    v140 = SchemaTypeScope();
    v3 = (*(*v140 + 96LL))(v140, "subquest_text_replace_values_t");
    SchemaTypeOf<subquest_text_replace_values_t>(void)::s_pTypeOf = v3;
  }
  v4 = CSchemaType::InternalAs(
         v3,
         SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
         SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v4);
  v179.m_type = 5;
  v179.m_flags = 0;
  v179.m_int = 17;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "DOTA_ITEM_MAX", &v179);
  CVariantBase<CVariantDefaultAllocator>::Free(&v179);
  v179.m_type = 5;
  v179.m_flags = 0;
  v179.m_int = 9;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "DOTA_ITEM_INVENTORY_SIZE", &v179);
  CVariantBase<CVariantDefaultAllocator>::Free(&v179);
  v179.m_type = 5;
  v179.m_flags = 0;
  v179.m_int = 6;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "DOTA_ITEM_STASH_SIZE", &v179);
  CVariantBase<CVariantDefaultAllocator>::Free(&v179);
  v179.m_type = 5;
  v179.m_flags = 0;
  v179.m_int = 9;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "DOTA_ITEM_STASH_MIN", &v179);
  CVariantBase<CVariantDefaultAllocator>::Free(&v179);
  v179.m_type = 5;
  v179.m_flags = 0;
  v179.m_int = 15;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "DOTA_ITEM_STASH_MAX", &v179);
  CVariantBase<CVariantDefaultAllocator>::Free(&v179);
  v179.m_flags = 0;
  v179.m_type = 5;
  v179.m_int = 15;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "DOTA_ITEM_TRANSIENT_ITEM", &v179);
  CVariantBase<CVariantDefaultAllocator>::Free(&v179);
  v179.m_type = 5;
  v179.m_flags = 0;
  v179.m_int = 16;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "DOTA_ITEM_TRANSIENT_RECIPE", &v179);
  CVariantBase<CVariantDefaultAllocator>::Free(&v179);
  v179.m_type = 5;
  v179.m_flags = 0;
  v179.m_int = 18;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "DOTA_ITEM_TRANSIENT_CAST_ITEM", &v179);
  CVariantBase<CVariantDefaultAllocator>::Free(&v179);
  v5 = SchemaTypeOf<DOTAInventoryFlags_t>(void)::s_pTypeOf;
  if ( SchemaTypeOf<DOTAInventoryFlags_t>(void)::s_pTypeOf == 0 )
  {
    v177 = SchemaTypeScope();
    v5 = (*(*v177 + 96LL))(v177, "DOTAInventoryFlags_t");
    SchemaTypeOf<DOTAInventoryFlags_t>(void)::s_pTypeOf = v5;
  }
  v6 = 0;
  v7 = CSchemaType::InternalAs(
         v5,
         SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
         SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v7);
  do
  {
    v8 = *(*g_pScriptVM + 256LL);
    v9 = DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING[v6];
    v10 = DOTA_GameState_descriptor();
    v11 = v6++;
    v13 = google::protobuf::internal::NameOfEnum(v10, v11, v12);
    v8(g_pScriptVM, 0, "DOTA_GameState", *v13, v9, "");
  }
  while ( v6 != 11 );
  LOBYTE(v6) = 0;
  do
  {
    v179.m_int = v6;
    v179.m_type = 5;
    v179.m_flags = 0;
    v14 = DOTA_GC_TEAM_descriptor();
    v16 = google::protobuf::internal::NameOfEnum(v14, v6, v15);
    (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, *v16, &v179);
    LODWORD(v6) = v6 + 1;
    CVariantBase<CVariantDefaultAllocator>::Free(&v179);
  }
  while ( v6 != 6 );
  LOBYTE(v6) = 0;
  do
  {
    v179.m_int = v6;
    v179.m_type = 5;
    v179.m_flags = 0;
    v17 = DOTAConnectionState_t_descriptor();
    v19 = google::protobuf::internal::NameOfEnum(v17, v6, v18);
    (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, *v19, &v179);
    LODWORD(v6) = v6 + 1;
    CVariantBase<CVariantDefaultAllocator>::Free(&v179);
  }
  while ( v6 != 7 );
  v20 = SchemaTypeOf<EDOTA_ModifyGold_Reason>(void)::s_pTypeOf;
  if ( SchemaTypeOf<EDOTA_ModifyGold_Reason>(void)::s_pTypeOf == 0 )
  {
    v178 = SchemaTypeScope();
    v20 = (*(*v178 + 96LL))(v178, "EDOTA_ModifyGold_Reason");
    SchemaTypeOf<EDOTA_ModifyGold_Reason>(void)::s_pTypeOf = v20;
  }
  v21 = CSchemaType::InternalAs(
          v20,
          SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
          SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v21);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  v22 = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Issue an order from a script table";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "ExecuteOrderFromTable";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_ExecuteOrderFromTable";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<void (*)(HSCRIPT__ *),void,HSCRIPT__ *>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_ExecuteOrderFromTable;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  do
  {
    v179.m_int = v22;
    v179.m_type = 5;
    v179.m_flags = 0;
    v23 = dotaunitorder_t_descriptor();
    v25 = google::protobuf::internal::NameOfEnum(v23, v22, v24);
    (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, *v25, &v179);
    ++v22;
    CVariantBase<CVariantDefaultAllocator>::Free(&v179);
  }
  while ( v22 != 34 );
  v26 = SchemaTypeOf<DOTAUnitAttackCapability_t>(void)::s_pTypeOf;
  if ( SchemaTypeOf<DOTAUnitAttackCapability_t>(void)::s_pTypeOf == 0 )
  {
    v141 = SchemaTypeScope();
    v26 = (*(*v141 + 96LL))(v141, "DOTAUnitAttackCapability_t");
    SchemaTypeOf<DOTAUnitAttackCapability_t>(void)::s_pTypeOf = v26;
  }
  v27 = CSchemaType::InternalAs(
          v26,
          SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
          SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v27);
  v28 = SchemaTypeOf<DOTAUnitMoveCapability_t>(void)::s_pTypeOf;
  if ( SchemaTypeOf<DOTAUnitMoveCapability_t>(void)::s_pTypeOf == 0 )
  {
    v142 = SchemaTypeScope();
    v28 = (*(*v142 + 96LL))(v142, "DOTAUnitMoveCapability_t");
    SchemaTypeOf<DOTAUnitMoveCapability_t>(void)::s_pTypeOf = v28;
  }
  v29 = CSchemaType::InternalAs(
          v28,
          SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
          SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v29);
  v30 = SchemaTypeOf<EShareAbility>(void)::s_pTypeOf;
  if ( SchemaTypeOf<EShareAbility>(void)::s_pTypeOf == 0 )
  {
    v143 = SchemaTypeScope();
    v30 = (*(*v143 + 96LL))(v143, "EShareAbility");
    SchemaTypeOf<EShareAbility>(void)::s_pTypeOf = v30;
  }
  v31 = CSchemaType::InternalAs(
          v30,
          SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
          SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v31);
  v32 = SchemaTypeOf<DOTAMusicStatus_t>(void)::s_pTypeOf;
  if ( SchemaTypeOf<DOTAMusicStatus_t>(void)::s_pTypeOf == 0 )
  {
    v144 = SchemaTypeScope();
    v32 = (*(*v144 + 96LL))(v144, "DOTAMusicStatus_t");
    SchemaTypeOf<DOTAMusicStatus_t>(void)::s_pTypeOf = v32;
  }
  v33 = CSchemaType::InternalAs(
          v32,
          SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
          SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v33);
  v179.m_type = 5;
  v179.m_flags = 0;
  v179.m_int = 1;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "DOTA_SHOWGENERICPOPUP_TINT_SCREEN", &v179);
  CVariantBase<CVariantDefaultAllocator>::Free(&v179);
  v179.m_type = 5;
  v179.m_flags = 0;
  v179.m_int = 2;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "DOTA_SHOWGENERICPOPUP_SHOW_NO_OTHER_DIALOGS", &v179);
  CVariantBase<CVariantDefaultAllocator>::Free(&v179);
  v34 = SchemaTypeOf<DAMAGE_TYPES>(void)::s_pTypeOf;
  if ( SchemaTypeOf<DAMAGE_TYPES>(void)::s_pTypeOf == 0 )
  {
    v145 = SchemaTypeScope();
    v34 = (*(*v145 + 96LL))(v145, "DAMAGE_TYPES");
    SchemaTypeOf<DAMAGE_TYPES>(void)::s_pTypeOf = v34;
  }
  v35 = CSchemaType::InternalAs(
          v34,
          SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
          SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v35);
  v36 = SchemaTypeOf<DOTADamageFlag_t>(void)::s_pTypeOf;
  if ( SchemaTypeOf<DOTADamageFlag_t>(void)::s_pTypeOf == 0 )
  {
    v146 = SchemaTypeScope();
    v36 = (*(*v146 + 96LL))(v146, "DOTADamageFlag_t");
    SchemaTypeOf<DOTADamageFlag_t>(void)::s_pTypeOf = v36;
  }
  v37 = CSchemaType::InternalAs(
          v36,
          SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
          SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v37);
  v38 = SchemaTypeOf<attackfail>(void)::s_pTypeOf;
  if ( SchemaTypeOf<attackfail>(void)::s_pTypeOf == 0 )
  {
    v147 = SchemaTypeScope();
    v38 = (*(*v147 + 96LL))(v147, "attackfail");
    SchemaTypeOf<attackfail>(void)::s_pTypeOf = v38;
  }
  v39 = CSchemaType::InternalAs(
          v38,
          SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
          SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v39);
  v40 = SchemaTypeOf<DamageCategory_t>(void)::s_pTypeOf;
  if ( SchemaTypeOf<DamageCategory_t>(void)::s_pTypeOf == 0 )
  {
    v148 = SchemaTypeScope();
    v40 = (*(*v148 + 96LL))(v148, "DamageCategory_t");
    SchemaTypeOf<DamageCategory_t>(void)::s_pTypeOf = v40;
  }
  v41 = CSchemaType::InternalAs(
          v40,
          SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
          SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v41);
  v42 = SchemaTypeOf<DOTAProjectileAttachment_t>(void)::s_pTypeOf;
  if ( SchemaTypeOf<DOTAProjectileAttachment_t>(void)::s_pTypeOf == 0 )
  {
    v149 = SchemaTypeScope();
    v42 = (*(*v149 + 96LL))(v149, "DOTAProjectileAttachment_t");
    SchemaTypeOf<DOTAProjectileAttachment_t>(void)::s_pTypeOf = v42;
  }
  v43 = CSchemaType::InternalAs(
          v42,
          SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
          SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v43);
  v44 = SchemaTypeOf<DOTAHUDVisibility_t>(void)::s_pTypeOf;
  if ( SchemaTypeOf<DOTAHUDVisibility_t>(void)::s_pTypeOf == 0 )
  {
    v150 = SchemaTypeScope();
    v44 = (*(*v150 + 96LL))(v150, "DOTAHUDVisibility_t");
    SchemaTypeOf<DOTAHUDVisibility_t>(void)::s_pTypeOf = v44;
  }
  v45 = CSchemaType::InternalAs(
          v44,
          SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
          SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v45);
  v46 = SchemaTypeOf<EDOTA_ModifyXP_Reason>(void)::s_pTypeOf;
  if ( SchemaTypeOf<EDOTA_ModifyXP_Reason>(void)::s_pTypeOf == 0 )
  {
    v151 = SchemaTypeScope();
    v46 = (*(*v151 + 96LL))(v151, "EDOTA_ModifyXP_Reason");
    SchemaTypeOf<EDOTA_ModifyXP_Reason>(void)::s_pTypeOf = v46;
  }
  v47 = CSchemaType::InternalAs(
          v46,
          SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
          SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v47);
  v48 = SchemaTypeOf<GameActivity_t>(void)::s_pTypeOf;
  if ( SchemaTypeOf<GameActivity_t>(void)::s_pTypeOf == 0 )
  {
    v152 = SchemaTypeScope();
    v48 = (*(*v152 + 96LL))(v152, "GameActivity_t");
    SchemaTypeOf<GameActivity_t>(void)::s_pTypeOf = v48;
  }
  v49 = 0;
  v50 = CSchemaType::InternalAs(
          v48,
          SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
          SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v50);
  do
  {
    v179.m_int = v49;
    v179.m_type = 5;
    v179.m_flags = 0;
    v51 = DOTA_OVERHEAD_ALERT_descriptor();
    v53 = google::protobuf::internal::NameOfEnum(v51, v49, v52);
    (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, *v53, &v179);
    ++v49;
    CVariantBase<CVariantDefaultAllocator>::Free(&v179);
  }
  while ( v49 != 19 );
  v54 = SchemaTypeOf<DOTAMinimapEvent_t>(void)::s_pTypeOf;
  if ( SchemaTypeOf<DOTAMinimapEvent_t>(void)::s_pTypeOf == 0 )
  {
    v153 = SchemaTypeScope();
    v54 = (*(*v153 + 96LL))(v153, "DOTAMinimapEvent_t");
    SchemaTypeOf<DOTAMinimapEvent_t>(void)::s_pTypeOf = v54;
  }
  v55 = CSchemaType::InternalAs(
          v54,
          SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
          SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v55);
  v56 = SchemaTypeOf<DOTASlotType_t>(void)::s_pTypeOf;
  if ( SchemaTypeOf<DOTASlotType_t>(void)::s_pTypeOf == 0 )
  {
    v154 = SchemaTypeScope();
    v56 = (*(*v154 + 96LL))(v154, "DOTASlotType_t");
    SchemaTypeOf<DOTASlotType_t>(void)::s_pTypeOf = v56;
  }
  v57 = CSchemaType::InternalAs(
          v56,
          SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
          SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v57);
  v58 = SchemaTypeOf<DOTAScriptInventorySlot_t>(void)::s_pTypeOf;
  if ( SchemaTypeOf<DOTAScriptInventorySlot_t>(void)::s_pTypeOf == 0 )
  {
    v155 = SchemaTypeScope();
    v58 = (*(*v155 + 96LL))(v155, "DOTAScriptInventorySlot_t");
    SchemaTypeOf<DOTAScriptInventorySlot_t>(void)::s_pTypeOf = v58;
  }
  v59 = CSchemaType::InternalAs(
          v58,
          SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
          SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v59);
  v179.m_type = 5;
  v179.m_flags = 0;
  v179.m_int = 32;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "EF_NODRAW", &v179);
  CVariantBase<CVariantDefaultAllocator>::Free(&v179);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Damage an npc.";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "ApplyDamage";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "DOTA_VScript_ApplyDamage";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<float (*)(HSCRIPT__ *),float,HSCRIPT__ *>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = DOTA_VScript_ApplyDamage;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Create a temporary tree. (vLoca"
                                                                                         "tion, flDuration).";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "CreateTempTree";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_CreateTempTree";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<void (*)(Vector,float),void,Vector,float>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 3;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_CreateTempTree;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Get the enity index for a tree "
                                                                                         "id specified as the entindex_ta"
                                                                                         "rget of a DOTA_UNIT_ORDER_CAST_TARGET_TREE.";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "GetEntityIndexForTreeId";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_GetEntityIndexForTreeId";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<CEntityIndex (*)(unsigned int),CEntityIndex,unsigned int>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 37;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_GetEntityIndexForTreeId;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Given and entity index of a tre"
                                                                                         "e, get the tree id for use for "
                                                                                         "use with with unit orders.";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "GetTreeIdForEntityIndex";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_GetTreeIdForEntityIndex";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding1<int (*)(int),int,int>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_GetTreeIdForEntityIndex;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Show a generic popup dialog for all players.";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "ShowGenericPopup";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_ShowGenericPopup";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding5<void (*)(char const*,char const*,char const*,char const*,int),void,char const*,char const*,char const*,char const*,int>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[4] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_ShowGenericPopup;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Show a generic popup dialog to "
                                                                                         "a specific player.";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "ShowGenericPopupToPlayer";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_ShowGenericPopupToPlayer";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding6<void (*)(HSCRIPT__ *,char const*,char const*,char const*,char const*,int),void,HSCRIPT__ *,char const*,char const*,char const*,char const*,int>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[4] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[5] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 6;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_ShowGenericPopupToPlayer;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "( const char *pszMessage, int n"
                                                                                         "PlayerID, int nValue, float flT"
                                                                                         "ime ) - Supports localized stri"
                                                                                         "ngs - %s1 = PlayerName, %s2 = V"
                                                                                         "alue, %s3 = TeamName";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "ShowCustomHeaderMessage";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_ShowCustomHeaderMessage";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding4<void (*)(char const*,int,int,float),void,char const*,int,int,float>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 1;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 4;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_ShowCustomHeaderMessage;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "( DOTAPlayer sendToPlayer, int "
                                                                                         "iMessageType, Entity targetEnti"
                                                                                         "ty, int iValue, DOTAPlayer sour"
                                                                                         "cePlayer ) - sendToPlayer and s"
                                                                                         "ourcePlayer can be nil - iMessa"
                                                                                         "geType is one of OVERHEAD_ALERT_*";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "SendOverheadEventMessage";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_SendOverheadEventMessage";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding5<void (*)(HSCRIPT__ *,int,HSCRIPT__ *,int,HSCRIPT__ *),void,HSCRIPT__ *,int,HSCRIPT__ *,int,HSCRIPT__ *>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[4] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_SendOverheadEventMessage;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  v60 = g_pScriptVM;
  v61 = *(*g_pScriptVM + 184LL);
  Script = GetScriptDesc<CScriptHeroList>(&g_ScriptHeroList);
  v63 = v61(v60, Script, &g_ScriptHeroList);
  v64 = *(*v60 + 240LL);
  v179.m_type = 31;
  v179.m_flags = 0;
  v179.m_uint64 = v63;
  v64(v60, 0, "HeroList", &v179);
  CVariantBase<CVariantDefaultAllocator>::Free(&v179);
  v65 = g_pScriptVM;
  v66 = *(*g_pScriptVM + 184LL);
  v67 = GetScriptDesc<CGridNav>(&g_GridNav);
  v68 = v66(v65, v67, &g_GridNav);
  v69 = *(*v65 + 240LL);
  v179.m_type = 31;
  v179.m_flags = 0;
  v179.m_uint64 = v68;
  v69(v65, 0, "GridNav", &v179);
  CVariantBase<CVariantDefaultAllocator>::Free(&v179);
  v70 = g_pScriptVM;
  v71 = *(*g_pScriptVM + 184LL);
  v72 = GetScriptDesc<CDOTA_ProjectileManager>(&g_DOTAProjectileManager);
  v73 = v71(v70, v72, &g_DOTAProjectileManager);
  v74 = *(*v70 + 240LL);
  v179.m_type = 31;
  v179.m_flags = 0;
  v179.m_uint64 = v73;
  v74(v70, 0, "ProjectileManager", &v179);
  CVariantBase<CVariantDefaultAllocator>::Free(&v179);
  v75 = DOTAGameManager();
  v76 = g_pScriptVM;
  v77 = v75;
  v78 = *(*g_pScriptVM + 184LL);
  v79 = GetScriptDesc<CDOTAGameManager>(v75);
  v80 = v78(v76, v79, v77);
  v81 = *(*v76 + 240LL);
  v179.m_type = 31;
  v179.m_flags = 0;
  v179.m_uint64 = v80;
  v81(v76, 0, "DOTAGameManager", &v179);
  CVariantBase<CVariantDefaultAllocator>::Free(&v179);
  v82 = g_pScriptVM;
  v83 = *(*g_pScriptVM + 184LL);
  v84 = GetScriptDesc<CScriptParticleManager>(&g_ScriptParticleManager);
  v85 = v83(v82, v84, &g_ScriptParticleManager);
  v86 = *(*v82 + 240LL);
  v179.m_flags = 0;
  v179.m_type = 31;
  v179.m_uint64 = v85;
  v86(v82, 0, "ParticleManager", &v179);
  CVariantBase<CVariantDefaultAllocator>::Free(&v179);
  v87 = *(*g_pScriptVM + 176LL);
  v88 = GetScriptDesc<CDOTA_Buff>(0);
  v87(g_pScriptVM, v88);
  v89 = *(*g_pScriptVM + 176LL);
  v90 = GetScriptDesc<CDOTA_Modifier_Lua>(0);
  v89(g_pScriptVM, v90);
  v91 = *(*g_pScriptVM + 176LL);
  v92 = GetScriptDesc<CDOTA_Modifier_Lua_Horizontal_Motion>(0);
  v91(g_pScriptVM, v92);
  v93 = *(*g_pScriptVM + 176LL);
  v94 = GetScriptDesc<CDOTA_Modifier_Lua_Vertical_Motion>(0);
  v93(g_pScriptVM, v94);
  v95 = *(*g_pScriptVM + 176LL);
  v96 = GetScriptDesc<CDOTA_Modifier_Lua_Motion_Both>(0);
  v95(g_pScriptVM, v96);
  v97 = SchemaTypeOf<DOTA_HeroPickState>(void)::s_pTypeOf;
  if ( SchemaTypeOf<DOTA_HeroPickState>(void)::s_pTypeOf == 0 )
  {
    v168 = SchemaTypeScope();
    v97 = (*(*v168 + 96LL))(v168, "DOTA_HeroPickState");
    SchemaTypeOf<DOTA_HeroPickState>(void)::s_pTypeOf = v97;
  }
  v98 = CSchemaType::InternalAs(
          v97,
          SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
          SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v98);
  v99 = SchemaTypeOf<DOTATeam_t>(void)::s_pTypeOf;
  if ( SchemaTypeOf<DOTATeam_t>(void)::s_pTypeOf == 0 )
  {
    v169 = SchemaTypeScope();
    v99 = (*(*v169 + 96LL))(v169, "DOTATeam_t");
    SchemaTypeOf<DOTATeam_t>(void)::s_pTypeOf = v99;
  }
  v100 = CSchemaType::InternalAs(
           v99,
           SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
           SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v100);
  v101 = SchemaTypeOf<DOTA_RUNES>(void)::s_pTypeOf;
  if ( SchemaTypeOf<DOTA_RUNES>(void)::s_pTypeOf == 0 )
  {
    v170 = SchemaTypeScope();
    v101 = (*(*v170 + 96LL))(v170, "DOTA_RUNES");
    SchemaTypeOf<DOTA_RUNES>(void)::s_pTypeOf = v101;
  }
  v102 = CSchemaType::InternalAs(
           v101,
           SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
           SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v102);
  v103 = SchemaTypeOf<DOTA_UNIT_TARGET_TEAM>(void)::s_pTypeOf;
  if ( SchemaTypeOf<DOTA_UNIT_TARGET_TEAM>(void)::s_pTypeOf == 0 )
  {
    v171 = SchemaTypeScope();
    v103 = (*(*v171 + 96LL))(v171, "DOTA_UNIT_TARGET_TEAM");
    SchemaTypeOf<DOTA_UNIT_TARGET_TEAM>(void)::s_pTypeOf = v103;
  }
  v104 = CSchemaType::InternalAs(
           v103,
           SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
           SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v104);
  v105 = SchemaTypeOf<DOTA_UNIT_TARGET_TYPE>(void)::s_pTypeOf;
  if ( SchemaTypeOf<DOTA_UNIT_TARGET_TYPE>(void)::s_pTypeOf == 0 )
  {
    v172 = SchemaTypeScope();
    v105 = (*(*v172 + 96LL))(v172, "DOTA_UNIT_TARGET_TYPE");
    SchemaTypeOf<DOTA_UNIT_TARGET_TYPE>(void)::s_pTypeOf = v105;
  }
  v106 = CSchemaType::InternalAs(
           v105,
           SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
           SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v106);
  v107 = SchemaTypeOf<DOTA_UNIT_TARGET_FLAGS>(void)::s_pTypeOf;
  if ( SchemaTypeOf<DOTA_UNIT_TARGET_FLAGS>(void)::s_pTypeOf == 0 )
  {
    v173 = SchemaTypeScope();
    v107 = (*(*v173 + 96LL))(v173, "DOTA_UNIT_TARGET_FLAGS");
    SchemaTypeOf<DOTA_UNIT_TARGET_FLAGS>(void)::s_pTypeOf = v107;
  }
  v108 = CSchemaType::InternalAs(
           v107,
           SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
           SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v108);
  v109 = SchemaTypeOf<DOTA_ABILITY_BEHAVIOR>(void)::s_pTypeOf;
  if ( SchemaTypeOf<DOTA_ABILITY_BEHAVIOR>(void)::s_pTypeOf == 0 )
  {
    v174 = SchemaTypeScope();
    v109 = (*(*v174 + 96LL))(v174, "DOTA_ABILITY_BEHAVIOR");
    SchemaTypeOf<DOTA_ABILITY_BEHAVIOR>(void)::s_pTypeOf = v109;
  }
  v110 = CSchemaType::InternalAs(
           v109,
           SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
           SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v110);
  v111 = SchemaTypeOf<DOTALimits_t>(void)::s_pTypeOf;
  if ( SchemaTypeOf<DOTALimits_t>(void)::s_pTypeOf == 0 )
  {
    v175 = SchemaTypeScope();
    v111 = (*(*v175 + 96LL))(v175, "DOTALimits_t");
    SchemaTypeOf<DOTALimits_t>(void)::s_pTypeOf = v111;
  }
  v112 = CSchemaType::InternalAs(
           v111,
           SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
           SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v112);
  v113 = SchemaTypeOf<AbilityLearnResult_t>(void)::s_pTypeOf;
  if ( SchemaTypeOf<AbilityLearnResult_t>(void)::s_pTypeOf == 0 )
  {
    v156 = SchemaTypeScope();
    v113 = (*(*v156 + 96LL))(v156, "AbilityLearnResult_t");
    SchemaTypeOf<AbilityLearnResult_t>(void)::s_pTypeOf = v113;
  }
  v114 = CSchemaType::InternalAs(
           v113,
           SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
           SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v114);
  v179.m_type = 5;
  v179.m_flags = 0;
  v179.m_int = -1;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "FIND_UNITS_EVERYWHERE", &v179);
  CVariantBase<CVariantDefaultAllocator>::Free(&v179);
  v179.m_type = 5;
  v179.m_flags = 0;
  v179.m_int = 1;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "FIND_CLOSEST", &v179);
  CVariantBase<CVariantDefaultAllocator>::Free(&v179);
  v179.m_type = 5;
  v179.m_flags = 0;
  v179.m_int = 2;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "FIND_FARTHEST", &v179);
  CVariantBase<CVariantDefaultAllocator>::Free(&v179);
  v179.m_type = 5;
  v179.m_flags = 0;
  v179.m_int = 0;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "FIND_ANY_ORDER", &v179);
  CVariantBase<CVariantDefaultAllocator>::Free(&v179);
  v115 = SchemaTypeOf<modifierfunction>(void)::s_pTypeOf;
  if ( SchemaTypeOf<modifierfunction>(void)::s_pTypeOf == 0 )
  {
    v157 = SchemaTypeScope();
    v115 = (*(*v157 + 96LL))(v157, "modifierfunction");
    SchemaTypeOf<modifierfunction>(void)::s_pTypeOf = v115;
  }
  v116 = CSchemaType::InternalAs(
           v115,
           SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
           SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v116);
  v117 = SchemaTypeOf<modifierstate>(void)::s_pTypeOf;
  if ( SchemaTypeOf<modifierstate>(void)::s_pTypeOf == 0 )
  {
    v158 = SchemaTypeScope();
    v117 = (*(*v158 + 96LL))(v158, "modifierstate");
    SchemaTypeOf<modifierstate>(void)::s_pTypeOf = v117;
  }
  v118 = CSchemaType::InternalAs(
           v117,
           SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
           SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v118);
  v119 = SchemaTypeOf<modifierpriority>(void)::s_pTypeOf;
  if ( SchemaTypeOf<modifierpriority>(void)::s_pTypeOf == 0 )
  {
    v159 = SchemaTypeScope();
    v119 = (*(*v159 + 96LL))(v159, "modifierpriority");
    SchemaTypeOf<modifierpriority>(void)::s_pTypeOf = v119;
  }
  v120 = CSchemaType::InternalAs(
           v119,
           SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
           SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v120);
  v121 = SchemaTypeOf<modifierremove>(void)::s_pTypeOf;
  if ( SchemaTypeOf<modifierremove>(void)::s_pTypeOf == 0 )
  {
    v160 = SchemaTypeScope();
    v121 = (*(*v160 + 96LL))(v160, "modifierremove");
    SchemaTypeOf<modifierremove>(void)::s_pTypeOf = v121;
  }
  v122 = CSchemaType::InternalAs(
           v121,
           SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
           SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v122);
  v123 = SchemaTypeOf<DOTAModifierAttribute_t>(void)::s_pTypeOf;
  if ( SchemaTypeOf<DOTAModifierAttribute_t>(void)::s_pTypeOf == 0 )
  {
    v161 = SchemaTypeScope();
    v123 = (*(*v161 + 96LL))(v161, "DOTAModifierAttribute_t");
    SchemaTypeOf<DOTAModifierAttribute_t>(void)::s_pTypeOf = v123;
  }
  v124 = CSchemaType::InternalAs(
           v123,
           SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
           SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v124);
  v125 = SchemaTypeOf<Attributes>(void)::s_pTypeOf;
  if ( SchemaTypeOf<Attributes>(void)::s_pTypeOf == 0 )
  {
    v162 = SchemaTypeScope();
    v125 = (*(*v162 + 96LL))(v162, "Attributes");
    SchemaTypeOf<Attributes>(void)::s_pTypeOf = v125;
  }
  v126 = CSchemaType::InternalAs(
           v125,
           SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
           SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v126);
  v127 = SchemaTypeOf<ParticleAttachment_t>(void)::s_pTypeOf;
  if ( SchemaTypeOf<ParticleAttachment_t>(void)::s_pTypeOf == 0 )
  {
    v163 = SchemaTypeScope();
    v127 = (*(*v163 + 96LL))(v163, "ParticleAttachment_t");
    SchemaTypeOf<ParticleAttachment_t>(void)::s_pTypeOf = v127;
  }
  v128 = CSchemaType::InternalAs(
           v127,
           SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
           SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v128);
  v129 = SchemaTypeOf<LuaModifierType>(void)::s_pTypeOf;
  if ( SchemaTypeOf<LuaModifierType>(void)::s_pTypeOf == 0 )
  {
    v164 = SchemaTypeScope();
    v129 = (*(*v164 + 96LL))(v164, "LuaModifierType");
    SchemaTypeOf<LuaModifierType>(void)::s_pTypeOf = v129;
  }
  v130 = CSchemaType::InternalAs(
           v129,
           SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
           SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v130);
  v131 = SchemaTypeOf<DOTA_MOTION_CONTROLLER_PRIORITY>(void)::s_pTypeOf;
  if ( SchemaTypeOf<DOTA_MOTION_CONTROLLER_PRIORITY>(void)::s_pTypeOf == 0 )
  {
    v165 = SchemaTypeScope();
    v131 = (*(*v165 + 96LL))(v165, "DOTA_MOTION_CONTROLLER_PRIORITY");
    SchemaTypeOf<DOTA_MOTION_CONTROLLER_PRIORITY>(void)::s_pTypeOf = v131;
  }
  v132 = CSchemaType::InternalAs(
           v131,
           SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
           SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v132);
  v133 = SchemaTypeOf<DOTASpeechType_t>(void)::s_pTypeOf;
  if ( SchemaTypeOf<DOTASpeechType_t>(void)::s_pTypeOf == 0 )
  {
    v166 = SchemaTypeScope();
    v133 = (*(*v166 + 96LL))(v166, "DOTASpeechType_t");
    SchemaTypeOf<DOTASpeechType_t>(void)::s_pTypeOf = v133;
  }
  v134 = CSchemaType::InternalAs(
           v133,
           SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
           SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v134);
  v135 = SchemaTypeOf<DOTAAbilitySpeakTrigger_t>(void)::s_pTypeOf;
  if ( SchemaTypeOf<DOTAAbilitySpeakTrigger_t>(void)::s_pTypeOf == 0 )
  {
    v167 = SchemaTypeScope();
    v135 = (*(*v167 + 96LL))(v167, "DOTAAbilitySpeakTrigger_t");
    SchemaTypeOf<DOTAAbilitySpeakTrigger_t>(void)::s_pTypeOf = v135;
  }
  v136 = CSchemaType::InternalAs(
           v135,
           SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
           SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v136);
  v137 = SchemaTypeOf<UnitFilterResult>(void)::s_pTypeOf;
  if ( SchemaTypeOf<UnitFilterResult>(void)::s_pTypeOf == 0 )
  {
    v176 = SchemaTypeScope();
    v137 = (*(*v176 + 96LL))(v176, "UnitFilterResult");
    SchemaTypeOf<UnitFilterResult>(void)::s_pTypeOf = v137;
  }
  v138 = CSchemaType::InternalAs(
           v137,
           SchemaTypeCategory_t::SCHEMA_TYPE_DECLARED_ENUM,
           SchemaAtomicCategory_t::SCHEMA_ATOMIC_INVALID);
  VScriptAddSchemaEnumToRootHelper(g_pScriptVM, v138);
  v179.m_type = 5;
  v179.m_flags = 0;
  v179.m_int = 0;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "DOTA_PROJECTILE_ATTACHMENT_NONE", &v179);
  CVariantBase<CVariantDefaultAllocator>::Free(&v179);
  v179.m_type = 5;
  v179.m_flags = 0;
  v179.m_int = 1;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "DOTA_PROJECTILE_ATTACHMENT_ATTACK_1", &v179);
  CVariantBase<CVariantDefaultAllocator>::Free(&v179);
  v179.m_type = 5;
  v179.m_flags = 0;
  v179.m_int = 2;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "DOTA_PROJECTILE_ATTACHMENT_ATTACK_2", &v179);
  CVariantBase<CVariantDefaultAllocator>::Free(&v179);
  v179.m_type = 5;
  v179.m_flags = 0;
  v179.m_int = 3;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "DOTA_PROJECTILE_ATTACHMENT_HITLOCATION", &v179);
  CVariantBase<CVariantDefaultAllocator>::Free(&v179);
  v179.m_type = 5;
  v179.m_flags = 0;
  v179.m_int = 4;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "DOTA_PROJECTILE_ATTACHMENT_ATTACK_3", &v179);
  CVariantBase<CVariantDefaultAllocator>::Free(&v179);
  v179.m_type = 5;
  v179.m_flags = 0;
  v179.m_int = 5;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "DOTA_PROJECTILE_ATTACHMENT_ATTACK_4", &v179);
  CVariantBase<CVariantDefaultAllocator>::Free(&v179);
  v179.m_type = 5;
  v179.m_flags = 0;
  v179.m_int = 6;
  (*(*g_pScriptVM + 240LL))(g_pScriptVM, 0, "DOTA_PROJECTILE_ATTACHMENT_LAST", &v179);
  CVariantBase<CVariantDefaultAllocator>::Free(&v179);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Link a lua-defined modifier wit"
                                                                                         "h the associated class ( classN"
                                                                                         "ame, fileName, LuaModifierType).";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "LinkLuaModifier";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "LinkLuaModifier";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding3<void (*)(char const*,char const*,int),void,char const*,char const*,int>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 3;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = LinkLuaModifier;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Check if a unit passes a set of"
                                                                                         " filters. (hNPC, nTargetTeam, n"
                                                                                         "TargetType, nTargetFlags, nTeam";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "UnitFilter";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "Script_UnitFilter";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding5<int (*)(HSCRIPT__ *,int,int,int,int),int,HSCRIPT__ *,int,int,int,int>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[2] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[3] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[4] = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 5;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = Script_UnitFilter;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  if ( `guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding) != 0 )
  {
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 29;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = -1;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 0;
    CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pPackedParameterNames = 0;
    __cxa_guard_release(&`guard variable for'CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
  }
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nOptionalParameters = 0;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszDescription = "Create an HTTP request.";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszScriptName = "CreateHTTPRequest";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_pszFunction = "CreateHTTPRequest";
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pfnBinding = CNonMemberScriptBinding2<HSCRIPT__ * (*)(char const*,char const*),HSCRIPT__ *,char const*,char const*>::Call;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ReturnType = 31;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[0] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_ParameterTypes[1] = 30;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_desc.m_nNumParameters = 2;
  CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding.m_pFunction = CreateHTTPRequest;
  (*(*g_pScriptVM + 168LL))(g_pScriptVM, &CDOTAVScriptGameSystem::InstallScriptBindings(void)::binding);
}


// CDOTAVScriptGameSystem::RemoveScriptBindings  (line 1099, @0x00000000027a7650, libserver.so)
// calls: CVScriptGameSystem::RemoveScriptBindings
void __fastcall CDOTAVScriptGameSystem::RemoveScriptBindings(CDOTAVScriptGameSystem *const this)
{
  CVScriptGameSystem::RemoveScriptBindings(this);
}


