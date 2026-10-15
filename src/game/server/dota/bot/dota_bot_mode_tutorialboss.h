// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_mode_tutorialboss.h:33
class CDOTA_BotMode_TutorialBoss : public CDOTA_BotMode {
public:

private:

	int m_nSubMode;  // +0xe0
	int m_nLastSubMode;  // +0xe4
	EHANDLE m_hEnemy;  // +0xf4
	bool m_bSpecialAttack;  // +0xf8

	CDOTA_BotMode_TutorialBoss(CDOTA_BotMode_TutorialBoss &);
	CDOTA_BotMode_TutorialBoss(const CDOTA_BotMode_TutorialBoss &);
	CDOTA_BotMode_TutorialBoss(CDOTA_Bot *);
	virtual DOTA_BOT_MODE GetModeType();
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	virtual color24 GetDebugColor();
	virtual const char * GetDebugString();
	void UpdateSubMode();
	void SwitchToSubMode(int);
	virtual ~CDOTA_BotMode_TutorialBoss();

	// vtable[2] GetModeType
	// vtable[3] OnStart
	// vtable[4] OnEnd
	// vtable[5] Think
	// vtable[10] GetDesire
	// vtable[15] CalculateDesiredLocation
	// vtable[12] GetDebugColor
	// vtable[13] GetDebugString
	// sizeof = 280
};
