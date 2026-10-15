// Reconstructed from DWARF by pahole; not original source.

// src/public/tier0/stacktools.h:168
class CCallStackMarkerBase {
	void * m_pMarker;  // +0x0
	uintp m_nRecursionDepth;  // +0x8
	bool TestMarkerAgainstCapturedStackIndex(const void * const *, int, int);
	bool IsEnabled();
	bool IsDeferred();

	// sizeof = 16
};

// src/public/tier0/stacktools.h:456
class IStack_VM_Segment_Marker {
	int ()() * * _vptr.IStack_VM_Segment_Marker;  // +0x0
	IStack_VM_Segment_Marker(const CCallStackMarkerBase &);
	virtual ~IStack_VM_Segment_Marker();
	const CCallStackMarkerBase & GetStackMarker();
	virtual int StitchVMSegment(void * *, int, int, int);

	// vtable[2] StitchVMSegment
	// sizeof = 8
};
