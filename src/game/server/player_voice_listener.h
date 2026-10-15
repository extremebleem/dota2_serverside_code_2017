// Reconstructed from DWARF by pahole; not original source.

// src/game/server/player_voice_listener.h:16
class CPlayerVoiceListener : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	float m_flLastPlayerSpeechTime[66];  // +0x14
	float m_flPlayerSpeechDuration[66];  // +0x11c
	float m_flPlayerSpeechTotalDuration[66];  // +0x224
	typedef CAutoGameSystem BaseClass;
	CPlayerVoiceListener(CPlayerVoiceListener &);
	CPlayerVoiceListener(const CPlayerVoiceListener &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CPlayerVoiceListener *);
	CPlayerVoiceListener();
	virtual void GameInit(const EventGameInit_t &);
	virtual void PreSpawnGroupUnload(const EventPreSpawnGroupUnload_t &);
	bool IsPlayerSpeaking(CEntityIndex);
	bool IsPlayerSpeaking(CBasePlayer *);
	bool ScriptIsPlayerSpeaking(int);
	void AddPlayerSpeakTime(CEntityIndex);
	void AddPlayerSpeakTime(CBasePlayer *);
	float GetPlayerSpeechDuration(CEntityIndex);
	float GetPlayerSpeechDuration(CBasePlayer *);
	float ScriptGetPlayerSpeechDuration(int);
	float GetPlayerSpeechTotalDuration(CEntityIndex);

private:

	void InitData();
	virtual ~CPlayerVoiceListener();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// vtable[16] PreSpawnGroupUnload
	// sizeof = 816
};
