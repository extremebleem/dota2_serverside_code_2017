// Reconstructed from DWARF by pahole; not original source.

// src/public/tier0/dbg.h:165
struct _AssertStaticVariableStruct_t {
	unsigned int nHitCount:31;  // +0x0:0
	unsigned int bSkipAssert:1;  // +0x0:31

	// sizeof = 4
};

// src/public/tier0/dbg.h:177
struct _AssertCompileTimeConstantStruct_t {
	const LoggingChannelID_t * pChannel;  // +0x8
	const tchar * pFile;  // +0x10
	const tchar * pFunction;  // +0x18
	const tchar * pExpressionString;  // +0x20
	const tchar * pLineAsString;  // +0x28
	unsigned int type:1;  // +0x30:0
	unsigned int bFatal:1;  // +0x30:1
	unsigned int bUseDialog:1;  // +0x30:2
	unsigned int bAssertOnce:1;  // +0x30:3
	unsigned int bLeafCodeHandlesDebuggerBreak:1;  // +0x30:4
	unsigned int nStackFrameSkips:2;  // +0x30:5
	unsigned int nUsingLambda:1;  // +0x30:7

	// sizeof = 56
};

// src/public/tier0/dbg.h:259
class IAssertionFailureListener {
	int ()() * * _vptr.IAssertionFailureListener;  // +0x0
private:

	bool m_bRegistered;  // +0x10
	bool m_bOnlyMonitorsEachAssertionOnce;  // +0x11
	IAssertionFailureListener(bool);
	virtual ~IAssertionFailureListener();
	virtual void * AssertionFailure(const char *, const char *, const tchar *, int, const tchar *, const tchar *, int, AssertionType_t, bool);
	virtual void MiniDumpHandler(const MiniDumpHandlerData_t &, const char *, const char *, const tchar *, int, const tchar *, const tchar *, int, AssertionType_t, bool);
	bool OnlyMonitorsEachAssertionOnce();

	// vtable[2] AssertionFailure
	// vtable[3] MiniDumpHandler
	// sizeof = 24
};
