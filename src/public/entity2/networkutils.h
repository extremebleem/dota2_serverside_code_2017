// Reconstructed from DWARF by pahole; not original source.

// src/public/entity2/networkutils.h:23
class CNetworkInitFuncRegistry {
private:

	static CNetworkInitFuncRegistry * sm_pHead;
	CUtlDelegate<void(NetworkSerializationMode_t)> m_delegate;  // +0x8
	CNetworkInitFuncRegistry(CUtlDelegate<void(NetworkSerializationMode_t)>);
	void ExecuteNetworkInitFuncs(NetworkSerializationMode_t);

	// sizeof = 32
};
