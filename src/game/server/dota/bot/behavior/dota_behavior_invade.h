// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/behavior/dota_behavior_invade.h:9
class CDOTABehaviorInvade : public Action<CDOTA_BaseNPC>, IDOTABehaviorMoveTo {
public:

protected:

	EHANDLE m_goalEntity;  // +0x150
	EHANDLE m_nextGoalEntity;  // +0x154
	bool m_bReachedFinalGoal;  // +0x158
	CDOTABehaviorInvade(CDOTABehaviorInvade &);
	CDOTABehaviorInvade(const CDOTABehaviorInvade &);
	CDOTABehaviorInvade();
	virtual ActionResult<CDOTA_BaseNPC> OnStart(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	ActionResult<CDOTA_BaseNPC> OnStartInternal(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> Update(CDOTA_BaseNPC *, float);
	virtual ActionResult<CDOTA_BaseNPC> OnResume(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnContact(CDOTA_BaseNPC *, CBaseEntity *, CGameTrace *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnDominated(CDOTA_BaseNPC *);
	virtual const char * GetName();
	virtual Vector GetTargetPosition(CDOTA_BaseNPC *);
	virtual bool DoesTargetMove();
	virtual CBaseEntity * GetGoalEntity(CDOTA_BaseNPC *);
	virtual float GetMoveSpeed(CDOTA_BaseNPC *);
	virtual ~CDOTABehaviorInvade();

	// vtable[65] OnStart
	// vtable[66] Update
	// vtable[69] OnResume
	// vtable[73] OnContact
	// vtable[125] OnDominated
	// vtable[62] GetName
	// vtable[130] GetTargetPosition
	// vtable[131] DoesTargetMove
	// vtable[132] GetGoalEntity
	// vtable[133] GetMoveSpeed
	// sizeof = 352
};

// src/game/server/dota/bot/behavior/dota_behavior_invade.h:41
class CDOTABehaviorTutorialInvade : public CDOTABehaviorInvade {
public:

protected:

	EHANDLE m_lastSetGoalEntity;  // +0x15c
	CDOTABehaviorTutorialInvade(CDOTABehaviorTutorialInvade &);
	CDOTABehaviorTutorialInvade(const CDOTABehaviorTutorialInvade &);
	CDOTABehaviorTutorialInvade();
	virtual ActionResult<CDOTA_BaseNPC> OnStart(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> Update(CDOTA_BaseNPC *, float);
	virtual ActionResult<CDOTA_BaseNPC> OnResume(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual CBaseEntity * GetGoalEntity(CDOTA_BaseNPC *);
	virtual ~CDOTABehaviorTutorialInvade();

	// vtable[65] OnStart
	// vtable[66] Update
	// vtable[69] OnResume
	// vtable[132] GetGoalEntity
	// sizeof = 352
};

// src/game/server/dota/bot/behavior/dota_behavior_invade.h:54
class CDOTABehaviorRoquelaireInvade : public CDOTABehaviorTutorialInvade {
public:

private:

	bool m_bStartedLanding;  // +0x160
	CDOTABehaviorRoquelaireInvade(CDOTABehaviorRoquelaireInvade &);
	CDOTABehaviorRoquelaireInvade(const CDOTABehaviorRoquelaireInvade &);
	CDOTABehaviorRoquelaireInvade();
	virtual ActionResult<CDOTA_BaseNPC> OnStart(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> Update(CDOTA_BaseNPC *, float);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnAnimationActivityComplete(CDOTA_BaseNPC *, int);
	virtual ~CDOTABehaviorRoquelaireInvade();

	// vtable[65] OnStart
	// vtable[66] Update
	// vtable[79] OnAnimationActivityComplete
	// sizeof = 360
};

// src/game/server/dota/bot/behavior/dota_behavior_invade.h:65
class CDOTABehaviorCreatureInvade : public CDOTABehaviorInvade {
public:

private:

	float m_flMoveRate;  // +0x168
	CDOTABehaviorCreatureInvade(const CDOTABehaviorCreatureInvade &);
	CDOTABehaviorCreatureInvade();
	virtual ~CDOTABehaviorCreatureInvade();
	virtual ActionResult<CDOTA_BaseNPC> OnStart(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> Update(CDOTA_BaseNPC *, float);
	virtual Vector GetTargetPosition(CDOTA_BaseNPC *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCommandMoveTo(CDOTA_BaseNPC *, const Vector &);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCommandMoveToAggressive(CDOTA_BaseNPC *, const Vector &);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCommandApproach(CDOTA_BaseNPC *, CBaseEntity *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCommandAttack(CDOTA_BaseNPC *, CBaseEntity *, bool);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCastAbilityNoTarget(CDOTA_BaseNPC *, CDOTABaseAbility *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCastAbilityOnPosition(CDOTA_BaseNPC *, CDOTABaseAbility *, const Vector &);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCastAbilityOnTarget(CDOTA_BaseNPC *, CDOTABaseAbility *, CBaseEntity *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnDropItem(CDOTA_BaseNPC *, const Vector &, CBaseEntity *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnGiveItem(CDOTA_BaseNPC *, CBaseEntity *, CBaseEntity *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnPickupItem(CDOTA_BaseNPC *, CBaseEntity *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnPickupRune(CDOTA_BaseNPC *, CBaseEntity *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnStop(CDOTA_BaseNPC *);

protected:

	virtual float GetMoveSpeed(CDOTA_BaseNPC *);

private:

	void UpdateMoveRate(CDOTA_BaseNPC *);
	void UpdateJitter(CDOTA_BaseNPC *);

	// vtable[65] OnStart
	// vtable[66] Update
	// vtable[130] GetTargetPosition
	// vtable[110] OnCommandMoveTo
	// vtable[112] OnCommandMoveToAggressive
	// vtable[98] OnCommandApproach
	// vtable[114] OnCommandAttack
	// vtable[115] OnCastAbilityNoTarget
	// vtable[116] OnCastAbilityOnPosition
	// vtable[117] OnCastAbilityOnTarget
	// vtable[118] OnDropItem
	// vtable[119] OnGiveItem
	// vtable[120] OnPickupItem
	// vtable[121] OnPickupRune
	// vtable[122] OnStop
	// vtable[133] GetMoveSpeed
	// sizeof = 368
};
