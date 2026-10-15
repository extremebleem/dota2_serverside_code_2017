// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_sand_king.cpp:37
class CDOTA_Unit_Hero_SandKing : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_SandKing(CDOTA_Unit_Hero_SandKing &);
	CDOTA_Unit_Hero_SandKing(CDOTA_Unit_Hero_SandKing &);
	CDOTA_Unit_Hero_SandKing();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDOTA_Unit_Hero_SandKing();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_sand_king.cpp:44
class C_CDOTA_Unit_Hero_SandKing_MapInstall {
	C_CDOTA_Unit_Hero_SandKing_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_sand_king.cpp:57
class CDOTA_OrbSandKing_CausticFinale : public CDOTA_Orb {
public:

private:

	float duration;  // +0x18
	CDOTA_OrbSandKing_CausticFinale(CDOTA_OrbSandKing_CausticFinale &);
	CDOTA_OrbSandKing_CausticFinale(const CDOTA_OrbSandKing_CausticFinale &);
	CDOTA_OrbSandKing_CausticFinale(CDOTA_AttackRecord *, KeyValues *, CDOTA_BaseNPC *, CDOTABaseAbility *);
	virtual void OnOrbImpact(const CModifierParams &);
	virtual ~CDOTA_OrbSandKing_CausticFinale();

	// vtable[8] OnOrbImpact
	// sizeof = 32
};

// src/game/shared/dota/units/dota_unit_hero_sand_king.cpp:92
class CDOTA_Ability_SandKing_CausticFinale : public CDOTABaseAbility {
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
	CDOTA_Ability_SandKing_CausticFinale(CDOTA_Ability_SandKing_CausticFinale &);
	CDOTA_Ability_SandKing_CausticFinale(CDOTA_Ability_SandKing_CausticFinale &);
	CDOTA_Ability_SandKing_CausticFinale();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual bool IsHiddenWhenStolen();
	virtual ~CDOTA_Ability_SandKing_CausticFinale();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[306] IsHiddenWhenStolen
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_sand_king.cpp:108
class CDOTA_Modifier_SandKing_CausticFinale : public CDOTA_Buff {
public:

private:

	float caustic_finale_duration;  // +0xba8
	CDOTA_Modifier_SandKing_CausticFinale();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual int GetOrbPriority(CDOTA_AttackRecord *);
	virtual CDOTA_Orb * GetCustomOrb(CDOTA_AttackRecord *);
	virtual ~CDOTA_Modifier_SandKing_CausticFinale();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[50] GetOrbPriority
	// vtable[49] GetCustomOrb
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_sand_king.cpp:178
class CDOTA_Modifier_SandKing_CausticFinaleOrb : public CDOTA_Buff {
public:

private:

	int caustic_finale_radius;  // +0xba8
	int caustic_finale_damage;  // +0xbac
	float caustic_finale_damage_reduced;  // +0xbb0
	float caustic_finale_slow_duration;  // +0xbb4
	CDOTA_Modifier_SandKing_CausticFinaleOrb();
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual const char * GetEffectName();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_SandKing_CausticFinaleOrb();

	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[67] GetEffectName
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_sand_king.cpp:259
class CDOTA_Modifier_SandKing_CausticFinale_Slow : public CDOTA_Buff {
public:

private:

	int caustic_finale_slow;  // +0xba8
	CDOTA_Modifier_SandKing_CausticFinale_Slow();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_SandKing_CausticFinale_Slow();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_sand_king.cpp:315
class CDOTA_Ability_SandKing_BurrowStrike : public CDOTABaseAbility {
public:

private:

	int burrow_width;  // +0x390
	int burrow_speed;  // +0x394
	int burrow_speed_scepter;  // +0x398
	float burrow_duration;  // +0x39c
	float burrow_anim_time;  // +0x3a0
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
	CDOTA_Ability_SandKing_BurrowStrike(CDOTA_Ability_SandKing_BurrowStrike &);
	CDOTA_Ability_SandKing_BurrowStrike(CDOTA_Ability_SandKing_BurrowStrike &);
	CDOTA_Ability_SandKing_BurrowStrike();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual int GetConceptRecipientType();
	virtual DOTAAbilitySpeakTrigger_t SpeakTrigger();
	virtual bool PlaysDefaultAnimWhenStolen();
	virtual const char * GetStolenActivityModifier();
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_SandKing_BurrowStrike();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[299] GetConceptRecipientType
	// vtable[300] SpeakTrigger
	// vtable[309] PlaysDefaultAnimWhenStolen
	// vtable[310] GetStolenActivityModifier
	// vtable[226] GetCastRange
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// sizeof = 936
};

// src/game/shared/dota/units/dota_unit_hero_sand_king.cpp:344
class C_CDOTA_Ability_SandKing_BurrowStrike_MapInstall {
	C_CDOTA_Ability_SandKing_BurrowStrike_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_sand_king.cpp:481
class CDOTA_Modifier_SandKing_Impale : public CDOTA_Buff, public CVerticalMotionController {
public:

private:

	float m_flStartZ;  // +0xbb4
	float m_flCurTime;  // +0xbb8
	bool m_bDamageApplied;  // +0xbbc
	CDOTA_Modifier_SandKing_Impale();
	virtual void CheckState(CDOTABuffState &);
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	virtual bool IsStunDebuff();
	virtual void UpdateVerticalMotion(CDOTA_BaseNPC *, float);
	virtual void OnVerticalMotionInterrupted();
	virtual bool IsVerticalMotionValidToApply();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	virtual int GetAttributes();
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	void TryToApplyDamage();
	virtual ~CDOTA_Modifier_SandKing_Impale();

	// vtable[5] CheckState
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[16] IsStunDebuff
	// vtable[89] UpdateVerticalMotion
	// vtable[90] OnVerticalMotionInterrupted
	// vtable[91] IsVerticalMotionValidToApply
	// vtable[7] GetAttributes
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_sand_king.cpp:617
class CDOTA_Modifier_Sand_King_BurrowStrike : public CDOTA_Buff {
public:

private:

	bool m_bTeleported;  // +0xbb4
	CDOTA_Modifier_Sand_King_BurrowStrike();
	virtual void CheckState(CDOTABuffState &);
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Sand_King_BurrowStrike();

	// vtable[5] CheckState
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_sand_king.cpp:681
class CDOTA_Ability_SandKing_SandStorm : public CDOTABaseAbility {
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
	CDOTA_Ability_SandKing_SandStorm(CDOTA_Ability_SandKing_SandStorm &);
	CDOTA_Ability_SandKing_SandStorm(CDOTA_Ability_SandKing_SandStorm &);
	CDOTA_Ability_SandKing_SandStorm();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual void OnChannelFinish(bool);
	virtual Activity GetCastAnimation();
	virtual float GetAOERadius();
	virtual bool HasInvisibility();
	virtual ~CDOTA_Ability_SandKing_SandStorm();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[267] OnChannelFinish
	// vtable[234] GetCastAnimation
	// vtable[333] GetAOERadius
	// vtable[326] HasInvisibility
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_sand_king.cpp:696
class C_CDOTA_Ability_SandKing_SandStorm_MapInstall {
	C_CDOTA_Ability_SandKing_SandStorm_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_sand_king.cpp:741
class CDOTA_Modifier_SandKing_SandStorm : public CDOTA_Buff {
public:

private:

	int sand_storm_radius;  // +0xba8
	int m_nSandStormParticleIndex1;  // +0xbac
	CDOTA_Modifier_SandKing_SandStorm();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	virtual void OnDestroy();
	virtual bool IsPurgable();
	ModifierVariant_t Tooltip(const CModifierParams &);
	virtual int GetNumAvoidLocations();
	virtual Vector GetAvoidLocation(int);
	virtual float AvoidStrength(CDOTA_Bot *);
	virtual float GetAvoidRadius(int);
	virtual bool IsAvoidMagical();
	virtual bool IsPersistentAvoidance();
	virtual ~CDOTA_Modifier_SandKing_SandStorm();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// vtable[74] GetNumAvoidLocations
	// vtable[75] GetAvoidLocation
	// vtable[77] AvoidStrength
	// vtable[78] GetAvoidRadius
	// vtable[79] IsAvoidMagical
	// vtable[81] IsPersistentAvoidance
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_sand_king.cpp:898
class CDOTA_Modifier_SandKing_SandStorm_Invis : public CDOTA_Modifier_Invisible {
public:

	CDOTA_Modifier_SandKing_SandStorm_Invis(CDOTA_Modifier_SandKing_SandStorm_Invis &);
	CDOTA_Modifier_SandKing_SandStorm_Invis(const CDOTA_Modifier_SandKing_SandStorm_Invis &);
	CDOTA_Modifier_SandKing_SandStorm_Invis();
	virtual ~CDOTA_Modifier_SandKing_SandStorm_Invis();

	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_sand_king.cpp:913
class CDOTA_Ability_SandKing_Epicenter : public CDOTABaseAbility {
public:

private:

	int m_nFXEpicenterIndex;  // +0x390
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
	CDOTA_Ability_SandKing_Epicenter(CDOTA_Ability_SandKing_Epicenter &);
	CDOTA_Ability_SandKing_Epicenter(CDOTA_Ability_SandKing_Epicenter &);
	CDOTA_Ability_SandKing_Epicenter();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool OnAbilityPhaseStart();
	virtual void OnAbilityPhaseInterrupted();
	virtual void OnChannelFinish(bool);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_SandKing_Epicenter();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[267] OnChannelFinish
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_sand_king.cpp:933
class C_CDOTA_Ability_SandKing_Epicenter_MapInstall {
	C_CDOTA_Ability_SandKing_Epicenter_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_sand_king.cpp:1013
class CDOTA_Modifier_SandKing_Epicenter : public CDOTA_Buff {
public:

private:

	int epicenter_pulses;  // +0xba8
	int epicenter_radius[16];  // +0xbac
	int epicenter_damage;  // +0xbec
	int m_iMaxPulses;  // +0xbf0
	int m_iPulseCount;  // +0xbf4
	CDOTA_Modifier_SandKing_Epicenter();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual bool RemoveOnDeath();
	virtual bool IsPurgable();
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_SandKing_Epicenter();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// vtable[54] RemoveOnDeath
	// vtable[14] IsPurgable
	// vtable[7] GetAttributes
	// sizeof = 3072
};

// src/game/shared/dota/units/dota_unit_hero_sand_king.cpp:1156
class CDOTA_Modifier_SandKing_Epicenter_Slow : public CDOTA_Buff {
public:

private:

	int epicenter_slow;  // +0xba8
	int epicenter_slow_as;  // +0xbac
	CDOTA_Modifier_SandKing_Epicenter_Slow();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual ~CDOTA_Modifier_SandKing_Epicenter_Slow();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_SandKing::~CDOTA_Unit_Hero_SandKing  (line 37, @0x0000000002a18ed0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_SandKing::~CDOTA_Unit_Hero_SandKing(CDOTA_Unit_Hero_SandKing *const this)
{
  this->_vptr_IHandleEntity = &off_4386110;
  this->_vptr_INextBotEventResponder = &off_43870F0;
  this->_vptr_CObstructionObject = &off_4387420;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_SandKing::~CDOTA_Unit_Hero_SandKing  (line 37, @0x0000000002a18f10, libserver.so)  // inlines: ~CDOTA_Unit_Hero_SandKing
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_SandKing::~CDOTA_Unit_Hero_SandKing(CDOTA_Unit_Hero_SandKing *const this)
{
  this->_vptr_IHandleEntity = &off_4386110;
  this->_vptr_INextBotEventResponder = &off_43870F0;
  this->_vptr_CObstructionObject = &off_4387420;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_SandKing::Schema_DynamicBinding  (line 39, @0x0000000002a0c150, libserver.so)
// globals: CDOTA_Unit_Hero_SandKing::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_SandKing::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_SandKing *const this)
{
  return CDOTA_Unit_Hero_SandKing::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_SandKing::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 39, @0x0000000002a0c180, libserver.so)
// globals: CDOTA_Unit_Hero_SandKing::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_SandKing::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_SandKing::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_SandKing::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_SandKing::CEntityInstanceEntityClass::DestructInstance  (line 39, @0x0000000002a0c190, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_SandKing>
void __fastcall CDOTA_Unit_Hero_SandKing::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_SandKing::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_SandKing::CEntityInstanceEntityClass::FreeInstance  (line 39, @0x0000000002a0c1b0, libserver.so)
void __fastcall CDOTA_Unit_Hero_SandKing::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_SandKing::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_SandKing::CEntityInstanceEntityClass::CanAllocate  (line 39, @0x0000000002a0c1d0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_SandKing::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_SandKing::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_SandKing::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 39, @0x0000000002a0c1e0, libserver.so)
// globals: CDOTA_Unit_Hero_SandKing::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_SandKing::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_SandKing::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_SandKing::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_SandKing::CEntityInstanceEntityClass::AllocateInstance  (line 39, @0x0000000002a106c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_SandKing::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_SandKing::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_SandKing::CEntityInstanceEntityClass::ConstructInstance  (line 39, @0x0000000002a13810, libserver.so)  // inlines: CDOTA_Unit_Hero_SandKing, Construct<CDOTA_Unit_Hero_SandKing>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_SandKing::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_SandKing::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_4386110;
    *(p + 236) = &off_43870F0;
    *(p + 257) = &off_4387420;
  }
  return p;
}


// CDOTA_Unit_Hero_SandKing::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002a20610, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_SandKing::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_SandKing::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_SandKing::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002a20b50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_SandKing::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_SandKing::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_SandKing::GetEntityClassInternal  (line 39, @0x0000000002a3b3c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "npc_dota_hero_sand_king", "CDOTA_Unit_Hero_SandKing"
// globals: `guard variable for'CDOTA_Unit_Hero_SandKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SandKingClass, CDOTA_Unit_Hero_SandKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SandKingClass, __dso_handle, CDOTA_Unit_Hero_SandKing::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_SandKing::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SandKingClassInfo, CDOTA_Unit_Hero_SandKing::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SandKingClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_SandKing::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_SandKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SandKingClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_SandKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SandKingClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_SandKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SandKingClass);
    CDOTA_Unit_Hero_SandKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SandKingClass._vptr_CEntityClass = off_4386090;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_SandKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SandKingClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_SandKing::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_SandKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SandKingClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_SandKingClass != 0 )
    return &CDOTA_Unit_Hero_SandKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SandKingClass;
  if ( `guard variable for'CDOTA_Unit_Hero_SandKing::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SandKingClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_SandKing::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SandKingClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_SandKing::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SandKingClassInfo,
      "CDOTA_Unit_Hero_SandKing",
      "npc_dota_hero_sand_king",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_SandKing::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SandKingClassInfo);
  }
  CDOTA_Unit_Hero_SandKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SandKingClass.m_pClassInfo = &CDOTA_Unit_Hero_SandKing::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SandKingClassInfo;
  CDOTA_Unit_Hero_SandKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SandKingClass.m_pBaseClassInfo = CDOTA_Unit_Hero_SandKing::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SandKingClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_SandKingClass = &CDOTA_Unit_Hero_SandKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SandKingClass;
  CDOTA_Unit_Hero_SandKing::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SandKingClassInfo.m_pClass = &CDOTA_Unit_Hero_SandKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SandKingClass;
  CDOTA_Unit_Hero_SandKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SandKingClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_SandKingClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_SandKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SandKingClass;
}


// CDOTA_Unit_Hero_SandKing::YouForgotToImplementOrDeclareServerClass  (line 44, @0x00000000029b6460, libserver.so)
int __fastcall CDOTA_Unit_Hero_SandKing::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_SandKing *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_SandKing::GetServerClass  (line 44, @0x00000000029c9730, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_SandKing::GetServerClass(CDOTA_Unit_Hero_SandKing *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CDOTA_OrbSandKing_CausticFinale::~CDOTA_OrbSandKing_CausticFinale  (line 57, @0x0000000002a0c600, libserver.so)  // inlines: ~CDOTA_Orb
void __fastcall CDOTA_OrbSandKing_CausticFinale::~CDOTA_OrbSandKing_CausticFinale(
        CDOTA_OrbSandKing_CausticFinale *const this)
{
  this->_vptr_CDOTA_Orb = &off_4115E90;
}


// CDOTA_OrbSandKing_CausticFinale::~CDOTA_OrbSandKing_CausticFinale  (line 57, @0x0000000002a0ea80, libserver.so)  // inlines: ~CDOTA_Orb, ~CDOTA_OrbSandKing_CausticFinale
// calls: operator delete
void __fastcall CDOTA_OrbSandKing_CausticFinale::~CDOTA_OrbSandKing_CausticFinale(
        CDOTA_OrbSandKing_CausticFinale *const this)
{
  this->_vptr_CDOTA_Orb = &off_4115E90;
  operator delete(this);
}


// CDOTA_OrbSandKing_CausticFinale::OnOrbImpact  (line 67, @0x0000000002a21820, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTAAbility, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator->
// calls: __stack_chk_fail, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __dynamic_cast, _Unwind_Resume
// strings: "modifier_sand_king_caustic_finale_orb"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_OrbSandKing_CausticFinale::OnOrbImpact(
        CDOTA_OrbSandKing_CausticFinale *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v8; // esi
  CEntityInstance *v9; // rdi
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  float v12; // xmm1_4
  uint32 v13; // eax
  CDOTABaseAbility *v14; // rdx
  CConcreteEntityList *v15; // r14
  CEntityIdentity *v16; // rcx
  CEntityIdentity *v17; // rcx
  uint32 v18; // eax
  CBaseEntity *v19; // rsi
  CEntityIdentity *v20; // rcx
  CEntityIdentity *v21; // rcx
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v23; // [rsp+18h] [rbp-28h]

  v23 = __readfsqword(0x28u);
  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    m_Index_low = LOWORD(params->htarget.m_Index);
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v6 = &v4[m_Index_low & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
      {
        m_pInstance = v6->m_pInstance;
        if ( v6->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          v8 = this->m_hCaster.m_Index;
          v9 = 0;
          if ( v8 + 2 > 1 )
          {
            v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hCaster.m_Index) >> 9) & 0x3F];
            if ( v10 != 0 )
            {
              v11 = &v10[this->m_hCaster.m_Index & 0x1FF];
              if ( v11 != 0 && v8 == v11->m_EHandle.m_Index )
                v9 = v11->m_pInstance;
            }
          }
          if ( m_pInstance->m_iTeamNum.m_Value != HIBYTE(v9[7].m_CScriptComponent) )
          {
            KeyValues::KeyValues(&kv, "modifier_sand_king_caustic_finale_orb");
            KeyValues::SetFloat(&kv, "duration", v12);
            v13 = this->m_hAbility.m_Index;
            v14 = 0;
            v15 = CEntityHandle::gm_pEntityList;
            if ( v13 + 2 > 1 )
            {
              v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAbility.m_Index) >> 9) & 0x3F];
              if ( v16 != 0 )
              {
                v17 = &v16[this->m_hAbility.m_Index & 0x1FF];
                if ( v17 != 0 && v13 == v17->m_EHandle.m_Index && v17->m_pInstance != 0 )
                  v14 = __dynamic_cast(v17->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
              }
            }
            v18 = this->m_hCaster.m_Index;
            v19 = 0;
            if ( v18 + 2 > 1 )
            {
              v20 = v15->m_pIdentityChunks[(LOWORD(this->m_hCaster.m_Index) >> 9) & 0x3F];
              if ( v20 != 0 )
              {
                v21 = &v20[this->m_hCaster.m_Index & 0x1FF];
                if ( v21 != 0 && v18 == v21->m_EHandle.m_Index )
                  v19 = v21->m_pInstance;
              }
            }
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, v19, v14, "modifier_sand_king_caustic_finale_orb", &kv, 0);
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
  }
}


// CDOTA_Ability_SandKing_CausticFinale::~CDOTA_Ability_SandKing_CausticFinale  (line 92, @0x0000000002a18040, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_SandKing_CausticFinale::~CDOTA_Ability_SandKing_CausticFinale(
        CDOTA_Ability_SandKing_CausticFinale *const this)
{
  this->_vptr_IHandleEntity = &off_4387550;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_SandKing_CausticFinale::~CDOTA_Ability_SandKing_CausticFinale  (line 92, @0x0000000002a18060, libserver.so)  // inlines: ~CDOTA_Ability_SandKing_CausticFinale
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_SandKing_CausticFinale::~CDOTA_Ability_SandKing_CausticFinale(
        CDOTA_Ability_SandKing_CausticFinale *const this)
{
  this->_vptr_IHandleEntity = &off_4387550;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_SandKing_CausticFinale::Schema_DynamicBinding  (line 94, @0x0000000002a0c1f0, libserver.so)
// globals: CDOTA_Ability_SandKing_CausticFinale::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_SandKing_CausticFinale::Schema_DynamicBinding(
        const CDOTA_Ability_SandKing_CausticFinale *const this)
{
  return CDOTA_Ability_SandKing_CausticFinale::s_pSchemaBinding;
}


// CDOTA_Ability_SandKing_CausticFinale::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 94, @0x0000000002a0c200, libserver.so)
// globals: CDOTA_Ability_SandKing_CausticFinale::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_SandKing_CausticFinale::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_SandKing_CausticFinale::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_SandKing_CausticFinale::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_SandKing_CausticFinale::CEntityInstanceEntityClass::DestructInstance  (line 94, @0x0000000002a0c210, libserver.so)  // inlines: Destruct<CDOTA_Ability_SandKing_CausticFinale>
void __fastcall CDOTA_Ability_SandKing_CausticFinale::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_SandKing_CausticFinale::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_SandKing_CausticFinale::CEntityInstanceEntityClass::FreeInstance  (line 94, @0x0000000002a0c230, libserver.so)
void __fastcall CDOTA_Ability_SandKing_CausticFinale::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_SandKing_CausticFinale::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_SandKing_CausticFinale::CEntityInstanceEntityClass::CanAllocate  (line 94, @0x0000000002a0c250, libserver.so)
bool __fastcall CDOTA_Ability_SandKing_CausticFinale::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_SandKing_CausticFinale::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_SandKing_CausticFinale::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 94, @0x0000000002a0c260, libserver.so)
// globals: CDOTA_Ability_SandKing_CausticFinale::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_SandKing_CausticFinale::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_SandKing_CausticFinale::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_SandKing_CausticFinale::s_pSchemaBinding;
}


// CDOTA_Ability_SandKing_CausticFinale::CEntityInstanceEntityClass::AllocateInstance  (line 94, @0x0000000002a10700, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_SandKing_CausticFinale::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_SandKing_CausticFinale::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_SandKing_CausticFinale::CEntityInstanceEntityClass::ConstructInstance  (line 94, @0x0000000002a14940, libserver.so)  // inlines: CDOTA_Ability_SandKing_CausticFinale, Construct<CDOTA_Ability_SandKing_CausticFinale>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_SandKing_CausticFinale::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_SandKing_CausticFinale::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4387550;
  }
  return p;
}


// CDOTA_Ability_SandKing_CausticFinale::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 94, @0x0000000002a20490, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_SandKing_CausticFinale::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_SandKing_CausticFinale::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_SandKing_CausticFinale::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 94, @0x0000000002a204b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_SandKing_CausticFinale::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_SandKing_CausticFinale::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_SandKing_CausticFinale::GetEntityClassInternal  (line 94, @0x0000000002a3ad30, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "sandking_caustic_finale", "CDOTA_Ability_SandKing_CausticFinale"
// globals: `guard variable for'CDOTA_Ability_SandKing_CausticFinale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_CausticFinaleClass, CDOTA_Ability_SandKing_CausticFinale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_CausticFinaleClass, __dso_handle, CDOTA_Ability_SandKing_CausticFinale::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_SandKing_CausticFinale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_CausticFinaleClassInfo, CDOTA_Ability_SandKing_CausticFinale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_CausticFinaleClassInfo
CEntityClass *__cdecl CDOTA_Ability_SandKing_CausticFinale::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_SandKing_CausticFinale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_CausticFinaleClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_SandKing_CausticFinale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_CausticFinaleClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_SandKing_CausticFinale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_CausticFinaleClass);
    CDOTA_Ability_SandKing_CausticFinale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_CausticFinaleClass._vptr_CEntityClass = off_43874D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_SandKing_CausticFinale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_CausticFinaleClass);
    __cxa_atexit(
      CDOTA_Ability_SandKing_CausticFinale::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_SandKing_CausticFinale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_CausticFinaleClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_SandKing_CausticFinaleClass != 0 )
    return &CDOTA_Ability_SandKing_CausticFinale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_CausticFinaleClass;
  if ( `guard variable for'CDOTA_Ability_SandKing_CausticFinale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_CausticFinaleClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_SandKing_CausticFinale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_CausticFinaleClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_SandKing_CausticFinale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_CausticFinaleClassInfo,
      "CDOTA_Ability_SandKing_CausticFinale",
      "sandking_caustic_finale",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_SandKing_CausticFinale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_CausticFinaleClassInfo);
  }
  CDOTA_Ability_SandKing_CausticFinale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_CausticFinaleClass.m_pClassInfo = &CDOTA_Ability_SandKing_CausticFinale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_CausticFinaleClassInfo;
  CDOTA_Ability_SandKing_CausticFinale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_CausticFinaleClass.m_pBaseClassInfo = CDOTA_Ability_SandKing_CausticFinale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_CausticFinaleClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_SandKing_CausticFinaleClass = &CDOTA_Ability_SandKing_CausticFinale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_CausticFinaleClass;
  CDOTA_Ability_SandKing_CausticFinale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_CausticFinaleClassInfo.m_pClass = &CDOTA_Ability_SandKing_CausticFinale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_CausticFinaleClass;
  CDOTA_Ability_SandKing_CausticFinale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_CausticFinaleClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_SandKing_CausticFinaleClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_SandKing_CausticFinale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_CausticFinaleClass;
}


// CDOTA_Ability_SandKing_CausticFinale::GetIntrinsicModifierName  (line 97, @0x0000000002a0c270, libserver.so)
// strings: "modifier_sand_king_caustic_finale"
const char *__fastcall CDOTA_Ability_SandKing_CausticFinale::GetIntrinsicModifierName(
        CDOTA_Ability_SandKing_CausticFinale *const this)
{
  return "modifier_sand_king_caustic_finale";
}


// CDOTA_Ability_SandKing_CausticFinale::IsHiddenWhenStolen  (line 98, @0x0000000002a0c280, libserver.so)
bool __fastcall CDOTA_Ability_SandKing_CausticFinale::IsHiddenWhenStolen(
        CDOTA_Ability_SandKing_CausticFinale *const this)
{
  return 1;
}


// CDOTA_Modifier_SandKing_CausticFinale::~CDOTA_Modifier_SandKing_CausticFinale  (line 108, @0x0000000002a10b60, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_SandKing_CausticFinale::~CDOTA_Modifier_SandKing_CausticFinale(
        CDOTA_Modifier_SandKing_CausticFinale *const this)
{
  this->_vptr_CDOTA_Buff = &off_4388010;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_SandKing_CausticFinale::~CDOTA_Modifier_SandKing_CausticFinale  (line 108, @0x0000000002a10b80, libserver.so)  // inlines: ~CDOTA_Modifier_SandKing_CausticFinale
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_SandKing_CausticFinale::~CDOTA_Modifier_SandKing_CausticFinale(
        CDOTA_Modifier_SandKing_CausticFinale *const this)
{
  this->_vptr_CDOTA_Buff = &off_4388010;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_SandKing_CausticFinale::IsHidden  (line 113, @0x0000000002a0c290, libserver.so)
bool __fastcall CDOTA_Modifier_SandKing_CausticFinale::IsHidden(CDOTA_Modifier_SandKing_CausticFinale *const this)
{
  return 1;
}


// CDOTA_Modifier_SandKing_CausticFinale::GetOrbPriority  (line 116, @0x0000000002a0c2a0, libserver.so)
int __fastcall CDOTA_Modifier_SandKing_CausticFinale::GetOrbPriority(
        CDOTA_Modifier_SandKing_CausticFinale *const this,
        CDOTA_AttackRecord *pRecord)
{
  return 3;
}


// CDOTA_Modifier_SandKing_CausticFinale::OnCreated  (line 128, @0x00000000029e0160, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "caustic_finale_duration"
void __fastcall CDOTA_Modifier_SandKing_CausticFinale::OnCreated(
        CDOTA_Modifier_SandKing_CausticFinale *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->caustic_finale_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                      Ability,
                                      "caustic_finale_duration",
                                      -1,
                                      0);
  else
    this->caustic_finale_duration = 0.0;
}


// CDOTA_Modifier_SandKing_CausticFinale::GetCustomOrb  (line 135, @0x00000000029c53c0, libserver.so)  // inlines: CDOTA_OrbSandKing_CausticFinale, DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, ~CDOTA_Orb
// calls: KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, KeyValues::~KeyValues, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName, operator new, CDOTA_Orb::CDOTA_Orb, KeyValues::GetFloat, __stack_chk_fail, _Unwind_Resume, operator delete
// strings: "modifier_sandking_caustic_finale_orb", "modifier_sand_king_caustic_finale_orb"
// globals: CEntityHandle::gm_pEntityList
CDOTA_Orb *__fastcall CDOTA_Modifier_SandKing_CausticFinale::GetCustomOrb(
        CDOTA_Modifier_SandKing_CausticFinale *const this,
        CDOTA_AttackRecord *pRecord)
{
  float v4; // xmm1_4
  bool v5; // r14
  CDOTA_Orb *v6; // rbx
  uint32 m_Index; // edx
  CEntityIdentity *v9; // rax
  CEntityIdentity *v10; // rax
  CEntityInstance *m_pInstance; // r14
  int m_Id; // eax
  CDOTA_BaseNPC *Caster; // r14
  CDOTABaseAbility *Ability; // r15
  float v15; // xmm1_4
  KeyValues kv; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_sandking_caustic_finale_orb");
  KeyValues::SetFloat(&kv, "duration", v4);
  v5 = g_pGameRules != 0 && *&g_pGameRules[6].m_szQuestName[68] == 18;
  if ( (!CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value || v5)
    && (m_Index = pRecord->m_hTarget.m_Index) + 2 > 1
    && (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pRecord->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v10 = &v9[pRecord->m_hTarget.m_Index & 0x1FF]) != 0
    && m_Index == v10->m_EHandle.m_Index
    && (m_pInstance = v10->m_pInstance, v10->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
    && ((m_Id = m_pInstance[43].m_iszPrivateVScripts.u.m_Id) & 0x10) == 0
    && (m_Id & 0x193) != 0
    && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) == 0
    && !CDOTA_Buff::GetCaster(this)->m_bIsIllusion.m_Value
    && (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x10000000) == 0
    && CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_sand_king_caustic_finale_orb", 0) == 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    Ability = CDOTA_Buff::GetAbility(this);
    v6 = operator new(0x20u);
    CDOTA_Orb::CDOTA_Orb(v6, pRecord, &kv, Caster, Ability);
    v6->_vptr_CDOTA_Orb = &off_4387470;
    *&v6[1]._vptr_CDOTA_Orb = KeyValues::GetFloat(&kv, "duration", v15);
  }
  else
  {
    v6 = 0;
  }
  KeyValues::~KeyValues(&kv);
  return v6;
}


// CDOTA_Modifier_SandKing_CausticFinaleOrb::~CDOTA_Modifier_SandKing_CausticFinaleOrb  (line 178, @0x0000000002a10b10, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_SandKing_CausticFinaleOrb::~CDOTA_Modifier_SandKing_CausticFinaleOrb(
        CDOTA_Modifier_SandKing_CausticFinaleOrb *const this)
{
  this->_vptr_CDOTA_Buff = &off_4388330;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_SandKing_CausticFinaleOrb::~CDOTA_Modifier_SandKing_CausticFinaleOrb  (line 178, @0x0000000002a10b30, libserver.so)  // inlines: ~CDOTA_Modifier_SandKing_CausticFinaleOrb
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_SandKing_CausticFinaleOrb::~CDOTA_Modifier_SandKing_CausticFinaleOrb(
        CDOTA_Modifier_SandKing_CausticFinaleOrb *const this)
{
  this->_vptr_CDOTA_Buff = &off_4388330;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_SandKing_CausticFinaleOrb::IsDebuff  (line 183, @0x0000000002a0c2b0, libserver.so)
bool __fastcall CDOTA_Modifier_SandKing_CausticFinaleOrb::IsDebuff(
        CDOTA_Modifier_SandKing_CausticFinaleOrb *const this)
{
  return 1;
}


// CDOTA_Modifier_SandKing_CausticFinaleOrb::IsPurgable  (line 184, @0x0000000002a0c2c0, libserver.so)
bool __fastcall CDOTA_Modifier_SandKing_CausticFinaleOrb::IsPurgable(
        CDOTA_Modifier_SandKing_CausticFinaleOrb *const this)
{
  return 0;
}


// CDOTA_Modifier_SandKing_CausticFinaleOrb::GetEffectName  (line 186, @0x0000000002a0c2d0, libserver.so)
// strings: "particles/items2_fx/orb_of_venom.vpcf"
const char *__fastcall CDOTA_Modifier_SandKing_CausticFinaleOrb::GetEffectName(
        CDOTA_Modifier_SandKing_CausticFinaleOrb *const this)
{
  return "particles/items2_fx/orb_of_venom.vpcf";
}


// CDOTA_Modifier_SandKing_CausticFinaleOrb::OnCreated  (line 202, @0x00000000029faaf0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "caustic_finale_radius", "caustic_finale_damage", "caustic_finale_damage_reduced", "caustic_finale_slow_duration", "particles/units/heroes/hero_sandking/sandking_caustic_finale_debuff.vpcf"
void __fastcall CDOTA_Modifier_SandKing_CausticFinaleOrb::OnCreated(
        CDOTA_Modifier_SandKing_CausticFinaleOrb *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTA_BaseNPC *Parent; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v9; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->caustic_finale_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                    Ability,
                                    "caustic_finale_radius",
                                    -1,
                                    0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->caustic_finale_radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->caustic_finale_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "caustic_finale_damage", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_9:
      this->caustic_finale_damage_reduced = 0.0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
LABEL_10:
      this->caustic_finale_slow_duration = 0.0;
      goto LABEL_6;
    }
  }
  this->caustic_finale_damage = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_9;
LABEL_4:
  this->caustic_finale_damage_reduced = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                          v5,
                                          "caustic_finale_damage_reduced",
                                          -1,
                                          0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_10;
LABEL_5:
  this->caustic_finale_slow_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                         v6,
                                         "caustic_finale_slow_duration",
                                         -1,
                                         0);
LABEL_6:
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_sandking/sandking_caustic_finale_debuff.vpcf",
                      0,
                      Parent,
                      0,
                      0);
  v9 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v9, Parent);
}


// CDOTA_Modifier_SandKing_CausticFinaleOrb::OnDestroy  (line 216, @0x00000000029da9d0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, SpeakConcept, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, ApplyDamage (21 total)
// strings: "particles/units/heroes/hero_sandking/sandking_caustic_finale_explode.vpcf", "modifier_sand_king_caustic_finale_slow", "Ability.SandKing_CausticFinale", "causticfinale"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_SandKing_CausticFinaleOrb::OnDestroy(
        CDOTA_Modifier_SandKing_CausticFinaleOrb *const this)
{
  __m128i v2; // xmm4
  float v3; // r14d
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v8; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v10; // rax
  __int64 v11; // rbx
  CHandle<CBaseEntity> *v12; // rdx
  uint32 m_Index; // eax
  __int16 v14; // cx
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  float v18; // xmm1_4
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  CDOTABaseAbility *v22; // r15
  CDOTA_BaseNPC *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  float v25; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  float flDamage; // [rsp+2Ch] [rbp-B4h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-B0h] BYREF
  CResponseCriteriaSet criteria; // [rsp+50h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+90h] [rbp-50h] BYREF
  unsigned __int64 v31; // [rsp+A8h] [rbp-38h]

  v31 = __readfsqword(0x28u);
  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    *v2.m128i_i32 = this->caustic_finale_radius;
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
    Parent = CDOTA_Buff::GetParent(this);
    v5 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
    Caster = CDOTA_Buff::GetCaster(this);
    FindUnitsInRadius(Caster->m_iTeamNum.m_Value, AbsOrigin, Parent, v3, &entities, 2, 19, 0, 0, 0);
    v8 = CDOTA_Buff::GetParent(this);
    ParticleManager = GetParticleManager();
    LODWORD(v8) = CDOTA_ParticleManager::CreateParticle(
                    ParticleManager,
                    "particles/units/heroes/hero_sandking/sandking_caustic_finale_explode.vpcf",
                    0,
                    v8,
                    0,
                    0);
    v10 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v10, v8);
    if ( entities.m_Size > 0 )
    {
      v11 = 0;
      do
      {
        while ( 1 )
        {
          v12 = &entities.m_Memory.m_pMemory[v11];
          m_Index = v12->m_Index;
          if ( v12->m_Index + 2 > 1 )
          {
            v14 = v12->m_Index;
            v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v12->m_Index) >> 9) & 0x3F];
            if ( v15 != 0 )
            {
              v16 = &v15[v14 & 0x1FF];
              if ( v16 != 0 && m_Index == v16->m_EHandle.m_Index )
              {
                m_pInstance = v16->m_pInstance;
                if ( v16->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && !m_pInstance->m_bIsIllusion.m_Value )
                  break;
              }
            }
          }
          if ( entities.m_Size <= ++v11 )
            goto LABEL_15;
        }
        KeyValues::KeyValues(&kv, "modifier_sand_king_caustic_finale_slow");
        KeyValues::SetFloat(&kv, "duration", v18);
        Ability = CDOTA_Buff::GetAbility(this);
        v20 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(m_pInstance, v20, Ability, "modifier_sand_king_caustic_finale_slow", &kv, 0);
        v21 = CDOTA_Buff::GetParent(this);
        if ( (*(v21->_vptr_IHandleEntity + 408))(v21) != 0 )
          flDamage = (this->caustic_finale_damage_reduced / 100.0) * this->caustic_finale_damage;
        else
          flDamage = this->caustic_finale_damage;
        v22 = CDOTA_Buff::GetAbility(this);
        v23 = CDOTA_Buff::GetCaster(this);
        ApplyDamage(v23, m_pInstance, v22, flDamage, 2, 0);
        KeyValues::~KeyValues(&kv);
        ++v11;
      }
      while ( entities.m_Size > v11 );
    }
LABEL_15:
    v24 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v24, "Ability.SandKing_CausticFinale", 0.0, 0, 0);
    CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
    CResponseCriteriaSet::AppendCriteria(&criteria, "causticfinale", 1.0, v25);
    m_pSpeech = CDOTA_Buff::GetCaster(this)->m_Speech.m_pSpeech;
    if ( m_pSpeech != 0 )
      CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 0, 0, 0, 0, 0);
    CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
}


// CDOTA_Modifier_SandKing_CausticFinale_Slow::~CDOTA_Modifier_SandKing_CausticFinale_Slow  (line 259, @0x0000000002a10ac0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_SandKing_CausticFinale_Slow::~CDOTA_Modifier_SandKing_CausticFinale_Slow(
        CDOTA_Modifier_SandKing_CausticFinale_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_4388650;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_SandKing_CausticFinale_Slow::~CDOTA_Modifier_SandKing_CausticFinale_Slow  (line 259, @0x0000000002a10ae0, libserver.so)  // inlines: ~CDOTA_Modifier_SandKing_CausticFinale_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_SandKing_CausticFinale_Slow::~CDOTA_Modifier_SandKing_CausticFinale_Slow(
        CDOTA_Modifier_SandKing_CausticFinale_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_4388650;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_SandKing_CausticFinale_Slow::IsDebuff  (line 264, @0x0000000002a0c2e0, libserver.so)
bool __fastcall CDOTA_Modifier_SandKing_CausticFinale_Slow::IsDebuff(
        CDOTA_Modifier_SandKing_CausticFinale_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_SandKing_CausticFinale_Slow::OnCreated  (line 281, @0x00000000029f70a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "caustic_finale_slow"
void __fastcall CDOTA_Modifier_SandKing_CausticFinale_Slow::OnCreated(
        CDOTA_Modifier_SandKing_CausticFinale_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->caustic_finale_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "caustic_finale_slow", -1, 0);
  else
    this->caustic_finale_slow = 0;
}


// CDOTA_Modifier_SandKing_CausticFinale_Slow::OnRefresh  (line 288, @0x00000000029f73a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "caustic_finale_slow"
void __fastcall CDOTA_Modifier_SandKing_CausticFinale_Slow::OnRefresh(
        CDOTA_Modifier_SandKing_CausticFinale_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->caustic_finale_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "caustic_finale_slow", -1, 0);
  else
    this->caustic_finale_slow = 0;
}


// CDOTA_Modifier_SandKing_CausticFinale_Slow::DeclareFunctions  (line 294, @0x00000000029b6470, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_SandKing_CausticFinale_Slow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_SandKing_CausticFinale_Slow::DeclareFunctions(
        CDOTA_Modifier_SandKing_CausticFinale_Slow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_SandKing_CausticFinale_Slow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_SandKing_CausticFinale_Slow::GetModifierMoveSpeedBonus_Percentage  (line 301, @0x00000000029b6490, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_SandKing_CausticFinale_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_SandKing_CausticFinale_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->caustic_finale_slow;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_SandKing_BurrowStrike::~CDOTA_Ability_SandKing_BurrowStrike  (line 315, @0x0000000002a18090, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_SandKing_BurrowStrike::~CDOTA_Ability_SandKing_BurrowStrike(
        CDOTA_Ability_SandKing_BurrowStrike *const this)
{
  this->_vptr_IHandleEntity = &off_43889B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_SandKing_BurrowStrike::~CDOTA_Ability_SandKing_BurrowStrike  (line 315, @0x0000000002a180b0, libserver.so)  // inlines: ~CDOTA_Ability_SandKing_BurrowStrike
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_SandKing_BurrowStrike::~CDOTA_Ability_SandKing_BurrowStrike(
        CDOTA_Ability_SandKing_BurrowStrike *const this)
{
  this->_vptr_IHandleEntity = &off_43889B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_SandKing_BurrowStrike::Schema_DynamicBinding  (line 317, @0x0000000002a0c2f0, libserver.so)
// globals: CDOTA_Ability_SandKing_BurrowStrike::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_SandKing_BurrowStrike::Schema_DynamicBinding(
        const CDOTA_Ability_SandKing_BurrowStrike *const this)
{
  return CDOTA_Ability_SandKing_BurrowStrike::s_pSchemaBinding;
}


// CDOTA_Ability_SandKing_BurrowStrike::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 317, @0x0000000002a0c300, libserver.so)
// globals: CDOTA_Ability_SandKing_BurrowStrike::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_SandKing_BurrowStrike::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_SandKing_BurrowStrike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_SandKing_BurrowStrike::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_SandKing_BurrowStrike::CEntityInstanceEntityClass::DestructInstance  (line 317, @0x0000000002a0c310, libserver.so)  // inlines: Destruct<CDOTA_Ability_SandKing_BurrowStrike>
void __fastcall CDOTA_Ability_SandKing_BurrowStrike::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_SandKing_BurrowStrike::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_SandKing_BurrowStrike::CEntityInstanceEntityClass::FreeInstance  (line 317, @0x0000000002a0c330, libserver.so)
void __fastcall CDOTA_Ability_SandKing_BurrowStrike::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_SandKing_BurrowStrike::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_SandKing_BurrowStrike::CEntityInstanceEntityClass::CanAllocate  (line 317, @0x0000000002a0c350, libserver.so)
bool __fastcall CDOTA_Ability_SandKing_BurrowStrike::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_SandKing_BurrowStrike::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_SandKing_BurrowStrike::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 317, @0x0000000002a0c360, libserver.so)
// globals: CDOTA_Ability_SandKing_BurrowStrike::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_SandKing_BurrowStrike::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_SandKing_BurrowStrike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_SandKing_BurrowStrike::s_pSchemaBinding;
}


// CDOTA_Ability_SandKing_BurrowStrike::CEntityInstanceEntityClass::AllocateInstance  (line 317, @0x0000000002a10740, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_SandKing_BurrowStrike::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_SandKing_BurrowStrike::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 936);
  memset(v1, 0, 0x3A8u);
  return v1;
}


// CDOTA_Ability_SandKing_BurrowStrike::CEntityInstanceEntityClass::ConstructInstance  (line 317, @0x0000000002a14970, libserver.so)  // inlines: CDOTA_Ability_SandKing_BurrowStrike, Construct<CDOTA_Ability_SandKing_BurrowStrike>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_SandKing_BurrowStrike::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_SandKing_BurrowStrike::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43889B0;
  }
  return p;
}


// CDOTA_Ability_SandKing_BurrowStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 317, @0x0000000002a204e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_SandKing_BurrowStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_SandKing_BurrowStrike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_SandKing_BurrowStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 317, @0x0000000002a20500, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_SandKing_BurrowStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_SandKing_BurrowStrike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_SandKing_BurrowStrike::GetEntityClassInternal  (line 317, @0x0000000002a3ae80, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "sandking_burrowstrike", "CDOTA_Ability_SandKing_BurrowStrike"
// globals: `guard variable for'CDOTA_Ability_SandKing_BurrowStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_BurrowStrikeClass, CDOTA_Ability_SandKing_BurrowStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_BurrowStrikeClass, __dso_handle, CDOTA_Ability_SandKing_BurrowStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_SandKing_BurrowStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_BurrowStrikeClassInfo, CDOTA_Ability_SandKing_BurrowStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_BurrowStrikeClassInfo
CEntityClass *__cdecl CDOTA_Ability_SandKing_BurrowStrike::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_SandKing_BurrowStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_BurrowStrikeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_SandKing_BurrowStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_BurrowStrikeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_SandKing_BurrowStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_BurrowStrikeClass);
    CDOTA_Ability_SandKing_BurrowStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_BurrowStrikeClass._vptr_CEntityClass = off_4388930;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_SandKing_BurrowStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_BurrowStrikeClass);
    __cxa_atexit(
      CDOTA_Ability_SandKing_BurrowStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_SandKing_BurrowStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_BurrowStrikeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_SandKing_BurrowStrikeClass != 0 )
    return &CDOTA_Ability_SandKing_BurrowStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_BurrowStrikeClass;
  if ( `guard variable for'CDOTA_Ability_SandKing_BurrowStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_BurrowStrikeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_SandKing_BurrowStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_BurrowStrikeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_SandKing_BurrowStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_BurrowStrikeClassInfo,
      "CDOTA_Ability_SandKing_BurrowStrike",
      "sandking_burrowstrike",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_SandKing_BurrowStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_BurrowStrikeClassInfo);
  }
  CDOTA_Ability_SandKing_BurrowStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_BurrowStrikeClass.m_pClassInfo = &CDOTA_Ability_SandKing_BurrowStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_BurrowStrikeClassInfo;
  CDOTA_Ability_SandKing_BurrowStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_BurrowStrikeClass.m_pBaseClassInfo = CDOTA_Ability_SandKing_BurrowStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_BurrowStrikeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_SandKing_BurrowStrikeClass = &CDOTA_Ability_SandKing_BurrowStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_BurrowStrikeClass;
  CDOTA_Ability_SandKing_BurrowStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_BurrowStrikeClassInfo.m_pClass = &CDOTA_Ability_SandKing_BurrowStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_BurrowStrikeClass;
  CDOTA_Ability_SandKing_BurrowStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_BurrowStrikeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_SandKing_BurrowStrikeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_SandKing_BurrowStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_BurrowStrikeClass;
}


// CDOTA_Ability_SandKing_BurrowStrike::GetConceptRecipientType  (line 324, @0x0000000002a0c370, libserver.so)
int __fastcall CDOTA_Ability_SandKing_BurrowStrike::GetConceptRecipientType(
        CDOTA_Ability_SandKing_BurrowStrike *const this)
{
  return 4;
}


// CDOTA_Ability_SandKing_BurrowStrike::SpeakTrigger  (line 325, @0x0000000002a0c380, libserver.so)
DOTAAbilitySpeakTrigger_t __fastcall CDOTA_Ability_SandKing_BurrowStrike::SpeakTrigger(
        CDOTA_Ability_SandKing_BurrowStrike *const this)
{
  return DOTAAbilitySpeakTrigger_t::DOTA_ABILITY_SPEAK_START_ACTION_PHASE;
}


// CDOTA_Ability_SandKing_BurrowStrike::PlaysDefaultAnimWhenStolen  (line 327, @0x0000000002a0c390, libserver.so)
bool __fastcall CDOTA_Ability_SandKing_BurrowStrike::PlaysDefaultAnimWhenStolen(
        CDOTA_Ability_SandKing_BurrowStrike *const this)
{
  return 0;
}


// CDOTA_Ability_SandKing_BurrowStrike::GetStolenActivityModifier  (line 328, @0x0000000002a0c3a0, libserver.so)
const char *__fastcall CDOTA_Ability_SandKing_BurrowStrike::GetStolenActivityModifier(
        CDOTA_Ability_SandKing_BurrowStrike *const this)
{
  return "burrow";
}


// CDOTA_Ability_SandKing_BurrowStrike::GetAssociatedSecondaryAbilities  (line 331, @0x0000000002a0c3b0, libserver.so)
// strings: "sandking_caustic_finale"
const char *__fastcall CDOTA_Ability_SandKing_BurrowStrike::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_SandKing_BurrowStrike *const this)
{
  return "sandking_caustic_finale";
}


// CDOTA_Ability_SandKing_BurrowStrike::YouForgotToImplementOrDeclareServerClass  (line 344, @0x00000000029b64b0, libserver.so)
int __fastcall CDOTA_Ability_SandKing_BurrowStrike::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_SandKing_BurrowStrike *const this)
{
  return 0;
}


// CDOTA_Ability_SandKing_BurrowStrike::GetServerClass  (line 344, @0x00000000029c9530, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_SandKing_BurrowStrike::GetServerClass(
        CDOTA_Ability_SandKing_BurrowStrike *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CDOTA_Ability_SandKing_BurrowStrike::GetCastRange  (line 353, @0x00000000029e7170, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCastRange, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "cast_range_scepter"
int __fastcall CDOTA_Ability_SandKing_BurrowStrike::GetCastRange(
        CDOTA_Ability_SandKing_BurrowStrike *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "cast_range_scepter", -1, 0);
  else
    return CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
}


// CDOTA_Ability_SandKing_BurrowStrike::OnSpellStart  (line 359, @0x00000000029ee030, libserver.so)  // inlines: CEntityHandle, CHandle, FastSqrt, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, Length, NormalizeInPlace, Set, VectorAdd, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-, operator=, sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCursorTarget, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCaster, VectorNormalize, CDOTA_BaseNPC::HasScepter, CDOTA_ProjectileManager::CreateLinearProjectile, CDOTABaseAbility::CreateAbilityParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleFoWProperties (26 total)
// strings: "burrow_width", "burrow_speed", "burrow_speed_scepter", "burrow_duration", "burrow_anim_time", "particles/units/heroes/hero_sandking/sandking_burrowstrike.vpcf" (8 total)
void __fastcall CDOTA_Ability_SandKing_BurrowStrike::OnSpellStart(CDOTA_Ability_SandKing_BurrowStrike *const this)
{
  CBaseEntity *CursorTarget; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *Caster; // rax
  const Vector *v5; // rax
  vec_t v6; // xmm0_4
  vec_t v7; // xmm1_4
  float v8; // xmm0_4
  CDOTA_BaseNPC *v9; // rax
  bool HasScepter; // al
  int burrow_speed_scepter; // r14d
  vec_t v12; // xmm1_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v14; // rax
  const Vector *v15; // rax
  vec_t v16; // xmm0_4
  CDOTA_BaseNPC *v17; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v19; // eax
  __int16 v20; // cx
  int AbilityParticleEffect; // r12d
  CDOTA_BaseNPC *v22; // rax
  const Vector *v23; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  CDOTA_BaseNPC *v29; // rax
  CDOTA_BaseNPC *v30; // rax
  float v31; // xmm1_4
  float v32; // xmm1_4
  float v33; // xmm1_4
  float v34; // xmm1_4
  float v35; // xmm1_4
  CDOTA_BaseNPC *v36; // r13
  CDOTA_BaseNPC *v37; // rax
  CDOTA_BaseNPC *v38; // rax
  const QAngle *AbsAngles; // rax
  int v40; // eax
  CDOTA_BaseNPC *v41; // rax
  const Vector *v42; // rax
  float flFoWRadius; // [rsp+Ch] [rbp-104h]
  float fLength; // [rsp+10h] [rbp-100h]
  float fLengtha; // [rsp+10h] [rbp-100h]
  float v46; // [rsp+14h] [rbp-FCh]
  float y; // [rsp+18h] [rbp-F8h]
  float v48; // [rsp+18h] [rbp-F8h]
  float x; // [rsp+1Ch] [rbp-F4h]
  float v50; // [rsp+1Ch] [rbp-F4h]
  Vector vDirection; // [rsp+30h] [rbp-E0h] BYREF
  QAngle angles; // [rsp+40h] [rbp-D0h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+50h] [rbp-C0h] BYREF
  KeyValues kv; // [rsp+D0h] [rbp-40h] BYREF
  unsigned __int64 v55; // [rsp+E8h] [rbp-28h]
  Vector CursorPosition; // 0:kr00_12.12

  v55 = __readfsqword(0x28u);
  this->burrow_width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "burrow_width", -1, 0);
  this->burrow_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "burrow_speed", -1, 0);
  this->burrow_speed_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "burrow_speed_scepter", -1, 0);
  this->burrow_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "burrow_duration", -1, 0);
  this->burrow_anim_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "burrow_anim_time", -1, 0);
  if ( CDOTABaseAbility::GetCursorTarget(this) != 0 )
  {
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(CursorTarget);
    x = AbsOrigin->x;
    y = AbsOrigin->y;
    fLength = AbsOrigin->z;
  }
  else
  {
    CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
    fLength = CursorPosition.z;
    x = CursorPosition.x;
    y = CursorPosition.y;
  }
  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = CBaseEntity::GetAbsOrigin(Caster);
  v6 = x - v5->x;
  v7 = y - v5->y;
  vDirection.z = 0.0;
  vDirection.x = v6;
  vDirection.y = v7;
  v46 = fsqrt(((v6 * v6) + (v7 * v7)) + 0.0);
  if ( v46 < 0.0099999998 )
  {
    v38 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v38);
    AngleVectors(AbsAngles, &vDirection, 0, 0);
  }
  v8 = VectorNormalize(&vDirection);
  if ( v46 > (*(this->_vptr_IHandleEntity + 229))(this, &vec3_origin, 0, v8) )
  {
    v40 = (*(this->_vptr_IHandleEntity + 229))(this, &vec3_origin, 0);
    v50 = vDirection.x * v40;
    v48 = vDirection.y * v40;
    fLengtha = v40 * vDirection.z;
    v41 = CDOTABaseAbility::GetCaster(this);
    v42 = CBaseEntity::GetAbsOrigin(v41);
    x = v50 + v42->x;
    y = v48 + v42->y;
    fLength = fLengtha + v42->z;
    v46 = (*(this->_vptr_IHandleEntity + 229))(this, &vec3_origin, 0);
  }
  v9 = CDOTABaseAbility::GetCaster(this);
  HasScepter = CDOTA_BaseNPC::HasScepter(v9);
  burrow_speed_scepter = this->burrow_speed_scepter;
  info.hSource.m_Index = -1;
  v12 = vec3_origin.y;
  info.bHasFrontalCone = 1;
  z = vec3_origin.z;
  info.vSpawnOrigin.x = vec3_origin.x;
  if ( !HasScepter )
    burrow_speed_scepter = this->burrow_speed;
  info.vSpawnOrigin.y = v12;
  info.vSpawnOrigin.z = z;
  info.vVelocity.x = vec3_origin.x;
  info.vVelocity.y = v12;
  info.vVelocity.z = z;
  info.vAcceleration.x = vec3_origin.x;
  info.vAcceleration.y = v12;
  info.vAcceleration.z = z;
  info.pszEffectName = 0;
  info.fDistance = 0.0;
  info.fStartRadius = 0.0;
  info.fEndRadius = 0.0;
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
  info.bStickyFoWReveal = 0;
  info.pKVExtraData = 0;
  info.fExpireTime = 0.0;
  info.fMaxSpeed = 0.0;
  info.pAbility = this;
  v14 = CDOTABaseAbility::GetCaster(this);
  v15 = CBaseEntity::GetAbsOrigin(v14);
  info.vSpawnOrigin.x = v15->x;
  info.vSpawnOrigin.y = v15->y;
  v16 = v15->z;
  info.fDistance = v46;
  info.vSpawnOrigin.z = v16;
  info.vVelocity.x = burrow_speed_scepter * vDirection.x;
  info.vVelocity.y = vDirection.y * burrow_speed_scepter;
  info.vVelocity.z = vDirection.z * burrow_speed_scepter;
  info.fStartRadius = this->burrow_width;
  info.fEndRadius = info.fStartRadius;
  v17 = CDOTABaseAbility::GetCaster(this);
  if ( v17 != 0 && (m_pEntity = v17->m_pEntity) != 0 )
  {
    v19 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v20 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v20 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(info.hSource.m_Index) = v20 | info.hSource.m_Index & 0x8000;
    info.hSource.m_Index = (v19 << 15) | info.hSource.m_Index & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  info.iUnitTargetTeam = 2;
  info.iUnitTargetType = 19;
  info.bHasFrontalCone = 0;
  CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                            this,
                            "particles/units/heroes/hero_sandking/sandking_burrowstrike.vpcf",
                            8,
                            0,
                            0);
  v22 = CDOTABaseAbility::GetCaster(this);
  v23 = CBaseEntity::GetAbsOrigin(v22);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, AbilityParticleEffect, 0, *&v23->x, v23->z);
  v25 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(
    v25,
    AbilityParticleEffect,
    1,
    COERCE_DOUBLE(__PAIR64__(LODWORD(y), LODWORD(x))),
    fLength);
  flFoWRadius = this->burrow_width;
  v26 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleFoWProperties(v26, AbilityParticleEffect, 0, 1, flFoWRadius);
  v27 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v27, AbilityParticleEffect);
  VectorAngles(&vDirection, &angles);
  angles.x = 0.0;
  v28 = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::SetAbsAngles(v28, &angles);
  v29 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v29, "Ability.SandKing_BurrowStrike", 0.0, 0, 0);
  v30 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v30, 1568, 0.2, 0.2, 0, 0, 1.0);
  KeyValues::KeyValues(&kv, "modifier_sandking_burrowstrike");
  KeyValues::SetFloat(&kv, "duration", v31);
  KeyValues::SetFloat(&kv, "x", v32);
  KeyValues::SetFloat(&kv, "y", v33);
  KeyValues::SetFloat(&kv, "z", v34);
  KeyValues::SetFloat(&kv, "appear_time", v35);
  v36 = CDOTABaseAbility::GetCaster(this);
  v37 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v37, v36, this, "modifier_sandking_burrowstrike", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_SandKing_BurrowStrike::OnProjectileHit  (line 431, @0x00000000029df0f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsRealHero, IsValid, LookupEntity, ToDOTAAbility, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_BaseNPC::TriggerSpellAbsorb, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, EconEntity_OnOwnerKillEaterEvent, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<float>, __dynamic_cast, KeyValues::~KeyValues (13 total)
// strings: "modifier_sandking_impale", "sandking_caustic_finale", "caustic_finale_duration", "modifier_sand_king_caustic_finale_orb"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_SandKing_BurrowStrike::OnProjectileHit(
        CDOTA_Ability_SandKing_BurrowStrike *const this,
        _WORD *hTarget,
        const Vector *const vLocation)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rbx
  int (**vptr_IHandleEntity)(...); // rax
  float v9; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC_Hero *v12; // rdi
  CDOTA_BaseNPC *v13; // rax
  CDOTABaseAbility *AbilityByName; // r13
  CDOTA_BaseNPC *v15; // rax
  float v16; // xmm1_4
  CDOTABaseAbility *v17; // r13
  CDOTA_BaseNPC *v18; // rax
  KeyValues kv; // [rsp+10h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  if ( (*hTarget + 2) > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[*hTarget & 0x1FF];
      if ( v5 != 0 && *hTarget == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0 )
        {
          vptr_IHandleEntity = m_pInstance[58]._vptr_IHandleEntity;
          if ( (BYTE1(vptr_IHandleEntity) & 1) == 0
            && (BYTE1(vptr_IHandleEntity) & 2) == 0
            && !CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, this, 1) )
          {
            KeyValues::KeyValues(&kv, "modifier_sandking_impale");
            KeyValues::SetFloat(&kv, "duration", v9);
            Caster = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, this, "modifier_sandking_impale", &kv, 0);
            if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
              && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
            {
              v11 = CDOTABaseAbility::GetCaster(this);
              if ( v11 != 0 && (v11->m_iUnitType & 1) != 0 )
                v12 = v11;
              else
                v12 = 0;
              EconEntity_OnOwnerKillEaterEvent(
                v12,
                m_pInstance,
                kill_eater_event_t::kKillEaterEventType_SandKing_BurrowstrikeStuns,
                1,
                INVALID_ITEM_DEF_INDEX);
            }
            v13 = CDOTABaseAbility::GetCaster(this);
            AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v13, "sandking_caustic_finale", 0);
            if ( AbilityByName != 0 )
            {
              v15 = CDOTABaseAbility::GetCaster(this);
              if ( CDOTA_BaseNPC::HasScepter(v15)
                && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
              {
                CDOTABaseAbility::GetLevelSpecialValueFor<float>(AbilityByName, "caustic_finale_duration", -1, 0);
                KeyValues::KeyValues(&kv2, "modifier_sand_king_caustic_finale_orb");
                KeyValues::SetFloat(&kv2, "duration", v16);
                v17 = __dynamic_cast(AbilityByName, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
                v18 = CDOTABaseAbility::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(m_pInstance, v18, v17, "modifier_sand_king_caustic_finale_orb", &kv2, 0);
                KeyValues::~KeyValues(&kv2);
              }
            }
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
  }
  return 0;
}


// CDOTA_Ability_SandKing_BurrowStrike::GetAbilityDamageToTargetOverInterval  (line 463, @0x00000000029bb850, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_SandKing_BurrowStrike::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_SandKing_BurrowStrike *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int v6; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    v6 = (*(this->_vptr_IHandleEntity + 247))(this, fInterval);
    return (v6 * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Ability_SandKing_BurrowStrike::GetStunDuration  (line 473, @0x00000000029e71d0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "burrow_duration"
float __fastcall CDOTA_Ability_SandKing_BurrowStrike::GetStunDuration(CDOTA_Ability_SandKing_BurrowStrike *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "burrow_duration", -1, 1);
}


// CDOTA_Modifier_SandKing_Impale::~CDOTA_Modifier_SandKing_Impale  (line 481, @0x0000000002a10a50, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_SandKing_Impale::~CDOTA_Modifier_SandKing_Impale(
        CDOTA_Modifier_SandKing_Impale *const this)
{
  this->_vptr_CDOTA_Buff = &off_4389470;
  this->_vptr_CVerticalMotionController = &off_4389760;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_SandKing_Impale::~CDOTA_Modifier_SandKing_Impale  (line 481, @0x0000000002a10a80, libserver.so)  // inlines: ~CDOTA_Modifier_SandKing_Impale
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_SandKing_Impale::~CDOTA_Modifier_SandKing_Impale(
        CDOTA_Modifier_SandKing_Impale *const this)
{
  this->_vptr_CDOTA_Buff = &off_4389470;
  this->_vptr_CVerticalMotionController = &off_4389760;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_SandKing_Impale::IsStunDebuff  (line 495, @0x0000000002a0c3c0, libserver.so)
bool __fastcall CDOTA_Modifier_SandKing_Impale::IsStunDebuff(CDOTA_Modifier_SandKing_Impale *const this)
{
  return 1;
}


// CDOTA_Modifier_SandKing_Impale::IsVerticalMotionValidToApply  (line 499, @0x0000000002a0c3d0, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_SandKing_Impale::IsVerticalMotionValidToApply(
        CDOTA_Modifier_SandKing_Impale *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_SandKing_Impale::GetAttributes  (line 503, @0x0000000002a131f0, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_SandKing_Impale::GetAttributes(CDOTA_Modifier_SandKing_Impale *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 2;
}


// CDOTA_Modifier_SandKing_Impale::GetEffectName  (line 505, @0x0000000002a0c400, libserver.so)
// strings: "particles/generic_gameplay/generic_stunned.vpcf"
const char *__fastcall CDOTA_Modifier_SandKing_Impale::GetEffectName(CDOTA_Modifier_SandKing_Impale *const this)
{
  return "particles/generic_gameplay/generic_stunned.vpcf";
}


// CDOTA_Modifier_SandKing_Impale::GetEffectAttachType  (line 506, @0x0000000002a0c410, libserver.so)
int __fastcall CDOTA_Modifier_SandKing_Impale::GetEffectAttachType(CDOTA_Modifier_SandKing_Impale *const this)
{
  return 7;
}


// CDOTA_Modifier_SandKing_Impale::DeclareFunctions  (line 523, @0x00000000029b64c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_SandKing_Impale::GetOverrideAnimation(CModifierParams const&)
void __fastcall CDOTA_Modifier_SandKing_Impale::DeclareFunctions(CDOTA_Modifier_SandKing_Impale *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_SandKing_Impale::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
}


// CDOTA_Modifier_SandKing_Impale::GetOverrideAnimation  (line 530, @0x00000000029b64e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_SandKing_Impale::GetOverrideAnimation(
        CDOTA_Modifier_SandKing_Impale *const this,
        const CModifierParams *const params)
{
  return 0x44BCA00000000001uLL;
}


// CDOTA_Modifier_SandKing_Impale::CheckState  (line 537, @0x00000000029b6500, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_SandKing_Impale::CheckState(
        CDOTA_Modifier_SandKing_Impale *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x20uLL;
  buffState->m_nDisabledStateMask &= ~0x20uLL;
}


// CDOTA_Modifier_SandKing_Impale::OnCreated  (line 546, @0x00000000029bbc40, libserver.so)  // inlines: TryToApplyDamage
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, GetGroundHeight, CDOTALocomotor::ApplyVerticalMotionController, CDOTA_Modifier_SandKing_Impale::TryToApplyDamage, CDOTA_BaseNPC::StartGesture
void __fastcall CDOTA_Modifier_SandKing_Impale::OnCreated(CDOTA_Modifier_SandKing_Impale *const this, KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTALocomotor *v7; // rax
  CDOTA_BaseNPC *v8; // rax

  this->m_flCurTime = 0.0;
  this->m_bDamageApplied = 0;
  Parent = CDOTA_Buff::GetParent(this);
  v4 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
  this->m_flStartZ = GetGroundHeight(AbsOrigin, Parent);
  v6 = CDOTA_Buff::GetParent(this);
  v7 = (*(v6->_vptr_IHandleEntity + 376))(v6);
  if ( CDOTALocomotor::ApplyVerticalMotionController(v7, &this->CVerticalMotionController, 0) )
  {
    v8 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::StartGesture(v8, 1508, 0.2, 0.2, 0, 0, 1.0);
  }
  else if ( !this->m_bDamageApplied )
  {
    CDOTA_Modifier_SandKing_Impale::TryToApplyDamage(this);
  }
}


// CDOTA_Modifier_SandKing_Impale::UpdateVerticalMotion  (line 566, @0x00000000029bbdb0, libserver.so)  // inlines: TryToApplyDamage
// calls: CVerticalMotionController::UpdateSimpleAirTime, CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveGesture, CDOTA_Modifier_SandKing_Impale::TryToApplyDamage
void __fastcall CDOTA_Modifier_SandKing_Impale::UpdateVerticalMotion(
        CDOTA_Modifier_SandKing_Impale *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt,
        double a5,
        double a6,
        float a7)
{
  CVerticalMotionController *v8; // rdi
  float v9; // xmm1_4
  float v10; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax

  v8 = &this->CVerticalMotionController;
  v9 = *&v8[1]._vptr_CVerticalMotionController + a3;
  v10 = *(&v8->m_nPriority + 1);
  *&v8[1]._vptr_CVerticalMotionController = v9;
  if ( CVerticalMotionController::UpdateSimpleAirTime(v8, me, v10, v9, 0.51999998, 350.0, a7) != 0 )
  {
    if ( !this->m_bDamageApplied )
      CDOTA_Modifier_SandKing_Impale::TryToApplyDamage(this);
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::RemoveGesture(Parent, 1508);
  }
}


// CDOTA_Modifier_SandKing_Impale::OnVerticalMotionInterrupted  (line 581, @0x00000000029bbd00, libserver.so)  // inlines: TryToApplyDamage
// calls: CDOTA_Modifier_SandKing_Impale::TryToApplyDamage, CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Modifier_SandKing_Impale::OnVerticalMotionInterrupted(CDOTA_Modifier_SandKing_Impale *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  if ( !this->m_bDamageApplied )
    CDOTA_Modifier_SandKing_Impale::TryToApplyDamage(this);
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveGesture(Parent, 1508);
}


// CDOTA_Modifier_SandKing_Impale::OnDestroy  (line 591, @0x00000000029bbd50, libserver.so)  // inlines: TryToApplyDamage
// calls: CDOTA_Modifier_SandKing_Impale::TryToApplyDamage, CDOTA_Buff::GetParent, CDOTALocomotor::RemoveVerticalMotionController, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Modifier_SandKing_Impale::OnDestroy(CDOTA_Modifier_SandKing_Impale *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax
  CDOTA_BaseNPC *v4; // rax

  if ( !this->m_bDamageApplied )
    CDOTA_Modifier_SandKing_Impale::TryToApplyDamage(this);
  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveVerticalMotionController(v3, &this->CVerticalMotionController);
  v4 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveGesture(v4, 1508);
}


// CDOTA_Modifier_SandKing_Impale::TryToApplyDamage  (line 603, @0x00000000029bbbd0, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage
// callers: CDOTA_Modifier_SandKing_Impale::OnCreated, CDOTA_Modifier_SandKing_Impale::OnVerticalMotionInterrupted, CDOTA_Modifier_SandKing_Impale::OnDestroy, CDOTA_Modifier_SandKing_Impale::UpdateVerticalMotion, CDOTA_Modifier_SandKing_Impale::TryToApplyDamage
void __fastcall CDOTA_Modifier_SandKing_Impale::TryToApplyDamage(CDOTA_Modifier_SandKing_Impale *const this)
{
  CDOTABaseAbility *Ability; // rax
  int v3; // r14d
  CDOTABaseAbility *v4; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax

  this->m_bDamageApplied = 1;
  Ability = CDOTA_Buff::GetAbility(this);
  v3 = (*(Ability->_vptr_IHandleEntity + 247))(Ability);
  v4 = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, v4, v3, 2, 0);
}


// CDOTA_Modifier_SandKing_Impale::TryToApplyDamage  (line 603, @0x00000000029d9010, libserver.so)
// calls: CDOTA_Modifier_SandKing_Impale::TryToApplyDamage
void __fastcall CDOTA_Modifier_SandKing_Impale::TryToApplyDamage(CDOTA_Modifier_SandKing_Impale *const this)
{
  if ( !this->m_bDamageApplied )
    CDOTA_Modifier_SandKing_Impale::TryToApplyDamage(this);
}


// CDOTA_Modifier_Sand_King_BurrowStrike::~CDOTA_Modifier_Sand_King_BurrowStrike  (line 617, @0x0000000002a10a00, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Sand_King_BurrowStrike::~CDOTA_Modifier_Sand_King_BurrowStrike(
        CDOTA_Modifier_Sand_King_BurrowStrike *const this)
{
  this->_vptr_CDOTA_Buff = &off_43897F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Sand_King_BurrowStrike::~CDOTA_Modifier_Sand_King_BurrowStrike  (line 617, @0x0000000002a10a20, libserver.so)  // inlines: ~CDOTA_Modifier_Sand_King_BurrowStrike
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Sand_King_BurrowStrike::~CDOTA_Modifier_Sand_King_BurrowStrike(
        CDOTA_Modifier_Sand_King_BurrowStrike *const this)
{
  this->_vptr_CDOTA_Buff = &off_43897F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Sand_King_BurrowStrike::IsPurgable  (line 626, @0x0000000002a0c420, libserver.so)
bool __fastcall CDOTA_Modifier_Sand_King_BurrowStrike::IsPurgable(CDOTA_Modifier_Sand_King_BurrowStrike *const this)
{
  return 0;
}


// CDOTA_Modifier_Sand_King_BurrowStrike::IsHidden  (line 628, @0x0000000002a0c430, libserver.so)
bool __fastcall CDOTA_Modifier_Sand_King_BurrowStrike::IsHidden(CDOTA_Modifier_Sand_King_BurrowStrike *const this)
{
  return 1;
}


// CDOTA_Modifier_Sand_King_BurrowStrike::OnCreated  (line 639, @0x00000000029b6b30, libserver.so)
// calls: KeyValues::GetFloat, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Sand_King_BurrowStrike::OnCreated(
        CDOTA_Modifier_Sand_King_BurrowStrike *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4
  float Float; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4

  Float = KeyValues::GetFloat(pKV, "appear_time", v2);
  CDOTA_Buff::StartIntervalThink(this, Float, v6);
  this->m_bTeleported = 0;
  this->m_vPopupLocation.x = KeyValues::GetFloat(pKV, "x", v7);
  this->m_vPopupLocation.y = KeyValues::GetFloat(pKV, "y", v8);
  this->m_vPopupLocation.z = KeyValues::GetFloat(pKV, "z", v9);
}


// CDOTA_Modifier_Sand_King_BurrowStrike::OnIntervalThink  (line 653, @0x00000000029bb950, libserver.so)
// calls: CDOTA_Buff::GetParent, FindClearSpaceForUnit, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::StartGesture
void __fastcall CDOTA_Modifier_Sand_King_BurrowStrike::OnIntervalThink(
        CDOTA_Modifier_Sand_King_BurrowStrike *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *Caster; // rax

  if ( !this->m_bTeleported )
  {
    this->m_bTeleported = 1;
    Parent = CDOTA_Buff::GetParent(this);
    FindClearSpaceForUnit(Parent, this->m_vPopupLocation, 1);
    Caster = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::StartGesture(Caster, 1569, 0.0, 0.1, 0, 0, 1.0);
  }
}


// CDOTA_Modifier_Sand_King_BurrowStrike::CheckState  (line 668, @0x00000000029b6510, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Sand_King_BurrowStrike::CheckState(
        CDOTA_Modifier_Sand_King_BurrowStrike *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x20uLL;
  buffState->m_nDisabledStateMask &= ~0x20uLL;
}


// CDOTA_Ability_SandKing_SandStorm::~CDOTA_Ability_SandKing_SandStorm  (line 681, @0x0000000002a180e0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_SandKing_SandStorm::~CDOTA_Ability_SandKing_SandStorm(
        CDOTA_Ability_SandKing_SandStorm *const this)
{
  this->_vptr_IHandleEntity = &off_4389B50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_SandKing_SandStorm::~CDOTA_Ability_SandKing_SandStorm  (line 681, @0x0000000002a18100, libserver.so)  // inlines: ~CDOTA_Ability_SandKing_SandStorm
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_SandKing_SandStorm::~CDOTA_Ability_SandKing_SandStorm(
        CDOTA_Ability_SandKing_SandStorm *const this)
{
  this->_vptr_IHandleEntity = &off_4389B50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_SandKing_SandStorm::Schema_DynamicBinding  (line 683, @0x0000000002a0c440, libserver.so)
// globals: CDOTA_Ability_SandKing_SandStorm::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_SandKing_SandStorm::Schema_DynamicBinding(
        const CDOTA_Ability_SandKing_SandStorm *const this)
{
  return CDOTA_Ability_SandKing_SandStorm::s_pSchemaBinding;
}


// CDOTA_Ability_SandKing_SandStorm::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 683, @0x0000000002a0c450, libserver.so)
// globals: CDOTA_Ability_SandKing_SandStorm::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_SandKing_SandStorm::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_SandKing_SandStorm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_SandKing_SandStorm::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_SandKing_SandStorm::CEntityInstanceEntityClass::DestructInstance  (line 683, @0x0000000002a0c460, libserver.so)  // inlines: Destruct<CDOTA_Ability_SandKing_SandStorm>
void __fastcall CDOTA_Ability_SandKing_SandStorm::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_SandKing_SandStorm::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_SandKing_SandStorm::CEntityInstanceEntityClass::FreeInstance  (line 683, @0x0000000002a0c480, libserver.so)
void __fastcall CDOTA_Ability_SandKing_SandStorm::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_SandKing_SandStorm::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_SandKing_SandStorm::CEntityInstanceEntityClass::CanAllocate  (line 683, @0x0000000002a0c4a0, libserver.so)
bool __fastcall CDOTA_Ability_SandKing_SandStorm::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_SandKing_SandStorm::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_SandKing_SandStorm::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 683, @0x0000000002a0c4b0, libserver.so)
// globals: CDOTA_Ability_SandKing_SandStorm::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_SandKing_SandStorm::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_SandKing_SandStorm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_SandKing_SandStorm::s_pSchemaBinding;
}


// CDOTA_Ability_SandKing_SandStorm::CEntityInstanceEntityClass::AllocateInstance  (line 683, @0x0000000002a10780, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_SandKing_SandStorm::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_SandKing_SandStorm::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_SandKing_SandStorm::CEntityInstanceEntityClass::ConstructInstance  (line 683, @0x0000000002a149a0, libserver.so)  // inlines: CDOTA_Ability_SandKing_SandStorm, Construct<CDOTA_Ability_SandKing_SandStorm>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_SandKing_SandStorm::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_SandKing_SandStorm::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4389B50;
  }
  return p;
}


// CDOTA_Ability_SandKing_SandStorm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 683, @0x0000000002a20530, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_SandKing_SandStorm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_SandKing_SandStorm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_SandKing_SandStorm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 683, @0x0000000002a20550, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_SandKing_SandStorm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_SandKing_SandStorm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_SandKing_SandStorm::GetEntityClassInternal  (line 683, @0x0000000002a3afd0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_SandKing_SandStorm"
// globals: `guard variable for'CDOTA_Ability_SandKing_SandStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_SandStormClass, CDOTA_Ability_SandKing_SandStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_SandStormClass, __dso_handle, CDOTA_Ability_SandKing_SandStorm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_SandKing_SandStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_SandStormClassInfo, CDOTA_Ability_SandKing_SandStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_SandStormClassInfo
CEntityClass *__cdecl CDOTA_Ability_SandKing_SandStorm::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_SandKing_SandStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_SandStormClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_SandKing_SandStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_SandStormClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_SandKing_SandStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_SandStormClass);
    CDOTA_Ability_SandKing_SandStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_SandStormClass._vptr_CEntityClass = off_4389AD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_SandKing_SandStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_SandStormClass);
    __cxa_atexit(
      CDOTA_Ability_SandKing_SandStorm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_SandKing_SandStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_SandStormClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_SandKing_SandStormClass != 0 )
    return &CDOTA_Ability_SandKing_SandStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_SandStormClass;
  if ( `guard variable for'CDOTA_Ability_SandKing_SandStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_SandStormClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_SandKing_SandStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_SandStormClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_SandKing_SandStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_SandStormClassInfo,
      "CDOTA_Ability_SandKing_SandStorm",
      "sandking_sand_storm",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_SandKing_SandStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_SandStormClassInfo);
  }
  CDOTA_Ability_SandKing_SandStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_SandStormClass.m_pClassInfo = &CDOTA_Ability_SandKing_SandStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_SandStormClassInfo;
  CDOTA_Ability_SandKing_SandStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_SandStormClass.m_pBaseClassInfo = CDOTA_Ability_SandKing_SandStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_SandStormClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_SandKing_SandStormClass = &CDOTA_Ability_SandKing_SandStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_SandStormClass;
  CDOTA_Ability_SandKing_SandStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_SandStormClassInfo.m_pClass = &CDOTA_Ability_SandKing_SandStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_SandStormClass;
  CDOTA_Ability_SandKing_SandStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_SandStormClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_SandKing_SandStormClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_SandKing_SandStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_SandStormClass;
}


// CDOTA_Ability_SandKing_SandStorm::GetCastAnimation  (line 689, @0x0000000002a0c4c0, libserver.so)
Activity __fastcall CDOTA_Ability_SandKing_SandStorm::GetCastAnimation(CDOTA_Ability_SandKing_SandStorm *const this)
{
  return 1517;
}


// CDOTA_Ability_SandKing_SandStorm::GetAOERadius  (line 691, @0x0000000002a33d50, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "sand_storm_radius"
float __fastcall CDOTA_Ability_SandKing_SandStorm::GetAOERadius(CDOTA_Ability_SandKing_SandStorm *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "sand_storm_radius", -1, 0);
}


// CDOTA_Ability_SandKing_SandStorm::HasInvisibility  (line 693, @0x0000000002a0c4d0, libserver.so)
bool __fastcall CDOTA_Ability_SandKing_SandStorm::HasInvisibility(CDOTA_Ability_SandKing_SandStorm *const this)
{
  return 1;
}


// CDOTA_Ability_SandKing_SandStorm::YouForgotToImplementOrDeclareServerClass  (line 696, @0x00000000029b6520, libserver.so)
int __fastcall CDOTA_Ability_SandKing_SandStorm::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_SandKing_SandStorm *const this)
{
  return 0;
}


// CDOTA_Ability_SandKing_SandStorm::GetServerClass  (line 696, @0x00000000029c9930, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_SandKing_SandStorm::GetServerClass(CDOTA_Ability_SandKing_SandStorm *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CDOTA_Ability_SandKing_SandStorm::OnSpellStart  (line 705, @0x00000000029b7120, libserver.so)
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_sandking_sand_storm", "modifier_sandking_sand_storm_invis", "Ability.SandKing_SandStorm.start"
void __fastcall CDOTA_Ability_SandKing_SandStorm::OnSpellStart(CDOTA_Ability_SandKing_SandStorm *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // r13
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_sandking_sand_storm");
  CDOTABaseAbility::GetDuration(this);
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_sandking_sand_storm", &kv, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v6, v5, this, "modifier_sandking_sand_storm_invis", &kv, 0);
  v7 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v7, "Ability.SandKing_SandStorm.start", 0.0, 0, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_SandKing_SandStorm::OnChannelFinish  (line 720, @0x00000000029df380, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "modifier_sandking_sand_storm", "modifier_sandking_sand_storm_invis", "sand_storm_invis_delay"
void __fastcall CDOTA_Ability_SandKing_SandStorm::OnChannelFinish(
        CDOTA_Ability_SandKing_SandStorm *const this,
        bool bInterrupted)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // r13
  CDOTA_BaseNPC *v5; // rax
  CDOTA_Buff *v6; // r12
  void (__fastcall *v7)(CDOTA_Buff *, __int64, float); // r14
  float LevelSpecialValue; // xmm0_4
  void (__fastcall *v9)(CDOTA_Buff *, __int64, float); // r13
  float v10; // xmm0_4

  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_sandking_sand_storm", 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  v6 = CDOTA_BaseNPC::FindModifierByName(v5, "modifier_sandking_sand_storm_invis", 0);
  if ( ModifierByName != 0 )
  {
    v7 = *(ModifierByName->_vptr_CDOTA_Buff + 63);
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "sand_storm_invis_delay", -1, 0);
    v7(ModifierByName, 1, LevelSpecialValue);
  }
  if ( v6 != 0 )
  {
    v9 = *(v6->_vptr_CDOTA_Buff + 63);
    v10 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "sand_storm_invis_delay", -1, 0);
    v9(v6, 1, v10);
  }
}


// CDOTA_Modifier_SandKing_SandStorm::~CDOTA_Modifier_SandKing_SandStorm  (line 741, @0x0000000002a109b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_SandKing_SandStorm::~CDOTA_Modifier_SandKing_SandStorm(
        CDOTA_Modifier_SandKing_SandStorm *const this)
{
  this->_vptr_CDOTA_Buff = &off_438A610;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_SandKing_SandStorm::~CDOTA_Modifier_SandKing_SandStorm  (line 741, @0x0000000002a109d0, libserver.so)  // inlines: ~CDOTA_Modifier_SandKing_SandStorm
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_SandKing_SandStorm::~CDOTA_Modifier_SandKing_SandStorm(
        CDOTA_Modifier_SandKing_SandStorm *const this)
{
  this->_vptr_CDOTA_Buff = &off_438A610;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_SandKing_SandStorm::IsPurgable  (line 756, @0x0000000002a0c4e0, libserver.so)
bool __fastcall CDOTA_Modifier_SandKing_SandStorm::IsPurgable(CDOTA_Modifier_SandKing_SandStorm *const this)
{
  return 0;
}


// CDOTA_Modifier_SandKing_SandStorm::GetNumAvoidLocations  (line 764, @0x0000000002a0c4f0, libserver.so)
int __fastcall CDOTA_Modifier_SandKing_SandStorm::GetNumAvoidLocations(CDOTA_Modifier_SandKing_SandStorm *const this)
{
  return 1;
}


// CDOTA_Modifier_SandKing_SandStorm::GetAvoidLocation  (line 765, @0x0000000002a14ad0, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin
Vector __fastcall CDOTA_Modifier_SandKing_SandStorm::GetAvoidLocation(
        CDOTA_Modifier_SandKing_SandStorm *const this,
        int iAvoid)
{
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  *&result.x = *&AbsOrigin->x;
  result.z = AbsOrigin->z;
  return result;
}


// CDOTA_Modifier_SandKing_SandStorm::AvoidStrength  (line 766, @0x0000000002a21070, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, RemapValClamped, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Modifier_SandKing_SandStorm::AvoidStrength(
        CDOTA_Modifier_SandKing_SandStorm *const this,
        CDOTA_Bot *pBot)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  const CBaseEntity *m_pInstance; // rdi
  float v6; // xmm1_4
  float result; // xmm0_4

  m_Index = pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pBot->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[pBot->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v6 = (CBaseEntity::GetHealth(m_pInstance) - 50.0) / 250.0;
  if ( v6 < 0.0 )
    return 1.0;
  result = 0.10000002;
  if ( v6 <= 1.0 )
    return (v6 * -0.89999998) + 1.0;
  return result;
}


// CDOTA_Modifier_SandKing_SandStorm::GetAvoidRadius  (line 767, @0x0000000002a0c500, libserver.so)
float __fastcall CDOTA_Modifier_SandKing_SandStorm::GetAvoidRadius(
        CDOTA_Modifier_SandKing_SandStorm *const this,
        int iAvoid)
{
  return this->sand_storm_radius + 100.0;
}


// CDOTA_Modifier_SandKing_SandStorm::IsAvoidMagical  (line 768, @0x0000000002a0c520, libserver.so)
bool __fastcall CDOTA_Modifier_SandKing_SandStorm::IsAvoidMagical(CDOTA_Modifier_SandKing_SandStorm *const this)
{
  return 1;
}


// CDOTA_Modifier_SandKing_SandStorm::IsPersistentAvoidance  (line 769, @0x0000000002a0c530, libserver.so)
bool __fastcall CDOTA_Modifier_SandKing_SandStorm::IsPersistentAvoidance(CDOTA_Modifier_SandKing_SandStorm *const this)
{
  return 1;
}


// CDOTA_Modifier_SandKing_SandStorm::OnCreated  (line 785, @0x00000000029fbe20, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>, Vector, VectorAdd, operator+
// calls: CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleFoWProperties, CDOTA_Buff::AddParticle, DOTA_EmitSoundLocation
// strings: "sand_storm_radius", "particles/units/heroes/hero_sandking/sandking_sandstorm.vpcf", "Ability.SandKing_SandStorm.loop"
void __fastcall CDOTA_Modifier_SandKing_SandStorm::OnCreated(
        CDOTA_Modifier_SandKing_SandStorm *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax
  int v9; // r12d
  CDOTA_ParticleManager *v10; // rax
  int m_nSandStormParticleIndex1; // r12d
  CDOTA_ParticleManager *v12; // rax
  int v13; // r12d
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  const Vector *v16; // rax
  float flFoWRadius; // [rsp+Ch] [rbp-34h]
  double vecSpawnPos; // [rsp+10h] [rbp-30h]
  float vecSpawnPos_8; // [rsp+18h] [rbp-28h]
  double vecAOE; // [rsp+20h] [rbp-20h]

  CDOTA_Buff::StartIntervalThink(this, 0.5, v2);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->sand_storm_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "sand_storm_radius", -1, 0);
  else
    this->sand_storm_radius = 0;
  Caster = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  vecSpawnPos_8 = AbsOrigin->z + 32.0;
  *(&vecSpawnPos + 1) = AbsOrigin->y + 0.0;
  *&vecSpawnPos = AbsOrigin->x + 0.0;
  *&vecAOE = this->sand_storm_radius;
  *(&vecAOE + 1) = *&vecAOE;
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_sandking/sandking_sandstorm.vpcf",
               8,
               0,
               0,
               0);
  this->m_nSandStormParticleIndex1 = Particle;
  v9 = Particle;
  v10 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v10, v9, 0, vecSpawnPos, vecSpawnPos_8);
  m_nSandStormParticleIndex1 = this->m_nSandStormParticleIndex1;
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v12, m_nSandStormParticleIndex1, 1, vecAOE, *&vecAOE);
  v13 = this->m_nSandStormParticleIndex1;
  flFoWRadius = this->sand_storm_radius;
  v14 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleFoWProperties(v14, v13, 0, -1, flFoWRadius);
  CDOTA_Buff::AddParticle(this, this->m_nSandStormParticleIndex1, 0, 0, -1, 0, 0);
  v15 = CDOTA_Buff::GetCaster(this);
  v16 = CBaseEntity::GetAbsOrigin(v15);
  this->m_nSandStormLoop = DOTA_EmitSoundLocation(v16, "Ability.SandKing_SandStorm.loop", 0);
}


// CDOTA_Modifier_SandKing_SandStorm::OnRefresh  (line 807, @0x00000000029f9e10, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>, Vector, VectorAdd, operator+
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleFoWProperties
// strings: "sand_storm_radius"
void __fastcall CDOTA_Modifier_SandKing_SandStorm::OnRefresh(
        CDOTA_Modifier_SandKing_SandStorm *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  int m_nSandStormParticleIndex1; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  int v8; // r12d
  CDOTA_ParticleManager *v9; // rax
  float sand_storm_radius; // xmm0_4
  int v11; // ebx
  CDOTA_ParticleManager *v12; // rax
  float v13; // [rsp+Ch] [rbp-34h]
  double vecSpawnPos; // [rsp+10h] [rbp-30h]
  float vecSpawnPos_8; // [rsp+18h] [rbp-28h]
  double vecAOE; // [rsp+20h] [rbp-20h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->sand_storm_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "sand_storm_radius", -1, 0);
  else
    this->sand_storm_radius = 0;
  Caster = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  m_nSandStormParticleIndex1 = this->m_nSandStormParticleIndex1;
  vecSpawnPos_8 = AbsOrigin->z + 32.0;
  *(&vecSpawnPos + 1) = AbsOrigin->y + 0.0;
  *&vecSpawnPos = AbsOrigin->x + 0.0;
  *&vecAOE = this->sand_storm_radius;
  *(&vecAOE + 1) = *&vecAOE;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, m_nSandStormParticleIndex1, 0, vecSpawnPos, vecSpawnPos_8);
  v8 = this->m_nSandStormParticleIndex1;
  v9 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v9, v8, 1, vecAOE, *&vecAOE);
  sand_storm_radius = this->sand_storm_radius;
  v11 = this->m_nSandStormParticleIndex1;
  v13 = sand_storm_radius;
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleFoWProperties(v12, v11, 0, -1, v13);
}


// CDOTA_Modifier_SandKing_SandStorm::OnDestroy  (line 820, @0x00000000029cef40, libserver.so)
// calls: CSoundOpGameSystem::StopSoundEvent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::GetCurrentActiveAbility, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::InterruptChannel
void __fastcall CDOTA_Modifier_SandKing_SandStorm::OnDestroy(CDOTA_Modifier_SandKing_SandStorm *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *CurrentActiveAbility; // r12
  CDOTA_BaseNPC *v4; // rax

  CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, &this->m_nSandStormLoop);
  Caster = CDOTA_Buff::GetCaster(this);
  CurrentActiveAbility = CDOTA_BaseNPC::GetCurrentActiveAbility(Caster);
  if ( CurrentActiveAbility == CDOTA_Buff::GetAbility(this) )
  {
    v4 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::InterruptChannel(v4);
  }
}


// CDOTA_Modifier_SandKing_SandStorm::OnIntervalThink  (line 835, @0x00000000029dadc0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, VectorAdd, operator CBaseEntity*, operator CEntityInstance*, operator!=<CBaseEntity>, operator+, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::IsChanneling, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, FindUnitsInRadius, CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, ApplyDamage, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy (13 total)
// strings: "modifier_sandking_sand_storm_invis"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_SandKing_SandStorm::OnIntervalThink(CDOTA_Modifier_SandKing_SandStorm *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  const Vector *AbsOrigin; // rax
  int m_nSandStormParticleIndex1; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  __m128i v7; // xmm4
  float v8; // r12d
  CDOTA_BaseNPC *v9; // r14
  CDOTA_BaseNPC *v10; // rax
  const Vector *v11; // rbx
  CDOTA_BaseNPC *v12; // rax
  __int64 v13; // rbx
  int v14; // r12d
  CHandle<CBaseEntity> *v15; // rdx
  uint32 m_Index; // eax
  __int16 v17; // cx
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v21; // r15
  CHandle<CBaseEntity> *v22; // rdx
  uint32 v23; // eax
  __int16 v24; // cx
  CEntityIdentity *v25; // rdx
  CEntityIdentity *v26; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v29; // rax
  float flDamage; // [rsp+2Ch] [rbp-64h]
  double vecSpawnPos; // [rsp+30h] [rbp-60h]
  float vecSpawnPos_8; // [rsp+38h] [rbp-58h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-50h] BYREF

  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    if ( CDOTA_BaseNPC::IsChanneling(Caster) )
    {
      v3 = CDOTA_Buff::GetCaster(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
      m_nSandStormParticleIndex1 = this->m_nSandStormParticleIndex1;
      vecSpawnPos_8 = AbsOrigin->z + 32.0;
      *(&vecSpawnPos + 1) = AbsOrigin->y + 0.0;
      *&vecSpawnPos = AbsOrigin->x + 0.0;
      ParticleManager = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(
        ParticleManager,
        m_nSandStormParticleIndex1,
        0,
        vecSpawnPos,
        vecSpawnPos_8);
      *v7.m128i_i32 = this->sand_storm_radius;
      entities.m_Size = 0;
      entities.m_Memory.m_pMemory = 0;
      entities.m_Memory.m_nAllocationCount = 0;
      entities.m_Memory.m_nGrowSize = 0;
      v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
      v9 = CDOTA_Buff::GetCaster(this);
      v10 = CDOTA_Buff::GetCaster(this);
      v11 = CBaseEntity::GetAbsOrigin(v10);
      v12 = CDOTA_Buff::GetCaster(this);
      FindUnitsInRadius(v12->m_iTeamNum.m_Value, v11, v9, v8, &entities, 2, 19, 0, 0, 0);
      if ( entities.m_Size > 0 )
      {
        v13 = 0;
        v14 = 0;
        do
        {
          while ( 1 )
          {
            v15 = &entities.m_Memory.m_pMemory[v13];
            m_Index = entities.m_Memory.m_pMemory[v13].m_Index;
            if ( m_Index + 2 > 1 )
            {
              v17 = v15->m_Index;
              v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v15->m_Index) >> 9) & 0x3F];
              if ( v18 != 0 )
              {
                v19 = &v18[v17 & 0x1FF];
                if ( v19 != 0 && m_Index == v19->m_EHandle.m_Index && v19->m_pInstance != 0 )
                  break;
              }
            }
            ++v14;
            ++v13;
            if ( entities.m_Size <= v14 )
              goto LABEL_17;
          }
          Ability = CDOTA_Buff::GetAbility(this);
          flDamage = ((*(Ability->_vptr_IHandleEntity + 247))(Ability) / 2);
          v21 = CDOTA_Buff::GetAbility(this);
          v22 = &entities.m_Memory.m_pMemory[v13];
          v23 = entities.m_Memory.m_pMemory[v13].m_Index;
          if ( v23 + 2 <= 1
            || (v24 = v22->m_Index,
                (v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v22->m_Index) >> 9) & 0x3F]) == 0)
            || (v26 = &v25[v24 & 0x1FF]) == 0
            || v23 != v26->m_EHandle.m_Index
            || (m_pInstance = v26->m_pInstance, v26->m_pInstance == 0)
            || !m_pInstance->m_bIsDOTANPC )
          {
            m_pInstance = 0;
          }
          Parent = CDOTA_Buff::GetParent(this);
          ApplyDamage(Parent, m_pInstance, v21, flDamage, 2, 0);
          ++v14;
          ++v13;
        }
        while ( entities.m_Size > v14 );
      }
LABEL_17:
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
    }
  }
  v29 = CDOTA_Buff::GetCaster(this);
  if ( CDOTA_BaseNPC::FindModifierByName(v29, "modifier_sandking_sand_storm_invis", 0) == 0 )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_SandKing_SandStorm::DeclareFunctions  (line 863, @0x00000000029b6530, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_SandKing_SandStorm::Tooltip(CModifierParams const&)
void __fastcall CDOTA_Modifier_SandKing_SandStorm::DeclareFunctions(CDOTA_Modifier_SandKing_SandStorm *const this)
{
  this->m_Functions[151].__pfn = CDOTA_Modifier_SandKing_SandStorm::Tooltip;
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_SandKing_SandStorm::Tooltip  (line 889, @0x00000000029b67a0, libserver.so)
// calls: CDOTA_Buff::GetAbility
ModifierVariant_t __fastcall CDOTA_Modifier_SandKing_SandStorm::Tooltip(
        CDOTA_Modifier_SandKing_SandStorm *const this,
        const CModifierParams *const params)
{
  CDOTABaseAbility *Ability; // rax
  __m128i v3; // xmm0
  int v4; // eax
  ModifierVariant_t result; // 0:rax.16

  Ability = CDOTA_Buff::GetAbility(this);
  v3 = (*(Ability->_vptr_IHandleEntity + 247))(Ability);
  result.m_szVal = 0;
  *v3.m128i_i32 = v4;
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_SandKing_SandStorm_Invis::~CDOTA_Modifier_SandKing_SandStorm_Invis  (line 898, @0x0000000002a12ea0, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_SandKing_SandStorm_Invis::~CDOTA_Modifier_SandKing_SandStorm_Invis(
        CDOTA_Modifier_SandKing_SandStorm_Invis *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_SandKing_SandStorm_Invis::~CDOTA_Modifier_SandKing_SandStorm_Invis  (line 898, @0x0000000002a12ec0, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible, ~CDOTA_Modifier_SandKing_SandStorm_Invis
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_SandKing_SandStorm_Invis::~CDOTA_Modifier_SandKing_SandStorm_Invis(
        CDOTA_Modifier_SandKing_SandStorm_Invis *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Ability_SandKing_Epicenter::~CDOTA_Ability_SandKing_Epicenter  (line 913, @0x0000000002a18130, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_SandKing_Epicenter::~CDOTA_Ability_SandKing_Epicenter(
        CDOTA_Ability_SandKing_Epicenter *const this)
{
  this->_vptr_IHandleEntity = &off_438ACB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_SandKing_Epicenter::~CDOTA_Ability_SandKing_Epicenter  (line 913, @0x0000000002a18150, libserver.so)  // inlines: ~CDOTA_Ability_SandKing_Epicenter
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_SandKing_Epicenter::~CDOTA_Ability_SandKing_Epicenter(
        CDOTA_Ability_SandKing_Epicenter *const this)
{
  this->_vptr_IHandleEntity = &off_438ACB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_SandKing_Epicenter::Schema_DynamicBinding  (line 915, @0x0000000002a0c540, libserver.so)
// globals: CDOTA_Ability_SandKing_Epicenter::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_SandKing_Epicenter::Schema_DynamicBinding(
        const CDOTA_Ability_SandKing_Epicenter *const this)
{
  return CDOTA_Ability_SandKing_Epicenter::s_pSchemaBinding;
}


// CDOTA_Ability_SandKing_Epicenter::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 915, @0x0000000002a0c550, libserver.so)
// globals: CDOTA_Ability_SandKing_Epicenter::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_SandKing_Epicenter::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_SandKing_Epicenter::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_SandKing_Epicenter::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_SandKing_Epicenter::CEntityInstanceEntityClass::DestructInstance  (line 915, @0x0000000002a0c560, libserver.so)  // inlines: Destruct<CDOTA_Ability_SandKing_Epicenter>
void __fastcall CDOTA_Ability_SandKing_Epicenter::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_SandKing_Epicenter::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_SandKing_Epicenter::CEntityInstanceEntityClass::FreeInstance  (line 915, @0x0000000002a0c580, libserver.so)
void __fastcall CDOTA_Ability_SandKing_Epicenter::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_SandKing_Epicenter::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_SandKing_Epicenter::CEntityInstanceEntityClass::CanAllocate  (line 915, @0x0000000002a0c5a0, libserver.so)
bool __fastcall CDOTA_Ability_SandKing_Epicenter::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_SandKing_Epicenter::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_SandKing_Epicenter::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 915, @0x0000000002a0c5b0, libserver.so)
// globals: CDOTA_Ability_SandKing_Epicenter::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_SandKing_Epicenter::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_SandKing_Epicenter::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_SandKing_Epicenter::s_pSchemaBinding;
}


// CDOTA_Ability_SandKing_Epicenter::CEntityInstanceEntityClass::AllocateInstance  (line 915, @0x0000000002a107c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_SandKing_Epicenter::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_SandKing_Epicenter::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_SandKing_Epicenter::CEntityInstanceEntityClass::ConstructInstance  (line 915, @0x0000000002a149d0, libserver.so)  // inlines: CDOTA_Ability_SandKing_Epicenter, Construct<CDOTA_Ability_SandKing_Epicenter>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_SandKing_Epicenter::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_SandKing_Epicenter::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_438ACB0;
  }
  return p;
}


// CDOTA_Ability_SandKing_Epicenter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 915, @0x0000000002a20580, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_SandKing_Epicenter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_SandKing_Epicenter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_SandKing_Epicenter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 915, @0x0000000002a205a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_SandKing_Epicenter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_SandKing_Epicenter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_SandKing_Epicenter::GetEntityClassInternal  (line 915, @0x0000000002a3b120, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "sandking_epicenter", "CDOTA_Ability_SandKing_Epicenter"
// globals: `guard variable for'CDOTA_Ability_SandKing_Epicenter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_EpicenterClass, CDOTA_Ability_SandKing_Epicenter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_EpicenterClass, __dso_handle, CDOTA_Ability_SandKing_Epicenter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_SandKing_Epicenter::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_EpicenterClassInfo, CDOTA_Ability_SandKing_Epicenter::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_EpicenterClassInfo
CEntityClass *__cdecl CDOTA_Ability_SandKing_Epicenter::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_SandKing_Epicenter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_EpicenterClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_SandKing_Epicenter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_EpicenterClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_SandKing_Epicenter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_EpicenterClass);
    CDOTA_Ability_SandKing_Epicenter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_EpicenterClass._vptr_CEntityClass = off_438AC30;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_SandKing_Epicenter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_EpicenterClass);
    __cxa_atexit(
      CDOTA_Ability_SandKing_Epicenter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_SandKing_Epicenter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_EpicenterClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_SandKing_EpicenterClass != 0 )
    return &CDOTA_Ability_SandKing_Epicenter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_EpicenterClass;
  if ( `guard variable for'CDOTA_Ability_SandKing_Epicenter::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_EpicenterClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_SandKing_Epicenter::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_EpicenterClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_SandKing_Epicenter::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_EpicenterClassInfo,
      "CDOTA_Ability_SandKing_Epicenter",
      "sandking_epicenter",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_SandKing_Epicenter::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_EpicenterClassInfo);
  }
  CDOTA_Ability_SandKing_Epicenter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_EpicenterClass.m_pClassInfo = &CDOTA_Ability_SandKing_Epicenter::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_EpicenterClassInfo;
  CDOTA_Ability_SandKing_Epicenter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_EpicenterClass.m_pBaseClassInfo = CDOTA_Ability_SandKing_Epicenter::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_EpicenterClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_SandKing_EpicenterClass = &CDOTA_Ability_SandKing_Epicenter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_EpicenterClass;
  CDOTA_Ability_SandKing_Epicenter::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SandKing_EpicenterClassInfo.m_pClass = &CDOTA_Ability_SandKing_Epicenter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_EpicenterClass;
  CDOTA_Ability_SandKing_Epicenter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_EpicenterClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_SandKing_EpicenterClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_SandKing_Epicenter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SandKing_EpicenterClass;
}


// CDOTA_Ability_SandKing_Epicenter::YouForgotToImplementOrDeclareServerClass  (line 933, @0x00000000029b6550, libserver.so)
int __fastcall CDOTA_Ability_SandKing_Epicenter::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_SandKing_Epicenter *const this)
{
  return 0;
}


// CDOTA_Ability_SandKing_Epicenter::GetServerClass  (line 933, @0x00000000029ca1b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_SandKing_Epicenter::GetServerClass(CDOTA_Ability_SandKing_Epicenter *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  CEntityClass *v4; // rdx
  CEntityClassInfo *v5; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
    {
      v4 = m_pBaseClassInfo->m_pClass;
      result = v4->m_pGameClass;
      if ( result == 0 )
      {
        v5 = v4->m_pBaseClassInfo;
        if ( v5 != 0 )
          return CEntityClass::GetGameClass(v5->m_pClass, 0);
      }
    }
  }
  return result;
}


// CDOTA_Ability_SandKing_Epicenter::OnAbilityPhaseStart  (line 942, @0x00000000029b8db0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, DOTA_EmitSound
// strings: "modifier_sandking_sand_storm_invis", "particles/units/heroes/hero_sandking/sandking_epicenter_tell.vpcf", "attach_tail", "Ability.SandKing_Epicenter.spell"
bool __fastcall CDOTA_Ability_SandKing_Epicenter::OnAbilityPhaseStart(CDOTA_Ability_SandKing_Epicenter *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v5; // rax
  const CBaseAnimating *v6; // r13
  CDOTA_ParticleManager *v7; // rax
  CDOTA_BaseNPC *v8; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_sandking_sand_storm_invis");
  v3 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  this->m_nFXEpicenterIndex = CDOTA_ParticleManager::CreateParticle(
                                ParticleManager,
                                "particles/units/heroes/hero_sandking/sandking_epicenter_tell.vpcf",
                                2,
                                v3,
                                0,
                                0);
  v5 = CDOTABaseAbility::GetCaster(this);
  LODWORD(v3) = this->m_nFXEpicenterIndex;
  v6 = v5;
  v7 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v7, v3, 0, v6, 5, "attach_tail", vec3_invalid, 1);
  v8 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(6, "Ability.SandKing_Epicenter.spell", v8);
  return 1;
}


// CDOTA_Ability_SandKing_Epicenter::OnAbilityPhaseInterrupted  (line 961, @0x00000000029b7a30, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect
void __fastcall CDOTA_Ability_SandKing_Epicenter::OnAbilityPhaseInterrupted(
        CDOTA_Ability_SandKing_Epicenter *const this)
{
  int m_nFXEpicenterIndex; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax

  m_nFXEpicenterIndex = this->m_nFXEpicenterIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXEpicenterIndex, 0);
}


// CDOTA_Ability_SandKing_Epicenter::OnChannelFinish  (line 969, @0x00000000029ba310, libserver.so)  // inlines: SpeakConcept, entindex
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTABaseAbility::GetCaster, CEntityInstance::GetEntityIndex, CreateUnitEvent, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_Speech::SpeakConcept, CBaseEntity::StopSound, CResponseCriteriaSet::~CResponseCriteriaSet, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier (15 total)
// strings: "failepicenter", "Ability.SandKing_Epicenter.spell", "modifier_sand_king_epicenter"
void __fastcall CDOTA_Ability_SandKing_Epicenter::OnChannelFinish(
        CDOTA_Ability_SandKing_Epicenter *const this,
        bool bInterrupted)
{
  int m_nFXEpicenterIndex; // r13d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Caster; // rax
  CEntityIndex v7; // eax
  float v8; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // r13
  CDOTA_BaseNPC *v12; // rax
  CResponseCriteriaSet criteria; // [rsp+10h] [rbp-80h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-40h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp-28h]

  v15 = __readfsqword(0x28u);
  m_nFXEpicenterIndex = this->m_nFXEpicenterIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXEpicenterIndex, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  v7.m_Data = CEntityInstance::GetEntityIndex(Caster).m_Data;
  CreateUnitEvent(v7, 0, bInterrupted + 25, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_IMPORTANT_ABILITY);
  if ( bInterrupted )
  {
    CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
    CResponseCriteriaSet::AppendCriteria(&criteria, "failepicenter", 1.0, v8);
    m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
    if ( m_pSpeech != 0 )
      CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 0, 0, 0, 0, 0);
    v10 = CDOTABaseAbility::GetCaster(this);
    CBaseEntity::StopSound(v10, "Ability.SandKing_Epicenter.spell");
    CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  }
  else
  {
    KeyValues::KeyValues(&kv, "modifier_sand_king_epicenter");
    v11 = CDOTABaseAbility::GetCaster(this);
    v12 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v12, v11, this, "modifier_sand_king_epicenter", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_SandKing_Epicenter::GetAbilityDamageToTargetOverInterval  (line 999, @0x00000000029e71f0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "epicenter_pulses"
__int64 __fastcall CDOTA_Ability_SandKing_Epicenter::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_SandKing_Epicenter *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_Ability_SandKing_Epicenter *v6; // rbx
  int v7; // r13d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    v6 = this;
    v7 = (*(this->_vptr_IHandleEntity + 247))(this, fInterval);
    LODWORD(v6) = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "epicenter_pulses", -1, 1);
    return ((v6 * v7) * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Modifier_SandKing_Epicenter::~CDOTA_Modifier_SandKing_Epicenter  (line 1013, @0x0000000002a10960, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_SandKing_Epicenter::~CDOTA_Modifier_SandKing_Epicenter(
        CDOTA_Modifier_SandKing_Epicenter *const this)
{
  this->_vptr_CDOTA_Buff = &off_438B770;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_SandKing_Epicenter::~CDOTA_Modifier_SandKing_Epicenter  (line 1013, @0x0000000002a10980, libserver.so)  // inlines: ~CDOTA_Modifier_SandKing_Epicenter
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_SandKing_Epicenter::~CDOTA_Modifier_SandKing_Epicenter(
        CDOTA_Modifier_SandKing_Epicenter *const this)
{
  this->_vptr_CDOTA_Buff = &off_438B770;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_SandKing_Epicenter::RemoveOnDeath  (line 1027, @0x0000000002a0c5c0, libserver.so)
bool __fastcall CDOTA_Modifier_SandKing_Epicenter::RemoveOnDeath(CDOTA_Modifier_SandKing_Epicenter *const this)
{
  return 0;
}


// CDOTA_Modifier_SandKing_Epicenter::IsPurgable  (line 1028, @0x0000000002a0c5d0, libserver.so)
bool __fastcall CDOTA_Modifier_SandKing_Epicenter::IsPurgable(CDOTA_Modifier_SandKing_Epicenter *const this)
{
  return 0;
}


// CDOTA_Modifier_SandKing_Epicenter::GetAttributes  (line 1030, @0x0000000002a0c5e0, libserver.so)
int __fastcall CDOTA_Modifier_SandKing_Epicenter::GetAttributes(CDOTA_Modifier_SandKing_Epicenter *const this)
{
  return 2;
}


// CDOTA_Modifier_SandKing_Epicenter::OnCreated  (line 1048, @0x00000000029e7270, libserver.so)  // inlines: GetAbilityData, Min<int>
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetDuration, CBaseEntity::GetAbsOrigin, CDOTAGamerules::SendProjectionAbilityMessage, CDOTA_Buff::StartIntervalThink, CDOTABaseAbility::LoadAbilityData
// strings: "epicenter_pulses", "epicenter_damage", "special_bonus_unique_sand_king", "epicenter_radius"
void __fastcall CDOTA_Modifier_SandKing_Epicenter::OnCreated(
        CDOTA_Modifier_SandKing_Epicenter *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int epicenter_pulses; // eax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  float v10; // xmm2_4
  DOTAAbilityData_t *m_pAbilityData; // rdx
  int m_iAbilityID; // r13d
  CDOTA_BaseNPC *v13; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v15; // rax
  float v16; // xmm3_4
  int *epicenter_radius; // r13
  int v18; // ebx
  CDOTABaseAbility *v19; // rax
  int v20; // edx
  CDOTABaseAbility *v21; // rax
  float Duration; // xmm0_4
  float v23; // [rsp+4h] [rbp-2Ch]
  float v24; // [rsp+8h] [rbp-28h]
  float v25; // [rsp+8h] [rbp-28h]
  CDOTABaseAbility *v26; // [rsp+8h] [rbp-28h]

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->epicenter_pulses, "epicenter_pulses");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->epicenter_damage, "epicenter_damage");
  this->m_iPulseCount = 0;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_sand_king", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
  {
    epicenter_pulses = this->epicenter_pulses
                     + CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
    this->epicenter_pulses = epicenter_pulses;
  }
  else
  {
    epicenter_pulses = this->epicenter_pulses;
  }
  if ( epicenter_pulses > 15 )
  {
    this->m_iMaxPulses = 16;
  }
  else
  {
    this->m_iMaxPulses = epicenter_pulses;
    if ( epicenter_pulses <= 0 )
      goto LABEL_6;
  }
  epicenter_radius = this->epicenter_radius;
  v18 = 0;
  do
  {
    ++epicenter_radius;
    v19 = CDOTA_Buff::GetAbility(this);
    v20 = v18++;
    *(epicenter_radius - 1) = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v19, "epicenter_radius", v20, 0);
  }
  while ( this->m_iMaxPulses > v18 );
  v21 = CDOTA_Buff::GetAbility(this);
  Duration = CDOTABaseAbility::GetDuration(v21);
  CDOTA_Buff::StartIntervalThink(this, Duration / this->m_iMaxPulses, this->m_iMaxPulses);
LABEL_6:
  v8 = CDOTA_Buff::GetAbility(this);
  v24 = CDOTABaseAbility::GetDuration(v8);
  v9 = CDOTA_Buff::GetAbility(this);
  v10 = v24;
  m_pAbilityData = v9->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    v23 = v24;
    v26 = v9;
    CDOTABaseAbility::LoadAbilityData(v9, 0);
    v10 = v23;
    m_pAbilityData = v26->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  v25 = v10;
  v13 = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v13);
  v15 = CDOTA_Buff::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(
    g_pGameRules,
    v15,
    1,
    m_iAbilityID,
    0,
    0,
    *&AbsOrigin->x,
    AbsOrigin->z,
    v25,
    v16);
}


// CDOTA_Modifier_SandKing_Epicenter::OnDestroy  (line 1084, @0x00000000029b9e00, libserver.so)  // inlines: GetAbilityData
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTAGamerules::SendProjectionAbilityEndChannelMessage, CDOTABaseAbility::LoadAbilityData
void __fastcall CDOTA_Modifier_SandKing_Epicenter::OnDestroy(CDOTA_Modifier_SandKing_Epicenter *const this)
{
  CDOTABaseAbility *Ability; // rax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  int m_iAbilityID; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *v6; // [rsp+8h] [rbp-18h]

  if ( CDOTA_Buff::GetAbility(this) != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    m_pAbilityData = Ability->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      v6 = Ability;
      CDOTABaseAbility::LoadAbilityData(Ability, 0);
      m_pAbilityData = v6->m_pAbilityData;
    }
    m_iAbilityID = m_pAbilityData->m_iAbilityID;
    Caster = CDOTA_Buff::GetCaster(this);
    CDOTAGamerules::SendProjectionAbilityEndChannelMessage(g_pGameRules, Caster, m_iAbilityID);
  }
}


// CDOTA_Modifier_SandKing_Epicenter::OnIntervalThink  (line 1105, @0x00000000029db0d0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsRealHero, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_Buff::GetAbility, ApplyDamage, CDOTA_Buff::GetCaster, EconEntity_OnOwnerKillEaterEvent, KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues (21 total)
// strings: "modifier_sand_king_epicenter_slow", "particles/units/heroes/hero_sandking/sandking_epicenter.vpcf"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_SandKing_Epicenter::OnIntervalThink(CDOTA_Modifier_SandKing_Epicenter *const this)
{
  __m128i v1; // xmm3
  __int64 m_iPulseCount; // rax
  float v4; // r14d
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v8; // rax
  __int64 v9; // r13
  CHandle<CBaseEntity> *v10; // rdx
  uint32 m_Index; // eax
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CEntityInstance *m_pInstance; // rbx
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v17; // rax
  double v18; // xmm0_8
  CDOTA_BaseNPC_Hero *v19; // r15
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC_Hero *v21; // rdi
  CDOTABaseAbility *v22; // rax
  float v23; // xmm1_4
  CDOTABaseAbility *v24; // r15
  CDOTA_BaseNPC *v25; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_BaseNPC *v28; // rax
  const Vector *v29; // r13
  CDOTA_ParticleManager *v30; // rax
  CDOTA_ParticleManager *v31; // rax
  __m128i v32; // xmm4
  CDOTA_ParticleManager *v33; // rax
  CDOTA_ParticleManager *v34; // rax
  float flDamage; // [rsp+2Ch] [rbp-84h]
  double vecAOE; // [rsp+30h] [rbp-80h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v39; // [rsp+78h] [rbp-38h]

  v39 = __readfsqword(0x28u);
  m_iPulseCount = this->m_iPulseCount;
  if ( m_iPulseCount >= this->m_iMaxPulses )
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
  else
  {
    *v1.m128i_i32 = this->epicenter_radius[m_iPulseCount];
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
    Parent = CDOTA_Buff::GetParent(this);
    v6 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
    v8 = CDOTA_Buff::GetParent(this);
    FindUnitsInRadius(v8->m_iTeamNum.m_Value, AbsOrigin, Parent, v4, &entities, 2, 19, 16, 0, 0);
    if ( entities.m_Size > 0 )
    {
      v9 = 0;
      do
      {
        while ( 1 )
        {
          v10 = &entities.m_Memory.m_pMemory[v9];
          m_Index = v10->m_Index;
          if ( v10->m_Index + 2 > 1 )
          {
            v12 = v10->m_Index;
            v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Index) >> 9) & 0x3F];
            if ( v13 != 0 )
            {
              v14 = &v13[v12 & 0x1FF];
              if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
              {
                m_pInstance = v14->m_pInstance;
                if ( v14->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                  break;
              }
            }
          }
          if ( entities.m_Size <= ++v9 )
            goto LABEL_23;
        }
        flDamage = this->epicenter_damage;
        Ability = CDOTA_Buff::GetAbility(this);
        v17 = CDOTA_Buff::GetParent(this);
        v18 = ApplyDamage(v17, m_pInstance, Ability, flDamage, 2, 0);
        if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
          && LOBYTE(m_pInstance[71].m_pEntity) == 0
          && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance, v18) == 0 )
        {
          v19 = 0;
          if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
            && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
          {
            v19 = m_pInstance;
          }
          Caster = CDOTA_Buff::GetCaster(this);
          if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
            v21 = Caster;
          else
            v21 = 0;
          EconEntity_OnOwnerKillEaterEvent(
            v21,
            v19,
            kill_eater_event_t::kKillEaterEventType_SandKing_EpicenterKills,
            1,
            INVALID_ITEM_DEF_INDEX);
        }
        KeyValues::KeyValues(&kv, "modifier_sand_king_epicenter_slow");
        v22 = CDOTA_Buff::GetAbility(this);
        CDOTABaseAbility::GetDuration(v22);
        KeyValues::SetFloat(&kv, "duration", v23);
        v24 = CDOTA_Buff::GetAbility(this);
        v25 = CDOTA_Buff::GetParent(this);
        CDOTA_BaseNPC::AddNewModifier(m_pInstance, v25, v24, "modifier_sand_king_epicenter_slow", &kv, 0);
        KeyValues::~KeyValues(&kv);
        ++v9;
      }
      while ( entities.m_Size > v9 );
    }
LABEL_23:
    *&vecAOE = this->epicenter_radius[this->m_iPulseCount];
    *(&vecAOE + 1) = *&vecAOE;
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_sandking/sandking_epicenter.vpcf",
                 8,
                 0,
                 0,
                 0);
    v28 = CDOTA_Buff::GetParent(this);
    v29 = CBaseEntity::GetAbsOrigin(v28);
    v30 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v30, Particle, 0, *&v29->x, v29->z);
    v31 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v31, Particle, 1, vecAOE, *&vecAOE);
    *v32.m128i_i32 = this->epicenter_radius[this->m_iPulseCount];
    LODWORD(v29) = _mm_cvtsi128_si32(v32);
    v33 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleFoWProperties(v33, Particle, 0, -1, *&v29);
    v34 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v34, Particle);
    ++this->m_iPulseCount;
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
}


// CDOTA_Modifier_SandKing_Epicenter_Slow::~CDOTA_Modifier_SandKing_Epicenter_Slow  (line 1156, @0x0000000002a10910, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_SandKing_Epicenter_Slow::~CDOTA_Modifier_SandKing_Epicenter_Slow(
        CDOTA_Modifier_SandKing_Epicenter_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_438BA90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_SandKing_Epicenter_Slow::~CDOTA_Modifier_SandKing_Epicenter_Slow  (line 1156, @0x0000000002a10930, libserver.so)  // inlines: ~CDOTA_Modifier_SandKing_Epicenter_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_SandKing_Epicenter_Slow::~CDOTA_Modifier_SandKing_Epicenter_Slow(
        CDOTA_Modifier_SandKing_Epicenter_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_438BA90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_SandKing_Epicenter_Slow::IsDebuff  (line 1161, @0x0000000002a0c5f0, libserver.so)
bool __fastcall CDOTA_Modifier_SandKing_Epicenter_Slow::IsDebuff(CDOTA_Modifier_SandKing_Epicenter_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_SandKing_Epicenter_Slow::OnCreated  (line 1179, @0x00000000029f7590, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "epicenter_slow", "epicenter_slow_as"
void __fastcall CDOTA_Modifier_SandKing_Epicenter_Slow::OnCreated(
        CDOTA_Modifier_SandKing_Epicenter_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->epicenter_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "epicenter_slow", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->epicenter_slow_as = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "epicenter_slow_as", -1, 0);
      return;
    }
  }
  else
  {
    this->epicenter_slow = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->epicenter_slow_as = 0;
}


// CDOTA_Modifier_SandKing_Epicenter_Slow::DeclareFunctions  (line 1187, @0x00000000029b6560, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_SandKing_Epicenter_Slow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_SandKing_Epicenter_Slow::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_SandKing_Epicenter_Slow::DeclareFunctions(
        CDOTA_Modifier_SandKing_Epicenter_Slow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_SandKing_Epicenter_Slow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_SandKing_Epicenter_Slow::GetModifierAttackSpeedBonus_Constant;
}


// CDOTA_Modifier_SandKing_Epicenter_Slow::GetModifierMoveSpeedBonus_Percentage  (line 1195, @0x00000000029b65a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_SandKing_Epicenter_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_SandKing_Epicenter_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->epicenter_slow;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_SandKing_Epicenter_Slow::GetModifierAttackSpeedBonus_Constant  (line 1204, @0x00000000029b65c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_SandKing_Epicenter_Slow::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_SandKing_Epicenter_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->epicenter_slow_as;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


