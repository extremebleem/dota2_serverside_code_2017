// Reconstructed from DWARF by pahole; not original source.

// src/public/tier0/stackcontext.h:32
struct MemoryRange_t {
	void * pLow;  // +0x0
	void * pHigh;  // +0x8

	// sizeof = 16
};

// src/public/tier0/stackcontext.h:38
struct NonVolatileIntegerRegisters_t {
	typedef uintp IntegerRegisterValue_t;

	IntegerRegisterValue_t m_R12;  // +0x0
	IntegerRegisterValue_t m_R13;  // +0x8
	IntegerRegisterValue_t m_R14;  // +0x10
	IntegerRegisterValue_t m_R15;  // +0x18
	IntegerRegisterValue_t m_RBX;  // +0x20
	IntegerRegisterValue_t m_RBP;  // +0x28

	// sizeof = 48
};

// src/public/tier0/stackcontext.h:62
struct StackFramePatch_t : public NonVolatileIntegerRegisters_t {
public:

	IntegerRegisterValue_t m_ReturnAddress;  // +0x30

	// sizeof = 56
};

// src/public/tier0/stackcontext.h:70
struct NonVolatileSSERegisters_t {
	// sizeof = 1
};

// src/public/tier0/stackcontext.h:87
struct JmpBuf_AlternateStack_t : public NonVolatileIntegerRegisters_t, public NonVolatileSSERegisters_t {
public:

	IntegerRegisterValue_t m_StackPointer;  // +0x30

	// sizeof = 56
};

// src/public/tier0/stackcontext.h:100
struct LongJmpUnwindLL_t {
	// sizeof = 8
};

// src/public/tier0/stackcontext.h:105
struct StackFramePatchLL_t : public StackFramePatch_t, public LongJmpUnwindLL_t {
public:

	// sizeof = 64
};
