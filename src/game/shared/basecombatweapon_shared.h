// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/basecombatweapon_shared.h:81
struct acttable_t {
	Activity baseAct;  // +0x0
	Activity weaponAct;  // +0x4
	bool required;  // +0x8

	// sizeof = 12
};

// src/game/shared/basecombatweapon_shared.h:140
class CBaseCombatWeapon : public CBaseAnimating, public IAttachmentOverride {
	class NetworkVar_m_hOwner {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nViewModelIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flNextPrimaryAttack {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flNextSecondaryAttack {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nQueuedAttack {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flTimeAttackQueued {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iViewModelIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iWorldModelIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iState {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iPrimaryAmmoType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iSecondaryAmmoType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iClip1 {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iClip2 {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bOnlyPump {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flTimeWeaponIdle {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bInReload {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	float m_flNextEmptySoundTime;  // +0x50c
	float m_fMinRange1;  // +0x510
	float m_fMinRange2;  // +0x514
	float m_fMaxRange1;  // +0x518
	float m_fMaxRange2;  // +0x51c
	float m_fFireDuration;  // +0x520
	Activity m_Activity;  // +0x524
	int m_iPrimaryAmmoCount;  // +0x528
	int m_iSecondaryAmmoCount;  // +0x52c
	string_t m_iszName;  // +0x530
	bool m_bRemoveable;  // +0x538
	bool m_bFireOnEmpty;  // +0x53a
	bool m_bFiresUnderwater;  // +0x53b
	bool m_bAltFiresUnderwater;  // +0x53c
	bool m_bReloadsSingly;  // +0x53d

	Activity m_IdealActivity;  // +0x544
	int m_iSubType;  // +0x548
	float m_flUnlockTime;  // +0x54c
	EHANDLE m_hLocker;  // +0x550

	HWeaponInfo m_hWeaponFileInfo;  // +0x558
	int m_iAltFireHudHintCount;  // +0x568
	int m_iReloadHudHintCount;  // +0x56c
	bool m_bAltFireHudHintDisplayed;  // +0x570
	bool m_bReloadHudHintDisplayed;  // +0x571

	float m_flHudHintPollTime;  // +0x574
	float m_flHudHintMinDisplayTime;  // +0x578
	int m_nTracerAttachmentIndex;  // +0x57c
	COutputEvent m_OnPlayerUse;  // +0x580
	COutputEvent m_OnPlayerPickup;  // +0x598
	COutputEvent m_OnNPCPickup;  // +0x5b0
	COutputEvent m_OnCacheInteraction;  // +0x5c8
	typedef CBaseAnimating BaseClass;
	typedef CBaseCombatWeapon ThisClass;

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
	CBaseCombatWeapon(CBaseCombatWeapon &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();

	NetworkUserGroupProxyInfo_t * GetExcluderLocalWeaponExclusive();
	CBaseCombatWeapon();
	virtual ~CBaseCombatWeapon();
	virtual bool IsBaseCombatWeapon();
	virtual CBaseCombatWeapon * MyCombatWeaponPointer();
	virtual bool IsPredicted();

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void PreFirstNetworkUpdate();
	virtual void Activate(ActivateType_t);
	virtual void MakeTracer(const Vector &, const trace_t &, int);
	virtual int GetSubType();
	virtual void SetSubType(int);
	virtual void Equip(CBaseCombatCharacter *);
	virtual void Drop(const Vector &);
	virtual int UpdateClientData(CBasePlayer *);
	virtual bool IsAllowedToSwitch();
	virtual bool CanBeSelected();
	virtual bool VisibleInWeaponSelection();
	virtual bool HasAmmo();
	virtual void SetPickupTouch();
	virtual void DefaultTouch(CBaseEntity *);
	virtual bool ShouldDisplayAltFireHUDHint();
	virtual void DisplayAltFireHudHint();
	virtual void RescindAltFireHudHint();
	virtual bool ShouldDisplayReloadHUDHint();
	virtual void DisplayReloadHudHint();
	virtual void RescindReloadHudHint();
	virtual void SetViewModelIndex(int);
	virtual bool SendWeaponAnim(Activity);
	virtual void SendViewModelAnim(HSequence);
	float GetViewModelSequenceDuration(ViewmodelLayer_t);
	bool IsViewModelSequenceFinished(ViewmodelLayer_t);
	virtual int GetTracerAttachment();
	virtual void SetViewModel();
	virtual bool HasWeaponIdleTimeElapsed();
	virtual void SetWeaponIdleTime(float);
	virtual float GetWeaponIdleTime();
	virtual bool HasAnyAmmo();
	virtual bool HasPrimaryAmmo();
	virtual bool HasSecondaryAmmo();
	bool UsesPrimaryAmmo();
	bool UsesSecondaryAmmo();
	void GiveDefaultAmmo();
	virtual bool CanHolster();
	virtual bool DefaultDeploy(char *, char *, Activity, char *);
	virtual bool CanDeploy();
	virtual bool Deploy();
	virtual bool Holster(CBaseCombatWeapon *);
	virtual CBaseCombatWeapon * GetLastWeapon();
	virtual void SetWeaponVisible(bool);
	virtual bool IsWeaponVisible();
	virtual bool ReloadOrSwitchWeapons();
	virtual bool CanSwitchAwayFrom();
	virtual void ItemPreFrame();
	virtual void ItemPostFrame();
	virtual void ItemBusyFrame();
	virtual void ItemHolsterFrame();
	virtual void WeaponIdle();
	virtual void HandleFireOnEmpty();
	virtual bool IsWeaponZoomed();
	virtual void CheckReload();
	virtual void FinishReload();
	virtual void AbortReload();
	virtual bool Reload();
	bool DefaultReload(int, int, Activity);
	bool IsReloading();
	virtual void PrimaryAttack();
	virtual void SecondaryAttack();
	virtual Vector ShootPosition();
	virtual void BaseForceFire(CBaseCombatCharacter *, CBaseEntity *);
	virtual Activity GetPrimaryAttackActivity();
	virtual Activity GetSecondaryAttackActivity();
	virtual Activity GetDrawActivity();
	virtual Activity GetReloadActivity();
	virtual float GetDefaultAnimSpeed();
	virtual int GetBulletType();
	virtual const Vector & GetBulletSpread();
	virtual Vector GetBulletSpread(WeaponProficiency_t);
	virtual float GetSpreadBias(WeaponProficiency_t);
	virtual float GetFireRate();
	virtual int GetMinBurst();
	virtual int GetMaxBurst();
	virtual float GetMinRestTime();
	virtual float GetMaxRestTime();
	virtual int GetRandomBurst();
	virtual void WeaponSound(WeaponSound_t, float);
	virtual const WeaponProficiencyInfo_t * GetProficiencyValues();
	virtual float GetMaxAutoAimDeflection();
	virtual float WeaponAutoAimScale();
	virtual bool StartSprinting();
	virtual bool StopSprinting();
	virtual float GetDamage(float, int);
	virtual void SetActivity(Activity, float);
	void SetActivity(Activity);
	Activity GetActivity();
	virtual void AddViewKick();
	virtual char * GetDeathNoticeName();
	CBaseCombatCharacter * GetOwner();
	void SetOwner(CBaseCombatCharacter *);
	virtual void OnPickedUp(CBaseCombatCharacter *);
	virtual void GetControlPanelInfo(int, const char * &);
	virtual void GetControlPanelClassName(int, const char * &);
	virtual bool ShouldShowControlPanels();
	void Lock(float, CBaseEntity *);
	bool IsLocked(CBaseEntity *);
	virtual bool CanBePickedUpByNPCs();
	const GameFileWeaponInfo_t & GetWpnData();
	virtual const char * GetViewModel(int);
	virtual const char * GetWorldModel();
	virtual const char * GetAnimPrefix();
	virtual int GetMaxClip1();
	virtual int GetMaxClip2();
	virtual int GetDefaultClip1();
	virtual int GetDefaultClip2();
	virtual int GetWeight();
	virtual bool AllowsAutoSwitchTo();
	virtual bool AllowsAutoSwitchFrom();
	virtual int GetWeaponFlags();
	virtual int GetSlot();
	virtual int GetPosition();
	virtual const char * GetName();
	virtual const char * GetPrintName();
	virtual const char * GetShootSound(int);
	virtual int GetRumbleEffect();
	virtual bool UsesClipsForAmmo1();
	virtual bool UsesClipsForAmmo2();
	virtual bool IsMeleeWeapon();
	virtual bool IsGrenade();
	virtual bool IsScriptWeapon();
	virtual const char * GetWeaponClassname();
	virtual void OnMouseWheel(int);
	virtual const unsigned char * GetEncryptionKey();
	virtual int GetPrimaryAmmoType();
	virtual int GetSecondaryAmmoType();
	int Clip1();
	int Clip2();
	int GetPrimaryAmmoCount();
	void SetPrimaryAmmoCount(int);
	int GetSecondaryAmmoCount();
	void SetSecondaryAmmoCount(int);
	virtual const CHudTexture * GetSpriteActive();
	virtual const CHudTexture * GetSpriteInactive();
	virtual const CHudTexture * GetSpriteSmall();
	virtual const CHudTexture * GetSpriteAmmo();
	virtual const CHudTexture * GetSpriteAmmo2();
	virtual const CHudTexture * GetSpriteCrosshair();
	virtual const CHudTexture * GetSpriteAutoaim();
	virtual const CHudTexture * GetSpriteZoomedCrosshair();
	virtual const CHudTexture * GetSpriteZoomedAutoaim();
	virtual const CHudTexture * GetSpriteDualActive();
	virtual const CHudTexture * GetSpriteDualInactive();
	virtual Activity ActivityOverride(Activity, bool *);
	virtual acttable_t * ActivityList();
	virtual int ActivityListCount();
	virtual int ObjectCaps();
	virtual float GetReloadDurationModifier();
	virtual float GetDeployDurationModifier();
	virtual AttachmentOverrideResult_t LookupOverrideAttachment(CUtlStringToken, AttachmentHandle_t *);
	virtual AttachmentOverrideResult_t GetOverrideAttachment(AttachmentHandle_t, matrix3x4_t *, bool *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void FallInit();
	virtual void FallThink();
	bool IsConstrained();
	bool IsInBadPosition();
	bool RepositionWeapon();
	virtual void Materialize();
	void AttemptToMaterialize();
	virtual void CheckRespawn();
	virtual CBaseEntity * Respawn();
	int GetAvailableWeaponsInBox( *, int, const Vector &, const Vector &);
	virtual void Delete();
	void DestroyItem();
	virtual void Kill();
	virtual int CapabilitiesGet();
	bool IsRemoveable();
	void SetRemoveable(bool);
	virtual void Operator_FrameUpdate(CBaseCombatCharacter *);
	virtual void Operator_HandleAnimEvent(animevent_t *, CBaseCombatCharacter *);
	virtual void Operator_ForceNPCFire(CBaseCombatCharacter *, bool, CBaseEntity *);
	virtual void HandleAnimEvent(animevent_t *);
	virtual int UpdateTransmitState();
	void InputHideWeapon(inputdata_t &);
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	virtual void MakeWeaponNameFromEntity(CBaseEntity *);
	virtual CBaseCombatCharacter * GetDroppingPlayer();
	virtual bool CanLower();
	virtual bool Ready();
	virtual bool Lower();
	virtual void HideThink();
	void SetupWeaponFileInfo();
	void QueueAttack(int);
	Activity GetIdealActivity();
	HSequence GetIdealSequence();
	bool SetIdealActivity(Activity, float);
	void MaintainIdealActivity();
	WeaponState_t WeaponState();
	IPhysicsConstraint * GetConstraint();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[28] HackToMakeAVTable
	// vtable[149] IsBaseCombatWeapon
	// vtable[150] MyCombatWeaponPointer
	// vtable[251] IsPredicted
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[200] PreFirstNetworkUpdate
	// vtable[10] Activate
	// vtable[131] MakeTracer
	// vtable[252] GetSubType
	// vtable[253] SetSubType
	// vtable[254] Equip
	// vtable[255] Drop
	// vtable[256] UpdateClientData
	// vtable[257] IsAllowedToSwitch
	// vtable[258] CanBeSelected
	// vtable[259] VisibleInWeaponSelection
	// vtable[260] HasAmmo
	// vtable[261] SetPickupTouch
	// vtable[262] DefaultTouch
	// vtable[263] ShouldDisplayAltFireHUDHint
	// vtable[264] DisplayAltFireHudHint
	// vtable[265] RescindAltFireHudHint
	// vtable[266] ShouldDisplayReloadHUDHint
	// vtable[267] DisplayReloadHudHint
	// vtable[268] RescindReloadHudHint
	// vtable[269] SetViewModelIndex
	// vtable[270] SendWeaponAnim
	// vtable[271] SendViewModelAnim
	// vtable[132] GetTracerAttachment
	// vtable[272] SetViewModel
	// vtable[273] HasWeaponIdleTimeElapsed
	// vtable[274] SetWeaponIdleTime
	// vtable[275] GetWeaponIdleTime
	// vtable[276] HasAnyAmmo
	// vtable[277] HasPrimaryAmmo
	// vtable[278] HasSecondaryAmmo
	// vtable[279] CanHolster
	// vtable[280] DefaultDeploy
	// vtable[281] CanDeploy
	// vtable[282] Deploy
	// vtable[283] Holster
	// vtable[284] GetLastWeapon
	// vtable[285] SetWeaponVisible
	// vtable[286] IsWeaponVisible
	// vtable[287] ReloadOrSwitchWeapons
	// vtable[288] CanSwitchAwayFrom
	// vtable[289] ItemPreFrame
	// vtable[290] ItemPostFrame
	// vtable[291] ItemBusyFrame
	// vtable[292] ItemHolsterFrame
	// vtable[293] WeaponIdle
	// vtable[294] HandleFireOnEmpty
	// vtable[295] IsWeaponZoomed
	// vtable[296] CheckReload
	// vtable[297] FinishReload
	// vtable[298] AbortReload
	// vtable[299] Reload
	// vtable[300] PrimaryAttack
	// vtable[301] SecondaryAttack
	// vtable[302] ShootPosition
	// vtable[303] BaseForceFire
	// vtable[304] GetPrimaryAttackActivity
	// vtable[305] GetSecondaryAttackActivity
	// vtable[306] GetDrawActivity
	// vtable[307] GetReloadActivity
	// vtable[308] GetDefaultAnimSpeed
	// vtable[309] GetBulletType
	// vtable[310] GetBulletSpread
	// vtable[311] GetBulletSpread
	// vtable[312] GetSpreadBias
	// vtable[313] GetFireRate
	// vtable[314] GetMinBurst
	// vtable[315] GetMaxBurst
	// vtable[316] GetMinRestTime
	// vtable[317] GetMaxRestTime
	// vtable[318] GetRandomBurst
	// vtable[319] WeaponSound
	// vtable[320] GetProficiencyValues
	// vtable[321] GetMaxAutoAimDeflection
	// vtable[322] WeaponAutoAimScale
	// vtable[323] StartSprinting
	// vtable[324] StopSprinting
	// vtable[325] GetDamage
	// vtable[326] SetActivity
	// vtable[327] AddViewKick
	// vtable[328] GetDeathNoticeName
	// vtable[329] OnPickedUp
	// vtable[330] GetControlPanelInfo
	// vtable[331] GetControlPanelClassName
	// vtable[332] ShouldShowControlPanels
	// vtable[333] CanBePickedUpByNPCs
	// vtable[334] GetViewModel
	// vtable[335] GetWorldModel
	// vtable[336] GetAnimPrefix
	// vtable[337] GetMaxClip1
	// vtable[338] GetMaxClip2
	// vtable[339] GetDefaultClip1
	// vtable[340] GetDefaultClip2
	// vtable[341] GetWeight
	// vtable[342] AllowsAutoSwitchTo
	// vtable[343] AllowsAutoSwitchFrom
	// vtable[344] GetWeaponFlags
	// vtable[345] GetSlot
	// vtable[346] GetPosition
	// vtable[347] GetName
	// vtable[348] GetPrintName
	// vtable[349] GetShootSound
	// vtable[350] GetRumbleEffect
	// vtable[351] UsesClipsForAmmo1
	// vtable[352] UsesClipsForAmmo2
	// vtable[353] IsMeleeWeapon
	// vtable[354] IsGrenade
	// vtable[355] IsScriptWeapon
	// vtable[356] GetWeaponClassname
	// vtable[357] OnMouseWheel
	// vtable[358] GetEncryptionKey
	// vtable[359] GetPrimaryAmmoType
	// vtable[360] GetSecondaryAmmoType
	// vtable[361] GetSpriteActive
	// vtable[362] GetSpriteInactive
	// vtable[363] GetSpriteSmall
	// vtable[364] GetSpriteAmmo
	// vtable[365] GetSpriteAmmo2
	// vtable[366] GetSpriteCrosshair
	// vtable[367] GetSpriteAutoaim
	// vtable[368] GetSpriteZoomedCrosshair
	// vtable[369] GetSpriteZoomedAutoaim
	// vtable[370] GetSpriteDualActive
	// vtable[371] GetSpriteDualInactive
	// vtable[372] ActivityOverride
	// vtable[373] ActivityList
	// vtable[374] ActivityListCount
	// vtable[19] ObjectCaps
	// vtable[375] GetReloadDurationModifier
	// vtable[376] GetDeployDurationModifier
	// vtable[377] LookupOverrideAttachment
	// vtable[378] GetOverrideAttachment
	// vtable[34] GetDataDescMap
	// vtable[379] FallInit
	// vtable[380] FallThink
	// vtable[381] Materialize
	// vtable[382] CheckRespawn
	// vtable[154] Respawn
	// vtable[383] Delete
	// vtable[384] Kill
	// vtable[385] CapabilitiesGet
	// vtable[386] Operator_FrameUpdate
	// vtable[387] Operator_HandleAnimEvent
	// vtable[388] Operator_ForceNPCFire
	// vtable[229] HandleAnimEvent
	// vtable[64] UpdateTransmitState
	// vtable[108] Use
	// vtable[389] MakeWeaponNameFromEntity
	// vtable[390] GetDroppingPlayer
	// vtable[391] CanLower
	// vtable[392] Ready
	// vtable[393] Lower
	// vtable[394] HideThink
	// sizeof = 1504
};
