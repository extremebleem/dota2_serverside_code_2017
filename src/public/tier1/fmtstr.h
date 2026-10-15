// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/fmtstr.h:305
class CNumStr {
protected:

	char m_szBuf[28];  // +0x0
	CNumStr();
	CNumStr(bool);
	CNumStr(int8);
	CNumStr(uint8);
	CNumStr(int16);
	CNumStr(uint16);
	CNumStr(int32);
	CNumStr(uint32);
	CNumStr(int64);
	CNumStr(uint64);
	CNumStr(lint64);
	CNumStr(ulint64);
	CNumStr(double);
	CNumStr(float);
	void SetBool(bool);
	void SetInt8(int8);
	void SetUint8(uint8);
	void SetInt16(int16);
	void SetUint16(uint16);
	void SetInt32(int32);
	void SetUint32(uint32);
	void SetInt64(int64);
	void SetUint64(uint64);
	void SetDouble(double);
	void SetFloat(float);
	void SetHexUint64(uint64);
	const char * operator char const*();
	char * Access();
	const char * String();
	void AddQuotes();

	// sizeof = 28
};
