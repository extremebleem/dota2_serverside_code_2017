// Reconstructed from DWARF by pahole; not original source.

// src/public/ihltv.h:26
class IHLTVServer : public IBaseInterface {
public:

	IHLTVServer();
	virtual ~IHLTVServer();
	virtual IServer * GetBaseServer();
	virtual IHLTVDirector * GetDirector();
	virtual int GetHLTVSlot();
	virtual float GetOnlineTime();
	virtual void GetLocalStats(int &, int &, int &);
	virtual void GetGlobalStats(int &, int &, int &);
	virtual const ns_address * GetRelayAddress();
	virtual bool IsMasterProxy();
	virtual bool IsTVRelay();
	virtual bool IsDemoPlayback();
	virtual void BroadcastEvent(const char *, NetMessageHandle_t, const void *, IProtobufBinding *);
	virtual bool IsRecording();
	virtual const char * GetRecordingDemoFilename();
	virtual void StartAutoRecording();
	virtual void StopRecording(const CGameInfo *);
	virtual void AddSaveGame(CSteamID, uint64, int, const CUtlBuffer &);

	// vtable[2] GetBaseServer
	// vtable[3] GetDirector
	// vtable[4] GetHLTVSlot
	// vtable[5] GetOnlineTime
	// vtable[6] GetLocalStats
	// vtable[7] GetGlobalStats
	// vtable[8] GetRelayAddress
	// vtable[9] IsMasterProxy
	// vtable[10] IsTVRelay
	// vtable[11] IsDemoPlayback
	// vtable[12] BroadcastEvent
	// vtable[13] IsRecording
	// vtable[14] GetRecordingDemoFilename
	// vtable[15] StartAutoRecording
	// vtable[16] StopRecording
	// vtable[17] AddSaveGame
	// sizeof = 8
};
