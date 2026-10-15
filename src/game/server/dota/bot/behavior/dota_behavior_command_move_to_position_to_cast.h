// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/behavior/dota_behavior_command_move_to_position_to_cast.h:10
class CDOTABehaviorCommandMoveToPositionToCast : public CDOTABehaviorCommandListener, IDOTABehaviorMoveTo {
public:

private:

	EHANDLE m_hAbility;  // +0x15c
	bool m_bTurningToTarget;  // +0x160

	float m_flTargetAngle;  // +0x164
	CDOTABehaviorCommandMoveToPositionToCast(CDOTABehaviorCommandMoveToPositionToCast &);
	CDOTABehaviorCommandMoveToPositionToCast(const CDOTABehaviorCommandMoveToPositionToCast &);
	CDOTABehaviorCommandMoveToPositionToCast(CDOTABaseAbility *, const Vector &);
	virtual ActionResult<CDOTA_BaseNPC> OnStart(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> Update(CDOTA_BaseNPC *, float);
	virtual void OnEnd(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> OnResume(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnContact(CDOTA_BaseNPC *, CBaseEntity *, CGameTrace *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnInvalidatePath(CDOTA_BaseNPC *);
	virtual const char * GetName();
	virtual Vector GetTargetPosition(CDOTA_BaseNPC *);
	virtual bool DoesTargetMove();
	virtual ~CDOTABehaviorCommandMoveToPositionToCast();

	// vtable[65] OnStart
	// vtable[66] Update
	// vtable[67] OnEnd
	// vtable[69] OnResume
	// vtable[73] OnContact
	// vtable[126] OnInvalidatePath
	// vtable[62] GetName
	// vtable[130] GetTargetPosition
	// vtable[131] DoesTargetMove
	// sizeof = 360
};
