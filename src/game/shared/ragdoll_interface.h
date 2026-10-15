// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/ragdoll_interface.h:28
class IRagdoll {
	int ()() * * _vptr.IRagdoll;  // +0x0
private:

	IRagdoll(const IRagdoll &);
	IRagdoll();

	virtual ~IRagdoll();
	virtual const Vector & GetRagdollOrigin();
	virtual void GetRagdollBounds(Vector &, Vector &);
	virtual int RagdollBoneCount();
	virtual IPhysicsObject * GetElement(int);
	virtual void DrawWireframe();
	virtual bool VPhysicsUpdate(IPhysicsObject *);
	virtual bool AllowStretch();
	virtual void BuildRagdollBounds(CBaseEntity *);
	virtual bool SolvePenetrations(IPhysicsObject *, IPhysicsObject *);
	virtual datamap_t * GetDataMap();
	virtual void ResetRagdollSleepAfterTime();
	virtual float GetLastVPhysicsUpdateTime();
	ragdoll_t * GetRagdoll();
	virtual int GetRootBone();
	virtual void Init(CBaseModelEntity *, CBaseEntity *, const CModel *, const Vector &, int, const matrix3x4_t *, const matrix3x4_t *, const matrix3x4_t *, float, float);
	virtual bool IsValid();
	virtual int GetActiveWound(int);
	virtual void AddExplosionImpulseFrom(const Vector &);
	IRagdoll & operator=(const IRagdoll &);

	// vtable[0] Schema_DynamicBinding
	// vtable[3] GetRagdollOrigin
	// vtable[4] GetRagdollBounds
	// vtable[5] RagdollBoneCount
	// vtable[6] GetElement
	// vtable[7] DrawWireframe
	// vtable[8] VPhysicsUpdate
	// vtable[9] AllowStretch
	// vtable[10] BuildRagdollBounds
	// vtable[11] SolvePenetrations
	// vtable[12] GetDataMap
	// vtable[13] ResetRagdollSleepAfterTime
	// vtable[14] GetLastVPhysicsUpdateTime
	// vtable[15] GetRootBone
	// vtable[16] Init
	// vtable[17] IsValid
	// vtable[18] GetActiveWound
	// vtable[19] AddExplosionImpulseFrom
	// sizeof = 8
};
