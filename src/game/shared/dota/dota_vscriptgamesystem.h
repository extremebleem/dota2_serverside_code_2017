// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_vscriptgamesystem.h:15
class CDOTAVScriptGameSystem : public CVScriptGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;
	typedef CVScriptGameSystem BaseClass;
	CDOTAVScriptGameSystem();
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTAVScriptGameSystem *);
	virtual void InstallScriptBindings();
	virtual void RemoveScriptBindings();
	virtual ~CDOTAVScriptGameSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[56] InstallScriptBindings
	// vtable[57] RemoveScriptBindings
	// sizeof = 144
};
