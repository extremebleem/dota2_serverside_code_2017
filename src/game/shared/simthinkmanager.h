// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/simthinkmanager.h:19
class ISimulationThinkManager {
	int ()() * * _vptr.ISimulationThinkManager;  // +0x0
	ISimulationThinkManager(ISimulationThinkManager &);
	ISimulationThinkManager(const ISimulationThinkManager &);
	ISimulationThinkManager();
	virtual bool GetSimThinkList(CSimThinkEntityList &, int *, int *);
	virtual void EntityChanged(CEntityInstance *, int, bool, bool, bool);
	virtual void EntityDeleted(CEntityInstance *);
	virtual void Clear();

	// vtable[0] GetSimThinkList
	// vtable[1] EntityChanged
	// vtable[2] EntityDeleted
	// vtable[3] Clear
	// sizeof = 8
};
