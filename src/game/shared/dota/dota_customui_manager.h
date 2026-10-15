// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_customui_manager.h:37
class CDOTA_CustomUIManager : public CAutoGameSystem {
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

	bool m_bCustomUISetup;  // +0x11
	typedef CAutoGameSystem BaseClass;
	CDOTA_CustomUIManager(const CDOTA_CustomUIManager &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTA_CustomUIManager *);
	CDOTA_CustomUIManager();
	virtual ~CDOTA_CustomUIManager();
	void Script_Hud_Create(int, const char *, const char *, HSCRIPT);
	void Script_Hud_SetVisible(int, const char *, bool);
	void Script_Hud_SetDialogVariables(int, const char *, HSCRIPT);
	void Script_Hud_Destroy(int, const char *);
	int GetPriority();

private:

	virtual void GameInit(const EventGameInit_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// vtable[4] GameShutdown
	// sizeof = 24
};
