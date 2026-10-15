// Reconstructed from DWARF by pahole; not original source.

// src/public/networksystem/networkvar.h:79
class CNetworkVarChainer : public CEntityOwnerPtr {
	struct ChainUpdatePropagationLL_t {
		CUtlDelegate<void(const CNetworkVarChainer&)> updateDelegate;  // +0x8
		ChainUpdatePropagationLL_t();

		// sizeof = 32
	};

public:

private:

	CNetworkVarChainer();
	void RegisterChainUpdatePropagationTarget(ChainUpdatePropagationLL_t &);
	void Set(CEntityInstance *);

	// sizeof = 24
};

// src/public/networksystem/networkvar.h:79
class CNetworkVarChainer : public CEntityOwnerPtr {
	struct ChainUpdatePropagationLL_t {
		CUtlDelegate<void(const CNetworkVarChainer&)> updateDelegate;  // +0x8
		ChainUpdatePropagationLL_t();

		// sizeof = 32
	};

public:

private:

	CNetworkVarChainer();
	void RegisterChainUpdatePropagationTarget(ChainUpdatePropagationLL_t &);
	void Set(CEntityInstance *);
	~CNetworkVarChainer();

	// sizeof = 24
};

// src/public/networksystem/networkvar.h:79
class CNetworkVarChainer : public CEntityOwnerPtr {
	struct ChainUpdatePropagationLL_t {
		CUtlDelegate<void(const CNetworkVarChainer&)> updateDelegate;  // +0x8
		ChainUpdatePropagationLL_t();

		// sizeof = 32
	};

public:

private:

	CNetworkVarChainer();
	void RegisterChainUpdatePropagationTarget(ChainUpdatePropagationLL_t &);
	void Set(CEntityInstance *);
	CNetworkVarChainer & operator=(const CNetworkVarChainer &);

	// sizeof = 24
};

// src/public/networksystem/networkvar.h:79
class CNetworkVarChainer : public CEntityOwnerPtr {
	struct ChainUpdatePropagationLL_t {
		CUtlDelegate<void(const CNetworkVarChainer&)> updateDelegate;  // +0x8
		ChainUpdatePropagationLL_t();

		// sizeof = 32
	};

public:

private:

	CNetworkVarChainer();
	void RegisterChainUpdatePropagationTarget(ChainUpdatePropagationLL_t &);
	void Set(CEntityInstance *);
	~CNetworkVarChainer();
	CNetworkVarChainer & operator=(const CNetworkVarChainer &);

	// sizeof = 24
};
