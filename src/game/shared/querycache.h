// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/querycache.h:47
struct QueryCacheKey_t {
	int m_nNumValidPoints;  // +0x4

	uint64 m_nTraceMask;  // +0x40
	unsigned int m_nHashIdx;  // +0x48
	int m_nCollisionGroup;  // +0x4c
	ShouldHitFunc_t m_pTraceFilterFunction;  // +0x50
	float m_flMinimumUpdateInterval;  // +0x58
	QueryCacheKey_t();
	void ComputeHashIndex();
	bool Matches(const QueryCacheKey_t *);
	QueryCacheKey_t & operator=(const QueryCacheKey_t &);

	// sizeof = 96
};

// src/game/shared/querycache.h:66
struct QueryCacheEntry_t {
	float m_flLastUpdateTime;  // +0x70
	bool m_bUsedSinceUpdated;  // +0x74
	bool m_bSpeculativelyDone;  // +0x75
	bool m_bResult;  // +0x76
	QueryCacheEntry_t();
	void IssueQuery();

	// sizeof = 120
};
