// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_creature_abilities.cpp:45
class CDOTA_Ability_Lesser_NightCrawler_Pounce : public CDOTABaseAbility {
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
	CDOTA_Ability_Lesser_NightCrawler_Pounce(CDOTA_Ability_Lesser_NightCrawler_Pounce &);
	CDOTA_Ability_Lesser_NightCrawler_Pounce(CDOTA_Ability_Lesser_NightCrawler_Pounce &);
	CDOTA_Ability_Lesser_NightCrawler_Pounce();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool PlaysDefaultAnimWhenStolen();
	virtual const char * GetStolenActivityModifier();
	virtual ~CDOTA_Ability_Lesser_NightCrawler_Pounce();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[309] PlaysDefaultAnimWhenStolen
	// vtable[310] GetStolenActivityModifier
	// sizeof = 912
};

// src/game/shared/dota/dota_creature_abilities.cpp:81
class CDOTA_Modifier_Lesser_NightCrawler_Pounce : public CDOTA_Buff, public CHorizontalMotionController, public CVerticalMotionController {
public:

private:

	float m_flTotalTime;  // +0xbc4
	float m_flInitialVelocity;  // +0xbc8
	float m_flCurrentTimeHoriz;  // +0xbe4
	float m_flCurrentTimeVert;  // +0xbe8
	bool m_bInterrupted;  // +0xbec

	int pounce_distance;  // +0xbf0
	float pounce_speed;  // +0xbf4
	float pounce_acceleration;  // +0xbf8
	int pounce_radius;  // +0xbfc
	int pounce_damage;  // +0xc00
	float leash_duration;  // +0xc04
	CDOTA_Modifier_Lesser_NightCrawler_Pounce();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void CheckState(CDOTABuffState &);
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void UpdateVerticalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual void OnVerticalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsVerticalMotionValidToApply();
	virtual bool IsMotionController();
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_Lesser_NightCrawler_Pounce();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] UpdateVerticalMotion
	// vtable[91] OnHorizontalMotionInterrupted
	// vtable[92] OnVerticalMotionInterrupted
	// vtable[93] IsHorizontalMotionValidToApply
	// vtable[94] IsVerticalMotionValidToApply
	// vtable[21] IsMotionController
	// vtable[67] GetEffectName
	// sizeof = 3080
};

// src/game/shared/dota/dota_creature_abilities.cpp:332
class CDOTA_Ability_Zombie_Berserk : public CDOTABaseAbility {
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
	CDOTA_Ability_Zombie_Berserk(CDOTA_Ability_Zombie_Berserk &);
	CDOTA_Ability_Zombie_Berserk(CDOTA_Ability_Zombie_Berserk &);
	CDOTA_Ability_Zombie_Berserk();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Zombie_Berserk();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/dota_creature_abilities.cpp:356
class CDOTA_Modifier_Zombie_Berserk : public CDOTA_Buff {
public:

private:

	int berserk_bonus_attack_speed;  // +0xba8
	int berserk_bonus_movement_speed;  // +0xbac
	CDOTA_Modifier_Zombie_Berserk();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Zombie_Berserk();

	// vtable[67] GetEffectName
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// src/game/shared/dota/dota_creature_abilities.cpp:412
class CDOTA_Ability_Corspselord_Revive : public CDOTABaseAbility {
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
	CDOTA_Ability_Corspselord_Revive(CDOTA_Ability_Corspselord_Revive &);
	CDOTA_Ability_Corspselord_Revive(CDOTA_Ability_Corspselord_Revive &);
	CDOTA_Ability_Corspselord_Revive();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual void OnChannelFinish(bool);
	virtual const char * GetStolenActivityModifier();
	virtual ~CDOTA_Ability_Corspselord_Revive();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[267] OnChannelFinish
	// vtable[310] GetStolenActivityModifier
	// sizeof = 912
};

// src/game/shared/dota/dota_creature_abilities.cpp:451
class CDOTA_Modifier_Corpselord_Revive : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	int ticks_to_revive;  // +0xbac
	float tick_interval;  // +0xbb0

	int m_nCurrentTicks;  // +0xbc0
	CDOTA_Modifier_Corpselord_Revive();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	ModifierVariant_t GetOverrideAnimationRate(const CModifierParams &);
	virtual ~CDOTA_Modifier_Corpselord_Revive();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// sizeof = 3016
};

// src/game/shared/dota/dota_creature_abilities.cpp:578
class CDOTA_Ability_Slithereen_Riptide : public CDOTABaseAbility {
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
	CDOTA_Ability_Slithereen_Riptide(CDOTA_Ability_Slithereen_Riptide &);
	CDOTA_Ability_Slithereen_Riptide(CDOTA_Ability_Slithereen_Riptide &);
	CDOTA_Ability_Slithereen_Riptide();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Slithereen_Riptide();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/dota_creature_abilities.cpp:631
class CDOTA_Ability_Creature_Fire_Breath : public CDOTABaseAbility {
public:

private:

	int speed;  // +0x390
	int projectile_count;  // +0x394
	float rotation_angle;  // +0x398
	float damage;  // +0x39c
	float radius;  // +0x3a0

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
	CDOTA_Ability_Creature_Fire_Breath(CDOTA_Ability_Creature_Fire_Breath &);
	CDOTA_Ability_Creature_Fire_Breath(CDOTA_Ability_Creature_Fire_Breath &);
	CDOTA_Ability_Creature_Fire_Breath();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual void OnChannelThink(float);
	virtual ~CDOTA_Ability_Creature_Fire_Breath();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[296] OnChannelThink
	// sizeof = 984
};

// src/game/shared/dota/dota_creature_abilities.cpp:748
class CDOTA_Item_GreaterClarity : public CDOTA_Item {
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
	CDOTA_Item_GreaterClarity(CDOTA_Item_GreaterClarity &);
	CDOTA_Item_GreaterClarity(CDOTA_Item_GreaterClarity &);
	CDOTA_Item_GreaterClarity();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Precache(const CEntityPrecacheContext *);
	virtual void OnSpellStart();
	virtual ~CDOTA_Item_GreaterClarity();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[6] Precache
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/dota_creature_abilities.cpp:799
class CDOTA_Modifier_GreaterClarity : public CDOTA_Buff {
public:

private:

	int total_mana;  // +0xba8
	CDOTA_Modifier_GreaterClarity();
	virtual void OnCreated(KeyValues *);
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierConstantManaRegen(const CModifierParams &);
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual const char * GetTexture();
	virtual ~CDOTA_Modifier_GreaterClarity();

	// vtable[57] OnCreated
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[32] GetTexture
	// sizeof = 2992
};

// src/game/shared/dota/dota_creature_abilities.cpp:874
class CDOTA_Item_UpgradedMortar : public CDOTA_Item {
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
	CDOTA_Item_UpgradedMortar(CDOTA_Item_UpgradedMortar &);
	CDOTA_Item_UpgradedMortar(CDOTA_Item_UpgradedMortar &);
	CDOTA_Item_UpgradedMortar();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual ~CDOTA_Item_UpgradedMortar();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/dota_creature_abilities.cpp:914
class CDOTA_Modifier_UpgradedMortar : public CDOTA_Buff {
public:

private:

	int bonus_per_upgrade;  // +0xba8
	CDOTA_Modifier_UpgradedMortar();
	virtual void OnCreated(KeyValues *);
	virtual bool IsPurgable();
	virtual bool IsPermanent();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBaseAttack_BonusDamage(const CModifierParams &);
	virtual ~CDOTA_Modifier_UpgradedMortar();

	// vtable[57] OnCreated
	// vtable[14] IsPurgable
	// vtable[23] IsPermanent
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/dota_creature_abilities.cpp:961
class CDOTA_Item_UpgradedBarricade : public CDOTA_Item {
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
	CDOTA_Item_UpgradedBarricade(CDOTA_Item_UpgradedBarricade &);
	CDOTA_Item_UpgradedBarricade(CDOTA_Item_UpgradedBarricade &);
	CDOTA_Item_UpgradedBarricade();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual ~CDOTA_Item_UpgradedBarricade();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/dota_creature_abilities.cpp:1008
class CDOTA_Modifier_UpgradedBarricade : public CDOTA_Buff {
public:

private:

	int armor_bonus_per_upgrade;  // +0xba8
	int hp_bonus_per_upgrade;  // +0xbac
	CDOTA_Modifier_UpgradedBarricade();
	virtual void OnCreated(KeyValues *);
	virtual bool IsPurgable();
	virtual bool IsPermanent();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	ModifierVariant_t OnTooltip(const CModifierParams &);
	virtual ~CDOTA_Modifier_UpgradedBarricade();

	// vtable[57] OnCreated
	// vtable[14] IsPurgable
	// vtable[23] IsPermanent
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/dota_creature_abilities.cpp:1064
class CDOTA_Modifier_Creature_HybridFlyer : public CDOTA_Buff {
public:

private:

	CDOTA_Modifier_Creature_HybridFlyer();
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	virtual bool IsPurgable();
	virtual void CheckState(CDOTABuffState &);
	virtual ModifierVariant_t OnUnitMoved(const CModifierParams &);
	virtual int GetPriority();
	virtual ~CDOTA_Modifier_Creature_HybridFlyer();

	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// vtable[89] OnUnitMoved
	// vtable[6] GetPriority
	// sizeof = 3008
};

// src/game/shared/dota/dota_creature_abilities.cpp:1137
class CDOTA_Modifier_Creature_Full_Avoidance : public CDOTA_Buff {
public:

private:

	float m_flOriginalAvoidance;  // +0xba8
	CDOTA_Modifier_Creature_Full_Avoidance();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Creature_Full_Avoidance();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// sizeof = 2992
};

// src/game/shared/dota/dota_creature_abilities.cpp:1195
class CDOTA_Item_BagOfGold : public CDOTA_Item {
public:

private:

	EHANDLE m_hThinker;  // +0x3e8
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
	CDOTA_Item_BagOfGold(CDOTA_Item_BagOfGold &);
	CDOTA_Item_BagOfGold(CDOTA_Item_BagOfGold &);
	CDOTA_Item_BagOfGold();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void OnSpellStart();
	virtual bool IsCastOnPickup();
	virtual void UpdateOnRemove();
	virtual ~CDOTA_Item_BagOfGold();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[266] OnSpellStart
	// vtable[357] IsCastOnPickup
	// vtable[11] UpdateOnRemove
	// sizeof = 1008
};

// src/game/shared/dota/dota_creature_abilities.cpp:1271
class CDOTA_Modifier_LootDrop_Thinker : public CDOTA_Buff {
public:

private:

	bool m_bAutoUse;  // +0xba8
	bool m_bFlying;  // +0xba9

	float m_flKnockbackStartTime;  // +0xbac
	float m_flKnockbackEndTime;  // +0xbb0
	float m_flKnockbackHeight;  // +0xbb4
	float m_flInitialHeight;  // +0xbb8
	float m_flKnockbackDuration;  // +0xbbc
	CDOTA_Modifier_LootDrop_Thinker();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_LootDrop_Thinker();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// sizeof = 3032
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Ability_Lesser_NightCrawler_Pounce::~CDOTA_Ability_Lesser_NightCrawler_Pounce  (line 45, @0x000000000249a0a0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Lesser_NightCrawler_Pounce::~CDOTA_Ability_Lesser_NightCrawler_Pounce(
        CDOTA_Ability_Lesser_NightCrawler_Pounce *const this)
{
  this->_vptr_IHandleEntity = &off_40E3270;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Lesser_NightCrawler_Pounce::~CDOTA_Ability_Lesser_NightCrawler_Pounce  (line 45, @0x000000000249a0c0, libserver.so)  // inlines: ~CDOTA_Ability_Lesser_NightCrawler_Pounce
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Lesser_NightCrawler_Pounce::~CDOTA_Ability_Lesser_NightCrawler_Pounce(
        CDOTA_Ability_Lesser_NightCrawler_Pounce *const this)
{
  this->_vptr_IHandleEntity = &off_40E3270;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Lesser_NightCrawler_Pounce::Schema_DynamicBinding  (line 47, @0x0000000002497a40, libserver.so)
// globals: CDOTA_Ability_Lesser_NightCrawler_Pounce::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lesser_NightCrawler_Pounce::Schema_DynamicBinding(
        const CDOTA_Ability_Lesser_NightCrawler_Pounce *const this)
{
  return CDOTA_Ability_Lesser_NightCrawler_Pounce::s_pSchemaBinding;
}


// CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 47, @0x0000000002497a50, libserver.so)
// globals: CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass::DestructInstance  (line 47, @0x0000000002497a60, libserver.so)  // inlines: Destruct<CDOTA_Ability_Lesser_NightCrawler_Pounce>
void __fastcall CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass::FreeInstance  (line 47, @0x0000000002497a80, libserver.so)
void __fastcall CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass::CanAllocate  (line 47, @0x0000000002497aa0, libserver.so)
bool __fastcall CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 47, @0x0000000002497ab0, libserver.so)
// globals: CDOTA_Ability_Lesser_NightCrawler_Pounce::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lesser_NightCrawler_Pounce::s_pSchemaBinding;
}


// CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass::AllocateInstance  (line 47, @0x0000000002499540, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass::ConstructInstance  (line 47, @0x0000000002499ea0, libserver.so)  // inlines: CDOTA_Ability_Lesser_NightCrawler_Pounce, Construct<CDOTA_Ability_Lesser_NightCrawler_Pounce>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_40E3270;
  }
  return p;
}


// CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 47, @0x000000000249dbd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 47, @0x000000000249dbf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal  (line 47, @0x00000000024a9180, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_02.cpp
// strings: "lesser_nightcrawler_pounce", "CDOTA_Ability_Lesser_NightCrawler_Pounce"
// globals: `guard variable for'CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass, CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClassInfo, CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClassInfo
CEntityClass *__cdecl CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass) != 0 )
  {
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_pClassInfo = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_flags = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_pInputs = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_nInputCount = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_pOutputs = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_nOutputCount = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_pGameClass = 0;
    CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass._vptr_CEntityClass = off_40E31F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass);
    __cxa_atexit(
      CDOTA_Ability_Lesser_NightCrawler_Pounce::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Lesser_NightCrawler_PounceClass != 0 )
    return &CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass;
  if ( `guard variable for'CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClassInfo,
      "CDOTA_Ability_Lesser_NightCrawler_Pounce",
      "lesser_nightcrawler_pounce",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClassInfo);
  }
  CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_pClassInfo = &CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClassInfo;
  CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_pBaseClassInfo = CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Lesser_NightCrawler_PounceClass = &CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass;
  CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClassInfo.m_pClass = &CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass;
  CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Lesser_NightCrawler_PounceClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Lesser_NightCrawler_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lesser_NightCrawler_PounceClass;
}


// CDOTA_Ability_Lesser_NightCrawler_Pounce::PlaysDefaultAnimWhenStolen  (line 52, @0x0000000002497ac0, libserver.so)
bool __fastcall CDOTA_Ability_Lesser_NightCrawler_Pounce::PlaysDefaultAnimWhenStolen(
        CDOTA_Ability_Lesser_NightCrawler_Pounce *const this)
{
  return 0;
}


// CDOTA_Ability_Lesser_NightCrawler_Pounce::GetStolenActivityModifier  (line 53, @0x0000000002497ad0, libserver.so)
const char *__fastcall CDOTA_Ability_Lesser_NightCrawler_Pounce::GetStolenActivityModifier(
        CDOTA_Ability_Lesser_NightCrawler_Pounce *const this)
{
  return "leap";
}


// CDOTA_Ability_Lesser_NightCrawler_Pounce::OnSpellStart  (line 60, @0x0000000002462f70, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_ProjectileManager::ProjectileDodge, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail (13 total)
// strings: "modifier_lesser_nightcrawler_pounce", "particles/units/heroes/hero_slark/slark_pounce_start.vpcf", "Hero_Slark.Pounce.Cast"
void __fastcall CDOTA_Ability_Lesser_NightCrawler_Pounce::OnSpellStart(
        CDOTA_Ability_Lesser_NightCrawler_Pounce *const this)
{
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v6; // cx
  CDOTA_BaseNPC *v7; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  CDOTA_ParticleManager *v10; // rax
  CDOTA_ParticleManager *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  Vector vPos; // [rsp+0h] [rbp-50h] BYREF
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-28h]

  v15 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_lesser_nightcrawler_pounce");
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_lesser_nightcrawler_pounce", &kv, 0);
  v4 = CDOTABaseAbility::GetCaster(this);
  vPos.x = NAN;
  if ( v4 != 0 )
  {
    m_pEntity = v4->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v6 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LODWORD(vPos.x) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
    }
  }
  CDOTA_ProjectileManager::ProjectileDodge(&g_DOTAProjectileManager, &vPos, 0);
  v7 = CDOTABaseAbility::GetCaster(this);
  vPos = *CBaseEntity::GetAbsOrigin(v7);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_slark/slark_pounce_start.vpcf",
               8,
               0,
               0,
               0);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v10, Particle, 0, vPos);
  v11 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v11, Particle);
  v12 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Slark.Pounce.Cast", v12);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Lesser_NightCrawler_Pounce::~CDOTA_Modifier_Lesser_NightCrawler_Pounce  (line 81, @0x0000000002499c10, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Lesser_NightCrawler_Pounce::~CDOTA_Modifier_Lesser_NightCrawler_Pounce(
        CDOTA_Modifier_Lesser_NightCrawler_Pounce *const this)
{
  this->_vptr_CDOTA_Buff = &off_40E3D30;
  this->_vptr_CHorizontalMotionController = &off_40E4038;
  this->_vptr_CVerticalMotionController = &off_40E4078;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Lesser_NightCrawler_Pounce::~CDOTA_Modifier_Lesser_NightCrawler_Pounce  (line 81, @0x0000000002499c40, libserver.so)  // inlines: ~CDOTA_Modifier_Lesser_NightCrawler_Pounce
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Lesser_NightCrawler_Pounce::~CDOTA_Modifier_Lesser_NightCrawler_Pounce(
        CDOTA_Modifier_Lesser_NightCrawler_Pounce *const this)
{
  this->_vptr_CDOTA_Buff = &off_40E3D30;
  this->_vptr_CHorizontalMotionController = &off_40E4038;
  this->_vptr_CVerticalMotionController = &off_40E4078;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Lesser_NightCrawler_Pounce::IsHidden  (line 91, @0x0000000002497ae0, libserver.so)
bool __fastcall CDOTA_Modifier_Lesser_NightCrawler_Pounce::IsHidden(
        CDOTA_Modifier_Lesser_NightCrawler_Pounce *const this)
{
  return 1;
}


// CDOTA_Modifier_Lesser_NightCrawler_Pounce::IsPurgable  (line 92, @0x0000000002497af0, libserver.so)
bool __fastcall CDOTA_Modifier_Lesser_NightCrawler_Pounce::IsPurgable(
        CDOTA_Modifier_Lesser_NightCrawler_Pounce *const this)
{
  return 0;
}


// CDOTA_Modifier_Lesser_NightCrawler_Pounce::IsHorizontalMotionValidToApply  (line 103, @0x0000000002497b00, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Lesser_NightCrawler_Pounce::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_Lesser_NightCrawler_Pounce *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Lesser_NightCrawler_Pounce::IsVerticalMotionValidToApply  (line 104, @0x0000000002497b30, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Lesser_NightCrawler_Pounce::IsVerticalMotionValidToApply(
        CDOTA_Modifier_Lesser_NightCrawler_Pounce *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Lesser_NightCrawler_Pounce::IsMotionController  (line 106, @0x0000000002497b60, libserver.so)
bool __fastcall CDOTA_Modifier_Lesser_NightCrawler_Pounce::IsMotionController(
        CDOTA_Modifier_Lesser_NightCrawler_Pounce *const this)
{
  return 1;
}


// CDOTA_Modifier_Lesser_NightCrawler_Pounce::GetEffectName  (line 108, @0x0000000002497b70, libserver.so)
// strings: "particles/units/heroes/hero_slark/slark_pounce_trail.vpcf"
const char *__fastcall CDOTA_Modifier_Lesser_NightCrawler_Pounce::GetEffectName(
        CDOTA_Modifier_Lesser_NightCrawler_Pounce *const this)
{
  return "particles/units/heroes/hero_slark/slark_pounce_trail.vpcf";
}


// CDOTA_Modifier_Lesser_NightCrawler_Pounce::OnCreated  (line 135, @0x0000000002475790, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, VectorAdd, VectorMultiply, operator*, operator+, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, CDOTA_BaseNPC::StartGesture, CBaseEntity::GetAbsOrigin, GetPositionOnGround, CDOTALocomotor::ApplyHorizontalMotionController, CDOTA_Buff::Destroy, CDOTALocomotor::ApplyVerticalMotionController, CGridNavBase::ClampToWorldEdge, GetGroundHeight
// strings: "pounce_distance", "pounce_speed", "pounce_acceleration", "pounce_radius", "pounce_damage", "leash_duration"
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_Modifier_Lesser_NightCrawler_Pounce::OnCreated(
        CDOTA_Modifier_Lesser_NightCrawler_Pounce *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v10; // r12
  CDOTA_BaseNPC *v11; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  CDOTALocomotor *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  CDOTALocomotor *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  float v20; // xmm0_4
  float v21; // xmm2_4
  Vector v22; // [rsp+0h] [rbp-40h]
  float flPounceDist; // [rsp+Ch] [rbp-34h]
  Vector vEdgePos_8; // [rsp+20h] [rbp-20h] OVERLAPPED BYREF
  Vector PositionOnGround; // 0:kr00_12.12

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->pounce_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "pounce_distance", -1, 0);
  else
    this->pounce_distance = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    this->pounce_speed = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "pounce_speed", -1, 0);
  else
    this->pounce_speed = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
    this->pounce_acceleration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "pounce_acceleration", -1, 0);
  else
    this->pounce_acceleration = 0.0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
    this->pounce_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "pounce_radius", -1, 0);
  else
    this->pounce_radius = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
    this->pounce_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "pounce_damage", -1, 0);
  else
    this->pounce_damage = 0;
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 != 0 )
    this->leash_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8, "leash_duration", -1, 0);
  else
    this->leash_duration = 0.0;
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::StartGesture(Parent, 1604, 0.0, 0.5, 9, 0, 1.0);
  v10 = CDOTA_Buff::GetParent(this);
  v11 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
  PositionOnGround = GetPositionOnGround(AbsOrigin, v10);
  *&vEdgePos_8.x = *&PositionOnGround.x;
  this->m_vStartPosition.z = PositionOnGround.z;
  vEdgePos_8.z = PositionOnGround.z;
  this->m_vStartPosition.x = PositionOnGround.x;
  this->m_vStartPosition.y = vEdgePos_8.y;
  v13 = CDOTA_Buff::GetParent(this);
  (*(v13->_vptr_IHandleEntity + 61))(v13, &this->m_vTargetHorizontalDirection, 0, 0);
  v14 = CDOTA_Buff::GetParent(this);
  v15 = (*(v14->_vptr_IHandleEntity + 376))(v14);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v15, &this->CHorizontalMotionController, 0)
    && (v16 = CDOTA_Buff::GetParent(this),
        v17 = (*(v16->_vptr_IHandleEntity + 376))(v16),
        CDOTALocomotor::ApplyVerticalMotionController(v17, &this->CVerticalMotionController, 0)) )
  {
    this->m_flCurrentTimeHoriz = 0.0;
    this->m_flCurrentTimeVert = 0.0;
    this->m_bInterrupted = 0;
    v18 = CDOTA_Buff::GetParent(this);
    vEdgePos_8 = CGridNavBase::ClampToWorldEdge(&g_GridNav, v22, v18);
    v19 = CDOTA_Buff::GetParent(this);
    v20 = GetGroundHeight(&vEdgePos_8, v19) - this->m_vStartPosition.z;
    v21 = flPounceDist / this->pounce_speed;
    this->m_flTotalTime = v21;
    this->m_flInitialVelocity = (v20 / v21) + ((0.5 * this->pounce_acceleration) * v21);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Lesser_NightCrawler_Pounce::UpdateHorizontalMotion  (line 182, @0x0000000002480500, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, Reset, SpeakConcept, ToDOTABaseNPC, VectorAdd, VectorMultiply, entindex, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::IsLeashedMovementPrevented, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_Buff::GetCaster, CDOTA_Speech::SpeakConcept, CDOTA_Buff::GetAbility, ApplyDamage, CGridNav::DestroyTreesAroundPoint, CBaseEntity::StopSound (23 total)
// strings: "pouncehithero", "Hero_Slark.Pounce.Cast", "Hero_Slark.Pounce.Impact"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Lesser_NightCrawler_Pounce::UpdateHorizontalMotion(
        CDOTA_Modifier_Lesser_NightCrawler_Pounce *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  float v6; // xmm0_4
  float m_flTotalTime; // xmm1_4
  float pounce_speed; // xmm1_4
  vec_t v9; // xmm3_4
  vec_t v10; // xmm2_4
  vec_t v11; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v13; // rax
  __m128i v14; // xmm4
  float v15; // r15d
  CDOTA_BaseNPC *v16; // r14
  CDOTA_BaseNPC *v17; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v19; // rax
  int v20; // edx
  CHandle<CBaseEntity> *m_pMemory; // rax
  CEntityIdentity *v22; // rsi
  CEntityIdentity *v23; // rsi
  CEntityInstance *m_pInstance; // r12
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v28; // rax
  CDOTA_BaseNPC *v29; // rax
  float v30; // xmm3_4
  CDOTA_BaseNPC *v31; // rax
  CDOTA_BaseNPC *v32; // rax
  vec_t y; // xmm0_4
  CDOTA_BaseNPC *v34; // rax
  CEntityIndex v35; // eax
  __int64 m_Size; // r14
  int v37; // eax
  CEntityIndex *v38; // rax
  Vector iFlagFilter; // [rsp+0h] [rbp-100h]
  Vector iFlagFiltera; // [rsp+0h] [rbp-100h]
  float flDamagea; // [rsp+1Ch] [rbp-E4h]
  int32 flDamage; // [rsp+1Ch] [rbp-E4h]
  Vector vNewLocation; // [rsp+20h] [rbp-E0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-D0h] BYREF
  CResponseCriteriaSet criteria; // [rsp+50h] [rbp-B0h] BYREF
  CUnitOrders attackOrder; // [rsp+90h] [rbp-70h] BYREF

  v6 = a3 + this->m_flCurrentTimeHoriz;
  m_flTotalTime = this->m_flTotalTime;
  this->m_flCurrentTimeHoriz = v6;
  if ( v6 > m_flTotalTime )
  {
    this->m_flCurrentTimeHoriz = m_flTotalTime;
    v6 = m_flTotalTime;
  }
  pounce_speed = this->pounce_speed;
  v9 = ((this->m_vTargetHorizontalDirection.y * pounce_speed) * v6) + this->m_vStartPosition.y;
  v10 = ((this->m_vTargetHorizontalDirection.z * pounce_speed) * v6) + this->m_vStartPosition.z;
  v11 = ((pounce_speed * this->m_vTargetHorizontalDirection.x) * v6) + this->m_vStartPosition.x;
  vNewLocation.y = v9;
  vNewLocation.z = v10;
  vNewLocation.x = v11;
  Parent = CDOTA_Buff::GetParent(this);
  v13 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  if ( !CDOTALocomotor::IsLeashedMovementPrevented(v13, iFlagFilter) )
    CBaseEntity::SetAbsOrigin(me, &vNewLocation);
  *v14.m128i_i32 = this->pounce_radius;
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v15 = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
  v16 = CDOTA_Buff::GetParent(this);
  v17 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v17);
  v19 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v19->m_iTeamNum.m_Value, AbsOrigin, v16, v15, &entities, 2, 1, 0, 1, 0);
  if ( entities.m_Size > 0 )
  {
    v20 = 0;
    m_pMemory = entities.m_Memory.m_pMemory;
    while ( 1 )
    {
      if ( m_pMemory->m_Index + 2 > 1 )
      {
        v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
        if ( v22 != 0 )
        {
          v23 = &v22[m_pMemory->m_Index & 0x1FF];
          if ( v23 != 0 && m_pMemory->m_Index == v23->m_EHandle.m_Index )
          {
            m_pInstance = v23->m_pInstance;
            if ( v23->m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
              && LOBYTE(m_pInstance[71].m_pEntity) == 0
              && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) == 0 )
            {
              break;
            }
          }
        }
      }
      ++v20;
      ++m_pMemory;
      if ( v20 == entities.m_Size )
        goto LABEL_25;
    }
    CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
    CResponseCriteriaSet::AppendCriteria(&criteria, "pouncehithero", "yes", 1.0);
    m_pSpeech = CDOTA_Buff::GetCaster(this)->m_Speech.m_pSpeech;
    if ( m_pSpeech != 0 )
      CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 4, 0, 0, 0, 0);
    flDamagea = this->pounce_damage;
    Ability = CDOTA_Buff::GetAbility(this);
    Caster = CDOTA_Buff::GetCaster(this);
    ApplyDamage(Caster, m_pInstance, Ability, flDamagea, 2, 0);
    v28 = CDOTA_Buff::GetCaster(this);
    LODWORD(Ability) = (*(v28->_vptr_IHandleEntity + 414))(v28);
    v29 = CDOTA_Buff::GetCaster(this);
    CBaseEntity::GetAbsOrigin(v29);
    CGridNav::DestroyTreesAroundPoint(&g_GridNav, iFlagFiltera, v30, 0, Ability);
    v31 = CDOTA_Buff::GetParent(this);
    CBaseEntity::StopSound(v31, "Hero_Slark.Pounce.Cast");
    v32 = CDOTA_Buff::GetParent(this);
    DOTA_EmitSound(10, "Hero_Slark.Pounce.Impact", v32);
    attackOrder.m_bQueue = 0;
    attackOrder.m_nUnits.m_Size = 0;
    memset(&attackOrder.m_nUnits.m_Memory, 0, 28);
    attackOrder.m_nOrderSequenceNumber = 0;
    attackOrder.m_vPosition.x = vec3_origin.x;
    y = vec3_origin.y;
    attackOrder.m_nIssuerPlayerIndex = -1;
    attackOrder.m_vPosition.y = y;
    attackOrder.m_vPosition.z = vec3_origin.z;
    v34 = CDOTA_Buff::GetCaster(this);
    v35.m_Data = CEntityInstance::GetEntityIndex(v34).m_Data;
    m_Size = attackOrder.m_nUnits.m_Size;
    flDamage = v35.m_Data;
    v37 = attackOrder.m_nUnits.m_Size;
    if ( attackOrder.m_nUnits.m_Size == attackOrder.m_nUnits.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CEntityIndex,int>::Grow(&attackOrder.m_nUnits.m_Memory, 1);
      v37 = attackOrder.m_nUnits.m_Size;
    }
    attackOrder.m_nUnits.m_Size = v37 + 1;
    v38 = &attackOrder.m_nUnits.m_Memory.m_pMemory[m_Size];
    if ( v38 != 0 )
      v38->m_Data = flDamage;
    attackOrder.m_nOrderType = 4;
    attackOrder.m_nTargetIndex = CEntityInstance::GetEntityIndex(m_pInstance);
    DOTA_ExecuteOrders(&attackOrder, 0, 0, 0);
    CDOTA_Buff::Destroy(this, 0, 0, 0);
    attackOrder.m_nUnits.m_Size = 0;
    if ( (attackOrder.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CEntityIndex,int>::Purge(&attackOrder.m_nUnits.m_Memory);
      if ( (attackOrder.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CEntityIndex,int>::Purge(&attackOrder.m_nUnits.m_Memory);
    }
    CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  }
LABEL_25:
  entities.m_Size = 0;
  if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
  }
}


// CDOTA_Modifier_Lesser_NightCrawler_Pounce::UpdateVerticalMotion  (line 239, @0x0000000002463130, libserver.so)  // inlines: Square<float>
// calls: CBaseEntity::GetAbsOrigin, CBaseEntity::SetAbsOrigin, CDOTA_Buff::Destroy, CDOTA_Buff::GetCaster, CGridNav::DestroyTreesAroundPoint, CDOTA_Buff::GetParent, GetGroundHeight
void __fastcall CDOTA_Modifier_Lesser_NightCrawler_Pounce::UpdateVerticalMotion(
        CDOTA_Modifier_Lesser_NightCrawler_Pounce *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  bool v6; // zf
  float v7; // xmm0_4
  float m_flTotalTime; // xmm1_4
  char v9; // r13
  const Vector *AbsOrigin; // rax
  float m_flCurrentTimeVert; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  int v16; // r12d
  CDOTA_BaseNPC *v17; // rax
  float v18; // xmm3_4
  const Vector *v19; // rax
  float v20; // xmm1_4
  float pounce_acceleration; // xmm3_4
  float m_flInitialVelocity; // xmm2_4
  CDOTA_BaseNPC *Parent; // rax
  float GroundHeight; // xmm0_4
  CDOTA_BaseNPC *v25; // rax
  int v26; // r14d
  CDOTA_BaseNPC *v27; // rax
  float v28; // xmm3_4
  Vector v29; // [rsp+0h] [rbp-40h]
  Vector vNewPos; // [rsp+10h] [rbp-30h] BYREF

  v6 = !this->m_bInterrupted;
  v7 = a3 + this->m_flCurrentTimeVert;
  this->m_flCurrentTimeVert = v7;
  if ( v6 )
  {
    m_flTotalTime = this->m_flTotalTime;
    v9 = 0;
    if ( v7 >= m_flTotalTime )
    {
      this->m_flCurrentTimeVert = m_flTotalTime;
      v9 = 1;
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(me);
    m_flCurrentTimeVert = this->m_flCurrentTimeVert;
    v12 = m_flCurrentTimeVert * m_flCurrentTimeVert;
    v13 = -0.5 * this->pounce_acceleration;
    v14 = m_flCurrentTimeVert * this->m_flInitialVelocity;
    *&vNewPos.x = *&AbsOrigin->x;
    vNewPos.z = (((v13 * v12) + v14) / 3.0) + this->m_vStartPosition.z;
    CBaseEntity::SetAbsOrigin(me, &vNewPos);
    if ( v9 != 0 )
    {
      CDOTA_Buff::Destroy(this, 0, 0, 0);
      Caster = CDOTA_Buff::GetCaster(this);
      v16 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
      v17 = CDOTA_Buff::GetCaster(this);
      CBaseEntity::GetAbsOrigin(v17);
      CGridNav::DestroyTreesAroundPoint(&g_GridNav, v29, v18, 0, v16);
    }
  }
  else
  {
    v19 = CBaseEntity::GetAbsOrigin(me);
    v20 = this->m_flCurrentTimeVert;
    pounce_acceleration = this->pounce_acceleration;
    m_flInitialVelocity = this->m_flInitialVelocity;
    *&vNewPos.x = *&v19->x;
    vNewPos.z = ((((-0.5 * pounce_acceleration) * (v20 * v20)) + this->m_vStartPosition.z) + (v20 * m_flInitialVelocity))
              / 3.0;
    if ( (m_flInitialVelocity - (v20 * pounce_acceleration)) < 0.0 )
    {
      Parent = CDOTA_Buff::GetParent(this);
      GroundHeight = GetGroundHeight(&vNewPos, Parent);
      if ( GroundHeight >= vNewPos.z )
      {
        vNewPos.z = GroundHeight;
        v25 = CDOTA_Buff::GetCaster(this);
        v26 = (*(v25->_vptr_IHandleEntity + 414))(v25);
        v27 = CDOTA_Buff::GetCaster(this);
        CBaseEntity::GetAbsOrigin(v27);
        CGridNav::DestroyTreesAroundPoint(&g_GridNav, v29, v28, 0, v26);
        CDOTA_Buff::Destroy(this, 0, 0, 0);
      }
    }
    CBaseEntity::SetAbsOrigin(me, &vNewPos);
  }
}


// CDOTA_Modifier_Lesser_NightCrawler_Pounce::OnHorizontalMotionInterrupted  (line 290, @0x00000000024626f0, libserver.so)
void __fastcall CDOTA_Modifier_Lesser_NightCrawler_Pounce::OnHorizontalMotionInterrupted(
        CDOTA_Modifier_Lesser_NightCrawler_Pounce *const this)
{
  this->m_bInterrupted = 1;
}


// CDOTA_Modifier_Lesser_NightCrawler_Pounce::OnVerticalMotionInterrupted  (line 299, @0x0000000002463110, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Lesser_NightCrawler_Pounce::OnVerticalMotionInterrupted(
        CDOTA_Modifier_Lesser_NightCrawler_Pounce *const this)
{
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Lesser_NightCrawler_Pounce::OnDestroy  (line 308, @0x00000000024633a0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController, CDOTALocomotor::RemoveVerticalMotionController
void __fastcall CDOTA_Modifier_Lesser_NightCrawler_Pounce::OnDestroy(
        CDOTA_Modifier_Lesser_NightCrawler_Pounce *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTALocomotor *v5; // rax

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveHorizontalMotionController(v3, &this->CHorizontalMotionController);
  v4 = CDOTA_Buff::GetParent(this);
  v5 = (*(v4->_vptr_IHandleEntity + 376))(v4);
  CDOTALocomotor::RemoveVerticalMotionController(v5, &this->CVerticalMotionController);
}


// CDOTA_Modifier_Lesser_NightCrawler_Pounce::CheckState  (line 318, @0x0000000002462710, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Lesser_NightCrawler_Pounce::CheckState(
        CDOTA_Modifier_Lesser_NightCrawler_Pounce *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 2uLL;
  buffState->m_nDisabledStateMask &= ~2uLL;
}


// CDOTA_Ability_Zombie_Berserk::~CDOTA_Ability_Zombie_Berserk  (line 332, @0x000000000249a0f0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Zombie_Berserk::~CDOTA_Ability_Zombie_Berserk(CDOTA_Ability_Zombie_Berserk *const this)
{
  this->_vptr_IHandleEntity = &off_40E4130;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Zombie_Berserk::~CDOTA_Ability_Zombie_Berserk  (line 332, @0x000000000249a110, libserver.so)  // inlines: ~CDOTA_Ability_Zombie_Berserk
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Zombie_Berserk::~CDOTA_Ability_Zombie_Berserk(CDOTA_Ability_Zombie_Berserk *const this)
{
  this->_vptr_IHandleEntity = &off_40E4130;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Zombie_Berserk::Schema_DynamicBinding  (line 334, @0x0000000002497b80, libserver.so)
// globals: CDOTA_Ability_Zombie_Berserk::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Zombie_Berserk::Schema_DynamicBinding(
        const CDOTA_Ability_Zombie_Berserk *const this)
{
  return CDOTA_Ability_Zombie_Berserk::s_pSchemaBinding;
}


// CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 334, @0x0000000002497b90, libserver.so)
// globals: CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass::DestructInstance  (line 334, @0x0000000002497ba0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Zombie_Berserk>
void __fastcall CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass::FreeInstance  (line 334, @0x0000000002497bc0, libserver.so)
void __fastcall CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass::CanAllocate  (line 334, @0x0000000002497be0, libserver.so)
bool __fastcall CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 334, @0x0000000002497bf0, libserver.so)
// globals: CDOTA_Ability_Zombie_Berserk::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Zombie_Berserk::s_pSchemaBinding;
}


// CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass::AllocateInstance  (line 334, @0x0000000002499580, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass::ConstructInstance  (line 334, @0x0000000002499ed0, libserver.so)  // inlines: CDOTA_Ability_Zombie_Berserk, Construct<CDOTA_Ability_Zombie_Berserk>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_40E4130;
  }
  return p;
}


// CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 334, @0x000000000249dc20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 334, @0x000000000249dc40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal  (line 334, @0x00000000024a9eb0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_02.cpp
// strings: "CDOTA_Ability_Zombie_Berserk"
// globals: `guard variable for'CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass, CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Zombie_Berserk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zombie_BerserkClassInfo, CDOTA_Ability_Zombie_Berserk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zombie_BerserkClassInfo
CEntityClass *__cdecl CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass) != 0 )
  {
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_pClassInfo = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_flags = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_pInputs = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_nInputCount = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_pOutputs = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_nOutputCount = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_pGameClass = 0;
    CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass._vptr_CEntityClass = off_40E40B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass);
    __cxa_atexit(
      CDOTA_Ability_Zombie_Berserk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Zombie_BerserkClass != 0 )
    return &CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass;
  if ( `guard variable for'CDOTA_Ability_Zombie_Berserk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zombie_BerserkClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Zombie_Berserk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zombie_BerserkClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Zombie_Berserk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zombie_BerserkClassInfo,
      "CDOTA_Ability_Zombie_Berserk",
      "zombie_berserk",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Zombie_Berserk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zombie_BerserkClassInfo);
  }
  CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_pClassInfo = &CDOTA_Ability_Zombie_Berserk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zombie_BerserkClassInfo;
  CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_pBaseClassInfo = CDOTA_Ability_Zombie_Berserk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zombie_BerserkClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Zombie_BerserkClass = &CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass;
  CDOTA_Ability_Zombie_Berserk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Zombie_BerserkClassInfo.m_pClass = &CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass;
  CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Zombie_BerserkClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Zombie_Berserk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Zombie_BerserkClass;
}


// CDOTA_Ability_Zombie_Berserk::OnSpellStart  (line 343, @0x00000000024745c0, libserver.so)
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_zombie_berserk", "berserk_duration"
void __fastcall CDOTA_Ability_Zombie_Berserk::OnSpellStart(CDOTA_Ability_Zombie_Berserk *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_zombie_berserk");
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "berserk_duration", -1, 0);
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_zombie_berserk", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Zombie_Berserk::~CDOTA_Modifier_Zombie_Berserk  (line 356, @0x0000000002499bc0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Zombie_Berserk::~CDOTA_Modifier_Zombie_Berserk(
        CDOTA_Modifier_Zombie_Berserk *const this)
{
  this->_vptr_CDOTA_Buff = &off_40E4BF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Zombie_Berserk::~CDOTA_Modifier_Zombie_Berserk  (line 356, @0x0000000002499be0, libserver.so)  // inlines: ~CDOTA_Modifier_Zombie_Berserk
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Zombie_Berserk::~CDOTA_Modifier_Zombie_Berserk(
        CDOTA_Modifier_Zombie_Berserk *const this)
{
  this->_vptr_CDOTA_Buff = &off_40E4BF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Zombie_Berserk::GetEffectName  (line 364, @0x0000000002497c00, libserver.so)
// strings: "particles/items2_fx/mask_of_madness.vpcf"
const char *__fastcall CDOTA_Modifier_Zombie_Berserk::GetEffectName(CDOTA_Modifier_Zombie_Berserk *const this)
{
  return "particles/items2_fx/mask_of_madness.vpcf";
}


// CDOTA_Modifier_Zombie_Berserk::DeclareFunctions  (line 378, @0x0000000002462720, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Zombie_Berserk::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Zombie_Berserk::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Zombie_Berserk::DeclareFunctions(CDOTA_Modifier_Zombie_Berserk *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_Zombie_Berserk::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[13].__pfn = CDOTA_Modifier_Zombie_Berserk::GetModifierMoveSpeedBonus_Percentage;
}


// CDOTA_Modifier_Zombie_Berserk::OnCreated  (line 386, @0x0000000002475560, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "berserk_bonus_attack_speed", "berserk_bonus_movement_speed"
void __fastcall CDOTA_Modifier_Zombie_Berserk::OnCreated(CDOTA_Modifier_Zombie_Berserk *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->berserk_bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                         Ability,
                                         "berserk_bonus_attack_speed",
                                         -1,
                                         0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->berserk_bonus_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                             v4,
                                             "berserk_bonus_movement_speed",
                                             -1,
                                             0);
      return;
    }
  }
  else
  {
    this->berserk_bonus_attack_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->berserk_bonus_movement_speed = 0;
}


// CDOTA_Modifier_Zombie_Berserk::GetModifierAttackSpeedBonus_Constant  (line 394, @0x0000000002462760, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Zombie_Berserk::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Zombie_Berserk *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->berserk_bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Zombie_Berserk::GetModifierMoveSpeedBonus_Percentage  (line 401, @0x0000000002462780, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Zombie_Berserk::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Zombie_Berserk *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->berserk_bonus_movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Corspselord_Revive::~CDOTA_Ability_Corspselord_Revive  (line 412, @0x000000000249a140, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Corspselord_Revive::~CDOTA_Ability_Corspselord_Revive(
        CDOTA_Ability_Corspselord_Revive *const this)
{
  this->_vptr_IHandleEntity = &off_40E4F50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Corspselord_Revive::~CDOTA_Ability_Corspselord_Revive  (line 412, @0x000000000249a160, libserver.so)  // inlines: ~CDOTA_Ability_Corspselord_Revive
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Corspselord_Revive::~CDOTA_Ability_Corspselord_Revive(
        CDOTA_Ability_Corspselord_Revive *const this)
{
  this->_vptr_IHandleEntity = &off_40E4F50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Corspselord_Revive::Schema_DynamicBinding  (line 414, @0x0000000002497c10, libserver.so)
// globals: CDOTA_Ability_Corspselord_Revive::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Corspselord_Revive::Schema_DynamicBinding(
        const CDOTA_Ability_Corspselord_Revive *const this)
{
  return CDOTA_Ability_Corspselord_Revive::s_pSchemaBinding;
}


// CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 414, @0x0000000002497c20, libserver.so)
// globals: CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass::DestructInstance  (line 414, @0x0000000002497c30, libserver.so)  // inlines: Destruct<CDOTA_Ability_Corspselord_Revive>
void __fastcall CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass::FreeInstance  (line 414, @0x0000000002497c50, libserver.so)
void __fastcall CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass::CanAllocate  (line 414, @0x0000000002497c70, libserver.so)
bool __fastcall CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 414, @0x0000000002497c80, libserver.so)
// globals: CDOTA_Ability_Corspselord_Revive::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Corspselord_Revive::s_pSchemaBinding;
}


// CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass::AllocateInstance  (line 414, @0x00000000024995c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass::ConstructInstance  (line 414, @0x0000000002499f00, libserver.so)  // inlines: CDOTA_Ability_Corspselord_Revive, Construct<CDOTA_Ability_Corspselord_Revive>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_40E4F50;
  }
  return p;
}


// CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 414, @0x000000000249dc70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 414, @0x000000000249dc90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal  (line 414, @0x00000000024a8e30, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_02.cpp
// strings: "CDOTA_Ability_Corspselord_Revive"
// globals: `guard variable for'CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass, CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Corspselord_Revive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClassInfo, CDOTA_Ability_Corspselord_Revive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClassInfo
CEntityClass *__cdecl CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass) != 0 )
  {
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_pClassInfo = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_flags = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_pInputs = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_nInputCount = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_pOutputs = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_nOutputCount = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_pGameClass = 0;
    CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass._vptr_CEntityClass = off_40E4ED0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass);
    __cxa_atexit(
      CDOTA_Ability_Corspselord_Revive::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Corspselord_ReviveClass != 0 )
    return &CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass;
  if ( `guard variable for'CDOTA_Ability_Corspselord_Revive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Corspselord_Revive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Corspselord_Revive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClassInfo,
      "CDOTA_Ability_Corspselord_Revive",
      "corpselord_revive",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Corspselord_Revive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClassInfo);
  }
  CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_pClassInfo = &CDOTA_Ability_Corspselord_Revive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClassInfo;
  CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_pBaseClassInfo = CDOTA_Ability_Corspselord_Revive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Corspselord_ReviveClass = &CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass;
  CDOTA_Ability_Corspselord_Revive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClassInfo.m_pClass = &CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass;
  CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Corspselord_ReviveClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Corspselord_Revive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Corspselord_ReviveClass;
}


// CDOTA_Ability_Corspselord_Revive::GetStolenActivityModifier  (line 420, @0x0000000002497c90, libserver.so)
const char *__fastcall CDOTA_Ability_Corspselord_Revive::GetStolenActivityModifier(
        CDOTA_Ability_Corspselord_Revive *const this)
{
  return "freezing_field";
}


// CDOTA_Ability_Corspselord_Revive::OnSpellStart  (line 429, @0x0000000002462e20, libserver.so)
// calls: KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_corpselord_revive"
void __fastcall CDOTA_Ability_Corspselord_Revive::OnSpellStart(CDOTA_Ability_Corspselord_Revive *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_corpselord_revive");
  (*(this->_vptr_IHandleEntity + 225))(this);
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_corpselord_revive", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Corspselord_Revive::OnChannelFinish  (line 440, @0x0000000002463400, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_corpselord_revive"
void __fastcall CDOTA_Ability_Corspselord_Revive::OnChannelFinish(
        CDOTA_Ability_Corspselord_Revive *const this,
        bool bInterrupted)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_corpselord_revive");
}


// CDOTA_Modifier_Corpselord_Revive::~CDOTA_Modifier_Corpselord_Revive  (line 451, @0x0000000002499b70, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Corpselord_Revive::~CDOTA_Modifier_Corpselord_Revive(
        CDOTA_Modifier_Corpselord_Revive *const this)
{
  this->_vptr_CDOTA_Buff = &off_40E5A10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Corpselord_Revive::~CDOTA_Modifier_Corpselord_Revive  (line 451, @0x0000000002499b90, libserver.so)  // inlines: ~CDOTA_Modifier_Corpselord_Revive
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Corpselord_Revive::~CDOTA_Modifier_Corpselord_Revive(
        CDOTA_Modifier_Corpselord_Revive *const this)
{
  this->_vptr_CDOTA_Buff = &off_40E5A10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Corpselord_Revive::IsHidden  (line 456, @0x0000000002497ca0, libserver.so)
bool __fastcall CDOTA_Modifier_Corpselord_Revive::IsHidden(CDOTA_Modifier_Corpselord_Revive *const this)
{
  return 1;
}


// CDOTA_Modifier_Corpselord_Revive::IsPurgable  (line 457, @0x0000000002497cb0, libserver.so)
bool __fastcall CDOTA_Modifier_Corpselord_Revive::IsPurgable(CDOTA_Modifier_Corpselord_Revive *const this)
{
  return 0;
}


// CDOTA_Modifier_Corpselord_Revive::OnCreated  (line 483, @0x0000000002475690, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
// strings: "ticks_to_revive"
void __fastcall CDOTA_Modifier_Corpselord_Revive::OnCreated(
        CDOTA_Modifier_Corpselord_Revive *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->tick_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "tick_interval", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_7:
    this->ticks_to_revive = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
LABEL_8:
    this->radius = 0;
    goto LABEL_5;
  }
  this->tick_interval = 0.0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_7;
LABEL_3:
  this->ticks_to_revive = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "ticks_to_revive", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "radius", -1, 0);
LABEL_5:
  CDOTA_Buff::StartIntervalThink(this, v6);
  this->m_pReviveTarget = 0;
  this->m_nCurrentTicks = 0;
}


// CDOTA_Modifier_Corpselord_Revive::OnIntervalThink  (line 500, @0x0000000002472d60, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CEntityKeyValues::CEntityKeyValues, CDOTA_BaseNPC::DirectRespawn, FindClearSpaceForUnit, CEntityKeyValues::~CEntityKeyValues (17 total)
// strings: "particles/items2_fx/magic_stick.vpcf", "particles/units/heroes/hero_undying/undying_soul_rip_heal.vpcf", "attach_hitloc", "attach_attack1"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Corpselord_Revive::OnIntervalThink(CDOTA_Modifier_Corpselord_Revive *const this)
{
  __m128i v1; // xmm2
  CDOTA_BaseNPC *m_pReviveTarget; // rdi
  CDOTA_BaseNPC *v4; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v6; // rax
  CDOTA_ParticleManager *v7; // rax
  CDOTA_ParticleManager *v8; // rax
  int Particle; // eax
  CDOTA_BaseNPC *v10; // r15
  CDOTA_ParticleManager *v11; // rax
  __int64 v12; // r12
  vec_t z; // r14d
  CDOTA_BaseNPC *Caster; // r15
  CDOTA_ParticleManager *v15; // rax
  CDOTA_BaseNPC *v16; // r15
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  float v19; // r12d
  CDOTA_BaseNPC *v20; // rbx
  CDOTA_BaseNPC *v21; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_BaseNPC *v23; // rax
  int m_Size; // eax
  __int64 v25; // r12
  int v26; // ebx
  CHandle<CBaseEntity> *v27; // rdx
  uint32 m_Index; // eax
  __int16 v29; // cx
  CEntityIdentity *v30; // rdx
  CEntityIdentity *v31; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  CDOTA_BaseNPC *v33; // rax
  Vector bIncludeWearables; // [rsp+0h] [rbp-F0h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > revive_entities; // [rsp+20h] [rbp-D0h] BYREF
  CEntityKeyValues emptyKeyValues; // [rsp+40h] [rbp-B0h] BYREF
  unsigned __int64 v37; // [rsp+B8h] [rbp-38h]
  Vector v38; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v39; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v40; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v41; // 0:xmm0_8.8,8:xmm1_4.4

  v37 = __readfsqword(0x28u);
  m_pReviveTarget = this->m_pReviveTarget;
  if ( m_pReviveTarget != 0 )
  {
    if ( (*(m_pReviveTarget->_vptr_IHandleEntity + 408))(m_pReviveTarget) == 0 )
    {
      ++this->m_nCurrentTicks;
      v4 = this->m_pReviveTarget;
      ParticleManager = GetParticleManager();
      revive_entities.m_Size = 1092616192;
      *(&revive_entities.m_Size + 1) = 0;
      LODWORD(v4) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/items2_fx/magic_stick.vpcf",
                      1,
                      v4,
                      0,
                      0);
      LODWORD(revive_entities.m_Memory.m_pMemory) = 0;
      v6 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v6, v4, 1, bIncludeWearables);
      v7 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v7, v4);
      v8 = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   v8,
                   "particles/units/heroes/hero_undying/undying_soul_rip_heal.vpcf",
                   2,
                   0,
                   0,
                   0);
      v10 = this->m_pReviveTarget;
      LODWORD(v4) = Particle;
      v11 = GetParticleManager();
      v12 = *&vec3_invalid.x;
      z = vec3_invalid.z;
      *&v38.x = *&vec3_invalid.x;
      v38.z = z;
      CDOTA_ParticleManager::SetParticleControlEnt(v11, v4, 0, v10, 5, "attach_hitloc", v38, 1);
      Caster = CDOTA_Buff::GetCaster(this);
      v15 = GetParticleManager();
      *&v39.x = v12;
      v39.z = z;
      CDOTA_ParticleManager::SetParticleControlEnt(v15, v4, 1, Caster, 5, "attach_hitloc", v39, 1);
      v16 = CDOTA_Buff::GetCaster(this);
      v17 = GetParticleManager();
      *&v40.x = v12;
      v40.z = z;
      CDOTA_ParticleManager::SetParticleControlEnt(v17, v4, 2, v16, 5, "attach_attack1", v40, 1);
      v18 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v18, v4);
      if ( this->m_nCurrentTicks >= this->ticks_to_revive )
      {
        CEntityKeyValues::CEntityKeyValues(&emptyKeyValues);
        CDOTA_BaseNPC::DirectRespawn(this->m_pReviveTarget, &emptyKeyValues);
        v41 = *CBaseEntity::GetAbsOrigin(this->m_pReviveTarget);
        FindClearSpaceForUnit(this->m_pReviveTarget, v41, 0);
        this->m_pReviveTarget = 0;
        this->m_nCurrentTicks = 0;
        CEntityKeyValues::~CEntityKeyValues(&emptyKeyValues);
      }
      return;
    }
    if ( this->m_pReviveTarget != 0 )
      return;
  }
  *v1.m128i_i32 = this->radius;
  revive_entities.m_Size = 0;
  revive_entities.m_Memory.m_pMemory = 0;
  revive_entities.m_Memory.m_nAllocationCount = 0;
  revive_entities.m_Memory.m_nGrowSize = 0;
  v19 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  v20 = CDOTA_Buff::GetCaster(this);
  v21 = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v21);
  v23 = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(v23->m_iTeamNum.m_Value, AbsOrigin, v20, v19, &revive_entities, 1, 55, 8, 0, 0);
  m_Size = revive_entities.m_Size;
  if ( revive_entities.m_Size == 0 )
  {
    v33 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::InterruptChannel(v33);
    m_Size = revive_entities.m_Size;
  }
  v25 = 0;
  v26 = 0;
  if ( m_Size > 0 )
  {
    do
    {
      v27 = &revive_entities.m_Memory.m_pMemory[v25];
      m_Index = revive_entities.m_Memory.m_pMemory[v25].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v29 = v27->m_Index;
        v30 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v27->m_Index) >> 9) & 0x3F];
        if ( v30 != 0 )
        {
          v31 = &v30[v29 & 0x1FF];
          if ( v31 != 0 && m_Index == v31->m_EHandle.m_Index )
          {
            m_pInstance = v31->m_pInstance;
            if ( v31->m_pInstance != 0
              && m_pInstance->m_bIsDOTANPC
              && (*(m_pInstance->_vptr_IHandleEntity + 408))(v31->m_pInstance) == 0
              && (*(m_pInstance->_vptr_IHandleEntity + 477))(m_pInstance) != 0 )
            {
              this->m_pReviveTarget = m_pInstance;
            }
          }
        }
      }
      ++v26;
      ++v25;
    }
    while ( revive_entities.m_Size > v26 );
  }
  revive_entities.m_Size = 0;
  if ( (revive_entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&revive_entities.m_Memory);
    if ( (revive_entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&revive_entities.m_Memory);
  }
}


// CDOTA_Modifier_Corpselord_Revive::DeclareFunctions  (line 552, @0x00000000024627a0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Corpselord_Revive::GetOverrideAnimation(CModifierParams const&), CDOTA_Modifier_Corpselord_Revive::GetOverrideAnimationRate(CModifierParams const&)
void __fastcall CDOTA_Modifier_Corpselord_Revive::DeclareFunctions(CDOTA_Modifier_Corpselord_Revive *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_Corpselord_Revive::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
  this->m_Functions[92].__delta = 0;
  this->m_Functions[92].__pfn = CDOTA_Modifier_Corpselord_Revive::GetOverrideAnimationRate;
}


// CDOTA_Modifier_Corpselord_Revive::GetOverrideAnimation  (line 560, @0x00000000024627e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Corpselord_Revive::GetOverrideAnimation(
        CDOTA_Modifier_Corpselord_Revive *const this,
        const CModifierParams *const params)
{
  return 0x44C6E00000000001uLL;
}


// CDOTA_Modifier_Corpselord_Revive::GetOverrideAnimationRate  (line 567, @0x0000000002462800, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Corpselord_Revive::GetOverrideAnimationRate(
        CDOTA_Modifier_Corpselord_Revive *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Ability_Slithereen_Riptide::~CDOTA_Ability_Slithereen_Riptide  (line 578, @0x000000000249a190, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Slithereen_Riptide::~CDOTA_Ability_Slithereen_Riptide(
        CDOTA_Ability_Slithereen_Riptide *const this)
{
  this->_vptr_IHandleEntity = &off_40E5D70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Slithereen_Riptide::~CDOTA_Ability_Slithereen_Riptide  (line 578, @0x000000000249a1b0, libserver.so)  // inlines: ~CDOTA_Ability_Slithereen_Riptide
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Slithereen_Riptide::~CDOTA_Ability_Slithereen_Riptide(
        CDOTA_Ability_Slithereen_Riptide *const this)
{
  this->_vptr_IHandleEntity = &off_40E5D70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Slithereen_Riptide::Schema_DynamicBinding  (line 580, @0x0000000002497cc0, libserver.so)
// globals: CDOTA_Ability_Slithereen_Riptide::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Slithereen_Riptide::Schema_DynamicBinding(
        const CDOTA_Ability_Slithereen_Riptide *const this)
{
  return CDOTA_Ability_Slithereen_Riptide::s_pSchemaBinding;
}


// CDOTA_Ability_Slithereen_Riptide::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 580, @0x0000000002497cd0, libserver.so)
// globals: CDOTA_Ability_Slithereen_Riptide::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Slithereen_Riptide::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Slithereen_Riptide::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Slithereen_Riptide::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Slithereen_Riptide::CEntityInstanceEntityClass::DestructInstance  (line 580, @0x0000000002497ce0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Slithereen_Riptide>
void __fastcall CDOTA_Ability_Slithereen_Riptide::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Slithereen_Riptide::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Slithereen_Riptide::CEntityInstanceEntityClass::FreeInstance  (line 580, @0x0000000002497d00, libserver.so)
void __fastcall CDOTA_Ability_Slithereen_Riptide::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Slithereen_Riptide::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Slithereen_Riptide::CEntityInstanceEntityClass::CanAllocate  (line 580, @0x0000000002497d20, libserver.so)
bool __fastcall CDOTA_Ability_Slithereen_Riptide::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Slithereen_Riptide::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Slithereen_Riptide::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 580, @0x0000000002497d30, libserver.so)
// globals: CDOTA_Ability_Slithereen_Riptide::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Slithereen_Riptide::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Slithereen_Riptide::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Slithereen_Riptide::s_pSchemaBinding;
}


// CDOTA_Ability_Slithereen_Riptide::CEntityInstanceEntityClass::AllocateInstance  (line 580, @0x0000000002499600, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Slithereen_Riptide::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Slithereen_Riptide::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Slithereen_Riptide::CEntityInstanceEntityClass::ConstructInstance  (line 580, @0x0000000002499f30, libserver.so)  // inlines: CDOTA_Ability_Slithereen_Riptide, Construct<CDOTA_Ability_Slithereen_Riptide>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Slithereen_Riptide::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Slithereen_Riptide::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_40E5D70;
  }
  return p;
}


// CDOTA_Ability_Slithereen_Riptide::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 580, @0x000000000249dcc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Slithereen_Riptide::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Slithereen_Riptide::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Slithereen_Riptide::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 580, @0x000000000249dce0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Slithereen_Riptide::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Slithereen_Riptide::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal  (line 580, @0x00000000024a8790, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_02.cpp
// strings: "slithereen_riptide", "CDOTA_Ability_Slithereen_Riptide"
// globals: `guard variable for'CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass, CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Slithereen_Riptide::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Slithereen_Riptide::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClassInfo, CDOTA_Ability_Slithereen_Riptide::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClassInfo
CEntityClass *__cdecl CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass) != 0 )
  {
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_pClassInfo = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_flags = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_pInputs = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_nInputCount = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_pOutputs = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_nOutputCount = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_pGameClass = 0;
    CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass._vptr_CEntityClass = off_40E5CF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass);
    __cxa_atexit(
      CDOTA_Ability_Slithereen_Riptide::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Slithereen_RiptideClass != 0 )
    return &CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass;
  if ( `guard variable for'CDOTA_Ability_Slithereen_Riptide::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Slithereen_Riptide::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Slithereen_Riptide::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClassInfo,
      "CDOTA_Ability_Slithereen_Riptide",
      "slithereen_riptide",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Slithereen_Riptide::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClassInfo);
  }
  CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_pClassInfo = &CDOTA_Ability_Slithereen_Riptide::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClassInfo;
  CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_pBaseClassInfo = CDOTA_Ability_Slithereen_Riptide::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Slithereen_RiptideClass = &CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass;
  CDOTA_Ability_Slithereen_Riptide::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClassInfo.m_pClass = &CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass;
  CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Slithereen_RiptideClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Slithereen_Riptide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slithereen_RiptideClass;
}


// CDOTA_Ability_Slithereen_Riptide::OnSpellStart  (line 592, @0x0000000002475210, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetParent, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CGameSceneNode::GetOwnerEntity, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin (20 total)
// strings: "modifier_naga_siren_riptide", "particles/units/heroes/hero_siren/naga_siren_riptide.vpcf", "modifier_naga_siren_rip_tide"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Slithereen_Riptide::OnSpellStart(CDOTA_Ability_Slithereen_Riptide *const this)
{
  int LevelSpecialValue; // ebx
  float v3; // xmm1_4
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // r15
  CDOTA_ParticleManager *v8; // rax
  CDOTA_ParticleManager *v9; // rax
  CDOTA_ParticleManager *v10; // rax
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v12; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v14; // rax
  __int64 v15; // rbx
  CHandle<CBaseEntity> *v16; // rdx
  uint32 m_Index; // eax
  __int16 v18; // cx
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  Vector bIncludeWearables; // [rsp+0h] [rbp-90h]
  float duration; // [rsp+1Ch] [rbp-74h]
  float durationa; // [rsp+1Ch] [rbp-74h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+20h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v29; // [rsp+58h] [rbp-38h]

  v29 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_naga_siren_riptide");
  KeyValues::SetFloat(&kv, "duration", v3);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_siren/naga_siren_riptide.vpcf",
               2,
               0,
               0,
               0);
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
  else
    OwnerEntity = 0;
  v8 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v8, Particle, 0, OwnerEntity, 1, 0, vec3_invalid, 1);
  *(&hEntities.m_Size + 1) = LevelSpecialValue;
  duration = LevelSpecialValue;
  v9 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v9, Particle, 1, bIncludeWearables);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v10, Particle);
  hEntities.m_Size = 0;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  v12 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v12);
  v14 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v14->m_iTeamNum.m_Value, AbsOrigin, Caster, duration, &hEntities, 2, 3, 528, 0, 0);
  if ( hEntities.m_Size > 0 )
  {
    v15 = 0;
    do
    {
      while ( 1 )
      {
        v16 = &hEntities.m_Memory.m_pMemory[v15];
        m_Index = v16->m_Index;
        if ( v16->m_Index + 2 > 1 )
        {
          v18 = v16->m_Index;
          v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v16->m_Index) >> 9) & 0x3F];
          if ( v19 != 0 )
          {
            v20 = &v19[v18 & 0x1FF];
            if ( v20 != 0 && m_Index == v20->m_EHandle.m_Index )
            {
              m_pInstance = v20->m_pInstance;
              if ( v20->m_pInstance != 0
                && m_pInstance->m_bIsDOTANPC
                && (*(m_pInstance->_vptr_IHandleEntity + 408))(v20->m_pInstance) != 0 )
              {
                break;
              }
            }
          }
        }
        if ( hEntities.m_Size <= ++v15 )
          goto LABEL_14;
      }
      v22 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v22, this, "modifier_naga_siren_rip_tide", &kv, 0);
      durationa = (*(this->_vptr_IHandleEntity + 247))(this);
      v23 = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(v23, m_pInstance, this, durationa, 2, 0);
      ++v15;
    }
    while ( hEntities.m_Size > v15 );
  }
LABEL_14:
  hEntities.m_Size = 0;
  if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
    if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
  }
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Creature_Fire_Breath::~CDOTA_Ability_Creature_Fire_Breath  (line 631, @0x000000000249a1e0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Creature_Fire_Breath::~CDOTA_Ability_Creature_Fire_Breath(
        CDOTA_Ability_Creature_Fire_Breath *const this)
{
  this->_vptr_IHandleEntity = &off_40E6870;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Creature_Fire_Breath::~CDOTA_Ability_Creature_Fire_Breath  (line 631, @0x000000000249a200, libserver.so)  // inlines: ~CDOTA_Ability_Creature_Fire_Breath
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Creature_Fire_Breath::~CDOTA_Ability_Creature_Fire_Breath(
        CDOTA_Ability_Creature_Fire_Breath *const this)
{
  this->_vptr_IHandleEntity = &off_40E6870;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Creature_Fire_Breath::Schema_DynamicBinding  (line 633, @0x0000000002497d40, libserver.so)
// globals: CDOTA_Ability_Creature_Fire_Breath::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Creature_Fire_Breath::Schema_DynamicBinding(
        const CDOTA_Ability_Creature_Fire_Breath *const this)
{
  return CDOTA_Ability_Creature_Fire_Breath::s_pSchemaBinding;
}


// CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 633, @0x0000000002497d50, libserver.so)
// globals: CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass::DestructInstance  (line 633, @0x0000000002497d60, libserver.so)  // inlines: Destruct<CDOTA_Ability_Creature_Fire_Breath>
void __fastcall CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass::FreeInstance  (line 633, @0x0000000002497d80, libserver.so)
void __fastcall CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass::CanAllocate  (line 633, @0x0000000002497da0, libserver.so)
bool __fastcall CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 633, @0x0000000002497db0, libserver.so)
// globals: CDOTA_Ability_Creature_Fire_Breath::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Creature_Fire_Breath::s_pSchemaBinding;
}


// CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass::AllocateInstance  (line 633, @0x0000000002499640, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 984);
  memset(v1, 0, 0x3D8u);
  return v1;
}


// CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass::ConstructInstance  (line 633, @0x000000000249c520, libserver.so)  // inlines: CDOTA_Ability_Creature_Fire_Breath, Construct<CDOTA_Ability_Creature_Fire_Breath>
// calls: CDOTABaseAbility::CDOTABaseAbility, CountdownTimer::CountdownTimer, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_40E6870;
    CountdownTimer::CountdownTimer(p + 39);
  }
  return p;
}


// CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 633, @0x000000000249dd10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 633, @0x000000000249dd30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal  (line 633, @0x00000000024a94d0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_02.cpp
// strings: "creature_fire_breath", "CDOTA_Ability_Creature_Fire_Breath"
// globals: `guard variable for'CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass, CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClassInfo, CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClassInfo
CEntityClass *__cdecl CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass) != 0 )
  {
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_pClassInfo = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_flags = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_pInputs = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_nInputCount = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_pOutputs = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_nOutputCount = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_pGameClass = 0;
    CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass._vptr_CEntityClass = off_40E67F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass);
    __cxa_atexit(
      CDOTA_Ability_Creature_Fire_Breath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Creature_Fire_BreathClass != 0 )
    return &CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass;
  if ( `guard variable for'CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClassInfo,
      "CDOTA_Ability_Creature_Fire_Breath",
      "creature_fire_breath",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClassInfo);
  }
  CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_pClassInfo = &CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClassInfo;
  CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_pBaseClassInfo = CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Creature_Fire_BreathClass = &CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass;
  CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClassInfo.m_pClass = &CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass;
  CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Creature_Fire_BreathClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Creature_Fire_Breath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Creature_Fire_BreathClass;
}


// CDOTA_Ability_Creature_Fire_Breath::OnSpellStart  (line 662, @0x0000000002474d30, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, NetworkStateChanged, Set, Start, Vector, VectorRotate, operator=<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsAngles, AngleVectors, MatrixBuildRotationAboutAxis, VectorRotate, CountdownTimer::Now, DOTA_EmitSound
// strings: "rotation_angle", "projectile_count", "Creature.FireBreath.Cast"
void __fastcall CDOTA_Ability_Creature_Fire_Breath::OnSpellStart(CDOTA_Ability_Creature_Fire_Breath *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  float v3; // xmm1_4
  float v4; // xmm0_4
  float v5; // xmm1_4
  float v6; // xmm0_4
  CDOTA_BaseNPC *v7; // rax
  float v8; // [rsp+8h] [rbp-88h]
  float flTiming; // [rsp+Ch] [rbp-84h]
  float flTiminga; // [rsp+Ch] [rbp-84h]
  QAngle angles; // [rsp+10h] [rbp-80h] BYREF
  Vector vecFwd; // [rsp+20h] [rbp-70h] BYREF
  Vector vecRotAxis; // [rsp+30h] [rbp-60h] BYREF
  matrix3x4_t matRot; // [rsp+40h] [rbp-50h] BYREF

  this->rotation_angle = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "rotation_angle", -1, 0);
  this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "radius", -1, 0);
  this->speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
  this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage", -1, 0);
  this->projectile_count = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "projectile_count", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  angles = *CBaseEntity::GetAbsAngles(Caster);
  AngleVectors(&angles, &vecFwd, 0, 0);
  vecRotAxis.x = 0.0;
  vecRotAxis.y = 0.0;
  vecRotAxis.z = 1.0;
  MatrixBuildRotationAboutAxis(&vecRotAxis, -0.0, &matRot);
  VectorRotate(&vecFwd.x, &matRot, &this->m_vecStartRot.x);
  MatrixBuildRotationAboutAxis(&vecRotAxis, v3, &matRot);
  VectorRotate(&vecFwd.x, &matRot, &this->m_vecEndRot.x);
  flTiming = (*(this->_vptr_IHandleEntity + 225))(this) / this->projectile_count;
  v4 = CountdownTimer::Now(&this->ctTimer);
  v5 = flTiming;
  v6 = v4 + flTiming;
  if ( v6 != this->ctTimer.m_timestamp.m_Value )
  {
    v8 = v6;
    (*(this->ctTimer._vptr_CountdownTimer + 2))(&this->ctTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v5 = flTiming;
    this->ctTimer.m_timestamp.m_Value = v8;
  }
  if ( v5 != this->ctTimer.m_duration.m_Value )
  {
    flTiminga = v5;
    (*(this->ctTimer._vptr_CountdownTimer + 2))(&this->ctTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->ctTimer.m_duration.m_Value = flTiminga;
  }
  v7 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Creature.FireBreath.Cast", v7);
}


// CDOTA_Ability_Creature_Fire_Breath::OnChannelThink  (line 690, @0x0000000002465a30, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, GetChannelStartTime, GetEHandle, GetEntryIndex, GetGameTime, GetSerialNumber, GetTeamNumber, IsElapsed, NetworkStateChanged, RemapValClamped, Reset, Set, VectorLerp, VectorMultiply, clamp<float, float>, operator*, operator=, operator=<float>, sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::OnChannelThink, CountdownTimer::Now, VectorNormalize, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_ProjectileManager::CreateLinearProjectile
// strings: "particles/neutral_fx/mini_rosh_fire.vpcf"
void __fastcall CDOTA_Ability_Creature_Fire_Breath::OnChannelThink(
        CDOTA_Ability_Creature_Fire_Breath *const this,
        double a2,
        float flInterval)
{
  CountdownTimer *p_ctTimer; // r12
  float v5; // xmm0_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  __m128 v9; // xmm4
  __m128 v10; // xmm2
  float v11; // xmm3_4
  float z; // xmm2_4
  float x; // xmm4_4
  float v14; // xmm0_4
  vec_t v15; // xmm0_4
  float v16; // xmm2_4
  vec_t v17; // xmm0_4
  vec_t y; // xmm1_4
  float speed; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  vec_t v22; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  CDOTA_BaseNPC *v24; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v26; // eax
  __int16 v27; // cx
  float v28; // xmm2_4
  float m_Value; // [rsp+Ch] [rbp-A4h]
  float v30; // [rsp+Ch] [rbp-A4h]
  Vector vDirection; // [rsp+10h] [rbp-A0h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+20h] [rbp-90h] BYREF

  p_ctTimer = &this->ctTimer;
  CDOTABaseAbility::OnChannelThink(this, a2, flInterval);
  if ( CountdownTimer::Now(p_ctTimer) >= this->ctTimer.m_timestamp.m_Value )
  {
    v5 = CountdownTimer::Now(p_ctTimer) + this->ctTimer.m_duration.m_Value;
    if ( v5 != this->ctTimer.m_timestamp.m_Value )
    {
      v30 = v5;
      (*(this->ctTimer._vptr_CountdownTimer + 2))(p_ctTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->ctTimer.m_timestamp.m_Value = v30;
    }
    m_Value = this->m_flChannelStartTime.m_Value;
    v6 = (*(this->_vptr_IHandleEntity + 225))(this) + m_Value;
    v7 = this->m_flChannelStartTime.m_Value;
    if ( g_pGameRules != 0 )
    {
      v8 = *&g_pGameRules[18].m_szQuestName[20];
      v9 = 0;
    }
    else
    {
      v9 = 0;
      v8 = 0.0;
    }
    if ( v6 == v7 )
    {
      v10.m128_f32[0] = v8 - v6;
      LODWORD(v11) = _mm_cmple_ss(v9, v10).m128_u32[0] & 0x3F800000;
    }
    else
    {
      v11 = v9.m128_f32[0];
      v28 = (v8 - v7) / (v6 - v7);
      if ( v9.m128_f32[0] <= v28 )
      {
        v11 = 1.0;
        if ( v28 <= 1.0 )
          v11 = v28 + v9.m128_f32[0];
      }
    }
    z = this->m_vecStartRot.z;
    x = this->m_vecStartRot.x;
    v14 = this->m_vecEndRot.z;
    vDirection.y = ((this->m_vecEndRot.y - this->m_vecStartRot.y) * v11) + this->m_vecStartRot.y;
    v15 = ((v14 - z) * v11) + z;
    v16 = this->m_vecEndRot.x;
    vDirection.z = v15;
    vDirection.x = ((v16 - x) * v11) + x;
    VectorNormalize(&vDirection);
    info.hSource.m_Index = -1;
    info.pszEffectName = "particles/neutral_fx/mini_rosh_fire.vpcf";
    info.fDistance = 0.0;
    v17 = vec3_origin.z;
    info.fStartRadius = 0.0;
    info.fEndRadius = 0.0;
    y = vec3_origin.y;
    info.vSpawnOrigin.z = v17;
    info.vAcceleration.z = v17;
    speed = this->speed;
    info.vSpawnOrigin.x = vec3_origin.x;
    info.vSpawnOrigin.y = y;
    info.vAcceleration.x = vec3_origin.x;
    info.vAcceleration.y = y;
    info.bHasFrontalCone = 1;
    info.bCheckStartPosition = 0;
    info.iUnitTargetTeam = 0;
    info.iUnitTargetType = 0;
    info.iUnitTargetFlags = 0;
    info.bProvidesVision = 0;
    info.iVisionTeamNumber = -1;
    info.iVisionRadius = -1;
    info.bDrawsOnMinimap = 0;
    info.bVisibleToEnemies = 1;
    info.bIgnoreSource = 0;
    info.pKVExtraData = 0;
    info.fExpireTime = 0.0;
    info.fMaxSpeed = 0.0;
    info.bStickyFoWReveal = 1;
    info.pAbility = this;
    info.vVelocity.x = speed * vDirection.x;
    info.vVelocity.y = vDirection.y * speed;
    info.vVelocity.z = vDirection.z * speed;
    Caster = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
    info.vSpawnOrigin.x = AbsOrigin->x;
    info.vSpawnOrigin.y = AbsOrigin->y;
    v22 = AbsOrigin->z;
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    info.vSpawnOrigin.z = v22;
    info.fDistance = vptr_IHandleEntity[226](this, &vec3_origin, 0);
    info.fStartRadius = this->radius;
    info.fEndRadius = info.fStartRadius;
    v24 = CDOTABaseAbility::GetCaster(this);
    if ( v24 != 0 && (m_pEntity = v24->m_pEntity) != 0 )
    {
      v26 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v27 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v27 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(info.hSource.m_Index) = v27 | info.hSource.m_Index & 0x8000;
      info.hSource.m_Index = (v26 << 15) | info.hSource.m_Index & 0x7FFF;
    }
    else
    {
      info.hSource.m_Index = -1;
    }
    info.iUnitTargetTeam = 2;
    info.iUnitTargetType = 19;
    info.iUnitTargetFlags = 16;
    info.iVisionTeamNumber = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
    CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  }
}


// CDOTA_Ability_Creature_Fire_Breath::OnProjectileHit  (line 725, @0x00000000024660a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, ApplyDamage
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Creature_Fire_Breath::OnProjectileHit(
        CDOTA_Ability_Creature_Fire_Breath *const this,
        unsigned __int16 *hTarget,
        const Vector *const vLocation)
{
  int v3; // eax
  unsigned __int64 v4; // rsi
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx
  CEntityInstance *m_pInstance; // rbx
  CDOTA_BaseNPC *Caster; // rax
  float damage; // [rsp-1Ch] [rbp-1Ch]

  v3 = *hTarget;
  if ( (*hTarget + 2) <= 1 )
    return 0;
  v4 = *hTarget;
  v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v4 >> 9) & 0x3F];
  if ( v5 == 0 )
    return 0;
  v6 = &v5[v4 & 0x1FF];
  if ( v6 == 0 || v3 != v6->m_EHandle.m_Index )
    return 0;
  m_pInstance = v6->m_pInstance;
  if ( v6->m_pInstance != 0
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
    && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0
    && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 1) == 0
    && BYTE5(m_pInstance[45]._vptr_IHandleEntity) == 0 )
  {
    damage = this->damage;
    Caster = CDOTABaseAbility::GetCaster(this);
    ApplyDamage(Caster, m_pInstance, this, damage, 2, 0);
  }
  return 0;
}


// CDOTA_Item_GreaterClarity::~CDOTA_Item_GreaterClarity  (line 748, @0x000000000249ab00, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_GreaterClarity::~CDOTA_Item_GreaterClarity(CDOTA_Item_GreaterClarity *const this)
{
  this->_vptr_IHandleEntity = &off_40E7370;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_GreaterClarity::~CDOTA_Item_GreaterClarity  (line 748, @0x000000000249ab20, libserver.so)  // inlines: ~CDOTA_Item_GreaterClarity
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_GreaterClarity::~CDOTA_Item_GreaterClarity(CDOTA_Item_GreaterClarity *const this)
{
  this->_vptr_IHandleEntity = &off_40E7370;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_GreaterClarity::Schema_DynamicBinding  (line 750, @0x0000000002497dc0, libserver.so)
// globals: CDOTA_Item_GreaterClarity::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_GreaterClarity::Schema_DynamicBinding(
        const CDOTA_Item_GreaterClarity *const this)
{
  return CDOTA_Item_GreaterClarity::s_pSchemaBinding;
}


// CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 750, @0x0000000002497dd0, libserver.so)
// globals: CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass::DestructInstance  (line 750, @0x0000000002497de0, libserver.so)  // inlines: Destruct<CDOTA_Item_GreaterClarity>
void __fastcall CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass::FreeInstance  (line 750, @0x0000000002497e00, libserver.so)
void __fastcall CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass::CanAllocate  (line 750, @0x0000000002497e20, libserver.so)
bool __fastcall CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 750, @0x0000000002497e30, libserver.so)
// globals: CDOTA_Item_GreaterClarity::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_GreaterClarity::s_pSchemaBinding;
}


// CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass::AllocateInstance  (line 750, @0x0000000002499680, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass::ConstructInstance  (line 750, @0x000000000249a940, libserver.so)  // inlines: CDOTA_Item_GreaterClarity, Construct<CDOTA_Item_GreaterClarity>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_40E7370;
  }
  return p;
}


// CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 750, @0x000000000249d8b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 750, @0x000000000249d8d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_GreaterClarity::GetEntityClassInternal  (line 750, @0x00000000024a8ae0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_02.cpp
// strings: "item_greater_clarity", "CDOTA_Item_GreaterClarity"
// globals: `guard variable for'CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass, CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_GreaterClarity::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GreaterClarityClassInfo, CDOTA_Item_GreaterClarity::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GreaterClarityClassInfo
CEntityClass *__cdecl CDOTA_Item_GreaterClarity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass) != 0 )
  {
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_designerName.u.m_Id = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_AllHelpers.m_Size = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_classInputs.m_Size = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_classOutputs.m_Size = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_hNetworkSerializer = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_pBaseClassInfo = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_pClassInfo = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_flags = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_nAllHelpersFlags = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_pScriptClassDesc = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_pInputs = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_nInputCount = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_pOutputs = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_nOutputCount = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_pGameClass = 0;
    CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass._vptr_CEntityClass = off_40E72F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass);
    __cxa_atexit(
      CDOTA_Item_GreaterClarity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_GreaterClarityClass != 0 )
    return &CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass;
  if ( `guard variable for'CDOTA_Item_GreaterClarity::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GreaterClarityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_GreaterClarity::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GreaterClarityClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_GreaterClarity::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GreaterClarityClassInfo,
      "CDOTA_Item_GreaterClarity",
      "item_greater_clarity",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_GreaterClarity::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GreaterClarityClassInfo);
  }
  CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_pClassInfo = &CDOTA_Item_GreaterClarity::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GreaterClarityClassInfo;
  CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_pBaseClassInfo = CDOTA_Item_GreaterClarity::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GreaterClarityClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_GreaterClarityClass = &CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass;
  CDOTA_Item_GreaterClarity::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GreaterClarityClassInfo.m_pClass = &CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass;
  CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_GreaterClarityClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_GreaterClarity::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterClarityClass;
}


// CDOTA_Item_GreaterClarity::Precache  (line 761, @0x0000000002463520, libserver.so)
// calls: CDOTA_Item::Precache, PrecacheParticleSystem
// strings: "particles/items_fx/healing_clarity.vpcf"
void __fastcall CDOTA_Item_GreaterClarity::Precache(
        CDOTA_Item_GreaterClarity *const this,
        const CEntityPrecacheContext *pContext)
{
  CDOTA_Item::Precache(this, pContext);
  PrecacheParticleSystem("particles/items_fx/healing_clarity.vpcf", pContext);
}


// CDOTA_Item_GreaterClarity::OnSpellStart  (line 770, @0x00000000024750d0, libserver.so)  // inlines: QueueConcept, ToDOTABaseNPC
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::SetInt, CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_Item::SpendCharge, DOTA_EmitSound, CDOTA_Speech::QueueConcept, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_greater_clarity", "DOTA_Item.ClarityPotion.Activate"
void __fastcall CDOTA_Item_GreaterClarity::OnSpellStart(CDOTA_Item_GreaterClarity *const this)
{
  int LevelSpecialValue; // eax
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v4; // rbx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Speech *m_pSpeech; // rdi
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_greater_clarity");
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "buff_duration", -1, 0);
  KeyValues::SetInt(&kv, "duration", LevelSpecialValue);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v4 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_greater_clarity", &kv, 0);
    CDOTA_Item::SpendCharge(this);
    DOTA_EmitSound(8, "DOTA_Item.ClarityPotion.Activate", v4);
    if ( v4 != CDOTABaseAbility::GetCaster(this) )
    {
      m_pSpeech = v4->m_Speech.m_pSpeech;
      if ( m_pSpeech != 0 )
        CDOTA_Speech::QueueConcept(m_pSpeech, 26, 0.25, 0, 0, 1, 0, 0, 0);
    }
  }
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_GreaterClarity::~CDOTA_Modifier_GreaterClarity  (line 799, @0x0000000002499b20, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_GreaterClarity::~CDOTA_Modifier_GreaterClarity(
        CDOTA_Modifier_GreaterClarity *const this)
{
  this->_vptr_CDOTA_Buff = &off_40E7F30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_GreaterClarity::~CDOTA_Modifier_GreaterClarity  (line 799, @0x0000000002499b40, libserver.so)  // inlines: ~CDOTA_Modifier_GreaterClarity
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_GreaterClarity::~CDOTA_Modifier_GreaterClarity(
        CDOTA_Modifier_GreaterClarity *const this)
{
  this->_vptr_CDOTA_Buff = &off_40E7F30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_GreaterClarity::IsPurgable  (line 805, @0x0000000002497e40, libserver.so)
bool __fastcall CDOTA_Modifier_GreaterClarity::IsPurgable(CDOTA_Modifier_GreaterClarity *const this)
{
  return 0;
}


// CDOTA_Modifier_GreaterClarity::OnCreated  (line 821, @0x0000000002475b20, libserver.so)  // inlines: AssignTo, DOTAGameRules, DotaRetrieveAbilityValue<int>, GetFloat, GetInt, GetLevelSpecialValueFor<int>, HasAbilityTuningValueFilter, HasScriptFilter, IsConsideredHero, RunAbilityTuningValueFilter, entindex, operator float, operator int
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::GetSpecialAbility, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAbilityModifierValues, CDOTAGamerules::GetGameModeEntity, KeyValues::operator new, KeyValues::KeyValues, CEntityInstance::GetEntityIndex, KeyValues::SetInt, KeyValues::SetString, KeyValues::SetFloat (18 total)
// strings: "total_mana", "AbilityValueData", "entindex_caster_const", "entindex_ability_const", "value_name_const"
void __fastcall CDOTA_Modifier_GreaterClarity::OnCreated(CDOTA_Modifier_GreaterClarity *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rbx
  int EffectiveLevel; // r14d
  DOTASpecialAbility_t *SpecialAbility; // r13
  CDOTA_BaseNPC *Caster; // rax
  int m_nCount; // eax
  int v9; // edx
  bool v10; // cc
  fieldtype_t m_FieldType; // eax
  int Int; // r14d
  CDOTABaseGameMode *GameModeEntity; // rax
  VScriptFilter *v14; // r15
  CDOTA_BaseNPC *v15; // rax
  CEntityIndex v16; // eax
  CEntityIndex v17; // eax
  float v18; // xmm1_4
  float v19; // xmm1_4
  fieldtype_t v20; // eax
  KeyValues *v21; // rbx
  fieldtype_t v22; // edx
  int v23; // eax
  fieldtype_t *v24; // r14
  __int16 v25; // ax
  int v26; // r14d
  fieldtype_t *v27; // r14
  float v28; // xmm0_4
  KeyValues *pMem; // [rsp+0h] [rbp-50h]
  float Float; // [rsp+Ch] [rbp-44h]
  float pflMultiply; // [rsp+10h] [rbp-40h] BYREF
  float pflAdd; // [rsp+14h] [rbp-3Ch] BYREF
  KeyValues *pFilterKV; // [rsp+18h] [rbp-38h] BYREF

  Ability = CDOTA_Buff::GetAbility(this);
  v4 = Ability;
  if ( Ability != 0 )
  {
    EffectiveLevel = CDOTABaseAbility::GetEffectiveLevel(Ability);
    if ( EffectiveLevel == -1 || (SpecialAbility = CDOTABaseAbility::GetSpecialAbility(v4, "total_mana")) == 0 )
    {
      v23 = 0;
    }
    else
    {
      pflMultiply = 1.0;
      pflAdd = 0.0;
      if ( CDOTABaseAbility::GetCaster(v4) != 0 )
      {
        Caster = CDOTABaseAbility::GetCaster(v4);
        CDOTA_BaseNPC::GetAbilityModifierValues(Caster, "total_mana", &pflMultiply, &pflAdd);
      }
      m_nCount = SpecialAbility->m_nCount;
      v9 = m_nCount - 1;
      v10 = EffectiveLevel < m_nCount;
      m_FieldType = SpecialAbility->m_FieldType;
      if ( !v10 )
        EffectiveLevel = v9;
      if ( m_FieldType == fieldtype_t::FIELD_FLOAT )
      {
        v27 = &SpecialAbility->m_FieldType + 4 * EffectiveLevel;
        if ( *(v27 + 8) == 34 )
          v28 = *(v27 + 1);
        else
          v28 = *(v27 + 2);
        Int = 0;
        Float = (v28 * pflMultiply) + pflAdd;
      }
      else if ( m_FieldType == fieldtype_t::FIELD_INTEGER )
      {
        v24 = &SpecialAbility->m_FieldType + 4 * EffectiveLevel;
        v25 = *(v24 + 8);
        if ( v25 == 1 )
        {
          v26 = *(v24 + 2);
        }
        else if ( v25 == 34 )
        {
          v26 = *(v24 + 1);
        }
        else
        {
          v26 = *(v24 + 2);
        }
        Float = 0.0;
        Int = ((v26 * pflMultiply) + pflAdd);
      }
      else
      {
        Int = 0;
        Float = 0.0;
      }
      if ( CDOTABaseAbility::GetCaster(v4) != 0
        && (CDOTABaseAbility::GetCaster(v4)->m_iUnitType & 3) != 0
        && g_pGameRules != 0 )
      {
        GameModeEntity = CDOTAGamerules::GetGameModeEntity(g_pGameRules);
        v14 = GameModeEntity;
        if ( GameModeEntity != 0
          && GameModeEntity->m_AbilityTuningValueFilter.m_hFunction != 0
          && GameModeEntity->m_AbilityTuningValueFilter.m_hContext != 0 )
        {
          pMem = KeyValues::operator new(0x14u);
          KeyValues::KeyValues(pMem, "AbilityValueData");
          pFilterKV = pMem;
          if ( CDOTABaseAbility::GetCaster(v4) != 0 )
          {
            v15 = CDOTABaseAbility::GetCaster(v4);
            v16.m_Data = CEntityInstance::GetEntityIndex(v15).m_Data;
            KeyValues::SetInt(pFilterKV, "entindex_caster_const", v16.m_Data);
          }
          v17.m_Data = CEntityInstance::GetEntityIndex(v4).m_Data;
          KeyValues::SetInt(pFilterKV, "entindex_ability_const", v17.m_Data);
          KeyValues::SetString(pFilterKV, "value_name_const", "total_mana");
          KeyValues::SetFloat(pFilterKV, "value", v18);
          if ( VScriptFilter::RunScriptFilter(v14 + 63, &pFilterKV) )
          {
            v20 = SpecialAbility->m_FieldType;
            if ( v20 == fieldtype_t::FIELD_FLOAT )
            {
              Float = KeyValues::GetFloat(pFilterKV, "value", v19);
            }
            else if ( v20 == fieldtype_t::FIELD_INTEGER )
            {
              Int = KeyValues::GetInt(pFilterKV, "value", Int);
            }
          }
          v21 = pFilterKV;
          if ( pFilterKV != 0 )
          {
            KeyValues::~KeyValues(pFilterKV);
            KeyValues::operator delete(v21);
          }
        }
      }
      v22 = SpecialAbility->m_FieldType;
      if ( v22 == fieldtype_t::FIELD_FLOAT )
      {
        v23 = Float;
      }
      else
      {
        v23 = 0;
        if ( v22 == fieldtype_t::FIELD_INTEGER )
          v23 = Int;
      }
    }
    this->total_mana = v23;
  }
  else
  {
    this->total_mana = 0;
  }
}


// CDOTA_Modifier_GreaterClarity::DeclareFunctions  (line 833, @0x0000000002462820, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_GreaterClarity::GetModifierConstantManaRegen(CModifierParams const&), CDOTA_Modifier_GreaterClarity::OnTakeDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_GreaterClarity::DeclareFunctions(CDOTA_Modifier_GreaterClarity *const this)
{
  this->m_Functions[52].__pfn = CDOTA_Modifier_GreaterClarity::GetModifierConstantManaRegen;
  this->m_Functions[52].__delta = 0;
  this->m_Functions[134].__delta = 0;
  this->m_Functions[134].__pfn = CDOTA_Modifier_GreaterClarity::OnTakeDamage;
}


// CDOTA_Modifier_GreaterClarity::GetModifierConstantManaRegen  (line 841, @0x0000000002462860, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_GreaterClarity::GetModifierConstantManaRegen(
        CDOTA_Modifier_GreaterClarity *const this,
        const CModifierParams *const params)
{
  float v2; // xmm0_4
  __int64 v3; // xmm1_8
  unsigned int v5; // [rsp+Ch] [rbp-4h]
  ModifierVariant_t result; // 0:rax.16

  *&v5 = this->total_mana;
  v2 = (*(this->_vptr_CDOTA_Buff + 31))(this, params);
  v3 = v5;
  result.m_szVal = 0;
  *&v3 = *&v5 / v2;
  *&result.m_eType = (v3 << 32) | 1;
  return result;
}


// CDOTA_Modifier_GreaterClarity::OnTakeDamage  (line 848, @0x0000000002466970, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Unit, operator CBaseEntity*, operator CEntityInstance*, operator==<CBaseEntity>
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_GreaterClarity::OnTakeDamage(
        CDOTA_Modifier_GreaterClarity *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx

  m_pInstance = 0;
  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[params->hunit.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance )
  {
    v9 = params->inflictor.m_Index;
    if ( v9 + 2 <= 1
      || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->inflictor.m_Index) >> 9) & 0x3F]) == 0
      || (v11 = &v10[params->inflictor.m_Index & 0x1FF]) == 0
      || v9 != v11->m_EHandle.m_Index
      || v11->m_pInstance == 0
      || params->fOriginalDamage >= 20.0 )
    {
      CDOTA_Buff::Destroy(this, 0, 0, 0);
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_GreaterClarity::GetTexture  (line 863, @0x00000000024628a0, libserver.so)
// strings: "item_greater_clarity"
const char *__fastcall CDOTA_Modifier_GreaterClarity::GetTexture(CDOTA_Modifier_GreaterClarity *const this)
{
  return "item_greater_clarity";
}


// CDOTA_Item_UpgradedMortar::~CDOTA_Item_UpgradedMortar  (line 874, @0x000000000249ab50, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_UpgradedMortar::~CDOTA_Item_UpgradedMortar(CDOTA_Item_UpgradedMortar *const this)
{
  this->_vptr_IHandleEntity = &off_40E8290;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_UpgradedMortar::~CDOTA_Item_UpgradedMortar  (line 874, @0x000000000249ab70, libserver.so)  // inlines: ~CDOTA_Item_UpgradedMortar
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_UpgradedMortar::~CDOTA_Item_UpgradedMortar(CDOTA_Item_UpgradedMortar *const this)
{
  this->_vptr_IHandleEntity = &off_40E8290;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_UpgradedMortar::Schema_DynamicBinding  (line 876, @0x0000000002497e50, libserver.so)
// globals: CDOTA_Item_UpgradedMortar::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_UpgradedMortar::Schema_DynamicBinding(
        const CDOTA_Item_UpgradedMortar *const this)
{
  return CDOTA_Item_UpgradedMortar::s_pSchemaBinding;
}


// CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 876, @0x0000000002497e60, libserver.so)
// globals: CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass::DestructInstance  (line 876, @0x0000000002497e70, libserver.so)  // inlines: Destruct<CDOTA_Item_UpgradedMortar>
void __fastcall CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass::FreeInstance  (line 876, @0x0000000002497e90, libserver.so)
void __fastcall CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass::CanAllocate  (line 876, @0x0000000002497eb0, libserver.so)
bool __fastcall CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 876, @0x0000000002497ec0, libserver.so)
// globals: CDOTA_Item_UpgradedMortar::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_UpgradedMortar::s_pSchemaBinding;
}


// CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass::AllocateInstance  (line 876, @0x00000000024996c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass::ConstructInstance  (line 876, @0x000000000249a970, libserver.so)  // inlines: CDOTA_Item_UpgradedMortar, Construct<CDOTA_Item_UpgradedMortar>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_40E8290;
  }
  return p;
}


// CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 876, @0x000000000249d900, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 876, @0x000000000249d920, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_UpgradedMortar::GetEntityClassInternal  (line 876, @0x00000000024a8440, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_02.cpp
// strings: "item_upgraded_mortar", "CDOTA_Item_UpgradedMortar"
// globals: `guard variable for'CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass, CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_UpgradedMortar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UpgradedMortarClassInfo, CDOTA_Item_UpgradedMortar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UpgradedMortarClassInfo
CEntityClass *__cdecl CDOTA_Item_UpgradedMortar::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass) != 0 )
  {
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_designerName.u.m_Id = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_AllHelpers.m_Size = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_classInputs.m_Size = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_classOutputs.m_Size = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_hNetworkSerializer = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_pBaseClassInfo = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_pClassInfo = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_flags = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_nAllHelpersFlags = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_pScriptClassDesc = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_pInputs = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_nInputCount = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_pOutputs = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_nOutputCount = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_pGameClass = 0;
    CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass._vptr_CEntityClass = off_40E8210;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass);
    __cxa_atexit(
      CDOTA_Item_UpgradedMortar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_UpgradedMortarClass != 0 )
    return &CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass;
  if ( `guard variable for'CDOTA_Item_UpgradedMortar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UpgradedMortarClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_UpgradedMortar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UpgradedMortarClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_UpgradedMortar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UpgradedMortarClassInfo,
      "CDOTA_Item_UpgradedMortar",
      "item_upgraded_mortar",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_UpgradedMortar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UpgradedMortarClassInfo);
  }
  CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_pClassInfo = &CDOTA_Item_UpgradedMortar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UpgradedMortarClassInfo;
  CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_pBaseClassInfo = CDOTA_Item_UpgradedMortar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UpgradedMortarClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_UpgradedMortarClass = &CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass;
  CDOTA_Item_UpgradedMortar::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UpgradedMortarClassInfo.m_pClass = &CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass;
  CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_UpgradedMortarClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_UpgradedMortar::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedMortarClass;
}


// CDOTA_Item_UpgradedMortar::OnSpellStart  (line 886, @0x0000000002463550, libserver.so)  // inlines: ToDOTABaseNPC
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::FindModifierByName, CDOTA_Item::SpendCharge, KeyValues::~KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_upgraded_mortar"
void __fastcall CDOTA_Item_UpgradedMortar::OnSpellStart(CDOTA_Item_UpgradedMortar *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  CDOTA_Buff *ModifierByName; // rdi
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_upgraded_mortar");
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && (CursorTarget[2].m_hEffectEntity.m_Value.m_Index & 4) != 0 )
  {
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(CursorTarget, "modifier_upgraded_mortar", 0);
    if ( ModifierByName != 0 )
    {
      (*(ModifierByName->_vptr_CDOTA_Buff + 25))(ModifierByName);
    }
    else
    {
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_upgraded_mortar", &kv, 0);
    }
    CDOTA_Item::SpendCharge(this);
  }
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_UpgradedMortar::~CDOTA_Modifier_UpgradedMortar  (line 914, @0x0000000002499ad0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_UpgradedMortar::~CDOTA_Modifier_UpgradedMortar(
        CDOTA_Modifier_UpgradedMortar *const this)
{
  this->_vptr_CDOTA_Buff = &off_40E8E50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_UpgradedMortar::~CDOTA_Modifier_UpgradedMortar  (line 914, @0x0000000002499af0, libserver.so)  // inlines: ~CDOTA_Modifier_UpgradedMortar
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_UpgradedMortar::~CDOTA_Modifier_UpgradedMortar(
        CDOTA_Modifier_UpgradedMortar *const this)
{
  this->_vptr_CDOTA_Buff = &off_40E8E50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_UpgradedMortar::IsPurgable  (line 920, @0x0000000002497ed0, libserver.so)
bool __fastcall CDOTA_Modifier_UpgradedMortar::IsPurgable(CDOTA_Modifier_UpgradedMortar *const this)
{
  return 0;
}


// CDOTA_Modifier_UpgradedMortar::IsPermanent  (line 921, @0x0000000002497ee0, libserver.so)
bool __fastcall CDOTA_Modifier_UpgradedMortar::IsPermanent(CDOTA_Modifier_UpgradedMortar *const this)
{
  return 1;
}


// CDOTA_Modifier_UpgradedMortar::OnCreated  (line 935, @0x0000000002476240, libserver.so)  // inlines: AssignTo, DOTAGameRules, DotaRetrieveAbilityValue<int>, GetFloat, GetInt, GetLevelSpecialValueFor<int>, HasAbilityTuningValueFilter, HasScriptFilter, IsConsideredHero, RunAbilityTuningValueFilter, entindex, operator float, operator int
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::GetSpecialAbility, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAbilityModifierValues, CDOTAGamerules::GetGameModeEntity, KeyValues::operator new, KeyValues::KeyValues, CEntityInstance::GetEntityIndex, KeyValues::SetInt, KeyValues::SetString, KeyValues::SetFloat (18 total)
// strings: "AbilityValueData", "entindex_caster_const", "entindex_ability_const", "value_name_const"
void __fastcall CDOTA_Modifier_UpgradedMortar::OnCreated(CDOTA_Modifier_UpgradedMortar *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // r12
  int EffectiveLevel; // r14d
  DOTASpecialAbility_t *SpecialAbility; // r13
  CDOTA_BaseNPC *Caster; // rax
  int m_nCount; // eax
  int v9; // edx
  bool v10; // cc
  fieldtype_t m_FieldType; // eax
  int Int; // r14d
  CDOTABaseGameMode *GameModeEntity; // rax
  VScriptFilter *v14; // r15
  CDOTA_BaseNPC *v15; // rax
  CEntityIndex v16; // eax
  CEntityIndex v17; // eax
  float v18; // xmm1_4
  float v19; // xmm1_4
  fieldtype_t v20; // eax
  KeyValues *v21; // r12
  fieldtype_t v22; // edx
  int v23; // eax
  fieldtype_t *v24; // r14
  __int16 v25; // ax
  int v26; // r14d
  fieldtype_t *v27; // r14
  float v28; // xmm0_4
  KeyValues *pMem; // [rsp+0h] [rbp-50h]
  float Float; // [rsp+Ch] [rbp-44h]
  float pflMultiply; // [rsp+10h] [rbp-40h] BYREF
  float pflAdd; // [rsp+14h] [rbp-3Ch] BYREF
  KeyValues *pFilterKV; // [rsp+18h] [rbp-38h] BYREF

  Ability = CDOTA_Buff::GetAbility(this);
  v4 = Ability;
  if ( Ability != 0 )
  {
    EffectiveLevel = CDOTABaseAbility::GetEffectiveLevel(Ability);
    if ( EffectiveLevel == -1 || (SpecialAbility = CDOTABaseAbility::GetSpecialAbility(v4, "bonus_per_upgrade")) == 0 )
    {
      v23 = 0;
    }
    else
    {
      pflMultiply = 1.0;
      pflAdd = 0.0;
      if ( CDOTABaseAbility::GetCaster(v4) != 0 )
      {
        Caster = CDOTABaseAbility::GetCaster(v4);
        CDOTA_BaseNPC::GetAbilityModifierValues(Caster, "bonus_per_upgrade", &pflMultiply, &pflAdd);
      }
      m_nCount = SpecialAbility->m_nCount;
      v9 = m_nCount - 1;
      v10 = EffectiveLevel < m_nCount;
      m_FieldType = SpecialAbility->m_FieldType;
      if ( !v10 )
        EffectiveLevel = v9;
      if ( m_FieldType == fieldtype_t::FIELD_FLOAT )
      {
        v27 = &SpecialAbility->m_FieldType + 4 * EffectiveLevel;
        if ( *(v27 + 8) == 34 )
          v28 = *(v27 + 1);
        else
          v28 = *(v27 + 2);
        Int = 0;
        Float = (v28 * pflMultiply) + pflAdd;
      }
      else if ( m_FieldType == fieldtype_t::FIELD_INTEGER )
      {
        v24 = &SpecialAbility->m_FieldType + 4 * EffectiveLevel;
        v25 = *(v24 + 8);
        if ( v25 == 1 )
        {
          v26 = *(v24 + 2);
        }
        else if ( v25 == 34 )
        {
          v26 = *(v24 + 1);
        }
        else
        {
          v26 = *(v24 + 2);
        }
        Float = 0.0;
        Int = ((v26 * pflMultiply) + pflAdd);
      }
      else
      {
        Int = 0;
        Float = 0.0;
      }
      if ( CDOTABaseAbility::GetCaster(v4) != 0
        && (CDOTABaseAbility::GetCaster(v4)->m_iUnitType & 3) != 0
        && g_pGameRules != 0 )
      {
        GameModeEntity = CDOTAGamerules::GetGameModeEntity(g_pGameRules);
        v14 = GameModeEntity;
        if ( GameModeEntity != 0
          && GameModeEntity->m_AbilityTuningValueFilter.m_hFunction != 0
          && GameModeEntity->m_AbilityTuningValueFilter.m_hContext != 0 )
        {
          pMem = KeyValues::operator new(0x14u);
          KeyValues::KeyValues(pMem, "AbilityValueData");
          pFilterKV = pMem;
          if ( CDOTABaseAbility::GetCaster(v4) != 0 )
          {
            v15 = CDOTABaseAbility::GetCaster(v4);
            v16.m_Data = CEntityInstance::GetEntityIndex(v15).m_Data;
            KeyValues::SetInt(pFilterKV, "entindex_caster_const", v16.m_Data);
          }
          v17.m_Data = CEntityInstance::GetEntityIndex(v4).m_Data;
          KeyValues::SetInt(pFilterKV, "entindex_ability_const", v17.m_Data);
          KeyValues::SetString(pFilterKV, "value_name_const", "bonus_per_upgrade");
          KeyValues::SetFloat(pFilterKV, "value", v18);
          if ( VScriptFilter::RunScriptFilter(v14 + 63, &pFilterKV) )
          {
            v20 = SpecialAbility->m_FieldType;
            if ( v20 == fieldtype_t::FIELD_FLOAT )
            {
              Float = KeyValues::GetFloat(pFilterKV, "value", v19);
            }
            else if ( v20 == fieldtype_t::FIELD_INTEGER )
            {
              Int = KeyValues::GetInt(pFilterKV, "value", Int);
            }
          }
          v21 = pFilterKV;
          if ( pFilterKV != 0 )
          {
            KeyValues::~KeyValues(pFilterKV);
            KeyValues::operator delete(v21);
          }
        }
      }
      v22 = SpecialAbility->m_FieldType;
      if ( v22 == fieldtype_t::FIELD_FLOAT )
      {
        v23 = Float;
      }
      else
      {
        v23 = 0;
        if ( v22 == fieldtype_t::FIELD_INTEGER )
          v23 = Int;
      }
    }
    this->bonus_per_upgrade = v23;
  }
  else
  {
    this->bonus_per_upgrade = 0;
  }
  (*(this->_vptr_CDOTA_Buff + 28))(this, 1);
}


// CDOTA_Modifier_UpgradedMortar::DeclareFunctions  (line 943, @0x00000000024628b0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_UpgradedMortar::GetModifierBaseAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_UpgradedMortar::DeclareFunctions(CDOTA_Modifier_UpgradedMortar *const this)
{
  this->m_Functions[3].__pfn = CDOTA_Modifier_UpgradedMortar::GetModifierBaseAttack_BonusDamage;
  this->m_Functions[3].__delta = 0;
}


// CDOTA_Modifier_UpgradedMortar::GetModifierBaseAttack_BonusDamage  (line 950, @0x00000000024628d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_UpgradedMortar::GetModifierBaseAttack_BonusDamage(
        CDOTA_Modifier_UpgradedMortar *const this,
        const CModifierParams *const params)
{
  int bonus_per_upgrade; // ebx
  __m128i v3; // xmm0
  int v4; // eax
  ModifierVariant_t result; // 0:rax.16

  bonus_per_upgrade = this->bonus_per_upgrade;
  v3 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v3.m128i_i32 = (v4 * bonus_per_upgrade);
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Item_UpgradedBarricade::~CDOTA_Item_UpgradedBarricade  (line 961, @0x000000000249aba0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_UpgradedBarricade::~CDOTA_Item_UpgradedBarricade(CDOTA_Item_UpgradedBarricade *const this)
{
  this->_vptr_IHandleEntity = &off_40E91B0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_UpgradedBarricade::~CDOTA_Item_UpgradedBarricade  (line 961, @0x000000000249abc0, libserver.so)  // inlines: ~CDOTA_Item_UpgradedBarricade
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_UpgradedBarricade::~CDOTA_Item_UpgradedBarricade(CDOTA_Item_UpgradedBarricade *const this)
{
  this->_vptr_IHandleEntity = &off_40E91B0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_UpgradedBarricade::Schema_DynamicBinding  (line 963, @0x0000000002497ef0, libserver.so)
// globals: CDOTA_Item_UpgradedBarricade::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_UpgradedBarricade::Schema_DynamicBinding(
        const CDOTA_Item_UpgradedBarricade *const this)
{
  return CDOTA_Item_UpgradedBarricade::s_pSchemaBinding;
}


// CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 963, @0x0000000002497f00, libserver.so)
// globals: CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass::DestructInstance  (line 963, @0x0000000002497f10, libserver.so)  // inlines: Destruct<CDOTA_Item_UpgradedBarricade>
void __fastcall CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass::FreeInstance  (line 963, @0x0000000002497f30, libserver.so)
void __fastcall CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass::CanAllocate  (line 963, @0x0000000002497f50, libserver.so)
bool __fastcall CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 963, @0x0000000002497f60, libserver.so)
// globals: CDOTA_Item_UpgradedBarricade::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_UpgradedBarricade::s_pSchemaBinding;
}


// CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass::AllocateInstance  (line 963, @0x0000000002499700, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass::ConstructInstance  (line 963, @0x000000000249a9a0, libserver.so)  // inlines: CDOTA_Item_UpgradedBarricade, Construct<CDOTA_Item_UpgradedBarricade>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_40E91B0;
  }
  return p;
}


// CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 963, @0x000000000249d950, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 963, @0x000000000249d970, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_UpgradedBarricade::GetEntityClassInternal  (line 963, @0x00000000024a7060, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_02.cpp
// strings: "item_upgraded_barricade", "CDOTA_Item_UpgradedBarricade"
// globals: `guard variable for'CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass, CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_UpgradedBarricade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UpgradedBarricadeClassInfo, CDOTA_Item_UpgradedBarricade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UpgradedBarricadeClassInfo
CEntityClass *__cdecl CDOTA_Item_UpgradedBarricade::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass) != 0 )
  {
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_designerName.u.m_Id = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_AllHelpers.m_Size = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_classInputs.m_Size = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_classOutputs.m_Size = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_hNetworkSerializer = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_pBaseClassInfo = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_pClassInfo = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_flags = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_nAllHelpersFlags = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_pScriptClassDesc = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_pInputs = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_nInputCount = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_pOutputs = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_nOutputCount = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_pGameClass = 0;
    CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass._vptr_CEntityClass = off_40E9130;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass);
    __cxa_atexit(
      CDOTA_Item_UpgradedBarricade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_UpgradedBarricadeClass != 0 )
    return &CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass;
  if ( `guard variable for'CDOTA_Item_UpgradedBarricade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UpgradedBarricadeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_UpgradedBarricade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UpgradedBarricadeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_UpgradedBarricade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UpgradedBarricadeClassInfo,
      "CDOTA_Item_UpgradedBarricade",
      "item_upgraded_barricade",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_UpgradedBarricade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UpgradedBarricadeClassInfo);
  }
  CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_pClassInfo = &CDOTA_Item_UpgradedBarricade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UpgradedBarricadeClassInfo;
  CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_pBaseClassInfo = CDOTA_Item_UpgradedBarricade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UpgradedBarricadeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_UpgradedBarricadeClass = &CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass;
  CDOTA_Item_UpgradedBarricade::GetEntityClassInfo(void)::g_EntityCDOTA_Item_UpgradedBarricadeClassInfo.m_pClass = &CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass;
  CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_UpgradedBarricadeClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_UpgradedBarricade::GetEntityClassInternal(void)::g_EntityCDOTA_Item_UpgradedBarricadeClass;
}


// CDOTA_Item_UpgradedBarricade::OnSpellStart  (line 973, @0x0000000002474f90, libserver.so)  // inlines: GetLevelSpecialValueFor<int>, ToDOTABaseNPC
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::Heal, CDOTA_Item::SpendCharge, KeyValues::~KeyValues, CDOTA_BaseNPC::AddNewModifier, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_upgraded_barricade", "hp_bonus_per_upgrade"
void __fastcall CDOTA_Item_UpgradedBarricade::OnSpellStart(CDOTA_Item_UpgradedBarricade *const this)
{
  int LevelSpecialValue; // r14d
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v4; // rbx
  CDOTA_Buff *ModifierByName; // rdi
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_upgraded_barricade");
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "hp_bonus_per_upgrade", -1, 0);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v4 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && (CursorTarget[2].m_hEffectEntity.m_Value.m_Index & 4) != 0 )
  {
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(CursorTarget, "modifier_upgraded_barricade", 0);
    if ( ModifierByName != 0 )
    {
      (*(ModifierByName->_vptr_CDOTA_Buff + 25))(ModifierByName);
    }
    else
    {
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_upgraded_barricade", &kv, 0);
    }
    v4->m_flBaseMaxHealth = (LevelSpecialValue + (*(v4->_vptr_IHandleEntity + 156))(v4));
    v6 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::Heal(v4, LevelSpecialValue, v6, 0, 1);
    CDOTA_Item::SpendCharge(this);
  }
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_UpgradedBarricade::~CDOTA_Modifier_UpgradedBarricade  (line 1008, @0x0000000002499a80, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_UpgradedBarricade::~CDOTA_Modifier_UpgradedBarricade(
        CDOTA_Modifier_UpgradedBarricade *const this)
{
  this->_vptr_CDOTA_Buff = &off_40E9D70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_UpgradedBarricade::~CDOTA_Modifier_UpgradedBarricade  (line 1008, @0x0000000002499aa0, libserver.so)  // inlines: ~CDOTA_Modifier_UpgradedBarricade
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_UpgradedBarricade::~CDOTA_Modifier_UpgradedBarricade(
        CDOTA_Modifier_UpgradedBarricade *const this)
{
  this->_vptr_CDOTA_Buff = &off_40E9D70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_UpgradedBarricade::IsPurgable  (line 1014, @0x0000000002497f70, libserver.so)
bool __fastcall CDOTA_Modifier_UpgradedBarricade::IsPurgable(CDOTA_Modifier_UpgradedBarricade *const this)
{
  return 0;
}


// CDOTA_Modifier_UpgradedBarricade::IsPermanent  (line 1015, @0x0000000002497f80, libserver.so)
bool __fastcall CDOTA_Modifier_UpgradedBarricade::IsPermanent(CDOTA_Modifier_UpgradedBarricade *const this)
{
  return 1;
}


// CDOTA_Modifier_UpgradedBarricade::OnCreated  (line 1030, @0x00000000024755f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "armor_bonus_per_upgrade", "hp_bonus_per_upgrade"
void __fastcall CDOTA_Modifier_UpgradedBarricade::OnCreated(
        CDOTA_Modifier_UpgradedBarricade *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->armor_bonus_per_upgrade = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->hp_bonus_per_upgrade = 0;
    goto LABEL_4;
  }
  this->armor_bonus_per_upgrade = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                    Ability,
                                    "armor_bonus_per_upgrade",
                                    -1,
                                    0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->hp_bonus_per_upgrade = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "hp_bonus_per_upgrade", -1, 0);
LABEL_4:
  (*(this->_vptr_CDOTA_Buff + 28))(this, 1);
}


// CDOTA_Modifier_UpgradedBarricade::DeclareFunctions  (line 1041, @0x0000000002462910, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_UpgradedBarricade::GetModifierPhysicalArmorBonus(CModifierParams const&), CDOTA_Modifier_UpgradedBarricade::OnTooltip(CModifierParams const&)
void __fastcall CDOTA_Modifier_UpgradedBarricade::DeclareFunctions(CDOTA_Modifier_UpgradedBarricade *const this)
{
  this->m_Functions[45].__pfn = CDOTA_Modifier_UpgradedBarricade::GetModifierPhysicalArmorBonus;
  this->m_Functions[45].__delta = 0;
  this->m_Functions[151].__delta = 0;
  this->m_Functions[151].__pfn = CDOTA_Modifier_UpgradedBarricade::OnTooltip;
}


// CDOTA_Modifier_UpgradedBarricade::GetModifierPhysicalArmorBonus  (line 1049, @0x0000000002462950, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_UpgradedBarricade::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_UpgradedBarricade *const this,
        const CModifierParams *const params)
{
  int armor_bonus_per_upgrade; // ebx
  __m128i v3; // xmm0
  int v4; // eax
  ModifierVariant_t result; // 0:rax.16

  armor_bonus_per_upgrade = this->armor_bonus_per_upgrade;
  v3 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v3.m128i_i32 = (v4 * armor_bonus_per_upgrade);
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_UpgradedBarricade::OnTooltip  (line 1056, @0x0000000002462990, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_UpgradedBarricade::OnTooltip(
        CDOTA_Modifier_UpgradedBarricade *const this,
        const CModifierParams *const params)
{
  int hp_bonus_per_upgrade; // ebx
  __m128i v3; // xmm0
  int v4; // eax
  ModifierVariant_t result; // 0:rax.16

  hp_bonus_per_upgrade = this->hp_bonus_per_upgrade;
  v3 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v3.m128i_i32 = (v4 * hp_bonus_per_upgrade);
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Creature_HybridFlyer::~CDOTA_Modifier_Creature_HybridFlyer  (line 1064, @0x0000000002499a30, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Creature_HybridFlyer::~CDOTA_Modifier_Creature_HybridFlyer(
        CDOTA_Modifier_Creature_HybridFlyer *const this)
{
  this->_vptr_CDOTA_Buff = &off_40EA090;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Creature_HybridFlyer::~CDOTA_Modifier_Creature_HybridFlyer  (line 1064, @0x0000000002499a50, libserver.so)  // inlines: ~CDOTA_Modifier_Creature_HybridFlyer
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Creature_HybridFlyer::~CDOTA_Modifier_Creature_HybridFlyer(
        CDOTA_Modifier_Creature_HybridFlyer *const this)
{
  this->_vptr_CDOTA_Buff = &off_40EA090;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Creature_HybridFlyer::IsHidden  (line 1069, @0x0000000002497f90, libserver.so)
bool __fastcall CDOTA_Modifier_Creature_HybridFlyer::IsHidden(CDOTA_Modifier_Creature_HybridFlyer *const this)
{
  return 1;
}


// CDOTA_Modifier_Creature_HybridFlyer::IsPurgable  (line 1072, @0x0000000002497fa0, libserver.so)
bool __fastcall CDOTA_Modifier_Creature_HybridFlyer::IsPurgable(CDOTA_Modifier_Creature_HybridFlyer *const this)
{
  return 0;
}


// CDOTA_Modifier_Creature_HybridFlyer::GetPriority  (line 1076, @0x0000000002497fb0, libserver.so)
int __fastcall CDOTA_Modifier_Creature_HybridFlyer::GetPriority(CDOTA_Modifier_Creature_HybridFlyer *const this)
{
  return 7;
}


// CDOTA_Modifier_Creature_HybridFlyer::DeclareFunctions  (line 1088, @0x00000000024629d0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Creature_HybridFlyer::DeclareFunctions(CDOTA_Modifier_Creature_HybridFlyer *const this)
{
  this->m_Functions[126].__pfn = (&stru_10 + 697);
  this->m_Functions[126].__delta = 0;
}


// CDOTA_Modifier_Creature_HybridFlyer::CheckState  (line 1094, @0x00000000024629f0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Creature_HybridFlyer::CheckState(
        CDOTA_Modifier_Creature_HybridFlyer *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x3000000uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFCFFFFFFLL;
}


// CDOTA_Modifier_Creature_HybridFlyer::OnUnitMoved  (line 1102, @0x00000000024731e0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetRemainingRatio, GetRemainingTime, GetTeamNumber, IndexToIdentity, Invalidate, IsElapsed, IsValid, Length2D, LookupEntity, NetworkStateChanged, Purge, RemoveAll, Set, Start, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=<float>, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_Buff::GetParent, CountdownTimer::Now, DoAirCollisionPadding, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Creature_HybridFlyer::OnUnitMoved(
        CDOTA_Modifier_Creature_HybridFlyer *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v6; // rax
  __int64 i; // rbx
  CHandle<CBaseEntity> *v8; // rdx
  uint32 m_Index; // eax
  __int16 v10; // cx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CBaseEntity *m_pInstance; // r12
  const Vector *v14; // r14
  CDOTA_BaseNPC *Parent; // rax
  const Vector *v16; // rax
  float v17; // xmm0_4
  float m_Value; // xmm1_4
  CDOTA_BaseNPC *v19; // rax
  float v20; // xmm2_4
  float v22; // xmm6_4
  float v23; // [rsp+18h] [rbp-58h]
  float v24; // [rsp+18h] [rbp-58h]
  float flDistance; // [rsp+1Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+20h] [rbp-50h] BYREF

  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  Caster = CDOTA_Buff::GetCaster(this);
  v4 = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
  v6 = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(v6->m_iTeamNum.m_Value, AbsOrigin, Caster, 55.0, &entities, 3, 19, 0, 0, 0);
  if ( entities.m_Size > 0 )
  {
    for ( i = 0; entities.m_Size > i; ++i )
    {
      while ( 1 )
      {
        v8 = &entities.m_Memory.m_pMemory[i];
        m_Index = v8->m_Index;
        if ( v8->m_Index + 2 > 1 )
        {
          v10 = v8->m_Index;
          v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_Index) >> 9) & 0x3F];
          if ( v11 != 0 )
          {
            v12 = &v11[v10 & 0x1FF];
            if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
            {
              m_pInstance = v12->m_pInstance;
              if ( v12->m_pInstance != 0
                && m_pInstance->m_bIsDOTANPC
                && (HIBYTE(m_pInstance[3].m_vecVelocity.m_Value.x) & 1) != 0 )
              {
                break;
              }
            }
          }
        }
LABEL_3:
        if ( entities.m_Size <= ++i )
          goto LABEL_20;
      }
      v14 = CBaseEntity::GetAbsOrigin(v12->m_pInstance);
      Parent = CDOTA_Buff::GetParent(this);
      v16 = CBaseEntity::GetAbsOrigin(Parent);
      flDistance = fsqrt(((v16->x - v14->x) * (v16->x - v14->x)) + ((v16->y - v14->y) * (v16->y - v14->y)));
      if ( flDistance >= 55.0 )
      {
        if ( this->m_ctTimer.m_timestamp.m_Value != -1.0 )
        {
          (*(this->m_ctTimer._vptr_CountdownTimer + 2))(&this->m_ctTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL, -1.0);
          this->m_ctTimer.m_timestamp.m_Value = -1.0;
        }
        goto LABEL_3;
      }
      v17 = CountdownTimer::Now(&this->m_ctTimer);
      m_Value = this->m_ctTimer.m_timestamp.m_Value;
      if ( v17 < m_Value )
      {
        if ( m_Value <= 0.0 )
          goto LABEL_19;
      }
      else
      {
        v23 = CountdownTimer::Now(&this->m_ctTimer) + 0.5;
        if ( v23 != this->m_ctTimer.m_timestamp.m_Value )
        {
          (*(this->m_ctTimer._vptr_CountdownTimer + 2))(&this->m_ctTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_ctTimer.m_timestamp.m_Value = v23;
        }
        if ( this->m_ctTimer.m_duration.m_Value == 0.5 )
        {
          v24 = this->m_ctTimer.m_timestamp.m_Value;
        }
        else
        {
          (*(this->m_ctTimer._vptr_CountdownTimer + 2))(&this->m_ctTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          v22 = this->m_ctTimer.m_timestamp.m_Value;
          this->m_ctTimer.m_duration.m_Value = 0.5;
          v24 = v22;
        }
        if ( v24 <= 0.0 )
          goto LABEL_19;
      }
      CountdownTimer::Now(&this->m_ctTimer);
LABEL_19:
      v19 = CDOTA_Buff::GetParent(this);
      DoAirCollisionPadding(v19, m_pInstance, flDistance, v20);
    }
  }
LABEL_20:
  entities.m_Size = 0;
  if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
  }
  return 1uLL;
}


// CDOTA_Modifier_Creature_Full_Avoidance::~CDOTA_Modifier_Creature_Full_Avoidance  (line 1137, @0x00000000024999e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Creature_Full_Avoidance::~CDOTA_Modifier_Creature_Full_Avoidance(
        CDOTA_Modifier_Creature_Full_Avoidance *const this)
{
  this->_vptr_CDOTA_Buff = &off_40EA3B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Creature_Full_Avoidance::~CDOTA_Modifier_Creature_Full_Avoidance  (line 1137, @0x0000000002499a00, libserver.so)  // inlines: ~CDOTA_Modifier_Creature_Full_Avoidance
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Creature_Full_Avoidance::~CDOTA_Modifier_Creature_Full_Avoidance(
        CDOTA_Modifier_Creature_Full_Avoidance *const this)
{
  this->_vptr_CDOTA_Buff = &off_40EA3B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Creature_Full_Avoidance::IsHidden  (line 1144, @0x0000000002497fc0, libserver.so)
bool __fastcall CDOTA_Modifier_Creature_Full_Avoidance::IsHidden(CDOTA_Modifier_Creature_Full_Avoidance *const this)
{
  return 1;
}


// CDOTA_Modifier_Creature_Full_Avoidance::IsPurgable  (line 1145, @0x0000000002497fd0, libserver.so)
bool __fastcall CDOTA_Modifier_Creature_Full_Avoidance::IsPurgable(CDOTA_Modifier_Creature_Full_Avoidance *const this)
{
  return 0;
}


// CDOTA_Modifier_Creature_Full_Avoidance::OnCreated  (line 1156, @0x0000000002463680, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC_Creature::SetCreatureAvoidance
void __fastcall CDOTA_Modifier_Creature_Full_Avoidance::OnCreated(
        CDOTA_Modifier_Creature_Full_Avoidance *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC_Creature *v4; // r12
  float v5; // xmm1_4

  if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 0x10000) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    v4 = Parent;
    if ( Parent != 0 )
    {
      this->m_flOriginalAvoidance = (*(Parent->_vptr_IHandleEntity + 493))(Parent, Parent[1].m_CScriptComponent);
      CDOTA_BaseNPC_Creature::SetCreatureAvoidance(v4, v5);
    }
  }
}


// CDOTA_Modifier_Creature_Full_Avoidance::OnDestroy  (line 1173, @0x0000000002463630, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC_Creature::SetCreatureAvoidance
void __fastcall CDOTA_Modifier_Creature_Full_Avoidance::OnDestroy(CDOTA_Modifier_Creature_Full_Avoidance *const this)
{
  CDOTA_BaseNPC_Creature *Parent; // rax
  float v3; // xmm1_4

  if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 0x10000) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    if ( Parent != 0 )
      CDOTA_BaseNPC_Creature::SetCreatureAvoidance(Parent, v3);
  }
}


// CDOTA_Item_BagOfGold::~CDOTA_Item_BagOfGold  (line 1195, @0x000000000249abf0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_BagOfGold::~CDOTA_Item_BagOfGold(CDOTA_Item_BagOfGold *const this)
{
  this->_vptr_IHandleEntity = &off_40EA710;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_BagOfGold::~CDOTA_Item_BagOfGold  (line 1195, @0x000000000249ac10, libserver.so)  // inlines: ~CDOTA_Item_BagOfGold
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_BagOfGold::~CDOTA_Item_BagOfGold(CDOTA_Item_BagOfGold *const this)
{
  this->_vptr_IHandleEntity = &off_40EA710;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_BagOfGold::Schema_DynamicBinding  (line 1197, @0x0000000002497fe0, libserver.so)
// globals: CDOTA_Item_BagOfGold::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_BagOfGold::Schema_DynamicBinding(
        const CDOTA_Item_BagOfGold *const this)
{
  return CDOTA_Item_BagOfGold::s_pSchemaBinding;
}


// CDOTA_Item_BagOfGold::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1197, @0x0000000002497ff0, libserver.so)
// globals: CDOTA_Item_BagOfGold::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_BagOfGold::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_BagOfGold::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_BagOfGold::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_BagOfGold::CEntityInstanceEntityClass::DestructInstance  (line 1197, @0x0000000002498000, libserver.so)  // inlines: Destruct<CDOTA_Item_BagOfGold>
void __fastcall CDOTA_Item_BagOfGold::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_BagOfGold::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_BagOfGold::CEntityInstanceEntityClass::FreeInstance  (line 1197, @0x0000000002498020, libserver.so)
void __fastcall CDOTA_Item_BagOfGold::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_BagOfGold::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_BagOfGold::CEntityInstanceEntityClass::CanAllocate  (line 1197, @0x0000000002498040, libserver.so)
bool __fastcall CDOTA_Item_BagOfGold::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_BagOfGold::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_BagOfGold::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1197, @0x0000000002498050, libserver.so)
// globals: CDOTA_Item_BagOfGold::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_BagOfGold::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_BagOfGold::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_BagOfGold::s_pSchemaBinding;
}


// CDOTA_Item_BagOfGold::CEntityInstanceEntityClass::AllocateInstance  (line 1197, @0x0000000002499740, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_BagOfGold::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_BagOfGold::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1008);
  memset(v1, 0, 0x3F0u);
  return v1;
}


// CDOTA_Item_BagOfGold::CEntityInstanceEntityClass::ConstructInstance  (line 1197, @0x000000000249a9d0, libserver.so)  // inlines: CDOTA_Item_BagOfGold, CEntityHandle, CHandle, Construct<CDOTA_Item_BagOfGold>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_BagOfGold::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_BagOfGold::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *(p + 250) = -1;
    *p = &off_40EA710;
  }
  return p;
}


// CDOTA_Item_BagOfGold::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1197, @0x000000000249d9a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_BagOfGold::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_BagOfGold::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_BagOfGold::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1197, @0x000000000249d9c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_BagOfGold::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_BagOfGold::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_BagOfGold::GetEntityClassInternal  (line 1197, @0x00000000024a6d10, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_02.cpp
// strings: "item_bag_of_gold", "CDOTA_Item_BagOfGold"
// globals: `guard variable for'CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass, CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Item_BagOfGold::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_BagOfGold::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BagOfGoldClassInfo, CDOTA_Item_BagOfGold::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BagOfGoldClassInfo
CEntityClass *__cdecl CDOTA_Item_BagOfGold::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass) != 0 )
  {
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_designerName.u.m_Id = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_AllHelpers.m_Size = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_classInputs.m_Size = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_classOutputs.m_Size = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_hNetworkSerializer = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_pBaseClassInfo = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_pClassInfo = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_flags = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_nAllHelpersFlags = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_pScriptClassDesc = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_pInputs = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_nInputCount = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_pOutputs = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_nOutputCount = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_pGameClass = 0;
    CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass._vptr_CEntityClass = off_40EA690;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass);
    __cxa_atexit(
      CDOTA_Item_BagOfGold::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_BagOfGoldClass != 0 )
    return &CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass;
  if ( `guard variable for'CDOTA_Item_BagOfGold::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BagOfGoldClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_BagOfGold::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BagOfGoldClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_BagOfGold::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BagOfGoldClassInfo,
      "CDOTA_Item_BagOfGold",
      "item_bag_of_gold",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_BagOfGold::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BagOfGoldClassInfo);
  }
  CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_pClassInfo = &CDOTA_Item_BagOfGold::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BagOfGoldClassInfo;
  CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_pBaseClassInfo = CDOTA_Item_BagOfGold::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BagOfGoldClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_BagOfGoldClass = &CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass;
  CDOTA_Item_BagOfGold::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BagOfGoldClassInfo.m_pClass = &CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass;
  CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_BagOfGoldClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_BagOfGold::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BagOfGoldClass;
}


// CDOTA_Item_BagOfGold::IsCastOnPickup  (line 1202, @0x0000000002498060, libserver.so)
bool __fastcall CDOTA_Item_BagOfGold::IsCastOnPickup(CDOTA_Item_BagOfGold *const this)
{
  return 1;
}


// CDOTA_Item_BagOfGold::Spawn  (line 1210, @0x00000000024636e0, libserver.so)
// calls: CDOTA_Item::Spawn
void __fastcall CDOTA_Item_BagOfGold::Spawn(CDOTA_Item_BagOfGold *const this, const CEntityKeyValues *pKeyValues)
{
  CDOTA_Item::Spawn(this, pKeyValues);
}


// CDOTA_Item_BagOfGold::OnSpellStart  (line 1215, @0x0000000002466520, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetHero, GetInstance, GetModifier_Constant_First, IndexToIdentity, IsListeningToEvent, IsRealHero, IsTempestDouble, IsValid, LookupEntity, ModifyGold, ToDOTABaseNPCHero, operator CEntityInstance*, operator[]
// calls: CDOTABaseAbility::GetCaster, CDOTA_PlayerResource::IsValidPlayerID, CDOTA_PlayerResource::ModifyGold, SendOverheadEventMessage, UTIL_Remove, CDOTA_ModifierManager::GetModifier_Constant_First_Internal
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Item_BagOfGold::OnSpellStart(CDOTA_Item_BagOfGold *const this)
{
  __int64 v2; // r14
  int v3; // r15d
  int v4; // r12d
  CHandle<CDOTA_BaseNPC_Hero> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *m_pInstance; // rdi
  __int64 v11; // rax
  CDOTA_BaseNPC *Caster; // rax
  int v13; // eax
  __int64 v14; // r14
  int v15; // r12d
  CHandle<CDOTA_BaseNPC_Hero> *v16; // rdx
  uint32 v17; // eax
  __int16 v18; // cx
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CBaseEntity *v21; // r15
  __int64 v22; // rax
  CDOTAPlayer *v23; // rax
  int nGoldAmount; // [rsp+Ch] [rbp-34h]

  if ( (this->m_pEntity->m_flags & 0x200) == 0 )
  {
    v2 = 0;
    v3 = 0;
    v4 = 0;
    if ( g_HeroList.m_hHeroList.m_Size <= 0 )
      goto LABEL_33;
    do
    {
      while ( 1 )
      {
        v5 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v2];
        m_Index = v5->m_Index;
        if ( v5->m_Index + 2 > 1 )
        {
          v7 = v5->m_Index;
          v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
          if ( v8 != 0 )
          {
            v9 = &v8[v7 & 0x1FF];
            if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
            {
              m_pInstance = v9->m_pInstance;
              if ( v9->m_pInstance != 0
                && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
              {
                v11 = BYTE6(m_pInstance[69].m_hPrivateScope.m_hScope);
                if ( v11 == 0xFF
                  || *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * v11) <= 0
                  || CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
                       &m_pInstance[64].m_worldGroupId,
                       modifierfunction::MODIFIER_PROPERTY_TEMPEST_DOUBLE,
                       &CModifierParams::s_Default) != 1.0 )
                {
                  break;
                }
              }
            }
          }
        }
        ++v4;
        ++v2;
        if ( v4 >= g_HeroList.m_hHeroList.m_Size )
          goto LABEL_14;
      }
      ++v4;
      ++v3;
      ++v2;
    }
    while ( v4 < g_HeroList.m_hHeroList.m_Size );
LABEL_14:
    if ( v3 != 0 )
      nGoldAmount = this->m_iCurrentCharges.m_Value / v3;
    else
LABEL_33:
      nGoldAmount = 0;
    if ( g_pDOTAPlayerResource != 0 && CDOTABaseAbility::GetCaster(this) != 0 )
    {
      Caster = CDOTABaseAbility::GetCaster(this);
      v13 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
      CDOTA_PlayerResource::IsValidPlayerID(g_pDOTAPlayerResource, v13);
    }
    v14 = 0;
    v15 = 0;
    while ( v15 < g_HeroList.m_hHeroList.m_Size )
    {
      while ( 1 )
      {
        v16 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v14];
        v17 = v16->m_Index;
        if ( v16->m_Index + 2 > 1 )
        {
          v18 = v16->m_Index;
          v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v16->m_Index) >> 9) & 0x3F];
          if ( v19 != 0 )
          {
            v20 = &v19[v18 & 0x1FF];
            if ( v20 != 0 && v17 == v20->m_EHandle.m_Index )
            {
              v21 = v20->m_pInstance;
              if ( v20->m_pInstance != 0
                && (v21[2].m_hEffectEntity.m_Value.m_Index & 1) != 0
                && LOBYTE(v21[4].m_pfnMoveDone.__delta) == 0 )
              {
                v22 = *(&v21[4].m_ResponseContexts.m_Size + 6);
                if ( v22 == 0xFF
                  || *(&v21[4].m_CBodyComponent->_vptr_CBodyComponent + 6 * v22) <= 0
                  || CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
                       &v21[4],
                       modifierfunction::MODIFIER_PROPERTY_TEMPEST_DOUBLE,
                       &CModifierParams::s_Default) != 1.0 )
                {
                  break;
                }
              }
            }
          }
        }
        ++v15;
        ++v14;
        if ( v15 >= g_HeroList.m_hHeroList.m_Size )
          goto LABEL_31;
      }
      ++v15;
      ++v14;
      CDOTA_PlayerResource::ModifyGold(
        g_pDOTAPlayerResource,
        *&v21[6].m_NetworkTransmitComponent.m_Accessor,
        nGoldAmount,
        1,
        0);
      v23 = (*(v21->_vptr_IHandleEntity + 413))(v21);
      SendOverheadEventMessage(v23, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_GOLD, v21, nGoldAmount, 0);
    }
LABEL_31:
    UTIL_Remove(this);
  }
}


// CDOTA_Item_BagOfGold::UpdateOnRemove  (line 1259, @0x00000000024661e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CDOTA_Item::UpdateOnRemove, UTIL_Remove
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Item_BagOfGold::UpdateOnRemove(CDOTA_Item_BagOfGold *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  m_Index = this->m_hThinker.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hThinker.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = &v3[this->m_hThinker.m_Index & 0x1FF]) != 0
    && m_Index == v4->m_EHandle.m_Index
    && v4->m_pInstance != 0 )
  {
    UTIL_Remove(v4->m_pInstance);
    CDOTA_Item::UpdateOnRemove(this);
  }
  else
  {
    CDOTA_Item::UpdateOnRemove(this);
  }
}


// CDOTA_Modifier_LootDrop_Thinker::~CDOTA_Modifier_LootDrop_Thinker  (line 1271, @0x0000000002499990, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_LootDrop_Thinker::~CDOTA_Modifier_LootDrop_Thinker(
        CDOTA_Modifier_LootDrop_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_40EB2D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_LootDrop_Thinker::~CDOTA_Modifier_LootDrop_Thinker  (line 1271, @0x00000000024999b0, libserver.so)  // inlines: ~CDOTA_Modifier_LootDrop_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_LootDrop_Thinker::~CDOTA_Modifier_LootDrop_Thinker(
        CDOTA_Modifier_LootDrop_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_40EB2D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_LootDrop_Thinker::IsHidden  (line 1275, @0x0000000002498070, libserver.so)
bool __fastcall CDOTA_Modifier_LootDrop_Thinker::IsHidden(CDOTA_Modifier_LootDrop_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_LootDrop_Thinker::OnCreated  (line 1297, @0x0000000002463420, libserver.so)  // inlines: GetBool
// calls: KeyValues::GetFloat, KeyValues::GetInt, CDOTA_Buff::StartIntervalThink
// strings: "knockback_height", "knockback_initial_height", "knockback_target_x", "knockback_target_y", "knockback_target_z", "auto_use"
void __fastcall CDOTA_Modifier_LootDrop_Thinker::OnCreated(CDOTA_Modifier_LootDrop_Thinker *const this, KeyValues *pKV)
{
  float v2; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float Float; // xmm0_4
  float v11; // xmm1_4

  this->m_flKnockbackHeight = KeyValues::GetFloat(pKV, "knockback_height", v2);
  this->m_flInitialHeight = KeyValues::GetFloat(pKV, "knockback_initial_height", v5);
  this->m_vEndPos.x = KeyValues::GetFloat(pKV, "knockback_target_x", v6);
  this->m_vEndPos.y = KeyValues::GetFloat(pKV, "knockback_target_y", v7);
  this->m_vEndPos.z = KeyValues::GetFloat(pKV, "knockback_target_z", v8);
  Float = KeyValues::GetFloat(pKV, "knockback_duration", v9);
  this->m_flKnockbackDuration = Float;
  this->m_flKnockbackStartTime = -1.0;
  this->m_bFlying = Float > 0.0;
  this->m_bAutoUse = KeyValues::GetInt(pKV, "auto_use", 0) != 0;
  CDOTA_Buff::StartIntervalThink(this, v11);
}


// CDOTA_Modifier_LootDrop_Thinker::OnIntervalThink  (line 1312, @0x00000000024735b0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetSpawnGroupHandle, GetTeamNumber, IndexToIdentity, IsValid, Lerp<Vector>, LookupEntity, Purge, RemoveAll, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAItem, Vector, VectorAdd, VectorDivide, VectorMultiply, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator-, operator/, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetAbility, CDOTA_Item::GetContainer, CBaseEntity::SetAbsVelocity, CBaseEntity::SetAbsOrigin, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CDOTA_Buff::Destroy, CGridNav::DestroyTreesAroundPoint, UTIL_TraceRayVerticalGroundHeight (17 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_LootDrop_Thinker::OnIntervalThink(CDOTA_Modifier_LootDrop_Thinker *const this)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_Item *v3; // r12
  CDOTA_Item_Physical *Container; // r13
  float v5; // xmm1_4
  float v6; // xmm5_4
  CDOTA_BaseNPC *Parent; // r15
  CDOTA_BaseNPC *v8; // rax
  int v9; // esi
  CHandle<CBaseEntity> *m_pMemory; // rax
  CEntityIdentity *v11; // rcx
  CEntityIdentity *v12; // rcx
  float m_flKnockbackDuration; // xmm8_4
  float v14; // xmm6_4
  float v15; // xmm0_4
  float v16; // xmm5_4
  float v17; // xmm4_4
  float z; // xmm9_4
  float v19; // xmm3_4
  float m_flKnockbackHeight; // xmm7_4
  float v21; // xmm2_4
  float v22; // xmm5_4
  float v23; // xmm3_4
  float v24; // xmm1_4
  const Vector *AbsOrigin; // rax
  vec_t y; // xmm1_4
  CEntityIdentity *m_pEntity; // rax
  SpawnGroupHandle_t m_hSpawnGroup; // edi
  float v29; // xmm0_4
  CEntityInstance *m_pInstance; // rdi
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_BaseNPC *v32; // rax
  Vector iFlagFilter; // [rsp+0h] [rbp-90h]
  float flNow; // [rsp+1Ch] [rbp-74h]
  float z1; // [rsp+20h] [rbp-70h]
  float x; // [rsp+24h] [rbp-6Ch]
  Vector *vPositiona; // [rsp+28h] [rbp-68h]
  float vPosition; // [rsp+28h] [rbp-68h]
  Vector vPos; // [rsp+30h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-50h] BYREF

  Ability = CDOTA_Buff::GetAbility(this);
  v3 = Ability;
  if ( Ability == 0
    || (*(Ability->_vptr_IHandleEntity + 223))(Ability) == 0
    || (Container = CDOTA_Item::GetContainer(v3)) == 0 )
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
    return;
  }
  v6 = *&g_pGameRules[18].m_szQuestName[20];
  if ( this->m_bFlying )
  {
    if ( this->m_flKnockbackStartTime < 0.0 )
    {
      this->m_flKnockbackStartTime = v6;
      flNow = v6;
      this->m_flKnockbackEndTime = v6 + this->m_flKnockbackDuration;
      AbsOrigin = CBaseEntity::GetAbsOrigin(Container);
      y = this->m_vEndPos.y;
      z1 = this->m_vEndPos.z;
      this->m_vStartPos.x = AbsOrigin->x;
      x = y;
      this->m_vStartPos.y = AbsOrigin->y;
      this->m_vStartPos.z = this->m_flInitialHeight + AbsOrigin->z;
      vPosition = this->m_vEndPos.x;
      m_pEntity = CDOTA_Buff::GetParent(this)->m_pEntity;
      if ( m_pEntity != 0 )
        m_hSpawnGroup = m_pEntity->m_hSpawnGroup;
      else
        m_hSpawnGroup = 0;
      v29 = UTIL_TraceRayVerticalGroundHeight(m_hSpawnGroup, vPosition, x, 1000.0, -10000.0, z1, flNow, 0x7021u);
      v6 = flNow;
      this->m_vEndPos.z = v29;
    }
    if ( this->m_flKnockbackEndTime > v6 )
    {
      m_flKnockbackDuration = this->m_flKnockbackDuration;
      v14 = this->m_vStartPos.x;
      v15 = (v6 - this->m_flKnockbackStartTime) / m_flKnockbackDuration;
      v16 = this->m_vStartPos.y;
      v17 = this->m_vEndPos.x - v14;
      z = this->m_vStartPos.z;
      v19 = this->m_vEndPos.y - v16;
      m_flKnockbackHeight = this->m_flKnockbackHeight;
      v21 = this->m_vEndPos.z - z;
      vPos.x = (v15 * v17) + v14;
      vPos.y = (v15 * v19) + v16;
      v22 = 1.0 - (v15 + v15);
      *&entities.m_Size = v17 * (1.0 / m_flKnockbackDuration);
      *(&entities.m_Size + 1) = v19 * (1.0 / m_flKnockbackDuration);
      vPos.z = ((1.0 - (v22 * v22)) * m_flKnockbackHeight) + ((v15 * v21) + z);
      *&entities.m_Memory.m_pMemory = ((v22 * -2.0) * m_flKnockbackHeight) + (v21 * (1.0 / m_flKnockbackDuration));
      CBaseEntity::SetAbsOrigin(Container, &vPos);
      CBaseEntity::SetAbsVelocity(Container, &entities);
      CGridNav::DestroyTreesAroundPoint(&g_GridNav, iFlagFilter, v23, 0, -1);
      CDOTA_Buff::StartIntervalThink(this, v24);
      return;
    }
    entities.m_Size = 0;
    *(&entities.m_Size + 1) = 0;
    LODWORD(entities.m_Memory.m_pMemory) = 0;
    CBaseEntity::SetAbsVelocity(Container, &entities);
    CBaseEntity::SetAbsOrigin(Container, &this->m_vEndPos);
    this->m_bFlying = 0;
  }
  CDOTA_Buff::StartIntervalThink(this, v5);
  if ( this->m_bAutoUse )
  {
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    Parent = CDOTA_Buff::GetParent(this);
    vPositiona = CBaseEntity::GetAbsOrigin(Container);
    v8 = CDOTA_Buff::GetParent(this);
    FindUnitsInRadius(v8->m_iTeamNum.m_Value, vPositiona, Parent, 200.0, &entities, 3, 1, 0, 1, 0);
    if ( entities.m_Size <= 0 )
    {
LABEL_16:
      entities.m_Size = 0;
      if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
        return;
      goto LABEL_17;
    }
    v9 = 0;
    m_pMemory = entities.m_Memory.m_pMemory;
    while ( 1 )
    {
      if ( m_pMemory->m_Index + 2 > 1 )
      {
        v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
        if ( v11 != 0 )
        {
          v12 = &v11[m_pMemory->m_Index & 0x1FF];
          if ( v12 != 0 && m_pMemory->m_Index == v12->m_EHandle.m_Index )
          {
            m_pInstance = v12->m_pInstance;
            if ( v12->m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
            {
              break;
            }
          }
        }
      }
      ++v9;
      ++m_pMemory;
      if ( v9 == entities.m_Size )
        goto LABEL_16;
    }
    Inventory = CDOTA_BaseNPC::GetInventory(m_pInstance);
    CDOTA_UnitInventory::PickupItem(Inventory, Container);
    (*(v3->_vptr_IHandleEntity + 266))(v3);
    CDOTA_Buff::Destroy(this, 0, 0, 0);
    v32 = CDOTA_Buff::GetParent(this);
    UTIL_Remove(v32);
    UTIL_Remove(v3);
    entities.m_Size = 0;
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
LABEL_17:
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
      if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    }
  }
}


