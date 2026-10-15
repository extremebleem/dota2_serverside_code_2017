// Reconstructed from DWARF by pahole; not original source.

// src/game/server/rope.h:17
class CRopeKeyframe : public CBaseModelEntity, public IPositionWatcher {
	class NetworkVar_m_RopeFlags {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_Slack {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_Width {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_TextureScale {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nSegments {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bConstrainBetweenEndpoints {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iRopeMaterialModelIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_Subdiv {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nChangeCount {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_RopeLength {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_fLockedPoints {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flScrollSpeed {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hStartPoint {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hEndPoint {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iStartAttachment {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iEndAttachment {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	string_t m_iNextLinkName;  // +0x490

	string_t m_strRopeMaterialModel;  // +0x4a8
	bool m_bCreatedFromMapFile;  // +0x4bd

	bool m_bStartPointValid;  // +0x4c4
	bool m_bEndPointValid;  // +0x4c5

	typedef CBaseModelEntity BaseClass;
	typedef CRopeKeyframe ThisClass;

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
	CRopeKeyframe(CRopeKeyframe &);
	CRopeKeyframe(CRopeKeyframe &);
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
	CRopeKeyframe();
	virtual void UpdateOnRemove();
	CRopeKeyframe * Create(CBaseEntity *, CBaseEntity *, int, int, int, const char *, int, const char *);
	CRopeKeyframe * CreateWithSecondPointDetached(CBaseEntity *, int, int, int, const char *, int, bool, const char *);
	bool SetupHangDistance(float);
	void ActivateStartDirectionConstraints(bool);
	void ActivateEndDirectionConstraints(bool);
	void ShakeRopes(const Vector &, float, float);
	void PrecacheShakeRopes();

protected:

	virtual int ObjectCaps();
	virtual void Activate(ActivateType_t);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual int OnTakeDamage(const CTakeDamageInfo &);
	void PropagateForce(CBaseEntity *, CBaseEntity *, CBaseEntity *, float, float, float);
	void RecalculateLength();
	void DieAtNextRest();
	virtual int UpdateTransmitState();
	virtual void SetTransmit(CCheckTransmitInfo *, bool);
	void InputSetScrollSpeed(inputdata_t &);
	void InputSetForce(inputdata_t &);
	void InputBreak(inputdata_t &);
	bool Break();
	void DetachPoint(int);
	void EndpointsChanged();
	void EnableCollision();
	void EnableWind(bool);
	CBaseEntity * GetStartPoint();
	int GetStartAttachment();
	CBaseEntity * GetEndPoint();
	int GetEndAttachment();
	void SetStartPoint(CBaseEntity *, int);
	void SetEndPoint(CBaseEntity *, int);
	void EnablePlayerWeaponAttach(bool);
	virtual void NotifyPositionChanged(CBaseEntity *);

private:

	void SetMaterial(const char *);

protected:

	void SetAttachmentPoint(CBaseHandle &, short int &, CBaseEntity *, int);
	virtual void Init();

private:

	bool GetEndPointPos2(CBaseEntity *, int, Vector &);
	bool GetEndPointPos(int, Vector &);
	void UpdateBBox(bool);
	virtual ~CRopeKeyframe();
	/* tag__fprintf: const_type tag not supported! */;
	CBodyComponent * GetComponent<CBodyComponent>(CBodyComponent *);
	CBodyComponent * GetComponent<CBodyComponent>();

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[11] UpdateOnRemove
	// vtable[19] ObjectCaps
	// vtable[10] Activate
	// vtable[6] Precache
	// vtable[8] Spawn
	// vtable[90] OnTakeDamage
	// vtable[64] UpdateTransmitState
	// vtable[66] SetTransmit
	// vtable[214] NotifyPositionChanged
	// vtable[215] Init
	// sizeof = 1240
};
