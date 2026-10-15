// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nextbot_s1/nextbotbehavior.h:75
struct IActionResult<CDOTA_BaseNPC> {
	const char * m_reason;  // +0x10
	IActionResult(ActionResultType, Action<CDOTA_BaseNPC> *, const char *);
	bool IsDone();
	bool IsContinue();
	bool IsRequestingChange();
	const char * GetTypeName();

	// sizeof = 24
};

// src/game/server/nextbot_s1/nextbotbehavior.h:75
struct IActionResult<CSimpleBot> {
	const char * m_reason;  // +0x10
	IActionResult(ActionResultType, Action<CSimpleBot> *, const char *);
	bool IsDone();
	bool IsContinue();
	bool IsRequestingChange();
	const char * GetTypeName();

	// sizeof = 24
};

// src/game/server/nextbot_s1/nextbotbehavior.h:126
struct ActionResult<CDOTA_BaseNPC> : public IActionResult<CDOTA_BaseNPC> {
public:

	ActionResult(ActionResultType, Action<CDOTA_BaseNPC> *, const char *);

	// sizeof = 24
};

// src/game/server/nextbot_s1/nextbotbehavior.h:126
struct ActionResult<CSimpleBot> : public IActionResult<CSimpleBot> {
public:

	ActionResult(ActionResultType, Action<CSimpleBot> *, const char *);

	// sizeof = 24
};

// src/game/server/nextbot_s1/nextbotbehavior.h:150
struct EventDesiredResult<CDOTA_BaseNPC> : public IActionResult<CDOTA_BaseNPC> {
public:

	EventDesiredResult(ActionResultType, Action<CDOTA_BaseNPC> *, EventResultPriorityType, const char *);

	// sizeof = 32
};

// src/game/server/nextbot_s1/nextbotbehavior.h:150
struct EventDesiredResult<CSimpleBot> : public IActionResult<CSimpleBot> {
public:

	EventDesiredResult(ActionResultType, Action<CSimpleBot> *, EventResultPriorityType, const char *);

	// sizeof = 32
};

// src/game/server/nextbot_s1/nextbotbehavior.h:169
class Behavior<CDOTA_BaseNPC> : public INextBotEventResponder, public IContextualQuery {
public:

private:

	Behavior(const Behavior<CDOTA_BaseNPC> &);
	Behavior(Action<CDOTA_BaseNPC> *, const char *);
	virtual ~Behavior();
	void Reset(Action<CDOTA_BaseNPC> *);
	bool IsEmpty();
	void Update(CDOTA_BaseNPC *, float);
	void Resume(CDOTA_BaseNPC *);
	const char * GetName();
	virtual INextBotEventResponder * FirstContainedResponder();
	virtual INextBotEventResponder * NextContainedResponder(INextBotEventResponder *);
	virtual QueryResultType ShouldPickUp(const INextBot *, CBaseEntity *);
	virtual QueryResultType ShouldHurry(const INextBot *);
	virtual QueryResultType ShouldRetreat(const INextBot *);
	virtual QueryResultType ShouldAttack(const INextBot *, const CKnownEntity *);
	virtual QueryResultType IsHindrance(const INextBot *, CBaseEntity *);
	virtual Vector SelectTargetPoint(const INextBot *, const CBaseCombatCharacter *);
	virtual QueryResultType IsPositionAllowed(const INextBot *, const Vector &);
	virtual const CKnownEntity * SelectMoreDangerousThreat(const INextBot *, const CBaseCombatCharacter *, const CKnownEntity *, const CKnownEntity *);

	// vtable[3] FirstContainedResponder
	// vtable[4] NextContainedResponder
	// vtable[62] ShouldPickUp
	// vtable[63] ShouldHurry
	// vtable[64] ShouldRetreat
	// vtable[65] ShouldAttack
	// vtable[66] IsHindrance
	// vtable[67] SelectTargetPoint
	// vtable[68] IsPositionAllowed
	// vtable[69] SelectMoreDangerousThreat
	// sizeof = 32
};

// src/game/server/nextbot_s1/nextbotbehavior.h:169
class Behavior<CSimpleBot> : public INextBotEventResponder, public IContextualQuery {
public:

private:

	Behavior(const Behavior<CSimpleBot> &);
	Behavior(Action<CSimpleBot> *, const char *);
	virtual ~Behavior();
	void Reset(Action<CSimpleBot> *);
	bool IsEmpty();
	void Update(CSimpleBot *, float);
	void Resume(CSimpleBot *);
	const char * GetName();
	virtual INextBotEventResponder * FirstContainedResponder();
	virtual INextBotEventResponder * NextContainedResponder(INextBotEventResponder *);
	virtual QueryResultType ShouldPickUp(const INextBot *, CBaseEntity *);
	virtual QueryResultType ShouldHurry(const INextBot *);
	virtual QueryResultType ShouldRetreat(const INextBot *);
	virtual QueryResultType ShouldAttack(const INextBot *, const CKnownEntity *);
	virtual QueryResultType IsHindrance(const INextBot *, CBaseEntity *);
	virtual Vector SelectTargetPoint(const INextBot *, const CBaseCombatCharacter *);
	virtual QueryResultType IsPositionAllowed(const INextBot *, const Vector &);
	virtual const CKnownEntity * SelectMoreDangerousThreat(const INextBot *, const CBaseCombatCharacter *, const CKnownEntity *, const CKnownEntity *);

	// vtable[3] FirstContainedResponder
	// vtable[4] NextContainedResponder
	// vtable[62] ShouldPickUp
	// vtable[63] ShouldHurry
	// vtable[64] ShouldRetreat
	// vtable[65] ShouldAttack
	// vtable[66] IsHindrance
	// vtable[67] SelectTargetPoint
	// vtable[68] IsPositionAllowed
	// vtable[69] SelectMoreDangerousThreat
	// sizeof = 32
};

// src/game/server/nextbot_s1/nextbotbehavior.h:549
class Action<CDOTA_BaseNPC> : public INextBotEventResponder, public IContextualQuery {
public:

private:

	bool m_isStarted;  // +0x60
	bool m_isSuspended;  // +0x61
	Action(const Action<CDOTA_BaseNPC> &);
	Action();
	virtual ~Action();
	virtual const char * GetName();
	virtual bool IsNamed(const char *);
	virtual const char * GetFullName();
	CDOTA_BaseNPC * GetActor();
	virtual ActionResult<CDOTA_BaseNPC> OnStart(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> Update(CDOTA_BaseNPC *, float);
	virtual void OnEnd(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> OnSuspend(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> OnResume(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	ActionResult<CDOTA_BaseNPC> Continue();
	ActionResult<CDOTA_BaseNPC> ChangeTo(Action<CDOTA_BaseNPC> *, const char *);
	ActionResult<CDOTA_BaseNPC> SuspendFor(Action<CDOTA_BaseNPC> *, const char *);
	ActionResult<CDOTA_BaseNPC> Done(const char *);
	virtual Action<CDOTA_BaseNPC> * InitialContainedAction(CDOTA_BaseNPC *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnLeaveGround(CDOTA_BaseNPC *, CBaseEntity *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnLandOnGround(CDOTA_BaseNPC *, CBaseEntity *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnContact(CDOTA_BaseNPC *, CBaseEntity *, CGameTrace *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnMoveToSuccess(CDOTA_BaseNPC *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnMoveToFailure(CDOTA_BaseNPC *, MoveToFailureType);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnStuck(CDOTA_BaseNPC *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnUnStuck(CDOTA_BaseNPC *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnPostureChanged(CDOTA_BaseNPC *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnAnimationActivityComplete(CDOTA_BaseNPC *, int);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnAnimationActivityInterrupted(CDOTA_BaseNPC *, int);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnAnimationEvent(CDOTA_BaseNPC *, animevent_t *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnIgnite(CDOTA_BaseNPC *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnInjured(CDOTA_BaseNPC *, const CTakeDamageInfo &);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnKilled(CDOTA_BaseNPC *, const CTakeDamageInfo &);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnOtherKilled(CDOTA_BaseNPC *, CBaseCombatCharacter *, const CTakeDamageInfo &);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnSight(CDOTA_BaseNPC *, CBaseEntity *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnLostSight(CDOTA_BaseNPC *, CBaseEntity *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnSound(CDOTA_BaseNPC *, CBaseEntity *, const Vector &, KeyValues *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnSpokeConcept(CDOTA_BaseNPC *, CBaseCombatCharacter *, AIConcept_t, AI_Response *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnWeaponFired(CDOTA_BaseNPC *, CBaseCombatCharacter *, CBaseCombatWeapon *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnNavAreaChanged(CDOTA_BaseNPC *, CNavArea *, CNavArea *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnModelChanged(CDOTA_BaseNPC *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnPickUp(CDOTA_BaseNPC *, CBaseEntity *, CBaseCombatCharacter *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnDrop(CDOTA_BaseNPC *, CBaseEntity *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnActorEmoted(CDOTA_BaseNPC *, CBaseCombatCharacter *, int);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCommandAttack(CDOTA_BaseNPC *, CBaseEntity *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCommandApproach(CDOTA_BaseNPC *, const Vector &, float);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCommandApproach(CDOTA_BaseNPC *, CBaseEntity *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCommandRetreat(CDOTA_BaseNPC *, CBaseEntity *, float);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCommandPause(CDOTA_BaseNPC *, float);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCommandResume(CDOTA_BaseNPC *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCommandString(CDOTA_BaseNPC *, const char *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnShoved(CDOTA_BaseNPC *, CBaseEntity *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnBlinded(CDOTA_BaseNPC *, CBaseEntity *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnTerritoryContested(CDOTA_BaseNPC *, int);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnTerritoryCaptured(CDOTA_BaseNPC *, int);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnTerritoryLost(CDOTA_BaseNPC *, int);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnWin(CDOTA_BaseNPC *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnLose(CDOTA_BaseNPC *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCommandMoveTo(CDOTA_BaseNPC *, const Vector &);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCommandMoveToDirection(CDOTA_BaseNPC *, const Vector &);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCommandMoveToAggressive(CDOTA_BaseNPC *, const Vector &);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCommandPatrol(CDOTA_BaseNPC *, const Vector &);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCommandAttack(CDOTA_BaseNPC *, CBaseEntity *, bool);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCastAbilityNoTarget(CDOTA_BaseNPC *, CDOTABaseAbility *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCastAbilityOnPosition(CDOTA_BaseNPC *, CDOTABaseAbility *, const Vector &);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCastAbilityOnTarget(CDOTA_BaseNPC *, CDOTABaseAbility *, CBaseEntity *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnDropItem(CDOTA_BaseNPC *, const Vector &, CBaseEntity *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnGiveItem(CDOTA_BaseNPC *, CBaseEntity *, CBaseEntity *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnPickupItem(CDOTA_BaseNPC *, CBaseEntity *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnPickupRune(CDOTA_BaseNPC *, CBaseEntity *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnStop(CDOTA_BaseNPC *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCancelAttack(CDOTA_BaseNPC *, CBaseEntity *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnDeAggro(CDOTA_BaseNPC *, CBaseEntity *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnDominated(CDOTA_BaseNPC *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnInvalidatePath(CDOTA_BaseNPC *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnUnitTeleported(CDOTA_BaseNPC *, CBaseEntity *, bool);
	EventDesiredResult<CDOTA_BaseNPC> TryContinue(EventResultPriorityType);
	EventDesiredResult<CDOTA_BaseNPC> TryChangeTo(Action<CDOTA_BaseNPC> *, EventResultPriorityType, const char *);
	EventDesiredResult<CDOTA_BaseNPC> TrySuspendFor(Action<CDOTA_BaseNPC> *, EventResultPriorityType, const char *);
	EventDesiredResult<CDOTA_BaseNPC> TryDone(EventResultPriorityType, const char *);
	EventDesiredResult<CDOTA_BaseNPC> TryToSustain(EventResultPriorityType, const char *);
	Action<CDOTA_BaseNPC> * GetActiveChildAction();
	Action<CDOTA_BaseNPC> * GetParentAction();
	bool IsSuspended();
	const char * DebugString();
	virtual bool IsAbleToBlockMovementOf(const INextBot *);
	virtual INextBotEventResponder * FirstContainedResponder();
	virtual INextBotEventResponder * NextContainedResponder(INextBotEventResponder *);
	virtual bool IsTopLevel();
	void DebugReceivedEvent(Action<CDOTA_BaseNPC> *, const char *);
	void StorePendingEventResult(Action<CDOTA_BaseNPC> *, const char *, EventDesiredResult<CDOTA_BaseNPC> &);
	virtual void OnLeaveGround(CBaseEntity *);
	virtual void OnLandOnGround(CBaseEntity *);
	virtual void OnContact(CBaseEntity *, CGameTrace *);
	virtual void OnMoveToSuccess();
	virtual void OnMoveToFailure(MoveToFailureType);
	virtual void OnStuck();
	virtual void OnUnStuck();
	virtual void OnPostureChanged();
	virtual void OnAnimationActivityComplete(Activity);
	virtual void OnAnimationActivityInterrupted(Activity);
	virtual void OnAnimationEvent(animevent_t *);
	virtual void OnIgnite();
	virtual void OnInjured(const CTakeDamageInfo &);
	virtual void OnKilled(const CTakeDamageInfo &);
	virtual void OnOtherKilled(CBaseCombatCharacter *, const CTakeDamageInfo &);
	virtual void OnSight(CBaseEntity *);
	virtual void OnLostSight(CBaseEntity *);
	virtual void OnSound(CBaseEntity *, const Vector &, KeyValues *);
	virtual void OnSpokeConcept(CBaseCombatCharacter *, AIConcept_t, AI_Response *);
	virtual void OnWeaponFired(CBaseCombatCharacter *, CBaseCombatWeapon *);
	virtual void OnNavAreaChanged(CNavArea *, CNavArea *);
	virtual void OnModelChanged();
	virtual void OnPickUp(CBaseEntity *, CBaseCombatCharacter *);
	virtual void OnDrop(CBaseEntity *);
	virtual void OnActorEmoted(CBaseCombatCharacter *, int);
	virtual void OnCommandAttack(CBaseEntity *);
	virtual void OnCommandApproach(const Vector &, float);
	virtual void OnCommandApproach(CBaseEntity *);
	virtual void OnCommandRetreat(CBaseEntity *, float);
	virtual void OnCommandPause(float);
	virtual void OnCommandResume();
	virtual void OnCommandString(const char *);
	virtual void OnShoved(CBaseEntity *);
	virtual void OnBlinded(CBaseEntity *);
	virtual void OnTerritoryContested(int);
	virtual void OnTerritoryCaptured(int);
	virtual void OnTerritoryLost(int);
	virtual void OnWin();
	virtual void OnLose();
	virtual void OnCommandMoveTo(const Vector &);
	virtual void OnCommandMoveToDirection(const Vector &);
	virtual void OnCommandMoveToAggressive(const Vector &);
	virtual void OnCommandPatrol(const Vector &);
	virtual void OnCommandAttack(CBaseEntity *, bool);
	virtual void OnCastAbilityNoTarget(CDOTABaseAbility *);
	virtual void OnCastAbilityOnPosition(CDOTABaseAbility *, const Vector &);
	virtual void OnCastAbilityOnTarget(CDOTABaseAbility *, CBaseEntity *);
	virtual void OnDropItem(const Vector &, CBaseEntity *);
	virtual void OnGiveItem(CBaseEntity *, CBaseEntity *);
	virtual void OnPickupItem(CBaseEntity *);
	virtual void OnPickupRune(CBaseEntity *);
	virtual void OnStop();
	virtual void OnCancelAttack(CBaseEntity *);
	virtual void OnDeAggro(CBaseEntity *);
	virtual void OnDominated();
	virtual void OnInvalidatePath();
	virtual void OnUnitTeleported(CBaseEntity *, bool);
	Action<CDOTA_BaseNPC> * GetActionBuriedUnderMe();
	Action<CDOTA_BaseNPC> * GetActionCoveringMe();
	bool IsOutOfScope();
	ActionResult<CDOTA_BaseNPC> ProcessPendingEvents();
	Action<CDOTA_BaseNPC> * ApplyResult(CDOTA_BaseNPC *, Behavior<CDOTA_BaseNPC> *, ActionResult<CDOTA_BaseNPC>);
	ActionResult<CDOTA_BaseNPC> InvokeOnStart(CDOTA_BaseNPC *, Behavior<CDOTA_BaseNPC> *, Action<CDOTA_BaseNPC> *, Action<CDOTA_BaseNPC> *);
	ActionResult<CDOTA_BaseNPC> InvokeUpdate(CDOTA_BaseNPC *, Behavior<CDOTA_BaseNPC> *, float);
	void InvokeOnEnd(CDOTA_BaseNPC *, Behavior<CDOTA_BaseNPC> *, Action<CDOTA_BaseNPC> *);
	Action<CDOTA_BaseNPC> * InvokeOnSuspend(CDOTA_BaseNPC *, Behavior<CDOTA_BaseNPC> *, Action<CDOTA_BaseNPC> *);
	ActionResult<CDOTA_BaseNPC> InvokeOnResume(CDOTA_BaseNPC *, Behavior<CDOTA_BaseNPC> *, Action<CDOTA_BaseNPC> *);
	void StorePendingEventResult(const EventDesiredResult<CDOTA_BaseNPC> &, const char *);
	char * BuildDecoratedName(char *, const Action<CDOTA_BaseNPC> *);
	void PrintStateToConsole();

	// vtable[62] GetName
	// vtable[63] IsNamed
	// vtable[64] GetFullName
	// vtable[65] OnStart
	// vtable[66] Update
	// vtable[67] OnEnd
	// vtable[68] OnSuspend
	// vtable[69] OnResume
	// vtable[70] InitialContainedAction
	// vtable[71] OnLeaveGround
	// vtable[72] OnLandOnGround
	// vtable[73] OnContact
	// vtable[74] OnMoveToSuccess
	// vtable[75] OnMoveToFailure
	// vtable[76] OnStuck
	// vtable[77] OnUnStuck
	// vtable[78] OnPostureChanged
	// vtable[79] OnAnimationActivityComplete
	// vtable[80] OnAnimationActivityInterrupted
	// vtable[81] OnAnimationEvent
	// vtable[82] OnIgnite
	// vtable[83] OnInjured
	// vtable[84] OnKilled
	// vtable[85] OnOtherKilled
	// vtable[86] OnSight
	// vtable[87] OnLostSight
	// vtable[88] OnSound
	// vtable[89] OnSpokeConcept
	// vtable[90] OnWeaponFired
	// vtable[91] OnNavAreaChanged
	// vtable[92] OnModelChanged
	// vtable[93] OnPickUp
	// vtable[94] OnDrop
	// vtable[95] OnActorEmoted
	// vtable[96] OnCommandAttack
	// vtable[97] OnCommandApproach
	// vtable[98] OnCommandApproach
	// vtable[99] OnCommandRetreat
	// vtable[100] OnCommandPause
	// vtable[101] OnCommandResume
	// vtable[102] OnCommandString
	// vtable[103] OnShoved
	// vtable[104] OnBlinded
	// vtable[105] OnTerritoryContested
	// vtable[106] OnTerritoryCaptured
	// vtable[107] OnTerritoryLost
	// vtable[108] OnWin
	// vtable[109] OnLose
	// vtable[110] OnCommandMoveTo
	// vtable[111] OnCommandMoveToDirection
	// vtable[112] OnCommandMoveToAggressive
	// vtable[113] OnCommandPatrol
	// vtable[114] OnCommandAttack
	// vtable[115] OnCastAbilityNoTarget
	// vtable[116] OnCastAbilityOnPosition
	// vtable[117] OnCastAbilityOnTarget
	// vtable[118] OnDropItem
	// vtable[119] OnGiveItem
	// vtable[120] OnPickupItem
	// vtable[121] OnPickupRune
	// vtable[122] OnStop
	// vtable[123] OnCancelAttack
	// vtable[124] OnDeAggro
	// vtable[125] OnDominated
	// vtable[126] OnInvalidatePath
	// vtable[127] OnUnitTeleported
	// vtable[128] IsAbleToBlockMovementOf
	// vtable[3] FirstContainedResponder
	// vtable[4] NextContainedResponder
	// vtable[129] IsTopLevel
	// vtable[5] OnLeaveGround
	// vtable[6] OnLandOnGround
	// vtable[7] OnContact
	// vtable[8] OnMoveToSuccess
	// vtable[9] OnMoveToFailure
	// vtable[10] OnStuck
	// vtable[11] OnUnStuck
	// vtable[12] OnPostureChanged
	// vtable[13] OnAnimationActivityComplete
	// vtable[14] OnAnimationActivityInterrupted
	// vtable[15] OnAnimationEvent
	// vtable[16] OnIgnite
	// vtable[17] OnInjured
	// vtable[18] OnKilled
	// vtable[19] OnOtherKilled
	// vtable[20] OnSight
	// vtable[21] OnLostSight
	// vtable[22] OnSound
	// vtable[23] OnSpokeConcept
	// vtable[24] OnWeaponFired
	// vtable[25] OnNavAreaChanged
	// vtable[26] OnModelChanged
	// vtable[27] OnPickUp
	// vtable[28] OnDrop
	// vtable[29] OnActorEmoted
	// vtable[30] OnCommandAttack
	// vtable[31] OnCommandApproach
	// vtable[32] OnCommandApproach
	// vtable[33] OnCommandRetreat
	// vtable[34] OnCommandPause
	// vtable[35] OnCommandResume
	// vtable[36] OnCommandString
	// vtable[37] OnShoved
	// vtable[38] OnBlinded
	// vtable[39] OnTerritoryContested
	// vtable[40] OnTerritoryCaptured
	// vtable[41] OnTerritoryLost
	// vtable[42] OnWin
	// vtable[43] OnLose
	// vtable[44] OnCommandMoveTo
	// vtable[45] OnCommandMoveToDirection
	// vtable[46] OnCommandMoveToAggressive
	// vtable[47] OnCommandPatrol
	// vtable[48] OnCommandAttack
	// vtable[49] OnCastAbilityNoTarget
	// vtable[50] OnCastAbilityOnPosition
	// vtable[51] OnCastAbilityOnTarget
	// vtable[52] OnDropItem
	// vtable[53] OnGiveItem
	// vtable[54] OnPickupItem
	// vtable[55] OnPickupRune
	// vtable[56] OnStop
	// vtable[57] OnCancelAttack
	// vtable[58] OnDeAggro
	// vtable[59] OnDominated
	// vtable[60] OnInvalidatePath
	// vtable[61] OnUnitTeleported
	// sizeof = 104
};

// src/game/server/nextbot_s1/nextbotbehavior.h:549
class Action<CSimpleBot> : public INextBotEventResponder, public IContextualQuery {
public:

private:

	bool m_isStarted;  // +0x60
	bool m_isSuspended;  // +0x61
	Action(const Action<CSimpleBot> &);
	Action();
	virtual ~Action();
	virtual const char * GetName();
	virtual bool IsNamed(const char *);
	virtual const char * GetFullName();
	CSimpleBot * GetActor();
	virtual ActionResult<CSimpleBot> OnStart(CSimpleBot *, Action<CSimpleBot> *);
	virtual ActionResult<CSimpleBot> Update(CSimpleBot *, float);
	virtual void OnEnd(CSimpleBot *, Action<CSimpleBot> *);
	virtual ActionResult<CSimpleBot> OnSuspend(CSimpleBot *, Action<CSimpleBot> *);
	virtual ActionResult<CSimpleBot> OnResume(CSimpleBot *, Action<CSimpleBot> *);
	ActionResult<CSimpleBot> Continue();
	ActionResult<CSimpleBot> ChangeTo(Action<CSimpleBot> *, const char *);
	ActionResult<CSimpleBot> SuspendFor(Action<CSimpleBot> *, const char *);
	ActionResult<CSimpleBot> Done(const char *);
	virtual Action<CSimpleBot> * InitialContainedAction(CSimpleBot *);
	virtual EventDesiredResult<CSimpleBot> OnLeaveGround(CSimpleBot *, CBaseEntity *);
	virtual EventDesiredResult<CSimpleBot> OnLandOnGround(CSimpleBot *, CBaseEntity *);
	virtual EventDesiredResult<CSimpleBot> OnContact(CSimpleBot *, CBaseEntity *, CGameTrace *);
	virtual EventDesiredResult<CSimpleBot> OnMoveToSuccess(CSimpleBot *);
	virtual EventDesiredResult<CSimpleBot> OnMoveToFailure(CSimpleBot *, MoveToFailureType);
	virtual EventDesiredResult<CSimpleBot> OnStuck(CSimpleBot *);
	virtual EventDesiredResult<CSimpleBot> OnUnStuck(CSimpleBot *);
	virtual EventDesiredResult<CSimpleBot> OnPostureChanged(CSimpleBot *);
	virtual EventDesiredResult<CSimpleBot> OnAnimationActivityComplete(CSimpleBot *, int);
	virtual EventDesiredResult<CSimpleBot> OnAnimationActivityInterrupted(CSimpleBot *, int);
	virtual EventDesiredResult<CSimpleBot> OnAnimationEvent(CSimpleBot *, animevent_t *);
	virtual EventDesiredResult<CSimpleBot> OnIgnite(CSimpleBot *);
	virtual EventDesiredResult<CSimpleBot> OnInjured(CSimpleBot *, const CTakeDamageInfo &);
	virtual EventDesiredResult<CSimpleBot> OnKilled(CSimpleBot *, const CTakeDamageInfo &);
	virtual EventDesiredResult<CSimpleBot> OnOtherKilled(CSimpleBot *, CBaseCombatCharacter *, const CTakeDamageInfo &);
	virtual EventDesiredResult<CSimpleBot> OnSight(CSimpleBot *, CBaseEntity *);
	virtual EventDesiredResult<CSimpleBot> OnLostSight(CSimpleBot *, CBaseEntity *);
	virtual EventDesiredResult<CSimpleBot> OnSound(CSimpleBot *, CBaseEntity *, const Vector &, KeyValues *);
	virtual EventDesiredResult<CSimpleBot> OnSpokeConcept(CSimpleBot *, CBaseCombatCharacter *, AIConcept_t, AI_Response *);
	virtual EventDesiredResult<CSimpleBot> OnWeaponFired(CSimpleBot *, CBaseCombatCharacter *, CBaseCombatWeapon *);
	virtual EventDesiredResult<CSimpleBot> OnNavAreaChanged(CSimpleBot *, CNavArea *, CNavArea *);
	virtual EventDesiredResult<CSimpleBot> OnModelChanged(CSimpleBot *);
	virtual EventDesiredResult<CSimpleBot> OnPickUp(CSimpleBot *, CBaseEntity *, CBaseCombatCharacter *);
	virtual EventDesiredResult<CSimpleBot> OnDrop(CSimpleBot *, CBaseEntity *);
	virtual EventDesiredResult<CSimpleBot> OnActorEmoted(CSimpleBot *, CBaseCombatCharacter *, int);
	virtual EventDesiredResult<CSimpleBot> OnCommandAttack(CSimpleBot *, CBaseEntity *);
	virtual EventDesiredResult<CSimpleBot> OnCommandApproach(CSimpleBot *, const Vector &, float);
	virtual EventDesiredResult<CSimpleBot> OnCommandApproach(CSimpleBot *, CBaseEntity *);
	virtual EventDesiredResult<CSimpleBot> OnCommandRetreat(CSimpleBot *, CBaseEntity *, float);
	virtual EventDesiredResult<CSimpleBot> OnCommandPause(CSimpleBot *, float);
	virtual EventDesiredResult<CSimpleBot> OnCommandResume(CSimpleBot *);
	virtual EventDesiredResult<CSimpleBot> OnCommandString(CSimpleBot *, const char *);
	virtual EventDesiredResult<CSimpleBot> OnShoved(CSimpleBot *, CBaseEntity *);
	virtual EventDesiredResult<CSimpleBot> OnBlinded(CSimpleBot *, CBaseEntity *);
	virtual EventDesiredResult<CSimpleBot> OnTerritoryContested(CSimpleBot *, int);
	virtual EventDesiredResult<CSimpleBot> OnTerritoryCaptured(CSimpleBot *, int);
	virtual EventDesiredResult<CSimpleBot> OnTerritoryLost(CSimpleBot *, int);
	virtual EventDesiredResult<CSimpleBot> OnWin(CSimpleBot *);
	virtual EventDesiredResult<CSimpleBot> OnLose(CSimpleBot *);
	virtual EventDesiredResult<CSimpleBot> OnCommandMoveTo(CSimpleBot *, const Vector &);
	virtual EventDesiredResult<CSimpleBot> OnCommandMoveToDirection(CSimpleBot *, const Vector &);
	virtual EventDesiredResult<CSimpleBot> OnCommandMoveToAggressive(CSimpleBot *, const Vector &);
	virtual EventDesiredResult<CSimpleBot> OnCommandPatrol(CSimpleBot *, const Vector &);
	virtual EventDesiredResult<CSimpleBot> OnCommandAttack(CSimpleBot *, CBaseEntity *, bool);
	virtual EventDesiredResult<CSimpleBot> OnCastAbilityNoTarget(CSimpleBot *, CDOTABaseAbility *);
	virtual EventDesiredResult<CSimpleBot> OnCastAbilityOnPosition(CSimpleBot *, CDOTABaseAbility *, const Vector &);
	virtual EventDesiredResult<CSimpleBot> OnCastAbilityOnTarget(CSimpleBot *, CDOTABaseAbility *, CBaseEntity *);
	virtual EventDesiredResult<CSimpleBot> OnDropItem(CSimpleBot *, const Vector &, CBaseEntity *);
	virtual EventDesiredResult<CSimpleBot> OnGiveItem(CSimpleBot *, CBaseEntity *, CBaseEntity *);
	virtual EventDesiredResult<CSimpleBot> OnPickupItem(CSimpleBot *, CBaseEntity *);
	virtual EventDesiredResult<CSimpleBot> OnPickupRune(CSimpleBot *, CBaseEntity *);
	virtual EventDesiredResult<CSimpleBot> OnStop(CSimpleBot *);
	virtual EventDesiredResult<CSimpleBot> OnCancelAttack(CSimpleBot *, CBaseEntity *);
	virtual EventDesiredResult<CSimpleBot> OnDeAggro(CSimpleBot *, CBaseEntity *);
	virtual EventDesiredResult<CSimpleBot> OnDominated(CSimpleBot *);
	virtual EventDesiredResult<CSimpleBot> OnInvalidatePath(CSimpleBot *);
	virtual EventDesiredResult<CSimpleBot> OnUnitTeleported(CSimpleBot *, CBaseEntity *, bool);
	EventDesiredResult<CSimpleBot> TryContinue(EventResultPriorityType);
	EventDesiredResult<CSimpleBot> TryChangeTo(Action<CSimpleBot> *, EventResultPriorityType, const char *);
	EventDesiredResult<CSimpleBot> TrySuspendFor(Action<CSimpleBot> *, EventResultPriorityType, const char *);
	EventDesiredResult<CSimpleBot> TryDone(EventResultPriorityType, const char *);
	EventDesiredResult<CSimpleBot> TryToSustain(EventResultPriorityType, const char *);
	Action<CSimpleBot> * GetActiveChildAction();
	Action<CSimpleBot> * GetParentAction();
	bool IsSuspended();
	const char * DebugString();
	virtual bool IsAbleToBlockMovementOf(const INextBot *);
	virtual INextBotEventResponder * FirstContainedResponder();
	virtual INextBotEventResponder * NextContainedResponder(INextBotEventResponder *);
	virtual bool IsTopLevel();
	void DebugReceivedEvent(Action<CSimpleBot> *, const char *);
	void StorePendingEventResult(Action<CSimpleBot> *, const char *, EventDesiredResult<CSimpleBot> &);
	virtual void OnLeaveGround(CBaseEntity *);
	virtual void OnLandOnGround(CBaseEntity *);
	virtual void OnContact(CBaseEntity *, CGameTrace *);
	virtual void OnMoveToSuccess();
	virtual void OnMoveToFailure(MoveToFailureType);
	virtual void OnStuck();
	virtual void OnUnStuck();
	virtual void OnPostureChanged();
	virtual void OnAnimationActivityComplete(Activity);
	virtual void OnAnimationActivityInterrupted(Activity);
	virtual void OnAnimationEvent(animevent_t *);
	virtual void OnIgnite();
	virtual void OnInjured(const CTakeDamageInfo &);
	virtual void OnKilled(const CTakeDamageInfo &);
	virtual void OnOtherKilled(CBaseCombatCharacter *, const CTakeDamageInfo &);
	virtual void OnSight(CBaseEntity *);
	virtual void OnLostSight(CBaseEntity *);
	virtual void OnSound(CBaseEntity *, const Vector &, KeyValues *);
	virtual void OnSpokeConcept(CBaseCombatCharacter *, AIConcept_t, AI_Response *);
	virtual void OnWeaponFired(CBaseCombatCharacter *, CBaseCombatWeapon *);
	virtual void OnNavAreaChanged(CNavArea *, CNavArea *);
	virtual void OnModelChanged();
	virtual void OnPickUp(CBaseEntity *, CBaseCombatCharacter *);
	virtual void OnDrop(CBaseEntity *);
	virtual void OnActorEmoted(CBaseCombatCharacter *, int);
	virtual void OnCommandAttack(CBaseEntity *);
	virtual void OnCommandApproach(const Vector &, float);
	virtual void OnCommandApproach(CBaseEntity *);
	virtual void OnCommandRetreat(CBaseEntity *, float);
	virtual void OnCommandPause(float);
	virtual void OnCommandResume();
	virtual void OnCommandString(const char *);
	virtual void OnShoved(CBaseEntity *);
	virtual void OnBlinded(CBaseEntity *);
	virtual void OnTerritoryContested(int);
	virtual void OnTerritoryCaptured(int);
	virtual void OnTerritoryLost(int);
	virtual void OnWin();
	virtual void OnLose();
	virtual void OnCommandMoveTo(const Vector &);
	virtual void OnCommandMoveToDirection(const Vector &);
	virtual void OnCommandMoveToAggressive(const Vector &);
	virtual void OnCommandPatrol(const Vector &);
	virtual void OnCommandAttack(CBaseEntity *, bool);
	virtual void OnCastAbilityNoTarget(CDOTABaseAbility *);
	virtual void OnCastAbilityOnPosition(CDOTABaseAbility *, const Vector &);
	virtual void OnCastAbilityOnTarget(CDOTABaseAbility *, CBaseEntity *);
	virtual void OnDropItem(const Vector &, CBaseEntity *);
	virtual void OnGiveItem(CBaseEntity *, CBaseEntity *);
	virtual void OnPickupItem(CBaseEntity *);
	virtual void OnPickupRune(CBaseEntity *);
	virtual void OnStop();
	virtual void OnCancelAttack(CBaseEntity *);
	virtual void OnDeAggro(CBaseEntity *);
	virtual void OnDominated();
	virtual void OnInvalidatePath();
	virtual void OnUnitTeleported(CBaseEntity *, bool);
	Action<CSimpleBot> * GetActionBuriedUnderMe();
	Action<CSimpleBot> * GetActionCoveringMe();
	bool IsOutOfScope();
	ActionResult<CSimpleBot> ProcessPendingEvents();
	Action<CSimpleBot> * ApplyResult(CSimpleBot *, Behavior<CSimpleBot> *, ActionResult<CSimpleBot>);
	ActionResult<CSimpleBot> InvokeOnStart(CSimpleBot *, Behavior<CSimpleBot> *, Action<CSimpleBot> *, Action<CSimpleBot> *);
	ActionResult<CSimpleBot> InvokeUpdate(CSimpleBot *, Behavior<CSimpleBot> *, float);
	void InvokeOnEnd(CSimpleBot *, Behavior<CSimpleBot> *, Action<CSimpleBot> *);
	Action<CSimpleBot> * InvokeOnSuspend(CSimpleBot *, Behavior<CSimpleBot> *, Action<CSimpleBot> *);
	ActionResult<CSimpleBot> InvokeOnResume(CSimpleBot *, Behavior<CSimpleBot> *, Action<CSimpleBot> *);
	void StorePendingEventResult(const EventDesiredResult<CSimpleBot> &, const char *);
	char * BuildDecoratedName(char *, const Action<CSimpleBot> *);
	void PrintStateToConsole();

	// vtable[62] GetName
	// vtable[63] IsNamed
	// vtable[64] GetFullName
	// vtable[65] OnStart
	// vtable[66] Update
	// vtable[67] OnEnd
	// vtable[68] OnSuspend
	// vtable[69] OnResume
	// vtable[70] InitialContainedAction
	// vtable[71] OnLeaveGround
	// vtable[72] OnLandOnGround
	// vtable[73] OnContact
	// vtable[74] OnMoveToSuccess
	// vtable[75] OnMoveToFailure
	// vtable[76] OnStuck
	// vtable[77] OnUnStuck
	// vtable[78] OnPostureChanged
	// vtable[79] OnAnimationActivityComplete
	// vtable[80] OnAnimationActivityInterrupted
	// vtable[81] OnAnimationEvent
	// vtable[82] OnIgnite
	// vtable[83] OnInjured
	// vtable[84] OnKilled
	// vtable[85] OnOtherKilled
	// vtable[86] OnSight
	// vtable[87] OnLostSight
	// vtable[88] OnSound
	// vtable[89] OnSpokeConcept
	// vtable[90] OnWeaponFired
	// vtable[91] OnNavAreaChanged
	// vtable[92] OnModelChanged
	// vtable[93] OnPickUp
	// vtable[94] OnDrop
	// vtable[95] OnActorEmoted
	// vtable[96] OnCommandAttack
	// vtable[97] OnCommandApproach
	// vtable[98] OnCommandApproach
	// vtable[99] OnCommandRetreat
	// vtable[100] OnCommandPause
	// vtable[101] OnCommandResume
	// vtable[102] OnCommandString
	// vtable[103] OnShoved
	// vtable[104] OnBlinded
	// vtable[105] OnTerritoryContested
	// vtable[106] OnTerritoryCaptured
	// vtable[107] OnTerritoryLost
	// vtable[108] OnWin
	// vtable[109] OnLose
	// vtable[110] OnCommandMoveTo
	// vtable[111] OnCommandMoveToDirection
	// vtable[112] OnCommandMoveToAggressive
	// vtable[113] OnCommandPatrol
	// vtable[114] OnCommandAttack
	// vtable[115] OnCastAbilityNoTarget
	// vtable[116] OnCastAbilityOnPosition
	// vtable[117] OnCastAbilityOnTarget
	// vtable[118] OnDropItem
	// vtable[119] OnGiveItem
	// vtable[120] OnPickupItem
	// vtable[121] OnPickupRune
	// vtable[122] OnStop
	// vtable[123] OnCancelAttack
	// vtable[124] OnDeAggro
	// vtable[125] OnDominated
	// vtable[126] OnInvalidatePath
	// vtable[127] OnUnitTeleported
	// vtable[128] IsAbleToBlockMovementOf
	// vtable[3] FirstContainedResponder
	// vtable[4] NextContainedResponder
	// vtable[129] IsTopLevel
	// vtable[5] OnLeaveGround
	// vtable[6] OnLandOnGround
	// vtable[7] OnContact
	// vtable[8] OnMoveToSuccess
	// vtable[9] OnMoveToFailure
	// vtable[10] OnStuck
	// vtable[11] OnUnStuck
	// vtable[12] OnPostureChanged
	// vtable[13] OnAnimationActivityComplete
	// vtable[14] OnAnimationActivityInterrupted
	// vtable[15] OnAnimationEvent
	// vtable[16] OnIgnite
	// vtable[17] OnInjured
	// vtable[18] OnKilled
	// vtable[19] OnOtherKilled
	// vtable[20] OnSight
	// vtable[21] OnLostSight
	// vtable[22] OnSound
	// vtable[23] OnSpokeConcept
	// vtable[24] OnWeaponFired
	// vtable[25] OnNavAreaChanged
	// vtable[26] OnModelChanged
	// vtable[27] OnPickUp
	// vtable[28] OnDrop
	// vtable[29] OnActorEmoted
	// vtable[30] OnCommandAttack
	// vtable[31] OnCommandApproach
	// vtable[32] OnCommandApproach
	// vtable[33] OnCommandRetreat
	// vtable[34] OnCommandPause
	// vtable[35] OnCommandResume
	// vtable[36] OnCommandString
	// vtable[37] OnShoved
	// vtable[38] OnBlinded
	// vtable[39] OnTerritoryContested
	// vtable[40] OnTerritoryCaptured
	// vtable[41] OnTerritoryLost
	// vtable[42] OnWin
	// vtable[43] OnLose
	// vtable[44] OnCommandMoveTo
	// vtable[45] OnCommandMoveToDirection
	// vtable[46] OnCommandMoveToAggressive
	// vtable[47] OnCommandPatrol
	// vtable[48] OnCommandAttack
	// vtable[49] OnCastAbilityNoTarget
	// vtable[50] OnCastAbilityOnPosition
	// vtable[51] OnCastAbilityOnTarget
	// vtable[52] OnDropItem
	// vtable[53] OnGiveItem
	// vtable[54] OnPickupItem
	// vtable[55] OnPickupRune
	// vtable[56] OnStop
	// vtable[57] OnCancelAttack
	// vtable[58] OnDeAggro
	// vtable[59] OnDominated
	// vtable[60] OnInvalidatePath
	// vtable[61] OnUnitTeleported
	// sizeof = 104
};
