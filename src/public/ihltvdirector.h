// Reconstructed from DWARF by pahole; not original source.

// src/public/ihltvdirector.h:15
class IHLTVDirector {
	int ()() * * _vptr.IHLTVDirector;  // +0x0
	IHLTVDirector();
	virtual ~IHLTVDirector();
	virtual bool IsActive();
	virtual void SetHLTVServer(IHLTVServer *);
	virtual IHLTVServer * GetHLTVServer();
	virtual int GetDirectorTick();
	virtual CEntityIndex GetPVSEntity();
	virtual Vector GetPVSOrigin();
	virtual float GetDelay();
	virtual const char * * GetModEvents();
	virtual void OnStartRecording();
	virtual int GetDirectorCameraEventId();
	virtual void BroadcastLocalTitle(CEntityIndex);
	virtual void CreateLocalChatMessage(const CSteamID &, const char *, const char *, NetMessageHandle_t &, void * &);
	virtual void OnHLTVUncompressedSnapshot(int, bf_write &);
	virtual void OnHLTVNetMessage(NetMessageHandle_t, const NetMessageInfo_t *, const void *);

	// vtable[2] IsActive
	// vtable[3] SetHLTVServer
	// vtable[4] GetHLTVServer
	// vtable[5] GetDirectorTick
	// vtable[6] GetPVSEntity
	// vtable[7] GetPVSOrigin
	// vtable[8] GetDelay
	// vtable[9] GetModEvents
	// vtable[10] OnStartRecording
	// vtable[11] GetDirectorCameraEventId
	// vtable[12] BroadcastLocalTitle
	// vtable[13] CreateLocalChatMessage
	// vtable[14] OnHLTVUncompressedSnapshot
	// vtable[15] OnHLTVNetMessage
	// sizeof = 8
};
