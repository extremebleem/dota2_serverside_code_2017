// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/game_timescale_shared.h:25
class CGameTimescale : public CAutoGameSystem {
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

	float m_flDesiredTimescale;  // +0x14
	float m_flCurrentTimescale;  // +0x18
	float m_flBlendRate;  // +0x1c
	float m_flAcceleration;  // +0x20
	float m_flMinBlendRate;  // +0x24
	float m_flBlendDeltaMultiplier;  // +0x28
	float m_flLastUpdateRealtime;  // +0x2c
	typedef CAutoGameSystem BaseClass;
	CGameTimescale(CGameTimescale &);
	CGameTimescale(const CGameTimescale &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CGameTimescale *);
	CGameTimescale();
	virtual bool Init();
	virtual void Shutdown();
	virtual void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	virtual void PostSpawnGroupLoad(const EventPostSpawnGroupLoad_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	float GetCurrentTimescale();
	float GetDesiredTimescale();
	void SetCurrentTimescale(float);
	void SetDesiredTimescale(float, float, float, float);

private:

	void UpdateTimescale();
	void ResetTimescale();
	virtual ~CGameTimescale();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[0] Init
	// vtable[2] Shutdown
	// vtable[25] FrameUpdatePostEntityThink
	// vtable[15] PostSpawnGroupLoad
	// vtable[4] GameShutdown
	// sizeof = 48
};
