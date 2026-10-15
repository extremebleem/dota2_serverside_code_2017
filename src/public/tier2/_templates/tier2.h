// Reconstructed from DWARF by pahole; not original source.

// src/public/tier2/tier2.h:41
class CTier2AppSystem<ISource2Server, 0> : public CTier1AppSystem<ISource2Server, 0> {
public:

protected:

	int m_nAppSysTier2LibraryConnects;  // +0x20
	~CTier2AppSystem();
	CTier2AppSystem(CTier2AppSystem<ISource2Server, 0> &);
	CTier2AppSystem(const CTier2AppSystem<ISource2Server, 0> &);
	CTier2AppSystem();
	virtual bool Connect(CreateInterfaceFn);
	virtual void Reconnect(CreateInterfaceFn, const char *);
	virtual InitReturnVal_t Init();
	virtual AppSystemTier_t GetTier();
	virtual void Shutdown();
	virtual void Disconnect();
	void EnableManualManifest(ResourceManifestDesc_t *);

	// vtable[0] Connect
	// vtable[8] Reconnect
	// vtable[3] Init
	// vtable[7] GetTier
	// vtable[4] Shutdown
	// vtable[1] Disconnect
	// sizeof = 40
};

// src/public/tier2/tier2.h:41
class CTier2AppSystem<IGameConfiguration, 0> : public CTier1AppSystem<IGameConfiguration, 0> {
public:

protected:

	int m_nAppSysTier2LibraryConnects;  // +0x28
	~CTier2AppSystem();
	CTier2AppSystem(CTier2AppSystem<IGameConfiguration, 0> &);
	CTier2AppSystem(const CTier2AppSystem<IGameConfiguration, 0> &);
	CTier2AppSystem();
	virtual bool Connect(CreateInterfaceFn);
	virtual void Reconnect(CreateInterfaceFn, const char *);
	virtual InitReturnVal_t Init();
	virtual AppSystemTier_t GetTier();
	virtual void Shutdown();
	virtual void Disconnect();
	void EnableManualManifest(ResourceManifestDesc_t *);

	// vtable[0] Connect
	// vtable[8] Reconnect
	// vtable[3] Init
	// vtable[7] GetTier
	// vtable[4] Shutdown
	// vtable[1] Disconnect
	// sizeof = 48
};

// src/public/tier2/tier2.h:41
class CTier2AppSystem<ISource2ServerSerializers, 0> : public CTier1AppSystem<ISource2ServerSerializers, 0> {
public:

protected:

	int m_nAppSysTier2LibraryConnects;  // +0x20
	~CTier2AppSystem();
	CTier2AppSystem(CTier2AppSystem<ISource2ServerSerializers, 0> &);
	CTier2AppSystem(const CTier2AppSystem<ISource2ServerSerializers, 0> &);
	CTier2AppSystem();
	virtual bool Connect(CreateInterfaceFn);
	virtual void Reconnect(CreateInterfaceFn, const char *);
	virtual InitReturnVal_t Init();
	virtual AppSystemTier_t GetTier();
	virtual void Shutdown();
	virtual void Disconnect();
	void EnableManualManifest(ResourceManifestDesc_t *);

	// vtable[0] Connect
	// vtable[8] Reconnect
	// vtable[3] Init
	// vtable[7] GetTier
	// vtable[4] Shutdown
	// vtable[1] Disconnect
	// sizeof = 40
};

// CTier2AppSystem: 2 more instantiations (full list in INDEX.tsv)
//   CTier2AppSystem<ISource2GameEntities, 0>
//   CTier2AppSystem<ISource2GameClients, 0>
