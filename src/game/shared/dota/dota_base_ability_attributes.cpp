// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_base_ability_attributes.cpp:22
class CDOTA_Ability_AttributeBonus : public CDOTABaseAbility {
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
	CDOTA_Ability_AttributeBonus(CDOTA_Ability_AttributeBonus &);
	CDOTA_Ability_AttributeBonus(CDOTA_Ability_AttributeBonus &);
	CDOTA_Ability_AttributeBonus();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual bool IsAttributeBonus();
	virtual ~CDOTA_Ability_AttributeBonus();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[238] IsAttributeBonus
	// sizeof = 912
};

// src/game/shared/dota/dota_base_ability_attributes.cpp:38
class C_CDOTA_Ability_AttributeBonus_MapInstall {
	C_CDOTA_Ability_AttributeBonus_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/dota_base_ability_attributes.cpp:44
class CDOTA_Modifier_AttributeBonus : public CDOTA_Buff {
public:

	CDOTA_Modifier_AttributeBonus();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_AttributeBonus();

	// vtable[65] DeclareFunctions
	// vtable[11] IsHidden
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Ability_AttributeBonus::~CDOTA_Ability_AttributeBonus  (line 22, @0x0000000002458cd0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_AttributeBonus::~CDOTA_Ability_AttributeBonus(CDOTA_Ability_AttributeBonus *const this)
{
  this->_vptr_IHandleEntity = &off_40D8210;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_AttributeBonus::~CDOTA_Ability_AttributeBonus  (line 22, @0x0000000002458cf0, libserver.so)  // inlines: ~CDOTA_Ability_AttributeBonus
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_AttributeBonus::~CDOTA_Ability_AttributeBonus(CDOTA_Ability_AttributeBonus *const this)
{
  this->_vptr_IHandleEntity = &off_40D8210;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_AttributeBonus::Schema_DynamicBinding  (line 24, @0x00000000024563b0, libserver.so)
// globals: CDOTA_Ability_AttributeBonus::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_AttributeBonus::Schema_DynamicBinding(
        const CDOTA_Ability_AttributeBonus *const this)
{
  return CDOTA_Ability_AttributeBonus::s_pSchemaBinding;
}


// CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 24, @0x00000000024563c0, libserver.so)
// globals: CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass::DestructInstance  (line 24, @0x00000000024563d0, libserver.so)  // inlines: Destruct<CDOTA_Ability_AttributeBonus>
void __fastcall CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass::FreeInstance  (line 24, @0x00000000024563f0, libserver.so)
void __fastcall CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass::CanAllocate  (line 24, @0x0000000002456410, libserver.so)
bool __fastcall CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 24, @0x0000000002456420, libserver.so)
// globals: CDOTA_Ability_AttributeBonus::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_AttributeBonus::s_pSchemaBinding;
}


// CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass::AllocateInstance  (line 24, @0x00000000024573b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 24, @0x00000000024592d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 24, @0x00000000024592f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass::ConstructInstance  (line 24, @0x000000000245a3b0, libserver.so)  // inlines: CDOTA_Ability_AttributeBonus, Construct<CDOTA_Ability_AttributeBonus>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_40D8210;
  }
  return p;
}


// CDOTA_Ability_AttributeBonus::GetEntityClassInternal  (line 24, @0x00000000024608a0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTABaseAbility>, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_01.cpp
// strings: "CDOTA_Ability_AttributeBonus"
// globals: `guard variable for'CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass, CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_AttributeBonus::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AttributeBonusClassInfo, CDOTA_Ability_AttributeBonus::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AttributeBonusClassInfo
CEntityClass *__cdecl CDOTA_Ability_AttributeBonus::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass) != 0 )
  {
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_pClassInfo = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_flags = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_pInputs = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_nInputCount = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_pOutputs = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_nOutputCount = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_pGameClass = 0;
    CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass._vptr_CEntityClass = off_40D8190;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass);
    __cxa_atexit(
      CDOTA_Ability_AttributeBonus::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_AttributeBonusClass != 0 )
    return &CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass;
  if ( `guard variable for'CDOTA_Ability_AttributeBonus::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AttributeBonusClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_AttributeBonus::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AttributeBonusClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_AttributeBonus::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AttributeBonusClassInfo,
      "CDOTA_Ability_AttributeBonus",
      "attribute_bonus",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_AttributeBonus::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AttributeBonusClassInfo);
  }
  CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_pClassInfo = &CDOTA_Ability_AttributeBonus::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AttributeBonusClassInfo;
  CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_pBaseClassInfo = CDOTA_Ability_AttributeBonus::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AttributeBonusClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_AttributeBonusClass = &CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass;
  CDOTA_Ability_AttributeBonus::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AttributeBonusClassInfo.m_pClass = &CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass;
  CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass.m_pScriptClassDesc = GetScriptDesc<CDOTABaseAbility>(0);
  g_pEntityCDOTA_Ability_AttributeBonusClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AttributeBonusClass;
}


// CDOTA_Ability_AttributeBonus::GetIntrinsicModifierName  (line 28, @0x0000000002456430, libserver.so)
// strings: "modifier_attribute_bonus"
const char *__fastcall CDOTA_Ability_AttributeBonus::GetIntrinsicModifierName(CDOTA_Ability_AttributeBonus *const this)
{
  return "modifier_attribute_bonus";
}


// CDOTA_Ability_AttributeBonus::IsAttributeBonus  (line 30, @0x0000000002456440, libserver.so)
bool __fastcall CDOTA_Ability_AttributeBonus::IsAttributeBonus(CDOTA_Ability_AttributeBonus *const this)
{
  return 1;
}


// CDOTA_Ability_AttributeBonus::YouForgotToImplementOrDeclareServerClass  (line 38, @0x000000000241f3b0, libserver.so)
int __fastcall CDOTA_Ability_AttributeBonus::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_AttributeBonus *const this)
{
  return 0;
}


// CDOTA_Ability_AttributeBonus::GetServerClass  (line 38, @0x0000000002422ff0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_AttributeBonus::GetServerClass(CDOTA_Ability_AttributeBonus *const this)
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


// CDOTA_Modifier_AttributeBonus::~CDOTA_Modifier_AttributeBonus  (line 44, @0x0000000002457420, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_AttributeBonus::~CDOTA_Modifier_AttributeBonus(
        CDOTA_Modifier_AttributeBonus *const this)
{
  this->_vptr_CDOTA_Buff = &off_40D8CD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_AttributeBonus::~CDOTA_Modifier_AttributeBonus  (line 44, @0x0000000002457440, libserver.so)  // inlines: ~CDOTA_Modifier_AttributeBonus
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_AttributeBonus::~CDOTA_Modifier_AttributeBonus(
        CDOTA_Modifier_AttributeBonus *const this)
{
  this->_vptr_CDOTA_Buff = &off_40D8CD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_AttributeBonus::IsHidden  (line 54, @0x0000000002456450, libserver.so)
bool __fastcall CDOTA_Modifier_AttributeBonus::IsHidden(CDOTA_Modifier_AttributeBonus *const this)
{
  return 1;
}


// CDOTA_Modifier_AttributeBonus::DeclareFunctions  (line 60, @0x000000000241f3c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_AttributeBonus::GetModifierBonusStats_Intellect(CModifierParams const&), CDOTA_Modifier_AttributeBonus::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_AttributeBonus::GetModifierBonusStats_Agility(CModifierParams const&)
void __fastcall CDOTA_Modifier_AttributeBonus::DeclareFunctions(CDOTA_Modifier_AttributeBonus *const this)
{
  this->m_Functions[66].__pfn = CDOTA_Modifier_AttributeBonus::GetModifierBonusStats_Intellect;
  this->m_Functions[66].__delta = 0;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[64].__pfn = CDOTA_Modifier_AttributeBonus::GetModifierBonusStats_Strength;
  this->m_Functions[65].__pfn = CDOTA_Modifier_AttributeBonus::GetModifierBonusStats_Agility;
  this->m_Functions[65].__delta = 0;
}


// CDOTA_Modifier_AttributeBonus::GetModifierBonusStats_Intellect  (line 68, @0x000000000241f9d0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility
ModifierVariant_t __fastcall CDOTA_Modifier_AttributeBonus::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_AttributeBonus *const this,
        const CModifierParams *const params)
{
  __m128i v4; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetCaster(this)->m_iUnitType & 1) != 0 )
  {
    *v4.m128i_i32 = (2 * CDOTA_Buff::GetAbility(this)->m_iLevel.m_Value);
    *&result.m_eType = (_mm_cvtsi128_si32(v4) << 32) | 1;
  }
  else
  {
    *&result.m_eType = 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_AttributeBonus::GetModifierBonusStats_Agility  (line 79, @0x000000000241fa30, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility
ModifierVariant_t __fastcall CDOTA_Modifier_AttributeBonus::GetModifierBonusStats_Agility(
        CDOTA_Modifier_AttributeBonus *const this,
        const CModifierParams *const params)
{
  __m128i v4; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetCaster(this)->m_iUnitType & 1) != 0 )
  {
    *v4.m128i_i32 = (2 * CDOTA_Buff::GetAbility(this)->m_iLevel.m_Value);
    *&result.m_eType = (_mm_cvtsi128_si32(v4) << 32) | 1;
  }
  else
  {
    *&result.m_eType = 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_AttributeBonus::GetModifierBonusStats_Strength  (line 90, @0x000000000241fa90, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility
ModifierVariant_t __fastcall CDOTA_Modifier_AttributeBonus::GetModifierBonusStats_Strength(
        CDOTA_Modifier_AttributeBonus *const this,
        const CModifierParams *const params)
{
  __m128i v4; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetCaster(this)->m_iUnitType & 1) != 0 )
  {
    *v4.m128i_i32 = (2 * CDOTA_Buff::GetAbility(this)->m_iLevel.m_Value);
    *&result.m_eType = (_mm_cvtsi128_si32(v4) << 32) | 1;
  }
  else
  {
    *&result.m_eType = 1;
  }
  result.m_szVal = 0;
  return result;
}


