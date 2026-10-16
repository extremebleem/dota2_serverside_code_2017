// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_script_thinker.cpp:14
class CDOTA_BaseNPC_Thinker : public CDOTA_BaseNPC {
public:

private:

	bool m_bSendToClients;  // +0x1198
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
	CDOTA_BaseNPC_Thinker(CDOTA_BaseNPC_Thinker &);
	CDOTA_BaseNPC_Thinker(CDOTA_BaseNPC_Thinker &);
	CDOTA_BaseNPC_Thinker();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	void SetSendToClients(bool);
	virtual int ShouldTransmit(const CGameCheckTransmitInfo *);
	virtual bool LostModifier(CDOTA_Buff *);
	virtual ~CDOTA_BaseNPC_Thinker();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[65] ShouldTransmit
	// vtable[450] LostModifier
	// sizeof = 4512
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BaseNPC_Thinker::~CDOTA_BaseNPC_Thinker  (line 14, @0x00000000026a0b00, libserver.so)
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC_Thinker::~CDOTA_BaseNPC_Thinker(CDOTA_BaseNPC_Thinker *const this)
{
  this->_vptr_IHandleEntity = &off_4175690;
  this->_vptr_INextBotEventResponder = &off_41765F0;
  this->_vptr_CObstructionObject = &off_4176920;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_BaseNPC_Thinker::~CDOTA_BaseNPC_Thinker  (line 14, @0x00000000026a0b40, libserver.so)  // inlines: ~CDOTA_BaseNPC_Thinker
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_BaseNPC_Thinker::~CDOTA_BaseNPC_Thinker(CDOTA_BaseNPC_Thinker *const this)
{
  this->_vptr_IHandleEntity = &off_4175690;
  this->_vptr_INextBotEventResponder = &off_41765F0;
  this->_vptr_CObstructionObject = &off_4176920;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BaseNPC_Thinker::Schema_DynamicBinding  (line 16, @0x000000000269d6a0, libserver.so)
// globals: CDOTA_BaseNPC_Thinker::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Thinker::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Thinker *const this)
{
  return CDOTA_BaseNPC_Thinker::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 16, @0x000000000269d6d0, libserver.so)
// globals: CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass::DestructInstance  (line 16, @0x000000000269d6e0, libserver.so)  // inlines: Destruct<CDOTA_BaseNPC_Thinker>
void __fastcall CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass::FreeInstance  (line 16, @0x000000000269d700, libserver.so)
void __fastcall CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass::CanAllocate  (line 16, @0x000000000269d720, libserver.so)
bool __fastcall CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 16, @0x000000000269d730, libserver.so)
// globals: CDOTA_BaseNPC_Thinker::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Thinker::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass::AllocateInstance  (line 16, @0x00000000026a0580, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4512);
  memset(v1, 0, 0x11A0u);
  return v1;
}


// CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass::ConstructInstance  (line 16, @0x00000000026a0ab0, libserver.so)  // inlines: CDOTA_BaseNPC_Thinker, Construct<CDOTA_BaseNPC_Thinker>
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *p = &off_4175690;
    *(p + 236) = &off_41765F0;
    *(p + 257) = &off_4176920;
  }
  return p;
}


// CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 16, @0x00000000026a5de0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 16, @0x00000000026a61a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BaseNPC_Thinker::GetEntityClassInternal  (line 16, @0x00000000026b0750, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, NextBotCombatCharacter::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_06.cpp
// strings: "npc_dota_thinker", "CDOTA_BaseNPC_Thinker", "npc_dota_base", "CDOTA_BaseNPC"
// globals: `guard variable for'CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass, CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BaseNPC_Thinker::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_ThinkerClassInfo, CDOTA_BaseNPC_Thinker::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_ThinkerClassInfo, `guard variable for'CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo (9 total)
CEntityClass *__cdecl CDOTA_BaseNPC_Thinker::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass) != 0 )
  {
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_designerName.u.m_Id = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass._vptr_CEntityClass = off_3F79390;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_AllHelpers.m_Size = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_classInputs.m_Size = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_classOutputs.m_Size = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_requiredEHandle.m_Index = -1;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_hNetworkSerializer = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_pBaseClassInfo = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_pClassInfo = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_flags = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_nAllHelpersFlags = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_pScriptClassDesc = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_pInputs = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_nInputCount = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_pOutputs = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_nOutputCount = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_pGameClass = 0;
    CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass._vptr_CEntityClass = off_4175610;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass);
    __cxa_atexit(
      CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BaseNPC_ThinkerClass != 0 )
    return &CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass;
  if ( `guard variable for'CDOTA_BaseNPC_Thinker::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_ThinkerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Thinker::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_ThinkerClassInfo) != 0 )
  {
    if ( `guard variable for'CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo) != 0 )
    {
      EntityClassInfo = NextBotCombatCharacter::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo,
        "CDOTA_BaseNPC",
        "npc_dota_base",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_Thinker::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_ThinkerClassInfo,
      "CDOTA_BaseNPC_Thinker",
      "npc_dota_thinker",
      0,
      &CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Thinker::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_ThinkerClassInfo);
  }
  CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_pClassInfo = &CDOTA_BaseNPC_Thinker::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_ThinkerClassInfo;
  CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_pBaseClassInfo = CDOTA_BaseNPC_Thinker::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_ThinkerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BaseNPC_ThinkerClass = &CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass;
  CDOTA_BaseNPC_Thinker::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_ThinkerClassInfo.m_pClass = &CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass;
  CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_BaseNPC_ThinkerClass->m_pComponentOverrides = 0;
  return &CDOTA_BaseNPC_Thinker::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ThinkerClass;
}


// CDOTA_BaseNPC_Thinker::ShouldTransmit  (line 20, @0x00000000026a1f70, libserver.so)
// calls: CDOTA_BaseNPC::ShouldTransmit
int __fastcall CDOTA_BaseNPC_Thinker::ShouldTransmit(
        CDOTA_BaseNPC_Thinker *const this,
        const CGameCheckTransmitInfo *pInfo)
{
  int result; // eax

  result = 8;
  if ( this->m_bSendToClients )
  {
    LOBYTE(result) = 4;
    if ( !pInfo->m_bRecipientHLTV )
      return CDOTA_BaseNPC::ShouldTransmit(this, pInfo);
  }
  return result;
}


// CDOTA_BaseNPC_Thinker::LostModifier  (line 31, @0x00000000026a10a0, libserver.so)  // inlines: IsMarkedForDeletion
// calls: CDOTA_BaseNPC::LostModifier, CDOTA_ModifierManager::GetBuffByIndex
bool __fastcall CDOTA_BaseNPC_Thinker::LostModifier(CDOTA_BaseNPC_Thinker *const this, CDOTA_Buff *pBuffParam)
{
  CDOTA_BaseNPC::NetworkVar_m_ModifierManager *p_m_ModifierManager; // r13
  int v4; // ebx
  CDOTA_Buff *BuffByIndex; // rax
  _BOOL4 v6; // eax

  p_m_ModifierManager = &this->m_ModifierManager;
  v4 = 0;
  CDOTA_BaseNPC::LostModifier(this, pBuffParam);
  if ( this->m_ModifierManager.m_bufflist.m_Size > 0 )
  {
    while ( 1 )
    {
      BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(p_m_ModifierManager, v4, 0);
      if ( BuffByIndex != 0 )
      {
        v6 = (*(BuffByIndex + 138) & 4) != 0;
        if ( !v6 )
          break;
      }
      if ( ++v4 >= this->m_ModifierManager.m_bufflist.m_Size )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    LOBYTE(v6) = 1;
  }
  return v6;
}


// Thinker_Create  (line 64, @0x0000000002679690, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, NetworkStateChanged, RegisterThinker, Set, SetPhantomState, SetSendToClients, operator=<bool>, operator[]
// calls: DOTA_Character_ScriptSpawn_Synchronous, CDOTA_BaseNPC::AddNewModifier, DOTACommander, CDOTA_BaseNPC::MakePhantomBlocker, CUtlMemory<CHandle<CBaseEntity>, int>::Grow
// callers: CDOTA_Ability_DataDriven::Script_ApplyDataDrivenThinker, CDOTA_ActionRunner::PerformAction_CreateThinker, CDOTA_ActionRunner::PerformAction_CreateThinkerWall, CDOTAGamerules::Radar, CDOTA_Item::LaunchLoot, CDOTA_Item::LaunchLootInitialHeight, CDOTA_Item_DataDriven::Script_ApplyDataDrivenThinker, CDOTA_Ability_HarpyStorm_ChainLightning::OnSpellStart, CDOTA_Ability_Greevil_Miniboss_Blue_IceVortex::OnSpellStart, CDOTA_Ability_BlackDragon_Fireball::OnSpellStart, CDOTA_Ability_Greevil_Miniboss_Orange_LightStrikeArray::OnSpellStart, CDotaTutorialNPCBlocker::SetEnabled (79 total)
// strings: "npc_dota_thinker"
CDOTA_BaseNPC *__fastcall Thinker_Create(
        CBaseEntity *pEntity,
        CDOTABaseAbility *pAbility,
        const char *pScriptName,
        KeyValues *pKV,
        Vector vOrigin,
        int iTeam,
        bool bPhantomBlocker,
        bool bSendToClient,
        KeyValues *pOptionalThinkerKV)
{
  CDOTA_BaseNPC *v12; // r13
  CEntityIdentity *m_pEntity; // rdx
  __int16 v14; // cx
  CDOTA_Commander *v15; // rax
  __int64 m_Size; // rbx
  int m_FirstFree; // edx
  CHandle<CBaseEntity> *v18; // rax
  Vector pScriptNamea; // [rsp+0h] [rbp-60h]
  const char *pScriptNameb; // [rsp+0h] [rbp-60h]
  CDOTABaseAbility *pAbilitya; // [rsp+8h] [rbp-58h]
  CDOTABaseAbility *pAbilityb; // [rsp+8h] [rbp-58h]
  int v24; // [rsp+20h] [rbp-40h]

  LODWORD(pScriptNamea.z) = pAbility;
  *&pScriptNamea.x = pScriptName;
  v12 = DOTA_Character_ScriptSpawn_Synchronous("npc_dota_thinker", pScriptNamea, iTeam, pEntity, pOptionalThinkerKV, 0);
  CDOTA_BaseNPC::AddNewModifier(v12, pEntity, pAbilitya, pScriptNameb, pKV, 0);
  if ( !v12->m_bIsPhantom.m_Value )
  {
    (*(v12->_vptr_IHandleEntity + 22))(v12, 2164, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v12->m_bIsPhantom.m_Value = 1;
  }
  LOBYTE(v12[1]._vptr_IHandleEntity) = bSendToClient;
  if ( bPhantomBlocker )
    CDOTA_BaseNPC::MakePhantomBlocker(v12);
  m_pEntity = v12->m_pEntity;
  v24 = -1;
  if ( m_pEntity != 0 )
  {
    v14 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v24 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v14 & 0x7FFF;
  }
  v15 = DOTACommander();
  m_Size = v15->m_Thinkers.m_Size;
  m_FirstFree = v15->m_Thinkers.m_Size;
  if ( m_Size == v15->m_Thinkers.m_Memory.m_nAllocationCount )
  {
    pAbilityb = v15;
    CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&v15->m_Thinkers.m_Memory, 1);
    v15 = pAbilityb;
    m_FirstFree = pAbilityb[8].m_DamageModifiers.m_FirstFree;
  }
  v15->m_Thinkers.m_Size = m_FirstFree + 1;
  v18 = &v15->m_Thinkers.m_Memory.m_pMemory[m_Size];
  if ( v18 != 0 )
    v18->m_Index = v24;
  return v12;
}


