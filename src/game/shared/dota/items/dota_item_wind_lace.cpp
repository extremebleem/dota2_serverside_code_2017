// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_wind_lace.cpp:26
class CDOTA_Item_WindLace : public CDOTA_Item {
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
	CDOTA_Item_WindLace(CDOTA_Item_WindLace &);
	CDOTA_Item_WindLace(CDOTA_Item_WindLace &);
	CDOTA_Item_WindLace();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual bool CausesAutoattack();
	virtual ~CDOTA_Item_WindLace();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// vtable[222] CausesAutoattack
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_wind_lace.cpp:71
class CDOTA_Modifier_Item_WindLace : public CDOTA_Buff_Item {
public:

private:

	int movement_speed;  // +0xba8
	CDOTA_Modifier_Item_WindLace();
	ModifierVariant_t GetModifierMoveSpeedBonus_Special_Boots_2(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_WindLace();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_wind_lace.cpp:109
class CDOTA_Modifier_Item_WindLace_Bonus : public CDOTA_Buff {
public:

private:

	int bonus_speed;  // +0xba8
	CDOTA_Modifier_Item_WindLace_Bonus();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_Item_WindLace_Bonus();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[67] GetEffectName
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_WindLace::~CDOTA_Item_WindLace  (line 26, @0x0000000002e22d40, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_WindLace::~CDOTA_Item_WindLace(CDOTA_Item_WindLace *const this)
{
  this->_vptr_IHandleEntity = &off_4797E30;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_WindLace::~CDOTA_Item_WindLace  (line 26, @0x0000000002e22d60, libserver.so)  // inlines: ~CDOTA_Item_WindLace
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_WindLace::~CDOTA_Item_WindLace(CDOTA_Item_WindLace *const this)
{
  this->_vptr_IHandleEntity = &off_4797E30;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_WindLace::Schema_DynamicBinding  (line 28, @0x0000000002e21490, libserver.so)
// globals: CDOTA_Item_WindLace::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_WindLace::Schema_DynamicBinding(
        const CDOTA_Item_WindLace *const this)
{
  return CDOTA_Item_WindLace::s_pSchemaBinding;
}


// CDOTA_Item_WindLace::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002e214a0, libserver.so)
// globals: CDOTA_Item_WindLace::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_WindLace::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_WindLace::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_WindLace::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_WindLace::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002e214b0, libserver.so)  // inlines: Destruct<CDOTA_Item_WindLace>
void __fastcall CDOTA_Item_WindLace::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_WindLace::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_WindLace::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002e214d0, libserver.so)
void __fastcall CDOTA_Item_WindLace::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_WindLace::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_WindLace::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002e214f0, libserver.so)
bool __fastcall CDOTA_Item_WindLace::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_WindLace::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_WindLace::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002e21500, libserver.so)
// globals: CDOTA_Item_WindLace::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_WindLace::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_WindLace::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_WindLace::s_pSchemaBinding;
}


// CDOTA_Item_WindLace::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002e21fb0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_WindLace::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_WindLace::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_WindLace::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002e22890, libserver.so)  // inlines: CDOTA_Item_WindLace, Construct<CDOTA_Item_WindLace>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_WindLace::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_WindLace::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4797E30;
  }
  return p;
}


// CDOTA_Item_WindLace::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002e23d10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_WindLace::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_WindLace::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_WindLace::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002e23d30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_WindLace::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_WindLace::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_WindLace::GetEntityClassInternal  (line 28, @0x0000000002e27f00, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_08.cpp
// strings: "CDOTA_Item_WindLace"
// globals: `guard variable for'CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass, CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Item_WindLace::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_WindLace::GetEntityClassInfo(void)::g_EntityCDOTA_Item_WindLaceClassInfo, CDOTA_Item_WindLace::GetEntityClassInfo(void)::g_EntityCDOTA_Item_WindLaceClassInfo
CEntityClass *__cdecl CDOTA_Item_WindLace::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass) != 0 )
  {
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_designerName.u.m_Id = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_AllHelpers.m_Size = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_classInputs.m_Size = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_classOutputs.m_Size = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_hNetworkSerializer = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_pBaseClassInfo = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_pClassInfo = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_flags = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_nAllHelpersFlags = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_pScriptClassDesc = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_pInputs = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_nInputCount = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_pOutputs = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_nOutputCount = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_pGameClass = 0;
    CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass._vptr_CEntityClass = off_4797DB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass);
    __cxa_atexit(
      CDOTA_Item_WindLace::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_WindLaceClass != 0 )
    return &CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass;
  if ( `guard variable for'CDOTA_Item_WindLace::GetEntityClassInfo(void)::g_EntityCDOTA_Item_WindLaceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_WindLace::GetEntityClassInfo(void)::g_EntityCDOTA_Item_WindLaceClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_WindLace::GetEntityClassInfo(void)::g_EntityCDOTA_Item_WindLaceClassInfo,
      "CDOTA_Item_WindLace",
      "item_wind_lace",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_WindLace::GetEntityClassInfo(void)::g_EntityCDOTA_Item_WindLaceClassInfo);
  }
  CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_pClassInfo = &CDOTA_Item_WindLace::GetEntityClassInfo(void)::g_EntityCDOTA_Item_WindLaceClassInfo;
  CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_pBaseClassInfo = CDOTA_Item_WindLace::GetEntityClassInfo(void)::g_EntityCDOTA_Item_WindLaceClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_WindLaceClass = &CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass;
  CDOTA_Item_WindLace::GetEntityClassInfo(void)::g_EntityCDOTA_Item_WindLaceClassInfo.m_pClass = &CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass;
  CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_WindLaceClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_WindLace::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WindLaceClass;
}


// CDOTA_Item_WindLace::GetIntrinsicModifierName  (line 30, @0x0000000002e21510, libserver.so)
// strings: "modifier_item_wind_lace"
const char *__fastcall CDOTA_Item_WindLace::GetIntrinsicModifierName(CDOTA_Item_WindLace *const this)
{
  return "modifier_item_wind_lace";
}


// CDOTA_Item_WindLace::CausesAutoattack  (line 33, @0x0000000002e21520, libserver.so)
bool __fastcall CDOTA_Item_WindLace::CausesAutoattack(CDOTA_Item_WindLace *const this)
{
  return 0;
}


// CDOTA_Item_WindLace::OnSpellStart  (line 41, @0x0000000002e1e4b0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetParent, ToDOTABaseNPC
// calls: CGameSceneNode::GetOwnerEntity, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, CDOTA_Item::SpendCharge, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "bonus_speed", "modifier_item_wind_lace_bonus", "DOTA_Item.DoE.Activate"
void __fastcall CDOTA_Item_WindLace::OnSpellStart(CDOTA_Item_WindLace *const this)
{
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  CDOTA_BaseNPC *v4; // r12
  float v5; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v7; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
  {
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    v4 = OwnerEntity;
    if ( OwnerEntity != 0 && OwnerEntity->m_bIsDOTANPC )
    {
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
      CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bonus_speed", -1, 0);
      KeyValues::KeyValues(&kv, "modifier_item_wind_lace_bonus");
      KeyValues::SetFloat(&kv, "duration", v5);
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_item_wind_lace_bonus", &kv, 0);
      v7 = CDOTABaseAbility::GetCaster(this);
      DOTA_EmitSound(10, "DOTA_Item.DoE.Activate", v7);
      CDOTA_Item::SpendCharge(this);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Modifier_Item_WindLace::~CDOTA_Modifier_Item_WindLace  (line 71, @0x0000000002e22370, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_WindLace::~CDOTA_Modifier_Item_WindLace(CDOTA_Modifier_Item_WindLace *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_WindLace::~CDOTA_Modifier_Item_WindLace  (line 71, @0x0000000002e22390, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_WindLace
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_WindLace::~CDOTA_Modifier_Item_WindLace(CDOTA_Modifier_Item_WindLace *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_WindLace::DeclareFunctions  (line 86, @0x0000000002e18b90, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_WindLace::GetModifierMoveSpeedBonus_Special_Boots_2(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_WindLace::DeclareFunctions(CDOTA_Modifier_Item_WindLace *const this)
{
  this->m_Functions[17].__pfn = CDOTA_Modifier_Item_WindLace::GetModifierMoveSpeedBonus_Special_Boots_2;
  this->m_Functions[17].__delta = 0;
}


// CDOTA_Modifier_Item_WindLace::OnCreated  (line 91, @0x0000000002e1e000, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Item_WindLace::OnCreated(CDOTA_Modifier_Item_WindLace *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movement_speed", -1, 0);
  else
    this->movement_speed = 0;
}


// CDOTA_Modifier_Item_WindLace::GetModifierMoveSpeedBonus_Special_Boots_2  (line 97, @0x0000000002e18bb0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_WindLace::GetModifierMoveSpeedBonus_Special_Boots_2(
        CDOTA_Modifier_Item_WindLace *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_WindLace_Bonus::~CDOTA_Modifier_Item_WindLace_Bonus  (line 109, @0x0000000002e225a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_WindLace_Bonus::~CDOTA_Modifier_Item_WindLace_Bonus(
        CDOTA_Modifier_Item_WindLace_Bonus *const this)
{
  this->_vptr_CDOTA_Buff = &off_4798D10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_WindLace_Bonus::~CDOTA_Modifier_Item_WindLace_Bonus  (line 109, @0x0000000002e225c0, libserver.so)  // inlines: ~CDOTA_Modifier_Item_WindLace_Bonus
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_WindLace_Bonus::~CDOTA_Modifier_Item_WindLace_Bonus(
        CDOTA_Modifier_Item_WindLace_Bonus *const this)
{
  this->_vptr_CDOTA_Buff = &off_4798D10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_WindLace_Bonus::GetEffectName  (line 117, @0x0000000002e21530, libserver.so)
// strings: "particles/items_fx/drum_of_endurance_buff.vpcf"
const char *__fastcall CDOTA_Modifier_Item_WindLace_Bonus::GetEffectName(
        CDOTA_Modifier_Item_WindLace_Bonus *const this)
{
  return "particles/items_fx/drum_of_endurance_buff.vpcf";
}


// CDOTA_Modifier_Item_WindLace_Bonus::DeclareFunctions  (line 125, @0x0000000002e18bd0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_WindLace_Bonus::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_WindLace_Bonus::DeclareFunctions(CDOTA_Modifier_Item_WindLace_Bonus *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Item_WindLace_Bonus::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Item_WindLace_Bonus::OnCreated  (line 130, @0x0000000002e1e0c0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_speed"
void __fastcall CDOTA_Modifier_Item_WindLace_Bonus::OnCreated(
        CDOTA_Modifier_Item_WindLace_Bonus *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_speed", -1, 0);
  else
    this->bonus_speed = 0;
}


// CDOTA_Modifier_Item_WindLace_Bonus::GetModifierMoveSpeedBonus_Percentage  (line 135, @0x0000000002e18bf0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_WindLace_Bonus::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Item_WindLace_Bonus *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


