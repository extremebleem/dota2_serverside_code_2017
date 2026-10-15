// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_mode_item.h:15
class CDOTA_BotMode_Item : public CDOTA_BotMode {
public:

private:

	bool m_bKill;  // +0xe0

	EHANDLE m_hItem;  // +0xe4
	CDOTA_BotMode_Item(CDOTA_BotMode_Item &);
	CDOTA_BotMode_Item(const CDOTA_BotMode_Item &);
	CDOTA_BotMode_Item(CDOTA_Bot *);
	virtual DOTA_BOT_MODE GetModeType();
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	virtual color24 GetDebugColor();
	virtual const char * GetDebugString();
	EHANDLE FindBestItemToDrop();
	virtual ~CDOTA_BotMode_Item();

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
