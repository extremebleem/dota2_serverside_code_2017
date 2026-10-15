// Reconstructed from DWARF by pahole; not original source.

// src/public/tier3/tier3.h:18
class CTier3AppSystem<ISource2Server, 0> : public CTier2AppSystem<ISource2Server, 0> {
public:

	~CTier3AppSystem();
	CTier3AppSystem(CTier3AppSystem<ISource2Server, 0> &);
	CTier3AppSystem(const CTier3AppSystem<ISource2Server, 0> &);
	CTier3AppSystem();
	virtual AppSystemTier_t GetTier();

	// vtable[7] GetTier
	// sizeof = 40
};

// src/public/tier3/tier3.h:18
class CTier3AppSystem<IGameConfiguration, 0> : public CTier2AppSystem<IGameConfiguration, 0> {
public:

	~CTier3AppSystem();
	CTier3AppSystem(CTier3AppSystem<IGameConfiguration, 0> &);
	CTier3AppSystem(const CTier3AppSystem<IGameConfiguration, 0> &);
	CTier3AppSystem();
	virtual AppSystemTier_t GetTier();

	// vtable[7] GetTier
	// sizeof = 48
};

// src/public/tier3/tier3.h:18
class CTier3AppSystem<ISource2ServerSerializers, 0> : public CTier2AppSystem<ISource2ServerSerializers, 0> {
public:

	~CTier3AppSystem();
	CTier3AppSystem(CTier3AppSystem<ISource2ServerSerializers, 0> &);
	CTier3AppSystem(const CTier3AppSystem<ISource2ServerSerializers, 0> &);
	CTier3AppSystem();
	virtual AppSystemTier_t GetTier();

	// vtable[7] GetTier
	// sizeof = 40
};

// CTier3AppSystem: 2 more instantiations (full list in INDEX.tsv)
//   CTier3AppSystem<ISource2GameEntities, 0>
//   CTier3AppSystem<ISource2GameClients, 0>
