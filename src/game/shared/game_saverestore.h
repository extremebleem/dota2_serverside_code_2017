// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/game_saverestore.h:29
class IStreamEntitiesFromFileCompletion {
	int ()() * * _vptr.IStreamEntitiesFromFileCompletion;  // +0x0
	IStreamEntitiesFromFileCompletion(IStreamEntitiesFromFileCompletion &);
	IStreamEntitiesFromFileCompletion(const IStreamEntitiesFromFileCompletion &);
	IStreamEntitiesFromFileCompletion();
	virtual void OnStreamEntitiesFromFileCompleted(CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > &);

	// vtable[0] OnStreamEntitiesFromFileCompleted
	// sizeof = 8
};

// src/game/shared/game_saverestore.h:35
struct SaveStreamInfo_t {
	float m_flCurrentTime;  // +0x0
	int m_nCurrentTick;  // +0x4

	SaveStreamInfo_t();
	~SaveStreamInfo_t();

	// sizeof = 160
};

// src/game/shared/game_saverestore.h:45
struct SaveGameInfo_t {
	bool m_bTransition;  // +0x10

	SaveGameInfo_t();
	SaveGameInfo_t(const char *, const char *);
	void SetTransition(const char *, const char *);
	void Clear();
	~SaveGameInfo_t();

	// sizeof = 40
};

// src/game/shared/game_saverestore.h:79
class IEntity2SaveRestore {
	int ()() * * _vptr.IEntity2SaveRestore;  // +0x0
	~IEntity2SaveRestore();
	IEntity2SaveRestore(IEntity2SaveRestore &);
	IEntity2SaveRestore(const IEntity2SaveRestore &);
	IEntity2SaveRestore();
	virtual void Init();
	virtual void Shutdown();
	virtual void Release();
	virtual bool IsRestoring();
	virtual bool StreamEntitiesFromFile(ISaveRestoreBlockSet *, const char *, const void *, size_t, SpawnGroupHandle_t, const Vector &, IStreamEntitiesFromFileCompletion *, CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > *);
	virtual void LoadAdjacentEnts(ISaveRestoreBlockSet *, const char *, const char *, const char *, SpawnGroupHandle_t, IStreamEntitiesFromFileCompletion *, CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > *);
	virtual void AddRestoredEntity(CEntityInstance *);
	virtual void OpenSaveFileAndExtractLevels(const char *, CUtlVector<CCreateGameServerLoadInfo, CUtlMemory<CCreateGameServerLoadInfo, int> > &, bool, SaveFileLevelsType_t);
	virtual void ExtractResourcesFromSaveGame(CCompressedResourceManifest *, ILoadingSpawnGroup *);
	virtual void AppendTransitionResources(CCompressedResourceManifest *, ILoadingSpawnGroup *);
	virtual void ClearSaveDirectory();
	virtual void SetOneWayTransition(bool);
	virtual bool GetOneWayTransition();
	virtual CUtlString CalcSaveGameName(const char *);
	virtual CSaveRestoreData * SaveInit(int, int, float, int);
	virtual void SaveFinish(CSaveRestoreData *);
	virtual void SetCurrentMod(const char *);
	virtual void ChangeSaveInMemory(bool);
	virtual bool IsReadyToSave();
	virtual SaveRestoreDataHandle_t SaveGame_Start(const SaveGameInfo_t &);
	virtual bool SaveGame_Finalize(SaveRestoreDataHandle_t);
	virtual bool StreamEntitiesToFile(SaveRestoreDataHandle_t, const SaveStreamInfo_t &);
	virtual const char * SaveGame_GetLastSaveFile();

	// vtable[0] Init
	// vtable[1] Shutdown
	// vtable[2] Release
	// vtable[3] IsRestoring
	// vtable[4] StreamEntitiesFromFile
	// vtable[5] LoadAdjacentEnts
	// vtable[6] AddRestoredEntity
	// vtable[7] OpenSaveFileAndExtractLevels
	// vtable[8] ExtractResourcesFromSaveGame
	// vtable[9] AppendTransitionResources
	// vtable[10] ClearSaveDirectory
	// vtable[11] SetOneWayTransition
	// vtable[12] GetOneWayTransition
	// vtable[13] CalcSaveGameName
	// vtable[14] SaveInit
	// vtable[15] SaveFinish
	// vtable[16] SetCurrentMod
	// vtable[17] ChangeSaveInMemory
	// vtable[18] IsReadyToSave
	// vtable[19] SaveGame_Start
	// vtable[20] SaveGame_Finalize
	// vtable[21] StreamEntitiesToFile
	// vtable[22] SaveGame_GetLastSaveFile
	// sizeof = 8
};

// src/game/shared/game_saverestore.h:153
class CSave : public ISave {
public:

private:

	FileHandle_t m_hLogFile;  // +0x30
	bool m_bAsync;  // +0x38
	bool m_bDetailedSpew;  // +0x39
	bool m_bPreventDetailedSpew;  // +0x3a

	int m_nFlushScopeDepth;  // +0x48
	CSave(const CSave &);
	CSave(CSaveRestoreData *);
	virtual ~CSave();
	virtual void StartLogging(const char *);
	virtual void EndLogging();
	virtual bool IsAsync();
	virtual int GetWritePos();
	virtual void SetWritePos(int);
	virtual int WriteAll(const void *, datamap_t *);
	virtual int WriteFields(const char *, const void *, datamap_t *, typedescription_t *, int);
	virtual void StartBlock(const char *);
	virtual void StartBlock();
	virtual void EndBlock();
	virtual void WriteShort(const short int *, int);
	virtual void WriteInt(const int *, int);
	virtual void WriteUInt32(const uint32 *, int);
	virtual void WriteInt64(const int64 *, int);
	virtual void WriteUInt64(const uint64 *, int);
	virtual void WriteBool(const bool *, int);
	virtual void WriteFloat(const float *, int);
	virtual void WriteFloat64(const float64 *, int);
	virtual void WriteData(const char *, int);
	virtual void WriteString(const char *);
	virtual void WriteString(const string_t *, int);
	virtual void WriteString(const CUtlString *, int);
	virtual void WriteVector(const Vector &);
	virtual void WriteVector(const Vector *, int);
	virtual void WriteVector2D(const Vector2D &);
	virtual void WriteVector2D(const Vector2D *, int);
	virtual void WriteQuaternion(const Quaternion &);
	virtual void WriteQuaternion(const Quaternion *, int);
	virtual void WriteVMatrix(const VMatrix *, int);
	virtual void WriteShort(const char *, const short int *, int);
	virtual void WriteInt(const char *, const int *, int);
	virtual void WriteUInt32(const char *, const uint32 *, int);
	virtual void WriteInt64(const char *, const int64 *, int);
	virtual void WriteUInt64(const char *, const uint64 *, int);
	virtual void WriteBool(const char *, const bool *, int);
	virtual void WriteFloat(const char *, const float *, int);
	virtual void WriteFloat64(const char *, const float64 *, int);
	virtual void WriteData(const char *, int, const char *);
	virtual void WriteString(const char *, const char *);
	virtual void WriteString(const char *, const string_t *, int);
	virtual void WriteString(const char *, const CUtlString *, int);
	virtual void WriteVector(const char *, const Vector &);
	virtual void WriteVector(const char *, const Vector *, int);
	virtual void WriteVector2D(const char *, const Vector2D &);
	virtual void WriteVector2D(const char *, const Vector2D *, int);
	virtual void WriteQuaternion(const char *, const Quaternion &);
	virtual void WriteQuaternion(const char *, const Quaternion *, int);
	virtual void WriteVMatrix(const char *, const VMatrix *, int);
	virtual void WriteTime(const char *, const float *, int);
	virtual void WriteTick(const char *, const int *, int);
	virtual void WritePositionVector(const char *, const Vector &);
	virtual void WritePositionVector(const char *, const Vector *, int);
	virtual void WriteFunction(datamap_t *, const char *, inputfunc_t *, int);
	virtual void WriteEntityPtr(const char *, CEntityInstance * *, int);
	virtual void WriteEHandle(const char *, const CEntityHandle *, int);
	virtual void WriteTime(const float *, int);
	virtual void WriteTick(const int *, int);
	virtual void WritePositionVector(const Vector &);
	virtual void WritePositionVector(const Vector *, int);
	virtual void WriteEntityPtr(CEntityInstance * *, int);
	virtual void WriteEHandle(const CEntityHandle *, int);
	virtual void WriteVMatrixWorldspace(const char *, const VMatrix *, int);
	virtual void WriteVMatrixWorldspace(const VMatrix *, int);
	virtual void WriteMatrix3x4Worldspace(const matrix3x4_t *, int);
	virtual void WriteMatrix3x4Worldspace(const char *, const matrix3x4_t *, int);
	virtual void WriteNetworkOriginCellQuantizedVector(bool, const CNetworkOriginCellCoordQuantizedVector *, int);
	virtual void WriteNetworkOriginCellQuantizedVector(bool, const char *, const CNetworkOriginCellCoordQuantizedVector *, int);
	virtual void WriteNetworkQuantizedVector(const CNetworkOriginQuantizedVector *, int);
	virtual void WriteNetworkQuantizedVector(const char *, const CNetworkOriginQuantizedVector *, int);
	virtual void WriteInterval(const interval_t *, int);
	virtual void WriteInterval(const char *, const interval_t *, int);
	virtual void WriteNetworkQuantizedFloat(const CNetworkedQuantizedFloat *, int);
	virtual void WriteNetworkQuantizedFloat(const char *, const CNetworkedQuantizedFloat *, int);
	virtual CGameSaveRestoreInfo * GetGameSaveRestoreInfo();
	int EntityIndex(const CEntityInstance *);
	int EntityFlagsSet(int, int);
	void SetDetailedSpew(bool);
	virtual void FlushDetailedSpew(const char *);
	virtual void SetPreventDetailedSpew(bool);
	bool IsLogging();
	void Log(const char *, const typedescription_t *, void *, int);
	CUtlString GetValueString(const typedescription_t *, void *, int);
	void BufferField(const char *, int, const char *);
	void BufferData(const char *, int);
	void WriteHeader(const char *, int);
	int DoWriteAll(const void *, datamap_t *, datamap_t *);
	bool WriteField(const char *, void *, datamap_t *, typedescription_t *);
	bool WriteSingleField(const char *, void *, datamap_t *, typedescription_t *);
	int DataEmpty(const char *, int);
	void BufferString(char *, int);
	int CountFieldsToSave(const void *, typedescription_t *, int);
	bool ShouldSaveField(const void *, typedescription_t *);
	void InitGridPrinter();

	// vtable[0] StartLogging
	// vtable[1] EndLogging
	// vtable[2] IsAsync
	// vtable[3] GetWritePos
	// vtable[4] SetWritePos
	// vtable[5] WriteAll
	// vtable[6] WriteFields
	// vtable[7] StartBlock
	// vtable[8] StartBlock
	// vtable[9] EndBlock
	// vtable[10] WriteShort
	// vtable[11] WriteInt
	// vtable[12] WriteUInt32
	// vtable[13] WriteInt64
	// vtable[14] WriteUInt64
	// vtable[15] WriteBool
	// vtable[16] WriteFloat
	// vtable[17] WriteFloat64
	// vtable[18] WriteData
	// vtable[19] WriteString
	// vtable[20] WriteString
	// vtable[21] WriteString
	// vtable[22] WriteVector
	// vtable[23] WriteVector
	// vtable[24] WriteVector2D
	// vtable[25] WriteVector2D
	// vtable[26] WriteQuaternion
	// vtable[27] WriteQuaternion
	// vtable[28] WriteVMatrix
	// vtable[29] WriteShort
	// vtable[30] WriteInt
	// vtable[31] WriteUInt32
	// vtable[32] WriteInt64
	// vtable[33] WriteUInt64
	// vtable[34] WriteBool
	// vtable[35] WriteFloat
	// vtable[36] WriteFloat64
	// vtable[37] WriteData
	// vtable[38] WriteString
	// vtable[39] WriteString
	// vtable[40] WriteString
	// vtable[41] WriteVector
	// vtable[42] WriteVector
	// vtable[43] WriteVector2D
	// vtable[44] WriteVector2D
	// vtable[45] WriteQuaternion
	// vtable[46] WriteQuaternion
	// vtable[47] WriteVMatrix
	// vtable[48] WriteTime
	// vtable[49] WriteTick
	// vtable[50] WritePositionVector
	// vtable[51] WritePositionVector
	// vtable[52] WriteFunction
	// vtable[57] WriteEntityPtr
	// vtable[58] WriteEHandle
	// vtable[53] WriteTime
	// vtable[54] WriteTick
	// vtable[55] WritePositionVector
	// vtable[56] WritePositionVector
	// vtable[59] WriteEntityPtr
	// vtable[60] WriteEHandle
	// vtable[61] WriteVMatrixWorldspace
	// vtable[62] WriteVMatrixWorldspace
	// vtable[63] WriteMatrix3x4Worldspace
	// vtable[64] WriteMatrix3x4Worldspace
	// vtable[65] WriteNetworkOriginCellQuantizedVector
	// vtable[66] WriteNetworkOriginCellQuantizedVector
	// vtable[67] WriteNetworkQuantizedVector
	// vtable[68] WriteNetworkQuantizedVector
	// vtable[69] WriteInterval
	// vtable[70] WriteInterval
	// vtable[71] WriteNetworkQuantizedFloat
	// vtable[72] WriteNetworkQuantizedFloat
	// vtable[73] GetGameSaveRestoreInfo
	// vtable[74] FlushDetailedSpew
	// vtable[75] SetPreventDetailedSpew
	// sizeof = 80
};

// src/game/shared/game_saverestore.h:322
class CSaveFlushScope {
private:

	CSaveFlushScope(CSave *, const char *, bool);
	CSaveFlushScope(ISave *, const char *, bool);
	~CSaveFlushScope();
	void Release();

	// sizeof = 16
};

// src/game/shared/game_saverestore.h:389
class CRestore : public IRestore {
public:

private:

	int m_global;  // +0x30
	bool m_precache;  // +0x34
	CRestore(CRestore &);
	CRestore(const CRestore &);
	CRestore(CSaveRestoreData *);
	virtual int GetReadPos();
	virtual void SetReadPos(int);
	virtual int ReadAll(void *, datamap_t *);
	virtual int ReadFields(const char *, void *, datamap_t *, typedescription_t *, int);
	virtual void EmptyFields(void *, typedescription_t *, int);
	virtual void StartBlock(SaveRestoreRecordHeader_t *);
	virtual void StartBlock(char *);
	virtual void StartBlock();
	virtual void EndBlock();
	virtual void ReadHeader(SaveRestoreRecordHeader_t *);
	virtual int SkipHeader();
	virtual const char * StringFromHeaderSymbol(int);
	virtual short int ReadShort();
	virtual int ReadInt();
	virtual uint32 ReadUInt32();
	virtual int64 ReadInt64();
	virtual uint64 ReadUInt64();
	virtual int ReadVector(Vector *);
	virtual int ReadVector2D(Vector2D *);
	virtual int ReadQuaternion(Quaternion *);
	virtual int ReadPositionVector(Vector *);
	virtual int ReadFunction(datamap_t *, inputfunc_t *, int, int);
	virtual void ReadString(char *, int, int);
	virtual int ReadShort(short int *, int, int);
	virtual int ReadInt(int *, int, int);
	virtual uint32 ReadUInt32(uint32 *, int, int);
	virtual int64 ReadInt64(const char *, int64 *, int, int);
	virtual uint64 ReadUInt64(const char *, uint64 *, int, int);
	virtual int ReadBool(bool *, int, int);
	virtual int ReadFloat(float *, int, int);
	virtual int ReadFloat64(float64 *, int, int);
	virtual int ReadData(const char *, char *, int, int);
	virtual int ReadString(string_t *, int, int);
	virtual int ReadString(const char *, CUtlString *, int, int);
	virtual int ReadVector(const char *, Vector *, int, int);
	virtual int ReadVector2D(const char *, Vector2D *, int, int);
	virtual int ReadQuaternion(const char *, Quaternion *, int, int);
	virtual int ReadVMatrix(const char *, VMatrix *, int, int);
	virtual int ReadTime(const char *, float *, int, int);
	virtual int ReadTick(const char *, int *, int, int);
	virtual int ReadPositionVector(const char *, Vector *, int, int);
	virtual int ReadEntityPtr(const char *, CEntityInstance * *, int, int);
	virtual int ReadEHandle(const char *, CEntityHandle *, int, int);
	virtual int ReadVMatrixWorldspace(const char *, VMatrix *, int, int);
	virtual int ReadMatrix3x4Worldspace(const char *, matrix3x4_t *, int, int);
	virtual int ReadNetworkOriginCellQuantizedVector(bool, const char *, CNetworkOriginCellCoordQuantizedVector *, int, int);
	virtual int ReadNetworkQuantizedVector(const char *, CNetworkOriginQuantizedVector *, int, int);
	virtual int ReadInterval(const char *, interval_t *, int, int);
	virtual int ReadNetworkQuantizedFloat(const char *, CNetworkedQuantizedFloat *, int, int);
	void SetGlobalMode(int);
	void PrecacheMode(bool);
	virtual void SkipEntityData();
	virtual bool GetPrecacheMode();
	virtual CGameSaveRestoreInfo * GetGameSaveRestoreInfo();
	char * BufferPointer();
	void BufferSkipBytes(int);
	int DoReadAll(void *, datamap_t *, datamap_t *);
	typedescription_t * FindField(const char *, typedescription_t *, int, int *);
	void ReadField(const SaveRestoreRecordHeader_t &, void *, datamap_t *, typedescription_t *);
	void ReadSingleField(const SaveRestoreRecordHeader_t &, void *, datamap_t *, typedescription_t *);
	void BufferReadBytes(char *, int);
	bool ShouldReadField(typedescription_t *);
	bool ShouldEmptyField(typedescription_t *);
	CEntityInstance * EntityFromIndex(int);
	virtual ~CRestore();
	int ReadSimple<short int>(short int *, int, int);
	int ReadSimple<int>(int *, int, int);
	int ReadSimple<unsigned int>(unsigned int *, int, int);
	int ReadSimple<long long int>(long long int *, int, int);
	int ReadSimple<long long unsigned int>(long long unsigned int *, int, int);
	int ReadSimple<bool>(bool *, int, int);
	int ReadSimple<float>(float *, int, int);
	int ReadSimple<double>(double *, int, int);
	int ReadSimple<char>(char *, int, int);
	int ReadSimple<Vector2D>(Vector2D *, int, int);
	int ReadSimple<Quaternion>(Quaternion *, int, int);
	int ReadSimple<VMatrix>(VMatrix *, int, int);
	int ReadSimple<CNetworkedQuantizedFloat>(CNetworkedQuantizedFloat *, int, int);
	int ReadSimple<CNetworkOriginQuantizedVector>(CNetworkOriginQuantizedVector *, int, int);
	int ReadSimple<interval_t>(interval_t *, int, int);
	int ReadSimple<Vector>(Vector *, int, int);

	// vtable[0] GetReadPos
	// vtable[1] SetReadPos
	// vtable[2] ReadAll
	// vtable[3] ReadFields
	// vtable[4] EmptyFields
	// vtable[5] StartBlock
	// vtable[6] StartBlock
	// vtable[7] StartBlock
	// vtable[8] EndBlock
	// vtable[9] ReadHeader
	// vtable[10] SkipHeader
	// vtable[11] StringFromHeaderSymbol
	// vtable[12] ReadShort
	// vtable[13] ReadInt
	// vtable[14] ReadUInt32
	// vtable[15] ReadInt64
	// vtable[16] ReadUInt64
	// vtable[17] ReadVector
	// vtable[18] ReadVector2D
	// vtable[19] ReadQuaternion
	// vtable[20] ReadPositionVector
	// vtable[21] ReadFunction
	// vtable[22] ReadString
	// vtable[23] ReadShort
	// vtable[24] ReadInt
	// vtable[25] ReadUInt32
	// vtable[26] ReadInt64
	// vtable[27] ReadUInt64
	// vtable[28] ReadBool
	// vtable[29] ReadFloat
	// vtable[30] ReadFloat64
	// vtable[31] ReadData
	// vtable[32] ReadString
	// vtable[33] ReadString
	// vtable[34] ReadVector
	// vtable[35] ReadVector2D
	// vtable[36] ReadQuaternion
	// vtable[42] ReadVMatrix
	// vtable[37] ReadTime
	// vtable[38] ReadTick
	// vtable[39] ReadPositionVector
	// vtable[40] ReadEntityPtr
	// vtable[41] ReadEHandle
	// vtable[43] ReadVMatrixWorldspace
	// vtable[44] ReadMatrix3x4Worldspace
	// vtable[45] ReadNetworkOriginCellQuantizedVector
	// vtable[46] ReadNetworkQuantizedVector
	// vtable[47] ReadInterval
	// vtable[48] ReadNetworkQuantizedFloat
	// vtable[49] SkipEntityData
	// vtable[50] GetPrecacheMode
	// vtable[51] GetGameSaveRestoreInfo
	// sizeof = 56
};
