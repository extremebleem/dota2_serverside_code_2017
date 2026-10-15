// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_actions.h:39
class CDOTA_BotAction {
	int ()() * * _vptr.CDOTA_BotAction;  // +0x0
protected:

	int m_iActionFrame;  // +0x10
	CDOTA_BotAction(const CDOTA_BotAction &);
	CDOTA_BotAction(CDOTA_Bot *);
	virtual ~CDOTA_BotAction();
	virtual DOTA_BOT_ACTION GetActionType();
	virtual const char * GetDebugTarget();
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual void OnDidDamage(CDOTA_BaseNPC *, CDOTABaseAbility *, int);
	virtual void OnTakeDamage(const CTakeDamageInfo &);
	virtual void OnAttacked(const CDOTA_AttackRecord *);
	virtual void OnAbilityExecuted(CDOTABaseAbility *, CBaseEntity *);
	CDOTA_Bot * GetBot();
	CDOTA_BaseNPC * GetUnit();
	CDOTA_TeamCommander * GetTeamCommander();
	bool IsIdle();
	virtual bool ShouldBeQueued();

	// vtable[2] GetActionType
	// vtable[3] GetDebugTarget
	// vtable[4] OnStart
	// vtable[5] OnEnd
	// vtable[6] Think
	// vtable[7] OnDidDamage
	// vtable[8] OnTakeDamage
	// vtable[9] OnAttacked
	// vtable[10] OnAbilityExecuted
	// vtable[11] ShouldBeQueued
	// sizeof = 24
};

// src/game/server/dota/bot/dota_bot_actions.h:79
class CDOTA_BotAction_Idle : public CDOTA_BotAction {
public:

	CDOTA_BotAction_Idle(CDOTA_BotAction_Idle &);
	CDOTA_BotAction_Idle(const CDOTA_BotAction_Idle &);
	CDOTA_BotAction_Idle(CDOTA_Bot *);
	virtual const char * GetDebugTarget();
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual DOTA_BOT_ACTION GetActionType();
	virtual ~CDOTA_BotAction_Idle();

	// vtable[3] GetDebugTarget
	// vtable[4] OnStart
	// vtable[5] OnEnd
	// vtable[6] Think
	// vtable[2] GetActionType
	// sizeof = 24
};

// src/game/server/dota/bot/dota_bot_actions.h:108
class CDOTA_BotAction_MoveTo : public CDOTA_BotAction {
public:

private:

	int m_iResult;  // +0x14
	bool m_bAllowVisibleToEnemy;  // +0x18

	float m_fStartTime;  // +0x38

	bool m_bWaypointsValid;  // +0x70
	bool m_bForceRecalculate;  // +0x71
	bool m_bTowardsUnit;  // +0x72

	EHANDLE m_hTargetUnit;  // +0x74
	CDOTA_BotAction_MoveTo(CDOTA_BotAction_MoveTo &);
	CDOTA_BotAction_MoveTo(const CDOTA_BotAction_MoveTo &);
	CDOTA_BotAction_MoveTo(CDOTA_Bot *, const Vector &, bool);
	CDOTA_BotAction_MoveTo(CDOTA_Bot *, CDOTA_BaseNPC *);
	virtual const char * GetDebugTarget();
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	void UpdateLocation(const Vector &);
	virtual DOTA_BOT_ACTION GetActionType();
	Vector GetDestination();
	int NumWaypoints();
	Vector GetWaypoint(int);
	void ForceAdvanceToWaypoint(int);
	void InvalidateCurrentPath();
	float GetMoveDuration();
	void GeneratePathWaypoints(const int *);
	virtual ~CDOTA_BotAction_MoveTo();

	// vtable[3] GetDebugTarget
	// vtable[4] OnStart
	// vtable[5] OnEnd
	// vtable[6] Think
	// vtable[2] GetActionType
	// sizeof = 120
};

// src/game/server/dota/bot/dota_bot_actions.h:170
class CDOTA_BotAction_Attack : public CDOTA_BotAction {
public:

private:

	EHANDLE m_hTarget;  // +0x14
	bool m_bOnce;  // +0x18

	float m_fStartTime;  // +0x1c
	char m_DebugStringBuffer[128];  // +0x2c
	CDOTA_BotAction_Attack(CDOTA_BotAction_Attack &);
	CDOTA_BotAction_Attack(const CDOTA_BotAction_Attack &);
	CDOTA_BotAction_Attack(CDOTA_Bot *, EHANDLE, bool);
	virtual const char * GetDebugTarget();
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual void OnAttacked(const CDOTA_AttackRecord *);
	virtual DOTA_BOT_ACTION GetActionType();
	CDOTA_BaseNPC * GetTarget();
	EHANDLE GetRawTarget();
	virtual ~CDOTA_BotAction_Attack();

	// vtable[3] GetDebugTarget
	// vtable[4] OnStart
	// vtable[5] OnEnd
	// vtable[6] Think
	// vtable[9] OnAttacked
	// vtable[2] GetActionType
	// sizeof = 176
};

// src/game/server/dota/bot/dota_bot_actions.h:215
class CDOTA_BotAction_AttackMove : public CDOTA_BotAction {
public:

private:

	CDOTA_BotAction_AttackMove(CDOTA_BotAction_AttackMove &);
	CDOTA_BotAction_AttackMove(const CDOTA_BotAction_AttackMove &);
	CDOTA_BotAction_AttackMove(CDOTA_Bot *, const Vector &);
	virtual const char * GetDebugTarget();
	virtual void OnStart();
	virtual void Think();
	virtual DOTA_BOT_ACTION GetActionType();
	virtual ~CDOTA_BotAction_AttackMove();

	// vtable[3] GetDebugTarget
	// vtable[4] OnStart
	// vtable[6] Think
	// vtable[2] GetActionType
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_actions.h:246
class CDOTA_BotAction_UseAbility : public CDOTA_BotAction {
	enum {
		USEABILITY = 0,
		USEABILITY_ENTITY = 0x1,
		USEABILITY_LOCATION = 0x2,
		USEABILITY_TREE = 0x3,
	};

public:

protected:

	EHANDLE m_hAbility;  // +0x14
	int m_iUseAbilityType;  // +0x18
	EHANDLE m_hTarget;  // +0x1c
	int m_iTreeTarget;  // +0x2c
	char m_DebugStringBuffer[128];  // +0x3c
	CDOTA_BotAction_UseAbility(CDOTA_BotAction_UseAbility &);
	CDOTA_BotAction_UseAbility(const CDOTA_BotAction_UseAbility &);
	CDOTA_BotAction_UseAbility(CDOTA_Bot *, CDOTABaseAbility *);
	CDOTA_BotAction_UseAbility(CDOTA_Bot *, CDOTABaseAbility *, CDOTA_BaseNPC *);
	CDOTA_BotAction_UseAbility(CDOTA_Bot *, CDOTABaseAbility *, const Vector &);
	CDOTA_BotAction_UseAbility(CDOTA_Bot *, CDOTABaseAbility *, int);
	virtual const char * GetDebugTarget();
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual void OnAbilityExecuted(CDOTABaseAbility *, CBaseEntity *);
	virtual DOTA_BOT_ACTION GetActionType();
	CDOTABaseAbility * GetAbility();
	CDOTA_Item * GetItem();
	CDOTA_BaseNPC * GetEntityTarget();
	Vector GetLocationTarget();
	bool IsFinished();
	virtual bool ShouldBeQueued();
	virtual ~CDOTA_BotAction_UseAbility();

	// vtable[3] GetDebugTarget
	// vtable[4] OnStart
	// vtable[5] OnEnd
	// vtable[6] Think
	// vtable[10] OnAbilityExecuted
	// vtable[2] GetActionType
	// vtable[11] ShouldBeQueued
	// sizeof = 192
};

// src/game/server/dota/bot/dota_bot_actions.h:310
class CDOTA_BotAction_DispenseWard : public CDOTA_BotAction_UseAbility {
public:

private:

	bool m_bObserverWard;  // +0xbc
	CDOTA_BotAction_DispenseWard(CDOTA_BotAction_DispenseWard &);
	CDOTA_BotAction_DispenseWard(const CDOTA_BotAction_DispenseWard &);
	CDOTA_BotAction_DispenseWard(CDOTA_Bot *, CDOTABaseAbility *, const Vector &, bool);
	virtual void OnStart();
	virtual ~CDOTA_BotAction_DispenseWard();

	// vtable[4] OnStart
	// sizeof = 192
};

// src/game/server/dota/bot/dota_bot_actions.h:325
class CDOTA_BotAction_PickUpRune : public CDOTA_BotAction {
public:

private:

	EHANDLE m_hTarget;  // +0x14
	CDOTA_BotAction_PickUpRune(CDOTA_BotAction_PickUpRune &);
	CDOTA_BotAction_PickUpRune(const CDOTA_BotAction_PickUpRune &);
	CDOTA_BotAction_PickUpRune(CDOTA_Bot *, EHANDLE);
	virtual const char * GetDebugTarget();
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual DOTA_BOT_ACTION GetActionType();
	virtual ~CDOTA_BotAction_PickUpRune();

	// vtable[3] GetDebugTarget
	// vtable[4] OnStart
	// vtable[5] OnEnd
	// vtable[6] Think
	// vtable[2] GetActionType
	// sizeof = 24
};

// src/game/server/dota/bot/dota_bot_actions.h:348
class CDOTA_BotAction_PickUpItem : public CDOTA_BotAction {
public:

private:

	EHANDLE m_hTarget;  // +0x14
	CDOTA_BotAction_PickUpItem(CDOTA_BotAction_PickUpItem &);
	CDOTA_BotAction_PickUpItem(const CDOTA_BotAction_PickUpItem &);
	CDOTA_BotAction_PickUpItem(CDOTA_Bot *, EHANDLE);
	virtual const char * GetDebugTarget();
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual DOTA_BOT_ACTION GetActionType();
	virtual ~CDOTA_BotAction_PickUpItem();

	// vtable[3] GetDebugTarget
	// vtable[4] OnStart
	// vtable[5] OnEnd
	// vtable[6] Think
	// vtable[2] GetActionType
	// sizeof = 24
};

// src/game/server/dota/bot/dota_bot_actions.h:381
class CDOTA_BotAction_DropItem : public CDOTA_BotAction {
public:

private:

	EHANDLE m_hTarget;  // +0x14
	CDOTA_BotAction_DropItem(CDOTA_BotAction_DropItem &);
	CDOTA_BotAction_DropItem(const CDOTA_BotAction_DropItem &);
	CDOTA_BotAction_DropItem(CDOTA_Bot *, EHANDLE, const Vector &);
	virtual const char * GetDebugTarget();
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual DOTA_BOT_ACTION GetActionType();
	virtual ~CDOTA_BotAction_DropItem();

	// vtable[3] GetDebugTarget
	// vtable[4] OnStart
	// vtable[5] OnEnd
	// vtable[6] Think
	// vtable[2] GetActionType
	// sizeof = 40
};
