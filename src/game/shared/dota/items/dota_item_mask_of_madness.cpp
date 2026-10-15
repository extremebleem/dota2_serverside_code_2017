// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_mask_of_madness.cpp:26
class CDOTA_Item_Recipe_MaskOfMadness : public CDOTA_Item {
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
	CDOTA_Item_Recipe_MaskOfMadness(CDOTA_Item_Recipe_MaskOfMadness &);
	CDOTA_Item_Recipe_MaskOfMadness(CDOTA_Item_Recipe_MaskOfMadness &);
	CDOTA_Item_Recipe_MaskOfMadness();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_MaskOfMadness();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_mask_of_madness.cpp:37
class CDOTA_Item_MaskOfMadness : public CDOTA_Item {
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
	CDOTA_Item_MaskOfMadness(CDOTA_Item_MaskOfMadness &);
	CDOTA_Item_MaskOfMadness(CDOTA_Item_MaskOfMadness &);
	CDOTA_Item_MaskOfMadness();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual ~CDOTA_Item_MaskOfMadness();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_mask_of_madness.cpp:67
class CDOTA_Orb_MaskOfMadness : public CDOTA_Orb {
public:

private:

	int lifesteal_percent;  // +0x18
	CDOTA_Orb_MaskOfMadness(CDOTA_Orb_MaskOfMadness &);
	CDOTA_Orb_MaskOfMadness(const CDOTA_Orb_MaskOfMadness &);
	CDOTA_Orb_MaskOfMadness(CDOTA_AttackRecord *, KeyValues *, CDOTA_BaseNPC *, CDOTABaseAbility *);
	virtual const char * GetProjectileName();
	virtual int GetOrbLabel();
	virtual void OnOrbImpact(const CModifierParams &);
	virtual ~CDOTA_Orb_MaskOfMadness();

	// vtable[3] GetProjectileName
	// vtable[4] GetOrbLabel
	// vtable[8] OnOrbImpact
	// sizeof = 32
};

// src/game/shared/dota/items/dota_item_mask_of_madness.cpp:110
class CDOTA_Modifier_Item_MaskOfMadness : public CDOTA_Buff_Item {
public:

private:

	int lifesteal_percent;  // +0xba8
	int bonus_damage;  // +0xbac
	CDOTA_Modifier_Item_MaskOfMadness();
	virtual void OnCreated(KeyValues *);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual CDOTA_Orb * GetCustomOrb(CDOTA_AttackRecord *);
	virtual int GetOrbPriority(CDOTA_AttackRecord *);
	virtual int GetOrbLabel(CDOTA_AttackRecord *);
	virtual ~CDOTA_Modifier_Item_MaskOfMadness();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[49] GetCustomOrb
	// vtable[50] GetOrbPriority
	// vtable[51] GetOrbLabel
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_mask_of_madness.cpp:168
class CDOTA_Modifier_MaskOfMadness_Berserk : public CDOTA_Buff {
public:

private:

	int berserk_bonus_attack_speed;  // +0xba8
	int berserk_bonus_movement_speed;  // +0xbac
	int berserk_armor_reduction;  // +0xbb0
	CDOTA_Modifier_MaskOfMadness_Berserk();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual const char * GetEffectName();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_MaskOfMadness_Berserk();

	// vtable[5] CheckState
	// vtable[67] GetEffectName
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_MaskOfMadness::~CDOTA_Item_Recipe_MaskOfMadness  (line 26, @0x0000000002dbccc0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_MaskOfMadness::~CDOTA_Item_Recipe_MaskOfMadness(
        CDOTA_Item_Recipe_MaskOfMadness *const this)
{
  this->_vptr_IHandleEntity = &off_4712D10;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_MaskOfMadness::~CDOTA_Item_Recipe_MaskOfMadness  (line 26, @0x0000000002dbcce0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_MaskOfMadness
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_MaskOfMadness::~CDOTA_Item_Recipe_MaskOfMadness(
        CDOTA_Item_Recipe_MaskOfMadness *const this)
{
  this->_vptr_IHandleEntity = &off_4712D10;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_MaskOfMadness::Schema_DynamicBinding  (line 28, @0x0000000002db94a0, libserver.so)
// globals: CDOTA_Item_Recipe_MaskOfMadness::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_MaskOfMadness::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_MaskOfMadness *const this)
{
  return CDOTA_Item_Recipe_MaskOfMadness::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_MaskOfMadness::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002db94b0, libserver.so)
// globals: CDOTA_Item_Recipe_MaskOfMadness::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_MaskOfMadness::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_MaskOfMadness::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_MaskOfMadness::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_MaskOfMadness::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002db94c0, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_MaskOfMadness>
void __fastcall CDOTA_Item_Recipe_MaskOfMadness::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_MaskOfMadness::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_MaskOfMadness::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002db94e0, libserver.so)
void __fastcall CDOTA_Item_Recipe_MaskOfMadness::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_MaskOfMadness::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_MaskOfMadness::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002db9500, libserver.so)
bool __fastcall CDOTA_Item_Recipe_MaskOfMadness::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_MaskOfMadness::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_MaskOfMadness::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002db9510, libserver.so)
// globals: CDOTA_Item_Recipe_MaskOfMadness::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_MaskOfMadness::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_MaskOfMadness::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_MaskOfMadness::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_MaskOfMadness::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002dba980, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_MaskOfMadness::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_MaskOfMadness::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_MaskOfMadness::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002dbbbb0, libserver.so)  // inlines: CDOTA_Item_Recipe_MaskOfMadness, Construct<CDOTA_Item_Recipe_MaskOfMadness>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_MaskOfMadness::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_MaskOfMadness::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4712D10;
  }
  return p;
}


// CDOTA_Item_Recipe_MaskOfMadness::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002dbeec0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_MaskOfMadness::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_MaskOfMadness::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_MaskOfMadness::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002dbeee0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_MaskOfMadness::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_MaskOfMadness::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_MaskOfMadness::GetEntityClassInternal  (line 28, @0x0000000002dc5c40, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_04.cpp
// strings: "item_recipe_mask_of_madness", "CDOTA_Item_Recipe_MaskOfMadness"
// globals: `guard variable for'CDOTA_Item_Recipe_MaskOfMadness::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MaskOfMadnessClass, CDOTA_Item_Recipe_MaskOfMadness::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MaskOfMadnessClass, __dso_handle, CDOTA_Item_Recipe_MaskOfMadness::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_MaskOfMadness::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MaskOfMadnessClassInfo, CDOTA_Item_Recipe_MaskOfMadness::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MaskOfMadnessClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_MaskOfMadness::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_MaskOfMadness::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MaskOfMadnessClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_MaskOfMadness::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MaskOfMadnessClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_MaskOfMadness::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MaskOfMadnessClass);
    CDOTA_Item_Recipe_MaskOfMadness::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MaskOfMadnessClass._vptr_CEntityClass = off_4712C90;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_MaskOfMadness::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MaskOfMadnessClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_MaskOfMadness::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_MaskOfMadness::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MaskOfMadnessClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_MaskOfMadnessClass != 0 )
    return &CDOTA_Item_Recipe_MaskOfMadness::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MaskOfMadnessClass;
  if ( `guard variable for'CDOTA_Item_Recipe_MaskOfMadness::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MaskOfMadnessClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_MaskOfMadness::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MaskOfMadnessClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_MaskOfMadness::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MaskOfMadnessClassInfo,
      "CDOTA_Item_Recipe_MaskOfMadness",
      "item_recipe_mask_of_madness",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_MaskOfMadness::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MaskOfMadnessClassInfo);
  }
  CDOTA_Item_Recipe_MaskOfMadness::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MaskOfMadnessClass.m_pClassInfo = &CDOTA_Item_Recipe_MaskOfMadness::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MaskOfMadnessClassInfo;
  CDOTA_Item_Recipe_MaskOfMadness::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MaskOfMadnessClass.m_pBaseClassInfo = CDOTA_Item_Recipe_MaskOfMadness::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MaskOfMadnessClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_MaskOfMadnessClass = &CDOTA_Item_Recipe_MaskOfMadness::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MaskOfMadnessClass;
  CDOTA_Item_Recipe_MaskOfMadness::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_MaskOfMadnessClassInfo.m_pClass = &CDOTA_Item_Recipe_MaskOfMadness::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MaskOfMadnessClass;
  CDOTA_Item_Recipe_MaskOfMadness::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MaskOfMadnessClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_MaskOfMadnessClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_MaskOfMadness::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_MaskOfMadnessClass;
}


// CDOTA_Item_MaskOfMadness::~CDOTA_Item_MaskOfMadness  (line 37, @0x0000000002dbcd10, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_MaskOfMadness::~CDOTA_Item_MaskOfMadness(CDOTA_Item_MaskOfMadness *const this)
{
  this->_vptr_IHandleEntity = &off_4713910;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_MaskOfMadness::~CDOTA_Item_MaskOfMadness  (line 37, @0x0000000002dbcd30, libserver.so)  // inlines: ~CDOTA_Item_MaskOfMadness
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_MaskOfMadness::~CDOTA_Item_MaskOfMadness(CDOTA_Item_MaskOfMadness *const this)
{
  this->_vptr_IHandleEntity = &off_4713910;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_MaskOfMadness::Schema_DynamicBinding  (line 39, @0x0000000002db9520, libserver.so)
// globals: CDOTA_Item_MaskOfMadness::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_MaskOfMadness::Schema_DynamicBinding(
        const CDOTA_Item_MaskOfMadness *const this)
{
  return CDOTA_Item_MaskOfMadness::s_pSchemaBinding;
}


// CDOTA_Item_MaskOfMadness::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 39, @0x0000000002db9530, libserver.so)
// globals: CDOTA_Item_MaskOfMadness::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_MaskOfMadness::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_MaskOfMadness::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_MaskOfMadness::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_MaskOfMadness::CEntityInstanceEntityClass::DestructInstance  (line 39, @0x0000000002db9540, libserver.so)  // inlines: Destruct<CDOTA_Item_MaskOfMadness>
void __fastcall CDOTA_Item_MaskOfMadness::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_MaskOfMadness::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_MaskOfMadness::CEntityInstanceEntityClass::FreeInstance  (line 39, @0x0000000002db9560, libserver.so)
void __fastcall CDOTA_Item_MaskOfMadness::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_MaskOfMadness::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_MaskOfMadness::CEntityInstanceEntityClass::CanAllocate  (line 39, @0x0000000002db9580, libserver.so)
bool __fastcall CDOTA_Item_MaskOfMadness::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_MaskOfMadness::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_MaskOfMadness::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 39, @0x0000000002db9590, libserver.so)
// globals: CDOTA_Item_MaskOfMadness::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_MaskOfMadness::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_MaskOfMadness::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_MaskOfMadness::s_pSchemaBinding;
}


// CDOTA_Item_MaskOfMadness::CEntityInstanceEntityClass::AllocateInstance  (line 39, @0x0000000002dba9c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_MaskOfMadness::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_MaskOfMadness::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_MaskOfMadness::CEntityInstanceEntityClass::ConstructInstance  (line 39, @0x0000000002dbbbe0, libserver.so)  // inlines: CDOTA_Item_MaskOfMadness, Construct<CDOTA_Item_MaskOfMadness>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_MaskOfMadness::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_MaskOfMadness::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4713910;
  }
  return p;
}


// CDOTA_Item_MaskOfMadness::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002dbef10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_MaskOfMadness::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_MaskOfMadness::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_MaskOfMadness::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002dbef30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_MaskOfMadness::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_MaskOfMadness::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_MaskOfMadness::GetEntityClassInternal  (line 39, @0x0000000002dc5d90, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_04.cpp
// strings: "CDOTA_Item_MaskOfMadness"
// globals: `guard variable for'CDOTA_Item_MaskOfMadness::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaskOfMadnessClass, CDOTA_Item_MaskOfMadness::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaskOfMadnessClass, __dso_handle, CDOTA_Item_MaskOfMadness::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_MaskOfMadness::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MaskOfMadnessClassInfo, CDOTA_Item_MaskOfMadness::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MaskOfMadnessClassInfo
CEntityClass *__cdecl CDOTA_Item_MaskOfMadness::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_MaskOfMadness::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaskOfMadnessClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_MaskOfMadness::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaskOfMadnessClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_MaskOfMadness::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaskOfMadnessClass);
    CDOTA_Item_MaskOfMadness::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaskOfMadnessClass._vptr_CEntityClass = off_4713890;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_MaskOfMadness::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaskOfMadnessClass);
    __cxa_atexit(
      CDOTA_Item_MaskOfMadness::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_MaskOfMadness::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaskOfMadnessClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_MaskOfMadnessClass != 0 )
    return &CDOTA_Item_MaskOfMadness::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaskOfMadnessClass;
  if ( `guard variable for'CDOTA_Item_MaskOfMadness::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MaskOfMadnessClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_MaskOfMadness::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MaskOfMadnessClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_MaskOfMadness::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MaskOfMadnessClassInfo,
      "CDOTA_Item_MaskOfMadness",
      "item_mask_of_madness",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_MaskOfMadness::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MaskOfMadnessClassInfo);
  }
  CDOTA_Item_MaskOfMadness::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaskOfMadnessClass.m_pClassInfo = &CDOTA_Item_MaskOfMadness::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MaskOfMadnessClassInfo;
  CDOTA_Item_MaskOfMadness::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaskOfMadnessClass.m_pBaseClassInfo = CDOTA_Item_MaskOfMadness::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MaskOfMadnessClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_MaskOfMadnessClass = &CDOTA_Item_MaskOfMadness::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaskOfMadnessClass;
  CDOTA_Item_MaskOfMadness::GetEntityClassInfo(void)::g_EntityCDOTA_Item_MaskOfMadnessClassInfo.m_pClass = &CDOTA_Item_MaskOfMadness::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaskOfMadnessClass;
  CDOTA_Item_MaskOfMadness::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaskOfMadnessClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_MaskOfMadnessClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_MaskOfMadness::GetEntityClassInternal(void)::g_EntityCDOTA_Item_MaskOfMadnessClass;
}


// CDOTA_Item_MaskOfMadness::GetIntrinsicModifierName  (line 41, @0x0000000002db95a0, libserver.so)
// strings: "modifier_item_mask_of_madness"
const char *__fastcall CDOTA_Item_MaskOfMadness::GetIntrinsicModifierName(CDOTA_Item_MaskOfMadness *const this)
{
  return "modifier_item_mask_of_madness";
}


// CDOTA_Item_MaskOfMadness::OnSpellStart  (line 49, @0x0000000002db6260, libserver.so)
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_item_mask_of_madness_berserk", "berserk_duration", "DOTA_Item.MaskOfMadness.Activate"
void __fastcall CDOTA_Item_MaskOfMadness::OnSpellStart(CDOTA_Item_MaskOfMadness *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_item_mask_of_madness_berserk");
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "berserk_duration", -1, 0);
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_item_mask_of_madness_berserk", &kv, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "DOTA_Item.MaskOfMadness.Activate", v5);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Orb_MaskOfMadness::~CDOTA_Orb_MaskOfMadness  (line 67, @0x0000000002db98a0, libserver.so)  // inlines: ~CDOTA_Orb
void __fastcall CDOTA_Orb_MaskOfMadness::~CDOTA_Orb_MaskOfMadness(CDOTA_Orb_MaskOfMadness *const this)
{
  this->_vptr_CDOTA_Orb = &off_4115E90;
}


// CDOTA_Orb_MaskOfMadness::~CDOTA_Orb_MaskOfMadness  (line 67, @0x0000000002dba2c0, libserver.so)  // inlines: ~CDOTA_Orb, ~CDOTA_Orb_MaskOfMadness
// calls: operator delete
void __fastcall CDOTA_Orb_MaskOfMadness::~CDOTA_Orb_MaskOfMadness(CDOTA_Orb_MaskOfMadness *const this)
{
  this->_vptr_CDOTA_Orb = &off_4115E90;
  operator delete(this);
}


// CDOTA_Orb_MaskOfMadness::GetProjectileName  (line 77, @0x0000000002db95b0, libserver.so)
const char *__fastcall CDOTA_Orb_MaskOfMadness::GetProjectileName(CDOTA_Orb_MaskOfMadness *const this)
{
  return 0;
}


// CDOTA_Orb_MaskOfMadness::GetOrbLabel  (line 78, @0x0000000002db95c0, libserver.so)
int __fastcall CDOTA_Orb_MaskOfMadness::GetOrbLabel(CDOTA_Orb_MaskOfMadness *const this)
{
  return 2;
}


// CDOTA_Orb_MaskOfMadness::OnOrbImpact  (line 79, @0x0000000002dc1ae0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::Heal
// strings: "particles/generic_gameplay/generic_lifesteal.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Orb_MaskOfMadness::OnOrbImpact(
        CDOTA_Orb_MaskOfMadness *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  const CBaseEntity *v11; // r14
  float Health; // xmm0_4
  uint32 v13; // eax
  int lifesteal_percent; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r15d
  CDOTA_ParticleManager *v17; // rax
  CBaseEntity *v18; // rax
  float flDamagea; // [rsp+Ch] [rbp-34h]
  float flDamage; // [rsp+Ch] [rbp-34h]

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1
    || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v6 = &v5[params->hattacker.m_Index & 0x1FF]) == 0
    || m_Index != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v8 = params->htarget.m_Index;
  if ( v8 + 2 > 1 )
  {
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[params->htarget.m_Index & 0x1FF];
      if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
      {
        v11 = v10->m_pInstance;
        if ( v10->m_pInstance != 0 && v11->m_bIsDOTANPC && m_pInstance != 0 )
        {
          flDamagea = params->fDamage;
          if ( CBaseEntity::GetHealth(v10->m_pInstance) <= flDamagea )
            Health = CBaseEntity::GetHealth(v11);
          else
            Health = params->fDamage;
          v13 = v11[2].m_hEffectEntity.m_Value.m_Index;
          lifesteal_percent = this->lifesteal_percent;
          if ( (v13 & 0x10) == 0 && (v13 & 0x193) != 0 && m_pInstance->m_iTeamNum.m_Value != v11->m_iTeamNum.m_Value )
          {
            flDamage = Health;
            ParticleManager = GetParticleManager();
            Particle = CDOTA_ParticleManager::CreateParticle(
                         ParticleManager,
                         "particles/generic_gameplay/generic_lifesteal.vpcf",
                         1,
                         m_pInstance,
                         0,
                         0);
            v17 = GetParticleManager();
            CDOTA_ParticleManager::ReleaseParticleIndex(v17, Particle);
            if ( LOBYTE(v11[4].m_pfnMoveDone.__delta) == 0 && !m_pInstance->m_bIsIllusion.m_Value )
            {
              v18 = CEntityHandle::operator CEntityInstance *(&this->m_hAbility);
              CDOTA_BaseNPC::Heal(m_pInstance, ((lifesteal_percent * flDamage) / 100.0), v18, 0, 1);
            }
          }
        }
      }
    }
  }
}


// CDOTA_Modifier_Item_MaskOfMadness::~CDOTA_Modifier_Item_MaskOfMadness  (line 110, @0x0000000002dbac40, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_MaskOfMadness::~CDOTA_Modifier_Item_MaskOfMadness(
        CDOTA_Modifier_Item_MaskOfMadness *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_MaskOfMadness::~CDOTA_Modifier_Item_MaskOfMadness  (line 110, @0x0000000002dbac60, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_MaskOfMadness
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_MaskOfMadness::~CDOTA_Modifier_Item_MaskOfMadness(
        CDOTA_Modifier_Item_MaskOfMadness *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_MaskOfMadness::GetOrbPriority  (line 121, @0x0000000002db95d0, libserver.so)
int __fastcall CDOTA_Modifier_Item_MaskOfMadness::GetOrbPriority(
        CDOTA_Modifier_Item_MaskOfMadness *const this,
        CDOTA_AttackRecord *pRecord)
{
  return 2;
}


// CDOTA_Modifier_Item_MaskOfMadness::GetOrbLabel  (line 123, @0x0000000002db95e0, libserver.so)
int __fastcall CDOTA_Modifier_Item_MaskOfMadness::GetOrbLabel(
        CDOTA_Modifier_Item_MaskOfMadness *const this,
        CDOTA_AttackRecord *pRecord)
{
  return 2;
}


// CDOTA_Modifier_Item_MaskOfMadness::OnCreated  (line 135, @0x0000000002db4a40, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Item_MaskOfMadness::OnCreated(
        CDOTA_Modifier_Item_MaskOfMadness *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->lifesteal_percent = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "lifesteal_percent", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->lifesteal_percent = 0;
}


// CDOTA_Modifier_Item_MaskOfMadness::DeclareFunctions  (line 141, @0x0000000002dab660, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_MaskOfMadness::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_MaskOfMadness::DeclareFunctions(CDOTA_Modifier_Item_MaskOfMadness *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_MaskOfMadness::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_Item_MaskOfMadness::GetModifierPreAttack_BonusDamage  (line 146, @0x0000000002dab680, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_MaskOfMadness::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_MaskOfMadness *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_MaskOfMadness::GetCustomOrb  (line 153, @0x0000000002dadc20, libserver.so)  // inlines: CDOTA_Orb_MaskOfMadness, ~CDOTA_Orb
// calls: KeyValues::KeyValues, KeyValues::SetInt, CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, operator new, CDOTA_Orb::CDOTA_Orb, KeyValues::GetInt, KeyValues::~KeyValues, __stack_chk_fail, operator delete, _Unwind_Resume
// strings: "modifier_item_mask_of_madness_orb"
CDOTA_Orb *__fastcall CDOTA_Modifier_Item_MaskOfMadness::GetCustomOrb(
        CDOTA_Modifier_Item_MaskOfMadness *const this,
        CDOTA_AttackRecord *pRecord)
{
  CDOTA_BaseNPC *Caster; // r14
  CDOTABaseAbility *Ability; // r15
  CDOTA_Orb *v6; // r12
  KeyValues kv; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-38h]

  v9 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_item_mask_of_madness_orb");
  KeyValues::SetInt(&kv, "lifesteal_percent", this->lifesteal_percent);
  Caster = CDOTA_Buff::GetCaster(this);
  Ability = CDOTA_Buff::GetAbility(this);
  v6 = operator new(0x20u);
  CDOTA_Orb::CDOTA_Orb(v6, pRecord, &kv, Caster, Ability);
  v6->_vptr_CDOTA_Orb = &off_4714490;
  LODWORD(v6[1]._vptr_CDOTA_Orb) = KeyValues::GetInt(&kv, "lifesteal_percent", 0);
  KeyValues::~KeyValues(&kv);
  return v6;
}


// CDOTA_Modifier_MaskOfMadness_Berserk::~CDOTA_Modifier_MaskOfMadness_Berserk  (line 168, @0x0000000002dbb230, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_MaskOfMadness_Berserk::~CDOTA_Modifier_MaskOfMadness_Berserk(
        CDOTA_Modifier_MaskOfMadness_Berserk *const this)
{
  this->_vptr_CDOTA_Buff = &off_4714850;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_MaskOfMadness_Berserk::~CDOTA_Modifier_MaskOfMadness_Berserk  (line 168, @0x0000000002dbb250, libserver.so)  // inlines: ~CDOTA_Modifier_MaskOfMadness_Berserk
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_MaskOfMadness_Berserk::~CDOTA_Modifier_MaskOfMadness_Berserk(
        CDOTA_Modifier_MaskOfMadness_Berserk *const this)
{
  this->_vptr_CDOTA_Buff = &off_4714850;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_MaskOfMadness_Berserk::GetEffectName  (line 179, @0x0000000002db95f0, libserver.so)
// strings: "particles/items2_fx/mask_of_madness.vpcf"
const char *__fastcall CDOTA_Modifier_MaskOfMadness_Berserk::GetEffectName(
        CDOTA_Modifier_MaskOfMadness_Berserk *const this)
{
  return "particles/items2_fx/mask_of_madness.vpcf";
}


// CDOTA_Modifier_MaskOfMadness_Berserk::DeclareFunctions  (line 194, @0x0000000002dab6a0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_MaskOfMadness_Berserk::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_MaskOfMadness_Berserk::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_MaskOfMadness_Berserk::GetModifierPhysicalArmorBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_MaskOfMadness_Berserk::DeclareFunctions(
        CDOTA_Modifier_MaskOfMadness_Berserk *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_MaskOfMadness_Berserk::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[13].__pfn = CDOTA_Modifier_MaskOfMadness_Berserk::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[45].__pfn = CDOTA_Modifier_MaskOfMadness_Berserk::GetModifierPhysicalArmorBonus;
  this->m_Functions[45].__delta = 0;
}


// CDOTA_Modifier_MaskOfMadness_Berserk::OnCreated  (line 203, @0x0000000002db4d10, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "berserk_bonus_attack_speed", "berserk_bonus_movement_speed", "berserk_armor_reduction"
void __fastcall CDOTA_Modifier_MaskOfMadness_Berserk::OnCreated(
        CDOTA_Modifier_MaskOfMadness_Berserk *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

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
      goto LABEL_3;
LABEL_6:
    this->berserk_bonus_movement_speed = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->berserk_bonus_attack_speed = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->berserk_bonus_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                         v4,
                                         "berserk_bonus_movement_speed",
                                         -1,
                                         0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->berserk_armor_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "berserk_armor_reduction", -1, 0);
    return;
  }
LABEL_7:
  this->berserk_armor_reduction = 0;
}


// CDOTA_Modifier_MaskOfMadness_Berserk::GetModifierAttackSpeedBonus_Constant  (line 224, @0x0000000002dab700, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_MaskOfMadness_Berserk::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_MaskOfMadness_Berserk *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->berserk_bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_MaskOfMadness_Berserk::GetModifierMoveSpeedBonus_Percentage  (line 231, @0x0000000002dab720, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_MaskOfMadness_Berserk::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_MaskOfMadness_Berserk *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->berserk_bonus_movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_MaskOfMadness_Berserk::GetModifierPhysicalArmorBonus  (line 238, @0x0000000002dab740, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_MaskOfMadness_Berserk::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_MaskOfMadness_Berserk *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->berserk_armor_reduction;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_MaskOfMadness_Berserk::CheckState  (line 245, @0x0000000002dab760, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_MaskOfMadness_Berserk::CheckState(
        CDOTA_Modifier_MaskOfMadness_Berserk *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 8uLL;
  buffState->m_nDisabledStateMask &= ~8uLL;
}


