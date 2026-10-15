// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_blight_stone.cpp:28
class CDOTA_Item_Blight_Stone : public CDOTA_Item {
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
	CDOTA_Item_Blight_Stone(CDOTA_Item_Blight_Stone &);
	CDOTA_Item_Blight_Stone(CDOTA_Item_Blight_Stone &);
	CDOTA_Item_Blight_Stone();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_Blight_Stone();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_blight_stone.cpp:40
class CDOTA_Blight_Stone : public CDOTA_Orb {
public:

private:

	int corruption_duration;  // +0x18
	CDOTA_Blight_Stone(CDOTA_Blight_Stone &);
	CDOTA_Blight_Stone(const CDOTA_Blight_Stone &);
	CDOTA_Blight_Stone(CDOTA_AttackRecord *, KeyValues *, CDOTA_BaseNPC *, CDOTABaseAbility *);
	virtual void OnOrbPreImpact(const CModifierParams &);
	virtual ~CDOTA_Blight_Stone();

	// vtable[7] OnOrbPreImpact
	// sizeof = 32
};

// src/game/shared/dota/items/dota_item_blight_stone.cpp:78
class CDOTA_Modifier_Item_Blight_Stone : public CDOTA_Buff_Item {
public:

private:

	float corruption_duration;  // +0xba8
	CDOTA_Modifier_Item_Blight_Stone();
	virtual void OnCreated(KeyValues *);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual int GetOrbPriority(CDOTA_AttackRecord *);
	virtual CDOTA_Orb * GetCustomOrb(CDOTA_AttackRecord *);
	virtual ~CDOTA_Modifier_Item_Blight_Stone();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[50] GetOrbPriority
	// vtable[49] GetCustomOrb
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_blight_stone.cpp:142
class CDOTA_Modifier_Blight_Stone_Corruption : public CDOTA_Buff {
public:

private:

	int corruption_armor;  // +0xba8
	CDOTA_Modifier_Blight_Stone_Corruption();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual bool IsDebuff();
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_Blight_Stone_Corruption();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[12] IsDebuff
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Blight_Stone::~CDOTA_Item_Blight_Stone  (line 28, @0x0000000002d64850, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Blight_Stone::~CDOTA_Item_Blight_Stone(CDOTA_Item_Blight_Stone *const this)
{
  this->_vptr_IHandleEntity = &off_4698D70;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Blight_Stone::~CDOTA_Item_Blight_Stone  (line 28, @0x0000000002d64870, libserver.so)  // inlines: ~CDOTA_Item_Blight_Stone
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Blight_Stone::~CDOTA_Item_Blight_Stone(CDOTA_Item_Blight_Stone *const this)
{
  this->_vptr_IHandleEntity = &off_4698D70;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Blight_Stone::Schema_DynamicBinding  (line 30, @0x0000000002d61220, libserver.so)
// globals: CDOTA_Item_Blight_Stone::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Blight_Stone::Schema_DynamicBinding(
        const CDOTA_Item_Blight_Stone *const this)
{
  return CDOTA_Item_Blight_Stone::s_pSchemaBinding;
}


// CDOTA_Item_Blight_Stone::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 30, @0x0000000002d61230, libserver.so)
// globals: CDOTA_Item_Blight_Stone::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Blight_Stone::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Blight_Stone::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Blight_Stone::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Blight_Stone::CEntityInstanceEntityClass::DestructInstance  (line 30, @0x0000000002d61240, libserver.so)  // inlines: Destruct<CDOTA_Item_Blight_Stone>
void __fastcall CDOTA_Item_Blight_Stone::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Blight_Stone::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Blight_Stone::CEntityInstanceEntityClass::FreeInstance  (line 30, @0x0000000002d61260, libserver.so)
void __fastcall CDOTA_Item_Blight_Stone::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Blight_Stone::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Blight_Stone::CEntityInstanceEntityClass::CanAllocate  (line 30, @0x0000000002d61280, libserver.so)
bool __fastcall CDOTA_Item_Blight_Stone::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Blight_Stone::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Blight_Stone::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 30, @0x0000000002d61290, libserver.so)
// globals: CDOTA_Item_Blight_Stone::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Blight_Stone::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Blight_Stone::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Blight_Stone::s_pSchemaBinding;
}


// CDOTA_Item_Blight_Stone::CEntityInstanceEntityClass::AllocateInstance  (line 30, @0x0000000002d627f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Blight_Stone::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Blight_Stone::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Blight_Stone::CEntityInstanceEntityClass::ConstructInstance  (line 30, @0x0000000002d638d0, libserver.so)  // inlines: CDOTA_Item_Blight_Stone, Construct<CDOTA_Item_Blight_Stone>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Blight_Stone::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Blight_Stone::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4698D70;
  }
  return p;
}


// CDOTA_Item_Blight_Stone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002d66770, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Blight_Stone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Blight_Stone::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Blight_Stone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002d66790, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Blight_Stone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Blight_Stone::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Blight_Stone::GetEntityClassInternal  (line 30, @0x0000000002d6d0e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_01.cpp
// strings: "CDOTA_Item_Blight_Stone"
// globals: `guard variable for'CDOTA_Item_Blight_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Blight_StoneClass, CDOTA_Item_Blight_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Blight_StoneClass, __dso_handle, CDOTA_Item_Blight_Stone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Blight_Stone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Blight_StoneClassInfo, CDOTA_Item_Blight_Stone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Blight_StoneClassInfo
CEntityClass *__cdecl CDOTA_Item_Blight_Stone::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Blight_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Blight_StoneClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Blight_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Blight_StoneClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Blight_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Blight_StoneClass);
    CDOTA_Item_Blight_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Blight_StoneClass._vptr_CEntityClass = off_4698CF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Blight_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Blight_StoneClass);
    __cxa_atexit(
      CDOTA_Item_Blight_Stone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Blight_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Blight_StoneClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Blight_StoneClass != 0 )
    return &CDOTA_Item_Blight_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Blight_StoneClass;
  if ( `guard variable for'CDOTA_Item_Blight_Stone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Blight_StoneClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Blight_Stone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Blight_StoneClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Blight_Stone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Blight_StoneClassInfo,
      "CDOTA_Item_Blight_Stone",
      "item_blight_stone",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Blight_Stone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Blight_StoneClassInfo);
  }
  CDOTA_Item_Blight_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Blight_StoneClass.m_pClassInfo = &CDOTA_Item_Blight_Stone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Blight_StoneClassInfo;
  CDOTA_Item_Blight_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Blight_StoneClass.m_pBaseClassInfo = CDOTA_Item_Blight_Stone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Blight_StoneClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Blight_StoneClass = &CDOTA_Item_Blight_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Blight_StoneClass;
  CDOTA_Item_Blight_Stone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Blight_StoneClassInfo.m_pClass = &CDOTA_Item_Blight_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Blight_StoneClass;
  CDOTA_Item_Blight_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Blight_StoneClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Blight_StoneClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Blight_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Blight_StoneClass;
}


// CDOTA_Item_Blight_Stone::GetIntrinsicModifierName  (line 33, @0x0000000002d612a0, libserver.so)
// strings: "modifier_item_blight_stone"
const char *__fastcall CDOTA_Item_Blight_Stone::GetIntrinsicModifierName(CDOTA_Item_Blight_Stone *const this)
{
  return "modifier_item_blight_stone";
}


// CDOTA_Blight_Stone::~CDOTA_Blight_Stone  (line 40, @0x0000000002d61770, libserver.so)  // inlines: ~CDOTA_Orb
void __fastcall CDOTA_Blight_Stone::~CDOTA_Blight_Stone(CDOTA_Blight_Stone *const this)
{
  this->_vptr_CDOTA_Orb = &off_4115E90;
}


// CDOTA_Blight_Stone::~CDOTA_Blight_Stone  (line 40, @0x0000000002d621d0, libserver.so)  // inlines: ~CDOTA_Blight_Stone, ~CDOTA_Orb
// calls: operator delete
void __fastcall CDOTA_Blight_Stone::~CDOTA_Blight_Stone(CDOTA_Blight_Stone *const this)
{
  this->_vptr_CDOTA_Orb = &off_4115E90;
  operator delete(this);
}


// CDOTA_Blight_Stone::OnOrbPreImpact  (line 50, @0x0000000002d66a40, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTAAbility, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume, CDOTA_BaseNPC::AddNewModifier, __dynamic_cast
// strings: "modifier_blight_stone_buff"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Blight_Stone::OnOrbPreImpact(CDOTA_Blight_Stone *const this, const CModifierParams *const params)
{
  int iFailType; // eax
  float v5; // xmm1_4
  uint32 m_Index; // eax
  CConcreteEntityList *v7; // r15
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  uint32 v11; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityInstance *v14; // rax
  uint32 v15; // ecx
  CDOTABaseAbility *v16; // rdx
  CEntityIdentity *v17; // rax
  __int64 v18; // rdx
  bool v19; // zf
  CEntityIdentity *v20; // rax
  uint32 v21; // eax
  CBaseEntity *v22; // rsi
  CEntityIdentity *v23; // rcx
  CEntityIdentity *v24; // rcx
  KeyValues kv; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+18h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  iFailType = params->iFailType;
  if ( iFailType == 6 || iFailType == 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_blight_stone_buff");
    KeyValues::SetFloat(&kv, "duration", v5);
    m_Index = params->htarget.m_Index;
    v7 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 <= 1
      || (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
      || (v9 = &v8[params->htarget.m_Index & 0x1FF]) == 0
      || m_Index != v9->m_EHandle.m_Index
      || (m_pInstance = v9->m_pInstance, v9->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    v11 = params->hattacker.m_Index;
    if ( v11 + 2 > 1 )
    {
      v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
      if ( v12 != 0 )
      {
        v13 = &v12[params->hattacker.m_Index & 0x1FF];
        if ( v13 != 0 && v11 == v13->m_EHandle.m_Index )
        {
          v14 = v13->m_pInstance;
          if ( v13->m_pInstance != 0
            && BYTE3(v14[7]._vptr_IHandleEntity) != 0
            && m_pInstance != 0
            && LOBYTE(v14[71].m_pEntity) == 0
            && m_pInstance->m_iTeamNum.m_Value != HIBYTE(v14[7].m_CScriptComponent) )
          {
            v15 = this->m_hAbility.m_Index;
            v16 = 0;
            if ( v15 + 2 > 1 )
            {
              v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAbility.m_Index) >> 9) & 0x3F];
              if ( v17 != 0 )
              {
                v18 = this->m_hAbility.m_Index & 0x1FF;
                v19 = &v17[v18] == 0;
                v20 = &v17[v18];
                v16 = 0;
                if ( !v19 && v15 == v20->m_EHandle.m_Index && v20->m_pInstance != 0 )
                  v16 = __dynamic_cast(v20->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
              }
              else
              {
                v16 = 0;
              }
            }
            v21 = this->m_hCaster.m_Index;
            v22 = 0;
            if ( v21 + 2 > 1 )
            {
              v23 = v7->m_pIdentityChunks[(LOWORD(this->m_hCaster.m_Index) >> 9) & 0x3F];
              if ( v23 != 0 )
              {
                v24 = &v23[this->m_hCaster.m_Index & 0x1FF];
                if ( v24 != 0 && v21 == v24->m_EHandle.m_Index )
                  v22 = v24->m_pInstance;
              }
            }
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, v22, v16, "modifier_blight_stone_buff", &kv, 0);
          }
        }
      }
    }
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_Item_Blight_Stone::~CDOTA_Modifier_Item_Blight_Stone  (line 78, @0x0000000002d62c10, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Blight_Stone::~CDOTA_Modifier_Item_Blight_Stone(
        CDOTA_Modifier_Item_Blight_Stone *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Blight_Stone::~CDOTA_Modifier_Item_Blight_Stone  (line 78, @0x0000000002d62c30, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Blight_Stone
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Blight_Stone::~CDOTA_Modifier_Item_Blight_Stone(
        CDOTA_Modifier_Item_Blight_Stone *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Blight_Stone::GetOrbPriority  (line 86, @0x0000000002d612b0, libserver.so)
int __fastcall CDOTA_Modifier_Item_Blight_Stone::GetOrbPriority(
        CDOTA_Modifier_Item_Blight_Stone *const this,
        CDOTA_AttackRecord *pRecord)
{
  return 2;
}


// CDOTA_Modifier_Item_Blight_Stone::GetCustomOrb  (line 87, @0x0000000002d65e00, libserver.so)  // inlines: CDOTA_Blight_Stone, ~CDOTA_Orb
// calls: KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, operator new, CDOTA_Orb::CDOTA_Orb, KeyValues::GetFloat, KeyValues::~KeyValues, __stack_chk_fail, operator delete, _Unwind_Resume
// strings: "corruption_duration"
CDOTA_Orb *__fastcall CDOTA_Modifier_Item_Blight_Stone::GetCustomOrb(
        CDOTA_Modifier_Item_Blight_Stone *const this,
        CDOTA_AttackRecord *pRecord)
{
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // r14
  CDOTABaseAbility *Ability; // r15
  CDOTA_Orb *v7; // r12
  float v8; // xmm1_4
  KeyValues kv; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "orb");
  KeyValues::SetFloat(&kv, "corruption_duration", v4);
  Caster = CDOTA_Buff::GetCaster(this);
  Ability = CDOTA_Buff::GetAbility(this);
  v7 = operator new(0x20u);
  CDOTA_Orb::CDOTA_Orb(v7, pRecord, &kv, Caster, Ability);
  v7->_vptr_CDOTA_Orb = &off_46998F0;
  LODWORD(v7[1]._vptr_CDOTA_Orb) = KeyValues::GetFloat(&kv, "corruption_duration", v8);
  KeyValues::~KeyValues(&kv);
  return v7;
}


// CDOTA_Modifier_Item_Blight_Stone::OnCreated  (line 108, @0x0000000002d5d040, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "corruption_duration"
void __fastcall CDOTA_Modifier_Item_Blight_Stone::OnCreated(
        CDOTA_Modifier_Item_Blight_Stone *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->corruption_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "corruption_duration", -1, 0);
  else
    this->corruption_duration = 0.0;
}


// CDOTA_Modifier_Item_Blight_Stone::DeclareFunctions  (line 115, @0x0000000002d54640, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Blight_Stone::OnAttackLanded(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Blight_Stone::DeclareFunctions(CDOTA_Modifier_Item_Blight_Stone *const this)
{
  this->m_Functions[121].__pfn = CDOTA_Modifier_Item_Blight_Stone::OnAttackLanded;
  this->m_Functions[121].__delta = 0;
}


// CDOTA_Modifier_Item_Blight_Stone::OnAttackLanded  (line 121, @0x0000000002d57f70, libserver.so)  // inlines: Attacker, AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound
// strings: "Item_Blight_Stone.Target"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Blight_Stone::OnAttackLanded(
        CDOTA_Modifier_Item_Blight_Stone *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC *v11; // rdi
  uint32 v12; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CEntityInstance *v15; // rax

  m_pInstance = 0;
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[params->hattacker.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance )
  {
    v8 = params->htarget.m_Index;
    if ( v8 + 2 <= 1
      || (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
      || (v10 = &v9[params->htarget.m_Index & 0x1FF]) == 0
      || v8 != v10->m_EHandle.m_Index
      || (v11 = v10->m_pInstance, v10->m_pInstance == 0)
      || !v11->m_bIsDOTANPC )
    {
      v11 = 0;
    }
    v12 = params->hattacker.m_Index;
    if ( v12 + 2 > 1 )
    {
      v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
      if ( v13 != 0 )
      {
        v14 = &v13[params->hattacker.m_Index & 0x1FF];
        if ( v14 != 0 && v12 == v14->m_EHandle.m_Index )
        {
          v15 = v14->m_pInstance;
          if ( v14->m_pInstance != 0
            && BYTE3(v15[7]._vptr_IHandleEntity) != 0
            && v11 != 0
            && v11->m_iTeamNum.m_Value != HIBYTE(v15[7].m_CScriptComponent) )
          {
            CDOTA_BaseNPC::UnitEmitSound(v11, "Item_Blight_Stone.Target", 0.0, 0, 0);
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Blight_Stone_Corruption::~CDOTA_Modifier_Blight_Stone_Corruption  (line 142, @0x0000000002d63160, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Blight_Stone_Corruption::~CDOTA_Modifier_Blight_Stone_Corruption(
        CDOTA_Modifier_Blight_Stone_Corruption *const this)
{
  this->_vptr_CDOTA_Buff = &off_4699CB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Blight_Stone_Corruption::~CDOTA_Modifier_Blight_Stone_Corruption  (line 142, @0x0000000002d63180, libserver.so)  // inlines: ~CDOTA_Modifier_Blight_Stone_Corruption
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Blight_Stone_Corruption::~CDOTA_Modifier_Blight_Stone_Corruption(
        CDOTA_Modifier_Blight_Stone_Corruption *const this)
{
  this->_vptr_CDOTA_Buff = &off_4699CB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Blight_Stone_Corruption::IsDebuff  (line 150, @0x0000000002d612c0, libserver.so)
bool __fastcall CDOTA_Modifier_Blight_Stone_Corruption::IsDebuff(CDOTA_Modifier_Blight_Stone_Corruption *const this)
{
  return 1;
}


// CDOTA_Modifier_Blight_Stone_Corruption::DeclareFunctions  (line 163, @0x0000000002d54660, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Blight_Stone_Corruption::GetModifierPhysicalArmorBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Blight_Stone_Corruption::DeclareFunctions(
        CDOTA_Modifier_Blight_Stone_Corruption *const this)
{
  this->m_Functions[45].__pfn = CDOTA_Modifier_Blight_Stone_Corruption::GetModifierPhysicalArmorBonus;
  this->m_Functions[45].__delta = 0;
}


// CDOTA_Modifier_Blight_Stone_Corruption::OnCreated  (line 168, @0x0000000002d5ef80, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "corruption_armor"
void __fastcall CDOTA_Modifier_Blight_Stone_Corruption::OnCreated(
        CDOTA_Modifier_Blight_Stone_Corruption *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->corruption_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "corruption_armor", -1, 0);
  else
    this->corruption_armor = 0;
}


// CDOTA_Modifier_Blight_Stone_Corruption::GetModifierPhysicalArmorBonus  (line 173, @0x0000000002d54680, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Blight_Stone_Corruption::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Blight_Stone_Corruption *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->corruption_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


