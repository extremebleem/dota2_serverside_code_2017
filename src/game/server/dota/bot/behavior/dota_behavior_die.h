// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/behavior/dota_behavior_die.h:7
class CDOTABehaviorDie : public Action<CDOTA_BaseNPC> {
public:

private:

	CDOTABehaviorDie(CDOTABehaviorDie &);
	CDOTABehaviorDie(const CDOTABehaviorDie &);
	CDOTABehaviorDie();
	virtual ActionResult<CDOTA_BaseNPC> OnStart(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> Update(CDOTA_BaseNPC *, float);
	virtual const char * GetName();
	virtual bool IsTopLevel();
	virtual ~CDOTABehaviorDie();

	// vtable[65] OnStart
	// vtable[66] Update
	// vtable[62] GetName
	// vtable[129] IsTopLevel
	// sizeof = 128
};
