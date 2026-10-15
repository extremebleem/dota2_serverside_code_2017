// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/behavior/dota_behavior_move_to_npc_to_attack.h:11
class CDOTABehaviorMoveToNPCToAttack : public Action<CDOTA_BaseNPC>, IDOTABehaviorMoveTo {
public:

protected:

	bool m_bMovingToLastKnownTargetPosition;  // +0x158

	bool m_bInAttackPosition;  // +0x178
	bool m_bTurningToTarget;  // +0x179

	float m_flTargetAngle;  // +0x17c
	bool m_bAttackMove;  // +0x180
	CDOTABehaviorMoveToNPCToAttack(CDOTABehaviorMoveToNPCToAttack &);
	CDOTABehaviorMoveToNPCToAttack(const CDOTABehaviorMoveToNPCToAttack &);
	CDOTABehaviorMoveToNPCToAttack(CDOTA_BaseNPC *, bool);
	ActionResult<CDOTA_BaseNPC> OnStartInternal(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> OnStart(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> Update(CDOTA_BaseNPC *, float);
	virtual void OnEnd(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> OnResume(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnContact(CDOTA_BaseNPC *, CBaseEntity *, CGameTrace *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCancelAttack(CDOTA_BaseNPC *, CBaseEntity *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnDeAggro(CDOTA_BaseNPC *, CBaseEntity *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnInvalidatePath(CDOTA_BaseNPC *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnUnitTeleported(CDOTA_BaseNPC *, CBaseEntity *, bool);
	virtual const char * GetName();
	virtual Vector GetTargetPosition(CDOTA_BaseNPC *);
	virtual bool DoesTargetMove();
	virtual ~CDOTABehaviorMoveToNPCToAttack();

	// vtable[65] OnStart
	// vtable[66] Update
	// vtable[67] OnEnd
	// vtable[69] OnResume
	// vtable[73] OnContact
	// vtable[123] OnCancelAttack
	// vtable[124] OnDeAggro
	// vtable[126] OnInvalidatePath
	// vtable[127] OnUnitTeleported
	// vtable[62] GetName
	// vtable[130] GetTargetPosition
	// vtable[131] DoesTargetMove
	// sizeof = 392
};

// src/game/server/dota/bot/behavior/dota_behavior_move_to_npc_to_attack.h:45
class CDOTABehaviorTutorialRazorMoveToNPCToAttack : public CDOTABehaviorMoveToNPCToAttack {
public:

private:

	CDOTABehaviorTutorialRazorMoveToNPCToAttack(CDOTABehaviorTutorialRazorMoveToNPCToAttack &);
	CDOTABehaviorTutorialRazorMoveToNPCToAttack(const CDOTABehaviorTutorialRazorMoveToNPCToAttack &);
	CDOTABehaviorTutorialRazorMoveToNPCToAttack(CDOTA_BaseNPC *, bool);
	virtual ActionResult<CDOTA_BaseNPC> OnStart(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnInjured(CDOTA_BaseNPC *, const CTakeDamageInfo &);
	virtual ~CDOTABehaviorTutorialRazorMoveToNPCToAttack();

	// vtable[65] OnStart
	// vtable[83] OnInjured
	// sizeof = 416
};
