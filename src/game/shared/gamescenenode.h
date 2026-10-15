// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/gamescenenode.h:40
class CGameSceneNodeHandle {
	class NetworkVar_m_hOwner {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_name {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.CGameSceneNodeHandle;  // +0x0
private:

	static datamap_t m_DataMap;
	typedef CGameSceneNodeHandle ThisClass;
	CGameSceneNodeHandle & operator=(const CGameSceneNodeHandle &);
	CGameSceneNodeHandle();
	CGameSceneNodeHandle(uint64);
	CGameSceneNodeHandle(const CGameSceneNode *);
	CGameSceneNodeHandle(CEntityInstance *);
	CGameSceneNodeHandle(CEntityHandle);
	CGameSceneNodeHandle(const CGameSceneNodeHandle &);
	uint64 ToInt();
	uint64 ToNetworkableInt();
	void FromIndex(uint64);
	void FromNetworkableInt(uint64);
	CGameSceneNode * Get();
	CEntityIndex GetEntityIndex();
	bool IsValid();
	bool IsNull();

	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] NetworkStateChanged
	// vtable[2] NetworkStateChanged
	// vtable[3] NetworkStateChangedLog
	// sizeof = 16
};

// src/game/shared/gamescenenode.h:40
class CGameSceneNodeHandle {
	class NetworkVar_m_hOwner {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_name {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.CGameSceneNodeHandle;  // +0x0
private:

	static datamap_t m_DataMap;
	typedef CGameSceneNodeHandle ThisClass;
	~CGameSceneNodeHandle();
	CGameSceneNodeHandle & operator=(const CGameSceneNodeHandle &);
	CGameSceneNodeHandle();
	CGameSceneNodeHandle(uint64);
	CGameSceneNodeHandle(const CGameSceneNode *);
	CGameSceneNodeHandle(CEntityInstance *);
	CGameSceneNodeHandle(CEntityHandle);
	CGameSceneNodeHandle(const CGameSceneNodeHandle &);
	uint64 ToInt();
	uint64 ToNetworkableInt();
	void FromIndex(uint64);
	void FromNetworkableInt(uint64);
	CGameSceneNode * Get();
	CEntityIndex GetEntityIndex();
	bool IsValid();
	bool IsNull();

	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] NetworkStateChanged
	// vtable[2] NetworkStateChanged
	// vtable[3] NetworkStateChangedLog
	// sizeof = 16
};

// src/game/shared/gamescenenode.h:101
struct TransformHistory_t {
	float m_flRootToParentScale;  // +0x40
	float m_flRootToWorldScale;  // +0x44
	uint64 m_parentGSNHandle;  // +0x48
	bool m_bRootToParentInvalid;  // +0x54
	bool m_bRootToWorldInvalid;  // +0x55
	TransformHistory_t();
	bool operator==(const TransformHistory_t &);
	bool IsIdenticalWithinTolerance(const TransformHistory_t &);
	CUtlString GetDebugString();
	CUtlString GetDebugSpeedString(float, float, const TransformHistory_t *);
	bool UsesSameParentSpace(const TransformHistory_t &);

	// sizeof = 96
};

// src/game/shared/gamescenenode.h:121
class CGameSceneNode {
	class NetworkVar_m_angRotation {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flScale {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_name {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hierarchyAttachName {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.CGameSceneNode;  // +0x0

private:

	static datamap_t m_DataMap;

protected:

	class NetworkVar_m_hParent : public CGameSceneNodeHandle {
	public:

		NetworkVar_m_hParent & operator=(NetworkVar_m_hParent &);
		NetworkVar_m_hParent & operator=(const NetworkVar_m_hParent &);
		~NetworkVar_m_hParent();
		NetworkVar_m_hParent(NetworkVar_m_hParent &);
		NetworkVar_m_hParent(const NetworkVar_m_hParent &);
		NetworkVar_m_hParent();
		void CopyFrom(const CGameSceneNodeHandle &);
		virtual void NetworkStateChanged();
		virtual void NetworkStateChangedLog(const char *, const char *);
		virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
		NetworkVar_m_hParent & operator=<CGameSceneNode*>(CGameSceneNode * const &);
		NetworkVar_m_hParent & operator=<CGameSceneNodeHandle>(const CGameSceneNodeHandle &);

		// vtable[1] NetworkStateChanged
		// vtable[3] NetworkStateChangedLog
		// vtable[2] NetworkStateChanged
		// sizeof = 16
	};

private:

	class Cm_vecOriginInitializer : public INetworkStateChangedRouter {
	public:

		~Cm_vecOriginInitializer();
		Cm_vecOriginInitializer(Cm_vecOriginInitializer &);
		Cm_vecOriginInitializer(const Cm_vecOriginInitializer &);
		Cm_vecOriginInitializer();
		virtual void NetworkStateChanged(void *, int32, int32, ChangeAccessorFieldPathIndex_t);
		virtual void NetworkStateChangedLog(const char *);

	private:

		ThisClass * GetOuter();
		const ThisClass * GetOuter();

		// vtable[0] NetworkStateChanged
		// vtable[1] NetworkStateChangedLog
		// sizeof = 8
	};

	float m_flAbsScale;  // +0xf0
protected:

	int16 m_nParentAttachmentOrBone;  // +0xf4
	bool m_bDormant;  // +0xf6
	bool m_bForceParentToBeNetworked;  // +0xf7
	bool m_bDirtyHierarchy:1;  // +0xf8:0
	bool m_bDirtyBoneMergeInfo:1;  // +0xf8:1
	bool m_bNetworkedPositionChanged:1;  // +0xf8:2
	bool m_bNetworkedAnglesChanged:1;  // +0xf8:3
	bool m_bNetworkedScaleChanged:1;  // +0xf8:4
	bool m_bWillBeCallingPostDataUpdate:1;  // +0xf8:5
	bool m_bNotifyBoneTransformsChanged:1;  // +0xf8:6

	uint8 m_nLatchAbsOrigin:2;  // +0xf9:0
	bool m_bDirtyBoneMergeBoneToRoot:1;  // +0xf9:2

	uint8 m_nHierarchicalDepth;  // +0xfa
	uint8 m_nHierarchyType;  // +0xfb
	uint8 m_nDoNotSetAnimTimeInInvalidatePhysicsCount;  // +0xfc

	float m_flZOffset;  // +0x128
	uint32 m_nCachedInvalidatePhysicsRecursiveFlags;  // +0x12c

	static CInterlockedInt sm_nInvalidatePhysicsRecursiveInProgress;
	static int sm_nBatchCallsToInvalidatePhysicsRecursive;
private:

	typedef CGameSceneNode ThisClass;
	typedef ThisClass ThisClass_m_hParent;
	CGameSceneNode(const CGameSceneNode &);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	CGameSceneNode();
	virtual ~CGameSceneNode();
	virtual void AddedToEntityDatabase(CEntityInstance *);
	virtual void Connect(const char *, CEntityInstance *);
	virtual bool Spawn(CEntityInstance *, const char *, const CEntityKeyValues *);
	virtual void Activate(CEntityInstance *, ActivateType_t);
	virtual void UpdateOnRemove(CEntityInstance *);
	virtual void OnSetDormant(CEntityInstance *, EntityDormancyType_t, EntityDormancyType_t);
	virtual CSkeletonInstance * GetSkeletonInstance();
	virtual const CSkeletonInstance * GetSkeletonInstance();
	CEntityInstance * GetOwner();
	CGameEntity * GetOwnerGameEntity();
	CBaseEntity * GetOwnerEntity();
	void SetNodeToWorldTransform(const matrix3x4a_t &, uint32);
	const Vector & GetLocalOrigin();
	const QAngle & GetLocalAngles();
	float GetLocalScale();
	const Vector & GetAbsOrigin();
	const QAngle & GetAbsAngles();
	float GetAbsScale();
	const CNetworkOriginCellCoordQuantizedVector & GetQuantizedLocalOrigin();
	void SetLocalOrigin(const Vector &);
	void SetLocalAngles(const QAngle &);
	void SetLocalOrientation(const Quaternion &);
	void SetLocalScale(float);
	void SetAbsOrigin(const Vector &);
	void SetAbsAngles(const QAngle &);
	void SetAbsScale(float);
	void ForceDirtyOriginAngles(const Vector &, const QAngle &);
	AttachToParentResult_t AttachToParent(CGameSceneNode *, CUtlStringToken, const matrix3x4a_t *);
	void DetachFromParent();
	CGameSceneNode * GetParent();
	CGameSceneNode * GetFirstHierarchicalChild();
	CGameSceneNode * GetNextHierarchicalSibling();
	CUtlStringToken GetHierarchyAttachName();
	int GetHierarchyDepth();
	HierarchyType_t GetHierarchyAttachType();
	void SetName(CUtlStringToken);
	CUtlStringToken GetName();
	bool IsBodyGameSceneNode();
	virtual void InvalidatePhysicsRecursive(uint32);
	virtual void SetAnimationParentSpaceStateDirty();
	virtual void SetCompositeParentSpaceStateDirty();
	virtual void SetCompositeWorldSpaceStateDirty();
	void ComputeBoneOrAttachmentToWorld(CUtlStringToken, matrix3x4a_t *);
	void ForceParentToBeNetworked(bool);
	bool IsDormant();
	matrix3x4a_t & NodeToWorldTransform();
	const matrix3x4a_t & NodeToWorldTransform();
	matrix3x4_t NodeToWorldTransformUnscaled();
	int GetBoneMergeCount();
	const bone_merge_list_t * GetBoneMergeInfo();
	bool IsBoneMergeInfoDirty();
	bool HasFutureInterpolatedData(float);
	void ResetPositionInterpolators();
	void CreateInitialPositionHistorySamples(int, const Vector &, int, const Vector &);
	void EstimateAbsVelocity(Vector *);
	void CreateContinuousVelocityInterpolationHistory(const Vector &);
	void MarkInInvalidatePhysicsRecursive(bool);
	void BatchCallsToInvalidatePhysicsRecursive(bool);
	void SetNotifyBoneTransformsChanged(bool);
	bool GetNotifyBoneTransformsChanged();
	bool IsAuthoritativeAboutPosition();
	void MarkNetworkStateChangedForLocalAngles();
	void MarkNetworkStateChangedForOrigin(int);
	WorldGroupId_t GetWorldGroupId();
	BoneFlags_t GetValidBoneFlags();
	void ComputeNodeToWorldForHierarchy(const matrix3x4a_t &, const CBoneAccessor<matrix3x4a_t> &, const matrix3x4a_t &, matrix3x4a_t *);
	void SetZOffset(float);
	float GetZOffset();

protected:

	bool IsValidToPerformInvalidatePhysicsRecursive();
	void PerformInvalidatePhysicsRecursiveInternal();
	virtual void PerformInvalidatePhysicsRecursive(uint32);
	void OnLocalOriginNetworkChangeReceived();
	void OnLocalAnglesNetworkChangeReceived();
	void OnLocalScaleNetworkChangeReceived();
	void AdjustChildHierarchyDepth_R(int);
	virtual void OnHierarchyChanged(bool);
	void OnHierarchyParentChanged();
	void OnHierarchyAttachmentChanged();
	virtual void PreInstanceSpawn();
	virtual void PostInstanceSpawn(CUtlVector<CSkeletonAnimationController*, CUtlMemory<CSkeletonAnimationController*, int> > &);
	virtual void PostDataUpdate(DataUpdateType_t, CUtlVector<CSkeletonAnimationController*, CUtlMemory<CSkeletonAnimationController*, int> > &);
	virtual void OnRestore(CUtlVector<CSkeletonAnimationController*, CUtlMemory<CSkeletonAnimationController*, int> > &);
	void LinkIntoHierarchyTree(CGameSceneNode *);
	void UnlinkFromHierarchyTree();
	void CalcAbsolutePosition();
	virtual HierarchyType_t DetermineHierarchyAttachType(CUtlStringToken);
	bool StartHierarchicalAttachment();
	void EndHierarchicalAttachment(bool);
	matrix3x4a_t * GetRootToBoneMergeTransformForModify();

private:

	void CalcAbsolutePositionWhenDirty();
	void SetNodeToParentInternal(const Vector &, const QAngle &, float);
	void SetNodeToParentInternal(const matrix3x4a_t &);
	void ComputeNodeToParent(matrix3x4a_t *);
	void SetNodeToWorldInternal(const Vector &, const QAngle &, float);
	void SetNodeToWorldInternal(const matrix3x4a_t &);
	void FinalizeHierarchyRecursive();
	bool FinalizeHierarchyUpdaterPostSpawn();
	bool BuildBoneMergeWork(CGameSceneNode *);
	void PerformHierarchySetupWork();
	void UpdateEntityForHierarchyChange(CGameSceneNode *);
	bool CheckForCircularLoops();
	void ComputeAbsTransformForPreviousLatchSamples(InterpolatedVarPhase_t);
	void PerformPostInvalidatePhysicsWork();
	void ModifyAnimTimeSetScope(int);
	void ReadTransformValue(TransformHistory_t *, int, const IInterpolatedVar *);
	void WriteTransformValue(const TransformHistory_t *, int, const IInterpolatedVar *, IVWriteOpType_t);
	void Lerp_NoCopy(TransformHistory_t &, float, const TransformHistory_t &, const TransformHistory_t &);
	void LoopingLerp_NoCopy(TransformHistory_t &, float, const TransformHistory_t &, const TransformHistory_t &);
	void Lerp_Hermite_NoCopy(TransformHistory_t &, const TransformHistory_t &, float, const TransformHistory_t &, const TransformHistory_t &, const TransformHistory_t &);
	void LoopingLerp_Hermite_NoCopy(TransformHistory_t &, const TransformHistory_t &, float, const TransformHistory_t &, const TransformHistory_t &, const TransformHistory_t &);
	void ReadOffsetValue(float *, int, const IInterpolatedVar *);
	void WriteOffsetValue(const float *, int, const IInterpolatedVar *, IVWriteOpType_t);

protected:

	int GetOffset_m_hParent();

private:

	int GetOffset_m_vecOrigin();
	CNetworkOriginCellCoordQuantizedVector & Get_m_vecOrigin();
	CGameSceneNode & operator=(const CGameSceneNode &);

	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] HackToMakeAVTable
	// vtable[3] AddedToEntityDatabase
	// vtable[4] Connect
	// vtable[5] Spawn
	// vtable[6] Activate
	// vtable[7] UpdateOnRemove
	// vtable[8] OnSetDormant
	// vtable[9] GetSkeletonInstance
	// vtable[10] GetSkeletonInstance
	// vtable[11] InvalidatePhysicsRecursive
	// vtable[12] SetAnimationParentSpaceStateDirty
	// vtable[13] SetCompositeParentSpaceStateDirty
	// vtable[14] SetCompositeWorldSpaceStateDirty
	// vtable[15] PerformInvalidatePhysicsRecursive
	// vtable[16] OnHierarchyChanged
	// vtable[17] PreInstanceSpawn
	// vtable[18] PostInstanceSpawn
	// vtable[19] PostDataUpdate
	// vtable[20] OnRestore
	// vtable[21] DetermineHierarchyAttachType
	// vtable[22] Schema_DynamicBinding
	// vtable[23] NetworkStateChanged
	// vtable[24] NetworkStateChanged
	// vtable[25] NetworkStateChangedLog
	// sizeof = 304
};

// src/game/shared/gamescenenode.h:676
class CLockAbsTransformsScopeGuard {
	CLockAbsTransformsScopeGuard();
	~CLockAbsTransformsScopeGuard();

	// sizeof = 1
};

// src/game/shared/gamescenenode.h:694
class CInvalidatePhysicsRecursiveScopeGuard {
	CInvalidatePhysicsRecursiveScopeGuard();
	~CInvalidatePhysicsRecursiveScopeGuard();

	// sizeof = 1
};

// src/game/shared/gamescenenode.h:710
class CSkipAnimTimeSetScope {
private:

	CSkipAnimTimeSetScope(CGameSceneNode *);
	~CSkipAnimTimeSetScope();

	// sizeof = 8
};

// src/game/shared/gamescenenode.h:731
class CBatchInvalidatePhysicsRecursiveScope {
	CBatchInvalidatePhysicsRecursiveScope();
	~CBatchInvalidatePhysicsRecursiveScope();

	// sizeof = 1
};
