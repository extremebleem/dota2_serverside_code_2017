// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nextbot_s1/nextbot.h:31
class NextBotCombatCharacter : public CBaseCombatCharacter, public INextBot {
	class NetworkVar_m_nLod {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

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

public:

private:

	static datamap_t m_DataMap;

	EHANDLE m_lastAttacker;  // +0x7fc
	bool m_didModelChange;  // +0x800
	typedef CBaseCombatCharacter BaseClass;
	typedef NextBotCombatCharacter ThisClass;
	NextBotCombatCharacter & operator=(NextBotCombatCharacter &);
	NextBotCombatCharacter(NextBotCombatCharacter &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	NextBotCombatCharacter();
	virtual ~NextBotCombatCharacter();
	virtual void Spawn(const CEntityKeyValues *);
	virtual INextBot * MyNextBotPointer();
	uint GetLod();
	void SetLod(uint);
	virtual int OnTakeDamage_Alive(const CTakeDamageInfo &);
	virtual int OnTakeDamage_Dying(const CTakeDamageInfo &);
	virtual void Event_Killed(const CTakeDamageInfo &);
	virtual void HandleAnimEvent(animevent_t *);
	virtual void OnNavAreaChanged(CNavArea *, CNavArea *);
	virtual void Touch(CBaseEntity *);
	virtual void OnNewModel(HModel, HModel);
	virtual void Ignite(float, bool, float, bool);
	virtual void Ignite(float, CBaseEntity *);
	virtual Vector EyePosition();
	virtual bool IsUseableEntity(CBaseEntity *, unsigned int);
	void UseEntity(CBaseEntity *, USE_TYPE);
	virtual void PerformCustomPhysics(Vector *, Vector *, QAngle *, QAngle *);
	virtual bool BecomeRagdoll(const CTakeDamageInfo &, const Vector &);
	void DoThink();
	int GetLastHitGroup();
	virtual bool IsAreaTraversable(const CNavArea *);
	virtual CBaseCombatCharacter * GetLastAttacker();
	virtual NextBotCombatCharacter * GetEntity();
	virtual NextBotCombatCharacter * GetNextBotCombatCharacter();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[153] MyNextBotPointer
	// vtable[319] OnTakeDamage_Alive
	// vtable[320] OnTakeDamage_Dying
	// vtable[92] Event_Killed
	// vtable[229] HandleAnimEvent
	// vtable[367] OnNavAreaChanged
	// vtable[112] Touch
	// vtable[39] OnNewModel
	// vtable[239] Ignite
	// vtable[370] Ignite
	// vtable[164] EyePosition
	// vtable[371] IsUseableEntity
	// vtable[192] PerformCustomPhysics
	// vtable[339] BecomeRagdoll
	// vtable[363] IsAreaTraversable
	// vtable[372] GetLastAttacker
	// vtable[373] GetEntity
	// vtable[374] GetNextBotCombatCharacter
	// sizeof = 2056
};
