// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_npc_spawner_shared.h:27
class CDotaNPCSpawner<CDOTA_BaseNPC> : public CEntitySpawner<CDOTA_BaseNPC> {
public:

	~CDotaNPCSpawner();
	CDotaNPCSpawner(CDotaNPCSpawner<CDOTA_BaseNPC> &);
	CDotaNPCSpawner(const CDotaNPCSpawner<CDOTA_BaseNPC> &);
	CDotaNPCSpawner(const char *, CEntitySpawnerContext<CDOTA_BaseNPC> *);

private:

	void AddNPCKeyValuesForUnit(const char *);

	// sizeof = 160
};

// src/game/shared/dota/dota_npc_spawner_shared.h:27
class CDotaNPCSpawner<CDOTA_Unit_Announcer> : public CEntitySpawner<CDOTA_Unit_Announcer> {
public:

	~CDotaNPCSpawner();
	CDotaNPCSpawner(CDotaNPCSpawner<CDOTA_Unit_Announcer> &);
	CDotaNPCSpawner(const CDotaNPCSpawner<CDOTA_Unit_Announcer> &);
	CDotaNPCSpawner(const char *, CEntitySpawnerContext<CDOTA_Unit_Announcer> *);

private:

	void AddNPCKeyValuesForUnit(const char *);

	// sizeof = 160
};

// src/game/shared/dota/dota_npc_spawner_shared.h:27
class CDotaNPCSpawner<CDOTA_Unit_Courier> : public CEntitySpawner<CDOTA_Unit_Courier> {
public:

	~CDotaNPCSpawner();
	CDotaNPCSpawner(CDotaNPCSpawner<CDOTA_Unit_Courier> &);
	CDotaNPCSpawner(const CDotaNPCSpawner<CDOTA_Unit_Courier> &);
	CDotaNPCSpawner(const char *, CEntitySpawnerContext<CDOTA_Unit_Courier> *);

private:

	void AddNPCKeyValuesForUnit(const char *);

	// sizeof = 160
};

// src/game/shared/dota/dota_npc_spawner_shared.h:58
class CDotaNPCSpawnerAsync<CDOTA_BaseNPC> : public CEntitySpawnerAsync<CDOTA_BaseNPC> {
public:

	~CDotaNPCSpawnerAsync();
	CDotaNPCSpawnerAsync(CDotaNPCSpawnerAsync<CDOTA_BaseNPC> &);
	CDotaNPCSpawnerAsync(const CDotaNPCSpawnerAsync<CDOTA_BaseNPC> &);
	CDotaNPCSpawnerAsync(const char *, CDotaNPCSpawnerContext *, EntitySpawnerAsyncBehavior_t, ResourceManifestLoadPriority_t, int, float, bool);
	CDotaNPCSpawnerAsync(const char *, const EntitySpawnerAsyncDesc_t<CDOTA_BaseNPC> &);

private:

	void AddNPCKeyValuesForUnit(const char *);

	// sizeof = 176
};
