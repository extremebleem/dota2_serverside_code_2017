// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_mode_retreat.h:15
class CDOTA_BotMode_Retreat : public CDOTA_BotMode {
public:

protected:

	float m_fLastHitTime[24];  // +0xe0
	CDOTA_BotMode_Retreat(CDOTA_BotMode_Retreat &);
	CDOTA_BotMode_Retreat(const CDOTA_BotMode_Retreat &);
	CDOTA_BotMode_Retreat(CDOTA_Bot *);
	virtual DOTA_BOT_MODE GetModeType();
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual void OnTakeDamage(const CTakeDamageInfo &);
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	virtual color24 GetDebugColor();
	virtual const char * GetDebugString();
	float TimeSinceLastHitBy(CDOTA_Bot *);
	bool FindNearbyHealingAura(float, Vector *, float *);
	int GetStashValue();
	virtual ~CDOTA_BotMode_Retreat();

	// vtable[2] GetModeType
	// vtable[3] OnStart
	// vtable[4] OnEnd
	// vtable[5] Think
	// vtable[7] OnTakeDamage
	// vtable[10] GetDesire
	// vtable[15] CalculateDesiredLocation
	// vtable[12] GetDebugColor
	// vtable[13] GetDebugString
	// sizeof = 320
};

// src/game/server/dota/bot/dota_bot_mode_retreat.h:53
class CDOTA_BotMode_Retreat_Human : public CDOTA_BotMode_Retreat {
public:

	CDOTA_BotMode_Retreat_Human(CDOTA_Bot *);
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual float GetDesire();
	virtual Vector GetDesiredLocation();
	virtual const char * GetDebugString();
	virtual ~CDOTA_BotMode_Retreat_Human();

	// vtable[3] OnStart
	// vtable[4] OnEnd
	// vtable[5] Think
	// vtable[10] GetDesire
	// vtable[11] GetDesiredLocation
	// vtable[13] GetDebugString
	// sizeof = 320
};
