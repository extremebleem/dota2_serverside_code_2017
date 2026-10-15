// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nextbot_s1/nextbotutil.h:33
class NextBotTraceFilterIgnoreActors : public CTraceFilterSimple {
public:

	NextBotTraceFilterIgnoreActors(const CBaseEntity *, int);
	virtual ~NextBotTraceFilterIgnoreActors();

	// sizeof = 64
};

// src/game/server/nextbot_s1/nextbotutil.h:47
class NextBotVisionTraceFilter : public CTraceFilterSimple {
public:

	NextBotVisionTraceFilter(const CBaseEntity *, int);
	virtual ~NextBotVisionTraceFilter();

	// sizeof = 64
};

// src/game/server/nextbot_s1/nextbotutil.h:61
class NextBotTraceFilterIgnoreNextBots : public CTraceFilterSimple {
public:

	NextBotTraceFilterIgnoreNextBots(const CBaseEntity *, int);
	virtual bool ShouldHitEntity(CBaseEntity *);
	virtual ~NextBotTraceFilterIgnoreNextBots();

	// vtable[2] ShouldHitEntity
	// sizeof = 64
};

// src/game/server/nextbot_s1/nextbotutil.h:91
class NextBotTraceFilter : public CTraceFilterSimple {
public:

	const INextBot * m_passBot;  // +0x40
	NextBotTraceFilter(const CBaseEntity *, int);
	virtual bool ShouldHitEntity(CBaseEntity *);
	virtual ~NextBotTraceFilter();

	// vtable[2] ShouldHitEntity
	// sizeof = 72
};

// src/game/server/nextbot_s1/nextbotutil.h:132
class NextBotTraceFilterOnlyActors : public CTraceFilterSimple {
public:

	NextBotTraceFilterOnlyActors(const CBaseEntity *, int);
	virtual bool ShouldHitEntity(CBaseEntity *);
	virtual ~NextBotTraceFilterOnlyActors();

	// vtable[2] ShouldHitEntity
	// sizeof = 64
};

// src/game/server/nextbot_s1/nextbotutil.h:166
class NextBotTraversableTraceFilter : public CTraceFilterSimple {
public:

private:

	NextBotTraversableTraceFilter(INextBot *, TraverseWhenType);
	virtual bool ShouldHitEntity(CBaseEntity *);
	virtual ~NextBotTraversableTraceFilter();

	// vtable[2] ShouldHitEntity
	// sizeof = 80
};
