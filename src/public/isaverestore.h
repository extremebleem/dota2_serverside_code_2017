// Reconstructed from DWARF by pahole; not original source.

// src/public/isaverestore.h:33
struct SaveRestoreRecordHeader_t {
	short unsigned int size;  // +0x0
	short unsigned int symbol;  // +0x2

	// sizeof = 4
};

// src/public/isaverestore.h:51
class ISaveRestoreBlockHandler {
	int ()() * * _vptr.ISaveRestoreBlockHandler;  // +0x0
	ISaveRestoreBlockHandler(ISaveRestoreBlockHandler &);
	ISaveRestoreBlockHandler(const ISaveRestoreBlockHandler &);
	ISaveRestoreBlockHandler();
	virtual const char * GetBlockName();
	virtual void PreSave(CSaveRestoreData *, const CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > &);
	virtual void Save(ISave *);
	virtual void WriteSaveHeaders(ISave *);
	virtual void PostSave(const CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > &);
	virtual void PreRestore();
	virtual void ReadRestoreHeaders(IRestore *);
	virtual void Restore(IRestore *, SpawnGroupHandle_t, bool);
	virtual void PostRestore();

	// vtable[0] GetBlockName
	// vtable[1] PreSave
	// vtable[2] Save
	// vtable[3] WriteSaveHeaders
	// vtable[4] PostSave
	// vtable[5] PreRestore
	// vtable[6] ReadRestoreHeaders
	// vtable[7] Restore
	// vtable[8] PostRestore
	// sizeof = 8
};

// src/public/isaverestore.h:69
class ISaveRestoreBlockSet : public ISaveRestoreBlockHandler {
public:

	ISaveRestoreBlockSet(ISaveRestoreBlockSet &);
	ISaveRestoreBlockSet(const ISaveRestoreBlockSet &);
	ISaveRestoreBlockSet();
	virtual void AddBlockHandler(ISaveRestoreBlockHandler *);
	virtual void RemoveBlockHandler(ISaveRestoreBlockHandler *);
	virtual void CallBlockHandlerRestore(ISaveRestoreBlockHandler *, int, IRestore *, SpawnGroupHandle_t, bool);

	// vtable[9] AddBlockHandler
	// vtable[10] RemoveBlockHandler
	// vtable[11] CallBlockHandlerRestore
	// sizeof = 8
};

// src/public/isaverestore.h:81
class CDefSaveRestoreBlockHandler : public ISaveRestoreBlockHandler {
public:

	CDefSaveRestoreBlockHandler(CDefSaveRestoreBlockHandler &);
	CDefSaveRestoreBlockHandler(const CDefSaveRestoreBlockHandler &);
	CDefSaveRestoreBlockHandler();

private:

	virtual const char * GetBlockName();
	virtual void PreSave(CSaveRestoreData *, const CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > &);
	virtual void Save(ISave *);
	virtual void WriteSaveHeaders(ISave *);
	virtual void PostSave(const CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > &);
	virtual void PreRestore();
	virtual void ReadRestoreHeaders(IRestore *);
	virtual void Restore(IRestore *, SpawnGroupHandle_t, bool);
	virtual void PostRestore();

	// vtable[0] GetBlockName
	// vtable[1] PreSave
	// vtable[2] Save
	// vtable[3] WriteSaveHeaders
	// vtable[4] PostSave
	// vtable[5] PreRestore
	// vtable[6] ReadRestoreHeaders
	// vtable[7] Restore
	// vtable[8] PostRestore
	// sizeof = 8
};

// src/public/isaverestore.h:102
class ISave {
	int ()() * * _vptr.ISave;  // +0x0
	ISave();
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
	virtual void WriteTime(const float *, int);
	virtual void WriteTick(const int *, int);
	virtual void WritePositionVector(const Vector &);
	virtual void WritePositionVector(const Vector *, int);
	virtual void WriteEntityPtr(const char *, CEntityInstance * *, int);
	virtual void WriteEHandle(const char *, const CEntityHandle *, int);
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
	virtual void FlushDetailedSpew(const char *);
	virtual void SetPreventDetailedSpew(bool);

protected:

	virtual ~ISave();

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
	// vtable[53] WriteTime
	// vtable[54] WriteTick
	// vtable[55] WritePositionVector
	// vtable[56] WritePositionVector
	// vtable[57] WriteEntityPtr
	// vtable[58] WriteEHandle
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
	// sizeof = 8
};

// src/public/isaverestore.h:245
class IRestore {
	int ()() * * _vptr.IRestore;  // +0x0
	IRestore();
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
	virtual int ReadTime(const char *, float *, int, int);
	virtual int ReadTick(const char *, int *, int, int);
	virtual int ReadPositionVector(const char *, Vector *, int, int);
	virtual int ReadEntityPtr(const char *, CEntityInstance * *, int, int);
	virtual int ReadEHandle(const char *, CEntityHandle *, int, int);
	virtual int ReadVMatrix(const char *, VMatrix *, int, int);
	virtual int ReadVMatrixWorldspace(const char *, VMatrix *, int, int);
	virtual int ReadMatrix3x4Worldspace(const char *, matrix3x4_t *, int, int);
	virtual int ReadNetworkOriginCellQuantizedVector(bool, const char *, CNetworkOriginCellCoordQuantizedVector *, int, int);
	virtual int ReadNetworkQuantizedVector(const char *, CNetworkOriginQuantizedVector *, int, int);
	virtual int ReadInterval(const char *, interval_t *, int, int);
	virtual int ReadNetworkQuantizedFloat(const char *, CNetworkedQuantizedFloat *, int, int);
	virtual void SkipEntityData();
	virtual bool GetPrecacheMode();
	virtual CGameSaveRestoreInfo * GetGameSaveRestoreInfo();

protected:

	virtual ~IRestore();

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
	// vtable[37] ReadTime
	// vtable[38] ReadTick
	// vtable[39] ReadPositionVector
	// vtable[40] ReadEntityPtr
	// vtable[41] ReadEHandle
	// vtable[42] ReadVMatrix
	// vtable[43] ReadVMatrixWorldspace
	// vtable[44] ReadMatrix3x4Worldspace
	// vtable[45] ReadNetworkOriginCellQuantizedVector
	// vtable[46] ReadNetworkQuantizedVector
	// vtable[47] ReadInterval
	// vtable[48] ReadNetworkQuantizedFloat
	// vtable[49] SkipEntityData
	// vtable[50] GetPrecacheMode
	// vtable[51] GetGameSaveRestoreInfo
	// sizeof = 8
};

// src/public/isaverestore.h:354
struct SaveRestoreFieldInfo_t {
	void * pField;  // +0x0
	void * pOwner;  // +0x8

	// sizeof = 24
};

// src/public/isaverestore.h:364
class ISaveRestoreOps {
	int ()() * * _vptr.ISaveRestoreOps;  // +0x0
	ISaveRestoreOps(ISaveRestoreOps &);
	ISaveRestoreOps(const ISaveRestoreOps &);
	ISaveRestoreOps();
	virtual void Save(const SaveRestoreFieldInfo_t &, ISave *);
	virtual void Restore(const SaveRestoreFieldInfo_t &, IRestore *);
	virtual bool IsEmpty(const SaveRestoreFieldInfo_t &);
	virtual void MakeEmpty(const SaveRestoreFieldInfo_t &);
	virtual bool Parse(const SaveRestoreFieldInfo_t &, const char *);
	void Save(void *, ISave *);
	void Restore(void *, IRestore *);
	bool IsEmpty(void *);
	void MakeEmpty(void *);
	bool Parse(void *, const char *);

	// vtable[0] Save
	// vtable[1] Restore
	// vtable[2] IsEmpty
	// vtable[3] MakeEmpty
	// vtable[4] Parse
	// sizeof = 8
};

// src/public/isaverestore.h:387
class CDefSaveRestoreOps : public ISaveRestoreOps {
public:

	CDefSaveRestoreOps(CDefSaveRestoreOps &);
	CDefSaveRestoreOps(const CDefSaveRestoreOps &);
	CDefSaveRestoreOps();
	virtual void Save(const SaveRestoreFieldInfo_t &, ISave *);
	virtual void Restore(const SaveRestoreFieldInfo_t &, IRestore *);
	virtual bool IsEmpty(const SaveRestoreFieldInfo_t &);
	virtual void MakeEmpty(const SaveRestoreFieldInfo_t &);
	virtual bool Parse(const SaveRestoreFieldInfo_t &, const char *);

	// vtable[0] Save
	// vtable[1] Restore
	// vtable[2] IsEmpty
	// vtable[3] MakeEmpty
	// vtable[4] Parse
	// sizeof = 8
};

// src/public/isaverestore.h:403
class CClassPtrSaveRestoreOps : public CDefSaveRestoreOps {
public:

	CClassPtrSaveRestoreOps(CClassPtrSaveRestoreOps &);
	CClassPtrSaveRestoreOps(const CClassPtrSaveRestoreOps &);
	CClassPtrSaveRestoreOps();
	virtual bool IsEmpty(const SaveRestoreFieldInfo_t &);
	virtual void MakeEmpty(const SaveRestoreFieldInfo_t &);

	// vtable[2] IsEmpty
	// vtable[3] MakeEmpty
	// sizeof = 8
};
