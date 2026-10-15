// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/behavior/dota_behavior_command_move_to_position.h:10
class CDOTABehaviorCommandMoveToPosition : public CDOTABehaviorCommandListener, IDOTABehaviorMoveTo {
public:

private:

	bool m_bDirectional;  // +0x15c
	CDOTABehaviorCommandMoveToPosition(CDOTABehaviorCommandMoveToPosition &);
	CDOTABehaviorCommandMoveToPosition(const CDOTABehaviorCommandMoveToPosition &);
	CDOTABehaviorCommandMoveToPosition(const Vector &, bool);
	virtual ActionResult<CDOTA_BaseNPC> OnStart(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> Update(CDOTA_BaseNPC *, float);
	virtual ActionResult<CDOTA_BaseNPC> OnResume(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnContact(CDOTA_BaseNPC *, CBaseEntity *, CGameTrace *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnInvalidatePath(CDOTA_BaseNPC *);
	virtual const char * GetName();
	virtual Vector GetTargetPosition(CDOTA_BaseNPC *);
	virtual bool DoesTargetMove();

protected:

	virtual bool IsAggressive();
	virtual ~CDOTABehaviorCommandMoveToPosition();

	// vtable[65] OnStart
	// vtable[66] Update
	// vtable[69] OnResume
	// vtable[73] OnContact
	// vtable[126] OnInvalidatePath
	// vtable[62] GetName
	// vtable[130] GetTargetPosition
	// vtable[131] DoesTargetMove
	// vtable[132] IsAggressive
	// sizeof = 352
};
