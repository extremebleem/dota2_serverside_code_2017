// Reconstructed from DWARF by pahole; not original source.

// src/game/server/globalstate.h:23
struct globalentity_t {
	static datamap_t m_DataMap;

	int counter;  // +0x8
	globalentity_t();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// sizeof = 12
};

// src/game/server/globalstate.h:32
struct globalentitydatabase_t {
	static datamap_t m_DataMap;

	globalentitydatabase_t();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	int Save(ISave &);
	int Restore(IRestore &, bool);
	void DumpGlobals(bool);
	~globalentitydatabase_t();

	// sizeof = 104
};

// src/game/server/globalstate.h:138
class CStaticGlobalEntityQuery {
private:

	int m_nGlobalSerial;  // +0x0
	int m_nIndex;  // +0x4
	const char * m_pGlobalName;  // +0x8
	CStaticGlobalEntityQuery(const char *);
	GLOBALESTATE GetState();

	// sizeof = 16
};
