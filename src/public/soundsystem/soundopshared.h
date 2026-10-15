// Reconstructed from DWARF by pahole; not original source.

// src/public/soundsystem/soundopshared.h:70
class CSosFieldData {
	uint m_nFieldDataSize;  // +0x4
private:

	uint m_nAllocSize;  // +0x8

	SosFieldValueMem_t * m_pData;  // +0x10
	CSosFieldData();
	~CSosFieldData();
	void ClearData();
	SosFieldValueMem_t * AllocateData(uint);
	SosFieldValueMem_t * AllocateData();
	SosFieldValueMem_t * GetDataPtr();
	void CopyData(const SosFieldValueMem_t *, uint);
	void GetData(SosFieldValueMem_t *);
	void SetStringData(const char *, int);
	SOFieldDataType_t GetFieldDataType();
	bool IsFieldDataType(SOFieldDataType_t);
	int GetFieldDataSize();
	uint GetAllocSize();

	// sizeof = 24
};
