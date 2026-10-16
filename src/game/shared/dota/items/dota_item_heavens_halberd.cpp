// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_heavens_halberd.cpp:27
class CDOTA_Item_Recipe_HeavensHalberd : public CDOTA_Item {
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
	CDOTA_Item_Recipe_HeavensHalberd(CDOTA_Item_Recipe_HeavensHalberd &);
	CDOTA_Item_Recipe_HeavensHalberd(CDOTA_Item_Recipe_HeavensHalberd &);
	CDOTA_Item_Recipe_HeavensHalberd();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_HeavensHalberd();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_heavens_halberd.cpp:40
class CDOTA_Item_HeavensHalberd : public CDOTA_Item {
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
	CDOTA_Item_HeavensHalberd(CDOTA_Item_HeavensHalberd &);
	CDOTA_Item_HeavensHalberd(CDOTA_Item_HeavensHalberd &);
	CDOTA_Item_HeavensHalberd();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual ~CDOTA_Item_HeavensHalberd();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_heavens_halberd.cpp:82
class CDOTA_Modifier_Item_HeavensHalberd : public CDOTA_Buff_Item {
public:

private:

	int bonus_strength;  // +0xba8
	int bonus_damage;  // +0xbac
	int maim_chance;  // +0xbb0
	float maim_duration;  // +0xbb4
	int bonus_evasion;  // +0xbb8
	CDOTA_Modifier_Item_HeavensHalberd();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierEvasion_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_HeavensHalberd();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 3008
};

// src/game/shared/dota/items/dota_item_heavens_halberd.cpp:179
class CDOTA_Modifier_HeavensHalberd_Maim : public CDOTA_Buff {
public:

private:

	int maim_slow_movement;  // +0xba8
	int maim_slow_attack;  // +0xbac
	int maim_slow_movement_range;  // +0xbb0
	int maim_slow_attack_range;  // +0xbb4
	CDOTA_Modifier_HeavensHalberd_Maim();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual bool IsDebuff();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_HeavensHalberd_Maim();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[12] IsDebuff
	// vtable[67] GetEffectName
	// sizeof = 3000
};

// src/game/shared/dota/items/dota_item_heavens_halberd.cpp:234
class CDOTA_Modifier_HeavensHalberd_Debuff : public CDOTA_Buff {
public:

	CDOTA_Modifier_HeavensHalberd_Debuff();
	virtual bool IsPurgable();
	virtual bool IsDebuff();
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual bool ShouldUseOverheadOffset();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_HeavensHalberd_Debuff();

	// vtable[14] IsPurgable
	// vtable[12] IsDebuff
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[69] ShouldUseOverheadOffset
	// vtable[5] CheckState
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_HeavensHalberd::~CDOTA_Item_Recipe_HeavensHalberd  (line 27, @0x0000000002da21c0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_HeavensHalberd::~CDOTA_Item_Recipe_HeavensHalberd(
        CDOTA_Item_Recipe_HeavensHalberd *const this)
{
  this->_vptr_IHandleEntity = &off_46F3770;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_HeavensHalberd::~CDOTA_Item_Recipe_HeavensHalberd  (line 27, @0x0000000002da21e0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_HeavensHalberd
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_HeavensHalberd::~CDOTA_Item_Recipe_HeavensHalberd(
        CDOTA_Item_Recipe_HeavensHalberd *const this)
{
  this->_vptr_IHandleEntity = &off_46F3770;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_HeavensHalberd::Schema_DynamicBinding  (line 29, @0x0000000002d9f970, libserver.so)
// globals: CDOTA_Item_Recipe_HeavensHalberd::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_HeavensHalberd::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_HeavensHalberd *const this)
{
  return CDOTA_Item_Recipe_HeavensHalberd::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_HeavensHalberd::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002d9f980, libserver.so)
// globals: CDOTA_Item_Recipe_HeavensHalberd::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_HeavensHalberd::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_HeavensHalberd::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_HeavensHalberd::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_HeavensHalberd::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002d9f990, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_HeavensHalberd>
void __fastcall CDOTA_Item_Recipe_HeavensHalberd::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_HeavensHalberd::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_HeavensHalberd::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002d9f9b0, libserver.so)
void __fastcall CDOTA_Item_Recipe_HeavensHalberd::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_HeavensHalberd::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_HeavensHalberd::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002d9f9d0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_HeavensHalberd::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_HeavensHalberd::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_HeavensHalberd::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002d9f9e0, libserver.so)
// globals: CDOTA_Item_Recipe_HeavensHalberd::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_HeavensHalberd::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_HeavensHalberd::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_HeavensHalberd::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_HeavensHalberd::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002da0a30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_HeavensHalberd::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_HeavensHalberd::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_HeavensHalberd::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002da18e0, libserver.so)  // inlines: CDOTA_Item_Recipe_HeavensHalberd, Construct<CDOTA_Item_Recipe_HeavensHalberd>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_HeavensHalberd::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_HeavensHalberd::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46F3770;
  }
  return p;
}


// CDOTA_Item_Recipe_HeavensHalberd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002da4120, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_HeavensHalberd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_HeavensHalberd::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_HeavensHalberd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002da4140, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_HeavensHalberd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_HeavensHalberd::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_HeavensHalberd::GetEntityClassInternal  (line 29, @0x0000000002daa440, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_03.cpp
// strings: "item_recipe_heavens_halberd", "CDOTA_Item_Recipe_HeavensHalberd"
// globals: `guard variable for'CDOTA_Item_Recipe_HeavensHalberd::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeavensHalberdClass, CDOTA_Item_Recipe_HeavensHalberd::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeavensHalberdClass, __dso_handle, CDOTA_Item_Recipe_HeavensHalberd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_HeavensHalberd::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HeavensHalberdClassInfo, CDOTA_Item_Recipe_HeavensHalberd::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HeavensHalberdClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_HeavensHalberd::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_HeavensHalberd::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeavensHalberdClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_HeavensHalberd::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeavensHalberdClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_HeavensHalberd::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeavensHalberdClass);
    CDOTA_Item_Recipe_HeavensHalberd::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeavensHalberdClass._vptr_CEntityClass = off_46F36F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_HeavensHalberd::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeavensHalberdClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_HeavensHalberd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_HeavensHalberd::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeavensHalberdClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_HeavensHalberdClass != 0 )
    return &CDOTA_Item_Recipe_HeavensHalberd::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeavensHalberdClass;
  if ( `guard variable for'CDOTA_Item_Recipe_HeavensHalberd::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HeavensHalberdClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_HeavensHalberd::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HeavensHalberdClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_HeavensHalberd::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HeavensHalberdClassInfo,
      "CDOTA_Item_Recipe_HeavensHalberd",
      "item_recipe_heavens_halberd",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_HeavensHalberd::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HeavensHalberdClassInfo);
  }
  CDOTA_Item_Recipe_HeavensHalberd::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeavensHalberdClass.m_pClassInfo = &CDOTA_Item_Recipe_HeavensHalberd::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HeavensHalberdClassInfo;
  CDOTA_Item_Recipe_HeavensHalberd::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeavensHalberdClass.m_pBaseClassInfo = CDOTA_Item_Recipe_HeavensHalberd::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HeavensHalberdClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_HeavensHalberdClass = &CDOTA_Item_Recipe_HeavensHalberd::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeavensHalberdClass;
  CDOTA_Item_Recipe_HeavensHalberd::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_HeavensHalberdClassInfo.m_pClass = &CDOTA_Item_Recipe_HeavensHalberd::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeavensHalberdClass;
  CDOTA_Item_Recipe_HeavensHalberd::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeavensHalberdClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_HeavensHalberdClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_HeavensHalberd::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_HeavensHalberdClass;
}


// CDOTA_Item_HeavensHalberd::~CDOTA_Item_HeavensHalberd  (line 40, @0x0000000002da2210, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_HeavensHalberd::~CDOTA_Item_HeavensHalberd(CDOTA_Item_HeavensHalberd *const this)
{
  this->_vptr_IHandleEntity = &off_46F4370;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_HeavensHalberd::~CDOTA_Item_HeavensHalberd  (line 40, @0x0000000002da2230, libserver.so)  // inlines: ~CDOTA_Item_HeavensHalberd
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_HeavensHalberd::~CDOTA_Item_HeavensHalberd(CDOTA_Item_HeavensHalberd *const this)
{
  this->_vptr_IHandleEntity = &off_46F4370;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_HeavensHalberd::Schema_DynamicBinding  (line 42, @0x0000000002d9f9f0, libserver.so)
// globals: CDOTA_Item_HeavensHalberd::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_HeavensHalberd::Schema_DynamicBinding(
        const CDOTA_Item_HeavensHalberd *const this)
{
  return CDOTA_Item_HeavensHalberd::s_pSchemaBinding;
}


// CDOTA_Item_HeavensHalberd::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 42, @0x0000000002d9fa00, libserver.so)
// globals: CDOTA_Item_HeavensHalberd::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_HeavensHalberd::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_HeavensHalberd::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_HeavensHalberd::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_HeavensHalberd::CEntityInstanceEntityClass::DestructInstance  (line 42, @0x0000000002d9fa10, libserver.so)  // inlines: Destruct<CDOTA_Item_HeavensHalberd>
void __fastcall CDOTA_Item_HeavensHalberd::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_HeavensHalberd::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_HeavensHalberd::CEntityInstanceEntityClass::FreeInstance  (line 42, @0x0000000002d9fa30, libserver.so)
void __fastcall CDOTA_Item_HeavensHalberd::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_HeavensHalberd::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_HeavensHalberd::CEntityInstanceEntityClass::CanAllocate  (line 42, @0x0000000002d9fa50, libserver.so)
bool __fastcall CDOTA_Item_HeavensHalberd::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_HeavensHalberd::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_HeavensHalberd::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 42, @0x0000000002d9fa60, libserver.so)
// globals: CDOTA_Item_HeavensHalberd::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_HeavensHalberd::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_HeavensHalberd::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_HeavensHalberd::s_pSchemaBinding;
}


// CDOTA_Item_HeavensHalberd::CEntityInstanceEntityClass::AllocateInstance  (line 42, @0x0000000002da0a70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_HeavensHalberd::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_HeavensHalberd::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_HeavensHalberd::CEntityInstanceEntityClass::ConstructInstance  (line 42, @0x0000000002da1910, libserver.so)  // inlines: CDOTA_Item_HeavensHalberd, Construct<CDOTA_Item_HeavensHalberd>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_HeavensHalberd::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_HeavensHalberd::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46F4370;
  }
  return p;
}


// CDOTA_Item_HeavensHalberd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 42, @0x0000000002da4170, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_HeavensHalberd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_HeavensHalberd::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_HeavensHalberd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 42, @0x0000000002da4190, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_HeavensHalberd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_HeavensHalberd::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_HeavensHalberd::GetEntityClassInternal  (line 42, @0x0000000002daa590, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_03.cpp
// strings: "CDOTA_Item_HeavensHalberd"
// globals: `guard variable for'CDOTA_Item_HeavensHalberd::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeavensHalberdClass, CDOTA_Item_HeavensHalberd::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeavensHalberdClass, __dso_handle, CDOTA_Item_HeavensHalberd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_HeavensHalberd::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HeavensHalberdClassInfo, CDOTA_Item_HeavensHalberd::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HeavensHalberdClassInfo
CEntityClass *__cdecl CDOTA_Item_HeavensHalberd::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_HeavensHalberd::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeavensHalberdClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_HeavensHalberd::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeavensHalberdClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_HeavensHalberd::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeavensHalberdClass);
    CDOTA_Item_HeavensHalberd::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeavensHalberdClass._vptr_CEntityClass = off_46F42F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_HeavensHalberd::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeavensHalberdClass);
    __cxa_atexit(
      CDOTA_Item_HeavensHalberd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_HeavensHalberd::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeavensHalberdClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_HeavensHalberdClass != 0 )
    return &CDOTA_Item_HeavensHalberd::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeavensHalberdClass;
  if ( `guard variable for'CDOTA_Item_HeavensHalberd::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HeavensHalberdClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_HeavensHalberd::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HeavensHalberdClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_HeavensHalberd::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HeavensHalberdClassInfo,
      "CDOTA_Item_HeavensHalberd",
      "item_heavens_halberd",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_HeavensHalberd::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HeavensHalberdClassInfo);
  }
  CDOTA_Item_HeavensHalberd::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeavensHalberdClass.m_pClassInfo = &CDOTA_Item_HeavensHalberd::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HeavensHalberdClassInfo;
  CDOTA_Item_HeavensHalberd::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeavensHalberdClass.m_pBaseClassInfo = CDOTA_Item_HeavensHalberd::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HeavensHalberdClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_HeavensHalberdClass = &CDOTA_Item_HeavensHalberd::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeavensHalberdClass;
  CDOTA_Item_HeavensHalberd::GetEntityClassInfo(void)::g_EntityCDOTA_Item_HeavensHalberdClassInfo.m_pClass = &CDOTA_Item_HeavensHalberd::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeavensHalberdClass;
  CDOTA_Item_HeavensHalberd::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeavensHalberdClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_HeavensHalberdClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_HeavensHalberd::GetEntityClassInternal(void)::g_EntityCDOTA_Item_HeavensHalberdClass;
}


// CDOTA_Item_HeavensHalberd::GetIntrinsicModifierName  (line 44, @0x0000000002d9fa70, libserver.so)
// strings: "modifier_item_heavens_halberd"
const char *__fastcall CDOTA_Item_HeavensHalberd::GetIntrinsicModifierName(CDOTA_Item_HeavensHalberd *const this)
{
  return "modifier_item_heavens_halberd";
}


// CDOTA_Item_HeavensHalberd::OnSpellStart  (line 56, @0x0000000002d9de90, libserver.so)  // inlines: InState, IsInvulnerable, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "disarm_range", "CDOTA_Item_HeavensHalberd::OnSpellStart", "modifier_heavens_halberd_debuff", "DOTA_Item.HeavensHalberd.Activate", "disarm_melee"
void __fastcall CDOTA_Item_HeavensHalberd::OnSpellStart(CDOTA_Item_HeavensHalberd *const this)
{
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v3; // rbx
  __int64 v4; // rax
  float v5; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "disarm_range", -1, 0);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0 )
  {
    v4 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
    if ( (v4 & 0x100) == 0 && (v4 & 0x200) == 0 && !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1) )
    {
      if ( (v3[3].m_NetworkTransmitComponent.m_PVSInfo.m_nHeadNode & 2) == 0 )
        CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "disarm_melee", -1, 0);
      KeyValues::KeyValues(&kv, "CDOTA_Item_HeavensHalberd::OnSpellStart");
      KeyValues::SetFloat(&kv, "duration", v5);
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_heavens_halberd_debuff", &kv, 0);
      DOTA_EmitSound(10, "DOTA_Item.HeavensHalberd.Activate", v3);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Modifier_Item_HeavensHalberd::~CDOTA_Modifier_Item_HeavensHalberd  (line 82, @0x0000000002da0b50, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_HeavensHalberd::~CDOTA_Modifier_Item_HeavensHalberd(
        CDOTA_Modifier_Item_HeavensHalberd *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_HeavensHalberd::~CDOTA_Modifier_Item_HeavensHalberd  (line 82, @0x0000000002da0b70, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_HeavensHalberd
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_HeavensHalberd::~CDOTA_Modifier_Item_HeavensHalberd(
        CDOTA_Modifier_Item_HeavensHalberd *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_HeavensHalberd::OnCreated  (line 110, @0x0000000002d9e5e0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "maim_chance", "maim_duration", "bonus_evasion"
void __fastcall CDOTA_Modifier_Item_HeavensHalberd::OnCreated(
        CDOTA_Modifier_Item_HeavensHalberd *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_strength = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_strength", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_strength = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_damage", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_9;
    }
  }
  this->bonus_damage = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->maim_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "maim_chance", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
LABEL_10:
    this->maim_duration = 0.0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_11;
  }
LABEL_9:
  this->maim_chance = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_10;
LABEL_5:
  this->maim_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "maim_duration", -1, 0);
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->bonus_evasion = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "bonus_evasion", -1, 0);
    return;
  }
LABEL_11:
  this->bonus_evasion = 0;
}


// CDOTA_Modifier_Item_HeavensHalberd::DeclareFunctions  (line 122, @0x0000000002d947e0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_HeavensHalberd::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_Item_HeavensHalberd::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Item_HeavensHalberd::OnAttackLanded(CModifierParams const&), CDOTA_Modifier_Item_HeavensHalberd::GetModifierEvasion_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_HeavensHalberd::DeclareFunctions(CDOTA_Modifier_Item_HeavensHalberd *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_HeavensHalberd::GetModifierBonusStats_Strength;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_HeavensHalberd::GetModifierPreAttack_BonusDamage;
  this->m_Functions[121].__pfn = CDOTA_Modifier_Item_HeavensHalberd::OnAttackLanded;
  this->m_Functions[121].__delta = 0;
  this->m_Functions[40].__pfn = CDOTA_Modifier_Item_HeavensHalberd::GetModifierEvasion_Constant;
  this->m_Functions[40].__delta = 0;
}


// CDOTA_Modifier_Item_HeavensHalberd::GetModifierEvasion_Constant  (line 130, @0x0000000002d94850, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_HeavensHalberd::GetModifierEvasion_Constant(
        CDOTA_Modifier_Item_HeavensHalberd *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_evasion;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_HeavensHalberd::GetModifierBonusStats_Strength  (line 137, @0x0000000002d94870, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_HeavensHalberd::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_HeavensHalberd *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_strength;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_HeavensHalberd::GetModifierPreAttack_BonusDamage  (line 144, @0x0000000002d94890, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_HeavensHalberd::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_HeavensHalberd *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_HeavensHalberd::OnAttackLanded  (line 150, @0x0000000002d97450, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, RollPseudoRandomPercentage, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_heavens_halberd_buff", "DOTA_Item.Maim"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_HeavensHalberd::OnAttackLanded(
        CDOTA_Modifier_Item_HeavensHalberd *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // r13
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *v13; // r15
  CDOTA_BaseNPC *v14; // rax
  CBaseEntity *v15; // r14
  int m_Id; // eax
  float v17; // xmm1_4
  CDOTABaseAbility *Ability; // rax
  KeyValues kv; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  Parent = CDOTA_Buff::GetParent(this);
  if ( RollPseudoRandomPercentage(this->maim_chance, DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_HALBRED_MAIM, Parent) )
  {
    m_Index = params->htarget.m_Index;
    if ( m_Index + 2 <= 1
      || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
      || (v7 = &v6[params->htarget.m_Index & 0x1FF]) == 0
      || m_Index != v7->m_EHandle.m_Index
      || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    v9 = params->hattacker.m_Index;
    if ( v9 + 2 > 1 )
    {
      v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
      if ( v10 != 0 )
      {
        v11 = &v10[params->hattacker.m_Index & 0x1FF];
        if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
        {
          v13 = v11->m_pInstance;
          if ( v11->m_pInstance != 0 && v13->m_bIsDOTANPC )
          {
            v14 = CDOTA_Buff::GetParent(this);
            v15 = v14;
            if ( v14 == v13 && params->nDamageCategory == 1 && m_pInstance != 0 && !v14->m_bIsIllusion.m_Value )
            {
              m_Id = m_pInstance[43].m_iszPrivateVScripts.u.m_Id;
              if ( (m_Id & 0x193) != 0 && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) == 0 && (m_Id & 0x10) == 0 )
              {
                KeyValues::KeyValues(&kv, "modifier_heavens_halberd_buff");
                KeyValues::SetFloat(&kv, "duration", v17);
                Ability = CDOTA_Buff::GetAbility(this);
                CDOTA_BaseNPC::AddNewModifier(m_pInstance, v15, Ability, "modifier_heavens_halberd_buff", &kv, 0);
                CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "DOTA_Item.Maim", 0.0, 0, 0);
                KeyValues::~KeyValues(&kv);
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_HeavensHalberd_Maim::~CDOTA_Modifier_HeavensHalberd_Maim  (line 179, @0x0000000002da0b00, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_HeavensHalberd_Maim::~CDOTA_Modifier_HeavensHalberd_Maim(
        CDOTA_Modifier_HeavensHalberd_Maim *const this)
{
  this->_vptr_CDOTA_Buff = &off_46F5250;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_HeavensHalberd_Maim::~CDOTA_Modifier_HeavensHalberd_Maim  (line 179, @0x0000000002da0b20, libserver.so)  // inlines: ~CDOTA_Modifier_HeavensHalberd_Maim
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_HeavensHalberd_Maim::~CDOTA_Modifier_HeavensHalberd_Maim(
        CDOTA_Modifier_HeavensHalberd_Maim *const this)
{
  this->_vptr_CDOTA_Buff = &off_46F5250;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_HeavensHalberd_Maim::IsDebuff  (line 186, @0x0000000002d9fa80, libserver.so)
bool __fastcall CDOTA_Modifier_HeavensHalberd_Maim::IsDebuff(CDOTA_Modifier_HeavensHalberd_Maim *const this)
{
  return 1;
}


// CDOTA_Modifier_HeavensHalberd_Maim::GetEffectName  (line 191, @0x0000000002d9fa90, libserver.so)
// strings: "particles/items2_fx/sange_maim.vpcf"
const char *__fastcall CDOTA_Modifier_HeavensHalberd_Maim::GetEffectName(
        CDOTA_Modifier_HeavensHalberd_Maim *const this)
{
  return "particles/items2_fx/sange_maim.vpcf";
}


// CDOTA_Modifier_HeavensHalberd_Maim::DeclareFunctions  (line 204, @0x0000000002d948b0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_HeavensHalberd_Maim::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_HeavensHalberd_Maim::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_HeavensHalberd_Maim::DeclareFunctions(CDOTA_Modifier_HeavensHalberd_Maim *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_HeavensHalberd_Maim::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_HeavensHalberd_Maim::GetModifierAttackSpeedBonus_Constant;
}


// CDOTA_Modifier_HeavensHalberd_Maim::OnCreated  (line 210, @0x0000000002d9cac0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "maim_slow_movement", "maim_slow_attack", "maim_slow_movement_range", "maim_slow_attack_range"
void __fastcall CDOTA_Modifier_HeavensHalberd_Maim::OnCreated(
        CDOTA_Modifier_HeavensHalberd_Maim *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->maim_slow_movement = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "maim_slow_movement", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->maim_slow_movement = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->maim_slow_attack = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "maim_slow_attack", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->maim_slow_movement_range = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->maim_slow_attack = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->maim_slow_movement_range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "maim_slow_movement_range", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->maim_slow_attack_range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "maim_slow_attack_range", -1, 0);
    return;
  }
LABEL_9:
  this->maim_slow_attack_range = 0;
}


// CDOTA_Modifier_HeavensHalberd_Maim::GetModifierMoveSpeedBonus_Percentage  (line 218, @0x0000000002d94900, libserver.so)
// calls: CDOTA_Buff::GetCaster
ModifierVariant_t __fastcall CDOTA_Modifier_HeavensHalberd_Maim::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_HeavensHalberd_Maim *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  int maim_slow_movement_range; // eax
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetCaster(this)->m_iAttackCapabilities.m_Value & 2) != 0 )
    maim_slow_movement_range = this->maim_slow_movement_range;
  else
    maim_slow_movement_range = this->maim_slow_movement;
  *v3.m128i_i32 = maim_slow_movement_range;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_HeavensHalberd_Maim::GetModifierAttackSpeedBonus_Constant  (line 223, @0x0000000002d94950, libserver.so)
// calls: CDOTA_Buff::GetCaster
ModifierVariant_t __fastcall CDOTA_Modifier_HeavensHalberd_Maim::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_HeavensHalberd_Maim *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  int maim_slow_attack_range; // eax
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetCaster(this)->m_iAttackCapabilities.m_Value & 2) != 0 )
    maim_slow_attack_range = this->maim_slow_attack_range;
  else
    maim_slow_attack_range = this->maim_slow_attack;
  *v3.m128i_i32 = maim_slow_attack_range;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_HeavensHalberd_Debuff::~CDOTA_Modifier_HeavensHalberd_Debuff  (line 234, @0x0000000002da0ab0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_HeavensHalberd_Debuff::~CDOTA_Modifier_HeavensHalberd_Debuff(
        CDOTA_Modifier_HeavensHalberd_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_46F5570;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_HeavensHalberd_Debuff::~CDOTA_Modifier_HeavensHalberd_Debuff  (line 234, @0x0000000002da0ad0, libserver.so)  // inlines: ~CDOTA_Modifier_HeavensHalberd_Debuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_HeavensHalberd_Debuff::~CDOTA_Modifier_HeavensHalberd_Debuff(
        CDOTA_Modifier_HeavensHalberd_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_46F5570;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_HeavensHalberd_Debuff::IsPurgable  (line 239, @0x0000000002d9faa0, libserver.so)
bool __fastcall CDOTA_Modifier_HeavensHalberd_Debuff::IsPurgable(CDOTA_Modifier_HeavensHalberd_Debuff *const this)
{
  return 0;
}


// CDOTA_Modifier_HeavensHalberd_Debuff::IsDebuff  (line 240, @0x0000000002d9fab0, libserver.so)
bool __fastcall CDOTA_Modifier_HeavensHalberd_Debuff::IsDebuff(CDOTA_Modifier_HeavensHalberd_Debuff *const this)
{
  return 1;
}


// CDOTA_Modifier_HeavensHalberd_Debuff::GetEffectName  (line 242, @0x0000000002d9fac0, libserver.so)
// strings: "particles/items2_fx/heavens_halberd.vpcf"
const char *__fastcall CDOTA_Modifier_HeavensHalberd_Debuff::GetEffectName(
        CDOTA_Modifier_HeavensHalberd_Debuff *const this)
{
  return "particles/items2_fx/heavens_halberd.vpcf";
}


// CDOTA_Modifier_HeavensHalberd_Debuff::GetEffectAttachType  (line 243, @0x0000000002d9fad0, libserver.so)
int __fastcall CDOTA_Modifier_HeavensHalberd_Debuff::GetEffectAttachType(
        CDOTA_Modifier_HeavensHalberd_Debuff *const this)
{
  return 7;
}


// CDOTA_Modifier_HeavensHalberd_Debuff::ShouldUseOverheadOffset  (line 244, @0x0000000002d9fae0, libserver.so)
bool __fastcall CDOTA_Modifier_HeavensHalberd_Debuff::ShouldUseOverheadOffset(
        CDOTA_Modifier_HeavensHalberd_Debuff *const this)
{
  return 1;
}


// CDOTA_Modifier_HeavensHalberd_Debuff::CheckState  (line 254, @0x0000000002d948f0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_HeavensHalberd_Debuff::CheckState(
        CDOTA_Modifier_HeavensHalberd_Debuff *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 2uLL;
  buffState->m_nDisabledStateMask &= ~2uLL;
}


