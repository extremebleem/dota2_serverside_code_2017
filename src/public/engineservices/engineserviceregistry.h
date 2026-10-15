// Reconstructed from DWARF by pahole; not original source.

// src/public/engineservices/engineserviceregistry.h:22
class CEngineServiceRegistry {
private:

	static CEngineServiceRegistry * sm_pFirst;
	const char * m_pServiceName;  // +0x10
	void RegisterEngineServices();
	void UnregisterEngineServices();
	CEngineServiceRegistry(const char *, IEngineService *);
	CEngineServiceRegistry();

	// sizeof = 24
};
