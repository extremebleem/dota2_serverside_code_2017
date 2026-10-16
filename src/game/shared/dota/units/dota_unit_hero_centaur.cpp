// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_centaur.cpp:33
class CDOTA_Unit_Hero_Centaur : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Centaur(CDOTA_Unit_Hero_Centaur &);
	CDOTA_Unit_Hero_Centaur(CDOTA_Unit_Hero_Centaur &);
	CDOTA_Unit_Hero_Centaur();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool CanSpeak(int);
	virtual ~CDOTA_Unit_Hero_Centaur();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[459] CanSpeak
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_centaur.cpp:43
class C_CDOTA_Unit_Hero_Centaur_MapInstall {
	C_CDOTA_Unit_Hero_Centaur_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_centaur.cpp:62
class CDOTA_Ability_Centaur_HoofStomp : public CDOTABaseAbility {
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
	CDOTA_Ability_Centaur_HoofStomp(CDOTA_Ability_Centaur_HoofStomp &);
	CDOTA_Ability_Centaur_HoofStomp(CDOTA_Ability_Centaur_HoofStomp &);
	CDOTA_Ability_Centaur_HoofStomp();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Centaur_HoofStomp();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_centaur.cpp:75
class C_CDOTA_Ability_Centaur_HoofStomp_MapInstall {
	C_CDOTA_Ability_Centaur_HoofStomp_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_centaur.cpp:145
class CDOTA_Ability_Centaur_DoubleEdge : public CDOTABaseAbility {
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
	CDOTA_Ability_Centaur_DoubleEdge(CDOTA_Ability_Centaur_DoubleEdge &);
	CDOTA_Ability_Centaur_DoubleEdge(CDOTA_Ability_Centaur_DoubleEdge &);
	CDOTA_Ability_Centaur_DoubleEdge();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Centaur_DoubleEdge();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_centaur.cpp:218
class CDOTA_Ability_Centaur_Return : public CDOTABaseAbility {
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
	CDOTA_Ability_Centaur_Return(CDOTA_Ability_Centaur_Return &);
	CDOTA_Ability_Centaur_Return(CDOTA_Ability_Centaur_Return &);
	CDOTA_Ability_Centaur_Return();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Centaur_Return();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_centaur.cpp:232
class CDOTA_Modifier_Centaur_Return_Aura : public CDOTA_Buff {
public:

private:

	int aura_radius;  // +0xba8
	CDOTA_Modifier_Centaur_Return_Aura();
	virtual void OnCreated(KeyValues *);
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual bool GetAuraEntityReject(CDOTA_BaseNPC *);
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Centaur_Return_Aura();

	// vtable[57] OnCreated
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[42] GetAuraEntityReject
	// vtable[11] IsHidden
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_centaur.cpp:283
class CDOTA_Modifier_Centaur_Return : public CDOTA_Buff {
public:

private:

	int return_damage;  // +0xba8
	int strength_pct;  // +0xbac
	CDOTA_Modifier_Centaur_Return();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	virtual ~CDOTA_Modifier_Centaur_Return();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_centaur.cpp:380
class CDOTA_Ability_Centaur_Stampede : public CDOTABaseAbility {
public:

private:

	float duration;  // +0x390
	int base_damage;  // +0x394
	float strength_damage;  // +0x398
	float slow_duration;  // +0x39c
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
	CDOTA_Ability_Centaur_Stampede(CDOTA_Ability_Centaur_Stampede &);
	CDOTA_Ability_Centaur_Stampede(CDOTA_Ability_Centaur_Stampede &);
	CDOTA_Ability_Centaur_Stampede();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	void DoStampede(CDOTA_BaseNPC *, CDOTA_BaseNPC *);
	virtual float GetCooldown(int);
	virtual ~CDOTA_Ability_Centaur_Stampede();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[242] GetCooldown
	// sizeof = 952
};

// src/game/shared/dota/units/dota_unit_hero_centaur.cpp:399
class C_CDOTA_Ability_Centaur_Stampede_MapInstall {
	C_CDOTA_Ability_Centaur_Stampede_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_centaur.cpp:479
class CDOTA_Modifier_Centaur_Stampede_Slow : public CDOTA_Buff {
public:

private:

	int slow_movement_speed;  // +0xba8
	CDOTA_Modifier_Centaur_Stampede_Slow();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsHidden();
	virtual bool IsDebuff();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Centaur_Stampede_Slow();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[11] IsHidden
	// vtable[12] IsDebuff
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_centaur.cpp:530
class CDOTA_Modifier_Centaur_Stampede : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	int damage_reduction;  // +0xbac
	CDOTA_Modifier_Centaur_Stampede();
	virtual void CheckState(CDOTABuffState &);
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsPurgable();
	void DoStampede(CDOTA_BaseNPC *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeed_Absolute(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	ModifierVariant_t GetModifierIncomingDamage_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Centaur_Stampede();

	// vtable[5] CheckState
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// sizeof = 3016
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Centaur::~CDOTA_Unit_Hero_Centaur  (line 33, @0x0000000002c99c30, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Centaur::~CDOTA_Unit_Hero_Centaur(CDOTA_Unit_Hero_Centaur *const this)
{
  this->_vptr_IHandleEntity = &off_45908B0;
  this->_vptr_INextBotEventResponder = &off_4591890;
  this->_vptr_CObstructionObject = &off_4591BC0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Centaur::~CDOTA_Unit_Hero_Centaur  (line 33, @0x0000000002c99c70, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Centaur
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Centaur::~CDOTA_Unit_Hero_Centaur(CDOTA_Unit_Hero_Centaur *const this)
{
  this->_vptr_IHandleEntity = &off_45908B0;
  this->_vptr_INextBotEventResponder = &off_4591890;
  this->_vptr_CObstructionObject = &off_4591BC0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Centaur::Schema_DynamicBinding  (line 35, @0x0000000002c87350, libserver.so)
// globals: CDOTA_Unit_Hero_Centaur::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Centaur::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Centaur *const this)
{
  return CDOTA_Unit_Hero_Centaur::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Centaur::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 35, @0x0000000002c87380, libserver.so)
// globals: CDOTA_Unit_Hero_Centaur::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Centaur::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Centaur::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Centaur::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Centaur::CEntityInstanceEntityClass::DestructInstance  (line 35, @0x0000000002c87390, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Centaur>
void __fastcall CDOTA_Unit_Hero_Centaur::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Centaur::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Centaur::CEntityInstanceEntityClass::FreeInstance  (line 35, @0x0000000002c873b0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Centaur::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Centaur::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Centaur::CEntityInstanceEntityClass::CanAllocate  (line 35, @0x0000000002c873d0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Centaur::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Centaur::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Centaur::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 35, @0x0000000002c873e0, libserver.so)
// globals: CDOTA_Unit_Hero_Centaur::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Centaur::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Centaur::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Centaur::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Centaur::CEntityInstanceEntityClass::AllocateInstance  (line 35, @0x0000000002c8f3a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Centaur::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Centaur::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Centaur::CEntityInstanceEntityClass::ConstructInstance  (line 35, @0x0000000002c93e60, libserver.so)  // inlines: CDOTA_Unit_Hero_Centaur, Construct<CDOTA_Unit_Hero_Centaur>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Centaur::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Centaur::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_45908B0;
    *(p + 236) = &off_4591890;
    *(p + 257) = &off_4591BC0;
  }
  return p;
}


// CDOTA_Unit_Hero_Centaur::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 35, @0x0000000002ca35d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Centaur::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Centaur::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Centaur::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 35, @0x0000000002ca38d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Centaur::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Centaur::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Centaur::GetEntityClassInternal  (line 35, @0x0000000002cbd050, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "npc_dota_hero_centaur", "CDOTA_Unit_Hero_Centaur"
// globals: `guard variable for'CDOTA_Unit_Hero_Centaur::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_CentaurClass, CDOTA_Unit_Hero_Centaur::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_CentaurClass, __dso_handle, CDOTA_Unit_Hero_Centaur::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Centaur::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_CentaurClassInfo, CDOTA_Unit_Hero_Centaur::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_CentaurClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Centaur::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Centaur::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_CentaurClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Centaur::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_CentaurClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Centaur::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_CentaurClass);
    CDOTA_Unit_Hero_Centaur::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_CentaurClass._vptr_CEntityClass = off_4590830;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Centaur::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_CentaurClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Centaur::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Centaur::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_CentaurClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_CentaurClass != 0 )
    return &CDOTA_Unit_Hero_Centaur::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_CentaurClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Centaur::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_CentaurClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Centaur::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_CentaurClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Centaur::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_CentaurClassInfo,
      "CDOTA_Unit_Hero_Centaur",
      "npc_dota_hero_centaur",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Centaur::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_CentaurClassInfo);
  }
  CDOTA_Unit_Hero_Centaur::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_CentaurClass.m_pClassInfo = &CDOTA_Unit_Hero_Centaur::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_CentaurClassInfo;
  CDOTA_Unit_Hero_Centaur::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_CentaurClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Centaur::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_CentaurClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_CentaurClass = &CDOTA_Unit_Hero_Centaur::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_CentaurClass;
  CDOTA_Unit_Hero_Centaur::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_CentaurClassInfo.m_pClass = &CDOTA_Unit_Hero_Centaur::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_CentaurClass;
  CDOTA_Unit_Hero_Centaur::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_CentaurClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_CentaurClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Centaur::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_CentaurClass;
}


// CDOTA_Unit_Hero_Centaur::YouForgotToImplementOrDeclareServerClass  (line 43, @0x0000000002c1bc20, libserver.so)
int __fastcall CDOTA_Unit_Hero_Centaur::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Centaur *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Centaur::GetServerClass  (line 43, @0x0000000002c352f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Centaur::GetServerClass(CDOTA_Unit_Hero_Centaur *const this)
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


// CDOTA_Unit_Hero_Centaur::CanSpeak  (line 50, @0x0000000002c1f520, libserver.so)
// calls: CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_centaur_stampede"
bool __fastcall CDOTA_Unit_Hero_Centaur::CanSpeak(CDOTA_Unit_Hero_Centaur *const this, int iConcept)
{
  return CDOTA_BaseNPC::FindModifierByName(this, "modifier_centaur_stampede", 0) == 0;
}


// CDOTA_Ability_Centaur_HoofStomp::~CDOTA_Ability_Centaur_HoofStomp  (line 62, @0x0000000002c97f20, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Centaur_HoofStomp::~CDOTA_Ability_Centaur_HoofStomp(
        CDOTA_Ability_Centaur_HoofStomp *const this)
{
  this->_vptr_IHandleEntity = &off_4591C90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Centaur_HoofStomp::~CDOTA_Ability_Centaur_HoofStomp  (line 62, @0x0000000002c97f40, libserver.so)  // inlines: ~CDOTA_Ability_Centaur_HoofStomp
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Centaur_HoofStomp::~CDOTA_Ability_Centaur_HoofStomp(
        CDOTA_Ability_Centaur_HoofStomp *const this)
{
  this->_vptr_IHandleEntity = &off_4591C90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Centaur_HoofStomp::Schema_DynamicBinding  (line 64, @0x0000000002c873f0, libserver.so)
// globals: CDOTA_Ability_Centaur_HoofStomp::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Centaur_HoofStomp::Schema_DynamicBinding(
        const CDOTA_Ability_Centaur_HoofStomp *const this)
{
  return CDOTA_Ability_Centaur_HoofStomp::s_pSchemaBinding;
}


// CDOTA_Ability_Centaur_HoofStomp::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 64, @0x0000000002c87400, libserver.so)
// globals: CDOTA_Ability_Centaur_HoofStomp::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Centaur_HoofStomp::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Centaur_HoofStomp::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Centaur_HoofStomp::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Centaur_HoofStomp::CEntityInstanceEntityClass::DestructInstance  (line 64, @0x0000000002c87410, libserver.so)  // inlines: Destruct<CDOTA_Ability_Centaur_HoofStomp>
void __fastcall CDOTA_Ability_Centaur_HoofStomp::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Centaur_HoofStomp::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Centaur_HoofStomp::CEntityInstanceEntityClass::FreeInstance  (line 64, @0x0000000002c87430, libserver.so)
void __fastcall CDOTA_Ability_Centaur_HoofStomp::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Centaur_HoofStomp::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Centaur_HoofStomp::CEntityInstanceEntityClass::CanAllocate  (line 64, @0x0000000002c87450, libserver.so)
bool __fastcall CDOTA_Ability_Centaur_HoofStomp::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Centaur_HoofStomp::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Centaur_HoofStomp::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 64, @0x0000000002c87460, libserver.so)
// globals: CDOTA_Ability_Centaur_HoofStomp::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Centaur_HoofStomp::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Centaur_HoofStomp::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Centaur_HoofStomp::s_pSchemaBinding;
}


// CDOTA_Ability_Centaur_HoofStomp::CEntityInstanceEntityClass::AllocateInstance  (line 64, @0x0000000002c8f3e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Centaur_HoofStomp::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Centaur_HoofStomp::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Centaur_HoofStomp::CEntityInstanceEntityClass::ConstructInstance  (line 64, @0x0000000002c946d0, libserver.so)  // inlines: CDOTA_Ability_Centaur_HoofStomp, Construct<CDOTA_Ability_Centaur_HoofStomp>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Centaur_HoofStomp::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Centaur_HoofStomp::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4591C90;
  }
  return p;
}


// CDOTA_Ability_Centaur_HoofStomp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 64, @0x0000000002ca1990, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Centaur_HoofStomp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Centaur_HoofStomp::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Centaur_HoofStomp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 64, @0x0000000002ca19b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Centaur_HoofStomp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Centaur_HoofStomp::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Centaur_HoofStomp::GetEntityClassInternal  (line 64, @0x0000000002cb8d60, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "CDOTA_Ability_Centaur_HoofStomp"
// globals: `guard variable for'CDOTA_Ability_Centaur_HoofStomp::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_HoofStompClass, CDOTA_Ability_Centaur_HoofStomp::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_HoofStompClass, __dso_handle, CDOTA_Ability_Centaur_HoofStomp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Centaur_HoofStomp::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_HoofStompClassInfo, CDOTA_Ability_Centaur_HoofStomp::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_HoofStompClassInfo
CEntityClass *__cdecl CDOTA_Ability_Centaur_HoofStomp::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Centaur_HoofStomp::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_HoofStompClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Centaur_HoofStomp::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_HoofStompClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Centaur_HoofStomp::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_HoofStompClass);
    CDOTA_Ability_Centaur_HoofStomp::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_HoofStompClass._vptr_CEntityClass = off_4591C10;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Centaur_HoofStomp::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_HoofStompClass);
    __cxa_atexit(
      CDOTA_Ability_Centaur_HoofStomp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Centaur_HoofStomp::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_HoofStompClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Centaur_HoofStompClass != 0 )
    return &CDOTA_Ability_Centaur_HoofStomp::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_HoofStompClass;
  if ( `guard variable for'CDOTA_Ability_Centaur_HoofStomp::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_HoofStompClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Centaur_HoofStomp::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_HoofStompClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Centaur_HoofStomp::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_HoofStompClassInfo,
      "CDOTA_Ability_Centaur_HoofStomp",
      "centaur_hoof_stomp",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Centaur_HoofStomp::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_HoofStompClassInfo);
  }
  CDOTA_Ability_Centaur_HoofStomp::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_HoofStompClass.m_pClassInfo = &CDOTA_Ability_Centaur_HoofStomp::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_HoofStompClassInfo;
  CDOTA_Ability_Centaur_HoofStomp::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_HoofStompClass.m_pBaseClassInfo = CDOTA_Ability_Centaur_HoofStomp::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_HoofStompClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Centaur_HoofStompClass = &CDOTA_Ability_Centaur_HoofStomp::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_HoofStompClass;
  CDOTA_Ability_Centaur_HoofStomp::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_HoofStompClassInfo.m_pClass = &CDOTA_Ability_Centaur_HoofStomp::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_HoofStompClass;
  CDOTA_Ability_Centaur_HoofStomp::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_HoofStompClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Centaur_HoofStompClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Centaur_HoofStomp::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_HoofStompClass;
}


// CDOTA_Ability_Centaur_HoofStomp::YouForgotToImplementOrDeclareServerClass  (line 75, @0x0000000002c1bc30, libserver.so)
int __fastcall CDOTA_Ability_Centaur_HoofStomp::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Centaur_HoofStomp *const this)
{
  return 0;
}


// CDOTA_Ability_Centaur_HoofStomp::GetServerClass  (line 75, @0x0000000002c35af0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Centaur_HoofStomp::GetServerClass(CDOTA_Ability_Centaur_HoofStomp *const this)
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


// CDOTA_Ability_Centaur_HoofStomp::OnSpellStart  (line 84, @0x0000000002c6be60, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsRealHero, IsValid, LookupEntity, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound, FindUnitsInRadius (22 total)
// strings: "stomp_damage", "special_bonus_unique_centaur_2", "particles/units/heroes/hero_centaur/centaur_warstomp.vpcf", "attach_hoof_R", "attach_hoof_L", "Hero_Centaur.HoofStomp" (8 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Centaur_HoofStomp::OnSpellStart(CDOTA_Ability_Centaur_HoofStomp *const this)
{
  int LevelSpecialValue; // r14d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v5; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax
  __m128i v8; // xmm3
  float v9; // r14d
  CDOTA_ParticleManager *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v13; // r15
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  const Vector *v16; // r13
  CDOTA_BaseNPC *v17; // r15
  CDOTA_ParticleManager *v18; // rax
  CDOTA_ParticleManager *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC *v21; // r13
  CDOTA_BaseNPC *v22; // rax
  const Vector *v23; // rbx
  CDOTA_BaseNPC *v24; // rax
  __int64 v25; // r13
  int v26; // r14d
  CHandle<CBaseEntity> *v27; // rdx
  uint32 m_Index; // eax
  __int16 v29; // cx
  CEntityIdentity *v30; // rdx
  CEntityIdentity *v31; // rdx
  CEntityInstance *m_pInstance; // rbx
  float v33; // xmm1_4
  CDOTA_BaseNPC *v34; // rax
  CDOTA_BaseNPC *v35; // rax
  CDOTA_BaseNPC *v36; // rax
  CDOTA_BaseNPC_Hero *v37; // rax
  int nHeroesStomped; // [rsp+20h] [rbp-80h]
  int stomp_damage; // [rsp+24h] [rbp-7Ch]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v42; // [rsp+68h] [rbp-38h]

  v42 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 0);
  stomp_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "stomp_damage", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_centaur_2", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  v5 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_centaur/centaur_warstomp.vpcf",
               0,
               v5,
               0,
               0);
  *v8.m128i_i32 = LevelSpecialValue;
  LODWORD(v5) = Particle;
  v9 = COERCE_FLOAT(_mm_cvtsi128_si32(v8));
  entities.m_Size = v8.m128i_i32[0];
  *(&entities.m_Size + 1) = v8.m128i_i32[0];
  LODWORD(entities.m_Memory.m_pMemory) = v8.m128i_i32[0];
  v10 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v10, v5, 1, *&entities.m_Size, *&entities.m_Memory.m_pMemory);
  v11 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
  v13 = CDOTABaseAbility::GetCaster(this);
  v14 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v14, v5, 2, v13, 5, "attach_hoof_R", *AbsOrigin, 1);
  v15 = CDOTABaseAbility::GetCaster(this);
  v16 = CBaseEntity::GetAbsOrigin(v15);
  v17 = CDOTABaseAbility::GetCaster(this);
  v18 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v18, v5, 3, v17, 5, "attach_hoof_L", *v16, 1);
  v19 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v19, v5);
  v20 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Centaur.HoofStomp", v20);
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v21 = CDOTABaseAbility::GetCaster(this);
  v22 = CDOTABaseAbility::GetCaster(this);
  v23 = CBaseEntity::GetAbsOrigin(v22);
  v24 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v24->m_iTeamNum.m_Value, v23, v21, v9, &entities, 2, 3, 0, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v25 = 0;
    v26 = 0;
    nHeroesStomped = 0;
    do
    {
      while ( 1 )
      {
        v27 = &entities.m_Memory.m_pMemory[v25];
        m_Index = entities.m_Memory.m_pMemory[v25].m_Index;
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
              if ( v31->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                break;
            }
          }
        }
        ++v26;
        ++v25;
        if ( entities.m_Size <= v26 )
          goto LABEL_16;
      }
      KeyValues::KeyValues(&kv, "modifier_centaur_hoof_stomp");
      KeyValues::SetFloat(&kv, "duration", v33);
      v34 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v34, this, "modifier_stunned", &kv, 0);
      v35 = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(v35, m_pInstance, this, stomp_damage, 2, 0);
      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        nHeroesStomped += LOBYTE(m_pInstance[71].m_pEntity) == 0;
      ++v26;
      ++v25;
      KeyValues::~KeyValues(&kv);
    }
    while ( entities.m_Size > v26 );
LABEL_16:
    if ( nHeroesStomped != 0 )
    {
      v36 = CDOTABaseAbility::GetCaster(this);
      v37 = ToDOTABaseNPCRealHero(v36);
      EconEntity_OnOwnerKillEaterEvent(
        v37,
        0,
        kill_eater_event_t::kKillEaterEvent_Centaur_EnemiesStomped,
        nHeroesStomped,
        INVALID_ITEM_DEF_INDEX);
    }
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Ability_Centaur_DoubleEdge::~CDOTA_Ability_Centaur_DoubleEdge  (line 145, @0x0000000002c97f70, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Centaur_DoubleEdge::~CDOTA_Ability_Centaur_DoubleEdge(
        CDOTA_Ability_Centaur_DoubleEdge *const this)
{
  this->_vptr_IHandleEntity = &off_4592790;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Centaur_DoubleEdge::~CDOTA_Ability_Centaur_DoubleEdge  (line 145, @0x0000000002c97f90, libserver.so)  // inlines: ~CDOTA_Ability_Centaur_DoubleEdge
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Centaur_DoubleEdge::~CDOTA_Ability_Centaur_DoubleEdge(
        CDOTA_Ability_Centaur_DoubleEdge *const this)
{
  this->_vptr_IHandleEntity = &off_4592790;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Centaur_DoubleEdge::Schema_DynamicBinding  (line 147, @0x0000000002c87470, libserver.so)
// globals: CDOTA_Ability_Centaur_DoubleEdge::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Centaur_DoubleEdge::Schema_DynamicBinding(
        const CDOTA_Ability_Centaur_DoubleEdge *const this)
{
  return CDOTA_Ability_Centaur_DoubleEdge::s_pSchemaBinding;
}


// CDOTA_Ability_Centaur_DoubleEdge::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 147, @0x0000000002c87480, libserver.so)
// globals: CDOTA_Ability_Centaur_DoubleEdge::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Centaur_DoubleEdge::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Centaur_DoubleEdge::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Centaur_DoubleEdge::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Centaur_DoubleEdge::CEntityInstanceEntityClass::DestructInstance  (line 147, @0x0000000002c87490, libserver.so)  // inlines: Destruct<CDOTA_Ability_Centaur_DoubleEdge>
void __fastcall CDOTA_Ability_Centaur_DoubleEdge::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Centaur_DoubleEdge::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Centaur_DoubleEdge::CEntityInstanceEntityClass::FreeInstance  (line 147, @0x0000000002c874b0, libserver.so)
void __fastcall CDOTA_Ability_Centaur_DoubleEdge::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Centaur_DoubleEdge::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Centaur_DoubleEdge::CEntityInstanceEntityClass::CanAllocate  (line 147, @0x0000000002c874d0, libserver.so)
bool __fastcall CDOTA_Ability_Centaur_DoubleEdge::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Centaur_DoubleEdge::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Centaur_DoubleEdge::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 147, @0x0000000002c874e0, libserver.so)
// globals: CDOTA_Ability_Centaur_DoubleEdge::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Centaur_DoubleEdge::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Centaur_DoubleEdge::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Centaur_DoubleEdge::s_pSchemaBinding;
}


// CDOTA_Ability_Centaur_DoubleEdge::CEntityInstanceEntityClass::AllocateInstance  (line 147, @0x0000000002c8f420, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Centaur_DoubleEdge::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Centaur_DoubleEdge::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Centaur_DoubleEdge::CEntityInstanceEntityClass::ConstructInstance  (line 147, @0x0000000002c94700, libserver.so)  // inlines: CDOTA_Ability_Centaur_DoubleEdge, Construct<CDOTA_Ability_Centaur_DoubleEdge>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Centaur_DoubleEdge::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Centaur_DoubleEdge::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4592790;
  }
  return p;
}


// CDOTA_Ability_Centaur_DoubleEdge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 147, @0x0000000002ca19e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Centaur_DoubleEdge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Centaur_DoubleEdge::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Centaur_DoubleEdge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 147, @0x0000000002ca1a00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Centaur_DoubleEdge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Centaur_DoubleEdge::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Centaur_DoubleEdge::GetEntityClassInternal  (line 147, @0x0000000002cb8eb0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "centaur_double_edge", "CDOTA_Ability_Centaur_DoubleEdge"
// globals: `guard variable for'CDOTA_Ability_Centaur_DoubleEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_DoubleEdgeClass, CDOTA_Ability_Centaur_DoubleEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_DoubleEdgeClass, __dso_handle, CDOTA_Ability_Centaur_DoubleEdge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Centaur_DoubleEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_DoubleEdgeClassInfo, CDOTA_Ability_Centaur_DoubleEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_DoubleEdgeClassInfo
CEntityClass *__cdecl CDOTA_Ability_Centaur_DoubleEdge::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Centaur_DoubleEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_DoubleEdgeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Centaur_DoubleEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_DoubleEdgeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Centaur_DoubleEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_DoubleEdgeClass);
    CDOTA_Ability_Centaur_DoubleEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_DoubleEdgeClass._vptr_CEntityClass = off_4592710;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Centaur_DoubleEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_DoubleEdgeClass);
    __cxa_atexit(
      CDOTA_Ability_Centaur_DoubleEdge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Centaur_DoubleEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_DoubleEdgeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Centaur_DoubleEdgeClass != 0 )
    return &CDOTA_Ability_Centaur_DoubleEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_DoubleEdgeClass;
  if ( `guard variable for'CDOTA_Ability_Centaur_DoubleEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_DoubleEdgeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Centaur_DoubleEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_DoubleEdgeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Centaur_DoubleEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_DoubleEdgeClassInfo,
      "CDOTA_Ability_Centaur_DoubleEdge",
      "centaur_double_edge",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Centaur_DoubleEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_DoubleEdgeClassInfo);
  }
  CDOTA_Ability_Centaur_DoubleEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_DoubleEdgeClass.m_pClassInfo = &CDOTA_Ability_Centaur_DoubleEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_DoubleEdgeClassInfo;
  CDOTA_Ability_Centaur_DoubleEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_DoubleEdgeClass.m_pBaseClassInfo = CDOTA_Ability_Centaur_DoubleEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_DoubleEdgeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Centaur_DoubleEdgeClass = &CDOTA_Ability_Centaur_DoubleEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_DoubleEdgeClass;
  CDOTA_Ability_Centaur_DoubleEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_DoubleEdgeClassInfo.m_pClass = &CDOTA_Ability_Centaur_DoubleEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_DoubleEdgeClass;
  CDOTA_Ability_Centaur_DoubleEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_DoubleEdgeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Centaur_DoubleEdgeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Centaur_DoubleEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_DoubleEdgeClass;
}


// CDOTA_Ability_Centaur_DoubleEdge::OnSpellStart  (line 157, @0x0000000002c6c2d0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsRealHero, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, ApplyDamage, DOTA_EmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex (15 total)
// strings: "edge_damage", "Hero_Centaur.Gore", "particles/units/heroes/hero_centaur/centaur_double_edge.vpcf", "attach_hitloc", "attach_attack1", "attach_head" (8 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Centaur_DoubleEdge::OnSpellStart(CDOTA_Ability_Centaur_DoubleEdge *const this)
{
  int LevelSpecialValue; // ebx
  int v3; // r12d
  CBaseEntity *CursorTarget; // rax
  __m128i v5; // xmm3
  float v6; // r12d
  CDOTA_BaseNPC *Caster; // r15
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v9; // rax
  __int64 v10; // r13
  int v11; // r12d
  CHandle<CBaseEntity> *v12; // rdx
  uint32 m_Index; // eax
  __int16 v14; // cx
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityInstance *m_pInstance; // rbx
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rbx
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC *v21; // rbx
  CDOTA_ParticleManager *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  const Vector *v24; // r12
  CDOTA_BaseNPC *v25; // r13
  CDOTA_ParticleManager *v26; // rax
  const Vector *v27; // r12
  CDOTA_ParticleManager *v28; // rax
  CDOTA_BaseNPC *v29; // r13
  CDOTA_ParticleManager *v30; // rax
  CDOTA_ParticleManager *v31; // rax
  CDOTA_BaseNPC *v32; // rax
  const Vector *v33; // r13
  CDOTA_BaseNPC *v34; // r15
  CDOTA_ParticleManager *v35; // rax
  CDOTA_BaseNPC *v36; // rax
  const Vector *v37; // r13
  CDOTA_BaseNPC *v38; // r15
  CDOTA_ParticleManager *v39; // rax
  CDOTA_ParticleManager *v40; // rax
  CDOTA_BaseNPC *v41; // rbx
  CDOTA_ParticleManager *v42; // rax
  const Vector *v43; // rbx
  CDOTA_ParticleManager *v44; // rax
  CDOTA_ParticleManager *v45; // rax
  CDOTA_ParticleManager *v46; // rax
  CDOTA_BaseNPC *v47; // rax
  CDOTA_BaseNPC *v48; // r15
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v50; // rax
  CDOTA_ParticleManager *v51; // rax
  CDOTA_ParticleManager *v52; // rax
  CDOTA_BaseNPC_Hero *v53; // r15
  CDOTA_BaseNPC *v54; // rax
  CDOTA_BaseNPC_Hero *v55; // rdi
  CDOTA_BaseNPC *v56; // [rsp+28h] [rbp-68h]
  const Vector *v57; // [rsp+30h] [rbp-60h]
  float flDamage; // [rsp+3Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-50h] BYREF

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "edge_damage", -1, 0);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v56 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0
    && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 1) == 0
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1)
    && (v56->m_nUnitState64.m_Value & 0x200) == 0 )
  {
    *v5.m128i_i32 = v3;
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
    Caster = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v56);
    v9 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v9->m_iTeamNum.m_Value, AbsOrigin, Caster, v6, &entities, 2, 3, 0, 0, 0);
    if ( entities.m_Size <= 0 )
    {
      flDamage = LevelSpecialValue;
    }
    else
    {
      v10 = 0;
      v11 = 0;
      flDamage = LevelSpecialValue;
      do
      {
        while ( 1 )
        {
          v12 = &entities.m_Memory.m_pMemory[v10];
          m_Index = entities.m_Memory.m_pMemory[v10].m_Index;
          if ( m_Index + 2 > 1 )
          {
            v14 = v12->m_Index;
            v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v12->m_Index) >> 9) & 0x3F];
            if ( v15 != 0 )
            {
              v16 = &v15[v14 & 0x1FF];
              if ( v16 != 0 && m_Index == v16->m_EHandle.m_Index )
              {
                m_pInstance = v16->m_pInstance;
                if ( v16->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                  break;
              }
            }
          }
          ++v11;
          ++v10;
          if ( entities.m_Size <= v11 )
            goto LABEL_18;
        }
        v18 = CDOTABaseAbility::GetCaster(this);
        ApplyDamage(v18, m_pInstance, this, flDamage, 2, 0);
        if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        {
          v48 = CDOTABaseAbility::GetCaster(this);
          ParticleManager = GetParticleManager();
          LODWORD(v48) = CDOTA_ParticleManager::CreateParticle(
                           ParticleManager,
                           "particles/units/heroes/hero_centaur/centaur_double_edge_body.vpcf",
                           2,
                           v48,
                           0,
                           0);
          v57 = CBaseEntity::GetAbsOrigin(m_pInstance);
          v50 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v50, v48, 0, m_pInstance, 5, "attach_hitloc", *v57, 1);
          v51 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v51, v48, 1, m_pInstance, 1, 0, vec3_invalid, 1);
          v52 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v52, v48);
          if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
            && LOBYTE(m_pInstance[71].m_pEntity) == 0
            && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) == 0 )
          {
            v53 = 0;
            if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
              && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
            {
              v53 = m_pInstance;
            }
            v54 = CDOTABaseAbility::GetCaster(this);
            if ( v54 == 0
              || !v54->m_bIsDOTANPC
              || (v54->m_iUnitType & 1) == 0
              || (v55 = v54, v54->m_bIsIllusion.m_Value) )
            {
              v55 = 0;
            }
            EconEntity_OnOwnerKillEaterEvent(
              v55,
              v53,
              kill_eater_event_t::kKillEaterEvent_Centaur_DoubleEdgeKills,
              1,
              INVALID_ITEM_DEF_INDEX);
          }
        }
        DOTA_EmitSound(10, "Hero_Centaur.Gore", m_pInstance);
        ++v11;
        ++v10;
      }
      while ( entities.m_Size > v11 );
    }
LABEL_18:
    v19 = CDOTABaseAbility::GetCaster(this);
    v20 = CDOTABaseAbility::GetCaster(this);
    ApplyDamage(v20, v19, this, flDamage, 2, 128);
    v21 = CDOTABaseAbility::GetCaster(this);
    v22 = GetParticleManager();
    LODWORD(v21) = CDOTA_ParticleManager::CreateParticle(
                     v22,
                     "particles/units/heroes/hero_centaur/centaur_double_edge.vpcf",
                     2,
                     v21,
                     0,
                     0);
    v23 = CDOTABaseAbility::GetCaster(this);
    v24 = CBaseEntity::GetAbsOrigin(v23);
    v25 = CDOTABaseAbility::GetCaster(this);
    v26 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v26, v21, 0, v25, 5, "attach_hitloc", *v24, 1);
    v27 = CBaseEntity::GetAbsOrigin(v56);
    v28 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v28, v21, 1, v56, 5, "attach_hitloc", *v27, 1);
    v29 = CDOTABaseAbility::GetCaster(this);
    v30 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v30, v21, 2, v29, 1, 0, vec3_invalid, 1);
    v31 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v31, v21, 3, v56, 1, 0, vec3_invalid, 1);
    v32 = CDOTABaseAbility::GetCaster(this);
    v33 = CBaseEntity::GetAbsOrigin(v32);
    v34 = CDOTABaseAbility::GetCaster(this);
    v35 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v35, v21, 4, v34, 5, "attach_attack1", *v33, 1);
    v36 = CDOTABaseAbility::GetCaster(this);
    v37 = CBaseEntity::GetAbsOrigin(v36);
    v38 = CDOTABaseAbility::GetCaster(this);
    v39 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v39, v21, 5, v38, 5, "attach_head", *v37, 1);
    v40 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v40, v21);
    v41 = CDOTABaseAbility::GetCaster(this);
    v42 = GetParticleManager();
    LODWORD(v37) = CDOTA_ParticleManager::CreateParticle(
                     v42,
                     "particles/units/heroes/hero_centaur/centaur_double_edge_body.vpcf",
                     2,
                     v41,
                     0,
                     0);
    v43 = CBaseEntity::GetAbsOrigin(v56);
    v44 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v44, v37, 0, v56, 5, "attach_hitloc", *v43, 1);
    v45 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v45, v37, 1, v56, 1, 0, vec3_invalid, 1);
    v46 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v46, v37);
    v47 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "Hero_Centaur.DoubleEdge", v47);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
}


// CDOTA_Ability_Centaur_Return::~CDOTA_Ability_Centaur_Return  (line 218, @0x0000000002c97fc0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Centaur_Return::~CDOTA_Ability_Centaur_Return(CDOTA_Ability_Centaur_Return *const this)
{
  this->_vptr_IHandleEntity = &off_4593290;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Centaur_Return::~CDOTA_Ability_Centaur_Return  (line 218, @0x0000000002c97fe0, libserver.so)  // inlines: ~CDOTA_Ability_Centaur_Return
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Centaur_Return::~CDOTA_Ability_Centaur_Return(CDOTA_Ability_Centaur_Return *const this)
{
  this->_vptr_IHandleEntity = &off_4593290;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Centaur_Return::Schema_DynamicBinding  (line 220, @0x0000000002c874f0, libserver.so)
// globals: CDOTA_Ability_Centaur_Return::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Centaur_Return::Schema_DynamicBinding(
        const CDOTA_Ability_Centaur_Return *const this)
{
  return CDOTA_Ability_Centaur_Return::s_pSchemaBinding;
}


// CDOTA_Ability_Centaur_Return::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 220, @0x0000000002c87500, libserver.so)
// globals: CDOTA_Ability_Centaur_Return::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Centaur_Return::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Centaur_Return::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Centaur_Return::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Centaur_Return::CEntityInstanceEntityClass::DestructInstance  (line 220, @0x0000000002c87510, libserver.so)  // inlines: Destruct<CDOTA_Ability_Centaur_Return>
void __fastcall CDOTA_Ability_Centaur_Return::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Centaur_Return::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Centaur_Return::CEntityInstanceEntityClass::FreeInstance  (line 220, @0x0000000002c87530, libserver.so)
void __fastcall CDOTA_Ability_Centaur_Return::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Centaur_Return::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Centaur_Return::CEntityInstanceEntityClass::CanAllocate  (line 220, @0x0000000002c87550, libserver.so)
bool __fastcall CDOTA_Ability_Centaur_Return::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Centaur_Return::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Centaur_Return::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 220, @0x0000000002c87560, libserver.so)
// globals: CDOTA_Ability_Centaur_Return::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Centaur_Return::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Centaur_Return::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Centaur_Return::s_pSchemaBinding;
}


// CDOTA_Ability_Centaur_Return::CEntityInstanceEntityClass::AllocateInstance  (line 220, @0x0000000002c8f460, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Centaur_Return::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Centaur_Return::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Centaur_Return::CEntityInstanceEntityClass::ConstructInstance  (line 220, @0x0000000002c94730, libserver.so)  // inlines: CDOTA_Ability_Centaur_Return, Construct<CDOTA_Ability_Centaur_Return>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Centaur_Return::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Centaur_Return::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4593290;
  }
  return p;
}


// CDOTA_Ability_Centaur_Return::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 220, @0x0000000002ca1a30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Centaur_Return::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Centaur_Return::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Centaur_Return::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 220, @0x0000000002ca1a50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Centaur_Return::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Centaur_Return::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Centaur_Return::GetEntityClassInternal  (line 220, @0x0000000002cb9000, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "CDOTA_Ability_Centaur_Return"
// globals: `guard variable for'CDOTA_Ability_Centaur_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_ReturnClass, CDOTA_Ability_Centaur_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_ReturnClass, __dso_handle, CDOTA_Ability_Centaur_Return::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Centaur_Return::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_ReturnClassInfo, CDOTA_Ability_Centaur_Return::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_ReturnClassInfo
CEntityClass *__cdecl CDOTA_Ability_Centaur_Return::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Centaur_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_ReturnClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Centaur_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_ReturnClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Centaur_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_ReturnClass);
    CDOTA_Ability_Centaur_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_ReturnClass._vptr_CEntityClass = off_4593210;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Centaur_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_ReturnClass);
    __cxa_atexit(
      CDOTA_Ability_Centaur_Return::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Centaur_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_ReturnClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Centaur_ReturnClass != 0 )
    return &CDOTA_Ability_Centaur_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_ReturnClass;
  if ( `guard variable for'CDOTA_Ability_Centaur_Return::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_ReturnClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Centaur_Return::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_ReturnClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Centaur_Return::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_ReturnClassInfo,
      "CDOTA_Ability_Centaur_Return",
      "centaur_return",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Centaur_Return::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_ReturnClassInfo);
  }
  CDOTA_Ability_Centaur_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_ReturnClass.m_pClassInfo = &CDOTA_Ability_Centaur_Return::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_ReturnClassInfo;
  CDOTA_Ability_Centaur_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_ReturnClass.m_pBaseClassInfo = CDOTA_Ability_Centaur_Return::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_ReturnClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Centaur_ReturnClass = &CDOTA_Ability_Centaur_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_ReturnClass;
  CDOTA_Ability_Centaur_Return::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_ReturnClassInfo.m_pClass = &CDOTA_Ability_Centaur_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_ReturnClass;
  CDOTA_Ability_Centaur_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_ReturnClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Centaur_ReturnClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Centaur_Return::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_ReturnClass;
}


// CDOTA_Ability_Centaur_Return::GetIntrinsicModifierName  (line 222, @0x0000000002c87570, libserver.so)
// strings: "modifier_centaur_return_aura"
const char *__fastcall CDOTA_Ability_Centaur_Return::GetIntrinsicModifierName(CDOTA_Ability_Centaur_Return *const this)
{
  return "modifier_centaur_return_aura";
}


// CDOTA_Modifier_Centaur_Return_Aura::~CDOTA_Modifier_Centaur_Return_Aura  (line 232, @0x0000000002c931e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Centaur_Return_Aura::~CDOTA_Modifier_Centaur_Return_Aura(
        CDOTA_Modifier_Centaur_Return_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4593D50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Centaur_Return_Aura::~CDOTA_Modifier_Centaur_Return_Aura  (line 232, @0x0000000002c93200, libserver.so)  // inlines: ~CDOTA_Modifier_Centaur_Return_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Centaur_Return_Aura::~CDOTA_Modifier_Centaur_Return_Aura(
        CDOTA_Modifier_Centaur_Return_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4593D50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Centaur_Return_Aura::IsAura  (line 239, @0x0000000002c87580, libserver.so)
bool __fastcall CDOTA_Modifier_Centaur_Return_Aura::IsAura(CDOTA_Modifier_Centaur_Return_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Centaur_Return_Aura::GetModifierAura  (line 240, @0x0000000002c87590, libserver.so)
// strings: "modifier_centaur_return"
const char *__fastcall CDOTA_Modifier_Centaur_Return_Aura::GetModifierAura(
        CDOTA_Modifier_Centaur_Return_Aura *const this)
{
  return "modifier_centaur_return";
}


// CDOTA_Modifier_Centaur_Return_Aura::GetAuraSearchTeam  (line 242, @0x0000000002c875a0, libserver.so)
int __fastcall CDOTA_Modifier_Centaur_Return_Aura::GetAuraSearchTeam(CDOTA_Modifier_Centaur_Return_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Centaur_Return_Aura::GetAuraSearchType  (line 243, @0x0000000002c875b0, libserver.so)
int __fastcall CDOTA_Modifier_Centaur_Return_Aura::GetAuraSearchType(CDOTA_Modifier_Centaur_Return_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Centaur_Return_Aura::GetAuraSearchFlags  (line 244, @0x0000000002c875c0, libserver.so)
int __fastcall CDOTA_Modifier_Centaur_Return_Aura::GetAuraSearchFlags(CDOTA_Modifier_Centaur_Return_Aura *const this)
{
  return 80;
}


// CDOTA_Modifier_Centaur_Return_Aura::GetAuraRadius  (line 245, @0x0000000002c875d0, libserver.so)
int __fastcall CDOTA_Modifier_Centaur_Return_Aura::GetAuraRadius(CDOTA_Modifier_Centaur_Return_Aura *const this)
{
  return this->aura_radius;
}


// CDOTA_Modifier_Centaur_Return_Aura::GetAuraEntityReject  (line 246, @0x0000000002c955b0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName
// strings: "special_bonus_unique_centaur_1"
bool __fastcall CDOTA_Modifier_Centaur_Return_Aura::GetAuraEntityReject(
        CDOTA_Modifier_Centaur_Return_Aura *const this,
        CDOTA_BaseNPC *pNPC)
{
  CDOTA_BaseNPC *Caster; // rax
  bool v5; // dl
  CDOTA_BaseNPC *v6; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  v5 = 0;
  if ( Caster == pNPC )
    return v5;
  v6 = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v6, "special_bonus_unique_centaur_1", 0);
  if ( AbilityByName != 0 )
    return AbilityByName->m_iLevel.m_Value <= 0;
  return 1;
}


// CDOTA_Modifier_Centaur_Return_Aura::IsHidden  (line 264, @0x0000000002c875e0, libserver.so)
bool __fastcall CDOTA_Modifier_Centaur_Return_Aura::IsHidden(CDOTA_Modifier_Centaur_Return_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Centaur_Return_Aura::OnCreated  (line 275, @0x0000000002c70590, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Centaur_Return_Aura::OnCreated(
        CDOTA_Modifier_Centaur_Return_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->aura_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "aura_radius", -1, 0);
  else
    this->aura_radius = 0;
}


// CDOTA_Modifier_Centaur_Return::~CDOTA_Modifier_Centaur_Return  (line 283, @0x0000000002c93190, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Centaur_Return::~CDOTA_Modifier_Centaur_Return(
        CDOTA_Modifier_Centaur_Return *const this)
{
  this->_vptr_CDOTA_Buff = &off_4594070;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Centaur_Return::~CDOTA_Modifier_Centaur_Return  (line 283, @0x0000000002c931b0, libserver.so)  // inlines: ~CDOTA_Modifier_Centaur_Return
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Centaur_Return::~CDOTA_Modifier_Centaur_Return(
        CDOTA_Modifier_Centaur_Return *const this)
{
  this->_vptr_CDOTA_Buff = &off_4594070;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Centaur_Return::OnCreated  (line 305, @0x0000000002c71450, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "return_damage", "strength_pct"
void __fastcall CDOTA_Modifier_Centaur_Return::OnCreated(CDOTA_Modifier_Centaur_Return *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->return_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "return_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->strength_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "strength_pct", -1, 0);
      return;
    }
  }
  else
  {
    this->return_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->strength_pct = 0;
}


// CDOTA_Modifier_Centaur_Return::OnRefresh  (line 313, @0x0000000002c718d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "return_damage", "strength_pct"
void __fastcall CDOTA_Modifier_Centaur_Return::OnRefresh(CDOTA_Modifier_Centaur_Return *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->return_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "return_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->strength_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "strength_pct", -1, 0);
      return;
    }
  }
  else
  {
    this->return_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->strength_pct = 0;
}


// CDOTA_Modifier_Centaur_Return::DeclareFunctions  (line 322, @0x0000000002c1bc40, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Centaur_Return::OnAttackLanded(CModifierParams const&)
void __fastcall CDOTA_Modifier_Centaur_Return::DeclareFunctions(CDOTA_Modifier_Centaur_Return *const this)
{
  this->m_Functions[121].__pfn = CDOTA_Modifier_Centaur_Return::OnAttackLanded;
  this->m_Functions[121].__delta = 0;
}


// CDOTA_Modifier_Centaur_Return::OnAttackLanded  (line 329, @0x0000000002c37ce0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsRealHero, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound, ToDOTABaseNPCRealHero, EconEntity_OnOwnerKillEaterEvent, CDOTA_Buff::GetAbility, ApplyDamage
// strings: "particles/units/heroes/hero_centaur/centaur_return.vpcf", "attach_hitloc", "Damage_Melee.Player"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
ModifierVariant_t __fastcall CDOTA_Modifier_Centaur_Return::OnAttackLanded(
        CDOTA_Modifier_Centaur_Return *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r12
  uint32 v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_BaseNPC *v11; // r13
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v13; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  CDOTA_BaseNPC *v16; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v18; // r15
  CDOTA_ParticleManager *v19; // rax
  const Vector *v20; // r14
  CDOTA_ParticleManager *v21; // rax
  CDOTA_BaseNPC *v22; // r15
  CDOTA_ParticleManager *v23; // rax
  __int64 v24; // r14
  CDOTA_ParticleManager *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  CDOTA_BaseNPC_Hero *v28; // rax
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // rax
  float vecFallbackPosition; // [rsp+Ch] [rbp-34h]
  vec_t vecFallbackPositionb; // [rsp+Ch] [rbp-34h]
  float vecFallbackPositiona; // [rsp+Ch] [rbp-34h]
  ModifierVariant_t result; // 0:rax.16
  Vector v35; // 0:xmm0_8.8,8:xmm1_4.4

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->hattacker.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v7 = params->htarget.m_Index;
  if ( v7 + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[params->htarget.m_Index & 0x1FF];
      if ( v9 != 0 && v7 == v9->m_EHandle.m_Index )
      {
        v11 = v9->m_pInstance;
        if ( v9->m_pInstance != 0
          && v11->m_bIsDOTANPC
          && CDOTA_Buff::GetParent(this) == v11
          && m_pInstance != 0
          && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x193) != 0 )
        {
          Caster = CDOTA_Buff::GetCaster(this);
          v13 = Caster;
          if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
          {
            result.m_szVal = CDOTA_Buff::GetCaster(this);
            *&result.m_eType = 1;
            if ( (result.m_szVal[2787] & 0x10) != 0 )
              goto LABEL_11;
            if ( !CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value )
            {
              vecFallbackPosition = (*(v13->_vptr_IHandleEntity + 496))(v13);
              if ( (*(m_pInstance->_vptr_IHandleEntity + 405))(m_pInstance) == 0 )
              {
                vecFallbackPositiona = (this->return_damage + this->strength_pct * vecFallbackPosition / 100);
                Ability = CDOTA_Buff::GetAbility(this);
                Parent = CDOTA_Buff::GetParent(this);
                ApplyDamage(Parent, m_pInstance, Ability, vecFallbackPositiona, 1, 8);
              }
              if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
              {
                ParticleManager = GetParticleManager();
                Particle = CDOTA_ParticleManager::CreateParticle(
                             ParticleManager,
                             "particles/units/heroes/hero_centaur/centaur_return.vpcf",
                             2,
                             0,
                             0,
                             0);
                v16 = CDOTA_Buff::GetParent(this);
                AbsOrigin = CBaseEntity::GetAbsOrigin(v16);
                v18 = CDOTA_Buff::GetParent(this);
                v19 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(v19, Particle, 0, v18, 5, "attach_hitloc", *AbsOrigin, 1);
                v20 = CBaseEntity::GetAbsOrigin(m_pInstance);
                v21 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(v21, Particle, 1, m_pInstance, 5, "attach_hitloc", *v20, 1);
                v22 = CDOTA_Buff::GetParent(this);
                v23 = GetParticleManager();
                v24 = *&vec3_invalid.x;
                vecFallbackPositionb = vec3_invalid.z;
                CDOTA_ParticleManager::SetParticleControlEnt(v23, Particle, 2, v22, 1, 0, vec3_invalid, 1);
                v25 = GetParticleManager();
                *&v35.x = v24;
                v35.z = vecFallbackPositionb;
                CDOTA_ParticleManager::SetParticleControlEnt(v25, Particle, 3, m_pInstance, 1, 0, v35, 1);
                v26 = GetParticleManager();
                CDOTA_ParticleManager::ReleaseParticleIndex(v26, Particle);
                DOTA_EmitSound(1, "Damage_Melee.Player", m_pInstance);
                if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                  && LOBYTE(m_pInstance[71].m_pEntity) == 0
                  && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) == 0 )
                {
                  if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
                    || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0
                    || LOBYTE(m_pInstance[71].m_pEntity) != 0 )
                  {
                    m_pInstance = 0;
                  }
                  v27 = CDOTA_Buff::GetParent(this);
                  v28 = ToDOTABaseNPCRealHero(v27);
                  EconEntity_OnOwnerKillEaterEvent(
                    v28,
                    m_pInstance,
                    kill_eater_event_t::kKillEaterEvent_Centaur_ReturnKills,
                    1,
                    INVALID_ITEM_DEF_INDEX);
                }
              }
            }
          }
        }
      }
    }
  }
  *&result.m_eType = 1;
LABEL_11:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Ability_Centaur_Stampede::~CDOTA_Ability_Centaur_Stampede  (line 380, @0x0000000002cb6db0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Centaur_Stampede::~CDOTA_Ability_Centaur_Stampede(
        CDOTA_Ability_Centaur_Stampede *const this)
{
  this->_vptr_IHandleEntity = &off_45943D0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory),
        (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_Centaur_Stampede::~CDOTA_Ability_Centaur_Stampede  (line 380, @0x0000000002cb7300, libserver.so)  // inlines: Purge, ~CDOTA_Ability_Centaur_Stampede, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Centaur_Stampede::~CDOTA_Ability_Centaur_Stampede(
        CDOTA_Ability_Centaur_Stampede *const this)
{
  this->_vptr_IHandleEntity = &off_45943D0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
    if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Centaur_Stampede::Schema_DynamicBinding  (line 382, @0x0000000002c875f0, libserver.so)
// globals: CDOTA_Ability_Centaur_Stampede::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Centaur_Stampede::Schema_DynamicBinding(
        const CDOTA_Ability_Centaur_Stampede *const this)
{
  return CDOTA_Ability_Centaur_Stampede::s_pSchemaBinding;
}


// CDOTA_Ability_Centaur_Stampede::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 382, @0x0000000002c87600, libserver.so)
// globals: CDOTA_Ability_Centaur_Stampede::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Centaur_Stampede::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Centaur_Stampede::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Centaur_Stampede::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Centaur_Stampede::CEntityInstanceEntityClass::DestructInstance  (line 382, @0x0000000002c87610, libserver.so)  // inlines: Destruct<CDOTA_Ability_Centaur_Stampede>
void __fastcall CDOTA_Ability_Centaur_Stampede::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Centaur_Stampede::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Centaur_Stampede::CEntityInstanceEntityClass::FreeInstance  (line 382, @0x0000000002c87630, libserver.so)
void __fastcall CDOTA_Ability_Centaur_Stampede::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Centaur_Stampede::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Centaur_Stampede::CEntityInstanceEntityClass::CanAllocate  (line 382, @0x0000000002c87650, libserver.so)
bool __fastcall CDOTA_Ability_Centaur_Stampede::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Centaur_Stampede::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Centaur_Stampede::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 382, @0x0000000002c87660, libserver.so)
// globals: CDOTA_Ability_Centaur_Stampede::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Centaur_Stampede::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Centaur_Stampede::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Centaur_Stampede::s_pSchemaBinding;
}


// CDOTA_Ability_Centaur_Stampede::CEntityInstanceEntityClass::AllocateInstance  (line 382, @0x0000000002c8f4a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Centaur_Stampede::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Centaur_Stampede::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 952);
  memset(v1, 0, 0x3B8u);
  return v1;
}


// CDOTA_Ability_Centaur_Stampede::CEntityInstanceEntityClass::ConstructInstance  (line 382, @0x0000000002c9ffd0, libserver.so)  // inlines: CDOTA_Ability_Centaur_Stampede, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_Centaur_Stampede>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Centaur_Stampede::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Centaur_Stampede::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 232) = 0;
    *p = &off_45943D0;
    *(p + 117) = 0;
    *(p + 236) = 0;
    *(p + 237) = 0;
  }
  return p;
}


// CDOTA_Ability_Centaur_Stampede::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 382, @0x0000000002ca1a80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Centaur_Stampede::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Centaur_Stampede::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Centaur_Stampede::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 382, @0x0000000002ca1aa0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Centaur_Stampede::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Centaur_Stampede::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Centaur_Stampede::GetEntityClassInternal  (line 382, @0x0000000002cb9150, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "CDOTA_Ability_Centaur_Stampede"
// globals: `guard variable for'CDOTA_Ability_Centaur_Stampede::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_StampedeClass, CDOTA_Ability_Centaur_Stampede::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_StampedeClass, __dso_handle, CDOTA_Ability_Centaur_Stampede::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Centaur_Stampede::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_StampedeClassInfo, CDOTA_Ability_Centaur_Stampede::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_StampedeClassInfo
CEntityClass *__cdecl CDOTA_Ability_Centaur_Stampede::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Centaur_Stampede::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_StampedeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Centaur_Stampede::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_StampedeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Centaur_Stampede::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_StampedeClass);
    CDOTA_Ability_Centaur_Stampede::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_StampedeClass._vptr_CEntityClass = off_4594350;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Centaur_Stampede::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_StampedeClass);
    __cxa_atexit(
      CDOTA_Ability_Centaur_Stampede::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Centaur_Stampede::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_StampedeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Centaur_StampedeClass != 0 )
    return &CDOTA_Ability_Centaur_Stampede::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_StampedeClass;
  if ( `guard variable for'CDOTA_Ability_Centaur_Stampede::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_StampedeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Centaur_Stampede::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_StampedeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Centaur_Stampede::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_StampedeClassInfo,
      "CDOTA_Ability_Centaur_Stampede",
      "centaur_stampede",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Centaur_Stampede::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_StampedeClassInfo);
  }
  CDOTA_Ability_Centaur_Stampede::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_StampedeClass.m_pClassInfo = &CDOTA_Ability_Centaur_Stampede::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_StampedeClassInfo;
  CDOTA_Ability_Centaur_Stampede::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_StampedeClass.m_pBaseClassInfo = CDOTA_Ability_Centaur_Stampede::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_StampedeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Centaur_StampedeClass = &CDOTA_Ability_Centaur_Stampede::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_StampedeClass;
  CDOTA_Ability_Centaur_Stampede::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Centaur_StampedeClassInfo.m_pClass = &CDOTA_Ability_Centaur_Stampede::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_StampedeClass;
  CDOTA_Ability_Centaur_Stampede::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_StampedeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Centaur_StampedeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Centaur_Stampede::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Centaur_StampedeClass;
}


// CDOTA_Ability_Centaur_Stampede::YouForgotToImplementOrDeclareServerClass  (line 399, @0x0000000002c1bc60, libserver.so)
int __fastcall CDOTA_Ability_Centaur_Stampede::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Centaur_Stampede *const this)
{
  return 0;
}


// CDOTA_Ability_Centaur_Stampede::GetServerClass  (line 399, @0x0000000002c350f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Centaur_Stampede::GetServerClass(CDOTA_Ability_Centaur_Stampede *const this)
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


// CDOTA_Ability_Centaur_Stampede::GetCooldown  (line 409, @0x0000000002c55f30, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Centaur_Stampede::GetCooldown(CDOTA_Ability_Centaur_Stampede *const this, int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "cooldown_scepter", iLevel, 0);
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_Centaur_Stampede::OnSpellStart  (line 421, @0x0000000002c6c9b0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::StartGesture, KeyValues::KeyValues, KeyValues::SetFloat, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, CDOTAGamerules::SendProjectionAbilityMessage (18 total)
// strings: "modifier_centaur_stampede", "Hero_Centaur.Stampede.Cast"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Centaur_Stampede::OnSpellStart(CDOTA_Ability_Centaur_Stampede *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  float v3; // xmm1_4
  CDOTA_BaseNPC *v4; // r12
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v7; // rax
  __int64 v8; // r12
  int i; // ebx
  CHandle<CBaseEntity> *v10; // rdx
  uint32 m_Index; // eax
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r12d
  CDOTA_BaseNPC *v20; // rax
  const Vector *v21; // rbx
  CDOTA_BaseNPC *v22; // rax
  float v23; // xmm3_4
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+20h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  this->base_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "base_damage", -1, 0);
  this->strength_damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "strength_damage", -1, 0);
  this->slow_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "slow_duration", -1, 0);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(Caster, 1611, 0.1, 0.1, 9, 0, 1.0);
  KeyValues::KeyValues(&kv, "modifier_centaur_stampede");
  KeyValues::SetFloat(&kv, "duration", v3);
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v4 = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, v4, -1.0, &entities, 1, 3, &stru_40440, 0, 0);
  v8 = 0;
  for ( i = 0; entities.m_Size > i; ++v8 )
  {
    while ( 1 )
    {
      v10 = &entities.m_Memory.m_pMemory[v8];
      m_Index = entities.m_Memory.m_pMemory[v8].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v12 = v10->m_Index;
        v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Index) >> 9) & 0x3F];
        if ( v13 != 0 )
        {
          v14 = &v13[v12 & 0x1FF];
          if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
          {
            m_pInstance = v14->m_pInstance;
            if ( v14->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              break;
          }
        }
      }
      ++i;
      ++v8;
      if ( entities.m_Size <= i )
        goto LABEL_11;
    }
    v16 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(m_pInstance, v16, this, "modifier_centaur_stampede", &kv, 0);
    ++i;
  }
LABEL_11:
  v17 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(0, "Hero_Centaur.Stampede.Cast", v17);
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  v20 = CDOTABaseAbility::GetCaster(this);
  v21 = CBaseEntity::GetAbsOrigin(v20);
  v22 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(g_pGameRules, v22, 1, m_iAbilityID, 0, 0, *&v21->x, v21->z, -1.0, v23);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
  if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
  }
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Centaur_Stampede::DoStampede  (line 454, @0x0000000002c7af00, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, HasElement, Set, ToDOTABaseNPCHero, operator[]
// calls: CDOTABaseAbility::GetCaster, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, ApplyDamage, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, CUtlMemory<CHandle<CBaseEntity>, int>::Grow, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_Modifier_Centaur_Stampede::OnIntervalThink
// strings: "modifier_centaur_stampede_slow", "Hero_Centaur.Stampede.Stun"
void __fastcall CDOTA_Ability_Centaur_Stampede::DoStampede(
        CDOTA_Ability_Centaur_Stampede *const this,
        CDOTA_BaseNPC *pAttacker,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v7; // r14
  CEntityIdentity *m_pEntity; // rcx
  __int16 v9; // si
  CEntityIdentity *v10; // rdx
  __int16 v11; // cx
  int v12; // eax
  __int64 m_Size; // r15
  int v14; // eax
  CHandle<CBaseEntity> *v15; // rax
  float v16; // xmm0_4
  float v17; // xmm1_4
  CDOTA_BaseNPC *v18; // rax
  float strength_damage; // [rsp+8h] [rbp-68h]
  float base_damage; // [rsp+Ch] [rbp-64h]
  CHandle<CBaseEntity> src; // [rsp+10h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
    v7 = Caster;
  else
    v7 = 0;
  src.m_Index = -1;
  if ( pTarget != 0 )
  {
    m_pEntity = pTarget->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v9 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v9 & 0x7FFF;
    }
  }
  if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(&this->m_hHitEntities, &src) < 0
    && v7 != 0 )
  {
    src.m_Index = -1;
    if ( pTarget != 0 )
    {
      v10 = pTarget->m_pEntity;
      if ( v10 != 0 )
      {
        v11 = 0x7FFF;
        if ( v10->m_EHandle.m_Index != -1 )
          v11 = v10->m_EHandle.m_Index & 0x7FFF;
        v12 = ((v10->m_EHandle.m_Index >> 15) - (v10->m_flags & 1)) << 15;
        LOWORD(src.m_Index) = v11 | src.m_Index & 0x8000;
        src.m_Index = v12 | src.m_Index & 0x7FFF;
      }
    }
    m_Size = this->m_hHitEntities.m_Size;
    v14 = this->m_hHitEntities.m_Size;
    if ( m_Size == this->m_hHitEntities.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hHitEntities.m_Memory, 1);
      v14 = this->m_hHitEntities.m_Size;
    }
    this->m_hHitEntities.m_Size = v14 + 1;
    v15 = &this->m_hHitEntities.m_Memory.m_pMemory[m_Size];
    if ( v15 != 0 )
      v15->m_Index = src.m_Index;
    base_damage = this->base_damage;
    strength_damage = this->strength_damage;
    v16 = (*(v7->_vptr_IHandleEntity + 496))(v7);
    ApplyDamage(pAttacker, pTarget, this, (v16 * strength_damage) + base_damage, 2, 0);
    KeyValues::KeyValues(&kv, "modifier_centaur_stampede_slow");
    KeyValues::SetFloat(&kv, "duration", v17);
    v18 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(pTarget, v18, this, "modifier_centaur_stampede_slow", &kv, 0);
    DOTA_EmitSound(10, "Hero_Centaur.Stampede.Stun", pTarget);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_Centaur_Stampede_Slow::~CDOTA_Modifier_Centaur_Stampede_Slow  (line 479, @0x0000000002c93140, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Centaur_Stampede_Slow::~CDOTA_Modifier_Centaur_Stampede_Slow(
        CDOTA_Modifier_Centaur_Stampede_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_4594E90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Centaur_Stampede_Slow::~CDOTA_Modifier_Centaur_Stampede_Slow  (line 479, @0x0000000002c93160, libserver.so)  // inlines: ~CDOTA_Modifier_Centaur_Stampede_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Centaur_Stampede_Slow::~CDOTA_Modifier_Centaur_Stampede_Slow(
        CDOTA_Modifier_Centaur_Stampede_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_4594E90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Centaur_Stampede_Slow::IsHidden  (line 486, @0x0000000002c87670, libserver.so)
bool __fastcall CDOTA_Modifier_Centaur_Stampede_Slow::IsHidden(CDOTA_Modifier_Centaur_Stampede_Slow *const this)
{
  return 0;
}


// CDOTA_Modifier_Centaur_Stampede_Slow::IsDebuff  (line 487, @0x0000000002c87680, libserver.so)
bool __fastcall CDOTA_Modifier_Centaur_Stampede_Slow::IsDebuff(CDOTA_Modifier_Centaur_Stampede_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_Centaur_Stampede_Slow::OnCreated  (line 500, @0x0000000002c709b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "slow_movement_speed"
void __fastcall CDOTA_Modifier_Centaur_Stampede_Slow::OnCreated(
        CDOTA_Modifier_Centaur_Stampede_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->slow_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "slow_movement_speed", -1, 0);
  else
    this->slow_movement_speed = 0;
}


// CDOTA_Modifier_Centaur_Stampede_Slow::OnRefresh  (line 507, @0x0000000002c70b90, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "slow_movement_speed"
void __fastcall CDOTA_Modifier_Centaur_Stampede_Slow::OnRefresh(
        CDOTA_Modifier_Centaur_Stampede_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->slow_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "slow_movement_speed", -1, 0);
  else
    this->slow_movement_speed = 0;
}


// CDOTA_Modifier_Centaur_Stampede_Slow::DeclareFunctions  (line 514, @0x0000000002c1bc70, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Centaur_Stampede_Slow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Centaur_Stampede_Slow::DeclareFunctions(
        CDOTA_Modifier_Centaur_Stampede_Slow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Centaur_Stampede_Slow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Centaur_Stampede_Slow::GetModifierMoveSpeedBonus_Percentage  (line 521, @0x0000000002c1bc90, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Centaur_Stampede_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Centaur_Stampede_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->slow_movement_speed;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Centaur_Stampede::~CDOTA_Modifier_Centaur_Stampede  (line 530, @0x0000000002cb6790, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Centaur_Stampede::~CDOTA_Modifier_Centaur_Stampede(
        CDOTA_Modifier_Centaur_Stampede *const this)
{
  this->_vptr_CDOTA_Buff = &off_45951B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hEntitiesAffected);
  if ( (this->m_hEntitiesAffected.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hEntitiesAffected.m_Memory),
        (this->m_hEntitiesAffected.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hEntitiesAffected.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Centaur_Stampede::~CDOTA_Modifier_Centaur_Stampede  (line 530, @0x0000000002cb7370, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_Centaur_Stampede, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Centaur_Stampede::~CDOTA_Modifier_Centaur_Stampede(
        CDOTA_Modifier_Centaur_Stampede *const this)
{
  this->_vptr_CDOTA_Buff = &off_45951B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hEntitiesAffected);
  if ( (this->m_hEntitiesAffected.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hEntitiesAffected.m_Memory);
    if ( (this->m_hEntitiesAffected.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hEntitiesAffected.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Centaur_Stampede::IsPurgable  (line 538, @0x0000000002c87690, libserver.so)
bool __fastcall CDOTA_Modifier_Centaur_Stampede::IsPurgable(CDOTA_Modifier_Centaur_Stampede *const this)
{
  return 0;
}


// CDOTA_Modifier_Centaur_Stampede::CheckState  (line 560, @0x0000000002c1f9f0, libserver.so)  // inlines: Enable
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter
void __fastcall CDOTA_Modifier_Centaur_Stampede::CheckState(
        CDOTA_Modifier_Centaur_Stampede *const this,
        CDOTABuffState *const buffState)
{
  CDOTA_BaseNPC *Caster; // rax
  uint64 m_nDisabledStateMask; // rax
  uint64 m_nEnabledStateMask; // rdx

  Caster = CDOTA_Buff::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
  {
    m_nDisabledStateMask = buffState->m_nDisabledStateMask & 0xFFFFFFFDFFFFFFFFLL;
    m_nEnabledStateMask = buffState->m_nEnabledStateMask | 0x200000000LL;
  }
  else
  {
    m_nEnabledStateMask = buffState->m_nEnabledStateMask;
    m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  }
  buffState->m_nEnabledStateMask = m_nEnabledStateMask | 0x2000000;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFDFFFFFFLL;
}


// CDOTA_Modifier_Centaur_Stampede::OnCreated  (line 574, @0x0000000002c762d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound
// strings: "particles/units/heroes/hero_centaur/centaur_stampede_haste_npc.vpcf", "attach_hitloc", "particles/units/heroes/hero_centaur/centaur_stampede.vpcf", "particles/units/heroes/hero_centaur/centaur_stampede_cast.vpcf", "particles/units/heroes/hero_centaur/centaur_stampede_overhead.vpcf", "Hero_Centaur.Stampede.Movement"
void __fastcall CDOTA_Modifier_Centaur_Stampede::OnCreated(CDOTA_Modifier_Centaur_Stampede *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4
  CDOTA_BaseNPC *v6; // r12
  CDOTA_ParticleManager *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  const Vector *v9; // r13
  CDOTA_BaseNPC *v10; // r14
  CDOTA_ParticleManager *v11; // rax
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v14; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v16; // r14
  CDOTA_ParticleManager *v17; // rax
  CDOTA_BaseNPC *v18; // r12
  CDOTA_ParticleManager *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  const Vector *v21; // r13
  CDOTA_BaseNPC *v22; // r14
  CDOTA_ParticleManager *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  CDOTA_BaseNPC *v25; // r12
  CDOTA_ParticleManager *v26; // rax
  CDOTA_BaseNPC *v27; // r13
  CDOTA_ParticleManager *v28; // rax
  CDOTA_BaseNPC *v29; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    this->damage_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "damage_reduction", -1, 0);
  else
    this->damage_reduction = 0;
  CDOTA_Buff::StartIntervalThink(this, 0.050000001, v5);
  if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 1) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    ParticleManager = GetParticleManager();
    LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                        ParticleManager,
                        "particles/units/heroes/hero_centaur/centaur_stampede.vpcf",
                        1,
                        Parent,
                        0,
                        0);
    v14 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v14);
    v16 = CDOTA_Buff::GetParent(this);
    v17 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v17, Parent, 1, v16, 5, "attach_hitloc", *AbsOrigin, 1);
    CDOTA_Buff::AddParticle(this, Parent, 0, 0, -1, 0, 0);
    v18 = CDOTA_Buff::GetParent(this);
    v19 = GetParticleManager();
    LODWORD(v18) = CDOTA_ParticleManager::CreateParticle(
                     v19,
                     "particles/units/heroes/hero_centaur/centaur_stampede_cast.vpcf",
                     1,
                     v18,
                     0,
                     0);
    v20 = CDOTA_Buff::GetParent(this);
    v21 = CBaseEntity::GetAbsOrigin(v20);
    v22 = CDOTA_Buff::GetParent(this);
    v23 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v23, v18, 1, v22, 5, "attach_hitloc", *v21, 1);
    v24 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v24, v18);
    v25 = CDOTA_Buff::GetParent(this);
    v26 = GetParticleManager();
    LODWORD(v25) = CDOTA_ParticleManager::CreateParticle(
                     v26,
                     "particles/units/heroes/hero_centaur/centaur_stampede_overhead.vpcf",
                     7,
                     v25,
                     0,
                     0);
    v27 = CDOTA_Buff::GetParent(this);
    v28 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v28, v25, 1, v27, 1, 0, vec3_invalid, 1);
    CDOTA_Buff::AddParticle(this, v25, 0, 0, -1, 0, 1);
    v29 = CDOTA_Buff::GetParent(this);
    DOTA_EmitSound(2, "Hero_Centaur.Stampede.Movement", v29);
  }
  else
  {
    v6 = CDOTA_Buff::GetParent(this);
    v7 = GetParticleManager();
    LODWORD(v6) = CDOTA_ParticleManager::CreateParticle(
                    v7,
                    "particles/units/heroes/hero_centaur/centaur_stampede_haste_npc.vpcf",
                    1,
                    v6,
                    0,
                    0);
    v8 = CDOTA_Buff::GetParent(this);
    v9 = CBaseEntity::GetAbsOrigin(v8);
    v10 = CDOTA_Buff::GetParent(this);
    v11 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v11, v6, 1, v10, 5, "attach_hitloc", *v9, 1);
    CDOTA_Buff::AddParticle(this, v6, 0, 0, -1, 0, 0);
  }
}


// CDOTA_Modifier_Centaur_Stampede::OnIntervalThink  (line 612, @0x0000000002c7b170, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_Ability_Centaur_Stampede::DoStampede, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CGridNav::DestroyTreesAroundPoint, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Centaur_Stampede::OnIntervalThink(CDOTA_Modifier_Centaur_Stampede *const this)
{
  CDOTA_Ability_Centaur_Stampede *Ability; // r12
  CDOTA_BaseNPC *Caster; // rax
  float radius; // xmm3_4
  CDOTA_BaseNPC *v5; // r14
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_BaseNPC *v8; // rax
  __int64 i; // r14
  CHandle<CBaseEntity> *v10; // rdx
  uint32 m_Index; // eax
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  unsigned int v18; // r13d
  CDOTA_BaseNPC *Parent; // rax
  float v20; // xmm3_4
  float flRadiusa; // [rsp+1Ch] [rbp-54h]
  float flRadius; // [rsp+1Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+20h] [rbp-50h] BYREF
  Vector v24; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(Caster) )
    {
      v17 = CDOTA_Buff::GetCaster(this);
      v18 = (*(v17->_vptr_IHandleEntity + 414))(v17);
      flRadius = this->radius;
      Parent = CDOTA_Buff::GetParent(this);
      v24 = *CBaseEntity::GetAbsOrigin(Parent);
      CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v18, v24, flRadius, v20);
    }
    hEntities.m_Size = 0;
    radius = this->radius;
    hEntities.m_Memory.m_pMemory = 0;
    hEntities.m_Memory.m_nAllocationCount = 0;
    hEntities.m_Memory.m_nGrowSize = 0;
    flRadiusa = radius;
    v5 = CDOTA_Buff::GetParent(this);
    v6 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
    v8 = CDOTA_Buff::GetCaster(this);
    FindUnitsInRadius(v8->m_iTeamNum.m_Value, AbsOrigin, v5, flRadiusa, &hEntities, 2, 19, 0, 0, 0);
    for ( i = 0; hEntities.m_Size > i; ++i )
    {
      while ( 1 )
      {
        v10 = &hEntities.m_Memory.m_pMemory[i];
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
              if ( v14->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                break;
            }
          }
        }
        if ( hEntities.m_Size <= ++i )
          goto LABEL_14;
      }
      v16 = CDOTA_Buff::GetParent(this);
      CDOTA_Ability_Centaur_Stampede::DoStampede(Ability, v16, m_pInstance);
    }
LABEL_14:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEntities);
    if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
      if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
    }
  }
}


// CDOTA_Modifier_Centaur_Stampede::DeclareFunctions  (line 643, @0x0000000002c1bcb0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Centaur_Stampede::GetModifierMoveSpeed_Absolute(CModifierParams const&), CDOTA_Modifier_Centaur_Stampede::GetActivityTranslationModifiers(CModifierParams const&), CDOTA_Modifier_Centaur_Stampede::GetModifierIncomingDamage_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Centaur_Stampede::DeclareFunctions(CDOTA_Modifier_Centaur_Stampede *const this)
{
  this->m_Functions[18].__pfn = CDOTA_Modifier_Centaur_Stampede::GetModifierMoveSpeed_Absolute;
  this->m_Functions[18].__delta = 0;
  this->m_Functions[155].__delta = 0;
  this->m_Functions[155].__pfn = CDOTA_Modifier_Centaur_Stampede::GetActivityTranslationModifiers;
  this->m_Functions[36].__pfn = CDOTA_Modifier_Centaur_Stampede::GetModifierIncomingDamage_Percentage;
  this->m_Functions[36].__delta = 0;
}


// CDOTA_Modifier_Centaur_Stampede::GetModifierMoveSpeed_Absolute  (line 654, @0x0000000002c1bd10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Centaur_Stampede::GetModifierMoveSpeed_Absolute(
        CDOTA_Modifier_Centaur_Stampede *const this,
        const CModifierParams *const params)
{
  return 0x4409800000000001uLL;
}


// CDOTA_Modifier_Centaur_Stampede::GetModifierIncomingDamage_Percentage  (line 661, @0x0000000002c25de0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter
ModifierVariant_t __fastcall CDOTA_Modifier_Centaur_Stampede::GetModifierIncomingDamage_Percentage(
        CDOTA_Modifier_Centaur_Stampede *const this,
        const CModifierParams *const params)
{
  __m128i v4; // xmm0
  CDOTA_BaseNPC *Caster; // rax
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    if ( !CDOTA_BaseNPC::HasScepter(Caster) )
    {
      *&result.m_eType = 1;
LABEL_4:
      result.m_szVal = 0;
      return result;
    }
  }
  *&result.m_eType = 1;
  if ( (params->nDamageflags & 0x20) != 0 )
    goto LABEL_4;
  result.m_szVal = 0;
  *v4.m128i_i32 = -this->damage_reduction;
  *&result.m_eType = (_mm_cvtsi128_si32(v4) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Centaur_Stampede::GetActivityTranslationModifiers  (line 678, @0x0000000002c1bd30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Centaur_Stampede::GetActivityTranslationModifiers(
        CDOTA_Modifier_Centaur_Stampede *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "haste";
  *&result.m_eType = 2;
  return result;
}


