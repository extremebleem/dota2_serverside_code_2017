// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/rendergamesystem.h:40
struct SceneObjectUpdaterHandle_t__ {
	int unused;  // +0x0

	// sizeof = 4
};

// src/game/shared/rendergamesystem.h:93
class CRender {
	struct ViewStack_t {
		bool m_bIs2DView;  // +0x590
		bool m_bNoDraw;  // +0x591
		ViewStack_t();
		~ViewStack_t();

		// sizeof = 1440
	};
	/* tag__fprintf: const_type tag not supported! */;

	int ()() * * _vptr.CRender;  // +0x0
private:

	CRender(CRender &);
	CRender(CRender &);
	~CRender();
	CRender();
	void ViewEnd();
	void ExtractMatrices();
	const VMatrix & ViewMatrix();
	const VMatrix & WorldToScreenMatrix();
	virtual bool ClipTransform(const Vector &, Vector *);
	virtual bool ScreenTransform(const Vector &, Vector *);
	virtual void Push3DView(const CViewSetup &, int, ITexture *, VPlane *);
	virtual void Push2DView(const CViewSetup &, int, ITexture *, VPlane *);
	virtual void PopView(VPlane *);
	void ClearView(CViewSetup &, int, ITexture *, ITexture *);
	const CViewSetup & CurrentView();
	CViewSetup & CurrentView();

	// vtable[0] ClipTransform
	// vtable[1] ScreenTransform
	// vtable[2] Push3DView
	// vtable[3] Push2DView
	// vtable[4] PopView
	// sizeof = 232
};

// src/game/shared/rendergamesystem.h:156
struct RenderAttrGatherInfo_t {
	uint32 nNameHash;  // +0x0
	uint16 dataType;  // +0x4
	uint16 nByteOffset;  // +0x6
	RenderAttrUpdaterFuncPtr_t pUpdaterFunc;  // +0x8
	RenderAttrGatherInfo_t();

	// sizeof = 16
};

// src/game/shared/rendergamesystem.h:171
class CRenderGameSystem : public IGameSystem, public CUtlSlot, public CUtlSignaller<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

	enum SceneObjectUpdaterType_t {
		SCENE_OBJECT_UPDATER_RIGID_BODY = 0,
		SCENE_OBJECT_UPDATER_SKELETON = 0x1,
		SCENE_OBJECT_UPDATER_RIGID_ANIMATED_SKELETON = 0x2,
		SCENE_OBJECT_UPDATER_CUSTOM = 0x3,
		SCENE_OBJECT_UPDATER_TYPE_COUNT = 0x4,
	};

	enum RenderableInfoFlags_t {
		RENDER_FLAGS_RENDER_WITH_VIEWMODELS = 0x1,
	};

	struct RigidBodyInfo_t {
		uint32 m_nMaterialGroupHash;  // +0x0

		MeshGroupMask_t m_nMeshGroupMask;  // +0x8

		// sizeof = 24
	};

	struct SkeletonInfo_t {
		uint32 m_nMaterialGroupHash;  // +0x8

		MeshGroupMask_t m_nMeshGroupMask;  // +0x10
		int m_nRigidSceneObjectBone;  // +0x18
		bool IsRigidAnimatedSceneObjectWithSkeleton();

		// sizeof = 32
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct SceneObjectUpdater_t {
		union {
			unsigned char m_delegate[24];  // +0x0
		};

		union {
			unsigned char m_delegate[24];  // +0x0
		};
		bool m_bIsRenderingEnabled:1;  // +0x4c:0
		bool m_bIsEntityRenderingEnabled:1;  // +0x4c:1
		uint16 m_Flags:2;  // +0x4c:2
		uint16 m_nSplitscreenFlags:4;  // +0x4c:4
		int16 m_nForceLOD:4;  // +0x4c:8
		SceneObjectUpdater_t();
		void SetDelegate(SceneObjectUpdateDelegate_t);
		SceneObjectUpdaterRetval_t InvokeDelegate(const EventClientPreOutput_t &, bool);

		// sizeof = 80
	};

	struct ReactivateUpdaterList_t {
		CInterlockedInt m_nCount;  // +0x0
		int m_nMaxCount;  // +0x4
		int m_nWorkType;  // +0x8

		ReactivateUpdaterList_t();
		void Init(SceneObjectUpdaterType_t, int, SceneObjectUpdater_t * *);
		void AddUpdaterToReactivate(SceneObjectUpdater_t *);

		// sizeof = 24
	};

	struct SecondarySceneWorld_t {
		int m_nRefCount;  // +0x8

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

protected:

	static IGameSystemFactory * sm_Factory;

	static bool s_bSuppressLatchSimulation;
private:

	int d_lightstylevalue[256];  // +0x390
	CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t, short unsigned int, bool (*)(const CUtlStringToken&, const CUtlStringToken&)> m_secondarySceneWorlds;  // +0x790
	uint16 m_nLastTickSceneSystemFrameCount;  // +0x7b8
	uint16 m_nLastFrameSceneSystemFrameCount;  // +0x7ba
	bool m_bIsSFMRecording;  // +0x7bc

	static CUtlVector<RenderAttrGatherInfo_t, CUtlMemory<RenderAttrGatherInfo_t, int> > ms_entityRenderAttrGatherTable;
	typedef IGameSystem BaseClass;
	CRenderGameSystem(CRenderGameSystem &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CRenderGameSystem *);
	CRenderGameSystem();
	virtual ~CRenderGameSystem();
	virtual void GameActivate(const EventGameActivate_t &);
	virtual void GameDeactivate(const EventGameDeactivate_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	virtual void PreSpawnGroupLoad(const EventPreSpawnGroupLoad_t &);
	virtual void PostSpawnGroupUnload(const EventPostSpawnGroupUnload_t &);
	SceneObjectUpdaterHandle_t InstallSceneObjectUpdater(CSkeletonInstance *, CSceneObject *, bool, bool, uint32, int16);
	SceneObjectUpdaterHandle_t InstallSceneObjectUpdater(CGameSceneNode *, CSceneObject *, bool, bool, float, CEntityInstance *, bool, uint32);
	SceneObjectUpdaterHandle_t InstallSceneObjectUpdater(SceneObjectUpdateDelegate_t, CSceneObject *, bool, bool, CEntityInstance *, bool, uint32);
	void RemoveSceneObjectUpdater(SceneObjectUpdaterHandle_t);
	void SetEntityRenderingEnabled(SceneObjectUpdaterHandle_t, bool);
	void SetRenderingEnabled(SceneObjectUpdaterHandle_t, bool);
	void MarkChanged(SceneObjectUpdaterHandle_t);
	intp MarkChanged(CRenderComponent *);
	void RemoveRenderComponentFromDirtyList(intp);
	CSceneObject * GetSceneObject(SceneObjectUpdaterHandle_t);
	CSceneAnimatableObject * GetSceneAnimatableObject(SceneObjectUpdaterHandle_t);
	void SetMaterialGroupHash(SceneObjectUpdaterHandle_t, uint32);
	void SetMeshGroupMask(SceneObjectUpdaterHandle_t, MeshGroupMask_t);
	void SetForceLOD(SceneObjectUpdaterHandle_t, int);
	ISceneWorld * GetSceneWorld(WorldGroupId_t);
	bool IsSceneObjectInSceneWorld(CSceneObject *, WorldGroupId_t);
	void RenderWithViewModels(SceneObjectUpdaterHandle_t, bool);
	void SetSceneObjectColorTint(SceneObjectUpdaterHandle_t, const Vector4D &);
	void SetSceneObjectLightGroup(SceneObjectUpdaterHandle_t, CUtlStringToken);
	bool IsRenderingWithViewModels(SceneObjectUpdaterHandle_t);
	bool IsRigidAnimatedSceneObjectWithSkeleton(SceneObjectUpdaterHandle_t);
	virtual void EnableSplitscreenRendering(SceneObjectUpdaterHandle_t, uint32);
	void GetMatricesForView(const CViewSetup &, VMatrix *, VMatrix *, VMatrix *, VMatrix *);
	virtual void Push3DView(const CViewSetup &, int, ITexture *, VPlane *);
	virtual void Push2DView(const CViewSetup &, int, ITexture *, VPlane *);
	virtual void PopView(VPlane *);
	virtual const VMatrix & ViewMatrix();
	void AnimateLight();
	void ResetLightStyles();
	bool DidSceneObjectRenderSinceLastTick(CSceneObject *);
	bool DidSceneObjectRenderLastFrame(CSceneObject *);
	void FreeSecondarySceneWorld(WorldGroupId_t);
	void BuildEntityRenderAttrGatherTable(const CSchemaClassBindingBase *, int *, int *);
	const RenderAttrGatherInfo_t * GetRenderAttrGatherTable(int);
	void StaticShutdown();
	bool SuppressLatchSimulationState(bool);
	bool IsSuppressingLatchSimulationState();
	bool IsSFMRecording();
	void UpdateTickSceneSystemFrameCount();
	void OnClientPreOutput(const EventClientPreOutput_t &);
	void OnClientPostOutput(const EventClientPostOutput_t &);
	void DumpSecondarySceneWorlds();

private:

	void OnSFMRecordingStateChanged(const ToolEvent_SFMRecordingStateChanged_t &);
	void InstallCommonUpdaterFields(SceneObjectUpdater_t &, CSceneObject *, CEntityInstance *, bool, bool, bool, uint32);
	SceneObjectUpdaterRetval_t UpdateCommonSceneObjectData(SceneObjectUpdater_t *);
	bool UpdateCommonVisibility(SceneObjectUpdater_t *);
	void StripInvisibleSceneObjects(int, SceneObjectUpdater_t * *, int &, SceneObjectUpdater_t * *);
	void UpdateRigidBodySceneObjects(float, int, SceneObjectUpdater_t * *, ReactivateUpdaterList_t *);
	void UpdateSkeletonSceneObjects(float, bool, int, SceneObjectUpdater_t * *, ReactivateUpdaterList_t *);
	void UpdateCustomSceneObjects(const EventClientPreOutput_t *, int, SceneObjectUpdater_t * *, ReactivateUpdaterList_t *);
	void UpdateLocalPlayerVisibility();
	void UpdateEntityRenderAttributes();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[8] GameActivate
	// vtable[11] GameDeactivate
	// vtable[4] GameShutdown
	// vtable[14] PreSpawnGroupLoad
	// vtable[17] PostSpawnGroupUnload
	// vtable[40] EnableSplitscreenRendering
	// vtable[41] Push3DView
	// vtable[42] Push2DView
	// vtable[43] PopView
	// vtable[44] ViewMatrix
	// sizeof = 1984
};
