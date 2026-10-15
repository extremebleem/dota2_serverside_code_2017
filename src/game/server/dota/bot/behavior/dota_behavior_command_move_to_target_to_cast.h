// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/behavior/dota_behavior_command_move_to_target_to_cast.h:10
class CDOTABehaviorCommandMoveToTargetToCast : public CDOTABehaviorCommandListener, IDOTABehaviorMoveTo {
	enum {
		MOVE_TO_TARGET = 0,
		MOVE_TO_LAST_KNOWN_TARGET_POSITION = 0x1,
		MOVE_TO_RANGE_OF_LAST_KNOWN_TARGET_POSITION = 0x2,
	};

public:

private:

	EHANDLE m_hTarget;  // +0x150
	EHANDLE m_hAbility;  // +0x154
	int m_nMovementState;  // +0x158
	bool m_bFailedCast;  // +0x15c

	float m_flTargetRange;  // +0x160
	bool m_bTurningToTarget;  // +0x164

	float m_flTargetAngle;  // +0x168
	CDOTABehaviorCommandMoveToTargetToCast(CDOTABehaviorCommandMoveToTargetToCast &);
	CDOTABehaviorCommandMoveToTargetToCast(const CDOTABehaviorCommandMoveToTargetToCast &);
	CDOTABehaviorCommandMoveToTargetToCast(CDOTABaseAbility *, CBaseEntity *);
	virtual ActionResult<CDOTA_BaseNPC> OnStart(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> Update(CDOTA_BaseNPC *, float);
	virtual void OnEnd(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> OnResume(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnContact(CDOTA_BaseNPC *, CBaseEntity *, CGameTrace *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnInvalidatePath(CDOTA_BaseNPC *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnUnitTeleported(CDOTA_BaseNPC *, CBaseEntity *, bool);
	virtual const char * GetName();
	virtual Vector GetTargetPosition(CDOTA_BaseNPC *);
	virtual bool DoesTargetMove();
	ActionResult<CDOTA_BaseNPC> UpdateTargetMissing(CDOTA_BaseNPC *);
	virtual ~CDOTABehaviorCommandMoveToTargetToCast();

	// vtable[65] OnStart
	// vtable[66] Update
	// vtable[67] OnEnd
	// vtable[69] OnResume
	// vtable[73] OnContact
	// vtable[126] OnInvalidatePath
	// vtable[127] OnUnitTeleported
	// vtable[62] GetName
	// vtable[130] GetTargetPosition
	// vtable[131] DoesTargetMove
	// sizeof = 368
};
