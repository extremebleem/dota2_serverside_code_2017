// Reconstructed from DWARF by pahole; not original source.

// src/public/engine2/server_class.h:23
class ServerClass {
	const char * m_pNetworkName;  // +0x0
	FlattenedSerializerHandle_t m_hSerializer;  // +0x20
	int m_InstanceBaselineIndex;  // +0x28
	int m_ClassID;  // +0x2c

	static ServerClass * sm_pServerClassHead;
	ServerClass(const char *);
	void Link();
	const char * GetName();
	void Init();

	// sizeof = 56
};
