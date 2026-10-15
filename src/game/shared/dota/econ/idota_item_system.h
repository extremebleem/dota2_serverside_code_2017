// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/econ/idota_item_system.h:14
class IDotaItemSystem {
	int ()() * * _vptr.IDotaItemSystem;  // +0x0
	~IDotaItemSystem();
	IDotaItemSystem(IDotaItemSystem &);
	IDotaItemSystem(const IDotaItemSystem &);
	IDotaItemSystem();
	virtual item_definition_index_t GetDefaultItemForSlot(int, int);
	virtual const CDOTAPortraitInfo * GetItemPortraitDataForModel(item_definition_index_t, const char *);
	virtual const CDOTAPortraitInfo * GetGlobalPortraitDataForModel(const char *);

	// vtable[0] GetDefaultItemForSlot
	// vtable[1] GetItemPortraitDataForModel
	// vtable[2] GetGlobalPortraitDataForModel
	// sizeof = 8
};
