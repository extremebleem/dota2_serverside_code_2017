// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/lightquerygamesystem.h:28
class CLightQueryGameSystem : public IGameSystem {
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

	typedef IGameSystem BaseClass;
	CLightQueryGameSystem(const CLightQueryGameSystem &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CLightQueryGameSystem *);
	virtual void GameInit(const EventGameInit_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	virtual void GameActivate(const EventGameActivate_t &);
	virtual void GameDeactivate(const EventGameDeactivate_t &);
	EHANDLE2 GetGlobalLight(GlobalLightType_t);
	void SetGlobalLight(GlobalLightType_t, EHANDLE2);
	CLightQueryGameSystem();
	virtual ~CLightQueryGameSystem();

private:

	void OnPostSimulate(const EventSimulate_t &);
	virtual void OnClientGamePostSimulate(const EventClientGamePostSimulate_t &);
	virtual void OnServerGamePostSimulate(const EventServerGamePostSimulate_t &);

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// vtable[4] GameShutdown
	// vtable[8] GameActivate
	// vtable[11] GameDeactivate
	// vtable[28] OnClientGamePostSimulate
	// vtable[27] OnServerGamePostSimulate
	// sizeof = 32
};
