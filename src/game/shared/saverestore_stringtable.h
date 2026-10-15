// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/saverestore_stringtable.h:22
class CStringTableSaveRestoreOps : public CDefSaveRestoreOps {
public:

private:

	CStringTableSaveRestoreOps(CStringTableSaveRestoreOps &);
	CStringTableSaveRestoreOps(const CStringTableSaveRestoreOps &);
	CStringTableSaveRestoreOps();
	void Init(INetworkStringTable *);
	virtual void Save(const SaveRestoreFieldInfo_t &, ISave *);
	virtual void Restore(const SaveRestoreFieldInfo_t &, IRestore *);
	virtual void MakeEmpty(const SaveRestoreFieldInfo_t &);
	virtual bool IsEmpty(const SaveRestoreFieldInfo_t &);

	// vtable[0] Save
	// vtable[1] Restore
	// vtable[3] MakeEmpty
	// vtable[2] IsEmpty
	// sizeof = 16
};
