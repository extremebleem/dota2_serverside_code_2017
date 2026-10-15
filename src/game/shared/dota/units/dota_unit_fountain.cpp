// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_fountain.cpp:31
class CDOTA_Unit_Fountain : public CDOTA_BaseNPC_Building {
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
	CDOTA_Unit_Fountain(CDOTA_Unit_Fountain &);
	CDOTA_Unit_Fountain(CDOTA_Unit_Fountain &);
	CDOTA_Unit_Fountain();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual bool IsFountain();
	virtual ~CDOTA_Unit_Fountain();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[406] IsFountain
	// sizeof = 4696
};

// src/game/shared/dota/units/dota_unit_fountain.cpp:41
class C_CDOTA_Unit_Fountain_MapInstall {
	C_CDOTA_Unit_Fountain_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Fountain::~CDOTA_Unit_Fountain  (line 31, @0x0000000002ae6860, libserver.so)  // inlines: ~CDOTA_BaseNPC_Building, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_Unit_Fountain::~CDOTA_Unit_Fountain(CDOTA_Unit_Fountain *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CDOTA_BaseNPC_Building::NetworkVar_m_nFXIndexDestruction> *p_m_nFXIndexDestruction; // rdi

  p_m_nFXIndexDestruction = &this->m_nFXIndexDestruction;
  p_m_nFXIndexDestruction[-564].m_Value.m_pBinding = &off_42DB1F0;
  p_m_nFXIndexDestruction[-328].m_Value.m_pBinding = &off_42DC150;
  p_m_nFXIndexDestruction[-307].m_Value.m_pBinding = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_nFXIndexDestruction->m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_Unit_Fountain::~CDOTA_Unit_Fountain  (line 31, @0x0000000002ae68d0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Building, ~CDOTA_Unit_Fountain, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Fountain::~CDOTA_Unit_Fountain(CDOTA_Unit_Fountain *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>,CDOTA_BaseNPC_Building::NetworkVar_m_nFXIndexDestruction> *p_m_nFXIndexDestruction; // rdi

  p_m_nFXIndexDestruction = &this->m_nFXIndexDestruction;
  p_m_nFXIndexDestruction[-564].m_Value.m_pBinding = &off_42DB1F0;
  p_m_nFXIndexDestruction[-328].m_Value.m_pBinding = &off_42DC150;
  p_m_nFXIndexDestruction[-307].m_Value.m_pBinding = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&p_m_nFXIndexDestruction->m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Fountain::Schema_DynamicBinding  (line 33, @0x0000000002ab7a80, libserver.so)
// globals: CDOTA_Unit_Fountain::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Fountain::Schema_DynamicBinding(
        const CDOTA_Unit_Fountain *const this)
{
  return CDOTA_Unit_Fountain::s_pSchemaBinding;
}


// CDOTA_Unit_Fountain::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 33, @0x0000000002ab7ab0, libserver.so)
// globals: CDOTA_Unit_Fountain::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Fountain::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Fountain::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Fountain::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Fountain::CEntityInstanceEntityClass::DestructInstance  (line 33, @0x0000000002ab7ac0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Fountain>
void __fastcall CDOTA_Unit_Fountain::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Fountain::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Fountain::CEntityInstanceEntityClass::FreeInstance  (line 33, @0x0000000002ab7ae0, libserver.so)
void __fastcall CDOTA_Unit_Fountain::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Fountain::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Fountain::CEntityInstanceEntityClass::CanAllocate  (line 33, @0x0000000002ab7b00, libserver.so)
bool __fastcall CDOTA_Unit_Fountain::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Fountain::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Fountain::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 33, @0x0000000002ab7b10, libserver.so)
// globals: CDOTA_Unit_Fountain::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Fountain::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Fountain::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Fountain::s_pSchemaBinding;
}


// CDOTA_Unit_Fountain::CEntityInstanceEntityClass::AllocateInstance  (line 33, @0x0000000002abe700, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Fountain::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Fountain::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4696);
  memset(v1, 0, 0x1258u);
  return v1;
}


// CDOTA_Unit_Fountain::CEntityInstanceEntityClass::ConstructInstance  (line 33, @0x0000000002acb390, libserver.so)  // inlines: CDOTA_BaseNPC_Building, CDOTA_Unit_Fountain, CNetworkVarBase, CStrongHandle, CUtlSymbolLarge, Color, Construct<CDOTA_Unit_Fountain>, EnsureValidValue, EnsureValidValue<HSequence>, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, Init
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_Unit_Fountain::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Fountain::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *(p + 563) = 0;
    *p = &off_43D96B0;
    *(p + 236) = &off_43DA610;
    *(p + 564) = 0;
    *(p + 1130) = 0;
    *(p + 1131) = 0;
    *(p + 1132) = 0;
    *(p + 1133) = 0;
    *(p + 1134) = 0;
    *(p + 1135) = 0;
    *(p + 4544) = 0;
    *(p + 4545) = 0;
    *(p + 1145) = 0;
    *(p + 1146) = 0;
    *(p + 574) = 0;
    *(p + 575) = 0;
    *(p + 576) = 0;
    *(p + 577) = 0;
    *(p + 578) = 0;
    *(p + 579) = 0;
    *(p + 580) = 0;
    *(p + 581) = 0;
    *(p + 257) = &off_43DA940;
  }
  return p;
}


// CDOTA_Unit_Fountain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 33, @0x0000000002accfc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Fountain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Fountain::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Fountain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 33, @0x0000000002accfe0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Fountain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Fountain::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Fountain::GetEntityClassInternal  (line 33, @0x0000000002ad7f20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Building::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CDOTA_BaseNPC::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "ent_dota_fountain", "CDOTA_Unit_Fountain", "npc_dota_building", "CDOTA_BaseNPC_Building"
// globals: `guard variable for'CDOTA_Unit_Fountain::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_FountainClass, CDOTA_Unit_Fountain::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_FountainClass, __dso_handle, CDOTA_Unit_Fountain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Fountain::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_FountainClassInfo, CDOTA_Unit_Fountain::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_FountainClassInfo, `guard variable for'CDOTA_BaseNPC_Building::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BuildingClassInfo, CDOTA_BaseNPC_Building::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BuildingClassInfo
CEntityClass *__cdecl CDOTA_Unit_Fountain::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Fountain::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_FountainClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Fountain::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_FountainClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Fountain::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_FountainClass);
    CDOTA_Unit_Fountain::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_FountainClass._vptr_CEntityClass = off_43D9630;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Fountain::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_FountainClass);
    __cxa_atexit(
      CDOTA_Unit_Fountain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Fountain::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_FountainClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_FountainClass != 0 )
    return &CDOTA_Unit_Fountain::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_FountainClass;
  if ( `guard variable for'CDOTA_Unit_Fountain::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_FountainClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Fountain::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_FountainClassInfo) != 0 )
  {
    if ( `guard variable for'CDOTA_BaseNPC_Building::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BuildingClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Building::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BuildingClassInfo) != 0 )
    {
      EntityClassInfo = CDOTA_BaseNPC::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CDOTA_BaseNPC_Building::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BuildingClassInfo,
        "CDOTA_BaseNPC_Building",
        "npc_dota_building",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Building::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BuildingClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Fountain::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_FountainClassInfo,
      "CDOTA_Unit_Fountain",
      "ent_dota_fountain",
      0,
      &CDOTA_BaseNPC_Building::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_BuildingClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Fountain::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_FountainClassInfo);
  }
  CDOTA_Unit_Fountain::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_FountainClass.m_pClassInfo = &CDOTA_Unit_Fountain::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_FountainClassInfo;
  CDOTA_Unit_Fountain::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_FountainClass.m_pBaseClassInfo = CDOTA_Unit_Fountain::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_FountainClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_FountainClass = &CDOTA_Unit_Fountain::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_FountainClass;
  CDOTA_Unit_Fountain::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_FountainClassInfo.m_pClass = &CDOTA_Unit_Fountain::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_FountainClass;
  CDOTA_Unit_Fountain::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_FountainClass.m_pScriptClassDesc = CDOTA_BaseNPC_Building::InitScriptDesc();
  g_pEntityCDOTA_Unit_FountainClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Fountain::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_FountainClass;
}


// CDOTA_Unit_Fountain::IsFountain  (line 38, @0x0000000002ab7b20, libserver.so)
bool __fastcall CDOTA_Unit_Fountain::IsFountain(CDOTA_Unit_Fountain *const this)
{
  return 1;
}


// CDOTA_Unit_Fountain::YouForgotToImplementOrDeclareServerClass  (line 41, @0x0000000002a77540, libserver.so)
int __fastcall CDOTA_Unit_Fountain::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Fountain *const this)
{
  return 0;
}


// CDOTA_Unit_Fountain::GetServerClass  (line 41, @0x0000000002a8a130, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Fountain::GetServerClass(CDOTA_Unit_Fountain *const this)
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


// CDOTA_Unit_Fountain::Spawn  (line 50, @0x0000000002a79ee0, libserver.so)  // inlines: SetBool
// calls: CDOTA_BaseNPC_Building::Spawn, KeyValues::KeyValues, KeyValues::SetInt, KeyValues::SetString, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_fountain_aura", "modifier_fountain_aura_buff", "aura_apply_modifier", "aura_search_team", "aura_search_type", "aura_search_flags" (7 total)
void __fastcall CDOTA_Unit_Fountain::Spawn(CDOTA_Unit_Fountain *const this, const CEntityKeyValues *pKeyValues)
{
  KeyValues kv; // [rsp+0h] [rbp-60h] BYREF
  KeyValues kv2; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v5; // [rsp+38h] [rbp-28h]

  v5 = __readfsqword(0x28u);
  CDOTA_BaseNPC_Building::Spawn(this, pKeyValues);
  KeyValues::KeyValues(&kv, "modifier_fountain_aura");
  KeyValues::SetInt(&kv, "aura", 1);
  KeyValues::SetString(&kv, "aura_apply_modifier", "modifier_fountain_aura_buff");
  KeyValues::SetInt(&kv, "aura_radius", 1275);
  KeyValues::SetInt(&kv, "aura_search_team", 1);
  KeyValues::SetInt(&kv, "aura_search_type", 19);
  KeyValues::SetInt(&kv, "aura_search_flags", 80);
  CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_fountain_aura", &kv, 0);
  KeyValues::KeyValues(&kv2, "modifier_fountain_truesight_aura");
  CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_fountain_truesight_aura", &kv2, 0);
  KeyValues::~KeyValues(&kv2);
  KeyValues::~KeyValues(&kv);
}


