// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_mode_evasive_maneuvers.h:22
class CDOTA_BotMode_EvasiveManeuvers : public CDOTA_BotMode {
public:

private:

	float m_fAvoidRadius;  // +0xf8
	int m_iAvoidType;  // +0xfc
	CDOTA_BotMode_EvasiveManeuvers(CDOTA_BotMode_EvasiveManeuvers &);
	CDOTA_BotMode_EvasiveManeuvers(const CDOTA_BotMode_EvasiveManeuvers &);
	CDOTA_BotMode_EvasiveManeuvers(CDOTA_Bot *);
	virtual DOTA_BOT_MODE GetModeType();
	virtual void OnStart();
	virtual void OnEnd();
	virtual void Think();
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	virtual color24 GetDebugColor();
	virtual const char * GetDebugString();
	float WantsToNotMove();
	float WantsToAvoidLocation(Vector *, float *);
	float WantsToAvoidVector(Vector *, Vector *, float *);
	virtual ~CDOTA_BotMode_EvasiveManeuvers();

	// vtable[2] GetModeType
	// vtable[3] OnStart
	// vtable[4] OnEnd
	// vtable[5] Think
	// vtable[10] GetDesire
	// vtable[15] CalculateDesiredLocation
	// vtable[12] GetDebugColor
	// vtable[13] GetDebugString
	// sizeof = 256
};
