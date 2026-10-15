// Reconstructed from DWARF by pahole; not original source.

// src/public/engine2/client_class.h:40
class ClientClass {
	const char * m_pNetworkName;  // +0x0
	const char * m_pClientLocalName;  // +0x8
	CreateEntity2 m_pCreateEntity2Fn;  // +0x18
	DestroyEntity2 m_pDestroyEntity2Fn;  // +0x20
	FlattenedSerializerHandle_t m_hSerializer;  // +0x38
	int m_InstanceBaselineIndex;  // +0x40
	int m_ClassID;  // +0x44
	bool m_bFakeClassForSourceTVRelay;  // +0x50

	static ClientClass * sm_pClientClassHead;
	ClientClass(const char *, const char *);
	void Link();
	const char * GetName();
	void Init();

	// sizeof = 88
};
