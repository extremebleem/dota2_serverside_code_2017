// Reconstructed from DWARF by pahole; not original source.

// src/game/server/iservervehicle.h:23
class IServerVehicle : public IVehicle {
public:

private:

	~IServerVehicle();
	IServerVehicle(IServerVehicle &);
	IServerVehicle(const IServerVehicle &);
	IServerVehicle();

	virtual CBaseEntity * GetVehicleEnt();
	virtual void SetPassenger(int, CBaseCombatCharacter *);
	virtual bool IsPassengerVisible(int);
	virtual bool IsPassengerDamagable(int);
	virtual bool PassengerShouldReceiveDamage(CTakeDamageInfo &);
	virtual bool IsVehicleUpright();
	virtual bool IsPassengerEntering();
	virtual bool IsPassengerExiting();
	virtual void GetPassengerSeatPoint(int, Vector *, QAngle *);
	virtual void HandlePassengerEntry(CBaseCombatCharacter *, bool);
	virtual bool HandlePassengerExit(CBaseCombatCharacter *);
	virtual bool GetPassengerExitPoint(int, Vector *, QAngle *);
	virtual HSequence GetEntryAnimForPoint(const Vector &);
	virtual HSequence GetExitAnimToUse(Vector &, bool &);
	virtual void HandleEntryExitFinish(bool, bool);
	virtual Class_T ClassifyPassenger(CBaseCombatCharacter *, Class_T);
	virtual float PassengerDamageModifier(const CTakeDamageInfo &);
	virtual const vehicleparams_t * GetVehicleParams();
	virtual IPhysicsVehicleController * GetVehicleController();
	virtual int NPC_GetAvailableSeat(CBaseCombatCharacter *, string_t, VehicleSeatQuery_e);
	virtual bool NPC_AddPassenger(CBaseCombatCharacter *, string_t, int);
	virtual bool NPC_RemovePassenger(CBaseCombatCharacter *);
	virtual bool NPC_GetPassengerSeatPosition(CBaseCombatCharacter *, Vector *, QAngle *);
	virtual bool NPC_GetPassengerSeatPositionLocal(CBaseCombatCharacter *, Vector *, QAngle *);
	virtual int NPC_GetPassengerSeatAttachment(CBaseCombatCharacter *);
	virtual bool NPC_HasAvailableSeat(string_t);
	virtual const PassengerSeatAnims_t * NPC_GetPassengerSeatAnims(CBaseCombatCharacter *, PassengerSeatAnimType_t);
	virtual CBaseCombatCharacter * NPC_GetPassengerInSeat(int, int);
	virtual void RestorePassengerInfo();
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
	virtual void ReloadScript();

	// vtable[0] Schema_DynamicBinding
	// vtable[9] GetVehicleEnt
	// vtable[10] SetPassenger
	// vtable[11] IsPassengerVisible
	// vtable[12] IsPassengerDamagable
	// vtable[13] PassengerShouldReceiveDamage
	// vtable[14] IsVehicleUpright
	// vtable[15] IsPassengerEntering
	// vtable[16] IsPassengerExiting
	// vtable[17] GetPassengerSeatPoint
	// vtable[18] HandlePassengerEntry
	// vtable[19] HandlePassengerExit
	// vtable[20] GetPassengerExitPoint
	// vtable[21] GetEntryAnimForPoint
	// vtable[22] GetExitAnimToUse
	// vtable[23] HandleEntryExitFinish
	// vtable[24] ClassifyPassenger
	// vtable[25] PassengerDamageModifier
	// vtable[26] GetVehicleParams
	// vtable[27] GetVehicleController
	// vtable[28] NPC_GetAvailableSeat
	// vtable[29] NPC_AddPassenger
	// vtable[30] NPC_RemovePassenger
	// vtable[31] NPC_GetPassengerSeatPosition
	// vtable[32] NPC_GetPassengerSeatPositionLocal
	// vtable[33] NPC_GetPassengerSeatAttachment
	// vtable[34] NPC_HasAvailableSeat
	// vtable[35] NPC_GetPassengerSeatAnims
	// vtable[36] NPC_GetPassengerInSeat
	// vtable[37] RestorePassengerInfo
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
	// vtable[58] ReloadScript
	// sizeof = 8
};

// src/game/server/iservervehicle.h:112
class IDrivableVehicle {
	int ()() * * _vptr.IDrivableVehicle;  // +0x0
	IDrivableVehicle(IDrivableVehicle &);
	IDrivableVehicle(const IDrivableVehicle &);
	~IDrivableVehicle();
	IDrivableVehicle();
	virtual CBaseEntity * GetDriver();
	const CBaseEntity * GetDriver();
	virtual void ItemPostFrame(CBasePlayer *);
	virtual void SetupMove(CBasePlayer *, CUserCmd *, IMoveHelper *, CMoveData *);
	virtual void ProcessMovement(CBasePlayer *, CMoveData *);
	virtual void FinishMove(CBasePlayer *, CUserCmd *, CMoveData *);
	virtual bool CanEnterVehicle(CBaseEntity *);
	virtual bool CanExitVehicle(CBaseEntity *);
	virtual void SetVehicleEntryAnim(bool);
	virtual void SetVehicleExitAnim(bool, Vector);
	virtual void EnterVehicle(CBaseCombatCharacter *);
	virtual void PreExitVehicle(CBaseCombatCharacter *, int);
	virtual void ExitVehicle(int);
	virtual bool AllowBlockedExit(CBaseCombatCharacter *, int);
	virtual bool AllowMidairExit(CBaseCombatCharacter *, int);
	virtual string_t GetVehicleScriptName();
	virtual bool PassengerShouldReceiveDamage(CTakeDamageInfo &);

	// vtable[0] GetDriver
	// vtable[1] ItemPostFrame
	// vtable[2] SetupMove
	// vtable[3] ProcessMovement
	// vtable[4] FinishMove
	// vtable[5] CanEnterVehicle
	// vtable[6] CanExitVehicle
	// vtable[7] SetVehicleEntryAnim
	// vtable[8] SetVehicleExitAnim
	// vtable[9] EnterVehicle
	// vtable[10] PreExitVehicle
	// vtable[11] ExitVehicle
	// vtable[12] AllowBlockedExit
	// vtable[13] AllowMidairExit
	// vtable[14] GetVehicleScriptName
	// vtable[15] PassengerShouldReceiveDamage
	// sizeof = 8
};
