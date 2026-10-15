// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/env_wind_shared.h:144
class CEnvWindShared {
	class NetworkVar_m_flStartTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iWindSeed {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iMinWind {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iMaxWind {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_windRadius {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iMinGust {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iMaxGust {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flMinGustDelay {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flMaxGustDelay {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flGustDuration {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iGustDirChange {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_location {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iInitialWindDir {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flInitialWindSpeed {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	struct WindAveEvent_t {
	private:

		float m_flStartWindSpeed;  // +0x0
		float m_flAveWindSpeed;  // +0x4

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct WindVariationEvent_t {
	private:

		float m_flWindAngleVariation;  // +0x0
		float m_flWindSpeedVariation;  // +0x4

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

	int ()() * * _vptr.CEnvWindShared;  // +0x0
private:

	int m_iszGustSound;  // +0x38
	int m_iWindDir;  // +0x3c
	float m_flWindSpeed;  // +0x40

	COutputEvent m_OnGustStart;  // +0x70
	COutputEvent m_OnGustEnd;  // +0x88
	float m_flVariationTime;  // +0xa0
	float m_flSwayTime;  // +0xa4
	float m_flSimTime;  // +0xa8
	float m_flSwitchTime;  // +0xac
	float m_flAveWindSpeed;  // +0xb0
	bool m_bGusting;  // +0xb4

	float m_flWindAngleVariation;  // +0xb8
	float m_flWindSpeedVariation;  // +0xbc

	typedef CEnvWindShared ThisClass;

	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	CEnvWindShared();
	~CEnvWindShared();
	void Init(CEntityIndex, int, float, int, float);
	void InitDir(int);
	void SetLocation(const Vector &);
	float WindThink(float);
	void ComputeWindVariation(float);
	void UpdateWindSound(float);
	void UpdateTreeSway(float);
	CEnvWindShared(const CEnvWindShared &);
	CEnvWindShared & operator=(const CEnvWindShared &);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] NetworkStateChanged
	// vtable[2] NetworkStateChanged
	// vtable[3] NetworkStateChangedLog
	// sizeof = 624
};
