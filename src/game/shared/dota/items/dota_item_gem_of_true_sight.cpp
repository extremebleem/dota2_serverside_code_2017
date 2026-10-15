// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_gem_of_true_sight.cpp:26
class CDOTA_Item_GemOfTrueSight : public CDOTA_Item {
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
	CDOTA_Item_GemOfTrueSight(CDOTA_Item_GemOfTrueSight &);
	CDOTA_Item_GemOfTrueSight(CDOTA_Item_GemOfTrueSight &);
	CDOTA_Item_GemOfTrueSight();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual void OnOwnerDied();
	virtual ~CDOTA_Item_GemOfTrueSight();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[271] OnOwnerDied
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_gem_of_true_sight.cpp:43
class C_CDOTA_Item_GemOfTrueSight_MapInstall {
	C_CDOTA_Item_GemOfTrueSight_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_gem_of_true_sight.cpp:70
class CDOTA_Modifier_Item_GemOfTrueSight : public CDOTA_Buff_Item {
public:

private:

	int radius;  // +0xba8
	CDOTA_Modifier_Item_GemOfTrueSight();
	virtual void OnCreated(KeyValues *);
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual bool GetAuraEntityReject(CDOTA_BaseNPC *);
	virtual ~CDOTA_Modifier_Item_GemOfTrueSight();

	// vtable[57] OnCreated
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[42] GetAuraEntityReject
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_GemOfTrueSight::~CDOTA_Item_GemOfTrueSight  (line 26, @0x0000000002da1db0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_GemOfTrueSight::~CDOTA_Item_GemOfTrueSight(CDOTA_Item_GemOfTrueSight *const this)
{
  this->_vptr_IHandleEntity = &off_46E6570;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_GemOfTrueSight::~CDOTA_Item_GemOfTrueSight  (line 26, @0x0000000002da1dd0, libserver.so)  // inlines: ~CDOTA_Item_GemOfTrueSight
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_GemOfTrueSight::~CDOTA_Item_GemOfTrueSight(CDOTA_Item_GemOfTrueSight *const this)
{
  this->_vptr_IHandleEntity = &off_46E6570;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_GemOfTrueSight::Schema_DynamicBinding  (line 28, @0x0000000002d9f100, libserver.so)
// globals: CDOTA_Item_GemOfTrueSight::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_GemOfTrueSight::Schema_DynamicBinding(
        const CDOTA_Item_GemOfTrueSight *const this)
{
  return CDOTA_Item_GemOfTrueSight::s_pSchemaBinding;
}


// CDOTA_Item_GemOfTrueSight::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002d9f110, libserver.so)
// globals: CDOTA_Item_GemOfTrueSight::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_GemOfTrueSight::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_GemOfTrueSight::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_GemOfTrueSight::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_GemOfTrueSight::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002d9f120, libserver.so)  // inlines: Destruct<CDOTA_Item_GemOfTrueSight>
void __fastcall CDOTA_Item_GemOfTrueSight::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_GemOfTrueSight::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_GemOfTrueSight::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002d9f140, libserver.so)
void __fastcall CDOTA_Item_GemOfTrueSight::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_GemOfTrueSight::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_GemOfTrueSight::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002d9f160, libserver.so)
bool __fastcall CDOTA_Item_GemOfTrueSight::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_GemOfTrueSight::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_GemOfTrueSight::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002d9f170, libserver.so)
// globals: CDOTA_Item_GemOfTrueSight::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_GemOfTrueSight::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_GemOfTrueSight::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_GemOfTrueSight::s_pSchemaBinding;
}


// CDOTA_Item_GemOfTrueSight::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002da06f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_GemOfTrueSight::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_GemOfTrueSight::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_GemOfTrueSight::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002da1670, libserver.so)  // inlines: CDOTA_Item_GemOfTrueSight, Construct<CDOTA_Item_GemOfTrueSight>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_GemOfTrueSight::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_GemOfTrueSight::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46E6570;
  }
  return p;
}


// CDOTA_Item_GemOfTrueSight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002da3d10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_GemOfTrueSight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_GemOfTrueSight::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_GemOfTrueSight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002da3d30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_GemOfTrueSight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_GemOfTrueSight::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_GemOfTrueSight::GetEntityClassInternal  (line 28, @0x0000000002da8400, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_03.cpp
// strings: "item_gem", "CDOTA_Item_GemOfTrueSight"
// globals: `guard variable for'CDOTA_Item_GemOfTrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GemOfTrueSightClass, CDOTA_Item_GemOfTrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GemOfTrueSightClass, __dso_handle, CDOTA_Item_GemOfTrueSight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_GemOfTrueSight::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GemOfTrueSightClassInfo, CDOTA_Item_GemOfTrueSight::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GemOfTrueSightClassInfo
CEntityClass *__cdecl CDOTA_Item_GemOfTrueSight::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_GemOfTrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GemOfTrueSightClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_GemOfTrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GemOfTrueSightClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_GemOfTrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GemOfTrueSightClass);
    CDOTA_Item_GemOfTrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GemOfTrueSightClass._vptr_CEntityClass = off_46E64F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_GemOfTrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GemOfTrueSightClass);
    __cxa_atexit(
      CDOTA_Item_GemOfTrueSight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_GemOfTrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GemOfTrueSightClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_GemOfTrueSightClass != 0 )
    return &CDOTA_Item_GemOfTrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GemOfTrueSightClass;
  if ( `guard variable for'CDOTA_Item_GemOfTrueSight::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GemOfTrueSightClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_GemOfTrueSight::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GemOfTrueSightClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_GemOfTrueSight::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GemOfTrueSightClassInfo,
      "CDOTA_Item_GemOfTrueSight",
      "item_gem",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_GemOfTrueSight::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GemOfTrueSightClassInfo);
  }
  CDOTA_Item_GemOfTrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GemOfTrueSightClass.m_pClassInfo = &CDOTA_Item_GemOfTrueSight::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GemOfTrueSightClassInfo;
  CDOTA_Item_GemOfTrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GemOfTrueSightClass.m_pBaseClassInfo = CDOTA_Item_GemOfTrueSight::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GemOfTrueSightClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_GemOfTrueSightClass = &CDOTA_Item_GemOfTrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GemOfTrueSightClass;
  CDOTA_Item_GemOfTrueSight::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GemOfTrueSightClassInfo.m_pClass = &CDOTA_Item_GemOfTrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GemOfTrueSightClass;
  CDOTA_Item_GemOfTrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GemOfTrueSightClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_GemOfTrueSightClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_GemOfTrueSight::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GemOfTrueSightClass;
}


// CDOTA_Item_GemOfTrueSight::GetIntrinsicModifierName  (line 32, @0x0000000002d9f180, libserver.so)
// strings: "modifier_item_gem_of_true_sight"
const char *__fastcall CDOTA_Item_GemOfTrueSight::GetIntrinsicModifierName(CDOTA_Item_GemOfTrueSight *const this)
{
  return "modifier_item_gem_of_true_sight";
}


// CDOTA_Item_GemOfTrueSight::YouForgotToImplementOrDeclareServerClass  (line 43, @0x0000000002d941f0, libserver.so)
int __fastcall CDOTA_Item_GemOfTrueSight::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Item_GemOfTrueSight *const this)
{
  return 0;
}


// CDOTA_Item_GemOfTrueSight::GetServerClass  (line 43, @0x0000000002d97b90, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_GemOfTrueSight::GetServerClass(CDOTA_Item_GemOfTrueSight *const this)
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


// CDOTA_Item_GemOfTrueSight::OnOwnerDied  (line 51, @0x0000000002d96d80, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, VectorAdd, operator+
// calls: CDOTA_Item::OnOwnerDied, RandomFloat, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::DropItemOnLocation
void __fastcall CDOTA_Item_GemOfTrueSight::OnOwnerDied(CDOTA_Item_GemOfTrueSight *const this)
{
  unsigned __int16 v2; // dx
  int v3; // esi
  uint32 v4; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  const Vector *AbsOrigin; // rax
  CDOTA_UnitInventory *Inventory; // rax
  float v10; // [rsp+8h] [rbp-28h]
  float v11; // [rsp+Ch] [rbp-24h]
  double v12; // [rsp+10h] [rbp-20h]
  vec_t v13; // [rsp+18h] [rbp-18h]

  CDOTA_Item::OnOwnerDied(this);
  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  v4 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
  if ( v4 + 2 > 1 )
  {
    v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
    if ( v5 != 0 )
    {
      v6 = &v5[v3 & 0x1FF];
      if ( v6 != 0 && v4 == v6->m_EHandle.m_Index )
      {
        m_pInstance = v6->m_pInstance;
        if ( v6->m_pInstance != 0
          && m_pInstance->m_bIsDOTANPC
          && (*(m_pInstance->_vptr_IHandleEntity + 438))(v6->m_pInstance) == 0 )
        {
          v10 = RandomFloat(-50.0, 50.0);
          v11 = RandomFloat(-50.0, 50.0);
          AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
          *(&v12 + 1) = v10 + AbsOrigin->y;
          v13 = AbsOrigin->z + 0.0;
          *&v12 = v11 + AbsOrigin->x;
          Inventory = CDOTA_BaseNPC::GetInventory(m_pInstance);
          CDOTA_UnitInventory::DropItemOnLocation(Inventory, this, v12, v13);
        }
      }
    }
  }
}


// CDOTA_Modifier_Item_GemOfTrueSight::~CDOTA_Modifier_Item_GemOfTrueSight  (line 70, @0x0000000002da0dd0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_GemOfTrueSight::~CDOTA_Modifier_Item_GemOfTrueSight(
        CDOTA_Modifier_Item_GemOfTrueSight *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_GemOfTrueSight::~CDOTA_Modifier_Item_GemOfTrueSight  (line 70, @0x0000000002da0df0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_GemOfTrueSight
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_GemOfTrueSight::~CDOTA_Modifier_Item_GemOfTrueSight(
        CDOTA_Modifier_Item_GemOfTrueSight *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_GemOfTrueSight::IsAura  (line 77, @0x0000000002d9f190, libserver.so)
bool __fastcall CDOTA_Modifier_Item_GemOfTrueSight::IsAura(CDOTA_Modifier_Item_GemOfTrueSight *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_GemOfTrueSight::GetModifierAura  (line 78, @0x0000000002d9f1a0, libserver.so)
// strings: "modifier_truesight"
const char *__fastcall CDOTA_Modifier_Item_GemOfTrueSight::GetModifierAura(
        CDOTA_Modifier_Item_GemOfTrueSight *const this)
{
  return "modifier_truesight";
}


// CDOTA_Modifier_Item_GemOfTrueSight::GetAuraSearchTeam  (line 80, @0x0000000002d9f1b0, libserver.so)
int __fastcall CDOTA_Modifier_Item_GemOfTrueSight::GetAuraSearchTeam(CDOTA_Modifier_Item_GemOfTrueSight *const this)
{
  return 2;
}


// CDOTA_Modifier_Item_GemOfTrueSight::GetAuraSearchType  (line 81, @0x0000000002d9f1c0, libserver.so)
int __fastcall CDOTA_Modifier_Item_GemOfTrueSight::GetAuraSearchType(CDOTA_Modifier_Item_GemOfTrueSight *const this)
{
  return 51;
}


// CDOTA_Modifier_Item_GemOfTrueSight::GetAuraSearchFlags  (line 82, @0x0000000002d9f1d0, libserver.so)
int __fastcall CDOTA_Modifier_Item_GemOfTrueSight::GetAuraSearchFlags(CDOTA_Modifier_Item_GemOfTrueSight *const this)
{
  return 80;
}


// CDOTA_Modifier_Item_GemOfTrueSight::GetAuraRadius  (line 83, @0x0000000002d9f1e0, libserver.so)
int __fastcall CDOTA_Modifier_Item_GemOfTrueSight::GetAuraRadius(CDOTA_Modifier_Item_GemOfTrueSight *const this)
{
  return this->radius;
}


// CDOTA_Modifier_Item_GemOfTrueSight::GetAuraEntityReject  (line 84, @0x0000000002da1940, libserver.so)  // inlines: IsIllusion
// calls: CDOTA_Buff::GetCaster
bool __fastcall CDOTA_Modifier_Item_GemOfTrueSight::GetAuraEntityReject(
        CDOTA_Modifier_Item_GemOfTrueSight *const this,
        CDOTA_BaseNPC *pNPC)
{
  return (CDOTA_Buff::GetCaster(this)->m_iUnitType & 0x100) != 0
      || (CDOTA_Buff::GetCaster(this)->m_iUnitType & 2) != 0
      || CDOTA_Buff::GetCaster(this)->m_bIsIllusion.m_Value;
}


// CDOTA_Modifier_Item_GemOfTrueSight::OnCreated  (line 99, @0x0000000002d9c450, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Item_GemOfTrueSight::OnCreated(
        CDOTA_Modifier_Item_GemOfTrueSight *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
}


