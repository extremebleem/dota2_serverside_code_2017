// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/playernet_vars.h:32
struct fogparams_t {
	class NetworkVar_dirPrimary {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_colorPrimary {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_colorSecondary {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_colorPrimaryLerpTo {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_colorSecondaryLerpTo {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_start {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_end {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_farz {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_maxdensity {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_exponent {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_HDRColorScale {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_skyboxFogFactor {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_skyboxFogFactorLerpTo {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_startLerpTo {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_endLerpTo {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_maxdensityLerpTo {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_lerptime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_duration {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_enable {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_blend {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bNoReflectionFog {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.fogparams_t;  // +0x0
private:

	bool m_bPadding;  // +0x5b
	typedef fogparams_t ThisClass;
	~fogparams_t();
	fogparams_t(fogparams_t &);
	fogparams_t(const fogparams_t &);
	fogparams_t & operator=(fogparams_t &);
	fogparams_t & operator=(const fogparams_t &);

	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	fogparams_t();
	bool operator!=(const fogparams_t &);
	SceneFogParams_t * CastToSceneVersion();

	// vtable[0] NetworkStateChanged
	// vtable[1] NetworkStateChanged
	// vtable[2] NetworkStateChangedLog
	// sizeof = 96
};

// src/game/shared/playernet_vars.h:32
struct fogparams_t {
	class NetworkVar_dirPrimary {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_colorPrimary {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_colorSecondary {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_colorPrimaryLerpTo {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_colorSecondaryLerpTo {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_start {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_end {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_farz {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_maxdensity {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_exponent {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_HDRColorScale {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_skyboxFogFactor {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_skyboxFogFactorLerpTo {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_startLerpTo {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_endLerpTo {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_maxdensityLerpTo {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_lerptime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_duration {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_enable {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_blend {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bNoReflectionFog {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.fogparams_t;  // +0x0
private:

	bool m_bPadding;  // +0x5b
	~fogparams_t();
	fogparams_t(fogparams_t &);
	fogparams_t(const fogparams_t &);
	fogparams_t & operator=(fogparams_t &);
	fogparams_t & operator=(const fogparams_t &);

	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	fogparams_t();
	bool operator!=(const fogparams_t &);
	SceneFogParams_t * CastToSceneVersion();

	// vtable[0] NetworkStateChanged
	// vtable[1] NetworkStateChanged
	// vtable[2] NetworkStateChangedLog
	// sizeof = 96
};

// src/game/shared/playernet_vars.h:139
struct fogplayerparams_t {
	class NetworkVar_m_hCtrl {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.fogplayerparams_t;  // +0x0
private:

	static datamap_t m_DataMap;

	float m_flTransitionTime;  // +0xc
	float m_flOldStart;  // +0x14
	float m_flOldEnd;  // +0x18
	float m_flOldMaxDensity;  // +0x1c
	float m_flOldHDRColorScale;  // +0x20
	float m_flOldFarZ;  // +0x24
	float m_flNewStart;  // +0x2c
	float m_flNewEnd;  // +0x30
	float m_flNewMaxDensity;  // +0x34
	float m_flNewHDRColorScale;  // +0x38
	float m_flNewFarZ;  // +0x3c
	typedef fogplayerparams_t ThisClass;
	~fogplayerparams_t();
	fogplayerparams_t(fogplayerparams_t &);
	fogplayerparams_t(const fogplayerparams_t &);
	fogplayerparams_t & operator=(fogplayerparams_t &);
	fogplayerparams_t & operator=(const fogplayerparams_t &);

	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	fogplayerparams_t();

	// vtable[0] Schema_DynamicBinding
	// vtable[1] NetworkStateChanged
	// vtable[2] NetworkStateChanged
	// vtable[3] NetworkStateChangedLog
	// sizeof = 64
};

// src/game/shared/playernet_vars.h:139
struct fogplayerparams_t {
	class NetworkVar_m_hCtrl {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.fogplayerparams_t;  // +0x0
private:

	static datamap_t m_DataMap;

	float m_flTransitionTime;  // +0xc
	float m_flOldStart;  // +0x14
	float m_flOldEnd;  // +0x18
	float m_flOldMaxDensity;  // +0x1c
	float m_flOldHDRColorScale;  // +0x20
	float m_flOldFarZ;  // +0x24
	float m_flNewStart;  // +0x2c
	float m_flNewEnd;  // +0x30
	float m_flNewMaxDensity;  // +0x34
	float m_flNewHDRColorScale;  // +0x38
	float m_flNewFarZ;  // +0x3c
	fogplayerparams_t(fogplayerparams_t &);
	fogplayerparams_t(const fogplayerparams_t &);
	fogplayerparams_t & operator=(fogplayerparams_t &);
	fogplayerparams_t & operator=(const fogplayerparams_t &);

	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	fogplayerparams_t();

	// vtable[0] Schema_DynamicBinding
	// vtable[1] NetworkStateChanged
	// vtable[2] NetworkStateChanged
	// vtable[3] NetworkStateChangedLog
	// sizeof = 64
};

// src/game/shared/playernet_vars.h:139
struct fogplayerparams_t {
	class NetworkVar_m_hCtrl {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.fogplayerparams_t;  // +0x0
private:

	static datamap_t m_DataMap;

	float m_flTransitionTime;  // +0xc
	float m_flOldStart;  // +0x14
	float m_flOldEnd;  // +0x18
	float m_flOldMaxDensity;  // +0x1c
	float m_flOldHDRColorScale;  // +0x20
	float m_flOldFarZ;  // +0x24
	float m_flNewStart;  // +0x2c
	float m_flNewEnd;  // +0x30
	float m_flNewMaxDensity;  // +0x34
	float m_flNewHDRColorScale;  // +0x38
	float m_flNewFarZ;  // +0x3c
	typedef fogplayerparams_t ThisClass;
	fogplayerparams_t(fogplayerparams_t &);
	fogplayerparams_t(const fogplayerparams_t &);
	fogplayerparams_t & operator=(fogplayerparams_t &);
	fogplayerparams_t & operator=(const fogplayerparams_t &);

	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	fogplayerparams_t();

	// vtable[0] Schema_DynamicBinding
	// vtable[1] NetworkStateChanged
	// vtable[2] NetworkStateChanged
	// vtable[3] NetworkStateChangedLog
	// sizeof = 64
};

// src/game/shared/playernet_vars.h:187
struct sky3dparams_t {
	class NetworkVar_scale {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_origin {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_area {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_bClip3DSkyBoxNearToWorldFar {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_flClip3DSkyBoxNearToWorldFarOffset {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.sky3dparams_t;  // +0x0
private:

	static datamap_t m_DataMap;

	class NetworkVar_fog : public fogparams_t {
	public:

		NetworkVar_fog & operator=(NetworkVar_fog &);
		NetworkVar_fog & operator=(const NetworkVar_fog &);
		~NetworkVar_fog();
		NetworkVar_fog(NetworkVar_fog &);
		NetworkVar_fog(const NetworkVar_fog &);
		NetworkVar_fog();
		void CopyFrom(const fogparams_t &);
		virtual void NetworkStateChanged();
		virtual void NetworkStateChangedLog(const char *, const char *);
		virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);

		// vtable[0] NetworkStateChanged
		// vtable[2] NetworkStateChangedLog
		// vtable[1] NetworkStateChanged
		// sizeof = 96
	};
	typedef sky3dparams_t ThisClass;
	typedef ThisClass ThisClass_fog;
	~sky3dparams_t();
	sky3dparams_t(sky3dparams_t &);
	sky3dparams_t(const sky3dparams_t &);
	sky3dparams_t & operator=(sky3dparams_t &);
	sky3dparams_t & operator=(const sky3dparams_t &);
	sky3dparams_t();

	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	int GetOffset_fog();
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[1] NetworkStateChanged
	// vtable[2] NetworkStateChanged
	// vtable[3] NetworkStateChangedLog
	// sizeof = 128
};

// src/game/shared/playernet_vars.h:187
struct sky3dparams_t {
	class NetworkVar_scale {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_origin {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_area {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_bClip3DSkyBoxNearToWorldFar {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_flClip3DSkyBoxNearToWorldFarOffset {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.sky3dparams_t;  // +0x0
private:

	static datamap_t m_DataMap;

	class NetworkVar_fog : public fogparams_t {
	public:

		NetworkVar_fog & operator=(NetworkVar_fog &);
		NetworkVar_fog & operator=(const NetworkVar_fog &);
		~NetworkVar_fog();
		NetworkVar_fog(NetworkVar_fog &);
		NetworkVar_fog(const NetworkVar_fog &);
		NetworkVar_fog();
		void CopyFrom(const fogparams_t &);
		virtual void NetworkStateChanged();
		virtual void NetworkStateChangedLog(const char *, const char *);
		virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);

		// vtable[0] NetworkStateChanged
		// vtable[2] NetworkStateChangedLog
		// vtable[1] NetworkStateChanged
		// sizeof = 96
	};
	typedef sky3dparams_t ThisClass;
	typedef ThisClass ThisClass_fog;
	sky3dparams_t(sky3dparams_t &);
	sky3dparams_t(const sky3dparams_t &);
	sky3dparams_t & operator=(sky3dparams_t &);
	sky3dparams_t & operator=(const sky3dparams_t &);
	sky3dparams_t();

	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	int GetOffset_fog();
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[1] NetworkStateChanged
	// vtable[2] NetworkStateChanged
	// vtable[3] NetworkStateChangedLog
	// sizeof = 128
};

// src/game/shared/playernet_vars.h:211
struct audioparams_t {
	class NetworkVar_localSound {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_soundscapeIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_localBits {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_soundscapeEntityListIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.audioparams_t;  // +0x0
private:

	static datamap_t m_DataMap;

	typedef audioparams_t ThisClass;
	~audioparams_t();
	audioparams_t(audioparams_t &);
	audioparams_t(const audioparams_t &);
	audioparams_t & operator=(audioparams_t &);
	audioparams_t & operator=(const audioparams_t &);
	audioparams_t();

	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] NetworkStateChanged
	// vtable[2] NetworkStateChanged
	// vtable[3] NetworkStateChangedLog
	// sizeof = 120
};

// src/game/shared/playernet_vars.h:211
struct audioparams_t {
	class NetworkVar_localSound {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_soundscapeIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_localBits {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_soundscapeEntityListIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.audioparams_t;  // +0x0
private:

	static datamap_t m_DataMap;

	typedef audioparams_t ThisClass;
	audioparams_t(audioparams_t &);
	audioparams_t(const audioparams_t &);
	audioparams_t & operator=(audioparams_t &);
	audioparams_t & operator=(const audioparams_t &);
	audioparams_t();

	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] NetworkStateChanged
	// vtable[2] NetworkStateChanged
	// vtable[3] NetworkStateChangedLog
	// sizeof = 120
};

// src/game/shared/playernet_vars.h:233
struct TonemapParameters_t {
	class NetworkVar_m_flAutoExposureMin {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flAutoExposureMax {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flTonemapPercentTarget {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flTonemapPercentBrightPixels {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flTonemapMinAvgLum {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flRate {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flAccelerateExposureDown {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.TonemapParameters_t;  // +0x0
private:

	typedef TonemapParameters_t ThisClass;
	~TonemapParameters_t();
	TonemapParameters_t(TonemapParameters_t &);
	TonemapParameters_t(const TonemapParameters_t &);

	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	TonemapParameters_t();
	SceneTonemapParameters_t * CastToSceneVersion();
	TonemapParameters_t & operator=(const TonemapParameters_t &);

	// vtable[0] NetworkStateChanged
	// vtable[1] NetworkStateChanged
	// vtable[2] NetworkStateChangedLog
	// sizeof = 40
};
