// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_mode_defend_ally.h:15
class CDOTA_BotMode_DefendAlly : public CDOTA_BotMode {
public:

private:

	EHANDLE m_hAlly;  // +0xe0
	EHANDLE m_hTarget;  // +0xe4
	float m_fCurrentTargetScore;  // +0xe8
	CDOTA_BotMode_DefendAlly(CDOTA_BotMode_DefendAlly &);
	CDOTA_BotMode_DefendAlly(const CDOTA_BotMode_DefendAlly &);
	CDOTA_BotMode_DefendAlly(CDOTA_Bot *);
	virtual DOTA_BOT_MODE GetModeType();
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	virtual color24 GetDebugColor();
	virtual const char * GetDebugString();
	virtual const char * GetDebugValue();
	float GetDefendAllyScore(CDOTA_BaseNPC *, CDOTA_BaseNPC * *);
	virtual ~CDOTA_BotMode_DefendAlly();

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

// src/game/server/dota/bot/dota_bot_mode_defend_ally.h:49
class CDOTA_BotMode_DefendAlly_Human : public CDOTA_BotMode_DefendAlly {
public:

private:

	int m_iAttackCount;  // +0x120
	EHANDLE m_hAlly;  // +0x124
	EHANDLE m_hTarget;  // +0x128
	CDOTA_BotMode_DefendAlly_Human(CDOTA_BotMode_DefendAlly_Human &);
	CDOTA_BotMode_DefendAlly_Human(const CDOTA_BotMode_DefendAlly_Human &);
	CDOTA_BotMode_DefendAlly_Human(CDOTA_Bot *);
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual void OnDidDamage(CDOTA_BaseNPC *, CDOTABaseAbility *, int);
	virtual void OnAbilityExecuted(CDOTABaseAbility *, CBaseEntity *);
	virtual void OnAttacked(const CDOTA_AttackRecord *);
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	virtual const char * GetDebugString();
	virtual ~CDOTA_BotMode_DefendAlly_Human();

	// vtable[3] OnStart
	// vtable[4] OnEnd
	// vtable[5] Think
	// vtable[6] OnDidDamage
	// vtable[8] OnAbilityExecuted
	// vtable[9] OnAttacked
	// vtable[10] GetDesire
	// vtable[15] CalculateDesiredLocation
	// vtable[13] GetDebugString
	// sizeof = 304
};
