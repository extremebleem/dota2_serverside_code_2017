// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_mode_roshan.h:15
class CDOTA_BotMode_Roshan : public CDOTA_BotMode {
public:

private:

	float m_fRoshanScore;  // +0xe0
	float m_fStartTime;  // +0xe4
	bool m_bAnnouncedRosh;  // +0xe8
	CDOTA_BotMode_Roshan(CDOTA_BotMode_Roshan &);
	CDOTA_BotMode_Roshan(const CDOTA_BotMode_Roshan &);
	CDOTA_BotMode_Roshan(CDOTA_Bot *);
	virtual DOTA_BOT_MODE GetModeType();
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	virtual color24 GetDebugColor();
	virtual const char * GetDebugString();
	virtual const char * GetDebugValue();
	virtual ~CDOTA_BotMode_Roshan();

	// vtable[2] GetModeType
	// vtable[3] OnStart
	// vtable[4] OnEnd
	// vtable[5] Think
	// vtable[10] GetDesire
	// vtable[15] CalculateDesiredLocation
	// vtable[12] GetDebugColor
	// vtable[13] GetDebugString
	// vtable[14] GetDebugValue
	// sizeof = 240
};

// src/game/server/dota/bot/dota_bot_mode_roshan.h:48
class CDOTA_BotMode_Roshan_Human : public CDOTA_BotMode_Roshan {
public:

private:

	CDOTA_BotMode_Roshan_Human(CDOTA_BotMode_Roshan_Human &);
	CDOTA_BotMode_Roshan_Human(const CDOTA_BotMode_Roshan_Human &);
	CDOTA_BotMode_Roshan_Human(CDOTA_Bot *);
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	virtual const char * GetDebugString();
	virtual ~CDOTA_BotMode_Roshan_Human();

	// vtable[3] OnStart
	// vtable[4] OnEnd
	// vtable[5] Think
	// vtable[10] GetDesire
	// vtable[15] CalculateDesiredLocation
	// vtable[13] GetDebugString
	// sizeof = 288
};
