// Reconstructed from DWARF by pahole; not original source.

// src/game/server/vehicle_baseserver.h:18
struct vbs_sound_update_t {
	float flFrameTime;  // +0x0
	float flCurrentSpeedFraction;  // +0x4
	float flWorldSpaceSpeed;  // +0x8
	bool bThrottleDown;  // +0xc
	bool bReverse;  // +0xd
	bool bTurbo;  // +0xe
	bool bVehicleInWater;  // +0xf
	bool bExitVehicle;  // +0x10
	void Defaults();

	// sizeof = 20
};

// src/game/server/vehicle_baseserver.h:45
class CPassengerInfo {
private:

	static datamap_t m_DataMap;

	int m_nRole;  // +0x0
	int m_nSeat;  // +0x4
	string_t m_strRoleName;  // +0x8
	string_t m_strSeatName;  // +0x10

	CPassengerInfo();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	int GetSeat();
	int GetRole();
	CBaseCombatCharacter * GetPassenger();
	CPassengerInfo & operator=(const CPassengerInfo &);

	// sizeof = 32
};

// src/game/server/vehicle_baseserver.h:72
class CPassengerSeatTransition {
private:

	string_t m_strAnimationName;  // +0x0
	int m_nPriority;  // +0x8

	CPassengerSeatTransition();
	string_t GetAnimationName();
	int GetPriority();
	CPassengerSeatTransition & operator=(const CPassengerSeatTransition &);

	// sizeof = 16
};

// src/game/server/vehicle_baseserver.h:91
class CPassengerSeat {
private:

	string_t m_strSeatName;  // +0x0
	int m_nAttachmentID;  // +0x8

	CPassengerSeat();
	int GetAttachmentID();
	~CPassengerSeat();
	CPassengerSeat & operator=(const CPassengerSeat &);

	// sizeof = 64
};

// src/game/server/vehicle_baseserver.h:111
class CPassengerRole {
private:

	string_t m_strName;  // +0x0

	CPassengerRole();
	string_t GetName();
	~CPassengerRole();
	CPassengerRole & operator=(const CPassengerRole &);

	// sizeof = 32
};

// src/game/server/vehicle_baseserver.h:129
class CBaseServerVehicle : public IServerVehicle {
	struct entryanim_t {
	private:

		int iHitboxGroup;  // +0x0
		char szAnimName[128];  // +0x4

		// sizeof = 132
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct exitanim_t {
	private:

		bool bUpright;  // +0x0
		bool bEscapeExit;  // +0x1
		char szAnimName[128];  // +0x2

		exitanim_t();

		// sizeof = 156
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

private:

	static datamap_t m_DataMap;

protected:

	int m_nNPCButtons;  // +0x48
	int m_nPrevNPCButtons;  // +0x4c
	float m_flTurnDegrees;  // +0x50

	bool m_bParsedAnimations;  // +0x88
	bool m_bUseLegacyExitChecks;  // +0x89

	int m_iCurrentExitAnim;  // +0x8c
	char m_chPreviousTextureType;  // +0xac

private:

	float m_flVehicleVolume;  // +0x220
	int m_iSoundGear;  // +0x224
	float m_flSpeedPercentage;  // +0x228

	float m_soundStateStartTime;  // +0x244
	float m_lastSpeed;  // +0x248
	CBaseServerVehicle(const CBaseServerVehicle &);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	CBaseServerVehicle();
	~CBaseServerVehicle();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual CBaseCombatCharacter * GetPassenger(int);
	virtual const CBaseCombatCharacter * GetPassenger(int);
	virtual int GetPassengerRole(const CBaseCombatCharacter *);
	virtual void GetVehicleViewPosition(int, Vector *, QAngle *, float *);
	virtual bool IsPassengerUsingStandardWeapons(int);
	virtual void SetupMove(CBasePlayer *, CUserCmd *, IMoveHelper *, CMoveData *);
	virtual void ProcessMovement(CBasePlayer *, CMoveData *);
	virtual void FinishMove(CBasePlayer *, CUserCmd *, CMoveData *);
	virtual void ItemPostFrame(CBasePlayer *);
	virtual CBaseEntity * GetVehicleEnt();
	virtual void SetPassenger(int, CBaseCombatCharacter *);
	virtual bool IsPassengerVisible(int);
	virtual bool IsPassengerDamagable(int);
	virtual bool PassengerShouldReceiveDamage(CTakeDamageInfo &);
	virtual bool IsVehicleUpright();
	virtual bool IsPassengerEntering();
	virtual bool IsPassengerExiting();
	virtual void HandlePassengerEntry(CBaseCombatCharacter *, bool);
	virtual bool HandlePassengerExit(CBaseCombatCharacter *);
	virtual void GetPassengerSeatPoint(int, Vector *, QAngle *);
	virtual bool GetPassengerExitPoint(int, Vector *, QAngle *);
	virtual Class_T ClassifyPassenger(CBaseCombatCharacter *, Class_T);
	virtual float PassengerDamageModifier(const CTakeDamageInfo &);
	virtual const vehicleparams_t * GetVehicleParams();
	virtual bool IsVehicleBodyInWater();
	virtual IPhysicsVehicleController * GetVehicleController();
	virtual bool NPC_CanDrive();
	virtual void NPC_SetDriver(CNPC_VehicleDriver *);
	virtual void NPC_DriveVehicle();
	virtual void NPC_ThrottleCenter();
	virtual void NPC_ThrottleReverse();
	virtual void NPC_ThrottleForward();
	virtual void NPC_Brake();
	virtual void NPC_TurnLeft(float);
	virtual void NPC_TurnRight(float);
	virtual void NPC_TurnCenter();
	virtual void NPC_PrimaryFire();
	virtual void NPC_SecondaryFire();
	virtual bool NPC_HasPrimaryWeapon();
	virtual bool NPC_HasSecondaryWeapon();
	virtual void NPC_AimPrimaryWeapon(Vector);
	virtual void NPC_AimSecondaryWeapon(Vector);
	virtual void Weapon_PrimaryRanges(float *, float *);
	virtual void Weapon_SecondaryRanges(float *, float *);
	virtual float Weapon_PrimaryCanFireAt();
	virtual float Weapon_SecondaryCanFireAt();
	virtual bool NPC_AddPassenger(CBaseCombatCharacter *, string_t, int);
	virtual bool NPC_RemovePassenger(CBaseCombatCharacter *);
	virtual bool NPC_GetPassengerSeatPosition(CBaseCombatCharacter *, Vector *, QAngle *);
	virtual bool NPC_GetPassengerSeatPositionLocal(CBaseCombatCharacter *, Vector *, QAngle *);
	virtual int NPC_GetPassengerSeatAttachment(CBaseCombatCharacter *);
	virtual int NPC_GetAvailableSeat(CBaseCombatCharacter *, string_t, VehicleSeatQuery_e);
	virtual bool NPC_HasAvailableSeat(string_t);
	virtual const PassengerSeatAnims_t * NPC_GetPassengerSeatAnims(CBaseCombatCharacter *, PassengerSeatAnimType_t);
	virtual CBaseCombatCharacter * NPC_GetPassengerInSeat(int, int);
	Vector GetSavedViewOffset();
	void ParseNPCRoles(KeyValues *);
	void ParseNPCPassengerSeat(KeyValues *, CPassengerSeat *);
	void ParseNPCSeatTransition(KeyValues *, CPassengerSeatTransition *);

protected:

	int FindRoleIndexByName(string_t);
	int FindSeatIndexByName(int, string_t);
	int NPC_GetAvailableSeat_Any(CBaseCombatCharacter *, int);
	int NPC_GetAvailableSeat_Nearest(CBaseCombatCharacter *, int);
	CPassengerRole * FindOrCreatePassengerRole(string_t, int *);
	virtual void ReloadScript();
	void UseLegacyExitChecks(bool);
	virtual void RestorePassengerInfo();
	virtual CBaseEntity * GetDriver();
	virtual void ParseEntryExitAnims();
	void ParseExitAnim(KeyValues *, bool);
	virtual bool CheckExitPoint(float, int, Vector *);
	virtual HSequence GetEntryAnimForPoint(const Vector &);
	virtual HSequence GetExitAnimToUse(Vector &, bool &);
	virtual void HandleEntryExitFinish(bool, bool);
	virtual void SetVehicle(CBaseEntity *);
	IDrivableVehicle * GetDrivableVehicle();
	const IDrivableVehicle * GetDrivableVehicle();
	bool Initialize(const char *);
	virtual void SoundStart();
	virtual void SoundStartDisabled();
	virtual void SoundShutdown(float);
	virtual void SoundUpdate(vbs_sound_update_t &);
	virtual void PlaySound(vehiclesound);
	virtual void StopSound(vehiclesound);
	virtual void RecalculateSoundGear(vbs_sound_update_t &);
	void SetVehicleVolume(float);
	virtual void StartEngineRumble();
	virtual void StopEngineRumble();

private:

	void SoundState_OnNewState(sound_states);
	void SoundState_Update(vbs_sound_update_t &);
	sound_states SoundState_ChooseState(vbs_sound_update_t &);
	void PlaySound(const char *);
	void StopLoopingSound(float);
	void PlayLoopingSound(const char *);
	bool PlayCrashSound(float);
	bool CheckCrash(vbs_sound_update_t &);
	const char * StateSoundName(sound_states);
	void InitSoundParams(vbs_sound_update_t &);
	void CacheEntryExitPoints();
	bool GetLocalAttachmentAtTime(HSequence, int, float, Vector *, QAngle *);
	bool GetLocalAttachmentAtTime(const char *, int, float, Vector *, QAngle *);

	// vtable[0] Schema_DynamicBinding
	// vtable[59] Precache
	// vtable[1] GetPassenger
	// vtable[60] GetPassenger
	// vtable[2] GetPassengerRole
	// vtable[3] GetVehicleViewPosition
	// vtable[4] IsPassengerUsingStandardWeapons
	// vtable[5] SetupMove
	// vtable[6] ProcessMovement
	// vtable[7] FinishMove
	// vtable[8] ItemPostFrame
	// vtable[9] GetVehicleEnt
	// vtable[10] SetPassenger
	// vtable[11] IsPassengerVisible
	// vtable[12] IsPassengerDamagable
	// vtable[13] PassengerShouldReceiveDamage
	// vtable[14] IsVehicleUpright
	// vtable[15] IsPassengerEntering
	// vtable[16] IsPassengerExiting
	// vtable[18] HandlePassengerEntry
	// vtable[19] HandlePassengerExit
	// vtable[17] GetPassengerSeatPoint
	// vtable[20] GetPassengerExitPoint
	// vtable[24] ClassifyPassenger
	// vtable[25] PassengerDamageModifier
	// vtable[26] GetVehicleParams
	// vtable[61] IsVehicleBodyInWater
	// vtable[27] GetVehicleController
	// vtable[38] NPC_CanDrive
	// vtable[39] NPC_SetDriver
	// vtable[40] NPC_DriveVehicle
	// vtable[41] NPC_ThrottleCenter
	// vtable[42] NPC_ThrottleReverse
	// vtable[43] NPC_ThrottleForward
	// vtable[44] NPC_Brake
	// vtable[45] NPC_TurnLeft
	// vtable[46] NPC_TurnRight
	// vtable[47] NPC_TurnCenter
	// vtable[48] NPC_PrimaryFire
	// vtable[49] NPC_SecondaryFire
	// vtable[50] NPC_HasPrimaryWeapon
	// vtable[51] NPC_HasSecondaryWeapon
	// vtable[52] NPC_AimPrimaryWeapon
	// vtable[53] NPC_AimSecondaryWeapon
	// vtable[54] Weapon_PrimaryRanges
	// vtable[55] Weapon_SecondaryRanges
	// vtable[56] Weapon_PrimaryCanFireAt
	// vtable[57] Weapon_SecondaryCanFireAt
	// vtable[29] NPC_AddPassenger
	// vtable[30] NPC_RemovePassenger
	// vtable[31] NPC_GetPassengerSeatPosition
	// vtable[32] NPC_GetPassengerSeatPositionLocal
	// vtable[33] NPC_GetPassengerSeatAttachment
	// vtable[28] NPC_GetAvailableSeat
	// vtable[34] NPC_HasAvailableSeat
	// vtable[35] NPC_GetPassengerSeatAnims
	// vtable[36] NPC_GetPassengerInSeat
	// vtable[58] ReloadScript
	// vtable[37] RestorePassengerInfo
	// vtable[62] GetDriver
	// vtable[63] ParseEntryExitAnims
	// vtable[64] CheckExitPoint
	// vtable[21] GetEntryAnimForPoint
	// vtable[22] GetExitAnimToUse
	// vtable[23] HandleEntryExitFinish
	// vtable[65] SetVehicle
	// vtable[66] SoundStart
	// vtable[67] SoundStartDisabled
	// vtable[68] SoundShutdown
	// vtable[69] SoundUpdate
	// vtable[70] PlaySound
	// vtable[71] StopSound
	// vtable[72] RecalculateSoundGear
	// vtable[73] StartEngineRumble
	// vtable[74] StopEngineRumble
	// sizeof = 592
};
