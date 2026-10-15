// Reconstructed from DWARF by pahole; not original source.

// src/public/iprerequisite.h:30
class IPrerequisite {
	int ()() * * _vptr.IPrerequisite;  // +0x0
private:

	int m_nRefCount;  // +0x8
	IPrerequisite(const IPrerequisite &);
	IPrerequisite();
	virtual ~IPrerequisite();
	virtual void AddRef();
	virtual void Release();
	virtual PrerequisiteStatus_t GetPrerequisiteStatus(float64);
	virtual const char * GetName();
	virtual CUtlString Describe();

	// vtable[2] AddRef
	// vtable[3] Release
	// vtable[4] GetPrerequisiteStatus
	// vtable[5] GetName
	// vtable[6] Describe
	// sizeof = 16
};

// src/public/iprerequisite.h:190
class CSequentialPrerequisite : public IPrerequisite, public IPrerequisiteRegistry {
public:

private:

protected:

	bool m_bDebug;  // +0x68

	int m_nLogChannel;  // +0x6c
	CSequentialPrerequisite();
	virtual ~CSequentialPrerequisite();
	virtual const char * GetName();
	virtual PrerequisiteStatus_t GetPrerequisiteStatus(float64);
	virtual void AddPrerequisite(IPrerequisite *);
	virtual void RemovePrerequisite(IPrerequisite *);
	virtual void OnStatusFinished(PrerequisiteStatus_t);
	virtual CUtlString Describe();
	void SetDebug(bool, int, const char *);
	virtual void Log(const char *, ...);

	// vtable[5] GetName
	// vtable[4] GetPrerequisiteStatus
	// vtable[7] AddPrerequisite
	// vtable[8] RemovePrerequisite
	// vtable[9] OnStatusFinished
	// vtable[6] Describe
	// vtable[10] Log
	// sizeof = 120
};

// src/public/iprerequisite.h:374
class CAsyncJobPrerequisite : public IPrerequisite {
public:

private:

	CAsyncJobPrerequisite();
	virtual const char * GetName();
	void Init(CJob *, AsyncJobPrerequisiteStart_t);
	virtual ~CAsyncJobPrerequisite();
	virtual PrerequisiteStatus_t GetPrerequisiteStatus(float64);

	// vtable[5] GetName
	// vtable[4] GetPrerequisiteStatus
	// sizeof = 32
};

// src/public/iprerequisite.h:454
class CAsyncFileLoadPrerequisite : public IPrerequisite {
public:

protected:

	void * m_pFileData;  // +0x20
	size_t m_nFileDataSize;  // +0x28
	CAsyncFileLoadPrerequisite();
	virtual ~CAsyncFileLoadPrerequisite();
	virtual const char * GetName();
	void Init(const char *, const char *);
	virtual void OnFileLoaded();
	void Reset();
	virtual PrerequisiteStatus_t GetPrerequisiteStatus(float64);
	void * GetResultBuffer();
	size_t GetResultBufferSize();
	AsyncRequestStatus_t GetResultStatus();

	// vtable[5] GetName
	// vtable[7] OnFileLoaded
	// vtable[4] GetPrerequisiteStatus
	// sizeof = 56
};
