// Reconstructed from DWARF by pahole; not original source.

// src/public/kv3lib/kv3transfer.h:55
class CKV3TransferBlockAllocator {
private:

	uint8 * m_pBufferBase;  // +0x0
	uint8 * m_pNextAlloc;  // +0x8
	size_t m_nBufferSize;  // +0x10
	bool m_bExternalAllocation;  // +0x18
	CKV3TransferBlockAllocator();
	~CKV3TransferBlockAllocator();
	void Init(uint);
	void Init(void *, uint);
	void Free();
	uint8 * TakeControlOfAllocaction();
	void FreeAllocation(uint8 *);
	uint8 * AllocBlockBytes(int, uintp);
	uint64 GetBlockSize();

	// sizeof = 32
};

// src/public/kv3lib/kv3transfer.h:123
class CKV3TransferContextBase {
	struct TransferInterface_t {
		KV3Transfer_InterfaceId_t m_nId;  // +0x0

		void * m_pInterface;  // +0x8

		// sizeof = 16
	};

protected:

	CKV3TransferContextBase();
	void NoteFailure(const char *, ...);
	KV3TransferResult_t GetResult();
	const char * GetErrorMessage();
	void * FindInterfaceVoid(KV3Transfer_InterfaceId_t);
	void AddInterfaceVoid(KV3Transfer_InterfaceId_t, void *);

	// sizeof = 80
};

// src/public/kv3lib/kv3transfer.h:123
class CKV3TransferContextBase {
	struct TransferInterface_t {
		KV3Transfer_InterfaceId_t m_nId;  // +0x0

		void * m_pInterface;  // +0x8

		// sizeof = 16
	};

protected:

	CKV3TransferContextBase();
	void NoteFailure(const char *, ...);
	KV3TransferResult_t GetResult();
	const char * GetErrorMessage();
	void * FindInterfaceVoid(KV3Transfer_InterfaceId_t);
	void AddInterfaceVoid(KV3Transfer_InterfaceId_t, void *);
	IKV3TransferInterface_ResourceSave * FindInterface<IKV3TransferInterface_ResourceSave>();
	IKV3TransferInterface_ResourceLoad * FindInterface<IKV3TransferInterface_ResourceLoad>();

	// sizeof = 80
};

// src/public/kv3lib/kv3transfer.h:123
class CKV3TransferContextBase {
	struct TransferInterface_t {
		KV3Transfer_InterfaceId_t m_nId;  // +0x0

		void * m_pInterface;  // +0x8

		// sizeof = 16
	};

protected:

	CKV3TransferContextBase();
	void NoteFailure(const char *, ...);
	KV3TransferResult_t GetResult();
	const char * GetErrorMessage();
	void * FindInterfaceVoid(KV3Transfer_InterfaceId_t);
	void AddInterfaceVoid(KV3Transfer_InterfaceId_t, void *);
	~CKV3TransferContextBase();

	// sizeof = 80
};

// src/public/kv3lib/kv3transfer.h:182
class CKV3TransferSaveContext : public CKV3TransferContextBase {
public:

private:

	CKV3TransferSaveContext();
	KeyValues3 * CreateTargetMember(const char *, KeyValues3LowercaseHash_t);
	KeyValues3 * CreateTargetMember(CKeyValues3StringAndHash);
	KeyValues3 * TargetObject();
	bool PrepareTargetForClass(KeyValues3 *, KV3TransferClassBehavior_t, const char *);
	void PushTarget(KeyValues3 *);
	void PopTarget();

	// sizeof = 120
};

// src/public/kv3lib/kv3transfer.h:267
class CKV3TransferLoadContext : public CKV3TransferContextBase {
public:

private:

	const KeyValues3 * m_pSourceObject;  // +0x58

	CKV3TransferLoadContext();
	~CKV3TransferLoadContext();
	void SetBlockAllocator(uint);
	void SetExternalBlockAllocation(void *, uint);
	CKV3TransferBlockAllocator * GetBlockAllocator();
	uint64 GetExternalBlockAllocationUsage();
	void PushSource(const KeyValues3 *);
	void PopSource();
	const KeyValues3 * SourceObject();
	const KeyValues3 * FindSourceMember(const char *, KeyValues3LowercaseHash_t);
	const KeyValues3 * FindSourceMember(CKeyValues3StringAndHash);

	// sizeof = 128
};
