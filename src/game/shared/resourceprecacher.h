// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/resourceprecacher.h:13
class CResourcePrecacher {
private:

	bool m_bPrecacheListChanged;  // +0x0

	SpawnGroupHandle_t m_hSpawngroup;  // +0x4
	CResourcePrecacher();
	~CResourcePrecacher();
	void UnloadSpawngroup(bool);
	void DispatchPrecache(SpawnGroupHandle_t, CBaseEntity *, SpawnGroupCompletionDelegate_t);
	void AddResource(const char *, const char *);
	void RemoveResource(const char *, const char *);
	void PrecacheCallback(const EventSpawnGroupPrecache_t &);

	// sizeof = 32
};
