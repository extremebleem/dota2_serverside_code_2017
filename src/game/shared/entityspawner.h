// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/entityspawner.h:26
class CEntitySpawnBatch {
	CEntitySpawnBatch();
	~CEntitySpawnBatch();
	void SpawnGroup();

	// sizeof = 1
};

// src/game/shared/entityspawner.h:60
class CEntitySpawnerContextBase {
protected:

	CEntitySpawnerContextBase();
	void SetPtrValue(EntityKeyId_t, void *);
	void SetDynamicAttribute(const char *, const char *);
	CEntityKeyValues * GetEntityKeyValues();
	const CEntityKeyValues * GetEntityKeyValues();
	void CopyFrom(const CEntitySpawnerContextBase &);

	// sizeof = 112
};

// src/game/shared/entityspawner.h:146
class CEntitySpawnerContextModifyScope {
private:

	CEntitySpawnerContextModifyScope(CEntitySpawnerContextBase *);
	void BeginModify();
	void Release();
	~CEntitySpawnerContextModifyScope();

	// sizeof = 24
};
