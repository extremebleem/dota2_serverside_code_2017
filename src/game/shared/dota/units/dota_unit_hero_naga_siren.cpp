// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_naga_siren.cpp:32
class CDOTA_Unit_Hero_Naga_Siren : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Naga_Siren(CDOTA_Unit_Hero_Naga_Siren &);
	CDOTA_Unit_Hero_Naga_Siren(CDOTA_Unit_Hero_Naga_Siren &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool CanSpeak(int);
	CDOTA_Unit_Hero_Naga_Siren();
	virtual bool OnLoadState(KeyValues *);
	virtual ~CDOTA_Unit_Hero_Naga_Siren();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[459] CanSpeak
	// vtable[467] OnLoadState
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_naga_siren.cpp:70
class C_CDOTA_Unit_Hero_Naga_Siren_MapInstall {
	C_CDOTA_Unit_Hero_Naga_Siren_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_naga_siren.cpp:83
class CDOTA_Ability_NagaSiren_MirrorImage : public CDOTABaseAbility {
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
	CDOTA_Ability_NagaSiren_MirrorImage(CDOTA_Ability_NagaSiren_MirrorImage &);
	CDOTA_Ability_NagaSiren_MirrorImage(CDOTA_Ability_NagaSiren_MirrorImage &);
	CDOTA_Ability_NagaSiren_MirrorImage();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_NagaSiren_MirrorImage();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// sizeof = 936
};

// src/game/shared/dota/units/dota_unit_hero_naga_siren.cpp:94
class C_CDOTA_Ability_NagaSiren_MirrorImage_MapInstall {
	C_CDOTA_Ability_NagaSiren_MirrorImage_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_naga_siren.cpp:126
class CDOTA_Modifier_NagaSiren_MirrorImage : public CDOTA_Buff {
public:

	CDOTA_Modifier_NagaSiren_MirrorImage();
	virtual bool IsHidden();
	virtual void OnDestroy();
	virtual void CheckState(CDOTABuffState &);
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_NagaSiren_MirrorImage();

	// vtable[11] IsHidden
	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// vtable[67] GetEffectName
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_naga_siren.cpp:212
class CDOTA_Ability_NagaSiren_Ensnare : public CDOTABaseAbility {
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
	CDOTA_Ability_NagaSiren_Ensnare(CDOTA_Ability_NagaSiren_Ensnare &);
	CDOTA_Ability_NagaSiren_Ensnare(CDOTA_Ability_NagaSiren_Ensnare &);
	CDOTA_Ability_NagaSiren_Ensnare();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool OnAbilityPhaseStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_NagaSiren_Ensnare();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// vtable[289] OnProjectileHit
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_naga_siren.cpp:343
class CDOTA_Modifier_NagaSiren_Ensnare : public CDOTA_Modifier_Rooted {
public:

	CDOTA_Modifier_NagaSiren_Ensnare();
	virtual void DeclareFunctions();
	virtual void CheckState(CDOTABuffState &);
	virtual const char * GetEffectName();
	ModifierVariant_t OnStateChanged(const CModifierParams &);
	virtual int GetPriority();
	virtual ~CDOTA_Modifier_NagaSiren_Ensnare();

	// vtable[65] DeclareFunctions
	// vtable[5] CheckState
	// vtable[67] GetEffectName
	// vtable[6] GetPriority
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_naga_siren.cpp:393
class CDOTA_Ability_NagaSiren_RipTide : public CDOTABaseAbility {
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
	CDOTA_Ability_NagaSiren_RipTide(CDOTA_Ability_NagaSiren_RipTide &);
	CDOTA_Ability_NagaSiren_RipTide(CDOTA_Ability_NagaSiren_RipTide &);
	CDOTA_Ability_NagaSiren_RipTide();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual float GetAOERadius();
	virtual void OnSpellStart();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_NagaSiren_RipTide();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[333] GetAOERadius
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_naga_siren.cpp:406
class C_CDOTA_Ability_NagaSiren_RipTide_MapInstall {
	C_CDOTA_Ability_NagaSiren_RipTide_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_naga_siren.cpp:511
class CDOTA_Modifier_NagaSiren_RipTide : public CDOTA_Buff {
public:

private:

	int armor_reduction;  // +0xba8
	CDOTA_Modifier_NagaSiren_RipTide();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	virtual bool IsDebuff();
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_NagaSiren_RipTide();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[12] IsDebuff
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[89] GetModifierPhysicalArmorBonus
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_naga_siren.cpp:570
class CDOTA_Ability_NagaSiren_SongOfTheSiren : public CDOTABaseAbility {
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
	CDOTA_Ability_NagaSiren_SongOfTheSiren(CDOTA_Ability_NagaSiren_SongOfTheSiren &);
	CDOTA_Ability_NagaSiren_SongOfTheSiren(CDOTA_Ability_NagaSiren_SongOfTheSiren &);
	CDOTA_Ability_NagaSiren_SongOfTheSiren();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual void OnUpgrade();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_NagaSiren_SongOfTheSiren();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[268] OnUpgrade
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[322] GetStunDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_naga_siren.cpp:591
class CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel : public CDOTABaseAbility {
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
	CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel(CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel &);
	CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel(CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel &);
	CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual bool ProcsMagicStick();
	virtual void OnSpellStart();
	virtual Activity GetCastAnimation();
	virtual bool IsHiddenWhenStolen();
	virtual bool IsStealable();
	virtual ~CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[239] ProcsMagicStick
	// vtable[266] OnSpellStart
	// vtable[234] GetCastAnimation
	// vtable[306] IsHiddenWhenStolen
	// vtable[305] IsStealable
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_naga_siren.cpp:674
class CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8

	CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsPurgable();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual bool RemoveOnDeath();
	virtual bool IsPermanent();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual void OnAuraModifierApplied(CDOTA_BaseNPC *);
	virtual bool GetAuraEntityReject(CDOTA_BaseNPC *);
	virtual ~CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[54] RemoveOnDeath
	// vtable[23] IsPermanent
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[45] OnAuraModifierApplied
	// vtable[42] GetAuraEntityReject
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_naga_siren.cpp:778
class CDOTA_Modifier_NagaSiren_SongOfTheSiren : public CDOTA_Buff {
public:

private:

	float animation_rate;  // +0xba8
	float regen_rate;  // +0xbac
	float regen_rate_self;  // +0xbb0
	CDOTA_Modifier_NagaSiren_SongOfTheSiren();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	ModifierVariant_t GetOverrideAnimationRate(const CModifierParams &);
	ModifierVariant_t GetModifierRegenPercentage(const CModifierParams &);
	virtual bool IsPurgable();
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual int GetAttributes();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_NagaSiren_SongOfTheSiren();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[7] GetAttributes
	// vtable[5] CheckState
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_naga_siren.cpp:911
class CDOTA_Modifier_NagaSiren_SongOfTheSiren_IgnoreMe : public CDOTA_Buff {
public:

	CDOTA_Modifier_NagaSiren_SongOfTheSiren_IgnoreMe(CDOTA_Modifier_NagaSiren_SongOfTheSiren_IgnoreMe &);
	CDOTA_Modifier_NagaSiren_SongOfTheSiren_IgnoreMe(const CDOTA_Modifier_NagaSiren_SongOfTheSiren_IgnoreMe &);
	CDOTA_Modifier_NagaSiren_SongOfTheSiren_IgnoreMe();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_NagaSiren_SongOfTheSiren_IgnoreMe();

	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Naga_Siren::~CDOTA_Unit_Hero_Naga_Siren  (line 32, @0x0000000002c9a3b0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Naga_Siren::~CDOTA_Unit_Hero_Naga_Siren(CDOTA_Unit_Hero_Naga_Siren *const this)
{
  this->_vptr_IHandleEntity = &off_45E9A90;
  this->_vptr_INextBotEventResponder = &off_45EAA70;
  this->_vptr_CObstructionObject = &off_45EADA0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Naga_Siren::~CDOTA_Unit_Hero_Naga_Siren  (line 32, @0x0000000002c9a3f0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Naga_Siren
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Naga_Siren::~CDOTA_Unit_Hero_Naga_Siren(CDOTA_Unit_Hero_Naga_Siren *const this)
{
  this->_vptr_IHandleEntity = &off_45E9A90;
  this->_vptr_INextBotEventResponder = &off_45EAA70;
  this->_vptr_CObstructionObject = &off_45EADA0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Naga_Siren::Schema_DynamicBinding  (line 34, @0x0000000002c8b400, libserver.so)
// globals: CDOTA_Unit_Hero_Naga_Siren::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Naga_Siren::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Naga_Siren *const this)
{
  return CDOTA_Unit_Hero_Naga_Siren::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Naga_Siren::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 34, @0x0000000002c8b430, libserver.so)
// globals: CDOTA_Unit_Hero_Naga_Siren::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Naga_Siren::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Naga_Siren::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Naga_Siren::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Naga_Siren::CEntityInstanceEntityClass::DestructInstance  (line 34, @0x0000000002c8b440, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Naga_Siren>
void __fastcall CDOTA_Unit_Hero_Naga_Siren::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Naga_Siren::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Naga_Siren::CEntityInstanceEntityClass::FreeInstance  (line 34, @0x0000000002c8b460, libserver.so)
void __fastcall CDOTA_Unit_Hero_Naga_Siren::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Naga_Siren::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Naga_Siren::CEntityInstanceEntityClass::CanAllocate  (line 34, @0x0000000002c8b480, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Naga_Siren::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Naga_Siren::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Naga_Siren::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 34, @0x0000000002c8b490, libserver.so)
// globals: CDOTA_Unit_Hero_Naga_Siren::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Naga_Siren::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Naga_Siren::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Naga_Siren::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Naga_Siren::CEntityInstanceEntityClass::AllocateInstance  (line 34, @0x0000000002c90760, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Naga_Siren::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Naga_Siren::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Naga_Siren::CEntityInstanceEntityClass::ConstructInstance  (line 34, @0x0000000002c94190, libserver.so)  // inlines: CDOTA_Unit_Hero_Naga_Siren, Construct<CDOTA_Unit_Hero_Naga_Siren>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Naga_Siren::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Naga_Siren::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_45E9A90;
    *(p + 236) = &off_45EAA70;
    *(p + 257) = &off_45EADA0;
  }
  return p;
}


// CDOTA_Unit_Hero_Naga_Siren::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 34, @0x0000000002ca34b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Naga_Siren::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Naga_Siren::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Naga_Siren::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 34, @0x0000000002ca3a50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Naga_Siren::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Naga_Siren::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Naga_Siren::GetEntityClassInternal  (line 34, @0x0000000002cbc870, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "npc_dota_hero_naga_siren", "CDOTA_Unit_Hero_Naga_Siren"
// globals: `guard variable for'CDOTA_Unit_Hero_Naga_Siren::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Naga_SirenClass, CDOTA_Unit_Hero_Naga_Siren::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Naga_SirenClass, __dso_handle, CDOTA_Unit_Hero_Naga_Siren::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Naga_Siren::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Naga_SirenClassInfo, CDOTA_Unit_Hero_Naga_Siren::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Naga_SirenClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Naga_Siren::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Naga_Siren::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Naga_SirenClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Naga_Siren::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Naga_SirenClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Naga_Siren::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Naga_SirenClass);
    CDOTA_Unit_Hero_Naga_Siren::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Naga_SirenClass._vptr_CEntityClass = off_45E9A10;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Naga_Siren::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Naga_SirenClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Naga_Siren::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Naga_Siren::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Naga_SirenClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_Naga_SirenClass != 0 )
    return &CDOTA_Unit_Hero_Naga_Siren::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Naga_SirenClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Naga_Siren::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Naga_SirenClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Naga_Siren::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Naga_SirenClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Naga_Siren::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Naga_SirenClassInfo,
      "CDOTA_Unit_Hero_Naga_Siren",
      "npc_dota_hero_naga_siren",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Naga_Siren::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Naga_SirenClassInfo);
  }
  CDOTA_Unit_Hero_Naga_Siren::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Naga_SirenClass.m_pClassInfo = &CDOTA_Unit_Hero_Naga_Siren::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Naga_SirenClassInfo;
  CDOTA_Unit_Hero_Naga_Siren::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Naga_SirenClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Naga_Siren::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Naga_SirenClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_Naga_SirenClass = &CDOTA_Unit_Hero_Naga_Siren::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Naga_SirenClass;
  CDOTA_Unit_Hero_Naga_Siren::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Naga_SirenClassInfo.m_pClass = &CDOTA_Unit_Hero_Naga_Siren::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Naga_SirenClass;
  CDOTA_Unit_Hero_Naga_Siren::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Naga_SirenClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_Naga_SirenClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Naga_Siren::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Naga_SirenClass;
}


// CDOTA_Unit_Hero_Naga_Siren::CanSpeak  (line 47, @0x0000000002c1f5f0, libserver.so)
// calls: CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_naga_siren_song_of_the_siren_aura"
bool __fastcall CDOTA_Unit_Hero_Naga_Siren::CanSpeak(CDOTA_Unit_Hero_Naga_Siren *const this, int iConcept)
{
  return CDOTA_BaseNPC::FindModifierByName(this, "modifier_naga_siren_song_of_the_siren_aura", 0) == 0;
}


// CDOTA_Unit_Hero_Naga_Siren::OnLoadState  (line 55, @0x0000000002c1fd50, libserver.so)
// calls: CDOTA_BaseNPC_Hero::OnLoadState, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::SwapAbilities
// strings: "naga_siren_song_of_the_siren", "naga_siren_song_of_the_siren_cancel"
bool __fastcall CDOTA_Unit_Hero_Naga_Siren::OnLoadState(CDOTA_Unit_Hero_Naga_Siren *const this, KeyValues *pKV)
{
  CDOTABaseAbility *AbilityByName; // rax

  CDOTA_BaseNPC_Hero::OnLoadState(this, pKV);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "naga_siren_song_of_the_siren", 0);
  if ( AbilityByName != 0 && AbilityByName->m_bHidden.m_Value )
    CDOTA_BaseNPC::SwapAbilities(this, "naga_siren_song_of_the_siren", "naga_siren_song_of_the_siren_cancel", 1, 0);
  return 1;
}


// CDOTA_Unit_Hero_Naga_Siren::YouForgotToImplementOrDeclareServerClass  (line 70, @0x0000000002c1df80, libserver.so)
int __fastcall CDOTA_Unit_Hero_Naga_Siren::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Naga_Siren *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Naga_Siren::GetServerClass  (line 70, @0x0000000002c353b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Naga_Siren::GetServerClass(CDOTA_Unit_Hero_Naga_Siren *const this)
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


// CDOTA_Ability_NagaSiren_MirrorImage::~CDOTA_Ability_NagaSiren_MirrorImage  (line 83, @0x0000000002cb6a30, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_NagaSiren_MirrorImage::~CDOTA_Ability_NagaSiren_MirrorImage(
        CDOTA_Ability_NagaSiren_MirrorImage *const this)
{
  this->_vptr_IHandleEntity = &off_45EAE70;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hIllusions);
  if ( (this->m_hIllusions.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hIllusions.m_Memory),
        (this->m_hIllusions.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hIllusions.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_NagaSiren_MirrorImage::~CDOTA_Ability_NagaSiren_MirrorImage  (line 83, @0x0000000002cb73e0, libserver.so)  // inlines: Purge, ~CDOTA_Ability_NagaSiren_MirrorImage, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_NagaSiren_MirrorImage::~CDOTA_Ability_NagaSiren_MirrorImage(
        CDOTA_Ability_NagaSiren_MirrorImage *const this)
{
  this->_vptr_IHandleEntity = &off_45EAE70;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hIllusions);
  if ( (this->m_hIllusions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hIllusions.m_Memory);
    if ( (this->m_hIllusions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hIllusions.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_NagaSiren_MirrorImage::Schema_DynamicBinding  (line 85, @0x0000000002c8b4a0, libserver.so)
// globals: CDOTA_Ability_NagaSiren_MirrorImage::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_NagaSiren_MirrorImage::Schema_DynamicBinding(
        const CDOTA_Ability_NagaSiren_MirrorImage *const this)
{
  return CDOTA_Ability_NagaSiren_MirrorImage::s_pSchemaBinding;
}


// CDOTA_Ability_NagaSiren_MirrorImage::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 85, @0x0000000002c8b4b0, libserver.so)
// globals: CDOTA_Ability_NagaSiren_MirrorImage::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_NagaSiren_MirrorImage::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_NagaSiren_MirrorImage::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_NagaSiren_MirrorImage::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_NagaSiren_MirrorImage::CEntityInstanceEntityClass::DestructInstance  (line 85, @0x0000000002c8b4c0, libserver.so)  // inlines: Destruct<CDOTA_Ability_NagaSiren_MirrorImage>
void __fastcall CDOTA_Ability_NagaSiren_MirrorImage::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_NagaSiren_MirrorImage::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_NagaSiren_MirrorImage::CEntityInstanceEntityClass::FreeInstance  (line 85, @0x0000000002c8b4e0, libserver.so)
void __fastcall CDOTA_Ability_NagaSiren_MirrorImage::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_NagaSiren_MirrorImage::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_NagaSiren_MirrorImage::CEntityInstanceEntityClass::CanAllocate  (line 85, @0x0000000002c8b500, libserver.so)
bool __fastcall CDOTA_Ability_NagaSiren_MirrorImage::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_NagaSiren_MirrorImage::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_NagaSiren_MirrorImage::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 85, @0x0000000002c8b510, libserver.so)
// globals: CDOTA_Ability_NagaSiren_MirrorImage::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_NagaSiren_MirrorImage::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_NagaSiren_MirrorImage::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_NagaSiren_MirrorImage::s_pSchemaBinding;
}


// CDOTA_Ability_NagaSiren_MirrorImage::CEntityInstanceEntityClass::AllocateInstance  (line 85, @0x0000000002c907a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_NagaSiren_MirrorImage::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_NagaSiren_MirrorImage::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 936);
  memset(v1, 0, 0x3A8u);
  return v1;
}


// CDOTA_Ability_NagaSiren_MirrorImage::CEntityInstanceEntityClass::ConstructInstance  (line 85, @0x0000000002c9feb0, libserver.so)  // inlines: CDOTA_Ability_NagaSiren_MirrorImage, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_NagaSiren_MirrorImage>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_NagaSiren_MirrorImage::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_NagaSiren_MirrorImage::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 0;
    *p = &off_45EAE70;
    *(p + 115) = 0;
    *(p + 232) = 0;
    *(p + 233) = 0;
  }
  return p;
}


// CDOTA_Ability_NagaSiren_MirrorImage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 85, @0x0000000002ca2de0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_NagaSiren_MirrorImage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_NagaSiren_MirrorImage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_NagaSiren_MirrorImage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 85, @0x0000000002ca2e00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_NagaSiren_MirrorImage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_NagaSiren_MirrorImage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal  (line 85, @0x0000000002cbe600, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "naga_siren_mirror_image", "CDOTA_Ability_NagaSiren_MirrorImage"
// globals: `guard variable for'CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass, CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_NagaSiren_MirrorImage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClassInfo, CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClassInfo
CEntityClass *__cdecl CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass) != 0 )
  {
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_pClassInfo = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_flags = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_pInputs = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_nInputCount = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_pOutputs = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_nOutputCount = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_pGameClass = 0;
    CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass._vptr_CEntityClass = off_45EADF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass);
    __cxa_atexit(
      CDOTA_Ability_NagaSiren_MirrorImage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_NagaSiren_MirrorImageClass != 0 )
    return &CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass;
  if ( `guard variable for'CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClassInfo,
      "CDOTA_Ability_NagaSiren_MirrorImage",
      "naga_siren_mirror_image",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClassInfo);
  }
  CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_pClassInfo = &CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClassInfo;
  CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_pBaseClassInfo = CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_NagaSiren_MirrorImageClass = &CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass;
  CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClassInfo.m_pClass = &CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass;
  CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_NagaSiren_MirrorImageClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_NagaSiren_MirrorImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_MirrorImageClass;
}


// CDOTA_Ability_NagaSiren_MirrorImage::YouForgotToImplementOrDeclareServerClass  (line 94, @0x0000000002c1df90, libserver.so)
int __fastcall CDOTA_Ability_NagaSiren_MirrorImage::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_NagaSiren_MirrorImage *const this)
{
  return 0;
}


// CDOTA_Ability_NagaSiren_MirrorImage::GetServerClass  (line 94, @0x0000000002c35bb0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_NagaSiren_MirrorImage::GetServerClass(
        CDOTA_Ability_NagaSiren_MirrorImage *const this)
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


// CDOTA_Ability_NagaSiren_MirrorImage::OnSpellStart  (line 104, @0x0000000002c552f0, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetSerialNumber, GetTeamNumber, Set
// calls: CDOTABaseAbility::GetCaster, CDOTA_ProjectileManager::ProjectileDodge, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CBaseEntity::GetAbsOrigin, CDOTAFogOfWarSystem::AddTempViewer, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "invuln_duration", "modifier_naga_siren_mirror_image", "Hero_NagaSiren.MirrorImage"
void __fastcall CDOTA_Ability_NagaSiren_MirrorImage::OnSpellStart(CDOTA_Ability_NagaSiren_MirrorImage *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // cx
  __m128i v5; // xmm0
  float v6; // r13d
  CDOTA_BaseNPC *v7; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v9; // rax
  float v10; // xmm1_4
  CDOTA_BaseNPC *v11; // r13
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  EHANDLE hTarget; // [rsp+0h] [rbp-50h] BYREF
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-28h]

  v16 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  hTarget.m_Index = -1;
  if ( Caster != 0 )
  {
    m_pEntity = Caster->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      hTarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
    }
  }
  CDOTA_ProjectileManager::ProjectileDodge(&g_DOTAProjectileManager, &hTarget, 0);
  *v5.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "invuln_duration", -1, 0);
  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
  v7 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
  v9 = CDOTABaseAbility::GetCaster(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_MANTASTYLE,
    v9->m_iTeamNum.m_Value,
    AbsOrigin,
    400.0,
    v6,
    0);
  KeyValues::KeyValues(&kv, "modifier_naga_siren_mirror_image");
  KeyValues::SetFloat(&kv, "duration", v10);
  v11 = CDOTABaseAbility::GetCaster(this);
  v12 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v12, v11, this, "modifier_naga_siren_mirror_image", &kv, 0);
  v13 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(8, "Hero_NagaSiren.MirrorImage", v13);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_NagaSiren_MirrorImage::~CDOTA_Modifier_NagaSiren_MirrorImage  (line 126, @0x0000000002c91470, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_NagaSiren_MirrorImage::~CDOTA_Modifier_NagaSiren_MirrorImage(
        CDOTA_Modifier_NagaSiren_MirrorImage *const this)
{
  this->_vptr_CDOTA_Buff = &off_45EB930;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_NagaSiren_MirrorImage::~CDOTA_Modifier_NagaSiren_MirrorImage  (line 126, @0x0000000002c91490, libserver.so)  // inlines: ~CDOTA_Modifier_NagaSiren_MirrorImage
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_NagaSiren_MirrorImage::~CDOTA_Modifier_NagaSiren_MirrorImage(
        CDOTA_Modifier_NagaSiren_MirrorImage *const this)
{
  this->_vptr_CDOTA_Buff = &off_45EB930;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_NagaSiren_MirrorImage::IsHidden  (line 131, @0x0000000002c8b520, libserver.so)
bool __fastcall CDOTA_Modifier_NagaSiren_MirrorImage::IsHidden(CDOTA_Modifier_NagaSiren_MirrorImage *const this)
{
  return 1;
}


// CDOTA_Modifier_NagaSiren_MirrorImage::GetEffectName  (line 137, @0x0000000002c8b530, libserver.so)
// strings: "particles/units/heroes/hero_siren/naga_siren_mirror_image.vpcf"
const char *__fastcall CDOTA_Modifier_NagaSiren_MirrorImage::GetEffectName(
        CDOTA_Modifier_NagaSiren_MirrorImage *const this)
{
  return "particles/units/heroes/hero_siren/naga_siren_mirror_image.vpcf";
}


// CDOTA_Modifier_NagaSiren_MirrorImage::OnDestroy  (line 145, @0x0000000002c65780, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPaddedCollisionRadius, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::Interrupt, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::ForceKill, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int> (17 total)
// strings: "illusion_duration", "images_count", "modifier_illusion", "special_bonus_unique_naga_siren", "illusion_"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_NagaSiren_MirrorImage::OnDestroy(CDOTA_Modifier_NagaSiren_MirrorImage *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  __int64 v3; // r12
  int v4; // ebx
  CDOTA_BaseNPC *v5; // rax
  CDOTABaseAbility *Ability; // r14
  _WORD *v7; // rcx
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  CDOTA_BaseNPC *m_pInstance; // rdi
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *v11; // r14
  CDOTABaseAbility *v12; // rax
  CDOTABaseAbility *v13; // rax
  CDOTABaseAbility *v14; // rax
  CDOTABaseAbility *v15; // rax
  float v16; // xmm1_4
  CDOTA_BaseNPC *v17; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int LevelSpecialValue; // eax
  CDOTA_BaseNPC *v20; // rax
  int v21; // r12d
  int v22; // r15d
  CDOTA_BaseNPC *v23; // rax
  CDOTABaseAbility *v24; // r12
  CDOTA_BaseNPC *v25; // rax
  float illusion_duration; // [rsp+20h] [rbp-60h] BYREF
  int outgoing_damage; // [rsp+24h] [rbp-5Ch] BYREF
  int incoming_damage; // [rsp+28h] [rbp-58h] BYREF
  int images_count; // [rsp+2Ch] [rbp-54h] BYREF
  KeyValues kv; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-38h]

  v31 = __readfsqword(0x28u);
  Caster = CDOTA_Buff::GetCaster(this);
  if ( (*(Caster->_vptr_IHandleEntity + 408))(Caster) != 0 )
  {
    v3 = 0;
    v4 = 0;
    v5 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::Interrupt(v5);
    Ability = CDOTA_Buff::GetAbility(this);
    if ( SLODWORD(Ability[1]._vptr_IHandleEntity) > 0 )
    {
      do
      {
        while ( 1 )
        {
          v7 = (Ability[1].m_pEntity + v3);
          if ( (*v7 + 2) > 1 )
          {
            v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v7 >> 9) & 0x3F];
            if ( v8 != 0 )
            {
              v9 = &v8[*v7 & 0x1FF];
              if ( v9 != 0 && *v7 == v9->m_EHandle.m_Index )
              {
                m_pInstance = v9->m_pInstance;
                if ( v9->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && m_pInstance->m_bIsIllusion.m_Value )
                  break;
              }
            }
          }
          ++v4;
          v3 += 4;
          if ( SLODWORD(Ability[1]._vptr_IHandleEntity) <= v4 )
            goto LABEL_13;
        }
        ++v4;
        v3 += 4;
        CDOTA_BaseNPC::ForceKill(m_pInstance, 0);
      }
      while ( SLODWORD(Ability[1]._vptr_IHandleEntity) > v4 );
    }
LABEL_13:
    v11 = &Ability[1];
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(v11);
    v12 = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<float>(v12, &illusion_duration, "illusion_duration");
    v13 = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(v13, &outgoing_damage, "outgoing_damage");
    v14 = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(v14, &incoming_damage, "incoming_damage");
    v15 = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(v15, &images_count, "images_count");
    KeyValues::KeyValues(&kv, "modifier_illusion");
    KeyValues::SetFloat(&kv, "duration", v16);
    KeyValues::SetInt(&kv, "outgoing_damage", outgoing_damage);
    KeyValues::SetInt(&kv, "incoming_damage", incoming_damage);
    v17 = CDOTA_Buff::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v17, "special_bonus_unique_naga_siren", 0);
    if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    {
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
      images_count += LevelSpecialValue;
    }
    v20 = CDOTA_Buff::GetCaster(this);
    v21 = images_count;
    v22 = ((v20->m_flHullRadius + v20->m_flCollisionPadding) + (v20->m_flHullRadius + v20->m_flCollisionPadding));
    v23 = CDOTA_Buff::GetCaster(this);
    DOTA_CreateIllusions(v23, v21, v22, 1, &kv, v11, 0, "illusion_", 1);
    v24 = CDOTA_Buff::GetAbility(this);
    v25 = CDOTA_Buff::GetCaster(this);
    Purge(v25, v24, 4);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_NagaSiren_MirrorImage::CheckState  (line 194, @0x0000000002c1dfa0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_NagaSiren_MirrorImage::CheckState(
        CDOTA_Modifier_NagaSiren_MirrorImage *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x80804320uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFF7F7FBCDFLL;
}


// CDOTA_Ability_NagaSiren_Ensnare::~CDOTA_Ability_NagaSiren_Ensnare  (line 212, @0x0000000002c990d0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_NagaSiren_Ensnare::~CDOTA_Ability_NagaSiren_Ensnare(
        CDOTA_Ability_NagaSiren_Ensnare *const this)
{
  this->_vptr_IHandleEntity = &off_45EBC90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_NagaSiren_Ensnare::~CDOTA_Ability_NagaSiren_Ensnare  (line 212, @0x0000000002c990f0, libserver.so)  // inlines: ~CDOTA_Ability_NagaSiren_Ensnare
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_NagaSiren_Ensnare::~CDOTA_Ability_NagaSiren_Ensnare(
        CDOTA_Ability_NagaSiren_Ensnare *const this)
{
  this->_vptr_IHandleEntity = &off_45EBC90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_NagaSiren_Ensnare::Schema_DynamicBinding  (line 214, @0x0000000002c8b540, libserver.so)
// globals: CDOTA_Ability_NagaSiren_Ensnare::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_NagaSiren_Ensnare::Schema_DynamicBinding(
        const CDOTA_Ability_NagaSiren_Ensnare *const this)
{
  return CDOTA_Ability_NagaSiren_Ensnare::s_pSchemaBinding;
}


// CDOTA_Ability_NagaSiren_Ensnare::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 214, @0x0000000002c8b550, libserver.so)
// globals: CDOTA_Ability_NagaSiren_Ensnare::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_NagaSiren_Ensnare::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_NagaSiren_Ensnare::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_NagaSiren_Ensnare::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_NagaSiren_Ensnare::CEntityInstanceEntityClass::DestructInstance  (line 214, @0x0000000002c8b560, libserver.so)  // inlines: Destruct<CDOTA_Ability_NagaSiren_Ensnare>
void __fastcall CDOTA_Ability_NagaSiren_Ensnare::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_NagaSiren_Ensnare::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_NagaSiren_Ensnare::CEntityInstanceEntityClass::FreeInstance  (line 214, @0x0000000002c8b580, libserver.so)
void __fastcall CDOTA_Ability_NagaSiren_Ensnare::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_NagaSiren_Ensnare::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_NagaSiren_Ensnare::CEntityInstanceEntityClass::CanAllocate  (line 214, @0x0000000002c8b5a0, libserver.so)
bool __fastcall CDOTA_Ability_NagaSiren_Ensnare::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_NagaSiren_Ensnare::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_NagaSiren_Ensnare::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 214, @0x0000000002c8b5b0, libserver.so)
// globals: CDOTA_Ability_NagaSiren_Ensnare::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_NagaSiren_Ensnare::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_NagaSiren_Ensnare::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_NagaSiren_Ensnare::s_pSchemaBinding;
}


// CDOTA_Ability_NagaSiren_Ensnare::CEntityInstanceEntityClass::AllocateInstance  (line 214, @0x0000000002c907e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_NagaSiren_Ensnare::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_NagaSiren_Ensnare::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_NagaSiren_Ensnare::CEntityInstanceEntityClass::ConstructInstance  (line 214, @0x0000000002c95210, libserver.so)  // inlines: CDOTA_Ability_NagaSiren_Ensnare, Construct<CDOTA_Ability_NagaSiren_Ensnare>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_NagaSiren_Ensnare::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_NagaSiren_Ensnare::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45EBC90;
  }
  return p;
}


// CDOTA_Ability_NagaSiren_Ensnare::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 214, @0x0000000002ca2e30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_NagaSiren_Ensnare::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_NagaSiren_Ensnare::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_NagaSiren_Ensnare::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 214, @0x0000000002ca2e50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_NagaSiren_Ensnare::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_NagaSiren_Ensnare::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal  (line 214, @0x0000000002cc21a0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "CDOTA_Ability_NagaSiren_Ensnare"
// globals: `guard variable for'CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass, CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_NagaSiren_Ensnare::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClassInfo, CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClassInfo
CEntityClass *__cdecl CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass) != 0 )
  {
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_pClassInfo = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_flags = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_pInputs = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_nInputCount = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_pOutputs = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_nOutputCount = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_pGameClass = 0;
    CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass._vptr_CEntityClass = off_45EBC10;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass);
    __cxa_atexit(
      CDOTA_Ability_NagaSiren_Ensnare::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_NagaSiren_EnsnareClass != 0 )
    return &CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass;
  if ( `guard variable for'CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClassInfo,
      "CDOTA_Ability_NagaSiren_Ensnare",
      "naga_siren_ensnare",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClassInfo);
  }
  CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_pClassInfo = &CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClassInfo;
  CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_pBaseClassInfo = CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_NagaSiren_EnsnareClass = &CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass;
  CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClassInfo.m_pClass = &CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass;
  CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_NagaSiren_EnsnareClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_NagaSiren_Ensnare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_EnsnareClass;
}


// CDOTA_Ability_NagaSiren_Ensnare::OnAbilityPhaseStart  (line 228, @0x0000000002c64310, libserver.so)  // inlines: FastSqrt, Get, GetDistanceToEntity, GetEntityIdentity, GetEntryIndex, GetHero, GetInstance, IndexToIdentity, IsValid, Length, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CEntityInstance*, operator-, operator[]
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::StartGesture
// strings: "fake_ensnare_distance"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Ability_NagaSiren_Ensnare::OnAbilityPhaseStart(CDOTA_Ability_NagaSiren_Ensnare *const this)
{
  CBaseEntity *CursorTarget; // rax
  __int64 v3; // r13
  int v4; // r15d
  CHandle<CDOTA_BaseNPC_Hero> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *m_pInstance; // r14
  CDOTA_BaseNPC *Caster; // rax
  const Vector *v12; // rax
  __int64 v13; // r14
  const Vector *v14; // rax
  int fake_ensnare_distance; // [rsp+Ch] [rbp-44h]
  CBaseEntity *v17; // [rsp+10h] [rbp-40h]
  __int64 v18; // [rsp+18h] [rbp-38h]
  const Vector *AbsOrigin; // [rsp+18h] [rbp-38h]
  void (__fastcall *v20)(__int64, const Vector *); // [rsp+18h] [rbp-38h]

  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v17 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    fake_ensnare_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "fake_ensnare_distance", -1, 0);
    if ( g_HeroList.m_hHeroList.m_Size > 0 )
    {
      v3 = 0;
      v4 = 0;
      do
      {
        while ( 1 )
        {
          v5 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v3];
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
                  && (*(m_pInstance->_vptr_IHandleEntity + 408))(v9->m_pInstance) != 0
                  && LOBYTE(m_pInstance[71].m_pEntity) != 0 )
                {
                  v18 = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance);
                  Caster = CDOTABaseAbility::GetCaster(this);
                  if ( v18 == (*(Caster->_vptr_IHandleEntity + 413))(Caster) )
                  {
                    AbsOrigin = CBaseEntity::GetAbsOrigin(v17);
                    v12 = CBaseEntity::GetAbsOrigin(m_pInstance);
                    if ( fake_ensnare_distance > fsqrt(
                                                   (((v12->x - AbsOrigin->x) * (v12->x - AbsOrigin->x))
                                                  + ((v12->y - AbsOrigin->y) * (v12->y - AbsOrigin->y)))
                                                 + ((v12->z - AbsOrigin->z) * (v12->z - AbsOrigin->z))) )
                      break;
                  }
                }
              }
            }
          }
          ++v4;
          ++v3;
          if ( v4 >= g_HeroList.m_hHeroList.m_Size )
            return 1;
        }
        if ( !this->m_bStolen.m_Value )
          CDOTA_BaseNPC::StartGesture(m_pInstance, 1511, 0.1, 0.1, 9, 0, 1.0);
        ++v4;
        ++v3;
        v13 = (*(m_pInstance->_vptr_IHandleEntity + 376))(m_pInstance);
        v20 = *(*v13 + 744LL);
        v14 = CBaseEntity::GetAbsOrigin(v17);
        v20(v13, v14);
      }
      while ( v4 < g_HeroList.m_hHeroList.m_Size );
    }
  }
  return 1;
}


// CDOTA_Ability_NagaSiren_Ensnare::OnSpellStart  (line 257, @0x0000000002c64550, libserver.so)  // inlines: CEntityHandle, CHandle, Color, FastSqrt, Get, GetDistanceToEntity, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHero, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, Length, LookupEntity, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CEntityInstance*, operator-, operator=, operator[], sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_ProjectileManager::CreateTrackingProjectile, CBaseEntity::GetAbsOrigin, DOTA_EmitSound, __stack_chk_fail
// strings: "net_speed", "fake_ensnare_distance", "particles/units/heroes/hero_siren/siren_net_projectile.vpcf", "Hero_NagaSiren.Ensnare.Cast"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_NagaSiren_Ensnare::OnSpellStart(CDOTA_Ability_NagaSiren_Ensnare *const this)
{
  CBaseEntity *CursorTarget; // rax
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v6; // cx
  CEntityIdentity *v7; // rax
  __int16 v8; // cx
  __int64 v9; // r13
  int v10; // r15d
  CHandle<CDOTA_BaseNPC_Hero> *v11; // rdx
  uint32 m_Index; // eax
  __int16 v13; // si
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CEntityInstance *m_pInstance; // r12
  CDOTA_BaseNPC *v17; // rax
  const Vector *v18; // rax
  vec_t v19; // xmm0_4
  vec_t v20; // xmm0_4
  CEntityIdentity *v21; // rax
  int v22; // edx
  __int16 v23; // si
  CEntityIdentity *v24; // rax
  int v25; // edx
  __int16 v26; // si
  CDOTA_BaseNPC *v27; // rax
  int fake_ensnare_distance; // [rsp+8h] [rbp-C8h]
  int net_speed; // [rsp+Ch] [rbp-C4h]
  __int64 v30; // [rsp+18h] [rbp-B8h]
  const Vector *AbsOrigin; // [rsp+18h] [rbp-B8h]
  CBaseEntity *v32; // [rsp+20h] [rbp-B0h]
  sTrackingProjectileCreateInfo info; // [rsp+30h] [rbp-A0h] BYREF
  unsigned __int64 v35; // [rsp+98h] [rbp-38h]

  v35 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v32 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    net_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "net_speed", -1, 0);
    fake_ensnare_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "fake_ensnare_distance", -1, 0);
    info.hSource.m_Index = -1;
    info.hTarget.m_Index = -1;
    info.bProvidesVision = 0;
    info.colorGemColor = 0;
    info.vSourceLoc.x = vec3_origin.x;
    y = vec3_origin.y;
    info.pAttackRecord = 0;
    info.vSourceLoc.y = y;
    z = vec3_origin.z;
    info.iSourceAttachment = 1;
    info.vSourceLoc.z = z;
    info.iVisionTeamNumber = -1;
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
    info.pszEffectName = "particles/units/heroes/hero_siren/siren_net_projectile.vpcf";
    info.pAbility = this;
    info.iMoveSpeed = net_speed;
    Caster = CDOTABaseAbility::GetCaster(this);
    if ( Caster != 0 && (m_pEntity = Caster->m_pEntity) != 0 )
    {
      v6 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
    }
    else
    {
      info.hSource.m_Index = -1;
    }
    v7 = v32->m_pEntity;
    if ( v7 != 0 )
    {
      v8 = 0x7FFF;
      if ( v7->m_EHandle.m_Index != -1 )
        v8 = v7->m_EHandle.m_Index & 0x7FFF;
      info.hTarget.m_Index = (((v7->m_EHandle.m_Index >> 15) - (v7->m_flags & 1)) << 15) | v8 & 0x7FFF;
    }
    else
    {
      info.hTarget.m_Index = -1;
    }
    v9 = 0;
    v10 = 0;
    info.iSourceAttachment = 1;
    CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
    if ( g_HeroList.m_hHeroList.m_Size > 0 )
    {
      do
      {
        while ( 1 )
        {
          v11 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v9];
          m_Index = v11->m_Index;
          if ( v11->m_Index + 2 > 1 )
          {
            v13 = v11->m_Index;
            v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v11->m_Index) >> 9) & 0x3F];
            if ( v14 != 0 )
            {
              v15 = &v14[v13 & 0x1FF];
              if ( v15 != 0 && m_Index == v15->m_EHandle.m_Index )
              {
                m_pInstance = v15->m_pInstance;
                if ( v15->m_pInstance != 0
                  && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                  && (*(m_pInstance->_vptr_IHandleEntity + 408))(v15->m_pInstance) != 0
                  && LOBYTE(m_pInstance[71].m_pEntity) != 0 )
                {
                  v30 = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance);
                  v17 = CDOTABaseAbility::GetCaster(this);
                  if ( v30 == (*(v17->_vptr_IHandleEntity + 413))(v17) )
                  {
                    AbsOrigin = CBaseEntity::GetAbsOrigin(v32);
                    v18 = CBaseEntity::GetAbsOrigin(m_pInstance);
                    if ( fake_ensnare_distance > fsqrt(
                                                   (((v18->x - AbsOrigin->x) * (v18->x - AbsOrigin->x))
                                                  + ((v18->y - AbsOrigin->y) * (v18->y - AbsOrigin->y)))
                                                 + ((v18->z - AbsOrigin->z) * (v18->z - AbsOrigin->z))) )
                      break;
                  }
                }
              }
            }
          }
          ++v10;
          ++v9;
          if ( v10 >= g_HeroList.m_hHeroList.m_Size )
            goto LABEL_34;
        }
        info.bProvidesVision = 0;
        info.pszEffectName = "particles/units/heroes/hero_siren/siren_net_projectile.vpcf";
        info.vSourceLoc.x = vec3_origin.x;
        v19 = vec3_origin.y;
        info.hSource.m_Index = -1;
        info.vSourceLoc.y = v19;
        v20 = vec3_origin.z;
        info.hTarget.m_Index = -1;
        info.colorGemColor = 0;
        info.pAbility = 0;
        info.pAttackRecord = 0;
        info.vSourceLoc.z = v20;
        info.iSourceAttachment = 1;
        info.iVisionTeamNumber = -1;
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
        info.iMoveSpeed = net_speed;
        v21 = m_pInstance->m_pEntity;
        if ( v21 != 0 )
        {
          v22 = (v21->m_EHandle.m_Index >> 15) - (v21->m_flags & 1);
          v23 = 0x7FFF;
          if ( v21->m_EHandle.m_Index != -1 )
            v23 = v21->m_EHandle.m_Index & 0x7FFF;
          LOWORD(info.hSource.m_Index) = v23 | info.hSource.m_Index & 0x8000;
          info.hSource.m_Index = (v22 << 15) | info.hSource.m_Index & 0x7FFF;
        }
        v24 = v32->m_pEntity;
        if ( v24 != 0 )
        {
          v25 = (v24->m_EHandle.m_Index >> 15) - (v24->m_flags & 1);
          v26 = 0x7FFF;
          if ( v24->m_EHandle.m_Index != -1 )
            v26 = v24->m_EHandle.m_Index & 0x7FFF;
          LOWORD(info.hTarget.m_Index) = v26 | info.hTarget.m_Index & 0x8000;
          info.hTarget.m_Index = (v25 << 15) | info.hTarget.m_Index & 0x7FFF;
        }
        ++v10;
        ++v9;
        info.iSourceAttachment = 1;
        CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
      }
      while ( v10 < g_HeroList.m_hHeroList.m_Size );
    }
LABEL_34:
    v27 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(8, "Hero_NagaSiren.Ensnare.Cast", v27);
  }
  else
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "net_speed", -1, 0);
    CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "fake_ensnare_distance", -1, 0);
  }
}


// CDOTA_Ability_NagaSiren_Ensnare::OnProjectileHit  (line 308, @0x0000000002c55490, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTA_BaseNPC::InterruptChannel, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, EconEntity_OnOwnerKillEaterEvent, DOTA_EmitSound, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_naga_siren_ensnare", "Hero_NagaSiren.Ensnare.Target"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_NagaSiren_Ensnare::OnProjectileHit(
        CDOTA_Ability_NagaSiren_Ensnare *const this,
        unsigned __int16 *hTarget,
        const Vector *const vLocation)
{
  int v4; // eax
  unsigned __int64 v5; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // rbx
  float v10; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC_Hero *v12; // r14
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC_Hero *v14; // rdi
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-28h]

  v16 = __readfsqword(0x28u);
  v4 = *hTarget;
  if ( (*hTarget + 2) > 1 )
  {
    v5 = *hTarget;
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[v5 & 0x1FF];
      if ( v7 != 0 && v4 == v7->m_EHandle.m_Index )
      {
        m_pInstance = v7->m_pInstance;
        if ( v7->m_pInstance != 0
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0
          && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 1) == 0
          && !CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, this, 1) )
        {
          CDOTA_BaseNPC::InterruptChannel(m_pInstance);
          CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
          KeyValues::KeyValues(&kv, "modifier_naga_siren_ensnare");
          KeyValues::SetFloat(&kv, "duration", v10);
          Caster = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, this, "modifier_naga_siren_ensnare", &kv, 0);
          v12 = 0;
          if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
            && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
          {
            v12 = m_pInstance;
          }
          v13 = CDOTABaseAbility::GetCaster(this);
          if ( v13 != 0 && (v13->m_iUnitType & 1) != 0 )
            v14 = v13;
          else
            v14 = 0;
          EconEntity_OnOwnerKillEaterEvent(
            v14,
            v12,
            kill_eater_event_t::kKillEaterEventType_NagaSiren_EnemiesEnsnared,
            1,
            INVALID_ITEM_DEF_INDEX);
          DOTA_EmitSound(8, "Hero_NagaSiren.Ensnare.Target", m_pInstance);
          KeyValues::~KeyValues(&kv);
        }
      }
    }
  }
  return 1;
}


// CDOTA_Ability_NagaSiren_Ensnare::GetSlowDuration  (line 334, @0x0000000002c568e0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_NagaSiren_Ensnare::GetSlowDuration(CDOTA_Ability_NagaSiren_Ensnare *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
}


// CDOTA_Modifier_NagaSiren_Ensnare::~CDOTA_Modifier_NagaSiren_Ensnare  (line 343, @0x0000000002c913d0, libserver.so)  // inlines: ~CDOTA_Modifier_Rooted
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_NagaSiren_Ensnare::~CDOTA_Modifier_NagaSiren_Ensnare(
        CDOTA_Modifier_NagaSiren_Ensnare *const this)
{
  this->_vptr_CDOTA_Buff = &off_411ECF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_NagaSiren_Ensnare::~CDOTA_Modifier_NagaSiren_Ensnare  (line 343, @0x0000000002c913f0, libserver.so)  // inlines: ~CDOTA_Modifier_NagaSiren_Ensnare, ~CDOTA_Modifier_Rooted
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_NagaSiren_Ensnare::~CDOTA_Modifier_NagaSiren_Ensnare(
        CDOTA_Modifier_NagaSiren_Ensnare *const this)
{
  this->_vptr_CDOTA_Buff = &off_411ECF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_NagaSiren_Ensnare::GetEffectName  (line 350, @0x0000000002c8b5c0, libserver.so)
// strings: "particles/units/heroes/hero_siren/siren_net.vpcf"
const char *__fastcall CDOTA_Modifier_NagaSiren_Ensnare::GetEffectName(CDOTA_Modifier_NagaSiren_Ensnare *const this)
{
  return "particles/units/heroes/hero_siren/siren_net.vpcf";
}


// CDOTA_Modifier_NagaSiren_Ensnare::GetPriority  (line 353, @0x0000000002c8b5d0, libserver.so)
int __fastcall CDOTA_Modifier_NagaSiren_Ensnare::GetPriority(CDOTA_Modifier_NagaSiren_Ensnare *const this)
{
  return 2;
}


// CDOTA_Modifier_NagaSiren_Ensnare::DeclareFunctions  (line 359, @0x0000000002c1dfd0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_NagaSiren_Ensnare::OnStateChanged(CModifierParams const&)
void __fastcall CDOTA_Modifier_NagaSiren_Ensnare::DeclareFunctions(CDOTA_Modifier_NagaSiren_Ensnare *const this)
{
  this->m_Functions[135].__pfn = CDOTA_Modifier_NagaSiren_Ensnare::OnStateChanged;
  this->m_Functions[135].__delta = 0;
}


// CDOTA_Modifier_NagaSiren_Ensnare::CheckState  (line 364, @0x0000000002c20fb0, libserver.so)  // inlines: Disable
// calls: CDOTA_Modifier_Rooted::CheckState
void __fastcall CDOTA_Modifier_NagaSiren_Ensnare::CheckState(
        CDOTA_Modifier_NagaSiren_Ensnare *const this,
        CDOTABuffState *const buffState)
{
  CDOTA_Modifier_Rooted::CheckState(this, buffState);
  buffState->m_nDisabledStateMask |= 0x80uLL;
  buffState->m_nEnabledStateMask &= ~0x80uLL;
}


// CDOTA_Modifier_NagaSiren_Ensnare::OnStateChanged  (line 371, @0x0000000002c2cdb0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Unit, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy
// strings: "modifier_life_stealer_infest"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_NagaSiren_Ensnare::OnStateChanged(
        CDOTA_Modifier_NagaSiren_Ensnare *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *Parent; // rax

  m_pInstance = 0;
  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[params->hunit.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance )
  {
    Parent = CDOTA_Buff::GetParent(this);
    if ( CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_life_stealer_infest", 0) != 0 )
      CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
  return 1uLL;
}


// CDOTA_Ability_NagaSiren_RipTide::~CDOTA_Ability_NagaSiren_RipTide  (line 393, @0x0000000002c99120, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_NagaSiren_RipTide::~CDOTA_Ability_NagaSiren_RipTide(
        CDOTA_Ability_NagaSiren_RipTide *const this)
{
  this->_vptr_IHandleEntity = &off_45ECAB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_NagaSiren_RipTide::~CDOTA_Ability_NagaSiren_RipTide  (line 393, @0x0000000002c99140, libserver.so)  // inlines: ~CDOTA_Ability_NagaSiren_RipTide
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_NagaSiren_RipTide::~CDOTA_Ability_NagaSiren_RipTide(
        CDOTA_Ability_NagaSiren_RipTide *const this)
{
  this->_vptr_IHandleEntity = &off_45ECAB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_NagaSiren_RipTide::Schema_DynamicBinding  (line 395, @0x0000000002c8b5e0, libserver.so)
// globals: CDOTA_Ability_NagaSiren_RipTide::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_NagaSiren_RipTide::Schema_DynamicBinding(
        const CDOTA_Ability_NagaSiren_RipTide *const this)
{
  return CDOTA_Ability_NagaSiren_RipTide::s_pSchemaBinding;
}


// CDOTA_Ability_NagaSiren_RipTide::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 395, @0x0000000002c8b5f0, libserver.so)
// globals: CDOTA_Ability_NagaSiren_RipTide::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_NagaSiren_RipTide::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_NagaSiren_RipTide::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_NagaSiren_RipTide::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_NagaSiren_RipTide::CEntityInstanceEntityClass::DestructInstance  (line 395, @0x0000000002c8b600, libserver.so)  // inlines: Destruct<CDOTA_Ability_NagaSiren_RipTide>
void __fastcall CDOTA_Ability_NagaSiren_RipTide::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_NagaSiren_RipTide::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_NagaSiren_RipTide::CEntityInstanceEntityClass::FreeInstance  (line 395, @0x0000000002c8b620, libserver.so)
void __fastcall CDOTA_Ability_NagaSiren_RipTide::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_NagaSiren_RipTide::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_NagaSiren_RipTide::CEntityInstanceEntityClass::CanAllocate  (line 395, @0x0000000002c8b640, libserver.so)
bool __fastcall CDOTA_Ability_NagaSiren_RipTide::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_NagaSiren_RipTide::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_NagaSiren_RipTide::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 395, @0x0000000002c8b650, libserver.so)
// globals: CDOTA_Ability_NagaSiren_RipTide::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_NagaSiren_RipTide::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_NagaSiren_RipTide::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_NagaSiren_RipTide::s_pSchemaBinding;
}


// CDOTA_Ability_NagaSiren_RipTide::CEntityInstanceEntityClass::AllocateInstance  (line 395, @0x0000000002c90820, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_NagaSiren_RipTide::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_NagaSiren_RipTide::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_NagaSiren_RipTide::CEntityInstanceEntityClass::ConstructInstance  (line 395, @0x0000000002c95240, libserver.so)  // inlines: CDOTA_Ability_NagaSiren_RipTide, Construct<CDOTA_Ability_NagaSiren_RipTide>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_NagaSiren_RipTide::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_NagaSiren_RipTide::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45ECAB0;
  }
  return p;
}


// CDOTA_Ability_NagaSiren_RipTide::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 395, @0x0000000002ca2e80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_NagaSiren_RipTide::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_NagaSiren_RipTide::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_NagaSiren_RipTide::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 395, @0x0000000002ca2ea0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_NagaSiren_RipTide::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_NagaSiren_RipTide::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal  (line 395, @0x0000000002cc0720, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "CDOTA_Ability_NagaSiren_RipTide"
// globals: `guard variable for'CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass, CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_NagaSiren_RipTide::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClassInfo, CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClassInfo
CEntityClass *__cdecl CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass) != 0 )
  {
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_pClassInfo = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_flags = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_pInputs = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_nInputCount = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_pOutputs = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_nOutputCount = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_pGameClass = 0;
    CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass._vptr_CEntityClass = off_45ECA30;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass);
    __cxa_atexit(
      CDOTA_Ability_NagaSiren_RipTide::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_NagaSiren_RipTideClass != 0 )
    return &CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass;
  if ( `guard variable for'CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClassInfo,
      "CDOTA_Ability_NagaSiren_RipTide",
      "naga_siren_rip_tide",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClassInfo);
  }
  CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_pClassInfo = &CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClassInfo;
  CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_pBaseClassInfo = CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_NagaSiren_RipTideClass = &CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass;
  CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClassInfo.m_pClass = &CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass;
  CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_NagaSiren_RipTideClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_NagaSiren_RipTide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_RipTideClass;
}


// CDOTA_Ability_NagaSiren_RipTide::GetAOERadius  (line 399, @0x0000000002cb78c0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_NagaSiren_RipTide::GetAOERadius(CDOTA_Ability_NagaSiren_RipTide *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
}


// CDOTA_Ability_NagaSiren_RipTide::YouForgotToImplementOrDeclareServerClass  (line 406, @0x0000000002c1dff0, libserver.so)
int __fastcall CDOTA_Ability_NagaSiren_RipTide::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_NagaSiren_RipTide *const this)
{
  return 0;
}


// CDOTA_Ability_NagaSiren_RipTide::GetServerClass  (line 406, @0x0000000002c351b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_NagaSiren_RipTide::GetServerClass(CDOTA_Ability_NagaSiren_RipTide *const this)
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


// CDOTA_Ability_NagaSiren_RipTide::OnSpellStart  (line 415, @0x0000000002c7a630, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEntityIdentity, GetEntryIndex, GetHero, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetParent, GetTeamNumber, GrowMemory, IndexToIdentity, IsRealHero, IsValid, LookupEntity, Purge, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::StartGesture, CDOTA_BaseNPC::UnitEmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CGameSceneNode::GetOwnerEntity, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl (26 total)
// strings: "modifier_tidehunter_anchor_smash", "Hero_NagaSiren.RipTide.Cast", "particles/units/heroes/hero_siren/naga_siren_riptide.vpcf", "modifier_naga_siren_rip_tide"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_NagaSiren_RipTide::OnSpellStart(CDOTA_Ability_NagaSiren_RipTide *const this)
{
  float v2; // xmm1_4
  __int64 v3; // r13
  int v4; // r12d
  int v5; // r14d
  CHandle<CDOTA_BaseNPC_Hero> *v6; // rdx
  uint32 m_Index; // eax
  __int16 v8; // cx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *m_pInstance; // rbx
  __int64 v12; // r15
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CGameSceneNode *m_pParent; // rdi
  const CBaseAnimating *OwnerEntity; // r12
  CDOTA_ParticleManager *v18; // rax
  CDOTA_ParticleManager *v19; // rax
  CDOTA_ParticleManager *v20; // rax
  CDOTA_ParticleManager *v21; // rax
  CHandle<CDOTA_BaseNPC_Hero> *v22; // rdx
  uint32 v23; // eax
  __int16 v24; // cx
  CEntityIdentity *v25; // rdx
  CEntityIdentity *v26; // rdx
  __int64 v27; // rbx
  CDOTA_BaseNPC *v28; // rax
  CDOTA_BaseNPC *v29; // r12
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v31; // rax
  CDOTA_ParticleManager *v32; // rax
  CDOTA_ParticleManager *v33; // rax
  CDOTA_ParticleManager *v34; // rax
  CDOTA_ParticleManager *v35; // rax
  CDOTA_ParticleManager *v36; // rax
  __int64 v37; // rbx
  CHandle<CBaseEntity> *v38; // r13
  __int64 m_Size; // r15
  int v40; // eax
  CHandle<CBaseEntity> *v41; // rax
  CHandle<CBaseEntity> *v42; // r12
  CEntityIdentity *v43; // rdx
  CEntityIdentity *v44; // rdx
  CEntityInstance *v45; // r12
  CDOTA_BaseNPC *v46; // rax
  int v47; // eax
  CDOTA_BaseNPC *v48; // rax
  CDOTA_BaseNPC_Hero *v49; // rdi
  float flRadius; // [rsp+2Ch] [rbp-D4h]
  __int64 v51; // [rsp+40h] [rbp-C0h]
  int nEnemyHeroesHit; // [rsp+48h] [rbp-B8h]
  int duration; // [rsp+4Ch] [rbp-B4h]
  int radius; // [rsp+58h] [rbp-A8h]
  CDOTA_BaseNPC *radiusa; // [rsp+58h] [rbp-A8h]
  double v57; // [rsp+60h] [rbp-A0h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hTargetsHit; // [rsp+70h] [rbp-90h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+90h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v61; // [rsp+C8h] [rbp-38h]

  v61 = __readfsqword(0x28u);
  radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_tidehunter_anchor_smash");
  KeyValues::SetFloat(&kv, "duration", v2);
  if ( g_HeroList.m_hHeroList.m_Size <= 0 )
  {
    v5 = 0;
  }
  else
  {
    v3 = 0;
    v4 = 0;
    v5 = 0;
    do
    {
      v6 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v3];
      m_Index = v6->m_Index;
      if ( v6->m_Index + 2 > 1 )
      {
        v8 = v6->m_Index;
        v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6->m_Index) >> 9) & 0x3F];
        if ( v9 != 0 )
        {
          v10 = &v9[v8 & 0x1FF];
          if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
          {
            m_pInstance = v10->m_pInstance;
            if ( v10->m_pInstance != 0
              && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
              && (*(m_pInstance->_vptr_IHandleEntity + 408))(v10->m_pInstance) != 0 )
            {
              if ( CDOTABaseAbility::GetCaster(this) == m_pInstance
                || LOBYTE(m_pInstance[71].m_pEntity) != 0
                && (v12 = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance),
                    Caster = CDOTABaseAbility::GetCaster(this),
                    v12 == (*(Caster->_vptr_IHandleEntity + 413))(Caster)) )
              {
                if ( !this->m_bStolen.m_Value )
                  CDOTA_BaseNPC::StartGesture(m_pInstance, 1512, 0.1, 0.1, 9, 0, 1.0);
                ++v5;
                CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_NagaSiren.RipTide.Cast", 0.0, 0, 0);
              }
            }
          }
        }
      }
      ++v4;
      ++v3;
    }
    while ( v4 < g_HeroList.m_hHeroList.m_Size );
  }
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
  v18 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v18, Particle, 0, OwnerEntity, 1, 0, vec3_invalid, 1);
  flRadius = radius;
  *&hEntities.m_Size = radius;
  *(&hEntities.m_Size + 1) = radius;
  v19 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v19, Particle, 1, *&hEntities.m_Size, radius);
  *(&hEntities.m_Size + 1) = 0;
  LODWORD(hEntities.m_Memory.m_pMemory) = 0;
  *&hEntities.m_Size = v5;
  v20 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v20, Particle, 3, COERCE_DOUBLE(COERCE_UNSIGNED_INT(v5)), 0.0);
  v21 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v21, Particle);
  hTargetsHit.m_Size = 0;
  hTargetsHit.m_Memory.m_pMemory = 0;
  hTargetsHit.m_Memory.m_nAllocationCount = 0;
  hTargetsHit.m_Memory.m_nGrowSize = 0;
  if ( g_HeroList.m_hHeroList.m_Size > 0 )
  {
    v51 = 0;
    duration = 0;
    nEnemyHeroesHit = 0;
    do
    {
      v22 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v51];
      v23 = v22->m_Index;
      if ( v22->m_Index + 2 > 1 )
      {
        v24 = v22->m_Index;
        v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v22->m_Index) >> 9) & 0x3F];
        if ( v25 != 0 )
        {
          v26 = &v25[v24 & 0x1FF];
          if ( v26 != 0 && v23 == v26->m_EHandle.m_Index )
          {
            radiusa = v26->m_pInstance;
            if ( v26->m_pInstance != 0
              && (v26->m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
              && (*(radiusa->_vptr_IHandleEntity + 408))(radiusa) != 0
              && (radiusa->m_bIsIllusion.m_Value || CDOTABaseAbility::GetCaster(this) == radiusa) )
            {
              v27 = (*(radiusa->_vptr_IHandleEntity + 413))(radiusa);
              v28 = CDOTABaseAbility::GetCaster(this);
              if ( v27 == (*(v28->_vptr_IHandleEntity + 413))(v28) )
              {
                hEntities.m_Size = 0;
                hEntities.m_Memory.m_pMemory = 0;
                hEntities.m_Memory.m_nAllocationCount = 0;
                hEntities.m_Memory.m_nGrowSize = 0;
                v29 = CDOTABaseAbility::GetCaster(this);
                AbsOrigin = CBaseEntity::GetAbsOrigin(radiusa);
                v31 = CDOTABaseAbility::GetCaster(this);
                FindUnitsInRadius(v31->m_iTeamNum.m_Value, AbsOrigin, v29, flRadius, &hEntities, 2, 3, 0, 0, 0);
                v32 = GetParticleManager();
                LODWORD(AbsOrigin) = CDOTA_ParticleManager::CreateParticle(
                                       v32,
                                       "particles/units/heroes/hero_siren/naga_siren_riptide.vpcf",
                                       2,
                                       0,
                                       0,
                                       0);
                v33 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(v33, AbsOrigin, 0, radiusa, 1, 0, vec3_invalid, 1);
                *&v57 = flRadius;
                *(&v57 + 1) = flRadius;
                v34 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControl(v34, AbsOrigin, 1, v57, flRadius);
                v35 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControl(
                  v35,
                  AbsOrigin,
                  3,
                  COERCE_DOUBLE(COERCE_UNSIGNED_INT(v5)),
                  0.0);
                v36 = GetParticleManager();
                CDOTA_ParticleManager::ReleaseParticleIndex(v36, AbsOrigin);
                if ( hEntities.m_Size > 0 )
                {
                  v37 = 0;
                  do
                  {
                    while ( 1 )
                    {
                      v38 = &hEntities.m_Memory.m_pMemory[v37];
                      if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                             &hTargetsHit,
                             v38) == -1 )
                      {
                        m_Size = hTargetsHit.m_Size;
                        v40 = hTargetsHit.m_Size;
                        if ( hTargetsHit.m_Size == hTargetsHit.m_Memory.m_nAllocationCount )
                        {
                          CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&hTargetsHit.m_Memory, 1);
                          v40 = hTargetsHit.m_Size;
                        }
                        hTargetsHit.m_Size = v40 + 1;
                        v41 = &hTargetsHit.m_Memory.m_pMemory[m_Size];
                        if ( v41 != 0 )
                          v41->m_Index = v38->m_Index;
                        v42 = &hEntities.m_Memory.m_pMemory[v37];
                        if ( v42->m_Index + 2 > 1 )
                        {
                          v43 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v42->m_Index) >> 9) & 0x3F];
                          if ( v43 != 0 )
                          {
                            v44 = &v43[v42->m_Index & 0x1FF];
                            if ( v44 != 0 && v42->m_Index == v44->m_EHandle.m_Index )
                            {
                              v45 = v44->m_pInstance;
                              if ( v44->m_pInstance != 0 && BYTE3(v45[7]._vptr_IHandleEntity) != 0 )
                              {
                                v46 = CDOTABaseAbility::GetCaster(this);
                                CDOTA_BaseNPC::AddNewModifier(v45, v46, this, "modifier_naga_siren_rip_tide", &kv, 0);
                                v47 = (*(this->_vptr_IHandleEntity + 247))(this);
                                ApplyDamage(radiusa, v45, this, v47, 2, 0);
                                if ( (v45[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                                  break;
                              }
                            }
                          }
                        }
                      }
                      if ( ++v37 >= hEntities.m_Size )
                        goto LABEL_49;
                    }
                    nEnemyHeroesHit += LOBYTE(v45[71].m_pEntity) == 0;
                    ++v37;
                  }
                  while ( v37 < hEntities.m_Size );
                }
LABEL_49:
                CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEntities);
                if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                {
                  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
                  if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
                }
              }
            }
          }
        }
      }
      ++duration;
      ++v51;
    }
    while ( duration < g_HeroList.m_hHeroList.m_Size );
    if ( nEnemyHeroesHit > 2 )
    {
      v48 = CDOTABaseAbility::GetCaster(this);
      if ( v48 != 0 && (v48->m_iUnitType & 1) != 0 )
        v49 = v48;
      else
        v49 = 0;
      EconEntity_OnOwnerKillEaterEvent(
        v49,
        0,
        kill_eater_event_t::kKillEaterEventType_NagaSiren_TripleHeroRipTides,
        1,
        INVALID_ITEM_DEF_INDEX);
    }
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hTargetsHit);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_NagaSiren_RipTide::GetAbilityDamageToTargetOverInterval  (line 499, @0x0000000002c259b0, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_NagaSiren_RipTide::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_NagaSiren_RipTide *const this,
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


// CDOTA_Modifier_NagaSiren_RipTide::~CDOTA_Modifier_NagaSiren_RipTide  (line 511, @0x0000000002c91380, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_NagaSiren_RipTide::~CDOTA_Modifier_NagaSiren_RipTide(
        CDOTA_Modifier_NagaSiren_RipTide *const this)
{
  this->_vptr_CDOTA_Buff = &off_45ED570;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_NagaSiren_RipTide::~CDOTA_Modifier_NagaSiren_RipTide  (line 511, @0x0000000002c913a0, libserver.so)  // inlines: ~CDOTA_Modifier_NagaSiren_RipTide
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_NagaSiren_RipTide::~CDOTA_Modifier_NagaSiren_RipTide(
        CDOTA_Modifier_NagaSiren_RipTide *const this)
{
  this->_vptr_CDOTA_Buff = &off_45ED570;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_NagaSiren_RipTide::IsDebuff  (line 521, @0x0000000002c8b660, libserver.so)
bool __fastcall CDOTA_Modifier_NagaSiren_RipTide::IsDebuff(CDOTA_Modifier_NagaSiren_RipTide *const this)
{
  return 1;
}


// CDOTA_Modifier_NagaSiren_RipTide::GetEffectName  (line 523, @0x0000000002c8b670, libserver.so)
// strings: "particles/units/heroes/hero_siren/naga_siren_riptide_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_NagaSiren_RipTide::GetEffectName(CDOTA_Modifier_NagaSiren_RipTide *const this)
{
  return "particles/units/heroes/hero_siren/naga_siren_riptide_debuff.vpcf";
}


// CDOTA_Modifier_NagaSiren_RipTide::GetStatusEffectName  (line 524, @0x0000000002c8b680, libserver.so)
// strings: "particles/status_fx/status_effect_naga_riptide.vpcf"
const char *__fastcall CDOTA_Modifier_NagaSiren_RipTide::GetStatusEffectName(
        CDOTA_Modifier_NagaSiren_RipTide *const this)
{
  return "particles/status_fx/status_effect_naga_riptide.vpcf";
}


// CDOTA_Modifier_NagaSiren_RipTide::StatusEffectPriority  (line 525, @0x0000000002c8b690, libserver.so)
int __fastcall CDOTA_Modifier_NagaSiren_RipTide::StatusEffectPriority(CDOTA_Modifier_NagaSiren_RipTide *const this)
{
  return 9;
}


// CDOTA_Modifier_NagaSiren_RipTide::OnCreated  (line 538, @0x0000000002c70ad0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_NagaSiren_RipTide::OnCreated(
        CDOTA_Modifier_NagaSiren_RipTide *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->armor_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "armor_reduction", -1, 0);
  else
    this->armor_reduction = 0;
}


// CDOTA_Modifier_NagaSiren_RipTide::OnRefresh  (line 545, @0x0000000002c70fb0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_NagaSiren_RipTide::OnRefresh(
        CDOTA_Modifier_NagaSiren_RipTide *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->armor_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "armor_reduction", -1, 0);
  else
    this->armor_reduction = 0;
}


// CDOTA_Modifier_NagaSiren_RipTide::DeclareFunctions  (line 552, @0x0000000002c1e000, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_NagaSiren_RipTide::DeclareFunctions(CDOTA_Modifier_NagaSiren_RipTide *const this)
{
  this->m_Functions[45].__pfn = (&stru_10 + 697);
  this->m_Functions[45].__delta = 0;
}


// CDOTA_Modifier_NagaSiren_RipTide::GetModifierPhysicalArmorBonus  (line 559, @0x0000000002c1e020, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_NagaSiren_RipTide::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_NagaSiren_RipTide *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->armor_reduction;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren::~CDOTA_Ability_NagaSiren_SongOfTheSiren  (line 570, @0x0000000002c99170, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren::~CDOTA_Ability_NagaSiren_SongOfTheSiren(
        CDOTA_Ability_NagaSiren_SongOfTheSiren *const this)
{
  this->_vptr_IHandleEntity = &off_45EE3D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren::~CDOTA_Ability_NagaSiren_SongOfTheSiren  (line 570, @0x0000000002c99190, libserver.so)  // inlines: ~CDOTA_Ability_NagaSiren_SongOfTheSiren
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren::~CDOTA_Ability_NagaSiren_SongOfTheSiren(
        CDOTA_Ability_NagaSiren_SongOfTheSiren *const this)
{
  this->_vptr_IHandleEntity = &off_45EE3D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren::Schema_DynamicBinding  (line 572, @0x0000000002c8b6a0, libserver.so)
// globals: CDOTA_Ability_NagaSiren_SongOfTheSiren::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren::Schema_DynamicBinding(
        const CDOTA_Ability_NagaSiren_SongOfTheSiren *const this)
{
  return CDOTA_Ability_NagaSiren_SongOfTheSiren::s_pSchemaBinding;
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 572, @0x0000000002c8b6b0, libserver.so)
// globals: CDOTA_Ability_NagaSiren_SongOfTheSiren::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_NagaSiren_SongOfTheSiren::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_NagaSiren_SongOfTheSiren::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren::CEntityInstanceEntityClass::DestructInstance  (line 572, @0x0000000002c8b6c0, libserver.so)  // inlines: Destruct<CDOTA_Ability_NagaSiren_SongOfTheSiren>
void __fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_NagaSiren_SongOfTheSiren::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren::CEntityInstanceEntityClass::FreeInstance  (line 572, @0x0000000002c8b6e0, libserver.so)
void __fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_NagaSiren_SongOfTheSiren::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren::CEntityInstanceEntityClass::CanAllocate  (line 572, @0x0000000002c8b700, libserver.so)
bool __fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_NagaSiren_SongOfTheSiren::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 572, @0x0000000002c8b710, libserver.so)
// globals: CDOTA_Ability_NagaSiren_SongOfTheSiren::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_NagaSiren_SongOfTheSiren::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_NagaSiren_SongOfTheSiren::s_pSchemaBinding;
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren::CEntityInstanceEntityClass::AllocateInstance  (line 572, @0x0000000002c90860, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_NagaSiren_SongOfTheSiren::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren::CEntityInstanceEntityClass::ConstructInstance  (line 572, @0x0000000002c95270, libserver.so)  // inlines: CDOTA_Ability_NagaSiren_SongOfTheSiren, Construct<CDOTA_Ability_NagaSiren_SongOfTheSiren>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_NagaSiren_SongOfTheSiren::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45EE3D0;
  }
  return p;
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 572, @0x0000000002ca2ed0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_NagaSiren_SongOfTheSiren::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 572, @0x0000000002ca2ef0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_NagaSiren_SongOfTheSiren::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren::GetEntityClassInternal  (line 572, @0x0000000002cbbb50, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "naga_siren_song_of_the_siren", "CDOTA_Ability_NagaSiren_SongOfTheSiren"
// globals: `guard variable for'CDOTA_Ability_NagaSiren_SongOfTheSiren::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSirenClass, CDOTA_Ability_NagaSiren_SongOfTheSiren::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSirenClass, __dso_handle, CDOTA_Ability_NagaSiren_SongOfTheSiren::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_NagaSiren_SongOfTheSiren::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSirenClassInfo, CDOTA_Ability_NagaSiren_SongOfTheSiren::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSirenClassInfo
CEntityClass *__cdecl CDOTA_Ability_NagaSiren_SongOfTheSiren::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_NagaSiren_SongOfTheSiren::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSirenClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_NagaSiren_SongOfTheSiren::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSirenClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_NagaSiren_SongOfTheSiren::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSirenClass);
    CDOTA_Ability_NagaSiren_SongOfTheSiren::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSirenClass._vptr_CEntityClass = off_45ED850;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_NagaSiren_SongOfTheSiren::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSirenClass);
    __cxa_atexit(
      CDOTA_Ability_NagaSiren_SongOfTheSiren::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_NagaSiren_SongOfTheSiren::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSirenClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_NagaSiren_SongOfTheSirenClass != 0 )
    return &CDOTA_Ability_NagaSiren_SongOfTheSiren::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSirenClass;
  if ( `guard variable for'CDOTA_Ability_NagaSiren_SongOfTheSiren::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSirenClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_NagaSiren_SongOfTheSiren::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSirenClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_NagaSiren_SongOfTheSiren::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSirenClassInfo,
      "CDOTA_Ability_NagaSiren_SongOfTheSiren",
      "naga_siren_song_of_the_siren",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_NagaSiren_SongOfTheSiren::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSirenClassInfo);
  }
  CDOTA_Ability_NagaSiren_SongOfTheSiren::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSirenClass.m_pClassInfo = &CDOTA_Ability_NagaSiren_SongOfTheSiren::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSirenClassInfo;
  CDOTA_Ability_NagaSiren_SongOfTheSiren::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSirenClass.m_pBaseClassInfo = CDOTA_Ability_NagaSiren_SongOfTheSiren::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSirenClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_NagaSiren_SongOfTheSirenClass = &CDOTA_Ability_NagaSiren_SongOfTheSiren::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSirenClass;
  CDOTA_Ability_NagaSiren_SongOfTheSiren::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSirenClassInfo.m_pClass = &CDOTA_Ability_NagaSiren_SongOfTheSiren::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSirenClass;
  CDOTA_Ability_NagaSiren_SongOfTheSiren::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSirenClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_NagaSiren_SongOfTheSirenClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_NagaSiren_SongOfTheSiren::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSirenClass;
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren::GetAssociatedSecondaryAbilities  (line 578, @0x0000000002c8b720, libserver.so)
// strings: "naga_siren_song_of_the_siren_cancel"
const char *__fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_NagaSiren_SongOfTheSiren *const this)
{
  return "naga_siren_song_of_the_siren_cancel";
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::~CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel  (line 591, @0x0000000002c991c0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::~CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel(
        CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel *const this)
{
  this->_vptr_IHandleEntity = &off_45ED950;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::~CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel  (line 591, @0x0000000002c991e0, libserver.so)  // inlines: ~CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::~CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel(
        CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel *const this)
{
  this->_vptr_IHandleEntity = &off_45ED950;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::Schema_DynamicBinding  (line 593, @0x0000000002c8b730, libserver.so)
// globals: CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::Schema_DynamicBinding(
        const CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel *const this)
{
  return CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::s_pSchemaBinding;
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 593, @0x0000000002c8b740, libserver.so)
// globals: CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::CEntityInstanceEntityClass::DestructInstance  (line 593, @0x0000000002c8b750, libserver.so)  // inlines: Destruct<CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel>
void __fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::CEntityInstanceEntityClass::FreeInstance  (line 593, @0x0000000002c8b770, libserver.so)
void __fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::CEntityInstanceEntityClass::CanAllocate  (line 593, @0x0000000002c8b790, libserver.so)
bool __fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 593, @0x0000000002c8b7a0, libserver.so)
// globals: CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::s_pSchemaBinding;
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::CEntityInstanceEntityClass::AllocateInstance  (line 593, @0x0000000002c908a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::CEntityInstanceEntityClass::ConstructInstance  (line 593, @0x0000000002c952a0, libserver.so)  // inlines: CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel, Construct<CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45ED950;
  }
  return p;
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 593, @0x0000000002ca2f20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 593, @0x0000000002ca2f40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal  (line 593, @0x0000000002cc42c0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "naga_siren_song_of_the_siren_cancel", "CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel"
// globals: `guard variable for'CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass, CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClassInfo, CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClassInfo
CEntityClass *__cdecl CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass) != 0 )
  {
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_pClassInfo = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_flags = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_pInputs = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_nInputCount = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_pOutputs = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_nOutputCount = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_pGameClass = 0;
    CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass._vptr_CEntityClass = off_45ED8D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass);
    __cxa_atexit(
      CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass != 0 )
    return &CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass;
  if ( `guard variable for'CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClassInfo,
      "CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel",
      "naga_siren_song_of_the_siren_cancel",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClassInfo);
  }
  CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_pClassInfo = &CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClassInfo;
  CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_pBaseClassInfo = CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass = &CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass;
  CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClassInfo.m_pClass = &CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass;
  CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NagaSiren_SongOfTheSiren_CancelClass;
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::ProcsMagicStick  (line 596, @0x0000000002c8b7b0, libserver.so)
bool __fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::ProcsMagicStick(
        CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel *const this)
{
  return 0;
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetCastAnimation  (line 599, @0x0000000002c8b7c0, libserver.so)
Activity __fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::GetCastAnimation(
        CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel *const this)
{
  return 1599;
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::IsHiddenWhenStolen  (line 600, @0x0000000002c8b7d0, libserver.so)
bool __fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::IsHiddenWhenStolen(
        CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel *const this)
{
  return 1;
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::IsStealable  (line 601, @0x0000000002c8b7e0, libserver.so)
bool __fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::IsStealable(
        CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel *const this)
{
  return 0;
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::OnSpellStart  (line 609, @0x0000000002c25300, libserver.so)  // inlines: entindex
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName, CEntityInstance::GetEntityIndex, CreateUnitEvent
// strings: "modifier_naga_siren_song_of_the_siren_aura"
void __fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel::OnSpellStart(
        CDOTA_Ability_NagaSiren_SongOfTheSiren_Cancel *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  CEntityIndex v4; // eax

  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_naga_siren_song_of_the_siren_aura");
  v3 = CDOTABaseAbility::GetCaster(this);
  v4.m_Data = CEntityInstance::GetEntityIndex(v3).m_Data;
  CreateUnitEvent(v4, 0, 25, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_IMPORTANT_ABILITY);
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren::OnUpgrade  (line 619, @0x0000000002c21b10, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "naga_siren_song_of_the_siren_cancel"
void __fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren::OnUpgrade(CDOTA_Ability_NagaSiren_SongOfTheSiren *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "naga_siren_song_of_the_siren_cancel", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value == 0 )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren::OnSpellStart  (line 633, @0x0000000002c55660, libserver.so)  // inlines: GetAbilityData, GetLevelSpecialValueFor<float>, entindex
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, CDOTA_BaseNPC::SwapAbilities, CDOTA_BaseNPC::FindAbilityByName, CEntityInstance::GetEntityIndex (19 total)
// strings: "particles/units/heroes/hero_siren/naga_siren_siren_song_cast.vpcf", "modifier_naga_siren_song_of_the_siren_aura", "Hero_NagaSiren.SongOfTheSiren", "naga_siren_song_of_the_siren", "naga_siren_song_of_the_siren_cancel"
void __fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren::OnSpellStart(
        CDOTA_Ability_NagaSiren_SongOfTheSiren *const this)
{
  __m128i v2; // xmm0
  float v3; // r15d
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v6; // rax
  float v7; // xmm1_4
  CDOTA_BaseNPC *v8; // r13
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v14; // rax
  CEntityIndex v15; // eax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r14d
  CDOTA_BaseNPC *v18; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v20; // rax
  float v21; // xmm3_4
  KeyValues kv; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v23; // [rsp+18h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  *v2.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  Caster = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_siren/naga_siren_siren_song_cast.vpcf",
                      1,
                      Caster,
                      0,
                      0);
  v6 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v6, Caster);
  KeyValues::KeyValues(&kv, "modifier_naga_siren_song_of_the_siren_aura");
  KeyValues::SetFloat(&kv, "duration", v7);
  v8 = CDOTABaseAbility::GetCaster(this);
  v9 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v9, v8, this, "modifier_naga_siren_song_of_the_siren_aura", &kv, 0);
  v10 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(2, "Hero_NagaSiren.SongOfTheSiren", v10);
  v11 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::SwapAbilities(v11, "naga_siren_song_of_the_siren_cancel", "naga_siren_song_of_the_siren", 1, 0);
  v12 = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v12, "naga_siren_song_of_the_siren_cancel", 0);
  if ( AbilityByName != 0 )
    (*(AbilityByName->_vptr_IHandleEntity + 241))(AbilityByName, 0.5);
  v14 = CDOTABaseAbility::GetCaster(this);
  v15.m_Data = CEntityInstance::GetEntityIndex(v14).m_Data;
  CreateUnitEvent(v15, 0, 25, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_IMPORTANT_ABILITY);
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  v18 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v18);
  v20 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(
    g_pGameRules,
    v20,
    0,
    m_iAbilityID,
    0,
    0,
    *&AbsOrigin->x,
    AbsOrigin->z,
    v3,
    v21);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_NagaSiren_SongOfTheSiren::GetStunDuration  (line 665, @0x0000000002c56900, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_NagaSiren_SongOfTheSiren::GetStunDuration(
        CDOTA_Ability_NagaSiren_SongOfTheSiren *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura::~CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura  (line 674, @0x0000000002cb6bf0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura::~CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_45EEE90;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vhAffectedHeroes);
  if ( (this->m_vhAffectedHeroes.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vhAffectedHeroes.m_Memory),
        (this->m_vhAffectedHeroes.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vhAffectedHeroes.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura::~CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura  (line 674, @0x0000000002cb6ff0, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura::~CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_45EEE90;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vhAffectedHeroes);
  if ( (this->m_vhAffectedHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vhAffectedHeroes.m_Memory);
    if ( (this->m_vhAffectedHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vhAffectedHeroes.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura::IsPurgable  (line 682, @0x0000000002c8b7f0, libserver.so)
bool __fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura::IsPurgable(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura *const this)
{
  return 0;
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura::IsAura  (line 684, @0x0000000002c8b800, libserver.so)
bool __fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura::IsAura(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura::GetModifierAura  (line 685, @0x0000000002c8b810, libserver.so)
// strings: "modifier_naga_siren_song_of_the_siren"
const char *__fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura::GetModifierAura(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura *const this)
{
  return "modifier_naga_siren_song_of_the_siren";
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura::RemoveOnDeath  (line 687, @0x0000000002c8b820, libserver.so)
bool __fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura::RemoveOnDeath(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura::IsPermanent  (line 688, @0x0000000002c8b830, libserver.so)
bool __fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura::IsPermanent(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura *const this)
{
  return 0;
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura::GetAuraSearchTeam  (line 690, @0x0000000002c976b0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::HasScepter
int __fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura::GetAuraSearchTeam(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  return 3 - !CDOTA_BaseNPC::HasScepter(Parent);
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura::GetAuraSearchType  (line 691, @0x0000000002c8b840, libserver.so)
int __fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura::GetAuraSearchType(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura *const this)
{
  return 23;
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura::GetAuraSearchFlags  (line 692, @0x0000000002c8b850, libserver.so)
int __fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura::GetAuraSearchFlags(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura *const this)
{
  return 64;
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura::GetAuraRadius  (line 693, @0x0000000002c8b860, libserver.so)
int __fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura::GetAuraRadius(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura *const this)
{
  return this->radius;
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura::GetAuraEntityReject  (line 695, @0x0000000002c9a890, libserver.so)
// calls: CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_naga_siren_song_of_the_siren_ignore_me"
bool __fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura::GetAuraEntityReject(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura *const this,
        CDOTA_BaseNPC *pNPC)
{
  return CDOTA_BaseNPC::FindModifierByName(pNPC, "modifier_naga_siren_song_of_the_siren_ignore_me", 0) != 0
      || (*(pNPC->_vptr_IHandleEntity + 403))(pNPC);
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura::OnCreated  (line 718, @0x0000000002c70bf0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura::OnCreated(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura::OnAuraModifierApplied  (line 731, @0x0000000002c7a4c0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, HasElement, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator[]
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CUtlMemory<CHandle<CBaseEntity>, int>::Grow
void __fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura::OnAuraModifierApplied(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura *const this,
        CDOTA_BaseNPC *pTarget)
{
  CEntityIdentity *m_pEntity; // rbx
  __int16 v4; // cx
  __int16 v5; // cx
  int v6; // eax
  __int64 m_Size; // rbx
  int v8; // eax
  CHandle<CBaseEntity> *v9; // rax
  CHandle<CBaseEntity> v10; // [rsp-28h] [rbp-28h] BYREF

  if ( pTarget != 0 && pTarget->m_bIsDOTANPC && (pTarget->m_iUnitType & 1) != 0 && !pTarget->m_bIsIllusion.m_Value )
  {
    v10.m_Index = -1;
    m_pEntity = pTarget->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v10.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
    }
    if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
           &this->m_vhAffectedHeroes,
           &v10) < 0 )
    {
      v10.m_Index = -1;
      if ( m_pEntity != 0 )
      {
        v5 = 0x7FFF;
        v6 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(v10.m_Index) = v5 | v10.m_Index & 0x8000;
        v10.m_Index = (v6 << 15) | v10.m_Index & 0x7FFF;
      }
      m_Size = this->m_vhAffectedHeroes.m_Size;
      v8 = this->m_vhAffectedHeroes.m_Size;
      if ( m_Size == this->m_vhAffectedHeroes.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_vhAffectedHeroes.m_Memory, 1);
        v8 = this->m_vhAffectedHeroes.m_Size;
      }
      this->m_vhAffectedHeroes.m_Size = v8 + 1;
      v9 = &this->m_vhAffectedHeroes.m_Memory.m_pMemory[m_Size];
      if ( v9 != 0 )
        v9->m_Index = v10.m_Index;
    }
  }
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura::OnRefresh  (line 747, @0x0000000002c70d70, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura::OnRefresh(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura::OnDestroy  (line 754, @0x0000000002c4e140, libserver.so)  // inlines: GetAbilityData, ToDOTABaseNPCHero
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::SwapAbilities, CBaseEntity::StopSound, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::GetAbility, CDOTAGamerules::SendProjectionAbilityEndChannelMessage, EconEntity_OnOwnerKillEaterEvent, CDOTABaseAbility::LoadAbilityData
// strings: "naga_siren_song_of_the_siren_cancel", "naga_siren_song_of_the_siren", "Hero_NagaSiren.SongOfTheSiren"
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura::OnDestroy(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren_Aura *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  int m_Size; // r12d
  CDOTABaseAbility *Ability; // rax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  int m_iAbilityID; // r12d
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC_Hero *v10; // rdi
  CDOTABaseAbility *v11; // [rsp+8h] [rbp-18h]

  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::SwapAbilities(Caster, "naga_siren_song_of_the_siren", "naga_siren_song_of_the_siren_cancel", 1, 0);
  v3 = CDOTA_Buff::GetCaster(this);
  CBaseEntity::StopSound(v3, "Hero_NagaSiren.SongOfTheSiren");
  m_Size = this->m_vhAffectedHeroes.m_Size;
  if ( m_Size != 0 )
  {
    v9 = CDOTA_Buff::GetCaster(this);
    if ( v9 != 0 && (v9->m_iUnitType & 1) != 0 )
      v10 = v9;
    else
      v10 = 0;
    EconEntity_OnOwnerKillEaterEvent(
      v10,
      0,
      kill_eater_event_t::kKillEaterEvent_DreamLeague_DreamPoints,
      m_Size,
      INVALID_ITEM_DEF_INDEX);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vhAffectedHeroes);
  if ( CDOTA_Buff::GetAbility(this) != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    m_pAbilityData = Ability->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      v11 = Ability;
      CDOTABaseAbility::LoadAbilityData(Ability, 0);
      m_pAbilityData = v11->m_pAbilityData;
    }
    m_iAbilityID = m_pAbilityData->m_iAbilityID;
    v8 = CDOTA_Buff::GetCaster(this);
    CDOTAGamerules::SendProjectionAbilityEndChannelMessage(g_pGameRules, v8, m_iAbilityID);
  }
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren::~CDOTA_Modifier_NagaSiren_SongOfTheSiren  (line 778, @0x0000000002c91330, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren::~CDOTA_Modifier_NagaSiren_SongOfTheSiren(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren *const this)
{
  this->_vptr_CDOTA_Buff = &off_45EF1B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren::~CDOTA_Modifier_NagaSiren_SongOfTheSiren  (line 778, @0x0000000002c91350, libserver.so)  // inlines: ~CDOTA_Modifier_NagaSiren_SongOfTheSiren
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren::~CDOTA_Modifier_NagaSiren_SongOfTheSiren(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren *const this)
{
  this->_vptr_CDOTA_Buff = &off_45EF1B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren::IsPurgable  (line 790, @0x0000000002c8b870, libserver.so)
bool __fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren::IsPurgable(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren *const this)
{
  return 0;
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren::GetEffectName  (line 794, @0x0000000002c95720, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster
// strings: "particles/units/heroes/hero_siren/naga_siren_song_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren::GetEffectName(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren *const this)
{
  unsigned __int8 m_Value; // r12
  CDOTA_BaseNPC *Caster; // rax
  const char *v4; // rdx

  m_Value = CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value;
  Caster = CDOTA_Buff::GetCaster(this);
  v4 = 0;
  if ( m_Value != Caster->m_iTeamNum.m_Value )
    return "particles/units/heroes/hero_siren/naga_siren_song_debuff.vpcf";
  return v4;
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren::GetEffectAttachType  (line 802, @0x0000000002c8b880, libserver.so)
int __fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren::GetEffectAttachType(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren *const this)
{
  return 7;
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren::GetStatusEffectName  (line 804, @0x0000000002c95760, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster
// strings: "particles/status_fx/status_effect_siren_song.vpcf"
const char *__fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren::GetStatusEffectName(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren *const this)
{
  unsigned __int8 m_Value; // r12
  CDOTA_BaseNPC *Caster; // rax
  const char *v4; // rdx

  m_Value = CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value;
  Caster = CDOTA_Buff::GetCaster(this);
  v4 = 0;
  if ( m_Value != Caster->m_iTeamNum.m_Value )
    return "particles/status_fx/status_effect_siren_song.vpcf";
  return v4;
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren::StatusEffectPriority  (line 811, @0x0000000002c8b890, libserver.so)
int __fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren::StatusEffectPriority(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren *const this)
{
  return 2000;
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren::GetAttributes  (line 813, @0x0000000002c8b8a0, libserver.so)
int __fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren::GetAttributes(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren *const this)
{
  return 4;
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren::CheckState  (line 849, @0x0000000002c1f170, libserver.so)  // inlines: Enable, GetTeamNumber
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster
void __fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren::CheckState(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren *const this,
        CDOTABuffState *const buffState)
{
  unsigned __int8 m_Value; // r13
  uint64 m_nDisabledStateMask; // rax

  m_Value = CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value;
  if ( m_Value != CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value )
  {
    m_nDisabledStateMask = buffState->m_nDisabledStateMask;
    buffState->m_nEnabledStateMask |= 0x123uLL;
    buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFFFEDCLL;
  }
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren::OnCreated  (line 862, @0x0000000002c598f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "animation_rate", "regen_rate_self"
void __fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren::OnCreated(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->animation_rate = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "animation_rate", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->regen_rate = 0.0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->animation_rate = 0.0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->regen_rate = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "regen_rate", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->regen_rate_self = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "regen_rate_self", -1, 0);
    return;
  }
LABEL_7:
  this->regen_rate_self = 0.0;
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren::DeclareFunctions  (line 870, @0x0000000002c1e040, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_NagaSiren_SongOfTheSiren::GetOverrideAnimation(CModifierParams const&), CDOTA_Modifier_NagaSiren_SongOfTheSiren::GetOverrideAnimationRate(CModifierParams const&), CDOTA_Modifier_NagaSiren_SongOfTheSiren::GetModifierRegenPercentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren::DeclareFunctions(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_NagaSiren_SongOfTheSiren::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
  this->m_Functions[92].__delta = 0;
  this->m_Functions[92].__pfn = CDOTA_Modifier_NagaSiren_SongOfTheSiren::GetOverrideAnimationRate;
  this->m_Functions[57].__pfn = CDOTA_Modifier_NagaSiren_SongOfTheSiren::GetModifierRegenPercentage;
  this->m_Functions[57].__delta = 0;
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren::GetOverrideAnimationRate  (line 878, @0x0000000002c26390, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster
ModifierVariant_t __fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren::GetOverrideAnimationRate(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren *const this,
        const CModifierParams *const params)
{
  unsigned __int8 m_Value; // r12
  CDOTA_BaseNPC *Caster; // rax
  unsigned __int64 v5; // rdx

  m_Value = CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value;
  Caster = CDOTA_Buff::GetCaster(this);
  v5 = 1;
  if ( m_Value != Caster->m_iTeamNum.m_Value )
    return ((LODWORD(this->animation_rate) << 32) | 1);
  return v5;
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren::GetOverrideAnimation  (line 886, @0x0000000002c263e0, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster
ModifierVariant_t __fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren::GetOverrideAnimation(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren *const this,
        const CModifierParams *const params)
{
  unsigned __int8 m_Value; // bl
  CDOTA_BaseNPC *Caster; // rax
  __int64 v5; // rdx

  m_Value = CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value;
  Caster = CDOTA_Buff::GetCaster(this);
  v5 = 0x44BCA00000000001LL;
  if ( m_Value == Caster->m_iTeamNum.m_Value )
    v5 = 1;
  return v5;
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren::GetModifierRegenPercentage  (line 895, @0x0000000002c1fb40, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren::GetModifierRegenPercentage(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Caster; // rax
  unsigned __int8 m_Value; // r12
  CDOTA_BaseNPC *v6; // r12
  CDOTA_BaseNPC *Parent; // rax
  __m128i regen_rate_low; // xmm1
  ModifierVariant_t result; // 0:rax.16

  Caster = CDOTA_Buff::GetCaster(this);
  if ( !CDOTA_BaseNPC::HasScepter(Caster) )
    return 1uLL;
  m_Value = CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value;
  if ( m_Value != CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value
    || (CDOTA_Buff::GetParent(this)->m_iUnitType & 0x10) != 0 )
  {
    return 1uLL;
  }
  v6 = CDOTA_Buff::GetCaster(this);
  Parent = CDOTA_Buff::GetParent(this);
  regen_rate_low = LODWORD(this->regen_rate);
  if ( v6 == Parent )
    regen_rate_low = LODWORD(this->regen_rate_self);
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(regen_rate_low) << 32) | 1;
  return result;
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren_IgnoreMe::~CDOTA_Modifier_NagaSiren_SongOfTheSiren_IgnoreMe  (line 911, @0x0000000002c93af0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren_IgnoreMe::~CDOTA_Modifier_NagaSiren_SongOfTheSiren_IgnoreMe(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren_IgnoreMe *const this)
{
  this->_vptr_CDOTA_Buff = &off_45EF490;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren_IgnoreMe::~CDOTA_Modifier_NagaSiren_SongOfTheSiren_IgnoreMe  (line 911, @0x0000000002c93b10, libserver.so)  // inlines: ~CDOTA_Modifier_NagaSiren_SongOfTheSiren_IgnoreMe
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren_IgnoreMe::~CDOTA_Modifier_NagaSiren_SongOfTheSiren_IgnoreMe(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren_IgnoreMe *const this)
{
  this->_vptr_CDOTA_Buff = &off_45EF490;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren_IgnoreMe::IsPurgable  (line 916, @0x0000000002c8b8b0, libserver.so)
bool __fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren_IgnoreMe::IsPurgable(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren_IgnoreMe *const this)
{
  return 0;
}


// CDOTA_Modifier_NagaSiren_SongOfTheSiren_IgnoreMe::IsHidden  (line 917, @0x0000000002c8b8c0, libserver.so)
bool __fastcall CDOTA_Modifier_NagaSiren_SongOfTheSiren_IgnoreMe::IsHidden(
        CDOTA_Modifier_NagaSiren_SongOfTheSiren_IgnoreMe *const this)
{
  return 1;
}


