// Reconstructed from DWARF by pahole; not original source.

// src/public/engineservices/loopmoderegistry.h:54
class CLoopModeRegistry {
private:

	static CLoopModeRegistry * sm_pFirst;
	const char * m_pLoopModeName;  // +0x8
	void * * m_ppGlobalPointer;  // +0x18
	void RegisterLoopModes();
	void UnregisterLoopModes();
	CLoopModeRegistry(const char *, ILoopModeFactory *, void * *);
	CLoopModeRegistry();

	// sizeof = 32
};
