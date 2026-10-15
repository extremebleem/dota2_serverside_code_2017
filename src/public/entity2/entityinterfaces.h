// Reconstructed from DWARF by pahole; not original source.

// src/public/entity2/entityinterfaces.h:39
struct EntityNotification_t {
	// sizeof = 8
};

// src/public/entity2/entityinterfaces.h:48
struct EntitySpawnInfo_t : public EntityNotification_t {
public:

	const CEntityKeyValues * m_pKeyValues;  // +0x8

	// sizeof = 16
};

// src/public/entity2/entityinterfaces.h:57
class IEntityPrecacheConfiguration {
	// sizeof = 1
};

// src/public/entity2/entityinterfaces.h:145
class CEntityResourceManifestLock {
protected:

	SpawnGroupHandle_t m_hSpawnGroup;  // +0x40

	bool m_bIsLocked;  // +0x58
	bool m_bPrecacheEnable;  // +0x59
	CEntityResourceManifestLock();
	CEntityResourceManifestLock(IEntityResourceManifestBuilder *, SpawnGroupHandle_t, const matrix3x4a_t &, IEntityPrecacheConfiguration *, IEntityResourceManifest *);
	~CEntityResourceManifestLock();
	void Lock(IEntityResourceManifestBuilder *, SpawnGroupHandle_t, const matrix3x4a_t &, IEntityPrecacheConfiguration *, IEntityResourceManifest *);
	void Release();
	bool IsLocked();

	// sizeof = 96
};

// src/public/entity2/entityinterfaces.h:174
class IEntityResourceManifestBuilder {
	int ()() * * _vptr.IEntityResourceManifestBuilder;  // +0x0
	IEntityResourceManifestBuilder(IEntityResourceManifestBuilder &);
	IEntityResourceManifestBuilder(const IEntityResourceManifestBuilder &);
	IEntityResourceManifestBuilder();
	virtual void BuildResourceManifest(SpawnGroupHandle_t, int, const EntitySpawnInfo_t *, const matrix3x4a_t &, IEntityPrecacheConfiguration *, IEntityResourceManifest *);
	virtual void BuildResourceManifest(SpawnGroupHandle_t, int, const CEntityKeyValues * *, IEntityPrecacheConfiguration *, IEntityResourceManifest *);
	virtual void BuildResourceManifest(SpawnGroupHandle_t, const CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> > *, const char *, IEntityPrecacheConfiguration *, IEntityResourceManifest *);
	virtual void BuildResourceManifest(const char *, IEntityPrecacheConfiguration *, IEntityResourceManifest *);
	virtual void BuildResourceManifest(EntityResourceManifestCreationCallback_t, void *, IEntityPrecacheConfiguration *, IEntityResourceManifest *);
	virtual void BuildResourceManifestForEntity(const char *, IEntityPrecacheConfiguration *, IEntityResourceManifest *);
	virtual void InvokePrecacheCallback(ResourceHandle_t, const EntitySpawnInfo_t &, IEntityPrecacheConfiguration *, IEntityResourceManifest *, SecondaryPrecacheMemberCallback_t);
	virtual void AddRefKeyValues(const CEntityKeyValues *);
	virtual void ReleaseKeyValues(const CEntityKeyValues *);

private:

	virtual void LockResourceManifest(bool, CEntityResourceManifestLock &);

	// vtable[0] BuildResourceManifest
	// vtable[1] BuildResourceManifest
	// vtable[2] BuildResourceManifest
	// vtable[3] BuildResourceManifest
	// vtable[4] BuildResourceManifest
	// vtable[5] BuildResourceManifestForEntity
	// vtable[6] InvokePrecacheCallback
	// vtable[7] AddRefKeyValues
	// vtable[8] ReleaseKeyValues
	// vtable[9] LockResourceManifest
	// sizeof = 8
};
