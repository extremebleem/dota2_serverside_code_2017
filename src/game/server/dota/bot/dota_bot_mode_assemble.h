// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_mode_assemble.h:16
class CDOTA_BotMode_Assemble : public CDOTA_BotMode {
public:

	CDOTA_BotMode_Assemble(CDOTA_BotMode_Assemble &);
	CDOTA_BotMode_Assemble(const CDOTA_BotMode_Assemble &);
	CDOTA_BotMode_Assemble(CDOTA_Bot *);
	virtual DOTA_BOT_MODE GetModeType();
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	virtual color24 GetDebugColor();
	virtual const char * GetDebugString();
	virtual ~CDOTA_BotMode_Assemble();

	// vtable[2] GetModeType
	// vtable[3] OnStart
	// vtable[4] OnEnd
	// vtable[5] Think
	// vtable[10] GetDesire
	// vtable[15] CalculateDesiredLocation
	// vtable[12] GetDebugColor
	// vtable[13] GetDebugString
	// sizeof = 224
};

// src/game/server/dota/bot/dota_bot_mode_assemble.h:41
class CDOTA_BotMode_Assemble_Human : public CDOTA_BotMode_Assemble {
public:

	CDOTA_BotMode_Assemble_Human(CDOTA_BotMode_Assemble_Human &);
	CDOTA_BotMode_Assemble_Human(const CDOTA_BotMode_Assemble_Human &);
	CDOTA_BotMode_Assemble_Human(CDOTA_Bot *);
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	virtual const char * GetDebugString();
	virtual ~CDOTA_BotMode_Assemble_Human();

	// vtable[3] OnStart
	// vtable[4] OnEnd
	// vtable[5] Think
	// vtable[10] GetDesire
	// vtable[15] CalculateDesiredLocation
	// vtable[13] GetDebugString
	// sizeof = 224
};
