// Reconstructed from DWARF by pahole; not original source.

// src/public/filesystem.h:261
struct FileSystemStatistics {
	CInterlockedUInt nReads;  // +0x0
	CInterlockedUInt nWrites;  // +0x4
	CInterlockedUInt nBytesRead;  // +0x8
	CInterlockedUInt nBytesWritten;  // +0xc
	CInterlockedUInt nSeeks;  // +0x10
	FileSystemStatistics();

	// sizeof = 20
};

// src/public/filesystem.h:285
struct FSAsyncControl_t__ {
	int unused;  // +0x0

	// sizeof = 4
};

// src/public/filesystem.h:286
struct FSAsyncFile_t__ {
	int unused;  // +0x0

	// sizeof = 4
};

// src/public/filesystem.h:354
struct FileAsyncRequest_t {
	const char * pszFilename;  // +0x0
	void * pData;  // +0x8
	int nOffset;  // +0x10
	int nBytes;  // +0x14
	FSAsyncCallbackFunc_t pfnCallback;  // +0x18
	void * pContext;  // +0x20
	int priority;  // +0x28
	unsigned int flags;  // +0x2c
	const char * pszPathID;  // +0x30
	FSAsyncFile_t hSpecificAsyncFile;  // +0x38
	FSAllocFunc_t pfnAlloc;  // +0x40
	FileAsyncRequest_t();

	// sizeof = 72
};

// src/public/filesystem.h:371
class CUnverifiedCRCFile {
	char m_PathID[512];  // +0x0
	char m_Filename[512];  // +0x200
	CRC32_t m_CRC;  // +0x400

	// sizeof = 1028
};

// src/public/filesystem.h:402
struct SearchPathStateHandle_t__ {
	int unused;  // +0x0

	// sizeof = 4
};

// src/public/filesystem.h:431
class IBaseFileSystem {
	int ()() * * _vptr.IBaseFileSystem;  // +0x0
	IBaseFileSystem(IBaseFileSystem &);
	IBaseFileSystem(const IBaseFileSystem &);
	IBaseFileSystem();
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

	// vtable[0] Read
	// vtable[1] Write
	// vtable[2] Open
	// vtable[3] Close
	// vtable[4] Seek
	// vtable[5] Tell
	// vtable[6] Size
	// vtable[7] Size
	// vtable[8] Flush
	// vtable[9] Precache
	// vtable[10] FileExists
	// vtable[11] IsFileWritable
	// vtable[12] SetFileWritable
	// vtable[13] GetFileTime
	// vtable[14] ReadFile
	// vtable[15] WriteFile
	// vtable[16] UnzipFile
	// vtable[17] CopyAFile
	// sizeof = 8
};

// src/public/filesystem.h:470
class IFileSystem : public IAppSystem, public IBaseFileSystem {
	enum KeyValuesPreloadType_t {
		TYPE_VMT = 0,
		TYPE_SOUNDEMITTER = 0x1,
		TYPE_SOUNDSCAPE = 0x2,
		TYPE_SOUNDOPERATORS = 0x3,
		NUM_PRELOAD_TYPES = 0x4,
	};

public:

	IFileSystem(IFileSystem &);
	IFileSystem(const IFileSystem &);
	IFileSystem();
	virtual bool IsSteam();
	virtual FilesystemMountRetval_t MountSteamContent(int);
	virtual void AddSearchPath(const char *, const char *, SearchPathAdd_t, SearchPathPriority_t);
	virtual bool RemoveSearchPath(const char *, const char *);
	virtual SearchPathStateHandle_t SaveSearchPathState(const char *);
	virtual void RestoreSearchPathState(SearchPathStateHandle_t);
	virtual void DestroySearchPathState(SearchPathStateHandle_t);
	virtual void RemoveAllSearchPaths();
	virtual void RemoveSearchPaths(const char *);
	virtual void MarkPathIDByRequestOnly(const char *, bool);
	virtual bool IsFileInReadOnlySearchPath(const char *, const char *);
	virtual void SetSearchPathReadOnly(const char *, const char *, bool);
	virtual const char * RelativePathToFullPath(const char *, const char *, char *, int, PathTypeFilter_t, PathTypeQuery_t *);
	virtual int GetSearchPath(const char *, GetSearchPathTypes_t, char *, int);
	int GetSearchPath(const char *, char *, int);
	virtual bool RemoveFile(const char *, const char *);
	virtual bool RenameFile(const char *, const char *, const char *);
	virtual bool CreateDirHierarchy(const char *, const char *);
	virtual bool IsDirectory(const char *, const char *);
	virtual void FileTimeToString(char *, int, int64);
	virtual void SetBufferSize(FileHandle_t, unsigned int);
	virtual bool IsOk(FileHandle_t);
	virtual bool EndOfFile(FileHandle_t);
	virtual char * ReadLine(char *, int, FileHandle_t);
	virtual int FPrintf(FileHandle_t, const char *, ...);
	virtual PlatModule_t LoadModule(const char *, const char *, bool);
	virtual void UnloadModule(PlatModule_t);
	virtual const char * FindFirst(const char *, FileFindHandle_t *);
	virtual const char * FindNext(FileFindHandle_t &);
	virtual bool FindIsDirectory(const FileFindHandle_t &);
	virtual void FindClose(FileFindHandle_t &);
	virtual const char * FindFirstEx(const char *, const char *, FileFindHandle_t *);
	virtual void FindFileAbsoluteList(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &, const char *, const char *);
	virtual const char * GetLocalPath(const char *, char *, int);
	virtual bool FullPathToRelativePath(const char *, const char *, char *, int);
	virtual bool GetCurrentDirectory(char *, int);
	virtual FileNameHandle_t FindOrAddFileName(const char *);
	virtual bool String(const FileNameHandle_t &, char *, int);
	FSAsyncStatus_t AsyncRead(const FileAsyncRequest_t &, FSAsyncControl_t *);
	virtual FSAsyncStatus_t AsyncReadMultiple(const FileAsyncRequest_t *, int, FSAsyncControl_t *);
	virtual FSAsyncStatus_t AsyncAppend(const char *, const void *, int, bool, FSAsyncControl_t *);
	virtual FSAsyncStatus_t AsyncAppendFile(const char *, const char *, FSAsyncControl_t *);
	virtual void AsyncFinishAll(int);
	virtual void AsyncFinishAllWrites();
	virtual FSAsyncStatus_t AsyncFlush();
	virtual bool AsyncSuspend();
	virtual bool AsyncResume();
	virtual FSAsyncStatus_t AsyncBeginRead(const char *, FSAsyncFile_t *);
	virtual FSAsyncStatus_t AsyncEndRead(FSAsyncFile_t);
	virtual FSAsyncStatus_t AsyncFinish(FSAsyncControl_t, bool);
	virtual FSAsyncStatus_t AsyncGetResult(FSAsyncControl_t, void * *, int *);
	virtual FSAsyncStatus_t AsyncAbort(FSAsyncControl_t);
	virtual FSAsyncStatus_t AsyncStatus(FSAsyncControl_t);
	virtual FSAsyncStatus_t AsyncSetPriority(FSAsyncControl_t, int);
	virtual void AsyncAddRef(FSAsyncControl_t);
	virtual void AsyncRelease(FSAsyncControl_t);
	virtual WaitForResourcesHandle_t WaitForResources(const char *);
	virtual bool GetWaitForResourcesProgress(WaitForResourcesHandle_t, float *, bool *);
	virtual void CancelWaitForResources(WaitForResourcesHandle_t);
	virtual int HintResourceNeed(const char *, int);
	virtual bool IsFileImmediatelyAvailable(const char *);
	virtual void GetLocalCopy(const char *);
	virtual void PrintOpenedFiles();
	virtual void PrintSearchPaths();
	virtual void SetWarningFunc(void (*)(const char *, ...));
	virtual void SetWarningLevel(FileWarningLevel_t);
	virtual void AddLoggingFunc(void (*)(const char *, const char *));
	virtual void RemoveLoggingFunc(FileSystemLoggingFunc_t);
	virtual const FileSystemStatistics * GetFilesystemStatistics();
	virtual FileHandle_t OpenEx(const char *, const char *, unsigned int, const char *);
	virtual int ReadEx(void *, int, int, FileHandle_t);
	virtual int ReadFileEx(const char *, const char *, void * *, bool, bool, int, int, FSAllocFunc_t);
	virtual FileNameHandle_t FindFileName(const char *);
	virtual KeyValues * LoadKeyValues(KeyValuesPreloadType_t, const char *, const char *);
	virtual bool LoadKeyValues(KeyValues &, KeyValuesPreloadType_t, const char *, const char *);
	virtual FSAsyncStatus_t AsyncWrite(const char *, const void *, int, bool, bool, FSAsyncControl_t *);
	virtual FSAsyncStatus_t AsyncWriteFile(const char *, const CUtlBuffer *, int, bool, bool, FSAsyncControl_t *);
	virtual FSAsyncStatus_t AsyncWriteUGCFile(const char *, const CUtlBuffer *, int, bool, AsyncWriteUGCFileDelegate_t, FSAsyncControl_t *);
	FSAsyncStatus_t AsyncReadCreditAlloc(const FileAsyncRequest_t &, const char *, int, FSAsyncControl_t *);
	virtual FSAsyncStatus_t AsyncReadMultipleCreditAlloc(const FileAsyncRequest_t *, int, const char *, int, FSAsyncControl_t *);
	virtual FSAsyncStatus_t AsyncDirectoryScan(const char *, bool, void *, FSAsyncScanAddFunc_t, FSAsyncScanCompleteFunc_t, FSAsyncControl_t *);
	virtual bool GetFileTypeForFullPath(const char *, wchar_t *, int);
	virtual bool ReadToBuffer(FileHandle_t, CUtlBuffer &, int, FSAllocFunc_t);
	virtual bool GetOptimalIOConstraints(FileHandle_t, unsigned int *, unsigned int *, unsigned int *);
	virtual void * AllocOptimalReadBuffer(FileHandle_t, unsigned int, unsigned int);
	virtual void FreeOptimalReadBuffer(void *);
	virtual int GetPathIndex(const FileNameHandle_t &);
	virtual int64 GetPathTime(const char *, const char *);
	virtual DVDMode_t GetDVDMode();
	virtual void EnableWhitelistFileTracking(bool);
	virtual void RegisterFileWhitelist(IFileList *, IFileList *, IFileList * *);
	virtual void MarkAllCRCsUnverified();
	virtual void CacheFileCRCs(const char *, ECacheCRCType, IFileList *);
	virtual EFileCRCStatus CheckCachedFileCRC(const char *, const char *, CRC32_t *);
	virtual int GetUnverifiedCRCFiles(CUnverifiedCRCFile *, int);
	virtual int GetWhitelistSpewFlags();
	virtual void SetWhitelistSpewFlags(int);
	virtual void InstallDirtyDiskReportFunc(FSDirtyDiskReportFunc_t);
	virtual bool IsLaunchedFromXboxHDD();
	virtual bool IsInstalledToXboxHDDCache();
	virtual bool IsDVDHosted();
	virtual bool IsInstallAllowed();
	virtual int GetSearchPathID(char *, int);
	virtual bool FixupSearchPathsAfterInstall();
	virtual FSDirtyDiskReportFunc_t GetDirtyDiskReportFunc();
	virtual bool AddVPKFile(const char *, const char *, SearchPathAdd_t);
	virtual void RemoveVPKFile(const char *, const char *);
	virtual bool IsVPKFileLoaded(const char *);
	virtual void EnableAutoVPKFileLoading(bool);
	virtual bool GetAutoVPKFileLoading();
	virtual bool AddUGCVPKFile(UGCHandle_t, const char *, SearchPathAdd_t);
	virtual void RemoveUGCVPKFile(UGCHandle_t, const char *);
	virtual bool IsUGCVPKFileLoaded(UGCHandle_t);
	virtual UGCHandle_t ParseUGCHandleFromFilename(const char *, char * *);
	virtual void CreateFilenameForUGCFile(char *, int, UGCHandle_t, const char *, char);
	virtual bool GetUGCInfo(UGCHandle_t, char * *, int32 *, CSteamID *);
	virtual FileHandle_t OpenUGCFile(UGCHandle_t);
	virtual void SyncDvdDevCache();
	virtual bool DiscoverDLC(int);
	virtual int IsAnyDLCPresent(bool *);
	virtual bool GetAnyDLCInfo(int, unsigned int *, wchar_t *, int);
	virtual int IsAnyCorruptDLC();
	virtual bool GetAnyCorruptDLCInfo(int, wchar_t *, int);
	virtual bool AddDLCSearchPaths();
	virtual bool IsSpecificDLCPresent(unsigned int);
	virtual void SetIODelayAlarm(float);
	virtual ILowLevelFileIO * GetLowLevelFileIO();
	virtual ILowLevelFileIO * SetLowLevelFileIO(ILowLevelFileIO *);
	virtual bool AddXLSPUpdateSearchPath(const void *, int);
	virtual void DumpFileSystemStats(LoggingChannelID_t, const char *);
	virtual bool DeleteDirectory(const char *, const char *);
	virtual bool DeleteDirectoryAndContents_R(const char *, const char *, bool);
	virtual bool IsPathInvalidForFilesystem(const char *);
	virtual void GetAvailableDrives(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	virtual CUtlString ReadLine(FileHandle_t, bool);
	virtual void GetSearchPathsForPathID(const char *, GetSearchPathTypes_t, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	virtual ISteamApps * GetSteamApps();
	virtual void SetSteamApps(ISteamApps *);
	virtual bool MarkContentCorrupt(bool, const char *);
	virtual void SetContentCorruptionReportingEnabled(bool);
	virtual void SuppressAsyncFileRequestFlushOnPathChange(bool);

	// vtable[11] IsSteam
	// vtable[12] MountSteamContent
	// vtable[13] AddSearchPath
	// vtable[14] RemoveSearchPath
	// vtable[15] SaveSearchPathState
	// vtable[16] RestoreSearchPathState
	// vtable[17] DestroySearchPathState
	// vtable[18] RemoveAllSearchPaths
	// vtable[19] RemoveSearchPaths
	// vtable[20] MarkPathIDByRequestOnly
	// vtable[21] IsFileInReadOnlySearchPath
	// vtable[22] SetSearchPathReadOnly
	// vtable[23] RelativePathToFullPath
	// vtable[24] GetSearchPath
	// vtable[25] RemoveFile
	// vtable[26] RenameFile
	// vtable[27] CreateDirHierarchy
	// vtable[28] IsDirectory
	// vtable[29] FileTimeToString
	// vtable[30] SetBufferSize
	// vtable[31] IsOk
	// vtable[32] EndOfFile
	// vtable[33] ReadLine
	// vtable[34] FPrintf
	// vtable[35] LoadModule
	// vtable[36] UnloadModule
	// vtable[37] FindFirst
	// vtable[38] FindNext
	// vtable[39] FindIsDirectory
	// vtable[40] FindClose
	// vtable[41] FindFirstEx
	// vtable[42] FindFileAbsoluteList
	// vtable[43] GetLocalPath
	// vtable[44] FullPathToRelativePath
	// vtable[45] GetCurrentDirectory
	// vtable[46] FindOrAddFileName
	// vtable[47] String
	// vtable[48] AsyncReadMultiple
	// vtable[49] AsyncAppend
	// vtable[50] AsyncAppendFile
	// vtable[51] AsyncFinishAll
	// vtable[52] AsyncFinishAllWrites
	// vtable[53] AsyncFlush
	// vtable[54] AsyncSuspend
	// vtable[55] AsyncResume
	// vtable[56] AsyncBeginRead
	// vtable[57] AsyncEndRead
	// vtable[58] AsyncFinish
	// vtable[59] AsyncGetResult
	// vtable[60] AsyncAbort
	// vtable[61] AsyncStatus
	// vtable[62] AsyncSetPriority
	// vtable[63] AsyncAddRef
	// vtable[64] AsyncRelease
	// vtable[65] WaitForResources
	// vtable[66] GetWaitForResourcesProgress
	// vtable[67] CancelWaitForResources
	// vtable[68] HintResourceNeed
	// vtable[69] IsFileImmediatelyAvailable
	// vtable[70] GetLocalCopy
	// vtable[71] PrintOpenedFiles
	// vtable[72] PrintSearchPaths
	// vtable[73] SetWarningFunc
	// vtable[74] SetWarningLevel
	// vtable[75] AddLoggingFunc
	// vtable[76] RemoveLoggingFunc
	// vtable[77] GetFilesystemStatistics
	// vtable[78] OpenEx
	// vtable[79] ReadEx
	// vtable[80] ReadFileEx
	// vtable[81] FindFileName
	// vtable[82] LoadKeyValues
	// vtable[83] LoadKeyValues
	// vtable[84] AsyncWrite
	// vtable[85] AsyncWriteFile
	// vtable[86] AsyncWriteUGCFile
	// vtable[87] AsyncReadMultipleCreditAlloc
	// vtable[88] AsyncDirectoryScan
	// vtable[89] GetFileTypeForFullPath
	// vtable[90] ReadToBuffer
	// vtable[91] GetOptimalIOConstraints
	// vtable[92] AllocOptimalReadBuffer
	// vtable[93] FreeOptimalReadBuffer
	// vtable[94] GetPathIndex
	// vtable[95] GetPathTime
	// vtable[96] GetDVDMode
	// vtable[97] EnableWhitelistFileTracking
	// vtable[98] RegisterFileWhitelist
	// vtable[99] MarkAllCRCsUnverified
	// vtable[100] CacheFileCRCs
	// vtable[101] CheckCachedFileCRC
	// vtable[102] GetUnverifiedCRCFiles
	// vtable[103] GetWhitelistSpewFlags
	// vtable[104] SetWhitelistSpewFlags
	// vtable[105] InstallDirtyDiskReportFunc
	// vtable[106] IsLaunchedFromXboxHDD
	// vtable[107] IsInstalledToXboxHDDCache
	// vtable[108] IsDVDHosted
	// vtable[109] IsInstallAllowed
	// vtable[110] GetSearchPathID
	// vtable[111] FixupSearchPathsAfterInstall
	// vtable[112] GetDirtyDiskReportFunc
	// vtable[113] AddVPKFile
	// vtable[114] RemoveVPKFile
	// vtable[115] IsVPKFileLoaded
	// vtable[116] EnableAutoVPKFileLoading
	// vtable[117] GetAutoVPKFileLoading
	// vtable[118] AddUGCVPKFile
	// vtable[119] RemoveUGCVPKFile
	// vtable[120] IsUGCVPKFileLoaded
	// vtable[121] ParseUGCHandleFromFilename
	// vtable[122] CreateFilenameForUGCFile
	// vtable[123] GetUGCInfo
	// vtable[124] OpenUGCFile
	// vtable[125] SyncDvdDevCache
	// vtable[126] DiscoverDLC
	// vtable[127] IsAnyDLCPresent
	// vtable[128] GetAnyDLCInfo
	// vtable[129] IsAnyCorruptDLC
	// vtable[130] GetAnyCorruptDLCInfo
	// vtable[131] AddDLCSearchPaths
	// vtable[132] IsSpecificDLCPresent
	// vtable[133] SetIODelayAlarm
	// vtable[134] GetLowLevelFileIO
	// vtable[135] SetLowLevelFileIO
	// vtable[136] AddXLSPUpdateSearchPath
	// vtable[137] DumpFileSystemStats
	// vtable[138] DeleteDirectory
	// vtable[139] DeleteDirectoryAndContents_R
	// vtable[140] IsPathInvalidForFilesystem
	// vtable[141] GetAvailableDrives
	// vtable[142] ReadLine
	// vtable[143] GetSearchPathsForPathID
	// vtable[144] GetSteamApps
	// vtable[145] SetSteamApps
	// vtable[146] MarkContentCorrupt
	// vtable[147] SetContentCorruptionReportingEnabled
	// vtable[148] SuppressAsyncFileRequestFlushOnPathChange
	// sizeof = 16
};

// src/public/filesystem.h:470
class IFileSystem : public IAppSystem, public IBaseFileSystem {
	enum KeyValuesPreloadType_t {
		TYPE_VMT = 0,
		TYPE_SOUNDEMITTER = 0x1,
		TYPE_SOUNDSCAPE = 0x2,
		TYPE_SOUNDOPERATORS = 0x3,
		NUM_PRELOAD_TYPES = 0x4,
	};

public:

	IFileSystem(IFileSystem &);
	IFileSystem(const IFileSystem &);
	IFileSystem();
	virtual bool IsSteam();
	virtual FilesystemMountRetval_t MountSteamContent(int);
	virtual void AddSearchPath(const char *, const char *, SearchPathAdd_t, SearchPathPriority_t);
	virtual bool RemoveSearchPath(const char *, const char *);
	virtual SearchPathStateHandle_t SaveSearchPathState(const char *);
	virtual void RestoreSearchPathState(SearchPathStateHandle_t);
	virtual void DestroySearchPathState(SearchPathStateHandle_t);
	virtual void RemoveAllSearchPaths();
	virtual void RemoveSearchPaths(const char *);
	virtual void MarkPathIDByRequestOnly(const char *, bool);
	virtual bool IsFileInReadOnlySearchPath(const char *, const char *);
	virtual void SetSearchPathReadOnly(const char *, const char *, bool);
	virtual const char * RelativePathToFullPath(const char *, const char *, char *, int, PathTypeFilter_t, PathTypeQuery_t *);
	virtual int GetSearchPath(const char *, GetSearchPathTypes_t, char *, int);
	int GetSearchPath(const char *, char *, int);
	virtual bool RemoveFile(const char *, const char *);
	virtual bool RenameFile(const char *, const char *, const char *);
	virtual bool CreateDirHierarchy(const char *, const char *);
	virtual bool IsDirectory(const char *, const char *);
	virtual void FileTimeToString(char *, int, int64);
	virtual void SetBufferSize(FileHandle_t, unsigned int);
	virtual bool IsOk(FileHandle_t);
	virtual bool EndOfFile(FileHandle_t);
	virtual char * ReadLine(char *, int, FileHandle_t);
	virtual int FPrintf(FileHandle_t, const char *, ...);
	virtual PlatModule_t LoadModule(const char *, const char *, bool);
	virtual void UnloadModule(PlatModule_t);
	virtual const char * FindFirst(const char *, FileFindHandle_t *);
	virtual const char * FindNext(FileFindHandle_t &);
	virtual bool FindIsDirectory(const FileFindHandle_t &);
	virtual void FindClose(FileFindHandle_t &);
	virtual const char * FindFirstEx(const char *, const char *, FileFindHandle_t *);
	virtual void FindFileAbsoluteList(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &, const char *, const char *);
	virtual const char * GetLocalPath(const char *, char *, int);
	virtual bool FullPathToRelativePath(const char *, const char *, char *, int);
	virtual bool GetCurrentDirectory(char *, int);
	virtual FileNameHandle_t FindOrAddFileName(const char *);
	virtual bool String(const FileNameHandle_t &, char *, int);
	FSAsyncStatus_t AsyncRead(const FileAsyncRequest_t &, FSAsyncControl_t *);
	virtual FSAsyncStatus_t AsyncReadMultiple(const FileAsyncRequest_t *, int, FSAsyncControl_t *);
	virtual FSAsyncStatus_t AsyncAppend(const char *, const void *, int, bool, FSAsyncControl_t *);
	virtual FSAsyncStatus_t AsyncAppendFile(const char *, const char *, FSAsyncControl_t *);
	virtual void AsyncFinishAll(int);
	virtual void AsyncFinishAllWrites();
	virtual FSAsyncStatus_t AsyncFlush();
	virtual bool AsyncSuspend();
	virtual bool AsyncResume();
	virtual FSAsyncStatus_t AsyncBeginRead(const char *, FSAsyncFile_t *);
	virtual FSAsyncStatus_t AsyncEndRead(FSAsyncFile_t);
	virtual FSAsyncStatus_t AsyncFinish(FSAsyncControl_t, bool);
	virtual FSAsyncStatus_t AsyncGetResult(FSAsyncControl_t, void * *, int *);
	virtual FSAsyncStatus_t AsyncAbort(FSAsyncControl_t);
	virtual FSAsyncStatus_t AsyncStatus(FSAsyncControl_t);
	virtual FSAsyncStatus_t AsyncSetPriority(FSAsyncControl_t, int);
	virtual void AsyncAddRef(FSAsyncControl_t);
	virtual void AsyncRelease(FSAsyncControl_t);
	virtual WaitForResourcesHandle_t WaitForResources(const char *);
	virtual bool GetWaitForResourcesProgress(WaitForResourcesHandle_t, float *, bool *);
	virtual void CancelWaitForResources(WaitForResourcesHandle_t);
	virtual int HintResourceNeed(const char *, int);
	virtual bool IsFileImmediatelyAvailable(const char *);
	virtual void GetLocalCopy(const char *);
	virtual void PrintOpenedFiles();
	virtual void PrintSearchPaths();
	virtual void SetWarningFunc(void (*)(const char *, ...));
	virtual void SetWarningLevel(FileWarningLevel_t);
	virtual void AddLoggingFunc(void (*)(const char *, const char *));
	virtual void RemoveLoggingFunc(FileSystemLoggingFunc_t);
	virtual const FileSystemStatistics * GetFilesystemStatistics();
	virtual FileHandle_t OpenEx(const char *, const char *, unsigned int, const char *);
	virtual int ReadEx(void *, int, int, FileHandle_t);
	virtual int ReadFileEx(const char *, const char *, void * *, bool, bool, int, int, FSAllocFunc_t);
	virtual FileNameHandle_t FindFileName(const char *);
	virtual KeyValues * LoadKeyValues(KeyValuesPreloadType_t, const char *, const char *);
	virtual bool LoadKeyValues(KeyValues &, KeyValuesPreloadType_t, const char *, const char *);
	virtual FSAsyncStatus_t AsyncWrite(const char *, const void *, int, bool, bool, FSAsyncControl_t *);
	virtual FSAsyncStatus_t AsyncWriteFile(const char *, const CUtlBuffer *, int, bool, bool, FSAsyncControl_t *);
	virtual FSAsyncStatus_t AsyncWriteUGCFile(const char *, const CUtlBuffer *, int, bool, AsyncWriteUGCFileDelegate_t, FSAsyncControl_t *);
	FSAsyncStatus_t AsyncReadCreditAlloc(const FileAsyncRequest_t &, const char *, int, FSAsyncControl_t *);
	virtual FSAsyncStatus_t AsyncReadMultipleCreditAlloc(const FileAsyncRequest_t *, int, const char *, int, FSAsyncControl_t *);
	virtual FSAsyncStatus_t AsyncDirectoryScan(const char *, bool, void *, FSAsyncScanAddFunc_t, FSAsyncScanCompleteFunc_t, FSAsyncControl_t *);
	virtual bool GetFileTypeForFullPath(const char *, wchar_t *, int);
	virtual bool ReadToBuffer(FileHandle_t, CUtlBuffer &, int, FSAllocFunc_t);
	virtual bool GetOptimalIOConstraints(FileHandle_t, unsigned int *, unsigned int *, unsigned int *);
	virtual void * AllocOptimalReadBuffer(FileHandle_t, unsigned int, unsigned int);
	virtual void FreeOptimalReadBuffer(void *);
	virtual int GetPathIndex(const FileNameHandle_t &);
	virtual int64 GetPathTime(const char *, const char *);
	virtual DVDMode_t GetDVDMode();
	virtual void EnableWhitelistFileTracking(bool);
	virtual void RegisterFileWhitelist(IFileList *, IFileList *, IFileList * *);
	virtual void MarkAllCRCsUnverified();
	virtual void CacheFileCRCs(const char *, ECacheCRCType, IFileList *);
	virtual EFileCRCStatus CheckCachedFileCRC(const char *, const char *, CRC32_t *);
	virtual int GetUnverifiedCRCFiles(CUnverifiedCRCFile *, int);
	virtual int GetWhitelistSpewFlags();
	virtual void SetWhitelistSpewFlags(int);
	virtual void InstallDirtyDiskReportFunc(FSDirtyDiskReportFunc_t);
	virtual bool IsLaunchedFromXboxHDD();
	virtual bool IsInstalledToXboxHDDCache();
	virtual bool IsDVDHosted();
	virtual bool IsInstallAllowed();
	virtual int GetSearchPathID(char *, int);
	virtual bool FixupSearchPathsAfterInstall();
	virtual FSDirtyDiskReportFunc_t GetDirtyDiskReportFunc();
	virtual bool AddVPKFile(const char *, const char *, SearchPathAdd_t);
	virtual void RemoveVPKFile(const char *, const char *);
	virtual bool IsVPKFileLoaded(const char *);
	virtual void EnableAutoVPKFileLoading(bool);
	virtual bool GetAutoVPKFileLoading();
	virtual bool AddUGCVPKFile(UGCHandle_t, const char *, SearchPathAdd_t);
	virtual void RemoveUGCVPKFile(UGCHandle_t, const char *);
	virtual bool IsUGCVPKFileLoaded(UGCHandle_t);
	virtual UGCHandle_t ParseUGCHandleFromFilename(const char *, char * *);
	virtual void CreateFilenameForUGCFile(char *, int, UGCHandle_t, const char *, char);
	virtual bool GetUGCInfo(UGCHandle_t, char * *, int32 *, CSteamID *);
	virtual FileHandle_t OpenUGCFile(UGCHandle_t);
	virtual void SyncDvdDevCache();
	virtual bool DiscoverDLC(int);
	virtual int IsAnyDLCPresent(bool *);
	virtual bool GetAnyDLCInfo(int, unsigned int *, wchar_t *, int);
	virtual int IsAnyCorruptDLC();
	virtual bool GetAnyCorruptDLCInfo(int, wchar_t *, int);
	virtual bool AddDLCSearchPaths();
	virtual bool IsSpecificDLCPresent(unsigned int);
	virtual void SetIODelayAlarm(float);
	virtual ILowLevelFileIO * GetLowLevelFileIO();
	virtual ILowLevelFileIO * SetLowLevelFileIO(ILowLevelFileIO *);
	virtual bool AddXLSPUpdateSearchPath(const void *, int);
	virtual void DumpFileSystemStats(LoggingChannelID_t, const char *);
	virtual bool DeleteDirectory(const char *, const char *);
	virtual bool DeleteDirectoryAndContents_R(const char *, const char *, bool);
	virtual bool IsPathInvalidForFilesystem(const char *);
	virtual void GetAvailableDrives(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	virtual CUtlString ReadLine(FileHandle_t, bool);
	virtual void GetSearchPathsForPathID(const char *, GetSearchPathTypes_t, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	virtual ISteamApps * GetSteamApps();
	virtual void SetSteamApps(ISteamApps *);
	virtual bool MarkContentCorrupt(bool, const char *);
	virtual void SetContentCorruptionReportingEnabled(bool);
	virtual void SuppressAsyncFileRequestFlushOnPathChange(bool);
	int GetOptimalReadSize<int>(FileHandle_t, int);

	// vtable[11] IsSteam
	// vtable[12] MountSteamContent
	// vtable[13] AddSearchPath
	// vtable[14] RemoveSearchPath
	// vtable[15] SaveSearchPathState
	// vtable[16] RestoreSearchPathState
	// vtable[17] DestroySearchPathState
	// vtable[18] RemoveAllSearchPaths
	// vtable[19] RemoveSearchPaths
	// vtable[20] MarkPathIDByRequestOnly
	// vtable[21] IsFileInReadOnlySearchPath
	// vtable[22] SetSearchPathReadOnly
	// vtable[23] RelativePathToFullPath
	// vtable[24] GetSearchPath
	// vtable[25] RemoveFile
	// vtable[26] RenameFile
	// vtable[27] CreateDirHierarchy
	// vtable[28] IsDirectory
	// vtable[29] FileTimeToString
	// vtable[30] SetBufferSize
	// vtable[31] IsOk
	// vtable[32] EndOfFile
	// vtable[33] ReadLine
	// vtable[34] FPrintf
	// vtable[35] LoadModule
	// vtable[36] UnloadModule
	// vtable[37] FindFirst
	// vtable[38] FindNext
	// vtable[39] FindIsDirectory
	// vtable[40] FindClose
	// vtable[41] FindFirstEx
	// vtable[42] FindFileAbsoluteList
	// vtable[43] GetLocalPath
	// vtable[44] FullPathToRelativePath
	// vtable[45] GetCurrentDirectory
	// vtable[46] FindOrAddFileName
	// vtable[47] String
	// vtable[48] AsyncReadMultiple
	// vtable[49] AsyncAppend
	// vtable[50] AsyncAppendFile
	// vtable[51] AsyncFinishAll
	// vtable[52] AsyncFinishAllWrites
	// vtable[53] AsyncFlush
	// vtable[54] AsyncSuspend
	// vtable[55] AsyncResume
	// vtable[56] AsyncBeginRead
	// vtable[57] AsyncEndRead
	// vtable[58] AsyncFinish
	// vtable[59] AsyncGetResult
	// vtable[60] AsyncAbort
	// vtable[61] AsyncStatus
	// vtable[62] AsyncSetPriority
	// vtable[63] AsyncAddRef
	// vtable[64] AsyncRelease
	// vtable[65] WaitForResources
	// vtable[66] GetWaitForResourcesProgress
	// vtable[67] CancelWaitForResources
	// vtable[68] HintResourceNeed
	// vtable[69] IsFileImmediatelyAvailable
	// vtable[70] GetLocalCopy
	// vtable[71] PrintOpenedFiles
	// vtable[72] PrintSearchPaths
	// vtable[73] SetWarningFunc
	// vtable[74] SetWarningLevel
	// vtable[75] AddLoggingFunc
	// vtable[76] RemoveLoggingFunc
	// vtable[77] GetFilesystemStatistics
	// vtable[78] OpenEx
	// vtable[79] ReadEx
	// vtable[80] ReadFileEx
	// vtable[81] FindFileName
	// vtable[82] LoadKeyValues
	// vtable[83] LoadKeyValues
	// vtable[84] AsyncWrite
	// vtable[85] AsyncWriteFile
	// vtable[86] AsyncWriteUGCFile
	// vtable[87] AsyncReadMultipleCreditAlloc
	// vtable[88] AsyncDirectoryScan
	// vtable[89] GetFileTypeForFullPath
	// vtable[90] ReadToBuffer
	// vtable[91] GetOptimalIOConstraints
	// vtable[92] AllocOptimalReadBuffer
	// vtable[93] FreeOptimalReadBuffer
	// vtable[94] GetPathIndex
	// vtable[95] GetPathTime
	// vtable[96] GetDVDMode
	// vtable[97] EnableWhitelistFileTracking
	// vtable[98] RegisterFileWhitelist
	// vtable[99] MarkAllCRCsUnverified
	// vtable[100] CacheFileCRCs
	// vtable[101] CheckCachedFileCRC
	// vtable[102] GetUnverifiedCRCFiles
	// vtable[103] GetWhitelistSpewFlags
	// vtable[104] SetWhitelistSpewFlags
	// vtable[105] InstallDirtyDiskReportFunc
	// vtable[106] IsLaunchedFromXboxHDD
	// vtable[107] IsInstalledToXboxHDDCache
	// vtable[108] IsDVDHosted
	// vtable[109] IsInstallAllowed
	// vtable[110] GetSearchPathID
	// vtable[111] FixupSearchPathsAfterInstall
	// vtable[112] GetDirtyDiskReportFunc
	// vtable[113] AddVPKFile
	// vtable[114] RemoveVPKFile
	// vtable[115] IsVPKFileLoaded
	// vtable[116] EnableAutoVPKFileLoading
	// vtable[117] GetAutoVPKFileLoading
	// vtable[118] AddUGCVPKFile
	// vtable[119] RemoveUGCVPKFile
	// vtable[120] IsUGCVPKFileLoaded
	// vtable[121] ParseUGCHandleFromFilename
	// vtable[122] CreateFilenameForUGCFile
	// vtable[123] GetUGCInfo
	// vtable[124] OpenUGCFile
	// vtable[125] SyncDvdDevCache
	// vtable[126] DiscoverDLC
	// vtable[127] IsAnyDLCPresent
	// vtable[128] GetAnyDLCInfo
	// vtable[129] IsAnyCorruptDLC
	// vtable[130] GetAnyCorruptDLCInfo
	// vtable[131] AddDLCSearchPaths
	// vtable[132] IsSpecificDLCPresent
	// vtable[133] SetIODelayAlarm
	// vtable[134] GetLowLevelFileIO
	// vtable[135] SetLowLevelFileIO
	// vtable[136] AddXLSPUpdateSearchPath
	// vtable[137] DumpFileSystemStats
	// vtable[138] DeleteDirectory
	// vtable[139] DeleteDirectoryAndContents_R
	// vtable[140] IsPathInvalidForFilesystem
	// vtable[141] GetAvailableDrives
	// vtable[142] ReadLine
	// vtable[143] GetSearchPathsForPathID
	// vtable[144] GetSteamApps
	// vtable[145] SetSteamApps
	// vtable[146] MarkContentCorrupt
	// vtable[147] SetContentCorruptionReportingEnabled
	// vtable[148] SuppressAsyncFileRequestFlushOnPathChange
	// sizeof = 16
};

// src/public/filesystem.h:941
struct FileFindHandle_t {
	intp m_nFindDataIndex;  // +0x8
	FileFindHandle_t();
	~FileFindHandle_t();
	FileFindHandle_t & operator=(FileSystemInvalidFindHandle_t);
	bool operator==(FileSystemInvalidFindHandle_t);
	bool operator!=(FileSystemInvalidFindHandle_t);

private:

	FileFindHandle_t(const FileFindHandle_t &);
	FileFindHandle_t & operator=(const FileHandle_t &);

	// sizeof = 16
};
