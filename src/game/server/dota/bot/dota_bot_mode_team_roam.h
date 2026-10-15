// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_mode_team_roam.h:15
class CDOTA_BotMode_TeamRoam : public CDOTA_BotMode {
public:

protected:

	float m_fStartedTeamRoamTime;  // +0xe0
	bool m_bAnnouncedTeamRoam;  // +0xe4

	float m_fCurrentTargetScore;  // +0xe8
	EHANDLE m_hPotentialRoamTarget;  // +0xec
	CDOTA_BotMode_TeamRoam(CDOTA_BotMode_TeamRoam &);
	CDOTA_BotMode_TeamRoam(const CDOTA_BotMode_TeamRoam &);
	CDOTA_BotMode_TeamRoam(CDOTA_Bot *);
	virtual DOTA_BOT_MODE GetModeType();
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	virtual color24 GetDebugColor();
	virtual const char * GetDebugString();
	virtual const char * GetDebugValue();
	bool FindHiddenLocationNearby(const Vector &, float, Vector *);
	virtual ~CDOTA_BotMode_TeamRoam();

	// vtable[2] GetModeType
	// vtable[3] OnStart
	// vtable[4] OnEnd
	// vtable[5] Think
	// vtable[10] GetDesire
	// vtable[15] CalculateDesiredLocation
	// vtable[12] GetDebugColor
	// vtable[13] GetDebugString
	// vtable[14] GetDebugValue
	// sizeof = 256
};
