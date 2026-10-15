// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_mode_secret_shop.h:15
class CDOTA_BotMode_SecretShop : public CDOTA_BotMode {
public:

	float m_fSecretShopDesire;  // +0xe0
	CDOTA_BotMode_SecretShop(CDOTA_BotMode_SecretShop &);
	CDOTA_BotMode_SecretShop(const CDOTA_BotMode_SecretShop &);
	CDOTA_BotMode_SecretShop(CDOTA_Bot *);
	virtual DOTA_BOT_MODE GetModeType();
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	virtual color24 GetDebugColor();
	virtual const char * GetDebugString();
	virtual const char * GetDebugValue();
	virtual ~CDOTA_BotMode_SecretShop();

	// vtable[2] GetModeType
	// vtable[3] OnStart
	// vtable[4] OnEnd
	// vtable[5] Think
	// vtable[10] GetDesire
	// vtable[15] CalculateDesiredLocation
	// vtable[12] GetDebugColor
	// vtable[13] GetDebugString
	// vtable[14] GetDebugValue
	// sizeof = 232
};
