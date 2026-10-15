// Reconstructed from DWARF by pahole; not original source.

// src/game/server/steamworks_gamestats_server.h:16
class CSteamWorksGameStatsServer : public CSteamWorksGameStatsUploader {
public:

	CSteamWorksGameStatsServer(CSteamWorksGameStatsServer &);
	CSteamWorksGameStatsServer(const CSteamWorksGameStatsServer &);
	CSteamWorksGameStatsServer();
	virtual void WriteSessionRow();

protected:

	virtual EGameStatsAccountType GetGameStatsAccountType();
	virtual void AddSessionIDsToTable(int, int);
	virtual ~CSteamWorksGameStatsServer();

	// vtable[41] WriteSessionRow
	// vtable[45] GetGameStatsAccountType
	// vtable[46] AddSessionIDsToTable
	// sizeof = 1032
};
