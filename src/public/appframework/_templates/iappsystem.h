// Reconstructed from DWARF by pahole; not original source.

// src/public/appframework/iappsystem.h:118
class CBaseAppSystem<ISource2Server> : public ISource2Server {
public:

	CBaseAppSystem(CBaseAppSystem<ISource2Server> &);
	CBaseAppSystem(const CBaseAppSystem<ISource2Server> &);
	CBaseAppSystem();
	virtual bool Connect(CreateInterfaceFn);
	virtual void Disconnect();
	virtual void * QueryInterface(const char *);
	virtual InitReturnVal_t Init();
	virtual void Shutdown();
	virtual void PreShutdown();
	virtual const AppSystemInfo_t * GetDependencies();
	virtual AppSystemTier_t GetTier();
	virtual void Reconnect(CreateInterfaceFn, const char *);
	virtual bool IsSingleton();
	virtual AppSystemBuildType_t GetBuildType();

	// vtable[0] Connect
	// vtable[1] Disconnect
	// vtable[2] QueryInterface
	// vtable[3] Init
	// vtable[4] Shutdown
	// vtable[5] PreShutdown
	// vtable[6] GetDependencies
	// vtable[7] GetTier
	// vtable[8] Reconnect
	// vtable[9] IsSingleton
	// vtable[10] GetBuildType
	// sizeof = 8
};

// src/public/appframework/iappsystem.h:118
class CBaseAppSystem<IGameConfiguration> : public IGameConfiguration {
public:

	CBaseAppSystem(CBaseAppSystem<IGameConfiguration> &);
	CBaseAppSystem(const CBaseAppSystem<IGameConfiguration> &);
	CBaseAppSystem();
	virtual bool Connect(CreateInterfaceFn);
	virtual void Disconnect();
	virtual void * QueryInterface(const char *);
	virtual InitReturnVal_t Init();
	virtual void Shutdown();
	virtual void PreShutdown();
	virtual const AppSystemInfo_t * GetDependencies();
	virtual AppSystemTier_t GetTier();
	virtual void Reconnect(CreateInterfaceFn, const char *);
	virtual bool IsSingleton();
	virtual AppSystemBuildType_t GetBuildType();

	// vtable[0] Connect
	// vtable[1] Disconnect
	// vtable[2] QueryInterface
	// vtable[3] Init
	// vtable[4] Shutdown
	// vtable[5] PreShutdown
	// vtable[6] GetDependencies
	// vtable[7] GetTier
	// vtable[8] Reconnect
	// vtable[9] IsSingleton
	// vtable[10] GetBuildType
	// sizeof = 16
};

// src/public/appframework/iappsystem.h:118
class CBaseAppSystem<ISource2ServerSerializers> : public ISource2ServerSerializers {
public:

	CBaseAppSystem(CBaseAppSystem<ISource2ServerSerializers> &);
	CBaseAppSystem(const CBaseAppSystem<ISource2ServerSerializers> &);
	CBaseAppSystem();
	virtual bool Connect(CreateInterfaceFn);
	virtual void Disconnect();
	virtual void * QueryInterface(const char *);
	virtual InitReturnVal_t Init();
	virtual void Shutdown();
	virtual void PreShutdown();
	virtual const AppSystemInfo_t * GetDependencies();
	virtual AppSystemTier_t GetTier();
	virtual void Reconnect(CreateInterfaceFn, const char *);
	virtual bool IsSingleton();
	virtual AppSystemBuildType_t GetBuildType();

	// vtable[0] Connect
	// vtable[1] Disconnect
	// vtable[2] QueryInterface
	// vtable[3] Init
	// vtable[4] Shutdown
	// vtable[5] PreShutdown
	// vtable[6] GetDependencies
	// vtable[7] GetTier
	// vtable[8] Reconnect
	// vtable[9] IsSingleton
	// vtable[10] GetBuildType
	// sizeof = 8
};

// src/public/appframework/iappsystem.h:164
class CTier0AppSystem<ISource2Server> : public CBaseAppSystem<ISource2Server> {
public:

	CTier0AppSystem(CTier0AppSystem<ISource2Server> &);
	CTier0AppSystem(const CTier0AppSystem<ISource2Server> &);
	CTier0AppSystem();

	// sizeof = 8
};

// src/public/appframework/iappsystem.h:164
class CTier0AppSystem<IGameConfiguration> : public CBaseAppSystem<IGameConfiguration> {
public:

	CTier0AppSystem(CTier0AppSystem<IGameConfiguration> &);
	CTier0AppSystem(const CTier0AppSystem<IGameConfiguration> &);
	CTier0AppSystem();

	// sizeof = 16
};

// src/public/appframework/iappsystem.h:164
class CTier0AppSystem<ISource2ServerSerializers> : public CBaseAppSystem<ISource2ServerSerializers> {
public:

	CTier0AppSystem(CTier0AppSystem<ISource2ServerSerializers> &);
	CTier0AppSystem(const CTier0AppSystem<ISource2ServerSerializers> &);
	CTier0AppSystem();

	// sizeof = 8
};

// CBaseAppSystem: 4 more instantiations (full list in INDEX.tsv)
//   CBaseAppSystem<ISource2GameEntities>
//   CBaseAppSystem<ISource2GameClients>
//   CBaseAppSystem<IApplication>
//   CBaseAppSystem<IAppSystem>

// CTier0AppSystem: 3 more instantiations (full list in INDEX.tsv)
//   CTier0AppSystem<ISource2GameEntities>
//   CTier0AppSystem<ISource2GameClients>
//   CTier0AppSystem<IApplication>
