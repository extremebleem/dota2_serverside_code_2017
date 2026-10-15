// Reconstructed from DWARF by pahole; not original source.

// src/public/resourcefile/resourcestream.h:120
class CResourcePointerBase {
protected:

	int32 m_nOffset;  // +0x0
	CResourcePointerBase();
	bool operator==(int);
	bool IsNull();
	int32 NotNull();
	int32 GetOffset();
	const uint8 * GetUncheckedRawPtr();
	uint8 * GetUncheckedRawPtr();
	const uint8 * GetRawPtr();
	uint8 * GetRawPtr();
	void SetRawPtr(const void *);
	void Rebase(int);
	void SetNull();

	// sizeof = 4
};

// src/public/resourcefile/resourcestream.h:284
class CResourceArrayBase {
protected:

	int32 m_nOffset;  // +0x0
	uint32 m_nCount;  // +0x4
	CResourceArrayBase();
	bool operator==(int);
	bool IsNull();
	int32 NotNull();
	const uint8 * GetRawPtr();
	uint8 * GetRawPtr();
	int Count();
	void WriteDirect(int, void *);
	void SwapMemberBytes();
	void Rebase(int);

private:

	CResourceArrayBase(const CResourceArrayBase &);

	// sizeof = 8
};

// src/public/resourcefile/resourcestream.h:513
class CResourceStream {
	int ()() * * _vptr.CResourceStream;  // +0x0
protected:

	uint8 * m_pData;  // +0x8
	uint m_nCommitted;  // +0x10
	uint m_nUsed;  // +0x14
	uint m_nAlignBits;  // +0x18
	uint m_nMaxAlignment;  // +0x1c
	CResourceStream();
	virtual ~CResourceStream();
	void * AllocateBytes(uint);
	void WriteBytes(const void *, uint);
	CLockedResource<float> WriteFloat(float);
	CLockedResource<long long unsigned int> WriteU64(uint64);
	CLockedResource<unsigned int> WriteU32(uint32);
	CLockedResource<short unsigned int> WriteU16(uint16);
	CLockedResource<unsigned char> WriteByte(uint8);
	CLockedResource<char> WriteString(const char *);
	CLockedResource<char> WriteUniqueString(const char *);
	CLockedResource<char> WriteStringMaxLen(const char *, int);
	void Align(uint, int);
	void AlignPointer();
	uint32 Tell();
	uint32 Tell(const void *);
	const void * TellPtr();
	void Rollback(uint32);
	void Rollback(const void *);
	void * Compile();
	uint GetTotalSize();
	void Barrier();
	void PrintStats();
	void ClearStats();
	uint GetStreamAlignment();
	void * GetDataPtr(uint);
	void Clear();
	void EnsureAvailable(uint);
	virtual void Commit(uint);

	// vtable[2] Commit
	// sizeof = 32
};

// src/public/resourcefile/resourcestream.h:593
class CResourceStreamVM : public CResourceStream {
	enum {
		COMMIT_STEP = 0x10000,
	};

public:

protected:

	uint m_nReserved;  // +0x20
	uint32 m_nAllocStatsId;  // +0x24
	CResourceStreamVM(const CResourceStreamVM &);
	CResourceStreamVM(uint);
	virtual ~CResourceStreamVM();
	void CloneStream(CResourceStreamVM &);
	virtual void Commit(uint);
	void ReserveVirtualMemory(uint);
	void ReleaseVirtualMemory();
	void RegisterAllocation();
	void RegisterDeallocation();

	// vtable[2] Commit
	// sizeof = 40
};

// src/public/resourcefile/resourcestream.h:619
class CResourceStreamFixed : public CResourceStream {
public:

private:

	bool m_bOwnMemory;  // +0x20
	CResourceStreamFixed(const CResourceStreamFixed &);
	CResourceStreamFixed(uint);
	CResourceStreamFixed(void *, uint);
	virtual ~CResourceStreamFixed();
	uint8 * Detach();
	int GetSlack();
	virtual void Commit(uint);

	// vtable[2] Commit
	// sizeof = 40
};

// src/public/resourcefile/resourcestream.h:638
class CResourceStreamGrowable : public CResourceStream {
public:

	CResourceStreamGrowable(const CResourceStreamGrowable &);
	CResourceStreamGrowable(uint);
	virtual ~CResourceStreamGrowable();
	virtual void Commit(uint);
	uint GetAllocatedSize();
	uint8 * Detach();

	// vtable[2] Commit
	// sizeof = 32
};

// src/public/resourcefile/resourcestream.h:682
class CResourceString : public CResourcePointer<char> {
public:

	CResourceString();
	CResourceString & operator=(const CLockedResource<char> &);
	CResourceString & operator=(const CResourcePointerBase &);
	const char * GetPtr();
	char * GetPtr();
	const char * operator char const*();
	void Unsafe_OutOfBoundsCopy(const char *);
	bool IsEmpty();
	uint GetDataSize();

private:

	bool operator==(const CResourceString &);
	bool operator!=(const CResourceString &);

	// sizeof = 4
};
