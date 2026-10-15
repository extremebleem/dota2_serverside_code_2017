// Reconstructed from DWARF by pahole; not original source.

// src/common/binaryproperties.h:32
struct _BinaryProperties_Value_t {
	union {
		const char * pString;  // +0x0
		int64 nInt64;  // +0x0
		double flDouble;  // +0x0
	};

	union {
		const char * pString;  // +0x0
		int64 nInt64;  // +0x0
		double flDouble;  // +0x0
	} val;
	BinaryProperties_ValueType_t valueType;  // +0x8
	bool GetBool();

	// sizeof = 16
};
