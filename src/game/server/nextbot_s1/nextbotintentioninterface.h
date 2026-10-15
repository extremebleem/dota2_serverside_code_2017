// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nextbot_s1/nextbotintentioninterface.h:77
class IIntention : public INextBotComponent, public IContextualQuery {
public:

private:

	IIntention(const IIntention &);

	IIntention(INextBot *);
	virtual ~IIntention();
	virtual void Reset();
	virtual void Update();
	virtual const char * GetName();
	virtual QueryResultType ShouldPickUp(const INextBot *, CBaseEntity *);
	virtual QueryResultType ShouldHurry(const INextBot *);
	virtual QueryResultType ShouldRetreat(const INextBot *);
	virtual QueryResultType ShouldAttack(const INextBot *, const CKnownEntity *);
	virtual QueryResultType IsHindrance(const INextBot *, CBaseEntity *);
	virtual Vector SelectTargetPoint(const INextBot *, const CBaseCombatCharacter *);
	virtual QueryResultType IsPositionAllowed(const INextBot *, const Vector &);
	virtual const CKnownEntity * SelectMoreDangerousThreat(const INextBot *, const CBaseCombatCharacter *, const CKnownEntity *, const CKnownEntity *);

	// vtable[0] Schema_DynamicBinding
	// vtable[62] Reset
	// vtable[63] Update
	// vtable[65] GetName
	// vtable[66] ShouldPickUp
	// vtable[67] ShouldHurry
	// vtable[68] ShouldRetreat
	// vtable[69] ShouldAttack
	// vtable[70] IsHindrance
	// vtable[71] SelectTargetPoint
	// vtable[72] IsPositionAllowed
	// vtable[73] SelectMoreDangerousThreat
	// sizeof = 40
};
