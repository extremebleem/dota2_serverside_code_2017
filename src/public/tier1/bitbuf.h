// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/bitbuf.h:150
class bf_write {
	uint32 * m_pData;  // +0x0
	int m_nDataBytes;  // +0x8
	int m_nDataBits;  // +0xc
	int m_iCurBit;  // +0x10
private:

	bool m_bOverflow;  // +0x14
	bool m_bAssertOnOverflow;  // +0x15

	const char * m_pDebugName;  // +0x18
	bf_write();
	bf_write(void *, int, int);
	bf_write(const char *, void *, int, int);
	bf_write(string *);
	void StartWriting(void *, int, int, int);
	void StartWriting(string *);
	void Reset();
	unsigned char * GetBasePointer();
	void SetAssertOnOverflow(bool);
	bool GetAssertOnOverflow();
	const char * GetDebugName();
	void SetDebugName(const char *);
	void SeekToBit(int);
	void WriteOneBit(int);
	void WriteOneBitNoCheck(int);
	void WriteOneBitAt(int, int);
	void WriteUBitLong(unsigned int, int, bool);
	void WriteSBitLong(int, int);
	void WriteBitLong(unsigned int, int, bool);
	bool WriteBits(const void *, int);
	void WriteUBitVar(unsigned int);
	void WriteVarInt32(uint32);
	void WriteVarInt64(uint64);
	void WriteSignedVarInt32(int32);
	void WriteSignedVarInt64(int64);
	int ByteSizeVarInt32(uint32);
	int ByteSizeVarInt64(uint64);
	int ByteSizeSignedVarInt32(int32);
	int ByteSizeSignedVarInt64(int64);
	bool WriteBitsFromBuffer(bf_read *, int);
	void WriteBitAngle(float, int);
	void WriteBitCoord(float);
	void WriteBitCoordMP(float, EBitCoordType);
	void WriteBitCellCoord(float, int, EBitCoordType);
	void WriteBitFloat(float);
	void WriteBitVec3Coord(const Vector &);
	void WriteBitNormal(float);
	void WriteBitVec3Normal(const Vector &);
	void WriteBitAngles(const QAngle &);
	void WriteChar(int);
	void WriteByte(uint);
	void WriteShort(int);
	void WriteWord(uint);
	void WriteLong(int32);
	void WriteLongLong(int64);
	void WriteFloat(float);
	bool WriteBytes(const void *, int);
	bool WriteString(const char *);
	bool WriteString(const wchar_t *);
	int GetNumBytesWritten();
	int GetNumBitsWritten();
	int GetMaxNumBits();
	int GetNumBitsLeft();
	int GetNumBytesLeft();
	unsigned char * GetData();
	const unsigned char * GetData();
	bool CheckForOverflow(int);
	bool IsOverflowed();
	void SetOverflowFlag();
	void ClearOverflowFlag();

	// sizeof = 32
};

// src/public/tier1/bitbuf.h:521
class bf_read {
	const unsigned char * m_pData;  // +0x0
	int m_nDataBytes;  // +0x8
	int m_nDataBits;  // +0xc
	int m_iCurBit;  // +0x10
private:

	bool m_bOverflow;  // +0x14
	bool m_bAssertOnOverflow;  // +0x15

	const char * m_pDebugName;  // +0x18
	bf_read();
	bf_read(const void *, int, int);
	bf_read(const char *, const void *, int, int);
	bf_read(const string *);
	void StartReading(const void *, int, int, int);
	void StartReading(const string *);
	void Reset();
	void SetAssertOnOverflow(bool);
	bool GetAssertOnOverflow();
	const char * GetDebugName();
	void SetDebugName(const char *);
	void ExciseBits(int, int);
	int ReadOneBit();

protected:

	unsigned int CheckReadUBitLong(int);
	int ReadOneBitNoCheck();
	bool CheckForOverflow(int);
	const unsigned char * GetBasePointer();
	int TotalBytesAvailable();
	void ReadBits(void *, int);
	float ReadBitAngle(int);
	unsigned int ReadUBitLong(int);
	unsigned int ReadUBitLongNoInline(int);
	unsigned int PeekUBitLong(int);
	int ReadSBitLong(int);
	unsigned int ReadUBitVar();
	unsigned int ReadUBitVarInternal(int);
	uint32 ReadVarInt32();
	uint64 ReadVarInt64();
	int32 ReadSignedVarInt32();
	int64 ReadSignedVarInt64();
	unsigned int ReadBitLong(int, bool);
	float ReadBitCoord();
	float ReadBitCoordMP(EBitCoordType);
	float ReadBitCellCoord(int, EBitCoordType);
	float ReadBitFloat();
	float ReadBitNormal();
	void ReadBitVec3Coord(Vector &);
	void ReadBitVec3Normal(Vector &);
	void ReadBitAngles(QAngle &);
	unsigned int ReadBitCoordBits();
	unsigned int ReadBitCoordMPBits(EBitCoordType);
	unsigned int ReadBitCellCoordBits(int, EBitCoordType);
	int ReadChar();
	int ReadByte();
	int ReadShort();
	int ReadWord();
	int32 ReadLong();
	int64 ReadLongLong();
	float ReadFloat();
	bool ReadBytes(void *, int);
	bool ReadString(char *, int, bool, int *);
	bool ReadWString(wchar_t *, int, bool, int *);
	char * ReadAndAllocateString(bool *);
	int CompareBits(bf_read *, int);
	int CompareBitsAt(int, bf_read *, int, int);
	int GetNumBytesLeft();
	int GetNumBytesRead();
	int GetNumBitsLeft();
	int GetNumBitsRead();
	bool IsOverflowed();
	bool Seek(int);
	bool SeekRelative(int);
	void SetOverflowFlag();

	// sizeof = 32
};
