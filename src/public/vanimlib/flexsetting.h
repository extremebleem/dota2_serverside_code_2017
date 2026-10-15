// Reconstructed from DWARF by pahole; not original source.

// src/public/vanimlib/flexsetting.h:21
struct flexweight_t {
	static datamap_t m_DataMap;

	int key;  // +0x0
	float weight;  // +0x4
	float influence;  // +0x8
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// sizeof = 12
};

// src/public/vanimlib/flexsetting.h:29
struct flexsetting_t {
	static datamap_t m_DataMap;

	int nameindex;  // +0x0
	int obsolete1;  // +0x4
	int numsettings;  // +0x8
	int index;  // +0xc
	int obsolete2;  // +0x10
	int settingindex;  // +0x14
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	char * pszName();
	int psetting(uint8 *, int, flexweight_t * *);

	// sizeof = 24
};

// src/public/vanimlib/flexsetting.h:67
struct flexsettinghdr_t {
	static datamap_t m_DataMap;

	int id;  // +0x0
	int version;  // +0x4
	char name[64];  // +0x8
	int length;  // +0x48
	int numflexsettings;  // +0x4c
	int flexsettingindex;  // +0x50
	int nameindex;  // +0x54
	int numindexes;  // +0x58
	int indexindex;  // +0x5c
	int numkeys;  // +0x60
	int keynameindex;  // +0x64
	int keymappingindex;  // +0x68
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	const char * pszName();
	flexsetting_t * pSetting(int);
	flexsetting_t * pIndexedSetting(int);
	char * pLocalName(int);
	int * pLocalToGlobal(int);
	int LocalToGlobal(int);

	// sizeof = 108
};
