// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/glowproperty.h:29
class CGlowProperty {
	class NetworkVar_m_iGlowType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nGlowRange {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nGlowRangeMin {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_glowColorOverride {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bFlashing {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.CGlowProperty;  // +0x0
private:

	static datamap_t m_DataMap;

	int m_iGlowTeam;  // +0x14
	bool m_bGlowing;  // +0x41
	CGlowProperty(const CGlowProperty &);
	CGlowProperty & operator=(const CGlowProperty &);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	CGlowProperty();
	~CGlowProperty();
	void Init(CBaseModelEntity *);
	void Reset();
	void SetGlowState(int);
	void SetGlowRange(int);
	void SetGlowRangeMin(int);
	void SetGlowTeam(int);
	void SetGlowColorOverride(Color);
	int GetGlowState();
	int GetGlowRange();
	int GetGlowRangeMin();
	int GetGlowTeam();
	void GetGlowColorOverride(unsigned char *, unsigned char *, unsigned char *);
	void GetGlowColorOverrideNormalized(float *, float *, float *);
	void OnGlowColorChanged();
	void OnGlowTypeChanged();
	void StartGlowing();
	void StopGlowing();
	void MarkOwnerDirty();
	bool IsGlowing();
	void SetFlashing(bool);
	bool IsFlashing();
	CBaseModelEntity * GetOuter();
	const CBaseModelEntity * GetOuter();
	void AddToGlowList();
	void RemoveFromGlowList();

	// vtable[0] Schema_DynamicBinding
	// vtable[1] NetworkStateChanged
	// vtable[2] NetworkStateChanged
	// vtable[3] NetworkStateChangedLog
	// sizeof = 72
};

// src/game/shared/glowproperty.h:29
class CGlowProperty {
	class NetworkVar_m_iGlowType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nGlowRange {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nGlowRangeMin {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_glowColorOverride {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bFlashing {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.CGlowProperty;  // +0x0
private:

	static datamap_t m_DataMap;

	int m_iGlowTeam;  // +0x14
	bool m_bGlowing;  // +0x41
	typedef CGlowProperty ThisClass;
	CGlowProperty(const CGlowProperty &);
	CGlowProperty & operator=(const CGlowProperty &);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	CGlowProperty();
	~CGlowProperty();
	void Init(CBaseModelEntity *);
	void Reset();
	void SetGlowState(int);
	void SetGlowRange(int);
	void SetGlowRangeMin(int);
	void SetGlowTeam(int);
	void SetGlowColorOverride(Color);
	int GetGlowState();
	int GetGlowRange();
	int GetGlowRangeMin();
	int GetGlowTeam();
	void GetGlowColorOverride(unsigned char *, unsigned char *, unsigned char *);
	void GetGlowColorOverrideNormalized(float *, float *, float *);
	void OnGlowColorChanged();
	void OnGlowTypeChanged();
	void StartGlowing();
	void StopGlowing();
	void MarkOwnerDirty();
	bool IsGlowing();
	void SetFlashing(bool);
	bool IsFlashing();
	CBaseModelEntity * GetOuter();
	const CBaseModelEntity * GetOuter();
	void AddToGlowList();
	void RemoveFromGlowList();

	// vtable[0] Schema_DynamicBinding
	// vtable[1] NetworkStateChanged
	// vtable[2] NetworkStateChanged
	// vtable[3] NetworkStateChangedLog
	// sizeof = 72
};
