// Reconstructed from DWARF by pahole; not original source.

// src/game/server/envhudhint.cpp:20
class CEnvHudHint : public CPointEntity {
public:

private:

	string_t m_iszMessage;  // +0x308

	static datamap_t m_DataMap;
	typedef CPointEntity BaseClass;

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
	CEnvHudHint(CEnvHudHint &);
	CEnvHudHint(CEnvHudHint &);
	CEnvHudHint();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	void InputShowHudHint(inputdata_t &);
	void InputHideHudHint(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CEnvHudHint();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[34] GetDataDescMap
	// sizeof = 784
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnvHudHint::~CEnvHudHint  (line 20, @0x0000000002210690, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CEnvHudHint::~CEnvHudHint(CEnvHudHint *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CEnvHudHint::~CEnvHudHint  (line 20, @0x00000000022106b0, libserver.so)  // inlines: ~CEnvHudHint, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CEnvHudHint::~CEnvHudHint(CEnvHudHint *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvHudHint::GetEntityClass  (line 22, @0x000000000220dea0, libserver.so)
CEntityClass *__cdecl CEnvHudHint::GetEntityClass()
{
  return g_pEntityCEnvHudHintClass;
}


// CEnvHudHint::Schema_DynamicBinding  (line 22, @0x000000000220deb0, libserver.so)
// globals: CEnvHudHint::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvHudHint::Schema_DynamicBinding(const CEnvHudHint *const this)
{
  return CEnvHudHint::s_pSchemaBinding;
}


// CEnvHudHint::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 22, @0x000000000220dec0, libserver.so)
// globals: CEnvHudHint::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvHudHint::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvHudHint::CEntityInstanceEntityClass *const this)
{
  return CEnvHudHint::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvHudHint::CEntityInstanceEntityClass::DestructInstance  (line 22, @0x000000000220ded0, libserver.so)  // inlines: Destruct<CEnvHudHint>
void __fastcall CEnvHudHint::CEntityInstanceEntityClass::DestructInstance(
        CEnvHudHint::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvHudHint::CEntityInstanceEntityClass::FreeInstance  (line 22, @0x000000000220def0, libserver.so)
void __fastcall CEnvHudHint::CEntityInstanceEntityClass::FreeInstance(
        CEnvHudHint::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvHudHint::CEntityInstanceEntityClass::CanAllocate  (line 22, @0x000000000220df10, libserver.so)
bool __fastcall CEnvHudHint::CEntityInstanceEntityClass::CanAllocate(
        const CEnvHudHint::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvHudHint::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 22, @0x000000000220df20, libserver.so)
// globals: CEnvHudHint::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvHudHint::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvHudHint::CEntityInstanceEntityClass *const this)
{
  return CEnvHudHint::s_pSchemaBinding;
}


// CEnvHudHint::CEntityInstanceEntityClass::AllocateInstance  (line 22, @0x000000000220fa60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvHudHint::CEntityInstanceEntityClass::AllocateInstance(
        CEnvHudHint::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 784);
  memset(v1, 0, 0x310u);
  return v1;
}


// CEnvHudHint::CEntityInstanceEntityClass::ConstructInstance  (line 22, @0x000000000220ffc0, libserver.so)  // inlines: CEnvHudHint, CPointEntity, CUtlSymbolLarge, Construct<CEnvHudHint>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CEnvHudHint::CEntityInstanceEntityClass::ConstructInstance(
        CEnvHudHint::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 97) = 0;
    *p = &off_402DCD0;
  }
  return p;
}


// CEnvHudHint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 22, @0x0000000002212300, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvHudHint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvHudHint::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CEnvHudHint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 22, @0x0000000002212320, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvHudHint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvHudHint::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvHudHint::GetEntityClassInternal  (line 22, @0x00000000022157d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "env_hudhint", "CEnvHudHint"
// globals: `guard variable for'CEnvHudHint::GetEntityClassInternal(void)::g_EntityCEnvHudHintClass, CEnvHudHint::GetEntityClassInternal(void)::g_EntityCEnvHudHintClass, __dso_handle, CEnvHudHint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvHudHint::GetEntityClassInfo(void)::g_EntityCEnvHudHintClassInfo, CEnvHudHint::GetEntityClassInfo(void)::g_EntityCEnvHudHintClassInfo
CEntityClass *__cdecl CEnvHudHint::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvHudHint::GetEntityClassInternal(void)::g_EntityCEnvHudHintClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvHudHint::GetEntityClassInternal(void)::g_EntityCEnvHudHintClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvHudHint::GetEntityClassInternal(void)::g_EntityCEnvHudHintClass);
    CEnvHudHint::GetEntityClassInternal(void)::g_EntityCEnvHudHintClass._vptr_CEntityClass = off_402DC50;
    __cxa_guard_release(&`guard variable for'CEnvHudHint::GetEntityClassInternal(void)::g_EntityCEnvHudHintClass);
    __cxa_atexit(
      CEnvHudHint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvHudHint::GetEntityClassInternal(void)::g_EntityCEnvHudHintClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvHudHintClass != 0 )
    return &CEnvHudHint::GetEntityClassInternal(void)::g_EntityCEnvHudHintClass;
  if ( `guard variable for'CEnvHudHint::GetEntityClassInfo(void)::g_EntityCEnvHudHintClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvHudHint::GetEntityClassInfo(void)::g_EntityCEnvHudHintClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvHudHint::GetEntityClassInfo(void)::g_EntityCEnvHudHintClassInfo,
      "CEnvHudHint",
      "env_hudhint",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvHudHint::GetEntityClassInfo(void)::g_EntityCEnvHudHintClassInfo);
  }
  CEnvHudHint::GetEntityClassInternal(void)::g_EntityCEnvHudHintClass.m_pClassInfo = &CEnvHudHint::GetEntityClassInfo(void)::g_EntityCEnvHudHintClassInfo;
  CEnvHudHint::GetEntityClassInternal(void)::g_EntityCEnvHudHintClass.m_pBaseClassInfo = CEnvHudHint::GetEntityClassInfo(void)::g_EntityCEnvHudHintClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvHudHintClass = &CEnvHudHint::GetEntityClassInternal(void)::g_EntityCEnvHudHintClass;
  CEnvHudHint::GetEntityClassInfo(void)::g_EntityCEnvHudHintClassInfo.m_pClass = &CEnvHudHint::GetEntityClassInternal(void)::g_EntityCEnvHudHintClass;
  CEnvHudHint::GetEntityClassInternal(void)::g_EntityCEnvHudHintClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEnvHudHintClass->m_pComponentOverrides = 0;
  return &CEnvHudHint::GetEntityClassInternal(void)::g_EntityCEnvHudHintClass;
}


// CEnvHudHint::GetDataDescMap  (line 34, @0x00000000021ee5a0, libserver.so)
// globals: CEnvHudHint::m_DataMap
datamap_t *__fastcall CEnvHudHint::GetDataDescMap(CEnvHudHint *const this)
{
  return &CEnvHudHint::m_DataMap;
}


// CEnvHudHint::AddDatadescMetadataKeys  (line 34, @0x00000000021f8ac0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvHudHint::GetEntityClass(void)
void __fastcall CEnvHudHint::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvHudHint::GetEntityClass);
}


// CEnvHudHint::GetBaseMap  (line 34, @0x00000000021f8ae0, libserver.so)
datamap_t *__cdecl CEnvHudHint::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CEnvHudHint>  (line 34, @0x00000000021f8af0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CEnvHudHint"
// globals: `guard variable for'DataMapInit<CEnvHudHint>(CEnvHudHint *)::nameHolder, CEnvHudHint::GetEntityClass(void), CEnvHudHint::m_DataMap, DataMapInit<CEnvHudHint>(CEnvHudHint *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvHudHint>(CEnvHudHint *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEnvHudHint>(CEnvHudHint *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvHudHint>(CEnvHudHint *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvHudHint>(CEnvHudHint *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvHudHint>(CEnvHudHint *)::nameHolder.m_pszBase = "CEnvHudHint";
    DataMapInit<CEnvHudHint>(CEnvHudHint *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvHudHint>(CEnvHudHint *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvHudHint>(CEnvHudHint *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvHudHint>(CEnvHudHint *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvHudHint>(CEnvHudHint *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvHudHint>(CEnvHudHint *)::nameHolder,
      &_dso_handle);
  }
  CEnvHudHint::m_DataMap.dataNumFields = 3;
  CEnvHudHint::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  CEnvHudHint::m_DataMap.dataDesc = &DataMapInit<CEnvHudHint>(CEnvHudHint *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvHudHint::m_DataMap, CEnvHudHint::GetEntityClass);
  return &CEnvHudHint::m_DataMap;
}


// CEnvHudHint::Spawn  (line 47, @0x00000000021ef2e0, libserver.so)
// calls: CPointEntity::Spawn, CBaseEntity::SetMoveType
void __fastcall CEnvHudHint::Spawn(CEnvHudHint *const this, const CEntityKeyValues *pKeyValues)
{
  CPointEntity::Spawn(this, pKeyValues);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
}


// CEnvHudHint::InputShowHudHint  (line 58, @0x000000000220ce00, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, CEventPosterBase, CNetMessagePB, CSingleUserRecipientFilter, CUserMessageKeyHintText_t, CUserMessagePB, FindGameEvent<CUserMessageKeyHintText_t>, FindOrCreateGameEvent<CUserMessageKeyHintText_t>, PostEvent<CUserMessageKeyHintText_t>, String, ToCStr, add_messages, assign, length, ~CEventPosterBase, ~CNetMessagePB, ~CSingleUserRecipientFilter, ~CUserMessageKeyHintText_t, ~CUserMessagePB
// calls: UTIL_GetLocalPlayer, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CRecipientFilter::MakeReliable, CUserMessageKeyHintText::CUserMessageKeyHintText, google::protobuf::internal::StringTypeHandlerBase::New(void), strlen, std::string::assign(char const*,ulong), CUserMessageKeyHintText::~CUserMessageKeyHintText, CRecipientFilter::~CRecipientFilter, google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), __stack_chk_fail (14 total)
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageKeyHintText_t>(bool)::s_hEvent
void __fastcall CEnvHudHint::InputShowHudHint(CEnvHudHint *const this, inputdata_t *const inputdata)
{
  CBasePlayer *pActivator; // rbx
  google::protobuf::internal::StringTypeHandlerBase *v5; // rdi
  bool v6; // zf
  const char *m_pAsString; // rbx
  __int64 current_size; // rax
  std::string *v9; // rax
  __int64 v10; // rdx
  std::string *v11; // r13
  size_t v12; // rax
  IGameEventSystem *v13; // rbx
  void (__fastcall *v14)(IGameEventSystem *, _QWORD, _QWORD, CSingleUserRecipientFilter *, __int64, _QWORD *, __int64); // r13
  __int64 v15; // [rsp+10h] [rbp-1C0h]
  unsigned int v16; // [rsp+1Ch] [rbp-1B4h]
  _QWORD v17[3]; // [rsp+28h] [rbp-1A8h] BYREF
  google::protobuf::internal::RepeatedPtrFieldBase v18; // [rsp+40h] [rbp-190h] BYREF
  unsigned int v19; // [rsp+58h] [rbp-178h]
  CSingleUserRecipientFilter user; // [rsp+60h] [rbp-170h] BYREF
  unsigned __int64 v21; // [rsp+198h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  if ( inputdata->pActivator != 0 && (*(inputdata->pActivator->_vptr_IHandleEntity + 140))(inputdata->pActivator) != 0 )
    pActivator = inputdata->pActivator;
  else
    pActivator = UTIL_GetLocalPlayer();
  if ( pActivator != 0 && (*(pActivator->_vptr_IHandleEntity + 100))(pActivator) != 0 )
  {
    CRecipientFilter::CRecipientFilter(&user);
    user._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::AddRecipient(&user, pActivator);
    CRecipientFilter::MakeReliable(&user);
    CUserMessageKeyHintText::CUserMessageKeyHintText(v17);
    v6 = this->m_iszMessage.u.m_Id == 0;
    v19 = 0;
    v17[0] = off_402A610;
    m_pAsString = "";
    if ( !v6 )
      m_pAsString = this->m_iszMessage.u.m_pAsString;
    current_size = v18.current_size_;
    if ( v18.current_size_ < v18.allocated_size_ )
    {
      ++v18.current_size_;
      v11 = v18.elements_[current_size];
    }
    else
    {
      if ( v18.allocated_size_ == v18.total_size_ )
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&v18, v18.allocated_size_ + 1);
      v9 = google::protobuf::internal::StringTypeHandlerBase::New(v5);
      v10 = v18.current_size_;
      v11 = v9;
      ++v18.allocated_size_;
      ++v18.current_size_;
      v18.elements_[v10] = v9;
    }
    v12 = strlen(m_pAsString);
    std::string::assign(v11, m_pAsString, v12);
    v13 = g_pGameEventSystem;
    v15 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageKeyHintText_t>(bool)::s_hEvent;
    v16 = v19;
    v14 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CUserMessageKeyHintText_t>(bool)::s_hEvent);
    v14(v13, v16, 0, &user, v15, v17, 48);
    v17[0] = &off_402A490;
    CUserMessageKeyHintText::~CUserMessageKeyHintText(v17);
    user._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::~CRecipientFilter(&user);
  }
}


// CEnvHudHint::InputHideHudHint  (line 86, @0x000000000220d0a0, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, CEventPosterBase, CNetMessagePB, CSingleUserRecipientFilter, CUserMessageKeyHintText_t, CUserMessagePB, FindGameEvent<CUserMessageKeyHintText_t>, FindOrCreateGameEvent<CUserMessageKeyHintText_t>, PostEvent<CUserMessageKeyHintText_t>, add_messages, assign, ~CEventPosterBase, ~CNetMessagePB, ~CSingleUserRecipientFilter, ~CUserMessageKeyHintText_t, ~CUserMessagePB
// calls: UTIL_GetLocalPlayer, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CRecipientFilter::MakeReliable, CUserMessageKeyHintText::CUserMessageKeyHintText, google::protobuf::internal::StringTypeHandlerBase::New(void), std::string::assign(char const*,ulong), CUserMessageKeyHintText::~CUserMessageKeyHintText, CRecipientFilter::~CRecipientFilter, google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), __stack_chk_fail, CEventPosterBase<CUserMessageKeyHintText_t, 255>::~CEventPosterBase (13 total)
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageKeyHintText_t>(bool)::s_hEvent
void __fastcall CEnvHudHint::InputHideHudHint(CEnvHudHint *const this, inputdata_t *const inputdata)
{
  CBasePlayer *pActivator; // rbx
  google::protobuf::internal::StringTypeHandlerBase *v4; // rdi
  __int64 current_size; // rax
  std::string *v6; // rax
  __int64 v7; // rdx
  std::string *v8; // rdi
  IGameEventSystem *v9; // r13
  void (__fastcall *v10)(IGameEventSystem *, _QWORD, _QWORD, CSingleUserRecipientFilter *, __int64, _QWORD *, __int64); // r14
  __int64 v11; // [rsp+10h] [rbp-1C0h]
  unsigned int v12; // [rsp+1Ch] [rbp-1B4h]
  _QWORD v13[3]; // [rsp+28h] [rbp-1A8h] BYREF
  google::protobuf::internal::RepeatedPtrFieldBase v14; // [rsp+40h] [rbp-190h] BYREF
  unsigned int v15; // [rsp+58h] [rbp-178h]
  CSingleUserRecipientFilter user; // [rsp+60h] [rbp-170h] BYREF
  unsigned __int64 v17; // [rsp+198h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  if ( inputdata->pActivator != 0 && (*(inputdata->pActivator->_vptr_IHandleEntity + 140))(inputdata->pActivator) != 0 )
    pActivator = inputdata->pActivator;
  else
    pActivator = UTIL_GetLocalPlayer();
  if ( pActivator != 0 && (*(pActivator->_vptr_IHandleEntity + 100))(pActivator) != 0 )
  {
    CRecipientFilter::CRecipientFilter(&user);
    user._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::AddRecipient(&user, pActivator);
    CRecipientFilter::MakeReliable(&user);
    CUserMessageKeyHintText::CUserMessageKeyHintText(v13);
    v15 = 0;
    v13[0] = off_402A610;
    current_size = v14.current_size_;
    if ( v14.current_size_ < v14.allocated_size_ )
    {
      ++v14.current_size_;
      v8 = v14.elements_[current_size];
    }
    else
    {
      if ( v14.allocated_size_ == v14.total_size_ )
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&v14, v14.allocated_size_ + 1);
      v6 = google::protobuf::internal::StringTypeHandlerBase::New(v4);
      v7 = v14.current_size_;
      v8 = v6;
      ++v14.allocated_size_;
      ++v14.current_size_;
      v14.elements_[v7] = v6;
    }
    std::string::assign(v8, "", 0);
    v9 = g_pGameEventSystem;
    v11 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageKeyHintText_t>(bool)::s_hEvent;
    v12 = v15;
    v10 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CUserMessageKeyHintText_t>(bool)::s_hEvent);
    v10(v9, v12, 0, &user, v11, v13, 48);
    v13[0] = &off_402A490;
    CUserMessageKeyHintText::~CUserMessageKeyHintText(v13);
    user._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::~CRecipientFilter(&user);
  }
}


