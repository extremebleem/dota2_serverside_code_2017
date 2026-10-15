// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/decalgamesystem.h:18
class PlaceDecalEvent_t : public CNetMessagePB<201, CMsgPlaceDecalEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true> {
public:

	PlaceDecalEvent_t(PlaceDecalEvent_t &);
	PlaceDecalEvent_t(const PlaceDecalEvent_t &);
	PlaceDecalEvent_t();
	virtual ~PlaceDecalEvent_t();
	PlaceDecalEvent_t & operator=(const PlaceDecalEvent_t &);

	// sizeof = 88
};

// src/game/shared/decalgamesystem.h:38
class CDecalInfo {
private:

	static datamap_t m_DataMap;

	float m_flSpecExp;  // +0x0
	float m_flAnimationScale;  // +0x4
	float m_flAnimationLifeSpan;  // +0x8
	float m_flPlaceTime;  // +0xc
	float m_flFadeStartTime;  // +0x10
	float m_flFadeDuration;  // +0x14
	int m_nVBSlot;  // +0x18
	int m_nBoneIndex;  // +0x1c
	HProjectedDecal m_hProjectedDecal;  // +0x20
protected:

private:

	int m_nDecalMaterialIndex;  // +0x90

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	CDecalInfo();
	CDecalInfo(const PlaceDecalEvent_t &);
	~CDecalInfo();
	int GetDecalMaterialIndex();
	bool IsFromAdjacentLevel();
	CDecalInfo & operator=(const CDecalInfo &);

	// sizeof = 152
};

// src/game/shared/decalgamesystem.h:103
class CDecalMaterialParams {
	float m_flMappingWidth;  // +0x0
	float m_flMappingHeight;  // +0x4
	float m_flMappingDepth;  // +0x8
	float m_flDecalScale;  // +0xc
	float m_flDecalScaleVariation;  // +0x10
	float m_flDecalStartFadeTime;  // +0x14
	float m_flDecalFadeDuration;  // +0x18
	float m_flSpecExp;  // +0x1c
	float m_flAnimationScale;  // +0x20
	float m_flAnimationLifeSpan;  // +0x24
	CDecalMaterialParams();
	void ComputeDecalSize(float &, float &, float &);

	// sizeof = 40
};

// src/game/shared/decalgamesystem.h:122
struct NameToDecalMaterialParamsMapping_t {
	int m_nMaterialParamIndex;  // +0x4
	NameToDecalMaterialParamsMapping_t();

	// sizeof = 8
};

// src/game/shared/decalgamesystem.h:131
struct SkeletonInstanceDecalList_t {
	uint32 m_nSkeletonInstanceHash;  // +0x4

	SkeletonInstanceDecalList_t();
	SkeletonInstanceDecalList_t(const SkeletonInstanceDecalList_t &);

	// sizeof = 32
};

// src/game/shared/decalgamesystem.h:157
struct VertexUpdateContext_t {
	// sizeof = 24
};

// src/game/shared/decalgamesystem.h:165
class CDecalGameSystem : public CAutoGameSystem, public CUtlSlot {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

	class CCommandMemberInitializer_OnToggleVisualizer {
	private:

		CCommandMemberInitializer_OnToggleVisualizer();
		~CCommandMemberInitializer_OnToggleVisualizer();

		// sizeof = 152
	};

	class CCommandMemberInitializer_OnShootDecal {
	private:

		CCommandMemberInitializer_OnShootDecal();
		~CCommandMemberInitializer_OnShootDecal();

		// sizeof = 152
	};

	class CCommandMemberInitializer_OnClearEntityDecals {
	private:

		CCommandMemberInitializer_OnClearEntityDecals();
		~CCommandMemberInitializer_OnClearEntityDecals();

		// sizeof = 152
	};

	class CCommandMemberInitializer_OnClearWorldDecals {
	private:

		CCommandMemberInitializer_OnClearWorldDecals();
		~CCommandMemberInitializer_OnClearWorldDecals();

		// sizeof = 152
	};

	class CCommandMemberInitializer_OnClearAllEntityDecals {
	private:

		CCommandMemberInitializer_OnClearAllEntityDecals();
		~CCommandMemberInitializer_OnClearAllEntityDecals();

		// sizeof = 152
	};

	class CCommandMemberInitializer_OnPrintDecalInfo {
	private:

		CCommandMemberInitializer_OnPrintDecalInfo();
		~CCommandMemberInitializer_OnPrintDecalInfo();

		// sizeof = 152
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	CUtlHash<NameToDecalMaterialParamsMapping_t, bool (*)(const NameToDecalMaterialParamsMapping_t&, const NameToDecalMaterialParamsMapping_t&), unsigned int (*)(const NameToDecalMaterialParamsMapping_t&)> m_nameToParamMapping;  // +0x3f8

	CUtlHash<SkeletonInstanceDecalList_t, bool (*)(const SkeletonInstanceDecalList_t&, const SkeletonInstanceDecalList_t&), unsigned int (*)(const SkeletonInstanceDecalList_t&)> m_rigidEntityDecals;  // +0x440

	CUtlHash<SkeletonInstanceDecalList_t, bool (*)(const SkeletonInstanceDecalList_t&, const SkeletonInstanceDecalList_t&), unsigned int (*)(const SkeletonInstanceDecalList_t&)> m_skinnedEntityDecals;  // +0x470

	int m_nNextSlotToSearch[3];  // +0x4e8

	IndexBufferHandle_t m_hDecalIB;  // +0x510
	bool m_bS1ToS2MappingsLoaded;  // +0x558
	typedef CAutoGameSystem BaseClass;
	CDecalGameSystem(const CDecalGameSystem &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDecalGameSystem *);
	CDecalGameSystem();
	virtual ~CDecalGameSystem();
	virtual void GameInit(const EventGameInit_t &);
	virtual void GameActivate(const EventGameActivate_t &);
	virtual void GameDeactivate(const EventGameDeactivate_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	void DecalShoot(int, uint32, const Vector &, const Vector &, const Color &, const Vector *, CSkeletonInstance *, int);
	void DecalShoot(const CUtlStringToken &, uint32, const Vector &, const Vector &, const Color &, const Vector *, CSkeletonInstance *, int);
	void ClearDecalsForSkeletonInstance(CSkeletonInstance *, uint32);
	void ClearWorldDecals(uint32);
	void ClearEntityDecals(uint32);
	void CreateSource1ToSource2Mapping(const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &, const CUtlVector<int, CUtlMemory<int, int> > &);
	bool OnPlaceDecalEvent(const PlaceDecalEvent_t &);
	bool OnClearDecalsForSkeletonInstanceEvent(const ClearDecalsForSkeletonInstanceEvent_t &);
	bool OnClearWorldDecalsEvent(const ClearWorldDecalsEvent_t &);
	bool OnClearEntityDecalsEvent(const ClearEntityDecalsEvent_t &);
	virtual void FrameBoundary(const EventGameFrameBoundary_t &);

private:

	void GetAllDecals(CUtlVector<const CDecalInfo*, CUtlMemory<const CDecalInfo*, int> > &);
	void PlaceDecal(const PlaceDecalEvent_t &, float);
	SkeletonInstanceDecalList_t * FindSkeletonInstanceDecalList(CEntityHandle, uint32, CUtlHash<SkeletonInstanceDecalList_t, bool (*)(const SkeletonInstanceDecalList_t&, const SkeletonInstanceDecalList_t&), u);
	SkeletonInstanceDecalList_t & FindOrCreateSkeletonInstanceDecalList(CEntityHandle, uint32, CUtlHash<SkeletonInstanceDecalList_t, bool (*)(const SkeletonInstanceDecalList_t&, const SkeletonInstanceDecalList_t&), u);
	void LoadDecalMaterialParamsFromSheet(HRenderTexture);
	void UpdateSheetDataForSceneObjects();
	void AddDecalMaterialParams(const char *, float, float, float, float, float, float, float, float, float, float);
	int LookupDecalMaterialIndex(const CUtlStringToken &);
	DecalVBType_t GetVBTypeForDecal(bool, CEntityHandle);
	CDecalInfo * AddDecalAndAssignToSlot(const PlaceDecalEvent_t &, float);
	void DeleteDecalAndFreeSlot(CDecalInfo *);
	void AddWorldDecal(const PlaceDecalEvent_t &, float);
	void AddRigidEntityDecal(const PlaceDecalEvent_t &, float);
	void AddSkinnedEntityDecal(const PlaceDecalEvent_t &, float);
	bool OptionallyRetireDecal(CDecalInfo *, float, float &);
	void AddDecalToBuffer(CDecalInfo *, VertexUpdateContext_t *, const matrix3x4a_t *, float, float);
	CSkeletonInstance * GetSkeletonInstance(CEntityHandle, uint32);
	void UpdateWorldDecals(float, VertexUpdateContext_t *);
	void UpdateRigidEntityDecals(float, VertexUpdateContext_t *);
	void UpdateSkinnedEntityDecals(float, VertexUpdateContext_t *);
	void FillVertexDataForDecal(DecalVertex_t *, CDecalInfo *, const matrix3x4a_t *, float, float);
	void CreateVertexData(int);
	void DestroyVertexData();
	void EnsureDecalCount(int);
	void FreeDecal(CDecalInfo *);
	void FreeWorldDecal(CDecalInfo *);
	void FreeRigidEntityDecal(CDecalInfo *);
	void FreeSkinnedEntityDecal(CDecalInfo *);
	void AssignToFreeVBSlot(CDecalInfo *, DecalVBType_t);
	void DestroyDecalList(CUtlIntrusiveDListWithTailPtr<CDecalInfo, CThreadNullMutex> &, uint32);
	void DestroyWorldDecals(uint32);
	void DestroyRigidEntityDecals(uint32);
	void DestroySkinnedEntityDecals(uint32);
	void DestroyDecalsForSkeletonInstance(CEntityHandle, uint32, uint32);
	void EnableVisualizer(bool);
	void EnsureS1toS2Mappings();
	void OnToggleVisualizer(const CCommandContext &, const CCommand &);
	void OnShootDecal(const CCommandContext &, const CCommand &);
	void OnClearEntityDecals(const CCommandContext &, const CCommand &);
	void OnClearWorldDecals(const CCommandContext &, const CCommand &);
	void OnClearAllEntityDecals(const CCommandContext &, const CCommand &);
	void OnPrintDecalInfo(const CCommandContext &, const CCommand &);
	void RenderDebugDecal(CDecalInfo *, float, ISceneViewDebugOverlays *, const matrix3x4a_t *);
	void RenderDebuggingData(ISceneViewDebugOverlays *);
	bool TraceDebugRay(const CCommandContext &, CGameTrace *);

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// vtable[8] GameActivate
	// vtable[11] GameDeactivate
	// vtable[4] GameShutdown
	// vtable[29] FrameBoundary
	// sizeof = 1376
};

// src/game/shared/decalgamesystem.h:300
class CDecalGameSystemDebugVisualizer : public IDebugVisualizer {
public:

private:

	CDecalGameSystemDebugVisualizer(const CDecalGameSystemDebugVisualizer &);
	CDecalGameSystemDebugVisualizer(CDecalGameSystem *);
	virtual ~CDecalGameSystemDebugVisualizer();
	virtual void SetOverlayStartTime(float, bool);
	virtual void DebugDraw(CFrustum *, ISceneView *, float, float);
	virtual void AgeList(float, float);

	// vtable[2] SetOverlayStartTime
	// vtable[3] DebugDraw
	// vtable[4] AgeList
	// sizeof = 24
};
