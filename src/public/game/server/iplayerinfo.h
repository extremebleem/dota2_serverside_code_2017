// Reconstructed from DWARF by pahole; not original source.

// src/public/game/server/iplayerinfo.h:15
class CBotCmd {
	int ()() * * _vptr.CBotCmd;  // +0x0
	int command_number;  // +0x8
	int tick_count;  // +0xc
	float forwardmove;  // +0x1c
	float sidemove;  // +0x20
	float upmove;  // +0x24
	int buttons;  // +0x28
	uint8 impulse;  // +0x2c

	int weaponselect;  // +0x30
	int weaponsubtype;  // +0x34
	int random_seed;  // +0x38
	short int mousedx;  // +0x3c
	short int mousedy;  // +0x3e
	bool hasbeenpredicted;  // +0x40
	CBotCmd();
	virtual ~CBotCmd();
	void Reset();
	CBotCmd & operator=(const CBotCmd &);

	// sizeof = 72
};

// src/public/game/server/iplayerinfo.h:101
class IPlayerInfo {
	int ()() * * _vptr.IPlayerInfo;  // +0x0
private:

	IPlayerInfo(IPlayerInfo &);
	IPlayerInfo(const IPlayerInfo &);
	IPlayerInfo();

	virtual const char * GetName();
	virtual int GetUserID();
	virtual const char * GetNetworkIDString();
	virtual int GetTeamIndex();
	virtual void ChangeTeam(int);
	virtual int GetFragCount();
	virtual int GetDeathCount();
	virtual bool IsConnected();
	virtual int GetArmorValue();
	virtual bool IsPlayer();
	virtual bool IsFakeClient();
	virtual bool IsDead();
	virtual bool IsInAVehicle();
	virtual bool IsObserver();
	virtual const Vector GetAbsOrigin();
	virtual const QAngle GetAbsAngles();
	virtual const Vector GetPlayerMins();
	virtual const Vector GetPlayerMaxs();
	virtual const char * GetWeaponName();
	virtual const char * GetModelName();
	virtual const int GetHealth();
	virtual const int GetMaxHealth();
	virtual CBotCmd GetLastUserCommand();
	IPlayerInfo & operator=(const IPlayerInfo &);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] GetName
	// vtable[2] GetUserID
	// vtable[3] GetNetworkIDString
	// vtable[4] GetTeamIndex
	// vtable[5] ChangeTeam
	// vtable[6] GetFragCount
	// vtable[7] GetDeathCount
	// vtable[8] IsConnected
	// vtable[9] GetArmorValue
	// vtable[10] IsPlayer
	// vtable[11] IsFakeClient
	// vtable[12] IsDead
	// vtable[13] IsInAVehicle
	// vtable[14] IsObserver
	// vtable[15] GetAbsOrigin
	// vtable[16] GetAbsAngles
	// vtable[17] GetPlayerMins
	// vtable[18] GetPlayerMaxs
	// vtable[19] GetWeaponName
	// vtable[20] GetModelName
	// vtable[21] GetHealth
	// vtable[22] GetMaxHealth
	// vtable[23] GetLastUserCommand
	// sizeof = 8
};

// src/public/game/server/iplayerinfo.h:152
class IPlayerInfoManager {
	int ()() * * _vptr.IPlayerInfoManager;  // +0x0
	IPlayerInfoManager(IPlayerInfoManager &);
	IPlayerInfoManager(const IPlayerInfoManager &);
	IPlayerInfoManager();
	virtual IPlayerInfo * GetPlayerInfo(CEntityIndex);
	virtual CGlobalVars * GetGlobalVars();

	// vtable[0] GetPlayerInfo
	// vtable[1] GetGlobalVars
	// sizeof = 8
};

// src/public/game/server/iplayerinfo.h:162
class IBotController {
	int ()() * * _vptr.IBotController;  // +0x0
private:

	IBotController(IBotController &);
	IBotController(const IBotController &);
	IBotController();

	virtual void SetAbsOrigin(Vector &);
	virtual void SetAbsAngles(QAngle &);
	virtual void SetLocalOrigin(const Vector &);
	virtual const Vector GetLocalOrigin();
	virtual void SetLocalAngles(const QAngle &);
	virtual const QAngle GetLocalAngles();
	virtual void RemoveAllItems(bool);
	virtual void SetActiveWeapon(const char *);
	virtual bool IsEFlagSet(int);
	virtual void RunPlayerMove(CBotCmd *);
	IBotController & operator=(const IBotController &);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] SetAbsOrigin
	// vtable[2] SetAbsAngles
	// vtable[3] SetLocalOrigin
	// vtable[4] GetLocalOrigin
	// vtable[5] SetLocalAngles
	// vtable[6] GetLocalAngles
	// vtable[7] RemoveAllItems
	// vtable[8] SetActiveWeapon
	// vtable[9] IsEFlagSet
	// vtable[10] RunPlayerMove
	// sizeof = 8
};

// src/public/game/server/iplayerinfo.h:185
class IBotManager {
	int ()() * * _vptr.IBotManager;  // +0x0
	IBotManager(IBotManager &);
	IBotManager(const IBotManager &);
	IBotManager();
	virtual IBotController * GetBotController(CEntityIndex);
	virtual CEntityIndex CreateBot(const char *);

	// vtable[0] GetBotController
	// vtable[1] CreateBot
	// sizeof = 8
};
