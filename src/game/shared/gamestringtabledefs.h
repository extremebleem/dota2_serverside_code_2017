// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/gamestringtabledefs.h:9
class IGameNetworkStringTables {
	int ()() * * _vptr.IGameNetworkStringTables;  // +0x0
	IGameNetworkStringTables(IGameNetworkStringTables &);
	IGameNetworkStringTables(const IGameNetworkStringTables &);
	IGameNetworkStringTables();
	virtual bool InitStringTableDefinitions();
	virtual void ClearStringTablePointers();
	virtual void SV_CreateNetworkStringTables();
	virtual bool CL_InstallStringTableCallback(const char *);

	// vtable[0] InitStringTableDefinitions
	// vtable[1] ClearStringTablePointers
	// vtable[2] SV_CreateNetworkStringTables
	// vtable[3] CL_InstallStringTableCallback
	// sizeof = 8
};
