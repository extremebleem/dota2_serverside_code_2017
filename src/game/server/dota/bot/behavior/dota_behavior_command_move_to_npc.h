// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/behavior/dota_behavior_command_move_to_npc.h:10
class CDOTABehaviorCommandMoveToNPC : public CDOTABehaviorCommandListener, IDOTABehaviorMoveTo {
	enum {
		MOVE_TO_TARGET = 0,
		MOVE_TO_LAST_KNOWN_TARGET_POSITION = 0x1,
		MOVE_TO_RANGE_OF_LAST_KNOWN_TARGET_POSITION = 0x2,
	};

public:

private:

	EHANDLE m_hTarget;  // +0x150
	int m_nMovementState;  // +0x154
	bool m_bInRange;  // +0x158
	bool m_bWasAttacking;  // +0x159
	CDOTABehaviorCommandMoveToNPC(CDOTABehaviorCommandMoveToNPC &);
	CDOTABehaviorCommandMoveToNPC(const CDOTABehaviorCommandMoveToNPC &);
	CDOTABehaviorCommandMoveToNPC(CDOTA_BaseNPC *, bool);
	virtual ActionResult<CDOTA_BaseNPC> OnStart(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> Update(CDOTA_BaseNPC *, float);
	virtual ActionResult<CDOTA_BaseNPC> OnResume(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnContact(CDOTA_BaseNPC *, CBaseEntity *, CGameTrace *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnInvalidatePath(CDOTA_BaseNPC *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnUnitTeleported(CDOTA_BaseNPC *, CBaseEntity *, bool);
	virtual const char * GetName();
	virtual Vector GetTargetPosition(CDOTA_BaseNPC *);
	virtual bool DoesTargetMove();
	ActionResult<CDOTA_BaseNPC> UpdateTargetMissing(CDOTA_BaseNPC *);
	virtual ~CDOTABehaviorCommandMoveToNPC();

	// vtable[65] OnStart
	// vtable[66] Update
	// vtable[69] OnResume
	// vtable[73] OnContact
	// vtable[126] OnInvalidatePath
	// vtable[127] OnUnitTeleported
	// vtable[62] GetName
	// vtable[130] GetTargetPosition
	// vtable[131] DoesTargetMove
	// sizeof = 352
};
