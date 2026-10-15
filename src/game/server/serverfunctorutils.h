// Reconstructed from DWARF by pahole; not original source.

// src/game/server/serverfunctorutils.h:420
class CTraceFilterOnlyClassname : public CTraceFilterSimple {
public:

private:

	const char * m_pchClassname;  // +0x40
	CTraceFilterOnlyClassname(const CBaseEntity *, const char *, int);
	virtual bool ShouldHitEntity(CBaseEntity *);
	virtual ~CTraceFilterOnlyClassname();

	// vtable[2] ShouldHitEntity
	// sizeof = 72
};
