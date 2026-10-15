// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlhandletable.h:30
class CUtlHandleTable<CBaseNugget_Private, 16> {
	struct EntryType_t {
		unsigned int m_nSerial:31;  // +0x0:0
		unsigned int nInvalid:1;  // +0x0:31

		EntryType_t();

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	unsigned int m_nValidHandles;  // +0x0

	CUtlHandleTable();
	UtlHandle_t AddHandle();
	void RemoveHandle(UtlHandle_t);
	void SetHandle(UtlHandle_t, CBaseNugget_Private *);
	CBaseNugget_Private * GetHandle(UtlHandle_t);
	CBaseNugget_Private * GetHandle(UtlHandle_t, bool);
	bool IsHandleValid(UtlHandle_t);
	unsigned int GetValidHandleCount();
	unsigned int GetHandleCount();
	UtlHandle_t GetHandleFromIndex(int);
	int GetIndexFromHandle(UtlHandle_t);
	void MarkHandleInvalid(UtlHandle_t);
	void MarkHandleValid(UtlHandle_t);
	unsigned int GetHandleCreationCount();
	unsigned int GetSerialNumber(UtlHandle_t);
	unsigned int GetListIndex(UtlHandle_t);
	UtlHandle_t CreateHandle(unsigned int, unsigned int);
	const EntryType_t * GetEntry(UtlHandle_t, bool);

	// sizeof = 56
};
