// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/saverestore_protobuf.h:9
class CProtobufSaveRestoreOps<PlaceDecalEvent_t> : public CDefSaveRestoreOps {
	enum {
		MAX_PROTOBUF_SAVE_LEN = 0x400,
	};

public:

	CProtobufSaveRestoreOps(CProtobufSaveRestoreOps<PlaceDecalEvent_t> &);
	CProtobufSaveRestoreOps(const CProtobufSaveRestoreOps<PlaceDecalEvent_t> &);
	CProtobufSaveRestoreOps();
	virtual void Save(const SaveRestoreFieldInfo_t &, ISave *);
	virtual void Restore(const SaveRestoreFieldInfo_t &, IRestore *);

	// vtable[0] Save
	// vtable[1] Restore
	// sizeof = 8
};
