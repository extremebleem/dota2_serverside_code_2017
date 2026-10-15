// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_mode_push_tower.h:16
class CDOTA_BotMode_PushTower : public CDOTA_BotMode {
public:

protected:

	EHANDLE m_hPotentialTarget;  // +0xe4
	bool m_bAnnouncedPush;  // +0xec

	float m_fStartPushTime;  // +0xf0
	CDOTA_BotMode_PushTower(CDOTA_BotMode_PushTower &);
	CDOTA_BotMode_PushTower(const CDOTA_BotMode_PushTower &);
	CDOTA_BotMode_PushTower(CDOTA_Bot *, DOTA_LANE, DOTA_BOT_MODE);
	virtual DOTA_BOT_MODE GetModeType();
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	virtual color24 GetDebugColor();
	virtual const char * GetDebugValue();
	virtual const char * GetDebugString();
	EHANDLE GetDesiredPush();
	float GetPushTowerDesire(CDOTA_BaseNPC_Building *);
	bool WillingToBeInTowerRange();
	virtual ~CDOTA_BotMode_PushTower();

	// vtable[2] GetModeType
	// vtable[3] OnStart
	// vtable[4] OnEnd
	// vtable[5] Think
	// vtable[10] GetDesire
	// vtable[15] CalculateDesiredLocation
	// vtable[12] GetDebugColor
	// vtable[14] GetDebugValue
	// vtable[13] GetDebugString
	// sizeof = 248
};

// src/game/server/dota/bot/dota_bot_mode_push_tower.h:57
class CDOTA_BotMode_PushTower_Human : public CDOTA_BotMode_PushTower {
public:

private:

	bool m_bPingConsideredActive;  // +0xf4

	float m_fLastDamageToBuilding;  // +0xf8
	EHANDLE m_hTarget;  // +0xfc
	CDOTA_BotMode_PushTower_Human(CDOTA_BotMode_PushTower_Human &);
	CDOTA_BotMode_PushTower_Human(const CDOTA_BotMode_PushTower_Human &);
	CDOTA_BotMode_PushTower_Human(CDOTA_Bot *, DOTA_LANE, DOTA_BOT_MODE);
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual void OnDidDamage(CDOTA_BaseNPC *, CDOTABaseAbility *, int);
	virtual void OnAttacked(const CDOTA_AttackRecord *);
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	virtual const char * GetDebugString();
	virtual ~CDOTA_BotMode_PushTower_Human();

	// vtable[3] OnStart
	// vtable[4] OnEnd
	// vtable[5] Think
	// vtable[6] OnDidDamage
	// vtable[9] OnAttacked
	// vtable[10] GetDesire
	// vtable[15] CalculateDesiredLocation
	// vtable[13] GetDebugString
	// sizeof = 256
};
