// Reconstructed from DWARF by pahole; not original source.

// src/public/steam/steam_gameserver.h:70
class CSteamGameServerAPIContext {
private:

	CSteamGameServerAPIContext();
	void Clear();
	bool Init();
	ISteamClient * SteamClient();
	ISteamGameServer * SteamGameServer();
	ISteamUtils * SteamGameServerUtils();
	ISteamNetworking * SteamGameServerNetworking();
	ISteamGameServerStats * SteamGameServerStats();
	ISteamHTTP * SteamHTTP();
	ISteamInventory * SteamInventory();
	ISteamUGC * SteamUGC();
	ISteamApps * SteamApps();

	// sizeof = 72
};
