// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_mirana.cpp:32
class CDOTA_Unit_Hero_Mirana : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Mirana(CDOTA_Unit_Hero_Mirana &);
	CDOTA_Unit_Hero_Mirana(CDOTA_Unit_Hero_Mirana &);
	CDOTA_Unit_Hero_Mirana();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDOTA_Unit_Hero_Mirana();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_mirana.cpp:40
class C_CDOTA_Unit_Hero_Mirana_MapInstall {
	C_CDOTA_Unit_Hero_Mirana_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_mirana.cpp:55
class CDOTA_Ability_Mirana_Starfall : public CDOTABaseAbility {
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
	CDOTA_Ability_Mirana_Starfall(CDOTA_Ability_Mirana_Starfall &);
	CDOTA_Ability_Mirana_Starfall(CDOTA_Ability_Mirana_Starfall &);
	CDOTA_Ability_Mirana_Starfall();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual float GetAOERadius();
	virtual const char * GetIntrinsicModifierName();
	bool CastStarfall(bool);
	virtual void OnSpellStart();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Mirana_Starfall();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[333] GetAOERadius
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_mirana.cpp:71
class C_CDOTA_Ability_Mirana_Starfall_MapInstall {
	C_CDOTA_Ability_Mirana_Starfall_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_mirana.cpp:149
class CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker : public CDOTA_Buff {
public:

private:

	float interval_scepter;  // +0xba8
	bool bInBufferTime;  // +0xbac

	float m_flLastApplyTime;  // +0xbb0
	CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnRefresh(KeyValues *);
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual bool IsPermanent();
	virtual bool DestroyOnExpire();
	virtual ~CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[58] OnRefresh
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[23] IsPermanent
	// vtable[61] DestroyOnExpire
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_mirana.cpp:255
class CDOTA_Modifier_Mirana_Starfall_Thinker : public CDOTA_Buff {
public:

private:

	int starfall_secondary_radius;  // +0xba8
	EHANDLE m_hTarget;  // +0xbac
	int m_iDamage;  // +0xbb0
	bool m_bStarDropped;  // +0xbb4
	bool m_bSecondStar;  // +0xbb5
	CDOTA_Modifier_Mirana_Starfall_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Mirana_Starfall_Thinker();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[11] IsHidden
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_mirana.cpp:338
class CDOTA_Ability_Mirana_Arrow : public CDOTABaseAbility {
public:

private:

	int m_nFXIndex;  // +0x39c
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
	CDOTA_Ability_Mirana_Arrow(CDOTA_Ability_Mirana_Arrow &);
	CDOTA_Ability_Mirana_Arrow(CDOTA_Ability_Mirana_Arrow &);
	CDOTA_Ability_Mirana_Arrow();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool OnProjectileHit_ExtraData(EHANDLE, const Vector &, KeyValues *);
	virtual float GetAvoidRadius();
	virtual bool IsAvoidMagical();
	virtual float GetAvoidStrength(CDOTA_Bot *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Mirana_Arrow();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[290] OnProjectileHit_ExtraData
	// vtable[327] GetAvoidRadius
	// vtable[328] IsAvoidMagical
	// vtable[330] GetAvoidStrength
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// sizeof = 952
};

// src/game/shared/dota/units/dota_unit_hero_mirana.cpp:587
class CDOTA_Ability_Mirana_Leap : public CDOTABaseAbility {
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
	CDOTA_Ability_Mirana_Leap(CDOTA_Ability_Mirana_Leap &);
	CDOTA_Ability_Mirana_Leap(CDOTA_Ability_Mirana_Leap &);
	CDOTA_Ability_Mirana_Leap();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual bool PlaysDefaultAnimWhenStolen();
	virtual const char * GetStolenActivityModifier();
	virtual ~CDOTA_Ability_Mirana_Leap();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[309] PlaysDefaultAnimWhenStolen
	// vtable[310] GetStolenActivityModifier
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_mirana.cpp:603
class C_CDOTA_Ability_Mirana_Leap_MapInstall {
	C_CDOTA_Ability_Mirana_Leap_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_mirana.cpp:624
class CDOTA_Modifier_Mirana_Leap : public CDOTA_Buff, public CHorizontalMotionController, public CVerticalMotionController {
public:

private:

	float m_flTotalTime;  // +0xbc4
	float m_flInitialVelocity;  // +0xbc8
	float m_flCurrentTimeHoriz;  // +0xbe4
	float m_flCurrentTimeVert;  // +0xbe8
	bool m_bInterrupted;  // +0xbec

	int leap_distance;  // +0xbf0
	float leap_speed;  // +0xbf4
	float leap_acceleration;  // +0xbf8
	int leap_radius;  // +0xbfc
	CDOTA_Modifier_Mirana_Leap();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void UpdateVerticalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual void OnVerticalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsVerticalMotionValidToApply();
	virtual bool IsMotionController();
	virtual ~CDOTA_Modifier_Mirana_Leap();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] UpdateVerticalMotion
	// vtable[91] OnHorizontalMotionInterrupted
	// vtable[92] OnVerticalMotionInterrupted
	// vtable[93] IsHorizontalMotionValidToApply
	// vtable[94] IsVerticalMotionValidToApply
	// vtable[21] IsMotionController
	// sizeof = 3072
};

// src/game/shared/dota/units/dota_unit_hero_mirana.cpp:837
class CDOTA_Modifier_Mirana_Leap_Buff : public CDOTA_Buff {
public:

private:

	int leap_speedbonus;  // +0xba8
	int leap_speedbonus_as;  // +0xbac
	CDOTA_Modifier_Mirana_Leap_Buff();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual ~CDOTA_Modifier_Mirana_Leap_Buff();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_mirana.cpp:913
class CDOTA_Ability_Mirana_MoonlightShadow : public CDOTABaseAbility {
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
	CDOTA_Ability_Mirana_MoonlightShadow(CDOTA_Ability_Mirana_MoonlightShadow &);
	CDOTA_Ability_Mirana_MoonlightShadow(CDOTA_Ability_Mirana_MoonlightShadow &);
	CDOTA_Ability_Mirana_MoonlightShadow();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual bool OnAbilityPhaseStart();
	virtual void OnSpellStart();
	virtual int GetConceptRecipientType();
	virtual bool HasInvisibility();
	virtual ~CDOTA_Ability_Mirana_MoonlightShadow();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[264] OnAbilityPhaseStart
	// vtable[266] OnSpellStart
	// vtable[299] GetConceptRecipientType
	// vtable[326] HasInvisibility
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_mirana.cpp:982
class CDOTA_Modifier_Mirana_MoonlightShadow : public CDOTA_Modifier_PersistentInvisibility {
public:

	CDOTA_Modifier_Mirana_MoonlightShadow(CDOTA_Modifier_Mirana_MoonlightShadow &);
	CDOTA_Modifier_Mirana_MoonlightShadow(const CDOTA_Modifier_Mirana_MoonlightShadow &);
	CDOTA_Modifier_Mirana_MoonlightShadow();
	virtual bool IsHidden();
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual bool ShouldUseOverheadOffset();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Mirana_MoonlightShadow();

	// vtable[11] IsHidden
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[69] ShouldUseOverheadOffset
	// vtable[14] IsPurgable
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Mirana::~CDOTA_Unit_Hero_Mirana  (line 32, @0x0000000002a18a70, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Mirana::~CDOTA_Unit_Hero_Mirana(CDOTA_Unit_Hero_Mirana *const this)
{
  this->_vptr_IHandleEntity = &off_43580F0;
  this->_vptr_INextBotEventResponder = &off_43590D0;
  this->_vptr_CObstructionObject = &off_4359400;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Mirana::~CDOTA_Unit_Hero_Mirana  (line 32, @0x0000000002a18ab0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Mirana
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Mirana::~CDOTA_Unit_Hero_Mirana(CDOTA_Unit_Hero_Mirana *const this)
{
  this->_vptr_IHandleEntity = &off_43580F0;
  this->_vptr_INextBotEventResponder = &off_43590D0;
  this->_vptr_CObstructionObject = &off_4359400;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Mirana::Schema_DynamicBinding  (line 34, @0x0000000002a0a1e0, libserver.so)
// globals: CDOTA_Unit_Hero_Mirana::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Mirana::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Mirana *const this)
{
  return CDOTA_Unit_Hero_Mirana::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Mirana::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 34, @0x0000000002a0a210, libserver.so)
// globals: CDOTA_Unit_Hero_Mirana::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Mirana::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Mirana::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Mirana::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Mirana::CEntityInstanceEntityClass::DestructInstance  (line 34, @0x0000000002a0a220, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Mirana>
void __fastcall CDOTA_Unit_Hero_Mirana::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Mirana::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Mirana::CEntityInstanceEntityClass::FreeInstance  (line 34, @0x0000000002a0a240, libserver.so)
void __fastcall CDOTA_Unit_Hero_Mirana::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Mirana::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Mirana::CEntityInstanceEntityClass::CanAllocate  (line 34, @0x0000000002a0a260, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Mirana::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Mirana::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Mirana::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 34, @0x0000000002a0a270, libserver.so)
// globals: CDOTA_Unit_Hero_Mirana::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Mirana::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Mirana::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Mirana::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Mirana::CEntityInstanceEntityClass::AllocateInstance  (line 34, @0x0000000002a0fc40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Mirana::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Mirana::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Mirana::CEntityInstanceEntityClass::ConstructInstance  (line 34, @0x0000000002a135d0, libserver.so)  // inlines: CDOTA_Unit_Hero_Mirana, Construct<CDOTA_Unit_Hero_Mirana>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Mirana::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Mirana::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_43580F0;
    *(p + 236) = &off_43590D0;
    *(p + 257) = &off_4359400;
  }
  return p;
}


// CDOTA_Unit_Hero_Mirana::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 34, @0x0000000002a20750, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Mirana::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Mirana::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Mirana::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 34, @0x0000000002a209d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Mirana::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Mirana::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Mirana::GetEntityClassInternal  (line 34, @0x0000000002a3be40, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "npc_dota_hero_mirana", "CDOTA_Unit_Hero_Mirana"
// globals: `guard variable for'CDOTA_Unit_Hero_Mirana::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MiranaClass, CDOTA_Unit_Hero_Mirana::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MiranaClass, __dso_handle, CDOTA_Unit_Hero_Mirana::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Mirana::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MiranaClassInfo, CDOTA_Unit_Hero_Mirana::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MiranaClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Mirana::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Mirana::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MiranaClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Mirana::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MiranaClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Mirana::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MiranaClass);
    CDOTA_Unit_Hero_Mirana::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MiranaClass._vptr_CEntityClass = off_4358070;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Mirana::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MiranaClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Mirana::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Mirana::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MiranaClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_MiranaClass != 0 )
    return &CDOTA_Unit_Hero_Mirana::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MiranaClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Mirana::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MiranaClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Mirana::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MiranaClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Mirana::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MiranaClassInfo,
      "CDOTA_Unit_Hero_Mirana",
      "npc_dota_hero_mirana",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Mirana::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MiranaClassInfo);
  }
  CDOTA_Unit_Hero_Mirana::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MiranaClass.m_pClassInfo = &CDOTA_Unit_Hero_Mirana::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MiranaClassInfo;
  CDOTA_Unit_Hero_Mirana::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MiranaClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Mirana::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MiranaClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_MiranaClass = &CDOTA_Unit_Hero_Mirana::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MiranaClass;
  CDOTA_Unit_Hero_Mirana::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MiranaClassInfo.m_pClass = &CDOTA_Unit_Hero_Mirana::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MiranaClass;
  CDOTA_Unit_Hero_Mirana::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MiranaClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_MiranaClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Mirana::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MiranaClass;
}


// CDOTA_Unit_Hero_Mirana::YouForgotToImplementOrDeclareServerClass  (line 40, @0x00000000029b5700, libserver.so)
int __fastcall CDOTA_Unit_Hero_Mirana::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Mirana *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Mirana::GetServerClass  (line 40, @0x00000000029c92f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Mirana::GetServerClass(CDOTA_Unit_Hero_Mirana *const this)
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


// CDOTA_Ability_Mirana_Starfall::~CDOTA_Ability_Mirana_Starfall  (line 55, @0x0000000002a175b0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Mirana_Starfall::~CDOTA_Ability_Mirana_Starfall(
        CDOTA_Ability_Mirana_Starfall *const this)
{
  this->_vptr_IHandleEntity = &off_43594D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Mirana_Starfall::~CDOTA_Ability_Mirana_Starfall  (line 55, @0x0000000002a175d0, libserver.so)  // inlines: ~CDOTA_Ability_Mirana_Starfall
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Mirana_Starfall::~CDOTA_Ability_Mirana_Starfall(
        CDOTA_Ability_Mirana_Starfall *const this)
{
  this->_vptr_IHandleEntity = &off_43594D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Mirana_Starfall::Schema_DynamicBinding  (line 57, @0x0000000002a0a280, libserver.so)
// globals: CDOTA_Ability_Mirana_Starfall::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Mirana_Starfall::Schema_DynamicBinding(
        const CDOTA_Ability_Mirana_Starfall *const this)
{
  return CDOTA_Ability_Mirana_Starfall::s_pSchemaBinding;
}


// CDOTA_Ability_Mirana_Starfall::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 57, @0x0000000002a0a290, libserver.so)
// globals: CDOTA_Ability_Mirana_Starfall::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Mirana_Starfall::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Mirana_Starfall::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Mirana_Starfall::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Mirana_Starfall::CEntityInstanceEntityClass::DestructInstance  (line 57, @0x0000000002a0a2a0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Mirana_Starfall>
void __fastcall CDOTA_Ability_Mirana_Starfall::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Mirana_Starfall::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Mirana_Starfall::CEntityInstanceEntityClass::FreeInstance  (line 57, @0x0000000002a0a2c0, libserver.so)
void __fastcall CDOTA_Ability_Mirana_Starfall::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Mirana_Starfall::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Mirana_Starfall::CEntityInstanceEntityClass::CanAllocate  (line 57, @0x0000000002a0a2e0, libserver.so)
bool __fastcall CDOTA_Ability_Mirana_Starfall::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Mirana_Starfall::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Mirana_Starfall::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 57, @0x0000000002a0a2f0, libserver.so)
// globals: CDOTA_Ability_Mirana_Starfall::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Mirana_Starfall::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Mirana_Starfall::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Mirana_Starfall::s_pSchemaBinding;
}


// CDOTA_Ability_Mirana_Starfall::CEntityInstanceEntityClass::AllocateInstance  (line 57, @0x0000000002a0fc80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Mirana_Starfall::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Mirana_Starfall::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Mirana_Starfall::CEntityInstanceEntityClass::ConstructInstance  (line 57, @0x0000000002a143c0, libserver.so)  // inlines: CDOTA_Ability_Mirana_Starfall, Construct<CDOTA_Ability_Mirana_Starfall>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Mirana_Starfall::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Mirana_Starfall::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43594D0;
  }
  return p;
}


// CDOTA_Ability_Mirana_Starfall::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 57, @0x0000000002a1f9a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Mirana_Starfall::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Mirana_Starfall::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Mirana_Starfall::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 57, @0x0000000002a1f9c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Mirana_Starfall::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Mirana_Starfall::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Mirana_Starfall::GetEntityClassInternal  (line 57, @0x0000000002a381e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "mirana_starfall", "CDOTA_Ability_Mirana_Starfall"
// globals: `guard variable for'CDOTA_Ability_Mirana_Starfall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_StarfallClass, CDOTA_Ability_Mirana_Starfall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_StarfallClass, __dso_handle, CDOTA_Ability_Mirana_Starfall::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Mirana_Starfall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_StarfallClassInfo, CDOTA_Ability_Mirana_Starfall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_StarfallClassInfo
CEntityClass *__cdecl CDOTA_Ability_Mirana_Starfall::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Mirana_Starfall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_StarfallClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Mirana_Starfall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_StarfallClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Mirana_Starfall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_StarfallClass);
    CDOTA_Ability_Mirana_Starfall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_StarfallClass._vptr_CEntityClass = off_4359450;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Mirana_Starfall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_StarfallClass);
    __cxa_atexit(
      CDOTA_Ability_Mirana_Starfall::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Mirana_Starfall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_StarfallClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Mirana_StarfallClass != 0 )
    return &CDOTA_Ability_Mirana_Starfall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_StarfallClass;
  if ( `guard variable for'CDOTA_Ability_Mirana_Starfall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_StarfallClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Mirana_Starfall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_StarfallClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Mirana_Starfall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_StarfallClassInfo,
      "CDOTA_Ability_Mirana_Starfall",
      "mirana_starfall",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Mirana_Starfall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_StarfallClassInfo);
  }
  CDOTA_Ability_Mirana_Starfall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_StarfallClass.m_pClassInfo = &CDOTA_Ability_Mirana_Starfall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_StarfallClassInfo;
  CDOTA_Ability_Mirana_Starfall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_StarfallClass.m_pBaseClassInfo = CDOTA_Ability_Mirana_Starfall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_StarfallClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Mirana_StarfallClass = &CDOTA_Ability_Mirana_Starfall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_StarfallClass;
  CDOTA_Ability_Mirana_Starfall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_StarfallClassInfo.m_pClass = &CDOTA_Ability_Mirana_Starfall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_StarfallClass;
  CDOTA_Ability_Mirana_Starfall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_StarfallClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Mirana_StarfallClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Mirana_Starfall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_StarfallClass;
}


// CDOTA_Ability_Mirana_Starfall::GetAOERadius  (line 61, @0x0000000002a33c50, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "starfall_radius"
float __fastcall CDOTA_Ability_Mirana_Starfall::GetAOERadius(CDOTA_Ability_Mirana_Starfall *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "starfall_radius", -1, 0);
}


// CDOTA_Ability_Mirana_Starfall::GetIntrinsicModifierName  (line 63, @0x0000000002a0a300, libserver.so)
// strings: "modifier_mirana_starfall_scepter_thinker"
const char *__fastcall CDOTA_Ability_Mirana_Starfall::GetIntrinsicModifierName(
        CDOTA_Ability_Mirana_Starfall *const this)
{
  return "modifier_mirana_starfall_scepter_thinker";
}


// CDOTA_Ability_Mirana_Starfall::YouForgotToImplementOrDeclareServerClass  (line 71, @0x00000000029b5710, libserver.so)
int __fastcall CDOTA_Ability_Mirana_Starfall::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Mirana_Starfall *const this)
{
  return 0;
}


// CDOTA_Ability_Mirana_Starfall::GetServerClass  (line 71, @0x00000000029c9df0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Mirana_Starfall::GetServerClass(CDOTA_Ability_Mirana_Starfall *const this)
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


// CDOTA_Ability_Mirana_Starfall::CastStarfall  (line 80, @0x00000000029f2340, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, SetBool, operator CEntityInstance*, operator void*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, KeyValues::SetPtr, KeyValues::SetInt, KeyValues::SetFloat, Thinker_Create, KeyValues::~KeyValues, KeyValues::KeyValues, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CEntityHandle::operator CEntityInstance* (15 total)
// callers: CDOTA_Ability_Mirana_Starfall::OnSpellStart, CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker::OnIntervalThink
// strings: "starfall_radius", "starfall_secondary_radius", "modifier_mirana_starfall_thinker"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Ability_Mirana_Starfall::CastStarfall(
        CDOTA_Ability_Mirana_Starfall *const this,
        bool bAllowSecondStarfall)
{
  int LevelSpecialValue; // r13d
  int v4; // eax
  __m128i v5; // xmm2
  float v6; // r13d
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v10; // rax
  __int64 v11; // r13
  int v12; // eax
  float v13; // xmm1_4
  int m_Value; // r15d
  CDOTA_BaseNPC *v15; // rax
  Vector *v16; // r14
  CDOTA_BaseNPC *v17; // rax
  CEntityInstance *m_pInstance; // rdx
  CHandle<CBaseEntity> *v19; // rcx
  uint32 m_Index; // eax
  __int16 v21; // si
  CEntityIdentity *v22; // rcx
  CEntityIdentity *v23; // rcx
  bool v24; // r15
  __m128i v25; // xmm3
  float v26; // r14d
  CDOTA_BaseNPC *v27; // r13
  CDOTA_BaseNPC *v28; // rax
  const Vector *v29; // rbx
  CDOTA_BaseNPC *v30; // rax
  CEntityInstance *v31; // rax
  int v32; // eax
  float v33; // xmm1_4
  int v34; // r14d
  CDOTA_BaseNPC *v35; // rax
  Vector *v36; // r13
  CDOTA_BaseNPC *v37; // rax
  int starfall_secondary_radius; // [rsp+24h] [rbp-7Ch]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v43; // [rsp+68h] [rbp-38h]

  v43 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "starfall_radius", -1, 0);
  v4 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "starfall_secondary_radius", -1, 0);
  *v5.m128i_i32 = LevelSpecialValue;
  starfall_secondary_radius = v4;
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
  entities.m_Memory.m_nGrowSize = 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  v8 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
  v10 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v10->m_iTeamNum.m_Value, AbsOrigin, Caster, v6, &entities, 2, 19, 384, 0, 0);
  if ( entities.m_Size <= 0 )
  {
    v24 = 0;
  }
  else
  {
    v11 = 0;
    do
    {
      KeyValues::KeyValues(&kv, "modifier_mirana_starfall_thinker");
      m_pInstance = 0;
      v19 = &entities.m_Memory.m_pMemory[v11];
      m_Index = v19->m_Index;
      if ( v19->m_Index + 2 > 1 )
      {
        v21 = v19->m_Index;
        v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v19->m_Index) >> 9) & 0x3F];
        if ( v22 != 0 )
        {
          v23 = &v22[v21 & 0x1FF];
          if ( v23 != 0 && m_Index == v23->m_EHandle.m_Index )
            m_pInstance = v23->m_pInstance;
        }
      }
      KeyValues::SetPtr(&kv, "target", m_pInstance);
      v12 = (*(this->_vptr_IHandleEntity + 247))(this);
      KeyValues::SetInt(&kv, "damage", v12);
      KeyValues::SetFloat(&kv, "delay", v13);
      KeyValues::SetInt(&kv, "second", 0);
      m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
      v15 = CDOTABaseAbility::GetCaster(this);
      v16 = CBaseEntity::GetAbsOrigin(v15);
      v17 = CDOTABaseAbility::GetCaster(this);
      Thinker_Create(v17, this, "modifier_mirana_starfall_thinker", &kv, *v16, m_Value, 0, 0, 0);
      KeyValues::~KeyValues(&kv);
      ++v11;
    }
    while ( entities.m_Size > v11 );
    v24 = 1;
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
  *v25.m128i_i32 = starfall_secondary_radius;
  v26 = COERCE_FLOAT(_mm_cvtsi128_si32(v25));
  v27 = CDOTABaseAbility::GetCaster(this);
  v28 = CDOTABaseAbility::GetCaster(this);
  v29 = CBaseEntity::GetAbsOrigin(v28);
  v30 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v30->m_iTeamNum.m_Value, v29, v27, v26, &entities, 2, 19, 256, 1, 0);
  if ( entities.m_Size > 0 && bAllowSecondStarfall )
  {
    KeyValues::KeyValues(&kv, "modifier_mirana_starfall_thinker");
    v31 = CEntityHandle::operator CEntityInstance *(entities.m_Memory.m_pMemory);
    KeyValues::SetPtr(&kv, "target", v31);
    v32 = (*(this->_vptr_IHandleEntity + 247))(this);
    KeyValues::SetInt(&kv, "damage", (v32 * 0.75));
    KeyValues::SetFloat(&kv, "delay", v33);
    KeyValues::SetInt(&kv, "second", 1);
    v34 = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
    v35 = CDOTABaseAbility::GetCaster(this);
    v36 = CBaseEntity::GetAbsOrigin(v35);
    v37 = CDOTABaseAbility::GetCaster(this);
    Thinker_Create(v37, this, "modifier_mirana_starfall_thinker", &kv, *v36, v34, 0, 0, 0);
    KeyValues::~KeyValues(&kv);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  return v24;
}


// CDOTA_Ability_Mirana_Starfall::OnSpellStart  (line 124, @0x00000000029f2790, libserver.so)
// calls: CDOTA_Ability_Mirana_Starfall::CastStarfall, CDOTABaseAbility::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound
// strings: "particles/units/heroes/hero_mirana/mirana_starfall_moonray.vpcf", "Ability.Starfall"
void __fastcall CDOTA_Ability_Mirana_Starfall::OnSpellStart(CDOTA_Ability_Mirana_Starfall *const this)
{
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v4; // rax
  CDOTA_BaseNPC *v5; // rax

  CDOTA_Ability_Mirana_Starfall::CastStarfall(this, 1);
  Caster = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_mirana/mirana_starfall_moonray.vpcf",
                      1,
                      Caster,
                      0,
                      0);
  v4 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v4, Caster);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v5, "Ability.Starfall", 0.0, 0, 0);
}


// CDOTA_Ability_Mirana_Starfall::GetAbilityDamageToTargetOverInterval  (line 138, @0x00000000029bb610, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Mirana_Starfall::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Mirana_Starfall *const this,
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


// CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker::~CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker  (line 149, @0x0000000002a11860, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker::~CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker(
        CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4359F90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker::~CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker  (line 149, @0x0000000002a11880, libserver.so)  // inlines: ~CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker::~CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker(
        CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4359F90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker::IsHidden  (line 158, @0x0000000002a181c0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::HasScepter
bool __fastcall CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker::IsHidden(
        CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  return !CDOTA_BaseNPC::HasScepter(Parent);
}


// CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker::IsPurgable  (line 159, @0x0000000002a0a310, libserver.so)
bool __fastcall CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker::IsPurgable(
        CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker *const this)
{
  return 0;
}


// CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker::IsPermanent  (line 160, @0x0000000002a0a320, libserver.so)
bool __fastcall CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker::IsPermanent(
        CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker::DestroyOnExpire  (line 161, @0x0000000002a0a330, libserver.so)
bool __fastcall CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker::DestroyOnExpire(
        CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker *const this)
{
  return 0;
}


// CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker::OnCreated  (line 174, @0x00000000029e0360, libserver.so)  // inlines: AssignTo, DOTAGameRules, DotaRetrieveAbilityValue<float>, GetGameTime, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker::OnCreated(
        CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float LevelSpecialValue; // xmm0_4
  float v5; // xmm1_4

  this->bInBufferTime = 0;
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "interval_scepter", -1, 0);
    this->interval_scepter = LevelSpecialValue;
  }
  else
  {
    LevelSpecialValue = 0.0;
    this->interval_scepter = 0.0;
  }
  v5 = 0.0;
  if ( g_pGameRules != 0 )
    v5 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_flLastApplyTime = v5;
  CDOTA_Buff::StartIntervalThink(this, LevelSpecialValue, v5);
}


// CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker::OnRefresh  (line 187, @0x00000000029b5720, libserver.so)  // inlines: DOTAGameRules, GetGameTime
void __fastcall CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker::OnRefresh(
        CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker *const this,
        KeyValues *pKV)
{
  double v2; // xmm1_8
  float m_flLastApplyTime; // xmm5_4
  void (__fastcall *v4)(CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker *const, __int64, double); // rdx
  float v5; // xmm2_4
  float v6; // xmm3_4
  double v7; // xmm0_8

  *&v2 = LODWORD(this->interval_scepter);
  m_flLastApplyTime = this->m_flLastApplyTime;
  v4 = *(this->_vptr_CDOTA_Buff + 63);
  if ( g_pGameRules == 0 )
  {
    v6 = *&v2 - (0.0 - m_flLastApplyTime);
    if ( v6 <= 0.0 )
    {
      *&v7 = LODWORD(this->interval_scepter);
      if ( *&v2 < 0.0 )
        goto LABEL_8;
      goto LABEL_11;
    }
LABEL_3:
    *&v7 = LODWORD(this->interval_scepter);
    if ( v6 > *&v2 )
    {
LABEL_8:
      v4(this, 1, v7);
      return;
    }
    if ( g_pGameRules != 0 )
    {
      v5 = *&g_pGameRules[18].m_szQuestName[20];
      goto LABEL_6;
    }
LABEL_11:
    *&v2 = *&v2 - (0.0 - m_flLastApplyTime);
    if ( *&v2 > 0.0 )
      goto LABEL_7;
    goto LABEL_12;
  }
  v5 = *&g_pGameRules[18].m_szQuestName[20];
  v6 = *&v2 - (v5 - m_flLastApplyTime);
  if ( v6 > 0.0 )
    goto LABEL_3;
  *&v7 = LODWORD(this->interval_scepter);
  if ( *&v2 < 0.0 )
    goto LABEL_8;
LABEL_6:
  *&v2 = *&v2 - (v5 - m_flLastApplyTime);
  if ( *&v2 > 0.0 )
  {
LABEL_7:
    v7 = v2;
    goto LABEL_8;
  }
LABEL_12:
  v4(this, 1, 0.0);
}


// CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker::OnIntervalThink  (line 196, @0x00000000029f2810, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, DOTAGameRules, GetGameTime, GetTeamNumber, Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_Buff::StartIntervalThink, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CDOTA_Ability_Mirana_Starfall::CastStarfall, GetParticleManager (18 total)
// strings: "mirana_starfall", "starfall_radius", "particles/units/heroes/hero_mirana/mirana_starfall_moonray.vpcf", "Ability.Starfall"
void __fastcall CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker::OnIntervalThink(
        CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_Ability_Mirana_Starfall *AbilityByName; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_BaseNPC *v7; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_BaseNPC *v9; // rax
  float v10; // xmm1_4
  float v11; // xmm1_4
  CDOTA_BaseNPC *v12; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  float v16; // xmm1_4
  void (__fastcall *v17)(CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker *const, __int64, float); // r13
  CDOTABaseAbility *Ability; // rax
  float v19; // xmm0_4
  float v20; // xmm0_4
  float flRadius; // [rsp+1Ch] [rbp-54h]
  float flRadiusa; // [rsp+1Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+20h] [rbp-50h] BYREF

  Parent = CDOTA_Buff::GetParent(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Parent, "mirana_starfall", 0);
  if ( AbilityByName == 0 )
    return;
  v4 = CDOTA_Buff::GetParent(this);
  if ( !CDOTA_BaseNPC::HasScepter(v4) )
    return;
  v5 = CDOTA_Buff::GetParent(this);
  if ( (*(v5->_vptr_IHandleEntity + 408))(v5) == 0
    || CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value
    || (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) != 0 )
  {
    return;
  }
  if ( (*(this->_vptr_CDOTA_Buff + 27))(this) <= 0 )
    (*(this->_vptr_CDOTA_Buff + 25))(this);
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  flRadius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "starfall_radius", -1, 0);
  Caster = CDOTA_Buff::GetCaster(this);
  v7 = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
  v9 = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(v9->m_iTeamNum.m_Value, AbsOrigin, Caster, flRadius, &entities, 2, 19, 384, 0, 0);
  if ( entities.m_Size != 0 )
  {
    if ( SLOBYTE(CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value) >= 0 )
    {
      if ( this->bInBufferTime )
      {
        CDOTA_Ability_Mirana_Starfall::CastStarfall(AbilityByName, 0);
        (*(this->_vptr_CDOTA_Buff + 26))(this);
        v12 = CDOTA_Buff::GetCaster(this);
        ParticleManager = GetParticleManager();
        LODWORD(v12) = CDOTA_ParticleManager::CreateParticle(
                         ParticleManager,
                         "particles/units/heroes/hero_mirana/mirana_starfall_moonray.vpcf",
                         1,
                         v12,
                         0,
                         0);
        v14 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v14, v12);
        v15 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::UnitEmitSound(v15, "Ability.Starfall", 0.0, 0, 0);
        CDOTA_Buff::StartIntervalThink(this, this->interval_scepter, v16);
        flRadiusa = this->interval_scepter;
        v17 = *(this->_vptr_CDOTA_Buff + 63);
        Ability = CDOTA_Buff::GetAbility(this);
        v19 = (*(Ability->_vptr_IHandleEntity + 243))(Ability, 0xFFFFFFFFLL);
        v17(this, 1, v19 * flRadiusa);
        v20 = 0.0;
        if ( g_pGameRules != 0 )
          v20 = *&g_pGameRules[18].m_szQuestName[20];
        this->m_flLastApplyTime = v20;
        goto LABEL_11;
      }
      this->bInBufferTime = 1;
    }
    CDOTA_Buff::StartIntervalThink(this, 0.5, v11);
  }
  else
  {
    this->bInBufferTime = 0;
    CDOTA_Buff::StartIntervalThink(this, 0.5, v10);
  }
LABEL_11:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
  if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
  }
}


// CDOTA_Modifier_Mirana_Starfall_Thinker::~CDOTA_Modifier_Mirana_Starfall_Thinker  (line 255, @0x0000000002a11810, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Mirana_Starfall_Thinker::~CDOTA_Modifier_Mirana_Starfall_Thinker(
        CDOTA_Modifier_Mirana_Starfall_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_435A2B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Mirana_Starfall_Thinker::~CDOTA_Modifier_Mirana_Starfall_Thinker  (line 255, @0x0000000002a11830, libserver.so)  // inlines: ~CDOTA_Modifier_Mirana_Starfall_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Mirana_Starfall_Thinker::~CDOTA_Modifier_Mirana_Starfall_Thinker(
        CDOTA_Modifier_Mirana_Starfall_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_435A2B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Mirana_Starfall_Thinker::IsHidden  (line 263, @0x0000000002a0a340, libserver.so)
bool __fastcall CDOTA_Modifier_Mirana_Starfall_Thinker::IsHidden(CDOTA_Modifier_Mirana_Starfall_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Mirana_Starfall_Thinker::OnCreated  (line 280, @0x00000000029f9030, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetBool, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<int>, GetSerialNumber, Set, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::GetPtr, KeyValues::GetInt, KeyValues::GetFloat, CDOTA_Buff::StartIntervalThink
// strings: "starfall_secondary_radius"
void __fastcall CDOTA_Modifier_Mirana_Starfall_Thinker::OnCreated(
        CDOTA_Modifier_Mirana_Starfall_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  _QWORD *Ptr; // rax
  __int64 v6; // rdx
  int v7; // eax
  __int16 v8; // cx
  float v9; // xmm1_4
  float Float; // xmm0_4
  float v11; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->starfall_secondary_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                        Ability,
                                        "starfall_secondary_radius",
                                        -1,
                                        0);
  else
    this->starfall_secondary_radius = 0;
  Ptr = KeyValues::GetPtr(pKV, "target", 0);
  if ( Ptr != 0 && (v6 = Ptr[1]) != 0 )
  {
    v7 = (*(v6 + 16) >> 15) - (*(v6 + 48) & 1);
    if ( *(v6 + 16) == -1 )
      v8 = 0x7FFF;
    else
      v8 = *(v6 + 16) & 0x7FFF;
    LOWORD(this->m_hTarget.m_Index) = v8 | this->m_hTarget.m_Index & 0x8000;
    this->m_hTarget.m_Index = (v7 << 15) | this->m_hTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTarget.m_Index = -1;
  }
  this->m_iDamage = KeyValues::GetInt(pKV, "damage", 0);
  this->m_bStarDropped = 0;
  this->m_bSecondStar = KeyValues::GetInt(pKV, "second", 0) != 0;
  Float = KeyValues::GetFloat(pKV, "delay", v9);
  CDOTA_Buff::StartIntervalThink(this, Float, v11);
}


// CDOTA_Modifier_Mirana_Starfall_Thinker::OnIntervalThink  (line 295, @0x00000000029db8c0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetParent, UTIL_Remove, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, RandomInt, CEntityHandle::operator CEntityInstance*, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::GetAbility (19 total)
// strings: "particles/units/heroes/hero_mirana/mirana_starfall_attack.vpcf", "Ability.StarfallImpact"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Mirana_Starfall_Thinker::OnIntervalThink(
        CDOTA_Modifier_Mirana_Starfall_Thinker *const this)
{
  float v1; // xmm1_4
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC **v5; // rdx
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // r12
  float starfall_secondary_radius; // xmm1_4
  CDOTA_BaseNPC *Caster; // r15
  CDOTA_BaseNPC *v10; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v12; // rax
  int v13; // eax
  CEntityInstance *v14; // rax
  CDOTA_BaseNPC *v15; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v17; // rax
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  const char *ReplacementSound; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v23; // r13
  CDOTA_ParticleManager *v24; // rax
  int Particle; // r12d
  CDOTA_ParticleManager *v26; // rax
  float flRadius; // [rsp+1Ch] [rbp-54h]
  float flRadiusa; // [rsp+1Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+20h] [rbp-50h] BYREF

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v5 = &v4[this->m_hTarget.m_Index & 0x1FF]) != 0
    && m_Index == *(v5 + 4)
    && (v7 = *v5, *v5 != 0)
    && v7->m_bIsDOTANPC )
  {
    if ( this->m_bStarDropped )
    {
      if ( (*(v7->_vptr_IHandleEntity + 408))(*v5) == 0 && this->m_bSecondStar )
      {
        entities.m_Size = 0;
        starfall_secondary_radius = this->starfall_secondary_radius;
        entities.m_Memory.m_pMemory = 0;
        entities.m_Memory.m_nAllocationCount = 0;
        entities.m_Memory.m_nGrowSize = 0;
        flRadius = starfall_secondary_radius;
        Caster = CDOTA_Buff::GetCaster(this);
        v10 = CDOTA_Buff::GetCaster(this);
        AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
        v12 = CDOTA_Buff::GetCaster(this);
        FindUnitsInRadius(v12->m_iTeamNum.m_Value, AbsOrigin, Caster, flRadius, &entities, 2, 19, 384, 0, 0);
        if ( entities.m_Size > 0 )
        {
          v13 = RandomInt(0, (entities.m_Size - 1));
          v14 = CEntityHandle::operator CEntityInstance *(&entities.m_Memory.m_pMemory[v13]);
          v7 = v14;
          if ( v14 == 0 || BYTE3(v14[7]._vptr_IHandleEntity) == 0 )
            v7 = 0;
          v15 = CDOTA_Buff::GetCaster(this);
          ParticleManager = GetParticleManager();
          LODWORD(v15) = CDOTA_ParticleManager::CreateParticle(
                           ParticleManager,
                           "particles/units/heroes/hero_mirana/mirana_starfall_attack.vpcf",
                           1,
                           v7,
                           0,
                           v15);
          v17 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v17, v15);
        }
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
        if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
          if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
        }
      }
      flRadiusa = this->m_iDamage;
      Ability = CDOTA_Buff::GetAbility(this);
      v19 = CDOTA_Buff::GetCaster(this);
      ApplyDamage(v19, v7, Ability, flRadiusa, 2, 0);
      v20 = CDOTA_Buff::GetCaster(this);
      ReplacementSound = CDOTA_BaseNPC::FindReplacementSound(v20, "Ability.StarfallImpact");
      CDOTA_BaseNPC::UnitEmitSound(v7, ReplacementSound, 0.0, 0, 0);
      Parent = CDOTA_Buff::GetParent(this);
      UTIL_Remove(Parent);
    }
    else
    {
      CDOTA_Buff::StartIntervalThink(this, 0.5, v1);
      v23 = CDOTA_Buff::GetCaster(this);
      v24 = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   v24,
                   "particles/units/heroes/hero_mirana/mirana_starfall_attack.vpcf",
                   1,
                   v7,
                   0,
                   v23);
      v26 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v26, Particle);
      this->m_bStarDropped = 1;
    }
  }
  else
  {
    v6 = CDOTA_Buff::GetParent(this);
    UTIL_Remove(v6);
  }
}


// CDOTA_Ability_Mirana_Arrow::~CDOTA_Ability_Mirana_Arrow  (line 338, @0x0000000002a33340, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Mirana_Arrow::~CDOTA_Ability_Mirana_Arrow(CDOTA_Ability_Mirana_Arrow *const this)
{
  this->_vptr_IHandleEntity = &off_435A610;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->hAlreadyHitList);
  if ( (this->hAlreadyHitList.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->hAlreadyHitList.m_Memory),
        (this->hAlreadyHitList.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->hAlreadyHitList.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_Mirana_Arrow::~CDOTA_Ability_Mirana_Arrow  (line 338, @0x0000000002a33490, libserver.so)  // inlines: Purge, ~CDOTA_Ability_Mirana_Arrow, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Mirana_Arrow::~CDOTA_Ability_Mirana_Arrow(CDOTA_Ability_Mirana_Arrow *const this)
{
  this->_vptr_IHandleEntity = &off_435A610;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->hAlreadyHitList);
  if ( (this->hAlreadyHitList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->hAlreadyHitList.m_Memory);
    if ( (this->hAlreadyHitList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->hAlreadyHitList.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Mirana_Arrow::Schema_DynamicBinding  (line 340, @0x0000000002a0a350, libserver.so)
// globals: CDOTA_Ability_Mirana_Arrow::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Mirana_Arrow::Schema_DynamicBinding(
        const CDOTA_Ability_Mirana_Arrow *const this)
{
  return CDOTA_Ability_Mirana_Arrow::s_pSchemaBinding;
}


// CDOTA_Ability_Mirana_Arrow::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 340, @0x0000000002a0a360, libserver.so)
// globals: CDOTA_Ability_Mirana_Arrow::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Mirana_Arrow::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Mirana_Arrow::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Mirana_Arrow::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Mirana_Arrow::CEntityInstanceEntityClass::DestructInstance  (line 340, @0x0000000002a0a370, libserver.so)  // inlines: Destruct<CDOTA_Ability_Mirana_Arrow>
void __fastcall CDOTA_Ability_Mirana_Arrow::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Mirana_Arrow::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Mirana_Arrow::CEntityInstanceEntityClass::FreeInstance  (line 340, @0x0000000002a0a390, libserver.so)
void __fastcall CDOTA_Ability_Mirana_Arrow::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Mirana_Arrow::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Mirana_Arrow::CEntityInstanceEntityClass::CanAllocate  (line 340, @0x0000000002a0a3b0, libserver.so)
bool __fastcall CDOTA_Ability_Mirana_Arrow::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Mirana_Arrow::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Mirana_Arrow::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 340, @0x0000000002a0a3c0, libserver.so)
// globals: CDOTA_Ability_Mirana_Arrow::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Mirana_Arrow::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Mirana_Arrow::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Mirana_Arrow::s_pSchemaBinding;
}


// CDOTA_Ability_Mirana_Arrow::CEntityInstanceEntityClass::AllocateInstance  (line 340, @0x0000000002a0fcc0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Mirana_Arrow::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Mirana_Arrow::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 952);
  memset(v1, 0, 0x3B8u);
  return v1;
}


// CDOTA_Ability_Mirana_Arrow::CEntityInstanceEntityClass::ConstructInstance  (line 340, @0x0000000002a1df80, libserver.so)  // inlines: CDOTA_Ability_Mirana_Arrow, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_Mirana_Arrow>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Mirana_Arrow::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Mirana_Arrow::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 232) = 0;
    *p = &off_435A610;
    *(p + 117) = 0;
    *(p + 236) = 0;
    *(p + 237) = 0;
  }
  return p;
}


// CDOTA_Ability_Mirana_Arrow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 340, @0x0000000002a1f9f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Mirana_Arrow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Mirana_Arrow::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Mirana_Arrow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 340, @0x0000000002a1fa10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Mirana_Arrow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Mirana_Arrow::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Mirana_Arrow::GetEntityClassInternal  (line 340, @0x0000000002a38330, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "mirana_arrow", "CDOTA_Ability_Mirana_Arrow"
// globals: `guard variable for'CDOTA_Ability_Mirana_Arrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_ArrowClass, CDOTA_Ability_Mirana_Arrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_ArrowClass, __dso_handle, CDOTA_Ability_Mirana_Arrow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Mirana_Arrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_ArrowClassInfo, CDOTA_Ability_Mirana_Arrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_ArrowClassInfo
CEntityClass *__cdecl CDOTA_Ability_Mirana_Arrow::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Mirana_Arrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_ArrowClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Mirana_Arrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_ArrowClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Mirana_Arrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_ArrowClass);
    CDOTA_Ability_Mirana_Arrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_ArrowClass._vptr_CEntityClass = off_435A590;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Mirana_Arrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_ArrowClass);
    __cxa_atexit(
      CDOTA_Ability_Mirana_Arrow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Mirana_Arrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_ArrowClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Mirana_ArrowClass != 0 )
    return &CDOTA_Ability_Mirana_Arrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_ArrowClass;
  if ( `guard variable for'CDOTA_Ability_Mirana_Arrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_ArrowClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Mirana_Arrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_ArrowClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Mirana_Arrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_ArrowClassInfo,
      "CDOTA_Ability_Mirana_Arrow",
      "mirana_arrow",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Mirana_Arrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_ArrowClassInfo);
  }
  CDOTA_Ability_Mirana_Arrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_ArrowClass.m_pClassInfo = &CDOTA_Ability_Mirana_Arrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_ArrowClassInfo;
  CDOTA_Ability_Mirana_Arrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_ArrowClass.m_pBaseClassInfo = CDOTA_Ability_Mirana_Arrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_ArrowClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Mirana_ArrowClass = &CDOTA_Ability_Mirana_Arrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_ArrowClass;
  CDOTA_Ability_Mirana_Arrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_ArrowClassInfo.m_pClass = &CDOTA_Ability_Mirana_Arrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_ArrowClass;
  CDOTA_Ability_Mirana_Arrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_ArrowClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Mirana_ArrowClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Mirana_Arrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_ArrowClass;
}


// CDOTA_Ability_Mirana_Arrow::GetAvoidRadius  (line 347, @0x0000000002a33c70, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "arrow_width"
float __fastcall CDOTA_Ability_Mirana_Arrow::GetAvoidRadius(CDOTA_Ability_Mirana_Arrow *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "arrow_width", -1, 0) + 150.0;
}


// CDOTA_Ability_Mirana_Arrow::IsAvoidMagical  (line 348, @0x0000000002a0a3d0, libserver.so)
bool __fastcall CDOTA_Ability_Mirana_Arrow::IsAvoidMagical(CDOTA_Ability_Mirana_Arrow *const this)
{
  return 1;
}


// CDOTA_Ability_Mirana_Arrow::GetAvoidStrength  (line 349, @0x0000000002a21210, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, RemapValClamped, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Ability_Mirana_Arrow::GetAvoidStrength(CDOTA_Ability_Mirana_Arrow *const this, CDOTA_Bot *pBot)
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
  v6 = (CBaseEntity::GetHealth(m_pInstance) - 400.0) / 1100.0;
  if ( v6 < 0.0 )
    return 0.89999998;
  result = 0.80000001;
  if ( v6 <= 1.0 )
    return (v6 * -0.099999964) + 0.89999998;
  return result;
}


// CDOTA_Ability_Mirana_Arrow::OnSpellStart  (line 365, @0x00000000029eb0b0, libserver.so)  // inlines: CBroadcastRecipientFilter, CEntityHandle, CEntityIndex, CHandle, CPASAttenuationFilter, CPASFilter, CReliableBroadcastRecipientFilter, CUtlMemory, CUtlVector, CUtlVectorBase, EmitSound_t, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, NormalizeInPlace, Purge, QAngle, RemoveAll, Set, SoundEventGuid_t, VectorMultiply, VectorSubtract, operator*, operator-, operator=, sLinearProjectileCreateInfo, ~CBroadcastRecipientFilter, ~CPASAttenuationFilter, ~CPASFilter, ~CReliableBroadcastRecipientFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCursorPosition, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, VectorNormalize, CBaseAnimating::GetAttachment, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTA_BaseNPC::GetOpposingTeamNumber (37 total)
// strings: "arrow_width", "arrow_speed", "arrow_range", "arrow_vision", "attach_attack1", "particles/units/heroes/hero_mirana/mirana_spell_arrow_fx.vpcf" (14 total)
void __fastcall CDOTA_Ability_Mirana_Arrow::OnSpellStart(CDOTA_Ability_Mirana_Arrow *const this)
{
  int LevelSpecialValue; // r12d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  vec_t v5; // xmm0_4
  vec_t v6; // xmm1_4
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  int OpposingTeamNumber; // eax
  CTeam *GlobalTeam; // rax
  CTeam *v11; // rax
  CDOTA_BaseNPC *v12; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  int v14; // eax
  CDOTA_ParticleManager *v15; // rax
  CDOTA_ParticleManager *v16; // rax
  float v17; // xmm1_4
  float v18; // xmm1_4
  float v19; // xmm1_4
  vec_t z; // xmm0_4
  vec_t y; // xmm1_4
  vec_t x; // xmm0_4
  vec_t v23; // xmm0_4
  vec_t v24; // xmm0_4
  CDOTA_BaseNPC *v25; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v27; // eax
  __int16 v28; // cx
  int m_Value; // eax
  float v30; // xmm1_4
  CDOTA_BaseNPC *v31; // rax
  CTeam *Team; // rax
  CTeam *v33; // rax
  CDOTA_BaseNPC *v34; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v36; // rax
  const QAngle *AbsAngles; // rax
  int arrow_range; // [rsp+14h] [rbp-43Ch]
  int arrow_width; // [rsp+18h] [rbp-438h]
  float v40; // [rsp+1Ch] [rbp-434h]
  unsigned int v41; // [rsp+20h] [rbp-430h]
  unsigned int v42; // [rsp+28h] [rbp-428h]
  float arrow_speed; // [rsp+2Ch] [rbp-424h]
  __int64 vTargetPos; // [rsp+30h] [rbp-420h]
  Vector vDirection; // [rsp+40h] [rbp-410h] BYREF
  unsigned __int64 v46; // [rsp+50h] [rbp-400h]
  float v47; // [rsp+58h] [rbp-3F8h]
  Vector vForward; // [rsp+60h] [rbp-3F0h] BYREF
  QAngle startAngle; // [rsp+70h] [rbp-3E0h] BYREF
  QAngle angles; // [rsp+80h] [rbp-3D0h] BYREF
  QAngle angles2; // [rsp+90h] [rbp-3C0h] BYREF
  EmitSound_t ep; // [rsp+A0h] [rbp-3B0h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+100h] [rbp-350h] BYREF
  KeyValues kv; // [rsp+180h] [rbp-2D0h] BYREF
  CReliableBroadcastRecipientFilter filterTeam; // [rsp+1A0h] [rbp-2B0h] BYREF
  CPASAttenuationFilter filter; // [rsp+2E0h] [rbp-170h] BYREF
  unsigned __int64 v57; // [rsp+418h] [rbp-38h]

  v57 = __readfsqword(0x28u);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->hAlreadyHitList);
  arrow_width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "arrow_width", -1, 0);
  arrow_speed = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "arrow_speed", -1, 0);
  arrow_range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "arrow_range", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "arrow_vision", -1, 0);
  vTargetPos = *&CDOTABaseAbility::GetCursorPosition(this).x;
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  v5 = *(&vTargetPos + 1) - AbsOrigin->y;
  v6 = *&vTargetPos - AbsOrigin->x;
  vDirection.z = 0.0;
  vDirection.y = v5;
  vDirection.x = v6;
  if ( VectorNormalize(&vDirection) < 0.0099999998 )
  {
    v36 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v36);
    AngleVectors(AbsAngles, &vDirection, 0, 0);
  }
  this->m_vStartPos = vec3_invalid;
  v7 = CDOTABaseAbility::GetCaster(this);
  CBaseAnimating::GetAttachment(v7, "attach_attack1", &this->m_vStartPos);
  *&v41 = vDirection.x * arrow_speed;
  *&v42 = arrow_speed * vDirection.y;
  v40 = vDirection.z * arrow_speed;
  CRecipientFilter::CRecipientFilter(&filterTeam);
  filterTeam._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filterTeam);
  filterTeam._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filterTeam);
  v8 = CDOTABaseAbility::GetCaster(this);
  OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v8);
  GlobalTeam = GetGlobalTeam(OpposingTeamNumber);
  CRecipientFilter::RemoveRecipientsByTeam(&filterTeam, GlobalTeam);
  v11 = GetGlobalTeam(1);
  CRecipientFilter::AddRecipientsByTeam(&filterTeam, v11);
  v12 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  v14 = CDOTA_ParticleManager::CreateParticle(
          ParticleManager,
          "particles/units/heroes/hero_mirana/mirana_spell_arrow_fx.vpcf",
          2,
          v12,
          &filterTeam,
          0);
  this->m_nFXIndex = v14;
  LODWORD(v12) = v14;
  v15 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v15, v12, 0, *&this->m_vStartPos.x, this->m_vStartPos.z);
  LODWORD(v12) = this->m_nFXIndex;
  v16 = GetParticleManager();
  v46 = __PAIR64__(v42, v41);
  v47 = v40;
  CDOTA_ParticleManager::SetParticleControl(v16, v12, 1, COERCE_DOUBLE(__PAIR64__(v42, v41)), v40);
  KeyValues::KeyValues(&kv, "mirana_arrow");
  KeyValues::SetInt(&kv, "fxIndex", this->m_nFXIndex);
  KeyValues::SetFloat(&kv, "start_pos_x", v17);
  KeyValues::SetFloat(&kv, "start_pos_y", v18);
  KeyValues::SetFloat(&kv, "start_pos_z", v19);
  info.bHasFrontalCone = 1;
  info.hSource.m_Index = -1;
  info.bCheckStartPosition = 0;
  LODWORD(info.vVelocity.x) = v41;
  z = vec3_origin.z;
  info.bProvidesVision = 0;
  y = vec3_origin.y;
  info.iUnitTargetTeam = 0;
  info.vAcceleration.z = z;
  x = this->m_vStartPos.x;
  info.vAcceleration.y = y;
  info.vAcceleration.x = vec3_origin.x;
  info.vSpawnOrigin.x = x;
  v23 = this->m_vStartPos.y;
  info.iUnitTargetType = 0;
  info.vSpawnOrigin.y = v23;
  v24 = this->m_vStartPos.z;
  info.iUnitTargetFlags = 0;
  info.vSpawnOrigin.z = v24;
  info.iVisionTeamNumber = -1;
  info.iVisionRadius = -1;
  info.bDrawsOnMinimap = 0;
  info.bVisibleToEnemies = 1;
  info.bIgnoreSource = 0;
  info.bStickyFoWReveal = 0;
  info.pKVExtraData = 0;
  info.fExpireTime = 0.0;
  info.fMaxSpeed = 0.0;
  info.pszEffectName = "particles/units/heroes/hero_mirana/mirana_spell_arrow.vpcf";
  info.pAbility = this;
  LODWORD(info.vVelocity.y) = v42;
  info.vVelocity.z = v40;
  info.fDistance = arrow_range;
  info.fStartRadius = arrow_width;
  info.fEndRadius = arrow_width;
  v25 = CDOTABaseAbility::GetCaster(this);
  if ( v25 != 0 && (m_pEntity = v25->m_pEntity) != 0 )
  {
    v27 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v28 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v28 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(info.hSource.m_Index) = v28 | info.hSource.m_Index & 0x8000;
    info.hSource.m_Index = (v27 << 15) | info.hSource.m_Index & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  info.iUnitTargetTeam = 2;
  info.iUnitTargetType = 19;
  info.iUnitTargetFlags = 16;
  info.bProvidesVision = 1;
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  info.iVisionRadius = LevelSpecialValue;
  info.pKVExtraData = &kv;
  info.iVisionTeamNumber = m_Value;
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(&filter, &this->m_vStartPos);
  filter._vptr_IRecipientFilter = &off_3FECD70;
  CPASAttenuationFilter::Filter(&filter, &this->m_vStartPos, 0.80000001, v30);
  v31 = CDOTABaseAbility::GetCaster(this);
  Team = CBaseEntity::GetTeam(v31);
  CRecipientFilter::RemoveRecipientsNotOnTeam(&filter, Team);
  v33 = GetGlobalTeam(1);
  CRecipientFilter::AddRecipientsByTeam(&filter, v33);
  ep.m_pSoundName = "Hero_Mirana.ArrowCast";
  ep.m_flVolume = 1.0;
  ep.m_SoundLevel = soundlevel_t::SNDLVL_NONE;
  ep.m_nFlags = 0;
  ep.m_nPitch = 100;
  ep.m_flSoundTime = 0.0;
  ep.m_pflSoundDuration = 0;
  ep.m_bEmitCloseCaption = 1;
  ep.m_bWarnOnMissingCloseCaption = 0;
  ep.m_bWarnOnDirectWaveReference = 0;
  ep.m_nSpeakerEntity.m_Data = -1;
  ep.m_UtlVecSoundOrigin.m_Size = 0;
  memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
  ep.m_nChannel = 6;
  ep.m_pOrigin = &this->m_vStartPos;
  CBaseEntity::EmitSound(&filter, 0, &ep);
  CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  v34 = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v34, "special_bonus_unique_mirana_2", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
  {
    VectorAngles(&vDirection, &startAngle);
    angles.x = 0.0;
    angles.z = 0.0;
    angles.y = startAngle.y - 25.0;
    AngleVectors(&angles, &vForward, 0, 0);
    info.vVelocity.y = vForward.y * arrow_speed;
    info.vVelocity.z = vForward.z * arrow_speed;
    info.vVelocity.x = vForward.x * arrow_speed;
    CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
    angles2.x = 0.0;
    angles2.z = 0.0;
    angles2.y = startAngle.y + 25.0;
    AngleVectors(&angles2, &vForward, 0, 0);
    info.vVelocity.y = vForward.y * arrow_speed;
    info.vVelocity.z = vForward.z * arrow_speed;
    info.vVelocity.x = arrow_speed * vForward.x;
    CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  }
  ep.m_UtlVecSoundOrigin.m_Size = 0;
  if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
    if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
  }
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
  KeyValues::~KeyValues(&kv);
  filterTeam._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filterTeam);
}


// CDOTA_Ability_Mirana_Arrow::OnProjectileHit_ExtraData  (line 471, @0x00000000029fde40, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CloseEnough, CopyConstruct<CHandle<CBaseEntity> >, DOTAGameRules, Element, FastSqrt, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetOwnerEntity, GetSerialNumber, GetTeamNumber, GrowMemory, HasElement, InState, IndexToIdentity, Init, IsConsideredHero, IsInvulnerable, IsMagicImmune, IsValid, Length2D, Lerp<float>, LookupEntity, Set, SpeakConcept, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, ToDOTAPlayer, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator->, operator[]
// calls: KeyValues::GetInt, KeyValues::GetFloat, CDOTABaseAbility::GetLevelSpecialValueFor<int>, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTABaseAbility::GetCaster, CDOTAFogOfWarSystem::AddTempViewer, __stack_chk_fail, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTA_BaseNPC::UnitEmitSound, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CEntityHandle::operator CEntityInstance* (28 total)
// strings: "fxIndex", "start_pos_x", "start_pos_y", "start_pos_z", "arrow_vision", "Hero_Mirana.ArrowImpact" (14 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
_BOOL8 __fastcall CDOTA_Ability_Mirana_Arrow::OnProjectileHit_ExtraData(
        CDOTA_Ability_Mirana_Arrow *const this,
        const CEntityHandle *hTarget,
        const CFieldPath *vLocation,
        KeyValues *pExtraData)
{
  KeyValues *v5; // r12
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  int LevelSpecialValue; // eax
  int v11; // r15d
  CDOTA_ParticleManager *ParticleManager; // rax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  _BOOL4 m_bIsDOTANPC; // r13d
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 m_iUnitType; // eax
  CEntityIdentity *m_pEntity; // rax
  __int16 v21; // cx
  __int64 m_Size; // rax
  int v23; // edx
  CHandle<CBaseEntity> *v24; // rax
  unsigned __int64 m_Value; // rax
  const CBaseEntity *v26; // rax
  const Vector *AbsOrigin; // rax
  float v28; // xmm1_4
  __m128 v29; // xmm2
  __m128 v30; // xmm6
  float v31; // xmm2_4
  CDOTA_BaseNPC *v32; // rax
  float v33; // xmm1_4
  CDOTA_BaseNPC *v34; // rax
  CEntityIdentity *v35; // rdx
  CEntityIdentity *v36; // rcx
  const char *v37; // rdx
  float v38; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_BaseNPC *v40; // rax
  unsigned __int16 v41; // dx
  int v42; // esi
  int v43; // eax
  CEntityIdentity *v44; // rdx
  CEntityIdentity *v45; // rdx
  CDOTAPlayer *v46; // rdi
  CDOTA_BaseNPC *v47; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC_Hero *v49; // r14
  CDOTA_BaseNPC *v50; // rax
  CDOTA_BaseNPC_Hero *v51; // rdi
  float arrow_bonus_damage; // [rsp+18h] [rbp-C8h]
  int arrow_max_stunrange; // [rsp+1Ch] [rbp-C4h]
  float arrow_max_stun; // [rsp+20h] [rbp-C0h]
  CDOTAPlayer *arrow_max_stuna; // [rsp+20h] [rbp-C0h]
  float fLengthPct; // [rsp+28h] [rbp-B8h]
  float fLengthPcta; // [rsp+28h] [rbp-B8h]
  int iValue; // [rsp+2Ch] [rbp-B4h]
  int iValuea; // [rsp+2Ch] [rbp-B4h]
  int iValueb; // [rsp+2Ch] [rbp-B4h]
  int v62[4]; // [rsp+40h] [rbp-A0h] BYREF
  CResponseCriteriaSet criteria; // [rsp+50h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+90h] [rbp-50h] BYREF
  unsigned __int64 v65; // [rsp+A8h] [rbp-38h]

  v5 = pExtraData;
  v65 = __readfsqword(0x28u);
  this->m_nFXIndex = KeyValues::GetInt(pExtraData, "fxIndex", 0);
  this->m_vStartPos.x = KeyValues::GetFloat(v5, "start_pos_x", v7);
  this->m_vStartPos.y = KeyValues::GetFloat(v5, "start_pos_y", v8);
  this->m_vStartPos.z = KeyValues::GetFloat(v5, "start_pos_z", v9);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "arrow_vision", -1, 0);
  LODWORD(v5) = this->m_nFXIndex;
  v11 = LevelSpecialValue;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, v5, 0);
  if ( hTarget->m_Index + 2 <= 1 )
    goto LABEL_5;
  v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hTarget->m_Index) >> 9) & 0x3F];
  if ( v13 == 0 )
    goto LABEL_5;
  v14 = &v13[hTarget->m_Index & 0x1FF];
  if ( v14 == 0 )
    goto LABEL_5;
  if ( hTarget->m_Index != v14->m_EHandle.m_Index )
    goto LABEL_5;
  m_pInstance = v14->m_pInstance;
  if ( v14->m_pInstance == 0 )
    goto LABEL_5;
  m_bIsDOTANPC = m_pInstance->m_bIsDOTANPC;
  if ( !m_bIsDOTANPC )
    goto LABEL_5;
  m_iUnitType = m_pInstance->m_iUnitType;
  if ( (m_iUnitType & 0x80u) == 0 && (m_iUnitType & 3) == 0 )
    goto LABEL_5;
  LODWORD(criteria._vptr_CResponseCriteriaSet) = -1;
  m_pEntity = m_pInstance->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v21 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LODWORD(criteria._vptr_CResponseCriteriaSet) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                                 | v21 & 0x7FFF;
  }
  if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
         &this->hAlreadyHitList,
         &criteria) < 0 )
  {
    m_Size = this->hAlreadyHitList.m_Size;
    v23 = this->hAlreadyHitList.m_Size;
    if ( m_Size == this->hAlreadyHitList.m_Memory.m_nAllocationCount )
    {
      iValueb = this->hAlreadyHitList.m_Size;
      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->hAlreadyHitList.m_Memory, 1);
      v23 = this->hAlreadyHitList.m_Size;
      m_Size = iValueb;
    }
    this->hAlreadyHitList.m_Size = v23 + 1;
    v24 = &this->hAlreadyHitList.m_Memory.m_pMemory[m_Size];
    if ( v24 != 0 )
      v24->m_Index = hTarget->m_Index;
    CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Mirana.ArrowImpact", 0.0, 0, 0);
    m_Value = m_pInstance->m_nUnitState64.m_Value;
    if ( (m_Value & 0x200) == 0 && !m_pInstance->m_bIsWaitingToSpawn.m_Value && (m_Value & 0x100) == 0 )
    {
      arrow_max_stunrange = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "arrow_max_stunrange", -1, 0);
      fLengthPct = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "arrow_min_stun", -1, 0);
      arrow_max_stun = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "arrow_max_stun", -1, 0);
      arrow_bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "arrow_bonus_damage", -1, 0);
      v26 = CEntityHandle::operator CEntityInstance *(hTarget);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v26);
      v28 = AbsOrigin->y - this->m_vStartPos.y;
      v29.m128_f32[0] = fsqrt(((AbsOrigin->x - this->m_vStartPos.x) * (AbsOrigin->x - this->m_vStartPos.x)) + (v28 * v28))
                      / arrow_max_stunrange;
      v30 = _mm_cmpge_ss(0x3F800000u, v29);
      LODWORD(v31) = _mm_andnot_ps(v30, 0x3F800000u).m128_u32[0] | v29.m128_i32[0] & v30.m128_i32[0];
      *&iValue = fLengthPct + ((arrow_max_stun - fLengthPct) * v31);
      if ( SLOBYTE(m_pInstance->m_iUnitType) >= 0 || m_pInstance->m_bIsAncient.m_Value )
      {
        fLengthPcta = (*(this->_vptr_IHandleEntity + 247))(this) + (((arrow_bonus_damage - 1.0) * v31) + 1.0);
        Caster = CDOTABaseAbility::GetCaster(this);
        ApplyDamage(Caster, m_pInstance, this, fLengthPcta, 2, 0);
      }
      else
      {
        v32 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::Kill(m_pInstance, this, v32, 0.0, 0);
      }
      if ( fabs(*&iValue - arrow_max_stun) <= 0.001 )
      {
        v49 = 0;
        if ( m_pInstance->m_bIsDOTANPC && (m_pInstance->m_iUnitType & 1) != 0 && !m_pInstance->m_bIsIllusion.m_Value )
          v49 = m_pInstance;
        v50 = CDOTABaseAbility::GetCaster(this);
        if ( v50 != 0 && (v50->m_iUnitType & 1) != 0 )
          v51 = v50;
        else
          v51 = 0;
        EconEntity_OnOwnerKillEaterEvent(
          v51,
          v49,
          kill_eater_event_t::kKillEaterEventType_Mirana_MaxStunArrows,
          1,
          INVALID_ITEM_DEF_INDEX);
      }
      KeyValues::KeyValues(&kv, "modifier_stun");
      KeyValues::SetFloat(&kv, "duration", v33);
      v34 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v34, this, "modifier_stunned", &kv, 0);
      CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
      CDOTAGamerules::GetRoshan(v62, g_pGameRules);
      if ( (v62[0] + 2) <= 1
        || (v35 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v62[0]) >> 9) & 0x3F]) == 0
        || (v36 = &v35[v62[0] & 0x1FF]) == 0
        || v62[0] != v36->m_EHandle.m_Index
        || (v37 = "roshan", m_pInstance != v36->m_pInstance) )
      {
        v37 = "no";
        if ( (m_pInstance->m_iUnitType & 1) != 0 )
          v37 = "yes";
      }
      CResponseCriteriaSet::AppendCriteria(&criteria, "arrowhithero", v37, 1.0);
      CResponseCriteriaSet::AppendCriteria(&criteria, "arrowstunduration", 1.0, v38);
      m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
      if ( m_pSpeech != 0 )
        CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 3, 0, 0, 0, 0);
      iValuea = *&iValue;
      v40 = CDOTABaseAbility::GetCaster(this);
      if ( v40->m_hOwnerEntity.m_Value.m_Index == -1 )
      {
        v41 = 0x7FFF;
        v42 = 0x7FFF;
      }
      else
      {
        v41 = v40->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
        v42 = v41;
      }
      v43 = (v40->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v41 & 0x7FFF;
      v62[0] = v43;
      if ( (v43 + 2) > 1
        && (v44 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v42 >> 9]) != 0
        && (v45 = &v44[v42 & 0x1FF]) != 0
        && v43 == v45->m_EHandle.m_Index
        && (arrow_max_stuna = v45->m_pInstance, v45->m_pInstance != 0)
        && (*(v45->m_pInstance->_vptr_IHandleEntity + 140))(v45->m_pInstance) != 0 )
      {
        v46 = arrow_max_stuna;
      }
      else
      {
        v46 = 0;
      }
      SendOverheadEventMessage(v46, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BONUS_SPELL_DAMAGE, m_pInstance, iValuea, 0);
      CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
      KeyValues::~KeyValues(&kv);
    }
    v47 = CDOTABaseAbility::GetCaster(this);
    CDOTAFogOfWarSystem::AddTempViewer(
      &g_DOTAFogOfWarSystem,
      FoWViewerType_t::FOWVIEWERTYPE_MIRANAARROW,
      v47->m_iTeamNum.m_Value,
      vLocation,
      v11,
      3.3399999,
      0);
  }
  else
  {
LABEL_5:
    m_bIsDOTANPC = 0;
    v16 = CDOTABaseAbility::GetCaster(this);
    CDOTAFogOfWarSystem::AddTempViewer(
      &g_DOTAFogOfWarSystem,
      FoWViewerType_t::FOWVIEWERTYPE_MIRANAARROW,
      v16->m_iTeamNum.m_Value,
      vLocation,
      v11,
      3.3399999,
      0);
  }
  return m_bIsDOTANPC;
}


// CDOTA_Ability_Mirana_Arrow::GetAbilityDamageToTargetOverInterval  (line 566, @0x00000000029bb670, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Mirana_Arrow::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Mirana_Arrow *const this,
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


// CDOTA_Ability_Mirana_Arrow::GetStunDuration  (line 576, @0x00000000029defb0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "arrow_min_stun", "arrow_max_stun"
float __fastcall CDOTA_Ability_Mirana_Arrow::GetStunDuration(CDOTA_Ability_Mirana_Arrow *const this)
{
  float LevelSpecialValue; // [rsp+Ch] [rbp-14h]

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "arrow_min_stun", -1, 0);
  return (CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "arrow_max_stun", -1, 0) + LevelSpecialValue) * 0.5;
}


// CDOTA_Ability_Mirana_Leap::~CDOTA_Ability_Mirana_Leap  (line 587, @0x0000000002a17600, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Mirana_Leap::~CDOTA_Ability_Mirana_Leap(CDOTA_Ability_Mirana_Leap *const this)
{
  this->_vptr_IHandleEntity = &off_435B110;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Mirana_Leap::~CDOTA_Ability_Mirana_Leap  (line 587, @0x0000000002a17620, libserver.so)  // inlines: ~CDOTA_Ability_Mirana_Leap
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Mirana_Leap::~CDOTA_Ability_Mirana_Leap(CDOTA_Ability_Mirana_Leap *const this)
{
  this->_vptr_IHandleEntity = &off_435B110;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Mirana_Leap::Schema_DynamicBinding  (line 589, @0x0000000002a0a3e0, libserver.so)
// globals: CDOTA_Ability_Mirana_Leap::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Mirana_Leap::Schema_DynamicBinding(
        const CDOTA_Ability_Mirana_Leap *const this)
{
  return CDOTA_Ability_Mirana_Leap::s_pSchemaBinding;
}


// CDOTA_Ability_Mirana_Leap::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 589, @0x0000000002a0a3f0, libserver.so)
// globals: CDOTA_Ability_Mirana_Leap::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Mirana_Leap::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Mirana_Leap::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Mirana_Leap::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Mirana_Leap::CEntityInstanceEntityClass::DestructInstance  (line 589, @0x0000000002a0a400, libserver.so)  // inlines: Destruct<CDOTA_Ability_Mirana_Leap>
void __fastcall CDOTA_Ability_Mirana_Leap::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Mirana_Leap::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Mirana_Leap::CEntityInstanceEntityClass::FreeInstance  (line 589, @0x0000000002a0a420, libserver.so)
void __fastcall CDOTA_Ability_Mirana_Leap::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Mirana_Leap::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Mirana_Leap::CEntityInstanceEntityClass::CanAllocate  (line 589, @0x0000000002a0a440, libserver.so)
bool __fastcall CDOTA_Ability_Mirana_Leap::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Mirana_Leap::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Mirana_Leap::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 589, @0x0000000002a0a450, libserver.so)
// globals: CDOTA_Ability_Mirana_Leap::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Mirana_Leap::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Mirana_Leap::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Mirana_Leap::s_pSchemaBinding;
}


// CDOTA_Ability_Mirana_Leap::CEntityInstanceEntityClass::AllocateInstance  (line 589, @0x0000000002a0fd00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Mirana_Leap::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Mirana_Leap::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Mirana_Leap::CEntityInstanceEntityClass::ConstructInstance  (line 589, @0x0000000002a143f0, libserver.so)  // inlines: CDOTA_Ability_Mirana_Leap, Construct<CDOTA_Ability_Mirana_Leap>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Mirana_Leap::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Mirana_Leap::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_435B110;
  }
  return p;
}


// CDOTA_Ability_Mirana_Leap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 589, @0x0000000002a1fa40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Mirana_Leap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Mirana_Leap::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Mirana_Leap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 589, @0x0000000002a1fa60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Mirana_Leap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Mirana_Leap::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Mirana_Leap::GetEntityClassInternal  (line 589, @0x0000000002a38480, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_Mirana_Leap"
// globals: `guard variable for'CDOTA_Ability_Mirana_Leap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_LeapClass, CDOTA_Ability_Mirana_Leap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_LeapClass, __dso_handle, CDOTA_Ability_Mirana_Leap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Mirana_Leap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_LeapClassInfo, CDOTA_Ability_Mirana_Leap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_LeapClassInfo
CEntityClass *__cdecl CDOTA_Ability_Mirana_Leap::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Mirana_Leap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_LeapClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Mirana_Leap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_LeapClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Mirana_Leap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_LeapClass);
    CDOTA_Ability_Mirana_Leap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_LeapClass._vptr_CEntityClass = off_435B090;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Mirana_Leap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_LeapClass);
    __cxa_atexit(
      CDOTA_Ability_Mirana_Leap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Mirana_Leap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_LeapClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Mirana_LeapClass != 0 )
    return &CDOTA_Ability_Mirana_Leap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_LeapClass;
  if ( `guard variable for'CDOTA_Ability_Mirana_Leap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_LeapClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Mirana_Leap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_LeapClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Mirana_Leap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_LeapClassInfo,
      "CDOTA_Ability_Mirana_Leap",
      "mirana_leap",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Mirana_Leap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_LeapClassInfo);
  }
  CDOTA_Ability_Mirana_Leap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_LeapClass.m_pClassInfo = &CDOTA_Ability_Mirana_Leap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_LeapClassInfo;
  CDOTA_Ability_Mirana_Leap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_LeapClass.m_pBaseClassInfo = CDOTA_Ability_Mirana_Leap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_LeapClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Mirana_LeapClass = &CDOTA_Ability_Mirana_Leap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_LeapClass;
  CDOTA_Ability_Mirana_Leap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_LeapClassInfo.m_pClass = &CDOTA_Ability_Mirana_Leap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_LeapClass;
  CDOTA_Ability_Mirana_Leap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_LeapClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Mirana_LeapClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Mirana_Leap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_LeapClass;
}


// CDOTA_Ability_Mirana_Leap::PlaysDefaultAnimWhenStolen  (line 595, @0x0000000002a0a460, libserver.so)
bool __fastcall CDOTA_Ability_Mirana_Leap::PlaysDefaultAnimWhenStolen(CDOTA_Ability_Mirana_Leap *const this)
{
  return 0;
}


// CDOTA_Ability_Mirana_Leap::GetStolenActivityModifier  (line 596, @0x0000000002a0a470, libserver.so)
const char *__fastcall CDOTA_Ability_Mirana_Leap::GetStolenActivityModifier(CDOTA_Ability_Mirana_Leap *const this)
{
  return "leap";
}


// CDOTA_Ability_Mirana_Leap::YouForgotToImplementOrDeclareServerClass  (line 603, @0x00000000029b57f0, libserver.so)
int __fastcall CDOTA_Ability_Mirana_Leap::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Mirana_Leap *const this)
{
  return 0;
}


// CDOTA_Ability_Mirana_Leap::GetServerClass  (line 603, @0x00000000029c99f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Mirana_Leap::GetServerClass(CDOTA_Ability_Mirana_Leap *const this)
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


// CDOTA_Ability_Mirana_Leap::OnSpellStart  (line 612, @0x00000000029b6f80, libserver.so)
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_mirana_leap"
void __fastcall CDOTA_Ability_Mirana_Leap::OnSpellStart(CDOTA_Ability_Mirana_Leap *const this)
{
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v3; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-28h]

  v5 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_mirana_leap");
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_mirana_leap", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Mirana_Leap::~CDOTA_Modifier_Mirana_Leap  (line 624, @0x0000000002a11790, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Mirana_Leap::~CDOTA_Modifier_Mirana_Leap(CDOTA_Modifier_Mirana_Leap *const this)
{
  this->_vptr_CDOTA_Buff = &off_435BBD0;
  this->_vptr_CHorizontalMotionController = &off_435BED8;
  this->_vptr_CVerticalMotionController = &off_435BF18;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Mirana_Leap::~CDOTA_Modifier_Mirana_Leap  (line 624, @0x0000000002a117c0, libserver.so)  // inlines: ~CDOTA_Modifier_Mirana_Leap
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Mirana_Leap::~CDOTA_Modifier_Mirana_Leap(CDOTA_Modifier_Mirana_Leap *const this)
{
  this->_vptr_CDOTA_Buff = &off_435BBD0;
  this->_vptr_CHorizontalMotionController = &off_435BED8;
  this->_vptr_CVerticalMotionController = &off_435BF18;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Mirana_Leap::IsPurgable  (line 636, @0x0000000002a0a480, libserver.so)
bool __fastcall CDOTA_Modifier_Mirana_Leap::IsPurgable(CDOTA_Modifier_Mirana_Leap *const this)
{
  return 0;
}


// CDOTA_Modifier_Mirana_Leap::IsHidden  (line 638, @0x0000000002a0a490, libserver.so)
bool __fastcall CDOTA_Modifier_Mirana_Leap::IsHidden(CDOTA_Modifier_Mirana_Leap *const this)
{
  return 1;
}


// CDOTA_Modifier_Mirana_Leap::IsHorizontalMotionValidToApply  (line 644, @0x0000000002a0a4a0, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Mirana_Leap::IsHorizontalMotionValidToApply(CDOTA_Modifier_Mirana_Leap *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Mirana_Leap::IsVerticalMotionValidToApply  (line 645, @0x0000000002a0a4d0, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Mirana_Leap::IsVerticalMotionValidToApply(CDOTA_Modifier_Mirana_Leap *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Mirana_Leap::IsMotionController  (line 647, @0x0000000002a0a500, libserver.so)
bool __fastcall CDOTA_Modifier_Mirana_Leap::IsMotionController(CDOTA_Modifier_Mirana_Leap *const this)
{
  return 1;
}


// CDOTA_Modifier_Mirana_Leap::OnCreated  (line 671, @0x00000000029e2fd0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, VectorAdd, VectorMultiply, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator=, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, DotaRetrieveAbilityValue<float>, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, GetPositionOnGround, FindUnitsInRadius, KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues (22 total)
// strings: "leap_distance", "leap_acceleration", "leap_radius", "modifier_mirana_leap_buff", "Ability.Leap"
// globals: CEntityHandle::gm_pEntityList
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_Modifier_Mirana_Leap::OnCreated(CDOTA_Modifier_Mirana_Leap *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTA_BaseNPC *Parent; // rbx
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // rax
  __m128i v10; // xmm3
  float v11; // r14d
  CDOTA_BaseNPC *v12; // r12
  CDOTA_BaseNPC *v13; // rax
  const Vector *v14; // rbx
  CDOTA_BaseNPC *v15; // rax
  __int64 v16; // r12
  int v17; // ebx
  CHandle<CBaseEntity> *v18; // rdx
  uint32 m_Index; // eax
  __int16 v20; // cx
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  CDOTABaseAbility *v24; // rax
  float v25; // xmm1_4
  CDOTA_BaseNPC *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  CDOTA_BaseNPC *v29; // rax
  CDOTALocomotor *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  CDOTALocomotor *v32; // rax
  __m128i v33; // xmm4
  float v34; // ebx
  CDOTA_BaseNPC *v35; // rax
  __int64 v36; // xmm0_8
  int v37; // xmm1_4
  CDOTA_BaseNPC *v38; // rax
  float v39; // xmm0_4
  float v40; // xmm2_4
  CDOTA_BaseNPC *v41; // rax
  CDOTABaseAbility *pAbility; // [rsp+28h] [rbp-98h]
  _BYTE v43[24]; // [rsp+30h] [rbp-90h] OVERLAPPED BYREF
  int v44; // [rsp+48h] [rbp-78h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+50h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v47; // [rsp+88h] [rbp-38h]
  Vector PositionOnGround; // 0:kr00_12.12

  v47 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->leap_distance, "leap_distance");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v4, &this->leap_speed, "leap_speed");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v5, &this->leap_acceleration, "leap_acceleration");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->leap_radius, "leap_radius");
  Parent = CDOTA_Buff::GetParent(this);
  v8 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
  PositionOnGround = GetPositionOnGround(AbsOrigin, Parent);
  *v10.m128i_i32 = this->leap_radius;
  *(&entities.m_Size + 1) = LODWORD(PositionOnGround.y);
  entities.m_Memory.m_pMemory = 0;
  this->m_vStartPosition.z = PositionOnGround.z;
  this->m_vStartPosition.x = PositionOnGround.x;
  entities.m_Size = 0;
  v11 = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
  this->m_vStartPosition.y = *(&entities.m_Size + 1);
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v12 = CDOTA_Buff::GetParent(this);
  v13 = CDOTA_Buff::GetParent(this);
  v14 = CBaseEntity::GetAbsOrigin(v13);
  v15 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v15->m_iTeamNum.m_Value, v14, v12, v11, &entities, 1, 19, 16, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v16 = 0;
    v17 = 0;
    do
    {
      while ( 1 )
      {
        v18 = &entities.m_Memory.m_pMemory[v16];
        m_Index = entities.m_Memory.m_pMemory[v16].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v20 = v18->m_Index;
          v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v18->m_Index) >> 9) & 0x3F];
          if ( v21 != 0 )
          {
            v22 = &v21[v20 & 0x1FF];
            if ( v22 != 0 && m_Index == v22->m_EHandle.m_Index )
            {
              m_pInstance = v22->m_pInstance;
              if ( v22->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                break;
            }
          }
        }
        ++v17;
        ++v16;
        if ( entities.m_Size <= v17 )
          goto LABEL_11;
      }
      KeyValues::KeyValues(&kv, "modifier_mirana_leap_buff");
      v24 = CDOTA_Buff::GetAbility(this);
      CDOTABaseAbility::GetDuration(v24);
      KeyValues::SetFloat(&kv, "duration", v25);
      pAbility = CDOTA_Buff::GetAbility(this);
      v26 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v26, pAbility, "modifier_mirana_leap_buff", &kv, 0);
      ++v17;
      ++v16;
      KeyValues::~KeyValues(&kv);
    }
    while ( entities.m_Size > v17 );
  }
LABEL_11:
  v27 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v27, "Ability.Leap", 0.0, 0, 0);
  v28 = CDOTA_Buff::GetParent(this);
  (*(v28->_vptr_IHandleEntity + 61))(v28, &this->m_vTargetHorizontalDirection, 0, 0);
  v29 = CDOTA_Buff::GetParent(this);
  v30 = (*(v29->_vptr_IHandleEntity + 376))(v29);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v30, &this->CHorizontalMotionController, 0)
    && (v31 = CDOTA_Buff::GetParent(this),
        v32 = (*(v31->_vptr_IHandleEntity + 376))(v31),
        CDOTALocomotor::ApplyVerticalMotionController(v32, &this->CVerticalMotionController, 0)) )
  {
    *v33.m128i_i32 = this->leap_distance;
    this->m_flCurrentTimeHoriz = 0.0;
    this->m_flCurrentTimeVert = 0.0;
    this->m_bInterrupted = 0;
    v34 = COERCE_FLOAT(_mm_cvtsi128_si32(v33));
    *&v43[4] = (*v33.m128i_i32 * this->m_vTargetHorizontalDirection.y) + this->m_vStartPosition.y;
    *&v43[8] = (*v33.m128i_i32 * this->m_vTargetHorizontalDirection.z) + this->m_vStartPosition.z;
    *v43 = (*v33.m128i_i32 * this->m_vTargetHorizontalDirection.x) + this->m_vStartPosition.x;
    v35 = CDOTA_Buff::GetParent(this);
    CGridNavBase::ClampToWorldEdge(&g_GridNav, v35, *v43);
    *&v43[16] = v36;
    v44 = v37;
    v38 = CDOTA_Buff::GetParent(this);
    v39 = GetGroundHeight(&v43[16], v38) - this->m_vStartPosition.z;
    v40 = v34 / this->leap_speed;
    this->m_flTotalTime = v40;
    this->m_flInitialVelocity = (v39 / v40) + ((0.5 * this->leap_acceleration) * v40);
    v41 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::StartGesture(v41, 1518, 0.40000001, 0.2, 3, 0, 1.0);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Modifier_Mirana_Leap::UpdateHorizontalMotion  (line 733, @0x00000000029babb0, libserver.so)  // inlines: VectorAdd, VectorMultiply, operator*, operator+
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::IsLeashedMovementPrevented, CBaseEntity::SetAbsOrigin
void __fastcall CDOTA_Modifier_Mirana_Leap::UpdateHorizontalMotion(
        CDOTA_Modifier_Mirana_Leap *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  float v5; // xmm0_4
  float m_flTotalTime; // xmm1_4
  float leap_speed; // xmm1_4
  unsigned int v8; // xmm3_4
  vec_t v9; // xmm2_4
  unsigned int v10; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v12; // rax
  Vector vNewLocation; // [rsp+0h] [rbp-20h] BYREF

  v5 = a3 + this->m_flCurrentTimeHoriz;
  m_flTotalTime = this->m_flTotalTime;
  this->m_flCurrentTimeHoriz = v5;
  if ( v5 > m_flTotalTime )
  {
    this->m_flCurrentTimeHoriz = m_flTotalTime;
    v5 = m_flTotalTime;
  }
  leap_speed = this->leap_speed;
  *&v8 = ((this->m_vTargetHorizontalDirection.y * leap_speed) * v5) + this->m_vStartPosition.y;
  v9 = ((this->m_vTargetHorizontalDirection.z * leap_speed) * v5) + this->m_vStartPosition.z;
  *&v10 = ((leap_speed * this->m_vTargetHorizontalDirection.x) * v5) + this->m_vStartPosition.x;
  vNewLocation.z = v9;
  *&vNewLocation.x = __PAIR64__(v8, v10);
  Parent = CDOTA_Buff::GetParent(this);
  v12 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  if ( !CDOTALocomotor::IsLeashedMovementPrevented(v12, *&vNewLocation.x) )
    CBaseEntity::SetAbsOrigin(me, &vNewLocation);
}


// CDOTA_Modifier_Mirana_Leap::UpdateVerticalMotion  (line 754, @0x00000000029b97b0, libserver.so)  // inlines: Square<float>
// calls: CBaseEntity::GetAbsOrigin, CBaseEntity::SetAbsOrigin, CDOTA_Buff::Destroy, CDOTA_Buff::GetParent, CDOTA_BaseNPC::StartGesture, GetGroundHeight
void __fastcall CDOTA_Modifier_Mirana_Leap::UpdateVerticalMotion(
        CDOTA_Modifier_Mirana_Leap *const this,
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
  CDOTA_BaseNPC *Parent; // rax
  const Vector *v16; // rax
  float v17; // xmm1_4
  float leap_acceleration; // xmm3_4
  float m_flInitialVelocity; // xmm2_4
  CDOTA_BaseNPC *v20; // rax
  float GroundHeight; // xmm0_4
  Vector vNewPos; // [rsp+0h] [rbp-30h] BYREF

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
    v13 = -0.5 * this->leap_acceleration;
    v14 = m_flCurrentTimeVert * this->m_flInitialVelocity;
    *&vNewPos.x = *&AbsOrigin->x;
    vNewPos.z = ((v13 * v12) + this->m_vStartPosition.z) + v14;
    CBaseEntity::SetAbsOrigin(me, &vNewPos);
    if ( v9 != 0 )
    {
      CDOTA_Buff::Destroy(this, 0, 0, 0);
      Parent = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::StartGesture(Parent, 1544, 0.2, 0.2, 3, 0, 1.0);
    }
  }
  else
  {
    v16 = CBaseEntity::GetAbsOrigin(me);
    v17 = this->m_flCurrentTimeVert;
    leap_acceleration = this->leap_acceleration;
    m_flInitialVelocity = this->m_flInitialVelocity;
    *&vNewPos.x = *&v16->x;
    vNewPos.z = (((-0.5 * leap_acceleration) * (v17 * v17)) + this->m_vStartPosition.z) + (v17 * m_flInitialVelocity);
    if ( (m_flInitialVelocity - (v17 * leap_acceleration)) < 0.0 )
    {
      v20 = CDOTA_Buff::GetParent(this);
      GroundHeight = GetGroundHeight(&vNewPos, v20);
      if ( GroundHeight >= vNewPos.z )
      {
        vNewPos.z = GroundHeight;
        CDOTA_Buff::Destroy(this, 0, 0, 0);
      }
    }
    CBaseEntity::SetAbsOrigin(me, &vNewPos);
  }
}


// CDOTA_Modifier_Mirana_Leap::OnHorizontalMotionInterrupted  (line 804, @0x00000000029ba950, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Modifier_Mirana_Leap::OnHorizontalMotionInterrupted(CDOTA_Modifier_Mirana_Leap *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  this->m_bInterrupted = 1;
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveGesture(Parent, 1518);
}


// CDOTA_Modifier_Mirana_Leap::OnVerticalMotionInterrupted  (line 814, @0x00000000029b7c10, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Mirana_Leap::OnVerticalMotionInterrupted(CDOTA_Modifier_Mirana_Leap *const this)
{
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Mirana_Leap::OnDestroy  (line 823, @0x00000000029ba980, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController, CDOTALocomotor::RemoveVerticalMotionController, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Modifier_Mirana_Leap::OnDestroy(CDOTA_Modifier_Mirana_Leap *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTALocomotor *v5; // rax
  CDOTA_BaseNPC *v6; // rax

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveHorizontalMotionController(v3, &this->CHorizontalMotionController);
  v4 = CDOTA_Buff::GetParent(this);
  v5 = (*(v4->_vptr_IHandleEntity + 376))(v4);
  CDOTALocomotor::RemoveVerticalMotionController(v5, &this->CVerticalMotionController);
  v6 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveGesture(v6, 1518);
}


// CDOTA_Modifier_Mirana_Leap_Buff::~CDOTA_Modifier_Mirana_Leap_Buff  (line 837, @0x0000000002a11740, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Mirana_Leap_Buff::~CDOTA_Modifier_Mirana_Leap_Buff(
        CDOTA_Modifier_Mirana_Leap_Buff *const this)
{
  this->_vptr_CDOTA_Buff = &off_435BF90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Mirana_Leap_Buff::~CDOTA_Modifier_Mirana_Leap_Buff  (line 837, @0x0000000002a11760, libserver.so)  // inlines: ~CDOTA_Modifier_Mirana_Leap_Buff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Mirana_Leap_Buff::~CDOTA_Modifier_Mirana_Leap_Buff(
        CDOTA_Modifier_Mirana_Leap_Buff *const this)
{
  this->_vptr_CDOTA_Buff = &off_435BF90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Mirana_Leap_Buff::OnCreated  (line 859, @0x00000000029f8b70, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName
// strings: "leap_speedbonus", "leap_speedbonus_as", "special_bonus_unique_mirana_1"
void __fastcall CDOTA_Modifier_Mirana_Leap_Buff::OnCreated(CDOTA_Modifier_Mirana_Leap_Buff *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->leap_speedbonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "leap_speedbonus", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->leap_speedbonus_as = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "leap_speedbonus_as", -1, 0);
      goto LABEL_4;
    }
  }
  else
  {
    this->leap_speedbonus = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->leap_speedbonus_as = 0;
LABEL_4:
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_mirana_1", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->leap_speedbonus_as += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
}


// CDOTA_Modifier_Mirana_Leap_Buff::OnRefresh  (line 873, @0x00000000029f8c50, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName
// strings: "leap_speedbonus", "leap_speedbonus_as", "special_bonus_unique_mirana_1"
void __fastcall CDOTA_Modifier_Mirana_Leap_Buff::OnRefresh(CDOTA_Modifier_Mirana_Leap_Buff *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->leap_speedbonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "leap_speedbonus", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->leap_speedbonus_as = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "leap_speedbonus_as", -1, 0);
      goto LABEL_4;
    }
  }
  else
  {
    this->leap_speedbonus = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->leap_speedbonus_as = 0;
LABEL_4:
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_mirana_1", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->leap_speedbonus_as += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
}


// CDOTA_Modifier_Mirana_Leap_Buff::DeclareFunctions  (line 887, @0x00000000029b5800, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Mirana_Leap_Buff::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Mirana_Leap_Buff::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Mirana_Leap_Buff::DeclareFunctions(CDOTA_Modifier_Mirana_Leap_Buff *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Mirana_Leap_Buff::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Mirana_Leap_Buff::GetModifierAttackSpeedBonus_Constant;
}


// CDOTA_Modifier_Mirana_Leap_Buff::GetModifierMoveSpeedBonus_Percentage  (line 895, @0x00000000029b5840, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Mirana_Leap_Buff::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Mirana_Leap_Buff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->leap_speedbonus;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Mirana_Leap_Buff::GetModifierAttackSpeedBonus_Constant  (line 902, @0x00000000029b5860, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Mirana_Leap_Buff::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Mirana_Leap_Buff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->leap_speedbonus_as;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Mirana_MoonlightShadow::~CDOTA_Ability_Mirana_MoonlightShadow  (line 913, @0x0000000002a17650, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Mirana_MoonlightShadow::~CDOTA_Ability_Mirana_MoonlightShadow(
        CDOTA_Ability_Mirana_MoonlightShadow *const this)
{
  this->_vptr_IHandleEntity = &off_435C2F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Mirana_MoonlightShadow::~CDOTA_Ability_Mirana_MoonlightShadow  (line 913, @0x0000000002a17670, libserver.so)  // inlines: ~CDOTA_Ability_Mirana_MoonlightShadow
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Mirana_MoonlightShadow::~CDOTA_Ability_Mirana_MoonlightShadow(
        CDOTA_Ability_Mirana_MoonlightShadow *const this)
{
  this->_vptr_IHandleEntity = &off_435C2F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Mirana_MoonlightShadow::Schema_DynamicBinding  (line 915, @0x0000000002a0a510, libserver.so)
// globals: CDOTA_Ability_Mirana_MoonlightShadow::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Mirana_MoonlightShadow::Schema_DynamicBinding(
        const CDOTA_Ability_Mirana_MoonlightShadow *const this)
{
  return CDOTA_Ability_Mirana_MoonlightShadow::s_pSchemaBinding;
}


// CDOTA_Ability_Mirana_MoonlightShadow::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 915, @0x0000000002a0a520, libserver.so)
// globals: CDOTA_Ability_Mirana_MoonlightShadow::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Mirana_MoonlightShadow::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Mirana_MoonlightShadow::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Mirana_MoonlightShadow::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Mirana_MoonlightShadow::CEntityInstanceEntityClass::DestructInstance  (line 915, @0x0000000002a0a530, libserver.so)  // inlines: Destruct<CDOTA_Ability_Mirana_MoonlightShadow>
void __fastcall CDOTA_Ability_Mirana_MoonlightShadow::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Mirana_MoonlightShadow::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Mirana_MoonlightShadow::CEntityInstanceEntityClass::FreeInstance  (line 915, @0x0000000002a0a550, libserver.so)
void __fastcall CDOTA_Ability_Mirana_MoonlightShadow::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Mirana_MoonlightShadow::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Mirana_MoonlightShadow::CEntityInstanceEntityClass::CanAllocate  (line 915, @0x0000000002a0a570, libserver.so)
bool __fastcall CDOTA_Ability_Mirana_MoonlightShadow::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Mirana_MoonlightShadow::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Mirana_MoonlightShadow::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 915, @0x0000000002a0a580, libserver.so)
// globals: CDOTA_Ability_Mirana_MoonlightShadow::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Mirana_MoonlightShadow::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Mirana_MoonlightShadow::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Mirana_MoonlightShadow::s_pSchemaBinding;
}


// CDOTA_Ability_Mirana_MoonlightShadow::CEntityInstanceEntityClass::AllocateInstance  (line 915, @0x0000000002a0fd40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Mirana_MoonlightShadow::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Mirana_MoonlightShadow::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Mirana_MoonlightShadow::CEntityInstanceEntityClass::ConstructInstance  (line 915, @0x0000000002a14420, libserver.so)  // inlines: CDOTA_Ability_Mirana_MoonlightShadow, Construct<CDOTA_Ability_Mirana_MoonlightShadow>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Mirana_MoonlightShadow::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Mirana_MoonlightShadow::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_435C2F0;
  }
  return p;
}


// CDOTA_Ability_Mirana_MoonlightShadow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 915, @0x0000000002a1fa90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Mirana_MoonlightShadow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Mirana_MoonlightShadow::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Mirana_MoonlightShadow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 915, @0x0000000002a1fab0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Mirana_MoonlightShadow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Mirana_MoonlightShadow::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Mirana_MoonlightShadow::GetEntityClassInternal  (line 915, @0x0000000002a385d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "mirana_invis", "CDOTA_Ability_Mirana_MoonlightShadow"
// globals: `guard variable for'CDOTA_Ability_Mirana_MoonlightShadow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_MoonlightShadowClass, CDOTA_Ability_Mirana_MoonlightShadow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_MoonlightShadowClass, __dso_handle, CDOTA_Ability_Mirana_MoonlightShadow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Mirana_MoonlightShadow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_MoonlightShadowClassInfo, CDOTA_Ability_Mirana_MoonlightShadow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_MoonlightShadowClassInfo
CEntityClass *__cdecl CDOTA_Ability_Mirana_MoonlightShadow::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Mirana_MoonlightShadow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_MoonlightShadowClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Mirana_MoonlightShadow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_MoonlightShadowClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Mirana_MoonlightShadow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_MoonlightShadowClass);
    CDOTA_Ability_Mirana_MoonlightShadow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_MoonlightShadowClass._vptr_CEntityClass = off_435C270;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Mirana_MoonlightShadow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_MoonlightShadowClass);
    __cxa_atexit(
      CDOTA_Ability_Mirana_MoonlightShadow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Mirana_MoonlightShadow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_MoonlightShadowClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Mirana_MoonlightShadowClass != 0 )
    return &CDOTA_Ability_Mirana_MoonlightShadow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_MoonlightShadowClass;
  if ( `guard variable for'CDOTA_Ability_Mirana_MoonlightShadow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_MoonlightShadowClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Mirana_MoonlightShadow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_MoonlightShadowClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Mirana_MoonlightShadow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_MoonlightShadowClassInfo,
      "CDOTA_Ability_Mirana_MoonlightShadow",
      "mirana_invis",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Mirana_MoonlightShadow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_MoonlightShadowClassInfo);
  }
  CDOTA_Ability_Mirana_MoonlightShadow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_MoonlightShadowClass.m_pClassInfo = &CDOTA_Ability_Mirana_MoonlightShadow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_MoonlightShadowClassInfo;
  CDOTA_Ability_Mirana_MoonlightShadow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_MoonlightShadowClass.m_pBaseClassInfo = CDOTA_Ability_Mirana_MoonlightShadow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_MoonlightShadowClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Mirana_MoonlightShadowClass = &CDOTA_Ability_Mirana_MoonlightShadow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_MoonlightShadowClass;
  CDOTA_Ability_Mirana_MoonlightShadow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Mirana_MoonlightShadowClassInfo.m_pClass = &CDOTA_Ability_Mirana_MoonlightShadow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_MoonlightShadowClass;
  CDOTA_Ability_Mirana_MoonlightShadow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_MoonlightShadowClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Mirana_MoonlightShadowClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Mirana_MoonlightShadow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Mirana_MoonlightShadowClass;
}


// CDOTA_Ability_Mirana_MoonlightShadow::GetConceptRecipientType  (line 921, @0x0000000002a0a590, libserver.so)
int __fastcall CDOTA_Ability_Mirana_MoonlightShadow::GetConceptRecipientType(
        CDOTA_Ability_Mirana_MoonlightShadow *const this)
{
  return 2;
}


// CDOTA_Ability_Mirana_MoonlightShadow::HasInvisibility  (line 923, @0x0000000002a0a5a0, libserver.so)
bool __fastcall CDOTA_Ability_Mirana_MoonlightShadow::HasInvisibility(CDOTA_Ability_Mirana_MoonlightShadow *const this)
{
  return 1;
}


// CDOTA_Ability_Mirana_MoonlightShadow::OnAbilityPhaseStart  (line 930, @0x00000000029b8d10, libserver.so)
// calls: CDOTABaseAbility::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "particles/units/heroes/hero_mirana/mirana_moonlight_cast.vpcf", "bow_hand"
bool __fastcall CDOTA_Ability_Mirana_MoonlightShadow::OnAbilityPhaseStart(
        CDOTA_Ability_Mirana_MoonlightShadow *const this)
{
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v4; // r12
  CDOTA_ParticleManager *v5; // rax
  CDOTA_ParticleManager *v6; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_mirana/mirana_moonlight_cast.vpcf",
                      2,
                      Caster,
                      0,
                      0);
  v4 = CDOTABaseAbility::GetCaster(this);
  v5 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v5, Caster, 0, v4, 5, "bow_hand", vec3_invalid, 1);
  v6 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v6, Caster);
  return 1;
}


// CDOTA_Ability_Mirana_MoonlightShadow::OnSpellStart  (line 941, @0x00000000029dda80, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetHero, GetInstance, GetLevelSpecialValueFor<float>, GetModifier_Constant_First, GetTeamNumber, IndexToIdentity, IsListeningToEvent, IsTempestDouble, IsValid, LookupEntity, ToDOTABaseNPCHero, operator CEntityInstance*, operator[]
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::UnitEmitSound, CDOTA_ModifierManager::GetModifier_Constant_First_Internal, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::AddNewModifier, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, KeyValues::~KeyValues (14 total)
// strings: "modifier_mirana_moonlight_shadow", "fadetime", "Ability.MoonlightShadow", "modifier_monkey_king_fur_army_soldier", "modifier_monkey_king_fur_army_soldier_hidden", "particles/units/heroes/hero_mirana/mirana_moonlight_recipient.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Mirana_MoonlightShadow::OnSpellStart(CDOTA_Ability_Mirana_MoonlightShadow *const this)
{
  float v2; // xmm1_4
  float v3; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  __int64 v5; // rbx
  int v6; // r12d
  CHandle<CDOTA_BaseNPC_Hero> *v7; // rdx
  uint32 m_Index; // eax
  __int16 v9; // cx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityInstance *m_pInstance; // r13
  __int64 v13; // rax
  CDOTA_BaseNPC *v14; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  CDOTA_ParticleManager *v17; // rax
  char pMKBuff1a; // [rsp+8h] [rbp-58h]
  CDOTA_Buff *pMKBuff1; // [rsp+8h] [rbp-58h]
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_mirana_moonlight_shadow");
  KeyValues::SetFloat(&kv, "duration", v2);
  KeyValues::SetFloat(&kv, "fadetime", v3);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(Caster, "Ability.MoonlightShadow", 0.0, 0, 0);
  if ( g_HeroList.m_hHeroList.m_Size > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      while ( 1 )
      {
        v7 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v5];
        m_Index = v7->m_Index;
        if ( v7->m_Index + 2 > 1 )
        {
          v9 = v7->m_Index;
          v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_Index) >> 9) & 0x3F];
          if ( v10 != 0 )
          {
            v11 = &v10[v9 & 0x1FF];
            if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
            {
              m_pInstance = v11->m_pInstance;
              if ( v11->m_pInstance != 0
                && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
              {
                pMKBuff1a = HIBYTE(m_pInstance[7].m_CScriptComponent);
                if ( pMKBuff1a == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value
                  && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) != 0 )
                {
                  v13 = BYTE6(m_pInstance[69].m_hPrivateScope.m_hScope);
                  if ( v13 == 0xFF )
                    break;
                  if ( *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * v13) <= 0 )
                    break;
                  if ( CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
                         &m_pInstance[64].m_worldGroupId,
                         modifierfunction::MODIFIER_PROPERTY_TEMPEST_DOUBLE,
                         &CModifierParams::s_Default) != 1.0 )
                    break;
                  pMKBuff1 = CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_monkey_king_fur_army_soldier", 0);
                  if ( CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_monkey_king_fur_army_soldier_hidden", 0) == 0
                    && pMKBuff1 == 0 )
                  {
                    break;
                  }
                }
              }
            }
          }
        }
        ++v6;
        ++v5;
        if ( v6 >= g_HeroList.m_hHeroList.m_Size )
          goto LABEL_19;
      }
      v14 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v14, this, "modifier_mirana_moonlight_shadow", &kv, 0);
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_mirana/mirana_moonlight_recipient.vpcf",
                   1,
                   m_pInstance,
                   0,
                   0);
      v17 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v17, Particle);
      ++v6;
      ++v5;
    }
    while ( v6 < g_HeroList.m_hHeroList.m_Size );
  }
LABEL_19:
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Mirana_MoonlightShadow::~CDOTA_Modifier_Mirana_MoonlightShadow  (line 982, @0x0000000002a12ef0, libserver.so)  // inlines: ~CDOTA_Modifier_PersistentInvisibility
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Mirana_MoonlightShadow::~CDOTA_Modifier_Mirana_MoonlightShadow(
        CDOTA_Modifier_Mirana_MoonlightShadow *const this)
{
  this->_vptr_CDOTA_Buff = &off_411D6D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Mirana_MoonlightShadow::~CDOTA_Modifier_Mirana_MoonlightShadow  (line 982, @0x0000000002a12f10, libserver.so)  // inlines: ~CDOTA_Modifier_Mirana_MoonlightShadow, ~CDOTA_Modifier_PersistentInvisibility
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Mirana_MoonlightShadow::~CDOTA_Modifier_Mirana_MoonlightShadow(
        CDOTA_Modifier_Mirana_MoonlightShadow *const this)
{
  this->_vptr_CDOTA_Buff = &off_411D6D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Mirana_MoonlightShadow::IsHidden  (line 987, @0x0000000002a0a5b0, libserver.so)
bool __fastcall CDOTA_Modifier_Mirana_MoonlightShadow::IsHidden(CDOTA_Modifier_Mirana_MoonlightShadow *const this)
{
  return 0;
}


// CDOTA_Modifier_Mirana_MoonlightShadow::GetEffectName  (line 988, @0x0000000002a0a5c0, libserver.so)
// strings: "particles/units/heroes/hero_mirana/mirana_moonlight_owner.vpcf"
const char *__fastcall CDOTA_Modifier_Mirana_MoonlightShadow::GetEffectName(
        CDOTA_Modifier_Mirana_MoonlightShadow *const this)
{
  return "particles/units/heroes/hero_mirana/mirana_moonlight_owner.vpcf";
}


// CDOTA_Modifier_Mirana_MoonlightShadow::GetEffectAttachType  (line 989, @0x0000000002a0a5d0, libserver.so)
int __fastcall CDOTA_Modifier_Mirana_MoonlightShadow::GetEffectAttachType(
        CDOTA_Modifier_Mirana_MoonlightShadow *const this)
{
  return 7;
}


// CDOTA_Modifier_Mirana_MoonlightShadow::ShouldUseOverheadOffset  (line 990, @0x0000000002a0a5e0, libserver.so)
bool __fastcall CDOTA_Modifier_Mirana_MoonlightShadow::ShouldUseOverheadOffset(
        CDOTA_Modifier_Mirana_MoonlightShadow *const this)
{
  return 1;
}


// CDOTA_Modifier_Mirana_MoonlightShadow::IsPurgable  (line 991, @0x0000000002a0a5f0, libserver.so)
bool __fastcall CDOTA_Modifier_Mirana_MoonlightShadow::IsPurgable(CDOTA_Modifier_Mirana_MoonlightShadow *const this)
{
  return 0;
}


