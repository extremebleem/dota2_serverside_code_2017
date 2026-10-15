// Reconstructed from DWARF by pahole; not original source.

// src/game/server/items.h:46
class CItem : public CBaseAnimating, public CDefaultPlayerPickupVPhysics {
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

protected:

	COutputEvent m_OnPlayerTouch;  // +0x4c8
private:

	bool m_bActivateWhenAtRest;  // +0x4e0

	COutputEvent m_OnCacheInteraction;  // +0x4e8
	HPhysicsJoint m_hConstraint;  // +0x518
	typedef CBaseAnimating BaseClass;
	CItem(CItem &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CItem();
	virtual ~CItem();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual bool HasBloatedCollision();
	virtual CBaseEntity * Respawn();
	void ItemTouch(CBaseEntity *);
	virtual void Materialize();
	virtual bool MyTouch(CBasePlayer *);
	virtual void HandleTouch(CBasePlayer *, CBaseEntity *);
	virtual void OnEntityEvent(EntityEvent_t, void *);
	void ActivateWhenAtRest();
	virtual void OnPhysGunPickup(CBasePlayer *, PhysGunPickup_t, int);
	virtual void OnPhysGunDrop(CBasePlayer *, PhysGunDrop_t, int);
	virtual int ObjectCaps();
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	Vector GetOriginalSpawnOrigin();
	QAngle GetOriginalSpawnAngles();
	void SetOriginalSpawnOrigin(const Vector &);
	void SetOriginalSpawnAngles(const QAngle &);
	virtual bool CreateItemVPhysicsObject();
	bool ItemCanBeTouchedByPlayer(CBasePlayer *);
	bool WillActivateWhenAtRest();
	void InputHandGripWhileHeld(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	void ComeToRest();
	virtual void SetupTouchFunction();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[251] HasBloatedCollision
	// vtable[154] Respawn
	// vtable[252] Materialize
	// vtable[253] MyTouch
	// vtable[254] HandleTouch
	// vtable[103] OnEntityEvent
	// vtable[255] OnPhysGunPickup
	// vtable[256] OnPhysGunDrop
	// vtable[19] ObjectCaps
	// vtable[108] Use
	// vtable[257] CreateItemVPhysicsObject
	// vtable[34] GetDataDescMap
	// vtable[258] SetupTouchFunction
	// sizeof = 1312
};
