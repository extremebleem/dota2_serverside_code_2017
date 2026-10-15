// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/tier1.h:32
class CTier1AppSystem<ISource2Server, 0> : public CTier0AppSystem<ISource2Server> {
public:

	~CTier1AppSystem();
	CTier1AppSystem(CTier1AppSystem<ISource2Server, 0> &);
	CTier1AppSystem(const CTier1AppSystem<ISource2Server, 0> &);
	CTier1AppSystem();
	virtual bool Connect(CreateInterfaceFn);
	virtual void Disconnect();
	virtual InitReturnVal_t Init();
	virtual void Shutdown();
	virtual AppSystemTier_t GetTier();

	// vtable[0] Connect
	// vtable[1] Disconnect
	// vtable[3] Init
	// vtable[4] Shutdown
	// vtable[7] GetTier
	// sizeof = 8
};

// src/public/tier1/tier1.h:32
class CTier1AppSystem<IGameConfiguration, 0> : public CTier0AppSystem<IGameConfiguration> {
public:

	~CTier1AppSystem();
	CTier1AppSystem(CTier1AppSystem<IGameConfiguration, 0> &);
	CTier1AppSystem(const CTier1AppSystem<IGameConfiguration, 0> &);
	CTier1AppSystem();
	virtual bool Connect(CreateInterfaceFn);
	virtual void Disconnect();
	virtual InitReturnVal_t Init();
	virtual void Shutdown();
	virtual AppSystemTier_t GetTier();

	// vtable[0] Connect
	// vtable[1] Disconnect
	// vtable[3] Init
	// vtable[4] Shutdown
	// vtable[7] GetTier
	// sizeof = 16
};

// src/public/tier1/tier1.h:32
class CTier1AppSystem<ISource2ServerSerializers, 0> : public CTier0AppSystem<ISource2ServerSerializers> {
public:

	~CTier1AppSystem();
	CTier1AppSystem(CTier1AppSystem<ISource2ServerSerializers, 0> &);
	CTier1AppSystem(const CTier1AppSystem<ISource2ServerSerializers, 0> &);
	CTier1AppSystem();
	virtual bool Connect(CreateInterfaceFn);
	virtual void Disconnect();
	virtual InitReturnVal_t Init();
	virtual void Shutdown();
	virtual AppSystemTier_t GetTier();

	// vtable[0] Connect
	// vtable[1] Disconnect
	// vtable[3] Init
	// vtable[4] Shutdown
	// vtable[7] GetTier
	// sizeof = 8
};

// CTier1AppSystem: 3 more instantiations (full list in INDEX.tsv)
//   CTier1AppSystem<ISource2GameEntities, 0>
//   CTier1AppSystem<ISource2GameClients, 0>
//   CTier1AppSystem<IApplication, 0>
