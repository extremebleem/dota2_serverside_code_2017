// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/behavior/dota_behavior_command_cast_here.h:9
class CDOTABehaviorCommandCastHere : public CDOTABehaviorCommandListener {
public:

private:

	EHANDLE m_hAbility;  // +0x64
	CDOTABehaviorCommandCastHere(CDOTABehaviorCommandCastHere &);
	CDOTABehaviorCommandCastHere(const CDOTABehaviorCommandCastHere &);
	CDOTABehaviorCommandCastHere(CDOTABaseAbility *);
	virtual ActionResult<CDOTA_BaseNPC> OnStart(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> Update(CDOTA_BaseNPC *, float);
	virtual void OnEnd(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> OnResume(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual const char * GetName();
	ActionResult<CDOTA_BaseNPC> CheckTransition(CDOTA_BaseNPC *);
	virtual ~CDOTABehaviorCommandCastHere();

	// vtable[65] OnStart
	// vtable[66] Update
	// vtable[67] OnEnd
	// vtable[69] OnResume
	// vtable[62] GetName
	// sizeof = 104
};
