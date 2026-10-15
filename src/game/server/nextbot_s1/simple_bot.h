// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nextbot_s1/simple_bot.h:18
class CSimpleBot : public NextBotCombatCharacter {
	class CSimpleBotIntention : public IIntention {
	public:

	private:

		CSimpleBotIntention(const CSimpleBotIntention &);
		CSimpleBotIntention(CSimpleBot *);
		virtual ~CSimpleBotIntention();
		virtual const char * GetName();
		virtual void Reset();
		virtual void Update();
		virtual INextBotEventResponder * FirstContainedResponder();
		virtual INextBotEventResponder * NextContainedResponder(INextBotEventResponder *);

		// vtable[65] GetName
		// vtable[62] Reset
		// vtable[63] Update
		// vtable[3] FirstContainedResponder
		// vtable[4] NextContainedResponder
		// sizeof = 48
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

private:

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CSimpleBot(CSimpleBot &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CSimpleBot();
	virtual ~CSimpleBot();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual IIntention * GetIntentionInterface();
	virtual NextBotGroundLocomotion * GetLocomotionInterface();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[6] Precache
	// vtable[8] Spawn
	// vtable[375] GetIntentionInterface
	// vtable[376] GetLocomotionInterface
	// sizeof = 2072
};

// src/game/server/nextbot_s1/simple_bot.h:46
class CSimpleBotPathCost : public CNavShortestPathCost {
public:

	CSimpleBotPathCost(CSimpleBotPathCost &);
	CSimpleBotPathCost(const CSimpleBotPathCost &);
	CSimpleBotPathCost(CSimpleBot *);
	virtual bool IsToAreaTraversable(const CNavArea &, const CNavArea &);
	virtual float FloorAreaCost(const CNavArea &, const CNavArea &, float, float);
	virtual ~CSimpleBotPathCost();

	// vtable[2] IsToAreaTraversable
	// vtable[8] FloorAreaCost
	// sizeof = 32
};
