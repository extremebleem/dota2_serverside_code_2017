// Reconstructed from DWARF by pahole; not original source.

// src/public/vstdlib/iprocessutils.h:68
class IProcess {
	int ()() * * _vptr.IProcess;  // +0x0
	IProcess();
	virtual ~IProcess();
	virtual void SetPriority(ProcessPriority_t);
	virtual void Release();
	virtual void Abort();
	virtual bool IsComplete();
	virtual int WaitUntilComplete();
	virtual int WriteStdin(char *, int);
	virtual IPipeRead * GetStdout();
	virtual IPipeRead * GetStderr();
	virtual int GetExitCode();

	// vtable[2] SetPriority
	// vtable[3] Release
	// vtable[4] Abort
	// vtable[5] IsComplete
	// vtable[6] WaitUntilComplete
	// vtable[7] WriteStdin
	// vtable[8] GetStdout
	// vtable[9] GetStderr
	// vtable[10] GetExitCode
	// sizeof = 8
};
