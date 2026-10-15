// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/ivehicle.h:24
class IVehicle {
	int ()() * * _vptr.IVehicle;  // +0x0
private:

	IVehicle(IVehicle &);
	IVehicle(const IVehicle &);
	IVehicle();

	virtual CBaseCombatCharacter * GetPassenger(int);
	virtual int GetPassengerRole(const CBaseCombatCharacter *);
	virtual void GetVehicleViewPosition(int, Vector *, QAngle *, float *);
	virtual bool IsPassengerUsingStandardWeapons(int);
	virtual void SetupMove(CBasePlayer *, CUserCmd *, IMoveHelper *, CMoveData *);
	virtual void ProcessMovement(CBasePlayer *, CMoveData *);
	virtual void FinishMove(CBasePlayer *, CUserCmd *, CMoveData *);
	virtual void ItemPostFrame(CBasePlayer *);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] GetPassenger
	// vtable[2] GetPassengerRole
	// vtable[3] GetVehicleViewPosition
	// vtable[4] IsPassengerUsingStandardWeapons
	// vtable[5] SetupMove
	// vtable[6] ProcessMovement
	// vtable[7] FinishMove
	// vtable[8] ItemPostFrame
	// sizeof = 8
};
