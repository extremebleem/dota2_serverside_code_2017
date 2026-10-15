// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/entityspawnerasync.h:43
struct EntitySpawnerAsyncDesc_t<CBaseEntity> {
	SpawnGroupHandle_t m_hOwnerSpawnGroup;  // +0x4
	float m_flTimeoutInterval;  // +0x8

	const matrix3x4a_t * m_pSpawnGroupToWorld;  // +0x18
	int m_iPriorityLoader;  // +0x24
	bool m_bManualCompletion;  // +0x28

	WorldGroupId_t m_worldGroupId;  // +0x2c
	EntitySpawnerAsyncDesc_t();

	// sizeof = 48
};

// src/game/shared/entityspawnerasync.h:43
struct EntitySpawnerAsyncDesc_t<CPointHMDAnchor> {
	SpawnGroupHandle_t m_hOwnerSpawnGroup;  // +0x4
	float m_flTimeoutInterval;  // +0x8

	const matrix3x4a_t * m_pSpawnGroupToWorld;  // +0x18
	int m_iPriorityLoader;  // +0x24
	bool m_bManualCompletion;  // +0x28

	WorldGroupId_t m_worldGroupId;  // +0x2c
	EntitySpawnerAsyncDesc_t();

	// sizeof = 48
};

// src/game/shared/entityspawnerasync.h:43
struct EntitySpawnerAsyncDesc_t<CPhysicsProp> {
	SpawnGroupHandle_t m_hOwnerSpawnGroup;  // +0x4
	float m_flTimeoutInterval;  // +0x8

	const matrix3x4a_t * m_pSpawnGroupToWorld;  // +0x18
	int m_iPriorityLoader;  // +0x24
	bool m_bManualCompletion;  // +0x28

	WorldGroupId_t m_worldGroupId;  // +0x2c
	EntitySpawnerAsyncDesc_t();

	// sizeof = 48
};

// src/game/shared/entityspawnerasync.h:65
class CEntitySpawnerAsyncBase<CBaseEntity> : public CEntitySpawnerBase<CBaseEntity> {
public:

private:

	SpawnGroupHandle_t m_hOwnerSpawnGroup;  // +0x94
	CEntitySpawnerAsyncBase(const CEntitySpawnerAsyncBase<CBaseEntity> &);
	~CEntitySpawnerAsyncBase();
	SpawnGroupCompletionDelegateHandle_t Spawn(CEntityInstance *, CUtlDelegate<void(CBaseEntity*, const CEntityKeyValues*)>);
	SpawnGroupCompletionDelegateHandle_t Spawn(const Vector &, const QAngle &, CEntityInstance *, CEntityInstance *, CUtlDelegate<void(CBaseEntity*, const CEntityKeyValues*)>);
	SpawnGroupCompletionDelegateHandle_t SpawnAndStartNewEntity(CEntityInstance *, CUtlDelegate<void(CBaseEntity*, const CEntityKeyValues*)>);
	virtual void StartNewEntity();
	void PrecacheOther();
	SpawnGroupHandle_t GetSpawnGroupHandle();
	SpawnGroupCompletionDelegateHandle_t AddSpawnGroupCompletionCallback(CBaseEntity *, SpawnGroupCompletionDelegate_t);

protected:

	CEntitySpawnerAsyncBase(CEntitySpawnerContext<CBaseEntity> *);
	void Init(EntitySpawnerAsyncBehavior_t, const SpawnGroupDesc_t &);
	void QueueContextCallbacks(SpawnGroupHandle_t, CEntityInstance *, const CEntityKeyValues *);

private:

	SpawnGroupCompletionDelegateHandle_t SpawnInternal(CEntityInstance *, CUtlDelegate<void(CBaseEntity*, const CEntityKeyValues*)>);

	// vtable[0] StartNewEntity
	// sizeof = 176
};

// src/game/shared/entityspawnerasync.h:65
class CEntitySpawnerAsyncBase<CPointHMDAnchor> : public CEntitySpawnerBase<CPointHMDAnchor> {
public:

private:

	SpawnGroupHandle_t m_hOwnerSpawnGroup;  // +0x94
	CEntitySpawnerAsyncBase(const CEntitySpawnerAsyncBase<CPointHMDAnchor> &);
	~CEntitySpawnerAsyncBase();
	SpawnGroupCompletionDelegateHandle_t Spawn(CEntityInstance *, CUtlDelegate<void(CPointHMDAnchor*, const CEntityKeyValues*)>);
	SpawnGroupCompletionDelegateHandle_t Spawn(const Vector &, const QAngle &, CEntityInstance *, CEntityInstance *, CUtlDelegate<void(CPointHMDAnchor*, const CEntityKeyValues*)>);
	SpawnGroupCompletionDelegateHandle_t SpawnAndStartNewEntity(CEntityInstance *, CUtlDelegate<void(CPointHMDAnchor*, const CEntityKeyValues*)>);
	virtual void StartNewEntity();
	void PrecacheOther();
	SpawnGroupHandle_t GetSpawnGroupHandle();
	SpawnGroupCompletionDelegateHandle_t AddSpawnGroupCompletionCallback(CBaseEntity *, SpawnGroupCompletionDelegate_t);

protected:

	CEntitySpawnerAsyncBase(CEntitySpawnerContext<CPointHMDAnchor> *);
	void Init(EntitySpawnerAsyncBehavior_t, const SpawnGroupDesc_t &);
	void QueueContextCallbacks(SpawnGroupHandle_t, CEntityInstance *, const CEntityKeyValues *);

private:

	SpawnGroupCompletionDelegateHandle_t SpawnInternal(CEntityInstance *, CUtlDelegate<void(CPointHMDAnchor*, const CEntityKeyValues*)>);

	// vtable[0] StartNewEntity
	// sizeof = 176
};

// src/game/shared/entityspawnerasync.h:65
class CEntitySpawnerAsyncBase<CPhysicsProp> : public CEntitySpawnerBase<CPhysicsProp> {
public:

private:

	SpawnGroupHandle_t m_hOwnerSpawnGroup;  // +0x94
	CEntitySpawnerAsyncBase(const CEntitySpawnerAsyncBase<CPhysicsProp> &);
	~CEntitySpawnerAsyncBase();
	SpawnGroupCompletionDelegateHandle_t Spawn(CEntityInstance *, CUtlDelegate<void(CPhysicsProp*, const CEntityKeyValues*)>);
	SpawnGroupCompletionDelegateHandle_t Spawn(const Vector &, const QAngle &, CEntityInstance *, CEntityInstance *, CUtlDelegate<void(CPhysicsProp*, const CEntityKeyValues*)>);
	SpawnGroupCompletionDelegateHandle_t SpawnAndStartNewEntity(CEntityInstance *, CUtlDelegate<void(CPhysicsProp*, const CEntityKeyValues*)>);
	virtual void StartNewEntity();
	void PrecacheOther();
	SpawnGroupHandle_t GetSpawnGroupHandle();
	SpawnGroupCompletionDelegateHandle_t AddSpawnGroupCompletionCallback(CBaseEntity *, SpawnGroupCompletionDelegate_t);

protected:

	CEntitySpawnerAsyncBase(CEntitySpawnerContext<CPhysicsProp> *);
	void Init(EntitySpawnerAsyncBehavior_t, const SpawnGroupDesc_t &);
	void QueueContextCallbacks(SpawnGroupHandle_t, CEntityInstance *, const CEntityKeyValues *);

private:

	SpawnGroupCompletionDelegateHandle_t SpawnInternal(CEntityInstance *, CUtlDelegate<void(CPhysicsProp*, const CEntityKeyValues*)>);

	// vtable[0] StartNewEntity
	// sizeof = 176
};

// src/game/shared/entityspawnerasync.h:128
class CEntitySpawnerAsync<CBaseEntity> : public CEntitySpawnerAsyncBase<CBaseEntity> {
public:

	~CEntitySpawnerAsync();
	CEntitySpawnerAsync(CEntitySpawnerAsync<CBaseEntity> &);
	CEntitySpawnerAsync(const CEntitySpawnerAsync<CBaseEntity> &);
	CEntitySpawnerAsync(float, EntitySpawnerAsyncBehavior_t, CEntitySpawnerContext<CBaseEntity> *, const matrix3x4a_t *, ResourceManifestLoadPriority_t, int, bool);
	CEntitySpawnerAsync(SpawnGroupHandle_t, float, CEntitySpawnerContext<CBaseEntity> *, const matrix3x4a_t *, ResourceManifestLoadPriority_t, int);
	CEntitySpawnerAsync(const EntitySpawnerAsyncDesc_t<CBaseEntity> &);

private:

	void Init(const EntitySpawnerAsyncDesc_t<CBaseEntity> &);

	// sizeof = 176
};

// src/game/shared/entityspawnerasync.h:128
class CEntitySpawnerAsync<CPointHMDAnchor> : public CEntitySpawnerAsyncBase<CPointHMDAnchor> {
public:

	~CEntitySpawnerAsync();
	CEntitySpawnerAsync(CEntitySpawnerAsync<CPointHMDAnchor> &);
	CEntitySpawnerAsync(const CEntitySpawnerAsync<CPointHMDAnchor> &);
	CEntitySpawnerAsync(float, EntitySpawnerAsyncBehavior_t, CEntitySpawnerContext<CPointHMDAnchor> *, const matrix3x4a_t *, ResourceManifestLoadPriority_t, int, bool);
	CEntitySpawnerAsync(SpawnGroupHandle_t, float, CEntitySpawnerContext<CPointHMDAnchor> *, const matrix3x4a_t *, ResourceManifestLoadPriority_t, int);
	CEntitySpawnerAsync(const EntitySpawnerAsyncDesc_t<CPointHMDAnchor> &);

private:

	void Init(const EntitySpawnerAsyncDesc_t<CPointHMDAnchor> &);

	// sizeof = 176
};

// src/game/shared/entityspawnerasync.h:128
class CEntitySpawnerAsync<CPhysicsProp> : public CEntitySpawnerAsyncBase<CPhysicsProp> {
public:

	~CEntitySpawnerAsync();
	CEntitySpawnerAsync(CEntitySpawnerAsync<CPhysicsProp> &);
	CEntitySpawnerAsync(const CEntitySpawnerAsync<CPhysicsProp> &);
	CEntitySpawnerAsync(float, EntitySpawnerAsyncBehavior_t, CEntitySpawnerContext<CPhysicsProp> *, const matrix3x4a_t *, ResourceManifestLoadPriority_t, int, bool);
	CEntitySpawnerAsync(SpawnGroupHandle_t, float, CEntitySpawnerContext<CPhysicsProp> *, const matrix3x4a_t *, ResourceManifestLoadPriority_t, int);
	CEntitySpawnerAsync(const EntitySpawnerAsyncDesc_t<CPhysicsProp> &);

private:

	void Init(const EntitySpawnerAsyncDesc_t<CPhysicsProp> &);

	// sizeof = 176
};

// EntitySpawnerAsyncDesc_t: 3 more instantiations (full list in INDEX.tsv)
//   EntitySpawnerAsyncDesc_t<CDOTA_BaseNPC>
//   EntitySpawnerAsyncDesc_t<CDOTA_Item>
//   EntitySpawnerAsyncDesc_t<CDOTA_Item_Physical>

// CEntitySpawnerAsyncBase: 3 more instantiations (full list in INDEX.tsv)
//   CEntitySpawnerAsyncBase<CDOTA_BaseNPC>
//   CEntitySpawnerAsyncBase<CDOTA_Item_Physical>
//   CEntitySpawnerAsyncBase<CDOTA_Item>

// CEntitySpawnerAsync: 3 more instantiations (full list in INDEX.tsv)
//   CEntitySpawnerAsync<CDOTA_BaseNPC>
//   CEntitySpawnerAsync<CDOTA_Item_Physical>
//   CEntitySpawnerAsync<CDOTA_Item>
