// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/tracked_controller_manager.h:174
class CTrackedControllerManager : public CAutoGameSystem {
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

	typedef CAutoGameSystem BaseClass;
	CTrackedControllerManager(CTrackedControllerManager &);
	CTrackedControllerManager(const CTrackedControllerManager &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CTrackedControllerManager *);
	CTrackedControllerManager();
	virtual void GameInit(const EventGameInit_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	void UpdateShared();
	bool IsVrFlyNoClipEnabled();
	virtual void FrameUpdatePreEntityThink(const EventServerPreEntityThink_t &);
	void UpdateVRHandPosesServer();
	void NotifyVRFlyNoclipChanged(bool);
	virtual ~CTrackedControllerManager();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// vtable[4] GameShutdown
	// vtable[24] FrameUpdatePreEntityThink
	// sizeof = 88
};
