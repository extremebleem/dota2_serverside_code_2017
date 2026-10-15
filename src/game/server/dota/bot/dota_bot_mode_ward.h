// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_mode_ward.h:15
class CDOTA_BotMode_Ward : public CDOTA_BotMode {
public:

private:

	CDOTA_BotMode_Ward(CDOTA_BotMode_Ward &);
	CDOTA_BotMode_Ward(const CDOTA_BotMode_Ward &);
	CDOTA_BotMode_Ward(CDOTA_Bot *);
	virtual DOTA_BOT_MODE GetModeType();
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	Vector GetWardLocation();
	virtual color24 GetDebugColor();
	virtual const char * GetDebugString();
	bool FindBestWardLocation(Vector *);
	bool IsWardGivingVisibilityTo(const Vector &);
	virtual ~CDOTA_BotMode_Ward();

	// vtable[2] GetModeType
	// vtable[3] OnStart
	// vtable[4] OnEnd
	// vtable[5] Think
	// vtable[10] GetDesire
	// vtable[15] CalculateDesiredLocation
	// vtable[12] GetDebugColor
	// vtable[13] GetDebugString
	// sizeof = 240
};
