// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_mode_assemble_with_humans.h:16
class CDOTA_BotMode_AssembleWithHumans : public CDOTA_BotMode {
public:

private:

	EHANDLE m_hTarget;  // +0xe0
	CDOTA_BotMode_AssembleWithHumans(CDOTA_BotMode_AssembleWithHumans &);
	CDOTA_BotMode_AssembleWithHumans(const CDOTA_BotMode_AssembleWithHumans &);
	CDOTA_BotMode_AssembleWithHumans(CDOTA_Bot *);
	virtual DOTA_BOT_MODE GetModeType();
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	virtual color24 GetDebugColor();
	virtual const char * GetDebugString();
	virtual ~CDOTA_BotMode_AssembleWithHumans();

	// vtable[2] GetModeType
	// vtable[3] OnStart
	// vtable[4] OnEnd
	// vtable[5] Think
	// vtable[10] GetDesire
	// vtable[15] CalculateDesiredLocation
	// vtable[12] GetDebugColor
	// vtable[13] GetDebugString
	// sizeof = 232
};
