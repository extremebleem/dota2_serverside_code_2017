// Reconstructed from DWARF by pahole; not original source.

// src/public/filesystem_passthru.h:27
class CInternalFileSystemPassThru<IFileSystem> : public IFileSystem {
public:

protected:

	CInternalFileSystemPassThru(CInternalFileSystemPassThru<IFileSystem> &);
	CInternalFileSystemPassThru(const CInternalFileSystemPassThru<IFileSystem> &);
	CInternalFileSystemPassThru();
	virtual void InitPassThru(IBaseFileSystem *);
	virtual int Read(void *, int, FileHandle_t);
	virtual int Write(const void *, int, FileHandle_t);
	virtual FileHandle_t Open(const char *, const char *, const char *);
	virtual void Close(FileHandle_t);
	virtual void Seek(FileHandle_t, int, FileSystemSeek_t);
	virtual unsigned int Tell(FileHandle_t);
	virtual unsigned int Size(FileHandle_t);
	virtual unsigned int Size(const char *, const char *);
	virtual void Flush(FileHandle_t);
	virtual bool Precache(const char *, const char *);
	virtual bool FileExists(const char *, const char *);
	virtual bool IsFileWritable(const char *, const char *);
	virtual bool SetFileWritable(const char *, bool, const char *);
	virtual int64 GetFileTime(const char *, const char *);
	virtual bool ReadFile(const char *, const char *, CUtlBuffer &, int, int, FSAllocFunc_t);
	virtual bool WriteFile(const char *, const char *, const CUtlBuffer &);
	virtual bool UnzipFile(const char *, const char *, const char *);
	virtual bool CopyAFile(const char *, const char *, const char *, bool);

	// vtable[149] InitPassThru
	// vtable[150] Read
	// vtable[151] Write
	// vtable[152] Open
	// vtable[153] Close
	// vtable[154] Seek
	// vtable[155] Tell
	// vtable[156] Size
	// vtable[157] Size
	// vtable[158] Flush
	// vtable[159] Precache
	// vtable[160] FileExists
	// vtable[161] IsFileWritable
	// vtable[162] SetFileWritable
	// vtable[163] GetFileTime
	// vtable[164] ReadFile
	// vtable[165] WriteFile
	// vtable[166] UnzipFile
	// vtable[167] CopyAFile
	// sizeof = 24
};
