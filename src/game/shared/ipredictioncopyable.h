// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/ipredictioncopyable.h:18
class IPredictionCopyable {
	int ()() * * _vptr.IPredictionCopyable;  // +0x0
	IPredictionCopyable();
	virtual ~IPredictionCopyable();
	virtual TypedescriptionOffsetType_t PredCopy_GetOffsetType();
	virtual void PredCopy_SetHeapSize(int);
	virtual uint8 * PredCopy_GetStructBase();
	virtual uint8 * PredCopy_Alloc(unsigned int, const datamap_t *, bool);
	virtual int PredCopy_Tell();
	virtual uint8 * PredCopy_GetHeaderBlock(const CFieldPath &, unsigned int);
	virtual void PredCopy_SetCommand(int);
	virtual int PredCopy_GetCommand();

	// vtable[2] PredCopy_GetOffsetType
	// vtable[3] PredCopy_SetHeapSize
	// vtable[4] PredCopy_GetStructBase
	// vtable[5] PredCopy_Alloc
	// vtable[6] PredCopy_Tell
	// vtable[7] PredCopy_GetHeaderBlock
	// vtable[8] PredCopy_SetCommand
	// vtable[9] PredCopy_GetCommand
	// sizeof = 8
};
