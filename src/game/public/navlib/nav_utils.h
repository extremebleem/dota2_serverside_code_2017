// Reconstructed from DWARF by pahole; not original source.

// src/game/public/navlib/nav_utils.h:33
class CNavToolsPhysicsInterface : public INavPhysicsInterface {
public:

private:

	const IVPhysics2World * m_pPhysicsWorld;  // +0x8
	CNavToolsPhysicsInterface(const IVPhysics2World *);
	virtual void Nav_TraceLine(const Vector &, const Vector &, uint64, const CBaseEntity *, int, trace_t *);
	virtual void Nav_TraceLine(const Vector &, const Vector &, uint64, CTraceFilter *, trace_t *);
	virtual void Nav_TraceHull(const Vector &, const Vector &, const Vector &, const Vector &, uint64, const CBaseEntity *, int, trace_t *);
	virtual void Nav_TraceHull(const Vector &, const Vector &, const Vector &, const Vector &, uint64, CTraceFilter *, trace_t *);
	virtual uint64 Nav_PointContents(const Vector &, uint64);
	virtual bool Nav_CheckAreaOverlappingEntity(const CNavArea &, const CBaseEntity &, bool);
	virtual void Nav_GetEntityWorldSpaceAABB(const CBaseEntity &, Vector *, Vector *);

	// vtable[0] Nav_TraceLine
	// vtable[1] Nav_TraceLine
	// vtable[2] Nav_TraceHull
	// vtable[3] Nav_TraceHull
	// vtable[4] Nav_PointContents
	// vtable[5] Nav_CheckAreaOverlappingEntity
	// vtable[6] Nav_GetEntityWorldSpaceAABB
	// sizeof = 16
};
