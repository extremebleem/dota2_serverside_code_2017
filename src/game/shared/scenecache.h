// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/scenecache.h:21
class CSceneCache : public IBaseCacheInfo {
public:

	unsigned int msecs;  // +0x8

	CSceneCache(CSceneCache &);
	CSceneCache(const CSceneCache &);
	CSceneCache();
	int GetSoundCount();
	const char * GetSoundName(int);
	virtual void Save(CUtlBuffer &);
	virtual void Restore(CUtlBuffer &);
	virtual void Rebuild(const char *);
	unsigned int ComputeSoundScriptFileTimestampChecksum();
	void PrecacheSceneEvent(CChoreoEvent *, CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, i);

	// vtable[0] Save
	// vtable[1] Restore
	// vtable[2] Rebuild
	// sizeof = 52
} __attribute__((__packed__));
