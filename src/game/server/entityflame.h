// Reconstructed from DWARF by pahole; not original source.

// src/game/server/entityflame.h:24
class CEntityFlame : public CBaseEntity {
	class NetworkVar_m_hEntAttached {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bCheapEffect {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

protected:

	float m_flSize;  // +0x310
	bool m_bUseHitboxes;  // +0x314

	int m_iNumHitboxFires;  // +0x318
	float m_flHitboxFireScale;  // +0x31c
	float m_flLifetime;  // +0x320
	EHANDLE m_hAttacker;  // +0x324
	int m_iDangerSound;  // +0x328

	float m_flDirectDamagePerSecond;  // +0x350
	int m_iCustomDamageType;  // +0x354
	typedef CBaseEntity BaseClass;
	typedef CEntityFlame ThisClass;

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
	CEntityFlame(CEntityFlame &);
	CEntityFlame(CEntityFlame &);
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CEntityFlame * Create(CBaseEntity *, float, float, bool);
	virtual int UpdateTransmitState();
	CEntityFlame();
	void AttachToEntity(CBaseEntity *);
	void SetLifetime(float);
	void SetUseHitboxes(bool);
	void SetNumHitboxFires(int);
	void SetHitboxFireScale(float);
	float GetRemainingLife();
	int GetNumHitboxFires();
	float GetHitboxFireScale();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void UpdateOnRemove();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	void UseCheapEffect(bool);
	void SetSize(float);
	void SetAttacker(CBaseEntity *);
	CBaseEntity * GetAttacker();
	void SetDamageCustom(int);
	void FlameThink();
	virtual ~CEntityFlame();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[64] UpdateTransmitState
	// vtable[6] Precache
	// vtable[11] UpdateOnRemove
	// vtable[8] Spawn
	// vtable[10] Activate
	// sizeof = 864
};
