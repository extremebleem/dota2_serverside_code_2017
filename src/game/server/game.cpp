// Reconstructed from DWARF by pahole; not original source.

// src/game/server/game.cpp:61
class CGameDLL_ConVarAccessor : public IConCommandBaseAccessor {
public:

	CGameDLL_ConVarAccessor(CGameDLL_ConVarAccessor &);
	CGameDLL_ConVarAccessor(const CGameDLL_ConVarAccessor &);
	CGameDLL_ConVarAccessor();
	virtual bool RegisterConCommandBase(ConCommandBase *);

	// vtable[0] RegisterConCommandBase
	// sizeof = 8
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// MapCycleFileChangedCallback  (line 15, @0x000000000221e700, libserver.so)  // inlines: GameRules, GetString
// calls: V_stricmp_fast
// strings: "FCVAR_NEVER_AS_STRING"
void __fastcall MapCycleFileChangedCallback(IConVar *var, const char *pOldString, double a3, float flOldValue)
{
  char *m_pszString; // rsi

  m_pszString = "FCVAR_NEVER_AS_STRING";
  if ( (mapcyclefile.m_nFlags & 0x1000) == 0 )
  {
    m_pszString = "";
    if ( mapcyclefile.m_pParent->m_Value.m_pszString != 0 )
      m_pszString = mapcyclefile.m_pParent->m_Value.m_pszString;
  }
  if ( V_stricmp_fast(pOldString, m_pszString) != 0 && g_pGameRules != 0 )
    (*(g_pGameRules->_vptr_CGameRules + 139))(g_pGameRules);
}


// CGameDLL_ConVarAccessor::RegisterConCommandBase  (line 64, @0x0000000002247550, libserver.so)
// calls: ConVar::GetDefault
bool __fastcall CGameDLL_ConVarAccessor::RegisterConCommandBase(
        CGameDLL_ConVarAccessor *const this,
        ConCommandBase *pCommand)
{
  char v3; // r13
  const char *Default; // r14
  __int64 (__fastcall *v5)(ICvar *, __int64); // r15
  __int64 v6; // rax
  __int64 v7; // r12

  v3 = (*(pCommand->_vptr_ConCommandBase + 4))(pCommand, 0x2000);
  if ( v3 == 0 || (*(pCommand->_vptr_ConCommandBase + 2))(pCommand) != 0 )
    Default = 0;
  else
    Default = ConVar::GetDefault(pCommand);
  (*(*g_pCVar + 96LL))(g_pCVar, pCommand);
  v5 = *(*g_pCVar + 120LL);
  v6 = (*(pCommand->_vptr_ConCommandBase + 8))(pCommand);
  v7 = v5(g_pCVar, v6);
  if ( v7 != 0 )
  {
    if ( (*(pCommand->_vptr_ConCommandBase + 2))(pCommand) == 0 )
      (*(pCommand->_vptr_ConCommandBase + 16))(pCommand, v7);
  }
  else if ( Default != 0 && v3 != 0 && (*(pCommand->_vptr_ConCommandBase + 2))(pCommand) == 0 )
  {
    (*(pCommand->_vptr_ConCommandBase + 16))(pCommand, Default);
  }
  return 1;
}


// InitializeCvars  (line 109, @0x000000000222f3e0, libserver.so)
// calls: ConVar_Register
// callers: CGameConfiguration::Init
// strings: "developer"
// globals: g_ConVarAccessor, g_pDeveloper
void __cdecl InitializeCvars()
{
  ConVar_Register(4, &g_ConVarAccessor);
  g_pDeveloper = (*(*g_pCVar + 144LL))(g_pCVar, "developer");
}


