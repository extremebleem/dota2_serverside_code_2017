// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/gameentitysystem.cpp:3017
class CEntity2NetworkClasses<ServerClass> : public IEntityListener {
public:

private:

	CUtlMap<int, Entity2Networkable_t, short unsigned int, bool (*)(int const&, int const&)> m_NetworkedEntities;  // +0x10
	CEntity2NetworkClasses(CEntity2NetworkClasses<ServerClass> &);
	CEntity2NetworkClasses(const CEntity2NetworkClasses<ServerClass> &);
	CEntity2NetworkClasses();
	void InitEntity2NetworkClasses(ServerClass * *, int);
	void BuildClassListAndAssignIds(CUtlDict<ServerClass*, int> &);
	void ShutdownEntity2NetworkClasses();
	const CUtlMap<int, Entity2Networkable_t, short unsigned int, bool (*)(int const&, int const&)> & GetEntity2Networkables();
	bool GetEntity2Networkable(CEntityIndex, Entity2Networkable_t &);
	virtual void OnEntityCreated(CEntityInstance *);
	virtual void OnEntityDeleted(CEntityInstance *);
	virtual void OnEntityParentChanged(CEntityInstance *, CEntityInstance *);
	int FindRuntimeIndexOfNetworkComponent();
	void BuildDictionaryFromEntityList(CUtlDict<ServerClass*, int> &);
	~CEntity2NetworkClasses();

	// vtable[0] OnEntityCreated
	// vtable[2] OnEntityDeleted
	// vtable[3] OnEntityParentChanged
	// sizeof = 56
};
