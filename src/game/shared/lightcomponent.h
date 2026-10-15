// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/lightcomponent.h:25
class CLightComponent : public CEntityComponent, public CUtlSlot {
	class NetworkVar_m_Color {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flBrightness {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flBrightnessMult {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flRange {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flFalloff {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flAttenuation0 {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flAttenuation1 {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flAttenuation2 {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flTheta {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flPhi {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_lightCookie {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nCascades {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bCastShadows {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nShadowWidth {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nShadowHeight {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bRenderDiffuse {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bRenderSpecular {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nStyle {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_Pattern {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flFadeMinDist {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flFadeMaxDist {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flShadowFadeMinDist {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flShadowFadeMaxDist {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bEnabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bFlicker {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

	int ()() * * _vptr.CLightComponent;  // +0x0

private:

	static EntComponentInfo_t s_EntComponentInfo;
	static int entity_component_error_class_decl_says_contained_but_impl_is_referenced;

	static datamap_t m_DataMap;

	PrtLightHandle_t m_hPrtLight;  // +0x68
	QueryLightHandle_t m_hQueryLight;  // +0x70
	SceneObjectUpdaterHandle_t m_hUpdater;  // +0x78

	typedef CLightComponent ThisClass;
	CLightComponent(const CLightComponent &);
	CEntityInstance * GetOwner();
	const CEntityInstance * GetOwner();
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
	CLightComponent();
	~CLightComponent();
	bool Activate(CEntityInstance *);
	void UpdateOnRemove(CEntityInstance *);
	void SetEnabled(bool);
	bool IsEnabled();
	void SetColor(Color);
	void SetBrightness(float);
	void SetBrightnessMultiplier(float);
	void SetFlicker(bool);
	CRenderComponent * GetRenderComponent();
	SceneObjectUpdaterRetval_t UpdateSceneObjects(const EventClientPreOutput_t &, bool);
	void OnLightStateChanged();

private:

	const matrix3x4a_t & GetRootTransform();
	void ComputeLightDesc(LightDesc_t &, const matrix3x4a_t &);
	void CreateLightObject(const LightDesc_t &);
	void UpdateLightObject(const LightDesc_t &);
	void DestroyLightObject();
	void UpdateQueryLight();

	// vtable[0] Schema_DynamicBinding
	// vtable[1] GetDataDescMap
	// sizeof = 232
};
