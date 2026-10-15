// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_ogre_magi.cpp:25
class CDOTA_Unit_Hero_Ogre_Magi : public CDOTA_BaseNPC_Hero {
public:

private:

	bool m_bHadScepter;  // +0x16ec
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
	CDOTA_Unit_Hero_Ogre_Magi(CDOTA_Unit_Hero_Ogre_Magi &);
	CDOTA_Unit_Hero_Ogre_Magi(CDOTA_Unit_Hero_Ogre_Magi &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Unit_Hero_Ogre_Magi();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void OnItemEquipped(CDOTA_Item *);
	virtual ~CDOTA_Unit_Hero_Ogre_Magi();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[479] OnItemEquipped
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_ogre_magi.cpp:105
class C_CDOTA_Unit_Hero_Ogre_Magi_MapInstall {
	C_CDOTA_Unit_Hero_Ogre_Magi_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_ogre_magi.cpp:118
class CDOTA_Ability_Ogre_Magi_Multicast : public CDOTABaseAbility {
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
	CDOTA_Ability_Ogre_Magi_Multicast(CDOTA_Ability_Ogre_Magi_Multicast &);
	CDOTA_Ability_Ogre_Magi_Multicast(CDOTA_Ability_Ogre_Magi_Multicast &);
	CDOTA_Ability_Ogre_Magi_Multicast();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	int GetAdditionalCastCount();
	virtual bool IsHiddenWhenStolen();
	virtual ~CDOTA_Ability_Ogre_Magi_Multicast();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[306] IsHiddenWhenStolen
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_ogre_magi.cpp:129
class C_CDOTA_Ability_Ogre_Magi_Multicast_MapInstall {
	C_CDOTA_Ability_Ogre_Magi_Multicast_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_ogre_magi.cpp:199
class CDOTA_Ability_Ogre_Magi_Fireblast : public CDOTABaseAbility {
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

	int m_nMostRecentMulticastCount;  // +0x390
	CDOTA_Ability_Ogre_Magi_Fireblast(CDOTA_Ability_Ogre_Magi_Fireblast &);
	CDOTA_Ability_Ogre_Magi_Fireblast(CDOTA_Ability_Ogre_Magi_Fireblast &);
	CDOTA_Ability_Ogre_Magi_Fireblast();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual float GetCooldown(int);
	virtual int GetManaCost(int);
	virtual void ModifyOrAppendCriteria(CResponseCriteriaSet &);
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Ogre_Magi_Fireblast();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[242] GetCooldown
	// vtable[273] GetManaCost
	// vtable[159] ModifyOrAppendCriteria
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_ogre_magi.cpp:221
class C_CDOTA_Ability_Ogre_Magi_Fireblast_MapInstall {
	C_CDOTA_Ability_Ogre_Magi_Fireblast_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_ogre_magi.cpp:373
class CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast : public CDOTA_Ability_Ogre_Magi_Fireblast {
public:

private:

	int m_nMostRecentMulticastCount;  // +0x394
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
	CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast(CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast &);
	CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast(CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast &);
	CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void OnSpellStart();
	virtual float GetCooldown(int);
	virtual int GetManaCost(int);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[266] OnSpellStart
	// vtable[242] GetCooldown
	// vtable[273] GetManaCost
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_ogre_magi.cpp:408
class C_CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast_MapInstall {
	C_CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_ogre_magi.cpp:518
class CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast : public CDOTA_Buff {
public:

private:

	float multicast_delay;  // +0xbac
	int m_nMultiCastCount;  // +0xbb0
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual bool ShouldSendToClients();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool RemoveOnDeath();
	CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast();
	virtual ~CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast();

	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[8] ShouldSendToClients
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[54] RemoveOnDeath
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_ogre_magi.cpp:641
class CDOTA_Ability_Ogre_Magi_Ignite : public CDOTABaseAbility {
public:

private:

	int m_nFXIndex;  // +0x390
	int m_nMostRecentMulticastCount;  // +0x394
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
	CDOTA_Ability_Ogre_Magi_Ignite(CDOTA_Ability_Ogre_Magi_Ignite &);
	CDOTA_Ability_Ogre_Magi_Ignite(CDOTA_Ability_Ogre_Magi_Ignite &);
	CDOTA_Ability_Ogre_Magi_Ignite();
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
	virtual void OnSpellStart();
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual float GetAOERadius();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Ogre_Magi_Ignite();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[266] OnSpellStart
	// vtable[226] GetCastRange
	// vtable[289] OnProjectileHit
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[333] GetAOERadius
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_ogre_magi.cpp:688
class C_CDOTA_Ability_Ogre_Magi_Ignite_MapInstall {
	C_CDOTA_Ability_Ogre_Magi_Ignite_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_ogre_magi.cpp:843
class CDOTA_Modifier_Ogre_Magi_Ignite : public CDOTA_Buff {
public:

private:

	int slow_movement_speed_pct;  // +0xba8
	int burn_damage;  // +0xbac
	CDOTA_Modifier_Ogre_Magi_Ignite();
	virtual bool IsDebuff();
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Ogre_Magi_Ignite();

	// vtable[12] IsDebuff
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeedBonus_Percentage
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_ogre_magi.cpp:916
class CDOTA_Modifier_Ogre_Magi_Ignite_Multicast : public CDOTA_Buff {
public:

private:

	float multicast_delay;  // +0xbac
	int m_nMultiCastCount;  // +0xbb0
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual bool ShouldSendToClients();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool RemoveOnDeath();
	CDOTA_Modifier_Ogre_Magi_Ignite_Multicast();
	virtual ~CDOTA_Modifier_Ogre_Magi_Ignite_Multicast();

	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[8] ShouldSendToClients
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[54] RemoveOnDeath
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_ogre_magi.cpp:1043
class CDOTA_Ability_Ogre_Magi_Bloodlust : public CDOTABaseAbility {
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
	CDOTA_Ability_Ogre_Magi_Bloodlust(CDOTA_Ability_Ogre_Magi_Bloodlust &);
	CDOTA_Ability_Ogre_Magi_Bloodlust(CDOTA_Ability_Ogre_Magi_Bloodlust &);
	CDOTA_Ability_Ogre_Magi_Bloodlust();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual bool OnAbilityPhaseStart();
	virtual void OnSpellStart();
	virtual float GetCooldown(int);
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual ~CDOTA_Ability_Ogre_Magi_Bloodlust();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[264] OnAbilityPhaseStart
	// vtable[266] OnSpellStart
	// vtable[242] GetCooldown
	// vtable[304] GetAssociatedSecondaryAbilities
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_ogre_magi.cpp:1062
class C_CDOTA_Ability_Ogre_Magi_Bloodlust_MapInstall {
	C_CDOTA_Ability_Ogre_Magi_Bloodlust_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_ogre_magi.cpp:1171
class CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast : public CDOTA_Buff {
public:

	CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual bool ShouldSendToClients();
	virtual void OnCreated(KeyValues *);
	virtual int GetAttributes();
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[8] ShouldSendToClients
	// vtable[57] OnCreated
	// vtable[7] GetAttributes
	// vtable[56] OnIntervalThink
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_ogre_magi.cpp:1259
class CDOTA_Modifier_Ogre_Magi_Bloodlust : public CDOTA_Buff {
public:

private:

	int bonus_attack_speed;  // +0xba8
	int bonus_movement_speed;  // +0xbac
	float modelscale;  // +0xbb0
	CDOTA_Modifier_Ogre_Magi_Bloodlust();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual const char * GetEffectName();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t ModelScale(const CModifierParams &);
	virtual ~CDOTA_Modifier_Ogre_Magi_Bloodlust();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[67] GetEffectName
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Ogre_Magi::~CDOTA_Unit_Hero_Ogre_Magi  (line 25, @0x0000000002c9a4f0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Ogre_Magi::~CDOTA_Unit_Hero_Ogre_Magi(CDOTA_Unit_Hero_Ogre_Magi *const this)
{
  this->_vptr_IHandleEntity = &off_45F6B70;
  this->_vptr_INextBotEventResponder = &off_45F7B50;
  this->_vptr_CObstructionObject = &off_45F7E80;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Ogre_Magi::~CDOTA_Unit_Hero_Ogre_Magi  (line 25, @0x0000000002c9a530, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Ogre_Magi
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Ogre_Magi::~CDOTA_Unit_Hero_Ogre_Magi(CDOTA_Unit_Hero_Ogre_Magi *const this)
{
  this->_vptr_IHandleEntity = &off_45F6B70;
  this->_vptr_INextBotEventResponder = &off_45F7B50;
  this->_vptr_CObstructionObject = &off_45F7E80;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Ogre_Magi::Schema_DynamicBinding  (line 27, @0x0000000002c8bd90, libserver.so)
// globals: CDOTA_Unit_Hero_Ogre_Magi::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Ogre_Magi::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Ogre_Magi *const this)
{
  return CDOTA_Unit_Hero_Ogre_Magi::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Ogre_Magi::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 27, @0x0000000002c8bdc0, libserver.so)
// globals: CDOTA_Unit_Hero_Ogre_Magi::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Ogre_Magi::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Ogre_Magi::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Ogre_Magi::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Ogre_Magi::CEntityInstanceEntityClass::DestructInstance  (line 27, @0x0000000002c8bdd0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Ogre_Magi>
void __fastcall CDOTA_Unit_Hero_Ogre_Magi::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Ogre_Magi::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Ogre_Magi::CEntityInstanceEntityClass::FreeInstance  (line 27, @0x0000000002c8bdf0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Ogre_Magi::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Ogre_Magi::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Ogre_Magi::CEntityInstanceEntityClass::CanAllocate  (line 27, @0x0000000002c8be10, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Ogre_Magi::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Ogre_Magi::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Ogre_Magi::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 27, @0x0000000002c8be20, libserver.so)
// globals: CDOTA_Unit_Hero_Ogre_Magi::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Ogre_Magi::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Ogre_Magi::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Ogre_Magi::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Ogre_Magi::CEntityInstanceEntityClass::AllocateInstance  (line 27, @0x0000000002c90aa0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Ogre_Magi::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Ogre_Magi::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Ogre_Magi::CEntityInstanceEntityClass::ConstructInstance  (line 27, @0x0000000002c94230, libserver.so)  // inlines: CDOTA_Unit_Hero_Ogre_Magi, Construct<CDOTA_Unit_Hero_Ogre_Magi>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Ogre_Magi::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Ogre_Magi::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_45F6B70;
    *(p + 236) = &off_45F7B50;
    *(p + 257) = &off_45F7E80;
  }
  return p;
}


// CDOTA_Unit_Hero_Ogre_Magi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 27, @0x0000000002ca3490, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Ogre_Magi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Ogre_Magi::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Ogre_Magi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 27, @0x0000000002ca3a80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Ogre_Magi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Ogre_Magi::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Ogre_Magi::GetEntityClassInternal  (line 27, @0x0000000002cbcf00, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "npc_dota_hero_ogre_magi", "CDOTA_Unit_Hero_Ogre_Magi"
// globals: `guard variable for'CDOTA_Unit_Hero_Ogre_Magi::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Ogre_MagiClass, CDOTA_Unit_Hero_Ogre_Magi::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Ogre_MagiClass, __dso_handle, CDOTA_Unit_Hero_Ogre_Magi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Ogre_Magi::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Ogre_MagiClassInfo, CDOTA_Unit_Hero_Ogre_Magi::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Ogre_MagiClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Ogre_Magi::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Ogre_Magi::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Ogre_MagiClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Ogre_Magi::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Ogre_MagiClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Ogre_Magi::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Ogre_MagiClass);
    CDOTA_Unit_Hero_Ogre_Magi::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Ogre_MagiClass._vptr_CEntityClass = off_45F6AF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Ogre_Magi::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Ogre_MagiClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Ogre_Magi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Ogre_Magi::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Ogre_MagiClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_Ogre_MagiClass != 0 )
    return &CDOTA_Unit_Hero_Ogre_Magi::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Ogre_MagiClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Ogre_Magi::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Ogre_MagiClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Ogre_Magi::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Ogre_MagiClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Ogre_Magi::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Ogre_MagiClassInfo,
      "CDOTA_Unit_Hero_Ogre_Magi",
      "npc_dota_hero_ogre_magi",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Ogre_Magi::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Ogre_MagiClassInfo);
  }
  CDOTA_Unit_Hero_Ogre_Magi::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Ogre_MagiClass.m_pClassInfo = &CDOTA_Unit_Hero_Ogre_Magi::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Ogre_MagiClassInfo;
  CDOTA_Unit_Hero_Ogre_Magi::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Ogre_MagiClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Ogre_Magi::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Ogre_MagiClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_Ogre_MagiClass = &CDOTA_Unit_Hero_Ogre_Magi::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Ogre_MagiClass;
  CDOTA_Unit_Hero_Ogre_Magi::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Ogre_MagiClassInfo.m_pClass = &CDOTA_Unit_Hero_Ogre_Magi::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Ogre_MagiClass;
  CDOTA_Unit_Hero_Ogre_Magi::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Ogre_MagiClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_Ogre_MagiClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Ogre_Magi::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Ogre_MagiClass;
}


// CDOTA_Unit_Hero_Ogre_Magi::Spawn  (line 55, @0x0000000002c1e7e0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Spawn
void __fastcall CDOTA_Unit_Hero_Ogre_Magi::Spawn(
        CDOTA_Unit_Hero_Ogre_Magi *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
  this->m_bHadScepter = 0;
}


// CDOTA_Unit_Hero_Ogre_Magi::OnItemEquipped  (line 62, @0x0000000002c2b9c0, libserver.so)  // inlines: FStrEq, GetAbilityName, GetPlayerOwnerID, NetworkStateChanged, Set, SetDroppable, SetSellable, _V_strcmp, operator=<bool>
// calls: CDOTA_BaseNPC::OnItemEquipped, CDOTA_Item::ExpireSellback, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::SetHidden, CDOTABaseAbility::UpgradeAbility
// strings: "item_ultimate_scepter", "ogre_magi_unrefined_fireblast"
void __fastcall CDOTA_Unit_Hero_Ogre_Magi::OnItemEquipped(CDOTA_Unit_Hero_Ogre_Magi *const this, CDOTA_Item *pItem)
{
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rsi
  int m_Value; // r13d
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v8; // rbx

  CDOTA_BaseNPC::OnItemEquipped(this, pItem);
  if ( pItem != 0 && !this->m_bHadScepter )
  {
    m_pAbilityData = pItem->m_pAbilityData;
    if ( m_pAbilityData != 0 )
    {
      m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
      if ( m_pAbilityData->m_pszAbilityName != 0
        && (m_pszAbilityName == "item_ultimate_scepter" || strcmp(m_pszAbilityName, "item_ultimate_scepter") == 0) )
      {
        m_Value = pItem->m_iPlayerOwnerID.m_Value;
        if ( (*(this->_vptr_IHandleEntity + 414))(this) == m_Value )
        {
          if ( pItem->m_bDroppable.m_Value )
          {
            (*(pItem->_vptr_IHandleEntity + 22))(pItem, 928, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            pItem->m_bDroppable.m_Value = 0;
          }
          if ( pItem->m_bSellable.m_Value )
          {
            (*(pItem->_vptr_IHandleEntity + 22))(pItem, 930, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            pItem->m_bSellable.m_Value = 0;
          }
          CDOTA_Item::ExpireSellback(pItem);
          AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "ogre_magi_unrefined_fireblast", 0);
          v8 = AbilityByName;
          if ( AbilityByName != 0 )
          {
            CDOTABaseAbility::SetHidden(AbilityByName, 0);
            CDOTABaseAbility::UpgradeAbility(v8, 0);
          }
          this->m_bHadScepter = 1;
        }
      }
    }
  }
}


// CDOTA_Unit_Hero_Ogre_Magi::YouForgotToImplementOrDeclareServerClass  (line 105, @0x0000000002c1e410, libserver.so)
int __fastcall CDOTA_Unit_Hero_Ogre_Magi::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Ogre_Magi *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Ogre_Magi::GetServerClass  (line 105, @0x0000000002c34c30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Ogre_Magi::GetServerClass(CDOTA_Unit_Hero_Ogre_Magi *const this)
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


// CDOTA_Ability_Ogre_Magi_Multicast::~CDOTA_Ability_Ogre_Magi_Multicast  (line 118, @0x0000000002c993f0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Ogre_Magi_Multicast::~CDOTA_Ability_Ogre_Magi_Multicast(
        CDOTA_Ability_Ogre_Magi_Multicast *const this)
{
  this->_vptr_IHandleEntity = &off_45F7F50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Ogre_Magi_Multicast::~CDOTA_Ability_Ogre_Magi_Multicast  (line 118, @0x0000000002c99410, libserver.so)  // inlines: ~CDOTA_Ability_Ogre_Magi_Multicast
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Ogre_Magi_Multicast::~CDOTA_Ability_Ogre_Magi_Multicast(
        CDOTA_Ability_Ogre_Magi_Multicast *const this)
{
  this->_vptr_IHandleEntity = &off_45F7F50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Ogre_Magi_Multicast::Schema_DynamicBinding  (line 120, @0x0000000002c8be30, libserver.so)
// globals: CDOTA_Ability_Ogre_Magi_Multicast::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Ogre_Magi_Multicast::Schema_DynamicBinding(
        const CDOTA_Ability_Ogre_Magi_Multicast *const this)
{
  return CDOTA_Ability_Ogre_Magi_Multicast::s_pSchemaBinding;
}


// CDOTA_Ability_Ogre_Magi_Multicast::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 120, @0x0000000002c8be40, libserver.so)
// globals: CDOTA_Ability_Ogre_Magi_Multicast::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Ogre_Magi_Multicast::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Ogre_Magi_Multicast::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Ogre_Magi_Multicast::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Ogre_Magi_Multicast::CEntityInstanceEntityClass::DestructInstance  (line 120, @0x0000000002c8be50, libserver.so)  // inlines: Destruct<CDOTA_Ability_Ogre_Magi_Multicast>
void __fastcall CDOTA_Ability_Ogre_Magi_Multicast::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Ogre_Magi_Multicast::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Ogre_Magi_Multicast::CEntityInstanceEntityClass::FreeInstance  (line 120, @0x0000000002c8be70, libserver.so)
void __fastcall CDOTA_Ability_Ogre_Magi_Multicast::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Ogre_Magi_Multicast::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Ogre_Magi_Multicast::CEntityInstanceEntityClass::CanAllocate  (line 120, @0x0000000002c8be90, libserver.so)
bool __fastcall CDOTA_Ability_Ogre_Magi_Multicast::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Ogre_Magi_Multicast::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Ogre_Magi_Multicast::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 120, @0x0000000002c8bea0, libserver.so)
// globals: CDOTA_Ability_Ogre_Magi_Multicast::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Ogre_Magi_Multicast::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Ogre_Magi_Multicast::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Ogre_Magi_Multicast::s_pSchemaBinding;
}


// CDOTA_Ability_Ogre_Magi_Multicast::CEntityInstanceEntityClass::AllocateInstance  (line 120, @0x0000000002c90ae0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Ogre_Magi_Multicast::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Ogre_Magi_Multicast::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Ogre_Magi_Multicast::CEntityInstanceEntityClass::ConstructInstance  (line 120, @0x0000000002c953f0, libserver.so)  // inlines: CDOTA_Ability_Ogre_Magi_Multicast, Construct<CDOTA_Ability_Ogre_Magi_Multicast>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Ogre_Magi_Multicast::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Ogre_Magi_Multicast::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45F7F50;
  }
  return p;
}


// CDOTA_Ability_Ogre_Magi_Multicast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 120, @0x0000000002ca3150, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Ogre_Magi_Multicast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Ogre_Magi_Multicast::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Ogre_Magi_Multicast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 120, @0x0000000002ca3170, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Ogre_Magi_Multicast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Ogre_Magi_Multicast::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal  (line 120, @0x0000000002cc3c20, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "ogre_magi_multicast", "CDOTA_Ability_Ogre_Magi_Multicast"
// globals: `guard variable for'CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass, CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Ogre_Magi_Multicast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClassInfo, CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClassInfo
CEntityClass *__cdecl CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass) != 0 )
  {
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_pClassInfo = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_flags = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_pInputs = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_nInputCount = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_pOutputs = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_nOutputCount = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_pGameClass = 0;
    CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass._vptr_CEntityClass = off_45F7ED0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass);
    __cxa_atexit(
      CDOTA_Ability_Ogre_Magi_Multicast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Ogre_Magi_MulticastClass != 0 )
    return &CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass;
  if ( `guard variable for'CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClassInfo,
      "CDOTA_Ability_Ogre_Magi_Multicast",
      "ogre_magi_multicast",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClassInfo);
  }
  CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_pClassInfo = &CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClassInfo;
  CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_pBaseClassInfo = CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Ogre_Magi_MulticastClass = &CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass;
  CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClassInfo.m_pClass = &CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass;
  CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Ogre_Magi_MulticastClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Ogre_Magi_Multicast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_MulticastClass;
}


// CDOTA_Ability_Ogre_Magi_Multicast::IsHiddenWhenStolen  (line 126, @0x0000000002c8beb0, libserver.so)
bool __fastcall CDOTA_Ability_Ogre_Magi_Multicast::IsHiddenWhenStolen(CDOTA_Ability_Ogre_Magi_Multicast *const this)
{
  return 1;
}


// CDOTA_Ability_Ogre_Magi_Multicast::YouForgotToImplementOrDeclareServerClass  (line 129, @0x0000000002c1e420, libserver.so)
int __fastcall CDOTA_Ability_Ogre_Magi_Multicast::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Ogre_Magi_Multicast *const this)
{
  return 0;
}


// CDOTA_Ability_Ogre_Magi_Multicast::GetServerClass  (line 129, @0x0000000002c34bb0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Ogre_Magi_Multicast::GetServerClass(
        CDOTA_Ability_Ogre_Magi_Multicast *const this)
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


// CDOTA_Ability_Ogre_Magi_Multicast::GetAdditionalCastCount  (line 140, @0x0000000002c56c50, libserver.so)  // inlines: GetBool, GetInt
// calls: CDOTABaseAbility::GetCaster, RandomFloat, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// callers: CDOTA_Ability_Ogre_Magi_Multicast::GetAdditionalCastCount, CDOTA_Ability_Ogre_Magi_Fireblast::GetAbilityDamageToTargetOverInterval, CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetAbilityDamageToTargetOverInterval, CDOTA_Ability_Ogre_Magi_Fireblast::OnSpellStart, CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::OnSpellStart, CDOTA_Ability_Ogre_Magi_Ignite::OnSpellStart, CDOTA_Ability_Ogre_Magi_Bloodlust::OnSpellStart
// strings: "multicast_4_times", "multicast_3_times", "multicast_2_times"
int __fastcall CDOTA_Ability_Ogre_Magi_Multicast::GetAdditionalCastCount(CDOTA_Ability_Ogre_Magi_Multicast *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  __int64 v3; // rdx
  float v5; // xmm1_4
  int EffectiveLevel; // eax
  int v7; // eax
  __m128i v8; // xmm0
  float v9; // r14d
  int v10; // eax
  float LevelSpecialValue; // xmm0_4
  float flRand; // [rsp+8h] [rbp-18h]
  float flThirdMulti; // [rsp+Ch] [rbp-14h]

  Caster = CDOTABaseAbility::GetCaster(this);
  LODWORD(v3) = 0;
  if ( (Caster->m_nUnitState64.m_Value & 0x10000000) == 0 )
  {
    v5 = RandomFloat(0.0, 1.0);
    if ( force_multicast.m_pParent->m_Value.m_nValue != 0 )
      v5 = 0.0;
    flRand = v5;
    EffectiveLevel = CDOTABaseAbility::GetEffectiveLevel(this);
    flThirdMulti = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "multicast_4_times", EffectiveLevel, 0);
    v7 = CDOTABaseAbility::GetEffectiveLevel(this);
    *v8.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "multicast_3_times", v7, 0);
    v9 = COERCE_FLOAT(_mm_cvtsi128_si32(v8));
    v10 = CDOTABaseAbility::GetEffectiveLevel(this);
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "multicast_2_times", v10, 0);
    LODWORD(v3) = 3;
    if ( flThirdMulti <= flRand )
    {
      LOBYTE(v3) = 2;
      if ( v9 <= flRand )
        return LevelSpecialValue > flRand;
    }
  }
  return v3;
}


// CDOTA_Ability_Ogre_Magi_Multicast::GetAdditionalCastCount  (line 140, @0x0000000002c56d40, libserver.so)
// calls: CDOTA_Ability_Ogre_Magi_Multicast::GetAdditionalCastCount
int __fastcall CDOTA_Ability_Ogre_Magi_Multicast::GetAdditionalCastCount(CDOTA_Ability_Ogre_Magi_Multicast *const this)
{
  if ( this->m_bStolen.m_Value )
    return 0;
  else
    return CDOTA_Ability_Ogre_Magi_Multicast::GetAdditionalCastCount(this);
}


// CDOTA_Ability_Ogre_Magi_Fireblast::~CDOTA_Ability_Ogre_Magi_Fireblast  (line 199, @0x0000000002c99440, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Ogre_Magi_Fireblast::~CDOTA_Ability_Ogre_Magi_Fireblast(
        CDOTA_Ability_Ogre_Magi_Fireblast *const this)
{
  this->_vptr_IHandleEntity = &off_45F8A50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Ogre_Magi_Fireblast::~CDOTA_Ability_Ogre_Magi_Fireblast  (line 199, @0x0000000002c99460, libserver.so)  // inlines: ~CDOTA_Ability_Ogre_Magi_Fireblast
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Ogre_Magi_Fireblast::~CDOTA_Ability_Ogre_Magi_Fireblast(
        CDOTA_Ability_Ogre_Magi_Fireblast *const this)
{
  this->_vptr_IHandleEntity = &off_45F8A50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Ogre_Magi_Fireblast::Schema_DynamicBinding  (line 201, @0x0000000002c8bec0, libserver.so)
// globals: CDOTA_Ability_Ogre_Magi_Fireblast::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Ogre_Magi_Fireblast::Schema_DynamicBinding(
        const CDOTA_Ability_Ogre_Magi_Fireblast *const this)
{
  return CDOTA_Ability_Ogre_Magi_Fireblast::s_pSchemaBinding;
}


// CDOTA_Ability_Ogre_Magi_Fireblast::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 201, @0x0000000002c8bed0, libserver.so)
// globals: CDOTA_Ability_Ogre_Magi_Fireblast::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Ogre_Magi_Fireblast::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Ogre_Magi_Fireblast::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Ogre_Magi_Fireblast::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Ogre_Magi_Fireblast::CEntityInstanceEntityClass::DestructInstance  (line 201, @0x0000000002c8bee0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Ogre_Magi_Fireblast>
void __fastcall CDOTA_Ability_Ogre_Magi_Fireblast::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Ogre_Magi_Fireblast::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Ogre_Magi_Fireblast::CEntityInstanceEntityClass::FreeInstance  (line 201, @0x0000000002c8bf00, libserver.so)
void __fastcall CDOTA_Ability_Ogre_Magi_Fireblast::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Ogre_Magi_Fireblast::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Ogre_Magi_Fireblast::CEntityInstanceEntityClass::CanAllocate  (line 201, @0x0000000002c8bf20, libserver.so)
bool __fastcall CDOTA_Ability_Ogre_Magi_Fireblast::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Ogre_Magi_Fireblast::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Ogre_Magi_Fireblast::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 201, @0x0000000002c8bf30, libserver.so)
// globals: CDOTA_Ability_Ogre_Magi_Fireblast::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Ogre_Magi_Fireblast::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Ogre_Magi_Fireblast::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Ogre_Magi_Fireblast::s_pSchemaBinding;
}


// CDOTA_Ability_Ogre_Magi_Fireblast::CEntityInstanceEntityClass::AllocateInstance  (line 201, @0x0000000002c90b20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Ogre_Magi_Fireblast::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Ogre_Magi_Fireblast::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Ogre_Magi_Fireblast::CEntityInstanceEntityClass::ConstructInstance  (line 201, @0x0000000002c95420, libserver.so)  // inlines: CDOTA_Ability_Ogre_Magi_Fireblast, Construct<CDOTA_Ability_Ogre_Magi_Fireblast>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Ogre_Magi_Fireblast::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Ogre_Magi_Fireblast::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45F8A50;
  }
  return p;
}


// CDOTA_Ability_Ogre_Magi_Fireblast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 201, @0x0000000002ca31a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Ogre_Magi_Fireblast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Ogre_Magi_Fireblast::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Ogre_Magi_Fireblast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 201, @0x0000000002ca31c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Ogre_Magi_Fireblast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Ogre_Magi_Fireblast::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInfo  (line 201, @0x0000000002cb5860, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release
// callers: CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal
// strings: "CDOTA_Ability_Ogre_Magi_Fireblast", "dota_base_ability", "CDOTABaseAbility", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClassInfo, CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClassInfo, `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo, CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo
CEntityClassInfo *__cdecl CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInfo()
{
  if ( `guard variable for'CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClassInfo != 0 )
    return &CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClassInfo) == 0 )
    return &CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClassInfo;
  if ( `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo) != 0 )
    {
      if ( `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo) != 0 )
      {
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo,
          "CGameEntity",
          0,
          0,
          &g_EntityRootClassInfo);
        __cxa_guard_release(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo,
        "CBaseEntity",
        0,
        0,
        &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo,
      "CDOTABaseAbility",
      "dota_base_ability",
      0,
      &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClassInfo,
    "CDOTA_Ability_Ogre_Magi_Fireblast",
    "ogre_magi_fireblast",
    0,
    &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClassInfo);
  return &CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClassInfo;
}


// CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal  (line 201, @0x0000000002cbe2b0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "CDOTA_Ability_Ogre_Magi_Fireblast"
// globals: `guard variable for'CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass, CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Ogre_Magi_Fireblast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClassInfo, CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClassInfo
CEntityClass *__cdecl CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass) != 0 )
  {
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_pClassInfo = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_flags = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_pInputs = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_nInputCount = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_pOutputs = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_nOutputCount = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_pGameClass = 0;
    CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass._vptr_CEntityClass = off_45F89D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass);
    __cxa_atexit(
      CDOTA_Ability_Ogre_Magi_Fireblast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Ogre_Magi_FireblastClass != 0 )
    return &CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass;
  if ( `guard variable for'CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClassInfo,
      "CDOTA_Ability_Ogre_Magi_Fireblast",
      "ogre_magi_fireblast",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClassInfo);
  }
  CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_pClassInfo = &CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClassInfo;
  CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_pBaseClassInfo = CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Ogre_Magi_FireblastClass = &CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass;
  CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClassInfo.m_pClass = &CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass;
  CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Ogre_Magi_FireblastClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_FireblastClass;
}


// CDOTA_Ability_Ogre_Magi_Fireblast::GetAssociatedSecondaryAbilities  (line 212, @0x0000000002c8bf40, libserver.so)
// strings: "ogre_magi_multicast"
const char *__fastcall CDOTA_Ability_Ogre_Magi_Fireblast::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Ogre_Magi_Fireblast *const this)
{
  return "ogre_magi_multicast";
}


// CDOTA_Ability_Ogre_Magi_Fireblast::YouForgotToImplementOrDeclareServerClass  (line 221, @0x0000000002c1e430, libserver.so)
int __fastcall CDOTA_Ability_Ogre_Magi_Fireblast::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Ogre_Magi_Fireblast *const this)
{
  return 0;
}


// CDOTA_Ability_Ogre_Magi_Fireblast::GetServerClass  (line 221, @0x0000000002c34cb0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Ogre_Magi_Fireblast::GetServerClass(
        CDOTA_Ability_Ogre_Magi_Fireblast *const this)
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


// CDOTA_Ability_Ogre_Magi_Fireblast::GetCooldown  (line 230, @0x0000000002c56ec0, libserver.so)
// calls: CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "ogre_magi_multicast", "fireblast_cooldown"
float __fastcall CDOTA_Ability_Ogre_Magi_Fireblast::GetCooldown(
        CDOTA_Ability_Ogre_Magi_Fireblast *const this,
        int iLevel)
{
  __m128i v3; // xmm0
  unsigned int v4; // r14d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v7; // rbx
  float LevelSpecialValue; // xmm0_4
  __m128i v9; // xmm1

  *v3.m128i_i32 = CDOTABaseAbility::GetCooldown(this, iLevel);
  v4 = _mm_cvtsi128_si32(v3);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "ogre_magi_multicast", 0);
  v7 = AbilityByName;
  if ( AbilityByName != 0 && CDOTABaseAbility::GetEffectiveLevel(AbilityByName) >= 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "fireblast_cooldown", -1, 0);
    v9 = _mm_cvtsi32_si128(v4);
    *v9.m128i_i32 = *v9.m128i_i32 - LevelSpecialValue;
    v4 = _mm_cvtsi128_si32(v9);
  }
  return *&v4;
}


// CDOTA_Ability_Ogre_Magi_Fireblast::GetManaCost  (line 245, @0x0000000002c64b60, libserver.so)
// calls: CDOTABaseAbility::GetManaCost, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "ogre_magi_multicast", "fireblast_mana_cost"
int __fastcall CDOTA_Ability_Ogre_Magi_Fireblast::GetManaCost(
        CDOTA_Ability_Ogre_Magi_Fireblast *const this,
        int iLevel)
{
  int ManaCost; // ebx
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v6; // r12

  ManaCost = CDOTABaseAbility::GetManaCost(this, iLevel);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "ogre_magi_multicast", 0);
  v6 = AbilityByName;
  if ( AbilityByName != 0 && CDOTABaseAbility::GetEffectiveLevel(AbilityByName) >= 0 )
    ManaCost += CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "fireblast_mana_cost", -1, 0);
  return ManaCost;
}


// CDOTA_Ability_Ogre_Magi_Fireblast::OnSpellStart  (line 260, @0x0000000002c56f30, libserver.so)  // inlines: GetAdditionalCastCount, InState, IsInvulnerable, SpeakConcept, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, Vector
// calls: CDOTABaseAbility::GetCaster, DOTA_EmitSound, CDOTABaseAbility::GetCursorTarget, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::TriggerSpellAbsorb, ApplyDamage, CBaseEntity::GetAbsOrigin, KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<float> (26 total)
// strings: "Hero_OgreMagi.Fireblast.Cast", "particles/units/heroes/hero_ogre_magi/ogre_magi_fireblast_cast.vpcf", "attach_attack1", "Hero_OgreMagi.Fireblast.Target", "particles/units/heroes/hero_ogre_magi/ogre_magi_fireblast.vpcf", "attach_hitloc" (13 total)
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Ogre_Magi_Fireblast::OnSpellStart(CDOTA_Ability_Ogre_Magi_Fireblast *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v4; // r12
  CDOTA_BaseNPC *v5; // r12
  CDOTA_ParticleManager *v6; // rax
  CDOTA_BaseNPC *v7; // r13
  CDOTA_ParticleManager *v8; // rax
  CDOTA_ParticleManager *v9; // rax
  CDOTA_BaseNPC *v10; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v12; // r14
  CDOTA_ParticleManager *v13; // rax
  __int64 v14; // r15
  CDOTA_ParticleManager *v15; // rax
  __int64 v16; // rax
  int v17; // r13d
  CDOTA_BaseNPC *v18; // rax
  CDOTA_ParticleManager *v19; // rax
  int Particle; // r13d
  const Vector *AbsOrigin; // r14
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  float v25; // xmm1_4
  CDOTA_BaseNPC *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  CDOTA_Ability_Ogre_Magi_Multicast *AbilityByName; // rax
  int AdditionalCastCount; // eax
  int v30; // r14d
  CDOTA_BaseNPC *v31; // r15
  CDOTA_ParticleManager *v32; // rax
  CDOTA_ParticleManager *v33; // rax
  CDOTA_ParticleManager *v34; // rax
  float v35; // xmm1_4
  CDOTA_BaseNPC *v36; // r15
  CDOTA_BaseNPC *v37; // rax
  float v38; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_BaseNPC_Hero *v40; // r13
  CDOTA_BaseNPC *v41; // rax
  CDOTA_BaseNPC_Hero *v42; // rdi
  vec_t vecFallbackPosition; // [rsp+1Ch] [rbp-94h]
  CResponseCriteriaSet criteria; // [rsp+20h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v46; // [rsp+78h] [rbp-38h]
  Vector v47; // 0:xmm0_8.8,8:xmm1_4.4

  v46 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_OgreMagi.Fireblast.Cast", Caster);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v4 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    v10 = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    LODWORD(v10) = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/units/heroes/hero_ogre_magi/ogre_magi_fireblast_cast.vpcf",
                     2,
                     v10,
                     0,
                     0);
    v12 = CDOTABaseAbility::GetCaster(this);
    v13 = GetParticleManager();
    v14 = *&vec3_invalid.x;
    vecFallbackPosition = vec3_invalid.z;
    CDOTA_ParticleManager::SetParticleControlEnt(v13, v10, 0, v12, 5, "attach_attack1", vec3_invalid, 1);
    v15 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v15, v10);
    this->m_nMostRecentMulticastCount = 0;
    if ( LOBYTE(v4[4].m_pfnMoveDone.__pfn) == 0 )
    {
      v16 = *&v4[3].m_vecVelocity.m_Value.x;
      if ( (v16 & 0x100) == 0 && (v16 & 0x200) == 0 && !CDOTA_BaseNPC::TriggerSpellAbsorb(v4, this, 1) )
      {
        v17 = (*(this->_vptr_IHandleEntity + 247))(this);
        v18 = CDOTABaseAbility::GetCaster(this);
        ApplyDamage(v18, v4, this, v17, 2, 0);
        DOTA_EmitSound(10, "Hero_OgreMagi.Fireblast.Target", v4);
        v19 = GetParticleManager();
        Particle = CDOTA_ParticleManager::CreateParticle(
                     v19,
                     "particles/units/heroes/hero_ogre_magi/ogre_magi_fireblast.vpcf",
                     2,
                     v4,
                     0,
                     0);
        AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
        v22 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v22, Particle, 0, v4, 5, "attach_hitloc", *AbsOrigin, 1);
        v23 = GetParticleManager();
        v47.z = vecFallbackPosition;
        *&v47.x = v14;
        CDOTA_ParticleManager::SetParticleControlEnt(v23, Particle, 1, v4, 1, 0, v47, 1);
        v24 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v24, Particle);
        KeyValues::KeyValues(&kv, "modifier_ogre_magi_fireblast");
        CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 0);
        KeyValues::SetFloat(&kv, "duration", v25);
        v26 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v4, v26, this, "modifier_stunned", &kv, 0);
        KeyValues::~KeyValues(&kv);
        v27 = CDOTABaseAbility::GetCaster(this);
        AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v27, "ogre_magi_multicast", 0);
        if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 && !AbilityByName->m_bStolen.m_Value )
        {
          AdditionalCastCount = CDOTA_Ability_Ogre_Magi_Multicast::GetAdditionalCastCount(AbilityByName);
          v30 = AdditionalCastCount;
          if ( AdditionalCastCount > 0 )
          {
            this->m_nMostRecentMulticastCount = AdditionalCastCount;
            v31 = CDOTABaseAbility::GetCaster(this);
            v32 = GetParticleManager();
            criteria._vptr_CResponseCriteriaSet = 0x400000003F800000LL;
            LODWORD(v31) = CDOTA_ParticleManager::CreateParticle(
                             v32,
                             "particles/units/heroes/hero_ogre_magi/ogre_magi_multicast.vpcf",
                             7,
                             v4,
                             0,
                             v31);
            *&criteria.m_Lookup.m_LessFunc = v30;
            v33 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControl(v33, v31, 1, 2.000000473111868, v30);
            v34 = GetParticleManager();
            CDOTA_ParticleManager::ReleaseParticleIndex(v34, v31);
            KeyValues::KeyValues(&kv, "modifier_ogre_magi_fireblast_multicast");
            KeyValues::SetFloat(&kv, "stack_count", v35);
            KeyValues::SetPtr(&kv, "target", v4);
            v36 = CDOTABaseAbility::GetCaster(this);
            v37 = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(v37, v36, this, "modifier_ogre_magi_fireblast_multicast", &kv, 0);
            KeyValues::~KeyValues(&kv);
            CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
            CResponseCriteriaSet::AppendCriteria(&criteria, "multicastcount", 1.0, v38);
            m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
            if ( m_pSpeech != 0 )
              CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 4, 0, 0, 0, 0);
            CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
            if ( v30 > 2 )
            {
              v40 = 0;
              if ( v4->m_bIsDOTANPC
                && (v4[2].m_hEffectEntity.m_Value.m_Index & 1) != 0
                && LOBYTE(v4[4].m_pfnMoveDone.__delta) == 0 )
              {
                v40 = v4;
              }
              v41 = CDOTABaseAbility::GetCaster(this);
              if ( v41 != 0 && (v41->m_iUnitType & 1) != 0 )
                v42 = v41;
              else
                v42 = 0;
              EconEntity_OnOwnerKillEaterEvent(
                v42,
                v40,
                kill_eater_event_t::kKillEaterEventType_OgreMagi_4xFireblasts,
                1,
                INVALID_ITEM_DEF_INDEX);
            }
          }
        }
      }
    }
  }
  else
  {
    v5 = CDOTABaseAbility::GetCaster(this);
    v6 = GetParticleManager();
    LODWORD(v5) = CDOTA_ParticleManager::CreateParticle(
                    v6,
                    "particles/units/heroes/hero_ogre_magi/ogre_magi_fireblast_cast.vpcf",
                    2,
                    v5,
                    0,
                    0);
    v7 = CDOTABaseAbility::GetCaster(this);
    v8 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v8, v5, 0, v7, 5, "attach_attack1", vec3_invalid, 1);
    v9 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v9, v5);
    this->m_nMostRecentMulticastCount = 0;
  }
}


// CDOTA_Ability_Ogre_Magi_Fireblast::ModifyOrAppendCriteria  (line 331, @0x0000000002c22440, libserver.so)
// calls: CBaseEntity::ModifyOrAppendCriteria, CResponseCriteriaSet::AppendCriteria
// strings: "multicastcount"
void __fastcall CDOTA_Ability_Ogre_Magi_Fireblast::ModifyOrAppendCriteria(
        CDOTA_Ability_Ogre_Magi_Fireblast *const this,
        CResponseCriteriaSet *const set)
{
  float v3; // xmm2_4

  CBaseEntity::ModifyOrAppendCriteria(this, set);
  CResponseCriteriaSet::AppendCriteria(set, "multicastcount", 1.0, v3);
}


// CDOTA_Ability_Ogre_Magi_Fireblast::GetAbilityDamageToTargetOverInterval  (line 342, @0x0000000002c56d60, libserver.so)  // inlines: GetAdditionalCastCount
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::GetArmorReductionForDamageType, CDOTA_Ability_Ogre_Magi_Multicast::GetAdditionalCastCount
// strings: "ogre_magi_multicast"
__int64 __fastcall CDOTA_Ability_Ogre_Magi_Fireblast::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Ogre_Magi_Fireblast *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Ability_Ogre_Magi_Multicast *AbilityByName; // rax
  int AdditionalCastCount; // r13d
  int v10; // ebx

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "ogre_magi_multicast", 0);
    if ( AbilityByName != 0 )
    {
      AdditionalCastCount = 0;
      if ( !AbilityByName->m_bStolen.m_Value )
        AdditionalCastCount = CDOTA_Ability_Ogre_Magi_Multicast::GetAdditionalCastCount(AbilityByName);
    }
    else
    {
      AdditionalCastCount = 1;
    }
    v10 = (*(this->_vptr_IHandleEntity + 247))(this);
    return ((v10 * AdditionalCastCount) * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Ability_Ogre_Magi_Fireblast::GetStunDuration  (line 361, @0x0000000002c574e0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Ogre_Magi_Fireblast::GetStunDuration(CDOTA_Ability_Ogre_Magi_Fireblast *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 0);
}


// CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::~CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast  (line 373, @0x0000000002c99490, libserver.so)  // inlines: ~CDOTA_Ability_Ogre_Magi_Fireblast
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::~CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast(
        CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast *const this)
{
  this->_vptr_IHandleEntity = &off_45F8A50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::~CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast  (line 373, @0x0000000002c994b0, libserver.so)  // inlines: ~CDOTA_Ability_Ogre_Magi_Fireblast, ~CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::~CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast(
        CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast *const this)
{
  this->_vptr_IHandleEntity = &off_45F8A50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::Schema_DynamicBinding  (line 375, @0x0000000002c8bf50, libserver.so)
// globals: CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::Schema_DynamicBinding(
        const CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast *const this)
{
  return CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::s_pSchemaBinding;
}


// CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 375, @0x0000000002c8bf60, libserver.so)
// globals: CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::CEntityInstanceEntityClass::DestructInstance  (line 375, @0x0000000002c8bf70, libserver.so)  // inlines: Destruct<CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast>
void __fastcall CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::CEntityInstanceEntityClass::FreeInstance  (line 375, @0x0000000002c8bf90, libserver.so)
void __fastcall CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::CEntityInstanceEntityClass::CanAllocate  (line 375, @0x0000000002c8bfb0, libserver.so)
bool __fastcall CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 375, @0x0000000002c8bfc0, libserver.so)
// globals: CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::s_pSchemaBinding;
}


// CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::CEntityInstanceEntityClass::AllocateInstance  (line 375, @0x0000000002c90b60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::CEntityInstanceEntityClass::ConstructInstance  (line 375, @0x0000000002c95450, libserver.so)  // inlines: CDOTA_Ability_Ogre_Magi_Fireblast, CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast, Construct<CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45F9550;
  }
  return p;
}


// CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 375, @0x0000000002ca31f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 375, @0x0000000002ca3210, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal  (line 375, @0x0000000002cc77c0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "ogre_magi_unrefined_fireblast", "CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast"
// globals: `guard variable for'CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass, CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClassInfo, CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClassInfo
CEntityClass *__cdecl CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass) != 0 )
  {
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_pClassInfo = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_flags = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_pInputs = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_nInputCount = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_pOutputs = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_nOutputCount = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_pGameClass = 0;
    CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass._vptr_CEntityClass = off_45F94D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass);
    __cxa_atexit(
      CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass != 0 )
    return &CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass;
  if ( `guard variable for'CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Ability_Ogre_Magi_Fireblast::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClassInfo,
      "CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast",
      "ogre_magi_unrefined_fireblast",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClassInfo);
  }
  CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_pClassInfo = &CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClassInfo;
  CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_pBaseClassInfo = CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass = &CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass;
  CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClassInfo.m_pClass = &CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass;
  CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_Unrefined_FireblastClass;
}


// CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::Spawn  (line 379, @0x0000000002c99960, libserver.so)
// calls: CDOTABaseAbility::Spawn, CDOTABaseAbility::SetHidden
void __fastcall CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::Spawn(
        CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTABaseAbility::Spawn(this, pKeyValues);
  CDOTABaseAbility::SetHidden(this, 1);
}


// CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetCooldown  (line 387, @0x0000000002c997d0, libserver.so)
// calls: CDOTABaseAbility::GetCooldown
float __fastcall CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetCooldown(
        CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast *const this,
        int iLevel)
{
  return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetManaCost  (line 400, @0x0000000002c55c50, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster
// strings: "scepter_mana"
int __fastcall CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetManaCost(
        CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast *const this,
        int iLevel)
{
  float scepter_mana; // [rsp+Ch] [rbp-14h]

  scepter_mana = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "scepter_mana", -1, 0);
  return (scepter_mana * CDOTABaseAbility::GetCaster(this)->m_flMana.m_Value);
}


// CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::YouForgotToImplementOrDeclareServerClass  (line 408, @0x0000000002c1e440, libserver.so)
int __fastcall CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast *const this)
{
  return 0;
}


// CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetServerClass  (line 408, @0x0000000002c34b30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetServerClass(
        CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast *const this)
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


// CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::OnSpellStart  (line 417, @0x0000000002c57500, libserver.so)  // inlines: GetAdditionalCastCount, InState, IsInvulnerable, SpeakConcept, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, Vector
// calls: CDOTABaseAbility::GetCaster, DOTA_EmitSound, CDOTABaseAbility::GetCursorTarget, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::TriggerSpellAbsorb, ApplyDamage, CBaseEntity::GetAbsOrigin, KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<float> (26 total)
// strings: "Hero_OgreMagi.Fireblast.Cast", "particles/units/heroes/hero_ogre_magi/ogre_magi_fireblast_cast.vpcf", "attach_attack1", "Hero_OgreMagi.Fireblast.Target", "particles/units/heroes/hero_ogre_magi/ogre_magi_unr_fireblast.vpcf", "attach_hitloc" (13 total)
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::OnSpellStart(
        CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v4; // r12
  CDOTA_BaseNPC *v5; // r12
  CDOTA_ParticleManager *v6; // rax
  CDOTA_BaseNPC *v7; // r13
  CDOTA_ParticleManager *v8; // rax
  CDOTA_ParticleManager *v9; // rax
  CDOTA_BaseNPC *v10; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v12; // r14
  CDOTA_ParticleManager *v13; // rax
  __int64 v14; // r15
  CDOTA_ParticleManager *v15; // rax
  __int64 v16; // rax
  int v17; // r13d
  CDOTA_BaseNPC *v18; // rax
  CDOTA_ParticleManager *v19; // rax
  int Particle; // r13d
  const Vector *AbsOrigin; // r14
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  float v25; // xmm1_4
  CDOTA_BaseNPC *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  CDOTA_Ability_Ogre_Magi_Multicast *AbilityByName; // rax
  int AdditionalCastCount; // eax
  int v30; // r14d
  CDOTA_BaseNPC *v31; // r15
  CDOTA_ParticleManager *v32; // rax
  CDOTA_ParticleManager *v33; // rax
  CDOTA_ParticleManager *v34; // rax
  float v35; // xmm1_4
  CDOTA_BaseNPC *v36; // r15
  CDOTA_BaseNPC *v37; // rax
  float v38; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_BaseNPC_Hero *v40; // r13
  CDOTA_BaseNPC *v41; // rax
  CDOTA_BaseNPC_Hero *v42; // rdi
  vec_t vecFallbackPosition; // [rsp+1Ch] [rbp-94h]
  CResponseCriteriaSet criteria; // [rsp+20h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v46; // [rsp+78h] [rbp-38h]
  Vector v47; // 0:xmm0_8.8,8:xmm1_4.4

  v46 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_OgreMagi.Fireblast.Cast", Caster);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v4 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    v10 = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    LODWORD(v10) = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/units/heroes/hero_ogre_magi/ogre_magi_fireblast_cast.vpcf",
                     2,
                     v10,
                     0,
                     0);
    v12 = CDOTABaseAbility::GetCaster(this);
    v13 = GetParticleManager();
    v14 = *&vec3_invalid.x;
    vecFallbackPosition = vec3_invalid.z;
    CDOTA_ParticleManager::SetParticleControlEnt(v13, v10, 0, v12, 5, "attach_attack1", vec3_invalid, 1);
    v15 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v15, v10);
    this->m_nMostRecentMulticastCount = 0;
    if ( LOBYTE(v4[4].m_pfnMoveDone.__pfn) == 0 )
    {
      v16 = *&v4[3].m_vecVelocity.m_Value.x;
      if ( (v16 & 0x100) == 0 && (v16 & 0x200) == 0 && !CDOTA_BaseNPC::TriggerSpellAbsorb(v4, this, 1) )
      {
        v17 = (*(this->_vptr_IHandleEntity + 247))(this);
        v18 = CDOTABaseAbility::GetCaster(this);
        ApplyDamage(v18, v4, this, v17, 2, 0);
        DOTA_EmitSound(10, "Hero_OgreMagi.Fireblast.Target", v4);
        v19 = GetParticleManager();
        Particle = CDOTA_ParticleManager::CreateParticle(
                     v19,
                     "particles/units/heroes/hero_ogre_magi/ogre_magi_unr_fireblast.vpcf",
                     2,
                     v4,
                     0,
                     0);
        AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
        v22 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v22, Particle, 0, v4, 5, "attach_hitloc", *AbsOrigin, 1);
        v23 = GetParticleManager();
        v47.z = vecFallbackPosition;
        *&v47.x = v14;
        CDOTA_ParticleManager::SetParticleControlEnt(v23, Particle, 1, v4, 1, 0, v47, 1);
        v24 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v24, Particle);
        KeyValues::KeyValues(&kv, "modifier_ogre_magi_fireblast");
        CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 0);
        KeyValues::SetFloat(&kv, "duration", v25);
        v26 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v4, v26, this, "modifier_stunned", &kv, 0);
        KeyValues::~KeyValues(&kv);
        v27 = CDOTABaseAbility::GetCaster(this);
        AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v27, "ogre_magi_multicast", 0);
        if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 && !AbilityByName->m_bStolen.m_Value )
        {
          AdditionalCastCount = CDOTA_Ability_Ogre_Magi_Multicast::GetAdditionalCastCount(AbilityByName);
          v30 = AdditionalCastCount;
          if ( AdditionalCastCount > 0 )
          {
            this->m_nMostRecentMulticastCount = AdditionalCastCount;
            v31 = CDOTABaseAbility::GetCaster(this);
            v32 = GetParticleManager();
            criteria._vptr_CResponseCriteriaSet = 0x400000003F800000LL;
            LODWORD(v31) = CDOTA_ParticleManager::CreateParticle(
                             v32,
                             "particles/units/heroes/hero_ogre_magi/ogre_magi_multicast.vpcf",
                             7,
                             v4,
                             0,
                             v31);
            *&criteria.m_Lookup.m_LessFunc = v30;
            v33 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControl(v33, v31, 1, 2.000000473111868, v30);
            v34 = GetParticleManager();
            CDOTA_ParticleManager::ReleaseParticleIndex(v34, v31);
            KeyValues::KeyValues(&kv, "modifier_ogre_magi_fireblast_multicast");
            KeyValues::SetFloat(&kv, "stack_count", v35);
            KeyValues::SetPtr(&kv, "target", v4);
            v36 = CDOTABaseAbility::GetCaster(this);
            v37 = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(v37, v36, this, "modifier_ogre_magi_fireblast_multicast", &kv, 0);
            KeyValues::~KeyValues(&kv);
            CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
            CResponseCriteriaSet::AppendCriteria(&criteria, "multicastcount", 1.0, v38);
            m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
            if ( m_pSpeech != 0 )
              CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 4, 0, 0, 0, 0);
            CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
            if ( v30 > 2 )
            {
              v40 = 0;
              if ( v4->m_bIsDOTANPC
                && (v4[2].m_hEffectEntity.m_Value.m_Index & 1) != 0
                && LOBYTE(v4[4].m_pfnMoveDone.__delta) == 0 )
              {
                v40 = v4;
              }
              v41 = CDOTABaseAbility::GetCaster(this);
              if ( v41 != 0 && (v41->m_iUnitType & 1) != 0 )
                v42 = v41;
              else
                v42 = 0;
              EconEntity_OnOwnerKillEaterEvent(
                v42,
                v40,
                kill_eater_event_t::kKillEaterEventType_OgreMagi_4xFireblasts,
                1,
                INVALID_ITEM_DEF_INDEX);
            }
          }
        }
      }
    }
  }
  else
  {
    v5 = CDOTABaseAbility::GetCaster(this);
    v6 = GetParticleManager();
    LODWORD(v5) = CDOTA_ParticleManager::CreateParticle(
                    v6,
                    "particles/units/heroes/hero_ogre_magi/ogre_magi_fireblast_cast.vpcf",
                    2,
                    v5,
                    0,
                    0);
    v7 = CDOTABaseAbility::GetCaster(this);
    v8 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v8, v5, 0, v7, 5, "attach_attack1", vec3_invalid, 1);
    v9 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v9, v5);
    this->m_nMostRecentMulticastCount = 0;
  }
}


// CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetAbilityDamageToTargetOverInterval  (line 490, @0x0000000002c56e10, libserver.so)  // inlines: GetAdditionalCastCount
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::GetArmorReductionForDamageType, CDOTA_Ability_Ogre_Magi_Multicast::GetAdditionalCastCount
// strings: "ogre_magi_multicast"
__int64 __fastcall CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Ability_Ogre_Magi_Multicast *AbilityByName; // rax
  int AdditionalCastCount; // r13d
  int v10; // ebx

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "ogre_magi_multicast", 0);
    if ( AbilityByName != 0 )
    {
      AdditionalCastCount = 0;
      if ( !AbilityByName->m_bStolen.m_Value )
        AdditionalCastCount = CDOTA_Ability_Ogre_Magi_Multicast::GetAdditionalCastCount(AbilityByName);
    }
    else
    {
      AdditionalCastCount = 1;
    }
    v10 = (*(this->_vptr_IHandleEntity + 247))(this);
    return ((v10 * AdditionalCastCount) * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetStunDuration  (line 509, @0x0000000002c57ab0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast::GetStunDuration(
        CDOTA_Ability_Ogre_Magi_Unrefined_Fireblast *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 0);
}


// CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast::~CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast  (line 518, @0x0000000002c911d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast::~CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast(
        CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast *const this)
{
  this->_vptr_CDOTA_Buff = &off_45FA010;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast::~CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast  (line 518, @0x0000000002c911f0, libserver.so)  // inlines: ~CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast::~CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast(
        CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast *const this)
{
  this->_vptr_CDOTA_Buff = &off_45FA010;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast::IsDebuff  (line 523, @0x0000000002c8bfd0, libserver.so)
bool __fastcall CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast::IsDebuff(
        CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast *const this)
{
  return 0;
}


// CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast::IsPurgable  (line 524, @0x0000000002c8bfe0, libserver.so)
bool __fastcall CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast::IsPurgable(
        CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast *const this)
{
  return 0;
}


// CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast::ShouldSendToClients  (line 525, @0x0000000002c8bff0, libserver.so)
bool __fastcall CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast::ShouldSendToClients(
        CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast *const this)
{
  return 0;
}


// CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast::RemoveOnDeath  (line 530, @0x0000000002c8c000, libserver.so)
bool __fastcall CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast::RemoveOnDeath(
        CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast *const this)
{
  return 0;
}


// CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast::OnCreated  (line 549, @0x0000000002c59a80, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetSerialNumber, Set, ToDOTABaseNPC, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink, KeyValues::GetPtr, KeyValues::GetInt
// strings: "multicast_delay", "stack_count"
void __fastcall CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast::OnCreated(
        CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v5; // xmm1_4
  float LevelSpecialValue; // xmm0_4
  _BYTE *Ptr; // rax
  __int64 v8; // rdx
  int v9; // eax
  __int16 v10; // cx
  void (__fastcall *v11)(CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast *const, _QWORD); // r13
  unsigned int Int; // eax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "multicast_delay", -1, 0);
    this->multicast_delay = LevelSpecialValue;
  }
  else
  {
    LevelSpecialValue = 0.0;
    this->multicast_delay = 0.0;
  }
  CDOTA_Buff::StartIntervalThink(this, LevelSpecialValue, v5);
  Ptr = KeyValues::GetPtr(pKV, "target", 0);
  if ( Ptr != 0 && Ptr[339] != 0 && (v8 = *(Ptr + 1)) != 0 )
  {
    v9 = (*(v8 + 16) >> 15) - (*(v8 + 48) & 1);
    if ( *(v8 + 16) == -1 )
      v10 = 0x7FFF;
    else
      v10 = *(v8 + 16) & 0x7FFF;
    LOWORD(this->m_hTarget.m_Index) = v10 | this->m_hTarget.m_Index & 0x8000;
    this->m_hTarget.m_Index = (v9 << 15) | this->m_hTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTarget.m_Index = -1;
  }
  v11 = *(this->_vptr_CDOTA_Buff + 28);
  Int = KeyValues::GetInt(pKV, "stack_count", 0);
  v11(this, Int);
}


// CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast::OnIntervalThink  (line 561, @0x0000000002c5aa20, libserver.so)  // inlines: DotaRetrieveAbilityValue<float>, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, Vector, operator CEntityInstance*
// calls: CDOTA_Buff::Destroy, __stack_chk_fail, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>, ApplyDamage, DOTA_EmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin (21 total)
// strings: "ogre_magi_unrefined_fireblast", "Hero_OgreMagi.Fireblast.Target", "particles/units/heroes/hero_ogre_magi/ogre_magi_unr_fireblast.vpcf", "attach_hitloc", "modifier_ogre_magi_fireblast", "modifier_stunned" (12 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast::OnIntervalThink(
        CDOTA_Modifier_Ogre_Magi_Fireblast_Multicast *const this)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v3; // rsi
  CEntityIdentity *v4; // rdx
  __int64 v5; // rcx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  unsigned __int64 m_Value; // rax
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v10; // r13
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // r14
  CDOTABaseAbility *v13; // rdi
  int v14; // r15d
  CDOTA_BaseNPC *v15; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  const char *v17; // rsi
  CBaseEntity *v18; // rcx
  int Particle; // r14d
  const Vector *AbsOrigin; // r15
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  float v24; // xmm1_4
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC *v26; // r13
  CDOTA_ParticleManager *v27; // rax
  int v28; // eax
  CDOTA_ParticleManager *v29; // rax
  CDOTA_ParticleManager *v30; // rax
  int m_nMultiCastCount; // esi
  const char *v32; // r13
  double v33; // [rsp+10h] [rbp-60h]
  KeyValues kv; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v35; // [rsp+38h] [rbp-38h]

  v35 = __readfsqword(0x28u);
  m_Index = this->m_hTarget.m_Index;
  v3 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = this->m_hTarget.m_Index & 0x1FF;
      v3 = (8 * v5);
      v6 = &v4[v5];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
      {
        m_pInstance = v6->m_pInstance;
        if ( v6->m_pInstance != 0
          && (*(m_pInstance->_vptr_IHandleEntity + 408))(v6->m_pInstance) != 0
          && !m_pInstance->m_bIsWaitingToSpawn.m_Value )
        {
          m_Value = m_pInstance->m_nUnitState64.m_Value;
          if ( (m_Value & 0x100) == 0 && (m_Value & 0x200) == 0 )
          {
            Ability = CDOTA_Buff::GetAbility(this);
            if ( !CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, Ability, 1) )
            {
              v10 = CDOTA_Buff::GetAbility(this);
              Caster = CDOTA_Buff::GetCaster(this);
              AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "ogre_magi_unrefined_fireblast", 0);
              v13 = CDOTA_Buff::GetAbility(this);
              if ( v13 != 0 )
                CDOTABaseAbility::GetLevelSpecialValueFor<float>(v13, "stun_duration", -1, 0);
              v14 = (*(v10->_vptr_IHandleEntity + 247))(v10);
              v15 = CDOTA_Buff::GetCaster(this);
              ApplyDamage(v15, m_pInstance, v10, v14, 2, 0);
              DOTA_EmitSound(10, "Hero_OgreMagi.Fireblast.Target", m_pInstance);
              if ( v10 == AbilityByName && AbilityByName != 0 )
              {
                ParticleManager = GetParticleManager();
                v17 = "particles/units/heroes/hero_ogre_magi/ogre_magi_unr_fireblast.vpcf";
                v18 = m_pInstance;
              }
              else
              {
                ParticleManager = GetParticleManager();
                v17 = "particles/units/heroes/hero_ogre_magi/ogre_magi_fireblast.vpcf";
                v18 = m_pInstance;
              }
              Particle = CDOTA_ParticleManager::CreateParticle(ParticleManager, v17, 2, v18, 0, 0);
              AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
              v21 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControlEnt(
                v21,
                Particle,
                0,
                m_pInstance,
                5,
                "attach_hitloc",
                *AbsOrigin,
                1);
              v22 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControlEnt(v22, Particle, 1, m_pInstance, 1, 0, vec3_invalid, 1);
              v23 = GetParticleManager();
              CDOTA_ParticleManager::ReleaseParticleIndex(v23, Particle);
              KeyValues::KeyValues(&kv, "modifier_ogre_magi_fireblast");
              KeyValues::SetFloat(&kv, "duration", v24);
              v25 = CDOTA_Buff::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(m_pInstance, v25, v10, "modifier_stunned", &kv, 0);
              v26 = CDOTA_Buff::GetCaster(this);
              v27 = GetParticleManager();
              LODWORD(v26) = CDOTA_ParticleManager::CreateParticle(
                               v27,
                               "particles/units/heroes/hero_ogre_magi/ogre_magi_multicast_counter.vpcf",
                               7,
                               m_pInstance,
                               0,
                               v26);
              v28 = (*(this->_vptr_CDOTA_Buff + 27))(this);
              *&v33 = this->m_nMultiCastCount;
              *(&v33 + 1) = v28;
              v29 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControl(v29, v26, 1, v33, 0.0);
              v30 = GetParticleManager();
              CDOTA_ParticleManager::ReleaseParticleIndex(v30, v26);
              m_nMultiCastCount = this->m_nMultiCastCount;
              v32 = "Hero_OgreMagi.Fireblast.x1";
              if ( m_nMultiCastCount != 2 )
              {
                v32 = "Hero_OgreMagi.Fireblast.x3";
                if ( m_nMultiCastCount == 3 )
                  v32 = "Hero_OgreMagi.Fireblast.x2";
              }
              Msg("ping pong %d %s\n", m_nMultiCastCount, v32);
              DOTA_EmitSound(10, v32, m_pInstance);
              ++this->m_nMultiCastCount;
              KeyValues::~KeyValues(&kv);
            }
          }
        }
      }
    }
  }
  (*(this->_vptr_CDOTA_Buff + 26))(this, v3);
  if ( (*(this->_vptr_CDOTA_Buff + 27))(this) <= 0 )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Ability_Ogre_Magi_Ignite::~CDOTA_Ability_Ogre_Magi_Ignite  (line 641, @0x0000000002c994e0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Ogre_Magi_Ignite::~CDOTA_Ability_Ogre_Magi_Ignite(
        CDOTA_Ability_Ogre_Magi_Ignite *const this)
{
  this->_vptr_IHandleEntity = &off_45FA370;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Ogre_Magi_Ignite::~CDOTA_Ability_Ogre_Magi_Ignite  (line 641, @0x0000000002c99500, libserver.so)  // inlines: ~CDOTA_Ability_Ogre_Magi_Ignite
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Ogre_Magi_Ignite::~CDOTA_Ability_Ogre_Magi_Ignite(
        CDOTA_Ability_Ogre_Magi_Ignite *const this)
{
  this->_vptr_IHandleEntity = &off_45FA370;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Ogre_Magi_Ignite::Schema_DynamicBinding  (line 643, @0x0000000002c8c010, libserver.so)
// globals: CDOTA_Ability_Ogre_Magi_Ignite::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Ogre_Magi_Ignite::Schema_DynamicBinding(
        const CDOTA_Ability_Ogre_Magi_Ignite *const this)
{
  return CDOTA_Ability_Ogre_Magi_Ignite::s_pSchemaBinding;
}


// CDOTA_Ability_Ogre_Magi_Ignite::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 643, @0x0000000002c8c020, libserver.so)
// globals: CDOTA_Ability_Ogre_Magi_Ignite::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Ogre_Magi_Ignite::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Ogre_Magi_Ignite::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Ogre_Magi_Ignite::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Ogre_Magi_Ignite::CEntityInstanceEntityClass::DestructInstance  (line 643, @0x0000000002c8c030, libserver.so)  // inlines: Destruct<CDOTA_Ability_Ogre_Magi_Ignite>
void __fastcall CDOTA_Ability_Ogre_Magi_Ignite::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Ogre_Magi_Ignite::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Ogre_Magi_Ignite::CEntityInstanceEntityClass::FreeInstance  (line 643, @0x0000000002c8c050, libserver.so)
void __fastcall CDOTA_Ability_Ogre_Magi_Ignite::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Ogre_Magi_Ignite::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Ogre_Magi_Ignite::CEntityInstanceEntityClass::CanAllocate  (line 643, @0x0000000002c8c070, libserver.so)
bool __fastcall CDOTA_Ability_Ogre_Magi_Ignite::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Ogre_Magi_Ignite::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Ogre_Magi_Ignite::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 643, @0x0000000002c8c080, libserver.so)
// globals: CDOTA_Ability_Ogre_Magi_Ignite::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Ogre_Magi_Ignite::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Ogre_Magi_Ignite::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Ogre_Magi_Ignite::s_pSchemaBinding;
}


// CDOTA_Ability_Ogre_Magi_Ignite::CEntityInstanceEntityClass::AllocateInstance  (line 643, @0x0000000002c90ba0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Ogre_Magi_Ignite::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Ogre_Magi_Ignite::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Ogre_Magi_Ignite::CEntityInstanceEntityClass::ConstructInstance  (line 643, @0x0000000002c95480, libserver.so)  // inlines: CDOTA_Ability_Ogre_Magi_Ignite, Construct<CDOTA_Ability_Ogre_Magi_Ignite>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Ogre_Magi_Ignite::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Ogre_Magi_Ignite::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45FA370;
  }
  return p;
}


// CDOTA_Ability_Ogre_Magi_Ignite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 643, @0x0000000002ca3240, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Ogre_Magi_Ignite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Ogre_Magi_Ignite::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Ogre_Magi_Ignite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 643, @0x0000000002ca3260, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Ogre_Magi_Ignite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Ogre_Magi_Ignite::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Ogre_Magi_Ignite::GetEntityClassInternal  (line 643, @0x0000000002cbc1e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "CDOTA_Ability_Ogre_Magi_Ignite"
// globals: `guard variable for'CDOTA_Ability_Ogre_Magi_Ignite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_IgniteClass, CDOTA_Ability_Ogre_Magi_Ignite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_IgniteClass, __dso_handle, CDOTA_Ability_Ogre_Magi_Ignite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Ogre_Magi_Ignite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_IgniteClassInfo, CDOTA_Ability_Ogre_Magi_Ignite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_IgniteClassInfo
CEntityClass *__cdecl CDOTA_Ability_Ogre_Magi_Ignite::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Ogre_Magi_Ignite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_IgniteClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Ogre_Magi_Ignite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_IgniteClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Ogre_Magi_Ignite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_IgniteClass);
    CDOTA_Ability_Ogre_Magi_Ignite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_IgniteClass._vptr_CEntityClass = off_45FA2F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Ogre_Magi_Ignite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_IgniteClass);
    __cxa_atexit(
      CDOTA_Ability_Ogre_Magi_Ignite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Ogre_Magi_Ignite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_IgniteClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Ogre_Magi_IgniteClass != 0 )
    return &CDOTA_Ability_Ogre_Magi_Ignite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_IgniteClass;
  if ( `guard variable for'CDOTA_Ability_Ogre_Magi_Ignite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_IgniteClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Ogre_Magi_Ignite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_IgniteClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Ogre_Magi_Ignite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_IgniteClassInfo,
      "CDOTA_Ability_Ogre_Magi_Ignite",
      "ogre_magi_ignite",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Ogre_Magi_Ignite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_IgniteClassInfo);
  }
  CDOTA_Ability_Ogre_Magi_Ignite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_IgniteClass.m_pClassInfo = &CDOTA_Ability_Ogre_Magi_Ignite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_IgniteClassInfo;
  CDOTA_Ability_Ogre_Magi_Ignite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_IgniteClass.m_pBaseClassInfo = CDOTA_Ability_Ogre_Magi_Ignite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_IgniteClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Ogre_Magi_IgniteClass = &CDOTA_Ability_Ogre_Magi_Ignite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_IgniteClass;
  CDOTA_Ability_Ogre_Magi_Ignite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_IgniteClassInfo.m_pClass = &CDOTA_Ability_Ogre_Magi_Ignite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_IgniteClass;
  CDOTA_Ability_Ogre_Magi_Ignite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_IgniteClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Ogre_Magi_IgniteClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Ogre_Magi_Ignite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_IgniteClass;
}


// CDOTA_Ability_Ogre_Magi_Ignite::GetAssociatedSecondaryAbilities  (line 654, @0x0000000002c8c090, libserver.so)
// strings: "ogre_magi_multicast"
const char *__fastcall CDOTA_Ability_Ogre_Magi_Ignite::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Ogre_Magi_Ignite *const this)
{
  return "ogre_magi_multicast";
}


// CDOTA_Ability_Ogre_Magi_Ignite::GetAOERadius  (line 656, @0x0000000002cb76e0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "ogre_magi_multicast", "ignite_aoe"
float __fastcall CDOTA_Ability_Ogre_Magi_Ignite::GetAOERadius(CDOTA_Ability_Ogre_Magi_Ignite *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v3; // rbx

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "ogre_magi_multicast", 0);
  v3 = AbilityByName;
  if ( AbilityByName != 0 && CDOTABaseAbility::GetEffectiveLevel(AbilityByName) >= 0 )
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(v3, "ignite_aoe", -1, 0);
  else
    return 0.0;
}


// CDOTA_Ability_Ogre_Magi_Ignite::GetCastRange  (line 675, @0x0000000002c64bc0, libserver.so)
// calls: CDOTABaseAbility::GetCastRange, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "ogre_magi_multicast", "ignite_cast_range"
int __fastcall CDOTA_Ability_Ogre_Magi_Ignite::GetCastRange(
        CDOTA_Ability_Ogre_Magi_Ignite *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  int CastRange; // ebx
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v7; // r12

  CastRange = CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "ogre_magi_multicast", 0);
  v7 = AbilityByName;
  if ( AbilityByName != 0 && CDOTABaseAbility::GetEffectiveLevel(AbilityByName) >= 0 )
    CastRange += CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "ignite_cast_range", -1, 0);
  return CastRange;
}


// CDOTA_Ability_Ogre_Magi_Ignite::YouForgotToImplementOrDeclareServerClass  (line 688, @0x0000000002c1e450, libserver.so)
int __fastcall CDOTA_Ability_Ogre_Magi_Ignite::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Ogre_Magi_Ignite *const this)
{
  return 0;
}


// CDOTA_Ability_Ogre_Magi_Ignite::GetServerClass  (line 688, @0x0000000002c34c70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Ogre_Magi_Ignite::GetServerClass(CDOTA_Ability_Ogre_Magi_Ignite *const this)
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


// CDOTA_Ability_Ogre_Magi_Ignite::OnSpellStart  (line 698, @0x0000000002c6b330, libserver.so)  // inlines: CEntityHandle, CHandle, Color, GetAdditionalCastCount, GetEHandle, GetEntryIndex, GetSerialNumber, Set, SpeakConcept, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector, operator=, sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorTarget, CDOTA_ProjectileManager::CreateTrackingProjectile, DOTA_EmitSound, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_Ogre_Magi_Multicast::GetAdditionalCastCount, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, KeyValues::KeyValues (23 total)
// strings: "particles/units/heroes/hero_ogre_magi/ogre_magi_ignite.vpcf", "Hero_OgreMagi.Ignite.Cast", "ogre_magi_multicast", "particles/units/heroes/hero_ogre_magi/ogre_magi_multicast.vpcf", "modifier_ogre_magi_fireblast_multicast", "stack_count" (8 total)
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Ogre_Magi_Ignite::OnSpellStart(CDOTA_Ability_Ogre_Magi_Ignite *const this)
{
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v6; // cx
  CBaseEntity *CursorTarget; // rax
  CEntityIdentity *v8; // rdx
  __int16 v9; // cx
  CDOTA_BaseNPC *v10; // rax
  CBaseEntity *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTA_Ability_Ogre_Magi_Multicast *AbilityByName; // rax
  int AdditionalCastCount; // eax
  int v16; // r14d
  CDOTA_BaseNPC *v17; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v19; // rax
  CDOTA_ParticleManager *v20; // rax
  float v21; // xmm1_4
  CBaseEntity *v22; // rax
  CDOTA_BaseNPC *v23; // r13
  CDOTA_BaseNPC *v24; // rax
  float v25; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_BaseNPC *v27; // rax
  CDOTA_BaseNPC_Hero *v28; // rdi
  CResponseCriteriaSet criteria; // [rsp+20h] [rbp-F0h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-B0h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+80h] [rbp-90h] BYREF
  unsigned __int64 v32; // [rsp+E8h] [rbp-28h]

  info.hSource.m_Index = -1;
  v32 = __readfsqword(0x28u);
  info.hTarget.m_Index = -1;
  info.colorGemColor = 0;
  info.pAttackRecord = 0;
  info.iMoveSpeed = 0;
  info.iSourceAttachment = 1;
  info.bProvidesVision = 0;
  info.vSourceLoc.x = vec3_origin.x;
  y = vec3_origin.y;
  info.iVisionTeamNumber = -1;
  info.vSourceLoc.y = y;
  z = vec3_origin.z;
  info.pszEffectName = "particles/units/heroes/hero_ogre_magi/ogre_magi_ignite.vpcf";
  info.vSourceLoc.z = z;
  info.iVisionRadius = 0;
  info.bDrawsOnMinimap = 0;
  info.bDodgeable = 1;
  info.bIsAttack = 0;
  info.bVisibleToEnemies = 1;
  info.pKVExtraData = 0;
  info.bReplaceExisting = 0;
  info.flExpireTime = 0.0;
  info.flMaxImpactTime = 0.0;
  info.bServerOnly = 0;
  info.pAbility = this;
  info.iMoveSpeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "projectile_speed", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( Caster != 0 && (m_pEntity = Caster->m_pEntity) != 0 )
  {
    v6 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    if ( CursorTarget == 0 )
      goto LABEL_26;
  }
  else
  {
    info.hSource.m_Index = -1;
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    if ( CursorTarget == 0 )
      goto LABEL_26;
  }
  v8 = CursorTarget->m_pEntity;
  if ( v8 == 0 )
  {
LABEL_26:
    info.hTarget.m_Index = -1;
    goto LABEL_10;
  }
  v9 = 0x7FFF;
  if ( v8->m_EHandle.m_Index != -1 )
    v9 = v8->m_EHandle.m_Index & 0x7FFF;
  info.hTarget.m_Index = (((v8->m_EHandle.m_Index >> 15) - (v8->m_flags & 1)) << 15) | v9 & 0x7FFF;
LABEL_10:
  info.iSourceAttachment = 1;
  CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
  v10 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_OgreMagi.Ignite.Cast", v10);
  this->m_nMostRecentMulticastCount = 0;
  v11 = CDOTABaseAbility::GetCursorTarget(this);
  if ( v11 != 0 && v11->m_bIsDOTANPC )
  {
    v13 = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v13, "ogre_magi_multicast", 0);
    if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 && !AbilityByName->m_bStolen.m_Value )
    {
      AdditionalCastCount = CDOTA_Ability_Ogre_Magi_Multicast::GetAdditionalCastCount(AbilityByName);
      v16 = AdditionalCastCount;
      if ( AdditionalCastCount > 0 )
      {
        this->m_nMostRecentMulticastCount = AdditionalCastCount;
        v17 = CDOTABaseAbility::GetCaster(this);
        ParticleManager = GetParticleManager();
        criteria._vptr_CResponseCriteriaSet = 0x400000003F800000LL;
        LODWORD(v17) = CDOTA_ParticleManager::CreateParticle(
                         ParticleManager,
                         "particles/units/heroes/hero_ogre_magi/ogre_magi_multicast.vpcf",
                         7,
                         v17,
                         0,
                         0);
        *&criteria.m_Lookup.m_LessFunc = v16;
        v19 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControl(v19, v17, 1, 2.000000473111868, v16);
        v20 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v20, v17);
        KeyValues::KeyValues(&kv, "modifier_ogre_magi_fireblast_multicast");
        KeyValues::SetFloat(&kv, "stack_count", v21);
        v22 = CDOTABaseAbility::GetCursorTarget(this);
        KeyValues::SetPtr(&kv, "target", v22);
        v23 = CDOTABaseAbility::GetCaster(this);
        v24 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v24, v23, this, "modifier_ogre_magi_ignite_multicast", &kv, 0);
        CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
        CResponseCriteriaSet::AppendCriteria(&criteria, "multicastcount", 1.0, v25);
        m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
        if ( m_pSpeech != 0 )
          CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 4, 0, 0, 0, 0);
        CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
        KeyValues::~KeyValues(&kv);
        if ( v16 > 2 )
        {
          v27 = CDOTABaseAbility::GetCaster(this);
          if ( v27 != 0 && (v27->m_iUnitType & 1) != 0 )
            v28 = v27;
          else
            v28 = 0;
          EconEntity_OnOwnerKillEaterEvent(
            v28,
            0,
            kill_eater_event_t::kKillEaterEventType_OgreMagi_4xIgnites,
            1,
            INVALID_ITEM_DEF_INDEX);
        }
      }
    }
  }
  else
  {
    v12 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::FindAbilityByName(v12, "ogre_magi_multicast", 0);
  }
}


// CDOTA_Ability_Ogre_Magi_Ignite::OnAbilityPhaseStart  (line 755, @0x0000000002c1e970, libserver.so)
// calls: CDOTABaseAbility::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt
// strings: "particles/units/heroes/hero_ogre_magi/ogre_magi_ignite_cast.vpcf", "attach_toss"
bool __fastcall CDOTA_Ability_Ogre_Magi_Ignite::OnAbilityPhaseStart(CDOTA_Ability_Ogre_Magi_Ignite *const this)
{
  CDOTA_Ability_Ogre_Magi_Ignite *v1; // rbx
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v6; // rax
  const CBaseAnimating *v7; // r13
  CDOTA_ParticleManager *v8; // rax

  v1 = this;
  Caster = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  v1->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/units/heroes/hero_ogre_magi/ogre_magi_ignite_cast.vpcf",
                     2,
                     Caster,
                     0,
                     0);
  v4 = CDOTABaseAbility::GetCaster(v1);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
  v6 = CDOTABaseAbility::GetCaster(v1);
  LODWORD(v1) = v1->m_nFXIndex;
  v7 = v6;
  v8 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v8, v1, 0, v7, 5, "attach_toss", *AbsOrigin, 1);
  return 1;
}


// CDOTA_Ability_Ogre_Magi_Ignite::OnAbilityPhaseInterrupted  (line 767, @0x0000000002c20460, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect
void __fastcall CDOTA_Ability_Ogre_Magi_Ignite::OnAbilityPhaseInterrupted(CDOTA_Ability_Ogre_Magi_Ignite *const this)
{
  int m_nFXIndex; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax

  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 1);
}


// CDOTA_Ability_Ogre_Magi_Ignite::OnProjectileHit  (line 778, @0x0000000002c809b0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GrowMemory, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, Purge, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound (19 total)
// strings: "ogre_magi_multicast", "ignite_aoe", "modifier_ogre_magi_ignite", "Hero_OgreMagi.Ignite.Target"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Ogre_Magi_Ignite::OnProjectileHit(
        CDOTA_Ability_Ogre_Magi_Ignite *const this,
        const CEntityHandle *hTarget,
        const Vector *const vLocation)
{
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // r15
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v8; // rbx
  __m128i v9; // xmm0
  float v10; // ebx
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v12; // rax
  __int64 m_Size; // rbx
  int m_nAllocationCount; // esi
  CEntityIdentity *m_pEntity; // rdx
  __int16 v16; // cx
  int v17; // eax
  CHandle<CBaseEntity> *v18; // rax
  float v19; // xmm1_4
  __int64 v20; // r12
  int i; // ebx
  CHandle<CBaseEntity> *v22; // rdx
  uint32 m_Index; // eax
  __int16 v24; // cx
  CEntityIdentity *v25; // rdx
  CEntityIdentity *v26; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  unsigned __int64 m_Value; // rax
  CDOTA_BaseNPC *v29; // rax
  int v31; // [rsp+30h] [rbp-80h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+78h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  v4 = CEntityHandle::operator CEntityInstance *(hTarget);
  v5 = v4;
  if ( v4 == 0 || !v4->m_bIsDOTANPC || CDOTA_BaseNPC::TriggerSpellAbsorb(v4, this, 1) )
    return 1;
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "ogre_magi_multicast", 0);
  v8 = AbilityByName;
  if ( AbilityByName == 0 || CDOTABaseAbility::GetEffectiveLevel(AbilityByName) < 0 )
  {
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    goto LABEL_34;
  }
  *v9.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8, "ignite_aoe", -1, 0);
  entities.m_Size = 0;
  v10 = COERCE_FLOAT(_mm_cvtsi128_si32(v9));
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  if ( *v9.m128i_i32 <= 0.0 )
  {
LABEL_34:
    v31 = -1;
    m_nAllocationCount = 0;
    m_Size = 0;
    goto LABEL_8;
  }
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v12 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v12->m_iTeamNum.m_Value, AbsOrigin, v5, v10, &entities, 2, 19, 0, 0, 0);
  m_Size = entities.m_Size;
  v31 = -1;
  m_nAllocationCount = entities.m_Memory.m_nAllocationCount;
LABEL_8:
  m_pEntity = v5->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v16 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v31 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v16 & 0x7FFF;
  }
  v17 = m_Size;
  if ( m_Size == m_nAllocationCount )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&entities.m_Memory, 1);
    v17 = entities.m_Size;
  }
  entities.m_Size = v17 + 1;
  v18 = &entities.m_Memory.m_pMemory[m_Size];
  if ( v18 != 0 )
    v18->m_Index = v31;
  KeyValues::KeyValues(&kv, "ogre_magi_ignite");
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  KeyValues::SetFloat(&kv, "duration", v19);
  v20 = 0;
  for ( i = 0; entities.m_Size > i; ++v20 )
  {
    while ( 1 )
    {
      v22 = &entities.m_Memory.m_pMemory[v20];
      m_Index = entities.m_Memory.m_pMemory[v20].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v24 = v22->m_Index;
        v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v22->m_Index) >> 9) & 0x3F];
        if ( v25 != 0 )
        {
          v26 = &v25[v24 & 0x1FF];
          if ( v26 != 0 && m_Index == v26->m_EHandle.m_Index )
          {
            m_pInstance = v26->m_pInstance;
            if ( v26->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
            {
              m_Value = m_pInstance->m_nUnitState64.m_Value;
              if ( (m_Value & 0x200) == 0 && !m_pInstance->m_bIsWaitingToSpawn.m_Value && (m_Value & 0x100) == 0 )
                break;
            }
          }
        }
      }
      ++i;
      ++v20;
      if ( entities.m_Size <= i )
        goto LABEL_29;
    }
    v29 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(m_pInstance, v29, this, "modifier_ogre_magi_ignite", &kv, 0);
    ++i;
  }
LABEL_29:
  DOTA_EmitSound(10, "Hero_OgreMagi.Ignite.Target", v5);
  KeyValues::~KeyValues(&kv);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
  if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
  }
  return 1;
}


// CDOTA_Ability_Ogre_Magi_Ignite::GetAbilityDamageToTargetOverInterval  (line 821, @0x0000000002c6b7d0, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "burn_damage"
__int64 __fastcall CDOTA_Ability_Ogre_Magi_Ignite::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Ogre_Magi_Ignite *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  float fIntervala; // [rsp+0h] [rbp-1Ch]
  float fIntervalb; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    fIntervala = fminf(fInterval, CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0));
    fIntervalb = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "burn_damage", -1, 0) * fIntervala;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalb);
  }
  return result;
}


// CDOTA_Ability_Ogre_Magi_Ignite::GetSlowDuration  (line 834, @0x0000000002c57ad0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Ogre_Magi_Ignite::GetSlowDuration(CDOTA_Ability_Ogre_Magi_Ignite *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
}


// CDOTA_Modifier_Ogre_Magi_Ignite::~CDOTA_Modifier_Ogre_Magi_Ignite  (line 843, @0x0000000002c91180, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Ogre_Magi_Ignite::~CDOTA_Modifier_Ogre_Magi_Ignite(
        CDOTA_Modifier_Ogre_Magi_Ignite *const this)
{
  this->_vptr_CDOTA_Buff = &off_45FAE30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Ogre_Magi_Ignite::~CDOTA_Modifier_Ogre_Magi_Ignite  (line 843, @0x0000000002c911a0, libserver.so)  // inlines: ~CDOTA_Modifier_Ogre_Magi_Ignite
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Ogre_Magi_Ignite::~CDOTA_Modifier_Ogre_Magi_Ignite(
        CDOTA_Modifier_Ogre_Magi_Ignite *const this)
{
  this->_vptr_CDOTA_Buff = &off_45FAE30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Ogre_Magi_Ignite::IsDebuff  (line 848, @0x0000000002c8c0a0, libserver.so)
bool __fastcall CDOTA_Modifier_Ogre_Magi_Ignite::IsDebuff(CDOTA_Modifier_Ogre_Magi_Ignite *const this)
{
  return 1;
}


// CDOTA_Modifier_Ogre_Magi_Ignite::GetEffectName  (line 850, @0x0000000002c8c0b0, libserver.so)
// strings: "particles/units/heroes/hero_ogre_magi/ogre_magi_ignite_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Ogre_Magi_Ignite::GetEffectName(CDOTA_Modifier_Ogre_Magi_Ignite *const this)
{
  return "particles/units/heroes/hero_ogre_magi/ogre_magi_ignite_debuff.vpcf";
}


// CDOTA_Modifier_Ogre_Magi_Ignite::GetStatusEffectName  (line 851, @0x0000000002c8c0c0, libserver.so)
// strings: "particles/status_fx/status_effect_burn.vpcf"
const char *__fastcall CDOTA_Modifier_Ogre_Magi_Ignite::GetStatusEffectName(
        CDOTA_Modifier_Ogre_Magi_Ignite *const this)
{
  return "particles/status_fx/status_effect_burn.vpcf";
}


// CDOTA_Modifier_Ogre_Magi_Ignite::OnCreated  (line 871, @0x0000000002c71960, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
// strings: "slow_movement_speed_pct", "burn_damage"
void __fastcall CDOTA_Modifier_Ogre_Magi_Ignite::OnCreated(CDOTA_Modifier_Ogre_Magi_Ignite *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->slow_movement_speed_pct = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->burn_damage = 0;
    goto LABEL_4;
  }
  this->slow_movement_speed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                    Ability,
                                    "slow_movement_speed_pct",
                                    -1,
                                    0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->burn_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "burn_damage", -1, 0);
LABEL_4:
  CDOTA_Buff::StartIntervalThink(this, 1.0, v5);
}


// CDOTA_Modifier_Ogre_Magi_Ignite::OnRefresh  (line 881, @0x0000000002c712a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "slow_movement_speed_pct", "burn_damage"
void __fastcall CDOTA_Modifier_Ogre_Magi_Ignite::OnRefresh(CDOTA_Modifier_Ogre_Magi_Ignite *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->slow_movement_speed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                      Ability,
                                      "slow_movement_speed_pct",
                                      -1,
                                      0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->burn_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "burn_damage", -1, 0);
      return;
    }
  }
  else
  {
    this->slow_movement_speed_pct = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->burn_damage = 0;
}


// CDOTA_Modifier_Ogre_Magi_Ignite::DeclareFunctions  (line 889, @0x0000000002c1e460, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Ogre_Magi_Ignite::DeclareFunctions(CDOTA_Modifier_Ogre_Magi_Ignite *const this)
{
  this->m_Functions[13].__pfn = (&stru_10 + 697);
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Ogre_Magi_Ignite::GetModifierMoveSpeedBonus_Percentage  (line 896, @0x0000000002c1e480, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Ogre_Magi_Ignite::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Ogre_Magi_Ignite *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->slow_movement_speed_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Ogre_Magi_Ignite::OnIntervalThink  (line 903, @0x0000000002c20f00, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage, CDOTA_BaseNPC::UnitEmitSound
// strings: "Hero_OgreMagi.Ignite.Damage"
void __fastcall CDOTA_Modifier_Ogre_Magi_Ignite::OnIntervalThink(CDOTA_Modifier_Ogre_Magi_Ignite *const this)
{
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // rax
  float flDamage; // [rsp+Ch] [rbp-24h]

  flDamage = this->burn_damage;
  Ability = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, Ability, flDamage, 2, 0);
  v5 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v5, "Hero_OgreMagi.Ignite.Damage", 0.0, 0, 0);
}


// CDOTA_Modifier_Ogre_Magi_Ignite_Multicast::~CDOTA_Modifier_Ogre_Magi_Ignite_Multicast  (line 916, @0x0000000002c91130, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Ogre_Magi_Ignite_Multicast::~CDOTA_Modifier_Ogre_Magi_Ignite_Multicast(
        CDOTA_Modifier_Ogre_Magi_Ignite_Multicast *const this)
{
  this->_vptr_CDOTA_Buff = &off_45FB150;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Ogre_Magi_Ignite_Multicast::~CDOTA_Modifier_Ogre_Magi_Ignite_Multicast  (line 916, @0x0000000002c91150, libserver.so)  // inlines: ~CDOTA_Modifier_Ogre_Magi_Ignite_Multicast
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Ogre_Magi_Ignite_Multicast::~CDOTA_Modifier_Ogre_Magi_Ignite_Multicast(
        CDOTA_Modifier_Ogre_Magi_Ignite_Multicast *const this)
{
  this->_vptr_CDOTA_Buff = &off_45FB150;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Ogre_Magi_Ignite_Multicast::IsDebuff  (line 921, @0x0000000002c8c0d0, libserver.so)
bool __fastcall CDOTA_Modifier_Ogre_Magi_Ignite_Multicast::IsDebuff(
        CDOTA_Modifier_Ogre_Magi_Ignite_Multicast *const this)
{
  return 0;
}


// CDOTA_Modifier_Ogre_Magi_Ignite_Multicast::IsPurgable  (line 922, @0x0000000002c8c0e0, libserver.so)
bool __fastcall CDOTA_Modifier_Ogre_Magi_Ignite_Multicast::IsPurgable(
        CDOTA_Modifier_Ogre_Magi_Ignite_Multicast *const this)
{
  return 0;
}


// CDOTA_Modifier_Ogre_Magi_Ignite_Multicast::ShouldSendToClients  (line 923, @0x0000000002c8c0f0, libserver.so)
bool __fastcall CDOTA_Modifier_Ogre_Magi_Ignite_Multicast::ShouldSendToClients(
        CDOTA_Modifier_Ogre_Magi_Ignite_Multicast *const this)
{
  return 0;
}


// CDOTA_Modifier_Ogre_Magi_Ignite_Multicast::RemoveOnDeath  (line 928, @0x0000000002c8c100, libserver.so)
bool __fastcall CDOTA_Modifier_Ogre_Magi_Ignite_Multicast::RemoveOnDeath(
        CDOTA_Modifier_Ogre_Magi_Ignite_Multicast *const this)
{
  return 0;
}


// CDOTA_Modifier_Ogre_Magi_Ignite_Multicast::OnCreated  (line 947, @0x0000000002c59bb0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetSerialNumber, Set, ToDOTABaseNPC, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink, KeyValues::GetPtr, KeyValues::GetInt
// strings: "multicast_delay", "stack_count"
void __fastcall CDOTA_Modifier_Ogre_Magi_Ignite_Multicast::OnCreated(
        CDOTA_Modifier_Ogre_Magi_Ignite_Multicast *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v5; // xmm1_4
  float LevelSpecialValue; // xmm0_4
  _BYTE *Ptr; // rax
  __int64 v8; // rdx
  int v9; // eax
  __int16 v10; // cx
  void (__fastcall *v11)(CDOTA_Modifier_Ogre_Magi_Ignite_Multicast *const, _QWORD); // r13
  unsigned int Int; // eax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "multicast_delay", -1, 0);
    this->multicast_delay = LevelSpecialValue;
  }
  else
  {
    LevelSpecialValue = 0.0;
    this->multicast_delay = 0.0;
  }
  CDOTA_Buff::StartIntervalThink(this, LevelSpecialValue, v5);
  Ptr = KeyValues::GetPtr(pKV, "target", 0);
  if ( Ptr != 0 && Ptr[339] != 0 && (v8 = *(Ptr + 1)) != 0 )
  {
    v9 = (*(v8 + 16) >> 15) - (*(v8 + 48) & 1);
    if ( *(v8 + 16) == -1 )
      v10 = 0x7FFF;
    else
      v10 = *(v8 + 16) & 0x7FFF;
    LOWORD(this->m_hTarget.m_Index) = v10 | this->m_hTarget.m_Index & 0x8000;
    this->m_hTarget.m_Index = (v9 << 15) | this->m_hTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTarget.m_Index = -1;
  }
  v11 = *(this->_vptr_CDOTA_Buff + 28);
  Int = KeyValues::GetInt(pKV, "stack_count", 0);
  v11(this, Int);
}


// CDOTA_Modifier_Ogre_Magi_Ignite_Multicast::OnIntervalThink  (line 959, @0x0000000002c6fdd0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Color, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, Purge, Set, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], sTrackingProjectileCreateInfo, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_ProjectileManager::CreateTrackingProjectile, DOTA_EmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl (20 total)
// strings: "modifier_ogre_magi_ignite", "particles/units/heroes/hero_ogre_magi/ogre_magi_ignite.vpcf", "Hero_OgreMagi.Ignite.Cast", "particles/units/heroes/hero_ogre_magi/ogre_magi_multicast_counter.vpcf", "Hero_OgreMagi.Fireblast.x1", "Hero_OgreMagi.Fireblast.x3" (8 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Ogre_Magi_Ignite_Multicast::OnIntervalThink(
        CDOTA_Modifier_Ogre_Magi_Ignite_Multicast *const this)
{
  CEntityInstance *v2; // rax
  CDOTA_BaseNPC *v3; // r14
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v7; // rax
  CConcreteEntityList *v8; // rsi
  __int64 v9; // rbx
  CHandle<CBaseEntity> *v10; // rdx
  uint32 m_Index; // eax
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  __int64 v14; // rcx
  CEntityIdentity *v15; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  unsigned __int64 m_Value; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v19; // eax
  __int16 v20; // cx
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *v22; // rax
  CEntityIdentity *v23; // rdx
  int v24; // eax
  __int16 v25; // cx
  CEntityIdentity *v26; // rax
  int v27; // edx
  __int16 v28; // cx
  CDOTA_BaseNPC *v29; // rax
  CDOTA_BaseNPC *v30; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  int v32; // eax
  CDOTA_ParticleManager *v33; // rax
  CDOTA_ParticleManager *v34; // rax
  int m_nMultiCastCount; // esi
  const char *v36; // rbx
  CDOTA_BaseNPC *pTarget; // [rsp+18h] [rbp-D8h]
  double v38; // [rsp+20h] [rbp-D0h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-C0h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+50h] [rbp-A0h] BYREF
  unsigned __int64 v41; // [rsp+B8h] [rbp-38h]

  v41 = __readfsqword(0x28u);
  v2 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
  entities.m_Size = 0;
  v3 = v2;
  pTarget = v2;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  Caster = CDOTA_Buff::GetCaster(this);
  v5 = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, Caster, 1400.0, &entities, 2, 19, 384, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v9 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = CEntityHandle::gm_pEntityList;
        v10 = &entities.m_Memory.m_pMemory[v9];
        m_Index = v10->m_Index;
        if ( v10->m_Index + 2 > 1 )
        {
          v12 = v10->m_Index;
          v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Index) >> 9) & 0x3F];
          if ( v13 != 0 )
          {
            v14 = v12 & 0x1FF;
            v8 = (8 * v14);
            v15 = &v13[v14];
            if ( v15 != 0 && m_Index == v15->m_EHandle.m_Index )
            {
              m_pInstance = v15->m_pInstance;
              if ( v15->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              {
                m_Value = m_pInstance->m_nUnitState64.m_Value;
                if ( (m_Value & 0x200) == 0
                  && !m_pInstance->m_bIsWaitingToSpawn.m_Value
                  && (m_Value & 0x100) == 0
                  && pTarget != m_pInstance )
                {
                  break;
                }
              }
            }
          }
        }
        if ( entities.m_Size <= ++v9 )
          goto LABEL_16;
      }
      if ( CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_ogre_magi_ignite", 0) == 0 )
        break;
      ++v9;
      v3 = m_pInstance;
      if ( entities.m_Size <= v9 )
        goto LABEL_16;
    }
    v3 = m_pInstance;
LABEL_17:
    m_pEntity = v3->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v19 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v20 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v20 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hTarget.m_Index) = v20 | this->m_hTarget.m_Index & 0x8000;
      this->m_hTarget.m_Index = (v19 << 15) | this->m_hTarget.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hTarget.m_Index = -1;
    }
    info.bProvidesVision = 0;
    info.hSource.m_Index = -1;
    info.hTarget.m_Index = -1;
    info.colorGemColor = 0;
    info.bDrawsOnMinimap = 0;
    memset(&info.pAbility, 0, 20);
    info.vSourceLoc = vec3_origin;
    info.iSourceAttachment = 1;
    info.iVisionTeamNumber = -1;
    info.iVisionRadius = 0;
    info.bDodgeable = 1;
    info.bIsAttack = 0;
    info.bVisibleToEnemies = 1;
    info.pKVExtraData = 0;
    info.bReplaceExisting = 0;
    info.flExpireTime = 0.0;
    info.flMaxImpactTime = 0.0;
    info.bServerOnly = 0;
    info.pszEffectName = "particles/units/heroes/hero_ogre_magi/ogre_magi_ignite.vpcf";
    info.pAbility = CDOTA_Buff::GetAbility(this);
    Ability = CDOTA_Buff::GetAbility(this);
    info.iMoveSpeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "projectile_speed", -1, 0);
    v22 = CDOTA_Buff::GetCaster(this);
    if ( v22 != 0 && (v23 = v22->m_pEntity) != 0 )
    {
      v24 = (v23->m_EHandle.m_Index >> 15) - (v23->m_flags & 1);
      v25 = 0x7FFF;
      if ( v23->m_EHandle.m_Index != -1 )
        v25 = v23->m_EHandle.m_Index & 0x7FFF;
      LOWORD(info.hSource.m_Index) = v25 | info.hSource.m_Index & 0x8000;
      info.hSource.m_Index = (v24 << 15) | info.hSource.m_Index & 0x7FFF;
    }
    else
    {
      info.hSource.m_Index = -1;
    }
    v26 = v3->m_pEntity;
    if ( v26 != 0 )
    {
      v27 = (v26->m_EHandle.m_Index >> 15) - (v26->m_flags & 1);
      v28 = 0x7FFF;
      if ( v26->m_EHandle.m_Index != -1 )
        v28 = v26->m_EHandle.m_Index & 0x7FFF;
      LOWORD(info.hTarget.m_Index) = v28 | info.hTarget.m_Index & 0x8000;
      info.hTarget.m_Index = (v27 << 15) | info.hTarget.m_Index & 0x7FFF;
    }
    else
    {
      info.hTarget.m_Index = -1;
    }
    info.iSourceAttachment = 1;
    CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
    v29 = CDOTA_Buff::GetCaster(this);
    DOTA_EmitSound(10, "Hero_OgreMagi.Ignite.Cast", v29);
    v30 = CDOTA_Buff::GetCaster(this);
    ParticleManager = GetParticleManager();
    LODWORD(v30) = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/units/heroes/hero_ogre_magi/ogre_magi_multicast_counter.vpcf",
                     7,
                     v30,
                     0,
                     0);
    v32 = (*(this->_vptr_CDOTA_Buff + 27))(this);
    *&v38 = this->m_nMultiCastCount;
    *(&v38 + 1) = v32;
    v33 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v33, v30, 1, v38, 0.0);
    v34 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v34, v30);
    m_nMultiCastCount = this->m_nMultiCastCount;
    v36 = "Hero_OgreMagi.Fireblast.x1";
    if ( m_nMultiCastCount != 2 )
    {
      v36 = "Hero_OgreMagi.Fireblast.x3";
      if ( m_nMultiCastCount == 3 )
        v36 = "Hero_OgreMagi.Fireblast.x2";
    }
    Msg("ping pong %d %s\n", m_nMultiCastCount, v36);
    DOTA_EmitSound(10, v36, v3);
    goto LABEL_34;
  }
  v3 = pTarget;
LABEL_16:
  if ( v3 != 0 )
    goto LABEL_17;
LABEL_34:
  ++this->m_nMultiCastCount;
  (*(this->_vptr_CDOTA_Buff + 26))(this, v8);
  if ( (*(this->_vptr_CDOTA_Buff + 27))(this) <= 0 )
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
  else
  {
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
      if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    }
  }
}


// CDOTA_Ability_Ogre_Magi_Bloodlust::~CDOTA_Ability_Ogre_Magi_Bloodlust  (line 1043, @0x0000000002c99530, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Ogre_Magi_Bloodlust::~CDOTA_Ability_Ogre_Magi_Bloodlust(
        CDOTA_Ability_Ogre_Magi_Bloodlust *const this)
{
  this->_vptr_IHandleEntity = &off_45FB4B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Ogre_Magi_Bloodlust::~CDOTA_Ability_Ogre_Magi_Bloodlust  (line 1043, @0x0000000002c99550, libserver.so)  // inlines: ~CDOTA_Ability_Ogre_Magi_Bloodlust
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Ogre_Magi_Bloodlust::~CDOTA_Ability_Ogre_Magi_Bloodlust(
        CDOTA_Ability_Ogre_Magi_Bloodlust *const this)
{
  this->_vptr_IHandleEntity = &off_45FB4B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Ogre_Magi_Bloodlust::Schema_DynamicBinding  (line 1045, @0x0000000002c8c110, libserver.so)
// globals: CDOTA_Ability_Ogre_Magi_Bloodlust::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Ogre_Magi_Bloodlust::Schema_DynamicBinding(
        const CDOTA_Ability_Ogre_Magi_Bloodlust *const this)
{
  return CDOTA_Ability_Ogre_Magi_Bloodlust::s_pSchemaBinding;
}


// CDOTA_Ability_Ogre_Magi_Bloodlust::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1045, @0x0000000002c8c120, libserver.so)
// globals: CDOTA_Ability_Ogre_Magi_Bloodlust::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Ogre_Magi_Bloodlust::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Ogre_Magi_Bloodlust::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Ogre_Magi_Bloodlust::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Ogre_Magi_Bloodlust::CEntityInstanceEntityClass::DestructInstance  (line 1045, @0x0000000002c8c130, libserver.so)  // inlines: Destruct<CDOTA_Ability_Ogre_Magi_Bloodlust>
void __fastcall CDOTA_Ability_Ogre_Magi_Bloodlust::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Ogre_Magi_Bloodlust::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Ogre_Magi_Bloodlust::CEntityInstanceEntityClass::FreeInstance  (line 1045, @0x0000000002c8c150, libserver.so)
void __fastcall CDOTA_Ability_Ogre_Magi_Bloodlust::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Ogre_Magi_Bloodlust::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Ogre_Magi_Bloodlust::CEntityInstanceEntityClass::CanAllocate  (line 1045, @0x0000000002c8c170, libserver.so)
bool __fastcall CDOTA_Ability_Ogre_Magi_Bloodlust::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Ogre_Magi_Bloodlust::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Ogre_Magi_Bloodlust::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1045, @0x0000000002c8c180, libserver.so)
// globals: CDOTA_Ability_Ogre_Magi_Bloodlust::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Ogre_Magi_Bloodlust::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Ogre_Magi_Bloodlust::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Ogre_Magi_Bloodlust::s_pSchemaBinding;
}


// CDOTA_Ability_Ogre_Magi_Bloodlust::CEntityInstanceEntityClass::AllocateInstance  (line 1045, @0x0000000002c90be0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Ogre_Magi_Bloodlust::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Ogre_Magi_Bloodlust::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Ogre_Magi_Bloodlust::CEntityInstanceEntityClass::ConstructInstance  (line 1045, @0x0000000002c954b0, libserver.so)  // inlines: CDOTA_Ability_Ogre_Magi_Bloodlust, Construct<CDOTA_Ability_Ogre_Magi_Bloodlust>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Ogre_Magi_Bloodlust::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Ogre_Magi_Bloodlust::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45FB4B0;
  }
  return p;
}


// CDOTA_Ability_Ogre_Magi_Bloodlust::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1045, @0x0000000002ca3290, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Ogre_Magi_Bloodlust::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Ogre_Magi_Bloodlust::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Ogre_Magi_Bloodlust::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1045, @0x0000000002ca32b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Ogre_Magi_Bloodlust::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Ogre_Magi_Bloodlust::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Ogre_Magi_Bloodlust::GetEntityClassInternal  (line 1045, @0x0000000002cbc330, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "CDOTA_Ability_Ogre_Magi_Bloodlust"
// globals: `guard variable for'CDOTA_Ability_Ogre_Magi_Bloodlust::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_BloodlustClass, CDOTA_Ability_Ogre_Magi_Bloodlust::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_BloodlustClass, __dso_handle, CDOTA_Ability_Ogre_Magi_Bloodlust::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Ogre_Magi_Bloodlust::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_BloodlustClassInfo, CDOTA_Ability_Ogre_Magi_Bloodlust::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_BloodlustClassInfo
CEntityClass *__cdecl CDOTA_Ability_Ogre_Magi_Bloodlust::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Ogre_Magi_Bloodlust::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_BloodlustClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Ogre_Magi_Bloodlust::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_BloodlustClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Ogre_Magi_Bloodlust::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_BloodlustClass);
    CDOTA_Ability_Ogre_Magi_Bloodlust::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_BloodlustClass._vptr_CEntityClass = off_45FB430;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Ogre_Magi_Bloodlust::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_BloodlustClass);
    __cxa_atexit(
      CDOTA_Ability_Ogre_Magi_Bloodlust::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Ogre_Magi_Bloodlust::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_BloodlustClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Ogre_Magi_BloodlustClass != 0 )
    return &CDOTA_Ability_Ogre_Magi_Bloodlust::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_BloodlustClass;
  if ( `guard variable for'CDOTA_Ability_Ogre_Magi_Bloodlust::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_BloodlustClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Ogre_Magi_Bloodlust::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_BloodlustClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Ogre_Magi_Bloodlust::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_BloodlustClassInfo,
      "CDOTA_Ability_Ogre_Magi_Bloodlust",
      "ogre_magi_bloodlust",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Ogre_Magi_Bloodlust::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_BloodlustClassInfo);
  }
  CDOTA_Ability_Ogre_Magi_Bloodlust::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_BloodlustClass.m_pClassInfo = &CDOTA_Ability_Ogre_Magi_Bloodlust::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_BloodlustClassInfo;
  CDOTA_Ability_Ogre_Magi_Bloodlust::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_BloodlustClass.m_pBaseClassInfo = CDOTA_Ability_Ogre_Magi_Bloodlust::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_BloodlustClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Ogre_Magi_BloodlustClass = &CDOTA_Ability_Ogre_Magi_Bloodlust::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_BloodlustClass;
  CDOTA_Ability_Ogre_Magi_Bloodlust::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Ogre_Magi_BloodlustClassInfo.m_pClass = &CDOTA_Ability_Ogre_Magi_Bloodlust::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_BloodlustClass;
  CDOTA_Ability_Ogre_Magi_Bloodlust::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_BloodlustClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Ogre_Magi_BloodlustClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Ogre_Magi_Bloodlust::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Ogre_Magi_BloodlustClass;
}


// CDOTA_Ability_Ogre_Magi_Bloodlust::GetIntrinsicModifierName  (line 1049, @0x0000000002c8c190, libserver.so)
// strings: "modifier_ogre_magi_bloodlust_autocast"
const char *__fastcall CDOTA_Ability_Ogre_Magi_Bloodlust::GetIntrinsicModifierName(
        CDOTA_Ability_Ogre_Magi_Bloodlust *const this)
{
  return "modifier_ogre_magi_bloodlust_autocast";
}


// CDOTA_Ability_Ogre_Magi_Bloodlust::GetAssociatedSecondaryAbilities  (line 1056, @0x0000000002c8c1a0, libserver.so)
// strings: "ogre_magi_multicast"
const char *__fastcall CDOTA_Ability_Ogre_Magi_Bloodlust::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Ogre_Magi_Bloodlust *const this)
{
  return "ogre_magi_multicast";
}


// CDOTA_Ability_Ogre_Magi_Bloodlust::YouForgotToImplementOrDeclareServerClass  (line 1062, @0x0000000002c1e4a0, libserver.so)
int __fastcall CDOTA_Ability_Ogre_Magi_Bloodlust::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Ogre_Magi_Bloodlust *const this)
{
  return 0;
}


// CDOTA_Ability_Ogre_Magi_Bloodlust::GetServerClass  (line 1062, @0x0000000002c34bf0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Ogre_Magi_Bloodlust::GetServerClass(
        CDOTA_Ability_Ogre_Magi_Bloodlust *const this)
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


// CDOTA_Ability_Ogre_Magi_Bloodlust::OnAbilityPhaseStart  (line 1071, @0x0000000002c1ea20, libserver.so)
// calls: CDOTABaseAbility::GetCaster, DOTA_EmitSound
// strings: "Hero_OgreMagi.Bloodlust.Cast"
bool __fastcall CDOTA_Ability_Ogre_Magi_Bloodlust::OnAbilityPhaseStart(CDOTA_Ability_Ogre_Magi_Bloodlust *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(8, "Hero_OgreMagi.Bloodlust.Cast", Caster);
  return 1;
}


// CDOTA_Ability_Ogre_Magi_Bloodlust::OnSpellStart  (line 1080, @0x0000000002c76e50, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetAdditionalCastCount, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex (21 total)
// strings: "modifier_ogre_magi_bloodlust", "Hero_OgreMagi.Bloodlust.Target", "Hero_OgreMagi.Bloodlust.Target.FP", "particles/units/heroes/hero_ogre_magi/ogre_magi_bloodlust_cast.vpcf", "attach_attack1", "attach_hitloc" (9 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Ogre_Magi_Bloodlust::OnSpellStart(CDOTA_Ability_Ogre_Magi_Bloodlust *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r15d
  CDOTA_BaseNPC *v9; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v11; // r13
  CDOTA_ParticleManager *v12; // rax
  CDOTA_BaseNPC *v13; // r13
  CDOTA_ParticleManager *v14; // rax
  const Vector *v15; // r13
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  CDOTA_Ability_Ogre_Magi_Multicast *AbilityByName; // rax
  CDOTABaseAbility *v21; // r12
  int AdditionalCastCount; // r15d
  CDOTA_BaseNPC *v23; // r12
  CDOTA_ParticleManager *v24; // rax
  CDOTA_ParticleManager *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  CDOTA_BaseNPC *v27; // r12
  CDOTA_BaseNPC *v28; // rax
  const Vector *v29; // r13
  CDOTA_BaseNPC *v30; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v32; // cx
  __int64 v33; // rbx
  int v34; // r12d
  CHandle<CBaseEntity> *v35; // rdx
  uint32 m_Index; // eax
  __int16 v37; // cx
  CEntityIdentity *v38; // rdx
  CEntityIdentity *v39; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 m_iUnitType; // eax
  CDOTA_BaseNPC *v42; // rax
  float flMulticastAOE; // [rsp+1Ch] [rbp-94h]
  CHandle<CBaseEntity> src; // [rsp+30h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hTargets; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v47; // [rsp+78h] [rbp-38h]

  v47 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    KeyValues::KeyValues(&kv, "ogre_magi_bloodlust");
    KeyValues::SetFloat(&kv, "duration", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_ogre_magi_bloodlust", &kv, 0);
    DOTA_EmitSound(8, "Hero_OgreMagi.Bloodlust.Target", v3);
    DOTA_EmitSound(1, "Hero_OgreMagi.Bloodlust.Target.FP", v3);
    v6 = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_ogre_magi/ogre_magi_bloodlust_cast.vpcf",
                 2,
                 v6,
                 0,
                 0);
    v9 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
    v11 = CDOTABaseAbility::GetCaster(this);
    v12 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v12, Particle, 0, v11, 5, "attach_attack1", *AbsOrigin, 1);
    v13 = CDOTABaseAbility::GetCaster(this);
    v14 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v14, Particle, 1, v13, 1, 0, vec3_invalid, 1);
    v15 = CBaseEntity::GetAbsOrigin(v3);
    v16 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v16, Particle, 2, v3, 5, "attach_hitloc", *v15, 1);
    v17 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v17, Particle, 3, v3, 1, 0, vec3_invalid, 1);
    v18 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v18, Particle);
    v19 = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v19, "ogre_magi_multicast", 0);
    v21 = AbilityByName;
    if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 && !AbilityByName->m_bStolen.m_Value )
    {
      AdditionalCastCount = CDOTA_Ability_Ogre_Magi_Multicast::GetAdditionalCastCount(AbilityByName);
      if ( AdditionalCastCount > 0 )
      {
        flMulticastAOE = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v21, "bloodlust_aoe", -1, 0);
        v23 = CDOTABaseAbility::GetCaster(this);
        v24 = GetParticleManager();
        LODWORD(v23) = CDOTA_ParticleManager::CreateParticle(
                         v24,
                         "particles/units/heroes/hero_ogre_magi/ogre_magi_multicast.vpcf",
                         7,
                         v3,
                         0,
                         v23);
        *(&hTargets.m_Size + 1) = 1065353216;
        *&hTargets.m_Size = (AdditionalCastCount + 1);
        v25 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControl(v25, v23, 1, *&hTargets.m_Size, 0.0);
        v26 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v26, v23);
        hTargets.m_Size = 0;
        hTargets.m_Memory.m_pMemory = 0;
        hTargets.m_Memory.m_nAllocationCount = 0;
        hTargets.m_Memory.m_nGrowSize = 0;
        v27 = CDOTABaseAbility::GetCaster(this);
        v28 = CDOTABaseAbility::GetCaster(this);
        v29 = CBaseEntity::GetAbsOrigin(v28);
        v30 = CDOTABaseAbility::GetCaster(this);
        FindUnitsInRadius(v30->m_iTeamNum.m_Value, v29, v27, flMulticastAOE, &hTargets, 1, 7, 64, 0, 0);
        m_pEntity = v3->m_pEntity;
        src.m_Index = -1;
        if ( m_pEntity != 0 )
        {
          v32 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v32 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v32 & 0x7FFF;
        }
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FindAndRemove(&hTargets, &src);
        if ( hTargets.m_Size > 0 )
        {
          v33 = 0;
          v34 = 0;
          do
          {
            while ( 1 )
            {
              v35 = &hTargets.m_Memory.m_pMemory[v33];
              m_Index = hTargets.m_Memory.m_pMemory[v33].m_Index;
              if ( m_Index + 2 > 1 )
              {
                v37 = v35->m_Index;
                v38 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v35->m_Index) >> 9) & 0x3F];
                if ( v38 != 0 )
                {
                  v39 = &v38[v37 & 0x1FF];
                  if ( v39 != 0 && m_Index == v39->m_EHandle.m_Index )
                  {
                    m_pInstance = v39->m_pInstance;
                    if ( v39->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                    {
                      m_iUnitType = m_pInstance->m_iUnitType;
                      if ( (m_iUnitType & 4) != 0 || (m_iUnitType & 0x10) == 0 )
                        break;
                    }
                  }
                }
              }
              ++v34;
              ++v33;
              if ( hTargets.m_Size <= v34 )
                goto LABEL_26;
            }
            if ( AdditionalCastCount == 0 )
              break;
            --AdditionalCastCount;
            v42 = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, v42, this, "modifier_ogre_magi_bloodlust", &kv, 0);
            DOTA_EmitSound(1, "Hero_OgreMagi.Bloodlust.Target.FP", m_pInstance);
            ++v34;
            ++v33;
          }
          while ( hTargets.m_Size > v34 );
        }
LABEL_26:
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hTargets);
      }
    }
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Ogre_Magi_Bloodlust::GetCooldown  (line 1153, @0x0000000002c57af0, libserver.so)
// calls: CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "ogre_magi_multicast", "bloodlust_cooldown"
float __fastcall CDOTA_Ability_Ogre_Magi_Bloodlust::GetCooldown(
        CDOTA_Ability_Ogre_Magi_Bloodlust *const this,
        int iLevel)
{
  __m128i v3; // xmm0
  unsigned int v4; // r14d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v7; // rbx
  float LevelSpecialValue; // xmm0_4
  __m128i v9; // xmm1

  *v3.m128i_i32 = CDOTABaseAbility::GetCooldown(this, iLevel);
  v4 = _mm_cvtsi128_si32(v3);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "ogre_magi_multicast", 0);
  v7 = AbilityByName;
  if ( AbilityByName != 0 && CDOTABaseAbility::GetEffectiveLevel(AbilityByName) >= 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "bloodlust_cooldown", -1, 0);
    v9 = _mm_cvtsi32_si128(v4);
    *v9.m128i_i32 = *v9.m128i_i32 - LevelSpecialValue;
    v4 = _mm_cvtsi128_si32(v9);
  }
  return *&v4;
}


// CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast::~CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast  (line 1171, @0x0000000002c910e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast::~CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast(
        CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast *const this)
{
  this->_vptr_CDOTA_Buff = &off_45FBF70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast::~CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast  (line 1171, @0x0000000002c91100, libserver.so)  // inlines: ~CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast::~CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast(
        CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast *const this)
{
  this->_vptr_CDOTA_Buff = &off_45FBF70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast::IsHidden  (line 1176, @0x0000000002c8c1b0, libserver.so)
bool __fastcall CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast::IsHidden(
        CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast *const this)
{
  return 1;
}


// CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast::IsPurgable  (line 1177, @0x0000000002c8c1c0, libserver.so)
bool __fastcall CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast::IsPurgable(
        CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast *const this)
{
  return 0;
}


// CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast::ShouldSendToClients  (line 1179, @0x0000000002c8c1d0, libserver.so)
bool __fastcall CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast::ShouldSendToClients(
        CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast *const this)
{
  return 0;
}


// CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast::GetAttributes  (line 1183, @0x0000000002c8c1e0, libserver.so)
int __fastcall CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast::GetAttributes(
        CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast *const this)
{
  return 4;
}


// CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast::OnCreated  (line 1192, @0x0000000002c1ee30, libserver.so)
// calls: CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast::OnCreated(
        CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4

  CDOTA_Buff::StartIntervalThink(this, 1.0, v2);
}


// CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast::OnIntervalThink  (line 1199, @0x0000000002c81170, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GrowMemory, IndexToIdentity, IsAttacking, IsFullyCastable, IsTrained, IsValid, LookupEntity, RemoveAll, Reset, ToDOTABaseNPC, entindex, operator CEntityInstance*, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlVector
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CDOTA_BaseNPC::IsChanneling, CDOTA_BaseNPC::FindModifierByName, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CEntityHandle::operator CEntityInstance*, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CUnitOrders::CUnitOrders (17 total)
// strings: "modifier_ogre_magi_bloodlust"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast::OnIntervalThink(
        CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  uint32 m_Index; // edx
  unsigned __int16 v4; // cx
  CEntityIdentity *v5; // rax
  CEntityIdentity *v6; // rax
  CDOTABaseAbility *Ability; // r12
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTABaseAbility *v10; // rax
  __m128i v11; // xmm1
  float v12; // r14d
  CDOTA_BaseNPC *v13; // r13
  CDOTA_BaseNPC *v14; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v16; // rax
  __int64 v17; // r13
  int v18; // r12d
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC *v20; // r14
  vec_t y; // xmm0_4
  CDOTA_BaseNPC *v22; // rax
  CEntityIndex v23; // eax
  __int64 m_Size; // r12
  int32 m_Data; // r13d
  int v26; // eax
  CEntityIndex *v27; // rax
  CDOTABaseAbility *v28; // rax
  CUnitOrders newOrders; // [rsp+20h] [rbp-70h] BYREF

  Caster = CDOTA_Buff::GetCaster(this);
  m_Index = Caster->m_hAttackTarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = Caster->m_hAttackTarget.m_Index,
        (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v4 >> 9) & 0x3F]) == 0)
    || (v6 = &v5[v4 & 0x1FF]) == 0
    || m_Index != v6->m_EHandle.m_Index
    || v6->m_pInstance == 0 )
  {
    if ( SLOBYTE(CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value) >= 0 )
    {
      Ability = CDOTA_Buff::GetAbility(this);
      if ( CDOTABaseAbility::GetEffectiveLevel(Ability) >= 0
        && (*(Ability->_vptr_IHandleEntity + 245))(Ability) != 0
        && CDOTABaseAbility::IsOwnersManaEnough(Ability)
        && CDOTABaseAbility::IsOwnersGoldEnough(Ability, -1)
        && CDOTA_Buff::GetAbility(this)->m_bAutoCastState.m_Value )
      {
        v8 = CDOTA_Buff::GetCaster(this);
        if ( !CDOTA_BaseNPC::IsChanneling(v8) )
        {
          v9 = CDOTA_Buff::GetCaster(this);
          if ( CDOTA_BaseNPC::FindModifierByName(v9, "modifier_ogre_magi_bloodlust", 0) != 0 )
          {
            newOrders.m_nIssuerPlayerIndex = 0;
            *&newOrders.m_nUnits.m_Size = 0;
            newOrders.m_nUnits.m_Memory.m_pMemory = 0;
            v10 = CDOTA_Buff::GetAbility(this);
            *v11.m128i_i32 = (*(v10->_vptr_IHandleEntity + 229))(v10, &vec3_origin, 0);
            v12 = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
            v13 = CDOTA_Buff::GetCaster(this);
            v14 = CDOTA_Buff::GetCaster(this);
            AbsOrigin = CBaseEntity::GetAbsOrigin(v14);
            v16 = CDOTA_Buff::GetCaster(this);
            FindUnitsInRadius(v16->m_iTeamNum.m_Value, AbsOrigin, v13, v12, &newOrders, 1, 1, 0x2000, 0, 0);
            v17 = 0;
            v18 = 0;
            if ( newOrders.m_nIssuerPlayerIndex > 0 )
            {
              while ( 1 )
              {
                v19 = CEntityHandle::operator CEntityInstance *((*&newOrders.m_nUnits.m_Size + v17));
                v20 = v19;
                if ( v19 != 0
                  && v19->m_bIsDOTANPC
                  && CDOTA_BaseNPC::FindModifierByName(v19, "modifier_ogre_magi_bloodlust", 0) == 0 )
                {
                  break;
                }
                ++v18;
                v17 += 4;
                if ( newOrders.m_nIssuerPlayerIndex <= v18 )
                  goto LABEL_27;
              }
            }
            else
            {
LABEL_27:
              v20 = 0;
            }
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&newOrders);
          }
          else
          {
            v20 = CDOTA_Buff::GetCaster(this);
          }
          if ( v20 != 0 )
          {
            CUnitOrders::CUnitOrders(&newOrders);
            newOrders.m_nUnits.m_Size = 0;
            newOrders.m_nOrderType = 0;
            newOrders.m_nTargetIndex.m_Data = 0;
            newOrders.m_nAbilityIndex.m_Data = 0;
            newOrders.m_bQueue = 0;
            newOrders.m_vPosition.x = vec3_origin.x;
            y = vec3_origin.y;
            newOrders.m_nIssuerPlayerIndex = -1;
            newOrders.m_vPosition.y = y;
            newOrders.m_vPosition.z = vec3_origin.z;
            v22 = CDOTA_Buff::GetCaster(this);
            v23.m_Data = CEntityInstance::GetEntityIndex(v22).m_Data;
            m_Size = newOrders.m_nUnits.m_Size;
            m_Data = v23.m_Data;
            v26 = newOrders.m_nUnits.m_Size;
            if ( newOrders.m_nUnits.m_Size == newOrders.m_nUnits.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
              v26 = newOrders.m_nUnits.m_Size;
            }
            newOrders.m_nUnits.m_Size = v26 + 1;
            v27 = &newOrders.m_nUnits.m_Memory.m_pMemory[m_Size];
            if ( v27 != 0 )
              v27->m_Data = m_Data;
            newOrders.m_nOrderType = 6;
            v28 = CDOTA_Buff::GetAbility(this);
            newOrders.m_nAbilityIndex = CEntityInstance::GetEntityIndex(v28);
            newOrders.m_nTargetIndex = CEntityInstance::GetEntityIndex(v20);
            DOTA_ExecuteOrders(&newOrders, 0, 0, 0);
            CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::~CUtlVectorBase(&newOrders.m_nUnits);
          }
        }
      }
    }
  }
}


// CDOTA_Modifier_Ogre_Magi_Bloodlust::~CDOTA_Modifier_Ogre_Magi_Bloodlust  (line 1259, @0x0000000002c91090, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Ogre_Magi_Bloodlust::~CDOTA_Modifier_Ogre_Magi_Bloodlust(
        CDOTA_Modifier_Ogre_Magi_Bloodlust *const this)
{
  this->_vptr_CDOTA_Buff = &off_45FC290;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Ogre_Magi_Bloodlust::~CDOTA_Modifier_Ogre_Magi_Bloodlust  (line 1259, @0x0000000002c910b0, libserver.so)  // inlines: ~CDOTA_Modifier_Ogre_Magi_Bloodlust
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Ogre_Magi_Bloodlust::~CDOTA_Modifier_Ogre_Magi_Bloodlust(
        CDOTA_Modifier_Ogre_Magi_Bloodlust *const this)
{
  this->_vptr_CDOTA_Buff = &off_45FC290;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Ogre_Magi_Bloodlust::GetEffectName  (line 1267, @0x0000000002c8c1f0, libserver.so)
// strings: "particles/units/heroes/hero_ogre_magi/ogre_magi_bloodlust_buff.vpcf"
const char *__fastcall CDOTA_Modifier_Ogre_Magi_Bloodlust::GetEffectName(
        CDOTA_Modifier_Ogre_Magi_Bloodlust *const this)
{
  return "particles/units/heroes/hero_ogre_magi/ogre_magi_bloodlust_buff.vpcf";
}


// CDOTA_Modifier_Ogre_Magi_Bloodlust::OnCreated  (line 1286, @0x0000000002c72b50, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName
// strings: "modelscale", "special_bonus_unique_ogre_magi"
void __fastcall CDOTA_Modifier_Ogre_Magi_Bloodlust::OnCreated(
        CDOTA_Modifier_Ogre_Magi_Bloodlust *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_attack_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_10:
    this->bonus_movement_speed = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_11;
  }
  this->bonus_attack_speed = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_10;
LABEL_3:
  this->bonus_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_movement_speed", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->modelscale = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "modelscale", -1, 0);
    goto LABEL_5;
  }
LABEL_11:
  this->modelscale = 0.0;
LABEL_5:
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_ogre_magi", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->bonus_attack_speed += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
}


// CDOTA_Modifier_Ogre_Magi_Bloodlust::OnRefresh  (line 1302, @0x0000000002c72c80, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName
// strings: "modelscale", "special_bonus_unique_ogre_magi"
void __fastcall CDOTA_Modifier_Ogre_Magi_Bloodlust::OnRefresh(
        CDOTA_Modifier_Ogre_Magi_Bloodlust *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_attack_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_10:
    this->bonus_movement_speed = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_11;
  }
  this->bonus_attack_speed = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_10;
LABEL_3:
  this->bonus_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_movement_speed", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->modelscale = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "modelscale", -1, 0);
    goto LABEL_5;
  }
LABEL_11:
  this->modelscale = 0.0;
LABEL_5:
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_ogre_magi", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->bonus_attack_speed += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
}


// CDOTA_Modifier_Ogre_Magi_Bloodlust::DeclareFunctions  (line 1318, @0x0000000002c1e4b0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Ogre_Magi_Bloodlust::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Ogre_Magi_Bloodlust::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Ogre_Magi_Bloodlust::ModelScale(CModifierParams const&)
void __fastcall CDOTA_Modifier_Ogre_Magi_Bloodlust::DeclareFunctions(CDOTA_Modifier_Ogre_Magi_Bloodlust *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_Ogre_Magi_Bloodlust::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[13].__pfn = CDOTA_Modifier_Ogre_Magi_Bloodlust::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[153].__pfn = CDOTA_Modifier_Ogre_Magi_Bloodlust::ModelScale;
  this->m_Functions[153].__delta = 0;
}


// CDOTA_Modifier_Ogre_Magi_Bloodlust::GetModifierAttackSpeedBonus_Constant  (line 1327, @0x0000000002c1e510, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Ogre_Magi_Bloodlust::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Ogre_Magi_Bloodlust *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Ogre_Magi_Bloodlust::GetModifierMoveSpeedBonus_Percentage  (line 1334, @0x0000000002c1e530, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Ogre_Magi_Bloodlust::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Ogre_Magi_Bloodlust *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Ogre_Magi_Bloodlust::ModelScale  (line 1341, @0x0000000002c1e550, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Ogre_Magi_Bloodlust::ModelScale(
        CDOTA_Modifier_Ogre_Magi_Bloodlust *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->modelscale) << 32) | 1;
  return result;
}


