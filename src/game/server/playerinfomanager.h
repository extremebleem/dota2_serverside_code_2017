// Reconstructed from DWARF by pahole; not original source.

// src/game/server/playerinfomanager.h:18
class CPlayerInfoManager : public IPlayerInfoManager {
public:

	CPlayerInfoManager(CPlayerInfoManager &);
	CPlayerInfoManager(const CPlayerInfoManager &);
	CPlayerInfoManager();
	virtual IPlayerInfo * GetPlayerInfo(CEntityIndex);
	virtual CGlobalVars * GetGlobalVars();

	// vtable[0] GetPlayerInfo
	// vtable[1] GetGlobalVars
	// sizeof = 8
};

// src/game/server/playerinfomanager.h:25
class CPluginBotManager : public IBotManager {
public:

	CPluginBotManager(CPluginBotManager &);
	CPluginBotManager(const CPluginBotManager &);
	CPluginBotManager();
	virtual IBotController * GetBotController(CEntityIndex);
	virtual CEntityIndex CreateBot(const char *);

	// vtable[0] GetBotController
	// vtable[1] CreateBot
	// sizeof = 8
};
