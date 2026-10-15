// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/behavior/dota_behavior_command_move_to_target_to_attack.h:11
class CDOTABehaviorCommandMoveToTargetToAttack : public CDOTABehaviorCommandListener, IDOTABehaviorMoveTo {
	enum {
		MOVE_TO_TARGET = 0,
		MOVE_TO_LAST_KNOWN_TARGET_POSITION = 0x1,
		MOVE_TO_RANGE_OF_LAST_KNOWN_TARGET_POSITION = 0x2,
	};

public:

private:

	EHANDLE m_hTarget;  // +0x150
	int m_nMovementState;  // +0x154
	bool m_bFailedCast;  // +0x158

	float m_flTargetRange;  // +0x15c
	bool m_bDeny;  // +0x160
	bool m_bInvisBreak;  // +0x161
	bool m_bNightmareAttack;  // +0x162
	bool m_bTurningToTarget;  // +0x163
	float m_flTargetAngle;  // +0x164
	CDOTABehaviorCommandMoveToTargetToAttack(CDOTABehaviorCommandMoveToTargetToAttack &);
	CDOTABehaviorCommandMoveToTargetToAttack(const CDOTABehaviorCommandMoveToTargetToAttack &);
	CDOTABehaviorCommandMoveToTargetToAttack(CBaseEntity *, bool);
	virtual ActionResult<CDOTA_BaseNPC> OnStart(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> Update(CDOTA_BaseNPC *, float);
	virtual void OnEnd(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> OnResume(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnContact(CDOTA_BaseNPC *, CBaseEntity *, CGameTrace *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCancelAttack(CDOTA_BaseNPC *, CBaseEntity *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCommandAttack(CDOTA_BaseNPC *, CBaseEntity *, bool);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnInvalidatePath(CDOTA_BaseNPC *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnUnitTeleported(CDOTA_BaseNPC *, CBaseEntity *, bool);
	virtual const char * GetName();
	virtual Vector GetTargetPosition(CDOTA_BaseNPC *);
	virtual bool DoesTargetMove();
	ActionResult<CDOTA_BaseNPC> UpdateTargetMissing(CDOTA_BaseNPC *);
	virtual ~CDOTABehaviorCommandMoveToTargetToAttack();

	// vtable[65] OnStart
	// vtable[66] Update
	// vtable[67] OnEnd
	// vtable[69] OnResume
	// vtable[73] OnContact
	// vtable[123] OnCancelAttack
	// vtable[114] OnCommandAttack
	// vtable[126] OnInvalidatePath
	// vtable[127] OnUnitTeleported
	// vtable[62] GetName
	// vtable[130] GetTargetPosition
	// vtable[131] DoesTargetMove
	// sizeof = 360
};
