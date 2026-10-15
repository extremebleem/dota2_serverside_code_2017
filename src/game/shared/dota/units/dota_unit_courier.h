// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_courier.h:41
class CDOTA_Unit_Courier : public CDOTA_BaseNPC_Additive {
	class NetworkVar_m_bFlyingCourier {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flRespawnTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nCourierState {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hCourierStateEntity {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static CEconItemView * sm_pForceEconItemHack;
protected:

	bool m_bUnitRespawned;  // +0x1198
private:

	bool m_bPreUpdateFlyingCourier;  // +0x1199

	typedef CDOTA_Unit_Courier ThisClass;

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
	CDOTA_Unit_Courier(CDOTA_Unit_Courier &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Unit_Courier();
	virtual ~CDOTA_Unit_Courier();
	virtual int ShouldTransmit(const CGameCheckTransmitInfo *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void OnAlive();
	virtual void OnDying();
	virtual void Event_Killed(const CTakeDamageInfo &);
	CDOTAPlayer * GetLastOrderIssuerPlayer();
	virtual const char * GetCourierModelName();
	virtual bool OnSaveState(KeyValues *);
	virtual bool OnLoadState(KeyValues *);
	void RespawnCourier();
	virtual bool UnitCanRespawn();
	void SetCourierState(CourierState_t, CBaseEntity *);
	virtual void OnCommandMoveTo(const Vector &);
	virtual void OnIdleChanged();
	virtual void EnterShop(int, CBaseEntity *);
	bool UpgradeToFlyingCourier();
	void GetCourierModelNames(CUtlString &, CUtlString &);
	void CacheCourierModelNames(const CEntityPrecacheContext *);
	void UpdateCourierMode();
	virtual bool IsFlyingCourier();
	virtual bool IsInventoryEnabled();
	virtual float GetBaseMoveSpeed();
	CourierState_t GetCourierState();
	CBaseEntity * GetCourierStateEntity();
	float GetRespawnTime();
	virtual bool IsFlyingVisually();

protected:

	virtual CEconItemView * ComputeOverriddenGeneratingItem(const CEntityKeyValues *);
	virtual void OnAssetModifiersUpdated();
	virtual void BuildAttachedParticleFilter(AttachedParticleFilter_t *);
	void PrecacheCourierWearables(const CEntityPrecacheContext *);
	void AddCourierWearables();
	virtual ScriptClassDesc_t * GetScriptDesc();
	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[65] ShouldTransmit
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[471] OnAlive
	// vtable[469] OnDying
	// vtable[92] Event_Killed
	// vtable[490] GetCourierModelName
	// vtable[466] OnSaveState
	// vtable[467] OnLoadState
	// vtable[477] UnitCanRespawn
	// vtable[491] OnCommandMoveTo
	// vtable[378] OnIdleChanged
	// vtable[464] EnterShop
	// vtable[492] IsFlyingCourier
	// vtable[480] IsInventoryEnabled
	// vtable[433] GetBaseMoveSpeed
	// vtable[489] IsFlyingVisually
	// vtable[486] ComputeOverriddenGeneratingItem
	// vtable[482] OnAssetModifiersUpdated
	// vtable[481] BuildAttachedParticleFilter
	// vtable[4] GetScriptDesc
	// sizeof = 4536
};
