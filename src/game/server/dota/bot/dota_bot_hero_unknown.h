// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_unknown.h:16
class CDOTA_Bot_Hero_Unknown : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Unknown(CDOTA_Bot_Hero_Unknown &);
	CDOTA_Bot_Hero_Unknown(CDOTA_Bot_Hero_Unknown &);
	CDOTA_Bot_Hero_Unknown(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual ~CDOTA_Bot_Hero_Unknown();

	// sizeof = 34480
};

// src/game/server/dota/bot/dota_bot_hero_unknown.h:26
class CDOTA_Bot_Unit_GenericMinion : public CDOTA_Bot {
public:

	CDOTA_Bot_Unit_GenericMinion(CDOTA_Bot_Unit_GenericMinion &);
	CDOTA_Bot_Unit_GenericMinion(CDOTA_Bot_Unit_GenericMinion &);
	CDOTA_Bot_Unit_GenericMinion(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual DOTA_BOT_MODE GetInitialMode();
	virtual CDOTA_BotMode * CreateMode(int);
	virtual ~CDOTA_Bot_Unit_GenericMinion();

	// vtable[4] GetInitialMode
	// vtable[12] CreateMode
	// sizeof = 34480
};

// src/game/server/dota/bot/dota_bot_hero_unknown.h:41
class CDOTA_BotMode_GenericMinion : public CDOTA_BotMode {
public:

	CDOTA_BotMode_GenericMinion(CDOTA_BotMode_GenericMinion &);
	CDOTA_BotMode_GenericMinion(const CDOTA_BotMode_GenericMinion &);
	CDOTA_BotMode_GenericMinion(CDOTA_Bot *);
	virtual DOTA_BOT_MODE GetModeType();
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual float GetDesire();
	virtual const char * GetDebugString();
	virtual color24 GetDebugColor();
	virtual Vector CalculateDesiredLocation();
	virtual ~CDOTA_BotMode_GenericMinion();

	// vtable[2] GetModeType
	// vtable[3] OnStart
	// vtable[4] OnEnd
	// vtable[5] Think
	// vtable[10] GetDesire
	// vtable[13] GetDebugString
	// vtable[12] GetDebugColor
	// vtable[15] CalculateDesiredLocation
	// sizeof = 224
};

// src/game/server/dota/bot/dota_bot_hero_unknown.h:63
class CDOTA_BotModeMinionNone : public CDOTA_BotMode {
public:

	CDOTA_BotModeMinionNone(CDOTA_Bot *);
	virtual DOTA_BOT_MODE GetModeType();
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual float GetDesire();
	virtual const char * GetDebugString();
	virtual color24 GetDebugColor();
	virtual Vector CalculateDesiredLocation();
	virtual ~CDOTA_BotModeMinionNone();

	// vtable[2] GetModeType
	// vtable[3] OnStart
	// vtable[4] OnEnd
	// vtable[5] Think
	// vtable[10] GetDesire
	// vtable[13] GetDebugString
	// vtable[12] GetDebugColor
	// vtable[15] CalculateDesiredLocation
	// sizeof = 224
};
