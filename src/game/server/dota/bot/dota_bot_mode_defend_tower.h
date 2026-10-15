// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_mode_defend_tower.h:15
class CDOTA_BotMode_DefendTower : public CDOTA_BotMode {
public:

protected:

	float m_fDesire;  // +0xe0
	bool m_bAnnouncedDefend;  // +0xec

	float m_fStartDefendTime;  // +0xf0
	CDOTA_BotMode_DefendTower(CDOTA_BotMode_DefendTower &);
	CDOTA_BotMode_DefendTower(const CDOTA_BotMode_DefendTower &);
	CDOTA_BotMode_DefendTower(CDOTA_Bot *, DOTA_LANE, DOTA_BOT_MODE);
	virtual DOTA_BOT_MODE GetModeType();
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	virtual color24 GetDebugColor();
	virtual const char * GetDebugString();
	virtual const char * GetDebugValue();
	virtual ~CDOTA_BotMode_DefendTower();

	// vtable[2] GetModeType
	// vtable[3] OnStart
	// vtable[4] OnEnd
	// vtable[5] Think
	// vtable[10] GetDesire
	// vtable[15] CalculateDesiredLocation
	// vtable[12] GetDebugColor
	// vtable[13] GetDebugString
	// vtable[14] GetDebugValue
	// sizeof = 248
};

// src/game/server/dota/bot/dota_bot_mode_defend_tower.h:50
class CDOTA_BotMode_DefendTower_Human : public CDOTA_BotMode_DefendTower {
public:

private:

	bool m_bPingConsideredActive;  // +0xf4
	CDOTA_BotMode_DefendTower_Human(CDOTA_BotMode_DefendTower_Human &);
	CDOTA_BotMode_DefendTower_Human(const CDOTA_BotMode_DefendTower_Human &);
	CDOTA_BotMode_DefendTower_Human(CDOTA_Bot *, DOTA_LANE, DOTA_BOT_MODE);
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	virtual const char * GetDebugString();
	virtual ~CDOTA_BotMode_DefendTower_Human();

	// vtable[3] OnStart
	// vtable[4] OnEnd
	// vtable[5] Think
	// vtable[10] GetDesire
	// vtable[15] CalculateDesiredLocation
	// vtable[13] GetDebugString
	// sizeof = 248
};
