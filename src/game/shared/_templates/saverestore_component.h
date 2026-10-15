// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/saverestore_component.h:9
class CEntityComponentDataOps<CLightComponent> : public CDefSaveRestoreOps {
public:

	CEntityComponentDataOps(CEntityComponentDataOps<CLightComponent> &);
	CEntityComponentDataOps(const CEntityComponentDataOps<CLightComponent> &);
	CEntityComponentDataOps();
	virtual void Save(const SaveRestoreFieldInfo_t &, ISave *);
	virtual void Restore(const SaveRestoreFieldInfo_t &, IRestore *);

	// vtable[0] Save
	// vtable[1] Restore
	// sizeof = 8
};

// src/game/shared/saverestore_component.h:9
class CEntityComponentDataOps<CBodyComponent> : public CDefSaveRestoreOps {
public:

	CEntityComponentDataOps(CEntityComponentDataOps<CBodyComponent> &);
	CEntityComponentDataOps(const CEntityComponentDataOps<CBodyComponent> &);
	CEntityComponentDataOps();
	virtual void Save(const SaveRestoreFieldInfo_t &, ISave *);
	virtual void Restore(const SaveRestoreFieldInfo_t &, IRestore *);

	// vtable[0] Save
	// vtable[1] Restore
	// sizeof = 8
};
