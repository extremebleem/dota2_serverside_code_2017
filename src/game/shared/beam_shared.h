// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/beam_shared.h:76
class CBeam : public CBaseModelEntity {
	class NetworkVar_m_flFrameRate {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flHDRColorScale {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nNumBeamEnts {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hBaseMaterial {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nHaloIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nBeamType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nBeamFlags {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hAttachEntity {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_nAttachIndex {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_fWidth {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_fEndWidth {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_fFadeLength {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_fHaloScale {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_fAmplitude {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_fStartFrame {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_fSpeed {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flFrame {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nClipStyle {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bTurnedOff {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_vecEndPos {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

protected:

	float m_flFireTime;  // +0x488
	float m_flDamage;  // +0x48c

private:

	EHANDLE m_hEndEntity;  // +0x518
	int m_nDissolveType;  // +0x51c
	typedef CBaseModelEntity BaseClass;
	typedef CBeam ThisClass;

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CBeam(CBeam &);
	CBeam(CBeam &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CBeam();

protected:

	void FirstSetup();
	virtual void PreFirstNetworkUpdate();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Activate(ActivateType_t);
	virtual void UpdateOnRemove();
	virtual int ObjectCaps();
	virtual void SetTransmit(CCheckTransmitInfo *, bool);
	virtual int UpdateTransmitState();
	virtual int ShouldTransmit(const CGameCheckTransmitInfo *);
	virtual int DrawDebugTextOverlays(uint64, int);
	void SetType(BeamType_t);
	void SetBeamFlags(int);
	void SetBeamFlag(int);
	void SetStartPos(const Vector &);
	void SetEndPos(const Vector &);
	void SetAbsStartPos(const Vector &);
	void SetAbsEndPos(const Vector &);
	const Vector & GetAbsStartPos();
	const Vector & GetAbsEndPos();
	void SetStartEntity(CBaseEntity *);
	void SetEndEntity(CBaseEntity *);
	void SetStartAttachment(int);
	void SetEndAttachment(int);
	void SetTexture(HMaterial);
	void SetHaloTexture(HMaterial);
	void SetHaloScale(float);
	void SetWidth(float);
	void SetEndWidth(float);
	void SetFadeLength(float);
	void SetNoise(float);
	void SetColor(int, int, int);
	void SetBrightness(int);
	void SetFrame(float);
	void SetScrollRate(int);
	void SetFireTime(float);
	void SetFrameRate(float);
	void TurnOn();
	void TurnOff();
	int GetType();
	int GetBeamFlags();
	CBaseEntity * GetStartEntityPtr();
	CEntityIndex GetStartEntity();
	CBaseEntity * GetEndEntityPtr();
	CEntityIndex GetEndEntity();
	int GetStartAttachment();
	int GetEndAttachment();
	virtual Vector WorldSpaceCenter();
	HMaterial GetTexture();
	float GetWidth();
	float GetEndWidth();
	float GetFadeLength();
	float GetNoise();
	int GetBrightness();
	float GetFrame();
	float GetScrollRate();
	float GetHDRColorScale();
	void SetHDRColorScale(float);
	void RelinkBeam();
	void DoSparks(const Vector &, const Vector &);
	CBaseEntity * RandomTargetname(const char *);
	void BeamDamage(trace_t *);
	void BeamInit(const char *, float);
	void PointsInit(const Vector &, const Vector &);
	void PointEntInit(const Vector &, CBaseEntity *);
	void EntsInit(CBaseEntity *, CBaseEntity *);
	void LaserInit(CBaseEntity *, CBaseEntity *);
	void HoseInit(const Vector &, const Vector &);
	void SplineInit(int, CBaseEntity * *, int *);
	CBeam * BeamCreate(const char *, float);
	void LiveForTime(float);
	void BeamDamageInstant(trace_t *, float);
	virtual const char * GetDecalName();
	BeamClipStyle_t GetClipStyle();

private:

	void InputNoise(inputdata_t &);
	void InputWidth(inputdata_t &);
	void InputColorRedValue(inputdata_t &);
	void InputColorBlueValue(inputdata_t &);
	void InputColorGreenValue(inputdata_t &);
	virtual ~CBeam();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[28] HackToMakeAVTable
	// vtable[34] GetDataDescMap
	// vtable[200] PreFirstNetworkUpdate
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[10] Activate
	// vtable[11] UpdateOnRemove
	// vtable[19] ObjectCaps
	// vtable[66] SetTransmit
	// vtable[64] UpdateTransmitState
	// vtable[65] ShouldTransmit
	// vtable[79] DrawDebugTextOverlays
	// vtable[62] WorldSpaceCenter
	// vtable[214] GetDecalName
	// sizeof = 1312
};
