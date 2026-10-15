// Reconstructed from DWARF by pahole; not original source.

// src/public/resourcesystem/resourcehandle.h:169
class CResourceNameGetter {
private:

	char m_Buffer[512];  // +0x0
	CResourceNameGetter(ResourceHandle_t);
	CResourceNameGetter(ResourceNameHandle_t);
	const char * Get();

	// sizeof = 512
};
