// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nextbot_s1/nextbotcontextualqueryinterface.h:37
class IContextualQuery {
	int ()() * * _vptr.IContextualQuery;  // +0x0
private:

	IContextualQuery(const IContextualQuery &);
	IContextualQuery();

	virtual ~IContextualQuery();
	virtual QueryResultType ShouldPickUp(const INextBot *, CBaseEntity *);
	virtual QueryResultType ShouldHurry(const INextBot *);
	virtual QueryResultType ShouldRetreat(const INextBot *);
	virtual QueryResultType ShouldAttack(const INextBot *, const CKnownEntity *);
	virtual QueryResultType IsHindrance(const INextBot *, CBaseEntity *);
	virtual Vector SelectTargetPoint(const INextBot *, const CBaseCombatCharacter *);
	virtual QueryResultType IsPositionAllowed(const INextBot *, const Vector &);
	virtual const CKnownEntity * SelectMoreDangerousThreat(const INextBot *, const CBaseCombatCharacter *, const CKnownEntity *, const CKnownEntity *);

	// vtable[0] Schema_DynamicBinding
	// vtable[3] ShouldPickUp
	// vtable[4] ShouldHurry
	// vtable[5] ShouldRetreat
	// vtable[6] ShouldAttack
	// vtable[7] IsHindrance
	// vtable[8] SelectTargetPoint
	// vtable[9] IsPositionAllowed
	// vtable[10] SelectMoreDangerousThreat
	// sizeof = 8
};
