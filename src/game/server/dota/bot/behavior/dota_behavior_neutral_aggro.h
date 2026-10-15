// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/behavior/dota_behavior_neutral_aggro.h:7
class CDOTABehaviorNeutralAggro : public Action<CDOTA_BaseNPC> {
public:

private:

	bool m_bNoLeashTime;  // +0x70
	bool m_bShortLeashTime;  // +0x71

	CDOTABehaviorNeutralAggro(CDOTABehaviorNeutralAggro &);
	CDOTABehaviorNeutralAggro(const CDOTABehaviorNeutralAggro &);
	CDOTABehaviorNeutralAggro(Vector, bool, bool);
	virtual Action<CDOTA_BaseNPC> * InitialContainedAction(CDOTA_BaseNPC *);
	virtual ActionResult<CDOTA_BaseNPC> Update(CDOTA_BaseNPC *, float);
	virtual const char * GetName();
	virtual ~CDOTABehaviorNeutralAggro();

	// vtable[70] InitialContainedAction
	// vtable[66] Update
	// vtable[62] GetName
	// sizeof = 168
};
