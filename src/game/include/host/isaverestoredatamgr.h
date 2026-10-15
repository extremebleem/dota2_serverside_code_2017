// Reconstructed from DWARF by pahole; not original source.

// src/game/include/host/isaverestoredatamgr.h:7
struct HRestoreData__ {
	int unused;  // +0x0

	// sizeof = 4
};

// src/game/include/host/isaverestoredatamgr.h:10
class ISaveRestoreDataMgr : public IAppSystem {
public:

	ISaveRestoreDataMgr();
	virtual ~ISaveRestoreDataMgr();
	virtual void SetRestoreData(HRestoreData);
	virtual HRestoreData GetRestoreData();

	// vtable[13] SetRestoreData
	// vtable[14] GetRestoreData
	// sizeof = 8
};
