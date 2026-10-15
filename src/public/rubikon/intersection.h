// Reconstructed from DWARF by pahole; not original source.

// src/public/rubikon/intersection.h:131
struct RnCollisionAttr_t {
	uint64 m_nInteractsAs;  // +0x0
	uint64 m_nInteractsWith;  // +0x8
	uint64 m_nInteractsExclude;  // +0x10
	uint32 m_nEntityId;  // +0x18
	uint16 m_nHierarchyId;  // +0x1c
	uint8 m_nCollisionGroup;  // +0x1e
	uint8 m_nCollisionFunctionMask;  // +0x1f
	RnCollisionAttr_t();
	uint64 GetUsedLayerMask();
	uint64 GetUsedGroupMask();
	uint8 GetCollisionFunctionMask();
	void SetCollisionFunctionMask(uint8);
	bool AddCollisionFunctionMask(uint8);
	bool RemoveCollisionFunctionMask(uint8);
	void SetCollisionGroup(int);
	bool IsSolidContactEnabled();
	bool IsTraceAndQueryEnabled();
	bool IsTouchEventEnabled();
	bool IsSelfCollisionEnabled();
	bool ShouldIgnoreForHitboxTest();
	void EnableInteractsAs(uint64);
	void DisableInteractsAs(uint64);
	void EnableInteractsWith(uint64);
	void DisableInteractsWith(uint64);
	void EnableInteractsExclude(uint64);
	void DisableInteractsExclude(uint64);
	bool HasInteractsAs(uint64);
	bool HasInteractsWith(uint64);
	bool HasInteractsExclude(uint64);
	uint32 GetEntityId();
	uint32 GetHierarchyId();

private:

	void EnableInteractsAs(int);
	void DisableInteractsAs(int);
	void EnableInteractsWith(int);
	void DisableInteractsWith(int);
	void EnableInteractsExclude(int);
	void DisableInteractsExclude(int);

	// sizeof = 32
};

// src/public/rubikon/intersection.h:238
struct RnQueryShapeAttr_t {
	uint64 m_nInteractsWith;  // +0x0
	uint64 m_nInteractsExclude;  // +0x8
	uint64 m_nInteractsAs;  // +0x10
	uint32 m_nEntityIdToIgnore;  // +0x18
	uint16 m_nHierarchyId;  // +0x1c
	uint8 m_nCollisionGroup;  // +0x1e
	bool m_bHitSolid:1;  // +0x1f:0
	bool m_bHitSolidRequiresGenerateContacts:1;  // +0x1f:1
	bool m_bHitTrigger:1;  // +0x1f:2
	bool m_bShouldIgnoreDisabledPairs:1;  // +0x1f:3
	RnQueryShapeAttr_t();
	void EnableInteractsAs(uint64);
	void DisableInteractsAs(uint64);
	void EnableInteractsWith(uint64);
	void DisableInteractsWith(uint64);
	void EnableInteractsExclude(uint64);
	void DisableInteractsExclude(uint64);
	bool HasInteractsAs(uint64);
	bool HasInteractsWith(uint64);
	bool HasInteractsExclude(uint64);
	uint64 GetInteractsWith();
	void SetInteractsWith(uint64);
	uint64 GetInteractsExclude();
	void SetInteractsExclude(uint64);
	uint64 GetInteractsAs();
	void SetInteractsAs(uint64);
	uint32 GetEntityToIgnore();
	uint32 GetHierarchyId();
	void SetEntityToIgnore(uint32);
	void SetCollisionGroup(int);
	IntersectionLayerIndex GetCollisionGroup();
	void EnableHitSolid();
	void DisableHitSolid();
	void EnableHitTrigger();
	void DisableHitTrigger();
	void IgnoreDisabledPairs(bool);
	bool ShouldHitSolid();
	bool ShouldHitTrigger();
	bool ShouldIgnoreDisabledPairs();
	void SetHitSolidRequiresGenerateContacts(bool);
	bool GetHitSolidRequiresGenerateContacts();

private:

	void EnableInteractsAs(int);
	void DisableInteractsAs(int);
	void EnableInteractsWith(int);
	void DisableInteractsWith(int);
	void EnableInteractsExclude(int);
	void DisableInteractsExclude(int);

	// sizeof = 32
};

// src/public/rubikon/intersection.h:321
struct RnQueryAttr_t : public RnQueryShapeAttr_t {
public:

private:

	RnQueryAttr_t(RnQueryObjectSet, uint64, uint32);
	RnQueryAttr_t();
	RnQueryObjectSet GetObjectSetMask();
	void SetObjectSetMask(RnQueryObjectSet);

	// sizeof = 40
};
