// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/entityspawner.h:112
class CEntitySpawnerContext<CDevtestHierarchyChild> : public CEntitySpawnerContextBase {
public:

private:

	CUtlDelegate<void(CDevtestHierarchyChild*, const CEntityKeyValues*)> m_callback;  // +0x80
	CEntitySpawnerContext(CEntitySpawnerContext<CDevtestHierarchyChild> *);
	CEntitySpawnerContext(CEntityInstance *, const CUtlDelegate<void(CDevtestHierarchyChild*, const CEntityKeyValues*)> &, CEntitySpawnerContext<CDevtestHierarchyChild> *);
	void CopyFrom(const CEntitySpawnerContext<CDevtestHierarchyChild> &);
	CEntitySpawnerContext(const CEntitySpawnerContext<CDevtestHierarchyChild> &);

	// sizeof = 152
};

// src/game/shared/entityspawner.h:112
class CEntitySpawnerContext<CWaterBullet> : public CEntitySpawnerContextBase {
public:

private:

	CUtlDelegate<void(CWaterBullet*, const CEntityKeyValues*)> m_callback;  // +0x80
	CEntitySpawnerContext(CEntitySpawnerContext<CWaterBullet> *);
	CEntitySpawnerContext(CEntityInstance *, const CUtlDelegate<void(CWaterBullet*, const CEntityKeyValues*)> &, CEntitySpawnerContext<CWaterBullet> *);
	void CopyFrom(const CEntitySpawnerContext<CWaterBullet> &);
	CEntitySpawnerContext(const CEntitySpawnerContext<CWaterBullet> &);

	// sizeof = 152
};

// src/game/shared/entityspawner.h:112
class CEntitySpawnerContext<CBaseEntity> : public CEntitySpawnerContextBase {
public:

private:

	CUtlDelegate<void(CBaseEntity*, const CEntityKeyValues*)> m_callback;  // +0x80
	CEntitySpawnerContext(CEntitySpawnerContext<CBaseEntity> *);
	CEntitySpawnerContext(CEntityInstance *, const CUtlDelegate<void(CBaseEntity*, const CEntityKeyValues*)> &, CEntitySpawnerContext<CBaseEntity> *);
	void CopyFrom(const CEntitySpawnerContext<CBaseEntity> &);
	CEntitySpawnerContext(const CEntitySpawnerContext<CBaseEntity> &);

	// sizeof = 152
};

// src/game/shared/entityspawner.h:174
class CEntitySpawnerBase<CDevtestHierarchyChild> {
	int ()() * * _vptr.CEntitySpawnerBase;  // +0x0
protected:

	SpawnGroupHandle_t m_hSpawnGroupHandle;  // +0x34

	bool m_bValidateKeys;  // +0x70

	CEntitySpawnerBase(const CEntitySpawnerBase<CDevtestHierarchyChild> &);
	CEntitySpawnerBase(CEntitySpawnerContext<CDevtestHierarchyChild> *);
	~CEntitySpawnerBase();
	void SetNetworkingMode(EntityNetworkingMode_t);
	void EnableKeyValidation(bool);
	void SetValue(EntityKeyId_t, const char *, EntityKeyValidation_t);
	void SetPtrValue(EntityKeyId_t, void *);
	void CopyKeysFrom(const CEntityKeyValues *);
	void SetDynamicAttribute(const char *, const char *);
	void AddEntityIOConnection(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void SetClassName(const char *);
	void SetWorldTransform(const Vector &, const QAngle &);
	void SetWorldTransform(const Vector &, const Quaternion &);
	void SetWorldTransform(const CTransform &);
	void SetName(const char *);
	virtual void StartNewEntity();
	void PrecacheOther(IEntityResourceManifest *);
	CEntityKeyValues * DetachKeyValues();
	CEntityKeyValues * GetEntityKeyValues();
	void SetValues(const Vector &, const QAngle &, CEntityInstance *);
	void Init(SpawnGroupHandle_t, const matrix3x4a_t &, CUtlScratchMemoryPool *);
	virtual void OnEntitySpawned(CDevtestHierarchyChild *);
	void ApplyContextKeys();
	void InvokeCallbacks(CDevtestHierarchyChild *, const CEntityKeyValues *);
	void ValidateKeyExists(EntityKeyId_t);
	void SetValue<QAngle>(EntityKeyId_t, const QAngle &, EntityKeyValidation_t);
	void SetValue<Vector>(EntityKeyId_t, const Vector &, EntityKeyValidation_t);

	// vtable[0] StartNewEntity
	// vtable[1] OnEntitySpawned
	// sizeof = 144
};

// src/game/shared/entityspawner.h:174
class CEntitySpawnerBase<CWaterBullet> {
	int ()() * * _vptr.CEntitySpawnerBase;  // +0x0
protected:

	SpawnGroupHandle_t m_hSpawnGroupHandle;  // +0x34

	bool m_bValidateKeys;  // +0x70

	CEntitySpawnerBase(const CEntitySpawnerBase<CWaterBullet> &);
	CEntitySpawnerBase(CEntitySpawnerContext<CWaterBullet> *);
	~CEntitySpawnerBase();
	void SetNetworkingMode(EntityNetworkingMode_t);
	void EnableKeyValidation(bool);
	void SetValue(EntityKeyId_t, const char *, EntityKeyValidation_t);
	void SetPtrValue(EntityKeyId_t, void *);
	void CopyKeysFrom(const CEntityKeyValues *);
	void SetDynamicAttribute(const char *, const char *);
	void AddEntityIOConnection(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void SetClassName(const char *);
	void SetWorldTransform(const Vector &, const QAngle &);
	void SetWorldTransform(const Vector &, const Quaternion &);
	void SetWorldTransform(const CTransform &);
	void SetName(const char *);
	virtual void StartNewEntity();
	void PrecacheOther(IEntityResourceManifest *);
	CEntityKeyValues * DetachKeyValues();
	CEntityKeyValues * GetEntityKeyValues();
	void SetValues(const Vector &, const QAngle &, CEntityInstance *);
	void Init(SpawnGroupHandle_t, const matrix3x4a_t &, CUtlScratchMemoryPool *);
	virtual void OnEntitySpawned(CWaterBullet *);
	void ApplyContextKeys();
	void InvokeCallbacks(CWaterBullet *, const CEntityKeyValues *);
	void ValidateKeyExists(EntityKeyId_t);

	// vtable[0] StartNewEntity
	// vtable[1] OnEntitySpawned
	// sizeof = 144
};

// src/game/shared/entityspawner.h:174
class CEntitySpawnerBase<CTriggerMultiple> {
	int ()() * * _vptr.CEntitySpawnerBase;  // +0x0
protected:

	SpawnGroupHandle_t m_hSpawnGroupHandle;  // +0x34

	bool m_bValidateKeys;  // +0x70

	CEntitySpawnerBase(const CEntitySpawnerBase<CTriggerMultiple> &);
	CEntitySpawnerBase(CEntitySpawnerContext<CTriggerMultiple> *);
	~CEntitySpawnerBase();
	void SetNetworkingMode(EntityNetworkingMode_t);
	void EnableKeyValidation(bool);
	void SetValue(EntityKeyId_t, const char *, EntityKeyValidation_t);
	void SetPtrValue(EntityKeyId_t, void *);
	void CopyKeysFrom(const CEntityKeyValues *);
	void SetDynamicAttribute(const char *, const char *);
	void AddEntityIOConnection(const char *, EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void AddConnectionDesc(const EntityIOConnectionData_t &);
	void SetClassName(const char *);
	void SetWorldTransform(const Vector &, const QAngle &);
	void SetWorldTransform(const Vector &, const Quaternion &);
	void SetWorldTransform(const CTransform &);
	void SetName(const char *);
	virtual void StartNewEntity();
	void PrecacheOther(IEntityResourceManifest *);
	CEntityKeyValues * DetachKeyValues();
	CEntityKeyValues * GetEntityKeyValues();
	void SetValues(const Vector &, const QAngle &, CEntityInstance *);
	void Init(SpawnGroupHandle_t, const matrix3x4a_t &, CUtlScratchMemoryPool *);
	virtual void OnEntitySpawned(CTriggerMultiple *);
	void ApplyContextKeys();
	void InvokeCallbacks(CTriggerMultiple *, const CEntityKeyValues *);
	void ValidateKeyExists(EntityKeyId_t);
	void SetValue<QAngle>(EntityKeyId_t, const QAngle &, EntityKeyValidation_t);
	void SetValue<<anonymous enum> >(EntityKeyId_t, const enum &, EntityKeyValidation_t);
	void SetValue<bool>(EntityKeyId_t, const bool &, EntityKeyValidation_t);
	void SetValue<Vector>(EntityKeyId_t, const Vector &, EntityKeyValidation_t);

	// vtable[0] StartNewEntity
	// vtable[1] OnEntitySpawned
	// sizeof = 144
};

// src/game/shared/entityspawner.h:277
class CEntitySpawner<CDevtestHierarchyChild> : public CEntitySpawnerBase<CDevtestHierarchyChild> {
public:

private:

	~CEntitySpawner();
	CEntitySpawner(CEntitySpawner<CDevtestHierarchyChild> &);
	CEntitySpawner(const CEntitySpawner<CDevtestHierarchyChild> &);
	CEntitySpawner(CEntitySpawnerContext<CDevtestHierarchyChild> *, CEntitySpawnBatch *);
	CEntitySpawner(SpawnGroupHandle_t, const matrix3x4a_t *, CEntitySpawnerContext<CDevtestHierarchyChild> *, CEntitySpawnBatch *);
	CHandle<CDevtestHierarchyChild> Spawn();
	CHandle<CDevtestHierarchyChild> Spawn(const Vector &, const QAngle &, CEntityInstance *);
	CHandle<CDevtestHierarchyChild> SpawnAndStartNewEntity();
	virtual void StartNewEntity();

protected:

	CEntitySpawner(EntitySpawnerFakeEmptyConstructor_t *);
	void Init(SpawnGroupHandle_t, const matrix3x4a_t &);

	// vtable[0] StartNewEntity
	// sizeof = 160
};

// src/game/shared/entityspawner.h:277
class CEntitySpawner<CWaterBullet> : public CEntitySpawnerBase<CWaterBullet> {
public:

private:

	~CEntitySpawner();
	CEntitySpawner(CEntitySpawner<CWaterBullet> &);
	CEntitySpawner(const CEntitySpawner<CWaterBullet> &);
	CEntitySpawner(CEntitySpawnerContext<CWaterBullet> *, CEntitySpawnBatch *);
	CEntitySpawner(SpawnGroupHandle_t, const matrix3x4a_t *, CEntitySpawnerContext<CWaterBullet> *, CEntitySpawnBatch *);
	CHandle<CWaterBullet> Spawn();
	CHandle<CWaterBullet> Spawn(const Vector &, const QAngle &, CEntityInstance *);
	CHandle<CWaterBullet> SpawnAndStartNewEntity();
	virtual void StartNewEntity();

protected:

	CEntitySpawner(EntitySpawnerFakeEmptyConstructor_t *);
	void Init(SpawnGroupHandle_t, const matrix3x4a_t &);

	// vtable[0] StartNewEntity
	// sizeof = 160
};

// src/game/shared/entityspawner.h:277
class CEntitySpawner<CTriggerMultiple> : public CEntitySpawnerBase<CTriggerMultiple> {
public:

private:

	~CEntitySpawner();
	CEntitySpawner(CEntitySpawner<CTriggerMultiple> &);
	CEntitySpawner(const CEntitySpawner<CTriggerMultiple> &);
	CEntitySpawner(CEntitySpawnerContext<CTriggerMultiple> *, CEntitySpawnBatch *);
	CEntitySpawner(SpawnGroupHandle_t, const matrix3x4a_t *, CEntitySpawnerContext<CTriggerMultiple> *, CEntitySpawnBatch *);
	CHandle<CTriggerMultiple> Spawn();
	CHandle<CTriggerMultiple> Spawn(const Vector &, const QAngle &, CEntityInstance *);
	CHandle<CTriggerMultiple> SpawnAndStartNewEntity();
	virtual void StartNewEntity();

protected:

	CEntitySpawner(EntitySpawnerFakeEmptyConstructor_t *);
	void Init(SpawnGroupHandle_t, const matrix3x4a_t &);

	// vtable[0] StartNewEntity
	// sizeof = 160
};

// CEntitySpawnerContext: 41 more instantiations (full list in INDEX.tsv)
//   CEntitySpawnerContext<CTriggerMultiple>
//   CEntitySpawnerContext<CWorld>
//   CEntitySpawnerContext<CBeam>
//   CEntitySpawnerContext<CEntityDissolve>
//   CEntitySpawnerContext<CEntityFlame>
//   CEntitySpawnerContext<CDebugHistory>
//   CEntitySpawnerContext<CFireSmoke>
//   CEntitySpawnerContext<CPlasma>
//   CEntitySpawnerContext<CEnvExplosion>
//   CEntitySpawnerContext<CFuncOccluder>
//   CEntitySpawnerContext<CShatterGlassShardPhysics>
//   CEntitySpawnerContext<CGib>
//   CEntitySpawnerContext<CRagGib>
//   CEntitySpawnerContext<CItemGenericTriggerHelper>
//   CEntitySpawnerContext<CPointHMDAnchor>
//   CEntitySpawnerContext<CRagdollProp>
//   CEntitySpawnerContext<CRagdollPropAttached>
//   CEntitySpawnerContext<CSimplePhysicsProp>
//   CEntitySpawnerContext<CKeepUpright>
//   CEntitySpawnerContext<CPhysicsProp>
//   CEntitySpawnerContext<CFuncLadder>
//   CEntitySpawnerContext<CDynamicProp>
//   CEntitySpawnerContext<CPropVRHand>
//   CEntitySpawnerContext<CVRHandModelOverride>
//   CEntitySpawnerContext<CSprite>
//   CEntitySpawnerContext<CDOTABaseAbility>
//   CEntitySpawnerContext<CDOTA_Item_Rune>
//   CEntitySpawnerContext<CDOTA_BaseNPC>
//   CEntitySpawnerContext<CDOTA_Unit_Announcer>
//   CEntitySpawnerContext<CDOTATeam>
//   CEntitySpawnerContext<CDOTA_Item>
//   CEntitySpawnerContext<CDOTA_Item_Physical>
//   CEntitySpawnerContext<CDOTA_Hero_Recorder>
//   CEntitySpawnerContext<CDOTAInGamePredictionState>
//   CEntitySpawnerContext<CDotaQuest>
//   CEntitySpawnerContext<CDotaSubquestBase>
//   CEntitySpawnerContext<CDOTA_TempTree>
//   CEntitySpawnerContext<CDOTA_Unit_Courier>
//   CEntitySpawnerContext<CDOTA_Pet_CarriedItem>
//   CEntitySpawnerContext<CDOTA_DeathProphet_Exorcism_Spirit>
//   CEntitySpawnerContext<CAdditionalWearable>

// CEntitySpawnerBase: 41 more instantiations (full list in INDEX.tsv)
//   CEntitySpawnerBase<CBaseEntity>
//   CEntitySpawnerBase<CWorld>
//   CEntitySpawnerBase<CBeam>
//   CEntitySpawnerBase<CDebugHistory>
//   CEntitySpawnerBase<CEntityFlame>
//   CEntitySpawnerBase<CEntityDissolve>
//   CEntitySpawnerBase<CPlasma>
//   CEntitySpawnerBase<CFireSmoke>
//   CEntitySpawnerBase<CEnvExplosion>
//   CEntitySpawnerBase<CShatterGlassShardPhysics>
//   CEntitySpawnerBase<CFuncOccluder>
//   CEntitySpawnerBase<CItemGenericTriggerHelper>
//   CEntitySpawnerBase<CRagGib>
//   CEntitySpawnerBase<CGib>
//   CEntitySpawnerBase<CPointHMDAnchor>
//   CEntitySpawnerBase<CSimplePhysicsProp>
//   CEntitySpawnerBase<CRagdollPropAttached>
//   CEntitySpawnerBase<CRagdollProp>
//   CEntitySpawnerBase<CKeepUpright>
//   CEntitySpawnerBase<CPhysicsProp>
//   CEntitySpawnerBase<CDynamicProp>
//   CEntitySpawnerBase<CFuncLadder>
//   CEntitySpawnerBase<CVRHandModelOverride>
//   CEntitySpawnerBase<CPropVRHand>
//   CEntitySpawnerBase<CSprite>
//   CEntitySpawnerBase<CDOTABaseAbility>
//   CEntitySpawnerBase<CDOTA_Item_Rune>
//   CEntitySpawnerBase<CDOTA_BaseNPC>
//   CEntitySpawnerBase<CDOTA_Unit_Announcer>
//   CEntitySpawnerBase<CDOTATeam>
//   CEntitySpawnerBase<CDOTA_Item_Physical>
//   CEntitySpawnerBase<CDOTA_Item>
//   CEntitySpawnerBase<CDOTAInGamePredictionState>
//   CEntitySpawnerBase<CDOTA_Hero_Recorder>
//   CEntitySpawnerBase<CDotaSubquestBase>
//   CEntitySpawnerBase<CDotaQuest>
//   CEntitySpawnerBase<CDOTA_TempTree>
//   CEntitySpawnerBase<CDOTA_Pet_CarriedItem>
//   CEntitySpawnerBase<CDOTA_Unit_Courier>
//   CEntitySpawnerBase<CDOTA_DeathProphet_Exorcism_Spirit>
//   CEntitySpawnerBase<CAdditionalWearable>

// CEntitySpawner: 40 more instantiations (full list in INDEX.tsv)
//   CEntitySpawner<CBaseEntity>
//   CEntitySpawner<CWorld>
//   CEntitySpawner<CBeam>
//   CEntitySpawner<CDebugHistory>
//   CEntitySpawner<CEntityFlame>
//   CEntitySpawner<CEntityDissolve>
//   CEntitySpawner<CPlasma>
//   CEntitySpawner<CFireSmoke>
//   CEntitySpawner<CEnvExplosion>
//   CEntitySpawner<CShatterGlassShardPhysics>
//   CEntitySpawner<CFuncOccluder>
//   CEntitySpawner<CItemGenericTriggerHelper>
//   CEntitySpawner<CRagGib>
//   CEntitySpawner<CGib>
//   CEntitySpawner<CSimplePhysicsProp>
//   CEntitySpawner<CRagdollPropAttached>
//   CEntitySpawner<CRagdollProp>
//   CEntitySpawner<CKeepUpright>
//   CEntitySpawner<CPhysicsProp>
//   CEntitySpawner<CDynamicProp>
//   CEntitySpawner<CFuncLadder>
//   CEntitySpawner<CVRHandModelOverride>
//   CEntitySpawner<CPropVRHand>
//   CEntitySpawner<CSprite>
//   CEntitySpawner<CDOTABaseAbility>
//   CEntitySpawner<CDOTA_Item_Rune>
//   CEntitySpawner<CDOTA_BaseNPC>
//   CEntitySpawner<CDOTA_Unit_Announcer>
//   CEntitySpawner<CDOTATeam>
//   CEntitySpawner<CDOTA_Item_Physical>
//   CEntitySpawner<CDOTA_Item>
//   CEntitySpawner<CDOTAInGamePredictionState>
//   CEntitySpawner<CDOTA_Hero_Recorder>
//   CEntitySpawner<CDotaSubquestBase>
//   CEntitySpawner<CDotaQuest>
//   CEntitySpawner<CDOTA_TempTree>
//   CEntitySpawner<CDOTA_Pet_CarriedItem>
//   CEntitySpawner<CDOTA_Unit_Courier>
//   CEntitySpawner<CDOTA_DeathProphet_Exorcism_Spirit>
//   CEntitySpawner<CAdditionalWearable>
