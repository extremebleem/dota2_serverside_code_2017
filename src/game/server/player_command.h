// Reconstructed from DWARF by pahole; not original source.

// src/game/server/player_command.h:23
class CPlayerMove {
	int ()() * * _vptr.CPlayerMove;  // +0x0
	CPlayerMove(const CPlayerMove &);
	CPlayerMove();
	virtual ~CPlayerMove();
	virtual void RunCommand(CBasePlayer *, CUserCmd *, IMoveHelper *);

protected:

	virtual void SetupMove(CBasePlayer *, CUserCmd *, IMoveHelper *, CMoveData *);
	virtual void FinishMove(CBasePlayer *, CUserCmd *, CMoveData *);
	virtual void StartCommand(CBasePlayer *, CUserCmd *);
	void FinishCommand(CBasePlayer *);
	void CheckMovingGround(CBasePlayer *, double);
	void RunPreThink(CBasePlayer *);
	void RunThink(CBasePlayer *, double);
	void RunPostThink(CBasePlayer *);

	// vtable[2] RunCommand
	// vtable[3] SetupMove
	// vtable[4] FinishMove
	// vtable[5] StartCommand
	// sizeof = 8
};
