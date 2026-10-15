// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/behavior/dota_behavior_global.h:7
class CDOTABehavior : public Action<CDOTA_BaseNPC> {
public:

	CDOTABehavior();
	virtual Action<CDOTA_BaseNPC> * InitialContainedAction(CDOTA_BaseNPC *);
	virtual ActionResult<CDOTA_BaseNPC> OnStart(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> Update(CDOTA_BaseNPC *, float);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnKilled(CDOTA_BaseNPC *, const CTakeDamageInfo &);
	virtual const char * GetName();
	virtual bool IsTopLevel();
	virtual ~CDOTABehavior();

	// vtable[70] InitialContainedAction
	// vtable[65] OnStart
	// vtable[66] Update
	// vtable[84] OnKilled
	// vtable[62] GetName
	// vtable[129] IsTopLevel
	// sizeof = 104
};
