// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_mode_rune.h:15
class CDOTA_BotMode_Rune : public CDOTA_BotMode {
public:

private:

	int m_iSpawner;  // +0xe0
	float m_fRuneDesire;  // +0xe4
	bool m_bWaitForNextSpawn;  // +0xe8

	float m_fNextSpawnTime;  // +0xec
	float m_fNextMoveOrder;  // +0xf0
	CDOTA_BotMode_Rune(CDOTA_BotMode_Rune &);
	CDOTA_BotMode_Rune(const CDOTA_BotMode_Rune &);
	CDOTA_BotMode_Rune(CDOTA_Bot *);
	virtual DOTA_BOT_MODE GetModeType();
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	CBaseEntity * GetRune(int);
	CBaseEntity * GetRuneSpawner(int);
	virtual color24 GetDebugColor();
	virtual const char * GetDebugString();
	virtual const char * GetDebugValue();
	float GetRuneDesire(int);
	virtual ~CDOTA_BotMode_Rune();

	// vtable[2] GetModeType
	// vtable[3] OnStart
	// vtable[4] OnEnd
	// vtable[5] Think
	// vtable[10] GetDesire
	// vtable[15] CalculateDesiredLocation
	// vtable[12] GetDebugColor
	// vtable[13] GetDebugString
	// vtable[14] GetDebugValue
	// sizeof = 248
};
