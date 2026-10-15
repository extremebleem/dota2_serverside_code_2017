// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_npc_spawner_shared.h:13
class CDotaNPCSpawnerContext : public CEntitySpawnerContext<CDOTA_BaseNPC> {
public:

	CDotaNPCSpawnerContext(CDotaNPCSpawnerContext *);
	CDotaNPCSpawnerContext(CEntityInstance *, const CUtlDelegate<void(CDOTA_BaseNPC*, const CEntityKeyValues*)> &, CDotaNPCSpawnerContext *);
	~CDotaNPCSpawnerContext();

	// sizeof = 152
};
