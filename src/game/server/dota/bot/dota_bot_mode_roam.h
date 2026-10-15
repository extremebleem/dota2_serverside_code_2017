// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_mode_roam.h:14
class CDOTA_BotMode_Roam : public CDOTA_BotMode {
public:

protected:

	EHANDLE m_hRoamTarget;  // +0xe0

	float m_fLastStartedRoamTime;  // +0x100
	bool m_bLeftVisibility;  // +0x104
	bool m_bAnnouncedRoam;  // +0x105
	CDOTA_BotMode_Roam(CDOTA_BotMode_Roam &);
	CDOTA_BotMode_Roam(const CDOTA_BotMode_Roam &);
	CDOTA_BotMode_Roam(CDOTA_Bot *);
	virtual DOTA_BOT_MODE GetModeType();
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	virtual color24 GetDebugColor();
	virtual const char * GetDebugString();
	virtual const char * GetDebugValue();
	virtual float GetRoamScore(CDOTA_BaseNPC_Hero *);
	virtual void FindBestRoamTarget(EHANDLE *, float *);
	virtual bool IsValidRoamTarget(CDOTA_BaseNPC_Hero *);
	virtual ~CDOTA_BotMode_Roam();

	// vtable[2] GetModeType
	// vtable[3] OnStart
	// vtable[4] OnEnd
	// vtable[5] Think
	// vtable[10] GetDesire
	// vtable[15] CalculateDesiredLocation
	// vtable[12] GetDebugColor
	// vtable[13] GetDebugString
	// vtable[14] GetDebugValue
	// vtable[16] GetRoamScore
	// vtable[17] FindBestRoamTarget
	// vtable[18] IsValidRoamTarget
	// sizeof = 264
};

// src/game/server/dota/bot/dota_bot_mode_roam.h:55
class CDOTA_BotMode_Roam_Human : public CDOTA_BotMode_Roam {
public:

	CDOTA_BotMode_Roam_Human(CDOTA_Bot *);
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	virtual const char * GetDebugString();
	virtual ~CDOTA_BotMode_Roam_Human();

	// vtable[3] OnStart
	// vtable[4] OnEnd
	// vtable[5] Think
	// vtable[10] GetDesire
	// vtable[15] CalculateDesiredLocation
	// vtable[13] GetDebugString
	// sizeof = 264
};
