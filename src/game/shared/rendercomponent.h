// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/rendercomponent.h:30
struct EnableRenderingInfo_t {
	uint16 m_nSplitscreenFlags;  // +0x0
	bool m_bEnableRendering;  // +0x2
	bool operator==(const EnableRenderingInfo_t &);
	bool IsIdenticalWithinTolerance(const EnableRenderingInfo_t &);
	CUtlString GetDebugString();
	CUtlString GetDebugSpeedString(float, float, const EnableRenderingInfo_t *);

	// sizeof = 4
};

// src/game/shared/rendercomponent.h:83
class CRenderComponent : public CEntityComponent {
public:

private:

	static EntComponentInfo_t s_EntComponentInfo;
	static int entity_component_error_class_decl_says_contained_but_impl_is_referenced;

	bool m_bIsRenderingWithViewModels;  // +0x38

	uint32 m_nSplitscreenFlags;  // +0x3c
	intp m_changedRenderComponentListIdx;  // +0x40
protected:

	bool m_bEnableRendering;  // +0x48

	bool m_bInterpolationReadyToDraw;  // +0xa8
	bool m_bHasSchemaRenderAttributes;  // +0xa9
	CEntityComponentHelper * GetBaseComponentHelper();

	EntComponentInfo_t & GetEntComponentInfo();
	int GetRuntimeComponentIndex();
	bool EntIsContained();
	CEntityInstance * GetOwner();
	const CEntityInstance * GetOwner();
	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	void NetworkStateChangedLog(const char *, const char *);
	CRenderComponent();
	~CRenderComponent();
	bool Connect(CEntityInstance *);
	void Activate(CEntityInstance *);
	SceneObjectUpdaterHandle_t InstallSceneObjectUpdater(SceneObjectUpdateDelegate_t, CSceneObject *, bool);
	SceneObjectUpdaterHandle_t InstallSceneObjectUpdater(CSkeletonInstance *, CSceneObject *, int16);
	SceneObjectUpdaterHandle_t InstallSceneObjectUpdater(CGameSceneNode *, CSceneObject *, float, bool);
	void RemoveSceneObjectUpdater(SceneObjectUpdaterHandle_t);
	void SetRenderingEnabled(bool);
	bool IsRenderingEnabled();
	void SetInterpolationReadyToDraw(bool);
	bool IsInterpolationReadyToDraw();
	int GetSceneObjectCount();
	CSceneObject * GetSceneObject(int);
	SceneObjectUpdaterHandle_t GetSceneObjectUpdaterHandle(int);
	void MarkChanged();
	void RenderWithViewModels(bool);
	void EnableSplitscreenRendering(uint32);
	uint32 GetSplitscreenRenderingEnableFlags();
	void SetColorTint(const Vector4D &);
	void SetLightGroup(CUtlStringToken);
	bool IsRenderingWithViewModels();
	void UpdateEntityRenderAttrs();
	bool HasSchemaRenderAttributes();
	CBaseEntity * GetOwnerEntity();

private:

	void LatchRenderingEnabled();
	void ReadEnableRendering(EnableRenderingInfo_t *, int, const IInterpolatedVar *);
	void WriteEnableRendering(const EnableRenderingInfo_t *, int, const IInterpolatedVar *, IVWriteOpType_t);
	void LerpEnableRenderingInfo(EnableRenderingInfo_t &, float, const EnableRenderingInfo_t &, const EnableRenderingInfo_t &);
	void LerpHermiteEnableRenderingInfo(EnableRenderingInfo_t &, const EnableRenderingInfo_t &, float, const EnableRenderingInfo_t &, const EnableRenderingInfo_t &, const EnableRenderingInfo_t &);

	// sizeof = 176
};

// src/game/shared/rendercomponent.h:83
class CRenderComponent : public CEntityComponent {
	enum {
		ENT_IS_CONTAINED = 0,
	};

public:

private:

	static EntComponentInfo_t s_EntComponentInfo;
	static int entity_component_error_class_decl_says_contained_but_impl_is_referenced;

	bool m_bIsRenderingWithViewModels;  // +0x38

	uint32 m_nSplitscreenFlags;  // +0x3c
	intp m_changedRenderComponentListIdx;  // +0x40
protected:

	bool m_bEnableRendering;  // +0x48

	bool m_bInterpolationReadyToDraw;  // +0xa8
	bool m_bHasSchemaRenderAttributes;  // +0xa9
	typedef CRenderComponent * Storage_t;
	CEntityComponentHelper * GetBaseComponentHelper();

	EntComponentInfo_t & GetEntComponentInfo();
	int GetRuntimeComponentIndex();
	bool EntIsContained();
	CEntityInstance * GetOwner();
	const CEntityInstance * GetOwner();
	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	void NetworkStateChangedLog(const char *, const char *);
	CRenderComponent();
	~CRenderComponent();
	bool Connect(CEntityInstance *);
	void Activate(CEntityInstance *);
	SceneObjectUpdaterHandle_t InstallSceneObjectUpdater(SceneObjectUpdateDelegate_t, CSceneObject *, bool);
	SceneObjectUpdaterHandle_t InstallSceneObjectUpdater(CSkeletonInstance *, CSceneObject *, int16);
	SceneObjectUpdaterHandle_t InstallSceneObjectUpdater(CGameSceneNode *, CSceneObject *, float, bool);
	void RemoveSceneObjectUpdater(SceneObjectUpdaterHandle_t);
	void SetRenderingEnabled(bool);
	bool IsRenderingEnabled();
	void SetInterpolationReadyToDraw(bool);
	bool IsInterpolationReadyToDraw();
	int GetSceneObjectCount();
	CSceneObject * GetSceneObject(int);
	SceneObjectUpdaterHandle_t GetSceneObjectUpdaterHandle(int);
	void MarkChanged();
	void RenderWithViewModels(bool);
	void EnableSplitscreenRendering(uint32);
	uint32 GetSplitscreenRenderingEnableFlags();
	void SetColorTint(const Vector4D &);
	void SetLightGroup(CUtlStringToken);
	bool IsRenderingWithViewModels();
	void UpdateEntityRenderAttrs();
	bool HasSchemaRenderAttributes();
	CBaseEntity * GetOwnerEntity();

private:

	void LatchRenderingEnabled();
	void ReadEnableRendering(EnableRenderingInfo_t *, int, const IInterpolatedVar *);
	void WriteEnableRendering(const EnableRenderingInfo_t *, int, const IInterpolatedVar *, IVWriteOpType_t);
	void LerpEnableRenderingInfo(EnableRenderingInfo_t &, float, const EnableRenderingInfo_t &, const EnableRenderingInfo_t &);
	void LerpHermiteEnableRenderingInfo(EnableRenderingInfo_t &, const EnableRenderingInfo_t &, float, const EnableRenderingInfo_t &, const EnableRenderingInfo_t &, const EnableRenderingInfo_t &);

	// sizeof = 176
};
