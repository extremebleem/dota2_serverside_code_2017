// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/func_ladder.h:19
class CInfoLadderDismount : public CBaseEntity {
public:

private:

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
	CInfoLadderDismount(CInfoLadderDismount &);
	CInfoLadderDismount(CInfoLadderDismount &);
	CInfoLadderDismount();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void DrawEntityDebugOverlays(uint64);
	virtual ~CInfoLadderDismount();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[14] DrawEntityDebugOverlays
	// sizeof = 776
};

// src/game/shared/func_ladder.h:36
class CFuncLadder : public CBaseModelEntity {
	class NetworkVar_m_vecLadderDir {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_vecPlayerMountPositionTop {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_vecPlayerMountPositionBottom {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flAutoRideSpeed {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bFakeLadder {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

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

public:

private:

	static datamap_t m_DataMap;

	static CUtlVector<CFuncLadder*, CUtlMemory<CFuncLadder*, int> > s_Ladders;

	bool m_bDisabled;  // +0x4d0
	bool m_bHasSlack;  // +0x4d2

	string_t m_surfacePropName;  // +0x4d8
	COutputEvent m_OnPlayerGotOnLadder;  // +0x4e0
	COutputEvent m_OnPlayerGotOffLadder;  // +0x4f8
	typedef CBaseModelEntity BaseClass;
	typedef CFuncLadder ThisClass;
	CFuncLadder(CFuncLadder &);
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
	CFuncLadder();
	virtual ~CFuncLadder();

protected:

	virtual void Spawn(const CEntityKeyValues *);
	void FirstSetup();
	virtual void PreFirstNetworkUpdate();
	virtual void DrawEntityDebugOverlays(uint64);
	int GetDismountCount();
	CInfoLadderDismount * GetDismount(int);
	void GetTopPosition(Vector &);
	void GetBottomPosition(Vector &);
	void ComputeLadderDir(Vector &);
	float GetAutoRideSpeed();
	void SetEndPoints(const Vector &, const Vector &);
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	bool IsEnabled();
	void PlayerGotOn(CBasePlayer *);
	void PlayerGotOff(CBasePlayer *);
	virtual void Activate(ActivateType_t);
	bool DontGetOnLadder();
	bool HasSlack();
	void SetHasSlack(bool);
	float GetSlackZ(float);
	float GetSlackZDiff(float);
	int GetLadderCount();
	CFuncLadder * GetLadder(int);
	void FindNearbyDismountPoints(const Vector &, float, CUtlVector<CHandle<CInfoLadderDismount>, CUtlMemory<CHandle<CInfoLadderDismount>, int> > &);
	const char * GetSurfacePropName();

private:

	void SearchForDismountPoints();
	virtual int UpdateTransmitState();
	virtual void Precache(const CEntityPrecacheContext *);
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[200] PreFirstNetworkUpdate
	// vtable[14] DrawEntityDebugOverlays
	// vtable[10] Activate
	// vtable[64] UpdateTransmitState
	// vtable[6] Precache
	// sizeof = 1296
};
