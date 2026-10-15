// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/bodycomponent.h:28
struct SkeletonAttachmentHandle_t {
	AttachmentHandle_t m_hAttachmentHandle;  // +0x8
	SkeletonAttachmentHandle_t(CSkeletonInstance *, AttachmentHandle_t);
	bool IsValid();
	bool operator==(const SkeletonAttachmentHandle_t &);

	// sizeof = 16
};

// src/game/shared/bodycomponent.h:55
class CBodyComponent : public CEntityComponent {
	enum {
		ENT_IS_CONTAINED = 0,
	};

public:

	int ()() * * _vptr.CBodyComponent;  // +0x0
protected:

	static bool sm_bTransformMofificationOk;
private:

	static EntComponentInfo_t s_EntComponentInfo;
	static int entity_component_error_class_decl_says_contained_but_impl_is_referenced;

	static datamap_t m_DataMap;
	typedef CBodyComponent ThisClass;
	CBodyComponent(const CBodyComponent &);
	CBodyComponent(CGameSceneNode *);
	~CBodyComponent();
	void SetLocalPosition(const Vector &);
	void SetLocalAngles(const QAngle &);
	void SetLocalOrientation(const Quaternion &);
	const Vector & GetAbsOrigin();
	const QAngle & GetAbsAngles();
	bool GetAttachmentInfo(const char *, const char *, HSCRIPT);
	void SetModel(HModel);
	void SetModelAsync(const char *);
	bool Connect(CEntityInstance *);
	void AddedToEntityDatabase(CEntityInstance *);
	bool Spawn(CEntityInstance *, const CEntityKeyValues *);
	bool Activate(CEntityInstance *, ActivateType_t);
	void SetMaterialGroup(CUtlStringToken);
	CUtlStringToken GetMaterialGroup();
	void SetSingleMeshGroup(CUtlStringToken);
	void SetMeshGroupMask(MeshGroupMask_t);
	MeshGroupMask_t GetMeshGroupMask();
	HModel GetModel();
	const CModel * GetModelData();
	string_t GetModelName();
	CSkeletonInstance * GetSkeletonInstance();
	const CSkeletonInstance * GetSkeletonInstance();
	CGameSceneNode * GetGameSceneNode();
	const CGameSceneNode * GetGameSceneNode();
	void StopAnimation();
	bool DeclareGameSceneNode(CGameSceneNode *);
	bool UndeclareGameSceneNode(CGameSceneNode *);
	CGameSceneNode * LookupGameSceneNode(CUtlStringToken);
	CSkeletonInstance * LookupSkeletonInstance(CUtlStringToken);
	int GetGameSceneNodeCount();
	CGameSceneNode * GetGameSceneNodeByIndex(int);
	virtual CSkeletonAnimationController * GetAnimationController();
	const CSkeletonAnimationController * GetAnimationController();
	void SetPlaybackRate(float);
	virtual void SetAnimationSequence(HSequence);
	virtual void SetAnimationSequence(const char *);
	HSequence GetSequence();
	float SequenceDuration(const char *);
	HSequence LookupSequence(const char *);
	const matrix3x4a_t & EntityToWorldTransform();
	void SetEntityToWorldTransform(const matrix3x4a_t &);
	float EyeHeight();
	void GetWorldSpaceTransform(int, matrix3x4a_t *);
	bool GetWorldSpaceTransform(const char *, matrix3x4a_t *);
	void SetBodyGroup(const char *);
	void AllowEntityTransformModification(bool);
	SkeletonAttachmentHandle_t LookupAttachment(CUtlStringToken, CUtlStringToken);
	void SetupAttachmentTransform(SkeletonAttachmentHandle_t, CTransform &, CTransform *, CTransform *);
	AttachToParentResult_t AttachToParent(CBodyComponent *, CUtlStringToken, const matrix3x4a_t *);
	void DetachFromParent();
	bool IsAttachedToParent();
	CEntityInstance * GetParent();
	Vector WorldSpaceCenter();
	const matrix3x4a_t CollisionToWorldTransform();
	Vector OBBMins();
	Vector OBBMaxs();
	void GetOBB(Vector *, Vector *);
	void GetWorldSpaceAABB(Vector *, Vector *);
	void GetRenderBoundsWorldSpace(Vector *, Vector *);
	void GetRenderBounds(Vector *, Vector *);
	void AddVelocity(const Vector &, const Vector &);
	void AddImpulseAtPosition(const Vector &, const Vector &);
	void AddImpulseAtCenter(const Vector &);
	void SetVelocity(const Vector &);
	void SetAngularVelocity(const Vector &);
	VPhysicsMotionType_t GetMotionType();
	void SetMotionType(VPhysicsMotionType_t);
	void ComputeBoneOrAttachmentToWorld(CUtlStringToken, matrix3x4a_t *);

protected:

	void InstallMergeToParentBoneOrAttachment(CSkeletonInstance *, CSkeletonInstance *, CBodyComponent *, uint32);
	void RemoveAllBoneMerge();
	void RemoveAllHierarchy();
	CEntityComponentHelper * GetBaseComponentHelper();

	EntComponentInfo_t & GetEntComponentInfo();
	int GetRuntimeComponentIndex();
	bool EntIsContained();
	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	void NetworkStateChangedLog(const char *, const char *);
	CEntityInstance * GetOwner();
	const CEntityInstance * GetOwner();
	CBodyGameSystem * GetGameSystem();

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();

	// vtable[0] GetAnimationController
	// vtable[1] SetAnimationSequence
	// vtable[2] SetAnimationSequence
	// vtable[3] Schema_DynamicBinding
	// vtable[4] HackToMakeAVTable
	// vtable[5] GetDataDescMap
	// sizeof = 72
};

// src/game/shared/bodycomponent.h:360
class CBodyComponentPoint : public CBodyComponent {
public:

	class NetworkVar_m_sceneNode : public CGameSceneNode {
	public:

		NetworkVar_m_sceneNode(NetworkVar_m_sceneNode &);
		NetworkVar_m_sceneNode(const NetworkVar_m_sceneNode &);
		NetworkVar_m_sceneNode();
		virtual void NetworkStateChanged();
		virtual void NetworkStateChangedLog(const char *, const char *);
		virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
		virtual ~NetworkVar_m_sceneNode();

		// vtable[23] NetworkStateChanged
		// vtable[25] NetworkStateChangedLog
		// vtable[24] NetworkStateChanged
		// sizeof = 304
	};

private:

	static EntComponentInfo_t s_EntComponentInfo;
	static int entity_component_error_class_decl_says_contained_but_impl_is_referenced;
	typedef ThisClass ThisClass_m_sceneNode;
	typedef CBodyComponentPoint ThisClass;
	CBodyComponentPoint();
	virtual CSkeletonAnimationController * GetAnimationController();
	int GetOffset_m_sceneNode();
	CEntityComponentHelper * GetBaseComponentHelper();

protected:

	EntComponentInfo_t & GetEntComponentInfo();
	int GetRuntimeComponentIndex();
	bool EntIsContained();
	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	void NetworkStateChangedLog(const char *, const char *);
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] GetAnimationController
	// vtable[3] Schema_DynamicBinding
	// sizeof = 416
};

// src/game/shared/bodycomponent.h:360
class CBodyComponentPoint : public CBodyComponent {
public:

	class NetworkVar_m_sceneNode : public CGameSceneNode {
	public:

		NetworkVar_m_sceneNode(NetworkVar_m_sceneNode &);
		NetworkVar_m_sceneNode(const NetworkVar_m_sceneNode &);
		NetworkVar_m_sceneNode();
		virtual void NetworkStateChanged();
		virtual void NetworkStateChangedLog(const char *, const char *);
		virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
		virtual ~NetworkVar_m_sceneNode();

		// vtable[23] NetworkStateChanged
		// vtable[25] NetworkStateChangedLog
		// vtable[24] NetworkStateChanged
		// sizeof = 304
	};

private:

	static EntComponentInfo_t s_EntComponentInfo;
	static int entity_component_error_class_decl_says_contained_but_impl_is_referenced;
	typedef ThisClass ThisClass_m_sceneNode;
	typedef CBodyComponentPoint ThisClass;
	CBodyComponentPoint();
	virtual CSkeletonAnimationController * GetAnimationController();
	int GetOffset_m_sceneNode();
	CEntityComponentHelper * GetBaseComponentHelper();

protected:

	EntComponentInfo_t & GetEntComponentInfo();
	int GetRuntimeComponentIndex();
	bool EntIsContained();
	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	void NetworkStateChangedLog(const char *, const char *);
	/* tag__fprintf: const_type tag not supported! */;
	~CBodyComponentPoint();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] GetAnimationController
	// vtable[3] Schema_DynamicBinding
	// sizeof = 416
};

// src/game/shared/bodycomponent.h:360
class CBodyComponentPoint : public CBodyComponent {
public:

	class NetworkVar_m_sceneNode : public CGameSceneNode {
	public:

		NetworkVar_m_sceneNode(NetworkVar_m_sceneNode &);
		NetworkVar_m_sceneNode(const NetworkVar_m_sceneNode &);
		NetworkVar_m_sceneNode();
		virtual void NetworkStateChanged();
		virtual void NetworkStateChangedLog(const char *, const char *);
		virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
		virtual ~NetworkVar_m_sceneNode();

		// vtable[23] NetworkStateChanged
		// vtable[25] NetworkStateChangedLog
		// vtable[24] NetworkStateChanged
		// sizeof = 304
	};

private:

	static EntComponentInfo_t s_EntComponentInfo;
	static int entity_component_error_class_decl_says_contained_but_impl_is_referenced;
	typedef ThisClass ThisClass_m_sceneNode;
	typedef CBodyComponentPoint ThisClass;
	CBodyComponentPoint();
	virtual CSkeletonAnimationController * GetAnimationController();
	int GetOffset_m_sceneNode();
	CEntityComponentHelper * GetBaseComponentHelper();

protected:

	EntComponentInfo_t & GetEntComponentInfo();
	int GetRuntimeComponentIndex();
	bool EntIsContained();
	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	void NetworkStateChangedLog(const char *, const char *);
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] GetAnimationController
	// vtable[3] Schema_DynamicBinding
	// sizeof = 416
};

// src/game/shared/bodycomponent.h:373
class CBodyComponentSkeletonInstance : public CBodyComponent {
	typedef CBodyComponentSkeletonInstance ThisClass;

public:

	class NetworkVar_m_skeletonInstance : public CSkeletonInstance {
	public:

		NetworkVar_m_skeletonInstance(NetworkVar_m_skeletonInstance &);
		NetworkVar_m_skeletonInstance(const NetworkVar_m_skeletonInstance &);
		NetworkVar_m_skeletonInstance();
		virtual void NetworkStateChanged();
		virtual void NetworkStateChangedLog(const char *, const char *);
		virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
		virtual ~NetworkVar_m_skeletonInstance();

		// vtable[23] NetworkStateChanged
		// vtable[25] NetworkStateChangedLog
		// vtable[24] NetworkStateChanged
		// sizeof = 784
	};

private:

	static EntComponentInfo_t s_EntComponentInfo;
	static int entity_component_error_class_decl_says_contained_but_impl_is_referenced;

	static datamap_t m_DataMap;
	typedef ThisClass ThisClass_m_skeletonInstance;
	typedef CBodyComponent BaseClass;
	~CBodyComponentSkeletonInstance();
	CBodyComponentSkeletonInstance(CBodyComponentSkeletonInstance &);
	CBodyComponentSkeletonInstance(const CBodyComponentSkeletonInstance &);
	CBodyComponentSkeletonInstance();
	int GetOffset_m_skeletonInstance();
	CEntityComponentHelper * GetBaseComponentHelper();

protected:

	EntComponentInfo_t & GetEntComponentInfo();
	int GetRuntimeComponentIndex();
	bool EntIsContained();
	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	void NetworkStateChangedLog(const char *, const char *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[3] Schema_DynamicBinding
	// vtable[4] HackToMakeAVTable
	// vtable[5] GetDataDescMap
	// sizeof = 896
};
