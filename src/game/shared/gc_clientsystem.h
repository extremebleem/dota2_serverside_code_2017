// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/gc_clientsystem.h:34
class CGCClientSystem : public CAutoGameSystem {
public:

private:

	bool m_bInittedGC;  // +0x10

	CGCClientSystem(CGCClientSystem &);
	CGCClientSystem();
	virtual ~CGCClientSystem();
	virtual bool Init();
	virtual void Shutdown();
	virtual void PostInit();
	virtual void FrameBoundary(const EventGameFrameBoundary_t &);
	virtual void OutOfGameFrameBoundary(const EventOutOfGameFrameBoundary_t &);
	void GCThink(float);
	bool BConnectedtoGC();
	bool BSendMessage(uint32, const uint8 *, uint32);
	bool BSendMessage(const CGCMsgBase &);
	bool BSendMessage(const CProtoBufMsgBase &);
	CGCClientSharedObjectCache * GetSOCache(SOID_t);
	const CGCClientSharedObjectCache * GetSOCache(SOID_t);
	CGCClientSharedObjectCache * FindOrAddSOCache(SOID_t);
	CGCClient * GetGCClient();
	EUniverse GetSteamUniverse();
	void SaveSerializedSOCache(const CGCClientSharedObjectCache *, uint32, const char *);
	CGCClientSharedObjectCache * LoadSerializedSOCache(const char *, SOID_t);

protected:

	void SetupGC();
	virtual void InitGC();
	virtual void PreInitGC();
	virtual void PostInitGC();

private:

	void OnLogonSuccess(SteamServersConnected_t *);

	// vtable[0] Init
	// vtable[2] Shutdown
	// vtable[1] PostInit
	// vtable[29] FrameBoundary
	// vtable[30] OutOfGameFrameBoundary
	// vtable[40] InitGC
	// vtable[41] PreInitGC
	// vtable[42] PostInitGC
	// sizeof = 1584
};
