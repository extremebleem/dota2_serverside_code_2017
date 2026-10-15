// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/teamplay_gamerules.h:43
class CTeamplayRules : public CMultiplayRules {
public:

private:

protected:

	bool m_DisableDeathMessages;  // +0xc8
private:

	bool m_DisableDeathPenalty;  // +0xc9
	bool m_teamLimit;  // +0xca
	char m_szTeamList[512];  // +0xcb
	bool m_bSwitchTeams;  // +0x2cb
	bool m_bScrambleTeams;  // +0x2cc
	CTeamplayRules(const CTeamplayRules &);
	CTeamplayRules & operator=(const CTeamplayRules &);

	virtual int GetCaptureValueForPlayer(CBasePlayer *);
	virtual bool TeamMayCapturePoint(int, int);
	virtual bool PlayerMayCapturePoint(CBasePlayer *, int, char *, int);
	virtual bool PlayerMayBlockPoint(CBasePlayer *, int, char *, int);
	virtual bool PointsMayBeCaptured();
	virtual void SetLastCapPointChanged(int);
	CTeamplayRules();
	virtual ~CTeamplayRules();
	virtual void BuildGameSessionManifest(const EventBuildGameSessionManifest_t &);
	virtual bool ClientCommand(CBaseEntity *, const CCommand &);
	virtual void ClientSettingsChanged(CBasePlayer *);
	virtual bool IsTeamplay();
	virtual bool FPlayerCanTakeDamage(CBasePlayer *, CBaseEntity *);
	virtual int PlayerRelationship(CBaseEntity *, CBaseEntity *);
	virtual bool PlayerCanHearChat(CBasePlayer *, CBasePlayer *, int);
	virtual bool ShouldAutoAim(CBasePlayer *, CBaseEntity *);
	virtual int IPointsForKill(CBasePlayer *, CBasePlayer *);
	virtual void InitHUD(CBasePlayer *);
	virtual void DeathNotice(CBasePlayer *, const CTakeDamageInfo &);
	virtual const char * GetGameDescription();
	virtual void PlayerKilled(CBasePlayer *, const CTakeDamageInfo &);
	virtual void Think();
	virtual int GetTeamIndex(const char *);
	virtual const char * GetIndexedTeamName(int);
	virtual bool IsValidTeam(const char *);
	virtual const char * SetDefaultPlayerTeam(CBasePlayer *);
	virtual void ChangePlayerTeam(CBasePlayer *, const char *, bool, bool);
	virtual void ClientDisconnected(CEntityIndex, ENetworkDisconnectionReason);
	virtual bool TimerMayExpire();
	virtual void SetWinningTeam(int, int, bool, bool, bool);
	virtual void SetStalemate(int, bool, bool);
	virtual void SetSwitchTeams(bool);
	virtual bool ShouldSwitchTeams();
	virtual void HandleSwitchTeams();
	virtual void SetScrambleTeams(bool);
	virtual bool ShouldScrambleTeams();
	virtual void HandleScrambleTeams();
	void RecountTeams();
	const char * TeamWithFewestPlayers();

	// vtable[0] Schema_DynamicBinding
	// vtable[165] GetCaptureValueForPlayer
	// vtable[166] TeamMayCapturePoint
	// vtable[167] PlayerMayCapturePoint
	// vtable[168] PlayerMayBlockPoint
	// vtable[169] PointsMayBeCaptured
	// vtable[170] SetLastCapPointChanged
	// vtable[15] BuildGameSessionManifest
	// vtable[83] ClientCommand
	// vtable[84] ClientSettingsChanged
	// vtable[60] IsTeamplay
	// vtable[68] FPlayerCanTakeDamage
	// vtable[114] PlayerRelationship
	// vtable[115] PlayerCanHearChat
	// vtable[69] ShouldAutoAim
	// vtable[85] IPointsForKill
	// vtable[64] InitHUD
	// vtable[87] DeathNotice
	// vtable[62] GetGameDescription
	// vtable[86] PlayerKilled
	// vtable[50] Think
	// vtable[118] GetTeamIndex
	// vtable[119] GetIndexedTeamName
	// vtable[120] IsValidTeam
	// vtable[122] SetDefaultPlayerTeam
	// vtable[121] ChangePlayerTeam
	// vtable[65] ClientDisconnected
	// vtable[171] TimerMayExpire
	// vtable[172] SetWinningTeam
	// vtable[173] SetStalemate
	// vtable[174] SetSwitchTeams
	// vtable[175] ShouldSwitchTeams
	// vtable[176] HandleSwitchTeams
	// vtable[177] SetScrambleTeams
	// vtable[178] ShouldScrambleTeams
	// vtable[179] HandleScrambleTeams
	// sizeof = 720
};
