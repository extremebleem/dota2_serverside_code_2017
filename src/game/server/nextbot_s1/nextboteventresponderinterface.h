// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nextbot_s1/nextboteventresponderinterface.h:35
class INextBotEventResponder {
	int ()() * * _vptr.INextBotEventResponder;  // +0x0
private:

	INextBotEventResponder & operator=(const INextBotEventResponder &);
	INextBotEventResponder(const INextBotEventResponder &);
	INextBotEventResponder();

	virtual ~INextBotEventResponder();
	virtual INextBotEventResponder * FirstContainedResponder();
	virtual INextBotEventResponder * NextContainedResponder(INextBotEventResponder *);
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

	// vtable[0] Schema_DynamicBinding
	// vtable[3] FirstContainedResponder
	// vtable[4] NextContainedResponder
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
	// sizeof = 8
};
