// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_mode_attack.h:15
class CDOTA_BotMode_Attack : public CDOTA_BotMode {
public:

protected:

	float m_fCurrentTargetScore;  // +0xe0
	EHANDLE m_hPotentialGankTarget;  // +0xe4
	CDOTA_BotMode_Attack(CDOTA_BotMode_Attack &);
	CDOTA_BotMode_Attack(const CDOTA_BotMode_Attack &);
	CDOTA_BotMode_Attack(CDOTA_Bot *);
	virtual DOTA_BOT_MODE GetModeType();
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	virtual color24 GetDebugColor();
	virtual const char * GetDebugString();
	virtual const char * GetDebugValue();
	virtual bool IsValidAttackTarget(CDOTA_BaseNPC *);
	virtual float GetAttackScore(CDOTA_BaseNPC *);
	bool FindPotentialAttackTarget(float, CDOTA_BaseNPC * *, float *);
	virtual ~CDOTA_BotMode_Attack();

	// vtable[2] GetModeType
	// vtable[3] OnStart
	// vtable[4] OnEnd
	// vtable[5] Think
	// vtable[10] GetDesire
	// vtable[15] CalculateDesiredLocation
	// vtable[12] GetDebugColor
	// vtable[13] GetDebugString
	// vtable[14] GetDebugValue
	// vtable[16] IsValidAttackTarget
	// vtable[17] GetAttackScore
	// sizeof = 232
};

// src/game/server/dota/bot/dota_bot_mode_attack.h:52
class CDOTA_BotMode_Attack_Human : public CDOTA_BotMode_Attack {
public:

private:

	EHANDLE m_hAbilityTarget;  // +0x118
	EHANDLE m_hAggroTarget;  // +0x11c
	CDOTA_BotMode_Attack_Human(CDOTA_BotMode_Attack_Human &);
	CDOTA_BotMode_Attack_Human(const CDOTA_BotMode_Attack_Human &);
	CDOTA_BotMode_Attack_Human(CDOTA_Bot *);
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual void OnDidDamage(CDOTA_BaseNPC *, CDOTABaseAbility *, int);
	virtual void OnAbilityExecuted(CDOTABaseAbility *, CBaseEntity *);
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	virtual const char * GetDebugString();
	virtual ~CDOTA_BotMode_Attack_Human();

	// vtable[3] OnStart
	// vtable[4] OnEnd
	// vtable[5] Think
	// vtable[6] OnDidDamage
	// vtable[8] OnAbilityExecuted
	// vtable[10] GetDesire
	// vtable[15] CalculateDesiredLocation
	// vtable[13] GetDebugString
	// sizeof = 288
};
