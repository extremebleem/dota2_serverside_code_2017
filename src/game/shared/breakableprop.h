// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/breakableprop.h:36
class CBreakableProp : public CBaseProp, public IBreakableWithPropData, public CDefaultPlayerPickupVPhysics {
	class NetworkVar_m_iPhysicsMode {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	enum PhysgunState_t {
		PHYSGUN_MUST_BE_DETACHED = 0,
		PHYSGUN_IS_DETACHING = 0x1,
		PHYSGUN_CAN_BE_GRABBED = 0x2,
		PHYSGUN_ANIMATE_ON_PULL = 0x3,
		PHYSGUN_ANIMATE_IS_ANIMATING = 0x4,
		PHYSGUN_ANIMATE_FINISHED = 0x5,
		PHYSGUN_ANIMATE_IS_PRE_ANIMATING = 0x6,
		PHYSGUN_ANIMATE_IS_POST_ANIMATING = 0x7,
	};

	class NetworkVar_m_noGhostCollision {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flClothScale {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	COutputEvent m_OnBreak;  // +0x4d0
	COutputFloat m_OnHealthChanged;  // +0x4e8
	COutputEvent m_OnTakeDamage;  // +0x508
	float m_impactEnergyScale;  // +0x520
	int m_iMinHealthDmg;  // +0x524
protected:

	uint32 m_createTick;  // +0x538
	float m_flPressureDelay;  // +0x53c
	EHANDLE m_hBreaker;  // +0x540
	float m_flDmgModBullet;  // +0x548
	float m_flDmgModClub;  // +0x54c
	float m_flDmgModExplosive;  // +0x550
	float m_flDmgModFire;  // +0x554
	string_t m_iszPhysicsDamageTableName;  // +0x558
	string_t m_iszBreakableModel;  // +0x560
	int m_iBreakableSkin;  // +0x568
	int m_iBreakableCount;  // +0x56c
	int m_iMaxBreakableSize;  // +0x570

	string_t m_iszBasePropData;  // +0x578
	int m_iInteractions;  // +0x580
	float m_explodeDamage;  // +0x584
	float m_explodeRadius;  // +0x588
	int m_iNumBreakableChunks;  // +0x58c
private:

	float m_flLastPhysicsInfluenceTime;  // +0x594
	bool m_bBlockLOSSetByPropData;  // +0x598
	bool m_bIsWalkableSetByPropData;  // +0x599
	bool m_bOriginalBlockLOS;  // +0x59a
	char m_nPhysgunState;  // +0x59b

	COutputEvent m_OnPhysCannonDetach;  // +0x5a0
	COutputEvent m_OnPhysCannonAnimatePreStarted;  // +0x5b8
	COutputEvent m_OnPhysCannonAnimatePullStarted;  // +0x5d0
	COutputEvent m_OnPhysCannonAnimatePostStarted;  // +0x5e8
	COutputEvent m_OnPhysCannonPullAnimFinished;  // +0x600
	float m_flDefaultFadeScale;  // +0x618
	float m_explosionDelay;  // +0x624
	string_t m_explosionBuildupSound;  // +0x628
	uint32 m_nBreakablePieceSpawnServerSideMask;  // +0x630
	EHANDLE m_hLastAttacker;  // +0x634
	EHANDLE m_hFlareEnt;  // +0x638
	bool m_bUsePuntSound;  // +0x63c

	string_t m_iszPuntSound;  // +0x640

	typedef CBaseProp BaseClass;
	typedef CBreakableProp ThisClass;

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
	CBreakableProp(CBreakableProp &);
	CBreakableProp(CBreakableProp &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CBreakableProp();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual float GetAutoAimRadius();
	virtual void UpdateOnRemove();
	void BreakablePropTouch(CBaseEntity *);
	virtual int OnTakeDamage(const CTakeDamageInfo &);
	virtual void Event_Killed(const CTakeDamageInfo &);
	void Break(CBaseEntity *, const CTakeDamageInfo &);
	void BreakThink();
	void AnimateThink();
	virtual void PlayPuntSound();
	void InputBreak(inputdata_t &);
	void InputAddHealth(inputdata_t &);
	void InputRemoveHealth(inputdata_t &);
	void InputSetHealth(inputdata_t &);
	int GetNumBreakableChunks();
	virtual bool OverridePropdata();
	virtual IPhysicsObject * GetRootPhysicsObjectForBreak();
	bool PropDataOverrodeBlockLOS();
	bool PropDataOverrodeAIWalkable();
	virtual bool HasPreferredCarryAnglesForPlayer(CBasePlayer *);
	virtual QAngle PreferredCarryAngles();
	virtual void Ignite(float, bool, float, bool);
	void HandleFirstCollisionInteractions(int, gamevcollisionevent_t *);
	void HandleInteractionStick(int, gamevcollisionevent_t *);
	void StickAtPosition(const Vector &, const Vector &, const QAngle &);
	void DisableAutoFade();
	virtual void SetDmgModBullet(float);
	virtual void SetDmgModClub(float);
	virtual void SetDmgModExplosive(float);
	virtual void SetDmgModFire(float);
	virtual float GetDmgModBullet();
	virtual float GetDmgModClub();
	virtual float GetDmgModExplosive();
	virtual float GetDmgModFire();
	virtual void SetExplosiveRadius(float);
	virtual void SetExplosiveDamage(float);
	virtual float GetExplosiveRadius();
	virtual float GetExplosiveDamage();
	void SetExplosionType(explosion_t);
	explosion_t GetExplosionType();
	void SetExplosionDelay(float);
	float GetExplosionDelay();
	void SetExplosionBuildupSound(string_t);
	string_t GetExplosionBuildupSound();
	virtual void SetPhysicsDamageTable(string_t);
	virtual string_t GetPhysicsDamageTable();
	virtual void SetBreakableModel(string_t);
	virtual string_t GetBreakableModel();
	virtual void SetBreakableSkin(int);
	virtual int GetBreakableSkin();
	virtual void SetBreakableCount(int);
	virtual int GetBreakableCount();
	virtual void SetMaxBreakableSize(int);
	virtual int GetMaxBreakableSize();
	virtual void SetPropDataBlocksLOS(bool);
	virtual void SetPropDataIsAIWalkable(bool);
	virtual void SetBasePropData(string_t);
	virtual string_t GetBasePropData();
	virtual void SetInteraction(propdata_interactions_t);
	void RemoveInteraction(propdata_interactions_t);
	virtual bool HasInteraction(propdata_interactions_t);
	virtual void SetMultiplayerBreakMode(mp_break_t);
	virtual mp_break_t GetMultiplayerBreakMode();
	virtual int GetMinHealthDamage();
	virtual void SetPhysicsMode(int);
	virtual int GetPhysicsMode();
	void CopyFadeFrom(CBreakableProp *);
	virtual void OnSpawnBreakProp(CBreakableProp *);
	bool UpdateHealth(int, CBaseEntity *);
	virtual void OnBreak(const Vector &, const AngularImpulse &, CBaseEntity *);
	void SetEnableMotionPosition(const Vector &, const QAngle &);
	bool GetEnableMotionPosition(Vector *, QAngle *);
	void ClearEnableMotionPosition();

private:

	CBaseEntity * FindEnableMotionFixup();
	virtual bool OnAttemptPhysGunPickup(CBasePlayer *, PhysGunPickup_t);
	virtual void OnPhysGunPickup(CBasePlayer *, PhysGunPickup_t, int);
	virtual void OnPhysGunDrop(CBasePlayer *, PhysGunDrop_t, int);
	virtual AngularImpulse PhysGunLaunchAngularImpulse();
	virtual CBasePlayer * HasPhysicsAttacker(float);
	void SetPhysicsAttacker(CBasePlayer *, float);
	void SetNoGhostCollisions(bool);

protected:

	void CheckRemoveRagdolls();

private:

	void InputEnablePhyscannonPickup(inputdata_t &);
	void InputDisablePhyscannonPickup(inputdata_t &);
	void InputEnablePuntSound(inputdata_t &);
	void InputDisablePuntSound(inputdata_t &);
	void ForceFadeScaleToAlwaysVisible();
	void RampToDefaultFadeScale();
	virtual ~CBreakableProp();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[86] GetAutoAimRadius
	// vtable[11] UpdateOnRemove
	// vtable[90] OnTakeDamage
	// vtable[92] Event_Killed
	// vtable[253] PlayPuntSound
	// vtable[252] OverridePropdata
	// vtable[254] GetRootPhysicsObjectForBreak
	// vtable[255] HasPreferredCarryAnglesForPlayer
	// vtable[256] PreferredCarryAngles
	// vtable[239] Ignite
	// vtable[257] SetDmgModBullet
	// vtable[258] SetDmgModClub
	// vtable[259] SetDmgModExplosive
	// vtable[260] SetDmgModFire
	// vtable[261] GetDmgModBullet
	// vtable[262] GetDmgModClub
	// vtable[263] GetDmgModExplosive
	// vtable[264] GetDmgModFire
	// vtable[265] SetExplosiveRadius
	// vtable[266] SetExplosiveDamage
	// vtable[267] GetExplosiveRadius
	// vtable[268] GetExplosiveDamage
	// vtable[269] SetPhysicsDamageTable
	// vtable[270] GetPhysicsDamageTable
	// vtable[271] SetBreakableModel
	// vtable[272] GetBreakableModel
	// vtable[273] SetBreakableSkin
	// vtable[274] GetBreakableSkin
	// vtable[275] SetBreakableCount
	// vtable[276] GetBreakableCount
	// vtable[277] SetMaxBreakableSize
	// vtable[278] GetMaxBreakableSize
	// vtable[279] SetPropDataBlocksLOS
	// vtable[280] SetPropDataIsAIWalkable
	// vtable[281] SetBasePropData
	// vtable[282] GetBasePropData
	// vtable[283] SetInteraction
	// vtable[284] HasInteraction
	// vtable[285] SetMultiplayerBreakMode
	// vtable[286] GetMultiplayerBreakMode
	// vtable[287] GetMinHealthDamage
	// vtable[288] SetPhysicsMode
	// vtable[289] GetPhysicsMode
	// vtable[290] OnSpawnBreakProp
	// vtable[291] OnBreak
	// vtable[292] OnAttemptPhysGunPickup
	// vtable[293] OnPhysGunPickup
	// vtable[294] OnPhysGunDrop
	// vtable[295] PhysGunLaunchAngularImpulse
	// vtable[190] HasPhysicsAttacker
	// sizeof = 1616
};
