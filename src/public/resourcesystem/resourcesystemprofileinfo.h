// Reconstructed from DWARF by pahole; not original source.

// src/public/resourcesystem/resourcesystemprofileinfo.h:421
class CResourceSystemProfileScope {
	CInterlockedUInt64 * m_pCycles;  // +0x8
	bool m_bGathered;  // +0x10
	CResourceSystemProfileScope(CInterlockedUInt64 *, CInterlockedUInt *, ResourceType_t);
	~CResourceSystemProfileScope();

	// sizeof = 24
};

// src/public/resourcesystem/resourcesystemprofileinfo.h:482
struct ResourceSystemStats_t {
	CInterlockedUInt64 m_nCyclesSpent_HandleResourceData;  // +0x0
	CInterlockedUInt m_nCount_HandleResourceData;  // +0x8

	CInterlockedUInt64 m_nCyclesSpent_Autoconvert;  // +0x10
	CInterlockedUInt m_nCount_Autoconvert;  // +0x18

	CInterlockedUInt64 m_nCyclesSpent_ExtrefFixup;  // +0x20
	CInterlockedUInt m_nCount_ExtrefFixup;  // +0x28

	CInterlockedUInt64 m_nCyclesSpent_Allocate;  // +0x30
	CInterlockedUInt m_nCount_Allocate;  // +0x38

	CInterlockedUInt64 m_nCyclesSpent_Deallocate;  // +0x40
	CInterlockedUInt m_nCount_Deallocate;  // +0x48

	CInterlockedUInt64 m_nCyclesSpent_SubmitResourceFileRequests;  // +0x50
	CInterlockedUInt m_nCount_SubmitResourceFileRequests;  // +0x58

	CInterlockedUInt64 m_nCyclesSpent_ManifestCompletion;  // +0x60
	CInterlockedUInt m_nCount_ManifestCompletion;  // +0x68

	CInterlockedUInt64 m_nCyclesSpent_NotifyManifestFinished;  // +0x70
	CInterlockedUInt m_nCount_NotifyManifestFinished;  // +0x78
	CInterlockedUInt m_nCounter_ExtrefInfoFindOrCreate;  // +0x7c
	CInterlockedUInt m_nCounter_ExtrefInfoInit;  // +0x80
	CInterlockedUInt m_nCounter_ExtrefTraverseClass;  // +0x84
	CInterlockedUInt m_nCounter_ExtrefFixupField;  // +0x88

	CInterlockedUInt64 m_nCyclesSpent_ExtrefFixUpGuts;  // +0x90
	CInterlockedUInt m_nCount_ExtrefFixUpGuts;  // +0x98

	CInterlockedUInt64 m_nCyclesSpent_StreamRefAndFixup;  // +0xa0
	CInterlockedUInt m_nCount_StreamRefAndFixup;  // +0xa8

	CInterlockedUInt64 m_nCyclesSpent_ExtrefRegister;  // +0xb0
	CInterlockedUInt m_nCount_ExtrefRegister;  // +0xb8

	CInterlockedUInt64 m_nCyclesSpent_StreamExisting;  // +0xc0
	CInterlockedUInt m_nCount_StreamExisting;  // +0xc8

	CInterlockedUInt64 m_nCyclesSpent_StreamExtList;  // +0xd0
	CInterlockedUInt m_nCount_StreamExtList;  // +0xd8

	CInterlockedUInt64 m_nCyclesSpent_StreamDefList;  // +0xe0
	CInterlockedUInt m_nCount_StreamDefList;  // +0xe8

	CInterlockedUInt64 m_nCyclesSpent_StreamNewRef;  // +0xf0
	CInterlockedUInt m_nCount_StreamNewRef;  // +0xf8

	CInterlockedUInt64 m_nCyclesSpent_StreamNewDef;  // +0x100
	CInterlockedUInt m_nCount_StreamNewDef;  // +0x108

	CInterlockedUInt64 m_nCyclesSpent_StreamProc;  // +0x110
	CInterlockedUInt m_nCount_StreamProc;  // +0x118

	CInterlockedUInt64 m_nCyclesSpent_ExtrefCleanUpGuts;  // +0x120
	CInterlockedUInt m_nCount_ExtrefCleanUpGuts;  // +0x128

	CInterlockedUInt64 m_nCyclesSpent_AcquireSubmit;  // +0x130
	CInterlockedUInt m_nCount_AcquireSubmit;  // +0x138

	CInterlockedUInt64 m_nCyclesSpent_AcquireSubmitB;  // +0x140
	CInterlockedUInt m_nCount_AcquireSubmitB;  // +0x148

	CInterlockedUInt64 m_nCyclesSpent_AcquireSubmitGetReg;  // +0x150
	CInterlockedUInt m_nCount_AcquireSubmitGetReg;  // +0x158

	CInterlockedUInt64 m_nCyclesSpent_AcquireSubmitUnk;  // +0x160
	CInterlockedUInt m_nCount_AcquireSubmitUnk;  // +0x168

	CInterlockedUInt64 m_nCyclesSpent_AcquireSubmitHFile;  // +0x170
	CInterlockedUInt m_nCount_AcquireSubmitHFile;  // +0x178

	CInterlockedUInt64 m_nCyclesSpent_AcquireSubmitInsert;  // +0x180
	CInterlockedUInt m_nCount_AcquireSubmitInsert;  // +0x188

	CInterlockedUInt64 m_nCyclesSpent_AcquireSubmitRequest;  // +0x190
	CInterlockedUInt m_nCount_AcquireSubmitRequest;  // +0x198

	CInterlockedUInt64 m_nCyclesSpent_AcquireSubmitUnhash;  // +0x1a0
	CInterlockedUInt m_nCount_AcquireSubmitUnhash;  // +0x1a8
	ResourceSystemStats_t();

	// sizeof = 432
};

// src/public/resourcesystem/resourcesystemprofileinfo.h:522
class CResourceProfileEventSpanScope {
	ResourceHandle_t m_hResource;  // +0x0
	CResourceProfileEventSpanScope(ResourceHandle_t, RMSG_EventType_t);
	~CResourceProfileEventSpanScope();

	// sizeof = 16
};
