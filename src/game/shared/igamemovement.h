// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/igamemovement.h:32
class CMoveData {
	bool m_bFirstRunOfFunctions:1;  // +0x0:0
	bool m_bGameCodeMovedPlayer:1;  // +0x0:1
	bool m_bAirControl:1;  // +0x0:2

	EntityHandle_t m_nPlayerHandle;  // +0x4
	int m_nImpulseCommand;  // +0x8

	ButtonBitMask_t m_nButtons;  // +0x28
	int m_nOldButtons;  // +0x30
	float m_flForwardMove;  // +0x34
	float m_flSideMove;  // +0x38
	float m_flUpMove;  // +0x3c
	float m_flMaxSpeed;  // +0x40
	float m_flClientMaxSpeed;  // +0x44
	float m_outStepHeight;  // +0x6c
	float m_flConstraintRadius;  // +0x94
	float m_flConstraintWidth;  // +0x98
	float m_flConstraintSpeedFactor;  // +0x9c
	bool m_bConstraintPastRadius;  // +0xa0

private:

	CMoveData();
	void SetVelocity(const Vector &);
	Vector GetVelocity();
	void SetAbsOrigin(const Vector &);
	const Vector & GetAbsOrigin();

	// sizeof = 176
};

// src/game/shared/igamemovement.h:111
class IGameMovement {
	int ()() * * _vptr.IGameMovement;  // +0x0
	IGameMovement();
	virtual ~IGameMovement();
	virtual bool Init();
	virtual void Shutdown();
	virtual void ProcessMovement(CBasePlayer *, CMoveData *);
	virtual void Reset();
	virtual void StartTrackPredictionErrors(CBasePlayer *);
	virtual void FinishTrackPredictionErrors(CBasePlayer *);
	virtual void DiffPrint(const char *, ...);
	virtual const Vector & GetPlayerMins(bool);
	virtual const Vector & GetPlayerMaxs(bool);
	virtual const Vector & GetPlayerViewOffset(bool);

	// vtable[2] Init
	// vtable[3] Shutdown
	// vtable[4] ProcessMovement
	// vtable[5] Reset
	// vtable[6] StartTrackPredictionErrors
	// vtable[7] FinishTrackPredictionErrors
	// vtable[8] DiffPrint
	// vtable[9] GetPlayerMins
	// vtable[10] GetPlayerMaxs
	// vtable[11] GetPlayerViewOffset
	// sizeof = 8
};
