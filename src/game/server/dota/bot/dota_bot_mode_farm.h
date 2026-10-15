// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_mode_farm.h:16
class CDOTA_BotMode_Farm : public CDOTA_BotMode {
public:

private:

	float m_fLaneScores[4];  // +0xf8
	EHANDLE m_hPotentialTarget;  // +0x10c
	CDOTA_BotMode_Farm(CDOTA_BotMode_Farm &);
	CDOTA_BotMode_Farm(const CDOTA_BotMode_Farm &);
	CDOTA_BotMode_Farm(CDOTA_Bot *);
	virtual DOTA_BOT_MODE GetModeType();
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	virtual color24 GetDebugColor();
	virtual const char * GetDebugString();
	virtual const char * GetDebugValue();
	float GetFarmDesire();
	float GetFarmLaneScore(DOTA_LANE);
	DOTA_NEUTRAL_TYPE GetNeutralFarmingLevel();
	virtual ~CDOTA_BotMode_Farm();

	// vtable[2] GetModeType
	// vtable[3] OnStart
	// vtable[4] OnEnd
	// vtable[5] Think
	// vtable[10] GetDesire
	// vtable[15] CalculateDesiredLocation
	// vtable[12] GetDebugColor
	// vtable[13] GetDebugString
	// vtable[14] GetDebugValue
	// sizeof = 272
};

// src/game/server/dota/bot/dota_bot_mode_farm.h:56
class CDOTA_BotMode_Farm_Human : public CDOTA_BotMode_Farm {
public:

	CDOTA_BotMode_Farm_Human(CDOTA_Bot *);
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	virtual const char * GetDebugString();
	virtual ~CDOTA_BotMode_Farm_Human();

	// vtable[3] OnStart
	// vtable[4] OnEnd
	// vtable[5] Think
	// vtable[10] GetDesire
	// vtable[15] CalculateDesiredLocation
	// vtable[13] GetDebugString
	// sizeof = 272
};
