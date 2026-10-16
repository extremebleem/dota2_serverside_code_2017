// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_void_stone.cpp:26
class CDOTA_Item_VoidStone : public CDOTA_Item {
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
	CDOTA_Item_VoidStone(CDOTA_Item_VoidStone &);
	CDOTA_Item_VoidStone(CDOTA_Item_VoidStone &);
	CDOTA_Item_VoidStone();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_VoidStone();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_void_stone.cpp:38
class CDOTA_Modifier_Item_VoidStone : public CDOTA_Buff_Item {
public:

private:

	int bonus_mana_regen;  // +0xba8
	CDOTA_Modifier_Item_VoidStone();
	ModifierVariant_t GetModifierPercentageManaRegen(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_VoidStone();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_VoidStone::~CDOTA_Item_VoidStone  (line 26, @0x0000000002e22a70, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_VoidStone::~CDOTA_Item_VoidStone(CDOTA_Item_VoidStone *const this)
{
  this->_vptr_IHandleEntity = &off_478B870;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_VoidStone::~CDOTA_Item_VoidStone  (line 26, @0x0000000002e22a90, libserver.so)  // inlines: ~CDOTA_Item_VoidStone
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_VoidStone::~CDOTA_Item_VoidStone(CDOTA_Item_VoidStone *const this)
{
  this->_vptr_IHandleEntity = &off_478B870;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_VoidStone::Schema_DynamicBinding  (line 28, @0x0000000002e20c70, libserver.so)
// globals: CDOTA_Item_VoidStone::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_VoidStone::Schema_DynamicBinding(
        const CDOTA_Item_VoidStone *const this)
{
  return CDOTA_Item_VoidStone::s_pSchemaBinding;
}


// CDOTA_Item_VoidStone::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002e20c80, libserver.so)
// globals: CDOTA_Item_VoidStone::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_VoidStone::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_VoidStone::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_VoidStone::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_VoidStone::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002e20c90, libserver.so)  // inlines: Destruct<CDOTA_Item_VoidStone>
void __fastcall CDOTA_Item_VoidStone::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_VoidStone::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_VoidStone::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002e20cb0, libserver.so)
void __fastcall CDOTA_Item_VoidStone::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_VoidStone::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_VoidStone::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002e20cd0, libserver.so)
bool __fastcall CDOTA_Item_VoidStone::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_VoidStone::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_VoidStone::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002e20ce0, libserver.so)
// globals: CDOTA_Item_VoidStone::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_VoidStone::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_VoidStone::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_VoidStone::s_pSchemaBinding;
}


// CDOTA_Item_VoidStone::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002e21cb0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_VoidStone::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_VoidStone::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_VoidStone::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002e226e0, libserver.so)  // inlines: CDOTA_Item_VoidStone, Construct<CDOTA_Item_VoidStone>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_VoidStone::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_VoidStone::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_478B870;
  }
  return p;
}


// CDOTA_Item_VoidStone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002e23a40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_VoidStone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_VoidStone::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_VoidStone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002e23a60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_VoidStone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_VoidStone::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_VoidStone::GetEntityClassInternal  (line 28, @0x0000000002e28250, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_08.cpp
// strings: "CDOTA_Item_VoidStone"
// globals: `guard variable for'CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass, CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Item_VoidStone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_VoidStone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VoidStoneClassInfo, CDOTA_Item_VoidStone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VoidStoneClassInfo
CEntityClass *__cdecl CDOTA_Item_VoidStone::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass) != 0 )
  {
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_designerName.u.m_Id = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_AllHelpers.m_Size = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_classInputs.m_Size = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_classOutputs.m_Size = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_hNetworkSerializer = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_pBaseClassInfo = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_pClassInfo = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_flags = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_nAllHelpersFlags = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_pScriptClassDesc = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_pInputs = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_nInputCount = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_pOutputs = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_nOutputCount = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_pGameClass = 0;
    CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass._vptr_CEntityClass = off_478B7F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass);
    __cxa_atexit(
      CDOTA_Item_VoidStone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_VoidStoneClass != 0 )
    return &CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass;
  if ( `guard variable for'CDOTA_Item_VoidStone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VoidStoneClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_VoidStone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VoidStoneClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_VoidStone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VoidStoneClassInfo,
      "CDOTA_Item_VoidStone",
      "item_void_stone",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_VoidStone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VoidStoneClassInfo);
  }
  CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_pClassInfo = &CDOTA_Item_VoidStone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VoidStoneClassInfo;
  CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_pBaseClassInfo = CDOTA_Item_VoidStone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VoidStoneClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_VoidStoneClass = &CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass;
  CDOTA_Item_VoidStone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_VoidStoneClassInfo.m_pClass = &CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass;
  CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_VoidStoneClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_VoidStone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_VoidStoneClass;
}


// CDOTA_Item_VoidStone::GetIntrinsicModifierName  (line 30, @0x0000000002e20cf0, libserver.so)
// strings: "modifier_item_void_stone"
const char *__fastcall CDOTA_Item_VoidStone::GetIntrinsicModifierName(CDOTA_Item_VoidStone *const this)
{
  return "modifier_item_void_stone";
}


// CDOTA_Modifier_Item_VoidStone::~CDOTA_Modifier_Item_VoidStone  (line 38, @0x0000000002e224b0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_VoidStone::~CDOTA_Modifier_Item_VoidStone(
        CDOTA_Modifier_Item_VoidStone *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_VoidStone::~CDOTA_Modifier_Item_VoidStone  (line 38, @0x0000000002e224d0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_VoidStone
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_VoidStone::~CDOTA_Modifier_Item_VoidStone(
        CDOTA_Modifier_Item_VoidStone *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_VoidStone::DeclareFunctions  (line 53, @0x0000000002e18890, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_VoidStone::GetModifierPercentageManaRegen(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_VoidStone::DeclareFunctions(CDOTA_Modifier_Item_VoidStone *const this)
{
  this->m_Functions[54].__pfn = CDOTA_Modifier_Item_VoidStone::GetModifierPercentageManaRegen;
  this->m_Functions[54].__delta = 0;
}


// CDOTA_Modifier_Item_VoidStone::GetModifierPercentageManaRegen  (line 58, @0x0000000002e188b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_VoidStone::GetModifierPercentageManaRegen(
        CDOTA_Modifier_Item_VoidStone *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_mana_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_VoidStone::OnCreated  (line 63, @0x0000000002e1e060, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_mana_regen"
void __fastcall CDOTA_Modifier_Item_VoidStone::OnCreated(CDOTA_Modifier_Item_VoidStone *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_mana_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_mana_regen", -1, 0);
  else
    this->bonus_mana_regen = 0;
}


