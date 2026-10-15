// Reconstructed from DWARF by pahole; not original source.

// src/game/server/ilagcompensationmanager.h:27
class ILagCompensationManager {
	int ()() * * _vptr.ILagCompensationManager;  // +0x0
	ILagCompensationManager(ILagCompensationManager &);
	ILagCompensationManager(const ILagCompensationManager &);
	~ILagCompensationManager();
	ILagCompensationManager();
	virtual void StartLagCompensation(CBasePlayer *, LagCompensationType, const Vector &, const QAngle &, float);
	virtual void FinishLagCompensation(CBasePlayer *);
	virtual void AddAdditionalEntity(CBaseEntity *);
	virtual void RemoveAdditionalEntity(CBaseEntity *);
	virtual bool IsCurrentlyDoingLagCompensation();

	// vtable[0] StartLagCompensation
	// vtable[1] FinishLagCompensation
	// vtable[2] AddAdditionalEntity
	// vtable[3] RemoveAdditionalEntity
	// vtable[4] IsCurrentlyDoingLagCompensation
	// sizeof = 8
};
