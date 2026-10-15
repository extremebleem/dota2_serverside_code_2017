// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_misc_modifiers.cpp:56
class CDOTA_Modifier_Glyph_Reset : public CDOTA_Buff {
public:

	CDOTA_Modifier_Glyph_Reset();
	virtual bool IsHidden();
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_Glyph_Reset();

	// vtable[11] IsHidden
	// vtable[60] OnDestroy
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.cpp:694
class CDOTA_Modifier_FillerThinker : public CDOTA_Buff {
public:

private:

	bool bStarted;  // +0xbc0
	CDOTA_Modifier_FillerThinker();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	ModifierVariant_t OnOrder(const CModifierParams &);
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_FillerThinker();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[7] GetAttributes
	// sizeof = 3016
};

// src/game/shared/dota/dota_misc_modifiers.cpp:852
class CDOTA_Modifier_Filler_Buff_Icon : public CDOTA_Buff {
public:

	CDOTA_Modifier_Filler_Buff_Icon();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual int GetAttributes();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_Filler_Buff_Icon();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[7] GetAttributes
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.cpp:909
class CDOTA_Modifier_Filler_Heal_Aura : public CDOTA_Buff_Item {
public:

private:

	int radius;  // +0xba8
	CDOTA_Modifier_Filler_Heal_Aura();
	virtual void OnCreated(KeyValues *);
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraRadius();
	virtual ~CDOTA_Modifier_Filler_Heal_Aura();

	// vtable[57] OnCreated
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[41] GetAuraRadius
	// sizeof = 2992
};

// src/game/shared/dota/dota_misc_modifiers.cpp:961
class CDOTA_Modifier_Filler_Heal : public CDOTA_Buff {
public:

private:

	int hp_heal;  // +0xba8
	int mp_heal;  // +0xbac
	int hp_heal_growth;  // +0xbb0
	int mp_heal_growth;  // +0xbb4
	int hp_heal_pct;  // +0xbb8
	int mp_heal_pct;  // +0xbbc
	int tota_hp_per_second;  // +0xbc0
	int tota_mp_per_second;  // +0xbc4
	CDOTA_Modifier_Filler_Heal();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t GetModifierConstantManaRegen(const CModifierParams &);
	virtual ~CDOTA_Modifier_Filler_Heal();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 3016
};

// src/game/shared/dota/dota_misc_modifiers.cpp:1044
class CDOTA_Modifier_FountainInvulnerabilityBuff : public CDOTA_Buff {
public:

private:

	CDOTA_Modifier_FountainInvulnerabilityBuff();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual void OnIntervalThink();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual bool IsPurgable();
	virtual bool IsPermanent();
	ModifierVariant_t OnOrder(const CModifierParams &);
	ModifierVariant_t OnAttack(const CModifierParams &);
	ModifierVariant_t OnAttacked(const CModifierParams &);
	ModifierVariant_t OnAttackFail(const CModifierParams &);
	ModifierVariant_t OnUnitMoved(const CModifierParams &);
	ModifierVariant_t OnAbilityExecuted(const CModifierParams &);
	virtual int GetAttributes();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_FountainInvulnerabilityBuff();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[56] OnIntervalThink
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[14] IsPurgable
	// vtable[23] IsPermanent
	// vtable[7] GetAttributes
	// vtable[5] CheckState
	// sizeof = 3000
};

// src/game/shared/dota/dota_misc_modifiers.cpp:1558
class CDOTA_Modifier_Truesight_Aura : public CDOTA_Buff {
public:

private:

	int m_nAuraRadius;  // +0xba8
	CDOTA_Modifier_Truesight_Aura(CDOTA_Modifier_Truesight_Aura &);
	CDOTA_Modifier_Truesight_Aura(const CDOTA_Modifier_Truesight_Aura &);
	CDOTA_Modifier_Truesight_Aura();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Truesight_Aura();

	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[57] OnCreated
	// sizeof = 2992
};

// src/game/shared/dota/dota_misc_modifiers.cpp:1585
class CDOTA_Modifier_Tower_Truesight_Aura : public CDOTA_Modifier_Truesight_Aura {
public:

	CDOTA_Modifier_Tower_Truesight_Aura(CDOTA_Modifier_Tower_Truesight_Aura &);
	CDOTA_Modifier_Tower_Truesight_Aura(const CDOTA_Modifier_Tower_Truesight_Aura &);
	CDOTA_Modifier_Tower_Truesight_Aura();
	virtual int GetAuraRadius();
	virtual ~CDOTA_Modifier_Tower_Truesight_Aura();

	// vtable[41] GetAuraRadius
	// sizeof = 2992
};

// src/game/shared/dota/dota_misc_modifiers.cpp:1596
class CDOTA_Modifier_Fountain_Truesight_Aura : public CDOTA_Modifier_Truesight_Aura {
public:

	CDOTA_Modifier_Fountain_Truesight_Aura(CDOTA_Modifier_Fountain_Truesight_Aura &);
	CDOTA_Modifier_Fountain_Truesight_Aura(const CDOTA_Modifier_Fountain_Truesight_Aura &);
	CDOTA_Modifier_Fountain_Truesight_Aura();
	virtual int GetAuraRadius();
	virtual ~CDOTA_Modifier_Fountain_Truesight_Aura();

	// vtable[41] GetAuraRadius
	// sizeof = 2992
};

// src/game/shared/dota/dota_misc_modifiers.cpp:1609
class CDOTA_Modifier_Tower_Aura : public CDOTA_Buff {
public:

	CDOTA_Modifier_Tower_Aura(CDOTA_Modifier_Tower_Aura &);
	CDOTA_Modifier_Tower_Aura(const CDOTA_Modifier_Tower_Aura &);
	CDOTA_Modifier_Tower_Aura();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual ~CDOTA_Modifier_Tower_Aura();

	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.cpp:1628
class CDOTA_Modifier_Tower_Aura_Bonus : public CDOTA_Buff {
public:

private:

	int bonus_armor;  // +0xba8
	CDOTA_Modifier_Tower_Aura_Bonus();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual void OnIntervalThink();
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual const char * GetTexture();
	virtual ~CDOTA_Modifier_Tower_Aura_Bonus();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[56] OnIntervalThink
	// vtable[10] AddCustomTransmiterData
	// vtable[32] GetTexture
	// sizeof = 2992
};

// src/game/shared/dota/dota_misc_modifiers.cpp:2186
class CDOTA_Ability_BackdoorProtection : public CDOTABaseAbility {
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
	CDOTA_Ability_BackdoorProtection(CDOTA_Ability_BackdoorProtection &);
	CDOTA_Ability_BackdoorProtection(CDOTA_Ability_BackdoorProtection &);
	CDOTA_Ability_BackdoorProtection();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_BackdoorProtection();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/dota_misc_modifiers.cpp:2198
class CDOTA_Ability_BackdoorProtectionInBase : public CDOTABaseAbility {
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
	CDOTA_Ability_BackdoorProtectionInBase(CDOTA_Ability_BackdoorProtectionInBase &);
	CDOTA_Ability_BackdoorProtectionInBase(CDOTA_Ability_BackdoorProtectionInBase &);
	CDOTA_Ability_BackdoorProtectionInBase();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_BackdoorProtectionInBase();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/dota_misc_modifiers.cpp:2210
class CDOTA_Ability_FillerAbility : public CDOTABaseAbility {
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
	CDOTA_Ability_FillerAbility(CDOTA_Ability_FillerAbility &);
	CDOTA_Ability_FillerAbility(CDOTA_Ability_FillerAbility &);
	CDOTA_Ability_FillerAbility();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual ~CDOTA_Ability_FillerAbility();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[6] Precache
	// sizeof = 912
};

// src/game/shared/dota/dota_misc_modifiers.cpp:2233
class CDOTA_Modifier_BackdoorProtection : public CDOTA_Buff {
public:

private:

	bool m_bActivated;  // +0xba8

	int m_iHealthToRestore;  // +0xbac
	int radius;  // +0xbb0
	float activation_time;  // +0xbb4
	int regen_rate;  // +0xbb8

	CDOTA_Modifier_BackdoorProtection(CDOTA_Modifier_BackdoorProtection &);
	CDOTA_Modifier_BackdoorProtection(const CDOTA_Modifier_BackdoorProtection &);
	CDOTA_Modifier_BackdoorProtection();
	virtual bool IsHidden();
	virtual bool ShouldSendToClients();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool UseRadiusCheck();
	virtual void DeclareFunctions();
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	ModifierVariant_t GetModifierIncomingDamage_Percentage(const CModifierParams &);
	virtual bool AreValidUnitsInRange();
	virtual ~CDOTA_Modifier_BackdoorProtection();

	// vtable[11] IsHidden
	// vtable[8] ShouldSendToClients
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[89] UseRadiusCheck
	// vtable[65] DeclareFunctions
	// vtable[90] AreValidUnitsInRange
	// sizeof = 3032
};

// src/game/shared/dota/dota_misc_modifiers.cpp:2399
class CDOTA_Modifier_BackdoorProtectionInBase : public CDOTA_Modifier_BackdoorProtection {
public:

	CDOTA_Modifier_BackdoorProtectionInBase();
	virtual bool AreValidUnitsInRange();
	virtual bool UseRadiusCheck();
	virtual ~CDOTA_Modifier_BackdoorProtectionInBase();

	// vtable[90] AreValidUnitsInRange
	// vtable[89] UseRadiusCheck
	// sizeof = 3032
};

// src/game/shared/dota/dota_misc_modifiers.cpp:2424
class CDOTA_Modifier_BackdoorProtectionActive : public CDOTA_Buff {
public:

	CDOTA_Modifier_BackdoorProtectionActive(CDOTA_Modifier_BackdoorProtectionActive &);
	CDOTA_Modifier_BackdoorProtectionActive(const CDOTA_Modifier_BackdoorProtectionActive &);
	CDOTA_Modifier_BackdoorProtectionActive();
	virtual ~CDOTA_Modifier_BackdoorProtectionActive();

	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.cpp:2436
class CDOTA_Modifier_ProjectileVision : public CDOTA_Buff {
public:

	CDOTA_Modifier_ProjectileVision(CDOTA_Modifier_ProjectileVision &);
	CDOTA_Modifier_ProjectileVision(const CDOTA_Modifier_ProjectileVision &);
	CDOTA_Modifier_ProjectileVision();
	virtual bool IsHidden();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_ProjectileVision();

	// vtable[11] IsHidden
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.cpp:2462
class CDOTA_Modifier_ProjectileVisionOnMinimap : public CDOTA_Modifier_ProjectileVision {
public:

	CDOTA_Modifier_ProjectileVisionOnMinimap();
	virtual bool IsHidden();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_ProjectileVisionOnMinimap();

	// vtable[11] IsHidden
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.cpp:2632
class CDOTA_Modifier_Pet : public CDOTA_Buff {
public:

	CDOTA_Modifier_Pet();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeed_Absolute(const CModifierParams &);
	virtual ModifierVariant_t OnAbilityExecuted(const CModifierParams &);
	virtual ~CDOTA_Modifier_Pet();

	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeed_Absolute
	// vtable[90] OnAbilityExecuted
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.cpp:2727
class CDOTA_Modifier_Tutorial_Sleep : public CDOTA_Modifier_Stunned {
public:

	CDOTA_Modifier_Tutorial_Sleep();
	virtual const char * GetEffectName();
	virtual void DeclareFunctions();
	virtual bool IsHidden();
	virtual ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual ModifierVariant_t GetDisableAutoAttack(const CModifierParams &);
	virtual ~CDOTA_Modifier_Tutorial_Sleep();

	// vtable[67] GetEffectName
	// vtable[65] DeclareFunctions
	// vtable[11] IsHidden
	// vtable[89] OnTakeDamage
	// vtable[90] GetDisableAutoAttack
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.cpp:2771
class CDOTA_Modifier_Roquelaire : public CDOTA_Buff {
public:

	CDOTA_Modifier_Roquelaire();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Roquelaire();

	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.cpp:2941
class CDOTA_Modifier_HeroStatue : public CDOTA_Buff {
public:

private:

	uint32 m_unStatusEffectIndex;  // +0xba8
	EHANDLE m_hPedestal;  // +0xbac
	CDOTA_Modifier_HeroStatue();
	virtual void OnCreated(KeyValues *);
	virtual bool IsHidden();
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual int GetTeamSendMask();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierModelChange(const CModifierParams &);
	ModifierVariant_t OnModelChange(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual ~CDOTA_Modifier_HeroStatue();

	// vtable[57] OnCreated
	// vtable[11] IsHidden
	// vtable[10] AddCustomTransmiterData
	// vtable[86] GetTeamSendMask
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/dota_misc_modifiers.cpp:3046
class CDOTA_Modifier_HeroStatuePedestal : public CDOTA_Buff {
public:

	CDOTA_Modifier_HeroStatuePedestal();
	virtual int StatusEffectPriority();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_HeroStatuePedestal();

	// vtable[71] StatusEffectPriority
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.cpp:3075
class CDOTA_Modifier_BattleCupEffigy : public CDOTA_Buff {
public:

	CDOTA_Modifier_BattleCupEffigy(CDOTA_Modifier_BattleCupEffigy &);
	CDOTA_Modifier_BattleCupEffigy(const CDOTA_Modifier_BattleCupEffigy &);
	CDOTA_Modifier_BattleCupEffigy();
	virtual bool IsHidden();
	virtual int GetTeamSendMask();
	virtual ~CDOTA_Modifier_BattleCupEffigy();

	// vtable[11] IsHidden
	// vtable[86] GetTeamSendMask
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.cpp:3103
class CDOTA_Modifier_Hidden_NoDamage : public CDOTA_Buff {
public:

	CDOTA_Modifier_Hidden_NoDamage();
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t GetNoDamageModifier(const CModifierParams &);
	virtual ~CDOTA_Modifier_Hidden_NoDamage();

	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.cpp:3130
class CDOTA_Modifier_Tutorial_Disable_Healing : public CDOTA_Buff {
public:

	CDOTA_Modifier_Tutorial_Disable_Healing();
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t GetDisableHealing(const CModifierParams &);
	virtual ~CDOTA_Modifier_Tutorial_Disable_Healing();

	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.cpp:3155
class CDOTA_Modifier_Tutorial_SpeechBubble : public CDOTA_Buff {
public:

private:

	bool m_bFacePlayer;  // +0xba8
	CDOTA_Modifier_Tutorial_SpeechBubble();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Tutorial_SpeechBubble();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// vtable[11] IsHidden
	// sizeof = 2992
};

// src/game/shared/dota/dota_misc_modifiers.cpp:3210
class CDOTA_Modifier_Tutorial_ForceAnimation : public CDOTA_Buff {
public:

private:

	Activity m_nActivity;  // +0xba8
	bool m_bLoop;  // +0xbac
	bool m_bFacePlayer;  // +0xbad
	CDOTA_Modifier_Tutorial_ForceAnimation();
	virtual void OnCreated(KeyValues *);
	virtual bool IsDebuff();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual ~CDOTA_Modifier_Tutorial_ForceAnimation();

	// vtable[57] OnCreated
	// vtable[12] IsDebuff
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[10] AddCustomTransmiterData
	// sizeof = 2992
};

// src/game/shared/dota/dota_misc_modifiers.cpp:3304
class CDOTA_Modifier_Tutorial_HideNPC : public CDOTA_Buff {
public:

	bool m_bRemoveOnDeath;  // +0xba8
	CDOTA_Modifier_Tutorial_HideNPC();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool RemoveOnDeath();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Tutorial_HideNPC();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[54] RemoveOnDeath
	// vtable[5] CheckState
	// sizeof = 2992
};

// src/game/shared/dota/dota_misc_modifiers.cpp:3347
class CDOTA_Modifier_Tutorial_LowAttackPriority : public CDOTA_Buff {
public:

	CDOTA_Modifier_Tutorial_LowAttackPriority();
	virtual bool IsHidden();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Tutorial_LowAttackPriority();

	// vtable[11] IsHidden
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.cpp:3373
class CDOTA_Modifier_Tutorial_Roq_Teleport : public CDOTA_Buff {
public:

private:

	int m_nFXOrigin;  // +0xbc0
	int m_nFXDestination;  // +0xbc4
	char m_iszPortalLoopAppear[260];  // +0xbd8
	char m_iszPortalLoopDisappear[260];  // +0xcdc
	char m_iszHeroLoopAppear[260];  // +0xde0
	char m_iszHeroLoopDisappear[260];  // +0xee4
	CDOTA_Modifier_Tutorial_Roq_Teleport();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual ~CDOTA_Modifier_Tutorial_Roq_Teleport();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[10] AddCustomTransmiterData
	// sizeof = 4072
};

// src/game/shared/dota/dota_misc_modifiers.cpp:3612
class CDOTA_Modifier_Tutorial_LastHittable : public CDOTA_Buff {
public:

private:

	bool m_bIsFriend;  // +0xba8
	CDOTA_Modifier_Tutorial_LastHittable();
	virtual bool IsHidden();
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual void OnIntervalThink();
	float GetEffectControlPointValue();
	Color GetHighlightColor(float);
	virtual ~CDOTA_Modifier_Tutorial_LastHittable();

	// vtable[11] IsHidden
	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[56] OnIntervalThink
	// sizeof = 2992
};

// src/game/shared/dota/dota_misc_modifiers.cpp:3760
class CDOTA_Modifier_Creep_Slow : public CDOTA_Buff {
public:

	CDOTA_Modifier_Creep_Slow();
	virtual bool IsDebuff();
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Creep_Slow();

	// vtable[12] IsDebuff
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.cpp:3795
class CDOTA_Modifier_Creep_Haste : public CDOTA_Buff {
public:

	CDOTA_Modifier_Creep_Haste();
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Creep_Haste();

	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.cpp:3827
class CDOTA_Modifier_Buyback_Gold_Penalty : public CDOTA_Buff {
public:

	CDOTA_Modifier_Buyback_Gold_Penalty();
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual const char * GetTexture();
	virtual ~CDOTA_Modifier_Buyback_Gold_Penalty();

	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[32] GetTexture
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.cpp:3850
class CDOTA_Modifier_Gold_Bag_Launch : public CDOTA_Modifier_Knockback {
public:

private:

	int gold_amount;  // +0xc00
	CDOTA_Modifier_Gold_Bag_Launch();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsHidden();
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_Gold_Bag_Launch();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// vtable[11] IsHidden
	// vtable[67] GetEffectName
	// sizeof = 3080
};

// src/game/shared/dota/dota_misc_modifiers.cpp:3920
class CDOTA_Modifier_Provide_Vision : public CDOTA_Buff {
public:

	CDOTA_Modifier_Provide_Vision();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Provide_Vision();

	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/dota_misc_modifiers.cpp:3945
class CDOTA_Modifier_ScriptedMotionController : public CDOTA_Buff, public CHorizontalMotionController, public CVerticalMotionController {
public:

private:

	HSCRIPT m_hHorizontalControlFunction;  // +0xbc8
	HSCRIPT m_hVerticalControlFunction;  // +0xbd0
	HSCRIPT m_hOnDestroyFunction;  // +0xbd8
	ScriptVariant_t m_parameterTable;  // +0xbe0
	CDOTA_Modifier_ScriptedMotionController();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsHidden();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void UpdateVerticalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual void OnVerticalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsVerticalMotionValidToApply();
	virtual bool IsMotionController();
	virtual ~CDOTA_Modifier_ScriptedMotionController();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[11] IsHidden
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] UpdateVerticalMotion
	// vtable[91] OnHorizontalMotionInterrupted
	// vtable[92] OnVerticalMotionInterrupted
	// vtable[93] IsHorizontalMotionValidToApply
	// vtable[94] IsVerticalMotionValidToApply
	// vtable[21] IsMotionController
	// sizeof = 3056
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Modifier_Glyph_Reset::~CDOTA_Modifier_Glyph_Reset  (line 56, @0x0000000002652860, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Glyph_Reset::~CDOTA_Modifier_Glyph_Reset(CDOTA_Modifier_Glyph_Reset *const this)
{
  this->_vptr_CDOTA_Buff = &off_411B3F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Glyph_Reset::~CDOTA_Modifier_Glyph_Reset  (line 56, @0x0000000002652880, libserver.so)  // inlines: ~CDOTA_Modifier_Glyph_Reset
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Glyph_Reset::~CDOTA_Modifier_Glyph_Reset(CDOTA_Modifier_Glyph_Reset *const this)
{
  this->_vptr_CDOTA_Buff = &off_411B3F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Glyph_Reset::IsHidden  (line 61, @0x00000000026257d0, libserver.so)
bool __fastcall CDOTA_Modifier_Glyph_Reset::IsHidden(CDOTA_Modifier_Glyph_Reset *const this)
{
  return 1;
}


// CDOTA_Modifier_Glyph_Reset::OnDestroy  (line 69, @0x00000000025e7580, libserver.so)  // inlines: DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CDOTAGamerules::SetGlyphCooldown, UTIL_Remove
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Glyph_Reset::OnDestroy(CDOTA_Modifier_Glyph_Reset *const this)
{
  float v1; // xmm1_4
  uint32 m_Index; // eax
  CEntityInstance *m_pInstance; // rcx
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  uint32 v7; // eax
  CEntityInstance *v8; // rdi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx

  if ( g_pGameRules != 0 )
  {
    m_Index = this->m_hParent.m_Index;
    m_pInstance = 0;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[this->m_hParent.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
          m_pInstance = v6->m_pInstance;
      }
    }
    CDOTAGamerules::SetGlyphCooldown(g_pGameRules, HIBYTE(m_pInstance[7].m_CScriptComponent), 0.0, v1);
  }
  v7 = this->m_hParent.m_Index;
  v8 = 0;
  if ( v7 + 2 > 1 )
  {
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[this->m_hParent.m_Index & 0x1FF];
      if ( v10 != 0 && v7 == v10->m_EHandle.m_Index )
        v8 = v10->m_pInstance;
    }
  }
  UTIL_Remove(v8);
}


// CDOTA_Modifier_MagicImmune::CheckState  (line 85, @0x00000000025dddc0, libserver.so)  // inlines: Enable
// callers: CDOTA_Modifier_Huskar_Life_Break_Charge::CheckState
void __fastcall CDOTA_Modifier_MagicImmune::CheckState(
        CDOTA_Modifier_MagicImmune *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x200uLL;
  buffState->m_nDisabledStateMask &= ~0x200uLL;
}


// CDOTA_Modifier_MagicImmune::GetTexture  (line 92, @0x00000000025ddde0, libserver.so)
// strings: "modifier_magicimmune"
const char *__fastcall CDOTA_Modifier_MagicImmune::GetTexture(CDOTA_Modifier_MagicImmune *const this)
{
  return "modifier_magicimmune";
}


// CDOTA_Modifier_CameraFollow::OnCreated  (line 101, @0x00000000025dddf0, libserver.so)  // inlines: StartIntervalThink
void __fastcall CDOTA_Modifier_CameraFollow::OnCreated(CDOTA_Modifier_CameraFollow *const this, KeyValues *pKV)
{
  this->m_flThinkInterval = 0.1;
  this->m_flThinkTimeAccumulator = 0.0;
}


// CDOTA_Modifier_CameraFollow::OnIntervalThink  (line 114, @0x0000000002613d60, libserver.so)  // inlines: Destroy
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_CameraFollow::OnIntervalThink(CDOTA_Modifier_CameraFollow *const this)
{
  if ( (*(&this->CDOTA_Buff + 138) & 4) == 0 )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_CameraFollow::OnDestroy  (line 121, @0x00000000025dde10, libserver.so)
void __fastcall CDOTA_Modifier_CameraFollow::OnDestroy(CDOTA_Modifier_CameraFollow *const this)
{
  ;
}


// CDOTA_Modifier_MoveSpeed_Percentage::OnCreated  (line 143, @0x000000000260a500, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, Get, GetAbility, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator==<CBaseEntity>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
// callers: CDOTA_Modifier_Wisp_Tether_Haste::OnCreated
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_MoveSpeed_Percentage::OnCreated(
        CDOTA_Modifier_MoveSpeed_Percentage *const this,
        KeyValues *pKV)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  m_Index = this->m_hAbility.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAbility.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = &v3[this->m_hAbility.m_Index & 0x1FF]) != 0
    && m_Index == v4->m_EHandle.m_Index
    && v4->m_pInstance != 0 )
  {
    this->movespeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4->m_pInstance, "movespeed", -1, 0);
  }
  else
  {
    this->movespeed = 0;
  }
}


// CDOTA_Modifier_MoveSpeed_Percentage::DeclareFunctions  (line 150, @0x00000000025dde20, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_MoveSpeed_Percentage::DeclareFunctions(CDOTA_Modifier_MoveSpeed_Percentage *const this)
{
  this->m_Functions[13].__pfn = (&stru_10 + 697);
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_MoveSpeed_Percentage::GetModifierMoveSpeedBonus_Percentage  (line 157, @0x00000000025dde40, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_MoveSpeed_Percentage::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_MoveSpeed_Percentage *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->movespeed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Kill::OnDestroy  (line 166, @0x00000000025e6ee0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CDOTA_BaseNPC::MarkExpired, CDOTA_BaseNPC::ForceKill
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Kill::OnDestroy(CDOTA_Modifier_Kill *const this)
{
  uint32 m_Index; // eax
  CDOTA_BaseNPC *m_pInstance; // rdi
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  uint32 v6; // eax
  CDOTA_BaseNPC *v7; // rdi
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx

  m_Index = this->m_hParent.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hParent.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
        m_pInstance = v5->m_pInstance;
    }
  }
  CDOTA_BaseNPC::MarkExpired(m_pInstance);
  v6 = this->m_hParent.m_Index;
  v7 = 0;
  if ( v6 + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[this->m_hParent.m_Index & 0x1FF];
      if ( v9 != 0 && v6 == v9->m_EHandle.m_Index )
        v7 = v9->m_pInstance;
    }
  }
  CDOTA_BaseNPC::ForceKill(v7, 0);
}


// CDOTA_Modifier_Kill::DeclareFunctions  (line 174, @0x00000000025dde60, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Kill::GetUnitLifetimeFraction(CModifierParams const&)
void __fastcall CDOTA_Modifier_Kill::DeclareFunctions(CDOTA_Modifier_Kill *const this)
{
  this->m_Functions[157].__pfn = CDOTA_Modifier_Kill::GetUnitLifetimeFraction;
  this->m_Functions[157].__delta = 0;
}


// CDOTA_Modifier_Kill::GetUnitLifetimeFraction  (line 179, @0x00000000025dde80, libserver.so)  // inlines: DOTAGameRules, GetGameTime
ModifierVariant_t __fastcall CDOTA_Modifier_Kill::GetUnitLifetimeFraction(
        CDOTA_Modifier_Kill *const this,
        const CModifierParams *const params)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  float v5; // xmm0_4
  __int64 v6; // xmm2_8
  unsigned int v8; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  (*(this->_vptr_CDOTA_Buff + 30))(this, params);
  v4 = 0.0;
  if ( g_pGameRules != 0 )
    v4 = *&g_pGameRules[18].m_szQuestName[20];
  *&v8 = v3 - v4;
  v5 = (*(this->_vptr_CDOTA_Buff + 31))(this);
  v6 = v8;
  result.m_szVal = 0;
  *&v6 = *&v8 / v5;
  *&result.m_eType = (v6 << 32) | 1;
  return result;
}


// CDOTA_Modifier_Phased::CheckState  (line 188, @0x00000000025ddef0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Phased::CheckState(CDOTA_Modifier_Phased *const this, CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x2000000uLL;
  buffState->m_nDisabledStateMask &= ~0x2000000uLL;
}


// CDOTA_Modifier_Dominated::CheckState  (line 199, @0x00000000025ddf10, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Dominated::CheckState(
        CDOTA_Modifier_Dominated *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x20000000uLL;
  buffState->m_nDisabledStateMask &= ~0x20000000uLL;
}


// CDOTA_Modifier_TrueSight::OnCreated  (line 210, @0x00000000025eae40, libserver.so)  // inlines: Get, GetAbility, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator==<CBaseEntity>
// calls: CDOTA_BaseNPC::HasInvisibilityBuff, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetCaster, CDOTA_CombatLog::AddRevealInvisibleEvent
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_TrueSight::OnCreated(CDOTA_Modifier_TrueSight *const this, KeyValues *pKV)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *v6; // r13
  CDOTA_BaseNPC *Caster; // r12
  CDOTABaseAbility *v8; // rax

  m_Index = this->m_hParent.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hParent.m_Index & 0x1FF];
      if ( v5 != 0
        && m_Index == v5->m_EHandle.m_Index
        && v5->m_pInstance != 0
        && CDOTA_BaseNPC::HasInvisibilityBuff(v5->m_pInstance) )
      {
        v6 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
        Caster = CDOTA_Buff::GetCaster(this);
        v8 = CEntityHandle::operator CEntityInstance *(&this->m_hAbility);
        CDOTA_CombatLog::AddRevealInvisibleEvent(&g_DOTACombatLog, v8, Caster, v6);
      }
    }
  }
}


// CDOTA_Modifier_TrueSight::ProvidesTruesightForTeam  (line 221, @0x00000000025ddf30, libserver.so)
bool __fastcall CDOTA_Modifier_TrueSight::ProvidesTruesightForTeam(
        CDOTA_Modifier_TrueSight *const this,
        int nTeamNumber)
{
  return this->m_iTeam == nTeamNumber;
}


// CDOTA_Modifier_TrueSight::GetPriority  (line 226, @0x00000000025ddf40, libserver.so)
int __fastcall CDOTA_Modifier_TrueSight::GetPriority(CDOTA_Modifier_TrueSight *const this)
{
  return 2;
}


// CDOTA_Modifier_Stunned::CheckState  (line 235, @0x00000000025ddf50, libserver.so)  // inlines: Enable
// callers: CDOTA_Modifier_AncientApparition_ColdFeet_Freeze::CheckState, CDOTA_Modifier_FacelessVoid_TimeLock_Freeze::CheckState, CDOTA_Modifier_Invoker_ColdSnap_Freeze::CheckState, CDOTA_Modifier_Jakiro_IcePath_Stun::CheckState
void __fastcall CDOTA_Modifier_Stunned::CheckState(CDOTA_Modifier_Stunned *const this, CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x20uLL;
  buffState->m_nDisabledStateMask &= ~0x20uLL;
}


// CDOTA_Modifier_Stunned::DeclareFunctions  (line 243, @0x00000000025ddf60, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Stunned::GetOverrideAnimation(CModifierParams const&)
void __fastcall CDOTA_Modifier_Stunned::DeclareFunctions(CDOTA_Modifier_Stunned *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_Stunned::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
}


// CDOTA_Modifier_Stunned::GetOverrideAnimation  (line 250, @0x00000000025ddf80, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Stunned::GetOverrideAnimation(
        CDOTA_Modifier_Stunned *const this,
        const CModifierParams *const params)
{
  return 0x44BCA00000000001uLL;
}


// CDOTA_Modifier_Bashed::GetOverrideAnimation  (line 258, @0x00000000025ea1d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Bashed::GetOverrideAnimation(
        CDOTA_Modifier_Bashed *const this,
        const CModifierParams *const params)
{
  return 0x44BCA00000000001uLL;
}


// CDOTA_Modifier_Bashed::OnCreated  (line 263, @0x00000000025ddfa0, libserver.so)
void __fastcall CDOTA_Modifier_Bashed::OnCreated(CDOTA_Modifier_Bashed *const this, KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_Stunned::GetEffectName  (line 275, @0x00000000025ddfb0, libserver.so)
// strings: "particles/generic_gameplay/generic_stunned.vpcf"
const char *__fastcall CDOTA_Modifier_Stunned::GetEffectName(CDOTA_Modifier_Stunned *const this)
{
  return "particles/generic_gameplay/generic_stunned.vpcf";
}


// CDOTA_Modifier_Taunt::CheckState  (line 283, @0x00000000025ddfc0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Taunt::CheckState(CDOTA_Modifier_Taunt *const this, CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x20uLL;
  buffState->m_nDisabledStateMask &= ~0x20uLL;
}


// CDOTA_Modifier_Taunt::DeclareFunctions  (line 292, @0x00000000025ddfd0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Taunt::GetOverrideAnimation(CModifierParams const&)
void __fastcall CDOTA_Modifier_Taunt::DeclareFunctions(CDOTA_Modifier_Taunt *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_Taunt::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
}


// CDOTA_Modifier_Taunt::GetOverrideAnimation  (line 297, @0x00000000025ddff0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Taunt::GetOverrideAnimation(
        CDOTA_Modifier_Taunt *const this,
        const CModifierParams *const params)
{
  return 0x44C0000000000001uLL;
}


// CDOTA_Modifier_PersistentInvisibility::OnCreated  (line 306, @0x0000000002610ac0, libserver.so)  // inlines: DOTAGameRules, DotaRetrieveAbilityValue<float>, Get, GetAbility, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetLevelSpecialValueFor<float>, IndexToIdentity, IsValid, LookupEntity, StartIntervalThink, operator CEntityInstance*, operator==<CBaseEntity>
// calls: KeyValues::GetFloat, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// callers: CDOTA_Modifier_Riki_Permanent_Invisibility::OnCreated, CDOTA_Modifier_Broodmother_SpinWeb::OnCreated, CDOTA_Modifier_Lycan_SummonWolves_PermanentInvisibility::OnCreated, CDOTA_Modifier_GlimmerCape_Fade::OnCreated
// strings: "fadetime", "fade_delay"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_PersistentInvisibility::OnCreated(
        CDOTA_Modifier_PersistentInvisibility *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4
  CConcreteEntityList *v4; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  float v9; // xmm0_4

  v4 = CEntityHandle::gm_pEntityList;
  this->fade_delay = 0.0;
  m_Index = this->m_hAbility.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v7 = v4->m_pIdentityChunks[(LOWORD(this->m_hAbility.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[this->m_hAbility.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
        this->fade_delay = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8->m_pInstance, "fade_delay", -1, 0);
    }
  }
  this->m_flFadeTime = KeyValues::GetFloat(pKV, "fadetime", v2);
  v9 = 0.0;
  if ( g_pGameRules != 0 )
    v9 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_flLastActionTime = v9;
  this->m_flThinkInterval = 0.1;
  this->m_flThinkTimeAccumulator = 0.0;
}


// CDOTA_Modifier_PersistentInvisibility::OnRefresh  (line 317, @0x0000000002610a10, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, Get, GetAbility, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator==<CBaseEntity>
// calls: KeyValues::GetFloat, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// callers: CDOTA_Modifier_Riki_Permanent_Invisibility::OnRefresh, CDOTA_Modifier_Broodmother_SpinWeb::OnRefresh, CDOTA_Modifier_Lycan_SummonWolves_PermanentInvisibility::OnRefresh
// strings: "fadetime", "fade_delay"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_PersistentInvisibility::OnRefresh(
        CDOTA_Modifier_PersistentInvisibility *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx

  m_Index = this->m_hAbility.m_Index;
  if ( m_Index + 2 > 1
    && (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAbility.m_Index) >> 9) & 0x3F]) != 0
    && (v7 = &v6[this->m_hAbility.m_Index & 0x1FF]) != 0
    && m_Index == v7->m_EHandle.m_Index
    && v7->m_pInstance != 0 )
  {
    this->fade_delay = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7->m_pInstance, "fade_delay", -1, 0);
  }
  else
  {
    this->fade_delay = 0.0;
  }
  this->m_flFadeTime = KeyValues::GetFloat(pKV, "fadetime", v2);
}


// CDOTA_Modifier_PersistentInvisibility::OnDestroy  (line 324, @0x00000000025e6060, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CDOTA_BaseNPC::RemoveModifierByName
// callers: CDOTA_Modifier_Broodmother_SpinWeb::OnDestroy
// strings: "modifier_invisible"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_PersistentInvisibility::OnDestroy(CDOTA_Modifier_PersistentInvisibility *const this)
{
  uint32 m_Index; // eax
  CDOTA_BaseNPC *m_pInstance; // rdi
  unsigned __int16 v4; // cx
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx

  m_Index = this->m_hParent.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v4 = this->m_hParent.m_Index;
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v4 >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[v4 & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, "modifier_invisible");
}


// CDOTA_Modifier_PersistentInvisibility::OnIntervalThink  (line 331, @0x00000000025e8f10, libserver.so)  // inlines: DOTAGameRules, Get, GetAbility, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, SetBool, operator CEntityInstance*, operator==<CBaseEntity>
// calls: CDOTA_BaseNPC::FindModifierByName, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_Modifier_Riki_Permanent_Invisibility::OnIntervalThink, CDOTA_Modifier_Lycan_SummonWolves_PermanentInvisibility::OnIntervalThink
// strings: "modifier_invisible", "fadetime", "cancelattack", "subtle"
// globals: CEntityHandle::gm_pEntityList
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_Modifier_PersistentInvisibility::OnIntervalThink(
        CDOTA_Modifier_PersistentInvisibility *const this)
{
  float v1; // xmm1_4
  uint32 m_Index; // eax
  CDOTA_BaseNPC *m_pInstance; // rdi
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  float v7; // xmm1_4
  float v8; // xmm1_4
  CDOTABaseAbility *v9; // r12
  CDOTA_BaseNPC *v10; // rax
  __int64 v11; // [rsp-8h] [rbp-48h] BYREF
  unsigned __int64 kv_16; // [rsp+10h] [rbp-30h] OVERLAPPED

  v1 = 0.0;
  kv_16 = __readfsqword(0x28u);
  if ( g_pGameRules != 0 )
    v1 = *&g_pGameRules[18].m_szQuestName[20];
  if ( v1 > (this->m_flLastActionTime + this->fade_delay) )
  {
    m_Index = this->m_hParent.m_Index;
    m_pInstance = 0;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[this->m_hParent.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
          m_pInstance = v6->m_pInstance;
      }
    }
    if ( CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_invisible", 0) == 0 )
    {
      KeyValues::KeyValues(&v11, "modifier_invisible");
      KeyValues::SetFloat(&v11, "fadetime", v7);
      KeyValues::SetInt(&v11, "cancelattack", 0);
      KeyValues::SetInt(&v11, "subtle", 1);
      if ( (*(this->_vptr_CDOTA_Buff + 31))(this) > 0.0 )
      {
        (*(this->_vptr_CDOTA_Buff + 30))(this);
        v8 = 0.0;
        if ( g_pGameRules != 0 )
          v8 = *&g_pGameRules[18].m_szQuestName[20];
        KeyValues::SetFloat(&v11, "duration", v8);
      }
      v9 = CEntityHandle::operator CEntityInstance *(&this->m_hAbility);
      v10 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
      CDOTA_BaseNPC::AddNewModifier(v10, v10, v9, "modifier_invisible", &v11, 0);
      KeyValues::~KeyValues(&v11);
    }
  }
}


// CDOTA_Modifier_PersistentInvisibility::DeclareFunctions  (line 352, @0x00000000025de010, libserver.so)  // inlines: SetFunction
// callers: CDOTA_Modifier_Broodmother_SpinWeb::DeclareFunctions, CDOTA_Modifier_GlimmerCape_Fade::DeclareFunctions
void __fastcall CDOTA_Modifier_PersistentInvisibility::DeclareFunctions(
        CDOTA_Modifier_PersistentInvisibility *const this)
{
  this->m_Functions[128].__pfn = (&stru_10 + 697);
  this->m_Functions[128].__delta = 0;
  this->m_Functions[120].__pfn = (&stru_10 + 705);
  this->m_Functions[120].__delta = 0;
  this->m_Functions[130].__pfn = (&stru_10 + 713);
  this->m_Functions[130].__delta = 0;
  this->m_Functions[10].__pfn = (&stru_10 + 721);
  this->m_Functions[10].__delta = 0;
}


// CDOTA_Modifier_PersistentInvisibility::OnAbilityExecuted  (line 360, @0x00000000025e7170, libserver.so)  // inlines: DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_PersistentInvisibility::OnAbilityExecuted(
        CDOTA_Modifier_PersistentInvisibility *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // r9
  uint32 v7; // r8d
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  float v10; // xmm0_4

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[params->hunit.m_Index & 0x1FF];
  if ( v4 == 0 )
    return 1uLL;
  if ( m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 )
    return 1uLL;
  if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    return 1uLL;
  v7 = this->m_hParent.m_Index;
  if ( v7 + 2 <= 1 )
    return 1uLL;
  v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
  if ( v8 == 0 )
    return 1uLL;
  v9 = &v8[this->m_hParent.m_Index & 0x1FF];
  if ( v9 == 0 || v7 != v9->m_EHandle.m_Index || m_pInstance != v9->m_pInstance || params->bIgnoreInvis )
    return 1uLL;
  v10 = 0.0;
  if ( g_pGameRules != 0 )
    v10 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_flLastActionTime = v10;
  return 1uLL;
}


// CDOTA_Modifier_PersistentInvisibility::OnAttack  (line 370, @0x00000000025e7080, libserver.so)  // inlines: AttackerNPC, DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// callers: CDOTA_Modifier_Riki_Permanent_Invisibility::OnAttack
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_PersistentInvisibility::OnAttack(
        CDOTA_Modifier_PersistentInvisibility *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // r9
  uint32 v7; // r8d
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  float v10; // xmm0_4

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[params->hattacker.m_Index & 0x1FF];
  if ( v4 == 0 )
    return 1uLL;
  if ( m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 )
    return 1uLL;
  if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    return 1uLL;
  v7 = this->m_hParent.m_Index;
  if ( v7 + 2 <= 1 )
    return 1uLL;
  v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
  if ( v8 == 0 )
    return 1uLL;
  v9 = &v8[this->m_hParent.m_Index & 0x1FF];
  if ( v9 == 0 || v7 != v9->m_EHandle.m_Index || m_pInstance != v9->m_pInstance || params->bIgnoreInvis )
    return 1uLL;
  v10 = 0.0;
  if ( g_pGameRules != 0 )
    v10 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_flLastActionTime = v10;
  return 1uLL;
}


// CDOTA_Modifier_PersistentInvisibility::OnBreakInvisibility  (line 380, @0x00000000025e6fa0, libserver.so)  // inlines: DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_PersistentInvisibility::OnBreakInvisibility(
        CDOTA_Modifier_PersistentInvisibility *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r8
  uint32 v8; // esi
  CEntityIdentity *v9; // rax
  CEntityIdentity *v10; // rax
  float v11; // xmm0_4

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  m_Index_low = LOWORD(params->hunit.m_Index);
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
  if ( v4 == 0 )
    return 1uLL;
  v5 = &v4[m_Index_low & 0x1FF];
  if ( v5 == 0 )
    return 1uLL;
  if ( m_Index != v5->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 )
    return 1uLL;
  if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    return 1uLL;
  v8 = this->m_hParent.m_Index;
  if ( v8 + 2 <= 1 )
    return 1uLL;
  v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
  if ( v9 == 0 )
    return 1uLL;
  v10 = &v9[this->m_hParent.m_Index & 0x1FF];
  if ( v10 == 0 || v8 != v10->m_EHandle.m_Index || m_pInstance != v10->m_pInstance )
    return 1uLL;
  v11 = 0.0;
  if ( g_pGameRules != 0 )
    v11 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_flLastActionTime = v11;
  return 1uLL;
}


// CDOTA_Modifier_PersistentInvisibility::GetModifierPersistentInvisibility  (line 390, @0x00000000025de070, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_PersistentInvisibility::GetModifierPersistentInvisibility(
        CDOTA_Modifier_PersistentInvisibility *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_PersistentInvisibility::AddCustomTransmiterData  (line 396, @0x00000000025de090, libserver.so)  // inlines: set_fade_time, set_has_fade_time
void __fastcall CDOTA_Modifier_PersistentInvisibility::AddCustomTransmiterData(
        CDOTA_Modifier_PersistentInvisibility *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  float m_flFadeTime; // xmm0_4

  m_flFadeTime = this->m_flFadeTime;
  *(entry + 4) |= 0x1000u;
  *(entry + 18) = m_flFadeTime;
}


// CDOTA_Modifier_Invisible::OnCreated  (line 413, @0x00000000025e8d40, libserver.so)  // inlines: DOTAGameRules, Get, GetBool, GetGameTime, GetInstance, GetParent
// calls: KeyValues::GetInt, KeyValues::GetFloat, CEntityHandle::operator CEntityInstance*
// callers: CDOTA_Modifier_TemplarAssassin_Trap::OnCreated, CDOTA_Modifier_Brewmaster_WindWalk::OnCreated, CDOTA_Modifier_Clinkz_WindWalk::OnCreated, CDOTA_Modifier_Invoker_GhostWalk_Self::OnCreated, CDOTA_Modifier_Weaver_Shukuchi::OnCreated, CDOTA_Modifier_Nyx_Assassin_Vendetta::OnCreated, CDOTA_Modifier_Nyx_Assassin_Burrow::OnCreated, CDOTA_Modifier_Slark_ShadowDance::OnCreated, CDOTA_Modifier_Treant_NaturesGuise_Invis::OnCreated, CDOTA_Modifier_Techies_LandMine::OnCreated, CDOTA_Modifier_Techies_StasisTrap::OnCreated, CDOTA_Modifier_Techies_RemoteMine::OnCreated (15 total)
// strings: "subtle", "fadetime", "cancelattack"
void __fastcall CDOTA_Modifier_Invisible::OnCreated(CDOTA_Modifier_Invisible *const this, KeyValues *pKV)
{
  float v4; // xmm1_4
  float Float; // xmm0_4
  float v6; // xmm1_4
  CEntityInstance *v7; // rax

  this->m_bSubtle = KeyValues::GetInt(pKV, "subtle", 0) != 0;
  Float = KeyValues::GetFloat(pKV, "fadetime", v4);
  v6 = 0.0;
  this->m_flFadeTimeValue = Float;
  if ( g_pGameRules != 0 )
    v6 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_flFadeTime = Float + v6;
  if ( KeyValues::GetInt(pKV, "cancelattack", 1) != 0 )
  {
    v7 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
    (*(v7[39].m_hPrivateScope.m_hScope + 57))(&v7[39].m_hPrivateScope, 0);
  }
}


// CDOTA_Modifier_Invisible::CheckState  (line 430, @0x00000000025e2090, libserver.so)  // inlines: Enable
// callers: CDOTA_Modifier_TemplarAssassin_Trap::CheckState, CDOTA_Modifier_Invoker_GhostWalk_Self::CheckState, CDOTA_Modifier_BountyHunter_WindWalk::CheckState, CDOTA_Modifier_Brewmaster_WindWalk::CheckState, CDOTA_Modifier_Clinkz_WindWalk::CheckState, CDOTA_Modifier_Weaver_Shukuchi::CheckState, CDOTA_Modifier_Nyx_Assassin_Burrow::CheckState, CDOTA_Modifier_Nyx_Assassin_Vendetta::CheckState, CDOTA_Modifier_Slark_ShadowDance::CheckState, CDOTA_Modifier_Techies_StasisTrap::CheckState, CDOTA_Modifier_Techies_RemoteMine::CheckState, CDOTA_Modifier_Techies_Minefield_Sign_Aura::CheckState (17 total)
void __fastcall CDOTA_Modifier_Invisible::CheckState(
        CDOTA_Modifier_Invisible *const this,
        CDOTABuffState *const buffState)
{
  if ( (*(this->_vptr_CDOTA_Buff + 93))(this) != 0 )
  {
    buffState->m_nEnabledStateMask |= 0x80uLL;
    buffState->m_nDisabledStateMask &= ~0x80uLL;
  }
}


// CDOTA_Modifier_Invisible::DeclareFunctions  (line 440, @0x00000000025de0b0, libserver.so)  // inlines: SetFunction
// callers: CDOTA_Modifier_Brewmaster_WindWalk::DeclareFunctions, CDOTA_Modifier_Clinkz_WindWalk::DeclareFunctions, CDOTA_Modifier_Invoker_GhostWalk_Self::DeclareFunctions, CDOTA_Modifier_Weaver_Shukuchi::DeclareFunctions, CDOTA_Modifier_InvisibilityEdge_WindWalk::DeclareFunctions, CDOTA_Modifier_Silver_Edge_WindWalk::DeclareFunctions, CDOTA_Modifier_Smoke_Of_Deceit::DeclareFunctions
void __fastcall CDOTA_Modifier_Invisible::DeclareFunctions(CDOTA_Modifier_Invisible *const this)
{
  this->m_Functions[9].__pfn = (&stru_10 + 697);
  this->m_Functions[9].__delta = 0;
  this->m_Functions[128].__pfn = (&stru_10 + 705);
  this->m_Functions[128].__delta = 0;
  this->m_Functions[120].__pfn = (&stru_10 + 713);
  this->m_Functions[120].__delta = 0;
  this->m_Functions[130].__pfn = (&stru_10 + 721);
  this->m_Functions[130].__delta = 0;
}


// CDOTA_Modifier_Invisible::GetModifierInvisibilityLevel  (line 448, @0x00000000025e22a0, libserver.so)  // inlines: DOTAGameRules, GetGameTime
ModifierVariant_t __fastcall CDOTA_Modifier_Invisible::GetModifierInvisibilityLevel(
        CDOTA_Modifier_Invisible *const this,
        const CModifierParams *const params)
{
  float m_flFadeTimeValue; // xmm0_4
  float v3; // xmm3_4
  float v4; // xmm2_4
  __m128i v5; // xmm0
  ModifierVariant_t result; // 0:rax.16

  m_flFadeTimeValue = this->m_flFadeTimeValue;
  if ( m_flFadeTimeValue == 0.0 )
    return 0x3F80000000000001uLL;
  if ( g_pGameRules != 0 )
    v3 = *&g_pGameRules[18].m_szQuestName[20];
  else
    v3 = 0.0;
  v4 = (this->m_flFadeTime - v3) / m_flFadeTimeValue;
  v5 = 0x3F800000u;
  if ( (1.0 - v4) <= 0.0 )
    v5 = 0x3D4CCCCDu;
  else
    *v5.m128i_i32 = ((1.0 - v4) * 0.94999999) + 0.050000001;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v5) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Invisible::IsInvisible  (line 462, @0x00000000025de110, libserver.so)
// globals: CModifierParams::s_Default
bool __fastcall CDOTA_Modifier_Invisible::IsInvisible(CDOTA_Modifier_Invisible *const this)
{
  return COERCE_FLOAT((*(this->_vptr_CDOTA_Buff + 89))(this, &CModifierParams::s_Default) >> 32) >= 1.0;
}


// CDOTA_Modifier_Invisible::IsPurgable  (line 467, @0x00000000025de140, libserver.so)
bool __fastcall CDOTA_Modifier_Invisible::IsPurgable(CDOTA_Modifier_Invisible *const this)
{
  return 0;
}


// CDOTA_Modifier_Invisible::OnAbilityExecuted  (line 472, @0x0000000002613d80, libserver.so)  // inlines: Destroy, FStrEq, Get, GetAbility, GetAbilityName, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, Unit, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*, operator==<CBaseEntity>
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Buff::Destroy
// strings: "riki_permanent_invisibility"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Invisible::OnAbilityExecuted(
        CDOTA_Modifier_Invisible *const this,
        const CModifierParams *const params)
{
  CEntityInstance *m_pInstance; // r8
  uint32 m_Index; // eax
  __int64 v5; // rcx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  uint32 v8; // eax
  CEntityInstance *v9; // rdi
  CEntityIdentity *v10; // rdx
  CEntityInstance *v12; // rax
  const char **m_Id; // rax
  const char *v14; // rsi

  m_pInstance = 0;
  m_Index = params->hunit.m_Index;
  v5 = CEntityHandle::gm_pEntityList;
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
  v8 = this->m_hParent.m_Index;
  v9 = 0;
  v10 = (v8 + 2);
  if ( v10 > 1 )
  {
    v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
    if ( v10 != 0 )
    {
      v5 = 120LL * (this->m_hParent.m_Index & 0x1FF);
      v10 = (v10 + v5);
      if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
        v9 = v10->m_pInstance;
    }
  }
  if ( m_pInstance == v9 && (*(this->_vptr_CDOTA_Buff + 93))(this, params, v10, v5) != 0 && !params->bIgnoreInvis )
  {
    v12 = CEntityHandle::operator CEntityInstance *(&this->m_hAbility);
    if ( v12 == 0
      || (m_Id = v12[18].m_iszPrivateVScripts.u.m_Id) == 0
      || (v14 = *m_Id, *m_Id == 0)
      || v14 != "riki_permanent_invisibility" && strcmp(v14, "riki_permanent_invisibility") != 0 )
    {
      if ( (*(&this->CDOTA_Buff + 138) & 4) == 0 )
        CDOTA_Buff::Destroy(this, 0, 0, 0);
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Invisible::OnAttack  (line 488, @0x0000000002613ed0, libserver.so)  // inlines: Attacker, Destroy, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::Destroy
// callers: CDOTA_Modifier_Smoke_Of_Deceit::OnAttack
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Invisible::OnAttack(
        CDOTA_Modifier_Invisible *const this,
        const CModifierParams *const params)
{
  CEntityInstance *m_pInstance; // r8
  uint32 m_Index; // eax
  __int64 v5; // rcx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  uint32 v8; // eax
  CEntityInstance *v9; // rdi
  CEntityIdentity *v10; // rdx

  m_pInstance = 0;
  m_Index = params->hattacker.m_Index;
  v5 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[params->hattacker.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  v8 = this->m_hParent.m_Index;
  v9 = 0;
  v10 = (v8 + 2);
  if ( v10 > 1 )
  {
    v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
    if ( v10 != 0 )
    {
      v5 = 120LL * (this->m_hParent.m_Index & 0x1FF);
      v10 = (v10 + v5);
      if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
        v9 = v10->m_pInstance;
    }
  }
  if ( m_pInstance == v9
    && (*(this->_vptr_CDOTA_Buff + 93))(this, params, v10, v5) != 0
    && !params->bIgnoreInvis
    && (*(&this->CDOTA_Buff + 138) & 4) == 0 )
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
  return 1uLL;
}


// CDOTA_Modifier_Invisible::OnBreakInvisibility  (line 501, @0x0000000002613fe0, libserver.so)  // inlines: Destroy, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, Unit, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Invisible::OnBreakInvisibility(
        CDOTA_Modifier_Invisible *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityInstance *m_pInstance; // r8
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  uint32 v7; // eax
  CEntityInstance *v8; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx

  m_Index = params->hunit.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    m_Index_low = LOWORD(params->hunit.m_Index);
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[m_Index_low & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  v7 = this->m_hParent.m_Index;
  v8 = 0;
  if ( v7 + 2 > 1 )
  {
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[this->m_hParent.m_Index & 0x1FF];
      if ( v10 != 0 && v7 == v10->m_EHandle.m_Index )
        v8 = v10->m_pInstance;
    }
  }
  if ( m_pInstance != v8 || (*(&this->CDOTA_Buff + 138) & 4) != 0 )
    return 1uLL;
  CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


// CDOTA_Modifier_Invisible::AddCustomTransmiterData  (line 512, @0x00000000025de150, libserver.so)  // inlines: set_fade_time, set_has_fade_time, set_has_subtle, set_subtle
// callers: CDOTA_Modifier_Smoke_Of_Deceit::AddCustomTransmiterData
void __fastcall CDOTA_Modifier_Invisible::AddCustomTransmiterData(
        CDOTA_Modifier_Invisible *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  int v2; // eax
  int v3; // edx

  v2 = *(entry + 4);
  *(entry + 18) = LODWORD(this->m_flFadeTimeValue);
  v3 = v2;
  BYTE1(v2) |= 0x30u;
  BYTE1(v3) |= 0x10u;
  *(entry + 4) = v3;
  LOBYTE(v3) = this->m_bSubtle;
  *(entry + 4) = v2;
  *(entry + 132) = v3;
}


// CDOTA_Modifier_Followthrough::CheckState  (line 532, @0x00000000025de190, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Followthrough::CheckState(
        CDOTA_Modifier_Followthrough *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x20uLL;
  buffState->m_nDisabledStateMask &= ~0x20uLL;
}


// CDOTA_Modifier_Silence::CheckState  (line 543, @0x00000000025de1a0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Silence::CheckState(CDOTA_Modifier_Silence *const this, CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 8uLL;
  buffState->m_nDisabledStateMask &= ~8uLL;
}


// CDOTA_Modifier_Silence::GetEffectName  (line 552, @0x00000000025e5cd0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// strings: "particles/generic_gameplay/generic_silenced.vpcf"
// globals: CEntityHandle::gm_pEntityList
const char *__fastcall CDOTA_Modifier_Silence::GetEffectName(CDOTA_Modifier_Silence *const this)
{
  CEntityInstance *m_pInstance; // rdx
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx

  m_pInstance = 0;
  m_Index = this->m_hParent.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hParent.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
        m_pInstance = v4->m_pInstance;
    }
  }
  if ( SLOBYTE(m_pInstance[43].m_iszPrivateVScripts.u.m_Id) >= 0 || HIBYTE(m_pInstance[7].m_CScriptComponent) == 4 )
    return "particles/generic_gameplay/generic_silenced.vpcf";
  else
    return 0;
}


// CDOTA_Modifier_Invulnerable::CheckState  (line 561, @0x00000000025de1b0, libserver.so)  // inlines: Enable
// callers: CDOTA_Modifier_Terrorblade_Reflection_Invulnerability::CheckState
void __fastcall CDOTA_Modifier_Invulnerable::CheckState(
        CDOTA_Modifier_Invulnerable *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x800100uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFF7FFEFFLL;
}


// CDOTA_Modifier_Invulnerable::GetTexture  (line 568, @0x00000000025de1d0, libserver.so)
// strings: "modifier_invulnerable"
const char *__fastcall CDOTA_Modifier_Invulnerable::GetTexture(CDOTA_Modifier_Invulnerable *const this)
{
  return "modifier_invulnerable";
}


// CDOTA_Modifier_AttackImmune::CheckState  (line 577, @0x00000000025de1e0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_AttackImmune::CheckState(
        CDOTA_Modifier_AttackImmune *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 4uLL;
  buffState->m_nDisabledStateMask &= ~4uLL;
}


// CDOTA_Modifier_Disarmed::CheckState  (line 587, @0x00000000025de1f0, libserver.so)  // inlines: Enable
// callers: CDOTA_Modifier_Shredder_Chakram_Disarm::CheckState
void __fastcall CDOTA_Modifier_Disarmed::CheckState(
        CDOTA_Modifier_Disarmed *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 2uLL;
  buffState->m_nDisabledStateMask &= ~2uLL;
}


// CDOTA_Modifier_Rooted::CheckState  (line 597, @0x00000000025de200, libserver.so)  // inlines: Enable
// callers: CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Ensnare::CheckState, CDOTA_Modifier_NagaSiren_Ensnare::CheckState, CDOTA_Modifier_Techies_StasisTrap_Stunned::CheckState, CDOTA_Modifier_RodOfAtos_Debuff::CheckState
void __fastcall CDOTA_Modifier_Rooted::CheckState(CDOTA_Modifier_Rooted *const this, CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 1uLL;
  buffState->m_nDisabledStateMask &= ~1uLL;
}


// CDOTA_Modifier_NoHealthBar::CheckState  (line 607, @0x00000000025de210, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_NoHealthBar::CheckState(
        CDOTA_Modifier_NoHealthBar *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x800000uLL;
  buffState->m_nDisabledStateMask &= ~0x800000uLL;
}


// CDOTA_Modifier_FountainAuraBuff::DeclareFunctions  (line 622, @0x00000000025de230, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_FountainAuraBuff::GetModifierPercentageHealthRegen(CModifierParams const&), CDOTA_Modifier_FountainAuraBuff::GetModifierTotalPercentageManaRegen(CModifierParams const&), CDOTA_Modifier_FountainAuraBuff::GetModifierConstantManaRegen(CModifierParams const&)
void __fastcall CDOTA_Modifier_FountainAuraBuff::DeclareFunctions(CDOTA_Modifier_FountainAuraBuff *const this)
{
  this->m_Functions[57].__pfn = CDOTA_Modifier_FountainAuraBuff::GetModifierPercentageHealthRegen;
  this->m_Functions[57].__delta = 0;
  this->m_Functions[55].__delta = 0;
  this->m_Functions[55].__pfn = CDOTA_Modifier_FountainAuraBuff::GetModifierTotalPercentageManaRegen;
  this->m_Functions[52].__pfn = CDOTA_Modifier_FountainAuraBuff::GetModifierConstantManaRegen;
  this->m_Functions[52].__delta = 0;
}


// CDOTA_Modifier_FountainAuraBuff::CheckState  (line 629, @0x00000000025e5dd0, libserver.so)  // inlines: Enable, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_FountainAuraBuff::CheckState(
        CDOTA_Modifier_FountainAuraBuff *const this,
        CDOTABuffState *const buffState)
{
  CEntityInstance *m_pInstance; // rcx
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rdi
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx

  m_pInstance = 0;
  m_Index = this->m_hParent.m_Index;
  if ( m_Index + 2 > 1 )
  {
    m_Index_low = LOWORD(this->m_hParent.m_Index);
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[m_Index_low & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x100) != 0 )
  {
    buffState->m_nEnabledStateMask |= 0x100uLL;
    buffState->m_nDisabledStateMask &= ~0x100uLL;
  }
}


// CDOTA_Modifier_FountainAuraBuff::GetModifierPercentageHealthRegen  (line 639, @0x00000000025e2130, libserver.so)  // inlines: DOTAGameRules
// calls: CDOTAGamerules::GetGameModeEntity
ModifierVariant_t __fastcall CDOTA_Modifier_FountainAuraBuff::GetModifierPercentageHealthRegen(
        CDOTA_Modifier_FountainAuraBuff *const this,
        const CModifierParams *const params)
{
  CDOTABaseGameMode *GameModeEntity; // rax
  __m128i m_flFountainPercentageHealthRegen_low; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( g_pGameRules == 0 )
    return 0x4080000000000001uLL;
  GameModeEntity = CDOTAGamerules::GetGameModeEntity(g_pGameRules);
  if ( GameModeEntity == 0 )
    return 0x4080000000000001uLL;
  m_flFountainPercentageHealthRegen_low = LODWORD(GameModeEntity->m_flFountainPercentageHealthRegen);
  if ( *m_flFountainPercentageHealthRegen_low.m128i_i32 < 0.0 )
    return 0x4080000000000001uLL;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(m_flFountainPercentageHealthRegen_low) << 32) | 1;
  return result;
}


// CDOTA_Modifier_FountainAuraBuff::GetModifierTotalPercentageManaRegen  (line 651, @0x00000000025e2190, libserver.so)  // inlines: DOTAGameRules
// calls: CDOTAGamerules::GetGameModeEntity
ModifierVariant_t __fastcall CDOTA_Modifier_FountainAuraBuff::GetModifierTotalPercentageManaRegen(
        CDOTA_Modifier_FountainAuraBuff *const this,
        const CModifierParams *const params)
{
  CDOTABaseGameMode *GameModeEntity; // rax
  __m128i m_flFountainPercentageManaRegen_low; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( g_pGameRules == 0 )
    return 0x4080000000000001uLL;
  GameModeEntity = CDOTAGamerules::GetGameModeEntity(g_pGameRules);
  if ( GameModeEntity == 0 )
    return 0x4080000000000001uLL;
  m_flFountainPercentageManaRegen_low = LODWORD(GameModeEntity->m_flFountainPercentageManaRegen);
  if ( *m_flFountainPercentageManaRegen_low.m128i_i32 < 0.0 )
    return 0x4080000000000001uLL;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(m_flFountainPercentageManaRegen_low) << 32) | 1;
  return result;
}


// CDOTA_Modifier_FountainAuraBuff::GetModifierConstantManaRegen  (line 663, @0x00000000025e21f0, libserver.so)  // inlines: DOTAGameRules
// calls: CDOTAGamerules::GetGameModeEntity
ModifierVariant_t __fastcall CDOTA_Modifier_FountainAuraBuff::GetModifierConstantManaRegen(
        CDOTA_Modifier_FountainAuraBuff *const this,
        const CModifierParams *const params)
{
  CDOTABaseGameMode *GameModeEntity; // rax
  __m128i m_flFountainConstantManaRegen_low; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( g_pGameRules == 0 )
    return 0x4160000000000001uLL;
  GameModeEntity = CDOTAGamerules::GetGameModeEntity(g_pGameRules);
  if ( GameModeEntity == 0 )
    return 0x4160000000000001uLL;
  m_flFountainConstantManaRegen_low = LODWORD(GameModeEntity->m_flFountainConstantManaRegen);
  if ( *m_flFountainConstantManaRegen_low.m128i_i32 < 0.0 )
    return 0x4160000000000001uLL;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(m_flFountainConstantManaRegen_low) << 32) | 1;
  return result;
}


// CDOTA_Modifier_FountainAuraBuff::OnCreated  (line 675, @0x00000000025de290, libserver.so)
void __fastcall CDOTA_Modifier_FountainAuraBuff::OnCreated(CDOTA_Modifier_FountainAuraBuff *const this, KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_FillerThinker::~CDOTA_Modifier_FillerThinker  (line 694, @0x00000000026520f0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_FillerThinker::~CDOTA_Modifier_FillerThinker(CDOTA_Modifier_FillerThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_411F690;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->hCasterList);
  if ( (this->hCasterList.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->hCasterList.m_Memory),
        (this->hCasterList.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->hCasterList.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_FillerThinker::~CDOTA_Modifier_FillerThinker  (line 694, @0x0000000002652160, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_FillerThinker, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_FillerThinker::~CDOTA_Modifier_FillerThinker(CDOTA_Modifier_FillerThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_411F690;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->hCasterList);
  if ( (this->hCasterList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->hCasterList.m_Memory);
    if ( (this->hCasterList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->hCasterList.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_FillerThinker::IsHidden  (line 699, @0x00000000026257e0, libserver.so)
bool __fastcall CDOTA_Modifier_FillerThinker::IsHidden(CDOTA_Modifier_FillerThinker *const this)
{
  return 1;
}


// CDOTA_Modifier_FillerThinker::GetAttributes  (line 706, @0x00000000026257f0, libserver.so)
int __fastcall CDOTA_Modifier_FillerThinker::GetAttributes(CDOTA_Modifier_FillerThinker *const this)
{
  return this->m_iAttributes | 4;
}


// CDOTA_Modifier_FillerThinker::OnCreated  (line 717, @0x00000000025de2a0, libserver.so)  // inlines: StartIntervalThink
void __fastcall CDOTA_Modifier_FillerThinker::OnCreated(CDOTA_Modifier_FillerThinker *const this, KeyValues *pKV)
{
  this->bStarted = 0;
  this->m_flThinkInterval = 0.1;
  this->m_flThinkTimeAccumulator = 0.0;
}


// CDOTA_Modifier_FillerThinker::OnIntervalThink  (line 727, @0x000000000260cea0, libserver.so)  // inlines: CUtlSymbolLarge, DOTAGameRules, DotaRetrieveAbilityValue<float>, FStrEq, FastSqrt, Get, GetAbility, GetEntityIdentity, GetEntityName, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetParent, IndexToIdentity, IsValid, Length2D, LookupEntity, String, ToCStr, ToDOTABaseNPC, VectorSubtract, _V_strcmp, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator==<CBaseEntity>, operator[]
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_BaseNPC::RemoveModifierByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, CBaseEntity::StopSound, KeyValues::~KeyValues, CDOTA_BaseNPC::FindModifierByName (15 total)
// strings: "modifier_filler_buff_icon", "modifier_filler_heal_aura", "Shrine.Cast", "Shrine.Recharged", "bad_healer_6", "bad_healer_7" (10 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_FillerThinker::OnIntervalThink(CDOTA_Modifier_FillerThinker *const this)
{
  CDOTAGamerules *v2; // r12
  __int64 v3; // r12
  int v4; // ebx
  CHandle<CBaseEntity> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  const CBaseEntity *m_pInstance; // r15
  CEntityInstance *v11; // rax
  const CBaseEntity *v12; // rax
  const Vector *AbsOrigin; // rax
  CEntityInstance *v14; // rax
  CEntityInstance *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  CDOTABaseAbility *v17; // rax
  float v18; // xmm1_4
  CDOTABaseAbility *v19; // rbx
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  CBaseEntity *v22; // rax
  const char *m_pAsString; // rax
  EHANDLE *p_m_hAbility; // rbx
  CEntityInstance *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  CDOTABaseAbility *v27; // rbx
  CDOTA_BaseNPC *v28; // rax
  CEntityInstance *v29; // r14
  void (__fastcall *v30)(CEntityInstance *, float); // r15
  float PreGameDuration; // xmm0_4
  const Vector *duration; // [rsp+0h] [rbp-60h]
  EHANDLE *v33; // [rsp+8h] [rbp-58h]
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v35; // [rsp+28h] [rbp-38h]

  v35 = __readfsqword(0x28u);
  if ( this->bStarted )
    goto LABEL_27;
  v2 = g_pGameRules;
  if ( *&g_pGameRules[6].m_szQuestName[28] != 4 )
    goto LABEL_3;
  this->bStarted = 1;
  m_pAsString = CEntityHandle::operator CEntityInstance *(&this->m_hParent)->m_pEntity->m_name.u.m_pAsString;
  if ( m_pAsString != 0 )
  {
    if ( m_pAsString == "good_healer_6"
      || strcmp(m_pAsString, "good_healer_6") == 0
      || m_pAsString == "good_healer_7"
      || strcmp(m_pAsString, "good_healer_7") == 0
      || m_pAsString == "good_healer_8"
      || strcmp(m_pAsString, "good_healer_8") == 0
      || m_pAsString == "bad_healer_6" )
    {
LABEL_38:
      p_m_hAbility = &this->m_hAbility;
      v29 = CEntityHandle::operator CEntityInstance *(&this->m_hAbility);
      v30 = *(v29->_vptr_IHandleEntity + 241);
      PreGameDuration = CDOTAGamerules::GetPreGameDuration(v2);
      v30(v29, PreGameDuration);
      if ( !this->bStarted )
        goto LABEL_3;
      goto LABEL_28;
    }
  }
  else
  {
    m_pAsString = "";
  }
  if ( strcmp(m_pAsString, "bad_healer_6") == 0
    || m_pAsString == "bad_healer_7"
    || strcmp(m_pAsString, "bad_healer_7") == 0
    || m_pAsString == "bad_healer_8"
    || strcmp(m_pAsString, "bad_healer_8") == 0 )
  {
    goto LABEL_38;
  }
LABEL_27:
  p_m_hAbility = &this->m_hAbility;
LABEL_28:
  v25 = CEntityHandle::operator CEntityInstance *(p_m_hAbility);
  if ( (*(v25->_vptr_IHandleEntity + 245))(v25) != 0 )
  {
    v26 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
    if ( CDOTA_BaseNPC::FindModifierByName(v26, "modifier_filler_buff_icon", 0) == 0 )
    {
      KeyValues::KeyValues(&kv, "modifier_filler_buff_icon");
      v27 = CEntityHandle::operator CEntityInstance *(p_m_hAbility);
      v28 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
      CDOTA_BaseNPC::AddNewModifier(v28, v28, v27, "modifier_filler_buff_icon", &kv, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
LABEL_3:
  v3 = 0;
  v4 = 0;
  if ( this->hCasterList.m_Size > 0 )
  {
    v33 = &this->m_hAbility;
    while ( 1 )
    {
      v5 = &this->hCasterList.m_Memory.m_pMemory[v3];
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
              && m_pInstance->m_bIsDOTANPC
              && (*(m_pInstance->_vptr_IHandleEntity + 408))(v9->m_pInstance) != 0 )
            {
              v11 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
              if ( (*(v11->_vptr_IHandleEntity + 408))(v11) != 0 )
              {
                v12 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
                duration = CBaseEntity::GetAbsOrigin(v12);
                AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
                if ( fsqrt(
                       ((AbsOrigin->x - duration->x) * (AbsOrigin->x - duration->x))
                     + ((AbsOrigin->y - duration->y) * (AbsOrigin->y - duration->y))) < 250.0 )
                {
                  v14 = CEntityHandle::operator CEntityInstance *(v33);
                  if ( (*(v14->_vptr_IHandleEntity + 245))(v14) != 0 )
                    break;
                }
              }
            }
          }
        }
      }
      ++v4;
      ++v3;
      if ( this->hCasterList.m_Size <= v4 )
        return;
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->hCasterList);
    v15 = CEntityHandle::operator CEntityInstance *(v33);
    (*(v15->_vptr_IHandleEntity + 241))(v15, -1.0);
    v16 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
    CDOTA_BaseNPC::RemoveModifierByName(v16, "modifier_filler_buff_icon");
    v17 = CEntityHandle::operator CEntityInstance *(v33);
    if ( v17 != 0 )
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(v17, "duration", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_filler_heal_aura");
    KeyValues::SetFloat(&kv, "duration", v18);
    v19 = CEntityHandle::operator CEntityInstance *(v33);
    v20 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
    CDOTA_BaseNPC::AddNewModifier(v20, v20, v19, "modifier_filler_heal_aura", &kv, 0);
    v21 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
    DOTA_EmitSound(10, "Shrine.Cast", v21);
    v22 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
    CBaseEntity::StopSound(v22, "Shrine.Recharged");
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_FillerThinker::DeclareFunctions  (line 803, @0x00000000025de2d0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_FillerThinker::OnOrder(CModifierParams const&)
void __fastcall CDOTA_Modifier_FillerThinker::DeclareFunctions(CDOTA_Modifier_FillerThinker *const this)
{
  this->m_Functions[125].__pfn = CDOTA_Modifier_FillerThinker::OnOrder;
  this->m_Functions[125].__delta = 0;
}


// CDOTA_Modifier_FillerThinker::OnOrder  (line 812, @0x0000000002613600, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntryIndex, GetInstance, GetParent, GetSerialNumber, GrowMemory, IsRealHero, IsUnitMyParent, Set, Target, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator[]
// calls: CEntityHandle::operator CEntityInstance*, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::FindAndRemove, CUtlMemory<CHandle<CBaseEntity>, int>::Grow
ModifierVariant_t __fastcall CDOTA_Modifier_FillerThinker::OnOrder(
        CDOTA_Modifier_FillerThinker *const this,
        const CModifierParams *const params)
{
  CEntityInstance *v4; // rax
  CEntityInstance *v5; // r14
  CEntityInstance *v6; // rax
  CEntityInstance *v7; // rbx
  CEntityIdentity *m_pEntity; // rax
  __int16 v9; // cx
  CEntityIdentity *v11; // rdx
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  __int16 v14; // cx
  __int64 m_Size; // rbx
  int v16; // eax
  CHandle<CBaseEntity> *v17; // rax
  CHandle<CBaseEntity> src; // [rsp+0h] [rbp-30h] BYREF

  v4 = CEntityHandle::operator CEntityInstance *(&params->htarget);
  if ( v4 != 0 && BYTE3(v4[7]._vptr_IHandleEntity) != 0 )
    v5 = v4;
  else
    v5 = 0;
  v6 = CEntityHandle::operator CEntityInstance *(&params->hunit);
  v7 = v6;
  if ( v6 != 0
    && BYTE3(v6[7]._vptr_IHandleEntity) != 0
    && (v6[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
    && LOBYTE(v6[71].m_pEntity) == 0 )
  {
    if ( v5 == 0 || v5 != CEntityHandle::operator CEntityInstance *(&this->m_hParent) )
    {
      src.m_Index = -1;
      m_pEntity = v7->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v9 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v9 & 0x7FFF;
      }
LABEL_14:
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FindAndRemove(&this->hCasterList, &src);
      return 1uLL;
    }
    if ( params->nOrdertype != 2 )
    {
      src.m_Index = -1;
      v11 = v7->m_pEntity;
      if ( v11 != 0 )
      {
        v12 = 0x7FFF;
        if ( v11->m_EHandle.m_Index != -1 )
          v12 = v11->m_EHandle.m_Index & 0x7FFF;
        src.m_Index = (((v11->m_EHandle.m_Index >> 15) - (v11->m_flags & 1)) << 15) | v12 & 0x7FFF;
      }
      goto LABEL_14;
    }
    if ( HIBYTE(v7[7].m_CScriptComponent) == HIBYTE(v5[7].m_CScriptComponent) )
    {
      src.m_Index = -1;
      v13 = v7->m_pEntity;
      if ( v13 != 0 )
      {
        v14 = 0x7FFF;
        if ( v13->m_EHandle.m_Index != -1 )
          v14 = v13->m_EHandle.m_Index & 0x7FFF;
        src.m_Index = (((v13->m_EHandle.m_Index >> 15) - (v13->m_flags & 1)) << 15) | v14 & 0x7FFF;
      }
      m_Size = this->hCasterList.m_Size;
      v16 = this->hCasterList.m_Size;
      if ( m_Size == this->hCasterList.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->hCasterList.m_Memory, 1);
        v16 = this->hCasterList.m_Size;
      }
      this->hCasterList.m_Size = v16 + 1;
      v17 = &this->hCasterList.m_Memory.m_pMemory[m_Size];
      if ( v17 != 0 )
        v17->m_Index = src.m_Index;
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Filler_Buff_Icon::~CDOTA_Modifier_Filler_Buff_Icon  (line 852, @0x00000000026520a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Filler_Buff_Icon::~CDOTA_Modifier_Filler_Buff_Icon(
        CDOTA_Modifier_Filler_Buff_Icon *const this)
{
  this->_vptr_CDOTA_Buff = &off_411F9B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Filler_Buff_Icon::~CDOTA_Modifier_Filler_Buff_Icon  (line 852, @0x00000000026520c0, libserver.so)  // inlines: ~CDOTA_Modifier_Filler_Buff_Icon
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Filler_Buff_Icon::~CDOTA_Modifier_Filler_Buff_Icon(
        CDOTA_Modifier_Filler_Buff_Icon *const this)
{
  this->_vptr_CDOTA_Buff = &off_411F9B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Filler_Buff_Icon::IsHidden  (line 857, @0x0000000002625800, libserver.so)
bool __fastcall CDOTA_Modifier_Filler_Buff_Icon::IsHidden(CDOTA_Modifier_Filler_Buff_Icon *const this)
{
  return 1;
}


// CDOTA_Modifier_Filler_Buff_Icon::IsPurgable  (line 858, @0x0000000002625810, libserver.so)
bool __fastcall CDOTA_Modifier_Filler_Buff_Icon::IsPurgable(CDOTA_Modifier_Filler_Buff_Icon *const this)
{
  return 0;
}


// CDOTA_Modifier_Filler_Buff_Icon::GetAttributes  (line 859, @0x0000000002625820, libserver.so)
int __fastcall CDOTA_Modifier_Filler_Buff_Icon::GetAttributes(CDOTA_Modifier_Filler_Buff_Icon *const this)
{
  return this->m_iAttributes | 4;
}


// CDOTA_Modifier_Filler_Buff_Icon::OnCreated  (line 869, @0x00000000025e6270, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CBaseEntity::EmitSound
// strings: "Shrine.Recharged"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Filler_Buff_Icon::OnCreated(CDOTA_Modifier_Filler_Buff_Icon *const this, KeyValues *pKV)
{
  uint32 m_Index; // eax
  CBaseEntity *m_pInstance; // rdi
  unsigned __int16 v5; // cx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx

  m_Index = this->m_hParent.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v5 = this->m_hParent.m_Index;
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[v5 & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  CBaseEntity::EmitSound(m_pInstance, "Shrine.Recharged", 0.0, 0);
}


// CDOTA_Modifier_Filler_Buff_Icon::OnDestroy  (line 897, @0x00000000025e60d0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CBaseEntity::StopSound
// strings: "Shrine.Recharged"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Filler_Buff_Icon::OnDestroy(CDOTA_Modifier_Filler_Buff_Icon *const this)
{
  uint32 m_Index; // eax
  CBaseEntity *m_pInstance; // rdi
  unsigned __int16 v4; // cx
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx

  m_Index = this->m_hParent.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v4 = this->m_hParent.m_Index;
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v4 >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[v4 & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  CBaseEntity::StopSound(m_pInstance, "Shrine.Recharged");
}


// CDOTA_Modifier_Filler_Heal_Aura::~CDOTA_Modifier_Filler_Heal_Aura  (line 909, @0x0000000002652050, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Filler_Heal_Aura::~CDOTA_Modifier_Filler_Heal_Aura(
        CDOTA_Modifier_Filler_Heal_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Filler_Heal_Aura::~CDOTA_Modifier_Filler_Heal_Aura  (line 909, @0x0000000002652070, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Filler_Heal_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Filler_Heal_Aura::~CDOTA_Modifier_Filler_Heal_Aura(
        CDOTA_Modifier_Filler_Heal_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Filler_Heal_Aura::IsAura  (line 916, @0x0000000002625830, libserver.so)
bool __fastcall CDOTA_Modifier_Filler_Heal_Aura::IsAura(CDOTA_Modifier_Filler_Heal_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Filler_Heal_Aura::GetModifierAura  (line 917, @0x0000000002625840, libserver.so)
// strings: "modifier_filler_heal"
const char *__fastcall CDOTA_Modifier_Filler_Heal_Aura::GetModifierAura(CDOTA_Modifier_Filler_Heal_Aura *const this)
{
  return "modifier_filler_heal";
}


// CDOTA_Modifier_Filler_Heal_Aura::GetAuraSearchTeam  (line 919, @0x0000000002625850, libserver.so)
int __fastcall CDOTA_Modifier_Filler_Heal_Aura::GetAuraSearchTeam(CDOTA_Modifier_Filler_Heal_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Filler_Heal_Aura::GetAuraSearchType  (line 920, @0x0000000002625860, libserver.so)
int __fastcall CDOTA_Modifier_Filler_Heal_Aura::GetAuraSearchType(CDOTA_Modifier_Filler_Heal_Aura *const this)
{
  return 19;
}


// CDOTA_Modifier_Filler_Heal_Aura::GetAuraRadius  (line 921, @0x0000000002625870, libserver.so)
int __fastcall CDOTA_Modifier_Filler_Heal_Aura::GetAuraRadius(CDOTA_Modifier_Filler_Heal_Aura *const this)
{
  return this->radius;
}


// CDOTA_Modifier_Filler_Heal_Aura::OnCreated  (line 931, @0x000000000260ad70, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, Get, GetAbility, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator==<CBaseEntity>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Filler_Heal_Aura::OnCreated(CDOTA_Modifier_Filler_Heal_Aura *const this, KeyValues *pKV)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  m_Index = this->m_hAbility.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAbility.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = &v3[this->m_hAbility.m_Index & 0x1FF]) != 0
    && m_Index == v4->m_EHandle.m_Index
    && v4->m_pInstance != 0 )
  {
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4->m_pInstance, "radius", -1, 0);
  }
  else
  {
    this->radius = 0;
  }
}


// CDOTA_Modifier_Filler_Heal::~CDOTA_Modifier_Filler_Heal  (line 961, @0x0000000002651fb0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Filler_Heal::~CDOTA_Modifier_Filler_Heal(CDOTA_Modifier_Filler_Heal *const this)
{
  this->_vptr_CDOTA_Buff = &off_411FFF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Filler_Heal::~CDOTA_Modifier_Filler_Heal  (line 961, @0x0000000002651fd0, libserver.so)  // inlines: ~CDOTA_Modifier_Filler_Heal
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Filler_Heal::~CDOTA_Modifier_Filler_Heal(CDOTA_Modifier_Filler_Heal *const this)
{
  this->_vptr_CDOTA_Buff = &off_411FFF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Filler_Heal::OnCreated  (line 985, @0x000000000261a710, libserver.so)  // inlines: DOTAGameRules, FStrEq, Get, GetAbility, GetInstance, GetParent, GetUnitName, String, ToCStr, _V_strcmp, operator==<CBaseEntity>
// calls: CEntityHandle::operator CEntityInstance*, DotaRetrieveAbilityValue<int>, CDOTAGamerules::GetDOTATime, CDOTA_Buff::GetCaster, strcmp, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::AddParticle
// strings: "hp_heal", "mp_heal", "hp_heal_growth", "mp_heal_growth", "hp_heal_pct", "mp_heal_pct" (10 total)
void __fastcall CDOTA_Modifier_Filler_Heal::OnCreated(CDOTA_Modifier_Filler_Heal *const this, KeyValues *pKV)
{
  EHANDLE *p_m_hAbility; // r12
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  float hp_heal_growth; // xmm2_4
  CDOTAGamerules *v11; // rdi
  float DOTATime; // xmm0_4
  CDOTAGamerules *v13; // rdi
  float v14; // xmm1_4
  float v15; // xmm0_4
  int hp_heal_pct; // r13d
  CEntityInstance *v17; // rax
  CDOTA_BaseNPC *Caster; // rax
  const char *m_pAsString; // r13
  CEntityInstance *v20; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  const char *v22; // rsi
  CBaseEntity *v23; // rcx
  CEntityInstance *v24; // r12
  int Particle; // eax
  float v26; // [rsp+Ch] [rbp-24h]
  float mp_heal_growth; // [rsp+Ch] [rbp-24h]

  p_m_hAbility = &this->m_hAbility;
  v4 = CEntityHandle::operator CEntityInstance *(&this->m_hAbility);
  DotaRetrieveAbilityValue<int>(v4, &this->hp_heal, "hp_heal");
  v5 = CEntityHandle::operator CEntityInstance *(p_m_hAbility);
  DotaRetrieveAbilityValue<int>(v5, &this->mp_heal, "mp_heal");
  v6 = CEntityHandle::operator CEntityInstance *(p_m_hAbility);
  DotaRetrieveAbilityValue<int>(v6, &this->hp_heal_growth, "hp_heal_growth");
  v7 = CEntityHandle::operator CEntityInstance *(p_m_hAbility);
  DotaRetrieveAbilityValue<int>(v7, &this->mp_heal_growth, "mp_heal_growth");
  v8 = CEntityHandle::operator CEntityInstance *(p_m_hAbility);
  DotaRetrieveAbilityValue<int>(v8, &this->hp_heal_pct, "hp_heal_pct");
  v9 = CEntityHandle::operator CEntityInstance *(p_m_hAbility);
  DotaRetrieveAbilityValue<int>(v9, &this->mp_heal_pct, "mp_heal_pct");
  hp_heal_growth = this->hp_heal_growth;
  this->tota_hp_per_second = this->hp_heal;
  v11 = g_pGameRules;
  v26 = hp_heal_growth;
  this->tota_mp_per_second = this->mp_heal;
  DOTATime = CDOTAGamerules::GetDOTATime(v11, 0, 0, 0.0);
  v13 = g_pGameRules;
  v14 = this->tota_hp_per_second + ((DOTATime * v26) / 60.0);
  mp_heal_growth = this->mp_heal_growth;
  this->tota_hp_per_second = v14;
  v15 = CDOTAGamerules::GetDOTATime(v13, 0, 0, 0.0);
  hp_heal_pct = this->hp_heal_pct;
  this->tota_mp_per_second = (this->tota_mp_per_second + ((v15 * mp_heal_growth) / 60.0));
  v17 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
  this->tota_hp_per_second = (this->tota_hp_per_second
                            + (((*(v17->_vptr_IHandleEntity + 156))(v17) * hp_heal_pct) / 100.0));
  this->tota_mp_per_second = (this->tota_mp_per_second
                            + ((this->mp_heal_pct
                              * *&CEntityHandle::operator CEntityInstance *(&this->m_hParent)[44].m_worldGroupId.m_nHashCode)
                             / 100.0));
  Caster = CDOTA_Buff::GetCaster(this);
  m_pAsString = Caster->m_iszUnitName.m_Value.u.m_pAsString;
  if ( m_pAsString != 0 )
  {
    if ( m_pAsString == "npc_dota_goodguys_healers"
      || strcmp(Caster->m_iszUnitName.m_Value.u.m_pAsString, "npc_dota_goodguys_healers") == 0 )
    {
      v24 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
      ParticleManager = GetParticleManager();
      v22 = "particles/world_shrine/radiant_shrine_regen.vpcf";
      v23 = v24;
      goto LABEL_8;
    }
    if ( m_pAsString == "npc_dota_badguys_healers" || strcmp(m_pAsString, "npc_dota_badguys_healers") == 0 )
    {
      v20 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
      ParticleManager = GetParticleManager();
      v22 = "particles/world_shrine/dire_shrine_regen.vpcf";
      v23 = v20;
LABEL_8:
      Particle = CDOTA_ParticleManager::CreateParticle(ParticleManager, v22, 1, v23, 0, 0);
      CDOTA_Buff::AddParticle(this, Particle, 0, 0, -1, 0, 0);
    }
  }
}


// CDOTA_Modifier_Filler_Heal::DeclareFunctions  (line 1018, @0x00000000025de2f0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Filler_Heal::GetModifierConstantHealthRegen(CModifierParams const&), CDOTA_Modifier_Filler_Heal::GetModifierConstantManaRegen(CModifierParams const&)
void __fastcall CDOTA_Modifier_Filler_Heal::DeclareFunctions(CDOTA_Modifier_Filler_Heal *const this)
{
  this->m_Functions[56].__pfn = CDOTA_Modifier_Filler_Heal::GetModifierConstantHealthRegen;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[53].__delta = 0;
  this->m_Functions[53].__pfn = CDOTA_Modifier_Filler_Heal::GetModifierConstantManaRegen;
}


// CDOTA_Modifier_Filler_Heal::GetModifierConstantHealthRegen  (line 1026, @0x00000000025de330, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Filler_Heal::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Filler_Heal *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->tota_hp_per_second;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Filler_Heal::GetModifierConstantManaRegen  (line 1033, @0x00000000025de350, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Filler_Heal::GetModifierConstantManaRegen(
        CDOTA_Modifier_Filler_Heal *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->tota_mp_per_second;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_FountainInvulnerabilityBuff::~CDOTA_Modifier_FountainInvulnerabilityBuff  (line 1044, @0x0000000002651f60, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_FountainInvulnerabilityBuff::~CDOTA_Modifier_FountainInvulnerabilityBuff(
        CDOTA_Modifier_FountainInvulnerabilityBuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4120310;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_FountainInvulnerabilityBuff::~CDOTA_Modifier_FountainInvulnerabilityBuff  (line 1044, @0x0000000002651f80, libserver.so)  // inlines: ~CDOTA_Modifier_FountainInvulnerabilityBuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_FountainInvulnerabilityBuff::~CDOTA_Modifier_FountainInvulnerabilityBuff(
        CDOTA_Modifier_FountainInvulnerabilityBuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4120310;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_FountainInvulnerabilityBuff::GetStatusEffectName  (line 1053, @0x0000000002625880, libserver.so)
// strings: "particles/status_fx/status_effect_siren_song.vpcf"
const char *__fastcall CDOTA_Modifier_FountainInvulnerabilityBuff::GetStatusEffectName(
        CDOTA_Modifier_FountainInvulnerabilityBuff *const this)
{
  return "particles/status_fx/status_effect_siren_song.vpcf";
}


// CDOTA_Modifier_FountainInvulnerabilityBuff::StatusEffectPriority  (line 1054, @0x0000000002625890, libserver.so)
int __fastcall CDOTA_Modifier_FountainInvulnerabilityBuff::StatusEffectPriority(
        CDOTA_Modifier_FountainInvulnerabilityBuff *const this)
{
  return 20000;
}


// CDOTA_Modifier_FountainInvulnerabilityBuff::IsPurgable  (line 1055, @0x00000000026258a0, libserver.so)
bool __fastcall CDOTA_Modifier_FountainInvulnerabilityBuff::IsPurgable(
        CDOTA_Modifier_FountainInvulnerabilityBuff *const this)
{
  return 0;
}


// CDOTA_Modifier_FountainInvulnerabilityBuff::IsPermanent  (line 1056, @0x00000000026258b0, libserver.so)
bool __fastcall CDOTA_Modifier_FountainInvulnerabilityBuff::IsPermanent(
        CDOTA_Modifier_FountainInvulnerabilityBuff *const this)
{
  return 1;
}


// CDOTA_Modifier_FountainInvulnerabilityBuff::GetAttributes  (line 1065, @0x00000000026258c0, libserver.so)
int __fastcall CDOTA_Modifier_FountainInvulnerabilityBuff::GetAttributes(
        CDOTA_Modifier_FountainInvulnerabilityBuff *const this)
{
  return 31;
}


// CDOTA_Modifier_FountainInvulnerabilityBuff::OnCreated  (line 1077, @0x00000000025e6430, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, StartIntervalThink, operator CEntityInstance*, operator=
// calls: CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_FountainInvulnerabilityBuff::OnCreated(
        CDOTA_Modifier_FountainInvulnerabilityBuff *const this,
        KeyValues *pKV)
{
  uint32 m_Index; // eax
  const CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx

  this->m_flThinkInterval = 0.1;
  this->m_flThinkTimeAccumulator = 0.0;
  m_Index = this->m_hParent.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[this->m_hParent.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  this->m_vecPosition = *CBaseEntity::GetAbsOrigin(m_pInstance);
}


// CDOTA_Modifier_FountainInvulnerabilityBuff::CheckState  (line 1087, @0x00000000025de370, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_FountainInvulnerabilityBuff::CheckState(
        CDOTA_Modifier_FountainInvulnerabilityBuff *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x80000104uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFF7FFFFEFBLL;
}


// CDOTA_Modifier_FountainInvulnerabilityBuff::DeclareFunctions  (line 1098, @0x00000000025de3a0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_FountainInvulnerabilityBuff::OnOrder(CModifierParams const&), CDOTA_Modifier_FountainInvulnerabilityBuff::OnAttack(CModifierParams const&), CDOTA_Modifier_FountainInvulnerabilityBuff::OnAttackFail(CModifierParams const&), CDOTA_Modifier_FountainInvulnerabilityBuff::OnUnitMoved(CModifierParams const&), CDOTA_Modifier_FountainInvulnerabilityBuff::OnAbilityExecuted(CModifierParams const&)
void __fastcall CDOTA_Modifier_FountainInvulnerabilityBuff::DeclareFunctions(
        CDOTA_Modifier_FountainInvulnerabilityBuff *const this)
{
  this->m_Functions[125].__pfn = CDOTA_Modifier_FountainInvulnerabilityBuff::OnOrder;
  this->m_Functions[125].__delta = 0;
  this->m_Functions[120].__delta = 0;
  this->m_Functions[120].__pfn = CDOTA_Modifier_FountainInvulnerabilityBuff::OnAttack;
  this->m_Functions[122].__pfn = CDOTA_Modifier_FountainInvulnerabilityBuff::OnAttackFail;
  this->m_Functions[126].__pfn = CDOTA_Modifier_FountainInvulnerabilityBuff::OnUnitMoved;
  this->m_Functions[122].__delta = 0;
  this->m_Functions[126].__delta = 0;
  this->m_Functions[128].__pfn = CDOTA_Modifier_FountainInvulnerabilityBuff::OnAbilityExecuted;
  this->m_Functions[128].__delta = 0;
}


// CDOTA_Modifier_FountainInvulnerabilityBuff::OnOrder  (line 1111, @0x00000000026140c0, libserver.so)  // inlines: Destroy, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_FountainInvulnerabilityBuff::OnOrder(
        CDOTA_Modifier_FountainInvulnerabilityBuff *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // r9
  uint32 v7; // r8d
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  unsigned int v10; // ecx

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[params->hunit.m_Index & 0x1FF];
  if ( v4 == 0 )
    return 1uLL;
  if ( m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 )
    return 1uLL;
  if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    return 1uLL;
  v7 = this->m_hParent.m_Index;
  if ( v7 + 2 <= 1 )
    return 1uLL;
  v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
  if ( v8 == 0 )
    return 1uLL;
  v9 = &v8[this->m_hParent.m_Index & 0x1FF];
  if ( v9 == 0 )
    return 1uLL;
  if ( v7 != v9->m_EHandle.m_Index )
    return 1uLL;
  if ( m_pInstance != v9->m_pInstance )
    return 1uLL;
  v10 = params->nOrdertype - 1;
  if ( v10 > 0x1E || ((1LL << v10) & 0x5881BC3F) == 0 || (*(&this->CDOTA_Buff + 138) & 4) != 0 )
    return 1uLL;
  CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


// CDOTA_Modifier_FountainInvulnerabilityBuff::OnAbilityExecuted  (line 1143, @0x00000000026141c0, libserver.so)  // inlines: Destroy, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_FountainInvulnerabilityBuff::OnAbilityExecuted(
        CDOTA_Modifier_FountainInvulnerabilityBuff *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r8
  uint32 v8; // esi
  CEntityIdentity *v9; // rax
  CEntityIdentity *v10; // rax

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  m_Index_low = LOWORD(params->hunit.m_Index);
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
  if ( v4 == 0 )
    return 1uLL;
  v5 = &v4[m_Index_low & 0x1FF];
  if ( v5 == 0 )
    return 1uLL;
  if ( m_Index != v5->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 )
    return 1uLL;
  if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    return 1uLL;
  v8 = this->m_hParent.m_Index;
  if ( v8 + 2 <= 1 )
    return 1uLL;
  v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
  if ( v9 == 0 )
    return 1uLL;
  v10 = &v9[this->m_hParent.m_Index & 0x1FF];
  if ( v10 == 0
    || v8 != v10->m_EHandle.m_Index
    || m_pInstance != v10->m_pInstance
    || (*(&this->CDOTA_Buff + 138) & 4) != 0 )
  {
    return 1uLL;
  }
  CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


// CDOTA_Modifier_FountainInvulnerabilityBuff::OnUnitMoved  (line 1155, @0x00000000026142a0, libserver.so)  // inlines: Destroy, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_FountainInvulnerabilityBuff::OnUnitMoved(
        CDOTA_Modifier_FountainInvulnerabilityBuff *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r8
  uint32 v8; // esi
  CEntityIdentity *v9; // rax
  CEntityIdentity *v10; // rax

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  m_Index_low = LOWORD(params->hunit.m_Index);
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
  if ( v4 == 0 )
    return 1uLL;
  v5 = &v4[m_Index_low & 0x1FF];
  if ( v5 == 0 )
    return 1uLL;
  if ( m_Index != v5->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 )
    return 1uLL;
  if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    return 1uLL;
  v8 = this->m_hParent.m_Index;
  if ( v8 + 2 <= 1 )
    return 1uLL;
  v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
  if ( v9 == 0 )
    return 1uLL;
  v10 = &v9[this->m_hParent.m_Index & 0x1FF];
  if ( v10 == 0
    || v8 != v10->m_EHandle.m_Index
    || m_pInstance != v10->m_pInstance
    || (*(&this->CDOTA_Buff + 138) & 4) != 0 )
  {
    return 1uLL;
  }
  CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


// CDOTA_Modifier_FountainInvulnerabilityBuff::OnAttack  (line 1167, @0x0000000002614380, libserver.so)  // inlines: AttackerNPC, Destroy, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_FountainInvulnerabilityBuff::OnAttack(
        CDOTA_Modifier_FountainInvulnerabilityBuff *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r8
  uint32 v8; // esi
  CEntityIdentity *v9; // rax
  CEntityIdentity *v10; // rax

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  m_Index_low = LOWORD(params->hattacker.m_Index);
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
  if ( v4 == 0 )
    return 1uLL;
  v5 = &v4[m_Index_low & 0x1FF];
  if ( v5 == 0 )
    return 1uLL;
  if ( m_Index != v5->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 )
    return 1uLL;
  if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    return 1uLL;
  v8 = this->m_hParent.m_Index;
  if ( v8 + 2 <= 1 )
    return 1uLL;
  v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
  if ( v9 == 0 )
    return 1uLL;
  v10 = &v9[this->m_hParent.m_Index & 0x1FF];
  if ( v10 == 0
    || v8 != v10->m_EHandle.m_Index
    || m_pInstance != v10->m_pInstance
    || (*(&this->CDOTA_Buff + 138) & 4) != 0 )
  {
    return 1uLL;
  }
  CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


// CDOTA_Modifier_FountainInvulnerabilityBuff::OnAttackFail  (line 1179, @0x0000000002614460, libserver.so)  // inlines: AttackerNPC, Destroy, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_FountainInvulnerabilityBuff::OnAttackFail(
        CDOTA_Modifier_FountainInvulnerabilityBuff *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r8
  uint32 v8; // esi
  CEntityIdentity *v9; // rax
  CEntityIdentity *v10; // rax

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  m_Index_low = LOWORD(params->hattacker.m_Index);
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
  if ( v4 == 0 )
    return 1uLL;
  v5 = &v4[m_Index_low & 0x1FF];
  if ( v5 == 0 )
    return 1uLL;
  if ( m_Index != v5->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 )
    return 1uLL;
  if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    return 1uLL;
  v8 = this->m_hParent.m_Index;
  if ( v8 + 2 <= 1 )
    return 1uLL;
  v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
  if ( v9 == 0 )
    return 1uLL;
  v10 = &v9[this->m_hParent.m_Index & 0x1FF];
  if ( v10 == 0
    || v8 != v10->m_EHandle.m_Index
    || m_pInstance != v10->m_pInstance
    || (*(&this->CDOTA_Buff + 138) & 4) != 0 )
  {
    return 1uLL;
  }
  CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


// CDOTA_Modifier_FountainInvulnerabilityBuff::OnIntervalThink  (line 1191, @0x0000000002614540, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Destroy, Get, GetInstance, GetParent, GetTeamNumber, Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::Destroy, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CDOTA_Modifier_FountainInvulnerabilityBuff::OnIntervalThink(
        CDOTA_Modifier_FountainInvulnerabilityBuff *const this)
{
  EHANDLE *p_m_hParent; // r14
  CDOTA_BaseNPC *v3; // r13
  const Vector *AbsOrigin; // r15
  CEntityInstance *v5; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+20h] [rbp-50h] BYREF

  p_m_hParent = &this->m_hParent;
  hEntities.m_Size = 0;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v3 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
  v5 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
  FindUnitsInRadius(HIBYTE(v5[7].m_CScriptComponent), AbsOrigin, v3, 4000.0, &hEntities, 2, 1, 0, 0, 0);
  if ( hEntities.m_Size == 0 && (*(&this->CDOTA_Buff + 138) & 4) == 0 )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEntities);
  if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
    if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
  }
}


// CDOTA_Modifier_Illusion::DeclareFunctions  (line 1207, @0x00000000025de430, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Illusion::GetModifierDamageOutgoing_Percentage(CModifierParams const&), CDOTA_Modifier_Illusion::GetModifierIncomingDamage_Percentage(CModifierParams const&), CDOTA_Modifier_Illusion::GetUnitLifetimeFraction(CModifierParams const&), CDOTA_Modifier_Illusion::GetModifierIsIllusion(CModifierParams const&), CDOTA_Modifier_Illusion::GetModifierIllusionLabel(CModifierParams const&), CDOTA_Modifier_Illusion::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_Illusion::DeclareFunctions(CDOTA_Modifier_Illusion *const this)
{
  this->m_Functions[29].__pfn = CDOTA_Modifier_Illusion::GetModifierDamageOutgoing_Percentage;
  this->m_Functions[29].__delta = 0;
  this->m_Functions[172].__delta = 0;
  this->m_Functions[172].__pfn = CDOTA_Modifier_Illusion::GetModifierIncomingDamage_Percentage;
  this->m_Functions[157].__pfn = CDOTA_Modifier_Illusion::GetUnitLifetimeFraction;
  this->m_Functions[106].__pfn = CDOTA_Modifier_Illusion::GetModifierIsIllusion;
  this->m_Functions[107].__pfn = CDOTA_Modifier_Illusion::GetModifierIllusionLabel;
  this->m_Functions[157].__delta = 0;
  this->m_Functions[106].__delta = 0;
  this->m_Functions[107].__delta = 0;
  this->m_Functions[138].__pfn = CDOTA_Modifier_Illusion::OnDeath;
  this->m_Functions[138].__delta = 0;
}


// CDOTA_Modifier_Illusion::OnDeath  (line 1220, @0x0000000002619af0, libserver.so)  // inlines: AddToTail, AttackerNPC, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CDOTA_BaseNPC_Hero*>, Element, Get, GetInstance, GetLevel, GetParent, GetTeamNumber, GrowMemory, ModifyGold, Purge, RemoveAll, ToDOTABaseNPC, ToDOTABaseNPCHero, UnitNPC, operator CBaseEntity*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_PlayerResource::GetTeam, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlMemory<CDOTA_BaseNPC_Hero*, int>::Grow, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_PlayerResource::ModifyGold, CDOTA_BaseNPC_Hero::IsBuybackLimited, CDOTA_BaseNPC_Hero::GetBuybackGoldFactor, CDOTA_PlayerResource::GetPlayer, SendOverheadEventMessage (15 total)
ModifierVariant_t __fastcall CDOTA_Modifier_Illusion::OnDeath(
        CDOTA_Modifier_Illusion *const this,
        const CModifierParams *const params)
{
  CEntityInstance *v4; // rax
  CEntityInstance *v5; // r12
  CEntityInstance *v6; // rax
  CDOTA_BaseNPC *v7; // rbx
  int m_nControllingPlayerID; // r14d
  int bounty_growth; // r15d
  CEntityInstance *v11; // rax
  int v12; // r15d
  int v13; // r15d
  int v14; // r15d
  const Vector *AbsOrigin; // rax
  __int64 v16; // r13
  int v17; // r12d
  CDOTA_BaseNPC_Hero **v18; // rax
  CEntityInstance *v19; // rax
  __m128i v20; // xmm2
  CDOTA_BaseNPC_Hero *v21; // rbx
  __int64 m_Size; // r14
  unsigned int v23; // r15d
  unsigned __int64 v24; // rbx
  __int64 v25; // r12
  int v26; // r15d
  CDOTAPlayer *Player; // rax
  int m_hScope_high; // [rsp+18h] [rbp-88h]
  int bounty_base; // [rsp+20h] [rbp-80h]
  CDOTA_BaseNPC_Hero *v30; // [rsp+20h] [rbp-80h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-70h] BYREF
  CUtlVector<CDOTA_BaseNPC_Hero*,CUtlMemory<CDOTA_BaseNPC_Hero*,int> > xpSplittingHeroes; // [rsp+50h] [rbp-50h] BYREF
  ModifierVariant_t result; // 0:rax.16

  v4 = CEntityHandle::operator CEntityInstance *(&params->hunit);
  if ( v4 != 0 && BYTE3(v4[7]._vptr_IHandleEntity) != 0 )
    v5 = v4;
  else
    v5 = 0;
  v6 = CEntityHandle::operator CEntityInstance *(&params->hattacker);
  v7 = v6;
  if ( v6 != 0
    && BYTE3(v6[7]._vptr_IHandleEntity) != 0
    && v5 != 0
    && v5 == CEntityHandle::operator CEntityInstance *(&this->m_hParent) )
  {
    m_nControllingPlayerID = (*(v7->_vptr_IHandleEntity + 414))(v7);
    if ( v7->m_bIsIllusion.m_Value )
      m_nControllingPlayerID = v7->m_nControllingPlayerID;
    if ( m_nControllingPlayerID != -1
      && CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, m_nControllingPlayerID) != HIBYTE(v5[7].m_CScriptComponent) )
    {
      bounty_growth = this->bounty_growth;
      bounty_base = this->bounty_base;
      m_hScope_high = HIDWORD(v5[44].m_hPrivateScope.m_hScope);
      CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(g_pDOTAPlayerResource, m_nControllingPlayerID);
      v11 = CEntityHandle::operator CEntityInstance *(&xpSplittingHeroes);
      if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 && (v11[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
      {
        v26 = bounty_base + m_hScope_high * bounty_growth;
        v30 = v11;
        CDOTA_PlayerResource::ModifyGold(g_pDOTAPlayerResource, v11[100]._vptr_IHandleEntity, v26, 0, 13);
        if ( CDOTA_BaseNPC_Hero::IsBuybackLimited(v30) )
          v26 = (CDOTA_BaseNPC_Hero::GetBuybackGoldFactor(v30) * v26);
        Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, m_nControllingPlayerID);
        if ( Player != 0 && v26 > 0 )
          SendOverheadEventMessage(Player, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_GOLD, v5, v26, 0);
      }
      v12 = this->bounty_growth;
      entities.m_Size = 0;
      entities.m_Memory.m_pMemory = 0;
      entities.m_Memory.m_nAllocationCount = 0;
      v13 = HIDWORD(v5[44].m_hPrivateScope.m_hScope) * v12;
      entities.m_Memory.m_nGrowSize = 0;
      v14 = this->bounty_base + v13;
      AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
      FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, v7, 1300.0, &entities, 1, 1, 270424, 0, 0);
      xpSplittingHeroes.m_Size = 0;
      xpSplittingHeroes.m_Memory.m_pMemory = 0;
      xpSplittingHeroes.m_Memory.m_nAllocationCount = 0;
      xpSplittingHeroes.m_Memory.m_nGrowSize = 0;
      if ( entities.m_Size <= 0 )
        goto LABEL_42;
      v16 = 0;
      v17 = 0;
      do
      {
        v19 = CEntityHandle::operator CEntityInstance *(&entities.m_Memory.m_pMemory[v16]);
        v21 = v19;
        if ( v19 != 0
          && BYTE3(v19[7]._vptr_IHandleEntity) != 0
          && (v19[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
          && (*(v19->_vptr_IHandleEntity + 408))(v19) != 0 )
        {
          m_Size = xpSplittingHeroes.m_Size;
          if ( xpSplittingHeroes.m_Size == xpSplittingHeroes.m_Memory.m_nAllocationCount )
            CUtlMemory<CDOTA_BaseNPC_Hero *,int>::Grow(&xpSplittingHeroes.m_Memory, 1);
          ++xpSplittingHeroes.m_Size;
          v18 = &xpSplittingHeroes.m_Memory.m_pMemory[m_Size];
          if ( v18 != 0 )
            *v18 = v21;
        }
        ++v17;
        ++v16;
      }
      while ( entities.m_Size > v17 );
      if ( xpSplittingHeroes.m_Size == 0 )
      {
LABEL_42:
        CUtlVectorBase<CDOTA_BaseNPC_Hero *,CUtlMemory<CDOTA_BaseNPC_Hero *,int>>::~CUtlVectorBase(&xpSplittingHeroes);
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
        *&result.m_eType = 1;
        goto LABEL_7;
      }
      *v20.m128i_i32 = (v14 / xpSplittingHeroes.m_Size);
      v23 = _mm_cvtsi128_si32(v20);
      if ( xpSplittingHeroes.m_Size > 0 )
      {
        v24 = 0;
        v25 = 8LL * (xpSplittingHeroes.m_Size - 1) + 8;
        do
        {
          (*(xpSplittingHeroes.m_Memory.m_pMemory[v24 / 8]->_vptr_IHandleEntity + 493))(
            xpSplittingHeroes.m_Memory.m_pMemory[v24 / 8],
            2,
            1,
            1,
            *_mm_cvtsi32_si128(v23).m128i_i64);
          v24 += 8LL;
        }
        while ( v24 != v25 );
      }
      xpSplittingHeroes.m_Size = 0;
      if ( (xpSplittingHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CDOTA_BaseNPC_Hero *,int>::Purge(&xpSplittingHeroes.m_Memory);
        if ( (xpSplittingHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CDOTA_BaseNPC_Hero *,int>::Purge(&xpSplittingHeroes.m_Memory);
      }
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
    }
  }
  *&result.m_eType = 1;
LABEL_7:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Illusion::GetUnitLifetimeFraction  (line 1299, @0x00000000025e2340, libserver.so)  // inlines: DOTAGameRules, GetGameTime
ModifierVariant_t __fastcall CDOTA_Modifier_Illusion::GetUnitLifetimeFraction(
        CDOTA_Modifier_Illusion *const this,
        const CModifierParams *const params)
{
  float v4; // xmm0_4
  float v5; // xmm1_4
  float v6; // xmm0_4
  __int64 v7; // xmm2_8
  unsigned int v8; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  if ( (*(this->_vptr_CDOTA_Buff + 31))(this, params) == -1.0 )
    return 0x3F80000000000001uLL;
  (*(this->_vptr_CDOTA_Buff + 30))(this);
  v5 = 0.0;
  if ( g_pGameRules != 0 )
    v5 = *&g_pGameRules[18].m_szQuestName[20];
  *&v8 = v4 - v5;
  v6 = (*(this->_vptr_CDOTA_Buff + 31))(this);
  v7 = v8;
  result.m_szVal = 0;
  *&v7 = *&v8 / v6;
  *&result.m_eType = (v7 << 32) | 1;
  return result;
}


// CDOTA_Modifier_Illusion::OnDestroy  (line 1307, @0x00000000025f1860, libserver.so)  // inlines: Get, GetInstance, GetModifier_Constant_First, GetParent, IsListeningToEvent, IsSpecialIllusion, operator==
// calls: CEntityHandle::operator CEntityInstance*, GetParticleManager, CDOTA_ParticleManager::DestroyAllParticleEffectsInvolving, CBaseEntity::AddEffects, CUtlString::IsEqual_CaseSensitive, CDOTA_ModifierManager::GetModifier_Constant_First_Internal, CDOTA_BaseNPC::ForceKill, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound
// strings: "monkey_king_fur_army", "particles/generic_gameplay/illusion_killed.vpcf", "General.Illusion.Destroy"
// globals: CModifierParams::s_Default
void __fastcall CDOTA_Modifier_Illusion::OnDestroy(CDOTA_Modifier_Illusion *const this)
{
  EHANDLE *p_m_hParent; // rbx
  CBaseEntity *v3; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CBaseEntity *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  __int64 v7; // rdx
  CBaseEntity *v8; // r12
  CDOTA_ParticleManager *v9; // rax
  CBaseEntity *v10; // r13
  CDOTA_ParticleManager *v11; // rax
  CDOTA_ParticleManager *v12; // rax
  CDOTA_BaseNPC *v13; // rax

  p_m_hParent = &this->m_hParent;
  v3 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyAllParticleEffectsInvolving(ParticleManager, v3, 1);
  v5 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
  CBaseEntity::AddEffects(v5, 32);
  if ( !CUtlString::IsEqual_CaseSensitive(&this->m_strIllusionType, "monkey_king_fur_army") )
  {
    v8 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
    v9 = GetParticleManager();
    LODWORD(v8) = CDOTA_ParticleManager::CreateParticle(
                    v9,
                    "particles/generic_gameplay/illusion_killed.vpcf",
                    2,
                    0,
                    0,
                    v8);
    v10 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
    v11 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v11, v8, 0, v10, 3, 0, vec3_invalid, 1);
    v12 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v12, v8);
    v13 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
    CDOTA_BaseNPC::UnitEmitSound(v13, "General.Illusion.Destroy", 0.0, 0, 0);
  }
  v6 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
  v7 = v6->m_ModifierManager.m_buffsForModifiers[108];
  if ( v7 != 0xFF && v6->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v7].m_Size > 0 )
  {
    if ( CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
           &v6->m_ModifierManager,
           modifierfunction::MODIFIER_PROPERTY_SUPER_ILLUSION,
           &CModifierParams::s_Default) == 1.0 )
      return;
    v6 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
  }
  CDOTA_BaseNPC::ForceKill(v6, 0);
}


// CDOTA_Modifier_Illusion::OnCreated  (line 1340, @0x00000000025e1130, libserver.so)  // inlines: V_strncpy<long unsigned int>
// calls: KeyValues::GetInt, KeyValues::GetString, CUtlString::operator=, KeyValues::IsEmpty, _V_strncpy
// strings: "bounty_base", "bounty_growth", "illusion_type", "outgoing_damage_structure", "illusionlabel"
void __fastcall CDOTA_Modifier_Illusion::OnCreated(CDOTA_Modifier_Illusion *const this, KeyValues *pKV)
{
  const char *String; // rax
  const char *v5; // rax

  this->outgoing_damage = KeyValues::GetInt(pKV, "outgoing_damage", 0);
  this->incoming_damage = KeyValues::GetInt(pKV, "incoming_damage", 0);
  this->bounty_base = KeyValues::GetInt(pKV, "bounty_base", 5);
  this->bounty_growth = KeyValues::GetInt(pKV, "bounty_growth", 1);
  String = KeyValues::GetString(pKV, "illusion_type", "", 0, 0);
  CUtlString::operator=(&this->m_strIllusionType, String);
  if ( KeyValues::IsEmpty(pKV, "outgoing_damage_structure") )
    this->outgoing_damage_structure = ((this->outgoing_damage + 100) * 0.5 - 100.0);
  else
    this->outgoing_damage_structure = KeyValues::GetInt(pKV, "outgoing_damage_structure", 0);
  v5 = KeyValues::GetString(pKV, "illusionlabel", "", 0, 0);
  _V_strncpy(this->m_szIllusionLabel, v5, 64);
}


// CDOTA_Modifier_Illusion::GetModifierDamageOutgoing_Percentage  (line 1370, @0x00000000025e6d10, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Illusion::GetModifierDamageOutgoing_Percentage(
        CDOTA_Modifier_Illusion *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rcx
  uint32 v7; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  int outgoing_damage_structure; // eax
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->htarget.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v7 = params->hattacker.m_Index;
  if ( v7 + 2 <= 1 )
    return 1uLL;
  m_Index_low = LOWORD(params->hattacker.m_Index);
  v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
  if ( v9 == 0 )
    return 1uLL;
  v10 = &v9[m_Index_low & 0x1FF];
  if ( v10 == 0
    || v7 != v10->m_EHandle.m_Index
    || v10->m_pInstance == 0
    || BYTE3(v10->m_pInstance[7]._vptr_IHandleEntity) == 0
    || m_pInstance == 0 )
  {
    return 1uLL;
  }
  outgoing_damage_structure = this->outgoing_damage_structure;
  if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0 )
    outgoing_damage_structure = this->outgoing_damage;
  result.m_szVal = 0;
  *v2.m128i_i32 = outgoing_damage_structure;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Illusion::GetModifierIncomingDamage_Percentage  (line 1381, @0x00000000025e6c20, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Illusion::GetModifierIncomingDamage_Percentage(
        CDOTA_Modifier_Illusion *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r8
  uint32 v7; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->htarget.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v7 = params->hattacker.m_Index;
  if ( v7 + 2 <= 1 )
    return 1uLL;
  m_Index_low = LOWORD(params->hattacker.m_Index);
  v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
  if ( v9 == 0 )
    return 1uLL;
  v10 = &v9[m_Index_low & 0x1FF];
  if ( v10 == 0
    || v7 != v10->m_EHandle.m_Index
    || v10->m_pInstance == 0
    || BYTE3(v10->m_pInstance[7]._vptr_IHandleEntity) == 0
    || m_pInstance == 0 )
  {
    return 1uLL;
  }
  *v2.m128i_i32 = this->incoming_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Illusion::GetModifierIncomingSpellDamage_Percentage  (line 1392, @0x00000000025ea1f0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Illusion::GetModifierIncomingSpellDamage_Percentage(
        CDOTA_Modifier_Illusion *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r8
  uint32 v7; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->htarget.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v7 = params->hattacker.m_Index;
  if ( v7 + 2 <= 1 )
    return 1uLL;
  m_Index_low = LOWORD(params->hattacker.m_Index);
  v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
  if ( v9 == 0 )
    return 1uLL;
  v10 = &v9[m_Index_low & 0x1FF];
  if ( v10 == 0
    || v7 != v10->m_EHandle.m_Index
    || v10->m_pInstance == 0
    || BYTE3(v10->m_pInstance[7]._vptr_IHandleEntity) == 0
    || m_pInstance == 0 )
  {
    return 1uLL;
  }
  *v2.m128i_i32 = this->incoming_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Illusion::GetModifierIsIllusion  (line 1403, @0x00000000025de4d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Illusion::GetModifierIsIllusion(
        CDOTA_Modifier_Illusion *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Illusion::GetModifierIllusionLabel  (line 1408, @0x00000000025de4f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Illusion::GetModifierIllusionLabel(
        CDOTA_Modifier_Illusion *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = this->m_szIllusionLabel;
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_Illusion::GetTexture  (line 1413, @0x00000000025de510, libserver.so)
// strings: "modifier_illusion"
const char *__fastcall CDOTA_Modifier_Illusion::GetTexture(CDOTA_Modifier_Illusion *const this)
{
  return "modifier_illusion";
}


// CDOTA_Modifier_Illusion::ShouldSendToTeam  (line 1418, @0x00000000025e5b70, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Modifier_Illusion::ShouldSendToTeam(CDOTA_Modifier_Illusion *const this, int nTeamNumber)
{
  CEntityInstance *m_pInstance; // rcx
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rdi
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx

  m_pInstance = 0;
  m_Index = this->m_hParent.m_Index;
  if ( m_Index + 2 > 1 )
  {
    m_Index_low = LOWORD(this->m_hParent.m_Index);
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[m_Index_low & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  return nTeamNumber == HIBYTE(m_pInstance[7].m_CScriptComponent);
}


// CDOTA_Modifier_Illusion::AddCustomTransmiterData  (line 1424, @0x00000000025e5390, libserver.so)  // inlines: assign, length, set_has_illusion_label, set_illusion_label
// calls: strlen, std::string::assign(char const*,ulong)
void __fastcall CDOTA_Modifier_Illusion::AddCustomTransmiterData(
        CDOTA_Modifier_Illusion *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  char *m_szIllusionLabel; // r12
  size_t v4; // rax

  m_szIllusionLabel = this->m_szIllusionLabel;
  *(entry + 4) |= 0x10000000u;
  v4 = strlen(this->m_szIllusionLabel);
  std::string::assign(*(entry + 19), m_szIllusionLabel, v4);
}


// CDOTA_Modifier_Rune_DoubleDamage::DeclareFunctions  (line 1440, @0x00000000025de520, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Rune_DoubleDamage::GetModifierBaseDamageOutgoing_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Rune_DoubleDamage::DeclareFunctions(CDOTA_Modifier_Rune_DoubleDamage *const this)
{
  this->m_Functions[34].__pfn = CDOTA_Modifier_Rune_DoubleDamage::GetModifierBaseDamageOutgoing_Percentage;
  this->m_Functions[34].__delta = 0;
}


// CDOTA_Modifier_Rune_DoubleDamage::GetModifierBaseDamageOutgoing_Percentage  (line 1445, @0x00000000025e5d50, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Rune_DoubleDamage::GetModifierBaseDamageOutgoing_Percentage(
        CDOTA_Modifier_Rune_DoubleDamage *const this,
        const CModifierParams *const params)
{
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  result.m_eType = this->m_hParent.m_Index;
  if ( (result.m_eType + 2) > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hParent.m_Index & 0x1FF];
      if ( v4 != 0 && result.m_eType == v4->m_EHandle.m_Index )
        result.m_szVal = v4->m_pInstance;
    }
  }
  *&result.m_eType = 1;
  if ( *(result.m_szVal + 3416) == 0 )
    *&result.m_eType = 0x42C8000000000001LL;
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Rune_Haste::DeclareFunctions  (line 1459, @0x00000000025de540, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Rune_Haste::GetModifierMoveSpeed_Absolute(CModifierParams const&), CDOTA_Modifier_Rune_Haste::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_Rune_Haste::DeclareFunctions(CDOTA_Modifier_Rune_Haste *const this)
{
  this->m_Functions[18].__pfn = CDOTA_Modifier_Rune_Haste::GetModifierMoveSpeed_Absolute;
  this->m_Functions[18].__delta = 0;
  this->m_Functions[155].__delta = 0;
  this->m_Functions[155].__pfn = CDOTA_Modifier_Rune_Haste::GetActivityTranslationModifiers;
}


// CDOTA_Modifier_Rune_Haste::GetModifierMoveSpeed_Absolute  (line 1465, @0x00000000025de580, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Rune_Haste::GetModifierMoveSpeed_Absolute(
        CDOTA_Modifier_Rune_Haste *const this,
        const CModifierParams *const params)
{
  return 0x4409800000000001uLL;
}


// CDOTA_Modifier_Rune_Haste::GetActivityTranslationModifiers  (line 1470, @0x00000000025de5a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Rune_Haste::GetActivityTranslationModifiers(
        CDOTA_Modifier_Rune_Haste *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "haste";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_Rune_Regen::DeclareFunctions  (line 1483, @0x00000000025de5c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Rune_Regen::GetModifierConstantHealthRegen(CModifierParams const&), CDOTA_Modifier_Rune_Regen::GetModifierConstantManaRegen(CModifierParams const&), CDOTA_Modifier_Rune_Regen::OnTakeDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Rune_Regen::DeclareFunctions(CDOTA_Modifier_Rune_Regen *const this)
{
  this->m_Functions[56].__pfn = CDOTA_Modifier_Rune_Regen::GetModifierConstantHealthRegen;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[52].__delta = 0;
  this->m_Functions[52].__pfn = CDOTA_Modifier_Rune_Regen::GetModifierConstantManaRegen;
  this->m_Functions[134].__pfn = CDOTA_Modifier_Rune_Regen::OnTakeDamage;
  this->m_Functions[134].__delta = 0;
}


// CDOTA_Modifier_Rune_Regen::GetModifierConstantHealthRegen  (line 1491, @0x0000000002614660, libserver.so)  // inlines: Destroy, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CBaseEntity::GetHealth, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Rune_Regen::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Rune_Regen *const this,
        const CModifierParams *const params)
{
  CEntityInstance *m_pInstance; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx
  int Health; // r12d
  CEntityInstance *v9; // rax

  m_pInstance = 0;
  m_Index = this->m_hParent.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[this->m_hParent.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  if ( *&m_pInstance[44].m_iszPrivateVScripts.u.m_Id != *&m_pInstance[44].m_worldGroupId.m_nHashCode )
    return 0x42C8000000000001uLL;
  Health = CBaseEntity::GetHealth(m_pInstance);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
  if ( Health != (*(v9->_vptr_IHandleEntity + 156))(v9) )
    return 0x42C8000000000001uLL;
  if ( (*(&this->CDOTA_Buff + 138) & 4) == 0 )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


// CDOTA_Modifier_Rune_Regen::GetModifierConstantManaRegen  (line 1504, @0x0000000002614740, libserver.so)  // inlines: Destroy, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CBaseEntity::GetHealth, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Rune_Regen::GetModifierConstantManaRegen(
        CDOTA_Modifier_Rune_Regen *const this,
        const CModifierParams *const params)
{
  CEntityInstance *m_pInstance; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx
  int Health; // r12d
  CEntityInstance *v9; // rax

  m_pInstance = 0;
  m_Index = this->m_hParent.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[this->m_hParent.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  if ( *&m_pInstance[44].m_iszPrivateVScripts.u.m_Id != *&m_pInstance[44].m_worldGroupId.m_nHashCode )
    return 0x4284000000000001uLL;
  Health = CBaseEntity::GetHealth(m_pInstance);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
  if ( Health != (*(v9->_vptr_IHandleEntity + 156))(v9) )
    return 0x4284000000000001uLL;
  if ( (*(&this->CDOTA_Buff + 138) & 4) == 0 )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


// CDOTA_Modifier_Rune_Regen::OnTakeDamage  (line 1517, @0x0000000002614820, libserver.so)  // inlines: Destroy, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, Unit, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Rune_Regen::OnTakeDamage(
        CDOTA_Modifier_Rune_Regen *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityInstance *m_pInstance; // r8
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  uint32 v7; // eax
  CEntityInstance *v8; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx

  m_Index = params->hunit.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    m_Index_low = LOWORD(params->hunit.m_Index);
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[m_Index_low & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  v7 = this->m_hParent.m_Index;
  v8 = 0;
  if ( v7 + 2 > 1 )
  {
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[this->m_hParent.m_Index & 0x1FF];
      if ( v10 != 0 && v7 == v10->m_EHandle.m_Index )
        v8 = v10->m_pInstance;
    }
  }
  if ( m_pInstance != v8 || (*(&this->CDOTA_Buff + 138) & 4) != 0 )
    return 1uLL;
  CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


// CDOTA_Modifier_Rune_Arcane::DeclareFunctions  (line 1531, @0x00000000025de620, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Rune_Arcane::GetModifierPercentageCooldownStacking(CModifierParams const&), CDOTA_Modifier_Rune_Arcane::GetModifierUnitStatsNeedsRefresh(CModifierParams const&), CDOTA_Modifier_Rune_Arcane::GetModifierPercentageManacost(CModifierParams const&)
void __fastcall CDOTA_Modifier_Rune_Arcane::DeclareFunctions(CDOTA_Modifier_Rune_Arcane *const this)
{
  this->m_Functions[78].__pfn = CDOTA_Modifier_Rune_Arcane::GetModifierPercentageCooldownStacking;
  this->m_Functions[78].__delta = 0;
  this->m_Functions[114].__delta = 0;
  this->m_Functions[114].__pfn = CDOTA_Modifier_Rune_Arcane::GetModifierUnitStatsNeedsRefresh;
  this->m_Functions[80].__pfn = CDOTA_Modifier_Rune_Arcane::GetModifierPercentageManacost;
  this->m_Functions[80].__delta = 0;
}


// CDOTA_Modifier_Rune_Arcane::GetModifierPercentageCooldownStacking  (line 1539, @0x00000000025de680, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Rune_Arcane::GetModifierPercentageCooldownStacking(
        CDOTA_Modifier_Rune_Arcane *const this,
        const CModifierParams *const params)
{
  return 0x41F0000000000001uLL;
}


// CDOTA_Modifier_Rune_Arcane::GetModifierUnitStatsNeedsRefresh  (line 1544, @0x00000000025de6a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Rune_Arcane::GetModifierUnitStatsNeedsRefresh(
        CDOTA_Modifier_Rune_Arcane *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Rune_Arcane::GetModifierPercentageManacost  (line 1549, @0x00000000025de6c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Rune_Arcane::GetModifierPercentageManacost(
        CDOTA_Modifier_Rune_Arcane *const this,
        const CModifierParams *const params)
{
  return 0x4220000000000001uLL;
}


// CDOTA_Modifier_Truesight_Aura::~CDOTA_Modifier_Truesight_Aura  (line 1558, @0x0000000002651cf0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Truesight_Aura::~CDOTA_Modifier_Truesight_Aura(
        CDOTA_Modifier_Truesight_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_41215D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Truesight_Aura::~CDOTA_Modifier_Truesight_Aura  (line 1558, @0x0000000002651d10, libserver.so)  // inlines: ~CDOTA_Modifier_Truesight_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Truesight_Aura::~CDOTA_Modifier_Truesight_Aura(
        CDOTA_Modifier_Truesight_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_41215D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Truesight_Aura::IsAura  (line 1563, @0x00000000026258d0, libserver.so)
bool __fastcall CDOTA_Modifier_Truesight_Aura::IsAura(CDOTA_Modifier_Truesight_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Truesight_Aura::GetModifierAura  (line 1564, @0x00000000026258e0, libserver.so)
// strings: "modifier_truesight"
const char *__fastcall CDOTA_Modifier_Truesight_Aura::GetModifierAura(CDOTA_Modifier_Truesight_Aura *const this)
{
  return "modifier_truesight";
}


// CDOTA_Modifier_Truesight_Aura::GetAuraSearchTeam  (line 1566, @0x00000000026258f0, libserver.so)
int __fastcall CDOTA_Modifier_Truesight_Aura::GetAuraSearchTeam(CDOTA_Modifier_Truesight_Aura *const this)
{
  return 2;
}


// CDOTA_Modifier_Truesight_Aura::GetAuraSearchType  (line 1567, @0x0000000002625900, libserver.so)
int __fastcall CDOTA_Modifier_Truesight_Aura::GetAuraSearchType(CDOTA_Modifier_Truesight_Aura *const this)
{
  return 51;
}


// CDOTA_Modifier_Truesight_Aura::GetAuraSearchFlags  (line 1568, @0x0000000002625910, libserver.so)
int __fastcall CDOTA_Modifier_Truesight_Aura::GetAuraSearchFlags(CDOTA_Modifier_Truesight_Aura *const this)
{
  return 80;
}


// CDOTA_Modifier_Truesight_Aura::GetAuraRadius  (line 1569, @0x0000000002625920, libserver.so)
int __fastcall CDOTA_Modifier_Truesight_Aura::GetAuraRadius(CDOTA_Modifier_Truesight_Aura *const this)
{
  return this->m_nAuraRadius;
}


// CDOTA_Modifier_Truesight_Aura::OnCreated  (line 1575, @0x00000000025e0510, libserver.so)
// calls: KeyValues::GetInt
void __fastcall CDOTA_Modifier_Truesight_Aura::OnCreated(CDOTA_Modifier_Truesight_Aura *const this, KeyValues *pKV)
{
  this->m_nAuraRadius = 0;
  this->m_nAuraRadius = KeyValues::GetInt(pKV, "radius", 700);
}


// CDOTA_Modifier_Tower_Truesight_Aura::~CDOTA_Modifier_Tower_Truesight_Aura  (line 1585, @0x0000000002651d90, libserver.so)  // inlines: ~CDOTA_Modifier_Truesight_Aura
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tower_Truesight_Aura::~CDOTA_Modifier_Tower_Truesight_Aura(
        CDOTA_Modifier_Tower_Truesight_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_41215D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tower_Truesight_Aura::~CDOTA_Modifier_Tower_Truesight_Aura  (line 1585, @0x0000000002651db0, libserver.so)  // inlines: ~CDOTA_Modifier_Tower_Truesight_Aura, ~CDOTA_Modifier_Truesight_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tower_Truesight_Aura::~CDOTA_Modifier_Tower_Truesight_Aura(
        CDOTA_Modifier_Tower_Truesight_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_41215D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tower_Truesight_Aura::GetAuraRadius  (line 1589, @0x0000000002625930, libserver.so)
int __fastcall CDOTA_Modifier_Tower_Truesight_Aura::GetAuraRadius(CDOTA_Modifier_Tower_Truesight_Aura *const this)
{
  return 900;
}


// CDOTA_Modifier_Fountain_Truesight_Aura::~CDOTA_Modifier_Fountain_Truesight_Aura  (line 1596, @0x0000000002651d40, libserver.so)  // inlines: ~CDOTA_Modifier_Truesight_Aura
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Fountain_Truesight_Aura::~CDOTA_Modifier_Fountain_Truesight_Aura(
        CDOTA_Modifier_Fountain_Truesight_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_41215D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Fountain_Truesight_Aura::~CDOTA_Modifier_Fountain_Truesight_Aura  (line 1596, @0x0000000002651d60, libserver.so)  // inlines: ~CDOTA_Modifier_Fountain_Truesight_Aura, ~CDOTA_Modifier_Truesight_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Fountain_Truesight_Aura::~CDOTA_Modifier_Fountain_Truesight_Aura(
        CDOTA_Modifier_Fountain_Truesight_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_41215D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Fountain_Truesight_Aura::GetAuraRadius  (line 1600, @0x0000000002625940, libserver.so)
int __fastcall CDOTA_Modifier_Fountain_Truesight_Aura::GetAuraRadius(
        CDOTA_Modifier_Fountain_Truesight_Aura *const this)
{
  return 1200;
}


// CDOTA_Modifier_Tower_Aura::~CDOTA_Modifier_Tower_Aura  (line 1609, @0x0000000002652a30, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tower_Aura::~CDOTA_Modifier_Tower_Aura(CDOTA_Modifier_Tower_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4121F30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tower_Aura::~CDOTA_Modifier_Tower_Aura  (line 1609, @0x0000000002652a50, libserver.so)  // inlines: ~CDOTA_Modifier_Tower_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tower_Aura::~CDOTA_Modifier_Tower_Aura(CDOTA_Modifier_Tower_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4121F30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tower_Aura::IsAura  (line 1614, @0x0000000002625950, libserver.so)
bool __fastcall CDOTA_Modifier_Tower_Aura::IsAura(CDOTA_Modifier_Tower_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Tower_Aura::GetModifierAura  (line 1615, @0x0000000002625960, libserver.so)
// strings: "modifier_tower_aura_bonus"
const char *__fastcall CDOTA_Modifier_Tower_Aura::GetModifierAura(CDOTA_Modifier_Tower_Aura *const this)
{
  return "modifier_tower_aura_bonus";
}


// CDOTA_Modifier_Tower_Aura::GetAuraSearchTeam  (line 1617, @0x0000000002625970, libserver.so)
int __fastcall CDOTA_Modifier_Tower_Aura::GetAuraSearchTeam(CDOTA_Modifier_Tower_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Tower_Aura::GetAuraSearchType  (line 1618, @0x0000000002625980, libserver.so)
int __fastcall CDOTA_Modifier_Tower_Aura::GetAuraSearchType(CDOTA_Modifier_Tower_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Tower_Aura::GetAuraSearchFlags  (line 1619, @0x0000000002625990, libserver.so)
int __fastcall CDOTA_Modifier_Tower_Aura::GetAuraSearchFlags(CDOTA_Modifier_Tower_Aura *const this)
{
  return 64;
}


// CDOTA_Modifier_Tower_Aura::GetAuraRadius  (line 1620, @0x00000000026259a0, libserver.so)
int __fastcall CDOTA_Modifier_Tower_Aura::GetAuraRadius(CDOTA_Modifier_Tower_Aura *const this)
{
  return 900;
}


// CDOTA_Modifier_Tower_Aura_Bonus::~CDOTA_Modifier_Tower_Aura_Bonus  (line 1628, @0x0000000002651ca0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tower_Aura_Bonus::~CDOTA_Modifier_Tower_Aura_Bonus(
        CDOTA_Modifier_Tower_Aura_Bonus *const this)
{
  this->_vptr_CDOTA_Buff = &off_4122290;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tower_Aura_Bonus::~CDOTA_Modifier_Tower_Aura_Bonus  (line 1628, @0x0000000002651cc0, libserver.so)  // inlines: ~CDOTA_Modifier_Tower_Aura_Bonus
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tower_Aura_Bonus::~CDOTA_Modifier_Tower_Aura_Bonus(
        CDOTA_Modifier_Tower_Aura_Bonus *const this)
{
  this->_vptr_CDOTA_Buff = &off_4122290;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tower_Aura_Bonus::GetTexture  (line 1654, @0x00000000025de6e0, libserver.so)
// strings: "tower_armor_aura"
const char *__fastcall CDOTA_Modifier_Tower_Aura_Bonus::GetTexture(CDOTA_Modifier_Tower_Aura_Bonus *const this)
{
  return "tower_armor_aura";
}


// CDOTA_Modifier_Tower_Aura_Bonus::OnCreated  (line 1660, @0x00000000025eaf00, libserver.so)  // inlines: CUtlSymbolLarge, GetEntityName, StartIntervalThink, String, ToCStr, _V_strstr, strstr
// calls: CDOTA_Buff::GetCaster, strstr
// strings: "tower1"
void __fastcall CDOTA_Modifier_Tower_Aura_Bonus::OnCreated(CDOTA_Modifier_Tower_Aura_Bonus *const this, KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax
  const char *m_pAsString; // rdi

  Caster = CDOTA_Buff::GetCaster(this);
  if ( Caster != 0 )
  {
    m_pAsString = Caster->m_pEntity->m_name.u.m_pAsString;
    if ( m_pAsString != 0 && strstr(m_pAsString, "tower1") != 0 )
      this->bonus_armor = 1;
    else
      this->bonus_armor = 3;
  }
  this->m_flThinkInterval = 0.5;
  this->m_flThinkTimeAccumulator = 0.0;
}


// CDOTA_Modifier_Tower_Aura_Bonus::OnIntervalThink  (line 1679, @0x0000000002622030, libserver.so)  // inlines: CUtlSymbolLarge, GetEntityName, StartIntervalThink, String, ToCStr, _V_strstr, strstr
// calls: CDOTA_Buff::GetCaster, strstr, CDOTA_Buff::SendBuffRefreshToClients
// strings: "tower1"
void __fastcall CDOTA_Modifier_Tower_Aura_Bonus::OnIntervalThink(CDOTA_Modifier_Tower_Aura_Bonus *const this)
{
  int bonus_armor; // r12d
  CDOTA_BaseNPC *Caster; // rax
  const char *m_pAsString; // rdi
  int v5; // eax

  bonus_armor = this->bonus_armor;
  Caster = CDOTA_Buff::GetCaster(this);
  if ( Caster != 0 )
  {
    m_pAsString = Caster->m_pEntity->m_name.u.m_pAsString;
    if ( m_pAsString != 0 && strstr(m_pAsString, "tower1") != 0 )
    {
      this->bonus_armor = 1;
      v5 = 1;
    }
    else
    {
      this->bonus_armor = 3;
      v5 = 3;
    }
    if ( bonus_armor != v5 )
      CDOTA_Buff::SendBuffRefreshToClients(this);
  }
  this->m_flThinkInterval = 0.5;
  this->m_flThinkTimeAccumulator = 0.0;
}


// CDOTA_Modifier_Tower_Aura_Bonus::AddCustomTransmiterData  (line 1709, @0x00000000025de6f0, libserver.so)  // inlines: set_armor, set_has_armor
void __fastcall CDOTA_Modifier_Tower_Aura_Bonus::AddCustomTransmiterData(
        CDOTA_Modifier_Tower_Aura_Bonus *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  int bonus_armor; // eax

  bonus_armor = this->bonus_armor;
  *(entry + 4) |= 0x800u;
  *(entry + 17) = bonus_armor;
}


// CDOTA_Modifier_Tower_Aura_Bonus::DeclareFunctions  (line 1726, @0x00000000025de710, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Tower_Aura_Bonus::GetModifierPhysicalArmorBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Tower_Aura_Bonus::DeclareFunctions(CDOTA_Modifier_Tower_Aura_Bonus *const this)
{
  this->m_Functions[45].__pfn = CDOTA_Modifier_Tower_Aura_Bonus::GetModifierPhysicalArmorBonus;
  this->m_Functions[45].__delta = 0;
}


// CDOTA_Modifier_Tower_Aura_Bonus::GetModifierPhysicalArmorBonus  (line 1733, @0x00000000025de730, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Tower_Aura_Bonus::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Tower_Aura_Bonus *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Teleporting::GenerateSound  (line 1743, @0x00000000025fce80, libserver.so)  // inlines: CBroadcastRecipientFilter, CEntityIndex, CReliableBroadcastRecipientFilter, CUtlMemory, CUtlVector, CUtlVectorBase, EmitSound_t, GetTeamMapping, Purge, RemoveAll, SoundEventGuid_t, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, FoW_TeamNumberToFoWIndex, CDOTAFogOfWarSystem::GetFoW, CFoW::GetLocationInfo, CRecipientFilter::RemoveRecipientsByTeamNumber, CBaseEntity::EmitSound, CRecipientFilter::~CRecipientFilter, CUtlMemory<Vector, int>::Purge, __stack_chk_fail, _Unwind_Resume (13 total)
// callers: CDOTA_Modifier_Teleporting::OnIntervalThink, CDOTA_Modifier_Teleporting::OnCreated
SndOpEventGuid_t __fastcall CDOTA_Modifier_Teleporting::GenerateSound(
        CDOTA_Modifier_Teleporting *const this,
        const char *pszSoundName,
        double a3,
        vec_t a4)
{
  int v6; // ebx
  unsigned int v7; // r15d
  CFoW *FoW; // rax
  SndOpEventGuid_t v9; // rbx
  Vector vPosa; // [rsp+10h] [rbp-1E0h] BYREF
  EmitSound_t params; // [rsp+20h] [rbp-1D0h] BYREF
  CReliableBroadcastRecipientFilter filter; // [rsp+80h] [rbp-170h] BYREF
  unsigned __int64 v13; // [rsp+1B8h] [rbp-38h]

  vPosa.z = a4;
  v13 = __readfsqword(0x28u);
  *&vPosa.x = a3;
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filter);
  params.m_pSoundName = pszSoundName;
  v6 = 0;
  params.m_pOrigin = &vPosa;
  params.m_nChannel = 0;
  params.m_flVolume = 1.0;
  params.m_SoundLevel = soundlevel_t::SNDLVL_NONE;
  params.m_nFlags = 0;
  params.m_nPitch = 100;
  params.m_flSoundTime = 0.0;
  params.m_pflSoundDuration = 0;
  params.m_bEmitCloseCaption = 1;
  params.m_bWarnOnMissingCloseCaption = 0;
  params.m_bWarnOnDirectWaveReference = 0;
  params.m_nSpeakerEntity.m_Data = -1;
  params.m_UtlVecSoundOrigin.m_Size = 0;
  memset(&params.m_UtlVecSoundOrigin.m_Memory, 0, 21);
  if ( g_pGameRules != 0 )
  {
    while ( ++v6 != 13 )
    {
      while ( (v6 - 6) <= 7 || (v6 - 2) <= 1 )
      {
        if ( this->m_iTeam == v6 )
          break;
        v7 = FoW_TeamNumberToFoWIndex(v6);
        FoW = CDOTAFogOfWarSystem::GetFoW(&g_DOTAFogOfWarSystem, 0);
        if ( (CFoW::GetLocationInfo(FoW, v7, &vPosa) & 0x4000) != 0 )
          break;
        CRecipientFilter::RemoveRecipientsByTeamNumber(&filter, v6++);
        if ( v6 == 13 )
          goto LABEL_7;
      }
    }
  }
LABEL_7:
  v9 = CBaseEntity::EmitSound(&filter, 0, &params);
  params.m_UtlVecSoundOrigin.m_Size = 0;
  if ( (params.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&params.m_UtlVecSoundOrigin.m_Memory);
    if ( (params.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&params.m_UtlVecSoundOrigin.m_Memory);
  }
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
  return v9;
}


// CDOTA_Modifier_Teleporting::OnCreated  (line 1774, @0x000000000261dae0, libserver.so)  // inlines: Get, GetBool, GetHealthPercent, GetInstance, GetParent, SetCoopState, StartIntervalThink, V_strncpy<long unsigned int>, operator=
// calls: KeyValues::GetFloat, KeyValues::GetInt, KeyValues::GetString, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindReplacementSound, _V_strncpy, MakeOnUnitMovedEvent, FireModifierEvent, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetHealth, CDOTA_BaseNPC_Hero::GetNearestPet, CDOTA_BaseNPC::StartGesture (19 total)
// strings: "start_z", "start_y", "start_x", "end_z", "end_y", "end_x" (17 total)
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_Modifier_Teleporting::OnCreated(CDOTA_Modifier_Teleporting *const this, KeyValues *pKV)
{
  float v2; // xmm1_4
  __m128i v5; // xmm0
  vec_t v6; // r13d
  float v7; // xmm1_4
  __m128i v8; // xmm0
  vec_t v9; // r14d
  float v10; // xmm1_4
  vec_t Float; // xmm0_4
  float v12; // xmm1_4
  __m128i v13; // xmm0
  vec_t v14; // r13d
  float v15; // xmm1_4
  __m128i v16; // xmm0
  vec_t v17; // r14d
  float v18; // xmm1_4
  vec_t v19; // xmm0_4
  float v20; // xmm1_4
  const char *String; // r13
  CDOTA_BaseNPC *Caster; // rax
  const char *ReplacementSound; // rax
  const char *v24; // r14
  CDOTA_BaseNPC *v25; // rax
  const char *v26; // rax
  const char *v27; // rax
  const char *v28; // rax
  CDOTA_BaseNPC *v29; // rax
  CEntityInstance *v30; // rax
  CDOTA_BaseNPC_Hero *v31; // r15
  int v32; // eax
  float v33; // xmm1_4
  __int64 v34; // rcx
  CEntityInstance *v35; // rax
  CDOTA_BaseNPC_Pet *NearestPet; // rax
  CDOTA_BaseNPC_Pet *v37; // r15
  CDOTA_BaseNPC *v38; // rax
  float m_fChannelTime; // xmm0_4
  double v40; // xmm0_8
  vec_t z; // xmm1_4
  float v42; // xmm0_4
  bool v43; // al
  CDOTA_BaseNPC *v44; // rax
  CDOTA_Buff *v45; // rax
  CDOTA_BaseNPC *v46; // rax
  __int64 v47; // [rsp-10h] [rbp-F0h]
  __int64 v48; // [rsp-8h] [rbp-E8h] BYREF
  CModifierParams params; // [rsp+0h] [rbp-E0h] BYREF
  unsigned __int64 kv_16; // [rsp+A0h] [rbp-40h] OVERLAPPED
  SndOpEventGuid_t Sound; // 0:rax.8
  SndOpEventGuid_t v52; // 0:rax.8

  kv_16 = __readfsqword(0x28u);
  *v5.m128i_i32 = KeyValues::GetFloat(pKV, "start_z", v2);
  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
  *v8.m128i_i32 = KeyValues::GetFloat(pKV, "start_y", v7);
  v9 = COERCE_FLOAT(_mm_cvtsi128_si32(v8));
  Float = KeyValues::GetFloat(pKV, "start_x", v10);
  this->m_vStart.y = v9;
  this->m_vStart.x = Float;
  this->m_vStart.z = v6;
  *v13.m128i_i32 = KeyValues::GetFloat(pKV, "end_z", v12);
  v14 = COERCE_FLOAT(_mm_cvtsi128_si32(v13));
  *v16.m128i_i32 = KeyValues::GetFloat(pKV, "end_y", v15);
  v17 = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
  v19 = KeyValues::GetFloat(pKV, "end_x", v18);
  this->m_vEnd.y = v17;
  this->m_vEnd.x = v19;
  this->m_vEnd.z = v14;
  this->m_fChannelTime = KeyValues::GetFloat(pKV, "channel_time", v20);
  this->m_bSkipTeleportAnim = KeyValues::GetInt(pKV, "skip_teleport_gesture", 0) != 0;
  String = KeyValues::GetString(pKV, "loop_appear_sound", "Portal.Loop_Appear", 0, 0);
  Caster = CDOTA_Buff::GetCaster(this);
  ReplacementSound = CDOTA_BaseNPC::FindReplacementSound(Caster, String);
  _V_strncpy(this->m_iszPortalLoopAppear, ReplacementSound, 260);
  v24 = KeyValues::GetString(pKV, "loop_disappear_sound", "Portal.Loop_Disappear", 0, 0);
  v25 = CDOTA_Buff::GetCaster(this);
  v26 = CDOTA_BaseNPC::FindReplacementSound(v25, v24);
  _V_strncpy(this->m_iszPortalLoopDisappear, v26, 260);
  v27 = KeyValues::GetString(pKV, "hero_appear_sound", "Portal.Hero_Appear", 0, 0);
  _V_strncpy(this->m_iszHeroLoopAppear, v27, 260);
  v28 = KeyValues::GetString(pKV, "hero_disappear_sound", "Portal.Hero_Disappear", 0, 0);
  _V_strncpy(this->m_iszHeroLoopDisappear, v28, 260);
  v29 = CDOTA_Buff::GetCaster(this);
  MakeOnUnitMovedEvent(&v48, v29, &this->m_vStart, &this->m_vEnd);
  FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_TELEPORTING, &v48);
  this->m_bPlayingCoopAnim = 0;
  this->m_bIsPlayingTauntGesture = 0;
  v30 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
  v31 = v30;
  if ( (v30[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
  {
    v47 = 100LL * CBaseEntity::GetHealth(v30);
    v32 = (*(v31->_vptr_IHandleEntity + 156))(v31);
    v34 = 1;
    if ( v32 > 0 )
      v34 = v32;
    if ( (v47 / v34) <= 14 )
    {
      v43 = CDOTA_BaseNPC_Hero::PerformAutoTaunt(v31, v33, 0);
      this->m_bIsPlayingTauntGesture = v43;
      if ( v43 )
      {
        KeyValues::KeyValues(&params.htarget, "CDOTA_Modifier_Teleporting::OnCreated");
        v44 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
        v45 = CDOTA_BaseNPC::AddNewModifier(v44, v31, 0, "modifier_disable_taunt_animation_cancel", &params.htarget, 0);
        if ( v45 != 0 )
          (*(v45->_vptr_CDOTA_Buff + 63))(v45, 0, this->m_fChannelTime);
        KeyValues::~KeyValues(&params.htarget);
      }
    }
  }
  if ( !this->m_bSkipTeleportAnim && !this->m_bIsPlayingTauntGesture )
  {
    v35 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
    if ( (v35[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 && SLODWORD(v35[117].m_hPrivateScope.m_hScope) > 0 )
    {
      NearestPet = CDOTA_BaseNPC_Hero::GetNearestPet(v35);
      v37 = NearestPet;
      if ( NearestPet != 0 && NearestPet->m_bReadyToPerformCoopTeleport )
      {
        this->m_bPlayingCoopAnim = 1;
        v38 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
        CDOTA_BaseNPC::StartGesture(v38, 1691, 0.25, 0.1, 9, 0, 1.0);
        v37->m_nCoopState = PetCoopStates_t::COOPTELEPORT_START_PERFORMING;
        m_fChannelTime = this->m_fChannelTime;
        this->m_flThinkTimeAccumulator = 0.0;
        this->m_flThinkInterval = m_fChannelTime - 0.67000002;
      }
    }
    if ( !this->m_bPlayingCoopAnim )
    {
      v46 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
      CDOTA_BaseNPC::StartGesture(v46, 1595, 0.25, 0.25, 9, 0, 1.0);
    }
  }
  Sound = CDOTA_Modifier_Teleporting::GenerateSound(this, this->m_iszPortalLoopAppear, *&this->m_vEnd.x, this->m_vEnd.z);
  v40 = *&this->m_vStart.x;
  z = this->m_vStart.z;
  this->m_nTeleportLoopAppearSoundPatch = Sound;
  v52 = CDOTA_Modifier_Teleporting::GenerateSound(this, this->m_iszPortalLoopDisappear, v40, z);
  v42 = this->m_fChannelTime;
  this->m_flThinkTimeAccumulator = 0.0;
  this->m_nTeleportLoopDisappearSoundPatch = v52;
  this->m_flThinkInterval = v42 - 0.25;
}


// CDOTA_Modifier_Teleporting::OnDestroy  (line 1845, @0x00000000025e7f80, libserver.so)  // inlines: Get, GetInstance, GetParent
// calls: CBaseEntity::StopSound, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::RemoveGesture, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_disable_taunt_animation_cancel"
void __fastcall CDOTA_Modifier_Teleporting::OnDestroy(CDOTA_Modifier_Teleporting *const this)
{
  CDOTA_BaseNPC *v2; // rax
  EHANDLE *p_m_hParent; // rbx
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax

  CBaseEntity::StopSound(&this->m_nTeleportLoopAppearSoundPatch);
  CBaseEntity::StopSound(&this->m_nTeleportLoopDisappearSoundPatch);
  if ( this->m_bIsPlayingTauntGesture )
  {
    v6 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
    CDOTA_BaseNPC::RemoveModifierByName(v6, "modifier_disable_taunt_animation_cancel");
  }
  if ( !this->m_bSkipTeleportAnim )
  {
    if ( this->m_bPlayingCoopAnim )
    {
      p_m_hParent = &this->m_hParent;
      v4 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
      CDOTA_BaseNPC::RemoveGesture(v4, 1691);
      v5 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
      CDOTA_BaseNPC::RemoveGesture(v5, 1693);
    }
    else
    {
      v2 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
      CDOTA_BaseNPC::RemoveGesture(v2, 1595);
    }
  }
}


// CDOTA_Modifier_Teleporting::OnIntervalThink  (line 1871, @0x00000000025fd130, libserver.so)  // inlines: Get, GetInstance, GetParent, SetCoopState, StartIntervalThink, ToDOTABaseNPCHero
// calls: CBaseEntity::StopSound, CDOTA_Modifier_Teleporting::GenerateSound, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC_Hero::GetNearestPet, CDOTA_BaseNPC::RemoveGesture, CDOTA_BaseNPC::StartGesture
void __fastcall CDOTA_Modifier_Teleporting::OnIntervalThink(CDOTA_Modifier_Teleporting *const this)
{
  double v2; // xmm0_8
  vec_t z; // xmm1_4
  EHANDLE *p_m_hParent; // rbx
  CEntityInstance *v5; // rax
  CDOTA_BaseNPC_Pet *NearestPet; // rax
  CDOTA_BaseNPC_Pet *v7; // r12
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax

  CBaseEntity::StopSound(&this->m_nTeleportLoopAppearSoundPatch);
  CBaseEntity::StopSound(&this->m_nTeleportLoopDisappearSoundPatch);
  v2 = *&this->m_vEnd.x;
  z = this->m_vEnd.z;
  this->m_flThinkInterval = 1.5;
  this->m_flThinkTimeAccumulator = 0.0;
  CDOTA_Modifier_Teleporting::GenerateSound(this, this->m_iszHeroLoopAppear, v2, z);
  CDOTA_Modifier_Teleporting::GenerateSound(this, this->m_iszHeroLoopDisappear, *&this->m_vStart.x, this->m_vStart.z);
  if ( this->m_bPlayingCoopAnim )
  {
    p_m_hParent = &this->m_hParent;
    v5 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
    if ( v5 != 0 && (v5[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
    {
      NearestPet = CDOTA_BaseNPC_Hero::GetNearestPet(v5);
      v7 = NearestPet;
      if ( NearestPet != 0 && NearestPet->m_bReadyToPerformCoopTeleport )
      {
        v8 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
        CDOTA_BaseNPC::RemoveGesture(v8, 1691);
        v9 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
        CDOTA_BaseNPC::StartGesture(v9, 1693, 0.1, 0.1, 9, 0, 1.0);
        v7->m_nCoopState = PetCoopStates_t::COOPTELEPORT_PLAY_ENDANIM;
      }
    }
  }
}


// CDOTA_Modifier_Teleporting::AddCustomTransmiterData  (line 1903, @0x00000000025e56d0, libserver.so)  // inlines: assign, length, mutable_v_end, mutable_v_start, set_channel_time, set_has_channel_time, set_has_hero_loop_appear, set_has_hero_loop_disappear, set_has_portal_loop_appear, set_has_portal_loop_disappear, set_has_v_end, set_has_v_start, set_has_x, set_has_y, set_has_z, set_hero_loop_appear, set_hero_loop_disappear, set_portal_loop_appear, set_portal_loop_disappear, set_x, set_y, set_z
// calls: strlen, std::string::assign(char const*,ulong), operator new, CMsgVector::CMsgVector, operator delete, _Unwind_Resume
void __fastcall CDOTA_Modifier_Teleporting::AddCustomTransmiterData(
        CDOTA_Modifier_Teleporting *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  int v4; // eax
  int v5; // edx
  vec_t x; // r13d
  CMsgVector *v7; // rax
  CMsgVector *v8; // rax
  vec_t y; // r13d
  CMsgVector *v10; // rax
  vec_t z; // r13d
  CMsgVector *v12; // rax
  vec_t v13; // r13d
  CMsgVector *v14; // rax
  vec_t v15; // r13d
  CMsgVector *v16; // rax
  vec_t v17; // r13d
  size_t v18; // rax
  size_t v19; // rax
  char *m_iszPortalLoopDisappear; // rsi
  char *m_iszHeroLoopAppear; // r13
  char *m_iszHeroLoopDisappear; // r12
  size_t v23; // rax
  size_t v24; // rax
  CMsgVector *v25; // r14
  CMsgVector *v26; // r14
  CMsgVector *v27; // r14
  CMsgVector *v28; // r14
  CMsgVector *v29; // r14
  CMsgVector *v30; // r14

  v4 = *(entry + 4);
  *(entry + 19) = LODWORD(this->m_fChannelTime);
  v5 = v4;
  BYTE1(v4) |= 0xC0u;
  BYTE1(v5) |= 0x40u;
  *(entry + 4) = v5;
  x = this->m_vStart.x;
  *(entry + 4) = v4;
  v7 = *(entry + 10);
  if ( v7 == 0 )
  {
    v25 = operator new(0x28u);
    CMsgVector::CMsgVector(v25);
    *(entry + 10) = v25;
    v7 = v25;
  }
  *(v7 + 4) |= 1u;
  *(v7 + 6) = x;
  v8 = *(entry + 10);
  y = this->m_vStart.y;
  *(entry + 4) |= 0x8000u;
  if ( v8 == 0 )
  {
    v26 = operator new(0x28u);
    CMsgVector::CMsgVector(v26);
    *(entry + 10) = v26;
    v8 = v26;
  }
  *(v8 + 4) |= 2u;
  *(v8 + 7) = y;
  v10 = *(entry + 10);
  z = this->m_vStart.z;
  *(entry + 4) |= 0x8000u;
  if ( v10 == 0 )
  {
    v27 = operator new(0x28u);
    CMsgVector::CMsgVector(v27);
    *(entry + 10) = v27;
    v10 = v27;
  }
  *(v10 + 4) |= 4u;
  *(v10 + 8) = z;
  v12 = *(entry + 11);
  v13 = this->m_vEnd.x;
  *(entry + 4) |= 0x10000u;
  if ( v12 == 0 )
  {
    v28 = operator new(0x28u);
    CMsgVector::CMsgVector(v28);
    *(entry + 11) = v28;
    v12 = v28;
  }
  *(v12 + 4) |= 1u;
  *(v12 + 6) = v13;
  v14 = *(entry + 11);
  v15 = this->m_vEnd.y;
  *(entry + 4) |= 0x10000u;
  if ( v14 == 0 )
  {
    v29 = operator new(0x28u);
    CMsgVector::CMsgVector(v29);
    *(entry + 11) = v29;
    v14 = v29;
  }
  *(v14 + 4) |= 2u;
  *(v14 + 7) = v15;
  v16 = *(entry + 11);
  v17 = this->m_vEnd.z;
  *(entry + 4) |= 0x10000u;
  if ( v16 == 0 )
  {
    v30 = operator new(0x28u);
    CMsgVector::CMsgVector(v30);
    *(entry + 11) = v30;
    v16 = v30;
  }
  *(v16 + 4) |= 4u;
  *(v16 + 8) = v17;
  *(entry + 4) |= 0x20000u;
  v18 = strlen(this->m_iszPortalLoopAppear);
  std::string::assign(*(entry + 12), this->m_iszPortalLoopAppear, v18);
  *(entry + 4) |= 0x40000u;
  v19 = strlen(this->m_iszPortalLoopDisappear);
  m_iszPortalLoopDisappear = this->m_iszPortalLoopDisappear;
  m_iszHeroLoopAppear = this->m_iszHeroLoopAppear;
  m_iszHeroLoopDisappear = this->m_iszHeroLoopDisappear;
  std::string::assign(*(entry + 13), m_iszPortalLoopDisappear, v19);
  *(entry + 4) |= 0x80000u;
  v23 = strlen(m_iszHeroLoopAppear);
  std::string::assign(*(entry + 14), m_iszHeroLoopAppear, v23);
  *(entry + 4) |= 0x100000u;
  v24 = strlen(m_iszHeroLoopDisappear);
  std::string::assign(*(entry + 15), m_iszHeroLoopDisappear, v24);
}


// CDOTA_Modifier_Teleporting::DeclareFunctions  (line 1918, @0x00000000025de750, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Teleporting::OnTeleported(CModifierParams const&)
void __fastcall CDOTA_Modifier_Teleporting::DeclareFunctions(CDOTA_Modifier_Teleporting *const this)
{
  this->m_Functions[142].__pfn = CDOTA_Modifier_Teleporting::OnTeleported;
  this->m_Functions[142].__delta = 0;
}


// CDOTA_Modifier_Teleporting::OnTeleported  (line 1923, @0x00000000025e8b80, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, SetCoopState, ToDOTABaseNPCHero, operator CEntityInstance*
// calls: CDOTAGamerules::IsInRangeOfFountain, CEntityHandle::operator CEntityInstance*, EconEntity_OnOwnerKillEaterEvent, CDOTA_BaseNPC_Hero::GetNearestPet
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
ModifierVariant_t __fastcall CDOTA_Modifier_Teleporting::OnTeleported(
        CDOTA_Modifier_Teleporting *const this,
        const CModifierParams *const params)
{
  CEntityInstance *m_pInstance; // rsi
  Vector *p_m_vEnd; // rdx
  EHANDLE *p_m_hParent; // r12
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rdi
  CEntityIdentity *v8; // rcx
  CEntityIdentity *v9; // rcx
  CEntityInstance *v10; // rax
  CDOTA_BaseNPC_Hero *v11; // rdi
  CEntityInstance *v12; // rax
  CDOTA_BaseNPC_Pet *NearestPet; // rax

  m_pInstance = 0;
  p_m_vEnd = &this->m_vEnd;
  p_m_hParent = &this->m_hParent;
  m_Index = this->m_hParent.m_Index;
  if ( m_Index + 2 > 1 )
  {
    m_Index_low = LOWORD(this->m_hParent.m_Index);
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[m_Index_low & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  if ( CDOTAGamerules::IsInRangeOfFountain(g_pGameRules, HIBYTE(m_pInstance[7].m_CScriptComponent), p_m_vEnd) )
  {
    v10 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
    if ( v10 != 0 && (v10[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
      v11 = v10;
    else
      v11 = 0;
    EconEntity_OnOwnerKillEaterEvent(
      v11,
      0,
      kill_eater_event_t::kKillEaterEvent_Tinker_TPsToBase,
      1,
      INVALID_ITEM_DEF_INDEX);
  }
  if ( this->m_bPlayingCoopAnim )
  {
    v12 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
    if ( v12 != 0 && (v12[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
    {
      NearestPet = CDOTA_BaseNPC_Hero::GetNearestPet(v12);
      if ( NearestPet != 0 )
        NearestPet->m_nCoopState = PetCoopStates_t::COOPTELEPORT_PLAY_EXITANIM;
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Hexed::OnCreated  (line 1964, @0x00000000025de770, libserver.so)
// callers: CDOTA_Modifier_ShadowShaman_Voodoo::OnCreated, CDOTA_Modifier_Lion_Voodoo::OnCreated, CDOTA_Modifier_SheepStick_Debuff::OnCreated
void __fastcall CDOTA_Modifier_Hexed::OnCreated(CDOTA_Modifier_Hexed *const this, KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_Hexed::OnDestroy  (line 1977, @0x00000000025de780, libserver.so)
// callers: CDOTA_Modifier_ShadowShaman_Voodoo::OnDestroy
void __fastcall CDOTA_Modifier_Hexed::OnDestroy(CDOTA_Modifier_Hexed *const this)
{
  ;
}


// CDOTA_Modifier_Hexed::CheckState  (line 1987, @0x00000000025de790, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Hexed::CheckState(CDOTA_Modifier_Hexed *const this, CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x5AuLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFFFFA5LL;
}


// CDOTA_Modifier_Hexed::OnRefresh  (line 1998, @0x00000000025de7b0, libserver.so)
void __fastcall CDOTA_Modifier_Hexed::OnRefresh(CDOTA_Modifier_Hexed *const this, KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_Hexed::SpeakMorphConcept  (line 2007, @0x00000000025e8040, libserver.so)  // inlines: Get, GetInstance, GetParent, SpeakConcept
// calls: CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CEntityHandle::operator CEntityInstance*, CDOTA_Speech::SpeakConcept, CResponseCriteriaSet::~CResponseCriteriaSet, _Unwind_Resume
// strings: "morphedtype", "morphed"
bool __fastcall CDOTA_Modifier_Hexed::SpeakMorphConcept(CDOTA_Modifier_Hexed *const this)
{
  const char *v2; // rax
  float v3; // xmm2_4
  int (**vptr_IHandleEntity)(...); // rdi
  bool v5; // al
  bool v7; // [rsp+1Ch] [rbp-54h]
  CResponseCriteriaSet criteria; // [rsp+20h] [rbp-50h] BYREF

  CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
  v2 = (*(this->_vptr_CDOTA_Buff + 89))(this);
  CResponseCriteriaSet::AppendCriteria(&criteria, "morphedtype", v2, 1.0);
  CResponseCriteriaSet::AppendCriteria(&criteria, "morphed", 1.0, v3);
  vptr_IHandleEntity = CEntityHandle::operator CEntityInstance *(&this->m_hParent)[70]._vptr_IHandleEntity;
  v5 = vptr_IHandleEntity != 0 && CDOTA_Speech::SpeakConcept(vptr_IHandleEntity, 18, &criteria, 4, 0, 0, 0, 0);
  v7 = v5;
  CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  return v7;
}


// CDOTA_Modifier_Hexed::DeclareFunctions  (line 2017, @0x00000000025de7c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Hexed::GetModifierMoveSpeedOverride(CModifierParams const&), CDOTA_Modifier_Hexed::GetModifierModelChange(CModifierParams const&)
void __fastcall CDOTA_Modifier_Hexed::DeclareFunctions(CDOTA_Modifier_Hexed *const this)
{
  this->m_Functions[12].__pfn = CDOTA_Modifier_Hexed::GetModifierMoveSpeedOverride;
  this->m_Functions[12].__delta = 0;
  this->m_Functions[152].__delta = 0;
  this->m_Functions[152].__pfn = CDOTA_Modifier_Hexed::GetModifierModelChange;
}


// CDOTA_Modifier_Hexed::GetModifierModelChange  (line 2024, @0x00000000025de800, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Hexed::GetModifierModelChange(
        CDOTA_Modifier_Hexed *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = (*(this->_vptr_CDOTA_Buff + 91))(this, params);
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_Hexed::GetModifierMoveSpeedOverride  (line 2029, @0x00000000025de820, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Hexed::GetModifierMoveSpeedOverride(
        CDOTA_Modifier_Hexed *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i64 = (*(this->_vptr_CDOTA_Buff + 92))(this, params);
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Hexed::GetHexModel  (line 2035, @0x00000000025eaf70, libserver.so)  // inlines: GetCustomHexModel, IsEmpty, ToDOTABaseNPCHero
// calls: CDOTA_Buff::GetCaster, CUtlString::Get
const char *__fastcall CDOTA_Modifier_Hexed::GetHexModel(CDOTA_Modifier_Hexed *const this)
{
  const char *v2; // r12
  CDOTA_BaseNPC *Caster; // rax
  const CUtlString *v4; // rbx
  _BYTE *v5; // rax
  char *m_pString; // rax

  v2 = (*(this->_vptr_CDOTA_Buff + 90))(this);
  Caster = CDOTA_Buff::GetCaster(this);
  v4 = Caster;
  if ( Caster == 0 )
    return v2;
  if ( (Caster->m_iUnitType & 1) == 0 )
    return v2;
  v5 = *&Caster[1].m_viewtarget.m_Value.z;
  if ( v5 == 0 || *v5 == 0 || CUtlString::Get(v4 + 719) == 0 )
    return v2;
  m_pString = v4[719].m_pString;
  if ( m_pString == 0 || *m_pString == 0 )
    return 0;
  return CUtlString::Get(v4 + 719);
}


// CDOTA_Modifier_Knockback::OnCreated  (line 2059, @0x0000000002614900, libserver.so)  // inlines: AssignTo, CVariantBase, Destroy, DotaRetrieveAbilityValue<float>, Get, GetAbility, GetBool, GetInstance, GetLevelSpecialValueFor<float>, GetParent, VectorMultiply, VectorNormalize2D, VectorSubtract, operator*, operator-, operator=, operator==<CBaseEntity>, ~CVariantBase
// calls: KeyValues::GetFloat, KeyValues::GetInt, CEntityHandle::operator CEntityInstance*, CDOTALocomotor::ApplyHorizontalMotionController, CDOTALocomotor::ApplyVerticalMotionController, CBaseEntity::GetAbsOrigin, VectorNormalize, CDOTA_BaseNPC::StartGesture, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::Destroy, CVariantBase<CVariantDefaultAllocator>::Free
// callers: CDOTA_Modifier_Gold_Bag_Launch::OnCreated
// strings: "center_x", "center_y", "center_z", "should_stun", "knockback_height"
void __fastcall CDOTA_Modifier_Knockback::OnCreated(CDOTA_Modifier_Knockback *const this, KeyValues *pKV)
{
  float v2; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  int Int; // eax
  bool v9; // zf
  CEntityInstance *v10; // rax
  CDOTALocomotor *v11; // rax
  CEntityInstance *v12; // rax
  CDOTALocomotor *v13; // rax
  const CBaseEntity *v14; // rax
  const Vector *AbsOrigin; // rax
  float y; // xmm0_4
  float x; // xmm1_4
  float v18; // xmm1_4
  float knockback_distance; // xmm0_4
  vec_t v20; // xmm2_4
  vec_t v21; // xmm1_4
  vec_t v22; // xmm0_4
  const CBaseEntity *v23; // rax
  const Vector *v24; // rax
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v26; // rax
  CDOTABaseAbility *v27; // rax
  CDOTABaseAbility *v28; // rax
  CDOTABaseAbility *v29; // rax
  __int64 v30; // [rsp-8h] [rbp-28h] BYREF
  Vector vDirection; // [rsp+0h] [rbp-20h]

  this->m_vCenter.x = KeyValues::GetFloat(pKV, "center_x", v2);
  this->m_vCenter.y = KeyValues::GetFloat(pKV, "center_y", v5);
  this->m_vCenter.z = KeyValues::GetFloat(pKV, "center_z", v6);
  this->m_bShouldStun = KeyValues::GetInt(pKV, "should_stun", 1) != 0;
  this->knockback_duration = KeyValues::GetFloat(pKV, "knockback_duration", v7);
  this->knockback_distance = KeyValues::GetInt(pKV, "knockback_distance", 0);
  Int = KeyValues::GetInt(pKV, "knockback_height", 0);
  v9 = this->knockback_duration == 0.0;
  this->knockback_height = Int;
  if ( v9 )
  {
    v28 = CEntityHandle::operator CEntityInstance *(&this->m_hAbility);
    if ( v28 != 0 )
    {
      this->knockback_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v28, "knockback_duration", -1, 0);
    }
    else
    {
      this->knockback_duration = 0.0;
      vDirection.x = 0.0;
      v30 = 0;
      CVariantBase<CVariantDefaultAllocator>::Free(&v30);
    }
  }
  if ( this->knockback_distance == 0.0 )
  {
    v29 = CEntityHandle::operator CEntityInstance *(&this->m_hAbility);
    DotaRetrieveAbilityValue<int>(v29, &this->knockback_distance, "knockback_distance");
  }
  if ( this->knockback_height == 0.0 )
  {
    v27 = CEntityHandle::operator CEntityInstance *(&this->m_hAbility);
    DotaRetrieveAbilityValue<int>(v27, &this->knockback_height, "knockback_height");
  }
  if ( this->knockback_duration == 0.0
    || this->knockback_distance == 0.0 && this->knockback_height == 0.0
    || (v10 = CEntityHandle::operator CEntityInstance *(&this->m_hParent),
        v11 = (*(v10->_vptr_IHandleEntity + 376))(v10),
        !CDOTALocomotor::ApplyHorizontalMotionController(v11, &this->CHorizontalMotionController, 0))
    || (v12 = CEntityHandle::operator CEntityInstance *(&this->m_hParent),
        v13 = (*(v12->_vptr_IHandleEntity + 376))(v12),
        !CDOTALocomotor::ApplyVerticalMotionController(v13, &this->CVerticalMotionController, 0)) )
  {
    if ( (*(&this->CDOTA_Buff + 138) & 4) == 0 )
      CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
  else
  {
    v14 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v14);
    y = AbsOrigin->y;
    x = AbsOrigin->x;
    vDirection.x = 0.0;
    v18 = x - this->m_vCenter.x;
    *(&v30 + 1) = y - this->m_vCenter.y;
    *&v30 = v18;
    VectorNormalize(&v30);
    knockback_distance = this->knockback_distance;
    v20 = *(&v30 + 1) * knockback_distance;
    v21 = vDirection.x * knockback_distance;
    v22 = knockback_distance * *&v30;
    this->m_vHorizOffset.y = v20;
    this->m_vHorizOffset.z = v21;
    this->m_vHorizOffset.x = v22;
    v23 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
    v24 = CBaseEntity::GetAbsOrigin(v23);
    this->m_vStartPosition.x = v24->x;
    this->m_vStartPosition.y = v24->y;
    z = v24->z;
    this->m_fCurrentTimeHoriz = 0.0;
    this->m_fCurrentTimeVert = 0.0;
    this->m_vStartPosition.z = z;
    v26 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
    CDOTA_BaseNPC::StartGesture(v26, 1508, 0.2, 0.5, 0, 0, 1.0);
  }
}


// CDOTA_Modifier_Knockback::UpdateHorizontalMotion  (line 2108, @0x00000000025eb010, libserver.so)  // inlines: Get, GetInstance, GetPaddedCollisionRadius, GetParent, VectorAdd, VectorMultiply, operator*, operator+
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, CGridNav::DestroyTreesAroundPoint, CBaseEntity::SetAbsOrigin
void __fastcall CDOTA_Modifier_Knockback::UpdateHorizontalMotion(
        CDOTA_Modifier_Knockback *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  EHANDLE *p_m_hParent; // rdi
  float v7; // xmm1_4
  float v8; // xmm2_4
  uint32 v9; // xmm0_4
  float v10; // xmm0_4
  unsigned int v11; // xmm2_4
  vec_t v12; // xmm1_4
  unsigned int v13; // xmm0_4
  const CBaseEntity *v14; // rax
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v16; // eax
  float v17; // xmm3_4
  Vector vTargetLoc; // [rsp+0h] [rbp-20h] BYREF

  p_m_hParent = &this->m_hParent;
  v7 = *&p_m_hParent[732].m_Index;
  v8 = *&p_m_hParent[734].m_Index;
  *&v9 = fminf(a3 + *&p_m_hParent[739].m_Index, v7);
  p_m_hParent[739].m_Index = v9;
  v10 = *&v9 / v7;
  *&v11 = (v8 * v10) + *&p_m_hParent[737].m_Index;
  v12 = (*&p_m_hParent[735].m_Index * v10) + *&p_m_hParent[738].m_Index;
  *&v13 = (v10 * *&p_m_hParent[733].m_Index) + *&p_m_hParent[736].m_Index;
  vTargetLoc.z = v12;
  *&vTargetLoc.x = __PAIR64__(v11, v13);
  v14 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
  vTargetLoc.z = CBaseEntity::GetAbsOrigin(v14)->z;
  Caster = CDOTA_Buff::GetCaster(this);
  v16 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 1, v16, vTargetLoc, me->m_flHullRadius + me->m_flCollisionPadding, v17);
  CBaseEntity::SetAbsOrigin(me, &vTargetLoc);
}


// CDOTA_Modifier_Knockback::UpdateVerticalMotion  (line 2125, @0x00000000025e8110, libserver.so)  // inlines: Get, GetInstance, GetParent
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, sin, CBaseEntity::SetAbsOrigin
void __fastcall CDOTA_Modifier_Knockback::UpdateVerticalMotion(
        CDOTA_Modifier_Knockback *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  EHANDLE *p_m_hParent; // r12
  const CBaseEntity *v6; // rax
  const Vector *AbsOrigin; // rax
  float v8; // xmm0_4
  double v9; // xmm0_8
  __m128d v10; // xmm1
  vec_t v11; // xmm3_4
  CBaseEntity *v12; // rax
  Vector vTargetLoc; // [rsp+0h] [rbp-20h] BYREF

  p_m_hParent = &this->m_hParent;
  this->m_fCurrentTimeVert = fminf(a3 + this->m_fCurrentTimeVert, this->knockback_duration);
  v6 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
  v8 = (this->m_fCurrentTimeVert / this->knockback_duration) * 3.1415999;
  *&vTargetLoc.x = *&AbsOrigin->x;
  v9 = sin(v8);
  v10 = _mm_cvtps_pd(LODWORD(this->m_vStartPosition.z));
  v10.m128d_f64[0] = v10.m128d_f64[0] + v9 * this->knockback_height;
  v11 = _mm_movedup_pd(v10).m128d_f64[0];
  vTargetLoc.z = v11;
  v12 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
  CBaseEntity::SetAbsOrigin(v12, &vTargetLoc);
}


// CDOTA_Modifier_Knockback::OnHorizontalMotionInterrupted  (line 2140, @0x0000000002614cf0, libserver.so)  // inlines: Destroy
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Knockback::OnHorizontalMotionInterrupted(CDOTA_Modifier_Knockback *const this)
{
  if ( (*(&this->CDOTA_Buff + 138) & 4) == 0 )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Knockback::OnVerticalMotionInterrupted  (line 2149, @0x0000000002614d20, libserver.so)  // inlines: Destroy
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Knockback::OnVerticalMotionInterrupted(CDOTA_Modifier_Knockback *const this)
{
  if ( (*(&this->CDOTA_Buff + 138) & 4) == 0 )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Knockback::OnDestroy  (line 2158, @0x00000000025e81d0, libserver.so)  // inlines: Get, GetInstance, GetParent
// calls: CEntityHandle::operator CEntityInstance*, CDOTALocomotor::RemoveHorizontalMotionController, CDOTALocomotor::RemoveVerticalMotionController, CDOTA_BaseNPC::FadeGesture
// callers: CDOTA_Modifier_Gold_Bag_Launch::OnDestroy, CDOTA_Modifier_DrowRanger_WaveOfSilence_Knockback::OnDestroy, CDOTA_Modifier_Kunkka_GhostShip_Knockback::OnDestroy, CDOTA_Modifier_BlindingLight_Knockback::OnDestroy
void __fastcall CDOTA_Modifier_Knockback::OnDestroy(CDOTA_Modifier_Knockback *const this)
{
  EHANDLE *p_m_hParent; // rbx
  CEntityInstance *v3; // rax
  CDOTALocomotor *v4; // rax
  CEntityInstance *v5; // rax
  CDOTALocomotor *v6; // rax
  CDOTA_BaseNPC *v7; // rax

  p_m_hParent = &this->m_hParent;
  v3 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
  v4 = (*(v3->_vptr_IHandleEntity + 376))(v3);
  CDOTALocomotor::RemoveHorizontalMotionController(v4, &this->CHorizontalMotionController);
  v5 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
  v6 = (*(v5->_vptr_IHandleEntity + 376))(v5);
  CDOTALocomotor::RemoveVerticalMotionController(v6, &this->CVerticalMotionController);
  v7 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
  CDOTA_BaseNPC::FadeGesture(v7, 1508);
}


// CDOTA_Modifier_Knockback::CheckState  (line 2170, @0x00000000025e5180, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Knockback::CheckState(
        CDOTA_Modifier_Knockback *const this,
        CDOTABuffState *const buffState)
{
  if ( this->m_bShouldStun )
  {
    buffState->m_nEnabledStateMask |= 0x20uLL;
    buffState->m_nDisabledStateMask &= ~0x20uLL;
  }
}


// CDOTA_Ability_BackdoorProtection::~CDOTA_Ability_BackdoorProtection  (line 2186, @0x00000000026300a0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_BackdoorProtection::~CDOTA_Ability_BackdoorProtection(
        CDOTA_Ability_BackdoorProtection *const this)
{
  this->_vptr_IHandleEntity = &off_4123050;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_BackdoorProtection::~CDOTA_Ability_BackdoorProtection  (line 2186, @0x00000000026300c0, libserver.so)  // inlines: ~CDOTA_Ability_BackdoorProtection
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_BackdoorProtection::~CDOTA_Ability_BackdoorProtection(
        CDOTA_Ability_BackdoorProtection *const this)
{
  this->_vptr_IHandleEntity = &off_4123050;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_BackdoorProtection::Schema_DynamicBinding  (line 2188, @0x00000000026259b0, libserver.so)
// globals: CDOTA_Ability_BackdoorProtection::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_BackdoorProtection::Schema_DynamicBinding(
        const CDOTA_Ability_BackdoorProtection *const this)
{
  return CDOTA_Ability_BackdoorProtection::s_pSchemaBinding;
}


// CDOTA_Ability_BackdoorProtection::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2188, @0x00000000026259c0, libserver.so)
// globals: CDOTA_Ability_BackdoorProtection::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_BackdoorProtection::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_BackdoorProtection::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_BackdoorProtection::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_BackdoorProtection::CEntityInstanceEntityClass::DestructInstance  (line 2188, @0x00000000026259d0, libserver.so)  // inlines: Destruct<CDOTA_Ability_BackdoorProtection>
void __fastcall CDOTA_Ability_BackdoorProtection::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_BackdoorProtection::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_BackdoorProtection::CEntityInstanceEntityClass::FreeInstance  (line 2188, @0x00000000026259f0, libserver.so)
void __fastcall CDOTA_Ability_BackdoorProtection::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_BackdoorProtection::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_BackdoorProtection::CEntityInstanceEntityClass::CanAllocate  (line 2188, @0x0000000002625a10, libserver.so)
bool __fastcall CDOTA_Ability_BackdoorProtection::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_BackdoorProtection::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_BackdoorProtection::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2188, @0x0000000002625a20, libserver.so)
// globals: CDOTA_Ability_BackdoorProtection::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_BackdoorProtection::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_BackdoorProtection::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_BackdoorProtection::s_pSchemaBinding;
}


// CDOTA_Ability_BackdoorProtection::CEntityInstanceEntityClass::AllocateInstance  (line 2188, @0x000000000262ddc0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_BackdoorProtection::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_BackdoorProtection::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_BackdoorProtection::CEntityInstanceEntityClass::ConstructInstance  (line 2188, @0x000000000262f240, libserver.so)  // inlines: CDOTA_Ability_BackdoorProtection, Construct<CDOTA_Ability_BackdoorProtection>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_BackdoorProtection::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_BackdoorProtection::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4123050;
  }
  return p;
}


// CDOTA_Ability_BackdoorProtection::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2188, @0x00000000026346b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_BackdoorProtection::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_BackdoorProtection::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_BackdoorProtection::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2188, @0x00000000026346d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_BackdoorProtection::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_BackdoorProtection::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_BackdoorProtection::GetEntityClassInternal  (line 2188, @0x000000000263c490, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_05.cpp
// strings: "CDOTA_Ability_BackdoorProtection"
// globals: `guard variable for'CDOTA_Ability_BackdoorProtection::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BackdoorProtectionClass, CDOTA_Ability_BackdoorProtection::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BackdoorProtectionClass, __dso_handle, CDOTA_Ability_BackdoorProtection::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_BackdoorProtection::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BackdoorProtectionClassInfo, CDOTA_Ability_BackdoorProtection::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BackdoorProtectionClassInfo
CEntityClass *__cdecl CDOTA_Ability_BackdoorProtection::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_BackdoorProtection::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BackdoorProtectionClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_BackdoorProtection::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BackdoorProtectionClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_BackdoorProtection::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BackdoorProtectionClass);
    CDOTA_Ability_BackdoorProtection::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BackdoorProtectionClass._vptr_CEntityClass = off_4122FD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_BackdoorProtection::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BackdoorProtectionClass);
    __cxa_atexit(
      CDOTA_Ability_BackdoorProtection::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_BackdoorProtection::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BackdoorProtectionClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_BackdoorProtectionClass != 0 )
    return &CDOTA_Ability_BackdoorProtection::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BackdoorProtectionClass;
  if ( `guard variable for'CDOTA_Ability_BackdoorProtection::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BackdoorProtectionClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_BackdoorProtection::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BackdoorProtectionClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_BackdoorProtection::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BackdoorProtectionClassInfo,
      "CDOTA_Ability_BackdoorProtection",
      "backdoor_protection",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_BackdoorProtection::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BackdoorProtectionClassInfo);
  }
  CDOTA_Ability_BackdoorProtection::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BackdoorProtectionClass.m_pClassInfo = &CDOTA_Ability_BackdoorProtection::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BackdoorProtectionClassInfo;
  CDOTA_Ability_BackdoorProtection::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BackdoorProtectionClass.m_pBaseClassInfo = CDOTA_Ability_BackdoorProtection::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BackdoorProtectionClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_BackdoorProtectionClass = &CDOTA_Ability_BackdoorProtection::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BackdoorProtectionClass;
  CDOTA_Ability_BackdoorProtection::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BackdoorProtectionClassInfo.m_pClass = &CDOTA_Ability_BackdoorProtection::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BackdoorProtectionClass;
  CDOTA_Ability_BackdoorProtection::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BackdoorProtectionClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_BackdoorProtectionClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_BackdoorProtection::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BackdoorProtectionClass;
}


// CDOTA_Ability_BackdoorProtection::GetIntrinsicModifierName  (line 2191, @0x0000000002625a30, libserver.so)
// strings: "modifier_backdoor_protection"
const char *__fastcall CDOTA_Ability_BackdoorProtection::GetIntrinsicModifierName(
        CDOTA_Ability_BackdoorProtection *const this)
{
  return "modifier_backdoor_protection";
}


// CDOTA_Ability_BackdoorProtectionInBase::~CDOTA_Ability_BackdoorProtectionInBase  (line 2198, @0x00000000026300f0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_BackdoorProtectionInBase::~CDOTA_Ability_BackdoorProtectionInBase(
        CDOTA_Ability_BackdoorProtectionInBase *const this)
{
  this->_vptr_IHandleEntity = &off_4123B50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_BackdoorProtectionInBase::~CDOTA_Ability_BackdoorProtectionInBase  (line 2198, @0x0000000002630110, libserver.so)  // inlines: ~CDOTA_Ability_BackdoorProtectionInBase
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_BackdoorProtectionInBase::~CDOTA_Ability_BackdoorProtectionInBase(
        CDOTA_Ability_BackdoorProtectionInBase *const this)
{
  this->_vptr_IHandleEntity = &off_4123B50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_BackdoorProtectionInBase::Schema_DynamicBinding  (line 2200, @0x0000000002625a40, libserver.so)
// globals: CDOTA_Ability_BackdoorProtectionInBase::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_BackdoorProtectionInBase::Schema_DynamicBinding(
        const CDOTA_Ability_BackdoorProtectionInBase *const this)
{
  return CDOTA_Ability_BackdoorProtectionInBase::s_pSchemaBinding;
}


// CDOTA_Ability_BackdoorProtectionInBase::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2200, @0x0000000002625a50, libserver.so)
// globals: CDOTA_Ability_BackdoorProtectionInBase::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_BackdoorProtectionInBase::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_BackdoorProtectionInBase::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_BackdoorProtectionInBase::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_BackdoorProtectionInBase::CEntityInstanceEntityClass::DestructInstance  (line 2200, @0x0000000002625a60, libserver.so)  // inlines: Destruct<CDOTA_Ability_BackdoorProtectionInBase>
void __fastcall CDOTA_Ability_BackdoorProtectionInBase::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_BackdoorProtectionInBase::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_BackdoorProtectionInBase::CEntityInstanceEntityClass::FreeInstance  (line 2200, @0x0000000002625a80, libserver.so)
void __fastcall CDOTA_Ability_BackdoorProtectionInBase::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_BackdoorProtectionInBase::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_BackdoorProtectionInBase::CEntityInstanceEntityClass::CanAllocate  (line 2200, @0x0000000002625aa0, libserver.so)
bool __fastcall CDOTA_Ability_BackdoorProtectionInBase::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_BackdoorProtectionInBase::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_BackdoorProtectionInBase::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2200, @0x0000000002625ab0, libserver.so)
// globals: CDOTA_Ability_BackdoorProtectionInBase::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_BackdoorProtectionInBase::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_BackdoorProtectionInBase::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_BackdoorProtectionInBase::s_pSchemaBinding;
}


// CDOTA_Ability_BackdoorProtectionInBase::CEntityInstanceEntityClass::AllocateInstance  (line 2200, @0x000000000262de00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_BackdoorProtectionInBase::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_BackdoorProtectionInBase::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_BackdoorProtectionInBase::CEntityInstanceEntityClass::ConstructInstance  (line 2200, @0x000000000262f270, libserver.so)  // inlines: CDOTA_Ability_BackdoorProtectionInBase, Construct<CDOTA_Ability_BackdoorProtectionInBase>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_BackdoorProtectionInBase::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_BackdoorProtectionInBase::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4123B50;
  }
  return p;
}


// CDOTA_Ability_BackdoorProtectionInBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2200, @0x0000000002634700, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_BackdoorProtectionInBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_BackdoorProtectionInBase::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_BackdoorProtectionInBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2200, @0x0000000002634720, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_BackdoorProtectionInBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_BackdoorProtectionInBase::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_BackdoorProtectionInBase::GetEntityClassInternal  (line 2200, @0x000000000263c5e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_05.cpp
// strings: "backdoor_protection_in_base", "CDOTA_Ability_BackdoorProtectionInBase"
// globals: `guard variable for'CDOTA_Ability_BackdoorProtectionInBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BackdoorProtectionInBaseClass, CDOTA_Ability_BackdoorProtectionInBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BackdoorProtectionInBaseClass, __dso_handle, CDOTA_Ability_BackdoorProtectionInBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_BackdoorProtectionInBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BackdoorProtectionInBaseClassInfo, CDOTA_Ability_BackdoorProtectionInBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BackdoorProtectionInBaseClassInfo
CEntityClass *__cdecl CDOTA_Ability_BackdoorProtectionInBase::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_BackdoorProtectionInBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BackdoorProtectionInBaseClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_BackdoorProtectionInBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BackdoorProtectionInBaseClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_BackdoorProtectionInBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BackdoorProtectionInBaseClass);
    CDOTA_Ability_BackdoorProtectionInBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BackdoorProtectionInBaseClass._vptr_CEntityClass = off_4123AD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_BackdoorProtectionInBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BackdoorProtectionInBaseClass);
    __cxa_atexit(
      CDOTA_Ability_BackdoorProtectionInBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_BackdoorProtectionInBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BackdoorProtectionInBaseClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_BackdoorProtectionInBaseClass != 0 )
    return &CDOTA_Ability_BackdoorProtectionInBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BackdoorProtectionInBaseClass;
  if ( `guard variable for'CDOTA_Ability_BackdoorProtectionInBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BackdoorProtectionInBaseClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_BackdoorProtectionInBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BackdoorProtectionInBaseClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_BackdoorProtectionInBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BackdoorProtectionInBaseClassInfo,
      "CDOTA_Ability_BackdoorProtectionInBase",
      "backdoor_protection_in_base",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_BackdoorProtectionInBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BackdoorProtectionInBaseClassInfo);
  }
  CDOTA_Ability_BackdoorProtectionInBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BackdoorProtectionInBaseClass.m_pClassInfo = &CDOTA_Ability_BackdoorProtectionInBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BackdoorProtectionInBaseClassInfo;
  CDOTA_Ability_BackdoorProtectionInBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BackdoorProtectionInBaseClass.m_pBaseClassInfo = CDOTA_Ability_BackdoorProtectionInBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BackdoorProtectionInBaseClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_BackdoorProtectionInBaseClass = &CDOTA_Ability_BackdoorProtectionInBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BackdoorProtectionInBaseClass;
  CDOTA_Ability_BackdoorProtectionInBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BackdoorProtectionInBaseClassInfo.m_pClass = &CDOTA_Ability_BackdoorProtectionInBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BackdoorProtectionInBaseClass;
  CDOTA_Ability_BackdoorProtectionInBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BackdoorProtectionInBaseClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_BackdoorProtectionInBaseClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_BackdoorProtectionInBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BackdoorProtectionInBaseClass;
}


// CDOTA_Ability_BackdoorProtectionInBase::GetIntrinsicModifierName  (line 2203, @0x0000000002625ac0, libserver.so)
// strings: "modifier_backdoor_protection_in_base"
const char *__fastcall CDOTA_Ability_BackdoorProtectionInBase::GetIntrinsicModifierName(
        CDOTA_Ability_BackdoorProtectionInBase *const this)
{
  return "modifier_backdoor_protection_in_base";
}


// CDOTA_Ability_FillerAbility::~CDOTA_Ability_FillerAbility  (line 2210, @0x0000000002630140, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_FillerAbility::~CDOTA_Ability_FillerAbility(CDOTA_Ability_FillerAbility *const this)
{
  this->_vptr_IHandleEntity = &off_4124650;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_FillerAbility::~CDOTA_Ability_FillerAbility  (line 2210, @0x0000000002630160, libserver.so)  // inlines: ~CDOTA_Ability_FillerAbility
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_FillerAbility::~CDOTA_Ability_FillerAbility(CDOTA_Ability_FillerAbility *const this)
{
  this->_vptr_IHandleEntity = &off_4124650;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_FillerAbility::Schema_DynamicBinding  (line 2212, @0x0000000002625ad0, libserver.so)
// globals: CDOTA_Ability_FillerAbility::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_FillerAbility::Schema_DynamicBinding(
        const CDOTA_Ability_FillerAbility *const this)
{
  return CDOTA_Ability_FillerAbility::s_pSchemaBinding;
}


// CDOTA_Ability_FillerAbility::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2212, @0x0000000002625ae0, libserver.so)
// globals: CDOTA_Ability_FillerAbility::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_FillerAbility::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_FillerAbility::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_FillerAbility::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_FillerAbility::CEntityInstanceEntityClass::DestructInstance  (line 2212, @0x0000000002625af0, libserver.so)  // inlines: Destruct<CDOTA_Ability_FillerAbility>
void __fastcall CDOTA_Ability_FillerAbility::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_FillerAbility::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_FillerAbility::CEntityInstanceEntityClass::FreeInstance  (line 2212, @0x0000000002625b10, libserver.so)
void __fastcall CDOTA_Ability_FillerAbility::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_FillerAbility::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_FillerAbility::CEntityInstanceEntityClass::CanAllocate  (line 2212, @0x0000000002625b30, libserver.so)
bool __fastcall CDOTA_Ability_FillerAbility::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_FillerAbility::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_FillerAbility::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2212, @0x0000000002625b40, libserver.so)
// globals: CDOTA_Ability_FillerAbility::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_FillerAbility::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_FillerAbility::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_FillerAbility::s_pSchemaBinding;
}


// CDOTA_Ability_FillerAbility::CEntityInstanceEntityClass::AllocateInstance  (line 2212, @0x000000000262de40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_FillerAbility::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_FillerAbility::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_FillerAbility::CEntityInstanceEntityClass::ConstructInstance  (line 2212, @0x000000000262f2a0, libserver.so)  // inlines: CDOTA_Ability_FillerAbility, Construct<CDOTA_Ability_FillerAbility>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_FillerAbility::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_FillerAbility::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4124650;
  }
  return p;
}


// CDOTA_Ability_FillerAbility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2212, @0x0000000002634750, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_FillerAbility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_FillerAbility::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_FillerAbility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2212, @0x0000000002634770, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_FillerAbility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_FillerAbility::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_FillerAbility::GetEntityClassInternal  (line 2212, @0x000000000263c730, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_05.cpp
// strings: "filler_ability", "CDOTA_Ability_FillerAbility"
// globals: `guard variable for'CDOTA_Ability_FillerAbility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FillerAbilityClass, CDOTA_Ability_FillerAbility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FillerAbilityClass, __dso_handle, CDOTA_Ability_FillerAbility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_FillerAbility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FillerAbilityClassInfo, CDOTA_Ability_FillerAbility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FillerAbilityClassInfo
CEntityClass *__cdecl CDOTA_Ability_FillerAbility::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_FillerAbility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FillerAbilityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_FillerAbility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FillerAbilityClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_FillerAbility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FillerAbilityClass);
    CDOTA_Ability_FillerAbility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FillerAbilityClass._vptr_CEntityClass = off_41245D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_FillerAbility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FillerAbilityClass);
    __cxa_atexit(
      CDOTA_Ability_FillerAbility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_FillerAbility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FillerAbilityClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_FillerAbilityClass != 0 )
    return &CDOTA_Ability_FillerAbility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FillerAbilityClass;
  if ( `guard variable for'CDOTA_Ability_FillerAbility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FillerAbilityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_FillerAbility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FillerAbilityClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_FillerAbility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FillerAbilityClassInfo,
      "CDOTA_Ability_FillerAbility",
      "filler_ability",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_FillerAbility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FillerAbilityClassInfo);
  }
  CDOTA_Ability_FillerAbility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FillerAbilityClass.m_pClassInfo = &CDOTA_Ability_FillerAbility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FillerAbilityClassInfo;
  CDOTA_Ability_FillerAbility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FillerAbilityClass.m_pBaseClassInfo = CDOTA_Ability_FillerAbility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FillerAbilityClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_FillerAbilityClass = &CDOTA_Ability_FillerAbility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FillerAbilityClass;
  CDOTA_Ability_FillerAbility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FillerAbilityClassInfo.m_pClass = &CDOTA_Ability_FillerAbility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FillerAbilityClass;
  CDOTA_Ability_FillerAbility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FillerAbilityClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_FillerAbilityClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_FillerAbility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FillerAbilityClass;
}


// CDOTA_Ability_FillerAbility::GetIntrinsicModifierName  (line 2215, @0x0000000002625b50, libserver.so)
// strings: "modifier_filler_thinker"
const char *__fastcall CDOTA_Ability_FillerAbility::GetIntrinsicModifierName(CDOTA_Ability_FillerAbility *const this)
{
  return "modifier_filler_thinker";
}


// CDOTA_Ability_FillerAbility::Precache  (line 2216, @0x000000000262fe40, libserver.so)
// calls: CDOTABaseAbility::Precache
// strings: "particles/world_shrine/radiant_shrine_ambient.vpcf", "particles/world_shrine/radiant_shrine_regen.vpcf", "particles/world_shrine/radiant_shrine_active.vpcf", "particles/world_shrine/dire_shrine_ambient.vpcf", "particles/world_shrine/dire_shrine_regen.vpcf", "particles/world_shrine/dire_shrine_active.vpcf"
void __fastcall CDOTA_Ability_FillerAbility::Precache(
        CDOTA_Ability_FillerAbility *const this,
        const CEntityPrecacheContext *pContext)
{
  CDOTABaseAbility::Precache(this, pContext);
  (**pContext->m_pManifest)(pContext->m_pManifest, "particles/world_shrine/radiant_shrine_ambient.vpcf");
  (**pContext->m_pManifest)(pContext->m_pManifest, "particles/world_shrine/radiant_shrine_regen.vpcf");
  (**pContext->m_pManifest)(pContext->m_pManifest, "particles/world_shrine/radiant_shrine_active.vpcf");
  (**pContext->m_pManifest)(pContext->m_pManifest, "particles/world_shrine/dire_shrine_ambient.vpcf");
  (**pContext->m_pManifest)(pContext->m_pManifest, "particles/world_shrine/dire_shrine_regen.vpcf");
  (**pContext->m_pManifest)(pContext->m_pManifest, "particles/world_shrine/dire_shrine_active.vpcf");
}


// CDOTA_Modifier_BackdoorProtection::~CDOTA_Modifier_BackdoorProtection  (line 2233, @0x0000000002651b60, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_BackdoorProtection::~CDOTA_Modifier_BackdoorProtection(
        CDOTA_Modifier_BackdoorProtection *const this)
{
  this->_vptr_CDOTA_Buff = &off_4125110;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_BackdoorProtection::~CDOTA_Modifier_BackdoorProtection  (line 2233, @0x0000000002651b80, libserver.so)  // inlines: ~CDOTA_Modifier_BackdoorProtection
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_BackdoorProtection::~CDOTA_Modifier_BackdoorProtection(
        CDOTA_Modifier_BackdoorProtection *const this)
{
  this->_vptr_CDOTA_Buff = &off_4125110;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_BackdoorProtection::IsHidden  (line 2238, @0x0000000002625b60, libserver.so)
bool __fastcall CDOTA_Modifier_BackdoorProtection::IsHidden(CDOTA_Modifier_BackdoorProtection *const this)
{
  return 1;
}


// CDOTA_Modifier_BackdoorProtection::ShouldSendToClients  (line 2239, @0x0000000002625b70, libserver.so)
bool __fastcall CDOTA_Modifier_BackdoorProtection::ShouldSendToClients(CDOTA_Modifier_BackdoorProtection *const this)
{
  return 0;
}


// CDOTA_Modifier_BackdoorProtection::UseRadiusCheck  (line 2243, @0x0000000002625b80, libserver.so)
bool __fastcall CDOTA_Modifier_BackdoorProtection::UseRadiusCheck(CDOTA_Modifier_BackdoorProtection *const this)
{
  return 1;
}


// CDOTA_Modifier_BackdoorProtection::OnCreated  (line 2269, @0x0000000002614d50, libserver.so)  // inlines: AssignTo, CUtlSymbolLarge, CVariantBase, Destroy, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, FStrEq, Get, GetAbility, GetEntityName, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetParent, Invalidate, NetworkStateChanged, Set, StartIntervalThink, String, ToCStr, _V_strcmp, operator=<float>, operator==<CBaseEntity>, ~CVariantBase
// calls: CEntityHandle::operator CEntityInstance*, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, DotaRetrieveAbilityValue<int>, CDOTA_Buff::Destroy, CVariantBase<CVariantDefaultAllocator>::Free
// strings: "good_healer_6", "good_healer_7", "good_healer_8", "bad_healer_6", "bad_healer_7", "bad_healer_8" (7 total)
void __fastcall CDOTA_Modifier_BackdoorProtection::OnCreated(
        CDOTA_Modifier_BackdoorProtection *const this,
        KeyValues *pKV)
{
  const char *m_pAsString; // rax
  CDOTABaseAbility *v4; // rdi
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CVariantBase<CVariantDefaultAllocator> v7; // [rsp+0h] [rbp-20h] BYREF

  m_pAsString = CEntityHandle::operator CEntityInstance *(&this->m_hParent)->m_pEntity->m_name.u.m_pAsString;
  if ( m_pAsString != 0 )
  {
    if ( m_pAsString == "good_healer_6"
      || strcmp(m_pAsString, "good_healer_6") == 0
      || m_pAsString == "good_healer_7"
      || strcmp(m_pAsString, "good_healer_7") == 0
      || m_pAsString == "good_healer_8"
      || strcmp(m_pAsString, "good_healer_8") == 0
      || m_pAsString == "bad_healer_6" )
    {
      goto LABEL_9;
    }
  }
  else
  {
    m_pAsString = "";
  }
  if ( strcmp(m_pAsString, "bad_healer_6") == 0
    || m_pAsString == "bad_healer_7"
    || strcmp(m_pAsString, "bad_healer_7") == 0
    || m_pAsString == "bad_healer_8"
    || strcmp(m_pAsString, "bad_healer_8") == 0 )
  {
LABEL_9:
    if ( (*(&this->CDOTA_Buff + 138) & 4) == 0 )
      CDOTA_Buff::Destroy(this, 0, 0, 0);
    return;
  }
  this->m_bActivated = 0;
  this->m_iHealthToRestore = 0;
  v4 = CEntityHandle::operator CEntityInstance *(&this->m_hAbility);
  if ( v4 != 0 )
  {
    this->activation_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "activation_time", -1, 0);
  }
  else
  {
    this->activation_time = 0.0;
    v7.m_type = 0;
    v7.m_flags = 0;
    v7.m_uint64 = 0;
    CVariantBase<CVariantDefaultAllocator>::Free(&v7);
  }
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hAbility);
  if ( v5 != 0 )
    this->regen_rate = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "regen_rate", -1, 0);
  else
    this->regen_rate = 0;
  if ( (*(this->_vptr_CDOTA_Buff + 89))(this) != 0 )
  {
    v6 = CEntityHandle::operator CEntityInstance *(&this->m_hAbility);
    DotaRetrieveAbilityValue<int>(v6, &this->radius, "radius");
  }
  if ( this->m_TimerToActivate.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_TimerToActivate._vptr_CountdownTimer + 2))(
      &this->m_TimerToActivate,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      -1.0);
    this->m_TimerToActivate.m_timestamp.m_Value = -1.0;
  }
  this->m_flThinkInterval = 0.1;
  this->m_flThinkTimeAccumulator = 0.0;
}


// CDOTA_Modifier_BackdoorProtection::OnIntervalThink  (line 2296, @0x00000000025ee250, libserver.so)  // inlines: Get, GetAbility, GetInstance, GetParent, Invalidate, IsElapsed, NetworkStateChanged, Set, Start, operator=<float>, operator==<CBaseEntity>
// calls: CountdownTimer::Now, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::Heal, CDOTA_BaseNPC::RemoveModifierByName, KeyValues::KeyValues, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_backdoor_protection_active"
void __fastcall CDOTA_Modifier_BackdoorProtection::OnIntervalThink(CDOTA_Modifier_BackdoorProtection *const this)
{
  int m_iHealthToRestore; // ecx
  int regen_rate; // kr00_4
  int v4; // r12d
  CBaseEntity *v5; // r13
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTABaseAbility *v8; // r14
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v10; // rax
  double v11; // xmm0_8
  double v12; // xmm1_8
  float v13; // [rsp+8h] [rbp-48h]
  float activation_time; // [rsp+Ch] [rbp-44h]
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-28h]

  v16 = __readfsqword(0x28u);
  if ( (*(this->_vptr_CDOTA_Buff + 90))(this) != 0 )
  {
    if ( this->m_TimerToActivate.m_timestamp.m_Value != -1.0 )
    {
      (*(this->m_TimerToActivate._vptr_CountdownTimer + 2))(
        &this->m_TimerToActivate,
        12,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL,
        -1.0);
      this->m_TimerToActivate.m_timestamp.m_Value = -1.0;
    }
    this->m_bActivated = 0;
    v7 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
    CDOTA_BaseNPC::RemoveModifierByName(v7, "modifier_backdoor_protection_active");
  }
  else if ( this->m_TimerToActivate.m_timestamp.m_Value <= 0.0 )
  {
    activation_time = this->activation_time;
    *&v11 = CountdownTimer::Now(&this->m_TimerToActivate) + activation_time;
    if ( *&v11 != this->m_TimerToActivate.m_timestamp.m_Value )
    {
      v13 = *&v11;
      (*(this->m_TimerToActivate._vptr_CountdownTimer + 2))(&this->m_TimerToActivate, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      *&v11 = LODWORD(v13);
      this->m_TimerToActivate.m_timestamp.m_Value = v13;
    }
    if ( activation_time != this->m_TimerToActivate.m_duration.m_Value )
    {
      (*(this->m_TimerToActivate._vptr_CountdownTimer + 2))(
        &this->m_TimerToActivate,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL,
        v11,
        v12,
        activation_time);
      this->m_TimerToActivate.m_duration.m_Value = activation_time;
    }
  }
  if ( !this->m_bActivated
    && this->m_TimerToActivate.m_timestamp.m_Value > 0.0
    && CountdownTimer::Now(&this->m_TimerToActivate) >= this->m_TimerToActivate.m_timestamp.m_Value )
  {
    this->m_bActivated = 1;
    KeyValues::KeyValues(&kv, "modifier_backdoor_protection_active");
    v8 = CEntityHandle::operator CEntityInstance *(&this->m_hAbility);
    Caster = CDOTA_Buff::GetCaster(this);
    v10 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
    CDOTA_BaseNPC::AddNewModifier(v10, Caster, v8, "modifier_backdoor_protection_active", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
  m_iHealthToRestore = this->m_iHealthToRestore;
  if ( m_iHealthToRestore > 0 )
  {
    regen_rate = this->regen_rate;
    if ( regen_rate / 10 <= m_iHealthToRestore )
      m_iHealthToRestore = regen_rate / 10;
    v4 = m_iHealthToRestore;
    v5 = CEntityHandle::operator CEntityInstance *(&this->m_hAbility);
    v6 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
    CDOTA_BaseNPC::Heal(v6, v4, v5, 0, 1);
    this->m_iHealthToRestore -= v4;
  }
}


// CDOTA_Modifier_BackdoorProtection::AreValidUnitsInRange  (line 2333, @0x00000000025fdcc0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Get, GetInstance, GetParent, GetTeamNumber, Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, __stack_chk_fail, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
bool __fastcall CDOTA_Modifier_BackdoorProtection::AreValidUnitsInRange(CDOTA_Modifier_BackdoorProtection *const this)
{
  EHANDLE *p_m_hParent; // r13
  float radius; // xmm1_4
  CDOTA_BaseNPC *v3; // r12
  const Vector *AbsOrigin; // r14
  CEntityInstance *v5; // rax
  bool v6; // r12
  float flRadius; // [rsp+1Ch] [rbp-144h]
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> hEntities; // [rsp+20h] [rbp-140h] BYREF
  unsigned __int64 v10; // [rsp+138h] [rbp-28h]

  p_m_hParent = &this->m_hParent;
  hEntities.m_Size = 0;
  v10 = __readfsqword(0x28u);
  radius = this->radius;
  hEntities.m_Memory.m_nAllocationCount = 64;
  hEntities.m_Memory.m_nGrowSize = 0x80000000;
  hEntities.m_Memory.m_pMemory = &hEntities.m_FixedMemory;
  flRadius = radius;
  v3 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
  v5 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
  FindUnitsInRadius(HIBYTE(v5[7].m_CScriptComponent), AbsOrigin, v3, flRadius, &hEntities, 2, 2, 6224, 0, 0);
  v6 = hEntities.m_Size > 0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEntities);
  if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
    if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
  }
  return v6;
}


// CDOTA_Modifier_BackdoorProtection::DeclareFunctions  (line 2347, @0x00000000025de840, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_BackdoorProtection::OnTakeDamage(CModifierParams const&), CDOTA_Modifier_BackdoorProtection::GetModifierIncomingDamage_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_BackdoorProtection::DeclareFunctions(CDOTA_Modifier_BackdoorProtection *const this)
{
  this->m_Functions[134].__pfn = CDOTA_Modifier_BackdoorProtection::OnTakeDamage;
  this->m_Functions[134].__delta = 0;
  this->m_Functions[36].__delta = 0;
  this->m_Functions[36].__pfn = CDOTA_Modifier_BackdoorProtection::GetModifierIncomingDamage_Percentage;
}


// CDOTA_Modifier_BackdoorProtection::OnTakeDamage  (line 2356, @0x00000000025e8c90, libserver.so)  // inlines: AttackerNPC, Get, GetInstance, GetParent, IsUnitMyParent, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*
// calls: CEntityHandle::operator CEntityInstance*
ModifierVariant_t __fastcall CDOTA_Modifier_BackdoorProtection::OnTakeDamage(
        CDOTA_Modifier_BackdoorProtection *const this,
        const CModifierParams *const params)
{
  CEntityInstance *v4; // rax
  CEntityInstance *v5; // r13
  CEntityInstance *v7; // rax

  if ( this->m_bActivated )
  {
    v4 = CEntityHandle::operator CEntityInstance *(&params->hunit);
    v5 = v4;
    if ( v4 != 0
      && BYTE3(v4[7]._vptr_IHandleEntity) != 0
      && v4 == CEntityHandle::operator CEntityInstance *(&this->m_hParent) )
    {
      v7 = CEntityHandle::operator CEntityInstance *(&params->hattacker);
      if ( v7 == 0
        || BYTE3(v7[7]._vptr_IHandleEntity) == 0
        || HIBYTE(v7[7].m_CScriptComponent) != HIBYTE(v5[7].m_CScriptComponent) )
      {
        this->m_iHealthToRestore = (this->m_iHealthToRestore + params->fDamage);
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_BackdoorProtection::GetModifierIncomingDamage_Percentage  (line 2376, @0x00000000025e6140, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_BackdoorProtection::GetModifierIncomingDamage_Percentage(
        CDOTA_Modifier_BackdoorProtection *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[params->hattacker.m_Index & 0x1FF];
  if ( v4 == 0 )
    return 1uLL;
  if ( m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  result.m_szVal = v4->m_pInstance;
  if ( result.m_szVal == 0 || *(result.m_szVal + 339) == 0 || !this->m_bActivated )
    return 1uLL;
  *&result.m_eType = 0xC296000000000001LL;
  if ( *(result.m_szVal + 3416) == 0 )
    *&result.m_eType = 0xC1C8000000000001LL;
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_BackdoorProtectionInBase::~CDOTA_Modifier_BackdoorProtectionInBase  (line 2399, @0x0000000002651bb0, libserver.so)  // inlines: ~CDOTA_Modifier_BackdoorProtection
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_BackdoorProtectionInBase::~CDOTA_Modifier_BackdoorProtectionInBase(
        CDOTA_Modifier_BackdoorProtectionInBase *const this)
{
  this->_vptr_CDOTA_Buff = &off_4125110;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_BackdoorProtectionInBase::~CDOTA_Modifier_BackdoorProtectionInBase  (line 2399, @0x0000000002651bd0, libserver.so)  // inlines: ~CDOTA_Modifier_BackdoorProtection, ~CDOTA_Modifier_BackdoorProtectionInBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_BackdoorProtectionInBase::~CDOTA_Modifier_BackdoorProtectionInBase(
        CDOTA_Modifier_BackdoorProtectionInBase *const this)
{
  this->_vptr_CDOTA_Buff = &off_4125110;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_BackdoorProtectionInBase::UseRadiusCheck  (line 2405, @0x0000000002625b90, libserver.so)
bool __fastcall CDOTA_Modifier_BackdoorProtectionInBase::UseRadiusCheck(
        CDOTA_Modifier_BackdoorProtectionInBase *const this)
{
  return 0;
}


// CDOTA_Modifier_BackdoorProtectionInBase::AreValidUnitsInRange  (line 2412, @0x00000000025e5c50, libserver.so)  // inlines: AreEnemyCreepsInBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Modifier_BackdoorProtectionInBase::AreValidUnitsInRange(
        CDOTA_Modifier_BackdoorProtectionInBase *const this)
{
  CEntityInstance *m_pInstance; // rcx
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  m_pInstance = 0;
  m_Index = this->m_hParent.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hParent.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
        m_pInstance = v4->m_pInstance;
    }
  }
  return *&g_pGameRules[69].m_szQuestName[24 * (HIBYTE(m_pInstance[7].m_CScriptComponent) != 2) + 56] > 0;
}


// CDOTA_Modifier_BackdoorProtectionActive::~CDOTA_Modifier_BackdoorProtectionActive  (line 2424, @0x00000000026529e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_BackdoorProtectionActive::~CDOTA_Modifier_BackdoorProtectionActive(
        CDOTA_Modifier_BackdoorProtectionActive *const this)
{
  this->_vptr_CDOTA_Buff = &off_4125750;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_BackdoorProtectionActive::~CDOTA_Modifier_BackdoorProtectionActive  (line 2424, @0x0000000002652a00, libserver.so)  // inlines: ~CDOTA_Modifier_BackdoorProtectionActive
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_BackdoorProtectionActive::~CDOTA_Modifier_BackdoorProtectionActive(
        CDOTA_Modifier_BackdoorProtectionActive *const this)
{
  this->_vptr_CDOTA_Buff = &off_4125750;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_ProjectileVision::~CDOTA_Modifier_ProjectileVision  (line 2436, @0x0000000002651ac0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_ProjectileVision::~CDOTA_Modifier_ProjectileVision(
        CDOTA_Modifier_ProjectileVision *const this)
{
  this->_vptr_CDOTA_Buff = &off_4125A70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_ProjectileVision::~CDOTA_Modifier_ProjectileVision  (line 2436, @0x0000000002651ae0, libserver.so)  // inlines: ~CDOTA_Modifier_ProjectileVision
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_ProjectileVision::~CDOTA_Modifier_ProjectileVision(
        CDOTA_Modifier_ProjectileVision *const this)
{
  this->_vptr_CDOTA_Buff = &off_4125A70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_ProjectileVision::IsHidden  (line 2441, @0x0000000002625ba0, libserver.so)
bool __fastcall CDOTA_Modifier_ProjectileVision::IsHidden(CDOTA_Modifier_ProjectileVision *const this)
{
  return 1;
}


// CDOTA_Modifier_ProjectileVision::CheckState  (line 2448, @0x00000000025de880, libserver.so)  // inlines: Enable
// callers: CDOTA_Modifier_ProjectileVisionOnMinimap::CheckState
void __fastcall CDOTA_Modifier_ProjectileVision::CheckState(
        CDOTA_Modifier_ProjectileVision *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x3904100uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFC6FBEFFLL;
}


// CDOTA_Modifier_ProjectileVisionOnMinimap::~CDOTA_Modifier_ProjectileVisionOnMinimap  (line 2462, @0x0000000002651b10, libserver.so)  // inlines: ~CDOTA_Modifier_ProjectileVision
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_ProjectileVisionOnMinimap::~CDOTA_Modifier_ProjectileVisionOnMinimap(
        CDOTA_Modifier_ProjectileVisionOnMinimap *const this)
{
  this->_vptr_CDOTA_Buff = &off_4125A70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_ProjectileVisionOnMinimap::~CDOTA_Modifier_ProjectileVisionOnMinimap  (line 2462, @0x0000000002651b30, libserver.so)  // inlines: ~CDOTA_Modifier_ProjectileVision, ~CDOTA_Modifier_ProjectileVisionOnMinimap
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_ProjectileVisionOnMinimap::~CDOTA_Modifier_ProjectileVisionOnMinimap(
        CDOTA_Modifier_ProjectileVisionOnMinimap *const this)
{
  this->_vptr_CDOTA_Buff = &off_4125A70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_ProjectileVisionOnMinimap::IsHidden  (line 2467, @0x0000000002625bb0, libserver.so)
bool __fastcall CDOTA_Modifier_ProjectileVisionOnMinimap::IsHidden(
        CDOTA_Modifier_ProjectileVisionOnMinimap *const this)
{
  return 1;
}


// CDOTA_Modifier_ProjectileVisionOnMinimap::CheckState  (line 2474, @0x00000000025de8a0, libserver.so)  // inlines: Disable
// calls: CDOTA_Modifier_ProjectileVision::CheckState
void __fastcall CDOTA_Modifier_ProjectileVisionOnMinimap::CheckState(
        CDOTA_Modifier_ProjectileVisionOnMinimap *const this,
        CDOTABuffState *const buffState)
{
  CDOTA_Modifier_ProjectileVision::CheckState(this, buffState);
  buffState->m_nDisabledStateMask |= 0x100000uLL;
  buffState->m_nEnabledStateMask &= ~0x100000uLL;
}


// CDOTA_Modifier_Cyclone::CheckState  (line 2489, @0x00000000025de8c0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Cyclone::CheckState(CDOTA_Modifier_Cyclone *const this, CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x800120uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFF7FFEDFLL;
}


// CDOTA_Modifier_Cyclone::GetEffectName  (line 2498, @0x00000000025de8e0, libserver.so)
// strings: "particles/items_fx/cyclone.vpcf"
const char *__fastcall CDOTA_Modifier_Cyclone::GetEffectName(CDOTA_Modifier_Cyclone *const this)
{
  return "particles/items_fx/cyclone.vpcf";
}


// CDOTA_Modifier_Cyclone::DeclareFunctions  (line 2503, @0x00000000025de8f0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Cyclone::GetOverrideAnimation(CModifierParams const&), CDOTA_Modifier_Cyclone::GetOverrideAnimationWeight(CModifierParams const&)
void __fastcall CDOTA_Modifier_Cyclone::DeclareFunctions(CDOTA_Modifier_Cyclone *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_Cyclone::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
  this->m_Functions[91].__delta = 0;
  this->m_Functions[91].__pfn = CDOTA_Modifier_Cyclone::GetOverrideAnimationWeight;
}


// CDOTA_Modifier_Cyclone::GetOverrideAnimation  (line 2509, @0x00000000025de930, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Cyclone::GetOverrideAnimation(
        CDOTA_Modifier_Cyclone *const this,
        const CModifierParams *const params)
{
  return 0x44BC800000000001uLL;
}


// CDOTA_Modifier_Cyclone::GetOverrideAnimationWeight  (line 2514, @0x00000000025e23e0, libserver.so)  // inlines: DOTAGameRules, GetGameTime
ModifierVariant_t __fastcall CDOTA_Modifier_Cyclone::GetOverrideAnimationWeight(
        CDOTA_Modifier_Cyclone *const this,
        const CModifierParams *const params)
{
  float v2; // xmm1_4
  float v3; // xmm0_4
  float v5; // xmm0_4
  float flElapsed; // [rsp+0h] [rbp-Ch]
  ModifierVariant_t result; // 0:rax.16

  v2 = 0.0;
  if ( g_pGameRules != 0 )
    v2 = *&g_pGameRules[18].m_szQuestName[20];
  flElapsed = v2 - this->m_flStartTime;
  (*(this->_vptr_CDOTA_Buff + 31))(this, params);
  if ( flElapsed < 0.2 )
  {
    *&result.m_eType = (COERCE_UNSIGNED_INT(fmaxf(0.0099999998, flElapsed / 0.2)) << 32) | 1;
LABEL_5:
    result.m_szVal = 0;
    return result;
  }
  *&result.m_eType = 0x3F80000000000001LL;
  v5 = (v3 - flElapsed) - 0.1;
  if ( v5 >= 0.5 )
    goto LABEL_5;
  result.m_szVal = 0;
  *&result.m_eType = (COERCE_UNSIGNED_INT(fmaxf(0.0099999998, v5 + v5)) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Cyclone::OnCreated  (line 2532, @0x0000000002614fa0, libserver.so)  // inlines: DOTAGameRules, Destroy, Get, GetGameTime, GetInstance, GetParent, operator=
// calls: CEntityHandle::operator CEntityInstance*, CDOTALocomotor::ApplyHorizontalMotionController, CDOTALocomotor::ApplyVerticalMotionController, CBaseEntity::GetAbsOrigin, GetPositionOnGround, CDOTA_Buff::Destroy
// callers: CDOTA_Modifier_Invoker_Tornado::OnCreated
void __fastcall CDOTA_Modifier_Cyclone::OnCreated(CDOTA_Modifier_Cyclone *const this, KeyValues *pKV)
{
  float v2; // xmm0_4
  CEntityInstance *v4; // rax
  CDOTALocomotor *v5; // rax
  CEntityInstance *v6; // rax
  CDOTALocomotor *v7; // rax
  CDOTA_BaseNPC *v8; // r12
  const Vector *AbsOrigin; // rax

  v2 = 0.0;
  if ( g_pGameRules != 0 )
    v2 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_flStartTime = v2;
  v4 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
  v5 = (*(v4->_vptr_IHandleEntity + 376))(v4);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v5, &this->CHorizontalMotionController, 0)
    && (v6 = CEntityHandle::operator CEntityInstance *(&this->m_hParent),
        v7 = (*(v6->_vptr_IHandleEntity + 376))(v6),
        CDOTALocomotor::ApplyVerticalMotionController(v7, &this->CVerticalMotionController, 0)) )
  {
    this->m_flCurTime = 0.0;
    this->m_flHeightT = 0.0;
    v8 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
    this->m_vStartPos = GetPositionOnGround(AbsOrigin, v8);
  }
  else if ( (*(&this->CDOTA_Buff + 138) & 4) == 0 )
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Cyclone::UpdateHorizontalMotion  (line 2550, @0x00000000025e1320, libserver.so)  // inlines: VectorAdd, operator*=, operator+
// calls: sincosf, CBaseEntity::SetAbsOrigin, floorf, CBaseEntity::GetAbsAngles, CBaseEntity::SetAbsAngles
void __fastcall CDOTA_Modifier_Cyclone::UpdateHorizontalMotion(
        CDOTA_Modifier_Cyclone *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  int (**vptr_CDOTA_Buff)(...); // rax
  float v7; // xmm0_4
  double v8; // xmm0_8
  float v9; // xmm1_4
  float v10; // xmm2_4
  float m_flCurTime; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm4_4
  float v14; // xmm3_4
  float v15; // xmm8_4
  float v16; // xmm7_4
  __m128d v17; // xmm5
  float v18; // xmm0_4
  __m128d v19; // xmm2
  float v20; // xmm0_4
  float v21; // xmm5_4
  float v22; // xmm4_4
  const QAngle *AbsAngles; // rax
  float v24; // xmm0_4
  __int64 v25; // rax
  float v27; // [rsp+10h] [rbp-70h]
  float vMajorCircle_4; // [rsp+18h] [rbp-68h]
  float vMajorCircle_8; // [rsp+1Ch] [rbp-64h]
  unsigned __int64 flSpinTotalTime; // [rsp+20h] [rbp-60h]
  float LEAD_IN_TIME; // [rsp+28h] [rbp-58h]
  __int64 NUM_SPINSa; // [rsp+2Ch] [rbp-54h]
  float NUM_SPINS; // [rsp+2Ch] [rbp-54h]
  float flFadeOutStart; // [rsp+34h] [rbp-4Ch]
  __int64 cosx; // [rsp+38h] [rbp-48h] BYREF
  Vector vNewPos; // [rsp+40h] [rbp-40h] BYREF
  QAngle angles; // [rsp+50h] [rbp-30h] BYREF

  vptr_CDOTA_Buff = this->_vptr_CDOTA_Buff;
  v7 = a3 + this->m_flCurTime;
  this->m_flCurTime = v7;
  v8 = (vptr_CDOTA_Buff[31])(v7, dt);
  v9 = ((*&v8 / 2.5) * 0.2) + 0.1;
  v10 = (0.1 * (*&v8 / 2.5)) + 0.2;
  flFadeOutStart = *&v8 - v10;
  m_flCurTime = this->m_flCurTime;
  if ( m_flCurTime >= v9 && flFadeOutStart >= m_flCurTime )
  {
    v16 = 0.0;
    v15 = 0.0;
    v14 = 20.0;
    v13 = 30.0;
    v12 = 1.0;
  }
  else if ( v9 > m_flCurTime )
  {
    v12 = m_flCurTime / v9;
    v13 = 30.0 * (m_flCurTime / v9);
    v14 = 20.0 * (m_flCurTime / v9);
    v15 = v13 * 0.0;
    v16 = 0.0 * v14;
  }
  else
  {
    v12 = 1.0 - ((m_flCurTime - flFadeOutStart) / v10);
    v13 = 30.0 * v12;
    v14 = 20.0 * v12;
    v15 = (30.0 * v12) * 0.0;
    v16 = 0.0 * (20.0 * v12);
  }
  this->m_flHeightT = v12;
  v17.m128d_f64[1] = m_flCurTime;
  LEAD_IN_TIME = v9;
  v27 = v16;
  vMajorCircle_4 = v14;
  vMajorCircle_8 = v13;
  v17.m128d_f64[0] = m_flCurTime * -6.283185307179586 / 1.5;
  *&flSpinTotalTime = m_flCurTime;
  v18 = _mm_movedup_pd(v17).m128d_f64[0];
  sincosf(v18, &cosx + 1, &cosx);
  v19 = flSpinTotalTime;
  NUM_SPINSa = cosx;
  v19.m128d_f64[0] = *&flSpinTotalTime * 6.283185307179586 / 0.699999988079071;
  v20 = _mm_movedup_pd(v19).m128d_f64[0];
  sincosf(v20, &cosx + 1, &cosx);
  v21 = (*&NUM_SPINSa * vMajorCircle_8) + this->m_vStartPos.y;
  v22 = (vMajorCircle_8 * *(&NUM_SPINSa + 1)) + this->m_vStartPos.x;
  vNewPos.z = (this->m_vStartPos.z + v15) + v27;
  vNewPos.y = (*&cosx * vMajorCircle_4) + v21;
  vNewPos.x = (vMajorCircle_4 * *(&cosx + 1)) + v22;
  CBaseEntity::SetAbsOrigin(me, &vNewPos);
  NUM_SPINS = floorf((((flFadeOutStart - LEAD_IN_TIME) - 0.60000002) / 0.44999999) + 1.0);
  AbsAngles = CBaseEntity::GetAbsAngles(me);
  v24 = this->m_flCurTime;
  v25 = *&AbsAngles->x;
  angles.z = 0.0;
  angles.y = *(&v25 + 1);
  angles.x = 0.0;
  if ( v24 > LEAD_IN_TIME && flFadeOutStart >= v24 )
    angles.y = (((NUM_SPINS * a3) * 360.0) / (flFadeOutStart - LEAD_IN_TIME)) + angles.y;
  CBaseEntity::SetAbsAngles(me, &angles);
}


// CDOTA_Modifier_Cyclone::UpdateVerticalMotion  (line 2593, @0x00000000025e1260, libserver.so)
// calls: sin, CBaseEntity::GetAbsOrigin, CBaseEntity::SetAbsOrigin
void __fastcall CDOTA_Modifier_Cyclone::UpdateVerticalMotion(
        CDOTA_Modifier_Cyclone *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  const Vector *AbsOrigin; // rax
  float m_flHeightT; // xmm3_4
  float z; // xmm2_4
  float v9; // xmm0_4
  double v10; // [rsp+8h] [rbp-28h]
  Vector vNewPos; // [rsp+10h] [rbp-20h] BYREF

  v10 = sin(this->m_flCurTime * -6.283185307179586 / 1.100000023841858);
  AbsOrigin = CBaseEntity::GetAbsOrigin(me);
  m_flHeightT = this->m_flHeightT;
  z = this->m_vStartPos.z;
  *&vNewPos.x = *&AbsOrigin->x;
  v9 = (v10 + 1.0) * 0.5 * 150.0;
  vNewPos.z = fmaxf(((320.0 * m_flHeightT) + z) + (v9 * m_flHeightT), z);
  CBaseEntity::SetAbsOrigin(me, &vNewPos);
}


// CDOTA_Modifier_Cyclone::OnHorizontalMotionInterrupted  (line 2607, @0x00000000026150c0, libserver.so)  // inlines: Destroy
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Cyclone::OnHorizontalMotionInterrupted(CDOTA_Modifier_Cyclone *const this)
{
  if ( (*(&this->CDOTA_Buff + 138) & 4) == 0 )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Cyclone::OnVerticalMotionInterrupted  (line 2614, @0x00000000026150f0, libserver.so)  // inlines: Destroy
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Cyclone::OnVerticalMotionInterrupted(CDOTA_Modifier_Cyclone *const this)
{
  if ( (*(&this->CDOTA_Buff + 138) & 4) == 0 )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Cyclone::OnDestroy  (line 2621, @0x00000000025e8240, libserver.so)  // inlines: Get, GetInstance, GetParent
// calls: CEntityHandle::operator CEntityInstance*, CDOTALocomotor::RemoveHorizontalMotionController, CDOTALocomotor::RemoveVerticalMotionController
// callers: CDOTA_Modifier_Brewmaster_Cyclone::OnDestroy, CDOTA_Modifier_Invoker_Tornado::OnDestroy, CDOTA_Modifier_Eul_Cyclone::OnDestroy
void __fastcall CDOTA_Modifier_Cyclone::OnDestroy(CDOTA_Modifier_Cyclone *const this)
{
  EHANDLE *p_m_hParent; // r12
  CEntityInstance *v3; // rax
  CDOTALocomotor *v4; // rax
  CEntityInstance *v5; // rax
  CDOTALocomotor *v6; // rax

  p_m_hParent = &this->m_hParent;
  v3 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
  v4 = (*(v3->_vptr_IHandleEntity + 376))(v3);
  CDOTALocomotor::RemoveHorizontalMotionController(v4, &this->CHorizontalMotionController);
  v5 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
  v6 = (*(v5->_vptr_IHandleEntity + 376))(v5);
  CDOTALocomotor::RemoveVerticalMotionController(v6, &this->CVerticalMotionController);
}


// CDOTA_Modifier_Pet::~CDOTA_Modifier_Pet  (line 2632, @0x00000000026519f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Pet::~CDOTA_Modifier_Pet(CDOTA_Modifier_Pet *const this)
{
  this->_vptr_CDOTA_Buff = &off_4126470;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Pet::~CDOTA_Modifier_Pet  (line 2632, @0x0000000002651a10, libserver.so)  // inlines: ~CDOTA_Modifier_Pet
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Pet::~CDOTA_Modifier_Pet(CDOTA_Modifier_Pet *const this)
{
  this->_vptr_CDOTA_Buff = &off_4126470;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Pet::CheckState  (line 2644, @0x00000000025de950, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Pet::CheckState(CDOTA_Modifier_Pet *const this, CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0xC2904100uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFF3D6FBEFFLL;
}


// CDOTA_Modifier_Pet::DeclareFunctions  (line 2658, @0x00000000025de980, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Pet::DeclareFunctions(CDOTA_Modifier_Pet *const this)
{
  this->m_Functions[18].__pfn = (&stru_10 + 697);
  this->m_Functions[18].__delta = 0;
  this->m_Functions[128].__pfn = (&stru_10 + 705);
  this->m_Functions[128].__delta = 0;
}


// CDOTA_Modifier_Pet::GetModifierMoveSpeed_Absolute  (line 2667, @0x00000000025e8980, libserver.so)  // inlines: CEntityHandle, FastSqrt, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetParent, GetSerialNumber, IndexToIdentity, Init, Length2D, LookupEntity, RemapValClamped, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, clamp<float, float>, operator-
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin
ModifierVariant_t __fastcall CDOTA_Modifier_Pet::GetModifierMoveSpeed_Absolute(
        CDOTA_Modifier_Pet *const this,
        const CModifierParams *const params)
{
  EHANDLE *p_m_hParent; // rbx
  CEntityInstance *v3; // rax
  CEntityInstance *v4; // rax
  unsigned __int16 v5; // dx
  int v6; // esi
  int v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  const CBaseEntity *m_pInstance; // r12
  CEntityInstance *v12; // rax
  float v13; // xmm3_4
  float v14; // xmm0_4
  float v15; // xmm2_4
  const Vector *AbsOrigin; // rbx
  const Vector *v17; // rax
  __m128i v18; // xmm0
  double v19; // xmm0_8
  __int64 v20; // xmm3_8
  float flThreatSpeed; // [rsp+Ch] [rbp-34h]
  float flDistance; // [rsp+10h] [rbp-30h]
  float flDistancea; // [rsp+10h] [rbp-30h]
  ModifierVariant_t result; // 0:rax.16

  p_m_hParent = &this->m_hParent;
  v3 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
  if ( (*(v3->_vptr_IHandleEntity + 404))(v3) == 0 )
    return 0x4389800000000001uLL;
  v4 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
  if ( HIDWORD(v4[11].m_pEntity) == -1 )
  {
    v5 = 0x7FFF;
    v6 = 0x7FFF;
  }
  else
  {
    v5 = WORD2(v4[11].m_pEntity) & 0x7FFF;
    v6 = v5;
  }
  v7 = (HIDWORD(v4[11].m_pEntity) >> 15 << 15) | v5 & 0x7FFF;
  if ( (v7 + 2) <= 1 )
    return 0x4389800000000001uLL;
  v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9];
  if ( v8 == 0 )
    return 0x4389800000000001uLL;
  v9 = &v8[v6 & 0x1FF];
  if ( v9 == 0 )
    return 0x4389800000000001uLL;
  if ( v7 != v9->m_EHandle.m_Index )
    return 0x4389800000000001uLL;
  m_pInstance = v9->m_pInstance;
  if ( v9->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC )
    return 0x4389800000000001uLL;
  flDistance = (*(m_pInstance->_vptr_IHandleEntity + 386))(v9->m_pInstance);
  v12 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
  v13 = flDistance;
  if ( v12 != 0 )
  {
    v14 = *(&v12[93].m_CScriptComponent + 1);
    v15 = 0.0;
    if ( v14 >= 0.0 )
      v15 = fminf(1.0, v14);
    v13 = flDistance + (((3.0 * flDistance) - flDistance) * v15);
  }
  flThreatSpeed = v13;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v12);
  v17 = CBaseEntity::GetAbsOrigin(m_pInstance);
  flDistancea = fsqrt(
                  ((v17->x - AbsOrigin->x) * (v17->x - AbsOrigin->x))
                + ((v17->y - AbsOrigin->y) * (v17->y - AbsOrigin->y)));
  *v18.m128i_i64 = (*(m_pInstance->_vptr_IHandleEntity + 386))(m_pInstance);
  LODWORD(AbsOrigin) = _mm_cvtsi128_si32(v18);
  v19 = (*(m_pInstance->_vptr_IHandleEntity + 386))(m_pInstance);
  result.m_szVal = 0;
  v20 = LODWORD(flThreatSpeed);
  *&v20 = fmaxf(flThreatSpeed, *&v19 * (flDistancea / (*&AbsOrigin * 0.75)));
  *&result.m_eType = (v20 << 32) | 1;
  return result;
}


// CDOTA_Modifier_Pet::OnAbilityExecuted  (line 2692, @0x00000000025e93e0, libserver.so)  // inlines: CEntityHandle, CHandle, FStrEq, Get, GetAbilityName, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetParent, GetSerialNumber, IndexToIdentity, Init, IsAbilityAnItem, IsValid, LookupEntity, Set, SetCoopState, ToDOTABaseNPC, UnitNPC, _V_strcmp, operator CBaseEntity*, operator CDOTABaseAbility*, operator bool
// calls: CEntityHandle::operator CEntityInstance*, strcmp
// strings: "item_ward_observer", "item_ward_sentry"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Pet::OnAbilityExecuted(
        CDOTA_Modifier_Pet *const this,
        const CModifierParams *const params)
{
  EHANDLE *p_m_hParent; // r12
  CEntityInstance *v4; // rax
  unsigned __int16 v5; // dx
  int v6; // esi
  uint32 v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *m_pInstance; // r13
  CEntityInstance *v11; // rax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CEntityInstance *v15; // rax
  CEntityInstance *v16; // rbx
  CEntityIdentity *m_pEntity; // rax
  __int16 v18; // si
  CEntityInstance *v19; // rax
  CEntityInstance *v20; // r12
  const char **m_Id; // rdx
  const char *v22; // rbx
  CEntityHandle v23; // [rsp+0h] [rbp-30h] BYREF

  p_m_hParent = &this->m_hParent;
  v4 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
  if ( HIDWORD(v4[11].m_pEntity) == -1 )
  {
    v5 = 0x7FFF;
    v6 = 0x7FFF;
  }
  else
  {
    v5 = WORD2(v4[11].m_pEntity) & 0x7FFF;
    v6 = v5;
  }
  v7 = (HIDWORD(v4[11].m_pEntity) >> 15 << 15) | v5 & 0x7FFF;
  v23.m_Index = v7;
  if ( v7 + 2 <= 1
    || (v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9]) == 0
    || (v9 = &v8[v6 & 0x1FF]) == 0
    || v7 != v9->m_EHandle.m_Index
    || (m_pInstance = v9->m_pInstance, v9->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v11 = CEntityHandle::operator CEntityInstance *(&params->hunit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
  {
    if ( m_pInstance != v11 )
      return 1uLL;
  }
  else if ( m_pInstance != 0 )
  {
    return 1uLL;
  }
  if ( params->ability.m_Index + 2 > 1 )
  {
    v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->ability.m_Index) >> 9) & 0x3F];
    if ( v13 != 0 )
    {
      v14 = &v13[params->ability.m_Index & 0x1FF];
      if ( v14 != 0 && params->ability.m_Index == v14->m_EHandle.m_Index )
      {
        v15 = CEntityHandle::operator CEntityInstance *(&params->ability);
        v23.m_Index = -1;
        v16 = v15;
        if ( v15 != 0 )
        {
          m_pEntity = v15->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v18 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            v23.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v18 & 0x7FFF;
          }
        }
        v19 = CEntityHandle::operator CEntityInstance *(&v23);
        if ( v19 != 0 && (*(v19->_vptr_IHandleEntity + 223))(v19) != 0 )
        {
          v20 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
          if ( HIDWORD(v20[94]._vptr_IHandleEntity) == 0 )
          {
            m_Id = v16[18].m_iszPrivateVScripts.u.m_Id;
            if ( m_Id != 0 )
            {
              v22 = *m_Id;
              if ( *m_Id != 0 )
              {
                if ( v22 == "item_ward_observer" || strcmp(*m_Id, "item_ward_observer") == 0 )
                {
                  HIDWORD(v20[94]._vptr_IHandleEntity) = 4;
                }
                else if ( v22 == "item_ward_sentry" || strcmp(v22, "item_ward_sentry") == 0 )
                {
                  HIDWORD(v20[94]._vptr_IHandleEntity) = 5;
                }
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Tutorial_Sleep::~CDOTA_Modifier_Tutorial_Sleep  (line 2727, @0x000000000264ff30, libserver.so)  // inlines: ~CDOTA_Modifier_Stunned
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tutorial_Sleep::~CDOTA_Modifier_Tutorial_Sleep(
        CDOTA_Modifier_Tutorial_Sleep *const this)
{
  this->_vptr_CDOTA_Buff = &off_411CD70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tutorial_Sleep::~CDOTA_Modifier_Tutorial_Sleep  (line 2727, @0x000000000264ff50, libserver.so)  // inlines: ~CDOTA_Modifier_Stunned, ~CDOTA_Modifier_Tutorial_Sleep
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tutorial_Sleep::~CDOTA_Modifier_Tutorial_Sleep(
        CDOTA_Modifier_Tutorial_Sleep *const this)
{
  this->_vptr_CDOTA_Buff = &off_411CD70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tutorial_Sleep::GetEffectName  (line 2732, @0x0000000002625bc0, libserver.so)
// strings: "particles/generic_gameplay/generic_sleep.vpcf"
const char *__fastcall CDOTA_Modifier_Tutorial_Sleep::GetEffectName(CDOTA_Modifier_Tutorial_Sleep *const this)
{
  return "particles/generic_gameplay/generic_sleep.vpcf";
}


// CDOTA_Modifier_Tutorial_Sleep::IsHidden  (line 2735, @0x0000000002625bd0, libserver.so)
bool __fastcall CDOTA_Modifier_Tutorial_Sleep::IsHidden(CDOTA_Modifier_Tutorial_Sleep *const this)
{
  return 1;
}


// CDOTA_Modifier_Tutorial_Sleep::GetDisableAutoAttack  (line 2738, @0x0000000002625be0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Tutorial_Sleep::GetDisableAutoAttack(
        CDOTA_Modifier_Tutorial_Sleep *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Tutorial_Sleep::DeclareFunctions  (line 2743, @0x00000000025de9c0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Tutorial_Sleep::DeclareFunctions(CDOTA_Modifier_Tutorial_Sleep *const this)
{
  this->m_Functions[134].__pfn = (&stru_10 + 697);
  this->m_Functions[134].__delta = 0;
  this->m_Functions[95].__pfn = (&stru_10 + 705);
  this->m_Functions[95].__delta = 0;
}


// CDOTA_Modifier_Tutorial_Sleep::OnTakeDamage  (line 2749, @0x0000000002615120, libserver.so)  // inlines: Destroy, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Buff::Destroy, DOTATutorial, CDOTA_Tutorial::OnNPCAwaken
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Tutorial_Sleep::OnTakeDamage(
        CDOTA_Modifier_Tutorial_Sleep *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r13
  CEntityInstance *v9; // rax
  CDOTA_Tutorial *v10; // rax

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->hunit.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && CEntityHandle::operator CEntityInstance *(&this->m_hParent) == m_pInstance )
        {
          if ( (*(&this->CDOTA_Buff + 138) & 4) == 0 )
            CDOTA_Buff::Destroy(this, 0, 0, 0);
          v9 = CEntityHandle::operator CEntityInstance *(&params->hunit);
          if ( v9 == 0 || BYTE3(v9[7]._vptr_IHandleEntity) == 0 )
            v9 = 0;
          if ( CEntityHandle::operator CEntityInstance *(&v9[87].m_iszPrivateVScripts) != 0 )
          {
            v10 = DOTATutorial();
            CDOTA_Tutorial::OnNPCAwaken(v10);
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Roquelaire::~CDOTA_Modifier_Roquelaire  (line 2771, @0x00000000026519a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Roquelaire::~CDOTA_Modifier_Roquelaire(CDOTA_Modifier_Roquelaire *const this)
{
  this->_vptr_CDOTA_Buff = &off_4126AF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Roquelaire::~CDOTA_Modifier_Roquelaire  (line 2771, @0x00000000026519c0, libserver.so)  // inlines: ~CDOTA_Modifier_Roquelaire
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Roquelaire::~CDOTA_Modifier_Roquelaire(CDOTA_Modifier_Roquelaire *const this)
{
  this->_vptr_CDOTA_Buff = &off_4126AF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Roquelaire::CheckState  (line 2779, @0x00000000025dea00, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Roquelaire::CheckState(
        CDOTA_Modifier_Roquelaire *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x82904100uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFF7D6FBEFFLL;
}


// CDOTA_Modifier_IceSlide::OnCreated  (line 2795, @0x0000000002615220, libserver.so)  // inlines: DOTAGameRules, Destroy, Get, GetGameTime, GetInstance, GetParent, VectorSubtract, operator*=, operator-, operator=
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, VectorNormalize, CDOTALocomotor::ApplyHorizontalMotionController, CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_IceSlide::OnCreated(CDOTA_Modifier_IceSlide *const this, KeyValues *pKV)
{
  EHANDLE *p_m_hParent; // r12
  const CBaseEntity *v4; // rax
  const Vector *AbsOrigin; // r13
  CEntityInstance *v6; // rax
  float *v7; // rax
  vec_t v8; // xmm2_4
  vec_t v9; // xmm0_4
  CEntityInstance *v10; // rax
  float v11; // xmm0_4
  vec_t v12; // xmm1_4
  vec_t v13; // xmm0_4
  CEntityInstance *v14; // rax
  CDOTALocomotor *v15; // rax
  float v16; // xmm0_4

  p_m_hParent = &this->m_hParent;
  v4 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
  v6 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
  v7 = (*(v6->_vptr_IHandleEntity + 376))(v6);
  v8 = v7[40] - AbsOrigin->x;
  v9 = v7[42] - AbsOrigin->z;
  this->m_vVelocity.y = v7[41] - AbsOrigin->y;
  this->m_vVelocity.x = v8;
  this->m_vVelocity.z = v9;
  VectorNormalize(&this->m_vVelocity);
  v10 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
  v11 = (*(v10->_vptr_IHandleEntity + 386))(v10);
  this->m_vVelocity.x = this->m_vVelocity.x * v11;
  v12 = this->m_vVelocity.y * v11;
  v13 = v11 * this->m_vVelocity.z;
  this->m_vVelocity.y = v12;
  this->m_vVelocity.z = v13;
  v14 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
  v15 = (*(v14->_vptr_IHandleEntity + 376))(v14);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v15, &this->CHorizontalMotionController, 0) )
  {
    v16 = 0.0;
    if ( g_pGameRules != 0 )
      v16 = *&g_pGameRules[18].m_szQuestName[20];
    this->m_fLastUpdateTime = v16;
  }
  else if ( (*(&this->CDOTA_Buff + 138) & 4) == 0 )
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_IceSlide::OnDestroy  (line 2817, @0x00000000025e66c0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CDOTALocomotor::RemoveHorizontalMotionController
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_IceSlide::OnDestroy(CDOTA_Modifier_IceSlide *const this)
{
  CHorizontalMotionController *v2; // rbx
  uint32 m_Index; // edx
  CEntityInstance *m_pInstance; // rdi
  CConcreteEntityList *v5; // rsi
  unsigned __int16 v6; // cx
  CEntityIdentity *v7; // rax
  __int64 v8; // rcx
  CEntityIdentity *v9; // rax
  CDOTALocomotor *v10; // rax

  v2 = &this->CHorizontalMotionController;
  m_Index = this->m_hParent.m_Index;
  m_pInstance = 0;
  v5 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 > 1 )
  {
    v6 = this->m_hParent.m_Index;
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v6 >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = v6 & 0x1FF;
      v5 = (8 * v8);
      v9 = &v7[v8];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  v10 = (*(m_pInstance->_vptr_IHandleEntity + 376))(m_pInstance, v5);
  CDOTALocomotor::RemoveHorizontalMotionController(v10, v2);
}


// CDOTA_Modifier_IceSlide::DeclareFunctions  (line 2829, @0x00000000025dea30, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_IceSlide::GetOverrideAnimation(CModifierParams const&)
void __fastcall CDOTA_Modifier_IceSlide::DeclareFunctions(CDOTA_Modifier_IceSlide *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_IceSlide::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
}


// CDOTA_Modifier_IceSlide::GetOverrideAnimation  (line 2836, @0x00000000025dea50, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_IceSlide::GetOverrideAnimation(
        CDOTA_Modifier_IceSlide *const this,
        const CModifierParams *const params)
{
  return 0x44BC800000000001uLL;
}


// CDOTA_Modifier_IceSlide::UpdateHorizontalMotion  (line 2843, @0x0000000002619f10, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Clamp<float>, CopyConstruct<QAngle>, DOTAGameRules, Element, Get, GetEHandle, GetEntryIndex, GetFloat, GetGameTime, GetInstance, GetParent, GetSerialNumber, GrowMemory, NormalizeInPlace, Purge, Random, RemoveAll, Set, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator*=, operator+, operator+=, operator-, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::FindModifierByName, VectorNormalize, GetCommonObstructionManagerFlagsForNPC, CGridNav::PrepareObstructionManager, CGridNav::CheckForCollisions, VectorAngles, CUtlMemory<QAngle, int>::Grow, RandomInt, CUtlVectorBase<QAngle, CUtlMemory<QAngle, int> >::FindAndFastRemove, AngleVectors (15 total)
// strings: "modifier_winter_skates"
void __fastcall CDOTA_Modifier_IceSlide::UpdateHorizontalMotion(
        CDOTA_Modifier_IceSlide *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  EHANDLE *p_m_hParent; // r12
  const CBaseEntity *v6; // rax
  CEntityInstance *v7; // rax
  float *v8; // rax
  vec_t v9; // xmm0_4
  vec_t v10; // xmm2_4
  float v11; // xmm0_4
  float v12; // xmm3_4
  ConVar *m_pParent; // rax
  CDOTA_BaseNPC *v14; // rax
  CDOTA_Buff *ModifierByName; // rax
  float m_fValue; // xmm1_4
  vec_t v17; // xmm0_4
  vec_t v18; // xmm2_4
  vec_t v19; // xmm1_4
  CDOTA_BaseNPC *v20; // rax
  CEntityInstance *v21; // rax
  ObstructionRelationshipClass_t v22; // eax
  CEntityInstance *v23; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v25; // eax
  __int16 v26; // cx
  __int64 v27; // r13
  int v28; // ebx
  int m_nAllocationCount; // eax
  int v30; // esi
  QAngle *v31; // rax
  int m_Size; // esi
  int v33; // esi
  CEntityInstance *v34; // rax
  CEntityIdentity *v35; // rdx
  int v36; // eax
  __int16 v37; // cx
  vec_t v38; // xmm1_4
  vec_t v39; // xmm0_4
  __m128 v40; // xmm0
  __m128 v41; // xmm2
  float v42; // xmm0_4
  vec_t v43; // xmm1_4
  vec_t v44; // xmm0_4
  CBaseEntity *v45; // rax
  float v46; // [rsp+14h] [rbp-DCh]
  float z; // [rsp+18h] [rbp-D8h]
  vec_t forward; // [rsp+20h] [rbp-D0h]
  float fInterval; // [rsp+28h] [rbp-C8h]
  vec_t fIntervala; // [rsp+28h] [rbp-C8h]
  float fIntervalb; // [rsp+28h] [rbp-C8h]
  float flGripb; // [rsp+2Ch] [rbp-C4h]
  float flGripc; // [rsp+2Ch] [rbp-C4h]
  float flGripd; // [rsp+2Ch] [rbp-C4h]
  float flGrip; // [rsp+2Ch] [rbp-C4h]
  float flGripa; // [rsp+2Ch] [rbp-C4h]
  int nAllFlags; // [rsp+38h] [rbp-B8h] BYREF
  int nNoneFlags; // [rsp+3Ch] [rbp-B4h] BYREF
  Vector vLoc; // [rsp+40h] [rbp-B0h] BYREF
  Vector vToDest; // [rsp+50h] [rbp-A0h] BYREF
  QAngle ang; // [rsp+60h] [rbp-90h] BYREF
  QAngle angToTest; // [rsp+70h] [rbp-80h] BYREF
  Vector vecToTest; // [rsp+80h] [rbp-70h] BYREF
  Vector vBounce; // [rsp+90h] [rbp-60h] BYREF
  CUtlVector<QAngle,CUtlMemory<QAngle,int> > anglesToTest; // [rsp+A0h] [rbp-50h] BYREF

  p_m_hParent = &this->m_hParent;
  v6 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
  vLoc = *CBaseEntity::GetAbsOrigin(v6);
  v7 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
  v8 = (*(v7->_vptr_IHandleEntity + 376))(v7);
  v9 = v8[42] - vLoc.z;
  v10 = v8[40] - vLoc.x;
  vToDest.y = v8[41] - vLoc.y;
  vToDest.z = v9;
  vToDest.x = v10;
  if ( g_pGameRules != 0 )
  {
    v11 = *&g_pGameRules[18].m_szQuestName[20];
    v12 = v11 - this->m_fLastUpdateTime;
  }
  else
  {
    v11 = 0.0;
    v12 = 0.0 - this->m_fLastUpdateTime;
  }
  m_pParent = dota_ice_grip.m_pParent;
  fInterval = v12;
  this->m_fLastUpdateTime = v11;
  flGripb = m_pParent->m_Value.m_fValue;
  v14 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(v14, "modifier_winter_skates", 0);
  m_fValue = flGripb;
  if ( ModifierByName != 0 )
    m_fValue = dota_ice_grip_skates.m_pParent->m_Value.m_fValue;
  flGripc = m_fValue;
  VectorNormalize(&vToDest);
  v17 = ((vToDest.y * flGripc) * fInterval) + this->m_vVelocity.y;
  v18 = ((vToDest.z * flGripc) * fInterval) + this->m_vVelocity.z;
  v19 = ((flGripc * vToDest.x) * fInterval) + this->m_vVelocity.x;
  this->m_vVelocity.y = v17;
  this->m_vVelocity.z = v18;
  this->m_vVelocity.x = v19;
  vLoc.y = (v17 * fInterval) + vLoc.y;
  vLoc.x = (v19 * fInterval) + vLoc.x;
  v20 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
  GetCommonObstructionManagerFlagsForNPC(v20, &nAllFlags, &nNoneFlags);
  v21 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
  flGripd = *&v21[48].m_pEntity;
  v22 = (*(v21->_vptr_IHandleEntity + 454))(v21);
  CGridNav::PrepareObstructionManager(&g_GridNav, 24.200001, nAllFlags, nNoneFlags, v22, flGripd);
  v23 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
  anglesToTest.m_Size = -1;
  if ( v23 != 0 )
  {
    m_pEntity = v23->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v25 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v26 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v26 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(anglesToTest.m_Size) = v26 | anglesToTest.m_Size & 0x8000;
      anglesToTest.m_Size = (v25 << 15) | anglesToTest.m_Size & 0x7FFF;
    }
  }
  if ( CGridNav::CheckForCollisions(&g_GridNav, vLoc.x, vLoc.y, 0, &anglesToTest, 0) )
  {
    v27 = 0;
    v28 = 0;
    VectorAngles(&this->m_vVelocity, &ang);
    anglesToTest.m_Size = 0;
    anglesToTest.m_Memory.m_pMemory = 0;
    m_nAllocationCount = 0;
    anglesToTest.m_Memory.m_nAllocationCount = 0;
    anglesToTest.m_Memory.m_nGrowSize = 0;
    while ( 1 )
    {
      m_Size = v27;
      fIntervala = ang.x;
      forward = ang.z;
      flGrip = (36.0 * v28) + ang.y;
      if ( m_nAllocationCount == v27 )
      {
        CUtlMemory<QAngle,int>::Grow(&anglesToTest.m_Memory, 1);
        m_Size = anglesToTest.m_Size;
      }
      v30 = m_Size + 1;
      anglesToTest.m_Size = v30;
      v31 = &anglesToTest.m_Memory.m_pMemory[v27];
      if ( v31 != 0 )
      {
        v31->x = fIntervala;
        v31->y = flGrip;
        v31->z = forward;
        v27 = anglesToTest.m_Size;
      }
      else
      {
        v27 = v30;
      }
      if ( ++v28 == 10 )
        break;
      m_nAllocationCount = anglesToTest.m_Memory.m_nAllocationCount;
    }
    if ( v27 > 0 )
    {
      v33 = v27;
      while ( 1 )
      {
        angToTest = anglesToTest.m_Memory.m_pMemory[RandomInt(0, (v33 - 1))];
        CUtlVectorBase<QAngle,CUtlMemory<QAngle,int>>::FindAndFastRemove(&anglesToTest, &angToTest);
        AngleVectors(&angToTest, &vecToTest, 0, 0);
        z = vecToTest.z;
        v46 = vLoc.z;
        flGripa = (100.0 * vecToTest.x) + vLoc.x;
        fIntervalb = (100.0 * vecToTest.y) + vLoc.y;
        v34 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
        vBounce.x = NAN;
        if ( v34 != 0 )
        {
          v35 = v34->m_pEntity;
          if ( v35 != 0 )
          {
            v36 = (v35->m_EHandle.m_Index >> 15) - (v35->m_flags & 1);
            v37 = 0x7FFF;
            if ( v35->m_EHandle.m_Index != -1 )
              v37 = v35->m_EHandle.m_Index & 0x7FFF;
            LOWORD(vBounce.x) = v37 | LOWORD(vBounce.x) & 0x8000;
            LODWORD(vBounce.x) = (v36 << 15) | LOWORD(vBounce.x) & 0x7FFF;
          }
        }
        if ( !CGridNav::CheckForCollisions(&g_GridNav, flGripa, fIntervalb, 0, &vBounce, 0) )
          break;
        v33 = anglesToTest.m_Size;
        if ( anglesToTest.m_Size <= 0 )
          goto LABEL_28;
      }
      vBounce.y = fIntervalb - vLoc.y;
      vBounce.x = flGripa - vLoc.x;
      vBounce.z = ((100.0 * z) + v46) - vLoc.z;
      VectorNormalize(&vBounce);
      v38 = vBounce.z * 1.1;
      v39 = 1.1 * vBounce.x;
      this->m_vVelocity.y = vBounce.y * 1.1;
      this->m_vVelocity.z = v38;
      this->m_vVelocity.x = v39;
    }
LABEL_28:
    anglesToTest.m_Size = 0;
    if ( (anglesToTest.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<QAngle,int>::Purge(&anglesToTest.m_Memory);
      if ( (anglesToTest.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<QAngle,int>::Purge(&anglesToTest.m_Memory);
    }
  }
  v40.m128_f32[0] = VectorNormalize(&this->m_vVelocity);
  if ( v40.m128_f32[0] < 275.0 )
  {
    v42 = 275.0;
  }
  else
  {
    v41 = _mm_cmpge_ss(0x44098000u, v40);
    LODWORD(v42) = _mm_andnot_ps(v41, 0x44098000u).m128_u32[0] | v40.m128_i32[0] & v41.m128_i32[0];
  }
  this->m_vVelocity.x = this->m_vVelocity.x * v42;
  v43 = this->m_vVelocity.y * v42;
  v44 = v42 * this->m_vVelocity.z;
  this->m_vVelocity.y = v43;
  this->m_vVelocity.z = v44;
  v45 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
  CBaseEntity::SetAbsOrigin(v45, &vLoc);
}


// CDOTA_Modifier_IceSlide::OnHorizontalMotionInterrupted  (line 2924, @0x0000000002615390, libserver.so)  // inlines: Destroy
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_IceSlide::OnHorizontalMotionInterrupted(CDOTA_Modifier_IceSlide *const this)
{
  if ( (*(&this->CDOTA_Buff + 138) & 4) == 0 )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_HeroStatue::~CDOTA_Modifier_HeroStatue  (line 2941, @0x00000000026518e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_HeroStatue::~CDOTA_Modifier_HeroStatue(CDOTA_Modifier_HeroStatue *const this)
{
  this->_vptr_CDOTA_Buff = &off_41271D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_HeroStatue::~CDOTA_Modifier_HeroStatue  (line 2941, @0x0000000002651900, libserver.so)  // inlines: ~CDOTA_Modifier_HeroStatue
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_HeroStatue::~CDOTA_Modifier_HeroStatue(CDOTA_Modifier_HeroStatue *const this)
{
  this->_vptr_CDOTA_Buff = &off_41271D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_HeroStatue::IsHidden  (line 2948, @0x0000000002625c00, libserver.so)
bool __fastcall CDOTA_Modifier_HeroStatue::IsHidden(CDOTA_Modifier_HeroStatue *const this)
{
  return 1;
}


// CDOTA_Modifier_HeroStatue::GetTeamSendMask  (line 2961, @0x0000000002625c10, libserver.so)
int __fastcall CDOTA_Modifier_HeroStatue::GetTeamSendMask(CDOTA_Modifier_HeroStatue *const this)
{
  return 14;
}


// CDOTA_Modifier_HeroStatue::OnCreated  (line 2977, @0x00000000025e0550, libserver.so)
// calls: KeyValues::GetInt
// strings: "status_effect_index"
void __fastcall CDOTA_Modifier_HeroStatue::OnCreated(CDOTA_Modifier_HeroStatue *const this, KeyValues *pKV)
{
  this->m_unStatusEffectIndex = KeyValues::GetInt(pKV, "status_effect_index", 0);
}


// CDOTA_Modifier_HeroStatue::AddCustomTransmiterData  (line 2986, @0x00000000025dea70, libserver.so)  // inlines: set_ability_level, set_has_ability_level
void __fastcall CDOTA_Modifier_HeroStatue::AddCustomTransmiterData(
        CDOTA_Modifier_HeroStatue *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  uint32 m_unStatusEffectIndex; // eax

  m_unStatusEffectIndex = this->m_unStatusEffectIndex;
  *(entry + 4) |= 0x20u;
  *(entry + 11) = m_unStatusEffectIndex;
}


// CDOTA_Modifier_HeroStatue::DeclareFunctions  (line 3025, @0x00000000025dea90, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_HeroStatue::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_HeroStatue::DeclareFunctions(CDOTA_Modifier_HeroStatue *const this)
{
  this->m_Functions[138].__pfn = CDOTA_Modifier_HeroStatue::OnDeath;
  this->m_Functions[138].__delta = 0;
}


// CDOTA_Modifier_HeroStatue::OnDeath  (line 3031, @0x00000000025e7450, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: UTIL_Remove
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_HeroStatue::OnDeath(
        CDOTA_Modifier_HeroStatue *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r8
  uint32 v8; // esi
  CEntityIdentity *v9; // rax
  CEntityIdentity *v10; // rax
  uint32 v11; // esi
  unsigned __int16 v12; // dx
  CEntityIdentity *v13; // rax
  CEntityInstance *v14; // rdi
  CEntityIdentity *v15; // rax

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 0x3F80000000000001uLL;
  m_Index_low = LOWORD(params->hunit.m_Index);
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
  if ( v4 == 0 )
    return 0x3F80000000000001uLL;
  v5 = &v4[m_Index_low & 0x1FF];
  if ( v5 == 0 )
    return 0x3F80000000000001uLL;
  if ( m_Index != v5->m_EHandle.m_Index )
    return 0x3F80000000000001uLL;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 )
    return 0x3F80000000000001uLL;
  if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    return 0x3F80000000000001uLL;
  v8 = this->m_hParent.m_Index;
  if ( v8 + 2 <= 1 )
    return 0x3F80000000000001uLL;
  v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
  if ( v9 == 0 )
    return 0x3F80000000000001uLL;
  v10 = &v9[this->m_hParent.m_Index & 0x1FF];
  if ( v10 == 0 || v8 != v10->m_EHandle.m_Index || m_pInstance != v10->m_pInstance )
    return 0x3F80000000000001uLL;
  v11 = this->m_hPedestal.m_Index;
  if ( v11 + 2 > 1
    && (v12 = this->m_hPedestal.m_Index, (v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v12 >> 9) & 0x3F]) != 0) )
  {
    v14 = 0;
    v15 = &v13[v12 & 0x1FF];
    if ( v15 != 0 && v11 == v15->m_EHandle.m_Index )
      v14 = v15->m_pInstance;
  }
  else
  {
    v14 = 0;
  }
  UTIL_Remove(v14);
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_HeroStatuePedestal::~CDOTA_Modifier_HeroStatuePedestal  (line 3046, @0x0000000002651890, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_HeroStatuePedestal::~CDOTA_Modifier_HeroStatuePedestal(
        CDOTA_Modifier_HeroStatuePedestal *const this)
{
  this->_vptr_CDOTA_Buff = &off_41274B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_HeroStatuePedestal::~CDOTA_Modifier_HeroStatuePedestal  (line 3046, @0x00000000026518b0, libserver.so)  // inlines: ~CDOTA_Modifier_HeroStatuePedestal
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_HeroStatuePedestal::~CDOTA_Modifier_HeroStatuePedestal(
        CDOTA_Modifier_HeroStatuePedestal *const this)
{
  this->_vptr_CDOTA_Buff = &off_41274B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_HeroStatuePedestal::StatusEffectPriority  (line 3052, @0x0000000002625c20, libserver.so)
int __fastcall CDOTA_Modifier_HeroStatuePedestal::StatusEffectPriority(CDOTA_Modifier_HeroStatuePedestal *const this)
{
  return 20000;
}


// CDOTA_Modifier_HeroStatuePedestal::CheckState  (line 3057, @0x00000000025deab0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_HeroStatuePedestal::CheckState(
        CDOTA_Modifier_HeroStatuePedestal *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0xC2904100uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFF3D6FBEFFLL;
}


// CDOTA_Modifier_BattleCupEffigy::~CDOTA_Modifier_BattleCupEffigy  (line 3075, @0x0000000002652990, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_BattleCupEffigy::~CDOTA_Modifier_BattleCupEffigy(
        CDOTA_Modifier_BattleCupEffigy *const this)
{
  this->_vptr_CDOTA_Buff = &off_41277D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_BattleCupEffigy::~CDOTA_Modifier_BattleCupEffigy  (line 3075, @0x00000000026529b0, libserver.so)  // inlines: ~CDOTA_Modifier_BattleCupEffigy
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_BattleCupEffigy::~CDOTA_Modifier_BattleCupEffigy(
        CDOTA_Modifier_BattleCupEffigy *const this)
{
  this->_vptr_CDOTA_Buff = &off_41277D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_BattleCupEffigy::IsHidden  (line 3080, @0x0000000002625c30, libserver.so)
bool __fastcall CDOTA_Modifier_BattleCupEffigy::IsHidden(CDOTA_Modifier_BattleCupEffigy *const this)
{
  return 1;
}


// CDOTA_Modifier_BattleCupEffigy::GetTeamSendMask  (line 3086, @0x0000000002625c40, libserver.so)
int __fastcall CDOTA_Modifier_BattleCupEffigy::GetTeamSendMask(CDOTA_Modifier_BattleCupEffigy *const this)
{
  return 14;
}


// CDOTA_Modifier_Hidden_NoDamage::~CDOTA_Modifier_Hidden_NoDamage  (line 3103, @0x0000000002651840, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Hidden_NoDamage::~CDOTA_Modifier_Hidden_NoDamage(
        CDOTA_Modifier_Hidden_NoDamage *const this)
{
  this->_vptr_CDOTA_Buff = &off_4127B30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Hidden_NoDamage::~CDOTA_Modifier_Hidden_NoDamage  (line 3103, @0x0000000002651860, libserver.so)  // inlines: ~CDOTA_Modifier_Hidden_NoDamage
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Hidden_NoDamage::~CDOTA_Modifier_Hidden_NoDamage(
        CDOTA_Modifier_Hidden_NoDamage *const this)
{
  this->_vptr_CDOTA_Buff = &off_4127B30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Hidden_NoDamage::IsHidden  (line 3108, @0x0000000002625c50, libserver.so)
bool __fastcall CDOTA_Modifier_Hidden_NoDamage::IsHidden(CDOTA_Modifier_Hidden_NoDamage *const this)
{
  return 1;
}


// CDOTA_Modifier_Hidden_NoDamage::DeclareFunctions  (line 3115, @0x00000000025deae0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Hidden_NoDamage::GetNoDamageModifier(CModifierParams const&)
void __fastcall CDOTA_Modifier_Hidden_NoDamage::DeclareFunctions(CDOTA_Modifier_Hidden_NoDamage *const this)
{
  this->m_Functions[104].__pfn = CDOTA_Modifier_Hidden_NoDamage::GetNoDamageModifier;
  this->m_Functions[104].__delta = 0;
  this->m_Functions[103].__pfn = CDOTA_Modifier_Hidden_NoDamage::GetNoDamageModifier;
  this->m_Functions[103].__delta = 0;
}


// CDOTA_Modifier_Hidden_NoDamage::GetNoDamageModifier  (line 3121, @0x00000000025deb20, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Hidden_NoDamage::GetNoDamageModifier(
        CDOTA_Modifier_Hidden_NoDamage *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Tutorial_Disable_Healing::~CDOTA_Modifier_Tutorial_Disable_Healing  (line 3130, @0x00000000026517f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tutorial_Disable_Healing::~CDOTA_Modifier_Tutorial_Disable_Healing(
        CDOTA_Modifier_Tutorial_Disable_Healing *const this)
{
  this->_vptr_CDOTA_Buff = &off_4127E50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tutorial_Disable_Healing::~CDOTA_Modifier_Tutorial_Disable_Healing  (line 3130, @0x0000000002651810, libserver.so)  // inlines: ~CDOTA_Modifier_Tutorial_Disable_Healing
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tutorial_Disable_Healing::~CDOTA_Modifier_Tutorial_Disable_Healing(
        CDOTA_Modifier_Tutorial_Disable_Healing *const this)
{
  this->_vptr_CDOTA_Buff = &off_4127E50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tutorial_Disable_Healing::IsHidden  (line 3135, @0x0000000002625c60, libserver.so)
bool __fastcall CDOTA_Modifier_Tutorial_Disable_Healing::IsHidden(CDOTA_Modifier_Tutorial_Disable_Healing *const this)
{
  return 1;
}


// CDOTA_Modifier_Tutorial_Disable_Healing::DeclareFunctions  (line 3143, @0x00000000025deb40, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Tutorial_Disable_Healing::GetDisableHealing(CModifierParams const&)
void __fastcall CDOTA_Modifier_Tutorial_Disable_Healing::DeclareFunctions(
        CDOTA_Modifier_Tutorial_Disable_Healing *const this)
{
  this->m_Functions[111].__pfn = CDOTA_Modifier_Tutorial_Disable_Healing::GetDisableHealing;
  this->m_Functions[111].__delta = 0;
}


// CDOTA_Modifier_Tutorial_Disable_Healing::GetDisableHealing  (line 3148, @0x00000000025deb60, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Tutorial_Disable_Healing::GetDisableHealing(
        CDOTA_Modifier_Tutorial_Disable_Healing *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Tutorial_SpeechBubble::~CDOTA_Modifier_Tutorial_SpeechBubble  (line 3155, @0x00000000026517a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tutorial_SpeechBubble::~CDOTA_Modifier_Tutorial_SpeechBubble(
        CDOTA_Modifier_Tutorial_SpeechBubble *const this)
{
  this->_vptr_CDOTA_Buff = &off_4128170;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tutorial_SpeechBubble::~CDOTA_Modifier_Tutorial_SpeechBubble  (line 3155, @0x00000000026517c0, libserver.so)  // inlines: ~CDOTA_Modifier_Tutorial_SpeechBubble
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tutorial_SpeechBubble::~CDOTA_Modifier_Tutorial_SpeechBubble(
        CDOTA_Modifier_Tutorial_SpeechBubble *const this)
{
  this->_vptr_CDOTA_Buff = &off_4128170;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tutorial_SpeechBubble::IsHidden  (line 3164, @0x0000000002625c70, libserver.so)
bool __fastcall CDOTA_Modifier_Tutorial_SpeechBubble::IsHidden(CDOTA_Modifier_Tutorial_SpeechBubble *const this)
{
  return 1;
}


// CDOTA_Modifier_Tutorial_SpeechBubble::OnCreated  (line 3173, @0x00000000025e6800, libserver.so)  // inlines: Get, GetBool, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, SetFacePlayer, operator CEntityInstance*
// calls: KeyValues::GetInt
// strings: "faceplayer"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Tutorial_SpeechBubble::OnCreated(
        CDOTA_Modifier_Tutorial_SpeechBubble *const this,
        KeyValues *pKV)
{
  bool v3; // al
  uint32 m_Index; // eax
  CEntityInstance *m_pInstance; // rcx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx

  v3 = KeyValues::GetInt(pKV, "faceplayer", 0) != 0;
  this->m_bFacePlayer = v3;
  if ( v3 )
  {
    m_Index = this->m_hParent.m_Index;
    m_pInstance = 0;
    if ( m_Index + 2 > 1 )
    {
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[this->m_hParent.m_Index & 0x1FF];
        if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
          m_pInstance = v7->m_pInstance;
      }
    }
    LOBYTE(m_pInstance[85].m_pEntity) = 1;
  }
}


// CDOTA_Modifier_Tutorial_SpeechBubble::OnDestroy  (line 3185, @0x00000000025e5b10, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, SetFacePlayer, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Tutorial_SpeechBubble::OnDestroy(CDOTA_Modifier_Tutorial_SpeechBubble *const this)
{
  CEntityInstance *m_pInstance; // rcx
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  m_pInstance = 0;
  m_Index = this->m_hParent.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hParent.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
        m_pInstance = v4->m_pInstance;
    }
  }
  LOBYTE(m_pInstance[85].m_pEntity) = 0;
}


// CDOTA_Modifier_Tutorial_SpeechBubble::CheckState  (line 3192, @0x00000000025e2100, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Tutorial_SpeechBubble::CheckState(
        CDOTA_Modifier_Tutorial_SpeechBubble *const this,
        CDOTABuffState *const buffState)
{
  if ( this->m_bFacePlayer )
  {
    buffState->m_nEnabledStateMask |= 1uLL;
    buffState->m_nDisabledStateMask &= ~1uLL;
  }
  else
  {
    buffState->m_nEnabledStateMask |= 0x20uLL;
    buffState->m_nDisabledStateMask &= ~0x20uLL;
  }
}


// CDOTA_Modifier_Tutorial_ForceAnimation::~CDOTA_Modifier_Tutorial_ForceAnimation  (line 3210, @0x0000000002651750, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tutorial_ForceAnimation::~CDOTA_Modifier_Tutorial_ForceAnimation(
        CDOTA_Modifier_Tutorial_ForceAnimation *const this)
{
  this->_vptr_CDOTA_Buff = &off_4128490;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tutorial_ForceAnimation::~CDOTA_Modifier_Tutorial_ForceAnimation  (line 3210, @0x0000000002651770, libserver.so)  // inlines: ~CDOTA_Modifier_Tutorial_ForceAnimation
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tutorial_ForceAnimation::~CDOTA_Modifier_Tutorial_ForceAnimation(
        CDOTA_Modifier_Tutorial_ForceAnimation *const this)
{
  this->_vptr_CDOTA_Buff = &off_4128490;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tutorial_ForceAnimation::IsDebuff  (line 3216, @0x0000000002625c80, libserver.so)
bool __fastcall CDOTA_Modifier_Tutorial_ForceAnimation::IsDebuff(CDOTA_Modifier_Tutorial_ForceAnimation *const this)
{
  return 0;
}


// CDOTA_Modifier_Tutorial_ForceAnimation::IsHidden  (line 3217, @0x0000000002625c90, libserver.so)
bool __fastcall CDOTA_Modifier_Tutorial_ForceAnimation::IsHidden(CDOTA_Modifier_Tutorial_ForceAnimation *const this)
{
  return 1;
}


// CDOTA_Modifier_Tutorial_ForceAnimation::IsPurgable  (line 3219, @0x0000000002625ca0, libserver.so)
bool __fastcall CDOTA_Modifier_Tutorial_ForceAnimation::IsPurgable(CDOTA_Modifier_Tutorial_ForceAnimation *const this)
{
  return 0;
}


// CDOTA_Modifier_Tutorial_ForceAnimation::OnCreated  (line 3241, @0x00000000025e82a0, libserver.so)  // inlines: Get, GetBool, GetInstance, GetParent
// calls: KeyValues::GetInt, CEntityHandle::operator CEntityInstance*, CBaseAnimating::SelectWeightedSequence, CBaseAnimating::SequenceDuration
void __fastcall CDOTA_Modifier_Tutorial_ForceAnimation::OnCreated(
        CDOTA_Modifier_Tutorial_ForceAnimation *const this,
        KeyValues *pKV)
{
  bool v4; // al
  const CBaseAnimating *v5; // rax
  HSequence v6; // r13d
  void (__fastcall *v7)(CDOTA_Modifier_Tutorial_ForceAnimation *const, __int64, float); // r14
  const CBaseAnimating *v8; // rax
  float v9; // xmm0_4

  this->m_nActivity = KeyValues::GetInt(pKV, "activity", 0);
  v4 = KeyValues::GetInt(pKV, "loop", 0) != 0;
  this->m_bLoop = v4;
  if ( !v4 )
  {
    v5 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
    v6.m_Data = CBaseAnimating::SelectWeightedSequence(v5, this->m_nActivity).m_Data;
    if ( v6.m_Data != -1 )
    {
      v7 = *(this->_vptr_CDOTA_Buff + 63);
      v8 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
      v9 = CBaseAnimating::SequenceDuration(v8, v6);
      v7(this, 1, v9);
    }
  }
}


// CDOTA_Modifier_Tutorial_ForceAnimation::CheckState  (line 3260, @0x00000000025e5eb0, libserver.so)  // inlines: Enable, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Tutorial_ForceAnimation::CheckState(
        CDOTA_Modifier_Tutorial_ForceAnimation *const this,
        CDOTABuffState *const buffState)
{
  uint32 m_Index; // eax
  CEntityInstance *m_pInstance; // rcx
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  char m_pEntity; // al

  m_Index = this->m_hParent.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hParent.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
        m_pInstance = v5->m_pInstance;
    }
  }
  m_pEntity = m_pInstance[85].m_pEntity;
  this->m_bFacePlayer = m_pEntity;
  if ( m_pEntity != 0 )
  {
    buffState->m_nEnabledStateMask |= 1uLL;
    buffState->m_nDisabledStateMask &= ~1uLL;
  }
  else
  {
    buffState->m_nEnabledStateMask |= 0x20uLL;
    buffState->m_nDisabledStateMask &= ~0x20uLL;
  }
}


// CDOTA_Modifier_Tutorial_ForceAnimation::DeclareFunctions  (line 3276, @0x00000000025deb80, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Tutorial_ForceAnimation::GetOverrideAnimation(CModifierParams const&)
void __fastcall CDOTA_Modifier_Tutorial_ForceAnimation::DeclareFunctions(
        CDOTA_Modifier_Tutorial_ForceAnimation *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_Tutorial_ForceAnimation::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
}


// CDOTA_Modifier_Tutorial_ForceAnimation::GetOverrideAnimation  (line 3281, @0x00000000025deba0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Tutorial_ForceAnimation::GetOverrideAnimation(
        CDOTA_Modifier_Tutorial_ForceAnimation *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->m_nActivity;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Tutorial_ForceAnimation::AddCustomTransmiterData  (line 3287, @0x00000000025debc0, libserver.so)  // inlines: set_activity, set_has_activity
void __fastcall CDOTA_Modifier_Tutorial_ForceAnimation::AddCustomTransmiterData(
        CDOTA_Modifier_Tutorial_ForceAnimation *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  Activity m_nActivity; // eax

  m_nActivity = this->m_nActivity;
  *(entry + 4) |= 0x800000u;
  *(entry + 34) = m_nActivity;
}


// CDOTA_Modifier_Tutorial_HideNPC::~CDOTA_Modifier_Tutorial_HideNPC  (line 3304, @0x0000000002651700, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tutorial_HideNPC::~CDOTA_Modifier_Tutorial_HideNPC(
        CDOTA_Modifier_Tutorial_HideNPC *const this)
{
  this->_vptr_CDOTA_Buff = &off_41287B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tutorial_HideNPC::~CDOTA_Modifier_Tutorial_HideNPC  (line 3304, @0x0000000002651720, libserver.so)  // inlines: ~CDOTA_Modifier_Tutorial_HideNPC
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tutorial_HideNPC::~CDOTA_Modifier_Tutorial_HideNPC(
        CDOTA_Modifier_Tutorial_HideNPC *const this)
{
  this->_vptr_CDOTA_Buff = &off_41287B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tutorial_HideNPC::IsHidden  (line 3309, @0x0000000002625cb0, libserver.so)
bool __fastcall CDOTA_Modifier_Tutorial_HideNPC::IsHidden(CDOTA_Modifier_Tutorial_HideNPC *const this)
{
  return 1;
}


// CDOTA_Modifier_Tutorial_HideNPC::RemoveOnDeath  (line 3312, @0x0000000002625cc0, libserver.so)
bool __fastcall CDOTA_Modifier_Tutorial_HideNPC::RemoveOnDeath(CDOTA_Modifier_Tutorial_HideNPC *const this)
{
  return this->m_bRemoveOnDeath;
}


// CDOTA_Modifier_Tutorial_HideNPC::OnCreated  (line 3321, @0x00000000025e6630, libserver.so)  // inlines: Get, GetBool, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: KeyValues::GetInt, CBaseEntity::AddEffects
// strings: "remove_on_death"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Tutorial_HideNPC::OnCreated(CDOTA_Modifier_Tutorial_HideNPC *const this, KeyValues *pKV)
{
  int Int; // eax
  CConcreteEntityList *v4; // rsi
  bool v5; // zf
  uint32 m_Index; // eax
  CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx

  Int = KeyValues::GetInt(pKV, "remove_on_death", 1);
  v4 = CEntityHandle::gm_pEntityList;
  v5 = Int == 0;
  m_Index = this->m_hParent.m_Index;
  this->m_bRemoveOnDeath = !v5;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v8 = v4->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[this->m_hParent.m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  CBaseEntity::AddEffects(m_pInstance, 32);
}


// CDOTA_Modifier_Tutorial_HideNPC::OnDestroy  (line 3327, @0x00000000025e65a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, MarkPVSInformationDirty, RemoveEffects, operator CEntityInstance*
// calls: CBaseEntity::DispatchUpdateTransmitState
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Tutorial_HideNPC::OnDestroy(CDOTA_Modifier_Tutorial_HideNPC *const this)
{
  CBaseEntity *m_pInstance; // rbx
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  m_pInstance = 0;
  m_Index = this->m_hParent.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hParent.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
        m_pInstance = v4->m_pInstance;
    }
  }
  (*(m_pInstance->_vptr_IHandleEntity + 188))(m_pInstance, m_pInstance->m_fEffects.m_Value & 0xFFFFFFDF);
  m_pInstance->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(m_pInstance);
}


// CDOTA_Modifier_Tutorial_HideNPC::CheckState  (line 3332, @0x00000000025debe0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Tutorial_HideNPC::CheckState(
        CDOTA_Modifier_Tutorial_HideNPC *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x104180uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFEFBE7FLL;
}


// CDOTA_Modifier_Tutorial_LowAttackPriority::~CDOTA_Modifier_Tutorial_LowAttackPriority  (line 3347, @0x00000000026516b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tutorial_LowAttackPriority::~CDOTA_Modifier_Tutorial_LowAttackPriority(
        CDOTA_Modifier_Tutorial_LowAttackPriority *const this)
{
  this->_vptr_CDOTA_Buff = &off_4128AD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tutorial_LowAttackPriority::~CDOTA_Modifier_Tutorial_LowAttackPriority  (line 3347, @0x00000000026516d0, libserver.so)  // inlines: ~CDOTA_Modifier_Tutorial_LowAttackPriority
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tutorial_LowAttackPriority::~CDOTA_Modifier_Tutorial_LowAttackPriority(
        CDOTA_Modifier_Tutorial_LowAttackPriority *const this)
{
  this->_vptr_CDOTA_Buff = &off_4128AD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tutorial_LowAttackPriority::IsHidden  (line 3352, @0x0000000002625cd0, libserver.so)
bool __fastcall CDOTA_Modifier_Tutorial_LowAttackPriority::IsHidden(
        CDOTA_Modifier_Tutorial_LowAttackPriority *const this)
{
  return 1;
}


// CDOTA_Modifier_Tutorial_LowAttackPriority::CheckState  (line 3362, @0x00000000025dec00, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Tutorial_LowAttackPriority::CheckState(
        CDOTA_Modifier_Tutorial_LowAttackPriority *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x400000uLL;
  buffState->m_nDisabledStateMask &= ~0x400000uLL;
}


// CDOTA_Modifier_Tutorial_Roq_Teleport::~CDOTA_Modifier_Tutorial_Roq_Teleport  (line 3373, @0x0000000002651660, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tutorial_Roq_Teleport::~CDOTA_Modifier_Tutorial_Roq_Teleport(
        CDOTA_Modifier_Tutorial_Roq_Teleport *const this)
{
  this->_vptr_CDOTA_Buff = &off_4128DF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tutorial_Roq_Teleport::~CDOTA_Modifier_Tutorial_Roq_Teleport  (line 3373, @0x0000000002651680, libserver.so)  // inlines: ~CDOTA_Modifier_Tutorial_Roq_Teleport
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tutorial_Roq_Teleport::~CDOTA_Modifier_Tutorial_Roq_Teleport(
        CDOTA_Modifier_Tutorial_Roq_Teleport *const this)
{
  this->_vptr_CDOTA_Buff = &off_4128DF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tutorial_Roq_Teleport::AddCustomTransmiterData  (line 3419, @0x00000000025e5420, libserver.so)  // inlines: assign, length, mutable_v_end, mutable_v_start, set_has_hero_loop_appear, set_has_hero_loop_disappear, set_has_portal_loop_appear, set_has_portal_loop_disappear, set_has_v_end, set_has_v_start, set_has_x, set_has_y, set_has_z, set_hero_loop_appear, set_hero_loop_disappear, set_portal_loop_appear, set_portal_loop_disappear, set_x, set_y, set_z
// calls: strlen, std::string::assign(char const*,ulong), operator new, CMsgVector::CMsgVector, operator delete, _Unwind_Resume
void __fastcall CDOTA_Modifier_Tutorial_Roq_Teleport::AddCustomTransmiterData(
        CDOTA_Modifier_Tutorial_Roq_Teleport *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  CMsgVector *v4; // rax
  vec_t x; // r13d
  CMsgVector *v6; // rax
  vec_t y; // r13d
  CMsgVector *v8; // rax
  vec_t z; // r13d
  CMsgVector *v10; // rax
  vec_t v11; // r13d
  CMsgVector *v12; // rax
  vec_t v13; // r13d
  CMsgVector *v14; // rax
  vec_t v15; // r13d
  size_t v16; // rax
  size_t v17; // rax
  char *m_iszPortalLoopDisappear; // rsi
  char *m_iszHeroLoopAppear; // r13
  char *m_iszHeroLoopDisappear; // r12
  size_t v21; // rax
  size_t v22; // rax
  CMsgVector *v23; // r14
  CMsgVector *v24; // r14
  CMsgVector *v25; // r14
  CMsgVector *v26; // r14
  CMsgVector *v27; // r14
  CMsgVector *v28; // r14

  v4 = *(entry + 10);
  x = this->m_vStart.x;
  *(entry + 4) |= 0x8000u;
  if ( v4 == 0 )
  {
    v23 = operator new(0x28u);
    CMsgVector::CMsgVector(v23);
    *(entry + 10) = v23;
    v4 = v23;
  }
  *(v4 + 4) |= 1u;
  *(v4 + 6) = x;
  v6 = *(entry + 10);
  y = this->m_vStart.y;
  *(entry + 4) |= 0x8000u;
  if ( v6 == 0 )
  {
    v24 = operator new(0x28u);
    CMsgVector::CMsgVector(v24);
    *(entry + 10) = v24;
    v6 = v24;
  }
  *(v6 + 4) |= 2u;
  *(v6 + 7) = y;
  v8 = *(entry + 10);
  z = this->m_vStart.z;
  *(entry + 4) |= 0x8000u;
  if ( v8 == 0 )
  {
    v25 = operator new(0x28u);
    CMsgVector::CMsgVector(v25);
    *(entry + 10) = v25;
    v8 = v25;
  }
  *(v8 + 4) |= 4u;
  *(v8 + 8) = z;
  v10 = *(entry + 11);
  v11 = this->m_vLoc.x;
  *(entry + 4) |= 0x10000u;
  if ( v10 == 0 )
  {
    v26 = operator new(0x28u);
    CMsgVector::CMsgVector(v26);
    *(entry + 11) = v26;
    v10 = v26;
  }
  *(v10 + 4) |= 1u;
  *(v10 + 6) = v11;
  v12 = *(entry + 11);
  v13 = this->m_vLoc.y;
  *(entry + 4) |= 0x10000u;
  if ( v12 == 0 )
  {
    v27 = operator new(0x28u);
    CMsgVector::CMsgVector(v27);
    *(entry + 11) = v27;
    v12 = v27;
  }
  *(v12 + 4) |= 2u;
  *(v12 + 7) = v13;
  v14 = *(entry + 11);
  v15 = this->m_vLoc.z;
  *(entry + 4) |= 0x10000u;
  if ( v14 == 0 )
  {
    v28 = operator new(0x28u);
    CMsgVector::CMsgVector(v28);
    *(entry + 11) = v28;
    v14 = v28;
  }
  *(v14 + 4) |= 4u;
  *(v14 + 8) = v15;
  *(entry + 4) |= 0x20000u;
  v16 = strlen(this->m_iszPortalLoopAppear);
  std::string::assign(*(entry + 12), this->m_iszPortalLoopAppear, v16);
  *(entry + 4) |= 0x40000u;
  v17 = strlen(this->m_iszPortalLoopDisappear);
  m_iszPortalLoopDisappear = this->m_iszPortalLoopDisappear;
  m_iszHeroLoopAppear = this->m_iszHeroLoopAppear;
  m_iszHeroLoopDisappear = this->m_iszHeroLoopDisappear;
  std::string::assign(*(entry + 13), m_iszPortalLoopDisappear, v17);
  *(entry + 4) |= 0x80000u;
  v21 = strlen(m_iszHeroLoopAppear);
  std::string::assign(*(entry + 14), m_iszHeroLoopAppear, v21);
  *(entry + 4) |= 0x100000u;
  v22 = strlen(m_iszHeroLoopDisappear);
  std::string::assign(*(entry + 15), m_iszHeroLoopDisappear, v22);
}


// CDOTA_Modifier_Tutorial_Roq_Teleport::OnCreated  (line 3481, @0x00000000025e8350, libserver.so)  // inlines: Get, GetInstance, GetParent, V_strncpy<long unsigned int>, Vector, operator=
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, KeyValues::GetFloat, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, KeyValues::GetString, _V_strncpy
// strings: "particles/items2_fx/teleport_start.vpcf", "particles/items2_fx/teleport_end.vpcf", "Portal.Loop_Appear", "loop_appear_sound", "Portal.Loop_Disappear", "loop_disappear_sound" (10 total)
void __fastcall CDOTA_Modifier_Tutorial_Roq_Teleport::OnCreated(
        CDOTA_Modifier_Tutorial_Roq_Teleport *const this,
        KeyValues *pKV)
{
  EHANDLE *p_m_hParent; // r13
  const CBaseEntity *v5; // rax
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  CDOTA_ParticleManager *ParticleManager; // rax
  const CBaseEntity *v10; // rax
  int m_nFXOrigin; // r14d
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  int Particle; // eax
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  const char *String; // rax
  const char *v20; // rax
  const char *v21; // rax
  const char *v22; // rax
  Vector vecTPColor; // [rsp+0h] [rbp-30h]
  Vector vecTPColora; // [rsp+0h] [rbp-30h]
  Vector vecTPColorb; // [rsp+0h] [rbp-30h]
  Vector vecTPColorc; // [rsp+0h] [rbp-30h]
  Vector vecTPColord; // [rsp+0h] [rbp-30h]

  p_m_hParent = &this->m_hParent;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
  this->m_vStart = *CBaseEntity::GetAbsOrigin(v5);
  this->m_vLoc.x = KeyValues::GetFloat(pKV, "x", v6);
  this->m_vLoc.y = KeyValues::GetFloat(pKV, "y", v7);
  this->m_vLoc.z = KeyValues::GetFloat(pKV, "z", v8);
  vecTPColor.x = 1.0;
  *&vecTPColor.y = 0x3F8000003F800000LL;
  ParticleManager = GetParticleManager();
  this->m_nFXOrigin = CDOTA_ParticleManager::CreateParticle(
                        ParticleManager,
                        "particles/items2_fx/teleport_start.vpcf",
                        2,
                        0,
                        0,
                        0);
  v10 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
  CBaseEntity::GetAbsOrigin(v10);
  m_nFXOrigin = this->m_nFXOrigin;
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v12, m_nFXOrigin, 0, vecTPColor);
  LODWORD(p_m_hParent) = this->m_nFXOrigin;
  v13 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v13, p_m_hParent, 2, vecTPColora);
  v14 = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(v14, "particles/items2_fx/teleport_end.vpcf", 8, 0, 0, 0);
  this->m_nFXDestination = Particle;
  LODWORD(p_m_hParent) = Particle;
  v16 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v16, p_m_hParent, 0, vecTPColorb);
  LODWORD(p_m_hParent) = this->m_nFXDestination;
  v17 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v17, p_m_hParent, 1, vecTPColorc);
  LODWORD(p_m_hParent) = this->m_nFXDestination;
  v18 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v18, p_m_hParent, 2, vecTPColord);
  String = KeyValues::GetString(pKV, "loop_appear_sound", "Portal.Loop_Appear", 0, 0);
  _V_strncpy(this->m_iszPortalLoopAppear, String, 260);
  v20 = KeyValues::GetString(pKV, "loop_disappear_sound", "Portal.Loop_Disappear", 0, 0);
  _V_strncpy(this->m_iszPortalLoopDisappear, v20, 260);
  v21 = KeyValues::GetString(pKV, "hero_appear_sound", "Portal.Hero_Appear", 0, 0);
  _V_strncpy(this->m_iszHeroLoopAppear, v21, 260);
  v22 = KeyValues::GetString(pKV, "hero_disappear_sound", "Portal.Hero_Disappear", 0, 0);
  _V_strncpy(this->m_iszHeroLoopDisappear, v22, 260);
}


// CDOTA_Modifier_Tutorial_Roq_Teleport::OnDestroy  (line 3512, @0x00000000025e6e10, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, FindClearSpaceForUnit
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Tutorial_Roq_Teleport::OnDestroy(CDOTA_Modifier_Tutorial_Roq_Teleport *const this)
{
  int m_nFXOrigin; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  int m_nFXDestination; // r12d
  CDOTA_ParticleManager *v5; // rax
  uint32 m_Index; // eax
  CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx

  m_nFXOrigin = this->m_nFXOrigin;
  if ( m_nFXOrigin != -1 )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXOrigin, 0);
    this->m_nFXOrigin = -1;
  }
  m_nFXDestination = this->m_nFXDestination;
  if ( m_nFXDestination != -1 )
  {
    v5 = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(v5, m_nFXDestination, 0);
    this->m_nFXDestination = -1;
  }
  m_Index = this->m_hParent.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[this->m_hParent.m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  FindClearSpaceForUnit(m_pInstance, this->m_vLoc, 1);
}


// CDOTA_Modifier_Tutorial_LastHitHelper::OnCreated  (line 3546, @0x00000000025dec20, libserver.so)
void __fastcall CDOTA_Modifier_Tutorial_LastHitHelper::OnCreated(
        CDOTA_Modifier_Tutorial_LastHitHelper *const this,
        KeyValues *pKV)
{
  this->m_bTargetFriendlies = 0;
}


// CDOTA_Modifier_Tutorial_LastHitHelper::DeclareFunctions  (line 3553, @0x00000000025dec30, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Tutorial_LastHitHelper::OnAttacked(CModifierParams const&)
void __fastcall CDOTA_Modifier_Tutorial_LastHitHelper::DeclareFunctions(
        CDOTA_Modifier_Tutorial_LastHitHelper *const this)
{
  this->m_Functions[137].__pfn = CDOTA_Modifier_Tutorial_LastHitHelper::OnAttacked;
  this->m_Functions[137].__delta = 0;
}


// CDOTA_Modifier_Tutorial_LastHitHelper::OnAttacked  (line 3561, @0x00000000025e8830, libserver.so)  // inlines: AttackerNPC, Get, GetInstance, GetParent, IsUnitMyParent, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindModifierByName, CBaseEntity::GetHealth, SendOverheadEventMessage
// strings: "modifier_tutorial_lasthittable"
ModifierVariant_t __fastcall CDOTA_Modifier_Tutorial_LastHitHelper::OnAttacked(
        CDOTA_Modifier_Tutorial_LastHitHelper *const this,
        const CModifierParams *const params)
{
  CEntityInstance *v4; // rax
  CDOTA_BaseNPC *v6; // rax
  float fDamage; // ebx
  CEntityInstance *v8; // rax
  const CBaseEntity *v9; // rdi
  float v10; // xmm1_4
  EHANDLE *p_htarget; // rdi
  CEntityInstance *v12; // rax
  CBaseEntity *v13; // rdx
  CEntityInstance *v14; // rax
  CBaseEntity *v15; // rdx

  v4 = CEntityHandle::operator CEntityInstance *(&params->hattacker);
  if ( v4 != 0
    && BYTE3(v4[7]._vptr_IHandleEntity) != 0
    && v4 == CEntityHandle::operator CEntityInstance *(&this->m_hParent) )
  {
    v6 = CEntityHandle::operator CEntityInstance *(&params->htarget);
    if ( v6 != 0 && v6->m_bIsDOTANPC && CDOTA_BaseNPC::FindModifierByName(v6, "modifier_tutorial_lasthittable", 0) != 0 )
    {
      fDamage = params->fDamage;
      v8 = CEntityHandle::operator CEntityInstance *(&params->htarget);
      if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 )
        v9 = v8;
      else
        v9 = 0;
      v10 = fDamage / CBaseEntity::GetHealth(v9);
      if ( v10 < 1.0 )
      {
        p_htarget = &params->htarget;
        if ( v10 <= 0.80000001 )
        {
          v14 = CEntityHandle::operator CEntityInstance *(p_htarget);
          if ( v14 != 0 && BYTE3(v14[7]._vptr_IHandleEntity) != 0 )
            v15 = v14;
          else
            v15 = 0;
          SendOverheadEventMessage(0, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_LAST_HIT_EARLY, v15, 0, 0);
        }
        else
        {
          v12 = CEntityHandle::operator CEntityInstance *(p_htarget);
          if ( v12 != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 )
            v13 = v12;
          else
            v13 = 0;
          SendOverheadEventMessage(0, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_LAST_HIT_CLOSE, v13, 0, 0);
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Tutorial_LastHitHelper::GetDamageRatio  (line 3593, @0x00000000025ea2e0, libserver.so)
// calls: CDOTA_BaseNPC::GetAverageTrueAttackDamage, CDOTA_BaseNPC::GetArmorReductionForDamageType, CBaseEntity::GetHealth
// callers: CDOTA_Modifier_Tutorial_LastHittable::GetEffectControlPointValue
float __fastcall CDOTA_Modifier_Tutorial_LastHitHelper::GetDamageRatio(
        CDOTA_BaseNPC *pAttacker,
        CDOTA_BaseNPC *pDefender)
{
  int AverageTrueAttackDamage; // r12d
  float flDamage; // [rsp+Ch] [rbp-14h]

  AverageTrueAttackDamage = CDOTA_BaseNPC::GetAverageTrueAttackDamage(pAttacker, 0);
  flDamage = AverageTrueAttackDamage * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pDefender, 1));
  return CBaseEntity::GetHealth(pDefender) / flDamage;
}


// CDOTA_Modifier_Tutorial_LastHittable::~CDOTA_Modifier_Tutorial_LastHittable  (line 3612, @0x00000000026515c0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tutorial_LastHittable::~CDOTA_Modifier_Tutorial_LastHittable(
        CDOTA_Modifier_Tutorial_LastHittable *const this)
{
  this->_vptr_CDOTA_Buff = &off_4129430;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tutorial_LastHittable::~CDOTA_Modifier_Tutorial_LastHittable  (line 3612, @0x00000000026515e0, libserver.so)  // inlines: ~CDOTA_Modifier_Tutorial_LastHittable
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tutorial_LastHittable::~CDOTA_Modifier_Tutorial_LastHittable(
        CDOTA_Modifier_Tutorial_LastHittable *const this)
{
  this->_vptr_CDOTA_Buff = &off_4129430;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tutorial_LastHittable::IsHidden  (line 3617, @0x0000000002625ce0, libserver.so)
bool __fastcall CDOTA_Modifier_Tutorial_LastHittable::IsHidden(CDOTA_Modifier_Tutorial_LastHittable *const this)
{
  return 1;
}


// CDOTA_Modifier_Tutorial_LastHittable::IsDebuff  (line 3619, @0x0000000002625cf0, libserver.so)
bool __fastcall CDOTA_Modifier_Tutorial_LastHittable::IsDebuff(CDOTA_Modifier_Tutorial_LastHittable *const this)
{
  return 1;
}


// CDOTA_Modifier_Tutorial_LastHittable::IsPurgable  (line 3620, @0x0000000002625d00, libserver.so)
bool __fastcall CDOTA_Modifier_Tutorial_LastHittable::IsPurgable(CDOTA_Modifier_Tutorial_LastHittable *const this)
{
  return 0;
}


// CDOTA_Modifier_Tutorial_LastHittable::OnCreated  (line 3668, @0x00000000025dec50, libserver.so)
void __fastcall CDOTA_Modifier_Tutorial_LastHittable::OnCreated(
        CDOTA_Modifier_Tutorial_LastHittable *const this,
        KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_Tutorial_LastHittable::DeclareFunctions  (line 3684, @0x00000000025dec60, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Tutorial_LastHittable::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_Tutorial_LastHittable::DeclareFunctions(
        CDOTA_Modifier_Tutorial_LastHittable *const this)
{
  this->m_Functions[138].__pfn = CDOTA_Modifier_Tutorial_LastHittable::OnDeath;
  this->m_Functions[138].__delta = 0;
}


// CDOTA_Modifier_Tutorial_LastHittable::OnDeath  (line 3691, @0x00000000025eb110, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetCaster, SendOverheadEventMessage
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Tutorial_LastHittable::OnDeath(
        CDOTA_Modifier_Tutorial_LastHittable *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r14
  CEntityInstance *v9; // r12
  CDOTA_BaseNPC *Caster; // r13
  CEntityInstance *v11; // rax
  CDOTA_BaseNPC *v12; // rdx
  CBaseEntity *v13; // rdx

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    return 1uLL;
  v5 = &v4[params->hunit.m_Index & 0x1FF];
  if ( v5 == 0 )
    return 1uLL;
  if ( m_Index != v5->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 )
    return 1uLL;
  if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    return 1uLL;
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
  if ( v9 != m_pInstance )
    return 1uLL;
  Caster = CDOTA_Buff::GetCaster(this);
  v11 = CEntityHandle::operator CEntityInstance *(&params->hattacker);
  if ( v11 == 0 || (v12 = v11, BYTE3(v11[7]._vptr_IHandleEntity) == 0) )
    v12 = 0;
  if ( Caster == v12 )
    return 1uLL;
  v13 = 0;
  if ( BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v13 = v9;
  SendOverheadEventMessage(0, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_LAST_HIT_MISS, v13, 0, 0);
  return 1uLL;
}


// CDOTA_Modifier_Tutorial_LastHittable::OnIntervalThink  (line 3705, @0x00000000025dec80, libserver.so)
void __fastcall CDOTA_Modifier_Tutorial_LastHittable::OnIntervalThink(CDOTA_Modifier_Tutorial_LastHittable *const this)
{
  ;
}


// CDOTA_Modifier_Tutorial_LastHittable::GetEffectControlPointValue  (line 3715, @0x00000000025eb210, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, RemapValClamped, clamp<float, float>, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_Modifier_Tutorial_LastHitHelper::GetDamageRatio
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Modifier_Tutorial_LastHittable::GetEffectControlPointValue(
        CDOTA_Modifier_Tutorial_LastHittable *const this)
{
  CDOTA_BaseNPC *m_pInstance; // rbx
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *Caster; // rax
  float DamageRatio; // xmm1_4
  float result; // xmm0_4
  float v8; // xmm1_4

  m_pInstance = 0;
  m_Index = this->m_hParent.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hParent.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
        m_pInstance = v4->m_pInstance;
    }
  }
  Caster = CDOTA_Buff::GetCaster(this);
  DamageRatio = CDOTA_Modifier_Tutorial_LastHitHelper::GetDamageRatio(Caster, m_pInstance);
  result = 0.0;
  v8 = (DamageRatio - 3.0) * -0.5;
  if ( v8 >= 0.0 )
  {
    result = 1.0;
    if ( v8 <= 1.0 )
      return v8 + 0.0;
  }
  return result;
}


// CDOTA_Modifier_Tutorial_LastHittable::GetHighlightColor  (line 3725, @0x00000000025ea340, libserver.so)
__int64 __fastcall CDOTA_Modifier_Tutorial_LastHittable::GetHighlightColor(
        CDOTA_Modifier_Tutorial_LastHittable *const this,
        double a2,
        float controlValue)
{
  return 0;
}


// CDOTA_Modifier_Creep_Slow::~CDOTA_Modifier_Creep_Slow  (line 3760, @0x0000000002651570, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Creep_Slow::~CDOTA_Modifier_Creep_Slow(CDOTA_Modifier_Creep_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_4129750;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Creep_Slow::~CDOTA_Modifier_Creep_Slow  (line 3760, @0x0000000002651590, libserver.so)  // inlines: ~CDOTA_Modifier_Creep_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Creep_Slow::~CDOTA_Modifier_Creep_Slow(CDOTA_Modifier_Creep_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_4129750;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Creep_Slow::IsDebuff  (line 3765, @0x0000000002625d10, libserver.so)
bool __fastcall CDOTA_Modifier_Creep_Slow::IsDebuff(CDOTA_Modifier_Creep_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_Creep_Slow::IsHidden  (line 3766, @0x0000000002625d20, libserver.so)
bool __fastcall CDOTA_Modifier_Creep_Slow::IsHidden(CDOTA_Modifier_Creep_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_Creep_Slow::DeclareFunctions  (line 3777, @0x00000000025dec90, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Creep_Slow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Creep_Slow::DeclareFunctions(CDOTA_Modifier_Creep_Slow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Creep_Slow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Creep_Slow::GetModifierMoveSpeedBonus_Percentage  (line 3784, @0x00000000025decb0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Creep_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Creep_Slow *const this,
        const CModifierParams *const params)
{
  return 0xC1C8000000000001LL;
}


// CDOTA_Modifier_Creep_Haste::~CDOTA_Modifier_Creep_Haste  (line 3795, @0x0000000002651520, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Creep_Haste::~CDOTA_Modifier_Creep_Haste(CDOTA_Modifier_Creep_Haste *const this)
{
  this->_vptr_CDOTA_Buff = &off_4129A70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Creep_Haste::~CDOTA_Modifier_Creep_Haste  (line 3795, @0x0000000002651540, libserver.so)  // inlines: ~CDOTA_Modifier_Creep_Haste
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Creep_Haste::~CDOTA_Modifier_Creep_Haste(CDOTA_Modifier_Creep_Haste *const this)
{
  this->_vptr_CDOTA_Buff = &off_4129A70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Creep_Haste::IsHidden  (line 3800, @0x0000000002625d30, libserver.so)
bool __fastcall CDOTA_Modifier_Creep_Haste::IsHidden(CDOTA_Modifier_Creep_Haste *const this)
{
  return 1;
}


// CDOTA_Modifier_Creep_Haste::DeclareFunctions  (line 3811, @0x00000000025decd0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Creep_Haste::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Creep_Haste::DeclareFunctions(CDOTA_Modifier_Creep_Haste *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Creep_Haste::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Creep_Haste::GetModifierMoveSpeedBonus_Percentage  (line 3818, @0x00000000025decf0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Creep_Haste::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Creep_Haste *const this,
        const CModifierParams *const params)
{
  return 0x41C8000000000001uLL;
}


// CDOTA_Modifier_Buyback_Gold_Penalty::~CDOTA_Modifier_Buyback_Gold_Penalty  (line 3827, @0x00000000026514d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Buyback_Gold_Penalty::~CDOTA_Modifier_Buyback_Gold_Penalty(
        CDOTA_Modifier_Buyback_Gold_Penalty *const this)
{
  this->_vptr_CDOTA_Buff = &off_4129D90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Buyback_Gold_Penalty::~CDOTA_Modifier_Buyback_Gold_Penalty  (line 3827, @0x00000000026514f0, libserver.so)  // inlines: ~CDOTA_Modifier_Buyback_Gold_Penalty
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Buyback_Gold_Penalty::~CDOTA_Modifier_Buyback_Gold_Penalty(
        CDOTA_Modifier_Buyback_Gold_Penalty *const this)
{
  this->_vptr_CDOTA_Buff = &off_4129D90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Buyback_Gold_Penalty::IsDebuff  (line 3832, @0x0000000002625d40, libserver.so)
bool __fastcall CDOTA_Modifier_Buyback_Gold_Penalty::IsDebuff(CDOTA_Modifier_Buyback_Gold_Penalty *const this)
{
  return 1;
}


// CDOTA_Modifier_Buyback_Gold_Penalty::IsPurgable  (line 3833, @0x0000000002625d50, libserver.so)
bool __fastcall CDOTA_Modifier_Buyback_Gold_Penalty::IsPurgable(CDOTA_Modifier_Buyback_Gold_Penalty *const this)
{
  return 0;
}


// CDOTA_Modifier_Buyback_Gold_Penalty::GetTexture  (line 3841, @0x00000000025ded10, libserver.so)
// strings: "modifier_buyback_gold_penalty"
const char *__fastcall CDOTA_Modifier_Buyback_Gold_Penalty::GetTexture(CDOTA_Modifier_Buyback_Gold_Penalty *const this)
{
  return "modifier_buyback_gold_penalty";
}


// CDOTA_Modifier_Gold_Bag_Launch::~CDOTA_Modifier_Gold_Bag_Launch  (line 3850, @0x0000000002651450, libserver.so)  // inlines: ~CDOTA_Modifier_Knockback
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Gold_Bag_Launch::~CDOTA_Modifier_Gold_Bag_Launch(
        CDOTA_Modifier_Gold_Bag_Launch *const this)
{
  this->_vptr_CDOTA_Buff = &off_4122C50;
  this->_vptr_CHorizontalMotionController = &off_4122F58;
  this->_vptr_CVerticalMotionController = &off_4122F98;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Gold_Bag_Launch::~CDOTA_Modifier_Gold_Bag_Launch  (line 3850, @0x0000000002651480, libserver.so)  // inlines: ~CDOTA_Modifier_Gold_Bag_Launch, ~CDOTA_Modifier_Knockback
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Gold_Bag_Launch::~CDOTA_Modifier_Gold_Bag_Launch(
        CDOTA_Modifier_Gold_Bag_Launch *const this)
{
  this->_vptr_CDOTA_Buff = &off_4122C50;
  this->_vptr_CHorizontalMotionController = &off_4122F58;
  this->_vptr_CVerticalMotionController = &off_4122F98;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Gold_Bag_Launch::IsHidden  (line 3859, @0x0000000002625d60, libserver.so)
bool __fastcall CDOTA_Modifier_Gold_Bag_Launch::IsHidden(CDOTA_Modifier_Gold_Bag_Launch *const this)
{
  return 1;
}


// CDOTA_Modifier_Gold_Bag_Launch::GetEffectName  (line 3861, @0x0000000002625d70, libserver.so)
const char *__fastcall CDOTA_Modifier_Gold_Bag_Launch::GetEffectName(CDOTA_Modifier_Gold_Bag_Launch *const this)
{
  return 0;
}


// CDOTA_Modifier_Gold_Bag_Launch::OnCreated  (line 3872, @0x0000000002614cc0, libserver.so)
// calls: CDOTA_Modifier_Knockback::OnCreated, KeyValues::GetInt
// strings: "gold_amount"
void __fastcall CDOTA_Modifier_Gold_Bag_Launch::OnCreated(CDOTA_Modifier_Gold_Bag_Launch *const this, KeyValues *pKV)
{
  CDOTA_Modifier_Knockback::OnCreated(this, pKV);
  this->gold_amount = KeyValues::GetInt(pKV, "gold_amount", 0);
}


// CDOTA_Modifier_Gold_Bag_Launch::OnDestroy  (line 3883, @0x00000000025e9660, libserver.so)  // inlines: CUtlAbstractDelegate, CUtlDelegate, ClosurePtr, FastDelegate2, Get, GetInstance, GetParent, NetworkStateChanged, Set, SetPurchaseTime, operator=<float>
// calls: CDOTA_Modifier_Knockback::OnDestroy, CEntityHandle::operator CEntityInstance*, DOTA_CreateItem, CDOTA_Item::SetCurrentCharges, CBaseEntity::GetAbsOrigin, CreateItemOnPositionAsync, UTIL_Remove
// strings: "item_bag_of_gold"
void __fastcall CDOTA_Modifier_Gold_Bag_Launch::OnDestroy(CDOTA_Modifier_Gold_Bag_Launch *const this)
{
  EHANDLE *p_m_hParent; // r12
  CEntityInstance *v3; // rax
  int v4; // ebx
  CBaseEntity *v5; // rax
  CDOTA_Item *Item; // rax
  CDOTA_Item *v7; // rbx
  const CBaseEntity *v8; // rax
  CEntityInstance *v9; // rax
  _QWORD v10[8]; // [rsp+0h] [rbp-40h] BYREF
  Vector v11; // 0:xmm0_8.8,8:xmm1_4.4

  p_m_hParent = &this->m_hParent;
  CDOTA_Modifier_Knockback::OnDestroy(this);
  v3 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
  v4 = (*(v3->_vptr_IHandleEntity + 414))(v3);
  v5 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
  Item = DOTA_CreateItem("item_bag_of_gold", v5, v4);
  v7 = Item;
  if ( Item != 0 )
  {
    if ( Item->m_flPurchaseTime.m_Value != 0.0 )
    {
      (*(Item->_vptr_IHandleEntity + 22))(Item, 964, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0.0);
      v7->m_flPurchaseTime.m_Value = 0.0;
    }
    CDOTA_Item::SetCurrentCharges(v7, this->gold_amount);
    memset(v10, 0, 24);
    v8 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
    v11 = *CBaseEntity::GetAbsOrigin(v8);
    CreateItemOnPositionAsync(v11, v7, v10, 0);
  }
  v9 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
  UTIL_Remove(v9);
}


// CDOTA_Modifier_Gold_Bag_Launch::CheckState  (line 3902, @0x00000000025e20c0, libserver.so)  // inlines: CheckState, Enable
void __fastcall CDOTA_Modifier_Gold_Bag_Launch::CheckState(
        CDOTA_Modifier_Gold_Bag_Launch *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nEnabledStateMask; // rdx
  uint64 m_nDisabledStateMask; // rax

  m_nEnabledStateMask = buffState->m_nEnabledStateMask;
  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  if ( this->m_bShouldStun )
  {
    m_nDisabledStateMask &= ~0x20uLL;
    m_nEnabledStateMask |= 0x20uLL;
  }
  buffState->m_nEnabledStateMask = m_nEnabledStateMask | 0x2A04100;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFD5FBEFFLL;
}


// CDOTA_Modifier_Provide_Vision::~CDOTA_Modifier_Provide_Vision  (line 3920, @0x0000000002651380, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Provide_Vision::~CDOTA_Modifier_Provide_Vision(
        CDOTA_Modifier_Provide_Vision *const this)
{
  this->_vptr_CDOTA_Buff = &off_412A430;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Provide_Vision::~CDOTA_Modifier_Provide_Vision  (line 3920, @0x00000000026513a0, libserver.so)  // inlines: ~CDOTA_Modifier_Provide_Vision
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Provide_Vision::~CDOTA_Modifier_Provide_Vision(
        CDOTA_Modifier_Provide_Vision *const this)
{
  this->_vptr_CDOTA_Buff = &off_412A430;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Provide_Vision::IsPurgable  (line 3927, @0x0000000002625d80, libserver.so)
bool __fastcall CDOTA_Modifier_Provide_Vision::IsPurgable(CDOTA_Modifier_Provide_Vision *const this)
{
  return 0;
}


// CDOTA_Modifier_Provide_Vision::IsHidden  (line 3928, @0x0000000002625d90, libserver.so)
bool __fastcall CDOTA_Modifier_Provide_Vision::IsHidden(CDOTA_Modifier_Provide_Vision *const this)
{
  return 1;
}


// CDOTA_Modifier_Provide_Vision::CheckState  (line 3930, @0x0000000002625da0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Provide_Vision::CheckState(
        CDOTA_Modifier_Provide_Vision *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x400uLL;
  buffState->m_nDisabledStateMask &= ~0x400uLL;
}


// CDOTA_Modifier_ScriptedMotionController::~CDOTA_Modifier_ScriptedMotionController  (line 3945, @0x0000000002651300, libserver.so)  // inlines: Free, ~CVariantBase
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_ScriptedMotionController::~CDOTA_Modifier_ScriptedMotionController(
        CDOTA_Modifier_ScriptedMotionController *const this)
{
  bool v2; // zf

  this->_vptr_CDOTA_Buff = &off_412A750;
  v2 = (this->m_parameterTable.m_flags & 1) == 0;
  this->_vptr_CHorizontalMotionController = &off_412AA58;
  this->_vptr_CVerticalMotionController = &off_412AA98;
  if ( !v2 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_parameterTable.m_uint64);
    this->m_parameterTable.m_flags &= ~1u;
  }
  this->m_parameterTable.m_uint64 = 0;
  this->m_parameterTable.m_type = 0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_ScriptedMotionController::~CDOTA_Modifier_ScriptedMotionController  (line 3945, @0x0000000002652da0, libserver.so)  // inlines: Free, ~CDOTA_Modifier_ScriptedMotionController, ~CVariantBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_ScriptedMotionController::~CDOTA_Modifier_ScriptedMotionController(
        CDOTA_Modifier_ScriptedMotionController *const this)
{
  bool v2; // zf

  this->_vptr_CDOTA_Buff = &off_412A750;
  v2 = (this->m_parameterTable.m_flags & 1) == 0;
  this->_vptr_CHorizontalMotionController = &off_412AA58;
  this->_vptr_CVerticalMotionController = &off_412AA98;
  if ( !v2 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_parameterTable.m_uint64);
    this->m_parameterTable.m_flags &= ~1u;
  }
  this->m_parameterTable.m_uint64 = 0;
  this->m_parameterTable.m_type = 0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_ScriptedMotionController::IsHidden  (line 3958, @0x0000000002625dc0, libserver.so)
bool __fastcall CDOTA_Modifier_ScriptedMotionController::IsHidden(CDOTA_Modifier_ScriptedMotionController *const this)
{
  return 1;
}


// CDOTA_Modifier_ScriptedMotionController::IsHorizontalMotionValidToApply  (line 3964, @0x0000000002625dd0, libserver.so)
bool __fastcall CDOTA_Modifier_ScriptedMotionController::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_ScriptedMotionController *const this)
{
  bool result; // al

  result = 0;
  if ( (*(&this->CDOTA_Buff + 138) & 4) == 0 )
    return this->m_hHorizontalControlFunction != 0;
  return result;
}


// CDOTA_Modifier_ScriptedMotionController::IsVerticalMotionValidToApply  (line 3965, @0x0000000002625e00, libserver.so)
bool __fastcall CDOTA_Modifier_ScriptedMotionController::IsVerticalMotionValidToApply(
        CDOTA_Modifier_ScriptedMotionController *const this)
{
  bool result; // al

  result = 0;
  if ( (*(&this->CDOTA_Buff + 138) & 4) == 0 )
    return this->m_hVerticalControlFunction != 0;
  return result;
}


// CDOTA_Modifier_ScriptedMotionController::IsMotionController  (line 3967, @0x0000000002625e30, libserver.so)
bool __fastcall CDOTA_Modifier_ScriptedMotionController::IsMotionController(
        CDOTA_Modifier_ScriptedMotionController *const this)
{
  return 1;
}


// CDOTA_Modifier_ScriptedMotionController::OnCreated  (line 3976, @0x00000000026153c0, libserver.so)  // inlines: AsHScript, CVariantBase, CreateTableFromKeyValues, Destroy, EntityToHScript, Get, GetAbility, GetInstance, GetParent, ToHScript, operator==<CBaseEntity>, ~CVariantBase
// calls: KeyValues::GetString, CEntityHandle::operator CEntityInstance*, CDOTALocomotor::ApplyHorizontalMotionController, CDOTALocomotor::ApplyVerticalMotionController, CEntityInstance::GetPublicScriptScope, CVariantBase<CVariantDefaultAllocator>::Free, CDOTA_Buff::GetCaster, CDOTA_Buff::Destroy, Recursive_ConvertKeyValuesToTable, _Unwind_Resume
// strings: "HorizontalControlFunction", "VerticalControlFunction"
void __fastcall CDOTA_Modifier_ScriptedMotionController::OnCreated(
        CDOTA_Modifier_ScriptedMotionController *const this,
        KeyValues *pKV)
{
  const char *String; // r15
  const char *v5; // r14
  __int64 v6; // rax
  IScriptVM *v7; // r13
  __int64 v8; // r8
  const char *v9; // rsi
  HSCRIPT v10; // rax
  HSCRIPT v11; // rax
  HSCRIPT v12; // rax
  EHANDLE *p_m_hParent; // r14
  CEntityInstance *v14; // rax
  CDOTALocomotor *v15; // rax
  CEntityInstance *v16; // rax
  CDOTALocomotor *v17; // rax
  char *m_pszString; // rdx
  void (__fastcall *v19)(IScriptVM *, const char *, char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  CEntityInstance *v20; // rax
  HSCRIPT m_hScope; // rdx
  const char *v22; // rsi
  void (__fastcall *v23)(IScriptVM *, const char *, char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  CDOTA_BaseNPC *Caster; // rax
  HSCRIPT v25; // rdx
  const char *v26; // rsi
  void (__fastcall *v27)(IScriptVM *, const char *, const char *, CVariantBase<CVariantDefaultAllocator> *); // r15
  CEntityInstance *v28; // rax
  HSCRIPT v29; // rdx
  const char *v30; // rsi
  void (__fastcall *v31)(IScriptVM *, const char *, char *, CVariantBase<CVariantDefaultAllocator> *); // r14
  const CEntityInstance *v32; // rax
  const char *v33; // rsi
  const char *hScriptScope; // [rsp+0h] [rbp-50h]
  HSCRIPT hScriptScopea; // [rsp+0h] [rbp-50h]
  HSCRIPT hScriptScopeb; // [rsp+0h] [rbp-50h]
  const char *horizontalScriptFunction; // [rsp+8h] [rbp-48h]
  CVariantBase<CVariantDefaultAllocator> v38; // [rsp+10h] [rbp-40h] BYREF

  this->m_hOnDestroyFunction = 0;
  String = KeyValues::GetString(pKV, "ScriptFile", 0, 0, 0);
  horizontalScriptFunction = KeyValues::GetString(pKV, "HorizontalControlFunction", 0, 0, 0);
  v5 = KeyValues::GetString(pKV, "VerticalControlFunction", 0, 0, 0);
  hScriptScope = KeyValues::GetString(pKV, "OnDestroy", 0, 0, 0);
  v6 = (*(g_pVScriptGameSystem->_vptr_IVScriptGameSystem + 4))(g_pVScriptGameSystem);
  if ( String == 0 )
    goto LABEL_3;
  v7 = v6;
  if ( v6 == 0 || v5 == 0 && horizontalScriptFunction == 0 )
    goto LABEL_3;
  v8 = (*(g_pVScriptGameSystem->_vptr_IVScriptGameSystem + 9))(g_pVScriptGameSystem, String);
  if ( v8 == 0 )
    goto LABEL_3;
  v9 = hScriptScope;
  v10 = 0;
  if ( hScriptScope != 0 )
  {
    hScriptScopea = v8;
    v10 = (*(*v7 + 144LL))(v7, v9, v8, 0);
    v8 = hScriptScopea;
  }
  this->m_hOnDestroyFunction = v10;
  if ( horizontalScriptFunction == 0
    || (hScriptScopeb = v8,
        v11 = (*(*v7 + 144LL))(v7, horizontalScriptFunction, v8, 0),
        v8 = hScriptScopeb,
        this->m_hHorizontalControlFunction = v11,
        v11 == 0) )
  {
    this->m_hHorizontalControlFunction = 0;
  }
  if ( v5 == 0 || (v12 = (*(*v7 + 144LL))(v7, v5, v8, 0), this->m_hVerticalControlFunction = v12, v12 == 0) )
    this->m_hVerticalControlFunction = 0;
  if ( this->m_hHorizontalControlFunction != 0 )
  {
    p_m_hParent = &this->m_hParent;
    v14 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
    v15 = (*(v14->_vptr_IHandleEntity + 376))(v14);
    if ( !CDOTALocomotor::ApplyHorizontalMotionController(v15, &this->CHorizontalMotionController, 0) )
      goto LABEL_3;
    if ( this->m_hVerticalControlFunction == 0 )
      goto LABEL_18;
  }
  else
  {
    if ( this->m_hVerticalControlFunction == 0 )
    {
LABEL_3:
      if ( (*(&this->CDOTA_Buff + 138) & 4) == 0 )
        CDOTA_Buff::Destroy(this, 0, 0, 0);
      return;
    }
    p_m_hParent = &this->m_hParent;
  }
  v16 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
  v17 = (*(v16->_vptr_IHandleEntity + 376))(v16);
  if ( !CDOTALocomotor::ApplyVerticalMotionController(v17, &this->CVerticalMotionController, 0) )
    goto LABEL_3;
LABEL_18:
  (*(*v7 + 264LL))(v7, &this->m_parameterTable);
  m_pszString = this->m_parameterTable.m_pszString;
  if ( m_pszString != 0 && pKV != 0 )
    Recursive_ConvertKeyValuesToTable(pKV, v7, m_pszString);
  v19 = *(*v7 + 240LL);
  v20 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
  m_hScope = 0;
  if ( v20 != 0 )
    m_hScope = CEntityInstance::GetPublicScriptScope(v20, GetScriptScopeBehavior_t::CREATE_IF_NECESSARY)->m_hScope;
  v22 = this->m_parameterTable.m_pszString;
  v38.m_uint64 = m_hScope;
  v38.m_flags = 0;
  v38.m_type = 31;
  v19(v7, v22, "parent", &v38);
  CVariantBase<CVariantDefaultAllocator>::Free(&v38);
  v23 = *(*v7 + 240LL);
  Caster = CDOTA_Buff::GetCaster(this);
  v25 = 0;
  if ( Caster != 0 )
    v25 = CEntityInstance::GetPublicScriptScope(Caster, GetScriptScopeBehavior_t::CREATE_IF_NECESSARY)->m_hScope;
  v26 = this->m_parameterTable.m_pszString;
  v38.m_uint64 = v25;
  v38.m_flags = 0;
  v38.m_type = 31;
  v23(v7, v26, "caster", &v38);
  CVariantBase<CVariantDefaultAllocator>::Free(&v38);
  v27 = *(*v7 + 240LL);
  v28 = CEntityHandle::operator CEntityInstance *(p_m_hParent);
  v29 = 0;
  if ( v28 != 0 )
    v29 = CEntityInstance::GetPublicScriptScope(v28, GetScriptScopeBehavior_t::CREATE_IF_NECESSARY)->m_hScope;
  v38.m_uint64 = v29;
  v38.m_type = 31;
  v30 = this->m_parameterTable.m_pszString;
  v38.m_flags = 0;
  v27(v7, v30, "target", &v38);
  CVariantBase<CVariantDefaultAllocator>::Free(&v38);
  v31 = *(*v7 + 240LL);
  v32 = CEntityHandle::operator CEntityInstance *(&this->m_hAbility);
  if ( v32 != 0 )
    v32 = CEntityInstance::GetPublicScriptScope(v32, GetScriptScopeBehavior_t::CREATE_IF_NECESSARY)->m_hScope;
  v33 = this->m_parameterTable.m_pszString;
  v38.m_type = 31;
  v38.m_flags = 0;
  v38.m_uint64 = v32;
  v31(v7, v33, "ability", &v38);
  CVariantBase<CVariantDefaultAllocator>::Free(&v38);
}


// CDOTA_Modifier_ScriptedMotionController::UpdateHorizontalMotion  (line 4028, @0x00000000025ded20, libserver.so)
void __fastcall CDOTA_Modifier_ScriptedMotionController::UpdateHorizontalMotion(
        CDOTA_Modifier_ScriptedMotionController *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  __int64 v5; // rax

  if ( this->m_hHorizontalControlFunction != 0 )
  {
    v5 = (*(g_pVScriptGameSystem->_vptr_IVScriptGameSystem + 4))(g_pVScriptGameSystem, me, a3, dt);
    (*(*v5 + 160LL))(v5, this->m_hHorizontalControlFunction, &this->m_parameterTable, 1, 0, 0, 1);
  }
}


// CDOTA_Modifier_ScriptedMotionController::UpdateVerticalMotion  (line 4040, @0x00000000025ded90, libserver.so)
void __fastcall CDOTA_Modifier_ScriptedMotionController::UpdateVerticalMotion(
        CDOTA_Modifier_ScriptedMotionController *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  __int64 v5; // rax

  if ( this->m_hVerticalControlFunction != 0 )
  {
    v5 = (*(g_pVScriptGameSystem->_vptr_IVScriptGameSystem + 4))(g_pVScriptGameSystem, me, a3, dt);
    (*(*v5 + 160LL))(v5, this->m_hVerticalControlFunction, &this->m_parameterTable, 1, 0, 0, 1);
  }
}


// CDOTA_Modifier_ScriptedMotionController::OnHorizontalMotionInterrupted  (line 4052, @0x0000000002615850, libserver.so)  // inlines: Destroy
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_ScriptedMotionController::OnHorizontalMotionInterrupted(
        CDOTA_Modifier_ScriptedMotionController *const this)
{
  if ( this->m_hHorizontalControlFunction != 0 && (*(&this->CDOTA_Buff + 138) & 4) == 0 )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_ScriptedMotionController::OnVerticalMotionInterrupted  (line 4064, @0x0000000002615890, libserver.so)  // inlines: Destroy
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_ScriptedMotionController::OnVerticalMotionInterrupted(
        CDOTA_Modifier_ScriptedMotionController *const this)
{
  if ( this->m_hVerticalControlFunction != 0 && (*(&this->CDOTA_Buff + 138) & 4) == 0 )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_ScriptedMotionController::OnDestroy  (line 4076, @0x00000000025e85f0, libserver.so)  // inlines: Get, GetInstance, GetParent
// calls: CEntityHandle::operator CEntityInstance*, CDOTALocomotor::RemoveHorizontalMotionController, CDOTALocomotor::RemoveVerticalMotionController
void __fastcall CDOTA_Modifier_ScriptedMotionController::OnDestroy(CDOTA_Modifier_ScriptedMotionController *const this)
{
  __int64 v2; // r12
  __int64 v3; // rax
  CEntityInstance *v4; // rax
  CDOTALocomotor *v5; // rax
  CEntityInstance *v6; // rax
  CDOTALocomotor *v7; // rax

  v2 = (*(g_pVScriptGameSystem->_vptr_IVScriptGameSystem + 4))(g_pVScriptGameSystem);
  if ( this->m_hOnDestroyFunction != 0 )
  {
    v3 = (*(g_pVScriptGameSystem->_vptr_IVScriptGameSystem + 4))(g_pVScriptGameSystem);
    (*(*v3 + 160LL))(v3, this->m_hOnDestroyFunction, &this->m_parameterTable, 1, 0, 0, 1);
  }
  (*(*v2 + 344LL))(v2, &this->m_parameterTable);
  if ( this->m_hHorizontalControlFunction != 0 )
  {
    (*(*v2 + 152LL))(v2);
    v4 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
    v5 = (*(v4->_vptr_IHandleEntity + 376))(v4);
    CDOTALocomotor::RemoveHorizontalMotionController(v5, &this->CHorizontalMotionController);
  }
  if ( this->m_hVerticalControlFunction != 0 )
  {
    (*(*v2 + 152LL))(v2);
    v6 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
    v7 = (*(v6->_vptr_IHandleEntity + 376))(v6);
    CDOTALocomotor::RemoveVerticalMotionController(v7, &this->CVerticalMotionController);
  }
  (*(*v2 + 152LL))(v2, this->m_hOnDestroyFunction);
}


// CDOTA_Modifier_TeamShowcase_Global::CheckState  (line 4104, @0x00000000025dee00, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_TeamShowcase_Global::CheckState(
        CDOTA_Modifier_TeamShowcase_Global *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x800120uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFF7FFEDFLL;
}


// CDOTA_Modifier_TeamShowcase_Showcase::DeclareFunctions  (line 4117, @0x00000000025dee20, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_TeamShowcase_Showcase::GetOverrideAnimation(CModifierParams const&)
void __fastcall CDOTA_Modifier_TeamShowcase_Showcase::DeclareFunctions(
        CDOTA_Modifier_TeamShowcase_Showcase *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_TeamShowcase_Showcase::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
}


// CDOTA_Modifier_TeamShowcase_Showcase::GetOverrideAnimation  (line 4122, @0x00000000025dee40, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_TeamShowcase_Showcase::GetOverrideAnimation(
        CDOTA_Modifier_TeamShowcase_Showcase *const this,
        const CModifierParams *const params)
{
  return 0x44C8200000000001uLL;
}


// CDOTA_Modifier_HallOfFame_Glow::OnCreated  (line 4131, @0x00000000025dee60, libserver.so)
void __fastcall CDOTA_Modifier_HallOfFame_Glow::OnCreated(CDOTA_Modifier_HallOfFame_Glow *const this, KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_HallOfFame_Glow::SetGlowingPlayerIDs  (line 4143, @0x00000000026220c0, libserver.so)  // inlines: AddVectorToTail<CUtlMemory<int, int> >, CopyConstruct<int>, EnsureCapacity, RemoveAll, memcpy, operator[]
// calls: CDOTA_Buff::SendBuffRefreshToClients, memcpy
// callers: CDOTA_BaseNPC_HallofFame::SetGlowEnabled
void __fastcall CDOTA_Modifier_HallOfFame_Glow::SetGlowingPlayerIDs(
        CDOTA_Modifier_HallOfFame_Glow *const this,
        const CUtlVector<int,CUtlMemory<int,int> > *const vecGlowingPlayerIDs)
{
  int m_Size; // r13d
  int v5; // eax
  uint32 m_nGrowSize; // edx
  int *v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  int *v10; // rdx
  int *m_pMemory; // r14
  int *v12; // rax

  this->m_vecGlowingPlayerIDs.m_Size = 0;
  m_Size = vecGlowingPlayerIDs->m_Size;
  if ( vecGlowingPlayerIDs->m_Size != 0 )
  {
    v5 = 0;
    if ( m_Size > this->m_vecGlowingPlayerIDs.m_Memory.m_nAllocationCount )
    {
      m_nGrowSize = this->m_vecGlowingPlayerIDs.m_Memory.m_nGrowSize;
      if ( (m_nGrowSize & 0x40000000) == 0 )
      {
        if ( (m_nGrowSize & 0xC0000000) != 0 )
        {
          m_pMemory = this->m_vecGlowingPlayerIDs.m_Memory.m_pMemory;
          v12 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * m_Size);
          this->m_vecGlowingPlayerIDs.m_Memory.m_pMemory = v12;
          if ( m_pMemory != 0 )
            memcpy(v12, m_pMemory, 4LL * this->m_vecGlowingPlayerIDs.m_Memory.m_nAllocationCount);
          this->m_vecGlowingPlayerIDs.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
        }
        else
        {
          v7 = this->m_vecGlowingPlayerIDs.m_Memory.m_pMemory;
          v8 = *g_pMemAlloc;
          if ( v7 != 0 )
            this->m_vecGlowingPlayerIDs.m_Memory.m_pMemory = (*(v8 + 8))(g_pMemAlloc, v7, 4LL * m_Size);
          else
            this->m_vecGlowingPlayerIDs.m_Memory.m_pMemory = (*v8)(g_pMemAlloc, 4LL * m_Size);
        }
        v5 = this->m_vecGlowingPlayerIDs.m_Size;
        this->m_vecGlowingPlayerIDs.m_Memory.m_nAllocationCount = m_Size;
      }
    }
    this->m_vecGlowingPlayerIDs.m_Size = m_Size + v5;
    if ( m_Size > 0 )
    {
      v9 = 0;
      do
      {
        v10 = &this->m_vecGlowingPlayerIDs.m_Memory.m_pMemory[v9 / 4];
        if ( v10 != 0 )
          *v10 = vecGlowingPlayerIDs->m_Memory.m_pMemory[v9 / 4];
        v9 += 4LL;
      }
      while ( v9 != 4LL * (m_Size - 1) + 4 );
    }
  }
  CDOTA_Buff::SendBuffRefreshToClients(this);
}


// CDOTA_Modifier_HallOfFame_Glow::AddCustomTransmiterData  (line 4151, @0x0000000002600990, libserver.so)  // inlines: Append, CUtlString, IsEmpty, assign, length, operator char const*, set_has_player_ids, set_player_ids, ~CUtlString
// calls: CUtlString::Append, V_sprintf_safe<32ul>, CUtlString::Get, strlen, std::string::assign(char const*,ulong), CUtlString::FreeMemoryBlock, __stack_chk_fail, _Unwind_Resume
void __fastcall CDOTA_Modifier_HallOfFame_Glow::AddCustomTransmiterData(
        CDOTA_Modifier_HallOfFame_Glow *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  int m_Size; // eax
  __int64 v4; // r12
  int v5; // ebx
  const char *v6; // rax
  const char *v7; // rbx
  size_t v8; // rax
  __int16 v10[8]; // [rsp+20h] [rbp-80h] BYREF
  CUtlString str; // [rsp+30h] [rbp-70h] BYREF
  char szBuffer[32]; // [rsp+40h] [rbp-60h] BYREF
  unsigned __int64 v13; // [rsp+68h] [rbp-38h]

  v13 = __readfsqword(0x28u);
  m_Size = this->m_vecGlowingPlayerIDs.m_Size;
  str.m_pString = 0;
  if ( m_Size <= 0 )
  {
    v6 = CUtlString::Get(&str);
  }
  else
  {
    v4 = 0;
    v5 = 0;
    while ( 1 )
    {
      V_sprintf_safe<32ul>(szBuffer, "%d", this->m_vecGlowingPlayerIDs.m_Memory.m_pMemory[v4]);
      CUtlString::Append(&str, szBuffer);
      if ( this->m_vecGlowingPlayerIDs.m_Size <= ++v5 )
        break;
      if ( str.m_pString != 0 && *str.m_pString != 0 )
      {
        v10[0] = 44;
        CUtlString::Append(&str, v10);
      }
      ++v4;
    }
    v6 = CUtlString::Get(&str);
  }
  v7 = v6;
  *(entry + 4) |= 0x40000000u;
  v8 = strlen(v6);
  std::string::assign(*(entry + 20), v7, v8);
  if ( str.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&str);
}


