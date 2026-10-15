// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_server_custom_game_cache.cpp:38
class CJobCallResult<SteamUGCQueryCompleted_t> {
	bool m_bFinished;  // +0x0
	bool m_bResult;  // +0x1

private:

	CJobCallResult(SteamAPICall_t, bool);
	void func(SteamUGCQueryCompleted_t *, bool);
	~CJobCallResult();

	// sizeof = 80
};
