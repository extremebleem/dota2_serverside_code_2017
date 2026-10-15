// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/behavior/dota_behavior_game_end.h:4
class CDOTABehaviorGameEnd : public Action<CDOTA_BaseNPC> {
public:

	CDOTABehaviorGameEnd(CDOTABehaviorGameEnd &);
	CDOTABehaviorGameEnd(const CDOTABehaviorGameEnd &);
	CDOTABehaviorGameEnd();
	virtual ActionResult<CDOTA_BaseNPC> OnStart(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual const char * GetName();
	virtual bool IsTopLevel();
	virtual ~CDOTABehaviorGameEnd();

	// vtable[65] OnStart
	// vtable[62] GetName
	// vtable[129] IsTopLevel
	// sizeof = 104
};
