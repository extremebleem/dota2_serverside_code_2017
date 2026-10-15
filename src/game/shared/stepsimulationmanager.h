// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/stepsimulationmanager.h:19
class IStepSimulationManager {
	int ()() * * _vptr.IStepSimulationManager;  // +0x0
	IStepSimulationManager(IStepSimulationManager &);
	IStepSimulationManager(const IStepSimulationManager &);
	IStepSimulationManager();
	virtual int GetEntityList(CStepSimulationEntityList &);
	virtual void EntityUsingStepSimulation(CEntityInstance *, bool);
	virtual void Clear();

	// vtable[0] GetEntityList
	// vtable[1] EntityUsingStepSimulation
	// vtable[2] Clear
	// sizeof = 8
};
