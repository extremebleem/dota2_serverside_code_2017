// Reconstructed from DWARF by pahole; not original source.

// src/game/server/basecombatcharacter.h:118
struct Relationship_t {
private:

	EHANDLE entity;  // +0x0
	int faction;  // +0x8
	int priority;  // +0x10

	static datamap_t m_DataMap;

	Relationship_t();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	Relationship_t & operator=(const Relationship_t &);

	// sizeof = 20
};

// src/game/server/basecombatcharacter.h:146
class CBaseCombatCharacter : public CBaseFlex {
	enum FieldOfViewCheckType {
		USE_FOV = 0,
		DISREGARD_FOV = 0x1,
	};

	enum LineOfSightCheckType {
		IGNORE_NOTHING = 0,
		IGNORE_ACTORS = 0x1,
	};

	class NetworkVar_m_flNextAttack {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flFieldOfView {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iAmmo {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_hMyWeapons {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_hActiveWeapon {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	enum {
		MAX_DAMAGE_TEAMS = 0x4,
	};

	struct DamageHistory {
	private:

		int team;  // +0x0

		DamageHistory();

		// sizeof = 24
	};
	/* tag__fprintf: const_type tag not supported! */;

	class NetworkVar_m_hMyWearables {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	bool m_bForceServerRagdoll;  // +0x549
	bool m_bPreventWeaponPickup;  // +0x54a
	bool m_bApplyStressDamage;  // +0x54b
	uint32 m_navHullCategory;  // +0x554
	float m_flNavHullRadius;  // +0x558
	float m_flNavHullHeight;  // +0x55c
protected:

	int m_bloodColor;  // +0x560

	string_t m_RelationshipString;  // +0x578
	float m_impactEnergyScale;  // +0x580

	static int m_lastInteraction;
	static Relationship_t * * m_DefaultRelationship;
	static Relationship_t * * m_FactionRelationship;
	static CUtlVector<CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >, CUtlMemory<CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >, int> > m_aFactions;
	int m_LastHitGroup;  // +0x584
	float m_flDamageAccumulator;  // +0x588
	int m_iDamageCount;  // +0x58c

	int m_nFaction;  // +0x5b0

	EHANDLE m_hLastFogTrigger;  // +0x5d0

	uint32 m_hasBeenInjured;  // +0x688

	int m_registeredNavTeam;  // +0x720

	static int m_nextSpawnID;
	int m_spawnID;  // +0x740
	int m_navMeshID;  // +0x744
	typedef CBaseFlex BaseClass;
	typedef CBaseCombatCharacter ThisClass;

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
	CBaseCombatCharacter & operator=(CBaseCombatCharacter &);
	CBaseCombatCharacter(CBaseCombatCharacter &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CBaseCombatCharacter();
	virtual ~CBaseCombatCharacter();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void UpdateOnRemove();
	int GetSpawnID();
	virtual int Restore(IRestore &);
	virtual const impactdamagetable_t & GetPhysicsImpactDamageTable();
	virtual int TakeHealth(float, int);
	void CauseDeath(const CTakeDamageInfo &);
	virtual bool FVisible(CBaseEntity *, uint64, CBaseEntity * *);
	virtual bool FVisible(const Vector &, uint64, CBaseEntity * *);
	void ResetVisibilityCache();
	virtual bool TakeClubbedDamage();
	virtual bool FInViewCone(CBaseEntity *);
	virtual bool FInViewCone(const Vector &);
	virtual bool FInAimCone(CBaseEntity *);
	virtual bool FInAimCone(const Vector &);
	virtual bool ShouldShootMissTarget(CBaseCombatCharacter *);
	virtual CBaseEntity * FindMissTarget();
	bool DispatchInteraction(int, void *, CBaseCombatCharacter *);
	virtual bool HandleInteraction(int, void *, CBaseCombatCharacter *);
	virtual QAngle BodyAngles();
	virtual Vector BodyDirection2D();
	virtual Vector BodyDirection3D();
	virtual Vector HeadDirection2D();
	virtual Vector HeadDirection3D();
	virtual Vector EyeDirection2D();
	virtual Vector EyeDirection3D();
	virtual void SetTransmit(CCheckTransmitInfo *, bool);
	void OnFogTriggerStartTouch(CBaseEntity *);
	void OnFogTriggerEndTouch(CBaseEntity *);
	CBaseEntity * GetFogTrigger();
	virtual bool IsHiddenByFog(const Vector &);
	virtual bool IsHiddenByFog(const CBaseEntity *);
	virtual bool IsHiddenByFog(float);
	virtual float GetFogObscuredRatio(const Vector &);
	virtual float GetFogObscuredRatio(CBaseEntity *);
	virtual float GetFogObscuredRatio(float);
	virtual bool GetFogParams(fogparams_t *);
	bool IsAbleToSee(const CBaseEntity *, FieldOfViewCheckType);
	bool IsAbleToSee(CBaseCombatCharacter *, FieldOfViewCheckType);
	virtual bool IsLookingTowards(const CBaseEntity *, float);
	virtual bool IsLookingTowards(const Vector &, float);
	virtual bool IsInFieldOfView(CBaseEntity *);
	virtual bool IsInFieldOfView(const CBaseEntity &);
	virtual bool IsInFieldOfView(const Vector &);
	virtual bool IsLineOfSightClear(CBaseEntity *, LineOfSightCheckType);
	virtual bool IsLineOfSightClear(const Vector &, LineOfSightCheckType, CBaseEntity *);
	void PlayFootstepSound(const Vector &, bool, bool, bool, bool);
	virtual void OnFootstep(const Vector &, bool, bool);
	virtual const CPhysSurfaceProperties * GetGroundSurface();
	virtual const char * GetFootstepSound(const char *, bool, float, bool);
	virtual bool AreFootstepsAudible();
	virtual bool IsFootstepAudible(float, bool);
	virtual float GetFootstepRunThreshold();
	virtual int GiveAmmo(int, int, bool);
	int GiveAmmo(int, const char *, bool);
	virtual void RemoveAmmo(int, int);
	void RemoveAmmo(int, const char *);
	void RemoveAllAmmo();
	int GetAmmoCount(int);
	int GetAmmoCount(char *);
	virtual Activity NPC_TranslateActivity(Activity);
	CBaseCombatWeapon * Weapon_Create(const char *);
	virtual Activity Weapon_TranslateActivity(Activity, bool *);
	void Weapon_SetActivity(Activity, float);
	virtual void Weapon_FrameUpdate();
	virtual void Weapon_HandleAnimEvent(animevent_t *);
	virtual CBaseCombatWeapon * Weapon_OwnsThisType(const char *, int);
	virtual int Weapon_GetSlot(const char *, int);
	virtual bool Weapon_CanUse(CBaseCombatWeapon *);
	virtual void Weapon_Equip(CBaseCombatWeapon *);
	virtual bool Weapon_EquipAmmoOnly(CBaseCombatWeapon *);
	bool Weapon_Detach(CBaseCombatWeapon *);
	virtual void Weapon_Drop(CBaseCombatWeapon *, const Vector *, const Vector *);
	virtual bool Weapon_Switch(CBaseCombatWeapon *, int);
	virtual Vector Weapon_ShootPosition(int);
	virtual QAngle Weapon_ShootAngles(int);
	bool Weapon_IsOnGround(CBaseCombatWeapon *);
	CBaseEntity * Weapon_FindUsable(const Vector &);
	virtual bool Weapon_CanSwitchTo(CBaseCombatWeapon *);
	virtual bool Weapon_SlotOccupied(CBaseCombatWeapon *);
	virtual CBaseCombatWeapon * Weapon_GetSlot(int);
	CBaseCombatWeapon * Weapon_GetWpnForAmmo(int);
	void Weapon_DropAll(bool);
	virtual bool AddPlayerItem(CBaseCombatWeapon *);
	virtual bool RemovePlayerItem(CBaseCombatWeapon *);
	virtual bool CanBecomeServerRagdoll();
	void RecordDamageHistory(CBaseEntity *);
	virtual int OnTakeDamage(const CTakeDamageInfo &);
	virtual int OnTakeDamage_Alive(const CTakeDamageInfo &);
	virtual int OnTakeDamage_Dying(const CTakeDamageInfo &);
	virtual int OnTakeDamage_Dead(const CTakeDamageInfo &);
	virtual void ReactToDamage(const CTakeDamageInfo &);
	virtual float GetAliveDuration();
	virtual void OnFriendDamaged(CBaseCombatCharacter *, CBaseEntity *);
	virtual void NotifyFriendsOfDamage(CBaseEntity *);
	virtual bool HasEverBeenInjured(int);
	virtual float GetTimeSinceLastInjury(int);
	virtual void OnPlayerKilledOther(CBaseEntity *, const CTakeDamageInfo &);
	virtual Vector CalcDeathForceVector(const CTakeDamageInfo &);
	virtual int BloodColor();
	virtual Activity GetDeathActivity();
	virtual bool CorpseGib(const CTakeDamageInfo &);
	virtual void CorpseFade();
	virtual bool HasHumanGibs();
	virtual bool HasAlienGibs();
	virtual bool ShouldGib(const CTakeDamageInfo &);
	float GetFilteredDamage(const CTakeDamageInfo &);
	float GetDamageAccumulator();
	int GetDamageCount();
	virtual void Event_Killed(const CTakeDamageInfo &);
	virtual bool ShouldDropActiveWeaponWhenKilled();
	void InputKilledNPC(inputdata_t &);
	virtual void OnKilledNPC(CBaseCombatCharacter *);
	void InputBecomeServerRagdoll(inputdata_t &);
	virtual bool Event_Gibbed(const CTakeDamageInfo &);
	virtual void Event_Dying();
	virtual bool BecomeRagdoll(const CTakeDamageInfo &, const Vector &);
	virtual void FixupBurningServerRagdoll(CBaseModelEntity *);
	CBaseEntity * FindHealthItem(const Vector &, const Vector &);
	virtual CBaseEntity * CheckTraceHullAttack(float, const Vector &, const Vector &, float, int, float, bool);
	virtual CBaseEntity * CheckTraceHullAttack(const Vector &, const Vector &, const Vector &, const Vector &, float, int, float, bool);
	virtual CBaseCombatCharacter * MyCombatCharacterPointer();
	virtual const CBaseCombatCharacter * MyCombatCharacterPointer();
	virtual void VPhysicsCollision(int, gamevcollisionevent_t *);
	virtual void VPhysicsShadowCollision(int, gamevcollisionevent_t *);
	virtual void VPhysicsUpdate(IPhysicsObject *);
	float CalculatePhysicsStressDamage(vphysics_objectstress_t *, IPhysicsObject *);
	void ApplyStressDamage(IPhysicsObject *, bool);
	virtual void PushawayTouch(CBaseEntity *);
	void SetImpactEnergyScale(float);
	virtual Disposition_t IRelationType(CBaseEntity *);
	virtual int IRelationPriority(CBaseEntity *);
	ScriptVariant_t ScriptGetEquippedWeapons();
	const Relationship_t * FindEntityRelationship(CBaseEntity *);
	virtual bool IsInAVehicle();
	virtual IServerVehicle * GetVehicle();
	virtual const IServerVehicle * GetVehicle();
	virtual CBaseEntity * GetVehicleEntity();
	virtual bool ExitVehicle();
	void SetBloodColor(int);
	CBaseCombatWeapon * GetActiveWeapon();
	int WeaponCount();
	CBaseCombatWeapon * GetWeapon(int);
	bool RemoveWeapon(CBaseCombatWeapon *);
	void RemoveAllWeapons();
	WeaponProficiency_t GetCurrentWeaponProficiency();
	void SetCurrentWeaponProficiency(WeaponProficiency_t);
	virtual WeaponProficiency_t CalcWeaponProficiency(CBaseCombatWeapon *);
	virtual Vector GetAttackSpread(CBaseCombatWeapon *, CBaseEntity *);
	virtual float GetSpreadBias(CBaseCombatWeapon *, CBaseEntity *);
	virtual void DoMuzzleFlash();
	CEconWearable * GetWearable(int);
	int GetNumWearables();
	virtual void InternalSetEffects(int);
	void EquipWearable(CEconWearable *);
	void RemoveWearable(CEconWearable *);
	void RemoveAllWearables();
	void PlayWearableAnimsForPlaybackEvent(wearableanimplayback_t);
	void DirtyWearablesForNetworking();
	void SetDefaultFactionRelationship(int, int, Disposition_t, int);
	Disposition_t GetDefaultFactionRelationship(int, int);
	Disposition_t GetFactionRelationshipDisposition(int);
	void AllocateDefaultRelationships();
	void AllocateDefaultFactionRelationships();
	void SetDefaultRelationship(Class_T, Class_T, Disposition_t, int);
	Disposition_t GetDefaultRelationshipDisposition(Class_T);
	virtual void AddEntityRelationship(CBaseEntity *, Disposition_t, int);
	virtual bool RemoveEntityRelationship(CBaseEntity *);
	virtual void AddClassRelationship(Class_T, Disposition_t, int);
	virtual void AddFactionRelationship(int, Disposition_t, int);
	int GetNumFactions();
	CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> > * GetEntitiesInFaction(int);
	int GetFaction();
	virtual void ChangeFaction(int);
	virtual void ChangeTeam(int);
	Hull_t GetHullType();
	void SetHullType(Hull_t);
	NavHull_t GetNavHull();
	void SetNavHull(NavHull_t);
	void SetAmmoCount(int, int);
	void SetActiveWeapon(CBaseCombatWeapon *);
	void ClearActiveWeapon();
	virtual void OnChangeActiveWeapon(CBaseCombatWeapon *, CBaseCombatWeapon *);
	bool SwitchToNextBestWeapon(CBaseCombatWeapon *);
	void SetRelationshipString(string_t);
	float GetNextAttack();
	void SetNextAttack(float);
	bool IsAllowedToPickupWeapons();
	void SetPreventWeaponPickup(bool);
	virtual CNavArea * GetLastKnownArea();
	virtual CNavArea * GetCurrentArea();
	virtual bool IsAreaTraversable(const CNavArea *);
	virtual void ResetNavArea();
	virtual void ClearLastKnownArea();
	virtual void UpdateLastKnownArea();
	virtual void OnNavAreaChanged(CNavArea *, CNavArea *);
	virtual void OnNavAreaRemoved(CNavArea *);
	virtual bool IsGhost();
	int LastHitGroup();
	void SetLastHitGroup(int);
	int GetInteractionID();
	bool ComputeLOS(const Vector &, const Vector &);
	bool ComputeLOS(const CBaseEntity *, EEntityOffsetMode_t, const CBaseEntity *, EEntityOffsetMode_t);
	void ThrowDirForWeaponStrip(CBaseCombatWeapon *, const Vector &, Vector *);
	void DropWeaponForWeaponStrip(CBaseCombatWeapon *, const Vector &, const QAngle &, float);
	virtual ScriptClassDesc_t * GetScriptDesc();
	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[28] HackToMakeAVTable
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[11] UpdateOnRemove
	// vtable[16] Restore
	// vtable[262] GetPhysicsImpactDamageTable
	// vtable[91] TakeHealth
	// vtable[179] FVisible
	// vtable[180] FVisible
	// vtable[263] TakeClubbedDamage
	// vtable[264] FInViewCone
	// vtable[265] FInViewCone
	// vtable[266] FInAimCone
	// vtable[267] FInAimCone
	// vtable[268] ShouldShootMissTarget
	// vtable[269] FindMissTarget
	// vtable[270] HandleInteraction
	// vtable[271] BodyAngles
	// vtable[272] BodyDirection2D
	// vtable[273] BodyDirection3D
	// vtable[274] HeadDirection2D
	// vtable[275] HeadDirection3D
	// vtable[276] EyeDirection2D
	// vtable[277] EyeDirection3D
	// vtable[66] SetTransmit
	// vtable[278] IsHiddenByFog
	// vtable[279] IsHiddenByFog
	// vtable[280] IsHiddenByFog
	// vtable[281] GetFogObscuredRatio
	// vtable[282] GetFogObscuredRatio
	// vtable[283] GetFogObscuredRatio
	// vtable[284] GetFogParams
	// vtable[285] IsLookingTowards
	// vtable[286] IsLookingTowards
	// vtable[287] IsInFieldOfView
	// vtable[288] IsInFieldOfView
	// vtable[289] IsInFieldOfView
	// vtable[290] IsLineOfSightClear
	// vtable[291] IsLineOfSightClear
	// vtable[292] OnFootstep
	// vtable[293] GetGroundSurface
	// vtable[294] GetFootstepSound
	// vtable[295] AreFootstepsAudible
	// vtable[296] IsFootstepAudible
	// vtable[297] GetFootstepRunThreshold
	// vtable[298] GiveAmmo
	// vtable[299] RemoveAmmo
	// vtable[300] NPC_TranslateActivity
	// vtable[301] Weapon_TranslateActivity
	// vtable[302] Weapon_FrameUpdate
	// vtable[303] Weapon_HandleAnimEvent
	// vtable[304] Weapon_OwnsThisType
	// vtable[305] Weapon_GetSlot
	// vtable[306] Weapon_CanUse
	// vtable[307] Weapon_Equip
	// vtable[308] Weapon_EquipAmmoOnly
	// vtable[309] Weapon_Drop
	// vtable[310] Weapon_Switch
	// vtable[311] Weapon_ShootPosition
	// vtable[312] Weapon_ShootAngles
	// vtable[313] Weapon_CanSwitchTo
	// vtable[314] Weapon_SlotOccupied
	// vtable[315] Weapon_GetSlot
	// vtable[316] AddPlayerItem
	// vtable[317] RemovePlayerItem
	// vtable[318] CanBecomeServerRagdoll
	// vtable[90] OnTakeDamage
	// vtable[319] OnTakeDamage_Alive
	// vtable[320] OnTakeDamage_Dying
	// vtable[321] OnTakeDamage_Dead
	// vtable[33] ReactToDamage
	// vtable[322] GetAliveDuration
	// vtable[323] OnFriendDamaged
	// vtable[324] NotifyFriendsOfDamage
	// vtable[325] HasEverBeenInjured
	// vtable[326] GetTimeSinceLastInjury
	// vtable[327] OnPlayerKilledOther
	// vtable[328] CalcDeathForceVector
	// vtable[138] BloodColor
	// vtable[329] GetDeathActivity
	// vtable[330] CorpseGib
	// vtable[331] CorpseFade
	// vtable[332] HasHumanGibs
	// vtable[333] HasAlienGibs
	// vtable[334] ShouldGib
	// vtable[92] Event_Killed
	// vtable[335] ShouldDropActiveWeaponWhenKilled
	// vtable[336] OnKilledNPC
	// vtable[337] Event_Gibbed
	// vtable[338] Event_Dying
	// vtable[339] BecomeRagdoll
	// vtable[340] FixupBurningServerRagdoll
	// vtable[341] CheckTraceHullAttack
	// vtable[342] CheckTraceHullAttack
	// vtable[147] MyCombatCharacterPointer
	// vtable[148] MyCombatCharacterPointer
	// vtable[57] VPhysicsCollision
	// vtable[56] VPhysicsShadowCollision
	// vtable[52] VPhysicsUpdate
	// vtable[343] PushawayTouch
	// vtable[344] IRelationType
	// vtable[345] IRelationPriority
	// vtable[346] IsInAVehicle
	// vtable[347] GetVehicle
	// vtable[348] GetVehicle
	// vtable[349] GetVehicleEntity
	// vtable[350] ExitVehicle
	// vtable[351] CalcWeaponProficiency
	// vtable[352] GetAttackSpread
	// vtable[353] GetSpreadBias
	// vtable[354] DoMuzzleFlash
	// vtable[188] InternalSetEffects
	// vtable[355] AddEntityRelationship
	// vtable[356] RemoveEntityRelationship
	// vtable[357] AddClassRelationship
	// vtable[358] AddFactionRelationship
	// vtable[359] ChangeFaction
	// vtable[70] ChangeTeam
	// vtable[360] OnChangeActiveWeapon
	// vtable[361] GetLastKnownArea
	// vtable[362] GetCurrentArea
	// vtable[363] IsAreaTraversable
	// vtable[364] ResetNavArea
	// vtable[365] ClearLastKnownArea
	// vtable[366] UpdateLastKnownArea
	// vtable[367] OnNavAreaChanged
	// vtable[368] OnNavAreaRemoved
	// vtable[369] IsGhost
	// vtable[4] GetScriptDesc
	// sizeof = 1888
};
