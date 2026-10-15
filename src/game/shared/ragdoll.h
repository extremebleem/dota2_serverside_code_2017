// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/ragdoll.h:17
class CRagdoll : public IRagdoll {
public:

private:

	static datamap_t m_DataMap;

	static uint s_globalCount;

	float m_lastUpdate;  // +0x5bc
	bool m_allAsleep;  // +0x5c0

	float m_flLastOriginChangeTime;  // +0x5d0
	float m_flAwakeTime;  // +0x5d4
	CRagdoll(const CRagdoll &);

	CRagdoll();
	virtual ~CRagdoll();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataMap();
	virtual void Init(CBaseModelEntity *, CBaseEntity *, const CModel *, const Vector &, int, const matrix3x4_t *, const matrix3x4_t *, const matrix3x4_t *, float, float);
	virtual const Vector & GetRagdollOrigin();
	virtual void GetRagdollBounds(Vector &, Vector &);
	virtual void BuildRagdollBounds(CBaseEntity *);
	virtual IPhysicsObject * GetElement(int);
	virtual void DrawWireframe();
	virtual bool VPhysicsUpdate(IPhysicsObject *);
	virtual int RagdollBoneCount();
	virtual bool AllowStretch();
	virtual bool SolvePenetrations(IPhysicsObject *, IPhysicsObject *);
	virtual bool IsValid();
	bool IsAsleep();
	virtual int GetRootBone();
	virtual void ResetRagdollSleepAfterTime();
	virtual float GetLastVPhysicsUpdateTime();
	void CheckSettleStationaryRagdoll();
	void PhysForceRagdollToSleep();
	ragdoll_t * GetRagdoll();

	// vtable[0] Schema_DynamicBinding
	// vtable[12] GetDataMap
	// vtable[16] Init
	// vtable[3] GetRagdollOrigin
	// vtable[4] GetRagdollBounds
	// vtable[10] BuildRagdollBounds
	// vtable[6] GetElement
	// vtable[7] DrawWireframe
	// vtable[8] VPhysicsUpdate
	// vtable[5] RagdollBoneCount
	// vtable[9] AllowStretch
	// vtable[11] SolvePenetrations
	// vtable[17] IsValid
	// vtable[15] GetRootBone
	// vtable[13] ResetRagdollSleepAfterTime
	// vtable[14] GetLastVPhysicsUpdateTime
	// sizeof = 1496
};
