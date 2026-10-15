// Reconstructed from DWARF by pahole; not original source.

// src/public/appframework/iappsystem.h:19
struct AppSystemInfo_t {
	const char * m_pModuleName;  // +0x0
	const char * m_pInterfaceName;  // +0x8
	AppSystemInfo_t();
	AppSystemInfo_t(const char *, const char *);

	// sizeof = 16
};

// src/public/appframework/iappsystem.h:79
class IAppSystem {
	int ()() * * _vptr.IAppSystem;  // +0x0
	IAppSystem(IAppSystem &);
	IAppSystem(const IAppSystem &);
	IAppSystem();
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
