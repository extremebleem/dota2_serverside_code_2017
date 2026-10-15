// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/behavior/dota_behavior_command_move_to_position_aggressive.h:9
class CDOTABehaviorCommandMoveToPositionAggressive : public CDOTABehaviorCommandMoveToPosition {
public:

protected:

	bool m_bStartedInvisible;  // +0x15d
	CDOTABehaviorCommandMoveToPositionAggressive(CDOTABehaviorCommandMoveToPositionAggressive &);
	CDOTABehaviorCommandMoveToPositionAggressive(const CDOTABehaviorCommandMoveToPositionAggressive &);
	CDOTABehaviorCommandMoveToPositionAggressive(const Vector &, bool);
	virtual ActionResult<CDOTA_BaseNPC> Update(CDOTA_BaseNPC *, float);
	virtual const char * GetName();
	virtual bool IsAggressive();
	virtual ~CDOTABehaviorCommandMoveToPositionAggressive();

	// vtable[66] Update
	// vtable[62] GetName
	// vtable[132] IsAggressive
	// sizeof = 352
};
