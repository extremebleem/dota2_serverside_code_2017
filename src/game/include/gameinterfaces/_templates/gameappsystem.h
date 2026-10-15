// Reconstructed from DWARF by pahole; not original source.

// src/game/include/gameinterfaces/gameappsystem.h:24
class CGameAppSystem<ISource2Server, 0> : public CTier3AppSystem<ISource2Server, 0> {
public:

	~CGameAppSystem();
	CGameAppSystem(CGameAppSystem<ISource2Server, 0> &);
	CGameAppSystem(const CGameAppSystem<ISource2Server, 0> &);
	CGameAppSystem();
	virtual AppSystemTier_t GetTier();
	virtual bool Connect(CreateInterfaceFn);
	virtual void Disconnect();
	virtual void Reconnect(CreateInterfaceFn, const char *);

private:

	GameInterfaceConnectionMode_t GetConnectionMode();

	// vtable[7] GetTier
	// vtable[0] Connect
	// vtable[1] Disconnect
	// vtable[8] Reconnect
	// sizeof = 40
};

// src/game/include/gameinterfaces/gameappsystem.h:24
class CGameAppSystem<ISource2ServerSerializers, 0> : public CTier3AppSystem<ISource2ServerSerializers, 0> {
public:

	~CGameAppSystem();
	CGameAppSystem(CGameAppSystem<ISource2ServerSerializers, 0> &);
	CGameAppSystem(const CGameAppSystem<ISource2ServerSerializers, 0> &);
	CGameAppSystem();
	virtual AppSystemTier_t GetTier();
	virtual bool Connect(CreateInterfaceFn);
	virtual void Disconnect();
	virtual void Reconnect(CreateInterfaceFn, const char *);

private:

	GameInterfaceConnectionMode_t GetConnectionMode();

	// vtable[7] GetTier
	// vtable[0] Connect
	// vtable[1] Disconnect
	// vtable[8] Reconnect
	// sizeof = 40
};

// src/game/include/gameinterfaces/gameappsystem.h:24
class CGameAppSystem<ISource2GameClients, 0> : public CTier3AppSystem<ISource2GameClients, 0> {
public:

	~CGameAppSystem();
	CGameAppSystem(CGameAppSystem<ISource2GameClients, 0> &);
	CGameAppSystem(const CGameAppSystem<ISource2GameClients, 0> &);
	CGameAppSystem();
	virtual AppSystemTier_t GetTier();
	virtual bool Connect(CreateInterfaceFn);
	virtual void Disconnect();
	virtual void Reconnect(CreateInterfaceFn, const char *);

private:

	GameInterfaceConnectionMode_t GetConnectionMode();

	// vtable[7] GetTier
	// vtable[0] Connect
	// vtable[1] Disconnect
	// vtable[8] Reconnect
	// sizeof = 40
};

// CGameAppSystem: 1 more instantiations (full list in INDEX.tsv)
//   CGameAppSystem<ISource2GameEntities, 0>
