// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_mode_companion.h:29
class CDOTA_BotMode_Companion : public CDOTA_BotMode {
public:

private:

	float m_flOffsetTimer;  // +0xe0
	float m_flForwardOffset;  // +0xe4
	float m_flSideOffset;  // +0xe8
	bool m_bUpdateAction;  // +0xec

	int m_nSubMode;  // +0xf0
	int m_nLastSubMode;  // +0xf4
	EHANDLE m_hEnemy;  // +0xf8
	EHANDLE m_hFriendly;  // +0xfc
	float m_flIdleTimer;  // +0x118
	float m_flActionTimer;  // +0x11c
	CDOTA_BotMode_Companion(CDOTA_BotMode_Companion &);
	CDOTA_BotMode_Companion(const CDOTA_BotMode_Companion &);
	CDOTA_BotMode_Companion(CDOTA_Bot *);
	virtual DOTA_BOT_MODE GetModeType();
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	virtual color24 GetDebugColor();
	virtual const char * GetDebugString();
	Vector GetCompanionPosition(CBaseEntity *);
	void UpdateCompanionPositionOffsets();
	void UpdateSubMode();
	void SwitchToSubMode(int);
	void HandleModeCompanionIdle();
	void HandleModeCompanionAction();
	virtual ~CDOTA_BotMode_Companion();

	// vtable[2] GetModeType
	// vtable[3] OnStart
	// vtable[4] OnEnd
	// vtable[5] Think
	// vtable[10] GetDesire
	// vtable[15] CalculateDesiredLocation
	// vtable[12] GetDebugColor
	// vtable[13] GetDebugString
	// sizeof = 288
};
