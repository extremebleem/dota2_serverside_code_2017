// Reconstructed from DWARF by pahole; not original source.

// src/game/public/animationsystem/sequence_resource_handles.h:16
class CSequenceGroupResource {
private:

	CSequenceGroupResource();
	~CSequenceGroupResource();
	void InitFromV0Data(CConvertOldDiskCtx &, const SequenceGroupResourceData_t *, const char *);
	const CSequenceGroupData * GetSequenceGroupResourceData();
	const char * GetName();

	// sizeof = 16
};
