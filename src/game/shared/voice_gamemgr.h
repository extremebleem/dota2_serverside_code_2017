// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/voice_gamemgr.h:19
class IVoiceGameMgrHelper {
	int ()() * * _vptr.IVoiceGameMgrHelper;  // +0x0
	IVoiceGameMgrHelper();
	virtual ~IVoiceGameMgrHelper();
	virtual bool CanPlayerHearPlayer(CBasePlayer *, CBasePlayer *, bool &);

	// vtable[2] CanPlayerHearPlayer
	// sizeof = 8
};

// src/game/shared/voice_gamemgr.h:31
class CVoiceGameMgr {
	int ()() * * _vptr.CVoiceGameMgr;  // +0x0
private:

	int m_nMaxPlayers;  // +0x10

	double m_UpdateInterval;  // +0x18
	int m_iProximityDistance;  // +0x20
	CVoiceGameMgr(const CVoiceGameMgr &);
	CVoiceGameMgr();
	virtual ~CVoiceGameMgr();
	bool Init(IVoiceGameMgrHelper *, int);
	void SetHelper(IVoiceGameMgrHelper *);
	void Update(double);
	void ClientConnected(CEntityIndex);
	bool ClientCommand(CBasePlayer *, const CCommand &);
	bool CheckProximity(int);
	void SetProximityDistance(int);
	bool IsPlayerIgnoringPlayer(CEntityIndex, CEntityIndex);
	bool IsPlayerIgnoringPlayerText(CEntityIndex, CEntityIndex);
	int CountPlayersIgnoringPlayerChat(CEntityIndex);
	int CountPlayersIgnoringPlayerVoice(CEntityIndex);
	int CountPlayersWithBitSet(CEntityIndex, CBitVec<64> &);
	void UpdateMasks();

	// sizeof = 40
};
