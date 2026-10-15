// Reconstructed from DWARF by pahole; not original source.

// src/game/server/playerlocaldata.h:26
class CPlayerLocalData {
	class NetworkVar_m_chAreaBits {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_chAreaPortalBits {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_iHideHUD {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flFOVRate {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bDucked {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bDucking {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bInDuckJump {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nDuckTimeMsecs {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nDuckJumpTimeMsecs {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nJumpTimeMsecs {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flFallVelocity {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bDrawViewmodel {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bWearingSuit {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bPoisoned {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flStepSize {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bAllowAutoMovement {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bSlowMovement {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bAutoAimTarget {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.CPlayerLocalData;  // +0x0
private:

	static datamap_t m_DataMap;

	int m_nStepside;  // +0x50
	int m_nOldButtons;  // +0x54

	class NetworkVar_m_skybox3d {
		// sizeof = 0
	};

	class NetworkVar_m_audio {
		// sizeof = 0
	};

	typedef CPlayerLocalData ThisClass;
	CPlayerLocalData(CPlayerLocalData &);
	CPlayerLocalData(const CPlayerLocalData &);
	CPlayerLocalData & operator=(CPlayerLocalData &);
	CPlayerLocalData & operator=(const CPlayerLocalData &);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	CPlayerLocalData();
	void SetOuter(CBaseEntity *);
	void UpdateAreaBits(CBasePlayer *, unsigned char *);
	void SetPunchAngle(const QAngle &);
	void SetPunchAngleVelocity(const QAngle &);
	const QAngle & GetPunchAngle();
	const QAngle & GetPunchAngleVel();
	int GetOffset_m_skybox3d();
	int GetOffset_m_audio();

	// vtable[0] Schema_DynamicBinding
	// vtable[1] NetworkStateChanged
	// vtable[2] NetworkStateChanged
	// vtable[3] NetworkStateChangedLog
	// sizeof = 496
};

// src/game/server/playerlocaldata.h:26
class CPlayerLocalData {
	class NetworkVar_m_chAreaBits {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_chAreaPortalBits {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_iHideHUD {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flFOVRate {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bDucked {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bDucking {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bInDuckJump {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nDuckTimeMsecs {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nDuckJumpTimeMsecs {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nJumpTimeMsecs {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flFallVelocity {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bDrawViewmodel {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bWearingSuit {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bPoisoned {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flStepSize {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bAllowAutoMovement {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bSlowMovement {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bAutoAimTarget {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.CPlayerLocalData;  // +0x0
private:

	static datamap_t m_DataMap;

	int m_nStepside;  // +0x50
	int m_nOldButtons;  // +0x54

	class NetworkVar_m_skybox3d : public sky3dparams_t {
	public:

		~NetworkVar_m_skybox3d();
		NetworkVar_m_skybox3d(NetworkVar_m_skybox3d &);
		NetworkVar_m_skybox3d(const NetworkVar_m_skybox3d &);
		NetworkVar_m_skybox3d & operator=(NetworkVar_m_skybox3d &);
		NetworkVar_m_skybox3d & operator=(const NetworkVar_m_skybox3d &);
		NetworkVar_m_skybox3d();
		void CopyFrom(const sky3dparams_t &);
		virtual void NetworkStateChanged();
		virtual void NetworkStateChangedLog(const char *, const char *);
		virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
		NetworkVar_m_skybox3d & operator=<CSkyCamera::NetworkVar_m_skyboxData>(const NetworkVar_m_skyboxData &);

		// vtable[1] NetworkStateChanged
		// vtable[3] NetworkStateChangedLog
		// vtable[2] NetworkStateChanged
		// sizeof = 128
	};

	class NetworkVar_m_audio : public audioparams_t {
	public:

		~NetworkVar_m_audio();
		NetworkVar_m_audio(NetworkVar_m_audio &);
		NetworkVar_m_audio(const NetworkVar_m_audio &);
		NetworkVar_m_audio & operator=(NetworkVar_m_audio &);
		NetworkVar_m_audio & operator=(const NetworkVar_m_audio &);
		NetworkVar_m_audio();
		void CopyFrom(const audioparams_t &);
		virtual void NetworkStateChanged();
		virtual void NetworkStateChangedLog(const char *, const char *);
		virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);

		// vtable[1] NetworkStateChanged
		// vtable[3] NetworkStateChangedLog
		// vtable[2] NetworkStateChanged
		// sizeof = 120
	};

	typedef CPlayerLocalData ThisClass;
	typedef ThisClass ThisClass_m_skybox3d;
	typedef ThisClass ThisClass_m_audio;
	CPlayerLocalData(CPlayerLocalData &);
	CPlayerLocalData(const CPlayerLocalData &);
	CPlayerLocalData & operator=(CPlayerLocalData &);
	CPlayerLocalData & operator=(const CPlayerLocalData &);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	CPlayerLocalData();
	void SetOuter(CBaseEntity *);
	void UpdateAreaBits(CBasePlayer *, unsigned char *);
	void SetPunchAngle(const QAngle &);
	void SetPunchAngleVelocity(const QAngle &);
	const QAngle & GetPunchAngle();
	const QAngle & GetPunchAngleVel();
	int GetOffset_m_skybox3d();
	int GetOffset_m_audio();
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[1] NetworkStateChanged
	// vtable[2] NetworkStateChanged
	// vtable[3] NetworkStateChangedLog
	// sizeof = 496
};
