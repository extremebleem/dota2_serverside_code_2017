// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/obstacle_pushaway.h:27
class CPushAwayEnumerator : public IPartitionEnumerator {
public:

	int m_nAlreadyHit;  // +0x10
	int m_nMaxHits;  // +0x14
	CPushAwayEnumerator(CPushAwayEnumerator &);
	CPushAwayEnumerator(const CPushAwayEnumerator &);
	CPushAwayEnumerator(CBaseEntity * *, int);
	virtual IterationRetval_t EnumElement(CBaseEntity *);

	// vtable[0] EnumElement
	// sizeof = 24
};
