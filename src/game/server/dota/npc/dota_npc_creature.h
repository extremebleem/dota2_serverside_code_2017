// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/npc/dota_npc_creature.h:20
struct CreatureAbilityData_t {
private:

	EHANDLE hAbility;  // +0x0
	bool bIsDamage;  // +0x4
	bool bIsDebuff;  // +0x5
	bool bIsStun;  // +0x6
	bool bIsAOE;  // +0x7
	bool bIsLinear;  // +0x8
	bool bUseOnCreeps;  // +0x9
	bool bIsHeal;  // +0xa
	bool bIsBuff;  // +0xb
	bool bUseSelfishly;  // +0xc
	bool bCanHelpOthersEscape;  // +0xd
	bool bUseOnTrees;  // +0xe
	bool bUseOnStrongestAlly;  // +0xf
	int nUseAtHealthPercent;  // +0x10
	int nRadius;  // +0x14
	int nMinimumTargets;  // +0x18
	int nMinimumHP;  // +0x1c
	int nMinimumRange;  // +0x20

	CreatureAbilityData_t();

	// sizeof = 40
};

// src/game/server/dota/npc/dota_npc_creature.h:73
struct CreatureStateData_t {
private:

	const char * pszName;  // +0x0
	float flAggression;  // +0x8
	float flAvoidance;  // +0xc
	float flSupport;  // +0x10
	float flRoamDistance;  // +0x14

	// sizeof = 24
};

// src/game/server/dota/npc/dota_npc_creature.h:85
struct ItemDropData_t {
private:

	const char * pszItemName;  // +0x0
	int nChance;  // +0x8
	int nReqLevel;  // +0xc
	bool bMustBeChampion;  // +0x10

	// sizeof = 24
};

// src/game/server/dota/npc/dota_npc_creature.h:95
class CDOTA_BaseNPC_Creature : public CDOTA_BaseNPC_Creep {
public:

private:

	bool m_bInitialized;  // +0x119c
	bool m_bCanRespawn;  // +0x119d
	bool m_bUsesGestureBasedAttackAnimation;  // +0x119e
	bool m_bIsHybridFlyer;  // +0x119f
	const char * m_pszDefaultState;  // +0x11b8
	const char * m_pszCurrentState;  // +0x11c0
	int m_nHPGain;  // +0x11c8
	int m_nManaGain;  // +0x11cc
	float m_flHPRegenGain;  // +0x11d0
	float m_flManaRegenGain;  // +0x11d4
	int m_nDamageGain;  // +0x11d8
	float m_flArmorGain;  // +0x11dc
	float m_flMagicResistGain;  // +0x11e0
	float m_flDisableResistGain;  // +0x11e4
	float m_flAttackTimeGain;  // +0x11e8
	int m_nMoveSpeedGain;  // +0x11ec
	int m_nBountyGain;  // +0x11f0
	int m_nXPGain;  // +0x11f4
	int m_nPermanentDesire;  // +0x11f8
	int m_nCreatureDesire;  // +0x11fc
	int m_nCurrentCastBehavior;  // +0x1200
	bool m_bIsBuildingAggressive;  // +0x1204
	bool m_bIsHeroAggressive;  // +0x1205
	bool m_bDisableClumpingBehavior;  // +0x1206

	float m_flDisableResistance;  // +0x1208
	bool m_bHasOffensiveAbility;  // +0x120c

	bool m_bHasDefensiveAbility;  // +0x1228

	bool m_bHasEscapeAbility;  // +0x1248

	bool m_bIsChampion;  // +0x129c

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
	CDOTA_BaseNPC_Creature(CDOTA_BaseNPC_Creature &);
	CDOTA_BaseNPC_Creature(CDOTA_BaseNPC_Creature &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_BaseNPC_Creature();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	void InitializeWearableItemDefs();
	void InitializeCreature();
	virtual bool IsConsideredHero();
	void SetChampion(bool);
	bool IsChampion();
	virtual bool UnitCanRespawn();
	virtual bool UsedGestureBasedAttackAnimation();
	virtual bool IsHybridFlyer();
	const char * GetCurrentState();
	virtual float GetCreatureAggression(const char *);
	void SetCreatureAggression(float);
	virtual float GetCreatureAvoidance(const char *);
	void SetCreatureAvoidance(float);
	virtual float GetCreatureSupport(const char *);
	void SetCreatureSupport(float);
	virtual float GetCreatureRoamDistance(const char *);
	CDOTA_BaseNPC * GetEscortTarget();
	void SetEscortTarget(CDOTA_BaseNPC *);
	bool IsBuildingAggressive();
	bool IsHeroAggressive();
	bool DisableClumpingBehavior();
	float GetDisableResistance();
	void SetDisableResistance(float);
	void CalculateCreatureDesire();
	virtual int GetPermanentDesire();
	virtual int GetCreatureDesire();
	virtual void CreatureLevelUp(int);
	virtual int GetHPGain();
	virtual int GetManaGain();
	virtual float GetHPRegenGain();
	virtual float GetManaRegenGain();
	virtual int GetDamageGain();
	virtual float GetArmorGain();
	virtual float GetMagicResistanceGain();
	virtual float GetDisableResistanceGain();
	virtual float GetAttackTimeGain();
	virtual int GetMoveSpeedGain();
	virtual int GetBountyGain();
	virtual int GetXPGain();
	void SetHPGain(int);
	void SetManaGain(int);
	void SetHPRegenGain(float);
	void SetManaRegenGain(float);
	void SetDamageGain(int);
	void SetArmorGain(float);
	void SetMagicResistanceGain(float);
	void SetDisableResistanceGain(float);
	void SetAttackTimeGain(float);
	void SetMoveSpeedGain(int);
	void SetBountyGain(int);
	void SetXPGain(int);
	void AddItemDrop(ItemDropData_t &);
	void Script_AddItemDrop(HSCRIPT);
	virtual int OnTakeDamage_Alive(const CTakeDamageInfo &);
	void SetDesiredCastLocation(Vector);
	Vector GetDesiredCastLocation();
	void SetDesiredNPCTarget(CDOTA_BaseNPC *);
	CDOTA_BaseNPC * GetDesiredNPCTarget();
	void SetCurrentCastBehavior(int);
	int GetCurrentCastBehavior();
	void SetLocationOfLastDamageSource(Vector);
	Vector GetLocationOfLastDamageSource();
	bool HasOffensiveAbility();
	bool HasOffensiveAbilityReady();
	CDOTABaseAbility * GetDesiredOffensiveAbility();
	bool HasDefensiveAbility();
	bool HasDefensiveAbilityReady();
	CDOTABaseAbility * GetDesiredDefensiveAbility();
	bool HasEscapeAbility();
	bool HasEscapeAbilityReady();
	CDOTABaseAbility * GetDesiredEscapeAbility();
	void SetLastUsedAbility(CDOTABaseAbility *);
	CDOTABaseAbility * GetLastUsedAbility();
	ActionResult<CDOTA_BaseNPC> ConsiderUsingAbilities(Action<CDOTA_BaseNPC> *, CDOTA_BaseNPC *);
	virtual void Event_Killed(const CTakeDamageInfo &);
	virtual void GainedModifier(CDOTA_Buff *);
	CDOTABaseAbility * AddNewAbility(const char *, CreatureAbilityData_t);
	void RemoveCreatureAbility(const char *);
	void FindTargetAoELocation(int, int, int, const Vector &, int, int, Vector *, int *, float, int);
	void FindTargetLinearLocation(int, int, int, const Vector &, int, int, Vector *, int *, float, int);
	bool FindFilter(EHANDLE);
	int BuildLocationList(int, int, int, const Vector &, int, int, CUtlVector<Vector, CUtlMemory<Vector, int> > &, float, int);
	void FindOptimalTargetLocation(CUtlVector<Vector, CUtlMemory<Vector, int> > &, int, Vector *, int *);
	void PrecacheEconItem(item_definition_index_t, const CEntityPrecacheContext *);
	void AttachEconItem(item_definition_index_t);
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	virtual ~CDOTA_BaseNPC_Creature();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[6] Precache
	// vtable[8] Spawn
	// vtable[490] IsConsideredHero
	// vtable[477] UnitCanRespawn
	// vtable[439] UsedGestureBasedAttackAnimation
	// vtable[491] IsHybridFlyer
	// vtable[492] GetCreatureAggression
	// vtable[493] GetCreatureAvoidance
	// vtable[494] GetCreatureSupport
	// vtable[495] GetCreatureRoamDistance
	// vtable[496] GetPermanentDesire
	// vtable[497] GetCreatureDesire
	// vtable[498] CreatureLevelUp
	// vtable[499] GetHPGain
	// vtable[500] GetManaGain
	// vtable[501] GetHPRegenGain
	// vtable[502] GetManaRegenGain
	// vtable[503] GetDamageGain
	// vtable[504] GetArmorGain
	// vtable[505] GetMagicResistanceGain
	// vtable[506] GetDisableResistanceGain
	// vtable[507] GetAttackTimeGain
	// vtable[508] GetMoveSpeedGain
	// vtable[509] GetBountyGain
	// vtable[510] GetXPGain
	// vtable[319] OnTakeDamage_Alive
	// vtable[92] Event_Killed
	// vtable[449] GainedModifier
	// vtable[4] GetScriptDesc
	// sizeof = 4816
};
