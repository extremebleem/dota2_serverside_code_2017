// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_quest.cpp:57
class C_CDotaQuest_MapInstall {
	C_CDotaQuest_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/dota_quest.cpp:93
class CDotaQuestBase : public CBaseEntity {
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
	CDotaQuestBase(CDotaQuestBase &);
	CDotaQuestBase(CDotaQuestBase &);
	CDotaQuestBase();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDotaQuestBase();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 776
};

// src/game/shared/dota/dota_quest.cpp:99
class C_CDotaQuestBase_MapInstall {
	C_CDotaQuestBase_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/dota_quest.cpp:105
class C_CDotaSubquestBase_MapInstall {
	C_CDotaSubquestBase_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_QuestSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 33, @0x0000000002669760, libserver.so)
void __cdecl CDOTA_QuestSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// DOTAQuestSystem  (line 35, @0x0000000002669770, libserver.so)
// callers: CDOTA_Tutorial::CompleteQuest, CDOTA_Tutorial::ParseLessonKeys
// globals: g_pDOTAQuestSystem
CDOTA_QuestSystem *__cdecl DOTAQuestSystem()
{
  return g_pDOTAQuestSystem;
}


// CDotaQuest::YouForgotToImplementOrDeclareServerClass  (line 57, @0x0000000002654090, libserver.so)
int __fastcall CDotaQuest::YouForgotToImplementOrDeclareServerClass(CDotaQuest *const this)
{
  return 0;
}


// CDotaQuest::GetServerClass  (line 57, @0x0000000002658dc0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDotaQuest::GetServerClass(CDotaQuest *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  CEntityClass *v4; // rdx
  CEntityClassInfo *v5; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
    {
      v4 = m_pBaseClassInfo->m_pClass;
      result = v4->m_pGameClass;
      if ( result == 0 )
      {
        v5 = v4->m_pBaseClassInfo;
        if ( v5 != 0 )
          return CEntityClass::GetGameClass(v5->m_pClass, 0);
      }
    }
  }
  return result;
}


// CDotaQuestBase::~CDotaQuestBase  (line 93, @0x00000000026a0a60, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CDotaQuestBase::~CDotaQuestBase(CDotaQuestBase *const this)
{
  this->_vptr_IHandleEntity = &off_41719B0;
  CBaseEntity::~CBaseEntity(this);
}


// CDotaQuestBase::~CDotaQuestBase  (line 93, @0x00000000026a0a80, libserver.so)  // inlines: ~CDotaQuestBase
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CDotaQuestBase::~CDotaQuestBase(CDotaQuestBase *const this)
{
  this->_vptr_IHandleEntity = &off_41719B0;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDotaQuestBase::Schema_DynamicBinding  (line 95, @0x000000000269d620, libserver.so)
// globals: CDotaQuestBase::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDotaQuestBase::Schema_DynamicBinding(const CDotaQuestBase *const this)
{
  return CDotaQuestBase::s_pSchemaBinding;
}


// CDotaQuestBase::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 95, @0x000000000269d630, libserver.so)
// globals: CDotaQuestBase::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDotaQuestBase::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDotaQuestBase::CEntityInstanceEntityClass *const this)
{
  return CDotaQuestBase::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDotaQuestBase::CEntityInstanceEntityClass::DestructInstance  (line 95, @0x000000000269d640, libserver.so)  // inlines: Destruct<CDotaQuestBase>
void __fastcall CDotaQuestBase::CEntityInstanceEntityClass::DestructInstance(
        CDotaQuestBase::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDotaQuestBase::CEntityInstanceEntityClass::FreeInstance  (line 95, @0x000000000269d660, libserver.so)
void __fastcall CDotaQuestBase::CEntityInstanceEntityClass::FreeInstance(
        CDotaQuestBase::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDotaQuestBase::CEntityInstanceEntityClass::CanAllocate  (line 95, @0x000000000269d680, libserver.so)
bool __fastcall CDotaQuestBase::CEntityInstanceEntityClass::CanAllocate(
        const CDotaQuestBase::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDotaQuestBase::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 95, @0x000000000269d690, libserver.so)
// globals: CDotaQuestBase::s_pSchemaBinding
const ISchemaBinding *__fastcall CDotaQuestBase::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDotaQuestBase::CEntityInstanceEntityClass *const this)
{
  return CDotaQuestBase::s_pSchemaBinding;
}


// CDotaQuestBase::CEntityInstanceEntityClass::AllocateInstance  (line 95, @0x00000000026a0540, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDotaQuestBase::CEntityInstanceEntityClass::AllocateInstance(
        CDotaQuestBase::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CDotaQuestBase::CEntityInstanceEntityClass::ConstructInstance  (line 95, @0x00000000026a0690, libserver.so)  // inlines: CDotaQuestBase, Construct<CDotaQuestBase>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CDotaQuestBase::CEntityInstanceEntityClass::ConstructInstance(
        CDotaQuestBase::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_41719B0;
  }
  return p;
}


// CDotaQuestBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 95, @0x00000000026a60d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDotaQuestBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDotaQuestBase::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDotaQuestBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 95, @0x00000000026a60f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDotaQuestBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDotaQuestBase::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDotaQuestBase::GetEntityClassInternal  (line 95, @0x00000000026b0e70, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_06.cpp
// strings: "CDotaQuestBase"
// globals: `guard variable for'CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass, CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDotaQuestBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDotaQuestBase::GetEntityClassInfo(void)::g_EntityCDotaQuestBaseClassInfo, CDotaQuestBase::GetEntityClassInfo(void)::g_EntityCDotaQuestBaseClassInfo
CEntityClass *__cdecl CDotaQuestBase::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass) != 0 )
  {
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_designerName.u.m_Id = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass._vptr_CEntityClass = off_3F79390;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_ComponentOffsets.m_Size = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_AllHelpers.m_Size = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_classInputs.m_Size = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_classOutputs.m_Size = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_requiredEHandle.m_Index = -1;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_hNetworkSerializer = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_pBaseClassInfo = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_pClassInfo = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_flags = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_nAllHelpersFlags = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_pScriptClassDesc = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_pInputs = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_nInputCount = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_pOutputs = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_nOutputCount = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_pGameClass = 0;
    CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass._vptr_CEntityClass = off_4171930;
    __cxa_guard_release(&`guard variable for'CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass);
    __cxa_atexit(
      CDotaQuestBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass,
      &_dso_handle);
  }
  if ( g_pEntityCDotaQuestBaseClass != 0 )
    return &CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass;
  if ( `guard variable for'CDotaQuestBase::GetEntityClassInfo(void)::g_EntityCDotaQuestBaseClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDotaQuestBase::GetEntityClassInfo(void)::g_EntityCDotaQuestBaseClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDotaQuestBase::GetEntityClassInfo(void)::g_EntityCDotaQuestBaseClassInfo,
      "CDotaQuestBase",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDotaQuestBase::GetEntityClassInfo(void)::g_EntityCDotaQuestBaseClassInfo);
  }
  CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_pClassInfo = &CDotaQuestBase::GetEntityClassInfo(void)::g_EntityCDotaQuestBaseClassInfo;
  CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_pBaseClassInfo = CDotaQuestBase::GetEntityClassInfo(void)::g_EntityCDotaQuestBaseClassInfo.m_pBaseClassInfo;
  g_pEntityCDotaQuestBaseClass = &CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass;
  CDotaQuestBase::GetEntityClassInfo(void)::g_EntityCDotaQuestBaseClassInfo.m_pClass = &CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass;
  CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCDotaQuestBaseClass->m_pComponentOverrides = 0;
  return &CDotaQuestBase::GetEntityClassInternal(void)::g_EntityCDotaQuestBaseClass;
}


// CDotaQuestBase::YouForgotToImplementOrDeclareServerClass  (line 99, @0x00000000026540a0, libserver.so)
int __fastcall CDotaQuestBase::YouForgotToImplementOrDeclareServerClass(CDotaQuestBase *const this)
{
  return 0;
}


// CDotaQuestBase::GetServerClass  (line 99, @0x0000000002658e10, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDotaQuestBase::GetServerClass(CDotaQuestBase *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  CEntityClass *v4; // rdx
  CEntityClassInfo *v5; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
    {
      v4 = m_pBaseClassInfo->m_pClass;
      result = v4->m_pGameClass;
      if ( result == 0 )
      {
        v5 = v4->m_pBaseClassInfo;
        if ( v5 != 0 )
          return CEntityClass::GetGameClass(v5->m_pClass, 0);
      }
    }
  }
  return result;
}


// CDotaSubquestBase::YouForgotToImplementOrDeclareServerClass  (line 105, @0x00000000026540b0, libserver.so)
int __fastcall CDotaSubquestBase::YouForgotToImplementOrDeclareServerClass(CDotaSubquestBase *const this)
{
  return 0;
}


// CDotaSubquestBase::GetServerClass  (line 105, @0x0000000002658d80, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDotaSubquestBase::GetServerClass(CDotaSubquestBase *const this)
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


// CDotaQuest::SetTextReplaceValue  (line 272, @0x0000000002656d50, libserver.so)  // inlines: NetworkStateChanged, Set
// calls: memcmp
// callers: CDotaSubquestBase::TextReplaceValueChanged
void __fastcall CDotaQuest::SetTextReplaceValue(CDotaQuest *const this, int valueSlot, int value)
{
  unsigned __int64 v6; // rax
  char *v7; // r14
  int v8; // r12d
  int valuea[9]; // [rsp+Ch] [rbp-24h] BYREF

  valuea[0] = value;
  if ( valueSlot <= 3 )
  {
    v6 = 4LL * valueSlot;
    v7 = this + v6;
    if ( this->m_pnTextReplaceValuesCDotaQuest.m_Value[v6 / 4] != value )
    {
      if ( memcmp(&this->m_pnTextReplaceValuesCDotaQuest + v6, valuea, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1584, valueSlot, 0xFFFFFFFFLL);
        *(v7 + 396) = value;
      }
      v8 = this->m_nTextReplaceValueVersion.m_Value + 1;
      (*(this->_vptr_IHandleEntity + 22))(this, 1664, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_nTextReplaceValueVersion.m_Value = v8;
    }
  }
}


// CDotaQuest::SetTextReplaceString  (line 272, @0x0000000002656e10, libserver.so)  // inlines: FStrEq, GetForModify, NetworkStateChanged, Set, V_strncpy<int>, _V_strcmp
// calls: strcmp, _V_strncpy
void __fastcall CDotaQuest::SetTextReplaceString(CDotaQuest *const this, const char *pszString)
{
  CNetworkStringBase<64,CDotaQuest::NetworkVar_m_pszTextReplaceString> *p_m_pszTextReplaceString; // r12
  int v5; // r12d

  p_m_pszTextReplaceString = &this->m_pszTextReplaceString;
  if ( &this->m_pszTextReplaceString != pszString && strcmp(pszString, this->m_pszTextReplaceString.m_Value) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1600, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    _V_strncpy(p_m_pszTextReplaceString, pszString, 64);
    v5 = this->m_nTextReplaceValueVersion.m_Value + 1;
    (*(this->_vptr_IHandleEntity + 22))(this, 1664, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nTextReplaceValueVersion.m_Value = v5;
  }
}


// CDotaSubquestBase::SetTextReplaceString  (line 273, @0x0000000002656ec0, libserver.so)  // inlines: FStrEq, GetForModify, NetworkStateChanged, Set, V_strncpy<int>, _V_strcmp
// calls: strcmp, _V_strncpy
void __fastcall CDotaSubquestBase::SetTextReplaceString(CDotaSubquestBase *const this, const char *pszString)
{
  CNetworkStringBase<64,CDotaSubquestBase::NetworkVar_m_pszTextReplaceString> *p_m_pszTextReplaceString; // r12
  int v5; // r12d

  p_m_pszTextReplaceString = &this->m_pszTextReplaceString;
  if ( &this->m_pszTextReplaceString != pszString && strcmp(pszString, this->m_pszTextReplaceString.m_Value) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1048, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    _V_strncpy(p_m_pszTextReplaceString, pszString, 64);
    v5 = this->m_nTextReplaceValueVersion.m_Value + 1;
    (*(this->_vptr_IHandleEntity + 22))(this, 1112, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nTextReplaceValueVersion.m_Value = v5;
  }
}


// CDotaSubquestBase::SetTextReplaceValue  (line 273, @0x0000000002657890, libserver.so)  // inlines: NetworkStateChanged, Set, TextReplaceValueChanged
// calls: memcmp, CDotaSubquestBase::TextReplaceValueChanged
// callers: CDotaSubquestPlayerStat::SubquestThink, CDotaSubquestAbilityCastCount::AbilityCast, CDotaSubquestPlayerStat::Spawn, CDotaSubquestAbilityCastCount::Spawn
void __fastcall CDotaSubquestBase::SetTextReplaceValue(CDotaSubquestBase *const this, int valueSlot, int value)
{
  unsigned __int64 v6; // rax
  char *v7; // r14
  int v8; // r13d
  int valuea[9]; // [rsp+Ch] [rbp-24h] BYREF

  valuea[0] = value;
  if ( valueSlot <= 1 )
  {
    v6 = 4LL * valueSlot;
    v7 = this + v6;
    if ( this->m_pnTextReplaceValuesCDotaSubquestBase.m_Value[v6 / 4] != value )
    {
      if ( memcmp(&this->m_pnTextReplaceValuesCDotaSubquestBase + v6, valuea, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1040, valueSlot, 0xFFFFFFFFLL);
        *(v7 + 260) = value;
      }
      v8 = this->m_nTextReplaceValueVersion.m_Value + 1;
      (*(this->_vptr_IHandleEntity + 22))(this, 1112, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_nTextReplaceValueVersion.m_Value = v8;
      CDotaSubquestBase::TextReplaceValueChanged(this, valueSlot);
    }
  }
}


// CDotaQuest::SpawnFromKeyValues  (line 278, @0x0000000002678470, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddKeyValue<char const*>, AddToTail, Allocate, Base, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CUtlString, CopyData, Element, FindKeyHash, Free, Get, GetEntityClass, GetInstance, Init, MakeEntityKeyId, MakeStringToken, OverrideAllocator, SetClassName, SetValue, V_strlen, V_strncmp<int>, memcpy, operator CDotaQuest*, operator=, operator[], ~CEntitySpawner
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::SetValue, CEntitySystem::FindClassByDesignName, KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::GetName, _V_strncmp, V_snprintf, MurmurHash2LowerCase, RegisterStringToken (26 total)
// callers: CDOTA_Tutorial::ParseLessonKeys
// strings: "%s%d", "Attempted to set attribute %s as if it was a non-attribute key!\n"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
CDotaQuest *__fastcall CDotaQuest::SpawnFromKeyValues(const char *pszScriptName, KeyValues *pLoadKeys)
{
  CEntitySystem *v4; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v6; // rdx
  char v7; // al
  KeyValues *FirstSubKey; // r15
  __int64 v9; // rax
  const char *Name; // rax
  KeyValues *NextKey; // r12
  int v12; // r14d
  CEntityKeyValues *m_pEntityKeyValues; // rbx
  const char *v14; // rax
  uint32 v15; // r13d
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v17; // cx
  __int64 v18; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v19; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rbx
  __int16 v23; // dx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v26; // r13
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v27; // r13
  uint16 m_flags; // ax
  void *v29; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v30; // rax
  bool v31; // zf
  __int16 v32; // ax
  signed int v33; // r13d
  void *v34; // rax
  const char *String; // r12
  const char *v36; // rax
  EntityKeyId_t v37; // esi
  const char *v38; // rbx
  uint32 v39; // r13d
  CDotaQuest *v40; // r12
  __int64 v41; // rbx
  CDotaSubquestBase *v42; // rax
  __int64 v44; // [rsp+10h] [rbp-190h]
  __int64 v45; // [rsp+10h] [rbp-190h]
  signed int v46; // [rsp+18h] [rbp-188h]
  int nSubquests; // [rsp+1Ch] [rbp-184h]
  char *s; // [rsp+20h] [rbp-180h]
  CEntityHandle v49; // [rsp+30h] [rbp-170h] BYREF
  KeyValues *subquestKeys[8]; // [rsp+40h] [rbp-160h]
  CEntitySpawner<CDotaQuest> spawner; // [rsp+80h] [rbp-120h] BYREF
  char pszSubKeyName[72]; // [rsp+120h] [rbp-80h] BYREF
  unsigned __int64 v53; // [rsp+168h] [rbp-38h]

  v53 = __readfsqword(0x28u);
  if ( pszScriptName == 0 )
    return 0;
  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner._vptr_CEntitySpawnerBase = off_4172710;
  spawner.m_scriptClassName.m_pString = 0;
  spawner.m_pContext = 0;
  spawner.m_pSpawnBatch = 0;
  v4 = g_pEntitySystem;
  spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v4->m_entitySpawnerData;
  spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v4);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  v6 = *&SpawnOriginOffset->m_flMatVal[0][2];
  spawner.m_pEntityKeyValues = 0;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v6;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
  spawner.m_pEntityClass = g_pEntityCDotaQuestClass;
  if ( g_pApplication != 0 )
    v7 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v7 = 0;
  spawner.m_bValidateKeys = v7;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, pszScriptName);
  spawner.m_pEntityClass = CEntitySystem::FindClassByDesignName(
                             g_pEntitySystem,
                             pszScriptName,
                             &spawner.m_scriptClassName);
  if ( pLoadKeys != 0 )
  {
    FirstSubKey = KeyValues::GetFirstSubKey(pLoadKeys);
    if ( FirstSubKey != 0 )
    {
      nSubquests = 0;
      while ( 1 )
      {
        if ( KeyValues::GetFirstSubKey(FirstSubKey) != 0 )
        {
          Name = KeyValues::GetName(FirstSubKey);
          if ( _V_strncmp(Name, "subquest", 8) != 0 )
          {
            NextKey = KeyValues::GetFirstSubKey(FirstSubKey);
            if ( NextKey != 0 )
            {
              v12 = 0;
              do
              {
                v14 = KeyValues::GetName(FirstSubKey);
                V_snprintf(pszSubKeyName, 64, "%s%d", v14, v12);
                v15 = 0;
                s = KeyValues::GetName(NextKey);
                if ( pszSubKeyName[0] != 0
                  && (v15 = MurmurHash2LowerCase(pszSubKeyName, 0x31415926u), g_bUpdateStringTokenDatabase) )
                {
                  RegisterStringToken(v15, pszSubKeyName, 0, 1);
                  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
                  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
                    goto LABEL_15;
                }
                else
                {
                  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
                  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
                    goto LABEL_15;
                }
                m_nCount = m_pEntityKeyValues->m_keyHashes.m_nCount;
                if ( m_nCount <= 0 )
                {
LABEL_30:
                  CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyHashes);
                  v23 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
                  m_nAllocated = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
                  if ( m_nAllocated != 0 )
                  {
                    if ( m_nAllocated <= 9 )
                      m_pElements = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
                    else
                      m_pElements = m_pEntityKeyValues->m_keyHashes.m_pElements;
                  }
                  else
                  {
                    m_pElements = 0;
                  }
                  m_pElements[(m_pEntityKeyValues->m_keyHashes.m_nCount - 1)] = v15;
                  v44 = v23;
                  CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
                  if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
                    v26 = m_pEntityKeyValues->m_keyValues.m_pElements;
                  else
                    v26 = 0;
                  v27 = &v26[v44];
                  v45 = v44;
                  m_flags = v27->m_value.m_flags;
                  if ( (m_flags & 1) != 0 )
                    v27->m_value.m_flags = m_flags & 0xFFFE;
                  v27->m_value.m_uint64 = 0;
                  v27->m_value.m_type = 30;
                  if ( s != 0 )
                  {
                    v46 = strlen(s) + 1;
                    v29 = CEntityVariantAllocator::Allocate(v46);
                    v27->m_value.m_uint64 = v29;
                    memcpy(v29, s, v46);
                    v27->m_value.m_flags |= 1u;
                  }
                  if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
                    v30 = m_pEntityKeyValues->m_keyValues.m_pElements;
                  else
                    v30 = 0;
                  v30[v45].m_pAttributeName = 0;
                  goto LABEL_15;
                }
                v17 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
                v18 = 0;
                while ( v17 == 0 )
                {
                  if ( v15 == *(4 * v18) )
                    goto LABEL_27;
LABEL_24:
                  if ( m_nCount <= ++v18 )
                    goto LABEL_30;
                }
                v19 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
                if ( v17 > 9 )
                  v19 = m_pEntityKeyValues->m_keyHashes.m_pElements;
                if ( v15 != v19[v18] )
                  goto LABEL_24;
LABEL_27:
                if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
                {
                  v20 = m_pEntityKeyValues->m_keyValues.m_pElements;
                  v21 = v18;
                  v22 = &v20[v21];
                  if ( v20[v21].m_pAttributeName != 0 )
                    goto LABEL_29;
LABEL_43:
                  v32 = *(v22 + 10);
                  if ( (v32 & 1) != 0 )
                    *(v22 + 10) = v32 & 0xFFFE;
                  *v22 = 0;
                  *(v22 + 8) = 30;
                  if ( s != 0 )
                  {
                    v33 = strlen(s) + 1;
                    v34 = CEntityVariantAllocator::Allocate(v33);
                    *v22 = v34;
                    memcpy(v34, s, v33);
                    *(v22 + 10) |= 1u;
                  }
                }
                else
                {
                  v20 = 0;
                  v31 = *(&stru_10.m_Lock.gap0 + 3 * v18) == 0;
                  v22 = 24 * v18;
                  v21 = v18;
                  if ( v31 )
                    goto LABEL_43;
LABEL_29:
                  Warning(
                    "Attempted to set attribute %s as if it was a non-attribute key!\n",
                    v20[v21].m_pAttributeName);
                }
LABEL_15:
                ++v12;
                NextKey = KeyValues::GetNextKey(NextKey);
              }
              while ( NextKey != 0 );
            }
          }
          else if ( nSubquests <= 7 )
          {
            v9 = nSubquests++;
            subquestKeys[v9] = FirstSubKey;
          }
        }
        else
        {
          String = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
          v36 = KeyValues::GetName(FirstSubKey);
          v37.m_nHashCode = 0;
          v38 = v36;
          if ( v36 != 0 && *v36 != 0 )
          {
            v39 = MurmurHash2LowerCase(v36, 0x31415926u);
            if ( g_bUpdateStringTokenDatabase )
              RegisterStringToken(v39, v38, 0, 1);
            v37.m_nHashCode = v39;
          }
          CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, v37, String);
        }
        FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
        if ( FirstSubKey == 0 )
          goto LABEL_58;
      }
    }
  }
  nSubquests = 0;
LABEL_58:
  CEntitySpawner<CDotaQuest>::Spawn(&v49, &spawner);
  v40 = CEntityHandle::operator CEntityInstance *(&v49);
  if ( v40 != 0 && nSubquests != 0 )
  {
    v41 = 0;
    do
    {
      v42 = CDotaSubquestBase::SpawnFromKeyValues(subquestKeys[v41]);
      CDotaQuest::AddSubquest(v40, v42);
      ++v41;
    }
    while ( nSubquests > v41 );
  }
  spawner._vptr_CEntitySpawnerBase = off_4172710;
  CEntitySpawnerBase<CDotaQuest>::~CEntitySpawnerBase(&spawner);
  return v40;
}


// CDotaQuest::SpawnFromParms  (line 344, @0x0000000002677400, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, Add, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CUtlString, CVProfScope, EnterScope, Get, GetClassInfo, GetEHandle, GetElapsed, GetEntityClass, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTimebaseRegister, InTargetThread, IndexToIdentity, Init, InvokeCallbacks, IsEmpty, IsEnabled, LookupEntity, MakeEntityKeyId, MakeStringToken, OverrideAllocator, PLAT_CPU_TIME, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, SetClassName, SetValue, SetValue<int>, Spawn, operator CDotaQuest*, operator CEntityInstance*, operator!, operator(), operator=, ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CMicroProfilerGuard, ~CUtlString, ~CVProfScope
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::SetValue, CEntitySystem::FindClassByDesignName, MurmurHash2LowerCase, CEntityKeyValues::SetValue<int>, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get, CEntitySystem::CreateEntity, CEntitySystem::QueueSpawnEntity (24 total)
// callers: CDOTA_Tutorial::AddQuest
// strings: "Spawn", "Server Simulation"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride, CEntityHandle::gm_pEntityList
CDotaQuest *__fastcall CDotaQuest::SpawnFromParms(
        const char *pszName,
        int nType,
        const char *pszTitle,
        const char *pszText)
{
  CEntitySystem *v5; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v7; // rdx
  char v8; // al
  uint32 v9; // eax
  EntityKeyId_t v10; // r14d
  uint32 v11; // eax
  EntityKeyId_t v12; // r14d
  uint32 v13; // eax
  EntityKeyId_t v14; // r14d
  uint32 v15; // eax
  EntityKeyId_t v16; // r14d
  CEntityKeyValues *m_pEntityKeyValues; // rdi
  int m_enabled; // r9d
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v20; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v22; // r14
  CEntityIdentity *m_pEntity; // rax
  __int16 v24; // si
  int v25; // edx
  CEntitySpawnerContext<CDotaQuest> *m_pContext; // rbx
  CEntityKeyValues *i; // r15
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v30; // rdi
  CEntityIdentity *v31; // rax
  CDotaQuest *m_pInstance; // rbx
  CEntityIdentity *v33; // rax
  CUtlScratchMemoryPool *v34; // rdi
  CEntityKeyValues *v35; // r13
  const char *m_pszClassname; // rdx
  unsigned __int64 v39; // rbx
  ThreadId_t m_TargetThreadId; // r14
  uint64 m_numTimeBaseTicks; // rcx
  int m_nEntitySpawnerDataUseCount; // ecx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v44; // rax
  bool pszTitleb; // [rsp+20h] [rbp-100h]
  int nTypea; // [rsp+2Ch] [rbp-F4h] BYREF
  int v49; // [rsp+30h] [rbp-F0h]
  _QWORD v50[2]; // [rsp+40h] [rbp-E0h] BYREF
  CEntitySpawner<CDotaQuest> spawner; // [rsp+50h] [rbp-D0h] BYREF

  nTypea = nType;
  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner._vptr_CEntitySpawnerBase = off_4172710;
  spawner.m_scriptClassName.m_pString = 0;
  spawner.m_pContext = 0;
  v5 = g_pEntitySystem;
  spawner.m_pSpawnBatch = 0;
  spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v5->m_entitySpawnerData;
  spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v5);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  v7 = *&SpawnOriginOffset->m_flMatVal[0][2];
  spawner.m_pEntityKeyValues = 0;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v7;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
  spawner.m_pEntityClass = g_pEntityCDotaQuestClass;
  if ( g_pApplication != 0 )
    v8 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v8 = 0;
  spawner.m_bValidateKeys = v8;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, "quest");
  spawner.m_pEntityClass = CEntitySystem::FindClassByDesignName(g_pEntitySystem, "quest", &spawner.m_scriptClassName);
  v9 = MurmurHash2LowerCase("name", 0x31415926u);
  v10.m_nHashCode = v9;
  if ( g_bUpdateStringTokenDatabase )
    RegisterStringToken(v9, "name", 0, 1);
  CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, v10, pszName);
  v11 = MurmurHash2LowerCase("type", 0x31415926u);
  v12.m_nHashCode = v11;
  if ( g_bUpdateStringTokenDatabase )
    RegisterStringToken(v11, "type", 0, 1);
  CEntityKeyValues::SetValue<int>(spawner.m_pEntityKeyValues, v12, &nTypea);
  v13 = MurmurHash2LowerCase("title", 0x31415926u);
  v14.m_nHashCode = v13;
  if ( g_bUpdateStringTokenDatabase )
    RegisterStringToken(v13, "title", 0, 1);
  CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, v14, pszTitle);
  v15 = MurmurHash2LowerCase("text", 0x31415926u);
  v16.m_nHashCode = v15;
  if ( g_bUpdateStringTokenDatabase )
    RegisterStringToken(v15, "text", 0, 1);
  CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, v16, pszText);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  v49 = -1;
  if ( spawner.m_pEntityKeyValues == 0 )
    goto LABEL_45;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  pszTitleb = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    v39 = __rdtsc();
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "Spawn" )
      {
        m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "Spawn", 0, "Server Simulation", 4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v44 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v44->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v39 + __rdtsc();
  }
  if ( !CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790) )
  {
    m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
    if ( m_pszClassname != 0 )
      CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
  }
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  m_nMode = spawner.m_nMode;
  v20 = CUtlString::Get(&spawner.m_scriptClassName);
  Entity = CEntitySystem::CreateEntity(
             g_pEntitySystem,
             spawner.m_hSpawnGroupHandle,
             spawner.m_pEntityClass,
             v20,
             m_nMode,
             -1,
             -1,
             0,
             0);
  v22 = Entity;
  if ( Entity != 0 )
  {
    m_pEntity = Entity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v24 = 0x7FFF;
      v25 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v24 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v49) = v24 | v49 & 0x8000;
      v49 = (v25 << 15) | v49 & 0x7FFF;
    }
    v50[0] = m_pEntity;
    v50[1] = spawner.m_pEntityKeyValues;
    (*(*g_pGameResourceService + 280LL))(
      g_pGameResourceService,
      spawner.m_hSpawnGroupHandle,
      1,
      v50,
      &spawner.m_mSpawnGroupToWorld);
    CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v22, spawner.m_pEntityKeyValues);
    if ( spawner.m_pSpawnBatch == 0 )
      CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
    m_pContext = spawner.m_pContext;
    for ( i = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
    {
      m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
      pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
      if ( m_pthis != 0 || pfn != 0 )
      {
        v30 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
        if ( (pfn & 1) != 0 )
          pfn = *(pfn + *v30 - 1);
        (pfn)(v30, v22, i);
      }
    }
  }
  if ( pszTitleb )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  if ( (v49 + 2) > 1 && (v31 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v49 >> 9) & 0x3F]) != 0 )
  {
    m_pInstance = 0;
    v33 = &v31[v49 & 0x1FF];
    if ( v33 != 0 && v49 == v33->m_EHandle.m_Index )
      m_pInstance = v33->m_pInstance;
  }
  else
  {
LABEL_45:
    m_pInstance = 0;
  }
  v34 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  spawner._vptr_CEntitySpawnerBase = off_41726F0;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v34 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v34);
  }
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v35 = spawner.m_pEntityKeyValues;
    if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v35);
      operator delete(v35);
    }
  }
  if ( spawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  return m_pInstance;
}


// CDotaQuest::Spawn  (line 374, @0x0000000002675750, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, GetForModify, GetValue, GetValue<bool>, GetValue<int>, NetworkStateChanged, Set, V_strcpy_safe<256ul>, V_strncpy<int>, _V_strcmp, operator=<bool>, operator=<int>, operator=<quest_hud_types_t>, operator[]
// calls: CBaseEntity::Spawn, CEntityKeyValues::GetValueString, _V_strncpy, CVariantBase<CEntityVariantAllocator>::AssignTo, Warning, VariantFieldTypeName
// strings: "Quest: invalid quest type %d for quest named '%s'\n", "Quest: both win_if_completed and lose_if_completed set for quest '%s'\n", "false", "No conversion from %s to bool now\n", "true", "Invalid conversion : CString '%s' to bool\n"
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_2675B2B
void __fastcall CDotaQuest::Spawn(CDotaQuest *const this, const CEntityKeyValues *pKeyValues)
{
  char *m_pszQuestName; // r12
  const char *ValueString; // rax
  const char *v6; // r14
  const char *v7; // r14
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v12; // rdx
  unsigned int v13; // r14d
  CEntityVariant *p_m_value; // rdi
  int v15; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v16; // cx
  __int64 j; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v18; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v19; // rdx
  char v20; // r14
  CEntityVariant *v21; // rdi
  int v22; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v23; // cx
  __int64 k; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v25; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v26; // rdx
  char v27; // r14
  CEntityVariant *v28; // rdi
  int v29; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v30; // cx
  __int64 m; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v32; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v33; // rdx
  CEntityVariant *v34; // rdx
  int16 m_type; // ax
  char m_char; // r14
  const char *v37; // r14
  int v38; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v39; // cx
  __int64 n; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v41; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v42; // rdx
  int v43; // ebx
  CEntityVariant *v44; // rdi
  bool v45; // zf
  const char *v46; // rax
  int pDest[9]; // [rsp+Ch] [rbp-24h] BYREF

  m_pszQuestName = this->m_pszQuestName;
  CBaseEntity::Spawn(this, pKeyValues);
  ValueString = CEntityKeyValues::GetValueString(pKeyValues, 1894315094, "");
  _V_strncpy(m_pszQuestName, ValueString, 256);
  v6 = CEntityKeyValues::GetValueString(pKeyValues, 192087961, "");
  (*(this->_vptr_IHandleEntity + 22))(this, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  _V_strncpy(&this->m_pszQuestTitle, v6, 256);
  v7 = CEntityKeyValues::GetValueString(pKeyValues, 497410228, "");
  (*(this->_vptr_IHandleEntity + 22))(this, 1032, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  _V_strncpy(&this->m_pszQuestText, v7, 256);
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount > 0 )
  {
    m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
    for ( i = 0; m_nCount > i; ++i )
    {
      if ( m_nAllocated != 0 )
      {
        m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( m_nAllocated > 9 )
          m_pElements = pKeyValues->m_keyHashes.m_pElements;
        if ( m_pElements[i] == 485585308 )
        {
LABEL_9:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v12 = pKeyValues->m_keyValues.m_pElements;
          else
            v12 = 0;
          v13 = 0;
          p_m_value = &v12[i].m_value;
          if ( p_m_value->m_type != 0 )
            goto LABEL_12;
          goto LABEL_16;
        }
      }
      else if ( *(4 * i) == 485585308 )
      {
        goto LABEL_9;
      }
    }
  }
  p_m_value = &CEntityKeyValues::sm_EmptyVariant;
  v13 = 0;
  if ( CEntityKeyValues::sm_EmptyVariant.m_type != 0 )
  {
LABEL_12:
    if ( CVariantBase<CEntityVariantAllocator>::AssignTo(p_m_value, pDest) )
      v13 = pDest[0];
  }
LABEL_16:
  if ( this->m_nQuestType.m_Value != v13 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1288, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nQuestType.m_Value = v13;
  }
  if ( v13 > 3 )
  {
    Warning("Quest: invalid quest type %d for quest named '%s'\n", v13, m_pszQuestName);
    if ( this->m_nQuestType.m_Value != 0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1288, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_nQuestType.m_Value = 0;
    }
  }
  v15 = pKeyValues->m_keyHashes.m_nCount;
  if ( v15 > 0 )
  {
    v16 = pKeyValues->m_keyHashes.m_nAllocated;
    for ( j = 0; v15 > j; ++j )
    {
      if ( v16 != 0 )
      {
        v18 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v16 > 9 )
          v18 = pKeyValues->m_keyHashes.m_pElements;
        if ( v18[j] == 608387802 )
        {
LABEL_29:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v19 = pKeyValues->m_keyValues.m_pElements;
          else
            v19 = 0;
          v20 = 0;
          v21 = &v19[j].m_value;
          if ( v21->m_type != 0 )
            goto LABEL_32;
          goto LABEL_36;
        }
      }
      else if ( *(4 * j) == 608387802 )
      {
        goto LABEL_29;
      }
    }
  }
  v21 = &CEntityKeyValues::sm_EmptyVariant;
  v20 = 0;
  if ( CEntityKeyValues::sm_EmptyVariant.m_type != 0 )
  {
LABEL_32:
    v20 = CVariantBase<CEntityVariantAllocator>::AssignTo(v21, pDest);
    if ( v20 != 0 )
      v20 = pDest[0];
  }
LABEL_36:
  if ( this->m_bHidden.m_Value != v20 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1324, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bHidden.m_Value = v20;
  }
  if ( this->m_bCompleted.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1325, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bCompleted.m_Value = 0;
  }
  v22 = pKeyValues->m_keyHashes.m_nCount;
  if ( v22 > 0 )
  {
    v23 = pKeyValues->m_keyHashes.m_nAllocated;
    for ( k = 0; v22 > k; ++k )
    {
      if ( v23 != 0 )
      {
        v25 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v23 > 9 )
          v25 = pKeyValues->m_keyHashes.m_pElements;
        if ( v25[k] == 1721613332 )
        {
LABEL_48:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v26 = pKeyValues->m_keyValues.m_pElements;
          else
            v26 = 0;
          v27 = 0;
          v28 = &v26[k].m_value;
          if ( v28->m_type != 0 )
            goto LABEL_51;
          goto LABEL_55;
        }
      }
      else if ( *(4 * k) == 1721613332 )
      {
        goto LABEL_48;
      }
    }
  }
  v28 = &CEntityKeyValues::sm_EmptyVariant;
  v27 = 0;
  if ( CEntityKeyValues::sm_EmptyVariant.m_type != 0 )
  {
LABEL_51:
    v27 = CVariantBase<CEntityVariantAllocator>::AssignTo(v28, pDest);
    if ( v27 != 0 )
      v27 = pDest[0];
  }
LABEL_55:
  if ( this->m_bWinIfCompleted.m_Value != v27 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1326, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bWinIfCompleted.m_Value = v27;
  }
  v29 = pKeyValues->m_keyHashes.m_nCount;
  if ( v29 > 0 )
  {
    v30 = pKeyValues->m_keyHashes.m_nAllocated;
    for ( m = 0; v29 > m; ++m )
    {
      if ( v30 != 0 )
      {
        v32 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v30 > 9 )
          v32 = pKeyValues->m_keyHashes.m_pElements;
        if ( v32[m] == -2076224573 )
        {
LABEL_65:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v33 = pKeyValues->m_keyValues.m_pElements;
          else
            v33 = 0;
          v34 = &v33[m].m_value;
          m_type = v34->m_type;
          if ( m_type != 0 )
            goto LABEL_68;
          goto LABEL_70;
        }
      }
      else if ( *(4 * m) == -2076224573 )
      {
        goto LABEL_65;
      }
    }
  }
  v34 = &CEntityKeyValues::sm_EmptyVariant;
  m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( m_type != 0 )
  {
LABEL_68:
    switch ( m_type )
    {
      case 1:
        m_char = v34->m_float != 0.0;
        goto LABEL_71;
      case 5:
      case 37:
        m_char = v34->m_int != 0;
        goto LABEL_71;
      case 6:
        m_char = v34->m_char;
        goto LABEL_71;
      case 26:
      case 33:
        m_char = v34->m_uint64 != 0;
        goto LABEL_71;
      case 30:
        if ( strcmp(v34->m_pszString, "0") == 0
          || strcmp(v34->m_pszString, "false") == 0
          || strcmp(v34->m_pszString, "no") == 0 )
        {
          break;
        }
        if ( strcmp(v34->m_pszString, "1") == 0
          || strcmp(v34->m_pszString, "true") == 0
          || strcmp(v34->m_pszString, "yes") == 0 )
        {
          m_char = 1;
          goto LABEL_71;
        }
        Warning("Invalid conversion : CString '%s' to bool\n", v34->m_pszString);
        break;
      case 34:
        m_char = v34->m_float64 != 0.0;
        goto LABEL_71;
      default:
        v46 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to bool now\n", v46);
        break;
    }
  }
LABEL_70:
  m_char = 0;
LABEL_71:
  if ( this->m_bLoseIfCompleted.m_Value != m_char )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1327, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bLoseIfCompleted.m_Value = m_char;
  }
  v37 = CEntityKeyValues::GetValueString(pKeyValues, -1462199429, "");
  (*(this->_vptr_IHandleEntity + 22))(this, 1328, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  _V_strncpy(&this->m_pszGameEndText, v37, 256);
  v38 = pKeyValues->m_keyHashes.m_nCount;
  if ( v38 > 0 )
  {
    v39 = pKeyValues->m_keyHashes.m_nAllocated;
    for ( n = 0; v38 > n; ++n )
    {
      if ( v39 != 0 )
      {
        v41 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v39 > 9 )
          v41 = pKeyValues->m_keyHashes.m_pElements;
        if ( v41[n] == 24325985 )
        {
LABEL_81:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v42 = pKeyValues->m_keyValues.m_pElements;
          else
            v42 = 0;
          v43 = -1;
          v44 = &v42[n].m_value;
          if ( v44->m_type != 0 )
            goto LABEL_84;
          goto LABEL_88;
        }
      }
      else if ( *(4 * n) == 24325985 )
      {
        goto LABEL_81;
      }
    }
  }
  v44 = &CEntityKeyValues::sm_EmptyVariant;
  v43 = -1;
  if ( CEntityKeyValues::sm_EmptyVariant.m_type != 0 )
  {
LABEL_84:
    if ( CVariantBase<CEntityVariantAllocator>::AssignTo(v44, pDest) )
      v43 = pDest[0];
  }
LABEL_88:
  v45 = !this->m_bWinIfCompleted.m_Value;
  this->m_nQuestCompleteFadeAlpha = v43;
  if ( !v45 && this->m_bLoseIfCompleted.m_Value )
  {
    Warning("Quest: both win_if_completed and lose_if_completed set for quest '%s'\n", m_pszQuestName);
    if ( this->m_bLoseIfCompleted.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1327, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bLoseIfCompleted.m_Value = 0;
    }
  }
  if ( this->m_nTextReplaceValueVersion.m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1664, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nTextReplaceValueVersion.m_Value = 0;
  }
}


// CDotaQuest::SubquestCompleted  (line 410, @0x0000000002669780, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator bool, operator!=
// calls: CDotaQuest::CompleteQuest
// callers: CDOTA_QuestSystem::SubquestCompleted
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDotaQuest::SubquestCompleted(CDotaQuest *const this, CDotaSubquestBase *pSubquest)
{
  CNetworkArrayBase<CHandle<CDotaSubquestBase>,8,CDotaQuest::NetworkVar_m_hSubquests> *p_m_hSubquests; // rax
  int v3; // edx
  char v4; // r10
  CEntityIdentity *v5; // r8
  CEntityIdentity *v6; // r8

  if ( !this->m_bCompleted.m_Value )
  {
    p_m_hSubquests = &this->m_hSubquests;
    v3 = 8;
    v4 = 0;
    do
    {
      while ( 1 )
      {
        if ( p_m_hSubquests->m_Value[0].m_Index + 2 > 1 )
        {
          v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(p_m_hSubquests->m_Value[0].m_Index) >> 9) & 0x3F];
          if ( v5 != 0 )
          {
            v6 = &v5[p_m_hSubquests->m_Value[0].m_Index & 0x1FF];
            if ( v6 != 0 && p_m_hSubquests->m_Value[0].m_Index == v6->m_EHandle.m_Index && pSubquest != v6->m_pInstance )
              break;
          }
        }
        p_m_hSubquests = (p_m_hSubquests + 4);
        if ( --v3 == 0 )
          goto LABEL_12;
      }
      if ( BYTE1(v6->m_pInstance[21].m_iszPrivateVScripts.u.m_Id) == 0 )
        v4 = 1;
      p_m_hSubquests = (p_m_hSubquests + 4);
      --v3;
    }
    while ( v3 != 0 );
LABEL_12:
    if ( v4 == 0 )
      CDotaQuest::CompleteQuest(this);
  }
}


// CDotaQuest::CompleteQuest  (line 436, @0x0000000002657050, libserver.so)  // inlines: CBroadcastRecipientFilter, CDOTAUserMsg_TutorialFade_t, CDOTAUserMsg_TutorialFinish_t, CNetMessagePB, CReliableBroadcastRecipientFilter, CUserMessagePB, CreateEvent, FindGameEvent<CDOTAUserMsg_TutorialFade_t>, FindGameEvent<CDOTAUserMsg_TutorialFinish_t>, FindOrCreateGameEvent<CDOTAUserMsg_TutorialFade_t>, FindOrCreateGameEvent<CDOTAUserMsg_TutorialFinish_t>, NetworkStateChanged, PostEvent<CDOTAUserMsg_TutorialFade_t>, PostEvent<CDOTAUserMsg_TutorialFinish_t>, SendUserMessage<CDOTAUserMsg_TutorialFade_t>, SendUserMessage<CDOTAUserMsg_TutorialFinish_t>, Set, SetEntityIndex, assign, entindex, length, operator=<bool>, set_body, set_emblem, set_has_body, set_has_emblem, set_has_heading, set_has_success, set_has_tgt_alpha, set_heading, set_success, set_tgt_alpha, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_TutorialFade_t, ~CDOTAUserMsg_TutorialFinish_t, ~CNetMessagePB, ~CReliableBroadcastRecipientFilter, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTAUserMsg_TutorialFade::CDOTAUserMsg_TutorialFade, CDOTAUserMsg_TutorialFade::~CDOTAUserMsg_TutorialFade, CRecipientFilter::~CRecipientFilter, CEntityInstance::GetEntityIndex, CDOTAUserMsg_TutorialFinish::CDOTAUserMsg_TutorialFinish, std::string::assign(char const*,ulong), strlen, CDOTAGamerules::SetGameWinner, CDOTAUserMsg_TutorialFinish::~CDOTAUserMsg_TutorialFinish (14 total)
// callers: CDotaQuest::SubquestCompleted, CDOTA_QuestSystem::CompleteQuestByName
// strings: "dota_quest_completed", "questIndex", "#DOTA_Tutorial_FINISHED_Positive", "#DOTA_Tutorial_FINISHED_Negative", "#DOTA_Tutorial_TaskFailed", "#DOTA_Tutorial_TaskCompleted"
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialFade_t>(bool)::s_hEvent, IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialFinish_t>(bool)::s_hEvent
void __fastcall CDotaQuest::CompleteQuest(CDotaQuest *const this)
{
  int m_nQuestCompleteFadeAlpha; // r14d
  int v3; // edx
  int v4; // eax
  __int64 v5; // r15
  IGameEventSystem *v6; // r14
  __int64 v7; // r12
  CEntityIndex v8; // eax
  bool v9; // zf
  const char *v10; // rsi
  const char *v11; // r14
  size_t v12; // rax
  size_t v13; // rax
  bool m_Value; // al
  __int64 v15; // r15
  IGameEventSystem *v16; // r14
  void (__fastcall *v17)(IGameEventSystem *, _QWORD, _QWORD, CReliableBroadcastRecipientFilter *, __int64, _QWORD *, __int64); // [rsp+8h] [rbp-1B8h]
  void (__fastcall *v18)(IGameEventSystem *, _QWORD, _QWORD, CReliableBroadcastRecipientFilter *, __int64, _QWORD *, __int64); // [rsp+8h] [rbp-1B8h]
  _QWORD v19[2]; // [rsp+10h] [rbp-1B0h] BYREF
  int v20; // [rsp+20h] [rbp-1A0h]
  std::string *v21; // [rsp+28h] [rbp-198h]
  std::string *v22; // [rsp+30h] [rbp-190h]
  std::string *v23; // [rsp+38h] [rbp-188h]
  bool v24; // [rsp+40h] [rbp-180h]
  CReliableBroadcastRecipientFilter filterbroadcast; // [rsp+50h] [rbp-170h] BYREF
  unsigned __int64 v26; // [rsp+188h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  if ( this->m_bWinIfCompleted.m_Value || this->m_bLoseIfCompleted.m_Value )
  {
    CRecipientFilter::CRecipientFilter(&filterbroadcast);
    filterbroadcast._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&filterbroadcast);
    filterbroadcast._vptr_IRecipientFilter = &off_3FCB130;
    CRecipientFilter::MakeReliable(&filterbroadcast);
    CDOTAUserMsg_TutorialFinish::CDOTAUserMsg_TutorialFinish(v19);
    v9 = !this->m_bWinIfCompleted.m_Value;
    v19[0] = off_416CDD0;
    v10 = "#DOTA_Tutorial_FINISHED_Positive";
    if ( v9 )
      v10 = "#DOTA_Tutorial_FINISHED_Negative";
    v20 |= 1u;
    std::string::assign(v21, v10, 0x20u);
    v11 = "#DOTA_Tutorial_TaskCompleted";
    if ( !this->m_bWinIfCompleted.m_Value )
      v11 = "#DOTA_Tutorial_TaskFailed";
    v20 |= 2u;
    v12 = strlen(v11);
    std::string::assign(v22, v11, v12);
    v20 |= 4u;
    v13 = strlen(this->m_pszGameEndText.m_Value);
    std::string::assign(v23, this->m_pszGameEndText.m_Value, v13);
    m_Value = this->m_bWinIfCompleted.m_Value;
    v20 |= 8u;
    v15 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialFinish_t>(bool)::s_hEvent;
    v24 = m_Value;
    v16 = g_pGameEventSystem;
    v18 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialFinish_t>(bool)::s_hEvent);
    v18(v16, 0, 0, &filterbroadcast, v15, v19, 56);
    CDOTAGamerules::SetGameWinner(g_pGameRules, 3 - this->m_bWinIfCompleted.m_Value);
    v19[0] = &off_416CC50;
    CDOTAUserMsg_TutorialFinish::~CDOTAUserMsg_TutorialFinish(v19);
    filterbroadcast._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&filterbroadcast);
  }
  if ( this->m_nQuestCompleteFadeAlpha != -1 )
  {
    CRecipientFilter::CRecipientFilter(&filterbroadcast);
    filterbroadcast._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&filterbroadcast);
    filterbroadcast._vptr_IRecipientFilter = &off_3FCB130;
    CRecipientFilter::MakeReliable(&filterbroadcast);
    CDOTAUserMsg_TutorialFade::CDOTAUserMsg_TutorialFade(v19);
    m_nQuestCompleteFadeAlpha = this->m_nQuestCompleteFadeAlpha;
    v3 = 255;
    v19[0] = off_416CB90;
    v4 = 0;
    v5 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialFade_t>(bool)::s_hEvent;
    if ( m_nQuestCompleteFadeAlpha >= 0 )
      v4 = this->m_nQuestCompleteFadeAlpha;
    v20 |= 1u;
    if ( v4 <= 255 )
      v3 = v4;
    LODWORD(v21) = v3;
    v6 = g_pGameEventSystem;
    v17 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TutorialFade_t>(bool)::s_hEvent);
    v17(v6, 0, 0, &filterbroadcast, v5, v19, 32);
    v19[0] = &off_416CA10;
    CDOTAUserMsg_TutorialFade::~CDOTAUserMsg_TutorialFade(v19);
    filterbroadcast._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&filterbroadcast);
  }
  v7 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "dota_quest_completed", 0, 0);
  if ( v7 != 0 )
  {
    v8.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    (*(*v7 + 112LL))(v7, "questIndex", v8.m_Data);
    (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v7, 0);
  }
  if ( !this->m_bCompleted.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1325, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bCompleted.m_Value = 1;
  }
}


// CDotaQuest::AddSubquest  (line 472, @0x0000000002669840, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, ParentQuestChanged, Set, TextReplaceValueChanged, operator CEntityInstance*, operator!, operator=
// calls: memcmp, CDotaSubquestBase::TextReplaceValueChanged, Warning
// callers: CDotaQuest::Script_AddSubquest, CDotaQuest::SpawnFromKeyValues
// strings: "Failed to add subquest to quest %s"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDotaQuest::AddSubquest(CDotaQuest *const this, CDotaSubquestBase *pSubquest)
{
  CNetworkArrayBase<CHandle<CDotaSubquestBase>,8,CDotaQuest::NetworkVar_m_hSubquests> *p_m_hSubquests; // rbx
  unsigned int v5; // r12d
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *m_pEntity; // rax
  __int16 v9; // cx
  int s2[12]; // [rsp+0h] [rbp-30h] BYREF

  if ( pSubquest != 0 )
  {
    p_m_hSubquests = &this->m_hSubquests;
    v5 = 0;
    while ( p_m_hSubquests->m_Value[0].m_Index + 2 > 1 )
    {
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(p_m_hSubquests->m_Value[0].m_Index) >> 9) & 0x3F];
      if ( v6 == 0 )
        break;
      v7 = &v6[p_m_hSubquests->m_Value[0].m_Index & 0x1FF];
      if ( v7 == 0 || p_m_hSubquests->m_Value[0].m_Index != v7->m_EHandle.m_Index || v7->m_pInstance == 0 )
        break;
      ++v5;
      p_m_hSubquests = (p_m_hSubquests + 4);
      if ( v5 == 8 )
        goto LABEL_16;
    }
    m_pEntity = pSubquest->m_pEntity;
    s2[0] = -1;
    if ( m_pEntity != 0 )
    {
      v9 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      s2[0] = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v9 & 0x7FFF;
    }
    if ( memcmp(p_m_hSubquests, s2, 4u) != 0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1292, v5, 0xFFFFFFFFLL);
      p_m_hSubquests->m_Value[0].m_Index = s2[0];
    }
    CDotaSubquestBase::TextReplaceValueChanged(pSubquest, 0);
    CDotaSubquestBase::TextReplaceValueChanged(pSubquest, 1);
  }
  else
  {
LABEL_16:
    Warning("Failed to add subquest to quest %s", this->m_pszQuestName);
  }
}


// CDotaQuest::RemoveSubquest  (line 494, @0x00000000026699b0, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator CEntityInstance*, operator=, operator==
// calls: memcmp, Warning
// callers: CDotaQuest::Script_RemoveSubquest
// strings: "Failed to remove subquest from quest %s"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDotaQuest::RemoveSubquest(CDotaQuest *const this, CDotaSubquestBase *pSubquest)
{
  CNetworkArrayBase<CHandle<CDotaSubquestBase>,8,CDotaQuest::NetworkVar_m_hSubquests> *p_m_hSubquests; // rbx
  unsigned int v4; // r12d
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  int s2[12]; // [rsp+0h] [rbp-30h] BYREF

  if ( pSubquest != 0 )
  {
    p_m_hSubquests = &this->m_hSubquests;
    v4 = 0;
    while ( 1 )
    {
      if ( p_m_hSubquests->m_Value[0].m_Index + 2 > 1 )
      {
        v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(p_m_hSubquests->m_Value[0].m_Index) >> 9) & 0x3F];
        if ( v5 != 0 )
        {
          v6 = &v5[p_m_hSubquests->m_Value[0].m_Index & 0x1FF];
          if ( v6 != 0 && p_m_hSubquests->m_Value[0].m_Index == v6->m_EHandle.m_Index && pSubquest == v6->m_pInstance )
            break;
        }
      }
      ++v4;
      p_m_hSubquests = (p_m_hSubquests + 4);
      if ( v4 == 8 )
        goto LABEL_11;
    }
    s2[0] = -1;
    if ( memcmp(p_m_hSubquests, s2, 4u) != 0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1292, v4, 0xFFFFFFFFLL);
      p_m_hSubquests->m_Value[0].m_Index = s2[0];
    }
  }
  else
  {
LABEL_11:
    Warning("Failed to remove subquest from quest %s", this->m_pszQuestName);
  }
}


// CDotaQuest::GetSubquestByName  (line 515, @0x0000000002669aa0, libserver.so)  // inlines: FStrEq, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, _V_strcmp, operator CEntityInstance*, operator->
// calls: strcmp
// callers: CDotaQuest::Script_GetSubquestByName
// globals: CEntityHandle::gm_pEntityList
CDotaSubquestBase *__fastcall CDotaQuest::GetSubquestByName(CDotaQuest *const this, const char *pszName)
{
  CConcreteEntityList *v3; // r14
  CNetworkArrayBase<CHandle<CDotaSubquestBase>,8,CDotaQuest::NetworkVar_m_hSubquests> *p_m_hSubquests; // rbx
  int v5; // r12d
  CDotaSubquestBase *m_pInstance; // r15
  CEntityIdentity *v7; // rax
  CEntityIdentity *v8; // rax

  if ( pszName == 0 )
    return 0;
  v3 = CEntityHandle::gm_pEntityList;
  p_m_hSubquests = &this->m_hSubquests;
  v5 = 8;
  while ( 1 )
  {
    m_pInstance = 0;
    if ( p_m_hSubquests->m_Value[0].m_Index + 2 > 1 )
    {
      v7 = v3->m_pIdentityChunks[(LOWORD(p_m_hSubquests->m_Value[0].m_Index) >> 9) & 0x3F];
      if ( v7 != 0 )
      {
        v8 = &v7[p_m_hSubquests->m_Value[0].m_Index & 0x1FF];
        if ( v8 != 0 && p_m_hSubquests->m_Value[0].m_Index == v8->m_EHandle.m_Index )
          m_pInstance = v8->m_pInstance;
      }
    }
    if ( pszName == m_pInstance->m_pszSubquestName || strcmp(m_pInstance->m_pszSubquestName, pszName) == 0 )
      break;
    p_m_hSubquests = (p_m_hSubquests + 4);
    if ( --v5 == 0 )
      return 0;
  }
  return m_pInstance;
}


// CDotaSubquestBase::SpawnFromKeyValues  (line 596, @0x0000000002677bc0, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddKeyValue<char const*>, AddToTail, Allocate, Base, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CUtlString, CVProfScope, CopyData, Element, FindKeyHash, Free, Get, GetClassInfo, GetEHandle, GetEntityClass, GetEntryIndex, GetInstance, GetSerialNumber, Init, InvokeCallbacks, IsEmpty, IsEnabled, MakeEntityKeyId, MakeStringToken, OverrideAllocator, Set, SetClassName, SetValue, Spawn, V_strlen, memcpy, operator CDotaSubquestBase*, operator!, operator(), operator=, operator[], ~CEntitySpawner, ~CVProfScope
// calls: KeyValues::GetName, CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::SetValue, CEntitySystem::FindClassByDesignName, KeyValues::GetFirstSubKey, KeyValues::GetNextKey, V_snprintf, MurmurHash2LowerCase, RegisterStringToken, Warning (30 total)
// callers: CDotaQuest::SpawnFromKeyValues
// strings: "%s%d", "Attempted to set attribute %s as if it was a non-attribute key!\n", "Server Simulation", "Spawn"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
CDotaSubquestBase *__fastcall CDotaSubquestBase::SpawnFromKeyValues(KeyValues *pLoadKeys)
{
  const char *Name; // r12
  CEntitySystem *v3; // rdi
  CUtlScratchMemoryPool *v4; // rax
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v6; // rdx
  char v7; // al
  KeyValues *FirstSubKey; // r12
  int v9; // r14d
  CEntityKeyValues *m_pEntityKeyValues; // rbx
  const char *v11; // rax
  uint32 v12; // r13d
  const char *v13; // r15
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v15; // cx
  __int64 v16; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v17; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int16 v21; // dx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v24; // r13
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v25; // r13
  uint16 m_flags; // ax
  void *v27; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v28; // rax
  bool v29; // zf
  __int16 v30; // ax
  signed int v31; // r13d
  void *v32; // rax
  const char *String; // r13
  const char *v34; // rax
  EntityKeyId_t v35; // esi
  const char *v36; // rbx
  CEntityKeyValues *v37; // rdi
  int m_enabled; // ebx
  bool v39; // r13
  const char *m_pszClassname; // rdx
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v42; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v44; // rbx
  CEntityIdentity *m_pEntity; // rax
  __int16 v46; // si
  CEntitySpawnerContext<CDotaSubquestBase> *m_pContext; // r14
  CEntityKeyValues *i; // r15
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v51; // rdi
  CDotaSubquestBase *v52; // rbx
  uint32 v54; // r12d
  signed int v55; // [rsp+24h] [rbp-15Ch]
  __int64 v56; // [rsp+28h] [rbp-158h]
  __int64 v57; // [rsp+28h] [rbp-158h]
  KeyValues *pSpawnerKey; // [rsp+30h] [rbp-150h]
  CEntityHandle v59; // [rsp+40h] [rbp-140h] BYREF
  _QWORD v60[2]; // [rsp+50h] [rbp-130h] BYREF
  CEntitySpawner<CDotaSubquestBase> spawner; // [rsp+60h] [rbp-120h] BYREF
  char pszSubKeyName[72]; // [rsp+100h] [rbp-80h] BYREF
  unsigned __int64 v63; // [rsp+148h] [rbp-38h]

  v63 = __readfsqword(0x28u);
  if ( pLoadKeys == 0 )
    return 0;
  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  Name = KeyValues::GetName(pLoadKeys);
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner.m_scriptClassName.m_pString = 0;
  spawner._vptr_CEntitySpawnerBase = off_4172750;
  spawner.m_pContext = 0;
  spawner.m_pSpawnBatch = 0;
  v3 = g_pEntitySystem;
  v4 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v3->m_entitySpawnerData;
  spawner.m_pPrevAllocator = v4;
  spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v3);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  v6 = *&SpawnOriginOffset->m_flMatVal[0][2];
  spawner.m_pEntityKeyValues = 0;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v6;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
  spawner.m_pEntityClass = g_pEntityCDotaSubquestBaseClass;
  if ( g_pApplication != 0 )
    v7 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v7 = 0;
  spawner.m_bValidateKeys = v7;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, Name);
  spawner.m_pEntityClass = CEntitySystem::FindClassByDesignName(g_pEntitySystem, Name, &spawner.m_scriptClassName);
  for ( pSpawnerKey = KeyValues::GetFirstSubKey(pLoadKeys);
        pSpawnerKey != 0;
        pSpawnerKey = KeyValues::GetNextKey(pSpawnerKey) )
  {
    if ( KeyValues::GetFirstSubKey(pSpawnerKey) != 0 )
    {
      FirstSubKey = KeyValues::GetFirstSubKey(pSpawnerKey);
      if ( FirstSubKey != 0 )
      {
        v9 = 0;
        do
        {
          v11 = KeyValues::GetName(pSpawnerKey);
          V_snprintf(pszSubKeyName, 64, "%s%d", v11, v9);
          v12 = 0;
          v13 = KeyValues::GetName(FirstSubKey);
          if ( pszSubKeyName[0] != 0
            && (v12 = MurmurHash2LowerCase(pszSubKeyName, 0x31415926u), g_bUpdateStringTokenDatabase) )
          {
            RegisterStringToken(v12, pszSubKeyName, 0, 1);
            m_pEntityKeyValues = spawner.m_pEntityKeyValues;
            if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
              goto LABEL_9;
          }
          else
          {
            m_pEntityKeyValues = spawner.m_pEntityKeyValues;
            if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
              goto LABEL_9;
          }
          m_nCount = m_pEntityKeyValues->m_keyHashes.m_nCount;
          if ( m_nCount <= 0 )
          {
LABEL_24:
            CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyHashes);
            v21 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
            m_nAllocated = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
            if ( m_nAllocated != 0 )
            {
              if ( m_nAllocated <= 9 )
                m_pElements = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
              else
                m_pElements = m_pEntityKeyValues->m_keyHashes.m_pElements;
            }
            else
            {
              m_pElements = 0;
            }
            m_pElements[(m_pEntityKeyValues->m_keyHashes.m_nCount - 1)] = v12;
            v56 = v21;
            CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
            if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
              v24 = m_pEntityKeyValues->m_keyValues.m_pElements;
            else
              v24 = 0;
            v25 = &v24[v56];
            v57 = v56;
            m_flags = v25->m_value.m_flags;
            if ( (m_flags & 1) != 0 )
              v25->m_value.m_flags = m_flags & 0xFFFE;
            v25->m_value.m_uint64 = 0;
            v25->m_value.m_type = 30;
            if ( v13 != 0 )
            {
              v55 = strlen(v13) + 1;
              v27 = CEntityVariantAllocator::Allocate(v55);
              v25->m_value.m_uint64 = v27;
              memcpy(v27, v13, v55);
              v25->m_value.m_flags |= 1u;
            }
            if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
              v28 = m_pEntityKeyValues->m_keyValues.m_pElements;
            else
              v28 = 0;
            v28[v57].m_pAttributeName = 0;
            goto LABEL_9;
          }
          v15 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
          v16 = 0;
          while ( v15 == 0 )
          {
            if ( v12 == *(4 * v16) )
              goto LABEL_21;
LABEL_18:
            if ( m_nCount <= ++v16 )
              goto LABEL_24;
          }
          v17 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v15 > 9 )
            v17 = m_pEntityKeyValues->m_keyHashes.m_pElements;
          if ( v12 != v17[v16] )
            goto LABEL_18;
LABEL_21:
          if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
          {
            v18 = m_pEntityKeyValues->m_keyValues.m_pElements;
            v19 = v16;
            v20 = &v18[v19];
            if ( v18[v19].m_pAttributeName != 0 )
              goto LABEL_23;
LABEL_37:
            v30 = *(v20 + 10);
            if ( (v30 & 1) != 0 )
              *(v20 + 10) = v30 & 0xFFFE;
            *v20 = 0;
            *(v20 + 8) = 30;
            if ( v13 != 0 )
            {
              v31 = strlen(v13) + 1;
              v32 = CEntityVariantAllocator::Allocate(v31);
              *v20 = v32;
              memcpy(v32, v13, v31);
              *(v20 + 10) |= 1u;
            }
          }
          else
          {
            v18 = 0;
            v29 = *(&stru_10.m_Lock.gap0 + 3 * v16) == 0;
            v20 = 24 * v16;
            v19 = v16;
            if ( v29 )
              goto LABEL_37;
LABEL_23:
            Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v18[v19].m_pAttributeName);
          }
LABEL_9:
          ++v9;
          FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
        }
        while ( FirstSubKey != 0 );
      }
    }
    else
    {
      String = KeyValues::GetString(pSpawnerKey, 0, "", 0, 0);
      v34 = KeyValues::GetName(pSpawnerKey);
      v35.m_nHashCode = 0;
      v36 = v34;
      if ( v34 != 0 && *v34 != 0 )
      {
        v54 = MurmurHash2LowerCase(v34, 0x31415926u);
        if ( g_bUpdateStringTokenDatabase )
          RegisterStringToken(v54, v36, 0, 1);
        v35.m_nHashCode = v54;
      }
      CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, v35, String);
    }
  }
  v37 = spawner.m_pEntityKeyValues;
  v59.m_Index = -1;
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    m_enabled = g_VProfCurrentProfile.m_enabled;
    v39 = m_enabled != 0;
    if ( m_enabled != 0 )
    {
      CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
      v37 = spawner.m_pEntityKeyValues;
    }
    if ( !CEntityKeyValues::HasValue(v37, -971301790) )
    {
      m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
      if ( m_pszClassname != 0 )
        CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
    }
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    m_nMode = spawner.m_nMode;
    v42 = CUtlString::Get(&spawner.m_scriptClassName);
    Entity = CEntitySystem::CreateEntity(
               g_pEntitySystem,
               spawner.m_hSpawnGroupHandle,
               spawner.m_pEntityClass,
               v42,
               m_nMode,
               -1,
               -1,
               0,
               0);
    v44 = Entity;
    if ( Entity != 0 )
    {
      m_pEntity = Entity->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v46 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v46 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v59.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v46 & 0x7FFF;
      }
      else
      {
        v59.m_Index = -1;
      }
      v60[0] = m_pEntity;
      v60[1] = spawner.m_pEntityKeyValues;
      (*(*g_pGameResourceService + 280LL))(
        g_pGameResourceService,
        spawner.m_hSpawnGroupHandle,
        1,
        v60,
        &spawner.m_mSpawnGroupToWorld);
      CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v44, spawner.m_pEntityKeyValues);
      if ( spawner.m_pSpawnBatch == 0 )
        CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
      m_pContext = spawner.m_pContext;
      for ( i = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
      {
        m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
        pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
        if ( m_pthis != 0 || pfn != 0 )
        {
          v51 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
          if ( (pfn & 1) != 0 )
            pfn = *(pfn + *v51 - 1);
          (pfn)(v51, v44, i);
        }
      }
    }
    if ( v39 )
      CVProfile::ExitScope(&g_VProfCurrentProfile);
  }
  v52 = CEntityHandle::operator CEntityInstance *(&v59);
  spawner._vptr_CEntitySpawnerBase = off_4172750;
  CEntitySpawnerBase<CDotaSubquestBase>::~CEntitySpawnerBase(&spawner);
  return v52;
}


// CDotaSubquestBase::Spawn  (line 642, @0x0000000002676290, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, GetForModify, GetValue, GetValue<bool>, GetValue<int>, GetValueString, Min<long long unsigned int>, Min<unsigned int>, NetworkStateChanged, Set, TempString, V_strcpy_safe<256ul>, V_strncpy<int>, VariantFieldTypeName, atoi, operator=<bool>, operator=<int>, operator[]
// calls: CBaseEntity::Spawn, _V_strncpy, CVariantBase<CEntityVariantAllocator>::AssignTo, strtol, Warning
// callers: CDotaSubquestTutorialEvent::Spawn, CDotaSubquestPlayerStat::Spawn, CDotaSubquestAbilityCastCount::Spawn, CDotaSubquestBuyItems::Spawn, CDotaSubquestEntityDeath::Spawn
// strings: "default", "js_array", "No conversion from %s to int now\n", "js_object", "js_value", "hscript_lightbinding" (21 total)
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_26766CF, jpt_26767AD
void __fastcall CDotaSubquestBase::Spawn(CDotaSubquestBase *const this, const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  CEntityVariant *p_m_value; // rax
  const char *m_uint64; // rsi
  int v11; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v12; // cx
  __int64 v13; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v14; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v15; // rdx
  CEntityVariant *v16; // rax
  const char *v17; // r13
  int v18; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v19; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v21; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v22; // rdx
  bool v23; // r13
  CEntityVariant *v24; // rdi
  int v25; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v26; // cx
  __int64 j; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v28; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v29; // rdx
  bool v30; // r13
  CEntityVariant *v31; // rdi
  int v32; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v33; // cx
  __int64 v34; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v35; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v36; // rdx
  CEntityVariant *v37; // rcx
  int16 m_type; // ax
  uint64 v39; // rbx
  const char *v40; // rsi
  bool pDest[33]; // [rsp+Fh] [rbp-21h] BYREF

  CBaseEntity::Spawn(this, pKeyValues);
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_13:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_uint64 = "default";
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_12;
    goto LABEL_14;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v6 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v6) == 1894315094 )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v6 )
      goto LABEL_13;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v6] != 1894315094 )
    goto LABEL_6;
LABEL_9:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v8 = pKeyValues->m_keyValues.m_pElements;
  else
    v8 = 0;
  p_m_value = &v8[v6].m_value;
  m_uint64 = "default";
  if ( p_m_value->m_type == 30 )
LABEL_12:
    m_uint64 = p_m_value->m_uint64;
LABEL_14:
  _V_strncpy(this->m_pszSubquestName, m_uint64, 256);
  v11 = pKeyValues->m_keyHashes.m_nCount;
  if ( v11 <= 0 )
  {
LABEL_26:
    v16 = &CEntityKeyValues::sm_EmptyVariant;
    v17 = "";
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_25;
    goto LABEL_27;
  }
  v12 = pKeyValues->m_keyHashes.m_nAllocated;
  v13 = 0;
  while ( 2 )
  {
    if ( v12 == 0 )
    {
      if ( *(4 * v13) == 497410228 )
        break;
      goto LABEL_19;
    }
    v14 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v12 > 9 )
      v14 = pKeyValues->m_keyHashes.m_pElements;
    if ( v14[v13] != 497410228 )
    {
LABEL_19:
      if ( v11 <= ++v13 )
        goto LABEL_26;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v15 = pKeyValues->m_keyValues.m_pElements;
  else
    v15 = 0;
  v16 = &v15[v13].m_value;
  v17 = "";
  if ( v16->m_type == 30 )
LABEL_25:
    v17 = v16->m_uint64;
LABEL_27:
  (*(this->_vptr_IHandleEntity + 22))(this, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  _V_strncpy(&this->m_pszSubquestText, v17, 256);
  v18 = pKeyValues->m_keyHashes.m_nCount;
  if ( v18 > 0 )
  {
    v19 = pKeyValues->m_keyHashes.m_nAllocated;
    for ( i = 0; v18 > i; ++i )
    {
      if ( v19 != 0 )
      {
        v21 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v19 > 9 )
          v21 = pKeyValues->m_keyHashes.m_pElements;
        if ( v21[i] == 608387802 )
        {
LABEL_35:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v22 = pKeyValues->m_keyValues.m_pElements;
          else
            v22 = 0;
          v23 = 0;
          v24 = &v22[i].m_value;
          if ( v24->m_type != 0 )
            goto LABEL_38;
          goto LABEL_42;
        }
      }
      else if ( *(4 * i) == 608387802 )
      {
        goto LABEL_35;
      }
    }
  }
  v24 = &CEntityKeyValues::sm_EmptyVariant;
  v23 = 0;
  if ( CEntityKeyValues::sm_EmptyVariant.m_type != 0 )
  {
LABEL_38:
    v23 = CVariantBase<CEntityVariantAllocator>::AssignTo(v24, pDest);
    if ( v23 )
      v23 = pDest[0];
  }
LABEL_42:
  if ( this->m_bHidden.m_Value != v23 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1032, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bHidden.m_Value = v23;
  }
  if ( this->m_bCompleted.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1033, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bCompleted.m_Value = 0;
  }
  v25 = pKeyValues->m_keyHashes.m_nCount;
  if ( v25 > 0 )
  {
    v26 = pKeyValues->m_keyHashes.m_nAllocated;
    for ( j = 0; v25 > j; ++j )
    {
      if ( v26 != 0 )
      {
        v28 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v26 > 9 )
          v28 = pKeyValues->m_keyHashes.m_pElements;
        if ( v28[j] == -2117990996 )
        {
LABEL_54:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v29 = pKeyValues->m_keyValues.m_pElements;
          else
            v29 = 0;
          v30 = 0;
          v31 = &v29[j].m_value;
          if ( v31->m_type != 0 )
            goto LABEL_57;
          goto LABEL_61;
        }
      }
      else if ( *(4 * j) == -2117990996 )
      {
        goto LABEL_54;
      }
    }
  }
  v31 = &CEntityKeyValues::sm_EmptyVariant;
  v30 = 0;
  if ( CEntityKeyValues::sm_EmptyVariant.m_type != 0 )
  {
LABEL_57:
    v30 = CVariantBase<CEntityVariantAllocator>::AssignTo(v31, pDest);
    if ( v30 )
      v30 = pDest[0];
  }
LABEL_61:
  if ( this->m_bShowProgressBar.m_Value != v30 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1034, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bShowProgressBar.m_Value = v30;
  }
  v32 = pKeyValues->m_keyHashes.m_nCount;
  if ( v32 <= 0 )
  {
LABEL_80:
    v37 = &CEntityKeyValues::sm_EmptyVariant;
    m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( m_type == 0 )
      goto LABEL_74;
    goto LABEL_81;
  }
  v33 = pKeyValues->m_keyHashes.m_nAllocated;
  v34 = 0;
  while ( 2 )
  {
    if ( v33 == 0 )
    {
      if ( *(4 * v34) == -1672581874 )
        break;
      goto LABEL_68;
    }
    v35 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v33 > 9 )
      v35 = pKeyValues->m_keyHashes.m_pElements;
    if ( v35[v34] != -1672581874 )
    {
LABEL_68:
      if ( v32 <= ++v34 )
        goto LABEL_80;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v36 = pKeyValues->m_keyValues.m_pElements;
  else
    v36 = 0;
  v37 = &v36[v34].m_value;
  m_type = v37->m_type;
  if ( m_type == 0 )
  {
LABEL_74:
    LODWORD(v39) = 0;
    goto LABEL_75;
  }
LABEL_81:
  switch ( m_type )
  {
    case 1:
      LODWORD(v39) = v37->m_float;
      break;
    case 5:
      LODWORD(v39) = v37->m_int;
      break;
    case 6:
      LODWORD(v39) = v37->m_char;
      break;
    case 26:
      LODWORD(v39) = 0x7FFFFFFF;
      if ( v37->m_int64 <= 0x7FFFFFFF )
      {
        LODWORD(v39) = 0x80000000;
        if ( v37->m_uint64 >= 0xFFFFFFFF80000000LL )
          v39 = v37->m_uint64;
      }
      break;
    case 30:
      LODWORD(v39) = strtol(v37->m_pszString, 0, 10);
      break;
    case 33:
      LODWORD(v39) = 0x7FFFFFFF;
      if ( v37->m_uint64 <= 0x7FFFFFFE )
        LODWORD(v39) = v37->m_uint64;
      break;
    case 34:
      LODWORD(v39) = v37->m_float64;
      break;
    case 37:
      LODWORD(v39) = 0x7FFFFFFF;
      if ( v37->m_int <= 0x7FFFFFFEu )
        LODWORD(v39) = v37->m_int;
      break;
    default:
      switch ( m_type )
      {
        case 1:
          v40 = "float";
          break;
        case 3:
          v40 = "vector";
          break;
        case 4:
          v40 = "quaternion";
          break;
        case 5:
          v40 = "integer";
          break;
        case 6:
          v40 = "boolean";
          break;
        case 8:
          v40 = "character";
          break;
        case 9:
          v40 = "color";
          break;
        case 13:
          v40 = "ehandle";
          break;
        case 25:
          v40 = "vector2d";
          break;
        case 26:
          v40 = "int64";
          break;
        case 27:
          v40 = "vector4d";
          break;
        case 28:
          v40 = "resourcehandle";
          break;
        case 30:
          v40 = "cstring";
          break;
        case 31:
          v40 = "hscript";
          break;
        case 32:
          v40 = "variant";
          break;
        case 33:
          v40 = "uint64";
          break;
        case 34:
          v40 = "float64";
          break;
        case 37:
          v40 = "unsigned";
          break;
        case 38:
          v40 = "utlstringtoken";
          break;
        case 39:
          v40 = "qangle";
          break;
        case 48:
          v40 = "hscript_lightbinding";
          break;
        case 49:
          v40 = "js_value";
          break;
        case 50:
          v40 = "js_object";
          break;
        case 51:
          v40 = "js_array";
          break;
        case 52:
          v40 = "js_raw_args";
          break;
        default:
          v40 = "unknown_variant_type";
          break;
      }
      Warning("No conversion from %s to int now\n", v40);
      goto LABEL_74;
  }
LABEL_75:
  if ( this->m_nProgressBarHueShift.m_Value != v39 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1036, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nProgressBarHueShift.m_Value = v39;
  }
  if ( this->m_nTextReplaceValueVersion.m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1112, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nTextReplaceValueVersion.m_Value = 0;
  }
}


// CDotaSubquestBase::CompleteSubquest  (line 662, @0x0000000002669e10, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
// calls: CDOTA_QuestSystem::SubquestCompleted
// callers: CDotaSubquestPlayerStat::SubquestThink, CDotaSubquestAbilityCastCount::AbilityCast, CDOTA_QuestSystem::FireGameEvent
// globals: g_pDOTAQuestSystem
void __fastcall CDotaSubquestBase::CompleteSubquest(CDotaSubquestBase *const this)
{
  if ( !this->m_bCompleted.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1033, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bCompleted.m_Value = 1;
  }
  CDOTA_QuestSystem::SubquestCompleted(g_pDOTAQuestSystem, this);
}


// CDotaSubquestBase::TextReplaceValueChanged  (line 672, @0x00000000026577b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTextReplaceValue, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator==
// calls: CGameEntitySystem::FindEntityByClassname, CDotaQuest::SetTextReplaceValue
// callers: CDotaSubquestBase::SetTextReplaceValue, CDotaQuest::AddSubquest, CDotaSubquestBase::TextReplaceValueChanged
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDotaSubquestBase::TextReplaceValueChanged(CDotaSubquestBase *const this, int nValueSlot)
{
  CDotaQuest *EntityByClassname; // rax
  __int64 v3; // r14
  uint32 m_Index; // edx
  CDotaSubquestBase *m_pInstance; // rsi
  CEntityIdentity *v8; // rcx
  CEntityIdentity *v9; // rcx
  CDotaQuest *pQuest; // [rsp+8h] [rbp-28h]

  EntityByClassname = 0;
  v3 = nValueSlot;
  while ( 1 )
  {
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, EntityByClassname, "quest");
    if ( EntityByClassname == 0 )
      break;
    m_Index = EntityByClassname->m_hSubquests.m_Value[0].m_Index;
    m_pInstance = 0;
    if ( m_Index + 2 > 1 )
    {
      v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(EntityByClassname->m_hSubquests.m_Value[0].m_Index) >> 9)
                                                          & 0x3F];
      if ( v8 != 0 )
      {
        v9 = &v8[EntityByClassname->m_hSubquests.m_Value[0].m_Index & 0x1FF];
        if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
          m_pInstance = v9->m_pInstance;
      }
    }
    if ( this == m_pInstance )
    {
      pQuest = EntityByClassname;
      CDotaQuest::SetTextReplaceValue(
        EntityByClassname,
        nValueSlot != 0,
        this->m_pnTextReplaceValuesCDotaSubquestBase.m_Value[v3]);
      EntityByClassname = pQuest;
    }
  }
}


// CDotaSubquestBase::TextReplaceValueChanged  (line 672, @0x0000000002669b80, libserver.so)
// calls: CDotaSubquestBase::TextReplaceValueChanged
void __fastcall CDotaSubquestBase::TextReplaceValueChanged(CDotaSubquestBase *const this, int nValueSlot)
{
  if ( nValueSlot <= 1 )
    CDotaSubquestBase::TextReplaceValueChanged(this, nValueSlot);
}


// CDotaSubquestBuyItems::Spawn  (line 696, @0x0000000002688720, libserver.so)  // inlines: AddToTail, Base, CopyConstruct<char const*>, DOTAQuestSystem, Element, FindKeyHash, GetValue, GetValueString, GrowMemory, ListenForGameEvent, MakeEntityKeyId, MakeStringToken, TempString, operator[]
// calls: CDotaSubquestBase::Spawn, V_snprintf, CEntityKeyValues::GetValueString, DOTAGameManager, CDOTAGameManager::GetAbilityDataByName, MurmurHash2LowerCase, RegisterStringToken, Warning, CUtlMemory<char const*, int>::Grow, __stack_chk_fail
// strings: "item_list%d", "dota_item_purchased", "Subquest: Could not identify buyable item: %s"
// globals: g_pDOTAQuestSystem, CEntityKeyValues::sm_EmptyVariant
void __fastcall CDotaSubquestBuyItems::Spawn(CDotaSubquestBuyItems *const this, const CEntityKeyValues *pKeyValues)
{
  EntityKeyId_t v4; // esi
  int v5; // r12d
  const char *ValueString; // r15
  CDOTAGameManager *v7; // rax
  DOTAAbilityData_t *AbilityDataByName; // rax
  __int64 m_Size; // r15
  int v10; // edx
  const char **v11; // rdx
  uint32 v12; // eax
  int m_nCount; // r9d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // si
  __int64 v15; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v17; // rcx
  CEntityVariant *p_m_value; // rax
  CDOTA_QuestSystem *v19; // rsi
  IGameEventManager2 *v20; // rdi
  uint32 v21; // eax
  uint32 pItemDataa; // [rsp+8h] [rbp-58h]
  DOTAAbilityData_t *pItemData; // [rsp+8h] [rbp-58h]
  uint32 pItemDatab; // [rsp+8h] [rbp-58h]
  char pszItemKeyName[24]; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  CDotaSubquestBase::Spawn(this, pKeyValues);
  V_snprintf(pszItemKeyName, 16, "item_list%d", 0);
  v4.m_nHashCode = 0;
  if ( pszItemKeyName[0] != 0 )
  {
    v21 = MurmurHash2LowerCase(pszItemKeyName, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      pItemDatab = v21;
      RegisterStringToken(v21, pszItemKeyName, 0, 1);
      v4.m_nHashCode = pItemDatab;
    }
    else
    {
      v4.m_nHashCode = v21;
    }
  }
  v5 = 0;
  ValueString = CEntityKeyValues::GetValueString(pKeyValues, v4, 0);
  if ( ValueString != 0 )
  {
    do
    {
      v7 = DOTAGameManager();
      AbilityDataByName = CDOTAGameManager::GetAbilityDataByName(v7, ValueString);
      if ( AbilityDataByName != 0 )
      {
        m_Size = this->m_itemList.m_Size;
        v10 = this->m_itemList.m_Size;
        if ( m_Size == this->m_itemList.m_Memory.m_nAllocationCount )
        {
          pItemData = AbilityDataByName;
          CUtlMemory<char const*,int>::Grow(&this->m_itemList.m_Memory, 1);
          v10 = this->m_itemList.m_Size;
          AbilityDataByName = pItemData;
        }
        this->m_itemList.m_Size = v10 + 1;
        v11 = &this->m_itemList.m_Memory.m_pMemory[m_Size];
        if ( v11 != 0 )
          *v11 = AbilityDataByName->m_pszAbilityName;
      }
      else
      {
        Warning("Subquest: Could not identify buyable item: %s", ValueString);
      }
      V_snprintf(pszItemKeyName, 16, "item_list%d", ++v5);
      v12 = 0;
      if ( pszItemKeyName[0] != 0 )
      {
        v12 = MurmurHash2LowerCase(pszItemKeyName, 0x31415926u);
        if ( g_bUpdateStringTokenDatabase )
        {
          pItemDataa = v12;
          RegisterStringToken(v12, pszItemKeyName, 0, 1);
          v12 = pItemDataa;
        }
      }
      m_nCount = pKeyValues->m_keyHashes.m_nCount;
      if ( m_nCount <= 0 )
      {
LABEL_21:
        p_m_value = &CEntityKeyValues::sm_EmptyVariant;
        if ( CEntityKeyValues::sm_EmptyVariant.m_type != 30 )
          break;
        goto LABEL_22;
      }
      m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
      v15 = 0;
      while ( m_nAllocated == 0 )
      {
        if ( v12 == *(4 * v15) )
          goto LABEL_17;
LABEL_14:
        if ( m_nCount <= ++v15 )
          goto LABEL_21;
      }
      m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
      if ( m_nAllocated > 9 )
        m_pElements = pKeyValues->m_keyHashes.m_pElements;
      if ( v12 != m_pElements[v15] )
        goto LABEL_14;
LABEL_17:
      if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
        v17 = pKeyValues->m_keyValues.m_pElements;
      else
        v17 = 0;
      p_m_value = &v17[v15].m_value;
      if ( p_m_value->m_type != 30 )
        break;
LABEL_22:
      ValueString = p_m_value->m_uint64;
    }
    while ( p_m_value->m_uint64 != 0 );
  }
  v19 = g_pDOTAQuestSystem;
  v20 = gameeventmanager;
  g_pDOTAQuestSystem->m_bRegisteredForEvents = 1;
  (*(v20->_vptr_IBaseInterface + 4))(v20, &v19->CGameEventListener, "dota_item_purchased", 1);
}


// CDotaSubquestEntityDeath::Spawn  (line 733, @0x00000000026889c0, libserver.so)  // inlines: AddToTail, Base, CUtlSymbolLarge, CopyConstruct<CUtlSymbolLarge>, DOTAQuestSystem, Element, FindKeyHash, GetValue, GetValueString, GrowMemory, ListenForGameEvent, MakeEntityKeyId, MakeStringToken, TempString, operator[]
// calls: CDotaSubquestBase::Spawn, V_snprintf, CEntityKeyValues::GetValueString, AllocPooledString, MurmurHash2LowerCase, RegisterStringToken, CUtlMemory<CUtlSymbolLarge, int>::Grow, __stack_chk_fail
// strings: "entity_list%d", "entity_killed"
// globals: g_pDOTAQuestSystem, CEntityKeyValues::sm_EmptyVariant
void __fastcall CDotaSubquestEntityDeath::Spawn(
        CDotaSubquestEntityDeath *const this,
        const CEntityKeyValues *pKeyValues)
{
  EntityKeyId_t v4; // esi
  int v5; // r12d
  const char *ValueString; // rsi
  __int64 m_Size; // rax
  int v8; // edx
  CUtlSymbolLarge *v9; // rax
  uint32 v10; // eax
  int m_nCount; // r9d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // si
  __int64 v13; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v15; // rcx
  CEntityVariant *p_m_value; // rax
  CDOTA_QuestSystem *v17; // rsi
  IGameEventManager2 *v18; // rdi
  uint32 v19; // eax
  uint32 v20; // [rsp+Ch] [rbp-64h]
  int v21; // [rsp+Ch] [rbp-64h]
  uint32 v22; // [rsp+Ch] [rbp-64h]
  UtlSymLargeId_t v23[2]; // [rsp+10h] [rbp-60h] BYREF
  char pszEntityKeyName[24]; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  CDotaSubquestBase::Spawn(this, pKeyValues);
  V_snprintf(pszEntityKeyName, 16, "entity_list%d", 0);
  v4.m_nHashCode = 0;
  if ( pszEntityKeyName[0] != 0 )
  {
    v19 = MurmurHash2LowerCase(pszEntityKeyName, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      v22 = v19;
      RegisterStringToken(v19, pszEntityKeyName, 0, 1);
      v4.m_nHashCode = v22;
    }
    else
    {
      v4.m_nHashCode = v19;
    }
  }
  v5 = 0;
  ValueString = CEntityKeyValues::GetValueString(pKeyValues, v4, 0);
  if ( ValueString != 0 )
  {
    do
    {
      AllocPooledString(v23, ValueString);
      m_Size = this->m_entityNameList.m_Size;
      v8 = this->m_entityNameList.m_Size;
      if ( m_Size == this->m_entityNameList.m_Memory.m_nAllocationCount )
      {
        v21 = this->m_entityNameList.m_Size;
        CUtlMemory<CUtlSymbolLarge,int>::Grow(&this->m_entityNameList.m_Memory, 1);
        v8 = this->m_entityNameList.m_Size;
        m_Size = v21;
      }
      this->m_entityNameList.m_Size = v8 + 1;
      v9 = &this->m_entityNameList.m_Memory.m_pMemory[m_Size];
      if ( v9 != 0 )
        v9->u.m_Id = v23[0];
      V_snprintf(pszEntityKeyName, 16, "entity_list%d", ++v5);
      v10 = 0;
      if ( pszEntityKeyName[0] != 0 )
      {
        v10 = MurmurHash2LowerCase(pszEntityKeyName, 0x31415926u);
        if ( g_bUpdateStringTokenDatabase )
        {
          v20 = v10;
          RegisterStringToken(v10, pszEntityKeyName, 0, 1);
          v10 = v20;
        }
      }
      m_nCount = pKeyValues->m_keyHashes.m_nCount;
      if ( m_nCount <= 0 )
      {
LABEL_20:
        p_m_value = &CEntityKeyValues::sm_EmptyVariant;
        if ( CEntityKeyValues::sm_EmptyVariant.m_type != 30 )
          break;
        goto LABEL_21;
      }
      m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
      v13 = 0;
      while ( m_nAllocated == 0 )
      {
        if ( v10 == *(4 * v13) )
          goto LABEL_16;
LABEL_13:
        if ( m_nCount <= ++v13 )
          goto LABEL_20;
      }
      m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
      if ( m_nAllocated > 9 )
        m_pElements = pKeyValues->m_keyHashes.m_pElements;
      if ( v10 != m_pElements[v13] )
        goto LABEL_13;
LABEL_16:
      if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
        v15 = pKeyValues->m_keyValues.m_pElements;
      else
        v15 = 0;
      p_m_value = &v15[v13].m_value;
      if ( p_m_value->m_type != 30 )
        break;
LABEL_21:
      ValueString = p_m_value->m_uint64;
    }
    while ( p_m_value->m_uint64 != 0 );
  }
  v17 = g_pDOTAQuestSystem;
  v18 = gameeventmanager;
  g_pDOTAQuestSystem->m_bRegisteredForEvents = 1;
  (*(v18->_vptr_IBaseInterface + 4))(v18, &v17->CGameEventListener, "entity_killed", 1);
}


// CDotaSubquestTutorialEvent::Spawn  (line 761, @0x0000000002676900, libserver.so)  // inlines: Base, DOTAQuestSystem, Element, FindKeyHash, GetValue, GetValueString, ListenForGameEvent, TempString, operator=, operator[]
// calls: CDotaSubquestBase::Spawn, AllocPooledString
// globals: CEntityKeyValues::sm_EmptyVariant, g_pDOTAQuestSystem
void __fastcall CDotaSubquestTutorialEvent::Spawn(
        CDotaSubquestTutorialEvent *const this,
        const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  const char *m_uint64; // rbx
  CEntityVariant *p_m_value; // rax
  CDOTA_QuestSystem *v11; // rsi
  UtlSymLargeId_t v12[4]; // [rsp+0h] [rbp-20h] BYREF

  CDotaSubquestBase::Spawn(this, pKeyValues);
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_13:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_uint64 = 0;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_12;
    goto LABEL_14;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v6 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v6) == 1577547154 )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v6 )
      goto LABEL_13;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v6] != 1577547154 )
    goto LABEL_6;
LABEL_9:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v8 = pKeyValues->m_keyValues.m_pElements;
  else
    v8 = 0;
  m_uint64 = 0;
  p_m_value = &v8[v6].m_value;
  if ( p_m_value->m_type == 30 )
LABEL_12:
    m_uint64 = p_m_value->m_uint64;
LABEL_14:
  AllocPooledString(v12, m_uint64);
  v11 = g_pDOTAQuestSystem;
  this->m_sTutorialEvent.u.m_Id = v12[0];
  v11->m_bRegisteredForEvents = 1;
  (*(gameeventmanager->_vptr_IBaseInterface + 4))(gameeventmanager, &v11->CGameEventListener, m_uint64, 1);
}


// CDotaSubquestPlayerStat::Spawn  (line 777, @0x00000000026769f0, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, Get<int>, GetValue, GetValue<bool>, GetValue<int>, GetValueString, Min<long long unsigned int>, Min<unsigned int>, TempString, _V_strcmp, atoi, curtime, operator[]
// calls: CDotaSubquestBase::Spawn, strtol, VariantFieldTypeName, Warning, CDotaSubquestBase::SetTextReplaceValue, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CDotaSubquestPlayerStat::GetCurrentValue
// strings: "No conversion from %s to int now\n", "last_hits", "denies", "No conversion from %s to bool now\n", "false", "true" (7 total)
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_2676B66, jpt_2676C19, CDotaSubquestPlayerStat::SubquestThink(void)
void __fastcall CDotaSubquestPlayerStat::Spawn(CDotaSubquestPlayerStat *const this, const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // edx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // si
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rcx
  CEntityVariant *p_m_value; // rax
  const char *m_uint64; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v11; // si
  __int64 v12; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v13; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v14; // rdx
  CEntityVariant *v15; // rcx
  int16 m_type; // ax
  uint64 v17; // rax
  int v18; // edi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v19; // si
  __int64 i; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v21; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v22; // rcx
  CEntityVariant *v23; // rsi
  int m_nPlayerStatValue; // edx
  int16 v25; // cx
  const char *v26; // rax
  double v27; // xmm1_8
  CGlobalVars *v28; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  char m_char; // dl
  int CurrentValue; // eax
  const char *v32; // rdx
  const char *v33; // rax

  CDotaSubquestBase::Spawn(this, pKeyValues);
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_16:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_12;
    goto LABEL_17;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v6 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v6) == 1276385516 )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v6 )
      goto LABEL_16;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v6] != 1276385516 )
    goto LABEL_6;
LABEL_9:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v8 = pKeyValues->m_keyValues.m_pElements;
  else
    v8 = 0;
  p_m_value = &v8[v6].m_value;
  if ( p_m_value->m_type != 30 )
  {
LABEL_17:
    this->m_ePlayerStatType = subquest_player_stat_types_t::SUBQUEST_PLAYER_STAT_GOLD;
    m_nCount = pKeyValues->m_keyHashes.m_nCount;
    goto LABEL_18;
  }
LABEL_12:
  m_uint64 = p_m_value->m_uint64;
  if ( m_uint64 == 0 || strcmp(m_uint64, "gold") == 0 )
    goto LABEL_17;
  if ( strcmp(m_uint64, "level") == 0 )
  {
    this->m_ePlayerStatType = subquest_player_stat_types_t::SUBQUEST_PLAYER_STAT_LEVEL;
    m_nCount = pKeyValues->m_keyHashes.m_nCount;
  }
  else if ( strcmp(m_uint64, "last_hits") == 0 )
  {
    this->m_ePlayerStatType = subquest_player_stat_types_t::SUBQUEST_PLAYER_STAT_LAST_HITS;
    m_nCount = pKeyValues->m_keyHashes.m_nCount;
  }
  else if ( strcmp(m_uint64, "denies") == 0 )
  {
    this->m_ePlayerStatType = subquest_player_stat_types_t::SUBQUEST_PLAYER_STAT_DENIES;
    m_nCount = pKeyValues->m_keyHashes.m_nCount;
  }
LABEL_18:
  if ( m_nCount <= 0 )
  {
LABEL_29:
    v15 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_30;
  }
  v11 = pKeyValues->m_keyHashes.m_nAllocated;
  v12 = 0;
  while ( 2 )
  {
    if ( v11 == 0 )
    {
      if ( *(4 * v12) == 243424315 )
        break;
      goto LABEL_23;
    }
    v13 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v11 > 9 )
      v13 = pKeyValues->m_keyHashes.m_pElements;
    if ( v13[v12] != 243424315 )
    {
LABEL_23:
      if ( m_nCount <= ++v12 )
        goto LABEL_29;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v14 = pKeyValues->m_keyValues.m_pElements;
  else
    v14 = 0;
  v15 = &v14[v12].m_value;
LABEL_30:
  m_type = v15->m_type;
  switch ( m_type )
  {
    case 0:
      LODWORD(v17) = 0;
      break;
    case 1:
      LODWORD(v17) = v15->m_float;
      break;
    case 5:
      LODWORD(v17) = v15->m_int;
      break;
    case 6:
      LODWORD(v17) = v15->m_char;
      break;
    case 26:
      LODWORD(v17) = 0x7FFFFFFF;
      if ( v15->m_int64 <= 0x7FFFFFFF )
      {
        LODWORD(v17) = 0x80000000;
        if ( v15->m_uint64 >= 0xFFFFFFFF80000000LL )
          v17 = v15->m_uint64;
      }
      break;
    case 30:
      LODWORD(v17) = strtol(v15->m_pszString, 0, 10);
      break;
    case 33:
      LODWORD(v17) = 0x7FFFFFFF;
      if ( v15->m_uint64 <= 0x7FFFFFFE )
        LODWORD(v17) = v15->m_uint64;
      break;
    case 34:
      LODWORD(v17) = v15->m_float64;
      break;
    case 37:
      LODWORD(v17) = 0x7FFFFFFF;
      if ( v15->m_int <= 0x7FFFFFFEu )
        LODWORD(v17) = v15->m_int;
      break;
    default:
      v26 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to int now\n", v26);
      LODWORD(v17) = 0;
      break;
  }
  this->m_nPlayerStatValue = v17;
  this->m_nStartingStatOffset = 0;
  v18 = pKeyValues->m_keyHashes.m_nCount;
  if ( v18 > 0 )
  {
    v19 = pKeyValues->m_keyHashes.m_nAllocated;
    for ( i = 0; v18 > i; ++i )
    {
      if ( v19 != 0 )
      {
        v21 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v19 > 9 )
          v21 = pKeyValues->m_keyHashes.m_pElements;
        if ( v21[i] == 1141408972 )
        {
LABEL_40:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v22 = pKeyValues->m_keyValues.m_pElements;
          else
            v22 = 0;
          v23 = &v22[i].m_value;
          m_nPlayerStatValue = v17;
          v25 = v23->m_type;
          if ( v25 != 0 )
            goto LABEL_43;
          goto LABEL_61;
        }
      }
      else if ( *(4 * i) == 1141408972 )
      {
        goto LABEL_40;
      }
    }
  }
  v23 = &CEntityKeyValues::sm_EmptyVariant;
  m_nPlayerStatValue = v17;
  v25 = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( v25 != 0 )
  {
LABEL_43:
    switch ( v25 )
    {
      case 1:
        m_char = v23->m_float != 0.0;
        goto LABEL_68;
      case 5:
      case 37:
        m_char = v23->m_int != 0;
        goto LABEL_68;
      case 6:
        m_char = v23->m_char;
        goto LABEL_68;
      case 26:
      case 33:
        m_char = v23->m_uint64 != 0;
        goto LABEL_68;
      case 30:
        v32 = v23->m_uint64;
        if ( strcmp(v23->m_pszString, "0") == 0 || strcmp(v32, "false") == 0 || strcmp(v32, "no") == 0 )
          goto LABEL_77;
        if ( strcmp(v32, "1") == 0 || strcmp(v32, "true") == 0 || strcmp(v32, "yes") == 0 )
          goto LABEL_69;
        Warning("Invalid conversion : CString '%s' to bool\n", v32);
        m_nPlayerStatValue = this->m_nPlayerStatValue;
        break;
      case 34:
        m_char = v23->m_float64 != 0.0;
LABEL_68:
        if ( m_char != 0 )
        {
LABEL_69:
          CurrentValue = CDotaSubquestPlayerStat::GetCurrentValue(this);
          m_nPlayerStatValue = this->m_nPlayerStatValue;
          this->m_nStartingStatOffset = CurrentValue;
        }
        else
        {
LABEL_77:
          m_nPlayerStatValue = v17;
        }
        break;
      default:
        v33 = VariantFieldTypeName(v25);
        Warning("No conversion from %s to bool now\n", v33);
        m_nPlayerStatValue = this->m_nPlayerStatValue;
        break;
    }
  }
LABEL_61:
  CDotaSubquestBase::SetTextReplaceValue(this, 1, m_nPlayerStatValue);
  CBaseEntity::ThinkSet(this, CDotaSubquestPlayerStat::SubquestThink, 0.0, 0, 0);
  v28 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(COERCE_UNSIGNED_INT(v28->m_flCurrentTime + 1.0)), v27, 0);
  }
  else
  {
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(1065353216), v27, 0);
  }
}


// CDotaSubquestPlayerStat::SubquestThink  (line 819, @0x0000000002669e60, libserver.so)
// calls: CDotaSubquestPlayerStat::GetCurrentValue, CDotaSubquestBase::SetTextReplaceValue, CBaseEntity::ThinkSet, CDotaSubquestBase::CompleteSubquest
void __fastcall CDotaSubquestPlayerStat::SubquestThink(CDotaSubquestPlayerStat *const this)
{
  int CurrentValue; // r12d

  CurrentValue = CDotaSubquestPlayerStat::GetCurrentValue(this);
  CDotaSubquestBase::SetTextReplaceValue(this, 0, CurrentValue);
  if ( CurrentValue >= this->m_nPlayerStatValue )
    CDotaSubquestBase::CompleteSubquest(this);
  if ( this->m_bCompleted.m_Value )
    CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
}


// CDotaSubquestPlayerStat::GetCurrentValue  (line 840, @0x0000000002669ba0, libserver.so)  // inlines: CEntityHandle, GetAssignedHero, GetDenies, GetEntryIndex, GetHandleEntity, GetInstance, GetLastHits, GetLevel, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*
// calls: DOTATutorial, CDOTA_Tutorial::GetHumanPlayer, CDOTA_PlayerResource::GetTeamDataForPlayer
// callers: CDotaSubquestPlayerStat::SubquestThink, CDotaSubquestPlayerStat::Spawn
// globals: g_pDOTAPlayerResource
int __fastcall CDotaSubquestPlayerStat::GetCurrentValue(CDotaSubquestPlayerStat *const this)
{
  CDOTA_Tutorial *v2; // rax
  CDOTAPlayer *HumanPlayer; // rax
  unsigned __int16 v4; // dx
  int v5; // esi
  int v6; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityInstance *m_pInstance; // rdi
  subquest_player_stat_types_t m_ePlayerStatType; // eax
  DataTeamPlayer_t *TeamDataForPlayer; // rax
  DataTeamPlayer_t *v13; // rax

  v2 = DOTATutorial();
  HumanPlayer = CDOTA_Tutorial::GetHumanPlayer(v2);
  if ( HumanPlayer == 0 )
    return -this->m_nStartingStatOffset;
  if ( HumanPlayer->m_hAssignedHero.m_Value.m_Index == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = HumanPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
    v5 = v4;
  }
  v6 = (HumanPlayer->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v4 & 0x7FFF;
  if ( (v6 + 2) <= 1 )
    return -this->m_nStartingStatOffset;
  v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
  if ( v7 == 0 )
    return -this->m_nStartingStatOffset;
  v8 = &v7[v5 & 0x1FF];
  if ( v8 == 0 )
    return -this->m_nStartingStatOffset;
  if ( v6 != v8->m_EHandle.m_Index )
    return -this->m_nStartingStatOffset;
  m_pInstance = v8->m_pInstance;
  if ( v8->m_pInstance == 0
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
    || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
  {
    return -this->m_nStartingStatOffset;
  }
  m_ePlayerStatType = this->m_ePlayerStatType;
  if ( m_ePlayerStatType == subquest_player_stat_types_t::SUBQUEST_PLAYER_STAT_LEVEL )
    return HIDWORD(m_pInstance[44].m_hPrivateScope.m_hScope) - this->m_nStartingStatOffset;
  if ( m_ePlayerStatType <= subquest_player_stat_types_t::SUBQUEST_PLAYER_STAT_LEVEL )
  {
    if ( m_ePlayerStatType != subquest_player_stat_types_t::SUBQUEST_PLAYER_STAT_GOLD )
      return -this->m_nStartingStatOffset;
    return (*(m_pInstance->_vptr_IHandleEntity + 397))(m_pInstance) - this->m_nStartingStatOffset;
  }
  else
  {
    if ( m_ePlayerStatType != subquest_player_stat_types_t::SUBQUEST_PLAYER_STAT_LAST_HITS )
    {
      if ( m_ePlayerStatType == subquest_player_stat_types_t::SUBQUEST_PLAYER_STAT_DENIES )
      {
        TeamDataForPlayer = CDOTA_PlayerResource::GetTeamDataForPlayer(
                              g_pDOTAPlayerResource,
                              m_pInstance[100]._vptr_IHandleEntity);
        if ( TeamDataForPlayer != 0 )
          return TeamDataForPlayer->m_iDenyCount.m_Value - this->m_nStartingStatOffset;
      }
      return -this->m_nStartingStatOffset;
    }
    v13 = CDOTA_PlayerResource::GetTeamDataForPlayer(g_pDOTAPlayerResource, m_pInstance[100]._vptr_IHandleEntity);
    if ( v13 == 0 )
      return -this->m_nStartingStatOffset;
    return v13->m_iLastHitCount.m_Value - this->m_nStartingStatOffset;
  }
}


// CDotaSubquestAbilityCastCount::Spawn  (line 880, @0x0000000002676f30, libserver.so)  // inlines: AssignTo, Base, DOTAQuestSystem, Element, FindKeyHash, Get<bool>, Get<int>, GetValue, GetValue<bool>, GetValue<int>, GetValueString, ListenForGameEvent, Min<long long unsigned int>, Min<unsigned int>, TempString, _V_strcmp, atoi, operator[]
// calls: CDotaSubquestBase::Spawn, KeyValuesSystem, strtol, VariantFieldTypeName, Warning, CDotaSubquestBase::SetTextReplaceValue
// strings: "No conversion from %s to int now\n", "dota_player_used_ability", "dota_non_player_used_ability", "false", "No conversion from %s to bool now\n", "dota_ability_channel_finished" (8 total)
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_2677086, jpt_26771F6, g_pDOTAQuestSystem
void __fastcall CDotaSubquestAbilityCastCount::Spawn(
        CDotaSubquestAbilityCastCount *const this,
        const CEntityKeyValues *pKeyValues)
{
  __int64 v4; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *m_pElements; // rcx
  __int64 v6; // r9
  __int64 m_nCount; // r8
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // si
  __int64 v9; // rdx
  CEntityVariant *p_m_value; // rdx
  const char *m_uint64; // rsi
  int v12; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v13; // cx
  __int64 v14; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v15; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v16; // rdx
  CEntityVariant *v17; // rcx
  int16 m_type; // ax
  uint64 v19; // rdx
  int v20; // edi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v21; // r8
  __int64 v22; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v23; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v24; // rsi
  CEntityVariant *v25; // rax
  const char *v26; // rax
  int16 v27; // cx
  char m_char; // cl
  CDOTA_QuestSystem *v29; // rsi
  bool v30; // zf
  CDOTA_QuestSystem *v31; // rsi
  IGameEventManager2 *v32; // rdi
  const char *v33; // rax
  const char *v34; // rax

  CDotaSubquestBase::Spawn(this, pKeyValues);
  v4 = KeyValuesSystem();
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_13:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_uint64 = "";
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_12;
    goto LABEL_14;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v9 = 0;
  v6 = m_nAllocated;
  while ( m_nAllocated == 0 )
  {
    m_pElements = 0;
    if ( *(4 * v9) == -738382091 )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v9 )
      goto LABEL_13;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( *(&m_pElements->m_value.m_int + v9) != -738382091 )
    goto LABEL_6;
LABEL_9:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    m_pElements = pKeyValues->m_keyValues.m_pElements;
  else
    m_pElements = 0;
  p_m_value = &m_pElements[v9].m_value;
  m_uint64 = "";
  if ( p_m_value->m_type == 30 )
LABEL_12:
    m_uint64 = p_m_value->m_uint64;
LABEL_14:
  this->m_sAbilityNameSymbol = (*(*v4 + 16LL))(v4, m_uint64, 1, m_pElements, m_nCount, v6);
  v12 = pKeyValues->m_keyHashes.m_nCount;
  if ( v12 <= 0 )
  {
LABEL_25:
    v17 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_26;
  }
  v13 = pKeyValues->m_keyHashes.m_nAllocated;
  v14 = 0;
  while ( 2 )
  {
    if ( v13 == 0 )
    {
      if ( *(4 * v14) == -431563947 )
        break;
      goto LABEL_19;
    }
    v15 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v13 > 9 )
      v15 = pKeyValues->m_keyHashes.m_pElements;
    if ( v15[v14] != -431563947 )
    {
LABEL_19:
      if ( v12 <= ++v14 )
        goto LABEL_25;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v16 = pKeyValues->m_keyValues.m_pElements;
  else
    v16 = 0;
  v17 = &v16[v14].m_value;
LABEL_26:
  m_type = v17->m_type;
  switch ( m_type )
  {
    case 0:
      LODWORD(v19) = 0;
      break;
    case 1:
      LODWORD(v19) = v17->m_float;
      break;
    case 5:
      LODWORD(v19) = v17->m_int;
      break;
    case 6:
      LODWORD(v19) = v17->m_char;
      break;
    case 26:
      LODWORD(v19) = 0x7FFFFFFF;
      if ( v17->m_int64 <= 0x7FFFFFFF )
      {
        LODWORD(v19) = 0x80000000;
        if ( v17->m_uint64 >= 0xFFFFFFFF80000000LL )
          v19 = v17->m_uint64;
      }
      break;
    case 30:
      LODWORD(v19) = strtol(v17->m_pszString, 0, 10);
      break;
    case 33:
      LODWORD(v19) = 0x7FFFFFFF;
      if ( v17->m_uint64 <= 0x7FFFFFFE )
        LODWORD(v19) = v17->m_uint64;
      break;
    case 34:
      LODWORD(v19) = v17->m_float64;
      break;
    case 37:
      LODWORD(v19) = 0x7FFFFFFF;
      if ( v17->m_int <= 0x7FFFFFFEu )
        LODWORD(v19) = v17->m_int;
      break;
    default:
      v26 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to int now\n", v26);
      LODWORD(v19) = 0;
      break;
  }
  this->m_nTargetCastCount = v19;
  this->m_nCurrentCastCount = 0;
  v20 = pKeyValues->m_keyHashes.m_nCount;
  if ( v20 <= 0 )
  {
LABEL_55:
    v25 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_56;
  }
  v21 = pKeyValues->m_keyHashes.m_nAllocated;
  v22 = 0;
  while ( 2 )
  {
    if ( v21 == 0 )
    {
      if ( *(4 * v22) == -1732288652 )
        break;
      goto LABEL_33;
    }
    v23 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v21 > 9 )
      v23 = pKeyValues->m_keyHashes.m_pElements;
    if ( v23[v22] != -1732288652 )
    {
LABEL_33:
      if ( v20 <= ++v22 )
        goto LABEL_55;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v24 = pKeyValues->m_keyValues.m_pElements;
  else
    v24 = 0;
  v25 = &v24[v22].m_value;
LABEL_56:
  v27 = v25->m_type;
  switch ( v27 )
  {
    case 0:
      goto LABEL_63;
    case 1:
      m_char = v25->m_float != 0.0;
      break;
    case 5:
    case 37:
      m_char = v25->m_int != 0;
      break;
    case 6:
      m_char = v25->m_char;
      break;
    case 26:
    case 33:
      m_char = v25->m_uint64 != 0;
      break;
    case 30:
      v33 = v25->m_uint64;
      if ( strcmp(v33, "0") == 0 || strcmp(v33, "false") == 0 || strcmp(v33, "no") == 0 )
      {
LABEL_63:
        m_char = 0;
      }
      else if ( strcmp(v33, "1") == 0 || strcmp(v33, "true") == 0 || strcmp(v33, "yes") == 0 )
      {
        m_char = 1;
      }
      else
      {
        Warning("Invalid conversion : CString '%s' to bool\n", v33);
        LODWORD(v19) = this->m_nTargetCastCount;
        m_char = 0;
      }
      break;
    case 34:
      m_char = v25->m_float64 != 0.0;
      break;
    default:
      v34 = VariantFieldTypeName(v27);
      Warning("No conversion from %s to bool now\n", v34);
      LODWORD(v19) = this->m_nTargetCastCount;
      m_char = 0;
      break;
  }
  this->m_bRequiresChannelSuccess = m_char;
  CDotaSubquestBase::SetTextReplaceValue(this, 1, v19);
  v29 = g_pDOTAQuestSystem;
  v30 = !this->m_bRequiresChannelSuccess;
  g_pDOTAQuestSystem->m_bRegisteredForEvents = 1;
  if ( v30 )
  {
    (*(gameeventmanager->_vptr_IBaseInterface + 4))(
      gameeventmanager,
      &v29->CGameEventListener,
      "dota_player_used_ability",
      1);
    v31 = g_pDOTAQuestSystem;
    v32 = gameeventmanager;
    g_pDOTAQuestSystem->m_bRegisteredForEvents = 1;
    (*(v32->_vptr_IBaseInterface + 4))(v32, &v31->CGameEventListener, "dota_non_player_used_ability", 1);
  }
  else
  {
    (*(gameeventmanager->_vptr_IBaseInterface + 4))(
      gameeventmanager,
      &v29->CGameEventListener,
      "dota_ability_channel_finished",
      1);
  }
}


// CDotaSubquestAbilityCastCount::AbilityCast  (line 908, @0x0000000002669ec0, libserver.so)
// calls: CDotaSubquestBase::SetTextReplaceValue, CDotaSubquestBase::CompleteSubquest
// callers: CDOTA_QuestSystem::FireGameEvent
void __fastcall CDotaSubquestAbilityCastCount::AbilityCast(CDotaSubquestAbilityCastCount *const this)
{
  int v1; // edx
  bool v2; // sf
  bool v3; // of

  v1 = this->m_nCurrentCastCount + 1;
  v3 = __OFSUB__(v1, this->m_nTargetCastCount);
  v2 = v1 - this->m_nTargetCastCount < 0;
  this->m_nCurrentCastCount = v1;
  if ( v2 != v3 )
    CDotaSubquestBase::SetTextReplaceValue(this, 0, v1);
  else
    CDotaSubquestBase::CompleteSubquest(this);
}


// CDOTA_QuestSystem::GameInit  (line 925, @0x0000000002657000, libserver.so)  // inlines: StopListeningForAllEvents
void __fastcall CDOTA_QuestSystem::GameInit(CDOTA_QuestSystem *const this, const EventGameInit_t *const msg)
{
  if ( this->m_bRegisteredForEvents )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
}


// CDOTA_QuestSystem::FireGameEvent  (line 934, @0x0000000002675e90, libserver.so)  // inlines: GetUnitName, Remove, String, ToCStr, ToDOTABaseNPC, _V_strcmp, operator==
// calls: CGameEntitySystem::FindEntityByClassname, KeyValuesSystem, CDotaSubquestAbilityCastCount::AbilityCast, strcmp, CUtlVectorBase<char const*, CUtlMemory<char const*, int> >::ShiftElementsLeft, CEntitySystem::FindPooledString, CDotaSubquestBase::CompleteSubquest, UTIL_EntityByIndex, CUtlVectorBase<CUtlSymbolLarge, CUtlMemory<CUtlSymbolLarge, int> >::ShiftElementsLeft
// strings: "subquest_*", "dota_ability_channel_finished", "abilityname", "dota_item_purchased", "itemname", "entindex_killed" (8 total)
void __fastcall CDOTA_QuestSystem::FireGameEvent(CDOTA_QuestSystem *const this, IGameEvent *event)
{
  CBaseEntity *v2; // r13
  CBaseEntity *EntityByClassname; // rax
  int v4; // eax
  bool v5; // r12
  __int64 v6; // r12
  __int64 v7; // rax
  const char *v8; // rax
  const char *v9; // r12
  int v10; // r15d
  const char **v11; // r14
  int v12; // r14d
  const char *v13; // rax
  CEntityIndex v14; // eax
  CBaseEntity *v15; // rax
  CBaseEntity *v16; // r12
  int v17; // r15d
  __int64 v18; // r14
  const char *delta; // rdx
  int m_FirstFree; // eax
  bool v21; // cf
  bool v22; // zf
  __int64 v23; // rax
  const char *v24; // rdi
  __int64 v25; // rcx
  char *v26; // rsi
  int v28; // [rsp+10h] [rbp-50h]
  __int64 v29; // [rsp+20h] [rbp-40h]

  v2 = 0;
  while ( 1 )
  {
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v2, "subquest_*");
    v2 = EntityByClassname;
    if ( EntityByClassname == 0 )
      break;
    if ( BYTE1(EntityByClassname[1].m_pfnTouch.__pfn) == 0 )
    {
      v4 = (*(EntityByClassname->_vptr_IHandleEntity + 207))(EntityByClassname);
      if ( v4 == 2 )
      {
        v14.m_Data = (*(event->_vptr_IGameEvent + 8))(event, "entindex_killed", 0);
        v15 = UTIL_EntityByIndex(v14);
        v16 = v15;
        if ( v15 != 0 && v15->m_bIsDOTANPC )
        {
          v17 = v2[1].m_DamageModifiers.m_FirstFree - 1;
          if ( v17 < 0 )
          {
            m_FirstFree = v2[1].m_DamageModifiers.m_FirstFree;
          }
          else
          {
            v18 = 8LL * v17;
            do
            {
              delta = "";
              if ( v16[4].m_pfnUse.__delta != 0 )
                delta = v16[4].m_pfnUse.__delta;
              CEntitySystem::FindPooledString(g_pEntitySystem, delta);
              if ( *(*&v2[1].m_DamageModifiers.m_NumAlloced + v18) == v29 )
              {
                CUtlVectorBase<CUtlSymbolLarge,CUtlMemory<CUtlSymbolLarge,int>>::ShiftElementsLeft(
                  &v2[1].m_DamageModifiers.m_FirstFree,
                  v17,
                  1);
                m_FirstFree = v2[1].m_DamageModifiers.m_FirstFree - 1;
                v2[1].m_DamageModifiers.m_FirstFree = m_FirstFree;
                goto LABEL_35;
              }
              --v17;
              v18 -= 8;
            }
            while ( v17 != -1 );
            m_FirstFree = v2[1].m_DamageModifiers.m_FirstFree;
          }
LABEL_35:
          if ( m_FirstFree <= 0 )
LABEL_36:
            CDotaSubquestBase::CompleteSubquest(v2);
        }
      }
      else if ( v4 <= 2 )
      {
        if ( v4 == 1 && strcmp((*(event->_vptr_IGameEvent + 2))(event), "dota_item_purchased") == 0 )
        {
          v8 = (*(event->_vptr_IGameEvent + 11))(event, "itemname", "");
          v9 = v8;
          if ( v8 != 0 && *v8 != 0 )
          {
            v28 = v2[1].m_DamageModifiers.m_FirstFree;
            v10 = v28 - 1;
            if ( v28 - 1 < 0 )
            {
LABEL_50:
              v12 = v28;
            }
            else
            {
              v11 = (*&v2[1].m_DamageModifiers.m_NumAlloced + 8LL * v10);
              while ( strcmp(*v11, v9) != 0 )
              {
                --v10;
                --v11;
                if ( v10 == -1 )
                  goto LABEL_50;
              }
              CUtlVectorBase<char const*,CUtlMemory<char const*,int>>::ShiftElementsLeft(
                &v2[1].m_DamageModifiers.m_FirstFree,
                v10,
                1);
              v12 = v2[1].m_DamageModifiers.m_FirstFree - 1;
              v2[1].m_DamageModifiers.m_FirstFree = v12;
            }
          }
          else
          {
            v12 = v2[1].m_DamageModifiers.m_FirstFree;
          }
          if ( v12 <= 0 )
            goto LABEL_36;
        }
      }
      else if ( v4 == 3 )
      {
        v13 = (*(event->_vptr_IGameEvent + 2))(event);
        CEntitySystem::FindPooledString(g_pEntitySystem, v13);
        if ( *&v2[1].m_DamageModifiers.m_FirstFree == v29 )
          goto LABEL_36;
      }
      else if ( v4 == 5 )
      {
        v5 = 0;
        if ( LOBYTE(v2[1].m_DamageModifiers.m_NumAlloced) != 0 )
          goto LABEL_48;
        v5 = 1;
        v23 = (*(event->_vptr_IGameEvent + 2))(event);
        v24 = "dota_non_player_used_ability";
        v25 = 29;
        v26 = v23;
        do
        {
          if ( v25 == 0 )
            break;
          v21 = *v26 < *v24;
          v22 = *v26++ == *v24++;
          --v25;
        }
        while ( v22 );
        if ( (!v21 && !v22) != v21 )
          v5 = strcmp((*(event->_vptr_IGameEvent + 2))(event, v26), "dota_player_used_ability") == 0;
        if ( LOBYTE(v2[1].m_DamageModifiers.m_NumAlloced) != 0 )
        {
LABEL_48:
          if ( strcmp((*(event->_vptr_IGameEvent + 2))(event), "dota_ability_channel_finished") == 0
            && (*(event->_vptr_IGameEvent + 7))(event, "interrupted", 0) == 0 )
          {
            goto LABEL_11;
          }
        }
        if ( v5 )
        {
LABEL_11:
          v6 = (*(event->_vptr_IGameEvent + 11))(event, "abilityname", "");
          if ( v6 != 0 )
          {
            v7 = KeyValuesSystem();
            if ( (*(*v7 + 16LL))(v7, v6, 1) == v2[1].m_DamageModifiers.m_Tail )
              CDotaSubquestAbilityCastCount::AbilityCast(v2);
          }
        }
      }
    }
  }
}


// CDOTA_QuestSystem::CompleteQuestByName  (line 1038, @0x0000000002669d40, libserver.so)  // inlines: _V_strcmp
// calls: CGameEntitySystem::FindEntityByClassname, strcmp, CDotaQuest::CompleteQuest
// callers: CDOTA_Tutorial::CompleteQuest, CDOTA_Tutorial::ParseLessonKeys
void __fastcall CDOTA_QuestSystem::CompleteQuestByName(CDOTA_QuestSystem *const this, const char *pszQuestName)
{
  CDotaQuest *v3; // rbx
  CBaseEntity *EntityByClassname; // rax

  v3 = 0;
  while ( 1 )
  {
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v3, "quest");
    v3 = EntityByClassname;
    if ( EntityByClassname == 0 )
      break;
    if ( strcmp(&EntityByClassname[2].m_NetworkTransmitComponent.m_PVSInfo.m_pClustersInline[2], pszQuestName) == 0 )
      CDotaQuest::CompleteQuest(v3);
  }
}


// CDOTA_QuestSystem::SubquestCompleted  (line 1054, @0x0000000002669db0, libserver.so)
// calls: CDotaQuest::SubquestCompleted, CGameEntitySystem::FindEntityByClassname
// callers: CDotaSubquestBase::CompleteSubquest
void __fastcall CDOTA_QuestSystem::SubquestCompleted(CDOTA_QuestSystem *const this, CDotaSubquestBase *pSubquest)
{
  CBaseEntity *v3; // rbx
  CDotaQuest *EntityByClassname; // rax

  v3 = 0;
  while ( 1 )
  {
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v3, "quest");
    v3 = EntityByClassname;
    if ( EntityByClassname == 0 )
      break;
    CDotaQuest::SubquestCompleted(EntityByClassname, pSubquest);
  }
}


