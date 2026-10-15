// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_mode.h:21
class CDOTA_BotMode {
	int ()() * * _vptr.CDOTA_BotMode;  // +0x0
protected:

	char m_DebugStringBuffer[128];  // +0x8
	char m_DebugValueBuffer[64];  // +0x88
private:

	int m_iDesireLocationFrame;  // +0xd4
	CDOTA_BotMode(const CDOTA_BotMode &);
	CDOTA_BotMode(CDOTA_Bot *);
	virtual ~CDOTA_BotMode();
	virtual DOTA_BOT_MODE GetModeType();
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual void OnDidDamage(CDOTA_BaseNPC *, CDOTABaseAbility *, int);
	virtual void OnTakeDamage(const CTakeDamageInfo &);
	virtual void OnAbilityExecuted(CDOTABaseAbility *, CBaseEntity *);
	virtual void OnAttacked(const CDOTA_AttackRecord *);
	CDOTA_Bot * GetBot();
	CDOTA_BaseNPC * GetUnit();
	CDOTA_BaseNPC_Hero * GetOwningHero();
	CDOTA_TeamCommander * GetTeamCommander();
	CDOTA_TeamCommander * GetOpposingTeamCommander();
	virtual float GetDesire();
	virtual Vector GetDesiredLocation();
	virtual color24 GetDebugColor();
	virtual const char * GetDebugString();
	virtual const char * GetDebugValue();
	bool IsBotTargetStatusValid(CDOTA_BaseNPC *, CDOTA_BaseNPC *, int, float);
	int GetBotTargetStatus(CDOTA_BaseNPC *, CDOTA_BaseNPC *, float);
	bool DoScriptOnStart();
	bool DoScriptOnEnd();
	bool DoScriptThink();
	float GetScriptDesire();

protected:

	const char * FormatDebugString(const char *, ...);
	const char * FormatDebugValue(const char *, ...);
	virtual Vector CalculateDesiredLocation();

	// vtable[2] GetModeType
	// vtable[3] OnStart
	// vtable[4] OnEnd
	// vtable[5] Think
	// vtable[6] OnDidDamage
	// vtable[7] OnTakeDamage
	// vtable[8] OnAbilityExecuted
	// vtable[9] OnAttacked
	// vtable[10] GetDesire
	// vtable[11] GetDesiredLocation
	// vtable[12] GetDebugColor
	// vtable[13] GetDebugString
	// vtable[14] GetDebugValue
	// vtable[15] CalculateDesiredLocation
	// sizeof = 224
};
