// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/game_saverestore_filesystem.h:17
class ISaveRestoreFileSystem {
	int ()() * * _vptr.ISaveRestoreFileSystem;  // +0x0
	ISaveRestoreFileSystem(ISaveRestoreFileSystem &);
	ISaveRestoreFileSystem(const ISaveRestoreFileSystem &);
	ISaveRestoreFileSystem();
	virtual FileHandle_t Open(const char *, const char *, const char *);
	virtual void Close(FileHandle_t);
	virtual int Read(void *, int, FileHandle_t);
	virtual int Write(const void *, int, FileHandle_t);
	virtual void Seek(FileHandle_t, int, FileSystemSeek_t);
	virtual unsigned int Tell(FileHandle_t);
	virtual unsigned int Size(FileHandle_t);
	virtual unsigned int Size(const char *, const char *);
	virtual bool FileExists(const char *, const char *);
	virtual void RenameFile(const char *, const char *, const char *);
	virtual void RemoveFile(const char *, const char *);
	virtual void AsyncFinishAllWrites();
	virtual void AsyncRelease(FSAsyncControl_t);
	virtual FSAsyncStatus_t AsyncWrite(const char *, const void *, int, bool, bool, FSAsyncControl_t *);
	virtual FSAsyncStatus_t AsyncFinish(FSAsyncControl_t, bool);
	virtual FSAsyncStatus_t AsyncAppend(const char *, const void *, int, bool, FSAsyncControl_t *);
	virtual FSAsyncStatus_t AsyncAppendFile(const char *, const char *, FSAsyncControl_t *);
	virtual void DirectoryCopy(const char *, const char *, const char *);
	virtual bool DirectoryExtract(FileHandle_t, int, const char *);
	virtual int DirectoryCount(const char *);
	virtual void DirectoryClear(const char *, const char *);
	virtual void AuditFiles();
	virtual bool LoadFileFromDisk(const char *);
	virtual void ChangeSaveInMemory(bool, const char *);

	// vtable[0] Open
	// vtable[1] Close
	// vtable[2] Read
	// vtable[3] Write
	// vtable[4] Seek
	// vtable[5] Tell
	// vtable[6] Size
	// vtable[7] Size
	// vtable[8] FileExists
	// vtable[9] RenameFile
	// vtable[10] RemoveFile
	// vtable[11] AsyncFinishAllWrites
	// vtable[12] AsyncRelease
	// vtable[13] AsyncWrite
	// vtable[14] AsyncFinish
	// vtable[15] AsyncAppend
	// vtable[16] AsyncAppendFile
	// vtable[17] DirectoryCopy
	// vtable[18] DirectoryExtract
	// vtable[19] DirectoryCount
	// vtable[20] DirectoryClear
	// vtable[21] AuditFiles
	// vtable[22] LoadFileFromDisk
	// vtable[23] ChangeSaveInMemory
	// sizeof = 8
};
