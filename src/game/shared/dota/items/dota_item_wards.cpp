// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_wards.cpp:61
class CDOTA_Buff_Wards : public CDOTA_Buff {
public:

	CDOTA_Buff_Wards(CDOTA_Buff_Wards &);
	CDOTA_Buff_Wards(const CDOTA_Buff_Wards &);
	CDOTA_Buff_Wards();
	virtual void OnDestroy();
	ModifierVariant_t GetUnitLifetimeFraction(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	virtual const char * GetTexture();
	virtual ~CDOTA_Buff_Wards();

	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[32] GetTexture
	// sizeof = 2984
};

// src/game/shared/dota/items/dota_item_wards.cpp:104
class C_CDOTA_NPC_Observer_Ward_MapInstall {
	C_CDOTA_NPC_Observer_Ward_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_wards.cpp:297
class C_CDOTA_NPC_Observer_Ward_TrueSight_MapInstall {
	C_CDOTA_NPC_Observer_Ward_TrueSight_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_wards.cpp:357
class CDOTA_Item_ObserverWard : public CDOTA_Item {
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
	CDOTA_Item_ObserverWard(CDOTA_Item_ObserverWard &);
	CDOTA_Item_ObserverWard(CDOTA_Item_ObserverWard &);
	CDOTA_Item_ObserverWard();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual const char * GetIntrinsicModifierName();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual int CastFilterResult(const Vector &);
	virtual const char * GetCustomCastError(const Vector &);
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual bool CausesAutoattack();
	virtual void OnPurchase(int, const char *);
	virtual int GetAllowedTargetBehavior();
	virtual ~CDOTA_Item_ObserverWard();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[280] GetIntrinsicModifierName
	// vtable[256] CastFilterResult
	// vtable[258] CastFilterResult
	// vtable[259] GetCustomCastError
	// vtable[226] GetCastRange
	// vtable[222] CausesAutoattack
	// vtable[335] OnPurchase
	// vtable[255] GetAllowedTargetBehavior
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_wards.cpp:398
class C_CDOTA_Item_ObserverWard_MapInstall {
	C_CDOTA_Item_ObserverWard_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_wards.cpp:611
class CDOTA_Modifier_Item_ObserverWard : public CDOTA_Buff_Item {
public:

	CDOTA_Modifier_Item_ObserverWard(CDOTA_Modifier_Item_ObserverWard &);
	CDOTA_Modifier_Item_ObserverWard(const CDOTA_Modifier_Item_ObserverWard &);
	CDOTA_Modifier_Item_ObserverWard();
	virtual ~CDOTA_Modifier_Item_ObserverWard();

	// sizeof = 2984
};

// src/game/shared/dota/items/dota_item_wards.cpp:623
class CDOTA_Item_SentryWard : public CDOTA_Item {
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
	CDOTA_Item_SentryWard(CDOTA_Item_SentryWard &);
	CDOTA_Item_SentryWard(CDOTA_Item_SentryWard &);
	CDOTA_Item_SentryWard();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual const char * GetIntrinsicModifierName();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual int CastFilterResult(const Vector &);
	virtual const char * GetCustomCastError(const Vector &);
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual bool CausesAutoattack();
	virtual void OnPurchase(int, const char *);
	virtual int GetAllowedTargetBehavior();
	virtual ~CDOTA_Item_SentryWard();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[280] GetIntrinsicModifierName
	// vtable[256] CastFilterResult
	// vtable[258] CastFilterResult
	// vtable[259] GetCustomCastError
	// vtable[226] GetCastRange
	// vtable[222] CausesAutoattack
	// vtable[335] OnPurchase
	// vtable[255] GetAllowedTargetBehavior
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_wards.cpp:661
class C_CDOTA_Item_SentryWard_MapInstall {
	C_CDOTA_Item_SentryWard_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_wards.cpp:872
class CDOTA_Modifier_Item_SentryWard : public CDOTA_Buff_Item {
public:

	CDOTA_Modifier_Item_SentryWard(CDOTA_Modifier_Item_SentryWard &);
	CDOTA_Modifier_Item_SentryWard(const CDOTA_Modifier_Item_SentryWard &);
	CDOTA_Modifier_Item_SentryWard();
	virtual ~CDOTA_Modifier_Item_SentryWard();

	// sizeof = 2984
};

// src/game/shared/dota/items/dota_item_wards.cpp:885
class CDOTA_Modifier_Item_WardTrueSight : public CDOTA_Buff_Wards {
public:

private:

	int true_sight_range;  // +0xba8
	CDOTA_Modifier_Item_WardTrueSight();
	virtual void OnCreated(KeyValues *);
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual const char * GetTexture();
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual ~CDOTA_Modifier_Item_WardTrueSight();

	// vtable[57] OnCreated
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[32] GetTexture
	// vtable[10] AddCustomTransmiterData
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_NoWardTrigger::Spawn  (line 48, @0x0000000002e193f0, libserver.so)
// calls: CBaseTrigger::Spawn, CBaseTrigger::InitTrigger
void __fastcall CDOTA_NoWardTrigger::Spawn(CDOTA_NoWardTrigger *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseTrigger::Spawn(this, pKeyValues);
  CBaseTrigger::InitTrigger(this, pKeyValues);
}


// CDOTA_Buff_Wards::~CDOTA_Buff_Wards  (line 61, @0x0000000002e225f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Buff_Wards::~CDOTA_Buff_Wards(CDOTA_Buff_Wards *const this)
{
  this->_vptr_CDOTA_Buff = &off_478F1F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Buff_Wards::~CDOTA_Buff_Wards  (line 61, @0x0000000002e22610, libserver.so)  // inlines: ~CDOTA_Buff_Wards
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Buff_Wards::~CDOTA_Buff_Wards(CDOTA_Buff_Wards *const this)
{
  this->_vptr_CDOTA_Buff = &off_478F1F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Buff_Wards::IsPurgable  (line 69, @0x0000000002e21060, libserver.so)
bool __fastcall CDOTA_Buff_Wards::IsPurgable(CDOTA_Buff_Wards *const this)
{
  return 0;
}


// CDOTA_Buff_Wards::GetTexture  (line 72, @0x0000000002e21070, libserver.so)
// strings: "item_ward_observer"
const char *__fastcall CDOTA_Buff_Wards::GetTexture(CDOTA_Buff_Wards *const this)
{
  return "item_ward_observer";
}


// CDOTA_Buff_Wards::OnDestroy  (line 77, @0x0000000002e19420, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::MarkExpired, CDOTA_BaseNPC::ForceKill
void __fastcall CDOTA_Buff_Wards::OnDestroy(CDOTA_Buff_Wards *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::MarkExpired(Parent);
  v3 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::ForceKill(v3, 0);
}


// CDOTA_Buff_Wards::DeclareFunctions  (line 85, @0x0000000002e18980, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Buff_Wards::GetUnitLifetimeFraction(CModifierParams const&)
void __fastcall CDOTA_Buff_Wards::DeclareFunctions(CDOTA_Buff_Wards *const this)
{
  this->m_Functions[157].__pfn = CDOTA_Buff_Wards::GetUnitLifetimeFraction;
  this->m_Functions[157].__delta = 0;
}


// CDOTA_Buff_Wards::GetUnitLifetimeFraction  (line 90, @0x0000000002e189a0, libserver.so)  // inlines: DOTAGameRules, GetGameTime
ModifierVariant_t __fastcall CDOTA_Buff_Wards::GetUnitLifetimeFraction(
        CDOTA_Buff_Wards *const this,
        const CModifierParams *const params)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  float v5; // xmm0_4
  __int64 v6; // xmm2_8
  unsigned int v8; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  (*(this->_vptr_CDOTA_Buff + 30))(this, params);
  v4 = 0.0;
  if ( g_pGameRules != 0 )
    v4 = *&g_pGameRules[18].m_szQuestName[20];
  *&v8 = v3 - v4;
  v5 = (*(this->_vptr_CDOTA_Buff + 31))(this);
  v6 = v8;
  result.m_szVal = 0;
  *&v6 = *&v8 / v5;
  *&result.m_eType = (v6 << 32) | 1;
  return result;
}


// CDOTA_Buff_Wards::CheckState  (line 95, @0x0000000002e18a10, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Buff_Wards::CheckState(CDOTA_Buff_Wards *const this, CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x2000280uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFDFFFD7FLL;
}


// CDOTA_NPC_Observer_Ward::YouForgotToImplementOrDeclareServerClass  (line 104, @0x0000000002e18a30, libserver.so)
int __fastcall CDOTA_NPC_Observer_Ward::YouForgotToImplementOrDeclareServerClass(CDOTA_NPC_Observer_Ward *const this)
{
  return 0;
}


// CDOTA_NPC_Observer_Ward::GetServerClass  (line 104, @0x0000000002e1b900, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_NPC_Observer_Ward::GetServerClass(CDOTA_NPC_Observer_Ward *const this)
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


// CDOTA_NPC_Observer_Ward::GetDataDescMap  (line 114, @0x0000000002e18a40, libserver.so)
// globals: CDOTA_NPC_Observer_Ward::m_DataMap
datamap_t *__fastcall CDOTA_NPC_Observer_Ward::GetDataDescMap(CDOTA_NPC_Observer_Ward *const this)
{
  return &CDOTA_NPC_Observer_Ward::m_DataMap;
}


// CDOTA_NPC_Observer_Ward::AddDatadescMetadataKeys  (line 114, @0x0000000002e1bf80, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CDOTA_NPC_Observer_Ward::GetEntityClass(void)
void __fastcall CDOTA_NPC_Observer_Ward::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CDOTA_NPC_Observer_Ward::GetEntityClass);
}


// CDOTA_NPC_Observer_Ward::GetBaseMap  (line 114, @0x0000000002e1bfa0, libserver.so)
datamap_t *__cdecl CDOTA_NPC_Observer_Ward::GetBaseMap()
{
  return &CDOTA_BaseNPC::m_DataMap;
}


// DataMapInit<CDOTA_NPC_Observer_Ward>  (line 114, @0x0000000002e1bfb0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_item_08.cpp
// strings: "CDOTA_NPC_Observer_Ward"
// globals: `guard variable for'DataMapInit<CDOTA_NPC_Observer_Ward>(CDOTA_NPC_Observer_Ward *)::nameHolder, CDOTA_NPC_Observer_Ward::GetEntityClass(void), CDOTA_NPC_Observer_Ward::m_DataMap, DataMapInit<CDOTA_NPC_Observer_Ward>(CDOTA_NPC_Observer_Ward *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CDOTA_NPC_Observer_Ward>(CDOTA_NPC_Observer_Ward *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CDOTA_NPC_Observer_Ward>(CDOTA_NPC_Observer_Ward *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDOTA_NPC_Observer_Ward>(CDOTA_NPC_Observer_Ward *)::nameHolder) != 0 )
  {
    DataMapInit<CDOTA_NPC_Observer_Ward>(CDOTA_NPC_Observer_Ward *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CDOTA_NPC_Observer_Ward>(CDOTA_NPC_Observer_Ward *)::nameHolder.m_pszBase = "CDOTA_NPC_Observer_Ward";
    DataMapInit<CDOTA_NPC_Observer_Ward>(CDOTA_NPC_Observer_Ward *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CDOTA_NPC_Observer_Ward>(CDOTA_NPC_Observer_Ward *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CDOTA_NPC_Observer_Ward>(CDOTA_NPC_Observer_Ward *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CDOTA_NPC_Observer_Ward>(CDOTA_NPC_Observer_Ward *)::nameHolder.m_nLenBase = 23;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDOTA_NPC_Observer_Ward>(CDOTA_NPC_Observer_Ward *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CDOTA_NPC_Observer_Ward>(CDOTA_NPC_Observer_Ward *)::nameHolder,
      &_dso_handle);
  }
  CDOTA_NPC_Observer_Ward::m_DataMap.dataNumFields = 1;
  CDOTA_NPC_Observer_Ward::m_DataMap.baseMap = &CDOTA_BaseNPC::m_DataMap;
  CDOTA_NPC_Observer_Ward::m_DataMap.dataDesc = &DataMapInit<CDOTA_NPC_Observer_Ward>(CDOTA_NPC_Observer_Ward *)::dataDesc[1];
  AddDatadescMetadataKeys(&CDOTA_NPC_Observer_Ward::m_DataMap, CDOTA_NPC_Observer_Ward::GetEntityClass);
  return &CDOTA_NPC_Observer_Ward::m_DataMap;
}


// CDOTA_NPC_Observer_Ward::CDOTA_NPC_Observer_Ward  (line 118, @0x0000000002e1c080, libserver.so)  // inlines: CDOTA_BaseNPC_Additive
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
void __fastcall CDOTA_NPC_Observer_Ward::CDOTA_NPC_Observer_Ward(CDOTA_NPC_Observer_Ward *const this)
{
  CDOTA_BaseNPC::CDOTA_BaseNPC(this);
  this->_vptr_IHandleEntity = &off_478F4D0;
  this->_vptr_INextBotEventResponder = &off_4790440;
  this->_vptr_CObstructionObject = &off_4790770;
}


// CDOTA_NPC_Observer_Ward::Spawn  (line 125, @0x0000000002e19460, libserver.so)  // inlines: QAngle
// calls: CDOTA_BaseNPC::Spawn, CBaseEntity::SetAbsAngles
void __fastcall CDOTA_NPC_Observer_Ward::Spawn(CDOTA_NPC_Observer_Ward *const this, const CEntityKeyValues *pKeyValues)
{
  QAngle angles; // [rsp+0h] [rbp-20h] BYREF

  CDOTA_BaseNPC::Spawn(this, pKeyValues);
  this->m_iUnitType |= 0x20000u;
  angles.y = (*(*random_valve + 8LL))(random_valve, -70.0, -110.0);
  angles.x = 0.0;
  angles.z = 0.0;
  CBaseEntity::SetAbsAngles(this, &angles);
}


// CDOTA_NPC_Observer_Ward::Precache  (line 137, @0x0000000002e194c0, libserver.so)
// calls: CDOTA_BaseNPC::Precache, CDOTA_BaseNPC::GetModifiedAbilityParticleName, PrecacheParticleSystem
// strings: "particles/items2_fx/ward_die_generic.vpcf", "particles/items2_fx/ward_die_generic_sentry.vpcf"
void __fastcall CDOTA_NPC_Observer_Ward::Precache(
        CDOTA_NPC_Observer_Ward *const this,
        const CEntityPrecacheContext *pContext)
{
  const char *ModifiedAbilityParticleName; // rax
  const char *v5; // rax

  CDOTA_BaseNPC::Precache(this, pContext);
  ModifiedAbilityParticleName = CDOTA_BaseNPC::GetModifiedAbilityParticleName(
                                  this,
                                  "particles/items2_fx/ward_die_generic.vpcf");
  PrecacheParticleSystem(ModifiedAbilityParticleName, pContext);
  v5 = CDOTA_BaseNPC::GetModifiedAbilityParticleName(this, "particles/items2_fx/ward_die_generic_sentry.vpcf");
  PrecacheParticleSystem(v5, pContext);
}


// CDOTA_NPC_Observer_Ward::ShouldTransmit  (line 145, @0x0000000002e18e20, libserver.so)
// calls: CBaseEntity::ShouldTransmit
int __fastcall CDOTA_NPC_Observer_Ward::ShouldTransmit(
        CDOTA_NPC_Observer_Ward *const this,
        const CGameCheckTransmitInfo *pInfo)
{
  return CBaseEntity::ShouldTransmit(this, pInfo);
}


// CDOTA_NPC_Observer_Ward::CalculateActivityModifiers  (line 155, @0x0000000002e19510, libserver.so)
// calls: CDOTA_BaseNPC::CalculateActivityModifiers, CDOTA_BaseNPC::AddActivityModifier
void __fastcall CDOTA_NPC_Observer_Ward::CalculateActivityModifiers(
        CDOTA_NPC_Observer_Ward *const this,
        Activity iActivity)
{
  UtlSymId_t v3[16]; // [rsp+0h] [rbp-20h] BYREF

  CDOTA_BaseNPC::CalculateActivityModifiers(this, iActivity);
  CDOTA_BaseNPC::AddActivityModifier(v3, this, "observer");
}


// CDOTA_NPC_Observer_Ward::GetPortraitActivityModifier  (line 162, @0x0000000002e18a50, libserver.so)
const char *__fastcall CDOTA_NPC_Observer_Ward::GetPortraitActivityModifier(CDOTA_NPC_Observer_Ward *const this)
{
  return "observer";
}


// CDOTA_NPC_Observer_Ward::ComputeOverriddenGeneratingItem  (line 222, @0x0000000002e19570, libserver.so)  // inlines: GetItemInLoadoutForHeroBySlotTypeAndPlayerID
// calls: CDOTA_BaseNPC::GetEconSpecifyingPlayerID, DOTAInventoryManager, CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType
CEconItemView *__fastcall CDOTA_NPC_Observer_Ward::ComputeOverriddenGeneratingItem(
        CDOTA_NPC_Observer_Ward *const this,
        const CEntityKeyValues *pKeyValues)
{
  int EconSpecifyingPlayerID; // ebx
  CDOTAInventoryManager *v3; // rax
  int pPlayerID[5]; // [rsp+Ch] [rbp-14h] BYREF

  EconSpecifyingPlayerID = CDOTA_BaseNPC::GetEconSpecifyingPlayerID(this);
  v3 = DOTAInventoryManager();
  pPlayerID[0] = EconSpecifyingPlayerID;
  return CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType(v3, 1000, 33, pPlayerID);
}


// CDOTA_NPC_Observer_Ward::PostSpawn  (line 228, @0x0000000002e1e5e0, libserver.so)  // inlines: AddToTail, AddWard, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, DOTAGameRules, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Set, operator[]
// calls: KeyValues::KeyValues, KeyValues::SetInt, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CUtlMemory<CHandle<CBaseEntity>, int>::Grow, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_NPC_Observer_Ward_TrueSight::PostSpawn
// strings: "CDOTA_NPC_Observer_Ward::PostSpawn", "modifier_item_buff_ward"
void __fastcall CDOTA_NPC_Observer_Ward::PostSpawn(CDOTA_NPC_Observer_Ward *const this)
{
  CEntityIdentity *m_pEntity; // rax
  __int16 v3; // cx
  CGameRules *v4; // rbx
  __int64 v5; // r13
  int v6; // eax
  int *v7; // rax
  int v8; // [rsp+0h] [rbp-50h]
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-28h]

  v10 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "CDOTA_NPC_Observer_Ward::PostSpawn");
  KeyValues::SetInt(&kv, "duration", this->m_iDuration);
  CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_item_buff_ward", &kv, 0);
  m_pEntity = this->m_pEntity;
  v8 = -1;
  if ( m_pEntity != 0 )
  {
    v3 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v3 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v8 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v3 & 0x7FFF;
  }
  v4 = g_pGameRules;
  v5 = *&g_pGameRules[55].m_szQuestName[104];
  v6 = *&g_pGameRules[55].m_szQuestName[104];
  if ( v5 == *&g_pGameRules[55].m_szQuestName[120] )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&g_pGameRules[55].m_szQuestName[112], 1);
    v6 = *&v4[55].m_szQuestName[104];
  }
  *&v4[55].m_szQuestName[104] = v6 + 1;
  v7 = (*&v4[55].m_szQuestName[112] + 4 * v5);
  if ( v7 != 0 )
    *v7 = v8;
  KeyValues::~KeyValues(&kv);
}


// CDOTA_NPC_Observer_Ward::OnDying  (line 239, @0x0000000002e1da50, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, GetEHandle, GetEntryIndex, GetSerialNumber, RemoveWard, Set
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::FindAndFastRemove, CDOTABody::StartAnimation
// callers: CDOTA_NPC_Observer_Ward_TrueSight::OnDying
void __fastcall CDOTA_NPC_Observer_Ward::OnDying(CDOTA_NPC_Observer_Ward *const this)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v3; // cx
  CDOTABody *v4; // rax
  CHandle<CBaseEntity> src; // [rsp+0h] [rbp-20h] BYREF

  src.m_Index = -1;
  if ( this != 0 )
  {
    m_pEntity = this->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v3 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v3 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v3 & 0x7FFF;
    }
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FindAndFastRemove(
    &g_pGameRules[55].m_szQuestName[104],
    &src);
  v4 = (*(this->_vptr_IHandleEntity + 377))(this);
  CDOTABody::StartAnimation(v4, 0x5E2u, 0, 1.0);
}


// CDOTA_NPC_Observer_Ward::OnSaveState  (line 259, @0x0000000002e1a380, libserver.so)  // inlines: GetModifier_Constant_First, IsListeningToEvent
// calls: CDOTA_ModifierManager::GetModifier_Constant_First_Internal, CDOTA_BaseNPC::OnSaveState
bool __fastcall CDOTA_NPC_Observer_Ward::OnSaveState(CDOTA_NPC_Observer_Ward *const this, KeyValues *pKV)
{
  float Modifier_Constant_First_Internal; // xmm0_4
  __int64 v5; // rax

  Modifier_Constant_First_Internal = -1.0;
  v5 = this->m_ModifierManager.m_buffsForModifiers[157];
  if ( v5 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v5].m_Size > 0 )
    Modifier_Constant_First_Internal = CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
                                         &this->m_ModifierManager,
                                         modifierfunction::MODIFIER_PROPERTY_LIFETIME_FRACTION,
                                         &CModifierParams::s_Default);
  this->m_iDuration = (this->m_iDuration * Modifier_Constant_First_Internal);
  return CDOTA_BaseNPC::OnSaveState(this, pKV);
}


// CDOTA_NPC_Observer_Ward::OnLoadState  (line 266, @0x0000000002e18df0, libserver.so)
// calls: CDOTA_BaseNPC::OnLoadState
bool __fastcall CDOTA_NPC_Observer_Ward::OnLoadState(CDOTA_NPC_Observer_Ward *const this, KeyValues *pKV)
{
  CDOTA_BaseNPC::OnLoadState(this, pKV);
  (*(this->_vptr_IHandleEntity + 490))(this);
  return 1;
}


// CDOTA_NPC_Observer_Ward::Event_Killed  (line 275, @0x0000000002e1a5e0, libserver.so)  // inlines: Get, GetAttacker, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::Event_Killed, CDOTA_PlayerResource::IncrementWardsDestroyed
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_NPC_Observer_Ward::Event_Killed(
        CDOTA_NPC_Observer_Ward *const this,
        const CTakeDamageInfo *const info)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // rax

  m_Index = info->m_hAttacker.m_Index;
  if ( m_Index + 2 > 1
    && (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F]) != 0
    && (v6 = &v5[info->m_hAttacker.m_Index & 0x1FF]) != 0
    && m_Index == v6->m_EHandle.m_Index
    && (m_pInstance = v6->m_pInstance, v6->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
    && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
  {
    CDOTA_PlayerResource::IncrementWardsDestroyed(g_pDOTAPlayerResource, m_pInstance[100]._vptr_IHandleEntity);
    CDOTA_BaseNPC::Event_Killed(this, info);
  }
  else
  {
    CDOTA_BaseNPC::Event_Killed(this, info);
  }
}


// CDOTA_NPC_Observer_Ward_TrueSight::GetDataDescMap  (line 293, @0x0000000002e18a60, libserver.so)
// globals: CDOTA_NPC_Observer_Ward_TrueSight::m_DataMap
datamap_t *__fastcall CDOTA_NPC_Observer_Ward_TrueSight::GetDataDescMap(CDOTA_NPC_Observer_Ward_TrueSight *const this)
{
  return &CDOTA_NPC_Observer_Ward_TrueSight::m_DataMap;
}


// CDOTA_NPC_Observer_Ward_TrueSight::AddDatadescMetadataKeys  (line 293, @0x0000000002e1c0c0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClass(void)
void __fastcall CDOTA_NPC_Observer_Ward_TrueSight::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClass);
}


// CDOTA_NPC_Observer_Ward_TrueSight::GetBaseMap  (line 293, @0x0000000002e1c0e0, libserver.so)
// globals: CDOTA_NPC_Observer_Ward::m_DataMap
datamap_t *__cdecl CDOTA_NPC_Observer_Ward_TrueSight::GetBaseMap()
{
  return &CDOTA_NPC_Observer_Ward::m_DataMap;
}


// DataMapInit<CDOTA_NPC_Observer_Ward_TrueSight>  (line 293, @0x0000000002e1c0f0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_item_08.cpp
// strings: "CDOTA_NPC_Observer_Ward_TrueSight"
// globals: `guard variable for'DataMapInit<CDOTA_NPC_Observer_Ward_TrueSight>(CDOTA_NPC_Observer_Ward_TrueSight *)::nameHolder, CDOTA_NPC_Observer_Ward::m_DataMap, CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClass(void), CDOTA_NPC_Observer_Ward_TrueSight::m_DataMap, DataMapInit<CDOTA_NPC_Observer_Ward_TrueSight>(CDOTA_NPC_Observer_Ward_TrueSight *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CDOTA_NPC_Observer_Ward_TrueSight>(CDOTA_NPC_Observer_Ward_TrueSight *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CDOTA_NPC_Observer_Ward_TrueSight>(CDOTA_NPC_Observer_Ward_TrueSight *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDOTA_NPC_Observer_Ward_TrueSight>(CDOTA_NPC_Observer_Ward_TrueSight *)::nameHolder) != 0 )
  {
    DataMapInit<CDOTA_NPC_Observer_Ward_TrueSight>(CDOTA_NPC_Observer_Ward_TrueSight *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CDOTA_NPC_Observer_Ward_TrueSight>(CDOTA_NPC_Observer_Ward_TrueSight *)::nameHolder.m_pszBase = "CDOTA_NPC_Observer_Ward_TrueSight";
    DataMapInit<CDOTA_NPC_Observer_Ward_TrueSight>(CDOTA_NPC_Observer_Ward_TrueSight *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CDOTA_NPC_Observer_Ward_TrueSight>(CDOTA_NPC_Observer_Ward_TrueSight *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CDOTA_NPC_Observer_Ward_TrueSight>(CDOTA_NPC_Observer_Ward_TrueSight *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CDOTA_NPC_Observer_Ward_TrueSight>(CDOTA_NPC_Observer_Ward_TrueSight *)::nameHolder.m_nLenBase = 33;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDOTA_NPC_Observer_Ward_TrueSight>(CDOTA_NPC_Observer_Ward_TrueSight *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CDOTA_NPC_Observer_Ward_TrueSight>(CDOTA_NPC_Observer_Ward_TrueSight *)::nameHolder,
      &_dso_handle);
  }
  CDOTA_NPC_Observer_Ward_TrueSight::m_DataMap.dataNumFields = 1;
  CDOTA_NPC_Observer_Ward_TrueSight::m_DataMap.baseMap = &CDOTA_NPC_Observer_Ward::m_DataMap;
  CDOTA_NPC_Observer_Ward_TrueSight::m_DataMap.dataDesc = &DataMapInit<CDOTA_NPC_Observer_Ward_TrueSight>(CDOTA_NPC_Observer_Ward_TrueSight *)::dataDesc[1];
  AddDatadescMetadataKeys(
    &CDOTA_NPC_Observer_Ward_TrueSight::m_DataMap,
    CDOTA_NPC_Observer_Ward_TrueSight::GetEntityClass);
  return &CDOTA_NPC_Observer_Ward_TrueSight::m_DataMap;
}


// CDOTA_NPC_Observer_Ward_TrueSight::YouForgotToImplementOrDeclareServerClass  (line 297, @0x0000000002e18a70, libserver.so)
int __fastcall CDOTA_NPC_Observer_Ward_TrueSight::YouForgotToImplementOrDeclareServerClass(
        CDOTA_NPC_Observer_Ward_TrueSight *const this)
{
  return 0;
}


// CDOTA_NPC_Observer_Ward_TrueSight::GetServerClass  (line 297, @0x0000000002e1b980, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_NPC_Observer_Ward_TrueSight::GetServerClass(
        CDOTA_NPC_Observer_Ward_TrueSight *const this)
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


// CDOTA_NPC_Observer_Ward_TrueSight::PostSpawn  (line 305, @0x0000000002e1e730, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTAAbility, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_NPC_Observer_Ward::PostSpawn, CDOTA_BaseNPC::FindModifierByName, CBaseAnimating::SetSkin, KeyValues::KeyValues, KeyValues::SetInt, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, __dynamic_cast, _Unwind_Resume
// strings: "modifier_ward_delay", "CDOTA_NPC_Observer_Ward::PostSpawn", "true_sight_range", "modifier_item_ward_true_sight"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_NPC_Observer_Ward_TrueSight::PostSpawn(CDOTA_NPC_Observer_Ward_TrueSight *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CBaseEntity *m_pInstance; // r14
  uint32 v6; // eax
  CDOTABaseAbility *v7; // r13
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  CDOTA_NPC_Observer_Ward::PostSpawn(this);
  if ( CDOTA_BaseNPC::FindModifierByName(this, "modifier_ward_delay", 0) == 0 )
  {
    m_Index = this->m_hCasterEntity.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hCasterEntity.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hCasterEntity.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    v6 = this->m_hAbilityEntity.m_Index;
    v7 = 0;
    if ( v6 + 2 > 1 )
    {
      v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAbilityEntity.m_Index) >> 9) & 0x3F];
      if ( v8 != 0 )
      {
        v9 = &v8[this->m_hAbilityEntity.m_Index & 0x1FF];
        if ( v9 != 0 && v6 == v9->m_EHandle.m_Index && v9->m_pInstance != 0 )
          v7 = __dynamic_cast(v9->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
      }
    }
    KeyValues::KeyValues(&kv, "CDOTA_NPC_Observer_Ward::PostSpawn");
    KeyValues::SetInt(&kv, "duration", this->m_iDuration);
    KeyValues::SetInt(&kv, "true_sight_range", this->m_iTrueSight);
    CDOTA_BaseNPC::AddNewModifier(this, m_pInstance, v7, "modifier_item_ward_true_sight", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
  CBaseAnimating::SetSkin(this, 1);
}


// CDOTA_NPC_Observer_Ward_TrueSight::OnDying  (line 327, @0x0000000002e1db00, libserver.so)
// calls: CDOTA_NPC_Observer_Ward::OnDying, CDOTABody::StartAnimation
void __fastcall CDOTA_NPC_Observer_Ward_TrueSight::OnDying(CDOTA_NPC_Observer_Ward_TrueSight *const this)
{
  CDOTABody *v2; // rax

  CDOTA_NPC_Observer_Ward::OnDying(this);
  v2 = (*(this->_vptr_IHandleEntity + 377))(this);
  CDOTABody::StartAnimation(v2, 0x5E2u, 0, 1.0);
}


// CDOTA_NPC_Observer_Ward_TrueSight::CalculateActivityModifiers  (line 340, @0x0000000002e19540, libserver.so)
// calls: CDOTA_BaseNPC::CalculateActivityModifiers, CDOTA_BaseNPC::AddActivityModifier
void __fastcall CDOTA_NPC_Observer_Ward_TrueSight::CalculateActivityModifiers(
        CDOTA_NPC_Observer_Ward_TrueSight *const this,
        Activity iActivity)
{
  UtlSymId_t v3[16]; // [rsp+0h] [rbp-20h] BYREF

  CDOTA_BaseNPC::CalculateActivityModifiers(this, iActivity);
  CDOTA_BaseNPC::AddActivityModifier(v3, this, "sentry");
}


// CDOTA_NPC_Observer_Ward_TrueSight::GetPortraitActivityModifier  (line 348, @0x0000000002e18a80, libserver.so)
const char *__fastcall CDOTA_NPC_Observer_Ward_TrueSight::GetPortraitActivityModifier(
        CDOTA_NPC_Observer_Ward_TrueSight *const this)
{
  return "sentry";
}


// CDOTA_Item_ObserverWard::~CDOTA_Item_ObserverWard  (line 357, @0x0000000002e22b60, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_ObserverWard::~CDOTA_Item_ObserverWard(CDOTA_Item_ObserverWard *const this)
{
  this->_vptr_IHandleEntity = &off_4791B50;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_ObserverWard::~CDOTA_Item_ObserverWard  (line 357, @0x0000000002e22b80, libserver.so)  // inlines: ~CDOTA_Item_ObserverWard
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_ObserverWard::~CDOTA_Item_ObserverWard(CDOTA_Item_ObserverWard *const this)
{
  this->_vptr_IHandleEntity = &off_4791B50;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_ObserverWard::Schema_DynamicBinding  (line 359, @0x0000000002e21080, libserver.so)
// globals: CDOTA_Item_ObserverWard::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_ObserverWard::Schema_DynamicBinding(
        const CDOTA_Item_ObserverWard *const this)
{
  return CDOTA_Item_ObserverWard::s_pSchemaBinding;
}


// CDOTA_Item_ObserverWard::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 359, @0x0000000002e21090, libserver.so)
// globals: CDOTA_Item_ObserverWard::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_ObserverWard::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_ObserverWard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_ObserverWard::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_ObserverWard::CEntityInstanceEntityClass::DestructInstance  (line 359, @0x0000000002e210a0, libserver.so)  // inlines: Destruct<CDOTA_Item_ObserverWard>
void __fastcall CDOTA_Item_ObserverWard::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_ObserverWard::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_ObserverWard::CEntityInstanceEntityClass::FreeInstance  (line 359, @0x0000000002e210c0, libserver.so)
void __fastcall CDOTA_Item_ObserverWard::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_ObserverWard::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_ObserverWard::CEntityInstanceEntityClass::CanAllocate  (line 359, @0x0000000002e210e0, libserver.so)
bool __fastcall CDOTA_Item_ObserverWard::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_ObserverWard::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_ObserverWard::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 359, @0x0000000002e210f0, libserver.so)
// globals: CDOTA_Item_ObserverWard::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_ObserverWard::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_ObserverWard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_ObserverWard::s_pSchemaBinding;
}


// CDOTA_Item_ObserverWard::CEntityInstanceEntityClass::AllocateInstance  (line 359, @0x0000000002e21e30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_ObserverWard::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_ObserverWard::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_ObserverWard::CEntityInstanceEntityClass::ConstructInstance  (line 359, @0x0000000002e22770, libserver.so)  // inlines: CDOTA_Item_ObserverWard, Construct<CDOTA_Item_ObserverWard>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_ObserverWard::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_ObserverWard::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4791B50;
  }
  return p;
}


// CDOTA_Item_ObserverWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 359, @0x0000000002e23b30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_ObserverWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_ObserverWard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_ObserverWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 359, @0x0000000002e23b50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_ObserverWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_ObserverWard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_ObserverWard::GetEntityClassInternal  (line 359, @0x0000000002e29320, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_08.cpp
// strings: "item_ward_observer", "CDOTA_Item_ObserverWard"
// globals: `guard variable for'CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass, CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Item_ObserverWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_ObserverWard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ObserverWardClassInfo, CDOTA_Item_ObserverWard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ObserverWardClassInfo
CEntityClass *__cdecl CDOTA_Item_ObserverWard::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass) != 0 )
  {
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_designerName.u.m_Id = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_AllHelpers.m_Size = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_classInputs.m_Size = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_classOutputs.m_Size = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_hNetworkSerializer = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_pBaseClassInfo = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_pClassInfo = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_flags = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_nAllHelpersFlags = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_pScriptClassDesc = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_pInputs = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_nInputCount = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_pOutputs = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_nOutputCount = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_pGameClass = 0;
    CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass._vptr_CEntityClass = off_4791AD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass);
    __cxa_atexit(
      CDOTA_Item_ObserverWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_ObserverWardClass != 0 )
    return &CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass;
  if ( `guard variable for'CDOTA_Item_ObserverWard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ObserverWardClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_ObserverWard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ObserverWardClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_ObserverWard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ObserverWardClassInfo,
      "CDOTA_Item_ObserverWard",
      "item_ward_observer",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_ObserverWard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ObserverWardClassInfo);
  }
  CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_pClassInfo = &CDOTA_Item_ObserverWard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ObserverWardClassInfo;
  CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_pBaseClassInfo = CDOTA_Item_ObserverWard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ObserverWardClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_ObserverWardClass = &CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass;
  CDOTA_Item_ObserverWard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_ObserverWardClassInfo.m_pClass = &CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass;
  CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_ObserverWardClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_ObserverWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_ObserverWardClass;
}


// CDOTA_Item_ObserverWard::GetIntrinsicModifierName  (line 374, @0x0000000002e21100, libserver.so)
// strings: "modifier_item_observer_ward"
const char *__fastcall CDOTA_Item_ObserverWard::GetIntrinsicModifierName(CDOTA_Item_ObserverWard *const this)
{
  return "modifier_item_observer_ward";
}


// CDOTA_Item_ObserverWard::GetCastRange  (line 379, @0x0000000002e229a0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCastRange
int __fastcall CDOTA_Item_ObserverWard::GetCastRange(
        CDOTA_Item_ObserverWard *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  if ( CDOTABaseAbility::GetCaster(this) != 0 && (CDOTABaseAbility::GetCaster(this)->m_iUnitType & 0x100) != 0 )
    return 25;
  else
    return CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
}


// CDOTA_Item_ObserverWard::CausesAutoattack  (line 382, @0x0000000002e21110, libserver.so)
bool __fastcall CDOTA_Item_ObserverWard::CausesAutoattack(CDOTA_Item_ObserverWard *const this)
{
  return 0;
}


// CDOTA_Item_ObserverWard::GetAllowedTargetBehavior  (line 387, @0x0000000002e21120, libserver.so)  // inlines: GetAllowedTargetBehavior
int __fastcall CDOTA_Item_ObserverWard::GetAllowedTargetBehavior(CDOTA_Item_ObserverWard *const this)
{
  return (*(this->_vptr_IHandleEntity + 251))(this) | 8;
}


// CDOTA_Item_ObserverWard::YouForgotToImplementOrDeclareServerClass  (line 398, @0x0000000002e18a90, libserver.so)
int __fastcall CDOTA_Item_ObserverWard::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_ObserverWard *const this)
{
  return 0;
}


// CDOTA_Item_ObserverWard::GetServerClass  (line 398, @0x0000000002e1b940, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_ObserverWard::GetServerClass(CDOTA_Item_ObserverWard *const this)
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


// CDOTA_Item_ObserverWard::OnPurchase  (line 408, @0x0000000002e1a4f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CDOTA_Item::OnPurchase, EconEntity_OnOwnerKillEaterEvent, CDOTA_PlayerResource::AddToWardsPurchased
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Item_ObserverWard::OnPurchase(
        CDOTA_Item_ObserverWard *const this,
        int nCombineType,
        const char *pszRecipeItemName)
{
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC_Hero *m_pInstance; // r14
  _DWORD v8[12]; // [rsp+0h] [rbp-30h] BYREF

  CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(v8, g_pDOTAPlayerResource, this->m_iPlayerOwnerID.m_Value);
  if ( (v8[0] + 2) > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8[0]) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[v8[0] & 0x1FF];
      if ( v6 != 0 && v8[0] == v6->m_EHandle.m_Index )
      {
        m_pInstance = v6->m_pInstance;
        if ( v6->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && (m_pInstance->m_iUnitType & 1) != 0 )
        {
          EconEntity_OnOwnerKillEaterEvent(
            v6->m_pInstance,
            0,
            kill_eater_event_t::kKillEaterEventType_Wards_Purchased,
            1,
            INVALID_ITEM_DEF_INDEX);
          CDOTA_PlayerResource::AddToWardsPurchased(g_pDOTAPlayerResource, m_pInstance->m_iPlayerID.m_Value, 1);
        }
      }
    }
  }
  CDOTA_Item::OnPurchase(this, nCombineType, 0);
}


// OnObserverWardSpawn  (line 425, @0x0000000002e1aad0, libserver.so)  // inlines: AssignTo, Base, CEntityHandle, Element, FindKeyHash, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GetValue, GetValue<CEntityHandle>, GetValue<Vector>, GetValue<float>, GetValue<int>, IndexToIdentity, LookupEntity, Min<long long unsigned int>, Min<unsigned int>, SetDuration, atof, atoi, entindex, operator CBaseEntity*, operator=, operator[]
// calls: KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, VariantFieldTypeName, Warning, GetPositionOnGround, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound, CEntityInstance::GetEntityIndex (19 total)
// strings: "modifier_ward_delay", "No free conversion of %s variant to Vector right now\n", "particles/items2_fx/ward_spawn_generic.vpcf", "DOTA_Item.ObserverWard.Activate", "No free conversion of %s variant to EHANDLE2 right now\n", "No conversion from %s to int now\n" (7 total)
// globals: CEntityHandle::gm_pEntityList, CEntityKeyValues::sm_EmptyVariant, jpt_2E1AE2D, jpt_2E1AFA9
void __fastcall OnObserverWardSpawn(CDOTA_BaseNPC *pEntity, const CEntityKeyValues *pKeyValues)
{
  __int64 v3; // rax
  int m_nCount; // edx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // si
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rcx
  CEntityVariant *p_m_value; // rax
  int16 m_type; // cx
  vec_t m_float; // esi
  CDOTA_BaseNPC *m_pInstance; // r13
  CEntityIdentity *v13; // rax
  CEntityIdentity *v14; // rax
  CEntityVariant *v15; // rdx
  int16 v16; // ax
  float v17; // xmm1_4
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v18; // si
  __int64 v19; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v20; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v21; // rdx
  vec_t **v22; // rdi
  int16 v23; // ax
  const char *v24; // rax
  vec_t x; // xmm0_4
  vec_t y; // xmm1_4
  vec_t z; // xmm2_4
  int (**vptr_IHandleEntity)(...); // rax
  int v29; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v30; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v32; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *m_uint64; // rdx
  CEntityVariant *v34; // rcx
  int16 v35; // ax
  int (**v36)(...); // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r14d
  CDOTA_ParticleManager *v39; // rax
  int32 m_Data; // r14d
  CEntityIndex v41; // eax
  int v42; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v43; // cx
  __int64 j; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v45; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v46; // rdx
  const char *v47; // rax
  const char *v48; // rax
  const char *v49; // rax
  Vector vLocation; // [rsp+10h] [rbp-60h] BYREF
  Vector vLocationOnGround; // [rsp+20h] [rbp-50h] BYREF
  KeyValues kv; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v53; // [rsp+48h] [rbp-28h]
  Vector PositionOnGround; // 0:kr10_12.12

  v53 = __readfsqword(0x28u);
  v3 = 0;
  if ( pEntity == 0 )
    return;
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_23:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( m_type != 0 )
      goto LABEL_13;
    goto LABEL_24;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v3) == -1542362667 )
      goto LABEL_10;
LABEL_7:
    if ( m_nCount <= ++v3 )
      goto LABEL_23;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v3] != -1542362667 )
    goto LABEL_7;
LABEL_10:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v8 = pKeyValues->m_keyValues.m_pElements;
  else
    v8 = 0;
  p_m_value = &v8[v3].m_value;
  m_type = p_m_value->m_type;
  if ( m_type == 0 )
  {
LABEL_24:
    m_pInstance = 0;
    goto LABEL_25;
  }
LABEL_13:
  m_float = p_m_value->m_float;
  if ( m_type != 13 )
  {
    v47 = VariantFieldTypeName(m_type);
    Warning("No free conversion of %s variant to EHANDLE2 right now\n", v47);
    m_nCount = pKeyValues->m_keyHashes.m_nCount;
    goto LABEL_24;
  }
  m_pInstance = 0;
  LODWORD(vLocationOnGround.x) = p_m_value->m_int;
  if ( (LODWORD(m_float) + 2) > 1 )
  {
    v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(vLocationOnGround.x) >> 9) & 0x3F];
    if ( v13 != 0 )
    {
      v14 = &v13[LOWORD(vLocationOnGround.x) & 0x1FF];
      if ( v14 != 0 && LODWORD(m_float) == v14->m_EHandle.m_Index )
        m_pInstance = v14->m_pInstance;
    }
  }
LABEL_25:
  if ( m_nCount <= 0 )
  {
LABEL_40:
    v22 = &CEntityKeyValues::sm_EmptyVariant;
    v23 = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( v23 != 0 )
      goto LABEL_36;
    goto LABEL_41;
  }
  v18 = pKeyValues->m_keyHashes.m_nAllocated;
  v19 = 0;
  while ( v18 == 0 )
  {
    if ( *(4 * v19) == 1070473527 )
      goto LABEL_33;
LABEL_30:
    if ( m_nCount <= ++v19 )
      goto LABEL_40;
  }
  v20 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( v18 > 9 )
    v20 = pKeyValues->m_keyHashes.m_pElements;
  if ( v20[v19] != 1070473527 )
    goto LABEL_30;
LABEL_33:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v21 = pKeyValues->m_keyValues.m_pElements;
  else
    v21 = 0;
  v22 = &v21[v19];
  v23 = *(v22 + 4);
  if ( v23 == 0 )
  {
LABEL_41:
    x = vec3_origin.x;
    y = vec3_origin.y;
    z = vec3_origin.z;
    goto LABEL_42;
  }
LABEL_36:
  if ( v23 == 30 )
  {
    if ( V_sscanf(*v22, "%g %g %g", &vLocationOnGround, &vLocationOnGround.y, &vLocationOnGround.z) == 3 )
    {
      y = vLocationOnGround.y;
      z = vLocationOnGround.z;
      x = vLocationOnGround.x;
      goto LABEL_42;
    }
    goto LABEL_41;
  }
  if ( v23 != 39 && v23 != 3 )
  {
    v24 = VariantFieldTypeName(v23);
    Warning("No free conversion of %s variant to Vector right now\n", v24);
    goto LABEL_41;
  }
  x = **v22;
  z = (*v22)[2];
  y = (*v22)[1];
LABEL_42:
  vLocation.x = x;
  vLocation.y = y;
  vLocation.z = z;
  PositionOnGround = GetPositionOnGround(&vLocation, pEntity);
  vptr_IHandleEntity = pEntity->_vptr_IHandleEntity;
  vLocationOnGround = PositionOnGround;
  vptr_IHandleEntity[128](pEntity, &vLocationOnGround, 0, 0);
  (*(pEntity->_vptr_IHandleEntity + 70))(pEntity, m_pInstance->m_iTeamNum.m_Value);
  v29 = pKeyValues->m_keyHashes.m_nCount;
  if ( v29 > 0 )
  {
    v30 = pKeyValues->m_keyHashes.m_nAllocated;
    for ( i = 0; v29 > i; ++i )
    {
      if ( v30 != 0 )
      {
        v32 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v30 > 9 )
          v32 = pKeyValues->m_keyHashes.m_pElements;
        if ( v32[i] == 1499669218 )
        {
LABEL_50:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            m_uint64 = pKeyValues->m_keyValues.m_pElements;
          else
            m_uint64 = 0;
          v34 = &m_uint64[i].m_value;
          LODWORD(m_uint64) = 0;
          v35 = v34->m_type;
          if ( v35 != 0 )
            goto LABEL_53;
          goto LABEL_55;
        }
      }
      else if ( *(4 * i) == 1499669218 )
      {
        goto LABEL_50;
      }
    }
  }
  v34 = &CEntityKeyValues::sm_EmptyVariant;
  LODWORD(m_uint64) = 0;
  v35 = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( v35 != 0 )
  {
LABEL_53:
    switch ( v35 )
    {
      case 1:
        LODWORD(m_uint64) = v34->m_float;
        break;
      case 5:
        LODWORD(m_uint64) = v34->m_int;
        break;
      case 6:
        LODWORD(m_uint64) = v34->m_char;
        break;
      case 26:
        LODWORD(m_uint64) = 0x7FFFFFFF;
        if ( v34->m_int64 <= 0x7FFFFFFF )
        {
          LODWORD(m_uint64) = 0x80000000;
          if ( v34->m_uint64 >= 0xFFFFFFFF80000000LL )
            m_uint64 = v34->m_uint64;
        }
        break;
      case 30:
        LODWORD(m_uint64) = strtol(v34->m_pszString, 0, 10);
        break;
      case 33:
        LODWORD(m_uint64) = 0x7FFFFFFF;
        if ( v34->m_uint64 <= 0x7FFFFFFE )
          LODWORD(m_uint64) = v34->m_uint64;
        break;
      case 34:
        LODWORD(m_uint64) = v34->m_float64;
        break;
      case 37:
        LODWORD(m_uint64) = 0x7FFFFFFF;
        if ( v34->m_int <= 0x7FFFFFFEu )
          LODWORD(m_uint64) = v34->m_int;
        break;
      default:
        v48 = VariantFieldTypeName(v35);
        Warning("No conversion from %s to int now\n", v48);
        LODWORD(m_uint64) = 0;
        break;
    }
  }
LABEL_55:
  v36 = pEntity->_vptr_IHandleEntity;
  LODWORD(pEntity[1]._vptr_IHandleEntity) = m_uint64;
  v36[490](pEntity);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/items2_fx/ward_spawn_generic.vpcf",
               1,
               pEntity,
               0,
               0);
  v39 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v39, Particle);
  DOTA_EmitSound(6, "DOTA_Item.ObserverWard.Activate", m_pInstance);
  m_Data = CEntityInstance::GetEntityIndex(pEntity).m_Data;
  v41.m_Data = CEntityInstance::GetEntityIndex(m_pInstance).m_Data;
  CreateUnitEvent(v41, m_Data, 8, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_WARD_PLACED);
  if ( CEntityKeyValues::HasValue(pKeyValues, 2030258919) )
  {
    v42 = pKeyValues->m_keyHashes.m_nCount;
    if ( v42 > 0 )
    {
      v43 = pKeyValues->m_keyHashes.m_nAllocated;
      for ( j = 0; v42 > j; ++j )
      {
        if ( v43 != 0 )
        {
          v45 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v43 > 9 )
            v45 = pKeyValues->m_keyHashes.m_pElements;
          if ( v45[j] == 2030258919 )
          {
LABEL_64:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v46 = pKeyValues->m_keyValues.m_pElements;
            else
              v46 = 0;
            v15 = &v46[j].m_value;
            goto LABEL_20;
          }
        }
        else if ( *(4 * j) == 2030258919 )
        {
          goto LABEL_64;
        }
      }
    }
    v15 = &CEntityKeyValues::sm_EmptyVariant;
LABEL_20:
    v16 = v15->m_type;
    if ( v16 != 0 )
    {
      switch ( v16 )
      {
        case 1:
        case 5:
        case 6:
        case 26:
        case 33:
        case 34:
        case 37:
          break;
        case 30:
          strtod(v15->m_pszString, 0);
          break;
        default:
          v49 = VariantFieldTypeName(v16);
          Warning("No conversion from %s to float now\n", v49);
          break;
      }
    }
    KeyValues::KeyValues(&kv, "modifier_ward_delay");
    KeyValues::SetFloat(&kv, "duration", v17);
    CDOTA_BaseNPC::AddNewModifier(pEntity, m_pInstance, 0, "modifier_ward_delay", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Item_ObserverWard::OnSpellStart  (line 463, @0x0000000002e1fd50, libserver.so)  // inlines: Bind, CDotaNPCSpawnerContext, CEntityHandle, CEntitySpawnerContext, CEntitySpawnerContextBase, CUtlAbstractDelegate, CUtlDelegate, ClosurePtr, Convert<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const, void (detail::GenericClass::*)()>, CopyFrom<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void> >, FastDelegate2, Get, GetEHandle, GetEntryIndex, GetOwnerEntity, GetPlayerOwnerID, GetSerialNumber, Init, NetworkStateChanged, Set, SetHasMixedOwnership, SetMementoFrom, SetPurchasedWhileDead, SetValue<CBaseEntity*>, SetValue<CEntityHandle>, SetValue<Vector>, SetValue<int>, ToDOTABaseNPCHero, UtlMakeDelegate<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, bindmemfunc<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const>, bindstaticfunc<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const>, operator=<bool>, ~CDotaNPCSpawner, ~CDotaNPCSpawnerAsync, ~CDotaNPCSpawnerContext, ~CEntitySpawner, ~CEntitySpawnerAsync, ~CEntitySpawnerAsyncBase, ~CEntitySpawnerContext, ~CEntitySpawnerContextBase
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorTarget, __dynamic_cast, DOTA_CreateItem, CDOTA_Item::SetCurrentCharges, CDOTA_Item::ExpireSellback, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::AddItem, UTIL_Remove, CDOTABaseAbility::GetCursorPosition, CEntityKeyValues::CEntityKeyValues, GetClassNameForUnitName (40 total)
// strings: "item_ward_observer", "npc_dota_observer_wards"
// globals: FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction(CDOTA_BaseNPC *,CEntityKeyValues const*), OnObserverWardSpawn(CDOTA_BaseNPC *,CEntityKeyValues const*), INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Item_ObserverWard::OnSpellStart(CDOTA_Item_ObserverWard *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  int m_Value; // r13d
  CDOTA_BaseNPC *v5; // rax
  CDOTA_Item *Item; // r13
  char v7; // r14
  CDOTA_UnitInventory *Inventory; // rax
  unsigned int (__fastcall *v9)(CDOTA_Item_ObserverWard *const, CDotaNPCSpawnerAsync<CDOTA_BaseNPC> *); // r13
  const char *ClassNameForUnitName; // r14
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rcx
  int v13; // edx
  __int16 v14; // si
  CDOTA_BaseNPC_Hero *v15; // rdi
  uint32 v16; // edx
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC_Hero *v20; // rdi
  CDOTA_BaseNPC *v21; // rax
  int v22; // ebx
  int ObserverWardsPlaced; // r14d
  int Assists; // r15d
  int Kills; // eax
  CDOTA_BaseNPC *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  int nDeaths; // [rsp+10h] [rbp-1D0h]
  float flGPM; // [rsp+14h] [rbp-1CCh]
  float flXPM; // [rsp+18h] [rbp-1C8h]
  int nLastHits; // [rsp+1Ch] [rbp-1C4h]
  int v32[4]; // [rsp+20h] [rbp-1C0h] BYREF
  CEntityHandle hHeroCaster; // [rsp+30h] [rbp-1B0h] BYREF
  CBaseEntity *value; // [rsp+40h] [rbp-1A0h] BYREF
  __int64 v35; // [rsp+48h] [rbp-198h]
  __int64 v36; // [rsp+50h] [rbp-190h]
  CDotaNPCSpawnerAsync<CDOTA_BaseNPC> spawner; // [rsp+60h] [rbp-180h] BYREF
  CDotaNPCSpawnerContext ctx; // [rsp+110h] [rbp-D0h] BYREF
  unsigned __int64 v39; // [rsp+1A8h] [rbp-38h]
  Vector CursorPosition; // 0:kr14_12.12
  Vector v41; // 0:kr20_12.12

  v39 = __readfsqword(0x28u);
  if ( CDOTABaseAbility::GetCaster(this) != 0 && (CDOTABaseAbility::GetCaster(this)->m_iUnitType & 0x100) != 0 )
    return;
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  if ( CursorTarget == 0 )
  {
    if ( CDOTABaseAbility::GetCursorTarget(this) != 0 )
      return;
    goto LABEL_17;
  }
  v3 = __dynamic_cast(CursorTarget, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_BaseNPC_Hero, 0);
  if ( CDOTABaseAbility::GetCursorTarget(this) != 0 )
  {
    if ( v3 == 0 )
      return;
    goto LABEL_7;
  }
  if ( v3 == 0 )
  {
LABEL_17:
    v9 = *(this->_vptr_IHandleEntity + 258);
    *&spawner._vptr_CEntitySpawnerBase = CDOTABaseAbility::GetCursorPosition(this);
    if ( v9(this, &spawner) != 0 )
      return;
    spawner.m_modifyScope.m_pKeyValues = 0;
    spawner.m_pEntityKeyValues = FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction;
    CEntityKeyValues::CEntityKeyValues(&ctx.m_entityKeyValues);
    ctx.m_pParent = 0;
    ctx.m_pCompletionListener = 0;
    ctx.m_callback.m_Closure.m_pFunction = *&spawner.m_pEntityKeyValues;
    ctx.m_callback.m_Closure.m_pthis = OnObserverWardSpawn;
    ClassNameForUnitName = GetClassNameForUnitName("npc_dota_observer_wards");
    Caster = CDOTABaseAbility::GetCaster(this);
    if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
    {
      m_pEntity = Caster->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v14 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v15 = Caster;
        LOWORD(spawner._vptr_CEntitySpawnerBase) = v14 | spawner._vptr_CEntitySpawnerBase & 0x8000;
        v16 = (v13 << 15) | spawner._vptr_CEntitySpawnerBase & 0x7FFF;
        LODWORD(spawner._vptr_CEntitySpawnerBase) = v16;
        goto LABEL_24;
      }
      v15 = Caster;
    }
    else
    {
      v15 = 0;
    }
    v16 = -1;
LABEL_24:
    hHeroCaster.m_Index = v16;
    if ( CDOTA_BaseNPC_Hero::HasChangedWardsSincePrecache(v15) )
    {
      CDotaNPCSpawnerAsync<CDOTA_BaseNPC>::CDotaNPCSpawnerAsync(
        &spawner,
        "npc_dota_observer_wards",
        &ctx,
        EntitySpawnerAsyncBehavior_t::ENTITY_SPAWNER_ASYNC_ADD_TO_ACTIVE_SPAWN_GROUP,
        ResourceManifestLoadPriority_t::RESOURCE_MANIFEST_LOAD_PRIORITY_DEFAULT,
        -2,
        30.0,
        0);
      CEntitySpawnerBase<CDOTA_BaseNPC>::SetClassName(&spawner, ClassNameForUnitName);
      v17 = CDOTABaseAbility::GetCaster(this);
      value = CEntityHandle::GetHandleEntity(&v17->m_hOwnerEntity.m_Value);
      CEntityKeyValues::SetValue<CBaseEntity *>(spawner.m_pEntityKeyValues, -1104771937, &value);
      v18 = CDOTABaseAbility::GetCaster(this);
      LODWORD(value) = (*(v18->_vptr_IHandleEntity + 414))(v18);
      CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, 2034954718, &value);
      CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
      value = *&CursorPosition.x;
      *&v35 = CursorPosition.z;
      CEntityKeyValues::SetValue<Vector>(spawner.m_pEntityKeyValues, 1070473527, &value);
      LODWORD(value) = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "lifetime", -1, 0);
      CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, 1499669218, &value);
      CEntityKeyValues::SetValue<CEntityHandle>(spawner.m_pEntityKeyValues, -1542362667, &hHeroCaster);
      value = 0;
      v35 = 0;
      v36 = 0;
      CEntitySpawnerAsyncBase<CDOTA_BaseNPC>::Spawn(&spawner, 0, &value);
      spawner._vptr_CEntitySpawnerBase = off_40FBEF0;
      CEntitySpawnerBase<CDOTA_BaseNPC>::~CEntitySpawnerBase(&spawner);
    }
    else
    {
      CDotaNPCSpawner<CDOTA_BaseNPC>::CDotaNPCSpawner(&spawner, "npc_dota_observer_wards", &ctx);
      CEntitySpawnerBase<CDOTA_BaseNPC>::SetClassName(&spawner, ClassNameForUnitName);
      v26 = CDOTABaseAbility::GetCaster(this);
      value = CEntityHandle::GetHandleEntity(&v26->m_hOwnerEntity.m_Value);
      CEntityKeyValues::SetValue<CBaseEntity *>(spawner.m_pEntityKeyValues, -1104771937, &value);
      v27 = CDOTABaseAbility::GetCaster(this);
      LODWORD(value) = (*(v27->_vptr_IHandleEntity + 414))(v27);
      CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, 2034954718, &value);
      v41 = CDOTABaseAbility::GetCursorPosition(this);
      value = *&v41.x;
      *&v35 = v41.z;
      CEntityKeyValues::SetValue<Vector>(spawner.m_pEntityKeyValues, 1070473527, &value);
      LODWORD(value) = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "lifetime", -1, 0);
      CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, 1499669218, &value);
      CEntityKeyValues::SetValue<CEntityHandle>(spawner.m_pEntityKeyValues, -1542362667, &hHeroCaster);
      CEntitySpawner<CDOTA_BaseNPC>::Spawn(v32, &spawner);
      spawner._vptr_CEntitySpawnerBase = off_40FC030;
      CEntitySpawnerBase<CDOTA_BaseNPC>::~CEntitySpawnerBase(&spawner);
    }
    CDOTA_Item::SpendCharge(this);
    v19 = CDOTABaseAbility::GetCaster(this);
    if ( v19 != 0 && (v19->m_iUnitType & 1) != 0 )
      v20 = v19;
    else
      v20 = 0;
    EconEntity_OnOwnerKillEaterEvent(
      v20,
      0,
      kill_eater_event_t::kKillEaterEvent_Wards_Placed,
      1,
      INVALID_ITEM_DEF_INDEX);
    v21 = CDOTABaseAbility::GetCaster(this);
    v22 = (*(v21->_vptr_IHandleEntity + 414))(v21);
    CDOTA_PlayerResource::IncrementObserverWardsPlaced(g_pDOTAPlayerResource, v22);
    ObserverWardsPlaced = CDOTA_PlayerResource::GetObserverWardsPlaced(g_pDOTAPlayerResource, v22);
    nLastHits = CDOTA_PlayerResource::GetLastHits(g_pDOTAPlayerResource, v22);
    flXPM = CDOTA_PlayerResource::GetXPPerMin(g_pDOTAPlayerResource, v22);
    flGPM = CDOTA_PlayerResource::GetGoldPerMin(g_pDOTAPlayerResource, v22);
    Assists = CDOTA_PlayerResource::GetAssists(g_pDOTAPlayerResource, v22);
    nDeaths = CDOTA_PlayerResource::GetDeaths(g_pDOTAPlayerResource, v22);
    Kills = CDOTA_PlayerResource::GetKills(g_pDOTAPlayerResource, v22);
    CDOTA_CombatLog::AddPlayerStatsEvent(
      &g_DOTACombatLog,
      v22,
      Kills,
      nDeaths,
      Assists,
      flGPM,
      flXPM,
      nLastHits,
      ObserverWardsPlaced);
    CEntityKeyValues::~CEntityKeyValues(&ctx.m_entityKeyValues);
    return;
  }
LABEL_7:
  if ( (*(v3->_vptr_IHandleEntity + 390))(v3) == 0 && !v3->m_bIsIllusion.m_Value )
  {
    m_Value = this->m_iPlayerOwnerID.m_Value;
    v5 = CDOTABaseAbility::GetCaster(this);
    Item = DOTA_CreateItem("item_ward_observer", v5, m_Value);
    if ( Item != 0 )
    {
      v7 = (*(this->_vptr_IHandleEntity + 139))(this) ^ 1;
      if ( v7 != Item->m_bPurchasedWhileDead.m_Value )
      {
        (*(Item->_vptr_IHandleEntity + 22))(Item, 992, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        Item->m_bPurchasedWhileDead.m_Value = v7;
      }
      CDOTA_Item::SetCurrentCharges(Item, 1);
      CDOTA_Item::ExpireSellback(Item);
      if ( this->m_bHasMixedOwnership )
      {
        Item->m_bHasMixedOwnership = 1;
        CDOTA_Item::SetSellable(Item, 0);
      }
      Inventory = CDOTA_BaseNPC::GetInventory(v3);
      if ( CDOTA_UnitInventory::AddItem(Inventory, Item, 1, -1, 0, 0) == DOTA_INVALID_ORDERS::DOTA_ORDER_SUCCESS )
        CDOTA_Item::SpendCharge(this);
      else
        UTIL_Remove(Item);
    }
  }
}


// CDOTA_Item_ObserverWard::CastFilterResult  (line 553, @0x0000000002e19680, libserver.so)
// calls: CDOTABaseAbility::CastFilterResult
int __fastcall CDOTA_Item_ObserverWard::CastFilterResult(CDOTA_Item_ObserverWard *const this, CDOTA_BaseNPC *pTarget)
{
  int result; // eax

  result = CDOTABaseAbility::CastFilterResult(this, pTarget);
  if ( result == 0 )
  {
    if ( pTarget != 0 && pTarget->m_bIsIllusion.m_Value )
      return 10;
    else
      return 0;
  }
  return result;
}


// CDOTA_Item_ObserverWard::CastFilterResult  (line 570, @0x0000000002e18e90, libserver.so)
// calls: CDOTABaseAbility::GetCaster
int __fastcall CDOTA_Item_ObserverWard::CastFilterResult(
        CDOTA_Item_ObserverWard *const this,
        const Vector *const vLocation)
{
  if ( CDOTABaseAbility::GetCaster(this) != 0
    && ((CDOTABaseAbility::GetCaster(this)->m_iUnitType & 0x100) != 0
     || (CDOTABaseAbility::GetCaster(this)->m_iUnitType & 2) != 0) )
  {
    return 23;
  }
  else
  {
    return 0;
  }
}


// CDOTA_Item_ObserverWard::GetCustomCastError  (line 588, @0x0000000002e18ef0, libserver.so)
// calls: CDOTABaseAbility::GetCaster
// strings: "#dota_hud_error_courier_cant_use_item", "#dota_hud_error_no_wards_here"
const char *__fastcall CDOTA_Item_ObserverWard::GetCustomCastError(
        CDOTA_Item_ObserverWard *const this,
        const Vector *const vLocation)
{
  if ( CDOTABaseAbility::GetCaster(this) != 0
    && ((CDOTABaseAbility::GetCaster(this)->m_iUnitType & 0x100) != 0
     || (CDOTABaseAbility::GetCaster(this)->m_iUnitType & 2) != 0) )
  {
    return "#dota_hud_error_courier_cant_use_item";
  }
  else
  {
    return "#dota_hud_error_no_wards_here";
  }
}


// CDOTA_Modifier_Item_ObserverWard::~CDOTA_Modifier_Item_ObserverWard  (line 611, @0x0000000002e22550, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_ObserverWard::~CDOTA_Modifier_Item_ObserverWard(
        CDOTA_Modifier_Item_ObserverWard *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_ObserverWard::~CDOTA_Modifier_Item_ObserverWard  (line 611, @0x0000000002e22570, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_ObserverWard
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_ObserverWard::~CDOTA_Modifier_Item_ObserverWard(
        CDOTA_Modifier_Item_ObserverWard *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Item_SentryWard::~CDOTA_Item_SentryWard  (line 623, @0x0000000002e22bb0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_SentryWard::~CDOTA_Item_SentryWard(CDOTA_Item_SentryWard *const this)
{
  this->_vptr_IHandleEntity = &off_4792A70;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_SentryWard::~CDOTA_Item_SentryWard  (line 623, @0x0000000002e22bd0, libserver.so)  // inlines: ~CDOTA_Item_SentryWard
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_SentryWard::~CDOTA_Item_SentryWard(CDOTA_Item_SentryWard *const this)
{
  this->_vptr_IHandleEntity = &off_4792A70;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_SentryWard::Schema_DynamicBinding  (line 625, @0x0000000002e21140, libserver.so)
// globals: CDOTA_Item_SentryWard::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_SentryWard::Schema_DynamicBinding(
        const CDOTA_Item_SentryWard *const this)
{
  return CDOTA_Item_SentryWard::s_pSchemaBinding;
}


// CDOTA_Item_SentryWard::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 625, @0x0000000002e21150, libserver.so)
// globals: CDOTA_Item_SentryWard::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_SentryWard::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_SentryWard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_SentryWard::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_SentryWard::CEntityInstanceEntityClass::DestructInstance  (line 625, @0x0000000002e21160, libserver.so)  // inlines: Destruct<CDOTA_Item_SentryWard>
void __fastcall CDOTA_Item_SentryWard::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_SentryWard::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_SentryWard::CEntityInstanceEntityClass::FreeInstance  (line 625, @0x0000000002e21180, libserver.so)
void __fastcall CDOTA_Item_SentryWard::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_SentryWard::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_SentryWard::CEntityInstanceEntityClass::CanAllocate  (line 625, @0x0000000002e211a0, libserver.so)
bool __fastcall CDOTA_Item_SentryWard::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_SentryWard::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_SentryWard::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 625, @0x0000000002e211b0, libserver.so)
// globals: CDOTA_Item_SentryWard::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_SentryWard::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_SentryWard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_SentryWard::s_pSchemaBinding;
}


// CDOTA_Item_SentryWard::CEntityInstanceEntityClass::AllocateInstance  (line 625, @0x0000000002e21e70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_SentryWard::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_SentryWard::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_SentryWard::CEntityInstanceEntityClass::ConstructInstance  (line 625, @0x0000000002e227a0, libserver.so)  // inlines: CDOTA_Item_SentryWard, Construct<CDOTA_Item_SentryWard>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_SentryWard::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_SentryWard::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4792A70;
  }
  return p;
}


// CDOTA_Item_SentryWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 625, @0x0000000002e23b80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_SentryWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_SentryWard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_SentryWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 625, @0x0000000002e23ba0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_SentryWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_SentryWard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_SentryWard::GetEntityClassInternal  (line 625, @0x0000000002e299c0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_08.cpp
// strings: "item_ward_sentry", "CDOTA_Item_SentryWard"
// globals: `guard variable for'CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass, CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Item_SentryWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_SentryWard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SentryWardClassInfo, CDOTA_Item_SentryWard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SentryWardClassInfo
CEntityClass *__cdecl CDOTA_Item_SentryWard::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass) != 0 )
  {
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_designerName.u.m_Id = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_AllHelpers.m_Size = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_classInputs.m_Size = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_classOutputs.m_Size = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_hNetworkSerializer = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_pBaseClassInfo = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_pClassInfo = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_flags = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_nAllHelpersFlags = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_pScriptClassDesc = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_pInputs = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_nInputCount = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_pOutputs = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_nOutputCount = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_pGameClass = 0;
    CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass._vptr_CEntityClass = off_47929F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass);
    __cxa_atexit(
      CDOTA_Item_SentryWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_SentryWardClass != 0 )
    return &CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass;
  if ( `guard variable for'CDOTA_Item_SentryWard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SentryWardClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_SentryWard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SentryWardClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_SentryWard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SentryWardClassInfo,
      "CDOTA_Item_SentryWard",
      "item_ward_sentry",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_SentryWard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SentryWardClassInfo);
  }
  CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_pClassInfo = &CDOTA_Item_SentryWard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SentryWardClassInfo;
  CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_pBaseClassInfo = CDOTA_Item_SentryWard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SentryWardClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_SentryWardClass = &CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass;
  CDOTA_Item_SentryWard::GetEntityClassInfo(void)::g_EntityCDOTA_Item_SentryWardClassInfo.m_pClass = &CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass;
  CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_SentryWardClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_SentryWard::GetEntityClassInternal(void)::g_EntityCDOTA_Item_SentryWardClass;
}


// CDOTA_Item_SentryWard::GetIntrinsicModifierName  (line 640, @0x0000000002e211c0, libserver.so)
// strings: "modifier_item_sentry_ward"
const char *__fastcall CDOTA_Item_SentryWard::GetIntrinsicModifierName(CDOTA_Item_SentryWard *const this)
{
  return "modifier_item_sentry_ward";
}


// CDOTA_Item_SentryWard::GetCastRange  (line 645, @0x0000000002e229f0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCastRange
int __fastcall CDOTA_Item_SentryWard::GetCastRange(
        CDOTA_Item_SentryWard *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  if ( CDOTABaseAbility::GetCaster(this) != 0 && (CDOTABaseAbility::GetCaster(this)->m_iUnitType & 0x100) != 0 )
    return 25;
  else
    return CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
}


// CDOTA_Item_SentryWard::CausesAutoattack  (line 648, @0x0000000002e211d0, libserver.so)
bool __fastcall CDOTA_Item_SentryWard::CausesAutoattack(CDOTA_Item_SentryWard *const this)
{
  return 0;
}


// CDOTA_Item_SentryWard::GetAllowedTargetBehavior  (line 653, @0x0000000002e211e0, libserver.so)  // inlines: GetAllowedTargetBehavior
int __fastcall CDOTA_Item_SentryWard::GetAllowedTargetBehavior(CDOTA_Item_SentryWard *const this)
{
  return (*(this->_vptr_IHandleEntity + 251))(this) | 8;
}


// CDOTA_Item_SentryWard::YouForgotToImplementOrDeclareServerClass  (line 661, @0x0000000002e18aa0, libserver.so)
int __fastcall CDOTA_Item_SentryWard::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_SentryWard *const this)
{
  return 0;
}


// CDOTA_Item_SentryWard::GetServerClass  (line 661, @0x0000000002e1b9c0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_SentryWard::GetServerClass(CDOTA_Item_SentryWard *const this)
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


// CDOTA_Item_SentryWard::OnPurchase  (line 671, @0x0000000002e1a400, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CDOTA_Item::OnPurchase, EconEntity_OnOwnerKillEaterEvent, CDOTA_PlayerResource::AddToWardsPurchased
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Item_SentryWard::OnPurchase(
        CDOTA_Item_SentryWard *const this,
        int nCombineType,
        const char *pszRecipeItemName)
{
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC_Hero *m_pInstance; // r14
  _DWORD v8[12]; // [rsp+0h] [rbp-30h] BYREF

  CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(v8, g_pDOTAPlayerResource, this->m_iPlayerOwnerID.m_Value);
  if ( (v8[0] + 2) > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8[0]) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[v8[0] & 0x1FF];
      if ( v6 != 0 && v8[0] == v6->m_EHandle.m_Index )
      {
        m_pInstance = v6->m_pInstance;
        if ( v6->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && (m_pInstance->m_iUnitType & 1) != 0 )
        {
          EconEntity_OnOwnerKillEaterEvent(
            v6->m_pInstance,
            0,
            kill_eater_event_t::kKillEaterEventType_Wards_Purchased,
            2,
            INVALID_ITEM_DEF_INDEX);
          CDOTA_PlayerResource::AddToWardsPurchased(g_pDOTAPlayerResource, m_pInstance->m_iPlayerID.m_Value, 2);
        }
      }
    }
  }
  CDOTA_Item::OnPurchase(this, nCombineType, 0);
}


// OnSentryWardSpawn  (line 688, @0x0000000002e1b170, libserver.so)  // inlines: AssignTo, Base, CEntityHandle, Element, FindKeyHash, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GetValue, GetValue<CEntityHandle>, GetValue<Vector>, GetValue<int>, IndexToIdentity, LookupEntity, Min<long long unsigned int>, Min<unsigned int>, SetDuration, atoi, entindex, operator CBaseEntity*, operator=, operator[]
// calls: GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound, CEntityInstance::GetEntityIndex, CreateUnitEvent, VariantFieldTypeName, Warning, GetPositionOnGround, V_sscanf, strtol
// strings: "particles/items2_fx/ward_spawn_generic.vpcf", "DOTA_Item.SentryWard.Activate", "No free conversion of %s variant to Vector right now\n", "No free conversion of %s variant to EHANDLE2 right now\n", "No conversion from %s to int now\n"
// globals: CEntityHandle::gm_pEntityList, CEntityKeyValues::sm_EmptyVariant, jpt_2E1B4DD, jpt_2E1B6E9
void __fastcall OnSentryWardSpawn(CDOTA_BaseNPC *pEntity, const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // edx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // si
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rcx
  CEntityVariant *p_m_value; // rax
  int16 m_type; // cx
  vec_t m_float; // esi
  CDOTA_BaseNPC *m_pInstance; // r12
  CEntityIdentity *v13; // rax
  CEntityIdentity *v14; // rax
  CEntityVariant *v15; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v16; // rdx
  int16 v17; // ax
  int (**v18)(...); // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v21; // rax
  CEntityIndex v22; // ebx
  CEntityIndex v23; // eax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v24; // si
  __int64 v25; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v26; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v27; // rdx
  vec_t **v28; // rdi
  int16 v29; // ax
  const char *v30; // rax
  vec_t x; // xmm0_4
  vec_t y; // xmm1_4
  vec_t z; // xmm2_4
  int (**vptr_IHandleEntity)(...); // rax
  int v35; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v36; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v38; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *m_uint64; // rdx
  CEntityVariant *v40; // rcx
  int16 v41; // ax
  int v42; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v43; // cx
  __int64 v44; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v45; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v46; // rdx
  CEntityVariant *v47; // rax
  int16 v48; // dx
  int m_int; // eax
  const char *v50; // rax
  int v51; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v52; // cx
  __int64 v53; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v54; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v55; // rdx
  CEntityVariant *v56; // rax
  int16 v57; // dx
  int v58; // eax
  const char *v59; // rax
  int v60; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v61; // cx
  __int64 j; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v63; // rdx
  const char *v64; // rax
  const char *v65; // rax
  const char *v66; // rax
  Vector vLocation; // [rsp+0h] [rbp-40h] BYREF
  Vector vLocationOnGround; // [rsp+10h] [rbp-30h] BYREF
  Vector PositionOnGround; // 0:kr10_12.12

  if ( pEntity == 0 )
    return;
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_22:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( m_type != 0 )
      goto LABEL_13;
    goto LABEL_23;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v6 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v6) == -1542362667 )
      goto LABEL_10;
LABEL_7:
    if ( m_nCount <= ++v6 )
      goto LABEL_22;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v6] != -1542362667 )
    goto LABEL_7;
LABEL_10:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v8 = pKeyValues->m_keyValues.m_pElements;
  else
    v8 = 0;
  p_m_value = &v8[v6].m_value;
  m_type = p_m_value->m_type;
  if ( m_type == 0 )
  {
LABEL_23:
    m_pInstance = 0;
    goto LABEL_24;
  }
LABEL_13:
  m_float = p_m_value->m_float;
  if ( m_type != 13 )
  {
    v64 = VariantFieldTypeName(m_type);
    Warning("No free conversion of %s variant to EHANDLE2 right now\n", v64);
    m_nCount = pKeyValues->m_keyHashes.m_nCount;
    goto LABEL_23;
  }
  m_pInstance = 0;
  LODWORD(vLocationOnGround.x) = p_m_value->m_int;
  if ( (LODWORD(m_float) + 2) > 1 )
  {
    v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(vLocationOnGround.x) >> 9) & 0x3F];
    if ( v13 != 0 )
    {
      v14 = &v13[LOWORD(vLocationOnGround.x) & 0x1FF];
      if ( v14 != 0 && LODWORD(m_float) == v14->m_EHandle.m_Index )
        m_pInstance = v14->m_pInstance;
    }
  }
LABEL_24:
  if ( m_nCount <= 0 )
  {
LABEL_39:
    v28 = &CEntityKeyValues::sm_EmptyVariant;
    v29 = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( v29 != 0 )
      goto LABEL_35;
    goto LABEL_40;
  }
  v24 = pKeyValues->m_keyHashes.m_nAllocated;
  v25 = 0;
  while ( v24 == 0 )
  {
    if ( *(4 * v25) == 1070473527 )
      goto LABEL_32;
LABEL_29:
    if ( m_nCount <= ++v25 )
      goto LABEL_39;
  }
  v26 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( v24 > 9 )
    v26 = pKeyValues->m_keyHashes.m_pElements;
  if ( v26[v25] != 1070473527 )
    goto LABEL_29;
LABEL_32:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v27 = pKeyValues->m_keyValues.m_pElements;
  else
    v27 = 0;
  v28 = &v27[v25];
  v29 = *(v28 + 4);
  if ( v29 == 0 )
  {
LABEL_40:
    x = vec3_origin.x;
    y = vec3_origin.y;
    z = vec3_origin.z;
    goto LABEL_41;
  }
LABEL_35:
  if ( v29 == 30 )
  {
    if ( V_sscanf(*v28, "%g %g %g", &vLocationOnGround, &vLocationOnGround.y, &vLocationOnGround.z) == 3 )
    {
      x = vLocationOnGround.x;
      z = vLocationOnGround.z;
      y = vLocationOnGround.y;
      goto LABEL_41;
    }
    goto LABEL_40;
  }
  if ( v29 != 39 && v29 != 3 )
  {
    v30 = VariantFieldTypeName(v29);
    Warning("No free conversion of %s variant to Vector right now\n", v30);
    goto LABEL_40;
  }
  y = (*v28)[1];
  z = (*v28)[2];
  x = **v28;
LABEL_41:
  vLocation.x = x;
  vLocation.y = y;
  vLocation.z = z;
  PositionOnGround = GetPositionOnGround(&vLocation, pEntity);
  vptr_IHandleEntity = pEntity->_vptr_IHandleEntity;
  vLocationOnGround = PositionOnGround;
  vptr_IHandleEntity[128](pEntity, &vLocationOnGround, 0, 0);
  (*(pEntity->_vptr_IHandleEntity + 70))(pEntity, m_pInstance->m_iTeamNum.m_Value);
  v35 = pKeyValues->m_keyHashes.m_nCount;
  if ( v35 > 0 )
  {
    v36 = pKeyValues->m_keyHashes.m_nAllocated;
    for ( i = 0; v35 > i; ++i )
    {
      if ( v36 != 0 )
      {
        v38 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v36 > 9 )
          v38 = pKeyValues->m_keyHashes.m_pElements;
        if ( v38[i] == 427112271 )
        {
LABEL_49:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            m_uint64 = pKeyValues->m_keyValues.m_pElements;
          else
            m_uint64 = 0;
          v40 = &m_uint64[i].m_value;
          LODWORD(m_uint64) = 0;
          v41 = v40->m_type;
          if ( v41 != 0 )
            goto LABEL_52;
          goto LABEL_54;
        }
      }
      else if ( *(4 * i) == 427112271 )
      {
        goto LABEL_49;
      }
    }
  }
  v40 = &CEntityKeyValues::sm_EmptyVariant;
  LODWORD(m_uint64) = 0;
  v41 = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( v41 != 0 )
  {
LABEL_52:
    switch ( v41 )
    {
      case 1:
        LODWORD(m_uint64) = v40->m_float;
        break;
      case 5:
        LODWORD(m_uint64) = v40->m_int;
        break;
      case 6:
        LODWORD(m_uint64) = v40->m_char;
        break;
      case 26:
        LODWORD(m_uint64) = 0x7FFFFFFF;
        if ( v40->m_int64 <= 0x7FFFFFFF )
        {
          LODWORD(m_uint64) = 0x80000000;
          if ( v40->m_uint64 >= 0xFFFFFFFF80000000LL )
            m_uint64 = v40->m_uint64;
        }
        break;
      case 30:
        LODWORD(m_uint64) = strtol(v40->m_pszString, 0, 10);
        break;
      case 33:
        LODWORD(m_uint64) = 0x7FFFFFFF;
        if ( v40->m_uint64 <= 0x7FFFFFFE )
          LODWORD(m_uint64) = v40->m_uint64;
        break;
      case 34:
        LODWORD(m_uint64) = v40->m_float64;
        break;
      case 37:
        LODWORD(m_uint64) = 0x7FFFFFFF;
        if ( v40->m_int <= 0x7FFFFFFEu )
          LODWORD(m_uint64) = v40->m_int;
        break;
      default:
        v65 = VariantFieldTypeName(v41);
        Warning("No conversion from %s to int now\n", v65);
        LODWORD(m_uint64) = 0;
        break;
    }
  }
LABEL_54:
  HIDWORD(pEntity[1]._vptr_IHandleEntity) = m_uint64;
  v42 = pKeyValues->m_keyHashes.m_nCount;
  if ( v42 <= 0 )
  {
LABEL_67:
    v47 = &CEntityKeyValues::sm_EmptyVariant;
    v48 = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( v48 != 0 )
      goto LABEL_65;
    goto LABEL_68;
  }
  v43 = pKeyValues->m_keyHashes.m_nAllocated;
  v44 = 0;
  while ( v43 == 0 )
  {
    if ( *(4 * v44) == -1542362667 )
      goto LABEL_62;
LABEL_59:
    if ( v42 <= ++v44 )
      goto LABEL_67;
  }
  v45 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( v43 > 9 )
    v45 = pKeyValues->m_keyHashes.m_pElements;
  if ( v45[v44] != -1542362667 )
    goto LABEL_59;
LABEL_62:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v46 = pKeyValues->m_keyValues.m_pElements;
  else
    v46 = 0;
  v47 = &v46[v44].m_value;
  v48 = v47->m_type;
  if ( v48 == 0 )
  {
LABEL_68:
    m_int = -1;
    goto LABEL_69;
  }
LABEL_65:
  m_int = v47->m_int;
  if ( v48 != 13 )
  {
    v50 = VariantFieldTypeName(v48);
    Warning("No free conversion of %s variant to EHANDLE2 right now\n", v50);
    goto LABEL_68;
  }
LABEL_69:
  LODWORD(pEntity[1].m_pEntity) = m_int;
  v51 = pKeyValues->m_keyHashes.m_nCount;
  if ( v51 <= 0 )
  {
LABEL_82:
    v56 = &CEntityKeyValues::sm_EmptyVariant;
    v57 = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( v57 != 0 )
      goto LABEL_80;
    goto LABEL_83;
  }
  v52 = pKeyValues->m_keyHashes.m_nAllocated;
  v53 = 0;
  while ( v52 == 0 )
  {
    if ( *(4 * v53) == -1082980166 )
      goto LABEL_77;
LABEL_74:
    if ( v51 <= ++v53 )
      goto LABEL_82;
  }
  v54 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( v52 > 9 )
    v54 = pKeyValues->m_keyHashes.m_pElements;
  if ( v54[v53] != -1082980166 )
    goto LABEL_74;
LABEL_77:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v55 = pKeyValues->m_keyValues.m_pElements;
  else
    v55 = 0;
  v56 = &v55[v53].m_value;
  v57 = v56->m_type;
  if ( v57 == 0 )
  {
LABEL_83:
    v58 = -1;
    goto LABEL_84;
  }
LABEL_80:
  v58 = v56->m_int;
  if ( v57 != 13 )
  {
    v59 = VariantFieldTypeName(v57);
    Warning("No free conversion of %s variant to EHANDLE2 right now\n", v59);
    goto LABEL_83;
  }
LABEL_84:
  HIDWORD(pEntity[1].m_pEntity) = v58;
  v60 = pKeyValues->m_keyHashes.m_nCount;
  if ( v60 > 0 )
  {
    v61 = pKeyValues->m_keyHashes.m_nAllocated;
    for ( j = 0; v60 > j; ++j )
    {
      if ( v61 != 0 )
      {
        v63 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v61 > 9 )
          v63 = pKeyValues->m_keyHashes.m_pElements;
        if ( v63[j] == 1499669218 )
        {
LABEL_92:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v16 = pKeyValues->m_keyValues.m_pElements;
          else
            v16 = 0;
          v15 = &v16[j].m_value;
          LODWORD(v16) = 0;
          v17 = v15->m_type;
          if ( v17 != 0 )
            goto LABEL_95;
          goto LABEL_20;
        }
      }
      else if ( *(4 * j) == 1499669218 )
      {
        goto LABEL_92;
      }
    }
  }
  v15 = &CEntityKeyValues::sm_EmptyVariant;
  LODWORD(v16) = 0;
  v17 = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( v17 != 0 )
  {
LABEL_95:
    switch ( v17 )
    {
      case 1:
        LODWORD(v16) = v15->m_float;
        break;
      case 5:
        LODWORD(v16) = v15->m_int;
        break;
      case 6:
        LODWORD(v16) = v15->m_char;
        break;
      case 26:
        LODWORD(v16) = 0x7FFFFFFF;
        if ( v15->m_int64 <= 0x7FFFFFFF )
        {
          LODWORD(v16) = 0x80000000;
          if ( v15->m_uint64 >= 0xFFFFFFFF80000000LL )
            v16 = v15->m_uint64;
        }
        break;
      case 30:
        LODWORD(v16) = strtol(v15->m_pszString, 0, 10);
        break;
      case 33:
        LODWORD(v16) = 0x7FFFFFFF;
        if ( v15->m_uint64 <= 0x7FFFFFFE )
          LODWORD(v16) = v15->m_uint64;
        break;
      case 34:
        LODWORD(v16) = v15->m_float64;
        break;
      case 37:
        LODWORD(v16) = 0x7FFFFFFF;
        if ( v15->m_int <= 0x7FFFFFFEu )
          LODWORD(v16) = v15->m_int;
        break;
      default:
        v66 = VariantFieldTypeName(v17);
        Warning("No conversion from %s to int now\n", v66);
        LODWORD(v16) = 0;
        break;
    }
  }
LABEL_20:
  v18 = pEntity->_vptr_IHandleEntity;
  LODWORD(pEntity[1]._vptr_IHandleEntity) = v16;
  v18[490](pEntity);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/items2_fx/ward_spawn_generic.vpcf",
               1,
               pEntity,
               0,
               0);
  v21 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v21, Particle);
  DOTA_EmitSound(6, "DOTA_Item.SentryWard.Activate", m_pInstance);
  v22.m_Data = CEntityInstance::GetEntityIndex(pEntity).m_Data;
  v23.m_Data = CEntityInstance::GetEntityIndex(m_pInstance).m_Data;
  CreateUnitEvent(v23, v22, 8, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_WARD_PLACED);
}


// CDOTA_Item_SentryWard::OnSpellStart  (line 720, @0x0000000002e20470, libserver.so)  // inlines: Bind, CDotaNPCSpawnerContext, CEntitySpawnerContext, CEntitySpawnerContextBase, CUtlAbstractDelegate, CUtlDelegate, ClosurePtr, Convert<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const, void (detail::GenericClass::*)()>, CopyFrom<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void> >, FastDelegate2, Get, GetOwnerEntity, GetPlayerOwnerID, GetTeamNumber, NetworkStateChanged, Set, SetHasMixedOwnership, SetMementoFrom, SetPurchasedWhileDead, SetValue<CBaseEntity*>, SetValue<CEntityHandle>, SetValue<Vector>, SetValue<int>, ToDOTABaseNPCHero, UtlMakeDelegate<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, bindmemfunc<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const>, bindstaticfunc<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const>, operator=<bool>, ~CDotaNPCSpawner, ~CDotaNPCSpawnerAsync, ~CDotaNPCSpawnerContext, ~CEntitySpawner, ~CEntitySpawnerAsync, ~CEntitySpawnerAsyncBase, ~CEntitySpawnerContext, ~CEntitySpawnerContextBase
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorTarget, __dynamic_cast, DOTA_CreateItem, CDOTA_Item::SetCurrentCharges, CDOTA_Item::ExpireSellback, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::AddItem, UTIL_Remove, CDOTABaseAbility::GetCursorPosition, CEntityKeyValues::CEntityKeyValues, GetClassNameForUnitName (34 total)
// strings: "item_ward_sentry", "npc_dota_sentry_wards", "true_sight_range"
// globals: FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction(CDOTA_BaseNPC *,CEntityKeyValues const*), OnSentryWardSpawn(CDOTA_BaseNPC *,CEntityKeyValues const*), INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Item_SentryWard::OnSpellStart(CDOTA_Item_SentryWard *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  int m_Value; // r13d
  CDOTA_BaseNPC *v5; // rax
  CDOTA_Item *Item; // r13
  char v7; // r14
  CDOTA_UnitInventory *Inventory; // rax
  unsigned int (__fastcall *v9)(CDOTA_Item_SentryWard *const, CDotaNPCSpawnerAsync<CDOTA_BaseNPC> *); // r13
  const char *ClassNameForUnitName; // r13
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC_Hero *v15; // rdi
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  int v18; // eax
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC_Hero *v21; // [rsp+10h] [rbp-1E0h]
  int v22[4]; // [rsp+20h] [rbp-1D0h] BYREF
  CEntityHandle hHeroCaster; // [rsp+30h] [rbp-1C0h] BYREF
  CEntityHandle hAbility; // [rsp+40h] [rbp-1B0h] BYREF
  CBaseEntity *value; // [rsp+50h] [rbp-1A0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-198h]
  __int64 v27; // [rsp+60h] [rbp-190h]
  CDotaNPCSpawnerAsync<CDOTA_BaseNPC> spawner; // [rsp+70h] [rbp-180h] BYREF
  CDotaNPCSpawnerContext ctx; // [rsp+120h] [rbp-D0h] BYREF
  unsigned __int64 v30; // [rsp+1B8h] [rbp-38h]
  Vector CursorPosition; // 0:kr14_12.12
  Vector v32; // 0:kr34_12.12

  v30 = __readfsqword(0x28u);
  if ( CDOTABaseAbility::GetCaster(this) != 0 && (CDOTABaseAbility::GetCaster(this)->m_iUnitType & 0x100) != 0 )
    return;
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  if ( CursorTarget == 0 )
  {
    if ( CDOTABaseAbility::GetCursorTarget(this) != 0 )
      return;
    goto LABEL_17;
  }
  v3 = __dynamic_cast(CursorTarget, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_BaseNPC_Hero, 0);
  if ( CDOTABaseAbility::GetCursorTarget(this) != 0 )
  {
    if ( v3 == 0 )
      return;
    goto LABEL_7;
  }
  if ( v3 == 0 )
  {
LABEL_17:
    v9 = *(this->_vptr_IHandleEntity + 258);
    *&spawner._vptr_CEntitySpawnerBase = CDOTABaseAbility::GetCursorPosition(this);
    if ( v9(this, &spawner) != 0 )
      return;
    spawner.m_modifyScope.m_pKeyValues = 0;
    spawner.m_pEntityKeyValues = FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction;
    CEntityKeyValues::CEntityKeyValues(&ctx.m_entityKeyValues);
    ctx.m_pParent = 0;
    ctx.m_pCompletionListener = 0;
    ctx.m_callback.m_Closure.m_pFunction = *&spawner.m_pEntityKeyValues;
    ctx.m_callback.m_Closure.m_pthis = OnSentryWardSpawn;
    ClassNameForUnitName = GetClassNameForUnitName("npc_dota_sentry_wards");
    Caster = CDOTABaseAbility::GetCaster(this);
    if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
    {
      v21 = Caster;
      CEntityHandle::CEntityHandle(&hHeroCaster, Caster);
      CEntityHandle::CEntityHandle(&hAbility, this);
      if ( CDOTA_BaseNPC_Hero::HasChangedWardsSincePrecache(v21) )
      {
        CDotaNPCSpawnerAsync<CDOTA_BaseNPC>::CDotaNPCSpawnerAsync(
          &spawner,
          "npc_dota_sentry_wards",
          &ctx,
          EntitySpawnerAsyncBehavior_t::ENTITY_SPAWNER_ASYNC_ADD_TO_ACTIVE_SPAWN_GROUP,
          ResourceManifestLoadPriority_t::RESOURCE_MANIFEST_LOAD_PRIORITY_DEFAULT,
          -2,
          30.0,
          0);
        CEntitySpawnerBase<CDOTA_BaseNPC>::SetClassName(&spawner, ClassNameForUnitName);
        v12 = CDOTABaseAbility::GetCaster(this);
        value = CEntityHandle::GetHandleEntity(&v12->m_hOwnerEntity.m_Value);
        CEntityKeyValues::SetValue<CBaseEntity *>(spawner.m_pEntityKeyValues, -1104771937, &value);
        v13 = CDOTABaseAbility::GetCaster(this);
        LODWORD(value) = (*(v13->_vptr_IHandleEntity + 414))(v13);
        CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, 2034954718, &value);
        CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
        value = *&CursorPosition.x;
        *&v26 = CursorPosition.z;
        CEntityKeyValues::SetValue<Vector>(spawner.m_pEntityKeyValues, 1070473527, &value);
        LODWORD(value) = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "true_sight_range", -1, 0);
        CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, 427112271, &value);
        LODWORD(value) = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "lifetime", -1, 0);
        CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, 1499669218, &value);
        CEntityKeyValues::SetValue<CEntityHandle>(spawner.m_pEntityKeyValues, -1542362667, &hHeroCaster);
        CEntityKeyValues::SetValue<CEntityHandle>(spawner.m_pEntityKeyValues, -1082980166, &hAbility);
        value = 0;
        v26 = 0;
        v27 = 0;
        CEntitySpawnerAsyncBase<CDOTA_BaseNPC>::Spawn(&spawner, 0, &value);
        spawner._vptr_CEntitySpawnerBase = off_40FBEF0;
        CEntitySpawnerBase<CDOTA_BaseNPC>::~CEntitySpawnerBase(&spawner);
        goto LABEL_22;
      }
    }
    else
    {
      CEntityHandle::CEntityHandle(&hHeroCaster, 0);
      CEntityHandle::CEntityHandle(&hAbility, this);
    }
    CDotaNPCSpawner<CDOTA_BaseNPC>::CDotaNPCSpawner(&spawner, "npc_dota_sentry_wards", &ctx);
    CEntitySpawnerBase<CDOTA_BaseNPC>::SetClassName(&spawner, ClassNameForUnitName);
    v19 = CDOTABaseAbility::GetCaster(this);
    value = CEntityHandle::GetHandleEntity(&v19->m_hOwnerEntity.m_Value);
    CEntityKeyValues::SetValue<CBaseEntity *>(spawner.m_pEntityKeyValues, -1104771937, &value);
    v20 = CDOTABaseAbility::GetCaster(this);
    LODWORD(value) = (*(v20->_vptr_IHandleEntity + 414))(v20);
    CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, 2034954718, &value);
    v32 = CDOTABaseAbility::GetCursorPosition(this);
    value = *&v32.x;
    *&v26 = v32.z;
    CEntityKeyValues::SetValue<Vector>(spawner.m_pEntityKeyValues, 1070473527, &value);
    LODWORD(value) = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "true_sight_range", -1, 0);
    CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, 427112271, &value);
    LODWORD(value) = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "lifetime", -1, 0);
    CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, 1499669218, &value);
    CEntityKeyValues::SetValue<CEntityHandle>(spawner.m_pEntityKeyValues, -1542362667, &hHeroCaster);
    CEntityKeyValues::SetValue<CEntityHandle>(spawner.m_pEntityKeyValues, -1082980166, &hAbility);
    CEntitySpawner<CDOTA_BaseNPC>::Spawn(v22, &spawner);
    spawner._vptr_CEntitySpawnerBase = off_40FC030;
    CEntitySpawnerBase<CDOTA_BaseNPC>::~CEntitySpawnerBase(&spawner);
LABEL_22:
    v14 = CDOTABaseAbility::GetCaster(this);
    if ( v14 != 0 && (v14->m_iUnitType & 1) != 0 )
      v15 = v14;
    else
      v15 = 0;
    EconEntity_OnOwnerKillEaterEvent(
      v15,
      0,
      kill_eater_event_t::kKillEaterEvent_Wards_Placed,
      1,
      INVALID_ITEM_DEF_INDEX);
    CDOTA_Item::SpendCharge(this);
    *&spawner._vptr_CEntitySpawnerBase = CDOTABaseAbility::GetCursorPosition(this);
    v16 = CDOTABaseAbility::GetCaster(this);
    CDOTAFogOfWarSystem::AddTempViewer(
      &g_DOTAFogOfWarSystem,
      FoWViewerType_t::FOWVIEWERTYPE_LIGHTNINGBOLT,
      v16->m_iTeamNum.m_Value,
      &spawner,
      150.0,
      12.0,
      1);
    v17 = CDOTABaseAbility::GetCaster(this);
    v18 = (*(v17->_vptr_IHandleEntity + 414))(v17);
    CDOTA_PlayerResource::IncrementSentryWardsPlaced(g_pDOTAPlayerResource, v18);
    CEntityKeyValues::~CEntityKeyValues(&ctx.m_entityKeyValues);
    return;
  }
LABEL_7:
  if ( (*(v3->_vptr_IHandleEntity + 390))(v3) == 0 && !v3->m_bIsIllusion.m_Value )
  {
    m_Value = this->m_iPlayerOwnerID.m_Value;
    v5 = CDOTABaseAbility::GetCaster(this);
    Item = DOTA_CreateItem("item_ward_sentry", v5, m_Value);
    if ( Item != 0 )
    {
      v7 = (*(this->_vptr_IHandleEntity + 139))(this) ^ 1;
      if ( v7 != Item->m_bPurchasedWhileDead.m_Value )
      {
        (*(Item->_vptr_IHandleEntity + 22))(Item, 992, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        Item->m_bPurchasedWhileDead.m_Value = v7;
      }
      CDOTA_Item::SetCurrentCharges(Item, 1);
      CDOTA_Item::ExpireSellback(Item);
      if ( this->m_bHasMixedOwnership )
      {
        Item->m_bHasMixedOwnership = 1;
        CDOTA_Item::SetSellable(Item, 0);
      }
      Inventory = CDOTA_BaseNPC::GetInventory(v3);
      if ( CDOTA_UnitInventory::AddItem(Inventory, Item, 1, -1, 0, 0) == DOTA_INVALID_ORDERS::DOTA_ORDER_SUCCESS )
        CDOTA_Item::SpendCharge(this);
      else
        UTIL_Remove(Item);
    }
  }
}


// CDOTA_Item_SentryWard::CastFilterResult  (line 813, @0x0000000002e196c0, libserver.so)
// calls: CDOTABaseAbility::CastFilterResult
int __fastcall CDOTA_Item_SentryWard::CastFilterResult(CDOTA_Item_SentryWard *const this, CDOTA_BaseNPC *pTarget)
{
  int result; // eax

  result = CDOTABaseAbility::CastFilterResult(this, pTarget);
  if ( result == 0 )
  {
    if ( pTarget != 0 && pTarget->m_bIsIllusion.m_Value )
      return 10;
    else
      return 0;
  }
  return result;
}


// CDOTA_Item_SentryWard::CastFilterResult  (line 829, @0x0000000002e18f50, libserver.so)
// calls: CDOTABaseAbility::GetCaster
int __fastcall CDOTA_Item_SentryWard::CastFilterResult(
        CDOTA_Item_SentryWard *const this,
        const Vector *const vLocation)
{
  if ( CDOTABaseAbility::GetCaster(this) != 0
    && ((CDOTABaseAbility::GetCaster(this)->m_iUnitType & 0x100) != 0
     || (CDOTABaseAbility::GetCaster(this)->m_iUnitType & 2) != 0) )
  {
    return 23;
  }
  else
  {
    return 0;
  }
}


// CDOTA_Item_SentryWard::GetCustomCastError  (line 847, @0x0000000002e18fb0, libserver.so)
// calls: CDOTABaseAbility::GetCaster
// strings: "#dota_hud_error_courier_cant_use_item", "#dota_hud_error_no_wards_here"
const char *__fastcall CDOTA_Item_SentryWard::GetCustomCastError(
        CDOTA_Item_SentryWard *const this,
        const Vector *const vLocation)
{
  if ( CDOTABaseAbility::GetCaster(this) != 0
    && ((CDOTABaseAbility::GetCaster(this)->m_iUnitType & 0x100) != 0
     || (CDOTABaseAbility::GetCaster(this)->m_iUnitType & 2) != 0) )
  {
    return "#dota_hud_error_courier_cant_use_item";
  }
  else
  {
    return "#dota_hud_error_no_wards_here";
  }
}


// CDOTA_Modifier_Item_SentryWard::~CDOTA_Modifier_Item_SentryWard  (line 872, @0x0000000002e22500, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_SentryWard::~CDOTA_Modifier_Item_SentryWard(
        CDOTA_Modifier_Item_SentryWard *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_SentryWard::~CDOTA_Modifier_Item_SentryWard  (line 872, @0x0000000002e22520, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_SentryWard
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_SentryWard::~CDOTA_Modifier_Item_SentryWard(
        CDOTA_Modifier_Item_SentryWard *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_WardTrueSight::~CDOTA_Modifier_Item_WardTrueSight  (line 885, @0x0000000002e22640, libserver.so)  // inlines: ~CDOTA_Buff_Wards
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_WardTrueSight::~CDOTA_Modifier_Item_WardTrueSight(
        CDOTA_Modifier_Item_WardTrueSight *const this)
{
  this->_vptr_CDOTA_Buff = &off_478F1F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_WardTrueSight::~CDOTA_Modifier_Item_WardTrueSight  (line 885, @0x0000000002e22660, libserver.so)  // inlines: ~CDOTA_Buff_Wards, ~CDOTA_Modifier_Item_WardTrueSight
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_WardTrueSight::~CDOTA_Modifier_Item_WardTrueSight(
        CDOTA_Modifier_Item_WardTrueSight *const this)
{
  this->_vptr_CDOTA_Buff = &off_478F1F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_WardTrueSight::IsAura  (line 892, @0x0000000002e21200, libserver.so)
bool __fastcall CDOTA_Modifier_Item_WardTrueSight::IsAura(CDOTA_Modifier_Item_WardTrueSight *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_WardTrueSight::GetModifierAura  (line 893, @0x0000000002e21210, libserver.so)
// strings: "modifier_truesight"
const char *__fastcall CDOTA_Modifier_Item_WardTrueSight::GetModifierAura(
        CDOTA_Modifier_Item_WardTrueSight *const this)
{
  return "modifier_truesight";
}


// CDOTA_Modifier_Item_WardTrueSight::GetAuraSearchTeam  (line 895, @0x0000000002e21220, libserver.so)
int __fastcall CDOTA_Modifier_Item_WardTrueSight::GetAuraSearchTeam(CDOTA_Modifier_Item_WardTrueSight *const this)
{
  return 2;
}


// CDOTA_Modifier_Item_WardTrueSight::GetAuraSearchType  (line 896, @0x0000000002e21230, libserver.so)
int __fastcall CDOTA_Modifier_Item_WardTrueSight::GetAuraSearchType(CDOTA_Modifier_Item_WardTrueSight *const this)
{
  return 51;
}


// CDOTA_Modifier_Item_WardTrueSight::GetAuraSearchFlags  (line 897, @0x0000000002e21240, libserver.so)
int __fastcall CDOTA_Modifier_Item_WardTrueSight::GetAuraSearchFlags(CDOTA_Modifier_Item_WardTrueSight *const this)
{
  return 80;
}


// CDOTA_Modifier_Item_WardTrueSight::GetAuraRadius  (line 898, @0x0000000002e21250, libserver.so)
int __fastcall CDOTA_Modifier_Item_WardTrueSight::GetAuraRadius(CDOTA_Modifier_Item_WardTrueSight *const this)
{
  return this->true_sight_range;
}


// CDOTA_Modifier_Item_WardTrueSight::GetTexture  (line 900, @0x0000000002e21260, libserver.so)
// strings: "item_ward_sentry"
const char *__fastcall CDOTA_Modifier_Item_WardTrueSight::GetTexture(CDOTA_Modifier_Item_WardTrueSight *const this)
{
  return "item_ward_sentry";
}


// CDOTA_Modifier_Item_WardTrueSight::AddCustomTransmiterData  (line 903, @0x0000000002e22a40, libserver.so)  // inlines: set_has_range, set_range
// calls: CDOTA_Buff::AddCustomTransmiterData
void __fastcall CDOTA_Modifier_Item_WardTrueSight::AddCustomTransmiterData(
        CDOTA_Modifier_Item_WardTrueSight *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  int true_sight_range; // eax

  CDOTA_Buff::AddCustomTransmiterData(this, entry);
  true_sight_range = this->true_sight_range;
  *(entry + 4) |= 0x2000000u;
  *(entry + 36) = true_sight_range;
}


// CDOTA_Modifier_Item_WardTrueSight::OnCreated  (line 933, @0x0000000002e18dc0, libserver.so)
// calls: KeyValues::GetInt
// strings: "true_sight_range"
void __fastcall CDOTA_Modifier_Item_WardTrueSight::OnCreated(
        CDOTA_Modifier_Item_WardTrueSight *const this,
        KeyValues *pKV)
{
  this->true_sight_range = KeyValues::GetInt(pKV, "true_sight_range", 0);
}


