// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_mode_laning.h:15
class CDOTA_BotMode_Laning : public CDOTA_BotMode {
public:

private:

	CDOTA_BotMode_Laning(CDOTA_BotMode_Laning &);
	CDOTA_BotMode_Laning(const CDOTA_BotMode_Laning &);
	CDOTA_BotMode_Laning(CDOTA_Bot *);
	virtual DOTA_BOT_MODE GetModeType();
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	DOTA_LANE GetAssignedLane();
	void SetAssignedLane(DOTA_LANE);
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	virtual float GetBaseAmountBackFromLane();
	virtual color24 GetDebugColor();
	virtual const char * GetDebugString();
	virtual ~CDOTA_BotMode_Laning();

	// vtable[2] GetModeType
	// vtable[3] OnStart
	// vtable[4] OnEnd
	// vtable[5] Think
	// vtable[10] GetDesire
	// vtable[15] CalculateDesiredLocation
	// vtable[16] GetBaseAmountBackFromLane
	// vtable[12] GetDebugColor
	// vtable[13] GetDebugString
	// sizeof = 240
};

// src/game/server/dota/bot/dota_bot_mode_laning.h:50
class CDOTA_BotMode_Laning_Human : public CDOTA_BotMode_Laning {
public:

	CDOTA_BotMode_Laning_Human(CDOTA_Bot *);
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	virtual const char * GetDebugString();
	virtual ~CDOTA_BotMode_Laning_Human();

	// vtable[3] OnStart
	// vtable[4] OnEnd
	// vtable[5] Think
	// vtable[10] GetDesire
	// vtable[15] CalculateDesiredLocation
	// vtable[13] GetDebugString
	// sizeof = 240
};
