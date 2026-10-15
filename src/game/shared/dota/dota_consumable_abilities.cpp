// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_consumable_abilities.cpp:31
class CDOTA_Ability_Throw_Snowball : public CDOTABaseAbility {
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
	CDOTA_Ability_Throw_Snowball(CDOTA_Ability_Throw_Snowball &);
	CDOTA_Ability_Throw_Snowball(CDOTA_Ability_Throw_Snowball &);
	CDOTA_Ability_Throw_Snowball();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool OnAbilityPhaseStart();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual bool IsStealable();
	virtual bool IsCosmetic(CBaseEntity *);
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual ~CDOTA_Ability_Throw_Snowball();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[264] OnAbilityPhaseStart
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[6] Precache
	// vtable[305] IsStealable
	// vtable[219] IsCosmetic
	// vtable[256] CastFilterResult
	// sizeof = 912
};

// src/game/shared/dota/dota_consumable_abilities.cpp:50
class C_CDOTA_Ability_Throw_Snowball_MapInstall {
	C_CDOTA_Ability_Throw_Snowball_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/dota_consumable_abilities.cpp:126
class CDOTA_Ability_Throw_Coal : public CDOTABaseAbility {
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
	CDOTA_Ability_Throw_Coal(CDOTA_Ability_Throw_Coal &);
	CDOTA_Ability_Throw_Coal(CDOTA_Ability_Throw_Coal &);
	CDOTA_Ability_Throw_Coal();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool OnAbilityPhaseStart();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual bool IsStealable();
	virtual bool IsCosmetic(CBaseEntity *);
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual ~CDOTA_Ability_Throw_Coal();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[264] OnAbilityPhaseStart
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[6] Precache
	// vtable[305] IsStealable
	// vtable[219] IsCosmetic
	// vtable[256] CastFilterResult
	// sizeof = 912
};

// src/game/shared/dota/dota_consumable_abilities.cpp:145
class C_CDOTA_Ability_Throw_Coal_MapInstall {
	C_CDOTA_Ability_Throw_Coal_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/dota_consumable_abilities.cpp:220
class CDOTA_Ability_Healing_Campfire : public CDOTABaseAbility {
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
	CDOTA_Ability_Healing_Campfire(CDOTA_Ability_Healing_Campfire &);
	CDOTA_Ability_Healing_Campfire(CDOTA_Ability_Healing_Campfire &);
	CDOTA_Ability_Healing_Campfire();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool IsStealable();
	virtual bool IsCosmetic(CBaseEntity *);
	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Healing_Campfire();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[305] IsStealable
	// vtable[219] IsCosmetic
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/dota_consumable_abilities.cpp:243
class C_CDOTA_Ability_Healing_Campfire_MapInstall {
	C_CDOTA_Ability_Healing_Campfire_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/dota_consumable_abilities.cpp:280
class CDOTA_Ability_ShootFirework : public CDOTABaseAbility {
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
	CDOTA_Ability_ShootFirework(CDOTA_Ability_ShootFirework &);
	CDOTA_Ability_ShootFirework(CDOTA_Ability_ShootFirework &);
	CDOTA_Ability_ShootFirework();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Precache(const CEntityPrecacheContext *);
	virtual bool IsStealable();
	virtual bool IsCosmetic(CBaseEntity *);
	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_ShootFirework();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[6] Precache
	// vtable[305] IsStealable
	// vtable[219] IsCosmetic
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/dota_consumable_abilities.cpp:318
class CDOTA_Modifier_Healing_Campfire_Aura : public CDOTA_Buff {
public:

private:

	CDOTA_Modifier_Healing_Campfire_Aura();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual float GetAuraDuration();
	virtual bool IsHidden();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Healing_Campfire_Aura();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[83] GetAuraDuration
	// vtable[11] IsHidden
	// vtable[5] CheckState
	// sizeof = 2992
};

// src/game/shared/dota/dota_consumable_abilities.cpp:390
class CDOTA_Modifier_Healing_Campfire_Heal : public CDOTA_Buff {
public:

private:

	int heal_amount;  // +0xba8
	CDOTA_Modifier_Healing_Campfire_Heal();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPercentageHealthRegen(const CModifierParams &);
	virtual ~CDOTA_Modifier_Healing_Campfire_Heal();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Ability_Throw_Snowball::~CDOTA_Ability_Throw_Snowball  (line 31, @0x0000000002499f60, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Throw_Snowball::~CDOTA_Ability_Throw_Snowball(CDOTA_Ability_Throw_Snowball *const this)
{
  this->_vptr_IHandleEntity = &off_40DFB30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Throw_Snowball::~CDOTA_Ability_Throw_Snowball  (line 31, @0x0000000002499f80, libserver.so)  // inlines: ~CDOTA_Ability_Throw_Snowball
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Throw_Snowball::~CDOTA_Ability_Throw_Snowball(CDOTA_Ability_Throw_Snowball *const this)
{
  this->_vptr_IHandleEntity = &off_40DFB30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Throw_Snowball::Schema_DynamicBinding  (line 33, @0x00000000024977a0, libserver.so)
// globals: CDOTA_Ability_Throw_Snowball::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Throw_Snowball::Schema_DynamicBinding(
        const CDOTA_Ability_Throw_Snowball *const this)
{
  return CDOTA_Ability_Throw_Snowball::s_pSchemaBinding;
}


// CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 33, @0x00000000024977b0, libserver.so)
// globals: CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass::DestructInstance  (line 33, @0x00000000024977c0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Throw_Snowball>
void __fastcall CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass::FreeInstance  (line 33, @0x00000000024977e0, libserver.so)
void __fastcall CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass::CanAllocate  (line 33, @0x0000000002497800, libserver.so)
bool __fastcall CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 33, @0x0000000002497810, libserver.so)
// globals: CDOTA_Ability_Throw_Snowball::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Throw_Snowball::s_pSchemaBinding;
}


// CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass::AllocateInstance  (line 33, @0x0000000002499440, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass::ConstructInstance  (line 33, @0x0000000002499de0, libserver.so)  // inlines: CDOTA_Ability_Throw_Snowball, Construct<CDOTA_Ability_Throw_Snowball>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_40DFB30;
  }
  return p;
}


// CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 33, @0x000000000249da90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 33, @0x000000000249dab0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Throw_Snowball::GetEntityClassInternal  (line 33, @0x00000000024a80f0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_02.cpp
// strings: "throw_snowball", "CDOTA_Ability_Throw_Snowball"
// globals: `guard variable for'CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass, CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Throw_Snowball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Throw_SnowballClassInfo, CDOTA_Ability_Throw_Snowball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Throw_SnowballClassInfo
CEntityClass *__cdecl CDOTA_Ability_Throw_Snowball::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass) != 0 )
  {
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_pClassInfo = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_flags = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_pInputs = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_nInputCount = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_pOutputs = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_nOutputCount = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_pGameClass = 0;
    CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass._vptr_CEntityClass = off_40DFAB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass);
    __cxa_atexit(
      CDOTA_Ability_Throw_Snowball::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Throw_SnowballClass != 0 )
    return &CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass;
  if ( `guard variable for'CDOTA_Ability_Throw_Snowball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Throw_SnowballClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Throw_Snowball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Throw_SnowballClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Throw_Snowball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Throw_SnowballClassInfo,
      "CDOTA_Ability_Throw_Snowball",
      "throw_snowball",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Throw_Snowball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Throw_SnowballClassInfo);
  }
  CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_pClassInfo = &CDOTA_Ability_Throw_Snowball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Throw_SnowballClassInfo;
  CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_pBaseClassInfo = CDOTA_Ability_Throw_Snowball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Throw_SnowballClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Throw_SnowballClass = &CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass;
  CDOTA_Ability_Throw_Snowball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Throw_SnowballClassInfo.m_pClass = &CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass;
  CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Throw_SnowballClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Throw_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_SnowballClass;
}


// CDOTA_Ability_Throw_Snowball::IsStealable  (line 43, @0x0000000002497820, libserver.so)
bool __fastcall CDOTA_Ability_Throw_Snowball::IsStealable(CDOTA_Ability_Throw_Snowball *const this)
{
  return 0;
}


// CDOTA_Ability_Throw_Snowball::IsCosmetic  (line 45, @0x0000000002497830, libserver.so)
bool __fastcall CDOTA_Ability_Throw_Snowball::IsCosmetic(
        CDOTA_Ability_Throw_Snowball *const this,
        CBaseEntity *pTargetEntity)
{
  return 1;
}


// CDOTA_Ability_Throw_Snowball::YouForgotToImplementOrDeclareServerClass  (line 50, @0x0000000002462630, libserver.so)
int __fastcall CDOTA_Ability_Throw_Snowball::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Throw_Snowball *const this)
{
  return 0;
}


// CDOTA_Ability_Throw_Snowball::GetServerClass  (line 50, @0x0000000002466a80, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Throw_Snowball::GetServerClass(CDOTA_Ability_Throw_Snowball *const this)
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


// CDOTA_Ability_Throw_Snowball::CastFilterResult  (line 59, @0x0000000002462d10, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::CastFilterResult
int __fastcall CDOTA_Ability_Throw_Snowball::CastFilterResult(
        CDOTA_Ability_Throw_Snowball *const this,
        CDOTA_BaseNPC *pTarget)
{
  if ( CDOTABaseAbility::GetCaster(this) == pTarget )
    return 23;
  else
    return CDOTABaseAbility::CastFilterResult(this, pTarget);
}


// CDOTA_Ability_Throw_Snowball::OnSpellStart  (line 67, @0x0000000002474680, libserver.so)  // inlines: CEntityHandle, CHandle, Color, GetEHandle, GetEntryIndex, GetSerialNumber, GetTeamNumber, Set, operator=, sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorTarget, CDOTA_ProjectileManager::CreateTrackingProjectile, CDOTA_BaseNPC::StartGesture, CDOTA_BaseNPC::UnitEmitSound, __stack_chk_fail
// strings: "particles/econ/events/snowball/snowball_projectile.vpcf", "Frostivus.Item.Snowball.Cast"
void __fastcall CDOTA_Ability_Throw_Snowball::OnSpellStart(CDOTA_Ability_Throw_Snowball *const this)
{
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v6; // cx
  CBaseEntity *CursorTarget; // rax
  CEntityIdentity *v8; // rdx
  __int16 v9; // cx
  int m_Value; // eax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  sTrackingProjectileCreateInfo info; // [rsp+0h] [rbp-80h] BYREF
  unsigned __int64 v14; // [rsp+68h] [rbp-18h]

  info.pAbility = this;
  v14 = __readfsqword(0x28u);
  info.hSource.m_Index = -1;
  info.hTarget.m_Index = -1;
  info.colorGemColor = 0;
  info.pAttackRecord = 0;
  info.iMoveSpeed = 0;
  info.iSourceAttachment = 1;
  info.vSourceLoc.x = vec3_origin.x;
  y = vec3_origin.y;
  info.bProvidesVision = 0;
  info.vSourceLoc.y = y;
  z = vec3_origin.z;
  info.iVisionTeamNumber = -1;
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
  info.pszEffectName = "particles/econ/events/snowball/snowball_projectile.vpcf";
  info.iMoveSpeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( Caster != 0 && (m_pEntity = Caster->m_pEntity) != 0 )
  {
    v6 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    if ( CursorTarget == 0 )
      goto LABEL_13;
  }
  else
  {
    info.hSource.m_Index = -1;
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    if ( CursorTarget == 0 )
      goto LABEL_13;
  }
  v8 = CursorTarget->m_pEntity;
  if ( v8 == 0 )
  {
LABEL_13:
    info.hTarget.m_Index = -1;
    goto LABEL_10;
  }
  if ( v8->m_EHandle.m_Index == -1 )
    v9 = 0x7FFF;
  else
    v9 = v8->m_EHandle.m_Index & 0x7FFF;
  info.hTarget.m_Index = (((v8->m_EHandle.m_Index >> 15) - (v8->m_flags & 1)) << 15) | v9 & 0x7FFF;
LABEL_10:
  info.bDodgeable = 0;
  info.bProvidesVision = 1;
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  info.iVisionRadius = 0;
  info.iSourceAttachment = 1;
  info.iVisionTeamNumber = m_Value;
  CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
  v11 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v11, 1503, 0.1, 0.1, 9, 0, 1.0);
  v12 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v12, "Frostivus.Item.Snowball.Cast", 0.0, 0, 0);
}


// CDOTA_Ability_Throw_Snowball::OnAbilityPhaseStart  (line 93, @0x0000000002462640, libserver.so)
bool __fastcall CDOTA_Ability_Throw_Snowball::OnAbilityPhaseStart(CDOTA_Ability_Throw_Snowball *const this)
{
  return 1;
}


// CDOTA_Ability_Throw_Snowball::OnProjectileHit  (line 105, @0x0000000002465e10, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator->
// calls: CBaseEntity::EmitSound
// strings: "Frostivus.Item.Snowball.Target"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Throw_Snowball::OnProjectileHit(
        CDOTA_Ability_Throw_Snowball *const this,
        _WORD *hTarget,
        const Vector *const vLocation)
{
  CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx

  m_pInstance = 0;
  if ( (*hTarget + 2) > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[*hTarget & 0x1FF];
      if ( v5 != 0 && *hTarget == v5->m_EHandle.m_Index )
        m_pInstance = v5->m_pInstance;
    }
  }
  CBaseEntity::EmitSound(m_pInstance, "Frostivus.Item.Snowball.Target", 0.0, 0);
  return 1;
}


// CDOTA_Ability_Throw_Snowball::Precache  (line 113, @0x0000000002462d90, libserver.so)
// calls: CDOTABaseAbility::Precache, PrecacheParticleFolderAndSystems
// strings: "particles/econ/events/snowball"
void __fastcall CDOTA_Ability_Throw_Snowball::Precache(
        CDOTA_Ability_Throw_Snowball *const this,
        const CEntityPrecacheContext *pContext)
{
  CDOTABaseAbility::Precache(this, pContext);
  PrecacheParticleFolderAndSystems("particles/econ/events/snowball", pContext);
}


// CDOTA_Ability_Throw_Coal::~CDOTA_Ability_Throw_Coal  (line 126, @0x0000000002499fb0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Throw_Coal::~CDOTA_Ability_Throw_Coal(CDOTA_Ability_Throw_Coal *const this)
{
  this->_vptr_IHandleEntity = &off_40E0630;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Throw_Coal::~CDOTA_Ability_Throw_Coal  (line 126, @0x0000000002499fd0, libserver.so)  // inlines: ~CDOTA_Ability_Throw_Coal
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Throw_Coal::~CDOTA_Ability_Throw_Coal(CDOTA_Ability_Throw_Coal *const this)
{
  this->_vptr_IHandleEntity = &off_40E0630;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Throw_Coal::Schema_DynamicBinding  (line 128, @0x0000000002497840, libserver.so)
// globals: CDOTA_Ability_Throw_Coal::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Throw_Coal::Schema_DynamicBinding(
        const CDOTA_Ability_Throw_Coal *const this)
{
  return CDOTA_Ability_Throw_Coal::s_pSchemaBinding;
}


// CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 128, @0x0000000002497850, libserver.so)
// globals: CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass::DestructInstance  (line 128, @0x0000000002497860, libserver.so)  // inlines: Destruct<CDOTA_Ability_Throw_Coal>
void __fastcall CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass::FreeInstance  (line 128, @0x0000000002497880, libserver.so)
void __fastcall CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass::CanAllocate  (line 128, @0x00000000024978a0, libserver.so)
bool __fastcall CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 128, @0x00000000024978b0, libserver.so)
// globals: CDOTA_Ability_Throw_Coal::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Throw_Coal::s_pSchemaBinding;
}


// CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass::AllocateInstance  (line 128, @0x0000000002499480, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass::ConstructInstance  (line 128, @0x0000000002499e10, libserver.so)  // inlines: CDOTA_Ability_Throw_Coal, Construct<CDOTA_Ability_Throw_Coal>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_40E0630;
  }
  return p;
}


// CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 128, @0x000000000249dae0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 128, @0x000000000249db00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Throw_Coal::GetEntityClassInternal  (line 128, @0x00000000024a7da0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_02.cpp
// strings: "throw_coal", "CDOTA_Ability_Throw_Coal"
// globals: `guard variable for'CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass, CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Throw_Coal::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Throw_CoalClassInfo, CDOTA_Ability_Throw_Coal::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Throw_CoalClassInfo
CEntityClass *__cdecl CDOTA_Ability_Throw_Coal::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass) != 0 )
  {
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_pClassInfo = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_flags = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_pInputs = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_nInputCount = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_pOutputs = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_nOutputCount = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_pGameClass = 0;
    CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass._vptr_CEntityClass = off_40E05B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass);
    __cxa_atexit(
      CDOTA_Ability_Throw_Coal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Throw_CoalClass != 0 )
    return &CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass;
  if ( `guard variable for'CDOTA_Ability_Throw_Coal::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Throw_CoalClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Throw_Coal::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Throw_CoalClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Throw_Coal::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Throw_CoalClassInfo,
      "CDOTA_Ability_Throw_Coal",
      "throw_coal",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Throw_Coal::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Throw_CoalClassInfo);
  }
  CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_pClassInfo = &CDOTA_Ability_Throw_Coal::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Throw_CoalClassInfo;
  CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_pBaseClassInfo = CDOTA_Ability_Throw_Coal::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Throw_CoalClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Throw_CoalClass = &CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass;
  CDOTA_Ability_Throw_Coal::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Throw_CoalClassInfo.m_pClass = &CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass;
  CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Throw_CoalClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Throw_Coal::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Throw_CoalClass;
}


// CDOTA_Ability_Throw_Coal::IsStealable  (line 138, @0x00000000024978c0, libserver.so)
bool __fastcall CDOTA_Ability_Throw_Coal::IsStealable(CDOTA_Ability_Throw_Coal *const this)
{
  return 0;
}


// CDOTA_Ability_Throw_Coal::IsCosmetic  (line 140, @0x00000000024978d0, libserver.so)
bool __fastcall CDOTA_Ability_Throw_Coal::IsCosmetic(CDOTA_Ability_Throw_Coal *const this, CBaseEntity *pTargetEntity)
{
  return 1;
}


// CDOTA_Ability_Throw_Coal::YouForgotToImplementOrDeclareServerClass  (line 145, @0x0000000002462650, libserver.so)
int __fastcall CDOTA_Ability_Throw_Coal::YouForgotToImplementOrDeclareServerClass(CDOTA_Ability_Throw_Coal *const this)
{
  return 0;
}


// CDOTA_Ability_Throw_Coal::GetServerClass  (line 145, @0x0000000002466ac0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Throw_Coal::GetServerClass(CDOTA_Ability_Throw_Coal *const this)
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


// CDOTA_Ability_Throw_Coal::CastFilterResult  (line 154, @0x0000000002462d50, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::CastFilterResult
int __fastcall CDOTA_Ability_Throw_Coal::CastFilterResult(CDOTA_Ability_Throw_Coal *const this, CDOTA_BaseNPC *pTarget)
{
  if ( CDOTABaseAbility::GetCaster(this) == pTarget )
    return 23;
  else
    return CDOTABaseAbility::CastFilterResult(this, pTarget);
}


// CDOTA_Ability_Throw_Coal::OnSpellStart  (line 162, @0x0000000002474900, libserver.so)  // inlines: CEntityHandle, CHandle, Color, GetEHandle, GetEntryIndex, GetSerialNumber, GetTeamNumber, Set, operator=, sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorTarget, CDOTA_ProjectileManager::CreateTrackingProjectile, CDOTA_BaseNPC::StartGesture, CDOTA_BaseNPC::UnitEmitSound, __stack_chk_fail
// strings: "particles/econ/events/coal/coal_projectile.vpcf", "Frostivus.Item.Coal.Cast"
void __fastcall CDOTA_Ability_Throw_Coal::OnSpellStart(CDOTA_Ability_Throw_Coal *const this)
{
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v6; // cx
  CBaseEntity *CursorTarget; // rax
  CEntityIdentity *v8; // rdx
  __int16 v9; // cx
  int m_Value; // eax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  sTrackingProjectileCreateInfo info; // [rsp+0h] [rbp-80h] BYREF
  unsigned __int64 v14; // [rsp+68h] [rbp-18h]

  info.pAbility = this;
  v14 = __readfsqword(0x28u);
  info.hSource.m_Index = -1;
  info.hTarget.m_Index = -1;
  info.colorGemColor = 0;
  info.pAttackRecord = 0;
  info.iMoveSpeed = 0;
  info.iSourceAttachment = 1;
  info.vSourceLoc.x = vec3_origin.x;
  y = vec3_origin.y;
  info.bProvidesVision = 0;
  info.vSourceLoc.y = y;
  z = vec3_origin.z;
  info.iVisionTeamNumber = -1;
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
  info.pszEffectName = "particles/econ/events/coal/coal_projectile.vpcf";
  info.iMoveSpeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( Caster != 0 && (m_pEntity = Caster->m_pEntity) != 0 )
  {
    v6 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    if ( CursorTarget == 0 )
      goto LABEL_13;
  }
  else
  {
    info.hSource.m_Index = -1;
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    if ( CursorTarget == 0 )
      goto LABEL_13;
  }
  v8 = CursorTarget->m_pEntity;
  if ( v8 == 0 )
  {
LABEL_13:
    info.hTarget.m_Index = -1;
    goto LABEL_10;
  }
  if ( v8->m_EHandle.m_Index == -1 )
    v9 = 0x7FFF;
  else
    v9 = v8->m_EHandle.m_Index & 0x7FFF;
  info.hTarget.m_Index = (((v8->m_EHandle.m_Index >> 15) - (v8->m_flags & 1)) << 15) | v9 & 0x7FFF;
LABEL_10:
  info.bDodgeable = 0;
  info.bProvidesVision = 1;
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  info.iVisionRadius = 0;
  info.iSourceAttachment = 1;
  info.iVisionTeamNumber = m_Value;
  CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
  v11 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v11, 1503, 0.1, 0.1, 9, 0, 1.0);
  v12 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v12, "Frostivus.Item.Coal.Cast", 0.0, 0, 0);
}


// CDOTA_Ability_Throw_Coal::OnAbilityPhaseStart  (line 188, @0x0000000002462660, libserver.so)
bool __fastcall CDOTA_Ability_Throw_Coal::OnAbilityPhaseStart(CDOTA_Ability_Throw_Coal *const this)
{
  return 1;
}


// CDOTA_Ability_Throw_Coal::OnProjectileHit  (line 200, @0x0000000002465e80, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator->
// calls: CBaseEntity::EmitSound
// strings: "Frostivus.Item.Coal.Target"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Throw_Coal::OnProjectileHit(
        CDOTA_Ability_Throw_Coal *const this,
        _WORD *hTarget,
        const Vector *const vLocation)
{
  CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx

  m_pInstance = 0;
  if ( (*hTarget + 2) > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[*hTarget & 0x1FF];
      if ( v5 != 0 && *hTarget == v5->m_EHandle.m_Index )
        m_pInstance = v5->m_pInstance;
    }
  }
  CBaseEntity::EmitSound(m_pInstance, "Frostivus.Item.Coal.Target", 0.0, 0);
  return 1;
}


// CDOTA_Ability_Throw_Coal::Precache  (line 208, @0x0000000002462dc0, libserver.so)
// calls: PrecacheParticleFolderAndSystems, CDOTABaseAbility::Precache
// strings: "particles/econ/events/coal"
void __fastcall CDOTA_Ability_Throw_Coal::Precache(
        CDOTA_Ability_Throw_Coal *const this,
        const CEntityPrecacheContext *pContext)
{
  PrecacheParticleFolderAndSystems("particles/econ/events/coal", pContext);
  CDOTABaseAbility::Precache(this, pContext);
}


// CDOTA_Ability_Healing_Campfire::~CDOTA_Ability_Healing_Campfire  (line 220, @0x000000000249a000, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Healing_Campfire::~CDOTA_Ability_Healing_Campfire(
        CDOTA_Ability_Healing_Campfire *const this)
{
  this->_vptr_IHandleEntity = &off_40E1130;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Healing_Campfire::~CDOTA_Ability_Healing_Campfire  (line 220, @0x000000000249a020, libserver.so)  // inlines: ~CDOTA_Ability_Healing_Campfire
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Healing_Campfire::~CDOTA_Ability_Healing_Campfire(
        CDOTA_Ability_Healing_Campfire *const this)
{
  this->_vptr_IHandleEntity = &off_40E1130;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Healing_Campfire::Schema_DynamicBinding  (line 222, @0x00000000024978e0, libserver.so)
// globals: CDOTA_Ability_Healing_Campfire::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Healing_Campfire::Schema_DynamicBinding(
        const CDOTA_Ability_Healing_Campfire *const this)
{
  return CDOTA_Ability_Healing_Campfire::s_pSchemaBinding;
}


// CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 222, @0x00000000024978f0, libserver.so)
// globals: CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass::DestructInstance  (line 222, @0x0000000002497900, libserver.so)  // inlines: Destruct<CDOTA_Ability_Healing_Campfire>
void __fastcall CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass::FreeInstance  (line 222, @0x0000000002497920, libserver.so)
void __fastcall CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass::CanAllocate  (line 222, @0x0000000002497940, libserver.so)
bool __fastcall CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 222, @0x0000000002497950, libserver.so)
// globals: CDOTA_Ability_Healing_Campfire::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Healing_Campfire::s_pSchemaBinding;
}


// CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass::AllocateInstance  (line 222, @0x00000000024994c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass::ConstructInstance  (line 222, @0x0000000002499e40, libserver.so)  // inlines: CDOTA_Ability_Healing_Campfire, Construct<CDOTA_Ability_Healing_Campfire>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_40E1130;
  }
  return p;
}


// CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 222, @0x000000000249db30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 222, @0x000000000249db50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Healing_Campfire::GetEntityClassInternal  (line 222, @0x00000000024a73b0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_02.cpp
// strings: "CDOTA_Ability_Healing_Campfire"
// globals: `guard variable for'CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass, CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Healing_Campfire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Healing_CampfireClassInfo, CDOTA_Ability_Healing_Campfire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Healing_CampfireClassInfo
CEntityClass *__cdecl CDOTA_Ability_Healing_Campfire::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass) != 0 )
  {
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_pClassInfo = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_flags = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_pInputs = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_nInputCount = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_pOutputs = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_nOutputCount = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_pGameClass = 0;
    CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass._vptr_CEntityClass = off_40E10B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass);
    __cxa_atexit(
      CDOTA_Ability_Healing_Campfire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Healing_CampfireClass != 0 )
    return &CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass;
  if ( `guard variable for'CDOTA_Ability_Healing_Campfire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Healing_CampfireClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Healing_Campfire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Healing_CampfireClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Healing_Campfire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Healing_CampfireClassInfo,
      "CDOTA_Ability_Healing_Campfire",
      "healing_campfire",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Healing_Campfire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Healing_CampfireClassInfo);
  }
  CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_pClassInfo = &CDOTA_Ability_Healing_Campfire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Healing_CampfireClassInfo;
  CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_pBaseClassInfo = CDOTA_Ability_Healing_Campfire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Healing_CampfireClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Healing_CampfireClass = &CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass;
  CDOTA_Ability_Healing_Campfire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Healing_CampfireClassInfo.m_pClass = &CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass;
  CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Healing_CampfireClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Healing_Campfire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Healing_CampfireClass;
}


// CDOTA_Ability_Healing_Campfire::IsStealable  (line 236, @0x0000000002497960, libserver.so)
bool __fastcall CDOTA_Ability_Healing_Campfire::IsStealable(CDOTA_Ability_Healing_Campfire *const this)
{
  return 0;
}


// CDOTA_Ability_Healing_Campfire::IsCosmetic  (line 238, @0x0000000002497970, libserver.so)
bool __fastcall CDOTA_Ability_Healing_Campfire::IsCosmetic(
        CDOTA_Ability_Healing_Campfire *const this,
        CBaseEntity *pTargetEntity)
{
  return 1;
}


// CDOTA_Ability_Healing_Campfire::YouForgotToImplementOrDeclareServerClass  (line 243, @0x0000000002462670, libserver.so)
int __fastcall CDOTA_Ability_Healing_Campfire::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Healing_Campfire *const this)
{
  return 0;
}


// CDOTA_Ability_Healing_Campfire::GetServerClass  (line 243, @0x0000000002466b00, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Healing_Campfire::GetServerClass(CDOTA_Ability_Healing_Campfire *const this)
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


// CDOTA_Ability_Healing_Campfire::OnSpellStart  (line 253, @0x0000000002474b80, libserver.so)  // inlines: GetTeamNumber, SetBool
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, DOTA_CreateUnitByName, KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, KeyValues::SetInt, KeyValues::SetString, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail (13 total)
// strings: "npc_dota_healing_campfire", "modifier_healing_campfire_aura", "modifier_healing_campfire_heal", "aura_apply_modifier", "healing_aura_radius", "aura_search_team" (9 total)
void __fastcall CDOTA_Ability_Healing_Campfire::OnSpellStart(CDOTA_Ability_Healing_Campfire *const this)
{
  int m_Value; // r13d
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_BaseNPC *v4; // r14
  CDOTA_BaseNPC *v5; // r13
  float v6; // xmm1_4
  int LevelSpecialValue; // eax
  CDOTA_BaseNPC *v8; // rax
  Vector vLocation; // [rsp+0h] [rbp-50h] BYREF
  KeyValues kvaura; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  vLocation = CDOTABaseAbility::GetCursorPosition(this);
  v5 = DOTA_CreateUnitByName("npc_dota_healing_campfire", &vLocation, 1, v4, Caster, m_Value);
  if ( v5 != 0 )
  {
    KeyValues::KeyValues(&kvaura, "modifier_healing_campfire_aura");
    CDOTABaseAbility::GetDuration(this);
    KeyValues::SetFloat(&kvaura, "duration", v6);
    KeyValues::SetInt(&kvaura, "aura", 1);
    KeyValues::SetString(&kvaura, "aura_apply_modifier", "modifier_healing_campfire_heal");
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "healing_aura_radius", -1, 0);
    KeyValues::SetInt(&kvaura, "aura_radius", LevelSpecialValue);
    KeyValues::SetInt(&kvaura, "aura_search_team", 1);
    KeyValues::SetInt(&kvaura, "aura_search_type", 19);
    KeyValues::SetInt(&kvaura, "aura_search_flags", 16);
    KeyValues::SetInt(&kvaura, "aura_is_heal", 1);
    v8 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v5, v8, this, "modifier_healing_campfire_aura", &kvaura, 0);
    KeyValues::~KeyValues(&kvaura);
  }
}


// CDOTA_Ability_ShootFirework::~CDOTA_Ability_ShootFirework  (line 280, @0x000000000249a050, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_ShootFirework::~CDOTA_Ability_ShootFirework(CDOTA_Ability_ShootFirework *const this)
{
  this->_vptr_IHandleEntity = &off_40E1C30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_ShootFirework::~CDOTA_Ability_ShootFirework  (line 280, @0x000000000249a070, libserver.so)  // inlines: ~CDOTA_Ability_ShootFirework
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_ShootFirework::~CDOTA_Ability_ShootFirework(CDOTA_Ability_ShootFirework *const this)
{
  this->_vptr_IHandleEntity = &off_40E1C30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_ShootFirework::Schema_DynamicBinding  (line 282, @0x0000000002497980, libserver.so)
// globals: CDOTA_Ability_ShootFirework::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ShootFirework::Schema_DynamicBinding(
        const CDOTA_Ability_ShootFirework *const this)
{
  return CDOTA_Ability_ShootFirework::s_pSchemaBinding;
}


// CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 282, @0x0000000002497990, libserver.so)
// globals: CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass::DestructInstance  (line 282, @0x00000000024979a0, libserver.so)  // inlines: Destruct<CDOTA_Ability_ShootFirework>
void __fastcall CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass::FreeInstance  (line 282, @0x00000000024979c0, libserver.so)
void __fastcall CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass::CanAllocate  (line 282, @0x00000000024979e0, libserver.so)
bool __fastcall CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 282, @0x00000000024979f0, libserver.so)
// globals: CDOTA_Ability_ShootFirework::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ShootFirework::s_pSchemaBinding;
}


// CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass::AllocateInstance  (line 282, @0x0000000002499500, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass::ConstructInstance  (line 282, @0x0000000002499e70, libserver.so)  // inlines: CDOTA_Ability_ShootFirework, Construct<CDOTA_Ability_ShootFirework>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_40E1C30;
  }
  return p;
}


// CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 282, @0x000000000249db80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 282, @0x000000000249dba0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_ShootFirework::GetEntityClassInternal  (line 282, @0x00000000024a9b60, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_02.cpp
// strings: "shoot_firework", "CDOTA_Ability_ShootFirework"
// globals: `guard variable for'CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass, CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_ShootFirework::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShootFireworkClassInfo, CDOTA_Ability_ShootFirework::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShootFireworkClassInfo
CEntityClass *__cdecl CDOTA_Ability_ShootFirework::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass) != 0 )
  {
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_pClassInfo = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_flags = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_pInputs = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_nInputCount = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_pOutputs = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_nOutputCount = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_pGameClass = 0;
    CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass._vptr_CEntityClass = off_40E1BB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass);
    __cxa_atexit(
      CDOTA_Ability_ShootFirework::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_ShootFireworkClass != 0 )
    return &CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass;
  if ( `guard variable for'CDOTA_Ability_ShootFirework::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShootFireworkClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ShootFirework::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShootFireworkClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_ShootFirework::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShootFireworkClassInfo,
      "CDOTA_Ability_ShootFirework",
      "shoot_firework",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ShootFirework::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShootFireworkClassInfo);
  }
  CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_pClassInfo = &CDOTA_Ability_ShootFirework::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShootFireworkClassInfo;
  CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_pBaseClassInfo = CDOTA_Ability_ShootFirework::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShootFireworkClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_ShootFireworkClass = &CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass;
  CDOTA_Ability_ShootFirework::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShootFireworkClassInfo.m_pClass = &CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass;
  CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_ShootFireworkClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_ShootFirework::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShootFireworkClass;
}


// CDOTA_Ability_ShootFirework::IsStealable  (line 287, @0x0000000002497a00, libserver.so)
bool __fastcall CDOTA_Ability_ShootFirework::IsStealable(CDOTA_Ability_ShootFirework *const this)
{
  return 0;
}


// CDOTA_Ability_ShootFirework::IsCosmetic  (line 288, @0x0000000002497a10, libserver.so)
bool __fastcall CDOTA_Ability_ShootFirework::IsCosmetic(
        CDOTA_Ability_ShootFirework *const this,
        CBaseEntity *pTargetEntity)
{
  return 1;
}


// CDOTA_Ability_ShootFirework::OnSpellStart  (line 297, @0x0000000002462ee0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound
// strings: "particles/econ/events/consolation_fireworks_1.vpcf", "Charming_Consumable.Cast"
void __fastcall CDOTA_Ability_ShootFirework::OnSpellStart(CDOTA_Ability_ShootFirework *const this)
{
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v4; // rax
  CDOTA_BaseNPC *v5; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/econ/events/consolation_fireworks_1.vpcf",
                      0,
                      Caster,
                      0,
                      0);
  v4 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v4, Caster);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v5, "Charming_Consumable.Cast", 0.0, 0, 0);
}


// CDOTA_Ability_ShootFirework::Precache  (line 305, @0x0000000002462df0, libserver.so)
// calls: PrecacheParticleFolderAndSystems, CDOTABaseAbility::Precache
// strings: "particles/econ/events/consolation"
void __fastcall CDOTA_Ability_ShootFirework::Precache(
        CDOTA_Ability_ShootFirework *const this,
        const CEntityPrecacheContext *pContext)
{
  PrecacheParticleFolderAndSystems("particles/econ/events/consolation", pContext);
  CDOTABaseAbility::Precache(this, pContext);
}


// CDOTA_Modifier_Healing_Campfire_Aura::~CDOTA_Modifier_Healing_Campfire_Aura  (line 318, @0x0000000002499ce0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Healing_Campfire_Aura::~CDOTA_Modifier_Healing_Campfire_Aura(
        CDOTA_Modifier_Healing_Campfire_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_40E26F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Healing_Campfire_Aura::~CDOTA_Modifier_Healing_Campfire_Aura  (line 318, @0x0000000002499d00, libserver.so)  // inlines: ~CDOTA_Modifier_Healing_Campfire_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Healing_Campfire_Aura::~CDOTA_Modifier_Healing_Campfire_Aura(
        CDOTA_Modifier_Healing_Campfire_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_40E26F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Healing_Campfire_Aura::GetAuraDuration  (line 331, @0x0000000002497a20, libserver.so)
float __fastcall CDOTA_Modifier_Healing_Campfire_Aura::GetAuraDuration(
        CDOTA_Modifier_Healing_Campfire_Aura *const this)
{
  return 2.5;
}


// CDOTA_Modifier_Healing_Campfire_Aura::IsHidden  (line 333, @0x0000000002497a30, libserver.so)
bool __fastcall CDOTA_Modifier_Healing_Campfire_Aura::IsHidden(CDOTA_Modifier_Healing_Campfire_Aura *const this)
{
  return 0;
}


// CDOTA_Modifier_Healing_Campfire_Aura::OnCreated  (line 345, @0x0000000002462680, libserver.so)
void __fastcall CDOTA_Modifier_Healing_Campfire_Aura::OnCreated(
        CDOTA_Modifier_Healing_Campfire_Aura *const this,
        KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_Healing_Campfire_Aura::CheckState  (line 365, @0x0000000002462690, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Healing_Campfire_Aura::CheckState(
        CDOTA_Modifier_Healing_Campfire_Aura *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x2000200uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFDFFFDFFLL;
}


// CDOTA_Modifier_Healing_Campfire_Aura::OnDestroy  (line 375, @0x0000000002462f50, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::ForceKill
void __fastcall CDOTA_Modifier_Healing_Campfire_Aura::OnDestroy(CDOTA_Modifier_Healing_Campfire_Aura *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::ForceKill(Parent, 0);
}


// CDOTA_Modifier_Healing_Campfire_Heal::~CDOTA_Modifier_Healing_Campfire_Heal  (line 390, @0x0000000002499c90, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Healing_Campfire_Heal::~CDOTA_Modifier_Healing_Campfire_Heal(
        CDOTA_Modifier_Healing_Campfire_Heal *const this)
{
  this->_vptr_CDOTA_Buff = &off_40E2A10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Healing_Campfire_Heal::~CDOTA_Modifier_Healing_Campfire_Heal  (line 390, @0x0000000002499cb0, libserver.so)  // inlines: ~CDOTA_Modifier_Healing_Campfire_Heal
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Healing_Campfire_Heal::~CDOTA_Modifier_Healing_Campfire_Heal(
        CDOTA_Modifier_Healing_Campfire_Heal *const this)
{
  this->_vptr_CDOTA_Buff = &off_40E2A10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Healing_Campfire_Heal::DeclareFunctions  (line 409, @0x00000000024626b0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Healing_Campfire_Heal::GetModifierPercentageHealthRegen(CModifierParams const&)
void __fastcall CDOTA_Modifier_Healing_Campfire_Heal::DeclareFunctions(
        CDOTA_Modifier_Healing_Campfire_Heal *const this)
{
  this->m_Functions[57].__pfn = CDOTA_Modifier_Healing_Campfire_Heal::GetModifierPercentageHealthRegen;
  this->m_Functions[57].__delta = 0;
}


// CDOTA_Modifier_Healing_Campfire_Heal::OnCreated  (line 416, @0x0000000002475eb0, libserver.so)  // inlines: AssignTo, DOTAGameRules, DotaRetrieveAbilityValue<int>, GetFloat, GetInt, GetLevelSpecialValueFor<int>, HasAbilityTuningValueFilter, HasScriptFilter, IsConsideredHero, RunAbilityTuningValueFilter, entindex, operator float, operator int
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::GetSpecialAbility, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAbilityModifierValues, CDOTAGamerules::GetGameModeEntity, KeyValues::operator new, KeyValues::KeyValues, CEntityInstance::GetEntityIndex, KeyValues::SetInt, KeyValues::SetString, KeyValues::SetFloat (18 total)
// strings: "AbilityValueData", "entindex_caster_const", "entindex_ability_const", "value_name_const"
void __fastcall CDOTA_Modifier_Healing_Campfire_Heal::OnCreated(
        CDOTA_Modifier_Healing_Campfire_Heal *const this,
        KeyValues *pKV)
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
    if ( EffectiveLevel == -1 || (SpecialAbility = CDOTABaseAbility::GetSpecialAbility(v4, "heal_amount")) == 0 )
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
        CDOTA_BaseNPC::GetAbilityModifierValues(Caster, "heal_amount", &pflMultiply, &pflAdd);
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
          KeyValues::SetString(pFilterKV, "value_name_const", "heal_amount");
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
    this->heal_amount = v23;
  }
  else
  {
    this->heal_amount = 0;
  }
}


// CDOTA_Modifier_Healing_Campfire_Heal::GetModifierPercentageHealthRegen  (line 423, @0x00000000024626d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Healing_Campfire_Heal::GetModifierPercentageHealthRegen(
        CDOTA_Modifier_Healing_Campfire_Heal *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->heal_amount;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


