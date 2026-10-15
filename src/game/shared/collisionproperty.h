// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/collisionproperty.h:55
struct VPhysicsCollisionAttribute_t {
	class NetworkVar_m_nInteractsAs {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nInteractsWith {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nInteractsExclude {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nEntityId {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nHierarchyId {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nCollisionGroup {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nCollisionFunctionMask {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.VPhysicsCollisionAttribute_t;  // +0x0
private:

	static datamap_t m_DataMap;
	typedef VPhysicsCollisionAttribute_t ThisClass;
	~VPhysicsCollisionAttribute_t();
	VPhysicsCollisionAttribute_t(VPhysicsCollisionAttribute_t &);
	VPhysicsCollisionAttribute_t(const VPhysicsCollisionAttribute_t &);
	VPhysicsCollisionAttribute_t & operator=(VPhysicsCollisionAttribute_t &);
	VPhysicsCollisionAttribute_t & operator=(const VPhysicsCollisionAttribute_t &);
	VPhysicsCollisionAttribute_t();
	void Compare(const VPhysicsCollisionAttribute_t &);

	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] NetworkStateChanged
	// vtable[2] NetworkStateChanged
	// vtable[3] NetworkStateChangedLog
	// sizeof = 40
};

// src/game/shared/collisionproperty.h:97
class CCollisionProperty : public ICollideable {
	class NetworkVar_m_vecMins {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_vecMaxs {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_usSolidFlags {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nSolidType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_triggerBloat {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nSurroundType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_CollisionGroup {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bHitboxEnabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_vecSpecifiedSurroundingMins {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_vecSpecifiedSurroundingMaxs {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_vCapsuleCenter1 {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_vCapsuleCenter2 {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flCapsuleRadius {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	class NetworkVar_m_collisionAttribute : public VPhysicsCollisionAttribute_t {
	public:

		~NetworkVar_m_collisionAttribute();
		NetworkVar_m_collisionAttribute(NetworkVar_m_collisionAttribute &);
		NetworkVar_m_collisionAttribute(const NetworkVar_m_collisionAttribute &);
		NetworkVar_m_collisionAttribute & operator=(NetworkVar_m_collisionAttribute &);
		NetworkVar_m_collisionAttribute & operator=(const NetworkVar_m_collisionAttribute &);
		NetworkVar_m_collisionAttribute();
		void CopyFrom(const VPhysicsCollisionAttribute_t &);
		virtual void NetworkStateChanged();
		virtual void NetworkStateChangedLog(const char *, const char *);
		virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);

		// vtable[1] NetworkStateChanged
		// vtable[3] NetworkStateChangedLog
		// vtable[2] NetworkStateChanged
		// sizeof = 40
	};

	float m_flRadius;  // +0x58
	typedef CCollisionProperty ThisClass;
	typedef ThisClass ThisClass_m_collisionAttribute;
	CCollisionProperty(const CCollisionProperty &);
	CCollisionProperty & operator=(const CCollisionProperty &);

	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	CCollisionProperty();
	~CCollisionProperty();
	void Init(CBaseModelEntity *);
	void Shutdown();
	virtual CBaseEntity * GetEntity();
	virtual const Vector & OBBMins();
	virtual const Vector & OBBMaxs();
	virtual void WorldSpaceTriggerBounds(Vector *, Vector *);
	virtual const Vector & GetCollisionOrigin();
	virtual const QAngle & GetCollisionAngles();
	virtual float GetCollisionScale();
	virtual const matrix3x4_t & CollisionToWorldTransform();
	virtual SolidType_t GetSolid();
	virtual int GetSolidFlags();
	virtual int GetCollisionGroup();
	virtual void WorldSpaceSurroundingBounds(Vector *, Vector *);
	virtual bool ShouldTouchTrigger(const RnCollisionAttr_t &);
	virtual IPhysicsObject * GetVPhysicsObject();
	virtual const RnCollisionAttr_t & GetCollisionAttributes();
	int GetCollisionGroup_Inline();
	void SetCollisionGroup(int);
	virtual void MarkPartitionHandleDirty();
	void SetCollisionBounds(const Vector &, const Vector &);
	void UseTriggerBounds(bool, float);
	void SetSurroundingBoundsType(SurroundingBoundsType_t, const Vector *, const Vector *);
	SurroundingBoundsType_t GetSurroundingBoundsType();
	virtual void SetSolid(SolidType_t);
	Vector OBBSize();
	float BoundingRadius();
	float BoundingRadius2D();
	virtual Vector OBBCenter();
	Vector WorldSpaceCenter();
	void ClearSolidFlags();
	void RemoveSolidFlags(int);
	void AddSolidFlags(int);
	bool IsSolidFlagSet(int);
	void SetSolidFlags(int);
	bool IsSolid();
	virtual bool IsCollisionEnabled();
	void SetTriggerCollisionGroup();
	void RemoveTriggerCollisionGroup();
	bool IsTriggerCollisionGroup();
	void ForceTouchTriggers();
	bool IsBoundsDefinedInEntitySpace();
	const Vector & CollisionToWorldSpace(const Vector &, Vector *);
	const Vector & WorldToCollisionSpace(const Vector &, Vector *);
	const Vector & WorldDirectionToCollisionSpace(const Vector &, Vector *);
	void RandomPointInBounds(const Vector &, const Vector &, Vector *);
	bool IsPointInBounds(const Vector &);
	void WorldSpaceAABB(Vector *, Vector *);
	const Vector & NormalizedToCollisionSpace(const Vector &, Vector *);
	const Vector & NormalizedToWorldSpace(const Vector &, Vector *);
	const Vector & WorldToNormalizedSpace(const Vector &, Vector *);
	const Vector & CollisionToNormalizedSpace(const Vector &, Vector *);
	void CalcNearestPoint(const Vector &, Vector *);
	float CalcDistanceFromPoint(const Vector &);
	float CalcSqrDistanceFromPoint(const Vector &);
	virtual bool DoesRotationInvalidateSurroundingBox();
	virtual bool DoesVPhysicsInvalidateSurroundingBox();
	virtual bool DoesSequenceChangeInvalidateSurroundingBox();
	virtual void MarkSurroundingBoundsDirty();
	void OnUpdateSolidType(CEntityInstance *, const SolidType_t *);
	void OnUpdateSolidFlags(CEntityInstance *, const SolidFlags_t *);
	void OnUpdateOBB();
	void SetupPhysicsAsPoint(int);
	IPhysAggregateInstance * SetupPhysicsFromUnscaledCapsule(VPhysicsMotionType_t, int, const RnCapsule_t &);
	IPhysAggregateInstance * SetupPhysicsFromUnscaledAABB(VPhysicsMotionType_t, int, const Vector &, const Vector &);
	IPhysAggregateInstance * SetupPhysicsFromUnscaledOBB(VPhysicsMotionType_t, int, const Vector &, const Vector &);
	IPhysAggregateInstance * SetupPhysicsFromUnscaledModel(VPhysicsMotionType_t, int, bool);
	void SetupPhysicsAsNoCollision(int);
	RnCapsule_t GetCapsule(float);
	void SetCapsule(const RnCapsule_t &);
	virtual bool EnableAllCollisions();
	virtual bool DisableAllCollisions();
	virtual bool EnableSolidCollisions();
	virtual bool DisableSolidCollisions();
	bool IsSolidContactEnabled();
	bool EnableTouchEvents();
	bool DisableTouchEvents();
	bool EnableTraceAndQueries();
	bool DisableTraceAndQueries();
	bool EnableSelfCollisions();
	bool DisableSelfCollisions();
	bool EnableTouchPersistsNotification();
	bool DisableTouchPersistsNotification();
	void EnableInteractsAsMask(uint64);
	void EnableInteractsWithMask(uint64);
	void EnableInteractsExcludeMask(uint64);
	void DisableInteractsAsMask(uint64);
	void DisableInteractsExcludeMask(uint64);
	void EnableHitboxes();
	void DisableHitboxes();
	bool IsHitboxEnabled();
	const RnCollisionAttr_t & CollisionAttribute();
	void CollisionAttributeChanged();
	void EnableAutoSleeping();
	void DisableAutoSleeping();
	virtual const RnCollisionAttr_t & UpdateCollisionAttributes();
	void UpdateLocateHandle();
	void CollisionAABBToWorldAABB(const Vector &, const Vector &, Vector *, Vector *);
	void ComputeVPhysicsSurroundingBox(Vector *, Vector *);
	bool ComputeHitboxSurroundingBox(Vector *, Vector *);
	bool ComputeEntitySpaceHitboxSurroundingBox(Vector *, Vector *);
	void ComputeOBBBounds(Vector *, Vector *);
	void ComputeRotationExpandedSequenceBounds(Vector *, Vector *);
	void ComputeCollisionSurroundingBox(bool, Vector *, Vector *);
	void ComputeRotationExpandedBounds(Vector *, Vector *);
	void ComputeSurroundingBox(Vector *, Vector *);
	void CheckForUntouch();
	void CollisionGroupChanged();
	void CollisionRulesChanged();
	void UpdatePartition();
	CBaseModelEntity * GetOuter();
	int GetOffset_m_collisionAttribute();
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[28] Schema_DynamicBinding
	// vtable[29] HackToMakeAVTable
	// vtable[30] NetworkStateChanged
	// vtable[31] NetworkStateChanged
	// vtable[32] NetworkStateChangedLog
	// vtable[0] GetEntity
	// vtable[1] OBBMins
	// vtable[2] OBBMaxs
	// vtable[3] WorldSpaceTriggerBounds
	// vtable[4] GetCollisionOrigin
	// vtable[5] GetCollisionAngles
	// vtable[27] GetCollisionScale
	// vtable[6] CollisionToWorldTransform
	// vtable[7] GetSolid
	// vtable[8] GetSolidFlags
	// vtable[9] GetCollisionGroup
	// vtable[10] WorldSpaceSurroundingBounds
	// vtable[11] ShouldTouchTrigger
	// vtable[12] GetVPhysicsObject
	// vtable[13] GetCollisionAttributes
	// vtable[21] MarkPartitionHandleDirty
	// vtable[26] SetSolid
	// vtable[19] OBBCenter
	// vtable[14] IsCollisionEnabled
	// vtable[22] DoesRotationInvalidateSurroundingBox
	// vtable[23] DoesVPhysicsInvalidateSurroundingBox
	// vtable[24] DoesSequenceChangeInvalidateSurroundingBox
	// vtable[25] MarkSurroundingBoundsDirty
	// vtable[15] EnableAllCollisions
	// vtable[16] DisableAllCollisions
	// vtable[17] EnableSolidCollisions
	// vtable[18] DisableSolidCollisions
	// vtable[20] UpdateCollisionAttributes
	// sizeof = 168
};
